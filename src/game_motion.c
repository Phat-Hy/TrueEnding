#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_800761A8(void);
extern void fn_80076760(void);
extern void fn_80076A28(void);
extern void fn_800B5994(void);
extern void fn_800D5F68(void);
extern void fn_805F8980(void);
extern void fn_805F95A0(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80614190(void);
extern void fn_80614790(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615560(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_80617A10(void);
extern void fn_806180B0(void);
extern void fn_80618290(void);
extern void fn_80618350(void);
extern void fn_80618400(void);
extern void fn_806185A0(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 jumptable_807791E0[];
extern u8 jumptable_80779208[];
extern u8 lbl_807336A8[];

/* Small data declarations */
extern u32 lbl_8087D900;
extern u32 lbl_8087D904;
extern u32 lbl_8087D908;
extern u32 lbl_8087D90C;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFA8;
extern u32 lbl_80881088;
extern u32 lbl_80881094;
extern u32 lbl_80881098;
extern u32 lbl_808810C8;

/* Function declarations */
void fn_800BF0EC(void);
void fn_800BF558(void);
void fn_800BF9C4(void);
void fn_800BFAC4(void);
void fn_800BFAC8(void);
void fn_800BFB70(void);
void fn_800BFC18(void);
void fn_800BFCB4(void);
void fn_800C0508(void);
void fn_800C0590(void);
void fn_800C06B0(void);
void fn_800C08B0(void);
void fn_800C0900(void);
void fn_800C0A50(void);
void fn_800C0A8C(void);
void fn_800C0A98(void);
void fn_800C0AA4(void);
void fn_800C0BF8(void);
void fn_800C0D4C(void);
void fn_800C0FBC(void);

asm void fn_800BF0EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, 0x6666
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
lbl_fn_800BF0EC_00000028:
    subf r0, r26, r27
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_800BF0EC_00000454
    cmpwi r7, 0x14
    bgt lbl_fn_800BF0EC_000000D8
    cmplw r26, r27
    beq lbl_fn_800BF0EC_00000454
    subi r0, r27, 0x4
    b lbl_fn_800BF0EC_000000CC
lbl_fn_800BF0EC_00000054:
    cmplw r26, r27
    mr r5, r26
    beq lbl_fn_800BF0EC_000000B0
    addi r7, r26, 0x4
    b lbl_fn_800BF0EC_000000A8
lbl_fn_800BF0EC_00000068:
    lwz r6, 0x0(r5)
    li r3, 0x0
    lwz r4, 0x0(r7)
    lfs f0, 0x4(r6)
    lfs f1, 0x4(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF0EC_00000094
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF0EC_00000098
    cmplw r4, r6
    bge lbl_fn_800BF0EC_00000098
lbl_fn_800BF0EC_00000094:
    li r3, 0x1
lbl_fn_800BF0EC_00000098:
    cmpwi r3, 0x0
    beq lbl_fn_800BF0EC_000000A4
    mr r5, r7
lbl_fn_800BF0EC_000000A4:
    addi r7, r7, 0x4
lbl_fn_800BF0EC_000000A8:
    cmplw r7, r27
    bne lbl_fn_800BF0EC_00000068
lbl_fn_800BF0EC_000000B0:
    cmplw r5, r26
    beq lbl_fn_800BF0EC_000000C8
    lwz r4, 0x0(r5)
    lwz r3, 0x0(r26)
    stw r3, 0x0(r5)
    stw r4, 0x0(r26)
lbl_fn_800BF0EC_000000C8:
    addi r26, r26, 0x4
lbl_fn_800BF0EC_000000CC:
    cmplw r26, r0
    bne lbl_fn_800BF0EC_00000054
    b lbl_fn_800BF0EC_00000454
lbl_fn_800BF0EC_000000D8:
    lwz r4, lbl_8087D900
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
    add r3, r26, r0
    blt lbl_fn_800BF0EC_00000118
    li r6, -0x4
lbl_fn_800BF0EC_00000118:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087D900
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
    add r4, r26, r0
    blt lbl_fn_800BF0EC_00000164
    li r6, -0x4
    stw r6, lbl_8087D900
lbl_fn_800BF0EC_00000164:
    subi r29, r27, 0x4
    mr r6, r28
    mr r5, r29
    bl fn_800BF9C4
    lwz r4, 0x0(r29)
    mr r30, r26
    mr r5, r29
    b lbl_fn_800BF0EC_00000188
lbl_fn_800BF0EC_00000184:
    addi r30, r30, 0x4
lbl_fn_800BF0EC_00000188:
    lwz r3, 0x0(r30)
    li r0, 0x0
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF0EC_000001B0
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF0EC_000001B4
    cmplw r3, r4
    bge lbl_fn_800BF0EC_000001B4
lbl_fn_800BF0EC_000001B0:
    li r0, 0x1
lbl_fn_800BF0EC_000001B4:
    cmpwi r0, 0x0
    bne lbl_fn_800BF0EC_00000184
lbl_fn_800BF0EC_000001BC:
    subi r5, r5, 0x4
    cmplw r30, r5
    beq lbl_fn_800BF0EC_000001FC
    lwz r3, 0x0(r5)
    li r0, 0x0
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF0EC_000001F0
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF0EC_000001F4
    cmplw r3, r4
    bge lbl_fn_800BF0EC_000001F4
lbl_fn_800BF0EC_000001F0:
    li r0, 0x1
lbl_fn_800BF0EC_000001F4:
    cmpwi r0, 0x0
    beq lbl_fn_800BF0EC_000001BC
lbl_fn_800BF0EC_000001FC:
    cmplw r30, r5
    bge lbl_fn_800BF0EC_000002AC
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_800BF0EC_00000220
lbl_fn_800BF0EC_0000021C:
    addi r30, r30, 0x4
lbl_fn_800BF0EC_00000220:
    lwz r4, 0x0(r29)
    li r0, 0x0
    lwz r3, 0x0(r30)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF0EC_0000024C
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF0EC_00000250
    cmplw r3, r4
    bge lbl_fn_800BF0EC_00000250
lbl_fn_800BF0EC_0000024C:
    li r0, 0x1
lbl_fn_800BF0EC_00000250:
    cmpwi r0, 0x0
    bne lbl_fn_800BF0EC_0000021C
lbl_fn_800BF0EC_00000258:
    lwzu r3, -0x4(r5)
    li r0, 0x0
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF0EC_00000280
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF0EC_00000284
    cmplw r3, r4
    bge lbl_fn_800BF0EC_00000284
lbl_fn_800BF0EC_00000280:
    li r0, 0x1
lbl_fn_800BF0EC_00000284:
    cmpwi r0, 0x0
    beq lbl_fn_800BF0EC_00000258
    cmplw r30, r5
    bge lbl_fn_800BF0EC_000002AC
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_800BF0EC_00000220
lbl_fn_800BF0EC_000002AC:
    cmplw r30, r26
    bne lbl_fn_800BF0EC_00000404
    lwz r4, 0x0(r30)
    subi r5, r27, 0x4
    lwz r3, 0x0(r29)
    li r0, 0x0
    stw r3, 0x0(r30)
    addi r30, r30, 0x4
    stw r4, 0x0(r29)
    lwz r3, -0x4(r27)
    lwz r4, 0x0(r26)
    lfs f0, 0x4(r3)
    lfs f1, 0x4(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF0EC_000002F8
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF0EC_000002FC
    cmplw r4, r3
    bge lbl_fn_800BF0EC_000002FC
lbl_fn_800BF0EC_000002F8:
    li r0, 0x1
lbl_fn_800BF0EC_000002FC:
    cmpwi r0, 0x0
    bne lbl_fn_800BF0EC_00000360
    b lbl_fn_800BF0EC_0000030C
lbl_fn_800BF0EC_00000308:
    addi r30, r30, 0x4
lbl_fn_800BF0EC_0000030C:
    cmplw r30, r27
    beq lbl_fn_800BF0EC_00000348
    lwz r3, 0x0(r30)
    li r0, 0x0
    lfs f1, 0x4(r4)
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF0EC_0000033C
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF0EC_00000340
    cmplw r4, r3
    bge lbl_fn_800BF0EC_00000340
lbl_fn_800BF0EC_0000033C:
    li r0, 0x1
lbl_fn_800BF0EC_00000340:
    cmpwi r0, 0x0
    beq lbl_fn_800BF0EC_00000308
lbl_fn_800BF0EC_00000348:
    cmplw r30, r5
    bge lbl_fn_800BF0EC_00000360
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    stw r3, 0x0(r5)
lbl_fn_800BF0EC_00000360:
    cmplw r30, r5
    bge lbl_fn_800BF0EC_000003FC
    b lbl_fn_800BF0EC_00000370
lbl_fn_800BF0EC_0000036C:
    addi r30, r30, 0x4
lbl_fn_800BF0EC_00000370:
    lwz r3, 0x0(r30)
    li r0, 0x0
    lwz r4, 0x0(r26)
    lfs f0, 0x4(r3)
    lfs f1, 0x4(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF0EC_0000039C
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF0EC_000003A0
    cmplw r4, r3
    bge lbl_fn_800BF0EC_000003A0
lbl_fn_800BF0EC_0000039C:
    li r0, 0x1
lbl_fn_800BF0EC_000003A0:
    cmpwi r0, 0x0
    beq lbl_fn_800BF0EC_0000036C
lbl_fn_800BF0EC_000003A8:
    lwzu r3, -0x4(r5)
    li r0, 0x0
    lfs f1, 0x4(r4)
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF0EC_000003D0
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF0EC_000003D4
    cmplw r4, r3
    bge lbl_fn_800BF0EC_000003D4
lbl_fn_800BF0EC_000003D0:
    li r0, 0x1
lbl_fn_800BF0EC_000003D4:
    cmpwi r0, 0x0
    bne lbl_fn_800BF0EC_000003A8
    cmplw r30, r5
    bge lbl_fn_800BF0EC_000003FC
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_800BF0EC_00000370
lbl_fn_800BF0EC_000003FC:
    mr r26, r30
    b lbl_fn_800BF0EC_00000028
lbl_fn_800BF0EC_00000404:
    subf r3, r26, r30
    subf r0, r30, r27
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_800BF0EC_0000043C
    mr r3, r26
    mr r4, r30
    mr r5, r28
    bl fn_800BF558
    mr r26, r30
    b lbl_fn_800BF0EC_00000028
lbl_fn_800BF0EC_0000043C:
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl fn_800BF558
    mr r27, r30
    b lbl_fn_800BF0EC_00000028
lbl_fn_800BF0EC_00000454:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BF558(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, 0x6666
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
lbl_fn_800BF558_00000494:
    subf r0, r26, r27
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_800BF558_000008C0
    cmpwi r7, 0x14
    bgt lbl_fn_800BF558_00000544
    cmplw r26, r27
    beq lbl_fn_800BF558_000008C0
    subi r0, r27, 0x4
    b lbl_fn_800BF558_00000538
lbl_fn_800BF558_000004C0:
    cmplw r26, r27
    mr r5, r26
    beq lbl_fn_800BF558_0000051C
    addi r7, r26, 0x4
    b lbl_fn_800BF558_00000514
lbl_fn_800BF558_000004D4:
    lwz r6, 0x0(r5)
    li r3, 0x0
    lwz r4, 0x0(r7)
    lfs f0, 0x4(r6)
    lfs f1, 0x4(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF558_00000500
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF558_00000504
    cmplw r4, r6
    bge lbl_fn_800BF558_00000504
lbl_fn_800BF558_00000500:
    li r3, 0x1
lbl_fn_800BF558_00000504:
    cmpwi r3, 0x0
    beq lbl_fn_800BF558_00000510
    mr r5, r7
lbl_fn_800BF558_00000510:
    addi r7, r7, 0x4
lbl_fn_800BF558_00000514:
    cmplw r7, r27
    bne lbl_fn_800BF558_000004D4
lbl_fn_800BF558_0000051C:
    cmplw r5, r26
    beq lbl_fn_800BF558_00000534
    lwz r4, 0x0(r5)
    lwz r3, 0x0(r26)
    stw r3, 0x0(r5)
    stw r4, 0x0(r26)
lbl_fn_800BF558_00000534:
    addi r26, r26, 0x4
lbl_fn_800BF558_00000538:
    cmplw r26, r0
    bne lbl_fn_800BF558_000004C0
    b lbl_fn_800BF558_000008C0
lbl_fn_800BF558_00000544:
    lwz r4, lbl_8087D904
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
    add r3, r26, r0
    blt lbl_fn_800BF558_00000584
    li r6, -0x4
lbl_fn_800BF558_00000584:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087D904
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
    add r4, r26, r0
    blt lbl_fn_800BF558_000005D0
    li r6, -0x4
    stw r6, lbl_8087D904
lbl_fn_800BF558_000005D0:
    subi r29, r27, 0x4
    mr r6, r28
    mr r5, r29
    bl fn_800BF9C4
    lwz r4, 0x0(r29)
    mr r30, r26
    mr r5, r29
    b lbl_fn_800BF558_000005F4
lbl_fn_800BF558_000005F0:
    addi r30, r30, 0x4
lbl_fn_800BF558_000005F4:
    lwz r3, 0x0(r30)
    li r0, 0x0
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF558_0000061C
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF558_00000620
    cmplw r3, r4
    bge lbl_fn_800BF558_00000620
lbl_fn_800BF558_0000061C:
    li r0, 0x1
lbl_fn_800BF558_00000620:
    cmpwi r0, 0x0
    bne lbl_fn_800BF558_000005F0
lbl_fn_800BF558_00000628:
    subi r5, r5, 0x4
    cmplw r30, r5
    beq lbl_fn_800BF558_00000668
    lwz r3, 0x0(r5)
    li r0, 0x0
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF558_0000065C
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF558_00000660
    cmplw r3, r4
    bge lbl_fn_800BF558_00000660
lbl_fn_800BF558_0000065C:
    li r0, 0x1
lbl_fn_800BF558_00000660:
    cmpwi r0, 0x0
    beq lbl_fn_800BF558_00000628
lbl_fn_800BF558_00000668:
    cmplw r30, r5
    bge lbl_fn_800BF558_00000718
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_800BF558_0000068C
lbl_fn_800BF558_00000688:
    addi r30, r30, 0x4
lbl_fn_800BF558_0000068C:
    lwz r4, 0x0(r29)
    li r0, 0x0
    lwz r3, 0x0(r30)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF558_000006B8
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF558_000006BC
    cmplw r3, r4
    bge lbl_fn_800BF558_000006BC
lbl_fn_800BF558_000006B8:
    li r0, 0x1
lbl_fn_800BF558_000006BC:
    cmpwi r0, 0x0
    bne lbl_fn_800BF558_00000688
lbl_fn_800BF558_000006C4:
    lwzu r3, -0x4(r5)
    li r0, 0x0
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF558_000006EC
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF558_000006F0
    cmplw r3, r4
    bge lbl_fn_800BF558_000006F0
lbl_fn_800BF558_000006EC:
    li r0, 0x1
lbl_fn_800BF558_000006F0:
    cmpwi r0, 0x0
    beq lbl_fn_800BF558_000006C4
    cmplw r30, r5
    bge lbl_fn_800BF558_00000718
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_800BF558_0000068C
lbl_fn_800BF558_00000718:
    cmplw r30, r26
    bne lbl_fn_800BF558_00000870
    lwz r4, 0x0(r30)
    subi r5, r27, 0x4
    lwz r3, 0x0(r29)
    li r0, 0x0
    stw r3, 0x0(r30)
    addi r30, r30, 0x4
    stw r4, 0x0(r29)
    lwz r3, -0x4(r27)
    lwz r4, 0x0(r26)
    lfs f0, 0x4(r3)
    lfs f1, 0x4(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF558_00000764
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF558_00000768
    cmplw r4, r3
    bge lbl_fn_800BF558_00000768
lbl_fn_800BF558_00000764:
    li r0, 0x1
lbl_fn_800BF558_00000768:
    cmpwi r0, 0x0
    bne lbl_fn_800BF558_000007CC
    b lbl_fn_800BF558_00000778
lbl_fn_800BF558_00000774:
    addi r30, r30, 0x4
lbl_fn_800BF558_00000778:
    cmplw r30, r27
    beq lbl_fn_800BF558_000007B4
    lwz r3, 0x0(r30)
    li r0, 0x0
    lfs f1, 0x4(r4)
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF558_000007A8
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF558_000007AC
    cmplw r4, r3
    bge lbl_fn_800BF558_000007AC
lbl_fn_800BF558_000007A8:
    li r0, 0x1
lbl_fn_800BF558_000007AC:
    cmpwi r0, 0x0
    beq lbl_fn_800BF558_00000774
lbl_fn_800BF558_000007B4:
    cmplw r30, r5
    bge lbl_fn_800BF558_000007CC
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    stw r3, 0x0(r5)
lbl_fn_800BF558_000007CC:
    cmplw r30, r5
    bge lbl_fn_800BF558_00000868
    b lbl_fn_800BF558_000007DC
lbl_fn_800BF558_000007D8:
    addi r30, r30, 0x4
lbl_fn_800BF558_000007DC:
    lwz r3, 0x0(r30)
    li r0, 0x0
    lwz r4, 0x0(r26)
    lfs f0, 0x4(r3)
    lfs f1, 0x4(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF558_00000808
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF558_0000080C
    cmplw r4, r3
    bge lbl_fn_800BF558_0000080C
lbl_fn_800BF558_00000808:
    li r0, 0x1
lbl_fn_800BF558_0000080C:
    cmpwi r0, 0x0
    beq lbl_fn_800BF558_000007D8
lbl_fn_800BF558_00000814:
    lwzu r3, -0x4(r5)
    li r0, 0x0
    lfs f1, 0x4(r4)
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF558_0000083C
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF558_00000840
    cmplw r4, r3
    bge lbl_fn_800BF558_00000840
lbl_fn_800BF558_0000083C:
    li r0, 0x1
lbl_fn_800BF558_00000840:
    cmpwi r0, 0x0
    bne lbl_fn_800BF558_00000814
    cmplw r30, r5
    bge lbl_fn_800BF558_00000868
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_800BF558_000007DC
lbl_fn_800BF558_00000868:
    mr r26, r30
    b lbl_fn_800BF558_00000494
lbl_fn_800BF558_00000870:
    subf r3, r26, r30
    subf r0, r30, r27
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_800BF558_000008A8
    mr r3, r26
    mr r4, r30
    mr r5, r28
    bl fn_800BF558
    mr r26, r30
    b lbl_fn_800BF558_00000494
lbl_fn_800BF558_000008A8:
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl fn_800BF558
    mr r27, r30
    b lbl_fn_800BF558_00000494
lbl_fn_800BF558_000008C0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BF9C4(void)
{
    nofralloc
    lwz r8, 0x0(r3)
    li r6, 0x0
    lwz r7, 0x0(r5)
    lfs f0, 0x4(r8)
    lfs f1, 0x4(r7)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF9C4_00000908
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF9C4_00000904
    cmplw r7, r8
    blt lbl_fn_800BF9C4_00000908
lbl_fn_800BF9C4_00000904:
    li r6, 0x1
lbl_fn_800BF9C4_00000908:
    lwz r9, 0x0(r4)
    li r0, 0x0
    lfs f0, 0x4(r7)
    lfs f1, 0x4(r9)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF9C4_00000934
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF9C4_00000930
    cmplw r9, r7
    blt lbl_fn_800BF9C4_00000934
lbl_fn_800BF9C4_00000930:
    li r0, 0x1
lbl_fn_800BF9C4_00000934:
    cmpwi r6, 0x0
    beq lbl_fn_800BF9C4_00000944
    cmpwi r0, 0x0
    bnelr
lbl_fn_800BF9C4_00000944:
    cmpwi r6, 0x0
    bne lbl_fn_800BF9C4_00000968
    cmpwi r0, 0x0
    bne lbl_fn_800BF9C4_00000968
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    stw r5, 0x0(r4)
    blr
lbl_fn_800BF9C4_00000968:
    lfs f1, 0x4(r9)
    li r0, 0x0
    lfs f0, 0x4(r8)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800BF9C4_0000098C
    fcmpu cr0, f1, f0
    bne lbl_fn_800BF9C4_00000990
    cmplw r9, r8
    bge lbl_fn_800BF9C4_00000990
lbl_fn_800BF9C4_0000098C:
    li r0, 0x1
lbl_fn_800BF9C4_00000990:
    cmpwi r0, 0x0
    beq lbl_fn_800BF9C4_000009A8
    lwz r7, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    stw r7, 0x0(r4)
lbl_fn_800BF9C4_000009A8:
    cmpwi r6, 0x0
    beq lbl_fn_800BF9C4_000009C4
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    stw r3, 0x0(r5)
    blr
lbl_fn_800BF9C4_000009C4:
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    stw r4, 0x0(r5)
    blr
}

asm void fn_800BFAC4(void)
{
    nofralloc
    blr
}

asm void fn_800BFAC8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_80881088
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    addi r3, r1, 0x8
    stfs f0, 0x20(r1)
    lfs f0, 0x18c(r4)
    stfs f0, 0x24(r1)
    lfs f0, 0x194(r4)
    stfs f0, 0x28(r1)
    lfs f0, 0x1a0(r4)
    stfs f0, 0x2c(r1)
    lfs f0, 0x1a4(r4)
    stfs f0, 0x30(r1)
    lfs f0, 0x1b4(r4)
    stfs f0, 0x34(r1)
    lfs f0, 0x1b8(r4)
    stfs f0, 0x38(r1)
    bl fn_806185A0
    lfs f1, 0x0(r31)
    mr r6, r29
    lfs f2, 0x4(r31)
    addi r3, r30, 0x15c
    lfs f3, 0x8(r31)
    addi r4, r1, 0x20
    addi r5, r1, 0x8
    addi r7, r29, 0x4
    addi r8, r29, 0x8
    bl fn_806180B0
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800BFB70(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f0, lbl_80881098
    stw r0, 0x74(r1)
    addi r4, r1, 0x48
    lfs f1, lbl_80881088
    addi r5, r1, 0x38
    lwz r7, lbl_8087EEE0
    addi r6, r1, 0x28
    fmr f2, f1
    stfs f0, 0x58(r1)
    lwz r8, 0x3c(r7)
    lwz r9, 0x40(r7)
    addi r7, r1, 0x18
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_800BFCB4
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800BFC18(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r5, r1, 0x18
    addi r6, r1, 0x28
    addi r7, r1, 0x38
    lwz r9, lbl_8087EEE0
    lfs f5, 0x0(r4)
    lfs f4, 0x4(r4)
    lfs f3, 0x8(r4)
    lfs f0, 0xc(r4)
    addi r4, r1, 0x8
    lwz r8, 0x3c(r9)
    lwz r9, 0x40(r9)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f3, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f5, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f5, 0x28(r1)
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_800BFCB4
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800BFCB4(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    bl _savegpr_23
    lwz r24, lbl_8087EEE0
    lis r3, 0x4330
    mr r23, r4
    mr r27, r5
    lwz r0, 0xd0(r24)
    fmr f30, f1
    fmr f31, f2
    stw r3, 0xa0(r1)
    mr r28, r6
    mr r29, r7
    stw r3, 0xa8(r1)
    mr r30, r8
    stw r0, 0x28(r1)
    mr r31, r9
    mr r3, r24
    li r4, 0x8
    li r5, 0x1
    bl fn_80076760
    mr r3, r24
    li r4, 0x9
    li r5, 0x7
    bl fn_80076760
    mr r3, r24
    li r4, 0xa
    li r5, 0x0
    bl fn_80076760
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    lfs f2, 0x0(r23)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000CA0
    li r26, 0xff
    b lbl_fn_800BFCB4_00000CCC
lbl_fn_800BFCB4_00000CA0:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000CB8
    li r3, 0x0
    b lbl_fn_800BFCB4_00000CC8
lbl_fn_800BFCB4_00000CB8:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000CC8:
    mr r26, r3
lbl_fn_800BFCB4_00000CCC:
    lfs f2, 0x4(r23)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000CE8
    li r25, 0xff
    b lbl_fn_800BFCB4_00000D14
lbl_fn_800BFCB4_00000CE8:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000D00
    li r3, 0x0
    b lbl_fn_800BFCB4_00000D10
lbl_fn_800BFCB4_00000D00:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000D10:
    mr r25, r3
lbl_fn_800BFCB4_00000D14:
    lfs f2, 0x8(r23)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000D30
    li r24, 0xff
    b lbl_fn_800BFCB4_00000D5C
lbl_fn_800BFCB4_00000D30:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000D48
    li r3, 0x0
    b lbl_fn_800BFCB4_00000D58
lbl_fn_800BFCB4_00000D48:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000D58:
    mr r24, r3
lbl_fn_800BFCB4_00000D5C:
    lfs f2, 0xc(r23)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000D78
    li r3, 0xff
    b lbl_fn_800BFCB4_00000DA0
lbl_fn_800BFCB4_00000D78:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000D90
    li r3, 0x0
    b lbl_fn_800BFCB4_00000DA0
lbl_fn_800BFCB4_00000D90:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000DA0:
    slwi r3, r3, 24
    slwi r0, r26, 16
    or r3, r3, r0
    lfs f2, 0x0(r27)
    slwi r0, r25, 8
    lfs f0, lbl_80881098
    or r0, r0, r3
    or r4, r24, r0
    stb r4, 0x16(r1)
    extrwi r0, r4, 8, 8
    fcmpo cr0, f2, f0
    stb r0, 0x14(r1)
    extrwi r3, r4, 8, 16
    srwi r0, r4, 24
    stb r3, 0x15(r1)
    stb r0, 0x17(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x24(r1)
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000DF8
    li r24, 0xff
    b lbl_fn_800BFCB4_00000E24
lbl_fn_800BFCB4_00000DF8:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000E10
    li r3, 0x0
    b lbl_fn_800BFCB4_00000E20
lbl_fn_800BFCB4_00000E10:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000E20:
    mr r24, r3
lbl_fn_800BFCB4_00000E24:
    lfs f2, 0x4(r27)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000E40
    li r26, 0xff
    b lbl_fn_800BFCB4_00000E6C
lbl_fn_800BFCB4_00000E40:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000E58
    li r3, 0x0
    b lbl_fn_800BFCB4_00000E68
lbl_fn_800BFCB4_00000E58:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000E68:
    mr r26, r3
lbl_fn_800BFCB4_00000E6C:
    lfs f2, 0x8(r27)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000E88
    li r25, 0xff
    b lbl_fn_800BFCB4_00000EB4
lbl_fn_800BFCB4_00000E88:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000EA0
    li r3, 0x0
    b lbl_fn_800BFCB4_00000EB0
lbl_fn_800BFCB4_00000EA0:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000EB0:
    mr r25, r3
lbl_fn_800BFCB4_00000EB4:
    lfs f2, 0xc(r27)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000ED0
    li r3, 0xff
    b lbl_fn_800BFCB4_00000EF8
lbl_fn_800BFCB4_00000ED0:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000EE8
    li r3, 0x0
    b lbl_fn_800BFCB4_00000EF8
lbl_fn_800BFCB4_00000EE8:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000EF8:
    slwi r3, r3, 24
    slwi r0, r24, 16
    or r3, r3, r0
    lfs f2, 0x0(r28)
    slwi r0, r26, 8
    lfs f0, lbl_80881098
    or r0, r0, r3
    or r4, r25, r0
    stb r4, 0x12(r1)
    extrwi r0, r4, 8, 8
    fcmpo cr0, f2, f0
    stb r0, 0x10(r1)
    extrwi r3, r4, 8, 16
    srwi r0, r4, 24
    stb r3, 0x11(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stw r0, 0x20(r1)
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000F50
    li r25, 0xff
    b lbl_fn_800BFCB4_00000F7C
lbl_fn_800BFCB4_00000F50:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000F68
    li r3, 0x0
    b lbl_fn_800BFCB4_00000F78
lbl_fn_800BFCB4_00000F68:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000F78:
    mr r25, r3
lbl_fn_800BFCB4_00000F7C:
    lfs f2, 0x4(r28)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000F98
    li r27, 0xff
    b lbl_fn_800BFCB4_00000FC4
lbl_fn_800BFCB4_00000F98:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000FB0
    li r3, 0x0
    b lbl_fn_800BFCB4_00000FC0
lbl_fn_800BFCB4_00000FB0:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00000FC0:
    mr r27, r3
lbl_fn_800BFCB4_00000FC4:
    lfs f2, 0x8(r28)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00000FE0
    li r26, 0xff
    b lbl_fn_800BFCB4_0000100C
lbl_fn_800BFCB4_00000FE0:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00000FF8
    li r3, 0x0
    b lbl_fn_800BFCB4_00001008
lbl_fn_800BFCB4_00000FF8:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00001008:
    mr r26, r3
lbl_fn_800BFCB4_0000100C:
    lfs f2, 0xc(r28)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00001028
    li r3, 0xff
    b lbl_fn_800BFCB4_00001050
lbl_fn_800BFCB4_00001028:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00001040
    li r3, 0x0
    b lbl_fn_800BFCB4_00001050
lbl_fn_800BFCB4_00001040:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00001050:
    slwi r3, r3, 24
    slwi r0, r25, 16
    or r3, r3, r0
    lfs f2, 0x0(r29)
    slwi r0, r27, 8
    lfs f0, lbl_80881098
    or r0, r0, r3
    or r4, r26, r0
    stb r4, 0xe(r1)
    extrwi r0, r4, 8, 8
    fcmpo cr0, f2, f0
    stb r0, 0xc(r1)
    extrwi r3, r4, 8, 16
    srwi r0, r4, 24
    stb r3, 0xd(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x1c(r1)
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_000010A8
    li r26, 0xff
    b lbl_fn_800BFCB4_000010D4
lbl_fn_800BFCB4_000010A8:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_000010C0
    li r3, 0x0
    b lbl_fn_800BFCB4_000010D0
lbl_fn_800BFCB4_000010C0:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_000010D0:
    mr r26, r3
lbl_fn_800BFCB4_000010D4:
    lfs f2, 0x4(r29)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_000010F0
    li r28, 0xff
    b lbl_fn_800BFCB4_0000111C
lbl_fn_800BFCB4_000010F0:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00001108
    li r3, 0x0
    b lbl_fn_800BFCB4_00001118
lbl_fn_800BFCB4_00001108:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00001118:
    mr r28, r3
lbl_fn_800BFCB4_0000111C:
    lfs f2, 0x8(r29)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00001138
    li r27, 0xff
    b lbl_fn_800BFCB4_00001164
lbl_fn_800BFCB4_00001138:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00001150
    li r3, 0x0
    b lbl_fn_800BFCB4_00001160
lbl_fn_800BFCB4_00001150:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_00001160:
    mr r27, r3
lbl_fn_800BFCB4_00001164:
    lfs f2, 0xc(r29)
    lfs f0, lbl_80881098
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800BFCB4_00001180
    li r3, 0xff
    b lbl_fn_800BFCB4_000011A8
lbl_fn_800BFCB4_00001180:
    lfs f0, lbl_80881088
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800BFCB4_00001198
    li r3, 0x0
    b lbl_fn_800BFCB4_000011A8
lbl_fn_800BFCB4_00001198:
    lfs f1, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800BFCB4_000011A8:
    slwi r3, r3, 24
    slwi r0, r26, 16
    or r3, r3, r0
    li r4, 0x9
    slwi r0, r28, 8
    li r6, 0x4
    or r0, r0, r3
    li r3, 0x0
    or r0, r27, r0
    stb r0, 0xa(r1)
    extrwi r5, r0, 8, 8
    li r7, 0x0
    extrwi r8, r0, 8, 16
    srwi r0, r0, 24
    stb r5, 0x8(r1)
    li r5, 0x1
    stb r8, 0x9(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x18(r1)
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    xoris r0, r31, 0x8000
    stw r0, 0xa4(r1)
    xoris r0, r30, 0x8000
    lis r27, lbl_807336A8@ha
    lfs f1, lbl_80881088
    addi r3, r1, 0x60
    stw r0, 0xac(r1)
    lfd f4, lbl_807336A8@l(r27)
    fmr f3, f1
    lfd f2, 0xa0(r1)
    fmr f5, f1
    lfd f0, 0xa8(r1)
    fsubs f2, f2, f4
    lfs f6, lbl_8087D908
    fsubs f4, f0, f4
    bl fn_805F95A0
    addi r3, r1, 0x60
    li r4, 0x1
    bl fn_80618290
    addi r3, r1, 0x30
    bl fn_805F8980
    addi r3, r1, 0x30
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    lis r10, 0xcc01
    xoris r9, r30, 0x8000
    stfs f30, -0x8000(r10)
    xoris r6, r31, 0x8000
    lfs f4, lbl_8087D90C
    stfs f31, -0x8000(r10)
    lbz r3, 0x24(r1)
    stfs f4, -0x8000(r10)
    lbz r0, 0x25(r1)
    stb r3, -0x8000(r10)
    lbz r3, 0x26(r1)
    stb r0, -0x8000(r10)
    lfd f3, lbl_807336A8@l(r27)
    stw r9, 0xa4(r1)
    lbz r0, 0x27(r1)
    lfd f0, 0xa0(r1)
    stb r3, -0x8000(r10)
    fsubs f0, f0, f3
    lbz r3, 0x20(r1)
    stb r0, -0x8000(r10)
    lfs f1, lbl_80881088
    stfs f1, -0x8000(r10)
    fadds f0, f0, f30
    lfs f1, lbl_80881088
    stfs f1, -0x8000(r10)
    lbz r0, 0x21(r1)
    stfs f0, -0x8000(r10)
    lbz r8, 0x22(r1)
    stfs f31, -0x8000(r10)
    lbz r7, 0x23(r1)
    stfs f4, -0x8000(r10)
    lbz r5, 0x18(r1)
    stb r3, -0x8000(r10)
    lbz r4, 0x19(r1)
    stb r0, -0x8000(r10)
    lbz r3, 0x1a(r1)
    stw r9, 0xac(r1)
    lbz r0, 0x1b(r1)
    stb r8, -0x8000(r10)
    lfd f0, 0xa8(r1)
    stb r7, -0x8000(r10)
    fsubs f1, f0, f3
    lfs f2, lbl_80881098
    stw r6, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fadds f1, f1, f30
    stfs f2, -0x8000(r10)
    fsubs f0, f0, f3
    lfs f2, lbl_80881088
    stfs f2, -0x8000(r10)
    stfs f1, -0x8000(r10)
    fadds f0, f0, f31
    stfs f0, -0x8000(r10)
    stfs f4, -0x8000(r10)
    stb r5, -0x8000(r10)
    stb r4, -0x8000(r10)
    stb r3, -0x8000(r10)
    stb r0, -0x8000(r10)
    stw r6, 0xac(r1)
    lfs f1, lbl_80881098
    lfd f0, 0xa8(r1)
    stfs f1, -0x8000(r10)
    fsubs f0, f0, f3
    lfs f1, lbl_80881098
    stfs f1, -0x8000(r10)
    lbz r4, 0x1c(r1)
    stfs f30, -0x8000(r10)
    fadds f0, f0, f31
    lbz r5, 0x1d(r1)
    stfs f0, -0x8000(r10)
    lbz r3, 0x1e(r1)
    stfs f4, -0x8000(r10)
    lbz r0, 0x1f(r1)
    stb r4, -0x8000(r10)
    addi r4, r1, 0x28
    stb r5, -0x8000(r10)
    stb r3, -0x8000(r10)
    stb r0, -0x8000(r10)
    lfs f0, lbl_80881088
    stfs f0, -0x8000(r10)
    lfs f0, lbl_80881098
    stfs f0, -0x8000(r10)
    lwz r3, lbl_8087EEE0
    bl fn_80076A28
    addi r11, r1, 0xe0
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    bl _restgpr_23
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_800C0508(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x0
    lwz r5, lbl_8087EEE0
    lwz r30, 0x40(r5)
    lwz r31, 0x3c(r5)
    clrlwi r6, r30, 16
    clrlwi r5, r31, 16
    bl fn_80614CC0
    clrlwi r3, r31, 16
    clrlwi r4, r30, 16
    li r5, 0x6
    li r6, 0x0
    bl fn_80614D30
    lwz r3, 0x774(r28)
    clrlwi r4, r29, 24
    bl fn_80615560
    bl fn_80614190
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C0590(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, lbl_8087EEE0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r31, 0x3c(r6)
    li r3, 0x0
    lwz r30, 0x40(r6)
    li r4, 0x0
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    bl fn_80614CC0
    mr r5, r29
    clrlwi r3, r31, 16
    clrlwi r4, r30, 16
    li r6, 0x0
    bl fn_80614D30
    lwz r3, 0x79c(r27)
    clrlwi r4, r28, 24
    bl fn_80615560
    bl fn_80614190
    cmpwi r29, 0x16
    beq lbl_fn_800C0590_00001560
    lwz r4, 0x79c(r27)
    addi r3, r27, 0x77c
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    li r7, 0x3
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80881088
    addi r3, r27, 0x77c
    li r4, 0x0
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    b lbl_fn_800C0590_000015AC
lbl_fn_800C0590_00001560:
    lwz r4, 0x79c(r27)
    addi r3, r27, 0x77c
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    li r7, 0x16
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80881088
    addi r3, r27, 0x77c
    li r4, 0x0
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
lbl_fn_800C0590_000015AC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C06B0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r10, r3
    stw r0, 0x44(r1)
    lwz r5, lbl_8087EFA8
    lwz r0, 0x2c(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800C06B0_0000161C
    lwz r0, 0x890(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C06B0_000017B4
    li r0, 0x0
    stw r0, 0x890(r3)
    lfs f1, lbl_80881088
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    fmr f2, f1
    lfs f4, 0x1d0(r3)
    lfs f3, 0x1cc(r3)
    li r3, 0x0
    bl fn_80617A10
    b lbl_fn_800C06B0_000017B4
lbl_fn_800C06B0_0000161C:
    lwz r0, 0x890(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C06B0_00001688
    lwz r5, 0x0(r4)
    lwz r0, 0x894(r3)
    cmpw r5, r0
    bne lbl_fn_800C06B0_00001688
    lfs f1, 0x4(r4)
    lfs f0, 0x898(r3)
    fcmpu cr0, f1, f0
    bne lbl_fn_800C06B0_00001688
    lfs f1, 0x8(r4)
    lfs f0, 0x89c(r3)
    fcmpu cr0, f1, f0
    bne lbl_fn_800C06B0_00001688
    lfs f1, 0xc(r4)
    lfs f0, 0x8a0(r3)
    fcmpu cr0, f1, f0
    bne lbl_fn_800C06B0_00001688
    lfs f1, 0x10(r4)
    lfs f0, 0x8a4(r3)
    fcmpu cr0, f1, f0
    bne lbl_fn_800C06B0_00001688
    lfs f1, 0x14(r4)
    lfs f0, 0x8a8(r3)
    fcmpu cr0, f1, f0
    beq lbl_fn_800C06B0_000017B4
lbl_fn_800C06B0_00001688:
    lwz r8, 0x0(r4)
    li r0, 0x1
    lfs f1, 0x4(r4)
    li r9, 0x0
    lfs f0, 0x8(r4)
    cmpwi r8, 0x0
    lwz r7, 0xc(r4)
    lwz r6, 0x10(r4)
    lwz r5, 0x14(r4)
    lwz r4, 0x18(r4)
    stw r8, 0x894(r3)
    stfs f1, 0x898(r3)
    stfs f0, 0x89c(r3)
    stw r7, 0x8a0(r3)
    stw r6, 0x8a4(r3)
    stw r5, 0x8a8(r3)
    stw r4, 0x8ac(r3)
    stw r0, 0x890(r3)
    beq lbl_fn_800C06B0_00001700
    cmpwi r8, 0x1
    beq lbl_fn_800C06B0_00001708
    cmpwi r8, 0x2
    beq lbl_fn_800C06B0_00001710
    cmpwi r8, 0x3
    beq lbl_fn_800C06B0_00001718
    cmpwi r8, 0x4
    beq lbl_fn_800C06B0_00001720
    cmpwi r8, 0x5
    beq lbl_fn_800C06B0_00001728
    b lbl_fn_800C06B0_0000172C
lbl_fn_800C06B0_00001700:
    li r9, 0x0
    b lbl_fn_800C06B0_0000172C
lbl_fn_800C06B0_00001708:
    li r9, 0x2
    b lbl_fn_800C06B0_0000172C
lbl_fn_800C06B0_00001710:
    li r9, 0x4
    b lbl_fn_800C06B0_0000172C
lbl_fn_800C06B0_00001718:
    li r9, 0x5
    b lbl_fn_800C06B0_0000172C
lbl_fn_800C06B0_00001720:
    li r9, 0x6
    b lbl_fn_800C06B0_0000172C
lbl_fn_800C06B0_00001728:
    li r9, 0x7
lbl_fn_800C06B0_0000172C:
    lfs f4, lbl_808810C8
    addi r4, r1, 0x10
    lfs f0, 0x8a0(r3)
    lfs f2, 0x8a4(r3)
    fmuls f3, f4, f0
    lfs f1, 0x8a8(r3)
    lfs f0, 0x8ac(r3)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x18(r1)
    fctiwz f0, f0
    stfd f2, 0x20(r1)
    lwz r7, 0x1c(r1)
    stfd f1, 0x28(r1)
    lwz r6, 0x24(r1)
    stfd f0, 0x30(r1)
    lwz r5, 0x2c(r1)
    lwz r0, 0x34(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    lfs f4, 0x1d0(r3)
    lfs f3, 0x1cc(r3)
    mr r3, r9
    lfs f1, 0x898(r10)
    lfs f2, 0x89c(r10)
    bl fn_80617A10
lbl_fn_800C06B0_000017B4:
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800C08B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x890(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C08B0_00001804
    li r0, 0x0
    stw r0, 0x890(r3)
    lfs f1, lbl_80881088
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    fmr f2, f1
    lfs f4, 0x1d0(r3)
    lfs f3, 0x1cc(r3)
    li r3, 0x0
    bl fn_80617A10
lbl_fn_800C08B0_00001804:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C0900(void)
{
    nofralloc
    cmpwi r5, 0x1
    beq lbl_fn_800C0900_00001838
    cmpwi r5, 0x2
    beq lbl_fn_800C0900_00001870
    cmpwi r5, 0x3
    beq lbl_fn_800C0900_000018A4
    cmpwi r5, 0x4
    beq lbl_fn_800C0900_000018D8
    b lbl_fn_800C0900_0000192C
lbl_fn_800C0900_00001838:
    addi r4, r4, 0x800
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    blr
lbl_fn_800C0900_00001870:
    psq_l f1, 0x7a0(r4), 0, 0
    psq_l f2, 0x7a8(r4), 0, 0
    psq_l f3, 0x7b0(r4), 0, 0
    psq_l f4, 0x7b8(r4), 0, 0
    psq_l f5, 0x7c0(r4), 0, 0
    psq_l f6, 0x7c8(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    blr
lbl_fn_800C0900_000018A4:
    psq_l f1, 0x7d0(r4), 0, 0
    psq_l f2, 0x7d8(r4), 0, 0
    psq_l f3, 0x7e0(r4), 0, 0
    psq_l f4, 0x7e8(r4), 0, 0
    psq_l f5, 0x7f0(r4), 0, 0
    psq_l f6, 0x7f8(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    blr
lbl_fn_800C0900_000018D8:
    cmpwi r6, 0x0
    bgt lbl_fn_800C0900_00001918
    addi r4, r4, 0x830
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    blr
lbl_fn_800C0900_00001918:
    mr r5, r6
    mr r6, r7
    mr r7, r8
    li r4, 0x4
    b fn_800D5F68
lbl_fn_800C0900_0000192C:
    addi r4, r4, 0x860
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    blr
}

asm void fn_800C0A50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C0A50_0000198C
    bl fn_800B5994
    cntlzw r0, r3
    srwi r3, r0, 5
    b lbl_fn_800C0A50_00001990
lbl_fn_800C0A50_0000198C:
    li r3, 0x1
lbl_fn_800C0A50_00001990:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C0A8C(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    addi r3, r3, 0x5c
    blr
}

asm void fn_800C0A98(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    addi r3, r3, 0x5c
    blr
}

asm void fn_800C0AA4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x1
    stmw r23, 0xc(r1)
    mr r26, r3
    mr r23, r8
    mr r24, r9
    mr r25, r10
    srw r30, r4, r6
    srw r29, r5, r7
    slw r28, r9, r7
    slw r31, r0, r7
    li r27, 0x0
    b lbl_fn_800C0AA4_00001AF0
lbl_fn_800C0AA4_000019F4:
    mr r3, r25
    mr r4, r26
    mr r5, r28
    bl memcpy
    li r3, 0x0
    li r9, 0x0
    b lbl_fn_800C0AA4_00001AE4
lbl_fn_800C0AA4_00001A10:
    add r0, r25, r9
    li r4, 0x0
    b lbl_fn_800C0AA4_00001AD4
lbl_fn_800C0AA4_00001A1C:
    cmpwi r23, 0x0
    li r5, 0x0
    beq lbl_fn_800C0AA4_00001AC8
    cmplwi r23, 0x8
    subi r7, r23, 0x8
    ble lbl_fn_800C0AA4_00001A98
    addi r6, r7, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmplwi r7, 0x0
    ble lbl_fn_800C0AA4_00001A98
lbl_fn_800C0AA4_00001A48:
    lbzx r6, r5, r0
    add r7, r0, r5
    stbx r6, r26, r5
    add r8, r26, r5
    addi r5, r5, 0x8
    lbz r6, 0x1(r7)
    stb r6, 0x1(r8)
    lbz r6, 0x2(r7)
    stb r6, 0x2(r8)
    lbz r6, 0x3(r7)
    stb r6, 0x3(r8)
    lbz r6, 0x4(r7)
    stb r6, 0x4(r8)
    lbz r6, 0x5(r7)
    stb r6, 0x5(r8)
    lbz r6, 0x6(r7)
    stb r6, 0x6(r8)
    lbz r6, 0x7(r7)
    stb r6, 0x7(r8)
    bdnz lbl_fn_800C0AA4_00001A48
lbl_fn_800C0AA4_00001A98:
    subf r6, r5, r23
    add r8, r0, r5
    add r7, r26, r5
    mtctr r6
    cmplw r5, r23
    bge lbl_fn_800C0AA4_00001AC8
lbl_fn_800C0AA4_00001AB0:
    lbz r6, 0x0(r8)
    addi r8, r8, 0x1
    stb r6, 0x0(r7)
    addi r7, r7, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_800C0AA4_00001AB0
lbl_fn_800C0AA4_00001AC8:
    add r26, r26, r23
    add r0, r0, r24
    addi r4, r4, 0x1
lbl_fn_800C0AA4_00001AD4:
    cmplw r4, r31
    blt lbl_fn_800C0AA4_00001A1C
    add r9, r9, r23
    addi r3, r3, 0x1
lbl_fn_800C0AA4_00001AE4:
    cmplw r3, r30
    blt lbl_fn_800C0AA4_00001A10
    addi r27, r27, 0x1
lbl_fn_800C0AA4_00001AF0:
    cmplw r27, r29
    blt lbl_fn_800C0AA4_000019F4
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800C0BF8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x1
    stmw r23, 0xc(r1)
    mr r26, r3
    mr r23, r8
    mr r24, r9
    mr r25, r10
    srw r30, r4, r6
    srw r29, r5, r7
    slw r28, r9, r7
    slw r31, r0, r7
    li r27, 0x0
    b lbl_fn_800C0BF8_00001C44
lbl_fn_800C0BF8_00001B48:
    mr r3, r26
    li r4, 0x0
    li r0, 0x0
    b lbl_fn_800C0BF8_00001C2C
lbl_fn_800C0BF8_00001B58:
    add r7, r25, r0
    li r5, 0x0
    b lbl_fn_800C0BF8_00001C1C
lbl_fn_800C0BF8_00001B64:
    cmpwi r23, 0x0
    li r6, 0x0
    beq lbl_fn_800C0BF8_00001C10
    cmplwi r23, 0x8
    subi r9, r23, 0x8
    ble lbl_fn_800C0BF8_00001BE0
    addi r8, r9, 0x7
    srwi r8, r8, 3
    mtctr r8
    cmplwi r9, 0x0
    ble lbl_fn_800C0BF8_00001BE0
lbl_fn_800C0BF8_00001B90:
    lbzx r8, r26, r6
    add r9, r26, r6
    stbx r8, r7, r6
    add r10, r7, r6
    addi r6, r6, 0x8
    lbz r8, 0x1(r9)
    stb r8, 0x1(r10)
    lbz r8, 0x2(r9)
    stb r8, 0x2(r10)
    lbz r8, 0x3(r9)
    stb r8, 0x3(r10)
    lbz r8, 0x4(r9)
    stb r8, 0x4(r10)
    lbz r8, 0x5(r9)
    stb r8, 0x5(r10)
    lbz r8, 0x6(r9)
    stb r8, 0x6(r10)
    lbz r8, 0x7(r9)
    stb r8, 0x7(r10)
    bdnz lbl_fn_800C0BF8_00001B90
lbl_fn_800C0BF8_00001BE0:
    subf r8, r6, r23
    add r10, r26, r6
    add r9, r7, r6
    mtctr r8
    cmplw r6, r23
    bge lbl_fn_800C0BF8_00001C10
lbl_fn_800C0BF8_00001BF8:
    lbz r8, 0x0(r10)
    addi r10, r10, 0x1
    stb r8, 0x0(r9)
    addi r9, r9, 0x1
    addi r6, r6, 0x1
    bdnz lbl_fn_800C0BF8_00001BF8
lbl_fn_800C0BF8_00001C10:
    add r7, r7, r24
    add r26, r26, r23
    addi r5, r5, 0x1
lbl_fn_800C0BF8_00001C1C:
    cmplw r5, r31
    blt lbl_fn_800C0BF8_00001B64
    add r0, r0, r23
    addi r4, r4, 0x1
lbl_fn_800C0BF8_00001C2C:
    cmplw r4, r30
    blt lbl_fn_800C0BF8_00001B58
    mr r4, r25
    mr r5, r28
    bl memcpy
    addi r27, r27, 0x1
lbl_fn_800C0BF8_00001C44:
    cmplw r27, r29
    blt lbl_fn_800C0BF8_00001B48
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800C0D4C(void)
{
    nofralloc
    stwu r1, -0x2030(r1)
    mflr r0
    cmplwi r4, 0x9
    stw r0, 0x2034(r1)
    stmw r22, 0x2008(r1)
    mr r23, r3
    mr r24, r5
    mr r25, r6
    bgt lbl_fn_800C0D4C_00001EB8
    lis r7, jumptable_807791E0@ha
    slwi r0, r4, 2
    addi r7, r7, jumptable_807791E0@l
    lwzx r7, r7, r0
    mtctr r7
    bctr
    mr r4, r24
    mr r5, r25
    srwi r9, r24, 1
    addi r10, r1, 0x8
    li r6, 0x3
    li r7, 0x3
    li r8, 0x4
    bl fn_800C0AA4
    mullw r0, r24, r25
    mr r3, r23
    srwi r4, r0, 1
    bl DCFlushRange
    b lbl_fn_800C0D4C_00001EB8
    mr r4, r24
    mr r5, r25
    mr r9, r24
    addi r10, r1, 0x8
    li r6, 0x3
    li r7, 0x2
    li r8, 0x8
    bl fn_800C0AA4
    mullw r4, r24, r25
    mr r3, r23
    bl DCFlushRange
    b lbl_fn_800C0D4C_00001EB8
    mr r4, r24
    mr r5, r25
    slwi r9, r24, 1
    addi r10, r1, 0x8
    li r6, 0x2
    li r7, 0x2
    li r8, 0x8
    bl fn_800C0AA4
    mullw r0, r24, r25
    mr r3, r23
    slwi r4, r0, 1
    bl DCFlushRange
    b lbl_fn_800C0D4C_00001EB8
    mr r26, r23
    slwi r27, r5, 2
    srwi r31, r5, 2
    srwi r30, r6, 2
    slwi r28, r5, 4
    li r29, 0x0
    li r22, 0x2
    b lbl_fn_800C0D4C_00001EA0
lbl_fn_800C0D4C_00001D54:
    mr r4, r26
    mr r5, r28
    addi r3, r1, 0x8
    bl memcpy
    li r4, 0x0
    li r3, 0x0
    b lbl_fn_800C0D4C_00001E94
lbl_fn_800C0D4C_00001D70:
    addi r5, r1, 0x8
    add r5, r5, r3
    mtctr r22
lbl_fn_800C0D4C_00001D7C:
    lbz r0, 0x0(r5)
    stb r0, 0x0(r26)
    lbz r0, 0x1(r5)
    stb r0, 0x1(r26)
    lbz r0, 0x2(r5)
    stb r0, 0x20(r26)
    lbz r0, 0x3(r5)
    stb r0, 0x21(r26)
    lbz r0, 0x4(r5)
    stb r0, 0x2(r26)
    lbz r0, 0x5(r5)
    stb r0, 0x3(r26)
    lbz r0, 0x6(r5)
    stb r0, 0x22(r26)
    lbz r0, 0x7(r5)
    stb r0, 0x23(r26)
    lbz r0, 0x8(r5)
    stb r0, 0x4(r26)
    lbz r0, 0x9(r5)
    stb r0, 0x5(r26)
    lbz r0, 0xa(r5)
    stb r0, 0x24(r26)
    lbz r0, 0xb(r5)
    stb r0, 0x25(r26)
    lbz r0, 0xc(r5)
    stb r0, 0x6(r26)
    lbz r0, 0xd(r5)
    stb r0, 0x7(r26)
    lbz r0, 0xe(r5)
    stb r0, 0x26(r26)
    lbz r0, 0xf(r5)
    stb r0, 0x27(r26)
    lbzux r0, r5, r27
    stb r0, 0x8(r26)
    lbz r0, 0x1(r5)
    stb r0, 0x9(r26)
    lbz r0, 0x2(r5)
    stb r0, 0x28(r26)
    lbz r0, 0x3(r5)
    stb r0, 0x29(r26)
    lbz r0, 0x4(r5)
    stb r0, 0xa(r26)
    lbz r0, 0x5(r5)
    stb r0, 0xb(r26)
    lbz r0, 0x6(r5)
    stb r0, 0x2a(r26)
    lbz r0, 0x7(r5)
    stb r0, 0x2b(r26)
    lbz r0, 0x8(r5)
    stb r0, 0xc(r26)
    lbz r0, 0x9(r5)
    stb r0, 0xd(r26)
    lbz r0, 0xa(r5)
    stb r0, 0x2c(r26)
    lbz r0, 0xb(r5)
    stb r0, 0x2d(r26)
    lbz r0, 0xc(r5)
    stb r0, 0xe(r26)
    lbz r0, 0xd(r5)
    stb r0, 0xf(r26)
    lbz r0, 0xe(r5)
    stb r0, 0x2e(r26)
    lbz r0, 0xf(r5)
    add r5, r5, r27
    stb r0, 0x2f(r26)
    addi r26, r26, 0x10
    bdnz lbl_fn_800C0D4C_00001D7C
    addi r26, r26, 0x20
    addi r3, r3, 0x10
    addi r4, r4, 0x1
lbl_fn_800C0D4C_00001E94:
    cmplw r4, r31
    blt lbl_fn_800C0D4C_00001D70
    addi r29, r29, 0x1
lbl_fn_800C0D4C_00001EA0:
    cmplw r29, r30
    blt lbl_fn_800C0D4C_00001D54
    mullw r0, r24, r25
    mr r3, r23
    slwi r4, r0, 2
    bl DCFlushRange
lbl_fn_800C0D4C_00001EB8:
    lmw r22, 0x2008(r1)
    li r3, 0x1
    lwz r0, 0x2034(r1)
    mtlr r0
    addi r1, r1, 0x2030
    blr
}

asm void fn_800C0FBC(void)
{
    nofralloc
    stwu r1, -0x2030(r1)
    mflr r0
    cmplwi r4, 0x16
    stw r0, 0x2034(r1)
    stmw r22, 0x2008(r1)
    mr r23, r3
    mr r24, r5
    mr r25, r6
    bgt lbl_fn_800C0FBC_00002128
    lis r7, jumptable_80779208@ha
    slwi r0, r4, 2
    addi r7, r7, jumptable_80779208@l
    lwzx r7, r7, r0
    mtctr r7
    bctr
    mr r4, r24
    mr r5, r25
    srwi r9, r24, 1
    addi r10, r1, 0x8
    li r6, 0x3
    li r7, 0x3
    li r8, 0x4
    bl fn_800C0BF8
    mullw r0, r24, r25
    mr r3, r23
    srwi r4, r0, 1
    bl DCFlushRange
    b lbl_fn_800C0FBC_00002128
    mr r4, r24
    mr r5, r25
    mr r9, r24
    addi r10, r1, 0x8
    li r6, 0x3
    li r7, 0x2
    li r8, 0x8
    bl fn_800C0BF8
    mullw r4, r24, r25
    mr r3, r23
    bl DCFlushRange
    b lbl_fn_800C0FBC_00002128
    mr r4, r24
    mr r5, r25
    slwi r9, r24, 1
    addi r10, r1, 0x8
    li r6, 0x2
    li r7, 0x2
    li r8, 0x8
    bl fn_800C0BF8
    mullw r0, r24, r25
    mr r3, r23
    slwi r4, r0, 1
    bl DCFlushRange
    b lbl_fn_800C0FBC_00002128
    mr r26, r23
    slwi r27, r5, 2
    srwi r31, r5, 2
    srwi r30, r6, 2
    slwi r28, r5, 4
    li r29, 0x0
    li r22, 0x2
    b lbl_fn_800C0FBC_00002110
lbl_fn_800C0FBC_00001FC4:
    mr r3, r26
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_800C0FBC_000020F8
lbl_fn_800C0FBC_00001FD4:
    addi r6, r1, 0x8
    add r6, r6, r4
    mtctr r22
lbl_fn_800C0FBC_00001FE0:
    lbz r0, 0x0(r26)
    stb r0, 0x0(r6)
    lbz r0, 0x1(r26)
    stb r0, 0x1(r6)
    lbz r0, 0x20(r26)
    stb r0, 0x2(r6)
    lbz r0, 0x21(r26)
    stb r0, 0x3(r6)
    lbz r0, 0x2(r26)
    stb r0, 0x4(r6)
    lbz r0, 0x3(r26)
    stb r0, 0x5(r6)
    lbz r0, 0x22(r26)
    stb r0, 0x6(r6)
    lbz r0, 0x23(r26)
    stb r0, 0x7(r6)
    lbz r0, 0x4(r26)
    stb r0, 0x8(r6)
    lbz r0, 0x5(r26)
    stb r0, 0x9(r6)
    lbz r0, 0x24(r26)
    stb r0, 0xa(r6)
    lbz r0, 0x25(r26)
    stb r0, 0xb(r6)
    lbz r0, 0x6(r26)
    stb r0, 0xc(r6)
    lbz r0, 0x7(r26)
    stb r0, 0xd(r6)
    lbz r0, 0x26(r26)
    stb r0, 0xe(r6)
    lbz r0, 0x27(r26)
    stb r0, 0xf(r6)
    lbz r0, 0x8(r26)
    stbux r0, r6, r27
    lbz r0, 0x9(r26)
    stb r0, 0x1(r6)
    lbz r0, 0x28(r26)
    stb r0, 0x2(r6)
    lbz r0, 0x29(r26)
    stb r0, 0x3(r6)
    lbz r0, 0xa(r26)
    stb r0, 0x4(r6)
    lbz r0, 0xb(r26)
    stb r0, 0x5(r6)
    lbz r0, 0x2a(r26)
    stb r0, 0x6(r6)
    lbz r0, 0x2b(r26)
    stb r0, 0x7(r6)
    lbz r0, 0xc(r26)
    stb r0, 0x8(r6)
    lbz r0, 0xd(r26)
    stb r0, 0x9(r6)
    lbz r0, 0x2c(r26)
    stb r0, 0xa(r6)
    lbz r0, 0x2d(r26)
    stb r0, 0xb(r6)
    lbz r0, 0xe(r26)
    stb r0, 0xc(r6)
    lbz r0, 0xf(r26)
    stb r0, 0xd(r6)
    lbz r0, 0x2e(r26)
    stb r0, 0xe(r6)
    lbz r0, 0x2f(r26)
    addi r26, r26, 0x10
    stb r0, 0xf(r6)
    add r6, r6, r27
    bdnz lbl_fn_800C0FBC_00001FE0
    addi r26, r26, 0x20
    addi r4, r4, 0x10
    addi r5, r5, 0x1
lbl_fn_800C0FBC_000020F8:
    cmplw r5, r31
    blt lbl_fn_800C0FBC_00001FD4
    mr r5, r28
    addi r4, r1, 0x8
    bl memcpy
    addi r29, r29, 0x1
lbl_fn_800C0FBC_00002110:
    cmplw r29, r30
    blt lbl_fn_800C0FBC_00001FC4
    mullw r0, r24, r25
    mr r3, r23
    slwi r4, r0, 2
    bl DCFlushRange
lbl_fn_800C0FBC_00002128:
    lmw r22, 0x2008(r1)
    li r3, 0x1
    lwz r0, 0x2034(r1)
    mtlr r0
    addi r1, r1, 0x2030
    blr
}
