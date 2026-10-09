#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void fn_805E09B0(void);
extern void fn_805E1300(void);
extern void fn_805E1330(void);
extern void fn_805E1370(void);
extern void fn_805E13B0(void);
extern void fn_805E2FC0(void);
extern void fn_805E3030(void);
extern void fn_805E3570(void);
extern void fn_805E35B0(void);
extern void fn_805E3660(void);
extern void fn_805E3670(void);
extern void fn_80607DD0(void);
extern void fn_80608020(void);
extern void fn_806080A0(void);
extern void fn_8068AEB0(void);

/* External data declarations */
extern u8 lbl_80764648[];
extern u8 lbl_8079A738[];
extern u8 lbl_8079B2C8[];
extern u8 lbl_8079B4C8[];
extern u8 lbl_8079B6C8[];
extern u8 lbl_807CA268[];
extern u8 lbl_807CA278[];
extern u8 lbl_807CA2DC[];
extern u8 lbl_807CA928[];
extern u8 lbl_807CA92C[];
extern u8 lbl_807CADF0[];

/* Small data declarations */

/* Function declarations */
void fn_805E1430(void);
void fn_805E1470(void);
void fn_805E1F70(void);
void fn_805E1FD0(void);
void fn_805E1FF0(void);
void fn_805E2020(void);
void fn_805E2050(void);
void fn_805E20E0(void);
void fn_805E21C0(void);
void fn_805E21E0(void);
void fn_805E2250(void);
void fn_805E23E0(void);
void fn_805E2490(void);
void fn_805E24E0(void);
void fn_805E24F0(void);
void fn_805E25D0(void);
void fn_805E2800(void);
void fn_805E2920(void);
void fn_805E2990(void);
void fn_805E2C60(void);
void fn_805E2D70(void);
void fn_805E2DA0(void);
void fn_805E2DC0(void);
void fn_805E2DE0(void);
void fn_805E2E10(void);

asm void fn_805E1430(void)
{
    nofralloc
    lis r5, lbl_807CA278@ha
    lwz r0, 0x18(r3)
    addi r5, r5, lbl_807CA278@l
    lis r3, lbl_807CA2DC@ha
    lbzx r0, r5, r0
    lwz r3, lbl_807CA2DC@l(r3)
    extsb r0, r0
    mulli r0, r0, 0x64
    add r3, r3, r0
    stw r4, 0x14(r3)
    lwz r0, 0x4(r3)
    oris r0, r0, 0x4000
    stw r0, 0x4(r3)
    blr
}

asm void fn_805E1470(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r6, lbl_807CA268@ha
    addi r6, r6, lbl_807CA268@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x6b8(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805E1470_00000B24
    lis r3, lbl_8079A738@ha
    li r8, 0x10
    addi r4, r3, lbl_8079A738@l
    li r7, 0x0
    lis r5, 0x1
    li r0, 0x0
    lis r3, 0x2aab
    mtctr r8
    nop
lbl_fn_805E1470_00000088:
    lwz r10, 0x74(r6)
    li r9, 0x0
    lwzux r11, r10, r7
    li r8, 0x0
    cmpwi r11, 0x0
    beq lbl_fn_805E1470_00000B1C
    lwz r29, 0x4(r10)
    li r12, 0x0
    rlwinm. r29, r29, 0, 2, 2
    beq lbl_fn_805E1470_000000C8
    lhz r29, 0x32(r10)
    li r9, 0x1
    sth r29, 0x30(r10)
    lwz r29, 0x4(r10)
    rlwinm r29, r29, 0, 3, 1
    stw r29, 0x4(r10)
lbl_fn_805E1470_000000C8:
    lwz r29, 0x4(r10)
    rlwinm. r29, r29, 0, 3, 3
    beq lbl_fn_805E1470_0000011C
    lwz r9, 0x8(r10)
    cmpwi r9, -0x388
    bgt lbl_fn_805E1470_000000E8
    li r9, 0x0
    b lbl_fn_805E1470_00000104
lbl_fn_805E1470_000000E8:
    cmpwi r9, 0x3c
    blt lbl_fn_805E1470_000000F8
    subi r9, r5, 0x9c
    b lbl_fn_805E1470_00000104
lbl_fn_805E1470_000000F8:
    slwi r9, r9, 1
    add r9, r4, r9
    lhz r9, 0x710(r9)
lbl_fn_805E1470_00000104:
    sth r9, 0x32(r10)
    li r9, 0x1
    lwz r29, 0x4(r10)
    rlwinm r29, r29, 0, 4, 2
    oris r29, r29, 0x2000
    stw r29, 0x4(r10)
lbl_fn_805E1470_0000011C:
    lwz r29, 0x4(r10)
    clrrwi. r29, r29, 31
    beq lbl_fn_805E1470_00000198
    lhz r29, 0x36(r10)
    li r8, 0x1
    sth r29, 0x34(r10)
    lhz r29, 0x3a(r10)
    sth r29, 0x38(r10)
    lhz r29, 0x3e(r10)
    sth r29, 0x3c(r10)
    lhz r29, 0x42(r10)
    sth r29, 0x40(r10)
    lhz r29, 0x46(r10)
    sth r29, 0x44(r10)
    lhz r29, 0x4a(r10)
    sth r29, 0x48(r10)
    lhz r29, 0x4e(r10)
    sth r29, 0x4c(r10)
    lhz r29, 0x52(r10)
    sth r29, 0x50(r10)
    lhz r29, 0x56(r10)
    sth r29, 0x54(r10)
    lhz r29, 0x5a(r10)
    sth r29, 0x58(r10)
    lhz r29, 0x5e(r10)
    sth r29, 0x5c(r10)
    lhz r29, 0x62(r10)
    sth r29, 0x60(r10)
    lwz r29, 0x4(r10)
    clrlwi r29, r29, 1
    stw r29, 0x4(r10)
lbl_fn_805E1470_00000198:
    lwz r29, 0x4(r10)
    rlwinm. r29, r29, 0, 1, 1
    beq lbl_fn_805E1470_00000794
    lwz r8, 0x70(r6)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_000001C4
    cmplwi r8, 0x1
    beq lbl_fn_805E1470_00000368
    cmplwi r8, 0x2
    beq lbl_fn_805E1470_0000052C
    b lbl_fn_805E1470_00000780
lbl_fn_805E1470_000001C4:
    lwz r29, 0x14(r10)
    lwz r8, 0x20(r10)
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_000001E0
    li r8, 0x0
    b lbl_fn_805E1470_000001FC
lbl_fn_805E1470_000001E0:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_000001F0
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_000001FC
lbl_fn_805E1470_000001F0:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_000001FC:
    sth r8, 0x36(r10)
    lwz r29, 0x14(r10)
    lwz r8, 0x20(r10)
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_0000021C
    li r8, 0x0
    b lbl_fn_805E1470_00000238
lbl_fn_805E1470_0000021C:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_0000022C
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_00000238
lbl_fn_805E1470_0000022C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_00000238:
    sth r8, 0x3a(r10)
    lwz r29, 0x14(r10)
    lwz r8, 0x24(r10)
    add r8, r29, r8
    subi r8, r8, 0x1e
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_0000025C
    li r8, 0x0
    b lbl_fn_805E1470_00000278
lbl_fn_805E1470_0000025C:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_0000026C
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_00000278
lbl_fn_805E1470_0000026C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_00000278:
    sth r8, 0x3e(r10)
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0xc(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_000002A0
    li r8, 0x0
    b lbl_fn_805E1470_000002BC
lbl_fn_805E1470_000002A0:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_000002B0
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_000002BC
lbl_fn_805E1470_000002B0:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_000002BC:
    sth r8, 0x42(r10)
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0xc(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_000002E4
    li r8, 0x0
    b lbl_fn_805E1470_00000300
lbl_fn_805E1470_000002E4:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_000002F4
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_00000300
lbl_fn_805E1470_000002F4:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_00000300:
    sth r8, 0x46(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    lwz r29, 0x24(r10)
    add r8, r30, r8
    add r8, r8, r29
    subi r8, r8, 0x1e
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_0000032C
    li r8, 0x0
    b lbl_fn_805E1470_00000348
lbl_fn_805E1470_0000032C:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_0000033C
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_00000348
lbl_fn_805E1470_0000033C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_00000348:
    sth r8, 0x4a(r10)
    sth r0, 0x4e(r10)
    sth r0, 0x52(r10)
    sth r0, 0x56(r10)
    sth r0, 0x5a(r10)
    sth r0, 0x5e(r10)
    sth r0, 0x62(r10)
    b lbl_fn_805E1470_00000780
lbl_fn_805E1470_00000368:
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x18(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_0000038C
    li r8, 0x0
    b lbl_fn_805E1470_000003A8
lbl_fn_805E1470_0000038C:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_0000039C
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_000003A8
lbl_fn_805E1470_0000039C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_000003A8:
    sth r8, 0x36(r10)
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x1c(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_000003D0
    li r8, 0x0
    b lbl_fn_805E1470_000003EC
lbl_fn_805E1470_000003D0:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_000003E0
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_000003EC
lbl_fn_805E1470_000003E0:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_000003EC:
    sth r8, 0x3a(r10)
    lwz r29, 0x14(r10)
    lwz r8, 0x24(r10)
    add r8, r29, r8
    subi r8, r8, 0x1e
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_00000410
    li r8, 0x0
    b lbl_fn_805E1470_0000042C
lbl_fn_805E1470_00000410:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_00000420
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_0000042C
lbl_fn_805E1470_00000420:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_0000042C:
    sth r8, 0x3e(r10)
    lwz r31, 0x20(r10)
    lwz r29, 0x18(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_0000045C
    li r8, 0x0
    b lbl_fn_805E1470_00000478
lbl_fn_805E1470_0000045C:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_0000046C
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_00000478
lbl_fn_805E1470_0000046C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_00000478:
    sth r8, 0x42(r10)
    lwz r31, 0x20(r10)
    lwz r29, 0x1c(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_000004A8
    li r8, 0x0
    b lbl_fn_805E1470_000004C4
lbl_fn_805E1470_000004A8:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_000004B8
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_000004C4
lbl_fn_805E1470_000004B8:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_000004C4:
    sth r8, 0x46(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    lwz r29, 0x24(r10)
    add r8, r30, r8
    add r8, r8, r29
    subi r8, r8, 0x1e
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_000004F0
    li r8, 0x0
    b lbl_fn_805E1470_0000050C
lbl_fn_805E1470_000004F0:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_00000500
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_0000050C
lbl_fn_805E1470_00000500:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_0000050C:
    sth r8, 0x4a(r10)
    sth r0, 0x4e(r10)
    sth r0, 0x52(r10)
    sth r0, 0x56(r10)
    sth r0, 0x5a(r10)
    sth r0, 0x5e(r10)
    sth r0, 0x62(r10)
    b lbl_fn_805E1470_00000780
lbl_fn_805E1470_0000052C:
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x18(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_00000550
    li r8, 0x0
    b lbl_fn_805E1470_0000056C
lbl_fn_805E1470_00000550:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_00000560
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_0000056C
lbl_fn_805E1470_00000560:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_0000056C:
    sth r8, 0x36(r10)
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x1c(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_00000594
    li r8, 0x0
    b lbl_fn_805E1470_000005B0
lbl_fn_805E1470_00000594:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_000005A4
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_000005B0
lbl_fn_805E1470_000005A4:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_000005B0:
    sth r8, 0x3a(r10)
    lwz r30, 0x24(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x28(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_000005D8
    li r8, 0x0
    b lbl_fn_805E1470_000005F4
lbl_fn_805E1470_000005D8:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_000005E8
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_000005F4
lbl_fn_805E1470_000005E8:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_000005F4:
    sth r8, 0x3e(r10)
    lwz r30, 0x24(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x2c(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_0000061C
    li r8, 0x0
    b lbl_fn_805E1470_00000638
lbl_fn_805E1470_0000061C:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_0000062C
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_00000638
lbl_fn_805E1470_0000062C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_00000638:
    sth r8, 0x5a(r10)
    lwz r31, 0x20(r10)
    lwz r29, 0x18(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_00000668
    li r8, 0x0
    b lbl_fn_805E1470_00000684
lbl_fn_805E1470_00000668:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_00000678
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_00000684
lbl_fn_805E1470_00000678:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_00000684:
    sth r8, 0x42(r10)
    lwz r31, 0x20(r10)
    lwz r29, 0x1c(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_000006B4
    li r8, 0x0
    b lbl_fn_805E1470_000006D0
lbl_fn_805E1470_000006B4:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_000006C4
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_000006D0
lbl_fn_805E1470_000006C4:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_000006D0:
    sth r8, 0x46(r10)
    lwz r31, 0x24(r10)
    lwz r29, 0x28(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_00000700
    li r8, 0x0
    b lbl_fn_805E1470_0000071C
lbl_fn_805E1470_00000700:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_00000710
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_0000071C
lbl_fn_805E1470_00000710:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_0000071C:
    sth r8, 0x4a(r10)
    lwz r29, 0x24(r10)
    lwz r30, 0x2c(r10)
    lwz r31, 0x14(r10)
    lwz r8, 0xc(r10)
    add r30, r29, r30
    add r8, r31, r8
    add r8, r30, r8
    cmpwi r8, -0x388
    bgt lbl_fn_805E1470_0000074C
    li r8, 0x0
    b lbl_fn_805E1470_00000768
lbl_fn_805E1470_0000074C:
    cmpwi r8, 0x3c
    blt lbl_fn_805E1470_0000075C
    subi r8, r5, 0x9c
    b lbl_fn_805E1470_00000768
lbl_fn_805E1470_0000075C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_fn_805E1470_00000768:
    sth r8, 0x5e(r10)
    oris r12, r12, 0x8000
    sth r0, 0x4e(r10)
    sth r0, 0x52(r10)
    sth r0, 0x56(r10)
    sth r0, 0x62(r10)
lbl_fn_805E1470_00000780:
    lwz r30, 0x4(r10)
    li r8, 0x1
    rlwinm r30, r30, 0, 2, 0
    oris r30, r30, 0x8000
    stw r30, 0x4(r10)
lbl_fn_805E1470_00000794:
    cmpwi r9, 0x0
    beq lbl_fn_805E1470_000007D4
    lhz r9, 0x30(r10)
    subi r30, r3, 0x5555
    sth r9, 0x92(r11)
    lhz r31, 0x30(r10)
    lhz r9, 0x32(r10)
    subf r9, r31, r9
    mulhw r9, r30, r9
    srawi r9, r9, 4
    srwi r31, r9, 31
    add r9, r9, r31
    sth r9, 0x94(r11)
    lwz r9, 0x1c(r11)
    ori r9, r9, 0x100
    stw r9, 0x1c(r11)
lbl_fn_805E1470_000007D4:
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000B1C
    lhz r8, 0x34(r10)
    sth r8, 0x3c(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_000007F0
    ori r12, r12, 0x1
lbl_fn_805E1470_000007F0:
    lhz r9, 0x34(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x36(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x3e(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_00000820
    ori r12, r12, 0x4
lbl_fn_805E1470_00000820:
    lhz r8, 0x38(r10)
    sth r8, 0x40(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000834
    ori r12, r12, 0x2
lbl_fn_805E1470_00000834:
    lhz r9, 0x38(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x3a(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x42(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_00000864
    ori r12, r12, 0x4
lbl_fn_805E1470_00000864:
    lhz r8, 0x40(r10)
    sth r8, 0x44(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000878
    oris r12, r12, 0x1
lbl_fn_805E1470_00000878:
    lhz r9, 0x40(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x42(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x46(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_000008A8
    oris r12, r12, 0x4
lbl_fn_805E1470_000008A8:
    lhz r8, 0x44(r10)
    sth r8, 0x48(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_000008BC
    oris r12, r12, 0x2
lbl_fn_805E1470_000008BC:
    lhz r9, 0x44(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x46(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x4a(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_000008EC
    oris r12, r12, 0x4
lbl_fn_805E1470_000008EC:
    lhz r8, 0x4c(r10)
    sth r8, 0x4c(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000900
    oris r12, r12, 0x20
lbl_fn_805E1470_00000900:
    lhz r9, 0x4c(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x4e(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x4e(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_00000930
    oris r12, r12, 0x80
lbl_fn_805E1470_00000930:
    lhz r8, 0x50(r10)
    sth r8, 0x50(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000944
    oris r12, r12, 0x40
lbl_fn_805E1470_00000944:
    lhz r9, 0x50(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x52(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x52(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_00000974
    oris r12, r12, 0x80
lbl_fn_805E1470_00000974:
    lhz r8, 0x58(r10)
    sth r8, 0x54(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000988
    oris r12, r12, 0x400
lbl_fn_805E1470_00000988:
    lhz r9, 0x58(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x5a(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x56(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_000009B8
    oris r12, r12, 0x1000
lbl_fn_805E1470_000009B8:
    lhz r8, 0x5c(r10)
    sth r8, 0x58(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_000009CC
    oris r12, r12, 0x800
lbl_fn_805E1470_000009CC:
    lhz r9, 0x5c(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x5e(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x5a(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_000009FC
    oris r12, r12, 0x1000
lbl_fn_805E1470_000009FC:
    lhz r8, 0x3c(r10)
    sth r8, 0x5c(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000A10
    ori r12, r12, 0x8
lbl_fn_805E1470_00000A10:
    lhz r9, 0x3c(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x3e(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x5e(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_00000A40
    ori r12, r12, 0x10
lbl_fn_805E1470_00000A40:
    lhz r8, 0x48(r10)
    sth r8, 0x60(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000A54
    oris r12, r12, 0x8
lbl_fn_805E1470_00000A54:
    lhz r9, 0x48(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x4a(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x62(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_00000A84
    oris r12, r12, 0x10
lbl_fn_805E1470_00000A84:
    lhz r8, 0x54(r10)
    sth r8, 0x64(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000A98
    oris r12, r12, 0x100
lbl_fn_805E1470_00000A98:
    lhz r9, 0x54(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x56(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x66(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_00000AC8
    oris r12, r12, 0x200
lbl_fn_805E1470_00000AC8:
    lhz r8, 0x60(r10)
    sth r8, 0x68(r11)
    cmpwi r8, 0x0
    beq lbl_fn_805E1470_00000ADC
    oris r12, r12, 0x2000
lbl_fn_805E1470_00000ADC:
    lhz r9, 0x60(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x62(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r8, r8, r9
    sth r8, 0x6a(r11)
    clrlwi. r8, r8, 16
    beq lbl_fn_805E1470_00000B0C
    oris r12, r12, 0x4000
lbl_fn_805E1470_00000B0C:
    stw r12, 0x34(r11)
    lwz r8, 0x1c(r11)
    ori r8, r8, 0x12
    stw r8, 0x1c(r11)
lbl_fn_805E1470_00000B1C:
    addi r7, r7, 0x64
    bdnz lbl_fn_805E1470_00000088
lbl_fn_805E1470_00000B24:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_805E1F70(void)
{
    nofralloc
    lis r4, lbl_807CA268@ha
    li r0, 0x10
    addi r4, r4, lbl_807CA268@l
    li r6, 0x0
    mtctr r0
    nop
lbl_fn_805E1F70_00000B58:
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bge lbl_fn_805E1F70_00000B84
    lis r5, lbl_807CA268@ha
    lis r4, lbl_807CA278@ha
    addi r5, r5, lbl_807CA268@l
    addi r4, r4, lbl_807CA278@l
    stbx r3, r5, r6
    stbx r6, r4, r3
    mr r3, r6
    blr
lbl_fn_805E1F70_00000B84:
    addi r4, r4, 0x1
    addi r6, r6, 0x1
    bdnz lbl_fn_805E1F70_00000B58
    li r3, -0x1
    blr
}

asm void fn_805E1FD0(void)
{
    nofralloc
    lis r4, lbl_807CA278@ha
    addi r4, r4, lbl_807CA278@l
    lbzx r3, r4, r3
    extsb r3, r3
    blr
}

asm void fn_805E1FF0(void)
{
    nofralloc
    lis r5, lbl_807CA268@ha
    lis r4, lbl_807CA278@ha
    addi r5, r5, lbl_807CA268@l
    li r0, -0x1
    lbzx r6, r5, r3
    addi r4, r4, lbl_807CA278@l
    extsb r6, r6
    stbx r0, r5, r3
    stbx r0, r4, r6
    blr
}

asm void fn_805E2020(void)
{
    nofralloc
    lis r5, lbl_807CA278@ha
    addi r5, r5, lbl_807CA278@l
    lbzx r6, r5, r3
    extsb. r6, r6
    bltlr
    lis r4, lbl_807CA268@ha
    li r0, -0x1
    addi r4, r4, lbl_807CA268@l
    stbx r0, r5, r3
    stbx r0, r4, r6
    blr
}

asm void fn_805E2050(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, lbl_807CA928@ha
    li r5, 0x0
    lwz r6, lbl_807CA928@l(r4)
    li r4, 0x0
    b lbl_fn_805E2050_00000C78
    nop
lbl_fn_805E2050_00000C50:
    cmplw r6, r31
    beq lbl_fn_805E2050_00000C74
    cmpwi r5, 0x0
    beq lbl_fn_805E2050_00000C6C
    stw r6, 0x0(r4)
    mr r4, r6
    b lbl_fn_805E2050_00000C74
lbl_fn_805E2050_00000C6C:
    mr r4, r6
    mr r5, r6
lbl_fn_805E2050_00000C74:
    lwz r6, 0x0(r6)
lbl_fn_805E2050_00000C78:
    cmpwi r6, 0x0
    bne lbl_fn_805E2050_00000C50
    cmpwi r4, 0x0
    beq lbl_fn_805E2050_00000C90
    li r0, 0x0
    stw r0, 0x0(r4)
lbl_fn_805E2050_00000C90:
    lis r4, lbl_807CA928@ha
    stw r5, lbl_807CA928@l(r4)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E20E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807CA928@ha
    addi r31, r31, lbl_807CA928@l
    bl fn_80607DD0
    cmpwi r3, 0x0
    beq lbl_fn_805E20E0_00000D74
    lwz r0, 0x4c8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805E20E0_00000D74
    addi r3, r31, 0x8
    stw r3, 0x4(r31)
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x8(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x54(r3)
    lwz r3, 0x4(r31)
    stw r4, 0xa0(r3)
    lwz r3, 0x4(r31)
    stw r4, 0xec(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x138(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x184(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x1d0(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x21c(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x268(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x2b4(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x300(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x34c(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x398(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x3e4(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x430(r3)
    lwz r3, 0x4(r31)
    stw r4, 0x47c(r3)
    stw r4, 0x0(r31)
    stw r0, 0x4c8(r31)
lbl_fn_805E20E0_00000D74:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E21C0(void)
{
    nofralloc
    lis r4, lbl_807CA92C@ha
    lis r3, lbl_807CADF0@ha
    li r0, 0x0
    stw r0, lbl_807CA92C@l(r4)
    stw r0, lbl_807CADF0@l(r3)
    blr
}

asm void fn_805E21E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807CADF0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_807CADF0@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E21E0_00000E08
    li r31, 0x0
lbl_fn_805E21E0_00000DD4:
    mr r3, r31
    bl fn_805E3670
    addi r31, r31, 0x1
    cmpwi r31, 0x10
    blt lbl_fn_805E21E0_00000DD4
    lis r3, lbl_807CA928@ha
    lwz r31, lbl_807CA928@l(r3)
    b lbl_fn_805E21E0_00000E00
lbl_fn_805E21E0_00000DF4:
    mr r3, r31
    bl fn_805E2920
    lwz r31, 0x0(r31)
lbl_fn_805E21E0_00000E00:
    cmpwi r31, 0x0
    bne lbl_fn_805E21E0_00000DF4
lbl_fn_805E21E0_00000E08:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E2250(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r7, r5, 0x8000
    stw r0, 0x14(r1)
    srwi r5, r7, 1
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    li r30, 0x0
    lwz r0, 0x0(r4)
    add r0, r4, r0
    stw r0, 0x4(r3)
    slwi r0, r7, 1
    lwz r6, 0x4(r4)
    add r6, r4, r6
    stw r6, 0x8(r3)
    lwz r6, 0x8(r4)
    add r6, r4, r6
    stw r6, 0xc(r3)
    lwz r6, 0xc(r4)
    add r6, r4, r6
    stw r6, 0x10(r3)
    lwz r6, 0x10(r4)
    add r6, r4, r6
    stw r6, 0x14(r3)
    lwz r6, 0x14(r4)
    add r4, r4, r6
    stw r4, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r7, 0x20(r3)
    stw r0, 0x24(r3)
    stw r30, 0x68(r3)
    bl fn_805E24F0
    addi r0, r31, 0xfc
    stw r0, 0x3fc(r31)
    mr r3, r31
    li r5, 0x0
    stw r30, 0x400(r31)
    li r0, 0x4
    stw r30, 0x404(r31)
lbl_fn_805E2250_00000EC0:
    mr r4, r3
    mtctr r0
lbl_fn_805E2250_00000EC8:
    stw r30, 0x408(r4)
    stw r30, 0x40c(r4)
    stw r30, 0x410(r4)
    stw r30, 0x414(r4)
    stw r30, 0x418(r4)
    stw r30, 0x41c(r4)
    stw r30, 0x420(r4)
    stw r30, 0x424(r4)
    stw r30, 0x428(r4)
    stw r30, 0x42c(r4)
    stw r30, 0x430(r4)
    stw r30, 0x434(r4)
    stw r30, 0x438(r4)
    stw r30, 0x43c(r4)
    stw r30, 0x440(r4)
    stw r30, 0x444(r4)
    stw r30, 0x448(r4)
    stw r30, 0x44c(r4)
    stw r30, 0x450(r4)
    stw r30, 0x454(r4)
    stw r30, 0x458(r4)
    stw r30, 0x45c(r4)
    stw r30, 0x460(r4)
    stw r30, 0x464(r4)
    stw r30, 0x468(r4)
    stw r30, 0x46c(r4)
    stw r30, 0x470(r4)
    stw r30, 0x474(r4)
    stw r30, 0x478(r4)
    stw r30, 0x47c(r4)
    stw r30, 0x480(r4)
    stw r30, 0x484(r4)
    addi r4, r4, 0x80
    bdnz lbl_fn_805E2250_00000EC8
    addi r5, r5, 0x1
    addi r3, r3, 0x200
    cmplwi r5, 0x10
    blt lbl_fn_805E2250_00000EC0
    bl OSDisableInterrupts
    lis r4, lbl_807CA928@ha
    lwz r0, lbl_807CA928@l(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805E2250_00000F7C
    stw r0, 0x0(r31)
    b lbl_fn_805E2250_00000F84
lbl_fn_805E2250_00000F7C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805E2250_00000F84:
    lis r4, lbl_807CA928@ha
    stw r31, lbl_807CA928@l(r4)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E23E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    bl OSDisableInterrupts
    lwz r0, 0x404(r25)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_805E23E0_00001030
    li r28, 0x0
    li r29, 0x0
    li r31, 0x0
    lis r30, lbl_807CA92C@ha
lbl_fn_805E23E0_00000FEC:
    lwz r0, lbl_807CA92C@l(r30)
    add r26, r0, r29
    lwz r0, 0x8(r26)
    cmplw r0, r25
    bne lbl_fn_805E23E0_00001020
    lwz r3, 0x4(r26)
    bl fn_805E1300
    lwz r3, 0x4(r26)
    lwz r3, 0x18(r3)
    bl fn_805E2020
    lwz r3, 0x4(r26)
    bl fn_80608020
    stw r31, 0x8(r26)
lbl_fn_805E23E0_00001020:
    addi r28, r28, 0x1
    addi r29, r29, 0x4c
    cmpwi r28, 0x10
    blt lbl_fn_805E23E0_00000FEC
lbl_fn_805E23E0_00001030:
    mr r3, r25
    bl fn_805E2050
    mr r3, r27
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E2490(void)
{
    nofralloc
    lwz r5, 0x3fc(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x0(r5)
    lwz r5, 0x3fc(r3)
    addi r5, r5, 0x1
    stw r5, 0x3fc(r3)
    lbz r0, 0x1(r4)
    stb r0, 0x0(r5)
    lwz r5, 0x3fc(r3)
    addi r5, r5, 0x1
    stw r5, 0x3fc(r3)
    lbz r0, 0x2(r4)
    stb r0, 0x0(r5)
    lwz r5, 0x3fc(r3)
    lwz r4, 0x400(r3)
    addi r0, r5, 0x1
    stw r0, 0x3fc(r3)
    addi r0, r4, 0x1
    stw r0, 0x400(r3)
    blr
}

asm void fn_805E24E0(void)
{
    nofralloc
    slwi r0, r4, 16
    stw r0, 0x68(r3)
    blr
}

asm void fn_805E24F0(void)
{
    nofralloc
    lis r5, lbl_8079B4C8@ha
    li r0, 0x2
    addi r4, r5, lbl_8079B4C8@l
    lwz r7, lbl_8079B4C8@l(r5)
    lwz r6, 0x190(r4)
    li r9, 0x0
    li r4, 0x40
    mtctr r0
lbl_fn_805E24F0_000010E0:
    clrlslwi r5, r9, 24, 2
    clrlwi r0, r9, 24
    add r8, r3, r5
    lwz r5, 0x8(r3)
    stw r5, 0x28(r8)
    add r5, r3, r0
    addi r9, r9, 0x8
    stw r6, 0x6c(r8)
    stb r4, 0xec(r5)
    stw r7, 0xac(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x2c(r8)
    stw r6, 0x70(r8)
    stb r4, 0xed(r5)
    stw r7, 0xb0(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x30(r8)
    stw r6, 0x74(r8)
    stb r4, 0xee(r5)
    stw r7, 0xb4(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x34(r8)
    stw r6, 0x78(r8)
    stb r4, 0xef(r5)
    stw r7, 0xb8(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x38(r8)
    stw r6, 0x7c(r8)
    stb r4, 0xf0(r5)
    stw r7, 0xbc(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x3c(r8)
    stw r6, 0x80(r8)
    stb r4, 0xf1(r5)
    stw r7, 0xc0(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x40(r8)
    stw r6, 0x84(r8)
    stb r4, 0xf2(r5)
    stw r7, 0xc4(r8)
    lwz r0, 0x8(r3)
    stw r0, 0x44(r8)
    stw r6, 0x88(r8)
    stb r4, 0xf3(r5)
    stw r7, 0xc8(r8)
    bdnz lbl_fn_805E24F0_000010E0
    blr
}

asm void fn_805E25D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r6, 0x0
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    beq lbl_fn_805E25D0_0000138C
    clrlslwi r0, r4, 24, 9
    clrlslwi r31, r5, 24, 2
    add r3, r3, r0
    addi r30, r3, 0x408
    lwzx r3, r30, r31
    cmpwi r3, 0x0
    beq lbl_fn_805E25D0_000011F4
    bl fn_805E3660
    li r0, 0x0
    stwx r0, r30, r31
lbl_fn_805E25D0_000011F4:
    lis r4, fn_805E35B0@ha
    mr r5, r23
    addi r4, r4, fn_805E35B0@l
    li r3, 0x1f
    bl fn_806080A0
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_805E25D0_000013B4
    lwz r3, 0x18(r3)
    bl fn_805E1F70
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_fn_805E25D0_00001380
    lis r5, lbl_807CA92C@ha
    clrlslwi r0, r24, 24, 2
    mulli r4, r3, 0x4c
    lwz r5, lbl_807CA92C@l(r5)
    add r3, r23, r0
    clrlslwi r0, r25, 24, 1
    add r27, r5, r4
    stw r29, 0x4(r27)
    stw r23, 0x8(r27)
    stb r24, 0xc(r27)
    stb r25, 0xd(r27)
    stb r26, 0xe(r27)
    lwz r3, 0x28(r3)
    lhzx r0, r3, r0
    cmplwi r0, 0xffff
    bne lbl_fn_805E25D0_00001270
    li r5, 0x0
    b lbl_fn_805E25D0_000012C0
lbl_fn_805E25D0_00001270:
    mulli r0, r0, 0x18
    lwz r3, 0xc(r23)
    li r5, 0x1
    add r4, r3, r0
    stw r4, 0x10(r27)
    lwz r0, 0x10(r4)
    lwz r3, 0x10(r23)
    mulli r0, r0, 0x50
    add r0, r3, r0
    stw r0, 0x14(r27)
    lwz r0, 0x14(r4)
    lwz r3, 0x14(r23)
    slwi r0, r0, 4
    add r3, r3, r0
    stw r3, 0x18(r27)
    lhz r0, 0xc(r3)
    lwz r3, 0x18(r23)
    mulli r0, r0, 0x2e
    add r0, r3, r0
    stw r0, 0x1c(r27)
lbl_fn_805E25D0_000012C0:
    cmpwi r5, 0x0
    beq lbl_fn_805E25D0_0000135C
    stwx r27, r30, r31
    mr r3, r27
    lwz r4, 0x404(r23)
    addi r0, r4, 0x1
    stw r0, 0x404(r23)
    bl fn_805E2FC0
    mr r3, r27
    bl fn_805E2D70
    mr r3, r27
    bl fn_805E2DA0
    mr r3, r27
    bl fn_805E2990
    mr r3, r27
    bl fn_805E2DE0
    mr r25, r3
    mr r3, r27
    bl fn_805E2DC0
    clrlslwi r0, r24, 24, 2
    mr r4, r3
    add r6, r23, r0
    add r5, r23, r24
    lwz r0, 0xac(r6)
    mr r3, r29
    lbz r6, 0xec(r5)
    mr r7, r25
    srawi r5, r0, 16
    bl fn_805E09B0
    mr r3, r27
    bl fn_805E3570
    mr r3, r27
    bl fn_805E3030
    li r0, 0x1
    sth r0, 0x38(r29)
    lwz r0, 0x1c(r29)
    ori r0, r0, 0x4
    stw r0, 0x1c(r29)
    b lbl_fn_805E25D0_000013B4
lbl_fn_805E25D0_0000135C:
    li r0, 0x0
    stw r0, 0x8(r27)
    mr r3, r29
    bl fn_805E1300
    mr r3, r28
    bl fn_805E1FF0
    mr r3, r29
    bl fn_80608020
    b lbl_fn_805E25D0_000013B4
lbl_fn_805E25D0_00001380:
    mr r3, r29
    bl fn_80608020
    b lbl_fn_805E25D0_000013B4
lbl_fn_805E25D0_0000138C:
    clrlslwi r4, r4, 24, 9
    clrlslwi r0, r5, 24, 2
    add r3, r3, r4
    add r23, r3, r0
    lwz r3, 0x408(r23)
    cmpwi r3, 0x0
    beq lbl_fn_805E25D0_000013B4
    bl fn_805E3660
    li r0, 0x0
    stw r0, 0x408(r23)
lbl_fn_805E25D0_000013B4:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E2800(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, 0x0(r4)
    lbz r5, 0x1(r4)
    srawi r6, r0, 4
    clrlwi r7, r0, 28
    cmpwi r6, 0x8
    beq lbl_fn_805E2800_00001418
    clrlwi r0, r6, 24
    cmpwi r0, 0x9
    beq lbl_fn_805E2800_00001444
    cmpwi r0, 0xb
    beq lbl_fn_805E2800_00001454
    cmpwi r0, 0xc
    beq lbl_fn_805E2800_000014C0
    b lbl_fn_805E2800_000014D8
lbl_fn_805E2800_00001418:
    clrlslwi r4, r7, 24, 9
    clrlslwi r0, r5, 24, 2
    add r3, r3, r4
    add r31, r3, r0
    lwz r3, 0x408(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805E2800_000014D8
    bl fn_805E3660
    li r0, 0x0
    stw r0, 0x408(r31)
    b lbl_fn_805E2800_000014D8
lbl_fn_805E2800_00001444:
    lbz r6, 0x2(r4)
    mr r4, r7
    bl fn_805E25D0
    b lbl_fn_805E2800_000014D8
lbl_fn_805E2800_00001454:
    cmpwi r5, 0x7
    lbz r6, 0x2(r4)
    beq lbl_fn_805E2800_00001474
    cmpwi r5, 0xa
    beq lbl_fn_805E2800_00001494
    cmpwi r5, 0x5b
    beq lbl_fn_805E2800_000014A0
    b lbl_fn_805E2800_000014D8
lbl_fn_805E2800_00001474:
    lis r4, lbl_8079B4C8@ha
    clrlslwi r0, r7, 24, 2
    clrlslwi r5, r6, 24, 2
    addi r4, r4, lbl_8079B4C8@l
    add r3, r3, r0
    lwzx r0, r4, r5
    stw r0, 0x6c(r3)
    b lbl_fn_805E2800_000014D8
lbl_fn_805E2800_00001494:
    add r3, r3, r7
    stb r6, 0xec(r3)
    b lbl_fn_805E2800_000014D8
lbl_fn_805E2800_000014A0:
    lis r4, lbl_8079B4C8@ha
    clrlslwi r0, r7, 24, 2
    clrlslwi r5, r6, 24, 2
    addi r4, r4, lbl_8079B4C8@l
    add r3, r3, r0
    lwzx r0, r4, r5
    stw r0, 0xac(r3)
    b lbl_fn_805E2800_000014D8
lbl_fn_805E2800_000014C0:
    clrlslwi r0, r7, 24, 2
    lwz r6, 0x8(r3)
    clrlslwi r4, r5, 24, 8
    add r3, r3, r0
    add r0, r6, r4
    stw r0, 0x28(r3)
lbl_fn_805E2800_000014D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E2920(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0xfc
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_fn_805E2920_0000152C
lbl_fn_805E2920_00001510:
    mr r3, r30
    mr r4, r31
    bl fn_805E2800
    lwz r3, 0x400(r30)
    addi r31, r31, 0x3
    subi r0, r3, 0x1
    stw r0, 0x400(r30)
lbl_fn_805E2920_0000152C:
    lwz r0, 0x400(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805E2920_00001510
    addi r0, r30, 0xfc
    stw r0, 0x3fc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E2990(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    lis r31, lbl_80764648@ha
    addi r31, r31, lbl_80764648@l
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r6, 0x14(r3)
    stw r0, 0x8(r1)
    lwz r4, 0x18(r6)
    stw r0, 0x10(r1)
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_805E2990_000015D4
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r4, 0x1c(r6)
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_805E2990_000016F0
    li r0, 0x2
    stw r0, 0x30(r3)
    lwz r0, 0x20(r6)
    stw r0, 0x34(r3)
    b lbl_fn_805E2990_000016F0
lbl_fn_805E2990_000015D4:
    lbz r5, 0xe(r3)
    lwz r3, 0x28(r6)
    bne lbl_fn_805E2990_000015E8
    li r4, 0x0
    b lbl_fn_805E2990_00001698
lbl_fn_805E2990_000015E8:
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_805E2990_00001634
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x18(r31)
    lfd f1, 0x8(r1)
    lfs f0, 0x8(r31)
    fsubs f2, f1, f2
    lfd f1, 0x0(r31)
    fdivs f2, f2, f0
    bl fn_8068AEB0
    frsp f1, f1
    lfs f0, 0xc(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    b lbl_fn_805E2990_00001698
lbl_fn_805E2990_00001634:
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    xoris r4, r4, 0x8000
    lis r3, lbl_8079B2C8@ha
    lfd f4, 0x18(r31)
    clrlslwi r0, r5, 24, 2
    lfd f0, 0x8(r1)
    addi r3, r3, lbl_8079B2C8@l
    stw r4, 0x14(r1)
    fsubs f3, f0, f4
    lfsx f2, r3, r0
    lfd f1, 0x10(r1)
    lfs f0, 0x10(r31)
    fsubs f4, f1, f4
    lfd f1, 0x0(r31)
    fmuls f2, f3, f2
    fadds f2, f4, f2
    fdivs f2, f2, f0
    bl fn_8068AEB0
    frsp f1, f1
    lfs f0, 0xc(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_fn_805E2990_00001698:
    lis r3, 0x5555
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add. r3, r3, r0
    beq lbl_fn_805E2990_000016D4
    lis r0, 0x64
    li r4, 0x0
    divw r3, r0, r3
    stw r4, 0x38(r30)
    lis r0, 0xfc40
    stw r0, 0x34(r30)
    stw r4, 0x30(r30)
    stw r3, 0x3c(r30)
    b lbl_fn_805E2990_000016F0
lbl_fn_805E2990_000016D4:
    li r4, 0x0
    lis r3, 0x64
    lis r0, 0xfc40
    stw r4, 0x38(r30)
    stw r3, 0x3c(r30)
    stw r0, 0x34(r30)
    stw r4, 0x30(r30)
lbl_fn_805E2990_000016F0:
    lwz r0, 0x30(r30)
    cmplwi r0, 0x2
    bge lbl_fn_805E2990_00001800
    lwz r4, 0x14(r30)
    lbz r5, 0xd(r30)
    lwz r3, 0x1c(r4)
    lwz r4, 0x2c(r4)
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_805E2990_00001720
    li r4, 0x0
    b lbl_fn_805E2990_000017D0
lbl_fn_805E2990_00001720:
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_805E2990_0000176C
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x18(r31)
    lfd f1, 0x10(r1)
    lfs f0, 0x8(r31)
    fsubs f2, f1, f2
    lfd f1, 0x0(r31)
    fdivs f2, f2, f0
    bl fn_8068AEB0
    frsp f1, f1
    lfs f0, 0xc(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    b lbl_fn_805E2990_000017D0
lbl_fn_805E2990_0000176C:
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    xoris r4, r3, 0x8000
    lis r3, lbl_8079B2C8@ha
    lfd f4, 0x18(r31)
    clrlslwi r0, r5, 24, 2
    lfd f0, 0x10(r1)
    addi r3, r3, lbl_8079B2C8@l
    stw r4, 0xc(r1)
    fsubs f3, f0, f4
    lfsx f2, r3, r0
    lfd f1, 0x8(r1)
    lfs f0, 0x10(r31)
    fsubs f4, f1, f4
    lfd f1, 0x0(r31)
    fmuls f2, f3, f2
    fadds f2, f4, f2
    fdivs f2, f2, f0
    bl fn_8068AEB0
    frsp f1, f1
    lfs f0, 0xc(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_fn_805E2990_000017D0:
    lis r3, 0x5555
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add. r3, r3, r0
    beq lbl_fn_805E2990_000017F8
    lis r0, 0xfc40
    divw r0, r0, r3
    stw r0, 0x40(r30)
    b lbl_fn_805E2990_00001800
lbl_fn_805E2990_000017F8:
    lis r0, 0xfc40
    stw r0, 0x40(r30)
lbl_fn_805E2990_00001800:
    lwz r3, 0x14(r30)
    lwz r0, 0x20(r3)
    stw r0, 0x44(r30)
    lwz r0, 0x24(r3)
    stw r0, 0x48(r30)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E2C60(void)
{
    nofralloc
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E2C60_00001850
    cmplwi r0, 0x1
    beq lbl_fn_805E2C60_000018A8
    cmplwi r0, 0x3
    beq lbl_fn_805E2C60_00001910
    blr
lbl_fn_805E2C60_00001850:
    lwz r5, 0x38(r3)
    lis r0, 0x63
    lwz r4, 0x3c(r3)
    add r4, r5, r4
    stw r4, 0x38(r3)
    cmpw r4, r0
    blt lbl_fn_805E2C60_00001878
    li r0, 0x0
    stw r0, 0x34(r3)
    b lbl_fn_805E2C60_00001890
lbl_fn_805E2C60_00001878:
    srawi r0, r4, 16
    lis r4, lbl_8079B6C8@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_8079B6C8@l
    lwzx r0, r4, r0
    stw r0, 0x34(r3)
lbl_fn_805E2C60_00001890:
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bnelr
    li r0, 0x1
    stw r0, 0x30(r3)
    blr
lbl_fn_805E2C60_000018A8:
    lwz r4, 0x34(r3)
    lwz r0, 0x40(r3)
    lwz r5, 0x44(r3)
    add r0, r4, r0
    stw r0, 0x34(r3)
    cmpw r0, r5
    bgt lbl_fn_805E2C60_000018D0
    li r0, 0x2
    stw r5, 0x34(r3)
    stw r0, 0x30(r3)
lbl_fn_805E2C60_000018D0:
    lwz r4, 0x34(r3)
    lis r0, 0xfd30
    cmpw r4, r0
    bgtlr
    lbz r4, 0xc(r3)
    li r7, 0x4
    lbz r0, 0xd(r3)
    li r6, 0x0
    lwz r5, 0x8(r3)
    slwi r4, r4, 9
    stw r7, 0x30(r3)
    slwi r0, r0, 2
    add r3, r5, r4
    add r3, r3, r0
    stw r6, 0x408(r3)
    blr
lbl_fn_805E2C60_00001910:
    lwz r4, 0x34(r3)
    lis r0, 0xfd30
    cmpw r4, r0
    bgt lbl_fn_805E2C60_0000192C
    li r0, 0x4
    stw r0, 0x30(r3)
    blr
lbl_fn_805E2C60_0000192C:
    lwz r0, 0x48(r3)
    add r0, r4, r0
    stw r0, 0x34(r3)
    blr
}

asm void fn_805E2D70(void)
{
    nofralloc
    lbz r0, 0xe(r3)
    lis r4, lbl_8079B4C8@ha
    lwz r5, 0x10(r3)
    addi r4, r4, lbl_8079B4C8@l
    slwi r0, r0, 2
    lwz r5, 0x4(r5)
    lwzx r0, r4, r0
    add r0, r5, r0
    stw r0, 0x2c(r3)
    blr
}

asm void fn_805E2DA0(void)
{
    nofralloc
    lwz r4, 0x8(r3)
    lbz r0, 0xc(r3)
    add r4, r4, r0
    lbz r0, 0xec(r4)
    stb r0, 0xf(r3)
    blr
}

asm void fn_805E2DC0(void)
{
    nofralloc
    lwz r4, 0x2c(r3)
    lwz r0, 0x34(r3)
    add r0, r4, r0
    srawi r3, r0, 16
    blr
}

asm void fn_805E2DE0(void)
{
    nofralloc
    lbz r0, 0xc(r3)
    lwz r4, 0x8(r3)
    slwi r0, r0, 2
    add r3, r4, r0
    lwz r4, 0x68(r4)
    lwz r0, 0x6c(r3)
    add r0, r4, r0
    srawi r3, r0, 16
    blr
}

asm void fn_805E2E10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x2c(r31)
    lwz r0, 0x34(r31)
    lwz r3, 0x4(r3)
    add r0, r4, r0
    srawi r4, r0, 16
    bl fn_805E1330
    lbz r0, 0xc(r31)
    lwz r4, 0x8(r31)
    slwi r0, r0, 2
    lwz r3, 0x4(r31)
    add r4, r4, r0
    lwz r0, 0xac(r4)
    srawi r4, r0, 16
    bl fn_805E1370
    lbz r0, 0xc(r31)
    lwz r5, 0x8(r31)
    slwi r0, r0, 2
    lwz r3, 0x4(r31)
    add r4, r5, r0
    lwz r5, 0x68(r5)
    lwz r0, 0x6c(r4)
    add r0, r5, r0
    srawi r4, r0, 16
    bl fn_805E1430
    lwz r4, 0x8(r31)
    lbz r0, 0xc(r31)
    lwz r3, 0x4(r31)
    add r4, r4, r0
    lbz r4, 0xec(r4)
    bl fn_805E13B0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
