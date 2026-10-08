#include "revolution/types.h"
#include "revolution/os.h"

/* External functions (non-OS) */
extern void OSRegisterVersion(const char*);
extern void __VISetRGBModeImm(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void fn_805EA980(void);
extern void fn_805F6CF0(void);
extern void fn_805FF4D0(void);
extern void fn_805FF4E0(void);
extern void fn_80605300(void);
extern void fn_80605FF0(void);
extern void fn_80606090(void);
extern void fn_806060D0(void);
extern void fn_80606130(void);
extern void fn_806061A0(void);
extern void fn_80606210(void);
extern void fn_80607100(void);
extern void fn_80607140(void);
extern void fn_806071A0(void);
extern void fn_80607290(void);
extern void fn_80624890(void);
extern void fn_80624A50(void);
extern void fn_80696324(void);

/* External data symbols (> 8 bytes) */
extern void* jumptable_807ABCF8[];
extern void* jumptable_807ABD1C[];
extern void* jumptable_807ABDA8[];
extern u8 lbl_807ABA58[];
extern u8 lbl_807ABBFC[];
extern u8 lbl_807ABCE8[];
extern u8 lbl_807D0FD0[];
extern u8 lbl_807D14A0[];
extern u8 lbl_807D1518[];
extern u8 lbl_807D1590[];

/* External small data symbols (<= 8 bytes, SDA21) */
extern u32 CurrTvMode_8087FE50;
extern u32 lbl_8087E808;
extern u32 lbl_8087E810;
extern u32 lbl_8087E814;
extern u32 lbl_8087E818;
extern u32 lbl_8087E81C;
extern u32 lbl_8087FDE0;
extern u32 lbl_8087FDE4;
extern u32 lbl_8087FDE8;
extern u32 lbl_8087FDEC;
extern u32 lbl_8087FDF0;
extern u32 lbl_8087FDF4;
extern u32 lbl_8087FDF8;
extern u32 lbl_8087FDFC;
extern u32 lbl_8087FE00;
extern u32 lbl_8087FE04;
extern u32 lbl_8087FE08;
extern u16 lbl_8087FE0C;
extern u16 lbl_8087FE0E;
extern u8 lbl_8087FE10[8];
extern u32 lbl_8087FE18;
extern u32 lbl_8087FE1C;
extern u8 lbl_8087FE20[8];
extern u32 lbl_8087FE28;
extern u32 lbl_8087FE2C;
extern u32 lbl_8087FE34;
extern u32 lbl_8087FE3C;
extern u32 lbl_8087FE40;
extern u32 lbl_8087FE48;
extern u32 lbl_8087FE4C;
extern u32 lbl_8087FE54;
extern u32 lbl_8087FE58;
extern u32 lbl_8087FE5C;
extern u8 lbl_8087FE60[8];
extern u8 lbl_8087FE68[8];
extern u32 lbl_8087FE70;
extern u32 lbl_8087FE74;
extern u32 lbl_8087FE78;
extern u32 lbl_8087FE7C;
extern u32 lbl_8087FE80;
extern u32 lbl_8087FE84;
extern u32 lbl_8087FE88;
extern u32 lbl_8087FE8C;
extern u32 lbl_8087FE98;

/* Function declarations */
void fn_80602ED0(void);
void fn_806036E0(void);
void fn_80603730(void);
void fn_80603780(void);
void fn_806038A0(void);
void fn_80603AA0(void);
void fn_80603FF0(void);
void fn_80604050(void);
void fn_80604300(void);
void fn_806043E0(void);

asm void fn_80602ED0(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2f0
    bl _savegpr_26
    lis r5, 0xcc00
    lis r30, lbl_807D14A0@ha
    lhz r3, 0x2030(r5)
    mr r28, r4
    addi r30, r30, lbl_807D14A0@l
    li r6, 0x0
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_fn_80602ED0_40
    clrlwi r0, r3, 17
    sth r0, 0x2030(r5)
    ori r6, r6, 0x1
lbl_fn_80602ED0_40:
    lis r4, 0xcc00
    lhz r3, 0x2034(r4)
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_fn_80602ED0_5c
    clrlwi r0, r3, 17
    sth r0, 0x2034(r4)
    ori r6, r6, 0x2
lbl_fn_80602ED0_5c:
    lis r4, 0xcc00
    lhz r3, 0x2038(r4)
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_fn_80602ED0_78
    clrlwi r0, r3, 17
    sth r0, 0x2038(r4)
    ori r6, r6, 0x4
lbl_fn_80602ED0_78:
    lis r4, 0xcc00
    lhz r3, 0x203c(r4)
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_fn_80602ED0_94
    clrlwi r0, r3, 17
    sth r0, 0x203c(r4)
    ori r6, r6, 0x8
lbl_fn_80602ED0_94:
    rlwinm. r0, r6, 0, 29, 29
    lis r3, 0xcc00
    lhz r0, 0x203c(r3)
    bne lbl_fn_80602ED0_ac
    rlwinm. r0, r6, 0, 28, 28
    beq lbl_fn_80602ED0_128
lbl_fn_80602ED0_ac:
    addi r3, r1, 0x10
    bl OSClearContext
    addi r3, r1, 0x10
    bl OSSetCurrentContext
    lwz r0, lbl_8087FE08
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_114
    lis r5, 0xcc00
    lhz r0, 0x202c(r5)
    clrlwi r4, r0, 21
    nop
lbl_fn_80602ED0_d8:
    lhz r3, 0x202e(r5)
    mr r6, r4
    lhz r0, 0x202c(r5)
    clrlwi r3, r3, 21
    clrlwi r4, r0, 21
    cmplw r6, r4
    bne lbl_fn_80602ED0_d8
    addi r5, r1, 0xa
    addi r6, r1, 0x8
    bl fn_80605300
    lwz r12, lbl_8087FE08
    lha r3, 0xa(r1)
    lha r4, 0x8(r1)
    mtctr r12
    bctrl
lbl_fn_80602ED0_114:
    addi r3, r1, 0x10
    bl OSClearContext
    mr r3, r28
    bl OSSetCurrentContext
    b lbl_fn_80602ED0_7f4
lbl_fn_80602ED0_128:
    lwz r4, lbl_8087FE8C
    addi r3, r1, 0x10
    addi r0, r4, 0x1
    stw r0, lbl_8087FE8C
    bl OSClearContext
    addi r3, r1, 0x10
    bl OSSetCurrentContext
    lwz r12, lbl_8087FE60
    cmpwi r12, 0x0
    beq lbl_fn_80602ED0_15c
    lwz r3, lbl_8087FE8C
    mtctr r12
    bctrl
lbl_fn_80602ED0_15c:
    lwz r0, lbl_8087FDE8
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_1bc
    lis r3, 0xcc00
    lhz r0, 0x202c(r3)
    clrlwi r4, r0, 21
    nop
lbl_fn_80602ED0_178:
    lhz r0, 0x202e(r3)
    mr r5, r4
    lhz r0, 0x202c(r3)
    clrlwi r4, r0, 21
    cmplw r5, r4
    bne lbl_fn_80602ED0_178
    cmplwi r4, 0x1
    beq lbl_fn_80602ED0_1bc
    lwz r3, lbl_8087FE54
    lhz r0, 0x18(r3)
    srwi r3, r0, 1
    addi r0, r3, 0x1
    cmplw r4, r0
    beq lbl_fn_80602ED0_1bc
    lwz r3, lbl_8087FDE4
    addi r0, r3, 0x1
    stw r0, lbl_8087FDE4
lbl_fn_80602ED0_1bc:
    lwz r0, lbl_8087FE88
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_2f8
    lwz r0, lbl_8087FE20
    cmplwi r0, 0x1
    bne lbl_fn_80602ED0_230
    lis r4, 0xcc00
    lhz r0, 0x202c(r4)
    clrlwi r7, r0, 21
lbl_fn_80602ED0_1e0:
    lhz r3, 0x202e(r4)
    mr r6, r7
    lhz r0, 0x202c(r4)
    clrlwi r5, r3, 21
    clrlwi r7, r0, 21
    cmplw r6, r7
    bne lbl_fn_80602ED0_1e0
    lwz r6, lbl_8087FE54
    subi r4, r5, 0x1
    subi r3, r7, 0x1
    lhz r0, 0x1a(r6)
    slwi r5, r3, 1
    lhz r3, 0x18(r6)
    divwu r0, r4, r0
    add r0, r5, r0
    xor r0, r3, r0
    cntlzw r0, r0
    slw r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_80602ED0_2e0
lbl_fn_80602ED0_230:
    addi r26, r30, 0x0
    li r31, -0x1
    lis r27, 0xcc00
    b lbl_fn_80602ED0_2a4
lbl_fn_80602ED0_240:
    lwz r0, lbl_8087FE28
    lwz r3, lbl_8087FE2C
    cntlzw r4, r0
    cmpwi r4, 0x20
    and r0, r3, r31
    bge lbl_fn_80602ED0_25c
    b lbl_fn_80602ED0_264
lbl_fn_80602ED0_25c:
    cntlzw r3, r0
    addi r4, r3, 0x20
lbl_fn_80602ED0_264:
    slwi r0, r4, 1
    subfic r5, r4, 0x3f
    add r3, r27, r0
    lhzx r0, r26, r0
    sth r0, 0x2000(r3)
    li r4, 0x1
    li r3, 0x0
    bl fn_80696324
    lwz r0, lbl_8087FE28
    nor r5, r3, r3
    lwz r3, lbl_8087FE2C
    nor r4, r4, r4
    and r0, r0, r5
    and r3, r3, r4
    stw r3, lbl_8087FE2C
    stw r0, lbl_8087FE28
lbl_fn_80602ED0_2a4:
    lwz r0, lbl_8087FE28
    lwz r3, lbl_8087FE2C
    or. r0, r3, r0
    bne lbl_fn_80602ED0_240
    addi r3, r30, 0xf0
    lwz r0, lbl_8087FE4C
    lwz r4, 0x54(r3)
    li r5, 0x0
    lwz r3, 0x28(r3)
    li r6, 0x1
    stw r5, lbl_8087FE20
    stw r4, lbl_8087FE54
    stw r3, CurrTvMode_8087FE50
    stw r0, lbl_8087FE48
    b lbl_fn_80602ED0_2e4
lbl_fn_80602ED0_2e0:
    li r6, 0x0
lbl_fn_80602ED0_2e4:
    cmpwi r6, 0x0
    beq lbl_fn_80602ED0_2f8
    li r0, 0x0
    stw r0, lbl_8087FE88
    bl fn_805EA980
lbl_fn_80602ED0_2f8:
    bl OSDisableInterrupts
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    clrlwi r26, r0, 30
    bl OSRestoreInterrupts
    lwz r0, lbl_8087E810
    clrlwi r26, r26, 31
    cmplw r26, r0
    beq lbl_fn_80602ED0_324
    mr r3, r26
    bl fn_80605FF0
lbl_fn_80602ED0_324:
    stw r26, lbl_8087E810
    bl OSDisableInterrupts
    lwz r5, CurrTvMode_8087FE50
    cmplwi r5, 0x8
    bgt lbl_fn_80602ED0_364
    lis r4, jumptable_807ABCF8@ha
    slwi r0, r5, 2
    addi r4, r4, jumptable_807ABCF8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r29, 0x0
    b lbl_fn_80602ED0_364
    li r29, 0x1
    b lbl_fn_80602ED0_364
    mr r29, r5
lbl_fn_80602ED0_364:
    bl OSRestoreInterrupts
    lwz r0, lbl_8087E814
    cmplw r29, r0
    beq lbl_fn_80602ED0_43c
    cmplwi r29, 0x5
    bne lbl_fn_80602ED0_388
    li r3, 0x1
    bl fn_80606090
    b lbl_fn_80602ED0_390
lbl_fn_80602ED0_388:
    li r3, 0x0
    bl fn_80606090
lbl_fn_80602ED0_390:
    cmplwi r29, 0x1
    bne lbl_fn_80602ED0_3e4
    lwz r0, lbl_8087FE78
    cmpwi r0, 0x1
    beq lbl_fn_80602ED0_3b0
    cmpwi r0, 0x2
    beq lbl_fn_80602ED0_3bc
    b lbl_fn_80602ED0_3cc
lbl_fn_80602ED0_3b0:
    li r0, 0x7530
    stw r0, lbl_8087FDF4
    b lbl_fn_80602ED0_3d4
lbl_fn_80602ED0_3bc:
    lis r3, 0x1
    subi r0, r3, 0x5038
    stw r0, lbl_8087FDF4
    b lbl_fn_80602ED0_3d4
lbl_fn_80602ED0_3cc:
    li r0, 0x3a98
    stw r0, lbl_8087FDF4
lbl_fn_80602ED0_3d4:
    lis r3, 0x1
    addi r0, r3, 0x5f90
    stw r0, lbl_8087FDF8
    b lbl_fn_80602ED0_430
lbl_fn_80602ED0_3e4:
    lwz r0, lbl_8087FE78
    cmpwi r0, 0x1
    beq lbl_fn_80602ED0_3fc
    cmpwi r0, 0x2
    beq lbl_fn_80602ED0_40c
    b lbl_fn_80602ED0_41c
lbl_fn_80602ED0_3fc:
    lis r3, 0x1
    subi r0, r3, 0x7360
    stw r0, lbl_8087FDF4
    b lbl_fn_80602ED0_424
lbl_fn_80602ED0_40c:
    lis r3, 0x1
    subi r0, r3, 0x2d10
    stw r0, lbl_8087FDF4
    b lbl_fn_80602ED0_424
lbl_fn_80602ED0_41c:
    li r0, 0x4650
    stw r0, lbl_8087FDF4
lbl_fn_80602ED0_424:
    lis r3, 0x2
    subi r0, r3, 0x5a20
    stw r0, lbl_8087FDF8
lbl_fn_80602ED0_430:
    li r0, 0x0
    stw r0, lbl_8087FDFC
    stw r0, lbl_8087FE00
lbl_fn_80602ED0_43c:
    lwz r0, lbl_8087FE84
    stw r29, lbl_8087E814
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_520
    li r29, 0x1
    b lbl_fn_80602ED0_50c
lbl_fn_80602ED0_454:
    lwz r0, lbl_8087FE98
    cntlzw r0, r0
    subfic r0, r0, 0x1f
    slw r26, r29, r0
    cmpwi r26, 0x10
    beq lbl_fn_80602ED0_4e4
    bge lbl_fn_80602ED0_4a0
    cmpwi r26, 0x4
    beq lbl_fn_80602ED0_4d4
    bge lbl_fn_80602ED0_494
    cmpwi r26, 0x2
    beq lbl_fn_80602ED0_4cc
    bge lbl_fn_80602ED0_500
    cmpwi r26, 0x1
    bge lbl_fn_80602ED0_4c4
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_494:
    cmpwi r26, 0x8
    beq lbl_fn_80602ED0_4dc
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4a0:
    cmpwi r26, 0x40
    beq lbl_fn_80602ED0_4f4
    bge lbl_fn_80602ED0_4b8
    cmpwi r26, 0x20
    beq lbl_fn_80602ED0_4ec
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4b8:
    cmpwi r26, 0x80
    beq lbl_fn_80602ED0_4fc
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4c4:
    bl fn_806060D0
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4cc:
    bl fn_80606130
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4d4:
    bl fn_806061A0
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4dc:
    bl fn_80606210
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4e4:
    bl fn_80607100
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4ec:
    bl fn_80607140
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4f4:
    bl fn_806071A0
    b lbl_fn_80602ED0_500
lbl_fn_80602ED0_4fc:
    bl __VISetRGBModeImm
lbl_fn_80602ED0_500:
    lwz r0, lbl_8087FE98
    andc r0, r0, r26
    stw r0, lbl_8087FE98
lbl_fn_80602ED0_50c:
    lwz r0, lbl_8087FE98
    cmpwi r0, 0x0
    bne lbl_fn_80602ED0_454
    li r0, 0x0
    stw r0, lbl_8087FE84
lbl_fn_80602ED0_520:
    lwz r0, lbl_8087FE5C
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_544
    addi r3, r1, 0x10
    bl OSClearContext
    lwz r12, lbl_8087FE5C
    lwz r3, lbl_8087FE8C
    mtctr r12
    bctrl
lbl_fn_80602ED0_544:
    la r3, lbl_8087FE68
    bl OSWakeupThread
    addi r3, r1, 0x10
    bl OSClearContext
    mr r3, r28
    bl OSSetCurrentContext
    lwz r0, lbl_8087FDEC
    cmpwi r0, 0x1
    bne lbl_fn_80602ED0_58c
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_805F6CF0
    cmpwi r3, 0x1
    bne lbl_fn_80602ED0_58c
    li r0, 0x0
    stw r0, lbl_8087FDEC
    stw r0, lbl_8087FDFC
lbl_fn_80602ED0_58c:
    li r0, 0xa
    addi r3, r30, 0x148
    mtctr r0
lbl_fn_80602ED0_598:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80602ED0_5b0
    li r0, 0x0
    stw r0, 0x148(r30)
    b lbl_fn_80602ED0_5b8
lbl_fn_80602ED0_5b0:
    addi r3, r3, 0x4
    bdnz lbl_fn_80602ED0_598
lbl_fn_80602ED0_5b8:
    lwz r0, lbl_8087FE74
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_630
    lwz r0, lbl_8087FE70
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_630
    lwz r0, 0x148(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_630
    lwz r0, lbl_8087FE80
    cmpwi r0, 0x1
    bne lbl_fn_80602ED0_604
    lwz r3, lbl_8087FDFC
    li r0, -0x1
    cmplw r3, r0
    bge lbl_fn_80602ED0_604
    lwz r3, lbl_8087FDFC
    addi r0, r3, 0x1
    stw r0, lbl_8087FDFC
lbl_fn_80602ED0_604:
    lwz r0, lbl_8087FE7C
    cmpwi r0, 0x1
    bne lbl_fn_80602ED0_670
    lwz r3, lbl_8087FE00
    li r0, -0x1
    cmplw r3, r0
    bge lbl_fn_80602ED0_670
    lwz r3, lbl_8087FE00
    addi r0, r3, 0x1
    stw r0, lbl_8087FE00
    b lbl_fn_80602ED0_670
lbl_fn_80602ED0_630:
    lwz r3, lbl_8087FDFC
    lwz r0, lbl_8087FDF0
    cmplw r3, r0
    blt lbl_fn_80602ED0_648
    li r0, 0x1
    stw r0, lbl_8087FE40
lbl_fn_80602ED0_648:
    lwz r3, lbl_8087FE00
    lwz r0, lbl_8087FDF8
    cmplw r3, r0
    blt lbl_fn_80602ED0_65c
    bl fn_805FF4E0
lbl_fn_80602ED0_65c:
    li r0, 0x0
    stw r0, lbl_8087FDFC
    stw r0, lbl_8087FE00
    lwz r0, lbl_8087FDF4
    stw r0, lbl_8087FDF0
lbl_fn_80602ED0_670:
    lwz r3, lbl_8087E818
    lwz r0, lbl_8087FE80
    cmpw r3, r0
    beq lbl_fn_80602ED0_6b4
    lwz r0, lbl_8087FE80
    cmpwi r0, 0x0
    bne lbl_fn_80602ED0_6a4
    lwz r3, lbl_8087FDFC
    lwz r0, lbl_8087FDF0
    cmplw r3, r0
    blt lbl_fn_80602ED0_6a4
    li r0, 0x1
    stw r0, lbl_8087FE40
lbl_fn_80602ED0_6a4:
    li r0, 0x0
    stw r0, lbl_8087FDFC
    lwz r0, lbl_8087FDF4
    stw r0, lbl_8087FDF0
lbl_fn_80602ED0_6b4:
    lwz r3, lbl_8087FDFC
    lwz r0, lbl_8087FDF0
    cmplw r3, r0
    bne lbl_fn_80602ED0_6cc
    li r0, 0x1
    stw r0, lbl_8087FE3C
lbl_fn_80602ED0_6cc:
    lwz r0, lbl_8087FE40
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_6fc
    li r3, 0x0
    li r4, 0x2
    li r5, 0x2
    bl fn_805F6CF0
    cmpwi r3, 0x1
    bne lbl_fn_80602ED0_6fc
    li r0, 0x0
    stw r0, lbl_8087FE40
    stw r0, lbl_8087FE04
lbl_fn_80602ED0_6fc:
    lwz r0, lbl_8087FE3C
    cmpwi r0, 0x0
    beq lbl_fn_80602ED0_730
    li r3, 0x1
    li r4, 0x2
    li r5, 0x2
    bl fn_805F6CF0
    cmpwi r3, 0x1
    bne lbl_fn_80602ED0_730
    li r3, 0x0
    li r0, 0x1
    stw r3, lbl_8087FE3C
    stw r0, lbl_8087FE04
lbl_fn_80602ED0_730:
    lwz r3, lbl_8087E81C
    lwz r0, lbl_8087FE7C
    cmpw r3, r0
    beq lbl_fn_80602ED0_768
    lwz r0, lbl_8087FE7C
    cmpwi r0, 0x0
    bne lbl_fn_80602ED0_760
    lwz r3, lbl_8087FE00
    lwz r0, lbl_8087FDF8
    cmplw r3, r0
    blt lbl_fn_80602ED0_760
    bl fn_805FF4E0
lbl_fn_80602ED0_760:
    li r0, 0x0
    stw r0, lbl_8087FE00
lbl_fn_80602ED0_768:
    lwz r3, lbl_8087FE00
    lwz r0, lbl_8087FDF8
    cmplw r3, r0
    bne lbl_fn_80602ED0_788
    lis r3, lbl_807D0FD0@ha
    li r4, 0x0
    addi r3, r3, lbl_807D0FD0@l
    bl fn_805FF4D0
lbl_fn_80602ED0_788:
    li r0, 0x1
    stw r0, lbl_8087FE74
    addi r3, r30, 0x148
    stw r0, lbl_8087FE70
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r5, lbl_8087FE80
    lwz r4, lbl_8087FE7C
    lwz r3, lbl_8087FDF4
    lwz r0, lbl_8087FDFC
    stw r5, lbl_8087E818
    cmplw r3, r0
    stw r4, lbl_8087E81C
    ble lbl_fn_80602ED0_7f4
    lwz r0, lbl_8087FE04
    cmpwi r0, 0x0
    bne lbl_fn_80602ED0_7f4
    lwz r0, lbl_8087FDF4
    stw r0, lbl_8087FDF0
lbl_fn_80602ED0_7f4:
    addi r11, r1, 0x2f0
    bl _restgpr_26
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void fn_806036E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8087FE60
    bl OSDisableInterrupts
    stw r30, lbl_8087FE60
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80603730(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8087FE5C
    bl OSDisableInterrupts
    stw r30, lbl_8087FE5C
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80603780(void)
{
    nofralloc
    cmplwi r3, 0x22
    bgt lbl_fn_80603780_9c0
    lis r4, jumptable_807ABD1C@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_807ABD1C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x26
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x4c
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x72
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x26
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x98
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0xbe
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0xe4
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x10a
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x4c
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x72
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x130
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x156
    blr
    lis r3, lbl_807ABA58@ha
    addi r3, r3, lbl_807ABA58@l
    addi r3, r3, 0x17c
    blr
    lwz r3, lbl_8087FE34
    blr
lbl_fn_80603780_9c0:
    li r3, 0x0
    blr
}

asm void fn_806038A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x8000
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    clrlwi r31, r3, 30
    stw r30, 0x18(r1)
    srwi r30, r3, 2
    stw r30, 0xcc(r4)
    bl fn_80603780
    lis r4, 0xcc00
    li r0, 0x2
    sth r0, 0x2002(r4)
    li r0, 0x0
    stw r0, 0x8(r1)
    b lbl_fn_806038A0_a1c
lbl_fn_806038A0_a10:
    lwz r4, 0x8(r1)
    addi r0, r4, 0x1
    stw r0, 0x8(r1)
lbl_fn_806038A0_a1c:
    lwz r0, 0x8(r1)
    cmplwi r0, 0x3e8
    blt lbl_fn_806038A0_a10
    lis r5, 0xcc00
    li r0, 0x0
    sth r0, 0x2002(r5)
    lhz r0, 0x1a(r3)
    sth r0, 0x2006(r5)
    lbz r4, 0x1d(r3)
    lbz r0, 0x1e(r3)
    rlwimi r0, r4, 8, 16, 23
    sth r0, 0x2004(r5)
    lbz r0, 0x1f(r3)
    lbz r4, 0x1c(r3)
    slwi r0, r0, 7
    or r0, r4, r0
    sth r0, 0x200a(r5)
    lhz r0, 0x20(r3)
    clrlslwi r0, r0, 17, 1
    sth r0, 0x2008(r5)
    lwz r0, lbl_8087FE58
    cmpwi r0, 0x0
    bne lbl_fn_806038A0_a8c
    lbz r0, 0x22(r3)
    ori r0, r0, 0x8000
    sth r0, 0x2072(r5)
    lhz r0, 0x24(r3)
    sth r0, 0x2074(r5)
lbl_fn_806038A0_a8c:
    lis r4, 0xcc00
    lbz r0, 0x0(r3)
    sth r0, 0x2000(r4)
    subi r5, r30, 0x1
    li r0, 0x2
    li r8, 0x2828
    lhz r10, 0x2(r3)
    subfc r0, r5, r0
    lhz r9, 0x4(r3)
    li r7, 0x1
    slwi r10, r10, 1
    li r6, 0x1001
    add r9, r9, r10
    cmplwi r31, 0x1
    subi r0, r9, 0x2
    sth r0, 0x200e(r4)
    addze r0, r5
    lhz r9, 0x8(r3)
    subf r0, r0, r5
    and r0, r30, r0
    addi r5, r9, 0x2
    sth r5, 0x200c(r4)
    lhz r9, 0x2(r3)
    lhz r5, 0x6(r3)
    slwi r9, r9, 1
    add r5, r5, r9
    subi r5, r5, 0x2
    sth r5, 0x2012(r4)
    lhz r5, 0xa(r3)
    addi r5, r5, 0x2
    sth r5, 0x2010(r4)
    lhz r5, 0x10(r3)
    lbz r9, 0xc(r3)
    slwi r5, r5, 5
    or r5, r9, r5
    sth r5, 0x2016(r4)
    lhz r5, 0x14(r3)
    lbz r9, 0xe(r3)
    slwi r5, r5, 5
    or r5, r9, r5
    sth r5, 0x2014(r4)
    lhz r5, 0x12(r3)
    lbz r9, 0xd(r3)
    slwi r5, r5, 5
    or r5, r9, r5
    sth r5, 0x201a(r4)
    lhz r5, 0x16(r3)
    lbz r9, 0xf(r3)
    slwi r5, r5, 5
    or r5, r9, r5
    sth r5, 0x2018(r4)
    sth r8, 0x2048(r4)
    sth r7, 0x2036(r4)
    sth r6, 0x2034(r4)
    lhz r5, 0x18(r3)
    lhz r3, 0x1a(r3)
    srwi r5, r5, 1
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    clrlwi r5, r5, 16
    sth r3, 0x2032(r4)
    ori r3, r5, 0x1000
    sth r3, 0x2030(r4)
    bgt lbl_fn_806038A0_ba8
    slwi r3, r0, 8
    li r0, 0x0
    ori r3, r3, 0x1
    rlwimi r3, r31, 2, 29, 29
    sth r3, 0x2002(r4)
    sth r0, 0x206c(r4)
    b lbl_fn_806038A0_bb8
lbl_fn_806038A0_ba8:
    slwi r0, r0, 8
    ori r0, r0, 0x5
    sth r0, 0x2002(r4)
    sth r7, 0x206c(r4)
lbl_fn_806038A0_bb8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80603AA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r0, lbl_8087FDE0
    cmpwi r0, 0x0
    bne lbl_fn_80603AA0_1100
    lwz r3, lbl_8087E808
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_8087FDE0
    lis r3, 0xcc00
    lhz r0, 0x2002(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_80603AA0_c18
    li r3, 0x0
    bl fn_806038A0
lbl_fn_80603AA0_c18:
    lis r4, lbl_807ABBFC@ha
    li r29, 0x0
    addi r3, r4, lbl_807ABBFC@l
    stw r29, lbl_8087FE8C
    lhz r6, 0x2(r3)
    lis r30, 0xcc00
    lhz r5, lbl_807ABBFC@l(r4)
    stw r29, lbl_8087FE1C
    clrlslwi r0, r6, 26, 10
    or r0, r5, r0
    srawi r4, r6, 6
    stw r29, lbl_8087FE18
    stw r29, lbl_8087FE2C
    stw r29, lbl_8087FE28
    stw r29, lbl_8087FE10
    stw r29, lbl_8087FE20
    stw r29, lbl_8087FE88
    stw r29, lbl_8087FE84
    sth r0, 0x204e(r30)
    lhz r0, 0x4(r3)
    slwi r0, r0, 4
    or r0, r4, r0
    sth r0, 0x204c(r30)
    lhz r4, 0x8(r3)
    lhz r5, 0x6(r3)
    clrlslwi r0, r4, 26, 10
    srawi r4, r4, 6
    or r0, r5, r0
    sth r0, 0x2052(r30)
    lhz r0, 0xa(r3)
    slwi r0, r0, 4
    or r0, r4, r0
    sth r0, 0x2050(r30)
    lhz r4, 0xe(r3)
    lhz r5, 0xc(r3)
    clrlslwi r0, r4, 26, 10
    srawi r4, r4, 6
    or r0, r5, r0
    sth r0, 0x2056(r30)
    lhz r0, 0x10(r3)
    slwi r0, r0, 4
    or r0, r4, r0
    sth r0, 0x2054(r30)
    lhz r0, 0x14(r3)
    lhz r4, 0x12(r3)
    slwi r0, r0, 8
    or r0, r4, r0
    sth r0, 0x205a(r30)
    lhz r0, 0x18(r3)
    lhz r4, 0x16(r3)
    slwi r0, r0, 8
    or r0, r4, r0
    sth r0, 0x2058(r30)
    lhz r4, 0x1c(r3)
    li r0, 0x280
    lhz r5, 0x1a(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x205e(r30)
    lhz r4, 0x20(r3)
    lhz r5, 0x1e(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x205c(r30)
    lhz r4, 0x24(r3)
    lhz r5, 0x22(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x2062(r30)
    lhz r4, 0x28(r3)
    lhz r5, 0x26(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x2060(r30)
    lhz r4, 0x2c(r3)
    lhz r5, 0x2a(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    sth r4, 0x2066(r30)
    lhz r4, 0x30(r3)
    lhz r5, 0x2e(r3)
    slwi r3, r4, 8
    or r3, r5, r3
    sth r3, 0x2064(r30)
    sth r0, 0x2070(r30)
    bl fn_80624890
    extsb r0, r3
    sth r0, lbl_8087FE0C
    lis r3, 0x8000
    sth r29, lbl_8087FE0E
    lwz r24, 0xcc(r3)
    lhz r29, 0x2002(r30)
    bl OSDisableInterrupts
    lhz r0, 0x206c(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80603AA0_da4
    li r27, 0x2
    b lbl_fn_80603AA0_db8
lbl_fn_80603AA0_da4:
    lhz r0, 0x2002(r30)
    extrwi r4, r0, 1, 29
    neg r0, r4
    or r0, r0, r4
    srwi r27, r0, 31
lbl_fn_80603AA0_db8:
    bl OSRestoreInterrupts
    lis r3, lbl_807D1590@ha
    cmplwi r24, 0x5
    addi r3, r3, lbl_807D1590@l
    extrwi r0, r29, 2, 22
    stw r27, 0x24(r3)
    stw r0, 0x28(r3)
    beq lbl_fn_80603AA0_de8
    cmplwi r24, 0x1
    bne lbl_fn_80603AA0_df8
    cmpwi r0, 0x0
    bne lbl_fn_80603AA0_df8
lbl_fn_80603AA0_de8:
    lis r3, lbl_807D1590@ha
    li r0, 0x5
    addi r3, r3, lbl_807D1590@l
    stw r0, 0x28(r3)
lbl_fn_80603AA0_df8:
    lis r30, lbl_807D1590@ha
    addi r31, r30, lbl_807D1590@l
    lwz r5, 0x28(r31)
    lwz r0, 0x24(r31)
    subi r4, r5, 0x3
    subfic r3, r5, 0x3
    nor r3, r4, r3
    srawi r3, r3, 31
    andc r3, r5, r3
    slwi r3, r3, 2
    add r3, r3, r0
    bl fn_80603780
    li r7, 0x280
    lis r6, lbl_807D1518@ha
    subfic r5, r7, 0x2d0
    lwz r8, 0x28(r31)
    srwi r4, r5, 31
    addi r6, r6, lbl_807D1518@l
    add r4, r4, r5
    sth r29, 0x2(r6)
    srawi r6, r4, 1
    lha r0, lbl_8087FE0C
    extsh r4, r6
    stw r3, 0x54(r31)
    add r4, r4, r0
    subfic r9, r7, 0x2d0
    stw r3, lbl_8087FE54
    li r5, 0x0
    cmpw r4, r9
    stw r8, CurrTvMode_8087FE50
    sth r7, 0x4(r31)
    lhz r0, 0x2(r3)
    clrlslwi r0, r0, 17, 1
    sth r0, 0x6(r31)
    sth r6, lbl_807D1590@l(r30)
    sth r5, 0x2(r31)
    lhz r7, 0x2(r3)
    ble lbl_fn_80603AA0_e94
    b lbl_fn_80603AA0_e9c
lbl_fn_80603AA0_e94:
    srawi r0, r4, 31
    andc r9, r4, r0
lbl_fn_80603AA0_e9c:
    lis r5, lbl_807D1590@ha
    lha r8, lbl_8087FE0E
    addi r5, r5, lbl_807D1590@l
    lhz r6, 0x2(r5)
    lwz r4, 0x20(r5)
    extsh r0, r6
    clrlwi r6, r6, 31
    add r10, r0, r8
    sth r9, 0x8(r5)
    cntlzw r0, r4
    srwi r4, r0, 5
    cmpw r10, r6
    mr r0, r6
    addi r5, r4, 0x1
    ble lbl_fn_80603AA0_edc
    mr r0, r10
lbl_fn_80603AA0_edc:
    lis r4, lbl_807D1590@ha
    extsh r7, r7
    addi r4, r4, lbl_807D1590@l
    li r9, 0x280
    lhz r10, 0x2(r4)
    slwi r30, r7, 1
    lhz r7, 0x6(r4)
    subf r26, r6, r30
    extsh r10, r10
    lha r11, 0x2(r4)
    add r27, r8, r10
    extsh r12, r7
    add r12, r12, r27
    lha r10, 0x6(r4)
    add r11, r11, r8
    subf r25, r6, r27
    subf r8, r26, r12
    add r10, r10, r27
    neg r12, r8
    sth r0, 0xa(r4)
    andc r12, r12, r8
    subf r24, r26, r10
    srawi r27, r12, 31
    subf r26, r6, r11
    srawi r10, r25, 31
    neg r6, r24
    srawi r12, r26, 31
    and r8, r8, r27
    and r31, r25, r10
    andc r6, r6, r24
    srawi r10, r6, 31
    and r30, r26, r12
    srawi r6, r25, 31
    add r7, r7, r31
    subf r0, r8, r7
    and r26, r24, r10
    and r6, r25, r6
    sth r0, 0xc(r4)
    divw r10, r6, r5
    lhz r11, 0x1c(r4)
    lhz r12, 0x18(r4)
    li r29, 0x0
    sth r9, 0x12(r4)
    li r6, 0x28
    divw r8, r30, r5
    add r7, r11, r10
    li r0, 0x1
    divw r5, r26, r5
    subf r8, r8, r12
    sth r8, 0xe(r4)
    subf r5, r5, r7
    sth r5, 0x10(r4)
    lhz r5, 0x2(r3)
    clrlslwi r5, r5, 17, 1
    sth r5, 0x14(r4)
    sth r29, 0x16(r4)
    sth r29, 0x18(r4)
    sth r9, 0x1a(r4)
    lhz r5, 0x2(r3)
    la r3, lbl_8087FE68
    clrlslwi r5, r5, 17, 1
    sth r5, 0x1c(r4)
    stw r29, 0x20(r4)
    stb r6, 0x2c(r4)
    stb r6, 0x2d(r4)
    stb r6, 0x2e(r4)
    stb r29, 0x3c(r4)
    stw r0, 0x40(r4)
    stw r29, 0x44(r4)
    bl OSInitThreadQueue
    lis r5, 0xcc00
    lis r4, fn_80602ED0@ha
    lhz r0, 0x2030(r5)
    addi r4, r4, fn_80602ED0@l
    li r3, 0x18
    clrlwi r0, r0, 17
    sth r0, 0x2030(r5)
    lhz r0, 0x2034(r5)
    clrlwi r0, r0, 17
    sth r0, 0x2034(r5)
    stw r29, lbl_8087FE60
    stw r29, lbl_8087FE5C
    bl __OSSetInterruptHandler
    li r3, 0x80
    bl __OSUnmaskInterrupts
    lis r3, lbl_807ABCE8@ha
    addi r3, r3, lbl_807ABCE8@l
    bl OSRegisterShutdownFunction
    bl OSDisableInterrupts
    lwz r5, CurrTvMode_8087FE50
    cmplwi r5, 0x8
    bgt lbl_fn_80603AA0_1078
    lis r4, jumptable_807ABDA8@ha
    slwi r0, r5, 2
    addi r4, r4, jumptable_807ABDA8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r28, 0x0
    b lbl_fn_80603AA0_1078
    li r28, 0x1
    b lbl_fn_80603AA0_1078
    mr r28, r5
lbl_fn_80603AA0_1078:
    bl OSRestoreInterrupts
    cmplwi r28, 0x1
    bne lbl_fn_80603AA0_10a0
    lis r3, 0x1
    li r4, 0x3a98
    stw r4, lbl_8087FDF0
    addi r0, r3, 0x5f90
    stw r4, lbl_8087FDF4
    stw r0, lbl_8087FDF8
    b lbl_fn_80603AA0_10b8
lbl_fn_80603AA0_10a0:
    lis r3, 0x2
    li r4, 0x4650
    stw r4, lbl_8087FDF0
    subi r0, r3, 0x5a20
    stw r4, lbl_8087FDF4
    stw r0, lbl_8087FDF8
lbl_fn_80603AA0_10b8:
    li r3, 0x0
    stw r3, lbl_8087FDFC
    li r0, 0x1
    li r27, 0x1
    stw r3, lbl_8087FE00
    stw r3, lbl_8087FE78
    stw r0, lbl_8087FDEC
    stw r3, lbl_8087FE04
    lwz r0, lbl_8087FE80
    bl fn_80624A50
    clrlwi. r0, r3, 24
    bne lbl_fn_80603AA0_10ec
    li r27, 0x0
lbl_fn_80603AA0_10ec:
    stw r27, lbl_8087FE80
    li r0, 0x0
    lwz r3, lbl_8087FE7C
    stw r0, lbl_8087FE7C
    bl fn_80607290
lbl_fn_80603AA0_1100:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80603FF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSDisableInterrupts
    mr r31, r3
    lwz r30, lbl_8087FE8C
lbl_fn_80603FF0_1140:
    la r3, lbl_8087FE68
    bl OSSleepThread
    lwz r0, lbl_8087FE8C
    cmplw r30, r0
    beq lbl_fn_80603FF0_1140
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80604050(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stw r31, 0xc(r1)
    lbz r8, 0x2c(r3)
    lhz r0, 0xe(r3)
    slwi r31, r8, 5
    lwz r11, 0x20(r3)
    mullw r8, r31, r0
    lhz r9, 0x16(r3)
    lwz r10, 0x30(r3)
    cmpwi r11, 0x0
    extlwi r0, r9, 27, 1
    lhz r12, 0xa(r3)
    add r0, r10, r0
    add r9, r8, r0
    stw r9, 0x0(r4)
    bne lbl_fn_80604050_11c4
    b lbl_fn_80604050_11c8
lbl_fn_80604050_11c4:
    add r9, r9, r31
lbl_fn_80604050_11c8:
    srwi r8, r12, 31
    clrlwi r0, r12, 31
    xor r0, r0, r8
    stw r9, 0x0(r5)
    subf r0, r8, r0
    cmpwi r0, 0x1
    bne lbl_fn_80604050_11f0
    lwz r0, 0x0(r4)
    stw r9, 0x0(r4)
    stw r0, 0x0(r5)
lbl_fn_80604050_11f0:
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 2
    stw r0, 0x0(r4)
    lwz r0, 0x0(r5)
    clrlwi r0, r0, 2
    stw r0, 0x0(r5)
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80604050_1294
    lbz r8, 0x2c(r3)
    lhz r0, 0xe(r3)
    slwi r31, r8, 5
    lwz r11, 0x20(r3)
    mullw r8, r31, r0
    lhz r9, 0x16(r3)
    lwz r10, 0x48(r3)
    cmpwi r11, 0x0
    extlwi r0, r9, 27, 1
    lhz r12, 0xa(r3)
    add r0, r10, r0
    add r9, r8, r0
    stw r9, 0x0(r6)
    bne lbl_fn_80604050_1250
    b lbl_fn_80604050_1254
lbl_fn_80604050_1250:
    add r9, r9, r31
lbl_fn_80604050_1254:
    srwi r8, r12, 31
    clrlwi r0, r12, 31
    xor r0, r0, r8
    stw r9, 0x0(r7)
    subf r0, r8, r0
    cmpwi r0, 0x1
    bne lbl_fn_80604050_127c
    lwz r0, 0x0(r6)
    stw r9, 0x0(r6)
    stw r0, 0x0(r7)
lbl_fn_80604050_127c:
    lwz r0, 0x0(r6)
    clrlwi r0, r0, 2
    stw r0, 0x0(r6)
    lwz r0, 0x0(r7)
    clrlwi r0, r0, 2
    stw r0, 0x0(r7)
lbl_fn_80604050_1294:
    lwz r0, 0x0(r4)
    lis r8, 0x100
    cmplw r0, r8
    bge lbl_fn_80604050_12d0
    lwz r0, 0x0(r5)
    cmplw r0, r8
    bge lbl_fn_80604050_12d0
    lwz r0, 0x0(r6)
    cmplw r0, r8
    bge lbl_fn_80604050_12d0
    lwz r0, 0x0(r7)
    cmplw r0, r8
    bge lbl_fn_80604050_12d0
    li r10, 0x0
    b lbl_fn_80604050_12d4
lbl_fn_80604050_12d0:
    li r10, 0x1
lbl_fn_80604050_12d4:
    cmpwi r10, 0x0
    beq lbl_fn_80604050_130c
    lwz r0, 0x0(r4)
    srwi r0, r0, 5
    stw r0, 0x0(r4)
    lwz r0, 0x0(r5)
    srwi r0, r0, 5
    stw r0, 0x0(r5)
    lwz r0, 0x0(r6)
    srwi r0, r0, 5
    stw r0, 0x0(r6)
    lwz r0, 0x0(r7)
    srwi r0, r0, 5
    stw r0, 0x0(r7)
lbl_fn_80604050_130c:
    lwz r0, lbl_8087FE18
    lis r8, lbl_807D1518@ha
    lwz r11, 0x0(r4)
    addi r8, r8, lbl_807D1518@l
    lwz r4, lbl_8087FE1C
    oris r9, r0, 0x1
    stw r4, lbl_8087FE1C
    slwi r4, r10, 12
    srwi r0, r11, 16
    stw r9, lbl_8087FE18
    or r10, r4, r0
    lwz r0, lbl_8087FE18
    sth r11, 0x1e(r8)
    lwz r4, lbl_8087FE1C
    oris r0, r0, 0x2
    lbz r9, 0x3c(r3)
    stw r4, lbl_8087FE1C
    slwi r9, r9, 8
    or r4, r10, r9
    stw r0, lbl_8087FE18
    sth r4, 0x1c(r8)
    lwz r0, lbl_8087FE18
    lwz r5, 0x0(r5)
    lwz r4, lbl_8087FE1C
    ori r0, r0, 0x1000
    stw r4, lbl_8087FE1C
    stw r0, lbl_8087FE18
    lwz r0, lbl_8087FE18
    lwz r4, lbl_8087FE1C
    sth r5, 0x26(r8)
    srwi r5, r5, 16
    ori r0, r0, 0x2000
    stw r4, lbl_8087FE1C
    sth r5, 0x24(r8)
    stw r0, lbl_8087FE18
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80604050_141c
    lwz r6, 0x0(r6)
    lis r3, 0x1
    lwz r4, lbl_8087FE18
    addi r0, r3, -0x8000
    lwz r3, lbl_8087FE1C
    srwi r5, r6, 16
    stw r3, lbl_8087FE1C
    ori r3, r4, 0x4000
    stw r3, lbl_8087FE18
    lwz r3, lbl_8087FE18
    lwz r4, lbl_8087FE1C
    sth r6, 0x22(r8)
    or r0, r3, r0
    stw r4, lbl_8087FE1C
    stw r0, lbl_8087FE18
    lwz r0, lbl_8087FE18
    sth r5, 0x20(r8)
    lwz r3, lbl_8087FE1C
    ori r0, r0, 0x400
    lwz r4, 0x0(r7)
    sth r4, 0x2a(r8)
    srwi r4, r4, 16
    stw r3, lbl_8087FE1C
    stw r0, lbl_8087FE18
    lwz r0, lbl_8087FE18
    lwz r3, lbl_8087FE1C
    sth r4, 0x28(r8)
    ori r0, r0, 0x800
    stw r3, lbl_8087FE1C
    stw r0, lbl_8087FE18
lbl_fn_80604050_141c:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_80604300(void)
{
    nofralloc
    lwz r7, lbl_8087FE18
    lis r9, lbl_807D1518@ha
    lis r6, lbl_807D1590@ha
    lhz r0, 0x1a(r3)
    addi r9, r9, lbl_807D1518@l
    lwz r8, lbl_8087FE1C
    addi r6, r6, lbl_807D1590@l
    sth r0, 0x6(r9)
    lwz r0, 0x28(r6)
    oris r6, r7, 0x1000
    stw r8, lbl_8087FE1C
    cmplwi r0, 0x8
    stw r6, lbl_8087FE18
    lwz r0, lbl_8087FE18
    lbz r7, 0x1e(r3)
    lbz r8, 0x1d(r3)
    oris r0, r0, 0x2000
    lwz r6, lbl_8087FE1C
    stw r6, lbl_8087FE1C
    rlwimi r7, r8, 8, 16, 23
    sth r7, 0x4(r9)
    stw r0, lbl_8087FE18
    bne lbl_fn_80604300_149c
    lbz r4, 0x1f(r3)
    lhz r8, 0x20(r3)
    addi r7, r4, 0xac
    b lbl_fn_80604300_14bc
lbl_fn_80604300_149c:
    lhz r0, 0x20(r3)
    subfic r6, r5, 0x2d0
    lbz r7, 0x1f(r3)
    add r5, r4, r0
    add r4, r4, r7
    addi r0, r5, 0x28
    subi r7, r4, 0x28
    subf r8, r6, r0
lbl_fn_80604300_14bc:
    lwz r0, lbl_8087FE18
    lis r5, lbl_807D1518@ha
    lbz r6, 0x1c(r3)
    clrlslwi r4, r7, 23, 7
    lwz r3, lbl_8087FE1C
    oris r0, r0, 0x400
    stw r3, lbl_8087FE1C
    srwi r3, r7, 9
    or r6, r6, r4
    addi r5, r5, lbl_807D1518@l
    stw r0, lbl_8087FE18
    slwi r0, r8, 1
    or r4, r3, r0
    lwz r0, lbl_8087FE18
    lwz r3, lbl_8087FE1C
    sth r6, 0xa(r5)
    oris r0, r0, 0x800
    stw r3, lbl_8087FE1C
    sth r4, 0x8(r5)
    stw r0, lbl_8087FE18
    blr
}

asm void fn_806043E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lis r11, lbl_807D1590@ha
    addi r11, r11, lbl_807D1590@l
    stw r31, 0xc(r1)
    lwz r12, 0x18(r1)
    stw r30, 0x8(r1)
    lwz r11, 0x24(r11)
    subi r0, r11, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_806043E0_1544
    li r11, 0x1
    li r30, 0x2
    b lbl_fn_806043E0_154c
lbl_fn_806043E0_1544:
    li r11, 0x2
    li r30, 0x1
lbl_fn_806043E0_154c:
    srwi r31, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r31
    subf. r0, r31, r0
    bne lbl_fn_806043E0_1598
    mullw r0, r11, r6
    subf r0, r4, r0
    subf r0, r3, r0
    mullw r31, r30, r0
    mullw r3, r30, r3
    add r6, r9, r31
    clrlwi r6, r6, 16
    add r0, r7, r3
    add r7, r10, r31
    add r3, r8, r3
    clrlwi r0, r0, 16
    clrlwi r7, r7, 16
    clrlwi r3, r3, 16
    b lbl_fn_806043E0_15cc
lbl_fn_806043E0_1598:
    mullw r0, r11, r6
    subf r0, r4, r0
    subf r0, r3, r0
    mullw r31, r30, r0
    mullw r3, r30, r3
    add r6, r10, r31
    clrlwi r6, r6, 16
    add r0, r8, r3
    add r3, r7, r3
    add r7, r9, r31
    clrlwi r0, r0, 16
    clrlwi r3, r3, 16
    clrlwi r7, r7, 16
lbl_fn_806043E0_15cc:
    divw r4, r4, r11
    cmpwi r12, 0x0
    clrlwi r11, r4, 16
    beq lbl_fn_806043E0_1608
    clrlslwi r4, r11, 16, 1
    addi r6, r6, 0x2
    subi r8, r4, 0x2
    li r11, 0x0
    addi r4, r7, 0x2
    clrlwi r6, r6, 16
    add r0, r0, r8
    add r3, r3, r8
    clrlwi r7, r4, 16
    clrlwi r0, r0, 16
    clrlwi r3, r3, 16
lbl_fn_806043E0_1608:
    lwz r8, lbl_8087FE18
    lis r4, 0x8000
    lwz r9, lbl_8087FE1C
    lis r10, lbl_807D1518@ha
    stw r9, lbl_8087FE1C
    or r4, r8, r4
    addi r8, r10, lbl_807D1518@l
    clrlslwi r9, r11, 16, 4
    stw r4, lbl_8087FE18
    or r9, r5, r9
    lwz r4, lbl_8087FE18
    lwz r5, lbl_8087FE1C
    stw r5, lbl_8087FE1C
    oris r4, r4, 0x100
    stw r4, lbl_8087FE18
    lwz r4, lbl_8087FE18
    lwz r5, lbl_8087FE1C
    stw r5, lbl_8087FE1C
    oris r4, r4, 0x200
    stw r4, lbl_8087FE18
    lwz r4, lbl_8087FE18
    lwz r5, lbl_8087FE1C
    stw r5, lbl_8087FE1C
    oris r4, r4, 0x40
    stw r4, lbl_8087FE18
    lwz r4, lbl_8087FE18
    lwz r5, lbl_8087FE1C
    sth r9, lbl_807D1518@l(r10)
    oris r4, r4, 0x80
    stw r5, lbl_8087FE1C
    sth r0, 0xe(r8)
    sth r6, 0xc(r8)
    sth r3, 0x12(r8)
    sth r7, 0x10(r8)
    stw r4, lbl_8087FE18
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}
