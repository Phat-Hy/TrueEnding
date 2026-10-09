#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8006B174(void);
extern void fn_8006B2D8(void);
extern void fn_80084320(void);
extern void fn_8008B130(void);
extern void fn_800C2448(void);
extern void fn_800C24B4(void);
extern void fn_800CB360(void);
extern void fn_800D1D3C(void);
extern void fn_800DC6B4(void);
extern void fn_802114D8(void);
extern void fn_802114E0(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_8049D1A4(void);
extern void fn_8049E480(void);
extern void fn_8067E23C(void);
extern void fn_80695D84(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80756EB8[];
extern u8 lbl_807570D4[];
extern u8 lbl_80790778[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F578;
extern u32 lbl_80887160;
extern u32 lbl_80887164;
extern u32 lbl_808871A8;
extern u32 lbl_808871B0;

/* Function declarations */
void fn_804A0614(void);
void fn_804A06B4(void);
void fn_804A0BCC(void);
void fn_804A0E18(void);
void fn_804A0E90(void);
void fn_804A0EFC(void);
void fn_804A0F58(void);
void fn_804A0F80(void);
void fn_804A1C4C(void);
void fn_804A1D2C(void);
void fn_804A1DDC(void);
void fn_804A1E44(void);

asm void fn_804A0614(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_804A0614_00000028
    addi r3, r4, 0x1
    b lbl_fn_804A0614_0000002C
lbl_fn_804A0614_00000028:
    lwz r3, 0x8(r4)
lbl_fn_804A0614_0000002C:
    bl fn_800DC6B4
    lwz r6, 0x70(r31)
    b lbl_fn_804A0614_00000080
lbl_fn_804A0614_00000038:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x4
    bne lbl_fn_804A0614_0000007C
    lwz r0, 0x344(r6)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804A0614_0000007C
lbl_fn_804A0614_00000058:
    lwz r5, 0x348(r6)
    lwzx r5, r5, r4
    lwz r0, 0x8c(r5)
    cmplw r3, r0
    bne lbl_fn_804A0614_00000074
    mr r3, r5
    b lbl_fn_804A0614_0000008C
lbl_fn_804A0614_00000074:
    addi r4, r4, 0x4
    bdnz lbl_fn_804A0614_00000058
lbl_fn_804A0614_0000007C:
    lwz r6, 0x4c(r6)
lbl_fn_804A0614_00000080:
    cmpwi r6, 0x0
    bne lbl_fn_804A0614_00000038
    li r3, 0x0
lbl_fn_804A0614_0000008C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A06B4(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    cmpwi r4, -0x1
    stw r0, 0xe4(r1)
    stmw r22, 0xb8(r1)
    mr r26, r3
    mr r23, r4
    mr r22, r5
    bne lbl_fn_804A06B4_000000CC
    li r3, 0x0
    b lbl_fn_804A06B4_000005A4
lbl_fn_804A06B4_000000CC:
    li r0, 0x0
    stw r0, 0x7c(r1)
    mr r3, r22
    addi r24, r1, 0x7c
    stw r0, 0x80(r1)
    stw r0, 0x84(r1)
    bl strlen
    mr r25, r3
    mr r3, r24
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r24
    stb r0, 0x18(r1)
    mr r6, r22
    add r7, r22, r25
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r24
    addi r3, r1, 0x70
    bl fn_8006B174
    addi r3, r1, 0xa0
    addi r4, r1, 0x70
    bl fn_8006B2D8
    lwz r0, 0x70(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_00000148
    lwz r3, 0x78(r1)
    bl dtor_80084684
lbl_fn_804A06B4_00000148:
    lwz r0, 0x7c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_0000015C
    lwz r3, 0x84(r1)
    bl dtor_80084684
lbl_fn_804A06B4_0000015C:
    lwz r24, 0x70(r26)
    addi r27, r1, 0xa1
    addi r26, r1, 0x95
    addi r25, r1, 0x89
    addi r30, r1, 0x64
    addi r28, r1, 0x4c
    li r31, 0x0
    b lbl_fn_804A06B4_00000584
lbl_fn_804A06B4_0000017C:
    lwz r0, 0x48(r24)
    cmpw r23, r0
    bne lbl_fn_804A06B4_00000580
    cmpwi r23, 0x0
    bne lbl_fn_804A06B4_00000388
    addi r3, r24, 0x50
    bl fn_8008B130
    stw r31, 0x64(r1)
    mr r22, r3
    stw r31, 0x68(r1)
    stw r31, 0x6c(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r22
    add r7, r22, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x58
    bl fn_8006B174
    addi r3, r1, 0x94
    addi r4, r1, 0x58
    bl fn_8006B2D8
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_0000020C
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_804A06B4_0000020C:
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_00000220
    lwz r3, 0x6c(r1)
    bl dtor_80084684
lbl_fn_804A06B4_00000220:
    lwz r0, 0x94(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804A06B4_00000238
    lbz r0, 0x94(r1)
    clrlwi r4, r0, 25
    b lbl_fn_804A06B4_0000023C
lbl_fn_804A06B4_00000238:
    lwz r4, 0x98(r1)
lbl_fn_804A06B4_0000023C:
    lwz r0, 0xa0(r1)
    srwi. r3, r0, 31
    bne lbl_fn_804A06B4_00000254
    lbz r0, 0xa0(r1)
    clrlwi r0, r0, 25
    b lbl_fn_804A06B4_00000258
lbl_fn_804A06B4_00000254:
    lwz r0, 0xa4(r1)
lbl_fn_804A06B4_00000258:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_804A06B4_00000338
    cmpwi r3, 0x0
    bne lbl_fn_804A06B4_00000280
    lbz r0, 0xa0(r1)
    mr r4, r27
    clrlwi r29, r0, 25
    b lbl_fn_804A06B4_00000288
lbl_fn_804A06B4_00000280:
    lwz r4, 0xa8(r1)
    lwz r29, 0xa4(r1)
lbl_fn_804A06B4_00000288:
    lwz r0, 0x94(r1)
    stw r29, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804A06B4_000002A4
    lbz r0, 0x94(r1)
    clrlwi r5, r0, 25
    b lbl_fn_804A06B4_000002A8
lbl_fn_804A06B4_000002A4:
    lwz r5, 0x98(r1)
lbl_fn_804A06B4_000002A8:
    lwz r0, 0x94(r1)
    stw r5, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804A06B4_000002C8
    lbz r0, 0x94(r1)
    mr r3, r26
    clrlwi r0, r0, 25
    b lbl_fn_804A06B4_000002D0
lbl_fn_804A06B4_000002C8:
    lwz r3, 0x9c(r1)
    lwz r0, 0x98(r1)
lbl_fn_804A06B4_000002D0:
    cmplw r5, r0
    stw r0, 0x34(r1)
    addi r5, r1, 0x34
    bge lbl_fn_804A06B4_000002E4
    addi r5, r1, 0x3c
lbl_fn_804A06B4_000002E4:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x30
    stw r0, 0x30(r1)
    cmplw r29, r0
    bge lbl_fn_804A06B4_000002FC
    addi r5, r1, 0x38
lbl_fn_804A06B4_000002FC:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_804A06B4_00000330
    lwz r0, 0x30(r1)
    cmplw r0, r29
    bge lbl_fn_804A06B4_00000320
    li r3, -0x1
    b lbl_fn_804A06B4_00000330
lbl_fn_804A06B4_00000320:
    bne lbl_fn_804A06B4_0000032C
    li r3, 0x0
    b lbl_fn_804A06B4_00000330
lbl_fn_804A06B4_0000032C:
    li r3, 0x1
lbl_fn_804A06B4_00000330:
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_804A06B4_00000338:
    cmpwi r0, 0x0
    beq lbl_fn_804A06B4_00000370
    lwz r0, 0x94(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_00000354
    lwz r3, 0x9c(r1)
    bl dtor_80084684
lbl_fn_804A06B4_00000354:
    lwz r0, 0xa0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_00000368
    lwz r3, 0xa8(r1)
    bl dtor_80084684
lbl_fn_804A06B4_00000368:
    mr r3, r24
    b lbl_fn_804A06B4_000005A4
lbl_fn_804A06B4_00000370:
    lwz r0, 0x94(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_00000580
    lwz r3, 0x9c(r1)
    bl dtor_80084684
    b lbl_fn_804A06B4_00000580
lbl_fn_804A06B4_00000388:
    cmpwi r23, 0x4
    bne lbl_fn_804A06B4_00000580
    addi r29, r24, 0x5c
    stw r31, 0x4c(r1)
    mr r3, r29
    stw r31, 0x50(r1)
    stw r31, 0x54(r1)
    bl strlen
    mr r22, r3
    mr r3, r28
    mr r4, r22
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r22
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_8006B174
    addi r3, r1, 0x88
    addi r4, r1, 0x40
    bl fn_8006B2D8
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_00000408
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_804A06B4_00000408:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_0000041C
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_804A06B4_0000041C:
    lwz r0, 0x88(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804A06B4_00000434
    lbz r0, 0x88(r1)
    clrlwi r4, r0, 25
    b lbl_fn_804A06B4_00000438
lbl_fn_804A06B4_00000434:
    lwz r4, 0x8c(r1)
lbl_fn_804A06B4_00000438:
    lwz r0, 0xa0(r1)
    srwi. r3, r0, 31
    bne lbl_fn_804A06B4_00000450
    lbz r0, 0xa0(r1)
    clrlwi r0, r0, 25
    b lbl_fn_804A06B4_00000454
lbl_fn_804A06B4_00000450:
    lwz r0, 0xa4(r1)
lbl_fn_804A06B4_00000454:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_804A06B4_00000534
    cmpwi r3, 0x0
    bne lbl_fn_804A06B4_0000047C
    lbz r0, 0xa0(r1)
    mr r4, r27
    clrlwi r29, r0, 25
    b lbl_fn_804A06B4_00000484
lbl_fn_804A06B4_0000047C:
    lwz r4, 0xa8(r1)
    lwz r29, 0xa4(r1)
lbl_fn_804A06B4_00000484:
    lwz r0, 0x88(r1)
    stw r29, 0x28(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804A06B4_000004A0
    lbz r0, 0x88(r1)
    clrlwi r5, r0, 25
    b lbl_fn_804A06B4_000004A4
lbl_fn_804A06B4_000004A0:
    lwz r5, 0x8c(r1)
lbl_fn_804A06B4_000004A4:
    lwz r0, 0x88(r1)
    stw r5, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804A06B4_000004C4
    lbz r0, 0x88(r1)
    mr r3, r25
    clrlwi r0, r0, 25
    b lbl_fn_804A06B4_000004CC
lbl_fn_804A06B4_000004C4:
    lwz r3, 0x90(r1)
    lwz r0, 0x8c(r1)
lbl_fn_804A06B4_000004CC:
    cmplw r5, r0
    stw r0, 0x24(r1)
    addi r5, r1, 0x24
    bge lbl_fn_804A06B4_000004E0
    addi r5, r1, 0x2c
lbl_fn_804A06B4_000004E0:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x20
    stw r0, 0x20(r1)
    cmplw r29, r0
    bge lbl_fn_804A06B4_000004F8
    addi r5, r1, 0x28
lbl_fn_804A06B4_000004F8:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_804A06B4_0000052C
    lwz r0, 0x20(r1)
    cmplw r0, r29
    bge lbl_fn_804A06B4_0000051C
    li r3, -0x1
    b lbl_fn_804A06B4_0000052C
lbl_fn_804A06B4_0000051C:
    bne lbl_fn_804A06B4_00000528
    li r3, 0x0
    b lbl_fn_804A06B4_0000052C
lbl_fn_804A06B4_00000528:
    li r3, 0x1
lbl_fn_804A06B4_0000052C:
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_804A06B4_00000534:
    cmpwi r0, 0x0
    beq lbl_fn_804A06B4_0000056C
    lwz r0, 0x88(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_00000550
    lwz r3, 0x90(r1)
    bl dtor_80084684
lbl_fn_804A06B4_00000550:
    lwz r0, 0xa0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_00000564
    lwz r3, 0xa8(r1)
    bl dtor_80084684
lbl_fn_804A06B4_00000564:
    mr r3, r24
    b lbl_fn_804A06B4_000005A4
lbl_fn_804A06B4_0000056C:
    lwz r0, 0x88(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_00000580
    lwz r3, 0x90(r1)
    bl dtor_80084684
lbl_fn_804A06B4_00000580:
    lwz r24, 0x4c(r24)
lbl_fn_804A06B4_00000584:
    cmpwi r24, 0x0
    bne lbl_fn_804A06B4_0000017C
    lwz r0, 0xa0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A06B4_000005A0
    lwz r3, 0xa8(r1)
    bl dtor_80084684
lbl_fn_804A06B4_000005A0:
    li r3, 0x0
lbl_fn_804A06B4_000005A4:
    lmw r22, 0xb8(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_804A0BCC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r4, -0x1
    stw r0, 0x94(r1)
    stmw r22, 0x68(r1)
    mr r24, r4
    mr r25, r5
    bne lbl_fn_804A0BCC_000005E0
    li r3, 0x0
    b lbl_fn_804A0BCC_000007F0
lbl_fn_804A0BCC_000005E0:
    lwz r26, 0x70(r3)
    addi r28, r1, 0x55
    addi r27, r1, 0x49
    addi r30, r1, 0x3c
    addi r29, r1, 0x24
    li r31, 0x0
    b lbl_fn_804A0BCC_000007E4
lbl_fn_804A0BCC_000005FC:
    lwz r0, 0x48(r26)
    cmpw r24, r0
    bne lbl_fn_804A0BCC_000007E0
    cmpwi r24, 0x0
    bne lbl_fn_804A0BCC_000006F8
    addi r3, r26, 0x50
    bl fn_8008B130
    stw r31, 0x3c(r1)
    mr r22, r3
    stw r31, 0x40(r1)
    stw r31, 0x44(r1)
    bl strlen
    mr r23, r3
    mr r3, r30
    mr r4, r23
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r22
    add r7, r22, r23
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x30
    bl fn_8006B174
    addi r3, r1, 0x54
    addi r4, r1, 0x30
    bl fn_8006B2D8
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A0BCC_0000068C
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_804A0BCC_0000068C:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A0BCC_000006A0
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_804A0BCC_000006A0:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804A0BCC_000006B4
    mr r3, r28
    b lbl_fn_804A0BCC_000006B8
lbl_fn_804A0BCC_000006B4:
    lwz r3, 0x5c(r1)
lbl_fn_804A0BCC_000006B8:
    bl fn_800DC6B4
    cmplw r25, r3
    bne lbl_fn_804A0BCC_000006E0
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A0BCC_000006D8
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_804A0BCC_000006D8:
    mr r3, r26
    b lbl_fn_804A0BCC_000007F0
lbl_fn_804A0BCC_000006E0:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A0BCC_000007E0
    lwz r3, 0x5c(r1)
    bl dtor_80084684
    b lbl_fn_804A0BCC_000007E0
lbl_fn_804A0BCC_000006F8:
    cmpwi r24, 0x4
    bne lbl_fn_804A0BCC_000007E0
    addi r23, r26, 0x5c
    stw r31, 0x24(r1)
    mr r3, r23
    stw r31, 0x28(r1)
    stw r31, 0x2c(r1)
    bl strlen
    mr r22, r3
    mr r3, r29
    mr r4, r22
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r29
    stb r0, 0x8(r1)
    mr r6, r23
    add r7, r23, r22
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r29
    addi r3, r1, 0x18
    bl fn_8006B174
    addi r3, r1, 0x48
    addi r4, r1, 0x18
    bl fn_8006B2D8
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A0BCC_00000778
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_804A0BCC_00000778:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A0BCC_0000078C
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_804A0BCC_0000078C:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804A0BCC_000007A0
    mr r3, r27
    b lbl_fn_804A0BCC_000007A4
lbl_fn_804A0BCC_000007A0:
    lwz r3, 0x50(r1)
lbl_fn_804A0BCC_000007A4:
    bl fn_800DC6B4
    cmplw r25, r3
    bne lbl_fn_804A0BCC_000007CC
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A0BCC_000007C4
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_804A0BCC_000007C4:
    mr r3, r26
    b lbl_fn_804A0BCC_000007F0
lbl_fn_804A0BCC_000007CC:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804A0BCC_000007E0
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_804A0BCC_000007E0:
    lwz r26, 0x4c(r26)
lbl_fn_804A0BCC_000007E4:
    cmpwi r26, 0x0
    bne lbl_fn_804A0BCC_000005FC
    li r3, 0x0
lbl_fn_804A0BCC_000007F0:
    lmw r22, 0x68(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_804A0E18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r3, r4
    stw r29, 0x14(r1)
    mr r29, r5
    bl fn_800DC6B4
    lwz r30, 0x70(r30)
    mr r31, r3
    b lbl_fn_804A0E18_00000858
lbl_fn_804A0E18_00000838:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    mr r5, r29
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r30, 0x4c(r30)
lbl_fn_804A0E18_00000858:
    cmpwi r30, 0x0
    bne lbl_fn_804A0E18_00000838
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A0E90(void)
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
    lwz r31, 0x70(r3)
    b lbl_fn_804A0E90_000008C4
lbl_fn_804A0E90_000008A4:
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r31, 0x4c(r31)
lbl_fn_804A0E90_000008C4:
    cmpwi r31, 0x0
    bne lbl_fn_804A0E90_000008A4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A0EFC(void)
{
    nofralloc
    lwz r6, 0xa0(r3)
    mr r5, r3
    li r7, 0x0
    mtctr r6
    cmplwi r6, 0x0
    blelr
lbl_fn_804A0EFC_00000900:
    lwz r0, 0xa4(r5)
    cmplw r0, r4
    bne lbl_fn_804A0EFC_00000934
    cmpw r7, r6
    bgelr
    lwz r0, 0x108(r3)
    lfs f1, lbl_80887164
    lfs f0, lbl_80887160
    stw r0, 0x10c(r3)
    stw r7, 0x108(r3)
    stfs f1, 0x110(r3)
    stfs f0, 0x114(r3)
    b fn_804A0F80
lbl_fn_804A0EFC_00000934:
    addi r5, r5, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_804A0EFC_00000900
    blr
}

asm void fn_804A0F58(void)
{
    nofralloc
    lwz r0, 0xa0(r3)
    cmpw r4, r0
    bgelr
    lwz r0, 0x108(r3)
    stw r0, 0x10c(r3)
    stw r4, 0x108(r3)
    stfs f1, 0x110(r3)
    stfs f2, 0x114(r3)
    b fn_804A0F80
    blr
}

asm void fn_804A0F80(void)
{
    nofralloc
    stwu r1, -0x390(r1)
    mflr r0
    stw r0, 0x394(r1)
    addi r11, r1, 0x2e0
    stfd f31, 0x380(r1)
    psq_st f31, 0x388(r1), 0, 0
    stfd f30, 0x370(r1)
    psq_st f30, 0x378(r1), 0, 0
    stfd f29, 0x360(r1)
    psq_st f29, 0x368(r1), 0, 0
    stfd f28, 0x350(r1)
    psq_st f28, 0x358(r1), 0, 0
    stfd f27, 0x340(r1)
    psq_st f27, 0x348(r1), 0, 0
    stfd f26, 0x330(r1)
    psq_st f26, 0x338(r1), 0, 0
    stfd f25, 0x320(r1)
    psq_st f25, 0x328(r1), 0, 0
    stfd f24, 0x310(r1)
    psq_st f24, 0x318(r1), 0, 0
    stfd f23, 0x300(r1)
    psq_st f23, 0x308(r1), 0, 0
    stfd f22, 0x2f0(r1)
    psq_st f22, 0x2f8(r1), 0, 0
    stfd f21, 0x2e0(r1)
    psq_st f21, 0x2e8(r1), 0, 0
    bl _savegpr_14
    lwz r22, 0xc4(r3)
    mr r17, r3
    cmpwi r22, 0x0
    beq lbl_fn_804A0F80_000015C8
    lwz r4, 0x108(r3)
    lwz r0, 0x10c(r3)
    cmpw r4, r0
    beq lbl_fn_804A0F80_00001550
    lfs f3, 0x110(r3)
    lfs f0, lbl_80887164
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_804A0F80_00000A18
    stfs f0, 0x110(r3)
    stw r4, 0x10c(r3)
    b lbl_fn_804A0F80_00001548
lbl_fn_804A0F80_00000A18:
    addi r23, r1, 0x1f0
    addi r31, r1, 0x260
    addi r30, r1, 0x240
    addi r29, r1, 0x210
    addi r28, r1, 0x60
    addi r27, r1, 0x58
    addi r26, r1, 0x50
    addi r25, r1, 0x48
    addi r24, r1, 0x1e0
    li r21, 0x0
    li r16, 0x0
    li r14, 0x4
    b lbl_fn_804A0F80_0000152C
lbl_fn_804A0F80_00000A4C:
    lwz r3, 0x10c(r17)
    li r4, 0x0
    lwz r0, 0x108(r17)
    slwi r3, r3, 2
    lwz r6, 0x58(r22)
    add r5, r17, r3
    slwi r0, r0, 2
    add r3, r17, r0
    lwz r5, 0xa4(r5)
    lwz r3, 0xa4(r3)
    lwz r5, 0x58(r5)
    lwz r3, 0x58(r3)
    lwzx r19, r5, r16
    lwzx r18, r3, r16
    lfs f0, 0x58(r19)
    lfs f3, 0x58(r18)
    addi r3, r18, 0x4c
    lfs f4, 0x5c(r18)
    fsubs f30, f3, f0
    lfs f3, 0x5c(r19)
    lfs f7, 0x110(r17)
    fsubs f31, f4, f3
    lfs f5, 0x60(r18)
    fmuls f11, f30, f7
    lfs f4, 0x60(r19)
    fmuls f12, f31, f7
    lfs f6, 0x64(r18)
    fsubs f29, f5, f4
    lfs f5, 0x64(r19)
    fadds f8, f11, f0
    lwzx r20, r6, r16
    fmuls f13, f29, f7
    stfs f8, 0x58(r20)
    fadds f9, f12, f3
    fsubs f28, f6, f5
    stfs f30, 0x1c0(r1)
    fadds f10, f13, f4
    stfs f9, 0x5c(r20)
    fmuls f30, f28, f7
    stfs f10, 0x60(r20)
    fadds f7, f30, f5
    stfs f31, 0x1c4(r1)
    stfs f7, 0x64(r20)
    lfs f3, 0x68(r18)
    lfs f0, 0x68(r19)
    lfs f4, 0x6c(r18)
    fsubs f24, f3, f0
    lfs f3, 0x6c(r19)
    lfs f27, 0x110(r17)
    fsubs f23, f4, f3
    lfs f5, 0x70(r18)
    fmuls f26, f24, f27
    lfs f4, 0x70(r19)
    fmuls f25, f23, f27
    lfs f6, 0x74(r18)
    fsubs f22, f5, f4
    lfs f5, 0x74(r19)
    fadds f0, f26, f0
    stfs f29, 0x1c8(r1)
    fsubs f21, f6, f5
    stfs f0, 0x68(r20)
    fmuls f6, f22, f27
    fadds f3, f25, f3
    stfs f28, 0x1cc(r1)
    fmuls f27, f21, f27
    fadds f4, f6, f4
    stfs f3, 0x6c(r20)
    fadds f5, f27, f5
    stfs f4, 0x70(r20)
    stfs f5, 0x74(r20)
    lfs f31, 0x110(r17)
    stfs f11, 0x1b0(r1)
    stfs f12, 0x1b4(r1)
    stfs f13, 0x1b8(r1)
    stfs f30, 0x1bc(r1)
    stfs f8, 0x280(r1)
    stfs f9, 0x284(r1)
    stfs f10, 0x288(r1)
    stfs f7, 0x28c(r1)
    stfs f24, 0x1a0(r1)
    stfs f23, 0x1a4(r1)
    stfs f22, 0x1a8(r1)
    stfs f21, 0x1ac(r1)
    stfs f26, 0x190(r1)
    stfs f25, 0x194(r1)
    stfs f6, 0x198(r1)
    stfs f27, 0x19c(r1)
    stfs f0, 0x270(r1)
    stfs f3, 0x274(r1)
    stfs f4, 0x278(r1)
    stfs f5, 0x27c(r1)
    bl fn_800C24B4
    mr r15, r3
    addi r3, r19, 0x4c
    li r4, 0x0
    bl fn_800C24B4
    lfs f0, 0x1c(r15)
    li r4, 0x0
    lfs f5, 0x1c(r3)
    lfs f3, 0x18(r15)
    fsubs f9, f0, f5
    lfs f4, 0x18(r3)
    lfs f0, 0x14(r3)
    addi r3, r20, 0x4c
    fsubs f6, f3, f4
    lfs f3, 0x14(r15)
    fmuls f8, f9, f31
    stfs f6, 0x188(r1)
    fsubs f3, f3, f0
    fmuls f7, f6, f31
    stfs f9, 0x18c(r1)
    fadds f5, f8, f5
    fmuls f6, f3, f31
    stfs f3, 0x184(r1)
    fadds f3, f7, f4
    stfs f6, 0x178(r1)
    fadds f0, f6, f0
    stfs f7, 0x17c(r1)
    stfs f8, 0x180(r1)
    stfs f0, 0x260(r1)
    stfs f3, 0x264(r1)
    stfs f5, 0x268(r1)
    bl fn_800C2448
    psq_l f1, 0x0(r31), 0, 0
    li r4, 0x0
    psq_st f1, 0x14(r3), 0, 0
    lfs f2, 0x268(r1)
    stfs f2, 0x1c(r3)
    addi r3, r18, 0x4c
    lfs f21, 0x110(r17)
    bl fn_800C24B4
    mr r15, r3
    addi r3, r19, 0x4c
    li r4, 0x0
    bl fn_800C24B4
    lfs f0, 0x40(r15)
    li r4, 0x0
    lfs f6, 0x40(r3)
    lfs f4, 0x38(r3)
    fsubs f13, f0, f6
    lfs f0, 0x38(r15)
    lfs f3, 0x3c(r15)
    fsubs f11, f0, f4
    lfs f5, 0x3c(r3)
    lfs f0, 0x34(r3)
    fsubs f12, f3, f5
    lfs f3, 0x34(r15)
    fmuls f7, f11, f21
    fsubs f10, f3, f0
    stfs f11, 0x16c(r1)
    fmuls f9, f13, f21
    fmuls f8, f12, f21
    stfs f10, 0x168(r1)
    fadds f3, f7, f4
    fmuls f4, f10, f21
    stfs f12, 0x170(r1)
    fadds f6, f9, f6
    fadds f5, f8, f5
    stfs f13, 0x174(r1)
    fadds f0, f4, f0
    stfs f4, 0x158(r1)
    addi r3, r20, 0x4c
    stfs f7, 0x15c(r1)
    stfs f8, 0x160(r1)
    stfs f9, 0x164(r1)
    stfs f0, 0x250(r1)
    stfs f3, 0x254(r1)
    stfs f5, 0x258(r1)
    stfs f6, 0x25c(r1)
    bl fn_800C2448
    lfs f0, 0x250(r1)
    stfs f0, 0x34(r3)
    lfs f0, 0x254(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0x258(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0x25c(r1)
    stfs f0, 0x40(r3)
    lwz r0, 0x284(r18)
    stw r0, 0x284(r20)
    lwz r0, 0x288(r18)
    stw r0, 0x288(r20)
    lfs f0, 0x28c(r18)
    stfs f0, 0x28c(r20)
    lwz r0, 0x294(r18)
    lwz r3, 0x290(r18)
    stw r3, 0x290(r20)
    stw r0, 0x294(r20)
    lwz r0, 0x29c(r18)
    lwz r3, 0x298(r18)
    stw r3, 0x298(r20)
    stw r0, 0x29c(r20)
    lfs f2, 0x2a8(r18)
    psq_l f1, 0x2a0(r18), 0, 0
    psq_st f1, 0x2a0(r20), 0, 0
    stfs f2, 0x2a8(r20)
    lfs f5, 0x2a4(r18)
    lfs f4, 0x2a4(r19)
    lfs f3, 0x2a0(r18)
    fsubs f8, f5, f4
    lfs f0, 0x2a0(r19)
    lfs f6, 0x110(r17)
    fsubs f7, f3, f0
    lfs f5, 0x2a8(r18)
    fmuls f10, f8, f6
    lfs f3, 0x2a8(r19)
    fmuls f9, f7, f6
    stfs f7, 0x14c(r1)
    fsubs f5, f5, f3
    fadds f4, f10, f4
    stfs f8, 0x150(r1)
    fadds f0, f9, f0
    fmuls f11, f5, f6
    stfs f4, 0x244(r1)
    stfs f0, 0x240(r1)
    fadds f2, f11, f3
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x2a0(r20), 0, 0
    stfs f2, 0x2a8(r20)
    stfs f5, 0x154(r1)
    lfs f3, 0x29c(r18)
    lfs f8, 0x29c(r19)
    lfs f0, 0x298(r18)
    fsubs f21, f3, f8
    lfs f7, 0x298(r19)
    lfs f6, 0x294(r18)
    fsubs f13, f0, f7
    lfs f5, 0x294(r19)
    lfs f12, 0x110(r17)
    fsubs f6, f6, f5
    stfs f9, 0x140(r1)
    lfs f4, 0x290(r18)
    lfs f3, 0x290(r19)
    fmuls f0, f21, f12
    fmuls f9, f13, f12
    fsubs f4, f4, f3
    stfs f10, 0x144(r1)
    stfs f11, 0x148(r1)
    stfs f2, 0x248(r1)
    stfs f4, 0x130(r1)
    stfs f6, 0x134(r1)
    stfs f13, 0x138(r1)
    stfs f21, 0x13c(r1)
    fmuls f4, f4, f12
    stfs f9, 0x128(r1)
    fmuls f6, f6, f12
    fadds f11, f9, f7
    stfs f4, 0x120(r1)
    fadds f9, f4, f3
    fadds f10, f6, f5
    stfs f6, 0x124(r1)
    fadds f8, f0, f8
    stfs f9, 0x290(r20)
    stfs f10, 0x294(r20)
    stfs f11, 0x298(r20)
    stfs f8, 0x29c(r20)
    lwz r0, 0x1e4(r18)
    stw r0, 0x1e4(r20)
    lwz r0, 0x1e8(r18)
    stw r0, 0x1e8(r20)
    lwz r0, 0x1ec(r18)
    stw r0, 0x1ec(r20)
    lwz r0, 0x1f0(r18)
    stw r0, 0x1f0(r20)
    lwz r0, 0x1f4(r18)
    stw r0, 0x1f4(r20)
    lwz r0, 0x1f8(r18)
    stw r0, 0x1f8(r20)
    lwz r0, 0x1fc(r18)
    stw r0, 0x1fc(r20)
    lfs f3, 0x200(r18)
    stfs f3, 0x200(r20)
    lfs f3, 0x204(r18)
    stfs f3, 0x204(r20)
    lfs f3, 0x208(r18)
    stfs f3, 0x208(r20)
    lwz r0, 0x210(r18)
    lwz r3, 0x20c(r18)
    stw r3, 0x20c(r20)
    stw r0, 0x210(r20)
    lwz r0, 0x218(r18)
    lwz r3, 0x214(r18)
    stw r3, 0x214(r20)
    stw r0, 0x218(r20)
    lfs f2, 0x224(r18)
    psq_l f1, 0x21c(r18), 0, 0
    psq_st f1, 0x21c(r20), 0, 0
    stfs f2, 0x224(r20)
    lfs f3, 0x228(r18)
    stfs f3, 0x228(r20)
    lfs f3, 0x214(r18)
    lfs f6, 0x214(r19)
    lfs f4, 0x218(r18)
    fsubs f23, f3, f6
    lfs f7, 0x218(r19)
    lfs f12, 0x110(r17)
    fsubs f24, f4, f7
    lfs f3, 0x210(r18)
    lfs f5, 0x210(r19)
    lfs f4, 0x20c(r18)
    fmuls f13, f23, f12
    fsubs f22, f3, f5
    lfs f3, 0x20c(r19)
    fmuls f21, f24, f12
    stfs f0, 0x12c(r1)
    fsubs f0, f4, f3
    fmuls f4, f22, f12
    stfs f9, 0x230(r1)
    stfs f10, 0x234(r1)
    stfs f11, 0x238(r1)
    stfs f8, 0x23c(r1)
    stfs f0, 0x110(r1)
    stfs f22, 0x114(r1)
    stfs f23, 0x118(r1)
    stfs f24, 0x11c(r1)
    fmuls f0, f0, f12
    stfs f4, 0x104(r1)
    fadds f9, f13, f6
    fadds f8, f4, f5
    stfs f0, 0x100(r1)
    fadds f6, f0, f3
    fadds f7, f21, f7
    stfs f13, 0x108(r1)
    stfs f6, 0x20c(r20)
    stfs f8, 0x210(r20)
    stfs f9, 0x214(r20)
    stfs f7, 0x218(r20)
    lfs f5, 0x220(r18)
    lfs f4, 0x220(r19)
    lfs f3, 0x21c(r18)
    fsubs f13, f5, f4
    lfs f0, 0x21c(r19)
    lfs f10, 0x110(r17)
    fsubs f12, f3, f0
    lfs f5, 0x224(r18)
    fmuls f11, f13, f10
    lfs f3, 0x224(r19)
    stfs f21, 0x10c(r1)
    fsubs f21, f5, f3
    fmuls f5, f12, f10
    stfs f6, 0x220(r1)
    fadds f4, f11, f4
    fmuls f6, f21, f10
    stfs f8, 0x224(r1)
    fadds f0, f5, f0
    stfs f4, 0x214(r1)
    fadds f2, f6, f3
    stfs f0, 0x210(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x21c(r20), 0, 0
    stfs f2, 0x224(r20)
    lfs f0, 0x228(r18)
    lfs f3, 0x228(r19)
    lfs f4, 0x110(r17)
    fsubs f0, f0, f3
    stfs f9, 0x228(r1)
    stfs f7, 0x22c(r1)
    fmadds f0, f4, f0, f3
    stfs f12, 0xf4(r1)
    stfs f0, 0x228(r20)
    lwz r0, 0x88(r18)
    stw r0, 0x88(r20)
    lfs f0, 0x8c(r18)
    stfs f0, 0x8c(r20)
    lfs f0, 0x90(r18)
    stfs f0, 0x90(r20)
    lwz r0, 0x98(r18)
    lwz r3, 0x94(r18)
    stw r3, 0x94(r20)
    stw r0, 0x98(r20)
    lwz r0, 0xa0(r18)
    lwz r3, 0x9c(r18)
    stw r3, 0x9c(r20)
    stfs f13, 0xf8(r1)
    stfs f21, 0xfc(r1)
    stfs f5, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f6, 0xf0(r1)
    stfs f2, 0x218(r1)
    stw r0, 0xa0(r20)
    lfs f0, 0x8c(r18)
    li r3, 0x0
    lfs f3, 0x8c(r19)
    lfs f4, 0x110(r17)
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x8c(r20)
    lfs f0, 0x90(r18)
    lfs f3, 0x90(r19)
    lfs f4, 0x110(r17)
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x90(r20)
    lfs f3, 0x94(r18)
    lfs f0, 0x94(r19)
    lfs f4, 0x98(r18)
    fsubs f10, f3, f0
    lfs f3, 0x98(r19)
    lfs f7, 0x110(r17)
    fsubs f11, f4, f3
    lfs f5, 0x9c(r18)
    fmuls f8, f10, f7
    lfs f4, 0x9c(r19)
    fmuls f9, f11, f7
    lfs f6, 0xa0(r18)
    fsubs f12, f5, f4
    lfs f5, 0xa0(r19)
    fadds f0, f8, f0
    stfs f10, 0xd8(r1)
    fsubs f10, f6, f5
    stfs f0, 0x94(r20)
    fmuls f6, f12, f7
    fadds f3, f9, f3
    stfs f11, 0xdc(r1)
    fmuls f7, f10, f7
    fadds f4, f6, f4
    stfs f3, 0x98(r20)
    fadds f5, f7, f5
    stfs f4, 0x9c(r20)
    stfs f12, 0xe0(r1)
    stfs f10, 0xe4(r1)
    stfs f8, 0xc8(r1)
    stfs f9, 0xcc(r1)
    stfs f6, 0xd0(r1)
    stfs f7, 0xd4(r1)
    stfs f0, 0x200(r1)
    stfs f3, 0x204(r1)
    stfs f4, 0x208(r1)
    stfs f5, 0x20c(r1)
    stfs f5, 0xa0(r20)
    mtctr r14
lbl_fn_804A0F80_00001108:
    lwz r0, 0x2ac(r18)
    lfs f7, 0x110(r17)
    cmpwi r0, 0x0
    beq lbl_fn_804A0F80_00001120
    addi r4, r18, 0x2b0
    b lbl_fn_804A0F80_00001128
lbl_fn_804A0F80_00001120:
    lwz r4, lbl_8087EFA8
    addi r4, r4, 0x324
lbl_fn_804A0F80_00001128:
    lwz r0, 0x2ac(r19)
    add r5, r4, r3
    cmpwi r0, 0x0
    beq lbl_fn_804A0F80_00001140
    addi r0, r19, 0x2b0
    b lbl_fn_804A0F80_00001148
lbl_fn_804A0F80_00001140:
    lwz r4, lbl_8087EFA8
    addi r0, r4, 0x324
lbl_fn_804A0F80_00001148:
    add r4, r0, r3
    lwz r0, 0x2ac(r20)
    lfs f0, 0x10(r5)
    lfs f6, 0x10(r4)
    cmpwi r0, 0x0
    lfs f4, 0x8(r4)
    fsubs f21, f0, f6
    lfs f0, 0x8(r5)
    lfs f3, 0xc(r5)
    fsubs f12, f0, f4
    lfs f5, 0xc(r4)
    lfs f0, 0x4(r4)
    fsubs f13, f3, f5
    lfs f3, 0x4(r5)
    fmuls f8, f12, f7
    fsubs f11, f3, f0
    stfs f12, 0xbc(r1)
    fmuls f10, f21, f7
    fmuls f9, f13, f7
    stfs f11, 0xb8(r1)
    fadds f3, f8, f4
    fmuls f4, f11, f7
    stfs f13, 0xc0(r1)
    fadds f6, f10, f6
    fadds f5, f9, f5
    stfs f21, 0xc4(r1)
    fadds f0, f4, f0
    stfs f4, 0xa8(r1)
    stfs f8, 0xac(r1)
    stfs f9, 0xb0(r1)
    stfs f10, 0xb4(r1)
    stfs f0, 0x1f0(r1)
    stfs f3, 0x1f4(r1)
    stfs f5, 0x1f8(r1)
    stfs f6, 0x1fc(r1)
    beq lbl_fn_804A0F80_000011E0
    addi r0, r20, 0x2b0
    b lbl_fn_804A0F80_000011E8
lbl_fn_804A0F80_000011E0:
    lwz r4, lbl_8087EFA8
    addi r0, r4, 0x324
lbl_fn_804A0F80_000011E8:
    add r4, r0, r3
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    addi r3, r3, 0x10
    psq_l f2, 0x8(r23), 0, 0
    psq_st f2, 0xc(r4), 0, 0
    bdnz lbl_fn_804A0F80_00001108
    lwz r0, 0x230(r18)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_804A0F80_00001220
    lwz r0, 0x230(r19)
    cmpwi r0, 0x0
    beq lbl_fn_804A0F80_00001224
lbl_fn_804A0F80_00001220:
    li r3, 0x1
lbl_fn_804A0F80_00001224:
    stw r3, 0x230(r20)
    li r3, 0x0
    lfs f0, 0x23c(r18)
    lfs f3, 0x23c(r19)
    lfs f4, 0x110(r17)
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x23c(r20)
    lfs f0, 0x238(r18)
    lfs f3, 0x238(r19)
    lfs f4, 0x110(r17)
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x238(r20)
    lwz r0, 0x244(r18)
    cmpwi r0, 0x0
    bne lbl_fn_804A0F80_00001274
    lwz r0, 0x244(r19)
    cmpwi r0, 0x0
    beq lbl_fn_804A0F80_00001278
lbl_fn_804A0F80_00001274:
    li r3, 0x1
lbl_fn_804A0F80_00001278:
    stw r3, 0x244(r20)
    lfs f0, 0x24c(r18)
    lfs f3, 0x24c(r19)
    lfs f4, 0x110(r17)
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x24c(r20)
    lfs f5, 0x254(r18)
    lfs f4, 0x254(r19)
    lfs f3, 0x250(r18)
    fsubs f6, f5, f4
    lfs f0, 0x250(r19)
    lfs f5, 0x110(r17)
    fsubs f3, f3, f0
    stfs f6, 0x44(r1)
    fmuls f7, f6, f5
    stfs f3, 0x40(r1)
    fmuls f6, f3, f5
    fadds f3, f7, f4
    stfs f7, 0x3c(r1)
    fadds f0, f6, f0
    stfs f3, 0x64(r1)
    stfs f0, 0x60(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x250(r20), 0, 0
    lfs f5, 0x25c(r18)
    lfs f4, 0x25c(r19)
    lfs f3, 0x258(r18)
    fsubs f8, f5, f4
    lfs f0, 0x258(r19)
    lfs f5, 0x110(r17)
    fsubs f3, f3, f0
    stfs f6, 0x38(r1)
    fmuls f7, f8, f5
    stfs f3, 0x30(r1)
    fmuls f6, f3, f5
    fadds f3, f7, f4
    stfs f8, 0x34(r1)
    fadds f0, f6, f0
    stfs f3, 0x5c(r1)
    stfs f0, 0x58(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x258(r20), 0, 0
    lfs f5, 0x264(r18)
    lfs f4, 0x264(r19)
    lfs f3, 0x260(r18)
    fsubs f9, f5, f4
    lfs f0, 0x260(r19)
    lfs f5, 0x110(r17)
    fsubs f8, f3, f0
    stfs f6, 0x28(r1)
    fmuls f6, f9, f5
    stfs f8, 0x20(r1)
    fmuls f5, f8, f5
    fadds f3, f6, f4
    stfs f7, 0x2c(r1)
    fadds f0, f5, f0
    stfs f3, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x260(r20), 0, 0
    lfs f0, 0x26c(r18)
    lfs f4, 0x26c(r19)
    stfs f9, 0x24(r1)
    fsubs f8, f0, f4
    lfs f7, 0x110(r17)
    stfs f5, 0x18(r1)
    stfs f6, 0x1c(r1)
    lfs f3, 0x268(r18)
    fmuls f5, f8, f7
    lfs f0, 0x268(r19)
    li r7, 0x0
    stfs f5, 0xc(r1)
    li r6, 0x0
    fsubs f6, f3, f0
    fadds f3, f5, f4
    stfs f8, 0x14(r1)
    fmuls f4, f6, f7
    stfs f3, 0x4c(r1)
    stfs f6, 0x10(r1)
    fadds f0, f4, f0
    stfs f4, 0x8(r1)
    stfs f0, 0x48(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x268(r20), 0, 0
    lfs f3, 0x270(r18)
    lfs f0, 0x270(r19)
    lfs f5, 0x274(r18)
    fsubs f10, f3, f0
    lfs f4, 0x274(r19)
    lfs f7, 0x110(r17)
    fsubs f11, f5, f4
    lfs f3, 0x27c(r18)
    fmuls f8, f10, f7
    lfs f6, 0x27c(r19)
    fmuls f9, f11, f7
    lfs f5, 0x278(r18)
    fsubs f13, f3, f6
    lfs f3, 0x278(r19)
    stfs f10, 0x98(r1)
    fadds f0, f8, f0
    fsubs f12, f5, f3
    stfs f0, 0x1e0(r1)
    fmuls f10, f13, f7
    fadds f4, f9, f4
    stfs f11, 0x9c(r1)
    fmuls f5, f12, f7
    stfs f4, 0x1e4(r1)
    fadds f4, f10, f6
    fadds f0, f5, f3
    psq_l f1, 0x0(r24), 0, 0
    stfs f4, 0x1ec(r1)
    stfs f0, 0x1e8(r1)
    psq_st f1, 0x270(r20), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    stfs f12, 0xa0(r1)
    stfs f13, 0xa4(r1)
    stfs f8, 0x88(r1)
    stfs f9, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f10, 0x94(r1)
    psq_st f2, 0x278(r20), 0, 0
    b lbl_fn_804A0F80_00001518
lbl_fn_804A0F80_00001464:
    lwz r0, 0x308(r18)
    addi r7, r7, 0x1
    lwz r3, 0x308(r19)
    add r4, r0, r6
    lwz r0, 0x308(r20)
    add r3, r3, r6
    lfs f3, 0x4(r4)
    lfs f0, 0x4(r3)
    add r5, r0, r6
    lfs f4, 0x8(r4)
    addi r6, r6, 0x14
    fsubs f10, f3, f0
    lfs f3, 0x8(r3)
    lfs f7, 0x110(r17)
    fsubs f11, f4, f3
    lfs f5, 0xc(r4)
    fmuls f8, f10, f7
    lfs f4, 0xc(r3)
    fmuls f9, f11, f7
    lfs f6, 0x10(r4)
    fsubs f12, f5, f4
    lfs f5, 0x10(r3)
    fadds f0, f8, f0
    stfs f10, 0x78(r1)
    fsubs f10, f6, f5
    stfs f0, 0x4(r5)
    fmuls f6, f12, f7
    fadds f3, f9, f3
    stfs f11, 0x7c(r1)
    fmuls f7, f10, f7
    fadds f4, f6, f4
    stfs f3, 0x8(r5)
    fadds f5, f7, f5
    stfs f4, 0xc(r5)
    stfs f12, 0x80(r1)
    stfs f10, 0x84(r1)
    stfs f8, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f7, 0x74(r1)
    stfs f0, 0x1d0(r1)
    stfs f3, 0x1d4(r1)
    stfs f4, 0x1d8(r1)
    stfs f5, 0x1dc(r1)
    stfs f5, 0x10(r5)
lbl_fn_804A0F80_00001518:
    lwz r0, 0x30c(r20)
    cmplw r7, r0
    blt lbl_fn_804A0F80_00001464
    addi r21, r21, 0x1
    addi r16, r16, 0x4
lbl_fn_804A0F80_0000152C:
    lwz r0, 0x5c(r22)
    cmplw r21, r0
    blt lbl_fn_804A0F80_00000A4C
    lfs f3, 0x110(r17)
    lfs f0, 0x114(r17)
    fadds f0, f3, f0
    stfs f0, 0x110(r17)
lbl_fn_804A0F80_00001548:
    mr r3, r17
    bl fn_8049E480
lbl_fn_804A0F80_00001550:
    lwz r14, 0xc4(r17)
    li r16, 0x0
    li r15, 0x0
    b lbl_fn_804A0F80_000015BC
lbl_fn_804A0F80_00001560:
    lwz r4, 0x10c(r17)
    lwz r0, 0x108(r17)
    lwz r3, 0x58(r14)
    slwi r4, r4, 2
    add r5, r17, r4
    slwi r0, r0, 2
    lwzx r3, r3, r15
    add r4, r17, r0
    lwz r5, 0xa4(r5)
    lwz r4, 0xa4(r4)
    lwz r3, 0x304(r3)
    lwz r5, 0x58(r5)
    lwz r4, 0x58(r4)
    cmpwi r3, 0x0
    lwzx r5, r5, r15
    lwzx r6, r4, r15
    beq lbl_fn_804A0F80_000015B4
    lwz r4, 0x304(r5)
    lwz r5, 0x304(r6)
    lfs f1, 0x110(r17)
    bl fn_8049D1A4
lbl_fn_804A0F80_000015B4:
    addi r15, r15, 0x4
    addi r16, r16, 0x1
lbl_fn_804A0F80_000015BC:
    lwz r0, 0x5c(r14)
    cmplw r16, r0
    blt lbl_fn_804A0F80_00001560
lbl_fn_804A0F80_000015C8:
    addi r11, r1, 0x2e0
    psq_l f31, 0x388(r1), 0, 0
    lfd f31, 0x380(r1)
    psq_l f30, 0x378(r1), 0, 0
    lfd f30, 0x370(r1)
    psq_l f29, 0x368(r1), 0, 0
    lfd f29, 0x360(r1)
    psq_l f28, 0x358(r1), 0, 0
    lfd f28, 0x350(r1)
    psq_l f27, 0x348(r1), 0, 0
    lfd f27, 0x340(r1)
    psq_l f26, 0x338(r1), 0, 0
    lfd f26, 0x330(r1)
    psq_l f25, 0x328(r1), 0, 0
    lfd f25, 0x320(r1)
    psq_l f24, 0x318(r1), 0, 0
    lfd f24, 0x310(r1)
    psq_l f23, 0x308(r1), 0, 0
    lfd f23, 0x300(r1)
    psq_l f22, 0x2f8(r1), 0, 0
    lfd f22, 0x2f0(r1)
    psq_l f21, 0x2e8(r1), 0, 0
    lfd f21, 0x2e0(r1)
    bl _restgpr_14
    lwz r0, 0x394(r1)
    mtlr r0
    addi r1, r1, 0x390
    blr
}

asm void fn_804A1C4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_804A1C4C_00001700
    mr r3, r0
    li r4, 0x387
    bl fn_80370174
    mr r31, r3
    lwz r3, lbl_8087F430
    li r4, 0x388
    bl fn_80370174
    srwi r4, r3, 16
    clrlwi r0, r3, 16
    lis r3, 0x4330
    stw r3, 0x8(r1)
    xoris r4, r4, 0x8000
    xoris r0, r0, 0x8000
    stw r4, 0xc(r1)
    lis r4, lbl_80756EB8@ha
    lfd f3, lbl_80756EB8@l(r4)
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f2, f0, f3
    lfs f1, lbl_808871A8
    stw r3, 0x10(r1)
    lwz r0, 0xa0(r30)
    lfd f0, 0x10(r1)
    fdivs f2, f2, f1
    cmpw r31, r0
    fsubs f0, f0, f3
    fdivs f0, f0, f1
    bge lbl_fn_804A1C4C_000016E8
    lwz r0, 0x108(r30)
    mr r3, r30
    stw r0, 0x10c(r30)
    stw r31, 0x108(r30)
    stfs f2, 0x110(r30)
    stfs f0, 0x114(r30)
    bl fn_804A0F80
lbl_fn_804A1C4C_000016E8:
    lwz r3, lbl_8087F430
    li r4, 0x38b
    bl fn_80370174
    lwz r4, lbl_8087EFB4
    lwz r4, 0x10(r4)
    stw r3, 0x4(r4)
lbl_fn_804A1C4C_00001700:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A1D2C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, lbl_8087F430
    cmpwi r31, 0x0
    beq lbl_fn_804A1D2C_000017B0
    lfs f1, lbl_808871A8
    lfs f0, 0x110(r3)
    fmuls f1, f1, f0
    bl fn_80695D84
    lfs f1, lbl_808871A8
    slwi r7, r3, 16
    lfs f0, 0x114(r30)
    mr r3, r31
    lwz r5, 0x108(r30)
    li r4, 0x387
    fmuls f0, f1, f0
    li r6, 0x0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    or r31, r7, r0
    bl fn_80370320
    lwz r3, lbl_8087F430
    mr r5, r31
    li r4, 0x388
    li r6, 0x0
    bl fn_80370320
    lwz r5, lbl_8087EFB4
    li r4, 0x38b
    lwz r3, lbl_8087F430
    li r6, 0x0
    lwz r5, 0x10(r5)
    lwz r5, 0x4(r5)
    bl fn_80370320
lbl_fn_804A1D2C_000017B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A1DDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F578
    cmpwi r0, 0x0
    bne lbl_fn_804A1DDC_00001818
    lis r5, lbl_807570D4@ha
    li r3, 0x248
    addi r5, r5, lbl_807570D4@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804A1DDC_00001814
    mr r4, r31
    bl fn_804A1E44
lbl_fn_804A1DDC_00001814:
    stw r3, lbl_8087F578
lbl_fn_804A1DDC_00001818:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F578
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A1E44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r31, r3
    bl fn_800D1D3C
    addi r6, r31, 0x6c
    addi r7, r31, 0x23c
    lfs f0, lbl_808871B0
    lis r5, lbl_80790778@ha
    li r4, 0x0
    li r3, 0x1518
    addi r5, r5, lbl_80790778@l
    li r0, 0x4269
    cmplw r6, r7
    stw r5, 0x0(r31)
    stw r4, 0x48(r31)
    stw r3, 0x4c(r31)
    stfs f0, 0x50(r31)
    stw r0, 0x54(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
    stw r4, 0x64(r31)
    stw r4, 0x68(r31)
    bge lbl_fn_804A1E44_000019A4
    addi r0, r31, 0x6c
    subi r4, r7, 0x80
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_804A1E44_000018B8
    li r3, 0x1
lbl_fn_804A1E44_000018B8:
    cmpwi r3, 0x0
    beq lbl_fn_804A1E44_000018C4
    li r0, 0x1
lbl_fn_804A1E44_000018C4:
    cmpwi r0, 0x0
    beq lbl_fn_804A1E44_00001970
    addi r0, r4, 0x7f
    li r3, 0x0
    subf r0, r6, r0
    srwi r0, r0, 7
    mtctr r0
    cmplw r6, r4
    bge lbl_fn_804A1E44_00001970
lbl_fn_804A1E44_000018E8:
    stw r3, 0x0(r6)
    stw r3, 0x4(r6)
    stw r3, 0x8(r6)
    stw r3, 0xc(r6)
    stw r3, 0x10(r6)
    stw r3, 0x14(r6)
    stw r3, 0x18(r6)
    stw r3, 0x1c(r6)
    stw r3, 0x20(r6)
    stw r3, 0x24(r6)
    stw r3, 0x28(r6)
    stw r3, 0x2c(r6)
    stw r3, 0x30(r6)
    stw r3, 0x34(r6)
    stw r3, 0x38(r6)
    stw r3, 0x3c(r6)
    stw r3, 0x40(r6)
    stw r3, 0x44(r6)
    stw r3, 0x48(r6)
    stw r3, 0x4c(r6)
    stw r3, 0x50(r6)
    stw r3, 0x54(r6)
    stw r3, 0x58(r6)
    stw r3, 0x5c(r6)
    stw r3, 0x60(r6)
    stw r3, 0x64(r6)
    stw r3, 0x68(r6)
    stw r3, 0x6c(r6)
    stw r3, 0x70(r6)
    stw r3, 0x74(r6)
    stw r3, 0x78(r6)
    stw r3, 0x7c(r6)
    addi r6, r6, 0x80
    bdnz lbl_fn_804A1E44_000018E8
lbl_fn_804A1E44_00001970:
    addi r0, r7, 0xf
    li r3, 0x0
    subf r0, r6, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r6, r7
    bge lbl_fn_804A1E44_000019A4
lbl_fn_804A1E44_0000198C:
    stw r3, 0x0(r6)
    stw r3, 0x4(r6)
    stw r3, 0x8(r6)
    stw r3, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_804A1E44_0000198C
lbl_fn_804A1E44_000019A4:
    addi r3, r31, 0x23c
    bl fn_800CB360
    li r0, 0x0
    stw r0, 0x240(r31)
    li r30, 0xfb
    li r29, 0x15e
    stw r0, 0x244(r31)
    li r28, 0x1d6
    li r27, 0x0
    b lbl_fn_804A1E44_00001A3C
lbl_fn_804A1E44_000019CC:
    lwz r0, 0x58(r31)
    cmplwi r0, 0x1e
    bge lbl_fn_804A1E44_00001A48
    mr r3, r27
    bl fn_802114E0
    lha r0, 0xbc(r3)
    cmpwi r0, 0x9
    bne lbl_fn_804A1E44_00001A38
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804A1E44_00001A38
    lwz r0, 0x58(r31)
    lwz r3, 0x4(r3)
    slwi r0, r0, 4
    add r0, r31, r0
    addic. r4, r0, 0x5c
    beq lbl_fn_804A1E44_00001A20
    stw r3, 0x0(r4)
    stw r30, 0x4(r4)
    stw r29, 0x8(r4)
    stw r28, 0xc(r4)
lbl_fn_804A1E44_00001A20:
    lwz r3, 0x58(r31)
    addi r30, r30, 0x1
    addi r29, r29, 0x1
    addi r28, r28, 0x1
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_804A1E44_00001A38:
    addi r27, r27, 0x1
lbl_fn_804A1E44_00001A3C:
    bl fn_802114D8
    cmpw r27, r3
    blt lbl_fn_804A1E44_000019CC
lbl_fn_804A1E44_00001A48:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
