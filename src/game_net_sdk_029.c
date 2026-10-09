#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_806A426C(void);
extern void fn_806A4270(void);
extern void fn_806D57A0(void);
extern void fn_806D63A0(void);
extern void fn_806D7A90(void);
extern void fn_806D7AA0(void);
extern void fn_806D7AC0(void);
extern void fn_806D8B20(void);
extern void fn_806D8E30(void);
extern void fn_806D8F30(void);
extern void fn_806D8F80(void);
extern void fn_806D9590(void);
extern void fn_806DE480(void);
extern void fn_806DE4E0(void);
extern void fn_806DE7F0(void);
extern void fn_806DE940(void);
extern void fn_806DED80(void);
extern void fn_806DEE40(void);
extern void fn_806DF1C0(void);
extern void fn_806E0540(void);
extern void fn_806E0770(void);
extern void fn_806E0930(void);
extern void fn_806E16B0(void);
extern void fn_806E2EF0(void);
extern void fn_806E2F40(void);
extern void fn_806E2FB0(void);
extern void fn_806E3210(void);
extern void fn_806E3580(void);
extern void fn_806E3A60(void);
extern void fn_806E3B50(void);
extern void fn_806E3BB0(void);
extern void fn_806E3C00(void);
extern void fn_806E4890(void);
extern void fn_806E49C0(void);
extern void fn_806E4A30(void);
extern void fn_806E4B00(void);
extern void fn_806E4B90(void);
extern void fn_806E4CA0(void);
extern void fn_806E52B0(void);
extern void fn_806E5700(void);
extern void fn_806E57E0(void);
extern void fn_806E5B10(void);
extern void fn_806E5C20(void);
extern void fn_806E5C80(void);
extern void fn_806E5D70(void);
extern void fn_806E8650(void);
extern void fn_806E8B10(void);
extern void fn_806E8B60(void);
extern void fn_806E8D30(void);
extern void fn_806E8E10(void);
extern void fn_806E91A0(void);
extern void fn_806E91F0(void);
extern void memmove(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807C2D00[];
extern u8 lbl_807C2DD0[];
extern u8 lbl_807C2F50[];

/* Small data declarations */

/* Function declarations */
void pad_03_806DB9DC_text(void);
void fn_806DB9E0(void);
void fn_806DBA40(void);
void fn_806DBA70(void);
void fn_806DBCC0(void);
void fn_806DC0B0(void);
void fn_806DC260(void);
void fn_806DCD80(void);
void fn_806DD450(void);
void fn_806DD6D0(void);
void fn_806DD7C0(void);
void fn_806DD980(void);

asm void pad_03_806DB9DC_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806DB9E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x0(r3)
    bl fn_806E0770
    mr r3, r30
    bl fn_806E2FB0
    lwz r3, 0x5c8(r31)
    bl fn_806D63A0
    mr r3, r31
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806DBA40(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x8(r4)
    li r3, 0x1
    stw r0, 0xc(r4)
    stw r0, 0x14(r4)
    stw r0, 0x18(r4)
    stw r0, 0x1c(r4)
    stw r0, 0x20(r4)
    stw r0, 0x28(r4)
    blr
}

asm void fn_806DBA70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, -0x1
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, 0x0(r3)
    stw r4, 0x8(r1)
    stb r31, 0x110(r4)
    lwz r3, 0x8(r1)
    stb r31, 0x12f(r3)
    lwz r3, 0x8(r1)
    stb r31, 0x144(r3)
    lwz r3, 0x8(r1)
    stw r0, 0x1f0(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x1f4(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x200(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x204(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x1fc(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x1f8(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r1)
    stw r31, 0x1f8(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x1f8(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x20c(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x208(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r1)
    stw r31, 0x208(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x208(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x218(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x21c(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x214(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x210(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r1)
    stw r31, 0x210(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x210(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5ec(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5f0(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5e8(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x5e4(r3)
    bl fn_806D7AC0
    lwz r3, 0x8(r1)
    stw r31, 0x5e4(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5e4(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5fc(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x600(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5f8(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x5f4(r3)
    bl fn_806D7AC0
    lwz r4, 0x8(r1)
    mr r3, r30
    stw r31, 0x5f4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5f4(r4)
    bl fn_806E2FB0
    addi r3, r1, 0x8
    bl fn_806E2F40
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_806DBA70_00000220
    lwz r30, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_806E0770
    addi r3, r1, 0x8
    bl fn_806E2FB0
    lwz r3, 0x5c8(r30)
    bl fn_806D63A0
    mr r3, r30
    bl fn_806D7AC0
    mr r3, r31
    b lbl_fn_806DBA70_000002CC
lbl_fn_806DBA70_00000220:
    lwz r3, 0x8(r1)
    li r0, 0x2
    stw r0, 0x234(r3)
    b lbl_fn_806DBA70_00000238
lbl_fn_806DBA70_00000230:
    mr r3, r30
    bl fn_806E3A60
lbl_fn_806DBA70_00000238:
    lwz r3, 0x8(r1)
    lwz r4, 0x5c4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806DBA70_00000230
    li r31, 0x0
    stw r31, 0x5c4(r3)
    lis r4, fn_806DBA40@ha
    mr r3, r30
    lwz r6, 0x8(r1)
    addi r4, r4, fn_806DBA40@l
    li r5, 0x0
    stw r31, 0x5d0(r6)
    lwz r6, 0x8(r1)
    stw r31, 0x5d4(r6)
    bl fn_806E5B10
    lwz r4, 0x8(r1)
    li r0, -0x1
    li r3, 0x0
    stw r31, 0x19c(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1a0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x198(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x238(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5bc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5d8(r4)
    lwz r4, 0x8(r1)
    stw r0, 0x23c(r4)
    lwz r4, 0x8(r1)
    stb r31, 0x3b8(r4)
    lwz r4, 0x8(r1)
    stb r31, 0x4b8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x634(r4)
lbl_fn_806DBA70_000002CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806DBCC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    li r30, 0x0
    stw r30, 0x8(r1)
    lis r29, lbl_807C2D00@ha
    mr r27, r3
    lwz r28, 0x0(r3)
    addi r29, r29, lbl_807C2D00@l
    bl fn_806D8F30
    mr r31, r3
lbl_fn_806DBCC0_00000318:
    mr r3, r27
    addi r4, r28, 0x210
    bl fn_806E16B0
    lwz r0, 0x218(r28)
    cmpwi r0, 0x0
    ble lbl_fn_806DBCC0_00000334
    stw r31, 0x634(r28)
lbl_fn_806DBCC0_00000334:
    lwz r4, 0x1f0(r28)
    mr r3, r27
    addi r5, r28, 0x210
    addi r6, r1, 0x8
    addi r8, r29, 0x0
    li r7, 0x1
    bl fn_806DE940
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_0000035C
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_0000035C:
    lwz r4, 0x1f0(r28)
    mr r3, r27
    addi r5, r28, 0x1f8
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    addi r8, r29, 0x0
    bl fn_806DE7F0
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_00000608
    cmpwi r3, 0x3
    bne lbl_fn_806DBCC0_000006B4
    mr r3, r27
    addi r5, r29, 0x4
    li r4, 0x5
    bl fn_806E91A0
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DBCC0_000006B4
    b lbl_fn_806DBCC0_000006B4
    b lbl_fn_806DBCC0_00000608
lbl_fn_806DBCC0_000003B8:
    stw r31, 0x634(r28)
    stb r30, 0x0(r3)
    lwz r0, 0x1f8(r28)
    subf r4, r0, r3
    stw r4, 0xc(r1)
    lwz r0, 0x20c(r28)
    cmpw r4, r0
    ble lbl_fn_806DBCC0_00000420
    cmpwi r4, 0x4000
    li r3, 0x4000
    blt lbl_fn_806DBCC0_000003E8
    mr r3, r4
lbl_fn_806DBCC0_000003E8:
    lwz r0, 0x20c(r28)
    add r3, r0, r3
    stw r3, 0x20c(r28)
    addi r4, r3, 0x1
    lwz r3, 0x208(r28)
    bl fn_806D7AA0
    cmpwi r3, 0x0
    bne lbl_fn_806DBCC0_0000041C
    mr r3, r27
    addi r4, r29, 0x30
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_0000041C:
    stw r3, 0x208(r28)
lbl_fn_806DBCC0_00000420:
    lwz r5, 0xc(r1)
    lwz r3, 0x208(r28)
    lwz r4, 0x1f8(r28)
    addi r5, r5, 0x1
    bl memcpy
    lwz r3, 0x1f8(r28)
    addi r4, r26, 0x7
    lwz r0, 0x200(r28)
    subf r3, r3, r4
    subf r3, r3, r0
    stw r3, 0x200(r28)
    addi r5, r3, 0x1
    lwz r3, 0x1f8(r28)
    bl memmove
    lwz r26, 0x208(r28)
    addi r4, r29, 0x40
    mr r3, r26
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_000004AC
    addi r3, r3, 0x4
    bl fn_80684600
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x10
    bl fn_806E3B50
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_00000608
    lwz r4, 0x10(r1)
    mr r3, r27
    lwz r5, 0x208(r28)
    bl fn_806E3C00
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_00000608
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_000004AC:
    mr r3, r27
    mr r4, r26
    li r5, 0x1
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_000004CC
    li r3, 0x4
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_000004CC:
    lwz r26, 0x208(r28)
    addi r4, r29, 0x48
    li r5, 0x4
    mr r3, r26
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806DBCC0_00000500
    mr r3, r27
    mr r4, r26
    bl fn_806DC260
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_00000608
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_00000500:
    mr r3, r26
    addi r4, r29, 0x50
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_00000608
    mr r3, r26
    addi r4, r29, 0x58
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806DBCC0_00000548
    mr r3, r26
    addi r4, r29, 0x58
    addi r5, r28, 0x614
    li r6, 0x19
    bl fn_806E8E10
    b lbl_fn_806DBCC0_00000608
lbl_fn_806DBCC0_00000548:
    mr r3, r26
    addi r4, r29, 0x60
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806DBCC0_00000578
    mr r3, r27
    mr r4, r26
    bl fn_806DCD80
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_00000608
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_00000578:
    mr r3, r26
    addi r4, r29, 0x68
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806DBCC0_000005A8
    mr r3, r27
    mr r4, r26
    bl fn_806DD450
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_00000608
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_000005A8:
    mr r3, r26
    addi r4, r29, 0x70
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806DBCC0_000005D8
    mr r3, r27
    mr r4, r26
    bl fn_806E5D70
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_00000608
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_000005D8:
    mr r3, r26
    addi r4, r29, 0x78
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806DBCC0_00000608
    mr r3, r27
    mr r4, r26
    bl fn_806E0930
    cmpwi r3, 0x0
    beq lbl_fn_806DBCC0_00000608
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_00000608:
    lwz r3, 0x1f8(r28)
    addi r4, r29, 0x80
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_806DBCC0_000003B8
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806DBCC0_00000660
    lwz r0, 0x1f4(r28)
    cmpwi r0, 0x5
    beq lbl_fn_806DBCC0_00000660
    mr r3, r27
    addi r5, r29, 0x88
    li r4, 0x7
    bl fn_806E91A0
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x0
    b lbl_fn_806DBCC0_000006B4
lbl_fn_806DBCC0_00000660:
    mr r3, r27
    bl fn_806E3BB0
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_806DBCC0_0000067C
    li r3, 0xa
    bl fn_806D8F80
lbl_fn_806DBCC0_0000067C:
    cmpwi r26, 0x0
    bne lbl_fn_806DBCC0_00000318
    lwz r4, 0x634(r28)
    lis r3, 0x2
    subi r0, r3, 0x2b40
    subf r3, r4, r31
    cmplw r3, r0
    ble lbl_fn_806DBCC0_000006B0
    mr r3, r27
    addi r4, r28, 0x210
    addi r5, r29, 0xb0
    bl fn_806DE480
    stw r31, 0x634(r28)
lbl_fn_806DBCC0_000006B0:
    li r3, 0x0
lbl_fn_806DBCC0_000006B4:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DC0B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r30, 0x0(r3)
    mr r31, r3
    mr r27, r4
    li r29, 0x0
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_806DC0B0_00000780
lbl_fn_806DC0B0_00000704:
    mr r3, r31
    bl fn_806E0540
    cmpwi r3, 0x0
    mr r29, r3
    li r3, 0x0
    bne lbl_fn_806DC0B0_00000734
    cmpwi r27, 0x0
    beq lbl_fn_806DC0B0_00000734
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_806DC0B0_00000734
    li r3, 0x1
lbl_fn_806DC0B0_00000734:
    neg r0, r3
    or r0, r0, r3
    srwi. r28, r0, 31
    beq lbl_fn_806DC0B0_0000074C
    li r3, 0xa
    bl fn_806D8F80
lbl_fn_806DC0B0_0000074C:
    cmpwi r28, 0x0
    bne lbl_fn_806DC0B0_00000704
    cmpwi r29, 0x0
    beq lbl_fn_806DC0B0_00000780
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x1
    bl fn_806E3B50
    cmpwi r3, 0x0
    beq lbl_fn_806DC0B0_00000780
    lwz r3, 0x8(r1)
    li r0, 0x4
    stw r0, 0x1c(r3)
lbl_fn_806DC0B0_00000780:
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x3
    beq lbl_fn_806DC0B0_0000079C
    cmpwi r0, 0x2
    beq lbl_fn_806DC0B0_0000079C
    cmpwi r0, 0x5
    bne lbl_fn_806DC0B0_000007C4
lbl_fn_806DC0B0_0000079C:
    cmpwi r29, 0x0
    bne lbl_fn_806DC0B0_000007B0
    mr r3, r31
    bl fn_806DBCC0
    mr r29, r3
lbl_fn_806DC0B0_000007B0:
    cmpwi r29, 0x0
    bne lbl_fn_806DC0B0_000007C4
    mr r3, r31
    bl fn_806E4890
    mr r29, r3
lbl_fn_806DC0B0_000007C4:
    cmpwi r29, 0x0
    bne lbl_fn_806DC0B0_000007D8
    mr r3, r31
    bl fn_806E8650
    mr r29, r3
lbl_fn_806DC0B0_000007D8:
    lwz r0, 0x5c4(r30)
    stw r0, 0x8(r1)
    b lbl_fn_806DC0B0_00000818
lbl_fn_806DC0B0_000007E4:
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806DC0B0_00000810
    mr r3, r31
    bl fn_806E3580
    lwz r4, 0x8(r1)
    mr r3, r31
    lwz r0, 0x20(r4)
    stw r0, 0x8(r1)
    bl fn_806E3A60
    b lbl_fn_806DC0B0_00000818
lbl_fn_806DC0B0_00000810:
    lwz r0, 0x20(r4)
    stw r0, 0x8(r1)
lbl_fn_806DC0B0_00000818:
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    bne lbl_fn_806DC0B0_000007E4
    mr r3, r31
    mr r4, r27
    bl fn_806DF1C0
    cmpwi r3, 0x0
    beq lbl_fn_806DC0B0_0000083C
    b lbl_fn_806DC0B0_00000860
lbl_fn_806DC0B0_0000083C:
    lwz r0, 0x5bc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806DC0B0_0000085C
    mr r3, r31
    li r4, 0x0
    bl fn_806E0770
    mr r3, r31
    bl fn_806DBA70
lbl_fn_806DC0B0_0000085C:
    mr r3, r29
lbl_fn_806DC0B0_00000860:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DC260(void)
{
    nofralloc
    stwu r1, -0x11b0(r1)
    mflr r0
    stw r0, 0x11b4(r1)
    addi r11, r1, 0x11b0
    bl _savegpr_24
    lis r30, lbl_807C2DD0@ha
    mr r27, r4
    addi r30, r30, lbl_807C2DD0@l
    lwz r28, 0x0(r3)
    mr r26, r3
    mr r3, r27
    addi r4, r30, 0x0
    addi r5, r1, 0x188
    li r6, 0x1000
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_000008F0
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_000008F0:
    addi r3, r1, 0x188
    bl fn_80684600
    mr r24, r3
    mr r3, r27
    addi r4, r30, 0x38
    addi r5, r1, 0x188
    li r6, 0x1000
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00000940
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000940:
    addi r3, r1, 0x188
    bl fn_80684600
    mr r29, r3
    mr r3, r27
    addi r4, r30, 0x3c
    addi r5, r1, 0x188
    li r6, 0x1000
    bl fn_806E8E10
    cmpwi r3, 0x0
    beq lbl_fn_806DC260_00000978
    addi r3, r1, 0x188
    bl fn_80684600
    mr r31, r3
    b lbl_fn_806DC260_00000984
lbl_fn_806DC260_00000978:
    li r3, 0x0
    bl fn_806D8B20
    mr r31, r3
lbl_fn_806DC260_00000984:
    cmpwi r24, 0x6
    beq lbl_fn_806DC260_00000DE4
    bge lbl_fn_806DC260_000009B8
    cmpwi r24, 0x3
    beq lbl_fn_806DC260_0000137C
    bge lbl_fn_806DC260_000009AC
    cmpwi r24, 0x1
    beq lbl_fn_806DC260_000009DC
    bge lbl_fn_806DC260_00000BCC
    b lbl_fn_806DC260_0000137C
lbl_fn_806DC260_000009AC:
    cmpwi r24, 0x5
    bge lbl_fn_806DC260_00000AD4
    b lbl_fn_806DC260_00000D6C
lbl_fn_806DC260_000009B8:
    cmpwi r24, 0x65
    beq lbl_fn_806DC260_0000119C
    bge lbl_fn_806DC260_000009D0
    cmpwi r24, 0x64
    bge lbl_fn_806DC260_00000E5C
    b lbl_fn_806DC260_0000137C
lbl_fn_806DC260_000009D0:
    cmpwi r24, 0x67
    bge lbl_fn_806DC260_0000137C
    b lbl_fn_806DC260_0000131C
lbl_fn_806DC260_000009DC:
    lwz r3, 0x1c0(r28)
    lwz r0, 0x1c4(r28)
    cmpwi r3, 0x0
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    beq lbl_fn_806DC260_0000137C
    li r3, 0xc
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_806DC260_00000A1C
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000A1C:
    mr r3, r27
    addi r4, r30, 0x54
    addi r5, r1, 0x188
    li r6, 0x1000
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00000A60
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000A60:
    addi r3, r1, 0x188
    bl strlen
    addi r3, r3, 0x1
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x8(r24)
    bne lbl_fn_806DC260_00000A90
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000A90:
    addi r4, r1, 0x188
    bl strcpy
    stw r29, 0x0(r24)
    mr r3, r26
    lwz r7, 0x70(r1)
    mr r5, r24
    stw r31, 0x4(r24)
    addi r4, r1, 0x68
    lwz r0, 0x74(r1)
    li r6, 0x0
    stw r7, 0x68(r1)
    li r7, 0x2
    stw r0, 0x6c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806DC260_0000137C
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000AD4:
    lwz r3, 0x1c8(r28)
    lwz r0, 0x1cc(r28)
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_806DC260_0000137C
    li r3, 0xc
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_806DC260_00000B14
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000B14:
    mr r3, r27
    addi r4, r30, 0x54
    addi r5, r1, 0x188
    li r6, 0x1000
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00000B58
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000B58:
    addi r3, r1, 0x188
    bl strlen
    addi r3, r3, 0x1
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x8(r24)
    bne lbl_fn_806DC260_00000B88
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000B88:
    addi r4, r1, 0x188
    bl strcpy
    stw r29, 0x0(r24)
    mr r3, r26
    lwz r7, 0x8(r1)
    mr r5, r24
    stw r31, 0x4(r24)
    addi r4, r1, 0x60
    lwz r0, 0xc(r1)
    li r6, 0x0
    stw r7, 0x60(r1)
    li r7, 0xb
    stw r0, 0x64(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806DC260_0000137C
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000BCC:
    mr r3, r26
    mr r4, r29
    bl fn_806E5700
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_806DC260_00000BF8
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000BF8:
    mr r3, r27
    addi r4, r30, 0x54
    addi r5, r1, 0x188
    li r6, 0x1000
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00000C3C
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000C3C:
    addi r3, r1, 0x188
    addi r4, r30, 0x5c
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806DC260_00000C7C
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000C7C:
    li r25, 0x0
    stb r25, 0x0(r3)
    addi r3, r3, 0x8
    bl strlen
    cmplwi r3, 0x20
    beq lbl_fn_806DC260_00000CBC
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000CBC:
    lwz r3, 0x14(r24)
    bl fn_806D7AC0
    stw r25, 0x14(r24)
    addi r3, r27, 0x8
    bl fn_806D8E30
    stw r3, 0x14(r24)
    lwz r3, 0x18(r24)
    addi r0, r3, 0x1
    stw r0, 0x18(r24)
    lwz r3, 0x1b0(r28)
    lwz r0, 0x1b4(r28)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_806DC260_0000137C
    li r3, 0x40c
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_806DC260_00000D20
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000D20:
    addi r4, r1, 0x188
    li r5, 0x401
    addi r3, r3, 0x8
    bl fn_806E8B10
    stw r29, 0x0(r24)
    mr r3, r26
    lwz r7, 0x10(r1)
    mr r5, r24
    stw r31, 0x4(r24)
    addi r4, r1, 0x58
    lwz r0, 0x14(r1)
    li r6, 0x0
    stw r7, 0x58(r1)
    li r7, 0x6
    stw r0, 0x5c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806DC260_0000137C
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000D6C:
    lwz r3, 0x1e0(r28)
    lwz r0, 0x1e4(r28)
    cmpwi r3, 0x0
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_806DC260_0000137C
    li r3, 0x8
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00000DA8
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000DA8:
    stw r29, 0x0(r3)
    mr r5, r3
    lwz r7, 0x18(r1)
    addi r4, r1, 0x50
    stw r31, 0x4(r3)
    mr r3, r26
    lwz r0, 0x1c(r1)
    li r6, 0x0
    stw r7, 0x50(r1)
    li r7, 0xa
    stw r0, 0x54(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806DC260_0000137C
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000DE4:
    lwz r3, 0x1e8(r28)
    lwz r0, 0x1ec(r28)
    cmpwi r3, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_806DC260_0000137C
    li r3, 0x8
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00000E20
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000E20:
    stw r29, 0x0(r3)
    mr r5, r3
    lwz r7, 0x20(r1)
    addi r4, r1, 0x48
    stw r31, 0x4(r3)
    mr r3, r26
    lwz r0, 0x24(r1)
    li r6, 0x0
    stw r7, 0x48(r1)
    li r7, 0xc
    stw r0, 0x4c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806DC260_0000137C
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000E5C:
    mr r3, r26
    mr r4, r29
    bl fn_806E5700
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_806DC260_00000E88
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000E88:
    lwz r0, 0x1f4(r28)
    cmpwi r0, 0x3
    bne lbl_fn_806DC260_00000EA0
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DC260_0000137C
lbl_fn_806DC260_00000EA0:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DC260_0000137C
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DC260_00000F2C
    li r3, 0x1c
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x8(r25)
    bne lbl_fn_806DC260_00000EE0
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000EE0:
    li r4, 0x0
    li r5, 0x1c
    bl memset
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    beq lbl_fn_806DC260_00000F18
    lwz r3, 0x8(r25)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r3, 0xc(r25)
    bl fn_806E5C80
    li r0, 0x0
    stw r0, 0xc(r25)
    b lbl_fn_806DC260_00000F2C
lbl_fn_806DC260_00000F18:
    lwz r3, 0x8(r25)
    lwz r4, 0x5d0(r28)
    stw r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x5d0(r28)
lbl_fn_806DC260_00000F2C:
    lwz r24, 0x8(r25)
    mr r3, r27
    addi r4, r30, 0x54
    addi r5, r1, 0x188
    li r6, 0x1000
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00000F74
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000F74:
    addi r3, r1, 0x188
    addi r4, r30, 0x68
    addi r5, r1, 0x78
    li r6, 0x10
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00000FB8
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00000FB8:
    addi r3, r1, 0x78
    bl fn_80684600
    stw r3, 0x4(r24)
    lwz r3, 0x8(r24)
    bl fn_806D7AC0
    li r27, 0x0
    stw r27, 0x8(r24)
    addi r3, r1, 0x188
    addi r4, r30, 0x6c
    addi r5, r1, 0x88
    li r6, 0x100
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00000FF4
    stb r27, 0x88(r1)
lbl_fn_806DC260_00000FF4:
    addi r3, r1, 0x88
    bl fn_806D8E30
    cmpwi r3, 0x0
    stw r3, 0x8(r24)
    bne lbl_fn_806DC260_0000101C
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_0000101C:
    lwz r3, 0xc(r24)
    bl fn_806D7AC0
    li r27, 0x0
    stw r27, 0xc(r24)
    addi r3, r1, 0x188
    addi r4, r30, 0x74
    addi r5, r1, 0x88
    li r6, 0x100
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_0000104C
    stb r27, 0x88(r1)
lbl_fn_806DC260_0000104C:
    addi r3, r1, 0x88
    bl fn_806D8E30
    cmpwi r3, 0x0
    stw r3, 0xc(r24)
    bne lbl_fn_806DC260_00001074
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00001074:
    addi r3, r1, 0x188
    addi r4, r30, 0x7c
    addi r5, r1, 0x78
    li r6, 0x10
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_0000109C
    li r0, 0x0
    stw r0, 0x10(r24)
    b lbl_fn_806DC260_000010AC
lbl_fn_806DC260_0000109C:
    addi r3, r1, 0x78
    bl fn_80684600
    bl fn_806A426C
    stw r3, 0x10(r24)
lbl_fn_806DC260_000010AC:
    addi r3, r1, 0x188
    addi r4, r30, 0x84
    addi r5, r1, 0x78
    li r6, 0x10
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_000010D4
    li r0, 0x0
    sth r0, 0x14(r24)
    b lbl_fn_806DC260_000010E8
lbl_fn_806DC260_000010D4:
    addi r3, r1, 0x78
    bl fn_80684600
    clrlwi r3, r3, 16
    bl fn_806A4270
    sth r3, 0x14(r24)
lbl_fn_806DC260_000010E8:
    addi r3, r1, 0x188
    addi r4, r30, 0x88
    addi r5, r1, 0x78
    li r6, 0x10
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00001110
    li r0, 0x0
    stw r0, 0x18(r24)
    b lbl_fn_806DC260_0000111C
lbl_fn_806DC260_00001110:
    addi r3, r1, 0x78
    bl fn_80684600
    stw r3, 0x18(r24)
lbl_fn_806DC260_0000111C:
    lwz r3, 0x1b8(r28)
    lwz r0, 0x1bc(r28)
    cmpwi r3, 0x0
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_fn_806DC260_0000137C
    li r3, 0xc
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00001158
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00001158:
    stw r29, 0x0(r3)
    mr r5, r3
    lwz r8, 0x28(r1)
    addi r4, r1, 0x40
    lwz r0, 0x0(r24)
    li r6, 0x0
    stw r0, 0x8(r3)
    li r7, 0x5
    lwz r0, 0x2c(r1)
    stw r31, 0x4(r3)
    mr r3, r26
    stw r8, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806DC260_0000137C
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_0000119C:
    mr r3, r27
    addi r4, r30, 0x54
    addi r5, r1, 0x188
    li r6, 0x1000
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_000011E0
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_000011E0:
    addi r3, r1, 0x188
    addi r4, r30, 0x84
    bl fn_806827C4
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_0000121C
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_0000121C:
    lbz r0, 0x3(r3)
    extsb. r0, r0
    bne lbl_fn_806DC260_00001250
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00001250:
    addi r3, r3, 0x3
    bl fn_80684600
    mr r27, r3
    addi r3, r1, 0x188
    addi r4, r30, 0x90
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_806DC260_00001288
    addi r3, r1, 0x88
    addi r4, r4, 0x3
    li r5, 0x100
    bl fn_806E8B10
    b lbl_fn_806DC260_00001290
lbl_fn_806DC260_00001288:
    li r0, 0x0
    stb r0, 0x88(r1)
lbl_fn_806DC260_00001290:
    lwz r3, 0x1d0(r28)
    lwz r0, 0x1d4(r28)
    cmpwi r3, 0x0
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_fn_806DC260_0000137C
    li r3, 0x108
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_806DC260_000012D0
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_000012D0:
    stw r29, 0x0(r3)
    addi r4, r1, 0x88
    li r5, 0x100
    stw r27, 0x4(r3)
    addi r3, r3, 0x8
    bl fn_806D9590
    lwz r4, 0x30(r1)
    mr r3, r26
    lwz r0, 0x34(r1)
    mr r5, r24
    stw r4, 0x38(r1)
    addi r4, r1, 0x38
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x3c(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806DC260_0000137C
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_0000131C:
    mr r3, r27
    addi r4, r30, 0x54
    addi r5, r1, 0x188
    li r6, 0x1000
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DC260_00001360
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DC260_00001380
lbl_fn_806DC260_00001360:
    mr r3, r26
    mr r4, r29
    addi r6, r30, 0x94
    li r5, 0x67
    li r7, 0x0
    li r8, 0x0
    bl fn_806DD7C0
lbl_fn_806DC260_0000137C:
    li r3, 0x0
lbl_fn_806DC260_00001380:
    addi r11, r1, 0x11b0
    bl _restgpr_24
    lwz r0, 0x11b4(r1)
    mtlr r0
    addi r1, r1, 0x11b0
    blr
}

asm void fn_806DCD80(void)
{
    nofralloc
    stwu r1, -0x440(r1)
    mflr r0
    stw r0, 0x444(r1)
    addi r11, r1, 0x440
    bl _savegpr_24
    lis r30, lbl_807C2DD0@ha
    lwz r28, 0x0(r3)
    mr r26, r3
    mr r27, r4
    addi r30, r30, lbl_807C2DD0@l
    li r3, 0x0
    bl fn_806D8B20
    mr r31, r3
    mr r3, r27
    addi r4, r30, 0x98
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_0000141C
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_0000141C:
    addi r3, r1, 0x18
    bl fn_80684600
    mr r29, r3
    mr r3, r26
    mr r4, r29
    bl fn_806E5700
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_806DCD80_00001454
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_00001454:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DCD80_00001A4C
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DCD80_00001A4C
    lwz r24, 0xc(r3)
    cmpwi r24, 0x0
    bne lbl_fn_806DCD80_0000152C
    li r3, 0x3c
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0xc(r25)
    bne lbl_fn_806DCD80_000014A0
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_000014A0:
    li r4, 0x0
    li r5, 0x3c
    bl memset
    lwz r4, 0x8(r25)
    cmpwi r4, 0x0
    beq lbl_fn_806DCD80_000014D8
    lwz r3, 0xc(r25)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r3, 0x8(r25)
    bl fn_806E5C20
    li r0, 0x0
    stw r0, 0x8(r25)
    b lbl_fn_806DCD80_000014EC
lbl_fn_806DCD80_000014D8:
    lwz r3, 0xc(r25)
    lwz r4, 0x5d0(r28)
    stw r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x5d0(r28)
lbl_fn_806DCD80_000014EC:
    lis r5, fn_806E2EF0@ha
    li r3, 0x8
    addi r5, r5, fn_806E2EF0@l
    li r4, 0x1
    bl fn_806D57A0
    lwz r4, 0xc(r25)
    stw r3, 0x38(r4)
    lwz r24, 0xc(r25)
    lwz r0, 0x38(r24)
    cmpwi r0, 0x0
    bne lbl_fn_806DCD80_0000152C
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_0000152C:
    mr r3, r27
    addi r4, r30, 0xa8
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_00001570
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_00001570:
    addi r3, r1, 0x18
    bl fn_80684600
    stw r3, 0x4(r24)
    mr r3, r27
    addi r4, r30, 0xb0
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_000015C0
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_000015C0:
    addi r3, r1, 0x18
    bl fn_80684600
    bl fn_806A426C
    stw r3, 0x1c(r24)
    mr r3, r27
    addi r4, r30, 0xb8
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_00001614
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_00001614:
    addi r3, r1, 0x18
    bl fn_80684600
    sth r3, 0x20(r24)
    mr r3, r27
    addi r4, r30, 0xc0
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_00001664
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_00001664:
    addi r3, r1, 0x18
    bl fn_80684600
    bl fn_806A426C
    stw r3, 0x24(r24)
    mr r3, r27
    addi r4, r30, 0xcc
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_000016B8
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_000016B8:
    addi r3, r1, 0x18
    bl fn_80684600
    bl fn_806A426C
    stw r3, 0x28(r24)
    mr r3, r27
    addi r4, r30, 0xd8
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_0000170C
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_0000170C:
    addi r3, r1, 0x18
    bl fn_80684600
    sth r3, 0x2c(r24)
    mr r3, r27
    addi r4, r30, 0xe0
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_0000175C
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_0000175C:
    addi r3, r1, 0x18
    bl fn_80684600
    sth r3, 0x2e(r24)
    mr r3, r27
    addi r4, r30, 0xe8
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_000017AC
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_000017AC:
    addi r3, r1, 0x18
    bl fn_80684600
    stw r3, 0x18(r24)
    lwz r3, 0x8(r24)
    bl fn_806D7AC0
    li r25, 0x0
    stw r25, 0x8(r24)
    mr r3, r27
    addi r4, r30, 0xf4
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_0000180C
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_0000180C:
    addi r3, r1, 0x18
    bl fn_806D8E30
    stw r3, 0x8(r24)
    lwz r3, 0xc(r24)
    bl fn_806D7AC0
    stw r25, 0xc(r24)
    mr r3, r27
    addi r4, r30, 0x100
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_00001868
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_00001868:
    addi r3, r1, 0x18
    bl fn_806D8E30
    stw r3, 0xc(r24)
    lwz r3, 0x10(r24)
    bl fn_806D7AC0
    stw r25, 0x10(r24)
    mr r3, r27
    addi r4, r30, 0x10c
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_000018C4
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_000018C4:
    addi r3, r1, 0x18
    bl fn_806D8E30
    stw r3, 0x10(r24)
    lwz r3, 0x14(r24)
    bl fn_806D7AC0
    stw r25, 0x14(r24)
    mr r3, r27
    addi r4, r30, 0x118
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_00001920
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_00001920:
    addi r3, r1, 0x18
    bl fn_806D8E30
    stw r3, 0x14(r24)
    mr r3, r27
    addi r4, r30, 0x124
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_00001970
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_00001970:
    addi r3, r1, 0x18
    bl fn_80684600
    stw r3, 0x34(r24)
    mr r3, r27
    addi r4, r30, 0x130
    addi r5, r1, 0x18
    li r6, 0x400
    bl fn_806E8E10
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_000019C0
    mr r3, r26
    addi r5, r30, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_000019C0:
    addi r3, r1, 0x18
    bl fn_80684600
    stw r3, 0x30(r24)
    lwz r3, 0x1b8(r28)
    lwz r0, 0x1bc(r28)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_806DCD80_00001A4C
    li r3, 0xc
    bl fn_806D7A90
    cmpwi r3, 0x0
    bne lbl_fn_806DCD80_00001A08
    mr r3, r26
    addi r4, r30, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_00001A08:
    stw r31, 0x4(r3)
    mr r5, r3
    lwz r8, 0x10(r1)
    addi r4, r1, 0x8
    lwz r0, 0x0(r24)
    li r6, 0x0
    stw r0, 0x8(r3)
    li r7, 0x0
    lwz r0, 0x14(r1)
    stw r29, 0x0(r3)
    mr r3, r26
    stw r8, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_806DEE40
    cmpwi r3, 0x0
    beq lbl_fn_806DCD80_00001A4C
    b lbl_fn_806DCD80_00001A50
lbl_fn_806DCD80_00001A4C:
    li r3, 0x0
lbl_fn_806DCD80_00001A50:
    addi r11, r1, 0x440
    bl _restgpr_24
    lwz r0, 0x444(r1)
    mtlr r0
    addi r1, r1, 0x440
    blr
}

asm void fn_806DD450(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x240
    bl _savegpr_21
    li r29, 0x0
    stw r29, 0xc(r1)
    lis r28, lbl_807C2DD0@ha
    mr r24, r3
    lwz r26, 0x0(r3)
    mr r25, r4
    addi r28, r28, lbl_807C2DD0@l
    li r5, 0x1
    bl fn_806E8B60
    cmpwi r3, 0x0
    beq lbl_fn_806DD450_00001ABC
    li r3, 0x4
    b lbl_fn_806DD450_00001CD4
lbl_fn_806DD450_00001ABC:
    mr r3, r25
    addi r4, r28, 0x140
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    li r7, 0x200
    bl fn_806E8D30
    cmpwi r3, 0x0
    bne lbl_fn_806DD450_00001B04
    mr r3, r24
    addi r5, r28, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r24
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DD450_00001CD4
lbl_fn_806DD450_00001B04:
    addi r3, r1, 0x10
    bl fn_80684600
    mr r30, r3
    mr r3, r25
    addi r4, r28, 0x148
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806DD450_00001B50
    mr r3, r24
    addi r5, r28, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r24
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DD450_00001CD4
lbl_fn_806DD450_00001B50:
    lwz r3, 0xc(r1)
    addi r22, r1, 0x10
    li r27, 0x0
    addi r0, r3, 0x6
    stw r0, 0xc(r1)
    b lbl_fn_806DD450_00001CC8
lbl_fn_806DD450_00001B68:
    cmpwi r27, 0x0
    bne lbl_fn_806DD450_00001BBC
    addi r4, r1, 0x10
    li r5, 0x0
    b lbl_fn_806DD450_00001B88
lbl_fn_806DD450_00001B7C:
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
lbl_fn_806DD450_00001B88:
    cmplwi r5, 0x200
    bge lbl_fn_806DD450_00001BA8
    add r3, r31, r5
    lbz r0, 0x6(r3)
    extsb. r0, r0
    beq lbl_fn_806DD450_00001BA8
    cmpwi r0, 0x2c
    bne lbl_fn_806DD450_00001B7C
lbl_fn_806DD450_00001BA8:
    lwz r0, 0xc(r1)
    stbx r29, r22, r5
    add r0, r0, r5
    stw r0, 0xc(r1)
    b lbl_fn_806DD450_00001C04
lbl_fn_806DD450_00001BBC:
    mr r3, r25
    addi r4, r28, 0x150
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    li r7, 0x200
    bl fn_806E8D30
    cmpwi r3, 0x0
    bne lbl_fn_806DD450_00001C04
    mr r3, r24
    addi r5, r28, 0x8
    li r4, 0x1
    bl fn_806E91A0
    mr r3, r24
    li r4, 0x3
    li r5, 0x1
    bl fn_806DED80
    li r3, 0x3
    b lbl_fn_806DD450_00001CD4
lbl_fn_806DD450_00001C04:
    addi r3, r1, 0x10
    bl fn_80684600
    mr r21, r3
    mr r3, r24
    mr r4, r21
    bl fn_806E5700
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_806DD450_00001C3C
    mr r3, r24
    addi r4, r28, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DD450_00001CD4
lbl_fn_806DD450_00001C3C:
    li r3, 0x1c
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x8(r23)
    bne lbl_fn_806DD450_00001C64
    mr r3, r24
    addi r4, r28, 0x44
    bl fn_806E91F0
    li r3, 0x1
    b lbl_fn_806DD450_00001CD4
lbl_fn_806DD450_00001C64:
    li r4, 0x0
    li r5, 0x1c
    bl memset
    lwz r3, 0x8(r23)
    cmpwi r21, 0x0
    lwz r4, 0x5d0(r26)
    stw r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x5d0(r26)
    lwz r3, 0x8(r23)
    stw r29, 0x4(r3)
    bgt lbl_fn_806DD450_00001CA4
    mr r3, r24
    addi r4, r28, 0x154
    bl fn_806E91F0
    b lbl_fn_806DD450_00001CC4
lbl_fn_806DD450_00001CA4:
    mr r3, r24
    mr r4, r21
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806DD450_00001CC4
    lwz r3, 0x8(r1)
    stw r29, 0x2c(r3)
lbl_fn_806DD450_00001CC4:
    addi r27, r27, 0x1
lbl_fn_806DD450_00001CC8:
    cmpw r27, r30
    blt lbl_fn_806DD450_00001B68
    li r3, 0x0
lbl_fn_806DD450_00001CD4:
    addi r11, r1, 0x240
    bl _restgpr_21
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_806DD6D0(void)
{
    nofralloc
    stwu r1, -0xdd0(r1)
    mflr r0
    stw r0, 0xdd4(r1)
    addi r11, r1, 0xdd0
    bl _savegpr_27
    lis r31, lbl_807C2DD0@ha
    lwz r30, 0x0(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r4, r6
    addi r31, r31, lbl_807C2DD0@l
    addi r3, r1, 0x8
    li r5, 0xdad
    bl fn_806E8B10
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x0
    bl fn_806DE480
    mr r3, r27
    mr r5, r29
    addi r4, r30, 0x210
    bl fn_806DE4E0
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
    addi r5, r31, 0x174
    bl fn_806DE480
    mr r3, r27
    mr r5, r28
    addi r4, r30, 0x210
    bl fn_806DE4E0
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x54
    bl fn_806DE480
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r1, 0x8
    bl fn_806DE480
    mr r3, r27
    addi r4, r30, 0x210
    addi r5, r31, 0x178
    bl fn_806DE480
    addi r11, r1, 0xdd0
    li r3, 0x0
    bl _restgpr_27
    lwz r0, 0xdd4(r1)
    mtlr r0
    addi r1, r1, 0xdd0
    blr
}

asm void fn_806DD7C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    bl fn_806E49C0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806DD7C0_00001EE0
    mr r3, r25
    mr r4, r26
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806DD7C0_00001E54
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806DD7C0_00001E54
    lhz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DD7C0_00001E7C
lbl_fn_806DD7C0_00001E54:
    cmpwi r29, 0xb00
    bne lbl_fn_806DD7C0_00001E64
    li r3, 0x3
    b lbl_fn_806DD7C0_00001F84
lbl_fn_806DD7C0_00001E64:
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    bl fn_806DD6D0
    b lbl_fn_806DD7C0_00001F84
lbl_fn_806DD7C0_00001E7C:
    mr r3, r25
    mr r4, r26
    li r5, 0x1
    bl fn_806E4A30
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806DD7C0_00001EA0
    li r3, 0x1
    b lbl_fn_806DD7C0_00001F84
lbl_fn_806DD7C0_00001EA0:
    lwz r3, 0x8(r1)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806DD7C0_00001EC8
    mr r3, r25
    mr r4, r31
    bl fn_806E4B00
    cmpwi r3, 0x0
    beq lbl_fn_806DD7C0_00001F4C
    b lbl_fn_806DD7C0_00001F84
lbl_fn_806DD7C0_00001EC8:
    mr r3, r25
    mr r4, r31
    bl fn_806E4B90
    cmpwi r3, 0x0
    beq lbl_fn_806DD7C0_00001F4C
    b lbl_fn_806DD7C0_00001F84
lbl_fn_806DD7C0_00001EE0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x6a
    bne lbl_fn_806DD7C0_00001F4C
    mr r3, r25
    mr r4, r26
    addi r5, r1, 0x8
    bl fn_806E57E0
    cmpwi r3, 0x0
    beq lbl_fn_806DD7C0_00001F4C
    lwz r3, 0x8(r1)
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806DD7C0_00001F1C
    li r0, 0x0
    sth r0, 0x20(r3)
lbl_fn_806DD7C0_00001F1C:
    cmpwi r29, 0xb00
    bne lbl_fn_806DD7C0_00001F2C
    li r3, 0x3
    b lbl_fn_806DD7C0_00001F84
lbl_fn_806DD7C0_00001F2C:
    cmpwi r27, 0x64
    bge lbl_fn_806DD7C0_00001F4C
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    bl fn_806DD6D0
    b lbl_fn_806DD7C0_00001F84
lbl_fn_806DD7C0_00001F4C:
    cmpwi r30, 0x0
    beq lbl_fn_806DD7C0_00001F60
    mr r3, r31
    mr r4, r30
    bl fn_806E52B0
lbl_fn_806DD7C0_00001F60:
    mr r3, r25
    mr r4, r31
    mr r5, r27
    mr r6, r28
    bl fn_806E4CA0
    cmpwi r3, 0x0
    beq lbl_fn_806DD7C0_00001F80
    b lbl_fn_806DD7C0_00001F84
lbl_fn_806DD7C0_00001F80:
    li r3, 0x0
lbl_fn_806DD7C0_00001F84:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806DD980(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_806E3210
    cmpwi r3, 0x0
    beq lbl_fn_806DD980_00001FD4
    b lbl_fn_806DD980_00002038
lbl_fn_806DD980_00001FD4:
    lwz r6, 0x8(r1)
    cmpwi r6, 0x0
    bne lbl_fn_806DD980_00001FEC
    lis r6, lbl_807C2F50@ha
    addi r6, r6, lbl_807C2F50@l
    stw r6, 0x8(r1)
lbl_fn_806DD980_00001FEC:
    lwz r4, 0x10(r31)
    mr r3, r30
    li r5, 0x69
    li r7, 0xb00
    li r8, 0x0
    bl fn_806DD7C0
    cmpwi r3, 0x0
    beq lbl_fn_806DD980_00002010
    b lbl_fn_806DD980_00002038
lbl_fn_806DD980_00002010:
    lwz r31, 0x8(r1)
    lis r4, lbl_807C2F50@ha
    addi r4, r4, lbl_807C2F50@l
    mr r3, r31
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_806DD980_00002034
    mr r3, r31
    bl fn_806D7AC0
lbl_fn_806DD980_00002034:
    li r3, 0x0
lbl_fn_806DD980_00002038:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
