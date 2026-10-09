#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_80061824(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801F4728(void);
extern void fn_801F4998(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801F4F08(void);
extern void fn_801FECE0(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_804A3C24(void);
extern void fn_804AC734(void);
extern void fn_804AC83C(void);
extern void fn_804ACD10(void);
extern void fn_804AD1EC(void);
extern void fn_804AD738(void);
extern void fn_804BC628(void);
extern void fn_804C0F88(void);
extern void fn_804C1370(void);
extern void fn_804C1634(void);
extern void fn_804DD9D0(void);
extern void fn_804DE564(void);
extern void fn_804EB1B0(void);
extern void fn_804EB270(void);
extern void fn_804EB874(void);
extern void fn_804F5B0C(void);
extern void fn_804F5CA0(void);
extern void fn_804F5E3C(void);
extern void fn_804FAB44(void);
extern void fn_804FC014(void);
extern void fn_8050BA6C(void);
extern void fn_80695D84(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80790CA0[];
extern u8 lbl_80758848[];
extern u8 lbl_807588DC[];
extern u8 lbl_80790D10[];
extern u8 lbl_80790D20[];
extern u8 lbl_80790D28[];
extern u8 lbl_80790D30[];
extern u8 lbl_80790D40[];
extern u8 lbl_80790D4C[];
extern u8 lbl_80790D58[];
extern u8 lbl_80790D68[];
extern u8 lbl_80790D74[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_808873F8;
extern u32 lbl_80887400;
extern u32 lbl_80887404;
extern u32 lbl_80887418;
extern u32 lbl_8088741C;
extern u32 lbl_80887420;
extern u32 lbl_80887424;
extern u32 lbl_80887428;
extern u32 lbl_8088742C;
extern u32 lbl_80887430;
extern u32 lbl_80887434;

/* Function declarations */
void fn_804BF550(void);
void fn_804BF9AC(void);
void fn_804BFB54(void);
void fn_804C0094(void);
void fn_804C0430(void);
void fn_804C0548(void);
void fn_804C06C8(void);
void fn_804C0A40(void);
void fn_804C0EA4(void);

asm void fn_804BF550(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_804BF550_0000031C
    lwz r0, 0xd88(r31)
    cmpwi r0, 0x6
    bne lbl_fn_804BF550_0000018C
    lwz r3, lbl_8087F610
    bl fn_804FC014
    cmpwi r3, 0x0
    beq lbl_fn_804BF550_00000088
    lwz r4, 0x64(r31)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x32c
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    li r0, 0x5
    stw r0, 0xdb0(r31)
    b lbl_fn_804BF550_00000348
lbl_fn_804BF550_00000088:
    lwz r3, lbl_8087F610
    addi r4, r1, 0xc
    bl fn_804EB270
    cmpwi r3, 0x0
    beq lbl_fn_804BF550_00000148
    lwz r0, 0xdb0(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_804BF550_00000148
    lwz r0, 0xc(r1)
    cmpwi r0, 0x1
    ble lbl_fn_804BF550_00000148
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BF550_000000E4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BF550_000000DC
    li r3, 0x1
    b lbl_fn_804BF550_000000FC
lbl_fn_804BF550_000000DC:
    bl fn_806B0DE0
    b lbl_fn_804BF550_000000FC
lbl_fn_804BF550_000000E4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BF550_000000F8
    li r3, 0x1
    b lbl_fn_804BF550_000000FC
lbl_fn_804BF550_000000F8:
    bl fn_806A8E70
lbl_fn_804BF550_000000FC:
    cmpwi r3, 0x1
    bgt lbl_fn_804BF550_00000118
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BF550_00000148
lbl_fn_804BF550_00000118:
    lwz r4, 0x64(r31)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x32c
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887418
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804BF550_00000174
lbl_fn_804BF550_00000148:
    lwz r4, 0x64(r31)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x32c
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_804BF550_00000174:
    lwz r3, 0xdb0(r31)
    cmpwi r3, 0x0
    ble lbl_fn_804BF550_00000348
    subi r0, r3, 0x1
    stw r0, 0xdb0(r31)
    b lbl_fn_804BF550_00000348
lbl_fn_804BF550_0000018C:
    li r30, 0x1
    stb r30, 0x8(r1)
    lwz r3, lbl_8087F610
    addi r5, r1, 0x8
    li r4, 0x0
    bl fn_804DE564
    cmpwi r3, 0x0
    bne lbl_fn_804BF550_00000248
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_804BF550_00000248
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BF550_000001E8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BF550_000001DC
    b lbl_fn_804BF550_00000200
lbl_fn_804BF550_000001DC:
    bl fn_806B0DE0
    mr r30, r3
    b lbl_fn_804BF550_00000200
lbl_fn_804BF550_000001E8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BF550_000001F8
    b lbl_fn_804BF550_00000200
lbl_fn_804BF550_000001F8:
    bl fn_806A8E70
    mr r30, r3
lbl_fn_804BF550_00000200:
    cmpwi r30, 0x1
    ble lbl_fn_804BF550_00000248
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804BF550_00000248
    lwz r4, 0x64(r31)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x32c
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887418
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804BF550_00000348
lbl_fn_804BF550_00000248:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804BF550_000002EC
    lha r0, 0x508(r3)
    cmpwi r0, -0x1
    beq lbl_fn_804BF550_000002BC
    cmpwi r0, 0x384
    bgt lbl_fn_804BF550_000002BC
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BF550_0000029C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BF550_00000294
    li r3, 0x1
    b lbl_fn_804BF550_000002B4
lbl_fn_804BF550_00000294:
    bl fn_806B0DE0
    b lbl_fn_804BF550_000002B4
lbl_fn_804BF550_0000029C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BF550_000002B0
    li r3, 0x1
    b lbl_fn_804BF550_000002B4
lbl_fn_804BF550_000002B0:
    bl fn_806A8E70
lbl_fn_804BF550_000002B4:
    cmpwi r3, 0x1
    bne lbl_fn_804BF550_000002EC
lbl_fn_804BF550_000002BC:
    lwz r4, 0x64(r31)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x32c
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887418
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804BF550_00000348
lbl_fn_804BF550_000002EC:
    lwz r4, 0x64(r31)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x32c
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804BF550_00000348
lbl_fn_804BF550_0000031C:
    lwz r4, 0x64(r31)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x32c
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_804BF550_00000348:
    lwz r4, 0x64(r31)
    lis r30, lbl_807588DC@ha
    addi r30, r30, lbl_807588DC@l
    addi r3, r30, 0x334
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887418
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FEDBC
    lwz r3, 0xe60(r31)
    lis r0, 0x4330
    lis r5, lbl_80758848@ha
    lwz r4, 0x64(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lfd f1, lbl_80758848@l(r5)
    addi r3, r30, 0x33c
    stw r0, 0x10(r1)
    addi r29, r4, 0x58
    lfd f0, 0x10(r1)
    fsubs f31, f0, f1
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r0, 0xd88(r31)
    cmpwi r0, 0x4
    bne lbl_fn_804BF550_0000040C
    lwz r3, lbl_8087F59C
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804BF550_0000040C
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804BF550_0000040C
    lwz r4, 0x64(r31)
    addi r3, r30, 0x324
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887418
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804BF550_00000438
lbl_fn_804BF550_0000040C:
    lwz r4, 0x64(r31)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x324
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_804BF550_00000438:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804BF9AC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_25
    lis r5, lbl_80758848@ha
    lis r4, lbl_807588DC@ha
    mr r27, r3
    lfd f31, lbl_80758848@l(r5)
    mr r29, r27
    addi r31, r4, lbl_807588DC@l
    li r28, 0x0
    lis r30, 0x4330
    li r26, -0x1
lbl_fn_804BF9AC_000004A4:
    lwz r3, 0xdbc(r29)
    cmpwi r3, -0x1
    beq lbl_fn_804BF9AC_000005CC
    cmpwi r3, 0x5
    bgt lbl_fn_804BF9AC_000004C0
    mulli r0, r3, 0x33
    b lbl_fn_804BF9AC_000004CC
lbl_fn_804BF9AC_000004C0:
    subi r0, r3, 0x5
    mulli r0, r0, 0x33
    subfic r0, r0, 0xff
lbl_fn_804BF9AC_000004CC:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    cmpwi r28, 0x0
    stw r30, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f30, f0, f31
    bne lbl_fn_804BF9AC_00000510
    lwz r4, 0x5c(r27)
    addi r3, r31, 0x2db
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804BF9AC_000005B4
lbl_fn_804BF9AC_00000510:
    cmpwi r28, 0x1
    bne lbl_fn_804BF9AC_00000540
    lwz r4, 0x5c(r27)
    addi r3, r31, 0x2e6
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804BF9AC_000005B4
lbl_fn_804BF9AC_00000540:
    cmpwi r28, 0x2
    bne lbl_fn_804BF9AC_0000057C
    lwz r0, 0xe60(r27)
    addi r3, r31, 0x2d0
    mulli r0, r0, 0x22c
    add r4, r27, r0
    lwz r4, 0x80(r4)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804BF9AC_000005B4
lbl_fn_804BF9AC_0000057C:
    cmpwi r28, 0x3
    bne lbl_fn_804BF9AC_000005B4
    lwz r0, 0xe60(r27)
    addi r3, r31, 0x2db
    mulli r0, r0, 0x22c
    add r4, r27, r0
    lwz r4, 0x80(r4)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_804BF9AC_000005B4:
    lwz r3, 0xdbc(r29)
    addi r0, r3, 0x1
    stw r0, 0xdbc(r29)
    cmpwi r0, 0xa
    ble lbl_fn_804BF9AC_000005CC
    stw r26, 0xdbc(r29)
lbl_fn_804BF9AC_000005CC:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x4
    blt lbl_fn_804BF9AC_000004A4
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804BFB54(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x150
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    bl _savegpr_17
    lfs f0, lbl_808873F8
    li r22, 0x0
    lis r4, lbl_807588DC@ha
    mr r18, r3
    stw r22, 0xd0(r1)
    mr r21, r18
    lfs f31, lbl_80887404
    addi r23, r4, lbl_807588DC@l
    stw r22, 0xd4(r1)
    li r20, 0x0
    li r19, 0x0
    lis r24, lbl_80790D68@ha
    stw r22, 0xd8(r1)
    lis r25, lbl_80790D58@ha
    lis r26, lbl_80790D4C@ha
    lis r27, lbl_80790D40@ha
    stw r22, 0xdc(r1)
    lis r28, lbl_80790D30@ha
    lis r29, lbl_80790D28@ha
    lis r30, lbl_80790D20@ha
    stw r22, 0xe0(r1)
    lis r31, lbl_80790D10@ha
    stw r22, 0xe4(r1)
    stw r22, 0xe8(r1)
    stw r22, 0xec(r1)
    stw r22, 0xf0(r1)
    stw r22, 0xf4(r1)
    stw r22, 0xf8(r1)
    stw r22, 0xfc(r1)
    stw r22, 0x100(r1)
    stw r22, 0x104(r1)
    stw r22, 0x108(r1)
    stw r22, 0x10c(r1)
    stfs f0, 0xbc(r1)
    stfs f0, 0xc0(r1)
    stfs f0, 0xc4(r1)
    stfs f0, 0xc8(r1)
    stfs f0, 0xcc(r1)
lbl_fn_804BFB54_000006B8:
    lwz r0, 0x98(r21)
    cmpwi r0, 0x0
    bne lbl_fn_804BFB54_00000930
    addi r3, r1, 0xd0
    addi r4, r23, 0x342
    addi r5, r20, 0x1
    crclr 6
    bl sprintf
    lwz r17, 0x4c(r18)
    addi r3, r1, 0xd0
    addi r20, r20, 0x1
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0xa8
    bl fn_801F4E8C
    lfs f4, 0xa8(r1)
    lfs f3, 0xac(r1)
    lfs f2, 0xb0(r1)
    lfs f1, 0xb4(r1)
    lfs f0, 0xb8(r1)
    stfs f4, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f2, 0xc4(r1)
    stfs f1, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r0, 0x98(r21)
    cmpwi r0, 0x0
    beq lbl_fn_804BFB54_00000754
    lwz r3, 0x88(r21)
    addi r4, r24, lbl_80790D68@l
    addi r5, r1, 0x44
    bl fn_801F4728
    b lbl_fn_804BFB54_00000854
lbl_fn_804BFB54_00000754:
    lwz r3, 0x80(r21)
    addi r4, r25, lbl_80790D58@l
    addi r5, r1, 0x44
    bl fn_801F4728
    lwz r17, 0x80(r21)
    addi r3, r26, lbl_80790D4C@l
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0x58
    bl fn_801F4E8C
    lfs f4, 0x58(r1)
    addi r4, r27, lbl_80790D40@l
    lfs f3, 0x5c(r1)
    addi r5, r1, 0x44
    lfs f2, 0x60(r1)
    lfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r3, 0x84(r21)
    bl fn_801F4728
    lwz r17, 0x80(r21)
    addi r3, r28, lbl_80790D30@l
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0x6c
    bl fn_801F4E8C
    lfs f4, 0x6c(r1)
    addi r4, r29, lbl_80790D28@l
    lfs f3, 0x70(r1)
    addi r5, r1, 0x44
    lfs f2, 0x74(r1)
    lfs f1, 0x78(r1)
    lfs f0, 0x7c(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r3, 0x8c(r21)
    bl fn_801F4728
    lwz r3, 0x90(r21)
    addi r4, r30, lbl_80790D20@l
    addi r5, r1, 0x44
    bl fn_801F4728
    lfs f4, 0xbc(r1)
    addi r4, r31, lbl_80790D10@l
    lfs f3, 0xc0(r1)
    addi r5, r1, 0x44
    lfs f2, 0xc4(r1)
    lfs f1, 0xc8(r1)
    lfs f0, 0xcc(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r3, 0x94(r21)
    bl fn_801F4728
lbl_fn_804BFB54_00000854:
    lwz r0, 0xd88(r18)
    cmpwi r0, 0x4
    bne lbl_fn_804BFB54_000008C0
    lwz r0, 0xe60(r18)
    cmpw r19, r0
    bne lbl_fn_804BFB54_000008C0
    lwz r17, 0x80(r21)
    addi r3, r23, 0x352
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0x94
    bl fn_801F4E8C
    lfs f4, 0x94(r1)
    addi r4, r23, 0x35c
    lfs f3, 0x98(r1)
    addi r5, r1, 0xbc
    lfs f2, 0x9c(r1)
    lfs f1, 0xa0(r1)
    lfs f0, 0xa4(r1)
    stfs f4, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f2, 0xc4(r1)
    stfs f1, 0xc8(r1)
    stfs f0, 0xcc(r1)
    lwz r3, 0x5c(r18)
    bl fn_801F4728
lbl_fn_804BFB54_000008C0:
    lwz r3, 0xa0(r21)
    cmpwi r3, 0x0
    ble lbl_fn_804BFB54_00000930
    subic. r0, r3, 0x1
    stw r0, 0xa0(r21)
    bgt lbl_fn_804BFB54_00000930
    stw r22, 0xa0(r21)
    stw r22, 0xa4(r21)
    lwz r17, 0x8c(r21)
    cmpwi r17, 0x0
    beq lbl_fn_804BFB54_00000908
    mr r3, r17
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r17)
    lwz r0, 0xfc(r17)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r17)
lbl_fn_804BFB54_00000908:
    lwz r17, 0x90(r21)
    cmpwi r17, 0x0
    beq lbl_fn_804BFB54_00000930
    mr r3, r17
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r17)
    lwz r0, 0xfc(r17)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r17)
lbl_fn_804BFB54_00000930:
    addi r19, r19, 0x1
    addi r21, r21, 0x22c
    cmpwi r19, 0x6
    blt lbl_fn_804BFB54_000006B8
    mulli r0, r20, 0x22c
    lis r30, lbl_807588DC@ha
    mr r19, r20
    addi r30, r30, lbl_807588DC@l
    add r22, r18, r0
    lis r29, lbl_80790D68@ha
    lis r28, lbl_80790D58@ha
    lis r27, lbl_80790D4C@ha
    lis r26, lbl_80790D40@ha
    lis r25, lbl_80790D30@ha
    lis r24, lbl_80790D28@ha
    lis r23, lbl_80790D20@ha
    lis r21, lbl_80790D10@ha
    b lbl_fn_804BFB54_00000B1C
lbl_fn_804BFB54_00000978:
    lwz r0, 0x98(r22)
    cmpwi r0, 0x0
    beq lbl_fn_804BFB54_00000B14
    addi r3, r1, 0xd0
    addi r4, r30, 0x342
    addi r5, r20, 0x1
    crclr 6
    bl sprintf
    lwz r17, 0x4c(r18)
    addi r3, r1, 0xd0
    addi r20, r20, 0x1
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0x80
    bl fn_801F4E8C
    lfs f4, 0x80(r1)
    lfs f3, 0x84(r1)
    lfs f2, 0x88(r1)
    lfs f1, 0x8c(r1)
    lfs f0, 0x90(r1)
    stfs f4, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f2, 0xc4(r1)
    stfs f1, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    lwz r0, 0x98(r22)
    cmpwi r0, 0x0
    beq lbl_fn_804BFB54_00000A14
    lwz r3, 0x88(r22)
    addi r4, r29, lbl_80790D68@l
    addi r5, r1, 0x8
    bl fn_801F4728
    b lbl_fn_804BFB54_00000B14
lbl_fn_804BFB54_00000A14:
    lwz r3, 0x80(r22)
    addi r4, r28, lbl_80790D58@l
    addi r5, r1, 0x8
    bl fn_801F4728
    lwz r17, 0x80(r22)
    addi r3, r27, lbl_80790D4C@l
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    addi r4, r26, lbl_80790D40@l
    lfs f3, 0x20(r1)
    addi r5, r1, 0x8
    lfs f2, 0x24(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    lwz r3, 0x84(r22)
    bl fn_801F4728
    lwz r17, 0x80(r22)
    addi r3, r25, lbl_80790D30@l
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r17
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lfs f4, 0x30(r1)
    addi r4, r24, lbl_80790D28@l
    lfs f3, 0x34(r1)
    addi r5, r1, 0x8
    lfs f2, 0x38(r1)
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    lwz r3, 0x8c(r22)
    bl fn_801F4728
    lwz r3, 0x90(r22)
    addi r4, r23, lbl_80790D20@l
    addi r5, r1, 0x8
    bl fn_801F4728
    lfs f4, 0xbc(r1)
    addi r4, r21, lbl_80790D10@l
    lfs f3, 0xc0(r1)
    addi r5, r1, 0x8
    lfs f2, 0xc4(r1)
    lfs f1, 0xc8(r1)
    lfs f0, 0xcc(r1)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    lwz r3, 0x94(r22)
    bl fn_801F4728
lbl_fn_804BFB54_00000B14:
    addi r22, r22, 0x22c
    addi r19, r19, 0x1
lbl_fn_804BFB54_00000B1C:
    cmpwi r19, 0x6
    blt lbl_fn_804BFB54_00000978
    addi r11, r1, 0x150
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    bl _restgpr_17
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_804C0094(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    mr r31, r3
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x1
    beq lbl_fn_804C0094_00000EC8
    lwz r3, lbl_8087F610
    lwz r0, 0xe74(r31)
    lwz r3, 0x540(r3)
    cmpw r0, r3
    beq lbl_fn_804C0094_00000D08
    cmpwi r3, 0x0
    bne lbl_fn_804C0094_00000C30
    lwz r3, lbl_8087F59C
    li r0, 0x3
    stw r0, 0xc4(r3)
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C0094_00000BB8
    bl fn_804AC734
    cmpwi r3, 0x0
    bne lbl_fn_804C0094_00000BB8
    lwz r3, lbl_8087F588
    bl fn_804AD738
lbl_fn_804C0094_00000BB8:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887400
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x814(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804C0094_00000BEC
    b lbl_fn_804C0094_00000BF0
lbl_fn_804C0094_00000BEC:
    la r4, lbl_808813D0
lbl_fn_804C0094_00000BF0:
    bl fn_804AD1EC
    mr r3, r31
    li r4, 0x4
    bl fn_804BC628
    lwz r28, 0x64(r31)
    cmpwi r28, 0x0
    beq lbl_fn_804C0094_00000CFC
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
    b lbl_fn_804C0094_00000CFC
lbl_fn_804C0094_00000C30:
    cmpwi r3, 0x1
    bne lbl_fn_804C0094_00000CFC
    lwz r3, lbl_8087F59C
    li r0, 0x1
    stw r0, 0xc4(r3)
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C0094_00000C68
    bl fn_804AC734
    cmpwi r3, 0x0
    bne lbl_fn_804C0094_00000C68
    lwz r3, lbl_8087F588
    bl fn_804AD738
lbl_fn_804C0094_00000C68:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887400
    li r5, 0x1
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r3, lbl_8087F628
    li r4, 0xf4
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804C0094_00000C9C
    li r4, 0xf3
lbl_fn_804C0094_00000C9C:
    lwz r5, lbl_8087F86C
    slwi r0, r4, 3
    lwz r3, lbl_8087F588
    add r4, r5, r0
    lwz r4, 0x4c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804C0094_00000CBC
    b lbl_fn_804C0094_00000CC0
lbl_fn_804C0094_00000CBC:
    la r4, lbl_808813D0
lbl_fn_804C0094_00000CC0:
    bl fn_804AD1EC
    mr r3, r31
    li r4, 0x4
    bl fn_804BC628
    lwz r28, 0x64(r31)
    cmpwi r28, 0x0
    beq lbl_fn_804C0094_00000CFC
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804C0094_00000CFC:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    stw r0, 0xe74(r31)
lbl_fn_804C0094_00000D08:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r4, lbl_8087F610
    lis r28, lbl_807588DC@ha
    stw r0, 0xc(r1)
    addi r28, r28, lbl_807588DC@l
    lwz r7, lbl_8087F59C
    addi r3, r28, 0x272
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r6, 0x564(r4)
    lwz r4, 0x4c(r31)
    addi r5, r6, 0x1
    subfic r0, r6, -0x1
    or r0, r5, r0
    lwz r27, 0xc4(r7)
    srawi r0, r0, 31
    addi r26, r4, 0x58
    clrlwi r29, r0, 24
    bl fn_800DC6B4
    xoris r0, r29, 0x8000
    lis r29, 0x4330
    lis r30, lbl_80758848@ha
    stw r0, 0x4c(r1)
    lfd f1, lbl_80758848@l(r30)
    mr r4, r3
    stw r29, 0x48(r1)
    mr r3, r26
    li r5, 0x0
    lfd f0, 0x48(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    subi r3, r27, 0x2
    subfic r0, r27, 0x2
    nor r0, r3, r0
    lwz r4, 0x4c(r31)
    srawi r0, r0, 31
    addi r3, r28, 0x27d
    addi r26, r4, 0x58
    clrlwi r27, r0, 24
    bl fn_800DC6B4
    xoris r0, r27, 0x8000
    stw r0, 0x54(r1)
    mr r4, r3
    lfd f1, lbl_80758848@l(r30)
    stw r29, 0x50(r1)
    mr r3, r26
    li r5, 0x0
    lfd f0, 0x50(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    lwz r5, lbl_8087F610
    addi r4, r28, 0x28a
    lwz r3, 0x4c(r31)
    li r6, 0x0
    lwz r5, 0x5a4(r5)
    bl fn_801F4CB4
    lwz r4, lbl_8087F610
    lis r3, lbl_80790D74@ha
    addi r3, r3, lbl_80790D74@l
    lwz r0, 0x5b0(r4)
    addi r29, r3, 0x6
    cmpwi r0, 0x0
    beq lbl_fn_804C0094_00000E3C
    mr r29, r3
lbl_fn_804C0094_00000E3C:
    lwz r4, 0x4c(r31)
    lis r30, lbl_807588DC@ha
    addi r30, r30, lbl_807588DC@l
    addi r3, r30, 0x298
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r29
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    lwz r5, 0x564(r3)
    cmpwi r5, -0x1
    beq lbl_fn_804C0094_00000EC8
    lis r3, 0x8889
    lis r4, lbl_80790D74@ha
    subi r0, r3, 0x7777
    mulhw r0, r0, r5
    addi r4, r4, lbl_80790D74@l
    addi r3, r1, 0x8
    addi r4, r4, 0xe
    add r0, r0, r5
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r5, r0, r5
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x2a6
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    addi r5, r1, 0x8
    bl fn_801FEE08
lbl_fn_804C0094_00000EC8:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804C0430(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0xda4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C0430_00000F38
    lwz r4, 0x4c(r3)
    lfs f0, lbl_808873F8
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804C0430_00000FD8
    lwz r4, 0xd90(r3)
    lwz r0, 0xd8c(r3)
    stw r0, 0xd90(r3)
    bl fn_804BC628
    b lbl_fn_804C0430_00000FD8
lbl_fn_804C0430_00000F38:
    lwz r0, 0xdcc(r3)
    cmpwi r0, 0x1e
    bge lbl_fn_804C0430_00000FD8
    subfic r3, r0, 0x1e
    lis r0, 0x4330
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lis r5, lbl_80758848@ha
    lwz r4, 0x70(r30)
    stw r0, 0x10(r1)
    lis r3, lbl_807588DC@ha
    lfd f1, lbl_80758848@l(r5)
    addi r3, r3, lbl_807588DC@l
    lfd f0, 0x10(r1)
    addi r3, r3, 0x268
    addi r31, r4, 0x58
    fsubs f31, f0, f1
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r31
    bl fn_801FECE0
    lwz r0, 0xdcc(r30)
    cmpwi r0, 0x1d
    bge lbl_fn_804C0430_00000FC0
    cmpwi r0, 0xf
    bne lbl_fn_804C0430_00000FD8
    lwz r3, 0x7c(r30)
    li r4, 0x5
    li r0, 0x1
    stw r4, 0x5c(r3)
    lwz r3, 0x7c(r30)
    stw r0, 0x48(r3)
    b lbl_fn_804C0430_00000FD8
lbl_fn_804C0430_00000FC0:
    addi r3, r1, 0x8
    li r4, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804C0430_00000FD8:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804C0548(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r29, lbl_8087EF70
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r4, 0xe64(r31)
    mr r30, r3
    lwz r0, 0xd0(r3)
    cmpwi r4, -0x1
    extrwi r28, r0, 4, 6
    bne lbl_fn_804C0548_000010CC
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804C0548_00001158
    mr r3, r29
    li r4, 0x0
    li r5, 0x6
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804C0548_00001158
    subic. r28, r28, 0x1
    bge lbl_fn_804C0548_00001070
    addi r28, r28, 0x3
lbl_fn_804C0548_00001070:
    lwz r3, lbl_8087F610
    bl fn_804EB874
    mr r30, r3
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x1
    bne lbl_fn_804C0548_000010A0
    lwz r3, lbl_8087F610
    mr r4, r30
    mr r5, r28
    bl fn_804DD9D0
    b lbl_fn_804C0548_00001158
lbl_fn_804C0548_000010A0:
    lwz r3, lbl_8087F610
    mr r4, r28
    mr r5, r30
    addi r6, r1, 0x8
    li r7, 0x1
    bl fn_804FAB44
    cmplwi r3, 0x1
    bne lbl_fn_804C0548_00001158
    lwz r0, 0x8(r1)
    stw r0, 0xe64(r31)
    b lbl_fn_804C0548_00001158
lbl_fn_804C0548_000010CC:
    lwz r3, lbl_8087F610
    clrlwi r4, r4, 24
    bl fn_804F5E3C
    cmpwi r3, -0x2
    bne lbl_fn_804C0548_000010EC
    li r0, -0x1
    stw r0, 0xe64(r31)
    b lbl_fn_804C0548_00001158
lbl_fn_804C0548_000010EC:
    cmpwi r3, -0x1
    bne lbl_fn_804C0548_00001110
    lwz r0, 0xe64(r31)
    lwz r3, lbl_8087F610
    clrlwi r4, r0, 24
    bl fn_804F5CA0
    li r0, -0x1
    stw r0, 0xe64(r31)
    b lbl_fn_804C0548_00001158
lbl_fn_804C0548_00001110:
    cmpwi r3, 0x1
    bne lbl_fn_804C0548_00001158
    lwz r0, 0xe64(r31)
    lwz r3, lbl_8087F610
    clrlwi r4, r0, 24
    bl fn_804F5B0C
    cmpwi r3, 0x0
    beq lbl_fn_804C0548_00001140
    lwz r3, 0x0(r3)
    lwz r0, 0xd0(r30)
    rlwimi r0, r3, 22, 6, 9
    stw r0, 0xd0(r30)
lbl_fn_804C0548_00001140:
    lwz r0, 0xe64(r31)
    lwz r3, lbl_8087F610
    clrlwi r4, r0, 24
    bl fn_804F5CA0
    li r0, -0x1
    stw r0, 0xe64(r31)
lbl_fn_804C0548_00001158:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C06C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addi r5, r3, 0xe84
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    b lbl_fn_804C06C8_000011BC
lbl_fn_804C06C8_000011A0:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_fn_804C06C8_000011B8
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_804C06C8_000011B8:
    addi r5, r5, 0x4
lbl_fn_804C06C8_000011BC:
    lwz r0, 0xe80(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    addi r0, r4, 0xe84
    cmplw r5, r0
    bne lbl_fn_804C06C8_000011A0
    lwz r0, 0xd88(r3)
    cmplwi r0, 0xa
    bgt lbl_fn_804C06C8_0000138C
    lis r4, jumptable_80790CA0@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80790CA0@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    mr r3, r31
    bl fn_804C0A40
    mr r3, r31
    bl fn_804C1634
    b lbl_fn_804C06C8_0000138C
    mr r3, r31
    bl fn_804C0A40
    mr r3, r31
    bl fn_804C1634
    b lbl_fn_804C06C8_0000138C
    mr r3, r31
    bl fn_804C0A40
    lwz r4, 0x4c(r31)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x324
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088741C
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FEDBC
    lwz r3, 0x64(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C06C8_0000138C
    mr r3, r31
    bl fn_804C0EA4
    b lbl_fn_804C06C8_0000138C
    lwz r4, lbl_8087F59C
    lwz r0, 0xc4(r4)
    cmpwi r0, 0x1
    beq lbl_fn_804C06C8_0000128C
    cmpwi r0, 0x3
    bne lbl_fn_804C06C8_000012A0
lbl_fn_804C06C8_0000128C:
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    b lbl_fn_804C06C8_000012B8
lbl_fn_804C06C8_000012A0:
    cmpwi r0, 0x2
    bne lbl_fn_804C06C8_000012B8
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
lbl_fn_804C06C8_000012B8:
    lwz r3, 0x4c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C06C8_000012F8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C06C8_000012F0
    li r3, 0x1
    b lbl_fn_804C06C8_00001310
lbl_fn_804C06C8_000012F0:
    bl fn_806B0DE0
    b lbl_fn_804C06C8_00001310
lbl_fn_804C06C8_000012F8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C06C8_0000130C
    li r3, 0x1
    b lbl_fn_804C06C8_00001310
lbl_fn_804C06C8_0000130C:
    bl fn_806A8E70
lbl_fn_804C06C8_00001310:
    cmpwi r3, 0x2
    blt lbl_fn_804C06C8_0000138C
    lwz r3, 0x50(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C06C8_0000138C
    mr r3, r31
    bl fn_804C0F88
    b lbl_fn_804C06C8_0000138C
    lwz r3, 0x68(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C06C8_0000138C
    mr r3, r31
    bl fn_804C1370
    b lbl_fn_804C06C8_0000138C
    lwz r0, 0xda4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C06C8_00001370
    mr r3, r31
    bl fn_804C1370
    b lbl_fn_804C06C8_00001378
lbl_fn_804C06C8_00001370:
    mr r3, r31
    bl fn_804C0A40
lbl_fn_804C06C8_00001378:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_804C06C8_0000138C:
    lwz r3, lbl_8087F610
    lbz r3, 0x5b4(r3)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_804C06C8_00001434
    lfs f3, lbl_808873F8
    lis r31, lbl_80790D74@ha
    lfs f31, lbl_80887420
    addi r31, r31, lbl_80790D74@l
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f4, f31
    lfs f1, lbl_80887424
    fmr f5, f31
    lfs f2, lbl_80887428
    fmr f7, f3
    addi r4, r31, 0x2a
    fmr f8, f3
    lis r5, 0xff00
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f3, lbl_808873F8
    fmr f4, f31
    fmr f5, f31
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f1, lbl_8088742C
    fmr f7, f3
    fmr f8, f3
    lfs f2, lbl_80887430
    addi r4, r31, 0x2a
    li r5, -0x100
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_804C06C8_000014D0
lbl_fn_804C06C8_00001434:
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_fn_804C06C8_000014D0
    lfs f3, lbl_808873F8
    lis r31, lbl_80790D74@ha
    lfs f31, lbl_80887420
    addi r31, r31, lbl_80790D74@l
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f4, f31
    lfs f1, lbl_80887424
    fmr f5, f31
    lfs f2, lbl_80887428
    fmr f7, f3
    addi r4, r31, 0x34
    fmr f8, f3
    lis r5, 0xff00
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f3, lbl_808873F8
    fmr f4, f31
    fmr f5, f31
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f1, lbl_8088742C
    fmr f7, f3
    fmr f8, f3
    lfs f2, lbl_80887430
    addi r4, r31, 0x34
    li r5, -0x100
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_804C06C8_000014D0:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C0A40(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x40
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    bl _savegpr_25
    lwz r4, lbl_8087F59C
    mr r28, r3
    lwz r3, 0x4c(r3)
    lwz r25, 0xc4(r4)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C0A40_00001570
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C0A40_00001568
    li r3, 0x1
    b lbl_fn_804C0A40_00001588
lbl_fn_804C0A40_00001568:
    bl fn_806B0DE0
    b lbl_fn_804C0A40_00001588
lbl_fn_804C0A40_00001570:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C0A40_00001584
    li r3, 0x1
    b lbl_fn_804C0A40_00001588
lbl_fn_804C0A40_00001584:
    bl fn_806A8E70
lbl_fn_804C0A40_00001588:
    cmpwi r3, 0x2
    blt lbl_fn_804C0A40_000015A0
    lwz r3, 0x50(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_804C0A40_000015A0:
    cmpwi r25, 0x1
    beq lbl_fn_804C0A40_000015B0
    cmpwi r25, 0x3
    bne lbl_fn_804C0A40_000015C4
lbl_fn_804C0A40_000015B0:
    lwz r3, 0x58(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C0A40_00001634
lbl_fn_804C0A40_000015C4:
    cmpwi r25, 0x2
    bne lbl_fn_804C0A40_00001634
    lwz r3, 0x54(r28)
    lis r26, lbl_80790D74@ha
    lis r25, lbl_807588DC@ha
    lwz r0, 0x38(r3)
    addi r26, r26, lbl_80790D74@l
    addi r25, r25, lbl_807588DC@l
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    addi r27, r26, 0x18
    addi r3, r25, 0x367
    lwz r4, 0x4c(r28)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r27
    bl fn_801FEE08
    lwz r4, 0x4c(r28)
    addi r3, r25, 0x298
    addi r26, r26, 0x18
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
lbl_fn_804C0A40_00001634:
    lwz r3, 0x4c(r28)
    lis r25, lbl_80790D74@ha
    lis r4, lbl_807588DC@ha
    addi r25, r25, lbl_80790D74@l
    addi r27, r3, 0x58
    addi r31, r4, lbl_807588DC@l
    addi r26, r25, 0x18
    addi r3, r31, 0x375
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r26
    bl fn_801FEE08
    lwz r4, 0x4c(r28)
    addi r25, r25, 0x18
    addi r3, r31, 0x28a
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r25
    bl fn_801FEE08
    lwz r0, 0xd88(r28)
    cmpwi r0, 0x5
    beq lbl_fn_804C0A40_0000191C
    lfs f28, lbl_80887400
    mr r30, r28
    lfs f29, lbl_808873F8
    li r29, 0x0
    lfs f30, lbl_80887418
    lfs f31, lbl_80887434
lbl_fn_804C0A40_000016B0:
    lwz r0, 0x98(r30)
    cmpwi r0, 0x0
    beq lbl_fn_804C0A40_000016D0
    lwz r3, 0x88(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C0A40_0000190C
lbl_fn_804C0A40_000016D0:
    lwz r3, 0x80(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0xd88(r28)
    cmpwi r0, 0x9
    beq lbl_fn_804C0A40_00001704
    cmpwi r0, 0x8
    beq lbl_fn_804C0A40_00001704
    lwz r3, 0x84(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_804C0A40_00001704:
    lwz r0, 0xd88(r28)
    cmpwi r0, 0x8
    beq lbl_fn_804C0A40_00001738
    cmpwi r0, 0x9
    beq lbl_fn_804C0A40_00001738
    lwz r3, 0x8c(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x90(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_804C0A40_00001738:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C0A40_00001750
    li r4, 0x0
    b lbl_fn_804C0A40_00001770
lbl_fn_804C0A40_00001750:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r29
    ble lbl_fn_804C0A40_0000176C
    lwz r3, 0x8(r1)
    lbzx r4, r3, r29
    b lbl_fn_804C0A40_00001770
lbl_fn_804C0A40_0000176C:
    li r4, 0xff
lbl_fn_804C0A40_00001770:
    lwz r5, lbl_8087F610
    li r3, 0x0
    lwz r0, 0x5e8(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804C0A40_000017B8
lbl_fn_804C0A40_00001788:
    lwz r0, 0x5e4(r5)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C0A40_000017B0
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804C0A40_000017B0
    b lbl_fn_804C0A40_000017BC
lbl_fn_804C0A40_000017B0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804C0A40_00001788
lbl_fn_804C0A40_000017B8:
    li r6, 0x0
lbl_fn_804C0A40_000017BC:
    cmpwi r6, 0x0
    beq lbl_fn_804C0A40_0000190C
    lwz r3, 0xd0(r6)
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C0A40_0000190C
    extrwi r0, r3, 1, 3
    cmplwi r0, 0x1
    bne lbl_fn_804C0A40_0000190C
    lwz r4, 0x94(r30)
    addi r3, r31, 0x383
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r25, 0x84(r30)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r25
    addi r3, r1, 0x10
    bl fn_801F4F08
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_804C0A40_00001824
    li r25, 0xff
    b lbl_fn_804C0A40_00001844
lbl_fn_804C0A40_00001824:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_804C0A40_00001838
    li r3, 0x0
    b lbl_fn_804C0A40_00001840
lbl_fn_804C0A40_00001838:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_804C0A40_00001840:
    mr r25, r3
lbl_fn_804C0A40_00001844:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_804C0A40_0000185C
    li r26, 0xff
    b lbl_fn_804C0A40_0000187C
lbl_fn_804C0A40_0000185C:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_804C0A40_00001870
    li r3, 0x0
    b lbl_fn_804C0A40_00001878
lbl_fn_804C0A40_00001870:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_804C0A40_00001878:
    mr r26, r3
lbl_fn_804C0A40_0000187C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_804C0A40_00001894
    li r27, 0xff
    b lbl_fn_804C0A40_000018B4
lbl_fn_804C0A40_00001894:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_804C0A40_000018A8
    li r3, 0x0
    b lbl_fn_804C0A40_000018B0
lbl_fn_804C0A40_000018A8:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_804C0A40_000018B0:
    mr r27, r3
lbl_fn_804C0A40_000018B4:
    lfs f0, 0x1c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_804C0A40_000018CC
    li r3, 0xff
    b lbl_fn_804C0A40_000018E8
lbl_fn_804C0A40_000018CC:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_804C0A40_000018E0
    li r3, 0x0
    b lbl_fn_804C0A40_000018E8
lbl_fn_804C0A40_000018E0:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_804C0A40_000018E8:
    slwi r3, r3, 24
    slwi r0, r25, 16
    or r3, r3, r0
    addi r4, r31, 0x389
    slwi r0, r26, 8
    or r0, r0, r3
    lwz r3, 0x94(r30)
    or r5, r27, r0
    bl fn_801F4998
lbl_fn_804C0A40_0000190C:
    addi r29, r29, 0x1
    addi r30, r30, 0x22c
    cmpwi r29, 0x6
    blt lbl_fn_804C0A40_000016B0
lbl_fn_804C0A40_0000191C:
    addi r11, r1, 0x40
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804C0EA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_804C0A40
    mr r3, r31
    bl fn_804C1634
    lwz r3, 0x64(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x5c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r4, 0xe6c(r31)
    cmpwi r4, 0x15
    ble lbl_fn_804C0EA4_000019A8
    subi r4, r4, 0x2
    b lbl_fn_804C0EA4_000019B4
lbl_fn_804C0EA4_000019A8:
    cmpwi r4, 0xb
    ble lbl_fn_804C0EA4_000019B4
    subi r4, r4, 0x1
lbl_fn_804C0EA4_000019B4:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C0EA4_00001A24
    cmpwi r4, 0x0
    blt lbl_fn_804C0EA4_00001A00
    addi r0, r4, 0xb3
    lwz r4, lbl_8087F86C
    slwi r0, r0, 3
    lwz r3, lbl_8087F580
    add r4, r4, r0
    lwz r4, 0x4c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804C0EA4_000019F0
    b lbl_fn_804C0EA4_000019F4
lbl_fn_804C0EA4_000019F0:
    la r4, lbl_808813D0
lbl_fn_804C0EA4_000019F4:
    li r5, 0x0
    bl fn_804A3C24
    b lbl_fn_804C0EA4_00001A24
lbl_fn_804C0EA4_00001A00:
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F580
    lwz r4, 0x694(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804C0EA4_00001A18
    b lbl_fn_804C0EA4_00001A1C
lbl_fn_804C0EA4_00001A18:
    la r4, lbl_808813D0
lbl_fn_804C0EA4_00001A1C:
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_804C0EA4_00001A24:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
