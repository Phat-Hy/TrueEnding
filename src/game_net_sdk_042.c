#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void fn_806820D4(void);
extern void fn_806823B0(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5C90(void);
extern void fn_806D64B0(void);
extern void fn_806D6610(void);
extern void fn_806D7A90(void);
extern void fn_806D7AC0(void);
extern void fn_806D7B30(void);
extern void fn_806D7B70(void);
extern void fn_806D7F20(void);
extern void fn_806D8E30(void);
extern void fn_806D8F30(void);
extern void fn_806F2070(void);
extern void fn_806F2600(void);
extern void fn_806F27E0(void);
extern void fn_806F28C0(void);
extern void fn_806F2A10(void);
extern void fn_806F6940(void);
extern void memmove(void);
extern int sprintf(char* str, const char* format, ...);
extern void strchr(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B6E0[];
extern u8 lbl_8076B6F0[];
extern u8 lbl_8076B838[];
extern u8 lbl_807BB380[];
extern u8 lbl_807C5A08[];
extern u8 lbl_807C5AD0[];
extern u8 lbl_807C5B30[];
extern u8 lbl_80862140[];
extern u8 lbl_80862144[];
extern u8 lbl_80862148[];
extern u8 lbl_80862150[];

/* Small data declarations */

/* Function declarations */
void pad_03_806F6A24_text(void);
void fn_806F6A30(void);
void fn_806F6CA0(void);
void fn_806F72F0(void);
void fn_806F7560(void);
void fn_806F76C0(void);
void fn_806F77F0(void);
void fn_806F7BB0(void);
void fn_806F7E30(void);
void fn_806F80B0(void);
void fn_806F8330(void);
void fn_806F84C0(void);
void fn_806F87A0(void);

asm void pad_03_806F6A24_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806F6A30(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    lwz r0, 0x138(r3)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    cmpwi r0, 0x0
    beq lbl_fn_806F6A30_00000260
    li r23, 0x0
    lis r24, lbl_807C5AD0@ha
    li r28, 0x2
    li r26, 0x1
    li r25, 0x3
    b lbl_fn_806F6A30_00000250
lbl_fn_806F6A30_00000050:
    lwz r0, 0x150(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806F6A30_0000018C
    mr r3, r30
    li r4, 0xa
    bl strchr
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_806F6A30_00000134
    subf. r22, r30, r3
    beq lbl_fn_806F6A30_000000C0
    lwz r0, 0x148(r29)
    cmpwi r0, 0xa
    bge lbl_fn_806F6A30_000000C0
    subfic r3, r0, 0xa
    cmpw r3, r22
    bge lbl_fn_806F6A30_00000098
    mr r22, r3
lbl_fn_806F6A30_00000098:
    add r3, r29, r0
    mr r4, r30
    mr r5, r22
    addi r3, r3, 0x13c
    bl memcpy
    lwz r0, 0x148(r29)
    add r0, r0, r22
    stw r0, 0x148(r29)
    add r3, r29, r0
    stb r23, 0x13c(r3)
lbl_fn_806F6A30_000000C0:
    addi r5, r27, 0x1
    addi r3, r29, 0x13c
    subf r0, r30, r5
    addi r4, r24, lbl_807C5AD0@l
    mr r30, r5
    addi r5, r1, 0x8
    subf r31, r0, r31
    crclr 6
    bl fn_806820D4
    cmpwi r3, 0x1
    beq lbl_fn_806F6A30_000000F4
    li r0, -0x1
    b lbl_fn_806F6A30_000000F8
lbl_fn_806F6A30_000000F4:
    lwz r0, 0x8(r1)
lbl_fn_806F6A30_000000F8:
    cmpwi r0, -0x1
    stw r0, 0x14c(r29)
    bne lbl_fn_806F6A30_0000011C
    li r3, 0x1
    li r0, 0x7
    stw r3, 0x124(r29)
    li r3, 0x0
    stw r0, 0x40(r29)
    b lbl_fn_806F6A30_00000264
lbl_fn_806F6A30_0000011C:
    cmpwi r0, 0x0
    bne lbl_fn_806F6A30_0000012C
    stw r25, 0x150(r29)
    b lbl_fn_806F6A30_00000250
lbl_fn_806F6A30_0000012C:
    stw r26, 0x150(r29)
    b lbl_fn_806F6A30_00000250
lbl_fn_806F6A30_00000134:
    cmpwi r31, 0x0
    beq lbl_fn_806F6A30_00000184
    lwz r0, 0x148(r29)
    cmpwi r0, 0xa
    bge lbl_fn_806F6A30_00000184
    subfic r3, r0, 0xa
    cmpw r3, r31
    bge lbl_fn_806F6A30_00000158
    mr r31, r3
lbl_fn_806F6A30_00000158:
    add r3, r29, r0
    mr r4, r30
    mr r5, r31
    addi r3, r3, 0x13c
    bl memcpy
    lwz r3, 0x148(r29)
    li r0, 0x0
    add r3, r3, r31
    stw r3, 0x148(r29)
    add r3, r29, r3
    stb r0, 0x13c(r3)
lbl_fn_806F6A30_00000184:
    li r3, 0x1
    b lbl_fn_806F6A30_00000264
lbl_fn_806F6A30_0000018C:
    cmpwi r0, 0x1
    bne lbl_fn_806F6A30_000001E8
    lwz r0, 0x14c(r29)
    mr r27, r31
    cmpw r0, r31
    bge lbl_fn_806F6A30_000001A8
    mr r27, r0
lbl_fn_806F6A30_000001A8:
    mr r3, r29
    mr r4, r30
    mr r5, r27
    bl fn_806F6940
    cmpwi r3, 0x0
    bne lbl_fn_806F6A30_000001C8
    li r3, 0x0
    b lbl_fn_806F6A30_00000264
lbl_fn_806F6A30_000001C8:
    lwz r0, 0x14c(r29)
    add r30, r30, r27
    subf r31, r27, r31
    subf. r0, r27, r0
    stw r0, 0x14c(r29)
    bne lbl_fn_806F6A30_00000250
    stw r28, 0x150(r29)
    b lbl_fn_806F6A30_00000250
lbl_fn_806F6A30_000001E8:
    cmpwi r0, 0x2
    bne lbl_fn_806F6A30_00000230
    mr r3, r30
    li r4, 0xa
    bl strchr
    cmpwi r3, 0x0
    bne lbl_fn_806F6A30_0000020C
    li r3, 0x1
    b lbl_fn_806F6A30_00000264
lbl_fn_806F6A30_0000020C:
    addi r3, r3, 0x1
    stb r23, 0x13c(r29)
    subf r0, r30, r3
    stw r23, 0x148(r29)
    mr r30, r3
    subf r31, r0, r31
    stw r23, 0x14c(r29)
    stw r23, 0x150(r29)
    b lbl_fn_806F6A30_00000250
lbl_fn_806F6A30_00000230:
    cmpwi r0, 0x3
    bne lbl_fn_806F6A30_00000248
    li r0, 0x1
    stw r0, 0x124(r29)
    li r3, 0x1
    b lbl_fn_806F6A30_00000264
lbl_fn_806F6A30_00000248:
    li r3, 0x0
    b lbl_fn_806F6A30_00000264
lbl_fn_806F6A30_00000250:
    cmpwi r31, 0x0
    bgt lbl_fn_806F6A30_00000050
    li r3, 0x1
    b lbl_fn_806F6A30_00000264
lbl_fn_806F6A30_00000260:
    bl fn_806F6940
lbl_fn_806F6A30_00000264:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806F6CA0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    lis r30, lbl_807C5A08@ha
    mr r25, r3
    addi r30, r30, lbl_807C5A08@l
    li r31, 0x1
    li r3, 0x1000
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806F6CA0_000002C4
    li r0, 0x1
    stw r0, 0x124(r25)
    stw r0, 0x40(r25)
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_000002C4:
    li r0, 0x1000
    stw r0, 0x8(r1)
    mr r3, r25
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_806F2A10
    cmpwi r3, 0x3
    mr r26, r3
    bne lbl_fn_806F6CA0_000002FC
    cmpwi r28, 0x0
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_000002FC:
    cmpwi r3, 0x1
    bne lbl_fn_806F6CA0_00000318
    cmpwi r28, 0x0
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_00000318:
    cmpwi r3, 0x0
    bne lbl_fn_806F6CA0_000003C4
    lwz r0, 0x198(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806F6CA0_00000398
    lwz r0, 0x1a8(r25)
    cmpwi r0, 0x1
    bne lbl_fn_806F6CA0_00000398
    lwz r5, 0x8(r1)
    mr r4, r28
    addi r3, r25, 0xc4
    bl fn_806F2070
    cmpwi r3, 0x0
    bne lbl_fn_806F6CA0_00000364
    cmpwi r28, 0x0
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_00000364:
    mr r3, r25
    bl fn_806F28C0
    cmpwi r3, 0x0
    bne lbl_fn_806F6CA0_000003C4
    cmpwi r28, 0x0
    li r3, 0x1
    li r0, 0x11
    stw r3, 0x124(r25)
    stw r0, 0x40(r25)
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_00000398:
    lwz r5, 0x8(r1)
    mr r4, r28
    addi r3, r25, 0xa0
    bl fn_806F2070
    cmpwi r3, 0x0
    bne lbl_fn_806F6CA0_000003C4
    cmpwi r28, 0x0
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_000003C4:
    lis r3, 0x51ec
    lwz r0, 0x118(r25)
    subi r3, r3, 0x7ae1
    lwz r4, 0xa4(r25)
    mulhw r0, r3, r0
    lwz r3, 0x120(r25)
    add r29, r4, r3
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    cmpwi r0, 0x1
    bne lbl_fn_806F6CA0_00000430
    mr r3, r29
    addi r4, r30, 0x50
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806F6CA0_00000424
    mr r3, r29
    addi r4, r30, 0xcc
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806F6CA0_00000430
lbl_fn_806F6CA0_00000424:
    mr r3, r29
    li r31, 0x0
    b lbl_fn_806F6CA0_0000043C
lbl_fn_806F6CA0_00000430:
    mr r3, r29
    addi r4, r30, 0xd0
    bl fn_806827C4
lbl_fn_806F6CA0_0000043C:
    cmpwi r3, 0x0
    bne lbl_fn_806F6CA0_00000450
    mr r3, r29
    addi r4, r30, 0xcc
    bl fn_806827C4
lbl_fn_806F6CA0_00000450:
    cmpwi r3, 0x0
    beq lbl_fn_806F6CA0_0000087C
    cmpwi r31, 0x1
    bne lbl_fn_806F6CA0_00000464
    addi r3, r3, 0x2
lbl_fn_806F6CA0_00000464:
    li r0, 0x0
    stb r0, 0x0(r3)
    lis r4, 0x51ec
    addi r27, r3, 0x2
    lwz r5, 0x118(r25)
    subi r0, r4, 0x7ae1
    lwz r6, 0xa4(r25)
    mulhw r0, r0, r5
    lwz r4, 0xac(r25)
    subf r3, r6, r3
    subf r5, r6, r27
    addi r3, r3, 0x1
    stw r3, 0xac(r25)
    srawi r0, r0, 5
    stw r3, 0xb0(r25)
    srwi r3, r0, 31
    subf r26, r5, r4
    add r0, r0, r3
    cmpwi r0, 0x1
    bne lbl_fn_806F6CA0_00000534
    cmpwi r26, 0x0
    beq lbl_fn_806F6CA0_000004D4
    mr r3, r6
    mr r4, r27
    addi r5, r26, 0x1
    bl memmove
    stw r26, 0xac(r25)
    b lbl_fn_806F6CA0_000004DC
lbl_fn_806F6CA0_000004D4:
    addi r3, r25, 0xa0
    bl fn_806F2600
lbl_fn_806F6CA0_000004DC:
    lwz r0, 0x180(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806F6CA0_00000508
    li r3, 0x0
    li r0, 0x6
    stw r3, 0x180(r25)
    mr r3, r25
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x10(r25)
    bl fn_806F27E0
lbl_fn_806F6CA0_00000508:
    li r0, 0x8
    stw r0, 0x10(r25)
    mr r3, r25
    li r4, 0x0
    li r5, 0x0
    bl fn_806F27E0
    cmpwi r28, 0x0
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_00000534:
    cmpwi r0, 0x3
    bne lbl_fn_806F6CA0_000006CC
    lwz r0, 0x134(r25)
    cmpwi r0, 0xa
    ble lbl_fn_806F6CA0_0000056C
    cmpwi r28, 0x0
    li r3, 0x1
    li r0, 0xb
    stw r3, 0x124(r25)
    stw r0, 0x40(r25)
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_0000056C:
    mr r3, r29
    addi r4, r30, 0xd8
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_806F6CA0_000006CC
    lis r4, lbl_807BB380@ha
    addi r26, r3, 0x9
    addi r4, r4, lbl_807BB380@l
    lwz r4, 0x38(r4)
    b lbl_fn_806F6CA0_00000598
lbl_fn_806F6CA0_00000594:
    addi r26, r26, 0x1
lbl_fn_806F6CA0_00000598:
    lbz r0, 0x0(r26)
    li r3, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_fn_806F6CA0_000005B0
    li r3, 0x0
lbl_fn_806F6CA0_000005B0:
    cmpwi r3, 0x0
    beq lbl_fn_806F6CA0_000005C0
    li r0, 0x0
    b lbl_fn_806F6CA0_000005D0
lbl_fn_806F6CA0_000005C0:
    lwz r3, 0x8(r4)
    slwi r0, r0, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_806F6CA0_000005D0:
    cmpwi r0, 0x0
    bne lbl_fn_806F6CA0_00000594
    mr r5, r26
    b lbl_fn_806F6CA0_000005E8
    nop
lbl_fn_806F6CA0_000005E4:
    addi r5, r5, 0x1
lbl_fn_806F6CA0_000005E8:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_806F6CA0_0000062C
    cmplwi r0, 0xff
    li r3, 0x1
    bgt lbl_fn_806F6CA0_00000604
    li r3, 0x0
lbl_fn_806F6CA0_00000604:
    cmpwi r3, 0x0
    beq lbl_fn_806F6CA0_00000614
    li r0, 0x0
    b lbl_fn_806F6CA0_00000624
lbl_fn_806F6CA0_00000614:
    lwz r3, 0x8(r4)
    slwi r0, r0, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_806F6CA0_00000624:
    cmpwi r0, 0x0
    beq lbl_fn_806F6CA0_000005E4
lbl_fn_806F6CA0_0000062C:
    li r0, 0x0
    stb r0, 0x0(r5)
    lbz r0, 0x0(r26)
    cmpwi r0, 0x2f
    bne lbl_fn_806F6CA0_00000698
    mr r3, r26
    bl strlen
    mr r27, r3
    lwz r3, 0x18(r25)
    bl strlen
    add r3, r3, r27
    addi r3, r3, 0xe
    bl fn_806D7A90
    cmpwi r3, 0x0
    stw r3, 0x130(r25)
    bne lbl_fn_806F6CA0_00000678
    li r0, 0x1
    stw r0, 0x124(r25)
    stw r0, 0x40(r25)
lbl_fn_806F6CA0_00000678:
    lwz r3, 0x130(r25)
    mr r7, r26
    lwz r5, 0x18(r25)
    addi r4, r30, 0xe4
    lhz r6, 0x20(r25)
    crclr 6
    bl sprintf
    b lbl_fn_806F6CA0_000006B8
lbl_fn_806F6CA0_00000698:
    mr r3, r26
    bl fn_806D8E30
    cmpwi r3, 0x0
    stw r3, 0x130(r25)
    bne lbl_fn_806F6CA0_000006B8
    li r0, 0x1
    stw r0, 0x124(r25)
    stw r0, 0x40(r25)
lbl_fn_806F6CA0_000006B8:
    cmpwi r28, 0x0
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_000006CC:
    mr r3, r29
    addi r4, r30, 0xf8
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_806F6CA0_000007C8
    lis r7, lbl_8076B6E0@ha
    lwzu r6, lbl_8076B6E0@l(r7)
    addi r24, r3, 0x10
    stw r6, 0xc(r1)
    lwz r5, 0x4(r7)
    addi r3, r1, 0xc
    lhz r4, 0x8(r7)
    mr r23, r24
    lbz r0, 0xa(r7)
    stw r5, 0x10(r1)
    sth r4, 0x14(r1)
    stb r0, 0x16(r1)
    bl strlen
    b lbl_fn_806F6CA0_00000720
lbl_fn_806F6CA0_0000071C:
    addi r23, r23, 0x1
lbl_fn_806F6CA0_00000720:
    cmpwi r23, 0x0
    beq lbl_fn_806F6CA0_0000074C
    lbz r0, 0x0(r23)
    extsb. r0, r0
    beq lbl_fn_806F6CA0_0000074C
    cmpwi r0, 0xa
    beq lbl_fn_806F6CA0_0000074C
    cmpwi r0, 0xd
    beq lbl_fn_806F6CA0_0000074C
    cmpwi r0, 0x20
    bne lbl_fn_806F6CA0_0000071C
lbl_fn_806F6CA0_0000074C:
    subf r5, r24, r23
    cmpw r5, r3
    ble lbl_fn_806F6CA0_0000077C
    cmpwi r28, 0x0
    li r3, 0x1
    li r0, 0x10
    stw r3, 0x124(r25)
    stw r0, 0x40(r25)
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_0000077C:
    cmpw r3, r5
    bne lbl_fn_806F6CA0_000007BC
    mr r3, r24
    addi r4, r1, 0xc
    bl fn_80682544
    cmpwi r3, 0x0
    blt lbl_fn_806F6CA0_000007BC
    cmpwi r28, 0x0
    li r3, 0x1
    li r0, 0x10
    stw r3, 0x124(r25)
    stw r0, 0x40(r25)
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_000007BC:
    mr r3, r24
    bl fn_80684600
    stw r3, 0x12c(r25)
lbl_fn_806F6CA0_000007C8:
    mr r3, r29
    addi r4, r30, 0x108
    bl fn_806827C4
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    stw r0, 0x138(r25)
    beq lbl_fn_806F6CA0_000007FC
    li r0, 0x0
    stb r0, 0x13c(r25)
    stw r0, 0x148(r25)
    stw r0, 0x14c(r25)
    stw r0, 0x150(r25)
lbl_fn_806F6CA0_000007FC:
    lwz r3, 0xc(r25)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_806F6CA0_00000828
    cmpwi r28, 0x0
    li r0, 0x1
    stw r0, 0x124(r25)
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_00000828:
    cmpwi r31, 0x0
    li r0, 0xa
    stw r0, 0x10(r25)
    beq lbl_fn_806F6CA0_00000860
    lwz r0, 0x12c(r25)
    cmpwi r0, 0x0
    bne lbl_fn_806F6CA0_00000860
    cmpwi r28, 0x0
    li r0, 0x1
    stw r0, 0x124(r25)
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
    b lbl_fn_806F6CA0_000008B0
lbl_fn_806F6CA0_00000860:
    cmpwi r26, 0x0
    ble lbl_fn_806F6CA0_000008A0
    mr r3, r25
    mr r4, r27
    mr r5, r26
    bl fn_806F6A30
    b lbl_fn_806F6CA0_000008A0
lbl_fn_806F6CA0_0000087C:
    cmpwi r26, 0x2
    bne lbl_fn_806F6CA0_000008A0
    li r3, 0x1
    li r0, 0x7
    stw r3, 0x124(r25)
    lwz r3, 0x50(r25)
    stw r0, 0x40(r25)
    bl fn_806D7F20
    stw r3, 0x54(r25)
lbl_fn_806F6CA0_000008A0:
    cmpwi r28, 0x0
    beq lbl_fn_806F6CA0_000008B0
    mr r3, r28
    bl fn_806D7AC0
lbl_fn_806F6CA0_000008B0:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806F72F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r30, r3
    bl fn_806D8F30
    li r26, 0x0
    stw r26, 0x8(r1)
    mr r27, r3
    li r3, 0x2000
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806F72F0_00000918
    li r0, 0x1
    stw r0, 0x124(r30)
    stw r0, 0x40(r30)
    b lbl_fn_806F72F0_00000B18
lbl_fn_806F72F0_00000918:
    li r28, 0x2000
    li r29, 0x0
    b lbl_fn_806F72F0_00000AF0
lbl_fn_806F72F0_00000924:
    stw r28, 0x8(r1)
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    bl fn_806F2A10
    cmpwi r3, 0x1
    bne lbl_fn_806F72F0_0000099C
    cmpwi r31, 0x0
    beq lbl_fn_806F72F0_00000950
    mr r3, r31
    bl fn_806D7AC0
lbl_fn_806F72F0_00000950:
    lwz r0, 0x1cc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806F72F0_00000968
    bl fn_806D8F30
    stw r3, 0x1cc(r30)
    b lbl_fn_806F72F0_00000B18
lbl_fn_806F72F0_00000968:
    bl fn_806D8F30
    lwz r0, 0x1cc(r30)
    subf r0, r0, r3
    cmplwi r0, 0x7530
    blt lbl_fn_806F72F0_00000B18
    bl fn_806D8F30
    li r4, 0x0
    li r3, 0x1
    li r0, 0x13
    stw r4, 0x1cc(r30)
    stw r3, 0x124(r30)
    stw r0, 0x40(r30)
    b lbl_fn_806F72F0_00000B18
lbl_fn_806F72F0_0000099C:
    cmpwi r3, 0x3
    stw r29, 0x1cc(r30)
    bne lbl_fn_806F72F0_000009BC
    cmpwi r31, 0x0
    beq lbl_fn_806F72F0_00000B18
    mr r3, r31
    bl fn_806D7AC0
    b lbl_fn_806F72F0_00000B18
lbl_fn_806F72F0_000009BC:
    cmpwi r3, 0x2
    bne lbl_fn_806F72F0_00000A00
    lwz r3, 0x12c(r30)
    li r0, 0x1
    stw r0, 0x124(r30)
    cmpwi r3, 0x0
    ble lbl_fn_806F72F0_000009EC
    lwz r0, 0x128(r30)
    cmpw r0, r3
    bge lbl_fn_806F72F0_000009EC
    li r0, 0xf
    stw r0, 0x40(r30)
lbl_fn_806F72F0_000009EC:
    cmpwi r31, 0x0
    beq lbl_fn_806F72F0_00000B18
    mr r3, r31
    bl fn_806D7AC0
    b lbl_fn_806F72F0_00000B18
lbl_fn_806F72F0_00000A00:
    lwz r0, 0x198(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806F72F0_00000ABC
    lwz r0, 0x1a8(r30)
    cmpwi r0, 0x1
    bne lbl_fn_806F72F0_00000ABC
    lwz r5, 0x8(r1)
    mr r4, r31
    addi r3, r30, 0xc4
    bl fn_806F2070
    cmpwi r3, 0x0
    bne lbl_fn_806F72F0_00000A44
    cmpwi r31, 0x0
    beq lbl_fn_806F72F0_00000B18
    mr r3, r31
    bl fn_806D7AC0
    b lbl_fn_806F72F0_00000B18
lbl_fn_806F72F0_00000A44:
    lwz r0, 0xb0(r30)
    mr r3, r30
    stw r0, 0xac(r30)
    bl fn_806F28C0
    cmpwi r3, 0x0
    bne lbl_fn_806F72F0_00000A80
    cmpwi r31, 0x0
    li r3, 0x1
    li r0, 0x11
    stw r3, 0x124(r30)
    stw r0, 0x40(r30)
    beq lbl_fn_806F72F0_00000B18
    mr r3, r31
    bl fn_806D7AC0
    b lbl_fn_806F72F0_00000B18
lbl_fn_806F72F0_00000A80:
    lwz r4, 0xb0(r30)
    lwz r0, 0xac(r30)
    subf. r5, r4, r0
    beq lbl_fn_806F72F0_00000AE8
    lwz r0, 0xa4(r30)
    mr r3, r30
    add r4, r0, r4
    bl fn_806F6A30
    cmpwi r3, 0x0
    bne lbl_fn_806F72F0_00000AE8
    cmpwi r31, 0x0
    beq lbl_fn_806F72F0_00000B18
    mr r3, r31
    bl fn_806D7AC0
    b lbl_fn_806F72F0_00000B18
lbl_fn_806F72F0_00000ABC:
    lwz r5, 0x8(r1)
    mr r3, r30
    mr r4, r31
    bl fn_806F6A30
    cmpwi r3, 0x0
    bne lbl_fn_806F72F0_00000AE8
    cmpwi r31, 0x0
    beq lbl_fn_806F72F0_00000B18
    mr r3, r31
    bl fn_806D7AC0
    b lbl_fn_806F72F0_00000B18
lbl_fn_806F72F0_00000AE8:
    bl fn_806D8F30
    subf r26, r27, r3
lbl_fn_806F72F0_00000AF0:
    lwz r0, 0x124(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806F72F0_00000B08
    lwz r0, 0x188(r30)
    cmplw r26, r0
    blt lbl_fn_806F72F0_00000924
lbl_fn_806F72F0_00000B08:
    cmpwi r31, 0x0
    beq lbl_fn_806F72F0_00000B18
    mr r3, r31
    bl fn_806D7AC0
lbl_fn_806F72F0_00000B18:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F7560(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    bne lbl_fn_806F7560_00000B78
    lis r3, lbl_80862140@ha
    lwz r28, lbl_80862140@l(r3)
lbl_fn_806F7560_00000B78:
    mr r3, r29
    bl fn_806D8E30
    cmpwi r30, 0x0
    li r4, 0x0
    li r0, 0x1
    stw r3, 0x20(r1)
    stw r30, 0x24(r1)
    stw r4, 0x30(r1)
    stw r0, 0x28(r1)
    bne lbl_fn_806F7560_00000BAC
    lwz r0, 0x0(r31)
    stw r0, 0x30(r1)
    b lbl_fn_806F7560_00000C20
lbl_fn_806F7560_00000BAC:
    cmpwi r30, 0x1
    bne lbl_fn_806F7560_00000BC0
    lfd f0, 0x0(r31)
    stfd f0, 0x30(r1)
    b lbl_fn_806F7560_00000C20
lbl_fn_806F7560_00000BC0:
    cmpwi r30, 0x2
    bne lbl_fn_806F7560_00000C20
    cmpwi r4, 0x0
    beq lbl_fn_806F7560_00000BD8
    li r3, 0x0
    bl fn_806D7AC0
lbl_fn_806F7560_00000BD8:
    cmpwi r31, 0x0
    bne lbl_fn_806F7560_00000BE8
    li r5, 0x0
    b lbl_fn_806F7560_00000C1C
lbl_fn_806F7560_00000BE8:
    mr r3, r31
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F7560_00000C10
lbl_fn_806F7560_00000BFC:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F7560_00000C0C
    stb r4, 0x0(r3)
lbl_fn_806F7560_00000C0C:
    addi r3, r3, 0x1
lbl_fn_806F7560_00000C10:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F7560_00000BFC
lbl_fn_806F7560_00000C1C:
    stw r5, 0x30(r1)
lbl_fn_806F7560_00000C20:
    lwz r3, 0x0(r28)
    addi r4, r1, 0x20
    bl fn_806D64B0
    cmpwi r28, 0x0
    bne lbl_fn_806F7560_00000C3C
    lis r3, lbl_80862140@ha
    lwz r28, lbl_80862140@l(r3)
lbl_fn_806F7560_00000C3C:
    stw r29, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x0(r28)
    bl fn_806D6610
    cmpwi r3, 0x0
    bne lbl_fn_806F7560_00000C5C
    li r3, 0x0
    b lbl_fn_806F7560_00000C74
lbl_fn_806F7560_00000C5C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806F7560_00000C70
    lwz r3, 0x10(r3)
    b lbl_fn_806F7560_00000C74
lbl_fn_806F7560_00000C70:
    addi r3, r3, 0x10
lbl_fn_806F7560_00000C74:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806F76C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    bne lbl_fn_806F76C0_00000CC4
    lis r3, lbl_80862140@ha
    lwz r3, lbl_80862140@l(r3)
lbl_fn_806F76C0_00000CC4:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x0(r3)
    bl fn_806D6610
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806F76C0_00000CE8
    li r3, 0x0
    b lbl_fn_806F76C0_00000DA8
lbl_fn_806F76C0_00000CE8:
    li r0, 0x0
    stw r0, 0x8(r3)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F76C0_00000D08
    lwz r0, 0x0(r30)
    stw r0, 0x10(r3)
    b lbl_fn_806F76C0_00000D80
lbl_fn_806F76C0_00000D08:
    cmpwi r0, 0x1
    bne lbl_fn_806F76C0_00000D1C
    lfd f0, 0x0(r30)
    stfd f0, 0x10(r3)
    b lbl_fn_806F76C0_00000D80
lbl_fn_806F76C0_00000D1C:
    cmpwi r0, 0x2
    bne lbl_fn_806F76C0_00000D80
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F76C0_00000D34
    bl fn_806D7AC0
lbl_fn_806F76C0_00000D34:
    cmpwi r30, 0x0
    bne lbl_fn_806F76C0_00000D44
    li r5, 0x0
    b lbl_fn_806F76C0_00000D7C
lbl_fn_806F76C0_00000D44:
    mr r3, r30
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F76C0_00000D70
    nop
lbl_fn_806F76C0_00000D5C:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F76C0_00000D6C
    stb r4, 0x0(r3)
lbl_fn_806F76C0_00000D6C:
    addi r3, r3, 0x1
lbl_fn_806F76C0_00000D70:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F76C0_00000D5C
lbl_fn_806F76C0_00000D7C:
    stw r5, 0x10(r31)
lbl_fn_806F76C0_00000D80:
    cmpwi r31, 0x0
    bne lbl_fn_806F76C0_00000D90
    li r3, 0x0
    b lbl_fn_806F76C0_00000DA8
lbl_fn_806F76C0_00000D90:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F76C0_00000DA4
    lwz r3, 0x10(r31)
    b lbl_fn_806F76C0_00000DA8
lbl_fn_806F76C0_00000DA4:
    addi r3, r31, 0x10
lbl_fn_806F76C0_00000DA8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F77F0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r5
    bne lbl_fn_806F77F0_00000E04
    lis r3, lbl_80862140@ha
    lwz r3, lbl_80862140@l(r3)
lbl_fn_806F77F0_00000E04:
    stw r4, 0x20(r1)
    addi r4, r1, 0x20
    lwz r3, 0x0(r3)
    bl fn_806D6610
    cmpwi cr1, r3, 0x0
    mr r30, r3
    bne cr1, lbl_fn_806F77F0_00000E28
    li r3, 0x0
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_00000E28:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F77F0_00000F24
    bne cr1, lbl_fn_806F77F0_00000E40
    li r6, 0x0
    b lbl_fn_806F77F0_00000E54
lbl_fn_806F77F0_00000E40:
    cmpwi r0, 0x2
    bne lbl_fn_806F77F0_00000E50
    lwz r6, 0x10(r3)
    b lbl_fn_806F77F0_00000E54
lbl_fn_806F77F0_00000E50:
    addi r6, r3, 0x10
lbl_fn_806F77F0_00000E54:
    lwz r5, 0x0(r28)
    lis r4, lbl_80862144@ha
    lwz r0, 0x0(r6)
    addi r29, r4, lbl_80862144@l
    add r0, r5, r0
    stw r0, lbl_80862144@l(r4)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806F77F0_00000E80
    stw r0, 0x10(r3)
    b lbl_fn_806F77F0_00000EF8
lbl_fn_806F77F0_00000E80:
    cmpwi r4, 0x1
    bne lbl_fn_806F77F0_00000E94
    lfd f0, 0x0(r29)
    stfd f0, 0x10(r3)
    b lbl_fn_806F77F0_00000EF8
lbl_fn_806F77F0_00000E94:
    cmpwi r4, 0x2
    bne lbl_fn_806F77F0_00000EF8
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F77F0_00000EAC
    bl fn_806D7AC0
lbl_fn_806F77F0_00000EAC:
    cmpwi r29, 0x0
    bne lbl_fn_806F77F0_00000EBC
    li r5, 0x0
    b lbl_fn_806F77F0_00000EF4
lbl_fn_806F77F0_00000EBC:
    mr r3, r29
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F77F0_00000EE8
    nop
lbl_fn_806F77F0_00000ED4:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F77F0_00000EE4
    stb r4, 0x0(r3)
lbl_fn_806F77F0_00000EE4:
    addi r3, r3, 0x1
lbl_fn_806F77F0_00000EE8:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F77F0_00000ED4
lbl_fn_806F77F0_00000EF4:
    stw r5, 0x10(r30)
lbl_fn_806F77F0_00000EF8:
    cmpwi r30, 0x0
    bne lbl_fn_806F77F0_00000F08
    li r3, 0x0
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_00000F08:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x2
    bne lbl_fn_806F77F0_00000F1C
    lwz r3, 0x10(r30)
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_00000F1C:
    addi r3, r30, 0x10
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_00000F24:
    cmpwi r0, 0x1
    bne lbl_fn_806F77F0_0000101C
    bne cr1, lbl_fn_806F77F0_00000F38
    li r5, 0x0
    b lbl_fn_806F77F0_00000F4C
lbl_fn_806F77F0_00000F38:
    cmpwi r0, 0x2
    bne lbl_fn_806F77F0_00000F48
    lwz r5, 0x10(r3)
    b lbl_fn_806F77F0_00000F4C
lbl_fn_806F77F0_00000F48:
    addi r5, r3, 0x10
lbl_fn_806F77F0_00000F4C:
    lfd f1, 0x0(r28)
    lis r4, lbl_80862148@ha
    lfd f0, 0x0(r5)
    addi r29, r4, lbl_80862148@l
    fadd f0, f1, f0
    stfd f0, lbl_80862148@l(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F77F0_00000F7C
    lwz r0, 0x0(r29)
    stw r0, 0x10(r3)
    b lbl_fn_806F77F0_00000FF0
lbl_fn_806F77F0_00000F7C:
    cmpwi r0, 0x1
    bne lbl_fn_806F77F0_00000F8C
    stfd f0, 0x10(r3)
    b lbl_fn_806F77F0_00000FF0
lbl_fn_806F77F0_00000F8C:
    cmpwi r0, 0x2
    bne lbl_fn_806F77F0_00000FF0
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F77F0_00000FA4
    bl fn_806D7AC0
lbl_fn_806F77F0_00000FA4:
    cmpwi r29, 0x0
    bne lbl_fn_806F77F0_00000FB4
    li r5, 0x0
    b lbl_fn_806F77F0_00000FEC
lbl_fn_806F77F0_00000FB4:
    mr r3, r29
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F77F0_00000FE0
    nop
lbl_fn_806F77F0_00000FCC:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F77F0_00000FDC
    stb r4, 0x0(r3)
lbl_fn_806F77F0_00000FDC:
    addi r3, r3, 0x1
lbl_fn_806F77F0_00000FE0:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F77F0_00000FCC
lbl_fn_806F77F0_00000FEC:
    stw r5, 0x10(r30)
lbl_fn_806F77F0_00000FF0:
    cmpwi r30, 0x0
    bne lbl_fn_806F77F0_00001000
    li r3, 0x0
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_00001000:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x2
    bne lbl_fn_806F77F0_00001014
    lwz r3, 0x10(r30)
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_00001014:
    addi r3, r30, 0x10
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_0000101C:
    cmpwi r31, 0x0
    bne lbl_fn_806F77F0_0000102C
    lis r3, lbl_80862140@ha
    lwz r31, lbl_80862140@l(r3)
lbl_fn_806F77F0_0000102C:
    stw r29, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x0(r31)
    bl fn_806D6610
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806F77F0_00001050
    li r3, 0x0
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_00001050:
    bne lbl_fn_806F77F0_0000105C
    li r29, 0x0
    b lbl_fn_806F77F0_00001074
lbl_fn_806F77F0_0000105C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806F77F0_00001070
    lwz r29, 0x10(r3)
    b lbl_fn_806F77F0_00001074
lbl_fn_806F77F0_00001070:
    addi r29, r3, 0x10
lbl_fn_806F77F0_00001074:
    mr r3, r28
    bl strlen
    mr r31, r3
    mr r3, r29
    bl strlen
    add r3, r3, r31
    addi r3, r3, 0x1
    bl fn_806D7A90
    mr r31, r3
    mr r4, r29
    bl strcpy
    mr r3, r31
    mr r4, r28
    bl fn_806823B0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806F77F0_000010C4
    lwz r0, 0x0(r31)
    stw r0, 0x10(r30)
    b lbl_fn_806F77F0_00001138
lbl_fn_806F77F0_000010C4:
    cmpwi r0, 0x1
    bne lbl_fn_806F77F0_000010D8
    lfd f0, 0x0(r31)
    stfd f0, 0x10(r30)
    b lbl_fn_806F77F0_00001138
lbl_fn_806F77F0_000010D8:
    cmpwi r0, 0x2
    bne lbl_fn_806F77F0_00001138
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806F77F0_000010F0
    bl fn_806D7AC0
lbl_fn_806F77F0_000010F0:
    cmpwi r31, 0x0
    bne lbl_fn_806F77F0_00001100
    li r5, 0x0
    b lbl_fn_806F77F0_00001134
lbl_fn_806F77F0_00001100:
    mr r3, r31
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F77F0_00001128
lbl_fn_806F77F0_00001114:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F77F0_00001124
    stb r4, 0x0(r3)
lbl_fn_806F77F0_00001124:
    addi r3, r3, 0x1
lbl_fn_806F77F0_00001128:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F77F0_00001114
lbl_fn_806F77F0_00001134:
    stw r5, 0x10(r30)
lbl_fn_806F77F0_00001138:
    mr r3, r31
    bl fn_806D7AC0
    cmpwi r30, 0x0
    bne lbl_fn_806F77F0_00001150
    li r3, 0x0
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_00001150:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x2
    bne lbl_fn_806F77F0_00001164
    lwz r3, 0x10(r30)
    b lbl_fn_806F77F0_00001168
lbl_fn_806F77F0_00001164:
    addi r3, r30, 0x10
lbl_fn_806F77F0_00001168:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806F7BB0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    bne lbl_fn_806F7BB0_000011B4
    lis r3, lbl_80862140@ha
    lwz r3, lbl_80862140@l(r3)
lbl_fn_806F7BB0_000011B4:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x0(r3)
    bl fn_806D6610
    cmpwi cr1, r3, 0x0
    mr r31, r3
    bne cr1, lbl_fn_806F7BB0_000011D8
    li r3, 0x0
    b lbl_fn_806F7BB0_000013EC
lbl_fn_806F7BB0_000011D8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F7BB0_000012D4
    bne cr1, lbl_fn_806F7BB0_000011F0
    li r6, 0x0
    b lbl_fn_806F7BB0_00001204
lbl_fn_806F7BB0_000011F0:
    cmpwi r0, 0x2
    bne lbl_fn_806F7BB0_00001200
    lwz r6, 0x10(r3)
    b lbl_fn_806F7BB0_00001204
lbl_fn_806F7BB0_00001200:
    addi r6, r3, 0x10
lbl_fn_806F7BB0_00001204:
    lwz r5, 0x0(r30)
    lis r4, lbl_80862144@ha
    lwz r0, 0x0(r6)
    addi r30, r4, lbl_80862144@l
    subf r0, r5, r0
    stw r0, lbl_80862144@l(r4)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806F7BB0_00001230
    stw r0, 0x10(r3)
    b lbl_fn_806F7BB0_000012A8
lbl_fn_806F7BB0_00001230:
    cmpwi r4, 0x1
    bne lbl_fn_806F7BB0_00001244
    lfd f0, 0x0(r30)
    stfd f0, 0x10(r3)
    b lbl_fn_806F7BB0_000012A8
lbl_fn_806F7BB0_00001244:
    cmpwi r4, 0x2
    bne lbl_fn_806F7BB0_000012A8
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F7BB0_0000125C
    bl fn_806D7AC0
lbl_fn_806F7BB0_0000125C:
    cmpwi r30, 0x0
    bne lbl_fn_806F7BB0_0000126C
    li r5, 0x0
    b lbl_fn_806F7BB0_000012A4
lbl_fn_806F7BB0_0000126C:
    mr r3, r30
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F7BB0_00001298
    nop
lbl_fn_806F7BB0_00001284:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F7BB0_00001294
    stb r4, 0x0(r3)
lbl_fn_806F7BB0_00001294:
    addi r3, r3, 0x1
lbl_fn_806F7BB0_00001298:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F7BB0_00001284
lbl_fn_806F7BB0_000012A4:
    stw r5, 0x10(r31)
lbl_fn_806F7BB0_000012A8:
    cmpwi r31, 0x0
    bne lbl_fn_806F7BB0_000012B8
    li r3, 0x0
    b lbl_fn_806F7BB0_000013EC
lbl_fn_806F7BB0_000012B8:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F7BB0_000012CC
    lwz r3, 0x10(r31)
    b lbl_fn_806F7BB0_000013EC
lbl_fn_806F7BB0_000012CC:
    addi r3, r31, 0x10
    b lbl_fn_806F7BB0_000013EC
lbl_fn_806F7BB0_000012D4:
    cmpwi r0, 0x1
    bne lbl_fn_806F7BB0_000013CC
    bne cr1, lbl_fn_806F7BB0_000012E8
    li r4, 0x0
    b lbl_fn_806F7BB0_000012FC
lbl_fn_806F7BB0_000012E8:
    cmpwi r0, 0x2
    bne lbl_fn_806F7BB0_000012F8
    lwz r4, 0x10(r3)
    b lbl_fn_806F7BB0_000012FC
lbl_fn_806F7BB0_000012F8:
    addi r4, r3, 0x10
lbl_fn_806F7BB0_000012FC:
    lfd f1, 0x0(r4)
    lis r4, lbl_80862148@ha
    lfd f0, 0x0(r30)
    addi r30, r4, lbl_80862148@l
    fsub f0, f1, f0
    stfd f0, lbl_80862148@l(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F7BB0_0000132C
    lwz r0, 0x0(r30)
    stw r0, 0x10(r3)
    b lbl_fn_806F7BB0_000013A0
lbl_fn_806F7BB0_0000132C:
    cmpwi r0, 0x1
    bne lbl_fn_806F7BB0_0000133C
    stfd f0, 0x10(r3)
    b lbl_fn_806F7BB0_000013A0
lbl_fn_806F7BB0_0000133C:
    cmpwi r0, 0x2
    bne lbl_fn_806F7BB0_000013A0
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F7BB0_00001354
    bl fn_806D7AC0
lbl_fn_806F7BB0_00001354:
    cmpwi r30, 0x0
    bne lbl_fn_806F7BB0_00001364
    li r5, 0x0
    b lbl_fn_806F7BB0_0000139C
lbl_fn_806F7BB0_00001364:
    mr r3, r30
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F7BB0_00001390
    nop
lbl_fn_806F7BB0_0000137C:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F7BB0_0000138C
    stb r4, 0x0(r3)
lbl_fn_806F7BB0_0000138C:
    addi r3, r3, 0x1
lbl_fn_806F7BB0_00001390:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F7BB0_0000137C
lbl_fn_806F7BB0_0000139C:
    stw r5, 0x10(r31)
lbl_fn_806F7BB0_000013A0:
    cmpwi r31, 0x0
    bne lbl_fn_806F7BB0_000013B0
    li r3, 0x0
    b lbl_fn_806F7BB0_000013EC
lbl_fn_806F7BB0_000013B0:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F7BB0_000013C4
    lwz r3, 0x10(r31)
    b lbl_fn_806F7BB0_000013EC
lbl_fn_806F7BB0_000013C4:
    addi r3, r31, 0x10
    b lbl_fn_806F7BB0_000013EC
lbl_fn_806F7BB0_000013CC:
    bne cr1, lbl_fn_806F7BB0_000013D8
    li r3, 0x0
    b lbl_fn_806F7BB0_000013EC
lbl_fn_806F7BB0_000013D8:
    cmpwi r0, 0x2
    bne lbl_fn_806F7BB0_000013E8
    lwz r3, 0x10(r3)
    b lbl_fn_806F7BB0_000013EC
lbl_fn_806F7BB0_000013E8:
    addi r3, r3, 0x10
lbl_fn_806F7BB0_000013EC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F7E30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    bne lbl_fn_806F7E30_00001434
    lis r3, lbl_80862140@ha
    lwz r3, lbl_80862140@l(r3)
lbl_fn_806F7E30_00001434:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x0(r3)
    bl fn_806D6610
    cmpwi cr1, r3, 0x0
    mr r31, r3
    bne cr1, lbl_fn_806F7E30_00001458
    li r3, 0x0
    b lbl_fn_806F7E30_0000166C
lbl_fn_806F7E30_00001458:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F7E30_00001554
    bne cr1, lbl_fn_806F7E30_00001470
    li r6, 0x0
    b lbl_fn_806F7E30_00001484
lbl_fn_806F7E30_00001470:
    cmpwi r0, 0x2
    bne lbl_fn_806F7E30_00001480
    lwz r6, 0x10(r3)
    b lbl_fn_806F7E30_00001484
lbl_fn_806F7E30_00001480:
    addi r6, r3, 0x10
lbl_fn_806F7E30_00001484:
    lwz r5, 0x0(r30)
    lis r4, lbl_80862144@ha
    lwz r0, 0x0(r6)
    addi r30, r4, lbl_80862144@l
    mullw r0, r5, r0
    stw r0, lbl_80862144@l(r4)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806F7E30_000014B0
    stw r0, 0x10(r3)
    b lbl_fn_806F7E30_00001528
lbl_fn_806F7E30_000014B0:
    cmpwi r4, 0x1
    bne lbl_fn_806F7E30_000014C4
    lfd f0, 0x0(r30)
    stfd f0, 0x10(r3)
    b lbl_fn_806F7E30_00001528
lbl_fn_806F7E30_000014C4:
    cmpwi r4, 0x2
    bne lbl_fn_806F7E30_00001528
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F7E30_000014DC
    bl fn_806D7AC0
lbl_fn_806F7E30_000014DC:
    cmpwi r30, 0x0
    bne lbl_fn_806F7E30_000014EC
    li r5, 0x0
    b lbl_fn_806F7E30_00001524
lbl_fn_806F7E30_000014EC:
    mr r3, r30
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F7E30_00001518
    nop
lbl_fn_806F7E30_00001504:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F7E30_00001514
    stb r4, 0x0(r3)
lbl_fn_806F7E30_00001514:
    addi r3, r3, 0x1
lbl_fn_806F7E30_00001518:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F7E30_00001504
lbl_fn_806F7E30_00001524:
    stw r5, 0x10(r31)
lbl_fn_806F7E30_00001528:
    cmpwi r31, 0x0
    bne lbl_fn_806F7E30_00001538
    li r3, 0x0
    b lbl_fn_806F7E30_0000166C
lbl_fn_806F7E30_00001538:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F7E30_0000154C
    lwz r3, 0x10(r31)
    b lbl_fn_806F7E30_0000166C
lbl_fn_806F7E30_0000154C:
    addi r3, r31, 0x10
    b lbl_fn_806F7E30_0000166C
lbl_fn_806F7E30_00001554:
    cmpwi r0, 0x1
    bne lbl_fn_806F7E30_0000164C
    bne cr1, lbl_fn_806F7E30_00001568
    li r5, 0x0
    b lbl_fn_806F7E30_0000157C
lbl_fn_806F7E30_00001568:
    cmpwi r0, 0x2
    bne lbl_fn_806F7E30_00001578
    lwz r5, 0x10(r3)
    b lbl_fn_806F7E30_0000157C
lbl_fn_806F7E30_00001578:
    addi r5, r3, 0x10
lbl_fn_806F7E30_0000157C:
    lfd f1, 0x0(r30)
    lis r4, lbl_80862148@ha
    lfd f0, 0x0(r5)
    addi r30, r4, lbl_80862148@l
    fmul f0, f1, f0
    stfd f0, lbl_80862148@l(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F7E30_000015AC
    lwz r0, 0x0(r30)
    stw r0, 0x10(r3)
    b lbl_fn_806F7E30_00001620
lbl_fn_806F7E30_000015AC:
    cmpwi r0, 0x1
    bne lbl_fn_806F7E30_000015BC
    stfd f0, 0x10(r3)
    b lbl_fn_806F7E30_00001620
lbl_fn_806F7E30_000015BC:
    cmpwi r0, 0x2
    bne lbl_fn_806F7E30_00001620
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F7E30_000015D4
    bl fn_806D7AC0
lbl_fn_806F7E30_000015D4:
    cmpwi r30, 0x0
    bne lbl_fn_806F7E30_000015E4
    li r5, 0x0
    b lbl_fn_806F7E30_0000161C
lbl_fn_806F7E30_000015E4:
    mr r3, r30
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F7E30_00001610
    nop
lbl_fn_806F7E30_000015FC:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F7E30_0000160C
    stb r4, 0x0(r3)
lbl_fn_806F7E30_0000160C:
    addi r3, r3, 0x1
lbl_fn_806F7E30_00001610:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F7E30_000015FC
lbl_fn_806F7E30_0000161C:
    stw r5, 0x10(r31)
lbl_fn_806F7E30_00001620:
    cmpwi r31, 0x0
    bne lbl_fn_806F7E30_00001630
    li r3, 0x0
    b lbl_fn_806F7E30_0000166C
lbl_fn_806F7E30_00001630:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F7E30_00001644
    lwz r3, 0x10(r31)
    b lbl_fn_806F7E30_0000166C
lbl_fn_806F7E30_00001644:
    addi r3, r31, 0x10
    b lbl_fn_806F7E30_0000166C
lbl_fn_806F7E30_0000164C:
    bne cr1, lbl_fn_806F7E30_00001658
    li r3, 0x0
    b lbl_fn_806F7E30_0000166C
lbl_fn_806F7E30_00001658:
    cmpwi r0, 0x2
    bne lbl_fn_806F7E30_00001668
    lwz r3, 0x10(r3)
    b lbl_fn_806F7E30_0000166C
lbl_fn_806F7E30_00001668:
    addi r3, r3, 0x10
lbl_fn_806F7E30_0000166C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F80B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    bne lbl_fn_806F80B0_000016B4
    lis r3, lbl_80862140@ha
    lwz r3, lbl_80862140@l(r3)
lbl_fn_806F80B0_000016B4:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x0(r3)
    bl fn_806D6610
    cmpwi cr1, r3, 0x0
    mr r31, r3
    bne cr1, lbl_fn_806F80B0_000016D8
    li r3, 0x0
    b lbl_fn_806F80B0_000018EC
lbl_fn_806F80B0_000016D8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F80B0_000017D4
    bne cr1, lbl_fn_806F80B0_000016F0
    li r4, 0x0
    b lbl_fn_806F80B0_00001704
lbl_fn_806F80B0_000016F0:
    cmpwi r0, 0x2
    bne lbl_fn_806F80B0_00001700
    lwz r4, 0x10(r3)
    b lbl_fn_806F80B0_00001704
lbl_fn_806F80B0_00001700:
    addi r4, r3, 0x10
lbl_fn_806F80B0_00001704:
    lwz r5, 0x0(r4)
    lis r4, lbl_80862144@ha
    lwz r0, 0x0(r30)
    addi r30, r4, lbl_80862144@l
    divw r0, r5, r0
    stw r0, lbl_80862144@l(r4)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806F80B0_00001730
    stw r0, 0x10(r3)
    b lbl_fn_806F80B0_000017A8
lbl_fn_806F80B0_00001730:
    cmpwi r4, 0x1
    bne lbl_fn_806F80B0_00001744
    lfd f0, 0x0(r30)
    stfd f0, 0x10(r3)
    b lbl_fn_806F80B0_000017A8
lbl_fn_806F80B0_00001744:
    cmpwi r4, 0x2
    bne lbl_fn_806F80B0_000017A8
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F80B0_0000175C
    bl fn_806D7AC0
lbl_fn_806F80B0_0000175C:
    cmpwi r30, 0x0
    bne lbl_fn_806F80B0_0000176C
    li r5, 0x0
    b lbl_fn_806F80B0_000017A4
lbl_fn_806F80B0_0000176C:
    mr r3, r30
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F80B0_00001798
    nop
lbl_fn_806F80B0_00001784:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F80B0_00001794
    stb r4, 0x0(r3)
lbl_fn_806F80B0_00001794:
    addi r3, r3, 0x1
lbl_fn_806F80B0_00001798:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F80B0_00001784
lbl_fn_806F80B0_000017A4:
    stw r5, 0x10(r31)
lbl_fn_806F80B0_000017A8:
    cmpwi r31, 0x0
    bne lbl_fn_806F80B0_000017B8
    li r3, 0x0
    b lbl_fn_806F80B0_000018EC
lbl_fn_806F80B0_000017B8:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F80B0_000017CC
    lwz r3, 0x10(r31)
    b lbl_fn_806F80B0_000018EC
lbl_fn_806F80B0_000017CC:
    addi r3, r31, 0x10
    b lbl_fn_806F80B0_000018EC
lbl_fn_806F80B0_000017D4:
    cmpwi r0, 0x1
    bne lbl_fn_806F80B0_000018CC
    bne cr1, lbl_fn_806F80B0_000017E8
    li r4, 0x0
    b lbl_fn_806F80B0_000017FC
lbl_fn_806F80B0_000017E8:
    cmpwi r0, 0x2
    bne lbl_fn_806F80B0_000017F8
    lwz r4, 0x10(r3)
    b lbl_fn_806F80B0_000017FC
lbl_fn_806F80B0_000017F8:
    addi r4, r3, 0x10
lbl_fn_806F80B0_000017FC:
    lfd f1, 0x0(r4)
    lis r4, lbl_80862148@ha
    lfd f0, 0x0(r30)
    addi r30, r4, lbl_80862148@l
    fdiv f0, f1, f0
    stfd f0, lbl_80862148@l(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F80B0_0000182C
    lwz r0, 0x0(r30)
    stw r0, 0x10(r3)
    b lbl_fn_806F80B0_000018A0
lbl_fn_806F80B0_0000182C:
    cmpwi r0, 0x1
    bne lbl_fn_806F80B0_0000183C
    stfd f0, 0x10(r3)
    b lbl_fn_806F80B0_000018A0
lbl_fn_806F80B0_0000183C:
    cmpwi r0, 0x2
    bne lbl_fn_806F80B0_000018A0
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F80B0_00001854
    bl fn_806D7AC0
lbl_fn_806F80B0_00001854:
    cmpwi r30, 0x0
    bne lbl_fn_806F80B0_00001864
    li r5, 0x0
    b lbl_fn_806F80B0_0000189C
lbl_fn_806F80B0_00001864:
    mr r3, r30
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F80B0_00001890
    nop
lbl_fn_806F80B0_0000187C:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F80B0_0000188C
    stb r4, 0x0(r3)
lbl_fn_806F80B0_0000188C:
    addi r3, r3, 0x1
lbl_fn_806F80B0_00001890:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F80B0_0000187C
lbl_fn_806F80B0_0000189C:
    stw r5, 0x10(r31)
lbl_fn_806F80B0_000018A0:
    cmpwi r31, 0x0
    bne lbl_fn_806F80B0_000018B0
    li r3, 0x0
    b lbl_fn_806F80B0_000018EC
lbl_fn_806F80B0_000018B0:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F80B0_000018C4
    lwz r3, 0x10(r31)
    b lbl_fn_806F80B0_000018EC
lbl_fn_806F80B0_000018C4:
    addi r3, r31, 0x10
    b lbl_fn_806F80B0_000018EC
lbl_fn_806F80B0_000018CC:
    bne cr1, lbl_fn_806F80B0_000018D8
    li r3, 0x0
    b lbl_fn_806F80B0_000018EC
lbl_fn_806F80B0_000018D8:
    cmpwi r0, 0x2
    bne lbl_fn_806F80B0_000018E8
    lwz r3, 0x10(r3)
    b lbl_fn_806F80B0_000018EC
lbl_fn_806F80B0_000018E8:
    addi r3, r3, 0x10
lbl_fn_806F80B0_000018EC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F8330(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r5
    bne lbl_fn_806F8330_0000193C
    lis r3, lbl_80862140@ha
    lwz r3, lbl_80862140@l(r3)
lbl_fn_806F8330_0000193C:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x0(r3)
    bl fn_806D6610
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806F8330_00001960
    li r3, 0x0
    b lbl_fn_806F8330_00001A78
lbl_fn_806F8330_00001960:
    bne lbl_fn_806F8330_0000196C
    li r29, 0x0
    b lbl_fn_806F8330_00001984
lbl_fn_806F8330_0000196C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806F8330_00001980
    lwz r29, 0x10(r3)
    b lbl_fn_806F8330_00001984
lbl_fn_806F8330_00001980:
    addi r29, r3, 0x10
lbl_fn_806F8330_00001984:
    mr r3, r28
    bl strlen
    mr r31, r3
    mr r3, r29
    bl strlen
    add r3, r3, r31
    addi r3, r3, 0x1
    bl fn_806D7A90
    mr r31, r3
    mr r4, r29
    bl strcpy
    mr r3, r31
    mr r4, r28
    bl fn_806823B0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806F8330_000019D4
    lwz r0, 0x0(r31)
    stw r0, 0x10(r30)
    b lbl_fn_806F8330_00001A48
lbl_fn_806F8330_000019D4:
    cmpwi r0, 0x1
    bne lbl_fn_806F8330_000019E8
    lfd f0, 0x0(r31)
    stfd f0, 0x10(r30)
    b lbl_fn_806F8330_00001A48
lbl_fn_806F8330_000019E8:
    cmpwi r0, 0x2
    bne lbl_fn_806F8330_00001A48
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806F8330_00001A00
    bl fn_806D7AC0
lbl_fn_806F8330_00001A00:
    cmpwi r31, 0x0
    bne lbl_fn_806F8330_00001A10
    li r5, 0x0
    b lbl_fn_806F8330_00001A44
lbl_fn_806F8330_00001A10:
    mr r3, r31
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F8330_00001A38
lbl_fn_806F8330_00001A24:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F8330_00001A34
    stb r4, 0x0(r3)
lbl_fn_806F8330_00001A34:
    addi r3, r3, 0x1
lbl_fn_806F8330_00001A38:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F8330_00001A24
lbl_fn_806F8330_00001A44:
    stw r5, 0x10(r30)
lbl_fn_806F8330_00001A48:
    mr r3, r31
    bl fn_806D7AC0
    cmpwi r30, 0x0
    bne lbl_fn_806F8330_00001A60
    li r3, 0x0
    b lbl_fn_806F8330_00001A78
lbl_fn_806F8330_00001A60:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x2
    bne lbl_fn_806F8330_00001A74
    lwz r3, 0x10(r30)
    b lbl_fn_806F8330_00001A78
lbl_fn_806F8330_00001A74:
    addi r3, r30, 0x10
lbl_fn_806F8330_00001A78:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806F84C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    bne lbl_fn_806F84C0_00001AC8
    lis r3, lbl_80862140@ha
    lwz r3, lbl_80862140@l(r3)
lbl_fn_806F84C0_00001AC8:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x0(r3)
    bl fn_806D6610
    cmpwi cr1, r3, 0x0
    mr r31, r3
    bne cr1, lbl_fn_806F84C0_00001AEC
    li r3, 0x0
    b lbl_fn_806F84C0_00001D5C
lbl_fn_806F84C0_00001AEC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F84C0_00001BFC
    bne cr1, lbl_fn_806F84C0_00001B04
    li r5, 0x0
    b lbl_fn_806F84C0_00001B18
lbl_fn_806F84C0_00001B04:
    cmpwi r0, 0x2
    bne lbl_fn_806F84C0_00001B14
    lwz r5, 0x10(r3)
    b lbl_fn_806F84C0_00001B18
lbl_fn_806F84C0_00001B14:
    addi r5, r3, 0x10
lbl_fn_806F84C0_00001B18:
    lwz r6, 0x8(r3)
    lis r4, lbl_80862144@ha
    lwz r5, 0x0(r5)
    addi r29, r4, lbl_80862144@l
    lwz r7, 0x0(r30)
    addi r0, r6, 0x1
    mullw r5, r6, r5
    stw r0, 0x8(r3)
    add r5, r7, r5
    divw r0, r5, r0
    stw r0, lbl_80862144@l(r4)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806F84C0_00001B58
    stw r0, 0x10(r3)
    b lbl_fn_806F84C0_00001BD0
lbl_fn_806F84C0_00001B58:
    cmpwi r4, 0x1
    bne lbl_fn_806F84C0_00001B6C
    lfd f0, 0x0(r29)
    stfd f0, 0x10(r3)
    b lbl_fn_806F84C0_00001BD0
lbl_fn_806F84C0_00001B6C:
    cmpwi r4, 0x2
    bne lbl_fn_806F84C0_00001BD0
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F84C0_00001B84
    bl fn_806D7AC0
lbl_fn_806F84C0_00001B84:
    cmpwi r29, 0x0
    bne lbl_fn_806F84C0_00001B94
    li r5, 0x0
    b lbl_fn_806F84C0_00001BCC
lbl_fn_806F84C0_00001B94:
    mr r3, r29
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F84C0_00001BC0
    nop
lbl_fn_806F84C0_00001BAC:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F84C0_00001BBC
    stb r4, 0x0(r3)
lbl_fn_806F84C0_00001BBC:
    addi r3, r3, 0x1
lbl_fn_806F84C0_00001BC0:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F84C0_00001BAC
lbl_fn_806F84C0_00001BCC:
    stw r5, 0x10(r31)
lbl_fn_806F84C0_00001BD0:
    cmpwi r31, 0x0
    bne lbl_fn_806F84C0_00001BE0
    li r3, 0x0
    b lbl_fn_806F84C0_00001D5C
lbl_fn_806F84C0_00001BE0:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F84C0_00001BF4
    lwz r3, 0x10(r31)
    b lbl_fn_806F84C0_00001D5C
lbl_fn_806F84C0_00001BF4:
    addi r3, r31, 0x10
    b lbl_fn_806F84C0_00001D5C
lbl_fn_806F84C0_00001BFC:
    cmpwi r0, 0x1
    bne lbl_fn_806F84C0_00001D3C
    bne cr1, lbl_fn_806F84C0_00001C10
    li r8, 0x0
    b lbl_fn_806F84C0_00001C24
lbl_fn_806F84C0_00001C10:
    cmpwi r0, 0x2
    bne lbl_fn_806F84C0_00001C20
    lwz r8, 0x10(r3)
    b lbl_fn_806F84C0_00001C24
lbl_fn_806F84C0_00001C20:
    addi r8, r3, 0x10
lbl_fn_806F84C0_00001C24:
    lwz r5, 0x8(r3)
    lis r6, 0x4330
    lis r7, lbl_8076B6F0@ha
    lis r4, lbl_80862148@ha
    xoris r0, r5, 0x8000
    stw r0, 0x24(r1)
    addi r5, r5, 0x1
    lfd f3, lbl_8076B6F0@l(r7)
    stw r6, 0x20(r1)
    xoris r0, r5, 0x8000
    lfd f0, 0x0(r8)
    addi r29, r4, lbl_80862148@l
    lfd f2, 0x20(r1)
    lfd f1, 0x0(r30)
    fsub f2, f2, f3
    stw r0, 0x2c(r1)
    stw r6, 0x28(r1)
    fmul f2, f2, f0
    lfd f0, 0x28(r1)
    stw r5, 0x8(r3)
    fsub f0, f0, f3
    fadd f1, f1, f2
    fdiv f0, f1, f0
    stfd f0, lbl_80862148@l(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806F84C0_00001C9C
    lwz r0, 0x0(r29)
    stw r0, 0x10(r3)
    b lbl_fn_806F84C0_00001D10
lbl_fn_806F84C0_00001C9C:
    cmpwi r0, 0x1
    bne lbl_fn_806F84C0_00001CAC
    stfd f0, 0x10(r3)
    b lbl_fn_806F84C0_00001D10
lbl_fn_806F84C0_00001CAC:
    cmpwi r0, 0x2
    bne lbl_fn_806F84C0_00001D10
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806F84C0_00001CC4
    bl fn_806D7AC0
lbl_fn_806F84C0_00001CC4:
    cmpwi r29, 0x0
    bne lbl_fn_806F84C0_00001CD4
    li r5, 0x0
    b lbl_fn_806F84C0_00001D0C
lbl_fn_806F84C0_00001CD4:
    mr r3, r29
    bl fn_806D8E30
    li r4, 0x2f
    mr r5, r3
    b lbl_fn_806F84C0_00001D00
    nop
lbl_fn_806F84C0_00001CEC:
    extsb r0, r6
    cmpwi r0, 0x5c
    bne lbl_fn_806F84C0_00001CFC
    stb r4, 0x0(r3)
lbl_fn_806F84C0_00001CFC:
    addi r3, r3, 0x1
lbl_fn_806F84C0_00001D00:
    lbz r6, 0x0(r3)
    extsb. r0, r6
    bne lbl_fn_806F84C0_00001CEC
lbl_fn_806F84C0_00001D0C:
    stw r5, 0x10(r31)
lbl_fn_806F84C0_00001D10:
    cmpwi r31, 0x0
    bne lbl_fn_806F84C0_00001D20
    li r3, 0x0
    b lbl_fn_806F84C0_00001D5C
lbl_fn_806F84C0_00001D20:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806F84C0_00001D34
    lwz r3, 0x10(r31)
    b lbl_fn_806F84C0_00001D5C
lbl_fn_806F84C0_00001D34:
    addi r3, r31, 0x10
    b lbl_fn_806F84C0_00001D5C
lbl_fn_806F84C0_00001D3C:
    bne cr1, lbl_fn_806F84C0_00001D48
    li r3, 0x0
    b lbl_fn_806F84C0_00001D5C
lbl_fn_806F84C0_00001D48:
    cmpwi r0, 0x2
    bne lbl_fn_806F84C0_00001D58
    lwz r3, 0x10(r3)
    b lbl_fn_806F84C0_00001D5C
lbl_fn_806F84C0_00001D58:
    addi r3, r3, 0x10
lbl_fn_806F84C0_00001D5C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806F87A0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_23
    lis r31, lbl_807C5B30@ha
    lis r30, lbl_80862150@ha
    addi r31, r31, lbl_807C5B30@l
    lwz r3, 0x0(r31)
    addi r30, r30, lbl_80862150@l
    cmpwi r3, -0x1
    beq lbl_fn_806F87A0_00001DBC
    li r4, 0x2
    bl fn_806D7B70
    lwz r3, 0x0(r31)
    bl fn_806D7B30
lbl_fn_806F87A0_00001DBC:
    lwz r3, 0x228(r30)
    li r0, -0x1
    stw r0, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806F87A0_00002004
    bl fn_806D58F0
    lis r4, lbl_8076B838@ha
    lwzu r23, lbl_8076B838@l(r4)
    stw r23, 0x10(r1)
    addi r28, r31, 0x18
    lwz r24, 0x4(r4)
    subi r29, r3, 0x1
    lwz r25, 0x8(r4)
    li r27, 0x3
    lwz r26, 0xc(r4)
    stw r24, 0x14(r1)
    stw r25, 0x18(r1)
    stw r26, 0x1c(r1)
    b lbl_fn_806F87A0_00001FEC
lbl_fn_806F87A0_00001E08:
    mr r5, r28
    stw r23, 0x20(r1)
    addi r6, r1, 0x20
    li r4, 0x0
    stw r24, 0x24(r1)
    stw r25, 0x28(r1)
    stw r26, 0x2c(r1)
    stw r28, 0x34(r31)
    mtctr r27
lbl_fn_806F87A0_00001E2C:
    lbz r0, 0x1(r5)
    lbz r3, 0x0(r5)
    addi r5, r5, 0x1
    extsb. r0, r0
    lbz r0, 0x0(r6)
    xor r0, r0, r3
    stb r0, 0x0(r6)
    bne lbl_fn_806F87A0_00001E50
    mr r5, r28
lbl_fn_806F87A0_00001E50:
    lbz r0, 0x1(r5)
    lbz r3, 0x0(r5)
    addi r5, r5, 0x1
    extsb. r0, r0
    lbz r0, 0x1(r6)
    xor r0, r0, r3
    stb r0, 0x1(r6)
    bne lbl_fn_806F87A0_00001E74
    mr r5, r28
lbl_fn_806F87A0_00001E74:
    lbz r0, 0x1(r5)
    lbz r3, 0x0(r5)
    addi r5, r5, 0x1
    extsb. r0, r0
    lbz r0, 0x2(r6)
    xor r0, r0, r3
    stb r0, 0x2(r6)
    bne lbl_fn_806F87A0_00001E98
    mr r5, r28
lbl_fn_806F87A0_00001E98:
    lbz r0, 0x1(r5)
    lbz r3, 0x0(r5)
    addi r5, r5, 0x1
    extsb. r0, r0
    lbz r0, 0x3(r6)
    xor r0, r0, r3
    stb r0, 0x3(r6)
    bne lbl_fn_806F87A0_00001EBC
    mr r5, r28
lbl_fn_806F87A0_00001EBC:
    lbz r0, 0x1(r5)
    lbz r3, 0x0(r5)
    addi r5, r5, 0x1
    extsb. r0, r0
    lbz r0, 0x4(r6)
    xor r0, r0, r3
    stb r0, 0x4(r6)
    bne lbl_fn_806F87A0_00001EE0
    mr r5, r28
lbl_fn_806F87A0_00001EE0:
    addi r6, r6, 0x5
    addi r4, r4, 0x4
    bdnz lbl_fn_806F87A0_00001E2C
    cmpwi r29, 0x0
    blt lbl_fn_806F87A0_00001FE8
    lwz r3, 0x228(r30)
    bl fn_806D58F0
    cmpw r29, r3
    bge lbl_fn_806F87A0_00001FE8
    lwz r3, 0x228(r30)
    mr r4, r29
    bl fn_806D5900
    lwz r12, 0x18(r3)
    mr r11, r3
    cmpwi r12, 0x0
    beq lbl_fn_806F87A0_00001FDC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806F87A0_00001F48
    cmpwi r0, 0x1
    beq lbl_fn_806F87A0_00001F68
    cmpwi r0, 0x2
    beq lbl_fn_806F87A0_00001F9C
    cmpwi r0, 0x3
    beq lbl_fn_806F87A0_00001FC4
    b lbl_fn_806F87A0_00001FDC
lbl_fn_806F87A0_00001F48:
    addi r6, r1, 0x20
    lwz r3, 0x4(r3)
    li r5, 0x0
    lwz r4, 0x8(r11)
    lwz r7, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F87A0_00001FDC
lbl_fn_806F87A0_00001F68:
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
    b lbl_fn_806F87A0_00001FDC
lbl_fn_806F87A0_00001F9C:
    lwz r3, 0x4(r3)
    li r7, 0x0
    lwz r4, 0x8(r11)
    li r8, 0x0
    lwz r5, 0xc(r11)
    lwz r6, 0x10(r11)
    lwz r9, 0x14(r11)
    mtctr r12
    bctrl
    b lbl_fn_806F87A0_00001FDC
lbl_fn_806F87A0_00001FC4:
    lwz r3, 0x4(r3)
    li r5, 0x0
    lwz r4, 0x8(r11)
    lwz r6, 0x14(r11)
    mtctr r12
    bctrl
lbl_fn_806F87A0_00001FDC:
    lwz r3, 0x228(r30)
    mr r4, r29
    bl fn_806D5C90
lbl_fn_806F87A0_00001FE8:
    subi r29, r29, 0x1
lbl_fn_806F87A0_00001FEC:
    cmpwi r29, 0x0
    bge lbl_fn_806F87A0_00001E08
    lwz r3, 0x228(r30)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x228(r30)
lbl_fn_806F87A0_00002004:
    lwz r3, 0x210(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806F87A0_00002024
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x210(r30)
    stw r0, 0x214(r30)
    stw r0, 0x218(r30)
lbl_fn_806F87A0_00002024:
    addi r11, r1, 0x60
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
