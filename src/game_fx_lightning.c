#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D0F8(void);
extern void fn_8000D124(void);
extern void fn_800132EC(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_80145334(void);
extern void fn_80148990(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80178A6C(void);
extern void fn_8028A1F8(void);
extern void fn_802A2070(void);
extern void fn_802A239C(void);
extern void fn_802A2600(void);
extern void fn_802A3D80(void);
extern void fn_802A42CC(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80373148(void);
extern void fn_804A04AC(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80745C48[];
extern u8 lbl_80745C50[];
extern u8 lbl_80745C70[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_80883D28;
extern u32 lbl_80883D30;
extern u32 lbl_80883D34;
extern u32 lbl_80883D38;
extern u32 lbl_80883D3C;
extern u32 lbl_80883D40;
extern u32 lbl_80883D44;
extern u32 lbl_80883D48;
extern u32 lbl_80883D4C;
extern u32 lbl_80883D50;
extern u32 lbl_80883D54;
extern u32 lbl_80883D58;
extern u32 lbl_80883D5C;
extern u32 lbl_80883D60;
extern u32 lbl_80883D64;
extern u32 lbl_80883D68;
extern u32 lbl_80883D6C;
extern u32 lbl_80883D70;
extern u32 lbl_80883D74;
extern u32 lbl_80883D78;
extern u32 lbl_80883D7C;
extern u32 lbl_80883D80;
extern u32 lbl_80883D84;
extern u32 lbl_80883D88;

/* Function declarations */
void fn_8029D7AC(void);
void fn_8029DB54(void);
void fn_8029DB58(void);
void fn_8029DBE0(void);
void fn_8029DECC(void);
void fn_8029DEF8(void);
void fn_8029E0B4(void);
void fn_8029E2AC(void);
void fn_8029E480(void);
void fn_8029E848(void);
void fn_8029E950(void);

asm void fn_8029D7AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_8029D7AC_0000003C
    lwz r12, 0x0(r3)
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    b lbl_fn_8029D7AC_0000007C
lbl_fn_8029D7AC_0000003C:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8029D7AC_00000058
    lwz r4, 0x14dc(r3)
    addi r0, r4, 0x1
    stw r0, 0x14dc(r3)
    bl fn_802A2070
lbl_fn_8029D7AC_00000058:
    lwz r3, 0x1664(r31)
    lwz r0, 0x1660(r31)
    cmpw r3, r0
    beq lbl_fn_8029D7AC_0000007C
    mr r3, r31
    li r4, 0x1
    bl fn_802A3D80
    lwz r0, 0x1660(r31)
    stw r0, 0x1664(r31)
lbl_fn_8029D7AC_0000007C:
    lwz r0, 0x1650(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8029D7AC_000000B8
    lwz r3, 0x1654(r31)
    li r4, 0x64
    subi r0, r3, 0x1
    stw r0, 0x1654(r31)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8029D7AC_000000B8
    lwz r3, lbl_8087F430
    li r4, 0x64
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8029D7AC_000000B8:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8029D7AC_000001B8
    lwz r3, 0x1678(r31)
    lwz r30, lbl_8087F430
    addi r0, r3, 0x1
    cmpwi r0, 0x3c
    stw r0, 0x1678(r31)
    bge lbl_fn_8029D7AC_0000019C
    lis r4, lbl_80745C70@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745C70@l
    li r5, 0x0
    addi r4, r4, 0x235
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029D7AC_00000104
    li r3, 0x0
    b lbl_fn_8029D7AC_00000110
lbl_fn_8029D7AC_00000104:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8029D7AC_00000110:
    lwz r0, 0x1554(r31)
    lfs f2, 0x2c(r3)
    lfs f0, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f3, 0xc(r3)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f2, 0x1c(r1)
    bne lbl_fn_8029D7AC_00000180
    stw r31, 0x8a0(r30)
    addi r4, r1, 0x14
    li r0, 0x1
    addi r5, r30, 0x97c
    lbz r3, 0x97c(r30)
    stb r3, 0x97d(r30)
    psq_l f1, 0x0(r4), 0, 0
    stb r0, 0x97c(r30)
    lfs f0, lbl_80883D28
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f0, 0x9a0(r30)
    b lbl_fn_8029D7AC_0000016C
    b lbl_fn_8029D7AC_00000170
lbl_fn_8029D7AC_0000016C:
    li r0, 0x0
lbl_fn_8029D7AC_00000170:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x1554(r31)
    b lbl_fn_8029D7AC_000001B8
lbl_fn_8029D7AC_00000180:
    addi r4, r1, 0x14
    stw r31, 0x8a0(r30)
    addi r3, r30, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r30)
    b lbl_fn_8029D7AC_000001B8
lbl_fn_8029D7AC_0000019C:
    lwz r0, 0x1554(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8029D7AC_000001B8
    li r0, 0x0
    stw r0, 0x8a0(r30)
    stb r0, 0x97c(r30)
    stw r0, 0x1554(r31)
lbl_fn_8029D7AC_000001B8:
    lwz r0, 0x1644(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8029D7AC_000002E0
    lwz r0, 0x1650(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8029D7AC_000002E0
    lwz r0, 0x1658(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8029D7AC_000002E0
    lwz r3, 0x164c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8029D7AC_000002E0
    lwz r0, 0x1654(r31)
    lwz r29, lbl_8087F430
    cmpwi r0, 0x0
    ble lbl_fn_8029D7AC_000002BC
    lis r4, lbl_80745C70@ha
    addi r30, r3, 0xb0
    addi r4, r4, lbl_80745C70@l
    li r5, 0x0
    mr r3, r30
    addi r4, r4, 0x23a
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029D7AC_00000224
    li r3, 0x0
    b lbl_fn_8029D7AC_00000230
lbl_fn_8029D7AC_00000224:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_8029D7AC_00000230:
    lwz r0, 0x1554(r31)
    lfs f2, 0x2c(r3)
    lfs f0, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f3, 0xc(r3)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    bne lbl_fn_8029D7AC_000002A0
    stw r31, 0x8a0(r29)
    addi r4, r1, 0x8
    li r0, 0x1
    addi r5, r29, 0x97c
    lbz r3, 0x97c(r29)
    stb r3, 0x97d(r29)
    psq_l f1, 0x0(r4), 0, 0
    stb r0, 0x97c(r29)
    lfs f0, lbl_80883D28
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r29)
    stfs f0, 0x9a0(r29)
    b lbl_fn_8029D7AC_0000028C
    b lbl_fn_8029D7AC_00000290
lbl_fn_8029D7AC_0000028C:
    li r0, 0x0
lbl_fn_8029D7AC_00000290:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x1554(r31)
    b lbl_fn_8029D7AC_000002E0
lbl_fn_8029D7AC_000002A0:
    addi r4, r1, 0x8
    stw r31, 0x8a0(r29)
    addi r3, r29, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r29)
    b lbl_fn_8029D7AC_000002E0
lbl_fn_8029D7AC_000002BC:
    lwz r0, 0x1554(r31)
    li r3, 0x1
    stw r3, 0x1658(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8029D7AC_000002E0
    li r0, 0x0
    stw r0, 0x8a0(r29)
    stb r0, 0x97c(r29)
    stw r0, 0x1554(r31)
lbl_fn_8029D7AC_000002E0:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x11c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8029D7AC_0000031C
    bl fn_80373148
    mr r30, r3
    b lbl_fn_8029D7AC_00000320
lbl_fn_8029D7AC_0000031C:
    li r30, 0x0
lbl_fn_8029D7AC_00000320:
    cmpwi r30, 0x0
    beq lbl_fn_8029D7AC_0000038C
    lwz r0, 0x1644(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8029D7AC_0000038C
    lwz r3, 0x14d4(r31)
    lfs f3, 0x52c(r31)
    lfs f4, 0x52c(r3)
    lfs f0, lbl_80883D34
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8029D7AC_00000360
    li r31, 0x1
    b lbl_fn_8029D7AC_00000364
lbl_fn_8029D7AC_00000360:
    li r31, 0x2
lbl_fn_8029D7AC_00000364:
    lwz r0, 0xe0(r30)
    cmpw r31, r0
    beq lbl_fn_8029D7AC_0000038C
    mr r3, r30
    mr r4, r31
    li r5, 0xf
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    stw r31, 0xe8(r30)
lbl_fn_8029D7AC_0000038C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8029DB54(void)
{
    nofralloc
    blr
}

asm void fn_8029DB58(void)
{
    nofralloc
    lfs f1, lbl_80883D38
    lfs f0, 0x52c(r3)
    fcmpo cr0, f0, f1
    fsubs f2, f1, f0
    ble lbl_fn_8029DB58_000003F8
    lfs f0, lbl_80883D28
    fcmpo cr0, f2, f0
    bge lbl_fn_8029DB58_000003D0
    fneg f2, f2
lbl_fn_8029DB58_000003D0:
    lfs f1, lbl_80883D3C
    fcmpo cr0, f2, f1
    bge lbl_fn_8029DB58_000003E8
    lfs f0, lbl_80883D38
    stfs f0, 0x52c(r3)
    blr
lbl_fn_8029DB58_000003E8:
    lfs f0, 0x52c(r3)
    fsubs f0, f0, f1
    stfs f0, 0x52c(r3)
    blr
lbl_fn_8029DB58_000003F8:
    bgelr
    lfs f0, lbl_80883D28
    fcmpo cr0, f2, f0
    bge lbl_fn_8029DB58_0000040C
    fneg f2, f2
lbl_fn_8029DB58_0000040C:
    lfs f1, lbl_80883D40
    fcmpo cr0, f2, f1
    bge lbl_fn_8029DB58_00000424
    lfs f0, lbl_80883D38
    stfs f0, 0x52c(r3)
    blr
lbl_fn_8029DB58_00000424:
    lfs f0, 0x52c(r3)
    fadds f0, f0, f1
    stfs f0, 0x52c(r3)
    blr
}

asm void fn_8029DBE0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r4, r1, 0x50
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    fmr f31, f1
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    addi r31, r1, 0x5c
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r5, 0x14d4(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r5)
    lfs f4, 0x528(r5)
    fsubs f2, f3, f0
    lfs f3, 0x528(r3)
    lfs f5, 0x52c(r5)
    fsubs f3, f4, f3
    lfs f0, 0x52c(r3)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fsubs f5, f5, f0
    lfs f0, lbl_80883D44
    fabs f3, f4
    stfs f5, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x64(r1)
    bge lbl_fn_8029DBE0_000004EC
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_8029DBE0_000004E0
    lfs f0, lbl_80883D48
    b lbl_fn_8029DBE0_000004E4
lbl_fn_8029DBE0_000004E0:
    lfs f0, lbl_80883D4C
lbl_fn_8029DBE0_000004E4:
    stfs f0, 0x48(r1)
    b lbl_fn_8029DBE0_00000500
lbl_fn_8029DBE0_000004EC:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8029DBE0_00000500:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
    addi r4, r1, 0x38
    lfs f29, 0x70(r1)
    mr r5, r4
    lfs f30, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80883D30
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f29, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8029DBE0_0000061C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_8029DBE0_0000060C
    lfs f0, lbl_80883D48
    b lbl_fn_8029DBE0_00000610
lbl_fn_8029DBE0_0000060C:
    lfs f0, lbl_80883D4C
lbl_fn_8029DBE0_00000610:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8029DBE0_00000630
lbl_fn_8029DBE0_0000061C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8029DBE0_00000630:
    addi r3, r1, 0x44
    lfs f3, lbl_80883D28
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80745C48@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r30)
    lfs f29, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_80745C48@l(r3)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883D50
    fcmpo cr0, f4, f0
    ble lbl_fn_8029DBE0_0000067C
    lfs f0, lbl_80883D54
    fsubs f4, f4, f0
lbl_fn_8029DBE0_0000067C:
    lfs f0, lbl_80883D58
    fcmpo cr0, f4, f0
    bge lbl_fn_8029DBE0_00000690
    lfs f0, lbl_80883D54
    fadds f4, f4, f0
lbl_fn_8029DBE0_00000690:
    lfs f3, lbl_80883D5C
    lfs f0, lbl_80883D28
    fmuls f3, f31, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_8029DBE0_000006AC
    fneg f0, f4
    b lbl_fn_8029DBE0_000006B0
lbl_fn_8029DBE0_000006AC:
    fmr f0, f4
lbl_fn_8029DBE0_000006B0:
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8029DBE0_000006C4
    stfs f29, 0x538(r30)
    b lbl_fn_8029DBE0_000006F0
lbl_fn_8029DBE0_000006C4:
    lfs f0, lbl_80883D28
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8029DBE0_000006E4
    lfs f0, 0x538(r30)
    fsubs f0, f0, f3
    stfs f0, 0x538(r30)
    b lbl_fn_8029DBE0_000006F0
lbl_fn_8029DBE0_000006E4:
    lfs f0, 0x538(r30)
    fadds f0, f0, f3
    stfs f0, 0x538(r30)
lbl_fn_8029DBE0_000006F0:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8029DECC(void)
{
    nofralloc
    lis r5, lbl_807C7030@ha
    lwz r0, 0x50(r4)
    addi r5, r5, lbl_807C7030@l
    li r3, 0x1
    psq_l f1, 0x0(r5), 0, 0
    ori r0, r0, 0x10
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
    stw r0, 0x50(r4)
    blr
}

asm void fn_8029DEF8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_8029DEF8_000008EC
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8029DEF8_0000088C
    lwz r0, 0x1674(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8029DEF8_000008EC
    li r30, 0x1
    stw r30, 0x1674(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r29
    bl fn_80178A6C
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r29
    bl fn_8016DA4C
    li r31, 0x0
    li r0, 0x2
    stw r0, 0x58c(r29)
    stw r31, 0x14d8(r29)
    stw r31, 0x14dc(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r29)
    mr r3, r29
    stfs f0, 0x155c(r29)
    stw r31, 0x15fc(r29)
    bl fn_8016E970
    lfs f0, lbl_80883D30
    li r0, 0x17
    stw r0, 0x560(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r30, 0x3fc(r29)
    li r5, 0x1e1
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r29)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    lfs f3, 0x1640(r29)
    addi r3, r1, 0x8
    lfs f0, 0x530(r29)
    addi r4, r29, 0x1560
    lfs f5, 0x163c(r29)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x1638(r29)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1568(r29)
    b lbl_fn_8029DEF8_000008EC
lbl_fn_8029DEF8_0000088C:
    lwz r0, 0x940(r3)
    lis r4, 0x4330
    stw r4, 0x18(r1)
    lis r5, lbl_80745C50@ha
    xoris r0, r0, 0x8000
    lwz r6, 0x1614(r3)
    stw r0, 0x1c(r1)
    lfd f4, lbl_80745C50@l(r5)
    slwi r0, r6, 2
    lfd f3, 0x18(r1)
    lwz r4, 0x1624(r3)
    fsubs f3, f3, f4
    lfs f4, 0x7d8(r3)
    lfsx f0, r4, r0
    fmuls f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_8029DEF8_000008EC
    lwz r4, 0x1628(r3)
    addi r0, r6, 0x1
    subi r4, r4, 0x1
    cmpw r0, r4
    bge lbl_fn_8029DEF8_000008E8
    mr r4, r0
lbl_fn_8029DEF8_000008E8:
    stw r4, 0x1614(r3)
lbl_fn_8029DEF8_000008EC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8029E0B4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r4, lbl_80745C70@ha
    stw r0, 0x74(r1)
    addi r4, r4, lbl_80745C70@l
    addi r5, r1, 0x44
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r4, r4, 0x23f
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x5b0(r3)
    fadds f0, f3, f0
    stfs f5, 0x48(r1)
    lfs f3, 0x530(r3)
    stfs f0, 0x44(r1)
    lfs f0, 0x5ac(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    fadds f2, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f0, 0x618(r3)
    stfs f4, 0x620(r3)
    fadds f0, f0, f4
    stfs f2, 0x4c(r1)
    stfs f2, 0x61c(r3)
    stfs f0, 0x618(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E0B4_00000998
    li r4, 0x0
    b lbl_fn_8029E0B4_000009A4
lbl_fn_8029E0B4_00000998:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8029E0B4_000009A4:
    lfs f0, 0x2c(r4)
    lis r3, lbl_80745C70@ha
    lfs f3, 0x1c(r4)
    addi r3, r3, lbl_80745C70@l
    lfs f4, 0xc(r4)
    addi r4, r3, 0x249
    stfs f4, 0x14(r1)
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E0B4_000009E4
    li r4, 0x0
    b lbl_fn_8029E0B4_000009F0
lbl_fn_8029E0B4_000009E4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8029E0B4_000009F0:
    lfs f5, 0x2c(r4)
    lis r3, lbl_80745C70@ha
    lfs f6, 0x1c(r4)
    addi r7, r1, 0x38
    lfs f7, 0xc(r4)
    addi r3, r3, lbl_80745C70@l
    lfs f4, 0x1c(r1)
    addi r4, r3, 0x23a
    lfs f0, 0x18(r1)
    addi r6, r1, 0x5c
    lfs f3, 0x14(r1)
    fadds f4, f5, f4
    fadds f8, f6, f0
    lfs f0, lbl_80883D64
    fadds f3, f7, f3
    stfs f7, 0x20(r1)
    fmuls f2, f4, f0
    fmuls f7, f8, f0
    fmuls f0, f3, f0
    stfs f6, 0x24(r1)
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f0, 0x38(r1)
    stfs f7, 0x3c(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f5, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x64(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E0B4_00000A84
    li r5, 0x0
    b lbl_fn_8029E0B4_00000A90
lbl_fn_8029E0B4_00000A84:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_8029E0B4_00000A90:
    lfs f0, 0x2c(r5)
    addi r4, r1, 0x8
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x50
    lfs f4, 0xc(r5)
    fmr f2, f0
    stfs f4, 0x8(r1)
    addi r5, r1, 0x5c
    lfs f4, 0x620(r31)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    lfs f2, 0x64(r1)
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x5fc(r31)
    lfs f2, 0x58(r1)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f4, 0x60c(r31)
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    stfs f0, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8029E2AC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r1, 0x5c
    bl fn_80148990
    lfs f0, lbl_80883D68
    lis r31, lbl_80745C70@ha
    addi r31, r31, lbl_80745C70@l
    stfs f0, 0x6c(r1)
    addi r3, r30, 0xb0
    addi r4, r31, 0x252
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x50
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x50
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883D6C
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x23a
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x44
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x44
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883D68
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x257
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x38
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x38
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883D68
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x264
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x2c
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883D34
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x270
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883D6C
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x249
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x14
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lfs f0, lbl_80883D6C
    addi r3, r30, 0xb0
    stfs f0, 0x6c(r1)
    addi r4, r31, 0x23f
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8000D0F8
    addi r3, r1, 0x60
    addi r4, r1, 0x8
    bl fn_8000D124
    addi r3, r30, 0x624
    addi r4, r1, 0x5c
    bl fn_8028A1F8
    lwz r0, 0x12a8(r30)
    oris r0, r0, 0x2000
    stw r0, 0x12a8(r30)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8029E480(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8029E480_00001084
    lwz r5, 0x62c(r3)
    lis r4, lbl_80745C70@ha
    lfs f0, lbl_80883D70
    addi r4, r4, lbl_80745C70@l
    stfs f0, 0x10(r5)
    addi r4, r4, 0x252
    li r31, 0x0
    li r5, 0x0
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E480_00000D30
    li r3, 0x0
    b lbl_fn_8029E480_00000D3C
lbl_fn_8029E480_00000D30:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8029E480_00000D3C:
    lfs f0, 0x1c(r3)
    mulli r0, r31, 0x14
    lfs f3, 0xc(r3)
    li r31, 0x1
    lfs f2, 0x2c(r3)
    addi r4, r1, 0x50
    stfs f3, 0x50(r1)
    lwz r5, 0x62c(r30)
    lis r3, lbl_80745C70@ha
    stfs f0, 0x54(r1)
    mulli r7, r31, 0x14
    lfs f3, lbl_80883D74
    addi r3, r3, lbl_80745C70@l
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    addi r4, r3, 0x23a
    lfs f0, lbl_80883D78
    addi r3, r30, 0xb0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x58(r1)
    add r6, r6, r0
    lfs f4, 0x8(r6)
    fsubs f3, f4, f3
    stfs f3, 0x8(r6)
    lwz r0, 0x62c(r30)
    add r6, r0, r7
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E480_00000DC4
    li r3, 0x0
    b lbl_fn_8029E480_00000DD0
lbl_fn_8029E480_00000DC4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8029E480_00000DD0:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745C70@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x44
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745C70@l
    stfs f0, 0x44(r1)
    li r31, 0x2
    add r5, r5, r0
    lfs f0, lbl_80883D6C
    stfs f3, 0x48(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x257
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x4c(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E480_00000E44
    li r3, 0x0
    b lbl_fn_8029E480_00000E50
lbl_fn_8029E480_00000E44:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8029E480_00000E50:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745C70@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x38
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745C70@l
    stfs f0, 0x38(r1)
    li r31, 0x3
    add r5, r5, r0
    lfs f0, lbl_80883D6C
    stfs f3, 0x3c(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x264
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x40(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E480_00000EC4
    li r3, 0x0
    b lbl_fn_8029E480_00000ED0
lbl_fn_8029E480_00000EC4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8029E480_00000ED0:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745C70@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x2c
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745C70@l
    stfs f0, 0x2c(r1)
    li r31, 0x4
    add r5, r5, r0
    lfs f0, lbl_80883D7C
    stfs f3, 0x30(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x270
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x34(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E480_00000F44
    li r3, 0x0
    b lbl_fn_8029E480_00000F50
lbl_fn_8029E480_00000F44:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8029E480_00000F50:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745C70@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x20
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745C70@l
    stfs f0, 0x20(r1)
    li r31, 0x5
    add r5, r5, r0
    lfs f0, lbl_80883D80
    stfs f3, 0x24(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x249
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x28(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E480_00000FC4
    li r3, 0x0
    b lbl_fn_8029E480_00000FD0
lbl_fn_8029E480_00000FC4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8029E480_00000FD0:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_80745C70@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x14
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_80745C70@l
    stfs f0, 0x14(r1)
    li r31, 0x6
    add r5, r5, r0
    lfs f0, lbl_80883D80
    stfs f3, 0x18(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x23f
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x1c(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E480_00001044
    li r4, 0x0
    b lbl_fn_8029E480_00001050
lbl_fn_8029E480_00001044:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8029E480_00001050:
    lfs f0, 0x1c(r4)
    mulli r0, r31, 0x14
    lfs f3, 0xc(r4)
    addi r3, r1, 0x8
    lfs f2, 0x2c(r4)
    lwz r4, 0x62c(r30)
    stfs f3, 0x8(r1)
    add r4, r4, r0
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0xc(r4)
lbl_fn_8029E480_00001084:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8029E848(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_8029E848_00001130
    lis r4, lbl_80745C70@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745C70@l
    li r5, 0x0
    addi r4, r4, 0x23a
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E848_000010F8
    li r4, 0x0
    b lbl_fn_8029E848_00001104
lbl_fn_8029E848_000010F8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8029E848_00001104:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x14
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    b lbl_fn_8029E848_0000118C
lbl_fn_8029E848_00001130:
    lis r4, lbl_80745C70@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745C70@l
    li r5, 0x0
    addi r4, r4, 0x252
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029E848_00001158
    li r4, 0x0
    b lbl_fn_8029E848_00001164
lbl_fn_8029E848_00001158:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8029E848_00001164:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_8029E848_0000118C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8029E950(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lwz r0, 0x165c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8029E950_00001270
    lwz r0, 0x1644(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8029E950_00001270
    li r30, 0x0
    li r0, 0x13
    stw r0, 0x58c(r3)
    stw r30, 0x14d8(r3)
    stw r30, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883D60
    li r5, 0x14a
    stfs f1, 0x155c(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stw r30, 0x15fc(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f2, 0x530(r31)
    addi r4, r31, 0x157c
    psq_l f1, 0x528(r31), 0, 0
    addi r3, r31, 0x1588
    psq_st f1, 0x0(r4), 0, 0
    lwz r5, 0x15a8(r31)
    stfs f2, 0x1584(r31)
    lwz r4, 0x0(r5)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x1590(r31)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_8029E950_0000197C
lbl_fn_8029E950_00001270:
    lwz r5, 0x14d4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8029E950_0000197C
    addi r4, r1, 0x20
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f5, 0x24(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x14
    lfs f3, 0x20(r1)
    fsubs f4, f5, f4
    stfs f2, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9940
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8029E950_00001300
    mr r3, r31
    bl fn_802A42CC
    cmpwi r3, 0x0
    beq lbl_fn_8029E950_000012EC
    mr r3, r31
    li r4, 0x0
    bl fn_802A239C
lbl_fn_8029E950_000012EC:
    li r3, 0x2
    li r0, 0x0
    stw r3, 0x14e4(r31)
    stw r0, 0x14e0(r31)
    b lbl_fn_8029E950_0000197C
lbl_fn_8029E950_00001300:
    cmpwi r0, 0x1
    bne lbl_fn_8029E950_00001338
    mr r3, r31
    bl fn_802A42CC
    cmpwi r3, 0x0
    beq lbl_fn_8029E950_00001324
    mr r3, r31
    li r4, 0x1
    bl fn_802A239C
lbl_fn_8029E950_00001324:
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x14e4(r31)
    stw r0, 0x14e0(r31)
    b lbl_fn_8029E950_0000197C
lbl_fn_8029E950_00001338:
    cmpwi r0, 0x2
    bne lbl_fn_8029E950_00001814
    lwz r5, 0x14e0(r31)
    li r4, 0x0
    lwz r0, 0x1614(r31)
    mulli r3, r5, 0x24
    mulli r0, r0, 0xc
    add r3, r31, r3
    add r3, r3, r0
    lwz r0, 0x150c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8029E950_000017DC
    lwz r0, 0x1550(r31)
    lwz r6, 0x1648(r31)
    lwz r3, 0x1508(r3)
    slwi r0, r0, 2
    cmpwi r6, 0x0
    lwzx r8, r3, r0
    beq lbl_fn_8029E950_00001494
    lwz r7, 0x38(r6)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8029E950_000013B0
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8029E950_000013B0
    li r5, 0x1
lbl_fn_8029E950_000013B0:
    cmpwi r5, 0x0
    beq lbl_fn_8029E950_000013CC
    lwz r0, 0x7e0(r6)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8029E950_000013CC
    li r3, 0x1
lbl_fn_8029E950_000013CC:
    cmpwi r3, 0x0
    beq lbl_fn_8029E950_00001400
    lwz r0, 0x55c(r6)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8029E950_000013F4
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_8029E950_000013F4
    li r3, 0x1
lbl_fn_8029E950_000013F4:
    cmpwi r3, 0x0
    bne lbl_fn_8029E950_00001400
    li r4, 0x1
lbl_fn_8029E950_00001400:
    cmpwi r4, 0x0
    beq lbl_fn_8029E950_00001494
    lwz r3, 0x58c(r6)
    cmpwi r3, 0xc
    bne lbl_fn_8029E950_0000141C
    li r0, 0x0
    b lbl_fn_8029E950_00001440
lbl_fn_8029E950_0000141C:
    cmpwi r3, 0xe
    bne lbl_fn_8029E950_0000142C
    li r0, 0x1
    b lbl_fn_8029E950_00001440
lbl_fn_8029E950_0000142C:
    lfs f3, 0x52c(r6)
    lfs f0, lbl_80883D84
    fcmpo cr0, f3, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_8029E950_00001440:
    cmpwi r0, 0x0
    beq lbl_fn_8029E950_0000144C
    li r8, 0x6
lbl_fn_8029E950_0000144C:
    cmpwi r8, 0x6
    bne lbl_fn_8029E950_00001494
    cmpwi r3, 0xc
    bne lbl_fn_8029E950_00001464
    li r0, 0x0
    b lbl_fn_8029E950_00001488
lbl_fn_8029E950_00001464:
    cmpwi r3, 0xe
    bne lbl_fn_8029E950_00001474
    li r0, 0x1
    b lbl_fn_8029E950_00001488
lbl_fn_8029E950_00001474:
    lfs f3, 0x52c(r6)
    lfs f0, lbl_80883D84
    fcmpo cr0, f3, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_8029E950_00001488:
    cmpwi r0, 0x0
    bne lbl_fn_8029E950_00001494
    li r8, 0x0
lbl_fn_8029E950_00001494:
    cmpwi r8, 0x2
    beq lbl_fn_8029E950_000014C0
    cmpwi r8, 0x4
    beq lbl_fn_8029E950_0000155C
    cmpwi r8, 0x6
    beq lbl_fn_8029E950_000015F4
    cmpwi r8, 0x1
    beq lbl_fn_8029E950_0000162C
    cmpwi r8, 0x5
    beq lbl_fn_8029E950_000016C8
    b lbl_fn_8029E950_00001778
lbl_fn_8029E950_000014C0:
    lwz r0, 0x14f8(r31)
    stw r0, 0x15f8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8029E950_00001778
    li r30, 0x0
    li r0, 0x9
    stw r0, 0x58c(r31)
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r5, 0x66
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8029E950_00001778
lbl_fn_8029E950_0000155C:
    li r30, 0x0
    li r0, 0xa
    stw r0, 0x58c(r31)
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r5, 0x66
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x14e8(r31)
    stw r30, 0x14d8(r31)
    stw r0, 0x15f8(r31)
    b lbl_fn_8029E950_00001778
lbl_fn_8029E950_000015F4:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80883D74
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8029E950_0000197C
    mr r3, r31
    bl fn_802A2600
    b lbl_fn_8029E950_00001778
lbl_fn_8029E950_0000162C:
    lwz r0, 0x14fc(r31)
    stw r0, 0x15f8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8029E950_00001778
    li r30, 0x0
    li r0, 0x9
    stw r0, 0x58c(r31)
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r5, 0x66
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8029E950_00001778
lbl_fn_8029E950_000016C8:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80883D74
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8029E950_0000197C
    li r30, 0x0
    li r0, 0xb
    stw r0, 0x58c(r31)
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8029E950_00001778:
    lwz r3, 0x14e0(r31)
    lwz r0, 0x1614(r31)
    mulli r3, r3, 0x24
    lwz r4, 0x1550(r31)
    addi r4, r4, 0x1
    stw r4, 0x1550(r31)
    mulli r0, r0, 0xc
    add r3, r31, r3
    add r3, r3, r0
    lwz r3, 0x150c(r3)
    subi r0, r3, 0x1
    cmpw r4, r0
    blt lbl_fn_8029E950_000017B4
    li r0, 0x0
    stw r0, 0x1550(r31)
lbl_fn_8029E950_000017B4:
    lwz r5, 0x14e0(r31)
    lwz r3, 0x1614(r31)
    mulli r4, r5, 0x24
    lwz r0, 0x1550(r31)
    slwi r0, r0, 2
    mulli r3, r3, 0xc
    add r4, r31, r4
    add r3, r4, r3
    lwz r3, 0x1508(r3)
    lwzx r4, r3, r0
lbl_fn_8029E950_000017DC:
    cmpwi r5, 0x0
    bne lbl_fn_8029E950_000017F8
    cmpwi r4, 0x6
    beq lbl_fn_8029E950_0000197C
    li r0, 0x0
    stw r0, 0x14e4(r31)
    b lbl_fn_8029E950_0000197C
lbl_fn_8029E950_000017F8:
    cmpwi r5, 0x1
    bne lbl_fn_8029E950_0000197C
    cmpwi r4, 0x6
    beq lbl_fn_8029E950_0000197C
    li r0, 0x1
    stw r0, 0x14e4(r31)
    b lbl_fn_8029E950_0000197C
lbl_fn_8029E950_00001814:
    cmpwi r0, 0x4
    bne lbl_fn_8029E950_000018A4
    li r30, 0x0
    li r0, 0xd
    stw r0, 0x58c(r31)
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x153
    lfs f2, lbl_80883D60
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8029E950_0000197C
lbl_fn_8029E950_000018A4:
    cmpwi r0, 0x5
    bne lbl_fn_8029E950_0000197C
    li r30, 0x0
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r7, 0xe
    lfs f1, lbl_80883D28
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883D60
    li r4, 0x0
    stw r7, 0x58c(r31)
    li r5, 0xa
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x155c(r31)
    li r8, 0x1
    stw r30, 0x15fc(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    mr r3, r31
    bl fn_802A42CC
    lwz r3, 0x1570(r31)
    addi r4, r1, 0x8
    lfs f0, 0x530(r31)
    addi r5, r31, 0x1560
    lfs f4, 0xc(r3)
    lfs f5, 0x8(r3)
    lfs f3, 0x4(r3)
    fsubs f2, f4, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1568(r31)
    stw r30, 0x1610(r31)
    stw r30, 0x1630(r31)
    stw r30, 0x1634(r31)
lbl_fn_8029E950_0000197C:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
