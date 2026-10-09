#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_8012B028(void);
extern void fn_8016E484(void);
extern void fn_801F6C2C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F7590(void);
extern void fn_801F7A18(void);
extern void fn_801F7DF0(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801F8830(void);
extern void fn_80219344(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80370174(void);

/* External data declarations */
extern u8 lbl_80750650[];
extern u8 lbl_807506A0[];
extern u8 lbl_8078C638[];

/* Small data declarations */
extern u32 lbl_8087DEF4;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885D58;
extern u32 lbl_80885D60;
extern u32 lbl_80885DE8;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E28;
extern u32 lbl_80885E60;
extern u32 lbl_80885E74;
extern u32 lbl_80885E78;
extern u32 lbl_80885E88;
extern u32 lbl_80885EB0;
extern u32 lbl_80885EDC;
extern u32 lbl_80885EE0;
extern u32 lbl_80885EE4;
extern u32 lbl_80885EE8;
extern u32 lbl_80885EEC;

/* Function declarations */
void fn_803E0250(void);
void fn_803E0AB4(void);
void fn_803E0D4C(void);
void fn_803E0D84(void);
void fn_803E0E10(void);

asm void fn_803E0250(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    addi r31, r6, 0x6667
lbl_fn_803E0250_00000024:
    subf r0, r25, r26
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_803E0250_00000850
    cmpwi r7, 0x14
    bgt lbl_fn_803E0250_00000144
    cmplw r25, r26
    beq lbl_fn_803E0250_00000850
    subi r24, r26, 0x4
    b lbl_fn_803E0250_00000138
lbl_fn_803E0250_00000050:
    cmplw r25, r26
    mr r31, r25
    beq lbl_fn_803E0250_0000011C
    addi r30, r25, 0x4
    b lbl_fn_803E0250_00000114
lbl_fn_803E0250_00000064:
    lwz r28, 0x0(r30)
    lwz r29, 0x0(r31)
    lwz r3, 0x8(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r29)
    mr r27, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r27, 0x0
    bge lbl_fn_803E0250_000000A0
    cmpwi r3, 0x0
    blt lbl_fn_803E0250_000000A0
    li r0, 0x0
    b lbl_fn_803E0250_00000104
lbl_fn_803E0250_000000A0:
    cmpwi r27, 0x0
    blt lbl_fn_803E0250_000000B8
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_000000B8
    li r0, 0x1
    b lbl_fn_803E0250_00000104
lbl_fn_803E0250_000000B8:
    cmpwi r27, 0x0
    bge lbl_fn_803E0250_000000F0
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_000000F0
    lwz r4, 0x8(r28)
    lwz r3, 0x8(r29)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0250_00000104
lbl_fn_803E0250_000000F0:
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0250_00000104:
    cmpwi r0, 0x0
    beq lbl_fn_803E0250_00000110
    mr r31, r30
lbl_fn_803E0250_00000110:
    addi r30, r30, 0x4
lbl_fn_803E0250_00000114:
    cmplw r30, r26
    bne lbl_fn_803E0250_00000064
lbl_fn_803E0250_0000011C:
    cmplw r31, r25
    beq lbl_fn_803E0250_00000134
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r25)
    stw r0, 0x0(r31)
    stw r3, 0x0(r25)
lbl_fn_803E0250_00000134:
    addi r25, r25, 0x4
lbl_fn_803E0250_00000138:
    cmplw r25, r24
    bne lbl_fn_803E0250_00000050
    b lbl_fn_803E0250_00000850
lbl_fn_803E0250_00000144:
    lwz r4, lbl_8087DEF4
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    slwi r0, r0, 2
    add r3, r25, r0
    blt lbl_fn_803E0250_00000184
    li r6, -0x4
lbl_fn_803E0250_00000184:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087DEF4
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
    slwi r0, r0, 2
    add r4, r25, r0
    blt lbl_fn_803E0250_000001D0
    li r6, -0x4
    stw r6, lbl_8087DEF4
lbl_fn_803E0250_000001D0:
    subi r28, r26, 0x4
    mr r6, r27
    mr r5, r28
    bl fn_803E0AB4
    mr r30, r25
    mr r29, r28
    b lbl_fn_803E0250_000001F0
lbl_fn_803E0250_000001EC:
    addi r30, r30, 0x4
lbl_fn_803E0250_000001F0:
    lwz r23, 0x0(r30)
    lwz r22, 0x0(r28)
    lwz r3, 0x8(r23)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r22)
    mr r24, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r24, 0x0
    bge lbl_fn_803E0250_0000022C
    cmpwi r3, 0x0
    blt lbl_fn_803E0250_0000022C
    li r0, 0x0
    b lbl_fn_803E0250_00000290
lbl_fn_803E0250_0000022C:
    cmpwi r24, 0x0
    blt lbl_fn_803E0250_00000244
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_00000244
    li r0, 0x1
    b lbl_fn_803E0250_00000290
lbl_fn_803E0250_00000244:
    cmpwi r24, 0x0
    bge lbl_fn_803E0250_0000027C
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_0000027C
    lwz r4, 0x8(r23)
    lwz r3, 0x8(r22)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0250_00000290
lbl_fn_803E0250_0000027C:
    xor r0, r3, r24
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0250_00000290:
    cmpwi r0, 0x0
    bne lbl_fn_803E0250_000001EC
lbl_fn_803E0250_00000298:
    subi r29, r29, 0x4
    cmplw r30, r29
    beq lbl_fn_803E0250_0000034C
    lwz r22, 0x0(r29)
    lwz r23, 0x0(r28)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r24, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r24, 0x0
    bge lbl_fn_803E0250_000002E0
    cmpwi r3, 0x0
    blt lbl_fn_803E0250_000002E0
    li r0, 0x0
    b lbl_fn_803E0250_00000344
lbl_fn_803E0250_000002E0:
    cmpwi r24, 0x0
    blt lbl_fn_803E0250_000002F8
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_000002F8
    li r0, 0x1
    b lbl_fn_803E0250_00000344
lbl_fn_803E0250_000002F8:
    cmpwi r24, 0x0
    bge lbl_fn_803E0250_00000330
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_00000330
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0250_00000344
lbl_fn_803E0250_00000330:
    xor r0, r3, r24
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0250_00000344:
    cmpwi r0, 0x0
    beq lbl_fn_803E0250_00000298
lbl_fn_803E0250_0000034C:
    cmplw r30, r29
    bge lbl_fn_803E0250_000004E0
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    b lbl_fn_803E0250_00000370
lbl_fn_803E0250_0000036C:
    addi r30, r30, 0x4
lbl_fn_803E0250_00000370:
    lwz r22, 0x0(r30)
    lwz r23, 0x0(r28)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r24, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r24, 0x0
    bge lbl_fn_803E0250_000003AC
    cmpwi r3, 0x0
    blt lbl_fn_803E0250_000003AC
    li r0, 0x0
    b lbl_fn_803E0250_00000410
lbl_fn_803E0250_000003AC:
    cmpwi r24, 0x0
    blt lbl_fn_803E0250_000003C4
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_000003C4
    li r0, 0x1
    b lbl_fn_803E0250_00000410
lbl_fn_803E0250_000003C4:
    cmpwi r24, 0x0
    bge lbl_fn_803E0250_000003FC
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_000003FC
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0250_00000410
lbl_fn_803E0250_000003FC:
    xor r0, r3, r24
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0250_00000410:
    cmpwi r0, 0x0
    bne lbl_fn_803E0250_0000036C
lbl_fn_803E0250_00000418:
    lwzu r22, -0x4(r29)
    lwz r23, 0x0(r28)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r24, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r24, 0x0
    bge lbl_fn_803E0250_00000454
    cmpwi r3, 0x0
    blt lbl_fn_803E0250_00000454
    li r0, 0x0
    b lbl_fn_803E0250_000004B8
lbl_fn_803E0250_00000454:
    cmpwi r24, 0x0
    blt lbl_fn_803E0250_0000046C
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_0000046C
    li r0, 0x1
    b lbl_fn_803E0250_000004B8
lbl_fn_803E0250_0000046C:
    cmpwi r24, 0x0
    bge lbl_fn_803E0250_000004A4
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_000004A4
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0250_000004B8
lbl_fn_803E0250_000004A4:
    xor r0, r3, r24
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0250_000004B8:
    cmpwi r0, 0x0
    beq lbl_fn_803E0250_00000418
    cmplw r30, r29
    bge lbl_fn_803E0250_000004E0
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    b lbl_fn_803E0250_00000370
lbl_fn_803E0250_000004E0:
    cmplw r30, r25
    bne lbl_fn_803E0250_00000800
    lwz r3, 0x0(r30)
    subi r29, r26, 0x4
    lwz r0, 0x0(r28)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r28)
    lwz r22, 0x0(r25)
    lwz r23, -0x4(r26)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r28, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r28, 0x0
    bge lbl_fn_803E0250_0000053C
    cmpwi r3, 0x0
    blt lbl_fn_803E0250_0000053C
    li r0, 0x0
    b lbl_fn_803E0250_000005A0
lbl_fn_803E0250_0000053C:
    cmpwi r28, 0x0
    blt lbl_fn_803E0250_00000554
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_00000554
    li r0, 0x1
    b lbl_fn_803E0250_000005A0
lbl_fn_803E0250_00000554:
    cmpwi r28, 0x0
    bge lbl_fn_803E0250_0000058C
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_0000058C
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0250_000005A0
lbl_fn_803E0250_0000058C:
    xor r0, r3, r28
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0250_000005A0:
    cmpwi r0, 0x0
    bne lbl_fn_803E0250_00000678
    b lbl_fn_803E0250_000005B0
lbl_fn_803E0250_000005AC:
    addi r30, r30, 0x4
lbl_fn_803E0250_000005B0:
    cmplw r30, r26
    beq lbl_fn_803E0250_00000660
    lwz r22, 0x0(r25)
    lwz r23, 0x0(r30)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r28, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r28, 0x0
    bge lbl_fn_803E0250_000005F4
    cmpwi r3, 0x0
    blt lbl_fn_803E0250_000005F4
    li r0, 0x0
    b lbl_fn_803E0250_00000658
lbl_fn_803E0250_000005F4:
    cmpwi r28, 0x0
    blt lbl_fn_803E0250_0000060C
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_0000060C
    li r0, 0x1
    b lbl_fn_803E0250_00000658
lbl_fn_803E0250_0000060C:
    cmpwi r28, 0x0
    bge lbl_fn_803E0250_00000644
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_00000644
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0250_00000658
lbl_fn_803E0250_00000644:
    xor r0, r3, r28
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0250_00000658:
    cmpwi r0, 0x0
    beq lbl_fn_803E0250_000005AC
lbl_fn_803E0250_00000660:
    cmplw r30, r29
    bge lbl_fn_803E0250_00000678
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    stw r3, 0x0(r29)
lbl_fn_803E0250_00000678:
    cmplw r30, r29
    bge lbl_fn_803E0250_000007F8
    b lbl_fn_803E0250_00000688
lbl_fn_803E0250_00000684:
    addi r30, r30, 0x4
lbl_fn_803E0250_00000688:
    lwz r22, 0x0(r25)
    lwz r23, 0x0(r30)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r28, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r28, 0x0
    bge lbl_fn_803E0250_000006C4
    cmpwi r3, 0x0
    blt lbl_fn_803E0250_000006C4
    li r0, 0x0
    b lbl_fn_803E0250_00000728
lbl_fn_803E0250_000006C4:
    cmpwi r28, 0x0
    blt lbl_fn_803E0250_000006DC
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_000006DC
    li r0, 0x1
    b lbl_fn_803E0250_00000728
lbl_fn_803E0250_000006DC:
    cmpwi r28, 0x0
    bge lbl_fn_803E0250_00000714
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_00000714
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0250_00000728
lbl_fn_803E0250_00000714:
    xor r0, r3, r28
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0250_00000728:
    cmpwi r0, 0x0
    beq lbl_fn_803E0250_00000684
lbl_fn_803E0250_00000730:
    lwz r22, 0x0(r25)
    lwzu r23, -0x4(r29)
    lwz r3, 0x8(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r23)
    mr r28, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r28, 0x0
    bge lbl_fn_803E0250_0000076C
    cmpwi r3, 0x0
    blt lbl_fn_803E0250_0000076C
    li r0, 0x0
    b lbl_fn_803E0250_000007D0
lbl_fn_803E0250_0000076C:
    cmpwi r28, 0x0
    blt lbl_fn_803E0250_00000784
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_00000784
    li r0, 0x1
    b lbl_fn_803E0250_000007D0
lbl_fn_803E0250_00000784:
    cmpwi r28, 0x0
    bge lbl_fn_803E0250_000007BC
    cmpwi r3, 0x0
    bge lbl_fn_803E0250_000007BC
    lwz r4, 0x8(r22)
    lwz r3, 0x8(r23)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0250_000007D0
lbl_fn_803E0250_000007BC:
    xor r0, r3, r28
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0250_000007D0:
    cmpwi r0, 0x0
    bne lbl_fn_803E0250_00000730
    cmplw r30, r29
    bge lbl_fn_803E0250_000007F8
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    b lbl_fn_803E0250_00000688
lbl_fn_803E0250_000007F8:
    mr r25, r30
    b lbl_fn_803E0250_00000024
lbl_fn_803E0250_00000800:
    subf r3, r25, r30
    subf r0, r30, r26
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_803E0250_00000838
    mr r3, r25
    mr r4, r30
    mr r5, r27
    bl fn_803E0250
    mr r25, r30
    b lbl_fn_803E0250_00000024
lbl_fn_803E0250_00000838:
    mr r3, r30
    mr r4, r26
    mr r5, r27
    bl fn_803E0250
    mr r26, r30
    b lbl_fn_803E0250_00000024
lbl_fn_803E0250_00000850:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803E0AB4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lwz r31, 0x0(r5)
    lwz r26, 0x0(r3)
    lwz r3, 0x8(r31)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r26)
    mr r27, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r27, 0x0
    bge lbl_fn_803E0AB4_000008BC
    cmpwi r3, 0x0
    blt lbl_fn_803E0AB4_000008BC
    li r0, 0x0
    b lbl_fn_803E0AB4_00000920
lbl_fn_803E0AB4_000008BC:
    cmpwi r27, 0x0
    blt lbl_fn_803E0AB4_000008D4
    cmpwi r3, 0x0
    bge lbl_fn_803E0AB4_000008D4
    li r0, 0x1
    b lbl_fn_803E0AB4_00000920
lbl_fn_803E0AB4_000008D4:
    cmpwi r27, 0x0
    bge lbl_fn_803E0AB4_0000090C
    cmpwi r3, 0x0
    bge lbl_fn_803E0AB4_0000090C
    lwz r4, 0x8(r31)
    lwz r3, 0x8(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0AB4_00000920
lbl_fn_803E0AB4_0000090C:
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0AB4_00000920:
    lwz r26, 0x0(r29)
    cntlzw r0, r0
    lwz r25, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x8(r26)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r25)
    mr r27, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r27, 0x0
    bge lbl_fn_803E0AB4_00000964
    cmpwi r3, 0x0
    blt lbl_fn_803E0AB4_00000964
    li r0, 0x0
    b lbl_fn_803E0AB4_000009C8
lbl_fn_803E0AB4_00000964:
    cmpwi r27, 0x0
    blt lbl_fn_803E0AB4_0000097C
    cmpwi r3, 0x0
    bge lbl_fn_803E0AB4_0000097C
    li r0, 0x1
    b lbl_fn_803E0AB4_000009C8
lbl_fn_803E0AB4_0000097C:
    cmpwi r27, 0x0
    bge lbl_fn_803E0AB4_000009B4
    cmpwi r3, 0x0
    bge lbl_fn_803E0AB4_000009B4
    lwz r4, 0x8(r26)
    lwz r3, 0x8(r25)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0AB4_000009C8
lbl_fn_803E0AB4_000009B4:
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0AB4_000009C8:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_803E0AB4_000009E0
    cmpwi r0, 0x0
    bne lbl_fn_803E0AB4_00000AE8
lbl_fn_803E0AB4_000009E0:
    cmpwi r31, 0x0
    bne lbl_fn_803E0AB4_00000A04
    cmpwi r0, 0x0
    bne lbl_fn_803E0AB4_00000A04
    lwz r3, 0x0(r28)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r28)
    stw r3, 0x0(r29)
    b lbl_fn_803E0AB4_00000AE8
lbl_fn_803E0AB4_00000A04:
    lwz r25, 0x0(r29)
    lwz r26, 0x0(r28)
    lwz r3, 0x8(r25)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x8(r26)
    mr r27, r3
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmpwi r27, 0x0
    bge lbl_fn_803E0AB4_00000A40
    cmpwi r3, 0x0
    blt lbl_fn_803E0AB4_00000A40
    li r0, 0x0
    b lbl_fn_803E0AB4_00000AA4
lbl_fn_803E0AB4_00000A40:
    cmpwi r27, 0x0
    blt lbl_fn_803E0AB4_00000A58
    cmpwi r3, 0x0
    bge lbl_fn_803E0AB4_00000A58
    li r0, 0x1
    b lbl_fn_803E0AB4_00000AA4
lbl_fn_803E0AB4_00000A58:
    cmpwi r27, 0x0
    bge lbl_fn_803E0AB4_00000A90
    cmpwi r3, 0x0
    bge lbl_fn_803E0AB4_00000A90
    lwz r4, 0x8(r25)
    lwz r3, 0x8(r26)
    lwz r0, 0x50(r4)
    lwz r4, 0x50(r3)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_803E0AB4_00000AA4
lbl_fn_803E0AB4_00000A90:
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803E0AB4_00000AA4:
    cmpwi r0, 0x0
    beq lbl_fn_803E0AB4_00000ABC
    lwz r3, 0x0(r28)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r28)
    stw r3, 0x0(r29)
lbl_fn_803E0AB4_00000ABC:
    cmpwi r31, 0x0
    beq lbl_fn_803E0AB4_00000AD8
    lwz r3, 0x0(r29)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    stw r3, 0x0(r30)
    b lbl_fn_803E0AB4_00000AE8
lbl_fn_803E0AB4_00000AD8:
    lwz r3, 0x0(r28)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r28)
    stw r3, 0x0(r30)
lbl_fn_803E0AB4_00000AE8:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803E0D4C(void)
{
    nofralloc
    lfs f0, lbl_80885D58
    li r0, 0x0
    stw r0, 0x80(r3)
    stw r0, 0x84(r3)
    stw r0, 0x88(r3)
    stfs f0, 0x8c(r3)
    stw r0, 0x90(r3)
    stfs f0, 0x94(r3)
    stw r0, 0x98(r3)
    stw r0, 0x9c(r3)
    stw r0, 0xa4(r3)
    stw r0, 0xa8(r3)
    stw r0, 0xac(r3)
    blr
}

asm void fn_803E0D84(void)
{
    nofralloc
    li r0, 0x6
    mr r6, r3
    addi r7, r3, 0x318
    lfs f0, lbl_80885D58
    li r5, -0x1
    mtctr r0
lbl_fn_803E0D84_00000B4C:
    cmpwi r7, 0x0
    stw r5, 0x334(r6)
    beq lbl_fn_803E0D84_00000B60
    lwz r4, 0x318(r6)
    stfs f0, 0x50(r4)
lbl_fn_803E0D84_00000B60:
    cmpwi r7, 0x0
    beq lbl_fn_803E0D84_00000B70
    lwz r4, 0x31c(r6)
    stfs f0, 0x50(r4)
lbl_fn_803E0D84_00000B70:
    cmpwi r7, 0x0
    addi r8, r6, 0x8
    beq lbl_fn_803E0D84_00000B84
    lwz r4, 0x318(r8)
    stfs f0, 0x50(r4)
lbl_fn_803E0D84_00000B84:
    cmpwi r7, 0x0
    beq lbl_fn_803E0D84_00000B94
    lwz r4, 0x31c(r8)
    stfs f0, 0x50(r4)
lbl_fn_803E0D84_00000B94:
    cmpwi r7, 0x0
    beq lbl_fn_803E0D84_00000BA4
    lwz r4, 0x320(r8)
    stfs f0, 0x50(r4)
lbl_fn_803E0D84_00000BA4:
    addi r6, r6, 0x20
    addi r7, r7, 0x20
    bdnz lbl_fn_803E0D84_00000B4C
    lwz r0, 0x310(r3)
    subf r0, r0, r0
    stw r0, 0x310(r3)
    blr
}

asm void fn_803E0E10(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    bl _savegpr_22
    lwz r6, lbl_8087F610
    lis r0, 0x4330
    stw r0, 0x70(r1)
    mr r23, r3
    cmpwi r6, 0x0
    mr r24, r4
    stw r0, 0x78(r1)
    mr r25, r5
    beq lbl_fn_803E0E10_00000C2C
    lwz r0, 0x50c(r6)
    cmpwi r0, 0x0
    bne lbl_fn_803E0E10_00001E90
    lwz r0, 0x4fc(r6)
    cmpwi r0, 0x1e
    beq lbl_fn_803E0E10_00000C2C
    b lbl_fn_803E0E10_00001E90
lbl_fn_803E0E10_00000C2C:
    lwz r31, lbl_8087F430
    li r30, 0x1
    li r4, 0x69
    mr r3, r31
    bl fn_80370174
    lwz r4, lbl_8087F8A0
    mr r26, r3
    cmpwi r4, 0x0
    beq lbl_fn_803E0E10_00000C58
    lwz r27, 0x48(r4)
    b lbl_fn_803E0E10_00000C5C
lbl_fn_803E0E10_00000C58:
    li r27, 0x0
lbl_fn_803E0E10_00000C5C:
    lwz r3, lbl_8087F430
    li r4, 0x25
    lwz r28, 0x5660(r3)
    bl fn_80370174
    cmpwi r26, 0x1
    bne lbl_fn_803E0E10_00000CCC
    cmpwi r25, -0x1
    beq lbl_fn_803E0E10_00000D54
    cmpwi r27, 0x0
    beq lbl_fn_803E0E10_00000D54
    cmpwi r28, 0x0
    li r30, 0x0
    li r0, 0x1
    bne lbl_fn_803E0E10_00000CBC
    lwz r5, 0x648(r27)
    li r4, 0x0
    cmpwi r5, 0x0
    beq lbl_fn_803E0E10_00000CB0
    cmpwi r3, 0x0
    bne lbl_fn_803E0E10_00000CB0
    li r4, 0x1
lbl_fn_803E0E10_00000CB0:
    cmpwi r4, 0x0
    bne lbl_fn_803E0E10_00000CBC
    li r0, 0x0
lbl_fn_803E0E10_00000CBC:
    cmpwi r0, 0x0
    beq lbl_fn_803E0E10_00000D54
    li r30, 0x1
    b lbl_fn_803E0E10_00000D54
lbl_fn_803E0E10_00000CCC:
    cmpwi r26, 0x2
    beq lbl_fn_803E0E10_00000D54
    lwz r4, lbl_8087F098
    cmpwi r4, 0x0
    beq lbl_fn_803E0E10_00000CEC
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803E0E10_00000D54
lbl_fn_803E0E10_00000CEC:
    cmpwi r27, 0x0
    beq lbl_fn_803E0E10_00000D54
    cmpwi r28, 0x0
    li r30, 0x0
    li r0, 0x1
    li r4, 0x1
    bne lbl_fn_803E0E10_00000D30
    lwz r6, 0x648(r27)
    li r5, 0x0
    cmpwi r6, 0x0
    beq lbl_fn_803E0E10_00000D24
    cmpwi r3, 0x0
    bne lbl_fn_803E0E10_00000D24
    li r5, 0x1
lbl_fn_803E0E10_00000D24:
    cmpwi r5, 0x0
    bne lbl_fn_803E0E10_00000D30
    li r4, 0x0
lbl_fn_803E0E10_00000D30:
    cmpwi r4, 0x0
    bne lbl_fn_803E0E10_00000D48
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    bne lbl_fn_803E0E10_00000D48
    li r0, 0x0
lbl_fn_803E0E10_00000D48:
    cmpwi r0, 0x0
    beq lbl_fn_803E0E10_00000D54
    li r30, 0x1
lbl_fn_803E0E10_00000D54:
    lwz r3, 0x60(r23)
    cmpwi r30, 0x0
    li r0, 0x0
    lwz r30, 0x2c(r3)
    beq lbl_fn_803E0E10_00000D7C
    cmpwi r30, 0x0
    ble lbl_fn_803E0E10_00000D7C
    cmpwi r30, 0x1a
    bgt lbl_fn_803E0E10_00000D7C
    li r0, 0x1
lbl_fn_803E0E10_00000D7C:
    cmpwi r0, 0x0
    li r0, 0x0
    beq lbl_fn_803E0E10_00000DB4
    lwz r4, 0x868(r31)
    li r3, 0x1
    cmpwi r4, 0x6
    bne lbl_fn_803E0E10_00000DA8
    lwz r4, lbl_8087F610
    cmpwi r4, 0x0
    bne lbl_fn_803E0E10_00000DA8
    li r3, 0x0
lbl_fn_803E0E10_00000DA8:
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00000DB4
    li r0, 0x1
lbl_fn_803E0E10_00000DB4:
    cmpwi r0, 0x0
    li r31, 0x0
    beq lbl_fn_803E0E10_00000DD4
    lwz r3, lbl_8087F0A8
    lwz r0, 0x470(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803E0E10_00000DD4
    li r31, 0x1
lbl_fn_803E0E10_00000DD4:
    lfs f3, lbl_80885D58
    lfs f0, 0x7d8(r23)
    lwz r29, 0xad4(r23)
    fcmpu cr0, f3, f0
    bne lbl_fn_803E0E10_00000DF8
    subic. r29, r29, 0x1
    ble lbl_fn_803E0E10_00000DF4
    b lbl_fn_803E0E10_00000DF8
lbl_fn_803E0E10_00000DF4:
    li r29, 0x0
lbl_fn_803E0E10_00000DF8:
    lfs f0, 0x7d8(r23)
    lwz r3, 0x34(r24)
    fctiwz f0, f0
    lwz r0, 0x940(r23)
    stfd f0, 0x80(r1)
    cmpw r3, r0
    lwz r5, 0x84(r1)
    beq lbl_fn_803E0E10_00000E28
    li r0, 0x0
    stw r0, 0x50(r24)
    stw r0, 0x48(r24)
    b lbl_fn_803E0E10_00000EE4
lbl_fn_803E0E10_00000E28:
    lfs f0, 0x948(r23)
    lfs f5, lbl_80885D58
    fcmpo cr0, f0, f5
    cror eq, gt, eq
    bne lbl_fn_803E0E10_00000E88
    lwz r0, 0x30(r24)
    lis r3, lbl_80750650@ha
    lfd f4, lbl_80750650@l(r3)
    subf r0, r5, r0
    lfs f0, lbl_80885D60
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f3, 0x70(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803E0E10_00000E88
    li r3, 0x1
    li r0, 0x14
    stw r3, 0x50(r24)
    lwz r3, 0xc(r24)
    stw r0, 0x48(r24)
    stfs f5, 0x50(r3)
    b lbl_fn_803E0E10_00000EE4
lbl_fn_803E0E10_00000E88:
    lfs f0, 0x948(r23)
    lfs f5, lbl_80885D58
    fcmpo cr0, f0, f5
    cror eq, lt, eq
    bne lbl_fn_803E0E10_00000EE4
    lwz r0, 0x30(r24)
    lis r3, lbl_80750650@ha
    lfd f4, lbl_80750650@l(r3)
    subf r0, r0, r5
    lfs f0, lbl_80885D60
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f3, 0x78(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803E0E10_00000EE4
    li r3, 0x0
    li r0, 0x14
    stw r3, 0x50(r24)
    lwz r3, 0xc(r24)
    stw r0, 0x48(r24)
    stfs f5, 0x50(r3)
lbl_fn_803E0E10_00000EE4:
    lwz r4, 0x48(r24)
    lwz r0, 0x940(r23)
    cmpwi r4, 0x0
    stw r0, 0x34(r24)
    stw r5, 0x30(r24)
    ble lbl_fn_803E0E10_00000F50
    lwz r0, 0x38(r24)
    xoris r3, r5, 0x8000
    stw r3, 0x74(r1)
    lis r3, lbl_80750650@ha
    xoris r0, r0, 0x8000
    subi r4, r4, 0x1
    stw r0, 0x7c(r1)
    lfd f4, lbl_80750650@l(r3)
    lfd f0, 0x70(r1)
    lfd f3, 0x78(r1)
    fsubs f5, f0, f4
    lfs f0, lbl_80885EDC
    fsubs f4, f3, f4
    stw r4, 0x48(r24)
    fsubs f3, f5, f4
    fmadds f0, f0, f3, f4
    fctiwz f0, f0
    stfd f0, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r0, 0x38(r24)
    b lbl_fn_803E0E10_00000F54
lbl_fn_803E0E10_00000F50:
    stw r5, 0x38(r24)
lbl_fn_803E0E10_00000F54:
    lwz r3, 0x38(r24)
    lis r4, lbl_80750650@ha
    lwz r0, 0x940(r23)
    xoris r3, r3, 0x8000
    stw r3, 0x74(r1)
    xoris r3, r0, 0x8000
    lwz r0, 0x14(r24)
    stw r3, 0x7c(r1)
    lfd f4, lbl_80750650@l(r4)
    cmpwi r0, 0x0
    lfd f3, 0x70(r1)
    lfd f0, 0x78(r1)
    fsubs f3, f3, f4
    fsubs f0, f0, f4
    fdivs f0, f3, f0
    stfs f0, 0x3c(r24)
    beq lbl_fn_803E0E10_0000100C
    cmpwi r29, 0x0
    li r3, 0xf
    bgt lbl_fn_803E0E10_00000FA8
    li r3, 0x14
lbl_fn_803E0E10_00000FA8:
    lwz r0, 0x9f8(r23)
    lwz r4, 0x40(r24)
    cmpw r4, r0
    ble lbl_fn_803E0E10_00000FD8
    subf r0, r0, r4
    cmpwi r0, 0x1
    beq lbl_fn_803E0E10_00000FD0
    li r0, 0x0
    stw r0, 0x4c(r24)
    b lbl_fn_803E0E10_00001000
lbl_fn_803E0E10_00000FD0:
    stw r3, 0x4c(r24)
    b lbl_fn_803E0E10_00001000
lbl_fn_803E0E10_00000FD8:
    lwz r0, 0x5c(r24)
    cmpw r0, r29
    ble lbl_fn_803E0E10_00000FEC
    stw r3, 0x4c(r24)
    b lbl_fn_803E0E10_00001000
lbl_fn_803E0E10_00000FEC:
    lwz r0, 0x4c(r24)
    cmpwi r0, 0x0
    bgt lbl_fn_803E0E10_00001000
    li r0, 0x0
    stw r0, 0x4c(r24)
lbl_fn_803E0E10_00001000:
    lwz r0, 0x9f8(r23)
    stw r0, 0x40(r24)
    stw r29, 0x5c(r24)
lbl_fn_803E0E10_0000100C:
    mr r3, r23
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00001030
    mr r3, r23
    li r4, 0x5
    bl fn_80219344
    mr r28, r3
    b lbl_fn_803E0E10_0000104C
lbl_fn_803E0E10_00001030:
    lwz r3, 0xabc(r23)
    cmpwi r3, 0x0
    ble lbl_fn_803E0E10_00001044
    bl fn_80219E6C
    b lbl_fn_803E0E10_00001048
lbl_fn_803E0E10_00001044:
    li r3, 0x0
lbl_fn_803E0E10_00001048:
    mr r28, r3
lbl_fn_803E0E10_0000104C:
    lfs f31, lbl_80885D60
    lfs f0, 0x9fc(r23)
    fcmpo cr0, f31, f0
    bge lbl_fn_803E0E10_00001060
    b lbl_fn_803E0E10_00001064
lbl_fn_803E0E10_00001060:
    fmr f31, f0
lbl_fn_803E0E10_00001064:
    cmpwi r31, 0x0
    beq lbl_fn_803E0E10_000010A4
    lfs f0, lbl_80885D60
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    beq lbl_fn_803E0E10_00001094
    lfs f3, 0xac8(r23)
    lfs f0, lbl_80885D58
    fcmpo cr0, f3, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_803E0E10_000010A4
lbl_fn_803E0E10_00001094:
    lwz r3, 0x10(r24)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803E0E10_000010A4:
    stfs f31, 0x44(r24)
    li r0, 0x5
    lwz r3, 0x9f8(r23)
    cmpwi r3, 0x5
    bgt lbl_fn_803E0E10_000010BC
    mr r0, r3
lbl_fn_803E0E10_000010BC:
    cmpwi r0, 0x0
    bge lbl_fn_803E0E10_000010CC
    li r27, 0x0
    b lbl_fn_803E0E10_000010DC
lbl_fn_803E0E10_000010CC:
    cmpwi r3, 0x5
    li r27, 0x5
    bgt lbl_fn_803E0E10_000010DC
    mr r27, r3
lbl_fn_803E0E10_000010DC:
    lwz r22, 0x980(r23)
    addi r3, r23, 0x7d4
    bl fn_8012B028
    xoris r0, r22, 0x8000
    stw r0, 0x74(r1)
    lwz r0, 0x0(r24)
    add r3, r22, r3
    lfd f5, 0x70(r1)
    xoris r3, r3, 0x8000
    stw r3, 0x7c(r1)
    xoris r0, r0, 0x8000
    lis r4, lbl_80750650@ha
    lfs f0, lbl_80885E60
    stw r0, 0x74(r1)
    mr r3, r23
    lfd f6, lbl_80750650@l(r4)
    li r4, 0x1
    lfd f4, 0x78(r1)
    lfd f3, 0x70(r1)
    fsubs f5, f5, f6
    fsubs f4, f4, f6
    fsubs f3, f3, f6
    fdivs f30, f5, f4
    fdivs f29, f3, f0
    bl fn_80219344
    lwz r4, lbl_8087F430
    neg r0, r3
    or r0, r0, r3
    li r22, 0x1
    cmpwi r4, 0x0
    srwi r26, r0, 31
    beq lbl_fn_803E0E10_00001174
    mr r3, r4
    li r4, 0x88
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00001174
    li r22, 0x0
lbl_fn_803E0E10_00001174:
    lwz r0, 0x55c(r23)
    or r26, r26, r22
    lfs f3, lbl_80885D58
    cmpwi r0, 0x6
    bne lbl_fn_803E0E10_000011A8
    lwz r0, 0x560(r23)
    cmpwi r0, 0x1d
    beq lbl_fn_803E0E10_0000119C
    cmpwi r0, 0x1e
    bne lbl_fn_803E0E10_000011A8
lbl_fn_803E0E10_0000119C:
    lfs f0, 0xfbc(r23)
    lfs f3, 0xfb8(r23)
    fdivs f3, f3, f0
lbl_fn_803E0E10_000011A8:
    lfs f0, lbl_80885D60
    fcmpo cr0, f0, f3
    cmpwi r31, 0x0
    beq lbl_fn_803E0E10_00001E90
    lfs f0, lbl_80885D58
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    lwz r3, 0xc(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_0000170C
    xoris r0, r25, 0x8000
    stw r0, 0x7c(r1)
    lis r4, lbl_80750650@ha
    lis r31, lbl_807506A0@ha
    lfd f3, lbl_80750650@l(r4)
    addi r31, r31, lbl_807506A0@l
    lfd f0, 0x78(r1)
    addi r4, r31, 0x109d
    fsubs f1, f0, f3
    bl fn_801F6C80
    fmr f1, f29
    lwz r3, 0xc(r24)
    addi r4, r31, 0x13e8
    bl fn_801F6C80
    lwz r4, 0xc(r24)
    addi r3, r1, 0x48
    addi r5, r31, 0x10a2
    bl fn_801F8830
    lfs f6, 0x48(r1)
    addi r4, r31, 0x13ed
    lfs f5, 0x4c(r1)
    lfs f4, 0x50(r1)
    lfs f3, 0x54(r1)
    lfs f0, 0x58(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f3, 0x68(r1)
    stfs f0, 0x6c(r1)
    lwz r3, 0xc(r24)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r5, 0x60(r23)
    lwz r3, 0xc(r24)
    lwz r5, 0x8(r5)
    bl fn_801F837C
    lwz r3, 0xc(r24)
    addi r4, r31, 0x10d6
    lfs f1, 0x3c(r24)
    bl fn_801F6C80
    fmr f1, f30
    lwz r3, 0xc(r24)
    addi r4, r31, 0x13f8
    bl fn_801F6C80
    lwz r3, 0xc(r24)
    addi r4, r31, 0x1317
    lwz r5, 0x934(r23)
    li r6, 0x0
    bl fn_801F8598
    lwz r3, 0xc(r24)
    addi r4, r31, 0x1400
    lwz r5, 0x874(r23)
    li r6, 0x0
    bl fn_801F8598
    lwz r3, 0xc(r24)
    addi r4, r31, 0x1406
    lwz r5, 0x38(r24)
    li r6, 0x0
    bl fn_801F8598
    lwz r3, 0xc(r24)
    addi r4, r31, 0x140c
    lwz r5, 0x940(r23)
    li r6, 0x0
    bl fn_801F8598
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_803E0E10_00001314
    lis r25, lbl_8078C638@ha
    lwz r3, 0xc(r24)
    addi r25, r25, lbl_8078C638@l
    addi r4, r31, 0x1317
    addi r5, r25, 0x52
    bl fn_801F837C
    lwz r3, 0xc(r24)
    addi r4, r31, 0x1412
    addi r5, r25, 0x52
    bl fn_801F837C
lbl_fn_803E0E10_00001314:
    lfs f3, 0x948(r23)
    lfs f0, lbl_80885D58
    fcmpo cr0, f3, f0
    ble lbl_fn_803E0E10_00001364
    lfs f0, 0x3c(r24)
    lfs f1, lbl_80885D60
    fcmpo cr0, f0, f1
    bge lbl_fn_803E0E10_00001364
    lis r25, lbl_807506A0@ha
    lwz r3, 0xc(r24)
    addi r25, r25, lbl_807506A0@l
    addi r4, r25, 0x10f2
    bl fn_801F6C80
    lfs f1, lbl_80885EB0
    addi r4, r25, 0x141d
    lwz r3, 0xc(r24)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    b lbl_fn_803E0E10_000013F4
lbl_fn_803E0E10_00001364:
    lwz r0, 0x48(r24)
    cmpwi r0, 0x0
    ble lbl_fn_803E0E10_0000138C
    lis r4, lbl_807506A0@ha
    lwz r3, 0xc(r24)
    addi r4, r4, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r4, 0x10f2
    bl fn_801F6C80
    b lbl_fn_803E0E10_000013A4
lbl_fn_803E0E10_0000138C:
    lis r4, lbl_807506A0@ha
    lwz r3, 0xc(r24)
    addi r4, r4, lbl_807506A0@l
    lfs f1, lbl_80885D58
    addi r4, r4, 0x10f2
    bl fn_801F6C80
lbl_fn_803E0E10_000013A4:
    lwz r0, 0x50(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803E0E10_000013D4
    lfs f2, lbl_80885D58
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    lwz r3, 0xc(r24)
    fmr f3, f2
    lfs f1, lbl_80885EB0
    addi r4, r4, 0x141d
    bl fn_801F7DF0
    b lbl_fn_803E0E10_000013F4
lbl_fn_803E0E10_000013D4:
    lfs f1, lbl_80885D58
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    lwz r3, 0xc(r24)
    fmr f3, f1
    lfs f2, lbl_80885EB0
    addi r4, r4, 0x141d
    bl fn_801F7DF0
lbl_fn_803E0E10_000013F4:
    lwz r0, 0x7e0(r23)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803E0E10_00001424
    lis r4, lbl_807506A0@ha
    lis r5, 0xffc8
    addi r4, r4, lbl_807506A0@l
    lwz r3, 0xc(r24)
    addi r4, r4, 0x1428
    addi r5, r5, 0x3c14
    bl fn_801F7A18
    b lbl_fn_803E0E10_0000143C
lbl_fn_803E0E10_00001424:
    lis r4, lbl_807506A0@ha
    lwz r3, 0xc(r24)
    addi r4, r4, lbl_807506A0@l
    li r5, -0x1
    addi r4, r4, 0x1428
    bl fn_801F7A18
lbl_fn_803E0E10_0000143C:
    lfs f0, lbl_80885D58
    cmpwi r30, 0x0
    lfs f8, lbl_80885EE0
    lfs f7, lbl_80885E28
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f7, 0x44(r1)
    ble lbl_fn_803E0E10_0000150C
    cmpwi r30, 0x1a
    bgt lbl_fn_803E0E10_0000150C
    slwi r0, r30, 29
    srwi r5, r30, 31
    subf r3, r5, r0
    lis r4, lbl_80750650@ha
    rotlwi r3, r3, 3
    srawi r0, r30, 3
    add r3, r3, r5
    lfd f6, lbl_80750650@l(r4)
    addze r5, r0
    xoris r0, r3, 0x8000
    stw r0, 0x74(r1)
    xoris r0, r5, 0x8000
    addi r3, r3, 0x1
    stw r0, 0x7c(r1)
    addi r0, r5, 0x1
    lfd f0, 0x70(r1)
    xoris r3, r3, 0x8000
    lfd f4, 0x78(r1)
    xoris r0, r0, 0x8000
    stw r3, 0x74(r1)
    fsubs f5, f0, f6
    fsubs f4, f4, f6
    addi r5, r1, 0x28
    stw r0, 0x7c(r1)
    addi r3, r1, 0x38
    lfd f3, 0x70(r1)
    lfd f0, 0x78(r1)
    fsubs f3, f3, f6
    fsubs f0, f0, f6
    fmuls f5, f8, f5
    fmuls f4, f7, f4
    fmuls f3, f8, f3
    stfs f5, 0x28(r1)
    fmuls f0, f7, f0
    stfs f4, 0x2c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
lbl_fn_803E0E10_0000150C:
    addi r31, r1, 0x38
    lis r25, lbl_807506A0@ha
    addi r5, r1, 0x18
    psq_l f1, 0x0(r31), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    addi r25, r25, lbl_807506A0@l
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r25, 0x1432
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0xc(r24)
    bl fn_801F7590
    addi r5, r1, 0x8
    psq_l f1, 0x0(r31), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    addi r4, r25, 0x1439
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0xc(r24)
    bl fn_801F7590
    cmpwi r28, 0x0
    beq lbl_fn_803E0E10_000015D4
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    ble lbl_fn_803E0E10_000015D4
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803E0E10_000015D4
    lwz r3, 0xc(r24)
    addi r4, r25, 0x1441
    lfs f1, lbl_80885D60
    bl fn_801F6C80
    lfs f3, 0xac8(r23)
    lfs f0, lbl_80885D58
    fcmpo cr0, f3, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_803E0E10_000015C0
    lfs f4, 0xacc(r23)
    addi r4, r25, 0x1449
    lfs f0, lbl_80885EE4
    lwz r3, 0xc(r24)
    fadds f0, f0, f4
    fdivs f1, f3, f0
    bl fn_801F6C80
    b lbl_fn_803E0E10_000015EC
lbl_fn_803E0E10_000015C0:
    fmr f1, f31
    lwz r3, 0xc(r24)
    addi r4, r25, 0x1449
    bl fn_801F6C80
    b lbl_fn_803E0E10_000015EC
lbl_fn_803E0E10_000015D4:
    lis r4, lbl_807506A0@ha
    lwz r3, 0xc(r24)
    addi r4, r4, lbl_807506A0@l
    lfs f1, lbl_80885D58
    addi r4, r4, 0x1441
    bl fn_801F6C80
lbl_fn_803E0E10_000015EC:
    cmpwi r26, 0x0
    beq lbl_fn_803E0E10_000016F4
    lwz r0, 0x944(r23)
    cmpwi r0, 0x0
    ble lbl_fn_803E0E10_00001624
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lis r3, lbl_80750650@ha
    lfs f0, 0x7dc(r23)
    lfd f4, lbl_80750650@l(r3)
    lfd f3, 0x70(r1)
    fsubs f3, f3, f4
    fdivs f31, f0, f3
    b lbl_fn_803E0E10_00001628
lbl_fn_803E0E10_00001624:
    lfs f31, lbl_80885D58
lbl_fn_803E0E10_00001628:
    lis r25, lbl_807506A0@ha
    lwz r3, 0xc(r24)
    addi r25, r25, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r25, 0x1450
    bl fn_801F6C80
    fmr f1, f31
    lwz r3, 0xc(r24)
    addi r4, r25, 0x1458
    bl fn_801F6C80
    lfs f0, lbl_80885E28
    addi r4, r25, 0x145f
    lwz r3, 0xc(r24)
    fcmpo cr0, f31, f0
    bge lbl_fn_803E0E10_0000166C
    lfs f1, lbl_80885D58
    b lbl_fn_803E0E10_00001670
lbl_fn_803E0E10_0000166C:
    lfs f1, lbl_80885D60
lbl_fn_803E0E10_00001670:
    bl fn_801F6C80
    lfs f0, lbl_80885DFC
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    lwz r3, 0xc(r24)
    fcmpo cr0, f31, f0
    addi r4, r4, 0x1467
    bge lbl_fn_803E0E10_00001698
    lfs f1, lbl_80885D58
    b lbl_fn_803E0E10_0000169C
lbl_fn_803E0E10_00001698:
    lfs f1, lbl_80885D60
lbl_fn_803E0E10_0000169C:
    bl fn_801F6C80
    lfs f0, lbl_80885DE8
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    lwz r3, 0xc(r24)
    fcmpo cr0, f31, f0
    addi r4, r4, 0x146f
    bge lbl_fn_803E0E10_000016C4
    lfs f1, lbl_80885D58
    b lbl_fn_803E0E10_000016C8
lbl_fn_803E0E10_000016C4:
    lfs f1, lbl_80885D60
lbl_fn_803E0E10_000016C8:
    bl fn_801F6C80
    lfs f1, lbl_80885D60
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    lwz r3, 0xc(r24)
    fcmpo cr0, f31, f1
    addi r4, r4, 0x1477
    bge lbl_fn_803E0E10_000016EC
    lfs f1, lbl_80885D58
lbl_fn_803E0E10_000016EC:
    bl fn_801F6C80
    b lbl_fn_803E0E10_0000170C
lbl_fn_803E0E10_000016F4:
    lis r4, lbl_807506A0@ha
    lwz r3, 0xc(r24)
    addi r4, r4, lbl_807506A0@l
    lfs f1, lbl_80885D58
    addi r4, r4, 0x1450
    bl fn_801F6C80
lbl_fn_803E0E10_0000170C:
    lwz r3, 0x10(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_000017F8
    lis r31, lbl_807506A0@ha
    addi r5, r1, 0x5c
    addi r31, r31, lbl_807506A0@l
    addi r4, r31, 0x12cb
    bl fn_801F6E78
    cmpwi r28, 0x0
    beq lbl_fn_803E0E10_000017F8
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    ble lbl_fn_803E0E10_000017F8
    slwi r0, r30, 29
    srwi r3, r30, 31
    subf r0, r3, r0
    lis r25, lbl_80750650@ha
    rotlwi r0, r0, 3
    lfd f4, lbl_80750650@l(r25)
    add r0, r0, r3
    lfs f0, lbl_80885EE0
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lwz r3, 0x10(r24)
    addi r4, r31, 0x147f
    lfd f3, 0x78(r1)
    fsubs f3, f3, f4
    fmuls f1, f0, f3
    bl fn_801F6C80
    srawi r0, r30, 3
    lfd f4, lbl_80750650@l(r25)
    addze r0, r0
    lfs f0, lbl_80885E28
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lwz r3, 0x10(r24)
    addi r4, r31, 0x1485
    lfd f3, 0x70(r1)
    fsubs f3, f3, f4
    fmuls f1, f0, f3
    bl fn_801F6C80
    lfs f3, 0xac8(r23)
    lfs f0, lbl_80885D58
    fcmpo cr0, f3, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_803E0E10_000017E8
    lfs f4, 0xacc(r23)
    addi r4, r31, 0x1449
    lfs f0, lbl_80885EE4
    lwz r3, 0x10(r24)
    fadds f0, f0, f4
    fdivs f1, f3, f0
    bl fn_801F6C80
    b lbl_fn_803E0E10_000017F8
lbl_fn_803E0E10_000017E8:
    lwz r3, 0x10(r24)
    addi r4, r31, 0x1449
    lfs f1, lbl_80885D60
    bl fn_801F6C80
lbl_fn_803E0E10_000017F8:
    lwz r3, 0x14(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00001A34
    lis r25, lbl_807506A0@ha
    addi r5, r1, 0x5c
    addi r25, r25, lbl_807506A0@l
    addi r4, r25, 0x12cb
    bl fn_801F6E78
    lwz r3, 0x14(r24)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r24)
    cmpwi r3, 0x0
    ble lbl_fn_803E0E10_00001874
    subi r0, r3, 0x1
    stw r0, 0x4c(r24)
    lwz r3, 0x14(r24)
    addi r4, r25, 0x148b
    lfs f0, lbl_80885D60
    addi r5, r29, 0x1
    stfs f0, 0x54(r3)
    li r6, 0x0
    lwz r3, 0x14(r24)
    bl fn_801F8598
    lwz r3, 0x14(r24)
    mr r5, r29
    addi r4, r25, 0x1496
    li r6, 0x0
    bl fn_801F8598
    b lbl_fn_803E0E10_00001938
lbl_fn_803E0E10_00001874:
    lwz r3, 0x14(r24)
    cmpwi r29, 0x0
    lfs f5, lbl_80885D58
    stfs f5, 0x54(r3)
    bgt lbl_fn_803E0E10_000018C0
    lwz r0, 0x9f8(r23)
    lis r3, lbl_80750650@ha
    lfd f5, lbl_80750650@l(r3)
    subfic r0, r0, 0x5
    lfs f3, lbl_80885E60
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfs f0, lbl_80885E78
    lfd f4, 0x78(r1)
    lwz r3, 0x14(r24)
    fsubs f4, f4, f5
    fmadds f0, f3, f4, f0
    stfs f0, 0x50(r3)
    b lbl_fn_803E0E10_00001908
lbl_fn_803E0E10_000018C0:
    subfic r0, r29, 0x2
    lis r3, lbl_80750650@ha
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f4, lbl_80750650@l(r3)
    lfd f0, 0x70(r1)
    lfs f3, lbl_80885E74
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_803E0E10_000018F0
    b lbl_fn_803E0E10_00001900
lbl_fn_803E0E10_000018F0:
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f0, f0, f4
    fmuls f5, f3, f0
lbl_fn_803E0E10_00001900:
    lwz r3, 0x14(r24)
    stfs f5, 0x50(r3)
lbl_fn_803E0E10_00001908:
    lis r25, lbl_807506A0@ha
    lwz r3, 0x14(r24)
    addi r25, r25, lbl_807506A0@l
    mr r5, r29
    addi r4, r25, 0x148b
    li r6, 0x0
    bl fn_801F8598
    lwz r3, 0x14(r24)
    mr r5, r29
    addi r4, r25, 0x1496
    li r6, 0x0
    bl fn_801F8598
lbl_fn_803E0E10_00001938:
    cmpwi r29, 0x0
    bgt lbl_fn_803E0E10_0000195C
    lis r4, lbl_807506A0@ha
    lwz r3, 0x14(r24)
    addi r4, r4, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r4, 0x14a0
    bl fn_801F6C80
    b lbl_fn_803E0E10_00001974
lbl_fn_803E0E10_0000195C:
    lis r4, lbl_807506A0@ha
    lwz r3, 0x14(r24)
    addi r4, r4, lbl_807506A0@l
    lfs f1, lbl_80885D58
    addi r4, r4, 0x14a0
    bl fn_801F6C80
lbl_fn_803E0E10_00001974:
    cmpwi r27, 0x1
    bgt lbl_fn_803E0E10_000019B8
    lis r25, lbl_807506A0@ha
    lwz r3, 0x14(r24)
    addi r25, r25, lbl_807506A0@l
    lfs f1, lbl_80885EB0
    addi r4, r25, 0x14a6
    bl fn_801F6C80
    lwz r3, 0x14(r24)
    addi r4, r25, 0x14ab
    lfs f1, lbl_80885D58
    bl fn_801F6C80
    lwz r3, 0x14(r24)
    addi r4, r25, 0x14b0
    lfs f1, lbl_80885D58
    bl fn_801F6C80
    b lbl_fn_803E0E10_00001A34
lbl_fn_803E0E10_000019B8:
    cmpwi r27, 0x2
    bgt lbl_fn_803E0E10_000019FC
    lis r25, lbl_807506A0@ha
    lwz r3, 0x14(r24)
    addi r25, r25, lbl_807506A0@l
    lfs f1, lbl_80885EB0
    addi r4, r25, 0x14a6
    bl fn_801F6C80
    lwz r3, 0x14(r24)
    addi r4, r25, 0x14ab
    lfs f1, lbl_80885E88
    bl fn_801F6C80
    lwz r3, 0x14(r24)
    addi r4, r25, 0x14b0
    lfs f1, lbl_80885D58
    bl fn_801F6C80
    b lbl_fn_803E0E10_00001A34
lbl_fn_803E0E10_000019FC:
    lis r25, lbl_807506A0@ha
    lwz r3, 0x14(r24)
    addi r25, r25, lbl_807506A0@l
    lfs f1, lbl_80885D58
    addi r4, r25, 0x14a6
    bl fn_801F6C80
    lwz r3, 0x14(r24)
    addi r4, r25, 0x14ab
    lfs f1, lbl_80885EB0
    bl fn_801F6C80
    lwz r3, 0x14(r24)
    addi r4, r25, 0x14b0
    lfs f1, lbl_80885EE8
    bl fn_801F6C80
lbl_fn_803E0E10_00001A34:
    lwz r3, 0x18(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00001B98
    lis r4, lbl_807506A0@ha
    addi r5, r1, 0x5c
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x12cb
    bl fn_801F6E78
    lwz r0, 0x7e0(r23)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803E0E10_00001A80
    lwz r3, 0x18(r24)
    lfs f0, lbl_80885D60
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x18(r24)
    stfs f0, 0x54(r3)
lbl_fn_803E0E10_00001A80:
    lwz r0, 0x9f8(r23)
    cmpwi r0, 0x1
    bne lbl_fn_803E0E10_00001AB4
    lwz r0, 0x4c(r24)
    cmpwi r0, 0x0
    bne lbl_fn_803E0E10_00001AB4
    lwz r3, 0x18(r24)
    lfs f0, lbl_80885EEC
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x18(r24)
    stfs f0, 0x54(r3)
lbl_fn_803E0E10_00001AB4:
    cmpwi r30, 0x0
    ble lbl_fn_803E0E10_00001B40
    cmpwi r30, 0x1a
    bgt lbl_fn_803E0E10_00001B40
    slwi r0, r30, 29
    srwi r3, r30, 31
    subf r0, r3, r0
    lis r25, lbl_80750650@ha
    rotlwi r0, r0, 3
    lis r27, lbl_807506A0@ha
    add r0, r0, r3
    lfd f4, lbl_80750650@l(r25)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    addi r27, r27, lbl_807506A0@l
    lfs f0, lbl_80885EE0
    lfd f3, 0x70(r1)
    addi r4, r27, 0x147f
    lwz r3, 0x18(r24)
    fsubs f3, f3, f4
    fmuls f1, f0, f3
    bl fn_801F6C80
    srawi r0, r30, 3
    lfd f4, lbl_80750650@l(r25)
    addze r0, r0
    lfs f0, lbl_80885E28
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lwz r3, 0x18(r24)
    addi r4, r27, 0x1485
    lfd f3, 0x78(r1)
    fsubs f3, f3, f4
    fmuls f1, f0, f3
    bl fn_801F6C80
    b lbl_fn_803E0E10_00001B68
lbl_fn_803E0E10_00001B40:
    lis r25, lbl_807506A0@ha
    lwz r3, 0x18(r24)
    addi r25, r25, lbl_807506A0@l
    lfs f1, lbl_80885D58
    addi r4, r25, 0x147f
    bl fn_801F6C80
    lwz r3, 0x18(r24)
    addi r4, r25, 0x1485
    lfs f1, lbl_80885D58
    bl fn_801F6C80
lbl_fn_803E0E10_00001B68:
    lwz r4, 0x60(r23)
    lis r25, lbl_807506A0@ha
    addi r25, r25, lbl_807506A0@l
    lwz r3, 0x18(r24)
    lwz r5, 0x8(r4)
    addi r4, r25, 0x13ed
    bl fn_801F837C
    lwz r3, 0x18(r24)
    addi r4, r25, 0x1317
    lwz r5, 0x934(r23)
    li r6, 0x0
    bl fn_801F8598
lbl_fn_803E0E10_00001B98:
    lwz r3, 0x24(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00001C88
    lis r4, lbl_807506A0@ha
    addi r5, r1, 0x5c
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x12cb
    bl fn_801F6E78
    lwz r0, 0x12a4(r23)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_803E0E10_00001BD4
    lwz r3, 0x24(r24)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803E0E10_00001BD4:
    cmpwi r30, 0x0
    ble lbl_fn_803E0E10_00001C60
    cmpwi r30, 0x1a
    bgt lbl_fn_803E0E10_00001C60
    slwi r0, r30, 29
    srwi r3, r30, 31
    subf r0, r3, r0
    lis r25, lbl_80750650@ha
    rotlwi r0, r0, 3
    lis r27, lbl_807506A0@ha
    add r0, r0, r3
    lfd f4, lbl_80750650@l(r25)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    addi r27, r27, lbl_807506A0@l
    lfs f0, lbl_80885EE0
    lfd f3, 0x70(r1)
    addi r4, r27, 0x147f
    lwz r3, 0x24(r24)
    fsubs f3, f3, f4
    fmuls f1, f0, f3
    bl fn_801F6C80
    srawi r0, r30, 3
    lfd f4, lbl_80750650@l(r25)
    addze r0, r0
    lfs f0, lbl_80885E28
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lwz r3, 0x24(r24)
    addi r4, r27, 0x1485
    lfd f3, 0x78(r1)
    fsubs f3, f3, f4
    fmuls f1, f0, f3
    bl fn_801F6C80
    b lbl_fn_803E0E10_00001C88
lbl_fn_803E0E10_00001C60:
    lis r25, lbl_807506A0@ha
    lwz r3, 0x24(r24)
    addi r25, r25, lbl_807506A0@l
    lfs f1, lbl_80885D58
    addi r4, r25, 0x147f
    bl fn_801F6C80
    lwz r3, 0x24(r24)
    addi r4, r25, 0x1485
    lfs f1, lbl_80885D58
    bl fn_801F6C80
lbl_fn_803E0E10_00001C88:
    lwz r3, 0x28(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00001D04
    cmpwi r26, 0x0
    beq lbl_fn_803E0E10_00001D04
    lis r4, lbl_807506A0@ha
    addi r5, r1, 0x5c
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x12cb
    bl fn_801F6E78
    lwz r0, 0x944(r23)
    cmpwi r0, 0x0
    ble lbl_fn_803E0E10_00001CE0
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lis r3, lbl_80750650@ha
    lfs f0, 0x7dc(r23)
    lfd f4, lbl_80750650@l(r3)
    lfd f3, 0x70(r1)
    fsubs f3, f3, f4
    fdivs f3, f0, f3
    b lbl_fn_803E0E10_00001CE4
lbl_fn_803E0E10_00001CE0:
    lfs f3, lbl_80885D58
lbl_fn_803E0E10_00001CE4:
    lfs f0, lbl_80885D60
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803E0E10_00001D04
    lwz r3, 0x28(r24)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803E0E10_00001D04:
    lwz r3, 0x1c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00001D58
    lis r4, lbl_807506A0@ha
    addi r5, r1, 0x5c
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x12cb
    bl fn_801F6E78
    lwz r3, 0x1c(r24)
    lfs f0, lbl_80885EEC
    stfs f0, 0x54(r3)
    lwz r0, 0x9f8(r23)
    cmpwi r0, 0x1
    bne lbl_fn_803E0E10_00001D58
    lwz r0, 0x4c(r24)
    cmpwi r0, 0x0
    bne lbl_fn_803E0E10_00001D58
    lwz r3, 0x1c(r24)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803E0E10_00001D58:
    lwz r0, 0x54(r24)
    lwz r26, 0x934(r23)
    cmpwi r0, 0x0
    bne lbl_fn_803E0E10_00001D6C
    stw r26, 0x54(r24)
lbl_fn_803E0E10_00001D6C:
    lwz r0, 0x58(r24)
    cmpwi r0, 0x0
    bne lbl_fn_803E0E10_00001D80
    lwz r0, 0x874(r23)
    stw r0, 0x58(r24)
lbl_fn_803E0E10_00001D80:
    lwz r3, 0x20(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00001E14
    lis r4, lbl_807506A0@ha
    addi r5, r1, 0x5c
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x12cb
    bl fn_801F6E78
    lwz r0, 0x54(r24)
    cmpw r0, r26
    bge lbl_fn_803E0E10_00001DC8
    lwz r0, 0x648(r23)
    cmpwi r0, 0x0
    beq lbl_fn_803E0E10_00001DC8
    lwz r3, 0x58(r24)
    lwz r0, 0x874(r23)
    cmpw r3, r0
    beq lbl_fn_803E0E10_00001DE8
lbl_fn_803E0E10_00001DC8:
    lwz r3, 0x20(r24)
    lfs f0, lbl_80885D58
    lfs f31, 0x50(r3)
    fcmpo cr0, f31, f0
    ble lbl_fn_803E0E10_00001E14
    bl fn_801F6C2C
    fcmpo cr0, f31, f1
    bge lbl_fn_803E0E10_00001E14
lbl_fn_803E0E10_00001DE8:
    lis r4, lbl_807506A0@ha
    lwz r3, 0x20(r24)
    addi r4, r4, lbl_807506A0@l
    mr r5, r26
    addi r4, r4, 0x1317
    li r6, 0x0
    bl fn_801F8598
    lwz r3, 0x20(r24)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803E0E10_00001E14:
    lwz r3, 0x2c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803E0E10_00001E84
    lis r4, lbl_807506A0@ha
    addi r5, r1, 0x5c
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x12cb
    bl fn_801F6E78
    lwz r3, 0x58(r24)
    lwz r0, 0x874(r23)
    cmpw r3, r0
    bge lbl_fn_803E0E10_00001E50
    lwz r3, 0x2c(r24)
    lfs f0, lbl_80885D58
    stfs f0, 0x50(r3)
lbl_fn_803E0E10_00001E50:
    lwz r25, 0x2c(r24)
    mr r3, r25
    bl fn_801F6C2C
    lfs f0, 0x50(r25)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    bne lbl_fn_803E0E10_00001E84
    lwz r3, 0x2c(r24)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803E0E10_00001E84:
    stw r26, 0x54(r24)
    lwz r0, 0x874(r23)
    stw r0, 0x58(r24)
lbl_fn_803E0E10_00001E90:
    addi r11, r1, 0xb0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    bl _restgpr_22
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}
