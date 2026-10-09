#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80680CF8(void);
extern void fn_80680D18(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_8068B1F8(void);
extern void fn_8068B1FC(void);
extern void fn_806A426C(void);
extern void fn_806A4270(void);
extern void fn_806D57A0(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5C90(void);
extern void fn_806D5E40(void);
extern void fn_806D6140(void);
extern void fn_806D62F0(void);
extern void fn_806D64B0(void);
extern void fn_806D6560(void);
extern void fn_806D6610(void);
extern void fn_806D7A90(void);
extern void fn_806D7AC0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7B30(void);
extern void fn_806D7C40(void);
extern void fn_806D7D60(void);
extern void fn_806D7EE0(void);
extern void fn_806D8060(void);
extern void fn_806D8E30(void);
extern void fn_806D8F10(void);
extern void fn_806D8F30(void);
extern void fn_806D8F80(void);
extern void fn_806D9590(void);
extern void fn_806F1D80(void);
extern void fn_806FBDB0(void);
extern void fn_806FCFE0(void);
extern void fn_806FDFB0(void);
extern void fn_806FE060(void);
extern void fn_806FE070(void);
extern void fn_806FE090(void);
extern void fn_806FE0F0(void);
extern void fn_806FE5C0(void);
extern void fn_806FE740(void);
extern void fn_806FE760(void);
extern void fn_806FE840(void);
extern void fn_806FE900(void);
extern void fn_806FEA20(void);
extern void fn_806FEAA0(void);
extern void fn_806FEBD0(void);
extern void fn_806FED20(void);
extern void fn_806FED30(void);
extern void fn_80701470(void);
extern void fn_80701700(void);
extern void fn_80701870(void);
extern void fn_80703900(void);
extern void fn_80703A10(void);
extern void fn_80703C50(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B850[];
extern u8 lbl_8076B858[];
extern u8 lbl_807BB380[];
extern u8 lbl_807C5380[];
extern u8 lbl_807C5DC4[];
extern u8 lbl_807C5DCC[];
extern u8 lbl_807C5DD8[];
extern u8 lbl_807C5DE0[];
extern u8 lbl_807C5DF4[];
extern u8 lbl_807C5DF8[];
extern u8 lbl_80860DD0[];
extern u8 lbl_80862AF8[];
extern u8 lbl_80862B00[];
extern u8 lbl_80862B04[];

/* Small data declarations */

/* Function declarations */
void pad_03_806FF128_text(void);
void fn_806FF130(void);
void fn_806FF3B0(void);
void fn_806FF3F0(void);
void fn_806FF460(void);
void fn_806FF490(void);
void fn_806FF560(void);
void fn_806FF570(void);
void fn_806FF580(void);
void fn_806FF590(void);
void fn_806FF5A0(void);
void fn_806FF5B0(void);
void fn_806FF5D0(void);
void fn_806FF820(void);
void fn_806FF920(void);
void fn_806FFA10(void);
void fn_806FFA60(void);
void fn_806FFBD0(void);
void fn_806FFBE0(void);
void fn_806FFCA0(void);
void fn_806FFD10(void);
void fn_806FFD80(void);
void fn_806FFDD0(void);
void fn_806FFE10(void);
void fn_806FFE50(void);
void fn_806FFEA0(void);
void fn_806FFEB0(void);
void fn_806FFEC0(void);
void fn_806FFF50(void);
void fn_806FFF60(void);
void fn_80700100(void);
void fn_80700190(void);
void fn_80700290(void);
void fn_80700330(void);
void fn_807003D0(void);
void fn_80700550(void);
void fn_807005E0(void);
void fn_80700680(void);
void fn_80700690(void);
void fn_807006C0(void);
void fn_807007A0(void);
void fn_80700830(void);
void fn_80700890(void);
void fn_807008D0(void);
void fn_80700A00(void);
void fn_80700BA0(void);
void fn_80700F50(void);

asm void pad_03_806FF128_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806FF130(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_24
    lbz r0, 0x0(r4)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    extsb. r0, r0
    li r27, 0x0
    beq lbl_fn_806FF130_00000270
    mr r3, r30
    mr r4, r31
    bl fn_80700890
    cmpwi r3, 0x0
    blt lbl_fn_806FF130_00000270
    lis r28, lbl_807C5DCC@ha
    mr r26, r30
    add r30, r30, r3
    subf r31, r3, r31
    addi r3, r28, lbl_807C5DCC@l
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r28, lbl_807C5DCC@l
    bl fn_8068B1F8
    cmpwi r3, 0x0
    bne lbl_fn_806FF130_00000270
    cmpwi r31, 0x1
    blt lbl_fn_806FF130_00000270
    lbz r4, 0x0(r30)
    addi r30, r30, 0x1
    subi r31, r31, 0x1
    rlwinm r0, r4, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_806FF130_000000A4
    li r27, 0x1
    xori r4, r4, 0x80
lbl_fn_806FF130_000000A4:
    cmplwi r4, 0x7
    bgt lbl_fn_806FF130_00000270
    cmpwi r27, 0x1
    bne lbl_fn_806FF130_000000D0
    li r0, 0xff
    lbz r3, 0x28(r29)
    slw r0, r0, r4
    clrlwi r0, r0, 24
    or r0, r3, r0
    stb r0, 0x28(r29)
    b lbl_fn_806FF130_000000E8
lbl_fn_806FF130_000000D0:
    li r0, 0x1
    lbz r3, 0x28(r29)
    slw r0, r0, r4
    clrlwi r0, r0, 24
    or r0, r3, r0
    stb r0, 0x28(r29)
lbl_fn_806FF130_000000E8:
    cmpwi r31, 0x1
    bge lbl_fn_806FF130_000000F4
    b lbl_fn_806FF130_00000270
lbl_fn_806FF130_000000F4:
    lis r28, lbl_807C5DC4@ha
    b lbl_fn_806FF130_00000268
lbl_fn_806FF130_000000FC:
    lbz r25, 0x0(r30)
    addi r30, r30, 0x1
    subi r31, r31, 0x1
    extsb r25, r25
    cmplwi r25, 0x2
    ble lbl_fn_806FF130_00000244
    b lbl_fn_806FF130_00000270
    b lbl_fn_806FF130_00000244
lbl_fn_806FF130_0000011C:
    mr r3, r30
    mr r4, r31
    bl fn_80700890
    cmpwi r3, 0x0
    blt lbl_fn_806FF130_00000270
    cmpwi r25, 0x0
    mr r27, r30
    add r30, r30, r3
    subf r31, r3, r31
    bne lbl_fn_806FF130_000001A4
    mr r3, r30
    mr r4, r31
    bl fn_80700890
    cmpwi r3, 0x0
    blt lbl_fn_806FF130_00000270
    mr r26, r30
    add r30, r30, r3
    subf r31, r3, r31
    mr r3, r27
    bl fn_806F1D80
    cmpwi r3, 0x0
    bne lbl_fn_806FF130_00000244
    mr r4, r27
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x10(r1)
    mr r4, r26
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x14(r1)
    addi r4, r1, 0x10
    lwz r3, 0x18(r29)
    bl fn_806D64B0
    b lbl_fn_806FF130_00000244
lbl_fn_806FF130_000001A4:
    cmpwi r31, 0x1
    blt lbl_fn_806FF130_00000270
    lbz r24, 0x0(r30)
    addi r30, r30, 0x1
    subi r31, r31, 0x1
    extsb r24, r24
    b lbl_fn_806FF130_00000228
lbl_fn_806FF130_000001C0:
    mr r3, r30
    mr r4, r31
    bl fn_80700890
    cmpwi r3, 0x0
    blt lbl_fn_806FF130_00000270
    mr r26, r30
    mr r5, r27
    mr r6, r24
    add r30, r30, r3
    subf r31, r3, r31
    addi r3, r1, 0x18
    addi r4, r28, lbl_807C5DC4@l
    crclr 6
    bl sprintf
    addi r4, r1, 0x18
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x8(r1)
    mr r4, r26
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0xc(r1)
    addi r4, r1, 0x8
    lwz r3, 0x18(r29)
    bl fn_806D64B0
    addi r24, r24, 0x1
lbl_fn_806FF130_00000228:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_806FF130_000001C0
    cmpwi r31, 0x0
    ble lbl_fn_806FF130_00000244
    addi r30, r30, 0x1
    subi r31, r31, 0x1
lbl_fn_806FF130_00000244:
    lbz r0, 0x0(r30)
    extsb r0, r0
    cmpwi cr1, r0, 0x0
    bne cr1, lbl_fn_806FF130_0000011C
    cmpwi r31, 0x0
    ble lbl_fn_806FF130_00000268
    bne cr1, lbl_fn_806FF130_00000270
    addi r30, r30, 0x1
    subi r31, r31, 0x1
lbl_fn_806FF130_00000268:
    cmpwi r31, 0x0
    bgt lbl_fn_806FF130_000000FC
lbl_fn_806FF130_00000270:
    addi r11, r1, 0xc0
    bl _restgpr_24
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_806FF3B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x0
    lwz r4, 0x0(r31)
    bl fn_80700830
    lwz r4, 0x4(r31)
    li r3, 0x0
    bl fn_80700830
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FF3F0(void)
{
    nofralloc
    lis r6, lbl_807BB380@ha
    lis r5, 0x9cd0
    addi r6, r6, lbl_807BB380@l
    lwz r7, 0x0(r3)
    lwz r6, 0x38(r6)
    subi r5, r5, 0x6ce7
    li r3, 0x0
    b lbl_fn_806FF3F0_0000031C
lbl_fn_806FF3F0_000002E8:
    extsb r8, r8
    li r9, 0x1
    cmplwi r8, 0xff
    bgt lbl_fn_806FF3F0_000002FC
    li r9, 0x0
lbl_fn_806FF3F0_000002FC:
    mullw r0, r3, r5
    cmpwi r9, 0x0
    beq lbl_fn_806FF3F0_0000030C
    b lbl_fn_806FF3F0_00000314
lbl_fn_806FF3F0_0000030C:
    lwz r3, 0x10(r6)
    lbzx r8, r3, r8
lbl_fn_806FF3F0_00000314:
    add r3, r0, r8
    addi r7, r7, 0x1
lbl_fn_806FF3F0_0000031C:
    lbz r8, 0x0(r7)
    extsb. r0, r8
    bne lbl_fn_806FF3F0_000002E8
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    blr
}

asm void fn_806FF460(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806FF460_00000350
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    bne lbl_fn_806FF460_00000358
lbl_fn_806FF460_00000350:
    li r3, 0x1
    blr
lbl_fn_806FF460_00000358:
    b fn_8068B1FC
    blr
}

asm void fn_806FF490(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x2c
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806FF490_000003A4
    li r3, 0x0
    b lbl_fn_806FF490_00000414
lbl_fn_806FF490_000003A4:
    lis r6, fn_806FF3F0@ha
    lis r7, fn_806FF460@ha
    lis r8, fn_806FF3B0@ha
    li r3, 0x8
    addi r6, r6, fn_806FF3F0@l
    addi r7, r7, fn_806FF460@l
    addi r8, r8, fn_806FF3B0@l
    li r4, 0x8
    li r5, 0x4
    bl fn_806D62F0
    cmpwi r3, 0x0
    stw r3, 0x18(r31)
    bne lbl_fn_806FF490_000003E8
    mr r3, r31
    bl fn_806D7AC0
    li r3, 0x0
    b lbl_fn_806FF490_00000414
lbl_fn_806FF490_000003E8:
    li r0, 0x0
    stb r0, 0x14(r31)
    mr r3, r31
    stb r0, 0x15(r31)
    stw r0, 0x24(r31)
    stw r0, 0x1c(r31)
    stw r0, 0x10(r31)
    stw r29, 0x0(r31)
    sth r30, 0x4(r31)
    stw r0, 0x8(r31)
    sth r0, 0xc(r31)
lbl_fn_806FF490_00000414:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FF560(void)
{
    nofralloc
    stb r4, 0x15(r3)
    blr
}

asm void fn_806FF570(void)
{
    nofralloc
    stw r4, 0x8(r3)
    sth r5, 0xc(r3)
    blr
}

asm void fn_806FF580(void)
{
    nofralloc
    stw r4, 0x10(r3)
    blr
}

asm void fn_806FF590(void)
{
    nofralloc
    stb r4, 0x14(r3)
    blr
}

asm void fn_806FF5A0(void)
{
    nofralloc
    lbz r3, 0x14(r3)
    blr
}

asm void fn_806FF5B0(void)
{
    nofralloc
    lis r4, lbl_80862AF8@ha
    lwz r0, lbl_80862AF8@l(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_806FF5D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806FF5D0_00000500
    cmpwi r4, 0x1
    beq lbl_fn_806FF5D0_000005B4
    cmpwi r4, 0x2
    beq lbl_fn_806FF5D0_000005F8
    cmpwi r4, 0x3
    beq lbl_fn_806FF5D0_00000630
    cmpwi r4, 0x5
    beq lbl_fn_806FF5D0_0000067C
    cmpwi r4, 0x6
    beq lbl_fn_806FF5D0_0000069C
    b lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_00000500:
    lwz r12, 0x84c(r31)
    mr r3, r31
    lwz r6, 0x854(r6)
    li r4, 0x0
    mtctr r12
    bctrl
    lbz r3, 0x14(r30)
    clrlwi. r0, r3, 30
    beq lbl_fn_806FF5D0_0000052C
    rlwinm. r0, r3, 0, 25, 25
    bne lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_0000052C:
    andi. r0, r3, 0x2c
    bne lbl_fn_806FF5D0_000006A8
    lwz r0, 0x840(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FF5D0_000006A8
    lbz r0, 0x15(r30)
    clrlwi. r0, r0, 31
    beq lbl_fn_806FF5D0_00000574
    lwz r0, 0x60(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806FF5D0_00000564
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FF5D0_0000056C
lbl_fn_806FF5D0_00000564:
    li r6, 0x1
    b lbl_fn_806FF5D0_00000578
lbl_fn_806FF5D0_0000056C:
    li r6, 0x0
    b lbl_fn_806FF5D0_00000578
lbl_fn_806FF5D0_00000574:
    li r6, 0x2
lbl_fn_806FF5D0_00000578:
    lhz r0, 0x7d0(r29)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_806FF5D0_0000059C
    mr r3, r31
    mr r4, r30
    li r5, 0x0
    li r7, 0x1
    bl fn_806FE0F0
    b lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_0000059C:
    mr r3, r31
    mr r4, r30
    li r5, 0x0
    li r7, 0x0
    bl fn_806FE0F0
    b lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_000005B4:
    lbz r0, 0x14(r5)
    andi. r0, r0, 0x43
    bne lbl_fn_806FF5D0_000005DC
    lwz r12, 0x84c(r31)
    mr r3, r31
    lwz r6, 0x854(r6)
    li r4, 0x2
    mtctr r12
    bctrl
    b lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_000005DC:
    lwz r12, 0x84c(r31)
    mr r3, r31
    lwz r6, 0x854(r6)
    li r4, 0x1
    mtctr r12
    bctrl
    b lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_000005F8:
    lbz r0, 0x14(r5)
    andi. r0, r0, 0x2c
    beq lbl_fn_806FF5D0_00000610
    mr r3, r31
    mr r4, r30
    bl fn_806FE760
lbl_fn_806FF5D0_00000610:
    lwz r12, 0x84c(r31)
    mr r3, r31
    mr r5, r30
    lwz r6, 0x854(r31)
    li r4, 0x3
    mtctr r12
    bctrl
    b lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_00000630:
    lwz r0, 0x83c(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806FF5D0_00000640
    bl fn_80701700
lbl_fn_806FF5D0_00000640:
    lwz r3, 0x4(r29)
    bl fn_806D58F0
    cmpwi r3, 0x0
    beq lbl_fn_806FF5D0_0000065C
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_0000065C:
    lwz r12, 0x84c(r31)
    mr r3, r31
    lwz r6, 0x854(r31)
    li r4, 0x4
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_0000067C:
    lwz r12, 0x84c(r31)
    mr r3, r31
    lwz r6, 0x854(r6)
    li r4, 0x5
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806FF5D0_000006A8
lbl_fn_806FF5D0_0000069C:
    lwz r4, 0x704(r6)
    mr r3, r31
    bl fn_806FE060
lbl_fn_806FF5D0_000006A8:
    cmpwi r30, 0x0
    beq lbl_fn_806FF5D0_000006D8
    lwz r3, 0x0(r30)
    lwz r0, 0x844(r31)
    cmplw r3, r0
    bne lbl_fn_806FF5D0_000006D8
    lhz r3, 0x4(r30)
    lhz r0, 0x848(r31)
    cmplw r3, r0
    bne lbl_fn_806FF5D0_000006D8
    li r0, 0x0
    stw r0, 0x844(r31)
lbl_fn_806FF5D0_000006D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FF820(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    stw r30, 0x8(r1)
    mr r30, r5
    beq lbl_fn_806FF820_00000738
    cmpwi r4, 0x0
    beq lbl_fn_806FF820_00000754
    cmpwi r4, 0x2
    beq lbl_fn_806FF820_00000770
    cmpwi r4, 0x3
    beq lbl_fn_806FF820_0000078C
    b lbl_fn_806FF820_000007A8
lbl_fn_806FF820_00000738:
    lwz r12, 0x84c(r31)
    mr r3, r31
    lwz r6, 0x854(r6)
    li r4, 0x2
    mtctr r12
    bctrl
    b lbl_fn_806FF820_000007A8
lbl_fn_806FF820_00000754:
    lwz r12, 0x84c(r31)
    mr r3, r31
    lwz r6, 0x854(r6)
    li r4, 0x1
    mtctr r12
    bctrl
    b lbl_fn_806FF820_000007A8
lbl_fn_806FF820_00000770:
    lwz r12, 0x84c(r31)
    mr r3, r31
    lwz r6, 0x854(r6)
    li r4, 0x4
    mtctr r12
    bctrl
    b lbl_fn_806FF820_000007A8
lbl_fn_806FF820_0000078C:
    lwz r12, 0x84c(r31)
    mr r3, r31
    lwz r6, 0x854(r6)
    li r4, 0x6
    mtctr r12
    bctrl
    b lbl_fn_806FF820_000007D8
lbl_fn_806FF820_000007A8:
    cmpwi r30, 0x0
    beq lbl_fn_806FF820_000007D8
    lwz r3, 0x0(r30)
    lwz r0, 0x844(r31)
    cmplw r3, r0
    bne lbl_fn_806FF820_000007D8
    lhz r3, 0x4(r30)
    lhz r0, 0x848(r31)
    cmplw r3, r0
    bne lbl_fn_806FF820_000007D8
    li r0, 0x0
    stw r0, 0x844(r31)
lbl_fn_806FF820_000007D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FF920(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    cmpwi r9, 0x0
    lwz r30, 0x38(r1)
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    mr r29, r10
    bne lbl_fn_806FF920_00000850
    lis r3, lbl_80860DD0@ha
    lwz r0, lbl_80860DD0@l(r3)
    cmpwi r0, 0x1
    beq lbl_fn_806FF920_00000850
    li r3, 0x0
    b lbl_fn_806FF920_000008CC
lbl_fn_806FF920_00000850:
    li r3, 0x858
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806FF920_0000086C
    li r3, 0x0
    b lbl_fn_806FF920_000008CC
lbl_fn_806FF920_0000086C:
    stw r29, 0x84c(r3)
    li r0, 0x0
    lis r9, fn_806FF5D0@ha
    mr r4, r22
    stw r0, 0x850(r3)
    mr r5, r23
    mr r6, r24
    mr r7, r25
    stw r30, 0x854(r3)
    mr r8, r28
    mr r10, r31
    addi r9, r9, fn_806FF5D0@l
    stw r0, 0x840(r3)
    addi r3, r3, 0x60
    bl fn_807008D0
    lis r7, fn_806FF820@ha
    mr r3, r31
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r8, r31
    addi r7, r7, fn_806FF820@l
    bl fn_806FDFB0
    mr r3, r31
lbl_fn_806FF920_000008CC:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806FFA10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_80701870
    mr r3, r31
    bl fn_806FE090
    lwz r0, 0x850(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806FFA10_0000091C
    bl fn_806FBDB0
lbl_fn_806FFA10_0000091C:
    mr r3, r31
    bl fn_806D7AC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FFA60(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_20
    li r0, 0x20
    mr r27, r4
    mr r29, r8
    mr r26, r3
    mr r28, r7
    mr r30, r9
    mr r31, r10
    addi r8, r1, 0x4
    li r4, 0x0
    mtctr r0
    nop
lbl_fn_806FFA60_00000978:
    stw r4, 0x4(r8)
    stwu r4, 0x8(r8)
    bdnz lbl_fn_806FFA60_00000978
    cmpwi r7, 0x28
    li r21, 0x0
    ble lbl_fn_806FFA60_00000998
    li r3, 0x6
    b lbl_fn_806FFA60_00000A84
lbl_fn_806FFA60_00000998:
    li r0, 0x0
    lis r23, lbl_807C5380@ha
    stw r5, 0x83c(r3)
    mr r25, r6
    addi r23, r23, lbl_807C5380@l
    li r20, 0x0
    stw r0, 0x54(r3)
    lis r24, lbl_807C5DD8@ha
    b lbl_fn_806FFA60_00000A10
lbl_fn_806FFA60_000009BC:
    lbz r0, 0x0(r25)
    slwi r0, r0, 2
    lwzx r22, r23, r0
    mr r3, r22
    bl strlen
    add r3, r21, r3
    addi r0, r3, 0x1
    cmpwi r0, 0x100
    bge lbl_fn_806FFA60_00000A18
    addi r3, r1, 0x8
    mr r5, r22
    add r3, r3, r21
    addi r4, r24, lbl_807C5DD8@l
    crclr 6
    bl sprintf
    lbz r4, 0x0(r25)
    add r21, r21, r3
    mr r3, r26
    bl fn_806FE740
    addi r20, r20, 0x1
    addi r25, r25, 0x1
lbl_fn_806FFA60_00000A10:
    cmpw r20, r28
    blt lbl_fn_806FFA60_000009BC
lbl_fn_806FFA60_00000A18:
    mr r5, r29
    mr r6, r30
    mr r7, r31
    addi r3, r26, 0x60
    addi r4, r1, 0x8
    bl fn_80700F50
    cmpwi r3, 0x0
    beq lbl_fn_806FFA60_00000A3C
    b lbl_fn_806FFA60_00000A84
lbl_fn_806FFA60_00000A3C:
    cmpwi r27, 0x0
    bne lbl_fn_806FFA60_00000A84
    b lbl_fn_806FFA60_00000A64
lbl_fn_806FFA60_00000A48:
    li r3, 0xa
    bl fn_806D8F80
    bl fn_806FCFE0
    mr r3, r26
    bl fn_806FE5C0
    addi r3, r26, 0x60
    bl fn_80703C50
lbl_fn_806FFA60_00000A64:
    lwz r0, 0x60(r26)
    cmpwi r0, 0x3
    beq lbl_fn_806FFA60_00000A48
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    ble lbl_fn_806FFA60_00000A84
    cmpwi r3, 0x0
    beq lbl_fn_806FFA60_00000A48
lbl_fn_806FFA60_00000A84:
    addi r11, r1, 0x140
    bl _restgpr_20
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_806FFBD0(void)
{
    nofralloc
    mr r10, r9
    li r9, 0x80
    b fn_806FFA60
}

asm void fn_806FFBE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    li r31, 0x0
    addi r3, r3, 0x60
    bl fn_80701700
    mr r3, r27
    bl fn_806FE070
    lwz r6, 0x0(r27)
    mr r4, r29
    mr r5, r30
    addi r3, r27, 0x60
    bl fn_80701470
    cmpwi r28, 0x0
    bne lbl_fn_806FFBE0_00000B50
    b lbl_fn_806FFBE0_00000B30
lbl_fn_806FFBE0_00000B10:
    li r3, 0xa
    bl fn_806D8F80
    bl fn_806FCFE0
    mr r3, r27
    bl fn_806FE5C0
    addi r3, r27, 0x60
    bl fn_80703C50
    mr r31, r3
lbl_fn_806FFBE0_00000B30:
    lwz r0, 0x60(r27)
    cmpwi r0, 0x0
    beq lbl_fn_806FFBE0_00000B10
    lwz r0, 0x10(r27)
    cmpwi r0, 0x0
    ble lbl_fn_806FFBE0_00000B50
    cmpwi r31, 0x0
    beq lbl_fn_806FFBE0_00000B10
lbl_fn_806FFBE0_00000B50:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FFCA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r3, r5
    mr r29, r6
    mr r30, r7
    bl fn_806A4270
    mr r31, r3
    mr r3, r28
    bl fn_806D7EE0
    mr r4, r3
    mr r6, r29
    mr r7, r30
    addi r3, r27, 0x60
    clrlwi r5, r31, 16
    bl fn_80703900
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FFD10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r5
    bl fn_806A4270
    mr r31, r3
    mr r3, r29
    bl fn_806D7EE0
    mr r4, r3
    mr r6, r30
    addi r3, r28, 0x60
    clrlwi r5, r31, 16
    bl fn_80703A10
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FFD80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_80700550
    cmpwi r3, -0x1
    beq lbl_fn_806FFD80_00000C88
    mr r4, r3
    addi r3, r31, 0x60
    bl fn_807005E0
lbl_fn_806FFD80_00000C88:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FFDD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806FCFE0
    mr r3, r31
    bl fn_806FE5C0
    addi r3, r31, 0x60
    bl fn_80703C50
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FFE10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_80701700
    mr r3, r31
    bl fn_806FE070
    addi r3, r31, 0x60
    bl fn_807006C0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FFE50(void)
{
    nofralloc
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    ble lbl_fn_806FFE50_00000D3C
    li r3, 0x2
    blr
lbl_fn_806FFE50_00000D3C:
    lwz r0, 0x60(r3)
    cmpwi r0, 0x3
    beq lbl_fn_806FFE50_00000D50
    cmpwi r0, 0x0
    bne lbl_fn_806FFE50_00000D58
lbl_fn_806FFE50_00000D50:
    li r3, 0x1
    blr
lbl_fn_806FFE50_00000D58:
    cmpwi r0, 0x1
    li r3, 0x3
    bnelr
    li r3, 0x0
    blr
}

asm void fn_806FFEA0(void)
{
    nofralloc
    addi r3, r3, 0x60
    b fn_80700690
}

asm void fn_806FFEB0(void)
{
    nofralloc
    addi r3, r3, 0x60
    b fn_80700680
}

asm void fn_806FFEC0(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r4
    mr r4, r5
    stw r30, 0x218(r1)
    mr r30, r3
    addi r3, r1, 0x10c
    stw r6, 0x20c(r1)
    bl strcpy
    li r0, 0x20
    addi r5, r1, 0x4
    addi r4, r1, 0x108
    mtctr r0
    nop
lbl_fn_806FFEC0_00000DD8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_806FFEC0_00000DD8
    lwz r0, 0x4(r4)
    mr r4, r31
    stw r0, 0x4(r5)
    addi r3, r30, 0x60
    addi r5, r1, 0x8
    bl fn_807003D0
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_806FFF50(void)
{
    nofralloc
    lwz r3, 0x704(r3)
    blr
}

asm void fn_806FFF60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lis r31, lbl_80862B00@ha
    mr r27, r3
    lwz r5, lbl_80862B00@l(r31)
    mr r28, r4
    lwz r0, 0x69c(r5)
    addi r29, r5, 0x59c
    cmpwi r0, 0x0
    beq lbl_fn_806FFF60_00000E90
    cmpwi r0, 0x1
    beq lbl_fn_806FFF60_00000EB8
    cmpwi r0, 0x2
    beq lbl_fn_806FFF60_00000F24
    cmpwi r0, 0x3
    beq lbl_fn_806FFF60_00000F58
    b lbl_fn_806FFF60_00000F8C
lbl_fn_806FFF60_00000E90:
    mr r4, r29
    li r5, 0x0
    bl fn_806FEAA0
    mr r30, r3
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    bl fn_806FEAA0
    subf r3, r3, r30
    b lbl_fn_806FFF60_00000F94
lbl_fn_806FFF60_00000EB8:
    lis r30, lbl_8076B850@ha
    mr r3, r28
    lfd f1, lbl_8076B850@l(r30)
    mr r4, r29
    bl fn_806FEBD0
    fmr f31, f1
    lfd f1, lbl_8076B850@l(r30)
    mr r3, r27
    mr r4, r29
    bl fn_806FEBD0
    lwz r3, lbl_80862B00@l(r31)
    fsub f0, f1, f31
    lwz r0, 0x6a0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806FFF60_00000EF8
    fneg f0, f0
lbl_fn_806FFF60_00000EF8:
    lis r3, lbl_8076B858@ha
    frsp f1, f0
    lfs f0, lbl_8076B858@l(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_806FFF60_00000F14
    li r3, 0x1
    b lbl_fn_806FFF60_00000FAC
lbl_fn_806FFF60_00000F14:
    mfcr r0
    srwi r0, r0, 31
    neg r3, r0
    b lbl_fn_806FFF60_00000FAC
lbl_fn_806FFF60_00000F24:
    lis r31, lbl_807C5DE0@ha
    mr r3, r28
    mr r4, r29
    addi r5, r31, lbl_807C5DE0@l
    bl fn_806FEA20
    mr r30, r3
    mr r3, r27
    mr r4, r29
    addi r5, r31, lbl_807C5DE0@l
    bl fn_806FEA20
    mr r4, r30
    bl fn_80682428
    b lbl_fn_806FFF60_00000F94
lbl_fn_806FFF60_00000F58:
    lis r30, lbl_807C5DE0@ha
    mr r3, r28
    mr r4, r29
    addi r5, r30, lbl_807C5DE0@l
    bl fn_806FEA20
    mr r31, r3
    mr r3, r27
    mr r4, r29
    addi r5, r30, lbl_807C5DE0@l
    bl fn_806FEA20
    mr r4, r31
    bl fn_8068B1FC
    b lbl_fn_806FFF60_00000F94
lbl_fn_806FFF60_00000F8C:
    li r3, 0x0
    b lbl_fn_806FFF60_00000FAC
lbl_fn_806FFF60_00000F94:
    lis r4, lbl_80862B00@ha
    lwz r4, lbl_80862B00@l(r4)
    lwz r0, 0x6a0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806FFF60_00000FAC
    neg r3, r3
lbl_fn_806FFF60_00000FAC:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80700100(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_80862B00@ha
    lwz r29, 0x0(r3)
    lwz r6, lbl_80862B00@l(r30)
    li r5, 0x0
    lwz r28, 0x0(r4)
    mr r3, r29
    addi r27, r6, 0x498
    mr r4, r27
    bl fn_806FEAA0
    mr r31, r3
    mr r3, r28
    mr r4, r27
    li r5, 0x0
    bl fn_806FEAA0
    subf. r3, r3, r31
    bne lbl_fn_80700100_0000103C
    mr r3, r29
    mr r4, r28
    bl fn_806FFF60
    b lbl_fn_80700100_00001050
lbl_fn_80700100_0000103C:
    lwz r4, lbl_80862B00@l(r30)
    lwz r0, 0x6a0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80700100_00001050
    neg r3, r3
lbl_fn_80700100_00001050:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80700190(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_80862B00@ha
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    lis r31, lbl_8076B850@ha
    lfd f1, lbl_8076B850@l(r31)
    stw r30, 0x18(r1)
    lwz r30, 0x0(r3)
    stw r29, 0x14(r1)
    lwz r29, 0x0(r4)
    stw r28, 0x10(r1)
    mr r3, r29
    lwz r5, lbl_80862B00@l(r5)
    addi r28, r5, 0x498
    mr r4, r28
    bl fn_806FEBD0
    fmr f31, f1
    lfd f1, lbl_8076B850@l(r31)
    mr r3, r30
    mr r4, r28
    bl fn_806FEBD0
    fsub f2, f1, f31
    lis r3, lbl_8076B858@ha
    lfs f0, lbl_8076B858@l(r3)
    frsp f1, f2
    fcmpo cr0, f1, f0
    bgt lbl_fn_80700190_000010F4
    blt lbl_fn_80700190_000010F4
    mr r3, r30
    mr r4, r29
    bl fn_806FFF60
    b lbl_fn_80700190_00001134
lbl_fn_80700190_000010F4:
    lis r3, lbl_80862B00@ha
    lwz r3, lbl_80862B00@l(r3)
    lwz r0, 0x6a0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80700190_0000110C
    fneg f2, f2
lbl_fn_80700190_0000110C:
    lis r3, lbl_8076B858@ha
    frsp f1, f2
    lfs f0, lbl_8076B858@l(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_80700190_00001128
    li r3, 0x1
    b lbl_fn_80700190_00001134
lbl_fn_80700190_00001128:
    mfcr r0
    srwi r0, r0, 31
    neg r3, r0
lbl_fn_80700190_00001134:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80700290(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r29, lbl_80862B00@ha
    lis r30, lbl_807C5DE0@ha
    lwz r6, lbl_80862B00@l(r29)
    addi r5, r30, lbl_807C5DE0@l
    lwz r27, 0x0(r4)
    addi r26, r6, 0x498
    lwz r28, 0x0(r3)
    mr r3, r27
    mr r4, r26
    bl fn_806FEA20
    mr r31, r3
    mr r3, r28
    mr r4, r26
    addi r5, r30, lbl_807C5DE0@l
    bl fn_806FEA20
    mr r4, r31
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80700290_000011D8
    mr r3, r28
    mr r4, r27
    bl fn_806FFF60
    b lbl_fn_80700290_000011EC
lbl_fn_80700290_000011D8:
    lwz r4, lbl_80862B00@l(r29)
    lwz r0, 0x6a0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80700290_000011EC
    neg r3, r3
lbl_fn_80700290_000011EC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80700330(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r29, lbl_80862B00@ha
    lis r30, lbl_807C5DE0@ha
    lwz r6, lbl_80862B00@l(r29)
    addi r5, r30, lbl_807C5DE0@l
    lwz r27, 0x0(r4)
    addi r26, r6, 0x498
    lwz r28, 0x0(r3)
    mr r3, r27
    mr r4, r26
    bl fn_806FEA20
    mr r31, r3
    mr r3, r28
    mr r4, r26
    addi r5, r30, lbl_807C5DE0@l
    bl fn_806FEA20
    mr r4, r31
    bl fn_8068B1FC
    cmpwi r3, 0x0
    bne lbl_fn_80700330_00001278
    mr r3, r28
    mr r4, r27
    bl fn_806FFF60
    b lbl_fn_80700330_0000128C
lbl_fn_80700330_00001278:
    lwz r4, lbl_80862B00@l(r29)
    lwz r0, 0x6a0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80700330_0000128C
    neg r3, r3
lbl_fn_80700330_0000128C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807003D0(void)
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
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x100(r5)
    cmpwi r0, 0x0
    beq lbl_fn_807003D0_000012F8
    cmpwi r0, 0x1
    beq lbl_fn_807003D0_00001304
    cmpwi r0, 0x2
    beq lbl_fn_807003D0_00001310
    cmpwi r0, 0x3
    beq lbl_fn_807003D0_0000131C
    b lbl_fn_807003D0_00001328
lbl_fn_807003D0_000012F8:
    lis r31, fn_80700100@ha
    addi r31, r31, fn_80700100@l
    b lbl_fn_807003D0_00001330
lbl_fn_807003D0_00001304:
    lis r31, fn_80700190@ha
    addi r31, r31, fn_80700190@l
    b lbl_fn_807003D0_00001330
lbl_fn_807003D0_00001310:
    lis r31, fn_80700290@ha
    addi r31, r31, fn_80700290@l
    b lbl_fn_807003D0_00001330
lbl_fn_807003D0_0000131C:
    lis r31, fn_80700330@ha
    addi r31, r31, fn_80700330@l
    b lbl_fn_807003D0_00001330
lbl_fn_807003D0_00001328:
    lis r31, fn_80700330@ha
    addi r31, r31, fn_80700330@l
lbl_fn_807003D0_00001330:
    addi r3, r3, 0x59c
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_807003D0_00001370
    li r0, 0x20
    addi r5, r28, 0x598
    subi r4, r30, 0x4
    mtctr r0
lbl_fn_807003D0_00001350:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_807003D0_00001350
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    b lbl_fn_807003D0_000013B4
lbl_fn_807003D0_00001370:
    mr r3, r30
    addi r4, r28, 0x498
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_807003D0_000013B4
    li r0, 0x20
    addi r5, r28, 0x598
    addi r4, r28, 0x494
    mtctr r0
    nop
lbl_fn_807003D0_00001398:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_807003D0_00001398
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
lbl_fn_807003D0_000013B4:
    li r0, 0x20
    addi r5, r28, 0x494
    subi r4, r30, 0x4
    mtctr r0
    nop
lbl_fn_807003D0_000013C8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_807003D0_000013C8
    lwz r0, 0x4(r4)
    lis r3, lbl_80862B00@ha
    stw r0, 0x4(r5)
    mr r4, r31
    stw r29, 0x6a0(r28)
    stw r28, lbl_80862B00@l(r3)
    lwz r3, 0x4(r28)
    bl fn_806D5E40
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80700550(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r3, 0x4(r3)
    bl fn_806D58F0
    mr r31, r3
    li r30, 0x0
    b lbl_fn_80700550_00001484
lbl_fn_80700550_00001460:
    lwz r3, 0x4(r28)
    mr r4, r30
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmplw r29, r0
    bne lbl_fn_80700550_00001480
    mr r3, r30
    b lbl_fn_80700550_00001490
lbl_fn_80700550_00001480:
    addi r30, r30, 0x1
lbl_fn_80700550_00001484:
    cmpw r30, r31
    blt lbl_fn_80700550_00001460
    li r3, -0x1
lbl_fn_80700550_00001490:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807005E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, 0x4(r3)
    bl fn_806D5900
    lwz r31, 0x0(r3)
    mr r3, r29
    lwz r12, 0x488(r29)
    li r4, 0x2
    mr r5, r31
    lwz r6, 0x494(r29)
    mtctr r12
    bctrl
    lwz r3, 0x4(r29)
    mr r4, r30
    bl fn_806D5C90
    lwz r4, 0x7d8(r29)
    cmpwi r4, 0x0
    bne lbl_fn_807005E0_00001528
    mr r3, r31
    li r4, 0x0
    bl fn_806FED20
    b lbl_fn_807005E0_00001530
lbl_fn_807005E0_00001528:
    mr r3, r31
    bl fn_806FED20
lbl_fn_807005E0_00001530:
    stw r31, 0x7d8(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80700680(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_806D58F0
}

asm void fn_80700690(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x4(r3)
    bl fn_806D5900
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807006C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r3, 0x4(r3)
    bl fn_806D58F0
    mr r31, r3
    li r29, 0x0
    b lbl_fn_807006C0_00001608
lbl_fn_807006C0_000015CC:
    lwz r3, 0x4(r28)
    mr r4, r29
    bl fn_806D5900
    lwz r4, 0x7d8(r28)
    lwz r30, 0x0(r3)
    cmpwi r4, 0x0
    bne lbl_fn_807006C0_000015F8
    mr r3, r30
    li r4, 0x0
    bl fn_806FED20
    b lbl_fn_807006C0_00001600
lbl_fn_807006C0_000015F8:
    mr r3, r30
    bl fn_806FED20
lbl_fn_807006C0_00001600:
    stw r30, 0x7d8(r28)
    addi r29, r29, 0x1
lbl_fn_807006C0_00001608:
    cmpw r29, r31
    blt lbl_fn_807006C0_000015CC
    lwz r3, 0x4(r28)
    bl fn_806D6140
    lwz r30, 0x7d8(r28)
    cmpwi r30, 0x0
    beq lbl_fn_807006C0_00001654
    stw r30, 0x8(r1)
    b lbl_fn_807006C0_00001640
lbl_fn_807006C0_0000162C:
    bl fn_806FED30
    mr r30, r3
    addi r3, r1, 0x8
    bl fn_806FE900
    stw r30, 0x8(r1)
lbl_fn_807006C0_00001640:
    cmpwi r30, 0x0
    mr r3, r30
    bne lbl_fn_807006C0_0000162C
    li r0, 0x0
    stw r0, 0x7d8(r28)
lbl_fn_807006C0_00001654:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807007A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r4, 0x8(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_807007A0_000016C0
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    b lbl_fn_807007A0_000016E8
lbl_fn_807007A0_000016C0:
    mr r3, r31
    bl fn_806D8E30
    stw r3, 0x8(r1)
    li r0, 0x1
    mr r3, r30
    stw r0, 0xc(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D64B0
    lwz r3, 0x8(r1)
lbl_fn_807007A0_000016E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80700830(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r4, 0x8(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80700830_00001754
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80700830_00001754
    mr r3, r31
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6560
lbl_fn_80700830_00001754:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80700890(void)
{
    nofralloc
    li r5, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_80700890_00001798
lbl_fn_80700890_00001778:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80700890_0000178C
    addi r3, r5, 0x1
    blr
lbl_fn_80700890_0000178C:
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_80700890_00001778
lbl_fn_80700890_00001798:
    li r3, -0x1
    blr
}

asm void fn_807008D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r8, 0x0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r31, r6
    mr r27, r7
    mr r28, r9
    mr r29, r10
    bne lbl_fn_807008D0_000017F0
    lis r4, lbl_80860DD0@ha
    lwz r0, lbl_80860DD0@l(r4)
    cmpwi r0, 0x1
    bne lbl_fn_807008D0_000018BC
lbl_fn_807008D0_000017F0:
    li r0, 0x1
    stw r0, 0x0(r3)
    li r3, 0x4
    li r4, 0x64
    li r5, 0x0
    bl fn_806D57A0
    stw r3, 0x4(r24)
    li r30, 0x0
    mr r3, r24
    stw r30, 0x7d8(r24)
    bl fn_806FE840
    mr r4, r25
    addi r3, r24, 0xc
    li r5, 0x24
    bl fn_806D9590
    mr r4, r26
    addi r3, r24, 0x30
    li r5, 0x24
    bl fn_806D9590
    mr r4, r31
    addi r3, r24, 0x54
    li r5, 0x20
    bl fn_806D9590
    li r0, -0x1
    lis r31, lbl_807C5DE0@ha
    stw r28, 0x488(r24)
    addi r3, r24, 0x498
    addi r4, r31, lbl_807C5DE0@l
    stw r30, 0x48c(r24)
    stw r29, 0x494(r24)
    stw r30, 0x6a4(r24)
    stw r0, 0x6b4(r24)
    stw r30, 0x7c(r24)
    stw r30, 0x80(r24)
    stw r30, 0x8(r24)
    stw r0, 0x484(r24)
    stw r30, 0x480(r24)
    stw r30, 0x6a8(r24)
    stw r27, 0x6bc(r24)
    bl strcpy
    addi r3, r24, 0x59c
    addi r4, r31, lbl_807C5DE0@l
    bl strcpy
    addi r3, r31, lbl_807C5DE0@l
    li r0, 0x80
    stw r3, 0x6b0(r24)
    stw r30, 0x7d4(r24)
    sth r0, 0x7d0(r24)
    bl fn_806D8F30
    bl fn_80680D18
    bl fn_806D8F10
lbl_fn_807008D0_000018BC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80700A00(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r5, lbl_807BB380@ha
    lis r4, 0x9cd0
    stw r0, 0xa4(r1)
    addi r5, r5, lbl_807BB380@l
    addi r6, r3, 0xc
    subi r4, r4, 0x6ce7
    stw r31, 0x9c(r1)
    mr r31, r3
    li r8, 0x0
    lwz r5, 0x38(r5)
    b lbl_fn_80700A00_00001944
    nop
lbl_fn_80700A00_00001910:
    extsb r7, r3
    li r3, 0x1
    cmplwi r7, 0xff
    bgt lbl_fn_80700A00_00001924
    li r3, 0x0
lbl_fn_80700A00_00001924:
    mullw r0, r8, r4
    cmpwi r3, 0x0
    beq lbl_fn_80700A00_00001934
    b lbl_fn_80700A00_0000193C
lbl_fn_80700A00_00001934:
    lwz r3, 0x10(r5)
    lbzx r7, r3, r7
lbl_fn_80700A00_0000193C:
    add r8, r0, r7
    addi r6, r6, 0x1
lbl_fn_80700A00_00001944:
    lbz r3, 0x0(r6)
    extsb. r0, r3
    bne lbl_fn_80700A00_00001910
    lis r4, 0xcccd
    lis r3, lbl_80862B04@ha
    subi r0, r4, 0x3333
    lwz r4, lbl_80862B04@l(r3)
    mulhwu r0, r0, r8
    cmpwi r4, 0x0
    srwi r0, r0, 4
    mulli r0, r0, 0x14
    subf r6, r0, r8
    beq lbl_fn_80700A00_00001988
    addi r3, r1, 0x10
    li r5, 0x80
    bl fn_806D9590
    b lbl_fn_80700A00_000019A0
lbl_fn_80700A00_00001988:
    lis r4, lbl_807C5DF8@ha
    addi r3, r1, 0x10
    addi r5, r31, 0xc
    addi r4, r4, lbl_807C5DF8@l
    crclr 6
    bl sprintf
lbl_fn_80700A00_000019A0:
    li r0, 0x2
    stb r0, 0x9(r1)
    li r3, 0x70ee
    bl fn_806A4270
    sth r3, 0xa(r1)
    addi r3, r1, 0x10
    bl fn_806D7EE0
    addis r0, r3, 0x1
    stw r3, 0xc(r1)
    cmplwi r0, 0xffff
    bne lbl_fn_80700A00_000019F8
    addi r3, r1, 0x10
    bl fn_806D8060
    cmpwi r3, 0x0
    bne lbl_fn_80700A00_000019E4
    li r3, 0x2
    b lbl_fn_80700A00_00001A58
lbl_fn_80700A00_000019E4:
    lwz r4, 0xc(r3)
    addi r3, r1, 0xc
    li r5, 0x4
    lwz r4, 0x0(r4)
    bl memcpy
lbl_fn_80700A00_000019F8:
    lwz r3, 0x6b4(r31)
    cmpwi r3, -0x1
    bne lbl_fn_80700A00_00001A28
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    bl fn_806D7AE0
    cmpwi r3, -0x1
    stw r3, 0x6b4(r31)
    bne lbl_fn_80700A00_00001A28
    li r3, 0x1
    b lbl_fn_80700A00_00001A58
lbl_fn_80700A00_00001A28:
    addi r4, r1, 0x8
    li r5, 0x8
    bl fn_806D7C40
    cmpwi r3, 0x0
    beq lbl_fn_80700A00_00001A54
    lwz r3, 0x6b4(r31)
    bl fn_806D7B30
    li r0, -0x1
    stw r0, 0x6b4(r31)
    li r3, 0x3
    b lbl_fn_80700A00_00001A58
lbl_fn_80700A00_00001A54:
    li r3, 0x0
lbl_fn_80700A00_00001A58:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80700BA0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_22
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r29, 0x1
    li r23, 0x0
    li r24, -0x1
    li r25, 0x1
lbl_fn_80700BA0_00001AA8:
    lwz r3, 0x6b4(r26)
    mr r4, r27
    mr r5, r28
    li r6, 0x0
    subi r29, r29, 0x1
    bl fn_806D7D60
    cmpwi r3, 0x0
    mr r30, r3
    bgt lbl_fn_80700BA0_00001DF8
    cmpwi r29, 0x0
    blt lbl_fn_80700BA0_00001DF8
    lwz r0, 0x80(r26)
    cmpwi r0, 0x0
    bgt lbl_fn_80700BA0_00001DF8
    lwz r3, 0x7c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80700BA0_00001AF0
    bl fn_806D7AC0
lbl_fn_80700BA0_00001AF0:
    lwz r3, 0x6b4(r26)
    stw r23, 0x7c(r26)
    cmpwi r3, -0x1
    stw r23, 0x80(r26)
    beq lbl_fn_80700BA0_00001B08
    bl fn_806D7B30
lbl_fn_80700BA0_00001B08:
    lwz r0, 0x8(r26)
    stw r24, 0x6b4(r26)
    cmpwi r0, 0x0
    stw r25, 0x0(r26)
    beq lbl_fn_80700BA0_00001B90
    li r31, 0x0
    b lbl_fn_80700BA0_00001B74
lbl_fn_80700BA0_00001B24:
    lwz r3, 0x8(r26)
    mr r4, r31
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r3, r26
    stw r0, 0x18(r1)
    bl fn_806FE840
    addi r4, r1, 0x18
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80700BA0_00001B70
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80700BA0_00001B70
    mr r3, r26
    bl fn_806FE840
    addi r4, r1, 0x18
    bl fn_806D6560
lbl_fn_80700BA0_00001B70:
    addi r31, r31, 0x1
lbl_fn_80700BA0_00001B74:
    lwz r3, 0x8(r26)
    bl fn_806D58F0
    cmpw r31, r3
    blt lbl_fn_80700BA0_00001B24
    lwz r3, 0x8(r26)
    bl fn_806D5850
    stw r23, 0x8(r26)
lbl_fn_80700BA0_00001B90:
    stw r24, 0x484(r26)
    mr r22, r26
    li r31, 0x0
    b lbl_fn_80700BA0_00001BE8
lbl_fn_80700BA0_00001BA0:
    lwz r0, 0x84(r22)
    mr r3, r26
    stw r0, 0x20(r1)
    bl fn_806FE840
    addi r4, r1, 0x20
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80700BA0_00001BE0
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80700BA0_00001BE0
    mr r3, r26
    bl fn_806FE840
    addi r4, r1, 0x20
    bl fn_806D6560
lbl_fn_80700BA0_00001BE0:
    addi r22, r22, 0x4
    addi r31, r31, 0x1
lbl_fn_80700BA0_00001BE8:
    lwz r0, 0x480(r26)
    cmpw r31, r0
    blt lbl_fn_80700BA0_00001BA0
    stw r23, 0x480(r26)
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x2
    li r7, 0x0
    bl fn_80700F50
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80700BA0_00001DF0
    lwz r22, 0x80(r26)
    cmpwi r22, 0x0
    ble lbl_fn_80700BA0_00001C98
    lis r27, lbl_807C5DF4@ha
    lwz r23, lbl_807C5DF4@l(r27)
    mr r3, r23
    bl strlen
    cmplw r22, r3
    ble lbl_fn_80700BA0_00001C98
    lwz r24, lbl_807C5DF4@l(r27)
    lwz r22, 0x7c(r26)
    mr r3, r24
    bl strlen
    mr r5, r3
    mr r3, r22
    mr r4, r24
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80700BA0_00001C98
    mr r3, r23
    bl strlen
    add r0, r22, r3
    stw r0, 0x6b0(r26)
    lis r4, lbl_80862AF8@ha
    lwz r12, 0x488(r26)
    lwz r5, lbl_80862AF8@l(r4)
    mr r3, r26
    lwz r6, 0x494(r26)
    li r4, 0x5
    mtctr r12
    bctrl
lbl_fn_80700BA0_00001C98:
    lwz r12, 0x488(r26)
    lis r4, lbl_80862AF8@ha
    lwz r5, lbl_80862AF8@l(r4)
    mr r3, r26
    lwz r6, 0x494(r26)
    li r4, 0x4
    mtctr r12
    bctrl
    lwz r3, 0x7c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80700BA0_00001CC8
    bl fn_806D7AC0
lbl_fn_80700BA0_00001CC8:
    lwz r3, 0x6b4(r26)
    li r0, 0x0
    stw r0, 0x7c(r26)
    cmpwi r3, -0x1
    stw r0, 0x80(r26)
    beq lbl_fn_80700BA0_00001CE4
    bl fn_806D7B30
lbl_fn_80700BA0_00001CE4:
    lwz r0, 0x8(r26)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r26)
    cmpwi r0, 0x0
    stw r3, 0x0(r26)
    beq lbl_fn_80700BA0_00001D78
    li r23, 0x0
    b lbl_fn_80700BA0_00001D58
lbl_fn_80700BA0_00001D08:
    lwz r3, 0x8(r26)
    mr r4, r23
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r3, r26
    stw r0, 0x10(r1)
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80700BA0_00001D54
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80700BA0_00001D54
    mr r3, r26
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6560
lbl_fn_80700BA0_00001D54:
    addi r23, r23, 0x1
lbl_fn_80700BA0_00001D58:
    lwz r3, 0x8(r26)
    bl fn_806D58F0
    cmpw r23, r3
    blt lbl_fn_80700BA0_00001D08
    lwz r3, 0x8(r26)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x8(r26)
lbl_fn_80700BA0_00001D78:
    li r0, -0x1
    stw r0, 0x484(r26)
    mr r24, r26
    li r23, 0x0
    b lbl_fn_80700BA0_00001DD4
lbl_fn_80700BA0_00001D8C:
    lwz r0, 0x84(r24)
    mr r3, r26
    stw r0, 0x8(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80700BA0_00001DCC
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80700BA0_00001DCC
    mr r3, r26
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6560
lbl_fn_80700BA0_00001DCC:
    addi r24, r24, 0x4
    addi r23, r23, 0x1
lbl_fn_80700BA0_00001DD4:
    lwz r0, 0x480(r26)
    cmpw r23, r0
    blt lbl_fn_80700BA0_00001D8C
    li r0, 0x0
    stw r0, 0x480(r26)
    mr r3, r31
    b lbl_fn_80700BA0_00001E08
lbl_fn_80700BA0_00001DF0:
    cmpwi r29, 0x0
    bge lbl_fn_80700BA0_00001AA8
lbl_fn_80700BA0_00001DF8:
    cmpwi r30, 0x0
    li r3, 0x0
    bgt lbl_fn_80700BA0_00001E08
    li r3, 0x3
lbl_fn_80700BA0_00001E08:
    addi r11, r1, 0x50
    bl _restgpr_22
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80700F50(void)
{
    nofralloc
    stwu r1, -0x460(r1)
    mflr r0
    stw r0, 0x464(r1)
    addi r11, r1, 0x460
    bl _savegpr_23
    cmpwi r4, 0x0
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    bne lbl_fn_80700F50_00001E60
    lis r24, lbl_807C5DE0@ha
    addi r24, r24, lbl_807C5DE0@l
lbl_fn_80700F50_00001E60:
    cmpwi r5, 0x0
    bne lbl_fn_80700F50_00001E70
    lis r25, lbl_807C5DE0@ha
    addi r25, r25, lbl_807C5DE0@l
lbl_fn_80700F50_00001E70:
    mr r3, r24
    bl strlen
    cmplwi r3, 0x100
    ble lbl_fn_80700F50_00001E88
    li r3, 0x6
    b lbl_fn_80700F50_00002328
lbl_fn_80700F50_00001E88:
    mr r3, r25
    bl strlen
    cmplwi r3, 0x1ff
    ble lbl_fn_80700F50_00001EA0
    li r3, 0x6
    b lbl_fn_80700F50_00002328
lbl_fn_80700F50_00001EA0:
    mr r3, r23
    bl fn_80700A00
    cmpwi r3, 0x0
    beq lbl_fn_80700F50_00001EB4
    b lbl_fn_80700F50_00002328
lbl_fn_80700F50_00001EB4:
    stw r26, 0x7c8(r23)
    bl fn_80680CF8
    lis r4, 0x2c0b
    li r30, 0x0
    addi r31, r4, 0x2c1
    li r29, 0x1
    mulhw r0, r31, r3
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5d
    subf r3, r0, r3
    addi r0, r3, 0x21
    stb r0, 0x74(r23)
lbl_fn_80700F50_00001EEC:
    lbz r0, 0x74(r23)
    add r28, r23, r29
    lbz r3, 0x73(r28)
    extsb r8, r0
    clrlwi r5, r0, 31
    extsb r0, r3
    xor r6, r8, r0
    xori r3, r8, 0x4f
    xor r4, r29, r0
    xor r5, r5, r30
    srawi r7, r6, 1
    andi. r0, r3, 0x4f
    srawi r3, r3, 1
    and r6, r6, r8
    clrlwi r4, r4, 31
    subf r0, r0, r3
    subf r6, r6, r7
    xor r3, r5, r4
    srwi r0, r0, 31
    srwi r4, r6, 31
    xor r0, r3, r0
    xor r30, r0, r4
    bl fn_80680CF8
    mulhw r0, r31, r3
    cmpwi r30, 0x0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5d
    subf r3, r0, r3
    addi r0, r3, 0x21
    stb r0, 0x74(r28)
    beq lbl_fn_80700F50_00001F7C
    lbz r0, 0x74(r28)
    clrlwi. r0, r0, 31
    beq lbl_fn_80700F50_00001F94
lbl_fn_80700F50_00001F7C:
    cmpwi r30, 0x0
    bne lbl_fn_80700F50_00001FA0
    lbz r0, 0x74(r28)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_80700F50_00001FA0
lbl_fn_80700F50_00001F94:
    lbz r3, 0x74(r28)
    addi r0, r3, 0x1
    stb r0, 0x74(r28)
lbl_fn_80700F50_00001FA0:
    addi r29, r29, 0x1
    cmpwi r29, 0x8
    blt lbl_fn_80700F50_00001EEC
    li r4, 0x0
    li r3, 0x1
    li r0, 0x3
    stb r4, 0x32(r1)
    stb r3, 0x33(r1)
    stb r0, 0x34(r1)
    lwz r3, 0x6bc(r23)
    bl fn_806A426C
    rlwinm r5, r3, 8, 8, 15
    rlwinm r4, r3, 24, 16, 23
    rlwimi r5, r3, 24, 0, 7
    srwi r0, r3, 24
    or r5, r5, r4
    addi r3, r1, 0x35
    or r5, r5, r0
    stw r5, 0x18(r1)
    addi r4, r1, 0x18
    li r5, 0x4
    bl memcpy
    addic. r28, r23, 0xc
    addi r29, r1, 0x39
    bne lbl_fn_80700F50_0000200C
    lis r28, lbl_807C5DE0@ha
    addi r28, r28, lbl_807C5DE0@l
lbl_fn_80700F50_0000200C:
    mr r3, r28
    bl strlen
    addi r30, r3, 0x1
    mr r3, r29
    mr r4, r28
    mr r5, r30
    bl memcpy
    addic. r31, r23, 0x30
    addi r28, r30, 0x9
    add r29, r29, r30
    bne lbl_fn_80700F50_00002040
    lis r31, lbl_807C5DE0@ha
    addi r31, r31, lbl_807C5DE0@l
lbl_fn_80700F50_00002040:
    mr r3, r31
    bl strlen
    addi r30, r3, 0x1
    mr r3, r29
    mr r4, r31
    mr r5, r30
    bl memcpy
    add r29, r29, r30
    add r28, r28, r30
    mr r3, r29
    addi r4, r23, 0x74
    li r5, 0x8
    bl memcpy
    cmpwi r25, 0x0
    addi r28, r28, 0x8
    addi r29, r29, 0x8
    bne lbl_fn_80700F50_0000208C
    lis r25, lbl_807C5DE0@ha
    addi r25, r25, lbl_807C5DE0@l
lbl_fn_80700F50_0000208C:
    mr r3, r25
    bl strlen
    addi r30, r3, 0x1
    mr r3, r29
    mr r4, r25
    mr r5, r30
    bl memcpy
    cmpwi r24, 0x0
    add r28, r28, r30
    add r29, r29, r30
    bne lbl_fn_80700F50_000020C0
    lis r24, lbl_807C5DE0@ha
    addi r24, r24, lbl_807C5DE0@l
lbl_fn_80700F50_000020C0:
    mr r3, r24
    bl strlen
    addi r25, r3, 0x1
    mr r3, r29
    mr r4, r24
    mr r5, r25
    bl memcpy
    mr r3, r26
    add r28, r28, r25
    add r29, r29, r25
    bl fn_806A426C
    stw r3, 0x14(r1)
    mr r3, r29
    addi r4, r1, 0x14
    li r5, 0x4
    bl memcpy
    lwz r0, 0x7c8(r23)
    addi r28, r28, 0x4
    addi r29, r29, 0x4
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_80700F50_00002134
    lwz r0, 0x6a8(r23)
    mr r3, r29
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    li r5, 0x4
    bl memcpy
    addi r28, r28, 0x4
    addi r29, r29, 0x4
lbl_fn_80700F50_00002134:
    lwz r0, 0x7c8(r23)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80700F50_00002178
    mr r3, r27
    bl fn_806A426C
    rlwinm r5, r3, 8, 8, 15
    rlwinm r4, r3, 24, 16, 23
    rlwimi r5, r3, 24, 0, 7
    srwi r0, r3, 24
    or r5, r5, r4
    mr r3, r29
    or r5, r5, r0
    stw r5, 0xc(r1)
    addi r4, r1, 0xc
    li r5, 0x4
    bl memcpy
    addi r28, r28, 0x4
lbl_fn_80700F50_00002178:
    clrlwi r3, r28, 16
    bl fn_806A4270
    sth r3, 0x8(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    lwz r3, 0x6b4(r23)
    mr r5, r28
    addi r4, r1, 0x30
    li r6, 0x0
    bl fn_806D7D60
    cmpwi r3, 0x0
    bgt lbl_fn_80700F50_000022E8
    lwz r3, 0x7c(r23)
    cmpwi r3, 0x0
    beq lbl_fn_80700F50_000021C0
    bl fn_806D7AC0
lbl_fn_80700F50_000021C0:
    lwz r3, 0x6b4(r23)
    li r0, 0x0
    stw r0, 0x7c(r23)
    cmpwi r3, -0x1
    stw r0, 0x80(r23)
    beq lbl_fn_80700F50_000021DC
    bl fn_806D7B30
lbl_fn_80700F50_000021DC:
    lwz r0, 0x8(r23)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r23)
    cmpwi r0, 0x0
    stw r3, 0x0(r23)
    beq lbl_fn_80700F50_00002270
    li r24, 0x0
    b lbl_fn_80700F50_00002250
lbl_fn_80700F50_00002200:
    lwz r3, 0x8(r23)
    mr r4, r24
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r3, r23
    stw r0, 0x20(r1)
    bl fn_806FE840
    addi r4, r1, 0x20
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80700F50_0000224C
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80700F50_0000224C
    mr r3, r23
    bl fn_806FE840
    addi r4, r1, 0x20
    bl fn_806D6560
lbl_fn_80700F50_0000224C:
    addi r24, r24, 0x1
lbl_fn_80700F50_00002250:
    lwz r3, 0x8(r23)
    bl fn_806D58F0
    cmpw r24, r3
    blt lbl_fn_80700F50_00002200
    lwz r3, 0x8(r23)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x8(r23)
lbl_fn_80700F50_00002270:
    li r0, -0x1
    stw r0, 0x484(r23)
    mr r25, r23
    li r24, 0x0
    b lbl_fn_80700F50_000022CC
lbl_fn_80700F50_00002284:
    lwz r0, 0x84(r25)
    mr r3, r23
    stw r0, 0x28(r1)
    bl fn_806FE840
    addi r4, r1, 0x28
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80700F50_000022C4
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80700F50_000022C4
    mr r3, r23
    bl fn_806FE840
    addi r4, r1, 0x28
    bl fn_806D6560
lbl_fn_80700F50_000022C4:
    addi r25, r25, 0x4
    addi r24, r24, 0x1
lbl_fn_80700F50_000022CC:
    lwz r0, 0x480(r23)
    cmpw r24, r0
    blt lbl_fn_80700F50_00002284
    li r0, 0x0
    stw r0, 0x480(r23)
    li r3, 0x3
    b lbl_fn_80700F50_00002328
lbl_fn_80700F50_000022E8:
    lwz r0, 0x7c(r23)
    li r3, 0x3
    li r24, 0x0
    stw r3, 0x0(r23)
    cmpwi r0, 0x0
    stw r24, 0x7cc(r23)
    bne lbl_fn_80700F50_00002324
    li r3, 0x1000
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x7c(r23)
    bne lbl_fn_80700F50_00002320
    li r3, 0x5
    b lbl_fn_80700F50_00002328
lbl_fn_80700F50_00002320:
    stw r24, 0x80(r23)
lbl_fn_80700F50_00002324:
    li r3, 0x0
lbl_fn_80700F50_00002328:
    addi r11, r1, 0x460
    bl _restgpr_23
    lwz r0, 0x464(r1)
    mtlr r0
    addi r1, r1, 0x460
    blr
}
