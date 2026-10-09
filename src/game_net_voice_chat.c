#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void __files(void);
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_804FB224(void);
extern void fn_804FC8D0(void);
extern void fn_804FC9C4(void);
extern void fn_804FCA38(void);
extern void fn_804FE2E0(void);
extern void fn_804FF3D4(void);
extern void fn_8050128C(void);
extern void fn_8050CDAC(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_806A8E40(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 lbl_80759E48[];

/* Small data declarations */
extern u32 lbl_8087F5A4;
extern u32 lbl_8087F5B0;
extern u32 lbl_8087F5B8;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F5D4;
extern u32 lbl_8087F5E4;
extern u32 lbl_8087F5F0;
extern u32 lbl_8087F840;
extern u32 lbl_80887590;
extern u32 lbl_808875CC;

/* Function declarations */
void fn_804D5F08(void);
void fn_804D5F10(void);
void fn_804D5F3C(void);
void fn_804D5F44(void);
void fn_804D5F4C(void);
void fn_804D5F5C(void);
void fn_804D5F6C(void);
void fn_804D5F80(void);
void fn_804D5F9C(void);
void fn_804D5FA4(void);
void fn_804D5FAC(void);
void fn_804D5FB4(void);
void fn_804D5FBC(void);
void fn_804D5FC4(void);
void fn_804D5FCC(void);
void fn_804D5FD4(void);
void fn_804D5FDC(void);
void fn_804D5FE4(void);
void fn_804D5FF0(void);
void fn_804D6000(void);
void fn_804D6010(void);
void fn_804D6018(void);
void fn_804D6024(void);
void fn_804D6028(void);
void fn_804D6030(void);
void fn_804D6038(void);
void fn_804D6040(void);
void fn_804D604C(void);
void fn_804D6054(void);
void fn_804D605C(void);
void fn_804D60E8(void);
void fn_804D60F0(void);
void fn_804D610C(void);
void fn_804D6114(void);
void fn_804D6140(void);
void fn_804D6148(void);
void fn_804D6150(void);
void fn_804D6164(void);
void fn_804D616C(void);
void fn_804D6194(void);
void fn_804D619C(void);
void fn_804D6204(void);
void fn_804D620C(void);
void fn_804D6214(void);
void fn_804D621C(void);
void fn_804D6224(void);
void fn_804D622C(void);
void fn_804D627C(void);
void fn_804D62E8(void);
void fn_804D62FC(void);
void fn_804D6304(void);
void fn_804D634C(void);
void fn_804D6358(void);
void fn_804D6360(void);
void fn_804D6368(void);
void fn_804D6370(void);
void fn_804D6378(void);
void fn_804D6380(void);
void fn_804D6388(void);
void fn_804D6394(void);
void fn_804D63AC(void);
void fn_804D63D4(void);
void fn_804D63DC(void);
void fn_804D63E4(void);
void fn_804D63EC(void);
void fn_804D63FC(void);
void fn_804D6404(void);
void fn_804D640C(void);
void fn_804D6414(void);
void fn_804D6424(void);
void fn_804D6488(void);
void fn_804D6490(void);
void fn_804D64A0(void);
void fn_804D64A8(void);
void fn_804D64B8(void);
void fn_804D64CC(void);
void fn_804D65A0(void);
void fn_804D65A8(void);
void fn_804D65B0(void);
void fn_804D65C4(void);
void fn_804D65CC(void);
void fn_804D65D8(void);
void fn_804D65E0(void);
void fn_804D6648(void);
void fn_804D6650(void);
void fn_804D6668(void);
void fn_804D6684(void);
void fn_804D668C(void);

asm void fn_804D5F08(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_804D5F10(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_804D5F10_0000002C
    lwz r0, 0x5e8(r3)
    cmpw r4, r0
    bge lbl_fn_804D5F10_0000002C
    mulli r0, r4, 0xd5c
    lwz r3, 0x5e4(r3)
    add r3, r3, r0
    blr
lbl_fn_804D5F10_0000002C:
    li r3, 0x0
    blr
}

asm void fn_804D5F3C(void)
{
    nofralloc
    lwz r3, 0x5e8(r3)
    blr
}

asm void fn_804D5F44(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_804D5F4C(void)
{
    nofralloc
    mulli r0, r4, 0xd5c
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_804D5F5C(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    rlwimi r0, r4, 15, 16, 16
    stw r0, 0x12a4(r3)
    blr
}

asm void fn_804D5F6C(void)
{
    nofralloc
    addis r4, r3, 0x1
    lwz r3, -0x6648(r4)
    subi r0, r3, 0x1
    stw r0, -0x6648(r4)
    blr
}

asm void fn_804D5F80(void)
{
    nofralloc
    lwz r5, 0xc8(r3)
    li r0, 0x8
    li r3, 0x0
    srawi r4, r5, 31
    subfc r0, r0, r5
    adde r3, r4, r3
    blr
}

asm void fn_804D5F9C(void)
{
    nofralloc
    lwz r3, 0xc8(r3)
    blr
}

asm void fn_804D5FA4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_804D5FAC(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_804D5FB4(void)
{
    nofralloc
    lwz r3, lbl_8087F5B0
    blr
}

asm void fn_804D5FBC(void)
{
    nofralloc
    lwz r3, lbl_8087F5B8
    blr
}

asm void fn_804D5FC4(void)
{
    nofralloc
    lwz r3, lbl_8087F5C4
    blr
}

asm void fn_804D5FCC(void)
{
    nofralloc
    lwz r3, lbl_8087F5D4
    blr
}

asm void fn_804D5FD4(void)
{
    nofralloc
    lwz r3, lbl_8087F5E4
    blr
}

asm void fn_804D5FDC(void)
{
    nofralloc
    lwz r3, lbl_8087F5F0
    blr
}

asm void fn_804D5FE4(void)
{
    nofralloc
    addis r3, r3, 0x1
    lwz r3, -0x4134(r3)
    blr
}

asm void fn_804D5FF0(void)
{
    nofralloc
    addis r3, r3, 0x1
    li r0, 0x0
    stw r0, -0x4180(r3)
    blr
}

asm void fn_804D6000(void)
{
    nofralloc
    lwz r0, 0x4c(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_804D6010(void)
{
    nofralloc
    stw r4, 0x50c(r3)
    blr
}

asm void fn_804D6018(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0xd8(r3)
    blr
}

asm void fn_804D6024(void)
{
    nofralloc
    blr
}

asm void fn_804D6028(void)
{
    nofralloc
    addi r3, r3, 0x430
    blr
}

asm void fn_804D6030(void)
{
    nofralloc
    addi r3, r3, 0x4fc
    b fn_804FB224
}

asm void fn_804D6038(void)
{
    nofralloc
    lwz r3, 0x40(r3)
    blr
}

asm void fn_804D6040(void)
{
    nofralloc
    addis r3, r3, 0x1
    stb r4, -0x6644(r3)
    blr
}

asm void fn_804D604C(void)
{
    nofralloc
    addi r3, r3, 0x7f0
    blr
}

asm void fn_804D6054(void)
{
    nofralloc
    stw r4, 0xa00(r3)
    blr
}

asm void fn_804D605C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addis r30, r3, 0x1
    stw r29, 0x14(r1)
    lwz r29, -0x6654(r30)
    subi r30, r30, 0x6658
    cmplw r29, r30
    beq lbl_fn_804D605C_000001C4
    lwz r4, 0x0(r30)
    addis r31, r3, 0x1
    lwz r3, 0x0(r29)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r3)
    b lbl_fn_804D605C_000001BC
lbl_fn_804D605C_000001A4:
    mr r3, r29
    lwz r29, 0x4(r29)
    bl dtor_80084684
    lwz r3, -0x665c(r31)
    subi r0, r3, 0x1
    stw r0, -0x665c(r31)
lbl_fn_804D605C_000001BC:
    cmplw r29, r30
    bne lbl_fn_804D605C_000001A4
lbl_fn_804D605C_000001C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804D60E8(void)
{
    nofralloc
    addi r3, r3, 0x1c0
    blr
}

asm void fn_804D60F0(void)
{
    nofralloc
    li r0, 0x0
    li r5, 0x1
    stw r5, 0x299c(r3)
    stw r4, 0x29a4(r3)
    stw r0, 0x29a0(r3)
    stw r0, 0x29a8(r3)
    blr
}

asm void fn_804D610C(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_804D6114(void)
{
    nofralloc
    li r5, 0x1
    lwz r0, 0xfc0(r3)
    slw r5, r5, r4
    and r0, r5, r0
    cmplw r5, r0
    bne lbl_fn_804D6114_00000230
    mulli r0, r4, 0x240
    add r3, r3, r0
    blr
lbl_fn_804D6114_00000230:
    li r3, 0x0
    blr
}

asm void fn_804D6140(void)
{
    nofralloc
    addi r3, r3, 0x539c
    blr
}

asm void fn_804D6148(void)
{
    nofralloc
    lwz r3, 0xbc(r3)
    blr
}

asm void fn_804D6150(void)
{
    nofralloc
    lwz r3, 0xbc(r3)
    subi r0, r3, 0x14
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_804D6164(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_804D616C(void)
{
    nofralloc
    lwz r4, 0x1f8(r3)
    li r3, 0x0
    extrwi r0, r4, 1, 6
    cmplwi r0, 0x1
    bnelr
    extrwi r0, r4, 1, 7
    cmplwi r0, 0x1
    bnelr
    li r3, 0x1
    blr
}

asm void fn_804D6194(void)
{
    nofralloc
    lbz r3, 0x90(r3)
    blr
}

asm void fn_804D619C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r4, r3, 0x1
    stw r0, 0x14(r1)
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804D619C_000002D0
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D619C_000002C4
    li r3, 0x0
    b lbl_fn_804D619C_000002EC
lbl_fn_804D619C_000002C4:
    bl fn_806B0E30
    clrlwi r3, r3, 24
    b lbl_fn_804D619C_000002EC
lbl_fn_804D619C_000002D0:
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D619C_000002E4
    li r3, 0x0
    b lbl_fn_804D619C_000002E8
lbl_fn_804D619C_000002E4:
    bl fn_806A8E40
lbl_fn_804D619C_000002E8:
    clrlwi r3, r3, 24
lbl_fn_804D619C_000002EC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D6204(void)
{
    nofralloc
    lwz r3, 0x264(r3)
    blr
}

asm void fn_804D620C(void)
{
    nofralloc
    stw r4, 0x5b0(r3)
    blr
}

asm void fn_804D6214(void)
{
    nofralloc
    lwz r3, 0x25c(r3)
    blr
}

asm void fn_804D621C(void)
{
    nofralloc
    lwz r3, 0x328(r3)
    blr
}

asm void fn_804D6224(void)
{
    nofralloc
    lbz r3, 0xc0(r3)
    blr
}

asm void fn_804D622C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r4, r3, 0x1
    stw r0, 0x14(r1)
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804D622C_00000360
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D622C_00000354
    li r3, 0x0
    b lbl_fn_804D622C_00000364
lbl_fn_804D622C_00000354:
    bl fn_806B1250
    clrlwi r3, r3, 24
    b lbl_fn_804D622C_00000364
lbl_fn_804D622C_00000360:
    li r3, 0x0
lbl_fn_804D622C_00000364:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D627C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r5, r3, 0x1
    stw r0, 0x14(r1)
    lbz r0, -0x3deb(r5)
    stw r31, 0xc(r1)
    mr r31, r4
    cmpwi r0, 0x0
    bne lbl_fn_804D627C_000003B8
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D627C_000003AC
    li r0, 0x0
    b lbl_fn_804D627C_000003BC
lbl_fn_804D627C_000003AC:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804D627C_000003BC
lbl_fn_804D627C_000003B8:
    li r0, 0x0
lbl_fn_804D627C_000003BC:
    clrlwi r0, r0, 24
    subf r0, r31, r0
    lwz r31, 0xc(r1)
    cntlzw r0, r0
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D62E8(void)
{
    nofralloc
    lwz r3, 0xd88(r3)
    subi r0, r3, 0x8
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_804D62FC(void)
{
    nofralloc
    stw r4, 0xda4(r3)
    blr
}

asm void fn_804D6304(void)
{
    nofralloc
    addis r4, r3, 0x1
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804D6304_00000428
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D6304_00000420
    li r3, 0x1
    blr
lbl_fn_804D6304_00000420:
    b fn_806B0DE0
    blr
lbl_fn_804D6304_00000428:
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D6304_0000043C
    li r3, 0x1
    blr
lbl_fn_804D6304_0000043C:
    b fn_806A8E70
    blr
}

asm void fn_804D634C(void)
{
    nofralloc
    addis r3, r3, 0x1
    lbz r3, -0x3deb(r3)
    blr
}

asm void fn_804D6358(void)
{
    nofralloc
    lwz r3, 0xd88(r3)
    blr
}

asm void fn_804D6360(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_804D6368(void)
{
    nofralloc
    lwz r3, 0x5c(r3)
    blr
}

asm void fn_804D6370(void)
{
    nofralloc
    stw r4, 0x5c(r3)
    blr
}

asm void fn_804D6378(void)
{
    nofralloc
    lwz r3, 0x7c(r3)
    blr
}

asm void fn_804D6380(void)
{
    nofralloc
    lwz r3, 0x5c(r3)
    blr
}

asm void fn_804D6388(void)
{
    nofralloc
    addis r3, r3, 0x1
    stw r4, -0x6648(r3)
    blr
}

asm void fn_804D6394(void)
{
    nofralloc
    addis r4, r3, 0x1
    li r3, 0x1
    lwz r0, -0x6648(r4)
    cntlzw r0, r0
    rlwnm r3, r3, r0, 31, 31
    blr
}

asm void fn_804D63AC(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_804D63AC_000004BC
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x10
    stw r0, 0x54c(r3)
    blr
lbl_fn_804D63AC_000004BC:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
    blr
}

asm void fn_804D63D4(void)
{
    nofralloc
    lwz r3, 0x540(r3)
    blr
}

asm void fn_804D63DC(void)
{
    nofralloc
    lwz r3, 0x5c(r3)
    blr
}

asm void fn_804D63E4(void)
{
    nofralloc
    stw r4, 0x274(r3)
    blr
}

asm void fn_804D63EC(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x680(r3)
    blr
}

asm void fn_804D63FC(void)
{
    nofralloc
    stw r4, 0x414(r3)
    blr
}

asm void fn_804D6404(void)
{
    nofralloc
    stb r4, 0x231(r3)
    blr
}

asm void fn_804D640C(void)
{
    nofralloc
    lwz r3, lbl_8087F840
    blr
}

asm void fn_804D6414(void)
{
    nofralloc
    li r0, 0x2
    sth r0, 0x0(r3)
    sth r4, 0x2(r3)
    blr
}

asm void fn_804D6424(void)
{
    nofralloc
    lwz r0, 0x5a8(r3)
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_fn_804D6424_00000550
    cmpwi r0, 0x2
    beq lbl_fn_804D6424_00000558
    cmpwi r0, 0x3
    beq lbl_fn_804D6424_00000560
    cmpwi r0, 0x4
    beq lbl_fn_804D6424_00000568
    cmpwi r0, 0x5
    beq lbl_fn_804D6424_00000570
    b lbl_fn_804D6424_00000578
lbl_fn_804D6424_00000550:
    li r3, 0x5
    blr
lbl_fn_804D6424_00000558:
    li r3, 0x4
    blr
lbl_fn_804D6424_00000560:
    li r3, 0x3
    blr
lbl_fn_804D6424_00000568:
    li r3, 0x2
    blr
lbl_fn_804D6424_00000570:
    li r3, 0x1
    blr
lbl_fn_804D6424_00000578:
    li r3, 0x5
    blr
}

asm void fn_804D6488(void)
{
    nofralloc
    stw r4, 0x60(r3)
    blr
}

asm void fn_804D6490(void)
{
    nofralloc
    lwz r0, 0xf14(r3)
    stw r0, 0xf18(r3)
    stw r4, 0xf14(r3)
    blr
}

asm void fn_804D64A0(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_804D64A8(void)
{
    nofralloc
    mulli r0, r4, 0xb4
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_804D64B8(void)
{
    nofralloc
    lbz r4, 0xd52(r3)
    addi r0, r4, 0x1
    stb r0, 0xd52(r3)
    mr r3, r4
    blr
}

asm void fn_804D64CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x564(r3)
    stw r30, 0x8(r1)
    mr r30, r3
    cmpwi r31, 0x0
    blt lbl_fn_804D64CC_00000618
    bl OSGetTime
    lwz r6, 0x5bc(r30)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x5b8(r30)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    subf r0, r4, r31
    b lbl_fn_804D64CC_0000061C
lbl_fn_804D64CC_00000618:
    li r0, -0x1
lbl_fn_804D64CC_0000061C:
    srwi r0, r0, 31
    xori r3, r0, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_804D64CC_00000680
    cmpwi r31, 0x0
    blt lbl_fn_804D64CC_00000668
    bl OSGetTime
    lwz r6, 0x5bc(r30)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x5b8(r30)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lwz r0, 0x564(r30)
    subf r0, r4, r0
    b lbl_fn_804D64CC_0000066C
lbl_fn_804D64CC_00000668:
    li r0, -0x1
lbl_fn_804D64CC_0000066C:
    xori r0, r0, 0x3c
    srawi r3, r0, 1
    rlwinm r0, r0, 0, 26, 29
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_fn_804D64CC_00000680:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D65A0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_804D65A8(void)
{
    nofralloc
    stb r4, 0x104(r3)
    blr
}

asm void fn_804D65B0(void)
{
    nofralloc
    lwz r3, 0x94(r3)
    subi r0, r3, 0x4
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_804D65C4(void)
{
    nofralloc
    lwz r3, 0xe4(r3)
    blr
}

asm void fn_804D65CC(void)
{
    nofralloc
    lwz r0, 0x1a4(r3)
    srwi r3, r0, 31
    blr
}

asm void fn_804D65D8(void)
{
    nofralloc
    stw r4, 0xe8(r3)
    blr
}

asm void fn_804D65E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_804D65E0_00000700
    bl fn_8050CDAC
lbl_fn_804D65E0_00000700:
    cmpwi r31, 0x2
    bne lbl_fn_804D65E0_00000724
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_804D65E0_00000724
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_804D65E0_00000724:
    stw r31, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D6648(void)
{
    nofralloc
    lwz r3, 0xc8(r3)
    blr
}

asm void fn_804D6650(void)
{
    nofralloc
    addis r3, r3, 0x1
    lwz r3, -0x6614(r3)
    neg r0, r3
    andc r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_804D6668(void)
{
    nofralloc
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804D6668_00000774
    lwz r3, 0xc4(r3)
    blr
lbl_fn_804D6668_00000774:
    lwz r3, 0x8c(r3)
    blr
}

asm void fn_804D6684(void)
{
    nofralloc
    lwz r3, lbl_8087F5A4
    blr
}

asm void fn_804D668C(void)
{
    nofralloc
    stwu r1, -0xde0(r1)
    mflr r0
    stw r0, 0xde4(r1)
    li r0, 0xdd8
    addi r11, r1, 0xdc0
    stfd f31, 0xdd0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xdc8
    stfd f30, 0xdc0(r1)
    psq_stx f30, r1, r0, 0, 0
    bl _savegpr_14
    lwz r5, 0x4(r3)
    mr r15, r3
    cmplw r4, r5
    ble lbl_fn_804D668C_00002134
    lwz r6, 0x8(r3)
    subf r20, r5, r4
    cmplw r20, r6
    bgt lbl_fn_804D668C_000007DC
    subf r0, r20, r6
    cmplw r5, r0
    ble lbl_fn_804D668C_00000848
lbl_fn_804D668C_000007DC:
    lwz r5, 0x4(r3)
    lis r4, 0x13
    lwz r14, 0x8(r3)
    addi r0, r4, 0x299e
    add r3, r5, r20
    subf r3, r6, r3
    subf r0, r14, r0
    cmplw r3, r0
    ble lbl_fn_804D668C_00000820
    lis r3, __files@ha
    lis r4, lbl_80759E48@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80759E48@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804D668C_00000820:
    lis r3, 0x6
    addi r0, r3, 0x6334
    cmplw r14, r0
    bge lbl_fn_804D668C_00000834
    b lbl_fn_804D668C_00002080
lbl_fn_804D668C_00000834:
    lis r3, 0xd
    subi r0, r3, 0x3998
    cmplw r14, r0
    bge lbl_fn_804D668C_00002080
    b lbl_fn_804D668C_00002080
lbl_fn_804D668C_00000848:
    mulli r0, r5, 0xd5c
    lwz r3, 0x0(r3)
    cmpwi r20, 0x0
    add r21, r3, r0
    beq lbl_fn_804D668C_00002144
    lfs f30, lbl_808875CC
    addi r22, r1, 0x3d4
    lfs f31, lbl_80887590
    addi r23, r1, 0x6e8
    addi r24, r1, 0x9fc
    addi r25, r1, 0xd10
    addi r19, r1, 0xc70
    addi r18, r1, 0x95c
    addi r17, r1, 0x648
    addi r16, r1, 0x334
    li r26, -0x1
    li r27, 0x0
    li r28, 0xff
    li r31, 0xa0
    li r14, 0x14
    li r29, 0xa0
    li r30, 0x14
    b lbl_fn_804D668C_00002074
lbl_fn_804D668C_000008A4:
    stw r27, 0x1c(r1)
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x7c
    bl memset
    lhz r0, 0x108(r1)
    addi r3, r1, 0x130
    stw r26, 0x104(r1)
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    li r5, 0x20
    sth r0, 0x108(r1)
    stw r26, 0x10c(r1)
    stw r26, 0x110(r1)
    stw r26, 0x114(r1)
    stw r26, 0x118(r1)
    stw r26, 0x11c(r1)
    stw r26, 0x120(r1)
    stw r26, 0x124(r1)
    stw r26, 0x128(r1)
    stw r26, 0x12c(r1)
    bl memset
    addi r3, r1, 0x168
    stw r26, 0x150(r1)
    cmplw r3, r22
    sth r26, 0x154(r1)
    sth r27, 0x156(r1)
    stfs f30, 0x158(r1)
    stfs f31, 0x15c(r1)
    stfs f31, 0x160(r1)
    stfs f30, 0x164(r1)
    bge lbl_fn_804D668C_00000A60
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_804D668C_00000934
    li r4, 0x1
lbl_fn_804D668C_00000934:
    cmpwi r4, 0x0
    beq lbl_fn_804D668C_00000940
    li r0, 0x1
lbl_fn_804D668C_00000940:
    cmpwi r0, 0x0
    beq lbl_fn_804D668C_00000A28
    addi r0, r16, 0x9f
    subf r0, r3, r0
    divwu r0, r0, r29
    mtctr r0
    cmplw r3, r16
    bge lbl_fn_804D668C_00000A28
lbl_fn_804D668C_00000960:
    sth r26, 0x0(r3)
    sth r27, 0x2(r3)
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0xc(r3)
    stfs f30, 0x10(r3)
    sth r26, 0x14(r3)
    sth r27, 0x16(r3)
    stfs f30, 0x18(r3)
    stfs f31, 0x1c(r3)
    stfs f31, 0x20(r3)
    stfs f30, 0x24(r3)
    sth r26, 0x28(r3)
    sth r27, 0x2a(r3)
    stfs f30, 0x2c(r3)
    stfs f31, 0x30(r3)
    stfs f31, 0x34(r3)
    stfs f30, 0x38(r3)
    sth r26, 0x3c(r3)
    sth r27, 0x3e(r3)
    stfs f30, 0x40(r3)
    stfs f31, 0x44(r3)
    stfs f31, 0x48(r3)
    stfs f30, 0x4c(r3)
    sth r26, 0x50(r3)
    sth r27, 0x52(r3)
    stfs f30, 0x54(r3)
    stfs f31, 0x58(r3)
    stfs f31, 0x5c(r3)
    stfs f30, 0x60(r3)
    sth r26, 0x64(r3)
    sth r27, 0x66(r3)
    stfs f30, 0x68(r3)
    stfs f31, 0x6c(r3)
    stfs f31, 0x70(r3)
    stfs f30, 0x74(r3)
    sth r26, 0x78(r3)
    sth r27, 0x7a(r3)
    stfs f30, 0x7c(r3)
    stfs f31, 0x80(r3)
    stfs f31, 0x84(r3)
    stfs f30, 0x88(r3)
    sth r26, 0x8c(r3)
    sth r27, 0x8e(r3)
    stfs f30, 0x90(r3)
    stfs f31, 0x94(r3)
    stfs f31, 0x98(r3)
    stfs f30, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804D668C_00000960
lbl_fn_804D668C_00000A28:
    addi r0, r22, 0x13
    subf r0, r3, r0
    divwu r0, r0, r30
    mtctr r0
    cmplw r3, r22
    bge lbl_fn_804D668C_00000A60
lbl_fn_804D668C_00000A40:
    sth r26, 0x0(r3)
    sth r27, 0x2(r3)
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0xc(r3)
    stfs f30, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804D668C_00000A40
lbl_fn_804D668C_00000A60:
    lhz r0, 0x41c(r1)
    addi r3, r1, 0x444
    stw r27, 0x3d4(r1)
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    li r5, 0x20
    sth r27, 0x3d8(r1)
    stw r26, 0x418(r1)
    sth r0, 0x41c(r1)
    stw r26, 0x420(r1)
    stw r26, 0x424(r1)
    stw r26, 0x428(r1)
    stw r26, 0x42c(r1)
    stw r26, 0x430(r1)
    stw r26, 0x434(r1)
    stw r26, 0x438(r1)
    stw r26, 0x43c(r1)
    stw r26, 0x440(r1)
    bl memset
    addi r3, r1, 0x47c
    stw r26, 0x464(r1)
    cmplw r3, r23
    sth r26, 0x468(r1)
    sth r27, 0x46a(r1)
    stfs f30, 0x46c(r1)
    stfs f31, 0x470(r1)
    stfs f31, 0x474(r1)
    stfs f30, 0x478(r1)
    bge lbl_fn_804D668C_00000C10
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_804D668C_00000AE4
    li r4, 0x1
lbl_fn_804D668C_00000AE4:
    cmpwi r4, 0x0
    beq lbl_fn_804D668C_00000AF0
    li r0, 0x1
lbl_fn_804D668C_00000AF0:
    cmpwi r0, 0x0
    beq lbl_fn_804D668C_00000BD8
    addi r0, r17, 0x9f
    subf r0, r3, r0
    divwu r0, r0, r31
    mtctr r0
    cmplw r3, r17
    bge lbl_fn_804D668C_00000BD8
lbl_fn_804D668C_00000B10:
    sth r26, 0x0(r3)
    sth r27, 0x2(r3)
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0xc(r3)
    stfs f30, 0x10(r3)
    sth r26, 0x14(r3)
    sth r27, 0x16(r3)
    stfs f30, 0x18(r3)
    stfs f31, 0x1c(r3)
    stfs f31, 0x20(r3)
    stfs f30, 0x24(r3)
    sth r26, 0x28(r3)
    sth r27, 0x2a(r3)
    stfs f30, 0x2c(r3)
    stfs f31, 0x30(r3)
    stfs f31, 0x34(r3)
    stfs f30, 0x38(r3)
    sth r26, 0x3c(r3)
    sth r27, 0x3e(r3)
    stfs f30, 0x40(r3)
    stfs f31, 0x44(r3)
    stfs f31, 0x48(r3)
    stfs f30, 0x4c(r3)
    sth r26, 0x50(r3)
    sth r27, 0x52(r3)
    stfs f30, 0x54(r3)
    stfs f31, 0x58(r3)
    stfs f31, 0x5c(r3)
    stfs f30, 0x60(r3)
    sth r26, 0x64(r3)
    sth r27, 0x66(r3)
    stfs f30, 0x68(r3)
    stfs f31, 0x6c(r3)
    stfs f31, 0x70(r3)
    stfs f30, 0x74(r3)
    sth r26, 0x78(r3)
    sth r27, 0x7a(r3)
    stfs f30, 0x7c(r3)
    stfs f31, 0x80(r3)
    stfs f31, 0x84(r3)
    stfs f30, 0x88(r3)
    sth r26, 0x8c(r3)
    sth r27, 0x8e(r3)
    stfs f30, 0x90(r3)
    stfs f31, 0x94(r3)
    stfs f31, 0x98(r3)
    stfs f30, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804D668C_00000B10
lbl_fn_804D668C_00000BD8:
    addi r0, r23, 0x13
    subf r0, r3, r0
    divwu r0, r0, r14
    mtctr r0
    cmplw r3, r23
    bge lbl_fn_804D668C_00000C10
lbl_fn_804D668C_00000BF0:
    sth r26, 0x0(r3)
    sth r27, 0x2(r3)
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0xc(r3)
    stfs f30, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804D668C_00000BF0
lbl_fn_804D668C_00000C10:
    lhz r0, 0x730(r1)
    addi r3, r1, 0x758
    stw r27, 0x6e8(r1)
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    li r5, 0x20
    sth r27, 0x6ec(r1)
    stw r26, 0x72c(r1)
    sth r0, 0x730(r1)
    stw r26, 0x734(r1)
    stw r26, 0x738(r1)
    stw r26, 0x73c(r1)
    stw r26, 0x740(r1)
    stw r26, 0x744(r1)
    stw r26, 0x748(r1)
    stw r26, 0x74c(r1)
    stw r26, 0x750(r1)
    stw r26, 0x754(r1)
    bl memset
    addi r4, r1, 0x790
    stw r26, 0x778(r1)
    cmplw r4, r24
    sth r26, 0x77c(r1)
    sth r27, 0x77e(r1)
    stfs f30, 0x780(r1)
    stfs f31, 0x784(r1)
    stfs f31, 0x788(r1)
    stfs f30, 0x78c(r1)
    bge lbl_fn_804D668C_00000DC8
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804D668C_00000C94
    li r3, 0x1
lbl_fn_804D668C_00000C94:
    cmpwi r3, 0x0
    beq lbl_fn_804D668C_00000CA0
    li r0, 0x1
lbl_fn_804D668C_00000CA0:
    cmpwi r0, 0x0
    beq lbl_fn_804D668C_00000D8C
    addi r3, r18, 0x9f
    li r0, 0xa0
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r18
    bge lbl_fn_804D668C_00000D8C
lbl_fn_804D668C_00000CC4:
    sth r26, 0x0(r4)
    sth r27, 0x2(r4)
    stfs f30, 0x4(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0xc(r4)
    stfs f30, 0x10(r4)
    sth r26, 0x14(r4)
    sth r27, 0x16(r4)
    stfs f30, 0x18(r4)
    stfs f31, 0x1c(r4)
    stfs f31, 0x20(r4)
    stfs f30, 0x24(r4)
    sth r26, 0x28(r4)
    sth r27, 0x2a(r4)
    stfs f30, 0x2c(r4)
    stfs f31, 0x30(r4)
    stfs f31, 0x34(r4)
    stfs f30, 0x38(r4)
    sth r26, 0x3c(r4)
    sth r27, 0x3e(r4)
    stfs f30, 0x40(r4)
    stfs f31, 0x44(r4)
    stfs f31, 0x48(r4)
    stfs f30, 0x4c(r4)
    sth r26, 0x50(r4)
    sth r27, 0x52(r4)
    stfs f30, 0x54(r4)
    stfs f31, 0x58(r4)
    stfs f31, 0x5c(r4)
    stfs f30, 0x60(r4)
    sth r26, 0x64(r4)
    sth r27, 0x66(r4)
    stfs f30, 0x68(r4)
    stfs f31, 0x6c(r4)
    stfs f31, 0x70(r4)
    stfs f30, 0x74(r4)
    sth r26, 0x78(r4)
    sth r27, 0x7a(r4)
    stfs f30, 0x7c(r4)
    stfs f31, 0x80(r4)
    stfs f31, 0x84(r4)
    stfs f30, 0x88(r4)
    sth r26, 0x8c(r4)
    sth r27, 0x8e(r4)
    stfs f30, 0x90(r4)
    stfs f31, 0x94(r4)
    stfs f31, 0x98(r4)
    stfs f30, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_804D668C_00000CC4
lbl_fn_804D668C_00000D8C:
    addi r3, r24, 0x13
    li r0, 0x14
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r24
    bge lbl_fn_804D668C_00000DC8
lbl_fn_804D668C_00000DA8:
    sth r26, 0x0(r4)
    sth r27, 0x2(r4)
    stfs f30, 0x4(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0xc(r4)
    stfs f30, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_804D668C_00000DA8
lbl_fn_804D668C_00000DC8:
    lhz r0, 0xa44(r1)
    addi r3, r1, 0xa6c
    stw r27, 0x9fc(r1)
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    li r5, 0x20
    sth r27, 0xa00(r1)
    stw r26, 0xa40(r1)
    sth r0, 0xa44(r1)
    stw r26, 0xa48(r1)
    stw r26, 0xa4c(r1)
    stw r26, 0xa50(r1)
    stw r26, 0xa54(r1)
    stw r26, 0xa58(r1)
    stw r26, 0xa5c(r1)
    stw r26, 0xa60(r1)
    stw r26, 0xa64(r1)
    stw r26, 0xa68(r1)
    bl memset
    addi r4, r1, 0xaa4
    stw r26, 0xa8c(r1)
    cmplw r4, r25
    sth r26, 0xa90(r1)
    sth r27, 0xa92(r1)
    stfs f30, 0xa94(r1)
    stfs f31, 0xa98(r1)
    stfs f31, 0xa9c(r1)
    stfs f30, 0xaa0(r1)
    bge lbl_fn_804D668C_00000F80
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804D668C_00000E4C
    li r3, 0x1
lbl_fn_804D668C_00000E4C:
    cmpwi r3, 0x0
    beq lbl_fn_804D668C_00000E58
    li r0, 0x1
lbl_fn_804D668C_00000E58:
    cmpwi r0, 0x0
    beq lbl_fn_804D668C_00000F44
    addi r3, r19, 0x9f
    li r0, 0xa0
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r19
    bge lbl_fn_804D668C_00000F44
lbl_fn_804D668C_00000E7C:
    sth r26, 0x0(r4)
    sth r27, 0x2(r4)
    stfs f30, 0x4(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0xc(r4)
    stfs f30, 0x10(r4)
    sth r26, 0x14(r4)
    sth r27, 0x16(r4)
    stfs f30, 0x18(r4)
    stfs f31, 0x1c(r4)
    stfs f31, 0x20(r4)
    stfs f30, 0x24(r4)
    sth r26, 0x28(r4)
    sth r27, 0x2a(r4)
    stfs f30, 0x2c(r4)
    stfs f31, 0x30(r4)
    stfs f31, 0x34(r4)
    stfs f30, 0x38(r4)
    sth r26, 0x3c(r4)
    sth r27, 0x3e(r4)
    stfs f30, 0x40(r4)
    stfs f31, 0x44(r4)
    stfs f31, 0x48(r4)
    stfs f30, 0x4c(r4)
    sth r26, 0x50(r4)
    sth r27, 0x52(r4)
    stfs f30, 0x54(r4)
    stfs f31, 0x58(r4)
    stfs f31, 0x5c(r4)
    stfs f30, 0x60(r4)
    sth r26, 0x64(r4)
    sth r27, 0x66(r4)
    stfs f30, 0x68(r4)
    stfs f31, 0x6c(r4)
    stfs f31, 0x70(r4)
    stfs f30, 0x74(r4)
    sth r26, 0x78(r4)
    sth r27, 0x7a(r4)
    stfs f30, 0x7c(r4)
    stfs f31, 0x80(r4)
    stfs f31, 0x84(r4)
    stfs f30, 0x88(r4)
    sth r26, 0x8c(r4)
    sth r27, 0x8e(r4)
    stfs f30, 0x90(r4)
    stfs f31, 0x94(r4)
    stfs f31, 0x98(r4)
    stfs f30, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_804D668C_00000E7C
lbl_fn_804D668C_00000F44:
    addi r3, r25, 0x13
    li r0, 0x14
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r25
    bge lbl_fn_804D668C_00000F80
lbl_fn_804D668C_00000F60:
    sth r26, 0x0(r4)
    sth r27, 0x2(r4)
    stfs f30, 0x4(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0xc(r4)
    stfs f30, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_804D668C_00000F60
lbl_fn_804D668C_00000F80:
    stw r27, 0xd10(r1)
    addi r3, r1, 0xf8
    li r4, 0x0
    sth r27, 0xd14(r1)
    stw r26, 0xd54(r1)
    stw r26, 0xd58(r1)
    stw r26, 0xd5c(r1)
    stw r26, 0xd60(r1)
    stb r28, 0xe8(r1)
    bl fn_8050128C
    cmpwi r21, 0x0
    stw r27, 0xec(r1)
    stw r27, 0xcc(r1)
    stw r27, 0xd64(r1)
    sth r26, 0xd6c(r1)
    stw r27, 0xd68(r1)
    stb r27, 0xd6f(r1)
    stw r26, 0xd70(r1)
    stw r27, 0xd74(r1)
    stw r27, 0xf4(r1)
    stw r27, 0xf0(r1)
    beq lbl_fn_804D668C_00002060
    lwz r0, 0x1c(r1)
    stw r0, 0x0(r21)
    lwz r0, 0x24(r1)
    lwz r3, 0x20(r1)
    stw r3, 0x4(r21)
    stw r0, 0x8(r21)
    lwz r0, 0x2c(r1)
    lwz r3, 0x28(r1)
    stw r3, 0xc(r21)
    stw r0, 0x10(r21)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x14(r21)
    stw r0, 0x18(r21)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x1c(r21)
    stw r0, 0x20(r21)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x24(r21)
    stw r0, 0x28(r21)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x2c(r21)
    stw r0, 0x30(r21)
    lwz r0, 0x50(r1)
    stw r0, 0x34(r21)
    lwz r0, 0x54(r1)
    stw r0, 0x38(r21)
    lfs f0, 0x58(r1)
    stfs f0, 0x3c(r21)
    lfs f0, 0x5c(r1)
    stfs f0, 0x40(r21)
    lfs f0, 0x60(r1)
    stfs f0, 0x44(r21)
    lfs f0, 0x64(r1)
    stfs f0, 0x48(r21)
    lfs f0, 0x68(r1)
    stfs f0, 0x4c(r21)
    lfs f0, 0x6c(r1)
    stfs f0, 0x50(r21)
    lwz r0, 0x70(r1)
    stw r0, 0x54(r21)
    lwz r0, 0x78(r1)
    lwz r3, 0x74(r1)
    stw r3, 0x58(r21)
    stw r0, 0x5c(r21)
    lwz r0, 0x80(r1)
    lwz r3, 0x7c(r1)
    stw r3, 0x60(r21)
    stw r0, 0x64(r21)
    lwz r0, 0x88(r1)
    lwz r3, 0x84(r1)
    stw r3, 0x68(r21)
    stw r0, 0x6c(r21)
    lwz r0, 0x90(r1)
    lwz r3, 0x8c(r1)
    stw r3, 0x70(r21)
    stw r0, 0x74(r21)
    lwz r0, 0x98(r1)
    lwz r3, 0x94(r1)
    stw r3, 0x78(r21)
    stw r0, 0x7c(r21)
    lwz r0, 0xa0(r1)
    lwz r3, 0x9c(r1)
    stw r3, 0x80(r21)
    stw r0, 0x84(r21)
    lwz r0, 0xa8(r1)
    lwz r3, 0xa4(r1)
    stw r3, 0x88(r21)
    stw r0, 0x8c(r21)
    lwz r0, 0xb0(r1)
    lwz r3, 0xac(r1)
    stw r3, 0x90(r21)
    stw r0, 0x94(r21)
    lwz r0, 0xb8(r1)
    lwz r3, 0xb4(r1)
    stw r3, 0x98(r21)
    stw r0, 0x9c(r21)
    lwz r0, 0xc0(r1)
    lwz r3, 0xbc(r1)
    stw r3, 0xa0(r21)
    stw r0, 0xa4(r21)
    lwz r0, 0xc8(r1)
    lwz r3, 0xc4(r1)
    stw r3, 0xa8(r21)
    stw r0, 0xac(r21)
    lwz r0, 0xd0(r1)
    lwz r3, 0xcc(r1)
    stw r3, 0xb0(r21)
    stw r0, 0xb4(r21)
    lwz r0, 0xd8(r1)
    lwz r3, 0xd4(r1)
    stw r3, 0xb8(r21)
    stw r0, 0xbc(r21)
    lwz r0, 0xe0(r1)
    lwz r3, 0xdc(r1)
    stw r3, 0xc0(r21)
    stw r0, 0xc4(r21)
    lwz r0, 0xe4(r1)
    stw r0, 0xc8(r21)
    lbz r0, 0xe8(r1)
    addi r3, r21, 0x14c
    stb r0, 0xcc(r21)
    addi r0, r21, 0x3b8
    cmplw r3, r0
    addi r4, r1, 0x168
    lwz r0, 0xec(r1)
    stw r0, 0xd0(r21)
    lwz r0, 0xf0(r1)
    stw r0, 0xd4(r21)
    lwz r0, 0xf4(r1)
    stw r0, 0xd8(r21)
    lwz r0, 0xf8(r1)
    stw r0, 0xdc(r21)
    lwz r0, 0xfc(r1)
    stw r0, 0xe0(r21)
    lwz r0, 0x100(r1)
    stw r0, 0xe4(r21)
    lwz r0, 0x104(r1)
    stw r0, 0xe8(r21)
    lhz r0, 0x108(r1)
    sth r0, 0xec(r21)
    lwz r0, 0x10c(r1)
    stw r0, 0xf0(r21)
    lwz r0, 0x114(r1)
    lwz r5, 0x110(r1)
    stw r5, 0xf4(r21)
    stw r0, 0xf8(r21)
    lwz r0, 0x11c(r1)
    lwz r5, 0x118(r1)
    stw r5, 0xfc(r21)
    stw r0, 0x100(r21)
    lwz r0, 0x124(r1)
    lwz r5, 0x120(r1)
    stw r5, 0x104(r21)
    stw r0, 0x108(r21)
    lwz r0, 0x12c(r1)
    lwz r5, 0x128(r1)
    stw r5, 0x10c(r21)
    stw r0, 0x110(r21)
    lwz r0, 0x134(r1)
    lwz r5, 0x130(r1)
    stw r5, 0x114(r21)
    stw r0, 0x118(r21)
    lwz r0, 0x13c(r1)
    lwz r5, 0x138(r1)
    stw r5, 0x11c(r21)
    stw r0, 0x120(r21)
    lwz r0, 0x144(r1)
    lwz r5, 0x140(r1)
    stw r5, 0x124(r21)
    stw r0, 0x128(r21)
    lwz r0, 0x14c(r1)
    lwz r5, 0x148(r1)
    stw r5, 0x12c(r21)
    stw r0, 0x130(r21)
    lwz r0, 0x150(r1)
    stw r0, 0x134(r21)
    lha r0, 0x154(r1)
    sth r0, 0x138(r21)
    lha r0, 0x156(r1)
    sth r0, 0x13a(r21)
    lfs f0, 0x158(r1)
    stfs f0, 0x13c(r21)
    lfs f0, 0x15c(r1)
    stfs f0, 0x140(r21)
    lfs f0, 0x160(r1)
    stfs f0, 0x144(r21)
    lfs f0, 0x164(r1)
    stfs f0, 0x148(r21)
    bge lbl_fn_804D668C_000014B8
    addi r6, r21, 0x318
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804D668C_000012A0
    li r5, 0x1
lbl_fn_804D668C_000012A0:
    cmpwi r5, 0x0
    beq lbl_fn_804D668C_000012AC
    li r0, 0x1
lbl_fn_804D668C_000012AC:
    cmpwi r0, 0x0
    beq lbl_fn_804D668C_0000145C
    addi r5, r6, 0x9f
    li r0, 0xa0
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804D668C_0000145C
lbl_fn_804D668C_000012D0:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lha r0, 0x14(r4)
    sth r0, 0x14(r3)
    lha r0, 0x16(r4)
    sth r0, 0x16(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lha r0, 0x28(r4)
    sth r0, 0x28(r3)
    lha r0, 0x2a(r4)
    sth r0, 0x2a(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r3)
    lha r0, 0x3c(r4)
    sth r0, 0x3c(r3)
    lha r0, 0x3e(r4)
    sth r0, 0x3e(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r4)
    stfs f0, 0x4c(r3)
    lha r0, 0x50(r4)
    sth r0, 0x50(r3)
    lha r0, 0x52(r4)
    sth r0, 0x52(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x54(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x58(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0x5c(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x60(r3)
    lha r0, 0x64(r4)
    sth r0, 0x64(r3)
    lha r0, 0x66(r4)
    sth r0, 0x66(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lha r0, 0x78(r4)
    sth r0, 0x78(r3)
    lha r0, 0x7a(r4)
    sth r0, 0x7a(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lfs f0, 0x84(r4)
    stfs f0, 0x84(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x88(r3)
    lha r0, 0x8c(r4)
    sth r0, 0x8c(r3)
    lha r0, 0x8e(r4)
    sth r0, 0x8e(r3)
    lfs f0, 0x90(r4)
    stfs f0, 0x90(r3)
    lfs f0, 0x94(r4)
    stfs f0, 0x94(r3)
    lfs f0, 0x98(r4)
    stfs f0, 0x98(r3)
    lfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    stfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804D668C_000012D0
lbl_fn_804D668C_0000145C:
    addi r6, r21, 0x3b8
    li r0, 0x14
    addi r5, r6, 0x13
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804D668C_000014B8
lbl_fn_804D668C_0000147C:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    addi r4, r4, 0x14
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804D668C_0000147C
lbl_fn_804D668C_000014B8:
    lwz r0, 0x3d4(r1)
    addi r3, r21, 0x460
    stw r0, 0x3b8(r21)
    addi r0, r21, 0x6cc
    cmplw r3, r0
    addi r4, r1, 0x47c
    lwz r0, 0x3dc(r1)
    lwz r5, 0x3d8(r1)
    stw r5, 0x3bc(r21)
    stw r0, 0x3c0(r21)
    lwz r0, 0x3e4(r1)
    lwz r5, 0x3e0(r1)
    stw r5, 0x3c4(r21)
    stw r0, 0x3c8(r21)
    lwz r0, 0x3ec(r1)
    lwz r5, 0x3e8(r1)
    stw r5, 0x3cc(r21)
    stw r0, 0x3d0(r21)
    lwz r0, 0x3f4(r1)
    lwz r5, 0x3f0(r1)
    stw r5, 0x3d4(r21)
    stw r0, 0x3d8(r21)
    lwz r0, 0x3fc(r1)
    lwz r5, 0x3f8(r1)
    stw r5, 0x3dc(r21)
    stw r0, 0x3e0(r21)
    lwz r0, 0x404(r1)
    lwz r5, 0x400(r1)
    stw r5, 0x3e4(r21)
    stw r0, 0x3e8(r21)
    lwz r0, 0x40c(r1)
    lwz r5, 0x408(r1)
    stw r5, 0x3ec(r21)
    stw r0, 0x3f0(r21)
    lwz r0, 0x414(r1)
    lwz r5, 0x410(r1)
    stw r5, 0x3f4(r21)
    stw r0, 0x3f8(r21)
    lwz r0, 0x418(r1)
    stw r0, 0x3fc(r21)
    lhz r0, 0x41c(r1)
    sth r0, 0x400(r21)
    lwz r0, 0x420(r1)
    stw r0, 0x404(r21)
    lwz r0, 0x428(r1)
    lwz r5, 0x424(r1)
    stw r5, 0x408(r21)
    stw r0, 0x40c(r21)
    lwz r0, 0x430(r1)
    lwz r5, 0x42c(r1)
    stw r5, 0x410(r21)
    stw r0, 0x414(r21)
    lwz r0, 0x438(r1)
    lwz r5, 0x434(r1)
    stw r5, 0x418(r21)
    stw r0, 0x41c(r21)
    lwz r0, 0x440(r1)
    lwz r5, 0x43c(r1)
    stw r5, 0x420(r21)
    stw r0, 0x424(r21)
    lwz r0, 0x448(r1)
    lwz r5, 0x444(r1)
    stw r5, 0x428(r21)
    stw r0, 0x42c(r21)
    lwz r0, 0x450(r1)
    lwz r5, 0x44c(r1)
    stw r5, 0x430(r21)
    stw r0, 0x434(r21)
    lwz r0, 0x458(r1)
    lwz r5, 0x454(r1)
    stw r5, 0x438(r21)
    stw r0, 0x43c(r21)
    lwz r0, 0x460(r1)
    lwz r5, 0x45c(r1)
    stw r5, 0x440(r21)
    stw r0, 0x444(r21)
    lwz r0, 0x464(r1)
    stw r0, 0x448(r21)
    lha r0, 0x468(r1)
    sth r0, 0x44c(r21)
    lha r0, 0x46a(r1)
    sth r0, 0x44e(r21)
    lfs f0, 0x46c(r1)
    stfs f0, 0x450(r21)
    lfs f0, 0x470(r1)
    stfs f0, 0x454(r21)
    lfs f0, 0x474(r1)
    stfs f0, 0x458(r21)
    lfs f0, 0x478(r1)
    stfs f0, 0x45c(r21)
    bge lbl_fn_804D668C_00001850
    addi r6, r21, 0x62c
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804D668C_00001638
    li r5, 0x1
lbl_fn_804D668C_00001638:
    cmpwi r5, 0x0
    beq lbl_fn_804D668C_00001644
    li r0, 0x1
lbl_fn_804D668C_00001644:
    cmpwi r0, 0x0
    beq lbl_fn_804D668C_000017F4
    addi r5, r6, 0x9f
    li r0, 0xa0
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804D668C_000017F4
lbl_fn_804D668C_00001668:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lha r0, 0x14(r4)
    sth r0, 0x14(r3)
    lha r0, 0x16(r4)
    sth r0, 0x16(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lha r0, 0x28(r4)
    sth r0, 0x28(r3)
    lha r0, 0x2a(r4)
    sth r0, 0x2a(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r3)
    lha r0, 0x3c(r4)
    sth r0, 0x3c(r3)
    lha r0, 0x3e(r4)
    sth r0, 0x3e(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r4)
    stfs f0, 0x4c(r3)
    lha r0, 0x50(r4)
    sth r0, 0x50(r3)
    lha r0, 0x52(r4)
    sth r0, 0x52(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x54(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x58(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0x5c(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x60(r3)
    lha r0, 0x64(r4)
    sth r0, 0x64(r3)
    lha r0, 0x66(r4)
    sth r0, 0x66(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lha r0, 0x78(r4)
    sth r0, 0x78(r3)
    lha r0, 0x7a(r4)
    sth r0, 0x7a(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lfs f0, 0x84(r4)
    stfs f0, 0x84(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x88(r3)
    lha r0, 0x8c(r4)
    sth r0, 0x8c(r3)
    lha r0, 0x8e(r4)
    sth r0, 0x8e(r3)
    lfs f0, 0x90(r4)
    stfs f0, 0x90(r3)
    lfs f0, 0x94(r4)
    stfs f0, 0x94(r3)
    lfs f0, 0x98(r4)
    stfs f0, 0x98(r3)
    lfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    stfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804D668C_00001668
lbl_fn_804D668C_000017F4:
    addi r6, r21, 0x6cc
    li r0, 0x14
    addi r5, r6, 0x13
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804D668C_00001850
lbl_fn_804D668C_00001814:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    addi r4, r4, 0x14
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804D668C_00001814
lbl_fn_804D668C_00001850:
    lwz r0, 0x6e8(r1)
    addi r3, r21, 0x774
    stw r0, 0x6cc(r21)
    addi r0, r21, 0x9e0
    cmplw r3, r0
    addi r4, r1, 0x790
    lwz r0, 0x6f0(r1)
    lwz r5, 0x6ec(r1)
    stw r5, 0x6d0(r21)
    stw r0, 0x6d4(r21)
    lwz r0, 0x6f8(r1)
    lwz r5, 0x6f4(r1)
    stw r5, 0x6d8(r21)
    stw r0, 0x6dc(r21)
    lwz r0, 0x700(r1)
    lwz r5, 0x6fc(r1)
    stw r5, 0x6e0(r21)
    stw r0, 0x6e4(r21)
    lwz r0, 0x708(r1)
    lwz r5, 0x704(r1)
    stw r5, 0x6e8(r21)
    stw r0, 0x6ec(r21)
    lwz r0, 0x710(r1)
    lwz r5, 0x70c(r1)
    stw r5, 0x6f0(r21)
    stw r0, 0x6f4(r21)
    lwz r0, 0x718(r1)
    lwz r5, 0x714(r1)
    stw r5, 0x6f8(r21)
    stw r0, 0x6fc(r21)
    lwz r0, 0x720(r1)
    lwz r5, 0x71c(r1)
    stw r5, 0x700(r21)
    stw r0, 0x704(r21)
    lwz r0, 0x728(r1)
    lwz r5, 0x724(r1)
    stw r5, 0x708(r21)
    stw r0, 0x70c(r21)
    lwz r0, 0x72c(r1)
    stw r0, 0x710(r21)
    lhz r0, 0x730(r1)
    sth r0, 0x714(r21)
    lwz r0, 0x734(r1)
    stw r0, 0x718(r21)
    lwz r0, 0x73c(r1)
    lwz r5, 0x738(r1)
    stw r5, 0x71c(r21)
    stw r0, 0x720(r21)
    lwz r0, 0x744(r1)
    lwz r5, 0x740(r1)
    stw r5, 0x724(r21)
    stw r0, 0x728(r21)
    lwz r0, 0x74c(r1)
    lwz r5, 0x748(r1)
    stw r5, 0x72c(r21)
    stw r0, 0x730(r21)
    lwz r0, 0x754(r1)
    lwz r5, 0x750(r1)
    stw r5, 0x734(r21)
    stw r0, 0x738(r21)
    lwz r0, 0x75c(r1)
    lwz r5, 0x758(r1)
    stw r5, 0x73c(r21)
    stw r0, 0x740(r21)
    lwz r0, 0x764(r1)
    lwz r5, 0x760(r1)
    stw r5, 0x744(r21)
    stw r0, 0x748(r21)
    lwz r0, 0x76c(r1)
    lwz r5, 0x768(r1)
    stw r5, 0x74c(r21)
    stw r0, 0x750(r21)
    lwz r0, 0x774(r1)
    lwz r5, 0x770(r1)
    stw r5, 0x754(r21)
    stw r0, 0x758(r21)
    lwz r0, 0x778(r1)
    stw r0, 0x75c(r21)
    lha r0, 0x77c(r1)
    sth r0, 0x760(r21)
    lha r0, 0x77e(r1)
    sth r0, 0x762(r21)
    lfs f0, 0x780(r1)
    stfs f0, 0x764(r21)
    lfs f0, 0x784(r1)
    stfs f0, 0x768(r21)
    lfs f0, 0x788(r1)
    stfs f0, 0x76c(r21)
    lfs f0, 0x78c(r1)
    stfs f0, 0x770(r21)
    bge lbl_fn_804D668C_00001BE8
    addi r6, r21, 0x940
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804D668C_000019D0
    li r5, 0x1
lbl_fn_804D668C_000019D0:
    cmpwi r5, 0x0
    beq lbl_fn_804D668C_000019DC
    li r0, 0x1
lbl_fn_804D668C_000019DC:
    cmpwi r0, 0x0
    beq lbl_fn_804D668C_00001B8C
    addi r5, r6, 0x9f
    li r0, 0xa0
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804D668C_00001B8C
lbl_fn_804D668C_00001A00:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lha r0, 0x14(r4)
    sth r0, 0x14(r3)
    lha r0, 0x16(r4)
    sth r0, 0x16(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lha r0, 0x28(r4)
    sth r0, 0x28(r3)
    lha r0, 0x2a(r4)
    sth r0, 0x2a(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r3)
    lha r0, 0x3c(r4)
    sth r0, 0x3c(r3)
    lha r0, 0x3e(r4)
    sth r0, 0x3e(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r4)
    stfs f0, 0x4c(r3)
    lha r0, 0x50(r4)
    sth r0, 0x50(r3)
    lha r0, 0x52(r4)
    sth r0, 0x52(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x54(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x58(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0x5c(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x60(r3)
    lha r0, 0x64(r4)
    sth r0, 0x64(r3)
    lha r0, 0x66(r4)
    sth r0, 0x66(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lha r0, 0x78(r4)
    sth r0, 0x78(r3)
    lha r0, 0x7a(r4)
    sth r0, 0x7a(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lfs f0, 0x84(r4)
    stfs f0, 0x84(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x88(r3)
    lha r0, 0x8c(r4)
    sth r0, 0x8c(r3)
    lha r0, 0x8e(r4)
    sth r0, 0x8e(r3)
    lfs f0, 0x90(r4)
    stfs f0, 0x90(r3)
    lfs f0, 0x94(r4)
    stfs f0, 0x94(r3)
    lfs f0, 0x98(r4)
    stfs f0, 0x98(r3)
    lfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    stfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804D668C_00001A00
lbl_fn_804D668C_00001B8C:
    addi r6, r21, 0x9e0
    li r0, 0x14
    addi r5, r6, 0x13
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804D668C_00001BE8
lbl_fn_804D668C_00001BAC:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    addi r4, r4, 0x14
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804D668C_00001BAC
lbl_fn_804D668C_00001BE8:
    lwz r0, 0x9fc(r1)
    addi r3, r21, 0xa88
    stw r0, 0x9e0(r21)
    addi r0, r21, 0xcf4
    cmplw r3, r0
    addi r4, r1, 0xaa4
    lwz r0, 0xa04(r1)
    lwz r5, 0xa00(r1)
    stw r5, 0x9e4(r21)
    stw r0, 0x9e8(r21)
    lwz r0, 0xa0c(r1)
    lwz r5, 0xa08(r1)
    stw r5, 0x9ec(r21)
    stw r0, 0x9f0(r21)
    lwz r0, 0xa14(r1)
    lwz r5, 0xa10(r1)
    stw r5, 0x9f4(r21)
    stw r0, 0x9f8(r21)
    lwz r0, 0xa1c(r1)
    lwz r5, 0xa18(r1)
    stw r5, 0x9fc(r21)
    stw r0, 0xa00(r21)
    lwz r0, 0xa24(r1)
    lwz r5, 0xa20(r1)
    stw r5, 0xa04(r21)
    stw r0, 0xa08(r21)
    lwz r0, 0xa2c(r1)
    lwz r5, 0xa28(r1)
    stw r5, 0xa0c(r21)
    stw r0, 0xa10(r21)
    lwz r0, 0xa34(r1)
    lwz r5, 0xa30(r1)
    stw r5, 0xa14(r21)
    stw r0, 0xa18(r21)
    lwz r0, 0xa3c(r1)
    lwz r5, 0xa38(r1)
    stw r5, 0xa1c(r21)
    stw r0, 0xa20(r21)
    lwz r0, 0xa40(r1)
    stw r0, 0xa24(r21)
    lhz r0, 0xa44(r1)
    sth r0, 0xa28(r21)
    lwz r0, 0xa48(r1)
    stw r0, 0xa2c(r21)
    lwz r0, 0xa50(r1)
    lwz r5, 0xa4c(r1)
    stw r5, 0xa30(r21)
    stw r0, 0xa34(r21)
    lwz r0, 0xa58(r1)
    lwz r5, 0xa54(r1)
    stw r5, 0xa38(r21)
    stw r0, 0xa3c(r21)
    lwz r0, 0xa60(r1)
    lwz r5, 0xa5c(r1)
    stw r5, 0xa40(r21)
    stw r0, 0xa44(r21)
    lwz r0, 0xa68(r1)
    lwz r5, 0xa64(r1)
    stw r5, 0xa48(r21)
    stw r0, 0xa4c(r21)
    lwz r0, 0xa70(r1)
    lwz r5, 0xa6c(r1)
    stw r5, 0xa50(r21)
    stw r0, 0xa54(r21)
    lwz r0, 0xa78(r1)
    lwz r5, 0xa74(r1)
    stw r5, 0xa58(r21)
    stw r0, 0xa5c(r21)
    lwz r0, 0xa80(r1)
    lwz r5, 0xa7c(r1)
    stw r5, 0xa60(r21)
    stw r0, 0xa64(r21)
    lwz r0, 0xa88(r1)
    lwz r5, 0xa84(r1)
    stw r5, 0xa68(r21)
    stw r0, 0xa6c(r21)
    lwz r0, 0xa8c(r1)
    stw r0, 0xa70(r21)
    lha r0, 0xa90(r1)
    sth r0, 0xa74(r21)
    lha r0, 0xa92(r1)
    sth r0, 0xa76(r21)
    lfs f0, 0xa94(r1)
    stfs f0, 0xa78(r21)
    lfs f0, 0xa98(r1)
    stfs f0, 0xa7c(r21)
    lfs f0, 0xa9c(r1)
    stfs f0, 0xa80(r21)
    lfs f0, 0xaa0(r1)
    stfs f0, 0xa84(r21)
    bge lbl_fn_804D668C_00001F80
    addi r6, r21, 0xc54
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804D668C_00001D68
    li r5, 0x1
lbl_fn_804D668C_00001D68:
    cmpwi r5, 0x0
    beq lbl_fn_804D668C_00001D74
    li r0, 0x1
lbl_fn_804D668C_00001D74:
    cmpwi r0, 0x0
    beq lbl_fn_804D668C_00001F24
    addi r5, r6, 0x9f
    li r0, 0xa0
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804D668C_00001F24
lbl_fn_804D668C_00001D98:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lha r0, 0x14(r4)
    sth r0, 0x14(r3)
    lha r0, 0x16(r4)
    sth r0, 0x16(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lha r0, 0x28(r4)
    sth r0, 0x28(r3)
    lha r0, 0x2a(r4)
    sth r0, 0x2a(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r3)
    lha r0, 0x3c(r4)
    sth r0, 0x3c(r3)
    lha r0, 0x3e(r4)
    sth r0, 0x3e(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r4)
    stfs f0, 0x4c(r3)
    lha r0, 0x50(r4)
    sth r0, 0x50(r3)
    lha r0, 0x52(r4)
    sth r0, 0x52(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x54(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x58(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0x5c(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x60(r3)
    lha r0, 0x64(r4)
    sth r0, 0x64(r3)
    lha r0, 0x66(r4)
    sth r0, 0x66(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lha r0, 0x78(r4)
    sth r0, 0x78(r3)
    lha r0, 0x7a(r4)
    sth r0, 0x7a(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lfs f0, 0x84(r4)
    stfs f0, 0x84(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x88(r3)
    lha r0, 0x8c(r4)
    sth r0, 0x8c(r3)
    lha r0, 0x8e(r4)
    sth r0, 0x8e(r3)
    lfs f0, 0x90(r4)
    stfs f0, 0x90(r3)
    lfs f0, 0x94(r4)
    stfs f0, 0x94(r3)
    lfs f0, 0x98(r4)
    stfs f0, 0x98(r3)
    lfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    stfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804D668C_00001D98
lbl_fn_804D668C_00001F24:
    addi r6, r21, 0xcf4
    li r0, 0x14
    addi r5, r6, 0x13
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804D668C_00001F80
lbl_fn_804D668C_00001F44:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    addi r4, r4, 0x14
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804D668C_00001F44
lbl_fn_804D668C_00001F80:
    lwz r0, 0xd10(r1)
    stw r0, 0xcf4(r21)
    lwz r0, 0xd18(r1)
    lwz r3, 0xd14(r1)
    stw r3, 0xcf8(r21)
    stw r0, 0xcfc(r21)
    lwz r0, 0xd20(r1)
    lwz r3, 0xd1c(r1)
    stw r3, 0xd00(r21)
    stw r0, 0xd04(r21)
    lwz r0, 0xd28(r1)
    lwz r3, 0xd24(r1)
    stw r3, 0xd08(r21)
    stw r0, 0xd0c(r21)
    lwz r0, 0xd30(r1)
    lwz r3, 0xd2c(r1)
    stw r3, 0xd10(r21)
    stw r0, 0xd14(r21)
    lwz r0, 0xd38(r1)
    lwz r3, 0xd34(r1)
    stw r3, 0xd18(r21)
    stw r0, 0xd1c(r21)
    lwz r0, 0xd40(r1)
    lwz r3, 0xd3c(r1)
    stw r3, 0xd20(r21)
    stw r0, 0xd24(r21)
    lwz r0, 0xd48(r1)
    lwz r3, 0xd44(r1)
    stw r3, 0xd28(r21)
    stw r0, 0xd2c(r21)
    lwz r0, 0xd50(r1)
    lwz r3, 0xd4c(r1)
    stw r3, 0xd30(r21)
    stw r0, 0xd34(r21)
    lwz r0, 0xd58(r1)
    lwz r3, 0xd54(r1)
    stw r3, 0xd38(r21)
    stw r0, 0xd3c(r21)
    lwz r0, 0xd60(r1)
    lwz r3, 0xd5c(r1)
    stw r3, 0xd40(r21)
    stw r0, 0xd44(r21)
    lwz r0, 0xd64(r1)
    stw r0, 0xd48(r21)
    lwz r0, 0xd68(r1)
    stw r0, 0xd4c(r21)
    lha r0, 0xd6c(r1)
    sth r0, 0xd50(r21)
    lbz r0, 0xd6e(r1)
    stb r0, 0xd52(r21)
    lbz r0, 0xd6f(r1)
    stb r0, 0xd53(r21)
    lwz r0, 0xd70(r1)
    stw r0, 0xd54(r21)
    lwz r0, 0xd74(r1)
    stw r0, 0xd58(r21)
lbl_fn_804D668C_00002060:
    lwz r3, 0x4(r15)
    subi r20, r20, 0x1
    addi r21, r21, 0xd5c
    addi r0, r3, 0x1
    stw r0, 0x4(r15)
lbl_fn_804D668C_00002074:
    cmpwi r20, 0x0
    bne lbl_fn_804D668C_000008A4
    b lbl_fn_804D668C_00002144
lbl_fn_804D668C_00002080:
    li r4, 0x0
    addi r0, r15, 0x8
    stw r4, 0x8(r1)
    mr r3, r15
    stw r4, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    stw r4, 0x18(r1)
    lwz r0, 0x4(r15)
    lwz r4, 0x8(r15)
    add r0, r0, r20
    subf r4, r4, r0
    bl fn_804FC8D0
    lwz r0, 0x4(r15)
    mr r5, r3
    addi r3, r1, 0x8
    add r4, r0, r20
    bl fn_804FF3D4
    lwz r0, 0x4(r15)
    mr r4, r20
    stw r0, 0x18(r1)
    addi r3, r1, 0x8
    bl fn_804FCA38
    lwz r0, 0x4(r15)
    addi r3, r1, 0x8
    lwz r4, 0x0(r15)
    mulli r0, r0, 0xd5c
    add r5, r4, r0
    bl fn_804FE2E0
    lwz r5, 0x8(r15)
    addi r3, r1, 0x8
    lwz r0, 0x10(r1)
    li r4, -0x1
    stw r0, 0x8(r15)
    stw r5, 0x10(r1)
    lwz r0, 0x8(r1)
    lwz r5, 0x0(r15)
    stw r0, 0x0(r15)
    stw r5, 0x8(r1)
    lwz r0, 0xc(r1)
    lwz r5, 0x4(r15)
    stw r0, 0x4(r15)
    stw r5, 0xc(r1)
    bl fn_804FC9C4
    b lbl_fn_804D668C_00002144
lbl_fn_804D668C_00002134:
    bge lbl_fn_804D668C_00002144
    subf r0, r4, r5
    subf r0, r0, r5
    stw r0, 0x4(r3)
lbl_fn_804D668C_00002144:
    li r0, 0xdd8
    addi r11, r1, 0xdc0
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xdd0(r1)
    li r0, 0xdc8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xdc0(r1)
    bl _restgpr_14
    lwz r0, 0xde4(r1)
    mtlr r0
    addi r1, r1, 0xde0
    blr
}
