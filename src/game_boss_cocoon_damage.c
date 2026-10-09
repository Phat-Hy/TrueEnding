#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80013D60(void);
extern void fn_8000D124(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_80056DB8(void);
extern void fn_80057A64(void);
extern void fn_80059468(void);
extern void fn_80063D3C(void);
extern void fn_8006AFF8(void);
extern void fn_8006CA80(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_8012DB04(void);
extern void fn_8013655C(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015AC48(void);
extern void fn_8015E7A0(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_8020A780(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_802AC550(void);
extern void fn_802BABC0(void);
extern void fn_802FCF14(void);
extern void fn_8035B694(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_8045ABB4(void);
extern void fn_8045B82C(void);
extern void fn_8045BFFC(void);
extern void fn_8045CB24(void);
extern void fn_8045D3A4(void);
extern void fn_8045DF34(void);
extern void fn_8045E548(void);
extern void fn_8045E780(void);
extern void fn_8045EDEC(void);
extern void fn_8045F4CC(void);
extern void fn_80470580(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80682544(void);
extern void fn_8068B100(void);
extern void fn_806958E0(void);

/* External data declarations */
extern u8 jumptable_8078F7A0[];
extern u8 lbl_807549D0[];
extern u8 lbl_80754C24[];
extern u8 lbl_80754DB8[];
extern u8 lbl_80754DE0[];
extern u8 lbl_80777668[];
extern u8 lbl_8078F7F0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8A48[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886B78;
extern u32 lbl_80886B80;
extern u32 lbl_80886B84;
extern u32 lbl_80886BD0;
extern u32 lbl_80886BEC;
extern u32 lbl_80886C00;
extern u32 lbl_80886C08;
extern u32 lbl_80886C0C;
extern u32 lbl_80886C10;
extern u32 lbl_80886C1C;
extern u32 lbl_80886C20;
extern u32 lbl_80886C24;
extern u32 lbl_80886C28;
extern u32 lbl_80886C2C;
extern u32 lbl_80886C30;
extern u32 lbl_80886C34;
extern u32 lbl_80886C38;
extern u32 lbl_80886C3C;
extern u32 lbl_80886C40;
extern u32 lbl_80886C44;
extern u32 lbl_80886C48;
extern u32 lbl_80886C4C;
extern u32 lbl_80886C50;
extern u32 lbl_80886C54;
extern u32 lbl_80886C58;
extern u32 lbl_80886C5C;
extern u32 lbl_80886C60;

/* Function declarations */
void fn_80457C48(void);
void fn_80457E98(void);
void fn_8045817C(void);
void fn_8045824C(void);
void fn_80458270(void);
void fn_80458550(void);
void fn_80458590(void);
void fn_8045883C(void);
void fn_80459358(void);

asm void fn_80457C48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r8, 0x1908(r3)
    cmpwi r8, 0x0
    beq lbl_fn_80457C48_000000BC
    lwz r7, 0x38(r8)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_80457C48_0000004C
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_80457C48_0000004C
    li r4, 0x1
lbl_fn_80457C48_0000004C:
    cmpwi r4, 0x0
    beq lbl_fn_80457C48_00000068
    lwz r4, 0x7e0(r8)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80457C48_00000068
    li r0, 0x1
lbl_fn_80457C48_00000068:
    cmpwi r0, 0x0
    beq lbl_fn_80457C48_0000009C
    lwz r0, 0x55c(r8)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80457C48_00000090
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_80457C48_00000090
    li r4, 0x1
lbl_fn_80457C48_00000090:
    cmpwi r4, 0x0
    bne lbl_fn_80457C48_0000009C
    li r5, 0x1
lbl_fn_80457C48_0000009C:
    cmpwi r5, 0x0
    beq lbl_fn_80457C48_000000BC
    lwz r0, 0x55c(r8)
    cmpwi r0, 0x6
    bne lbl_fn_80457C48_000000BC
    lwz r0, 0x560(r8)
    cmpwi r0, 0x11
    beq lbl_fn_80457C48_000001E8
lbl_fn_80457C48_000000BC:
    cmpwi r8, 0x0
    beq lbl_fn_80457C48_000001D8
    lwz r7, 0x38(r8)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_80457C48_000000F0
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_80457C48_000000F0
    li r4, 0x1
lbl_fn_80457C48_000000F0:
    cmpwi r4, 0x0
    beq lbl_fn_80457C48_0000010C
    lwz r4, 0x7e0(r8)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80457C48_0000010C
    li r0, 0x1
lbl_fn_80457C48_0000010C:
    cmpwi r0, 0x0
    beq lbl_fn_80457C48_00000140
    lwz r0, 0x55c(r8)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80457C48_00000134
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_80457C48_00000134
    li r4, 0x1
lbl_fn_80457C48_00000134:
    cmpwi r4, 0x0
    bne lbl_fn_80457C48_00000140
    li r5, 0x1
lbl_fn_80457C48_00000140:
    cmpwi r5, 0x0
    beq lbl_fn_80457C48_000001C8
    lfs f5, 0x530(r8)
    lfs f0, 0x530(r3)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x8
    lfs f4, 0x528(r8)
    fsubs f5, f5, f0
    lfs f0, lbl_80886B80
    mr r4, r3
    fsubs f3, f4, f3
    stfs f5, 0x10(r1)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F98D0
    lfs f4, 0x8(r1)
    addi r3, r1, 0x8
    lfs f5, lbl_80886C00
    li r4, -0x1
    lfs f3, 0xc(r1)
    lfs f0, 0x10(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f2, f0, f5
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x1908(r31)
    psq_st f1, 0x6b8(r3), 0, 0
    stfs f2, 0x6c0(r3)
    lwz r3, 0x1908(r31)
    bl fn_8015AC48
    b lbl_fn_80457C48_000001D0
lbl_fn_80457C48_000001C8:
    li r0, 0x0
    stw r0, 0xf1c(r8)
lbl_fn_80457C48_000001D0:
    li r0, 0x0
    stw r0, 0x1908(r31)
lbl_fn_80457C48_000001D8:
    li r0, 0x0
    stw r0, 0x14e8(r31)
    stw r0, 0x14e4(r31)
    b lbl_fn_80457C48_0000023C
lbl_fn_80457C48_000001E8:
    lwz r0, 0x14e8(r3)
    cmpwi r0, 0x5a
    ble lbl_fn_80457C48_0000023C
    lfs f0, lbl_80886B78
    li r4, 0x0
    li r6, 0x3
    li r0, 0x1
    stw r4, 0x14e8(r3)
    li r4, 0x0
    lfs f1, lbl_80886B80
    li r5, 0x141
    stw r6, 0x14e4(r3)
    li r6, 0x0
    lfs f2, lbl_80886B84
    li r7, 0x1
    stw r0, 0x1838(r3)
    li r8, 0x1
    stfs f0, 0x1738(r3)
    stfs f0, 0x1724(r3)
    addi r3, r3, 0x14ec
    bl fn_80097C08
lbl_fn_80457C48_0000023C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80457E98(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r8, 0x1908(r3)
    cmpwi r8, 0x0
    beq lbl_fn_80457E98_00000314
    lwz r7, 0x38(r8)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_80457E98_000002A4
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_80457E98_000002A4
    li r4, 0x1
lbl_fn_80457E98_000002A4:
    cmpwi r4, 0x0
    beq lbl_fn_80457E98_000002C0
    lwz r4, 0x7e0(r8)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80457E98_000002C0
    li r0, 0x1
lbl_fn_80457E98_000002C0:
    cmpwi r0, 0x0
    beq lbl_fn_80457E98_000002F4
    lwz r0, 0x55c(r8)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80457E98_000002E8
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_80457E98_000002E8
    li r4, 0x1
lbl_fn_80457E98_000002E8:
    cmpwi r4, 0x0
    bne lbl_fn_80457E98_000002F4
    li r5, 0x1
lbl_fn_80457E98_000002F4:
    cmpwi r5, 0x0
    beq lbl_fn_80457E98_00000314
    lwz r0, 0x55c(r8)
    cmpwi r0, 0x6
    bne lbl_fn_80457E98_00000314
    lwz r0, 0x560(r8)
    cmpwi r0, 0x11
    beq lbl_fn_80457E98_00000440
lbl_fn_80457E98_00000314:
    cmpwi r8, 0x0
    beq lbl_fn_80457E98_00000430
    lwz r7, 0x38(r8)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_80457E98_00000348
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_80457E98_00000348
    li r4, 0x1
lbl_fn_80457E98_00000348:
    cmpwi r4, 0x0
    beq lbl_fn_80457E98_00000364
    lwz r4, 0x7e0(r8)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80457E98_00000364
    li r0, 0x1
lbl_fn_80457E98_00000364:
    cmpwi r0, 0x0
    beq lbl_fn_80457E98_00000398
    lwz r0, 0x55c(r8)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80457E98_0000038C
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_80457E98_0000038C
    li r4, 0x1
lbl_fn_80457E98_0000038C:
    cmpwi r4, 0x0
    bne lbl_fn_80457E98_00000398
    li r5, 0x1
lbl_fn_80457E98_00000398:
    cmpwi r5, 0x0
    beq lbl_fn_80457E98_00000420
    lfs f5, 0x530(r8)
    lfs f0, 0x530(r3)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x8
    lfs f4, 0x528(r8)
    fsubs f5, f5, f0
    lfs f0, lbl_80886B80
    mr r4, r3
    fsubs f3, f4, f3
    stfs f5, 0x10(r1)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F98D0
    lfs f4, 0x8(r1)
    addi r3, r1, 0x8
    lfs f5, lbl_80886C00
    li r4, -0x1
    lfs f3, 0xc(r1)
    lfs f0, 0x10(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f2, f0, f5
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x1908(r31)
    psq_st f1, 0x6b8(r3), 0, 0
    stfs f2, 0x6c0(r3)
    lwz r3, 0x1908(r31)
    bl fn_8015AC48
    b lbl_fn_80457E98_00000428
lbl_fn_80457E98_00000420:
    li r0, 0x0
    stw r0, 0xf1c(r8)
lbl_fn_80457E98_00000428:
    li r0, 0x0
    stw r0, 0x1908(r31)
lbl_fn_80457E98_00000430:
    li r0, 0x0
    stw r0, 0x14e8(r31)
    stw r0, 0x14e4(r31)
    b lbl_fn_80457E98_00000518
lbl_fn_80457E98_00000440:
    lfs f31, 0x1720(r3)
    li r4, 0x0
    addi r3, r3, 0x14ec
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80457E98_00000468
    li r0, 0x0
    stw r0, 0x14e8(r31)
    stw r0, 0x14e4(r31)
lbl_fn_80457E98_00000468:
    lfs f4, 0x1720(r31)
    lfs f3, lbl_80886C08
    lfs f0, lbl_80886BEC
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80457E98_00000518
    lwz r0, 0x1908(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80457E98_00000518
    lfs f31, 0x2a48(r31)
    addi r3, r1, 0x30
    lfs f3, lbl_80886B80
    li r4, 0x79
    lfs f0, lbl_80886B78
    stfs f3, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x1c(r1)
    li r4, -0x1
    lfs f3, 0x18(r1)
    lfs f0, 0x14(r1)
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    fmuls f0, f0, f31
    stfs f4, 0x28(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    lwz r3, 0x1908(r31)
    bl fn_8015AC48
    lwz r3, 0x1908(r31)
    addi r4, r1, 0x20
    li r5, 0x39
    li r6, 0x0
    bl fn_8015E7A0
    li r0, 0x0
    stw r0, 0x1908(r31)
lbl_fn_80457E98_00000518:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8045817C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807549D0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807549D0@l
    addi r4, r4, 0x19b
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x2a40(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045817C_00000588
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8045817C_00000588
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x2a40(r29)
    mr r30, r3
    b lbl_fn_8045817C_0000058C
lbl_fn_8045817C_00000588:
    li r30, 0x0
lbl_fn_8045817C_0000058C:
    lis r31, lbl_807549D0@ha
    mr r3, r30
    addi r31, r31, lbl_807549D0@l
    addi r5, r29, 0x2a44
    addi r4, r31, 0x1a9
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x1b3
    addi r5, r29, 0x2a4c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80886B78
    mr r3, r30
    lfs f2, lbl_80886C0C
    addi r4, r31, 0x1bf
    lfs f3, lbl_80886BD0
    addi r5, r29, 0x2a48
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8045824C(void)
{
    nofralloc
    lis r4, lbl_807C8A48@ha
    lfs f1, lbl_80886C10
    addi r3, r4, lbl_807C8A48@l
    lfs f0, lbl_80886B78
    stfs f1, lbl_807C8A48@l(r4)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

asm void fn_80458270(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r5
    stw r28, 0x100(r1)
    mr r28, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r4, lbl_8078F7F0@ha
    addi r3, r28, 0x14b0
    addi r4, r4, lbl_8078F7F0@l
    stw r4, 0x0(r28)
    bl fn_8006CA80
    li r31, 0x0
    li r0, 0x5
    stw r31, 0x14b8(r28)
    addi r3, r28, 0x14d4
    stw r31, 0x14bc(r28)
    stw r31, 0x14c0(r28)
    stw r31, 0x14c4(r28)
    stw r0, 0x14d0(r28)
    bl fn_80057A64
    addi r3, r28, 0x14e0
    bl fn_80057A64
    addi r3, r28, 0x14f0
    bl fn_802377B8
    lis r4, fn_802AC550@ha
    lis r5, fn_80059468@ha
    addi r3, r28, 0x1500
    li r6, 0x58
    addi r4, r4, fn_802AC550@l
    addi r5, r5, fn_80059468@l
    li r7, 0xb
    bl fn_806958E0
    li r0, 0x1
    stw r0, 0x18c8(r28)
    addi r3, r28, 0x18fc
    stw r0, 0x18cc(r28)
    stw r31, 0x18d0(r28)
    stw r31, 0x18ec(r28)
    stw r31, 0x18f0(r28)
    bl fn_80458550
    addi r3, r28, 0x1948
    bl fn_80057A64
    stw r31, 0x1960(r28)
    addi r3, r28, 0x1964
    bl fn_802FCF14
    addi r3, r28, 0x196c
    bl fn_802377B8
    stw r31, 0x1978(r28)
    addi r3, r28, 0x1980
    stb r31, 0x197c(r28)
    bl fn_802BABC0
    lwz r0, 0x12a4(r28)
    lis r30, lbl_80754DE0@ha
    lfs f0, lbl_80886C1C
    addi r3, r1, 0x2c
    oris r0, r0, 0x40
    stw r31, 0x1984(r28)
    addi r4, r30, lbl_80754DE0@l
    stfs f0, 0x1988(r28)
    stw r0, 0x12a4(r28)
    bl fn_8003E4A4
    addi r31, r30, lbl_80754DE0@l
    addi r3, r1, 0x20
    addi r4, r31, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r29, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r31, 0x2b
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x14
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    b lbl_fn_80458270_000007D0
lbl_fn_80458270_0000078C:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r31, 0x2d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80458270_000007C8
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
lbl_fn_80458270_000007C8:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_80458270_000007D0:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r30, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r30, 0x0
    bne lbl_fn_80458270_0000078C
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x14b0(r28)
    mr r4, r3
    addi r3, r28, 0x14b0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r30, lbl_80754DE0@ha
    addi r3, r28, 0x14f0
    addi r30, r30, lbl_80754DE0@l
    addi r4, r30, 0x36
    bl fn_8023780C
    li r31, 0x0
    lis r4, lbl_807C7030@ha
    stw r31, 0x18f8(r28)
    addi r3, r28, 0x1948
    addi r4, r4, lbl_807C7030@l
    bl fn_8000D124
    lfs f0, lbl_80886C20
    addi r3, r28, 0x1964
    stfs f0, 0x1954(r28)
    addi r4, r30, 0x44
    stw r31, 0x1958(r28)
    stw r31, 0x195c(r28)
    lwz r12, 0x1964(r28)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r3, r28, 0x196c
    addi r4, r30, 0x66
    bl fn_8023780C
    lwz r0, 0x14a8(r28)
    addi r3, r1, 0x8
    li r4, -0x1
    oris r0, r0, 0x8000
    stw r0, 0x14a8(r28)
    bl dtor_80013D60
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    lwz r31, 0x10c(r1)
    mr r3, r28
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80458550(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80056DB8
    lis r4, lbl_80777668@ha
    mr r3, r31
    addi r4, r4, lbl_80777668@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80458590(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80458590_00000BDC
    addi r3, r31, 0x14f0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80458590_00000BDC
    addi r3, r31, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80458590_00000BDC
    addi r3, r31, 0x1964
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80458590_00000BDC
    addi r3, r31, 0x196c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80458590_00000BDC
    lwz r4, 0x7ec(r31)
    lis r3, lbl_80754DE0@ha
    lwz r0, 0x1980(r31)
    addi r3, r3, lbl_80754DE0@l
    ori r4, r4, 0x1c0
    oris r4, r4, 0x1
    cmpwi r0, 0x0
    ori r0, r4, 0xc219
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    addi r4, r3, 0x73
    bne lbl_fn_80458590_000009F4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80458590_000009F4
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1980(r31)
    b lbl_fn_80458590_000009F8
lbl_fn_80458590_000009F4:
    li r3, 0x0
lbl_fn_80458590_000009F8:
    lis r4, lbl_80754DE0@ha
    addi r5, r31, 0x1984
    addi r4, r4, lbl_80754DE0@l
    li r6, 0x0
    addi r4, r4, 0x83
    li r7, 0x0
    bl fn_80087994
    addi r3, r31, 0x14b0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80458590_00000A84
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80458590_00000A84
    lwz r6, 0x10d8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80458590_00000A84
    lwz r0, 0x78(r6)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80458590_00000A7C
lbl_fn_80458590_00000A54:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r5
    cmpwi r0, 0x2
    bne lbl_fn_80458590_00000A70
    mulli r0, r4, 0x28
    add r0, r3, r0
    b lbl_fn_80458590_00000A80
lbl_fn_80458590_00000A70:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80458590_00000A54
lbl_fn_80458590_00000A7C:
    li r0, 0x0
lbl_fn_80458590_00000A80:
    stw r0, 0x18f4(r31)
lbl_fn_80458590_00000A84:
    li r0, 0xa
    lfs f2, lbl_80886C24
    lfs f1, lbl_80886C28
    mulli r0, r0, 0x58
    lfs f0, lbl_80886C2C
    mr r3, r31
    stfs f2, 0x56c(r31)
    add r4, r31, r0
    stfs f1, 0x5b0(r31)
    stfs f0, 0x5b4(r31)
    lwz r0, 0x1508(r31)
    ori r0, r0, 0x3
    stw r31, 0x150c(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1508(r31)
    lwz r0, 0x1560(r31)
    ori r0, r0, 0x3
    stw r31, 0x1564(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1560(r31)
    lwz r0, 0x15b8(r31)
    ori r0, r0, 0x3
    stw r31, 0x15bc(r31)
    clrlwi r0, r0, 1
    stw r0, 0x15b8(r31)
    lwz r0, 0x1610(r31)
    ori r0, r0, 0x3
    stw r31, 0x1614(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1610(r31)
    lwz r0, 0x1668(r31)
    ori r0, r0, 0x3
    stw r31, 0x166c(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1668(r31)
    lwz r0, 0x16c0(r31)
    ori r0, r0, 0x3
    stw r31, 0x16c4(r31)
    clrlwi r0, r0, 1
    stw r0, 0x16c0(r31)
    lwz r0, 0x1718(r31)
    ori r0, r0, 0x3
    stw r31, 0x171c(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1718(r31)
    lwz r0, 0x1770(r31)
    ori r0, r0, 0x3
    stw r31, 0x1774(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1770(r31)
    lwz r0, 0x17c8(r31)
    ori r0, r0, 0x3
    stw r31, 0x17cc(r31)
    clrlwi r0, r0, 1
    stw r0, 0x17c8(r31)
    lwz r0, 0x1820(r31)
    ori r0, r0, 0x3
    stw r31, 0x1824(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1820(r31)
    lwz r0, 0x1508(r4)
    ori r0, r0, 0x3
    stw r31, 0x150c(r4)
    clrlwi r0, r0, 1
    stw r0, 0x1508(r4)
    lwz r0, 0x1904(r31)
    stw r31, 0x1908(r31)
    ori r0, r0, 0x3
    stw r0, 0x1904(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lis r5, lbl_80754C24@ha
    li r6, 0x0
    addi r5, r5, lbl_80754C24@l
    stw r6, 0x18d4(r31)
    lwz r4, 0x34(r5)
    li r3, 0x1
    lwz r0, 0x50(r5)
    stw r6, 0x18d8(r31)
    stw r4, 0x18dc(r31)
    stw r6, 0x18e0(r31)
    stw r0, 0x18e4(r31)
    stw r6, 0x18e8(r31)
    b lbl_fn_80458590_00000BE0
lbl_fn_80458590_00000BDC:
    li r3, 0x0
lbl_fn_80458590_00000BE0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8045883C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    lwz r0, 0x18f8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_00000C70
    lwz r4, lbl_8087F4A0
    lwz r5, 0x48(r4)
    b lbl_fn_8045883C_00000C68
lbl_fn_8045883C_00000C30:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x6d9c
    bne lbl_fn_8045883C_00000C64
    lwz r0, 0x4c(r5)
    cmpwi r0, 0x64
    bne lbl_fn_8045883C_00000C64
    stw r5, 0x18f8(r3)
    addi r4, r3, 0x1948
    psq_l f1, 0x6c(r5), 0, 0
    lfs f2, 0x74(r5)
    stfs f2, 0x1950(r3)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_8045883C_00000C70
lbl_fn_8045883C_00000C64:
    lwz r5, 0x5c(r5)
lbl_fn_8045883C_00000C68:
    cmpwi r5, 0x0
    bne lbl_fn_8045883C_00000C30
lbl_fn_8045883C_00000C70:
    lwz r0, 0x1960(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_00000CB4
    lwz r4, lbl_8087F4A0
    lwz r4, 0x48(r4)
    b lbl_fn_8045883C_00000CAC
lbl_fn_8045883C_00000C88:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x6dd8
    bne lbl_fn_8045883C_00000CA8
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_8045883C_00000CA8
    stw r4, 0x1960(r3)
    b lbl_fn_8045883C_00000CB4
lbl_fn_8045883C_00000CA8:
    lwz r4, 0x5c(r4)
lbl_fn_8045883C_00000CAC:
    cmpwi r4, 0x0
    bne lbl_fn_8045883C_00000C88
lbl_fn_8045883C_00000CB4:
    lwz r0, 0xd1c(r3)
    stw r0, 0x14b8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_00000CD4
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x14b8(r3)
    stw r0, 0xd1c(r3)
lbl_fn_8045883C_00000CD4:
    lwz r0, 0xd18(r3)
    lwz r4, 0x14c0(r3)
    cmpwi r0, 0x0
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    beq lbl_fn_8045883C_00000CF8
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_00000DE0
lbl_fn_8045883C_00000CF8:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8045883C_000015A4
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_00000D70
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80886C20
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8045883C_000015A4
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x14bc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x145
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8045883C_000015A4
lbl_fn_8045883C_00000D70:
    cmpwi r0, 0x1
    bne lbl_fn_8045883C_000015A4
    lfs f31, 0x2e4(r31)
    lfs f0, lbl_80886C3C
    fcmpo cr0, f31, f0
    ble lbl_fn_8045883C_00000D9C
    lwz r3, lbl_8087F430
    li r4, 0x5a
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8045883C_000015A4
lbl_fn_8045883C_00000D9C:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045883C_000015A4
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_8045883C_000015A4
lbl_fn_8045883C_00000DE0:
    beq lbl_fn_8045883C_000014E4
    lwz r0, 0x58c(r3)
    cmplwi r0, 0xf
    bgt lbl_fn_8045883C_0000149C
    lis r4, jumptable_8078F7A0@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8078F7A0@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_00000E68
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80886C20
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8045883C_000014E4
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x14bc(r3)
    li r4, 0x0
    lfs f1, lbl_80886C34
    li r5, 0x145
    stw r0, 0x3fc(r3)
    li r6, 0x0
    lfs f2, lbl_80886C38
    li r7, 0x0
    stfs f0, 0x2fc(r3)
    li r8, 0x1
    stfs f0, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_8045883C_000014E4
lbl_fn_8045883C_00000E68:
    cmpwi r0, 0x1
    bne lbl_fn_8045883C_000014E4
    lfs f31, 0x2e4(r3)
    lfs f0, lbl_80886C3C
    fcmpo cr0, f31, f0
    ble lbl_fn_8045883C_00000E94
    lwz r3, lbl_8087F430
    li r4, 0x5a
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8045883C_000014E4
lbl_fn_8045883C_00000E94:
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045883C_000014E4
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_8045883C_000014E4
    mr r3, r31
    bl fn_8045E548
    b lbl_fn_8045883C_000014E4
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045883C_00000F28
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_8045883C_00000F28:
    lfs f1, lbl_80886C34
    mr r3, r31
    lfs f2, 0x568(r31)
    addi r4, r31, 0x14e0
    bl fn_8045ABB4
    b lbl_fn_8045883C_000014E4
    addi r3, r3, 0x7d4
    bl fn_8012DB04
    stfs f1, 0x2e8(r31)
    addi r3, r31, 0xb0
    lfs f31, 0x2e4(r31)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045883C_00000F94
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_8045883C_000014E4
lbl_fn_8045883C_00000F94:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80886C40
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8045883C_000014E4
    lfs f0, lbl_80886C44
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8045883C_000014E4
    li r3, 0x5b8
    bl fn_80219E6C
    mr r30, r3
    mr r3, r31
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r8, 0x590(r31)
    mr r7, r30
    lfs f1, lbl_80886C34
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r0, 0x1984(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8045883C_000014E4
    lfs f3, 0x8e4(r31)
    addi r4, r31, 0x528
    lfs f0, 0x40(r30)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f1, f3, f0
    lfs f2, lbl_80886C34
    bl fn_80063D3C
    b lbl_fn_8045883C_000014E4
    mr r3, r31
    bl fn_8045E780
    b lbl_fn_8045883C_000014E4
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_00001180
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80886C48
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8045883C_000014E4
    lfs f0, lbl_80886C4C
    lis r4, lbl_80754DE0@ha
    addi r4, r4, lbl_80754DE0@l
    li r0, 0x1
    stw r0, 0x14bc(r3)
    addi r4, r4, 0x8d
    li r5, 0x0
    stfs f0, 0x12cc(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045883C_00001088
    li r4, 0x0
    b lbl_fn_8045883C_00001094
lbl_fn_8045883C_00001088:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8045883C_00001094:
    lfs f4, 0x2c(r4)
    lis r3, lbl_80754DE0@ha
    lfs f3, 0x1c(r4)
    addi r3, r3, lbl_80754DE0@l
    lfs f0, 0xc(r4)
    addi r4, r3, 0x97
    stfs f0, 0x68(r1)
    li r5, 0x0
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    lwz r3, 0x14fc(r31)
    addi r30, r3, 0xb0
    mr r3, r30
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045883C_000010DC
    li r3, 0x0
    b lbl_fn_8045883C_000010E8
lbl_fn_8045883C_000010DC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_8045883C_000010E8:
    lfs f6, 0x2c(r3)
    addi r30, r1, 0x80
    lfs f0, 0x70(r1)
    addi r5, r1, 0x8c
    lfs f5, 0x1c(r3)
    mr r4, r30
    lfs f4, 0xc(r3)
    fsubs f2, f6, f0
    lfs f3, 0x6c(r1)
    mr r3, r30
    lfs f0, 0x68(r1)
    fsubs f3, f5, f3
    stfs f4, 0x74(r1)
    fsubs f0, f4, f0
    stfs f3, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F98D0
    lwz r29, lbl_8087F048
    li r3, 0x5b7
    bl fn_80219E6C
    lfs f1, lbl_80886C34
    mr r5, r3
    lfs f2, lbl_80886C30
    mr r3, r29
    mr r4, r31
    mr r7, r30
    addi r6, r1, 0x68
    li r8, 0x0
    li r9, 0x24
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_8045883C_000014E4
lbl_fn_8045883C_00001180:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045883C_000014E4
    li r30, 0x0
    stw r30, 0x1520(r31)
    li r0, 0xa
    stw r30, 0x1578(r31)
    mulli r0, r0, 0x58
    stw r30, 0x15d0(r31)
    add r3, r31, r0
    stw r30, 0x1628(r31)
    stw r30, 0x1680(r31)
    stw r30, 0x16d8(r31)
    stw r30, 0x1730(r31)
    stw r30, 0x1788(r31)
    stw r30, 0x17e0(r31)
    stw r30, 0x1838(r31)
    stw r30, 0x1520(r3)
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_8045883C_000014E4
    mr r3, r31
    bl fn_8045D3A4
    b lbl_fn_8045883C_000014E4
    mr r3, r31
    bl fn_8045DF34
    b lbl_fn_8045883C_000014E4
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045883C_000014E4
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80886C34
    li r0, -0x1
    lfs f1, lbl_80886C30
    addi r4, r31, 0x14f0
    stfs f0, 0x4c(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x40
    addi r8, r1, 0x4c
    stfs f0, 0x50(r1)
    addi r9, r1, 0x58
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x54(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r4, 0x4
    stw r4, 0x1520(r31)
    li r0, 0xa
    stw r4, 0x1578(r31)
    mulli r0, r0, 0x58
    stw r4, 0x15d0(r31)
    add r3, r31, r0
    stw r4, 0x1628(r31)
    stw r4, 0x1680(r31)
    stw r4, 0x16d8(r31)
    stw r4, 0x1730(r31)
    stw r4, 0x1788(r31)
    stw r4, 0x17e0(r31)
    stw r4, 0x1838(r31)
    stw r4, 0x1520(r3)
    lwz r0, 0x14b8(r31)
    stw r0, 0x14fc(r31)
    b lbl_fn_8045883C_000014E4
    lwz r7, 0x1960(r3)
    lis r0, 0x4330
    addi r6, r1, 0x10
    lfs f5, 0x52c(r3)
    psq_l f1, 0x6c(r7), 0, 0
    addi r5, r1, 0x1c
    psq_st f1, 0x0(r6), 0, 0
    lis r4, lbl_80754DB8@ha
    lfs f2, 0x74(r7)
    lfs f0, 0x14(r1)
    lfs f6, 0x530(r3)
    fsubs f8, f0, f5
    lfs f0, lbl_80886C50
    lfs f4, 0x10(r1)
    fsubs f7, f2, f6
    lfs f3, 0x528(r3)
    fmuls f11, f8, f0
    fsubs f9, f4, f3
    lfs f12, 0x52c(r3)
    fmuls f10, f7, f0
    stfs f2, 0x18(r1)
    fadds f4, f11, f5
    fmuls f5, f9, f0
    fadds f2, f10, f6
    stfs f4, 0x20(r1)
    lfd f6, lbl_80754DB8@l(r4)
    fadds f0, f5, f3
    stfs f2, 0x530(r3)
    lfs f4, lbl_80886C54
    stfs f0, 0x1c(r1)
    lfs f0, 0x578(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    lfs f3, lbl_80886C58
    stfs f12, 0x52c(r3)
    lwz r4, lbl_8087F0A8
    stw r0, 0xc8(r1)
    lwz r0, 0x30(r4)
    stfs f5, 0x34(r1)
    mullw r0, r0, r0
    stfs f9, 0x28(r1)
    stfs f8, 0x2c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xcc(r1)
    lfd f5, 0xc8(r1)
    stfs f7, 0x30(r1)
    fsubs f5, f5, f6
    stfs f11, 0x38(r1)
    fdivs f4, f4, f5
    stfs f10, 0x3c(r1)
    stfs f2, 0x24(r1)
    fadds f0, f0, f4
    stfs f0, 0x578(r3)
    fadds f0, f12, f0
    stfs f0, 0x52c(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_8045883C_0000143C
    lfs f0, lbl_80886C34
    stfs f3, 0x52c(r3)
    stfs f0, 0x578(r3)
lbl_fn_8045883C_0000143C:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8045883C_000014E4
    li r30, 0x0
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_8045883C_000014E4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_8045883C_000014E4
lbl_fn_8045883C_0000149C:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8045883C_000014C8
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14b8(r31)
    mr r3, r31
    lfs f1, lbl_80886C5C
    li r5, 0x0
    bl fn_80170A20
lbl_fn_8045883C_000014C8:
    mr r3, r31
    bl fn_8045B82C
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8045883C_000014E4
    mr r3, r31
    bl fn_8045BFFC
lbl_fn_8045883C_000014E4:
    lwz r0, 0x18cc(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8045883C_000014FC
    cmpwi r0, 0x2
    beq lbl_fn_8045883C_00001518
    b lbl_fn_8045883C_00001534
lbl_fn_8045883C_000014FC:
    lwz r0, 0x18d0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_00001534
    lwz r4, 0x18c8(r31)
    mr r3, r31
    bl fn_8045EDEC
    b lbl_fn_8045883C_00001534
lbl_fn_8045883C_00001518:
    li r30, 0x0
lbl_fn_8045883C_0000151C:
    mr r3, r31
    mr r4, r30
    bl fn_8045EDEC
    addi r30, r30, 0x1
    cmpwi r30, 0x2
    blt lbl_fn_8045883C_0000151C
lbl_fn_8045883C_00001534:
    mr r3, r31
    bl fn_8045CB24
    lwz r0, 0x18ec(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_00001564
    lwz r3, lbl_8087F430
    li r4, 0xce
    bl fn_80370A78
    cmpwi r3, 0x2
    bne lbl_fn_8045883C_00001564
    li r0, 0x1
    stw r0, 0x18ec(r31)
lbl_fn_8045883C_00001564:
    lwz r3, 0x195c(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8045883C_000015A4
    addi r0, r3, 0x1
    stw r0, 0x195c(r31)
    cmpwi r0, 0x96
    ble lbl_fn_8045883C_000015A4
    lwz r3, lbl_8087F430
    li r4, 0xd1
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8045883C_000015A4
    lwz r3, lbl_8087F430
    li r4, 0xd1
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8045883C_000015A4:
    lbz r0, 0x197c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8045883C_000015C4
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xf
    beq lbl_fn_8045883C_000015C4
    lfs f0, lbl_80886C58
    stfs f0, 0x52c(r31)
lbl_fn_8045883C_000015C4:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8045F4CC
    lbz r0, 0x197c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8045883C_000016EC
    lwz r4, 0x18f4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8045883C_000016EC
    lfs f5, 0xc(r4)
    addi r3, r1, 0x98
    lfs f0, 0x530(r31)
    lfs f4, 0x4(r4)
    lfs f3, 0x528(r31)
    fsubs f5, f5, f0
    lfs f0, lbl_80886C34
    fsubs f3, f4, f3
    stfs f5, 0xa0(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_805F9920
    lfs f0, lbl_80886C60
    fcmpo cr0, f1, f0
    bge lbl_fn_8045883C_000016EC
    lwz r3, 0x1960(r31)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8045883C_000016EC
    lfs f0, lbl_80886C34
    li r30, 0x0
    li r0, 0x3
    stw r0, 0xa8(r1)
    addi r4, r1, 0xa8
    stw r30, 0xac(r1)
    stw r30, 0xb0(r1)
    stw r30, 0xb4(r1)
    stw r30, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f0, 0xc0(r1)
    stfs f0, 0xc4(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xf
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x38
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80886C34
    stb r30, 0x197c(r31)
    stfs f0, 0x578(r31)
lbl_fn_8045883C_000016EC:
    lwz r0, 0xf4(r1)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80459358(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r4
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_80459358_00001748
    lwz r5, 0x8(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0x5bc
    bne lbl_fn_80459358_00001A88
lbl_fn_80459358_00001748:
    lwz r0, 0x40(r4)
    cmpwi r0, 0x3
    bne lbl_fn_80459358_00001934
    lwz r4, 0x18f8(r3)
    lwz r4, 0x54(r4)
    subi r0, r4, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_80459358_00001A88
    lwz r4, 0x1958(r3)
    addi r0, r4, 0x1
    stw r0, 0x1958(r3)
    cmpwi r0, 0x3
    ble lbl_fn_80459358_000018AC
    lfs f0, lbl_80886C34
    li r31, 0x0
    stw r31, 0x68(r1)
    stw r31, 0x6c(r1)
    stw r31, 0x70(r1)
    stw r31, 0x74(r1)
    stw r31, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    lfs f4, 0x530(r3)
    lfs f0, 0x1950(r3)
    lfs f3, 0x528(r3)
    fsubs f5, f4, f0
    lfs f0, 0x1948(r3)
    lfs f4, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f3, 0x194c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x38(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x3c(r1)
    stfs f5, 0x40(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_80886C20
    fcmpo cr0, f3, f0
    bge lbl_fn_80459358_00001874
    li r0, 0x3
    stw r0, 0x68(r1)
    stw r31, 0x14bc(r30)
    stw r31, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xe
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2f
    lfs f2, lbl_80886C50
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x57c(r30)
    psq_st f1, 0x574(r30), 0, 0
    b lbl_fn_80459358_00001884
lbl_fn_80459358_00001874:
    li r0, 0x4
    stw r0, 0x68(r1)
    li r0, 0x1
    stw r0, 0x195c(r30)
lbl_fn_80459358_00001884:
    lwz r3, 0x18f8(r30)
    addi r4, r1, 0x68
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x1904(r30)
    clrrwi r0, r0, 1
    stw r0, 0x1904(r30)
    b lbl_fn_80459358_00001A88
lbl_fn_80459358_000018AC:
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    li r5, 0x0
    lfs f0, lbl_80886C34
    subf. r0, r4, r0
    stw r5, 0x48(r1)
    li r0, 0x6
    stw r5, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r5, 0x54(r1)
    stw r5, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    bne lbl_fn_80459358_000018F0
    li r0, 0x2
lbl_fn_80459358_000018F0:
    stw r0, 0x48(r1)
    addi r4, r1, 0x48
    lwz r3, 0x18f8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F430
    li r4, 0xd3
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80459358_00001A88
    lwz r3, lbl_8087F430
    li r4, 0xd3
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80459358_00001A88
lbl_fn_80459358_00001934:
    lfs f4, 0x10(r4)
    lfs f5, lbl_80886C34
    lfs f3, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r4)
    stfs f3, 0x14(r4)
    stfs f0, 0x18(r4)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xe
    beq lbl_fn_80459358_00001970
    cmpwi r0, 0xc
    bne lbl_fn_80459358_00001980
lbl_fn_80459358_00001970:
    lwz r0, 0xc(r4)
    ori r0, r0, 0x80
    stw r0, 0xc(r4)
    b lbl_fn_80459358_000019D8
lbl_fn_80459358_00001980:
    lwz r6, 0x7e0(r3)
    li r5, 0x1
    rlwinm r3, r6, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80459358_000019AC
    rlwinm r3, r6, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80459358_000019AC
    li r5, 0x0
lbl_fn_80459358_000019AC:
    cmpwi r5, 0x0
    bne lbl_fn_80459358_000019D8
    lwz r3, 0x8(r4)
    lwz r0, 0x90(r3)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80459358_000019D8
    lwz r0, 0xc(r4)
    ori r0, r0, 0x8
    stw r0, 0xc(r4)
lbl_fn_80459358_000019D8:
    lwz r0, 0x40(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80459358_00001A64
    lwz r0, 0xc(r4)
    li r3, 0x0
    oris r0, r0, 0x8000
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r4)
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80886C34
    li r3, -0x1
    lfs f1, lbl_80886C30
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x196c
    addi r5, r30, 0xb0
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
lbl_fn_80459358_00001A64:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80459358_00001A88:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
