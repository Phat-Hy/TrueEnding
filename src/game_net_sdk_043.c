#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_806823B0(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_806D57A0(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D5C90(void);
extern void fn_806D7A90(void);
extern void fn_806D7AA0(void);
extern void fn_806D7AC0(void);
extern void fn_806D7B30(void);
extern void fn_806D7B70(void);
extern void fn_806D7CB0(void);
extern void fn_806D7D60(void);
extern void fn_806D7F20(void);
extern void fn_806D8650(void);
extern void memmove(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B6F8[];
extern u8 lbl_8076B7F8[];
extern u8 lbl_8076B838[];
extern u8 lbl_807C5B30[];
extern u8 lbl_80862150[];

/* Small data declarations */

/* Function declarations */
void fn_806F8A60(void);
void fn_806F8A80(void);
void fn_806F8B00(void);
void fn_806F9050(void);
void fn_806F9160(void);
void fn_806F96F0(void);
void fn_806F9D60(void);

asm void fn_806F8A60(void)
{
    nofralloc
    lis r3, lbl_807C5B30@ha
    lwz r4, lbl_807C5B30@l(r3)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_806F8A80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r29, r7
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r30, r8
    mr r31, r9
    mr r3, r29
    bl strlen
    mr r8, r3
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r9, r30
    mr r10, r31
    addi r8, r8, 0x1
    bl fn_806F9160
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F8B00(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_23
    lis r29, lbl_807C5B30@ha
    lis r28, lbl_80862150@ha
    addi r29, r29, lbl_807C5B30@l
    lwz r0, 0x0(r29)
    addi r28, r28, lbl_80862150@l
    cmpwi r0, -0x1
    bne lbl_fn_806F8B00_000000D8
    li r3, 0x0
    b lbl_fn_806F8B00_000005D4
lbl_fn_806F8B00_000000D8:
    lwz r0, 0x21c(r28)
    cmpwi r0, 0x5
    beq lbl_fn_806F8B00_000000EC
    li r3, 0x0
    b lbl_fn_806F8B00_000005D4
lbl_fn_806F8B00_000000EC:
    addi r31, r29, 0x8
    li r30, 0x0
    b lbl_fn_806F8B00_000005B0
lbl_fn_806F8B00_000000F8:
    lwz r4, 0x214(r28)
    lwz r0, 0x218(r28)
    subf r0, r0, r4
    cmpwi r0, 0x80
    bge lbl_fn_806F8B00_00000140
    cmpwi r4, 0x100
    li r3, 0x100
    blt lbl_fn_806F8B00_0000011C
    slwi r3, r4, 1
lbl_fn_806F8B00_0000011C:
    stw r3, 0x214(r28)
    addi r4, r3, 0x1
    lwz r3, 0x210(r28)
    bl fn_806D7AA0
    cmpwi r3, 0x0
    stw r3, 0x210(r28)
    bne lbl_fn_806F8B00_00000140
    li r3, 0x0
    b lbl_fn_806F8B00_000005D4
lbl_fn_806F8B00_00000140:
    lwz r5, 0x218(r28)
    li r6, 0x0
    lwz r4, 0x210(r28)
    lwz r0, 0x214(r28)
    add r4, r4, r5
    lwz r3, 0x0(r29)
    subf r5, r5, r0
    bl fn_806D7CB0
    cmpwi r3, 0x0
    bgt lbl_fn_806F8B00_000003F4
    lwz r3, 0x0(r29)
    cmpwi r3, -0x1
    beq lbl_fn_806F8B00_00000184
    li r4, 0x2
    bl fn_806D7B70
    lwz r3, 0x0(r29)
    bl fn_806D7B30
lbl_fn_806F8B00_00000184:
    lwz r3, 0x228(r28)
    li r0, -0x1
    stw r0, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_806F8B00_000003CC
    bl fn_806D58F0
    lis r4, lbl_8076B838@ha
    lwzu r24, lbl_8076B838@l(r4)
    stw r24, 0x10(r1)
    addi r26, r29, 0x18
    lwz r31, 0x4(r4)
    subi r23, r3, 0x1
    lwz r30, 0x8(r4)
    li r25, 0x3
    lwz r27, 0xc(r4)
    stw r31, 0x14(r1)
    stw r30, 0x18(r1)
    stw r27, 0x1c(r1)
    b lbl_fn_806F8B00_000003B4
lbl_fn_806F8B00_000001D0:
    mr r4, r26
    stw r24, 0x20(r1)
    addi r6, r1, 0x20
    li r5, 0x0
    stw r31, 0x24(r1)
    stw r30, 0x28(r1)
    stw r27, 0x2c(r1)
    stw r26, 0x34(r29)
    mtctr r25
lbl_fn_806F8B00_000001F4:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x0(r6)
    xor r0, r0, r3
    stb r0, 0x0(r6)
    bne lbl_fn_806F8B00_00000218
    mr r4, r26
lbl_fn_806F8B00_00000218:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x1(r6)
    xor r0, r0, r3
    stb r0, 0x1(r6)
    bne lbl_fn_806F8B00_0000023C
    mr r4, r26
lbl_fn_806F8B00_0000023C:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x2(r6)
    xor r0, r0, r3
    stb r0, 0x2(r6)
    bne lbl_fn_806F8B00_00000260
    mr r4, r26
lbl_fn_806F8B00_00000260:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x3(r6)
    xor r0, r0, r3
    stb r0, 0x3(r6)
    bne lbl_fn_806F8B00_00000284
    mr r4, r26
lbl_fn_806F8B00_00000284:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x4(r6)
    xor r0, r0, r3
    stb r0, 0x4(r6)
    bne lbl_fn_806F8B00_000002A8
    mr r4, r26
lbl_fn_806F8B00_000002A8:
    addi r6, r6, 0x5
    addi r5, r5, 0x4
    bdnz lbl_fn_806F8B00_000001F4
    cmpwi r23, 0x0
    blt lbl_fn_806F8B00_000003B0
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r23, r3
    bge lbl_fn_806F8B00_000003B0
    lwz r3, 0x228(r28)
    mr r4, r23
    bl fn_806D5900
    lwz r12, 0x18(r3)
    mr r11, r3
    cmpwi r12, 0x0
    beq lbl_fn_806F8B00_000003A4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F8B00_00000310
    cmpwi r0, 0x1
    beq lbl_fn_806F8B00_00000330
    cmpwi r0, 0x2
    beq lbl_fn_806F8B00_00000364
    cmpwi r0, 0x3
    beq lbl_fn_806F8B00_0000038C
    b lbl_fn_806F8B00_000003A4
lbl_fn_806F8B00_00000310:
    addi r6, r1, 0x20
    lwz r3, 0x4(r3)
    li r5, 0x0
    lwz r4, 0x8(r11)
    lwz r7, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F8B00_000003A4
lbl_fn_806F8B00_00000330:
    lwz r0, 0x14(r3)
    addi r9, r1, 0x20
    stw r0, 0x8(r1)
    li r7, 0x0
    li r8, 0x0
    li r10, 0x0
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F8B00_000003A4
lbl_fn_806F8B00_00000364:
    lwz r3, 0x4(r3)
    li r7, 0x0
    lwz r4, 0x8(r11)
    li r8, 0x0
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    lwz r9, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F8B00_000003A4
lbl_fn_806F8B00_0000038C:
    lwz r3, 0x4(r3)
    li r5, 0x0
    lwz r4, 0x8(r11)
    lwz r6, 0x14(r11)
    mtctr r12
    bctrl
lbl_fn_806F8B00_000003A4:
    lwz r3, 0x228(r28)
    mr r4, r23
    bl fn_806D5C90
lbl_fn_806F8B00_000003B0:
    subi r23, r23, 0x1
lbl_fn_806F8B00_000003B4:
    cmpwi r23, 0x0
    bge lbl_fn_806F8B00_000001D0
    lwz r3, 0x228(r28)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x228(r28)
lbl_fn_806F8B00_000003CC:
    lwz r3, 0x210(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806F8B00_000003EC
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x210(r28)
    stw r0, 0x214(r28)
    stw r0, 0x218(r28)
lbl_fn_806F8B00_000003EC:
    li r3, 0x0
    b lbl_fn_806F8B00_000005D4
lbl_fn_806F8B00_000003F4:
    lwz r0, 0x218(r28)
    lwz r4, 0x210(r28)
    add r0, r0, r3
    stw r0, 0x218(r28)
    stbx r30, r4, r0
    lwz r25, 0x218(r28)
    lwz r3, 0x210(r28)
    mr r27, r25
    subi r0, r25, 0x6
    mr r26, r3
    b lbl_fn_806F8B00_0000047C
lbl_fn_806F8B00_00000420:
    lbz r4, 0x0(r26)
    cmpwi r4, 0x5c
    bne lbl_fn_806F8B00_00000478
    lbz r4, 0x1(r26)
    cmpwi r4, 0x66
    bne lbl_fn_806F8B00_00000478
    lbz r4, 0x2(r26)
    cmpwi r4, 0x69
    bne lbl_fn_806F8B00_00000478
    lbz r4, 0x3(r26)
    cmpwi r4, 0x6e
    bne lbl_fn_806F8B00_00000478
    lbz r4, 0x4(r26)
    cmpwi r4, 0x61
    bne lbl_fn_806F8B00_00000478
    lbz r4, 0x5(r26)
    cmpwi r4, 0x6c
    bne lbl_fn_806F8B00_00000478
    lbz r4, 0x6(r26)
    cmpwi r4, 0x5c
    bne lbl_fn_806F8B00_00000478
    b lbl_fn_806F8B00_0000056C
lbl_fn_806F8B00_00000478:
    addi r26, r26, 0x1
lbl_fn_806F8B00_0000047C:
    subf r4, r3, r26
    cmpw r4, r0
    blt lbl_fn_806F8B00_00000420
    li r26, 0x0
    b lbl_fn_806F8B00_0000056C
lbl_fn_806F8B00_00000490:
    subf. r23, r3, r26
    mr r7, r31
    mr r4, r3
    stw r31, 0x34(r29)
    li r6, 0x0
    mtctr r23
    ble lbl_fn_806F8B00_000004DC
    nop
lbl_fn_806F8B00_000004B0:
    lbz r5, 0x0(r4)
    lbz r0, 0x0(r7)
    xor r0, r5, r0
    stb r0, 0x0(r4)
    lbzu r0, 0x1(r7)
    extsb. r0, r0
    bne lbl_fn_806F8B00_000004D0
    lwz r7, 0x34(r29)
lbl_fn_806F8B00_000004D0:
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_806F8B00_000004B0
lbl_fn_806F8B00_000004DC:
    mr r4, r23
    bl fn_806F9D60
    addi r0, r23, 0x7
    addi r3, r26, 0x7
    subf. r27, r0, r27
    ble lbl_fn_806F8B00_0000056C
    mr r26, r3
    subi r0, r27, 0x6
    b lbl_fn_806F8B00_0000055C
lbl_fn_806F8B00_00000500:
    lbz r4, 0x0(r26)
    cmpwi r4, 0x5c
    bne lbl_fn_806F8B00_00000558
    lbz r4, 0x1(r26)
    cmpwi r4, 0x66
    bne lbl_fn_806F8B00_00000558
    lbz r4, 0x2(r26)
    cmpwi r4, 0x69
    bne lbl_fn_806F8B00_00000558
    lbz r4, 0x3(r26)
    cmpwi r4, 0x6e
    bne lbl_fn_806F8B00_00000558
    lbz r4, 0x4(r26)
    cmpwi r4, 0x61
    bne lbl_fn_806F8B00_00000558
    lbz r4, 0x5(r26)
    cmpwi r4, 0x6c
    bne lbl_fn_806F8B00_00000558
    lbz r4, 0x6(r26)
    cmpwi r4, 0x5c
    bne lbl_fn_806F8B00_00000558
    b lbl_fn_806F8B00_0000056C
lbl_fn_806F8B00_00000558:
    addi r26, r26, 0x1
lbl_fn_806F8B00_0000055C:
    subf r4, r3, r26
    cmpw r4, r0
    blt lbl_fn_806F8B00_00000500
    li r26, 0x0
lbl_fn_806F8B00_0000056C:
    cmpwi r27, 0x0
    ble lbl_fn_806F8B00_0000057C
    cmpwi r26, 0x0
    bne lbl_fn_806F8B00_00000490
lbl_fn_806F8B00_0000057C:
    lwz r0, 0x218(r28)
    subf r23, r27, r25
    cmpw r23, r0
    bne lbl_fn_806F8B00_00000594
    stw r30, 0x218(r28)
    b lbl_fn_806F8B00_000005B0
lbl_fn_806F8B00_00000594:
    lwz r3, 0x210(r28)
    subf r5, r23, r0
    add r4, r3, r23
    bl memmove
    lwz r0, 0x218(r28)
    subf r0, r23, r0
    stw r0, 0x218(r28)
lbl_fn_806F8B00_000005B0:
    lwz r3, 0x0(r29)
    bl fn_806D8650
    cmpwi r3, 0x0
    bne lbl_fn_806F8B00_000000F8
    lwz r4, 0x0(r29)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
lbl_fn_806F8B00_000005D4:
    addi r11, r1, 0x60
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806F9050(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    lis r30, lbl_807C5B30@ha
    addi r30, r30, lbl_807C5B30@l
    stw r29, 0x14(r1)
    addi r7, r30, 0x8
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    stw r7, 0x34(r30)
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806F9050_00000660
lbl_fn_806F9050_00000638:
    lbz r6, 0x0(r5)
    lbz r0, 0x0(r7)
    xor r0, r6, r0
    stb r0, 0x0(r5)
    lbzu r0, 0x1(r7)
    extsb. r0, r0
    bne lbl_fn_806F9050_00000658
    lwz r7, 0x34(r30)
lbl_fn_806F9050_00000658:
    addi r5, r5, 0x1
    bdnz lbl_fn_806F9050_00000638
lbl_fn_806F9050_00000660:
    add r3, r3, r4
    addi r4, r30, 0x28
    bl strcpy
    addi r31, r31, 0x7
    b lbl_fn_806F9050_000006C8
lbl_fn_806F9050_00000674:
    lwz r3, 0x0(r30)
    add r4, r28, r29
    subf r5, r29, r31
    li r6, 0x0
    bl fn_806D7D60
    cmpwi r3, -0x1
    bne lbl_fn_806F9050_000006B4
    lwz r3, 0x0(r30)
    bl fn_806D7F20
    cmpwi r3, -0x6
    beq lbl_fn_806F9050_000006C8
    cmpwi r3, -0x4c
    beq lbl_fn_806F9050_000006C8
    cmpwi r3, -0x1a
    beq lbl_fn_806F9050_000006C8
    b lbl_fn_806F9050_000006D4
lbl_fn_806F9050_000006B4:
    cmpwi r3, 0x0
    bne lbl_fn_806F9050_000006C4
    li r3, -0x1
    b lbl_fn_806F9050_000006D4
lbl_fn_806F9050_000006C4:
    add r29, r29, r3
lbl_fn_806F9050_000006C8:
    cmpw r29, r31
    blt lbl_fn_806F9050_00000674
    mr r3, r29
lbl_fn_806F9050_000006D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806F9160(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2f0
    bl _savegpr_14
    lis r11, lbl_8076B7F8@ha
    lwzu r0, lbl_8076B7F8@l(r11)
    stw r0, 0x290(r1)
    mr r22, r3
    lwz r0, 0x4(r11)
    mr r23, r4
    stw r0, 0x294(r1)
    mr r25, r6
    lwz r0, 0x8(r11)
    mr r26, r7
    stw r0, 0x298(r1)
    mr r29, r10
    lwz r0, 0xc(r11)
    lis r31, lbl_807C5B30@ha
    stw r0, 0x29c(r1)
    addi r31, r31, lbl_807C5B30@l
    lwz r0, 0x10(r11)
    addi r12, r31, 0x18
    stw r0, 0x2a0(r1)
    lis r30, lbl_80862150@ha
    lwz r0, 0x18(r11)
    mr r27, r8
    lwz r14, 0x14(r11)
    mr r24, r5
    stw r0, 0x2a4(r1)
    mr r28, r9
    lwz r18, 0x1c(r11)
    mr r15, r12
    lwz r19, 0x20(r11)
    addi r30, r30, lbl_80862150@l
    lwz r20, 0x24(r11)
    addi r16, r1, 0x4c
    lwz r21, 0x28(r11)
    li r17, 0x0
    lwz r10, 0x2c(r11)
    lwz r7, 0x30(r11)
    lwz r6, 0x34(r11)
    lwz r4, 0x38(r11)
    lhz r3, 0x3c(r11)
    lbz r0, 0x3e(r11)
    lwz r11, 0x294(r1)
    stw r11, 0x50(r1)
    lwz r11, 0x298(r1)
    stw r11, 0x54(r1)
    lwz r11, 0x29c(r1)
    stw r11, 0x58(r1)
    lwz r11, 0x2a0(r1)
    lwz r8, 0x290(r1)
    stw r11, 0x5c(r1)
    lwz r11, 0x2a4(r1)
    stb r0, 0x8a(r1)
    li r0, 0x1f
    stw r8, 0x4c(r1)
    lwz r8, 0x2f8(r1)
    stw r14, 0x60(r1)
    stw r11, 0x64(r1)
    stw r18, 0x68(r1)
    stw r19, 0x6c(r1)
    stw r20, 0x70(r1)
    stw r21, 0x74(r1)
    stw r10, 0x78(r1)
    stw r7, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r4, 0x84(r1)
    sth r3, 0x88(r1)
    stw r12, 0x34(r31)
    mtctr r0
lbl_fn_806F9160_00000820:
    lbz r0, 0x1(r12)
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    extsb. r0, r0
    lbz r0, 0x0(r16)
    xor r0, r0, r3
    stb r0, 0x0(r16)
    bne lbl_fn_806F9160_00000844
    mr r12, r15
lbl_fn_806F9160_00000844:
    lbz r0, 0x1(r12)
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    extsb. r0, r0
    lbz r0, 0x1(r16)
    xor r0, r0, r3
    stb r0, 0x1(r16)
    bne lbl_fn_806F9160_00000868
    mr r12, r15
lbl_fn_806F9160_00000868:
    addi r16, r16, 0x2
    addi r17, r17, 0x1
    bdnz lbl_fn_806F9160_00000820
    cmpwi r5, 0x0
    beq lbl_fn_806F9160_00000884
    cmpwi r5, 0x2
    bne lbl_fn_806F9160_000008B8
lbl_fn_806F9160_00000884:
    cmpwi r9, 0x0
    beq lbl_fn_806F9160_00000C6C
    mr r12, r28
    mr r3, r22
    mr r4, r23
    mr r5, r24
    mr r6, r25
    mr r9, r29
    li r7, 0x0
    li r8, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806F9160_00000C6C
lbl_fn_806F9160_000008B8:
    mr r5, r23
    mr r6, r24
    mr r7, r25
    mr r9, r22
    mr r10, r27
    addi r3, r1, 0x90
    addi r4, r1, 0x4c
    crclr 6
    bl sprintf
    add r14, r3, r27
    mr r15, r3
    cmpwi r14, 0x1e0
    bge lbl_fn_806F9160_00000908
    addi r3, r1, 0x90
    mr r4, r26
    mr r5, r27
    add r3, r3, r15
    bl memcpy
    addi r20, r1, 0x90
    b lbl_fn_806F9160_00000930
lbl_fn_806F9160_00000908:
    addi r3, r14, 0x100
    bl fn_806D7A90
    mr r20, r3
    mr r5, r15
    addi r4, r1, 0x90
    bl memcpy
    mr r4, r26
    mr r5, r27
    add r3, r20, r15
    bl memcpy
lbl_fn_806F9160_00000930:
    lwz r0, 0x0(r31)
    cmpwi r0, -0x1
    beq lbl_fn_806F9160_0000094C
    mr r3, r20
    mr r4, r14
    bl fn_806F9050
    mr r15, r3
lbl_fn_806F9160_0000094C:
    cmpwi r15, 0x0
    bgt lbl_fn_806F9160_00000C0C
    lwz r3, 0x0(r31)
    cmpwi r3, -0x1
    beq lbl_fn_806F9160_00000970
    li r4, 0x2
    bl fn_806D7B70
    lwz r3, 0x0(r31)
    bl fn_806D7B30
lbl_fn_806F9160_00000970:
    lwz r3, 0x228(r30)
    li r0, -0x1
    stw r0, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806F9160_00000BB8
    bl fn_806D58F0
    lis r4, lbl_8076B838@ha
    lwzu r17, lbl_8076B838@l(r4)
    stw r17, 0x10(r1)
    addi r19, r31, 0x18
    lwz r16, 0x4(r4)
    subi r18, r3, 0x1
    lwz r15, 0x8(r4)
    li r21, 0x3
    lwz r14, 0xc(r4)
    stw r16, 0x14(r1)
    stw r15, 0x18(r1)
    stw r14, 0x1c(r1)
    b lbl_fn_806F9160_00000BA0
lbl_fn_806F9160_000009BC:
    mr r4, r19
    stw r17, 0x20(r1)
    addi r6, r1, 0x20
    li r5, 0x0
    stw r16, 0x24(r1)
    stw r15, 0x28(r1)
    stw r14, 0x2c(r1)
    stw r19, 0x34(r31)
    mtctr r21
lbl_fn_806F9160_000009E0:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x0(r6)
    xor r0, r0, r3
    stb r0, 0x0(r6)
    bne lbl_fn_806F9160_00000A04
    mr r4, r19
lbl_fn_806F9160_00000A04:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x1(r6)
    xor r0, r0, r3
    stb r0, 0x1(r6)
    bne lbl_fn_806F9160_00000A28
    mr r4, r19
lbl_fn_806F9160_00000A28:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x2(r6)
    xor r0, r0, r3
    stb r0, 0x2(r6)
    bne lbl_fn_806F9160_00000A4C
    mr r4, r19
lbl_fn_806F9160_00000A4C:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x3(r6)
    xor r0, r0, r3
    stb r0, 0x3(r6)
    bne lbl_fn_806F9160_00000A70
    mr r4, r19
lbl_fn_806F9160_00000A70:
    lbz r0, 0x1(r4)
    lbz r3, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r0, r0
    lbz r0, 0x4(r6)
    xor r0, r0, r3
    stb r0, 0x4(r6)
    bne lbl_fn_806F9160_00000A94
    mr r4, r19
lbl_fn_806F9160_00000A94:
    addi r6, r6, 0x5
    addi r5, r5, 0x4
    bdnz lbl_fn_806F9160_000009E0
    cmpwi r18, 0x0
    blt lbl_fn_806F9160_00000B9C
    lwz r3, 0x228(r30)
    bl fn_806D58F0
    cmpw r18, r3
    bge lbl_fn_806F9160_00000B9C
    lwz r3, 0x228(r30)
    mr r4, r18
    bl fn_806D5900
    lwz r12, 0x18(r3)
    mr r11, r3
    cmpwi r12, 0x0
    beq lbl_fn_806F9160_00000B90
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F9160_00000AFC
    cmpwi r0, 0x1
    beq lbl_fn_806F9160_00000B1C
    cmpwi r0, 0x2
    beq lbl_fn_806F9160_00000B50
    cmpwi r0, 0x3
    beq lbl_fn_806F9160_00000B78
    b lbl_fn_806F9160_00000B90
lbl_fn_806F9160_00000AFC:
    addi r6, r1, 0x20
    lwz r3, 0x4(r3)
    li r5, 0x0
    lwz r4, 0x8(r11)
    lwz r7, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9160_00000B90
lbl_fn_806F9160_00000B1C:
    lwz r0, 0x14(r3)
    addi r9, r1, 0x20
    stw r0, 0x8(r1)
    li r7, 0x0
    li r8, 0x0
    li r10, 0x0
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9160_00000B90
lbl_fn_806F9160_00000B50:
    lwz r3, 0x4(r3)
    li r7, 0x0
    lwz r4, 0x8(r11)
    li r8, 0x0
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    lwz r9, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9160_00000B90
lbl_fn_806F9160_00000B78:
    lwz r3, 0x4(r3)
    li r5, 0x0
    lwz r4, 0x8(r11)
    lwz r6, 0x14(r11)
    mtctr r12
    bctrl
lbl_fn_806F9160_00000B90:
    lwz r3, 0x228(r30)
    mr r4, r18
    bl fn_806D5C90
lbl_fn_806F9160_00000B9C:
    subi r18, r18, 0x1
lbl_fn_806F9160_00000BA0:
    cmpwi r18, 0x0
    bge lbl_fn_806F9160_000009BC
    lwz r3, 0x228(r30)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x228(r30)
lbl_fn_806F9160_00000BB8:
    lwz r3, 0x210(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806F9160_00000BD8
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x210(r30)
    stw r0, 0x214(r30)
    stw r0, 0x218(r30)
lbl_fn_806F9160_00000BD8:
    cmpwi r28, 0x0
    beq lbl_fn_806F9160_00000C58
    mr r12, r28
    mr r3, r22
    mr r4, r23
    mr r5, r24
    mr r6, r25
    mr r9, r29
    li r7, 0x0
    li r8, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806F9160_00000C58
lbl_fn_806F9160_00000C0C:
    lwz r0, 0x228(r30)
    li r3, 0x2
    stw r28, 0x48(r1)
    cmpwi r0, 0x0
    stw r29, 0x44(r1)
    stw r22, 0x34(r1)
    stw r3, 0x30(r1)
    stw r23, 0x38(r1)
    stw r24, 0x3c(r1)
    stw r25, 0x40(r1)
    bne lbl_fn_806F9160_00000C4C
    li r3, 0x1c
    li r4, 0x2
    li r5, 0x0
    bl fn_806D57A0
    stw r3, 0x228(r30)
lbl_fn_806F9160_00000C4C:
    lwz r3, 0x228(r30)
    addi r4, r1, 0x30
    bl fn_806D5930
lbl_fn_806F9160_00000C58:
    addi r0, r1, 0x90
    cmplw r20, r0
    beq lbl_fn_806F9160_00000C6C
    mr r3, r20
    bl fn_806D7AC0
lbl_fn_806F9160_00000C6C:
    addi r11, r1, 0x2f0
    bl _restgpr_14
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void fn_806F96F0(void)
{
    nofralloc
    stwu r1, -0x630(r1)
    mflr r0
    stw r0, 0x634(r1)
    addi r11, r1, 0x630
    bl _savegpr_24
    lis r29, lbl_807C5B30@ha
    lis r5, lbl_8076B6F8@ha
    addi r29, r29, lbl_807C5B30@l
    lis r28, lbl_80862150@ha
    addi r5, r5, lbl_8076B6F8@l
    li r0, 0x20
    mr r24, r3
    addi r28, r28, lbl_80862150@l
    addi r4, r29, 0x138
    addi r6, r1, 0xc
    subi r5, r5, 0x4
    mtctr r0
    nop
lbl_fn_806F96F0_00000CD8:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F96F0_00000CD8
    lis r3, lbl_8076B6F8@ha
    li r0, 0x20
    addi r3, r3, lbl_8076B6F8@l
    addi r6, r1, 0x50c
    subi r5, r3, 0x4
    mtctr r0
    nop
lbl_fn_806F96F0_00000D08:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F96F0_00000D08
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x510
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x510
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r24
    addi r4, r1, 0x510
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_806F96F0_00000D5C
    li r3, 0x0
    b lbl_fn_806F96F0_00000DBC
lbl_fn_806F96F0_00000D5C:
    addi r3, r1, 0x510
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r25, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F96F0_00000D90
    nop
lbl_fn_806F96F0_00000D80:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F96F0_00000D90:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F96F0_00000DA4
    cmpwi r0, 0x5c
    bne lbl_fn_806F96F0_00000D80
lbl_fn_806F96F0_00000DA4:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F96F0_00000DBC:
    cmpwi r3, 0x0
    beq lbl_fn_806F96F0_00000DC8
    b lbl_fn_806F96F0_00000DCC
lbl_fn_806F96F0_00000DC8:
    addi r3, r29, 0x120
lbl_fn_806F96F0_00000DCC:
    bl fn_80684600
    li r0, 0x20
    mr r26, r3
    addi r4, r29, 0x140
    addi r6, r1, 0x40c
    addi r5, r1, 0xc
    mtctr r0
lbl_fn_806F96F0_00000DE8:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F96F0_00000DE8
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x410
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x410
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r24
    addi r4, r1, 0x410
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_806F96F0_00000E3C
    li r3, 0x0
    b lbl_fn_806F96F0_00000E9C
lbl_fn_806F96F0_00000E3C:
    addi r3, r1, 0x410
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r25, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F96F0_00000E70
    nop
lbl_fn_806F96F0_00000E60:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F96F0_00000E70:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F96F0_00000E84
    cmpwi r0, 0x5c
    bne lbl_fn_806F96F0_00000E60
lbl_fn_806F96F0_00000E84:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F96F0_00000E9C:
    cmpwi r3, 0x0
    beq lbl_fn_806F96F0_00000EA8
    b lbl_fn_806F96F0_00000EAC
lbl_fn_806F96F0_00000EA8:
    addi r3, r29, 0x120
lbl_fn_806F96F0_00000EAC:
    bl fn_80684600
    li r0, 0x20
    mr r30, r3
    addi r4, r29, 0x144
    addi r6, r1, 0x30c
    addi r5, r1, 0xc
    mtctr r0
lbl_fn_806F96F0_00000EC8:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F96F0_00000EC8
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x310
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x310
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r24
    addi r4, r1, 0x310
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_806F96F0_00000F1C
    li r3, 0x0
    b lbl_fn_806F96F0_00000F7C
lbl_fn_806F96F0_00000F1C:
    addi r3, r1, 0x310
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r25, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F96F0_00000F50
    nop
lbl_fn_806F96F0_00000F40:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F96F0_00000F50:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F96F0_00000F64
    cmpwi r0, 0x5c
    bne lbl_fn_806F96F0_00000F40
lbl_fn_806F96F0_00000F64:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F96F0_00000F7C:
    cmpwi r3, 0x0
    beq lbl_fn_806F96F0_00000F88
    b lbl_fn_806F96F0_00000F8C
lbl_fn_806F96F0_00000F88:
    addi r3, r29, 0x120
lbl_fn_806F96F0_00000F8C:
    bl fn_80684600
    li r0, 0x20
    mr r31, r3
    addi r4, r29, 0x148
    addi r6, r1, 0x20c
    addi r5, r1, 0xc
    mtctr r0
lbl_fn_806F96F0_00000FA8:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F96F0_00000FA8
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x210
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x210
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r24
    addi r4, r1, 0x210
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_806F96F0_00000FFC
    li r3, 0x0
    b lbl_fn_806F96F0_0000105C
lbl_fn_806F96F0_00000FFC:
    addi r3, r1, 0x210
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r25, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F96F0_00001030
    nop
lbl_fn_806F96F0_00001020:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F96F0_00001030:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F96F0_00001044
    cmpwi r0, 0x5c
    bne lbl_fn_806F96F0_00001020
lbl_fn_806F96F0_00001044:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F96F0_0000105C:
    cmpwi r3, 0x0
    beq lbl_fn_806F96F0_00001068
    b lbl_fn_806F96F0_0000106C
lbl_fn_806F96F0_00001068:
    addi r3, r29, 0x120
lbl_fn_806F96F0_0000106C:
    bl fn_80684600
    lwz r0, 0x228(r28)
    mr r25, r3
    cmpwi r0, 0x0
    bne lbl_fn_806F96F0_00001088
    li r27, -0x1
    b lbl_fn_806F96F0_000010DC
lbl_fn_806F96F0_00001088:
    li r27, 0x0
    b lbl_fn_806F96F0_000010C8
lbl_fn_806F96F0_00001090:
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806F96F0_000010C4
    lwz r0, 0x4(r3)
    cmpw r0, r30
    bne lbl_fn_806F96F0_000010C4
    lwz r0, 0x8(r3)
    cmpw r0, r31
    bne lbl_fn_806F96F0_000010C4
    b lbl_fn_806F96F0_000010DC
lbl_fn_806F96F0_000010C4:
    addi r27, r27, 0x1
lbl_fn_806F96F0_000010C8:
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r27, r3
    blt lbl_fn_806F96F0_00001090
    li r27, -0x1
lbl_fn_806F96F0_000010DC:
    cmpwi r27, -0x1
    beq lbl_fn_806F96F0_000012E4
    li r0, 0x20
    addi r4, r29, 0x14c
    addi r6, r1, 0x10c
    addi r5, r1, 0xc
    mtctr r0
lbl_fn_806F96F0_000010F8:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F96F0_000010F8
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x110
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x110
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r24
    addi r4, r1, 0x110
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806F96F0_0000114C
    li r3, 0x0
    b lbl_fn_806F96F0_000011AC
lbl_fn_806F96F0_0000114C:
    addi r3, r1, 0x110
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r30, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F96F0_00001180
    nop
lbl_fn_806F96F0_00001170:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F96F0_00001180:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F96F0_00001194
    cmpwi r0, 0x5c
    bne lbl_fn_806F96F0_00001170
lbl_fn_806F96F0_00001194:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F96F0_000011AC:
    cmpwi r3, 0x0
    beq lbl_fn_806F96F0_000011B8
    b lbl_fn_806F96F0_000011BC
lbl_fn_806F96F0_000011B8:
    addi r3, r29, 0x120
lbl_fn_806F96F0_000011BC:
    bl fn_80684600
    mr r30, r3
    mr r3, r24
    addi r4, r29, 0x154
    bl fn_806827C4
    cmpwi r3, 0x0
    bne lbl_fn_806F96F0_000011E4
    addi r24, r29, 0x120
    li r30, 0x0
    b lbl_fn_806F96F0_000011E8
lbl_fn_806F96F0_000011E4:
    addi r24, r3, 0x6
lbl_fn_806F96F0_000011E8:
    cmpwi r27, 0x0
    blt lbl_fn_806F96F0_000012E4
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r27, r3
    bge lbl_fn_806F96F0_000012E4
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5900
    lwz r12, 0x18(r3)
    mr r11, r3
    cmpwi r12, 0x0
    beq lbl_fn_806F96F0_000012D8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F96F0_00001244
    cmpwi r0, 0x1
    beq lbl_fn_806F96F0_00001264
    cmpwi r0, 0x2
    beq lbl_fn_806F96F0_00001298
    cmpwi r0, 0x3
    beq lbl_fn_806F96F0_000012C0
    b lbl_fn_806F96F0_000012D8
lbl_fn_806F96F0_00001244:
    mr r5, r26
    mr r6, r24
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    lwz r7, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F96F0_000012D8
lbl_fn_806F96F0_00001264:
    lwz r0, 0x14(r3)
    mr r7, r26
    stw r0, 0x8(r1)
    mr r8, r25
    mr r9, r24
    mr r10, r30
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F96F0_000012D8
lbl_fn_806F96F0_00001298:
    mr r7, r26
    mr r8, r25
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    lwz r9, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F96F0_000012D8
lbl_fn_806F96F0_000012C0:
    mr r5, r26
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    lwz r6, 0x14(r11)
    mtctr r12
    bctrl
lbl_fn_806F96F0_000012D8:
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5C90
lbl_fn_806F96F0_000012E4:
    addi r11, r1, 0x630
    bl _restgpr_24
    lwz r0, 0x634(r1)
    mtlr r0
    addi r1, r1, 0x630
    blr
}

asm void fn_806F9D60(void)
{
    nofralloc
    stwu r1, -0xf30(r1)
    mflr r0
    stw r0, 0xf34(r1)
    addi r11, r1, 0xf30
    bl _savegpr_26
    lis r29, lbl_807C5B30@ha
    lis r28, lbl_80862150@ha
    li r0, 0x0
    stbx r0, r3, r4
    addi r29, r29, lbl_807C5B30@l
    mr r27, r4
    mr r26, r3
    addi r28, r28, lbl_80862150@l
    addi r4, r29, 0x15c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806F9D60_000017BC
    lis r3, lbl_8076B6F8@ha
    li r0, 0x20
    addi r3, r3, lbl_8076B6F8@l
    addi r4, r29, 0x168
    addi r6, r1, 0x30c
    subi r5, r3, 0x4
    mtctr r0
    nop
lbl_fn_806F9D60_00001368:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001368
    lis r3, lbl_8076B6F8@ha
    li r0, 0x20
    addi r3, r3, lbl_8076B6F8@l
    addi r6, r1, 0xc0c
    subi r5, r3, 0x4
    mtctr r0
    nop
lbl_fn_806F9D60_00001398:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001398
    lwz r0, 0x22c(r28)
    addi r3, r1, 0xc10
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0xc10
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0xc10
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806F9D60_000013EC
    li r3, 0x0
    b lbl_fn_806F9D60_0000144C
lbl_fn_806F9D60_000013EC:
    addi r3, r1, 0xc10
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r27, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_00001420
    nop
lbl_fn_806F9D60_00001410:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_00001420:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_00001434
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_00001410
lbl_fn_806F9D60_00001434:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_0000144C:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_00001458
    b lbl_fn_806F9D60_0000145C
lbl_fn_806F9D60_00001458:
    addi r3, r29, 0x120
lbl_fn_806F9D60_0000145C:
    bl fn_80684600
    li r0, 0x20
    mr r31, r3
    addi r4, r29, 0x140
    addi r6, r1, 0xd0c
    addi r5, r1, 0x30c
    mtctr r0
lbl_fn_806F9D60_00001478:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001478
    lwz r0, 0x22c(r28)
    addi r3, r1, 0xd10
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0xd10
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0xd10
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806F9D60_000014CC
    li r3, 0x0
    b lbl_fn_806F9D60_0000152C
lbl_fn_806F9D60_000014CC:
    addi r3, r1, 0xd10
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r27, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_00001500
    nop
lbl_fn_806F9D60_000014F0:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_00001500:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_00001514
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_000014F0
lbl_fn_806F9D60_00001514:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_0000152C:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_00001538
    b lbl_fn_806F9D60_0000153C
lbl_fn_806F9D60_00001538:
    addi r3, r29, 0x120
lbl_fn_806F9D60_0000153C:
    bl fn_80684600
    li r0, 0x20
    mr r30, r3
    addi r4, r29, 0x170
    addi r6, r1, 0xe0c
    addi r5, r1, 0x30c
    mtctr r0
lbl_fn_806F9D60_00001558:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001558
    lwz r0, 0x22c(r28)
    addi r3, r1, 0xe10
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0xe10
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0xe10
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_806F9D60_000015AC
    li r27, 0x0
    b lbl_fn_806F9D60_0000160C
lbl_fn_806F9D60_000015AC:
    addi r3, r1, 0xe10
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r26, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_000015E0
    nop
lbl_fn_806F9D60_000015D0:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_000015E0:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_000015F4
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_000015D0
lbl_fn_806F9D60_000015F4:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r27, r0, r3
lbl_fn_806F9D60_0000160C:
    cmpwi r27, 0x0
    beq lbl_fn_806F9D60_00001618
    b lbl_fn_806F9D60_0000161C
lbl_fn_806F9D60_00001618:
    addi r27, r29, 0x120
lbl_fn_806F9D60_0000161C:
    lwz r0, 0x228(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806F9D60_00001630
    li r26, -0x1
    b lbl_fn_806F9D60_00001684
lbl_fn_806F9D60_00001630:
    li r26, 0x0
    b lbl_fn_806F9D60_00001670
lbl_fn_806F9D60_00001638:
    lwz r3, 0x228(r28)
    mr r4, r26
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F9D60_0000166C
    lwz r0, 0x4(r3)
    cmpw r0, r30
    bne lbl_fn_806F9D60_0000166C
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F9D60_0000166C
    b lbl_fn_806F9D60_00001684
lbl_fn_806F9D60_0000166C:
    addi r26, r26, 0x1
lbl_fn_806F9D60_00001670:
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r26, r3
    blt lbl_fn_806F9D60_00001638
    li r26, -0x1
lbl_fn_806F9D60_00001684:
    cmpwi r26, -0x1
    beq lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    mr r4, r26
    bl fn_806D5900
    cmpwi r26, 0x0
    stw r31, 0x8(r3)
    blt lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r26, r3
    bge lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    mr r4, r26
    bl fn_806D5900
    lwz r12, 0x18(r3)
    mr r11, r3
    cmpwi r12, 0x0
    beq lbl_fn_806F9D60_000017AC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F9D60_000016F8
    cmpwi r0, 0x1
    beq lbl_fn_806F9D60_00001720
    cmpwi r0, 0x2
    beq lbl_fn_806F9D60_0000175C
    cmpwi r0, 0x3
    beq lbl_fn_806F9D60_0000178C
    b lbl_fn_806F9D60_000017AC
lbl_fn_806F9D60_000016F8:
    neg r0, r31
    mr r6, r27
    andc r0, r0, r31
    lwz r3, 0x4(r3)
    srwi r5, r0, 31
    lwz r4, 0x8(r11)
    lwz r7, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_000017AC
lbl_fn_806F9D60_00001720:
    lwz r4, 0x14(r3)
    neg r0, r31
    stw r4, 0x8(r1)
    andc r0, r0, r31
    mr r9, r27
    li r8, 0x0
    srwi r7, r0, 31
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    li r10, 0x0
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_000017AC
lbl_fn_806F9D60_0000175C:
    neg r0, r31
    lwz r3, 0x4(r3)
    andc r0, r0, r31
    lwz r4, 0x8(r11)
    srwi r7, r0, 31
    lwz r5, 0xc(r11)
    li r8, 0x0
    lwz r6, 0x10(r11)
    lwz r9, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_000017AC
lbl_fn_806F9D60_0000178C:
    neg r0, r31
    lwz r3, 0x4(r3)
    andc r0, r0, r31
    lwz r4, 0x8(r11)
    srwi r5, r0, 31
    lwz r6, 0x14(r11)
    mtctr r12
    bctrl
lbl_fn_806F9D60_000017AC:
    lwz r3, 0x228(r28)
    mr r4, r26
    bl fn_806D5C90
    b lbl_fn_806F9D60_00002478
lbl_fn_806F9D60_000017BC:
    mr r3, r26
    addi r4, r29, 0x178
    li r5, 0x9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806F9D60_00001B6C
    lis r3, lbl_8076B6F8@ha
    li r0, 0x20
    addi r3, r3, lbl_8076B6F8@l
    addi r4, r29, 0x188
    addi r6, r1, 0x20c
    subi r5, r3, 0x4
    mtctr r0
lbl_fn_806F9D60_000017F0:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_000017F0
    lis r3, lbl_8076B6F8@ha
    li r0, 0x20
    addi r3, r3, lbl_8076B6F8@l
    addi r6, r1, 0xa0c
    subi r5, r3, 0x4
    mtctr r0
    nop
lbl_fn_806F9D60_00001820:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001820
    lwz r0, 0x22c(r28)
    addi r3, r1, 0xa10
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0xa10
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0xa10
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806F9D60_00001874
    li r3, 0x0
    b lbl_fn_806F9D60_000018D4
lbl_fn_806F9D60_00001874:
    addi r3, r1, 0xa10
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r27, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_000018A8
    nop
lbl_fn_806F9D60_00001898:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_000018A8:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_000018BC
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_00001898
lbl_fn_806F9D60_000018BC:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_000018D4:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_000018E0
    b lbl_fn_806F9D60_000018E4
lbl_fn_806F9D60_000018E0:
    addi r3, r29, 0x120
lbl_fn_806F9D60_000018E4:
    bl fn_80684600
    li r0, 0x20
    mr r30, r3
    addi r4, r29, 0x140
    addi r6, r1, 0xb0c
    addi r5, r1, 0x20c
    mtctr r0
lbl_fn_806F9D60_00001900:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001900
    lwz r0, 0x22c(r28)
    addi r3, r1, 0xb10
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0xb10
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0xb10
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_806F9D60_00001954
    li r3, 0x0
    b lbl_fn_806F9D60_000019B4
lbl_fn_806F9D60_00001954:
    addi r3, r1, 0xb10
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r26, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_00001988
    nop
lbl_fn_806F9D60_00001978:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_00001988:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_0000199C
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_00001978
lbl_fn_806F9D60_0000199C:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_000019B4:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_000019C0
    b lbl_fn_806F9D60_000019C4
lbl_fn_806F9D60_000019C0:
    addi r3, r29, 0x120
lbl_fn_806F9D60_000019C4:
    bl fn_80684600
    lwz r0, 0x228(r28)
    mr r26, r3
    cmpwi r0, 0x0
    bne lbl_fn_806F9D60_000019E0
    li r27, -0x1
    b lbl_fn_806F9D60_00001A34
lbl_fn_806F9D60_000019E0:
    li r27, 0x0
    b lbl_fn_806F9D60_00001A20
lbl_fn_806F9D60_000019E8:
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    bne lbl_fn_806F9D60_00001A1C
    lwz r0, 0x4(r3)
    cmpw r0, r26
    bne lbl_fn_806F9D60_00001A1C
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F9D60_00001A1C
    b lbl_fn_806F9D60_00001A34
lbl_fn_806F9D60_00001A1C:
    addi r27, r27, 0x1
lbl_fn_806F9D60_00001A20:
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r27, r3
    blt lbl_fn_806F9D60_000019E8
    li r27, -0x1
lbl_fn_806F9D60_00001A34:
    cmpwi r27, -0x1
    beq lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5900
    cmpwi r27, 0x0
    stw r30, 0x8(r3)
    blt lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r27, r3
    bge lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5900
    lwz r12, 0x18(r3)
    mr r11, r3
    cmpwi r12, 0x0
    beq lbl_fn_806F9D60_00001B5C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F9D60_00001AA8
    cmpwi r0, 0x1
    beq lbl_fn_806F9D60_00001AD0
    cmpwi r0, 0x2
    beq lbl_fn_806F9D60_00001B0C
    cmpwi r0, 0x3
    beq lbl_fn_806F9D60_00001B3C
    b lbl_fn_806F9D60_00001B5C
lbl_fn_806F9D60_00001AA8:
    neg r0, r30
    lwz r3, 0x4(r3)
    andc r0, r0, r30
    lwz r4, 0x8(r11)
    srwi r5, r0, 31
    lwz r7, 0x14(r11)
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_00001B5C
lbl_fn_806F9D60_00001AD0:
    lwz r4, 0x14(r3)
    neg r0, r30
    stw r4, 0x8(r1)
    andc r0, r0, r30
    li r8, 0x0
    li r9, 0x0
    srwi r7, r0, 31
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    li r10, 0x0
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_00001B5C
lbl_fn_806F9D60_00001B0C:
    neg r0, r30
    lwz r3, 0x4(r3)
    andc r0, r0, r30
    lwz r4, 0x8(r11)
    srwi r7, r0, 31
    lwz r5, 0xc(r11)
    li r8, 0x0
    lwz r6, 0x10(r11)
    lwz r9, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_00001B5C
lbl_fn_806F9D60_00001B3C:
    neg r0, r30
    lwz r3, 0x4(r3)
    andc r0, r0, r30
    lwz r4, 0x8(r11)
    srwi r5, r0, 31
    lwz r6, 0x14(r11)
    mtctr r12
    bctrl
lbl_fn_806F9D60_00001B5C:
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5C90
    b lbl_fn_806F9D60_00002478
lbl_fn_806F9D60_00001B6C:
    mr r3, r26
    addi r4, r29, 0x178
    li r5, 0x9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806F9D60_00001F1C
    lis r3, lbl_8076B6F8@ha
    li r0, 0x20
    addi r3, r3, lbl_8076B6F8@l
    addi r4, r29, 0x188
    addi r6, r1, 0x10c
    subi r5, r3, 0x4
    mtctr r0
lbl_fn_806F9D60_00001BA0:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001BA0
    lis r3, lbl_8076B6F8@ha
    li r0, 0x20
    addi r3, r3, lbl_8076B6F8@l
    addi r6, r1, 0x80c
    subi r5, r3, 0x4
    mtctr r0
    nop
lbl_fn_806F9D60_00001BD0:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001BD0
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x810
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x810
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0x810
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806F9D60_00001C24
    li r3, 0x0
    b lbl_fn_806F9D60_00001C84
lbl_fn_806F9D60_00001C24:
    addi r3, r1, 0x810
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r27, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_00001C58
    nop
lbl_fn_806F9D60_00001C48:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_00001C58:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_00001C6C
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_00001C48
lbl_fn_806F9D60_00001C6C:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_00001C84:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_00001C90
    b lbl_fn_806F9D60_00001C94
lbl_fn_806F9D60_00001C90:
    addi r3, r29, 0x120
lbl_fn_806F9D60_00001C94:
    bl fn_80684600
    li r0, 0x20
    mr r30, r3
    addi r4, r29, 0x140
    addi r6, r1, 0x90c
    addi r5, r1, 0x10c
    mtctr r0
lbl_fn_806F9D60_00001CB0:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001CB0
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x910
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x910
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0x910
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_806F9D60_00001D04
    li r3, 0x0
    b lbl_fn_806F9D60_00001D64
lbl_fn_806F9D60_00001D04:
    addi r3, r1, 0x910
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r26, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_00001D38
    nop
lbl_fn_806F9D60_00001D28:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_00001D38:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_00001D4C
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_00001D28
lbl_fn_806F9D60_00001D4C:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_00001D64:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_00001D70
    b lbl_fn_806F9D60_00001D74
lbl_fn_806F9D60_00001D70:
    addi r3, r29, 0x120
lbl_fn_806F9D60_00001D74:
    bl fn_80684600
    lwz r0, 0x228(r28)
    mr r26, r3
    cmpwi r0, 0x0
    bne lbl_fn_806F9D60_00001D90
    li r27, -0x1
    b lbl_fn_806F9D60_00001DE4
lbl_fn_806F9D60_00001D90:
    li r27, 0x0
    b lbl_fn_806F9D60_00001DD0
lbl_fn_806F9D60_00001D98:
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    bne lbl_fn_806F9D60_00001DCC
    lwz r0, 0x4(r3)
    cmpw r0, r26
    bne lbl_fn_806F9D60_00001DCC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F9D60_00001DCC
    b lbl_fn_806F9D60_00001DE4
lbl_fn_806F9D60_00001DCC:
    addi r27, r27, 0x1
lbl_fn_806F9D60_00001DD0:
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r27, r3
    blt lbl_fn_806F9D60_00001D98
    li r27, -0x1
lbl_fn_806F9D60_00001DE4:
    cmpwi r27, -0x1
    beq lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5900
    cmpwi r27, 0x0
    stw r30, 0x8(r3)
    blt lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r27, r3
    bge lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5900
    lwz r12, 0x18(r3)
    mr r11, r3
    cmpwi r12, 0x0
    beq lbl_fn_806F9D60_00001F0C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F9D60_00001E58
    cmpwi r0, 0x1
    beq lbl_fn_806F9D60_00001E80
    cmpwi r0, 0x2
    beq lbl_fn_806F9D60_00001EBC
    cmpwi r0, 0x3
    beq lbl_fn_806F9D60_00001EEC
    b lbl_fn_806F9D60_00001F0C
lbl_fn_806F9D60_00001E58:
    neg r0, r30
    lwz r3, 0x4(r3)
    andc r0, r0, r30
    lwz r4, 0x8(r11)
    srwi r5, r0, 31
    lwz r7, 0x14(r11)
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_00001F0C
lbl_fn_806F9D60_00001E80:
    lwz r4, 0x14(r3)
    neg r0, r30
    stw r4, 0x8(r1)
    andc r0, r0, r30
    li r8, 0x0
    li r9, 0x0
    srwi r7, r0, 31
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    li r10, 0x0
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_00001F0C
lbl_fn_806F9D60_00001EBC:
    neg r0, r30
    lwz r3, 0x4(r3)
    andc r0, r0, r30
    lwz r4, 0x8(r11)
    srwi r7, r0, 31
    lwz r5, 0xc(r11)
    li r8, 0x0
    lwz r6, 0x10(r11)
    lwz r9, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_00001F0C
lbl_fn_806F9D60_00001EEC:
    neg r0, r30
    lwz r3, 0x4(r3)
    andc r0, r0, r30
    lwz r4, 0x8(r11)
    srwi r5, r0, 31
    lwz r6, 0x14(r11)
    mtctr r12
    bctrl
lbl_fn_806F9D60_00001F0C:
    lwz r3, 0x228(r28)
    mr r4, r27
    bl fn_806D5C90
    b lbl_fn_806F9D60_00002478
lbl_fn_806F9D60_00001F1C:
    mr r3, r26
    addi r4, r29, 0x190
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806F9D60_00001F44
    mr r3, r26
    mr r4, r27
    bl fn_806F96F0
    b lbl_fn_806F9D60_00002478
lbl_fn_806F9D60_00001F44:
    mr r3, r26
    addi r4, r29, 0x19c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806F9D60_00002478
    lis r3, lbl_8076B6F8@ha
    li r0, 0x20
    addi r3, r3, lbl_8076B6F8@l
    addi r4, r29, 0x1a8
    addi r6, r1, 0xc
    subi r5, r3, 0x4
    mtctr r0
lbl_fn_806F9D60_00001F78:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001F78
    lis r3, lbl_8076B6F8@ha
    li r0, 0x20
    addi r3, r3, lbl_8076B6F8@l
    addi r6, r1, 0x40c
    subi r5, r3, 0x4
    mtctr r0
    nop
lbl_fn_806F9D60_00001FA8:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00001FA8
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x410
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x410
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0x410
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806F9D60_00001FFC
    li r3, 0x0
    b lbl_fn_806F9D60_0000205C
lbl_fn_806F9D60_00001FFC:
    addi r3, r1, 0x410
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r27, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_00002030
    nop
lbl_fn_806F9D60_00002020:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_00002030:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_00002044
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_00002020
lbl_fn_806F9D60_00002044:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_0000205C:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_00002068
    b lbl_fn_806F9D60_0000206C
lbl_fn_806F9D60_00002068:
    addi r3, r29, 0x120
lbl_fn_806F9D60_0000206C:
    bl fn_80684600
    li r0, 0x20
    mr r27, r3
    addi r4, r29, 0x144
    addi r6, r1, 0x50c
    addi r5, r1, 0xc
    mtctr r0
lbl_fn_806F9D60_00002088:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00002088
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x510
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x510
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0x510
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806F9D60_000020DC
    li r3, 0x0
    b lbl_fn_806F9D60_0000213C
lbl_fn_806F9D60_000020DC:
    addi r3, r1, 0x510
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r30, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_00002110
    nop
lbl_fn_806F9D60_00002100:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_00002110:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_00002124
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_00002100
lbl_fn_806F9D60_00002124:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_0000213C:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_00002148
    b lbl_fn_806F9D60_0000214C
lbl_fn_806F9D60_00002148:
    addi r3, r29, 0x120
lbl_fn_806F9D60_0000214C:
    bl fn_80684600
    li r0, 0x20
    mr r30, r3
    addi r4, r29, 0x140
    addi r6, r1, 0x60c
    addi r5, r1, 0xc
    mtctr r0
lbl_fn_806F9D60_00002168:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00002168
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x610
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x610
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0x610
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806F9D60_000021BC
    li r3, 0x0
    b lbl_fn_806F9D60_0000221C
lbl_fn_806F9D60_000021BC:
    addi r3, r1, 0x610
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r31, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_000021F0
    nop
lbl_fn_806F9D60_000021E0:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_000021F0:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_00002204
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_000021E0
lbl_fn_806F9D60_00002204:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_0000221C:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_00002228
    b lbl_fn_806F9D60_0000222C
lbl_fn_806F9D60_00002228:
    addi r3, r29, 0x120
lbl_fn_806F9D60_0000222C:
    bl fn_80684600
    li r0, 0x20
    mr r31, r3
    addi r4, r29, 0x148
    addi r6, r1, 0x70c
    addi r5, r1, 0xc
    mtctr r0
lbl_fn_806F9D60_00002248:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806F9D60_00002248
    lwz r0, 0x22c(r28)
    addi r3, r1, 0x710
    xori r0, r0, 0x1
    stw r0, 0x22c(r28)
    bl fn_806823B0
    addi r3, r1, 0x710
    addi r4, r29, 0xec
    bl fn_806823B0
    mr r3, r26
    addi r4, r1, 0x710
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_806F9D60_0000229C
    li r3, 0x0
    b lbl_fn_806F9D60_000022FC
lbl_fn_806F9D60_0000229C:
    addi r3, r1, 0x710
    bl strlen
    lwz r4, 0x22c(r28)
    add r5, r26, r3
    addi r0, r28, 0x230
    slwi r3, r4, 8
    add r4, r0, r3
    b lbl_fn_806F9D60_000022D0
    nop
lbl_fn_806F9D60_000022C0:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_fn_806F9D60_000022D0:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F9D60_000022E4
    cmpwi r0, 0x5c
    bne lbl_fn_806F9D60_000022C0
lbl_fn_806F9D60_000022E4:
    lwz r3, 0x22c(r28)
    li r0, 0x0
    stb r0, 0x0(r4)
    addi r0, r28, 0x230
    slwi r3, r3, 8
    add r3, r0, r3
lbl_fn_806F9D60_000022FC:
    cmpwi r3, 0x0
    beq lbl_fn_806F9D60_00002308
    b lbl_fn_806F9D60_0000230C
lbl_fn_806F9D60_00002308:
    addi r3, r29, 0x120
lbl_fn_806F9D60_0000230C:
    bl fn_80684600
    lwz r0, 0x228(r28)
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_fn_806F9D60_00002328
    li r26, -0x1
    b lbl_fn_806F9D60_0000237C
lbl_fn_806F9D60_00002328:
    li r26, 0x0
    b lbl_fn_806F9D60_00002368
lbl_fn_806F9D60_00002330:
    lwz r3, 0x228(r28)
    mr r4, r26
    bl fn_806D5900
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806F9D60_00002364
    lwz r0, 0x4(r3)
    cmpw r0, r31
    bne lbl_fn_806F9D60_00002364
    lwz r0, 0x8(r3)
    cmpw r0, r30
    bne lbl_fn_806F9D60_00002364
    b lbl_fn_806F9D60_0000237C
lbl_fn_806F9D60_00002364:
    addi r26, r26, 0x1
lbl_fn_806F9D60_00002368:
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r26, r3
    blt lbl_fn_806F9D60_00002330
    li r26, -0x1
lbl_fn_806F9D60_0000237C:
    cmpwi r26, -0x1
    ble lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    bl fn_806D58F0
    cmpw r26, r3
    bge lbl_fn_806F9D60_00002478
    lwz r3, 0x228(r28)
    mr r4, r26
    bl fn_806D5900
    lwz r12, 0x18(r3)
    mr r11, r3
    cmpwi r12, 0x0
    beq lbl_fn_806F9D60_0000246C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F9D60_000023D8
    cmpwi r0, 0x1
    beq lbl_fn_806F9D60_000023F8
    cmpwi r0, 0x2
    beq lbl_fn_806F9D60_0000242C
    cmpwi r0, 0x3
    beq lbl_fn_806F9D60_00002454
    b lbl_fn_806F9D60_0000246C
lbl_fn_806F9D60_000023D8:
    mr r5, r27
    lwz r3, 0x4(r3)
    li r6, 0x0
    lwz r4, 0x8(r11)
    lwz r7, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_0000246C
lbl_fn_806F9D60_000023F8:
    lwz r0, 0x14(r3)
    mr r7, r27
    stw r0, 0x8(r1)
    mr r8, r29
    li r9, 0x0
    li r10, 0x0
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_0000246C
lbl_fn_806F9D60_0000242C:
    mr r7, r27
    mr r8, r29
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    lwz r9, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F9D60_0000246C
lbl_fn_806F9D60_00002454:
    mr r5, r27
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r11)
    lwz r6, 0x14(r11)
    mtctr r12
    bctrl
lbl_fn_806F9D60_0000246C:
    lwz r3, 0x228(r28)
    mr r4, r26
    bl fn_806D5C90
lbl_fn_806F9D60_00002478:
    addi r11, r1, 0xf30
    bl _restgpr_26
    lwz r0, 0xf34(r1)
    mtlr r0
    addi r1, r1, 0xf30
    blr
}
