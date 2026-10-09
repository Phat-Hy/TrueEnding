#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_806D7A90(void);
extern void fn_806D7AA0(void);
extern void fn_806D7AC0(void);
extern void fn_806D8EB0(void);
extern void fn_806D8F30(void);
extern void fn_806D8F80(void);
extern void fn_806D9590(void);
extern void fn_806DC0B0(void);
extern void fn_806DE2F0(void);
extern void fn_806DE480(void);
extern void fn_806DE4E0(void);
extern void fn_806DE7F0(void);
extern void fn_806DE940(void);
extern void fn_806DED80(void);
extern void fn_806DEE40(void);
extern void fn_806E3980(void);
extern void fn_806E5F90(void);
extern void fn_806E6160(void);
extern void fn_806E8B10(void);
extern void fn_806E8B60(void);
extern void fn_806E8E10(void);
extern void fn_806E8EC0(void);
extern void fn_806E8FB0(void);
extern void fn_806E91A0(void);
extern void fn_806E91F0(void);
extern void fn_806E9230(void);

/* External data declarations */
extern u8 jumptable_807C4130[];
extern u8 jumptable_807C4160[];
extern u8 lbl_807C3C98[];
extern u8 lbl_807C3DA0[];
extern u8 lbl_80860DD8[];

/* Small data declarations */

/* Function declarations */
void pad_03_806E624C_text(void);
void fn_806E6250(void);
void fn_806E64E0(void);
void fn_806E65E0(void);

asm void pad_03_806E624C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806E6250(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    cmpwi r4, 0x0
    lwz r29, 0x48(r1)
    lwz r30, 0x4c(r1)
    mr r21, r3
    lwz r31, 0x50(r1)
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    beq lbl_fn_806E6250_00000058
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_fn_806E6250_000000C8
lbl_fn_806E6250_00000058:
    cmpwi r6, 0x0
    beq lbl_fn_806E6250_0000006C
    lbz r0, 0x0(r6)
    extsb. r0, r0
    bne lbl_fn_806E6250_000000C8
lbl_fn_806E6250_0000006C:
    cmpwi r7, 0x0
    beq lbl_fn_806E6250_00000080
    lbz r0, 0x0(r7)
    extsb. r0, r0
    bne lbl_fn_806E6250_000000C8
lbl_fn_806E6250_00000080:
    cmpwi r8, 0x0
    beq lbl_fn_806E6250_00000094
    lbz r0, 0x0(r8)
    extsb. r0, r0
    bne lbl_fn_806E6250_000000C8
lbl_fn_806E6250_00000094:
    cmpwi r9, 0x0
    bne lbl_fn_806E6250_000000C8
    cmpwi r5, 0x0
    beq lbl_fn_806E6250_000000B0
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_806E6250_000000C8
lbl_fn_806E6250_000000B0:
    lis r4, lbl_807C3DA0@ha
    mr r3, r21
    addi r4, r4, lbl_807C3DA0@l
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E6250_0000027C
lbl_fn_806E6250_000000C8:
    mr r3, r21
    addi r4, r1, 0xc
    li r5, 0x1
    bl fn_806E6160
    cmpwi r3, 0x0
    beq lbl_fn_806E6250_000000E4
    b lbl_fn_806E6250_0000027C
lbl_fn_806E6250_000000E4:
    cmpwi r22, 0x0
    bne lbl_fn_806E6250_000000FC
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0x28(r3)
    b lbl_fn_806E6250_00000110
lbl_fn_806E6250_000000FC:
    lwz r3, 0xc(r1)
    mr r4, r22
    li r5, 0x1f
    addi r3, r3, 0x28
    bl fn_806E8B10
lbl_fn_806E6250_00000110:
    cmpwi r23, 0x0
    bne lbl_fn_806E6250_00000128
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0x47(r3)
    b lbl_fn_806E6250_0000013C
lbl_fn_806E6250_00000128:
    lwz r3, 0xc(r1)
    mr r4, r23
    li r5, 0x15
    addi r3, r3, 0x47
    bl fn_806E8B10
lbl_fn_806E6250_0000013C:
    cmpwi r24, 0x0
    bne lbl_fn_806E6250_00000154
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0xa0(r3)
    b lbl_fn_806E6250_00000168
lbl_fn_806E6250_00000154:
    lwz r3, 0xc(r1)
    mr r4, r24
    li r5, 0x33
    addi r3, r3, 0xa0
    bl fn_806E8B10
lbl_fn_806E6250_00000168:
    lwz r3, 0xc(r1)
    addi r3, r3, 0xa0
    bl fn_806D8EB0
    cmpwi r25, 0x0
    bne lbl_fn_806E6250_0000018C
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0xd3(r3)
    b lbl_fn_806E6250_000001A0
lbl_fn_806E6250_0000018C:
    lwz r3, 0xc(r1)
    mr r4, r25
    li r5, 0x1f
    addi r3, r3, 0xd3
    bl fn_806E8B10
lbl_fn_806E6250_000001A0:
    cmpwi r26, 0x0
    bne lbl_fn_806E6250_000001B8
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0xf2(r3)
    b lbl_fn_806E6250_000001CC
lbl_fn_806E6250_000001B8:
    lwz r3, 0xc(r1)
    mr r4, r26
    li r5, 0x1f
    addi r3, r3, 0xf2
    bl fn_806E8B10
lbl_fn_806E6250_000001CC:
    lwz r3, 0xc(r1)
    cmpwi r28, 0x0
    stw r27, 0x178(r3)
    bge lbl_fn_806E6250_000001E0
    li r28, 0x0
lbl_fn_806E6250_000001E0:
    lwz r4, 0xc(r1)
    mr r3, r21
    mr r7, r29
    mr r8, r30
    stw r28, 0x17c(r4)
    mr r9, r31
    addi r6, r1, 0x8
    li r4, 0x3
    lwz r11, 0x0(r21)
    lwz r5, 0xc(r1)
    lwz r10, 0x238(r11)
    addi r0, r10, 0x1
    stw r0, 0x238(r11)
    bl fn_806E3980
    cmpwi r3, 0x0
    beq lbl_fn_806E6250_00000224
    b lbl_fn_806E6250_00000268
lbl_fn_806E6250_00000224:
    lwz r4, 0x8(r1)
    mr r3, r21
    bl fn_806E5F90
    cmpwi r3, 0x0
    beq lbl_fn_806E6250_0000023C
    b lbl_fn_806E6250_00000268
lbl_fn_806E6250_0000023C:
    lwz r3, 0x8(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E6250_00000264
    lwz r4, 0x18(r3)
    mr r3, r21
    bl fn_806DC0B0
    cmpwi r3, 0x0
    beq lbl_fn_806E6250_00000264
    b lbl_fn_806E6250_00000268
lbl_fn_806E6250_00000264:
    li r3, 0x0
lbl_fn_806E6250_00000268:
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E6250_00000278
    mr r0, r3
lbl_fn_806E6250_00000278:
    mr r3, r0
lbl_fn_806E6250_0000027C:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806E64E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r27, r4
    mr r28, r5
    mr r26, r3
    mr r29, r6
    mr r30, r7
    mr r31, r8
    addi r4, r1, 0xc
    li r5, 0x9
    bl fn_806E6160
    cmpwi r3, 0x0
    beq lbl_fn_806E64E0_000002D8
    b lbl_fn_806E64E0_0000037C
lbl_fn_806E64E0_000002D8:
    lwz r4, 0xc(r1)
    mr r3, r26
    mr r7, r29
    mr r8, r30
    stw r27, 0x190(r4)
    mr r9, r31
    addi r6, r1, 0x8
    li r4, 0x3
    lwz r5, 0xc(r1)
    stw r28, 0x194(r5)
    lwz r11, 0x0(r26)
    lwz r5, 0xc(r1)
    lwz r10, 0x238(r11)
    addi r0, r10, 0x1
    stw r0, 0x238(r11)
    bl fn_806E3980
    cmpwi r3, 0x0
    beq lbl_fn_806E64E0_00000324
    b lbl_fn_806E64E0_00000368
lbl_fn_806E64E0_00000324:
    lwz r4, 0x8(r1)
    mr r3, r26
    bl fn_806E5F90
    cmpwi r3, 0x0
    beq lbl_fn_806E64E0_0000033C
    b lbl_fn_806E64E0_00000368
lbl_fn_806E64E0_0000033C:
    lwz r3, 0x8(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E64E0_00000364
    lwz r4, 0x18(r3)
    mr r3, r26
    bl fn_806DC0B0
    cmpwi r3, 0x0
    beq lbl_fn_806E64E0_00000364
    b lbl_fn_806E64E0_00000368
lbl_fn_806E64E0_00000364:
    li r3, 0x0
lbl_fn_806E64E0_00000368:
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E64E0_00000378
    mr r0, r3
lbl_fn_806E64E0_00000378:
    mr r3, r0
lbl_fn_806E64E0_0000037C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806E65E0(void)
{
    nofralloc
    stwu r1, -0x550(r1)
    mflr r0
    stw r0, 0x554(r1)
    addi r11, r1, 0x550
    bl _savegpr_14
    lwz r5, 0x8(r4)
    lis r20, lbl_807C3C98@ha
    lwz r30, 0x0(r3)
    mr r28, r3
    neg r0, r5
    cmpwi r5, 0x0
    or r0, r0, r5
    lwz r31, 0x4(r4)
    mr r29, r4
    addi r20, r20, lbl_807C3C98@l
    srwi r16, r0, 31
    bne lbl_fn_806E65E0_0000041C
    bl fn_806D8F30
    lwz r0, 0x18c(r31)
    subf r0, r0, r3
    cmplwi r0, 0xea60
    ble lbl_fn_806E65E0_0000041C
    li r0, 0x1
    stw r0, 0x188(r31)
    mr r3, r28
    addi r5, r20, 0x144
    li r4, 0xd02
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x0
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_0000041C:
    li r26, 0x600
    li r27, 0x1
    lis r21, jumptable_807C4160@ha
    lis r22, lbl_80860DD8@ha
    li r24, 0x0
    li r25, 0x5
    lis r14, jumptable_807C4130@ha
    li r23, 0x4
lbl_fn_806E65E0_0000043C:
    lwz r4, 0x4(r31)
    mr r3, r28
    addi r5, r31, 0x18
    addi r6, r1, 0x18
    addi r8, r20, 0x15c
    li r7, 0x1
    bl fn_806DE940
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00000464
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00000464:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x1
    bne lbl_fn_806E65E0_00000D64
    lwz r4, 0x4(r31)
    mr r3, r28
    addi r5, r1, 0x24
    bl fn_806E8EC0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_0000048C
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_0000048C:
    lwz r0, 0x24(r1)
    cmpwi r0, 0x4
    bne lbl_fn_806E65E0_000004C0
    mr r3, r28
    addi r5, r20, 0x160
    li r4, 0xd01
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x4
    li r5, 0x0
    bl fn_806DED80
    li r3, 0x4
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000004C0:
    cmpwi r0, 0x3
    bne lbl_fn_806E65E0_000023C8
    lwz r0, 0x0(r31)
    cmplwi r0, 0xb
    bgt lbl_fn_806E65E0_00000D2C
    addi r3, r21, jumptable_807C4160@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x18c
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x198
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a4
    bl fn_806DE480
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1b0
    bl fn_806DE480
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c0
    bl fn_806DE480
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    lbz r0, 0x28(r31)
    extsb. r0, r0
    beq lbl_fn_806E65E0_000005A4
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1cc
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x28
    bl fn_806DE480
lbl_fn_806E65E0_000005A4:
    lbz r0, 0x47(r31)
    extsb. r0, r0
    beq lbl_fn_806E65E0_000005D0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1d4
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl fn_806DE480
lbl_fn_806E65E0_000005D0:
    lbz r0, 0xa0(r31)
    extsb. r0, r0
    beq lbl_fn_806E65E0_000005FC
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1e8
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl fn_806DE480
lbl_fn_806E65E0_000005FC:
    lbz r0, 0xd3(r31)
    extsb. r0, r0
    beq lbl_fn_806E65E0_00000628
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1f0
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xd3
    bl fn_806DE480
lbl_fn_806E65E0_00000628:
    lbz r0, 0xf2(r31)
    extsb. r0, r0
    beq lbl_fn_806E65E0_00000654
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1fc
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xf2
    bl fn_806DE480
lbl_fn_806E65E0_00000654:
    lwz r0, 0x178(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806E65E0_00000680
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x208
    bl fn_806DE480
    lwz r5, 0x178(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
lbl_fn_806E65E0_00000680:
    lwz r0, 0x17c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x214
    bl fn_806DE480
    lwz r5, 0x17c(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x21c
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x198
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a4
    bl fn_806DE480
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1d4
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x22c
    bl fn_806DE480
    lwz r0, 0x9c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_806E65E0_00000788
    mr r15, r31
    li r17, 0x0
    b lbl_fn_806E65E0_00000778
lbl_fn_806E65E0_00000748:
    cmpwi r17, 0x0
    ble lbl_fn_806E65E0_00000760
    mr r3, r28
    addi r4, r31, 0x18
    li r5, 0x2c
    bl fn_806DE2F0
lbl_fn_806E65E0_00000760:
    lwz r5, 0x5c(r15)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    addi r15, r15, 0x4
    addi r17, r17, 0x1
lbl_fn_806E65E0_00000778:
    lwz r0, 0x9c(r31)
    cmpw r17, r0
    blt lbl_fn_806E65E0_00000748
    b lbl_fn_806E65E0_00000D2C
lbl_fn_806E65E0_00000788:
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x240
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1e8
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c0
    bl fn_806DE480
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x248
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1e8
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl fn_806DE480
    addi r3, r31, 0x111
    addi r4, r1, 0xd0
    bl fn_806E9230
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x250
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r1, 0xd0
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1b0
    bl fn_806DE480
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c0
    bl fn_806DE480
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x25c
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x198
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a4
    bl fn_806DE480
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x268
    bl fn_806DE480
    lwz r5, 0x180(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x278
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1cc
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x28
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1e8
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c0
    bl fn_806DE480
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    addi r3, r31, 0x111
    addi r4, r1, 0xd0
    bl fn_806E9230
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x250
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r1, 0xd0
    bl fn_806DE480
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x280
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1cc
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x28
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1e8
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl fn_806DE480
    addi r3, r31, 0x111
    addi r4, r1, 0xd0
    bl fn_806E9230
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x250
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r1, 0xd0
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x28c
    bl fn_806DE480
    lwz r5, 0x60c(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1b0
    bl fn_806DE480
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1d4
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl fn_806DE480
    lbz r0, 0x130(r31)
    extsb. r0, r0
    beq lbl_fn_806E65E0_00000AAC
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x298
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x130
    bl fn_806DE480
lbl_fn_806E65E0_00000AAC:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c0
    bl fn_806DE480
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2a0
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x198
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a4
    bl fn_806DE480
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1b0
    bl fn_806DE480
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2ac
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x198
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a4
    bl fn_806DE480
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2bc
    bl fn_806DE480
    lwz r5, 0x194(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2c8
    bl fn_806DE480
    lwz r3, 0x190(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00000C24
    lwz r5, 0x0(r3)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    li r17, 0x1
    li r15, 0x4
    b lbl_fn_806E65E0_00000C18
lbl_fn_806E65E0_00000BEC:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2d0
    bl fn_806DE480
    lwz r5, 0x190(r31)
    mr r3, r28
    addi r4, r31, 0x18
    lwzx r5, r5, r15
    bl fn_806DE4E0
    addi r15, r15, 0x4
    addi r17, r17, 0x1
lbl_fn_806E65E0_00000C18:
    lwz r0, 0x194(r31)
    cmpw r17, r0
    blt lbl_fn_806E65E0_00000BEC
lbl_fn_806E65E0_00000C24:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1b0
    bl fn_806DE480
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2d4
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2e8
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1b0
    bl fn_806DE480
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    b lbl_fn_806E65E0_00000D2C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2f8
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x198
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a4
    bl fn_806DE480
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x308
    bl fn_806DE480
    lwz r5, 0x198(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x31c
    bl fn_806DE480
    lwz r5, 0x19c(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl fn_806DE4E0
lbl_fn_806E65E0_00000D2C:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x32c
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r22, lbl_80860DD8@l
    bl fn_806DE480
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x338
    bl fn_806DE480
    stw r23, 0x14(r29)
    b lbl_fn_806E65E0_000023C8
lbl_fn_806E65E0_00000D64:
    cmpwi r0, 0x4
    bne lbl_fn_806E65E0_000023C8
    lwz r4, 0x4(r31)
    mr r3, r28
    addi r5, r31, 0x8
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    addi r8, r20, 0x15c
    bl fn_806DE7F0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00000DC4
    cmpwi r3, 0x3
    bne lbl_fn_806E65E0_000023E4
    mr r3, r28
    addi r5, r20, 0x340
    li r4, 0xd01
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x0
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00000DC4:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806E65E0_00000E14
    bl fn_806D8F30
    lwz r0, 0x18c(r31)
    subf r0, r0, r3
    cmplwi r0, 0xea60
    ble lbl_fn_806E65E0_00000E14
    li r0, 0x1
    stw r0, 0x188(r31)
    mr r3, r28
    addi r5, r20, 0x144
    li r4, 0xd02
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x0
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00000E14:
    lwz r3, 0x8(r31)
    addi r4, r20, 0x338
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C8
    stw r24, 0x20(r1)
    mr r3, r28
    li r5, 0x1
    stw r25, 0x14(r29)
    lwz r4, 0x8(r31)
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00000E58
    li r0, 0x1
    stw r0, 0x188(r31)
    li r3, 0x4
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00000E58:
    lwz r0, 0x0(r31)
    cmplwi r0, 0xb
    bgt lbl_fn_806E65E0_000023C0
    addi r3, r14, jumptable_807C4130@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x601
    stw r24, 0xc0(r1)
    li r15, 0x0
    stw r24, 0xc4(r1)
    stw r24, 0xcc(r1)
    stw r0, 0xc8(r1)
lbl_fn_806E65E0_00000E90:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00000EB4
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00000EB4:
    addi r3, r1, 0x300
    addi r4, r20, 0x370
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00000F20
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00000EEC
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00000EEC:
    addi r3, r1, 0x300
    addi r4, r20, 0x378
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00000F18
    addi r3, r1, 0x100
    addi r4, r20, 0x380
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00000F18
    stw r26, 0xc8(r1)
lbl_fn_806E65E0_00000F18:
    li r15, 0x1
    b lbl_fn_806E65E0_00001114
lbl_fn_806E65E0_00000F20:
    addi r3, r1, 0x300
    addi r4, r20, 0x384
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000010EC
    lwz r4, 0xc4(r1)
    lwz r3, 0xcc(r1)
    addi r0, r4, 0x1
    stw r0, 0xc4(r1)
    mulli r4, r0, 0xb0
    bl fn_806D7AA0
    cmpwi r3, 0x0
    stw r3, 0xcc(r1)
    bne lbl_fn_806E65E0_00000F6C
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00000F6C:
    lwz r6, 0xc4(r1)
    li r4, 0x0
    li r5, 0xb0
    subi r0, r6, 0x1
    mulli r0, r0, 0xb0
    add r18, r3, r0
    mr r3, r18
    bl memset
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x0(r18)
    li r17, 0x0
lbl_fn_806E65E0_00000F9C:
    lwz r16, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00000FC4
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00000FC4:
    addi r3, r1, 0x300
    addi r4, r20, 0x388
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00000FEC
    addi r3, r18, 0x4
    addi r4, r1, 0x100
    li r5, 0x1f
    bl fn_806E8B10
    b lbl_fn_806E65E0_000010E0
lbl_fn_806E65E0_00000FEC:
    addi r3, r1, 0x300
    addi r4, r20, 0x390
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001014
    addi r3, r18, 0x23
    addi r4, r1, 0x100
    li r5, 0x15
    bl fn_806E8B10
    b lbl_fn_806E65E0_000010E0
lbl_fn_806E65E0_00001014:
    addi r3, r1, 0x300
    addi r4, r20, 0x39c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001038
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x38(r18)
    b lbl_fn_806E65E0_000010E0
lbl_fn_806E65E0_00001038:
    addi r3, r1, 0x300
    addi r4, r20, 0x3a8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001060
    addi r3, r18, 0x3c
    addi r4, r1, 0x100
    li r5, 0x1f
    bl fn_806E8B10
    b lbl_fn_806E65E0_000010E0
lbl_fn_806E65E0_00001060:
    addi r3, r1, 0x300
    addi r4, r20, 0x3b4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001088
    addi r3, r18, 0x5b
    addi r4, r1, 0x100
    li r5, 0x1f
    bl fn_806E8B10
    b lbl_fn_806E65E0_000010E0
lbl_fn_806E65E0_00001088:
    addi r3, r1, 0x300
    addi r4, r20, 0x3c0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000010B0
    addi r3, r18, 0x7a
    addi r4, r1, 0x100
    li r5, 0x33
    bl fn_806E8B10
    b lbl_fn_806E65E0_000010E0
lbl_fn_806E65E0_000010B0:
    addi r3, r1, 0x300
    addi r4, r20, 0x384
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000010D8
    addi r3, r1, 0x300
    addi r4, r20, 0x370
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000010E0
lbl_fn_806E65E0_000010D8:
    li r17, 0x1
    stw r16, 0x20(r1)
lbl_fn_806E65E0_000010E0:
    cmpwi r17, 0x0
    beq lbl_fn_806E65E0_00000F9C
    b lbl_fn_806E65E0_00001114
lbl_fn_806E65E0_000010EC:
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001114:
    cmpwi r15, 0x0
    beq lbl_fn_806E65E0_00000E90
    lwz r12, 0xc(r29)
    lwz r5, 0x10(r29)
    cmpwi r12, 0x0
    stw r12, 0xb8(r1)
    lwz r15, 0xc8(r1)
    stw r5, 0xbc(r1)
    beq lbl_fn_806E65E0_00001148
    mr r3, r28
    addi r4, r1, 0xc0
    mtctr r12
    bctrl
lbl_fn_806E65E0_00001148:
    cmpwi r15, 0x600
    bne lbl_fn_806E65E0_000011AC
    lwz r0, 0xc8(r1)
    cmpwi r0, 0x600
    bne lbl_fn_806E65E0_000011AC
    lwz r0, 0x8(r29)
    mr r3, r28
    stw r0, 0x8(r1)
    addi r4, r31, 0x28
    addi r5, r31, 0x47
    addi r6, r31, 0xa0
    lwz r0, 0xc(r29)
    addi r7, r31, 0xd3
    stw r0, 0xc(r1)
    addi r8, r31, 0xf2
    lwz r0, 0x10(r29)
    stw r0, 0x10(r1)
    lwz r10, 0xc4(r1)
    lwz r0, 0x17c(r31)
    lwz r9, 0x178(r31)
    add r10, r10, r0
    bl fn_806E6250
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000011AC
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000011AC:
    lwz r3, 0xcc(r1)
    bl fn_806D7AC0
    stw r24, 0xcc(r1)
    b lbl_fn_806E65E0_000023C0
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_fn_806E65E0_000023C0
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000011F8
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000011F8:
    addi r3, r1, 0x300
    addi r4, r20, 0x3f0
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001234
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001234:
    li r3, 0x3c
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r15, r3
    bne lbl_fn_806E65E0_0000125C
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_0000125C:
    stw r24, 0x0(r3)
    addi r4, r31, 0xa0
    li r5, 0x33
    addi r3, r3, 0x4
    bl fn_806E8B10
    lbz r0, 0x100(r1)
    cmpwi r0, 0x30
    bne lbl_fn_806E65E0_00001284
    stw r24, 0x38(r15)
    b lbl_fn_806E65E0_00001288
lbl_fn_806E65E0_00001284:
    stw r27, 0x38(r15)
lbl_fn_806E65E0_00001288:
    lwz r4, 0x28(r1)
    mr r3, r28
    lwz r0, 0x2c(r1)
    mr r5, r15
    stw r4, 0xb0(r1)
    mr r6, r29
    addi r4, r1, 0xb0
    li r7, 0x0
    stw r0, 0xb4(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C0
    b lbl_fn_806E65E0_000023E4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_fn_806E65E0_000023C0
    li r3, 0x44
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_806E65E0_000012FC
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000012FC:
    stw r24, 0x0(r3)
    addi r4, r31, 0xa0
    li r5, 0x33
    addi r3, r3, 0x4
    bl fn_806D9590
    stw r24, 0x38(r16)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    stw r24, 0x3c(r16)
    addi r7, r1, 0x100
    stw r24, 0x40(r16)
    lwz r4, 0x8(r31)
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001340
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001340:
    addi r3, r1, 0x300
    addi r4, r20, 0x3f4
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_0000137C
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_0000137C:
    li r15, 0x0
lbl_fn_806E65E0_00001380:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000013A4
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000013A4:
    addi r3, r1, 0x300
    addi r4, r20, 0x388
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_0000144C
    lwz r4, 0x38(r16)
    lwz r3, 0x3c(r16)
    addi r0, r4, 0x1
    slwi r4, r0, 2
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000013E8
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000013E8:
    stw r3, 0x3c(r16)
    li r3, 0x1f
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001410
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001410:
    lwz r0, 0x38(r16)
    addi r4, r1, 0x100
    lwz r6, 0x3c(r16)
    li r5, 0x1f
    slwi r0, r0, 2
    stwx r3, r6, r0
    lwz r0, 0x38(r16)
    lwz r3, 0x3c(r16)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl fn_806E8B10
    lwz r3, 0x38(r16)
    addi r0, r3, 0x1
    stw r0, 0x38(r16)
    b lbl_fn_806E65E0_00001538
lbl_fn_806E65E0_0000144C:
    addi r3, r1, 0x300
    addi r4, r20, 0x390
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000014F4
    lwz r0, 0x38(r16)
    cmpwi r0, 0x0
    ble lbl_fn_806E65E0_00001538
    lwz r3, 0x40(r16)
    slwi r4, r0, 2
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001494
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001494:
    stw r3, 0x40(r16)
    li r3, 0x15
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000014BC
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000014BC:
    lwz r0, 0x38(r16)
    addi r4, r1, 0x100
    lwz r6, 0x40(r16)
    li r5, 0x15
    slwi r0, r0, 2
    add r6, r6, r0
    stw r3, -0x4(r6)
    lwz r0, 0x38(r16)
    lwz r3, 0x40(r16)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r3, -0x4(r3)
    bl fn_806E8B10
    b lbl_fn_806E65E0_00001538
lbl_fn_806E65E0_000014F4:
    addi r3, r1, 0x300
    addi r4, r20, 0x3f8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001510
    li r15, 0x1
    b lbl_fn_806E65E0_00001538
lbl_fn_806E65E0_00001510:
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001538:
    cmpwi r15, 0x0
    beq lbl_fn_806E65E0_00001380
    lwz r4, 0x30(r1)
    mr r3, r28
    lwz r0, 0x34(r1)
    mr r5, r16
    stw r4, 0xa8(r1)
    mr r6, r29
    addi r4, r1, 0xa8
    li r7, 0x3
    stw r0, 0xac(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C0
    b lbl_fn_806E65E0_000023E4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    beq lbl_fn_806E65E0_000023C0
    li r3, 0x10
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_806E65E0_000015B4
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000015B4:
    lwz r0, 0x180(r31)
    li r19, 0x0
    stw r0, 0x4(r3)
    stw r24, 0x0(r3)
    stw r24, 0x8(r3)
    stw r24, 0xc(r3)
lbl_fn_806E65E0_000015CC:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000015F0
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000015F0:
    addi r3, r1, 0x300
    addi r4, r20, 0x400
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_0000160C
    li r19, 0x1
    b lbl_fn_806E65E0_00001788
lbl_fn_806E65E0_0000160C:
    addi r3, r1, 0x300
    addi r4, r20, 0x408
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001760
    lwz r3, 0x8(r18)
    addi r0, r3, 0x1
    stw r0, 0x8(r18)
    mulli r4, r0, 0x128
    lwz r3, 0xc(r18)
    bl fn_806D7AA0
    cmpwi r3, 0x0
    stw r3, 0xc(r18)
    bne lbl_fn_806E65E0_00001658
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001658:
    lwz r6, 0x8(r18)
    li r4, 0x0
    li r5, 0x128
    subi r0, r6, 0x1
    mulli r0, r0, 0x128
    add r15, r3, r0
    mr r3, r15
    bl memset
    stw r27, 0x24(r15)
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x0(r15)
    li r17, 0x0
lbl_fn_806E65E0_0000168C:
    lwz r16, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000016B4
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000016B4:
    addi r3, r1, 0x300
    addi r4, r20, 0x40c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000016DC
    addi r3, r15, 0x28
    addi r4, r1, 0x100
    li r5, 0x100
    bl fn_806E8B10
    b lbl_fn_806E65E0_00001700
lbl_fn_806E65E0_000016DC:
    addi r3, r1, 0x300
    addi r4, r20, 0x388
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001700
    addi r3, r15, 0x4
    addi r4, r1, 0x100
    li r5, 0x1f
    bl fn_806E8B10
lbl_fn_806E65E0_00001700:
    addi r3, r1, 0x300
    addi r4, r20, 0x414
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001724
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x24(r15)
    b lbl_fn_806E65E0_00001754
lbl_fn_806E65E0_00001724:
    addi r3, r1, 0x300
    addi r4, r20, 0x408
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_0000174C
    addi r3, r1, 0x300
    addi r4, r20, 0x400
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001754
lbl_fn_806E65E0_0000174C:
    li r17, 0x1
    stw r16, 0x20(r1)
lbl_fn_806E65E0_00001754:
    cmpwi r17, 0x0
    beq lbl_fn_806E65E0_0000168C
    b lbl_fn_806E65E0_00001788
lbl_fn_806E65E0_00001760:
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001788:
    cmpwi r19, 0x0
    beq lbl_fn_806E65E0_000015CC
    lwz r4, 0x38(r1)
    mr r3, r28
    lwz r0, 0x3c(r1)
    mr r5, r18
    stw r4, 0xa0(r1)
    mr r6, r29
    addi r4, r1, 0xa0
    li r7, 0x4
    stw r0, 0xa4(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C0
    b lbl_fn_806E65E0_000023E4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    beq lbl_fn_806E65E0_000023C0
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001800
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001800:
    addi r3, r1, 0x300
    addi r4, r20, 0x420
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_0000183C
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_0000183C:
    addi r3, r1, 0x100
    bl fn_80684600
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_806E65E0_0000185C
    stw r3, 0x5b8(r30)
    li r16, 0x0
    b lbl_fn_806E65E0_000018AC
lbl_fn_806E65E0_0000185C:
    lwz r3, 0x8(r31)
    addi r4, r20, 0x424
    addi r5, r1, 0x100
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000018A0
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000018A0:
    addi r3, r1, 0x100
    bl fn_80684600
    mr r16, r3
lbl_fn_806E65E0_000018AC:
    li r3, 0x8
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000018D0
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000018D0:
    stw r15, 0x0(r3)
    mr r5, r3
    lwz r7, 0x40(r1)
    mr r6, r29
    stw r16, 0x4(r3)
    mr r3, r28
    lwz r0, 0x44(r1)
    addi r4, r1, 0x98
    stw r7, 0x98(r1)
    li r7, 0x0
    stw r0, 0x9c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C0
    b lbl_fn_806E65E0_000023E4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    beq lbl_fn_806E65E0_000023C0
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001948
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001948:
    addi r3, r1, 0x300
    addi r4, r20, 0x42c
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001984
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001984:
    addi r3, r1, 0x100
    bl fn_80684600
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_806E65E0_0000199C
    stw r3, 0x5b8(r30)
lbl_fn_806E65E0_0000199C:
    lwz r3, 0x8(r31)
    addi r4, r20, 0x424
    addi r5, r1, 0x100
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000019F0
    cmpwi r15, 0x0
    bne lbl_fn_806E65E0_000019E8
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000019E8:
    li r16, 0x0
    b lbl_fn_806E65E0_000019FC
lbl_fn_806E65E0_000019F0:
    addi r3, r1, 0x100
    bl fn_80684600
    mr r16, r3
lbl_fn_806E65E0_000019FC:
    li r3, 0x8
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001A20
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001A20:
    stw r15, 0x0(r3)
    mr r5, r3
    lwz r7, 0x48(r1)
    mr r6, r29
    stw r16, 0x4(r3)
    mr r3, r28
    lwz r0, 0x4c(r1)
    addi r4, r1, 0x90
    stw r7, 0x90(r1)
    li r7, 0x0
    stw r0, 0x94(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C0
    b lbl_fn_806E65E0_000023E4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    beq lbl_fn_806E65E0_000023C0
    li r3, 0xc
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r15, r3
    bne lbl_fn_806E65E0_00001A9C
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001A9C:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001ACC
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001ACC:
    addi r3, r1, 0x300
    addi r4, r20, 0x430
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001B08
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001B08:
    li r19, 0x0
lbl_fn_806E65E0_00001B0C:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001B30
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001B30:
    addi r3, r1, 0x300
    addi r4, r20, 0x438
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001B4C
    li r19, 0x1
    b lbl_fn_806E65E0_00001D20
lbl_fn_806E65E0_00001B4C:
    addi r3, r1, 0x300
    addi r4, r20, 0x440
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001CF8
    lwz r4, 0x4(r15)
    lwz r3, 0x8(r15)
    addi r0, r4, 0x1
    mulli r4, r0, 0xb0
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001B90
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001B90:
    stw r3, 0x8(r15)
    li r4, 0x0
    li r5, 0xb0
    lwz r0, 0x4(r15)
    mulli r0, r0, 0xb0
    add r18, r3, r0
    mr r3, r18
    bl memset
    lwz r4, 0x4(r15)
    addi r3, r1, 0x100
    addi r0, r4, 0x1
    stw r0, 0x4(r15)
    bl fn_80684600
    stw r3, 0x0(r18)
    li r17, 0x0
lbl_fn_806E65E0_00001BCC:
    lwz r16, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001BF4
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001BF4:
    addi r3, r1, 0x300
    addi r4, r20, 0x388
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001C1C
    addi r3, r18, 0x4
    addi r4, r1, 0x100
    li r5, 0x1f
    bl fn_806E8B10
    b lbl_fn_806E65E0_00001CEC
lbl_fn_806E65E0_00001C1C:
    addi r3, r1, 0x300
    addi r4, r20, 0x390
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001C44
    addi r3, r18, 0x23
    addi r4, r1, 0x100
    li r5, 0x15
    bl fn_806E8B10
    b lbl_fn_806E65E0_00001CEC
lbl_fn_806E65E0_00001C44:
    addi r3, r1, 0x300
    addi r4, r20, 0x444
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001C6C
    addi r3, r18, 0x3c
    addi r4, r1, 0x100
    li r5, 0x1f
    bl fn_806E8B10
    b lbl_fn_806E65E0_00001CEC
lbl_fn_806E65E0_00001C6C:
    addi r3, r1, 0x300
    addi r4, r20, 0x44c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001C94
    addi r3, r18, 0x5b
    addi r4, r1, 0x100
    li r5, 0x1f
    bl fn_806E8B10
    b lbl_fn_806E65E0_00001CEC
lbl_fn_806E65E0_00001C94:
    addi r3, r1, 0x300
    addi r4, r20, 0x3c0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001CBC
    addi r3, r18, 0x7a
    addi r4, r1, 0x100
    li r5, 0x33
    bl fn_806E8B10
    b lbl_fn_806E65E0_00001CEC
lbl_fn_806E65E0_00001CBC:
    addi r3, r1, 0x300
    addi r4, r20, 0x440
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001CE4
    addi r3, r1, 0x300
    addi r4, r20, 0x438
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001CEC
lbl_fn_806E65E0_00001CE4:
    li r17, 0x1
    stw r16, 0x20(r1)
lbl_fn_806E65E0_00001CEC:
    cmpwi r17, 0x0
    beq lbl_fn_806E65E0_00001BCC
    b lbl_fn_806E65E0_00001D20
lbl_fn_806E65E0_00001CF8:
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001D20:
    cmpwi r19, 0x0
    beq lbl_fn_806E65E0_00001B0C
    lwz r4, 0x50(r1)
    mr r3, r28
    lwz r0, 0x54(r1)
    mr r5, r15
    stw r4, 0x88(r1)
    mr r6, r29
    addi r4, r1, 0x88
    li r7, 0x8
    stw r0, 0x8c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C0
    b lbl_fn_806E65E0_000023E4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    beq lbl_fn_806E65E0_000023C0
    li r3, 0xc
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r15, r3
    bne lbl_fn_806E65E0_00001D9C
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001D9C:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001DCC
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001DCC:
    addi r3, r1, 0x300
    addi r4, r20, 0x454
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001E08
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001E08:
    li r19, 0x0
lbl_fn_806E65E0_00001E0C:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001E30
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001E30:
    addi r3, r1, 0x300
    addi r4, r20, 0x460
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001E4C
    li r19, 0x1
    b lbl_fn_806E65E0_00001F80
lbl_fn_806E65E0_00001E4C:
    addi r3, r1, 0x300
    addi r4, r20, 0x440
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001F58
    lwz r4, 0x4(r15)
    lwz r3, 0x8(r15)
    addi r0, r4, 0x1
    mulli r4, r0, 0x1c
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001E90
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001E90:
    stw r3, 0x8(r15)
    li r4, 0x0
    li r5, 0x1c
    lwz r0, 0x4(r15)
    mulli r0, r0, 0x1c
    add r16, r3, r0
    mr r3, r16
    bl memset
    lwz r4, 0x4(r15)
    addi r3, r1, 0x100
    addi r0, r4, 0x1
    stw r0, 0x4(r15)
    bl fn_80684600
    stw r3, 0x0(r16)
    li r18, 0x0
lbl_fn_806E65E0_00001ECC:
    lwz r17, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001EF4
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001EF4:
    addi r3, r1, 0x300
    addi r4, r20, 0x390
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001F1C
    addi r3, r16, 0x4
    addi r4, r1, 0x100
    li r5, 0x15
    bl fn_806E8B10
    b lbl_fn_806E65E0_00001F4C
lbl_fn_806E65E0_00001F1C:
    addi r3, r1, 0x300
    addi r4, r20, 0x440
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00001F44
    addi r3, r1, 0x300
    addi r4, r20, 0x460
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00001F4C
lbl_fn_806E65E0_00001F44:
    li r18, 0x1
    stw r17, 0x20(r1)
lbl_fn_806E65E0_00001F4C:
    cmpwi r18, 0x0
    beq lbl_fn_806E65E0_00001ECC
    b lbl_fn_806E65E0_00001F80
lbl_fn_806E65E0_00001F58:
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00001F80:
    cmpwi r19, 0x0
    beq lbl_fn_806E65E0_00001E0C
    lwz r4, 0x58(r1)
    mr r3, r28
    lwz r0, 0x5c(r1)
    mr r5, r15
    stw r4, 0x80(r1)
    mr r6, r29
    addi r4, r1, 0x80
    li r7, 0xd
    stw r0, 0x84(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C0
    b lbl_fn_806E65E0_000023E4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    beq lbl_fn_806E65E0_000023C0
    li r17, 0x0
    li r3, 0xc
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r18, r3
    bne lbl_fn_806E65E0_00002000
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00002000:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00002030
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00002030:
    addi r3, r1, 0x300
    addi r4, r20, 0x468
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_0000206C
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_0000206C:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x4(r18)
    slwi r3, r3, 2
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x8(r18)
    bne lbl_fn_806E65E0_000020A0
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000020A0:
    li r16, 0x0
    li r15, 0x0
lbl_fn_806E65E0_000020A8:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000020CC
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000020CC:
    addi r3, r1, 0x300
    addi r4, r20, 0x388
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_0000212C
    li r3, 0x15
    bl fn_806D7A90
    lwz r4, 0x8(r18)
    stwx r3, r4, r15
    lwz r3, 0x8(r18)
    lwzx r3, r3, r15
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00002114
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00002114:
    addi r4, r1, 0x100
    li r5, 0x15
    bl fn_806E8B10
    addi r15, r15, 0x4
    addi r17, r17, 0x1
    b lbl_fn_806E65E0_00002174
lbl_fn_806E65E0_0000212C:
    addi r3, r1, 0x300
    addi r4, r20, 0x46c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_0000214C
    stw r17, 0x4(r18)
    li r16, 0x1
    b lbl_fn_806E65E0_00002174
lbl_fn_806E65E0_0000214C:
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00002174:
    cmpwi r16, 0x0
    beq lbl_fn_806E65E0_000020A8
    lwz r4, 0x60(r1)
    mr r3, r28
    lwz r0, 0x64(r1)
    mr r5, r18
    stw r4, 0x78(r1)
    mr r6, r29
    addi r4, r1, 0x78
    li r7, 0x9
    stw r0, 0x7c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C0
    b lbl_fn_806E65E0_000023E4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    beq lbl_fn_806E65E0_000023C0
    li r3, 0x14
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_806E65E0_000021F0
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000021F0:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    stw r24, 0xc(r3)
    stw r24, 0x10(r3)
    stw r24, 0x8(r3)
    lwz r4, 0x4(r29)
    lwz r0, 0x198(r4)
    stw r0, 0x4(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00002230
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00002230:
    addi r3, r1, 0x300
    addi r4, r20, 0x474
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_0000226C
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_0000226C:
    li r15, 0x0
lbl_fn_806E65E0_00002270:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x300
    addi r7, r1, 0x100
    bl fn_806E8FB0
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_00002294
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00002294:
    addi r3, r1, 0x300
    addi r4, r20, 0x480
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000022B0
    li r15, 0x1
    b lbl_fn_806E65E0_00002384
lbl_fn_806E65E0_000022B0:
    addi r3, r1, 0x300
    addi r4, r20, 0x488
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_000022D0
    stw r27, 0x8(r16)
    li r15, 0x1
    b lbl_fn_806E65E0_00002384
lbl_fn_806E65E0_000022D0:
    addi r3, r1, 0x300
    addi r4, r20, 0x490
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00002320
    addi r3, r1, 0x100
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_806E65E0_00002384
    slwi r3, r3, 2
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_00002318
    mr r3, r28
    addi r4, r20, 0x40
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00002318:
    stw r3, 0x10(r16)
    b lbl_fn_806E65E0_00002384
lbl_fn_806E65E0_00002320:
    addi r3, r1, 0x300
    addi r4, r20, 0x440
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806E65E0_0000235C
    addi r3, r1, 0x100
    bl fn_80684600
    lwz r0, 0xc(r16)
    lwz r4, 0x10(r16)
    slwi r0, r0, 2
    stwx r3, r4, r0
    lwz r3, 0xc(r16)
    addi r0, r3, 0x1
    stw r0, 0xc(r16)
    b lbl_fn_806E65E0_00002384
lbl_fn_806E65E0_0000235C:
    mr r3, r28
    addi r5, r20, 0x3c8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_00002384:
    cmpwi r15, 0x0
    beq lbl_fn_806E65E0_00002270
    lwz r4, 0x68(r1)
    mr r3, r28
    lwz r0, 0x6c(r1)
    mr r5, r16
    stw r4, 0x70(r1)
    mr r6, r29
    addi r4, r1, 0x70
    li r7, 0xf
    stw r0, 0x74(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E65E0_000023C0
    b lbl_fn_806E65E0_000023E4
lbl_fn_806E65E0_000023C0:
    stw r27, 0x188(r31)
    li r16, 0x0
lbl_fn_806E65E0_000023C8:
    cmpwi r16, 0x0
    beq lbl_fn_806E65E0_000023D8
    li r3, 0xa
    bl fn_806D8F80
lbl_fn_806E65E0_000023D8:
    cmpwi r16, 0x0
    bne lbl_fn_806E65E0_0000043C
    li r3, 0x0
lbl_fn_806E65E0_000023E4:
    addi r11, r1, 0x550
    bl _restgpr_14
    lwz r0, 0x554(r1)
    mtlr r0
    addi r1, r1, 0x550
    blr
}
