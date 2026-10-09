#include "revolution/types.h"

/* External function declarations */
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSReport(const char* msg, ...);
extern void _restgpr_18(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_18(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80623D00(void);
extern void fn_80623DE0(void);
extern void fn_80623F10(void);
extern void fn_806240D0(void);
extern void fn_806241B0(void);
extern void fn_80628180(void);
extern void fn_80628230(void);
extern void fn_80628240(void);
extern void fn_80628270(void);
extern void fn_806282C0(void);
extern void fn_806282D0(void);
extern void fn_80628300(void);
extern void fn_806820D4(void);
extern void fn_80682428(void);

/* External data declarations */
extern u8 lbl_80764C00[];
extern u8 lbl_807B3068[];
extern u8 lbl_807B3098[];
extern u8 lbl_807B30E0[];
extern u8 lbl_807B30F8[];
extern u8 lbl_807B311C[];
extern u8 lbl_807B3168[];
extern u8 lbl_807B3180[];
extern u8 lbl_807B3218[];
extern u8 lbl_807B3234[];
extern u8 lbl_807B3254[];
extern u8 lbl_807B3298[];
extern u8 lbl_807BB380[];
extern u8 lbl_807F3760[];

/* Small data declarations */
extern u32 lbl_8087EA48;
extern u32 lbl_8087EA50;
extern u32 lbl_8087EA58;
extern u32 lbl_8087EA60;
extern u32 lbl_8087EA64;
extern u32 lbl_8087EA70;
extern u32 lbl_80880150;
extern u32 lbl_80888838;

/* Function declarations */
void SCGetLanguage(void);
void fn_806249F0(void);
void fn_80624A50(void);
void fn_80624AB0(void);
void fn_80624B10(void);
void fn_80624B50(void);
void fn_80624B60(void);
void fn_80624B70(void);
void fn_80624B80(void);
void fn_80624B90(void);
void fn_80624C00(void);
void fn_80624C60(void);
void fn_80624C70(void);
void fn_80624CD0(void);
void fn_80624D30(void);
void fn_80624D40(void);
void fn_80624D90(void);
void fn_80624F00(void);
void fn_80624F90(void);
void fn_80624FD0(void);
void fn_80625040(void);
void fn_806250D0(void);
void fn_80625110(void);
void fn_806254D0(void);
void fn_806255E0(void);
void fn_80625730(void);
void fn_80625890(void);
void fn_80625910(void);
void fn_80625BF0(void);
void fn_80625C90(void);
void fn_80625F40(void);
void fn_80625F90(void);
void fn_80626210(void);
void fn_806263E0(void);
void fn_80626400(void);
void fn_80626410(void);
void fn_80626420(void);
void fn_80626480(void);
void fn_80626500(void);
void fn_806265C0(void);
void fn_806265D0(void);
void fn_806267F0(void);
void fn_80626AA0(void);
void fn_80626AC0(void);
void fn_80626C60(void);
void fn_80626D50(void);
void fn_80626EC0(void);
void fn_80626F10(void);
void fn_806270D0(void);
void fn_80627180(void);
void fn_806272C0(void);
void fn_80627400(void);
void fn_806274A0(void);
void fn_80627570(void);
void fn_80627580(void);
void fn_806275A0(void);
void fn_806275B0(void);
void fn_80627900(void);
void fn_80627A70(void);
void fn_80627B30(void);
void fn_80627B50(void);
void fn_80627CA0(void);
void fn_80627D30(void);
void fn_80627D50(void);
void fn_80627DE0(void);
void fn_80627ED0(void);

asm void SCGetLanguage(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0xb
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623F10
    cmpwi r3, 0x0
    bne lbl_SCGetLanguage_00000044
    bl fn_80624F00
    extsb. r0, r3
    bne lbl_SCGetLanguage_00000038
    li r0, 0x0
    stb r0, 0x8(r1)
    b lbl_SCGetLanguage_00000058
lbl_SCGetLanguage_00000038:
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_SCGetLanguage_00000058
lbl_SCGetLanguage_00000044:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x9
    ble lbl_SCGetLanguage_00000058
    li r0, 0x1
    stb r0, 0x8(r1)
lbl_SCGetLanguage_00000058:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806249F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0xe
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623F10
    cmpwi r3, 0x0
    bne lbl_fn_806249F0_0000009C
    li r0, 0x0
    stb r0, 0x8(r1)
    b lbl_fn_806249F0_000000B0
lbl_fn_806249F0_0000009C:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x1
    beq lbl_fn_806249F0_000000B0
    li r0, 0x0
    stb r0, 0x8(r1)
lbl_fn_806249F0_000000B0:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624A50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0xf
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623F10
    cmpwi r3, 0x0
    bne lbl_fn_80624A50_000000FC
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_fn_80624A50_00000110
lbl_fn_80624A50_000000FC:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x1
    beq lbl_fn_80624A50_00000110
    li r0, 0x0
    stb r0, 0x8(r1)
lbl_fn_80624A50_00000110:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624AB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x11
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623F10
    cmpwi r3, 0x0
    bne lbl_fn_80624AB0_0000015C
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_fn_80624AB0_00000170
lbl_fn_80624AB0_0000015C:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x2
    ble lbl_fn_80624AB0_00000170
    li r0, 0x1
    stb r0, 0x8(r1)
lbl_fn_80624AB0_00000170:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624B10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_806240D0
    cmpwi r3, 0x0
    bne lbl_fn_80624B10_000001BC
    lis r3, 0xb4a
    subi r0, r3, 0x2800
    stw r0, 0x8(r1)
lbl_fn_80624B10_000001BC:
    lwz r0, 0x14(r1)
    lwz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624B50(void)
{
    nofralloc
    li r4, 0x461
    li r5, 0x1c
    b fn_80623D00
}

asm void fn_80624B60(void)
{
    nofralloc
    li r4, 0x461
    li r5, 0x1c
    b fn_80623DE0
}

asm void fn_80624B70(void)
{
    nofralloc
    li r4, 0x205
    li r5, 0x1d
    b fn_80623D00
}

asm void fn_80624B80(void)
{
    nofralloc
    li r4, 0x205
    li r5, 0x1d
    b fn_80623DE0
}

asm void fn_80624B90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1e
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_806240D0
    cmpwi r3, 0x0
    bne lbl_fn_80624B90_0000023C
    li r0, 0x2
    stw r0, 0x8(r1)
    b lbl_fn_80624B90_00000264
lbl_fn_80624B90_0000023C:
    lwz r0, 0x8(r1)
    cmplwi r0, 0x1
    bge lbl_fn_80624B90_00000254
    li r0, 0x1
    stw r0, 0x8(r1)
    b lbl_fn_80624B90_00000264
lbl_fn_80624B90_00000254:
    cmplwi r0, 0x5
    ble lbl_fn_80624B90_00000264
    li r0, 0x5
    stw r0, 0x8(r1)
lbl_fn_80624B90_00000264:
    lwz r0, 0x14(r1)
    lwz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624C00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x20
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623F10
    cmpwi r3, 0x0
    bne lbl_fn_80624C00_000002AC
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_fn_80624C00_000002C0
lbl_fn_80624C00_000002AC:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x1
    beq lbl_fn_80624C00_000002C0
    li r0, 0x0
    stb r0, 0x8(r1)
lbl_fn_80624C00_000002C0:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624C60(void)
{
    nofralloc
    li r4, 0x20
    b fn_806241B0
}

asm void fn_80624C70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x21
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623F10
    cmpwi r3, 0x0
    bne lbl_fn_80624C70_0000031C
    li r0, 0x0
    stb r0, 0x8(r1)
    b lbl_fn_80624C70_00000330
lbl_fn_80624C70_0000031C:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x1
    beq lbl_fn_80624C70_00000330
    li r0, 0x0
    stb r0, 0x8(r1)
lbl_fn_80624C70_00000330:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624CD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1f
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl fn_80623F10
    cmpwi r3, 0x0
    bne lbl_fn_80624CD0_0000037C
    li r0, 0x59
    stb r0, 0x8(r1)
    b lbl_fn_80624CD0_00000390
lbl_fn_80624CD0_0000037C:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x7f
    ble lbl_fn_80624CD0_00000390
    li r0, 0x7f
    stb r0, 0x8(r1)
lbl_fn_80624CD0_00000390:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624D30(void)
{
    nofralloc
    li r4, 0x1f
    b fn_806241B0
}

asm void fn_80624D40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807B3068@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807B3068@l
    crclr 6
    bl OSReport
    addi r3, r1, 0x8
    li r4, 0x14
    bl fn_806240D0
    cmpwi r3, 0x0
    bne lbl_fn_80624D40_000003F8
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80624D40_000003F8:
    lwz r0, 0x8(r1)
    extrwi r3, r0, 1, 30
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624D90(void)
{
    nofralloc
    lis r6, 0x73b6
    li r0, 0x80
    subi r11, r6, 0x2406
    li r9, 0x0
    li r12, 0x0
    li r6, 0x0
    li r10, 0x0
    mtctr r0
lbl_fn_80624D90_00000430:
    addis r8, r10, 0x8000
    lbz r8, 0x3800(r8)
    cmpwi r8, 0x0
    beq lbl_fn_80624D90_00000484
    lbzx r7, r3, r12
    xor r0, r8, r11
    clrlwi r8, r0, 24
    extsb. r0, r7
    bne lbl_fn_80624D90_00000464
    cmplwi r8, 0x3d
    bne lbl_fn_80624D90_00000464
    li r9, 0x1
    b lbl_fn_80624D90_000004FC
lbl_fn_80624D90_00000464:
    extsb r7, r7
    addi r0, r12, 0x1
    xor r7, r8, r7
    andi. r7, r7, 0xdf
    cntlzw r7, r7
    extrwi r7, r7, 1, 26
    neg r7, r7
    and r12, r0, r7
lbl_fn_80624D90_00000484:
    addi r10, r10, 0x1
    srwi r7, r11, 31
    addis r8, r10, 0x8000
    slwi r0, r11, 1
    lbz r8, 0x3800(r8)
    or r11, r7, r0
    cmpwi r8, 0x0
    beq lbl_fn_80624D90_000004E8
    lbzx r7, r3, r12
    xor r0, r8, r11
    clrlwi r8, r0, 24
    extsb. r0, r7
    bne lbl_fn_80624D90_000004C8
    cmplwi r8, 0x3d
    bne lbl_fn_80624D90_000004C8
    li r9, 0x1
    b lbl_fn_80624D90_000004FC
lbl_fn_80624D90_000004C8:
    extsb r7, r7
    addi r0, r12, 0x1
    xor r7, r8, r7
    andi. r7, r7, 0xdf
    cntlzw r7, r7
    extrwi r7, r7, 1, 26
    neg r7, r7
    and r12, r0, r7
lbl_fn_80624D90_000004E8:
    srwi r7, r11, 31
    slwi r0, r11, 1
    or r11, r7, r0
    addi r10, r10, 0x1
    bdnz lbl_fn_80624D90_00000430
lbl_fn_80624D90_000004FC:
    cmpwi r9, 0x0
    beq lbl_fn_80624D90_00000578
    addi r10, r10, 0x1
    b lbl_fn_80624D90_00000568
    nop
lbl_fn_80624D90_00000510:
    addis r3, r10, 0x8000
    srwi r7, r11, 31
    lbz r3, 0x3800(r3)
    slwi r0, r11, 1
    or r11, r7, r0
    cmpwi r3, 0x0
    beq lbl_fn_80624D90_00000548
    xor r0, r3, r11
    clrlwi r3, r0, 24
    cmplwi r3, 0xd
    beq lbl_fn_80624D90_00000544
    cmplwi r3, 0xa
    bne lbl_fn_80624D90_00000548
lbl_fn_80624D90_00000544:
    li r3, 0x0
lbl_fn_80624D90_00000548:
    cmpwi r3, 0x0
    stb r3, 0x0(r4)
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    bne lbl_fn_80624D90_00000564
    li r3, 0x1
    blr
lbl_fn_80624D90_00000564:
    addi r10, r10, 0x1
lbl_fn_80624D90_00000568:
    cmplwi r10, 0x100
    bge lbl_fn_80624D90_00000578
    cmplw r6, r5
    blt lbl_fn_80624D90_00000510
lbl_fn_80624D90_00000578:
    li r3, 0x0
    blr
}

asm void fn_80624F00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    la r3, lbl_8087EA48
    li r5, 0x4
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_807B3098@ha
    addi r30, r30, lbl_807B3098@l
    bl fn_80624D90
    cmpwi r3, 0x0
    beq lbl_fn_80624F00_000005E8
    b lbl_fn_80624F00_000005D8
lbl_fn_80624F00_000005B8:
    addi r3, r30, 0x1
    addi r4, r1, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80624F00_000005D4
    mr r3, r31
    b lbl_fn_80624F00_000005EC
lbl_fn_80624F00_000005D4:
    addi r30, r30, 0x5
lbl_fn_80624F00_000005D8:
    lbz r31, 0x0(r30)
    extsb r0, r31
    cmpwi r0, -0x1
    bne lbl_fn_80624F00_000005B8
lbl_fn_80624F00_000005E8:
    li r3, -0x1
lbl_fn_80624F00_000005EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80624F90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087EA50
    la r4, lbl_80880150
    stw r0, 0x14(r1)
    li r5, 0x6
    bl fn_80624D90
    cmpwi r3, 0x0
    li r3, 0x0
    beq lbl_fn_80624F90_0000063C
    la r3, lbl_80880150
lbl_fn_80624F90_0000063C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80624FD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0xb
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    la r3, lbl_8087EA58
    bl fn_80624D90
    cmpwi r3, 0x0
    beq lbl_fn_80624FD0_000006A0
    mr r5, r31
    addi r3, r1, 0x8
    la r4, lbl_8087EA60
    crclr 6
    bl fn_806820D4
    cmpwi r3, 0x1
    bne lbl_fn_80624FD0_000006A0
    li r3, 0x1
    b lbl_fn_80624FD0_000006A4
lbl_fn_80624FD0_000006A0:
    li r3, 0x0
lbl_fn_80624FD0_000006A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80625040(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    la r3, lbl_8087EA64
    li r5, 0x3
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_807B30E0@ha
    addi r30, r30, lbl_807B30E0@l
    bl fn_80624D90
    cmpwi r3, 0x0
    beq lbl_fn_80625040_00000728
    b lbl_fn_80625040_00000718
lbl_fn_80625040_000006F8:
    addi r3, r30, 0x1
    addi r4, r1, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80625040_00000714
    mr r3, r31
    b lbl_fn_80625040_0000072C
lbl_fn_80625040_00000714:
    addi r30, r30, 0x4
lbl_fn_80625040_00000718:
    lbz r31, 0x0(r30)
    extsb r0, r31
    cmpwi r0, -0x1
    bne lbl_fn_80625040_000006F8
lbl_fn_80625040_00000728:
    li r3, -0x1
lbl_fn_80625040_0000072C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806250D0(void)
{
    nofralloc
    li r6, 0x0
    li r5, 0x3
    li r0, 0x8
    stw r4, 0x0(r3)
    stw r6, 0x4(r3)
    stb r6, 0x11(r3)
    stb r6, 0x12(r3)
    stw r6, 0xc(r3)
    stb r5, 0x10(r3)
    stb r0, 0x13(r3)
    stb r6, 0x14(r3)
    stw r6, 0x8(r3)
    blr
}

asm void fn_80625110(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stw r31, 0xc(r1)
    lbz r0, 0x13(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80625110_000008DC
    cmplwi r0, 0x8
    bne lbl_fn_80625110_000007DC
    lbz r6, 0x0(r4)
    rlwinm r0, r6, 0, 24, 27
    cmpwi r0, 0x10
    beq lbl_fn_80625110_000007C4
    li r3, -0x1
    b lbl_fn_80625110_00000B44
lbl_fn_80625110_000007C4:
    clrlwi r0, r6, 28
    stb r0, 0x14(r3)
    cmplwi r0, 0x1
    ble lbl_fn_80625110_000007DC
    li r3, -0x1
    b lbl_fn_80625110_00000B44
lbl_fn_80625110_000007DC:
    lwz r11, 0x8(r3)
    mr r10, r5
    mr r9, r4
    li r12, 0x0
    li r6, 0x0
    b lbl_fn_80625110_00000890
    nop
lbl_fn_80625110_000007F8:
    lbz r7, 0x13(r3)
    subi r0, r7, 0x1
    stb r0, 0x13(r3)
    clrlwi r0, r0, 24
    cmplwi r0, 0x3
    bgt lbl_fn_80625110_00000830
    subfic r0, r0, 0x3
    lbz r7, 0x0(r9)
    slwi r0, r0, 3
    lwz r8, 0x4(r3)
    slw r0, r7, r0
    or r0, r8, r0
    stw r0, 0x4(r3)
    b lbl_fn_80625110_00000854
lbl_fn_80625110_00000830:
    cmplwi r0, 0x6
    bgt lbl_fn_80625110_00000854
    subfic r0, r0, 0x6
    lbz r7, 0x0(r9)
    slwi r0, r0, 3
    lwz r8, 0x4(r3)
    slw r0, r7, r0
    or r0, r8, r0
    stw r0, 0x4(r3)
lbl_fn_80625110_00000854:
    lbz r0, 0x13(r3)
    addi r9, r9, 0x1
    addi r12, r12, 0x1
    cmplwi r0, 0x4
    bne lbl_fn_80625110_00000878
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80625110_00000878
    stb r6, 0x13(r3)
lbl_fn_80625110_00000878:
    subic. r10, r10, 0x1
    bne lbl_fn_80625110_00000890
    lbz r0, 0x13(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80625110_00000890
    b lbl_fn_80625110_000008B4
lbl_fn_80625110_00000890:
    lbz r0, 0x13(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80625110_000007F8
    cmpwi r11, 0x0
    ble lbl_fn_80625110_000008B4
    lwz r0, 0x4(r3)
    cmpw r11, r0
    bge lbl_fn_80625110_000008B4
    stw r11, 0x4(r3)
lbl_fn_80625110_000008B4:
    subf. r5, r12, r5
    add r4, r4, r12
    bne lbl_fn_80625110_000008DC
    lbz r0, 0x13(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80625110_000008D4
    lwz r3, 0x4(r3)
    b lbl_fn_80625110_00000B44
lbl_fn_80625110_000008D4:
    li r3, -0x1
    b lbl_fn_80625110_00000B44
lbl_fn_80625110_000008DC:
    li r0, 0x0
    li r6, 0x1
    li r11, 0x3
    li r8, 0x8
    b lbl_fn_80625110_00000B18
    b lbl_fn_80625110_00000AE8
    nop
lbl_fn_80625110_000008F8:
    cmpwi r5, 0x0
    bne lbl_fn_80625110_00000908
    lwz r3, 0x4(r3)
    b lbl_fn_80625110_00000B44
lbl_fn_80625110_00000908:
    lbz r7, 0x11(r3)
    rlwinm. r7, r7, 0, 24, 24
    bne lbl_fn_80625110_00000A2C
    lwz r7, 0x0(r3)
    subi r5, r5, 0x1
    lbz r9, 0x0(r4)
    addi r4, r4, 0x1
    stb r9, 0x0(r7)
    addi r9, r7, 0x1
    lwz r7, 0x4(r3)
    stw r9, 0x0(r3)
    subi r7, r7, 0x1
    stw r7, 0x4(r3)
    b lbl_fn_80625110_00000AC4
    b lbl_fn_80625110_00000A2C
    nop
lbl_fn_80625110_00000948:
    lbz r7, 0x14(r3)
    lbz r9, 0x10(r3)
    cmpwi r7, 0x0
    subi r7, r9, 0x1
    stb r7, 0x10(r3)
    bne lbl_fn_80625110_00000978
    lbz r7, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x10(r3)
    addi r7, r7, 0x30
    stw r7, 0xc(r3)
    b lbl_fn_80625110_00000A1C
lbl_fn_80625110_00000978:
    clrlwi r7, r7, 24
    cmpwi r7, 0x2
    beq lbl_fn_80625110_00000998
    cmpwi r7, 0x1
    beq lbl_fn_80625110_000009EC
    cmpwi r7, 0x0
    beq lbl_fn_80625110_00000A08
    b lbl_fn_80625110_00000A1C
lbl_fn_80625110_00000998:
    lbz r7, 0x0(r4)
    addi r4, r4, 0x1
    stw r7, 0xc(r3)
    srawi r9, r7, 4
    cmpwi r9, 0x1
    bne lbl_fn_80625110_000009C0
    clrlslwi r7, r7, 28, 16
    addi r7, r7, 0x1110
    stw r7, 0xc(r3)
    b lbl_fn_80625110_00000A1C
lbl_fn_80625110_000009C0:
    cmpwi r9, 0x0
    bne lbl_fn_80625110_000009DC
    clrlslwi r7, r7, 28, 8
    stb r6, 0x10(r3)
    addi r7, r7, 0x110
    stw r7, 0xc(r3)
    b lbl_fn_80625110_00000A1C
lbl_fn_80625110_000009DC:
    addi r7, r7, 0x10
    stw r7, 0xc(r3)
    stb r0, 0x10(r3)
    b lbl_fn_80625110_00000A1C
lbl_fn_80625110_000009EC:
    lbz r7, 0x0(r4)
    addi r4, r4, 0x1
    lwz r9, 0xc(r3)
    slwi r7, r7, 8
    add r7, r9, r7
    stw r7, 0xc(r3)
    b lbl_fn_80625110_00000A1C
lbl_fn_80625110_00000A08:
    lbz r7, 0x0(r4)
    addi r4, r4, 0x1
    lwz r9, 0xc(r3)
    add r7, r9, r7
    stw r7, 0xc(r3)
lbl_fn_80625110_00000A1C:
    subic. r5, r5, 0x1
    bne lbl_fn_80625110_00000A2C
    lwz r3, 0x4(r3)
    b lbl_fn_80625110_00000B44
lbl_fn_80625110_00000A2C:
    lbz r7, 0x10(r3)
    cmpwi r7, 0x0
    bne lbl_fn_80625110_00000948
    lwz r10, 0xc(r3)
    subi r5, r5, 0x1
    lwz r12, 0x4(r3)
    srawi r9, r10, 4
    lbz r7, 0x0(r4)
    cmpw r9, r12
    rlwimi r7, r10, 8, 20, 23
    stw r9, 0xc(r3)
    addi r31, r7, 0x1
    addi r4, r4, 0x1
    stb r11, 0x10(r3)
    ble lbl_fn_80625110_00000AB8
    lwz r7, 0x8(r3)
    cmpwi r7, 0x0
    bne lbl_fn_80625110_00000A7C
    li r3, -0x4
    b lbl_fn_80625110_00000B44
lbl_fn_80625110_00000A7C:
    stw r12, 0xc(r3)
    b lbl_fn_80625110_00000AB8
lbl_fn_80625110_00000A84:
    lwz r9, 0x0(r3)
    subf r7, r31, r9
    lbz r7, 0x0(r7)
    stb r7, 0x0(r9)
    lwz r10, 0x0(r3)
    lwz r9, 0x4(r3)
    lwz r7, 0xc(r3)
    addi r10, r10, 0x1
    subi r9, r9, 0x1
    stw r10, 0x0(r3)
    subi r7, r7, 0x1
    stw r9, 0x4(r3)
    stw r7, 0xc(r3)
lbl_fn_80625110_00000AB8:
    lwz r7, 0xc(r3)
    cmpwi r7, 0x0
    bgt lbl_fn_80625110_00000A84
lbl_fn_80625110_00000AC4:
    lwz r7, 0x4(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80625110_00000B24
    lbz r9, 0x11(r3)
    lbz r7, 0x12(r3)
    clrlslwi r9, r9, 25, 1
    stb r9, 0x11(r3)
    subi r7, r7, 0x1
    stb r7, 0x12(r3)
lbl_fn_80625110_00000AE8:
    lbz r7, 0x12(r3)
    cmpwi r7, 0x0
    bne lbl_fn_80625110_000008F8
    cmpwi r5, 0x0
    bne lbl_fn_80625110_00000B04
    lwz r3, 0x4(r3)
    b lbl_fn_80625110_00000B44
lbl_fn_80625110_00000B04:
    lbz r7, 0x0(r4)
    subi r5, r5, 0x1
    stb r7, 0x11(r3)
    addi r4, r4, 0x1
    stb r8, 0x12(r3)
lbl_fn_80625110_00000B18:
    lwz r7, 0x4(r3)
    cmpwi r7, 0x0
    bgt lbl_fn_80625110_00000AE8
lbl_fn_80625110_00000B24:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80625110_00000B40
    cmplwi r5, 0x20
    ble lbl_fn_80625110_00000B40
    li r3, -0x3
    b lbl_fn_80625110_00000B44
lbl_fn_80625110_00000B40:
    li r3, 0x0
lbl_fn_80625110_00000B44:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_806254D0(void)
{
    nofralloc
    lbz r0, 0x0(r3)
    rlwinm r0, r0, 0, 24, 27
    cmpwi r0, 0x30
    beq lbl_fn_806254D0_00000B7C
    cmpwi r0, 0x10
    beq lbl_fn_806254D0_00000B80
    cmpwi r0, 0x20
    beq lbl_fn_806254D0_00000B84
    cmpwi r0, 0x80
    beq lbl_fn_806254D0_00000B88
    blr
lbl_fn_806254D0_00000B7C:
    b lbl_fn_806254D0_00000B90
lbl_fn_806254D0_00000B80:
    b fn_806255E0
lbl_fn_806254D0_00000B84:
    b fn_80625730
lbl_fn_806254D0_00000B88:
    b fn_80625890
    blr
lbl_fn_806254D0_00000B90:
    lwz r5, 0x0(r3)
    addi r6, r3, 0x4
    rlwinm r3, r5, 8, 8, 15
    rlwinm r0, r5, 24, 16, 23
    rlwimi r3, r5, 24, 0, 7
    rlwimi r0, r5, 8, 24, 31
    or r0, r3, r0
    srwi. r5, r0, 8
    bne lbl_fn_806254D0_00000C48
    lwz r5, 0x0(r6)
    addi r6, r6, 0x4
    rlwinm r3, r5, 8, 8, 15
    rlwinm r0, r5, 24, 16, 23
    rlwimi r3, r5, 24, 0, 7
    rlwimi r0, r5, 8, 24, 31
    or r5, r3, r0
    b lbl_fn_806254D0_00000C48
    nop
lbl_fn_806254D0_00000BD8:
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    rlwinm. r0, r3, 0, 24, 24
    clrlwi r3, r3, 25
    bne lbl_fn_806254D0_00000C1C
    addi r3, r3, 0x1
    cmplw r3, r5
    ble lbl_fn_806254D0_00000BFC
    mr r3, r5
lbl_fn_806254D0_00000BFC:
    subf r5, r3, r5
lbl_fn_806254D0_00000C00:
    lbz r0, 0x0(r6)
    subic. r3, r3, 0x1
    stb r0, 0x0(r4)
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    bne lbl_fn_806254D0_00000C00
    b lbl_fn_806254D0_00000C48
lbl_fn_806254D0_00000C1C:
    addi r3, r3, 0x3
    cmplw r3, r5
    ble lbl_fn_806254D0_00000C2C
    mr r3, r5
lbl_fn_806254D0_00000C2C:
    lbz r0, 0x0(r6)
    subf r5, r3, r5
    addi r6, r6, 0x1
lbl_fn_806254D0_00000C38:
    subic. r3, r3, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bne lbl_fn_806254D0_00000C38
lbl_fn_806254D0_00000C48:
    cmpwi r5, 0x0
    bne lbl_fn_806254D0_00000BD8
    blr
}

asm void fn_806255E0(void)
{
    nofralloc
    lwz r7, 0x0(r3)
    addi r8, r3, 0x4
    lbz r0, 0x0(r3)
    rlwinm r6, r7, 8, 8, 15
    rlwinm r5, r7, 24, 16, 23
    clrlwi r3, r0, 28
    neg r0, r3
    rlwimi r6, r7, 24, 0, 7
    rlwimi r5, r7, 8, 24, 31
    or r5, r6, r5
    or r0, r0, r3
    srwi. r9, r5, 8
    srwi r7, r0, 31
    bne lbl_fn_806255E0_00000CB4
    lwz r5, 0x0(r8)
    addi r8, r8, 0x4
    rlwinm r3, r5, 8, 8, 15
    rlwinm r0, r5, 24, 16, 23
    rlwimi r3, r5, 24, 0, 7
    rlwimi r0, r5, 8, 24, 31
    or r9, r3, r0
lbl_fn_806255E0_00000CB4:
    li r0, 0x8
    b lbl_fn_806255E0_00000DA0
    nop
lbl_fn_806255E0_00000CC0:
    lbz r10, 0x0(r8)
    mtctr r0
    addi r8, r8, 0x1
    nop
lbl_fn_806255E0_00000CD0:
    rlwinm. r3, r10, 0, 24, 24
    bne lbl_fn_806255E0_00000CF0
    lbz r3, 0x0(r8)
    addi r8, r8, 0x1
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    subi r9, r9, 0x1
    b lbl_fn_806255E0_00000D90
lbl_fn_806255E0_00000CF0:
    lbz r6, 0x0(r8)
    cmpwi r7, 0x0
    srawi r11, r6, 4
    bne lbl_fn_806255E0_00000D08
    addi r11, r11, 0x3
    b lbl_fn_806255E0_00000D50
lbl_fn_806255E0_00000D08:
    cmpwi r11, 0x1
    bne lbl_fn_806255E0_00000D30
    lbz r5, 0x1(r8)
    lbzu r3, 0x2(r8)
    slwi r11, r5, 4
    rlwimi r11, r6, 12, 16, 19
    srawi r3, r3, 4
    or r11, r11, r3
    addi r11, r11, 0x111
    b lbl_fn_806255E0_00000D50
lbl_fn_806255E0_00000D30:
    cmpwi r11, 0x0
    bne lbl_fn_806255E0_00000D4C
    lbzu r3, 0x1(r8)
    srawi r11, r3, 4
    rlwimi r11, r6, 4, 24, 27
    addi r11, r11, 0x11
    b lbl_fn_806255E0_00000D50
lbl_fn_806255E0_00000D4C:
    addi r11, r11, 0x1
lbl_fn_806255E0_00000D50:
    lbz r5, 0x0(r8)
    cmplw r11, r9
    lbz r3, 0x1(r8)
    addi r8, r8, 0x2
    rlwimi r3, r5, 8, 20, 23
    addi r5, r3, 0x1
    ble lbl_fn_806255E0_00000D70
    mr r11, r9
lbl_fn_806255E0_00000D70:
    subf r9, r11, r9
    nop
lbl_fn_806255E0_00000D78:
    subf r3, r5, r4
    subic. r11, r11, 0x1
    lbz r3, 0x0(r3)
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    bgt lbl_fn_806255E0_00000D78
lbl_fn_806255E0_00000D90:
    cmpwi r9, 0x0
    beq lbl_fn_806255E0_00000DA0
    slwi r10, r10, 1
    bdnz lbl_fn_806255E0_00000CD0
lbl_fn_806255E0_00000DA0:
    cmpwi r9, 0x0
    bne lbl_fn_806255E0_00000CC0
    blr
}

asm void fn_80625730(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0x0(r3)
    rlwinm r5, r6, 8, 8, 15
    rlwinm r0, r6, 24, 16, 23
    rlwimi r5, r6, 24, 0, 7
    rlwimi r0, r6, 8, 24, 31
    or r0, r5, r0
    srwi. r5, r0, 8
    beq lbl_fn_80625730_00000DEC
    addi r11, r3, 0x4
    b lbl_fn_80625730_00000DF0
lbl_fn_80625730_00000DEC:
    addi r11, r3, 0x8
lbl_fn_80625730_00000DF0:
    lbz r6, 0x0(r3)
    cmpwi r5, 0x0
    addi r0, r11, 0x1
    li r7, 0x0
    clrlwi r8, r6, 29
    clrlwi r6, r6, 28
    addi r9, r8, 0x4
    li r8, 0x0
    bne lbl_fn_80625730_00000E2C
    lwz r10, 0x4(r3)
    rlwinm r5, r10, 8, 8, 15
    rlwinm r3, r10, 24, 16, 23
    rlwimi r5, r10, 24, 0, 7
    rlwimi r3, r10, 8, 24, 31
    or r5, r5, r3
lbl_fn_80625730_00000E2C:
    lbz r3, 0x0(r11)
    mr r30, r0
    subfic r12, r6, 0x20
    addi r3, r3, 0x1
    slwi r3, r3, 1
    add r31, r11, r3
    b lbl_fn_80625730_00000EF0
lbl_fn_80625730_00000E48:
    lwz r11, 0x0(r31)
    li r29, 0x20
    addi r31, r31, 0x4
    rlwinm r10, r11, 8, 8, 15
    rlwinm r3, r11, 24, 16, 23
    rlwimi r10, r11, 24, 0, 7
    rlwimi r3, r11, 8, 24, 31
    or r28, r10, r3
    b lbl_fn_80625730_00000EE8
lbl_fn_80625730_00000E6C:
    lbz r3, 0x0(r30)
    srwi r27, r28, 31
    clrrwi r11, r30, 1
    slw r30, r3, r27
    clrlwi r10, r3, 26
    rlwinm. r3, r30, 0, 24, 24
    addi r10, r10, 0x1
    add r3, r27, r11
    slwi r10, r10, 1
    add r30, r10, r3
    beq lbl_fn_80625730_00000EDC
    lbz r3, 0x0(r30)
    addi r8, r8, 0x1
    cmplw r8, r9
    srw r7, r7, r6
    slw r3, r3, r12
    mr r30, r0
    or r7, r7, r3
    bne lbl_fn_80625730_00000EDC
    rlwinm r10, r7, 8, 8, 15
    rlwinm r3, r7, 24, 16, 23
    rlwimi r10, r7, 24, 0, 7
    li r8, 0x0
    rlwimi r3, r7, 8, 24, 31
    subi r5, r5, 0x4
    or r3, r10, r3
    stw r3, 0x0(r4)
    addi r4, r4, 0x4
lbl_fn_80625730_00000EDC:
    cmpwi r5, 0x0
    ble lbl_fn_80625730_00000EF0
    slwi r28, r28, 1
lbl_fn_80625730_00000EE8:
    subic. r29, r29, 0x1
    bge lbl_fn_80625730_00000E6C
lbl_fn_80625730_00000EF0:
    cmpwi r5, 0x0
    bgt lbl_fn_80625730_00000E48
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80625890(void)
{
    nofralloc
    lbz r0, 0x0(r3)
    addi r6, r3, 0x4
    lwz r5, 0x0(r3)
    li r8, 0x0
    clrlwi r7, r0, 28
    rlwinm r3, r5, 8, 8, 15
    rlwinm r0, r5, 24, 16, 23
    cmplwi r7, 0x1
    rlwimi r3, r5, 24, 0, 7
    rlwimi r0, r5, 8, 24, 31
    or r0, r3, r0
    srwi r5, r0, 8
    beq lbl_fn_80625890_00000F68
    nop
lbl_fn_80625890_00000F48:
    lbz r0, 0x0(r6)
    subic. r5, r5, 0x1
    addi r6, r6, 0x1
    add r8, r8, r0
    stb r8, 0x0(r4)
    addi r4, r4, 0x1
    bgt lbl_fn_80625890_00000F48
    blr
lbl_fn_80625890_00000F68:
    lhz r3, 0x0(r6)
    subic. r5, r5, 0x2
    addi r6, r6, 0x2
    extrwi r0, r3, 8, 16
    rlwimi r0, r3, 8, 16, 23
    add r8, r8, r0
    sthbrx r8, r0, r4
    addi r4, r4, 0x2
    bgt lbl_fn_80625890_00000F68
    blr
}

asm void fn_80625910(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_18
    lis r10, lbl_80764C00@ha
    lwzu r9, lbl_80764C00@l(r10)
    addi r11, r6, 0x1
    mr r25, r4
    srwi r4, r11, 31
    lwz r8, 0x4(r10)
    mr r31, r7
    lwz r0, 0x8(r10)
    add r4, r4, r11
    lwz r18, 0xc(r10)
    lwz r27, 0x10(r10)
    mr r30, r6
    lwz r26, 0x14(r10)
    mr r28, r3
    lwz r24, 0x18(r10)
    mr r29, r5
    lwz r23, 0x1c(r10)
    srawi r5, r4, 1
    lwz r22, 0x20(r10)
    mr r3, r31
    lwz r21, 0x24(r10)
    li r4, 0x0
    lwz r20, 0x28(r10)
    lwz r19, 0x2c(r10)
    lwz r12, 0x30(r10)
    lwz r11, 0x34(r10)
    lwz r7, 0x38(r10)
    lwz r6, 0x3c(r10)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r0, 0x10(r1)
    stw r18, 0x14(r1)
    stw r27, 0x18(r1)
    stw r26, 0x1c(r1)
    stw r24, 0x20(r1)
    stw r23, 0x24(r1)
    stw r22, 0x28(r1)
    stw r21, 0x2c(r1)
    stw r20, 0x30(r1)
    stw r19, 0x34(r1)
    stw r12, 0x38(r1)
    stw r11, 0x3c(r1)
    stw r7, 0x40(r1)
    stw r6, 0x44(r1)
    bl memset
    clrlwi. r0, r25, 31
    bne lbl_fn_80625910_0000107C
    li r11, 0x0
    li r12, 0x7f
    li r5, 0x0
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_80625910_00001094
lbl_fn_80625910_0000107C:
    lwz r11, 0x0(r28)
    lwz r12, 0x4(r28)
    lwz r5, 0x8(r28)
    lwz r27, 0xc(r28)
    lwz r26, 0x10(r28)
    lwz r25, 0x14(r28)
lbl_fn_80625910_00001094:
    lis r3, 0x1
    addi r24, r1, 0x8
    lfd f2, lbl_80888838
    subi r4, r3, 0x1
    li r6, 0x0
    lis r0, 0xffff
    lis r23, 0x4330
    mtctr r30
    cmpwi r30, 0x0
    ble lbl_fn_80625910_00001234
lbl_fn_80625910_000010BC:
    lha r5, 0x0(r29)
    li r10, 0x0
    li r9, 0x0
    li r8, 0x0
    cmpw r5, r11
    li r7, 0x0
    addi r29, r29, 0x2
    bge lbl_fn_80625910_000010E0
    li r7, 0x1
lbl_fn_80625910_000010E0:
    subf r19, r11, r5
    srawi r5, r19, 31
    xor r27, r5, r19
    subf r27, r5, r27
    cmpw r27, r12
    blt lbl_fn_80625910_00001100
    li r8, 0x1
    subf r27, r12, r27
lbl_fn_80625910_00001100:
    srwi r5, r12, 31
    add r5, r5, r12
    srawi r26, r5, 1
    cmpw r27, r26
    blt lbl_fn_80625910_0000111C
    li r9, 0x1
    subf r27, r26, r27
lbl_fn_80625910_0000111C:
    srwi r5, r26, 31
    add r5, r5, r26
    srawi r25, r5, 1
    cmpw r27, r25
    blt lbl_fn_80625910_00001138
    li r10, 0x1
    subf r27, r25, r27
lbl_fn_80625910_00001138:
    mullw r20, r25, r10
    slwi r5, r7, 1
    srwi r19, r25, 31
    subfic r5, r5, 0x1
    add r19, r19, r25
    mullw r21, r12, r8
    srawi r19, r19, 1
    mullw r22, r26, r9
    add r21, r20, r21
    add r22, r19, r22
    add r22, r21, r22
    mullw r5, r5, r22
    cmpw r5, r4
    ble lbl_fn_80625910_00001174
    subi r5, r3, 0x1
lbl_fn_80625910_00001174:
    cmpw r5, r0
    bge lbl_fn_80625910_00001180
    lis r5, 0xffff
lbl_fn_80625910_00001180:
    add r11, r11, r5
    cmpwi r11, 0x7fff
    ble lbl_fn_80625910_00001190
    li r11, 0x7fff
lbl_fn_80625910_00001190:
    cmpwi r11, -0x8000
    bge lbl_fn_80625910_0000119C
    li r11, -0x8000
lbl_fn_80625910_0000119C:
    xoris r12, r12, 0x8000
    slwi r18, r8, 2
    stw r12, 0x4c(r1)
    clrlwi r22, r6, 31
    slwi r9, r9, 1
    add r8, r10, r18
    stw r23, 0x48(r1)
    add r8, r9, r8
    slwi r8, r8, 3
    srwi r12, r6, 31
    lfd f1, 0x48(r1)
    add r9, r9, r18
    lfdx f0, r24, r8
    add r8, r12, r6
    fsub f1, f1, f2
    srawi r12, r8, 1
    slwi r8, r7, 3
    add r7, r10, r9
    add r7, r8, r7
    subi r22, r22, 0x1
    fmul f0, f1, f0
    rlwinm r9, r22, 0, 29, 29
    clrlwi r7, r7, 24
    lbzx r8, r31, r12
    slw r7, r7, r9
    or r7, r8, r7
    fctiwz f0, f0
    stbx r7, r31, r12
    stfd f0, 0x50(r1)
    lwz r12, 0x54(r1)
    cmpwi r12, 0x7f
    bgt lbl_fn_80625910_00001220
    li r12, 0x7f
lbl_fn_80625910_00001220:
    cmpwi r12, 0x6000
    blt lbl_fn_80625910_0000122C
    li r12, 0x6000
lbl_fn_80625910_0000122C:
    addi r6, r6, 0x1
    bdnz lbl_fn_80625910_000010BC
lbl_fn_80625910_00001234:
    stw r11, 0x0(r28)
    addi r11, r1, 0x90
    mr r3, r30
    stw r12, 0x4(r28)
    stw r5, 0x8(r28)
    stw r27, 0xc(r28)
    stw r26, 0x10(r28)
    stw r25, 0x14(r28)
    bl _restgpr_18
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80625BF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x0(r3)
    subis r0, r5, 0x55aa
    cmplwi r0, 0x382d
    beq lbl_fn_80625BF0_000012B4
    lis r5, lbl_807B30F8@ha
    la r3, lbl_8087EA70
    addi r5, r5, lbl_807B30F8@l
    li r4, 0x4a
    crclr 6
    bl OSPanic
lbl_fn_80625BF0_000012B4:
    stw r30, 0x0(r31)
    li r0, 0x0
    li r3, 0x1
    lwz r4, 0x4(r30)
    add r5, r30, r4
    stw r5, 0x4(r31)
    lwz r4, 0xc(r30)
    add r4, r30, r4
    stw r4, 0x8(r31)
    lwz r4, 0x8(r5)
    stw r4, 0xc(r31)
    mulli r4, r4, 0xc
    add r4, r5, r4
    stw r4, 0x10(r31)
    lwz r4, 0x8(r30)
    stw r4, 0x14(r31)
    stw r0, 0x18(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80625C90(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_26
    lwz r28, 0x4(r3)
    mr r26, r3
    mr r27, r4
    mr r29, r5
    bl fn_80625F90
    cmpwi r3, 0x0
    bge lbl_fn_80625C90_00001570
    lwz r29, 0x18(r26)
    lwz r28, 0x4(r26)
    cmpwi r29, 0x0
    bne lbl_fn_80625C90_00001358
    li r4, 0x0
    b lbl_fn_80625C90_000014F8
lbl_fn_80625C90_00001358:
    mulli r0, r29, 0xc
    lwz r7, 0x10(r26)
    add r3, r28, r0
    lwzx r0, r28, r0
    lwz r3, 0x4(r3)
    clrlwi r0, r0, 8
    cmpwi r3, 0x0
    add r30, r7, r0
    bne lbl_fn_80625C90_00001384
    li r4, 0x0
    b lbl_fn_80625C90_00001498
lbl_fn_80625C90_00001384:
    mulli r0, r3, 0xc
    add r3, r28, r0
    lwzx r0, r28, r0
    lwz r3, 0x4(r3)
    clrlwi r0, r0, 8
    cmpwi r3, 0x0
    add r31, r7, r0
    bne lbl_fn_80625C90_000013AC
    li r4, 0x0
    b lbl_fn_80625C90_00001438
lbl_fn_80625C90_000013AC:
    mulli r4, r3, 0xc
    mr r3, r26
    addi r5, r1, 0x8
    li r6, 0x80
    lwzx r0, r28, r4
    add r4, r28, r4
    lwz r4, 0x4(r4)
    clrlwi r0, r0, 8
    add r26, r7, r0
    bl fn_80626210
    cmplwi r3, 0x80
    mr r4, r3
    bne lbl_fn_80625C90_000013E4
    b lbl_fn_80625C90_00001438
lbl_fn_80625C90_000013E4:
    addi r4, r3, 0x1
    addi r5, r1, 0x8
    li r0, 0x2f
    stbx r0, r5, r3
    subfic r6, r4, 0x80
    add r5, r5, r4
    mr r3, r6
    b lbl_fn_80625C90_0000141C
    nop
lbl_fn_80625C90_00001408:
    lbz r0, 0x0(r26)
    addi r26, r26, 0x1
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    subi r3, r3, 0x1
lbl_fn_80625C90_0000141C:
    cmpwi r3, 0x0
    beq lbl_fn_80625C90_00001430
    lbz r0, 0x0(r26)
    extsb. r0, r0
    bne lbl_fn_80625C90_00001408
lbl_fn_80625C90_00001430:
    subf r0, r3, r6
    add r4, r4, r0
lbl_fn_80625C90_00001438:
    cmplwi r4, 0x80
    bne lbl_fn_80625C90_00001444
    b lbl_fn_80625C90_00001498
lbl_fn_80625C90_00001444:
    addi r5, r4, 0x1
    addi r3, r1, 0x8
    li r0, 0x2f
    stbx r0, r3, r4
    subfic r6, r5, 0x80
    add r3, r3, r5
    mr r4, r6
    b lbl_fn_80625C90_0000147C
    nop
lbl_fn_80625C90_00001468:
    lbz r0, 0x0(r31)
    addi r31, r31, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    subi r4, r4, 0x1
lbl_fn_80625C90_0000147C:
    cmpwi r4, 0x0
    beq lbl_fn_80625C90_00001490
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_fn_80625C90_00001468
lbl_fn_80625C90_00001490:
    subf r0, r4, r6
    add r4, r5, r0
lbl_fn_80625C90_00001498:
    cmplwi r4, 0x80
    bne lbl_fn_80625C90_000014A4
    b lbl_fn_80625C90_000014F8
lbl_fn_80625C90_000014A4:
    addi r5, r4, 0x1
    addi r3, r1, 0x8
    li r0, 0x2f
    stbx r0, r3, r4
    subfic r6, r5, 0x80
    add r3, r3, r5
    mr r4, r6
    b lbl_fn_80625C90_000014DC
    nop
lbl_fn_80625C90_000014C8:
    lbz r0, 0x0(r30)
    addi r30, r30, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    subi r4, r4, 0x1
lbl_fn_80625C90_000014DC:
    cmpwi r4, 0x0
    beq lbl_fn_80625C90_000014F0
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_80625C90_000014C8
lbl_fn_80625C90_000014F0:
    subf r0, r4, r6
    add r4, r5, r0
lbl_fn_80625C90_000014F8:
    cmplwi r4, 0x80
    bne lbl_fn_80625C90_0000150C
    li r0, 0x0
    stb r0, 0x87(r1)
    b lbl_fn_80625C90_00001550
lbl_fn_80625C90_0000150C:
    mulli r0, r29, 0xc
    lwzx r0, r28, r0
    clrrwi. r0, r0, 24
    beq lbl_fn_80625C90_00001544
    cmplwi r4, 0x7f
    bne lbl_fn_80625C90_00001534
    addi r3, r1, 0x8
    li r0, 0x0
    stbx r0, r3, r4
    b lbl_fn_80625C90_00001550
lbl_fn_80625C90_00001534:
    addi r3, r1, 0x8
    li r0, 0x2f
    stbx r0, r3, r4
    addi r4, r4, 0x1
lbl_fn_80625C90_00001544:
    addi r3, r1, 0x8
    li r0, 0x0
    stbx r0, r3, r4
lbl_fn_80625C90_00001550:
    lis r3, lbl_807B311C@ha
    mr r4, r27
    addi r3, r3, lbl_807B311C@l
    addi r5, r1, 0x8
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80625C90_000015A4
lbl_fn_80625C90_00001570:
    mulli r3, r3, 0xc
    lwzx r0, r28, r3
    clrrwi. r0, r0, 24
    beq lbl_fn_80625C90_00001588
    li r3, 0x0
    b lbl_fn_80625C90_000015A4
lbl_fn_80625C90_00001588:
    stw r26, 0x0(r29)
    add r4, r28, r3
    li r3, 0x1
    lwz r0, 0x4(r4)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r29)
lbl_fn_80625C90_000015A4:
    addi r11, r1, 0xa0
    bl _restgpr_26
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80625F40(void)
{
    nofralloc
    cmpwi r4, 0x0
    lwz r6, 0x4(r3)
    blt lbl_fn_80625F40_000015E8
    lwz r0, 0xc(r3)
    cmplw r4, r0
    bge lbl_fn_80625F40_000015E8
    mulli r4, r4, 0xc
    lwzx r0, r6, r4
    clrrwi. r0, r0, 24
    beq lbl_fn_80625F40_000015F0
lbl_fn_80625F40_000015E8:
    li r3, 0x0
    blr
lbl_fn_80625F40_000015F0:
    stw r3, 0x0(r5)
    add r4, r6, r4
    li r3, 0x1
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    blr
}

asm void fn_80625F90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r6, lbl_807BB380@ha
    addi r6, r6, lbl_807BB380@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r9, 0x18(r3)
    lwz r10, 0x4(r3)
    nop
lbl_fn_80625F90_00001638:
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_fn_80625F90_0000164C
    mr r3, r9
    b lbl_fn_80625F90_00001874
lbl_fn_80625F90_0000164C:
    cmpwi r0, 0x2f
    bne lbl_fn_80625F90_00001660
    li r9, 0x0
    addi r4, r4, 0x1
    b lbl_fn_80625F90_00001638
lbl_fn_80625F90_00001660:
    cmpwi r0, 0x2e
    bne lbl_fn_80625F90_000016D4
    lbz r0, 0x1(r4)
    extsb r0, r0
    cmpwi r0, 0x2e
    bne lbl_fn_80625F90_000016B4
    lbz r0, 0x2(r4)
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_fn_80625F90_0000169C
    mulli r0, r9, 0xc
    addi r4, r4, 0x3
    add r5, r10, r0
    lwz r9, 0x4(r5)
    b lbl_fn_80625F90_00001638
lbl_fn_80625F90_0000169C:
    cmpwi r0, 0x0
    bne lbl_fn_80625F90_000016D4
    mulli r0, r9, 0xc
    add r3, r10, r0
    lwz r3, 0x4(r3)
    b lbl_fn_80625F90_00001874
lbl_fn_80625F90_000016B4:
    cmpwi r0, 0x2f
    bne lbl_fn_80625F90_000016C4
    addi r4, r4, 0x2
    b lbl_fn_80625F90_00001638
lbl_fn_80625F90_000016C4:
    cmpwi r0, 0x0
    bne lbl_fn_80625F90_000016D4
    mr r3, r9
    b lbl_fn_80625F90_00001874
lbl_fn_80625F90_000016D4:
    mr r8, r4
    b lbl_fn_80625F90_000016E4
    nop
lbl_fn_80625F90_000016E0:
    addi r8, r8, 0x1
lbl_fn_80625F90_000016E4:
    lbz r0, 0x0(r8)
    extsb. r0, r0
    beq lbl_fn_80625F90_000016FC
    cmpwi r0, 0x2f
    beq lbl_fn_80625F90_00001704
    b lbl_fn_80625F90_000016E0
lbl_fn_80625F90_000016FC:
    li r0, 0x0
    b lbl_fn_80625F90_00001708
lbl_fn_80625F90_00001704:
    li r0, 0x1
lbl_fn_80625F90_00001708:
    mulli r7, r9, 0xc
    lwz r5, 0x38(r6)
    subf r8, r4, r8
    addi r9, r9, 0x1
    add r7, r10, r7
    lwz r7, 0x8(r7)
    b lbl_fn_80625F90_00001848
    nop
lbl_fn_80625F90_00001728:
    mulli r11, r9, 0xc
    add r29, r10, r11
lbl_fn_80625F90_00001730:
    lwz r30, 0x0(r29)
    clrrwi. r11, r30, 24
    bne lbl_fn_80625F90_00001744
    cmpwi r0, 0x1
    beq lbl_fn_80625F90_00001828
lbl_fn_80625F90_00001744:
    lwz r12, 0x10(r3)
    clrlwi r11, r30, 8
    add r28, r12, r11
    lbzx r11, r12, r11
    cmpwi r11, 0x2e
    bne lbl_fn_80625F90_00001774
    lbz r11, 0x1(r28)
    extsb. r11, r11
    bne lbl_fn_80625F90_00001774
    addi r29, r29, 0xc
    addi r9, r9, 0x1
    b lbl_fn_80625F90_00001730
lbl_fn_80625F90_00001774:
    mr r12, r4
    b lbl_fn_80625F90_000017F0
    nop
lbl_fn_80625F90_00001780:
    lbz r11, 0x0(r28)
    li r31, 0x1
    addi r28, r28, 0x1
    extsb r30, r11
    cmplwi r30, 0xff
    bgt lbl_fn_80625F90_0000179C
    li r31, 0x0
lbl_fn_80625F90_0000179C:
    cmpwi r31, 0x0
    beq lbl_fn_80625F90_000017A8
    b lbl_fn_80625F90_000017B0
lbl_fn_80625F90_000017A8:
    lwz r11, 0x10(r5)
    lbzx r30, r11, r30
lbl_fn_80625F90_000017B0:
    lbz r11, 0x0(r12)
    li r29, 0x1
    addi r12, r12, 0x1
    extsb r31, r11
    cmplwi r31, 0xff
    bgt lbl_fn_80625F90_000017CC
    li r29, 0x0
lbl_fn_80625F90_000017CC:
    cmpwi r29, 0x0
    beq lbl_fn_80625F90_000017D8
    b lbl_fn_80625F90_000017E0
lbl_fn_80625F90_000017D8:
    lwz r11, 0x10(r5)
    lbzx r31, r11, r31
lbl_fn_80625F90_000017E0:
    cmpw r31, r30
    beq lbl_fn_80625F90_000017F0
    li r11, 0x0
    b lbl_fn_80625F90_00001820
lbl_fn_80625F90_000017F0:
    lbz r11, 0x0(r28)
    extsb. r11, r11
    bne lbl_fn_80625F90_00001780
    lbz r11, 0x0(r12)
    extsb r11, r11
    cmpwi r11, 0x2f
    beq lbl_fn_80625F90_00001814
    cmpwi r11, 0x0
    bne lbl_fn_80625F90_0000181C
lbl_fn_80625F90_00001814:
    li r11, 0x1
    b lbl_fn_80625F90_00001820
lbl_fn_80625F90_0000181C:
    li r11, 0x0
lbl_fn_80625F90_00001820:
    cmpwi r11, 0x1
    beq lbl_fn_80625F90_00001858
lbl_fn_80625F90_00001828:
    mulli r11, r9, 0xc
    add r12, r10, r11
    lwzx r11, r10, r11
    clrrwi. r11, r11, 24
    beq lbl_fn_80625F90_00001844
    lwz r9, 0x8(r12)
    b lbl_fn_80625F90_00001848
lbl_fn_80625F90_00001844:
    addi r9, r9, 0x1
lbl_fn_80625F90_00001848:
    cmplw r9, r7
    blt lbl_fn_80625F90_00001728
    li r3, -0x1
    b lbl_fn_80625F90_00001874
lbl_fn_80625F90_00001858:
    cmpwi r0, 0x0
    bne lbl_fn_80625F90_00001868
    mr r3, r9
    b lbl_fn_80625F90_00001874
lbl_fn_80625F90_00001868:
    add r4, r8, r4
    addi r4, r4, 0x1
    b lbl_fn_80625F90_00001638
lbl_fn_80625F90_00001874:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_80626210(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r4, 0x0
    lwz r7, 0x4(r3)
    mr r28, r5
    mr r29, r6
    bne lbl_fn_80626210_000018C0
    li r3, 0x0
    b lbl_fn_80626210_00001A48
lbl_fn_80626210_000018C0:
    mulli r0, r4, 0xc
    lwz r8, 0x10(r3)
    add r4, r7, r0
    lwzx r0, r7, r0
    lwz r4, 0x4(r4)
    clrlwi r0, r0, 8
    cmpwi r4, 0x0
    add r30, r8, r0
    bne lbl_fn_80626210_000018EC
    li r4, 0x0
    b lbl_fn_80626210_000019E8
lbl_fn_80626210_000018EC:
    mulli r0, r4, 0xc
    add r4, r7, r0
    lwzx r0, r7, r0
    lwz r4, 0x4(r4)
    clrlwi r0, r0, 8
    cmpwi r4, 0x0
    add r31, r8, r0
    bne lbl_fn_80626210_00001914
    li r4, 0x0
    b lbl_fn_80626210_00001990
lbl_fn_80626210_00001914:
    mulli r4, r4, 0xc
    lwzx r0, r7, r4
    add r4, r7, r4
    lwz r4, 0x4(r4)
    clrlwi r0, r0, 8
    add r27, r8, r0
    bl fn_80626210
    cmplw r3, r29
    mr r4, r3
    bne lbl_fn_80626210_00001940
    b lbl_fn_80626210_00001990
lbl_fn_80626210_00001940:
    addi r4, r3, 0x1
    li r0, 0x2f
    subf r6, r4, r29
    stbx r0, r28, r3
    add r3, r28, r4
    mr r5, r6
    b lbl_fn_80626210_00001974
    nop
lbl_fn_80626210_00001960:
    lbz r0, 0x0(r27)
    addi r27, r27, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    subi r5, r5, 0x1
lbl_fn_80626210_00001974:
    cmpwi r5, 0x0
    beq lbl_fn_80626210_00001988
    lbz r0, 0x0(r27)
    extsb. r0, r0
    bne lbl_fn_80626210_00001960
lbl_fn_80626210_00001988:
    subf r0, r5, r6
    add r4, r4, r0
lbl_fn_80626210_00001990:
    cmplw r4, r29
    bne lbl_fn_80626210_0000199C
    b lbl_fn_80626210_000019E8
lbl_fn_80626210_0000199C:
    addi r3, r4, 0x1
    li r0, 0x2f
    subf r6, r3, r29
    stbx r0, r28, r4
    add r4, r28, r3
    mr r5, r6
    b lbl_fn_80626210_000019CC
lbl_fn_80626210_000019B8:
    lbz r0, 0x0(r31)
    addi r31, r31, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    subi r5, r5, 0x1
lbl_fn_80626210_000019CC:
    cmpwi r5, 0x0
    beq lbl_fn_80626210_000019E0
    lbz r0, 0x0(r31)
    extsb. r0, r0
    bne lbl_fn_80626210_000019B8
lbl_fn_80626210_000019E0:
    subf r0, r5, r6
    add r4, r3, r0
lbl_fn_80626210_000019E8:
    cmplw r4, r29
    bne lbl_fn_80626210_000019F8
    mr r3, r4
    b lbl_fn_80626210_00001A48
lbl_fn_80626210_000019F8:
    addi r6, r4, 0x1
    li r0, 0x2f
    subf r5, r6, r29
    stbx r0, r28, r4
    add r3, r28, r6
    mr r4, r5
    b lbl_fn_80626210_00001A2C
    nop
lbl_fn_80626210_00001A18:
    lbz r0, 0x0(r30)
    addi r30, r30, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    subi r4, r4, 0x1
lbl_fn_80626210_00001A2C:
    cmpwi r4, 0x0
    beq lbl_fn_80626210_00001A40
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_80626210_00001A18
lbl_fn_80626210_00001A40:
    subf r0, r4, r5
    add r3, r6, r0
lbl_fn_80626210_00001A48:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806263E0(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    lwz r0, 0x4(r3)
    lwz r3, 0x0(r4)
    add r3, r3, r0
    blr
}

asm void fn_80626400(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    blr
}

asm void fn_80626410(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80626420(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80625F90
    cmpwi r3, 0x0
    lwz r4, 0x4(r31)
    blt lbl_fn_80626420_00001AD4
    mulli r0, r3, 0xc
    lwzx r0, r4, r0
    clrrwi. r0, r0, 24
    bne lbl_fn_80626420_00001ADC
lbl_fn_80626420_00001AD4:
    li r3, 0x0
    b lbl_fn_80626420_00001AE4
lbl_fn_80626420_00001ADC:
    stw r3, 0x18(r31)
    li r3, 0x1
lbl_fn_80626420_00001AE4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80626480(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80625F90
    cmpwi r3, 0x0
    lwz r5, 0x4(r30)
    blt lbl_fn_80626480_00001B3C
    mulli r4, r3, 0xc
    lwzx r0, r5, r4
    clrrwi. r0, r0, 24
    bne lbl_fn_80626480_00001B44
lbl_fn_80626480_00001B3C:
    li r3, 0x0
    b lbl_fn_80626480_00001B64
lbl_fn_80626480_00001B44:
    addi r0, r3, 0x1
    stw r3, 0x4(r31)
    add r4, r5, r4
    li r3, 0x1
    stw r30, 0x0(r31)
    stw r0, 0x8(r31)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r31)
lbl_fn_80626480_00001B64:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80626500(void)
{
    nofralloc
    lwz r7, 0x8(r3)
    lwz r9, 0x0(r3)
    mulli r0, r7, 0xc
    lwz r8, 0x4(r9)
    add r6, r8, r0
    nop
lbl_fn_80626500_00001B98:
    lwz r0, 0x4(r3)
    cmplw r7, r0
    ble lbl_fn_80626500_00001BB0
    lwz r0, 0xc(r3)
    cmplw r0, r7
    bgt lbl_fn_80626500_00001BB8
lbl_fn_80626500_00001BB0:
    li r3, 0x0
    blr
lbl_fn_80626500_00001BB8:
    stw r9, 0x0(r4)
    stw r7, 0x4(r4)
    lwz r0, 0x0(r6)
    clrrwi r5, r0, 24
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    stw r0, 0x8(r4)
    lwz r0, 0x0(r6)
    lwz r5, 0x10(r9)
    clrlwi r0, r0, 8
    add r5, r5, r0
    stw r5, 0xc(r4)
    lbz r0, 0x0(r5)
    cmpwi r0, 0x2e
    bne lbl_fn_80626500_00001C10
    lbz r0, 0x1(r5)
    extsb. r0, r0
    bne lbl_fn_80626500_00001C10
    addi r6, r6, 0xc
    addi r7, r7, 0x1
    b lbl_fn_80626500_00001B98
lbl_fn_80626500_00001C10:
    mulli r4, r7, 0xc
    lwzx r0, r8, r4
    clrrwi. r0, r0, 24
    beq lbl_fn_80626500_00001C2C
    add r4, r8, r4
    lwz r0, 0x8(r4)
    b lbl_fn_80626500_00001C30
lbl_fn_80626500_00001C2C:
    addi r0, r7, 0x1
lbl_fn_80626500_00001C30:
    stw r0, 0x8(r3)
    li r3, 0x1
    blr
}

asm void fn_806265C0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_806265D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_18
    addi r7, r4, 0x3
    lis r4, lbl_807F3760@ha
    clrrwi r9, r7, 2
    clrlslwi r25, r3, 24, 2
    addi r26, r9, 0xc
    addi r4, r4, lbl_807F3760@l
    clrlwi r8, r26, 16
    rlwinm r12, r7, 0, 16, 29
    addi r10, r4, 0x54
    clrlslwi r4, r3, 24, 1
    addis r11, r10, 0x3
    clrlslwi r0, r3, 24, 4
    add r25, r11, r25
    cmpwi r5, 0x0
    mullw r24, r8, r5
    stw r6, -0x75e4(r25)
    add r7, r11, r4
    add r11, r11, r0
    add r4, r6, r24
    stw r4, -0x75c0(r25)
    li r4, 0x0
    sth r26, -0x759c(r7)
    li r7, 0x0
    sth r12, -0x766c(r11)
    sth r5, -0x766a(r11)
    sth r4, -0x7668(r11)
    sth r4, -0x7666(r11)
    stw r6, -0x7674(r11)
    beq lbl_fn_806265D0_00001E44
    cmplwi r5, 0x8
    addis r11, r5, 0x1
    subi r11, r11, 0x8
    ble lbl_fn_806265D0_00001DF8
    clrlwi r12, r11, 16
    lis r27, 0xddbb
    addi r11, r12, 0x7
    li r24, 0xf0
    srwi r11, r11, 3
    subi r26, r27, 0x2246
    li r25, 0x0
    mtctr r11
    cmplwi r12, 0x0
    ble lbl_fn_806265D0_00001DF8
lbl_fn_806265D0_00001D10:
    stb r24, 0x5(r6)
    add r18, r6, r8
    add r19, r18, r8
    add r4, r6, r9
    stb r3, 0x4(r6)
    add r20, r19, r8
    add r21, r20, r8
    add r27, r18, r9
    stb r25, 0x6(r6)
    add r22, r21, r8
    add r23, r22, r8
    add r28, r19, r9
    stw r26, 0x8(r4)
    add r4, r23, r8
    add r31, r20, r9
    add r30, r21, r9
    stw r18, 0x0(r6)
    add r29, r22, r9
    add r12, r23, r9
    add r11, r4, r9
    stb r24, 0x5(r18)
    add r6, r4, r8
    addi r7, r7, 0x8
    stb r3, 0x4(r18)
    stb r25, 0x6(r18)
    stw r26, 0x8(r27)
    stw r19, 0x0(r18)
    stb r24, 0x5(r19)
    stb r3, 0x4(r19)
    stb r25, 0x6(r19)
    stw r26, 0x8(r28)
    stwx r20, r18, r8
    stb r24, 0x5(r20)
    stb r3, 0x4(r20)
    stb r25, 0x6(r20)
    stw r26, 0x8(r31)
    stwx r21, r19, r8
    stb r24, 0x5(r21)
    stb r3, 0x4(r21)
    stb r25, 0x6(r21)
    stw r26, 0x8(r30)
    stwx r22, r20, r8
    stb r24, 0x5(r22)
    stb r3, 0x4(r22)
    stb r25, 0x6(r22)
    stw r26, 0x8(r29)
    stwx r23, r21, r8
    stb r24, 0x5(r23)
    stb r3, 0x4(r23)
    stb r25, 0x6(r23)
    stw r26, 0x8(r12)
    stwx r4, r22, r8
    stb r24, 0x5(r4)
    stb r3, 0x4(r4)
    stb r25, 0x6(r4)
    stw r26, 0x8(r11)
    stwx r6, r23, r8
    bdnz lbl_fn_806265D0_00001D10
lbl_fn_806265D0_00001DF8:
    clrlwi r12, r7, 16
    lis r31, 0xddbb
    subf r11, r12, r5
    li r29, 0xf0
    subi r31, r31, 0x2246
    li r30, 0x0
    mtctr r11
    cmplw r12, r5
    bge lbl_fn_806265D0_00001E44
lbl_fn_806265D0_00001E1C:
    stb r29, 0x5(r6)
    add r5, r6, r9
    mr r4, r6
    addi r7, r7, 0x1
    stb r3, 0x4(r6)
    stb r30, 0x6(r6)
    add r6, r6, r8
    stw r31, 0x8(r5)
    stw r6, 0x0(r4)
    bdnz lbl_fn_806265D0_00001E1C
lbl_fn_806265D0_00001E44:
    addis r3, r10, 0x3
    li r5, 0x0
    stw r5, 0x0(r4)
    add r3, r3, r0
    addi r11, r1, 0x40
    stw r4, -0x7670(r3)
    bl _restgpr_18
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806267F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807F3760@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r3, r3, lbl_807F3760@l
    li r4, 0x0
    stw r31, 0xc(r1)
    addi r31, r3, 0x54
    mtctr r0
lbl_fn_806267F0_00001E9C:
    clrlslwi r0, r6, 24, 4
    addi r6, r6, 0x1
    add r5, r31, r0
    addis r3, r5, 0x3
    clrlslwi r0, r6, 24, 4
    stw r4, -0x7774(r3)
    add r5, r31, r0
    addi r6, r6, 0x1
    stw r4, -0x76f4(r3)
    clrlslwi r0, r6, 24, 4
    addi r6, r6, 0x1
    stw r4, -0x7770(r3)
    stw r4, -0x76f0(r3)
    stw r4, -0x776c(r3)
    stw r4, -0x76ec(r3)
    stw r4, -0x7768(r3)
    stw r4, -0x76e8(r3)
    addis r3, r5, 0x3
    add r5, r31, r0
    clrlslwi r0, r6, 24, 4
    stw r4, -0x7774(r3)
    addi r6, r6, 0x1
    stw r4, -0x76f4(r3)
    stw r4, -0x7770(r3)
    stw r4, -0x76f0(r3)
    stw r4, -0x776c(r3)
    stw r4, -0x76ec(r3)
    stw r4, -0x7768(r3)
    stw r4, -0x76e8(r3)
    addis r3, r5, 0x3
    add r5, r31, r0
    stw r4, -0x7774(r3)
    stw r4, -0x76f4(r3)
    stw r4, -0x7770(r3)
    stw r4, -0x76f0(r3)
    stw r4, -0x776c(r3)
    stw r4, -0x76ec(r3)
    stw r4, -0x7768(r3)
    stw r4, -0x76e8(r3)
    addis r3, r5, 0x3
    stw r4, -0x7774(r3)
    stw r4, -0x76f4(r3)
    stw r4, -0x7770(r3)
    stw r4, -0x76f0(r3)
    stw r4, -0x776c(r3)
    stw r4, -0x76ec(r3)
    stw r4, -0x7768(r3)
    stw r4, -0x76e8(r3)
    bdnz lbl_fn_806267F0_00001E9C
    li r0, 0x3
    li r10, 0x0
    li r7, 0x0
    mtctr r0
lbl_fn_806267F0_00001F70:
    clrlslwi r0, r10, 24, 2
    clrlslwi r4, r10, 24, 1
    add r8, r31, r0
    addis r6, r8, 0x3
    clrlslwi r0, r10, 24, 4
    addis r4, r4, 0x3
    stw r7, -0x75e4(r6)
    add r9, r31, r0
    addi r10, r10, 0x1
    subi r5, r4, 0x759c
    stw r7, -0x75c0(r6)
    addis r3, r9, 0x3
    clrlslwi r0, r10, 24, 2
    sthx r7, r31, r5
    add r8, r31, r0
    clrlslwi r4, r10, 24, 1
    clrlslwi r0, r10, 24, 4
    stw r7, -0x7674(r3)
    addis r4, r4, 0x3
    addis r6, r8, 0x3
    add r9, r31, r0
    stw r7, -0x7670(r3)
    addi r10, r10, 0x1
    subi r5, r4, 0x759c
    sth r7, -0x766c(r3)
    clrlslwi r0, r10, 24, 2
    add r8, r31, r0
    clrlslwi r4, r10, 24, 1
    sth r7, -0x766a(r3)
    clrlslwi r0, r10, 24, 4
    addis r4, r4, 0x3
    addi r10, r10, 0x1
    sth r7, -0x7668(r3)
    sth r7, -0x7666(r3)
    addis r3, r9, 0x3
    add r9, r31, r0
    stw r7, -0x75e4(r6)
    stw r7, -0x75c0(r6)
    addis r6, r8, 0x3
    sthx r7, r31, r5
    subi r5, r4, 0x759c
    stw r7, -0x7674(r3)
    stw r7, -0x7670(r3)
    sth r7, -0x766c(r3)
    sth r7, -0x766a(r3)
    sth r7, -0x7668(r3)
    sth r7, -0x7666(r3)
    addis r3, r9, 0x3
    stw r7, -0x75e4(r6)
    stw r7, -0x75c0(r6)
    sthx r7, r31, r5
    stw r7, -0x7674(r3)
    stw r7, -0x7670(r3)
    sth r7, -0x766c(r3)
    sth r7, -0x766a(r3)
    sth r7, -0x7668(r3)
    sth r7, -0x7666(r3)
    bdnz lbl_fn_806267F0_00001F70
    lis r4, 0x1
    addis r3, r31, 0x3
    subi r0, r4, 0x10
    sth r0, -0x7584(r3)
    mr r6, r31
    li r3, 0x0
    li r4, 0x40
    li r5, 0x30
    bl fn_806265D0
    addi r6, r31, 0xe40
    li r3, 0x1
    li r4, 0x80
    li r5, 0x1a
    bl fn_806265D0
    addi r6, r31, 0x1c78
    li r3, 0x2
    li r4, 0x294
    li r5, 0x2d
    bl fn_806265D0
    addis r6, r31, 0x1
    li r3, 0x3
    li r4, 0x708
    li r5, 0x1e
    subi r6, r6, 0x6d68
    bl fn_806265D0
    addis r6, r31, 0x1
    li r3, 0x4
    li r4, 0x2000
    li r5, 0x9
    addi r6, r6, 0x66f0
    bl fn_806265D0
    addis r6, r31, 0x3
    li r0, 0x0
    stb r0, -0x7582(r6)
    li r0, 0x1
    li r5, 0x2
    li r4, 0x3
    stb r0, -0x7581(r6)
    li r3, 0x4
    li r0, 0x5
    stb r5, -0x7580(r6)
    stb r4, -0x757f(r6)
    stb r3, -0x757e(r6)
    stb r0, -0x7579(r6)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80626AA0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x0(r3)
    sth r0, 0x8(r3)
    blr
}

asm void fn_80626AC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807F3760@ha
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807F3760@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    addi r30, r4, 0x54
    bne lbl_fn_80626AC0_00002188
    lis r3, 0x1
    lis r4, lbl_807B3168@ha
    subi r0, r3, 0xa
    clrlwi r3, r0, 16
    addi r4, r4, lbl_807B3168@l
    bl fn_806282C0
    li r3, 0x0
    b lbl_fn_80626AC0_000022C8
lbl_fn_80626AC0_00002188:
    addis r4, r30, 0x3
    li r31, 0x0
    lbz r5, -0x7579(r4)
    b lbl_fn_80626AC0_000021C4
lbl_fn_80626AC0_00002198:
    clrlwi r4, r31, 24
    addis r4, r4, 0x3
    subi r0, r4, 0x7582
    lbzx r0, r30, r0
    slwi r4, r0, 4
    addis r4, r4, 0x3
    subi r0, r4, 0x766c
    lhzx r0, r30, r0
    cmplw r3, r0
    ble lbl_fn_80626AC0_000021D0
    addi r31, r31, 0x1
lbl_fn_80626AC0_000021C4:
    clrlwi r0, r31, 24
    cmplw r0, r5
    blt lbl_fn_80626AC0_00002198
lbl_fn_80626AC0_000021D0:
    clrlwi r0, r31, 24
    cmplw r0, r5
    bne lbl_fn_80626AC0_000021FC
    lis r3, 0x1
    lis r4, lbl_807B3180@ha
    subi r0, r3, 0x9
    clrlwi r3, r0, 16
    addi r4, r4, lbl_807B3180@l
    bl fn_806282C0
    li r3, 0x0
    b lbl_fn_80626AC0_000022C8
lbl_fn_80626AC0_000021FC:
    bl fn_80628270
    addis r6, r30, 0x3
    li r5, 0x1
    lbz r7, -0x7579(r6)
    b lbl_fn_80626AC0_000022B4
lbl_fn_80626AC0_00002210:
    clrlwi r4, r31, 24
    lhz r3, -0x7584(r6)
    addis r4, r4, 0x3
    subi r0, r4, 0x7582
    lbzx r4, r30, r0
    slw r0, r5, r4
    and. r0, r3, r0
    bne lbl_fn_80626AC0_000022B0
    clrlslwi r0, r4, 24, 4
    add r4, r6, r0
    lhz r3, -0x7668(r4)
    lhz r0, -0x766a(r4)
    cmplw r3, r0
    bge lbl_fn_80626AC0_000022B0
    lwz r30, -0x7674(r4)
    lwz r0, 0x0(r30)
    stw r0, -0x7674(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80626AC0_00002264
    li r0, 0x0
    stw r0, -0x7670(r4)
lbl_fn_80626AC0_00002264:
    lhz r3, -0x7668(r4)
    addi r0, r3, 0x1
    sth r0, -0x7668(r4)
    clrlwi r3, r0, 16
    lhz r0, -0x7666(r4)
    cmplw r3, r0
    ble lbl_fn_80626AC0_00002288
    lhz r0, -0x7668(r4)
    sth r0, -0x7666(r4)
lbl_fn_80626AC0_00002288:
    bl fn_80628240
    bl fn_80628230
    stb r3, 0x5(r30)
    li r4, 0x1
    li r0, 0x0
    addi r3, r30, 0x8
    stb r4, 0x6(r30)
    stw r0, 0x0(r30)
    stb r0, 0x7(r30)
    b lbl_fn_80626AC0_000022C8
lbl_fn_80626AC0_000022B0:
    addi r31, r31, 0x1
lbl_fn_80626AC0_000022B4:
    clrlwi r0, r31, 24
    cmplw r0, r7
    blt lbl_fn_80626AC0_00002210
    bl fn_80628240
    li r3, 0x0
lbl_fn_80626AC0_000022C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80626C60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807F3760@ha
    cmplwi r3, 0x9
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807F3760@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    addi r30, r4, 0x54
    blt lbl_fn_80626C60_00002314
    li r3, 0x0
    b lbl_fn_80626C60_000023B0
lbl_fn_80626C60_00002314:
    bl fn_80628270
    clrlslwi r31, r31, 24, 4
    addis r0, r30, 0x3
    add r4, r0, r31
    lhz r3, -0x7668(r4)
    lhz r0, -0x766a(r4)
    cmplw r3, r0
    bge lbl_fn_80626C60_0000239C
    lwz r31, -0x7674(r4)
    lwz r0, 0x0(r31)
    stw r0, -0x7674(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80626C60_00002350
    li r0, 0x0
    stw r0, -0x7670(r4)
lbl_fn_80626C60_00002350:
    lhz r3, -0x7668(r4)
    addi r0, r3, 0x1
    sth r0, -0x7668(r4)
    clrlwi r3, r0, 16
    lhz r0, -0x7666(r4)
    cmplw r3, r0
    ble lbl_fn_80626C60_00002374
    lhz r0, -0x7668(r4)
    sth r0, -0x7666(r4)
lbl_fn_80626C60_00002374:
    bl fn_80628240
    bl fn_80628230
    stb r3, 0x5(r31)
    li r4, 0x1
    li r0, 0x0
    addi r3, r31, 0x8
    stb r4, 0x6(r31)
    stw r0, 0x0(r31)
    stb r0, 0x7(r31)
    b lbl_fn_80626C60_000023B0
lbl_fn_80626C60_0000239C:
    bl fn_80628240
    addis r0, r30, 0x3
    add r3, r0, r31
    lhz r3, -0x766c(r3)
    bl fn_80626AC0
lbl_fn_80626C60_000023B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80626D50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807B3168@ha
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807B3168@l
    stw r31, 0xc(r1)
    beq lbl_fn_80626D50_00002468
    subi r31, r3, 0x8
    clrlwi. r0, r31, 31
    beq lbl_fn_80626D50_00002404
    li r0, 0x0
    b lbl_fn_80626D50_00002430
lbl_fn_80626D50_00002404:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    bge lbl_fn_80626D50_0000242C
    lis r4, lbl_807F3760@ha
    clrlslwi r0, r0, 24, 4
    addi r4, r4, lbl_807F3760@l
    addis r4, r4, 0x3
    add r4, r4, r0
    lhz r0, -0x7618(r4)
    b lbl_fn_80626D50_00002430
lbl_fn_80626D50_0000242C:
    li r0, 0x0
lbl_fn_80626D50_00002430:
    add r4, r3, r0
    clrlwi. r0, r4, 31
    beq lbl_fn_80626D50_00002444
    li r0, 0x1
    b lbl_fn_80626D50_00002460
lbl_fn_80626D50_00002444:
    lis r3, 0xddbb
    lwz r4, 0x0(r4)
    subi r0, r3, 0x2246
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80626D50_00002460:
    clrlwi. r0, r0, 24
    beq lbl_fn_80626D50_00002480
lbl_fn_80626D50_00002468:
    lis r3, 0x1
    addi r4, r5, 0x30
    subi r0, r3, 0x1
    clrlwi r3, r0, 16
    bl fn_806282C0
    b lbl_fn_80626D50_0000252C
lbl_fn_80626D50_00002480:
    lbz r0, 0x6(r31)
    cmplwi r0, 0x1
    beq lbl_fn_80626D50_000024A4
    lis r3, 0x1
    addi r4, r5, 0x48
    subi r0, r3, 0x4
    clrlwi r3, r0, 16
    bl fn_806282C0
    b lbl_fn_80626D50_0000252C
lbl_fn_80626D50_000024A4:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    blt lbl_fn_80626D50_000024C8
    lis r3, 0x1
    addi r4, r5, 0x5c
    subi r0, r3, 0x3
    clrlwi r3, r0, 16
    bl fn_806282C0
    b lbl_fn_80626D50_0000252C
lbl_fn_80626D50_000024C8:
    bl fn_80628270
    lbz r0, 0x4(r31)
    lis r3, lbl_807F3760@ha
    addi r3, r3, lbl_807F3760@l
    addis r3, r3, 0x3
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r3, -0x761c(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80626D50_000024F8
    stw r31, 0x0(r3)
    b lbl_fn_80626D50_000024FC
lbl_fn_80626D50_000024F8:
    stw r31, -0x7620(r4)
lbl_fn_80626D50_000024FC:
    stw r31, -0x761c(r4)
    li r3, 0x0
    li r0, 0xf0
    stw r3, 0x0(r31)
    stb r3, 0x6(r31)
    stb r0, 0x5(r31)
    lhz r3, -0x7614(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80626D50_00002528
    subi r0, r3, 0x1
    sth r0, -0x7614(r4)
lbl_fn_80626D50_00002528:
    bl fn_80628240
lbl_fn_80626D50_0000252C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80626EC0(void)
{
    nofralloc
    subi r3, r3, 0x8
    clrlwi. r0, r3, 31
    beq lbl_fn_80626EC0_00002554
    li r3, 0x0
    blr
lbl_fn_80626EC0_00002554:
    lbz r0, 0x4(r3)
    cmplwi r0, 0x9
    bge lbl_fn_80626EC0_0000257C
    lis r3, lbl_807F3760@ha
    clrlslwi r0, r0, 24, 4
    addi r3, r3, lbl_807F3760@l
    addis r3, r3, 0x3
    add r3, r3, r0
    lhz r3, -0x7618(r3)
    blr
lbl_fn_80626EC0_0000257C:
    li r3, 0x0
    blr
}

asm void fn_80626F10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_807F3760@ha
    lis r6, lbl_807B3168@ha
    stw r0, 0x24(r1)
    cmplwi r3, 0x8
    addi r7, r7, lbl_807F3760@l
    addi r6, r6, lbl_807B3168@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    addi r30, r7, 0x54
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bge lbl_fn_80626F10_000025F0
    cmplwi r4, 0x4
    bge lbl_fn_80626F10_000025F0
    addis r0, r30, 0x3
    add r3, r0, r3
    lbz r0, -0x7854(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80626F10_00002610
lbl_fn_80626F10_000025F0:
    lis r3, 0x1
    addi r4, r6, 0x68
    subi r0, r3, 0x5
    clrlwi r3, r0, 16
    bl fn_806282C0
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_80626F10_0000272C
lbl_fn_80626F10_00002610:
    subi r31, r5, 0x8
    clrlwi. r0, r31, 31
    beq lbl_fn_80626F10_00002624
    li r0, 0x0
    b lbl_fn_80626F10_00002648
lbl_fn_80626F10_00002624:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    bge lbl_fn_80626F10_00002644
    addis r3, r7, 0x3
    clrlslwi r0, r0, 24, 4
    add r3, r3, r0
    lhz r0, -0x7618(r3)
    b lbl_fn_80626F10_00002648
lbl_fn_80626F10_00002644:
    li r0, 0x0
lbl_fn_80626F10_00002648:
    add r4, r5, r0
    clrlwi. r0, r4, 31
    beq lbl_fn_80626F10_0000265C
    li r0, 0x1
    b lbl_fn_80626F10_00002678
lbl_fn_80626F10_0000265C:
    lis r3, 0xddbb
    lwz r4, 0x0(r4)
    subi r0, r3, 0x2246
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80626F10_00002678:
    clrlwi. r0, r0, 24
    beq lbl_fn_80626F10_00002698
    lis r3, 0x1
    addi r4, r6, 0x80
    subi r0, r3, 0x1
    clrlwi r3, r0, 16
    bl fn_806282C0
    b lbl_fn_80626F10_0000272C
lbl_fn_80626F10_00002698:
    lbz r0, 0x6(r31)
    cmplwi r0, 0x1
    beq lbl_fn_80626F10_000026BC
    lis r3, 0x1
    addi r4, r6, 0x98
    subi r0, r3, 0x6
    clrlwi r3, r0, 16
    bl fn_806282C0
    b lbl_fn_80626F10_0000272C
lbl_fn_80626F10_000026BC:
    bl fn_80628270
    clrlslwi r4, r28, 24, 4
    addis r0, r30, 0x3
    clrlslwi r5, r29, 24, 2
    add r0, r0, r4
    add r3, r0, r5
    lwz r0, -0x7774(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80626F10_000026EC
    lwz r3, -0x76f4(r3)
    stw r31, 0x0(r3)
    b lbl_fn_80626F10_000026F0
lbl_fn_80626F10_000026EC:
    stw r31, -0x7774(r3)
lbl_fn_80626F10_000026F0:
    addis r0, r30, 0x3
    li r3, 0x0
    add r4, r0, r4
    add r4, r4, r5
    li r0, 0x2
    stw r31, -0x76f4(r4)
    stw r3, 0x0(r31)
    stb r0, 0x6(r31)
    stb r28, 0x5(r31)
    bl fn_80628240
    li r0, 0x1
    mr r3, r28
    slw r0, r0, r29
    clrlwi r4, r0, 16
    bl fn_80628180
lbl_fn_80626F10_0000272C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806270D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80628230
    clrlwi r0, r3, 24
    mr r31, r3
    cmplwi r0, 0x8
    li r30, 0x0
    bge lbl_fn_806270D0_0000278C
    cmplwi r29, 0x4
    blt lbl_fn_806270D0_00002794
lbl_fn_806270D0_0000278C:
    li r3, 0x0
    b lbl_fn_806270D0_000027E4
lbl_fn_806270D0_00002794:
    bl fn_80628270
    lis r3, lbl_807F3760@ha
    clrlslwi r4, r31, 24, 4
    addi r3, r3, lbl_807F3760@l
    clrlslwi r5, r29, 24, 2
    addis r0, r3, 0x3
    add r3, r0, r4
    subi r6, r3, 0x7720
    lwzx r4, r6, r5
    cmpwi r4, 0x0
    beq lbl_fn_806270D0_000027DC
    lwz r0, 0x0(r4)
    li r3, 0x0
    stwx r0, r6, r5
    li r0, 0x1
    addi r30, r4, 0x8
    stw r3, 0x0(r4)
    stb r0, 0x6(r4)
lbl_fn_806270D0_000027DC:
    bl fn_80628240
    mr r3, r30
lbl_fn_806270D0_000027E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80627180(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    subi r31, r4, 0x8
    clrlwi. r0, r31, 31
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80627180_00002834
    li r0, 0x0
    b lbl_fn_80627180_00002860
lbl_fn_80627180_00002834:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    bge lbl_fn_80627180_0000285C
    lis r3, lbl_807F3760@ha
    clrlslwi r0, r0, 24, 4
    addi r3, r3, lbl_807F3760@l
    addis r3, r3, 0x3
    add r3, r3, r0
    lhz r0, -0x7618(r3)
    b lbl_fn_80627180_00002860
lbl_fn_80627180_0000285C:
    li r0, 0x0
lbl_fn_80627180_00002860:
    add r4, r4, r0
    clrlwi. r0, r4, 31
    beq lbl_fn_80627180_00002874
    li r0, 0x1
    b lbl_fn_80627180_00002890
lbl_fn_80627180_00002874:
    lis r3, 0xddbb
    lwz r4, 0x0(r4)
    subi r0, r3, 0x2246
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80627180_00002890:
    clrlwi. r0, r0, 24
    beq lbl_fn_80627180_000028B4
    lis r3, 0x1
    lis r4, lbl_807B3218@ha
    subi r0, r3, 0x1
    clrlwi r3, r0, 16
    addi r4, r4, lbl_807B3218@l
    bl fn_806282C0
    b lbl_fn_80627180_00002920
lbl_fn_80627180_000028B4:
    lbz r0, 0x6(r31)
    cmplwi r0, 0x1
    beq lbl_fn_80627180_000028DC
    lis r3, 0x1
    lis r4, lbl_807B3234@ha
    subi r0, r3, 0x7
    clrlwi r3, r0, 16
    addi r4, r4, lbl_807B3234@l
    bl fn_806282C0
    b lbl_fn_80627180_00002920
lbl_fn_80627180_000028DC:
    bl fn_80628270
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80627180_000028F8
    lwz r3, 0x4(r29)
    stw r31, -0x8(r3)
    b lbl_fn_80627180_000028FC
lbl_fn_80627180_000028F8:
    stw r30, 0x0(r29)
lbl_fn_80627180_000028FC:
    lhz r4, 0x8(r29)
    li r3, 0x0
    stw r30, 0x4(r29)
    li r0, 0x2
    addi r4, r4, 0x1
    sth r4, 0x8(r29)
    stw r3, 0x0(r31)
    stb r0, 0x6(r31)
    bl fn_80628240
lbl_fn_80627180_00002920:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806272C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    subi r31, r4, 0x8
    clrlwi. r0, r31, 31
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806272C0_00002974
    li r0, 0x0
    b lbl_fn_806272C0_000029A0
lbl_fn_806272C0_00002974:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    bge lbl_fn_806272C0_0000299C
    lis r3, lbl_807F3760@ha
    clrlslwi r0, r0, 24, 4
    addi r3, r3, lbl_807F3760@l
    addis r3, r3, 0x3
    add r3, r3, r0
    lhz r0, -0x7618(r3)
    b lbl_fn_806272C0_000029A0
lbl_fn_806272C0_0000299C:
    li r0, 0x0
lbl_fn_806272C0_000029A0:
    add r4, r4, r0
    clrlwi. r0, r4, 31
    beq lbl_fn_806272C0_000029B4
    li r0, 0x1
    b lbl_fn_806272C0_000029D0
lbl_fn_806272C0_000029B4:
    lis r3, 0xddbb
    lwz r4, 0x0(r4)
    subi r0, r3, 0x2246
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r0, r0, 31
lbl_fn_806272C0_000029D0:
    clrlwi. r0, r0, 24
    beq lbl_fn_806272C0_000029F4
    lis r3, 0x1
    lis r4, lbl_807B3218@ha
    subi r0, r3, 0x1
    clrlwi r3, r0, 16
    addi r4, r4, lbl_807B3218@l
    bl fn_806282C0
    b lbl_fn_806272C0_00002A64
lbl_fn_806272C0_000029F4:
    lbz r0, 0x6(r31)
    cmplwi r0, 0x1
    beq lbl_fn_806272C0_00002A1C
    lis r3, 0x1
    lis r4, lbl_807B3254@ha
    subi r0, r3, 0x7
    clrlwi r3, r0, 16
    addi r4, r4, lbl_807B3254@l
    bl fn_806282C0
    b lbl_fn_806272C0_00002A64
lbl_fn_806272C0_00002A1C:
    bl fn_80628270
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_806272C0_00002A3C
    subi r0, r3, 0x8
    stw r0, 0x0(r31)
    stw r30, 0x0(r29)
    b lbl_fn_806272C0_00002A4C
lbl_fn_806272C0_00002A3C:
    stw r30, 0x0(r29)
    li r0, 0x0
    stw r30, 0x4(r29)
    stw r0, 0x0(r31)
lbl_fn_806272C0_00002A4C:
    lhz r3, 0x8(r29)
    li r0, 0x2
    addi r3, r3, 0x1
    sth r3, 0x8(r29)
    stb r0, 0x6(r31)
    bl fn_80628240
lbl_fn_806272C0_00002A64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80627400(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80628270
    cmpwi r30, 0x0
    beq lbl_fn_80627400_00002AB0
    lhz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80627400_00002ABC
lbl_fn_80627400_00002AB0:
    bl fn_80628240
    li r3, 0x0
    b lbl_fn_80627400_00002B08
lbl_fn_80627400_00002ABC:
    lwz r31, 0x0(r30)
    lwz r3, -0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80627400_00002AD8
    addi r0, r3, 0x8
    stw r0, 0x0(r30)
    b lbl_fn_80627400_00002AE4
lbl_fn_80627400_00002AD8:
    li r0, 0x0
    stw r0, 0x0(r30)
    stw r0, 0x4(r30)
lbl_fn_80627400_00002AE4:
    lhz r4, 0x8(r30)
    li r3, 0x0
    li r0, 0x1
    subi r4, r4, 0x1
    sth r4, 0x8(r30)
    stw r3, -0x8(r31)
    stb r0, -0x2(r31)
    bl fn_80628240
    mr r3, r31
lbl_fn_80627400_00002B08:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806274A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80628270
    lwz r3, 0x0(r30)
    cmplw r31, r3
    bne lbl_fn_806274A0_00002B5C
    bl fn_80628240
    mr r3, r30
    bl fn_80627400
    b lbl_fn_806274A0_00002BCC
lbl_fn_806274A0_00002B5C:
    subi r5, r31, 0x8
    subi r3, r3, 0x8
    b lbl_fn_806274A0_00002BBC
lbl_fn_806274A0_00002B68:
    lwz r0, 0x0(r3)
    cmplw r0, r5
    bne lbl_fn_806274A0_00002BB8
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r30)
    cmplw r31, r0
    bne lbl_fn_806274A0_00002B90
    addi r0, r3, 0x8
    stw r0, 0x4(r30)
lbl_fn_806274A0_00002B90:
    lhz r4, 0x8(r30)
    li r3, 0x0
    li r0, 0x1
    subi r4, r4, 0x1
    sth r4, 0x8(r30)
    stw r3, 0x0(r5)
    stb r0, 0x6(r5)
    bl fn_80628240
    mr r3, r31
    b lbl_fn_806274A0_00002BCC
lbl_fn_806274A0_00002BB8:
    mr r3, r0
lbl_fn_806274A0_00002BBC:
    cmpwi r3, 0x0
    bne lbl_fn_806274A0_00002B68
    bl fn_80628240
    li r3, 0x0
lbl_fn_806274A0_00002BCC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80627570(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_80627580(void)
{
    nofralloc
    lwz r3, -0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80627580_00002C14
    addi r3, r3, 0x8
    blr
lbl_fn_80627580_00002C14:
    li r3, 0x0
    blr
}

asm void fn_806275A0(void)
{
    nofralloc
    lhz r0, 0x8(r3)
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    blr
}

asm void fn_806275B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r7, lbl_807F3760@ha
    cmplwi r3, 0xfff3
    addi r7, r7, lbl_807F3760@l
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r30, r7, 0x54
    ble lbl_fn_806275B0_00002C6C
    li r3, 0xff
    b lbl_fn_806275B0_00002F60
lbl_fn_806275B0_00002C6C:
    li r0, 0x3
    li r31, 0x0
    mtctr r0
lbl_fn_806275B0_00002C78:
    clrlslwi r5, r31, 24, 2
    addis r5, r5, 0x3
    subi r0, r5, 0x75e4
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_fn_806275B0_00002CD0
    addi r31, r31, 0x1
    clrlslwi r5, r31, 24, 2
    addis r5, r5, 0x3
    subi r0, r5, 0x75e4
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_fn_806275B0_00002CD0
    addi r31, r31, 0x1
    clrlslwi r5, r31, 24, 2
    addis r5, r5, 0x3
    subi r0, r5, 0x75e4
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_fn_806275B0_00002CD0
    addi r31, r31, 0x1
    bdnz lbl_fn_806275B0_00002C78
lbl_fn_806275B0_00002CD0:
    clrlwi r0, r31, 24
    cmplwi r0, 0x9
    bne lbl_fn_806275B0_00002CE4
    li r3, 0xff
    b lbl_fn_806275B0_00002F60
lbl_fn_806275B0_00002CE4:
    addi r0, r3, 0x3
    cmpwi r6, 0x0
    clrrwi r3, r0, 2
    addi r0, r3, 0xc
    mullw r3, r0, r4
    bne lbl_fn_806275B0_00002D04
    bl fn_806282D0
    mr r6, r3
lbl_fn_806275B0_00002D04:
    cmpwi r6, 0x0
    beq lbl_fn_806275B0_00002F5C
    mr r4, r27
    mr r5, r28
    clrlwi r3, r31, 24
    bl fn_806265D0
    lis r3, lbl_807F3760@ha
    clrlslwi r5, r31, 24, 4
    addi r3, r3, lbl_807F3760@l
    li r4, 0x0
    addi r3, r3, 0x54
    addis r6, r5, 0x3
    addis r5, r3, 0x3
    lbz r5, -0x7579(r5)
    subi r0, r6, 0x766c
    lhzx r7, r3, r0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_806275B0_00002D7C
lbl_fn_806275B0_00002D50:
    addis r6, r4, 0x3
    subi r0, r6, 0x7582
    lbzx r0, r3, r0
    slwi r6, r0, 4
    addis r6, r6, 0x3
    subi r0, r6, 0x766c
    lhzx r0, r3, r0
    cmplw r7, r0
    ble lbl_fn_806275B0_00002D7C
    addi r4, r4, 0x1
    bdnz lbl_fn_806275B0_00002D50
lbl_fn_806275B0_00002D7C:
    cmpw r5, r4
    ble lbl_fn_806275B0_00002EE4
    subf r0, r4, r5
    addi r8, r4, 0x8
    cmpwi r0, 0x8
    ble lbl_fn_806275B0_00002EBC
    addis r6, r3, 0x3
    li r9, 0x0
    lbz r0, -0x7579(r6)
    li r10, 0x0
    li r11, 0x0
    li r7, 0x0
    cmpw r0, r4
    blt lbl_fn_806275B0_00002DC8
    lis r6, 0x8000
    addi r0, r6, 0x1
    cmpw r4, r0
    blt lbl_fn_806275B0_00002DC8
    li r7, 0x1
lbl_fn_806275B0_00002DC8:
    cmpwi r7, 0x0
    beq lbl_fn_806275B0_00002DEC
    addis r7, r3, 0x3
    lis r6, 0x8000
    lbz r7, -0x7579(r7)
    addi r0, r6, 0x1
    cmpw r7, r0
    blt lbl_fn_806275B0_00002DEC
    li r11, 0x1
lbl_fn_806275B0_00002DEC:
    cmpwi r11, 0x0
    beq lbl_fn_806275B0_00002E04
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_806275B0_00002E04
    li r10, 0x1
lbl_fn_806275B0_00002E04:
    cmpwi r10, 0x0
    beq lbl_fn_806275B0_00002E4C
    addis r6, r3, 0x3
    neg r0, r4
    lbz r10, -0x7579(r6)
    clrrwi r0, r0, 31
    li r6, 0x1
    clrrwi r7, r10, 31
    cmpw r7, r0
    bne lbl_fn_806275B0_00002E40
    subf r0, r4, r10
    clrrwi r0, r0, 31
    cmpw r7, r0
    beq lbl_fn_806275B0_00002E40
    li r6, 0x0
lbl_fn_806275B0_00002E40:
    cmpwi r6, 0x0
    beq lbl_fn_806275B0_00002E4C
    li r9, 0x1
lbl_fn_806275B0_00002E4C:
    cmpwi r9, 0x0
    beq lbl_fn_806275B0_00002EBC
    addi r0, r5, 0x7
    subf r0, r8, r0
    srwi r0, r0, 3
    mtctr r0
    cmpw r5, r8
    ble lbl_fn_806275B0_00002EBC
lbl_fn_806275B0_00002E6C:
    add r6, r3, r5
    subi r5, r5, 0x8
    addis r6, r6, 0x3
    lbz r0, -0x7583(r6)
    stb r0, -0x7582(r6)
    lbz r0, -0x7584(r6)
    stb r0, -0x7583(r6)
    lbz r0, -0x7585(r6)
    stb r0, -0x7584(r6)
    lbz r0, -0x7586(r6)
    stb r0, -0x7585(r6)
    lbz r0, -0x7587(r6)
    stb r0, -0x7586(r6)
    lbz r0, -0x7588(r6)
    stb r0, -0x7587(r6)
    lbz r0, -0x7589(r6)
    stb r0, -0x7588(r6)
    lbz r0, -0x758a(r6)
    stb r0, -0x7589(r6)
    bdnz lbl_fn_806275B0_00002E6C
lbl_fn_806275B0_00002EBC:
    subf r0, r4, r5
    mtctr r0
    cmpw r5, r4
    ble lbl_fn_806275B0_00002EE4
lbl_fn_806275B0_00002ECC:
    add r6, r3, r5
    subi r5, r5, 0x1
    addis r6, r6, 0x3
    lbz r0, -0x7583(r6)
    stb r0, -0x7582(r6)
    bdnz lbl_fn_806275B0_00002ECC
lbl_fn_806275B0_00002EE4:
    addis r0, r3, 0x3
    clrlwi r5, r31, 24
    add r4, r0, r4
    lis r3, lbl_807F3760@ha
    addi r3, r3, lbl_807F3760@l
    cmplwi r5, 0x9
    stb r31, -0x7582(r4)
    addi r3, r3, 0x54
    bge lbl_fn_806275B0_00002F44
    cmplwi r29, 0x1
    bne lbl_fn_806275B0_00002F2C
    addis r4, r3, 0x3
    li r0, 0x1
    lhz r3, -0x7584(r4)
    slw r0, r0, r5
    or r0, r3, r0
    sth r0, -0x7584(r4)
    b lbl_fn_806275B0_00002F44
lbl_fn_806275B0_00002F2C:
    addis r4, r3, 0x3
    li r0, 0x1
    lhz r3, -0x7584(r4)
    slw r0, r0, r5
    andc r0, r3, r0
    sth r0, -0x7584(r4)
lbl_fn_806275B0_00002F44:
    addis r5, r30, 0x3
    mr r3, r31
    lbz r4, -0x7579(r5)
    addi r0, r4, 0x1
    stb r0, -0x7579(r5)
    b lbl_fn_806275B0_00002F60
lbl_fn_806275B0_00002F5C:
    li r3, 0xff
lbl_fn_806275B0_00002F60:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80627900(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r27, lbl_807F3760@ha
    cmplwi r3, 0x9
    addi r27, r27, lbl_807F3760@l
    mr r30, r3
    addi r31, r27, 0x54
    bge lbl_fn_80627900_000030D0
    clrlslwi r26, r3, 24, 2
    addis r0, r31, 0x3
    add r3, r0, r26
    lwz r0, -0x75e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80627900_00002FC8
    b lbl_fn_80627900_000030D0
lbl_fn_80627900_00002FC8:
    bl fn_80628270
    addis r4, r31, 0x3
    clrlslwi r0, r30, 24, 4
    add r3, r4, r0
    lhz r0, -0x7668(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80627900_000030B4
    li r28, 0x0
    sth r28, -0x766c(r3)
    add r29, r4, r26
    sth r28, -0x766a(r3)
    sth r28, -0x7668(r3)
    sth r28, -0x7666(r3)
    stw r28, -0x7674(r3)
    stw r28, -0x7670(r3)
    lwz r3, -0x75e4(r29)
    bl fn_80628300
    addis r4, r31, 0x3
    clrlslwi r0, r30, 24, 1
    add r3, r4, r26
    stw r28, -0x75e4(r29)
    add r4, r4, r0
    mr r7, r31
    stw r28, -0x75c0(r3)
    addis r3, r7, 0x3
    li r6, 0x0
    sth r28, -0x759c(r4)
    lbz r4, -0x7579(r3)
    b lbl_fn_80627900_0000305C
    nop
lbl_fn_80627900_00003040:
    clrlwi r3, r6, 24
    addis r3, r3, 0x3
    subi r0, r3, 0x7582
    lbzx r0, r7, r0
    cmplw r30, r0
    beq lbl_fn_80627900_00003068
    addi r6, r6, 0x1
lbl_fn_80627900_0000305C:
    clrlwi r0, r6, 24
    cmplw r0, r4
    blt lbl_fn_80627900_00003040
lbl_fn_80627900_00003068:
    addis r4, r7, 0x3
    b lbl_fn_80627900_0000308C
lbl_fn_80627900_00003070:
    clrlwi r3, r6, 24
    addi r6, r6, 0x1
    addis r3, r3, 0x3
    subi r3, r3, 0x7582
    add r3, r7, r3
    lbz r0, 0x1(r3)
    stb r0, 0x0(r3)
lbl_fn_80627900_0000308C:
    lbz r3, -0x7579(r4)
    clrlwi r5, r6, 24
    subi r0, r3, 0x1
    cmpw r5, r0
    blt lbl_fn_80627900_00003070
    addis r4, r31, 0x3
    lbz r3, -0x7579(r4)
    subi r0, r3, 0x1
    stb r0, -0x7579(r4)
    b lbl_fn_80627900_000030CC
lbl_fn_80627900_000030B4:
    lis r3, 0x1
    lis r4, lbl_807B3298@ha
    subi r0, r3, 0x8
    clrlwi r3, r0, 16
    addi r4, r4, lbl_807B3298@l
    bl fn_806282C0
lbl_fn_80627900_000030CC:
    bl fn_80628240
lbl_fn_80627900_000030D0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80627A70(void)
{
    nofralloc
    lis r3, lbl_807F3760@ha
    li r0, 0x0
    addi r3, r3, lbl_807F3760@l
    addis r3, r3, 0x3
    stw r0, -0x77c8(r3)
    stw r0, -0x77c4(r3)
    stw r0, -0x77c0(r3)
    stw r0, -0x77a0(r3)
    stw r0, -0x7780(r3)
    stw r0, -0x7760(r3)
    stw r0, -0x7740(r3)
    stw r0, -0x77bc(r3)
    stw r0, -0x779c(r3)
    stw r0, -0x777c(r3)
    stw r0, -0x775c(r3)
    stw r0, -0x773c(r3)
    stw r0, -0x77b8(r3)
    stw r0, -0x7798(r3)
    stw r0, -0x7778(r3)
    stw r0, -0x7758(r3)
    stw r0, -0x7738(r3)
    stw r0, -0x77b4(r3)
    stw r0, -0x7794(r3)
    stw r0, -0x7774(r3)
    stw r0, -0x7754(r3)
    stw r0, -0x7734(r3)
    stw r0, -0x77b0(r3)
    stw r0, -0x7790(r3)
    stw r0, -0x7770(r3)
    stw r0, -0x7750(r3)
    stw r0, -0x7730(r3)
    stw r0, -0x77ac(r3)
    stw r0, -0x778c(r3)
    stw r0, -0x776c(r3)
    stw r0, -0x774c(r3)
    stw r0, -0x772c(r3)
    stw r0, -0x77a8(r3)
    stw r0, -0x7788(r3)
    stw r0, -0x7768(r3)
    stw r0, -0x7748(r3)
    stw r0, -0x7728(r3)
    stw r0, -0x77a4(r3)
    stw r0, -0x7784(r3)
    stw r0, -0x7764(r3)
    stw r0, -0x7744(r3)
    stw r0, -0x7724(r3)
    blr
}

asm void fn_80627B30(void)
{
    nofralloc
    lis r3, lbl_807F3760@ha
    addi r3, r3, lbl_807F3760@l
    addis r3, r3, 0x3
    lwz r3, -0x77d8(r3)
    blr
}

asm void fn_80627B50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r29, r4
    mr r31, r5
    bl fn_80628230
    cmpwi r29, 0x0
    mr r28, r3
    li r30, 0x0
    bgt lbl_fn_80627B50_00003208
    li r29, 0x1
lbl_fn_80627B50_00003208:
    neg r0, r31
    or r0, r0, r31
    srawi r0, r0, 31
    and r31, r29, r0
    bl fn_80628270
    lis r4, lbl_807F3760@ha
    lis r3, 0x8000
    addi r4, r4, lbl_807F3760@l
    addis r5, r4, 0x3
    subi r4, r3, 0x1
    lwz r3, -0x77c8(r5)
    lwz r0, -0x77c4(r5)
    subf r3, r3, r0
    subf r0, r3, r4
    cmpw r0, r29
    ble lbl_fn_80627B50_0000324C
    add r4, r29, r3
lbl_fn_80627B50_0000324C:
    cmpwi r27, 0x0
    beq lbl_fn_80627B50_00003260
    cmpwi r27, 0x1
    beq lbl_fn_80627B50_00003280
    b lbl_fn_80627B50_000032A0
lbl_fn_80627B50_00003260:
    lis r3, lbl_807F3760@ha
    clrlslwi r5, r28, 24, 2
    addi r3, r3, lbl_807F3760@l
    addis r0, r3, 0x3
    add r3, r0, r5
    stw r31, -0x7780(r3)
    stw r4, -0x77a0(r3)
    b lbl_fn_80627B50_000032A4
lbl_fn_80627B50_00003280:
    lis r3, lbl_807F3760@ha
    clrlslwi r5, r28, 24, 2
    addi r3, r3, lbl_807F3760@l
    addis r0, r3, 0x3
    add r3, r0, r5
    stw r31, -0x7740(r3)
    stw r4, -0x7760(r3)
    b lbl_fn_80627B50_000032A4
lbl_fn_80627B50_000032A0:
    li r30, 0x1
lbl_fn_80627B50_000032A4:
    cmpwi r30, 0x0
    bne lbl_fn_80627B50_00003300
    cmpwi r29, 0x0
    ble lbl_fn_80627B50_00003300
    lis r3, lbl_807F3760@ha
    addi r3, r3, lbl_807F3760@l
    addis r3, r3, 0x3
    lwz r4, -0x77c4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80627B50_000032E0
    lwz r0, -0x77c8(r3)
    cmpw r29, r0
    bge lbl_fn_80627B50_00003300
    cmpwi r0, 0x0
    ble lbl_fn_80627B50_00003300
lbl_fn_80627B50_000032E0:
    lis r3, lbl_807F3760@ha
    addi r3, r3, lbl_807F3760@l
    addis r3, r3, 0x3
    lwz r0, -0x77c8(r3)
    subf r0, r0, r4
    add r0, r29, r0
    stw r0, -0x77c4(r3)
    stw r29, -0x77c8(r3)
lbl_fn_80627B50_00003300:
    bl fn_80628240
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80627CA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80628230
    cmpwi r31, 0x0
    beq lbl_fn_80627CA0_0000334C
    cmpwi r31, 0x1
    beq lbl_fn_80627CA0_00003370
    b lbl_fn_80627CA0_00003390
lbl_fn_80627CA0_0000334C:
    lis r4, lbl_807F3760@ha
    clrlslwi r3, r3, 24, 2
    addi r4, r4, lbl_807F3760@l
    li r5, 0x0
    addis r0, r4, 0x3
    add r3, r0, r3
    stw r5, -0x7780(r3)
    stw r5, -0x77a0(r3)
    b lbl_fn_80627CA0_00003390
lbl_fn_80627CA0_00003370:
    lis r4, lbl_807F3760@ha
    clrlslwi r3, r3, 24, 2
    addi r4, r4, lbl_807F3760@l
    li r5, 0x0
    addis r0, r4, 0x3
    add r3, r0, r3
    stw r5, -0x7740(r3)
    stw r5, -0x7760(r3)
lbl_fn_80627CA0_00003390:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80627D30(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80627D50(void)
{
    nofralloc
    lwz r6, 0x0(r3)
    li r7, 0x0
    b lbl_fn_80627D50_000033E8
    nop
lbl_fn_80627D50_000033E0:
    lwz r6, 0x0(r6)
    addi r7, r7, 0x1
lbl_fn_80627D50_000033E8:
    cmpwi r6, 0x0
    beq lbl_fn_80627D50_000033FC
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    ble lbl_fn_80627D50_000033E0
lbl_fn_80627D50_000033FC:
    mr r8, r4
    li r0, 0x0
    b lbl_fn_80627D50_00003428
lbl_fn_80627D50_00003408:
    lwz r9, 0xc(r6)
    subf. r5, r8, r9
    stw r5, 0xc(r6)
    bgt lbl_fn_80627D50_00003420
    stw r0, 0xc(r6)
    addi r7, r7, 0x1
lbl_fn_80627D50_00003420:
    subf r8, r9, r8
    lwz r6, 0x0(r6)
lbl_fn_80627D50_00003428:
    cmpwi r6, 0x0
    beq lbl_fn_80627D50_00003438
    cmpwi r8, 0x0
    bgt lbl_fn_80627D50_00003408
lbl_fn_80627D50_00003438:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80627D50_00003458
    subf. r0, r4, r0
    stw r0, 0x8(r3)
    bge lbl_fn_80627D50_00003458
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_fn_80627D50_00003458:
    mr r3, r7
    blr
}

asm void fn_80627DE0(void)
{
    nofralloc
    lwz r5, 0xc(r4)
    cmpwi r5, 0x0
    bltlr
    lwz r0, 0x8(r3)
    cmpw r5, r0
    blt lbl_fn_80627DE0_000034C8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80627DE0_0000348C
    stw r4, 0x0(r3)
    b lbl_fn_80627DE0_000034A4
lbl_fn_80627DE0_0000348C:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80627DE0_0000349C
    stw r4, 0x0(r5)
lbl_fn_80627DE0_0000349C:
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
lbl_fn_80627DE0_000034A4:
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r4, 0x4(r3)
    lwz r0, 0x8(r3)
    lwz r5, 0xc(r4)
    subf r0, r0, r5
    stw r0, 0xc(r4)
    stw r5, 0x8(r3)
    b lbl_fn_80627DE0_00003540
lbl_fn_80627DE0_000034C8:
    lwz r6, 0x0(r3)
    b lbl_fn_80627DE0_000034E8
lbl_fn_80627DE0_000034D0:
    cmpwi r5, 0x0
    ble lbl_fn_80627DE0_000034E4
    lwz r0, 0xc(r4)
    subf r0, r5, r0
    stw r0, 0xc(r4)
lbl_fn_80627DE0_000034E4:
    lwz r6, 0x0(r6)
lbl_fn_80627DE0_000034E8:
    lwz r5, 0xc(r6)
    lwz r0, 0xc(r4)
    cmpw r0, r5
    bgt lbl_fn_80627DE0_000034D0
    lwz r0, 0x0(r3)
    cmplw r6, r0
    bne lbl_fn_80627DE0_00003518
    stw r0, 0x0(r4)
    lwz r5, 0x0(r3)
    stw r4, 0x4(r5)
    stw r4, 0x0(r3)
    b lbl_fn_80627DE0_00003530
lbl_fn_80627DE0_00003518:
    lwz r3, 0x4(r6)
    stw r4, 0x0(r3)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
    stw r4, 0x4(r6)
    stw r6, 0x0(r4)
lbl_fn_80627DE0_00003530:
    lwz r3, 0xc(r4)
    lwz r0, 0xc(r6)
    subf r0, r3, r0
    stw r0, 0xc(r6)
lbl_fn_80627DE0_00003540:
    li r0, 0x1
    stb r0, 0x16(r4)
    blr
}

asm void fn_80627ED0(void)
{
    nofralloc
    cmpwi r4, 0x0
    beqlr
    lbz r0, 0x16(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80627ED0_00003574
    blr
lbl_fn_80627ED0_00003574:
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_80627ED0_00003594
    lwz r5, 0xc(r6)
    lwz r0, 0xc(r4)
    add r0, r5, r0
    stw r0, 0xc(r6)
    b lbl_fn_80627ED0_000035A4
lbl_fn_80627ED0_00003594:
    lwz r5, 0xc(r4)
    lwz r0, 0x8(r3)
    subf r0, r5, r0
    stw r0, 0x8(r3)
lbl_fn_80627ED0_000035A4:
    lwz r0, 0x0(r3)
    cmplw r0, r4
    bne lbl_fn_80627ED0_000035E0
    lwz r5, 0x0(r4)
    stw r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80627ED0_000035C8
    li r0, 0x0
    stw r0, 0x4(r5)
lbl_fn_80627ED0_000035C8:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_fn_80627ED0_00003658
    li r0, 0x0
    stw r0, 0x4(r3)
    b lbl_fn_80627ED0_00003658
lbl_fn_80627ED0_000035E0:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_fn_80627ED0_00003608
    lwz r5, 0x4(r4)
    stw r5, 0x4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80627ED0_00003658
    li r0, 0x0
    stw r0, 0x0(r5)
    b lbl_fn_80627ED0_00003658
lbl_fn_80627ED0_00003608:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bnelr
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    b lbl_fn_80627ED0_00003630
    blr
lbl_fn_80627ED0_00003630:
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x0(r3)
    cmplw r0, r4
    bnelr
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    b lbl_fn_80627ED0_00003658
    blr
lbl_fn_80627ED0_00003658:
    li r3, 0x0
    lis r0, 0x8000
    stw r3, 0x4(r4)
    stw r3, 0x0(r4)
    stw r0, 0xc(r4)
    stb r3, 0x16(r4)
    blr
}
