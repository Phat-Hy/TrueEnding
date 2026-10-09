#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_80042740(void);
extern void fn_80057A64(void);
extern void fn_8006CA80(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80084C24(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800DC880(void);
extern void fn_800DCA6C(void);
extern void fn_8021A4CC(void);
extern void fn_80288390(void);
extern void fn_803BF818(void);
extern void fn_8053A4E0(void);
extern void fn_8053AC8C(void);
extern void fn_8053D3E4(void);
extern void fn_8053D3FC(void);
extern void fn_8053D410(void);
extern void fn_8053D428(void);
extern void fn_8053D440(void);
extern void fn_8053D458(void);
extern void fn_8053D470(void);
extern void fn_8053D488(void);
extern void fn_8053D4C0(void);
extern void fn_8053D630(void);
extern void fn_8053D714(void);
extern void fn_8053D7F8(void);
extern void fn_8053D8DC(void);
extern void fn_8053D9E0(void);
extern void fn_8053DAC4(void);
extern void fn_8053DBA8(void);
extern void fn_8053DC8C(void);
extern void fn_8053DD70(void);
extern void fn_8053DE54(void);
extern void fn_8053E03C(void);
extern void fn_8053E3A0(void);
extern void fn_8053E4B0(void);
extern void fn_8053E510(void);
extern void fn_8053E58C(void);
extern void fn_8053E65C(void);
extern void fn_8054310C(void);
extern void fn_805436B4(void);
extern void fn_805436BC(void);
extern void fn_805436C4(void);
extern void fn_805436CC(void);
extern void fn_805436D4(void);
extern void fn_805436DC(void);
extern void fn_805436E4(void);
extern void fn_805436EC(void);
extern void fn_805436F4(void);
extern void fn_805436FC(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_806958E0(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_8075DC04[];
extern u8 lbl_8075DD20[];
extern u8 lbl_8075DE90[];
extern u8 lbl_8075E148[];
extern u8 lbl_80793BC8[];
extern u8 lbl_80793C18[];
extern u8 lbl_80793D38[];
extern u8 lbl_80793DD4[];
extern u8 lbl_80793DF0[];
extern u8 lbl_80793E38[];
extern u8 lbl_80793E58[];
extern u8 lbl_80793FD8[];
extern u8 lbl_80794008[];
extern u8 lbl_807940A0[];
extern u8 lbl_807943E0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_80887CA0;

/* Function declarations */
void fn_8053B7B8(void);
void fn_8053B82C(void);
void fn_8053BF84(void);
void fn_8053C128(void);
void fn_8053C1B4(void);
void fn_8053C1D8(void);
void fn_8053C1E0(void);
void fn_8053C204(void);
void fn_8053C20C(void);
void fn_8053C4E4(void);
void fn_8053C524(void);
void fn_8053C564(void);
void fn_8053C6A8(void);
void fn_8053C6CC(void);
void fn_8053C754(void);
void fn_8053C78C(void);
void fn_8053CEDC(void);
void fn_8053CF00(void);
void fn_8053CF08(void);
void fn_8053CF48(void);
void fn_8053D0F8(void);

asm void fn_8053B7B8(void)
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
    beq lbl_fn_8053B7B8_00000058
    beq lbl_fn_8053B7B8_00000048
    addic. r0, r3, 0x4
    beq lbl_fn_8053B7B8_00000048
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8053B7B8_00000048
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8053B7B8_00000048:
    cmpwi r31, 0x0
    ble lbl_fn_8053B7B8_00000058
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053B7B8_00000058:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053B82C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_8075DC04@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r5, r5, lbl_8075DC04@l
    mr r6, r5
    stmw r25, 0x54(r1)
    mr r29, r3
    mr r26, r4
    li r3, 0x24
    li r4, 0x4
    bl fn_80084320
    cmpwi cr1, r3, 0x0
    mr r25, r3
    beq cr1, lbl_fn_8053B82C_000000C4
    mr r4, r29
    mr r5, r26
    bl fn_8053C754
    mr r25, r3
lbl_fn_8053B82C_000000C4:
    li r0, 0x0
    stw r25, 0x28(r1)
    li r3, 0x10
    stw r0, 0x2c(r1)
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    beq cr6, lbl_fn_8053B82C_000000FC
    li r0, 0x1
    stw r0, 0x0(r3)
    lis r4, lbl_80793D38@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80793D38@l
    stw r4, 0x8(r3)
    stw r25, 0xc(r3)
lbl_fn_8053B82C_000000FC:
    cmpwi cr6, r3, 0x0
    stw r3, 0x2c(r1)
    bne cr6, lbl_fn_8053B82C_00000144
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053B82C_00000128
    lwz r12, 0x0(r25)
    mr r3, r25
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8053B82C_00000128:
    lis r3, lbl_80793BC8@ha
    addi r30, r1, 0x20
    addi r3, r3, lbl_80793BC8@l
    stw r3, 0x20(r1)
    mr r3, r30
    bl fn_800DCA6C
    cmpwi cr6, r30, 0x0
lbl_fn_8053B82C_00000144:
    mr r4, r25
    mr r5, r25
    addi r3, r1, 0x2c
    crclr 6
    bl fn_8053AC8C
    lwz r0, 0x40(r29)
    lwz r30, 0x44(r29)
    cmplw cr6, r0, r30
    bge cr6, lbl_fn_8053B82C_000001B4
    lwz r3, 0x3c(r29)
    slwi r0, r0, 3
    add. r3, r3, r0
    beq lbl_fn_8053B82C_000001A4
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053B82C_000001A4
    lwz r0, 0x4(r3)
lbl_fn_8053B82C_00000194:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053B82C_00000194
lbl_fn_8053B82C_000001A4:
    lwz r3, 0x40(r29)
    addi r0, r3, 0x1
    stw r0, 0x40(r29)
    b lbl_fn_8053B82C_000006F4
lbl_fn_8053B82C_000001B4:
    lis r3, 0x2000
    li r4, 0x1
    subi r25, r3, 0x1
    stw r4, 0x8(r1)
    subf r0, r30, r25
    cmplw cr6, r4, r0
    ble cr6, lbl_fn_8053B82C_000001F4
    lis r4, lbl_8075DC04@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DC04@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053B82C_000001F4:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r25
    srwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_8053B82C_0000023C
    addi r5, r30, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x10(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053B82C_0000029C
    b lbl_fn_8053B82C_0000029C
lbl_fn_8053B82C_0000023C:
    slwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_8053B82C_0000029C
    addi r3, r30, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw cr6, r3, r0
    b lbl_fn_8053B82C_0000029C
    beq lbl_fn_8053B82C_0000028C
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053B82C_0000028C
lbl_fn_8053B82C_0000027C:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053B82C_0000027C
lbl_fn_8053B82C_0000028C:
    lwz r3, 0x40(r29)
    addi r0, r3, 0x1
    stw r0, 0x40(r29)
    b lbl_fn_8053B82C_000006F4
lbl_fn_8053B82C_0000029C:
    li r0, 0x0
    addi r4, r29, 0x44
    lis r3, 0x2000
    stw r0, 0x30(r1)
    subi r30, r3, 0x1
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    lwz r3, 0x40(r29)
    lwz r31, 0x44(r29)
    addi r0, r3, 0x1
    subf r3, r31, r0
    stw r3, 0x1c(r1)
    subf r0, r31, r30
    cmplw cr6, r3, r0
    ble cr6, lbl_fn_8053B82C_00000304
    lis r4, lbl_8075DC04@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DC04@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053B82C_00000304:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r30
    srwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_8053B82C_00000360
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x14(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053B82C_00000350
    addi r3, r1, 0x1c
    b lbl_fn_8053B82C_00000354
lbl_fn_8053B82C_00000350:
    addi r3, r1, 0x14
lbl_fn_8053B82C_00000354:
    lwz r0, 0x0(r3)
    add r30, r31, r0
    b lbl_fn_8053B82C_00000398
lbl_fn_8053B82C_00000360:
    slwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_8053B82C_00000398
    addi r3, r31, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053B82C_0000038C
    addi r3, r1, 0x1c
    b lbl_fn_8053B82C_00000390
lbl_fn_8053B82C_0000038C:
    addi r3, r1, 0x18
lbl_fn_8053B82C_00000390:
    lwz r0, 0x0(r3)
    add r30, r31, r0
lbl_fn_8053B82C_00000398:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw cr6, r30, r0
    ble cr6, lbl_fn_8053B82C_000003CC
    lis r4, lbl_8075DC04@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DC04@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053B82C_000003CC:
    slwi r3, r30, 3
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    mr r31, r3
    bne cr6, lbl_fn_8053B82C_00000400
    lis r3, __files@ha
    lis r4, lbl_80793DD4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80793DD4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053B82C_00000400:
    lwz r0, 0x34(r1)
    stw r31, 0x30(r1)
    slwi r3, r0, 3
    stw r30, 0x38(r1)
    lwz r0, 0x40(r29)
    stw r0, 0x40(r1)
    slwi r0, r0, 3
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_8053B82C_00000454
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053B82C_00000454
    lwz r0, 0x4(r3)
lbl_fn_8053B82C_00000444:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053B82C_00000444
lbl_fn_8053B82C_00000454:
    lwz r3, 0x34(r1)
    lwz r0, 0x40(r1)
    addi r3, r3, 0x1
    stw r3, 0x34(r1)
    lwz r3, 0x30(r1)
    slwi r0, r0, 3
    lwz r4, 0x40(r29)
    lwz r5, 0x3c(r29)
    add r6, r3, r0
    slwi r0, r4, 3
    add r7, r5, r0
    b lbl_fn_8053B82C_000004D4
lbl_fn_8053B82C_00000484:
    subic. r6, r6, 0x8
    subi r7, r7, 0x8
    beq lbl_fn_8053B82C_000004BC
    lwz r0, 0x0(r7)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053B82C_000004BC
    lwz r0, 0x4(r6)
lbl_fn_8053B82C_000004AC:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053B82C_000004AC
lbl_fn_8053B82C_000004BC:
    lwz r4, 0x40(r1)
    lwz r3, 0x34(r1)
    subi r0, r4, 0x1
    stw r0, 0x40(r1)
    addi r0, r3, 0x1
    stw r0, 0x34(r1)
lbl_fn_8053B82C_000004D4:
    cmplw cr1, r5, r7
    blt cr1, lbl_fn_8053B82C_00000484
    lwz r3, 0x44(r29)
    addic. r30, r1, 0x30
    lwz r0, 0x38(r1)
    stw r0, 0x44(r29)
    stw r3, 0x38(r1)
    lwz r0, 0x30(r1)
    lwz r3, 0x3c(r29)
    stw r0, 0x3c(r29)
    stw r3, 0x30(r1)
    lwz r0, 0x34(r1)
    lwz r4, 0x40(r29)
    stw r0, 0x40(r29)
    stw r4, 0x34(r1)
    beq lbl_fn_8053B82C_000006F4
    lwz r3, 0x40(r1)
    slwi r0, r4, 3
    lwz r4, 0x30(r1)
    li r31, -0x1
    slwi r3, r3, 3
    add r28, r4, r3
    add r27, r28, r0
    b lbl_fn_8053B82C_000005DC
lbl_fn_8053B82C_00000534:
    subic. r27, r27, 0x8
    beq lbl_fn_8053B82C_000005DC
    addic. r26, r27, 0x4
    beq lbl_fn_8053B82C_000005CC
    lwz r25, 0x0(r26)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053B82C_000005BC
    sync
lbl_fn_8053B82C_00000554:
    lwarx r3, r0, r25
    subi r3, r3, 0x1
    stwcx. r3, r0, r25
    bne+ lbl_fn_8053B82C_00000554
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053B82C_000005BC
    lwz r12, 0x8(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r25
    addi r0, r25, 0x4
    sync
lbl_fn_8053B82C_00000590:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053B82C_00000590
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053B82C_000005BC
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053B82C_000005BC:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053B82C_000005CC
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053B82C_000005CC:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053B82C_000005DC
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053B82C_000005DC:
    cmplw cr1, r27, r28
    bgt cr1, lbl_fn_8053B82C_00000534
    cmpwi cr1, r30, 0x0
    li r0, 0x0
    stw r0, 0x34(r1)
    beq cr1, lbl_fn_8053B82C_000006E0
    lwz r25, 0x30(r1)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053B82C_000006CC
    li r28, 0x0
    stw r28, 0x34(r1)
    li r31, -0x1
    b lbl_fn_8053B82C_000006BC
lbl_fn_8053B82C_00000610:
    subic. r25, r25, 0x8
    beq lbl_fn_8053B82C_000006B8
    addic. r26, r25, 0x4
    beq lbl_fn_8053B82C_000006A8
    lwz r27, 0x0(r26)
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_fn_8053B82C_00000698
    sync
lbl_fn_8053B82C_00000630:
    lwarx r3, r0, r27
    subi r3, r3, 0x1
    stwcx. r3, r0, r27
    bne+ lbl_fn_8053B82C_00000630
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053B82C_00000698
    lwz r12, 0x8(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r0, r27, 0x4
    sync
lbl_fn_8053B82C_0000066C:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053B82C_0000066C
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053B82C_00000698
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053B82C_00000698:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053B82C_000006A8
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053B82C_000006A8:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053B82C_000006B8
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053B82C_000006B8:
    subi r28, r28, 0x1
lbl_fn_8053B82C_000006BC:
    cmpwi cr1, r28, 0x0
    bne cr1, lbl_fn_8053B82C_00000610
    lwz r3, 0x0(r30)
    bl dtor_80084684
lbl_fn_8053B82C_000006CC:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053B82C_000006E0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053B82C_000006E0:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053B82C_000006F4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053B82C_000006F4:
    addic. r25, r1, 0x28
    beq lbl_fn_8053B82C_000007A4
    addic. r27, r25, 0x4
    beq lbl_fn_8053B82C_00000790
    lwz r26, 0x0(r27)
    cmpwi cr1, r26, 0x0
    beq cr1, lbl_fn_8053B82C_0000077C
    sync
lbl_fn_8053B82C_00000714:
    lwarx r3, r0, r26
    subi r3, r3, 0x1
    stwcx. r3, r0, r26
    bne+ lbl_fn_8053B82C_00000714
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053B82C_0000077C
    lwz r12, 0x8(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r26
    addi r0, r26, 0x4
    sync
lbl_fn_8053B82C_00000750:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053B82C_00000750
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053B82C_0000077C
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053B82C_0000077C:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053B82C_00000790
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053B82C_00000790:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053B82C_000007A4
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053B82C_000007A4:
    lwz r3, 0x40(r29)
    lwz r4, 0x3c(r29)
    lmw r25, 0x54(r1)
    subi r0, r3, 0x1
    slwi r0, r0, 3
    lwzx r3, r4, r0
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8053BF84(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi cr1, r3, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r30, r3
    mr r31, r4
    beq cr1, lbl_fn_8053BF84_00000958
    addi r24, r3, 0x18
    cmpwi cr1, r24, 0x0
    beq cr1, lbl_fn_8053BF84_00000920
    beq cr1, lbl_fn_8053BF84_0000090C
    beq cr1, lbl_fn_8053BF84_000008F8
    lwz r4, 0x0(r24)
    cmpwi cr1, r4, 0x0
    beq cr1, lbl_fn_8053BF84_000008E4
    lwz r25, 0x4(r24)
    li r29, -0x1
    slwi r3, r25, 3
    subf r0, r25, r25
    stw r0, 0x4(r24)
    add r26, r4, r3
    b lbl_fn_8053BF84_000008D4
lbl_fn_8053BF84_00000828:
    subic. r26, r26, 0x8
    beq lbl_fn_8053BF84_000008D0
    addic. r28, r26, 0x4
    beq lbl_fn_8053BF84_000008C0
    lwz r27, 0x0(r28)
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_fn_8053BF84_000008B0
    sync
lbl_fn_8053BF84_00000848:
    lwarx r3, r0, r27
    subi r3, r3, 0x1
    stwcx. r3, r0, r27
    bne+ lbl_fn_8053BF84_00000848
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053BF84_000008B0
    lwz r12, 0x8(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r0, r27, 0x4
    sync
lbl_fn_8053BF84_00000884:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053BF84_00000884
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053BF84_000008B0
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053BF84_000008B0:
    cmpwi cr1, r29, 0x0
    ble cr1, lbl_fn_8053BF84_000008C0
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053BF84_000008C0:
    cmpwi cr1, r29, 0x0
    ble cr1, lbl_fn_8053BF84_000008D0
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053BF84_000008D0:
    subi r25, r25, 0x1
lbl_fn_8053BF84_000008D4:
    cmpwi cr1, r25, 0x0
    bne cr1, lbl_fn_8053BF84_00000828
    lwz r3, 0x0(r24)
    bl dtor_80084684
lbl_fn_8053BF84_000008E4:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053BF84_000008F8
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053BF84_000008F8:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053BF84_0000090C
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053BF84_0000090C:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053BF84_00000920
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053BF84_00000920:
    cmpwi cr1, r30, 0x0
    beq cr1, lbl_fn_8053BF84_00000948
    addic. r0, r30, 0x4
    beq lbl_fn_8053BF84_00000948
    lwz r3, 0x4(r30)
    cmpwi cr1, r3, 0x0
    beq cr1, lbl_fn_8053BF84_00000948
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8053BF84_00000948:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053BF84_00000958
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053BF84_00000958:
    mr r3, r30
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8053C128(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_8053C128_0000099C
    cmpwi r4, 0x1
    beq lbl_fn_8053C128_000009AC
    cmpwi r4, 0x2
    beq lbl_fn_8053C128_000009BC
    cmpwi r4, 0x3
    beq lbl_fn_8053C128_000009CC
    cmpwi r4, 0x4
    beq lbl_fn_8053C128_000009DC
    b lbl_fn_8053C128_000009EC
lbl_fn_8053C128_0000099C:
    lis r3, lbl_8075DC04@ha
    addi r3, r3, lbl_8075DC04@l
    addi r3, r3, 0x15
    blr
lbl_fn_8053C128_000009AC:
    lis r3, lbl_8075DC04@ha
    addi r3, r3, lbl_8075DC04@l
    addi r3, r3, 0x1a
    blr
lbl_fn_8053C128_000009BC:
    lis r3, lbl_8075DC04@ha
    addi r3, r3, lbl_8075DC04@l
    addi r3, r3, 0x1f
    blr
lbl_fn_8053C128_000009CC:
    lis r3, lbl_8075DC04@ha
    addi r3, r3, lbl_8075DC04@l
    addi r3, r3, 0x23
    blr
lbl_fn_8053C128_000009DC:
    lis r3, lbl_8075DC04@ha
    addi r3, r3, lbl_8075DC04@l
    addi r3, r3, 0x28
    blr
lbl_fn_8053C128_000009EC:
    lis r3, lbl_8075DC04@ha
    addi r3, r3, lbl_8075DC04@l
    addi r3, r3, 0x2f
    blr
}

asm void fn_8053C1B4(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_8053C1D8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8053C1E0(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_8053C204(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8053C20C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi cr1, r3, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r30, r3
    mr r31, r4
    beq cr1, lbl_fn_8053C20C_00000D14
    addi r24, r3, 0x3c
    cmpwi cr1, r24, 0x0
    beq cr1, lbl_fn_8053C20C_00000BA8
    beq cr1, lbl_fn_8053C20C_00000B94
    beq cr1, lbl_fn_8053C20C_00000B80
    lwz r4, 0x0(r24)
    cmpwi cr1, r4, 0x0
    beq cr1, lbl_fn_8053C20C_00000B6C
    lwz r25, 0x4(r24)
    li r29, -0x1
    slwi r3, r25, 3
    subf r0, r25, r25
    stw r0, 0x4(r24)
    add r26, r4, r3
    b lbl_fn_8053C20C_00000B5C
lbl_fn_8053C20C_00000AB0:
    subic. r26, r26, 0x8
    beq lbl_fn_8053C20C_00000B58
    addic. r28, r26, 0x4
    beq lbl_fn_8053C20C_00000B48
    lwz r27, 0x0(r28)
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_fn_8053C20C_00000B38
    sync
lbl_fn_8053C20C_00000AD0:
    lwarx r3, r0, r27
    subi r3, r3, 0x1
    stwcx. r3, r0, r27
    bne+ lbl_fn_8053C20C_00000AD0
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053C20C_00000B38
    lwz r12, 0x8(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r0, r27, 0x4
    sync
lbl_fn_8053C20C_00000B0C:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053C20C_00000B0C
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053C20C_00000B38
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053C20C_00000B38:
    cmpwi cr1, r29, 0x0
    ble cr1, lbl_fn_8053C20C_00000B48
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053C20C_00000B48:
    cmpwi cr1, r29, 0x0
    ble cr1, lbl_fn_8053C20C_00000B58
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053C20C_00000B58:
    subi r25, r25, 0x1
lbl_fn_8053C20C_00000B5C:
    cmpwi cr1, r25, 0x0
    bne cr1, lbl_fn_8053C20C_00000AB0
    lwz r3, 0x0(r24)
    bl dtor_80084684
lbl_fn_8053C20C_00000B6C:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C20C_00000B80
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053C20C_00000B80:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C20C_00000B94
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053C20C_00000B94:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C20C_00000BA8
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053C20C_00000BA8:
    addi r28, r30, 0x30
    cmpwi cr1, r28, 0x0
    beq cr1, lbl_fn_8053C20C_00000CDC
    beq cr1, lbl_fn_8053C20C_00000CC8
    beq cr1, lbl_fn_8053C20C_00000CB4
    lwz r4, 0x0(r28)
    cmpwi cr1, r4, 0x0
    beq cr1, lbl_fn_8053C20C_00000CA0
    lwz r27, 0x4(r28)
    li r29, -0x1
    slwi r3, r27, 3
    subf r0, r27, r27
    stw r0, 0x4(r28)
    add r26, r4, r3
    b lbl_fn_8053C20C_00000C90
lbl_fn_8053C20C_00000BE4:
    subic. r26, r26, 0x8
    beq lbl_fn_8053C20C_00000C8C
    addic. r24, r26, 0x4
    beq lbl_fn_8053C20C_00000C7C
    lwz r25, 0x0(r24)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053C20C_00000C6C
    sync
lbl_fn_8053C20C_00000C04:
    lwarx r3, r0, r25
    subi r3, r3, 0x1
    stwcx. r3, r0, r25
    bne+ lbl_fn_8053C20C_00000C04
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053C20C_00000C6C
    lwz r12, 0x8(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r25
    addi r0, r25, 0x4
    sync
lbl_fn_8053C20C_00000C40:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053C20C_00000C40
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053C20C_00000C6C
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053C20C_00000C6C:
    cmpwi cr1, r29, 0x0
    ble cr1, lbl_fn_8053C20C_00000C7C
    mr r3, r24
    bl dtor_80084684
lbl_fn_8053C20C_00000C7C:
    cmpwi cr1, r29, 0x0
    ble cr1, lbl_fn_8053C20C_00000C8C
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053C20C_00000C8C:
    subi r27, r27, 0x1
lbl_fn_8053C20C_00000C90:
    cmpwi cr1, r27, 0x0
    bne cr1, lbl_fn_8053C20C_00000BE4
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053C20C_00000CA0:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C20C_00000CB4
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053C20C_00000CB4:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C20C_00000CC8
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053C20C_00000CC8:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C20C_00000CDC
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053C20C_00000CDC:
    cmpwi cr1, r30, 0x0
    beq cr1, lbl_fn_8053C20C_00000D04
    addic. r0, r30, 0x4
    beq lbl_fn_8053C20C_00000D04
    lwz r3, 0x4(r30)
    cmpwi cr1, r3, 0x0
    beq cr1, lbl_fn_8053C20C_00000D04
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8053C20C_00000D04:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053C20C_00000D14
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053C20C_00000D14:
    mr r3, r30
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8053C4E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8053C4E4_00000D54
    cmpwi r4, 0x0
    ble lbl_fn_8053C4E4_00000D54
    bl dtor_80084684
lbl_fn_8053C4E4_00000D54:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053C524(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8053C524_00000D94
    cmpwi r4, 0x0
    ble lbl_fn_8053C524_00000D94
    bl dtor_80084684
lbl_fn_8053C524_00000D94:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053C564(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_8075DC04@ha
    addi r29, r29, lbl_8075DC04@l
    addi r3, r29, 0x90
    bl fn_800DC880
    lis r30, lbl_80793C18@ha
    li r4, 0x0
    addi r30, r30, lbl_80793C18@l
    stw r3, 0x4(r30)
    addi r3, r29, 0x95
    stw r29, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    li r31, 0x0
    addi r3, r29, 0x98
    li r4, 0x0
    stw r31, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    li r0, 0x3
    addi r3, r29, 0x9d
    li r4, 0x0
    stw r0, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    li r0, 0x1
    addi r3, r29, 0xa7
    li r4, 0x0
    stw r0, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    li r0, -0x1
    addi r3, r29, 0xb0
    li r4, 0x0
    stw r0, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r29, 0xba
    li r4, 0x0
    stw r31, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r29, 0xc6
    li r4, 0x0
    stw r31, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r29, 0xd1
    li r4, 0x0
    stw r31, 0xb4(r30)
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r29, 0xde
    li r4, 0x0
    stw r31, 0xcc(r30)
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r29, 0xe8
    li r4, 0x0
    stw r31, 0xe4(r30)
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r29, 0xf4
    li r4, 0x0
    stw r31, 0xfc(r30)
    bl fn_800DC880
    stw r31, 0x114(r30)
    lwz r31, 0x1c(r1)
    stw r3, 0x10c(r30)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053C6A8(void)
{
    nofralloc
    lis r6, lbl_80793E38@ha
    li r0, 0x0
    addi r6, r6, lbl_80793E38@l
    stw r0, 0x4(r3)
    stw r6, 0x0(r3)
    stw r4, 0x8(r3)
    stw r0, 0x10(r3)
    stw r5, 0xc(r3)
    blr
}

asm void fn_8053C6CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_8075DD20@ha
    addi r29, r29, lbl_8075DD20@l
    addi r3, r29, 0x38
    bl fn_800DC880
    lis r30, lbl_80793DF0@ha
    addi r0, r29, 0x3d
    addi r30, r30, lbl_80793DF0@l
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r29, 0x3e
    stw r0, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    li r31, 0x0
    addi r3, r29, 0x41
    li r4, 0x0
    stw r31, 0x24(r30)
    bl fn_800DC880
    stw r31, 0x3c(r30)
    lwz r31, 0x1c(r1)
    stw r3, 0x34(r30)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053C754(void)
{
    nofralloc
    lis r5, lbl_80794008@ha
    li r6, 0x0
    addi r5, r5, lbl_80794008@l
    li r0, 0x1
    stw r6, 0x4(r3)
    stw r5, 0x0(r3)
    stw r4, 0x8(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r0, 0x14(r3)
    stw r6, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    blr
}

asm void fn_8053C78C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_8075DE90@ha
    li r4, 0x4
    stw r0, 0x74(r1)
    addi r5, r5, lbl_8075DE90@l
    mr r6, r5
    li r7, 0x0
    stmw r25, 0x54(r1)
    mr r29, r3
    li r3, 0x20
    bl fn_80084320
    cmpwi cr1, r3, 0x0
    mr r25, r3
    beq cr1, lbl_fn_8053C78C_0000101C
    mr r4, r29
    bl fn_8053A4E0
    mr r25, r3
lbl_fn_8053C78C_0000101C:
    li r0, 0x0
    stw r25, 0x28(r1)
    li r3, 0x10
    stw r0, 0x2c(r1)
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    beq cr6, lbl_fn_8053C78C_00001054
    li r0, 0x1
    stw r0, 0x0(r3)
    lis r4, lbl_80793FD8@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80793FD8@l
    stw r4, 0x8(r3)
    stw r25, 0xc(r3)
lbl_fn_8053C78C_00001054:
    cmpwi cr6, r3, 0x0
    stw r3, 0x2c(r1)
    bne cr6, lbl_fn_8053C78C_0000109C
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053C78C_00001080
    lwz r12, 0x0(r25)
    mr r3, r25
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8053C78C_00001080:
    lis r3, lbl_80793BC8@ha
    addi r30, r1, 0x20
    addi r3, r3, lbl_80793BC8@l
    stw r3, 0x20(r1)
    mr r3, r30
    bl fn_800DCA6C
    cmpwi cr6, r30, 0x0
lbl_fn_8053C78C_0000109C:
    mr r4, r25
    mr r5, r25
    addi r3, r1, 0x2c
    crclr 6
    bl fn_8053AC8C
    lwz r0, 0x1c(r29)
    lwz r30, 0x20(r29)
    cmplw cr6, r0, r30
    bge cr6, lbl_fn_8053C78C_0000110C
    lwz r3, 0x18(r29)
    slwi r0, r0, 3
    add. r3, r3, r0
    beq lbl_fn_8053C78C_000010FC
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053C78C_000010FC
    lwz r0, 0x4(r3)
lbl_fn_8053C78C_000010EC:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053C78C_000010EC
lbl_fn_8053C78C_000010FC:
    lwz r3, 0x1c(r29)
    addi r0, r3, 0x1
    stw r0, 0x1c(r29)
    b lbl_fn_8053C78C_0000164C
lbl_fn_8053C78C_0000110C:
    lis r3, 0x2000
    li r4, 0x1
    subi r25, r3, 0x1
    stw r4, 0x8(r1)
    subf r0, r30, r25
    cmplw cr6, r4, r0
    ble cr6, lbl_fn_8053C78C_0000114C
    lis r4, lbl_8075DE90@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DE90@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053C78C_0000114C:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r25
    srwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_8053C78C_00001194
    addi r5, r30, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x10(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053C78C_000011F4
    b lbl_fn_8053C78C_000011F4
lbl_fn_8053C78C_00001194:
    slwi r0, r0, 1
    cmplw cr6, r30, r0
    bge cr6, lbl_fn_8053C78C_000011F4
    addi r3, r30, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw cr6, r3, r0
    b lbl_fn_8053C78C_000011F4
    beq lbl_fn_8053C78C_000011E4
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053C78C_000011E4
lbl_fn_8053C78C_000011D4:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053C78C_000011D4
lbl_fn_8053C78C_000011E4:
    lwz r3, 0x1c(r29)
    addi r0, r3, 0x1
    stw r0, 0x1c(r29)
    b lbl_fn_8053C78C_0000164C
lbl_fn_8053C78C_000011F4:
    li r0, 0x0
    addi r4, r29, 0x20
    lis r3, 0x2000
    stw r0, 0x30(r1)
    subi r30, r3, 0x1
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    lwz r3, 0x1c(r29)
    lwz r31, 0x20(r29)
    addi r0, r3, 0x1
    subf r3, r31, r0
    stw r3, 0x1c(r1)
    subf r0, r31, r30
    cmplw cr6, r3, r0
    ble cr6, lbl_fn_8053C78C_0000125C
    lis r4, lbl_8075DE90@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DE90@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053C78C_0000125C:
    lis r3, 0xaaab
    subi r0, r3, 0x5555
    mulhwu r0, r0, r30
    srwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_8053C78C_000012B8
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r3, r3, r4
    srwi r3, r3, 2
    stw r3, 0x14(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053C78C_000012A8
    addi r3, r1, 0x1c
    b lbl_fn_8053C78C_000012AC
lbl_fn_8053C78C_000012A8:
    addi r3, r1, 0x14
lbl_fn_8053C78C_000012AC:
    lwz r0, 0x0(r3)
    add r30, r31, r0
    b lbl_fn_8053C78C_000012F0
lbl_fn_8053C78C_000012B8:
    slwi r0, r0, 1
    cmplw cr6, r31, r0
    bge cr6, lbl_fn_8053C78C_000012F0
    addi r3, r31, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw cr6, r3, r0
    bge cr6, lbl_fn_8053C78C_000012E4
    addi r3, r1, 0x1c
    b lbl_fn_8053C78C_000012E8
lbl_fn_8053C78C_000012E4:
    addi r3, r1, 0x18
lbl_fn_8053C78C_000012E8:
    lwz r0, 0x0(r3)
    add r30, r31, r0
lbl_fn_8053C78C_000012F0:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw cr6, r30, r0
    ble cr6, lbl_fn_8053C78C_00001324
    lis r4, lbl_8075DE90@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075DE90@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053C78C_00001324:
    slwi r3, r30, 3
    bl fn_800844D8
    cmpwi cr6, r3, 0x0
    mr r31, r3
    bne cr6, lbl_fn_8053C78C_00001358
    lis r3, __files@ha
    lis r4, lbl_807940A0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807940A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8053C78C_00001358:
    lwz r0, 0x34(r1)
    stw r31, 0x30(r1)
    slwi r3, r0, 3
    stw r30, 0x38(r1)
    lwz r0, 0x1c(r29)
    stw r0, 0x40(r1)
    slwi r0, r0, 3
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_8053C78C_000013AC
    lwz r0, 0x28(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053C78C_000013AC
    lwz r0, 0x4(r3)
lbl_fn_8053C78C_0000139C:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053C78C_0000139C
lbl_fn_8053C78C_000013AC:
    lwz r3, 0x34(r1)
    lwz r0, 0x40(r1)
    addi r3, r3, 0x1
    stw r3, 0x34(r1)
    lwz r3, 0x30(r1)
    slwi r0, r0, 3
    lwz r4, 0x1c(r29)
    lwz r5, 0x18(r29)
    add r6, r3, r0
    slwi r0, r4, 3
    add r7, r5, r0
    b lbl_fn_8053C78C_0000142C
lbl_fn_8053C78C_000013DC:
    subic. r6, r6, 0x8
    subi r7, r7, 0x8
    beq lbl_fn_8053C78C_00001414
    lwz r0, 0x0(r7)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8053C78C_00001414
    lwz r0, 0x4(r6)
lbl_fn_8053C78C_00001404:
    lwarx r3, r0, r0
    addi r3, r3, 0x1
    stwcx. r3, r0, r0
    bne+ lbl_fn_8053C78C_00001404
lbl_fn_8053C78C_00001414:
    lwz r4, 0x40(r1)
    lwz r3, 0x34(r1)
    subi r0, r4, 0x1
    stw r0, 0x40(r1)
    addi r0, r3, 0x1
    stw r0, 0x34(r1)
lbl_fn_8053C78C_0000142C:
    cmplw cr1, r5, r7
    blt cr1, lbl_fn_8053C78C_000013DC
    lwz r3, 0x20(r29)
    addic. r30, r1, 0x30
    lwz r0, 0x38(r1)
    stw r0, 0x20(r29)
    stw r3, 0x38(r1)
    lwz r0, 0x30(r1)
    lwz r3, 0x18(r29)
    stw r0, 0x18(r29)
    stw r3, 0x30(r1)
    lwz r0, 0x34(r1)
    lwz r4, 0x1c(r29)
    stw r0, 0x1c(r29)
    stw r4, 0x34(r1)
    beq lbl_fn_8053C78C_0000164C
    lwz r3, 0x40(r1)
    slwi r0, r4, 3
    lwz r4, 0x30(r1)
    li r31, -0x1
    slwi r3, r3, 3
    add r28, r4, r3
    add r27, r28, r0
    b lbl_fn_8053C78C_00001534
lbl_fn_8053C78C_0000148C:
    subic. r27, r27, 0x8
    beq lbl_fn_8053C78C_00001534
    addic. r26, r27, 0x4
    beq lbl_fn_8053C78C_00001524
    lwz r25, 0x0(r26)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053C78C_00001514
    sync
lbl_fn_8053C78C_000014AC:
    lwarx r3, r0, r25
    subi r3, r3, 0x1
    stwcx. r3, r0, r25
    bne+ lbl_fn_8053C78C_000014AC
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053C78C_00001514
    lwz r12, 0x8(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r25
    addi r0, r25, 0x4
    sync
lbl_fn_8053C78C_000014E8:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053C78C_000014E8
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053C78C_00001514
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053C78C_00001514:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053C78C_00001524
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053C78C_00001524:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053C78C_00001534
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053C78C_00001534:
    cmplw cr1, r27, r28
    bgt cr1, lbl_fn_8053C78C_0000148C
    cmpwi cr1, r30, 0x0
    li r0, 0x0
    stw r0, 0x34(r1)
    beq cr1, lbl_fn_8053C78C_00001638
    lwz r25, 0x30(r1)
    cmpwi cr1, r25, 0x0
    beq cr1, lbl_fn_8053C78C_00001624
    li r28, 0x0
    stw r28, 0x34(r1)
    li r31, -0x1
    b lbl_fn_8053C78C_00001614
lbl_fn_8053C78C_00001568:
    subic. r25, r25, 0x8
    beq lbl_fn_8053C78C_00001610
    addic. r26, r25, 0x4
    beq lbl_fn_8053C78C_00001600
    lwz r27, 0x0(r26)
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_fn_8053C78C_000015F0
    sync
lbl_fn_8053C78C_00001588:
    lwarx r3, r0, r27
    subi r3, r3, 0x1
    stwcx. r3, r0, r27
    bne+ lbl_fn_8053C78C_00001588
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053C78C_000015F0
    lwz r12, 0x8(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r0, r27, 0x4
    sync
lbl_fn_8053C78C_000015C4:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053C78C_000015C4
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053C78C_000015F0
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053C78C_000015F0:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053C78C_00001600
    mr r3, r26
    bl dtor_80084684
lbl_fn_8053C78C_00001600:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053C78C_00001610
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053C78C_00001610:
    subi r28, r28, 0x1
lbl_fn_8053C78C_00001614:
    cmpwi cr1, r28, 0x0
    bne cr1, lbl_fn_8053C78C_00001568
    lwz r3, 0x0(r30)
    bl dtor_80084684
lbl_fn_8053C78C_00001624:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C78C_00001638
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053C78C_00001638:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C78C_0000164C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053C78C_0000164C:
    addic. r25, r1, 0x28
    beq lbl_fn_8053C78C_000016FC
    addic. r27, r25, 0x4
    beq lbl_fn_8053C78C_000016E8
    lwz r26, 0x0(r27)
    cmpwi cr1, r26, 0x0
    beq cr1, lbl_fn_8053C78C_000016D4
    sync
lbl_fn_8053C78C_0000166C:
    lwarx r3, r0, r26
    subi r3, r3, 0x1
    stwcx. r3, r0, r26
    bne+ lbl_fn_8053C78C_0000166C
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053C78C_000016D4
    lwz r12, 0x8(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r26
    addi r0, r26, 0x4
    sync
lbl_fn_8053C78C_000016A8:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053C78C_000016A8
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053C78C_000016D4
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053C78C_000016D4:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C78C_000016E8
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053C78C_000016E8:
    li r0, -0x1
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053C78C_000016FC
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053C78C_000016FC:
    lwz r3, 0x1c(r29)
    lwz r4, 0x18(r29)
    lmw r25, 0x54(r1)
    subi r0, r3, 0x1
    slwi r0, r0, 3
    lwzx r3, r4, r0
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8053CEDC(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_8053CF00(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8053CF08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8053CF08_00001778
    cmpwi r4, 0x0
    ble lbl_fn_8053CF08_00001778
    bl dtor_80084684
lbl_fn_8053CF08_00001778:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053CF48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_8075DE90@ha
    addi r29, r29, lbl_8075DE90@l
    stw r28, 0x10(r1)
    lis r28, lbl_80793E58@ha
    addi r28, r28, lbl_80793E58@l
    addi r3, r29, 0x4d
    bl fn_800DC880
    addi r31, r28, 0x0
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r29, 0x52
    stw r29, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    li r0, 0x1
    addi r3, r29, 0x57
    li r4, 0x0
    stw r0, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    li r30, 0x0
    addi r3, r29, 0x5a
    li r4, 0x0
    stw r30, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r29, 0x4d
    li r4, 0x0
    stw r30, 0x54(r31)
    bl fn_800DC880
    addi r31, r28, 0x60
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r29, 0x52
    stw r29, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    li r0, 0x2
    addi r3, r29, 0x57
    li r4, 0x0
    stw r0, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r29, 0x5a
    li r4, 0x0
    stw r30, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r29, 0x4d
    li r4, 0x0
    stw r30, 0x54(r31)
    bl fn_800DC880
    addi r31, r28, 0xc0
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r29, 0x52
    stw r29, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    li r0, 0x3
    addi r3, r29, 0x57
    li r4, 0x0
    stw r0, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r29, 0x5a
    li r4, 0x0
    stw r30, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r29, 0x4d
    li r4, 0x0
    stw r30, 0x54(r31)
    bl fn_800DC880
    addi r31, r28, 0x120
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r29, 0x52
    stw r29, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    li r0, 0x4
    addi r3, r29, 0x57
    li r4, 0x0
    stw r0, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r29, 0x5a
    li r4, 0x0
    stw r30, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    stw r30, 0x54(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053D0F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D1D3C
    addi r3, r28, 0x48
    bl fn_8053D3E4
    lis r3, lbl_807943E0@ha
    li r30, 0x0
    addi r3, r3, lbl_807943E0@l
    stw r3, 0x0(r28)
    addi r0, r3, 0x1c
    stw r0, 0x48(r28)
    addi r3, r28, 0x58
    stw r30, 0x50(r28)
    stw r30, 0x54(r28)
    bl fn_8053D3FC
    addi r3, r28, 0x5c
    bl fn_80288390
    addi r3, r28, 0x68
    bl fn_8021A4CC
    stw r30, 0x94(r28)
    addi r3, r28, 0x9c
    bl fn_80057A64
    addi r3, r28, 0xa8
    bl fn_80057A64
    lfs f0, lbl_80887CA0
    addi r3, r28, 0xb8
    stfs f0, 0xb4(r28)
    bl fn_8053D4C0
    addi r3, r28, 0xc4
    bl fn_8053D630
    addi r3, r28, 0xd4
    bl fn_8053D714
    addi r3, r28, 0xe4
    bl fn_8053D7F8
    addi r3, r28, 0xf4
    bl fn_8053D8DC
    addi r3, r28, 0x104
    bl fn_8053D9E0
    addi r3, r28, 0x114
    bl fn_8053DAC4
    addi r3, r28, 0x124
    bl fn_8053DBA8
    addi r3, r28, 0x134
    bl fn_8053DC8C
    addi r3, r28, 0x144
    bl fn_8053DD70
    addi r3, r28, 0x154
    bl fn_8053DE54
    addi r3, r28, 0x164
    bl fn_8053E03C
    lis r4, fn_800CB360@ha
    lis r5, fn_800CB3A0@ha
    addi r3, r28, 0x174
    li r6, 0x4
    addi r4, r4, fn_800CB360@l
    addi r5, r5, fn_800CB3A0@l
    li r7, 0x4
    bl fn_806958E0
    addi r3, r28, 0x184
    bl fn_8053E3A0
    lfs f0, lbl_80887CA0
    li r4, -0x1
    li r0, 0x1
    stw r4, 0x190(r28)
    addi r3, r28, 0x1c4
    stw r0, 0x194(r28)
    stfs f0, 0x198(r28)
    stfs f0, 0x19c(r28)
    stw r30, 0x1a0(r28)
    stw r4, 0x1a4(r28)
    stw r30, 0x1a8(r28)
    stw r30, 0x1ac(r28)
    stw r30, 0x1bc(r28)
    stw r30, 0x1c0(r28)
    bl fn_8006CA80
    stw r30, 0x1cc(r28)
    addi r3, r28, 0x1d4
    stw r30, 0x1d0(r28)
    bl fn_8053E4B0
    stw r30, 0x1ec(r28)
    addi r3, r28, 0x294
    stw r30, 0x280(r28)
    stw r30, 0x28c(r28)
    stw r30, 0x290(r28)
    bl fn_8053E510
    addi r3, r28, 0x29c
    bl fn_803BF818
    addi r3, r28, 0x2a0
    bl fn_80042740
    stw r30, 0x98(r28)
    mr r3, r28
    li r4, 0x1
    bl fn_8053D410
    mr r3, r28
    li r4, 0x1
    bl fn_8053D428
    mr r3, r28
    li r4, 0x0
    bl fn_8053D440
    mr r3, r28
    li r4, 0x0
    bl fn_8053D458
    mr r3, r28
    li r4, 0x0
    bl fn_8053D470
    lis r31, lbl_807C7030@ha
    addi r3, r28, 0x9c
    addi r4, r31, lbl_807C7030@l
    bl fn_8000D124
    addi r3, r28, 0xa8
    addi r4, r31, lbl_807C7030@l
    bl fn_8000D124
    stw r30, 0x1b0(r28)
    addi r31, r28, 0x1f0
    li r29, 0x0
    stw r30, 0x1b4(r28)
    stw r30, 0x1b8(r28)
lbl_fn_8053D0F8_00001B2C:
    mr r3, r31
    bl fn_8053D488
    addi r29, r29, 0x1
    addi r31, r31, 0x24
    cmpwi r29, 0x4
    blt lbl_fn_8053D0F8_00001B2C
    lis r31, lbl_8075E148@ha
    addi r3, r28, 0x74
    addi r4, r31, lbl_8075E148@l
    bl strcpy
    li r0, 0x0
    stw r0, 0x288(r28)
    mr r4, r28
    addi r3, r28, 0xc4
    stw r0, 0x284(r28)
    bl fn_805436FC
    mr r4, r28
    addi r3, r28, 0xd4
    bl fn_805436F4
    mr r4, r28
    addi r3, r28, 0xe4
    bl fn_805436EC
    mr r4, r28
    addi r3, r28, 0xf4
    bl fn_805436E4
    mr r4, r28
    addi r3, r28, 0x104
    bl fn_805436DC
    mr r4, r28
    addi r3, r28, 0x124
    bl fn_805436D4
    mr r4, r28
    addi r3, r28, 0x134
    bl fn_805436CC
    mr r4, r28
    addi r3, r28, 0x144
    bl fn_805436C4
    mr r4, r28
    addi r3, r28, 0x154
    bl fn_805436BC
    mr r4, r28
    addi r3, r28, 0x164
    bl fn_805436B4
    addi r31, r31, lbl_8075E148@l
    addi r3, r28, 0x164
    addi r4, r31, 0x1
    li r5, 0x0
    bl fn_8054310C
    addi r3, r28, 0x184
    bl fn_8053E58C
    addi r3, r28, 0x294
    addi r6, r31, 0x8
    li r4, 0x4
    li r5, 0x4
    bl fn_8053E65C
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
