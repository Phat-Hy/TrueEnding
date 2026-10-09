#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8067E23C(void);
extern void fn_80680CF8(void);
extern void fn_806820D4(void);
extern void fn_80682428(void);
extern void fn_806A420C(void);
extern void fn_806A4260(void);
extern void fn_806A426C(void);
extern void fn_806D58F0(void);
extern void fn_806D7AA0(void);
extern void fn_806D7AC0(void);
extern void fn_806D7DA0(void);
extern void fn_806D7F20(void);
extern void fn_806D7F30(void);
extern void fn_806D8F30(void);
extern void fn_806D9590(void);
extern void fn_806EFC70(void);
extern void fn_806EFE10(void);
extern void fn_806F0200(void);
extern void fn_806F0210(void);
extern void fn_806F0240(void);
extern void fn_806F0560(void);
extern void fn_806F2BE0(void);
extern void fn_806FC5D0(void);
extern void fn_806FD420(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807C5194[];
extern u8 lbl_8076B6D0[];
extern u8 lbl_807C4358[];
extern u8 lbl_807C5150[];
extern u8 lbl_807C5380[];
extern u8 lbl_807C5778[];
extern u8 lbl_807C577C[];
extern u8 lbl_807C5780[];
extern u8 lbl_807C5D00[];
extern u8 lbl_80860DD0[];
extern u8 lbl_80860DD8[];
extern u8 lbl_80861FC8[];
extern u8 lbl_80861FCC[];

/* Small data declarations */

/* Function declarations */
void pad_03_806F08A8_text(void);
void fn_806F08B0(void);
void fn_806F0A70(void);
void fn_806F0C10(void);
void fn_806F0EB0(void);
void fn_806F15B0(void);
void fn_806F1630(void);
void fn_806F1D80(void);
void fn_806F1DF0(void);
void fn_806F1E10(void);
void fn_806F1E90(void);
void fn_806F1F90(void);
void fn_806F2010(void);
void fn_806F2070(void);
void fn_806F21E0(void);
void fn_806F23C0(void);
void fn_806F2470(void);
void fn_806F25B0(void);
void fn_806F2600(void);
void fn_806F2630(void);
void fn_806F2750(void);
void fn_806F27E0(void);
void fn_806F2820(void);
void fn_806F2880(void);
void fn_806F2890(void);
void fn_806F28A0(void);
void fn_806F28B0(void);

asm void pad_03_806F08A8_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806F08B0(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_25
    cmpwi r6, 0x3
    mr r27, r7
    mr r25, r3
    mr r26, r4
    li r0, 0x0
    li r7, 0x0
    li r29, 0x0
    li r28, 0x0
    blt lbl_fn_806F08B0_000001B0
    lbz r8, 0x0(r5)
    addi r4, r5, 0x1
    subi r3, r6, 0x1
    cmpwi r8, 0x0
    beq lbl_fn_806F08B0_00000068
    cmplwi r8, 0xff
    beq lbl_fn_806F08B0_00000068
    mr r7, r4
    add r4, r4, r8
    subf r3, r8, r3
lbl_fn_806F08B0_00000068:
    cmpwi r3, 0x2
    blt lbl_fn_806F08B0_000001B0
    lbz r31, 0x0(r4)
    addi r4, r4, 0x1
    subi r3, r3, 0x1
    cmpwi r31, 0x0
    beq lbl_fn_806F08B0_00000098
    cmplwi r31, 0xff
    beq lbl_fn_806F08B0_00000098
    mr r29, r4
    add r4, r4, r31
    subf r3, r31, r3
lbl_fn_806F08B0_00000098:
    cmpwi r3, 0x1
    blt lbl_fn_806F08B0_000001B0
    lbz r30, 0x0(r4)
    addi r4, r4, 0x1
    subi r3, r3, 0x1
    cmpwi r30, 0x0
    beq lbl_fn_806F08B0_000000C8
    cmplwi r30, 0xff
    beq lbl_fn_806F08B0_000000C8
    mr r28, r4
    add r4, r4, r30
    subf r3, r30, r3
lbl_fn_806F08B0_000000C8:
    cmpwi r3, 0x0
    blt lbl_fn_806F08B0_000001B0
    ble lbl_fn_806F08B0_000000D8
    lbz r0, 0x0(r4)
lbl_fn_806F08B0_000000D8:
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_806F08B0_00000150
    li r0, 0x0
    stw r0, 0xc(r1)
    li r31, 0x5
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x11c(r1)
    b lbl_fn_806F08B0_00000134
lbl_fn_806F08B0_00000108:
    lwz r3, 0x0(r25)
    mr r4, r26
    lwz r5, 0x578(r26)
    mr r7, r27
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    stw r31, 0x578(r26)
    lwz r0, 0xc(r1)
    cmpwi r0, 0x7
    bgt lbl_fn_806F08B0_000001B0
lbl_fn_806F08B0_00000134:
    mr r3, r25
    mr r4, r26
    addi r5, r1, 0x8
    bl fn_806F0560
    cmpwi r3, 0x1
    beq lbl_fn_806F08B0_00000108
    b lbl_fn_806F08B0_000001B0
lbl_fn_806F08B0_00000150:
    mr r3, r25
    mr r4, r26
    mr r6, r8
    li r5, 0x0
    bl fn_806F0240
    mr r3, r25
    mr r4, r26
    mr r6, r31
    mr r7, r29
    li r5, 0x1
    bl fn_806F0240
    mr r3, r25
    mr r4, r26
    mr r6, r30
    mr r7, r28
    li r5, 0x2
    bl fn_806F0240
    lwz r3, 0x0(r25)
    mr r4, r26
    lwz r5, 0x578(r26)
    mr r7, r27
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
lbl_fn_806F08B0_000001B0:
    addi r11, r1, 0x140
    bl _restgpr_25
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_806F0A70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_8076B6D0@ha
    lwzu r6, lbl_8076B6D0@l(r7)
    stw r0, 0x24(r1)
    cmpwi r5, 0xa
    lhz r0, 0x4(r7)
    li r7, 0x1
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r6, 0xc(r1)
    sth r0, 0x10(r1)
    blt lbl_fn_806F0A70_00000290
    lbz r6, 0xc(r1)
    lbz r0, 0x0(r4)
    cmplw r6, r0
    beq lbl_fn_806F0A70_00000214
    li r7, 0x0
    b lbl_fn_806F0A70_00000294
lbl_fn_806F0A70_00000214:
    lbz r6, 0xd(r1)
    lbz r0, 0x1(r4)
    cmplw r6, r0
    beq lbl_fn_806F0A70_0000022C
    li r7, 0x0
    b lbl_fn_806F0A70_00000294
lbl_fn_806F0A70_0000022C:
    lbz r6, 0xe(r1)
    lbz r0, 0x2(r4)
    cmplw r6, r0
    beq lbl_fn_806F0A70_00000244
    li r7, 0x0
    b lbl_fn_806F0A70_00000294
lbl_fn_806F0A70_00000244:
    lbz r6, 0xf(r1)
    lbz r0, 0x3(r4)
    cmplw r6, r0
    beq lbl_fn_806F0A70_0000025C
    li r7, 0x0
    b lbl_fn_806F0A70_00000294
lbl_fn_806F0A70_0000025C:
    lbz r6, 0x10(r1)
    lbz r0, 0x4(r4)
    cmplw r6, r0
    beq lbl_fn_806F0A70_00000274
    li r7, 0x0
    b lbl_fn_806F0A70_00000294
lbl_fn_806F0A70_00000274:
    lbz r6, 0x11(r1)
    lbz r0, 0x5(r4)
    cmplw r6, r0
    beq lbl_fn_806F0A70_00000294
    li r7, 0x0
    b lbl_fn_806F0A70_00000294
    b lbl_fn_806F0A70_00000294
lbl_fn_806F0A70_00000290:
    li r7, 0x0
lbl_fn_806F0A70_00000294:
    cmpwi r7, 0x0
    beq lbl_fn_806F0A70_00000334
    addi r3, r1, 0x8
    li r5, 0x4
    addi r4, r4, 0x6
    bl memcpy
    lwz r3, 0x8(r1)
    bl fn_806A4260
    stw r3, 0x8(r1)
    lwz r0, 0xac(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F0A70_00000318
    lis r4, lbl_80860DD0@ha
    lwz r0, lbl_80860DD0@l(r4)
    cmpwi r0, 0x1
    beq lbl_fn_806F0A70_000002F0
    li r0, 0x1
    lis r3, lbl_80860DD8@ha
    stw r0, lbl_80860DD0@l(r4)
    addi r3, r3, lbl_80860DD8@l
    addi r4, r31, 0x4
    li r5, 0x40
    bl fn_806D9590
lbl_fn_806F0A70_000002F0:
    lis r6, fn_806F0200@ha
    lis r7, fn_806F0210@ha
    lwz r3, 0x0(r31)
    mr r8, r31
    lwz r4, 0x8(r1)
    addi r6, r6, fn_806F0200@l
    addi r7, r7, fn_806F0210@l
    li r5, 0x1
    bl fn_806FC5D0
    b lbl_fn_806F0A70_00000354
lbl_fn_806F0A70_00000318:
    lwz r12, 0xa0(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806F0A70_00000354
    lwz r4, 0x114(r31)
    mtctr r12
    bctrl
    b lbl_fn_806F0A70_00000354
lbl_fn_806F0A70_00000334:
    lwz r12, 0xa4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806F0A70_00000354
    mr r3, r4
    mr r4, r5
    lwz r5, 0x114(r31)
    mtctr r12
    bctrl
lbl_fn_806F0A70_00000354:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F0C10(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r26, 0x0
    bl fn_806D8F30
    lbz r0, 0x118(r29)
    mr r27, r3
    li r6, -0x1
    li r7, 0x0
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_fn_806F0C10_00000418
    lis r4, lbl_807C5150@ha
    addi r3, r1, 0x1c
    addi r4, r4, lbl_807C5150@l
    li r5, 0x0
    crclr 6
    bl sprintf
    addi r3, r1, 0x1c
    bl strlen
    lwz r0, 0x578(r30)
    addi r27, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r27, r3
    ble lbl_fn_806F0C10_000003E0
    mr r27, r3
lbl_fn_806F0C10_000003E0:
    cmpwi r27, 0x0
    ble lbl_fn_806F0C10_00000410
    mr r5, r27
    add r3, r30, r0
    addi r4, r1, 0x1c
    bl memcpy
    lwz r3, 0x578(r30)
    li r0, 0x0
    add r3, r3, r27
    stw r3, 0x578(r30)
    add r3, r3, r30
    stb r0, -0x1(r3)
lbl_fn_806F0C10_00000410:
    li r3, 0x1
    b lbl_fn_806F0C10_000005E4
lbl_fn_806F0C10_00000418:
    li r0, 0x32
    mr r4, r29
    lwz r5, 0x4(r31)
    mtctr r0
lbl_fn_806F0C10_00000428:
    cmpwi r6, -0x1
    bne lbl_fn_806F0C10_00000440
    lwz r0, 0x120(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806F0C10_00000440
    mr r6, r26
lbl_fn_806F0C10_00000440:
    lwz r0, 0x120(r4)
    cmplw r5, r0
    bne lbl_fn_806F0C10_00000460
    lhz r3, 0x2(r31)
    lhz r0, 0x11e(r4)
    cmplw r3, r0
    bne lbl_fn_806F0C10_00000460
    addi r7, r7, 0x1
lbl_fn_806F0C10_00000460:
    cmpwi r6, -0x1
    addi r26, r26, 0x1
    bne lbl_fn_806F0C10_0000047C
    lwz r0, 0x130(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806F0C10_0000047C
    mr r6, r26
lbl_fn_806F0C10_0000047C:
    lwz r0, 0x130(r4)
    cmplw r5, r0
    bne lbl_fn_806F0C10_0000049C
    lhz r3, 0x2(r31)
    lhz r0, 0x12e(r4)
    cmplw r3, r0
    bne lbl_fn_806F0C10_0000049C
    addi r7, r7, 0x1
lbl_fn_806F0C10_0000049C:
    cmpwi r6, -0x1
    addi r26, r26, 0x1
    bne lbl_fn_806F0C10_000004B8
    lwz r0, 0x140(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806F0C10_000004B8
    mr r6, r26
lbl_fn_806F0C10_000004B8:
    lwz r0, 0x140(r4)
    cmplw r5, r0
    bne lbl_fn_806F0C10_000004D8
    lhz r3, 0x2(r31)
    lhz r0, 0x13e(r4)
    cmplw r3, r0
    bne lbl_fn_806F0C10_000004D8
    addi r7, r7, 0x1
lbl_fn_806F0C10_000004D8:
    cmpwi r6, -0x1
    addi r26, r26, 0x1
    bne lbl_fn_806F0C10_000004F4
    lwz r0, 0x150(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806F0C10_000004F4
    mr r6, r26
lbl_fn_806F0C10_000004F4:
    lwz r0, 0x150(r4)
    cmplw r5, r0
    bne lbl_fn_806F0C10_00000514
    lhz r3, 0x2(r31)
    lhz r0, 0x14e(r4)
    cmplw r3, r0
    bne lbl_fn_806F0C10_00000514
    addi r7, r7, 0x1
lbl_fn_806F0C10_00000514:
    addi r4, r4, 0x40
    addi r26, r26, 0x1
    bdnz lbl_fn_806F0C10_00000428
    cmpwi r7, 0x5
    ble lbl_fn_806F0C10_00000530
    li r3, 0x0
    b lbl_fn_806F0C10_000005E4
lbl_fn_806F0C10_00000530:
    cmpwi r6, -0x1
    bne lbl_fn_806F0C10_00000540
    li r3, 0x0
    b lbl_fn_806F0C10_000005E4
lbl_fn_806F0C10_00000540:
    slwi r26, r6, 4
    lwz r0, 0x4(r31)
    add r28, r29, r26
    lwz r3, 0x0(r31)
    stw r3, 0x11c(r28)
    stw r0, 0x120(r28)
    bl fn_80680CF8
    mr r31, r3
    bl fn_80680CF8
    slwi r0, r3, 16
    or r3, r0, r31
    bl fn_806A426C
    stw r3, 0x124(r28)
    lis r4, lbl_807C5150@ha
    addi r3, r1, 0x8
    stw r27, 0x128(r28)
    addi r4, r4, lbl_807C5150@l
    lwz r5, 0x124(r28)
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    lwz r0, 0x578(r30)
    addi r27, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r27, r3
    ble lbl_fn_806F0C10_000005B0
    mr r27, r3
lbl_fn_806F0C10_000005B0:
    cmpwi r27, 0x0
    ble lbl_fn_806F0C10_000005E0
    mr r5, r27
    add r3, r30, r0
    addi r4, r1, 0x8
    bl memcpy
    lwz r3, 0x578(r30)
    li r0, 0x0
    add r3, r3, r27
    stw r3, 0x578(r30)
    add r3, r3, r30
    stb r0, -0x1(r3)
lbl_fn_806F0C10_000005E0:
    li r3, 0x1
lbl_fn_806F0C10_000005E4:
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806F0EB0(void)
{
    nofralloc
    stwu r1, -0x600(r1)
    mflr r0
    stw r0, 0x604(r1)
    addi r11, r1, 0x600
    bl _savegpr_24
    cmpwi r3, 0x0
    lis r31, lbl_807C4358@ha
    li r0, 0x0
    stw r0, 0x5d4(r1)
    mr r26, r3
    mr r24, r4
    mr r27, r5
    mr r28, r6
    addi r31, r31, lbl_807C4358@l
    bne lbl_fn_806F0EB0_00000648
    lwz r26, 0xd9c(r31)
lbl_fn_806F0EB0_00000648:
    lbz r29, 0x0(r4)
    cmpwi r29, 0x3b
    bne lbl_fn_806F0EB0_00000678
    lwz r12, 0xdc(r26)
    cmpwi r12, 0x0
    beq lbl_fn_806F0EB0_00000CE4
    mr r3, r24
    mr r4, r27
    mr r5, r28
    mtctr r12
    bctrl
    b lbl_fn_806F0EB0_00000CE4
lbl_fn_806F0EB0_00000678:
    cmpwi r5, 0x6
    blt lbl_fn_806F0EB0_000006B0
    lis r4, lbl_807C5D00@ha
    mr r3, r24
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806F0EB0_000006B0
    mr r3, r24
    mr r4, r27
    mr r5, r28
    bl fn_806FD420
    b lbl_fn_806F0EB0_00000CE4
lbl_fn_806F0EB0_000006B0:
    cmpwi r27, 0x7
    blt lbl_fn_806F0EB0_00000CE4
    cmplwi r29, 0xfe
    bne lbl_fn_806F0EB0_00000CE4
    lbz r0, 0x1(r24)
    cmplwi r0, 0xfd
    beq lbl_fn_806F0EB0_000006D0
    b lbl_fn_806F0EB0_00000CE4
lbl_fn_806F0EB0_000006D0:
    lwz r0, 0xc0(r26)
    cmpwi r0, 0x0
    ble lbl_fn_806F0EB0_000006E4
    li r0, 0x0
    stw r0, 0xc0(r26)
lbl_fn_806F0EB0_000006E4:
    lbz r25, 0x2(r24)
    addi r30, r24, 0x3
    stb r25, 0x5c(r1)
    mr r4, r30
    addi r29, r24, 0x7
    addi r3, r1, 0x5d
    li r5, 0x4
    subi r27, r27, 0x7
    bl memcpy
    extsb r0, r25
    li r5, 0x5
    cmplwi r0, 0xa
    stw r5, 0x5d4(r1)
    bgt lbl_fn_806F0EB0_00000CE4
    lis r3, jumptable_807C5194@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807C5194@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r26
    mr r5, r28
    addi r4, r1, 0x5c
    bl fn_806F0C10
    cmpwi r3, 0x0
    bne lbl_fn_806F0EB0_00000CC8
    b lbl_fn_806F0EB0_00000CE4
    lbz r0, 0x118(r26)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x80
    bne lbl_fn_806F0EB0_000007E8
    cmpwi r27, 0x4
    blt lbl_fn_806F0EB0_00000CE4
    lwz r3, 0x0(r29)
    bl fn_806A4260
    li r0, 0xc8
    mr r6, r26
    li r5, 0x0
    mtctr r0
    addi r29, r29, 0x4
    subi r27, r27, 0x4
lbl_fn_806F0EB0_00000788:
    lwz r4, 0x4(r28)
    lwz r0, 0x120(r6)
    cmplw r4, r0
    bne lbl_fn_806F0EB0_000007D0
    lhz r4, 0x2(r28)
    lhz r0, 0x11e(r6)
    cmplw r4, r0
    bne lbl_fn_806F0EB0_000007D0
    lwz r0, 0x124(r6)
    cmplw r3, r0
    bne lbl_fn_806F0EB0_000007D0
    slwi r3, r5, 4
    li r0, 0x0
    add r3, r26, r3
    li r4, 0x1
    stw r0, 0x120(r3)
    sth r0, 0x11e(r3)
    b lbl_fn_806F0EB0_000007E0
lbl_fn_806F0EB0_000007D0:
    addi r6, r6, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_806F0EB0_00000788
    li r4, 0x0
lbl_fn_806F0EB0_000007E0:
    cmpwi r4, 0x0
    beq lbl_fn_806F0EB0_00000CE4
lbl_fn_806F0EB0_000007E8:
    mr r3, r26
    mr r5, r29
    mr r6, r27
    mr r7, r28
    addi r4, r1, 0x5c
    bl fn_806F08B0
    b lbl_fn_806F0EB0_00000CE4
    li r0, 0x0
    stw r0, 0x14(r1)
    lbz r3, 0x0(r30)
    lbz r0, 0x84(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    li r0, 0x1
    stw r0, 0x14(r1)
    lbz r3, 0x1(r30)
    lbz r0, 0x85(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    li r0, 0x2
    stw r0, 0x14(r1)
    lbz r3, 0x2(r30)
    lbz r0, 0x86(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    li r0, 0x3
    stw r0, 0x14(r1)
    lbz r3, 0x3(r30)
    lbz r0, 0x87(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    cmpwi r27, 0xf
    li r0, 0x4
    stw r0, 0x14(r1)
    blt lbl_fn_806F0EB0_00000934
    add r30, r29, r27
    addi r4, r31, 0xe28
    subi r3, r30, 0xf
    addi r5, r1, 0x10
    crclr 6
    bl fn_806820D4
    lwz r0, 0x10(r1)
    stb r0, 0x118(r26)
    lwz r0, 0xa8(r26)
    cmpwi r0, 0x0
    beq lbl_fn_806F0EB0_00000934
    subi r3, r30, 0xd
    addi r4, r31, 0xe30
    addi r5, r1, 0x8
    addi r6, r1, 0xc
    crclr 6
    bl fn_806820D4
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    clrlwi r30, r0, 16
    bl fn_806A426C
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    beq lbl_fn_806F0EB0_00000934
    cmpwi r30, 0x0
    beq lbl_fn_806F0EB0_00000934
    lwz r0, 0x10c(r26)
    cmplw r0, r3
    bne lbl_fn_806F0EB0_00000914
    lhz r0, 0x110(r26)
    cmplw r0, r30
    beq lbl_fn_806F0EB0_00000934
lbl_fn_806F0EB0_00000914:
    stw r3, 0x10c(r26)
    mr r4, r30
    sth r30, 0x110(r26)
    lwz r12, 0xa8(r26)
    lwz r3, 0x8(r1)
    lwz r5, 0x114(r26)
    mtctr r12
    bctrl
lbl_fn_806F0EB0_00000934:
    subi r0, r27, 0x1
    cmplwi r0, 0x40
    bgt lbl_fn_806F0EB0_00000CC8
    add r3, r27, r29
    lbz r0, -0x1(r3)
    extsb. r0, r0
    bne lbl_fn_806F0EB0_00000CC8
    mr r4, r29
    addi r3, r1, 0x18
    li r5, 0x41
    bl fn_806D9590
    addi r3, r26, 0x44
    bl strlen
    mr r4, r3
    addi r3, r26, 0x44
    addi r5, r1, 0x18
    subi r6, r27, 0x1
    bl fn_806EFE10
    lwz r0, 0x5d4(r1)
    addi r5, r1, 0x5c
    addi r3, r1, 0x18
    subi r4, r27, 0x1
    add r5, r5, r0
    bl fn_806EFC70
    lwz r0, 0x5d4(r1)
    addi r3, r1, 0x5c
    add r3, r3, r0
    bl strlen
    lwz r0, 0x5d4(r1)
    add r3, r3, r0
    addi r0, r3, 0x1
    stw r0, 0x5d4(r1)
    b lbl_fn_806F0EB0_00000CC8
    cmpwi r27, 0x20
    ble lbl_fn_806F0EB0_000009C4
    li r27, 0x20
lbl_fn_806F0EB0_000009C4:
    lwz r0, 0x5d4(r1)
    addi r3, r1, 0x5c
    li r4, 0x5
    stb r4, 0x5c(r1)
    mr r4, r29
    mr r5, r27
    add r3, r3, r0
    bl memcpy
    lwz r0, 0x5d4(r1)
    add r0, r0, r27
    stw r0, 0x5d4(r1)
    b lbl_fn_806F0EB0_00000CC8
    lwz r0, 0xc0(r26)
    cmpwi r0, -0x1
    beq lbl_fn_806F0EB0_00000CE4
    li r0, 0x0
    stw r0, 0x14(r1)
    lbz r3, 0x0(r30)
    lbz r0, 0x84(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    li r0, 0x1
    stw r0, 0x14(r1)
    lbz r3, 0x1(r30)
    lbz r0, 0x85(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    li r0, 0x2
    stw r0, 0x14(r1)
    lbz r3, 0x2(r30)
    lbz r0, 0x86(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    li r0, 0x3
    stw r0, 0x14(r1)
    lbz r3, 0x3(r30)
    lbz r0, 0x87(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    cmpwi r27, 0x2
    li r0, 0x4
    stw r0, 0x14(r1)
    blt lbl_fn_806F0EB0_00000CE4
    li r0, -0x1
    stw r0, 0xc0(r26)
    addi r4, r29, 0x1
    lbz r3, 0x0(r29)
    lwz r12, 0x9c(r26)
    extsb r3, r3
    lwz r5, 0x114(r26)
    mtctr r12
    bctrl
    b lbl_fn_806F0EB0_00000CE4
    li r0, 0x0
    stw r0, 0x14(r1)
    lbz r3, 0x0(r30)
    lbz r0, 0x84(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    li r0, 0x1
    stw r0, 0x14(r1)
    lbz r3, 0x1(r30)
    lbz r0, 0x85(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    li r0, 0x2
    stw r0, 0x14(r1)
    lbz r3, 0x2(r30)
    lbz r0, 0x86(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    li r0, 0x3
    stw r0, 0x14(r1)
    lbz r3, 0x3(r30)
    lbz r0, 0x87(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_806F0EB0_00000CE4
    cmpwi r27, 0x4
    li r0, 0x4
    stw r0, 0x14(r1)
    blt lbl_fn_806F0EB0_00000CE4
    addi r3, r1, 0x5c
    li r0, 0x7
    add r3, r3, r5
    stb r0, 0x5c(r1)
    mr r4, r29
    li r5, 0x4
    bl memcpy
    lwz r6, 0x5d4(r1)
    mr r4, r29
    addi r3, r1, 0x14
    li r5, 0x4
    addi r0, r6, 0x4
    stw r0, 0x5d4(r1)
    bl memcpy
    lwz r6, 0x14(r1)
    lwz r0, 0xe0(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000B98
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000B98:
    lwz r0, 0xe4(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000BAC
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000BAC:
    lwz r0, 0xe8(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000BC0
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000BC0:
    lwz r0, 0xec(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000BD4
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000BD4:
    lwz r0, 0xf0(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000BE8
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000BE8:
    lwz r0, 0xf4(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000BFC
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000BFC:
    lwz r0, 0xf8(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000C10
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000C10:
    lwz r0, 0xfc(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000C24
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000C24:
    lwz r0, 0x100(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000C38
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000C38:
    lwz r0, 0x104(r26)
    cmpw r6, r0
    bne lbl_fn_806F0EB0_00000C4C
    li r5, 0x1
    b lbl_fn_806F0EB0_00000C88
lbl_fn_806F0EB0_00000C4C:
    lwz r4, 0x108(r26)
    lis r3, 0x6666
    addi r0, r3, 0x6667
    li r5, 0x0
    addi r4, r4, 0x1
    mulhw r0, r0, r4
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xa
    subf r0, r0, r4
    stw r0, 0x108(r26)
    slwi r0, r0, 2
    add r3, r26, r0
    stw r6, 0xe0(r3)
lbl_fn_806F0EB0_00000C88:
    cmpwi r5, 0x0
    bne lbl_fn_806F0EB0_00000CC8
    mr r3, r26
    addi r4, r29, 0x4
    subi r5, r27, 0x4
    bl fn_806F0A70
    b lbl_fn_806F0EB0_00000CC8
    b lbl_fn_806F0EB0_00000CE4
    lwz r12, 0xb0(r26)
    cmpwi r12, 0x0
    beq lbl_fn_806F0EB0_00000CE4
    lwz r3, 0x114(r26)
    mtctr r12
    bctrl
    b lbl_fn_806F0EB0_00000CE4
    b lbl_fn_806F0EB0_00000CE4
lbl_fn_806F0EB0_00000CC8:
    lwz r3, 0x0(r26)
    mr r7, r28
    lwz r5, 0x5d4(r1)
    addi r4, r1, 0x5c
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
lbl_fn_806F0EB0_00000CE4:
    addi r11, r1, 0x600
    bl _restgpr_24
    lwz r0, 0x604(r1)
    mtlr r0
    addi r1, r1, 0x600
    blr
}

asm void fn_806F15B0(void)
{
    nofralloc
    stwu r1, -0x590(r1)
    mflr r0
    li r5, 0x4
    stw r0, 0x594(r1)
    li r0, 0x8
    stw r31, 0x58c(r1)
    mr r31, r3
    li r3, 0x0
    stw r3, 0x580(r1)
    addi r3, r1, 0x9
    addi r4, r31, 0x84
    stb r0, 0x8(r1)
    bl memcpy
    li r0, 0x5
    stw r0, 0x580(r1)
    addi r4, r1, 0x8
    addi r7, r31, 0xd4
    lwz r3, 0x0(r31)
    li r5, 0x5
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    bl fn_806D8F30
    stw r3, 0xb8(r31)
    lwz r31, 0x58c(r1)
    lwz r0, 0x594(r1)
    mtlr r0
    addi r1, r1, 0x590
    blr
}

asm void fn_806F1630(void)
{
    nofralloc
    stwu r1, -0xb90(r1)
    mflr r0
    stw r0, 0xb94(r1)
    addi r11, r1, 0xb90
    bl _savegpr_22
    mr r26, r3
    lis r30, lbl_807C4358@ha
    li r31, 0x0
    li r0, 0x3
    mr r27, r4
    stw r31, 0xb64(r1)
    addi r30, r30, lbl_807C4358@l
    addi r3, r1, 0x5ed
    stb r0, 0x5ec(r1)
    addi r4, r26, 0x84
    li r5, 0x4
    bl memcpy
    li r0, 0x5
    lis r29, lbl_80861FCC@ha
    stw r0, 0xb64(r1)
    addi r29, r29, lbl_80861FCC@l
    addi r24, r1, 0x5ec
    li r28, 0x0
    lis r25, lbl_80861FC8@ha
    b lbl_fn_806F1630_00000EB8
lbl_fn_806F1630_00000DEC:
    mr r5, r28
    addi r3, r1, 0x5c
    addi r4, r30, 0xe68
    crclr 6
    bl sprintf
    addi r3, r1, 0x5c
    bl strlen
    lwz r0, 0xb64(r1)
    addi r23, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r23, r3
    ble lbl_fn_806F1630_00000E20
    mr r23, r3
lbl_fn_806F1630_00000E20:
    cmpwi r23, 0x0
    ble lbl_fn_806F1630_00000E50
    addi r3, r1, 0x5ec
    mr r5, r23
    add r3, r3, r0
    addi r4, r1, 0x5c
    bl memcpy
    lwz r0, 0xb64(r1)
    add r0, r0, r23
    stw r0, 0xb64(r1)
    add r3, r24, r0
    stb r31, -0x1(r3)
lbl_fn_806F1630_00000E50:
    lwz r0, 0x0(r29)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806A420C
    mr r23, r3
    bl strlen
    lwz r0, 0xb64(r1)
    addi r22, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r22, r3
    ble lbl_fn_806F1630_00000E80
    mr r22, r3
lbl_fn_806F1630_00000E80:
    cmpwi r22, 0x0
    ble lbl_fn_806F1630_00000EB0
    addi r3, r1, 0x5ec
    mr r4, r23
    mr r5, r22
    add r3, r3, r0
    bl memcpy
    lwz r0, 0xb64(r1)
    add r0, r0, r22
    stw r0, 0xb64(r1)
    add r3, r24, r0
    stb r31, -0x1(r3)
lbl_fn_806F1630_00000EB0:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_806F1630_00000EB8:
    lwz r0, lbl_80861FC8@l(r25)
    cmpw r28, r0
    blt lbl_fn_806F1630_00000DEC
    addi r22, r30, 0xe74
    mr r3, r22
    bl strlen
    lwz r0, 0xb64(r1)
    addi r23, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r23, r3
    ble lbl_fn_806F1630_00000EE8
    mr r23, r3
lbl_fn_806F1630_00000EE8:
    cmpwi r23, 0x0
    ble lbl_fn_806F1630_00000F20
    addi r3, r1, 0x5ec
    mr r4, r22
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r23
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_00000F20:
    lwz r5, 0xc8(r26)
    addi r3, r1, 0x48
    addi r4, r30, 0xdf8
    crclr 6
    bl sprintf
    addi r3, r1, 0x48
    bl strlen
    lwz r0, 0xb64(r1)
    addi r22, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r22, r3
    ble lbl_fn_806F1630_00000F54
    mr r22, r3
lbl_fn_806F1630_00000F54:
    cmpwi r22, 0x0
    ble lbl_fn_806F1630_00000F8C
    addi r3, r1, 0x5ec
    mr r5, r22
    add r3, r3, r0
    addi r4, r1, 0x48
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r22
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_00000F8C:
    addi r22, r30, 0xe80
    mr r3, r22
    bl strlen
    lwz r0, 0xb64(r1)
    addi r23, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r23, r3
    ble lbl_fn_806F1630_00000FB0
    mr r23, r3
lbl_fn_806F1630_00000FB0:
    cmpwi r23, 0x0
    ble lbl_fn_806F1630_00000FE8
    addi r3, r1, 0x5ec
    mr r4, r22
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r23
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_00000FE8:
    lwz r0, 0xd0(r26)
    addi r23, r30, 0xe8c
    cmpwi r0, 0x0
    beq lbl_fn_806F1630_00000FFC
    addi r23, r30, 0xe88
lbl_fn_806F1630_00000FFC:
    mr r3, r23
    bl strlen
    lwz r0, 0xb64(r1)
    addi r22, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r22, r3
    ble lbl_fn_806F1630_0000101C
    mr r22, r3
lbl_fn_806F1630_0000101C:
    cmpwi r22, 0x0
    ble lbl_fn_806F1630_00001054
    addi r3, r1, 0x5ec
    mr r4, r23
    mr r5, r22
    add r3, r3, r0
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r22
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_00001054:
    cmpwi r27, 0x0
    beq lbl_fn_806F1630_00001124
    addi r22, r30, 0xe90
    mr r3, r22
    bl strlen
    lwz r0, 0xb64(r1)
    addi r23, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r23, r3
    ble lbl_fn_806F1630_00001080
    mr r23, r3
lbl_fn_806F1630_00001080:
    cmpwi r23, 0x0
    ble lbl_fn_806F1630_000010B8
    addi r3, r1, 0x5ec
    mr r4, r22
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r23
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_000010B8:
    mr r5, r27
    addi r3, r1, 0x34
    addi r4, r30, 0xdf8
    crclr 6
    bl sprintf
    addi r3, r1, 0x34
    bl strlen
    lwz r0, 0xb64(r1)
    addi r22, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r22, r3
    ble lbl_fn_806F1630_000010EC
    mr r22, r3
lbl_fn_806F1630_000010EC:
    cmpwi r22, 0x0
    ble lbl_fn_806F1630_00001124
    addi r3, r1, 0x5ec
    mr r5, r22
    add r3, r3, r0
    addi r4, r1, 0x34
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r22
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_00001124:
    addi r22, r30, 0xea0
    mr r3, r22
    bl strlen
    lwz r0, 0xb64(r1)
    addi r23, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r23, r3
    ble lbl_fn_806F1630_00001148
    mr r23, r3
lbl_fn_806F1630_00001148:
    cmpwi r23, 0x0
    ble lbl_fn_806F1630_00001180
    addi r3, r1, 0x5ec
    mr r4, r22
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r23
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_00001180:
    addi r3, r26, 0x4
    bl strlen
    lwz r0, 0xb64(r1)
    addi r22, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r22, r3
    ble lbl_fn_806F1630_000011A0
    mr r22, r3
lbl_fn_806F1630_000011A0:
    cmpwi r22, 0x0
    ble lbl_fn_806F1630_000011D8
    addi r3, r1, 0x5ec
    mr r5, r22
    add r3, r3, r0
    addi r4, r26, 0x4
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r22
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_000011D8:
    lwz r0, 0xa8(r26)
    cmpwi r0, 0x0
    beq lbl_fn_806F1630_00001374
    addi r22, r30, 0xeac
    mr r3, r22
    bl strlen
    lwz r0, 0xb64(r1)
    addi r23, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r23, r3
    ble lbl_fn_806F1630_00001208
    mr r23, r3
lbl_fn_806F1630_00001208:
    cmpwi r23, 0x0
    ble lbl_fn_806F1630_00001240
    addi r3, r1, 0x5ec
    mr r4, r22
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r23
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_00001240:
    lwz r5, 0x10c(r26)
    addi r3, r1, 0x20
    addi r4, r30, 0xdf8
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl strlen
    lwz r0, 0xb64(r1)
    addi r22, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r22, r3
    ble lbl_fn_806F1630_00001274
    mr r22, r3
lbl_fn_806F1630_00001274:
    cmpwi r22, 0x0
    ble lbl_fn_806F1630_000012AC
    addi r3, r1, 0x5ec
    mr r5, r22
    add r3, r3, r0
    addi r4, r1, 0x20
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r22
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_000012AC:
    addi r22, r30, 0xeb8
    mr r3, r22
    bl strlen
    lwz r0, 0xb64(r1)
    addi r23, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r23, r3
    ble lbl_fn_806F1630_000012D0
    mr r23, r3
lbl_fn_806F1630_000012D0:
    cmpwi r23, 0x0
    ble lbl_fn_806F1630_00001308
    addi r3, r1, 0x5ec
    mr r4, r22
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r23
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_00001308:
    lhz r5, 0x110(r26)
    addi r3, r1, 0xc
    addi r4, r30, 0xdf8
    crclr 6
    bl sprintf
    addi r3, r1, 0xc
    bl strlen
    lwz r0, 0xb64(r1)
    addi r22, r3, 0x1
    subfic r3, r0, 0x578
    cmpw r22, r3
    ble lbl_fn_806F1630_0000133C
    mr r22, r3
lbl_fn_806F1630_0000133C:
    cmpwi r22, 0x0
    ble lbl_fn_806F1630_00001374
    addi r3, r1, 0x5ec
    mr r5, r22
    add r3, r3, r0
    addi r4, r1, 0xc
    bl memcpy
    lwz r3, 0xb64(r1)
    addi r0, r1, 0x5ec
    li r4, 0x0
    add r3, r3, r22
    stw r3, 0xb64(r1)
    add r3, r3, r0
    stb r4, -0x1(r3)
lbl_fn_806F1630_00001374:
    cmpwi r27, 0x2
    beq lbl_fn_806F1630_00001458
    lwz r5, 0xb64(r1)
    addi r3, r1, 0x70
    addi r4, r1, 0x5ec
    bl memcpy
    lwz r0, 0xb64(r1)
    mr r3, r26
    stw r0, 0x5e8(r1)
    addi r4, r1, 0x70
    li r5, 0x0
    li r6, 0xff
    li r7, 0x0
    bl fn_806F0240
    mr r3, r26
    addi r4, r1, 0x70
    li r5, 0x1
    li r6, 0xff
    li r7, 0x0
    bl fn_806F0240
    mr r3, r26
    addi r4, r1, 0x70
    li r5, 0x2
    li r6, 0xff
    li r7, 0x0
    bl fn_806F0240
    lwz r0, 0x5e8(r1)
    subfic r0, r0, 0x578
    cmpwi r0, 0x1
    bge lbl_fn_806F1630_0000143C
    lwz r0, 0xb64(r1)
    mr r3, r26
    stw r0, 0x5e8(r1)
    addi r4, r1, 0x70
    li r5, 0x0
    li r6, 0xff
    li r7, 0x0
    bl fn_806F0240
    mr r3, r26
    addi r4, r1, 0x70
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_806F0240
    mr r3, r26
    addi r4, r1, 0x70
    li r5, 0x2
    li r6, 0x0
    li r7, 0x0
    bl fn_806F0240
lbl_fn_806F1630_0000143C:
    lwz r5, 0x5e8(r1)
    addi r3, r1, 0x5ec
    addi r4, r1, 0x70
    bl memcpy
    lwz r0, 0x5e8(r1)
    stw r0, 0xb64(r1)
    b lbl_fn_806F1630_0000147C
lbl_fn_806F1630_00001458:
    lwz r4, 0xb64(r1)
    subfic r0, r4, 0x578
    cmpwi r0, 0x1
    blt lbl_fn_806F1630_0000147C
    addi r3, r1, 0x5ec
    li r0, 0x0
    stbx r0, r3, r4
    addi r0, r4, 0x1
    stw r0, 0xb64(r1)
lbl_fn_806F1630_0000147C:
    lwz r3, 0x0(r26)
    addi r4, r1, 0x5ec
    lwz r5, 0xb64(r1)
    addi r7, r26, 0xd4
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    bl fn_806D8F30
    cmpwi r27, 0x0
    stw r3, 0xb4(r26)
    stw r3, 0xb8(r26)
    beq lbl_fn_806F1630_000014B4
    li r0, 0x0
    stw r0, 0xbc(r26)
lbl_fn_806F1630_000014B4:
    addi r11, r1, 0xb90
    bl _restgpr_22
    lwz r0, 0xb94(r1)
    mtlr r0
    addi r1, r1, 0xb90
    blr
}

asm void fn_806F1D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807C5380@ha
    addi r31, r31, lbl_807C5380@l
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x7c(r31)
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806F1D80_0000151C
    lwz r4, 0x80(r31)
    mr r3, r30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806F1D80_00001524
lbl_fn_806F1D80_0000151C:
    li r3, 0x1
    b lbl_fn_806F1D80_00001528
lbl_fn_806F1D80_00001524:
    li r3, 0x0
lbl_fn_806F1D80_00001528:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F1DF0(void)
{
    nofralloc
    subi r0, r3, 0x32
    cmplwi r0, 0xcc
    bgtlr
    lis r5, lbl_807C5380@ha
    slwi r0, r3, 2
    addi r5, r5, lbl_807C5380@l
    stwx r4, r5, r0
    blr
}

asm void fn_806F1E10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_806F1E10_00001590
    li r3, 0x0
    b lbl_fn_806F1E10_000015D0
lbl_fn_806F1E10_00001590:
    cmpwi r4, 0x0
    bgt lbl_fn_806F1E10_000015A0
    li r3, 0x0
    b lbl_fn_806F1E10_000015D0
lbl_fn_806F1E10_000015A0:
    lwz r0, 0x8(r3)
    lwz r3, 0x4(r3)
    add r31, r0, r4
    mr r4, r31
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806F1E10_000015C4
    li r3, 0x0
    b lbl_fn_806F1E10_000015D0
lbl_fn_806F1E10_000015C4:
    stw r3, 0x4(r30)
    li r3, 0x1
    stw r31, 0x8(r30)
lbl_fn_806F1E10_000015D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F1E90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    bne lbl_fn_806F1E90_00001614
    li r3, 0x0
    b lbl_fn_806F1E90_000016CC
lbl_fn_806F1E90_00001614:
    cmpwi cr6, r4, 0x0
    bne cr6, lbl_fn_806F1E90_00001624
    li r3, 0x0
    b lbl_fn_806F1E90_000016CC
lbl_fn_806F1E90_00001624:
    cmpwi cr1, r5, 0x0
    bgt cr1, lbl_fn_806F1E90_00001634
    li r3, 0x0
    b lbl_fn_806F1E90_000016CC
lbl_fn_806F1E90_00001634:
    cmpwi r6, 0x0
    bgt lbl_fn_806F1E90_00001644
    li r3, 0x0
    b lbl_fn_806F1E90_000016CC
lbl_fn_806F1E90_00001644:
    li r0, 0x0
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    stw r0, 0x10(r4)
    stw r6, 0x14(r4)
    stw r0, 0x18(r4)
    stw r0, 0x1c(r4)
    stw r0, 0x20(r4)
    bne cr6, lbl_fn_806F1E90_00001678
    li r0, 0x0
    b lbl_fn_806F1E90_000016AC
lbl_fn_806F1E90_00001678:
    bgt cr1, lbl_fn_806F1E90_00001684
    li r0, 0x0
    b lbl_fn_806F1E90_000016AC
lbl_fn_806F1E90_00001684:
    mr r4, r31
    li r3, 0x0
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806F1E90_000016A0
    li r0, 0x0
    b lbl_fn_806F1E90_000016AC
lbl_fn_806F1E90_000016A0:
    stw r3, 0x4(r30)
    li r0, 0x1
    stw r31, 0x8(r30)
lbl_fn_806F1E90_000016AC:
    cmpwi r0, 0x0
    bne lbl_fn_806F1E90_000016BC
    li r3, 0x0
    b lbl_fn_806F1E90_000016CC
lbl_fn_806F1E90_000016BC:
    lwz r4, 0x4(r30)
    li r0, 0x0
    li r3, 0x1
    stb r0, 0x0(r4)
lbl_fn_806F1E90_000016CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F1F90(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_806F1F90_000016F8
    li r3, 0x0
    blr
lbl_fn_806F1F90_000016F8:
    cmpwi r4, 0x0
    bne lbl_fn_806F1F90_00001708
    li r3, 0x0
    blr
lbl_fn_806F1F90_00001708:
    cmpwi r5, 0x0
    bne lbl_fn_806F1F90_00001718
    li r3, 0x0
    blr
lbl_fn_806F1F90_00001718:
    cmpwi r6, 0x0
    bgt lbl_fn_806F1F90_00001728
    li r3, 0x0
    blr
lbl_fn_806F1F90_00001728:
    li r0, 0x1
    stw r3, 0x0(r4)
    li r7, 0x0
    li r3, 0x1
    stw r5, 0x4(r4)
    stw r6, 0x8(r4)
    stw r0, 0x18(r4)
    stw r0, 0x1c(r4)
    stw r7, 0xc(r4)
    stw r7, 0x10(r4)
    stw r7, 0x14(r4)
    stw r7, 0x20(r4)
    stb r7, 0x0(r5)
    blr
}

asm void fn_806F2010(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_806F2010_000017B4
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806F2010_000017B4
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F2010_000017A4
    mr r3, r4
    bl fn_806D7AC0
lbl_fn_806F2010_000017A4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x24
    bl memset
lbl_fn_806F2010_000017B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F2070(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r31, r3
    mr r27, r4
    mr r28, r5
    bne lbl_fn_806F2070_000017F8
    li r3, 0x0
    b lbl_fn_806F2070_00001920
lbl_fn_806F2070_000017F8:
    cmpwi r4, 0x0
    bne lbl_fn_806F2070_00001808
    li r3, 0x0
    b lbl_fn_806F2070_00001920
lbl_fn_806F2070_00001808:
    cmpwi cr1, r5, 0x0
    bge cr1, lbl_fn_806F2070_00001818
    li r3, 0x0
    b lbl_fn_806F2070_00001920
lbl_fn_806F2070_00001818:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F2070_0000182C
    li r3, 0x0
    b lbl_fn_806F2070_00001920
lbl_fn_806F2070_0000182C:
    bne cr1, lbl_fn_806F2070_0000183C
    mr r3, r27
    bl strlen
    mr r28, r3
lbl_fn_806F2070_0000183C:
    lwz r0, 0xc(r31)
    add r29, r0, r28
    b lbl_fn_806F2070_000018E8
lbl_fn_806F2070_00001848:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F2070_00001874
    lwz r4, 0x0(r31)
    li r5, 0x1
    li r0, 0x2
    li r3, 0x0
    stw r5, 0x124(r4)
    lwz r4, 0x0(r31)
    stw r0, 0x40(r4)
    b lbl_fn_806F2070_00001920
lbl_fn_806F2070_00001874:
    cmpwi r31, 0x0
    lwz r0, 0x14(r31)
    bne lbl_fn_806F2070_00001888
    li r0, 0x0
    b lbl_fn_806F2070_000018C4
lbl_fn_806F2070_00001888:
    cmpwi r0, 0x0
    bgt lbl_fn_806F2070_00001898
    li r0, 0x0
    b lbl_fn_806F2070_000018C4
lbl_fn_806F2070_00001898:
    add r30, r3, r0
    lwz r3, 0x4(r31)
    mr r4, r30
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806F2070_000018B8
    li r0, 0x0
    b lbl_fn_806F2070_000018C4
lbl_fn_806F2070_000018B8:
    stw r3, 0x4(r31)
    li r0, 0x1
    stw r30, 0x8(r31)
lbl_fn_806F2070_000018C4:
    cmpwi r0, 0x0
    bne lbl_fn_806F2070_000018E8
    lwz r4, 0x0(r31)
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x124(r4)
    lwz r4, 0x0(r31)
    stw r0, 0x40(r4)
    b lbl_fn_806F2070_00001920
lbl_fn_806F2070_000018E8:
    lwz r3, 0x8(r31)
    cmpw r29, r3
    bge lbl_fn_806F2070_00001848
    lwz r3, 0x4(r31)
    mr r4, r27
    lwz r0, 0xc(r31)
    mr r5, r28
    add r3, r3, r0
    bl memcpy
    stw r29, 0xc(r31)
    li r0, 0x0
    lwz r4, 0x4(r31)
    li r3, 0x1
    stbx r0, r4, r29
lbl_fn_806F2070_00001920:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F21E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r3, 0x0
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r31, 0x0
    bne lbl_fn_806F21E0_00001974
    li r3, 0x0
    b lbl_fn_806F21E0_00001AF8
lbl_fn_806F21E0_00001974:
    cmpwi r4, 0x0
    bne lbl_fn_806F21E0_00001984
    li r3, 0x0
    b lbl_fn_806F21E0_00001AF8
lbl_fn_806F21E0_00001984:
    cmpwi cr1, r5, 0x0
    bge cr1, lbl_fn_806F21E0_00001994
    li r3, 0x0
    b lbl_fn_806F21E0_00001AF8
lbl_fn_806F21E0_00001994:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F21E0_000019A8
    li r3, 0x0
    b lbl_fn_806F21E0_00001AF8
lbl_fn_806F21E0_000019A8:
    lwz r3, 0x0(r3)
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F21E0_000019C4
    lwz r0, 0x1a4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F21E0_000019D8
lbl_fn_806F21E0_000019C4:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_806F2070
    b lbl_fn_806F21E0_00001AF8
lbl_fn_806F21E0_000019D8:
    bne cr1, lbl_fn_806F21E0_000019E8
    mr r3, r29
    bl strlen
    mr r30, r3
lbl_fn_806F21E0_000019E8:
    cmpwi r30, 0x0
    bne lbl_fn_806F21E0_000019F8
    li r3, 0x1
    b lbl_fn_806F21E0_00001AF8
lbl_fn_806F21E0_000019F8:
    lwz r3, 0xc(r28)
    lwz r0, 0x8(r28)
    subf r0, r3, r0
    stw r0, 0x8(r1)
lbl_fn_806F21E0_00001A08:
    cmpwi r30, 0x3f01
    li r27, 0x3f01
    bge lbl_fn_806F21E0_00001A18
    mr r27, r30
lbl_fn_806F21E0_00001A18:
    lwz r3, 0x0(r28)
    mr r6, r30
    lwz r7, 0x4(r28)
    add r5, r29, r31
    lwz r0, 0xc(r28)
    addi r4, r3, 0x194
    lwz r12, 0x1c0(r3)
    addi r8, r1, 0x8
    add r7, r7, r0
    mtctr r12
    bctrl
    cmpwi r3, 0x2
    bne lbl_fn_806F21E0_00001AC4
    cmpwi r28, 0x0
    lwz r4, 0x14(r28)
    bne lbl_fn_806F21E0_00001A60
    li r0, 0x0
    b lbl_fn_806F21E0_00001AA0
lbl_fn_806F21E0_00001A60:
    cmpwi r4, 0x0
    bgt lbl_fn_806F21E0_00001A70
    li r0, 0x0
    b lbl_fn_806F21E0_00001AA0
lbl_fn_806F21E0_00001A70:
    lwz r0, 0x8(r28)
    lwz r3, 0x4(r28)
    add r27, r0, r4
    mr r4, r27
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806F21E0_00001A94
    li r0, 0x0
    b lbl_fn_806F21E0_00001AA0
lbl_fn_806F21E0_00001A94:
    stw r3, 0x4(r28)
    li r0, 0x1
    stw r27, 0x8(r28)
lbl_fn_806F21E0_00001AA0:
    cmpwi r0, 0x0
    bne lbl_fn_806F21E0_00001AB0
    li r3, 0x0
    b lbl_fn_806F21E0_00001AF8
lbl_fn_806F21E0_00001AB0:
    lwz r3, 0xc(r28)
    lwz r0, 0x8(r28)
    subf r0, r3, r0
    stw r0, 0x8(r1)
    b lbl_fn_806F21E0_00001AEC
lbl_fn_806F21E0_00001AC4:
    cmpwi r3, 0x1
    bne lbl_fn_806F21E0_00001AE4
    lwz r3, 0x8(r1)
    add r31, r31, r27
    lwz r0, 0x8(r28)
    subf r0, r3, r0
    stw r0, 0xc(r28)
    b lbl_fn_806F21E0_00001AEC
lbl_fn_806F21E0_00001AE4:
    li r3, 0x0
    b lbl_fn_806F21E0_00001AF8
lbl_fn_806F21E0_00001AEC:
    cmpw r31, r30
    blt lbl_fn_806F21E0_00001A08
    li r3, 0x1
lbl_fn_806F21E0_00001AF8:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F23C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    li r5, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_806F2070
    cmpwi r3, 0x0
    bne lbl_fn_806F23C0_00001B4C
    li r3, 0x0
    b lbl_fn_806F23C0_00001BB0
lbl_fn_806F23C0_00001B4C:
    lis r4, lbl_807C5778@ha
    mr r3, r30
    addi r4, r4, lbl_807C5778@l
    li r5, 0x2
    bl fn_806F2070
    cmpwi r3, 0x0
    bne lbl_fn_806F23C0_00001B70
    li r3, 0x0
    b lbl_fn_806F23C0_00001BB0
lbl_fn_806F23C0_00001B70:
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    bl fn_806F2070
    cmpwi r3, 0x0
    bne lbl_fn_806F23C0_00001B90
    li r3, 0x0
    b lbl_fn_806F23C0_00001BB0
lbl_fn_806F23C0_00001B90:
    lis r4, lbl_807C577C@ha
    mr r3, r30
    addi r4, r4, lbl_807C577C@l
    li r5, 0x2
    bl fn_806F2070
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_806F23C0_00001BB0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F2470(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi cr1, r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    bne cr1, lbl_fn_806F2470_00001BF8
    li r3, 0x0
    b lbl_fn_806F2470_00001CE4
lbl_fn_806F2470_00001BF8:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F2470_00001C0C
    li r3, 0x0
    b lbl_fn_806F2470_00001CE4
lbl_fn_806F2470_00001C0C:
    lwz r4, 0xc(r3)
    lwz r5, 0x8(r3)
    addi r0, r4, 0x1
    cmpw r0, r5
    blt lbl_fn_806F2470_00001CBC
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F2470_00001C4C
    lwz r4, 0x0(r3)
    li r5, 0x1
    li r0, 0x2
    stw r5, 0x124(r4)
    lwz r4, 0x0(r3)
    li r3, 0x0
    stw r0, 0x40(r4)
    b lbl_fn_806F2470_00001CE4
lbl_fn_806F2470_00001C4C:
    lwz r0, 0x14(r3)
    bne cr1, lbl_fn_806F2470_00001C5C
    li r0, 0x0
    b lbl_fn_806F2470_00001C98
lbl_fn_806F2470_00001C5C:
    cmpwi r0, 0x0
    bgt lbl_fn_806F2470_00001C6C
    li r0, 0x0
    b lbl_fn_806F2470_00001C98
lbl_fn_806F2470_00001C6C:
    add r30, r5, r0
    lwz r3, 0x4(r3)
    mr r4, r30
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806F2470_00001C8C
    li r0, 0x0
    b lbl_fn_806F2470_00001C98
lbl_fn_806F2470_00001C8C:
    stw r3, 0x4(r31)
    li r0, 0x1
    stw r30, 0x8(r31)
lbl_fn_806F2470_00001C98:
    cmpwi r0, 0x0
    bne lbl_fn_806F2470_00001CBC
    lwz r4, 0x0(r31)
    li r0, 0x1
    li r3, 0x0
    stw r0, 0x124(r4)
    lwz r4, 0x0(r31)
    stw r0, 0x40(r4)
    b lbl_fn_806F2470_00001CE4
lbl_fn_806F2470_00001CBC:
    lwz r5, 0x4(r31)
    li r0, 0x0
    lwz r4, 0xc(r31)
    li r3, 0x1
    stbx r29, r5, r4
    lwz r5, 0xc(r31)
    lwz r4, 0x4(r31)
    addi r5, r5, 0x1
    stw r5, 0xc(r31)
    stbx r0, r4, r5
lbl_fn_806F2470_00001CE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F25B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_807C5780@ha
    mr r5, r4
    stw r0, 0x24(r1)
    addi r4, r6, lbl_807C5780@l
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    crclr 6
    bl sprintf
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_806F2070
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F2600(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    li r4, 0x0
    stw r4, 0xc(r3)
    cmpwi r0, 0x0
    stw r4, 0x10(r3)
    bnelr
    lwz r3, 0x4(r3)
    stb r4, 0x0(r3)
    blr
}

asm void fn_806F2630(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
lbl_fn_806F2630_00001D9C:
    lwz r0, 0x198(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806F2630_00001DB4
    lwz r0, 0x1a8(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806F2630_00001E38
lbl_fn_806F2630_00001DB4:
    lwz r3, 0x50(r31)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    li r4, 0x0
    bl fn_806D7F30
    cmpwi r3, -0x1
    beq lbl_fn_806F2630_00001DE4
    cmpwi r3, 0x1
    bne lbl_fn_806F2630_00001E1C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806F2630_00001E1C
lbl_fn_806F2630_00001DE4:
    cmpwi r3, -0x1
    li r3, 0x1
    li r0, 0x5
    stw r3, 0x124(r31)
    stw r0, 0x40(r31)
    bne lbl_fn_806F2630_00001E0C
    lwz r3, 0x50(r31)
    bl fn_806D7F20
    stw r3, 0x54(r31)
    b lbl_fn_806F2630_00001E14
lbl_fn_806F2630_00001E0C:
    li r0, 0x0
    stw r0, 0x54(r31)
lbl_fn_806F2630_00001E14:
    li r3, 0x0
    b lbl_fn_806F2630_00001E94
lbl_fn_806F2630_00001E1C:
    cmpwi r3, 0x1
    blt lbl_fn_806F2630_00001E30
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806F2630_00001E38
lbl_fn_806F2630_00001E30:
    li r3, 0x1
    b lbl_fn_806F2630_00001E94
lbl_fn_806F2630_00001E38:
    lwz r5, 0x68(r31)
    mr r3, r31
    lwz r4, 0x5c(r31)
    lwz r0, 0x64(r31)
    add r4, r4, r5
    subf r5, r5, r0
    bl fn_806F2BE0
    cmpwi r3, -0x1
    beq lbl_fn_806F2630_00001E68
    cmpwi r3, -0x2
    beq lbl_fn_806F2630_00001E70
    b lbl_fn_806F2630_00001E78
lbl_fn_806F2630_00001E68:
    li r3, 0x0
    b lbl_fn_806F2630_00001E94
lbl_fn_806F2630_00001E70:
    li r3, 0x1
    b lbl_fn_806F2630_00001E94
lbl_fn_806F2630_00001E78:
    lwz r4, 0x68(r31)
    lwz r0, 0x64(r31)
    add r3, r4, r3
    stw r3, 0x68(r31)
    cmpw r3, r0
    blt lbl_fn_806F2630_00001D9C
    li r3, 0x1
lbl_fn_806F2630_00001E94:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F2750(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r12, 0x48(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806F2750_00001F18
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F2750_00001EE0
    lwz r31, 0xec(r3)
    b lbl_fn_806F2750_00001EE4
lbl_fn_806F2750_00001EE0:
    li r31, 0x0
lbl_fn_806F2750_00001EE4:
    mr r5, r31
    lwz r3, 0x4(r3)
    lwz r4, 0x40(r30)
    lwz r6, 0x128(r30)
    lwz r7, 0x4c(r30)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    beq lbl_fn_806F2750_00001F18
    cmpwi r3, 0x0
    bne lbl_fn_806F2750_00001F18
    li r0, 0x1
    stw r0, 0x104(r30)
lbl_fn_806F2750_00001F18:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F27E0(void)
{
    nofralloc
    lwz r12, 0x44(r3)
    mr r9, r3
    mr r6, r5
    cmpwi r12, 0x0
    beqlr
    mr r5, r4
    lwz r3, 0x4(r3)
    lwz r4, 0x10(r9)
    lwz r7, 0x128(r9)
    lwz r8, 0x12c(r9)
    lwz r9, 0x4c(r9)
    mtctr r12
    bctr
    blr
}

asm void fn_806F2820(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x178(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F2820_00001FC4
    lwz r3, 0x168(r3)
    bl fn_806D58F0
    lwz r12, 0x178(r31)
    mr r7, r3
    lwz r3, 0x4(r31)
    lwz r4, 0x170(r31)
    lwz r5, 0x174(r31)
    lwz r6, 0x16c(r31)
    lwz r8, 0x4c(r31)
    mtctr r12
    bctrl
lbl_fn_806F2820_00001FC4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806F2880(void)
{
    nofralloc
    blr
}

asm void fn_806F2890(void)
{
    nofralloc
    blr
}

asm void fn_806F28A0(void)
{
    nofralloc
    blr
}

asm void fn_806F28B0(void)
{
    nofralloc
    blr
}
