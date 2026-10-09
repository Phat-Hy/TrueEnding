#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800844D8(void);
extern void fn_80548760(void);
extern void fn_8057DB18(void);
extern void fn_8057DC3C(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80760FC0[];
extern u8 lbl_80775A48[];
extern u8 lbl_80779F40[];
extern u8 lbl_80779F84[];
extern u8 lbl_80782E60[];
extern u8 lbl_80782EC0[];
extern u8 lbl_80782EE8[];
extern u8 lbl_80794544[];
extern u8 lbl_80794560[];
extern u8 lbl_8079457C[];

/* Small data declarations */
extern u32 lbl_8087F9B8;
extern u32 lbl_80888088;

/* Function declarations */
void fn_805797C0(void);
void fn_80579DBC(void);
void fn_80579EF8(void);
void fn_8057A508(void);
void fn_8057A644(void);
void fn_8057AC40(void);
void fn_8057AD7C(void);
void fn_8057B03C(void);
void fn_8057B0D8(void);

asm void fn_805797C0(void)
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
    lwz r0, 0x130(r27)
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
    lis r3, lbl_80782EE8@ha
    stw r30, 0x4c(r1)
    addi r3, r3, lbl_80782EE8@l
    stw r3, 0x38(r1)
    stw r25, 0x50(r1)
    lwz r0, 0x128(r27)
    lwz r4, 0x12c(r27)
    cmplw r0, r4
    bge lbl_fn_805797C0_0000016C
    mulli r0, r0, 0x1c
    lwz r3, 0x124(r27)
    add. r28, r3, r0
    beq lbl_fn_805797C0_0000015C
    stw r26, 0x0(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r28)
    lwz r3, 0x40(r1)
    srwi. r0, r3, 31
    bne lbl_fn_805797C0_00000100
    lwz r0, 0x44(r1)
    stw r3, 0x8(r28)
    stw r0, 0xc(r28)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r28)
    b lbl_fn_805797C0_00000140
lbl_fn_805797C0_00000100:
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
lbl_fn_805797C0_00000140:
    lwz r0, 0x4c(r1)
    lis r3, lbl_80782EE8@ha
    stw r0, 0x14(r28)
    addi r3, r3, lbl_80782EE8@l
    stw r3, 0x0(r28)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r28)
lbl_fn_805797C0_0000015C:
    lwz r3, 0x128(r27)
    addi r0, r3, 0x1
    stw r0, 0x128(r27)
    b lbl_fn_805797C0_000005A4
lbl_fn_805797C0_0000016C:
    lis r3, 0x925
    subi r0, r3, 0x6db7
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_805797C0_0000019C
    lis r3, __files@ha
    addi r4, r28, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805797C0_0000019C:
    li r5, 0x0
    addi r4, r27, 0x12c
    lis r3, 0x925
    stw r5, 0x54(r1)
    subi r0, r3, 0x6db7
    stw r5, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r5, 0x64(r1)
    lwz r3, 0x128(r27)
    lwz r4, 0x12c(r27)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x28(r1)
    lwz r29, 0x12c(r27)
    subf r0, r29, r0
    cmplw r3, r0
    ble lbl_fn_805797C0_00000208
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805797C0_00000208:
    lis r3, 0x30c
    addi r0, r3, 0x30c3
    cmplw r29, r0
    bge lbl_fn_805797C0_00000258
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
    bge lbl_fn_805797C0_0000024C
    addi r3, r1, 0x28
lbl_fn_805797C0_0000024C:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_805797C0_0000029C
lbl_fn_805797C0_00000258:
    lis r3, 0x618
    addi r0, r3, 0x6186
    cmplw r29, r0
    bge lbl_fn_805797C0_00000294
    addi r3, r29, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_805797C0_00000288
    addi r3, r1, 0x28
lbl_fn_805797C0_00000288:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_805797C0_0000029C
lbl_fn_805797C0_00000294:
    lis r3, 0x925
    subi r28, r3, 0x6db7
lbl_fn_805797C0_0000029C:
    lis r3, 0x925
    subi r0, r3, 0x6db7
    cmplw r28, r0
    ble lbl_fn_805797C0_000002D0
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805797C0_000002D0:
    mulli r3, r28, 0x1c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_805797C0_00000304
    lis r3, __files@ha
    lis r4, lbl_80794544@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80794544@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805797C0_00000304:
    stw r26, 0x54(r1)
    lis r3, lbl_80775A48@ha
    lwz r0, 0x58(r1)
    lis r25, lbl_80782EE8@ha
    stw r28, 0x5c(r1)
    addi r3, r3, lbl_80775A48@l
    mulli r5, r0, 0x1c
    addi r25, r25, lbl_80782EE8@l
    lwz r4, 0x128(r27)
    li r0, 0x0
    stw r4, 0x64(r1)
    mulli r4, r4, 0x1c
    add r4, r26, r4
    add. r26, r5, r4
    beq lbl_fn_805797C0_000003C4
    stw r3, 0x0(r26)
    lwz r3, 0x3c(r1)
    stw r3, 0x4(r26)
    lwz r4, 0x40(r1)
    srwi. r3, r4, 31
    bne lbl_fn_805797C0_00000370
    lwz r0, 0x44(r1)
    stw r4, 0x8(r26)
    stw r0, 0xc(r26)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r26)
    b lbl_fn_805797C0_000003B0
lbl_fn_805797C0_00000370:
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
lbl_fn_805797C0_000003B0:
    lwz r0, 0x4c(r1)
    stw r0, 0x14(r26)
    stw r25, 0x0(r26)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r26)
lbl_fn_805797C0_000003C4:
    lwz r3, 0x58(r1)
    lis r31, lbl_80775A48@ha
    lwz r0, 0x64(r1)
    lis r26, lbl_80782EE8@ha
    addi r3, r3, 0x1
    stw r3, 0x58(r1)
    mulli r0, r0, 0x1c
    lwz r3, 0x54(r1)
    lwz r4, 0x128(r27)
    addi r31, r31, lbl_80775A48@l
    lwz r28, 0x124(r27)
    addi r26, r26, lbl_80782EE8@l
    mulli r4, r4, 0x1c
    add r29, r3, r0
    li r25, 0x0
    add r30, r28, r4
    b lbl_fn_805797C0_000004B0
lbl_fn_805797C0_00000408:
    subic. r29, r29, 0x1c
    subi r30, r30, 0x1c
    beq lbl_fn_805797C0_00000498
    stw r31, 0x0(r29)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lwz r3, 0x8(r30)
    srwi. r0, r3, 31
    bne lbl_fn_805797C0_00000444
    lwz r0, 0xc(r30)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
    b lbl_fn_805797C0_00000484
lbl_fn_805797C0_00000444:
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
lbl_fn_805797C0_00000484:
    lwz r0, 0x14(r30)
    stw r0, 0x14(r29)
    stw r26, 0x0(r29)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r29)
lbl_fn_805797C0_00000498:
    lwz r4, 0x64(r1)
    lwz r3, 0x58(r1)
    subi r0, r4, 0x1
    stw r0, 0x64(r1)
    addi r0, r3, 0x1
    stw r0, 0x58(r1)
lbl_fn_805797C0_000004B0:
    cmplw r30, r28
    bgt lbl_fn_805797C0_00000408
    lwz r3, 0x12c(r27)
    addi r28, r1, 0x54
    lwz r0, 0x5c(r1)
    stw r0, 0x12c(r27)
    stw r3, 0x5c(r1)
    lwz r0, 0x54(r1)
    lwz r3, 0x124(r27)
    stw r0, 0x124(r27)
    stw r3, 0x54(r1)
    lwz r0, 0x58(r1)
    lwz r5, 0x128(r27)
    stw r0, 0x128(r27)
    mulli r0, r5, 0x1c
    lwz r3, 0x64(r1)
    lwz r4, 0x54(r1)
    mulli r3, r3, 0x1c
    stw r5, 0x58(r1)
    add r25, r4, r3
    add r26, r25, r0
    b lbl_fn_805797C0_00000530
lbl_fn_805797C0_00000508:
    subic. r26, r26, 0x1c
    beq lbl_fn_805797C0_00000530
    beq lbl_fn_805797C0_00000530
    addic. r0, r26, 0x8
    beq lbl_fn_805797C0_00000530
    lwz r0, 0x8(r26)
    srwi. r0, r0, 31
    beq lbl_fn_805797C0_00000530
    lwz r3, 0x10(r26)
    bl dtor_80084684
lbl_fn_805797C0_00000530:
    cmplw r26, r25
    bgt lbl_fn_805797C0_00000508
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x58(r1)
    beq lbl_fn_805797C0_000005A4
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805797C0_000005A4
    mulli r0, r0, 0x1c
    li r26, 0x0
    stw r26, 0x58(r1)
    add r25, r3, r0
    b lbl_fn_805797C0_00000594
lbl_fn_805797C0_00000568:
    subic. r25, r25, 0x1c
    beq lbl_fn_805797C0_00000590
    beq lbl_fn_805797C0_00000590
    addic. r0, r25, 0x8
    beq lbl_fn_805797C0_00000590
    lwz r0, 0x8(r25)
    srwi. r0, r0, 31
    beq lbl_fn_805797C0_00000590
    lwz r3, 0x10(r25)
    bl dtor_80084684
lbl_fn_805797C0_00000590:
    subi r26, r26, 0x1
lbl_fn_805797C0_00000594:
    cmpwi r26, 0x0
    bne lbl_fn_805797C0_00000568
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_805797C0_000005A4:
    addic. r0, r1, 0x38
    beq lbl_fn_805797C0_000005C8
    addic. r0, r0, 0x8
    beq lbl_fn_805797C0_000005C8
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805797C0_000005C8
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_805797C0_000005C8:
    lwz r4, 0x128(r27)
    li r3, 0x4
    lwz r5, 0x124(r27)
    subi r0, r4, 0x1
    lwz r4, lbl_8087F9B8
    mulli r0, r0, 0x1c
    add r0, r5, r0
    stw r0, 0x44(r4)
    lmw r24, 0x70(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80579DBC(void)
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
    lwz r7, 0x44(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_80579DBC_000006A8
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80579DBC_000006A8
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_80579DBC_00000700
lbl_fn_80579DBC_000006A8:
    cmpwi r4, 0x0
    beq lbl_fn_80579DBC_000006B8
    lwz r5, 0xc(r7)
    b lbl_fn_80579DBC_000006C0
lbl_fn_80579DBC_000006B8:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_80579DBC_000006C0:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80579DBC_000006DC
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_80579DBC_000006E4
lbl_fn_80579DBC_000006DC:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80579DBC_000006E4:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80579DBC_00000700:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80579DBC_00000714
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_80579DBC_00000714:
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

asm void fn_80579EF8(void)
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
    lwz r0, 0x140(r27)
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
    lis r3, lbl_80782EC0@ha
    stw r30, 0x4c(r1)
    addi r3, r3, lbl_80782EC0@l
    stw r3, 0x38(r1)
    stw r25, 0x50(r1)
    stw r25, 0x54(r1)
    lwz r0, 0x138(r27)
    lwz r4, 0x13c(r27)
    cmplw r0, r4
    bge lbl_fn_80579EF8_000008B0
    lwz r3, 0x134(r27)
    slwi r0, r0, 5
    add. r28, r3, r0
    beq lbl_fn_80579EF8_000008A0
    stw r26, 0x0(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r28)
    lwz r3, 0x40(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80579EF8_0000083C
    lwz r0, 0x44(r1)
    stw r3, 0x8(r28)
    stw r0, 0xc(r28)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r28)
    b lbl_fn_80579EF8_0000087C
lbl_fn_80579EF8_0000083C:
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
lbl_fn_80579EF8_0000087C:
    lwz r0, 0x4c(r1)
    lis r3, lbl_80782EC0@ha
    stw r0, 0x14(r28)
    addi r3, r3, lbl_80782EC0@l
    stw r3, 0x0(r28)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r28)
    lwz r0, 0x54(r1)
    stw r0, 0x1c(r28)
lbl_fn_80579EF8_000008A0:
    lwz r3, 0x138(r27)
    addi r0, r3, 0x1
    stw r0, 0x138(r27)
    b lbl_fn_80579EF8_00000CF0
lbl_fn_80579EF8_000008B0:
    lis r3, 0x800
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80579EF8_000008E0
    lis r3, __files@ha
    addi r4, r28, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80579EF8_000008E0:
    li r5, 0x0
    addi r4, r27, 0x13c
    lis r3, 0x800
    stw r5, 0x58(r1)
    subi r0, r3, 0x1
    stw r5, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r5, 0x68(r1)
    lwz r3, 0x138(r27)
    lwz r4, 0x13c(r27)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x28(r1)
    lwz r29, 0x13c(r27)
    subf r0, r29, r0
    cmplw r3, r0
    ble lbl_fn_80579EF8_0000094C
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80579EF8_0000094C:
    lis r3, 0x2ab
    subi r0, r3, 0x5556
    cmplw r29, r0
    bge lbl_fn_80579EF8_0000099C
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
    bge lbl_fn_80579EF8_00000990
    addi r3, r1, 0x28
lbl_fn_80579EF8_00000990:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_80579EF8_000009E0
lbl_fn_80579EF8_0000099C:
    lis r3, 0x555
    addi r0, r3, 0x5554
    cmplw r29, r0
    bge lbl_fn_80579EF8_000009D8
    addi r3, r29, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_80579EF8_000009CC
    addi r3, r1, 0x28
lbl_fn_80579EF8_000009CC:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_80579EF8_000009E0
lbl_fn_80579EF8_000009D8:
    lis r3, 0x800
    subi r28, r3, 0x1
lbl_fn_80579EF8_000009E0:
    lis r3, 0x800
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_80579EF8_00000A14
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80579EF8_00000A14:
    slwi r3, r28, 5
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80579EF8_00000A48
    lis r3, __files@ha
    lis r4, lbl_80794560@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80794560@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80579EF8_00000A48:
    stw r26, 0x58(r1)
    lis r3, lbl_80775A48@ha
    lwz r0, 0x5c(r1)
    lis r25, lbl_80782EC0@ha
    stw r28, 0x60(r1)
    addi r3, r3, lbl_80775A48@l
    slwi r5, r0, 5
    addi r25, r25, lbl_80782EC0@l
    lwz r4, 0x138(r27)
    li r0, 0x0
    stw r4, 0x68(r1)
    slwi r4, r4, 5
    add r4, r26, r4
    add. r26, r5, r4
    beq lbl_fn_80579EF8_00000B10
    stw r3, 0x0(r26)
    lwz r3, 0x3c(r1)
    stw r3, 0x4(r26)
    lwz r4, 0x40(r1)
    srwi. r3, r4, 31
    bne lbl_fn_80579EF8_00000AB4
    lwz r0, 0x44(r1)
    stw r4, 0x8(r26)
    stw r0, 0xc(r26)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r26)
    b lbl_fn_80579EF8_00000AF4
lbl_fn_80579EF8_00000AB4:
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
lbl_fn_80579EF8_00000AF4:
    lwz r0, 0x4c(r1)
    stw r0, 0x14(r26)
    stw r25, 0x0(r26)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r26)
    lwz r0, 0x54(r1)
    stw r0, 0x1c(r26)
lbl_fn_80579EF8_00000B10:
    lwz r3, 0x5c(r1)
    lis r31, lbl_80775A48@ha
    lwz r0, 0x68(r1)
    lis r26, lbl_80782EC0@ha
    addi r3, r3, 0x1
    stw r3, 0x5c(r1)
    lwz r3, 0x58(r1)
    slwi r0, r0, 5
    lwz r4, 0x138(r27)
    addi r31, r31, lbl_80775A48@l
    lwz r28, 0x134(r27)
    add r29, r3, r0
    slwi r0, r4, 5
    addi r26, r26, lbl_80782EC0@l
    add r30, r28, r0
    li r25, 0x0
    b lbl_fn_80579EF8_00000C04
lbl_fn_80579EF8_00000B54:
    subic. r29, r29, 0x20
    subi r30, r30, 0x20
    beq lbl_fn_80579EF8_00000BEC
    stw r31, 0x0(r29)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lwz r3, 0x8(r30)
    srwi. r0, r3, 31
    bne lbl_fn_80579EF8_00000B90
    lwz r0, 0xc(r30)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
    b lbl_fn_80579EF8_00000BD0
lbl_fn_80579EF8_00000B90:
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
lbl_fn_80579EF8_00000BD0:
    lwz r0, 0x14(r30)
    stw r0, 0x14(r29)
    stw r26, 0x0(r29)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r29)
    lwz r0, 0x1c(r30)
    stw r0, 0x1c(r29)
lbl_fn_80579EF8_00000BEC:
    lwz r4, 0x68(r1)
    lwz r3, 0x5c(r1)
    subi r0, r4, 0x1
    stw r0, 0x68(r1)
    addi r0, r3, 0x1
    stw r0, 0x5c(r1)
lbl_fn_80579EF8_00000C04:
    cmplw r30, r28
    bgt lbl_fn_80579EF8_00000B54
    lwz r3, 0x13c(r27)
    addi r28, r1, 0x58
    lwz r0, 0x60(r1)
    stw r0, 0x13c(r27)
    stw r3, 0x60(r1)
    lwz r0, 0x58(r1)
    lwz r3, 0x134(r27)
    stw r0, 0x134(r27)
    stw r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    lwz r5, 0x138(r27)
    stw r0, 0x138(r27)
    slwi r0, r5, 5
    lwz r3, 0x68(r1)
    lwz r4, 0x58(r1)
    slwi r3, r3, 5
    stw r5, 0x5c(r1)
    add r25, r4, r3
    add r26, r25, r0
    b lbl_fn_80579EF8_00000C84
lbl_fn_80579EF8_00000C5C:
    subic. r26, r26, 0x20
    beq lbl_fn_80579EF8_00000C84
    beq lbl_fn_80579EF8_00000C84
    addic. r0, r26, 0x8
    beq lbl_fn_80579EF8_00000C84
    lwz r0, 0x8(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80579EF8_00000C84
    lwz r3, 0x10(r26)
    bl dtor_80084684
lbl_fn_80579EF8_00000C84:
    cmplw r26, r25
    bgt lbl_fn_80579EF8_00000C5C
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x5c(r1)
    beq lbl_fn_80579EF8_00000CF0
    lwz r25, 0x58(r1)
    cmpwi r25, 0x0
    beq lbl_fn_80579EF8_00000CF0
    li r26, 0x0
    stw r26, 0x5c(r1)
    b lbl_fn_80579EF8_00000CE0
lbl_fn_80579EF8_00000CB4:
    subic. r25, r25, 0x20
    beq lbl_fn_80579EF8_00000CDC
    beq lbl_fn_80579EF8_00000CDC
    addic. r0, r25, 0x8
    beq lbl_fn_80579EF8_00000CDC
    lwz r0, 0x8(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80579EF8_00000CDC
    lwz r3, 0x10(r25)
    bl dtor_80084684
lbl_fn_80579EF8_00000CDC:
    subi r26, r26, 0x1
lbl_fn_80579EF8_00000CE0:
    cmpwi r26, 0x0
    bne lbl_fn_80579EF8_00000CB4
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_80579EF8_00000CF0:
    addic. r0, r1, 0x38
    beq lbl_fn_80579EF8_00000D14
    addic. r0, r0, 0x8
    beq lbl_fn_80579EF8_00000D14
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80579EF8_00000D14
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_80579EF8_00000D14:
    lwz r4, 0x138(r27)
    li r3, 0x4
    lwz r5, 0x134(r27)
    subi r0, r4, 0x1
    lwz r4, lbl_8087F9B8
    slwi r0, r0, 5
    add r0, r5, r0
    stw r0, 0x48(r4)
    lmw r24, 0x70(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8057A508(void)
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
    lwz r7, 0x48(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_8057A508_00000DF4
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057A508_00000DF4
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_8057A508_00000E4C
lbl_fn_8057A508_00000DF4:
    cmpwi r4, 0x0
    beq lbl_fn_8057A508_00000E04
    lwz r5, 0xc(r7)
    b lbl_fn_8057A508_00000E0C
lbl_fn_8057A508_00000E04:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_8057A508_00000E0C:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8057A508_00000E28
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_8057A508_00000E30
lbl_fn_8057A508_00000E28:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_8057A508_00000E30:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8057A508_00000E4C:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057A508_00000E60
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8057A508_00000E60:
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

asm void fn_8057A644(void)
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
    lwz r0, 0x150(r27)
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
    lis r3, lbl_80782E60@ha
    stw r30, 0x4c(r1)
    addi r3, r3, lbl_80782E60@l
    stw r3, 0x38(r1)
    stw r25, 0x50(r1)
    lwz r0, 0x148(r27)
    lwz r4, 0x14c(r27)
    cmplw r0, r4
    bge lbl_fn_8057A644_00000FF0
    mulli r0, r0, 0x1c
    lwz r3, 0x144(r27)
    add. r28, r3, r0
    beq lbl_fn_8057A644_00000FE0
    stw r26, 0x0(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r28)
    lwz r3, 0x40(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057A644_00000F84
    lwz r0, 0x44(r1)
    stw r3, 0x8(r28)
    stw r0, 0xc(r28)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r28)
    b lbl_fn_8057A644_00000FC4
lbl_fn_8057A644_00000F84:
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
lbl_fn_8057A644_00000FC4:
    lwz r0, 0x4c(r1)
    lis r3, lbl_80782E60@ha
    stw r0, 0x14(r28)
    addi r3, r3, lbl_80782E60@l
    stw r3, 0x0(r28)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r28)
lbl_fn_8057A644_00000FE0:
    lwz r3, 0x148(r27)
    addi r0, r3, 0x1
    stw r0, 0x148(r27)
    b lbl_fn_8057A644_00001428
lbl_fn_8057A644_00000FF0:
    lis r3, 0x925
    subi r0, r3, 0x6db7
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8057A644_00001020
    lis r3, __files@ha
    addi r4, r28, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057A644_00001020:
    li r5, 0x0
    addi r4, r27, 0x14c
    lis r3, 0x925
    stw r5, 0x54(r1)
    subi r0, r3, 0x6db7
    stw r5, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r5, 0x64(r1)
    lwz r3, 0x148(r27)
    lwz r4, 0x14c(r27)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x28(r1)
    lwz r29, 0x14c(r27)
    subf r0, r29, r0
    cmplw r3, r0
    ble lbl_fn_8057A644_0000108C
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057A644_0000108C:
    lis r3, 0x30c
    addi r0, r3, 0x30c3
    cmplw r29, r0
    bge lbl_fn_8057A644_000010DC
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
    bge lbl_fn_8057A644_000010D0
    addi r3, r1, 0x28
lbl_fn_8057A644_000010D0:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_8057A644_00001120
lbl_fn_8057A644_000010DC:
    lis r3, 0x618
    addi r0, r3, 0x6186
    cmplw r29, r0
    bge lbl_fn_8057A644_00001118
    addi r3, r29, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_8057A644_0000110C
    addi r3, r1, 0x28
lbl_fn_8057A644_0000110C:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_8057A644_00001120
lbl_fn_8057A644_00001118:
    lis r3, 0x925
    subi r28, r3, 0x6db7
lbl_fn_8057A644_00001120:
    lis r3, 0x925
    subi r0, r3, 0x6db7
    cmplw r28, r0
    ble lbl_fn_8057A644_00001154
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057A644_00001154:
    mulli r3, r28, 0x1c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8057A644_00001188
    lis r3, __files@ha
    lis r4, lbl_8079457C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8079457C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057A644_00001188:
    stw r26, 0x54(r1)
    lis r3, lbl_80775A48@ha
    lwz r0, 0x58(r1)
    lis r25, lbl_80782E60@ha
    stw r28, 0x5c(r1)
    addi r3, r3, lbl_80775A48@l
    mulli r5, r0, 0x1c
    addi r25, r25, lbl_80782E60@l
    lwz r4, 0x148(r27)
    li r0, 0x0
    stw r4, 0x64(r1)
    mulli r4, r4, 0x1c
    add r4, r26, r4
    add. r26, r5, r4
    beq lbl_fn_8057A644_00001248
    stw r3, 0x0(r26)
    lwz r3, 0x3c(r1)
    stw r3, 0x4(r26)
    lwz r4, 0x40(r1)
    srwi. r3, r4, 31
    bne lbl_fn_8057A644_000011F4
    lwz r0, 0x44(r1)
    stw r4, 0x8(r26)
    stw r0, 0xc(r26)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r26)
    b lbl_fn_8057A644_00001234
lbl_fn_8057A644_000011F4:
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
lbl_fn_8057A644_00001234:
    lwz r0, 0x4c(r1)
    stw r0, 0x14(r26)
    stw r25, 0x0(r26)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r26)
lbl_fn_8057A644_00001248:
    lwz r3, 0x58(r1)
    lis r31, lbl_80775A48@ha
    lwz r0, 0x64(r1)
    lis r26, lbl_80782E60@ha
    addi r3, r3, 0x1
    stw r3, 0x58(r1)
    mulli r0, r0, 0x1c
    lwz r3, 0x54(r1)
    lwz r4, 0x148(r27)
    addi r31, r31, lbl_80775A48@l
    lwz r28, 0x144(r27)
    addi r26, r26, lbl_80782E60@l
    mulli r4, r4, 0x1c
    add r29, r3, r0
    li r25, 0x0
    add r30, r28, r4
    b lbl_fn_8057A644_00001334
lbl_fn_8057A644_0000128C:
    subic. r29, r29, 0x1c
    subi r30, r30, 0x1c
    beq lbl_fn_8057A644_0000131C
    stw r31, 0x0(r29)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lwz r3, 0x8(r30)
    srwi. r0, r3, 31
    bne lbl_fn_8057A644_000012C8
    lwz r0, 0xc(r30)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
    b lbl_fn_8057A644_00001308
lbl_fn_8057A644_000012C8:
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
lbl_fn_8057A644_00001308:
    lwz r0, 0x14(r30)
    stw r0, 0x14(r29)
    stw r26, 0x0(r29)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r29)
lbl_fn_8057A644_0000131C:
    lwz r4, 0x64(r1)
    lwz r3, 0x58(r1)
    subi r0, r4, 0x1
    stw r0, 0x64(r1)
    addi r0, r3, 0x1
    stw r0, 0x58(r1)
lbl_fn_8057A644_00001334:
    cmplw r30, r28
    bgt lbl_fn_8057A644_0000128C
    lwz r3, 0x14c(r27)
    addi r28, r1, 0x54
    lwz r0, 0x5c(r1)
    stw r0, 0x14c(r27)
    stw r3, 0x5c(r1)
    lwz r0, 0x54(r1)
    lwz r3, 0x144(r27)
    stw r0, 0x144(r27)
    stw r3, 0x54(r1)
    lwz r0, 0x58(r1)
    lwz r5, 0x148(r27)
    stw r0, 0x148(r27)
    mulli r0, r5, 0x1c
    lwz r3, 0x64(r1)
    lwz r4, 0x54(r1)
    mulli r3, r3, 0x1c
    stw r5, 0x58(r1)
    add r25, r4, r3
    add r26, r25, r0
    b lbl_fn_8057A644_000013B4
lbl_fn_8057A644_0000138C:
    subic. r26, r26, 0x1c
    beq lbl_fn_8057A644_000013B4
    beq lbl_fn_8057A644_000013B4
    addic. r0, r26, 0x8
    beq lbl_fn_8057A644_000013B4
    lwz r0, 0x8(r26)
    srwi. r0, r0, 31
    beq lbl_fn_8057A644_000013B4
    lwz r3, 0x10(r26)
    bl dtor_80084684
lbl_fn_8057A644_000013B4:
    cmplw r26, r25
    bgt lbl_fn_8057A644_0000138C
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x58(r1)
    beq lbl_fn_8057A644_00001428
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8057A644_00001428
    mulli r0, r0, 0x1c
    li r26, 0x0
    stw r26, 0x58(r1)
    add r25, r3, r0
    b lbl_fn_8057A644_00001418
lbl_fn_8057A644_000013EC:
    subic. r25, r25, 0x1c
    beq lbl_fn_8057A644_00001414
    beq lbl_fn_8057A644_00001414
    addic. r0, r25, 0x8
    beq lbl_fn_8057A644_00001414
    lwz r0, 0x8(r25)
    srwi. r0, r0, 31
    beq lbl_fn_8057A644_00001414
    lwz r3, 0x10(r25)
    bl dtor_80084684
lbl_fn_8057A644_00001414:
    subi r26, r26, 0x1
lbl_fn_8057A644_00001418:
    cmpwi r26, 0x0
    bne lbl_fn_8057A644_000013EC
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_8057A644_00001428:
    addic. r0, r1, 0x38
    beq lbl_fn_8057A644_0000144C
    addic. r0, r0, 0x8
    beq lbl_fn_8057A644_0000144C
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057A644_0000144C
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_8057A644_0000144C:
    lwz r4, 0x148(r27)
    li r3, 0x4
    lwz r5, 0x144(r27)
    subi r0, r4, 0x1
    lwz r4, lbl_8087F9B8
    mulli r0, r0, 0x1c
    add r0, r5, r0
    stw r0, 0x4c(r4)
    lmw r24, 0x70(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8057AC40(void)
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
    lwz r7, 0x4c(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_8057AC40_0000152C
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8057AC40_0000152C
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_8057AC40_00001584
lbl_fn_8057AC40_0000152C:
    cmpwi r4, 0x0
    beq lbl_fn_8057AC40_0000153C
    lwz r5, 0xc(r7)
    b lbl_fn_8057AC40_00001544
lbl_fn_8057AC40_0000153C:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_8057AC40_00001544:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8057AC40_00001560
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_8057AC40_00001568
lbl_fn_8057AC40_00001560:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_8057AC40_00001568:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8057AC40_00001584:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057AC40_00001598
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8057AC40_00001598:
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

asm void fn_8057AD7C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_26
    mr r4, r5
    addi r3, r1, 0x10
    li r5, 0x8
    bl memcpy
    lwz r3, lbl_8087F9B8
    lis r5, lbl_80760FC0@ha
    addi r5, r5, lbl_80760FC0@l
    lis r4, lbl_80775A48@ha
    lwz r3, 0x10(r3)
    addi r29, r5, 0x33
    addi r4, r4, lbl_80775A48@l
    lwz r28, 0x10(r1)
    lwz r0, 0x160(r3)
    li r31, 0x0
    addi r30, r3, 0x154
    stw r0, 0x1c(r1)
    mr r3, r29
    addi r27, r1, 0x20
    stw r4, 0x18(r1)
    stw r31, 0x20(r1)
    stw r31, 0x24(r1)
    stw r31, 0x28(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r27
    stb r0, 0xc(r1)
    mr r6, r29
    add r7, r29, r26
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lfs f0, lbl_80888088
    lis r3, lbl_80779F40@ha
    addi r3, r3, lbl_80779F40@l
    li r0, 0x1
    stw r28, 0x2c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x30(r1)
    stw r31, 0x34(r1)
    stw r31, 0x38(r1)
    stw r31, 0x3c(r1)
    stw r31, 0x40(r1)
    stw r31, 0x44(r1)
    stw r31, 0x48(r1)
    stw r31, 0x4c(r1)
    stfs f0, 0x50(r1)
    stw r31, 0x6c(r1)
    stw r31, 0x70(r1)
    stw r31, 0x74(r1)
    stw r31, 0x78(r1)
    stw r31, 0x7c(r1)
    stw r31, 0x80(r1)
    stw r31, 0x84(r1)
    stw r31, 0x88(r1)
    stw r31, 0x8c(r1)
    stw r31, 0x90(r1)
    stw r31, 0x94(r1)
    stw r31, 0x98(r1)
    lwz r3, 0x4(r30)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bge lbl_fn_8057AD7C_00001704
    mulli r0, r3, 0x84
    lwz r4, 0x0(r30)
    addi r3, r30, 0x8
    addi r5, r1, 0x18
    add r4, r4, r0
    bl fn_8057DC3C
    lwz r3, 0x4(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_8057AD7C_00001710
lbl_fn_8057AD7C_00001704:
    mr r3, r30
    addi r4, r1, 0x18
    bl fn_8057DB18
lbl_fn_8057AD7C_00001710:
    addi r31, r1, 0x18
    addic. r28, r31, 0x34
    beq lbl_fn_8057AD7C_000017D0
    addic. r4, r28, 0x44
    beq lbl_fn_8057AD7C_0000174C
    beq lbl_fn_8057AD7C_0000174C
    beq lbl_fn_8057AD7C_0000174C
    beq lbl_fn_8057AD7C_0000174C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057AD7C_0000174C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057AD7C_0000174C:
    addic. r4, r28, 0x38
    beq lbl_fn_8057AD7C_00001778
    beq lbl_fn_8057AD7C_00001778
    beq lbl_fn_8057AD7C_00001778
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057AD7C_00001778
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057AD7C_00001778:
    addic. r4, r28, 0x2c
    beq lbl_fn_8057AD7C_000017A4
    beq lbl_fn_8057AD7C_000017A4
    beq lbl_fn_8057AD7C_000017A4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057AD7C_000017A4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057AD7C_000017A4:
    addic. r4, r28, 0x20
    beq lbl_fn_8057AD7C_000017D0
    beq lbl_fn_8057AD7C_000017D0
    beq lbl_fn_8057AD7C_000017D0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057AD7C_000017D0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057AD7C_000017D0:
    addic. r4, r31, 0x28
    beq lbl_fn_8057AD7C_000017FC
    beq lbl_fn_8057AD7C_000017FC
    beq lbl_fn_8057AD7C_000017FC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057AD7C_000017FC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057AD7C_000017FC:
    addic. r0, r31, 0x1c
    beq lbl_fn_8057AD7C_00001818
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057AD7C_00001818
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_8057AD7C_00001818:
    cmpwi r31, 0x0
    beq lbl_fn_8057AD7C_0000183C
    addic. r0, r31, 0x8
    beq lbl_fn_8057AD7C_0000183C
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8057AD7C_0000183C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8057AD7C_0000183C:
    lwz r4, 0x4(r30)
    addi r11, r1, 0xc0
    lwz r5, 0x0(r30)
    li r3, 0x8
    subi r4, r4, 0x1
    lha r0, 0x14(r1)
    mulli r4, r4, 0x84
    add r5, r5, r4
    stw r0, 0x18(r5)
    lwz r4, lbl_8087F9B8
    stw r5, 0x50(r4)
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8057B03C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r3, lbl_8087F9B8
    lwz r31, 0x50(r3)
    lwz r0, 0x1c(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8057B03C_000018C0
    lbz r0, 0x1c(r31)
    clrlwi r30, r0, 25
    b lbl_fn_8057B03C_000018C4
lbl_fn_8057B03C_000018C0:
    lwz r30, 0x20(r31)
lbl_fn_8057B03C_000018C4:
    lbz r0, 0x8(r1)
    mr r3, r29
    stb r0, 0xc(r1)
    bl strlen
    mr r0, r3
    mr r5, r30
    mr r6, r29
    addi r3, r31, 0x1c
    add r7, r29, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057B0D8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    mr r4, r5
    li r5, 0x10
    stw r0, 0x74(r1)
    addi r3, r1, 0x30
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    bl memcpy
    lwz r3, lbl_8087F9B8
    addi r30, r1, 0x20
    lfs f4, 0x30(r1)
    lwz r31, 0x50(r3)
    lfs f3, 0x34(r1)
    lwz r4, 0x2c(r31)
    lwz r0, 0x30(r31)
    lfs f2, 0x38(r1)
    lfs f0, 0x3c(r1)
    cmplw r4, r0
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f0, 0x2c(r1)
    bge lbl_fn_8057B0D8_000019B0
    lwz r3, 0x28(r31)
    slwi r0, r4, 4
    add. r3, r3, r0
    beq lbl_fn_8057B0D8_000019A0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r3)
lbl_fn_8057B0D8_000019A0:
    lwz r3, 0x2c(r31)
    addi r0, r3, 0x1
    stw r0, 0x2c(r31)
    b lbl_fn_8057B0D8_00001CB8
lbl_fn_8057B0D8_000019B0:
    li r0, 0x1
    stw r0, 0x1c(r1)
    lis r3, 0x1000
    lwz r29, 0x30(r31)
    subi r0, r3, 0x1
    subf r0, r29, r0
    cmplwi r0, 0x1
    bge lbl_fn_8057B0D8_000019F4
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057B0D8_000019F4:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r29, r0
    bge lbl_fn_8057B0D8_00001A2C
    addi r4, r29, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_8057B0D8_00001A4C
lbl_fn_8057B0D8_00001A2C:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r29, r0
    bge lbl_fn_8057B0D8_00001A4C
    addi r0, r29, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_8057B0D8_00001A4C:
    li r4, 0x0
    addi r5, r31, 0x30
    lis r3, 0x1000
    stw r4, 0x40(r1)
    subi r0, r3, 0x1
    stw r4, 0x44(r1)
    stw r4, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    lwz r3, 0x2c(r31)
    lwz r4, 0x30(r31)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x8(r1)
    lwz r29, 0x30(r31)
    subf r0, r29, r0
    cmplw r3, r0
    ble lbl_fn_8057B0D8_00001AB8
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057B0D8_00001AB8:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r29, r0
    bge lbl_fn_8057B0D8_00001B08
    addi r5, r29, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8057B0D8_00001AFC
    addi r3, r1, 0x8
lbl_fn_8057B0D8_00001AFC:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_8057B0D8_00001B4C
lbl_fn_8057B0D8_00001B08:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r29, r0
    bge lbl_fn_8057B0D8_00001B44
    addi r3, r29, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8057B0D8_00001B38
    addi r3, r1, 0x8
lbl_fn_8057B0D8_00001B38:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_8057B0D8_00001B4C
lbl_fn_8057B0D8_00001B44:
    lis r3, 0x1000
    subi r28, r3, 0x1
lbl_fn_8057B0D8_00001B4C:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_8057B0D8_00001B80
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057B0D8_00001B80:
    slwi r3, r28, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8057B0D8_00001BB4
    lis r3, __files@ha
    lis r4, lbl_80779F84@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F84@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057B0D8_00001BB4:
    lwz r0, 0x44(r1)
    stw r29, 0x40(r1)
    slwi r3, r0, 4
    lfs f0, 0x2c(r1)
    stw r28, 0x48(r1)
    lwz r0, 0x2c(r31)
    stw r0, 0x50(r1)
    slwi r0, r0, 4
    add r0, r29, r0
    add. r3, r3, r0
    beq lbl_fn_8057B0D8_00001BF4
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r3)
lbl_fn_8057B0D8_00001BF4:
    lwz r3, 0x44(r1)
    lwz r0, 0x50(r1)
    addi r3, r3, 0x1
    stw r3, 0x44(r1)
    lwz r3, 0x40(r1)
    slwi r0, r0, 4
    lwz r4, 0x2c(r31)
    lwz r7, 0x28(r31)
    add r6, r3, r0
    slwi r0, r4, 4
    add r5, r7, r0
    b lbl_fn_8057B0D8_00001C60
lbl_fn_8057B0D8_00001C24:
    subic. r6, r6, 0x10
    subi r5, r5, 0x10
    beq lbl_fn_8057B0D8_00001C48
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
lbl_fn_8057B0D8_00001C48:
    lwz r4, 0x50(r1)
    lwz r3, 0x44(r1)
    subi r0, r4, 0x1
    stw r0, 0x50(r1)
    addi r0, r3, 0x1
    stw r0, 0x44(r1)
lbl_fn_8057B0D8_00001C60:
    cmplw r7, r5
    blt lbl_fn_8057B0D8_00001C24
    li r4, 0x0
    stw r4, 0x2c(r31)
    addic. r0, r1, 0x40
    lwz r3, 0x30(r31)
    lwz r0, 0x48(r1)
    stw r0, 0x30(r31)
    stw r3, 0x48(r1)
    lwz r0, 0x40(r1)
    lwz r3, 0x28(r31)
    stw r0, 0x28(r31)
    stw r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r0, 0x2c(r31)
    stw r4, 0x44(r1)
    beq lbl_fn_8057B0D8_00001CB8
    lwz r3, 0x40(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8057B0D8_00001CB8
    stw r4, 0x44(r1)
    bl dtor_80084684
lbl_fn_8057B0D8_00001CB8:
    mr r3, r31
    bl fn_80548760
    lwz r31, 0x6c(r1)
    li r3, 0x10
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
