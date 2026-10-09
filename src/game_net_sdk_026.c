#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_80680B88(void);
extern void fn_806A4270(void);
extern void fn_806D7A90(void);
extern void fn_806D7AA0(void);
extern void fn_806D7AC0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7DA0(void);
extern void fn_806D7EE0(void);
extern void fn_806D8060(void);
extern void fn_806D8F10(void);
extern void fn_806D8F30(void);
extern void fn_806D9590(void);
extern void memmove(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B660[];
extern u8 lbl_807C2A48[];
extern u8 lbl_807C2A88[];
extern u8 lbl_80860DD0[];

/* Small data declarations */

/* Function declarations */
void pad_03_806D5798_text(void);
void fn_806D57A0(void);
void fn_806D5850(void);
void fn_806D58F0(void);
void fn_806D5900(void);
void fn_806D5930(void);
void fn_806D5A60(void);
void fn_806D5BE0(void);
void fn_806D5C90(void);
void fn_806D5D80(void);
void fn_806D5E40(void);
void fn_806D5E60(void);
void fn_806D6000(void);
void fn_806D60A0(void);
void fn_806D6140(void);
void fn_806D6250(void);
void fn_806D62F0(void);
void fn_806D63A0(void);
void fn_806D6420(void);
void fn_806D64B0(void);
void fn_806D6560(void);
void fn_806D6610(void);
void fn_806D66B0(void);
void fn_806D6720(void);
void fn_806D67A0(void);
void fn_806D6890(void);
void fn_806D7350(void);
void fn_806D76E0(void);

asm void pad_03_806D5798_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806D57A0(void)
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
    li r3, 0x18
    bl fn_806D7A90
    cmpwi r29, 0x0
    mr r31, r3
    bne lbl_fn_806D57A0_00000048
    li r29, 0x8
lbl_fn_806D57A0_00000048:
    li r0, 0x0
    stw r0, 0x0(r3)
    cmpwi r29, 0x0
    stw r29, 0x4(r3)
    stw r28, 0x8(r3)
    stw r29, 0xc(r3)
    stw r30, 0x10(r3)
    beq lbl_fn_806D57A0_00000090
    lwz r0, 0x8(r3)
    mullw r3, r29, r0
    bl fn_806D7A90
    stw r3, 0x14(r31)
    li r4, 0x0
    lwz r5, 0x4(r31)
    lwz r0, 0x8(r31)
    mullw r5, r5, r0
    bl memset
    b lbl_fn_806D57A0_00000094
lbl_fn_806D57A0_00000090:
    stw r0, 0x14(r3)
lbl_fn_806D57A0_00000094:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D5850(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_fn_806D5850_00000118
lbl_fn_806D5850_000000D8:
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806D5850_00000114
    cmpwi r31, 0x0
    blt lbl_fn_806D5850_000000F4
    cmpw r31, r0
    blt lbl_fn_806D5850_000000FC
lbl_fn_806D5850_000000F4:
    li r3, 0x0
    b lbl_fn_806D5850_0000010C
lbl_fn_806D5850_000000FC:
    lwz r0, 0x8(r30)
    lwz r3, 0x14(r30)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_fn_806D5850_0000010C:
    mtctr r12
    bctrl
lbl_fn_806D5850_00000114:
    addi r31, r31, 0x1
lbl_fn_806D5850_00000118:
    lwz r0, 0x0(r30)
    cmpw r31, r0
    blt lbl_fn_806D5850_000000D8
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806D5850_00000134
    bl fn_806D7AC0
lbl_fn_806D5850_00000134:
    mr r3, r30
    bl fn_806D7AC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D58F0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_806D5900(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_806D5900_0000017C
    lwz r0, 0x0(r3)
    cmpw r4, r0
    blt lbl_fn_806D5900_00000184
lbl_fn_806D5900_0000017C:
    li r3, 0x0
    blr
lbl_fn_806D5900_00000184:
    lwz r0, 0x8(r3)
    lwz r3, 0x14(r3)
    mullw r0, r0, r4
    add r3, r3, r0
    blr
}

asm void fn_806D5930(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806D5930_000002A0
    lwz r31, 0x0(r3)
    lwz r5, 0x4(r3)
    cmpw r31, r5
    bne lbl_fn_806D5930_000001F0
    lwz r4, 0xc(r3)
    lwz r0, 0x8(r29)
    add r4, r5, r4
    stw r4, 0x4(r3)
    mullw r4, r4, r0
    lwz r3, 0x14(r3)
    bl fn_806D7AA0
    stw r3, 0x14(r29)
lbl_fn_806D5930_000001F0:
    lwz r3, 0x0(r29)
    addi r5, r3, 0x1
    stw r5, 0x0(r29)
    subi r6, r5, 0x1
    cmpw r31, r6
    bge lbl_fn_806D5930_00000268
    addic. r4, r31, 0x1
    blt lbl_fn_806D5930_00000218
    cmpw r4, r5
    blt lbl_fn_806D5930_00000220
lbl_fn_806D5930_00000218:
    li r3, 0x0
    b lbl_fn_806D5930_00000230
lbl_fn_806D5930_00000220:
    lwz r0, 0x8(r29)
    lwz r3, 0x14(r29)
    mullw r0, r0, r4
    add r3, r3, r0
lbl_fn_806D5930_00000230:
    cmpwi r31, 0x0
    blt lbl_fn_806D5930_00000240
    cmpw r31, r5
    blt lbl_fn_806D5930_00000248
lbl_fn_806D5930_00000240:
    li r4, 0x0
    b lbl_fn_806D5930_00000258
lbl_fn_806D5930_00000248:
    lwz r0, 0x8(r29)
    lwz r4, 0x14(r29)
    mullw r0, r0, r31
    add r4, r4, r0
lbl_fn_806D5930_00000258:
    lwz r5, 0x8(r29)
    subf r0, r31, r6
    mullw r5, r5, r0
    bl memmove
lbl_fn_806D5930_00000268:
    cmpwi r31, 0x0
    blt lbl_fn_806D5930_0000027C
    lwz r0, 0x0(r29)
    cmpw r31, r0
    blt lbl_fn_806D5930_00000284
lbl_fn_806D5930_0000027C:
    li r3, 0x0
    b lbl_fn_806D5930_00000294
lbl_fn_806D5930_00000284:
    lwz r0, 0x8(r29)
    lwz r3, 0x14(r29)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_fn_806D5930_00000294:
    lwz r5, 0x8(r29)
    mr r4, r30
    bl memcpy
lbl_fn_806D5930_000002A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D5A60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r6, 0x0(r3)
    mr r29, r3
    lwz r28, 0x8(r3)
    mr r30, r4
    lwz r31, 0x14(r3)
    mr r24, r5
    subi r26, r6, 0x1
    li r25, 0x0
    b lbl_fn_806D5A60_00000338
lbl_fn_806D5A60_00000300:
    add r0, r25, r26
    mr r12, r24
    srawi r27, r0, 1
    mr r4, r30
    mullw r0, r27, r28
    add r3, r31, r0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_806D5A60_0000032C
    addi r25, r27, 0x1
lbl_fn_806D5A60_0000032C:
    cmpwi r3, 0x0
    blt lbl_fn_806D5A60_00000338
    subi r26, r27, 0x1
lbl_fn_806D5A60_00000338:
    cmpw r25, r26
    ble lbl_fn_806D5A60_00000300
    mullw r6, r25, r28
    lwz r3, 0x14(r29)
    lwz r5, 0x8(r29)
    lwz r0, 0x0(r29)
    lwz r4, 0x4(r29)
    add r6, r31, r6
    subf r6, r3, r6
    cmpw r0, r4
    divw r31, r6, r5
    bne lbl_fn_806D5A60_00000380
    lwz r0, 0xc(r29)
    add r0, r4, r0
    stw r0, 0x4(r29)
    mullw r4, r0, r5
    bl fn_806D7AA0
    stw r3, 0x14(r29)
lbl_fn_806D5A60_00000380:
    lwz r3, 0x0(r29)
    addi r5, r3, 0x1
    stw r5, 0x0(r29)
    subi r6, r5, 0x1
    cmpw r31, r6
    bge lbl_fn_806D5A60_000003F8
    addic. r4, r31, 0x1
    blt lbl_fn_806D5A60_000003A8
    cmpw r4, r5
    blt lbl_fn_806D5A60_000003B0
lbl_fn_806D5A60_000003A8:
    li r3, 0x0
    b lbl_fn_806D5A60_000003C0
lbl_fn_806D5A60_000003B0:
    lwz r0, 0x8(r29)
    lwz r3, 0x14(r29)
    mullw r0, r0, r4
    add r3, r3, r0
lbl_fn_806D5A60_000003C0:
    cmpwi r31, 0x0
    blt lbl_fn_806D5A60_000003D0
    cmpw r31, r5
    blt lbl_fn_806D5A60_000003D8
lbl_fn_806D5A60_000003D0:
    li r4, 0x0
    b lbl_fn_806D5A60_000003E8
lbl_fn_806D5A60_000003D8:
    lwz r0, 0x8(r29)
    lwz r4, 0x14(r29)
    mullw r0, r0, r31
    add r4, r4, r0
lbl_fn_806D5A60_000003E8:
    lwz r5, 0x8(r29)
    subf r0, r31, r6
    mullw r5, r5, r0
    bl memmove
lbl_fn_806D5A60_000003F8:
    cmpwi r31, 0x0
    blt lbl_fn_806D5A60_0000040C
    lwz r0, 0x0(r29)
    cmpw r31, r0
    blt lbl_fn_806D5A60_00000414
lbl_fn_806D5A60_0000040C:
    li r3, 0x0
    b lbl_fn_806D5A60_00000424
lbl_fn_806D5A60_00000414:
    lwz r0, 0x8(r29)
    lwz r3, 0x14(r29)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_fn_806D5A60_00000424:
    lwz r5, 0x8(r29)
    mr r4, r30
    bl memcpy
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D5BE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r7, 0x0(r3)
    subi r8, r7, 0x1
    cmpw r4, r8
    bge lbl_fn_806D5BE0_000004D4
    cmpwi r4, 0x0
    blt lbl_fn_806D5BE0_0000047C
    cmpw r4, r7
    blt lbl_fn_806D5BE0_00000484
lbl_fn_806D5BE0_0000047C:
    li r6, 0x0
    b lbl_fn_806D5BE0_00000494
lbl_fn_806D5BE0_00000484:
    lwz r0, 0x8(r3)
    lwz r5, 0x14(r3)
    mullw r0, r0, r4
    add r6, r5, r0
lbl_fn_806D5BE0_00000494:
    addic. r5, r4, 0x1
    blt lbl_fn_806D5BE0_000004A4
    cmpw r5, r7
    blt lbl_fn_806D5BE0_000004AC
lbl_fn_806D5BE0_000004A4:
    li r7, 0x0
    b lbl_fn_806D5BE0_000004BC
lbl_fn_806D5BE0_000004AC:
    lwz r0, 0x8(r3)
    lwz r3, 0x14(r3)
    mullw r0, r0, r5
    add r7, r3, r0
lbl_fn_806D5BE0_000004BC:
    lwz r5, 0x8(r31)
    subf r0, r4, r8
    mr r3, r6
    mr r4, r7
    mullw r5, r5, r0
    bl memmove
lbl_fn_806D5BE0_000004D4:
    lwz r3, 0x0(r31)
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D5C90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r12, 0x10(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806D5C90_00000554
    cmpwi r4, 0x0
    blt lbl_fn_806D5C90_00000534
    lwz r0, 0x0(r3)
    cmpw r4, r0
    blt lbl_fn_806D5C90_0000053C
lbl_fn_806D5C90_00000534:
    li r3, 0x0
    b lbl_fn_806D5C90_0000054C
lbl_fn_806D5C90_0000053C:
    lwz r0, 0x8(r3)
    lwz r3, 0x14(r3)
    mullw r0, r0, r4
    add r3, r3, r0
lbl_fn_806D5C90_0000054C:
    mtctr r12
    bctrl
lbl_fn_806D5C90_00000554:
    lwz r4, 0x0(r31)
    subi r6, r4, 0x1
    cmpw r30, r6
    bge lbl_fn_806D5C90_000005C4
    cmpwi r30, 0x0
    blt lbl_fn_806D5C90_00000574
    cmpw r30, r4
    blt lbl_fn_806D5C90_0000057C
lbl_fn_806D5C90_00000574:
    li r3, 0x0
    b lbl_fn_806D5C90_0000058C
lbl_fn_806D5C90_0000057C:
    lwz r0, 0x8(r31)
    lwz r3, 0x14(r31)
    mullw r0, r0, r30
    add r3, r3, r0
lbl_fn_806D5C90_0000058C:
    addic. r5, r30, 0x1
    blt lbl_fn_806D5C90_0000059C
    cmpw r5, r4
    blt lbl_fn_806D5C90_000005A4
lbl_fn_806D5C90_0000059C:
    li r4, 0x0
    b lbl_fn_806D5C90_000005B4
lbl_fn_806D5C90_000005A4:
    lwz r0, 0x8(r31)
    lwz r4, 0x14(r31)
    mullw r0, r0, r5
    add r4, r4, r0
lbl_fn_806D5C90_000005B4:
    lwz r5, 0x8(r31)
    subf r0, r30, r6
    mullw r5, r5, r0
    bl memmove
lbl_fn_806D5C90_000005C4:
    lwz r3, 0x0(r31)
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D5D80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r12, 0x10(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806D5D80_0000064C
    cmpwi r5, 0x0
    blt lbl_fn_806D5D80_0000062C
    lwz r0, 0x0(r3)
    cmpw r5, r0
    blt lbl_fn_806D5D80_00000634
lbl_fn_806D5D80_0000062C:
    li r3, 0x0
    b lbl_fn_806D5D80_00000644
lbl_fn_806D5D80_00000634:
    lwz r0, 0x8(r3)
    lwz r3, 0x14(r3)
    mullw r0, r0, r5
    add r3, r3, r0
lbl_fn_806D5D80_00000644:
    mtctr r12
    bctrl
lbl_fn_806D5D80_0000064C:
    cmpwi r31, 0x0
    blt lbl_fn_806D5D80_00000660
    lwz r0, 0x0(r29)
    cmpw r31, r0
    blt lbl_fn_806D5D80_00000668
lbl_fn_806D5D80_00000660:
    li r3, 0x0
    b lbl_fn_806D5D80_00000678
lbl_fn_806D5D80_00000668:
    lwz r0, 0x8(r29)
    lwz r3, 0x14(r29)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_fn_806D5D80_00000678:
    lwz r5, 0x8(r29)
    mr r4, r30
    bl memcpy
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D5E40(void)
{
    nofralloc
    mr r5, r3
    mr r6, r4
    lwz r4, 0x0(r5)
    lwz r3, 0x14(r3)
    lwz r5, 0x8(r5)
    b fn_80680B88
}

asm void fn_806D5E60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r31, 0x1
    beq lbl_fn_806D5E60_00000700
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    bne lbl_fn_806D5E60_00000708
lbl_fn_806D5E60_00000700:
    li r3, -0x1
    b lbl_fn_806D5E60_00000848
lbl_fn_806D5E60_00000708:
    cmpwi r7, 0x0
    beq lbl_fn_806D5E60_000007A8
    cmpwi r6, 0x0
    blt lbl_fn_806D5E60_00000720
    cmpw r6, r5
    blt lbl_fn_806D5E60_00000728
lbl_fn_806D5E60_00000720:
    li r27, 0x0
    b lbl_fn_806D5E60_00000738
lbl_fn_806D5E60_00000728:
    lwz r0, 0x8(r3)
    lwz r4, 0x14(r3)
    mullw r0, r0, r6
    add r27, r4, r0
lbl_fn_806D5E60_00000738:
    subf r4, r6, r5
    lwz r26, 0x8(r3)
    subi r24, r4, 0x1
    li r23, 0x0
    li r31, 0x0
    b lbl_fn_806D5E60_00000794
lbl_fn_806D5E60_00000750:
    add r0, r23, r24
    mr r12, r30
    srawi r25, r0, 1
    mr r4, r29
    mullw r0, r25, r26
    add r3, r27, r0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806D5E60_0000077C
    li r31, 0x1
lbl_fn_806D5E60_0000077C:
    cmpwi r3, 0x0
    bge lbl_fn_806D5E60_00000788
    addi r23, r25, 0x1
lbl_fn_806D5E60_00000788:
    cmpwi r3, 0x0
    blt lbl_fn_806D5E60_00000794
    subi r24, r25, 0x1
lbl_fn_806D5E60_00000794:
    cmpw r23, r24
    ble lbl_fn_806D5E60_00000750
    mullw r0, r23, r26
    add r4, r27, r0
    b lbl_fn_806D5E60_00000820
lbl_fn_806D5E60_000007A8:
    cmpwi r6, 0x0
    blt lbl_fn_806D5E60_000007B8
    cmpw r6, r5
    blt lbl_fn_806D5E60_000007C0
lbl_fn_806D5E60_000007B8:
    li r23, 0x0
    b lbl_fn_806D5E60_000007D0
lbl_fn_806D5E60_000007C0:
    lwz r0, 0x8(r3)
    lwz r4, 0x14(r3)
    mullw r0, r0, r6
    add r23, r4, r0
lbl_fn_806D5E60_000007D0:
    lwz r25, 0x8(r3)
    subf r24, r6, r5
    li r26, 0x0
    li r27, 0x0
    b lbl_fn_806D5E60_00000814
lbl_fn_806D5E60_000007E4:
    mr r12, r30
    mr r3, r29
    add r4, r23, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806D5E60_0000080C
    mullw r0, r25, r26
    add r4, r23, r0
    b lbl_fn_806D5E60_00000820
lbl_fn_806D5E60_0000080C:
    add r27, r27, r25
    addi r26, r26, 0x1
lbl_fn_806D5E60_00000814:
    cmpw r26, r24
    blt lbl_fn_806D5E60_000007E4
    li r4, 0x0
lbl_fn_806D5E60_00000820:
    cmpwi r4, 0x0
    beq lbl_fn_806D5E60_00000844
    cmpwi r31, 0x0
    beq lbl_fn_806D5E60_00000844
    lwz r3, 0x14(r28)
    lwz r0, 0x8(r28)
    subf r3, r3, r4
    divw r3, r3, r0
    b lbl_fn_806D5E60_00000848
lbl_fn_806D5E60_00000844:
    li r3, -0x1
lbl_fn_806D5E60_00000848:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D6000(void)
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
    lwz r6, 0x0(r3)
    subi r31, r6, 0x1
    b lbl_fn_806D6000_000008D4
lbl_fn_806D6000_0000089C:
    lwz r0, 0x0(r28)
    cmpw r31, r0
    bge lbl_fn_806D6000_000008BC
    lwz r0, 0x8(r28)
    lwz r3, 0x14(r28)
    mullw r0, r0, r31
    add r3, r3, r0
    b lbl_fn_806D6000_000008C0
lbl_fn_806D6000_000008BC:
    li r3, 0x0
lbl_fn_806D6000_000008C0:
    mr r12, r29
    mr r4, r30
    mtctr r12
    bctrl
    subi r31, r31, 0x1
lbl_fn_806D6000_000008D4:
    cmpwi r31, -0x1
    bgt lbl_fn_806D6000_0000089C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D60A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0x0(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    subi r30, r6, 0x1
    b lbl_fn_806D60A0_00000980
lbl_fn_806D60A0_00000934:
    lwz r0, 0x0(r27)
    cmpw r30, r0
    bge lbl_fn_806D60A0_00000954
    lwz r0, 0x8(r27)
    lwz r3, 0x14(r27)
    mullw r0, r0, r30
    add r31, r3, r0
    b lbl_fn_806D60A0_00000958
lbl_fn_806D60A0_00000954:
    li r31, 0x0
lbl_fn_806D60A0_00000958:
    mr r12, r28
    mr r3, r31
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806D60A0_0000097C
    mr r3, r31
    b lbl_fn_806D60A0_0000098C
lbl_fn_806D60A0_0000097C:
    subi r30, r30, 0x1
lbl_fn_806D60A0_00000980:
    cmpwi r30, -0x1
    bgt lbl_fn_806D60A0_00000934
    li r3, 0x0
lbl_fn_806D60A0_0000098C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D6140(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x0(r3)
    subi r31, r4, 0x1
    b lbl_fn_806D6140_00000A8C
lbl_fn_806D6140_000009CC:
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806D6140_00000A0C
    cmpwi r31, 0x0
    blt lbl_fn_806D6140_000009EC
    lwz r0, 0x0(r30)
    cmpw r31, r0
    blt lbl_fn_806D6140_000009F4
lbl_fn_806D6140_000009EC:
    li r3, 0x0
    b lbl_fn_806D6140_00000A04
lbl_fn_806D6140_000009F4:
    lwz r0, 0x8(r30)
    lwz r3, 0x14(r30)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_fn_806D6140_00000A04:
    mtctr r12
    bctrl
lbl_fn_806D6140_00000A0C:
    lwz r4, 0x0(r30)
    subi r6, r4, 0x1
    cmpw r31, r6
    bge lbl_fn_806D6140_00000A7C
    cmpwi r31, 0x0
    blt lbl_fn_806D6140_00000A2C
    cmpw r31, r4
    blt lbl_fn_806D6140_00000A34
lbl_fn_806D6140_00000A2C:
    li r3, 0x0
    b lbl_fn_806D6140_00000A44
lbl_fn_806D6140_00000A34:
    lwz r0, 0x8(r30)
    lwz r3, 0x14(r30)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_fn_806D6140_00000A44:
    addic. r5, r31, 0x1
    blt lbl_fn_806D6140_00000A54
    cmpw r5, r4
    blt lbl_fn_806D6140_00000A5C
lbl_fn_806D6140_00000A54:
    li r4, 0x0
    b lbl_fn_806D6140_00000A6C
lbl_fn_806D6140_00000A5C:
    lwz r0, 0x8(r30)
    lwz r4, 0x14(r30)
    mullw r0, r0, r5
    add r4, r4, r0
lbl_fn_806D6140_00000A6C:
    lwz r5, 0x8(r30)
    subf r0, r31, r6
    mullw r5, r5, r0
    bl memmove
lbl_fn_806D6140_00000A7C:
    lwz r3, 0x0(r30)
    subi r31, r31, 0x1
    subi r0, r3, 0x1
    stw r0, 0x0(r30)
lbl_fn_806D6140_00000A8C:
    cmpwi r31, 0x0
    bge lbl_fn_806D6140_000009CC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D6250(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r3, 0x14
    bl fn_806D7A90
    mr r30, r3
    slwi r3, r25, 2
    bl fn_806D7A90
    stw r3, 0x0(r30)
    li r31, 0x0
    li r29, 0x0
    b lbl_fn_806D6250_00000B24
lbl_fn_806D6250_00000B04:
    mr r3, r24
    mr r5, r28
    li r4, 0x4
    bl fn_806D57A0
    lwz r4, 0x0(r30)
    addi r31, r31, 0x1
    stwx r3, r4, r29
    addi r29, r29, 0x4
lbl_fn_806D6250_00000B24:
    cmpw r31, r25
    blt lbl_fn_806D6250_00000B04
    stw r25, 0x4(r30)
    addi r11, r1, 0x30
    mr r3, r30
    stw r28, 0x8(r30)
    stw r27, 0x10(r30)
    stw r26, 0xc(r30)
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D62F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    li r3, 0x14
    bl fn_806D7A90
    mr r30, r3
    slwi r3, r24, 2
    bl fn_806D7A90
    stw r3, 0x0(r30)
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_806D62F0_00000BC8
lbl_fn_806D62F0_00000BA8:
    mr r3, r23
    mr r4, r25
    mr r5, r28
    bl fn_806D57A0
    lwz r4, 0x0(r30)
    addi r29, r29, 0x1
    stwx r3, r4, r31
    addi r31, r31, 0x4
lbl_fn_806D62F0_00000BC8:
    cmpw r29, r24
    blt lbl_fn_806D62F0_00000BA8
    stw r24, 0x4(r30)
    addi r11, r1, 0x30
    mr r3, r30
    stw r28, 0x8(r30)
    stw r27, 0x10(r30)
    stw r26, 0xc(r30)
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D63A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806D63A0_00000C68
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_806D63A0_00000C4C
lbl_fn_806D63A0_00000C38:
    lwz r3, 0x0(r29)
    lwzx r3, r3, r31
    bl fn_806D5850
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_806D63A0_00000C4C:
    lwz r0, 0x4(r29)
    cmpw r30, r0
    blt lbl_fn_806D63A0_00000C38
    lwz r3, 0x0(r29)
    bl fn_806D7AC0
    mr r3, r29
    bl fn_806D7AC0
lbl_fn_806D63A0_00000C68:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D6420(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_806D6420_00000CBC
    li r3, 0x0
    b lbl_fn_806D6420_00000CF0
lbl_fn_806D6420_00000CBC:
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_806D6420_00000CE0
lbl_fn_806D6420_00000CC8:
    lwz r3, 0x0(r28)
    lwzx r3, r3, r31
    bl fn_806D58F0
    add r29, r29, r3
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_806D6420_00000CE0:
    lwz r0, 0x4(r28)
    cmpw r30, r0
    blt lbl_fn_806D6420_00000CC8
    mr r3, r29
lbl_fn_806D6420_00000CF0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D64B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_806D64B0_00000DA4
    lwz r12, 0xc(r29)
    mr r3, r30
    lwz r4, 0x4(r29)
    mtctr r12
    bctrl
    lwz r6, 0x0(r29)
    slwi r31, r3, 2
    lwz r5, 0x10(r29)
    mr r4, r30
    lwzx r3, r6, r31
    li r6, 0x0
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    bne lbl_fn_806D64B0_00000D90
    lwz r3, 0x0(r29)
    mr r4, r30
    lwzx r3, r3, r31
    bl fn_806D5930
    b lbl_fn_806D64B0_00000DA4
lbl_fn_806D64B0_00000D90:
    lwz r6, 0x0(r29)
    mr r5, r3
    mr r4, r30
    lwzx r3, r6, r31
    bl fn_806D5D80
lbl_fn_806D64B0_00000DA4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D6560(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_806D6560_00000DF8
    li r3, 0x0
    b lbl_fn_806D6560_00000E50
lbl_fn_806D6560_00000DF8:
    lwz r12, 0xc(r29)
    mr r3, r30
    lwz r4, 0x4(r29)
    mtctr r12
    bctrl
    lwz r6, 0x0(r29)
    slwi r31, r3, 2
    lwz r5, 0x10(r29)
    mr r4, r30
    lwzx r3, r6, r31
    li r6, 0x0
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    bne lbl_fn_806D6560_00000E3C
    li r3, 0x0
    b lbl_fn_806D6560_00000E50
lbl_fn_806D6560_00000E3C:
    lwz r5, 0x0(r29)
    mr r4, r3
    lwzx r3, r5, r31
    bl fn_806D5C90
    li r3, 0x1
lbl_fn_806D6560_00000E50:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D6610(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_806D6610_00000EA8
    li r3, 0x0
    b lbl_fn_806D6610_00000EFC
lbl_fn_806D6610_00000EA8:
    lwz r12, 0xc(r29)
    mr r3, r30
    lwz r4, 0x4(r29)
    mtctr r12
    bctrl
    lwz r6, 0x0(r29)
    slwi r31, r3, 2
    lwz r5, 0x10(r29)
    mr r4, r30
    lwzx r3, r6, r31
    li r6, 0x0
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    bne lbl_fn_806D6610_00000EEC
    li r3, 0x0
    b lbl_fn_806D6610_00000EFC
lbl_fn_806D6610_00000EEC:
    lwz r5, 0x0(r29)
    mr r4, r3
    lwzx r3, r5, r31
    bl fn_806D5900
lbl_fn_806D6610_00000EFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D66B0(void)
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
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_806D66B0_00000F60
lbl_fn_806D66B0_00000F44:
    lwz r3, 0x0(r27)
    mr r4, r28
    mr r5, r29
    lwzx r3, r3, r31
    bl fn_806D6000
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_806D66B0_00000F60:
    lwz r0, 0x4(r27)
    cmpw r30, r0
    blt lbl_fn_806D66B0_00000F44
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D6720(void)
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
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_806D6720_00000FDC
lbl_fn_806D6720_00000FB4:
    lwz r3, 0x0(r27)
    mr r4, r28
    mr r5, r29
    lwzx r3, r3, r31
    bl fn_806D60A0
    cmpwi r3, 0x0
    beq lbl_fn_806D6720_00000FD4
    b lbl_fn_806D6720_00000FEC
lbl_fn_806D6720_00000FD4:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_806D6720_00000FDC:
    lwz r0, 0x4(r27)
    cmpw r30, r0
    blt lbl_fn_806D6720_00000FB4
    li r3, 0x0
lbl_fn_806D6720_00000FEC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D67A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    slwi r7, r5, 3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r6, 0x10(r3)
    add r0, r6, r7
    stw r0, 0x10(r3)
    cmplw r0, r7
    extrwi r6, r6, 6, 23
    bge lbl_fn_806D67A0_00001058
    lwz r4, 0x14(r3)
    addi r0, r4, 0x1
    stw r0, 0x14(r3)
lbl_fn_806D67A0_00001058:
    subfic r31, r6, 0x40
    lwz r4, 0x14(r3)
    srwi r0, r5, 29
    add r0, r4, r0
    cmplw r5, r31
    stw r0, 0x14(r3)
    blt lbl_fn_806D67A0_000010BC
    add r3, r3, r6
    mr r4, r29
    mr r5, r31
    addi r3, r3, 0x18
    bl memcpy
    mr r3, r28
    addi r4, r28, 0x18
    bl fn_806D6890
    b lbl_fn_806D67A0_000010A8
lbl_fn_806D67A0_00001098:
    mr r3, r28
    add r4, r29, r31
    bl fn_806D6890
    addi r31, r31, 0x40
lbl_fn_806D67A0_000010A8:
    addi r0, r31, 0x3f
    cmplw r0, r30
    blt lbl_fn_806D67A0_00001098
    li r6, 0x0
    b lbl_fn_806D67A0_000010C0
lbl_fn_806D67A0_000010BC:
    li r31, 0x0
lbl_fn_806D67A0_000010C0:
    add r3, r28, r6
    add r4, r29, r31
    addi r3, r3, 0x18
    subf r5, r31, r30
    bl memcpy
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D6890(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    li r8, 0x2
    addi r5, r1, 0x8
    lwz r0, 0x0(r3)
    li r7, 0x0
    lwz r11, 0x4(r3)
    li r10, 0x0
    lwz r12, 0x8(r3)
    li r6, 0x0
    lwz r9, 0xc(r3)
    mtctr r8
lbl_fn_806D6890_00001134:
    add r8, r4, r6
    lbzx r20, r4, r6
    lbz r15, 0x1(r8)
    addi r19, r7, 0x2
    lbz r21, 0x2(r8)
    addi r18, r7, 0x3
    rlwimi r20, r15, 8, 16, 23
    lbz r22, 0x3(r8)
    rlwimi r20, r21, 16, 8, 15
    addi r17, r7, 0x4
    rlwimi r20, r22, 24, 0, 7
    stwx r20, r5, r10
    addi r14, r7, 0x1
    addi r16, r7, 0x5
    lbz r22, 0x5(r8)
    slwi r20, r14, 2
    lbz r21, 0x4(r8)
    addi r15, r7, 0x6
    rlwimi r21, r22, 8, 16, 23
    lbz r23, 0x6(r8)
    lbz r22, 0x7(r8)
    addi r14, r7, 0x7
    rlwimi r21, r23, 16, 8, 15
    slwi r19, r19, 2
    rlwimi r21, r22, 24, 0, 7
    stwx r21, r5, r20
    slwi r18, r18, 2
    slwi r17, r17, 2
    lbz r21, 0x9(r8)
    slwi r16, r16, 2
    lbz r20, 0x8(r8)
    slwi r15, r15, 2
    rlwimi r20, r21, 8, 16, 23
    lbz r22, 0xa(r8)
    lbz r21, 0xb(r8)
    slwi r14, r14, 2
    rlwimi r20, r22, 16, 8, 15
    addi r7, r7, 0x8
    rlwimi r20, r21, 24, 0, 7
    stwx r20, r5, r19
    addi r10, r10, 0x20
    addi r6, r6, 0x20
    lbz r20, 0xd(r8)
    lbz r19, 0xc(r8)
    rlwimi r19, r20, 8, 16, 23
    lbz r21, 0xe(r8)
    lbz r20, 0xf(r8)
    rlwimi r19, r21, 16, 8, 15
    rlwimi r19, r20, 24, 0, 7
    stwx r19, r5, r18
    lbz r19, 0x11(r8)
    lbz r18, 0x10(r8)
    rlwimi r18, r19, 8, 16, 23
    lbz r20, 0x12(r8)
    lbz r19, 0x13(r8)
    rlwimi r18, r20, 16, 8, 15
    rlwimi r18, r19, 24, 0, 7
    stwx r18, r5, r17
    lbz r18, 0x15(r8)
    lbz r17, 0x14(r8)
    rlwimi r17, r18, 8, 16, 23
    lbz r19, 0x16(r8)
    lbz r18, 0x17(r8)
    rlwimi r17, r19, 16, 8, 15
    rlwimi r17, r18, 24, 0, 7
    stwx r17, r5, r16
    lbz r17, 0x19(r8)
    lbz r16, 0x18(r8)
    rlwimi r16, r17, 8, 16, 23
    lbz r18, 0x1a(r8)
    lbz r17, 0x1b(r8)
    rlwimi r16, r18, 16, 8, 15
    rlwimi r16, r17, 24, 0, 7
    stwx r16, r5, r15
    lbz r17, 0x1e(r8)
    lbz r16, 0x1d(r8)
    lbz r15, 0x1c(r8)
    rlwimi r15, r16, 8, 16, 23
    lbz r8, 0x1f(r8)
    rlwimi r15, r17, 16, 8, 15
    rlwimi r15, r8, 24, 0, 7
    stwx r15, r5, r14
    bdnz lbl_fn_806D6890_00001134
    lwz r25, 0x8(r1)
    and r6, r11, r12
    lwz r28, 0x10(r1)
    andc r5, r9, r11
    subis r7, r25, 0x2895
    lwz r31, 0x14(r1)
    add r7, r7, r0
    or r0, r6, r5
    add r5, r7, r0
    lwz r4, 0xc(r1)
    subi r0, r5, 0x5b88
    addis r16, r28, 0x2420
    rotlwi r0, r0, 7
    subis r7, r4, 0x1738
    add r0, r0, r11
    lwz r10, 0x18(r1)
    and r6, r0, r11
    subis r14, r31, 0x3e42
    andc r5, r12, r0
    add r7, r7, r9
    or r5, r6, r5
    subis r8, r10, 0xa84
    add r5, r7, r5
    lwz r7, 0x1c(r1)
    subi r9, r5, 0x48aa
    add r16, r16, r12
    rotlwi r9, r9, 12
    add r18, r14, r11
    add r9, r9, r0
    lwz r27, 0x24(r1)
    and r15, r9, r0
    add r17, r8, r0
    andc r12, r11, r9
    lwz r5, 0x20(r1)
    or r12, r15, r12
    addis r6, r7, 0x4788
    add r11, r16, r12
    subis r14, r27, 0x2b9
    addi r12, r11, 0x70db
    add r16, r6, r9
    rotrwi r8, r12, 15
    lwz r30, 0x28(r1)
    add r8, r8, r9
    subis r6, r5, 0x57d0
    and r11, r8, r9
    addis r12, r30, 0x6981
    andc r0, r0, r8
    add r15, r6, r8
    or r0, r11, r0
    add r6, r18, r0
    subi r11, r6, 0x3112
    rotrwi r6, r11, 10
    add r6, r6, r8
    and r11, r6, r8
    andc r0, r9, r6
    add r14, r14, r6
    or r0, r11, r0
    add r9, r17, r0
    addi r0, r9, 0xfaf
    rotlwi r0, r0, 7
    add r0, r0, r6
    and r9, r0, r6
    andc r8, r8, r0
    add r11, r12, r0
    or r8, r9, r8
    add r8, r16, r8
    subi r9, r8, 0x39d6
    rotlwi r9, r9, 12
    add r9, r9, r0
    and r8, r9, r0
    andc r6, r6, r9
    or r6, r8, r6
    add r6, r15, r6
    addi r8, r6, 0x4613
    rotrwi r15, r8, 15
    add r15, r15, r9
    and r6, r15, r9
    andc r0, r0, r15
    or r0, r6, r0
    add r6, r14, r0
    subi r6, r6, 0x6aff
    rotrwi r14, r6, 10
    add r14, r14, r15
    and r6, r14, r15
    andc r0, r9, r14
    or r0, r6, r0
    add r6, r11, r0
    subi r0, r6, 0x6728
    rotlwi r18, r0, 7
    lwz r11, 0x2c(r1)
    add r18, r18, r14
    lwz r6, 0x34(r1)
    subis r12, r11, 0x74bb
    lwz r29, 0x3c(r1)
    and r16, r18, r14
    andc r0, r15, r18
    add r9, r12, r9
    lwz r8, 0x30(r1)
    or r0, r16, r0
    lwz r26, 0x38(r1)
    add r9, r9, r0
    subis r12, r8, 0x1
    subi r9, r9, 0x851
    addis r0, r26, 0x6b90
    rotlwi r16, r9, 12
    add r20, r12, r15
    add r16, r16, r18
    subis r17, r29, 0x268
    and r15, r16, r18
    subis r19, r6, 0x76a3
    andc r9, r14, r16
    add r0, r0, r18
    or r15, r15, r9
    add r14, r19, r14
    add r15, r20, r15
    lwz r9, 0x44(r1)
    addi r15, r15, 0x5bb1
    add r21, r17, r16
    rotrwi r15, r15, 15
    lwz r12, 0x40(r1)
    add r15, r15, r16
    addis r19, r9, 0x49b4
    and r22, r15, r16
    subis r17, r12, 0x5987
    andc r18, r18, r15
    or r18, r22, r18
    add r20, r17, r15
    add r14, r14, r18
    subis r17, r4, 0x9e2
    subi r14, r14, 0x2842
    rotrwi r14, r14, 10
    add r14, r14, r15
    and r18, r14, r15
    andc r16, r16, r14
    add r19, r19, r14
    or r16, r18, r16
    add r16, r0, r16
    addi r18, r16, 0x1122
    rotlwi r0, r18, 7
    add r0, r0, r14
    and r16, r0, r14
    andc r15, r15, r0
    add r18, r17, r0
    or r15, r16, r15
    add r15, r21, r15
    addi r16, r15, 0x7193
    rotlwi r17, r16, 12
    add r17, r17, r0
    nor r21, r17, r17
    and r15, r17, r0
    and r14, r21, r14
    or r14, r15, r14
    add r14, r20, r14
    addi r15, r14, 0x438e
    rotrwi r16, r15, 15
    add r16, r16, r17
    nor r15, r16, r16
    and r14, r16, r17
    and r20, r16, r21
    and r0, r15, r0
    or r0, r14, r0
    add r14, r19, r0
    addi r14, r14, 0x821
    rotrwi r22, r14, 10
    add r22, r22, r16
    and r0, r22, r17
    or r0, r0, r20
    add r14, r18, r0
    addi r0, r14, 0x2562
    rotlwi r20, r0, 5
    add r20, r20, r22
    subis r18, r5, 0x3fbf
    and r0, r22, r15
    and r19, r20, r16
    addis r14, r6, 0x265e
    add r15, r18, r17
    subis r18, r25, 0x1649
    or r0, r19, r0
    subis r19, r7, 0x29d1
    add r15, r15, r0
    add r18, r18, r22
    subi r17, r15, 0x4cc0
    andc r0, r20, r22
    add r15, r14, r16
    addis r16, r8, 0x244
    rotlwi r14, r17, 9
    add r21, r19, r20
    add r14, r14, r20
    subis r23, r12, 0x3cc9
    and r17, r14, r22
    or r0, r17, r0
    add r19, r16, r14
    add r15, r15, r0
    andc r22, r14, r20
    addi r16, r15, 0x5a51
    subis r17, r10, 0x182c
    rotlwi r0, r16, 14
    subis r15, r9, 0x275e
    add r0, r0, r14
    addis r16, r11, 0x21e2
    and r20, r0, r20
    or r22, r20, r22
    add r22, r18, r22
    add r18, r15, r0
    subi r22, r22, 0x3856
    andc r20, r0, r14
    rotrwi r22, r22, 12
    subis r15, r31, 0xb2b
    add r22, r22, r0
    and r14, r22, r14
    or r20, r14, r20
    add r17, r17, r22
    add r20, r21, r20
    andc r14, r22, r0
    addi r20, r20, 0x105d
    rotlwi r20, r20, 5
    add r20, r20, r22
    and r0, r20, r0
    or r14, r0, r14
    add r16, r16, r20
    add r14, r19, r14
    andc r0, r20, r22
    addi r14, r14, 0x1453
    rotlwi r14, r14, 9
    add r14, r14, r20
    and r19, r14, r22
    or r0, r19, r0
    andc r21, r14, r20
    add r19, r18, r0
    add r18, r23, r14
    subi r0, r19, 0x197f
    rotlwi r19, r0, 14
    add r19, r19, r14
    and r0, r19, r20
    or r20, r0, r21
    add r20, r17, r20
    add r17, r15, r19
    subi r22, r20, 0x438
    andc r0, r19, r14
    rotrwi r15, r22, 12
    add r15, r15, r19
    and r14, r15, r14
    or r0, r14, r0
    add r16, r16, r0
    andc r14, r15, r19
    subi r20, r16, 0x321a
    rotlwi r0, r20, 5
    add r0, r0, r15
    and r16, r0, r19
    or r14, r16, r14
    add r14, r18, r14
    andc r16, r0, r15
    addi r14, r14, 0x7d6
    rotlwi r22, r14, 9
    add r22, r22, r0
    and r14, r22, r15
    or r14, r14, r16
    add r14, r17, r14
    addi r19, r14, 0xd87
    rotlwi r17, r19, 14
    addis r18, r30, 0x455a
    add r17, r17, r22
    andc r14, r22, r0
    and r16, r17, r0
    add r15, r18, r15
    or r14, r16, r14
    subis r19, r29, 0x561c
    add r15, r15, r14
    subis r18, r28, 0x310
    addi r15, r15, 0x14ed
    add r0, r19, r0
    rotrwi r21, r15, 12
    andc r14, r17, r22
    add r21, r21, r17
    addis r16, r27, 0x676f
    and r20, r21, r22
    add r19, r18, r22
    or r14, r20, r14
    add r18, r16, r17
    add r14, r0, r14
    subis r15, r26, 0x72d6
    subi r0, r14, 0x16fb
    andc r22, r21, r17
    rotlwi r20, r0, 5
    add r16, r15, r21
    add r20, r20, r21
    subis r15, r7, 0x6
    and r17, r20, r17
    subis r14, r30, 0x788e
    or r22, r17, r22
    addis r0, r6, 0x6d9d
    add r19, r19, r22
    andc r17, r20, r21
    subi r22, r19, 0x5c08
    subis r23, r12, 0x21b
    rotlwi r19, r22, 9
    subis r24, r4, 0x5b41
    add r19, r19, r20
    and r21, r19, r21
    or r17, r21, r17
    add r17, r18, r17
    andc r21, r19, r20
    addi r17, r17, 0x2d9
    rotlwi r17, r17, 14
    add r17, r17, r19
    and r18, r17, r20
    or r18, r18, r21
    add r16, r16, r18
    addi r21, r16, 0x4c8a
    rotrwi r16, r21, 12
    add r16, r16, r17
    xor r18, r19, r16
    xor r18, r18, r17
    add r18, r20, r18
    add r20, r18, r15
    addi r20, r20, 0x3942
    rotlwi r15, r20, 4
    add r15, r15, r16
    xor r18, r17, r15
    xor r18, r18, r16
    add r18, r19, r18
    add r19, r18, r14
    subi r19, r19, 0x97f
    rotlwi r14, r19, 11
    add r14, r14, r15
    xor r18, r16, r14
    xor r18, r18, r15
    add r17, r17, r18
    add r17, r17, r0
    addi r17, r17, 0x6122
    rotlwi r22, r17, 16
    add r22, r22, r14
    xor r0, r15, r22
    xor r0, r0, r14
    add r0, r16, r0
    add r16, r0, r23
    addi r16, r16, 0x380c
    rotrwi r23, r16, 9
    add r23, r23, r22
    xor r0, r14, r23
    xor r0, r0, r22
    add r0, r15, r0
    add r15, r0, r24
    subi r15, r15, 0x15bc
    rotlwi r24, r15, 4
    addis r15, r10, 0x4bdf
    add r24, r24, r23
    subis r16, r27, 0x945
    xor r0, r22, r24
    subis r17, r8, 0x4140
    xor r0, r0, r23
    addis r18, r29, 0x289b
    add r0, r14, r0
    subis r19, r25, 0x155f
    add r14, r0, r15
    subis r20, r11, 0x262b
    subi r14, r14, 0x3057
    subis r0, r31, 0x2b11
    rotlwi r21, r14, 11
    stw r0, 0x48(r1)
    add r21, r21, r24
    addis r0, r5, 0x488
    xor r15, r23, r21
    stw r0, 0x4c(r1)
    xor r15, r15, r24
    subis r0, r26, 0x1924
    add r15, r22, r15
    addis r14, r9, 0x1fa2
    add r22, r15, r16
    addi r22, r22, 0x4b60
    rotlwi r15, r22, 16
    add r15, r15, r21
    xor r16, r24, r15
    xor r16, r16, r21
    add r16, r23, r16
    add r23, r16, r17
    subi r23, r23, 0x4390
    rotrwi r17, r23, 9
    add r17, r17, r15
    xor r16, r21, r17
    xor r16, r16, r15
    add r16, r24, r16
    add r24, r16, r18
    addi r24, r24, 0x7ec6
    rotlwi r16, r24, 4
    add r16, r16, r17
    xor r18, r15, r16
    xor r18, r18, r17
    add r18, r21, r18
    add r21, r18, r19
    addi r21, r21, 0x27fa
    rotlwi r19, r21, 11
    add r19, r19, r16
    xor r18, r17, r19
    xor r18, r18, r16
    add r18, r15, r18
    lwz r15, 0x48(r1)
    add r15, r18, r15
    addi r15, r15, 0x3085
    rotlwi r18, r15, 16
    add r18, r18, r19
    xor r15, r16, r18
    xor r15, r15, r19
    add r17, r17, r15
    lwz r15, 0x4c(r1)
    add r17, r17, r15
    addi r17, r17, 0x1d05
    rotrwi r17, r17, 9
    add r17, r17, r18
    xor r15, r19, r17
    xor r15, r15, r18
    add r15, r16, r15
    add r16, r15, r20
    subi r16, r16, 0x2fc7
    rotlwi r15, r16, 4
    add r15, r15, r17
    xor r16, r18, r15
    xor r16, r16, r17
    add r16, r19, r16
    add r19, r16, r0
    subi r19, r19, 0x661b
    rotlwi r0, r19, 11
    add r0, r0, r15
    xor r16, r17, r0
    xor r16, r16, r15
    add r16, r18, r16
    add r18, r16, r14
    addi r18, r18, 0x7cf8
    rotlwi r18, r18, 16
    add r18, r18, r0
    addis r14, r27, 0x432b
    xor r19, r15, r18
    subis r16, r25, 0xbd7
    xor r20, r19, r0
    subis r12, r12, 0x546c
    add r15, r16, r15
    subis r19, r28, 0x3b54
    add r16, r17, r20
    add r14, r14, r0
    add r17, r16, r19
    subis r20, r8, 0x10
    addi r17, r17, 0x5665
    subis r19, r4, 0x7a7c
    rotrwi r16, r17, 9
    add r12, r12, r18
    add r16, r16, r18
    subis r7, r7, 0x36c
    orc r0, r16, r0
    addis r22, r26, 0x655b
    xor r0, r18, r0
    add r7, r7, r16
    add r8, r15, r0
    subis r21, r31, 0x70f3
    addi r15, r8, 0x2244
    addis r17, r30, 0x6fa8
    rotlwi r4, r15, 6
    add r4, r4, r16
    orc r0, r4, r18
    xor r0, r16, r0
    add r22, r22, r4
    add r8, r14, r0
    subi r0, r8, 0x69
    rotlwi r8, r0, 10
    add r8, r8, r4
    orc r0, r8, r16
    xor r0, r4, r0
    add r15, r21, r8
    add r12, r12, r0
    addi r18, r12, 0x23a7
    rotlwi r0, r18, 15
    add r0, r0, r8
    orc r4, r0, r4
    xor r4, r8, r4
    add r14, r20, r0
    add r4, r7, r4
    subi r16, r4, 0x5fc7
    rotrwi r18, r16, 11
    add r18, r18, r0
    orc r4, r18, r8
    xor r4, r0, r4
    add r7, r19, r18
    add r4, r22, r4
    addi r4, r4, 0x59c3
    rotlwi r16, r4, 6
    add r16, r16, r18
    orc r0, r16, r0
    xor r0, r18, r0
    add r12, r17, r16
    add r4, r15, r0
    subi r8, r4, 0x336e
    rotlwi r8, r8, 10
    add r8, r8, r16
    orc r0, r8, r18
    xor r0, r16, r0
    add r4, r14, r0
    subi r0, r4, 0xb83
    rotlwi r4, r0, 15
    add r4, r4, r8
    orc r0, r4, r16
    xor r0, r8, r0
    add r7, r7, r0
    addi r18, r7, 0x5dd1
    rotrwi r7, r18, 11
    add r7, r7, r4
    orc r0, r7, r8
    xor r0, r4, r0
    add r12, r12, r0
    addi r16, r12, 0x7e4f
    rotlwi r0, r16, 6
    add r0, r0, r7
    subis r12, r9, 0x1d3
    orc r9, r0, r4
    add r8, r12, r8
    subis r12, r5, 0x5cff
    xor r5, r7, r9
    add r8, r8, r5
    addis r9, r29, 0x4e08
    subi r8, r8, 0x1920
    subis r5, r10, 0x8ad
    rotlwi r8, r8, 10
    add r10, r12, r4
    add r8, r8, r0
    subis r4, r6, 0x42c5
    orc r6, r8, r7
    add r16, r5, r0
    xor r5, r0, r6
    add r15, r4, r8
    add r4, r10, r5
    add r17, r9, r7
    addi r4, r4, 0x4314
    subis r12, r11, 0x1479
    rotlwi r18, r4, 15
    lwz r11, 0x0(r3)
    add r18, r18, r8
    addis r5, r28, 0x2ad8
    orc r0, r18, r0
    lwz r6, 0xc(r3)
    xor r0, r8, r0
    add r14, r5, r18
    add r4, r17, r0
    lwz r9, 0x8(r3)
    addi r7, r4, 0x11a1
    lwz r10, 0x4(r3)
    rotrwi r17, r7, 11
    li r4, 0x0
    add r17, r17, r18
    li r5, 0x40
    orc r0, r17, r8
    xor r0, r18, r0
    add r7, r12, r17
    add r8, r16, r0
    addi r0, r8, 0x7e82
    rotlwi r12, r0, 6
    add r12, r12, r17
    orc r0, r12, r18
    xor r8, r17, r0
    add r8, r15, r8
    add r0, r11, r12
    subi r8, r8, 0xdcb
    stw r0, 0x0(r3)
    rotlwi r11, r8, 10
    add r11, r11, r12
    orc r0, r11, r17
    xor r8, r12, r0
    add r0, r6, r11
    stw r0, 0xc(r3)
    add r6, r14, r8
    subi r18, r6, 0x2d45
    rotlwi r8, r18, 15
    add r8, r8, r11
    orc r0, r8, r12
    xor r6, r11, r0
    add r6, r7, r6
    add r0, r9, r8
    subi r17, r6, 0x2c6f
    stw r0, 0x8(r3)
    rotrwi r0, r17, 11
    add r0, r0, r8
    add r0, r10, r0
    stw r0, 0x4(r3)
    addi r3, r1, 0x8
    bl memset
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_806D7350(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_24
    lis r9, 0x6745
    lis r8, 0xefce
    li r10, 0x0
    lis r7, 0x98bb
    lis r6, 0x1032
    mr r11, r4
    addi r9, r9, 0x2301
    subi r8, r8, 0x5477
    subi r7, r7, 0x2302
    addi r0, r6, 0x5476
    mr r31, r5
    mr r4, r3
    stw r10, 0x34(r1)
    mr r5, r11
    addi r3, r1, 0x20
    stw r10, 0x30(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_806D67A0
    lwz r8, 0x30(r1)
    lis r4, lbl_807C2A48@ha
    stb r8, 0x8(r1)
    addi r3, r1, 0x20
    extrwi r9, r8, 6, 23
    extrwi r7, r8, 8, 16
    extrwi r6, r8, 8, 8
    srwi r0, r8, 24
    lwz r8, 0x34(r1)
    cmplwi r9, 0x38
    stb r7, 0x9(r1)
    addi r4, r4, lbl_807C2A48@l
    extrwi r7, r8, 8, 16
    subfic r5, r9, 0x78
    stb r6, 0xa(r1)
    extrwi r6, r8, 8, 8
    stb r0, 0xb(r1)
    srwi r0, r8, 24
    stb r8, 0xc(r1)
    stb r7, 0xd(r1)
    stb r6, 0xe(r1)
    stb r0, 0xf(r1)
    bge lbl_fn_806D7350_00001C80
    subfic r5, r9, 0x38
lbl_fn_806D7350_00001C80:
    bl fn_806D67A0
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    li r5, 0x8
    bl fn_806D67A0
    lwz r5, 0x20(r1)
    addi r3, r1, 0x20
    lwz r26, 0x24(r1)
    li r4, 0x0
    lwz r25, 0x28(r1)
    extrwi r27, r5, 8, 16
    lwz r24, 0x2c(r1)
    extrwi r28, r5, 8, 8
    srwi r29, r5, 24
    extrwi r30, r26, 8, 16
    extrwi r12, r26, 8, 8
    srwi r11, r26, 24
    extrwi r10, r25, 8, 16
    extrwi r9, r25, 8, 8
    srwi r8, r25, 24
    extrwi r7, r24, 8, 16
    extrwi r6, r24, 8, 8
    srwi r0, r24, 24
    stb r5, 0x10(r1)
    li r5, 0x58
    stb r27, 0x11(r1)
    stb r28, 0x12(r1)
    stb r29, 0x13(r1)
    stb r26, 0x14(r1)
    stb r30, 0x15(r1)
    stb r12, 0x16(r1)
    stb r11, 0x17(r1)
    stb r25, 0x18(r1)
    stb r10, 0x19(r1)
    stb r9, 0x1a(r1)
    stb r8, 0x1b(r1)
    stb r24, 0x1c(r1)
    stb r7, 0x1d(r1)
    stb r6, 0x1e(r1)
    stb r0, 0x1f(r1)
    bl memset
    lis r3, lbl_8076B660@ha
    li r0, 0x2
    addi r5, r1, 0x10
    li r4, 0x0
    addi r3, r3, lbl_8076B660@l
    li r6, 0x0
    mtctr r0
lbl_fn_806D7350_00001D40:
    lbz r8, 0x0(r5)
    addi r0, r4, 0x1
    slwi r10, r0, 1
    addi r7, r4, 0x2
    srwi r8, r8, 4
    addi r0, r4, 0x3
    lbzx r8, r3, r8
    slwi r9, r0, 1
    stbx r8, r31, r6
    slwi r8, r7, 1
    addi r0, r4, 0x4
    add r7, r31, r10
    lbz r11, 0x0(r5)
    slwi r0, r0, 1
    add r24, r31, r6
    slwi r10, r11, 28
    srwi r12, r11, 31
    subf r10, r12, r10
    rotlwi r11, r10, 4
    add r10, r31, r0
    add r0, r11, r12
    lbzx r0, r3, r0
    stb r0, 0x1(r24)
    lbz r0, 0x1(r5)
    srwi r0, r0, 4
    lbzx r0, r3, r0
    stb r0, 0x0(r7)
    lbz r11, 0x1(r5)
    slwi r0, r11, 28
    srwi r11, r11, 31
    subf r0, r11, r0
    rotlwi r0, r0, 4
    add r0, r0, r11
    lbzx r0, r3, r0
    stb r0, 0x1(r7)
    lbz r0, 0x2(r5)
    srwi r0, r0, 4
    lbzx r0, r3, r0
    stbux r0, r8, r31
    lbz r7, 0x2(r5)
    slwi r0, r7, 28
    srwi r7, r7, 31
    subf r0, r7, r0
    rotlwi r0, r0, 4
    add r0, r0, r7
    lbzx r0, r3, r0
    stb r0, 0x1(r8)
    lbz r0, 0x3(r5)
    srwi r0, r0, 4
    lbzx r0, r3, r0
    stbux r0, r9, r31
    lbz r7, 0x3(r5)
    slwi r0, r7, 28
    srwi r7, r7, 31
    subf r0, r7, r0
    rotlwi r0, r0, 4
    add r0, r0, r7
    lbzx r0, r3, r0
    stb r0, 0x1(r9)
    lbz r0, 0x4(r5)
    srwi r0, r0, 4
    lbzx r0, r3, r0
    stb r0, 0x0(r10)
    lbz r7, 0x4(r5)
    slwi r0, r7, 28
    srwi r7, r7, 31
    subf r0, r7, r0
    rotlwi r0, r0, 4
    add r0, r0, r7
    lbzx r0, r3, r0
    stb r0, 0x1(r10)
    lbz r0, 0x5(r5)
    addi r7, r4, 0x5
    slwi r9, r7, 1
    addi r6, r6, 0x10
    srwi r8, r0, 4
    addi r7, r4, 0x6
    lbzx r8, r3, r8
    addi r0, r4, 0x7
    stbux r8, r9, r31
    slwi r7, r7, 1
    slwi r0, r0, 1
    addi r4, r4, 0x8
    lbz r8, 0x5(r5)
    add r10, r31, r7
    add r7, r31, r0
    slwi r0, r8, 28
    srwi r8, r8, 31
    subf r0, r8, r0
    rotlwi r0, r0, 4
    add r0, r0, r8
    lbzx r0, r3, r0
    stb r0, 0x1(r9)
    lbz r0, 0x6(r5)
    srwi r0, r0, 4
    lbzx r0, r3, r0
    stb r0, 0x0(r10)
    lbz r8, 0x6(r5)
    slwi r0, r8, 28
    srwi r8, r8, 31
    subf r0, r8, r0
    rotlwi r0, r0, 4
    add r0, r0, r8
    lbzx r0, r3, r0
    stb r0, 0x1(r10)
    lbz r0, 0x7(r5)
    srwi r0, r0, 4
    lbzx r0, r3, r0
    stb r0, 0x0(r7)
    lbz r8, 0x7(r5)
    addi r5, r5, 0x8
    slwi r0, r8, 28
    srwi r8, r8, 31
    subf r0, r8, r0
    rotlwi r0, r0, 4
    add r0, r0, r8
    lbzx r0, r3, r0
    stb r0, 0x1(r7)
    bdnz lbl_fn_806D7350_00001D40
    li r0, 0x0
    stb r0, 0x20(r31)
    addi r11, r1, 0xa0
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_806D76E0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r5, 0x40
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lis r29, lbl_80860DD0@ha
    addi r29, r29, lbl_80860DD0@l
    stw r28, 0x50(r1)
    mr r28, r3
    mr r4, r28
    addi r3, r29, 0x8
    bl fn_806D9590
    li r0, -0x1
    stw r0, 0x88(r29)
    bl fn_806D8F10
    lbz r31, 0x48(r29)
    extsb. r31, r31
    bne lbl_fn_806D76E0_00001FB0
    lis r4, lbl_807C2A88@ha
    mr r5, r28
    addi r3, r1, 0x8
    addi r4, r4, lbl_807C2A88@l
    crclr 6
    bl sprintf
lbl_fn_806D76E0_00001FB0:
    addi r30, r29, 0x88
    li r0, 0x2
    stb r0, 0x5(r30)
    li r3, 0x6cfc
    bl fn_806A4270
    cmpwi r31, 0x0
    sth r3, 0x6(r30)
    addi r3, r1, 0x8
    beq lbl_fn_806D76E0_00001FD8
    addi r3, r29, 0x48
lbl_fn_806D76E0_00001FD8:
    bl fn_806D7EE0
    addis r0, r3, 0x1
    addi r4, r29, 0x88
    cmplwi r0, 0xffff
    stw r3, 0x8(r4)
    bne lbl_fn_806D76E0_00002028
    cmpwi r31, 0x0
    addi r3, r1, 0x8
    beq lbl_fn_806D76E0_00002000
    addi r3, r29, 0x48
lbl_fn_806D76E0_00002000:
    bl fn_806D8060
    cmpwi r3, 0x0
    bne lbl_fn_806D76E0_00002014
    li r0, 0x0
    b lbl_fn_806D76E0_0000202C
lbl_fn_806D76E0_00002014:
    lwz r4, 0xc(r3)
    addi r3, r29, 0x88
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r4)
    stw r0, 0x8(r3)
lbl_fn_806D76E0_00002028:
    li r0, 0x1
lbl_fn_806D76E0_0000202C:
    cmpwi r0, 0x0
    beq lbl_fn_806D76E0_000020A8
    li r3, 0x2
    li r4, 0x2
    li r5, 0x11
    bl fn_806D7AE0
    cmpwi r3, -0x1
    stw r3, 0x88(r29)
    beq lbl_fn_806D76E0_000020A8
    addi r30, r29, 0x88
    li r0, 0x9
    stb r0, 0xc(r30)
    mr r3, r28
    bl strlen
    mr r31, r3
    mr r4, r28
    addi r3, r30, 0x11
    addi r5, r31, 0x1
    bl memcpy
    addi r5, r31, 0x6
    stw r5, 0x4c(r30)
    lwz r3, 0x88(r29)
    addi r4, r30, 0xc
    addi r7, r30, 0x4
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    bl fn_806D8F30
    li r0, 0x0
    stw r3, 0x50(r30)
    stw r0, 0x54(r30)
lbl_fn_806D76E0_000020A8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
