#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_806809C0(void);
extern void fn_8068446C(void);
extern void fn_806A7130(void);
extern void fn_806A76B0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ABA10(void);
extern void fn_806ABB70(void);
extern void fn_806ACC80(void);
extern void fn_806ACCF0(void);
extern void fn_806ACE00(void);
extern void fn_806AEAF0(void);
extern void fn_806B0DE0(void);
extern void fn_806B12F0(void);
extern void fn_806B14D0(void);
extern void fn_806B1680(void);
extern void fn_806B3CC0(void);
extern void fn_806BBCA0(void);
extern void fn_806BC010(void);
extern void fn_806BC860(void);
extern void fn_806C2880(void);
extern void fn_806C2F70(void);
extern void fn_806C3270(void);
extern void fn_806C3ED0(void);
extern void fn_806C5C10(void);
extern void fn_806C5EB0(void);
extern void fn_806CB550(void);
extern void fn_806CCDB0(void);
extern void fn_806CD150(void);
extern void fn_806CE700(void);
extern void fn_806CFAE0(void);
extern void fn_806D0060(void);
extern void fn_806DB0A0(void);
extern void fn_806DB220(void);
extern void fn_806DB310(void);
extern void fn_806EABE0(void);
extern void fn_806EAC30(void);
extern void fn_806EF8B0(void);
extern void fn_806FC900(void);
extern void fn_806FFE10(void);

/* External data declarations */
extern u8 lbl_807BE9D0[];
extern u8 lbl_807BEA3C[];
extern u8 lbl_807C0604[];
extern u8 lbl_807C0630[];
extern u8 lbl_807C16F0[];
extern u8 lbl_80860890[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void pad_03_806BFB94_text(void);
void fn_806BFBA0(void);
void fn_806BFEA0(void);
void fn_806C03B0(void);
void fn_806C05F0(void);
void fn_806C0980(void);
void fn_806C0C20(void);
void fn_806C10C0(void);
void fn_806C1430(void);
void fn_806C1AC0(void);

asm void pad_03_806BFB94_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806BFBA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r12, lbl_80860898@ha
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    lis r31, lbl_807BE9D0@ha
    addi r31, r31, lbl_807BE9D0@l
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r11, lbl_80860898@l(r12)
    stb r0, 0x8e4(r11)
    lwz r11, lbl_80860898@l(r12)
    lbz r0, 0x16(r11)
    cmpwi r0, 0x1
    beq lbl_fn_806BFBA0_00000064
    cmpwi r0, 0x0
    beq lbl_fn_806BFBA0_000002DC
    cmpwi r0, 0x2
    beq lbl_fn_806BFBA0_000002DC
    b lbl_fn_806BFBA0_000002E8
lbl_fn_806BFBA0_00000064:
    lwz r7, 0x58(r11)
    mr r5, r11
    li r4, 0x0
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_806BFBA0_000000A4
lbl_fn_806BFBA0_0000007C:
    lwz r0, 0x60(r5)
    cmpw r3, r0
    bne lbl_fn_806BFBA0_00000098
    mulli r0, r4, 0x30
    add r3, r11, r0
    addi r5, r3, 0x60
    b lbl_fn_806BFBA0_000000A8
lbl_fn_806BFBA0_00000098:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806BFBA0_0000007C
lbl_fn_806BFBA0_000000A4:
    li r5, 0x0
lbl_fn_806BFBA0_000000A8:
    cmpwi r5, 0x0
    bne lbl_fn_806BFBA0_000000B8
    li r0, 0x0
    b lbl_fn_806BFBA0_0000012C
lbl_fn_806BFBA0_000000B8:
    lis r3, lbl_80860898@ha
    mr r6, r11
    lwz r3, lbl_80860898@l(r3)
    li r4, 0x0
    lwz r3, 0x7a8(r3)
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_806BFBA0_00000104
    nop
lbl_fn_806BFBA0_000000DC:
    lwz r0, 0x60(r6)
    cmpw r3, r0
    bne lbl_fn_806BFBA0_000000F8
    mulli r0, r4, 0x30
    add r3, r11, r0
    addi r0, r3, 0x60
    b lbl_fn_806BFBA0_00000108
lbl_fn_806BFBA0_000000F8:
    addi r6, r6, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806BFBA0_000000DC
lbl_fn_806BFBA0_00000104:
    li r0, 0x0
lbl_fn_806BFBA0_00000108:
    cmplw r5, r0
    bne lbl_fn_806BFBA0_00000118
    li r0, 0x0
    b lbl_fn_806BFBA0_0000012C
lbl_fn_806BFBA0_00000118:
    lbz r3, 0x16(r5)
    bl fn_806B14D0
    neg r0, r3
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_806BFBA0_0000012C:
    cmpwi r0, 0x0
    beq lbl_fn_806BFBA0_000002C4
    lis r29, lbl_80860898@ha
    lwz r6, lbl_80860898@l(r29)
    lwz r0, 0x6c0(r6)
    cmpwi r0, 0x0
    bne lbl_fn_806BFBA0_000001E0
    lwz r0, 0x744(r6)
    cmpwi r0, 0x1
    bne lbl_fn_806BFBA0_000001C8
    lwz r0, 0x690(r6)
    cmpwi r0, 0x0
    bne lbl_fn_806BFBA0_000001B0
    li r0, 0x1
    stw r0, 0x6c0(r6)
    li r0, 0x0
    li r4, 0x0
    lwz r3, lbl_80860898@l(r29)
    li r5, 0x30
    stw r0, 0x6c4(r3)
    lwz r3, lbl_80860898@l(r29)
    addi r3, r3, 0x6c8
    bl memset
    li r30, 0x2
    bl OSGetTime
    lwz r5, lbl_80860898@l(r29)
    stw r4, 0x89c(r5)
    addi r4, r31, 0x1ac0
    stw r3, 0x898(r5)
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BFBA0_000002E8
lbl_fn_806BFBA0_000001B0:
    addi r4, r31, 0x1acc
    li r30, 0x4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BFBA0_000002E8
lbl_fn_806BFBA0_000001C8:
    addi r4, r31, 0x1ad8
    li r30, 0x4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BFBA0_000002E8
lbl_fn_806BFBA0_000001E0:
    lwz r0, 0x744(r6)
    cmpwi r0, 0x3
    bne lbl_fn_806BFBA0_000002AC
    lwz r0, 0x58(r6)
    mr r5, r6
    lwz r4, 0x7a8(r6)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806BFBA0_00000234
    nop
lbl_fn_806BFBA0_0000020C:
    lwz r0, 0x60(r5)
    cmpw r4, r0
    bne lbl_fn_806BFBA0_00000228
    mulli r0, r3, 0x30
    add r3, r6, r0
    addi r3, r3, 0x60
    b lbl_fn_806BFBA0_00000238
lbl_fn_806BFBA0_00000228:
    addi r5, r5, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806BFBA0_0000020C
lbl_fn_806BFBA0_00000234:
    li r3, 0x0
lbl_fn_806BFBA0_00000238:
    lwz r0, 0x660(r6)
    cmpw r30, r0
    bne lbl_fn_806BFBA0_00000294
    lwz r0, 0x0(r3)
    cmpw r0, r30
    bge lbl_fn_806BFBA0_0000027C
    li r30, 0x2
    bl OSGetTime
    lis r5, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r5)
    stw r4, 0x89c(r5)
    addi r4, r31, 0x1ae0
    stw r3, 0x898(r5)
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BFBA0_000002E8
lbl_fn_806BFBA0_0000027C:
    addi r4, r31, 0x1ae8
    li r30, 0xff
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BFBA0_000002E8
lbl_fn_806BFBA0_00000294:
    addi r4, r31, 0x1af0
    li r30, 0x4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BFBA0_000002E8
lbl_fn_806BFBA0_000002AC:
    addi r4, r31, 0x1af8
    li r30, 0x4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BFBA0_000002E8
lbl_fn_806BFBA0_000002C4:
    lis r3, lbl_80860898@ha
    li r0, 0x14
    lwz r3, lbl_80860898@l(r3)
    li r30, 0x3
    stb r0, 0x8e4(r3)
    b lbl_fn_806BFBA0_000002E8
lbl_fn_806BFBA0_000002DC:
    mr r3, r30
    bl fn_806BFEA0
    mr r30, r3
lbl_fn_806BFBA0_000002E8:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806BFEA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lis r24, lbl_80860898@ha
    lis r31, lbl_807BE9D0@ha
    lwz r11, lbl_80860898@l(r24)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    lwz r0, 0x908(r11)
    mr r28, r6
    mr r22, r7
    mr r29, r8
    cmpwi r0, 0x0
    mr r30, r9
    mr r23, r10
    addi r31, r31, lbl_807BE9D0@l
    bne lbl_fn_806BFEA0_00000364
    li r0, 0x0
    b lbl_fn_806BFEA0_000003B0
lbl_fn_806BFEA0_00000364:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806BFEA0_000003AC
    lwz r3, lbl_80860898@l(r24)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806BFEA0_00000398
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806BFEA0_00000398
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BFEA0_000003AC
lbl_fn_806BFEA0_00000398:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BFEA0_000003AC
    li r0, 0x1
    b lbl_fn_806BFEA0_000003B0
lbl_fn_806BFEA0_000003AC:
    li r0, 0x0
lbl_fn_806BFEA0_000003B0:
    cmpwi r0, 0x0
    beq lbl_fn_806BFEA0_000003E0
    addi r4, r31, 0x1b00
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    li r0, 0x13
    lwz r4, lbl_80860898@l(r3)
    li r3, 0x3
    stb r0, 0x8e4(r4)
    b lbl_fn_806BFEA0_000007FC
lbl_fn_806BFEA0_000003E0:
    cmpwi r23, 0x0
    beq lbl_fn_806BFEA0_00000414
    mr r5, r25
    addi r4, r31, 0x1b20
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    li r0, 0x18
    lwz r4, lbl_80860898@l(r3)
    li r3, 0x3
    stb r0, 0x8e4(r4)
    b lbl_fn_806BFEA0_000007FC
lbl_fn_806BFEA0_00000414:
    cmpwi r22, 0x0
    bne lbl_fn_806BFEA0_000005A4
    cmpwi r28, 0x0
    bne lbl_fn_806BFEA0_00000438
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbzu r0, 0x15(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BFEA0_00000470
lbl_fn_806BFEA0_00000438:
    cmplwi r28, 0x1
    bne lbl_fn_806BFEA0_00000454
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbzu r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806BFEA0_00000470
lbl_fn_806BFEA0_00000454:
    cmplwi r28, 0x3
    bne lbl_fn_806BFEA0_000004A0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbzu r0, 0x15(r3)
    cmplwi r0, 0x2
    beq lbl_fn_806BFEA0_000004A0
lbl_fn_806BFEA0_00000470:
    lbz r5, 0x0(r3)
    mr r6, r28
    addi r4, r31, 0x1b48
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    li r0, 0x12
    lwz r4, lbl_80860898@l(r3)
    li r3, 0x3
    stb r0, 0x8e4(r4)
    b lbl_fn_806BFEA0_000007FC
lbl_fn_806BFEA0_000004A0:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806BFEA0_0000056C
    lwz r3, 0x0(r3)
    mr r4, r25
    bl fn_806DB310
    cmpwi r3, 0x0
    beq lbl_fn_806BFEA0_000004D8
    mr r3, r25
    bl fn_806ACCF0
    cmpwi r3, -0x1
    bne lbl_fn_806BFEA0_000004E0
lbl_fn_806BFEA0_000004D8:
    li r3, 0xff
    b lbl_fn_806BFEA0_000007FC
lbl_fn_806BFEA0_000004E0:
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x7bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BFEA0_000004F8
    li r0, 0x0
    b lbl_fn_806BFEA0_0000053C
lbl_fn_806BFEA0_000004F8:
    li r24, 0x0
    b lbl_fn_806BFEA0_00000528
lbl_fn_806BFEA0_00000500:
    add r3, r3, r24
    lbz r3, 0x7c4(r3)
    bl fn_806ACC80
    cmpwi r3, 0x0
    ble lbl_fn_806BFEA0_00000524
    cmpw r3, r25
    bne lbl_fn_806BFEA0_00000524
    li r0, 0x1
    b lbl_fn_806BFEA0_0000053C
lbl_fn_806BFEA0_00000524:
    addi r24, r24, 0x1
lbl_fn_806BFEA0_00000528:
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x804(r3)
    cmpw r24, r0
    blt lbl_fn_806BFEA0_00000500
    li r0, 0x0
lbl_fn_806BFEA0_0000053C:
    cmpwi r0, 0x0
    bne lbl_fn_806BFEA0_000005A4
    lis r3, lbl_80860898@ha
    li r0, 0x15
    lwz r5, lbl_80860898@l(r3)
    addi r4, r31, 0x1b74
    li r3, 0x40
    stb r0, 0x8e4(r5)
    crclr 6
    bl fn_806A76B0
    li r3, 0x3
    b lbl_fn_806BFEA0_000007FC
lbl_fn_806BFEA0_0000056C:
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BFEA0_000005A4
    lwz r3, 0x0(r3)
    mr r4, r25
    bl fn_806DB310
    cmpwi r3, 0x0
    beq lbl_fn_806BFEA0_0000059C
    mr r3, r25
    bl fn_806ACCF0
    cmpwi r3, -0x1
    bne lbl_fn_806BFEA0_000005A4
lbl_fn_806BFEA0_0000059C:
    li r3, 0xff
    b lbl_fn_806BFEA0_000007FC
lbl_fn_806BFEA0_000005A4:
    bl fn_806B0DE0
    lis r28, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r28)
    lbz r4, 0x17(r5)
    addi r0, r4, 0x1
    cmpw r0, r3
    bne lbl_fn_806BFEA0_000005D0
    li r0, 0x10
    stb r0, 0x8e4(r5)
    li r24, 0x3
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_000005D0:
    lwz r0, 0x744(r5)
    cmpwi r0, 0x16
    bne lbl_fn_806BFEA0_000005E4
    li r24, 0x4
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_000005E4:
    bl fn_806B3CC0
    cmpwi r3, 0x0
    bne lbl_fn_806BFEA0_00000600
    lwz r6, lbl_80860898@l(r28)
    lwz r0, 0x4c(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806BFEA0_00000618
lbl_fn_806BFEA0_00000600:
    lis r3, lbl_80860898@ha
    li r0, 0x11
    lwz r3, lbl_80860898@l(r3)
    li r24, 0x3
    stb r0, 0x8e4(r3)
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_00000618:
    lwz r5, 0x8e0(r6)
    cmplw r29, r5
    beq lbl_fn_806BFEA0_0000064C
    mr r6, r29
    addi r4, r31, 0x1ba8
    li r24, 0x3
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x12
    stb r0, 0x8e4(r3)
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_0000064C:
    lwz r0, 0x58(r6)
    mr r4, r6
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806BFEA0_0000068C
lbl_fn_806BFEA0_00000664:
    lwz r0, 0x60(r4)
    cmpw r25, r0
    bne lbl_fn_806BFEA0_00000680
    mulli r0, r3, 0x30
    add r3, r6, r0
    addi r0, r3, 0x60
    b lbl_fn_806BFEA0_00000690
lbl_fn_806BFEA0_00000680:
    addi r4, r4, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806BFEA0_00000664
lbl_fn_806BFEA0_0000068C:
    li r0, 0x0
lbl_fn_806BFEA0_00000690:
    cmpwi r0, 0x0
    beq lbl_fn_806BFEA0_000006B4
    mr r5, r25
    addi r4, r31, 0x1bd0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    li r24, 0xff
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_000006B4:
    lwz r3, 0x744(r6)
    cmpwi r3, 0xd
    beq lbl_fn_806BFEA0_000006D0
    cmpwi r3, 0x2
    beq lbl_fn_806BFEA0_000006D0
    cmpwi r3, 0x3
    bne lbl_fn_806BFEA0_000006F8
lbl_fn_806BFEA0_000006D0:
    lwz r0, 0x6fc(r6)
    cmpwi r0, 0x0
    bne lbl_fn_806BFEA0_000006E8
    lhz r0, 0x6f8(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806BFEA0_000006F8
lbl_fn_806BFEA0_000006E8:
    cmpwi r26, 0x0
    bne lbl_fn_806BFEA0_00000744
    cmpwi r27, 0x0
    bne lbl_fn_806BFEA0_00000744
lbl_fn_806BFEA0_000006F8:
    cmpwi r3, 0xe
    bne lbl_fn_806BFEA0_00000714
    lwz r0, 0x700(r6)
    cmpw r25, r0
    bne lbl_fn_806BFEA0_00000714
    li r24, 0xff
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_00000714:
    lis r3, lbl_80860898@ha
    mr r5, r26
    lwz r8, lbl_80860898@l(r3)
    mr r6, r27
    addi r4, r31, 0x1bf8
    li r3, 0x40
    lwz r7, 0x6fc(r8)
    lhz r8, 0x6f8(r8)
    crclr 6
    bl fn_806A76B0
    li r24, 0x4
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_00000744:
    lbz r0, 0x14(r6)
    cmplwi r0, 0x2
    beq lbl_fn_806BFEA0_00000790
    lwz r0, 0x7ac(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806BFEA0_00000790
    cmpw r25, r0
    bne lbl_fn_806BFEA0_00000780
    lwz r0, 0x7a8(r6)
    cmpw r0, r25
    bge lbl_fn_806BFEA0_00000778
    li r24, 0x2
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_00000778:
    li r24, 0xff
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_00000780:
    li r0, 0x17
    stb r0, 0x8e4(r6)
    li r24, 0x3
    b lbl_fn_806BFEA0_00000794
lbl_fn_806BFEA0_00000790:
    li r24, 0x2
lbl_fn_806BFEA0_00000794:
    cmplwi r24, 0x2
    bne lbl_fn_806BFEA0_000007F8
    lis r25, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r25)
    lwz r12, 0x8e8(r4)
    cmpwi r12, 0x0
    beq lbl_fn_806BFEA0_000007DC
    mr r3, r30
    lwz r4, 0x8f0(r4)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806BFEA0_000007DC
    lwz r4, lbl_80860898@l(r25)
    li r0, 0x16
    li r3, 0x3
    stb r0, 0x8e4(r4)
    b lbl_fn_806BFEA0_000007FC
lbl_fn_806BFEA0_000007DC:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x16(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BFEA0_000007F8
    li r3, 0x1
    bl fn_806CB550
lbl_fn_806BFEA0_000007F8:
    mr r3, r24
lbl_fn_806BFEA0_000007FC:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806C03B0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80860898@ha
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806C03B0_00000860
    lwz r0, 0x700(r4)
    cmpw r3, r0
    bne lbl_fn_806C03B0_00000860
    li r3, 0x0
    b lbl_fn_806C03B0_00000A38
lbl_fn_806C03B0_00000860:
    li r0, 0x1
    stb r0, 0x18(r4)
    lis r30, lbl_80860898@ha
    li r31, 0x0
    lwz r4, lbl_80860898@l(r30)
    stw r3, 0x700(r4)
    lwz r3, lbl_80860898@l(r30)
    stw r31, 0x760(r3)
    lwz r3, lbl_80860898@l(r30)
    stw r31, 0x770(r3)
    lwz r3, lbl_80860898@l(r30)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    lwz r3, lbl_80860898@l(r30)
    stw r31, 0x7ac(r3)
    lwz r8, lbl_80860898@l(r30)
    lwz r0, 0x58(r8)
    cmpwi r0, 0x20
    bne lbl_fn_806C03B0_000008B4
    li r5, 0xff
    b lbl_fn_806C03B0_00000910
lbl_fn_806C03B0_000008B4:
    li r5, 0x0
    nop
lbl_fn_806C03B0_000008BC:
    lwz r7, 0x58(r8)
    mr r6, r8
    clrlwi r3, r5, 24
    li r4, 0x0
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_806C03B0_000008F4
    nop
lbl_fn_806C03B0_000008DC:
    lbz r0, 0x76(r6)
    cmplw r3, r0
    beq lbl_fn_806C03B0_000008F4
    addi r6, r6, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806C03B0_000008DC
lbl_fn_806C03B0_000008F4:
    cmpw r4, r7
    bne lbl_fn_806C03B0_00000900
    b lbl_fn_806C03B0_00000910
lbl_fn_806C03B0_00000900:
    addi r5, r5, 0x1
    cmplwi r5, 0x20
    blt lbl_fn_806C03B0_000008BC
    li r5, 0xff
lbl_fn_806C03B0_00000910:
    stb r5, 0x676(r8)
    lis r3, lbl_80860898@ha
    lwz r8, lbl_80860898@l(r3)
    lwz r0, 0x6c0(r8)
    cmpwi r0, 0x0
    bne lbl_fn_806C03B0_00000A34
    lwz r4, 0x660(r8)
    mr r7, r8
    li r6, 0x0
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r1)
    lbz r0, 0x676(r8)
    extrwi r5, r0, 8, 16
    rlwinm r4, r0, 24, 8, 15
    clrlslwi r3, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r4, r5, r4
    or r0, r3, r0
    or r0, r4, r0
    srwi r3, r0, 16
    slwi r0, r0, 16
    or r0, r3, r0
    stw r0, 0xc(r1)
    lwz r0, 0x58(r8)
    lwz r3, 0x7a8(r8)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C03B0_000009BC
lbl_fn_806C03B0_00000994:
    lwz r0, 0x60(r7)
    cmpw r3, r0
    bne lbl_fn_806C03B0_000009B0
    mulli r0, r6, 0x30
    add r3, r8, r0
    addi r30, r3, 0x60
    b lbl_fn_806C03B0_000009C0
lbl_fn_806C03B0_000009B0:
    addi r7, r7, 0x30
    addi r6, r6, 0x1
    bdnz lbl_fn_806C03B0_00000994
lbl_fn_806C03B0_000009BC:
    li r30, 0x0
lbl_fn_806C03B0_000009C0:
    li r28, 0x0
    li r29, 0x0
    lis r31, lbl_80860898@ha
    b lbl_fn_806C03B0_00000A24
lbl_fn_806C03B0_000009D0:
    cmpw r28, r0
    bge lbl_fn_806C03B0_000009E4
    add r3, r3, r29
    addi r3, r3, 0x60
    b lbl_fn_806C03B0_000009E8
lbl_fn_806C03B0_000009E4:
    li r3, 0x0
lbl_fn_806C03B0_000009E8:
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r30)
    cmpw r0, r4
    beq lbl_fn_806C03B0_00000A1C
    lwz r5, 0x4(r3)
    addi r7, r1, 0x8
    lhz r6, 0xc(r3)
    li r3, 0x7
    li r8, 0x2
    bl fn_806BC860
    cmpwi r3, 0x0
    beq lbl_fn_806C03B0_00000A1C
    b lbl_fn_806C03B0_00000A38
lbl_fn_806C03B0_00000A1C:
    addi r29, r29, 0x30
    addi r28, r28, 0x1
lbl_fn_806C03B0_00000A24:
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x58(r3)
    cmpw r28, r0
    blt lbl_fn_806C03B0_000009D0
lbl_fn_806C03B0_00000A34:
    li r3, 0x0
lbl_fn_806C03B0_00000A38:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806C05F0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    cmpwi r4, 0x0
    mr r26, r3
    mr r29, r4
    li r28, 0x0
    li r27, 0x0
    bne lbl_fn_806C05F0_00000AA8
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lwz r0, 0x6fc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C05F0_00000AF4
    lhz r0, 0x6f8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C05F0_00000AF4
lbl_fn_806C05F0_00000AA8:
    lis r26, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r26)
    stw r0, 0x760(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r26)
    cmpwi r29, 0x0
    li r0, 0x0
    stw r4, 0x76c(r5)
    stw r3, 0x768(r5)
    stw r0, 0x7ac(r5)
    bne lbl_fn_806C05F0_00000AEC
    lis r4, lbl_807C0604@ha
    li r3, 0x4
    addi r4, r4, lbl_807C0604@l
    crclr 6
    bl fn_806A76B0
lbl_fn_806C05F0_00000AEC:
    li r3, 0x0
    b lbl_fn_806C05F0_00000DD0
lbl_fn_806C05F0_00000AF4:
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C05F0_00000B18
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lwz r28, 0x664(r4)
    lhz r27, 0x66c(r4)
    stw r3, 0x7ac(r4)
    b lbl_fn_806C05F0_00000B44
lbl_fn_806C05F0_00000B18:
    stw r3, 0x7ac(r4)
    lis r29, lbl_80860898@ha
    mr r4, r26
    lwz r3, lbl_80860898@l(r29)
    lwz r3, 0x0(r3)
    bl fn_806DB310
    cmpwi r3, 0x0
    bne lbl_fn_806C05F0_00000B44
    lwz r3, lbl_80860898@l(r29)
    lwz r28, 0x664(r3)
    lhz r27, 0x66c(r3)
lbl_fn_806C05F0_00000B44:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C05F0_00000B78
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C05F0_00000B98
    lwz r3, 0x0(r3)
    mr r4, r26
    bl fn_806DB310
    cmpwi r3, 0x0
    beq lbl_fn_806C05F0_00000B98
lbl_fn_806C05F0_00000B78:
    lis r4, lbl_80860898@ha
    li r5, 0x0
    lwz r3, lbl_80860898@l(r4)
    li r0, 0x7530
    stb r5, 0x8e6(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x770(r3)
    b lbl_fn_806C05F0_00000BB4
lbl_fn_806C05F0_00000B98:
    lis r4, lbl_80860898@ha
    li r5, 0x5
    lwz r3, lbl_80860898@l(r4)
    li r0, 0x2ee0
    stb r5, 0x8e6(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x770(r3)
lbl_fn_806C05F0_00000BB4:
    bl OSGetTime
    lis r5, lbl_80860898@ha
    li r0, 0x0
    lwz r7, lbl_80860898@l(r5)
    li r6, 0x0
    stw r4, 0x77c(r7)
    stw r3, 0x778(r7)
    stw r0, 0x760(r7)
    lwz r5, lbl_80860898@l(r5)
    lwz r0, 0x58(r5)
    mr r4, r5
    lwz r3, 0x7a8(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C05F0_00000C1C
    nop
lbl_fn_806C05F0_00000BF4:
    lwz r0, 0x60(r4)
    cmpw r3, r0
    bne lbl_fn_806C05F0_00000C10
    mulli r0, r6, 0x30
    add r3, r5, r0
    addi r4, r3, 0x60
    b lbl_fn_806C05F0_00000C20
lbl_fn_806C05F0_00000C10:
    addi r4, r4, 0x30
    addi r6, r6, 0x1
    bdnz lbl_fn_806C05F0_00000BF4
lbl_fn_806C05F0_00000C1C:
    li r4, 0x0
lbl_fn_806C05F0_00000C20:
    lis r30, lbl_80860898@ha
    addi r31, r1, 0x8
    lwz r29, lbl_80860898@l(r30)
    li r3, -0x2
    lbz r0, 0x15(r29)
    extrwi r7, r0, 8, 16
    rlwinm r6, r0, 24, 8, 15
    clrlslwi r5, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r6, r7, r6
    or r0, r5, r0
    or r0, r6, r0
    srwi r5, r0, 16
    slwi r0, r0, 16
    or r0, r5, r0
    stw r0, 0x8(r1)
    lwz r0, 0x4(r4)
    stw r0, 0xc(r1)
    lhz r0, 0xc(r4)
    extrwi r7, r0, 8, 16
    rlwinm r6, r0, 24, 8, 15
    clrlslwi r5, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r6, r7, r6
    or r0, r5, r0
    or r0, r6, r0
    srwi r5, r0, 16
    slwi r0, r0, 16
    or r0, r5, r0
    stw r0, 0x10(r1)
    lwz r0, 0x8(r4)
    stw r0, 0x14(r1)
    lhz r0, 0xe(r4)
    extrwi r7, r0, 8, 16
    rlwinm r6, r0, 24, 8, 15
    clrlslwi r5, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r6, r7, r6
    or r0, r5, r0
    or r0, r6, r0
    srwi r5, r0, 16
    slwi r0, r0, 16
    or r0, r5, r0
    stw r0, 0x18(r1)
    lbz r0, 0x17(r4)
    extrwi r6, r0, 8, 16
    rlwinm r5, r0, 24, 8, 15
    clrlslwi r4, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r5, r6, r5
    or r0, r4, r0
    or r0, r5, r0
    srwi r4, r0, 16
    slwi r0, r0, 16
    or r0, r4, r0
    stw r0, 0x1c(r1)
    lwz r5, 0x8c8(r29)
    rlwinm r4, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwimi r4, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    stw r0, 0x20(r1)
    lwz r5, 0x8e0(r29)
    rlwinm r4, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwimi r4, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    stw r0, 0x24(r1)
    lwz r0, 0x8ec(r29)
    stw r0, 0x28(r1)
    bl fn_806ABB70
    addi r0, r3, 0x1
    stw r0, 0x75c(r29)
    mr r4, r26
    mr r5, r28
    lwz r11, lbl_80860898@l(r30)
    mr r6, r27
    mr r7, r31
    li r3, 0x1
    lwz r10, 0x75c(r11)
    li r8, 0xb
    rlwinm r9, r10, 24, 8, 15
    extlwi r0, r10, 8, 8
    rlwimi r9, r10, 24, 24, 31
    rlwimi r0, r10, 8, 16, 23
    or r0, r9, r0
    rotlwi r0, r0, 16
    stw r0, 0x2c(r1)
    lwz r9, 0x6c0(r11)
    neg r0, r9
    or r9, r0, r9
    srwi r0, r9, 31
    extrwi r11, r0, 8, 16
    rlwinm r9, r9, 9, 23, 23
    rlwinm r10, r0, 24, 8, 15
    extlwi r0, r0, 8, 8
    or r10, r11, r10
    or r0, r9, r0
    or r0, r10, r0
    srwi r9, r0, 16
    slwi r0, r0, 16
    or r0, r9, r0
    stw r0, 0x30(r1)
    bl fn_806BC860
lbl_fn_806C05F0_00000DD0:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806C0980(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    addi r11, r1, 0x250
    bl _savegpr_22
    cmpwi r4, 0x0
    mr r24, r3
    mr r25, r5
    li r26, 0x0
    bne lbl_fn_806C0980_00000E44
    lis r5, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r5)
    lbz r3, 0x749(r4)
    addi r0, r3, 0x1
    stb r0, 0x749(r4)
    lwz r5, lbl_80860898@l(r5)
    lbz r4, 0x749(r5)
    lwz r3, 0x804(r5)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stb r0, 0x749(r5)
lbl_fn_806C0980_00000E44:
    lis r29, lbl_80860898@ha
    li r0, 0x3
    lwz r3, lbl_80860898@l(r29)
    li r27, 0x0
    lis r23, lbl_807C0630@ha
    li r30, 0x0
    stb r0, 0x14(r3)
    lis r31, lbl_807BEA3C@ha
    b lbl_fn_806C0980_00000FDC
lbl_fn_806C0980_00000E68:
    lwz r22, lbl_80860898@l(r29)
    bl fn_806AEAF0
    lbz r0, 0x749(r22)
    lwz r5, 0x7bc(r22)
    add r4, r22, r0
    lbz r0, 0x7c4(r4)
    mulli r0, r0, 0xc
    add r4, r5, r0
    bl fn_806D0060
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_806C0980_00000FB8
    cmpwi r3, -0x1
    beq lbl_fn_806C0980_00000FB8
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x749(r3)
    lwz r4, 0x7bc(r3)
    add r3, r3, r0
    lbz r0, 0x7c4(r3)
    mulli r0, r0, 0xc
    add r3, r4, r0
    bl fn_806CFAE0
    cmpwi r3, 0x0
    beq lbl_fn_806C0980_00000FB8
    lwz r5, lbl_80860898@l(r29)
    li r3, 0x0
    lwz r0, 0x58(r5)
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C0980_00000F0C
lbl_fn_806C0980_00000EE4:
    lwz r0, 0x60(r4)
    cmpw r28, r0
    bne lbl_fn_806C0980_00000F00
    mulli r0, r3, 0x30
    add r3, r5, r0
    addi r0, r3, 0x60
    b lbl_fn_806C0980_00000F10
lbl_fn_806C0980_00000F00:
    addi r4, r4, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806C0980_00000EE4
lbl_fn_806C0980_00000F0C:
    li r0, 0x0
lbl_fn_806C0980_00000F10:
    cmpwi r0, 0x0
    bne lbl_fn_806C0980_00000FB8
    lwz r3, 0x0(r5)
    mr r4, r28
    addi r5, r1, 0xc
    bl fn_806DB220
    lwz r6, lbl_80860898@l(r29)
    mr r22, r3
    lwz r4, 0xc(r1)
    addi r5, r1, 0x10
    lwz r3, 0x0(r6)
    bl fn_806DB0A0
    stw r30, 0x8(r1)
    or r22, r22, r3
    addi r3, r31, lbl_807BEA3C@l
    addi r4, r1, 0x8
    addi r5, r1, 0x18
    li r6, 0x2f
    bl fn_806ABA10
    cmpwi r3, 0x0
    ble lbl_fn_806C0980_00000F7C
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xa
    bl fn_8068446C
    clrlwi r0, r3, 24
    b lbl_fn_806C0980_00000F80
lbl_fn_806C0980_00000F7C:
    li r0, 0x0
lbl_fn_806C0980_00000F80:
    cmpwi r0, 0x0
    beq lbl_fn_806C0980_00000F9C
    addi r4, r23, lbl_807C0630@l
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C0980_00000FB8
lbl_fn_806C0980_00000F9C:
    cmpwi r22, 0x0
    bne lbl_fn_806C0980_00000FB8
    lwz r0, 0x14(r1)
    cmpwi r0, 0x4
    bne lbl_fn_806C0980_00000FB8
    li r26, 0x1
    b lbl_fn_806C0980_00000FEC
lbl_fn_806C0980_00000FB8:
    lwz r5, lbl_80860898@l(r29)
    addi r27, r27, 0x1
    lbz r0, 0x749(r5)
    lwz r3, 0x804(r5)
    add r4, r27, r0
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stb r0, 0x749(r5)
lbl_fn_806C0980_00000FDC:
    lwz r3, lbl_80860898@l(r29)
    lwz r0, 0x804(r3)
    cmpw r27, r0
    blt lbl_fn_806C0980_00000E68
lbl_fn_806C0980_00000FEC:
    cmpwi r26, 0x0
    beq lbl_fn_806C0980_0000103C
    cmpw r28, r25
    bne lbl_fn_806C0980_00001000
    li r24, 0x1
lbl_fn_806C0980_00001000:
    lis r25, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r25)
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    lwz r5, lbl_80860898@l(r25)
    li r0, 0xff
    mr r3, r28
    mr r4, r24
    stb r0, 0x676(r5)
    lwz r5, lbl_80860898@l(r25)
    stw r28, 0x660(r5)
    bl fn_806C05F0
    b lbl_fn_806C0980_00001068
lbl_fn_806C0980_0000103C:
    lis r24, lbl_80860898@ha
    li r0, 0xbb8
    lwz r3, lbl_80860898@l(r24)
    stw r0, 0x770(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r24)
    li r0, 0x0
    stw r4, 0x77c(r5)
    stw r3, 0x778(r5)
    li r3, 0x0
    stw r0, 0x760(r5)
lbl_fn_806C0980_00001068:
    addi r11, r1, 0x250
    bl _restgpr_22
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_806C0C20(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    lis r27, lbl_80860898@ha
    lis r31, lbl_807BE9D0@ha
    lwz r4, lbl_80860898@l(r27)
    li r28, 0x0
    mr r30, r3
    addi r31, r31, lbl_807BE9D0@l
    stw r28, 0x7ac(r4)
    lwz r3, lbl_80860898@l(r27)
    stb r28, 0x750(r3)
    bl OSGetTime
    lwz r6, lbl_80860898@l(r27)
    li r5, 0x30
    stw r4, 0x77c(r6)
    li r4, 0x0
    stw r3, 0x778(r6)
    addi r3, r6, 0x660
    bl memset
    lwz r3, lbl_80860898@l(r27)
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C0C20_000011CC
    lwz r29, 0x744(r3)
    cmpwi r29, 0xc
    beq lbl_fn_806C0C20_000011A0
    lis r28, lbl_80860890@ha
    addi r27, r28, lbl_80860890@l
    lwz r30, lbl_80860890@l(r28)
    lwz r26, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r28)
    addi r7, r27, 0x4dd3
    subfe r3, r30, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r27, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
    lwz r8, 0x30(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C0C20_000011A0:
    lis r3, lbl_80860898@ha
    li r0, 0xc
    lwz r4, lbl_80860898@l(r3)
    li r3, 0x0
    stw r0, 0x744(r4)
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
    beq lbl_fn_806C0C20_0000150C
    li r3, 0x0
    b lbl_fn_806C0C20_00001510
lbl_fn_806C0C20_000011CC:
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C0C20_000012D8
    lwz r27, 0x744(r3)
    cmpwi r27, 0x2
    beq lbl_fn_806C0C20_00001284
    lis r28, lbl_80860890@ha
    addi r29, r28, lbl_80860890@l
    lwz r26, lbl_80860890@l(r28)
    lwz r25, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r25, r4
    stw r3, lbl_80860890@l(r28)
    addi r7, r29, 0x4dd3
    subfe r3, r26, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r27, 2
    lwz r8, 0x8(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C0C20_00001284:
    lis r31, lbl_80860898@ha
    cmpwi r30, 0x0
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x2
    stw r0, 0x744(r3)
    beq lbl_fn_806C0C20_000012BC
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x1
    stw r0, 0x708(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r31)
    stw r4, 0x714(r5)
    stw r3, 0x710(r5)
    b lbl_fn_806C0C20_0000150C
lbl_fn_806C0C20_000012BC:
    li r3, 0x0
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
    beq lbl_fn_806C0C20_0000150C
    li r3, 0x0
    b lbl_fn_806C0C20_00001510
lbl_fn_806C0C20_000012D8:
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806C0C20_00001320
    mr r5, r30
    li r3, 0x1
    li r4, 0x0
    bl fn_806C0980
    lwz r4, lbl_80860898@l(r27)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C0C20_0000130C
    bl fn_806C5EB0
    b lbl_fn_806C0C20_00001310
lbl_fn_806C0C20_0000130C:
    bl fn_806C5C10
lbl_fn_806C0C20_00001310:
    cmpwi r3, 0x0
    beq lbl_fn_806C0C20_0000150C
    li r3, 0x0
    b lbl_fn_806C0C20_00001510
lbl_fn_806C0C20_00001320:
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806C0C20_0000150C
    cmpwi r3, 0x0
    beq lbl_fn_806C0C20_00001504
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r27)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r27)
    lis r4, 0xffff
    li r3, 0x6
    stb r28, 0x751(r5)
    subi r4, r4, 0x3a1a
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r27)
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r27)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C0C20_000013B8
    cmpwi r6, 0x0
    bne lbl_fn_806C0C20_000013B8
    li r6, 0x1
lbl_fn_806C0C20_000013B8:
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    lis r30, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C0C20_00001428
    li r4, 0x0
    b lbl_fn_806C0C20_00001474
lbl_fn_806C0C20_00001428:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C0C20_00001470
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C0C20_0000145C
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C0C20_0000145C
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C0C20_00001470
lbl_fn_806C0C20_0000145C:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C0C20_00001470
    li r4, 0x1
    b lbl_fn_806C0C20_00001474
lbl_fn_806C0C20_00001470:
    li r4, 0x0
lbl_fn_806C0C20_00001474:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x14
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r26, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r26)
    cntlzw r0, r3
    srwi r25, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r26)
    mr r7, r3
    lwz r12, 0x8a0(r26)
    mr r5, r25
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r26)
    cntlzw r0, r0
    li r3, 0x6
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806C0C20_00001504:
    li r3, 0x0
    b lbl_fn_806C0C20_00001510
lbl_fn_806C0C20_0000150C:
    li r3, 0x1
lbl_fn_806C0C20_00001510:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806C10C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r5, lbl_80860898@ha
    lis r31, lbl_807BE9D0@ha
    lwz r5, lbl_80860898@l(r5)
    mr r29, r3
    mr r28, r4
    addi r31, r31, lbl_807BE9D0@l
    lwz r0, 0x660(r5)
    addi r3, r5, 0x660
    cmpwi r0, 0x0
    beq lbl_fn_806C10C0_00001574
    li r4, 0x0
    li r5, 0x30
    bl memset
lbl_fn_806C10C0_00001574:
    lis r26, lbl_80860898@ha
    li r0, 0xff
    lwz r3, lbl_80860898@l(r26)
    stb r0, 0x808(r3)
    lwz r3, lbl_80860898@l(r26)
    lwz r3, 0x740(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806C10C0_000015A4
    bl fn_806FC900
    lwz r3, lbl_80860898@l(r26)
    li r0, 0x0
    stw r0, 0x740(r3)
lbl_fn_806C10C0_000015A4:
    lis r26, lbl_80860898@ha
    li r27, 0x0
    lwz r3, lbl_80860898@l(r26)
    stw r27, 0x7ac(r3)
    lwz r3, lbl_80860898@l(r26)
    lbz r0, 0x16(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806C10C0_00001868
    addi r4, r31, 0x1c8c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r26)
    stb r27, 0x18(r3)
    lwz r3, lbl_80860898@l(r26)
    stw r27, 0x700(r3)
    lwz r3, lbl_80860898@l(r26)
    lwz r26, 0x744(r3)
    cmpwi r26, 0x11
    beq lbl_fn_806C10C0_00001694
    lis r30, lbl_80860890@ha
    addi r27, r30, lbl_80860890@l
    lwz r25, lbl_80860890@l(r30)
    lwz r24, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r24, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r27, 0x4dd3
    subfe r3, r25, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r27, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r26, 2
    lwz r8, 0x44(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C10C0_00001694:
    lis r30, lbl_80860898@ha
    li r0, 0x11
    lwz r5, lbl_80860898@l(r30)
    li r27, 0x0
    mr r3, r29
    li r4, 0x0
    stw r0, 0x744(r5)
    lwz r5, lbl_80860898@l(r30)
    stw r27, 0x784(r5)
    lwz r5, lbl_80860898@l(r30)
    sth r27, 0x75a(r5)
    lwz r5, lbl_80860898@l(r30)
    stw r29, 0x7b0(r5)
    bl fn_806B1680
    cmpwi r3, 0x0
    beq lbl_fn_806C10C0_000016FC
    lwz r4, lbl_80860898@l(r30)
    li r0, 0x1
    stb r0, 0x751(r4)
    lwz r3, 0x0(r3)
    bl fn_806EABE0
    lwz r4, lbl_80860898@l(r30)
    mr r3, r29
    stb r27, 0x751(r4)
    bl fn_806CCDB0
    b lbl_fn_806C10C0_00001704
lbl_fn_806C10C0_000016FC:
    mr r3, r29
    bl fn_806CCDB0
lbl_fn_806C10C0_00001704:
    li r29, 0x1
    li r30, 0x30
    lis r27, lbl_80860898@ha
    b lbl_fn_806C10C0_00001844
lbl_fn_806C10C0_00001714:
    cmpw r29, r0
    bge lbl_fn_806C10C0_00001728
    add r3, r3, r30
    addi r3, r3, 0x60
    b lbl_fn_806C10C0_0000172C
lbl_fn_806C10C0_00001728:
    li r3, 0x0
lbl_fn_806C10C0_0000172C:
    lwz r24, 0x0(r3)
    addi r4, r31, 0x1cbc
    li r3, 0x80
    li r5, 0x0
    mr r6, r24
    crclr 6
    bl fn_806A76B0
    lwz r7, lbl_80860898@l(r27)
    li r4, 0x0
    lwz r5, 0x7b0(r7)
    mr r6, r7
    rlwinm r3, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwimi r3, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r1)
    lwz r0, 0x58(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C10C0_000017AC
lbl_fn_806C10C0_00001784:
    lwz r0, 0x60(r6)
    cmpw r24, r0
    bne lbl_fn_806C10C0_000017A0
    mulli r0, r4, 0x30
    add r3, r7, r0
    addi r3, r3, 0x60
    b lbl_fn_806C10C0_000017B0
lbl_fn_806C10C0_000017A0:
    addi r6, r6, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806C10C0_00001784
lbl_fn_806C10C0_000017AC:
    li r3, 0x0
lbl_fn_806C10C0_000017B0:
    cmpwi r3, 0x0
    bne lbl_fn_806C10C0_000017D0
    addi r4, r31, 0x1ce0
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    li r0, 0x0
    b lbl_fn_806C10C0_0000182C
lbl_fn_806C10C0_000017D0:
    lwz r5, 0x4(r3)
    mr r4, r24
    lhz r6, 0xc(r3)
    addi r7, r1, 0x8
    li r3, 0xd
    li r8, 0x1
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r27)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C10C0_00001804
    bl fn_806C5EB0
    b lbl_fn_806C10C0_00001808
lbl_fn_806C10C0_00001804:
    bl fn_806C5C10
lbl_fn_806C10C0_00001808:
    cmpwi r3, 0x0
    beq lbl_fn_806C10C0_00001818
    li r0, 0x0
    b lbl_fn_806C10C0_0000182C
lbl_fn_806C10C0_00001818:
    bl OSGetTime
    lwz r5, lbl_80860898@l(r27)
    li r0, 0x1
    stw r4, 0x794(r5)
    stw r3, 0x790(r5)
lbl_fn_806C10C0_0000182C:
    cmpwi r0, 0x0
    bne lbl_fn_806C10C0_0000183C
    li r3, 0x0
    b lbl_fn_806C10C0_00001880
lbl_fn_806C10C0_0000183C:
    addi r30, r30, 0x30
    addi r29, r29, 0x1
lbl_fn_806C10C0_00001844:
    lwz r3, lbl_80860898@l(r27)
    lwz r0, 0x58(r3)
    cmpw r29, r0
    blt lbl_fn_806C10C0_00001714
    cmpwi r0, 0x1
    bne lbl_fn_806C10C0_0000187C
    mr r3, r28
    bl fn_806C3ED0
    b lbl_fn_806C10C0_0000187C
lbl_fn_806C10C0_00001868:
    addi r4, r31, 0x1d14
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    bl fn_806CD150
lbl_fn_806C10C0_0000187C:
    li r3, 0x1
lbl_fn_806C10C0_00001880:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806C1430(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lis r28, lbl_80860898@ha
    lis r30, lbl_807BE9D0@ha
    lwz r3, lbl_80860898@l(r28)
    addi r30, r30, lbl_807BE9D0@l
    li r31, 0x1
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1430_000018DC
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806C1430_00001CE8
lbl_fn_806C1430_000018DC:
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    ble lbl_fn_806C1430_00001910
    li r0, 0x1
    stb r0, 0x751(r3)
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    stb r0, 0x751(r3)
lbl_fn_806C1430_00001910:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x8c8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C1430_00001B04
    cmpwi r3, 0x0
    beq lbl_fn_806C1430_00001CE0
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r31)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x19
    stb r0, 0x751(r5)
    subi r4, r4, 0x3a30
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r31)
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C1430_000019B4
    cmpwi r6, 0x0
    bne lbl_fn_806C1430_000019B4
    li r6, 0x1
lbl_fn_806C1430_000019B4:
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1430_00001A24
    li r4, 0x0
    b lbl_fn_806C1430_00001A70
lbl_fn_806C1430_00001A24:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C1430_00001A6C
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C1430_00001A58
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C1430_00001A58
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C1430_00001A6C
lbl_fn_806C1430_00001A58:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1430_00001A6C
    li r4, 0x1
    b lbl_fn_806C1430_00001A70
lbl_fn_806C1430_00001A6C:
    li r4, 0x0
lbl_fn_806C1430_00001A70:
    neg r0, r4
    addi r3, r1, 0x14
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x48
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r27, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r27)
    cntlzw r0, r3
    srwi r26, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r27)
    mr r7, r3
    lwz r12, 0x8a0(r27)
    mr r5, r26
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r27)
    cntlzw r0, r0
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806C1430_00001CE0
lbl_fn_806C1430_00001B04:
    cmpwi r3, 0x0
    beq lbl_fn_806C1430_00001CE0
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r31)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x19
    stb r0, 0x751(r5)
    subi r4, r4, 0x3a2e
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r31)
    addi r3, r1, 0x8
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C1430_00001B94
    cmpwi r6, 0x0
    bne lbl_fn_806C1430_00001B94
    li r6, 0x1
lbl_fn_806C1430_00001B94:
    addi r3, r1, 0x8
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1430_00001C04
    li r4, 0x0
    b lbl_fn_806C1430_00001C50
lbl_fn_806C1430_00001C04:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C1430_00001C4C
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C1430_00001C38
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C1430_00001C38
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C1430_00001C4C
lbl_fn_806C1430_00001C38:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1430_00001C4C
    li r4, 0x1
    b lbl_fn_806C1430_00001C50
lbl_fn_806C1430_00001C4C:
    li r4, 0x0
lbl_fn_806C1430_00001C50:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x20
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r27, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r27)
    cntlzw r0, r3
    srwi r26, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r27)
    mr r7, r3
    lwz r12, 0x8a0(r27)
    mr r5, r26
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r27)
    cntlzw r0, r0
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806C1430_00001CE0:
    li r3, 0x0
    b lbl_fn_806C1430_00001F10
lbl_fn_806C1430_00001CE8:
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806C1430_00001CFC
    li r3, 0x1
    b lbl_fn_806C1430_00001F10
lbl_fn_806C1430_00001CFC:
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x690(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C1430_00001D28
    addi r4, r30, 0x1d44
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    stw r0, 0x690(r3)
lbl_fn_806C1430_00001D28:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x740(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806C1430_00001D4C
    bl fn_806FC900
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    stw r0, 0x740(r3)
lbl_fn_806C1430_00001D4C:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806C1430_00001D6C
    lbz r0, 0x757(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1430_00001D9C
lbl_fn_806C1430_00001D6C:
    lwz r3, 0x660(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806C1430_00001D88
    li r4, 0x1
    bl fn_806B1680
    cmpwi r3, 0x0
    bne lbl_fn_806C1430_00001D9C
lbl_fn_806C1430_00001D88:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    ble lbl_fn_806C1430_00001E20
lbl_fn_806C1430_00001D9C:
    addi r4, r30, 0x1d64
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    beq lbl_fn_806C1430_00001DCC
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806C1430_00001DE0
lbl_fn_806C1430_00001DCC:
    addi r4, r30, 0x1d90
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806C1430_00001F0C
lbl_fn_806C1430_00001DE0:
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    li r0, 0x0
    addi r4, r30, 0x1dc0
    li r3, 0x40
    stb r0, 0x751(r5)
    crclr 6
    bl fn_806A76B0
    li r3, 0x1
    bl fn_806C3ED0
    b lbl_fn_806C1430_00001F0C
lbl_fn_806C1430_00001E20:
    addi r4, r30, 0x1df0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x3
    beq lbl_fn_806C1430_00001EE0
    lis r29, lbl_80860890@ha
    addi r31, r29, lbl_80860890@l
    lwz r27, lbl_80860890@l(r29)
    lwz r26, 0x4(r31)
    bl OSGetTime
    stw r4, 0x4(r31)
    lis r31, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r31, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r31, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0xc(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C1430_00001EE0:
    lis r3, lbl_80860898@ha
    li r0, 0x3
    lwz r5, lbl_80860898@l(r3)
    addi r4, r30, 0x1e14
    li r3, 0x40
    stw r0, 0x744(r5)
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    bl fn_806C0C20
    mr r31, r3
lbl_fn_806C1430_00001F0C:
    mr r3, r31
lbl_fn_806C1430_00001F10:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806C1AC0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    cmpwi r3, 0x0
    lis r31, lbl_807BE9D0@ha
    addi r31, r31, lbl_807BE9D0@l
    beq lbl_fn_806C1AC0_00001F6C
    cmpwi r3, 0x1
    beq lbl_fn_806C1AC0_00001F90
    cmpwi r3, 0x2
    beq lbl_fn_806C1AC0_00002070
    cmpwi r3, 0x3
    beq lbl_fn_806C1AC0_00002760
    b lbl_fn_806C1AC0_00002CA8
lbl_fn_806C1AC0_00001F6C:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806C1AC0_00001F88
    bl fn_806C3270
    b lbl_fn_806C1AC0_00002CA8
lbl_fn_806C1AC0_00001F88:
    bl fn_806C2F70
    b lbl_fn_806C1AC0_00002CA8
lbl_fn_806C1AC0_00001F90:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r30, 0x744(r3)
    cmpwi r30, 0x1
    beq lbl_fn_806C1AC0_00002044
    lis r29, lbl_80860890@ha
    addi r28, r29, lbl_80860890@l
    lwz r27, lbl_80860890@l(r29)
    lwz r26, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r28, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r30, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C1AC0_00002044:
    lis r4, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x744(r3)
    lwz r3, lbl_80860898@l(r4)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806C1AC0_00002CA8
    lwz r0, 0x660(r3)
    stw r0, 0x7b0(r3)
    b lbl_fn_806C1AC0_00002CA8
lbl_fn_806C1AC0_00002070:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r30, 0x744(r3)
    cmpwi r30, 0x1
    beq lbl_fn_806C1AC0_00002124
    lis r29, lbl_80860890@ha
    addi r28, r29, lbl_80860890@l
    lwz r26, lbl_80860890@l(r29)
    lwz r27, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r27, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r28, 0x4dd3
    subfe r3, r26, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r30, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C1AC0_00002124:
    lis r28, lbl_80860898@ha
    li r29, 0x1
    lwz r3, lbl_80860898@l(r28)
    stw r29, 0x744(r3)
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806C1AC0_00002174
    addi r4, r31, 0x1e38
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    li r4, 0x0
    li r5, 0x30
    stw r0, 0x6c4(r3)
    lwz r3, lbl_80860898@l(r28)
    addi r3, r3, 0x6c8
    bl memset
    b lbl_fn_806C1AC0_00002CA8
lbl_fn_806C1AC0_00002174:
    lwz r3, lbl_80860898@l(r28)
    stb r29, 0x16(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806C1AC0_00002190
    bl fn_806EF8B0
lbl_fn_806C1AC0_00002190:
    lis r4, lbl_80860898@ha
    li r0, 0x3
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x14(r3)
    lwz r3, lbl_80860898@l(r4)
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C1AC0_000021BC
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806C1AC0_000021D4
lbl_fn_806C1AC0_000021BC:
    li r0, 0x1
    stb r0, 0x18(r3)
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x7a8(r3)
    stw r0, 0x700(r3)
lbl_fn_806C1AC0_000021D4:
    lis r28, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r28)
    stb r0, 0x756(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r28)
    stw r4, 0x7a4(r5)
    stw r3, 0x7a0(r5)
    lwz r0, 0x8e0(r5)
    cmpwi r0, 0x2
    bne lbl_fn_806C1AC0_00002CA8
    lwz r0, 0x690(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806C1AC0_0000274C
    lwz r5, lbl_80860898@l(r28)
    lwz r4, 0x660(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r1)
    lwz r4, 0x58(r5)
    cmpwi r4, 0x20
    beq lbl_fn_806C1AC0_0000268C
    cmpwi r4, 0x0
    ble lbl_fn_806C1AC0_00002618
    cmpwi r4, 0x8
    ble lbl_fn_806C1AC0_00002594
    cmpwi r4, -0x1
    li r0, 0x0
    ble lbl_fn_806C1AC0_0000225C
    li r0, 0x1
lbl_fn_806C1AC0_0000225C:
    cmpwi r0, 0x0
    beq lbl_fn_806C1AC0_00002594
    lis r6, lbl_80860898@ha
    subi r0, r4, 0x1
    mulli r3, r4, 0x30
    lwz r6, lbl_80860898@l(r6)
    srwi r0, r0, 3
    add r3, r6, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806C1AC0_00002594
lbl_fn_806C1AC0_00002288:
    lwz r0, 0x34(r3)
    lwz r6, 0x30(r3)
    stw r6, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r6, 0x38(r3)
    stw r6, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r6, 0x40(r3)
    stw r6, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r6, 0x48(r3)
    stw r6, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r6, 0x50(r3)
    stw r6, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r6, 0x58(r3)
    stw r6, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r6, 0x0(r3)
    stw r6, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r6, 0x8(r3)
    stw r6, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r6, 0x10(r3)
    stw r6, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r6, 0x18(r3)
    stw r6, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r6, 0x20(r3)
    stw r6, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r6, 0x28(r3)
    stw r6, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r6, -0x30(r3)
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r6, -0x28(r3)
    stw r6, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r6, -0x20(r3)
    stw r6, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r6, -0x18(r3)
    stw r6, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r6, -0x10(r3)
    stw r6, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r6, -0x8(r3)
    stw r6, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r6, -0x60(r3)
    stw r6, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r6, -0x58(r3)
    stw r6, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r6, -0x50(r3)
    stw r6, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r6, -0x48(r3)
    stw r6, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r6, -0x40(r3)
    stw r6, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r6, -0x38(r3)
    stw r6, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r6, -0x90(r3)
    stw r6, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r6, -0x88(r3)
    stw r6, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r6, -0x80(r3)
    stw r6, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r6, -0x78(r3)
    stw r6, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r6, -0x70(r3)
    stw r6, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r6, -0x68(r3)
    stw r6, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r6, -0xc0(r3)
    stw r6, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r6, -0xb8(r3)
    stw r6, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r6, -0xb0(r3)
    stw r6, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r6, -0xa8(r3)
    stw r6, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r6, -0xa0(r3)
    stw r6, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r6, -0x98(r3)
    stw r6, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r6, -0xf0(r3)
    stw r6, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r6, -0xe8(r3)
    stw r6, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r6, -0xe0(r3)
    stw r6, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r6, -0xd8(r3)
    stw r6, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r6, -0xd0(r3)
    stw r6, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r6, -0xc8(r3)
    stw r6, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r6, -0x120(r3)
    stw r6, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r6, -0x118(r3)
    stw r6, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r6, -0x110(r3)
    stw r6, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r6, -0x108(r3)
    stw r6, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r6, -0x100(r3)
    stw r6, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r6, -0xf8(r3)
    stw r6, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806C1AC0_00002288
lbl_fn_806C1AC0_00002594:
    lis r3, lbl_80860898@ha
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r6, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806C1AC0_00002618
lbl_fn_806C1AC0_000025B0:
    lwz r0, 0x34(r6)
    lwz r3, 0x30(r6)
    stw r3, 0x60(r6)
    stw r0, 0x64(r6)
    lwz r0, 0x3c(r6)
    lwz r3, 0x38(r6)
    stw r3, 0x68(r6)
    stw r0, 0x6c(r6)
    lwz r0, 0x44(r6)
    lwz r3, 0x40(r6)
    stw r3, 0x70(r6)
    stw r0, 0x74(r6)
    lwz r0, 0x4c(r6)
    lwz r3, 0x48(r6)
    stw r3, 0x78(r6)
    stw r0, 0x7c(r6)
    lwz r0, 0x54(r6)
    lwz r3, 0x50(r6)
    stw r3, 0x80(r6)
    stw r0, 0x84(r6)
    lwz r0, 0x5c(r6)
    lwz r3, 0x58(r6)
    stw r3, 0x88(r6)
    stw r0, 0x8c(r6)
    subi r6, r6, 0x30
    bdnz lbl_fn_806C1AC0_000025B0
lbl_fn_806C1AC0_00002618:
    lis r3, lbl_80860898@ha
    lwz r0, 0x664(r5)
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x660(r5)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x66c(r5)
    lwz r3, 0x668(r5)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x674(r5)
    lwz r3, 0x670(r5)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x67c(r5)
    lwz r3, 0x678(r5)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x684(r5)
    lwz r3, 0x680(r5)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x68c(r5)
    lwz r3, 0x688(r5)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
lbl_fn_806C1AC0_0000268C:
    lis r28, lbl_80860898@ha
    addi r7, r1, 0x8
    lwz r9, lbl_80860898@l(r28)
    li r3, 0x9
    li r8, 0x1
    lwz r5, 0x694(r9)
    lwz r4, 0x690(r9)
    stw r4, 0x660(r9)
    stw r5, 0x664(r9)
    lwz r0, 0x69c(r9)
    lwz r6, 0x698(r9)
    stw r6, 0x668(r9)
    stw r0, 0x66c(r9)
    lwz r0, 0x6a4(r9)
    lwz r6, 0x6a0(r9)
    stw r6, 0x670(r9)
    stw r0, 0x674(r9)
    lwz r0, 0x6ac(r9)
    lwz r6, 0x6a8(r9)
    stw r6, 0x678(r9)
    stw r0, 0x67c(r9)
    lwz r0, 0x6b4(r9)
    lwz r6, 0x6b0(r9)
    stw r6, 0x680(r9)
    stw r0, 0x684(r9)
    lwz r0, 0x6bc(r9)
    lwz r6, 0x6b8(r9)
    stw r6, 0x688(r9)
    stw r0, 0x68c(r9)
    lhz r6, 0x66c(r9)
    bl fn_806BC860
    lwz r6, lbl_80860898@l(r28)
    mr r26, r3
    li r4, 0x0
    li r5, 0x30
    addi r3, r6, 0x690
    bl memset
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1AC0_0000273C
    mr r3, r26
    bl fn_806C5EB0
    b lbl_fn_806C1AC0_00002744
lbl_fn_806C1AC0_0000273C:
    mr r3, r26
    bl fn_806C5C10
lbl_fn_806C1AC0_00002744:
    cmpwi r3, 0x0
    bne lbl_fn_806C1AC0_00002CD0
lbl_fn_806C1AC0_0000274C:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stb r0, 0x757(r3)
    b lbl_fn_806C1AC0_00002CA8
lbl_fn_806C1AC0_00002760:
    addi r4, r31, 0x1e50
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r29, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r29)
    li r28, 0x0
    stb r0, 0xd(r3)
    lwz r3, lbl_80860898@l(r29)
    stb r28, 0x721(r3)
    lwz r3, lbl_80860898@l(r29)
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806C1AC0_000027AC
    bl fn_806C2880
    lwz r3, lbl_80860898@l(r29)
    stb r28, 0x757(r3)
    b lbl_fn_806C1AC0_000027B0
lbl_fn_806C1AC0_000027AC:
    bl fn_806C2880
lbl_fn_806C1AC0_000027B0:
    lis r28, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r28)
    stw r0, 0x8c8(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    lwz r27, lbl_80860898@l(r28)
    lwz r3, 0x7b0(r27)
    cntlzw r0, r3
    srwi r26, r0, 5
    bl fn_806ACCF0
    lwz r12, 0x8a0(r27)
    mr r7, r3
    mr r5, r26
    lwz r8, 0x8a4(r27)
    li r3, 0x0
    li r4, 0x0
    li r6, 0x0
    mtctr r12
    bctrl
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C1AC0_00002A38
    lbz r6, 0x17(r3)
    addi r3, r1, 0x18
    addi r5, r31, 0x5c
    li r4, 0xc
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x18
    addi r5, r1, 0x4c
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C1AC0_00002864
    cmpwi r6, 0x0
    bne lbl_fn_806C1AC0_00002864
    li r6, 0x1
lbl_fn_806C1AC0_00002864:
    addi r3, r1, 0x18
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x18
    addi r5, r1, 0x4c
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x18
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x18
    addi r5, r1, 0x4c
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1AC0_000028D4
    li r4, 0x0
    b lbl_fn_806C1AC0_00002920
lbl_fn_806C1AC0_000028D4:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C1AC0_0000291C
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C1AC0_00002908
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C1AC0_00002908
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C1AC0_0000291C
lbl_fn_806C1AC0_00002908:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1AC0_0000291C
    li r4, 0x1
    b lbl_fn_806C1AC0_00002920
lbl_fn_806C1AC0_0000291C:
    li r4, 0x0
lbl_fn_806C1AC0_00002920:
    neg r0, r4
    addi r3, r1, 0x18
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x18
    addi r5, r1, 0x4c
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x4c
    li r3, -0x1
    li r5, 0x0
    bl fn_806ACE00
    bl fn_806C5C10
    cmpwi r3, 0x0
    bne lbl_fn_806C1AC0_00002CD0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r30, 0x744(r3)
    cmpwi r30, 0xd
    beq lbl_fn_806C1AC0_00002A24
    lis r29, lbl_80860890@ha
    addi r28, r29, lbl_80860890@l
    lwz r26, lbl_80860890@l(r29)
    lwz r27, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r27, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r28, 0x4dd3
    subfe r3, r26, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r30, 2
    lwz r8, 0x34(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C1AC0_00002A24:
    lis r3, lbl_80860898@ha
    li r0, 0xd
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806C1AC0_00002C4C
lbl_fn_806C1AC0_00002A38:
    lbz r6, 0x17(r3)
    addi r3, r1, 0xc
    addi r5, r31, 0x5c
    li r4, 0xc
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0xc
    addi r5, r1, 0x24
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C1AC0_00002A88
    cmpwi r6, 0x0
    bne lbl_fn_806C1AC0_00002A88
    li r6, 0x1
lbl_fn_806C1AC0_00002A88:
    addi r3, r1, 0xc
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0xc
    addi r5, r1, 0x24
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0xc
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0xc
    addi r5, r1, 0x24
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1AC0_00002AF8
    li r4, 0x0
    b lbl_fn_806C1AC0_00002B44
lbl_fn_806C1AC0_00002AF8:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C1AC0_00002B40
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C1AC0_00002B2C
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C1AC0_00002B2C
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C1AC0_00002B40
lbl_fn_806C1AC0_00002B2C:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C1AC0_00002B40
    li r4, 0x1
    b lbl_fn_806C1AC0_00002B44
lbl_fn_806C1AC0_00002B40:
    li r4, 0x0
lbl_fn_806C1AC0_00002B44:
    neg r0, r4
    addi r3, r1, 0xc
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0xc
    addi r5, r1, 0x24
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x24
    li r3, 0x2
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x1
    beq lbl_fn_806C1AC0_00002C3C
    lis r29, lbl_80860890@ha
    addi r30, r29, lbl_80860890@l
    lwz r26, lbl_80860890@l(r29)
    lwz r27, 0x4(r30)
    bl OSGetTime
    stw r4, 0x4(r30)
    lis r30, 0x1062
    lis r6, 0x8000
    subfc r4, r27, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r30, 0x4dd3
    subfe r3, r26, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r30, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C1AC0_00002C3C:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
lbl_fn_806C1AC0_00002C4C:
    lis r31, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r31)
    li r26, 0x0
    li r27, 0x0
    stw r0, 0x7b0(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r0, 0x752(r3)
    b lbl_fn_806C1AC0_00002C98
lbl_fn_806C1AC0_00002C70:
    cmpw r26, r0
    bge lbl_fn_806C1AC0_00002C84
    add r3, r3, r27
    addi r3, r3, 0x60
    b lbl_fn_806C1AC0_00002C88
lbl_fn_806C1AC0_00002C84:
    li r3, 0x0
lbl_fn_806C1AC0_00002C88:
    lbz r3, 0x16(r3)
    bl fn_806CE700
    addi r27, r27, 0x30
    addi r26, r26, 0x1
lbl_fn_806C1AC0_00002C98:
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x58(r3)
    cmpw r26, r0
    blt lbl_fn_806C1AC0_00002C70
lbl_fn_806C1AC0_00002CA8:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x704(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806C1AC0_00002CD0
    bl fn_806FFE10
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x0
    stw r0, 0x71c(r3)
    stw r0, 0x718(r3)
lbl_fn_806C1AC0_00002CD0:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
