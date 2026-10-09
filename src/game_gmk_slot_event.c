#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8012B988(void);
extern void fn_8012D8B8(void);
extern void fn_801342D0(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_802085E0(void);
extern void fn_80208714(void);
extern void fn_80208740(void);
extern void fn_8021150C(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_80375184(void);
extern void fn_803752F4(void);
extern void fn_803754F0(void);
extern void fn_80375B78(void);
extern void fn_80375D0C(void);
extern void fn_8054A340(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068AEB0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80754628[];
extern u8 lbl_8075463C[];
extern u8 lbl_80754750[];
extern u8 lbl_80754758[];
extern u8 lbl_80754760[];

/* Small data declarations */
extern u32 lbl_8087DFF8;
extern u32 lbl_8087DFFC;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886AE8;
extern u32 lbl_80886B00;
extern u32 lbl_80886B04;
extern u32 lbl_80886B08;
extern u32 lbl_80886B0C;
extern u32 lbl_80886B10;

/* Function declarations */
void fn_804479B8(void);
void fn_80448160(void);
void fn_80448908(void);
void fn_80448B80(void);
void fn_80448F9C(void);
void fn_8044909C(void);
void fn_804490E0(void);
void fn_804491F4(void);

asm void fn_804479B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    lis r31, 0x2aab
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r30, r6, 0x6667
    subi r29, r31, 0x5555
lbl_fn_804479B8_0000002C:
    subf r0, r24, r25
    mulhw r0, r29, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_804479B8_00000794
    cmpwi r7, 0x14
    bgt lbl_fn_804479B8_0000014C
    cmplw r24, r25
    beq lbl_fn_804479B8_00000794
    subi r0, r25, 0xc
    b lbl_fn_804479B8_00000140
lbl_fn_804479B8_00000060:
    cmplw r24, r25
    mr r5, r24
    beq lbl_fn_804479B8_000000F4
    addi r6, r24, 0xc
    b lbl_fn_804479B8_000000EC
lbl_fn_804479B8_00000074:
    lwz r3, 0x8(r6)
    lwz r4, 0x8(r5)
    lwz r8, 0xec(r3)
    lwz r7, 0xec(r4)
    cmpw r8, r7
    beq lbl_fn_804479B8_000000A4
    xor r3, r8, r7
    srawi r4, r3, 1
    and r3, r3, r8
    subf r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_804479B8_000000DC
lbl_fn_804479B8_000000A4:
    lwz r7, 0x80(r4)
    lwz r8, 0x80(r3)
    cmpw r8, r7
    beq lbl_fn_804479B8_000000CC
    xor r3, r7, r8
    srawi r4, r3, 1
    and r3, r3, r7
    subf r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_804479B8_000000DC
lbl_fn_804479B8_000000CC:
    xor r3, r4, r3
    cntlzw r3, r3
    slw r3, r4, r3
    srwi r3, r3, 31
lbl_fn_804479B8_000000DC:
    cmpwi r3, 0x0
    beq lbl_fn_804479B8_000000E8
    mr r5, r6
lbl_fn_804479B8_000000E8:
    addi r6, r6, 0xc
lbl_fn_804479B8_000000EC:
    cmplw r6, r25
    bne lbl_fn_804479B8_00000074
lbl_fn_804479B8_000000F4:
    cmplw r5, r24
    beq lbl_fn_804479B8_0000013C
    lwz r4, 0x0(r5)
    lha r6, 0x4(r5)
    lha r7, 0x6(r5)
    lwz r8, 0x8(r5)
    lwz r3, 0x0(r24)
    stw r3, 0x0(r5)
    lha r3, 0x4(r24)
    sth r3, 0x4(r5)
    lha r3, 0x6(r24)
    sth r3, 0x6(r5)
    lwz r3, 0x8(r24)
    stw r3, 0x8(r5)
    stw r4, 0x0(r24)
    sth r6, 0x4(r24)
    sth r7, 0x6(r24)
    stw r8, 0x8(r24)
lbl_fn_804479B8_0000013C:
    addi r24, r24, 0xc
lbl_fn_804479B8_00000140:
    cmplw r24, r0
    bne lbl_fn_804479B8_00000060
    b lbl_fn_804479B8_00000794
lbl_fn_804479B8_0000014C:
    lwz r4, lbl_8087DFF8
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
    mulli r0, r0, 0xc
    add r3, r24, r0
    blt lbl_fn_804479B8_0000018C
    li r6, -0x4
lbl_fn_804479B8_0000018C:
    mulhw r4, r30, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087DFF8
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
    mulli r0, r0, 0xc
    add r4, r24, r0
    blt lbl_fn_804479B8_000001D8
    li r6, -0x4
    stw r6, lbl_8087DFF8
lbl_fn_804479B8_000001D8:
    subi r27, r25, 0xc
    mr r6, r26
    mr r5, r27
    bl fn_80448908
    lwz r3, 0x8(r27)
    mr r28, r24
    mr r4, r27
    b lbl_fn_804479B8_000001FC
lbl_fn_804479B8_000001F8:
    addi r28, r28, 0xc
lbl_fn_804479B8_000001FC:
    lwz r5, 0x8(r28)
    lwz r0, 0xec(r3)
    lwz r6, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_804479B8_00000228
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_00000260
lbl_fn_804479B8_00000228:
    lwz r6, 0x80(r3)
    lwz r0, 0x80(r5)
    cmpw r0, r6
    beq lbl_fn_804479B8_00000250
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_00000260
lbl_fn_804479B8_00000250:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_804479B8_00000260:
    cmpwi r0, 0x0
    bne lbl_fn_804479B8_000001F8
lbl_fn_804479B8_00000268:
    subi r4, r4, 0xc
    cmplw r28, r4
    beq lbl_fn_804479B8_000002E0
    lwz r5, 0x8(r4)
    lwz r0, 0xec(r3)
    lwz r6, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_804479B8_000002A0
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_000002D8
lbl_fn_804479B8_000002A0:
    lwz r6, 0x80(r3)
    lwz r0, 0x80(r5)
    cmpw r0, r6
    beq lbl_fn_804479B8_000002C8
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_000002D8
lbl_fn_804479B8_000002C8:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_804479B8_000002D8:
    cmpwi r0, 0x0
    beq lbl_fn_804479B8_00000268
lbl_fn_804479B8_000002E0:
    cmplw r28, r4
    bge lbl_fn_804479B8_00000464
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_804479B8_00000334
lbl_fn_804479B8_00000330:
    addi r28, r28, 0xc
lbl_fn_804479B8_00000334:
    lwz r5, 0x8(r28)
    lwz r3, 0x8(r27)
    lwz r6, 0xec(r5)
    lwz r0, 0xec(r3)
    cmpw r6, r0
    beq lbl_fn_804479B8_00000364
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_0000039C
lbl_fn_804479B8_00000364:
    lwz r6, 0x80(r3)
    lwz r0, 0x80(r5)
    cmpw r0, r6
    beq lbl_fn_804479B8_0000038C
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_0000039C
lbl_fn_804479B8_0000038C:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_804479B8_0000039C:
    cmpwi r0, 0x0
    bne lbl_fn_804479B8_00000330
    lwz r6, 0xec(r3)
lbl_fn_804479B8_000003A8:
    lwz r5, -0x4(r4)
    subi r4, r4, 0xc
    lwz r7, 0xec(r5)
    cmpw r7, r6
    beq lbl_fn_804479B8_000003D4
    xor r0, r7, r6
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_0000040C
lbl_fn_804479B8_000003D4:
    lwz r7, 0x80(r3)
    lwz r0, 0x80(r5)
    cmpw r0, r7
    beq lbl_fn_804479B8_000003FC
    xor r0, r7, r0
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_0000040C
lbl_fn_804479B8_000003FC:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_804479B8_0000040C:
    cmpwi r0, 0x0
    beq lbl_fn_804479B8_000003A8
    cmplw r28, r4
    bge lbl_fn_804479B8_00000464
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_804479B8_00000334
lbl_fn_804479B8_00000464:
    cmplw r28, r24
    bne lbl_fn_804479B8_00000730
    lwz r3, 0x0(r28)
    subi r4, r25, 0xc
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    lha r0, 0x4(r27)
    sth r0, 0x4(r28)
    lha r0, 0x6(r27)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r27)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r27)
    sth r5, 0x4(r27)
    sth r6, 0x6(r27)
    stw r7, 0x8(r27)
    lwz r3, 0x8(r24)
    lwz r5, -0x4(r25)
    lwz r6, 0xec(r3)
    lwz r0, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_804479B8_000004E4
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_0000051C
lbl_fn_804479B8_000004E4:
    lwz r6, 0x80(r5)
    lwz r0, 0x80(r3)
    cmpw r0, r6
    beq lbl_fn_804479B8_0000050C
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_0000051C
lbl_fn_804479B8_0000050C:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_804479B8_0000051C:
    cmpwi r0, 0x0
    bne lbl_fn_804479B8_000005E8
    b lbl_fn_804479B8_0000052C
lbl_fn_804479B8_00000528:
    addi r28, r28, 0xc
lbl_fn_804479B8_0000052C:
    cmplw r28, r25
    beq lbl_fn_804479B8_000005A0
    lwz r5, 0x8(r28)
    lwz r6, 0xec(r3)
    lwz r0, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_804479B8_00000560
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_00000598
lbl_fn_804479B8_00000560:
    lwz r6, 0x80(r5)
    lwz r0, 0x80(r3)
    cmpw r0, r6
    beq lbl_fn_804479B8_00000588
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_00000598
lbl_fn_804479B8_00000588:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_804479B8_00000598:
    cmpwi r0, 0x0
    beq lbl_fn_804479B8_00000528
lbl_fn_804479B8_000005A0:
    cmplw r28, r4
    bge lbl_fn_804479B8_000005E8
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
lbl_fn_804479B8_000005E8:
    cmplw r28, r4
    bge lbl_fn_804479B8_00000728
    b lbl_fn_804479B8_000005F8
lbl_fn_804479B8_000005F4:
    addi r28, r28, 0xc
lbl_fn_804479B8_000005F8:
    lwz r3, 0x8(r24)
    lwz r5, 0x8(r28)
    lwz r6, 0xec(r3)
    lwz r0, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_804479B8_00000628
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_00000660
lbl_fn_804479B8_00000628:
    lwz r6, 0x80(r5)
    lwz r0, 0x80(r3)
    cmpw r0, r6
    beq lbl_fn_804479B8_00000650
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_00000660
lbl_fn_804479B8_00000650:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_804479B8_00000660:
    cmpwi r0, 0x0
    beq lbl_fn_804479B8_000005F4
    lwz r6, 0xec(r3)
lbl_fn_804479B8_0000066C:
    lwz r5, -0x4(r4)
    subi r4, r4, 0xc
    lwz r0, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_804479B8_00000698
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_000006D0
lbl_fn_804479B8_00000698:
    lwz r7, 0x80(r5)
    lwz r0, 0x80(r3)
    cmpw r0, r7
    beq lbl_fn_804479B8_000006C0
    xor r0, r7, r0
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804479B8_000006D0
lbl_fn_804479B8_000006C0:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_804479B8_000006D0:
    cmpwi r0, 0x0
    bne lbl_fn_804479B8_0000066C
    cmplw r28, r4
    bge lbl_fn_804479B8_00000728
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_804479B8_000005F8
lbl_fn_804479B8_00000728:
    mr r24, r28
    b lbl_fn_804479B8_0000002C
lbl_fn_804479B8_00000730:
    subf r0, r24, r28
    subi r4, r31, 0x5555
    mulhw r3, r4, r0
    subf r0, r28, r25
    mulhw r0, r4, r0
    srawi r3, r3, 1
    srwi r4, r3, 31
    srawi r0, r0, 1
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_804479B8_0000077C
    mr r3, r24
    mr r4, r28
    mr r5, r26
    bl fn_80448160
    mr r24, r28
    b lbl_fn_804479B8_0000002C
lbl_fn_804479B8_0000077C:
    mr r3, r28
    mr r4, r25
    mr r5, r26
    bl fn_80448160
    mr r25, r28
    b lbl_fn_804479B8_0000002C
lbl_fn_804479B8_00000794:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80448160(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    lis r31, 0x2aab
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r30, r6, 0x6667
    subi r29, r31, 0x5555
lbl_fn_80448160_000007D4:
    subf r0, r24, r25
    mulhw r0, r29, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_80448160_00000F3C
    cmpwi r7, 0x14
    bgt lbl_fn_80448160_000008F4
    cmplw r24, r25
    beq lbl_fn_80448160_00000F3C
    subi r0, r25, 0xc
    b lbl_fn_80448160_000008E8
lbl_fn_80448160_00000808:
    cmplw r24, r25
    mr r5, r24
    beq lbl_fn_80448160_0000089C
    addi r6, r24, 0xc
    b lbl_fn_80448160_00000894
lbl_fn_80448160_0000081C:
    lwz r3, 0x8(r6)
    lwz r4, 0x8(r5)
    lwz r8, 0xec(r3)
    lwz r7, 0xec(r4)
    cmpw r8, r7
    beq lbl_fn_80448160_0000084C
    xor r3, r8, r7
    srawi r4, r3, 1
    and r3, r3, r8
    subf r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_80448160_00000884
lbl_fn_80448160_0000084C:
    lwz r7, 0x80(r4)
    lwz r8, 0x80(r3)
    cmpw r8, r7
    beq lbl_fn_80448160_00000874
    xor r3, r7, r8
    srawi r4, r3, 1
    and r3, r3, r7
    subf r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_80448160_00000884
lbl_fn_80448160_00000874:
    xor r3, r4, r3
    cntlzw r3, r3
    slw r3, r4, r3
    srwi r3, r3, 31
lbl_fn_80448160_00000884:
    cmpwi r3, 0x0
    beq lbl_fn_80448160_00000890
    mr r5, r6
lbl_fn_80448160_00000890:
    addi r6, r6, 0xc
lbl_fn_80448160_00000894:
    cmplw r6, r25
    bne lbl_fn_80448160_0000081C
lbl_fn_80448160_0000089C:
    cmplw r5, r24
    beq lbl_fn_80448160_000008E4
    lwz r4, 0x0(r5)
    lha r6, 0x4(r5)
    lha r7, 0x6(r5)
    lwz r8, 0x8(r5)
    lwz r3, 0x0(r24)
    stw r3, 0x0(r5)
    lha r3, 0x4(r24)
    sth r3, 0x4(r5)
    lha r3, 0x6(r24)
    sth r3, 0x6(r5)
    lwz r3, 0x8(r24)
    stw r3, 0x8(r5)
    stw r4, 0x0(r24)
    sth r6, 0x4(r24)
    sth r7, 0x6(r24)
    stw r8, 0x8(r24)
lbl_fn_80448160_000008E4:
    addi r24, r24, 0xc
lbl_fn_80448160_000008E8:
    cmplw r24, r0
    bne lbl_fn_80448160_00000808
    b lbl_fn_80448160_00000F3C
lbl_fn_80448160_000008F4:
    lwz r4, lbl_8087DFFC
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
    mulli r0, r0, 0xc
    add r3, r24, r0
    blt lbl_fn_80448160_00000934
    li r6, -0x4
lbl_fn_80448160_00000934:
    mulhw r4, r30, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087DFFC
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
    mulli r0, r0, 0xc
    add r4, r24, r0
    blt lbl_fn_80448160_00000980
    li r6, -0x4
    stw r6, lbl_8087DFFC
lbl_fn_80448160_00000980:
    subi r27, r25, 0xc
    mr r6, r26
    mr r5, r27
    bl fn_80448908
    lwz r3, 0x8(r27)
    mr r28, r24
    mr r4, r27
    b lbl_fn_80448160_000009A4
lbl_fn_80448160_000009A0:
    addi r28, r28, 0xc
lbl_fn_80448160_000009A4:
    lwz r5, 0x8(r28)
    lwz r0, 0xec(r3)
    lwz r6, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_80448160_000009D0
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000A08
lbl_fn_80448160_000009D0:
    lwz r6, 0x80(r3)
    lwz r0, 0x80(r5)
    cmpw r0, r6
    beq lbl_fn_80448160_000009F8
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000A08
lbl_fn_80448160_000009F8:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80448160_00000A08:
    cmpwi r0, 0x0
    bne lbl_fn_80448160_000009A0
lbl_fn_80448160_00000A10:
    subi r4, r4, 0xc
    cmplw r28, r4
    beq lbl_fn_80448160_00000A88
    lwz r5, 0x8(r4)
    lwz r0, 0xec(r3)
    lwz r6, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_80448160_00000A48
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000A80
lbl_fn_80448160_00000A48:
    lwz r6, 0x80(r3)
    lwz r0, 0x80(r5)
    cmpw r0, r6
    beq lbl_fn_80448160_00000A70
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000A80
lbl_fn_80448160_00000A70:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80448160_00000A80:
    cmpwi r0, 0x0
    beq lbl_fn_80448160_00000A10
lbl_fn_80448160_00000A88:
    cmplw r28, r4
    bge lbl_fn_80448160_00000C0C
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_80448160_00000ADC
lbl_fn_80448160_00000AD8:
    addi r28, r28, 0xc
lbl_fn_80448160_00000ADC:
    lwz r5, 0x8(r28)
    lwz r3, 0x8(r27)
    lwz r6, 0xec(r5)
    lwz r0, 0xec(r3)
    cmpw r6, r0
    beq lbl_fn_80448160_00000B0C
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000B44
lbl_fn_80448160_00000B0C:
    lwz r6, 0x80(r3)
    lwz r0, 0x80(r5)
    cmpw r0, r6
    beq lbl_fn_80448160_00000B34
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000B44
lbl_fn_80448160_00000B34:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80448160_00000B44:
    cmpwi r0, 0x0
    bne lbl_fn_80448160_00000AD8
    lwz r6, 0xec(r3)
lbl_fn_80448160_00000B50:
    lwz r5, -0x4(r4)
    subi r4, r4, 0xc
    lwz r7, 0xec(r5)
    cmpw r7, r6
    beq lbl_fn_80448160_00000B7C
    xor r0, r7, r6
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000BB4
lbl_fn_80448160_00000B7C:
    lwz r7, 0x80(r3)
    lwz r0, 0x80(r5)
    cmpw r0, r7
    beq lbl_fn_80448160_00000BA4
    xor r0, r7, r0
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000BB4
lbl_fn_80448160_00000BA4:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80448160_00000BB4:
    cmpwi r0, 0x0
    beq lbl_fn_80448160_00000B50
    cmplw r28, r4
    bge lbl_fn_80448160_00000C0C
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_80448160_00000ADC
lbl_fn_80448160_00000C0C:
    cmplw r28, r24
    bne lbl_fn_80448160_00000ED8
    lwz r3, 0x0(r28)
    subi r4, r25, 0xc
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    lha r0, 0x4(r27)
    sth r0, 0x4(r28)
    lha r0, 0x6(r27)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r27)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r27)
    sth r5, 0x4(r27)
    sth r6, 0x6(r27)
    stw r7, 0x8(r27)
    lwz r3, 0x8(r24)
    lwz r5, -0x4(r25)
    lwz r6, 0xec(r3)
    lwz r0, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_80448160_00000C8C
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000CC4
lbl_fn_80448160_00000C8C:
    lwz r6, 0x80(r5)
    lwz r0, 0x80(r3)
    cmpw r0, r6
    beq lbl_fn_80448160_00000CB4
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000CC4
lbl_fn_80448160_00000CB4:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_80448160_00000CC4:
    cmpwi r0, 0x0
    bne lbl_fn_80448160_00000D90
    b lbl_fn_80448160_00000CD4
lbl_fn_80448160_00000CD0:
    addi r28, r28, 0xc
lbl_fn_80448160_00000CD4:
    cmplw r28, r25
    beq lbl_fn_80448160_00000D48
    lwz r5, 0x8(r28)
    lwz r6, 0xec(r3)
    lwz r0, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_80448160_00000D08
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000D40
lbl_fn_80448160_00000D08:
    lwz r6, 0x80(r5)
    lwz r0, 0x80(r3)
    cmpw r0, r6
    beq lbl_fn_80448160_00000D30
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000D40
lbl_fn_80448160_00000D30:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_80448160_00000D40:
    cmpwi r0, 0x0
    beq lbl_fn_80448160_00000CD0
lbl_fn_80448160_00000D48:
    cmplw r28, r4
    bge lbl_fn_80448160_00000D90
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
lbl_fn_80448160_00000D90:
    cmplw r28, r4
    bge lbl_fn_80448160_00000ED0
    b lbl_fn_80448160_00000DA0
lbl_fn_80448160_00000D9C:
    addi r28, r28, 0xc
lbl_fn_80448160_00000DA0:
    lwz r3, 0x8(r24)
    lwz r5, 0x8(r28)
    lwz r6, 0xec(r3)
    lwz r0, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_80448160_00000DD0
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000E08
lbl_fn_80448160_00000DD0:
    lwz r6, 0x80(r5)
    lwz r0, 0x80(r3)
    cmpw r0, r6
    beq lbl_fn_80448160_00000DF8
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000E08
lbl_fn_80448160_00000DF8:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_80448160_00000E08:
    cmpwi r0, 0x0
    beq lbl_fn_80448160_00000D9C
    lwz r6, 0xec(r3)
lbl_fn_80448160_00000E14:
    lwz r5, -0x4(r4)
    subi r4, r4, 0xc
    lwz r0, 0xec(r5)
    cmpw r6, r0
    beq lbl_fn_80448160_00000E40
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000E78
lbl_fn_80448160_00000E40:
    lwz r7, 0x80(r5)
    lwz r0, 0x80(r3)
    cmpw r0, r7
    beq lbl_fn_80448160_00000E68
    xor r0, r7, r0
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80448160_00000E78
lbl_fn_80448160_00000E68:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_80448160_00000E78:
    cmpwi r0, 0x0
    bne lbl_fn_80448160_00000E14
    cmplw r28, r4
    bge lbl_fn_80448160_00000ED0
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_80448160_00000DA0
lbl_fn_80448160_00000ED0:
    mr r24, r28
    b lbl_fn_80448160_000007D4
lbl_fn_80448160_00000ED8:
    subf r0, r24, r28
    subi r4, r31, 0x5555
    mulhw r3, r4, r0
    subf r0, r28, r25
    mulhw r0, r4, r0
    srawi r3, r3, 1
    srwi r4, r3, 31
    srawi r0, r0, 1
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_80448160_00000F24
    mr r3, r24
    mr r4, r28
    mr r5, r26
    bl fn_80448160
    mr r24, r28
    b lbl_fn_80448160_000007D4
lbl_fn_80448160_00000F24:
    mr r3, r28
    mr r4, r25
    mr r5, r26
    bl fn_80448160
    mr r25, r28
    b lbl_fn_80448160_000007D4
lbl_fn_80448160_00000F3C:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80448908(void)
{
    nofralloc
    lwz r9, 0x8(r5)
    lwz r6, 0x8(r3)
    lwz r8, 0xec(r9)
    lwz r0, 0xec(r6)
    cmpw r8, r0
    beq lbl_fn_80448908_00000F80
    xor r0, r8, r0
    srawi r7, r0, 1
    and r0, r0, r8
    subf r0, r0, r7
    srwi r0, r0, 31
    b lbl_fn_80448908_00000FB8
lbl_fn_80448908_00000F80:
    lwz r8, 0x80(r6)
    lwz r0, 0x80(r9)
    cmpw r0, r8
    beq lbl_fn_80448908_00000FA8
    xor r0, r8, r0
    srawi r7, r0, 1
    and r0, r0, r8
    subf r0, r0, r7
    srwi r0, r0, 31
    b lbl_fn_80448908_00000FB8
lbl_fn_80448908_00000FA8:
    xor r0, r6, r9
    cntlzw r0, r0
    slw r0, r6, r0
    srwi r0, r0, 31
lbl_fn_80448908_00000FB8:
    lwz r11, 0x8(r4)
    cntlzw r0, r0
    lwz r7, 0xec(r9)
    srwi r0, r0, 5
    lwz r10, 0xec(r11)
    cmpw r10, r7
    beq lbl_fn_80448908_00000FEC
    xor r7, r10, r7
    srawi r8, r7, 1
    and r7, r7, r10
    subf r7, r7, r8
    srwi r7, r7, 31
    b lbl_fn_80448908_00001024
lbl_fn_80448908_00000FEC:
    lwz r10, 0x80(r9)
    lwz r7, 0x80(r11)
    cmpw r7, r10
    beq lbl_fn_80448908_00001014
    xor r7, r10, r7
    srawi r8, r7, 1
    and r7, r7, r10
    subf r7, r7, r8
    srwi r7, r7, 31
    b lbl_fn_80448908_00001024
lbl_fn_80448908_00001014:
    xor r7, r9, r11
    cntlzw r7, r7
    slw r7, r9, r7
    srwi r7, r7, 31
lbl_fn_80448908_00001024:
    cmpwi r0, 0x0
    cntlzw r7, r7
    srwi r7, r7, 5
    beq lbl_fn_80448908_0000103C
    cmpwi r7, 0x0
    bnelr
lbl_fn_80448908_0000103C:
    cmpwi r0, 0x0
    bne lbl_fn_80448908_00001090
    cmpwi r7, 0x0
    bne lbl_fn_80448908_00001090
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lha r6, 0x4(r3)
    lha r0, 0x4(r4)
    sth r0, 0x4(r3)
    lha r7, 0x6(r3)
    lha r0, 0x6(r4)
    sth r0, 0x6(r3)
    lwz r8, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    stw r5, 0x0(r4)
    sth r6, 0x4(r4)
    sth r7, 0x6(r4)
    stw r8, 0x8(r4)
    blr
lbl_fn_80448908_00001090:
    lwz r7, 0xec(r6)
    lwz r8, 0xec(r11)
    cmpw r8, r7
    beq lbl_fn_80448908_000010B8
    xor r6, r8, r7
    srawi r7, r6, 1
    and r6, r6, r8
    subf r6, r6, r7
    srwi r6, r6, 31
    b lbl_fn_80448908_000010F0
lbl_fn_80448908_000010B8:
    lwz r8, 0x80(r6)
    lwz r7, 0x80(r11)
    cmpw r7, r8
    beq lbl_fn_80448908_000010E0
    xor r6, r8, r7
    srawi r7, r6, 1
    and r6, r6, r8
    subf r6, r6, r7
    srwi r6, r6, 31
    b lbl_fn_80448908_000010F0
lbl_fn_80448908_000010E0:
    xor r7, r6, r11
    cntlzw r7, r7
    slw r6, r6, r7
    srwi r6, r6, 31
lbl_fn_80448908_000010F0:
    cmpwi r6, 0x0
    beq lbl_fn_80448908_00001138
    lwz r7, 0x0(r3)
    lwz r6, 0x0(r4)
    stw r6, 0x0(r3)
    lha r8, 0x4(r3)
    lha r6, 0x4(r4)
    sth r6, 0x4(r3)
    lha r9, 0x6(r3)
    lha r6, 0x6(r4)
    sth r6, 0x6(r3)
    lwz r10, 0x8(r3)
    lwz r6, 0x8(r4)
    stw r6, 0x8(r3)
    stw r7, 0x0(r4)
    sth r8, 0x4(r4)
    sth r9, 0x6(r4)
    stw r10, 0x8(r4)
lbl_fn_80448908_00001138:
    cmpwi r0, 0x0
    beq lbl_fn_80448908_00001184
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    lha r6, 0x4(r4)
    lha r0, 0x4(r5)
    sth r0, 0x4(r4)
    lha r7, 0x6(r4)
    lha r0, 0x6(r5)
    sth r0, 0x6(r4)
    lwz r8, 0x8(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    stw r3, 0x0(r5)
    sth r6, 0x4(r5)
    sth r7, 0x6(r5)
    stw r8, 0x8(r5)
    blr
lbl_fn_80448908_00001184:
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lha r6, 0x4(r3)
    lha r0, 0x4(r5)
    sth r0, 0x4(r3)
    lha r7, 0x6(r3)
    lha r0, 0x6(r5)
    sth r0, 0x6(r3)
    lwz r8, 0x8(r3)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r3)
    stw r4, 0x0(r5)
    sth r6, 0x4(r5)
    sth r7, 0x6(r5)
    stw r8, 0x8(r5)
    blr
}

asm void fn_80448B80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    beq lbl_fn_80448B80_000011F8
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_fn_80448B80_00001200
lbl_fn_80448B80_000011F8:
    li r3, 0x0
    b lbl_fn_80448B80_000015D0
lbl_fn_80448B80_00001200:
    cmpwi r5, 0x0
    beq lbl_fn_80448B80_00001214
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_80448B80_0000121C
lbl_fn_80448B80_00001214:
    li r3, 0x0
    b lbl_fn_80448B80_000015D0
lbl_fn_80448B80_0000121C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80448B80_00001230
    bl fn_80373148
    b lbl_fn_80448B80_00001234
lbl_fn_80448B80_00001230:
    li r3, 0x0
lbl_fn_80448B80_00001234:
    cmpwi r3, 0x0
    beq lbl_fn_80448B80_00001244
    lwz r31, 0x48(r3)
    b lbl_fn_80448B80_00001248
lbl_fn_80448B80_00001244:
    li r31, -0x1
lbl_fn_80448B80_00001248:
    cmpwi r3, 0x0
    beq lbl_fn_80448B80_00001258
    lwz r30, 0x4c(r3)
    b lbl_fn_80448B80_0000125C
lbl_fn_80448B80_00001258:
    li r30, 0x0
lbl_fn_80448B80_0000125C:
    cmpwi r3, 0x0
    beq lbl_fn_80448B80_0000126C
    lwz r29, 0x50(r3)
    b lbl_fn_80448B80_00001270
lbl_fn_80448B80_0000126C:
    li r29, 0x0
lbl_fn_80448B80_00001270:
    cmpwi r31, 0x2
    bne lbl_fn_80448B80_000012A4
    cmpwi r30, 0x9
    bne lbl_fn_80448B80_000012A4
    cmpwi r29, 0xc
    bne lbl_fn_80448B80_0000128C
    li r29, 0x2
lbl_fn_80448B80_0000128C:
    cmpwi r29, 0xf
    bne lbl_fn_80448B80_00001298
    li r29, 0x5
lbl_fn_80448B80_00001298:
    cmpwi r29, 0x10
    bne lbl_fn_80448B80_000012A4
    li r29, 0x6
lbl_fn_80448B80_000012A4:
    cmpwi r31, 0x2
    bne lbl_fn_80448B80_000012B4
    cmpwi r30, 0x3e7
    bne lbl_fn_80448B80_000012D8
lbl_fn_80448B80_000012B4:
    addis r3, r25, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80448B80_000012CC
    li r3, 0x1
    b lbl_fn_80448B80_000015D0
lbl_fn_80448B80_000012CC:
    lwz r31, -0x24e8(r3)
    lwz r30, -0x24e4(r3)
    lwz r29, -0x24e0(r3)
lbl_fn_80448B80_000012D8:
    lis r24, lbl_80754760@ha
    mr r3, r26
    addi r24, r24, lbl_80754760@l
    li r28, 0x0
    addi r4, r24, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80448B80_00001300
    li r28, 0x1
    b lbl_fn_80448B80_0000135C
lbl_fn_80448B80_00001300:
    mr r3, r26
    addi r4, r24, 0x5
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80448B80_0000135C
    addi r3, r26, 0x2
    bl fn_80684600
    cmpw r3, r30
    bne lbl_fn_80448B80_0000135C
    mr r3, r26
    bl strlen
    cmplwi r3, 0x6
    blt lbl_fn_80448B80_00001358
    addi r3, r26, 0x6
    bl fn_80684600
    cmpw r3, r29
    bne lbl_fn_80448B80_00001350
    li r28, 0x1
    b lbl_fn_80448B80_0000135C
lbl_fn_80448B80_00001350:
    li r28, 0x0
    b lbl_fn_80448B80_0000135C
lbl_fn_80448B80_00001358:
    li r28, 0x1
lbl_fn_80448B80_0000135C:
    cmpwi r28, 0x0
    bne lbl_fn_80448B80_000015CC
    lis r24, lbl_80754760@ha
    mr r3, r27
    addi r24, r24, lbl_80754760@l
    addi r4, r24, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80448B80_00001424
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80448B80_000013A4
    mr r4, r26
    bl fn_803752F4
    cmpwi r3, 0x0
    beq lbl_fn_80448B80_000013A4
    li r28, 0x1
    b lbl_fn_80448B80_000015CC
lbl_fn_80448B80_000013A4:
    addis r3, r25, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80448B80_000015CC
    lis r4, lbl_80754760@ha
    mr r3, r26
    addi r4, r4, lbl_80754760@l
    li r5, 0x2
    addi r4, r4, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80448B80_000015CC
    addis r3, r25, 0x1
    lwz r0, -0x24e8(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80448B80_000015CC
    addi r3, r26, 0x2
    bl fn_80684600
    mr r4, r3
    li r3, 0x2
    bl fn_802085E0
    addis r4, r25, 0x1
    mr r24, r3
    lwz r4, -0x24e4(r4)
    li r3, 0x2
    bl fn_802085E0
    subf r0, r24, r3
    orc r3, r3, r24
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r28, r0, 31
    b lbl_fn_80448B80_000015CC
lbl_fn_80448B80_00001424:
    mr r3, r26
    addi r4, r24, 0x5
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80448B80_00001568
    mr r3, r27
    addi r4, r24, 0x8
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80448B80_00001568
    addi r3, r26, 0x2
    bl fn_80684600
    mr r24, r3
    mr r3, r26
    li r23, 0x0
    bl strlen
    cmplwi r3, 0x6
    blt lbl_fn_80448B80_00001480
    addi r3, r26, 0x6
    bl fn_80684600
    mr r23, r3
lbl_fn_80448B80_00001480:
    addi r3, r27, 0x5
    bl fn_80684600
    mr r25, r3
    mr r3, r27
    li r26, 0x0
    bl strlen
    cmplwi r3, 0x9
    blt lbl_fn_80448B80_000014AC
    addi r3, r27, 0x9
    bl fn_80684600
    mr r26, r3
lbl_fn_80448B80_000014AC:
    li r27, 0x0
    li r22, 0x0
    b lbl_fn_80448B80_00001558
lbl_fn_80448B80_000014B8:
    mr r3, r22
    bl fn_80208714
    lwz r4, 0x8(r3)
    cmpwi r4, 0x2
    bne lbl_fn_80448B80_000014F4
    lwz r0, 0xc(r3)
    cmpw r0, r24
    bne lbl_fn_80448B80_000014F4
    cmpwi r23, 0x0
    ble lbl_fn_80448B80_000014EC
    lwz r0, 0x10(r3)
    cmpw r0, r23
    bne lbl_fn_80448B80_000014F4
lbl_fn_80448B80_000014EC:
    li r27, 0x1
    b lbl_fn_80448B80_00001554
lbl_fn_80448B80_000014F4:
    cmpwi r27, 0x0
    beq lbl_fn_80448B80_0000152C
    cmpw r4, r31
    bne lbl_fn_80448B80_0000152C
    lwz r0, 0xc(r3)
    cmpw r0, r30
    bne lbl_fn_80448B80_0000152C
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80448B80_00001524
    cmpw r0, r29
    bne lbl_fn_80448B80_0000152C
lbl_fn_80448B80_00001524:
    li r28, 0x1
    b lbl_fn_80448B80_000015CC
lbl_fn_80448B80_0000152C:
    cmpwi r4, 0x2
    bne lbl_fn_80448B80_00001554
    lwz r0, 0xc(r3)
    cmpw r0, r25
    bne lbl_fn_80448B80_00001554
    cmpwi r26, 0x0
    ble lbl_fn_80448B80_000015CC
    lwz r0, 0x10(r3)
    cmpw r0, r26
    beq lbl_fn_80448B80_000015CC
lbl_fn_80448B80_00001554:
    addi r22, r22, 0x1
lbl_fn_80448B80_00001558:
    bl fn_80208740
    cmpw r22, r3
    blt lbl_fn_80448B80_000014B8
    b lbl_fn_80448B80_000015CC
lbl_fn_80448B80_00001568:
    lis r4, lbl_80754760@ha
    mr r3, r27
    addi r4, r4, lbl_80754760@l
    li r5, 0x2
    addi r4, r4, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80448B80_000015CC
    addi r3, r27, 0x2
    bl fn_80684600
    cmpw r3, r30
    bne lbl_fn_80448B80_000015CC
    mr r3, r27
    bl strlen
    cmplwi r3, 0x6
    blt lbl_fn_80448B80_000015C8
    addi r3, r27, 0x6
    bl fn_80684600
    cmpw r3, r29
    bne lbl_fn_80448B80_000015C0
    li r28, 0x1
    b lbl_fn_80448B80_000015CC
lbl_fn_80448B80_000015C0:
    li r28, 0x0
    b lbl_fn_80448B80_000015CC
lbl_fn_80448B80_000015C8:
    li r28, 0x1
lbl_fn_80448B80_000015CC:
    mr r3, r28
lbl_fn_80448B80_000015D0:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80448F9C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x64
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80448F9C_000016C4
    mr r3, r30
    bl fn_80206C50
    mr r31, r3
    mr r3, r30
    bl fn_8021150C
    cmpwi r3, 0x0
    blt lbl_fn_80448F9C_0000163C
    cmpwi r3, 0x600
    blt lbl_fn_80448F9C_00001644
lbl_fn_80448F9C_0000163C:
    li r0, 0x0
    b lbl_fn_80448F9C_00001650
lbl_fn_80448F9C_00001644:
    slwi r0, r3, 4
    add r3, r29, r0
    lwz r0, 0xc(r3)
lbl_fn_80448F9C_00001650:
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80448F9C_00001674
    lwz r0, 0x118(r31)
    lis r3, lbl_8075463C@ha
    addi r3, r3, lbl_8075463C@l
    slwi r0, r0, 2
    lwzx r31, r3, r0
    b lbl_fn_80448F9C_00001688
lbl_fn_80448F9C_00001674:
    lwz r0, 0x118(r31)
    lis r3, lbl_80754628@ha
    addi r3, r3, lbl_80754628@l
    slwi r0, r0, 2
    lwzx r31, r3, r0
lbl_fn_80448F9C_00001688:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80448F9C_000016C4
    li r4, 0x8a
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_80448F9C_000016AC
    li r31, 0x0
    b lbl_fn_80448F9C_000016C4
lbl_fn_80448F9C_000016AC:
    lwz r3, lbl_8087F430
    li r4, 0x8a
    bl fn_80370174
    cmpwi r3, 0x2
    blt lbl_fn_80448F9C_000016C4
    li r31, 0x64
lbl_fn_80448F9C_000016C4:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8044909C(void)
{
    nofralloc
    lwz r4, lbl_8087F430
    li r5, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8044909C_00001700
    lwz r0, 0x5694(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8044909C_0000171C
lbl_fn_8044909C_00001700:
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8044909C_00001720
    lwz r0, -0x24dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8044909C_00001720
lbl_fn_8044909C_0000171C:
    ori r5, r5, 0x6
lbl_fn_8044909C_00001720:
    mr r3, r5
    blr
}

asm void fn_804490E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r6, lbl_8087F8A0
    cmpwi r6, 0x0
    beq lbl_fn_804490E0_0000181C
    lwz r3, 0xb4(r4)
    li r0, 0x0
    cmpwi r3, 0x8
    blt lbl_fn_804490E0_00001778
    cmpwi r3, 0xa
    bgt lbl_fn_804490E0_00001778
    li r0, 0x1
lbl_fn_804490E0_00001778:
    cmpwi r3, 0xb
    li r30, -0x1
    bne lbl_fn_804490E0_0000178C
    mr r30, r3
    b lbl_fn_804490E0_000017BC
lbl_fn_804490E0_0000178C:
    cmpwi r0, 0x0
    bne lbl_fn_804490E0_0000179C
    mr r30, r3
    b lbl_fn_804490E0_000017BC
lbl_fn_804490E0_0000179C:
    cmpwi r3, 0x9
    beq lbl_fn_804490E0_000017B0
    cmpwi r3, 0x8
    beq lbl_fn_804490E0_000017B8
    b lbl_fn_804490E0_000017BC
lbl_fn_804490E0_000017B0:
    li r30, 0xa
    b lbl_fn_804490E0_000017BC
lbl_fn_804490E0_000017B8:
    li r30, 0x1c
lbl_fn_804490E0_000017BC:
    mr r3, r6
    mr r4, r31
    bl fn_8054A340
    cmpwi r3, 0x0
    beq lbl_fn_804490E0_000017D8
    addi r31, r3, 0x7d4
    b lbl_fn_804490E0_000017E4
lbl_fn_804490E0_000017D8:
    mulli r0, r31, 0x43c
    add r3, r28, r0
    addi r31, r3, 0x64ec
lbl_fn_804490E0_000017E4:
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl fn_801342D0
    mr r3, r31
    bl fn_8012B988
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804490E0_00001814
    bl fn_80375184
    cmpwi r3, 0x0
    bne lbl_fn_804490E0_0000181C
lbl_fn_804490E0_00001814:
    mr r3, r31
    bl fn_8012D8B8
lbl_fn_804490E0_0000181C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804491F4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_27
    lwz r8, lbl_8087F430
    lis r0, 0x4330
    fmr f31, f1
    stw r0, 0x8(r1)
    cmpwi r8, 0x0
    mr r28, r3
    stw r0, 0x10(r1)
    mr r29, r4
    mr r27, r5
    mr r30, r6
    mr r31, r7
    beq lbl_fn_804491F4_000018BC
    mr r3, r8
    bl fn_803754F0
    cmpwi r3, 0x0
    bne lbl_fn_804491F4_000018BC
    lwz r3, lbl_8087F430
    li r4, 0x0
    bl fn_80375B78
    subf r27, r3, r27
    li r0, 0x1
    cmpwi r27, 0x1
    blt lbl_fn_804491F4_000018B8
    mr r0, r27
lbl_fn_804491F4_000018B8:
    mr r27, r0
lbl_fn_804491F4_000018BC:
    lfs f0, lbl_80886AE8
    fcmpo cr0, f0, f31
    bge lbl_fn_804491F4_00001934
    lfs f0, lbl_80886B00
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_804491F4_00001934
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804491F4_00001934
    bl fn_80375D0C
    cmpw r27, r3
    ble lbl_fn_804491F4_00001934
    subf r0, r27, r3
    lis r3, lbl_80754750@ha
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, lbl_80754750@l(r3)
    lfd f0, 0x8(r1)
    lfs f2, lbl_80886B04
    fsubs f0, f0, f1
    fadds f0, f31, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_804491F4_00001920
    b lbl_fn_804491F4_00001930
lbl_fn_804491F4_00001920:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fadds f2, f31, f0
lbl_fn_804491F4_00001930:
    fmr f31, f2
lbl_fn_804491F4_00001934:
    subi r0, r27, 0x1
    li r3, 0x1
    cmpwi r0, 0x1
    blt lbl_fn_804491F4_00001948
    mr r3, r0
lbl_fn_804491F4_00001948:
    cmpwi r3, 0x45
    ble lbl_fn_804491F4_00001958
    li r3, 0x45
    b lbl_fn_804491F4_0000196C
lbl_fn_804491F4_00001958:
    subi r0, r27, 0x1
    li r3, 0x1
    cmpwi r0, 0x1
    blt lbl_fn_804491F4_0000196C
    mr r3, r0
lbl_fn_804491F4_0000196C:
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lis r27, lbl_80754750@ha
    lis r3, lbl_80754758@ha
    lfd f1, lbl_80754750@l(r27)
    lfd f0, 0x8(r1)
    lfd f2, lbl_80754758@l(r3)
    fsubs f1, f0, f1
    bl fn_8068AEB0
    frsp f3, f1
    lfs f0, lbl_80886B08
    lis r3, 0x2
    lfs f1, lbl_80886B0C
    subi r0, r3, 0x7961
    lfd f2, lbl_80754750@l(r27)
    fmuls f3, f0, f3
    lfs f0, lbl_80886B10
    fdivs f1, f3, f1
    fctiwz f1, f1
    stfd f1, 0x18(r1)
    lwz r3, 0x1c(r1)
    add r3, r3, r31
    stw r3, 0x0(r28)
    mullw r3, r3, r30
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    stw r3, 0x0(r29)
    lwz r3, 0x0(r28)
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r3, 0x2c(r1)
    stw r3, 0x0(r28)
    lwz r3, 0x0(r29)
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r3, 0x34(r1)
    stw r3, 0x0(r29)
    lwz r3, 0x0(r28)
    cmpw r3, r0
    bge lbl_fn_804491F4_00001A50
    mr r0, r3
lbl_fn_804491F4_00001A50:
    stw r0, 0x0(r28)
    lis r3, 0x2
    subi r0, r3, 0x7961
    lwz r3, 0x0(r29)
    cmpw r3, r0
    bge lbl_fn_804491F4_00001A6C
    mr r0, r3
lbl_fn_804491F4_00001A6C:
    stw r0, 0x0(r29)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
