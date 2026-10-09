#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8067E23C(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80683B54(void);
extern void fn_80684600(void);
extern void fn_8068B1FC(void);
extern void fn_806A420C(void);
extern void fn_806A4260(void);
extern void fn_806A4264(void);
extern void fn_806A426C(void);
extern void fn_806A4270(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D62F0(void);
extern void fn_806D63A0(void);
extern void fn_806D6420(void);
extern void fn_806D64B0(void);
extern void fn_806D6610(void);
extern void fn_806D7AC0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7B30(void);
extern void fn_806D7CF0(void);
extern void fn_806D7DA0(void);
extern void fn_806D8650(void);
extern void fn_806D8F10(void);
extern void fn_806D8F30(void);
extern void fn_806F1D80(void);
extern void fn_806FBE00(void);
extern void fn_806FC170(void);
extern void fn_806FC4B0(void);
extern void fn_806FC9C0(void);
extern void fn_806FF130(void);
extern void fn_807007A0(void);
extern void fn_80700890(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B848[];
extern u8 lbl_807BB380[];
extern u8 lbl_807C5380[];
extern u8 lbl_807C5D00[];
extern u8 lbl_807C5D08[];
extern u8 lbl_807C5D0C[];
extern u8 lbl_807C5D70[];
extern u8 lbl_807C5D80[];
extern u8 lbl_807C5D8C[];
extern u8 lbl_807C5D98[];
extern u8 lbl_807C5DA0[];
extern u8 lbl_807C5DA4[];
extern u8 lbl_807C5DC0[];
extern u8 lbl_807C5DC4[];
extern u8 lbl_80860DD0[];
extern u8 lbl_808627E0[];
extern u8 lbl_808627F0[];
extern u8 lbl_80862AF0[];
extern u8 lbl_80862AF4[];

/* Small data declarations */

/* Function declarations */
void pad_03_806FCFD4_text(void);
void fn_806FCFE0(void);
void fn_806FD090(void);
void fn_806FD2D0(void);
void fn_806FD420(void);
void fn_806FD860(void);
void fn_806FD910(void);
void fn_806FDBC0(void);
void fn_806FDCA0(void);
void fn_806FDD20(void);
void fn_806FDFB0(void);
void fn_806FE060(void);
void fn_806FE070(void);
void fn_806FE090(void);
void fn_806FE0F0(void);
void fn_806FE1F0(void);
void fn_806FE3E0(void);
void fn_806FE5C0(void);
void fn_806FE740(void);
void fn_806FE760(void);
void fn_806FE7B0(void);
void fn_806FE820(void);
void fn_806FE830(void);
void fn_806FE840(void);
void fn_806FE8B0(void);
void fn_806FE900(void);
void fn_806FE940(void);
void fn_806FE9A0(void);
void fn_806FEA20(void);
void fn_806FEAA0(void);
void fn_806FEBD0(void);
void fn_806FEC60(void);
void fn_806FEC90(void);
void fn_806FECA0(void);
void fn_806FECB0(void);
void fn_806FECC0(void);
void fn_806FECD0(void);
void fn_806FED00(void);
void fn_806FED10(void);
void fn_806FED20(void);
void fn_806FED30(void);
void fn_806FED40(void);
void fn_806FEF30(void);

asm void pad_03_806FCFD4_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806FCFE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_808627F0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, lbl_808627F0@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806FCFE0_00000068
    lis r3, lbl_807C5D08@ha
    li r31, 0x0
    lwz r3, lbl_807C5D08@l(r3)
    bl fn_806FC4B0
    cmpwi r3, 0x0
    beq lbl_fn_806FCFE0_00000060
    lis r3, lbl_807C5D0C@ha
    lwz r3, lbl_807C5D0C@l(r3)
    bl fn_806FC4B0
    cmpwi r3, 0x0
    beq lbl_fn_806FCFE0_00000060
    li r31, 0x1
lbl_fn_806FCFE0_00000060:
    lis r3, lbl_808627F0@ha
    stw r31, lbl_808627F0@l(r3)
lbl_fn_806FCFE0_00000068:
    lis r31, lbl_808627E0@ha
    lwz r3, lbl_808627E0@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806FCFE0_000000A0
    bl fn_806D58F0
    subi r30, r3, 0x1
    b lbl_fn_806FCFE0_00000098
lbl_fn_806FCFE0_00000084:
    lwz r3, lbl_808627E0@l(r31)
    mr r4, r30
    bl fn_806D5900
    bl fn_806FC9C0
    subi r30, r30, 0x1
lbl_fn_806FCFE0_00000098:
    cmpwi r30, 0x0
    bge lbl_fn_806FCFE0_00000084
lbl_fn_806FCFE0_000000A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FD090(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    mr r31, r3
    addi r3, r1, 0xc
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    mr r29, r5
    stw r28, 0xc0(r1)
    mr r28, r4
    lwz r0, 0xc(r4)
    stw r0, 0xc(r1)
    bl fn_806A420C
    lhz r3, 0x10(r28)
    bl fn_806A4264
    lbz r0, 0x13(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806FD090_00000184
    lis r4, lbl_807C5D00@ha
    addi r3, r1, 0x6c
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    bl memcpy
    li r3, 0x4
    li r0, 0x6
    stb r3, 0x72(r1)
    stb r0, 0x73(r1)
    lwz r3, 0x4(r31)
    bl fn_806A426C
    stw r3, 0x74(r1)
    lwz r0, 0x8(r31)
    stb r0, 0x79(r1)
    lhz r3, 0x2(r29)
    bl fn_806A4264
    lwz r29, 0x4(r29)
    li r0, 0x2
    lwz r30, 0x18(r31)
    clrlwi r3, r3, 16
    stb r0, 0x19(r1)
    bl fn_806A4270
    sth r3, 0x1a(r1)
    mr r3, r30
    addi r4, r1, 0x6c
    addi r7, r1, 0x18
    stw r29, 0x1c(r1)
    li r5, 0x15
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
lbl_fn_806FD090_00000184:
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x4
    bge lbl_fn_806FD090_000002DC
    lbz r0, 0x13(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806FD090_000001D0
    cmplwi r0, 0x1
    li r4, 0x4
    bne lbl_fn_806FD090_000001B0
    li r4, 0x1
    b lbl_fn_806FD090_000001BC
lbl_fn_806FD090_000001B0:
    cmplwi r0, 0x2
    bne lbl_fn_806FD090_000001BC
    li r4, 0x2
lbl_fn_806FD090_000001BC:
    mr r3, r31
    li r5, -0x1
    li r6, 0x0
    bl fn_806FBE00
    b lbl_fn_806FD090_000002DC
lbl_fn_806FD090_000001D0:
    lwz r0, 0xc(r28)
    stw r0, 0x3c(r31)
    lhz r3, 0x10(r28)
    bl fn_806A4264
    lwz r12, 0xc(r31)
    li r29, 0x0
    sth r3, 0x40(r31)
    li r30, 0x4
    lwz r4, 0x14(r31)
    li r3, 0x4
    stw r29, 0x30(r31)
    stw r30, 0x1c(r31)
    mtctr r12
    bctrl
    lis r4, lbl_807C5D00@ha
    addi r3, r1, 0x20
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    bl memcpy
    li r0, 0x7
    stb r30, 0x26(r1)
    stb r0, 0x27(r1)
    lwz r3, 0x4(r31)
    bl fn_806A426C
    stw r3, 0x28(r1)
    lwz r0, 0x3c(r31)
    stw r0, 0x2c(r1)
    lhz r3, 0x40(r31)
    bl fn_806A4270
    sth r3, 0x30(r1)
    lbz r0, 0x42(r31)
    stb r0, 0x32(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806FD090_00000268
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806FD090_00000268
    li r29, 0x1
lbl_fn_806FD090_00000268:
    stb r29, 0x33(r1)
    addi r3, r1, 0x8
    lwz r0, 0x3c(r31)
    stw r0, 0x8(r1)
    bl fn_806A420C
    lwz r30, 0x0(r31)
    lhz r3, 0x40(r31)
    cmpwi r30, -0x1
    lwz r29, 0x3c(r31)
    beq lbl_fn_806FD090_00000294
    b lbl_fn_806FD090_00000298
lbl_fn_806FD090_00000294:
    lwz r30, 0x18(r31)
lbl_fn_806FD090_00000298:
    li r0, 0x2
    stb r0, 0x11(r1)
    bl fn_806A4270
    sth r3, 0x12(r1)
    mr r3, r30
    addi r4, r1, 0x20
    addi r7, r1, 0x10
    stw r29, 0x14(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    bl fn_806D8F30
    addi r3, r3, 0x2bc
    li r0, 0x7
    stw r3, 0x38(r31)
    stw r0, 0x34(r31)
lbl_fn_806FD090_000002DC:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r28, 0xc0(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_806FD2D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lbz r0, 0x7(r4)
    cmpwi r0, 0x1
    beq lbl_fn_806FD2D0_00000340
    cmpwi r0, 0x2
    beq lbl_fn_806FD2D0_000003D4
    cmpwi r0, 0xe
    beq lbl_fn_806FD2D0_00000424
    b lbl_fn_806FD2D0_0000042C
lbl_fn_806FD2D0_00000340:
    lbz r0, 0xc(r4)
    cmplwi r0, 0x3
    bgt lbl_fn_806FD2D0_0000042C
    clrlslwi r0, r0, 24, 2
    li r5, 0x1
    add r4, r3, r0
    stw r5, 0x20(r4)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806FD2D0_0000042C
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806FD2D0_0000042C
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806FD2D0_0000042C
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806FD2D0_0000042C
    lwz r0, 0x0(r3)
    cmpwi r0, -0x1
    beq lbl_fn_806FD2D0_000003A4
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806FD2D0_0000042C
lbl_fn_806FD2D0_000003A4:
    li r0, 0x3
    stw r0, 0x1c(r3)
    bl fn_806D8F30
    lwz r12, 0xc(r31)
    addis r3, r3, 0x1
    subi r0, r3, 0x15a0
    stw r0, 0x38(r31)
    lwz r3, 0x1c(r31)
    lwz r4, 0x14(r31)
    mtctr r12
    bctrl
    b lbl_fn_806FD2D0_0000042C
lbl_fn_806FD2D0_000003D4:
    li r0, 0x3
    stb r0, 0x7(r4)
    lhz r3, 0x2(r5)
    bl fn_806A4264
    lwz r30, 0x4(r30)
    li r0, 0x2
    lwz r31, 0x18(r31)
    clrlwi r3, r3, 16
    stb r0, 0x9(r1)
    bl fn_806A4270
    sth r3, 0xa(r1)
    mr r3, r31
    mr r4, r29
    addi r7, r1, 0x8
    stw r30, 0xc(r1)
    li r5, 0x15
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    b lbl_fn_806FD2D0_0000042C
lbl_fn_806FD2D0_00000424:
    li r0, 0x8
    stw r0, 0x1c(r3)
lbl_fn_806FD2D0_0000042C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FD420(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_27
    lis r6, lbl_807C5D00@ha
    mr r28, r4
    mr r30, r5
    mr r29, r3
    addi r4, r6, lbl_807C5D00@l
    li r5, 0x6
    bl fn_8067E23C
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_806FD420_0000086C
    lbz r27, 0x7(r29)
    addi r3, r1, 0x14
    lwz r0, 0x4(r30)
    stw r0, 0x14(r1)
    bl fn_806A420C
    lhz r3, 0x2(r30)
    bl fn_806A4264
    cmplwi r27, 0x5
    beq lbl_fn_806FD420_000004B4
    cmplwi r27, 0x7
    bne lbl_fn_806FD420_000006EC
lbl_fn_806FD420_000004B4:
    cmpwi r28, 0x14
    blt lbl_fn_806FD420_0000086C
    mr r4, r29
    addi r3, r1, 0x6c
    li r5, 0x14
    bl memcpy
    lwz r3, 0x74(r1)
    bl fn_806A4260
    lis r29, lbl_808627E0@ha
    mr r31, r3
    lwz r0, lbl_808627E0@l(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806FD420_000004F0
    li r31, 0x0
    b lbl_fn_806FD420_00000530
lbl_fn_806FD420_000004F0:
    li r28, 0x0
    b lbl_fn_806FD420_0000051C
lbl_fn_806FD420_000004F8:
    lwz r3, lbl_808627E0@l(r29)
    mr r4, r28
    bl fn_806D5900
    lwz r0, 0x4(r3)
    cmpw r0, r31
    bne lbl_fn_806FD420_00000518
    mr r31, r3
    b lbl_fn_806FD420_00000530
lbl_fn_806FD420_00000518:
    addi r28, r28, 0x1
lbl_fn_806FD420_0000051C:
    lwz r3, lbl_808627E0@l(r29)
    bl fn_806D58F0
    cmpw r28, r3
    blt lbl_fn_806FD420_000004F8
    li r31, 0x0
lbl_fn_806FD420_00000530:
    cmpwi r31, 0x0
    bne lbl_fn_806FD420_00000544
    lwz r3, 0x74(r1)
    bl fn_806A4260
    b lbl_fn_806FD420_0000086C
lbl_fn_806FD420_00000544:
    cmplwi r27, 0x5
    bne lbl_fn_806FD420_00000560
    mr r3, r31
    mr r5, r30
    addi r4, r1, 0x6c
    bl fn_806FD090
    b lbl_fn_806FD420_0000086C
lbl_fn_806FD420_00000560:
    lwz r0, 0x4(r30)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806A420C
    lhz r3, 0x2(r30)
    bl fn_806A4264
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x4
    blt lbl_fn_806FD420_0000086C
    lwz r0, 0x4(r30)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl fn_806A420C
    lhz r3, 0x2(r30)
    bl fn_806A4264
    lwz r0, 0x4(r30)
    stw r0, 0x3c(r31)
    lhz r3, 0x2(r30)
    bl fn_806A4264
    sth r3, 0x40(r31)
    li r29, 0x1
    lis r4, lbl_807C5D00@ha
    addi r3, r1, 0x20
    stb r29, 0x42(r31)
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    lbz r6, 0x7e(r1)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stb r0, 0x43(r31)
    bl memcpy
    li r3, 0x4
    li r0, 0x7
    stb r3, 0x26(r1)
    stb r0, 0x27(r1)
    lwz r3, 0x4(r31)
    bl fn_806A426C
    stw r3, 0x28(r1)
    lwz r0, 0x3c(r31)
    stw r0, 0x2c(r1)
    lhz r3, 0x40(r31)
    bl fn_806A4270
    sth r3, 0x30(r1)
    li r3, 0x0
    lbz r0, 0x42(r31)
    stb r0, 0x32(r1)
    lbz r0, 0x42(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806FD420_00000638
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806FD420_00000638
    mr r3, r29
lbl_fn_806FD420_00000638:
    stb r3, 0x33(r1)
    addi r3, r1, 0x10
    lwz r0, 0x3c(r31)
    stw r0, 0x10(r1)
    bl fn_806A420C
    lwz r29, 0x0(r31)
    lhz r3, 0x40(r31)
    cmpwi r29, -0x1
    lwz r28, 0x3c(r31)
    beq lbl_fn_806FD420_00000664
    b lbl_fn_806FD420_00000668
lbl_fn_806FD420_00000664:
    lwz r29, 0x18(r31)
lbl_fn_806FD420_00000668:
    li r0, 0x2
    stb r0, 0x19(r1)
    bl fn_806A4270
    sth r3, 0x1a(r1)
    mr r3, r29
    addi r4, r1, 0x20
    addi r7, r1, 0x18
    stw r28, 0x1c(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    bl fn_806D8F30
    addi r0, r3, 0x2bc
    stw r0, 0x38(r31)
    li r0, 0x7
    stw r0, 0x34(r31)
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x4
    bne lbl_fn_806FD420_0000086C
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806FD420_0000086C
    lwz r5, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    cmpwi r5, -0x1
    beq lbl_fn_806FD420_000006DC
    b lbl_fn_806FD420_000006E0
lbl_fn_806FD420_000006DC:
    lwz r5, 0x18(r31)
lbl_fn_806FD420_000006E0:
    mr r6, r30
    bl fn_806FBE00
    b lbl_fn_806FD420_0000086C
lbl_fn_806FD420_000006EC:
    cmplwi r27, 0x10
    bne lbl_fn_806FD420_000007D4
    cmpwi r28, 0x12
    blt lbl_fn_806FD420_0000086C
    mr r4, r29
    addi r3, r1, 0x6c
    li r5, 0x12
    bl memcpy
    lwz r3, 0x74(r1)
    bl fn_806A4260
    lis r29, lbl_808627E0@ha
    mr r30, r3
    lwz r0, lbl_808627E0@l(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806FD420_00000730
    li r28, 0x0
    b lbl_fn_806FD420_00000770
lbl_fn_806FD420_00000730:
    li r28, 0x0
    b lbl_fn_806FD420_0000075C
lbl_fn_806FD420_00000738:
    lwz r3, lbl_808627E0@l(r29)
    mr r4, r28
    bl fn_806D5900
    lwz r0, 0x4(r3)
    cmpw r0, r30
    bne lbl_fn_806FD420_00000758
    mr r28, r3
    b lbl_fn_806FD420_00000770
lbl_fn_806FD420_00000758:
    addi r28, r28, 0x1
lbl_fn_806FD420_0000075C:
    lwz r3, lbl_808627E0@l(r29)
    bl fn_806D58F0
    cmpw r28, r3
    blt lbl_fn_806FD420_00000738
    li r28, 0x0
lbl_fn_806FD420_00000770:
    cmpwi r28, 0x0
    beq lbl_fn_806FD420_0000086C
    lwz r0, 0x1c(r28)
    cmpwi r0, 0x1
    beq lbl_fn_806FD420_000007BC
    li r0, 0x1
    stw r0, 0x1c(r28)
    li r3, 0x1
    lwz r12, 0xc(r28)
    lwz r4, 0x14(r28)
    mtctr r12
    bctrl
    bl fn_806D8F30
    addi r0, r3, 0x2710
    stw r0, 0x38(r28)
    li r3, 0x0
    stw r3, 0x30(r28)
    li r0, 0xc
    stw r0, 0x34(r28)
lbl_fn_806FD420_000007BC:
    lbz r0, 0x79(r1)
    cmpwi r0, 0x2
    bne lbl_fn_806FD420_0000086C
    mr r3, r28
    bl fn_806FC170
    b lbl_fn_806FD420_0000086C
lbl_fn_806FD420_000007D4:
    cmpwi r28, 0x15
    blt lbl_fn_806FD420_0000086C
    mr r4, r29
    addi r3, r1, 0x6c
    li r5, 0x15
    bl memcpy
    lwz r3, 0x74(r1)
    bl fn_806A4260
    lis r31, lbl_808627E0@ha
    mr r29, r3
    lwz r0, lbl_808627E0@l(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FD420_00000810
    li r3, 0x0
    b lbl_fn_806FD420_0000084C
lbl_fn_806FD420_00000810:
    li r28, 0x0
    b lbl_fn_806FD420_00000838
lbl_fn_806FD420_00000818:
    lwz r3, lbl_808627E0@l(r31)
    mr r4, r28
    bl fn_806D5900
    lwz r0, 0x4(r3)
    cmpw r0, r29
    bne lbl_fn_806FD420_00000834
    b lbl_fn_806FD420_0000084C
lbl_fn_806FD420_00000834:
    addi r28, r28, 0x1
lbl_fn_806FD420_00000838:
    lwz r3, lbl_808627E0@l(r31)
    bl fn_806D58F0
    cmpw r28, r3
    blt lbl_fn_806FD420_00000818
    li r3, 0x0
lbl_fn_806FD420_0000084C:
    cmpwi r3, 0x0
    bne lbl_fn_806FD420_00000860
    lwz r3, 0x74(r1)
    bl fn_806A4260
    b lbl_fn_806FD420_0000086C
lbl_fn_806FD420_00000860:
    mr r5, r30
    addi r4, r1, 0x6c
    bl fn_806FD2D0
lbl_fn_806FD420_0000086C:
    addi r11, r1, 0xd0
    bl _restgpr_27
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_806FD860(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    cmpwi r4, 0x0
    stw r31, 0xc(r1)
    bne lbl_fn_806FD860_000008A4
    li r3, 0x0
    b lbl_fn_806FD860_0000092C
lbl_fn_806FD860_000008A4:
    li r12, 0x0
    li r31, 0x1
    b lbl_fn_806FD860_000008BC
    nop
lbl_fn_806FD860_000008B4:
    slwi r9, r31, 1
    addi r31, r9, 0x1
lbl_fn_806FD860_000008BC:
    cmplw r31, r4
    blt lbl_fn_806FD860_000008B4
    li r9, 0x0
lbl_fn_806FD860_000008C8:
    lwz r10, 0x0(r8)
    lbz r11, 0x0(r7)
    lbzx r0, r5, r10
    addi r10, r10, 0x1
    lbzx r11, r3, r11
    cmplw r10, r6
    add r0, r11, r0
    stb r0, 0x0(r7)
    stw r10, 0x0(r8)
    blt lbl_fn_806FD860_00000900
    stw r9, 0x0(r8)
    lbz r0, 0x0(r7)
    add r0, r0, r6
    stb r0, 0x0(r7)
lbl_fn_806FD860_00000900:
    addi r12, r12, 0x1
    lbz r0, 0x0(r7)
    cmplwi r12, 0xb
    and r10, r31, r0
    ble lbl_fn_806FD860_00000920
    divwu r0, r10, r4
    mullw r0, r0, r4
    subf r10, r0, r10
lbl_fn_806FD860_00000920:
    cmplw r10, r4
    bgt lbl_fn_806FD860_000008C8
    clrlwi r3, r10, 24
lbl_fn_806FD860_0000092C:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_806FD910(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmplwi r5, 0x1
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bge lbl_fn_806FD910_00000A34
    li r0, 0x10
    li r8, 0x1
    li r7, 0x3
    li r6, 0x5
    li r5, 0x7
    li r4, 0xb
    stb r8, 0x100(r3)
    li r11, 0x0
    li r10, 0xff
    stb r7, 0x101(r3)
    stb r6, 0x102(r3)
    stb r5, 0x103(r3)
    stb r4, 0x104(r3)
    mtctr r0
lbl_fn_806FD910_0000099C:
    stbx r10, r3, r11
    add r12, r3, r11
    subi r9, r10, 0x1
    subi r8, r10, 0x2
    stb r9, 0x1(r12)
    subi r7, r10, 0x3
    subi r6, r10, 0x4
    subi r5, r10, 0x5
    stb r8, 0x2(r12)
    subi r4, r10, 0x6
    subi r0, r10, 0x7
    addi r11, r11, 0x8
    stb r7, 0x3(r12)
    subi r9, r10, 0x9
    subi r8, r10, 0xa
    subi r7, r10, 0xb
    stb r6, 0x4(r12)
    subi r6, r10, 0xc
    stb r5, 0x5(r12)
    subi r5, r10, 0xd
    stb r4, 0x6(r12)
    subi r4, r10, 0xe
    stb r0, 0x7(r12)
    subi r0, r10, 0xf
    subi r10, r10, 0x8
    add r12, r3, r11
    stbx r10, r3, r11
    addi r11, r11, 0x8
    subi r10, r10, 0x8
    stb r9, 0x1(r12)
    stb r8, 0x2(r12)
    stb r7, 0x3(r12)
    stb r6, 0x4(r12)
    stb r5, 0x5(r12)
    stb r4, 0x6(r12)
    stb r0, 0x7(r12)
    bdnz lbl_fn_806FD910_0000099C
    b lbl_fn_806FD910_00000BD0
lbl_fn_806FD910_00000A34:
    li r0, 0x8
    li r11, 0x0
    mtctr r0
lbl_fn_806FD910_00000A40:
    stbx r11, r3, r11
    add r10, r3, r11
    addi r9, r11, 0x1
    addi r8, r11, 0x2
    stb r9, 0x1(r10)
    addi r7, r11, 0x3
    addi r6, r11, 0x4
    addi r5, r11, 0x5
    stb r8, 0x2(r10)
    addi r4, r11, 0x6
    addi r0, r11, 0x7
    addi r9, r11, 0x9
    stb r7, 0x3(r10)
    addi r8, r11, 0xa
    addi r7, r11, 0xb
    stb r6, 0x4(r10)
    addi r6, r11, 0xc
    stb r5, 0x5(r10)
    addi r5, r11, 0xd
    stb r4, 0x6(r10)
    addi r4, r11, 0xe
    addi r11, r11, 0x8
    stb r0, 0x7(r10)
    add r10, r3, r11
    addi r0, r11, 0x7
    stbx r11, r3, r11
    stb r9, 0x1(r10)
    addi r9, r11, 0x9
    stb r8, 0x2(r10)
    addi r8, r11, 0xa
    stb r7, 0x3(r10)
    addi r7, r11, 0xb
    stb r6, 0x4(r10)
    addi r6, r11, 0xc
    stb r5, 0x5(r10)
    addi r5, r11, 0xd
    stb r4, 0x6(r10)
    addi r4, r11, 0xe
    addi r11, r11, 0x8
    stb r0, 0x7(r10)
    add r10, r3, r11
    addi r0, r11, 0x7
    stbx r11, r3, r11
    stb r9, 0x1(r10)
    addi r9, r11, 0x9
    stb r8, 0x2(r10)
    addi r8, r11, 0xa
    stb r7, 0x3(r10)
    addi r7, r11, 0xb
    stb r6, 0x4(r10)
    addi r6, r11, 0xc
    stb r5, 0x5(r10)
    addi r5, r11, 0xd
    stb r4, 0x6(r10)
    addi r4, r11, 0xe
    addi r11, r11, 0x8
    stb r0, 0x7(r10)
    add r10, r3, r11
    addi r0, r11, 0x7
    stbx r11, r3, r11
    addi r11, r11, 0x8
    stb r9, 0x1(r10)
    stb r8, 0x2(r10)
    stb r7, 0x3(r10)
    stb r6, 0x4(r10)
    stb r5, 0x5(r10)
    stb r4, 0x6(r10)
    stb r0, 0x7(r10)
    bdnz lbl_fn_806FD910_00000A40
    li r0, 0x0
    stw r0, 0xc(r1)
    addi r28, r3, 0xff
    li r27, 0xff
    stb r0, 0x8(r1)
lbl_fn_806FD910_00000B68:
    mr r3, r29
    mr r4, r27
    mr r5, r30
    mr r6, r31
    addi r7, r1, 0x8
    addi r8, r1, 0xc
    bl fn_806FD860
    clrlwi r3, r3, 24
    lbz r4, 0x0(r28)
    lbzx r0, r29, r3
    subic. r27, r27, 0x1
    stb r0, 0x0(r28)
    subi r28, r28, 0x1
    stbx r4, r29, r3
    bge lbl_fn_806FD910_00000B68
    lbz r5, 0x1(r29)
    lbz r4, 0x3(r29)
    lbz r3, 0x5(r29)
    lbz r0, 0x7(r29)
    stb r5, 0x100(r29)
    stb r4, 0x101(r29)
    stb r3, 0x102(r29)
    stb r0, 0x103(r29)
    lbz r0, 0x8(r1)
    lbzx r0, r29, r0
    stb r0, 0x104(r29)
lbl_fn_806FD910_00000BD0:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806FDBC0(void)
{
    nofralloc
    mtctr r5
    cmpwi r5, 0x0
    blelr
lbl_fn_806FDBC0_00000BF8:
    lbz r5, 0x100(r3)
    lbz r0, 0x0(r4)
    addi r7, r5, 0x1
    lbzx r5, r3, r5
    lbz r8, 0x101(r3)
    lbz r6, 0x104(r3)
    add r5, r8, r5
    stb r5, 0x101(r3)
    clrlwi r5, r5, 24
    stb r7, 0x100(r3)
    lbzx r7, r3, r6
    lbzx r5, r3, r5
    stbx r5, r3, r6
    lbz r6, 0x103(r3)
    lbz r5, 0x101(r3)
    lbzx r6, r3, r6
    stbx r6, r3, r5
    lbz r6, 0x100(r3)
    lbz r5, 0x103(r3)
    lbzx r6, r3, r6
    stbx r6, r3, r5
    lbz r5, 0x100(r3)
    stbx r7, r3, r5
    lbzx r5, r3, r7
    lbz r6, 0x102(r3)
    lbz r7, 0x101(r3)
    add r5, r6, r5
    stb r5, 0x102(r3)
    clrlwi r10, r5, 24
    lbz r6, 0x103(r3)
    lbzx r8, r3, r7
    lbz r5, 0x104(r3)
    lbzx r7, r3, r6
    lbzx r6, r3, r5
    add r5, r8, r7
    lbz r9, 0x100(r3)
    add r5, r6, r5
    lbzx r7, r3, r10
    lbzx r6, r3, r9
    clrlwi r5, r5, 24
    lbzx r5, r3, r5
    add r6, r7, r6
    clrlwi r6, r6, 24
    lbzx r5, r3, r5
    lbzx r6, r3, r6
    xor r6, r0, r6
    stb r0, 0x104(r3)
    xor r5, r6, r5
    stb r5, 0x103(r3)
    stb r5, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_fn_806FDBC0_00000BF8
    blr
}

asm void fn_806FDCA0(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    li r6, 0x0
    b lbl_fn_806FDCA0_00000D34
    nop
lbl_fn_806FDCA0_00000CDC:
    cmplw r5, r4
    bne lbl_fn_806FDCA0_00000D2C
    cmpwi r6, 0x0
    beq lbl_fn_806FDCA0_00000CF4
    lwz r0, 0x24(r5)
    stw r0, 0x24(r6)
lbl_fn_806FDCA0_00000CF4:
    lwz r0, 0x0(r3)
    cmplw r0, r5
    bne lbl_fn_806FDCA0_00000D08
    lwz r0, 0x24(r5)
    stw r0, 0x0(r3)
lbl_fn_806FDCA0_00000D08:
    lwz r0, 0x4(r3)
    cmplw r0, r5
    bne lbl_fn_806FDCA0_00000D18
    stw r6, 0x4(r3)
lbl_fn_806FDCA0_00000D18:
    lwz r4, 0x8(r3)
    subi r0, r4, 0x1
    stw r0, 0x8(r3)
    li r3, 0x1
    blr
lbl_fn_806FDCA0_00000D2C:
    mr r6, r5
    lwz r5, 0x24(r5)
lbl_fn_806FDCA0_00000D34:
    cmpwi r5, 0x0
    bne lbl_fn_806FDCA0_00000CDC
    li r3, 0x0
    blr
}

asm void fn_806FDD20(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x2
    stw r31, 0x12c(r1)
    mr r31, r4
    stw r30, 0x128(r1)
    mr r30, r3
    stw r29, 0x124(r1)
    li r29, 0x0
    stb r0, 0x11(r1)
    bl fn_806D8F30
    lbz r4, 0x14(r31)
    stw r3, 0x1c(r31)
    rlwinm. r0, r4, 0, 26, 26
    bne lbl_fn_806FDD20_00000F68
    lwz r0, 0x0(r30)
    cmpwi r0, 0x1
    bne lbl_fn_806FDD20_00000ED4
    rlwinm. r0, r4, 0, 24, 24
    beq lbl_fn_806FDD20_00000DD4
    addi r3, r1, 0x18
    li r4, 0xfe
    li r5, 0xfd
    li r0, 0x9
    stb r4, 0x18(r1)
    addi r4, r31, 0x1c
    addi r3, r3, 0x3
    stb r5, 0x19(r1)
    li r5, 0x4
    stb r0, 0x1a(r1)
    bl memcpy
    li r5, 0x7
    b lbl_fn_806FDD20_00000F10
lbl_fn_806FDD20_00000DD4:
    lwz r3, 0x20(r31)
    bl fn_806A426C
    addi r29, r1, 0x18
    stw r3, 0x8(r1)
    mr r3, r29
    li r4, 0xfe
    li r6, 0xfd
    li r0, 0x0
    stb r4, 0x18(r1)
    addi r4, r31, 0x1c
    li r5, 0x4
    addi r3, r3, 0x3
    stb r6, 0x19(r1)
    stb r0, 0x1a(r1)
    bl memcpy
    lwz r0, 0x8(r1)
    li r6, 0x7
    cmpwi r0, 0x0
    beq lbl_fn_806FDD20_00000E38
    mr r3, r29
    addi r4, r1, 0x8
    li r5, 0x4
    addi r3, r3, 0x7
    bl memcpy
    li r6, 0xb
lbl_fn_806FDD20_00000E38:
    lbz r0, 0x14(r31)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_806FDD20_00000EA4
    addi r3, r1, 0x18
    lwz r0, 0x54(r30)
    stbx r0, r3, r6
    addi r6, r6, 0x1
    li r5, 0x0
    add r3, r3, r6
    b lbl_fn_806FDD20_00000E7C
    nop
lbl_fn_806FDD20_00000E64:
    add r4, r30, r5
    addi r5, r5, 0x1
    lbz r0, 0x2c(r4)
    addi r6, r6, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_fn_806FDD20_00000E7C:
    lwz r0, 0x54(r30)
    cmpw r5, r0
    blt lbl_fn_806FDD20_00000E64
    addi r3, r1, 0x18
    li r0, 0x0
    stbx r0, r3, r6
    addi r5, r6, 0x2
    addi r6, r6, 0x1
    stbx r0, r3, r6
    b lbl_fn_806FDD20_00000F10
lbl_fn_806FDD20_00000EA4:
    addi r3, r1, 0x18
    li r4, 0xff
    stbx r4, r3, r6
    addi r6, r6, 0x1
    li r0, 0x1
    stbx r4, r3, r6
    addi r6, r6, 0x1
    addi r5, r6, 0x2
    stbx r4, r3, r6
    addi r6, r6, 0x1
    stbx r0, r3, r6
    b lbl_fn_806FDD20_00000F10
lbl_fn_806FDD20_00000ED4:
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_fn_806FDD20_00000EF8
    lis r4, lbl_807C5D70@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_807C5D70@l
    li r5, 0xd
    bl memcpy
    li r5, 0xd
    b lbl_fn_806FDD20_00000F10
lbl_fn_806FDD20_00000EF8:
    lis r4, lbl_807C5D80@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_807C5D80@l
    li r5, 0x8
    bl memcpy
    li r5, 0x8
lbl_fn_806FDD20_00000F10:
    lwz r3, 0x0(r31)
    lwz r0, 0x28(r30)
    cmplw r3, r0
    bne lbl_fn_806FDD20_00000F40
    lbz r0, 0x15(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_806FDD20_00000F40
    lwz r0, 0x8(r31)
    stw r0, 0x14(r1)
    lhz r0, 0xc(r31)
    sth r0, 0x12(r1)
    b lbl_fn_806FDD20_00000F4C
lbl_fn_806FDD20_00000F40:
    stw r3, 0x14(r1)
    lhz r0, 0x4(r31)
    sth r0, 0x12(r1)
lbl_fn_806FDD20_00000F4C:
    lwz r3, 0x20(r30)
    addi r4, r1, 0x18
    addi r7, r1, 0x10
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    li r29, 0x1
lbl_fn_806FDD20_00000F68:
    cmpwi r29, 0x0
    beq lbl_fn_806FDD20_00000FAC
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806FDD20_00000F80
    stw r31, 0x24(r3)
lbl_fn_806FDD20_00000F80:
    stw r31, 0xc(r30)
    li r0, 0x0
    stw r0, 0x24(r31)
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806FDD20_00000F9C
    stw r31, 0x8(r30)
lbl_fn_806FDD20_00000F9C:
    lwz r3, 0x10(r30)
    addi r0, r3, 0x1
    stw r0, 0x10(r30)
    b lbl_fn_806FDD20_00000FB4
lbl_fn_806FDD20_00000FAC:
    li r0, 0x0
    stw r0, 0x1c(r31)
lbl_fn_806FDD20_00000FB4:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_806FDFB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r6, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r7
    mr r30, r8
    bne lbl_fn_806FDFB0_0000101C
    lis r3, lbl_80860DD0@ha
    lwz r0, lbl_80860DD0@l(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806FDFB0_00001068
lbl_fn_806FDFB0_0000101C:
    bl fn_806D8F10
    li r31, 0x0
    stw r28, 0x0(r26)
    li r3, 0x2
    li r4, 0x2
    stw r27, 0x4(r26)
    li r5, 0x11
    stw r31, 0x54(r26)
    stw r29, 0x58(r26)
    stw r30, 0x5c(r26)
    stw r31, 0x28(r26)
    bl fn_806D7AE0
    stw r3, 0x20(r26)
    stw r31, 0x18(r26)
    stw r31, 0x14(r26)
    stw r31, 0x1c(r26)
    stw r31, 0xc(r26)
    stw r31, 0x8(r26)
    stw r31, 0x10(r26)
lbl_fn_806FDFB0_00001068:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FE060(void)
{
    nofralloc
    stw r4, 0x28(r3)
    blr
}

asm void fn_806FE070(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x18(r3)
    stw r0, 0x14(r3)
    stw r0, 0x1c(r3)
    stw r0, 0xc(r3)
    stw r0, 0x8(r3)
    stw r0, 0x10(r3)
    blr
}

asm void fn_806FE090(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x20(r3)
    bl fn_806D7B30
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x20(r31)
    stw r0, 0x18(r31)
    stw r0, 0x14(r31)
    stw r0, 0x1c(r31)
    stw r0, 0xc(r31)
    stw r0, 0x8(r31)
    stw r0, 0x10(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FE0F0(void)
{
    nofralloc
    lbz r8, 0x14(r4)
    li r0, 0x0
    cmpwi cr1, r6, 0x2
    stb r0, 0x28(r4)
    andi. r8, r8, 0x43
    stw r0, 0x20(r4)
    stb r8, 0x14(r4)
    beqlr cr1
    cmpwi r6, 0x0
    beq lbl_fn_806FE0F0_00001154
    cmpwi r6, 0x1
    beq lbl_fn_806FE0F0_00001160
    blr
    blr
lbl_fn_806FE0F0_00001154:
    ori r0, r8, 0x4
    stb r0, 0x14(r4)
    b lbl_fn_806FE0F0_00001170
lbl_fn_806FE0F0_00001160:
    ori r0, r8, 0x8
    stb r0, 0x14(r4)
    b lbl_fn_806FE0F0_00001170
    blr
lbl_fn_806FE0F0_00001170:
    cmpwi r7, 0x0
    beq lbl_fn_806FE0F0_0000118C
    cmplwi r6, 0x1
    bgt lbl_fn_806FE0F0_0000118C
    lbz r0, 0x14(r4)
    ori r0, r0, 0x80
    stb r0, 0x14(r4)
lbl_fn_806FE0F0_0000118C:
    lwz r6, 0x10(r3)
    lwz r0, 0x4(r3)
    cmpw r6, r0
    bge lbl_fn_806FE0F0_000011A0
    b fn_806FDD20
lbl_fn_806FE0F0_000011A0:
    cmpwi r5, 0x0
    beq lbl_fn_806FE0F0_000011D4
    lwz r0, 0x14(r3)
    stw r0, 0x24(r4)
    lwz r0, 0x18(r3)
    stw r4, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806FE0F0_000011C4
    stw r4, 0x18(r3)
lbl_fn_806FE0F0_000011C4:
    lwz r4, 0x1c(r3)
    addi r0, r4, 0x1
    stw r0, 0x1c(r3)
    blr
lbl_fn_806FE0F0_000011D4:
    lwz r5, 0x18(r3)
    cmpwi r5, 0x0
    beq lbl_fn_806FE0F0_000011E4
    stw r4, 0x24(r5)
lbl_fn_806FE0F0_000011E4:
    stw r4, 0x18(r3)
    li r0, 0x0
    stw r0, 0x24(r4)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806FE0F0_00001200
    stw r4, 0x14(r3)
lbl_fn_806FE0F0_00001200:
    lwz r4, 0x1c(r3)
    addi r0, r4, 0x1
    stw r0, 0x1c(r3)
    blr
}

asm void fn_806FE1F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lbz r0, 0x0(r5)
    mr r28, r3
    mr r29, r4
    extsb. r0, r0
    beq lbl_fn_806FE1F0_0000124C
    cmpwi r0, 0x9
    bne lbl_fn_806FE1F0_000013F4
lbl_fn_806FE1F0_0000124C:
    lbz r3, 0x14(r4)
    addi r30, r5, 0x5
    subi r31, r6, 0x5
    rlwinm. r0, r3, 0, 24, 24
    beq lbl_fn_806FE1F0_000012B4
    cmpwi r31, 0x0
    clrlwi r0, r3, 25
    stb r0, 0x14(r4)
    ble lbl_fn_806FE1F0_000013B0
    mr r3, r30
    bl fn_80684600
    stw r3, 0x20(r29)
    mr r4, r29
    addi r3, r28, 0x8
    bl fn_806FDCA0
    mr r3, r28
    mr r4, r29
    bl fn_806FDD20
    lwz r12, 0x58(r28)
    mr r3, r28
    mr r5, r29
    lwz r6, 0x5c(r28)
    li r4, 0x3
    mtctr r12
    bctrl
    b lbl_fn_806FE1F0_000013F4
lbl_fn_806FE1F0_000012B4:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_806FE1F0_00001340
    lis r27, lbl_807C5380@ha
    li r24, 0x0
    addi r27, r27, lbl_807C5380@l
    b lbl_fn_806FE1F0_00001324
lbl_fn_806FE1F0_000012CC:
    mr r3, r30
    mr r4, r31
    bl fn_80700890
    cmpwi r3, 0x0
    mr r26, r3
    blt lbl_fn_806FE1F0_00001330
    add r25, r28, r24
    lbz r0, 0x2c(r25)
    slwi r0, r0, 2
    lwzx r3, r27, r0
    bl fn_806F1D80
    cmpwi r3, 0x0
    bne lbl_fn_806FE1F0_00001318
    lbz r0, 0x2c(r25)
    mr r3, r29
    mr r5, r30
    slwi r0, r0, 2
    lwzx r4, r27, r0
    bl fn_806FE940
lbl_fn_806FE1F0_00001318:
    add r30, r30, r26
    subf r31, r26, r31
    addi r24, r24, 0x1
lbl_fn_806FE1F0_00001324:
    lwz r0, 0x54(r28)
    cmpw r24, r0
    blt lbl_fn_806FE1F0_000012CC
lbl_fn_806FE1F0_00001330:
    lbz r0, 0x14(r29)
    ori r0, r0, 0x41
    stb r0, 0x14(r29)
    b lbl_fn_806FE1F0_000013B0
lbl_fn_806FE1F0_00001340:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    beq lbl_fn_806FE1F0_00001394
    lis r3, lbl_807C5D8C@ha
    mr r4, r30
    addi r3, r3, lbl_807C5D8C@l
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806FE1F0_00001394
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_806FF130
    lbz r0, 0x28(r29)
    cmplwi r0, 0xff
    bne lbl_fn_806FE1F0_000013F4
    lbz r0, 0x14(r29)
    ori r0, r0, 0x43
    stb r0, 0x14(r29)
    b lbl_fn_806FE1F0_000013B0
lbl_fn_806FE1F0_00001394:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_806FEF30
    lbz r0, 0x14(r29)
    ori r0, r0, 0x43
    stb r0, 0x14(r29)
lbl_fn_806FE1F0_000013B0:
    lbz r0, 0x14(r29)
    andi. r0, r0, 0xf3
    stb r0, 0x14(r29)
    bl fn_806D8F30
    lwz r0, 0x1c(r29)
    mr r4, r29
    subf r0, r0, r3
    stw r0, 0x1c(r29)
    addi r3, r28, 0x8
    bl fn_806FDCA0
    lwz r12, 0x58(r28)
    mr r3, r28
    mr r5, r29
    lwz r6, 0x5c(r28)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_806FE1F0_000013F4:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806FE3E0(void)
{
    nofralloc
    stwu r1, -0x840(r1)
    mflr r0
    stw r0, 0x844(r1)
    addi r11, r1, 0x840
    bl _savegpr_24
    cmpwi r4, 0x0
    li r0, 0x8
    stw r0, 0x8(r1)
    mr r26, r3
    mr r27, r4
    li r28, 0x0
    bne lbl_fn_806FE3E0_00001440
    lwz r28, 0x20(r3)
lbl_fn_806FE3E0_00001440:
    addi r31, r1, 0x18
    lis r25, lbl_807C5D98@ha
    li r30, 0x0
    b lbl_fn_806FE3E0_000015C4
lbl_fn_806FE3E0_00001450:
    mr r3, r28
    addi r4, r1, 0x18
    addi r7, r1, 0x10
    addi r8, r1, 0x8
    li r5, 0x7ff
    li r6, 0x0
    bl fn_806D7CF0
    cmpwi r3, -0x1
    mr r6, r3
    beq lbl_fn_806FE3E0_000015D4
    stbx r30, r31, r3
    lwz r3, 0x14(r1)
    lwz r29, 0x8(r26)
    lhz r4, 0x12(r1)
    b lbl_fn_806FE3E0_000015BC
lbl_fn_806FE3E0_0000148C:
    cmpwi r27, 0x0
    beq lbl_fn_806FE3E0_000014AC
    lbz r0, 0x15(r29)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_806FE3E0_000014AC
    lwz r0, 0x10(r29)
    cmplw r0, r3
    beq lbl_fn_806FE3E0_000014FC
lbl_fn_806FE3E0_000014AC:
    lwz r5, 0x0(r29)
    cmplw r5, r3
    bne lbl_fn_806FE3E0_000014CC
    lhz r0, 0x4(r29)
    cmplw r0, r4
    beq lbl_fn_806FE3E0_000014FC
    cmpwi r27, 0x0
    bne lbl_fn_806FE3E0_000014FC
lbl_fn_806FE3E0_000014CC:
    lwz r0, 0x28(r26)
    cmplw r5, r0
    bne lbl_fn_806FE3E0_000015B8
    lbz r0, 0x15(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_806FE3E0_000015B8
    lwz r0, 0x8(r29)
    cmplw r0, r3
    bne lbl_fn_806FE3E0_000015B8
    lhz r0, 0xc(r29)
    cmplw r0, r4
    bne lbl_fn_806FE3E0_000015B8
lbl_fn_806FE3E0_000014FC:
    cmpwi r27, 0x0
    bne lbl_fn_806FE3E0_000015C4
    lwz r0, 0x0(r26)
    cmpwi r0, 0x1
    bne lbl_fn_806FE3E0_00001524
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x18
    bl fn_806FE1F0
    b lbl_fn_806FE3E0_000015C4
lbl_fn_806FE3E0_00001524:
    addi r3, r1, 0x18
    addi r4, r25, lbl_807C5D98@l
    bl fn_806827C4
    neg r0, r3
    addi r4, r1, 0x18
    or r0, r0, r3
    mr r3, r29
    srwi r24, r0, 31
    bl fn_806FED40
    cmpwi r24, 0x0
    beq lbl_fn_806FE3E0_000015C4
    lbz r3, 0x14(r29)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_806FE3E0_00001568
    ori r0, r3, 0x41
    stb r0, 0x14(r29)
    b lbl_fn_806FE3E0_00001570
lbl_fn_806FE3E0_00001568:
    ori r0, r3, 0x42
    stb r0, 0x14(r29)
lbl_fn_806FE3E0_00001570:
    lbz r0, 0x14(r29)
    andi. r0, r0, 0xf3
    stb r0, 0x14(r29)
    bl fn_806D8F30
    lwz r0, 0x1c(r29)
    mr r4, r29
    subf r0, r0, r3
    stw r0, 0x1c(r29)
    addi r3, r26, 0x8
    bl fn_806FDCA0
    lwz r12, 0x58(r26)
    mr r3, r26
    mr r5, r29
    lwz r6, 0x5c(r26)
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806FE3E0_000015C4
lbl_fn_806FE3E0_000015B8:
    lwz r29, 0x24(r29)
lbl_fn_806FE3E0_000015BC:
    cmpwi r29, 0x0
    bne lbl_fn_806FE3E0_0000148C
lbl_fn_806FE3E0_000015C4:
    mr r3, r28
    bl fn_806D8650
    cmpwi r3, 0x0
    bne lbl_fn_806FE3E0_00001450
lbl_fn_806FE3E0_000015D4:
    addi r11, r1, 0x840
    bl _restgpr_24
    lwz r0, 0x844(r1)
    mtlr r0
    addi r1, r1, 0x840
    blr
}

asm void fn_806FE5C0(void)
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
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806FE5C0_00001748
    li r4, 0x0
    bl fn_806FE3E0
    bl fn_806D8F30
    mr r28, r3
    li r29, 0x9c4
    li r30, 0x0
    b lbl_fn_806FE5C0_000016B0
lbl_fn_806FE5C0_00001634:
    lwz r3, 0x1c(r5)
    addi r0, r3, 0x9c4
    cmplw r28, r0
    ble lbl_fn_806FE5C0_000016BC
    lbz r0, 0x15(r5)
    mr r3, r31
    li r4, 0x1
    ori r0, r0, 0x10
    stb r0, 0x15(r5)
    lwz r5, 0x8(r31)
    stw r29, 0x1c(r5)
    lwz r5, 0x8(r31)
    lbz r0, 0x15(r5)
    andi. r0, r0, 0xd3
    stb r0, 0x15(r5)
    lwz r12, 0x58(r31)
    lwz r5, 0x8(r31)
    lwz r6, 0x5c(r31)
    mtctr r12
    bctrl
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806FE5C0_000016B0
    lwz r0, 0x24(r3)
    stw r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FE5C0_000016A4
    stw r30, 0xc(r31)
lbl_fn_806FE5C0_000016A4:
    lwz r3, 0x10(r31)
    subi r0, r3, 0x1
    stw r0, 0x10(r31)
lbl_fn_806FE5C0_000016B0:
    lwz r5, 0x8(r31)
    cmpwi r5, 0x0
    bne lbl_fn_806FE5C0_00001634
lbl_fn_806FE5C0_000016BC:
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806FE5C0_00001720
    li r30, 0x0
    b lbl_fn_806FE5C0_00001704
lbl_fn_806FE5C0_000016D0:
    lwz r4, 0x14(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806FE5C0_000016FC
    lwz r0, 0x24(r4)
    stw r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FE5C0_000016F0
    stw r30, 0x18(r31)
lbl_fn_806FE5C0_000016F0:
    lwz r3, 0x1c(r31)
    subi r0, r3, 0x1
    stw r0, 0x1c(r31)
lbl_fn_806FE5C0_000016FC:
    mr r3, r31
    bl fn_806FDD20
lbl_fn_806FE5C0_00001704:
    lwz r3, 0x10(r31)
    lwz r0, 0x4(r31)
    cmpw r3, r0
    bge lbl_fn_806FE5C0_00001720
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_806FE5C0_000016D0
lbl_fn_806FE5C0_00001720:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FE5C0_00001748
    lwz r12, 0x58(r31)
    mr r3, r31
    lwz r6, 0x5c(r31)
    li r4, 0x2
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_806FE5C0_00001748:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FE740(void)
{
    nofralloc
    lwz r6, 0x54(r3)
    cmpwi r6, 0x28
    bgelr
    add r5, r3, r6
    addi r0, r6, 0x1
    stb r4, 0x2c(r5)
    stw r0, 0x54(r3)
    blr
}

asm void fn_806FE760(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x8
    bl fn_806FDCA0
    cmpwi r3, 0x0
    bne lbl_fn_806FE760_000017C4
    mr r4, r31
    addi r3, r30, 0x14
    bl fn_806FDCA0
lbl_fn_806FE760_000017C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FE7B0(void)
{
    nofralloc
    lis r6, lbl_807BB380@ha
    lis r5, 0x9cd0
    addi r6, r6, lbl_807BB380@l
    lwz r7, 0x0(r3)
    lwz r6, 0x38(r6)
    subi r5, r5, 0x6ce7
    li r3, 0x0
    b lbl_fn_806FE7B0_00001830
lbl_fn_806FE7B0_000017FC:
    extsb r8, r8
    li r9, 0x1
    cmplwi r8, 0xff
    bgt lbl_fn_806FE7B0_00001810
    li r9, 0x0
lbl_fn_806FE7B0_00001810:
    mullw r0, r3, r5
    cmpwi r9, 0x0
    beq lbl_fn_806FE7B0_00001820
    b lbl_fn_806FE7B0_00001828
lbl_fn_806FE7B0_00001820:
    lwz r3, 0x10(r6)
    lbzx r8, r3, r8
lbl_fn_806FE7B0_00001828:
    add r3, r0, r8
    addi r7, r7, 0x1
lbl_fn_806FE7B0_00001830:
    lbz r8, 0x0(r7)
    extsb. r0, r8
    bne lbl_fn_806FE7B0_000017FC
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    blr
}

asm void fn_806FE820(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r4)
    b fn_8068B1FC
}

asm void fn_806FE830(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    b fn_806D7AC0
}

asm void fn_806FE840(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80862AF0@ha
    lwz r0, lbl_80862AF0@l(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FE840_000018B8
    lis r6, fn_806FE7B0@ha
    lis r7, fn_806FE820@ha
    lis r8, fn_806FE830@ha
    li r3, 0x8
    addi r6, r6, fn_806FE7B0@l
    addi r7, r7, fn_806FE820@l
    addi r8, r8, fn_806FE830@l
    li r4, 0x1f4
    li r5, 0x4
    bl fn_806D62F0
    stw r3, lbl_80862AF0@l(r31)
lbl_fn_806FE840_000018B8:
    lwz r31, 0xc(r1)
    lis r3, lbl_80862AF0@ha
    lwz r0, 0x14(r1)
    lwz r3, lbl_80862AF0@l(r3)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FE8B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80862AF0@ha
    lwz r3, lbl_80862AF0@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806FE8B0_00001918
    bl fn_806D6420
    cmpwi r3, 0x0
    bne lbl_fn_806FE8B0_00001918
    lwz r3, lbl_80862AF0@l(r31)
    bl fn_806D63A0
    li r0, 0x0
    stw r0, lbl_80862AF0@l(r31)
lbl_fn_806FE8B0_00001918:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FE900(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x0(r3)
    lwz r3, 0x18(r31)
    bl fn_806D63A0
    li r0, 0x0
    stw r0, 0x18(r31)
    mr r3, r31
    bl fn_806D7AC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FE940(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x8(r1)
    mr r4, r31
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0xc(r1)
    addi r4, r1, 0x8
    lwz r3, 0x18(r30)
    bl fn_806D64B0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FE9A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, lbl_807C5DA0@ha
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    addi r4, r6, lbl_807C5DA0@l
    stw r30, 0x28(r1)
    mr r30, r3
    addi r3, r1, 0x10
    crclr 6
    bl sprintf
    mr r4, r31
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x8(r1)
    addi r4, r1, 0x10
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0xc(r1)
    addi r4, r1, 0x8
    lwz r3, 0x18(r30)
    bl fn_806D64B0
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806FEA20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    bne lbl_fn_806FEA20_00001A74
    li r3, 0x0
    b lbl_fn_806FEA20_00001AAC
lbl_fn_806FEA20_00001A74:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x18(r3)
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_806FEA20_00001AA0
    lwz r31, 0x4(r3)
    mr r3, r31
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_806FEA20_00001AA8
lbl_fn_806FEA20_00001AA0:
    mr r3, r30
    b lbl_fn_806FEA20_00001AAC
lbl_fn_806FEA20_00001AA8:
    mr r3, r31
lbl_fn_806FEA20_00001AAC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FEAA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_806FEAA0_00001B00
    mr r3, r30
    b lbl_fn_806FEAA0_00001BE0
lbl_fn_806FEAA0_00001B00:
    lis r4, lbl_807C5DA4@ha
    mr r3, r31
    addi r4, r4, lbl_807C5DA4@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806FEAA0_00001B20
    lwz r3, 0x1c(r29)
    b lbl_fn_806FEAA0_00001BE0
lbl_fn_806FEAA0_00001B20:
    cmpwi r29, 0x0
    bne lbl_fn_806FEAA0_00001B30
    li r31, 0x0
    b lbl_fn_806FEAA0_00001B60
lbl_fn_806FEAA0_00001B30:
    stw r31, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x18(r29)
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_806FEAA0_00001B5C
    lwz r31, 0x4(r3)
    mr r3, r31
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_806FEAA0_00001B60
lbl_fn_806FEAA0_00001B5C:
    li r31, 0x0
lbl_fn_806FEAA0_00001B60:
    cmpwi r31, 0x0
    bne lbl_fn_806FEAA0_00001B70
    mr r3, r30
    b lbl_fn_806FEAA0_00001BE0
lbl_fn_806FEAA0_00001B70:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x2d
    beq lbl_fn_806FEAA0_00001B84
    mr r3, r31
    b lbl_fn_806FEAA0_00001B88
lbl_fn_806FEAA0_00001B84:
    addi r3, r31, 0x1
lbl_fn_806FEAA0_00001B88:
    lbz r0, 0x0(r3)
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_fn_806FEAA0_00001B9C
    li r3, 0x0
lbl_fn_806FEAA0_00001B9C:
    cmpwi r3, 0x0
    beq lbl_fn_806FEAA0_00001BAC
    li r0, 0x0
    b lbl_fn_806FEAA0_00001BC8
lbl_fn_806FEAA0_00001BAC:
    lis r3, lbl_807BB380@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_806FEAA0_00001BC8:
    cmpwi r0, 0x0
    bne lbl_fn_806FEAA0_00001BD8
    mr r3, r30
    b lbl_fn_806FEAA0_00001BE0
lbl_fn_806FEAA0_00001BD8:
    mr r3, r31
    bl fn_80684600
lbl_fn_806FEAA0_00001BE0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FEBD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    bne lbl_fn_806FEBD0_00001C24
    li r31, 0x0
    b lbl_fn_806FEBD0_00001C54
lbl_fn_806FEBD0_00001C24:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x18(r3)
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_806FEBD0_00001C50
    lwz r31, 0x4(r3)
    mr r3, r31
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_806FEBD0_00001C54
lbl_fn_806FEBD0_00001C50:
    li r31, 0x0
lbl_fn_806FEBD0_00001C54:
    cmpwi r31, 0x0
    bne lbl_fn_806FEBD0_00001C60
    b lbl_fn_806FEBD0_00001C6C
lbl_fn_806FEBD0_00001C60:
    mr r3, r31
    bl fn_80683B54
    fmr f31, f1
lbl_fn_806FEBD0_00001C6C:
    fmr f1, f31
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FEC60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r3)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806A420C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FEC90(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_806FECA0(void)
{
    nofralloc
    lhz r3, 0x4(r3)
    b fn_806A4264
}

asm void fn_806FECB0(void)
{
    nofralloc
    lhz r3, 0x4(r3)
    blr
}

asm void fn_806FECC0(void)
{
    nofralloc
    lbz r0, 0x15(r3)
    extrwi r3, r0, 1, 30
    blr
}

asm void fn_806FECD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x8(r3)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806A420C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FED00(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    blr
}

asm void fn_806FED10(void)
{
    nofralloc
    lhz r3, 0xc(r3)
    b fn_806A4264
}

asm void fn_806FED20(void)
{
    nofralloc
    stw r4, 0x24(r3)
    blr
}

asm void fn_806FED30(void)
{
    nofralloc
    lwz r3, 0x24(r3)
    blr
}

asm void fn_806FED40(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    addic. r0, r4, 0x1
    mr r29, r3
    beq lbl_fn_806FED40_00001D94
    lis r3, lbl_80862AF4@ha
    stw r0, lbl_80862AF4@l(r3)
lbl_fn_806FED40_00001D94:
    lis r4, lbl_80862AF4@ha
    lwz r31, lbl_80862AF4@l(r4)
    mr r3, r31
    b lbl_fn_806FED40_00001DAC
lbl_fn_806FED40_00001DA4:
    addi r3, r3, 0x1
    stw r3, lbl_80862AF4@l(r4)
lbl_fn_806FED40_00001DAC:
    lbz r5, 0x0(r3)
    extsb. r0, r5
    beq lbl_fn_806FED40_00001DC0
    cmpwi r0, 0x5c
    bne lbl_fn_806FED40_00001DA4
lbl_fn_806FED40_00001DC0:
    cmplw r3, r31
    bne lbl_fn_806FED40_00001DCC
    li r31, 0x0
lbl_fn_806FED40_00001DCC:
    extsb. r0, r5
    beq lbl_fn_806FED40_00001DEC
    lis r4, lbl_80862AF4@ha
    li r0, 0x0
    lwz r3, lbl_80862AF4@l(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, lbl_80862AF4@l(r4)
lbl_fn_806FED40_00001DEC:
    lis r27, lbl_8076B848@ha
    lis r28, lbl_80862AF4@ha
    li r25, 0x0
    lis r26, lbl_807C5DC0@ha
    addi r27, r27, lbl_8076B848@l
    b lbl_fn_806FED40_00001F3C
lbl_fn_806FED40_00001E04:
    lwz r30, lbl_80862AF4@l(r28)
    mr r3, r30
    b lbl_fn_806FED40_00001E1C
    nop
lbl_fn_806FED40_00001E14:
    addi r3, r3, 0x1
    stw r3, lbl_80862AF4@l(r28)
lbl_fn_806FED40_00001E1C:
    lbz r4, 0x0(r3)
    extsb. r0, r4
    beq lbl_fn_806FED40_00001E30
    cmpwi r0, 0x5c
    bne lbl_fn_806FED40_00001E14
lbl_fn_806FED40_00001E30:
    cmplw r3, r30
    bne lbl_fn_806FED40_00001E3C
    li r30, 0x0
lbl_fn_806FED40_00001E3C:
    extsb. r0, r4
    beq lbl_fn_806FED40_00001E54
    lwz r3, lbl_80862AF4@l(r28)
    stb r25, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, lbl_80862AF4@l(r28)
lbl_fn_806FED40_00001E54:
    cmpwi r30, 0x0
    bne lbl_fn_806FED40_00001E60
    addi r30, r26, lbl_807C5DC0@l
lbl_fn_806FED40_00001E60:
    lwz r3, 0x0(r27)
    addi r23, r1, 0x10
    lwz r0, 0x4(r27)
    li r24, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
lbl_fn_806FED40_00001E78:
    lwz r4, 0x0(r23)
    mr r3, r31
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806FED40_00001E94
    li r0, 0x0
    b lbl_fn_806FED40_00001EA8
lbl_fn_806FED40_00001E94:
    addi r24, r24, 0x1
    addi r23, r23, 0x4
    cmplwi r24, 0x2
    blt lbl_fn_806FED40_00001E78
    li r0, 0x1
lbl_fn_806FED40_00001EA8:
    cmpwi r0, 0x0
    beq lbl_fn_806FED40_00001EEC
    mr r3, r31
    bl fn_806F1D80
    cmpwi r3, 0x0
    bne lbl_fn_806FED40_00001EEC
    mr r4, r31
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x8(r1)
    mr r4, r30
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0xc(r1)
    addi r4, r1, 0x8
    lwz r3, 0x18(r29)
    bl fn_806D64B0
lbl_fn_806FED40_00001EEC:
    lwz r31, lbl_80862AF4@l(r28)
    mr r3, r31
    b lbl_fn_806FED40_00001F04
    nop
lbl_fn_806FED40_00001EFC:
    addi r3, r3, 0x1
    stw r3, lbl_80862AF4@l(r28)
lbl_fn_806FED40_00001F04:
    lbz r4, 0x0(r3)
    extsb. r0, r4
    beq lbl_fn_806FED40_00001F18
    cmpwi r0, 0x5c
    bne lbl_fn_806FED40_00001EFC
lbl_fn_806FED40_00001F18:
    cmplw r3, r31
    bne lbl_fn_806FED40_00001F24
    li r31, 0x0
lbl_fn_806FED40_00001F24:
    extsb. r0, r4
    beq lbl_fn_806FED40_00001F3C
    lwz r3, lbl_80862AF4@l(r28)
    stb r25, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, lbl_80862AF4@l(r28)
lbl_fn_806FED40_00001F3C:
    cmpwi r31, 0x0
    bne lbl_fn_806FED40_00001E04
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806FEF30(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_21
    mr r29, r3
    mr r30, r4
    mr r31, r5
    b lbl_fn_806FEF30_00001FFC
lbl_fn_806FEF30_00001F80:
    mr r3, r30
    mr r4, r31
    bl fn_80700890
    cmpwi r3, 0x0
    blt lbl_fn_806FEF30_0000213C
    mr r26, r30
    subf r31, r3, r31
    add r30, r30, r3
    mr r3, r30
    mr r4, r31
    bl fn_80700890
    cmpwi r3, 0x0
    blt lbl_fn_806FEF30_0000213C
    mr r27, r30
    add r30, r30, r3
    subf r31, r3, r31
    mr r3, r26
    bl fn_806F1D80
    cmpwi r3, 0x0
    bne lbl_fn_806FEF30_00001FFC
    mr r4, r26
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x18(r1)
    mr r4, r27
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x1c(r1)
    addi r4, r1, 0x18
    lwz r3, 0x18(r29)
    bl fn_806D64B0
lbl_fn_806FEF30_00001FFC:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_806FEF30_00001F80
    li r23, 0x0
    lis r28, lbl_807C5DC4@ha
    addi r30, r30, 0x1
    subi r31, r31, 0x1
lbl_fn_806FEF30_00002018:
    cmpwi r31, 0x2
    blt lbl_fn_806FEF30_0000213C
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x2
    bl memcpy
    lhz r3, 0x8(r1)
    bl fn_806A4264
    addi r30, r30, 0x2
    sth r3, 0x8(r1)
    mr r25, r30
    li r24, 0x0
    subi r31, r31, 0x2
    b lbl_fn_806FEF30_00002078
lbl_fn_806FEF30_00002050:
    mr r3, r30
    mr r4, r31
    bl fn_80700890
    cmpwi r3, 0x0
    blt lbl_fn_806FEF30_0000213C
    cmpwi r3, 0x64
    bgt lbl_fn_806FEF30_0000213C
    add r30, r30, r3
    subf r31, r3, r31
    addi r24, r24, 0x1
lbl_fn_806FEF30_00002078:
    lbz r0, 0x0(r30)
    extsb. r0, r0
    bne lbl_fn_806FEF30_00002050
    li r22, 0x0
    addi r30, r30, 0x1
    subi r31, r31, 0x1
    b lbl_fn_806FEF30_00002124
lbl_fn_806FEF30_00002094:
    mr r26, r25
    li r21, 0x0
    b lbl_fn_806FEF30_00002118
lbl_fn_806FEF30_000020A0:
    mr r3, r30
    mr r4, r31
    bl fn_80700890
    cmpwi r3, 0x0
    mr r27, r3
    blt lbl_fn_806FEF30_0000213C
    mr r5, r26
    mr r6, r22
    addi r3, r1, 0x20
    addi r4, r28, lbl_807C5DC4@l
    crclr 6
    bl sprintf
    addi r4, r1, 0x20
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x10(r1)
    mr r4, r30
    li r3, 0x0
    bl fn_807007A0
    stw r3, 0x14(r1)
    addi r4, r1, 0x10
    lwz r3, 0x18(r29)
    bl fn_806D64B0
    mr r3, r26
    add r30, r30, r27
    subf r31, r27, r31
    bl strlen
    add r3, r3, r26
    addi r21, r21, 0x1
    addi r26, r3, 0x1
lbl_fn_806FEF30_00002118:
    cmpw r21, r24
    blt lbl_fn_806FEF30_000020A0
    addi r22, r22, 0x1
lbl_fn_806FEF30_00002124:
    lhz r0, 0x8(r1)
    cmpw r22, r0
    blt lbl_fn_806FEF30_00002094
    addi r23, r23, 0x1
    cmpwi r23, 0x2
    blt lbl_fn_806FEF30_00002018
lbl_fn_806FEF30_0000213C:
    addi r11, r1, 0xd0
    bl _restgpr_21
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
