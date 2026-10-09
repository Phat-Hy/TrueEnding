#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_80124BFC(void);
extern void fn_801F3FF8(void);
extern void fn_801FECE0(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_804C4530(void);
extern void fn_804E4A24(void);
extern void fn_804EB1B0(void);
extern void fn_8050BA6C(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);

/* External data declarations */
extern u8 lbl_80758848[];
extern u8 lbl_807588DC[];
extern u8 lbl_80758D4C[];
extern u8 lbl_80790D74[];
extern u8 lbl_80790DB8[];
extern u8 lbl_80790DF8[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5C0;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F5D4;
extern u32 lbl_8087F5D8;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_8087F9C0;
extern u32 lbl_808813D0;
extern u32 lbl_808873F8;
extern u32 lbl_80887400;
extern u32 lbl_80887404;
extern u32 lbl_80887470;
extern u32 lbl_80887474;
extern u32 lbl_80887478;
extern u32 lbl_8088747C;

/* Function declarations */
void fn_804C2994(void);
void fn_804C2C14(void);
void fn_804C2D5C(void);
void fn_804C2F98(void);
void fn_804C2F9C(void);
void fn_804C2FC8(void);
void fn_804C2FF8(void);
void fn_804C3060(void);
void fn_804C319C(void);
void fn_804C3220(void);
void fn_804C35F0(void);
void fn_804C38B8(void);
void fn_804C38BC(void);
void fn_804C38C0(void);
void fn_804C3B78(void);
void fn_804C4150(void);

asm void fn_804C2994(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_24
    lwz r5, lbl_8087F59C
    lis r27, lbl_80758848@ha
    addi r27, r27, lbl_80758848@l
    mr r26, r3
    lwz r0, 0xc4(r5)
    addi r5, r27, 0x8
    addi r7, r27, 0x2c
    lwz r24, 0x8(r27)
    lwz r31, 0x4(r5)
    cmpwi r0, 0x2
    lwz r30, 0x8(r5)
    lwz r29, 0xc(r5)
    lwz r28, 0x10(r5)
    lwz r25, 0x14(r5)
    lwz r12, 0x18(r5)
    lwz r11, 0x1c(r5)
    lwz r10, 0x20(r5)
    lwz r9, 0x2c(r27)
    lwz r8, 0x4(r7)
    lwz r6, 0x8(r7)
    lwz r5, 0xc(r7)
    lwz r0, 0x10(r7)
    stw r24, 0x28(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x30(r1)
    stw r29, 0x34(r1)
    stw r28, 0x38(r1)
    stw r25, 0x3c(r1)
    stw r12, 0x40(r1)
    stw r11, 0x44(r1)
    stw r10, 0x48(r1)
    stw r9, 0x14(r1)
    stw r8, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r0, 0x24(r1)
    bne lbl_fn_804C2994_000000B8
    slwi r0, r4, 2
    addi r4, r1, 0x14
    lwzx r0, r4, r0
    b lbl_fn_804C2994_000000C4
lbl_fn_804C2994_000000B8:
    slwi r0, r4, 2
    addi r4, r1, 0x28
    lwzx r0, r4, r0
lbl_fn_804C2994_000000C4:
    stw r0, 0xe58(r3)
    addi r3, r27, 0x58
    addi r25, r1, 0x8
    li r28, 0x0
    lwz r5, 0x58(r27)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
lbl_fn_804C2994_000000EC:
    lwz r0, 0xe58(r26)
    cmpw r28, r0
    bne lbl_fn_804C2994_0000011C
    lwz r4, 0x70(r26)
    lwz r3, 0x0(r25)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887400
    mr r4, r3
    mr r3, r24
    bl fn_801FECE0
    b lbl_fn_804C2994_0000013C
lbl_fn_804C2994_0000011C:
    lwz r4, 0x70(r26)
    lwz r3, 0x0(r25)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r24
    bl fn_801FECE0
lbl_fn_804C2994_0000013C:
    addi r28, r28, 0x1
    addi r25, r25, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_804C2994_000000EC
    lwz r3, lbl_8087F610
    lwz r0, 0x514(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C2994_00000268
    bl fn_804E4A24
    lis r30, 0x6
    lwz r4, 0x70(r26)
    addi r0, r30, 0x35d8
    mr r28, r3
    xoris r3, r0, 0x8000
    lis r29, lbl_807588DC@ha
    subf r0, r0, r28
    li r25, 0xff
    addc r0, r0, r3
    addi r29, r29, lbl_807588DC@l
    subfe r0, r0, r0
    addi r24, r4, 0x58
    addi r3, r29, 0x405
    andc r31, r25, r0
    bl fn_800DC6B4
    xoris r0, r31, 0x8000
    lis r31, 0x4330
    stw r0, 0x54(r1)
    mr r4, r3
    lfd f1, 0x0(r27)
    mr r3, r24
    stw r31, 0x50(r1)
    li r5, 0x0
    lfd f0, 0x50(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    addi r0, r30, 0x35d8
    lwz r4, 0x70(r26)
    xoris r3, r0, 0x8000
    subf r0, r0, r28
    addi r24, r4, 0x58
    addc r0, r0, r3
    addi r3, r29, 0x426
    subfe r0, r0, r0
    andc r25, r25, r0
    bl fn_800DC6B4
    xoris r0, r25, 0x8000
    stw r0, 0x5c(r1)
    mr r4, r3
    lfd f1, 0x0(r27)
    stw r31, 0x58(r1)
    mr r3, r24
    li r5, 0x0
    lfd f0, 0x58(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    addi r3, r30, 0x35d8
    lwz r5, 0x70(r26)
    xoris r4, r3, 0x8000
    li r0, -0x64
    subf r3, r3, r28
    addi r24, r5, 0x58
    addc r4, r3, r4
    subfe r4, r4, r4
    addi r3, r29, 0x431
    and r25, r0, r4
    bl fn_800DC6B4
    xoris r0, r25, 0x8000
    stw r0, 0x64(r1)
    mr r4, r3
    lfd f1, 0x0(r27)
    stw r31, 0x60(r1)
    mr r3, r24
    lfd f0, 0x60(r1)
    fsubs f1, f0, f1
    bl fn_801FECE0
lbl_fn_804C2994_00000268:
    addi r11, r1, 0x90
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_804C2C14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_804C2C14_000002A8
    li r3, 0x0
    b lbl_fn_804C2C14_000003B4
lbl_fn_804C2C14_000002A8:
    li r31, 0x0
    b lbl_fn_804C2C14_00000360
lbl_fn_804C2C14_000002B0:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C2C14_000002C8
    li r4, 0x0
    b lbl_fn_804C2C14_000002E8
lbl_fn_804C2C14_000002C8:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r31
    ble lbl_fn_804C2C14_000002E4
    lwz r3, 0x8(r1)
    lbzx r4, r3, r31
    b lbl_fn_804C2C14_000002E8
lbl_fn_804C2C14_000002E4:
    li r4, 0xff
lbl_fn_804C2C14_000002E8:
    lwz r6, lbl_8087F610
    li r3, 0x0
    lwz r0, 0x5e8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804C2C14_00000330
lbl_fn_804C2C14_00000300:
    lwz r0, 0x5e4(r6)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C2C14_00000328
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804C2C14_00000328
    b lbl_fn_804C2C14_00000334
lbl_fn_804C2C14_00000328:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804C2C14_00000300
lbl_fn_804C2C14_00000330:
    li r5, 0x0
lbl_fn_804C2C14_00000334:
    cmpwi r5, 0x0
    beq lbl_fn_804C2C14_0000035C
    lwz r3, 0xd0(r5)
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C2C14_0000035C
    extrwi. r0, r3, 2, 20
    bne lbl_fn_804C2C14_0000035C
    li r3, 0x1
    b lbl_fn_804C2C14_000003B4
lbl_fn_804C2C14_0000035C:
    addi r31, r31, 0x1
lbl_fn_804C2C14_00000360:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C2C14_00000390
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C2C14_00000388
    li r3, 0x1
    b lbl_fn_804C2C14_000003A8
lbl_fn_804C2C14_00000388:
    bl fn_806B0DE0
    b lbl_fn_804C2C14_000003A8
lbl_fn_804C2C14_00000390:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C2C14_000003A4
    li r3, 0x1
    b lbl_fn_804C2C14_000003A8
lbl_fn_804C2C14_000003A4:
    bl fn_806A8E70
lbl_fn_804C2C14_000003A8:
    cmpw r31, r3
    blt lbl_fn_804C2C14_000002B0
    li r3, 0x0
lbl_fn_804C2C14_000003B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C2D5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r8, lbl_8087F628
    mr r27, r3
    lbz r26, 0xcc(r4)
    mr r28, r5
    lwz r0, 0x1f8(r8)
    mr r29, r6
    mr r30, r7
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C2D5C_00000408
    li r4, 0x0
    b lbl_fn_804C2D5C_00000444
lbl_fn_804C2D5C_00000408:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    lwz r5, 0x8(r1)
    li r4, 0x0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_804C2D5C_00000440
lbl_fn_804C2D5C_00000424:
    lbz r0, 0x0(r5)
    cmplw r26, r0
    bne lbl_fn_804C2D5C_00000434
    b lbl_fn_804C2D5C_00000444
lbl_fn_804C2D5C_00000434:
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_804C2D5C_00000424
lbl_fn_804C2D5C_00000440:
    li r4, -0x1
lbl_fn_804C2D5C_00000444:
    cmpwi r4, 0x0
    blt lbl_fn_804C2D5C_000005EC
    cmpwi r4, 0x6
    blt lbl_fn_804C2D5C_00000458
    b lbl_fn_804C2D5C_000005EC
lbl_fn_804C2D5C_00000458:
    cmpwi r30, 0x0
    bne lbl_fn_804C2D5C_000004AC
    mulli r31, r4, 0x22c
    lis r5, lbl_80790D74@ha
    lis r3, lbl_807588DC@ha
    addi r5, r5, lbl_80790D74@l
    add r26, r27, r31
    addi r3, r3, lbl_807588DC@l
    lwz r4, 0x8c(r26)
    addi r25, r5, 0x18
    addi r3, r3, 0x28a
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r25
    bl fn_801FEE08
    lwz r3, 0x8c(r26)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r3)
    b lbl_fn_804C2D5C_000004F4
lbl_fn_804C2D5C_000004AC:
    mulli r31, r4, 0x22c
    lis r5, lbl_80790D74@ha
    lis r3, lbl_807588DC@ha
    addi r5, r5, lbl_80790D74@l
    add r26, r27, r31
    addi r3, r3, lbl_807588DC@l
    lwz r4, 0x90(r26)
    addi r25, r5, 0x18
    addi r3, r3, 0x28a
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r25
    bl fn_801FEE08
    lwz r3, 0x90(r26)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r3)
lbl_fn_804C2D5C_000004F4:
    cmpwi r29, 0x0
    li r3, 0x5a
    ble lbl_fn_804C2D5C_00000504
    addi r3, r29, 0x1e
lbl_fn_804C2D5C_00000504:
    add r5, r27, r31
    li r0, 0x0
    stw r3, 0xa0(r5)
    mr r4, r28
    addi r3, r5, 0xac
    stw r0, 0xa4(r5)
    stw r30, 0xa8(r5)
    crclr 6
    bl fn_800DD3FC
    cmpwi r30, 0x0
    bne lbl_fn_804C2D5C_00000590
    add r3, r27, r31
    lwz r25, 0x8c(r3)
    cmpwi r25, 0x0
    beq lbl_fn_804C2D5C_00000560
    mr r3, r25
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r25)
    lwz r0, 0xfc(r25)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r25)
lbl_fn_804C2D5C_00000560:
    add r3, r27, r31
    lwz r25, 0x90(r3)
    cmpwi r25, 0x0
    beq lbl_fn_804C2D5C_000005EC
    mr r3, r25
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r25)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r25)
    b lbl_fn_804C2D5C_000005EC
lbl_fn_804C2D5C_00000590:
    add r3, r27, r31
    lwz r25, 0x90(r3)
    cmpwi r25, 0x0
    beq lbl_fn_804C2D5C_000005C0
    mr r3, r25
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r25)
    lwz r0, 0xfc(r25)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r25)
lbl_fn_804C2D5C_000005C0:
    add r3, r27, r31
    lwz r25, 0x8c(r3)
    cmpwi r25, 0x0
    beq lbl_fn_804C2D5C_000005EC
    mr r3, r25
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r25)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r25)
lbl_fn_804C2D5C_000005EC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804C2F98(void)
{
    nofralloc
    b fn_800D2338
}

asm void fn_804C2F9C(void)
{
    nofralloc
    lwz r4, 0xd88(r3)
    li r3, 0x0
    subi r4, r4, 0x7
    cmplwi r4, 0x3
    bgtlr
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0xb
    beqlr
    li r3, 0x1
    blr
}

asm void fn_804C2FC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    stw r0, 0x14(r1)
    addi r3, r3, 0x444
    bl fn_800DC6B4
    lwz r0, 0x14(r1)
    stw r3, lbl_8087F5C0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C2FF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F5D4
    cmpwi r0, 0x0
    bne lbl_fn_804C2FF8_000006B4
    lis r5, lbl_80758D4C@ha
    li r3, 0xb8
    addi r5, r5, lbl_80758D4C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804C2FF8_000006B0
    mr r4, r31
    bl fn_804C3060
lbl_fn_804C2FF8_000006B0:
    stw r3, lbl_8087F5D4
lbl_fn_804C2FF8_000006B4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F5D4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C3060(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_800D1D3C
    lfs f0, lbl_80887470
    lis r3, lbl_80790DB8@ha
    li r0, 0x0
    lis r4, lbl_80758D4C@ha
    addi r3, r3, lbl_80790DB8@l
    stw r3, 0x0(r31)
    addi r4, r4, lbl_80758D4C@l
    li r5, 0x0
    stw r0, 0x50(r31)
    mr r3, r31
    addi r4, r4, 0x1
    stw r0, 0x94(r31)
    stw r0, 0x98(r31)
    stw r0, 0xa0(r31)
    stw r0, 0xa4(r31)
    stw r0, 0xa8(r31)
    stw r0, 0xac(r31)
    stfs f0, 0xb0(r31)
    bl fn_801F3FF8
    lwz r0, 0x50(r31)
    stw r3, 0x48(r31)
    cmplwi r0, 0x10
    bge lbl_fn_804C3060_00000768
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x54
    beq lbl_fn_804C3060_0000075C
    stw r3, 0x0(r4)
lbl_fn_804C3060_0000075C:
    lwz r3, 0x50(r31)
    addi r0, r3, 0x1
    stw r0, 0x50(r31)
lbl_fn_804C3060_00000768:
    lis r4, lbl_80758D4C@ha
    mr r3, r31
    addi r4, r4, lbl_80758D4C@l
    li r5, 0x0
    addi r4, r4, 0x28
    bl fn_801F3FF8
    lwz r0, 0x50(r31)
    stw r3, 0x4c(r31)
    cmplwi r0, 0x10
    bge lbl_fn_804C3060_000007B4
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x54
    beq lbl_fn_804C3060_000007A8
    stw r3, 0x0(r4)
lbl_fn_804C3060_000007A8:
    lwz r3, 0x50(r31)
    addi r0, r3, 0x1
    stw r0, 0x50(r31)
lbl_fn_804C3060_000007B4:
    addi r30, r31, 0x54
    b lbl_fn_804C3060_000007D4
lbl_fn_804C3060_000007BC:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_804C3060_000007D0
    li r4, 0x1
    bl fn_800D246C
lbl_fn_804C3060_000007D0:
    addi r30, r30, 0x4
lbl_fn_804C3060_000007D4:
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x54
    cmplw r30, r0
    bne lbl_fn_804C3060_000007BC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C319C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_804C319C_00000870
    lis r5, lbl_80790DB8@ha
    li r4, 0x0
    addi r5, r5, lbl_80790DB8@l
    stw r5, 0x0(r3)
    stw r4, 0x48(r3)
    stw r4, 0x50(r3)
    lwz r0, lbl_8087F5D4
    cmpwi r0, 0x0
    beq lbl_fn_804C319C_00000854
    stw r4, lbl_8087F5D4
lbl_fn_804C319C_00000854:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804C319C_00000870
    mr r3, r30
    bl dtor_80084684
lbl_fn_804C319C_00000870:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C3220(void)
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
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804C3220_00000C38
    addi r29, r31, 0x54
    b lbl_fn_804C3220_000008D8
lbl_fn_804C3220_000008C0:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804C3220_000008D4
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804C3220_000008D4:
    addi r29, r29, 0x4
lbl_fn_804C3220_000008D8:
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x54
    cmplw r29, r0
    bne lbl_fn_804C3220_000008C0
    addi r4, r31, 0x54
    b lbl_fn_804C3220_00000914
lbl_fn_804C3220_000008F8:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804C3220_00000910
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804C3220_00000910:
    addi r4, r4, 0x4
lbl_fn_804C3220_00000914:
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x54
    cmplw r4, r0
    bne lbl_fn_804C3220_000008F8
    lfs f0, lbl_80887470
    addi r4, r31, 0x54
    b lbl_fn_804C3220_0000094C
lbl_fn_804C3220_00000938:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804C3220_00000948
    stfs f0, 0x100(r3)
lbl_fn_804C3220_00000948:
    addi r4, r4, 0x4
lbl_fn_804C3220_0000094C:
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x54
    cmplw r4, r0
    bne lbl_fn_804C3220_00000938
    lfs f0, lbl_80887474
    addi r4, r31, 0x54
    b lbl_fn_804C3220_00000984
lbl_fn_804C3220_00000970:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804C3220_00000980
    stfs f0, 0x104(r3)
lbl_fn_804C3220_00000980:
    addi r4, r4, 0x4
lbl_fn_804C3220_00000984:
    lwz r0, 0x50(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x54
    cmplw r4, r0
    bne lbl_fn_804C3220_00000970
    lwz r3, 0x4c(r31)
    lwz r0, 0xfc(r3)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r3)
    lwz r3, 0x94(r31)
    cmpwi r3, 0x4
    beq lbl_fn_804C3220_00000C30
    cmpwi r3, 0x2
    li r0, 0x4
    stw r3, 0x98(r31)
    stw r0, 0x94(r31)
    bne lbl_fn_804C3220_000009F8
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C3220_000009F8
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887478
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C3220_000009F8:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804C3220_00000A10
    cmpwi r0, 0x3
    beq lbl_fn_804C3220_00000C1C
    b lbl_fn_804C3220_00000C30
lbl_fn_804C3220_00000A10:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C3220_00000A50
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887474
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C3220_00000A50:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C3220_00000A90
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    mr r3, r29
    addi r5, r5, lbl_80790DF8@l
    bl fn_801FEE08
    b lbl_fn_804C3220_00000AC0
lbl_fn_804C3220_00000A90:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    addi r5, r5, lbl_80790DF8@l
    mr r3, r29
    addi r5, r5, 0x8
    bl fn_801FEE08
lbl_fn_804C3220_00000AC0:
    lwz r4, 0x48(r31)
    lis r29, lbl_80758D4C@ha
    addi r29, r29, lbl_80758D4C@l
    addi r3, r29, 0x55
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r30, lbl_80790DF8@ha
    mr r4, r3
    addi r30, r30, lbl_80790DF8@l
    mr r3, r28
    addi r5, r30, 0x10
    bl fn_801FEE08
    lwz r4, 0x48(r31)
    addi r3, r29, 0x63
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r30, 0x18
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0x9fc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3220_00000B24
    b lbl_fn_804C3220_00000B28
lbl_fn_804C3220_00000B24:
    la r28, lbl_808813D0
lbl_fn_804C3220_00000B28:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x71
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3220_00000B64
    b lbl_fn_804C3220_00000B68
lbl_fn_804C3220_00000B64:
    la r28, lbl_808813D0
lbl_fn_804C3220_00000B68:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x7f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3220_00000BA4
    b lbl_fn_804C3220_00000BA8
lbl_fn_804C3220_00000BA4:
    la r28, lbl_808813D0
lbl_fn_804C3220_00000BA8:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x8d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3220_00000BE4
    b lbl_fn_804C3220_00000BE8
lbl_fn_804C3220_00000BE4:
    la r28, lbl_808813D0
lbl_fn_804C3220_00000BE8:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x9b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lfs f0, lbl_80887470
    stfs f0, 0xb0(r31)
    b lbl_fn_804C3220_00000C30
lbl_fn_804C3220_00000C1C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_804C3220_00000C30:
    li r3, 0x1
    b lbl_fn_804C3220_00000C3C
lbl_fn_804C3220_00000C38:
    li r3, 0x0
lbl_fn_804C3220_00000C3C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C35F0(void)
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
    lwz r0, 0x94(r3)
    cmpw r0, r4
    beq lbl_fn_804C35F0_00000F04
    cmpwi r4, 0x0
    blt lbl_fn_804C35F0_00000F04
    cmpwi r0, 0x2
    stw r0, 0x98(r3)
    stw r4, 0x94(r3)
    bne lbl_fn_804C35F0_00000CCC
    lwz r29, 0x48(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C35F0_00000CCC
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887478
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C35F0_00000CCC:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804C35F0_00000CE4
    cmpwi r0, 0x3
    beq lbl_fn_804C35F0_00000EF0
    b lbl_fn_804C35F0_00000F04
lbl_fn_804C35F0_00000CE4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C35F0_00000D24
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887474
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C35F0_00000D24:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C35F0_00000D64
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    mr r3, r29
    addi r5, r5, lbl_80790DF8@l
    bl fn_801FEE08
    b lbl_fn_804C35F0_00000D94
lbl_fn_804C35F0_00000D64:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    addi r5, r5, lbl_80790DF8@l
    mr r3, r29
    addi r5, r5, 0x8
    bl fn_801FEE08
lbl_fn_804C35F0_00000D94:
    lwz r4, 0x48(r31)
    lis r29, lbl_80758D4C@ha
    addi r29, r29, lbl_80758D4C@l
    addi r3, r29, 0x55
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r30, lbl_80790DF8@ha
    mr r4, r3
    addi r30, r30, lbl_80790DF8@l
    mr r3, r28
    addi r5, r30, 0x10
    bl fn_801FEE08
    lwz r4, 0x48(r31)
    addi r3, r29, 0x63
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r30, 0x18
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0x9fc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C35F0_00000DF8
    b lbl_fn_804C35F0_00000DFC
lbl_fn_804C35F0_00000DF8:
    la r28, lbl_808813D0
lbl_fn_804C35F0_00000DFC:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x71
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C35F0_00000E38
    b lbl_fn_804C35F0_00000E3C
lbl_fn_804C35F0_00000E38:
    la r28, lbl_808813D0
lbl_fn_804C35F0_00000E3C:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x7f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C35F0_00000E78
    b lbl_fn_804C35F0_00000E7C
lbl_fn_804C35F0_00000E78:
    la r28, lbl_808813D0
lbl_fn_804C35F0_00000E7C:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x8d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C35F0_00000EB8
    b lbl_fn_804C35F0_00000EBC
lbl_fn_804C35F0_00000EB8:
    la r28, lbl_808813D0
lbl_fn_804C35F0_00000EBC:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x9b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lfs f0, lbl_80887470
    stfs f0, 0xb0(r31)
    b lbl_fn_804C35F0_00000F04
lbl_fn_804C35F0_00000EF0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_804C35F0_00000F04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C38B8(void)
{
    nofralloc
    blr
}

asm void fn_804C38BC(void)
{
    nofralloc
    blr
}

asm void fn_804C38C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r5, lbl_8087F9C0
    lwz r0, 0x30(r5)
    cmpwi r0, 0x0
    bne lbl_fn_804C38C0_00000FA4
    lwz r3, 0x48(r3)
    lis r6, lbl_80758D4C@ha
    lis r5, lbl_80790DF8@ha
    cmpwi r4, 0x0
    addi r5, r5, lbl_80790DF8@l
    addi r6, r6, lbl_80758D4C@l
    addi r28, r3, 0x58
    addi r3, r6, 0x46
    addi r29, r5, 0x20
    beq lbl_fn_804C38C0_00000F8C
    mr r29, r5
lbl_fn_804C38C0_00000F8C:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804C38C0_00000FE4
lbl_fn_804C38C0_00000FA4:
    lwz r3, 0x48(r3)
    lis r6, lbl_80758D4C@ha
    lis r5, lbl_80790DF8@ha
    cmpwi r4, 0x0
    addi r5, r5, lbl_80790DF8@l
    addi r6, r6, lbl_80758D4C@l
    addi r28, r3, 0x58
    addi r3, r6, 0x46
    addi r29, r5, 0x20
    beq lbl_fn_804C38C0_00000FD0
    addi r29, r5, 0x8
lbl_fn_804C38C0_00000FD0:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
lbl_fn_804C38C0_00000FE4:
    lwz r3, 0x48(r30)
    lis r5, lbl_80758D4C@ha
    lis r4, lbl_80790DF8@ha
    cmpwi r31, 0x0
    addi r4, r4, lbl_80790DF8@l
    addi r5, r5, lbl_80758D4C@l
    addi r28, r3, 0x58
    addi r3, r5, 0x55
    addi r29, r4, 0x20
    beq lbl_fn_804C38C0_00001010
    addi r29, r4, 0x10
lbl_fn_804C38C0_00001010:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r3, 0x48(r30)
    lis r5, lbl_80758D4C@ha
    lis r4, lbl_80790DF8@ha
    cmpwi r31, 0x0
    addi r4, r4, lbl_80790DF8@l
    addi r5, r5, lbl_80758D4C@l
    addi r28, r3, 0x58
    addi r3, r5, 0x63
    addi r29, r4, 0x20
    beq lbl_fn_804C38C0_00001050
    addi r29, r4, 0x18
lbl_fn_804C38C0_00001050:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    cmpwi r31, 0x0
    beq lbl_fn_804C38C0_00001088
    lwz r3, lbl_8087F86C
    lwz r28, 0x9fc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C38C0_00001080
    b lbl_fn_804C38C0_00001094
lbl_fn_804C38C0_00001080:
    la r28, lbl_808813D0
    b lbl_fn_804C38C0_00001094
lbl_fn_804C38C0_00001088:
    lis r3, lbl_80790DF8@ha
    addi r3, r3, lbl_80790DF8@l
    addi r28, r3, 0x20
lbl_fn_804C38C0_00001094:
    lwz r4, 0x48(r30)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x71
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    cmpwi r31, 0x0
    beq lbl_fn_804C38C0_000010E0
    lwz r3, lbl_8087F86C
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C38C0_000010D8
    b lbl_fn_804C38C0_000010EC
lbl_fn_804C38C0_000010D8:
    la r28, lbl_808813D0
    b lbl_fn_804C38C0_000010EC
lbl_fn_804C38C0_000010E0:
    lis r3, lbl_80790DF8@ha
    addi r3, r3, lbl_80790DF8@l
    addi r28, r3, 0x20
lbl_fn_804C38C0_000010EC:
    lwz r4, 0x48(r30)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x7f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    cmpwi r31, 0x0
    beq lbl_fn_804C38C0_00001138
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C38C0_00001130
    b lbl_fn_804C38C0_00001144
lbl_fn_804C38C0_00001130:
    la r28, lbl_808813D0
    b lbl_fn_804C38C0_00001144
lbl_fn_804C38C0_00001138:
    lis r3, lbl_80790DF8@ha
    addi r3, r3, lbl_80790DF8@l
    addi r28, r3, 0x20
lbl_fn_804C38C0_00001144:
    lwz r4, 0x48(r30)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x8d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    cmpwi r31, 0x0
    beq lbl_fn_804C38C0_00001190
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C38C0_00001188
    b lbl_fn_804C38C0_0000119C
lbl_fn_804C38C0_00001188:
    la r28, lbl_808813D0
    b lbl_fn_804C38C0_0000119C
lbl_fn_804C38C0_00001190:
    lis r3, lbl_80790DF8@ha
    addi r3, r3, lbl_80790DF8@l
    addi r28, r3, 0x20
lbl_fn_804C38C0_0000119C:
    lwz r4, 0x48(r30)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x9b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C3B78(void)
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
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C3B78_0000121C
    li r0, 0x0
    stw r0, 0xa0(r3)
    b lbl_fn_804C3B78_0000179C
lbl_fn_804C3B78_0000121C:
    lwz r4, 0x94(r3)
    cmpwi r4, 0x1
    beq lbl_fn_804C3B78_0000123C
    cmpwi cr1, r4, 0x2
    beq cr1, lbl_fn_804C3B78_000014F8
    cmpwi r4, 0x3
    beq lbl_fn_804C3B78_00001528
    b lbl_fn_804C3B78_0000179C
lbl_fn_804C3B78_0000123C:
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beq lbl_fn_804C3B78_00001260
    bl fn_804C2C14
    cmpwi r3, 0x0
    bne lbl_fn_804C3B78_00001260
    lwz r3, lbl_8087F5C4
    li r0, 0x1
    stw r0, 0xd98(r3)
lbl_fn_804C3B78_00001260:
    lwz r29, 0x48(r31)
    lfs f0, lbl_8088747C
    lfs f1, 0x100(r29)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804C3B78_0000179C
    lwz r3, 0x94(r31)
    cmpwi r3, 0x2
    beq lbl_fn_804C3B78_0000179C
    li r0, 0x2
    stw r3, 0x98(r31)
    stw r0, 0x94(r31)
    bne lbl_fn_804C3B78_000012BC
    cmpwi r29, 0x0
    beq lbl_fn_804C3B78_000012BC
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887478
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C3B78_000012BC:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804C3B78_000012D4
    cmpwi r0, 0x3
    beq lbl_fn_804C3B78_000014E0
    b lbl_fn_804C3B78_0000179C
lbl_fn_804C3B78_000012D4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C3B78_00001314
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887474
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C3B78_00001314:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C3B78_00001354
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    mr r3, r29
    addi r5, r5, lbl_80790DF8@l
    bl fn_801FEE08
    b lbl_fn_804C3B78_00001384
lbl_fn_804C3B78_00001354:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    addi r5, r5, lbl_80790DF8@l
    mr r3, r29
    addi r5, r5, 0x8
    bl fn_801FEE08
lbl_fn_804C3B78_00001384:
    lwz r4, 0x48(r31)
    lis r30, lbl_80758D4C@ha
    addi r30, r30, lbl_80758D4C@l
    addi r3, r30, 0x55
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r29, lbl_80790DF8@ha
    mr r4, r3
    addi r29, r29, lbl_80790DF8@l
    mr r3, r28
    addi r5, r29, 0x10
    bl fn_801FEE08
    lwz r4, 0x48(r31)
    addi r3, r30, 0x63
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r29, 0x18
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0x9fc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3B78_000013E8
    b lbl_fn_804C3B78_000013EC
lbl_fn_804C3B78_000013E8:
    la r28, lbl_808813D0
lbl_fn_804C3B78_000013EC:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x71
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3B78_00001428
    b lbl_fn_804C3B78_0000142C
lbl_fn_804C3B78_00001428:
    la r28, lbl_808813D0
lbl_fn_804C3B78_0000142C:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x7f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3B78_00001468
    b lbl_fn_804C3B78_0000146C
lbl_fn_804C3B78_00001468:
    la r28, lbl_808813D0
lbl_fn_804C3B78_0000146C:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x8d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3B78_000014A8
    b lbl_fn_804C3B78_000014AC
lbl_fn_804C3B78_000014A8:
    la r28, lbl_808813D0
lbl_fn_804C3B78_000014AC:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x9b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lfs f0, lbl_80887470
    stfs f0, 0xb0(r31)
    b lbl_fn_804C3B78_0000179C
lbl_fn_804C3B78_000014E0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    b lbl_fn_804C3B78_0000179C
lbl_fn_804C3B78_000014F8:
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beq lbl_fn_804C3B78_0000151C
    bl fn_804C2C14
    cmpwi r3, 0x0
    bne lbl_fn_804C3B78_0000151C
    lwz r3, lbl_8087F5C4
    li r0, 0x1
    stw r0, 0xd98(r3)
lbl_fn_804C3B78_0000151C:
    mr r3, r31
    bl fn_804C4530
    b lbl_fn_804C3B78_0000179C
lbl_fn_804C3B78_00001528:
    li r0, 0x4
    stw r4, 0x98(r3)
    stw r0, 0x94(r3)
    bne cr1, lbl_fn_804C3B78_00001564
    lwz r29, 0x48(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C3B78_00001564
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887478
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C3B78_00001564:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804C3B78_0000157C
    cmpwi r0, 0x3
    beq lbl_fn_804C3B78_00001788
    b lbl_fn_804C3B78_0000179C
lbl_fn_804C3B78_0000157C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C3B78_000015BC
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887474
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C3B78_000015BC:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C3B78_000015FC
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    mr r3, r28
    addi r5, r5, lbl_80790DF8@l
    bl fn_801FEE08
    b lbl_fn_804C3B78_0000162C
lbl_fn_804C3B78_000015FC:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    addi r5, r5, lbl_80790DF8@l
    mr r3, r28
    addi r5, r5, 0x8
    bl fn_801FEE08
lbl_fn_804C3B78_0000162C:
    lwz r4, 0x48(r31)
    lis r29, lbl_80758D4C@ha
    addi r29, r29, lbl_80758D4C@l
    addi r3, r29, 0x55
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r30, lbl_80790DF8@ha
    mr r4, r3
    addi r30, r30, lbl_80790DF8@l
    mr r3, r28
    addi r5, r30, 0x10
    bl fn_801FEE08
    lwz r4, 0x48(r31)
    addi r3, r29, 0x63
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r30, 0x18
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0x9fc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3B78_00001690
    b lbl_fn_804C3B78_00001694
lbl_fn_804C3B78_00001690:
    la r28, lbl_808813D0
lbl_fn_804C3B78_00001694:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x71
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3B78_000016D0
    b lbl_fn_804C3B78_000016D4
lbl_fn_804C3B78_000016D0:
    la r28, lbl_808813D0
lbl_fn_804C3B78_000016D4:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x7f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3B78_00001710
    b lbl_fn_804C3B78_00001714
lbl_fn_804C3B78_00001710:
    la r28, lbl_808813D0
lbl_fn_804C3B78_00001714:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x8d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C3B78_00001750
    b lbl_fn_804C3B78_00001754
lbl_fn_804C3B78_00001750:
    la r28, lbl_808813D0
lbl_fn_804C3B78_00001754:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x9b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lfs f0, lbl_80887470
    stfs f0, 0xb0(r31)
    b lbl_fn_804C3B78_0000179C
lbl_fn_804C3B78_00001788:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_804C3B78_0000179C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C4150(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    bne lbl_fn_804C4150_000017F4
    li r3, 0x0
    b lbl_fn_804C4150_00001B7C
lbl_fn_804C4150_000017F4:
    lwz r30, 0xac(r3)
    lwz r29, lbl_8087F5D8
    beq lbl_fn_804C4150_00001814
    mr r3, r0
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    b lbl_fn_804C4150_00001818
lbl_fn_804C4150_00001814:
    li r3, 0x0
lbl_fn_804C4150_00001818:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_804C4150_00001864
    lwz r0, lbl_8087F430
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_804C4150_00001864
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_00001854
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    b lbl_fn_804C4150_00001858
lbl_fn_804C4150_00001854:
    li r3, 0x0
lbl_fn_804C4150_00001858:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804C4150_00001864:
    cmpwi r0, 0x0
    beq lbl_fn_804C4150_0000189C
    lwz r3, 0xac(r28)
    subic. r3, r3, 0x1
    stw r3, 0xac(r28)
    bge lbl_fn_804C4150_00001884
    addi r0, r3, 0xa
    stw r0, 0xac(r28)
lbl_fn_804C4150_00001884:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    li r5, 0x1
    addi r3, r3, 0x48c
    bl fn_80124BFC
    b lbl_fn_804C4150_00001A8C
lbl_fn_804C4150_0000189C:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_000018B8
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    b lbl_fn_804C4150_000018BC
lbl_fn_804C4150_000018B8:
    li r3, 0x0
lbl_fn_804C4150_000018BC:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_804C4150_00001908
    lwz r0, lbl_8087F430
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_804C4150_00001908
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_000018F8
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    b lbl_fn_804C4150_000018FC
lbl_fn_804C4150_000018F8:
    li r3, 0x0
lbl_fn_804C4150_000018FC:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804C4150_00001908:
    cmpwi r0, 0x0
    beq lbl_fn_804C4150_00001944
    lwz r3, 0xac(r28)
    addi r3, r3, 0x1
    stw r3, 0xac(r28)
    cmpwi r3, 0xa
    blt lbl_fn_804C4150_0000192C
    subi r0, r3, 0xa
    stw r0, 0xac(r28)
lbl_fn_804C4150_0000192C:
    lwz r3, lbl_8087F0A8
    li r4, 0x1
    li r5, 0x1
    addi r3, r3, 0x48c
    bl fn_80124BFC
    b lbl_fn_804C4150_00001A8C
lbl_fn_804C4150_00001944:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_00001960
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    b lbl_fn_804C4150_00001964
lbl_fn_804C4150_00001960:
    li r3, 0x0
lbl_fn_804C4150_00001964:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_804C4150_000019B0
    lwz r0, lbl_8087F430
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_804C4150_000019B0
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_000019A0
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    b lbl_fn_804C4150_000019A4
lbl_fn_804C4150_000019A0:
    li r3, 0x0
lbl_fn_804C4150_000019A4:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804C4150_000019B0:
    cmpwi r0, 0x0
    beq lbl_fn_804C4150_000019E8
    lwz r3, lbl_8087F5D8
    subic. r3, r3, 0x1
    stw r3, lbl_8087F5D8
    bge lbl_fn_804C4150_000019D0
    addi r0, r3, 0x4
    stw r0, lbl_8087F5D8
lbl_fn_804C4150_000019D0:
    lwz r3, lbl_8087F0A8
    li r4, 0x2
    li r5, 0x1
    addi r3, r3, 0x48c
    bl fn_80124BFC
    b lbl_fn_804C4150_00001A8C
lbl_fn_804C4150_000019E8:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_00001A04
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    b lbl_fn_804C4150_00001A08
lbl_fn_804C4150_00001A04:
    li r3, 0x0
lbl_fn_804C4150_00001A08:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_804C4150_00001A54
    lwz r0, lbl_8087F430
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_804C4150_00001A54
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_00001A44
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    b lbl_fn_804C4150_00001A48
lbl_fn_804C4150_00001A44:
    li r3, 0x0
lbl_fn_804C4150_00001A48:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804C4150_00001A54:
    cmpwi r0, 0x0
    beq lbl_fn_804C4150_00001A8C
    lwz r3, lbl_8087F5D8
    addi r3, r3, 0x1
    stw r3, lbl_8087F5D8
    cmpwi r3, 0x4
    blt lbl_fn_804C4150_00001A78
    subi r0, r3, 0x4
    stw r0, lbl_8087F5D8
lbl_fn_804C4150_00001A78:
    lwz r3, lbl_8087F0A8
    li r4, 0x3
    li r5, 0x1
    addi r3, r3, 0x48c
    bl fn_80124BFC
lbl_fn_804C4150_00001A8C:
    lwz r0, 0xac(r28)
    cmpw r30, r0
    bne lbl_fn_804C4150_00001AA4
    lwz r0, lbl_8087F5D8
    cmpw r29, r0
    beq lbl_fn_804C4150_00001AC4
lbl_fn_804C4150_00001AA4:
    addi r3, r1, 0x10
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80887470
    stfs f0, 0xb0(r28)
lbl_fn_804C4150_00001AC4:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_00001AE0
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    b lbl_fn_804C4150_00001AE4
lbl_fn_804C4150_00001AE0:
    li r3, 0x0
lbl_fn_804C4150_00001AE4:
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_00001B20
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F0A8
    li r4, 0x4
    li r5, 0x1
    addi r3, r3, 0x48c
    bl fn_80124BFC
    li r31, 0x1
    b lbl_fn_804C4150_00001B78
lbl_fn_804C4150_00001B20:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_00001B3C
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    b lbl_fn_804C4150_00001B40
lbl_fn_804C4150_00001B3C:
    li r3, 0x0
lbl_fn_804C4150_00001B40:
    cmpwi r3, 0x0
    beq lbl_fn_804C4150_00001B78
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F0A8
    li r4, 0x5
    li r5, 0x1
    addi r3, r3, 0x48c
    bl fn_80124BFC
    li r31, 0x2
lbl_fn_804C4150_00001B78:
    mr r3, r31
lbl_fn_804C4150_00001B7C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
