#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800844D8(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80760FC0[];
extern u8 lbl_80775A48[];
extern u8 lbl_80782F10[];
extern u8 lbl_80782F38[];
extern u8 lbl_80794458[];
extern u8 lbl_807944D4[];
extern u8 lbl_807944F0[];
extern u8 lbl_8079450C[];

/* Small data declarations */
extern u32 lbl_8087F9B8;
extern u32 lbl_80888088;
extern u32 lbl_80888090;

/* Function declarations */
void fn_80577CC4(void);
void fn_80577E00(void);
void fn_80578410(void);
void fn_8057854C(void);
void fn_80578CE0(void);
void fn_80578E1C(void);
void fn_80578F58(void);
void fn_80579684(void);

asm void fn_80577CC4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    addi r30, r1, 0x18
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r5
    mr r3, r28
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087F9B8
    lwz r7, 0x30(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_80577CC4_000000AC
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80577CC4_000000AC
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_80577CC4_00000104
lbl_fn_80577CC4_000000AC:
    cmpwi r4, 0x0
    beq lbl_fn_80577CC4_000000BC
    lwz r5, 0xc(r7)
    b lbl_fn_80577CC4_000000C4
lbl_fn_80577CC4_000000BC:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_80577CC4_000000C4:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80577CC4_000000E0
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_80577CC4_000000E8
lbl_fn_80577CC4_000000E0:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80577CC4_000000E8:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80577CC4_00000104:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80577CC4_00000118
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_80577CC4_00000118:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80577E00(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    mr r4, r5
    li r5, 0x4
    stw r0, 0x94(r1)
    addi r3, r1, 0x34
    stmw r24, 0x70(r1)
    lwz r6, lbl_8087F9B8
    lwz r27, 0x10(r6)
    bl memcpy
    lwz r0, 0xf0(r27)
    lis r28, lbl_80760FC0@ha
    addi r28, r28, lbl_80760FC0@l
    lis r26, lbl_80775A48@ha
    li r25, 0x0
    stw r0, 0x3c(r1)
    addi r29, r28, 0x33
    addi r26, r26, lbl_80775A48@l
    stw r26, 0x38(r1)
    mr r3, r29
    lwz r30, 0x34(r1)
    addi r31, r1, 0x40
    stw r25, 0x40(r1)
    stw r25, 0x44(r1)
    stw r25, 0x48(r1)
    bl strlen
    mr r24, r3
    mr r3, r31
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r31
    stb r0, 0xc(r1)
    mr r6, r29
    add r7, r29, r24
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_80782F10@ha
    stw r30, 0x4c(r1)
    addi r3, r3, lbl_80782F10@l
    stw r3, 0x38(r1)
    stw r25, 0x54(r1)
    stw r25, 0x50(r1)
    lwz r0, 0xe8(r27)
    lwz r4, 0xec(r27)
    cmplw r0, r4
    bge lbl_fn_80577E00_000002B4
    lwz r3, 0xe4(r27)
    slwi r0, r0, 5
    add. r28, r3, r0
    beq lbl_fn_80577E00_000002A4
    stw r26, 0x0(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r28)
    lwz r3, 0x40(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80577E00_00000240
    lwz r0, 0x44(r1)
    stw r3, 0x8(r28)
    stw r0, 0xc(r28)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r28)
    b lbl_fn_80577E00_00000280
lbl_fn_80577E00_00000240:
    stw r25, 0x8(r28)
    addi r3, r28, 0x8
    stw r25, 0xc(r28)
    stw r25, 0x10(r28)
    lwz r4, 0x44(r1)
    bl fn_80013DC4
    lbz r5, 0x20(r1)
    addi r3, r28, 0x8
    stb r5, 0x24(r1)
    addi r8, r1, 0x24
    lwz r6, 0x48(r1)
    li r4, 0x0
    lwz r0, 0x44(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80577E00_00000280:
    lwz r0, 0x4c(r1)
    lis r3, lbl_80782F10@ha
    stw r0, 0x14(r28)
    addi r3, r3, lbl_80782F10@l
    stw r3, 0x0(r28)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r28)
    lwz r0, 0x54(r1)
    stw r0, 0x1c(r28)
lbl_fn_80577E00_000002A4:
    lwz r3, 0xe8(r27)
    addi r0, r3, 0x1
    stw r0, 0xe8(r27)
    b lbl_fn_80577E00_000006F4
lbl_fn_80577E00_000002B4:
    lis r3, 0x800
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80577E00_000002E4
    lis r3, __files@ha
    addi r4, r28, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80577E00_000002E4:
    li r5, 0x0
    addi r4, r27, 0xec
    lis r3, 0x800
    stw r5, 0x58(r1)
    subi r0, r3, 0x1
    stw r5, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r5, 0x68(r1)
    lwz r3, 0xe8(r27)
    lwz r4, 0xec(r27)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x28(r1)
    lwz r29, 0xec(r27)
    subf r0, r29, r0
    cmplw r3, r0
    ble lbl_fn_80577E00_00000350
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80577E00_00000350:
    lis r3, 0x2ab
    subi r0, r3, 0x5556
    cmplw r29, r0
    bge lbl_fn_80577E00_000003A0
    addi r5, r29, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x28(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x30
    srwi r4, r4, 2
    stw r4, 0x30(r1)
    cmplw r4, r0
    bge lbl_fn_80577E00_00000394
    addi r3, r1, 0x28
lbl_fn_80577E00_00000394:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_80577E00_000003E4
lbl_fn_80577E00_000003A0:
    lis r3, 0x555
    addi r0, r3, 0x5554
    cmplw r29, r0
    bge lbl_fn_80577E00_000003DC
    addi r3, r29, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_80577E00_000003D0
    addi r3, r1, 0x28
lbl_fn_80577E00_000003D0:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_80577E00_000003E4
lbl_fn_80577E00_000003DC:
    lis r3, 0x800
    subi r28, r3, 0x1
lbl_fn_80577E00_000003E4:
    lis r3, 0x800
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_80577E00_00000418
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80577E00_00000418:
    slwi r3, r28, 5
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80577E00_0000044C
    lis r3, __files@ha
    lis r4, lbl_807944D4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807944D4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80577E00_0000044C:
    stw r26, 0x58(r1)
    lis r3, lbl_80775A48@ha
    lwz r0, 0x5c(r1)
    lis r25, lbl_80782F10@ha
    stw r28, 0x60(r1)
    addi r3, r3, lbl_80775A48@l
    slwi r5, r0, 5
    addi r25, r25, lbl_80782F10@l
    lwz r4, 0xe8(r27)
    li r0, 0x0
    stw r4, 0x68(r1)
    slwi r4, r4, 5
    add r4, r26, r4
    add. r26, r5, r4
    beq lbl_fn_80577E00_00000514
    stw r3, 0x0(r26)
    lwz r3, 0x3c(r1)
    stw r3, 0x4(r26)
    lwz r4, 0x40(r1)
    srwi. r3, r4, 31
    bne lbl_fn_80577E00_000004B8
    lwz r0, 0x44(r1)
    stw r4, 0x8(r26)
    stw r0, 0xc(r26)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r26)
    b lbl_fn_80577E00_000004F8
lbl_fn_80577E00_000004B8:
    stw r0, 0x8(r26)
    addi r3, r26, 0x8
    stw r0, 0xc(r26)
    stw r0, 0x10(r26)
    lwz r4, 0x44(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    addi r3, r26, 0x8
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0x48(r1)
    li r4, 0x0
    lwz r0, 0x44(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80577E00_000004F8:
    lwz r0, 0x4c(r1)
    stw r0, 0x14(r26)
    stw r25, 0x0(r26)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r26)
    lwz r0, 0x54(r1)
    stw r0, 0x1c(r26)
lbl_fn_80577E00_00000514:
    lwz r3, 0x5c(r1)
    lis r31, lbl_80775A48@ha
    lwz r0, 0x68(r1)
    lis r26, lbl_80782F10@ha
    addi r3, r3, 0x1
    stw r3, 0x5c(r1)
    lwz r3, 0x58(r1)
    slwi r0, r0, 5
    lwz r4, 0xe8(r27)
    addi r31, r31, lbl_80775A48@l
    lwz r28, 0xe4(r27)
    add r29, r3, r0
    slwi r0, r4, 5
    addi r26, r26, lbl_80782F10@l
    add r30, r28, r0
    li r25, 0x0
    b lbl_fn_80577E00_00000608
lbl_fn_80577E00_00000558:
    subic. r29, r29, 0x20
    subi r30, r30, 0x20
    beq lbl_fn_80577E00_000005F0
    stw r31, 0x0(r29)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lwz r3, 0x8(r30)
    srwi. r0, r3, 31
    bne lbl_fn_80577E00_00000594
    lwz r0, 0xc(r30)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
    b lbl_fn_80577E00_000005D4
lbl_fn_80577E00_00000594:
    stw r25, 0x8(r29)
    addi r3, r29, 0x8
    stw r25, 0xc(r29)
    stw r25, 0x10(r29)
    lwz r4, 0xc(r30)
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    addi r3, r29, 0x8
    stb r0, 0x18(r1)
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x10(r30)
    lwz r0, 0xc(r30)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80577E00_000005D4:
    lwz r0, 0x14(r30)
    stw r0, 0x14(r29)
    stw r26, 0x0(r29)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r29)
    lwz r0, 0x1c(r30)
    stw r0, 0x1c(r29)
lbl_fn_80577E00_000005F0:
    lwz r4, 0x68(r1)
    lwz r3, 0x5c(r1)
    subi r0, r4, 0x1
    stw r0, 0x68(r1)
    addi r0, r3, 0x1
    stw r0, 0x5c(r1)
lbl_fn_80577E00_00000608:
    cmplw r30, r28
    bgt lbl_fn_80577E00_00000558
    lwz r3, 0xec(r27)
    addi r28, r1, 0x58
    lwz r0, 0x60(r1)
    stw r0, 0xec(r27)
    stw r3, 0x60(r1)
    lwz r0, 0x58(r1)
    lwz r3, 0xe4(r27)
    stw r0, 0xe4(r27)
    stw r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    lwz r5, 0xe8(r27)
    stw r0, 0xe8(r27)
    slwi r0, r5, 5
    lwz r3, 0x68(r1)
    lwz r4, 0x58(r1)
    slwi r3, r3, 5
    stw r5, 0x5c(r1)
    add r25, r4, r3
    add r26, r25, r0
    b lbl_fn_80577E00_00000688
lbl_fn_80577E00_00000660:
    subic. r26, r26, 0x20
    beq lbl_fn_80577E00_00000688
    beq lbl_fn_80577E00_00000688
    addic. r0, r26, 0x8
    beq lbl_fn_80577E00_00000688
    lwz r0, 0x8(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80577E00_00000688
    lwz r3, 0x10(r26)
    bl dtor_80084684
lbl_fn_80577E00_00000688:
    cmplw r26, r25
    bgt lbl_fn_80577E00_00000660
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x5c(r1)
    beq lbl_fn_80577E00_000006F4
    lwz r25, 0x58(r1)
    cmpwi r25, 0x0
    beq lbl_fn_80577E00_000006F4
    li r26, 0x0
    stw r26, 0x5c(r1)
    b lbl_fn_80577E00_000006E4
lbl_fn_80577E00_000006B8:
    subic. r25, r25, 0x20
    beq lbl_fn_80577E00_000006E0
    beq lbl_fn_80577E00_000006E0
    addic. r0, r25, 0x8
    beq lbl_fn_80577E00_000006E0
    lwz r0, 0x8(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80577E00_000006E0
    lwz r3, 0x10(r25)
    bl dtor_80084684
lbl_fn_80577E00_000006E0:
    subi r26, r26, 0x1
lbl_fn_80577E00_000006E4:
    cmpwi r26, 0x0
    bne lbl_fn_80577E00_000006B8
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_80577E00_000006F4:
    addic. r0, r1, 0x38
    beq lbl_fn_80577E00_00000718
    addic. r0, r0, 0x8
    beq lbl_fn_80577E00_00000718
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80577E00_00000718
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_80577E00_00000718:
    lwz r4, 0xe8(r27)
    li r3, 0x4
    lwz r5, 0xe4(r27)
    subi r0, r4, 0x1
    lwz r4, lbl_8087F9B8
    slwi r0, r0, 5
    add r0, r5, r0
    stw r0, 0x34(r4)
    lmw r24, 0x70(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80578410(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    addi r30, r1, 0x18
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r5
    mr r3, r28
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087F9B8
    lwz r7, 0x34(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_80578410_000007F8
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80578410_000007F8
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_80578410_00000850
lbl_fn_80578410_000007F8:
    cmpwi r4, 0x0
    beq lbl_fn_80578410_00000808
    lwz r5, 0xc(r7)
    b lbl_fn_80578410_00000810
lbl_fn_80578410_00000808:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_80578410_00000810:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80578410_0000082C
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_80578410_00000834
lbl_fn_80578410_0000082C:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80578410_00000834:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80578410_00000850:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80578410_00000864
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_80578410_00000864:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8057854C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    mr r4, r5
    li r5, 0x4
    stw r0, 0xb4(r1)
    addi r3, r1, 0x4c
    stmw r24, 0x90(r1)
    lwz r6, lbl_8087F9B8
    lwz r25, 0x10(r6)
    bl memcpy
    lwz r0, 0x100(r25)
    lis r28, lbl_80760FC0@ha
    addi r28, r28, lbl_80760FC0@l
    lis r27, lbl_80775A48@ha
    li r26, 0x0
    stw r0, 0x6c(r1)
    addi r29, r28, 0x33
    addi r27, r27, lbl_80775A48@l
    stw r27, 0x68(r1)
    mr r3, r29
    lwz r30, 0x4c(r1)
    addi r31, r1, 0x70
    stw r26, 0x70(r1)
    stw r26, 0x74(r1)
    stw r26, 0x78(r1)
    bl strlen
    mr r24, r3
    mr r3, r31
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r31
    stb r0, 0xc(r1)
    mr r6, r29
    add r7, r29, r24
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_80782F38@ha
    stw r30, 0x7c(r1)
    addi r3, r3, lbl_80782F38@l
    stw r3, 0x68(r1)
    stw r26, 0x80(r1)
    stw r26, 0x84(r1)
    stw r26, 0x88(r1)
    stw r26, 0x8c(r1)
    lwz r0, 0xf8(r25)
    lwz r4, 0xfc(r25)
    cmplw r0, r4
    bge lbl_fn_8057854C_00000A68
    mulli r0, r0, 0x28
    lwz r3, 0xf4(r25)
    add. r29, r3, r0
    beq lbl_fn_8057854C_00000A58
    stw r27, 0x0(r29)
    lwz r0, 0x6c(r1)
    stw r0, 0x4(r29)
    lwz r3, 0x70(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057854C_00000994
    lwz r0, 0x74(r1)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x78(r1)
    stw r0, 0x10(r29)
    b lbl_fn_8057854C_000009D4
lbl_fn_8057854C_00000994:
    stw r26, 0x8(r29)
    addi r3, r29, 0x8
    stw r26, 0xc(r29)
    stw r26, 0x10(r29)
    lwz r4, 0x74(r1)
    bl fn_80013DC4
    lbz r5, 0x38(r1)
    addi r3, r29, 0x8
    stb r5, 0x3c(r1)
    addi r8, r1, 0x3c
    lwz r6, 0x78(r1)
    li r4, 0x0
    lwz r0, 0x74(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057854C_000009D4:
    lwz r0, 0x7c(r1)
    lis r3, lbl_80782F38@ha
    stw r0, 0x14(r29)
    addi r3, r3, lbl_80782F38@l
    stw r3, 0x0(r29)
    lwz r3, 0x80(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057854C_00000A0C
    lwz r0, 0x84(r1)
    stw r3, 0x18(r29)
    stw r0, 0x1c(r29)
    lwz r0, 0x88(r1)
    stw r0, 0x20(r29)
    b lbl_fn_8057854C_00000A50
lbl_fn_8057854C_00000A0C:
    li r0, 0x0
    stw r0, 0x18(r29)
    addi r3, r29, 0x18
    stw r0, 0x1c(r29)
    stw r0, 0x20(r29)
    lwz r4, 0x84(r1)
    bl fn_80013DC4
    lbz r5, 0x34(r1)
    addi r3, r29, 0x18
    stb r5, 0x30(r1)
    addi r8, r1, 0x30
    lwz r6, 0x88(r1)
    li r4, 0x0
    lwz r0, 0x84(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057854C_00000A50:
    lwz r0, 0x8c(r1)
    stw r0, 0x24(r29)
lbl_fn_8057854C_00000A58:
    lwz r3, 0xf8(r25)
    addi r0, r3, 0x1
    stw r0, 0xf8(r25)
    b lbl_fn_8057854C_00000FA4
lbl_fn_8057854C_00000A68:
    lis r3, 0x666
    addi r0, r3, 0x6666
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8057854C_00000A98
    lis r3, __files@ha
    addi r4, r28, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057854C_00000A98:
    lwz r4, 0xf8(r25)
    li r7, 0x0
    lwz r5, 0xfc(r25)
    addi r6, r25, 0xfc
    addi r0, r4, 0x1
    lis r3, 0x666
    subf r4, r5, r0
    stw r4, 0x40(r1)
    addi r0, r3, 0x6666
    lwz r27, 0xfc(r25)
    stw r7, 0x50(r1)
    subf r0, r27, r0
    cmplw r4, r0
    stw r7, 0x54(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r7, 0x60(r1)
    ble lbl_fn_8057854C_00000B04
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057854C_00000B04:
    lis r3, 0x222
    addi r0, r3, 0x2222
    cmplw r27, r0
    bge lbl_fn_8057854C_00000B54
    addi r5, r27, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x40(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x48
    srwi r4, r4, 2
    stw r4, 0x48(r1)
    cmplw r4, r0
    bge lbl_fn_8057854C_00000B48
    addi r3, r1, 0x40
lbl_fn_8057854C_00000B48:
    lwz r0, 0x0(r3)
    add r28, r27, r0
    b lbl_fn_8057854C_00000B98
lbl_fn_8057854C_00000B54:
    lis r3, 0x444
    addi r0, r3, 0x4444
    cmplw r27, r0
    bge lbl_fn_8057854C_00000B90
    addi r3, r27, 0x1
    lwz r0, 0x40(r1)
    srwi r3, r3, 1
    stw r3, 0x44(r1)
    cmplw r3, r0
    addi r3, r1, 0x44
    bge lbl_fn_8057854C_00000B84
    addi r3, r1, 0x40
lbl_fn_8057854C_00000B84:
    lwz r0, 0x0(r3)
    add r28, r27, r0
    b lbl_fn_8057854C_00000B98
lbl_fn_8057854C_00000B90:
    lis r3, 0x666
    addi r28, r3, 0x6666
lbl_fn_8057854C_00000B98:
    lis r3, 0x666
    addi r0, r3, 0x6666
    cmplw r28, r0
    ble lbl_fn_8057854C_00000BCC
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057854C_00000BCC:
    mulli r3, r28, 0x28
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8057854C_00000C00
    lis r3, __files@ha
    lis r4, lbl_807944F0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807944F0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057854C_00000C00:
    lwz r6, 0xf8(r25)
    lis r3, lbl_80775A48@ha
    lwz r0, 0x54(r1)
    lis r26, lbl_80782F38@ha
    mulli r5, r6, 0x28
    stw r28, 0x58(r1)
    addi r3, r3, lbl_80775A48@l
    stw r27, 0x50(r1)
    addi r26, r26, lbl_80782F38@l
    mulli r4, r0, 0x28
    add r0, r27, r5
    stw r6, 0x60(r1)
    li r28, 0x0
    add. r27, r4, r0
    beq lbl_fn_8057854C_00000D24
    stw r3, 0x0(r27)
    lwz r0, 0x6c(r1)
    stw r0, 0x4(r27)
    lwz r3, 0x70(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057854C_00000C6C
    lwz r0, 0x74(r1)
    stw r3, 0x8(r27)
    stw r0, 0xc(r27)
    lwz r0, 0x78(r1)
    stw r0, 0x10(r27)
    b lbl_fn_8057854C_00000CAC
lbl_fn_8057854C_00000C6C:
    stw r28, 0x8(r27)
    addi r3, r27, 0x8
    stw r28, 0xc(r27)
    stw r28, 0x10(r27)
    lwz r4, 0x74(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    addi r3, r27, 0x8
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0x78(r1)
    li r4, 0x0
    lwz r0, 0x74(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057854C_00000CAC:
    lwz r0, 0x7c(r1)
    stw r0, 0x14(r27)
    stw r26, 0x0(r27)
    lwz r3, 0x80(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057854C_00000CDC
    lwz r0, 0x84(r1)
    stw r3, 0x18(r27)
    stw r0, 0x1c(r27)
    lwz r0, 0x88(r1)
    stw r0, 0x20(r27)
    b lbl_fn_8057854C_00000D1C
lbl_fn_8057854C_00000CDC:
    stw r28, 0x18(r27)
    addi r3, r27, 0x18
    stw r28, 0x1c(r27)
    stw r28, 0x20(r27)
    lwz r4, 0x84(r1)
    bl fn_80013DC4
    lbz r5, 0x18(r1)
    addi r3, r27, 0x18
    stb r5, 0x1c(r1)
    addi r8, r1, 0x1c
    lwz r6, 0x88(r1)
    li r4, 0x0
    lwz r0, 0x84(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057854C_00000D1C:
    lwz r0, 0x8c(r1)
    stw r0, 0x24(r27)
lbl_fn_8057854C_00000D24:
    lwz r3, 0xf8(r25)
    lis r29, lbl_80775A48@ha
    lwz r0, 0x60(r1)
    lis r31, lbl_80782F38@ha
    lwz r5, 0x54(r1)
    mulli r4, r3, 0x28
    lwz r26, 0xf4(r25)
    addi r29, r29, lbl_80775A48@l
    addi r5, r5, 0x1
    lwz r3, 0x50(r1)
    mulli r0, r0, 0x28
    stw r5, 0x54(r1)
    add r28, r26, r4
    addi r31, r31, lbl_80782F38@l
    add r27, r3, r0
    li r30, 0x0
    b lbl_fn_8057854C_00000E74
lbl_fn_8057854C_00000D68:
    subic. r27, r27, 0x28
    subi r28, r28, 0x28
    beq lbl_fn_8057854C_00000E5C
    stw r29, 0x0(r27)
    lwz r0, 0x4(r28)
    stw r0, 0x4(r27)
    lwz r3, 0x8(r28)
    srwi. r0, r3, 31
    bne lbl_fn_8057854C_00000DA4
    lwz r0, 0xc(r28)
    stw r3, 0x8(r27)
    stw r0, 0xc(r27)
    lwz r0, 0x10(r28)
    stw r0, 0x10(r27)
    b lbl_fn_8057854C_00000DE4
lbl_fn_8057854C_00000DA4:
    stw r30, 0x8(r27)
    addi r3, r27, 0x8
    stw r30, 0xc(r27)
    stw r30, 0x10(r27)
    lwz r4, 0xc(r28)
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    addi r3, r27, 0x8
    stb r0, 0x20(r1)
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x10(r28)
    lwz r0, 0xc(r28)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057854C_00000DE4:
    lwz r0, 0x14(r28)
    stw r0, 0x14(r27)
    stw r31, 0x0(r27)
    lwz r3, 0x18(r28)
    srwi. r0, r3, 31
    bne lbl_fn_8057854C_00000E14
    lwz r0, 0x1c(r28)
    stw r3, 0x18(r27)
    stw r0, 0x1c(r27)
    lwz r0, 0x20(r28)
    stw r0, 0x20(r27)
    b lbl_fn_8057854C_00000E54
lbl_fn_8057854C_00000E14:
    stw r30, 0x18(r27)
    addi r3, r27, 0x18
    stw r30, 0x1c(r27)
    stw r30, 0x20(r27)
    lwz r4, 0x1c(r28)
    bl fn_80013DC4
    lbz r0, 0x28(r1)
    addi r3, r27, 0x18
    stb r0, 0x2c(r1)
    addi r8, r1, 0x2c
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x20(r28)
    lwz r0, 0x1c(r28)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057854C_00000E54:
    lwz r0, 0x24(r28)
    stw r0, 0x24(r27)
lbl_fn_8057854C_00000E5C:
    lwz r4, 0x60(r1)
    lwz r3, 0x54(r1)
    subi r0, r4, 0x1
    stw r0, 0x60(r1)
    addi r0, r3, 0x1
    stw r0, 0x54(r1)
lbl_fn_8057854C_00000E74:
    cmplw r28, r26
    bgt lbl_fn_8057854C_00000D68
    lwz r6, 0xfc(r25)
    addi r28, r1, 0x50
    lwz r0, 0x58(r1)
    stw r0, 0xfc(r25)
    lwz r0, 0x60(r1)
    lwz r5, 0xf4(r25)
    lwz r3, 0x50(r1)
    mulli r0, r0, 0x28
    stw r3, 0xf4(r25)
    lwz r3, 0x54(r1)
    lwz r4, 0xf8(r25)
    add r26, r5, r0
    stw r6, 0x58(r1)
    mulli r0, r4, 0x28
    stw r5, 0x50(r1)
    stw r3, 0xf8(r25)
    add r27, r26, r0
    stw r4, 0x54(r1)
    b lbl_fn_8057854C_00000F10
lbl_fn_8057854C_00000EC8:
    subic. r27, r27, 0x28
    beq lbl_fn_8057854C_00000F10
    addic. r0, r27, 0x18
    beq lbl_fn_8057854C_00000EEC
    lwz r0, 0x18(r27)
    srwi. r0, r0, 31
    beq lbl_fn_8057854C_00000EEC
    lwz r3, 0x20(r27)
    bl dtor_80084684
lbl_fn_8057854C_00000EEC:
    cmpwi r27, 0x0
    beq lbl_fn_8057854C_00000F10
    addic. r0, r27, 0x8
    beq lbl_fn_8057854C_00000F10
    lwz r0, 0x8(r27)
    srwi. r0, r0, 31
    beq lbl_fn_8057854C_00000F10
    lwz r3, 0x10(r27)
    bl dtor_80084684
lbl_fn_8057854C_00000F10:
    cmplw r27, r26
    bgt lbl_fn_8057854C_00000EC8
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x54(r1)
    beq lbl_fn_8057854C_00000FA4
    lwz r3, 0x50(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8057854C_00000FA4
    mulli r0, r0, 0x28
    li r27, 0x0
    stw r27, 0x54(r1)
    add r26, r3, r0
    b lbl_fn_8057854C_00000F94
lbl_fn_8057854C_00000F48:
    subic. r26, r26, 0x28
    beq lbl_fn_8057854C_00000F90
    addic. r0, r26, 0x18
    beq lbl_fn_8057854C_00000F6C
    lwz r0, 0x18(r26)
    srwi. r0, r0, 31
    beq lbl_fn_8057854C_00000F6C
    lwz r3, 0x20(r26)
    bl dtor_80084684
lbl_fn_8057854C_00000F6C:
    cmpwi r26, 0x0
    beq lbl_fn_8057854C_00000F90
    addic. r0, r26, 0x8
    beq lbl_fn_8057854C_00000F90
    lwz r0, 0x8(r26)
    srwi. r0, r0, 31
    beq lbl_fn_8057854C_00000F90
    lwz r3, 0x10(r26)
    bl dtor_80084684
lbl_fn_8057854C_00000F90:
    subi r27, r27, 0x1
lbl_fn_8057854C_00000F94:
    cmpwi r27, 0x0
    bne lbl_fn_8057854C_00000F48
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_8057854C_00000FA4:
    addi r26, r1, 0x68
    addic. r0, r26, 0x18
    beq lbl_fn_8057854C_00000FC4
    lwz r0, 0x80(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057854C_00000FC4
    lwz r3, 0x88(r1)
    bl dtor_80084684
lbl_fn_8057854C_00000FC4:
    cmpwi r26, 0x0
    beq lbl_fn_8057854C_00000FE8
    addic. r0, r26, 0x8
    beq lbl_fn_8057854C_00000FE8
    lwz r0, 0x70(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057854C_00000FE8
    lwz r3, 0x78(r1)
    bl dtor_80084684
lbl_fn_8057854C_00000FE8:
    lwz r4, 0xf8(r25)
    li r3, 0x4
    lwz r5, 0xf4(r25)
    subi r0, r4, 0x1
    lwz r4, lbl_8087F9B8
    mulli r0, r0, 0x28
    add r0, r5, r0
    stw r0, 0x38(r4)
    lmw r24, 0x90(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80578CE0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    addi r30, r1, 0x18
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r5
    mr r3, r28
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087F9B8
    lwz r7, 0x38(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_80578CE0_000010C8
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80578CE0_000010C8
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_80578CE0_00001120
lbl_fn_80578CE0_000010C8:
    cmpwi r4, 0x0
    beq lbl_fn_80578CE0_000010D8
    lwz r5, 0xc(r7)
    b lbl_fn_80578CE0_000010E0
lbl_fn_80578CE0_000010D8:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_80578CE0_000010E0:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80578CE0_000010FC
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_80578CE0_00001104
lbl_fn_80578CE0_000010FC:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80578CE0_00001104:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80578CE0_00001120:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80578CE0_00001134
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_80578CE0_00001134:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80578E1C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    addi r30, r1, 0x18
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r5
    mr r3, r28
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087F9B8
    lwz r7, 0x38(r3)
    lwz r0, 0x18(r7)
    srwi. r4, r0, 31
    bne lbl_fn_80578E1C_00001204
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80578E1C_00001204
    lwz r0, 0x1c(r1)
    stw r3, 0x18(r7)
    stw r0, 0x1c(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x20(r7)
    b lbl_fn_80578E1C_0000125C
lbl_fn_80578E1C_00001204:
    cmpwi r4, 0x0
    beq lbl_fn_80578E1C_00001214
    lwz r5, 0x1c(r7)
    b lbl_fn_80578E1C_0000121C
lbl_fn_80578E1C_00001214:
    lbz r0, 0x18(r7)
    clrlwi r5, r0, 25
lbl_fn_80578E1C_0000121C:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80578E1C_00001238
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_80578E1C_00001240
lbl_fn_80578E1C_00001238:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80578E1C_00001240:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x18
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80578E1C_0000125C:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80578E1C_00001270
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_80578E1C_00001270:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80578F58(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_25
    lwz r6, lbl_8087F9B8
    mr r4, r5
    addi r3, r1, 0x40
    li r5, 0x4
    lwz r27, 0x10(r6)
    bl memcpy
    lwz r3, 0x110(r27)
    lis r26, lbl_80760FC0@ha
    addi r26, r26, lbl_80760FC0@l
    lis r25, lbl_80775A48@ha
    li r0, 0x0
    stw r3, 0x5c(r1)
    addi r28, r26, 0x33
    addi r25, r25, lbl_80775A48@l
    stw r25, 0x58(r1)
    mr r3, r28
    lwz r29, 0x40(r1)
    addi r30, r1, 0x60
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    bl strlen
    mr r31, r3
    mr r3, r30
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r30
    stb r0, 0xc(r1)
    mr r6, r28
    add r7, r28, r31
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lfs f7, lbl_80888088
    lis r3, lbl_80794458@ha
    lfs f0, lbl_80888090
    addi r3, r3, lbl_80794458@l
    stw r29, 0x6c(r1)
    stw r3, 0x58(r1)
    stfs f7, 0x9c(r1)
    stfs f7, 0x94(r1)
    stfs f7, 0x90(r1)
    stfs f7, 0x8c(r1)
    stfs f7, 0x88(r1)
    stfs f7, 0x80(r1)
    stfs f7, 0x7c(r1)
    stfs f7, 0x78(r1)
    stfs f7, 0x74(r1)
    stfs f0, 0x98(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x70(r1)
    lwz r3, 0x108(r27)
    lwz r0, 0x10c(r27)
    cmplw r3, r0
    bge lbl_fn_80578F58_00001478
    mulli r0, r3, 0x48
    lwz r3, 0x104(r27)
    add. r26, r3, r0
    beq lbl_fn_80578F58_00001468
    stw r25, 0x0(r26)
    lwz r0, 0x5c(r1)
    stw r0, 0x4(r26)
    lwz r3, 0x60(r1)
    srwi r0, r3, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80578F58_000013DC
    lwz r0, 0x64(r1)
    stw r3, 0x8(r26)
    stw r0, 0xc(r26)
    lwz r0, 0x68(r1)
    stw r0, 0x10(r26)
    b lbl_fn_80578F58_00001420
lbl_fn_80578F58_000013DC:
    li r0, 0x0
    stw r0, 0x8(r26)
    addi r3, r26, 0x8
    stw r0, 0xc(r26)
    stw r0, 0x10(r26)
    lwz r4, 0x64(r1)
    bl fn_80013DC4
    lbz r5, 0x20(r1)
    addi r3, r26, 0x8
    stb r5, 0x24(r1)
    addi r8, r1, 0x24
    lwz r6, 0x68(r1)
    li r4, 0x0
    lwz r0, 0x64(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80578F58_00001420:
    lwz r0, 0x6c(r1)
    lis r3, lbl_80794458@ha
    stw r0, 0x14(r26)
    addi r3, r3, lbl_80794458@l
    addi r4, r1, 0x70
    stw r3, 0x0(r26)
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x18(r26), 0, 0
    psq_st f2, 0x20(r26), 0, 0
    psq_st f3, 0x28(r26), 0, 0
    psq_st f4, 0x30(r26), 0, 0
    psq_st f5, 0x38(r26), 0, 0
    psq_st f6, 0x40(r26), 0, 0
lbl_fn_80578F58_00001468:
    lwz r3, 0x108(r27)
    addi r0, r3, 0x1
    stw r0, 0x108(r27)
    b lbl_fn_80578F58_00001964
lbl_fn_80578F58_00001478:
    li r0, 0x1
    stw r0, 0x3c(r1)
    lis r3, 0x38e
    lwz r25, 0x10c(r27)
    addi r0, r3, 0x38e3
    subf r0, r25, r0
    cmplwi r0, 0x1
    bge lbl_fn_80578F58_000014B4
    lis r3, __files@ha
    addi r4, r26, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80578F58_000014B4:
    lis r3, 0x12f
    addi r0, r3, 0x684b
    cmplw r25, r0
    bge lbl_fn_80578F58_000014EC
    addi r4, r25, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x34(r1)
    cmplwi r0, 0x1
    b lbl_fn_80578F58_0000150C
lbl_fn_80578F58_000014EC:
    lis r3, 0x25f
    subi r0, r3, 0x2f6a
    cmplw r25, r0
    bge lbl_fn_80578F58_0000150C
    addi r0, r25, 0x1
    srwi r0, r0, 1
    stw r0, 0x38(r1)
    cmplwi r0, 0x1
lbl_fn_80578F58_0000150C:
    lwz r4, 0x108(r27)
    li r6, 0x0
    lwz r5, 0x10c(r27)
    addi r7, r27, 0x10c
    addi r0, r4, 0x1
    lis r3, 0x38e
    subf r4, r5, r0
    stw r4, 0x28(r1)
    addi r0, r3, 0x38e3
    lwz r29, 0x10c(r27)
    stw r6, 0x44(r1)
    subf r0, r29, r0
    cmplw r4, r0
    stw r6, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    ble lbl_fn_80578F58_00001578
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80578F58_00001578:
    lis r3, 0x12f
    addi r0, r3, 0x684b
    cmplw r29, r0
    bge lbl_fn_80578F58_000015C8
    addi r5, r29, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x28(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x30
    srwi r4, r4, 2
    stw r4, 0x30(r1)
    cmplw r4, r0
    bge lbl_fn_80578F58_000015BC
    addi r3, r1, 0x28
lbl_fn_80578F58_000015BC:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_80578F58_0000160C
lbl_fn_80578F58_000015C8:
    lis r3, 0x25f
    subi r0, r3, 0x2f6a
    cmplw r29, r0
    bge lbl_fn_80578F58_00001604
    addi r3, r29, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_80578F58_000015F8
    addi r3, r1, 0x28
lbl_fn_80578F58_000015F8:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_80578F58_0000160C
lbl_fn_80578F58_00001604:
    lis r3, 0x38e
    addi r28, r3, 0x38e3
lbl_fn_80578F58_0000160C:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r28, r0
    ble lbl_fn_80578F58_00001640
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80578F58_00001640:
    mulli r3, r28, 0x48
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80578F58_00001674
    lis r3, __files@ha
    lis r4, lbl_8079450C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8079450C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80578F58_00001674:
    lwz r6, 0x108(r27)
    lis r3, lbl_80775A48@ha
    lwz r0, 0x48(r1)
    lis r25, lbl_80794458@ha
    mulli r5, r6, 0x48
    stw r28, 0x4c(r1)
    addi r3, r3, lbl_80775A48@l
    stw r26, 0x44(r1)
    addi r25, r25, lbl_80794458@l
    mulli r4, r0, 0x48
    add r0, r26, r5
    stw r6, 0x54(r1)
    addi r26, r1, 0x70
    add. r28, r4, r0
    li r0, 0x0
    beq lbl_fn_80578F58_00001760
    stw r3, 0x0(r28)
    lwz r3, 0x5c(r1)
    stw r3, 0x4(r28)
    lwz r4, 0x60(r1)
    srwi. r3, r4, 31
    bne lbl_fn_80578F58_000016E4
    lwz r0, 0x64(r1)
    stw r4, 0x8(r28)
    stw r0, 0xc(r28)
    lwz r0, 0x68(r1)
    stw r0, 0x10(r28)
    b lbl_fn_80578F58_00001724
lbl_fn_80578F58_000016E4:
    stw r0, 0x8(r28)
    addi r3, r28, 0x8
    stw r0, 0xc(r28)
    stw r0, 0x10(r28)
    lwz r4, 0x64(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    addi r3, r28, 0x8
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0x68(r1)
    li r4, 0x0
    lwz r0, 0x64(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80578F58_00001724:
    lwz r0, 0x6c(r1)
    stw r0, 0x14(r28)
    stw r25, 0x0(r28)
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x18(r28), 0, 0
    psq_st f2, 0x20(r28), 0, 0
    psq_st f3, 0x28(r28), 0, 0
    psq_st f4, 0x30(r28), 0, 0
    psq_st f5, 0x38(r28), 0, 0
    psq_st f6, 0x40(r28), 0, 0
lbl_fn_80578F58_00001760:
    lwz r3, 0x108(r27)
    lis r31, lbl_80775A48@ha
    lwz r0, 0x54(r1)
    lis r26, lbl_80794458@ha
    lwz r5, 0x48(r1)
    mulli r4, r3, 0x48
    lwz r28, 0x104(r27)
    addi r31, r31, lbl_80775A48@l
    addi r5, r5, 0x1
    lwz r3, 0x44(r1)
    mulli r0, r0, 0x48
    stw r5, 0x48(r1)
    add r30, r28, r4
    addi r26, r26, lbl_80794458@l
    add r29, r3, r0
    li r25, 0x0
    b lbl_fn_80578F58_00001874
lbl_fn_80578F58_000017A4:
    subic. r29, r29, 0x48
    subi r30, r30, 0x48
    beq lbl_fn_80578F58_0000185C
    stw r31, 0x0(r29)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lwz r3, 0x8(r30)
    srwi. r0, r3, 31
    bne lbl_fn_80578F58_000017E0
    lwz r0, 0xc(r30)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
    b lbl_fn_80578F58_00001820
lbl_fn_80578F58_000017E0:
    stw r25, 0x8(r29)
    addi r3, r29, 0x8
    stw r25, 0xc(r29)
    stw r25, 0x10(r29)
    lwz r4, 0xc(r30)
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    addi r3, r29, 0x8
    stb r0, 0x18(r1)
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x10(r30)
    lwz r0, 0xc(r30)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80578F58_00001820:
    lwz r0, 0x14(r30)
    stw r0, 0x14(r29)
    stw r26, 0x0(r29)
    psq_l f2, 0x20(r30), 0, 0
    psq_l f3, 0x28(r30), 0, 0
    psq_l f4, 0x30(r30), 0, 0
    psq_l f5, 0x38(r30), 0, 0
    psq_l f6, 0x40(r30), 0, 0
    psq_l f1, 0x18(r30), 0, 0
    psq_st f1, 0x18(r29), 0, 0
    psq_st f2, 0x20(r29), 0, 0
    psq_st f3, 0x28(r29), 0, 0
    psq_st f4, 0x30(r29), 0, 0
    psq_st f5, 0x38(r29), 0, 0
    psq_st f6, 0x40(r29), 0, 0
lbl_fn_80578F58_0000185C:
    lwz r4, 0x54(r1)
    lwz r3, 0x48(r1)
    subi r0, r4, 0x1
    stw r0, 0x54(r1)
    addi r0, r3, 0x1
    stw r0, 0x48(r1)
lbl_fn_80578F58_00001874:
    cmplw r28, r30
    blt lbl_fn_80578F58_000017A4
    lwz r6, 0x10c(r27)
    addi r28, r1, 0x44
    lwz r0, 0x4c(r1)
    stw r0, 0x10c(r27)
    lwz r0, 0x54(r1)
    lwz r5, 0x104(r27)
    lwz r3, 0x44(r1)
    mulli r0, r0, 0x48
    stw r3, 0x104(r27)
    lwz r3, 0x48(r1)
    lwz r4, 0x108(r27)
    add r25, r5, r0
    stw r6, 0x4c(r1)
    mulli r0, r4, 0x48
    stw r5, 0x44(r1)
    stw r3, 0x108(r27)
    add r26, r25, r0
    stw r4, 0x48(r1)
    b lbl_fn_80578F58_000018F0
lbl_fn_80578F58_000018C8:
    subic. r26, r26, 0x48
    beq lbl_fn_80578F58_000018F0
    beq lbl_fn_80578F58_000018F0
    addic. r0, r26, 0x8
    beq lbl_fn_80578F58_000018F0
    lwz r0, 0x8(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80578F58_000018F0
    lwz r3, 0x10(r26)
    bl dtor_80084684
lbl_fn_80578F58_000018F0:
    cmplw r26, r25
    bgt lbl_fn_80578F58_000018C8
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x48(r1)
    beq lbl_fn_80578F58_00001964
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80578F58_00001964
    mulli r0, r0, 0x48
    li r26, 0x0
    stw r26, 0x48(r1)
    add r25, r3, r0
    b lbl_fn_80578F58_00001954
lbl_fn_80578F58_00001928:
    subic. r25, r25, 0x48
    beq lbl_fn_80578F58_00001950
    beq lbl_fn_80578F58_00001950
    addic. r0, r25, 0x8
    beq lbl_fn_80578F58_00001950
    lwz r0, 0x8(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80578F58_00001950
    lwz r3, 0x10(r25)
    bl dtor_80084684
lbl_fn_80578F58_00001950:
    subi r26, r26, 0x1
lbl_fn_80578F58_00001954:
    cmpwi r26, 0x0
    bne lbl_fn_80578F58_00001928
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_80578F58_00001964:
    addic. r0, r1, 0x58
    beq lbl_fn_80578F58_00001988
    addic. r0, r0, 0x8
    beq lbl_fn_80578F58_00001988
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80578F58_00001988
    lwz r3, 0x68(r1)
    bl dtor_80084684
lbl_fn_80578F58_00001988:
    lwz r4, 0x108(r27)
    addi r11, r1, 0xc0
    lwz r5, 0x104(r27)
    li r3, 0x4
    subi r0, r4, 0x1
    lwz r4, lbl_8087F9B8
    mulli r0, r0, 0x48
    add r0, r5, r0
    stw r0, 0x3c(r4)
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80579684(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    addi r30, r1, 0x18
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r5
    mr r3, r28
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087F9B8
    lwz r7, 0x3c(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_80579684_00001A6C
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80579684_00001A6C
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_80579684_00001AC4
lbl_fn_80579684_00001A6C:
    cmpwi r4, 0x0
    beq lbl_fn_80579684_00001A7C
    lwz r5, 0xc(r7)
    b lbl_fn_80579684_00001A84
lbl_fn_80579684_00001A7C:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_80579684_00001A84:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80579684_00001AA0
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_80579684_00001AA8
lbl_fn_80579684_00001AA0:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80579684_00001AA8:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80579684_00001AC4:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80579684_00001AD8
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_80579684_00001AD8:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
