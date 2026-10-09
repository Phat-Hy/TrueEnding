#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCancelAlarm(void);
extern void OSSetAlarm(void);
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805C0120(void);
extern void fn_805C23D0(void);
extern void fn_805C26A0(void);
extern void fn_805C3940(void);
extern void fn_805C7FE0(void);
extern void fn_805C95D0(void);
extern void fn_805CA420(void);
extern void fn_805CAEF0(void);
extern void fn_805CE550(void);
extern void fn_805D1500(void);
extern void fn_805D1540(void);
extern void fn_805D1790(void);
extern void fn_805D1880(void);
extern void fn_805D29A0(void);
extern void fn_805D2B50(void);
extern void fn_805D2C70(void);
extern void fn_805D3910(void);
extern void fn_805D3BA0(void);
extern void fn_805D4240(void);
extern void fn_805EC870(void);
extern void fn_8061A0F0(void);
extern void fn_8061A100(void);
extern void fn_80625BF0(void);
extern void fn_80625F40(void);
extern void fn_80625F90(void);
extern void fn_806263E0(void);
extern void fn_80626400(void);
extern void fn_80626410(void);
extern void fn_80626420(void);
extern void fn_80626480(void);
extern void fn_80626500(void);
extern void fn_806265C0(void);
extern void fn_8065F510(void);
extern void fn_8065F520(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_8068B104(void);

/* External data declarations */
extern u8 lbl_807641A0[];
extern u8 lbl_80764200[];
extern u8 lbl_80764478[];
extern u8 lbl_807644A8[];
extern u8 lbl_80764518[];
extern u8 lbl_8076451C[];
extern u8 lbl_80764530[];
extern u8 lbl_80764534[];
extern u8 lbl_80798170[];
extern u8 lbl_80798A70[];
extern u8 lbl_80798DF0[];
extern u8 lbl_80798E70[];
extern u8 lbl_80798E74[];
extern u8 lbl_80798E78[];
extern u8 lbl_80798EF0[];
extern u8 lbl_807CA1C8[];
extern u8 lbl_807CA1F8[];
extern u8 lbl_807CA200[];

/* Small data declarations */

/* Function declarations */
void fn_805CC170(void);
void fn_805CC3E0(void);
void fn_805CC490(void);
void fn_805CC4B0(void);
void fn_805CC5E0(void);
void fn_805CC6A0(void);
void fn_805CC890(void);
void fn_805CC8E0(void);
void fn_805CC9D0(void);
void fn_805CCBA0(void);
void fn_805CCBB0(void);
void fn_805CCBF0(void);
void fn_805CCC80(void);
void fn_805CCDD0(void);
void fn_805CCED0(void);
void fn_805CCF90(void);
void fn_805CD170(void);
void fn_805CD450(void);
void fn_805CD490(void);
void fn_805CD570(void);
void fn_805CD6C0(void);
void fn_805CD720(void);
void fn_805CD7A0(void);
void fn_805CD7C0(void);
void fn_805CD830(void);
void fn_805CD870(void);
void fn_805CD8D0(void);
void fn_805CD940(void);
void fn_805CD980(void);
void fn_805CD990(void);
void fn_805CD9B0(void);
void fn_805CD9E0(void);
void fn_805CDA10(void);
void fn_805CDA40(void);
void fn_805CDA80(void);
void fn_805CDAA0(void);
void fn_805CDAF0(void);

asm void fn_805CC170(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r31, r3
    li r25, 0x0
    mr r26, r31
    lis r28, lbl_807641A0@ha
    li r29, 0x1
    li r30, 0x0
    b lbl_fn_805CC170_000000A8
lbl_fn_805CC170_00000030:
    lwz r0, 0x20(r26)
    cmpwi r0, 0x0
    beq lbl_fn_805CC170_000000A0
    lwz r0, 0x10(r31)
    addi r4, r28, lbl_807641A0@l
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805CC170_00000080
    nop
lbl_fn_805CC170_00000058:
    lwz r0, 0x0(r4)
    cmpw r25, r0
    bne lbl_fn_805CC170_00000074
    lwz r0, 0x4(r4)
    cmpwi r0, 0x2
    bne lbl_fn_805CC170_00000074
    b lbl_fn_805CC170_00000084
lbl_fn_805CC170_00000074:
    addi r4, r4, 0x8
    addi r3, r3, 0x1
    bdnz lbl_fn_805CC170_00000058
lbl_fn_805CC170_00000080:
    li r3, -0x1
lbl_fn_805CC170_00000084:
    slwi r0, r3, 2
    add r3, r31, r0
    lwz r27, 0x260(r3)
    mr r3, r27
    bl fn_805C0120
    stw r29, 0x14(r27)
    stw r30, 0x20(r26)
lbl_fn_805CC170_000000A0:
    addi r26, r26, 0x4
    addi r25, r25, 0x1
lbl_fn_805CC170_000000A8:
    lwz r0, 0xc(r31)
    cmpw r25, r0
    blt lbl_fn_805CC170_00000030
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805CC170_000000F4
    lwz r27, 0x3e8(r31)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    li r4, 0x0
    lwz r3, 0xc(r31)
    addi r0, r3, 0x1
    slwi r0, r0, 2
    add r3, r31, r0
    stw r4, 0x20(r3)
lbl_fn_805CC170_000000F4:
    lwz r3, 0xc(r31)
    addi r0, r3, 0x1
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805CC170_00000254
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_805CC170_000001C0
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805CC170_00000254
    lis r4, lbl_80764200@ha
    li r0, 0x25
    addi r4, r4, lbl_80764200@l
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805CC170_00000140:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805CC170_0000015C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x14
    bne lbl_fn_805CC170_0000015C
    b lbl_fn_805CC170_0000018C
lbl_fn_805CC170_0000015C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x5
    bne lbl_fn_805CC170_0000017C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x14
    bne lbl_fn_805CC170_0000017C
    b lbl_fn_805CC170_0000018C
lbl_fn_805CC170_0000017C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CC170_00000140
    li r3, -0x1
lbl_fn_805CC170_0000018C:
    slwi r0, r3, 2
    add r3, r31, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    li r4, 0x0
    lwz r0, 0xc(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    stw r4, 0x20(r3)
    b lbl_fn_805CC170_00000254
lbl_fn_805CC170_000001C0:
    lis r4, lbl_80764200@ha
    li r0, 0x25
    addi r4, r4, lbl_80764200@l
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805CC170_000001D8:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x5
    bne lbl_fn_805CC170_000001F4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x3
    bne lbl_fn_805CC170_000001F4
    b lbl_fn_805CC170_00000224
lbl_fn_805CC170_000001F4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x5
    bne lbl_fn_805CC170_00000214
    lwz r0, 0xc(r4)
    cmpwi r0, 0x3
    bne lbl_fn_805CC170_00000214
    b lbl_fn_805CC170_00000224
lbl_fn_805CC170_00000214:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805CC170_000001D8
    li r3, -0x1
lbl_fn_805CC170_00000224:
    slwi r0, r3, 2
    add r3, r31, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    li r4, 0x0
    lwz r0, 0xc(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    stw r4, 0x20(r3)
lbl_fn_805CC170_00000254:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CC3E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_80798170@ha
    lwz r30, 0xc(r3)
    addi r28, r4, 0xb4
    li r29, -0x1
    addi r31, r31, lbl_80798170@l
    li r27, 0x0
    b lbl_fn_805CC3E0_000002C4
lbl_fn_805CC3E0_000002A0:
    lwz r4, 0x0(r31)
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805CC3E0_000002BC
    mr r29, r27
    b lbl_fn_805CC3E0_000002CC
lbl_fn_805CC3E0_000002BC:
    addi r31, r31, 0x4
    addi r27, r27, 0x1
lbl_fn_805CC3E0_000002C4:
    cmpw r27, r30
    blt lbl_fn_805CC3E0_000002A0
lbl_fn_805CC3E0_000002CC:
    lis r31, lbl_80798A70@ha
    li r27, 0x0
    addi r31, r31, lbl_80798A70@l
lbl_fn_805CC3E0_000002D8:
    lwz r4, 0x0(r31)
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805CC3E0_000002F4
    add r29, r27, r30
    b lbl_fn_805CC3E0_00000304
lbl_fn_805CC3E0_000002F4:
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0xa
    blt lbl_fn_805CC3E0_000002D8
lbl_fn_805CC3E0_00000304:
    addi r11, r1, 0x20
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CC490(void)
{
    nofralloc
    lwz r0, 0x14(r3)
    cmpwi r0, 0x12
    beq lbl_fn_805CC490_00000334
    li r3, -0x1
    blr
lbl_fn_805CC490_00000334:
    lwz r3, 0xb8(r3)
    blr
}

asm void fn_805CC4B0(void)
{
    nofralloc
    neg r5, r4
    stwu r1, -0x20(r1)
    or r5, r5, r4
    srwi. r4, r5, 31
    lbz r0, 0x248(r3)
    rlwimi r0, r5, 6, 26, 26
    stb r0, 0x248(r3)
    stb r4, 0x8f(r3)
    beq lbl_fn_805CC4B0_000003E4
    lwz r5, 0x4(r3)
    lwz r4, 0x1d8(r3)
    lfs f1, 0x38(r5)
    lfs f0, 0x34(r5)
    lwz r4, 0x10(r4)
    stfs f0, 0x10(r1)
    stfs f0, 0x44(r4)
    stfs f1, 0x48(r4)
    lwz r4, 0x4(r3)
    stfs f1, 0x14(r1)
    lwz r0, 0x20(r4)
    stfs f0, 0x18(r1)
    cmpwi r0, 0x0
    stfs f1, 0x1c(r1)
    bne lbl_fn_805CC4B0_0000045C
    lwz r4, 0x1dc(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f1, 0x48(r4)
    lwz r4, 0x1e0(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f1, 0x48(r4)
    lwz r4, 0x1e4(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f1, 0x48(r4)
    lwz r3, 0x1e8(r3)
    lwz r3, 0x10(r3)
    stfs f0, 0x44(r3)
    stfs f1, 0x48(r3)
    b lbl_fn_805CC4B0_0000045C
lbl_fn_805CC4B0_000003E4:
    lwz r4, 0x1d8(r3)
    lis r5, lbl_80764478@ha
    lfs f0, lbl_80764478@l(r5)
    lwz r4, 0x10(r4)
    stfs f0, 0x8(r1)
    stfs f0, 0x44(r4)
    stfs f0, 0x48(r4)
    lwz r4, 0x4(r3)
    stfs f0, 0xc(r1)
    lwz r0, 0x20(r4)
    stfs f0, 0x18(r1)
    cmpwi r0, 0x0
    stfs f0, 0x1c(r1)
    bne lbl_fn_805CC4B0_0000045C
    lwz r4, 0x1dc(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f0, 0x48(r4)
    lwz r4, 0x1e0(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f0, 0x48(r4)
    lwz r4, 0x1e4(r3)
    lwz r4, 0x10(r4)
    stfs f0, 0x44(r4)
    stfs f0, 0x48(r4)
    lwz r3, 0x1e8(r3)
    lwz r3, 0x10(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
lbl_fn_805CC4B0_0000045C:
    addi r1, r1, 0x20
    blr
}

asm void fn_805CC5E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    cmplwi r30, 0x1
    lwz r5, 0x8(r29)
    mr r4, r3
    beq lbl_fn_805CC5E0_000004DC
    cmplwi r30, 0x2
    beq lbl_fn_805CC5E0_000004EC
    cmpwi r30, 0x0
    beq lbl_fn_805CC5E0_000004F8
    b lbl_fn_805CC5E0_0000050C
lbl_fn_805CC5E0_000004DC:
    mr r3, r5
    mr r5, r31
    bl fn_805C95D0
    b lbl_fn_805CC5E0_0000050C
lbl_fn_805CC5E0_000004EC:
    mr r3, r5
    bl fn_805CA420
    b lbl_fn_805CC5E0_0000050C
lbl_fn_805CC5E0_000004F8:
    lwz r0, 0x10(r31)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_fn_805CC5E0_0000050C
    mr r3, r5
    bl fn_805CAEF0
lbl_fn_805CC5E0_0000050C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CC6A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x9a(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805CC6A0_000006FC
    li r0, 0x1
    stb r0, 0x9a(r3)
    mr r30, r31
    li r29, 0x0
lbl_fn_805CC6A0_00000568:
    lwz r3, 0x24c(r30)
    bl fn_805C26A0
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x4
    blt lbl_fn_805CC6A0_00000568
    lwz r4, 0x14(r31)
    li r3, 0x0
    stb r3, 0x95(r31)
    subi r0, r4, 0x5
    cmplwi r0, 0x2
    stb r3, 0x96(r31)
    stb r3, 0x98(r31)
    stb r3, 0x99(r31)
    ble lbl_fn_805CC6A0_000005D4
    cmpwi r4, 0x0
    beq lbl_fn_805CC6A0_000005C0
    cmpwi r4, 0x1
    beq lbl_fn_805CC6A0_000005C8
    cmpwi r4, 0x3
    beq lbl_fn_805CC6A0_000005D4
    b lbl_fn_805CC6A0_00000694
lbl_fn_805CC6A0_000005C0:
    li r0, 0x1
    stb r0, 0x95(r31)
lbl_fn_805CC6A0_000005C8:
    li r0, 0x1
    stb r0, 0x96(r31)
    b lbl_fn_805CC6A0_00000694
lbl_fn_805CC6A0_000005D4:
    cmpwi r4, 0x3
    bne lbl_fn_805CC6A0_000005E8
    lwz r0, 0x18(r31)
    cmpwi r0, 0x5
    beq lbl_fn_805CC6A0_000005FC
lbl_fn_805CC6A0_000005E8:
    cmpwi r4, 0x5
    bne lbl_fn_805CC6A0_00000610
    lbz r0, 0x91(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805CC6A0_00000610
lbl_fn_805CC6A0_000005FC:
    addi r3, r31, 0x588
    bl OSCancelAlarm
    lwz r3, 0x1ac(r31)
    bl fn_8065F520
    b lbl_fn_805CC6A0_0000068C
lbl_fn_805CC6A0_00000610:
    lbz r0, 0x92(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805CC6A0_00000684
    cmpwi r4, 0x3
    ble lbl_fn_805CC6A0_00000684
    li r0, 0x1
    stb r0, 0x98(r31)
    bl fn_8065F510
    cmpwi r3, 0x0
    bne lbl_fn_805CC6A0_0000068C
    addi r3, r31, 0x588
    bl OSCancelAlarm
    addi r3, r31, 0x588
    li r4, 0x1
    bl fn_805EC870
    lis r4, 0x8000
    lis r7, fn_805C7FE0@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C7FE0@l
    srwi r0, r0, 2
    addi r3, r31, 0x588
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
    b lbl_fn_805CC6A0_0000068C
lbl_fn_805CC6A0_00000684:
    lwz r3, 0x1ac(r31)
    bl fn_8065F520
lbl_fn_805CC6A0_0000068C:
    li r0, 0x1
    stb r0, 0x99(r31)
lbl_fn_805CC6A0_00000694:
    lwz r3, 0x3f8(r31)
    lis r0, 0x4330
    lis r4, lbl_807644A8@ha
    li r6, 0x13
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    lfd f1, lbl_807644A8@l(r4)
    li r5, 0x1
    stw r0, 0x8(r1)
    li r3, 0x2
    lwz r4, 0x4(r31)
    lfd f0, 0x8(r1)
    stw r6, 0x14(r31)
    fsubs f0, f0, f1
    stw r5, 0x3fc(r31)
    stw r3, 0xb8(r31)
    stfs f0, 0x73c(r31)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805CC6A0_000006FC
    fctiwz f0, f0
    li r3, 0x3
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    mtctr r12
    bctrl
lbl_fn_805CC6A0_000006FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CC890(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_805C3940
    li r31, 0x0
lbl_fn_805CC890_00000740:
    lwz r3, 0x24c(r30)
    bl fn_805C23D0
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmpwi r31, 0x4
    blt lbl_fn_805CC890_00000740
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CC8E0(void)
{
    nofralloc
    cmplwi r4, 0x1
    beq lbl_fn_805CC8E0_00000788
    lfs f0, 0x0(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_805CC8E0_00000790
lbl_fn_805CC8E0_00000788:
    lhz r3, 0x4(r3)
    blr
lbl_fn_805CC8E0_00000790:
    slwi r0, r4, 3
    add r5, r3, r0
    lfs f0, -0x8(r5)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805CC8E0_000007B0
    lhz r3, -0x4(r5)
    blr
lbl_fn_805CC8E0_000007B0:
    subi r5, r4, 0x1
    li r6, 0x0
    b lbl_fn_805CC8E0_000007F4
lbl_fn_805CC8E0_000007BC:
    add r4, r6, r5
    srwi r0, r4, 31
    add r4, r0, r4
    extlwi r0, r4, 29, 2
    lfsx f0, r3, r0
    srawi r4, r4, 1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805CC8E0_000007E8
    mr r5, r4
lbl_fn_805CC8E0_000007E8:
    cmpwi r0, 0x0
    bne lbl_fn_805CC8E0_000007F4
    mr r6, r4
lbl_fn_805CC8E0_000007F4:
    subi r0, r5, 0x1
    cmpw r6, r0
    beq lbl_fn_805CC8E0_00000808
    cmpw r6, r5
    bne lbl_fn_805CC8E0_000007BC
lbl_fn_805CC8E0_00000808:
    slwi r5, r5, 3
    lis r4, lbl_80764518@ha
    lfsx f2, r3, r5
    li r0, 0x0
    lfs f0, lbl_80764518@l(r4)
    fsubs f1, f1, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_805CC8E0_0000083C
    lis r4, lbl_8076451C@ha
    lfs f0, lbl_8076451C@l(r4)
    fcmpo cr0, f1, f0
    bge lbl_fn_805CC8E0_0000083C
    li r0, 0x1
lbl_fn_805CC8E0_0000083C:
    cmpwi r0, 0x0
    beq lbl_fn_805CC8E0_00000850
    add r3, r3, r5
    lhz r3, 0x4(r3)
    blr
lbl_fn_805CC8E0_00000850:
    slwi r0, r6, 3
    add r3, r3, r0
    lhz r3, 0x4(r3)
    blr
}

asm void fn_805CC9D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    cmplwi r4, 0x1
    lis r6, lbl_80764518@ha
    addi r6, r6, lbl_80764518@l
    beq lbl_fn_805CC9D0_0000088C
    lfs f0, 0x0(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_805CC9D0_00000894
lbl_fn_805CC9D0_0000088C:
    lfs f1, 0x4(r3)
    b lbl_fn_805CC9D0_00000A14
lbl_fn_805CC9D0_00000894:
    mulli r0, r4, 0xc
    add r5, r3, r0
    lfs f0, -0xc(r5)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805CC9D0_000008B4
    lfs f1, -0x8(r5)
    b lbl_fn_805CC9D0_00000A14
lbl_fn_805CC9D0_000008B4:
    subi r8, r4, 0x1
    li r7, 0x0
    b lbl_fn_805CC9D0_000008FC
lbl_fn_805CC9D0_000008C0:
    add r5, r7, r8
    srwi r0, r5, 31
    add r0, r0, r5
    srawi r5, r0, 1
    mulli r0, r5, 0xc
    lfsx f0, r3, r0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_805CC9D0_000008F0
    mr r8, r5
lbl_fn_805CC9D0_000008F0:
    cmpwi r0, 0x0
    bne lbl_fn_805CC9D0_000008FC
    mr r7, r5
lbl_fn_805CC9D0_000008FC:
    subi r0, r8, 0x1
    cmpw r7, r0
    beq lbl_fn_805CC9D0_00000910
    cmpw r7, r8
    bne lbl_fn_805CC9D0_000008C0
lbl_fn_805CC9D0_00000910:
    mulli r5, r8, 0xc
    lfs f0, 0x0(r6)
    li r0, 0x0
    lfsx f2, r3, r5
    add r9, r3, r5
    mulli r5, r7, 0xc
    fsubs f2, f1, f2
    add r5, r3, r5
    fcmpo cr0, f0, f2
    bge lbl_fn_805CC9D0_00000948
    lfs f0, 0x4(r6)
    fcmpo cr0, f2, f0
    bge lbl_fn_805CC9D0_00000948
    li r0, 0x1
lbl_fn_805CC9D0_00000948:
    cmpwi r0, 0x0
    beq lbl_fn_805CC9D0_00000988
    subi r0, r4, 0x1
    cmplw r8, r0
    bge lbl_fn_805CC9D0_00000980
    addi r0, r8, 0x1
    lfs f1, 0x0(r9)
    mulli r0, r0, 0xc
    lfsx f0, r3, r0
    fcmpu cr0, f1, f0
    bne lbl_fn_805CC9D0_00000980
    add r3, r3, r0
    lfs f1, 0x4(r3)
    b lbl_fn_805CC9D0_00000A14
lbl_fn_805CC9D0_00000980:
    lfs f1, 0x4(r9)
    b lbl_fn_805CC9D0_00000A14
lbl_fn_805CC9D0_00000988:
    lfs f2, 0x0(r5)
    lfs f0, 0x0(r9)
    fsubs f7, f1, f2
    lfs f6, 0x8(r6)
    fsubs f0, f0, f2
    lfs f4, 0xc(r6)
    lfs f1, 0x10(r6)
    fmuls f2, f7, f7
    fdivs f5, f6, f0
    lfs f0, 0x14(r6)
    lfs f8, 0x4(r5)
    lfs f9, 0x4(r9)
    lfs f10, 0x8(r5)
    lfs f11, 0x8(r9)
    fmuls f12, f5, f2
    fmuls f2, f12, f5
    fmuls f3, f4, f12
    fmuls f13, f7, f2
    fmuls f2, f1, f2
    fmuls f31, f13, f5
    fsubs f3, f13, f3
    fsubs f5, f13, f12
    fmuls f1, f4, f31
    fmuls f0, f0, f31
    fadds f3, f7, f3
    fsubs f1, f1, f2
    fadds f0, f0, f2
    fmuls f2, f10, f3
    fadds f1, f6, f1
    fmuls f0, f9, f0
    fmuls f3, f11, f5
    fmuls f1, f8, f1
    fadds f0, f1, f0
    fadds f0, f2, f0
    fadds f1, f3, f0
lbl_fn_805CC9D0_00000A14:
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_805CCBA0(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    lhz r3, 0x8(r3)
    blr
}

asm void fn_805CCBB0(void)
{
    nofralloc
    lis r4, lbl_80764530@ha
    li r0, 0x0
    lfs f0, lbl_80764530@l(r4)
    lis r4, lbl_80798DF0@ha
    addi r4, r4, lbl_80798DF0@l
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stfs f0, 0x10(r3)
    stw r4, 0x0(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    sth r0, 0x1c(r3)
    blr
}

asm void fn_805CCBF0(void)
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
    beq lbl_fn_805CCBF0_00000AF0
    lwz r4, 0x18(r3)
    lis r5, lbl_80798DF0@ha
    addi r5, r5, lbl_80798DF0@l
    stw r5, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805CCBF0_00000AC8
    lis r3, lbl_807CA1F8@ha
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
lbl_fn_805CCBF0_00000AC8:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805CCBF0_00000AE0
    lis r3, lbl_807CA1F8@ha
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
lbl_fn_805CCBF0_00000AE0:
    cmpwi r31, 0x0
    ble lbl_fn_805CCBF0_00000AF0
    mr r3, r30
    bl dtor_80084684
lbl_fn_805CCBF0_00000AF0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CCC80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lhz r6, 0xc(r4)
    li r0, 0x0
    stw r4, 0xc(r3)
    mr r30, r3
    cmpwi r6, 0x0
    mr r31, r4
    stw r0, 0x14(r3)
    mr r24, r5
    beq lbl_fn_805CCC80_00000BC8
    lis r3, lbl_807CA1F8@ha
    clrlslwi r4, r6, 16, 2
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    stw r3, 0x14(r30)
    beq lbl_fn_805CCC80_00000BC8
    lwz r3, 0xc(r30)
    li r25, 0x0
    li r26, 0x0
    lis r29, 0x7469
    addi r28, r3, 0x14
    mr r27, r28
    b lbl_fn_805CCC80_00000BB8
lbl_fn_805CCC80_00000B80:
    lwz r12, 0x0(r24)
    mr r3, r24
    lwz r0, 0x0(r27)
    addi r4, r29, 0x6d67
    lwz r12, 0xc(r12)
    li r6, 0x0
    add r5, r28, r0
    mtctr r12
    bctrl
    lwz r4, 0x14(r30)
    addi r27, r27, 0x4
    addi r25, r25, 0x1
    stwx r3, r4, r26
    addi r26, r26, 0x4
lbl_fn_805CCC80_00000BB8:
    lwz r3, 0xc(r30)
    lhz r0, 0xc(r3)
    cmpw r25, r0
    blt lbl_fn_805CCC80_00000B80
lbl_fn_805CCC80_00000BC8:
    lhz r0, 0xe(r31)
    lis r3, lbl_807CA1F8@ha
    lwz r3, lbl_807CA1F8@l(r3)
    slwi r4, r0, 4
    bl fn_8061A0F0
    cmpwi r3, 0x0
    stw r3, 0x18(r30)
    beq lbl_fn_805CCC80_00000C40
    lhz r0, 0xe(r31)
    li r4, 0x0
    sth r0, 0x1c(r30)
    slwi r5, r0, 4
    bl memset
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_805CCC80_00000C30
lbl_fn_805CCC80_00000C08:
    lwz r3, 0x18(r30)
    clrlslwi r0, r5, 16, 4
    add. r3, r3, r0
    beq lbl_fn_805CCC80_00000C2C
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stb r4, 0xe(r3)
    stw r4, 0x8(r3)
    sth r4, 0xc(r3)
lbl_fn_805CCC80_00000C2C:
    addi r5, r5, 0x1
lbl_fn_805CCC80_00000C30:
    lhz r0, 0xe(r31)
    clrlwi r3, r5, 16
    cmplw r3, r0
    blt lbl_fn_805CCC80_00000C08
lbl_fn_805CCC80_00000C40:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CCDD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0xc(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r0, 0x10(r6)
    li r30, 0x0
    add r31, r6, r0
    b lbl_fn_805CCDD0_00000D34
lbl_fn_805CCDD0_00000C94:
    clrlslwi r0, r30, 16, 2
    lwzx r0, r31, r0
    add r4, r4, r0
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805CCDD0_00000CF0
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r5, r29
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805CCDD0_00000D30
    lwz r0, 0x18(r27)
    clrlslwi r5, r30, 16, 4
    add r4, r0, r5
    stw r27, 0x8(r4)
    sth r30, 0xc(r4)
    lwz r0, 0x18(r27)
    add r4, r0, r5
    bl fn_805D3910
    b lbl_fn_805CCDD0_00000D30
lbl_fn_805CCDD0_00000CF0:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r5, r29
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805CCDD0_00000D30
    lwz r0, 0x18(r27)
    clrlslwi r5, r30, 16, 4
    add r4, r0, r5
    stw r27, 0x8(r4)
    sth r30, 0xc(r4)
    lwz r0, 0x18(r27)
    add r4, r0, r5
    bl fn_805D29A0
lbl_fn_805CCDD0_00000D30:
    addi r30, r30, 0x1
lbl_fn_805CCDD0_00000D34:
    lwz r4, 0xc(r27)
    clrlwi r3, r30, 16
    lhz r0, 0xe(r4)
    cmplw r3, r0
    blt lbl_fn_805CCDD0_00000C94
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CCED0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, 0xc(r3)
    lwz r0, 0x10(r5)
    add r31, r5, r0
    b lbl_fn_805CCED0_00000DE8
lbl_fn_805CCED0_00000D98:
    clrlslwi r0, r30, 16, 2
    lwzx r0, r31, r0
    add r4, r4, r0
    lbz r0, 0x15(r4)
    cmplwi r0, 0x1
    bne lbl_fn_805CCED0_00000DE4
    addi r3, r29, 0x4
    bl fn_805CD9E0
    cmpwi r3, 0x0
    beq lbl_fn_805CCED0_00000DE4
    lwz r0, 0x18(r28)
    clrlslwi r5, r30, 16, 4
    mr r3, r29
    add r4, r0, r5
    stw r28, 0x8(r4)
    sth r30, 0xc(r4)
    lwz r0, 0x18(r28)
    add r4, r0, r5
    bl fn_805D29A0
lbl_fn_805CCED0_00000DE4:
    addi r30, r30, 0x1
lbl_fn_805CCED0_00000DE8:
    lwz r4, 0xc(r28)
    clrlwi r3, r30, 16
    lhz r0, 0xe(r4)
    cmplw r3, r0
    blt lbl_fn_805CCED0_00000D98
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CCF90(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_22
    lwz r7, 0xc(r3)
    lis r6, lbl_80764534@ha
    slwi r4, r4, 2
    lfs f31, lbl_80764534@l(r6)
    lwz r0, 0x10(r7)
    mr r24, r3
    mr r25, r5
    addi r31, r1, 0x8
    add r0, r7, r0
    li r26, 0x0
    lwzx r0, r4, r0
    add r30, r7, r0
    addi r28, r30, 0x18
    b lbl_fn_805CCF90_00000FCC
lbl_fn_805CCF90_00000E7C:
    lwz r0, 0x0(r28)
    lwzx r3, r30, r0
    add r29, r30, r0
    addi r27, r29, 0x8
    subis r0, r3, 0x524c
    cmplwi r0, 0x5041
    beq lbl_fn_805CCF90_00000EAC
    cmplwi r0, 0x5649
    beq lbl_fn_805CCF90_00000EFC
    cmplwi r0, 0x5643
    beq lbl_fn_805CCF90_00000F58
    b lbl_fn_805CCF90_00000FC4
lbl_fn_805CCF90_00000EAC:
    lfs f30, 0x10(r24)
    li r23, 0x0
    b lbl_fn_805CCF90_00000EEC
lbl_fn_805CCF90_00000EB8:
    lwz r0, 0x0(r27)
    fmr f1, f30
    add r22, r29, r0
    lwz r0, 0x8(r22)
    lhz r4, 0x4(r22)
    add r3, r22, r0
    bl fn_805CC9D0
    lbz r0, 0x1(r22)
    addi r27, r27, 0x4
    addi r23, r23, 0x1
    slwi r0, r0, 2
    add r3, r25, r0
    stfs f1, 0x2c(r3)
lbl_fn_805CCF90_00000EEC:
    lbz r0, 0x4(r29)
    cmpw r23, r0
    blt lbl_fn_805CCF90_00000EB8
    b lbl_fn_805CCF90_00000FC4
lbl_fn_805CCF90_00000EFC:
    lfs f30, 0x10(r24)
    li r23, 0x0
    b lbl_fn_805CCF90_00000F48
lbl_fn_805CCF90_00000F08:
    lwz r0, 0x0(r27)
    fmr f1, f30
    add r3, r29, r0
    lwz r0, 0x8(r3)
    lhz r4, 0x4(r3)
    add r3, r3, r0
    bl fn_805CC8E0
    clrlwi r4, r3, 16
    lbz r0, 0xcf(r25)
    neg r3, r4
    addi r27, r27, 0x4
    or r3, r3, r4
    rlwinm r0, r0, 0, 24, 30
    rlwimi r0, r3, 1, 31, 31
    stb r0, 0xcf(r25)
    addi r23, r23, 0x1
lbl_fn_805CCF90_00000F48:
    lbz r0, 0x4(r29)
    cmpw r23, r0
    blt lbl_fn_805CCF90_00000F08
    b lbl_fn_805CCF90_00000FC4
lbl_fn_805CCF90_00000F58:
    lbz r0, 0x4(r29)
    li r23, 0x0
    lfs f30, 0x10(r24)
    cmpwi r0, 0x0
    ble lbl_fn_805CCF90_00000FC4
    b lbl_fn_805CCF90_00000FB8
lbl_fn_805CCF90_00000F70:
    lwz r0, 0x0(r27)
    fmr f1, f30
    add r22, r29, r0
    lwz r0, 0x8(r22)
    lhz r4, 0x4(r22)
    add r3, r22, r0
    bl fn_805CC9D0
    fadds f0, f1, f31
    psq_st f0, 0x0(r31), 1, 2
    mr r3, r25
    lwz r12, 0x0(r25)
    lbz r5, 0x8(r1)
    lwz r12, 0x30(r12)
    lbz r4, 0x1(r22)
    mtctr r12
    bctrl
    addi r27, r27, 0x4
    addi r23, r23, 0x1
lbl_fn_805CCF90_00000FB8:
    lbz r0, 0x4(r29)
    cmpw r23, r0
    blt lbl_fn_805CCF90_00000F70
lbl_fn_805CCF90_00000FC4:
    addi r28, r28, 0x4
    addi r26, r26, 0x1
lbl_fn_805CCF90_00000FCC:
    lbz r0, 0x14(r30)
    cmpw r26, r0
    blt lbl_fn_805CCF90_00000E7C
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805CD170(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x40
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    bl _savegpr_21
    lwz r7, 0xc(r3)
    lis r6, lbl_80764534@ha
    slwi r4, r4, 2
    lfs f30, lbl_80764534@l(r6)
    lwz r0, 0x10(r7)
    mr r22, r3
    mr r23, r5
    addi r31, r1, 0x8
    add r0, r7, r0
    li r24, 0x0
    lwzx r0, r4, r0
    add r29, r7, r0
    addi r27, r29, 0x18
    b lbl_fn_805CD170_0000129C
lbl_fn_805CD170_00001064:
    lwz r0, 0x0(r27)
    lwzx r3, r29, r0
    add r28, r29, r0
    addi r26, r28, 0x8
    subis r0, r3, 0x524c
    cmplwi r0, 0x4d43
    beq lbl_fn_805CD170_0000109C
    cmplwi r0, 0x5453
    beq lbl_fn_805CD170_00001128
    cmplwi r0, 0x5450
    beq lbl_fn_805CD170_000011A0
    cmplwi r0, 0x494d
    beq lbl_fn_805CD170_00001220
    b lbl_fn_805CD170_00001294
lbl_fn_805CD170_0000109C:
    lbz r0, 0x4(r28)
    li r25, 0x0
    lfs f31, 0x10(r22)
    cmpwi r0, 0x0
    ble lbl_fn_805CD170_00001294
    b lbl_fn_805CD170_00001118
lbl_fn_805CD170_000010B4:
    lwz r0, 0x0(r26)
    fmr f1, f31
    add r21, r28, r0
    lwz r0, 0x8(r21)
    lhz r4, 0x4(r21)
    add r3, r21, r0
    bl fn_805CC9D0
    fadds f0, f1, f30
    psq_st f0, 0x0(r31), 1, 5
    li r6, -0x400
    lha r0, 0x8(r1)
    cmpwi r0, -0x400
    blt lbl_fn_805CD170_000010EC
    mr r6, r0
lbl_fn_805CD170_000010EC:
    extsh r0, r6
    lbz r4, 0x1(r21)
    cmpwi r0, 0x3ff
    mr r3, r23
    li r5, 0x3ff
    bgt lbl_fn_805CD170_00001108
    mr r5, r6
lbl_fn_805CD170_00001108:
    extsh r5, r5
    bl fn_805D1880
    addi r26, r26, 0x4
    addi r25, r25, 0x1
lbl_fn_805CD170_00001118:
    lbz r0, 0x4(r28)
    cmpw r25, r0
    blt lbl_fn_805CD170_000010B4
    b lbl_fn_805CD170_00001294
lbl_fn_805CD170_00001128:
    lfs f29, 0x10(r22)
    li r30, 0x0
    b lbl_fn_805CD170_00001190
lbl_fn_805CD170_00001134:
    lwz r3, 0x0(r26)
    lwz r0, 0x4c(r23)
    add r21, r28, r3
    lbzx r3, r28, r3
    extrwi r0, r0, 4, 4
    cmplw r3, r0
    bge lbl_fn_805CD170_00001188
    lwz r0, 0x8(r21)
    fmr f1, f29
    lhz r4, 0x4(r21)
    add r3, r21, r0
    bl fn_805CC9D0
    fmr f31, f1
    lbz r25, 0x1(r21)
    lbz r21, 0x0(r21)
    mr r3, r23
    bl fn_805D1500
    mulli r4, r21, 0x14
    slwi r0, r25, 2
    add r3, r3, r4
    stfsx f31, r3, r0
lbl_fn_805CD170_00001188:
    addi r26, r26, 0x4
    addi r30, r30, 0x1
lbl_fn_805CD170_00001190:
    lbz r0, 0x4(r28)
    cmpw r30, r0
    blt lbl_fn_805CD170_00001134
    b lbl_fn_805CD170_00001294
lbl_fn_805CD170_000011A0:
    lwz r25, 0x14(r22)
    cmpwi r25, 0x0
    beq lbl_fn_805CD170_00001294
    lfs f29, 0x10(r22)
    li r30, 0x0
    b lbl_fn_805CD170_00001210
lbl_fn_805CD170_000011B8:
    lwz r3, 0x0(r26)
    lwz r0, 0x50(r23)
    add r21, r28, r3
    lbzx r3, r28, r3
    srwi r0, r0, 28
    cmplw r3, r0
    bge lbl_fn_805CD170_00001208
    lbz r0, 0x1(r21)
    cmpwi r0, 0x0
    bne lbl_fn_805CD170_00001208
    lwz r0, 0x8(r21)
    fmr f1, f29
    lhz r4, 0x4(r21)
    add r3, r21, r0
    bl fn_805CC8E0
    clrlslwi r0, r3, 16, 2
    lbz r4, 0x0(r21)
    lwzx r5, r25, r0
    mr r3, r23
    bl fn_805D1790
lbl_fn_805CD170_00001208:
    addi r26, r26, 0x4
    addi r30, r30, 0x1
lbl_fn_805CD170_00001210:
    lbz r0, 0x4(r28)
    cmpw r30, r0
    blt lbl_fn_805CD170_000011B8
    b lbl_fn_805CD170_00001294
lbl_fn_805CD170_00001220:
    lfs f29, 0x10(r22)
    li r30, 0x0
    b lbl_fn_805CD170_00001288
lbl_fn_805CD170_0000122C:
    lwz r3, 0x0(r26)
    lwz r0, 0x4c(r23)
    add r25, r28, r3
    lbzx r3, r28, r3
    extrwi r0, r0, 2, 12
    cmplw r3, r0
    bge lbl_fn_805CD170_00001280
    lwz r0, 0x8(r25)
    fmr f1, f29
    lhz r4, 0x4(r25)
    add r3, r25, r0
    bl fn_805CC9D0
    fmr f31, f1
    lbz r21, 0x1(r25)
    lbz r25, 0x0(r25)
    mr r3, r23
    bl fn_805D1540
    mulli r4, r25, 0x14
    slwi r0, r21, 2
    add r3, r3, r4
    stfsx f31, r3, r0
lbl_fn_805CD170_00001280:
    addi r26, r26, 0x4
    addi r30, r30, 0x1
lbl_fn_805CD170_00001288:
    lbz r0, 0x4(r28)
    cmpw r30, r0
    blt lbl_fn_805CD170_0000122C
lbl_fn_805CD170_00001294:
    addi r27, r27, 0x4
    addi r24, r24, 0x1
lbl_fn_805CD170_0000129C:
    lbz r0, 0x14(r29)
    cmpw r24, r0
    blt lbl_fn_805CD170_00001064
    addi r11, r1, 0x40
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    bl _restgpr_21
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_805CD450(void)
{
    nofralloc
    lwz r5, 0x4(r3)
    addi r0, r3, 0x4
    b lbl_fn_805CD450_00001308
    nop
lbl_fn_805CD450_000012F0:
    lwz r3, 0x8(r5)
    cmplw r4, r3
    bne lbl_fn_805CD450_00001304
    mr r3, r5
    blr
lbl_fn_805CD450_00001304:
    lwz r5, 0x0(r5)
lbl_fn_805CD450_00001308:
    cmplw r5, r0
    bne lbl_fn_805CD450_000012F0
    li r3, 0x0
    blr
}

asm void fn_805CD490(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r6, lbl_80798E70@ha
    stw r0, 0x44(r1)
    addi r5, r1, 0x18
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, -0x1
    stw r29, 0x34(r1)
    mr r29, r4
    addi r4, r6, lbl_80798E70@l
    stw r28, 0x30(r1)
    mr r28, r3
    bl fn_80626480
    lis r31, lbl_80798E74@ha
    b lbl_fn_805CD490_000013BC
lbl_fn_805CD490_00001360:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805CD490_000013A0
    lwz r4, 0x14(r1)
    mr r3, r28
    bl fn_80626420
    mr r3, r28
    mr r4, r29
    bl fn_805CD490
    mr r30, r3
    mr r3, r28
    addi r4, r31, lbl_80798E74@l
    bl fn_80626420
    cmpwi r30, -0x1
    bne lbl_fn_805CD490_000013D0
    b lbl_fn_805CD490_000013BC
lbl_fn_805CD490_000013A0:
    lwz r4, 0x14(r1)
    mr r3, r29
    bl fn_8068B104
    cmpwi r3, 0x0
    bne lbl_fn_805CD490_000013BC
    lwz r30, 0xc(r1)
    b lbl_fn_805CD490_000013D0
lbl_fn_805CD490_000013BC:
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    bl fn_80626500
    cmpwi r3, 0x0
    bne lbl_fn_805CD490_00001360
lbl_fn_805CD490_000013D0:
    addi r3, r1, 0x18
    bl fn_806265C0
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805CD570(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, -0x1
    bl fn_80625F90
    cmpwi r3, -0x1
    beq lbl_fn_805CD570_000014E4
    mr r3, r26
    mr r4, r27
    bl fn_80626420
    cmpwi r3, 0x0
    beq lbl_fn_805CD570_000014E4
    cmpwi r28, 0x0
    bne lbl_fn_805CD570_00001468
    mr r3, r26
    mr r4, r29
    bl fn_805CD490
    mr r31, r3
    b lbl_fn_805CD570_000014D4
lbl_fn_805CD570_00001468:
    srwi r3, r28, 24
    srwi r6, r28, 16
    srwi r5, r28, 8
    li r0, 0x0
    stb r3, 0x8(r1)
    mr r3, r26
    addi r4, r1, 0x8
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r28, 0xb(r1)
    stb r0, 0xc(r1)
    bl fn_80625F90
    cmpwi r3, -0x1
    beq lbl_fn_805CD570_000014D4
    mr r3, r26
    addi r4, r1, 0x8
    bl fn_80626420
    cmpwi r3, 0x0
    beq lbl_fn_805CD570_000014D4
    mr r3, r26
    mr r4, r29
    bl fn_80625F90
    lis r4, lbl_80798E74@ha
    mr r31, r3
    mr r3, r26
    addi r4, r4, lbl_80798E74@l
    bl fn_80626420
lbl_fn_805CD570_000014D4:
    lis r4, lbl_80798E74@ha
    mr r3, r26
    addi r4, r4, lbl_80798E74@l
    bl fn_80626420
lbl_fn_805CD570_000014E4:
    cmpwi r31, -0x1
    beq lbl_fn_805CD570_0000152C
    mr r3, r26
    mr r4, r31
    addi r5, r1, 0x10
    bl fn_80625F40
    addi r3, r1, 0x10
    bl fn_806263E0
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_fn_805CD570_0000151C
    addi r3, r1, 0x10
    bl fn_80626400
    stw r3, 0x0(r30)
lbl_fn_805CD570_0000151C:
    addi r3, r1, 0x10
    bl fn_80626410
    mr r3, r31
    b lbl_fn_805CD570_00001530
lbl_fn_805CD570_0000152C:
    li r3, 0x0
lbl_fn_805CD570_00001530:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805CD6C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805D4240
    lis r4, lbl_80798E78@ha
    addi r5, r31, 0x28
    li r0, 0x0
    stw r0, 0x20(r31)
    addi r4, r4, lbl_80798E78@l
    mr r3, r31
    stw r4, 0x0(r31)
    stw r0, 0x24(r31)
    stw r5, 0x28(r31)
    stw r5, 0x2c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CD720(void)
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
    mr r3, r30
    addi r4, r29, 0x4
    bl fn_80625BF0
    cmpwi r3, 0x0
    bne lbl_fn_805CD720_000015F0
    li r3, 0x0
    b lbl_fn_805CD720_00001610
lbl_fn_805CD720_000015F0:
    stw r30, 0x20(r29)
    mr r4, r31
    addi r3, r29, 0x30
    li r5, 0x7f
    bl fn_8068236C
    li r0, 0x0
    stb r0, 0xaf(r29)
    li r3, 0x1
lbl_fn_805CD720_00001610:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CD7A0(void)
{
    nofralloc
    mr r8, r4
    mr r0, r5
    mr r7, r6
    addi r4, r3, 0x30
    mr r5, r8
    mr r6, r0
    addi r3, r3, 0x4
    b fn_805CD570
}

asm void fn_805CD7C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x28
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r31, 0x28(r3)
    b lbl_fn_805CD7C0_00001698
lbl_fn_805CD7C0_00001678:
    mr r3, r29
    addi r4, r31, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805CD7C0_00001694
    lwz r3, 0x88(r31)
    b lbl_fn_805CD7C0_000016A4
lbl_fn_805CD7C0_00001694:
    lwz r31, 0x0(r31)
lbl_fn_805CD7C0_00001698:
    cmplw r31, r30
    bne lbl_fn_805CD7C0_00001678
    li r3, 0x0
lbl_fn_805CD7C0_000016A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CD830(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805D2B50
    lis r4, lbl_80798EF0@ha
    mr r3, r31
    addi r4, r4, lbl_80798EF0@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CD870(void)
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
    beq lbl_fn_805CD870_0000173C
    li r4, 0x0
    bl fn_805D2C70
    cmpwi r31, 0x0
    ble lbl_fn_805CD870_0000173C
    mr r3, r30
    bl dtor_80084684
lbl_fn_805CD870_0000173C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CD8D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0x50(r4)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_805CD8D0_000017BC
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lis r4, 0xff
    mr r3, r31
    addi r0, r4, 0xff
    stw r0, 0x8(r1)
    bl fn_805D3BA0
    stw r4, 0x14(r1)
    addi r4, r31, 0x4c
    addi r5, r1, 0x8
    stw r3, 0x10(r1)
    addi r3, r1, 0x10
    bl fn_805CE550
lbl_fn_805CD8D0_000017BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CD940(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805CD940_000017F8
    cmpwi r4, 0x0
    ble lbl_fn_805CD940_000017F8
    bl dtor_80084684
lbl_fn_805CD940_000017F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CD980(void)
{
    nofralloc
    lis r3, lbl_807CA1C8@ha
    addi r3, r3, lbl_807CA1C8@l
    blr
}

asm void fn_805CD990(void)
{
    nofralloc
    lis r4, lbl_807CA200@ha
    lis r3, lbl_807CA1C8@ha
    addi r4, r4, lbl_807CA200@l
    stw r4, lbl_807CA1C8@l(r3)
    blr
}

asm void fn_805CD9B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x10
    stw r0, 0x14(r1)
    bl fn_80682544
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CD9E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x14
    stw r0, 0x14(r1)
    bl fn_80682544
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CDA10(void)
{
    nofralloc
    lhz r0, 0x4(r3)
    li r4, 0x0
    cmplwi r0, 0xfeff
    bne lbl_fn_805CDA10_000018C0
    lhz r0, 0x6(r3)
    cmplwi r0, 0x8
    bne lbl_fn_805CDA10_000018C0
    li r4, 0x1
lbl_fn_805CDA10_000018C0:
    mr r3, r4
    blr
}

asm void fn_805CDA40(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    li r5, 0x0
    cmplw r4, r0
    bne lbl_fn_805CDA40_000018FC
    lhz r0, 0x4(r3)
    cmplwi r0, 0xfeff
    bne lbl_fn_805CDA40_000018FC
    lhz r0, 0x6(r3)
    cmplwi r0, 0x8
    bne lbl_fn_805CDA40_000018FC
    li r5, 0x1
lbl_fn_805CDA40_000018FC:
    mr r3, r5
    blr
}

asm void fn_805CDA80(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    stb r0, 0x1(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_805CDAA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805CDAA0_0000196C
    lis r3, lbl_807CA1F8@ha
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
    li r0, 0x0
    stw r0, 0x4(r31)
    stb r0, 0x0(r31)
    stb r0, 0x1(r31)
lbl_fn_805CDAA0_0000196C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CDAF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x0(r3)
    cmplw r0, r4
    bge lbl_fn_805CDAF0_000019F0
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805CDAF0_000019D0
    lis r3, lbl_807CA1F8@ha
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
    li r0, 0x0
    stw r0, 0x4(r30)
    stb r0, 0x0(r30)
    stb r0, 0x1(r30)
lbl_fn_805CDAF0_000019D0:
    lis r3, lbl_807CA1F8@ha
    clrlslwi r4, r31, 24, 5
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    stw r3, 0x4(r30)
    beq lbl_fn_805CDAF0_000019F0
    stb r31, 0x0(r30)
lbl_fn_805CDAF0_000019F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
