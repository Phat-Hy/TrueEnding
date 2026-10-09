#include "revolution/types.h"

/* External function declarations */
extern void _restgpr_16(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80626AC0(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80627B30(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_80629870(void);
extern void fn_80629890(void);
extern void fn_806298D0(void);
extern void fn_80629E20(void);
extern void fn_80629E90(void);
extern void fn_8062FD70(void);
extern void fn_8062FD8C(void);
extern void fn_80631F60(void);
extern void fn_80632180(void);
extern void fn_80632414(void);
extern void fn_80633214(void);
extern void fn_80633294(void);
extern void fn_806332A4(void);
extern void fn_80637114(void);
extern void fn_80638488(void);
extern void fn_80638598(void);
extern void fn_8063C72C(void);
extern void fn_8063C7D4(void);
extern void fn_8063C834(void);
extern void fn_8063D068(void);
extern void fn_8063D174(void);
extern void fn_8063D200(void);
extern void fn_8063D2D8(void);
extern void fn_8063D730(void);
extern void fn_8063D7E4(void);
extern void fn_8063D8B0(void);
extern void fn_8063D934(void);
extern void fn_8063D9E8(void);
extern void fn_8063DA6C(void);
extern void fn_8063DC0C(void);
extern void fn_8063E284(void);
extern void fn_8063E2B4(void);
extern void fn_8063E2F8(void);
extern void fn_8063E5FC(void);
extern void fn_8063ECC4(void);
extern void fn_8063ECF4(void);
extern void fn_8063ED24(void);
extern void fn_8067E23C(void);

/* External data declarations */
extern u8 lbl_80764F50[];
extern u8 lbl_80764F60[];
extern u8 lbl_807B4630[];
extern u8 lbl_807B468C[];
extern u8 lbl_807B46E0[];
extern u8 lbl_807B46FC[];
extern u8 lbl_807B4734[];
extern u8 lbl_807B4774[];
extern u8 lbl_807B4794[];
extern u8 lbl_807B47C8[];
extern u8 lbl_807B4804[];
extern u8 lbl_807B4840[];
extern u8 lbl_80820018[];

/* Small data declarations */
extern u32 lbl_80888878;
extern u32 lbl_8088887C;
extern u32 lbl_80888880;
extern u32 lbl_80888884;

/* Function declarations */
void fn_80633C38(void);
void fn_80633C3C(void);
void fn_80633EC0(void);
void fn_80633F70(void);
void fn_80634020(void);
void fn_806340B8(void);
void fn_80634240(void);
void fn_80634250(void);
void fn_80634358(void);
void fn_8063450C(void);
void fn_806345F4(void);
void fn_8063466C(void);
void fn_8063472C(void);
void fn_806347E4(void);
void fn_80634920(void);
void fn_806349F0(void);
void fn_80634B88(void);
void fn_80634B8C(void);
void fn_80634C68(void);
void fn_80634D6C(void);
void fn_80634E50(void);
void fn_80635070(void);
void fn_806352E8(void);
void fn_806353EC(void);
void fn_8063553C(void);
void fn_80635694(void);
void fn_806356D4(void);
void fn_80635730(void);
void fn_806357EC(void);
void fn_806359BC(void);
void fn_80635A74(void);
void fn_80635AEC(void);
void fn_80635B3C(void);
void fn_80635D58(void);
void fn_80635EB8(void);
void fn_806360EC(void);
void fn_8063619C(void);
void fn_806363C4(void);

asm void fn_80633C38(void)
{
    nofralloc
    blr
}

asm void fn_80633C3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r31, r3
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    beq lbl_fn_80633C3C_00000048
    cmplwi r3, 0x1
    beq lbl_fn_80633C3C_00000048
    cmplwi r3, 0x2
    beq lbl_fn_80633C3C_00000048
    li r3, 0x5
    b lbl_fn_80633C3C_00000270
lbl_fn_80633C3C_00000048:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x64e(r3)
    cmplwi r0, 0x3
    bge lbl_fn_80633C3C_00000064
    li r3, 0xc
    b lbl_fn_80633C3C_00000270
lbl_fn_80633C3C_00000064:
    cmpwi r4, 0x0
    bne lbl_fn_80633C3C_00000070
    li r27, 0x12
lbl_fn_80633C3C_00000070:
    cmpwi r5, 0x0
    bne lbl_fn_80633C3C_0000007C
    li r28, 0x800
lbl_fn_80633C3C_0000007C:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80633C3C_000000B0
    lis r3, 0xd
    lis r4, lbl_807B4630@ha
    mr r5, r31
    mr r6, r27
    mr r7, r28
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B4630@l
    bl fn_80629870
lbl_fn_80633C3C_000000B0:
    cmpwi r31, 0x0
    beq lbl_fn_80633C3C_000000E8
    cmplwi r27, 0x12
    blt lbl_fn_80633C3C_000000E0
    cmplwi r27, 0x1000
    bgt lbl_fn_80633C3C_000000E0
    cmplwi r28, 0x12
    blt lbl_fn_80633C3C_000000E0
    cmplwi r28, 0x1000
    bgt lbl_fn_80633C3C_000000E0
    cmplw r27, r28
    ble lbl_fn_80633C3C_000000E8
lbl_fn_80633C3C_000000E0:
    li r3, 0x5
    b lbl_fn_80633C3C_00000270
lbl_fn_80633C3C_000000E8:
    cmpwi r31, 0x0
    beq lbl_fn_80633C3C_0000015C
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80633C3C_00000154
    clrlwi. r0, r31, 31
    beq lbl_fn_80633C3C_00000140
    addi r3, r1, 0xc
    la r4, lbl_8088887C
    li r5, 0x3
    bl memcpy
    addi r3, r1, 0xf
    la r4, lbl_80888878
    li r5, 0x3
    bl memcpy
    mr r3, r29
    addi r5, r1, 0xc
    li r4, 0x2
    bl fn_8063E5FC
    b lbl_fn_80633C3C_0000014C
lbl_fn_80633C3C_00000140:
    li r4, 0x1
    la r5, lbl_80888878
    bl fn_8063E5FC
lbl_fn_80633C3C_0000014C:
    ori r30, r30, 0x1
    b lbl_fn_80633C3C_0000015C
lbl_fn_80633C3C_00000154:
    li r3, 0x3
    b lbl_fn_80633C3C_00000270
lbl_fn_80633C3C_0000015C:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x16a0(r3)
    cmplw r27, r0
    bne lbl_fn_80633C3C_0000017C
    lhz r0, 0x16a2(r3)
    cmplw r28, r0
    beq lbl_fn_80633C3C_000001B4
lbl_fn_80633C3C_0000017C:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80633C3C_000001AC
    lis r6, lbl_80820018@ha
    mr r4, r28
    addi r6, r6, lbl_80820018@l
    mr r5, r27
    sth r27, 0x16a0(r6)
    sth r28, 0x16a2(r6)
    bl fn_8063E2F8
    b lbl_fn_80633C3C_000001B4
lbl_fn_80633C3C_000001AC:
    li r3, 0x3
    b lbl_fn_80633C3C_00000270
lbl_fn_80633C3C_000001B4:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80633C3C_000001F8
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lhz r0, 0x169a(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80633C3C_000001E0
    ori r0, r30, 0x2
    clrlwi r30, r0, 24
lbl_fn_80633C3C_000001E0:
    lis r5, lbl_80820018@ha
    clrlwi r4, r30, 24
    addi r5, r5, lbl_80820018@l
    sth r31, 0x1698(r5)
    bl fn_8063E284
    b lbl_fn_80633C3C_00000200
lbl_fn_80633C3C_000001F8:
    li r3, 0x3
    b lbl_fn_80633C3C_00000270
lbl_fn_80633C3C_00000200:
    bl fn_80633294
    lbz r4, 0x0(r3)
    clrlwi r6, r31, 31
    lbz r5, 0x1(r3)
    clrlslwi r4, r4, 24, 8
    rlwinm r0, r5, 0, 24, 26
    add r4, r4, r0
    extrwi r0, r4, 1, 26
    xor. r0, r6, r0
    clrlwi r4, r4, 16
    beq lbl_fn_80633C3C_0000026C
    lbz r3, 0x2(r3)
    cmpwi r6, 0x0
    rlwinm r0, r4, 0, 27, 25
    clrlwi r5, r5, 27
    rlwinm r6, r3, 0, 24, 29
    clrlwi r0, r0, 16
    beq lbl_fn_80633C3C_0000024C
    ori r0, r4, 0x20
lbl_fn_80633C3C_0000024C:
    rlwinm r3, r0, 0, 24, 26
    extrwi r0, r0, 8, 16
    add r4, r5, r3
    stb r6, 0xa(r1)
    addi r3, r1, 0x8
    stb r4, 0x9(r1)
    stb r0, 0x8(r1)
    bl fn_80633214
lbl_fn_80633C3C_0000026C:
    li r3, 0x0
lbl_fn_80633C3C_00000270:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80633EC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80633EC0_000002B8
    cmplwi r3, 0x1
    beq lbl_fn_80633EC0_000002B8
    li r3, 0x5
    b lbl_fn_80633EC0_00000320
lbl_fn_80633EC0_000002B8:
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    lbz r0, 0x643(r31)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_fn_80633EC0_000002D4
    li r3, 0x4
    b lbl_fn_80633EC0_00000320
lbl_fn_80633EC0_000002D4:
    lhz r0, 0x16a4(r31)
    cmplw r3, r0
    beq lbl_fn_80633EC0_0000031C
    bl fn_80632414
    clrlwi. r0, r3, 24
    beq lbl_fn_80633EC0_00000314
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80633EC0_0000030C
    clrlwi r4, r30, 24
    bl fn_8063ECC4
    sth r30, 0x16a4(r31)
    b lbl_fn_80633EC0_0000031C
lbl_fn_80633EC0_0000030C:
    li r3, 0x3
    b lbl_fn_80633EC0_00000320
lbl_fn_80633EC0_00000314:
    li r3, 0x6
    b lbl_fn_80633EC0_00000320
lbl_fn_80633EC0_0000031C:
    li r3, 0x0
lbl_fn_80633EC0_00000320:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80633F70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80633F70_00000368
    cmplwi r3, 0x1
    beq lbl_fn_80633F70_00000368
    li r3, 0x5
    b lbl_fn_80633F70_000003D0
lbl_fn_80633F70_00000368:
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    lbz r0, 0x643(r31)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_fn_80633F70_00000384
    li r3, 0x4
    b lbl_fn_80633F70_000003D0
lbl_fn_80633F70_00000384:
    lhz r0, 0x16a6(r31)
    cmplw r3, r0
    beq lbl_fn_80633F70_000003CC
    bl fn_80632414
    clrlwi. r0, r3, 24
    beq lbl_fn_80633F70_000003C4
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80633F70_000003BC
    clrlwi r4, r30, 24
    bl fn_8063ED24
    sth r30, 0x16a6(r31)
    b lbl_fn_80633F70_000003CC
lbl_fn_80633F70_000003BC:
    li r3, 0x3
    b lbl_fn_80633F70_000003D0
lbl_fn_80633F70_000003C4:
    li r3, 0x6
    b lbl_fn_80633F70_000003D0
lbl_fn_80633F70_000003CC:
    li r3, 0x0
lbl_fn_80633F70_000003D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80634020(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80634020_00000414
    cmplwi r3, 0x1
    beq lbl_fn_80634020_00000414
    li r3, 0x5
    b lbl_fn_80634020_0000046C
lbl_fn_80634020_00000414:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x643(r3)
    rlwinm. r0, r0, 0, 25, 25
    bne lbl_fn_80634020_00000430
    li r3, 0x4
    b lbl_fn_80634020_0000046C
lbl_fn_80634020_00000430:
    bl fn_80632414
    clrlwi. r0, r3, 24
    bne lbl_fn_80634020_00000444
    li r3, 0x6
    b lbl_fn_80634020_0000046C
lbl_fn_80634020_00000444:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80634020_00000460
    mr r4, r31
    bl fn_8063ECF4
    b lbl_fn_80634020_00000468
lbl_fn_80634020_00000460:
    li r3, 0x3
    b lbl_fn_80634020_0000046C
lbl_fn_80634020_00000468:
    li r3, 0x0
lbl_fn_80634020_0000046C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806340B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r31, lbl_80820018@ha
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r31, lbl_80820018@l
    li r30, 0x0
    beq lbl_fn_806340B8_000004C4
    cmplwi r3, 0x1
    beq lbl_fn_806340B8_000004C4
    li r3, 0x5
    b lbl_fn_806340B8_000005F0
lbl_fn_806340B8_000004C4:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x64e(r3)
    cmplwi r0, 0x3
    bge lbl_fn_806340B8_000004E0
    li r3, 0xc
    b lbl_fn_806340B8_000005F0
lbl_fn_806340B8_000004E0:
    cmpwi r4, 0x0
    bne lbl_fn_806340B8_000004EC
    li r28, 0x12
lbl_fn_806340B8_000004EC:
    cmpwi r5, 0x0
    bne lbl_fn_806340B8_000004F8
    li r29, 0x800
lbl_fn_806340B8_000004F8:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806340B8_0000052C
    lis r3, 0xd
    lis r4, lbl_807B468C@ha
    mr r5, r27
    mr r6, r28
    mr r7, r29
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B468C@l
    bl fn_80629870
lbl_fn_806340B8_0000052C:
    cmplwi r27, 0x1
    bne lbl_fn_806340B8_00000568
    cmplwi r28, 0x12
    blt lbl_fn_806340B8_0000055C
    cmplwi r28, 0x1000
    bgt lbl_fn_806340B8_0000055C
    cmplwi r29, 0x12
    blt lbl_fn_806340B8_0000055C
    cmplwi r29, 0x1000
    bgt lbl_fn_806340B8_0000055C
    cmplw r28, r29
    ble lbl_fn_806340B8_00000564
lbl_fn_806340B8_0000055C:
    li r3, 0x5
    b lbl_fn_806340B8_000005F0
lbl_fn_806340B8_00000564:
    ori r30, r30, 0x2
lbl_fn_806340B8_00000568:
    lhz r0, 0x169c(r31)
    cmplw r28, r0
    bne lbl_fn_806340B8_00000580
    lhz r0, 0x169e(r31)
    cmplw r29, r0
    beq lbl_fn_806340B8_000005B0
lbl_fn_806340B8_00000580:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_806340B8_000005A8
    sth r28, 0x169c(r31)
    mr r4, r29
    mr r5, r28
    sth r29, 0x169e(r31)
    bl fn_8063E2B4
    b lbl_fn_806340B8_000005B0
lbl_fn_806340B8_000005A8:
    li r3, 0x3
    b lbl_fn_806340B8_000005F0
lbl_fn_806340B8_000005B0:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_806340B8_000005E4
    lhz r0, 0x1698(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806340B8_000005D4
    ori r0, r30, 0x1
    clrlwi r30, r0, 24
lbl_fn_806340B8_000005D4:
    sth r27, 0x169a(r31)
    clrlwi r4, r30, 24
    bl fn_8063E284
    b lbl_fn_806340B8_000005EC
lbl_fn_806340B8_000005E4:
    li r3, 0x3
    b lbl_fn_806340B8_000005F0
lbl_fn_806340B8_000005EC:
    li r3, 0x0
lbl_fn_806340B8_000005F0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80634240(void)
{
    nofralloc
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r3, 0x1848(r3)
    blr
}

asm void fn_80634250(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80820018@ha
    addi r30, r30, lbl_80820018@l
    stw r29, 0x14(r1)
    li r29, 0x0
    lbz r0, 0x27c0(r30)
    cmplwi r0, 0x3
    blt lbl_fn_80634250_0000065C
    lis r3, 0xd
    lis r4, lbl_807B46E0@ha
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B46E0@l
    bl fn_80629810
lbl_fn_80634250_0000065C:
    bl fn_80632414
    clrlwi. r0, r3, 24
    bne lbl_fn_80634250_00000670
    li r3, 0x6
    b lbl_fn_80634250_00000704
lbl_fn_80634250_00000670:
    lbz r0, 0x1848(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80634250_00000700
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_fn_80634250_00000700
    lbz r0, 0x1844(r30)
    li r4, 0x0
    stb r4, 0x1848(r30)
    cmpwi r0, 0x0
    stb r4, 0x1847(r30)
    stw r4, 0x16b4(r30)
    stw r4, 0x16b0(r30)
    beq lbl_fn_80634250_000006B8
    lbz r3, 0x1845(r30)
    stb r4, 0x1844(r30)
    addi r0, r3, 0x1
    stb r0, 0x1845(r30)
    b lbl_fn_80634250_000006C8
lbl_fn_80634250_000006B8:
    bl fn_8063C7D4
    clrlwi. r0, r3, 24
    bne lbl_fn_80634250_000006C8
    li r29, 0x3
lbl_fn_80634250_000006C8:
    lis r31, lbl_80820018@ha
    lwz r4, 0x16c0(r30)
    addi r31, r31, lbl_80820018@l
    lwz r3, 0x16dc(r31)
    addi r0, r4, 0x1
    stw r0, 0x16c0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80634250_000006F4
    bl fn_80626D50
    li r0, 0x0
    stw r0, 0x16dc(r31)
lbl_fn_80634250_000006F4:
    li r0, 0x0
    sth r0, 0x16e0(r31)
    sth r0, 0x16e2(r31)
lbl_fn_80634250_00000700:
    mr r3, r29
lbl_fn_80634250_00000704:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80634358(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x3
    blt lbl_fn_80634358_00000780
    lis r3, 0xd
    lis r4, lbl_807B46FC@ha
    lbz r5, 0x0(r28)
    addi r3, r3, 0x2
    lbz r6, 0x1(r28)
    addi r4, r4, lbl_807B46FC@l
    lbz r7, 0x2(r28)
    lbz r8, 0x3(r28)
    bl fn_80629890
lbl_fn_80634358_00000780:
    lbz r0, 0x1848(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80634358_00000798
    lbz r0, 0x1844(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80634358_000007A0
lbl_fn_80634358_00000798:
    li r3, 0x2
    b lbl_fn_80634358_000008B4
lbl_fn_80634358_000007A0:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80634358_000007BC
    cmplwi r0, 0x1
    beq lbl_fn_80634358_000007BC
    li r3, 0x5
    b lbl_fn_80634358_000008B4
lbl_fn_80634358_000007BC:
    bl fn_80632414
    clrlwi. r0, r3, 24
    bne lbl_fn_80634358_000007D0
    li r3, 0x6
    b lbl_fn_80634358_000008B4
lbl_fn_80634358_000007D0:
    lbz r5, 0x0(r28)
    li r0, 0x3
    lbz r3, 0x1(r28)
    li r6, 0x0
    li r4, 0x1
    stb r5, 0x1834(r31)
    stb r3, 0x1835(r31)
    lbz r5, 0x2(r28)
    lbz r3, 0x3(r28)
    stb r5, 0x1836(r31)
    stb r3, 0x1837(r31)
    lbz r5, 0x4(r28)
    lbz r3, 0x5(r28)
    stb r5, 0x1838(r31)
    stb r3, 0x1839(r31)
    lbz r5, 0x6(r28)
    lbz r3, 0x7(r28)
    stb r5, 0x183a(r31)
    stb r3, 0x183b(r31)
    lbz r3, 0x8(r28)
    stb r3, 0x183c(r31)
    lbz r3, 0x9(r28)
    stb r3, 0x183d(r31)
    stb r0, 0x1847(r31)
    stw r30, 0x16b0(r31)
    stw r29, 0x16b4(r31)
    stb r6, 0x183f(r31)
    lbz r5, 0x0(r28)
    subi r3, r5, 0x1
    subfic r0, r5, 0x1
    nor r0, r3, r0
    srawi r3, r0, 31
    addi r0, r3, 0x2
    stb r0, 0x1848(r31)
    lbz r0, 0x3(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80634358_00000874
    blt lbl_fn_80634358_0000088C
    cmpwi r0, 0x3
    bge lbl_fn_80634358_0000088C
    b lbl_fn_80634358_00000880
lbl_fn_80634358_00000874:
    li r0, 0x2
    stb r0, 0x1847(r31)
    b lbl_fn_80634358_00000894
lbl_fn_80634358_00000880:
    stb r4, 0x1847(r31)
    stb r6, 0x3(r28)
    b lbl_fn_80634358_00000894
lbl_fn_80634358_0000088C:
    li r3, 0x5
    b lbl_fn_80634358_000008B4
lbl_fn_80634358_00000894:
    lbz r3, 0x3(r28)
    addi r4, r28, 0x4
    bl fn_80634D6C
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_fn_80634358_000008B4
    li r0, 0x0
    stb r0, 0x1847(r31)
lbl_fn_80634358_000008B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063450C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_80820018@ha
    mr r27, r3
    addi r5, r5, lbl_80820018@l
    mr r28, r4
    lbz r0, 0x27c0(r5)
    li r29, 0x0
    cmplwi r0, 0x3
    blt lbl_fn_8063450C_00000934
    lis r3, 0xd
    lis r4, lbl_807B4734@ha
    lbz r5, 0x0(r27)
    addi r3, r3, 0x2
    lbz r6, 0x1(r27)
    addi r4, r4, lbl_807B4734@l
    lbz r7, 0x2(r27)
    lbz r8, 0x3(r27)
    lbz r9, 0x4(r27)
    lbz r10, 0x5(r27)
    bl fn_806298D0
lbl_fn_8063450C_00000934:
    lis r3, lbl_80820018@ha
    li r30, 0x0
    addi r3, r3, lbl_80820018@l
    addi r31, r3, 0x16e4
lbl_fn_8063450C_00000944:
    lbz r0, 0x1a(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063450C_0000096C
    mr r4, r27
    addi r3, r31, 0xa
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8063450C_0000096C
    b lbl_fn_8063450C_00000980
lbl_fn_8063450C_0000096C:
    addi r30, r30, 0x1
    addi r31, r31, 0x1c
    cmplwi r30, 0xc
    blt lbl_fn_8063450C_00000944
    li r31, 0x0
lbl_fn_8063450C_00000980:
    cmpwi r31, 0x0
    beq lbl_fn_8063450C_0000098C
    addi r29, r31, 0x8
lbl_fn_8063450C_0000098C:
    mr r3, r27
    mr r4, r29
    mr r7, r28
    li r5, 0x1
    li r6, 0x28
    bl fn_806353EC
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806345F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x3
    blt lbl_fn_806345F4_000009F4
    lis r3, 0xd
    lis r4, lbl_807B4774@ha
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B4774@l
    bl fn_80629810
lbl_fn_806345F4_000009F4:
    lbz r0, 0x16ae(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_806345F4_00000A1C
    addi r3, r31, 0x16a8
    bl fn_8063D2D8
    clrlwi. r0, r3, 24
    li r3, 0x3
    beq lbl_fn_806345F4_00000A20
    li r3, 0x1
    b lbl_fn_806345F4_00000A20
lbl_fn_806345F4_00000A1C:
    li r3, 0x6
lbl_fn_806345F4_00000A20:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063466C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r4, 0x16e4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x3
    blt lbl_fn_8063466C_00000A94
    lis r3, 0xd
    lis r4, lbl_807B4794@ha
    lbz r5, 0x0(r29)
    addi r3, r3, 0x2
    lbz r6, 0x1(r29)
    addi r4, r4, lbl_807B4794@l
    lbz r7, 0x2(r29)
    lbz r8, 0x3(r29)
    lbz r9, 0x4(r29)
    lbz r10, 0x5(r29)
    bl fn_806298D0
lbl_fn_8063466C_00000A94:
    li r31, 0x0
lbl_fn_8063466C_00000A98:
    lbz r0, 0x1a(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8063466C_00000AC4
    mr r4, r29
    addi r3, r30, 0xa
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8063466C_00000AC4
    addi r3, r30, 0x8
    b lbl_fn_8063466C_00000AD8
lbl_fn_8063466C_00000AC4:
    addi r31, r31, 0x1
    addi r30, r30, 0x1c
    cmplwi r31, 0xc
    blt lbl_fn_8063466C_00000A98
    li r3, 0x0
lbl_fn_8063466C_00000AD8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063472C(void)
{
    nofralloc
    lis r3, lbl_80820018@ha
    li r0, 0x2
    addi r3, r3, lbl_80820018@l
    li r4, 0x0
    addi r3, r3, 0x16e4
    mtctr r0
lbl_fn_8063472C_00000B0C:
    lbz r0, 0x1a(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063472C_00000B20
    addi r3, r3, 0x8
    blr
lbl_fn_8063472C_00000B20:
    lbz r0, 0x36(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063472C_00000B38
    addi r3, r3, 0x24
    blr
lbl_fn_8063472C_00000B38:
    lbz r0, 0x52(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063472C_00000B50
    addi r3, r3, 0x40
    blr
lbl_fn_8063472C_00000B50:
    lbz r0, 0x6e(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063472C_00000B68
    addi r3, r3, 0x5c
    blr
lbl_fn_8063472C_00000B68:
    lbz r0, 0x8a(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063472C_00000B80
    addi r3, r3, 0x78
    blr
lbl_fn_8063472C_00000B80:
    lbz r0, 0xa6(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063472C_00000B98
    addi r3, r3, 0x94
    blr
lbl_fn_8063472C_00000B98:
    addi r4, r4, 0x1
    addi r3, r3, 0xa8
    bdnz lbl_fn_8063472C_00000B0C
    li r3, 0x0
    blr
}

asm void fn_806347E4(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_806347E4_00000C30
    lis r5, lbl_80820018@ha
    lis r4, 0x9249
    addi r5, r5, lbl_80820018@l
    subi r0, r3, 0x8
    addi r3, r5, 0x16e4
    addi r4, r4, 0x2493
    subf r0, r3, r0
    mulhw r3, r4, r0
    add r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r3, r0, r3
    addi r0, r3, 0x1
    clrlwi r4, r0, 16
    mulli r3, r4, 0x1c
    subfic r0, r4, 0xc
    add r3, r5, r3
    addi r3, r3, 0x16e4
    mtctr r0
    cmplwi r4, 0xc
    bge lbl_fn_806347E4_00000C28
lbl_fn_806347E4_00000C08:
    lbz r0, 0x1a(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806347E4_00000C1C
    addi r3, r3, 0x8
    blr
lbl_fn_806347E4_00000C1C:
    addi r4, r4, 0x1
    addi r3, r3, 0x1c
    bdnz lbl_fn_806347E4_00000C08
lbl_fn_806347E4_00000C28:
    li r3, 0x0
    blr
lbl_fn_806347E4_00000C30:
    lis r3, lbl_80820018@ha
    li r0, 0x2
    addi r3, r3, lbl_80820018@l
    li r4, 0x0
    addi r3, r3, 0x16e4
    mtctr r0
lbl_fn_806347E4_00000C48:
    lbz r0, 0x1a(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806347E4_00000C5C
    addi r3, r3, 0x8
    blr
lbl_fn_806347E4_00000C5C:
    lbz r0, 0x36(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_806347E4_00000C74
    addi r3, r3, 0x24
    blr
lbl_fn_806347E4_00000C74:
    lbz r0, 0x52(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_806347E4_00000C8C
    addi r3, r3, 0x40
    blr
lbl_fn_806347E4_00000C8C:
    lbz r0, 0x6e(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_806347E4_00000CA4
    addi r3, r3, 0x5c
    blr
lbl_fn_806347E4_00000CA4:
    lbz r0, 0x8a(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_806347E4_00000CBC
    addi r3, r3, 0x78
    blr
lbl_fn_806347E4_00000CBC:
    lbz r0, 0xa6(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_806347E4_00000CD4
    addi r3, r3, 0x94
    blr
lbl_fn_806347E4_00000CD4:
    addi r4, r4, 0x1
    addi r3, r3, 0xa8
    bdnz lbl_fn_806347E4_00000C48
    li r3, 0x0
    blr
}

asm void fn_80634920(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r4, lbl_80820018@ha
    mr r27, r3
    addi r30, r4, lbl_80820018@l
    lbz r0, 0x1848(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80634920_00000D2C
    lbz r0, 0x16ae(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80634920_00000D2C
    lbz r0, 0x1844(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80634920_00000D34
lbl_fn_80634920_00000D2C:
    li r3, 0x2
    b lbl_fn_80634920_00000DA0
lbl_fn_80634920_00000D34:
    addi r28, r30, 0x16e4
    li r29, 0x0
    li r31, 0x0
lbl_fn_80634920_00000D40:
    lbz r0, 0x1a(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80634920_00000D8C
    cmpwi r27, 0x0
    beq lbl_fn_80634920_00000D6C
    mr r4, r27
    addi r3, r28, 0xa
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80634920_00000D8C
lbl_fn_80634920_00000D6C:
    stb r31, 0x1a(r28)
    lwz r12, 0x16bc(r30)
    cmpwi r12, 0x0
    beq lbl_fn_80634920_00000D8C
    addi r3, r28, 0x8
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_80634920_00000D8C:
    addi r29, r29, 0x1
    addi r28, r28, 0x1c
    cmplwi r29, 0xc
    blt lbl_fn_80634920_00000D40
    li r3, 0x0
lbl_fn_80634920_00000DA0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806349F0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_27
    lis r29, lbl_80820018@ha
    addi r29, r29, lbl_80820018@l
    addi r3, r29, 0x16c4
    bl fn_80629E90
    lbz r3, 0x1848(r29)
    cmpwi r3, 0x0
    beq lbl_fn_806349F0_00000E1C
    addi r0, r3, 0xff
    li r3, 0x0
    clrlwi r0, r0, 24
    stb r3, 0x1848(r29)
    cmplwi r0, 0x1
    bgt lbl_fn_806349F0_00000E1C
    lwz r12, 0x16b0(r29)
    cmpwi r12, 0x0
    beq lbl_fn_806349F0_00000E1C
    stb r3, 0x9(r1)
    addi r3, r1, 0x9
    mtctr r12
    bctrl
lbl_fn_806349F0_00000E1C:
    lbz r0, 0x16ae(r29)
    clrlwi. r0, r0, 31
    beq lbl_fn_806349F0_00000E6C
    addi r3, r29, 0x1680
    bl fn_80629E90
    li r30, 0x0
    addi r3, r29, 0x16a8
    stb r30, 0x16ae(r29)
    li r4, 0x0
    li r5, 0x6
    bl memset
    lwz r12, 0x167c(r29)
    cmpwi r12, 0x0
    beq lbl_fn_806349F0_00000E6C
    li r0, 0xc
    addi r3, r1, 0xc
    sth r0, 0xc(r1)
    mtctr r12
    bctrl
    stw r30, 0x167c(r29)
lbl_fn_806349F0_00000E6C:
    lbz r0, 0x1844(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806349F0_00000EA0
    lwz r12, 0x16b8(r29)
    li r0, 0x0
    stb r0, 0x1844(r29)
    cmpwi r12, 0x0
    beq lbl_fn_806349F0_00000EA0
    li r0, 0xc
    addi r3, r1, 0x8
    stb r0, 0x8(r1)
    mtctr r12
    bctrl
lbl_fn_806349F0_00000EA0:
    li r30, 0x0
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    stb r30, 0x1847(r29)
    li r28, 0x0
    stb r30, 0x1845(r29)
    addi r27, r31, 0x16e4
    stw r30, 0x16b4(r29)
lbl_fn_806349F0_00000EC0:
    lbz r0, 0x1a(r27)
    cmpwi r0, 0x0
    beq lbl_fn_806349F0_00000EEC
    stb r30, 0x1a(r27)
    lwz r12, 0x16bc(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806349F0_00000EEC
    addi r3, r27, 0x8
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_806349F0_00000EEC:
    addi r28, r28, 0x1
    addi r27, r27, 0x1c
    cmplwi r28, 0xc
    blt lbl_fn_806349F0_00000EC0
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    lwz r3, 0x16dc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806349F0_00000F1C
    bl fn_80626D50
    li r0, 0x0
    stw r0, 0x16dc(r31)
lbl_fn_806349F0_00000F1C:
    li r0, 0x0
    addi r11, r1, 0x120
    sth r0, 0x16e0(r31)
    sth r0, 0x16e2(r31)
    sth r0, 0x1698(r29)
    sth r0, 0x169a(r29)
    sth r0, 0x16a6(r29)
    sth r0, 0x16a4(r29)
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80634B88(void)
{
    nofralloc
    blr
}

asm void fn_80634B8C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_80820018@ha
    mr r27, r3
    addi r31, r31, lbl_80820018@l
    lbz r0, 0x1848(r31)
    lwz r29, 0x16dc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_fn_80634B8C_00000F8C
    cmpwi r29, 0x0
    bne lbl_fn_80634B8C_00000F94
lbl_fn_80634B8C_00000F8C:
    li r3, 0x0
    b lbl_fn_80634B8C_00001018
lbl_fn_80634B8C_00000F94:
    lhz r30, 0x16e0(r31)
    li r28, 0x0
    b lbl_fn_80634B8C_00000FD8
lbl_fn_80634B8C_00000FA0:
    mr r4, r27
    addi r3, r29, 0x4
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80634B8C_00000FD0
    lwz r3, 0x0(r29)
    lwz r0, 0x16c0(r31)
    cmplw r3, r0
    bne lbl_fn_80634B8C_00000FD0
    li r3, 0x1
    b lbl_fn_80634B8C_00001018
lbl_fn_80634B8C_00000FD0:
    addi r28, r28, 0x1
    addi r29, r29, 0xc
lbl_fn_80634B8C_00000FD8:
    clrlwi r3, r28, 16
    cmplw r3, r30
    blt lbl_fn_80634B8C_00000FA0
    lhz r0, 0x16e2(r31)
    cmplw r3, r0
    bge lbl_fn_80634B8C_00001014
    lwz r0, 0x16c0(r31)
    mr r4, r27
    addi r3, r29, 0x4
    li r5, 0x6
    stw r0, 0x0(r29)
    bl memcpy
    lhz r3, 0x16e0(r31)
    addi r0, r3, 0x1
    sth r0, 0x16e0(r31)
lbl_fn_80634B8C_00001014:
    li r3, 0x0
lbl_fn_80634B8C_00001018:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80634C68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    li r0, 0xc
    stw r31, 0x1c(r1)
    addi r31, r4, 0x16e4
    li r4, -0x1
    stw r30, 0x18(r1)
    mr r30, r31
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    mtctr r0
lbl_fn_80634C68_0000106C:
    lbz r0, 0x1a(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80634C68_000010A8
    mr r3, r31
    li r4, 0x0
    li r5, 0x1c
    bl memset
    mr r4, r29
    addi r3, r31, 0xa
    li r5, 0x6
    bl memcpy
    li r0, 0x1
    mr r3, r31
    stb r0, 0x1a(r31)
    b lbl_fn_80634C68_00001118
lbl_fn_80634C68_000010A8:
    lwz r0, 0x0(r31)
    cmplw r0, r4
    bge lbl_fn_80634C68_000010BC
    mr r30, r31
    mr r4, r0
lbl_fn_80634C68_000010BC:
    addi r3, r3, 0x1
    addi r31, r31, 0x1c
    bdnz lbl_fn_80634C68_0000106C
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r12, 0x16bc(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80634C68_000010EC
    addi r3, r30, 0x8
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_80634C68_000010EC:
    mr r3, r30
    li r4, 0x0
    li r5, 0x1c
    bl memset
    mr r4, r29
    addi r3, r30, 0xa
    li r5, 0x6
    bl memcpy
    li r0, 0x1
    mr r3, r30
    stb r0, 0x1a(r30)
lbl_fn_80634C68_00001118:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80634D6C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    addi r29, r1, 0x8
    li r30, 0x6
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80634D6C_000011FC
    cmpwi r27, 0x1
    beq lbl_fn_80634D6C_00001190
    bge lbl_fn_80634D6C_00001184
    cmpwi r27, 0x0
    bge lbl_fn_80634D6C_000011BC
    b lbl_fn_80634D6C_000011C4
lbl_fn_80634D6C_00001184:
    cmpwi r27, 0x3
    bge lbl_fn_80634D6C_000011C4
    b lbl_fn_80634D6C_000011B4
lbl_fn_80634D6C_00001190:
    mr r3, r29
    mr r4, r28
    li r5, 0x3
    bl memcpy
    addi r3, r1, 0xb
    addi r4, r28, 0x3
    li r5, 0x3
    bl memcpy
    b lbl_fn_80634D6C_000011CC
lbl_fn_80634D6C_000011B4:
    mr r29, r28
    b lbl_fn_80634D6C_000011CC
lbl_fn_80634D6C_000011BC:
    li r30, 0x0
    b lbl_fn_80634D6C_000011CC
lbl_fn_80634D6C_000011C4:
    li r3, 0x5
    b lbl_fn_80634D6C_00001200
lbl_fn_80634D6C_000011CC:
    lis r4, lbl_80820018@ha
    li r0, 0x1
    addi r4, r4, lbl_80820018@l
    mr r3, r31
    stb r0, 0x1844(r4)
    mr r5, r27
    mr r6, r29
    mr r7, r30
    li r4, 0x1
    bl fn_8063DC0C
    li r3, 0x1
    b lbl_fn_80634D6C_00001200
lbl_fn_80634D6C_000011FC:
    li r3, 0x3
lbl_fn_80634D6C_00001200:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80634E50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r4, 0x1845(r31)
    lwz r29, 0x16b8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80634E50_00001254
    subi r0, r4, 0x1
    stb r0, 0x1845(r31)
    b lbl_fn_80634E50_0000141C
lbl_fn_80634E50_00001254:
    lbz r0, 0x1844(r31)
    cmplwi r0, 0x1
    bne lbl_fn_80634E50_0000141C
    lbz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80634E50_00001298
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x2
    blt lbl_fn_80634E50_0000128C
    lis r3, 0xd
    lis r4, lbl_807B47C8@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B47C8@l
    bl fn_80629830
lbl_fn_80634E50_0000128C:
    li r0, 0xa
    stb r0, 0x8(r1)
    b lbl_fn_80634E50_000012A0
lbl_fn_80634E50_00001298:
    li r0, 0x0
    stb r0, 0x8(r1)
lbl_fn_80634E50_000012A0:
    lbz r3, 0x1847(r31)
    cmpwi r3, 0x0
    bne lbl_fn_80634E50_000012D0
    li r0, 0x0
    cmpwi r29, 0x0
    stb r0, 0x1844(r31)
    beq lbl_fn_80634E50_0000141C
    mr r12, r29
    addi r3, r1, 0x8
    mtctr r12
    bctrl
    b lbl_fn_80634E50_0000141C
lbl_fn_80634E50_000012D0:
    cmpwi r0, 0x0
    beq lbl_fn_80634E50_000012F4
    li r3, 0xa
    bl fn_806352E8
    li r0, 0x0
    stb r0, 0x1844(r31)
    stb r0, 0x1848(r31)
    stb r0, 0x1847(r31)
    b lbl_fn_80634E50_0000141C
lbl_fn_80634E50_000012F4:
    cmplwi r3, 0x1
    bne lbl_fn_80634E50_00001338
    lbz r3, 0x1837(r31)
    addi r4, r31, 0x1838
    bl fn_80634D6C
    clrlwi r0, r3, 24
    stb r3, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_fn_80634E50_00001324
    li r0, 0x2
    stb r0, 0x1847(r31)
    b lbl_fn_80634E50_0000141C
lbl_fn_80634E50_00001324:
    li r0, 0x0
    li r3, 0xa
    stb r0, 0x1844(r31)
    bl fn_806352E8
    b lbl_fn_80634E50_0000141C
lbl_fn_80634E50_00001338:
    lbz r4, 0x1836(r31)
    li r0, 0x3
    li r3, 0x0
    stb r0, 0x1847(r31)
    cmplwi r4, 0xc
    li r0, 0xc
    stb r3, 0x1844(r31)
    bgt lbl_fn_80634E50_0000135C
    mr r0, r4
lbl_fn_80634E50_0000135C:
    lbz r3, 0x1848(r31)
    la r29, lbl_80888878
    stb r0, 0x1836(r31)
    clrlwi. r0, r3, 31
    beq lbl_fn_80634E50_00001374
    la r29, lbl_8088887C
lbl_fn_80634E50_00001374:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_80634E50_000013A8
    lhz r3, 0x1842(r31)
    mr r5, r29
    lhz r4, 0x1840(r31)
    lbz r6, 0x1835(r31)
    lbz r7, 0x1836(r31)
    bl fn_8063C834
    clrlwi. r0, r3, 24
    bne lbl_fn_80634E50_0000141C
    li r3, 0x3
    bl fn_806352E8
    b lbl_fn_80634E50_0000141C
lbl_fn_80634E50_000013A8:
    lis r30, lbl_80820018@ha
    addi r30, r30, lbl_80820018@l
    lwz r3, 0x16dc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80634E50_000013C8
    bl fn_80626D50
    li r0, 0x0
    stw r0, 0x16dc(r30)
lbl_fn_80634E50_000013C8:
    li r0, 0x0
    li r3, 0x708
    sth r0, 0x16e0(r30)
    sth r0, 0x16e2(r30)
    bl fn_80626AC0
    cmpwi r3, 0x0
    stw r3, 0x16dc(r31)
    beq lbl_fn_80634E50_000013FC
    li r0, 0x96
    li r4, 0x0
    sth r0, 0x16e2(r31)
    li r5, 0x708
    bl memset
lbl_fn_80634E50_000013FC:
    lbz r4, 0x1835(r31)
    mr r3, r29
    li r5, 0x0
    bl fn_8063C72C
    clrlwi. r0, r3, 24
    bne lbl_fn_80634E50_0000141C
    li r3, 0x3
    bl fn_806352E8
lbl_fn_80634E50_0000141C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80635070(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_16
    lis r5, lbl_80820018@ha
    mr r18, r4
    addi r27, r5, lbl_80820018@l
    li r23, 0x1
    lbz r0, 0x1848(r27)
    li r21, 0x0
    lwz r22, 0x16b4(r27)
    li r20, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80635070_00001698
    lbz r28, 0x0(r3)
    addi r17, r3, 0x1
    li r26, 0x0
    li r31, 0x7f
    li r16, 0x0
    b lbl_fn_80635070_0000168C
lbl_fn_80635070_0000148C:
    lbz r0, 0x0(r17)
    cmpwi r18, 0x0
    stb r0, 0x11(r1)
    lbz r0, 0x1(r17)
    stb r0, 0x10(r1)
    lbz r0, 0x2(r17)
    stb r0, 0xf(r1)
    lbz r0, 0x3(r17)
    stb r0, 0xe(r1)
    lbz r0, 0x4(r17)
    stb r0, 0xd(r1)
    lbz r0, 0x5(r17)
    stb r0, 0xc(r1)
    lbz r29, 0x6(r17)
    lbz r30, 0x7(r17)
    addi r17, r17, 0x8
    bne lbl_fn_80635070_000014D8
    lbz r21, 0x0(r17)
    addi r17, r17, 0x1
lbl_fn_80635070_000014D8:
    lbz r0, 0x0(r17)
    cmpwi r18, 0x0
    stb r0, 0xa(r1)
    lbz r0, 0x1(r17)
    stb r0, 0x9(r1)
    lbz r0, 0x2(r17)
    stb r0, 0x8(r1)
    lbz r0, 0x4(r17)
    lbz r3, 0x3(r17)
    addi r17, r17, 0x5
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r19, r0, 16
    beq lbl_fn_80635070_00001518
    lbz r20, 0x0(r17)
    addi r17, r17, 0x1
lbl_fn_80635070_00001518:
    addi r3, r1, 0xc
    bl fn_80634B8C
    clrlwi. r0, r3, 24
    bne lbl_fn_80635070_00001688
    lwz r12, 0x184c(r27)
    cmpwi r12, 0x0
    beq lbl_fn_80635070_0000154C
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    mtctr r12
    bctrl
    clrlwi. r0, r3, 24
    beq lbl_fn_80635070_00001688
lbl_fn_80635070_0000154C:
    addi r25, r27, 0x16e4
    li r24, 0x0
lbl_fn_80635070_00001554:
    lbz r0, 0x1a(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80635070_0000157C
    addi r3, r25, 0xa
    addi r4, r1, 0xc
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80635070_0000157C
    b lbl_fn_80635070_00001590
lbl_fn_80635070_0000157C:
    addi r24, r24, 0x1
    addi r25, r25, 0x1c
    cmplwi r24, 0xc
    blt lbl_fn_80635070_00001554
    li r25, 0x0
lbl_fn_80635070_00001590:
    cmpwi r25, 0x0
    bne lbl_fn_80635070_000015AC
    addi r3, r1, 0xc
    bl fn_80634C68
    mr r25, r3
    li r23, 0x1
    b lbl_fn_80635070_000015C0
lbl_fn_80635070_000015AC:
    lwz r3, 0x4(r25)
    lwz r0, 0x16c0(r27)
    cmplw r3, r0
    bne lbl_fn_80635070_000015C0
    li r23, 0x0
lbl_fn_80635070_000015C0:
    cmplwi r23, 0x1
    bne lbl_fn_80635070_00001688
    stb r29, 0x13(r25)
    cmpwi r18, 0x0
    lbz r5, 0x8(r1)
    ori r0, r19, 0x8000
    stb r30, 0x14(r25)
    addi r24, r25, 0x8
    lbz r4, 0x9(r1)
    stb r21, 0x15(r25)
    lbz r3, 0xa(r1)
    stb r5, 0x10(r25)
    stb r4, 0x11(r25)
    stb r3, 0x12(r25)
    sth r0, 0x8(r25)
    beq lbl_fn_80635070_00001608
    stb r20, 0xe(r24)
    b lbl_fn_80635070_0000160C
lbl_fn_80635070_00001608:
    stb r31, 0xe(r24)
lbl_fn_80635070_0000160C:
    bl fn_80627B30
    stw r3, 0x0(r25)
    lwz r0, 0x16c0(r27)
    stw r0, 0x4(r25)
    lbz r0, 0x1848(r27)
    lbz r3, 0x183f(r27)
    rlwinm. r0, r0, 0, 29, 29
    addi r0, r3, 0x1
    stb r0, 0x183f(r27)
    bne lbl_fn_80635070_00001650
    lbz r3, 0x1836(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80635070_00001650
    clrlwi r0, r0, 24
    cmplw r0, r3
    bne lbl_fn_80635070_00001650
    bl fn_8063C7D4
lbl_fn_80635070_00001650:
    cmpwi r22, 0x0
    stb r16, 0x18(r25)
    beq lbl_fn_80635070_0000166C
    mr r12, r22
    mr r3, r24
    mtctr r12
    bctrl
lbl_fn_80635070_0000166C:
    lwz r12, 0x16bc(r27)
    cmpwi r12, 0x0
    beq lbl_fn_80635070_00001688
    addi r3, r25, 0x8
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_80635070_00001688:
    addi r26, r26, 0x1
lbl_fn_80635070_0000168C:
    clrlwi r0, r26, 24
    cmplw r0, r28
    blt lbl_fn_80635070_0000148C
lbl_fn_80635070_00001698:
    addi r11, r1, 0x60
    bl _restgpr_16
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806352E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_80820018@ha
    addi r29, r29, lbl_80820018@l
    stw r28, 0x10(r1)
    lbz r0, 0x1848(r29)
    lwz r28, 0x16b0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806352E8_00001794
    lwz r4, 0x16c0(r29)
    cmpwi r3, 0x0
    li r3, 0xa
    addi r0, r4, 0x1
    stw r0, 0x16c0(r29)
    bne lbl_fn_806352E8_00001700
    li r3, 0x0
lbl_fn_806352E8_00001700:
    lbz r0, 0x1848(r29)
    stb r3, 0x183e(r29)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_fn_806352E8_00001794
    lis r31, lbl_80820018@ha
    li r30, 0x0
    addi r31, r31, lbl_80820018@l
    stw r30, 0x16b4(r29)
    lwz r3, 0x16dc(r31)
    stb r30, 0x1848(r29)
    cmpwi r3, 0x0
    stb r30, 0x1847(r29)
    stw r30, 0x16b0(r29)
    beq lbl_fn_806352E8_00001740
    bl fn_80626D50
    stw r30, 0x16dc(r31)
lbl_fn_806352E8_00001740:
    lis r3, lbl_80820018@ha
    li r4, 0x0
    addi r3, r3, lbl_80820018@l
    sth r4, 0x16e0(r31)
    lbz r0, 0x27c0(r3)
    sth r4, 0x16e2(r31)
    cmplwi r0, 0x5
    blt lbl_fn_806352E8_0000177C
    lis r3, 0xd
    lis r4, lbl_807B4804@ha
    lbz r5, 0x183e(r29)
    addi r3, r3, 0x4
    lbz r6, 0x183f(r29)
    addi r4, r4, lbl_807B4804@l
    bl fn_80629850
lbl_fn_806352E8_0000177C:
    cmpwi r28, 0x0
    beq lbl_fn_806352E8_00001794
    mr r12, r28
    addi r3, r29, 0x183e
    mtctr r12
    bctrl
lbl_fn_806352E8_00001794:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806353EC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r31, lbl_80820018@ha
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    addi r31, r31, lbl_80820018@l
    li r30, 0x1
    li r29, 0x1
    li r28, 0x1
    bl fn_80632414
    clrlwi. r0, r3, 24
    bne lbl_fn_806353EC_00001804
    li r3, 0x6
    b lbl_fn_806353EC_000018EC
lbl_fn_806353EC_00001804:
    lbz r3, 0x16ae(r31)
    and. r0, r3, r25
    bne lbl_fn_806353EC_000018E4
    cmplwi r25, 0x1
    bne lbl_fn_806353EC_00001850
    cmpwi r3, 0x0
    beq lbl_fn_806353EC_00001848
    mr r3, r23
    addi r4, r31, 0x16a8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806353EC_00001840
    li r30, 0x0
    b lbl_fn_806353EC_00001848
lbl_fn_806353EC_00001840:
    li r3, 0x2
    b lbl_fn_806353EC_000018EC
lbl_fn_806353EC_00001848:
    stw r27, 0x167c(r31)
    b lbl_fn_806353EC_00001860
lbl_fn_806353EC_00001850:
    cmpwi r3, 0x0
    beq lbl_fn_806353EC_00001860
    li r3, 0x2
    b lbl_fn_806353EC_000018EC
lbl_fn_806353EC_00001860:
    cmpwi r30, 0x0
    beq lbl_fn_806353EC_000018C4
    mr r4, r23
    addi r3, r31, 0x16a8
    li r5, 0x6
    bl memcpy
    mr r5, r26
    addi r3, r31, 0x1680
    li r4, 0xa
    bl fn_80629E20
    cmpwi r24, 0x0
    beq lbl_fn_806353EC_000018AC
    lhz r0, 0x0(r24)
    mr r3, r23
    lbz r4, 0xb(r24)
    lbz r5, 0xd(r24)
    ori r6, r0, 0x8000
    bl fn_8063D200
    b lbl_fn_806353EC_000018C0
lbl_fn_806353EC_000018AC:
    mr r3, r23
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_8063D200
lbl_fn_806353EC_000018C0:
    mr r29, r3
lbl_fn_806353EC_000018C4:
    clrlwi. r0, r29, 24
    beq lbl_fn_806353EC_000018DC
    lbz r0, 0x16ae(r31)
    or r0, r0, r25
    stb r0, 0x16ae(r31)
    b lbl_fn_806353EC_000018E8
lbl_fn_806353EC_000018DC:
    li r28, 0x3
    b lbl_fn_806353EC_000018E8
lbl_fn_806353EC_000018E4:
    li r28, 0x2
lbl_fn_806353EC_000018E8:
    mr r3, r28
lbl_fn_806353EC_000018EC:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8063553C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_26
    lis r31, lbl_80820018@ha
    mr r26, r4
    addi r31, r31, lbl_80820018@l
    mr r27, r5
    lwz r30, 0x167c(r31)
    mr r28, r6
    lbz r29, 0x16ae(r31)
    addi r3, r31, 0x1680
    bl fn_80629E90
    li r3, 0x0
    cmpwi r28, 0x0
    stb r3, 0x16ae(r31)
    bne lbl_fn_8063553C_000019FC
    cmplwi r27, 0xf8
    addi r4, r1, 0xc
    li r3, 0xf8
    bge lbl_fn_8063553C_00001960
    mr r3, r27
lbl_fn_8063553C_00001960:
    clrlwi. r5, r3, 16
    li r0, 0x0
    sth r3, 0xa(r1)
    sth r0, 0x8(r1)
    mr r3, r5
    beq lbl_fn_8063553C_00001A0C
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_8063553C_000019DC
lbl_fn_8063553C_00001984:
    lbz r0, 0x0(r26)
    subi r5, r5, 0x8
    stb r0, 0x0(r4)
    lbz r0, 0x1(r26)
    stb r0, 0x1(r4)
    lbz r0, 0x2(r26)
    stb r0, 0x2(r4)
    lbz r0, 0x3(r26)
    stb r0, 0x3(r4)
    lbz r0, 0x4(r26)
    stb r0, 0x4(r4)
    lbz r0, 0x5(r26)
    stb r0, 0x5(r4)
    lbz r0, 0x6(r26)
    stb r0, 0x6(r4)
    lbz r0, 0x7(r26)
    addi r26, r26, 0x8
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_8063553C_00001984
    andi. r3, r3, 0x7
    beq lbl_fn_8063553C_00001A0C
lbl_fn_8063553C_000019DC:
    mtctr r3
lbl_fn_8063553C_000019E0:
    lbz r0, 0x0(r26)
    subi r5, r5, 0x1
    addi r26, r26, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_fn_8063553C_000019E0
    b lbl_fn_8063553C_00001A0C
lbl_fn_8063553C_000019FC:
    li r0, 0x9
    sth r3, 0xa(r1)
    sth r0, 0x8(r1)
    stb r3, 0xc(r1)
lbl_fn_8063553C_00001A0C:
    addi r3, r31, 0x16a8
    li r4, 0x0
    li r5, 0x6
    bl memset
    clrlwi. r0, r29, 31
    beq lbl_fn_8063553C_00001A44
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x167c(r31)
    beq lbl_fn_8063553C_00001A44
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_fn_8063553C_00001A44:
    addi r11, r1, 0x120
    bl _restgpr_26
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80635694(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    li r4, 0x0
    stw r0, 0x14(r1)
    li r5, 0x0
    li r6, 0x1f
    bl fn_8063553C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1f
    bl fn_80638598
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806356D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x27c4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80820018@ha
    addi r3, r31, lbl_80820018@l
    bl memset
    addi r3, r31, lbl_80820018@l
    li r0, 0x0
    stb r0, 0x27c0(r3)
    bl fn_80634B88
    bl fn_8062FD70
    li r3, 0x2
    bl fn_80638488
    bl fn_806363C4
    bl fn_80632180
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80635730(void)
{
    nofralloc
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_80635730_00001B34
    lbz r0, 0x0(r4)
    cmplwi r0, 0x2
    blt lbl_fn_80635730_00001B14
    li r3, 0x5
    blr
lbl_fn_80635730_00001B14:
    lis r3, lbl_80820018@ha
    clrlslwi r0, r0, 24, 3
    addi r3, r3, lbl_80820018@l
    li r5, 0x0
    add r4, r3, r0
    stb r5, 0x558(r4)
    li r3, 0x0
    blr
lbl_fn_80635730_00001B34:
    lis r6, lbl_80820018@ha
    li r0, 0x2
    addi r6, r6, lbl_80820018@l
    li r7, 0x0
    mtctr r0
lbl_fn_80635730_00001B48:
    lbz r0, 0x558(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80635730_00001BA0
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_fn_80635730_00001B80
    cmpwi r5, 0x0
    bne lbl_fn_80635730_00001B6C
    li r3, 0x5
    blr
lbl_fn_80635730_00001B6C:
    lis r6, lbl_80820018@ha
    slwi r0, r7, 3
    addi r6, r6, lbl_80820018@l
    add r6, r6, r0
    stw r5, 0x554(r6)
lbl_fn_80635730_00001B80:
    lis r5, lbl_80820018@ha
    slwi r0, r7, 3
    addi r5, r5, lbl_80820018@l
    add r5, r5, r0
    stb r3, 0x558(r5)
    li r3, 0x0
    stb r7, 0x0(r4)
    blr
lbl_fn_80635730_00001BA0:
    addi r6, r6, 0x8
    addi r7, r7, 0x1
    bdnz lbl_fn_80635730_00001B48
    li r3, 0x3
    blr
}

asm void fn_806357EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmplwi r3, 0x2
    mr r27, r3
    mr r26, r4
    mr r28, r5
    blt lbl_fn_806357EC_00001BE0
    li r27, 0x80
lbl_fn_806357EC_00001BE0:
    cmpwi r5, 0x0
    bne lbl_fn_806357EC_00001BF0
    li r3, 0x5
    b lbl_fn_806357EC_00001D6C
lbl_fn_806357EC_00001BF0:
    lbz r0, 0x8(r5)
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    li r29, 0x0
    rlwinm r31, r0, 0, 28, 26
    addi r30, r3, 0x34
lbl_fn_806357EC_00001C08:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806357EC_00001C2C
    mr r4, r26
    addi r3, r30, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806357EC_00001C3C
lbl_fn_806357EC_00001C2C:
    addi r29, r29, 0x1
    addi r30, r30, 0x11c
    cmplwi r29, 0x4
    blt lbl_fn_806357EC_00001C08
lbl_fn_806357EC_00001C3C:
    clrlwi r30, r29, 24
    cmpwi r30, 0x4
    bne lbl_fn_806357EC_00001C50
    li r3, 0x7
    b lbl_fn_806357EC_00001D6C
lbl_fn_806357EC_00001C50:
    mulli r0, r30, 0x22
    lis r4, lbl_80820018@ha
    clrlwi. r3, r31, 24
    addi r4, r4, lbl_80820018@l
    add r4, r4, r0
    addi r29, r4, 0x4cc
    beq lbl_fn_806357EC_00001C98
    subi r26, r3, 0x1
    bl fn_806332A4
    la r4, lbl_80888880
    la r5, lbl_80888884
    lbzx r0, r4, r26
    lbzx r4, r5, r26
    lbzx r0, r3, r0
    and. r0, r4, r0
    bne lbl_fn_806357EC_00001C98
    li r3, 0x4
    b lbl_fn_806357EC_00001D6C
lbl_fn_806357EC_00001C98:
    lbz r0, 0x20(r29)
    clrlwi r3, r31, 24
    cmplw r3, r0
    bne lbl_fn_806357EC_00001CD4
    cmpwi r3, 0x0
    beq lbl_fn_806357EC_00001CCC
    lhz r3, 0x1e(r29)
    lhz r0, 0x0(r28)
    cmplw r0, r3
    blt lbl_fn_806357EC_00001CD4
    lhz r0, 0x2(r28)
    cmplw r0, r3
    bgt lbl_fn_806357EC_00001CD4
lbl_fn_806357EC_00001CCC:
    li r3, 0x0
    b lbl_fn_806357EC_00001D6C
lbl_fn_806357EC_00001CD4:
    cmplwi r27, 0x80
    beq lbl_fn_806357EC_00001D2C
    lis r3, lbl_80820018@ha
    clrlslwi r0, r27, 24, 3
    addi r3, r3, lbl_80820018@l
    add r3, r3, r0
    lbz r0, 0x558(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_806357EC_00001D2C
    lhz r4, 0x0(r28)
    mulli r5, r27, 0xa
    lhz r3, 0x2(r28)
    li r0, 0x1
    sthux r4, r5, r29
    sth r3, 0x2(r5)
    lhz r4, 0x4(r28)
    lhz r3, 0x6(r28)
    sth r4, 0x4(r5)
    sth r3, 0x6(r5)
    lhz r3, 0x8(r28)
    sth r3, 0x8(r5)
    stb r0, 0x21(r29)
lbl_fn_806357EC_00001D2C:
    lbz r0, 0x20(r29)
    cmplwi r0, 0x1
    beq lbl_fn_806357EC_00001D54
    cmplwi r0, 0x4
    beq lbl_fn_806357EC_00001D54
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x564(r3)
    cmplwi r0, 0x4
    beq lbl_fn_806357EC_00001D5C
lbl_fn_806357EC_00001D54:
    li r3, 0xd
    b lbl_fn_806357EC_00001D6C
lbl_fn_806357EC_00001D5C:
    mr r3, r27
    mr r4, r30
    mr r5, r28
    bl fn_80635EB8
lbl_fn_806357EC_00001D6C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806359BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r5, 0x34
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
lbl_fn_806359BC_00001DB8:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806359BC_00001DDC
    mr r4, r28
    addi r3, r30, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806359BC_00001DEC
lbl_fn_806359BC_00001DDC:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_fn_806359BC_00001DB8
lbl_fn_806359BC_00001DEC:
    clrlwi r0, r31, 24
    cmpwi r0, 0x4
    bne lbl_fn_806359BC_00001E00
    li r3, 0x7
    b lbl_fn_806359BC_00001E1C
lbl_fn_806359BC_00001E00:
    mulli r0, r0, 0x22
    lis r4, lbl_80820018@ha
    li r3, 0x0
    addi r4, r4, lbl_80820018@l
    add r4, r4, r0
    lbz r0, 0x4ec(r4)
    stb r0, 0x0(r29)
lbl_fn_806359BC_00001E1C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80635A74(void)
{
    nofralloc
    lis r3, lbl_80820018@ha
    li r12, 0x0
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x565(r3)
    cmplwi r0, 0x80
    beq lbl_fn_80635A74_00001E6C
    clrlslwi r0, r0, 24, 3
    add r3, r3, r0
    lbz r0, 0x558(r3)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_80635A74_00001E6C
    lwz r12, 0x554(r3)
lbl_fn_80635A74_00001E6C:
    lis r3, lbl_80820018@ha
    cmpwi r12, 0x0
    addi r3, r3, lbl_80820018@l
    li r0, 0x0
    li r4, 0x4
    stb r0, 0x558(r3)
    stb r4, 0x564(r3)
    stb r0, 0x560(r3)
    beqlr
    mulli r0, r4, 0x11c
    li r4, 0x5
    li r5, 0xc
    li r6, 0x0
    add r3, r3, r0
    addi r3, r3, 0x3c
    mtctr r12
    bctr
    blr
}

asm void fn_80635AEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x22
    stw r0, 0x14(r1)
    mulli r0, r3, 0x22
    lis r3, lbl_80820018@ha
    stw r31, 0xc(r1)
    addi r3, r3, lbl_80820018@l
    add r3, r3, r0
    addi r31, r3, 0x4cc
    mr r3, r31
    bl memset
    li r0, 0x0
    stb r0, 0x20(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80635B3C(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_80635B3C_00001F3C
    lhz r6, 0x0(r4)
    mr r3, r4
    lhz r0, 0x2(r4)
    sth r6, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r6, 0x4(r4)
    lhz r0, 0x6(r4)
    sth r6, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r5)
    blr
lbl_fn_80635B3C_00001F3C:
    lbz r9, 0x8(r4)
    cmpwi r9, 0x0
    beq lbl_fn_80635B3C_00001F54
    lbz r8, 0x8(r3)
    cmpwi r8, 0x0
    bne lbl_fn_80635B3C_00001F5C
lbl_fn_80635B3C_00001F54:
    li r3, 0x0
    blr
lbl_fn_80635B3C_00001F5C:
    rlwinm. r0, r8, 0, 27, 27
    beq lbl_fn_80635B3C_00001FA0
    lhz r4, 0x0(r3)
    lhz r0, 0x2(r3)
    sth r4, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r4, 0x4(r3)
    lhz r0, 0x6(r3)
    sth r4, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r3)
    mr r3, r5
    sth r0, 0x8(r5)
    lbz r0, 0x8(r5)
    rlwinm r0, r0, 0, 28, 26
    stb r0, 0x8(r5)
    blr
lbl_fn_80635B3C_00001FA0:
    rlwinm. r0, r9, 0, 27, 27
    beq lbl_fn_80635B3C_00001FE4
    lhz r6, 0x0(r4)
    mr r3, r5
    lhz r0, 0x2(r4)
    sth r6, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r6, 0x4(r4)
    lhz r0, 0x6(r4)
    sth r6, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r5)
    lbz r0, 0x8(r5)
    rlwinm r0, r0, 0, 28, 26
    stb r0, 0x8(r5)
    blr
lbl_fn_80635B3C_00001FE4:
    subi r7, r8, 0x1
    lis r6, lbl_80764F50@ha
    slwi r0, r7, 2
    subf r0, r7, r0
    addi r6, r6, lbl_80764F50@l
    add r7, r9, r0
    subi r0, r7, 0x1
    clrlwi r0, r0, 24
    lbzx r0, r6, r0
    cmpwi r0, 0x2
    beq lbl_fn_80635B3C_00002058
    bge lbl_fn_80635B3C_00002020
    cmpwi r0, 0x1
    bge lbl_fn_80635B3C_0000202C
    b lbl_fn_80635B3C_00002118
lbl_fn_80635B3C_00002020:
    cmpwi r0, 0x4
    bge lbl_fn_80635B3C_00002118
    b lbl_fn_80635B3C_00002088
lbl_fn_80635B3C_0000202C:
    lhz r4, 0x0(r3)
    lhz r0, 0x2(r3)
    sth r4, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r4, 0x4(r3)
    lhz r0, 0x6(r3)
    sth r4, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r3)
    sth r0, 0x8(r5)
    blr
lbl_fn_80635B3C_00002058:
    lhz r6, 0x0(r4)
    mr r3, r4
    lhz r0, 0x2(r4)
    sth r6, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r6, 0x4(r4)
    lhz r0, 0x6(r4)
    sth r6, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r5)
    blr
lbl_fn_80635B3C_00002088:
    stb r8, 0x8(r5)
    lhz r6, 0x0(r4)
    lhz r0, 0x0(r3)
    cmplw r0, r6
    bge lbl_fn_80635B3C_000020A0
    mr r6, r0
lbl_fn_80635B3C_000020A0:
    sth r6, 0x0(r5)
    lhz r7, 0x2(r4)
    lhz r0, 0x2(r3)
    cmplw r0, r7
    ble lbl_fn_80635B3C_000020B8
    mr r7, r0
lbl_fn_80635B3C_000020B8:
    lhz r6, 0x0(r5)
    clrlwi r0, r7, 16
    sth r7, 0x2(r5)
    cmplw r6, r0
    bge lbl_fn_80635B3C_000020D4
    li r3, 0x0
    blr
lbl_fn_80635B3C_000020D4:
    lbz r0, 0x8(r5)
    cmplwi r0, 0x2
    bne lbl_fn_80635B3C_00002110
    lhz r6, 0x4(r4)
    lhz r0, 0x4(r3)
    cmplw r0, r6
    ble lbl_fn_80635B3C_000020F4
    mr r6, r0
lbl_fn_80635B3C_000020F4:
    sth r6, 0x4(r5)
    lhz r4, 0x6(r4)
    lhz r0, 0x6(r3)
    cmplw r0, r4
    ble lbl_fn_80635B3C_0000210C
    mr r4, r0
lbl_fn_80635B3C_0000210C:
    sth r4, 0x6(r5)
lbl_fn_80635B3C_00002110:
    mr r3, r5
    blr
lbl_fn_80635B3C_00002118:
    li r3, 0x0
    blr
}

asm void fn_80635D58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r5, 0x0
    mr r26, r3
    mr r27, r5
    mr r28, r6
    li r7, 0x0
    beq lbl_fn_80635D58_00002190
    lbz r0, 0x8(r5)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_80635D58_00002190
    lhz r3, 0x0(r5)
    lhz r0, 0x2(r5)
    sth r3, 0x0(r6)
    sth r0, 0x2(r6)
    lhz r3, 0x4(r5)
    lhz r0, 0x6(r5)
    sth r3, 0x4(r6)
    sth r0, 0x6(r6)
    lhz r0, 0x8(r5)
    sth r0, 0x8(r6)
    lbz r0, 0x8(r6)
    rlwinm r3, r0, 0, 28, 26
    stb r3, 0x8(r6)
    b lbl_fn_80635D58_00002268
lbl_fn_80635D58_00002190:
    lis r31, lbl_80820018@ha
    mr r30, r4
    addi r31, r31, lbl_80820018@l
    li r29, 0x0
lbl_fn_80635D58_000021A0:
    lbz r0, 0x558(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_80635D58_000021E4
    lbz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80635D58_000021C0
    li r3, 0x0
    b lbl_fn_80635D58_00002268
lbl_fn_80635D58_000021C0:
    mr r3, r7
    mr r4, r30
    mr r5, r28
    bl fn_80635B3C
    cmpwi r3, 0x0
    bne lbl_fn_80635D58_000021E0
    li r3, 0x0
    b lbl_fn_80635D58_00002268
lbl_fn_80635D58_000021E0:
    mr r7, r28
lbl_fn_80635D58_000021E4:
    addi r29, r29, 0x1
    addi r30, r30, 0xa
    cmpwi r29, 0x2
    addi r31, r31, 0x8
    blt lbl_fn_80635D58_000021A0
    cmpwi r7, 0x0
    bne lbl_fn_80635D58_0000223C
    cmpwi r27, 0x0
    beq lbl_fn_80635D58_00002234
    lhz r3, 0x0(r27)
    lhz r0, 0x2(r27)
    sth r3, 0x0(r28)
    sth r0, 0x2(r28)
    lhz r3, 0x4(r27)
    lhz r0, 0x6(r27)
    sth r3, 0x4(r28)
    sth r0, 0x6(r28)
    lhz r0, 0x8(r27)
    sth r0, 0x8(r28)
    b lbl_fn_80635D58_00002264
lbl_fn_80635D58_00002234:
    li r3, 0x0
    b lbl_fn_80635D58_00002268
lbl_fn_80635D58_0000223C:
    cmplwi r26, 0x80
    bne lbl_fn_80635D58_00002264
    mr r3, r27
    mr r4, r7
    mr r5, r28
    bl fn_80635B3C
    cmpwi r3, 0x0
    bne lbl_fn_80635D58_00002264
    li r3, 0x0
    b lbl_fn_80635D58_00002268
lbl_fn_80635D58_00002264:
    lbz r3, 0x8(r28)
lbl_fn_80635D58_00002268:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80635EB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, lbl_80820018@ha
    stw r0, 0x34(r1)
    mulli r0, r4, 0x22
    addi r6, r6, lbl_80820018@l
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    add r3, r6, r0
    addi r6, r1, 0x8
    stw r28, 0x20(r1)
    addi r28, r3, 0x4cc
    mr r3, r29
    mr r4, r28
    bl fn_80635D58
    lbz r4, 0x20(r28)
    clrlwi r0, r3, 24
    stb r3, 0x10(r1)
    cmplw r4, r0
    bne lbl_fn_80635EB8_00002310
    cmpwi r0, 0x0
    beq lbl_fn_80635EB8_00002304
    lhz r4, 0x1e(r28)
    lhz r0, 0x8(r1)
    cmplw r0, r4
    blt lbl_fn_80635EB8_0000230C
    lhz r0, 0xa(r1)
    cmplw r0, r4
    bgt lbl_fn_80635EB8_0000230C
lbl_fn_80635EB8_00002304:
    li r3, 0xd
    b lbl_fn_80635EB8_00002494
lbl_fn_80635EB8_0000230C:
    li r31, 0x1
lbl_fn_80635EB8_00002310:
    clrlwi. r0, r3, 24
    stb r31, 0x21(r28)
    beq lbl_fn_80635EB8_00002330
    lbz r0, 0x20(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80635EB8_00002330
    li r0, 0x1
    stb r0, 0x21(r28)
lbl_fn_80635EB8_00002330:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80635EB8_0000234C
    li r3, 0x3
    b lbl_fn_80635EB8_00002494
lbl_fn_80635EB8_0000234C:
    lbz r0, 0x21(r28)
    cmplwi r0, 0x1
    bne lbl_fn_80635EB8_00002360
    li r0, 0x0
    stb r0, 0x10(r1)
lbl_fn_80635EB8_00002360:
    lbz r0, 0x10(r1)
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    cmpwi r0, 0x2
    stb r30, 0x564(r4)
    stb r29, 0x565(r4)
    beq lbl_fn_80635EB8_0000241C
    bge lbl_fn_80635EB8_00002390
    cmpwi r0, 0x0
    beq lbl_fn_80635EB8_0000239C
    bge lbl_fn_80635EB8_000023FC
    b lbl_fn_80635EB8_00002464
lbl_fn_80635EB8_00002390:
    cmpwi r0, 0x4
    bge lbl_fn_80635EB8_00002464
    b lbl_fn_80635EB8_00002444
lbl_fn_80635EB8_0000239C:
    lbz r0, 0x20(r28)
    cmpwi r0, 0x3
    beq lbl_fn_80635EB8_000023D0
    bge lbl_fn_80635EB8_000023E8
    cmpwi r0, 0x2
    bge lbl_fn_80635EB8_000023B8
    b lbl_fn_80635EB8_000023E8
lbl_fn_80635EB8_000023B8:
    mulli r0, r30, 0x11c
    mr r3, r31
    add r4, r4, r0
    lhz r4, 0x34(r4)
    bl fn_8063D8B0
    b lbl_fn_80635EB8_00002474
lbl_fn_80635EB8_000023D0:
    mulli r0, r30, 0x11c
    mr r3, r31
    add r4, r4, r0
    lhz r4, 0x34(r4)
    bl fn_8063D9E8
    b lbl_fn_80635EB8_00002474
lbl_fn_80635EB8_000023E8:
    lis r3, lbl_80820018@ha
    li r0, 0x4
    addi r3, r3, lbl_80820018@l
    stb r0, 0x564(r3)
    b lbl_fn_80635EB8_00002474
lbl_fn_80635EB8_000023FC:
    mulli r0, r30, 0x11c
    lhz r5, 0x8(r1)
    lhz r6, 0xa(r1)
    mr r3, r31
    add r4, r4, r0
    lhz r4, 0x34(r4)
    bl fn_8063D730
    b lbl_fn_80635EB8_00002474
lbl_fn_80635EB8_0000241C:
    mulli r0, r30, 0x11c
    lhz r5, 0x8(r1)
    lhz r6, 0xa(r1)
    mr r3, r31
    lhz r7, 0xc(r1)
    add r4, r4, r0
    lhz r4, 0x34(r4)
    lhz r8, 0xe(r1)
    bl fn_8063D7E4
    b lbl_fn_80635EB8_00002474
lbl_fn_80635EB8_00002444:
    mulli r0, r30, 0x11c
    lhz r5, 0x8(r1)
    lhz r6, 0xa(r1)
    mr r3, r31
    add r4, r4, r0
    lhz r4, 0x34(r4)
    bl fn_8063D934
    b lbl_fn_80635EB8_00002474
lbl_fn_80635EB8_00002464:
    lis r3, lbl_80820018@ha
    li r0, 0x4
    addi r3, r3, lbl_80820018@l
    stb r0, 0x564(r3)
lbl_fn_80635EB8_00002474:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x564(r3)
    cmplwi r0, 0x4
    bne lbl_fn_80635EB8_00002490
    mr r3, r31
    bl fn_80626D50
lbl_fn_80635EB8_00002490:
    li r3, 0x1
lbl_fn_80635EB8_00002494:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806360EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80820018@l
    lbz r0, 0x564(r4)
    cmplwi r0, 0x4
    bge lbl_fn_806360EC_00002554
    mulli r0, r0, 0x22
    cmpwi r3, 0x0
    add r5, r4, r0
    bne lbl_fn_806360EC_000024F4
    li r0, 0x4
    li r4, 0x4
    stb r0, 0x4ec(r5)
    b lbl_fn_806360EC_000024F8
lbl_fn_806360EC_000024F4:
    li r4, 0x5
lbl_fn_806360EC_000024F8:
    lis r7, lbl_80820018@ha
    addi r7, r7, lbl_80820018@l
    lbz r0, 0x565(r7)
    cmplwi r0, 0x80
    beq lbl_fn_806360EC_00002544
    clrlslwi r0, r0, 24, 3
    add r5, r7, r0
    lbz r0, 0x558(r5)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_806360EC_00002544
    lbz r0, 0x564(r7)
    mr r6, r3
    lwz r12, 0x554(r5)
    li r5, 0x0
    mulli r0, r0, 0x11c
    add r3, r7, r0
    addi r3, r3, 0x3c
    mtctr r12
    bctrl
lbl_fn_806360EC_00002544:
    lis r3, lbl_80820018@ha
    li r0, 0x4
    addi r3, r3, lbl_80820018@l
    stb r0, 0x564(r3)
lbl_fn_806360EC_00002554:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063619C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r26, r4
    mr r25, r3
    mr r27, r5
    mr r28, r6
    mr r3, r26
    bl fn_8062FD8C
    clrlwi r29, r3, 24
    cmpwi r29, 0x4
    bge lbl_fn_8063619C_00002774
    mulli r30, r29, 0x11c
    lis r24, lbl_80820018@ha
    cmpwi r27, 0x0
    addi r24, r24, lbl_80820018@l
    add r31, r24, r30
    bne lbl_fn_8063619C_00002608
    lhz r0, 0x38(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063619C_00002608
    bl fn_80637114
    clrlwi. r0, r3, 24
    bne lbl_fn_8063619C_00002608
    li r0, 0x0
    sth r0, 0x38(r31)
    lbz r0, 0x27c0(r24)
    cmplwi r0, 0x5
    blt lbl_fn_8063619C_000025FC
    lis r3, 0xd
    lis r4, lbl_807B4840@ha
    lhz r6, 0x36(r31)
    mr r5, r26
    addi r3, r3, 0x4
    addi r4, r4, lbl_807B4840@l
    bl fn_80629850
lbl_fn_8063619C_000025FC:
    lhz r3, 0x34(r31)
    lhz r4, 0x36(r31)
    bl fn_8063D068
lbl_fn_8063619C_00002608:
    mulli r0, r29, 0x22
    lis r3, lbl_80820018@ha
    cmpwi r27, 0x0
    addi r3, r3, lbl_80820018@l
    add r4, r3, r0
    stb r27, 0x4ec(r4)
    li r0, 0x0
    sth r28, 0x4ea(r4)
    bne lbl_fn_8063619C_0000263C
    lbz r3, 0x4d4(r4)
    cmplwi r3, 0x1
    bne lbl_fn_8063619C_0000263C
    stb r0, 0x4d4(r4)
lbl_fn_8063619C_0000263C:
    cmpwi r27, 0x0
    addi r5, r4, 0x4d6
    bne lbl_fn_8063619C_00002658
    lbz r3, 0x8(r5)
    cmplwi r3, 0x1
    bne lbl_fn_8063619C_00002658
    stb r0, 0x8(r5)
lbl_fn_8063619C_00002658:
    lbz r0, 0x4ed(r4)
    cmplwi r0, 0x1
    bne lbl_fn_8063619C_00002674
    mr r4, r29
    li r3, 0x80
    li r5, 0x0
    bl fn_80635EB8
lbl_fn_8063619C_00002674:
    lis r24, lbl_80820018@ha
    li r29, 0x0
    addi r24, r24, lbl_80820018@l
lbl_fn_8063619C_00002680:
    lbz r0, 0x558(r24)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_8063619C_000026A8
    lwz r12, 0x554(r24)
    mr r4, r27
    mr r5, r28
    mr r6, r25
    addi r3, r31, 0x3c
    mtctr r12
    bctrl
lbl_fn_8063619C_000026A8:
    addi r29, r29, 0x1
    addi r24, r24, 0x8
    cmpwi r29, 0x2
    blt lbl_fn_8063619C_00002680
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    add r28, r3, r30
    lbz r0, 0x14f(r28)
    cmplwi r0, 0x1
    bne lbl_fn_8063619C_00002774
    addi r24, r28, 0x3c
    mr r3, r24
    bl fn_80631F60
    cmpwi r3, 0x0
    beq lbl_fn_8063619C_00002710
    lbz r0, 0x76(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_8063619C_00002710
    mr r3, r26
    li r4, 0x0
    bl fn_8063D174
    clrlwi. r0, r3, 24
    beq lbl_fn_8063619C_00002744
    li r0, 0x2
    stb r0, 0x14f(r28)
    b lbl_fn_8063619C_00002774
lbl_fn_8063619C_00002710:
    lis r4, lbl_80820018@ha
    mr r3, r24
    addi r4, r4, lbl_80820018@l
    add r4, r4, r30
    lbz r0, 0x14e(r4)
    cntlzw r0, r0
    extrwi r4, r0, 8, 19
    bl fn_8063DA6C
    clrlwi. r0, r3, 24
    beq lbl_fn_8063619C_00002744
    li r0, 0x0
    stb r0, 0x14f(r28)
    b lbl_fn_8063619C_00002774
lbl_fn_8063619C_00002744:
    li r27, 0x0
    lis r26, lbl_80820018@ha
    stb r27, 0x14f(r28)
    addi r26, r26, lbl_80820018@l
    lwz r12, 0x62c(r26)
    cmpwi r12, 0x0
    beq lbl_fn_8063619C_00002774
    stb r25, 0x624(r26)
    addi r3, r26, 0x624
    mtctr r12
    bctrl
    stw r27, 0x62c(r26)
lbl_fn_8063619C_00002774:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806363C4(void)
{
    nofralloc
    lis r3, lbl_80764F60@ha
    lwzu r6, lbl_80764F60@l(r3)
    lis r4, 0x1
    lis r7, lbl_80820018@ha
    subi r8, r4, 0x1
    lwz r5, 0x4(r3)
    addi r7, r7, lbl_80820018@l
    lwz r4, 0x8(r3)
    lwz r3, 0xc(r3)
    li r0, 0x2
    sth r8, 0x18f6(r7)
    stw r6, 0x18f8(r7)
    stw r5, 0x18fc(r7)
    stw r4, 0x1900(r7)
    stw r3, 0x1904(r7)
    stb r0, 0x1909(r7)
    blr
}
