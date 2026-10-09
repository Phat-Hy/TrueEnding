#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80682428(void);
extern void fn_8069A15C(void);
extern void fn_8069A1A8(void);
extern void fn_8069A574(void);
extern void fn_8069AA08(void);
extern void fn_8069AA0C(void);
extern void fn_8069B200(void);
extern void fn_806A0DA4(void);
extern void fn_806A0DAC(void);
extern void fn_806A0E64(void);
extern void fn_806A0F4C(void);
extern void fn_806A11D4(void);
extern void fn_806A123C(void);
extern void fn_806A1248(void);
extern void fn_806A1250(void);
extern void fn_806A1258(void);
extern void fn_806A3D50(void);
extern void fn_806A3D9C(void);
extern void fn_806A3EF0(void);
extern void fn_806A4914(void);
extern void fn_806A4BF8(void);
extern void fn_806A4F3C(void);
extern void fn_806A5094(void);
extern void fn_806A515C(void);
extern void fn_806A5208(void);
extern void fn_806A54D8(void);
extern void fn_806A5844(void);
extern void fn_806A59B0(void);
extern void fn_806A5AF8(void);
extern void fn_806A5BC0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80767278[];
extern u8 lbl_807672A0[];
extern u8 lbl_807BC510[];
extern u8 lbl_807BC558[];
extern u8 lbl_807BC5B4[];

/* Small data declarations */
extern u32 lbl_8087ED60;
extern u32 lbl_8087ED64;
extern u32 lbl_8087ED6C;
extern u32 lbl_8087ED70;
extern u32 lbl_8087ED78;
extern u32 lbl_8087ED7C;
extern u32 lbl_8087ED80;

/* Function declarations */
void fn_8069C10C(void);
void fn_8069C2BC(void);
void fn_8069C3C8(void);
void fn_8069C4A4(void);
void fn_8069C63C(void);
void fn_8069C6E8(void);
void fn_8069C73C(void);
void fn_8069C7B0(void);
void fn_8069C7B4(void);
void fn_8069C7B8(void);
void fn_8069C7BC(void);
void fn_8069C7C8(void);
void fn_8069C894(void);
void fn_8069C904(void);
void fn_8069C978(void);
void fn_8069CA18(void);
void fn_8069CB3C(void);
void fn_8069CBDC(void);
void fn_8069CD58(void);
void fn_8069CE0C(void);
void fn_8069CE9C(void);
void fn_8069CF48(void);
void fn_8069D124(void);
void fn_8069D130(void);
void fn_8069D13C(void);
void fn_8069D144(void);
void fn_8069D20C(void);
void fn_8069D2EC(void);
void fn_8069D3F0(void);
void fn_8069D580(void);
void fn_8069D64C(void);
void fn_8069D6F8(void);
void fn_8069D9A0(void);
void fn_8069DB98(void);
void fn_8069DC90(void);
void fn_8069DE18(void);

asm void fn_8069C10C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    lwz r3, 0xcc(r5)
    mr r28, r5
    lwz r4, 0x28(r5)
    mr r29, r6
    li r30, 0x0
    bl fn_806A4F3C
    stw r3, 0xac(r28)
    lwz r12, 0x7e4(r26)
    cmpwi r12, 0x0
    beq lbl_fn_8069C10C_00000058
    lwz r4, 0xd4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8069C10C_00000058
    mtctr r12
    bctrl
lbl_fn_8069C10C_00000058:
    lwz r0, 0xc8(r28)
    cmpwi r0, 0x1
    bne lbl_fn_8069C10C_00000080
    lwz r3, 0xac(r28)
    lwz r4, 0xdc(r28)
    bl fn_806A5BC0
    cmpwi r3, 0x0
    beq lbl_fn_8069C10C_000000B8
    li r3, -0x3ed
    b lbl_fn_8069C10C_00000198
lbl_fn_8069C10C_00000080:
    lwz r4, 0xb0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8069C10C_000000B8
    lwz r6, 0xb8(r28)
    cmpwi r6, 0x0
    beq lbl_fn_8069C10C_000000B8
    lwz r3, 0xac(r28)
    lwz r5, 0xb4(r28)
    lwz r7, 0xbc(r28)
    bl fn_806A5844
    cmpwi r3, 0x0
    beq lbl_fn_8069C10C_000000B8
    li r3, -0x3ed
    b lbl_fn_8069C10C_00000198
lbl_fn_8069C10C_000000B8:
    lwz r4, 0xc0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8069C10C_000000E0
    lwz r3, 0xac(r28)
    lwz r5, 0xc4(r28)
    bl fn_806A59B0
    cmpwi r3, 0x0
    beq lbl_fn_8069C10C_000000FC
    li r3, -0x3ec
    b lbl_fn_8069C10C_00000198
lbl_fn_8069C10C_000000E0:
    lwz r3, 0xac(r28)
    lwz r4, 0xd8(r28)
    bl fn_806A5AF8
    cmpwi r3, 0x0
    beq lbl_fn_8069C10C_000000FC
    li r3, -0x3ec
    b lbl_fn_8069C10C_00000198
lbl_fn_8069C10C_000000FC:
    lwz r3, 0xac(r28)
    mr r4, r29
    bl fn_806A5094
    cmpwi r3, -0x1
    bge lbl_fn_8069C10C_0000018C
    li r3, -0x3e9
    b lbl_fn_8069C10C_00000198
    b lbl_fn_8069C10C_0000018C
lbl_fn_8069C10C_0000011C:
    mr r3, r27
    mr r4, r28
    bl fn_806A0DA4
    mr r31, r3
    lwz r3, 0xac(r28)
    bl fn_806A515C
    mr r29, r3
    mr r3, r26
    mr r4, r29
    bl fn_8069A1A8
    cmpwi r31, 0x0
    beq lbl_fn_8069C10C_00000150
    stw r29, 0x8(r31)
lbl_fn_8069C10C_00000150:
    cmpwi r29, -0x1
    beq lbl_fn_8069C10C_00000184
    bge lbl_fn_8069C10C_00000174
    cmpwi r29, -0x7
    beq lbl_fn_8069C10C_0000018C
    blt lbl_fn_8069C10C_00000184
    cmpwi r29, -0x3
    bge lbl_fn_8069C10C_0000018C
    b lbl_fn_8069C10C_00000184
lbl_fn_8069C10C_00000174:
    cmpwi r29, 0x1
    bge lbl_fn_8069C10C_00000184
    li r30, 0x1
    b lbl_fn_8069C10C_0000018C
lbl_fn_8069C10C_00000184:
    li r3, -0x3e9
    b lbl_fn_8069C10C_00000198
lbl_fn_8069C10C_0000018C:
    cmpwi r30, 0x0
    beq lbl_fn_8069C10C_0000011C
    li r3, 0x0
lbl_fn_8069C10C_00000198:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069C2BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r6, 0x0
    mr r30, r3
    mr r27, r5
    mr r31, r6
    addi r29, r3, 0x40
    li r28, 0x0
    ble lbl_fn_8069C2BC_000002A0
    addis r3, r3, 0x1
    lwz r0, -0x7fbc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8069C2BC_00000228
    lis r5, 0x1
    mr r3, r4
    mr r4, r29
    mr r6, r7
    addi r5, r5, -0x8000
    bl fn_806A3D50
    cmpwi r3, 0x0
    ble lbl_fn_8069C2BC_000002A4
    addis r4, r30, 0x1
    li r0, 0x0
    stw r3, -0x7fbc(r4)
    stw r0, -0x7fc0(r4)
    b lbl_fn_8069C2BC_00000228
    b lbl_fn_8069C2BC_000002A4
lbl_fn_8069C2BC_00000228:
    addis r3, r30, 0x1
    lwz r0, -0x7fbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8069C2BC_000002A0
    cmplw r31, r0
    ble lbl_fn_8069C2BC_00000244
    mr r31, r0
lbl_fn_8069C2BC_00000244:
    addis r3, r30, 0x1
    mr r5, r31
    lwz r0, -0x7fc0(r3)
    mr r3, r27
    add r4, r29, r0
    bl fn_8069C7B0
    addis r3, r30, 0x1
    lwz r0, -0x7fbc(r3)
    subf. r0, r31, r0
    stw r0, -0x7fbc(r3)
    bne lbl_fn_8069C2BC_00000290
    lis r4, 0x1
    mr r3, r29
    addi r4, r4, -0x8000
    bl fn_8069C7BC
    addis r3, r30, 0x1
    li r0, 0x0
    stw r0, -0x7fc0(r3)
    b lbl_fn_8069C2BC_0000029C
lbl_fn_8069C2BC_00000290:
    lwz r0, -0x7fc0(r3)
    add r0, r0, r31
    stw r0, -0x7fc0(r3)
lbl_fn_8069C2BC_0000029C:
    mr r28, r31
lbl_fn_8069C2BC_000002A0:
    mr r3, r28
lbl_fn_8069C2BC_000002A4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069C3C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0xac(r4)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    cmpwi r0, 0x0
    mr r30, r7
    mr r31, r8
    ble lbl_fn_8069C3C8_00000304
    mr r3, r0
    mr r4, r29
    mr r5, r30
    bl fn_806A5208
    b lbl_fn_8069C3C8_00000330
lbl_fn_8069C3C8_00000304:
    bl fn_806A0DA4
    cmpwi r3, 0x0
    beq lbl_fn_8069C3C8_00000328
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_8069C2BC
    b lbl_fn_8069C3C8_00000330
lbl_fn_8069C3C8_00000328:
    li r3, -0x3e9
    b lbl_fn_8069C3C8_00000380
lbl_fn_8069C3C8_00000330:
    cmpwi r3, 0x0
    bge lbl_fn_8069C3C8_00000380
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8069C3C8_0000034C
    li r3, -0x3ea
    b lbl_fn_8069C3C8_00000380
lbl_fn_8069C3C8_0000034C:
    lwz r0, 0xac(r27)
    cmpwi r0, 0x0
    ble lbl_fn_8069C3C8_0000036C
    addi r0, r3, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8069C3C8_0000037C
    li r3, 0x0
    b lbl_fn_8069C3C8_00000380
lbl_fn_8069C3C8_0000036C:
    cmpwi r3, -0x38
    bne lbl_fn_8069C3C8_0000037C
    li r3, 0x0
    b lbl_fn_8069C3C8_00000380
lbl_fn_8069C3C8_0000037C:
    li r3, -0x3e9
lbl_fn_8069C3C8_00000380:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069C4A4(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x60
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_26
    clrlwi. r0, r4, 27
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    beq lbl_fn_8069C4A4_000003D8
    subfic r31, r0, 0x20
    b lbl_fn_8069C4A4_000003DC
lbl_fn_8069C4A4_000003D8:
    li r31, 0x0
lbl_fn_8069C4A4_000003DC:
    addi r3, r1, 0x20
    li r30, 0x0
    li r4, 0x20
    bl fn_8069C7BC
    cmpwi r31, 0x0
    beq lbl_fn_8069C4A4_0000044C
    cmplw r31, r28
    ble lbl_fn_8069C4A4_00000400
    mr r31, r28
lbl_fn_8069C4A4_00000400:
    mr r4, r27
    mr r5, r31
    addi r3, r1, 0x20
    bl fn_8069C7B0
    mr r3, r26
    mr r5, r31
    mr r6, r29
    addi r4, r1, 0x20
    bl fn_806A3D9C
    cmpwi r3, 0x0
    ble lbl_fn_8069C4A4_00000514
    cmplw r3, r31
    mr r30, r3
    bge lbl_fn_8069C4A4_0000043C
    b lbl_fn_8069C4A4_00000514
lbl_fn_8069C4A4_0000043C:
    add r27, r27, r3
    subf r28, r3, r28
    b lbl_fn_8069C4A4_0000044C
    b lbl_fn_8069C4A4_00000514
lbl_fn_8069C4A4_0000044C:
    cmpwi r28, 0x0
    ble lbl_fn_8069C4A4_000004AC
    clrrwi. r31, r28, 5
    beq lbl_fn_8069C4A4_000004AC
    mr r3, r26
    mr r4, r27
    mr r5, r31
    mr r6, r29
    bl fn_806A3D9C
    cmpwi r3, 0x0
    ble lbl_fn_8069C4A4_00000498
    cmplw r3, r31
    add r30, r30, r3
    bge lbl_fn_8069C4A4_0000048C
    mr r3, r30
    b lbl_fn_8069C4A4_00000514
lbl_fn_8069C4A4_0000048C:
    add r27, r27, r3
    subf r28, r3, r28
    b lbl_fn_8069C4A4_000004AC
lbl_fn_8069C4A4_00000498:
    cmpwi r30, 0x0
    ble lbl_fn_8069C4A4_00000514
    mr r3, r30
    b lbl_fn_8069C4A4_00000514
    b lbl_fn_8069C4A4_00000514
lbl_fn_8069C4A4_000004AC:
    cmpwi r28, 0x0
    ble lbl_fn_8069C4A4_00000510
    clrlwi. r31, r28, 27
    beq lbl_fn_8069C4A4_00000510
    addi r3, r1, 0x20
    li r4, 0x20
    bl fn_8069C7BC
    mr r4, r27
    mr r5, r31
    addi r3, r1, 0x20
    bl fn_8069C7B0
    mr r3, r26
    mr r5, r31
    mr r6, r29
    addi r4, r1, 0x20
    bl fn_806A3D9C
    cmpwi r3, 0x0
    ble lbl_fn_8069C4A4_000004FC
    add r30, r30, r3
    b lbl_fn_8069C4A4_00000510
lbl_fn_8069C4A4_000004FC:
    cmpwi r30, 0x0
    ble lbl_fn_8069C4A4_00000514
    mr r3, r30
    b lbl_fn_8069C4A4_00000514
    b lbl_fn_8069C4A4_00000514
lbl_fn_8069C4A4_00000510:
    mr r3, r30
lbl_fn_8069C4A4_00000514:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_8069C63C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0xac(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    ble lbl_fn_8069C63C_00000564
    mr r4, r5
    mr r3, r0
    mr r5, r6
    bl fn_806A54D8
    b lbl_fn_8069C63C_00000578
lbl_fn_8069C63C_00000564:
    mr r3, r4
    mr r4, r5
    mr r5, r6
    mr r6, r7
    bl fn_8069C4A4
lbl_fn_8069C63C_00000578:
    cmpwi r3, 0x0
    bge lbl_fn_8069C63C_000005C8
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8069C63C_00000594
    li r3, -0x3ea
    b lbl_fn_8069C63C_000005C8
lbl_fn_8069C63C_00000594:
    lwz r0, 0xac(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8069C63C_000005B4
    addi r0, r3, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8069C63C_000005C4
    li r3, 0x0
    b lbl_fn_8069C63C_000005C8
lbl_fn_8069C63C_000005B4:
    cmpwi r3, -0x38
    bne lbl_fn_8069C63C_000005C4
    li r3, 0x0
    b lbl_fn_8069C63C_000005C8
lbl_fn_8069C63C_000005C4:
    li r3, -0x3e9
lbl_fn_8069C63C_000005C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069C6E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8069AA08
    cmpwi r31, 0x0
    blt lbl_fn_8069C6E8_00000610
    mr r3, r31
    li r4, 0x2
    bl fn_806A3EF0
lbl_fn_8069C6E8_00000610:
    mr r3, r30
    bl fn_8069AA0C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069C73C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r3, r4
    li r4, 0x0
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    li r5, 0x0
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r31, 0xc(r1)
    bl fn_806A4914
    cmpwi r3, 0x0
    bne lbl_fn_8069C73C_00000688
    lwz r4, 0x8(r1)
    addi r3, r1, 0xc
    li r5, 0x4
    lwz r4, 0x18(r4)
    addi r4, r4, 0x4
    bl fn_8069C7B0
    lwz r3, 0x8(r1)
    bl fn_806A4BF8
    b lbl_fn_8069C73C_0000068C
lbl_fn_8069C73C_00000688:
    stw r31, 0xc(r1)
lbl_fn_8069C73C_0000068C:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    lwz r3, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069C7B0(void)
{
    nofralloc
    b memcpy
}

asm void fn_8069C7B4(void)
{
    nofralloc
    b strlen
}

asm void fn_8069C7B8(void)
{
    nofralloc
    b fn_80682428
}

asm void fn_8069C7BC(void)
{
    nofralloc
    mr r5, r4
    li r4, 0x0
    b memset
}

asm void fn_8069C7C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r11, 0x41
    li r10, 0x0
    li r9, 0x5a
    stw r31, 0xc(r1)
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8069C7C8_00000778
lbl_fn_8069C7C8_000006DC:
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    extsb. r12, r6
    extsb r31, r0
    beq lbl_fn_8069C7C8_00000700
    cmpwi r31, 0x0
    bne lbl_fn_8069C7C8_00000718
lbl_fn_8069C7C8_00000700:
    cmpwi r12, 0x0
    bne lbl_fn_8069C7C8_00000718
    cmpwi r31, 0x0
    bne lbl_fn_8069C7C8_00000718
    li r5, 0x0
    b lbl_fn_8069C7C8_00000778
lbl_fn_8069C7C8_00000718:
    srawi r7, r31, 31
    srwi r6, r31, 31
    subfc r0, r11, r31
    adde r8, r7, r10
    srawi r7, r9, 31
    subfc r0, r31, r9
    adde r0, r7, r6
    and. r0, r8, r0
    beq lbl_fn_8069C7C8_00000740
    addi r31, r31, 0x20
lbl_fn_8069C7C8_00000740:
    srawi r7, r12, 31
    srwi r6, r12, 31
    subfc r0, r11, r12
    adde r8, r7, r10
    srawi r7, r9, 31
    subfc r0, r12, r9
    adde r0, r7, r6
    and. r0, r8, r0
    beq lbl_fn_8069C7C8_00000768
    addi r12, r12, 0x20
lbl_fn_8069C7C8_00000768:
    cmpw r12, r31
    bne lbl_fn_8069C7C8_00000778
    subi r5, r5, 0x1
    bdnz lbl_fn_8069C7C8_000006DC
lbl_fn_8069C7C8_00000778:
    lwz r31, 0xc(r1)
    mr r3, r5
    addi r1, r1, 0x10
    blr
}

asm void fn_8069C894(void)
{
    nofralloc
    lbz r0, 0x0(r3)
    addi r4, r3, 0x1
    li r3, 0x0
    extsb r0, r0
    b lbl_fn_8069C894_000007EC
lbl_fn_8069C894_0000079C:
    cmpwi r0, 0x30
    blt lbl_fn_8069C894_000007AC
    cmpwi r0, 0x39
    ble lbl_fn_8069C894_000007D4
lbl_fn_8069C894_000007AC:
    cmpwi r0, 0x41
    blt lbl_fn_8069C894_000007BC
    cmpwi r0, 0x5a
    ble lbl_fn_8069C894_000007D4
lbl_fn_8069C894_000007BC:
    cmpwi r0, 0x61
    blt lbl_fn_8069C894_000007CC
    cmpwi r0, 0x7a
    ble lbl_fn_8069C894_000007D4
lbl_fn_8069C894_000007CC:
    cmpwi r0, 0x20
    bne lbl_fn_8069C894_000007DC
lbl_fn_8069C894_000007D4:
    addi r3, r3, 0x1
    b lbl_fn_8069C894_000007E0
lbl_fn_8069C894_000007DC:
    addi r3, r3, 0x3
lbl_fn_8069C894_000007E0:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    extsb r0, r0
lbl_fn_8069C894_000007EC:
    cmpwi r0, 0x0
    bne lbl_fn_8069C894_0000079C
    blr
}

asm void fn_8069C904(void)
{
    nofralloc
    lbz r0, 0x0(r3)
    addi r5, r3, 0x1
    li r3, 0x0
    extsb r0, r0
    mtctr r4
    cmpwi r4, 0x0
    blelr
lbl_fn_8069C904_00000814:
    cmpwi r0, 0x30
    blt lbl_fn_8069C904_00000824
    cmpwi r0, 0x39
    ble lbl_fn_8069C904_0000084C
lbl_fn_8069C904_00000824:
    cmpwi r0, 0x41
    blt lbl_fn_8069C904_00000834
    cmpwi r0, 0x5a
    ble lbl_fn_8069C904_0000084C
lbl_fn_8069C904_00000834:
    cmpwi r0, 0x61
    blt lbl_fn_8069C904_00000844
    cmpwi r0, 0x7a
    ble lbl_fn_8069C904_0000084C
lbl_fn_8069C904_00000844:
    cmpwi r0, 0x20
    bne lbl_fn_8069C904_00000854
lbl_fn_8069C904_0000084C:
    addi r3, r3, 0x1
    b lbl_fn_8069C904_00000858
lbl_fn_8069C904_00000854:
    addi r3, r3, 0x3
lbl_fn_8069C904_00000858:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    extsb r0, r0
    bdnz lbl_fn_8069C904_00000814
    blr
}

asm void fn_8069C978(void)
{
    nofralloc
    extsb r0, r4
    cmpwi r0, 0x20
    bne lbl_fn_8069C978_00000888
    li r0, 0x2b
    stb r0, 0x0(r3)
    li r3, 0x1
    blr
lbl_fn_8069C978_00000888:
    cmpwi r0, 0x30
    blt lbl_fn_8069C978_00000898
    cmpwi r0, 0x39
    ble lbl_fn_8069C978_000008C0
lbl_fn_8069C978_00000898:
    extsb r0, r4
    cmpwi r0, 0x41
    blt lbl_fn_8069C978_000008AC
    cmpwi r0, 0x5a
    ble lbl_fn_8069C978_000008C0
lbl_fn_8069C978_000008AC:
    extsb r0, r4
    cmpwi r0, 0x61
    blt lbl_fn_8069C978_000008CC
    cmpwi r0, 0x7a
    bgt lbl_fn_8069C978_000008CC
lbl_fn_8069C978_000008C0:
    stb r4, 0x0(r3)
    li r3, 0x1
    blr
lbl_fn_8069C978_000008CC:
    extrwi r5, r4, 4, 24
    li r0, 0x25
    cmpwi r5, 0xa
    stb r0, 0x0(r3)
    clrlwi r4, r4, 28
    addi r0, r5, 0x37
    bge lbl_fn_8069C978_000008EC
    addi r0, r5, 0x30
lbl_fn_8069C978_000008EC:
    cmpwi r4, 0xa
    stb r0, 0x1(r3)
    addi r0, r4, 0x37
    bge lbl_fn_8069C978_00000900
    addi r0, r4, 0x30
lbl_fn_8069C978_00000900:
    stb r0, 0x2(r3)
    li r3, 0x3
    blr
}

asm void fn_8069CA18(void)
{
    nofralloc
    cmpwi r4, 0x8
    ble lbl_fn_8069CA18_0000091C
    li r3, -0x1
    blr
lbl_fn_8069CA18_0000091C:
    lbz r0, 0x0(r3)
    subi r5, r4, 0x8
    cntlzw r5, r5
    extsb r6, r0
    xori r0, r6, 0x37
    srwi r7, r5, 5
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    and. r0, r7, r0
    beq lbl_fn_8069CA18_00000954
    li r3, -0x1
    blr
lbl_fn_8069CA18_00000954:
    li r11, 0x0
    li r12, 0x0
    li r9, 0x41
    li r8, 0x0
    li r6, 0x5a
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8069CA18_00000A28
lbl_fn_8069CA18_00000974:
    lbz r0, 0x0(r3)
    extsb r10, r0
    srawi r5, r10, 31
    subfc r0, r9, r10
    srwi r4, r10, 31
    adde r7, r5, r8
    srawi r5, r6, 31
    subfc r0, r10, r6
    adde r0, r5, r4
    and. r0, r7, r0
    beq lbl_fn_8069CA18_000009A4
    addi r10, r10, 0x20
lbl_fn_8069CA18_000009A4:
    extsb r4, r10
    cmpwi r4, 0x30
    blt lbl_fn_8069CA18_000009CC
    cmpwi r4, 0x39
    bgt lbl_fn_8069CA18_000009CC
    slwi r0, r11, 4
    li r12, 0x1
    add r4, r4, r0
    subi r11, r4, 0x30
    b lbl_fn_8069CA18_00000A20
lbl_fn_8069CA18_000009CC:
    cmpwi r4, 0x61
    blt lbl_fn_8069CA18_000009F0
    cmpwi r4, 0x66
    bgt lbl_fn_8069CA18_000009F0
    slwi r0, r11, 4
    li r12, 0x1
    add r4, r4, r0
    subi r11, r4, 0x57
    b lbl_fn_8069CA18_00000A20
lbl_fn_8069CA18_000009F0:
    cmpwi r12, 0x0
    beq lbl_fn_8069CA18_00000A08
    cmpwi r4, 0x20
    beq lbl_fn_8069CA18_00000A28
    cmpwi r4, 0x0
    beq lbl_fn_8069CA18_00000A28
lbl_fn_8069CA18_00000A08:
    cmpwi r12, 0x0
    bne lbl_fn_8069CA18_00000A18
    cmpwi r4, 0x20
    beq lbl_fn_8069CA18_00000A20
lbl_fn_8069CA18_00000A18:
    li r3, -0x1
    blr
lbl_fn_8069CA18_00000A20:
    addi r3, r3, 0x1
    bdnz lbl_fn_8069CA18_00000974
lbl_fn_8069CA18_00000A28:
    mr r3, r11
    blr
}

asm void fn_8069CB3C(void)
{
    nofralloc
    cmpwi r4, 0xa
    ble lbl_fn_8069CB3C_00000A40
    li r3, -0x1
    blr
lbl_fn_8069CB3C_00000A40:
    li r5, 0x0
    li r6, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8069CB3C_00000AC8
lbl_fn_8069CB3C_00000A54:
    lbz r0, 0x0(r3)
    cmpwi r6, 0x0
    extsb r4, r0
    beq lbl_fn_8069CB3C_00000A74
    cmpwi r4, 0x20
    beq lbl_fn_8069CB3C_00000AC8
    cmpwi r4, 0x0
    beq lbl_fn_8069CB3C_00000AC8
lbl_fn_8069CB3C_00000A74:
    cmpwi r6, 0x0
    bne lbl_fn_8069CB3C_00000A84
    cmpwi r4, 0x20
    beq lbl_fn_8069CB3C_00000AC0
lbl_fn_8069CB3C_00000A84:
    cmpwi r4, 0x30
    blt lbl_fn_8069CB3C_00000A94
    cmpwi r4, 0x39
    ble lbl_fn_8069CB3C_00000A9C
lbl_fn_8069CB3C_00000A94:
    li r3, -0x1
    blr
lbl_fn_8069CB3C_00000A9C:
    mulli r0, r5, 0xa
    mr r7, r5
    li r6, 0x1
    add r4, r4, r0
    subi r5, r4, 0x30
    cmpw r7, r5
    ble lbl_fn_8069CB3C_00000AC0
    li r3, -0x1
    blr
lbl_fn_8069CB3C_00000AC0:
    addi r3, r3, 0x1
    bdnz lbl_fn_8069CB3C_00000A54
lbl_fn_8069CB3C_00000AC8:
    mr r3, r5
    blr
}

asm void fn_8069CBDC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    lis r7, lbl_80767278@ha
    lwzu r29, lbl_80767278@l(r7)
    li r0, 0x3
    mr r5, r3
    lwz r30, 0x4(r7)
    addi r28, r1, 0x8
    lwz r31, 0x8(r7)
    li r25, 0x0
    lwz r12, 0xc(r7)
    li r26, 0x0
    lwz r11, 0x10(r7)
    li r27, 0x0
    lwz r10, 0x14(r7)
    li r6, 0x30
    lwz r9, 0x18(r7)
    lwz r8, 0x1c(r7)
    lwz r7, 0x20(r7)
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    mtctr r0
lbl_fn_8069CBDC_00000B50:
    lwz r0, 0x0(r28)
    cmplw r4, r0
    blt lbl_fn_8069CBDC_00000B80
    divwu r8, r4, r0
    li r26, 0x1
    addi r25, r25, 0x1
    mullw r7, r8, r0
    addi r0, r8, 0x30
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    subf r4, r7, r4
    b lbl_fn_8069CBDC_00000B94
lbl_fn_8069CBDC_00000B80:
    cmpwi r26, 0x0
    beq lbl_fn_8069CBDC_00000B94
    stb r6, 0x0(r5)
    addi r25, r25, 0x1
    addi r5, r5, 0x1
lbl_fn_8069CBDC_00000B94:
    lwz r0, 0x4(r28)
    cmplw r4, r0
    blt lbl_fn_8069CBDC_00000BC4
    divwu r8, r4, r0
    li r26, 0x1
    addi r25, r25, 0x1
    mullw r7, r8, r0
    addi r0, r8, 0x30
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    subf r4, r7, r4
    b lbl_fn_8069CBDC_00000BD8
lbl_fn_8069CBDC_00000BC4:
    cmpwi r26, 0x0
    beq lbl_fn_8069CBDC_00000BD8
    stb r6, 0x0(r5)
    addi r25, r25, 0x1
    addi r5, r5, 0x1
lbl_fn_8069CBDC_00000BD8:
    lwz r0, 0x8(r28)
    cmplw r4, r0
    blt lbl_fn_8069CBDC_00000C08
    divwu r8, r4, r0
    li r26, 0x1
    addi r25, r25, 0x1
    mullw r7, r8, r0
    addi r0, r8, 0x30
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    subf r4, r7, r4
    b lbl_fn_8069CBDC_00000C1C
lbl_fn_8069CBDC_00000C08:
    cmpwi r26, 0x0
    beq lbl_fn_8069CBDC_00000C1C
    stb r6, 0x0(r5)
    addi r25, r25, 0x1
    addi r5, r5, 0x1
lbl_fn_8069CBDC_00000C1C:
    addi r28, r28, 0xc
    addi r27, r27, 0x2
    bdnz lbl_fn_8069CBDC_00000B50
    addi r0, r4, 0x30
    addi r11, r1, 0x50
    stbx r0, r3, r25
    addi r3, r25, 0x1
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8069CD58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r10, 0x41
    li r9, 0x0
    li r7, 0x5a
    stw r31, 0xc(r1)
    b lbl_fn_8069CD58_00000C84
lbl_fn_8069CD58_00000C64:
    extsb. r0, r31
    beq lbl_fn_8069CD58_00000C74
    cmpwi r0, 0x20
    bne lbl_fn_8069CD58_00000C7C
lbl_fn_8069CD58_00000C74:
    li r3, 0x0
    b lbl_fn_8069CD58_00000CF4
lbl_fn_8069CD58_00000C7C:
    addi r3, r3, 0x1
    addi r4, r4, 0x1
lbl_fn_8069CD58_00000C84:
    lbz r0, 0x0(r4)
    extsb r11, r0
    srawi r6, r11, 31
    subfc r0, r10, r11
    srwi r5, r11, 31
    adde r8, r6, r9
    addi r12, r11, 0x20
    srawi r6, r7, 31
    subfc r0, r11, r7
    adde r0, r6, r5
    and. r0, r8, r0
    bne lbl_fn_8069CD58_00000CB8
    mr r12, r11
lbl_fn_8069CD58_00000CB8:
    lbz r31, 0x0(r3)
    extsb r11, r31
    srawi r6, r11, 31
    subfc r0, r10, r11
    srwi r5, r11, 31
    adde r8, r6, r9
    srawi r6, r7, 31
    subfc r0, r11, r7
    adde r0, r6, r5
    and. r0, r8, r0
    beq lbl_fn_8069CD58_00000CE8
    addi r11, r11, 0x20
lbl_fn_8069CD58_00000CE8:
    cmpw r11, r12
    beq lbl_fn_8069CD58_00000C64
    li r3, -0x1
lbl_fn_8069CD58_00000CF4:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_8069CE0C(void)
{
    nofralloc
    li r12, 0x0
    li r11, 0x0
    li r9, 0x30
    li r8, 0x0
    li r6, 0x39
    mtctr r4
    cmpwi r4, 0x0
    beq lbl_fn_8069CE0C_00000D7C
lbl_fn_8069CE0C_00000D20:
    lbz r0, 0x0(r3)
    extsb r10, r0
    cmpwi r10, 0x20
    beq lbl_fn_8069CE0C_00000D74
    srawi r5, r10, 31
    srwi r4, r10, 31
    subfc r0, r9, r10
    adde r7, r5, r8
    srawi r5, r6, 31
    subfc r0, r10, r6
    adde r0, r5, r4
    and. r0, r7, r0
    beq lbl_fn_8069CE0C_00000D74
    mulli r0, r11, 0xa
    addi r12, r12, 0x1
    cmpwi r12, 0x9
    add r4, r10, r0
    subi r11, r4, 0x30
    ble lbl_fn_8069CE0C_00000D74
    li r3, -0x1
    blr
lbl_fn_8069CE0C_00000D74:
    addi r3, r3, 0x1
    bdnz lbl_fn_8069CE0C_00000D20
lbl_fn_8069CE0C_00000D7C:
    cmpwi r12, 0x0
    li r3, -0x1
    beqlr
    mr r3, r11
    blr
}

asm void fn_8069CE9C(void)
{
    nofralloc
    cmpw r4, r6
    bge lbl_fn_8069CE9C_00000DA0
    li r3, -0x1
    blr
lbl_fn_8069CE9C_00000DA0:
    subf r7, r6, r4
    mr r4, r3
    addi r10, r7, 0x1
    li r11, 0x0
    b lbl_fn_8069CE9C_00000E2C
lbl_fn_8069CE9C_00000DB4:
    lbz r7, 0x0(r5)
    lbz r0, 0x0(r4)
    extsb r7, r7
    extsb r0, r0
    cmpw r7, r0
    bne lbl_fn_8069CE9C_00000E24
    add r7, r3, r11
    subi r0, r6, 0x1
    addi r8, r7, 0x1
    li r12, 0x1
    addi r7, r5, 0x1
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_fn_8069CE9C_00000E14
lbl_fn_8069CE9C_00000DEC:
    lbz r9, 0x0(r8)
    lbz r0, 0x0(r7)
    extsb r9, r9
    extsb r0, r0
    cmpw r9, r0
    bne lbl_fn_8069CE9C_00000E14
    addi r12, r12, 0x1
    addi r7, r7, 0x1
    addi r8, r8, 0x1
    bdnz lbl_fn_8069CE9C_00000DEC
lbl_fn_8069CE9C_00000E14:
    cmpw r12, r6
    bne lbl_fn_8069CE9C_00000E24
    li r3, 0x0
    blr
lbl_fn_8069CE9C_00000E24:
    addi r11, r11, 0x1
    addi r4, r4, 0x1
lbl_fn_8069CE9C_00000E2C:
    cmpw r11, r10
    blt lbl_fn_8069CE9C_00000DB4
    li r3, -0x1
    blr
}

asm void fn_8069CF48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    lis r31, lbl_807BC510@ha
    mr r30, r28
    mr r3, r29
    addi r31, r31, lbl_807BC510@l
    bl strlen
    addi r4, r3, 0x2
    li r0, 0x3
    divwu r4, r4, r0
    cmpwi r3, 0x0
    li r27, 0x0
    ble lbl_fn_8069CF48_00000FC0
    srwi. r0, r4, 1
    mulli r27, r4, 0x3
    mtctr r0
    beq lbl_fn_8069CF48_00000F58
lbl_fn_8069CF48_00000E94:
    lbz r12, 0x0(r29)
    lbz r10, 0x1(r29)
    extsb r11, r12
    clrlslwi r9, r12, 30, 4
    srawi r11, r11, 2
    lbz r7, 0x2(r29)
    lbzx r11, r31, r11
    extsb r5, r10
    clrlslwi r8, r10, 28, 2
    add r9, r31, r9
    stb r11, 0x0(r30)
    srawi r10, r5, 4
    extsb r6, r7
    clrlwi r0, r7, 26
    lbzx r9, r10, r9
    add r5, r31, r8
    lbz r12, 0x3(r29)
    srawi r6, r6, 6
    stb r9, 0x1(r30)
    extsb r11, r12
    lbz r10, 0x4(r29)
    lbzx r5, r6, r5
    clrlslwi r9, r12, 30, 4
    lbz r7, 0x5(r29)
    srawi r11, r11, 2
    stb r5, 0x2(r30)
    extsb r5, r10
    clrlslwi r8, r10, 28, 2
    add r9, r31, r9
    lbzx r0, r31, r0
    srawi r10, r5, 4
    extsb r6, r7
    add r5, r31, r8
    stb r0, 0x3(r30)
    srawi r6, r6, 6
    clrlwi r0, r7, 26
    addi r29, r29, 0x6
    lbzx r11, r31, r11
    stb r11, 0x4(r30)
    lbzx r9, r10, r9
    stb r9, 0x5(r30)
    lbzx r5, r6, r5
    stb r5, 0x6(r30)
    lbzx r0, r31, r0
    stb r0, 0x7(r30)
    addi r30, r30, 0x8
    bdnz lbl_fn_8069CF48_00000E94
    andi. r4, r4, 0x1
    beq lbl_fn_8069CF48_00000FC0
lbl_fn_8069CF48_00000F58:
    mtctr r4
lbl_fn_8069CF48_00000F5C:
    lbz r12, 0x0(r29)
    lbz r10, 0x1(r29)
    extsb r11, r12
    lbz r7, 0x2(r29)
    srawi r11, r11, 2
    clrlslwi r9, r12, 30, 4
    lbzx r11, r31, r11
    extsb r5, r10
    clrlslwi r8, r10, 28, 2
    add r9, r31, r9
    stb r11, 0x0(r30)
    srawi r10, r5, 4
    extsb r6, r7
    add r5, r31, r8
    lbzx r9, r10, r9
    srawi r6, r6, 6
    clrlwi r0, r7, 26
    addi r29, r29, 0x3
    stb r9, 0x1(r30)
    lbzx r5, r6, r5
    stb r5, 0x2(r30)
    lbzx r0, r31, r0
    stb r0, 0x3(r30)
    addi r30, r30, 0x4
    bdnz lbl_fn_8069CF48_00000F5C
lbl_fn_8069CF48_00000FC0:
    addi r0, r3, 0x1
    cmpw r27, r0
    bne lbl_fn_8069CF48_00000FD8
    li r0, 0x3d
    stb r0, -0x1(r30)
    b lbl_fn_8069CF48_00000FF0
lbl_fn_8069CF48_00000FD8:
    addi r0, r3, 0x2
    cmpw r27, r0
    bne lbl_fn_8069CF48_00000FF0
    li r0, 0x3d
    stb r0, -0x2(r30)
    stb r0, -0x1(r30)
lbl_fn_8069CF48_00000FF0:
    li r0, 0x0
    mr r3, r28
    stb r0, 0x0(r30)
    bl strlen
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069D124(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x348(r3)
    blr
}

asm void fn_8069D130(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0x348(r3)
    blr
}

asm void fn_8069D13C(void)
{
    nofralloc
    lwz r3, 0x348(r3)
    blr
}

asm void fn_8069D144(void)
{
    nofralloc
    subi r0, r4, 0x2
    clrlwi r0, r0, 30
    lbzx r5, r3, r0
    extsb r0, r5
    cmpwi r0, 0xd
    bne lbl_fn_8069D144_00001070
    subi r0, r4, 0x1
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xd
    bne lbl_fn_8069D144_00001070
    li r3, 0x1
    blr
lbl_fn_8069D144_00001070:
    extsb r0, r5
    cmpwi r0, 0xa
    bne lbl_fn_8069D144_0000109C
    subi r0, r4, 0x1
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_fn_8069D144_0000109C
    li r3, 0x1
    blr
lbl_fn_8069D144_0000109C:
    subi r0, r4, 0x4
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xd
    bne lbl_fn_8069D144_000010F8
    subi r0, r4, 0x3
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_fn_8069D144_000010F8
    extsb r0, r5
    cmpwi r0, 0xd
    bne lbl_fn_8069D144_000010F8
    subi r0, r4, 0x1
    clrlwi r0, r0, 30
    lbzx r0, r3, r0
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_fn_8069D144_000010F8
    li r3, 0x1
    blr
lbl_fn_8069D144_000010F8:
    li r3, 0x0
    blr
}

asm void fn_8069D20C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r29, r8
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r30, r29
    b lbl_fn_8069D20C_000011BC
lbl_fn_8069D20C_00001134:
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8069D20C_00001148
    li r3, -0x1
    b lbl_fn_8069D20C_000011C8
lbl_fn_8069D20C_00001148:
    lwz r0, 0x0(r27)
    mr r31, r30
    subfic r3, r0, 0x100
    cmpw r30, r3
    ble lbl_fn_8069D20C_00001160
    mr r31, r3
lbl_fn_8069D20C_00001160:
    mr r4, r28
    mr r5, r31
    add r3, r25, r0
    bl fn_8069C7B0
    lwz r0, 0x0(r27)
    add r28, r28, r31
    subf r30, r31, r30
    add r0, r0, r31
    cmpwi r0, 0x100
    stw r0, 0x0(r27)
    bne lbl_fn_8069D20C_000011BC
    mr r3, r24
    mr r4, r26
    mr r5, r25
    li r6, 0x100
    li r7, 0x0
    bl fn_8069C63C
    cmpwi r3, 0x0
    bgt lbl_fn_8069D20C_000011B0
    b lbl_fn_8069D20C_000011C8
lbl_fn_8069D20C_000011B0:
    lwz r0, 0x0(r27)
    subf r0, r3, r0
    stw r0, 0x0(r27)
lbl_fn_8069D20C_000011BC:
    cmpwi r30, 0x0
    bgt lbl_fn_8069D20C_00001134
    mr r3, r29
lbl_fn_8069D20C_000011C8:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069D2EC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r30, 0x0
    bl fn_806A0DA4
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8069D2EC_00001224
    li r3, 0x0
    b lbl_fn_8069D2EC_000012CC
lbl_fn_8069D2EC_00001224:
    li r31, 0x0
    stw r31, 0x24(r3)
lbl_fn_8069D2EC_0000122C:
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8069D2EC_00001240
    li r3, 0x0
    b lbl_fn_8069D2EC_000012CC
lbl_fn_8069D2EC_00001240:
    stw r31, 0x28(r29)
    mr r3, r24
    mr r4, r29
    mr r5, r26
    mr r6, r30
    bl fn_806A0E64
    cmpwi r3, 0x0
    bge lbl_fn_8069D2EC_00001268
    li r3, 0x0
    b lbl_fn_8069D2EC_000012CC
lbl_fn_8069D2EC_00001268:
    lwz r4, 0x28(r29)
    lwz r3, 0x24(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8069D2EC_000012C8
    cmpwi r3, 0x0
    bne lbl_fn_8069D2EC_00001288
    li r3, 0x0
    b lbl_fn_8069D2EC_000012CC
lbl_fn_8069D2EC_00001288:
    cmpwi r28, 0x2
    add r30, r30, r4
    beq lbl_fn_8069D2EC_000012B4
    bge lbl_fn_8069D2EC_0000122C
    cmpwi r28, 0x0
    bge lbl_fn_8069D2EC_000012A4
    b lbl_fn_8069D2EC_0000122C
lbl_fn_8069D2EC_000012A4:
    lwz r0, 0x0(r27)
    add r0, r0, r4
    stw r0, 0x0(r27)
    b lbl_fn_8069D2EC_0000122C
lbl_fn_8069D2EC_000012B4:
    bl fn_8069C904
    lwz r0, 0x0(r27)
    add r0, r0, r3
    stw r0, 0x0(r27)
    b lbl_fn_8069D2EC_0000122C
lbl_fn_8069D2EC_000012C8:
    li r3, 0x1
lbl_fn_8069D2EC_000012CC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069D3F0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_19
    mr r19, r3
    mr r20, r4
    mr r21, r5
    mr r22, r6
    mr r23, r7
    mr r24, r8
    mr r25, r9
    li r29, 0x0
    bl fn_806A0DA4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8069D3F0_00001330
    li r3, 0x3
    b lbl_fn_8069D3F0_0000145C
lbl_fn_8069D3F0_00001330:
    li r30, 0x0
    stw r30, 0x24(r3)
lbl_fn_8069D3F0_00001338:
    lwz r0, 0x0(r20)
    cmpwi r0, 0x0
    beq lbl_fn_8069D3F0_0000134C
    li r3, 0x3
    b lbl_fn_8069D3F0_0000145C
lbl_fn_8069D3F0_0000134C:
    stw r30, 0x28(r26)
    mr r3, r19
    mr r4, r26
    mr r5, r22
    mr r6, r29
    bl fn_806A0E64
    cmpwi r3, 0x0
    bge lbl_fn_8069D3F0_00001374
    li r3, 0x3
    b lbl_fn_8069D3F0_0000145C
lbl_fn_8069D3F0_00001374:
    lwz r28, 0x28(r26)
    lwz r7, 0x24(r26)
    cmpwi r28, 0x0
    beq lbl_fn_8069D3F0_00001458
    cmpwi r7, 0x0
    bne lbl_fn_8069D3F0_00001394
    li r3, 0x3
    b lbl_fn_8069D3F0_0000145C
lbl_fn_8069D3F0_00001394:
    cmpwi r25, 0x2
    add r29, r29, r28
    beq lbl_fn_8069D3F0_000013E4
    bge lbl_fn_8069D3F0_00001338
    cmpwi r25, 0x0
    bge lbl_fn_8069D3F0_000013B0
    b lbl_fn_8069D3F0_00001338
lbl_fn_8069D3F0_000013B0:
    mr r3, r20
    mr r4, r21
    mr r5, r23
    mr r6, r24
    mr r8, r28
    bl fn_8069D20C
    cmpwi r3, 0x0
    bge lbl_fn_8069D3F0_000013D8
    li r3, 0x1
    b lbl_fn_8069D3F0_0000145C
lbl_fn_8069D3F0_000013D8:
    bne lbl_fn_8069D3F0_00001338
    li r3, 0x2
    b lbl_fn_8069D3F0_0000145C
lbl_fn_8069D3F0_000013E4:
    mr r31, r7
    li r27, 0x0
    b lbl_fn_8069D3F0_0000144C
lbl_fn_8069D3F0_000013F0:
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_8069C7BC
    lbz r0, 0x0(r31)
    addi r3, r1, 0x8
    extsb r4, r0
    bl fn_8069C978
    mr r8, r3
    mr r3, r20
    mr r4, r21
    mr r5, r23
    mr r6, r24
    addi r7, r1, 0x8
    bl fn_8069D20C
    cmpwi r3, 0x0
    bge lbl_fn_8069D3F0_00001438
    li r3, 0x1
    b lbl_fn_8069D3F0_0000145C
lbl_fn_8069D3F0_00001438:
    bne lbl_fn_8069D3F0_00001444
    li r3, 0x2
    b lbl_fn_8069D3F0_0000145C
lbl_fn_8069D3F0_00001444:
    addi r27, r27, 0x1
    addi r31, r31, 0x1
lbl_fn_8069D3F0_0000144C:
    cmplw r27, r28
    blt lbl_fn_8069D3F0_000013F0
    b lbl_fn_8069D3F0_00001338
lbl_fn_8069D3F0_00001458:
    li r3, 0x0
lbl_fn_8069D3F0_0000145C:
    addi r11, r1, 0x50
    bl _restgpr_19
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8069D580(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    lwz r4, 0x4(r4)
    bl fn_8069B200
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8069D580_000014C4
    lwz r0, 0x28(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8069D580_000014C4
    cmpwi r3, 0x0
    beq lbl_fn_8069D580_00001518
lbl_fn_8069D580_000014C4:
    mr r3, r29
    mr r4, r30
    bl fn_806A0DAC
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8069D580_00001520
    mr r3, r29
    bl fn_806A0F4C
    lwz r0, 0x28(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8069D580_00001520
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8069D580_00001520
    lwz r4, 0x4(r30)
    mr r3, r30
    bl fn_8069B200
    cmpwi r3, 0x0
    bne lbl_fn_8069D580_00001520
    li r31, 0x1
    b lbl_fn_8069D580_00001520
lbl_fn_8069D580_00001518:
    bne lbl_fn_8069D580_00001520
    li r31, 0x1
lbl_fn_8069D580_00001520:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069D64C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    bl fn_806A11D4
    mr r29, r3
    bl fn_806A123C
    mr r30, r3
    mr r3, r29
    bl fn_806A1250
    mr r31, r3
    mr r3, r29
    bl fn_806A1248
    lwz r3, 0x0(r3)
    cmpwi r28, 0x0
    addi r4, r31, 0x360
    lwz r3, 0xc(r3)
    bne lbl_fn_8069D64C_000015A0
    li r3, 0x0
    b lbl_fn_8069D64C_000015D4
lbl_fn_8069D64C_000015A0:
    lwz r5, 0x7d0(r30)
    mr r7, r27
    mr r8, r28
    addi r6, r26, 0x324
    bl fn_8069D20C
    cmpwi r3, 0x0
    bge lbl_fn_8069D64C_000015C4
    li r3, 0x1
    b lbl_fn_8069D64C_000015D4
lbl_fn_8069D64C_000015C4:
    cntlzw r0, r3
    extrwi r0, r0, 1, 26
    neg r0, r0
    rlwinm r3, r0, 0, 30, 30
lbl_fn_8069D64C_000015D4:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069D6F8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r28, lbl_807BC558@ha
    mr r31, r3
    addi r28, r28, lbl_807BC558@l
    bl fn_806A11D4
    mr r30, r3
    bl fn_806A1248
    lwz r4, 0x0(r3)
    mr r3, r30
    lwz r27, 0xc(r4)
    bl fn_806A1250
    mr r29, r3
    mr r3, r30
    bl fn_806A123C
    lwz r4, 0x20(r27)
    mr r30, r3
    addi r26, r29, 0x360
    addi r3, r1, 0x8
    bl fn_8069CBDC
    mr r29, r3
    mr r3, r31
    addi r4, r28, 0x0
    li r5, 0x8
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_00001668
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_00001668:
    lwz r4, 0x24(r27)
    mr r3, r31
    lwz r5, 0x14(r27)
    addi r4, r4, 0x8
    subi r5, r5, 0x8
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_0000168C
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_0000168C:
    mr r3, r31
    la r4, lbl_8087ED60
    li r5, 0x1
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_000016A8
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_000016A8:
    mr r3, r31
    mr r5, r29
    addi r4, r1, 0x8
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_000016C4
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_000016C4:
    mr r3, r31
    addi r4, r28, 0xc
    li r5, 0xb
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_000016E0
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_000016E0:
    mr r3, r31
    la r4, lbl_8087ED64
    li r5, 0x6
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_000016FC
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_000016FC:
    lwz r4, 0x24(r27)
    mr r3, r31
    lwz r5, 0x14(r27)
    addi r4, r4, 0x8
    subi r5, r5, 0x8
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_00001720
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_00001720:
    mr r3, r31
    la r4, lbl_8087ED60
    li r5, 0x1
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_0000173C
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_0000173C:
    mr r3, r31
    mr r5, r29
    addi r4, r1, 0x8
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_00001758
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_00001758:
    mr r3, r31
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_00001774
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_00001774:
    mr r3, r31
    addi r4, r28, 0x18
    li r5, 0x25
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_00001790
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_00001790:
    bl fn_806A11D4
    bl fn_806A1248
    lwz r3, 0x0(r3)
    lwz r29, 0xc(r3)
    lwz r0, 0x240(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8069D6F8_000017B4
    li r3, 0x0
    b lbl_fn_8069D6F8_0000180C
lbl_fn_8069D6F8_000017B4:
    mr r3, r31
    addi r4, r28, 0x40
    li r5, 0x1b
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_000017D0
    b lbl_fn_8069D6F8_0000180C
lbl_fn_8069D6F8_000017D0:
    lwz r5, 0x240(r29)
    mr r3, r31
    addi r4, r29, 0x1e4
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_000017EC
    b lbl_fn_8069D6F8_0000180C
lbl_fn_8069D6F8_000017EC:
    mr r3, r31
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r3, r3, r0
lbl_fn_8069D6F8_0000180C:
    cmpwi r3, 0x0
    beq lbl_fn_8069D6F8_00001818
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_00001818:
    mr r3, r31
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    lwz r6, 0x324(r31)
    cmpwi r6, 0x0
    ble lbl_fn_8069D6F8_00001864
    lwz r4, 0x7d0(r30)
    mr r3, r27
    mr r5, r26
    li r7, 0x0
    bl fn_8069C63C
    cmpwi r3, 0x0
    bge lbl_fn_8069D6F8_00001858
    li r3, 0x1
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_00001858:
    bne lbl_fn_8069D6F8_00001864
    li r3, 0x2
    b lbl_fn_8069D6F8_0000187C
lbl_fn_8069D6F8_00001864:
    li r0, 0x0
    mr r3, r26
    stw r0, 0x324(r31)
    li r4, 0x100
    bl fn_8069C7BC
    li r3, 0x0
lbl_fn_8069D6F8_0000187C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069D9A0(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_24
    bl fn_806A11D4
    mr r26, r3
    bl fn_806A1248
    mr r25, r3
    mr r3, r26
    bl fn_806A1250
    mr r24, r3
    mr r3, r26
    bl fn_806A123C
    mr r30, r3
    mr r3, r26
    bl fn_806A1258
    lwz r4, 0x0(r25)
    addi r28, r24, 0x360
    mr r29, r3
    li r25, 0x0
    lwz r27, 0xc(r4)
    li r24, 0x0
    lwz r26, 0x2c(r27)
lbl_fn_8069D9A0_000018F4:
    addi r6, r1, 0x8
    lwz r5, 0x7d0(r30)
    mr r3, r29
    mr r4, r27
    add r6, r6, r24
    subfic r7, r24, 0x200
    li r8, 0x0
    bl fn_8069C3C8
    mr r31, r3
    add r24, r24, r3
    addi r3, r1, 0x11
    li r4, 0x3
    bl fn_8069CB3C
    stw r3, 0x18(r26)
    addi r3, r1, 0x8
    la r4, lbl_8087ED70
    li r5, 0x5
    bl fn_8069C7C8
    cmpwi r3, 0x0
    bne lbl_fn_8069D9A0_00001960
    lbz r0, 0x10(r1)
    cmpwi r0, 0x20
    bne lbl_fn_8069D9A0_00001960
    lwz r0, 0x18(r26)
    cmpwi r0, 0xc8
    bne lbl_fn_8069D9A0_00001960
    li r25, 0x1
lbl_fn_8069D9A0_00001960:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    mtctr r24
    cmpwi r24, 0x0
    ble lbl_fn_8069D9A0_00001A10
lbl_fn_8069D9A0_00001978:
    cmpwi r4, 0x1
    ble lbl_fn_8069D9A0_000019A0
    lbz r0, -0x1(r3)
    cmpwi r0, 0xd
    bne lbl_fn_8069D9A0_000019A0
    lbz r0, 0x0(r3)
    cmpwi r0, 0xd
    bne lbl_fn_8069D9A0_000019A0
    li r5, 0x1
    b lbl_fn_8069D9A0_00001A04
lbl_fn_8069D9A0_000019A0:
    cmpwi r4, 0x1
    ble lbl_fn_8069D9A0_000019C8
    lbz r0, -0x1(r3)
    cmpwi r0, 0xa
    bne lbl_fn_8069D9A0_000019C8
    lbz r0, 0x0(r3)
    cmpwi r0, 0xa
    bne lbl_fn_8069D9A0_000019C8
    li r5, 0x1
    b lbl_fn_8069D9A0_00001A04
lbl_fn_8069D9A0_000019C8:
    cmpwi r4, 0x3
    ble lbl_fn_8069D9A0_00001A04
    lbz r0, -0x3(r3)
    cmpwi r0, 0xd
    bne lbl_fn_8069D9A0_00001A04
    lbz r0, -0x2(r3)
    cmpwi r0, 0xa
    bne lbl_fn_8069D9A0_00001A04
    lbz r0, -0x1(r3)
    cmpwi r0, 0xd
    bne lbl_fn_8069D9A0_00001A04
    lbz r0, 0x0(r3)
    cmpwi r0, 0xa
    bne lbl_fn_8069D9A0_00001A04
    li r5, 0x1
lbl_fn_8069D9A0_00001A04:
    addi r3, r3, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_8069D9A0_00001978
lbl_fn_8069D9A0_00001A10:
    cmpwi r5, 0x0
    beq lbl_fn_8069D9A0_00001A28
    neg r0, r25
    or r0, r0, r25
    srwi r3, r0, 31
    b lbl_fn_8069D9A0_00001A74
lbl_fn_8069D9A0_00001A28:
    cmpwi r31, 0x0
    bge lbl_fn_8069D9A0_00001A38
    li r3, 0x0
    b lbl_fn_8069D9A0_00001A74
lbl_fn_8069D9A0_00001A38:
    cmpwi r24, 0x200
    blt lbl_fn_8069D9A0_000018F4
    lwz r5, 0x7d0(r30)
    mr r3, r29
    mr r4, r27
    mr r6, r28
    li r7, 0x1
    li r8, 0x0
    bl fn_8069C3C8
    cmpwi r3, 0x0
    bge lbl_fn_8069D9A0_00001A6C
    li r3, 0x0
    b lbl_fn_8069D9A0_00001A74
lbl_fn_8069D9A0_00001A6C:
    beq lbl_fn_8069D9A0_000018F4
    li r3, 0x0
lbl_fn_8069D9A0_00001A74:
    addi r11, r1, 0x230
    bl _restgpr_24
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_8069DB98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_806A11D4
    bl fn_806A1248
    lwz r3, 0x0(r3)
    lwz r31, 0xc(r3)
    addi r3, r31, 0x30
    bl fn_8069A574
    mr r30, r3
    b lbl_fn_8069DB98_00001B5C
lbl_fn_8069DB98_00001AC8:
    lwz r3, 0x8(r30)
    bl fn_8069C7B4
    lwz r4, 0x8(r30)
    mr r5, r3
    mr r3, r29
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DB98_00001AEC
    b lbl_fn_8069DB98_00001B68
lbl_fn_8069DB98_00001AEC:
    mr r3, r29
    la r4, lbl_8087ED78
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DB98_00001B08
    b lbl_fn_8069DB98_00001B68
lbl_fn_8069DB98_00001B08:
    lwz r3, 0xc(r30)
    bl fn_8069C7B4
    lwz r4, 0xc(r30)
    mr r5, r3
    mr r3, r29
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DB98_00001B2C
    b lbl_fn_8069DB98_00001B68
lbl_fn_8069DB98_00001B2C:
    mr r3, r29
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DB98_00001B48
    b lbl_fn_8069DB98_00001B68
lbl_fn_8069DB98_00001B48:
    mr r3, r30
    bl fn_8069A15C
    addi r3, r31, 0x30
    bl fn_8069A574
    mr r30, r3
lbl_fn_8069DB98_00001B5C:
    cmpwi r30, 0x0
    bne lbl_fn_8069DB98_00001AC8
    li r3, 0x0
lbl_fn_8069DB98_00001B68:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069DC90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    bl fn_806A11D4
    mr r31, r3
    bl fn_806A1258
    mr r29, r3
    mr r3, r31
    bl fn_806A1248
    lwz r4, 0x0(r3)
    mr r3, r31
    lwz r28, 0xc(r4)
    bl fn_806A1250
    mr r30, r3
    mr r3, r31
    bl fn_806A123C
    li r0, 0x0
    mr r31, r3
    stw r0, 0x8(r1)
    addi r30, r30, 0x360
    lwz r0, 0x24c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8069DC90_00001C14
    mr r3, r29
    mr r4, r28
    addi r6, r1, 0x8
    li r5, 0x0
    li r7, 0x0
    bl fn_8069D2EC
    cmpwi r3, 0x0
    bne lbl_fn_8069DC90_00001C1C
    li r3, 0x3
    b lbl_fn_8069DC90_00001CF4
lbl_fn_8069DC90_00001C14:
    lwz r0, 0x250(r28)
    stw r0, 0x8(r1)
lbl_fn_8069DC90_00001C1C:
    lwz r4, 0x8(r1)
    addi r3, r1, 0xc
    bl fn_8069CBDC
    lis r4, lbl_807BC5B4@ha
    mr r27, r3
    mr r3, r26
    li r5, 0x10
    addi r4, r4, lbl_807BC5B4@l
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DC90_00001C4C
    b lbl_fn_8069DC90_00001CF4
lbl_fn_8069DC90_00001C4C:
    mr r3, r26
    mr r5, r27
    addi r4, r1, 0xc
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DC90_00001C68
    b lbl_fn_8069DC90_00001CF4
lbl_fn_8069DC90_00001C68:
    mr r3, r26
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DC90_00001C84
    b lbl_fn_8069DC90_00001CF4
lbl_fn_8069DC90_00001C84:
    mr r3, r26
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DC90_00001CA0
    b lbl_fn_8069DC90_00001CF4
lbl_fn_8069DC90_00001CA0:
    lwz r4, 0x24c(r28)
    cmpwi r4, 0x0
    bne lbl_fn_8069DC90_00001CD8
    lwz r7, 0x7d0(r31)
    mr r3, r29
    mr r4, r28
    mr r5, r30
    addi r8, r26, 0x324
    li r6, 0x0
    li r9, 0x0
    bl fn_8069D3F0
    cmpwi r3, 0x0
    beq lbl_fn_8069DC90_00001CF0
    b lbl_fn_8069DC90_00001CF4
lbl_fn_8069DC90_00001CD8:
    lwz r5, 0x250(r28)
    mr r3, r26
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DC90_00001CF0
    b lbl_fn_8069DC90_00001CF4
lbl_fn_8069DC90_00001CF0:
    li r3, 0x0
lbl_fn_8069DC90_00001CF4:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069DE18(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lis r30, lbl_807672A0@ha
    mr r26, r3
    addi r30, r30, lbl_807672A0@l
    bl fn_806A11D4
    mr r25, r3
    bl fn_806A1258
    mr r29, r3
    mr r3, r25
    bl fn_806A1248
    lwz r4, 0x0(r3)
    mr r3, r25
    lwz r28, 0xc(r4)
    bl fn_806A1250
    mr r27, r3
    mr r3, r25
    bl fn_806A123C
    li r4, 0x0
    mr r31, r3
    stw r4, 0x8(r1)
    addi r27, r27, 0x360
    lwz r25, 0x34(r28)
    b lbl_fn_8069DE18_00001E10
lbl_fn_8069DE18_00001D78:
    addi r4, r4, 0x16
    stw r4, 0x8(r1)
    lwz r3, 0x8(r25)
    bl fn_8069C7B4
    lwz r0, 0x8(r1)
    add r3, r3, r0
    addi r4, r3, 0x29
    stw r4, 0x8(r1)
    lwz r0, 0x14(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8069DE18_00001DA8
    addi r4, r4, 0x4b
lbl_fn_8069DE18_00001DA8:
    addi r3, r4, 0x2
    stw r3, 0x8(r1)
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8069DE18_00001DE4
    lwz r5, 0x8(r25)
    mr r3, r29
    mr r4, r28
    addi r6, r1, 0x8
    li r7, 0x1
    bl fn_8069D2EC
    cmpwi r3, 0x0
    bne lbl_fn_8069DE18_00001DF0
    li r3, 0x3
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001DE4:
    lwz r0, 0x10(r25)
    add r4, r3, r0
    stw r4, 0x8(r1)
lbl_fn_8069DE18_00001DF0:
    lwz r3, 0x8(r1)
    addi r4, r3, 0x2
    stw r4, 0x8(r1)
    lwz r3, 0x34(r28)
    lwz r0, 0x0(r3)
    cmplw r25, r0
    beq lbl_fn_8069DE18_00001E18
    lwz r25, 0x4(r25)
lbl_fn_8069DE18_00001E10:
    cmpwi r25, 0x0
    bne lbl_fn_8069DE18_00001D78
lbl_fn_8069DE18_00001E18:
    addi r4, r4, 0x18
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    bl fn_8069CBDC
    mr r25, r3
    mr r3, r26
    addi r4, r30, 0xa8
    li r5, 0x2c
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001E48
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001E48:
    mr r3, r26
    addi r4, r28, 0x3a
    li r5, 0x12
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001E64
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001E64:
    mr r3, r26
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001E80
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001E80:
    lis r4, lbl_807BC5B4@ha
    mr r3, r26
    addi r4, r4, lbl_807BC5B4@l
    li r5, 0x10
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001EA0
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001EA0:
    mr r3, r26
    mr r5, r25
    addi r4, r1, 0xc
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001EBC
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001EBC:
    mr r3, r26
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001ED8
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001ED8:
    mr r3, r26
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001EF4
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001EF4:
    lwz r25, 0x34(r28)
    b lbl_fn_8069DE18_00002054
lbl_fn_8069DE18_00001EFC:
    mr r3, r26
    addi r4, r28, 0x38
    li r5, 0x14
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001F18
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001F18:
    mr r3, r26
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001F34
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001F34:
    mr r3, r26
    addi r4, r30, 0x0
    li r5, 0x26
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001F50
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001F50:
    lwz r3, 0x8(r25)
    bl fn_8069C7B4
    lwz r4, 0x8(r25)
    mr r5, r3
    mr r3, r26
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001F74
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001F74:
    mr r3, r26
    la r4, lbl_8087ED7C
    li r5, 0x3
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001F90
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001F90:
    lwz r0, 0x14(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8069DE18_00001FB8
    mr r3, r26
    addi r4, r30, 0x28
    li r5, 0x4b
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001FB8
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001FB8:
    mr r3, r26
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00001FD4
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00001FD4:
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    bne lbl_fn_8069DE18_0000200C
    lwz r6, 0x8(r25)
    mr r3, r29
    lwz r7, 0x7d0(r31)
    mr r4, r28
    mr r5, r27
    addi r8, r26, 0x324
    li r9, 0x1
    bl fn_8069D3F0
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00002024
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_0000200C:
    lwz r5, 0x10(r25)
    mr r3, r26
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00002024
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00002024:
    mr r3, r26
    la r4, lbl_8087ED6C
    li r5, 0x2
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00002040
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00002040:
    lwz r3, 0x34(r28)
    lwz r0, 0x0(r3)
    cmplw r25, r0
    beq lbl_fn_8069DE18_0000205C
    lwz r25, 0x4(r25)
lbl_fn_8069DE18_00002054:
    cmpwi r25, 0x0
    bne lbl_fn_8069DE18_00001EFC
lbl_fn_8069DE18_0000205C:
    mr r3, r26
    addi r4, r28, 0x38
    li r5, 0x14
    bl fn_8069D64C
    cmpwi r3, 0x0
    beq lbl_fn_8069DE18_00002078
    b lbl_fn_8069DE18_00002098
lbl_fn_8069DE18_00002078:
    mr r3, r26
    la r4, lbl_8087ED80
    li r5, 0x4
    bl fn_8069D64C
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    and r3, r3, r0
lbl_fn_8069DE18_00002098:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
