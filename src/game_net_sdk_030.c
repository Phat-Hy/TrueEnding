#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_19(void);
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_19(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80680CF8(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_806A4270(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D7350(void);
extern void fn_806D7A90(void);
extern void fn_806D7AA0(void);
extern void fn_806D7AC0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7C40(void);
extern void fn_806D7CB0(void);
extern void fn_806D7D60(void);
extern void fn_806D7EE0(void);
extern void fn_806D7F20(void);
extern void fn_806D8060(void);
extern void fn_806D8560(void);
extern void fn_806D8E30(void);
extern void fn_806D8EB0(void);
extern void fn_806D9060(void);
extern void fn_806D9EE0(void);
extern void fn_806D9EF0(void);
extern void fn_806DA070(void);
extern void fn_806DA330(void);
extern void fn_806DA540(void);
extern void fn_806DA570(void);
extern void fn_806DA7D0(void);
extern void fn_806DBA70(void);
extern void fn_806DC0B0(void);
extern void fn_806E0770(void);
extern void fn_806E3000(void);
extern void fn_806E30A0(void);
extern void fn_806E3160(void);
extern void fn_806E3580(void);
extern void fn_806E3980(void);
extern void fn_806E4FB0(void);
extern void fn_806E5050(void);
extern void fn_806E51E0(void);
extern void fn_806E52A0(void);
extern void fn_806E5310(void);
extern void fn_806E57E0(void);
extern void fn_806E59C0(void);
extern void fn_806E5A60(void);
extern void fn_806E5B10(void);
extern void fn_806E5D00(void);
extern void fn_806E8B10(void);
extern void fn_806E8E10(void);
extern void fn_806E8FB0(void);
extern void fn_806E91A0(void);
extern void fn_806E91F0(void);
extern void memmove(void);
extern int sprintf(char* str, const char* format, ...);
extern void strchr(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807C3058[];
extern u8 lbl_807C2DD0[];
extern u8 lbl_807C2F24[];
extern u8 lbl_807C2FC8[];
extern u8 lbl_807C2FD8[];
extern u8 lbl_807C2FE0[];
extern u8 lbl_807C3008[];
extern u8 lbl_807C3048[];
extern u8 lbl_807C3098[];
extern u8 lbl_80860DD8[];

/* Small data declarations */

/* Function declarations */
void pad_03_806DDA2C_text(void);
void fn_806DDA30(void);
void fn_806DDE60(void);
void fn_806DDFD0(void);
void fn_806DE020(void);
void fn_806DE290(void);
void fn_806DE2F0(void);
void fn_806DE3A0(void);
void fn_806DE480(void);
void fn_806DE4E0(void);
void fn_806DE550(void);
void fn_806DE660(void);
void fn_806DE670(void);
void fn_806DE790(void);
void fn_806DE7F0(void);
void fn_806DE940(void);
void fn_806DEA40(void);
void fn_806DEBA0(void);
void fn_806DED00(void);
void fn_806DED80(void);
void fn_806DEE40(void);
void fn_806DEF10(void);
void fn_806DF1C0(void);
void fn_806DF2E0(void);
void fn_806DF610(void);
void fn_806DF860(void);

asm void pad_03_806DDA2C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806DDA30(void)
{
    nofralloc
    stwu r1, -0x880(r1)
    mflr r0
    stw r0, 0x884(r1)
    addi r11, r1, 0x880
    bl _savegpr_20
    mr r21, r4
    lis r23, lbl_807C2DD0@ha
    mr r22, r5
    lwz r4, 0x10(r4)
    mr r20, r3
    addi r23, r23, lbl_807C2DD0@l
    addi r5, r1, 0x14
    bl fn_806E57E0
    cmpwi r3, 0x0
    bne lbl_fn_806DDA30_00000054
    mr r3, r20
    addi r4, r23, 0x154
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DDA30_00000410
lbl_fn_806DDA30_00000054:
    mr r3, r22
    addi r4, r23, 0x180
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806DDA30_00000114
    lwz r22, 0x44(r21)
    b lbl_fn_806DDA30_00000084
    nop
lbl_fn_806DDA30_00000074:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    beq lbl_fn_806DDA30_0000008C
    lwz r22, 0xc(r22)
lbl_fn_806DDA30_00000084:
    cmpwi r22, 0x0
    bne lbl_fn_806DDA30_00000074
lbl_fn_806DDA30_0000008C:
    cmpwi r22, 0x0
    bne lbl_fn_806DDA30_0000009C
    li r3, 0x0
    b lbl_fn_806DDA30_00000410
lbl_fn_806DDA30_0000009C:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    bne lbl_fn_806DDA30_0000040C
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_fn_806DDA30_0000040C
    li r3, 0x10
    bl fn_806D7A90
    lwz r9, 0x8(r22)
    li r0, 0x0
    lwz r8, 0x4(r22)
    mr r5, r3
    stw r9, 0x40(r1)
    addi r4, r1, 0x28
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r21)
    stw r0, 0x0(r3)
    mr r3, r20
    stw r8, 0x44(r1)
    stw r9, 0x28(r1)
    stw r8, 0x2c(r1)
    bl fn_806DEE40
    mr r3, r21
    mr r4, r22
    bl fn_806E5310
    b lbl_fn_806DDA30_0000040C
lbl_fn_806DDA30_00000114:
    li r28, 0x0
    stw r28, 0x10(r1)
    mr r3, r20
    mr r4, r22
    stw r28, 0xc(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x648
    addi r7, r1, 0x448
    stw r28, 0x8(r1)
    bl fn_806E8FB0
    addi r3, r1, 0x648
    addi r4, r23, 0x184
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806DDA30_00000178
    mr r3, r20
    addi r5, r23, 0x18c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r20
    li r4, 0x3
    li r5, 0x0
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DDA30_00000410
lbl_fn_806DDA30_00000178:
    addi r3, r1, 0x448
    bl fn_80684600
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806DDA30_00000234
    lwz r22, 0x44(r21)
    b lbl_fn_806DDA30_000001A4
lbl_fn_806DDA30_00000194:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    beq lbl_fn_806DDA30_000001AC
    lwz r22, 0xc(r22)
lbl_fn_806DDA30_000001A4:
    cmpwi r22, 0x0
    bne lbl_fn_806DDA30_00000194
lbl_fn_806DDA30_000001AC:
    cmpwi r22, 0x0
    bne lbl_fn_806DDA30_000001BC
    li r3, 0x0
    b lbl_fn_806DDA30_00000410
lbl_fn_806DDA30_000001BC:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    bne lbl_fn_806DDA30_0000040C
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_fn_806DDA30_0000040C
    li r3, 0x10
    bl fn_806D7A90
    lwz r9, 0x8(r22)
    li r0, 0x0
    lwz r8, 0x4(r22)
    mr r5, r3
    stw r9, 0x38(r1)
    addi r4, r1, 0x20
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r21)
    stw r0, 0x0(r3)
    mr r3, r20
    stw r8, 0x3c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    bl fn_806DEE40
    mr r3, r21
    mr r4, r22
    bl fn_806E5310
    b lbl_fn_806DDA30_0000040C
lbl_fn_806DDA30_00000234:
    slwi r23, r3, 2
    mr r3, r23
    bl fn_806D7A90
    mr r24, r3
    mr r3, r23
    bl fn_806D7A90
    mr r23, r3
    mr r27, r24
    mr r26, r23
    addi r30, r1, 0x248
    addi r31, r1, 0x48
    li r25, 0x0
    b lbl_fn_806DDA30_00000360
lbl_fn_806DDA30_00000268:
    mr r3, r20
    mr r4, r22
    addi r5, r1, 0xc
    addi r6, r1, 0x648
    addi r7, r1, 0x448
    bl fn_806E8FB0
    addi r3, r1, 0x648
    bl strlen
    mr r5, r3
    addi r3, r1, 0x648
    addi r4, r1, 0x248
    addi r6, r1, 0x10
    li r7, 0x2
    bl fn_806D9060
    lwz r0, 0x10(r1)
    addi r3, r1, 0x448
    stbx r28, r30, r0
    bl strlen
    mr r5, r3
    addi r3, r1, 0x448
    addi r4, r1, 0x48
    addi r6, r1, 0x10
    li r7, 0x2
    bl fn_806D9060
    lwz r0, 0x10(r1)
    mr r3, r30
    stbx r28, r31, r0
    bl fn_806D8E30
    stw r3, 0x0(r27)
    mr r3, r31
    bl fn_806D8E30
    stw r3, 0x0(r26)
    mr r3, r20
    mr r5, r30
    addi r6, r1, 0x8
    lwz r4, 0x14(r1)
    lwz r4, 0xc(r4)
    lwz r4, 0x38(r4)
    bl fn_806E3160
    cmpwi r3, 0x0
    bne lbl_fn_806DDA30_00000338
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806DDA30_00000338
    lwz r4, 0x14(r1)
    mr r3, r20
    mr r5, r30
    mr r6, r31
    lwz r4, 0xc(r4)
    lwz r4, 0x38(r4)
    bl fn_806E3000
    b lbl_fn_806DDA30_00000354
lbl_fn_806DDA30_00000338:
    lwz r4, 0x14(r1)
    mr r3, r20
    addi r5, r1, 0x248
    addi r6, r1, 0x48
    lwz r4, 0xc(r4)
    lwz r4, 0x38(r4)
    bl fn_806E30A0
lbl_fn_806DDA30_00000354:
    addi r27, r27, 0x4
    addi r26, r26, 0x4
    addi r25, r25, 0x1
lbl_fn_806DDA30_00000360:
    cmpw r25, r29
    blt lbl_fn_806DDA30_00000268
    lwz r22, 0x44(r21)
    b lbl_fn_806DDA30_00000384
    nop
lbl_fn_806DDA30_00000374:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    beq lbl_fn_806DDA30_0000038C
    lwz r22, 0xc(r22)
lbl_fn_806DDA30_00000384:
    cmpwi r22, 0x0
    bne lbl_fn_806DDA30_00000374
lbl_fn_806DDA30_0000038C:
    cmpwi r22, 0x0
    bne lbl_fn_806DDA30_0000039C
    li r3, 0x0
    b lbl_fn_806DDA30_00000410
lbl_fn_806DDA30_0000039C:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x68
    bne lbl_fn_806DDA30_0000040C
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_fn_806DDA30_0000040C
    li r3, 0x10
    bl fn_806D7A90
    lwz r9, 0x8(r22)
    mr r5, r3
    lwz r8, 0x4(r22)
    addi r4, r1, 0x18
    stw r9, 0x30(r1)
    li r6, 0x0
    li r7, 0xe
    stw r29, 0xc(r3)
    stw r24, 0x4(r3)
    stw r23, 0x8(r3)
    lwz r0, 0x10(r21)
    stw r0, 0x0(r3)
    mr r3, r20
    stw r8, 0x34(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    bl fn_806DEE40
    mr r3, r21
    mr r4, r22
    bl fn_806E5310
lbl_fn_806DDA30_0000040C:
    li r3, 0x0
lbl_fn_806DDA30_00000410:
    addi r11, r1, 0x880
    bl _restgpr_20
    lwz r0, 0x884(r1)
    mtlr r0
    addi r1, r1, 0x880
    blr
}

asm void fn_806DDE60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r31, lbl_807C2DD0@ha
    lwz r28, 0x0(r3)
    mr r27, r3
    addi r5, r1, 0x8
    addi r31, r31, lbl_807C2DD0@l
    bl fn_806E57E0
    cmpwi r3, 0x0
    bne lbl_fn_806DDE60_0000047C
    mr r3, r27
    addi r4, r31, 0x154
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DDE60_0000058C
lbl_fn_806DDE60_0000047C:
    lwz r29, 0x8(r1)
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806DDE60_000004A0
    mr r3, r27
    addi r4, r31, 0x154
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DDE60_0000058C
lbl_fn_806DDE60_000004A0:
    lwz r30, 0x0(r27)
    mr r3, r27
    addi r5, r31, 0x1b0
    addi r4, r30, 0x210
    bl fn_806DE480
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x168
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r27
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x1c0
    bl fn_806DE480
    lwz r5, 0x0(r29)
    mr r3, r27
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x1d0
    bl fn_806DE480
    lwz r5, 0x14(r29)
    mr r3, r27
    addi r4, r30, 0x210
    bl fn_806DE480
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x178
    bl fn_806DE480
    b lbl_fn_806DDE60_0000052C
    b lbl_fn_806DDE60_0000058C
lbl_fn_806DDE60_0000052C:
    lwz r4, 0x8(r1)
    lwz r3, 0x18(r4)
    subi r0, r3, 0x1
    stw r0, 0x18(r4)
    lwz r0, 0x100(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806DDE60_00000588
    lwz r3, 0x8(r1)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_806DDE60_00000588
    lwz r3, 0x14(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x14(r3)
    lwz r3, 0x8(r1)
    bl fn_806E5D00
    cmpwi r3, 0x0
    beq lbl_fn_806DDE60_00000588
    lwz r4, 0x8(r1)
    mr r3, r27
    bl fn_806E59C0
lbl_fn_806DDE60_00000588:
    li r3, 0x0
lbl_fn_806DDE60_0000058C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DDFD0(void)
{
    nofralloc
    lwz r6, 0x8(r4)
    cmpwi r6, 0x0
    beq lbl_fn_806DDFD0_000005C8
    lwz r3, 0x0(r6)
    cmpw r3, r5
    ble lbl_fn_806DDFD0_000005C8
    subi r0, r3, 0x1
    stw r0, 0x0(r6)
    b lbl_fn_806DDFD0_000005E8
lbl_fn_806DDFD0_000005C8:
    lwz r4, 0xc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_806DDFD0_000005E8
    lwz r3, 0x0(r4)
    cmpw r3, r5
    ble lbl_fn_806DDFD0_000005E8
    subi r0, r3, 0x1
    stw r0, 0x0(r4)
lbl_fn_806DDFD0_000005E8:
    li r3, 0x1
    blr
}

asm void fn_806DE020(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r30, lbl_807C2DD0@ha
    lwz r29, 0x0(r3)
    mr r31, r5
    mr r28, r3
    mr r27, r4
    addi r30, r30, lbl_807C2DD0@l
    addi r5, r1, 0xc
    bl fn_806E57E0
    cmpwi r3, 0x0
    bne lbl_fn_806DE020_00000644
    mr r3, r28
    addi r4, r30, 0x154
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DE020_00000844
lbl_fn_806DE020_00000644:
    cmpwi r31, 0x1
    bne lbl_fn_806DE020_000006B0
    mr r3, r28
    addi r4, r29, 0x210
    addi r5, r30, 0x1d8
    bl fn_806DE480
    mr r3, r28
    addi r4, r29, 0x210
    addi r5, r30, 0x168
    bl fn_806DE480
    lwz r5, 0x198(r29)
    mr r3, r28
    addi r4, r29, 0x210
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r29, 0x210
    addi r5, r30, 0x1e4
    bl fn_806DE480
    lwz r5, 0xc(r1)
    mr r3, r28
    addi r4, r29, 0x210
    lwz r5, 0x0(r5)
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r29, 0x210
    addi r5, r30, 0x178
    bl fn_806DE480
lbl_fn_806DE020_000006B0:
    cmpwi r27, 0x0
    bgt lbl_fn_806DE020_000006C8
    mr r3, r28
    addi r4, r30, 0x154
    bl fn_806E91F0
    b lbl_fn_806DE020_000006EC
lbl_fn_806DE020_000006C8:
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806DE020_000006EC
    lwz r3, 0x8(r1)
    li r0, 0x1
    stw r0, 0x2c(r3)
lbl_fn_806DE020_000006EC:
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806DE020_00000768
    lwz r31, 0x0(r3)
    lwz r3, 0x8(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r1)
    li r30, 0x0
    lwz r3, 0x8(r3)
    stw r30, 0x8(r3)
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    stw r30, 0xc(r3)
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    bl fn_806D7AC0
    lwz r5, 0xc(r1)
    lis r4, fn_806DDFD0@ha
    mr r3, r28
    stw r30, 0x8(r5)
    mr r5, r31
    addi r4, r4, fn_806DDFD0@l
    lwz r6, 0x5d0(r29)
    subi r0, r6, 0x1
    stw r0, 0x5d0(r29)
    bl fn_806E5B10
lbl_fn_806DE020_00000768:
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806DE020_00000840
    lwz r30, 0x0(r3)
    lwz r3, 0x8(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r1)
    li r31, 0x0
    lwz r3, 0xc(r3)
    stw r31, 0x8(r3)
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    stw r31, 0xc(r3)
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    lwz r3, 0x10(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    stw r31, 0x10(r3)
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    lwz r3, 0x14(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    stw r31, 0x14(r3)
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r1)
    stw r31, 0xc(r3)
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    lwz r3, 0x38(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806DE020_00000820
    bl fn_806D5850
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    stw r31, 0x38(r3)
lbl_fn_806DE020_00000820:
    lwz r6, 0x5d0(r29)
    lis r4, fn_806DDFD0@ha
    mr r3, r28
    mr r5, r30
    subi r0, r6, 0x1
    stw r0, 0x5d0(r29)
    addi r4, r4, fn_806DDFD0@l
    bl fn_806E5B10
lbl_fn_806DE020_00000840:
    li r3, 0x0
lbl_fn_806DE020_00000844:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DE290(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    bgt lbl_fn_806DE290_00000894
    lis r4, lbl_807C2F24@ha
    addi r4, r4, lbl_807C2F24@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DE290_000008B0
lbl_fn_806DE290_00000894:
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806DE290_000008AC
    lwz r3, 0x8(r1)
    stw r31, 0x2c(r3)
lbl_fn_806DE290_000008AC:
    li r3, 0x0
lbl_fn_806DE290_000008B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DE2F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0x8(r4)
    mr r27, r3
    lwz r30, 0x4(r4)
    mr r28, r4
    lwz r6, 0x0(r4)
    mr r29, r5
    cmpw r30, r31
    bne lbl_fn_806DE2F0_0000092C
    addi r4, r30, 0x4001
    mr r3, r6
    addi r30, r30, 0x4000
    bl fn_806D7AA0
    cmpwi r3, 0x0
    mr r6, r3
    bne lbl_fn_806DE2F0_0000092C
    lis r4, lbl_807C2FC8@ha
    mr r3, r27
    addi r4, r4, lbl_807C2FC8@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DE2F0_00000954
lbl_fn_806DE2F0_0000092C:
    stbx r29, r6, r31
    add r4, r31, r6
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x1(r4)
    lwz r4, 0x8(r28)
    stw r30, 0x4(r28)
    addi r0, r4, 0x1
    stw r0, 0x8(r28)
    stw r6, 0x0(r28)
lbl_fn_806DE2F0_00000954:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DE3A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r5, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    bne lbl_fn_806DE3A0_000009A8
    li r3, 0x0
    b lbl_fn_806DE3A0_00000A38
lbl_fn_806DE3A0_000009A8:
    lwz r31, 0x8(r4)
    lwz r30, 0x4(r4)
    lwz r29, 0x0(r4)
    subf r0, r31, r30
    cmpw r0, r6
    bge lbl_fn_806DE3A0_00000A04
    cmpwi r6, 0x4000
    li r0, 0x4000
    blt lbl_fn_806DE3A0_000009D0
    mr r0, r28
lbl_fn_806DE3A0_000009D0:
    add r30, r30, r0
    mr r3, r29
    addi r4, r30, 0x1
    bl fn_806D7AA0
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806DE3A0_00000A04
    lis r4, lbl_807C2FC8@ha
    mr r3, r25
    addi r4, r4, lbl_807C2FC8@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DE3A0_00000A38
lbl_fn_806DE3A0_00000A04:
    mr r4, r27
    mr r5, r28
    add r3, r29, r31
    bl memcpy
    add r0, r31, r28
    li r3, 0x0
    stbx r3, r29, r0
    li r3, 0x0
    lwz r0, 0x8(r26)
    stw r30, 0x4(r26)
    add r0, r0, r28
    stw r0, 0x8(r26)
    stw r29, 0x0(r26)
lbl_fn_806DE3A0_00000A38:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DE480(void)
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
    mr r3, r31
    bl strlen
    mr r6, r3
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_806DE3A0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DE4E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_807C2FD8@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r6, lbl_807C2FD8@l
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0x8
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    mr r6, r3
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    bl fn_806DE3A0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DE550(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r4
    mr r27, r3
    mr r4, r5
    mr r5, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    mr r3, r28
    li r6, 0x0
    bl fn_806D7D60
    cmpwi r3, -0x1
    bne lbl_fn_806DE550_00000BE4
    mr r3, r28
    bl fn_806D7F20
    cmpwi r3, -0x6
    beq lbl_fn_806DE550_00000BD4
    cmpwi r3, -0x1a
    beq lbl_fn_806DE550_00000BD4
    cmpwi r3, -0x4c
    beq lbl_fn_806DE550_00000BD4
    lbz r0, 0x0(r31)
    cmpwi r0, 0x50
    bne lbl_fn_806DE550_00000BA8
    lbz r0, 0x1(r31)
    cmpwi r0, 0x52
    bne lbl_fn_806DE550_00000BA8
    li r3, 0x3
    b lbl_fn_806DE550_00000C10
lbl_fn_806DE550_00000BA8:
    lis r5, lbl_807C2FE0@ha
    mr r3, r27
    addi r5, r5, lbl_807C2FE0@l
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r27
    li r4, 0x3
    li r5, 0x0
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DE550_00000C10
lbl_fn_806DE550_00000BD4:
    li r0, 0x0
    stw r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_806DE550_00000C0C
lbl_fn_806DE550_00000BE4:
    cmpwi r3, 0x0
    bne lbl_fn_806DE550_00000C00
    li r0, 0x0
    stw r0, 0x0(r30)
    li r0, 0x1
    stw r0, 0x0(r29)
    b lbl_fn_806DE550_00000C0C
lbl_fn_806DE550_00000C00:
    stw r3, 0x0(r30)
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_806DE550_00000C0C:
    li r3, 0x0
lbl_fn_806DE550_00000C10:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DE660(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_806DE670(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r6, 0x0
    lwz r31, 0x0(r3)
    mr r29, r6
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    bne lbl_fn_806DE670_00000C80
    li r3, 0x0
    b lbl_fn_806DE670_00000D44
lbl_fn_806DE670_00000C80:
    lwz r3, 0x38(r4)
    lwz r0, 0x34(r4)
    subf. r0, r3, r0
    bne lbl_fn_806DE670_00000D18
    lwz r3, 0x3c(r4)
    bl fn_806D58F0
    cmpwi r3, 0x0
    bne lbl_fn_806DE670_00000D18
    lwz r3, 0x8(r27)
    lhz r4, 0xc(r27)
    bl fn_806DA7D0
    subi r0, r3, 0x17
    cmpw r29, r0
    bgt lbl_fn_806DE670_00000CE0
    lwz r3, 0x8(r27)
    mr r6, r28
    lhz r4, 0xc(r27)
    mr r7, r29
    addi r5, r31, 0x220
    li r8, 0x1
    bl fn_806DA330
    mr r30, r29
    li r29, 0x0
    b lbl_fn_806DE670_00000D18
lbl_fn_806DE670_00000CE0:
    lwz r3, 0x8(r27)
    lhz r4, 0xc(r27)
    bl fn_806DA7D0
    cmplwi r3, 0x17
    ble lbl_fn_806DE670_00000D18
    subi r30, r3, 0x17
    lwz r3, 0x8(r27)
    lhz r4, 0xc(r27)
    mr r6, r28
    mr r7, r30
    addi r5, r31, 0x220
    li r8, 0x1
    bl fn_806DA330
    subf r29, r30, r29
lbl_fn_806DE670_00000D18:
    cmpwi r29, 0x0
    beq lbl_fn_806DE670_00000D40
    mr r3, r26
    mr r6, r29
    addi r4, r27, 0x2c
    add r5, r28, r30
    bl fn_806DE3A0
    cmpwi r3, 0x0
    beq lbl_fn_806DE670_00000D40
    b lbl_fn_806DE670_00000D44
lbl_fn_806DE670_00000D40:
    li r3, 0x0
lbl_fn_806DE670_00000D44:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DE790(void)
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
    mr r3, r31
    bl strlen
    mr r6, r3
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_806DE670
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DE7F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_19
    lwz r28, 0x0(r5)
    mr r19, r3
    lwz r27, 0x8(r5)
    mr r20, r4
    lwz r26, 0x4(r5)
    mr r21, r5
    mr r22, r6
    mr r23, r7
    li r25, 0x0
    li r24, 0x0
    li r30, 0x0
    lis r31, 0x2
lbl_fn_806DE7F0_00000E08:
    addi r29, r27, 0x4000
    cmpw r29, r26
    ble lbl_fn_806DE7F0_00000E50
    mr r26, r29
    mr r3, r28
    addi r4, r29, 0x1
    bl fn_806D7AA0
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806DE7F0_00000E48
    lis r4, lbl_807C2FC8@ha
    mr r3, r19
    addi r4, r4, lbl_807C2FC8@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DE7F0_00000EF4
lbl_fn_806DE7F0_00000E48:
    stw r3, 0x0(r21)
    stw r29, 0x4(r21)
lbl_fn_806DE7F0_00000E50:
    mr r3, r20
    add r4, r28, r27
    subf r5, r27, r26
    li r6, 0x0
    bl fn_806D7CB0
    cmpwi r3, -0x1
    mr r29, r3
    bne lbl_fn_806DE7F0_00000EA8
    mr r3, r20
    bl fn_806D7F20
    cmpwi r3, -0x6
    beq lbl_fn_806DE7F0_00000EC0
    cmpwi r3, -0x1a
    beq lbl_fn_806DE7F0_00000EC0
    cmpwi r3, -0x4c
    beq lbl_fn_806DE7F0_00000EC0
    lis r4, lbl_807C3008@ha
    mr r3, r19
    addi r4, r4, lbl_807C3008@l
    bl fn_806E91F0
    li r3, 0x3
    b lbl_fn_806DE7F0_00000EF4
lbl_fn_806DE7F0_00000EA8:
    cmpwi r3, 0x0
    bne lbl_fn_806DE7F0_00000EB8
    li r24, 0x1
    b lbl_fn_806DE7F0_00000EC0
lbl_fn_806DE7F0_00000EB8:
    add r27, r27, r3
    add r25, r25, r3
lbl_fn_806DE7F0_00000EC0:
    cmpwi r29, 0x0
    stbx r30, r28, r27
    blt lbl_fn_806DE7F0_00000EDC
    cmpwi r24, 0x0
    bne lbl_fn_806DE7F0_00000EDC
    cmpw r25, r31
    blt lbl_fn_806DE7F0_00000E08
lbl_fn_806DE7F0_00000EDC:
    stw r28, 0x0(r21)
    li r3, 0x0
    stw r27, 0x8(r21)
    stw r26, 0x4(r21)
    stw r25, 0x0(r22)
    stw r24, 0x0(r23)
lbl_fn_806DE7F0_00000EF4:
    addi r11, r1, 0x40
    bl _restgpr_19
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806DE940(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lwz r27, 0x8(r5)
    mr r21, r3
    lwz r28, 0xc(r5)
    mr r22, r4
    lwz r29, 0x0(r5)
    mr r23, r5
    subf. r30, r28, r27
    mr r24, r6
    mr r25, r7
    mr r26, r8
    li r31, 0x0
    bne lbl_fn_806DE940_00000F60
    li r3, 0x0
    b lbl_fn_806DE940_00000FFC
lbl_fn_806DE940_00000F60:
    add r0, r28, r31
    mr r3, r21
    mr r4, r22
    mr r6, r30
    mr r9, r26
    add r5, r29, r0
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    bl fn_806DE550
    cmpwi r3, 0x0
    beq lbl_fn_806DE940_00000F90
    b lbl_fn_806DE940_00000FFC
lbl_fn_806DE940_00000F90:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806DE940_00000FA4
    add r31, r31, r0
    subf r30, r0, r30
lbl_fn_806DE940_00000FA4:
    cmpwi r0, 0x0
    beq lbl_fn_806DE940_00000FB4
    cmpwi r30, 0x0
    bne lbl_fn_806DE940_00000F60
lbl_fn_806DE940_00000FB4:
    cmpwi r25, 0x0
    beq lbl_fn_806DE940_00000FDC
    cmpwi r31, 0x0
    ble lbl_fn_806DE940_00000FE0
    mr r3, r29
    add r4, r29, r31
    addi r5, r30, 0x1
    bl memmove
    subf r27, r31, r27
    b lbl_fn_806DE940_00000FE0
lbl_fn_806DE940_00000FDC:
    add r28, r28, r31
lbl_fn_806DE940_00000FE0:
    cmpwi r24, 0x0
    stw r27, 0x8(r23)
    stw r28, 0xc(r23)
    beq lbl_fn_806DE940_00000FF8
    lwz r0, 0xc(r1)
    stw r0, 0x0(r24)
lbl_fn_806DE940_00000FF8:
    li r3, 0x0
lbl_fn_806DE940_00000FFC:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806DEA40(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lwz r27, 0x8(r6)
    mr r20, r4
    lwz r28, 0xc(r6)
    mr r21, r5
    lwz r31, 0x0(r3)
    mr r22, r6
    subf. r30, r28, r27
    lwz r29, 0x0(r6)
    mr r23, r7
    mr r24, r8
    li r26, 0x0
    bne lbl_fn_806DEA40_00001060
    li r3, 0x0
    b lbl_fn_806DEA40_00001154
lbl_fn_806DEA40_00001060:
    mr r3, r20
    mr r4, r21
    bl fn_806DA7D0
    subi r0, r3, 0x17
    cmpw r30, r0
    bgt lbl_fn_806DEA40_000010A0
    mr r3, r20
    mr r4, r21
    mr r7, r30
    addi r5, r31, 0x220
    add r6, r29, r28
    li r8, 0x1
    bl fn_806DA330
    mr r26, r30
    li r30, 0x0
    b lbl_fn_806DEA40_000010EC
lbl_fn_806DEA40_000010A0:
    mr r3, r20
    mr r4, r21
    bl fn_806DA7D0
    subi r25, r3, 0x17
    cmplwi r25, 0x17
    ble lbl_fn_806DEA40_000010EC
    add r0, r28, r26
    mr r3, r20
    mr r4, r21
    mr r7, r25
    addi r5, r31, 0x220
    add r6, r29, r0
    li r8, 0x1
    bl fn_806DA330
    cmpwi r3, 0x8
    beq lbl_fn_806DEA40_000010EC
    subf. r30, r25, r30
    add r26, r26, r25
    bne lbl_fn_806DEA40_000010A0
lbl_fn_806DEA40_000010EC:
    cmpwi r24, 0x0
    beq lbl_fn_806DEA40_00001114
    cmpwi r26, 0x0
    beq lbl_fn_806DEA40_00001118
    mr r3, r29
    add r4, r29, r26
    addi r5, r30, 0x1
    bl memmove
    subf r27, r26, r27
    b lbl_fn_806DEA40_00001118
lbl_fn_806DEA40_00001114:
    add r28, r28, r26
lbl_fn_806DEA40_00001118:
    stw r27, 0x8(r22)
    mr r3, r20
    mr r4, r21
    addi r5, r1, 0x8
    stw r28, 0xc(r22)
    bl fn_806DA070
    lwz r0, 0x8(r1)
    cmpwi r0, 0x3
    bne lbl_fn_806DEA40_00001148
    li r0, 0x1
    stw r0, 0x0(r23)
    b lbl_fn_806DEA40_00001150
lbl_fn_806DEA40_00001148:
    li r0, 0x0
    stw r0, 0x0(r23)
lbl_fn_806DEA40_00001150:
    li r3, 0x0
lbl_fn_806DEA40_00001154:
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806DEBA0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    li r29, 0x0
    stw r29, 0x0(r5)
    lis r28, lbl_807C2FC8@ha
    mr r31, r4
    lwz r0, 0x8(r4)
    mr r25, r5
    mr r26, r6
    mr r27, r7
    cmpwi r0, 0x5
    addi r28, r28, lbl_807C2FC8@l
    bge lbl_fn_806DEBA0_000011BC
    li r3, 0x0
    b lbl_fn_806DEBA0_000012B8
lbl_fn_806DEBA0_000011BC:
    lwz r3, 0x0(r4)
    li r4, 0xa
    bl strchr
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_806DEBA0_000012B4
    addi r4, r28, 0x6c
    li r5, 0x5
    subi r3, r3, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806DEBA0_000011F4
    li r3, 0x3
    b lbl_fn_806DEBA0_000012B8
lbl_fn_806DEBA0_000011F4:
    stb r29, 0x0(r30)
    addi r4, r28, 0x74
    addi r5, r1, 0x8
    li r6, 0x10
    lwz r3, 0x0(r31)
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DEBA0_0000121C
    li r3, 0x3
    b lbl_fn_806DEBA0_000012B8
lbl_fn_806DEBA0_0000121C:
    addi r3, r1, 0x8
    bl fn_80684600
    stw r3, 0x0(r26)
    addi r4, r28, 0x78
    addi r5, r1, 0x8
    li r6, 0x10
    lwz r3, 0x0(r31)
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DEBA0_0000124C
    li r3, 0x3
    b lbl_fn_806DEBA0_000012B8
lbl_fn_806DEBA0_0000124C:
    addi r3, r1, 0x8
    bl fn_80684600
    lwz r0, 0x0(r31)
    lwz r5, 0x8(r31)
    subf r0, r0, r30
    add r4, r3, r0
    addi r0, r4, 0x1
    cmpw r5, r0
    ble lbl_fn_806DEBA0_000012AC
    add r4, r3, r30
    lbz r0, 0x1(r4)
    extsb. r0, r0
    beq lbl_fn_806DEBA0_00001288
    li r3, 0x3
    b lbl_fn_806DEBA0_000012B8
lbl_fn_806DEBA0_00001288:
    addi r0, r30, 0x1
    stw r0, 0x0(r25)
    stw r3, 0x0(r27)
    lwz r0, 0x0(r31)
    subf r0, r0, r30
    add r3, r3, r0
    addi r0, r3, 0x2
    stw r0, 0xc(r31)
    b lbl_fn_806DEBA0_000012B4
lbl_fn_806DEBA0_000012AC:
    li r0, 0xa
    stb r0, 0x0(r30)
lbl_fn_806DEBA0_000012B4:
    li r3, 0x0
lbl_fn_806DEBA0_000012B8:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806DED00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    beq lbl_fn_806DED00_00001308
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_806DED00_00001308
    lwz r6, 0xc(r4)
    cmpwi r6, 0x0
    bne lbl_fn_806DED00_00001310
lbl_fn_806DED00_00001308:
    li r3, 0x0
    b lbl_fn_806DED00_00001340
lbl_fn_806DED00_00001310:
    lwz r0, 0x8(r4)
    subf. r5, r6, r0
    stw r5, 0x8(r4)
    beq lbl_fn_806DED00_00001328
    add r4, r3, r6
    bl memmove
lbl_fn_806DED00_00001328:
    lwz r4, 0x0(r31)
    li r5, 0x0
    lwz r0, 0x8(r31)
    li r3, 0x0
    stbx r5, r4, r0
    stw r5, 0xc(r31)
lbl_fn_806DED00_00001340:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DED80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x1
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r31, 0x0(r3)
    bne lbl_fn_806DED80_00001390
    li r0, 0x1
    stw r0, 0x5bc(r31)
lbl_fn_806DED80_00001390:
    lwz r3, 0x1a8(r31)
    lwz r0, 0x1ac(r31)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_806DED80_000013F4
    li r3, 0x10
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_806DED80_000013D0
    stw r29, 0x0(r3)
    stw r30, 0xc(r3)
    lwz r0, 0x5b8(r31)
    stw r0, 0x4(r3)
    stw r31, 0x8(r3)
lbl_fn_806DED80_000013D0:
    lwz r4, 0x10(r1)
    mr r3, r28
    lwz r0, 0x14(r1)
    li r6, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    li r7, 0x1
    stw r0, 0xc(r1)
    bl fn_806DEE40
lbl_fn_806DED80_000013F4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DEE40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r31, 0x0(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r3, 0x18
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806DEE40_00001468
    lis r4, lbl_807C3048@ha
    mr r3, r26
    addi r4, r4, lbl_807C3048@l
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DEE40_000014CC
lbl_fn_806DEE40_00001468:
    lwz r0, 0x4(r27)
    cmpwi r29, 0x0
    lwz r4, 0x0(r27)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r28, 0x8(r3)
    beq lbl_fn_806DEE40_00001490
    lwz r0, 0x18(r29)
    stw r0, 0x10(r3)
    b lbl_fn_806DEE40_00001498
lbl_fn_806DEE40_00001490:
    li r0, 0x0
    stw r0, 0x10(r3)
lbl_fn_806DEE40_00001498:
    stw r30, 0xc(r3)
    li r0, 0x0
    stw r0, 0x14(r3)
    lwz r0, 0x5dc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806DEE40_000014B4
    stw r3, 0x5dc(r31)
lbl_fn_806DEE40_000014B4:
    lwz r4, 0x5e0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806DEE40_000014C4
    stw r3, 0x14(r4)
lbl_fn_806DEE40_000014C4:
    stw r3, 0x5e0(r31)
    li r3, 0x0
lbl_fn_806DEE40_000014CC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DEF10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r12, 0x0(r4)
    mr r31, r4
    mr r27, r3
    lwz r4, 0x8(r4)
    lwz r5, 0x4(r31)
    mtctr r12
    bctrl
    lwz r0, 0xc(r31)
    cmplwi r0, 0xf
    bgt lbl_fn_806DEF10_00001758
    lis r3, jumptable_807C3058@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807C3058@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x8(r31)
    lwz r3, 0x8(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r31)
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_806DEF10_00001758
    lwz r3, 0x8(r31)
    lwz r3, 0x8(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r31)
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_806DEF10_00001758
    lwz r27, 0x8(r31)
    li r28, 0x0
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_806DEF10_000015B4
lbl_fn_806DEF10_00001584:
    lwz r3, 0x3c(r27)
    lwzx r3, r3, r29
    bl fn_806D7AC0
    lwz r3, 0x3c(r27)
    stwx r30, r3, r29
    lwz r3, 0x40(r27)
    lwzx r3, r3, r29
    bl fn_806D7AC0
    lwz r3, 0x40(r27)
    addi r28, r28, 0x1
    stwx r30, r3, r29
    addi r29, r29, 0x4
lbl_fn_806DEF10_000015B4:
    lwz r0, 0x38(r27)
    cmpw r28, r0
    blt lbl_fn_806DEF10_00001584
    lwz r3, 0x3c(r27)
    bl fn_806D7AC0
    li r30, 0x0
    stw r30, 0x3c(r27)
    lwz r3, 0x40(r27)
    bl fn_806D7AC0
    stw r30, 0x40(r27)
    b lbl_fn_806DEF10_00001758
    lwz r27, 0x8(r31)
    lwz r3, 0xc(r27)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0xc(r27)
    b lbl_fn_806DEF10_00001758
    lwz r27, 0x8(r31)
    lwz r3, 0x10(r27)
    cmpwi r3, 0x0
    beq lbl_fn_806DEF10_00001758
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x10(r27)
    b lbl_fn_806DEF10_00001758
    lwz r27, 0x8(r31)
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_806DEF10_00001758
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x8(r27)
    b lbl_fn_806DEF10_00001758
    lwz r28, 0x8(r31)
    li r27, 0x0
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_806DEF10_00001668
lbl_fn_806DEF10_0000164C:
    lwz r3, 0x8(r28)
    lwzx r3, r3, r29
    bl fn_806D7AC0
    lwz r3, 0x8(r28)
    addi r27, r27, 0x1
    stwx r30, r3, r29
    addi r29, r29, 0x4
lbl_fn_806DEF10_00001668:
    lwz r0, 0x4(r28)
    cmpw r27, r0
    blt lbl_fn_806DEF10_0000164C
    lwz r3, 0x8(r28)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x8(r28)
    b lbl_fn_806DEF10_00001758
    lwz r4, 0x8(r31)
    mr r3, r27
    li r5, 0x0
    lwz r4, 0x0(r4)
    bl fn_806DE020
    b lbl_fn_806DEF10_00001758
    lwz r27, 0x8(r31)
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_806DEF10_00001758
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x8(r27)
    b lbl_fn_806DEF10_00001758
    lwz r27, 0x8(r31)
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_806DEF10_00001758
    li r28, 0x0
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_806DEF10_00001710
lbl_fn_806DEF10_000016E0:
    lwz r3, 0x4(r27)
    lwzx r3, r3, r29
    bl fn_806D7AC0
    lwz r3, 0x4(r27)
    stwx r30, r3, r29
    lwz r3, 0x8(r27)
    lwzx r3, r3, r29
    bl fn_806D7AC0
    lwz r3, 0x8(r27)
    addi r28, r28, 0x1
    stwx r30, r3, r29
    addi r29, r29, 0x4
lbl_fn_806DEF10_00001710:
    lwz r0, 0xc(r27)
    cmpw r28, r0
    blt lbl_fn_806DEF10_000016E0
    lwz r3, 0x4(r27)
    bl fn_806D7AC0
    li r30, 0x0
    stw r30, 0x4(r27)
    lwz r3, 0x8(r27)
    bl fn_806D7AC0
    stw r30, 0x8(r27)
    b lbl_fn_806DEF10_00001758
    lwz r27, 0x8(r31)
    lwz r3, 0x10(r27)
    cmpwi r3, 0x0
    beq lbl_fn_806DEF10_00001758
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x10(r27)
lbl_fn_806DEF10_00001758:
    lwz r3, 0x8(r31)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x8(r31)
    mr r3, r31
    bl fn_806D7AC0
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DF1C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r4, 0x0
    lwz r30, 0x0(r3)
    mr r25, r3
    mr r26, r4
    beq lbl_fn_806DF1C0_00001860
    lwz r29, 0x5dc(r30)
    li r0, 0x0
    lwz r28, 0x5e0(r30)
    li r27, 0x0
    mr r4, r29
    stw r0, 0x5dc(r30)
    stw r0, 0x5e0(r30)
    b lbl_fn_806DF1C0_0000182C
lbl_fn_806DF1C0_000017DC:
    lwz r0, 0x10(r4)
    lwz r31, 0x14(r4)
    cmpw r0, r26
    beq lbl_fn_806DF1C0_000017F8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806DF1C0_00001824
lbl_fn_806DF1C0_000017F8:
    cmpwi r27, 0x0
    beq lbl_fn_806DF1C0_00001808
    stw r31, 0x14(r27)
    b lbl_fn_806DF1C0_0000180C
lbl_fn_806DF1C0_00001808:
    mr r29, r31
lbl_fn_806DF1C0_0000180C:
    cmplw r28, r4
    bne lbl_fn_806DF1C0_00001818
    mr r28, r27
lbl_fn_806DF1C0_00001818:
    mr r3, r25
    bl fn_806DEF10
    b lbl_fn_806DF1C0_00001828
lbl_fn_806DF1C0_00001824:
    mr r27, r4
lbl_fn_806DF1C0_00001828:
    mr r4, r31
lbl_fn_806DF1C0_0000182C:
    cmpwi r4, 0x0
    bne lbl_fn_806DF1C0_000017DC
    lwz r0, 0x5dc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806DF1C0_00001850
    lwz r3, 0x5e0(r30)
    stw r29, 0x14(r3)
    stw r28, 0x5e0(r30)
    b lbl_fn_806DF1C0_00001858
lbl_fn_806DF1C0_00001850:
    stw r29, 0x5dc(r30)
    stw r28, 0x5e0(r30)
lbl_fn_806DF1C0_00001858:
    li r3, 0x0
    b lbl_fn_806DF1C0_0000189C
lbl_fn_806DF1C0_00001860:
    li r31, 0x0
    b lbl_fn_806DF1C0_0000188C
lbl_fn_806DF1C0_00001868:
    stw r31, 0x5dc(r30)
    stw r31, 0x5e0(r30)
    b lbl_fn_806DF1C0_00001884
lbl_fn_806DF1C0_00001874:
    lwz r28, 0x14(r4)
    mr r3, r25
    bl fn_806DEF10
    mr r4, r28
lbl_fn_806DF1C0_00001884:
    cmpwi r4, 0x0
    bne lbl_fn_806DF1C0_00001874
lbl_fn_806DF1C0_0000188C:
    lwz r4, 0x5dc(r30)
    cmpwi r4, 0x0
    bne lbl_fn_806DF1C0_00001868
    li r3, 0x0
lbl_fn_806DF1C0_0000189C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DF2E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lis r30, lbl_807C3098@ha
    lwz r29, 0x0(r3)
    addi r30, r30, lbl_807C3098@l
    mr r26, r3
    mr r27, r4
    addi r3, r29, 0x220
    addi r4, r30, 0x40
    li r5, 0x10
    bl fn_8068236C
    bl fn_806D9EE0
    cmpwi r3, 0x0
    bne lbl_fn_806DF2E0_000019C8
    li r31, 0x0
    stw r31, 0x8(r1)
    li r28, 0x1964
    li r3, 0x1964
    stw r31, 0xc(r1)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    stw r31, 0x10(r1)
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_806D9EF0
    cmpwi r3, 0x0
    beq lbl_fn_806DF2E0_000019B4
    b lbl_fn_806DF2E0_00001970
lbl_fn_806DF2E0_0000193C:
    stw r31, 0x8(r1)
    addi r28, r28, 0x1
    clrlwi r3, r28, 16
    li r4, 0x0
    stw r31, 0xc(r1)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    stw r31, 0x10(r1)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_806D9EF0
lbl_fn_806DF2E0_00001970:
    cmpwi r3, 0x0
    beq lbl_fn_806DF2E0_00001984
    clrlwi r0, r28, 16
    cmplwi r0, 0x19c8
    blt lbl_fn_806DF2E0_0000193C
lbl_fn_806DF2E0_00001984:
    cmpwi r3, 0x0
    beq lbl_fn_806DF2E0_000019B4
    mr r3, r26
    addi r5, r30, 0x50
    li r4, 0x8
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DF2E0_00001BC4
lbl_fn_806DF2E0_000019B4:
    lwz r0, 0x10c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806DF2E0_000019D0
    sth r28, 0x230(r29)
    b lbl_fn_806DF2E0_000019D0
lbl_fn_806DF2E0_000019C8:
    bl fn_806DA540
    sth r3, 0x230(r29)
lbl_fn_806DF2E0_000019D0:
    addi r3, r29, 0x220
    lis r6, fn_806E51E0@ha
    lis r7, fn_806E4FB0@ha
    lis r8, fn_806E52A0@ha
    lis r9, fn_806E5050@ha
    mr r4, r3
    mr r10, r26
    addi r6, r6, fn_806E51E0@l
    addi r7, r7, fn_806E4FB0@l
    addi r8, r8, fn_806E52A0@l
    addi r9, r9, fn_806E5050@l
    li r5, 0x0
    bl fn_806DA570
    cmpwi r3, 0x0
    beq lbl_fn_806DF2E0_00001A34
    mr r3, r26
    addi r5, r30, 0x78
    li r4, 0x8
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DF2E0_00001BC4
lbl_fn_806DF2E0_00001A34:
    lwz r0, 0x10c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806DF2E0_00001A48
    li r0, 0x0
    sth r0, 0x230(r29)
lbl_fn_806DF2E0_00001A48:
    li r3, 0x2
    li r4, 0x1
    li r5, 0x0
    bl fn_806D7AE0
    cmpwi r3, -0x1
    stw r3, 0x1f0(r29)
    bne lbl_fn_806DF2E0_00001A8C
    mr r3, r26
    addi r5, r30, 0xa4
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DF2E0_00001BC4
lbl_fn_806DF2E0_00001A8C:
    li r4, 0x0
    bl fn_806D8560
    cmpwi r3, 0x0
    bne lbl_fn_806DF2E0_00001AC4
    mr r3, r26
    addi r5, r30, 0xcc
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DF2E0_00001BC4
lbl_fn_806DF2E0_00001AC4:
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x2
    stb r0, 0x19(r1)
    addi r3, r30, 0x0
    bl fn_806D7EE0
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_806DF2E0_00001B3C
    addi r3, r30, 0x0
    bl fn_806D8060
    cmpwi r3, 0x0
    bne lbl_fn_806DF2E0_00001B28
    mr r3, r26
    addi r5, r30, 0x100
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DF2E0_00001BC4
lbl_fn_806DF2E0_00001B28:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r3)
    stw r0, 0x1c(r1)
    b lbl_fn_806DF2E0_00001B48
lbl_fn_806DF2E0_00001B3C:
    addi r3, r30, 0x0
    bl fn_806D7EE0
    stw r3, 0x1c(r1)
lbl_fn_806DF2E0_00001B48:
    li r3, 0x74cc
    bl fn_806A4270
    sth r3, 0x1a(r1)
    addi r4, r1, 0x18
    li r5, 0x8
    lwz r3, 0x1f0(r29)
    bl fn_806D7C40
    cmpwi r3, -0x1
    bne lbl_fn_806DF2E0_00001BB4
    lwz r3, 0x1f0(r29)
    bl fn_806D7F20
    cmpwi r3, -0x6
    beq lbl_fn_806DF2E0_00001BB4
    cmpwi r3, -0x1a
    beq lbl_fn_806DF2E0_00001BB4
    cmpwi r3, -0x4c
    beq lbl_fn_806DF2E0_00001BB4
    mr r3, r26
    addi r5, r30, 0x138
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DF2E0_00001BC4
lbl_fn_806DF2E0_00001BB4:
    li r0, 0x1
    stw r0, 0x14(r27)
    li r3, 0x0
    stw r0, 0x1f4(r29)
lbl_fn_806DF2E0_00001BC4:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806DF610(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_17
    lwz r30, 0x0(r3)
    lis r31, lbl_807C3098@ha
    lwz r17, 0x58(r1)
    mr r18, r3
    lwz r0, 0x1f4(r30)
    mr r19, r4
    lwz r26, 0x5c(r1)
    mr r20, r5
    cmpwi r0, 0x4
    lwz r27, 0x60(r1)
    lwz r28, 0x64(r1)
    mr r21, r6
    lwz r29, 0x68(r1)
    mr r22, r7
    mr r23, r8
    mr r24, r9
    mr r25, r10
    addi r31, r31, lbl_807C3098@l
    bne lbl_fn_806DF610_00001C54
    bl fn_806DBA70
    cmpwi r3, 0x0
    beq lbl_fn_806DF610_00001C54
    b lbl_fn_806DF610_00001E1C
lbl_fn_806DF610_00001C54:
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806DF610_00001C74
    mr r3, r18
    addi r4, r31, 0x160
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DF610_00001E1C
lbl_fn_806DF610_00001C74:
    cmpwi r17, 0x1
    beq lbl_fn_806DF610_00001C88
    cmpwi r17, 0x0
    beq lbl_fn_806DF610_00001C94
    b lbl_fn_806DF610_00001CA0
lbl_fn_806DF610_00001C88:
    li r0, 0x1
    stw r0, 0x10c(r30)
    b lbl_fn_806DF610_00001CB4
lbl_fn_806DF610_00001C94:
    li r0, 0x0
    stw r0, 0x10c(r30)
    b lbl_fn_806DF610_00001CB4
lbl_fn_806DF610_00001CA0:
    mr r3, r18
    addi r4, r31, 0x174
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806DF610_00001E1C
lbl_fn_806DF610_00001CB4:
    mr r4, r19
    addi r3, r30, 0x110
    li r5, 0x1f
    bl fn_806E8B10
    mr r4, r20
    addi r3, r30, 0x12f
    li r5, 0x15
    bl fn_806E8B10
    mr r4, r21
    addi r3, r30, 0x144
    li r5, 0x33
    bl fn_806E8B10
    mr r4, r22
    addi r3, r30, 0x177
    li r5, 0x1f
    bl fn_806E8B10
    addi r3, r30, 0x144
    bl fn_806D8EB0
    li r3, 0x308
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_fn_806DF610_00001D24
    mr r3, r18
    addi r4, r31, 0x188
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DF610_00001E1C
lbl_fn_806DF610_00001D24:
    li r4, 0x0
    li r5, 0x308
    bl memset
    lbz r0, 0x0(r23)
    stw r26, 0x304(r19)
    extsb. r0, r0
    beq lbl_fn_806DF610_00001D6C
    lbz r0, 0x0(r24)
    extsb. r0, r0
    beq lbl_fn_806DF610_00001D6C
    mr r4, r23
    addi r3, r19, 0xc2
    li r5, 0x100
    bl fn_806E8B10
    mr r4, r24
    addi r3, r19, 0x1c2
    li r5, 0x100
    bl fn_806E8B10
lbl_fn_806DF610_00001D6C:
    cmpwi r25, 0x0
    beq lbl_fn_806DF610_00001D84
    mr r4, r25
    addi r3, r19, 0x2c2
    li r5, 0x41
    bl fn_806E8B10
lbl_fn_806DF610_00001D84:
    mr r3, r18
    mr r5, r19
    mr r7, r27
    mr r8, r28
    mr r9, r29
    addi r6, r1, 0x8
    li r4, 0x0
    bl fn_806E3980
    cmpwi r3, 0x0
    beq lbl_fn_806DF610_00001DB0
    b lbl_fn_806DF610_00001E1C
lbl_fn_806DF610_00001DB0:
    lwz r4, 0x8(r1)
    mr r3, r18
    bl fn_806DF2E0
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_806DF610_00001DF0
    lwz r4, 0x8(r1)
    stw r3, 0x1c(r4)
    mr r3, r18
    lwz r4, 0x8(r1)
    bl fn_806E3580
    mr r3, r18
    li r4, 0x0
    bl fn_806E0770
    mr r3, r19
    b lbl_fn_806DF610_00001E1C
lbl_fn_806DF610_00001DF0:
    lwz r3, 0x8(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806DF610_00001E18
    lwz r4, 0x18(r3)
    mr r3, r18
    bl fn_806DC0B0
    cmpwi r3, 0x0
    beq lbl_fn_806DF610_00001E18
    b lbl_fn_806DF610_00001E1C
lbl_fn_806DF610_00001E18:
    li r3, 0x0
lbl_fn_806DF610_00001E1C:
    addi r11, r1, 0x50
    bl _restgpr_17
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806DF860(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x2b0
    bl _savegpr_25
    lis r31, lbl_807C3098@ha
    lis r5, 0x842
    addi r31, r31, lbl_807C3098@l
    lwz r30, 0x0(r3)
    mr r28, r3
    mr r29, r4
    addi r26, r5, 0x1085
    addi r27, r31, 0x198
    li r25, 0x0
lbl_fn_806DF860_00001E6C:
    bl fn_80680CF8
    mulhwu r5, r26, r3
    add r4, r29, r25
    addi r25, r25, 0x1
    cmpwi r25, 0x20
    subf r0, r5, r3
    srwi r0, r0, 1
    add r0, r0, r5
    srwi r0, r0, 5
    mulli r0, r0, 0x3e
    subf r0, r0, r3
    lbzx r0, r27, r0
    stb r0, 0x80(r4)
    blt lbl_fn_806DF860_00001E6C
    add r3, r29, r25
    li r0, 0x0
    stb r0, 0x80(r3)
    lbz r0, 0x1c2(r29)
    extsb. r0, r0
    beq lbl_fn_806DF860_00001EC4
    addi r25, r29, 0x1c2
    b lbl_fn_806DF860_00001EC8
lbl_fn_806DF860_00001EC4:
    addi r25, r30, 0x177
lbl_fn_806DF860_00001EC8:
    mr r3, r25
    bl strlen
    mr r4, r3
    mr r3, r25
    addi r5, r29, 0xa1
    bl fn_806D7350
    lwz r5, 0x1a4(r30)
    cmpwi r5, 0x0
    beq lbl_fn_806DF860_00001F00
    addi r3, r1, 0xc
    addi r4, r31, 0x1d8
    crclr 6
    bl sprintf
    b lbl_fn_806DF860_00001F08
lbl_fn_806DF860_00001F00:
    li r0, 0x0
    stb r0, 0xc(r1)
lbl_fn_806DF860_00001F08:
    lbz r0, 0xc2(r29)
    extsb. r0, r0
    beq lbl_fn_806DF860_00001F1C
    addi r7, r29, 0xc2
    b lbl_fn_806DF860_00001F68
lbl_fn_806DF860_00001F1C:
    lbz r0, 0x12f(r30)
    extsb. r0, r0
    beq lbl_fn_806DF860_00001F48
    addi r3, r1, 0x3c
    addi r4, r31, 0x1dc
    addi r5, r1, 0xc
    addi r6, r30, 0x12f
    crclr 6
    bl sprintf
    addi r7, r1, 0x3c
    b lbl_fn_806DF860_00001F68
lbl_fn_806DF860_00001F48:
    addi r3, r1, 0x3c
    addi r4, r31, 0x1e8
    addi r5, r1, 0xc
    addi r6, r30, 0x110
    addi r7, r30, 0x144
    crclr 6
    bl sprintf
    addi r7, r1, 0x3c
lbl_fn_806DF860_00001F68:
    addi r5, r29, 0xa1
    mr r9, r29
    addi r3, r1, 0x90
    addi r4, r31, 0x1f0
    mr r10, r5
    addi r6, r31, 0x200
    addi r8, r29, 0x80
    crclr 6
    bl sprintf
    addi r3, r1, 0x90
    bl strlen
    mr r4, r3
    addi r3, r1, 0x90
    addi r5, r1, 0x18
    bl fn_806D7350
    lwz r0, 0x100(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806DF860_00001FE4
    mr r3, r28
    addi r4, r30, 0x110
    addi r5, r30, 0x144
    addi r6, r1, 0x8
    bl fn_806E5A60
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_806DF860_00001FE4
    lwz r0, 0x4(r3)
    stw r0, 0x19c(r30)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x1a0(r30)
lbl_fn_806DF860_00001FE4:
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x238
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x240
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r29, 0x80
    bl fn_806DE480
    lbz r0, 0xc2(r29)
    extsb. r0, r0
    beq lbl_fn_806DF860_00002044
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x24c
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r29, 0xc2
    bl fn_806DE480
    b lbl_fn_806DF860_000020B4
lbl_fn_806DF860_00002044:
    lbz r0, 0x12f(r30)
    extsb. r0, r0
    beq lbl_fn_806DF860_00002074
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x258
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r30, 0x12f
    bl fn_806DE480
    b lbl_fn_806DF860_000020B4
lbl_fn_806DF860_00002074:
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x268
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r30, 0x110
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x270
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r30, 0x144
    bl fn_806DE480
lbl_fn_806DF860_000020B4:
    lwz r0, 0x19c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806DF860_000020E0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x274
    bl fn_806DE480
    lwz r5, 0x19c(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
lbl_fn_806DF860_000020E0:
    lwz r0, 0x1a0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806DF860_0000210C
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x280
    bl fn_806DE480
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
lbl_fn_806DF860_0000210C:
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x28c
    bl fn_806DE480
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x298
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r1, 0x18
    bl fn_806DE480
    lwz r0, 0x10c(r30)
    cmpwi r0, 0x1
    bne lbl_fn_806DF860_00002168
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x2a4
    bl fn_806DE480
lbl_fn_806DF860_00002168:
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x2b0
    bl fn_806DE480
    lhz r5, 0x230(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x2b8
    bl fn_806DE480
    lwz r5, 0x60c(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x2c4
    bl fn_806DE480
    lis r5, lbl_80860DD8@ha
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r5, lbl_80860DD8@l
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x2d0
    bl fn_806DE480
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x2e0
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    li r5, 0x3b
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x2f0
    bl fn_806DE480
    lwz r5, 0x630(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x2f8
    bl fn_806DE480
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x300
    bl fn_806DE480
    addi r11, r1, 0x2b0
    li r3, 0x0
    bl _restgpr_25
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}
