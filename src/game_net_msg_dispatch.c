#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_80061824(void);
extern void fn_8006F2F0(void);
extern void fn_8006F72C(void);
extern void fn_800BFAC8(void);
extern void fn_800DBF68(void);
extern void fn_8050284C(void);
extern void fn_80502874(void);
extern void fn_8050B96C(void);
extern void fn_8050E7E0(void);
extern void fn_80686A48(void);
extern void fn_8068B2A0(void);
extern void fn_806A8E40(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern void fn_806B0E30(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80791490[];
extern u8 jumptable_807914BC[];
extern u8 lbl_80759748[];
extern u8 lbl_80759E48[];
extern u8 lbl_807917A0[];
extern u8 lbl_807917B8[];
extern u8 lbl_807917C8[];
extern u8 lbl_807917D8[];
extern u8 lbl_807917F0[];
extern u8 lbl_807917FC[];
extern u8 lbl_80791810[];
extern u8 lbl_80791828[];
extern u8 lbl_80791840[];
extern u8 lbl_80791850[];
extern u8 lbl_80791864[];
extern u8 lbl_80791878[];
extern u8 lbl_8079188C[];
extern u8 lbl_807918A0[];
extern u8 lbl_807918B4[];
extern u8 lbl_807918C8[];
extern u8 lbl_807918DC[];
extern u8 lbl_807918F0[];
extern u8 lbl_80791904[];
extern u8 lbl_80791918[];
extern u8 lbl_80791930[];
extern u8 lbl_80791944[];
extern u8 lbl_80791978[];
extern u8 lbl_807919A8[];
extern u8 lbl_807919D4[];
extern u8 lbl_80791A00[];
extern u8 lbl_80791A10[];
extern u8 lbl_80791A24[];
extern u8 lbl_80791A30[];
extern u8 lbl_80791A44[];
extern u8 lbl_80791A58[];
extern u8 lbl_80791A64[];
extern u8 lbl_80791A70[];
extern u8 lbl_80791A84[];
extern u8 lbl_80791A90[];
extern u8 lbl_80791AA4[];
extern u8 lbl_80791AB8[];
extern u8 lbl_80791AC8[];
extern u8 lbl_80791ADC[];
extern u8 lbl_80791AE8[];
extern u8 lbl_80791AF4[];

/* Small data declarations */
extern u32 lbl_8087E170;
extern u32 lbl_8087E1C4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_80887570;
extern u32 lbl_80887590;
extern u32 lbl_808875D8;
extern u32 lbl_808875DC;
extern u32 lbl_80887604;
extern u32 lbl_80887608;
extern u32 lbl_80887638;
extern u32 lbl_8088763C;
extern u32 lbl_80887640;
extern u32 lbl_80887644;
extern u32 lbl_80887648;
extern u32 lbl_8088764C;

/* Function declarations */
void fn_804F6E98(void);
void fn_804F7A54(void);
void fn_804F7ECC(void);
void fn_804F7EF4(void);
void fn_804F7F1C(void);
void fn_804F7F38(void);
void fn_804F7F58(void);
void fn_804F8468(void);

asm void fn_804F6E98(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0xd4(r1)
    stmw r24, 0xb0(r1)
    lis r31, 0x9249
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r30, r6, 0x6667
    addi r29, r31, 0x2493
lbl_fn_804F6E98_0000002C:
    subf r0, r24, r25
    mulhw r3, r29, r0
    add r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_804F6E98_00000BA8
    cmpwi r7, 0x14
    bgt lbl_fn_804F6E98_000001DC
    cmplw r24, r25
    beq lbl_fn_804F6E98_00000BA8
    subi r0, r25, 0x1c
    b lbl_fn_804F6E98_000001D0
lbl_fn_804F6E98_00000064:
    cmplw r24, r25
    mr r3, r24
    beq lbl_fn_804F6E98_00000138
    addi r6, r24, 0x1c
    b lbl_fn_804F6E98_00000130
lbl_fn_804F6E98_00000078:
    lwz r4, 0x8(r3)
    lwz r7, 0x8(r6)
    cmpw r7, r4
    beq lbl_fn_804F6E98_000000A0
    xor r4, r7, r4
    srawi r5, r4, 1
    and r4, r4, r7
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000120
lbl_fn_804F6E98_000000A0:
    lwz r5, 0x10(r3)
    lwz r4, 0x10(r6)
    cmplw r4, r5
    beq lbl_fn_804F6E98_000000C4
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000120
lbl_fn_804F6E98_000000C4:
    lwz r7, 0x4(r3)
    lwz r4, 0x4(r6)
    cmpw r4, r7
    beq lbl_fn_804F6E98_000000EC
    xor r4, r7, r4
    srawi r5, r4, 1
    and r4, r4, r7
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000120
lbl_fn_804F6E98_000000EC:
    lwz r5, 0x18(r3)
    lwz r4, 0x18(r6)
    cmplw r4, r5
    beq lbl_fn_804F6E98_00000110
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000120
lbl_fn_804F6E98_00000110:
    xor r4, r3, r6
    cntlzw r4, r4
    slw r4, r3, r4
    srwi r4, r4, 31
lbl_fn_804F6E98_00000120:
    cmpwi r4, 0x0
    beq lbl_fn_804F6E98_0000012C
    mr r3, r6
lbl_fn_804F6E98_0000012C:
    addi r6, r6, 0x1c
lbl_fn_804F6E98_00000130:
    cmplw r6, r25
    bne lbl_fn_804F6E98_00000078
lbl_fn_804F6E98_00000138:
    cmplw r3, r24
    beq lbl_fn_804F6E98_000001CC
    lwz r11, 0x0(r3)
    lwz r10, 0x4(r3)
    lwz r9, 0x8(r3)
    lwz r8, 0xc(r3)
    lwz r7, 0x10(r3)
    lwz r6, 0x14(r3)
    lwz r5, 0x18(r3)
    lwz r4, 0x0(r24)
    stw r4, 0x0(r3)
    lwz r4, 0x4(r24)
    stw r4, 0x4(r3)
    lwz r4, 0x8(r24)
    stw r4, 0x8(r3)
    lwz r4, 0xc(r24)
    stw r4, 0xc(r3)
    lwz r4, 0x10(r24)
    stw r4, 0x10(r3)
    lwz r4, 0x14(r24)
    stw r4, 0x14(r3)
    lwz r4, 0x18(r24)
    stw r4, 0x18(r3)
    stw r11, 0x0(r24)
    stw r10, 0x4(r24)
    stw r9, 0x8(r24)
    stw r8, 0xc(r24)
    stw r7, 0x10(r24)
    stw r6, 0x14(r24)
    stw r11, 0x94(r1)
    stw r10, 0x98(r1)
    stw r9, 0x9c(r1)
    stw r8, 0xa0(r1)
    stw r7, 0xa4(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r5, 0x18(r24)
lbl_fn_804F6E98_000001CC:
    addi r24, r24, 0x1c
lbl_fn_804F6E98_000001D0:
    cmplw r24, r0
    bne lbl_fn_804F6E98_00000064
    b lbl_fn_804F6E98_00000BA8
lbl_fn_804F6E98_000001DC:
    lwz r4, lbl_8087E170
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r30, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x1c
    add r3, r24, r0
    blt lbl_fn_804F6E98_0000021C
    li r6, -0x4
lbl_fn_804F6E98_0000021C:
    mulhw r4, r30, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E170
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0x1c
    add r4, r24, r0
    blt lbl_fn_804F6E98_00000268
    li r6, -0x4
    stw r6, lbl_8087E170
lbl_fn_804F6E98_00000268:
    subi r27, r25, 0x1c
    mr r6, r26
    mr r5, r27
    bl fn_804F7A54
    lwz r0, 0x8(r27)
    mr r28, r24
    mr r3, r27
    b lbl_fn_804F6E98_0000028C
lbl_fn_804F6E98_00000288:
    addi r28, r28, 0x1c
lbl_fn_804F6E98_0000028C:
    lwz r6, 0x8(r28)
    cmpw r6, r0
    beq lbl_fn_804F6E98_000002B0
    xor r4, r6, r0
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000330
lbl_fn_804F6E98_000002B0:
    lwz r5, 0x10(r27)
    lwz r4, 0x10(r28)
    cmplw r4, r5
    beq lbl_fn_804F6E98_000002D4
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000330
lbl_fn_804F6E98_000002D4:
    lwz r6, 0x4(r27)
    lwz r4, 0x4(r28)
    cmpw r4, r6
    beq lbl_fn_804F6E98_000002FC
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000330
lbl_fn_804F6E98_000002FC:
    lwz r5, 0x18(r27)
    lwz r4, 0x18(r28)
    cmplw r4, r5
    beq lbl_fn_804F6E98_00000320
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000330
lbl_fn_804F6E98_00000320:
    xor r4, r27, r28
    cntlzw r4, r4
    slw r4, r27, r4
    srwi r4, r4, 31
lbl_fn_804F6E98_00000330:
    cmpwi r4, 0x0
    bne lbl_fn_804F6E98_00000288
lbl_fn_804F6E98_00000338:
    subi r3, r3, 0x1c
    cmplw r28, r3
    beq lbl_fn_804F6E98_000003F0
    lwz r6, 0x8(r3)
    cmpw r6, r0
    beq lbl_fn_804F6E98_00000368
    xor r4, r6, r0
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000003E8
lbl_fn_804F6E98_00000368:
    lwz r5, 0x10(r27)
    lwz r4, 0x10(r3)
    cmplw r4, r5
    beq lbl_fn_804F6E98_0000038C
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000003E8
lbl_fn_804F6E98_0000038C:
    lwz r6, 0x4(r27)
    lwz r4, 0x4(r3)
    cmpw r4, r6
    beq lbl_fn_804F6E98_000003B4
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000003E8
lbl_fn_804F6E98_000003B4:
    lwz r5, 0x18(r27)
    lwz r4, 0x18(r3)
    cmplw r4, r5
    beq lbl_fn_804F6E98_000003D8
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000003E8
lbl_fn_804F6E98_000003D8:
    xor r4, r27, r3
    cntlzw r4, r4
    slw r4, r27, r4
    srwi r4, r4, 31
lbl_fn_804F6E98_000003E8:
    cmpwi r4, 0x0
    beq lbl_fn_804F6E98_00000338
lbl_fn_804F6E98_000003F0:
    cmplw r28, r3
    bge lbl_fn_804F6E98_0000068C
    lwz r10, 0x0(r28)
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r28)
    addi r28, r28, 0x1c
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r10, 0x78(r1)
    stw r9, 0x7c(r1)
    stw r8, 0x80(r1)
    stw r7, 0x84(r1)
    stw r6, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r4, 0x18(r3)
    b lbl_fn_804F6E98_00000490
lbl_fn_804F6E98_0000048C:
    addi r28, r28, 0x1c
lbl_fn_804F6E98_00000490:
    lwz r0, 0x8(r27)
    lwz r6, 0x8(r28)
    cmpw r6, r0
    beq lbl_fn_804F6E98_000004B8
    xor r4, r6, r0
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000538
lbl_fn_804F6E98_000004B8:
    lwz r5, 0x10(r27)
    lwz r4, 0x10(r28)
    cmplw r4, r5
    beq lbl_fn_804F6E98_000004DC
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000538
lbl_fn_804F6E98_000004DC:
    lwz r6, 0x4(r27)
    lwz r4, 0x4(r28)
    cmpw r4, r6
    beq lbl_fn_804F6E98_00000504
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000538
lbl_fn_804F6E98_00000504:
    lwz r5, 0x18(r27)
    lwz r4, 0x18(r28)
    cmplw r4, r5
    beq lbl_fn_804F6E98_00000528
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000538
lbl_fn_804F6E98_00000528:
    xor r4, r27, r28
    cntlzw r4, r4
    slw r4, r27, r4
    srwi r4, r4, 31
lbl_fn_804F6E98_00000538:
    cmpwi r4, 0x0
    bne lbl_fn_804F6E98_0000048C
lbl_fn_804F6E98_00000540:
    lwz r6, -0x14(r3)
    subi r3, r3, 0x1c
    cmpw r6, r0
    beq lbl_fn_804F6E98_00000568
    xor r4, r6, r0
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000005E8
lbl_fn_804F6E98_00000568:
    lwz r5, 0x10(r27)
    lwz r4, 0x10(r3)
    cmplw r4, r5
    beq lbl_fn_804F6E98_0000058C
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000005E8
lbl_fn_804F6E98_0000058C:
    lwz r6, 0x4(r27)
    lwz r4, 0x4(r3)
    cmpw r4, r6
    beq lbl_fn_804F6E98_000005B4
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000005E8
lbl_fn_804F6E98_000005B4:
    lwz r5, 0x18(r27)
    lwz r4, 0x18(r3)
    cmplw r4, r5
    beq lbl_fn_804F6E98_000005D8
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000005E8
lbl_fn_804F6E98_000005D8:
    xor r4, r27, r3
    cntlzw r4, r4
    slw r4, r27, r4
    srwi r4, r4, 31
lbl_fn_804F6E98_000005E8:
    cmpwi r4, 0x0
    beq lbl_fn_804F6E98_00000540
    cmplw r28, r3
    bge lbl_fn_804F6E98_0000068C
    lwz r10, 0x0(r28)
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r28)
    addi r28, r28, 0x1c
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r10, 0x5c(r1)
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r4, 0x18(r3)
    b lbl_fn_804F6E98_00000490
lbl_fn_804F6E98_0000068C:
    cmplw r28, r24
    bne lbl_fn_804F6E98_00000B3C
    lwz r10, 0x0(r28)
    subi r3, r25, 0x1c
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r27)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r27)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r27)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r27)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r27)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r27)
    stw r0, 0x18(r28)
    addi r28, r28, 0x1c
    stw r10, 0x0(r27)
    stw r9, 0x4(r27)
    stw r8, 0x8(r27)
    stw r7, 0xc(r27)
    stw r6, 0x10(r27)
    stw r5, 0x14(r27)
    stw r4, 0x18(r27)
    lwz r11, -0x14(r25)
    lwz r0, 0x8(r24)
    stw r10, 0x40(r1)
    cmpw r0, r11
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    beq lbl_fn_804F6E98_00000750
    xor r4, r0, r11
    srawi r5, r4, 1
    and r4, r4, r0
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000007D0
lbl_fn_804F6E98_00000750:
    lwz r5, 0x10(r3)
    lwz r4, 0x10(r24)
    cmplw r4, r5
    beq lbl_fn_804F6E98_00000774
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000007D0
lbl_fn_804F6E98_00000774:
    lwz r6, 0x4(r3)
    lwz r4, 0x4(r24)
    cmpw r4, r6
    beq lbl_fn_804F6E98_0000079C
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000007D0
lbl_fn_804F6E98_0000079C:
    lwz r5, 0x18(r3)
    lwz r4, 0x18(r24)
    cmplw r4, r5
    beq lbl_fn_804F6E98_000007C0
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000007D0
lbl_fn_804F6E98_000007C0:
    xor r4, r3, r24
    cntlzw r4, r4
    slw r4, r3, r4
    srwi r4, r4, 31
lbl_fn_804F6E98_000007D0:
    cmpwi r4, 0x0
    bne lbl_fn_804F6E98_00000928
    b lbl_fn_804F6E98_000007E0
lbl_fn_804F6E98_000007DC:
    addi r28, r28, 0x1c
lbl_fn_804F6E98_000007E0:
    cmplw r28, r25
    beq lbl_fn_804F6E98_00000894
    lwz r4, 0x8(r28)
    cmpw r0, r4
    beq lbl_fn_804F6E98_0000080C
    xor r4, r0, r4
    srawi r5, r4, 1
    and r4, r4, r0
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_0000088C
lbl_fn_804F6E98_0000080C:
    lwz r5, 0x10(r28)
    lwz r4, 0x10(r24)
    cmplw r4, r5
    beq lbl_fn_804F6E98_00000830
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_0000088C
lbl_fn_804F6E98_00000830:
    lwz r6, 0x4(r28)
    lwz r4, 0x4(r24)
    cmpw r4, r6
    beq lbl_fn_804F6E98_00000858
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_0000088C
lbl_fn_804F6E98_00000858:
    lwz r5, 0x18(r28)
    lwz r4, 0x18(r24)
    cmplw r4, r5
    beq lbl_fn_804F6E98_0000087C
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_0000088C
lbl_fn_804F6E98_0000087C:
    xor r4, r28, r24
    cntlzw r4, r4
    slw r4, r28, r4
    srwi r4, r4, 31
lbl_fn_804F6E98_0000088C:
    cmpwi r4, 0x0
    beq lbl_fn_804F6E98_000007DC
lbl_fn_804F6E98_00000894:
    cmplw r28, r3
    bge lbl_fn_804F6E98_00000928
    lwz r10, 0x0(r28)
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r28)
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r10, 0x24(r1)
    stw r9, 0x28(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r4, 0x18(r3)
lbl_fn_804F6E98_00000928:
    cmplw r28, r3
    bge lbl_fn_804F6E98_00000B34
    b lbl_fn_804F6E98_00000938
lbl_fn_804F6E98_00000934:
    addi r28, r28, 0x1c
lbl_fn_804F6E98_00000938:
    lwz r4, 0x8(r28)
    lwz r0, 0x8(r24)
    cmpw r0, r4
    beq lbl_fn_804F6E98_00000960
    xor r4, r0, r4
    srawi r5, r4, 1
    and r4, r4, r0
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000009E0
lbl_fn_804F6E98_00000960:
    lwz r5, 0x10(r28)
    lwz r4, 0x10(r24)
    cmplw r4, r5
    beq lbl_fn_804F6E98_00000984
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000009E0
lbl_fn_804F6E98_00000984:
    lwz r6, 0x4(r28)
    lwz r4, 0x4(r24)
    cmpw r4, r6
    beq lbl_fn_804F6E98_000009AC
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000009E0
lbl_fn_804F6E98_000009AC:
    lwz r5, 0x18(r28)
    lwz r4, 0x18(r24)
    cmplw r4, r5
    beq lbl_fn_804F6E98_000009D0
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_000009E0
lbl_fn_804F6E98_000009D0:
    xor r4, r28, r24
    cntlzw r4, r4
    slw r4, r28, r4
    srwi r4, r4, 31
lbl_fn_804F6E98_000009E0:
    cmpwi r4, 0x0
    beq lbl_fn_804F6E98_00000934
lbl_fn_804F6E98_000009E8:
    lwz r4, -0x14(r3)
    subi r3, r3, 0x1c
    cmpw r0, r4
    beq lbl_fn_804F6E98_00000A10
    xor r4, r0, r4
    srawi r5, r4, 1
    and r4, r4, r0
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000A90
lbl_fn_804F6E98_00000A10:
    lwz r5, 0x10(r3)
    lwz r4, 0x10(r24)
    cmplw r4, r5
    beq lbl_fn_804F6E98_00000A34
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000A90
lbl_fn_804F6E98_00000A34:
    lwz r6, 0x4(r3)
    lwz r4, 0x4(r24)
    cmpw r4, r6
    beq lbl_fn_804F6E98_00000A5C
    xor r4, r6, r4
    srawi r5, r4, 1
    and r4, r4, r6
    subf r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000A90
lbl_fn_804F6E98_00000A5C:
    lwz r5, 0x18(r3)
    lwz r4, 0x18(r24)
    cmplw r4, r5
    beq lbl_fn_804F6E98_00000A80
    xor r4, r5, r4
    cntlzw r4, r4
    slw r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_804F6E98_00000A90
lbl_fn_804F6E98_00000A80:
    xor r4, r3, r24
    cntlzw r4, r4
    slw r4, r3, r4
    srwi r4, r4, 31
lbl_fn_804F6E98_00000A90:
    cmpwi r4, 0x0
    bne lbl_fn_804F6E98_000009E8
    cmplw r28, r3
    bge lbl_fn_804F6E98_00000B34
    lwz r10, 0x0(r28)
    lwz r9, 0x4(r28)
    lwz r8, 0x8(r28)
    lwz r7, 0xc(r28)
    lwz r6, 0x10(r28)
    lwz r5, 0x14(r28)
    lwz r4, 0x18(r28)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r28)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r28)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r28)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r28)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r28)
    addi r28, r28, 0x1c
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r10, 0x8(r1)
    stw r9, 0xc(r1)
    stw r8, 0x10(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r4, 0x18(r3)
    b lbl_fn_804F6E98_00000938
lbl_fn_804F6E98_00000B34:
    mr r24, r28
    b lbl_fn_804F6E98_0000002C
lbl_fn_804F6E98_00000B3C:
    subf r4, r24, r28
    addi r3, r31, 0x2493
    mulhw r5, r3, r4
    subf r0, r28, r25
    mulhw r3, r3, r0
    add r4, r5, r4
    srawi r4, r4, 4
    add r0, r3, r0
    srwi r5, r4, 31
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r4, r4, r5
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_804F6E98_00000B90
    mr r3, r24
    mr r4, r28
    mr r5, r26
    bl fn_804F6E98
    mr r24, r28
    b lbl_fn_804F6E98_0000002C
lbl_fn_804F6E98_00000B90:
    mr r3, r28
    mr r4, r25
    mr r5, r26
    bl fn_804F6E98
    mr r25, r28
    b lbl_fn_804F6E98_0000002C
lbl_fn_804F6E98_00000BA8:
    lmw r24, 0xb0(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_804F7A54(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    stw r31, 0x7c(r1)
    lwz r6, 0x8(r3)
    lwz r8, 0x8(r5)
    cmpw r8, r6
    beq lbl_fn_804F7A54_00000BEC
    xor r0, r8, r6
    srawi r7, r0, 1
    and r0, r0, r8
    subf r0, r0, r7
    srwi r0, r0, 31
    b lbl_fn_804F7A54_00000C6C
lbl_fn_804F7A54_00000BEC:
    lwz r7, 0x10(r3)
    lwz r0, 0x10(r5)
    cmplw r0, r7
    beq lbl_fn_804F7A54_00000C10
    xor r0, r7, r0
    cntlzw r0, r0
    slw r0, r7, r0
    srwi r0, r0, 31
    b lbl_fn_804F7A54_00000C6C
lbl_fn_804F7A54_00000C10:
    lwz r9, 0x4(r3)
    lwz r0, 0x4(r5)
    cmpw r0, r9
    beq lbl_fn_804F7A54_00000C38
    xor r0, r9, r0
    srawi r7, r0, 1
    and r0, r0, r9
    subf r0, r0, r7
    srwi r0, r0, 31
    b lbl_fn_804F7A54_00000C6C
lbl_fn_804F7A54_00000C38:
    lwz r7, 0x18(r3)
    lwz r0, 0x18(r5)
    cmplw r0, r7
    beq lbl_fn_804F7A54_00000C5C
    xor r0, r7, r0
    cntlzw r0, r0
    slw r0, r7, r0
    srwi r0, r0, 31
    b lbl_fn_804F7A54_00000C6C
lbl_fn_804F7A54_00000C5C:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_804F7A54_00000C6C:
    lwz r7, 0x8(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpw r7, r8
    beq lbl_fn_804F7A54_00000C98
    xor r8, r7, r8
    srawi r9, r8, 1
    and r8, r8, r7
    subf r8, r8, r9
    srwi r8, r8, 31
    b lbl_fn_804F7A54_00000D18
lbl_fn_804F7A54_00000C98:
    lwz r9, 0x10(r5)
    lwz r8, 0x10(r4)
    cmplw r8, r9
    beq lbl_fn_804F7A54_00000CBC
    xor r8, r9, r8
    cntlzw r8, r8
    slw r8, r9, r8
    srwi r8, r8, 31
    b lbl_fn_804F7A54_00000D18
lbl_fn_804F7A54_00000CBC:
    lwz r10, 0x4(r5)
    lwz r8, 0x4(r4)
    cmpw r8, r10
    beq lbl_fn_804F7A54_00000CE4
    xor r8, r10, r8
    srawi r9, r8, 1
    and r8, r8, r10
    subf r8, r8, r9
    srwi r8, r8, 31
    b lbl_fn_804F7A54_00000D18
lbl_fn_804F7A54_00000CE4:
    lwz r9, 0x18(r5)
    lwz r8, 0x18(r4)
    cmplw r8, r9
    beq lbl_fn_804F7A54_00000D08
    xor r8, r9, r8
    cntlzw r8, r8
    slw r8, r9, r8
    srwi r8, r8, 31
    b lbl_fn_804F7A54_00000D18
lbl_fn_804F7A54_00000D08:
    xor r8, r5, r4
    cntlzw r8, r8
    slw r8, r5, r8
    srwi r8, r8, 31
lbl_fn_804F7A54_00000D18:
    cmpwi r0, 0x0
    cntlzw r8, r8
    srwi r8, r8, 5
    beq lbl_fn_804F7A54_00000D30
    cmpwi r8, 0x0
    bne lbl_fn_804F7A54_00001028
lbl_fn_804F7A54_00000D30:
    cmpwi r0, 0x0
    bne lbl_fn_804F7A54_00000DD0
    cmpwi r8, 0x0
    bne lbl_fn_804F7A54_00000DD0
    lwz r11, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r10, 0x4(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r9, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lwz r8, 0xc(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    lwz r7, 0x10(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r3)
    lwz r6, 0x14(r3)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r3)
    lwz r5, 0x18(r3)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r3)
    stw r11, 0x5c(r1)
    stw r10, 0x60(r1)
    stw r9, 0x64(r1)
    stw r8, 0x68(r1)
    stw r7, 0x6c(r1)
    stw r6, 0x70(r1)
    stw r5, 0x74(r1)
    stw r11, 0x0(r4)
    stw r10, 0x4(r4)
    stw r9, 0x8(r4)
    stw r8, 0xc(r4)
    stw r7, 0x10(r4)
    stw r6, 0x14(r4)
    stw r5, 0x18(r4)
    b lbl_fn_804F7A54_00001028
lbl_fn_804F7A54_00000DD0:
    cmpw r7, r6
    beq lbl_fn_804F7A54_00000DF0
    xor r6, r7, r6
    srawi r8, r6, 1
    and r6, r6, r7
    subf r6, r6, r8
    srwi r6, r6, 31
    b lbl_fn_804F7A54_00000E70
lbl_fn_804F7A54_00000DF0:
    lwz r7, 0x10(r3)
    lwz r6, 0x10(r4)
    cmplw r6, r7
    beq lbl_fn_804F7A54_00000E14
    xor r6, r7, r6
    cntlzw r6, r6
    slw r6, r7, r6
    srwi r6, r6, 31
    b lbl_fn_804F7A54_00000E70
lbl_fn_804F7A54_00000E14:
    lwz r8, 0x4(r3)
    lwz r6, 0x4(r4)
    cmpw r6, r8
    beq lbl_fn_804F7A54_00000E3C
    xor r6, r8, r6
    srawi r7, r6, 1
    and r6, r6, r8
    subf r6, r6, r7
    srwi r6, r6, 31
    b lbl_fn_804F7A54_00000E70
lbl_fn_804F7A54_00000E3C:
    lwz r7, 0x18(r3)
    lwz r6, 0x18(r4)
    cmplw r6, r7
    beq lbl_fn_804F7A54_00000E60
    xor r6, r7, r6
    cntlzw r6, r6
    slw r6, r7, r6
    srwi r6, r6, 31
    b lbl_fn_804F7A54_00000E70
lbl_fn_804F7A54_00000E60:
    xor r6, r3, r4
    cntlzw r6, r6
    slw r6, r3, r6
    srwi r6, r6, 31
lbl_fn_804F7A54_00000E70:
    cmpwi r6, 0x0
    beq lbl_fn_804F7A54_00000F04
    lwz r31, 0x0(r3)
    lwz r6, 0x0(r4)
    stw r6, 0x0(r3)
    lwz r12, 0x4(r3)
    lwz r6, 0x4(r4)
    stw r6, 0x4(r3)
    lwz r11, 0x8(r3)
    lwz r6, 0x8(r4)
    stw r6, 0x8(r3)
    lwz r10, 0xc(r3)
    lwz r6, 0xc(r4)
    stw r6, 0xc(r3)
    lwz r9, 0x10(r3)
    lwz r6, 0x10(r4)
    stw r6, 0x10(r3)
    lwz r8, 0x14(r3)
    lwz r6, 0x14(r4)
    stw r6, 0x14(r3)
    lwz r7, 0x18(r3)
    lwz r6, 0x18(r4)
    stw r6, 0x18(r3)
    stw r31, 0x40(r1)
    stw r12, 0x44(r1)
    stw r11, 0x48(r1)
    stw r10, 0x4c(r1)
    stw r9, 0x50(r1)
    stw r8, 0x54(r1)
    stw r7, 0x58(r1)
    stw r31, 0x0(r4)
    stw r12, 0x4(r4)
    stw r11, 0x8(r4)
    stw r10, 0xc(r4)
    stw r9, 0x10(r4)
    stw r8, 0x14(r4)
    stw r7, 0x18(r4)
lbl_fn_804F7A54_00000F04:
    cmpwi r0, 0x0
    beq lbl_fn_804F7A54_00000F9C
    lwz r11, 0x0(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    lwz r10, 0x4(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r4)
    lwz r9, 0x8(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    lwz r8, 0xc(r4)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r4)
    lwz r7, 0x10(r4)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r4)
    lwz r6, 0x14(r4)
    lwz r0, 0x14(r5)
    stw r0, 0x14(r4)
    lwz r3, 0x18(r4)
    lwz r0, 0x18(r5)
    stw r0, 0x18(r4)
    stw r11, 0x24(r1)
    stw r10, 0x28(r1)
    stw r9, 0x2c(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r11, 0x0(r5)
    stw r10, 0x4(r5)
    stw r9, 0x8(r5)
    stw r8, 0xc(r5)
    stw r7, 0x10(r5)
    stw r6, 0x14(r5)
    stw r3, 0x18(r5)
    b lbl_fn_804F7A54_00001028
lbl_fn_804F7A54_00000F9C:
    lwz r11, 0x0(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lwz r10, 0x4(r3)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r3)
    lwz r9, 0x8(r3)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r3)
    lwz r8, 0xc(r3)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r3)
    lwz r7, 0x10(r3)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r3)
    lwz r6, 0x14(r3)
    lwz r0, 0x14(r5)
    stw r0, 0x14(r3)
    lwz r4, 0x18(r3)
    lwz r0, 0x18(r5)
    stw r0, 0x18(r3)
    stw r11, 0x8(r1)
    stw r10, 0xc(r1)
    stw r9, 0x10(r1)
    stw r8, 0x14(r1)
    stw r7, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r11, 0x0(r5)
    stw r10, 0x4(r5)
    stw r9, 0x8(r5)
    stw r8, 0xc(r5)
    stw r7, 0x10(r5)
    stw r6, 0x14(r5)
    stw r4, 0x18(r5)
lbl_fn_804F7A54_00001028:
    lwz r31, 0x7c(r1)
    addi r1, r1, 0x80
    blr
}

asm void fn_804F7ECC(void)
{
    nofralloc
    lwz r6, lbl_8087F610
    mr r5, r3
    lwz r3, 0x514(r6)
    cmpwi r3, 0x0
    beq lbl_fn_804F7ECC_00001054
    mr r6, r4
    li r4, 0x0
    b fn_80502874
lbl_fn_804F7ECC_00001054:
    li r3, 0x0
    blr
}

asm void fn_804F7EF4(void)
{
    nofralloc
    lwz r6, lbl_8087F610
    mr r5, r3
    lwz r3, 0x514(r6)
    cmpwi r3, 0x0
    beq lbl_fn_804F7EF4_0000107C
    mr r6, r4
    li r4, 0x1
    b fn_80502874
lbl_fn_804F7EF4_0000107C:
    li r3, 0x0
    blr
}

asm void fn_804F7F1C(void)
{
    nofralloc
    lwz r3, lbl_8087F610
    lwz r3, 0x514(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804F7F1C_00001098
    b fn_8050284C
lbl_fn_804F7F1C_00001098:
    li r3, 0x0
    blr
}

asm void fn_804F7F38(void)
{
    nofralloc
    lwz r3, lbl_8087F610
    lwz r3, 0x514(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804F7F38_000010B8
    lwz r3, 0x370(r3)
    blr
lbl_fn_804F7F38_000010B8:
    li r3, 0x0
    blr
}

asm void fn_804F7F58(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x270
    stfd f31, 0x2a0(r1)
    psq_st f31, 0x2a8(r1), 0, 0
    stfd f30, 0x290(r1)
    psq_st f30, 0x298(r1), 0, 0
    stfd f29, 0x280(r1)
    psq_st f29, 0x288(r1), 0, 0
    stfd f28, 0x270(r1)
    psq_st f28, 0x278(r1), 0, 0
    bl _savegpr_26
    lwz r4, lbl_8087F628
    mr r31, r3
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 13
    beq lbl_fn_804F7F58_00001154
    lfs f3, lbl_80887570
    la r4, lbl_8087E1C4
    lfs f4, lbl_80887604
    lis r5, 0x8900
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, lbl_80887638
    fmr f7, f3
    lfs f2, lbl_8088763C
    fmr f8, f3
    addi r4, r4, 0x12
    subi r5, r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_804F7F58_00001154:
    lwz r0, 0x4fc(r31)
    cmpwi r0, 0x1e
    bne lbl_fn_804F7F58_000011F4
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F7F58_00001194
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F7F58_00001188
    li r0, 0x0
    b lbl_fn_804F7F58_000011B0
lbl_fn_804F7F58_00001188:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F7F58_000011B0
lbl_fn_804F7F58_00001194:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F7F58_000011A8
    li r3, 0x0
    b lbl_fn_804F7F58_000011AC
lbl_fn_804F7F58_000011A8:
    bl fn_806A8E40
lbl_fn_804F7F58_000011AC:
    clrlwi r0, r3, 24
lbl_fn_804F7F58_000011B0:
    lwz r5, 0x5e8(r31)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F7F58_000011F4
lbl_fn_804F7F58_000011C8:
    lwz r0, 0x5e4(r31)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F7F58_000011EC
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    beq lbl_fn_804F7F58_000011F4
lbl_fn_804F7F58_000011EC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F7F58_000011C8
lbl_fn_804F7F58_000011F4:
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0xb
    blt lbl_fn_804F7F58_0000120C
    mr r3, r31
    bl fn_804F8468
lbl_fn_804F7F58_0000120C:
    lwz r0, 0x528(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804F7F58_00001598
    lis r3, lbl_80759E48@ha
    lfs f31, lbl_80887570
    lfs f30, lbl_808875DC
    addi r28, r3, lbl_80759E48@l
    lfs f29, lbl_80887590
    li r27, 0x0
    lfs f28, lbl_80887604
    li r30, 0x0
    b lbl_fn_804F7F58_00001434
lbl_fn_804F7F58_0000123C:
    lwz r0, 0x5e4(r31)
    lwzx r4, r30, r0
    add r29, r0, r30
    cmpwi r4, 0x0
    beq lbl_fn_804F7F58_0000142C
    lwz r0, 0xd0(r29)
    srwi. r0, r0, 31
    beq lbl_fn_804F7F58_0000142C
    lfs f2, 0x530(r4)
    addi r3, r1, 0x44
    lfs f1, 0x52c(r4)
    addi r5, r1, 0x2c
    lfs f0, 0x528(r4)
    fadds f2, f2, f31
    fadds f1, f1, f30
    stfs f31, 0x20(r1)
    fadds f0, f0, f31
    lwz r4, lbl_8087EFB4
    stfs f30, 0x24(r1)
    stfs f31, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f2, 0x34(r1)
    bl fn_800BFAC8
    lfs f0, 0x4c(r1)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_804F7F58_0000142C
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_804F7F58_0000142C
    lbz r5, 0xcc(r29)
    addi r3, r1, 0x150
    lwz r6, 0xdc(r29)
    addi r4, r28, 0x241
    crclr 6
    bl sprintf
    lfs f1, 0x44(r1)
    addi r4, r1, 0x150
    lfs f0, 0x48(r1)
    lis r5, 0xff00
    lfs f3, lbl_80887570
    fadds f1, f29, f1
    lfs f4, lbl_80887604
    fadds f2, f29, f0
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f3, lbl_80887570
    addi r4, r1, 0x150
    lfs f4, lbl_80887604
    li r5, -0x5600
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, 0x44(r1)
    lfs f2, 0x48(r1)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, 0x48(r1)
    cmpwi r29, 0x0
    fadds f0, f0, f28
    stfs f0, 0x48(r1)
    beq lbl_fn_804F7F58_00001370
    lbz r0, 0xcc(r29)
    cmplwi r0, 0xff
    beq lbl_fn_804F7F58_00001370
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804F7F58_00001370
    li r0, 0x1
    b lbl_fn_804F7F58_00001374
lbl_fn_804F7F58_00001370:
    li r0, 0x0
lbl_fn_804F7F58_00001374:
    cmpwi r0, 0x0
    li r7, 0x20
    beq lbl_fn_804F7F58_00001384
    li r7, 0x42
lbl_fn_804F7F58_00001384:
    lwz r5, 0x0(r29)
    addi r3, r1, 0x150
    addi r4, r28, 0x255
    li r6, 0x4c
    lwz r0, 0x12a4(r5)
    lwz r5, 0xf14(r5)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_804F7F58_000013A8
    li r6, 0x4e
lbl_fn_804F7F58_000013A8:
    crclr 6
    bl sprintf
    lfs f1, 0x44(r1)
    addi r4, r1, 0x150
    lfs f0, 0x48(r1)
    lis r5, 0xff00
    lfs f3, lbl_80887570
    fadds f1, f29, f1
    lfs f4, lbl_80887604
    fadds f2, f29, f0
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f3, lbl_80887570
    addi r4, r1, 0x150
    lfs f4, lbl_80887604
    li r5, -0x5600
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, 0x44(r1)
    lfs f2, 0x48(r1)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, 0x48(r1)
    fadds f0, f0, f28
    stfs f0, 0x48(r1)
lbl_fn_804F7F58_0000142C:
    addi r27, r27, 0x1
    addi r30, r30, 0xd5c
lbl_fn_804F7F58_00001434:
    lwz r0, 0x5e8(r31)
    cmpw r27, r0
    blt lbl_fn_804F7F58_0000123C
    lis r28, lbl_80759E48@ha
    lfs f28, lbl_80887570
    lfs f29, lbl_808875DC
    addi r28, r28, lbl_80759E48@l
    lfs f30, lbl_80887590
    li r26, 0x0
    lfs f31, lbl_80887604
    li r30, 0x0
    lis r29, 0xffaa
    b lbl_fn_804F7F58_0000158C
lbl_fn_804F7F58_00001468:
    lwz r0, 0x5f0(r31)
    lwzx r4, r30, r0
    add r27, r0, r30
    cmpwi r4, 0x0
    beq lbl_fn_804F7F58_00001584
    lfs f2, 0x530(r4)
    addi r3, r1, 0x38
    lfs f1, 0x52c(r4)
    addi r5, r1, 0x14
    lfs f0, 0x528(r4)
    fadds f2, f2, f28
    fadds f1, f1, f29
    stfs f28, 0x8(r1)
    fadds f0, f0, f28
    lwz r4, lbl_8087EFB4
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f2, 0x1c(r1)
    bl fn_800BFAC8
    lfs f0, 0x40(r1)
    fcmpo cr0, f28, f0
    cror eq, lt, eq
    bne lbl_fn_804F7F58_00001584
    fcmpo cr0, f0, f30
    cror eq, lt, eq
    bne lbl_fn_804F7F58_00001584
    lwz r5, 0x0(r27)
    addi r3, r1, 0x50
    lwz r7, 0xb0(r27)
    addi r4, r28, 0x268
    lwz r0, 0x12a4(r5)
    li r6, 0x4c
    srwi r5, r7, 31
    extrwi. r0, r0, 1, 29
    beq lbl_fn_804F7F58_00001500
    li r6, 0x4e
lbl_fn_804F7F58_00001500:
    crclr 6
    bl sprintf
    lfs f1, 0x38(r1)
    addi r4, r1, 0x50
    lfs f0, 0x3c(r1)
    lis r5, 0xff00
    lfs f3, lbl_80887570
    fadds f1, f30, f1
    lfs f4, lbl_80887604
    fadds f2, f30, f0
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f3, lbl_80887570
    addi r4, r1, 0x50
    lfs f4, lbl_80887604
    addi r5, r29, 0xff
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, 0x38(r1)
    lfs f2, 0x3c(r1)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, 0x3c(r1)
    fadds f0, f0, f31
    stfs f0, 0x3c(r1)
lbl_fn_804F7F58_00001584:
    addi r26, r26, 0x1
    addi r30, r30, 0xb4
lbl_fn_804F7F58_0000158C:
    lwz r0, 0x5f4(r31)
    cmpw r26, r0
    blt lbl_fn_804F7F58_00001468
lbl_fn_804F7F58_00001598:
    addi r11, r1, 0x270
    psq_l f31, 0x2a8(r1), 0, 0
    lfd f31, 0x2a0(r1)
    psq_l f30, 0x298(r1), 0, 0
    lfd f30, 0x290(r1)
    psq_l f29, 0x288(r1), 0, 0
    lfd f29, 0x280(r1)
    psq_l f28, 0x278(r1), 0, 0
    lfd f28, 0x270(r1)
    bl _restgpr_26
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

asm void fn_804F8468(void)
{
    nofralloc
    stwu r1, -0xa30(r1)
    mflr r0
    stw r0, 0xa34(r1)
    li r0, 0xa28
    addi r11, r1, 0xa00
    stfd f31, 0xa20(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xa18
    stfd f30, 0xa10(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0xa08
    stfd f29, 0xa00(r1)
    psq_stx f29, r1, r0, 0, 0
    bl _savegpr_14
    lwz r0, 0x51c(r3)
    lis r4, 0x4330
    stw r4, 0x970(r1)
    mr r25, r3
    cmpwi r0, 0x0
    li r28, 0x0
    stw r4, 0x978(r1)
    beq lbl_fn_804F8468_000038F8
    lfs f1, lbl_80887570
    lis r4, 0x8000
    lwz r3, lbl_8087EEB0
    fmr f2, f1
    lfs f4, lbl_80887640
    fmr f3, f1
    lfs f5, lbl_80887644
    bl fn_80060D58
    xoris r0, r28, 0x8000
    stw r0, 0x974(r1)
    lis r3, lbl_80759748@ha
    lfs f6, lbl_80887570
    lfd f1, lbl_80759748@l(r3)
    la r14, lbl_8087E1C4
    lfd f0, 0x970(r1)
    fmr f7, f6
    lfs f4, lbl_80887608
    fmr f8, f6
    fsubs f1, f0, f1
    lfs f0, lbl_808875D8
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    addi r4, r14, 0x34
    fmadds f2, f4, f1, f0
    lfs f1, lbl_8088763C
    li r5, -0x1
    lfs f3, lbl_80887648
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    li r28, 0x1
    bl fn_80061824
    li r0, 0x0
    addi r14, r14, 0x4a
    stw r0, 0x260(r1)
    mr r3, r14
    addi r15, r1, 0x260
    stw r0, 0x264(r1)
    stw r0, 0x268(r1)
    bl fn_80686A48
    mr r16, r3
    mr r3, r15
    mr r4, r16
    bl fn_800DBF68
    lbz r3, 0x234(r1)
    slwi r0, r16, 1
    stb r3, 0x230(r1)
    mr r3, r15
    mr r6, r14
    add r7, r14, r0
    addi r8, r1, 0x230
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, lbl_8087F628
    lwz r14, lbl_8087EEC8
    lwz r4, 0xc8(r3)
    bl fn_8050B96C
    mr r5, r3
    mr r3, r14
    addi r4, r1, 0x770
    li r6, 0x100
    bl fn_8006F2F0
    lwz r0, 0x260(r1)
    sth r3, 0x238(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001748
    lbz r0, 0x260(r1)
    clrlwi r4, r0, 25
    b lbl_fn_804F8468_0000174C
lbl_fn_804F8468_00001748:
    lwz r4, 0x264(r1)
lbl_fn_804F8468_0000174C:
    lbz r0, 0x228(r1)
    addi r3, r1, 0x260
    stb r0, 0x22c(r1)
    addi r6, r1, 0x238
    addi r7, r1, 0x23a
    addi r8, r1, 0x22c
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x260(r1)
    la r3, lbl_8087E1C4
    addi r14, r3, 0x62
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_0000178C
    lbz r0, 0x260(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00001790
lbl_fn_804F8468_0000178C:
    lwz r15, 0x264(r1)
lbl_fn_804F8468_00001790:
    lbz r0, 0x224(r1)
    mr r3, r14
    stb r0, 0x220(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x260
    addi r8, r1, 0x220
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x260(r1)
    la r3, lbl_8087E1C4
    addi r14, r3, 0x78
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000017E0
    lbz r0, 0x260(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_000017E4
lbl_fn_804F8468_000017E0:
    lwz r15, 0x264(r1)
lbl_fn_804F8468_000017E4:
    lbz r0, 0x21c(r1)
    mr r3, r14
    stb r0, 0x218(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x260
    addi r8, r1, 0x218
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804F8468_00001830
    cmpwi r0, 0x1
    beq lbl_fn_804F8468_0000183C
    b lbl_fn_804F8468_00001848
lbl_fn_804F8468_00001830:
    lis r14, lbl_807917C8@ha
    addi r14, r14, lbl_807917C8@l
    b lbl_fn_804F8468_00001850
lbl_fn_804F8468_0000183C:
    lis r14, lbl_807917B8@ha
    addi r14, r14, lbl_807917B8@l
    b lbl_fn_804F8468_00001850
lbl_fn_804F8468_00001848:
    lis r14, lbl_807917A0@ha
    addi r14, r14, lbl_807917A0@l
lbl_fn_804F8468_00001850:
    lwz r0, 0x260(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001868
    lbz r0, 0x260(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_0000186C
lbl_fn_804F8468_00001868:
    lwz r15, 0x264(r1)
lbl_fn_804F8468_0000186C:
    lbz r0, 0x214(r1)
    mr r3, r14
    stb r0, 0x210(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x260
    addi r8, r1, 0x210
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x260(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000018B0
    addi r4, r1, 0x262
    b lbl_fn_804F8468_000018B4
lbl_fn_804F8468_000018B0:
    lwz r4, 0x268(r1)
lbl_fn_804F8468_000018B4:
    xoris r0, r28, 0x8000
    stw r0, 0x97c(r1)
    lis r14, lbl_80759748@ha
    lfs f6, lbl_80887570
    lfd f1, lbl_80759748@l(r14)
    li r5, -0x1
    lfd f0, 0x978(r1)
    fmr f7, f6
    lfs f4, lbl_80887608
    fmr f8, f6
    fsubs f1, f0, f1
    lfs f0, lbl_808875D8
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r6, 0x1
    fmadds f2, f4, f1, f0
    lfs f1, lbl_8088763C
    li r7, 0x1
    lfs f3, lbl_80887648
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    li r28, 0x2
    bl fn_80061824
    lwz r3, lbl_8087F628
    li r4, 0x3
    lfd f1, lbl_80759748@l(r14)
    lwz r0, 0x234(r3)
    addi r3, r3, 0x200
    xoris r0, r0, 0x8000
    stw r0, 0x974(r1)
    lfd f0, 0x970(r1)
    fsubs f1, f0, f1
    bl fn_8050E7E0
    lwz r3, lbl_8087F628
    fmr f31, f1
    lfd f1, lbl_80759748@l(r14)
    li r4, 0x3
    lwz r0, 0x238(r3)
    addi r3, r3, 0x200
    xoris r0, r0, 0x8000
    stw r0, 0x97c(r1)
    lfd f0, 0x978(r1)
    fsubs f1, f0, f1
    bl fn_8050E7E0
    lwz r3, lbl_8087F628
    fmr f30, f1
    lfd f1, lbl_80759748@l(r14)
    li r4, 0x3
    lwz r0, 0x214(r3)
    addi r3, r3, 0x200
    xoris r0, r0, 0x8000
    stw r0, 0x974(r1)
    lfd f0, 0x970(r1)
    fsubs f1, f0, f1
    bl fn_8050E7E0
    lwz r3, lbl_8087F628
    fmr f29, f1
    lfd f1, lbl_80759748@l(r14)
    li r4, 0x3
    lwz r0, 0x218(r3)
    addi r3, r3, 0x200
    xoris r0, r0, 0x8000
    stw r0, 0x97c(r1)
    lfd f0, 0x978(r1)
    fsubs f1, f0, f1
    bl fn_8050E7E0
    lfs f0, lbl_8088764C
    lis r4, lbl_80759E48@ha
    addi r4, r4, lbl_80759E48@l
    addi r3, r1, 0x270
    fmuls f1, f1, f0
    addi r4, r4, 0x27c
    fmuls f2, f29, f0
    fmuls f3, f30, f0
    fmuls f4, f31, f0
    crset 6
    bl sprintf
    xoris r0, r28, 0x8000
    stw r0, 0x974(r1)
    lfs f4, lbl_80887608
    addi r4, r1, 0x270
    lfd f2, lbl_80759748@l(r14)
    li r5, -0x1
    lfd f1, 0x970(r1)
    fmr f5, f4
    lfs f0, lbl_808875D8
    li r6, 0x1
    fsubs f2, f1, f2
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_8088763C
    lfs f3, lbl_80887648
    li r7, 0x0
    fmadds f2, f4, f2, f0
    lfs f6, lbl_80887570
    li r8, 0x0
    li r28, 0x3
    bl fn_800616C0
    la r3, lbl_8087E1C4
    li r0, 0x0
    addi r14, r3, 0x88
    stw r0, 0x254(r1)
    mr r3, r14
    addi r15, r1, 0x254
    stw r0, 0x258(r1)
    stw r0, 0x25c(r1)
    bl fn_80686A48
    mr r16, r3
    mr r3, r15
    mr r4, r16
    bl fn_800DBF68
    lbz r3, 0x20c(r1)
    slwi r0, r16, 1
    stb r3, 0x208(r1)
    mr r3, r15
    mr r6, r14
    add r7, r14, r0
    addi r8, r1, 0x208
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x4fc(r25)
    addi r0, r3, 0x1
    cmplwi r0, 0x2b
    bgt lbl_fn_804F8468_00001BBC
    lis r3, jumptable_807914BC@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807914BC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r14, lbl_80791AF4@ha
    addi r14, r14, lbl_80791AF4@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791AE8@ha
    addi r14, r14, lbl_80791AE8@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791ADC@ha
    addi r14, r14, lbl_80791ADC@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791AC8@ha
    addi r14, r14, lbl_80791AC8@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791AB8@ha
    addi r14, r14, lbl_80791AB8@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791AA4@ha
    addi r14, r14, lbl_80791AA4@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A90@ha
    addi r14, r14, lbl_80791A90@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A84@ha
    addi r14, r14, lbl_80791A84@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A70@ha
    addi r14, r14, lbl_80791A70@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A64@ha
    addi r14, r14, lbl_80791A64@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A58@ha
    addi r14, r14, lbl_80791A58@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A44@ha
    addi r14, r14, lbl_80791A44@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A30@ha
    addi r14, r14, lbl_80791A30@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A24@ha
    addi r14, r14, lbl_80791A24@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A10@ha
    addi r14, r14, lbl_80791A10@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791A00@ha
    addi r14, r14, lbl_80791A00@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_807919D4@ha
    addi r14, r14, lbl_807919D4@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_807919A8@ha
    addi r14, r14, lbl_807919A8@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791978@ha
    addi r14, r14, lbl_80791978@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791944@ha
    addi r14, r14, lbl_80791944@l
    b lbl_fn_804F8468_00001BC4
    lis r14, lbl_80791930@ha
    addi r14, r14, lbl_80791930@l
    b lbl_fn_804F8468_00001BC4
lbl_fn_804F8468_00001BBC:
    lis r14, lbl_80791918@ha
    addi r14, r14, lbl_80791918@l
lbl_fn_804F8468_00001BC4:
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001BDC
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00001BE0
lbl_fn_804F8468_00001BDC:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_00001BE0:
    lbz r0, 0x204(r1)
    mr r3, r14
    stb r0, 0x200(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x200
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x254(r1)
    la r3, lbl_8087E1C4
    addi r14, r3, 0x9e
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001C30
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00001C34
lbl_fn_804F8468_00001C30:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_00001C34:
    lbz r0, 0x1fc(r1)
    mr r3, r14
    stb r0, 0x1f8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1f8
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x540(r25)
    cmpwi r0, 0x0
    beq lbl_fn_804F8468_00001C84
    cmpwi r0, 0x1
    beq lbl_fn_804F8468_00001C90
    cmpwi r0, 0x2
    beq lbl_fn_804F8468_00001C9C
    b lbl_fn_804F8468_00001CA8
lbl_fn_804F8468_00001C84:
    lis r14, lbl_80791810@ha
    addi r14, r14, lbl_80791810@l
    b lbl_fn_804F8468_00001CB0
lbl_fn_804F8468_00001C90:
    lis r14, lbl_807917FC@ha
    addi r14, r14, lbl_807917FC@l
    b lbl_fn_804F8468_00001CB0
lbl_fn_804F8468_00001C9C:
    lis r14, lbl_807917F0@ha
    addi r14, r14, lbl_807917F0@l
    b lbl_fn_804F8468_00001CB0
lbl_fn_804F8468_00001CA8:
    lis r14, lbl_807917D8@ha
    addi r14, r14, lbl_807917D8@l
lbl_fn_804F8468_00001CB0:
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001CC8
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00001CCC
lbl_fn_804F8468_00001CC8:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_00001CCC:
    lbz r0, 0x1f4(r1)
    mr r3, r14
    stb r0, 0x1f0(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1f0
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x254(r1)
    la r3, lbl_8087E1C4
    addi r14, r3, 0xae
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001D1C
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00001D20
lbl_fn_804F8468_00001D1C:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_00001D20:
    lbz r0, 0x1ec(r1)
    mr r3, r14
    stb r0, 0x1e8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1e8
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x560(r25)
    cmplwi r0, 0xa
    bgt lbl_fn_804F8468_00001DF8
    lis r3, jumptable_80791490@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80791490@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r14, lbl_80791904@ha
    addi r14, r14, lbl_80791904@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_807918F0@ha
    addi r14, r14, lbl_807918F0@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_807918DC@ha
    addi r14, r14, lbl_807918DC@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_807918C8@ha
    addi r14, r14, lbl_807918C8@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_807918B4@ha
    addi r14, r14, lbl_807918B4@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_807918A0@ha
    addi r14, r14, lbl_807918A0@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_8079188C@ha
    addi r14, r14, lbl_8079188C@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_80791878@ha
    addi r14, r14, lbl_80791878@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_80791864@ha
    addi r14, r14, lbl_80791864@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_80791850@ha
    addi r14, r14, lbl_80791850@l
    b lbl_fn_804F8468_00001E00
    lis r14, lbl_80791840@ha
    addi r14, r14, lbl_80791840@l
    b lbl_fn_804F8468_00001E00
lbl_fn_804F8468_00001DF8:
    lis r14, lbl_80791828@ha
    addi r14, r14, lbl_80791828@l
lbl_fn_804F8468_00001E00:
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001E18
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00001E1C
lbl_fn_804F8468_00001E18:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_00001E1C:
    lbz r0, 0x1e4(r1)
    mr r3, r14
    stb r0, 0x1e0(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1e0
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x564(r25)
    addi r4, r1, 0x770
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x254(r1)
    la r3, lbl_8087E1C4
    addi r14, r3, 0xc0
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001E7C
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00001E80
lbl_fn_804F8468_00001E7C:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_00001E80:
    lbz r0, 0x1dc(r1)
    mr r3, r14
    stb r0, 0x1d8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1d8
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001EC8
    lbz r0, 0x254(r1)
    clrlwi r14, r0, 25
    b lbl_fn_804F8468_00001ECC
lbl_fn_804F8468_00001EC8:
    lwz r14, 0x258(r1)
lbl_fn_804F8468_00001ECC:
    lbz r0, 0x1d4(r1)
    addi r3, r1, 0x770
    stb r0, 0x1d0(r1)
    bl fn_80686A48
    addi r6, r1, 0x770
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1d0
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x568(r25)
    addi r4, r1, 0x770
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x254(r1)
    la r3, lbl_8087E1C4
    addi r14, r3, 0xd0
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001F30
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00001F34
lbl_fn_804F8468_00001F30:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_00001F34:
    lbz r0, 0x1cc(r1)
    mr r3, r14
    stb r0, 0x1c8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1c8
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001F7C
    lbz r0, 0x254(r1)
    clrlwi r14, r0, 25
    b lbl_fn_804F8468_00001F80
lbl_fn_804F8468_00001F7C:
    lwz r14, 0x258(r1)
lbl_fn_804F8468_00001F80:
    lbz r0, 0x1c4(r1)
    addi r3, r1, 0x770
    stb r0, 0x1c0(r1)
    bl fn_80686A48
    addi r6, r1, 0x770
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1c0
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00001FC8
    addi r4, r1, 0x256
    b lbl_fn_804F8468_00001FCC
lbl_fn_804F8468_00001FC8:
    lwz r4, 0x25c(r1)
lbl_fn_804F8468_00001FCC:
    xoris r0, r28, 0x8000
    stw r0, 0x97c(r1)
    lis r3, lbl_80759748@ha
    lfs f6, lbl_80887570
    lfd f1, lbl_80759748@l(r3)
    li r5, -0x1
    lfd f0, 0x978(r1)
    fmr f7, f6
    lfs f4, lbl_80887608
    fmr f8, f6
    fsubs f1, f0, f1
    lfs f0, lbl_808875D8
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r6, 0x1
    fmadds f2, f4, f1, f0
    lfs f1, lbl_8088763C
    li r7, 0x1
    lfs f3, lbl_80887648
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    li r28, 0x4
    bl fn_80061824
    lwz r0, 0x254(r1)
    la r3, lbl_8087E1C4
    addi r14, r3, 0xe2
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_0000204C
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002050
lbl_fn_804F8468_0000204C:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_00002050:
    lbz r0, 0x1bc(r1)
    mr r3, r14
    stb r0, 0x1b8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1b8
    add r7, r14, r0
    li r4, 0x0
    bl fn_8006F72C
    la r3, lbl_8087E1C4
    lbz r15, 0x1b4(r1)
    lbz r14, 0x1ac(r1)
    mr r18, r25
    addi r16, r3, 0xfe
    li r19, 0x0
lbl_fn_804F8468_00002098:
    lwz r3, 0x56c(r18)
    addi r4, r1, 0x770
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000020C0
    lbz r0, 0x254(r1)
    clrlwi r17, r0, 25
    b lbl_fn_804F8468_000020C4
lbl_fn_804F8468_000020C0:
    lwz r17, 0x258(r1)
lbl_fn_804F8468_000020C4:
    stb r15, 0x1b0(r1)
    addi r3, r1, 0x770
    bl fn_80686A48
    addi r6, r1, 0x770
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r17
    addi r3, r1, 0x254
    addi r8, r1, 0x1b0
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_0000210C
    lbz r0, 0x254(r1)
    clrlwi r17, r0, 25
    b lbl_fn_804F8468_00002110
lbl_fn_804F8468_0000210C:
    lwz r17, 0x258(r1)
lbl_fn_804F8468_00002110:
    stb r14, 0x1a8(r1)
    mr r3, r16
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r17
    mr r6, r16
    addi r3, r1, 0x254
    addi r8, r1, 0x1a8
    add r7, r16, r0
    li r5, 0x0
    bl fn_8006F72C
    addi r19, r19, 0x1
    addi r18, r18, 0x4
    cmpwi r19, 0x8
    blt lbl_fn_804F8468_00002098
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002160
    addi r4, r1, 0x256
    b lbl_fn_804F8468_00002164
lbl_fn_804F8468_00002160:
    lwz r4, 0x25c(r1)
lbl_fn_804F8468_00002164:
    xoris r0, r28, 0x8000
    stw r0, 0x974(r1)
    lis r3, lbl_80759748@ha
    lfs f6, lbl_80887570
    lfd f1, lbl_80759748@l(r3)
    li r5, -0x1
    lfd f0, 0x970(r1)
    fmr f7, f6
    lfs f4, lbl_80887608
    fmr f8, f6
    fsubs f1, f0, f1
    lfs f0, lbl_808875D8
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r6, 0x1
    fmadds f2, f4, f1, f0
    lfs f1, lbl_8088763C
    li r7, 0x1
    lfs f3, lbl_80887648
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    li r28, 0x5
    bl fn_80061824
    lwz r0, 0x254(r1)
    la r3, lbl_8087E1C4
    addi r14, r3, 0x102
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000021E4
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_000021E8
lbl_fn_804F8468_000021E4:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_000021E8:
    lbz r0, 0x1a4(r1)
    mr r3, r14
    stb r0, 0x1a0(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x1a0
    add r7, r14, r0
    li r4, 0x0
    bl fn_8006F72C
    la r3, lbl_8087E1C4
    lbz r15, 0x19c(r1)
    lbz r14, 0x194(r1)
    mr r18, r25
    addi r16, r3, 0xfe
    li r19, 0x0
lbl_fn_804F8468_00002230:
    lwz r3, 0x58c(r18)
    addi r4, r1, 0x770
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002258
    lbz r0, 0x254(r1)
    clrlwi r17, r0, 25
    b lbl_fn_804F8468_0000225C
lbl_fn_804F8468_00002258:
    lwz r17, 0x258(r1)
lbl_fn_804F8468_0000225C:
    stb r15, 0x198(r1)
    addi r3, r1, 0x770
    bl fn_80686A48
    addi r6, r1, 0x770
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r17
    addi r3, r1, 0x254
    addi r8, r1, 0x198
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000022A4
    lbz r0, 0x254(r1)
    clrlwi r17, r0, 25
    b lbl_fn_804F8468_000022A8
lbl_fn_804F8468_000022A4:
    lwz r17, 0x258(r1)
lbl_fn_804F8468_000022A8:
    stb r14, 0x190(r1)
    mr r3, r16
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r17
    mr r6, r16
    addi r3, r1, 0x254
    addi r8, r1, 0x190
    add r7, r16, r0
    li r5, 0x0
    bl fn_8006F72C
    addi r19, r19, 0x1
    addi r18, r18, 0x4
    cmpwi r19, 0x3
    blt lbl_fn_804F8468_00002230
    lwz r0, 0x254(r1)
    la r3, lbl_8087E1C4
    addi r14, r3, 0x116
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002304
    lbz r0, 0x254(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002308
lbl_fn_804F8468_00002304:
    lwz r15, 0x258(r1)
lbl_fn_804F8468_00002308:
    lbz r0, 0x18c(r1)
    mr r3, r14
    stb r0, 0x188(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x188
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x598(r25)
    addi r4, r1, 0x770
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002360
    lbz r0, 0x254(r1)
    clrlwi r14, r0, 25
    b lbl_fn_804F8468_00002364
lbl_fn_804F8468_00002360:
    lwz r14, 0x258(r1)
lbl_fn_804F8468_00002364:
    lbz r0, 0x184(r1)
    addi r3, r1, 0x770
    stb r0, 0x180(r1)
    bl fn_80686A48
    addi r6, r1, 0x770
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r14
    addi r3, r1, 0x254
    addi r8, r1, 0x180
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000023AC
    addi r4, r1, 0x256
    b lbl_fn_804F8468_000023B0
lbl_fn_804F8468_000023AC:
    lwz r4, 0x25c(r1)
lbl_fn_804F8468_000023B0:
    xoris r0, r28, 0x8000
    stw r0, 0x97c(r1)
    lis r3, lbl_80759748@ha
    lfs f6, lbl_80887570
    lfd f1, lbl_80759748@l(r3)
    li r5, -0x1
    lfd f0, 0x978(r1)
    fmr f7, f6
    lfs f4, lbl_80887608
    fmr f8, f6
    fsubs f1, f0, f1
    lfs f0, lbl_808875D8
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r6, 0x1
    fmadds f2, f4, f1, f0
    lfs f1, lbl_8088763C
    li r7, 0x1
    lfs f3, lbl_80887648
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    li r28, 0x6
    bl fn_80061824
    lwz r0, 0x520(r25)
    cmpwi r0, 0x0
    beq lbl_fn_804F8468_00002BD4
    la r3, lbl_8087E1C4
    li r0, 0x0
    addi r14, r3, 0x12a
    stw r0, 0x248(r1)
    mr r3, r14
    addi r15, r1, 0x248
    stw r0, 0x24c(r1)
    stw r0, 0x250(r1)
    bl fn_80686A48
    mr r16, r3
    mr r3, r15
    mr r4, r16
    bl fn_800DBF68
    lbz r3, 0x17c(r1)
    slwi r0, r16, 1
    stb r3, 0x178(r1)
    mr r3, r15
    mr r6, r14
    add r7, r14, r0
    addi r8, r1, 0x178
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F8468_000024A8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F8468_000024A0
    li r3, 0x1
    b lbl_fn_804F8468_000024C0
lbl_fn_804F8468_000024A0:
    bl fn_806B0DE0
    b lbl_fn_804F8468_000024C0
lbl_fn_804F8468_000024A8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F8468_000024BC
    li r3, 0x1
    b lbl_fn_804F8468_000024C0
lbl_fn_804F8468_000024BC:
    bl fn_806A8E70
lbl_fn_804F8468_000024C0:
    addi r4, r1, 0x570
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000024E4
    lbz r0, 0x248(r1)
    clrlwi r14, r0, 25
    b lbl_fn_804F8468_000024E8
lbl_fn_804F8468_000024E4:
    lwz r14, 0x24c(r1)
lbl_fn_804F8468_000024E8:
    lbz r0, 0x174(r1)
    addi r3, r1, 0x570
    stb r0, 0x170(r1)
    bl fn_80686A48
    addi r6, r1, 0x570
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r14
    addi r3, r1, 0x248
    addi r8, r1, 0x170
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002530
    addi r4, r1, 0x24a
    b lbl_fn_804F8468_00002534
lbl_fn_804F8468_00002530:
    lwz r4, 0x250(r1)
lbl_fn_804F8468_00002534:
    xoris r0, r28, 0x8000
    stw r0, 0x974(r1)
    lis r15, lbl_80759748@ha
    lfs f6, lbl_80887570
    lfd f1, lbl_80759748@l(r15)
    li r5, -0x1
    lfd f0, 0x970(r1)
    fmr f7, f6
    lfs f4, lbl_80887608
    fmr f8, f6
    fsubs f1, f0, f1
    lfs f0, lbl_808875D8
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r6, 0x1
    fmadds f2, f4, f1, f0
    lfs f1, lbl_8088763C
    li r7, 0x1
    lfs f3, lbl_80887648
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    li r28, 0x7
    bl fn_80061824
    lbz r0, 0x154(r1)
    la r21, lbl_8087E1C4
    stw r0, 0x980(r1)
    addi r20, r21, 0x142
    lbz r0, 0x14c(r1)
    addi r19, r21, 0x146
    stw r0, 0x984(r1)
    addi r18, r21, 0x152
    lbz r0, 0x144(r1)
    addi r17, r21, 0x160
    stw r0, 0x988(r1)
    addi r31, r21, 0x180
    lbz r0, 0x13c(r1)
    addi r30, r21, 0x190
    stw r0, 0x98c(r1)
    li r27, 0x0
    lbz r0, 0x11c(r1)
    li r24, 0x0
    stw r0, 0x990(r1)
    lbz r0, 0x114(r1)
    stw r0, 0x994(r1)
    lbz r0, 0x10c(r1)
    stw r0, 0x998(r1)
    lbz r0, 0x104(r1)
    lbz r22, 0x16c(r1)
    lbz r23, 0x164(r1)
    lbz r14, 0x15c(r1)
    stw r0, 0x99c(r1)
    lfd f31, lbl_80759748@l(r15)
    lfs f30, lbl_80887608
    lfs f29, lbl_808875D8
    b lbl_fn_804F8468_00002BB0
lbl_fn_804F8468_00002614:
    lwz r5, lbl_8087F628
    li r26, -0x1
    add r3, r5, r24
    lwz r0, 0x280(r3)
    addi r29, r3, 0x274
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_0000263C
    lis r3, 0xff81
    subi r26, r3, 0x7f80
    b lbl_fn_804F8468_0000269C
lbl_fn_804F8468_0000263C:
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F8468_0000266C
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F8468_00002660
    li r0, 0x0
    b lbl_fn_804F8468_00002688
lbl_fn_804F8468_00002660:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F8468_00002688
lbl_fn_804F8468_0000266C:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F8468_00002680
    li r3, 0x0
    b lbl_fn_804F8468_00002684
lbl_fn_804F8468_00002680:
    bl fn_806A8E40
lbl_fn_804F8468_00002684:
    clrlwi r0, r3, 24
lbl_fn_804F8468_00002688:
    lbz r3, 0x0(r29)
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804F8468_0000269C
    li r26, -0xc0
lbl_fn_804F8468_0000269C:
    mr r3, r27
    addi r4, r1, 0x570
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000026C4
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_000026C8
lbl_fn_804F8468_000026C4:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_000026C8:
    stb r22, 0x168(r1)
    mr r3, r20
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r15
    mr r6, r20
    addi r3, r1, 0x248
    addi r8, r1, 0x168
    add r7, r20, r0
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_0000270C
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002710
lbl_fn_804F8468_0000270C:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_00002710:
    stb r23, 0x160(r1)
    addi r3, r1, 0x570
    bl fn_80686A48
    addi r6, r1, 0x570
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r15
    addi r3, r1, 0x248
    addi r8, r1, 0x160
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002758
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_0000275C
lbl_fn_804F8468_00002758:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_0000275C:
    stb r14, 0x158(r1)
    mr r3, r19
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r19
    addi r3, r1, 0x248
    addi r8, r1, 0x158
    add r7, r19, r0
    li r5, 0x0
    bl fn_8006F72C
    lbz r3, 0x0(r29)
    addi r4, r1, 0x570
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000027B0
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_000027B4
lbl_fn_804F8468_000027B0:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_000027B4:
    lwz r0, 0x980(r1)
    addi r3, r1, 0x570
    stb r0, 0x150(r1)
    bl fn_80686A48
    addi r6, r1, 0x570
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r15
    addi r3, r1, 0x248
    addi r8, r1, 0x150
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002800
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002804
lbl_fn_804F8468_00002800:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_00002804:
    lwz r0, 0x984(r1)
    mr r3, r18
    stb r0, 0x148(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r18
    addi r3, r1, 0x248
    addi r8, r1, 0x148
    add r7, r18, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x4(r29)
    addi r4, r1, 0x570
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_0000285C
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002860
lbl_fn_804F8468_0000285C:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_00002860:
    lwz r0, 0x988(r1)
    addi r3, r1, 0x570
    stb r0, 0x140(r1)
    bl fn_80686A48
    addi r6, r1, 0x570
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r15
    addi r3, r1, 0x248
    addi r8, r1, 0x140
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000028AC
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_000028B0
lbl_fn_804F8468_000028AC:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_000028B0:
    lwz r0, 0x98c(r1)
    mr r3, r17
    stb r0, 0x138(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r17
    addi r3, r1, 0x248
    addi r8, r1, 0x138
    add r7, r17, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0xc(r29)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_804F8468_0000293C
    lwz r0, 0x248(r1)
    addi r16, r21, 0x170
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002908
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_0000290C
lbl_fn_804F8468_00002908:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_0000290C:
    lbz r0, 0x134(r1)
    mr r3, r16
    stb r0, 0x130(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r16
    addi r3, r1, 0x248
    addi r8, r1, 0x130
    add r7, r16, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_0000293C:
    lwz r0, 0xc(r29)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_804F8468_00002998
    lwz r0, 0x248(r1)
    addi r16, r21, 0x176
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002964
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002968
lbl_fn_804F8468_00002964:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_00002968:
    lbz r0, 0x12c(r1)
    mr r3, r16
    stb r0, 0x128(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r16
    addi r3, r1, 0x248
    addi r8, r1, 0x128
    add r7, r16, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_00002998:
    lwz r0, 0xc(r29)
    extrwi. r0, r0, 1, 4
    beq lbl_fn_804F8468_000029F4
    lwz r0, 0x248(r1)
    addi r16, r21, 0x17c
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000029C0
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_000029C4
lbl_fn_804F8468_000029C0:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_000029C4:
    lbz r0, 0x124(r1)
    mr r3, r16
    stb r0, 0x120(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r16
    addi r3, r1, 0x248
    addi r8, r1, 0x120
    add r7, r16, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_000029F4:
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002A0C
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002A10
lbl_fn_804F8468_00002A0C:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_00002A10:
    lwz r0, 0x990(r1)
    mr r3, r31
    stb r0, 0x118(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r31
    addi r3, r1, 0x248
    addi r8, r1, 0x118
    add r7, r31, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002A58
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002A5C
lbl_fn_804F8468_00002A58:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_00002A5C:
    lwz r0, 0x994(r1)
    addi r3, r29, 0x10
    stb r0, 0x110(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    add r5, r29, r0
    addi r3, r1, 0x248
    addi r7, r5, 0x10
    addi r6, r29, 0x10
    addi r8, r1, 0x110
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002AA8
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002AAC
lbl_fn_804F8468_00002AA8:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_00002AAC:
    lwz r0, 0x998(r1)
    mr r3, r30
    stb r0, 0x108(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r15
    mr r6, r30
    addi r3, r1, 0x248
    addi r8, r1, 0x108
    add r7, r30, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x8(r29)
    addi r4, r1, 0x570
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002B04
    lbz r0, 0x248(r1)
    clrlwi r15, r0, 25
    b lbl_fn_804F8468_00002B08
lbl_fn_804F8468_00002B04:
    lwz r15, 0x24c(r1)
lbl_fn_804F8468_00002B08:
    lwz r0, 0x99c(r1)
    addi r3, r1, 0x570
    stb r0, 0x100(r1)
    bl fn_80686A48
    addi r6, r1, 0x570
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r15
    addi r3, r1, 0x248
    addi r8, r1, 0x100
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002B50
    addi r4, r1, 0x24a
    b lbl_fn_804F8468_00002B54
lbl_fn_804F8468_00002B50:
    lwz r4, 0x250(r1)
lbl_fn_804F8468_00002B54:
    xoris r0, r28, 0x8000
    stw r0, 0x97c(r1)
    lfs f6, lbl_80887570
    fmr f4, f30
    lfd f0, 0x978(r1)
    fmr f5, f30
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fsubs f0, f0, f31
    fmr f8, f6
    lfs f1, lbl_8088763C
    lfs f3, lbl_80887648
    fmadds f2, f30, f0, f29
    mr r5, r26
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    addi r28, r28, 0x1
    bl fn_80061824
    addi r27, r27, 0x1
    addi r24, r24, 0x34
lbl_fn_804F8468_00002BB0:
    lwz r4, lbl_8087F628
    lwz r0, 0x264(r4)
    cmpw r27, r0
    blt lbl_fn_804F8468_00002614
    lwz r0, 0x248(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804F8468_00002BD4
    lwz r3, 0x250(r1)
    bl dtor_80084684
lbl_fn_804F8468_00002BD4:
    lwz r0, 0x524(r25)
    cmpwi r0, 0x0
    beq lbl_fn_804F8468_000038D0
    la r3, lbl_8087E1C4
    li r0, 0x0
    addi r14, r3, 0x1a0
    stw r0, 0x23c(r1)
    mr r3, r14
    addi r15, r1, 0x23c
    stw r0, 0x240(r1)
    stw r0, 0x244(r1)
    bl fn_80686A48
    mr r16, r3
    mr r3, r15
    mr r4, r16
    bl fn_800DBF68
    lbz r3, 0xfc(r1)
    slwi r0, r16, 1
    stb r3, 0xf8(r1)
    mr r3, r15
    mr r6, r14
    add r7, r14, r0
    addi r8, r1, 0xf8
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x5e8(r25)
    addi r4, r1, 0x370
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002C64
    lbz r0, 0x23c(r1)
    clrlwi r14, r0, 25
    b lbl_fn_804F8468_00002C68
lbl_fn_804F8468_00002C64:
    lwz r14, 0x240(r1)
lbl_fn_804F8468_00002C68:
    lbz r0, 0xf4(r1)
    addi r3, r1, 0x370
    stb r0, 0xf0(r1)
    bl fn_80686A48
    addi r6, r1, 0x370
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r14
    addi r3, r1, 0x23c
    addi r8, r1, 0xf0
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002CB0
    addi r4, r1, 0x23e
    b lbl_fn_804F8468_00002CB4
lbl_fn_804F8468_00002CB0:
    lwz r4, 0x244(r1)
lbl_fn_804F8468_00002CB4:
    xoris r0, r28, 0x8000
    stw r0, 0x974(r1)
    lis r14, lbl_80759748@ha
    lfs f6, lbl_80887570
    lfd f1, lbl_80759748@l(r14)
    li r5, -0x1
    lfd f0, 0x970(r1)
    fmr f7, f6
    lfs f4, lbl_80887608
    fmr f8, f6
    fsubs f1, f0, f1
    lfs f0, lbl_808875D8
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r6, 0x1
    fmadds f2, f4, f1, f0
    lfs f1, lbl_8088763C
    li r7, 0x1
    lfs f3, lbl_80887648
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    addi r28, r28, 0x1
    bl fn_80061824
    lwz r0, 0x5e8(r25)
    li r17, 0x0
    li r19, 0x0
    cmpwi r0, 0x0
    ble lbl_fn_804F8468_000038BC
    lbz r0, 0xcc(r1)
    la r23, lbl_8087E1C4
    stw r0, 0x9a0(r1)
    addi r24, r23, 0x142
    lbz r0, 0x6c(r1)
    addi r26, r23, 0x146
    stw r0, 0x9a4(r1)
    addi r27, r23, 0x1bc
    lbz r0, 0x14(r1)
    addi r15, r23, 0xd0
    stw r0, 0x9a8(r1)
    lbz r0, 0xc(r1)
    lfd f29, lbl_80759748@l(r14)
    addi r14, r23, 0x1ce
    lbz r22, 0xec(r1)
    lbz r21, 0xe4(r1)
    lbz r20, 0xdc(r1)
    lbz r31, 0xd4(r1)
    stw r0, 0x9ac(r1)
    lfs f30, lbl_80887608
    lfs f31, lbl_808875D8
    b lbl_fn_804F8468_000038B0
lbl_fn_804F8468_00002D80:
    lwz r0, 0x5e4(r25)
    li r18, -0x1
    add r16, r0, r19
    lwz r0, 0xd0(r16)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002DA4
    lis r3, 0xff81
    subi r18, r3, 0x7f80
    b lbl_fn_804F8468_00002E2C
lbl_fn_804F8468_00002DA4:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F8468_00002DD8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F8468_00002DCC
    li r0, 0x0
    b lbl_fn_804F8468_00002DF4
lbl_fn_804F8468_00002DCC:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F8468_00002DF4
lbl_fn_804F8468_00002DD8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F8468_00002DEC
    li r3, 0x0
    b lbl_fn_804F8468_00002DF0
lbl_fn_804F8468_00002DEC:
    bl fn_806A8E40
lbl_fn_804F8468_00002DF0:
    clrlwi r0, r3, 24
lbl_fn_804F8468_00002DF4:
    lbz r3, 0xcc(r16)
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804F8468_00002E0C
    li r18, -0xc0
    b lbl_fn_804F8468_00002E2C
lbl_fn_804F8468_00002E0C:
    lwz r3, 0x0(r16)
    cmpwi r3, 0x0
    beq lbl_fn_804F8468_00002E2C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804F8468_00002E2C
    lis r18, 0xff80
lbl_fn_804F8468_00002E2C:
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002E44
    lbz r0, 0x23c(r1)
    clrlwi r29, r0, 25
    b lbl_fn_804F8468_00002E48
lbl_fn_804F8468_00002E44:
    lwz r29, 0x240(r1)
lbl_fn_804F8468_00002E48:
    stb r22, 0xe8(r1)
    mr r3, r24
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r29
    mr r6, r24
    addi r3, r1, 0x23c
    addi r8, r1, 0xe8
    add r7, r24, r0
    li r4, 0x0
    bl fn_8006F72C
    mr r3, r17
    addi r4, r1, 0x370
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002E9C
    lbz r0, 0x23c(r1)
    clrlwi r29, r0, 25
    b lbl_fn_804F8468_00002EA0
lbl_fn_804F8468_00002E9C:
    lwz r29, 0x240(r1)
lbl_fn_804F8468_00002EA0:
    stb r21, 0xe0(r1)
    addi r3, r1, 0x370
    bl fn_80686A48
    addi r6, r1, 0x370
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0xe0
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002EE8
    lbz r0, 0x23c(r1)
    clrlwi r29, r0, 25
    b lbl_fn_804F8468_00002EEC
lbl_fn_804F8468_00002EE8:
    lwz r29, 0x240(r1)
lbl_fn_804F8468_00002EEC:
    stb r20, 0xd8(r1)
    mr r3, r26
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r29
    mr r6, r26
    addi r3, r1, 0x23c
    addi r8, r1, 0xd8
    add r7, r26, r0
    li r5, 0x0
    bl fn_8006F72C
    lbz r3, 0xcc(r16)
    addi r4, r1, 0x370
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002F40
    lbz r0, 0x23c(r1)
    clrlwi r29, r0, 25
    b lbl_fn_804F8468_00002F44
lbl_fn_804F8468_00002F40:
    lwz r29, 0x240(r1)
lbl_fn_804F8468_00002F44:
    stb r31, 0xd0(r1)
    addi r3, r1, 0x370
    bl fn_80686A48
    addi r6, r1, 0x370
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0xd0
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002F8C
    lbz r0, 0x23c(r1)
    clrlwi r29, r0, 25
    b lbl_fn_804F8468_00002F90
lbl_fn_804F8468_00002F8C:
    lwz r29, 0x240(r1)
lbl_fn_804F8468_00002F90:
    lwz r0, 0x9a0(r1)
    mr r3, r27
    stb r0, 0xc8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r29
    mr r6, r27
    addi r3, r1, 0x23c
    addi r8, r1, 0xc8
    add r7, r27, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0xd0(r16)
    srwi. r0, r0, 31
    beq lbl_fn_804F8468_0000301C
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x1e0
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00002FE8
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_00002FEC
lbl_fn_804F8468_00002FE8:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_00002FEC:
    lbz r0, 0xc4(r1)
    mr r3, r29
    stb r0, 0xc0(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0xc0
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_0000301C:
    lwz r0, 0xd0(r16)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_804F8468_00003078
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x1e6
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003044
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_00003048
lbl_fn_804F8468_00003044:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_00003048:
    lbz r0, 0xbc(r1)
    mr r3, r29
    stb r0, 0xb8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0xb8
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_00003078:
    lwz r0, 0xd0(r16)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_804F8468_000030D4
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x1ec
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000030A0
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_000030A4
lbl_fn_804F8468_000030A0:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_000030A4:
    lbz r0, 0xb4(r1)
    mr r3, r29
    stb r0, 0xb0(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0xb0
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_000030D4:
    lwz r0, 0xd0(r16)
    extrwi. r0, r0, 1, 4
    beq lbl_fn_804F8468_00003130
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x1f2
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000030FC
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_00003100
lbl_fn_804F8468_000030FC:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_00003100:
    lbz r0, 0xac(r1)
    mr r3, r29
    stb r0, 0xa8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0xa8
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_00003130:
    lwz r0, 0xd0(r16)
    extrwi. r0, r0, 1, 5
    beq lbl_fn_804F8468_0000318C
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x1f8
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003158
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_0000315C
lbl_fn_804F8468_00003158:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_0000315C:
    lbz r0, 0xa4(r1)
    mr r3, r29
    stb r0, 0xa0(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0xa0
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_0000318C:
    lwz r0, 0xd0(r16)
    extrwi. r0, r0, 4, 6
    beq lbl_fn_804F8468_0000329C
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x1fe
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000031B4
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_000031B8
lbl_fn_804F8468_000031B4:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_000031B8:
    lbz r0, 0x9c(r1)
    mr r3, r29
    stb r0, 0x98(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x98
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0xd0(r16)
    addi r4, r1, 0x370
    li r5, 0xa
    extrwi r3, r0, 4, 6
    bl fn_8068B2A0
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003214
    lbz r0, 0x23c(r1)
    clrlwi r29, r0, 25
    b lbl_fn_804F8468_00003218
lbl_fn_804F8468_00003214:
    lwz r29, 0x240(r1)
lbl_fn_804F8468_00003218:
    lbz r0, 0x94(r1)
    addi r3, r1, 0x370
    stb r0, 0x90(r1)
    bl fn_80686A48
    addi r6, r1, 0x370
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x90
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x142
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003268
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_0000326C
lbl_fn_804F8468_00003268:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_0000326C:
    lbz r0, 0x8c(r1)
    mr r3, r29
    stb r0, 0x88(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x88
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_0000329C:
    lwz r0, 0xd0(r16)
    extrwi. r0, r0, 8, 10
    beq lbl_fn_804F8468_000033AC
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x208
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000032C4
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_000032C8
lbl_fn_804F8468_000032C4:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_000032C8:
    lbz r0, 0x84(r1)
    mr r3, r29
    stb r0, 0x80(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x80
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0xd0(r16)
    addi r4, r1, 0x370
    li r5, 0xa
    extrwi r3, r0, 8, 10
    bl fn_8068B2A0
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003324
    lbz r0, 0x23c(r1)
    clrlwi r29, r0, 25
    b lbl_fn_804F8468_00003328
lbl_fn_804F8468_00003324:
    lwz r29, 0x240(r1)
lbl_fn_804F8468_00003328:
    lbz r0, 0x7c(r1)
    addi r3, r1, 0x370
    stb r0, 0x78(r1)
    bl fn_80686A48
    addi r6, r1, 0x370
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x78
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x142
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003378
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_0000337C
lbl_fn_804F8468_00003378:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_0000337C:
    lbz r0, 0x74(r1)
    mr r3, r29
    stb r0, 0x70(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x70
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_000033AC:
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000033C4
    lbz r0, 0x23c(r1)
    clrlwi r29, r0, 25
    b lbl_fn_804F8468_000033C8
lbl_fn_804F8468_000033C4:
    lwz r29, 0x240(r1)
lbl_fn_804F8468_000033C8:
    lwz r0, 0x9a4(r1)
    mr r3, r14
    stb r0, 0x68(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r29
    mr r6, r14
    addi r3, r1, 0x23c
    addi r8, r1, 0x68
    add r7, r14, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x0(r16)
    cmpwi r3, 0x0
    bne lbl_fn_804F8468_00003458
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x214
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003420
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_00003424
lbl_fn_804F8468_00003420:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_00003424:
    lbz r0, 0x64(r1)
    mr r3, r29
    stb r0, 0x60(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x60
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
    b lbl_fn_804F8468_00003790
lbl_fn_804F8468_00003458:
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F8468_000034BC
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x220
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003484
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_00003488
lbl_fn_804F8468_00003484:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_00003488:
    lbz r0, 0x5c(r1)
    mr r3, r29
    stb r0, 0x58(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x58
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
    b lbl_fn_804F8468_0000350C
lbl_fn_804F8468_000034BC:
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x142
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000034D8
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_000034DC
lbl_fn_804F8468_000034D8:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_000034DC:
    lbz r0, 0x54(r1)
    mr r3, r29
    stb r0, 0x50(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x50
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_0000350C:
    lwz r3, 0x0(r16)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_804F8468_00003574
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x224
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_0000353C
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_00003540
lbl_fn_804F8468_0000353C:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_00003540:
    lbz r0, 0x4c(r1)
    mr r3, r29
    stb r0, 0x48(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x48
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
    b lbl_fn_804F8468_000035C4
lbl_fn_804F8468_00003574:
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x142
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003590
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_00003594
lbl_fn_804F8468_00003590:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_00003594:
    lbz r0, 0x44(r1)
    mr r3, r29
    stb r0, 0x40(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x40
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_000035C4:
    lwz r3, 0x0(r16)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_804F8468_00003624
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x228
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000035F0
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_000035F4
lbl_fn_804F8468_000035F0:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_000035F4:
    lbz r0, 0x3c(r1)
    mr r3, r29
    stb r0, 0x38(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x38
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_00003624:
    lwz r3, 0x0(r16)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_804F8468_00003688
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x230
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003650
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_00003654
lbl_fn_804F8468_00003650:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_00003654:
    lbz r0, 0x34(r1)
    mr r3, r29
    stb r0, 0x30(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x30
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
    b lbl_fn_804F8468_00003790
lbl_fn_804F8468_00003688:
    cmpwi r0, 0x1
    bne lbl_fn_804F8468_000036E4
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x238
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000036AC
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_000036B0
lbl_fn_804F8468_000036AC:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_000036B0:
    lbz r0, 0x2c(r1)
    mr r3, r29
    stb r0, 0x28(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x28
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
    b lbl_fn_804F8468_00003790
lbl_fn_804F8468_000036E4:
    cmpwi r0, 0x2
    bne lbl_fn_804F8468_00003740
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x240
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003708
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_0000370C
lbl_fn_804F8468_00003708:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_0000370C:
    lbz r0, 0x24(r1)
    mr r3, r29
    stb r0, 0x20(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x20
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
    b lbl_fn_804F8468_00003790
lbl_fn_804F8468_00003740:
    lwz r0, 0x23c(r1)
    addi r29, r23, 0x246
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_0000375C
    lbz r0, 0x23c(r1)
    clrlwi r30, r0, 25
    b lbl_fn_804F8468_00003760
lbl_fn_804F8468_0000375C:
    lwz r30, 0x240(r1)
lbl_fn_804F8468_00003760:
    lbz r0, 0x1c(r1)
    mr r3, r29
    stb r0, 0x18(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r30
    mr r6, r29
    addi r3, r1, 0x23c
    addi r8, r1, 0x18
    add r7, r29, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_804F8468_00003790:
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_000037A8
    lbz r0, 0x23c(r1)
    clrlwi r29, r0, 25
    b lbl_fn_804F8468_000037AC
lbl_fn_804F8468_000037A8:
    lwz r29, 0x240(r1)
lbl_fn_804F8468_000037AC:
    lwz r0, 0x9a8(r1)
    mr r3, r15
    stb r0, 0x10(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r29
    mr r6, r15
    addi r3, r1, 0x23c
    addi r8, r1, 0x10
    add r7, r15, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0xdc(r16)
    addi r4, r1, 0x370
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003804
    lbz r0, 0x23c(r1)
    clrlwi r16, r0, 25
    b lbl_fn_804F8468_00003808
lbl_fn_804F8468_00003804:
    lwz r16, 0x240(r1)
lbl_fn_804F8468_00003808:
    lwz r0, 0x9ac(r1)
    addi r3, r1, 0x370
    stb r0, 0x8(r1)
    bl fn_80686A48
    addi r6, r1, 0x370
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r16
    addi r3, r1, 0x23c
    addi r8, r1, 0x8
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804F8468_00003850
    addi r4, r1, 0x23e
    b lbl_fn_804F8468_00003854
lbl_fn_804F8468_00003850:
    lwz r4, 0x244(r1)
lbl_fn_804F8468_00003854:
    xoris r0, r28, 0x8000
    stw r0, 0x97c(r1)
    lfs f6, lbl_80887570
    fmr f4, f30
    lfd f0, 0x978(r1)
    fmr f5, f30
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fsubs f0, f0, f29
    fmr f8, f6
    lfs f1, lbl_8088763C
    lfs f3, lbl_80887648
    fmadds f2, f30, f0, f31
    mr r5, r18
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    addi r28, r28, 0x1
    bl fn_80061824
    addi r17, r17, 0x1
    addi r19, r19, 0xd5c
lbl_fn_804F8468_000038B0:
    lwz r0, 0x5e8(r25)
    cmpw r17, r0
    blt lbl_fn_804F8468_00002D80
lbl_fn_804F8468_000038BC:
    lwz r0, 0x23c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804F8468_000038D0
    lwz r3, 0x244(r1)
    bl dtor_80084684
lbl_fn_804F8468_000038D0:
    lwz r0, 0x254(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804F8468_000038E4
    lwz r3, 0x25c(r1)
    bl dtor_80084684
lbl_fn_804F8468_000038E4:
    lwz r0, 0x260(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804F8468_000038F8
    lwz r3, 0x268(r1)
    bl dtor_80084684
lbl_fn_804F8468_000038F8:
    li r0, 0xa28
    addi r11, r1, 0xa00
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xa20(r1)
    li r0, 0xa18
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xa10(r1)
    li r0, 0xa08
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0xa00(r1)
    bl _restgpr_14
    lwz r0, 0xa34(r1)
    mtlr r0
    addi r1, r1, 0xa30
    blr
}
