#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_8067E23C(void);
extern void fn_80682544(void);
extern void fn_80683B54(void);
extern void fn_80684600(void);
extern void fn_806D5850(void);
extern void fn_806D7350(void);
extern void fn_806D7A90(void);
extern void fn_806D7AC0(void);
extern void fn_806D7B30(void);
extern void fn_806D7B70(void);
extern void fn_806D8E30(void);
extern void fn_806D8FC0(void);
extern void fn_806D8FE0(void);
extern void fn_806D9380(void);
extern void fn_806D9EE0(void);
extern void fn_806DA4D0(void);
extern void fn_806DA660(void);
extern void fn_806DA700(void);
extern void fn_806DA750(void);
extern void fn_806DE480(void);
extern void fn_806DE4E0(void);
extern void fn_806DE940(void);
extern void fn_806DED80(void);
extern void fn_806DEE40(void);
extern void fn_806DF860(void);
extern void fn_806E2E10(void);
extern void fn_806E3A60(void);
extern void fn_806E4700(void);
extern void fn_806E5700(void);
extern void fn_806E57E0(void);
extern void fn_806E5970(void);
extern void fn_806E59C0(void);
extern void fn_806E5B10(void);
extern void fn_806E8B10(void);
extern void fn_806E8B60(void);
extern void fn_806E8E10(void);
extern void fn_806E8EC0(void);
extern void fn_806E91A0(void);
extern void fn_806E91F0(void);
extern void fn_806E9230(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807C34D8[];
extern u8 jumptable_807C376C[];
extern u8 lbl_8076B6C8[];
extern u8 lbl_807C3098[];
extern u8 lbl_807C3498[];
extern u8 lbl_80860DD8[];

/* Small data declarations */

/* Function declarations */
void pad_03_806DFC94_text(void);
void fn_806DFCA0(void);
void fn_806DFEC0(void);
void fn_806E0540(void);
void fn_806E05E0(void);
void fn_806E0770(void);
void fn_806E0930(void);
void fn_806E0A30(void);
void fn_806E0BA0(void);
void fn_806E0DE0(void);
void fn_806E16B0(void);
void fn_806E17D0(void);

asm void pad_03_806DFC94_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806DFCA0(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x100
    bl _savegpr_25
    lwz r29, 0x0(r3)
    lis r31, lbl_807C3098@ha
    mr r25, r3
    mr r26, r4
    addi r31, r31, lbl_807C3098@l
    addi r3, r29, 0x177
    addi r4, r1, 0x8
    bl fn_806E9230
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x308
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x318
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r29, 0x144
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x320
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r29, 0x110
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x328
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r1, 0x8
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x2b8
    bl fn_806DE480
    lwz r5, 0x60c(r29)
    mr r3, r25
    addi r4, r29, 0x210
    bl fn_806DE4E0
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x2c4
    bl fn_806DE480
    lis r5, lbl_80860DD8@ha
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r5, lbl_80860DD8@l
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x2d0
    bl fn_806DE480
    lwz r5, 0x610(r29)
    mr r3, r25
    addi r4, r29, 0x210
    bl fn_806DE4E0
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x258
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r29, 0x12f
    bl fn_806DE480
    lbz r0, 0x2c2(r26)
    extsb. r0, r0
    beq lbl_fn_806DFCA0_000001D0
    addi r3, r26, 0x2c2
    bl strlen
    lis r4, 0x7970
    mr r27, r3
    addi r3, r4, 0x7367
    bl fn_806D8FC0
    addi r30, r1, 0x94
    li r28, 0x0
    b lbl_fn_806DFCA0_0000018C
lbl_fn_806DFCA0_00000164:
    li r3, 0x0
    li r4, 0xff
    bl fn_806D8FE0
    add r4, r26, r28
    extsb r3, r3
    lbz r0, 0x2c2(r4)
    addi r28, r28, 0x1
    xor r0, r3, r0
    stb r0, 0x0(r30)
    addi r30, r30, 0x1
lbl_fn_806DFCA0_0000018C:
    cmplw r28, r27
    blt lbl_fn_806DFCA0_00000164
    addi r3, r1, 0x94
    li r0, 0x0
    stbx r0, r3, r28
    mr r5, r27
    addi r4, r1, 0x38
    li r6, 0x1
    bl fn_806D9380
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x338
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r1, 0x38
    bl fn_806DE480
lbl_fn_806DFCA0_000001D0:
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x28c
    bl fn_806DE480
    lwz r5, 0x1a4(r29)
    mr r3, r25
    addi r4, r29, 0x210
    bl fn_806DE4E0
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x2f8
    bl fn_806DE480
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x300
    bl fn_806DE480
    addi r11, r1, 0x100
    li r3, 0x0
    bl _restgpr_25
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_806DFEC0(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x2d0
    bl _savegpr_26
    mr r26, r5
    lis r28, lbl_807C3098@ha
    mr r30, r4
    lwz r31, 0x0(r3)
    mr r29, r3
    mr r4, r26
    addi r28, r28, lbl_807C3098@l
    li r5, 0x0
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_000002F4
    lwz r0, 0x5b8(r31)
    cmpwi r0, 0x106
    bne lbl_fn_806DFEC0_0000029C
    lwz r4, 0x1a0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806DFEC0_0000029C
    mr r3, r29
    bl fn_806E5970
    li r0, 0x0
    stw r0, 0x19c(r31)
    stw r0, 0x1a0(r31)
    b lbl_fn_806DFEC0_000002CC
lbl_fn_806DFEC0_0000029C:
    cmpwi r0, 0x201
    bne lbl_fn_806DFEC0_000002CC
    mr r3, r26
    addi r4, r28, 0x344
    addi r5, r1, 0xb8
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_000002CC
    addi r3, r1, 0xb8
    bl fn_80684600
    stw r3, 0x1a0(r31)
lbl_fn_806DFEC0_000002CC:
    lwz r4, 0x5b8(r31)
    mr r3, r29
    mr r5, r31
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x4
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x4
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_000002F4:
    lwz r0, 0x14(r30)
    lwz r27, 0x4(r30)
    cmpwi r0, 0x1
    beq lbl_fn_806DFEC0_00000318
    cmpwi r0, 0x3
    beq lbl_fn_806DFEC0_000003F0
    cmpwi r0, 0x2
    beq lbl_fn_806DFEC0_000004F4
    b lbl_fn_806DFEC0_00000890
lbl_fn_806DFEC0_00000318:
    mr r3, r26
    addi r4, r28, 0x34c
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_00000358
    mr r3, r29
    addi r5, r28, 0x354
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_00000358:
    mr r3, r26
    mr r5, r27
    addi r4, r28, 0x240
    li r6, 0x80
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DFEC0_0000039C
    mr r3, r29
    addi r5, r28, 0x354
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_0000039C:
    lwz r0, 0x304(r27)
    cmpwi r0, 0x0
    beq lbl_fn_806DFEC0_000003CC
    mr r3, r29
    mr r4, r27
    bl fn_806DFCA0
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_000003C0
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_000003C0:
    li r0, 0x3
    stw r0, 0x14(r30)
    b lbl_fn_806DFEC0_00000890
lbl_fn_806DFEC0_000003CC:
    mr r3, r29
    mr r4, r27
    bl fn_806DF860
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_000003E4
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_000003E4:
    li r0, 0x2
    stw r0, 0x14(r30)
    b lbl_fn_806DFEC0_00000890
lbl_fn_806DFEC0_000003F0:
    mr r3, r26
    addi r4, r28, 0x384
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_00000430
    mr r3, r29
    addi r5, r28, 0x354
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_00000430:
    mr r3, r26
    addi r4, r28, 0x274
    addi r5, r1, 0xb8
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DFEC0_00000474
    mr r3, r29
    addi r5, r28, 0x38c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_00000474:
    addi r3, r1, 0xb8
    bl fn_80684600
    stw r3, 0x19c(r31)
    mr r3, r26
    addi r4, r28, 0x280
    addi r5, r1, 0xb8
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DFEC0_000004C4
    mr r3, r29
    addi r5, r28, 0x38c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_000004C4:
    addi r3, r1, 0xb8
    bl fn_80684600
    stw r3, 0x1a0(r31)
    mr r3, r29
    mr r4, r27
    bl fn_806DF860
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_000004E8
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_000004E8:
    li r0, 0x2
    stw r0, 0x14(r30)
    b lbl_fn_806DFEC0_00000890
lbl_fn_806DFEC0_000004F4:
    mr r3, r26
    addi r4, r28, 0x3bc
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_00000534
    mr r3, r29
    addi r5, r28, 0x354
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_00000534:
    mr r3, r26
    addi r4, r28, 0x3c4
    addi r5, r1, 0xb8
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DFEC0_00000578
    mr r3, r29
    addi r5, r28, 0x38c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_00000578:
    addi r3, r1, 0xb8
    bl fn_80684600
    stw r3, 0x198(r31)
    mr r3, r26
    addi r4, r28, 0x274
    addi r5, r1, 0xb8
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DFEC0_000005C8
    mr r3, r29
    addi r5, r28, 0x38c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_000005C8:
    addi r3, r1, 0xb8
    bl fn_80684600
    stw r3, 0x19c(r31)
    mr r3, r26
    addi r4, r28, 0x280
    addi r5, r1, 0xb8
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DFEC0_00000618
    mr r3, r29
    addi r5, r28, 0x38c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_00000618:
    addi r3, r1, 0xb8
    bl fn_80684600
    stw r3, 0x1a0(r31)
    mr r3, r26
    addi r4, r28, 0x258
    addi r5, r1, 0x24
    li r6, 0x15
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DFEC0_00000648
    li r0, 0x0
    stb r0, 0x24(r1)
lbl_fn_806DFEC0_00000648:
    mr r3, r26
    addi r4, r28, 0x3d0
    addi r5, r31, 0x614
    li r6, 0x19
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DFEC0_0000066C
    li r0, 0x0
    stb r0, 0x614(r31)
lbl_fn_806DFEC0_0000066C:
    lwz r5, 0x1a4(r31)
    cmpwi r5, 0x0
    beq lbl_fn_806DFEC0_0000068C
    addi r3, r1, 0x18
    addi r4, r28, 0x1d8
    crclr 6
    bl sprintf
    b lbl_fn_806DFEC0_00000694
lbl_fn_806DFEC0_0000068C:
    li r0, 0x0
    stb r0, 0x18(r1)
lbl_fn_806DFEC0_00000694:
    lbz r0, 0xc2(r27)
    extsb. r0, r0
    beq lbl_fn_806DFEC0_000006A8
    addi r7, r27, 0xc2
    b lbl_fn_806DFEC0_000006F4
lbl_fn_806DFEC0_000006A8:
    lbz r0, 0x12f(r31)
    extsb. r0, r0
    beq lbl_fn_806DFEC0_000006D4
    addi r3, r1, 0x60
    addi r4, r28, 0x1dc
    addi r5, r1, 0x18
    addi r6, r31, 0x12f
    crclr 6
    bl sprintf
    addi r7, r1, 0x60
    b lbl_fn_806DFEC0_000006F4
lbl_fn_806DFEC0_000006D4:
    addi r3, r1, 0x60
    addi r4, r28, 0x1e8
    addi r5, r1, 0x18
    addi r6, r31, 0x110
    addi r7, r31, 0x144
    crclr 6
    bl sprintf
    addi r7, r1, 0x60
lbl_fn_806DFEC0_000006F4:
    addi r5, r27, 0xa1
    mr r8, r27
    addi r3, r1, 0xb8
    addi r4, r28, 0x1f0
    mr r10, r5
    addi r6, r28, 0x200
    addi r9, r27, 0x80
    crclr 6
    bl sprintf
    addi r3, r1, 0xb8
    bl strlen
    mr r4, r3
    addi r3, r1, 0xb8
    addi r5, r1, 0x3c
    bl fn_806D7350
    mr r3, r26
    addi r4, r28, 0x3d8
    addi r5, r1, 0xb8
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DFEC0_00000774
    mr r3, r29
    addi r5, r28, 0x38c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_00000774:
    addi r3, r1, 0x3c
    addi r4, r1, 0xb8
    li r5, 0x20
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_000007B4
    mr r3, r29
    addi r5, r28, 0x3e0
    li r4, 0x108
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_000007B4:
    lwz r0, 0x100(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806DFEC0_000007DC
    lwz r4, 0x1a0(r31)
    mr r3, r29
    bl fn_806E5700
    lwz r0, 0x1a0(r31)
    stw r0, 0x0(r3)
    lwz r0, 0x19c(r31)
    stw r0, 0x4(r3)
lbl_fn_806DFEC0_000007DC:
    li r0, 0x3
    stw r0, 0x1f4(r31)
    lwz r3, 0xc(r30)
    lwz r0, 0x10(r30)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_806DFEC0_00000884
    li r3, 0x20
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806DFEC0_00000824
    mr r3, r29
    addi r4, r28, 0x188
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_00000824:
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r3, 0x1a0(r31)
    li r0, 0x0
    stw r3, 0x4(r27)
    addi r3, r27, 0x8
    addi r4, r1, 0x24
    li r5, 0x15
    stw r0, 0x0(r27)
    bl fn_806E8B10
    lwz r4, 0x10(r1)
    mr r3, r29
    lwz r0, 0x14(r1)
    mr r5, r27
    stw r4, 0x8(r1)
    mr r6, r30
    addi r4, r1, 0x8
    li r7, 0x0
    stw r0, 0xc(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806DFEC0_00000884
    b lbl_fn_806DFEC0_00000894
lbl_fn_806DFEC0_00000884:
    mr r3, r29
    mr r4, r30
    bl fn_806E3A60
lbl_fn_806DFEC0_00000890:
    li r3, 0x0
lbl_fn_806DFEC0_00000894:
    addi r11, r1, 0x2d0
    bl _restgpr_26
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_806E0540(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r5, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, 0x0(r3)
    lwz r4, 0x1f0(r31)
    bl fn_806E8EC0
    cmpwi r3, 0x0
    beq lbl_fn_806E0540_000008E0
    b lbl_fn_806E0540_00000934
lbl_fn_806E0540_000008E0:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x4
    bne lbl_fn_806E0540_00000918
    lis r5, lbl_807C3498@ha
    mr r3, r30
    addi r5, r5, lbl_807C3498@l
    li r4, 0x107
    bl fn_806E91A0
    mr r3, r30
    li r4, 0x4
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x4
    b lbl_fn_806E0540_00000934
lbl_fn_806E0540_00000918:
    cmpwi r0, 0x0
    bne lbl_fn_806E0540_00000928
    li r3, 0x0
    b lbl_fn_806E0540_00000934
lbl_fn_806E0540_00000928:
    li r0, 0x2
    stw r0, 0x1f4(r31)
    li r3, 0x0
lbl_fn_806E0540_00000934:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E05E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r5, 0x8(r4)
    lwz r31, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_806E05E0_000009BC
    li r0, 0x1
    stw r0, 0x28(r4)
    lwz r3, 0x8(r5)
    bl fn_806D7AC0
    lwz r3, 0x8(r30)
    li r28, 0x0
    stw r28, 0x8(r3)
    lwz r3, 0x8(r30)
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r30)
    stw r28, 0xc(r3)
    lwz r3, 0x8(r30)
    bl fn_806D7AC0
    stw r28, 0x8(r30)
lbl_fn_806E05E0_000009BC:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806E05E0_00000A4C
    li r0, 0x1
    stw r0, 0x28(r30)
    lwz r3, 0x8(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r30)
    li r28, 0x0
    stw r28, 0x8(r3)
    lwz r3, 0xc(r30)
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r30)
    stw r28, 0xc(r3)
    lwz r3, 0xc(r30)
    lwz r3, 0x10(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r30)
    stw r28, 0x10(r3)
    lwz r3, 0xc(r30)
    lwz r3, 0x14(r3)
    bl fn_806D7AC0
    lwz r3, 0xc(r30)
    stw r28, 0x14(r3)
    lwz r3, 0xc(r30)
    lwz r3, 0x38(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806E05E0_00000A3C
    bl fn_806D5850
    lwz r3, 0xc(r30)
    stw r28, 0x38(r3)
lbl_fn_806E05E0_00000A3C:
    lwz r3, 0xc(r30)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0xc(r30)
lbl_fn_806E05E0_00000A4C:
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806E05E0_00000A60
    li r0, 0x1
    stw r0, 0x28(r30)
lbl_fn_806E05E0_00000A60:
    lwz r3, 0x14(r30)
    bl fn_806D7AC0
    li r28, 0x0
    stw r28, 0x14(r30)
    lwz r3, 0x1c(r30)
    bl fn_806D7AC0
    lwz r0, 0x10(r30)
    stw r28, 0x1c(r30)
    cmpwi r0, 0x0
    stw r28, 0x18(r30)
    beq lbl_fn_806E05E0_00000AA4
    lwz r0, 0x104(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806E05E0_00000AB8
    lwz r0, 0x28(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806E05E0_00000AB8
lbl_fn_806E05E0_00000AA4:
    mr r3, r29
    mr r4, r30
    bl fn_806E59C0
    li r3, 0x0
    b lbl_fn_806E05E0_00000ABC
lbl_fn_806E05E0_00000AB8:
    li r3, 0x1
lbl_fn_806E05E0_00000ABC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E0770(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C3098@ha
    addi r31, r31, lbl_807C3098@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r30, 0x0(r3)
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x4
    beq lbl_fn_806E0770_00000C7C
    cmpwi r0, 0x0
    beq lbl_fn_806E0770_00000BA8
    cmpwi r4, 0x0
    beq lbl_fn_806E0770_00000B54
    cmpwi r0, 0x3
    bne lbl_fn_806E0770_00000B54
    addi r4, r30, 0x210
    addi r5, r31, 0x428
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r29
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r29
    addi r4, r30, 0x210
    addi r5, r31, 0x300
    bl fn_806DE480
lbl_fn_806E0770_00000B54:
    lwz r4, 0x1f0(r30)
    mr r3, r29
    addi r5, r30, 0x210
    addi r6, r1, 0x8
    addi r8, r31, 0x43c
    li r7, 0x1
    bl fn_806DE940
    lwz r3, 0x1f0(r30)
    cmpwi r3, -0x1
    beq lbl_fn_806E0770_00000B94
    li r4, 0x2
    bl fn_806D7B70
    lwz r3, 0x1f0(r30)
    bl fn_806D7B30
    li r0, -0x1
    stw r0, 0x1f0(r30)
lbl_fn_806E0770_00000B94:
    li r0, 0x4
    stw r0, 0x1f4(r30)
    li r0, 0x0
    stw r0, 0x19c(r30)
    stw r0, 0x1a0(r30)
lbl_fn_806E0770_00000BA8:
    bl fn_806D9EE0
    cmpwi r3, 0x0
    beq lbl_fn_806E0770_00000BD8
    addi r3, r30, 0x220
    bl fn_806DA660
    bl fn_806DA700
    cmpwi r3, 0x0
    beq lbl_fn_806E0770_00000BD8
    bl fn_806DA750
    cmpwi r3, 0x0
    beq lbl_fn_806E0770_00000BD8
    bl fn_806DA4D0
lbl_fn_806E0770_00000BD8:
    lwz r3, 0x1f8(r30)
    bl fn_806D7AC0
    li r31, 0x0
    stw r31, 0x1f8(r30)
    lwz r3, 0x208(r30)
    bl fn_806D7AC0
    stw r31, 0x208(r30)
    lwz r3, 0x210(r30)
    bl fn_806D7AC0
    stw r31, 0x210(r30)
    lwz r3, 0x5e4(r30)
    bl fn_806D7AC0
    stw r31, 0x5e4(r30)
    lwz r3, 0x5f4(r30)
    bl fn_806D7AC0
    stw r31, 0x5f4(r30)
    b lbl_fn_806E0770_00000C24
lbl_fn_806E0770_00000C1C:
    mr r3, r29
    bl fn_806E3A60
lbl_fn_806E0770_00000C24:
    lwz r4, 0x5c4(r30)
    cmpwi r4, 0x0
    bne lbl_fn_806E0770_00000C1C
    li r0, 0x0
    stw r0, 0x5c4(r30)
    lwz r31, 0x5d8(r30)
    b lbl_fn_806E0770_00000C50
lbl_fn_806E0770_00000C40:
    mr r4, r31
    lwz r31, 0x4c(r31)
    mr r3, r29
    bl fn_806E4700
lbl_fn_806E0770_00000C50:
    cmpwi r31, 0x0
    bne lbl_fn_806E0770_00000C40
    li r0, 0x0
    stw r0, 0x5d8(r30)
    lis r31, fn_806E05E0@ha
lbl_fn_806E0770_00000C64:
    mr r3, r29
    addi r4, r31, fn_806E05E0@l
    li r5, 0x0
    bl fn_806E5B10
    cmpwi r3, 0x0
    beq lbl_fn_806E0770_00000C64
lbl_fn_806E0770_00000C7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E0930(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    lis r31, lbl_807C3098@ha
    addi r31, r31, lbl_807C3098@l
    stw r30, 0x218(r1)
    stw r29, 0x214(r1)
    mr r29, r3
    lwz r30, 0x0(r3)
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806E0930_00000CDC
    li r3, 0x4
    b lbl_fn_806E0930_00000D80
lbl_fn_806E0930_00000CDC:
    lwz r3, 0x208(r30)
    addi r4, r31, 0x2d0
    addi r5, r1, 0x8
    li r6, 0x200
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0930_00000D20
    mr r3, r29
    addi r5, r31, 0x354
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E0930_00000D80
lbl_fn_806E0930_00000D20:
    addi r3, r1, 0x8
    bl fn_80684600
    stw r3, 0x610(r30)
    addi r4, r31, 0x28c
    addi r5, r1, 0x8
    li r6, 0x200
    lwz r3, 0x208(r30)
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0930_00000D70
    mr r3, r29
    addi r5, r31, 0x354
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E0930_00000D80
lbl_fn_806E0930_00000D70:
    addi r3, r1, 0x8
    bl fn_80684600
    stw r3, 0x1a4(r30)
    li r3, 0x0
lbl_fn_806E0930_00000D80:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_806E0A30(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_806E0A30_00000DBC
    cmpwi r4, 0x0
    bne lbl_fn_806E0A30_00000DBC
    cmpwi r5, 0x0
    bne lbl_fn_806E0A30_00000DBC
    li r3, 0x1
    blr
lbl_fn_806E0A30_00000DBC:
    cmpwi cr1, r3, 0x0
    blt cr1, lbl_fn_806E0A30_00000DD4
    cmpwi r4, 0x0
    blt lbl_fn_806E0A30_00000DD4
    cmpwi r5, 0x0
    bge lbl_fn_806E0A30_00000DDC
lbl_fn_806E0A30_00000DD4:
    li r3, 0x0
    blr
lbl_fn_806E0A30_00000DDC:
    cmplwi r4, 0xc
    bgt lbl_fn_806E0A30_00000EA8
    lis r6, jumptable_807C34D8@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_807C34D8@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    beq cr1, lbl_fn_806E0A30_00000EB0
    li r3, 0x0
    blr
    cmpwi r3, 0x1f
    ble lbl_fn_806E0A30_00000EB0
    li r3, 0x0
    blr
    cmpwi r3, 0x1e
    ble lbl_fn_806E0A30_00000EB0
    li r3, 0x0
    blr
    slwi r0, r5, 30
    srwi r6, r5, 31
    subf r0, r6, r0
    rotlwi r0, r0, 2
    add. r0, r0, r6
    bne lbl_fn_806E0A30_00000E64
    lis r6, 0x51ec
    subi r0, r6, 0x7ae1
    mulhw r0, r0, r5
    srawi r0, r0, 5
    srwi r6, r0, 31
    add r0, r0, r6
    mulli r0, r0, 0x64
    subf. r0, r0, r5
    bne lbl_fn_806E0A30_00000E88
lbl_fn_806E0A30_00000E64:
    lis r6, 0x51ec
    subi r0, r6, 0x7ae1
    mulhw r0, r0, r5
    srawi r0, r0, 7
    srwi r6, r0, 31
    add r0, r0, r6
    mulli r0, r0, 0x190
    subf. r0, r0, r5
    bne lbl_fn_806E0A30_00000E98
lbl_fn_806E0A30_00000E88:
    cmpwi r3, 0x1d
    ble lbl_fn_806E0A30_00000EB0
    li r3, 0x0
    blr
lbl_fn_806E0A30_00000E98:
    cmpwi r3, 0x1c
    ble lbl_fn_806E0A30_00000EB0
    li r3, 0x0
    blr
lbl_fn_806E0A30_00000EA8:
    li r3, 0x0
    blr
lbl_fn_806E0A30_00000EB0:
    cmpwi r5, 0x76c
    bge lbl_fn_806E0A30_00000EC0
    li r3, 0x0
    blr
lbl_fn_806E0A30_00000EC0:
    cmpwi r5, 0x81f
    ble lbl_fn_806E0A30_00000ED0
    li r3, 0x0
    blr
lbl_fn_806E0A30_00000ED0:
    bne lbl_fn_806E0A30_00000EF8
    cmpwi r4, 0x6
    ble lbl_fn_806E0A30_00000EE4
    li r3, 0x0
    blr
lbl_fn_806E0A30_00000EE4:
    bne lbl_fn_806E0A30_00000EF8
    cmpwi r3, 0x6
    ble lbl_fn_806E0A30_00000EF8
    li r3, 0x0
    blr
lbl_fn_806E0A30_00000EF8:
    li r3, 0x1
    blr
}

asm void fn_806E0BA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, 0x0(r3)
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x0
    beq lbl_fn_806E0BA0_00000F48
    addi r3, r4, 0x8
    mr r4, r0
    li r5, 0x1f
    bl fn_806E8B10
    b lbl_fn_806E0BA0_00000F50
lbl_fn_806E0BA0_00000F48:
    li r0, 0x0
    stb r0, 0x8(r4)
lbl_fn_806E0BA0_00000F50:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_806E0BA0_00000F6C
    addi r3, r31, 0x27
    li r5, 0x15
    bl fn_806E8B10
    b lbl_fn_806E0BA0_00000F74
lbl_fn_806E0BA0_00000F6C:
    li r0, 0x0
    stb r0, 0x27(r31)
lbl_fn_806E0BA0_00000F74:
    lwz r4, 0x8(r30)
    cmpwi r4, 0x0
    beq lbl_fn_806E0BA0_00000F90
    addi r3, r31, 0x3c
    li r5, 0x33
    bl fn_806E8B10
    b lbl_fn_806E0BA0_00000F98
lbl_fn_806E0BA0_00000F90:
    li r0, 0x0
    stb r0, 0x3c(r31)
lbl_fn_806E0BA0_00000F98:
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    beq lbl_fn_806E0BA0_00000FB4
    addi r3, r31, 0x6f
    li r5, 0x1f
    bl fn_806E8B10
    b lbl_fn_806E0BA0_00000FBC
lbl_fn_806E0BA0_00000FB4:
    li r0, 0x0
    stb r0, 0x6f(r31)
lbl_fn_806E0BA0_00000FBC:
    lwz r4, 0x10(r30)
    cmpwi r4, 0x0
    beq lbl_fn_806E0BA0_00000FD8
    addi r3, r31, 0x8e
    li r5, 0x1f
    bl fn_806E8B10
    b lbl_fn_806E0BA0_00000FE0
lbl_fn_806E0BA0_00000FD8:
    li r0, 0x0
    stb r0, 0x8e(r31)
lbl_fn_806E0BA0_00000FE0:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x0
    beq lbl_fn_806E0BA0_00000FFC
    addi r3, r31, 0xad
    li r5, 0x4c
    bl fn_806E8B10
    b lbl_fn_806E0BA0_00001004
lbl_fn_806E0BA0_00000FFC:
    li r0, 0x0
    stb r0, 0xad(r31)
lbl_fn_806E0BA0_00001004:
    lwz r0, 0x18(r30)
    addi r3, r31, 0x100
    stw r0, 0xfc(r31)
    addi r4, r30, 0x1c
    li r5, 0xb
    bl fn_806E8B10
    addi r3, r31, 0x10b
    addi r4, r30, 0x27
    li r5, 0x3
    bl fn_806E8B10
    lfs f1, 0x2c(r30)
    addic. r4, r30, 0x34
    lfs f0, 0x30(r30)
    stfs f1, 0x110(r31)
    stfs f0, 0x114(r31)
    beq lbl_fn_806E0BA0_00001054
    addi r3, r31, 0x118
    li r5, 0x80
    bl fn_806E8B10
    b lbl_fn_806E0BA0_0000105C
lbl_fn_806E0BA0_00001054:
    li r0, 0x0
    stb r0, 0x118(r31)
lbl_fn_806E0BA0_0000105C:
    lwz r4, 0xc8(r30)
    lwz r7, 0xb4(r30)
    lwz r6, 0xb8(r30)
    cmpwi r4, 0x0
    lwz r5, 0xbc(r30)
    lwz r3, 0xc0(r30)
    lwz r0, 0xc4(r30)
    stw r7, 0x198(r31)
    stw r6, 0x19c(r31)
    stw r5, 0x1a0(r31)
    stw r3, 0x1a4(r31)
    stw r0, 0x1a8(r31)
    beq lbl_fn_806E0BA0_000010A0
    addi r3, r31, 0x1ac
    li r5, 0x33
    bl fn_806E8B10
    b lbl_fn_806E0BA0_000010A8
lbl_fn_806E0BA0_000010A0:
    li r0, 0x0
    stb r0, 0x1ac(r31)
lbl_fn_806E0BA0_000010A8:
    lwz r26, 0x18(r30)
    lfs f1, 0x2c(r30)
    lfs f0, 0x30(r30)
    lwz r27, 0xb4(r30)
    lwz r28, 0xb8(r30)
    lwz r29, 0xbc(r30)
    lwz r12, 0xc0(r30)
    lwz r11, 0xc4(r30)
    lwz r10, 0xcc(r30)
    lwz r9, 0xd0(r30)
    lwz r8, 0xd4(r30)
    lwz r7, 0xd8(r30)
    lwz r6, 0xdc(r30)
    lwz r5, 0xe0(r30)
    lwz r4, 0xe4(r30)
    lwz r3, 0xe8(r30)
    lwz r0, 0xec(r30)
    stw r11, 0x1a8(r31)
    addi r11, r1, 0x20
    stw r26, 0xfc(r31)
    stfs f1, 0x110(r31)
    stfs f0, 0x114(r31)
    stw r27, 0x198(r31)
    stw r28, 0x19c(r31)
    stw r29, 0x1a0(r31)
    stw r12, 0x1a4(r31)
    stw r10, 0x1e0(r31)
    stw r9, 0x1e4(r31)
    stw r8, 0x1e8(r31)
    stw r7, 0x1ec(r31)
    stw r6, 0x1f0(r31)
    stw r5, 0x1f4(r31)
    stw r4, 0x1f8(r31)
    stw r3, 0x1fc(r31)
    stw r0, 0x200(r31)
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E0DE0(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x2b0
    bl _savegpr_23
    mr r28, r5
    lis r31, jumptable_807C34D8@ha
    mr r27, r4
    lwz r30, 0x0(r3)
    mr r26, r3
    mr r4, r28
    addi r31, r31, jumptable_807C34D8@l
    li r5, 0x1
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806E0DE0_00001194
    li r3, 0x4
    b lbl_fn_806E0DE0_000019FC
lbl_fn_806E0DE0_00001194:
    mr r3, r28
    addi r4, r31, 0x34
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806E0DE0_000011D4
    mr r3, r26
    addi r5, r31, 0x3c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E0DE0_000019FC
lbl_fn_806E0DE0_000011D4:
    mr r3, r28
    addi r4, r31, 0x6c
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001218
    mr r3, r26
    addi r5, r31, 0x3c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E0DE0_000019FC
lbl_fn_806E0DE0_00001218:
    addi r3, r1, 0x100
    bl fn_80684600
    mr r29, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x8
    bl fn_806E57E0
    addi r3, r1, 0x190
    li r4, 0x0
    li r5, 0xf0
    bl memset
    addi r5, r1, 0x78
    addi r4, r1, 0x60
    addi r10, r1, 0xcc
    addi r9, r1, 0x40
    addi r8, r1, 0x20
    addi r7, r1, 0x140
    addi r0, r1, 0x98
    stw r4, 0x194(r1)
    mr r3, r28
    addi r4, r31, 0x78
    stw r5, 0x190(r1)
    li r6, 0x1f
    stw r10, 0x198(r1)
    stw r9, 0x19c(r1)
    stw r8, 0x1a0(r1)
    stw r7, 0x1a4(r1)
    stw r0, 0x258(r1)
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000012A0
    lwz r3, 0x190(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_fn_806E0DE0_000012A0:
    lwz r5, 0x194(r1)
    mr r3, r28
    addi r4, r31, 0x80
    li r6, 0x15
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000012C8
    lwz r3, 0x194(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_fn_806E0DE0_000012C8:
    lwz r5, 0x198(r1)
    mr r3, r28
    addi r4, r31, 0x90
    li r6, 0x33
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000012F0
    lwz r3, 0x198(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_fn_806E0DE0_000012F0:
    lwz r5, 0x19c(r1)
    mr r3, r28
    addi r4, r31, 0x98
    li r6, 0x1f
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001318
    lwz r3, 0x19c(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_fn_806E0DE0_00001318:
    lwz r5, 0x1a0(r1)
    mr r3, r28
    addi r4, r31, 0xa4
    li r6, 0x1f
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001340
    lwz r3, 0x1a0(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_fn_806E0DE0_00001340:
    mr r3, r28
    addi r4, r31, 0xb0
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001368
    li r0, -0x1
    stw r0, 0x1a8(r1)
    b lbl_fn_806E0DE0_00001374
lbl_fn_806E0DE0_00001368:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x1a8(r1)
lbl_fn_806E0DE0_00001374:
    lwz r5, 0x1a4(r1)
    mr r3, r28
    addi r4, r31, 0xbc
    li r6, 0x4c
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_0000139C
    lwz r3, 0x1a4(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_fn_806E0DE0_0000139C:
    mr r3, r28
    addi r4, r31, 0xc8
    addi r5, r1, 0x1ac
    li r6, 0xb
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000013C0
    li r0, 0x0
    stb r0, 0x1ac(r1)
lbl_fn_806E0DE0_000013C0:
    mr r3, r28
    addi r4, r31, 0xd4
    addi r5, r1, 0x1b7
    li r6, 0x3
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000013E4
    li r0, 0x0
    stb r0, 0x1b7(r1)
lbl_fn_806E0DE0_000013E4:
    mr r3, r28
    addi r4, r31, 0xe4
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001410
    lis r3, lbl_8076B6C8@ha
    lfs f0, lbl_8076B6C8@l(r3)
    stfs f0, 0x1bc(r1)
    b lbl_fn_806E0DE0_00001420
lbl_fn_806E0DE0_00001410:
    addi r3, r1, 0x100
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x1bc(r1)
lbl_fn_806E0DE0_00001420:
    mr r3, r28
    addi r4, r31, 0xec
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_0000144C
    lis r3, lbl_8076B6C8@ha
    lfs f0, lbl_8076B6C8@l(r3)
    stfs f0, 0x1c0(r1)
    b lbl_fn_806E0DE0_0000145C
lbl_fn_806E0DE0_0000144C:
    addi r3, r1, 0x100
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x1c0(r1)
lbl_fn_806E0DE0_0000145C:
    mr r3, r28
    addi r4, r31, 0xf4
    addi r5, r1, 0x1c4
    li r6, 0x80
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001480
    li r0, 0x0
    stb r0, 0x1c4(r1)
lbl_fn_806E0DE0_00001480:
    mr r3, r28
    addi r4, r31, 0xfc
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000014B0
    li r0, 0x0
    stw r0, 0x244(r1)
    stw r0, 0x248(r1)
    stw r0, 0x24c(r1)
    b lbl_fn_806E0DE0_0000150C
lbl_fn_806E0DE0_000014B0:
    addi r3, r1, 0x100
    bl fn_80684600
    extrwi r24, r3, 8, 8
    clrlwi r25, r3, 16
    srwi r23, r3, 24
    mr r3, r23
    mr r4, r24
    mr r5, r25
    bl fn_806E0A30
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000014F0
    mr r3, r26
    addi r4, r31, 0x108
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E0DE0_00001500
lbl_fn_806E0DE0_000014F0:
    stw r23, 0x244(r1)
    li r3, 0x0
    stw r24, 0x248(r1)
    stw r25, 0x24c(r1)
lbl_fn_806E0DE0_00001500:
    cmpwi r3, 0x0
    beq lbl_fn_806E0DE0_0000150C
    b lbl_fn_806E0DE0_000019FC
lbl_fn_806E0DE0_0000150C:
    mr r3, r28
    addi r4, r31, 0x118
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001534
    li r0, 0x502
    stw r0, 0x250(r1)
    b lbl_fn_806E0DE0_0000156C
lbl_fn_806E0DE0_00001534:
    lbz r0, 0x100(r1)
    extsb r0, r0
    cmpwi r0, 0x30
    bne lbl_fn_806E0DE0_00001550
    li r0, 0x500
    stw r0, 0x250(r1)
    b lbl_fn_806E0DE0_0000156C
lbl_fn_806E0DE0_00001550:
    cmpwi r0, 0x31
    bne lbl_fn_806E0DE0_00001564
    li r0, 0x501
    stw r0, 0x250(r1)
    b lbl_fn_806E0DE0_0000156C
lbl_fn_806E0DE0_00001564:
    li r0, 0x502
    stw r0, 0x250(r1)
lbl_fn_806E0DE0_0000156C:
    mr r3, r28
    addi r4, r31, 0x120
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001594
    li r0, -0x1
    stw r0, 0x254(r1)
    b lbl_fn_806E0DE0_000015A0
lbl_fn_806E0DE0_00001594:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x254(r1)
lbl_fn_806E0DE0_000015A0:
    lwz r5, 0x258(r1)
    mr r3, r28
    addi r4, r31, 0x128
    li r6, 0x33
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000015C8
    lwz r3, 0x258(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_fn_806E0DE0_000015C8:
    mr r3, r28
    addi r4, r31, 0x130
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000015F0
    li r0, 0x0
    stw r0, 0x25c(r1)
    b lbl_fn_806E0DE0_000015FC
lbl_fn_806E0DE0_000015F0:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x25c(r1)
lbl_fn_806E0DE0_000015FC:
    mr r3, r28
    addi r4, r31, 0x138
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001624
    li r0, 0x0
    stw r0, 0x260(r1)
    b lbl_fn_806E0DE0_00001630
lbl_fn_806E0DE0_00001624:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x260(r1)
lbl_fn_806E0DE0_00001630:
    mr r3, r28
    addi r4, r31, 0x140
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001658
    li r0, 0x0
    stw r0, 0x264(r1)
    b lbl_fn_806E0DE0_00001664
lbl_fn_806E0DE0_00001658:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x264(r1)
lbl_fn_806E0DE0_00001664:
    mr r3, r28
    addi r4, r31, 0x148
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_0000168C
    li r0, 0x0
    stw r0, 0x268(r1)
    b lbl_fn_806E0DE0_00001698
lbl_fn_806E0DE0_0000168C:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x268(r1)
lbl_fn_806E0DE0_00001698:
    mr r3, r28
    addi r4, r31, 0x150
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000016C0
    li r0, 0x0
    stw r0, 0x26c(r1)
    b lbl_fn_806E0DE0_000016CC
lbl_fn_806E0DE0_000016C0:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x26c(r1)
lbl_fn_806E0DE0_000016CC:
    mr r3, r28
    addi r4, r31, 0x158
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000016F4
    li r0, 0x0
    stw r0, 0x270(r1)
    b lbl_fn_806E0DE0_00001700
lbl_fn_806E0DE0_000016F4:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x270(r1)
lbl_fn_806E0DE0_00001700:
    mr r3, r28
    addi r4, r31, 0x160
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001728
    li r0, 0x0
    stw r0, 0x274(r1)
    b lbl_fn_806E0DE0_00001734
lbl_fn_806E0DE0_00001728:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x274(r1)
lbl_fn_806E0DE0_00001734:
    mr r3, r28
    addi r4, r31, 0x168
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_0000175C
    li r0, 0x0
    stw r0, 0x278(r1)
    b lbl_fn_806E0DE0_00001768
lbl_fn_806E0DE0_0000175C:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x278(r1)
lbl_fn_806E0DE0_00001768:
    mr r3, r28
    addi r4, r31, 0x170
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_00001790
    li r0, 0x0
    stw r0, 0x27c(r1)
    b lbl_fn_806E0DE0_0000179C
lbl_fn_806E0DE0_00001790:
    addi r3, r1, 0x100
    bl fn_80684600
    stw r3, 0x27c(r1)
lbl_fn_806E0DE0_0000179C:
    mr r3, r28
    addi r4, r31, 0x178
    addi r5, r1, 0x100
    li r6, 0x40
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806E0DE0_000017E0
    mr r3, r26
    addi r5, r31, 0x3c
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806E0DE0_000019FC
lbl_fn_806E0DE0_000017E0:
    lwz r24, 0x100(r30)
    li r28, 0x66
    lwz r23, 0x5d8(r30)
    b lbl_fn_806E0DE0_00001830
lbl_fn_806E0DE0_000017F0:
    lwz r0, 0x10(r23)
    cmpw r0, r29
    bne lbl_fn_806E0DE0_0000182C
    lwz r0, 0x0(r23)
    cmpwi r0, 0x65
    bne lbl_fn_806E0DE0_0000182C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806E0DE0_00001824
    mr r3, r26
    mr r4, r29
    bl fn_806E5700
    stw r3, 0x8(r1)
lbl_fn_806E0DE0_00001824:
    stw r28, 0x0(r23)
    li r24, 0x1
lbl_fn_806E0DE0_0000182C:
    lwz r23, 0x4c(r23)
lbl_fn_806E0DE0_00001830:
    cmpwi r23, 0x0
    bne lbl_fn_806E0DE0_000017F0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806E0DE0_00001860
    lwz r0, 0x100(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806E0DE0_00001860
    mr r3, r26
    mr r4, r29
    bl fn_806E5700
    stw r3, 0x8(r1)
lbl_fn_806E0DE0_00001860:
    cmpwi r24, 0x0
    beq lbl_fn_806E0DE0_00001890
    lwz r3, 0x8(r1)
    lwz r3, 0x1c(r3)
    bl fn_806D7AC0
    lwz r4, 0x8(r1)
    li r0, 0x0
    addi r3, r1, 0x100
    stw r0, 0x1c(r4)
    bl fn_806D8E30
    lwz r4, 0x8(r1)
    stw r3, 0x1c(r4)
lbl_fn_806E0DE0_00001890:
    lwz r0, 0x100(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806E0DE0_00001960
    lwz r3, 0x0(r26)
    lwz r30, 0x8(r1)
    lwz r0, 0x100(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806E0DE0_00001960
    mr r3, r30
    bl fn_806E2E10
    li r3, 0xf0
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x10(r30)
    beq lbl_fn_806E0DE0_00001960
    li r0, 0x1e
    subi r5, r3, 0x4
    addi r4, r1, 0x18c
    mtctr r0
lbl_fn_806E0DE0_000018DC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_806E0DE0_000018DC
    lwz r3, 0x190(r1)
    bl fn_806D8E30
    lwz r4, 0x10(r30)
    stw r3, 0x0(r4)
    lwz r3, 0x194(r1)
    bl fn_806D8E30
    lwz r4, 0x10(r30)
    stw r3, 0x4(r4)
    lwz r3, 0x198(r1)
    bl fn_806D8E30
    lwz r4, 0x10(r30)
    stw r3, 0x8(r4)
    lwz r3, 0x19c(r1)
    bl fn_806D8E30
    lwz r4, 0x10(r30)
    stw r3, 0xc(r4)
    lwz r3, 0x1a0(r1)
    bl fn_806D8E30
    lwz r4, 0x10(r30)
    stw r3, 0x10(r4)
    lwz r3, 0x1a4(r1)
    bl fn_806D8E30
    lwz r4, 0x10(r30)
    stw r3, 0x14(r4)
    lwz r3, 0x258(r1)
    bl fn_806D8E30
    lwz r4, 0x10(r30)
    stw r3, 0xc8(r4)
lbl_fn_806E0DE0_00001960:
    lwz r3, 0xc(r27)
    lwz r0, 0x10(r27)
    cmpwi r3, 0x0
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_806E0DE0_000019EC
    li r3, 0x204
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_806E0DE0_000019A0
    mr r3, r26
    addi r4, r31, 0x180
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806E0DE0_000019FC
lbl_fn_806E0DE0_000019A0:
    mr r4, r23
    addi r3, r1, 0x190
    bl fn_806E0BA0
    li r0, 0x0
    stw r0, 0x0(r23)
    lwz r4, 0x18(r1)
    mr r3, r26
    stw r29, 0x4(r23)
    mr r5, r23
    lwz r0, 0x1c(r1)
    mr r6, r27
    stw r4, 0x10(r1)
    addi r4, r1, 0x10
    li r7, 0x0
    stw r0, 0x14(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806E0DE0_000019EC
    b lbl_fn_806E0DE0_000019FC
lbl_fn_806E0DE0_000019EC:
    mr r3, r26
    mr r4, r27
    bl fn_806E3A60
    li r3, 0x0
lbl_fn_806E0DE0_000019FC:
    addi r11, r1, 0x2b0
    bl _restgpr_23
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

asm void fn_806E16B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, jumptable_807C34D8@ha
    addi r31, r31, jumptable_807C34D8@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r30, 0x0(r3)
    lwz r0, 0x5ec(r30)
    cmpwi r0, 0x0
    ble lbl_fn_806E16B0_00001AB8
    addi r5, r31, 0x190
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r28
    mr r4, r29
    bl fn_806DE4E0
    lwz r5, 0x5e4(r30)
    mr r3, r28
    mr r4, r29
    bl fn_806DE480
    mr r3, r28
    mr r4, r29
    addi r5, r31, 0x1a8
    bl fn_806DE480
    lwz r5, 0x1a4(r30)
    mr r3, r28
    mr r4, r29
    bl fn_806DE4E0
    mr r3, r28
    mr r4, r29
    addi r5, r31, 0x1b8
    bl fn_806DE480
    li r0, 0x0
    stw r0, 0x5ec(r30)
lbl_fn_806E16B0_00001AB8:
    lwz r0, 0x5fc(r30)
    cmpwi r0, 0x0
    ble lbl_fn_806E16B0_00001B0C
    mr r3, r28
    mr r4, r29
    addi r5, r31, 0x1c0
    bl fn_806DE480
    lwz r5, 0x198(r30)
    mr r3, r28
    mr r4, r29
    bl fn_806DE4E0
    lwz r5, 0x5f4(r30)
    mr r3, r28
    mr r4, r29
    bl fn_806DE480
    mr r3, r28
    mr r4, r29
    addi r5, r31, 0x1b8
    bl fn_806DE480
    li r0, 0x0
    stw r0, 0x5fc(r30)
lbl_fn_806E16B0_00001B0C:
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806E17D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    subi r0, r4, 0x706
    cmplwi r0, 0x18
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lis r30, jumptable_807C34D8@ha
    addi r30, r30, jumptable_807C34D8@l
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    bgt lbl_fn_806E17D0_00002340
    lis r4, jumptable_807C376C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807C376C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r5, 0x0
    bge lbl_fn_806E17D0_00001BA0
    addi r4, r30, 0x1d4
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E17D0_00002358
lbl_fn_806E17D0_00001BA0:
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0xc8
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001BD0
    b lbl_fn_806E17D0_00001BF4
lbl_fn_806E17D0_00001BD0:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001BF0
    mr r0, r3
lbl_fn_806E17D0_00001BF0:
    mr r3, r0
lbl_fn_806E17D0_00001BF4:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    cmpwi r5, 0x500
    beq lbl_fn_806E17D0_00001C1C
    cmpwi r5, 0x501
    beq lbl_fn_806E17D0_00001C6C
    cmpwi r5, 0x502
    beq lbl_fn_806E17D0_00001CBC
    b lbl_fn_806E17D0_00001D0C
lbl_fn_806E17D0_00001C1C:
    lwz r28, 0x0(r3)
    addi r29, r30, 0x1ec
    addi r5, r30, 0x118
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001C3C
    b lbl_fn_806E17D0_00001C60
lbl_fn_806E17D0_00001C3C:
    mr r3, r31
    mr r5, r29
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001C5C
    mr r0, r3
lbl_fn_806E17D0_00001C5C:
    mr r3, r0
lbl_fn_806E17D0_00001C60:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
lbl_fn_806E17D0_00001C6C:
    lwz r29, 0x0(r3)
    addi r28, r30, 0x1f0
    addi r5, r30, 0x118
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001C8C
    b lbl_fn_806E17D0_00001CB0
lbl_fn_806E17D0_00001C8C:
    mr r3, r31
    mr r5, r28
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001CAC
    mr r0, r3
lbl_fn_806E17D0_00001CAC:
    mr r3, r0
lbl_fn_806E17D0_00001CB0:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
lbl_fn_806E17D0_00001CBC:
    lwz r29, 0x0(r3)
    addi r28, r30, 0x1f4
    addi r5, r30, 0x118
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001CDC
    b lbl_fn_806E17D0_00001D00
lbl_fn_806E17D0_00001CDC:
    mr r3, r31
    mr r5, r28
    addi r4, r29, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001CFC
    mr r0, r3
lbl_fn_806E17D0_00001CFC:
    mr r3, r0
lbl_fn_806E17D0_00001D00:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
lbl_fn_806E17D0_00001D0C:
    addi r4, r30, 0x1f8
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0xb0
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001D4C
    b lbl_fn_806E17D0_00001D70
lbl_fn_806E17D0_00001D4C:
    mr r3, r31
    addi r4, r28, 0x5e4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001D6C
    mr r0, r3
lbl_fn_806E17D0_00001D6C:
    mr r3, r0
lbl_fn_806E17D0_00001D70:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x208
    addi r4, r28, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001DAC
    b lbl_fn_806E17D0_00001DD0
lbl_fn_806E17D0_00001DAC:
    mr r3, r31
    addi r4, r28, 0x5f4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001DCC
    mr r0, r3
lbl_fn_806E17D0_00001DCC:
    mr r3, r0
lbl_fn_806E17D0_00001DD0:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x218
    addi r4, r28, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001E0C
    b lbl_fn_806E17D0_00001E30
lbl_fn_806E17D0_00001E0C:
    mr r3, r31
    addi r4, r28, 0x5f4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001E2C
    mr r0, r3
lbl_fn_806E17D0_00001E2C:
    mr r3, r0
lbl_fn_806E17D0_00001E30:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    srawi r0, r5, 4
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    addze r5, r0
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x224
    addi r4, r28, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001E74
    b lbl_fn_806E17D0_00001E98
lbl_fn_806E17D0_00001E74:
    mr r3, r31
    addi r4, r28, 0x5f4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001E94
    mr r0, r3
lbl_fn_806E17D0_00001E94:
    mr r3, r0
lbl_fn_806E17D0_00001E98:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    srawi r0, r5, 2
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    addze r5, r0
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x230
    addi r4, r28, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001EDC
    b lbl_fn_806E17D0_00001F00
lbl_fn_806E17D0_00001EDC:
    mr r3, r31
    addi r4, r28, 0x5f4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001EFC
    mr r0, r3
lbl_fn_806E17D0_00001EFC:
    mr r3, r0
lbl_fn_806E17D0_00001F00:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    srawi r0, r5, 2
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    addze r5, r0
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x240
    addi r4, r28, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001F44
    b lbl_fn_806E17D0_00001F68
lbl_fn_806E17D0_00001F44:
    mr r3, r31
    addi r4, r28, 0x5f4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001F64
    mr r0, r3
lbl_fn_806E17D0_00001F64:
    mr r3, r0
lbl_fn_806E17D0_00001F68:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x250
    addi r4, r28, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00001FA4
    b lbl_fn_806E17D0_00001FC8
lbl_fn_806E17D0_00001FA4:
    mr r3, r31
    addi r4, r28, 0x5f4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00001FC4
    mr r0, r3
lbl_fn_806E17D0_00001FC4:
    mr r3, r0
lbl_fn_806E17D0_00001FC8:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x260
    addi r4, r28, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002004
    b lbl_fn_806E17D0_00002028
lbl_fn_806E17D0_00002004:
    mr r3, r31
    addi r4, r28, 0x5f4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00002024
    mr r0, r3
lbl_fn_806E17D0_00002024:
    mr r3, r0
lbl_fn_806E17D0_00002028:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    cmpwi r5, 0x0
    beq lbl_fn_806E17D0_00002040
    li r5, 0x1
lbl_fn_806E17D0_00002040:
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x274
    addi r4, r28, 0x5f4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002070
    b lbl_fn_806E17D0_00002094
lbl_fn_806E17D0_00002070:
    mr r3, r31
    addi r4, r28, 0x5f4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00002090
    mr r0, r3
lbl_fn_806E17D0_00002090:
    mr r3, r0
lbl_fn_806E17D0_00002094:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x130
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_000020D0
    b lbl_fn_806E17D0_000020F4
lbl_fn_806E17D0_000020D0:
    mr r3, r31
    addi r4, r28, 0x5e4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_000020F0
    mr r0, r3
lbl_fn_806E17D0_000020F0:
    mr r3, r0
lbl_fn_806E17D0_000020F4:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x138
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002130
    b lbl_fn_806E17D0_00002154
lbl_fn_806E17D0_00002130:
    mr r3, r31
    addi r4, r28, 0x5e4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00002150
    mr r0, r3
lbl_fn_806E17D0_00002150:
    mr r3, r0
lbl_fn_806E17D0_00002154:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x140
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002190
    b lbl_fn_806E17D0_000021B4
lbl_fn_806E17D0_00002190:
    mr r3, r31
    addi r4, r28, 0x5e4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_000021B0
    mr r0, r3
lbl_fn_806E17D0_000021B0:
    mr r3, r0
lbl_fn_806E17D0_000021B4:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x148
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_000021F0
    b lbl_fn_806E17D0_00002214
lbl_fn_806E17D0_000021F0:
    mr r3, r31
    addi r4, r28, 0x5e4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00002210
    mr r0, r3
lbl_fn_806E17D0_00002210:
    mr r3, r0
lbl_fn_806E17D0_00002214:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x150
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002250
    b lbl_fn_806E17D0_00002274
lbl_fn_806E17D0_00002250:
    mr r3, r31
    addi r4, r28, 0x5e4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00002270
    mr r0, r3
lbl_fn_806E17D0_00002270:
    mr r3, r0
lbl_fn_806E17D0_00002274:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x158
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_000022B0
    b lbl_fn_806E17D0_000022D4
lbl_fn_806E17D0_000022B0:
    mr r3, r31
    addi r4, r28, 0x5e4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_000022D0
    mr r0, r3
lbl_fn_806E17D0_000022D0:
    mr r3, r0
lbl_fn_806E17D0_000022D4:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
    addi r3, r1, 0x8
    addi r4, r30, 0x1e8
    crclr 6
    bl sprintf
    lwz r28, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x160
    addi r4, r28, 0x5e4
    bl fn_806DE480
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002310
    b lbl_fn_806E17D0_00002334
lbl_fn_806E17D0_00002310:
    mr r3, r31
    addi r4, r28, 0x5e4
    addi r5, r1, 0x8
    bl fn_806DE480
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_fn_806E17D0_00002330
    mr r0, r3
lbl_fn_806E17D0_00002330:
    mr r3, r0
lbl_fn_806E17D0_00002334:
    cmpwi r3, 0x0
    beq lbl_fn_806E17D0_00002354
    b lbl_fn_806E17D0_00002358
lbl_fn_806E17D0_00002340:
    mr r3, r31
    addi r4, r30, 0x284
    bl fn_806E91F0
    li r3, 0x2
    b lbl_fn_806E17D0_00002358
lbl_fn_806E17D0_00002354:
    li r3, 0x0
lbl_fn_806E17D0_00002358:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
