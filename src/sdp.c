#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_80629890(void);
extern void fn_80629E20(void);
extern void fn_80629E90(void);
extern void fn_806373C8(void);
extern void fn_80642174(void);
extern void fn_806423A0(void);
extern void fn_806425D4(void);
extern void fn_80642764(void);
extern void fn_8064281C(void);
extern void fn_806428EC(void);
extern void fn_80642990(void);
extern void fn_80642A34(void);
extern void fn_80653D44(void);
extern void fn_8067E23C(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807B8470[];
extern u8 jumptable_807B8838[];
extern u8 jumptable_807B88D0[];
extern u8 jumptable_807B88F0[];
extern u8 jumptable_807B8910[];
extern u8 lbl_807650A8[];
extern u8 lbl_807B8250[];
extern u8 lbl_807B82A0[];
extern u8 lbl_807B82DC[];
extern u8 lbl_807B8310[];
extern u8 lbl_807B8338[];
extern u8 lbl_807B8360[];
extern u8 lbl_807B8388[];
extern u8 lbl_807B8498[];
extern u8 lbl_807B8510[];
extern u8 lbl_807B85D0[];
extern u8 lbl_807B85FC[];
extern u8 lbl_807B8654[];
extern u8 lbl_807B8670[];
extern u8 lbl_807B869C[];
extern u8 lbl_807B86C0[];
extern u8 lbl_807B86F8[];
extern u8 lbl_807B8770[];
extern u8 lbl_807B87A0[];
extern u8 lbl_807B87C8[];
extern u8 lbl_807B87F8[];
extern u8 lbl_807B881C[];
extern u8 lbl_807B887C[];
extern u8 lbl_807B88B4[];
extern u8 lbl_80823CE0[];

/* Small data declarations */

/* Function declarations */
void fn_8064E72C(void);
void fn_8064EAA4(void);
void fn_8064EB00(void);
void fn_8064EB64(void);
void fn_8064EB8C(void);
void fn_8064EC58(void);
void fn_8064ED60(void);
void fn_8064F0C0(void);
void fn_8064F570(void);
void fn_8064F594(void);
void fn_8064F6D0(void);
void fn_8064F7A8(void);
void fn_8064F804(void);
void fn_8064F844(void);
void fn_8064F924(void);
void fn_8064FA38(void);
void fn_8064FDD0(void);
void fn_8064FEA8(void);
void fn_80650024(void);
void fn_80650260(void);
void fn_8065034C(void);
void fn_8065047C(void);
void fn_806504B0(void);
void fn_806505F0(void);
void fn_80650738(void);
void fn_806509E0(void);
void fn_80650CB4(void);
void fn_80650EA0(void);
void fn_80650F40(void);
void fn_806514D8(void);
void fn_80651678(void);
void fn_8065173C(void);
void fn_806518CC(void);
void fn_80651A08(void);
void fn_80651B84(void);
void fn_80651C7C(void);
void fn_80651D50(void);
void fn_80651E64(void);
void fn_80651F00(void);
void fn_80651FBC(void);
void fn_80652044(void);
void fn_80652198(void);
void fn_806525A8(void);
void fn_80652938(void);
void fn_80652D54(void);
void fn_80652DE4(void);
void fn_80652E58(void);
void fn_80652E90(void);
void fn_80653060(void);
void fn_806531B4(void);
void fn_806532F0(void);
void fn_80653640(void);
void fn_80653890(void);
void fn_80653960(void);
void fn_80653A40(void);
void fn_80653CB4(void);

asm void fn_8064E72C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r27, r3
    mr r26, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    beq lbl_fn_8064E72C_0000004C
    cmplwi r4, 0x6c
    blt lbl_fn_8064E72C_0000004C
    cmplwi r7, 0xc
    bgt lbl_fn_8064E72C_0000004C
    cmplwi r5, 0x3
    ble lbl_fn_8064E72C_00000088
lbl_fn_8064E72C_0000004C:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064E72C_00000080
    lis r4, lbl_807B8250@ha
    mr r5, r27
    mr r6, r26
    mr r7, r28
    mr r8, r30
    addi r4, r4, lbl_807B8250@l
    lis r3, 0xa
    bl fn_80629890
lbl_fn_8064E72C_00000080:
    li r3, 0x0
    b lbl_fn_8064E72C_00000360
lbl_fn_8064E72C_00000088:
    mr r5, r26
    li r4, 0x0
    bl memset
    subi r5, r26, 0x6c
    addi r0, r27, 0x6c
    li r3, 0x0
    cmpwi r28, 0x0
    stw r5, 0x0(r27)
    li r4, 0x0
    stw r5, 0x4(r27)
    stw r3, 0x8(r27)
    stw r0, 0x68(r27)
    beq lbl_fn_8064E72C_00000290
    cmplwi r28, 0x8
    addis r3, r28, 0x1
    subi r3, r3, 0x8
    ble lbl_fn_8064E72C_0000023C
    clrlwi r3, r3, 16
    addi r0, r3, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_8064E72C_0000023C
lbl_fn_8064E72C_000000E4:
    clrlwi r0, r4, 16
    lwz r5, 0x0(r29)
    mulli r3, r0, 0x14
    lwz r0, 0x4(r29)
    addi r4, r4, 0x8
    add r3, r27, r3
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r5, 0x8(r29)
    lwz r0, 0xc(r29)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, 0x10(r29)
    stw r0, 0x20(r3)
    lwz r5, 0x14(r29)
    lwz r0, 0x18(r29)
    stw r5, 0x24(r3)
    stw r0, 0x28(r3)
    lwz r5, 0x1c(r29)
    lwz r0, 0x20(r29)
    stw r5, 0x2c(r3)
    stw r0, 0x30(r3)
    lwz r0, 0x24(r29)
    stw r0, 0x34(r3)
    lwz r5, 0x28(r29)
    lwz r0, 0x2c(r29)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r5, 0x30(r29)
    lwz r0, 0x34(r29)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x38(r29)
    stw r0, 0x48(r3)
    lwz r5, 0x3c(r29)
    lwz r0, 0x40(r29)
    stw r5, 0x4c(r3)
    stw r0, 0x50(r3)
    lwz r5, 0x44(r29)
    lwz r0, 0x48(r29)
    stw r5, 0x54(r3)
    stw r0, 0x58(r3)
    lwz r0, 0x4c(r29)
    stw r0, 0x5c(r3)
    lwz r5, 0x50(r29)
    lwz r0, 0x54(r29)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r5, 0x58(r29)
    lwz r0, 0x5c(r29)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x60(r29)
    stw r0, 0x70(r3)
    lwz r5, 0x64(r29)
    lwz r0, 0x68(r29)
    stw r5, 0x74(r3)
    stw r0, 0x78(r3)
    lwz r5, 0x6c(r29)
    lwz r0, 0x70(r29)
    stw r5, 0x7c(r3)
    stw r0, 0x80(r3)
    lwz r0, 0x74(r29)
    stw r0, 0x84(r3)
    lwz r5, 0x78(r29)
    lwz r0, 0x7c(r29)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r5, 0x80(r29)
    lwz r0, 0x84(r29)
    stw r5, 0x90(r3)
    stw r0, 0x94(r3)
    lwz r0, 0x88(r29)
    stw r0, 0x98(r3)
    lwz r5, 0x8c(r29)
    lwz r0, 0x90(r29)
    stw r5, 0x9c(r3)
    stw r0, 0xa0(r3)
    lwz r5, 0x94(r29)
    lwz r0, 0x98(r29)
    stw r5, 0xa4(r3)
    stw r0, 0xa8(r3)
    lwz r0, 0x9c(r29)
    addi r29, r29, 0xa0
    stw r0, 0xac(r3)
    bdnz lbl_fn_8064E72C_000000E4
lbl_fn_8064E72C_0000023C:
    clrlwi r3, r4, 16
    subf r0, r3, r28
    mtctr r0
    cmplw r3, r28
    bge lbl_fn_8064E72C_00000290
lbl_fn_8064E72C_00000250:
    clrlwi r0, r4, 16
    lwz r3, 0x0(r29)
    mulli r5, r0, 0x14
    lwz r0, 0x4(r29)
    addi r4, r4, 0x1
    add r5, r27, r5
    stw r3, 0x10(r5)
    stw r0, 0x14(r5)
    lwz r3, 0x8(r29)
    lwz r0, 0xc(r29)
    stw r3, 0x18(r5)
    stw r0, 0x1c(r5)
    lwz r0, 0x10(r29)
    addi r29, r29, 0x14
    stw r0, 0x20(r5)
    bdnz lbl_fn_8064E72C_00000250
lbl_fn_8064E72C_00000290:
    cmpwi r30, 0x0
    sth r28, 0xc(r27)
    li r5, 0x0
    beq lbl_fn_8064E72C_0000034C
    cmplwi r30, 0x8
    addis r3, r30, 0x1
    subi r3, r3, 0x8
    ble lbl_fn_8064E72C_0000031C
    clrlwi r3, r3, 16
    addi r0, r3, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_8064E72C_0000031C
lbl_fn_8064E72C_000002C8:
    clrlslwi r3, r5, 16, 1
    lhz r0, 0x0(r31)
    add r3, r27, r3
    addi r5, r5, 0x8
    sth r0, 0x4e(r3)
    lhz r0, 0x2(r31)
    sth r0, 0x50(r3)
    lhz r0, 0x4(r31)
    sth r0, 0x52(r3)
    lhz r0, 0x6(r31)
    sth r0, 0x54(r3)
    lhz r0, 0x8(r31)
    sth r0, 0x56(r3)
    lhz r0, 0xa(r31)
    sth r0, 0x58(r3)
    lhz r0, 0xc(r31)
    sth r0, 0x5a(r3)
    lhz r0, 0xe(r31)
    addi r31, r31, 0x10
    sth r0, 0x5c(r3)
    bdnz lbl_fn_8064E72C_000002C8
lbl_fn_8064E72C_0000031C:
    clrlwi r3, r5, 16
    subf r0, r3, r30
    mtctr r0
    cmplw r3, r30
    bge lbl_fn_8064E72C_0000034C
lbl_fn_8064E72C_00000330:
    clrlslwi r0, r5, 16, 1
    lhz r4, 0x0(r31)
    add r3, r27, r0
    addi r5, r5, 0x1
    sth r4, 0x4e(r3)
    addi r31, r31, 0x2
    bdnz lbl_fn_8064E72C_00000330
lbl_fn_8064E72C_0000034C:
    mr r3, r30
    mr r4, r27
    bl fn_80653D44
    sth r30, 0x4c(r27)
    li r3, 0x1
lbl_fn_8064E72C_00000360:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064EAA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_80651D50
    cmpwi r3, 0x0
    bne lbl_fn_8064EAA4_000003A8
    li r3, 0x0
    b lbl_fn_8064EAA4_000003BC
lbl_fn_8064EAA4_000003A8:
    li r0, 0x0
    stb r0, 0x474(r3)
    stw r30, 0x410(r3)
    stw r31, 0x414(r3)
    li r3, 0x1
lbl_fn_8064EAA4_000003BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064EB00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_80651D50
    cmpwi r3, 0x0
    bne lbl_fn_8064EB00_00000404
    li r3, 0x0
    b lbl_fn_8064EB00_00000420
lbl_fn_8064EB00_00000404:
    li r4, 0x0
    li r0, 0x1
    stb r4, 0x474(r3)
    stw r30, 0x410(r3)
    stw r31, 0x414(r3)
    stb r0, 0x475(r3)
    li r3, 0x1
lbl_fn_8064EB00_00000420:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064EB64(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    b lbl_fn_8064EB64_00000450
lbl_fn_8064EB64_00000440:
    lhz r0, 0x4(r3)
    cmplw r0, r4
    beqlr
    lwz r3, 0x0(r3)
lbl_fn_8064EB64_00000450:
    cmpwi r3, 0x0
    bne lbl_fn_8064EB64_00000440
    li r3, 0x0
    blr
}

asm void fn_8064EB8C(void)
{
    nofralloc
    cmpwi r5, 0x0
    bne lbl_fn_8064EB8C_00000470
    lwz r3, 0x8(r3)
    b lbl_fn_8064EB8C_0000051C
lbl_fn_8064EB8C_00000470:
    lwz r3, 0x4(r5)
    b lbl_fn_8064EB8C_0000051C
lbl_fn_8064EB8C_00000478:
    lwz r6, 0x0(r3)
    b lbl_fn_8064EB8C_00000510
lbl_fn_8064EB8C_00000480:
    lhz r5, 0x4(r6)
    cmplwi r5, 0x1
    bne lbl_fn_8064EB8C_000004DC
    lhz r0, 0x6(r6)
    srawi r0, r0, 12
    cmpwi r0, 0x6
    bne lbl_fn_8064EB8C_000004DC
    lwz r6, 0x8(r6)
    b lbl_fn_8064EB8C_000004D0
lbl_fn_8064EB8C_000004A4:
    lhz r5, 0x6(r6)
    srawi r0, r5, 12
    cmpwi r0, 0x3
    bne lbl_fn_8064EB8C_000004CC
    clrlwi r0, r5, 20
    cmpwi r0, 0x2
    bne lbl_fn_8064EB8C_000004CC
    lhz r0, 0x8(r6)
    cmplw r0, r4
    beqlr
lbl_fn_8064EB8C_000004CC:
    lwz r6, 0x0(r6)
lbl_fn_8064EB8C_000004D0:
    cmpwi r6, 0x0
    bne lbl_fn_8064EB8C_000004A4
    b lbl_fn_8064EB8C_00000518
lbl_fn_8064EB8C_000004DC:
    cmplwi r5, 0x3
    bne lbl_fn_8064EB8C_0000050C
    lhz r5, 0x6(r6)
    srawi r0, r5, 12
    cmpwi r0, 0x3
    bne lbl_fn_8064EB8C_0000050C
    clrlwi r0, r5, 20
    cmpwi r0, 0x2
    bne lbl_fn_8064EB8C_0000050C
    lhz r0, 0x8(r6)
    cmplw r0, r4
    beqlr
lbl_fn_8064EB8C_0000050C:
    lwz r6, 0x0(r6)
lbl_fn_8064EB8C_00000510:
    cmpwi r6, 0x0
    bne lbl_fn_8064EB8C_00000480
lbl_fn_8064EB8C_00000518:
    lwz r3, 0x4(r3)
lbl_fn_8064EB8C_0000051C:
    cmpwi r3, 0x0
    bne lbl_fn_8064EB8C_00000478
    li r3, 0x0
    blr
}

asm void fn_8064EC58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_8064EC58_00000558
    lwz r31, 0x8(r3)
    b lbl_fn_8064EC58_0000060C
lbl_fn_8064EC58_00000558:
    lwz r31, 0x4(r5)
    b lbl_fn_8064EC58_0000060C
lbl_fn_8064EC58_00000560:
    lwz r30, 0x0(r31)
    b lbl_fn_8064EC58_00000600
lbl_fn_8064EC58_00000568:
    lhz r3, 0x4(r30)
    cmplwi r3, 0x1
    bne lbl_fn_8064EC58_000005C8
    lhz r0, 0x6(r30)
    srawi r0, r0, 12
    cmpwi r0, 0x6
    bne lbl_fn_8064EC58_000005C8
    lwz r30, 0x8(r30)
    b lbl_fn_8064EC58_000005BC
lbl_fn_8064EC58_0000058C:
    lhz r0, 0x6(r30)
    srawi r0, r0, 12
    cmpwi r0, 0x3
    bne lbl_fn_8064EC58_000005B8
    mr r3, r29
    mr r4, r30
    bl fn_80653CB4
    clrlwi. r0, r3, 24
    beq lbl_fn_8064EC58_000005B8
    mr r3, r31
    b lbl_fn_8064EC58_00000618
lbl_fn_8064EC58_000005B8:
    lwz r30, 0x0(r30)
lbl_fn_8064EC58_000005BC:
    cmpwi r30, 0x0
    bne lbl_fn_8064EC58_0000058C
    b lbl_fn_8064EC58_00000608
lbl_fn_8064EC58_000005C8:
    cmplwi r3, 0x3
    bne lbl_fn_8064EC58_000005FC
    lhz r0, 0x6(r30)
    srawi r0, r0, 12
    cmpwi r0, 0x3
    bne lbl_fn_8064EC58_000005FC
    mr r3, r29
    mr r4, r30
    bl fn_80653CB4
    clrlwi. r0, r3, 24
    beq lbl_fn_8064EC58_000005FC
    mr r3, r31
    b lbl_fn_8064EC58_00000618
lbl_fn_8064EC58_000005FC:
    lwz r30, 0x0(r30)
lbl_fn_8064EC58_00000600:
    cmpwi r30, 0x0
    bne lbl_fn_8064EC58_00000568
lbl_fn_8064EC58_00000608:
    lwz r31, 0x4(r31)
lbl_fn_8064EC58_0000060C:
    cmpwi r31, 0x0
    bne lbl_fn_8064EC58_00000560
    li r3, 0x0
lbl_fn_8064EC58_00000618:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064ED60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1200
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    sth r0, 0xc(r1)
    stw r31, 0x0(r4)
    bne lbl_fn_8064ED60_00000678
    li r3, 0xb
    b lbl_fn_8064ED60_00000974
lbl_fn_8064ED60_00000678:
    lbz r0, 0x8(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8064ED60_0000069C
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lwz r30, 0x121c(r3)
    cmpwi r30, 0x0
    beq lbl_fn_8064ED60_0000069C
    b lbl_fn_8064ED60_000006B4
lbl_fn_8064ED60_0000069C:
    bl fn_8064F844
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8064ED60_000006B4
    li r3, 0x6
    b lbl_fn_8064ED60_00000974
lbl_fn_8064ED60_000006B4:
    stw r30, 0x0(r28)
    mr r3, r30
    addi r5, r1, 0xc
    li r4, 0x1
    bl fn_8064FEA8
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_000006D4
    li r31, 0x7
lbl_fn_8064ED60_000006D4:
    cmpwi r31, 0x0
    bne lbl_fn_8064ED60_00000710
    li r3, 0x0
    li r0, 0x9
    stb r3, 0x8(r1)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x200
    stb r0, 0x9(r1)
    li r5, 0x1
    li r6, 0x2
    bl fn_8064FA38
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_00000710
    li r31, 0x7
lbl_fn_8064ED60_00000710:
    cmpwi r31, 0x0
    bne lbl_fn_8064ED60_00000768
    lbz r0, 0x9(r29)
    extsb. r0, r0
    beq lbl_fn_8064ED60_00000768
    addi r3, r29, 0x9
    bl strlen
    addi r0, r3, 0x1
    cmplwi r0, 0x50
    bgt lbl_fn_8064ED60_00000764
    addi r3, r29, 0x9
    bl strlen
    mr r4, r3
    mr r3, r30
    addi r6, r4, 0x1
    addi r7, r29, 0x9
    li r4, 0xb
    li r5, 0x8
    bl fn_8064FA38
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_00000768
lbl_fn_8064ED60_00000764:
    li r31, 0x7
lbl_fn_8064ED60_00000768:
    cmpwi r31, 0x0
    bne lbl_fn_8064ED60_000007C0
    lbz r0, 0x59(r29)
    extsb. r0, r0
    beq lbl_fn_8064ED60_000007C0
    addi r3, r29, 0x59
    bl strlen
    addi r0, r3, 0x1
    cmplwi r0, 0x50
    bgt lbl_fn_8064ED60_000007BC
    addi r3, r29, 0x59
    bl strlen
    mr r4, r3
    mr r3, r30
    addi r6, r4, 0x1
    addi r7, r29, 0x59
    li r4, 0x101
    li r5, 0x4
    bl fn_8064FA38
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_000007C0
lbl_fn_8064ED60_000007BC:
    li r31, 0x7
lbl_fn_8064ED60_000007C0:
    cmpwi r31, 0x0
    bne lbl_fn_8064ED60_00000818
    lbz r0, 0xa9(r29)
    extsb. r0, r0
    beq lbl_fn_8064ED60_00000818
    addi r3, r29, 0xa9
    bl strlen
    addi r0, r3, 0x1
    cmplwi r0, 0x50
    bgt lbl_fn_8064ED60_00000814
    addi r3, r29, 0xa9
    bl strlen
    mr r4, r3
    mr r3, r30
    addi r6, r4, 0x1
    addi r7, r29, 0xa9
    li r4, 0xa
    li r5, 0x8
    bl fn_8064FA38
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_00000818
lbl_fn_8064ED60_00000814:
    li r31, 0x7
lbl_fn_8064ED60_00000818:
    cmpwi r31, 0x0
    bne lbl_fn_8064ED60_00000858
    lhz r0, 0x0(r29)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x201
    srawi r0, r0, 8
    li r5, 0x1
    stb r0, 0x8(r1)
    li r6, 0x2
    lhz r0, 0x0(r29)
    stb r0, 0x9(r1)
    bl fn_8064FA38
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_00000858
    li r31, 0x7
lbl_fn_8064ED60_00000858:
    cmpwi r31, 0x0
    bne lbl_fn_8064ED60_00000898
    lhz r0, 0x4(r29)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x202
    srawi r0, r0, 8
    li r5, 0x1
    stb r0, 0x8(r1)
    li r6, 0x2
    lhz r0, 0x4(r29)
    stb r0, 0x9(r1)
    bl fn_8064FA38
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_00000898
    li r31, 0x7
lbl_fn_8064ED60_00000898:
    cmpwi r31, 0x0
    bne lbl_fn_8064ED60_000008D8
    lhz r0, 0x6(r29)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x203
    srawi r0, r0, 8
    li r5, 0x1
    stb r0, 0x8(r1)
    li r6, 0x2
    lhz r0, 0x6(r29)
    stb r0, 0x9(r1)
    bl fn_8064FA38
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_000008D8
    li r31, 0x7
lbl_fn_8064ED60_000008D8:
    cmpwi r31, 0x0
    bne lbl_fn_8064ED60_00000904
    mr r3, r30
    addi r7, r29, 0x8
    li r4, 0x204
    li r5, 0x5
    li r6, 0x1
    bl fn_8064FA38
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_00000904
    li r31, 0x7
lbl_fn_8064ED60_00000904:
    cmpwi r31, 0x0
    bne lbl_fn_8064ED60_00000944
    lhz r0, 0x2(r29)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x205
    srawi r0, r0, 8
    li r5, 0x1
    stb r0, 0x8(r1)
    li r6, 0x2
    lhz r0, 0x2(r29)
    stb r0, 0x9(r1)
    bl fn_8064FA38
    clrlwi. r0, r3, 24
    bne lbl_fn_8064ED60_00000944
    li r31, 0x7
lbl_fn_8064ED60_00000944:
    cmpwi r31, 0x0
    beq lbl_fn_8064ED60_00000958
    mr r3, r30
    bl fn_8064F924
    b lbl_fn_8064ED60_00000970
lbl_fn_8064ED60_00000958:
    lbz r0, 0x8(r29)
    cmplwi r0, 0x1
    bne lbl_fn_8064ED60_00000970
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    stw r30, 0x121c(r3)
lbl_fn_8064ED60_00000970:
    mr r3, r31
lbl_fn_8064ED60_00000974:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064F0C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x9
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8064F0C0_000009D8
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lwz r0, 0x121c(r3)
    stw r0, 0x0(r4)
lbl_fn_8064F0C0_000009D8:
    lwz r3, 0x0(r4)
    bl fn_8064F7A8
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8064F0C0_00000E18
    mr r3, r29
    li r4, 0x0
    li r5, 0xfa
    bl memset
    mr r3, r30
    li r31, 0x0
    li r4, 0x200
    li r5, 0x200
    bl fn_8064F804
    cmpwi r3, 0x0
    beq lbl_fn_8064F0C0_00000A30
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x0(r29)
lbl_fn_8064F0C0_00000A30:
    mr r3, r30
    li r4, 0x201
    li r5, 0x201
    bl fn_8064F804
    cmpwi r3, 0x0
    beq lbl_fn_8064F0C0_00000A60
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x2(r29)
lbl_fn_8064F0C0_00000A60:
    mr r3, r30
    li r4, 0x202
    li r5, 0x202
    bl fn_8064F804
    cmpwi r3, 0x0
    beq lbl_fn_8064F0C0_00000A90
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x6(r29)
lbl_fn_8064F0C0_00000A90:
    mr r3, r30
    li r4, 0x203
    li r5, 0x203
    bl fn_8064F804
    cmpwi r3, 0x0
    beq lbl_fn_8064F0C0_00000AC0
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x8(r29)
lbl_fn_8064F0C0_00000AC0:
    mr r3, r30
    li r4, 0x205
    li r5, 0x205
    bl fn_8064F804
    cmpwi r3, 0x0
    beq lbl_fn_8064F0C0_00000AF0
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x4(r29)
lbl_fn_8064F0C0_00000AF0:
    mr r3, r30
    li r4, 0x204
    li r5, 0x204
    bl fn_8064F804
    cmpwi r3, 0x0
    beq lbl_fn_8064F0C0_00000B14
    lwz r3, 0x4(r3)
    lbz r0, 0x0(r3)
    stb r0, 0xa(r29)
lbl_fn_8064F0C0_00000B14:
    mr r3, r30
    li r4, 0xb
    li r5, 0xb
    bl fn_8064F804
    cmpwi r3, 0x0
    beq lbl_fn_8064F0C0_00000C14
    lwz r0, 0x0(r3)
    li r4, 0x50
    cmplwi r0, 0x50
    bge lbl_fn_8064F0C0_00000B40
    mr r4, r0
lbl_fn_8064F0C0_00000B40:
    cmpwi cr1, r4, 0x0
    lwz r7, 0x4(r3)
    li r8, 0x0
    ble cr1, lbl_fn_8064F0C0_00000C14
    cmpwi r4, 0x8
    subi r5, r4, 0x8
    ble lbl_fn_8064F0C0_00000BE8
    li r6, 0x0
    blt cr1, lbl_fn_8064F0C0_00000B78
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_fn_8064F0C0_00000B78
    li r6, 0x1
lbl_fn_8064F0C0_00000B78:
    cmpwi r6, 0x0
    beq lbl_fn_8064F0C0_00000BE8
    addi r0, r5, 0x7
    addi r3, r29, 0xb
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_8064F0C0_00000BE8
lbl_fn_8064F0C0_00000B98:
    lbz r0, 0x0(r7)
    addi r8, r8, 0x8
    stb r0, 0x0(r3)
    lbz r0, 0x1(r7)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r7)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r7)
    stb r0, 0x3(r3)
    lbz r0, 0x4(r7)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r7)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r7)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r7)
    addi r7, r7, 0x8
    stb r0, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_8064F0C0_00000B98
lbl_fn_8064F0C0_00000BE8:
    add r3, r29, r8
    subf r0, r8, r4
    addi r3, r3, 0xb
    mtctr r0
    cmpw r8, r4
    bge lbl_fn_8064F0C0_00000C14
lbl_fn_8064F0C0_00000C00:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_fn_8064F0C0_00000C00
lbl_fn_8064F0C0_00000C14:
    mr r3, r30
    li r4, 0x101
    li r5, 0x101
    bl fn_8064F804
    cmpwi r3, 0x0
    beq lbl_fn_8064F0C0_00000D14
    lwz r0, 0x0(r3)
    li r4, 0x50
    cmplwi r0, 0x50
    bge lbl_fn_8064F0C0_00000C40
    mr r4, r0
lbl_fn_8064F0C0_00000C40:
    cmpwi cr1, r4, 0x0
    lwz r7, 0x4(r3)
    li r8, 0x0
    ble cr1, lbl_fn_8064F0C0_00000D14
    cmpwi r4, 0x8
    subi r5, r4, 0x8
    ble lbl_fn_8064F0C0_00000CE8
    li r6, 0x0
    blt cr1, lbl_fn_8064F0C0_00000C78
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_fn_8064F0C0_00000C78
    li r6, 0x1
lbl_fn_8064F0C0_00000C78:
    cmpwi r6, 0x0
    beq lbl_fn_8064F0C0_00000CE8
    addi r0, r5, 0x7
    addi r3, r29, 0x5b
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_8064F0C0_00000CE8
lbl_fn_8064F0C0_00000C98:
    lbz r0, 0x0(r7)
    addi r8, r8, 0x8
    stb r0, 0x0(r3)
    lbz r0, 0x1(r7)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r7)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r7)
    stb r0, 0x3(r3)
    lbz r0, 0x4(r7)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r7)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r7)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r7)
    addi r7, r7, 0x8
    stb r0, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_8064F0C0_00000C98
lbl_fn_8064F0C0_00000CE8:
    add r3, r29, r8
    subf r0, r8, r4
    addi r3, r3, 0x5b
    mtctr r0
    cmpw r8, r4
    bge lbl_fn_8064F0C0_00000D14
lbl_fn_8064F0C0_00000D00:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_fn_8064F0C0_00000D00
lbl_fn_8064F0C0_00000D14:
    mr r3, r30
    li r4, 0xa
    li r5, 0xa
    bl fn_8064F804
    cmpwi r3, 0x0
    beq lbl_fn_8064F0C0_00000E20
    lwz r0, 0x0(r3)
    li r4, 0x50
    cmplwi r0, 0x50
    bge lbl_fn_8064F0C0_00000D40
    mr r4, r0
lbl_fn_8064F0C0_00000D40:
    cmpwi cr1, r4, 0x0
    lwz r7, 0x4(r3)
    li r8, 0x0
    ble cr1, lbl_fn_8064F0C0_00000E20
    cmpwi r4, 0x8
    subi r5, r4, 0x8
    ble lbl_fn_8064F0C0_00000DE8
    li r6, 0x0
    blt cr1, lbl_fn_8064F0C0_00000D78
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_fn_8064F0C0_00000D78
    li r6, 0x1
lbl_fn_8064F0C0_00000D78:
    cmpwi r6, 0x0
    beq lbl_fn_8064F0C0_00000DE8
    addi r0, r5, 0x7
    addi r3, r29, 0xab
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_8064F0C0_00000DE8
lbl_fn_8064F0C0_00000D98:
    lbz r0, 0x0(r7)
    addi r8, r8, 0x8
    stb r0, 0x0(r3)
    lbz r0, 0x1(r7)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r7)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r7)
    stb r0, 0x3(r3)
    lbz r0, 0x4(r7)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r7)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r7)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r7)
    addi r7, r7, 0x8
    stb r0, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_8064F0C0_00000D98
lbl_fn_8064F0C0_00000DE8:
    add r3, r29, r8
    subf r0, r8, r4
    addi r3, r3, 0xab
    mtctr r0
    cmpw r8, r4
    bge lbl_fn_8064F0C0_00000E20
lbl_fn_8064F0C0_00000E00:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_fn_8064F0C0_00000E00
    b lbl_fn_8064F0C0_00000E20
lbl_fn_8064F0C0_00000E18:
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_fn_8064F0C0_00000E20:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064F570(void)
{
    nofralloc
    cmplwi r3, 0xff
    beq lbl_fn_8064F570_00000E58
    lis r4, lbl_80823CE0@ha
    addi r4, r4, lbl_80823CE0@l
    stb r3, 0x4630(r4)
lbl_fn_8064F570_00000E58:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r3, 0x4630(r3)
    blr
}

asm void fn_8064F594(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r5, lbl_80823CE0@ha
    cmpwi r3, 0x0
    addi r5, r5, lbl_80823CE0@l
    mr r29, r4
    lhz r0, 0x1222(r5)
    mulli r0, r0, 0x298
    add r4, r5, r0
    addi r30, r4, 0x1224
    bne lbl_fn_8064F594_00000EA8
    addi r28, r5, 0x1224
    b lbl_fn_8064F594_00000F80
lbl_fn_8064F594_00000EA8:
    addi r28, r3, 0x298
    b lbl_fn_8064F594_00000F80
lbl_fn_8064F594_00000EB0:
    li r31, 0x0
    b lbl_fn_8064F594_00000F54
lbl_fn_8064F594_00000EB8:
    clrlwi r0, r31, 16
    addi r24, r28, 0xc
    mulli r0, r0, 0x12
    li r25, 0x0
    add r27, r29, r0
    addi r26, r27, 0x4
    b lbl_fn_8064F594_00000F30
lbl_fn_8064F594_00000ED4:
    lbz r0, 0xa(r24)
    cmplwi r0, 0x3
    bne lbl_fn_8064F594_00000F00
    lwz r3, 0x4(r24)
    mr r5, r26
    lwz r4, 0x0(r24)
    lhz r6, 0x2(r27)
    bl fn_80653A40
    clrlwi. r0, r3, 24
    bne lbl_fn_8064F594_00000F40
    b lbl_fn_8064F594_00000F28
lbl_fn_8064F594_00000F00:
    cmplwi r0, 0x6
    bne lbl_fn_8064F594_00000F28
    lwz r3, 0x4(r24)
    mr r5, r26
    lwz r4, 0x0(r24)
    li r7, 0x0
    lhz r6, 0x2(r27)
    bl fn_8064F6D0
    clrlwi. r0, r3, 24
    bne lbl_fn_8064F594_00000F40
lbl_fn_8064F594_00000F28:
    addi r25, r25, 0x1
    addi r24, r24, 0xc
lbl_fn_8064F594_00000F30:
    lhz r0, 0x8(r28)
    clrlwi r3, r25, 16
    cmplw r3, r0
    blt lbl_fn_8064F594_00000ED4
lbl_fn_8064F594_00000F40:
    lhz r0, 0x8(r28)
    clrlwi r3, r25, 16
    cmplw r3, r0
    beq lbl_fn_8064F594_00000F64
    addi r31, r31, 0x1
lbl_fn_8064F594_00000F54:
    lhz r0, 0x0(r29)
    clrlwi r3, r31, 16
    cmplw r3, r0
    blt lbl_fn_8064F594_00000EB8
lbl_fn_8064F594_00000F64:
    lhz r0, 0x0(r29)
    clrlwi r3, r31, 16
    cmplw r3, r0
    bne lbl_fn_8064F594_00000F7C
    mr r3, r28
    b lbl_fn_8064F594_00000F8C
lbl_fn_8064F594_00000F7C:
    addi r28, r28, 0x298
lbl_fn_8064F594_00000F80:
    cmplw r28, r30
    blt lbl_fn_8064F594_00000EB0
    li r3, 0x0
lbl_fn_8064F594_00000F8C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8064F6D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r7, 0x3
    mr r26, r3
    mr r27, r5
    mr r28, r6
    mr r29, r7
    add r31, r3, r4
    ble lbl_fn_8064F6D0_00001058
    li r3, 0x0
    b lbl_fn_8064F6D0_00001064
    b lbl_fn_8064F6D0_00001058
lbl_fn_8064F6D0_00000FE0:
    lbz r30, 0x0(r26)
    addi r3, r26, 0x1
    addi r5, r1, 0x8
    mr r4, r30
    bl fn_80653890
    extrwi r0, r30, 5, 24
    mr r26, r3
    cmplwi r0, 0x3
    bne lbl_fn_8064F6D0_00001024
    lwz r4, 0x8(r1)
    mr r5, r27
    mr r6, r28
    bl fn_80653A40
    clrlwi. r0, r3, 24
    beq lbl_fn_8064F6D0_00001050
    li r3, 0x1
    b lbl_fn_8064F6D0_00001064
lbl_fn_8064F6D0_00001024:
    cmplwi r0, 0x6
    bne lbl_fn_8064F6D0_00001050
    lwz r4, 0x8(r1)
    mr r5, r27
    mr r6, r28
    addi r7, r29, 0x1
    bl fn_8064F6D0
    clrlwi. r0, r3, 24
    beq lbl_fn_8064F6D0_00001050
    li r3, 0x1
    b lbl_fn_8064F6D0_00001064
lbl_fn_8064F6D0_00001050:
    lwz r0, 0x8(r1)
    add r26, r26, r0
lbl_fn_8064F6D0_00001058:
    cmplw r26, r31
    blt lbl_fn_8064F6D0_00000FE0
    li r3, 0x0
lbl_fn_8064F6D0_00001064:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8064F7A8(void)
{
    nofralloc
    lis r5, lbl_80823CE0@ha
    li r0, 0x298
    addi r5, r5, lbl_80823CE0@l
    lhz r4, 0x1222(r5)
    addi r6, r5, 0x1224
    mulli r4, r4, 0x298
    add r4, r5, r4
    addi r5, r4, 0x1224
    addi r4, r5, 0x297
    subf r4, r6, r4
    divwu r4, r4, r0
    mtctr r4
    cmplw r6, r5
    bge lbl_fn_8064F7A8_000010D0
lbl_fn_8064F7A8_000010B4:
    lwz r0, 0x0(r6)
    cmplw r0, r3
    bne lbl_fn_8064F7A8_000010C8
    mr r3, r6
    blr
lbl_fn_8064F7A8_000010C8:
    addi r6, r6, 0x298
    bdnz lbl_fn_8064F7A8_000010B4
lbl_fn_8064F7A8_000010D0:
    li r3, 0x0
    blr
}

asm void fn_8064F804(void)
{
    nofralloc
    lhz r6, 0x8(r3)
    addi r3, r3, 0xc
    li r7, 0x0
    b lbl_fn_8064F804_00001104
lbl_fn_8064F804_000010E8:
    lhz r0, 0x8(r3)
    cmplw r0, r4
    blt lbl_fn_8064F804_000010FC
    cmplw r0, r5
    blelr
lbl_fn_8064F804_000010FC:
    addi r7, r7, 0x1
    addi r3, r3, 0xc
lbl_fn_8064F804_00001104:
    clrlwi r0, r7, 16
    cmplw r0, r6
    blt lbl_fn_8064F804_000010E8
    li r3, 0x0
    blr
}

asm void fn_8064F844(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_80823CE0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80823CE0@l
    stw r31, 0x1c(r1)
    addi r31, r3, 0x121c
    lhz r0, 0x1222(r3)
    cmplwi r0, 0x14
    bge lbl_fn_8064F844_000011E0
    mulli r0, r0, 0x298
    li r4, 0x0
    li r5, 0x298
    add r3, r31, r0
    addi r3, r3, 0x8
    bl memset
    lhz r4, 0x6(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8064F844_0000117C
    subi r0, r4, 0x1
    mulli r0, r0, 0x298
    add r3, r31, r0
    lwz r3, 0x8(r3)
    addi r3, r3, 0x1
    b lbl_fn_8064F844_00001180
lbl_fn_8064F844_0000117C:
    lis r3, 0x1
lbl_fn_8064F844_00001180:
    mulli r4, r4, 0x298
    srwi r0, r3, 24
    extrwi r6, r3, 8, 8
    stb r0, 0x8(r1)
    extrwi r0, r3, 8, 16
    add r4, r31, r4
    stw r3, 0x8(r4)
    addi r7, r1, 0x8
    li r4, 0x0
    li r5, 0x1
    lhz r8, 0x6(r31)
    stb r6, 0x9(r1)
    li r6, 0x4
    addi r8, r8, 0x1
    sth r8, 0x6(r31)
    stb r0, 0xa(r1)
    stb r3, 0xb(r1)
    bl fn_8064FA38
    lhz r3, 0x6(r31)
    subi r0, r3, 0x1
    mulli r0, r0, 0x298
    add r3, r31, r0
    lwz r3, 0x8(r3)
    b lbl_fn_8064F844_000011E4
lbl_fn_8064F844_000011E0:
    li r3, 0x0
lbl_fn_8064F844_000011E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064F924(void)
{
    nofralloc
    lis r4, lbl_80823CE0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_80823CE0@l
    addi r10, r4, 0x1224
    beq lbl_fn_8064F924_00001218
    lhz r4, 0x1222(r4)
    cmpwi r4, 0x0
    bne lbl_fn_8064F924_00001238
lbl_fn_8064F924_00001218:
    lis r4, lbl_80823CE0@ha
    li r0, 0x0
    addi r4, r4, lbl_80823CE0@l
    li r3, 0x1
    sth r0, 0x1222(r4)
    stw r0, 0x121c(r4)
    stb r0, 0x1220(r4)
    blr
lbl_fn_8064F924_00001238:
    li r9, 0x0
    b lbl_fn_8064F924_000012F8
lbl_fn_8064F924_00001240:
    lwz r0, 0x0(r10)
    cmplw r0, r3
    bne lbl_fn_8064F924_000012F0
    lis r5, lbl_80823CE0@ha
    li r7, 0x53
    addi r5, r5, lbl_80823CE0@l
    b lbl_fn_8064F924_000012B8
lbl_fn_8064F924_0000125C:
    subi r8, r10, 0x4
    addi r6, r10, 0x294
    mtctr r7
lbl_fn_8064F924_00001268:
    lwz r4, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r4, 0x4(r8)
    stwu r0, 0x8(r8)
    bdnz lbl_fn_8064F924_00001268
    li r8, 0x0
    b lbl_fn_8064F924_000012A0
lbl_fn_8064F924_00001284:
    clrlwi r0, r8, 16
    addi r8, r8, 0x1
    mulli r0, r0, 0xc
    add r6, r10, r0
    lwz r4, 0x10(r6)
    subi r0, r4, 0x298
    stw r0, 0x10(r6)
lbl_fn_8064F924_000012A0:
    lhz r0, 0x8(r10)
    clrlwi r4, r8, 16
    cmplw r4, r0
    blt lbl_fn_8064F924_00001284
    addi r9, r9, 0x1
    addi r10, r10, 0x298
lbl_fn_8064F924_000012B8:
    lhz r4, 0x1222(r5)
    clrlwi r0, r9, 16
    cmplw r0, r4
    blt lbl_fn_8064F924_0000125C
    lwz r0, 0x121c(r5)
    subi r4, r4, 0x1
    sth r4, 0x1222(r5)
    cmplw r0, r3
    bne lbl_fn_8064F924_000012E8
    li r0, 0x0
    stw r0, 0x121c(r5)
    stb r0, 0x1220(r5)
lbl_fn_8064F924_000012E8:
    li r3, 0x1
    blr
lbl_fn_8064F924_000012F0:
    addi r9, r9, 0x1
    addi r10, r10, 0x298
lbl_fn_8064F924_000012F8:
    clrlwi r0, r9, 16
    cmplw r0, r4
    blt lbl_fn_8064F924_00001240
    li r3, 0x0
    blr
}

asm void fn_8064FA38(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r8, lbl_80823CE0@ha
    mr r26, r5
    addi r8, r8, lbl_80823CE0@l
    mr r24, r3
    lhz r9, 0x1222(r8)
    mr r25, r4
    mr r27, r6
    mr r28, r7
    addi r30, r8, 0x1224
    li r5, 0x0
    b lbl_fn_8064FA38_0000167C
lbl_fn_8064FA38_0000134C:
    lwz r0, 0x0(r30)
    cmplw r0, r3
    bne lbl_fn_8064FA38_00001674
    lhz r3, 0x8(r30)
    addi r29, r30, 0xc
    li r31, 0x0
    b lbl_fn_8064FA38_00001390
lbl_fn_8064FA38_00001368:
    lhz r0, 0x8(r29)
    cmplw r0, r4
    bne lbl_fn_8064FA38_00001384
    mr r3, r24
    mr r4, r25
    bl fn_80650024
    b lbl_fn_8064FA38_0000139C
lbl_fn_8064FA38_00001384:
    bgt lbl_fn_8064FA38_0000139C
    addi r31, r31, 0x1
    addi r29, r29, 0xc
lbl_fn_8064FA38_00001390:
    clrlwi r0, r31, 16
    cmplw r0, r3
    blt lbl_fn_8064FA38_00001368
lbl_fn_8064FA38_0000139C:
    lhz r5, 0x8(r30)
    cmplwi r5, 0x19
    bne lbl_fn_8064FA38_000013B0
    li r3, 0x0
    b lbl_fn_8064FA38_0000168C
lbl_fn_8064FA38_000013B0:
    clrlwi r0, r31, 16
    cmplw r0, r5
    bne lbl_fn_8064FA38_000013CC
    mulli r0, r5, 0xc
    add r3, r30, r0
    addi r29, r3, 0xc
    b lbl_fn_8064FA38_00001590
lbl_fn_8064FA38_000013CC:
    cmplw cr1, r5, r0
    ble cr1, lbl_fn_8064FA38_00001590
    subf r0, r31, r5
    addi r3, r31, 0x8
    clrlwi r0, r0, 16
    cmplwi r0, 0x8
    ble lbl_fn_8064FA38_0000154C
    blt cr1, lbl_fn_8064FA38_0000154C
    clrlwi r3, r3, 16
    addi r0, r5, 0x7
    subf r0, r3, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r5, r3
    ble lbl_fn_8064FA38_0000154C
lbl_fn_8064FA38_00001408:
    clrlwi r0, r5, 16
    addis r3, r5, 0x1
    mulli r4, r0, 0xc
    lwzux r9, r4, r30
    subi r6, r3, 0x1
    subi r0, r3, 0x2
    lwz r7, 0x4(r4)
    clrlwi r6, r6, 16
    mulli r8, r6, 0xc
    subi r5, r5, 0x8
    stw r9, 0xc(r4)
    clrlwi r6, r0, 16
    subi r0, r3, 0x3
    stw r7, 0x10(r4)
    clrlwi r0, r0, 16
    add r23, r30, r8
    lwz r11, 0x8(r4)
    mulli r10, r6, 0xc
    subi r6, r3, 0x4
    stw r11, 0x14(r4)
    mulli r9, r0, 0xc
    subi r0, r3, 0x5
    lwzx r12, r30, r8
    clrlwi r6, r6, 16
    lwz r11, 0x4(r23)
    clrlwi r7, r0, 16
    stw r12, 0x0(r4)
    add r12, r30, r10
    subi r0, r3, 0x6
    add r10, r30, r9
    mulli r8, r6, 0xc
    stw r11, 0x4(r4)
    clrlwi r6, r0, 16
    subi r0, r3, 0x7
    mulli r3, r6, 0xc
    lwz r6, 0x8(r23)
    clrlwi r0, r0, 16
    stw r6, 0x8(r4)
    add r9, r30, r8
    mulli r7, r7, 0xc
    lwz r11, 0x0(r12)
    add r8, r30, r7
    add r7, r30, r3
    lwz r3, 0x4(r12)
    mulli r0, r0, 0xc
    stw r11, -0xc(r4)
    stw r3, -0x8(r4)
    add r6, r30, r0
    lwz r0, 0x8(r12)
    stw r0, -0x4(r4)
    lwz r3, 0x0(r10)
    lwz r0, 0x4(r10)
    stw r3, -0x18(r4)
    stw r0, -0x14(r4)
    lwz r0, 0x8(r10)
    stw r0, -0x10(r4)
    lwz r3, 0x0(r9)
    lwz r0, 0x4(r9)
    stw r3, -0x24(r4)
    stw r0, -0x20(r4)
    lwz r0, 0x8(r9)
    stw r0, -0x1c(r4)
    lwz r3, 0x0(r8)
    lwz r0, 0x4(r8)
    stw r3, -0x30(r4)
    stw r0, -0x2c(r4)
    lwz r0, 0x8(r8)
    stw r0, -0x28(r4)
    lwz r3, 0x0(r7)
    lwz r0, 0x4(r7)
    stw r3, -0x3c(r4)
    stw r0, -0x38(r4)
    lwz r0, 0x8(r7)
    stw r0, -0x34(r4)
    lwz r3, 0x0(r6)
    lwz r0, 0x4(r6)
    stw r3, -0x48(r4)
    stw r0, -0x44(r4)
    lwz r0, 0x8(r6)
    stw r0, -0x40(r4)
    bdnz lbl_fn_8064FA38_00001408
lbl_fn_8064FA38_0000154C:
    clrlwi r3, r31, 16
    clrlwi r4, r5, 16
    subf r0, r3, r4
    mtctr r0
    cmplw r4, r3
    ble lbl_fn_8064FA38_00001590
lbl_fn_8064FA38_00001564:
    clrlwi r0, r5, 16
    subi r5, r5, 0x1
    mulli r0, r0, 0xc
    add r4, r30, r0
    lwzx r3, r30, r0
    lwz r0, 0x4(r4)
    stw r3, 0xc(r4)
    stw r0, 0x10(r4)
    lwz r0, 0x8(r4)
    stw r0, 0x14(r4)
    bdnz lbl_fn_8064FA38_00001564
lbl_fn_8064FA38_00001590:
    lhz r3, 0x8(r30)
    addi r0, r3, 0x1
    sth r0, 0x8(r30)
    sth r25, 0x8(r29)
    stw r27, 0x0(r29)
    stb r26, 0xa(r29)
    lwz r6, 0x4(r30)
    add r0, r6, r27
    cmplwi r0, 0x15e
    blt lbl_fn_8064FA38_00001604
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064FA38_000015E8
    lis r3, 0xa
    lis r4, lbl_807B82A0@ha
    mr r5, r27
    subfic r6, r6, 0x15e
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B82A0@l
    bl fn_80629850
lbl_fn_8064FA38_000015E8:
    lwz r0, 0x4(r30)
    li r3, 0x0
    subfic r27, r0, 0x15e
    stbx r3, r28, r27
    lwz r0, 0x4(r30)
    subfic r0, r0, 0x15f
    stbx r3, r28, r0
lbl_fn_8064FA38_00001604:
    cmpwi r27, 0x0
    beq lbl_fn_8064FA38_00001648
    cmpwi r28, 0x0
    beq lbl_fn_8064FA38_00001648
    lwz r0, 0x4(r30)
    mr r4, r28
    mr r5, r27
    add r3, r30, r0
    addi r3, r3, 0x138
    bl memcpy
    lwz r0, 0x4(r30)
    add r3, r30, r0
    addi r0, r3, 0x138
    stw r0, 0x4(r29)
    lwz r0, 0x4(r30)
    add r0, r0, r27
    stw r0, 0x4(r30)
lbl_fn_8064FA38_00001648:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lwz r0, 0x121c(r3)
    cmplw r24, r0
    bne lbl_fn_8064FA38_0000166C
    cmplwi r25, 0x8001
    bne lbl_fn_8064FA38_0000166C
    li r0, 0x1
    stb r0, 0x1220(r3)
lbl_fn_8064FA38_0000166C:
    li r3, 0x1
    b lbl_fn_8064FA38_0000168C
lbl_fn_8064FA38_00001674:
    addi r5, r5, 0x1
    addi r30, r30, 0x298
lbl_fn_8064FA38_0000167C:
    clrlwi r0, r5, 16
    cmplw r0, r9
    blt lbl_fn_8064FA38_0000134C
    li r3, 0x0
lbl_fn_8064FA38_0000168C:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8064FDD0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    addi r31, r1, 0x8
    stw r30, 0xb8(r1)
    mr r30, r4
    li r4, 0x19
    stw r29, 0xb4(r1)
    mr r29, r3
    mr r3, r31
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8064FDD0_00001748
lbl_fn_8064FDD0_000016E0:
    stb r4, 0x0(r31)
    lhz r0, 0x0(r6)
    srawi r0, r0, 8
    stb r0, 0x1(r31)
    lhz r0, 0x0(r6)
    stb r0, 0x2(r31)
    addi r31, r31, 0x3
    subf r0, r3, r31
    cmpwi r0, 0x4d
    ble lbl_fn_8064FDD0_0000173C
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064FDD0_00001748
    lis r3, 0xa
    lis r4, lbl_807B82DC@ha
    mr r6, r5
    clrlwi r5, r7, 16
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B82DC@l
    bl fn_80629850
    b lbl_fn_8064FDD0_00001748
lbl_fn_8064FDD0_0000173C:
    addi r7, r7, 0x1
    addi r6, r6, 0x2
    bdnz lbl_fn_8064FDD0_000016E0
lbl_fn_8064FDD0_00001748:
    addi r7, r1, 0x8
    mr r3, r29
    mr r4, r30
    li r5, 0x6
    subf r6, r7, r31
    bl fn_8064FA38
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8064FEA8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    li r6, 0x0
    stw r0, 0xb4(r1)
    addi r8, r1, 0x8
    beq lbl_fn_8064FEA8_000018D4
    cmplwi r4, 0x8
    addis r7, r4, 0x1
    subi r7, r7, 0x8
    ble lbl_fn_8064FEA8_00001894
    clrlwi r9, r7, 16
    li r0, 0x19
    addi r7, r9, 0x7
    srwi r7, r7, 3
    mtctr r7
    cmplwi r9, 0x0
    ble lbl_fn_8064FEA8_00001894
lbl_fn_8064FEA8_000017C4:
    stb r0, 0x0(r8)
    addi r6, r6, 0x8
    lhz r7, 0x0(r5)
    srawi r7, r7, 8
    stb r7, 0x1(r8)
    lhz r7, 0x0(r5)
    stb r7, 0x2(r8)
    stb r0, 0x3(r8)
    lhz r7, 0x2(r5)
    srawi r7, r7, 8
    stb r7, 0x4(r8)
    lhz r7, 0x2(r5)
    stb r7, 0x5(r8)
    stb r0, 0x6(r8)
    lhz r7, 0x4(r5)
    srawi r7, r7, 8
    stb r7, 0x7(r8)
    lhz r7, 0x4(r5)
    stb r7, 0x8(r8)
    stb r0, 0x9(r8)
    lhz r7, 0x6(r5)
    srawi r7, r7, 8
    stb r7, 0xa(r8)
    lhz r7, 0x6(r5)
    stb r7, 0xb(r8)
    stb r0, 0xc(r8)
    lhz r7, 0x8(r5)
    srawi r7, r7, 8
    stb r7, 0xd(r8)
    lhz r7, 0x8(r5)
    stb r7, 0xe(r8)
    stb r0, 0xf(r8)
    lhz r7, 0xa(r5)
    srawi r7, r7, 8
    stb r7, 0x10(r8)
    lhz r7, 0xa(r5)
    stb r7, 0x11(r8)
    stb r0, 0x12(r8)
    lhz r7, 0xc(r5)
    srawi r7, r7, 8
    stb r7, 0x13(r8)
    lhz r7, 0xc(r5)
    stb r7, 0x14(r8)
    stb r0, 0x15(r8)
    lhz r7, 0xe(r5)
    srawi r7, r7, 8
    stb r7, 0x16(r8)
    lhz r7, 0xe(r5)
    addi r5, r5, 0x10
    stb r7, 0x17(r8)
    addi r8, r8, 0x18
    bdnz lbl_fn_8064FEA8_000017C4
lbl_fn_8064FEA8_00001894:
    clrlwi r7, r6, 16
    li r9, 0x19
    subf r0, r7, r4
    mtctr r0
    cmplw r7, r4
    bge lbl_fn_8064FEA8_000018D4
lbl_fn_8064FEA8_000018AC:
    stb r9, 0x0(r8)
    addi r6, r6, 0x1
    lhz r0, 0x0(r5)
    srawi r0, r0, 8
    stb r0, 0x1(r8)
    lhz r0, 0x0(r5)
    addi r5, r5, 0x2
    stb r0, 0x2(r8)
    addi r8, r8, 0x3
    bdnz lbl_fn_8064FEA8_000018AC
lbl_fn_8064FEA8_000018D4:
    addi r7, r1, 0x8
    li r4, 0x1
    subf r6, r7, r8
    li r5, 0x6
    bl fn_8064FA38
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80650024(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r27, lbl_80823CE0@ha
    mr r25, r3
    addi r27, r27, lbl_80823CE0@l
    mr r26, r4
    addi r31, r27, 0x1224
    li r3, 0x0
    lis r28, 0xa
    lis r29, lbl_807B8310@ha
    b lbl_fn_80650024_00001B08
lbl_fn_80650024_00001930:
    lwz r0, 0x0(r31)
    cmplw r0, r25
    bne lbl_fn_80650024_00001B00
    lbz r0, 0x4630(r27)
    addi r30, r31, 0xc
    cmplwi r0, 0x3
    blt lbl_fn_80650024_00001960
    mr r5, r26
    mr r6, r25
    addi r3, r28, 0x2
    addi r4, r29, lbl_807B8310@l
    bl fn_80629850
lbl_fn_80650024_00001960:
    lhz r4, 0x8(r31)
    li r3, 0x0
    b lbl_fn_80650024_00001AF4
lbl_fn_80650024_0000196C:
    lhz r0, 0x8(r30)
    cmplw r0, r26
    bne lbl_fn_80650024_00001AEC
    lwz r0, 0x0(r30)
    lwz r4, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80650024_000019C4
    li r7, 0x0
    b lbl_fn_80650024_000019B4
lbl_fn_80650024_00001990:
    clrlwi r5, r7, 16
    mulli r5, r5, 0xc
    add r6, r31, r5
    lwz r5, 0x10(r6)
    cmplw r5, r4
    ble lbl_fn_80650024_000019B0
    subf r5, r0, r5
    stw r5, 0x10(r6)
lbl_fn_80650024_000019B0:
    addi r7, r7, 0x1
lbl_fn_80650024_000019B4:
    lhz r5, 0x8(r31)
    clrlwi r6, r7, 16
    cmplw r6, r5
    blt lbl_fn_80650024_00001990
lbl_fn_80650024_000019C4:
    lhz r5, 0x8(r31)
    subi r5, r5, 0x1
    sth r5, 0x8(r31)
    b lbl_fn_80650024_000019F4
lbl_fn_80650024_000019D4:
    lwz r6, 0xc(r30)
    addi r3, r3, 0x1
    lwz r5, 0x10(r30)
    stw r6, 0x0(r30)
    stw r5, 0x4(r30)
    lwz r5, 0x14(r30)
    stw r5, 0x8(r30)
    addi r30, r30, 0xc
lbl_fn_80650024_000019F4:
    lhz r5, 0x8(r31)
    clrlwi r6, r3, 16
    cmplw r6, r5
    blt lbl_fn_80650024_000019D4
    cmpwi r0, 0x0
    beq lbl_fn_80650024_00001AE4
    addi r5, r31, 0x138
    add r6, r4, r0
    lwz r3, 0x4(r31)
    subf r5, r5, r6
    li r7, 0x0
    subf r3, r5, r3
    clrlwi. r8, r3, 16
    beq lbl_fn_80650024_00001AD8
    cmplwi r8, 0x8
    addis r3, r8, 0x1
    subi r3, r3, 0x8
    ble lbl_fn_80650024_00001AA8
    clrlwi r5, r3, 16
    addi r3, r5, 0x7
    srwi r3, r3, 3
    mtctr r3
    cmplwi r5, 0x0
    ble lbl_fn_80650024_00001AA8
lbl_fn_80650024_00001A54:
    lbz r3, 0x0(r6)
    add r5, r4, r0
    addi r7, r7, 0x8
    addi r6, r6, 0x8
    stb r3, 0x0(r4)
    lbz r3, 0x1(r5)
    stb r3, 0x1(r4)
    lbz r3, 0x2(r5)
    stb r3, 0x2(r4)
    lbz r3, 0x3(r5)
    stb r3, 0x3(r4)
    lbz r3, 0x4(r5)
    stb r3, 0x4(r4)
    lbz r3, 0x5(r5)
    stb r3, 0x5(r4)
    lbz r3, 0x6(r5)
    stb r3, 0x6(r4)
    lbz r3, 0x7(r5)
    stb r3, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_80650024_00001A54
lbl_fn_80650024_00001AA8:
    clrlwi r6, r7, 16
    add r5, r0, r4
    subf r3, r6, r8
    mtctr r3
    cmplw r6, r8
    bge lbl_fn_80650024_00001AD8
lbl_fn_80650024_00001AC0:
    lbz r3, 0x0(r5)
    addi r7, r7, 0x1
    addi r5, r5, 0x1
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_fn_80650024_00001AC0
lbl_fn_80650024_00001AD8:
    lwz r3, 0x4(r31)
    subf r0, r0, r3
    stw r0, 0x4(r31)
lbl_fn_80650024_00001AE4:
    li r3, 0x1
    b lbl_fn_80650024_00001B1C
lbl_fn_80650024_00001AEC:
    addi r3, r3, 0x1
    addi r30, r30, 0xc
lbl_fn_80650024_00001AF4:
    clrlwi r0, r3, 16
    cmplw r0, r4
    blt lbl_fn_80650024_0000196C
lbl_fn_80650024_00001B00:
    addi r3, r3, 0x1
    addi r31, r31, 0x298
lbl_fn_80650024_00001B08:
    lhz r0, 0x1222(r27)
    clrlwi r4, r3, 16
    cmplw r4, r0
    blt lbl_fn_80650024_00001930
    li r3, 0x0
lbl_fn_80650024_00001B1C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80650260(void)
{
    nofralloc
    li r0, 0x35
    addi r11, r3, 0x1
    mr r10, r11
    stb r0, 0x0(r3)
    li r9, 0x0
    li r6, 0x1c
    li r7, 0x1a
    li r8, 0x19
    mtctr r4
    cmplwi r4, 0x0
    addi r11, r11, 0x1
    ble lbl_fn_80650260_00001C0C
lbl_fn_80650260_00001B64:
    lhz r0, 0x0(r5)
    cmplwi r0, 0x2
    bne lbl_fn_80650260_00001B90
    stb r8, 0x0(r11)
    lhz r0, 0x4(r5)
    srawi r0, r0, 8
    stb r0, 0x1(r11)
    lhz r0, 0x4(r5)
    stb r0, 0x2(r11)
    addi r11, r11, 0x3
    b lbl_fn_80650260_00001C00
lbl_fn_80650260_00001B90:
    cmplwi r0, 0x4
    bne lbl_fn_80650260_00001BD0
    stb r7, 0x0(r11)
    lwz r0, 0x4(r5)
    srwi r0, r0, 24
    stb r0, 0x1(r11)
    lwz r0, 0x4(r5)
    extrwi r0, r0, 8, 8
    stb r0, 0x2(r11)
    lwz r0, 0x4(r5)
    extrwi r0, r0, 8, 16
    stb r0, 0x3(r11)
    lwz r0, 0x4(r5)
    stb r0, 0x4(r11)
    addi r11, r11, 0x5
    b lbl_fn_80650260_00001C00
lbl_fn_80650260_00001BD0:
    stb r6, 0x0(r11)
    li r4, 0x0
    addi r11, r11, 0x1
    b lbl_fn_80650260_00001BF4
lbl_fn_80650260_00001BE0:
    add r3, r5, r4
    addi r4, r4, 0x1
    lbz r0, 0x4(r3)
    stb r0, 0x0(r11)
    addi r11, r11, 0x1
lbl_fn_80650260_00001BF4:
    lhz r0, 0x0(r5)
    cmpw r4, r0
    blt lbl_fn_80650260_00001BE0
lbl_fn_80650260_00001C00:
    addi r9, r9, 0x1
    addi r5, r5, 0x14
    bdnz lbl_fn_80650260_00001B64
lbl_fn_80650260_00001C0C:
    subf r4, r10, r11
    mr r3, r11
    subi r0, r4, 0x1
    stb r0, 0x0(r10)
    blr
}

asm void fn_8065034C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8065034C_00001C64
    mr r3, r26
    li r4, 0x6
    bl fn_80651E64
    b lbl_fn_8065034C_00001D38
lbl_fn_8065034C_00001C64:
    li r0, 0x9
    addi r30, r3, 0x11
    sth r0, 0x4(r3)
    li r0, 0x2
    addi r31, r30, 0x3
    stb r0, 0x11(r3)
    addi r3, r31, 0x2
    lhz r0, 0x470(r26)
    srawi r0, r0, 8
    stb r0, 0x1(r30)
    lhz r0, 0x470(r26)
    stb r0, 0x2(r30)
    lhz r4, 0x470(r26)
    lwz r6, 0x410(r26)
    addi r0, r4, 0x1
    sth r0, 0x470(r26)
    addi r5, r6, 0x10
    lhz r4, 0xc(r6)
    bl fn_80650260
    lis r4, lbl_80823CE0@ha
    cmpwi r27, 0x0
    addi r4, r4, lbl_80823CE0@l
    addi r25, r3, 0x3
    lhz r0, 0x462e(r4)
    srawi r0, r0, 8
    stb r0, 0x0(r3)
    lhz r0, 0x462e(r4)
    stb r0, 0x1(r3)
    stb r27, 0x2(r3)
    beq lbl_fn_8065034C_00001CF8
    cmpwi r28, 0x0
    beq lbl_fn_8065034C_00001CF8
    mr r3, r25
    mr r4, r28
    mr r5, r27
    bl memcpy
    add r25, r25, r27
lbl_fn_8065034C_00001CF8:
    subf r4, r31, r25
    li r3, 0x1
    subi r6, r4, 0x2
    subf r0, r30, r25
    extrwi r5, r6, 8, 16
    mr r4, r29
    stb r5, 0x0(r31)
    stb r6, 0x1(r31)
    stb r3, 0x474(r26)
    sth r0, 0x2(r29)
    lhz r3, 0x22(r26)
    bl fn_80642A34
    addi r3, r26, 0x8
    li r4, 0x5
    li r5, 0x1e
    bl fn_80629E20
lbl_fn_8065034C_00001D38:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8065047C(void)
{
    nofralloc
    lbz r0, 0x475(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8065047C_00001D70
    li r0, 0x3
    li r4, 0x0
    stb r0, 0x474(r3)
    li r5, 0x0
    b fn_806509E0
lbl_fn_8065047C_00001D70:
    li r0, 0x0
    li r4, 0x0
    sth r0, 0x46c(r3)
    li r5, 0x0
    b fn_8065034C
}

asm void fn_806504B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x1
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    addi r3, r3, 0x8
    bl fn_80629E90
    lhz r0, 0x4(r29)
    lhz r3, 0x2(r29)
    add r4, r29, r0
    lbz r31, 0x8(r4)
    subi r5, r3, 0x1
    cmpwi r31, 0x5
    sth r5, 0x2(r29)
    beq lbl_fn_806504B0_00001E14
    bge lbl_fn_806504B0_00001DE4
    cmpwi r31, 0x3
    beq lbl_fn_806504B0_00001DF0
    b lbl_fn_806504B0_00001E58
lbl_fn_806504B0_00001DE4:
    cmpwi r31, 0x7
    beq lbl_fn_806504B0_00001E38
    b lbl_fn_806504B0_00001E58
lbl_fn_806504B0_00001DF0:
    lbz r0, 0x474(r28)
    cmplwi r0, 0x1
    bne lbl_fn_806504B0_00001E58
    mr r3, r28
    addi r4, r4, 0x9
    clrlwi r5, r5, 16
    bl fn_806505F0
    li r30, 0x0
    b lbl_fn_806504B0_00001E58
lbl_fn_806504B0_00001E14:
    lbz r0, 0x474(r28)
    cmplwi r0, 0x2
    bne lbl_fn_806504B0_00001E58
    mr r3, r28
    addi r4, r4, 0x9
    clrlwi r5, r5, 16
    bl fn_80650738
    li r30, 0x0
    b lbl_fn_806504B0_00001E58
lbl_fn_806504B0_00001E38:
    lbz r0, 0x474(r28)
    cmplwi r0, 0x3
    bne lbl_fn_806504B0_00001E58
    mr r3, r28
    addi r4, r4, 0x9
    clrlwi r5, r5, 16
    bl fn_806509E0
    li r30, 0x0
lbl_fn_806504B0_00001E58:
    cmpwi r30, 0x0
    beq lbl_fn_806504B0_00001EA4
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806504B0_00001E90
    lis r3, 0xa
    lis r4, lbl_807B8338@ha
    lbz r6, 0x474(r28)
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B8338@l
    bl fn_80629850
lbl_fn_806504B0_00001E90:
    lis r4, 0x1
    mr r3, r28
    subi r0, r4, 0xd
    clrlwi r4, r0, 16
    bl fn_80651E64
lbl_fn_806504B0_00001EA4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806505F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r5, r4, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r6, 0x6(r4)
    lbz r0, 0x7(r4)
    slwi r4, r6, 8
    lhz r9, 0x46c(r3)
    add r0, r4, r0
    clrlwi r0, r0, 16
    add r0, r9, r0
    clrlwi. r6, r0, 16
    sth r0, 0x46c(r3)
    bne lbl_fn_806505F0_00001F44
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806505F0_00001F2C
    lis r3, 0xa
    lis r4, lbl_807B8360@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B8360@l
    bl fn_80629810
lbl_fn_806505F0_00001F2C:
    lis r4, 0x1
    mr r3, r31
    subi r0, r4, 0x10
    clrlwi r4, r0, 16
    bl fn_80651E64
    b lbl_fn_806505F0_00001FF8
lbl_fn_806505F0_00001F44:
    lis r4, lbl_80823CE0@ha
    addi r4, r4, lbl_80823CE0@l
    lhz r0, 0x462e(r4)
    cmplw r6, r0
    ble lbl_fn_806505F0_00001F9C
    sth r0, 0x46c(r3)
    b lbl_fn_806505F0_00001F9C
lbl_fn_806505F0_00001F60:
    clrlslwi r0, r9, 16, 2
    lbz r7, 0x0(r5)
    lbz r6, 0x1(r5)
    add r4, r3, r0
    lbz r0, 0x2(r5)
    slwi r8, r7, 24
    lbz r7, 0x3(r5)
    slwi r6, r6, 16
    slwi r0, r0, 8
    addi r5, r5, 0x4
    add r6, r8, r6
    addi r9, r9, 0x1
    add r0, r7, r0
    add r0, r6, r0
    stw r0, 0x418(r4)
lbl_fn_806505F0_00001F9C:
    lhz r0, 0x46c(r3)
    clrlwi r4, r9, 16
    cmplw r4, r0
    blt lbl_fn_806505F0_00001F60
    lbz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_fn_806505F0_00001FE0
    cmplwi r4, 0x10
    ble lbl_fn_806505F0_00001FD0
    mr r3, r31
    li r4, 0x5
    bl fn_80651E64
    b lbl_fn_806505F0_00001FF8
lbl_fn_806505F0_00001FD0:
    mr r3, r31
    addi r5, r5, 0x1
    bl fn_8065034C
    b lbl_fn_806505F0_00001FF8
lbl_fn_806505F0_00001FE0:
    li r0, 0x2
    li r4, 0x0
    stb r0, 0x474(r3)
    mr r3, r31
    li r5, 0x0
    bl fn_80650738
lbl_fn_806505F0_00001FF8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80650738(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r4, 0x0
    mr r26, r3
    mr r27, r4
    li r29, 0x0
    beq lbl_fn_80650738_00002100
    lbz r5, 0x4(r4)
    addi r27, r4, 0x6
    lbz r0, 0x5(r4)
    slwi r4, r5, 8
    lhz r5, 0x24(r3)
    add r0, r4, r0
    clrlwi r25, r0, 16
    add r0, r5, r25
    cmpwi r0, 0x3e8
    ble lbl_fn_80650738_00002068
    li r4, 0x4
    bl fn_80651E64
    b lbl_fn_80650738_0000229C
lbl_fn_80650738_00002068:
    add r3, r3, r5
    mr r4, r27
    mr r5, r25
    addi r3, r3, 0x26
    bl memcpy
    lhz r0, 0x24(r26)
    add r0, r0, r25
    sth r0, 0x24(r26)
    lbzux r3, r27, r25
    cmpwi r3, 0x0
    beq lbl_fn_80650738_000020B4
    cmplwi r3, 0x10
    ble lbl_fn_80650738_000020AC
    mr r3, r26
    li r4, 0x5
    bl fn_80651E64
    b lbl_fn_80650738_0000229C
lbl_fn_80650738_000020AC:
    li r29, 0x1
    b lbl_fn_80650738_00002100
lbl_fn_80650738_000020B4:
    clrlwi r0, r0, 16
    mr r3, r26
    add r5, r26, r0
    addi r4, r26, 0x26
    addi r5, r5, 0x26
    bl fn_80650CB4
    cmpwi r3, 0x0
    bne lbl_fn_80650738_000020EC
    lis r4, 0x1
    mr r3, r26
    subi r0, r4, 0xc
    clrlwi r4, r0, 16
    bl fn_80651E64
    b lbl_fn_80650738_0000229C
lbl_fn_80650738_000020EC:
    lhz r3, 0x46e(r26)
    li r0, 0x0
    sth r0, 0x24(r26)
    addi r0, r3, 0x1
    sth r0, 0x46e(r26)
lbl_fn_80650738_00002100:
    lhz r3, 0x46e(r26)
    lhz r0, 0x46c(r26)
    cmplw r3, r0
    bge lbl_fn_80650738_00002290
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80650738_00002134
    mr r3, r26
    li r4, 0x6
    bl fn_80651E64
    b lbl_fn_80650738_0000229C
lbl_fn_80650738_00002134:
    li r0, 0x9
    lis r4, lbl_80823CE0@ha
    sth r0, 0x4(r3)
    addi r31, r3, 0x11
    li r0, 0x4
    addi r4, r4, lbl_80823CE0@l
    stb r0, 0x0(r31)
    addi r3, r31, 0x3
    mr r30, r3
    lhz r0, 0x470(r26)
    addi r3, r3, 0x8
    srawi r0, r0, 8
    stb r0, 0x1(r31)
    lhz r0, 0x470(r26)
    stb r0, 0x2(r31)
    lhz r5, 0x470(r26)
    lhz r0, 0x46e(r26)
    addi r5, r5, 0x1
    slwi r0, r0, 2
    sth r5, 0x470(r26)
    add r5, r26, r0
    lwz r0, 0x418(r5)
    srwi r0, r0, 24
    stb r0, 0x5(r31)
    lhz r0, 0x46e(r26)
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r0, 0x418(r5)
    extrwi r0, r0, 8, 8
    stb r0, 0x6(r31)
    lhz r0, 0x46e(r26)
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r0, 0x418(r5)
    extrwi r0, r0, 8, 16
    stb r0, 0x7(r31)
    lhz r0, 0x46e(r26)
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r0, 0x418(r5)
    stb r0, 0x8(r31)
    lhz r0, 0x462c(r4)
    srawi r0, r0, 8
    stb r0, 0x9(r31)
    lhz r0, 0x462c(r4)
    stb r0, 0xa(r31)
    lwz r4, 0x410(r26)
    lhz r5, 0x4c(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80650738_0000220C
    addi r4, r4, 0x4e
    bl fn_80652E90
    mr r25, r3
    b lbl_fn_80650738_0000221C
lbl_fn_80650738_0000220C:
    li r4, 0x0
    li r5, 0x0
    bl fn_80652E90
    mr r25, r3
lbl_fn_80650738_0000221C:
    cmpwi r29, 0x0
    beq lbl_fn_80650738_00002248
    lbz r5, 0x0(r27)
    mr r3, r25
    mr r4, r27
    addi r5, r5, 0x1
    bl memcpy
    lbz r0, 0x0(r27)
    add r3, r0, r25
    addi r4, r3, 0x1
    b lbl_fn_80650738_00002254
lbl_fn_80650738_00002248:
    li r0, 0x0
    addi r4, r25, 0x1
    stb r0, 0x0(r25)
lbl_fn_80650738_00002254:
    subf r3, r30, r4
    subf r0, r31, r4
    subi r5, r3, 0x2
    mr r4, r28
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r30)
    stb r5, 0x1(r30)
    sth r0, 0x2(r28)
    lhz r3, 0x22(r26)
    bl fn_80642A34
    addi r3, r26, 0x8
    li r4, 0x5
    li r5, 0x1e
    bl fn_80629E20
    b lbl_fn_80650738_0000229C
lbl_fn_80650738_00002290:
    mr r3, r26
    li r4, 0x0
    bl fn_80651E64
lbl_fn_80650738_0000229C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806509E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    li r29, 0x0
    beq lbl_fn_806509E0_00002358
    lbz r5, 0x4(r4)
    addi r28, r4, 0x6
    lbz r0, 0x5(r4)
    slwi r4, r5, 8
    lhz r5, 0x24(r3)
    add r0, r4, r0
    clrlwi r26, r0, 16
    add r0, r5, r26
    cmpwi r0, 0x3e8
    ble lbl_fn_806509E0_00002310
    li r4, 0x4
    bl fn_80651E64
    b lbl_fn_806509E0_00002570
lbl_fn_806509E0_00002310:
    add r3, r3, r5
    mr r4, r28
    mr r5, r26
    addi r3, r3, 0x26
    bl memcpy
    lhz r0, 0x24(r27)
    add r0, r0, r26
    sth r0, 0x24(r27)
    lbzux r0, r28, r26
    cmpwi r0, 0x0
    beq lbl_fn_806509E0_00002358
    cmplwi r0, 0x10
    ble lbl_fn_806509E0_00002354
    mr r3, r27
    li r4, 0x5
    bl fn_80651E64
    b lbl_fn_806509E0_00002570
lbl_fn_806509E0_00002354:
    li r29, 0x1
lbl_fn_806509E0_00002358:
    cmpwi r29, 0x0
    bne lbl_fn_806509E0_00002368
    cmpwi r28, 0x0
    bne lbl_fn_806509E0_000024A4
lbl_fn_806509E0_00002368:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806509E0_0000238C
    mr r3, r27
    li r4, 0x6
    bl fn_80651E64
    b lbl_fn_806509E0_00002570
lbl_fn_806509E0_0000238C:
    li r0, 0x9
    addi r31, r3, 0x11
    sth r0, 0x4(r3)
    li r0, 0x6
    addi r29, r31, 0x3
    stb r0, 0x11(r3)
    addi r3, r29, 0x2
    lhz r0, 0x470(r27)
    srawi r0, r0, 8
    stb r0, 0x1(r31)
    lhz r0, 0x470(r27)
    stb r0, 0x2(r31)
    lhz r4, 0x470(r27)
    lwz r6, 0x410(r27)
    addi r0, r4, 0x1
    sth r0, 0x470(r27)
    addi r5, r6, 0x10
    lhz r4, 0xc(r6)
    bl fn_80650260
    lis r4, lbl_80823CE0@ha
    addi r6, r3, 0x2
    addi r4, r4, lbl_80823CE0@l
    lhz r0, 0x462c(r4)
    srawi r0, r0, 8
    stb r0, 0x0(r3)
    lhz r0, 0x462c(r4)
    stb r0, 0x1(r3)
    lwz r4, 0x410(r27)
    lhz r5, 0x4c(r4)
    cmpwi r5, 0x0
    beq lbl_fn_806509E0_0000241C
    mr r3, r6
    addi r4, r4, 0x4e
    bl fn_80652E90
    mr r26, r3
    b lbl_fn_806509E0_00002430
lbl_fn_806509E0_0000241C:
    mr r3, r6
    li r4, 0x0
    li r5, 0x0
    bl fn_80652E90
    mr r26, r3
lbl_fn_806509E0_00002430:
    cmpwi r28, 0x0
    beq lbl_fn_806509E0_0000245C
    lbz r5, 0x0(r28)
    mr r3, r26
    mr r4, r28
    addi r5, r5, 0x1
    bl memcpy
    lbz r0, 0x0(r28)
    add r3, r0, r26
    addi r4, r3, 0x1
    b lbl_fn_806509E0_00002468
lbl_fn_806509E0_0000245C:
    li r0, 0x0
    addi r4, r26, 0x1
    stb r0, 0x0(r26)
lbl_fn_806509E0_00002468:
    subf r3, r29, r4
    subf r0, r31, r4
    subi r5, r3, 0x2
    mr r4, r30
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r29)
    stb r5, 0x1(r29)
    sth r0, 0x2(r30)
    lhz r3, 0x22(r27)
    bl fn_80642A34
    addi r3, r27, 0x8
    li r4, 0x5
    li r5, 0x1e
    bl fn_80629E20
    b lbl_fn_806509E0_00002570
lbl_fn_806509E0_000024A4:
    lbz r5, 0x26(r27)
    addi r3, r27, 0x27
    srawi r0, r5, 3
    cmpwi r0, 0x6
    beq lbl_fn_806509E0_000024E4
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806509E0_00002570
    lis r3, 0xa
    lis r4, lbl_807B8388@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B8388@l
    bl fn_80629830
    b lbl_fn_806509E0_00002570
lbl_fn_806509E0_000024E4:
    mr r4, r5
    addi r5, r1, 0x8
    bl fn_80653890
    lhz r5, 0x24(r27)
    mr r4, r3
    lwz r0, 0x8(r1)
    add r5, r27, r5
    addi r26, r5, 0x26
    add r0, r3, r0
    cmplw r0, r26
    beq lbl_fn_806509E0_0000255C
    mr r3, r27
    li r4, 0x5
    bl fn_80651E64
    b lbl_fn_806509E0_00002570
    b lbl_fn_806509E0_0000255C
lbl_fn_806509E0_00002524:
    lhz r0, 0x24(r27)
    mr r3, r27
    add r5, r27, r0
    addi r5, r5, 0x26
    bl fn_80650CB4
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_806509E0_0000255C
    lis r4, 0x1
    mr r3, r27
    subi r0, r4, 0xc
    clrlwi r4, r0, 16
    bl fn_80651E64
    b lbl_fn_806509E0_00002570
lbl_fn_806509E0_0000255C:
    cmplw r4, r26
    blt lbl_fn_806509E0_00002524
    mr r3, r27
    li r4, 0x0
    bl fn_80651E64
lbl_fn_806509E0_00002570:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80650CB4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lbz r6, 0x0(r4)
    lis r31, lbl_807B8338@ha
    mr r26, r3
    mr r27, r5
    srawi r0, r6, 3
    addi r31, r31, lbl_807B8338@l
    cmpwi r0, 0x6
    addi r3, r4, 0x1
    beq lbl_fn_80650CB4_000025F0
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80650CB4_000025E8
    lis r3, 0xa
    mr r5, r6
    addi r3, r3, 0x1
    addi r4, r31, 0x50
    bl fn_80629830
lbl_fn_80650CB4_000025E8:
    li r3, 0x0
    b lbl_fn_80650CB4_0000275C
lbl_fn_80650CB4_000025F0:
    mr r4, r6
    addi r5, r1, 0xc
    bl fn_80653890
    lwz r5, 0xc(r1)
    mr r30, r3
    add r0, r3, r5
    cmplw r0, r27
    ble lbl_fn_80650CB4_0000263C
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80650CB4_00002634
    lis r3, 0xa
    addi r4, r31, 0x78
    addi r3, r3, 0x1
    bl fn_80629830
lbl_fn_80650CB4_00002634:
    li r3, 0x0
    b lbl_fn_80650CB4_0000275C
lbl_fn_80650CB4_0000263C:
    lwz r3, 0x410(r26)
    addi r4, r26, 0x2
    bl fn_80650EA0
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80650CB4_00002680
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80650CB4_00002678
    lis r3, 0xa
    addi r4, r31, 0x98
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_80650CB4_00002678:
    li r3, 0x0
    b lbl_fn_80650CB4_0000275C
lbl_fn_80650CB4_00002680:
    lwz r0, 0xc(r1)
    add r28, r30, r0
    b lbl_fn_80650CB4_00002750
lbl_fn_80650CB4_0000268C:
    lbz r29, 0x0(r30)
    addi r3, r30, 0x1
    addi r5, r1, 0x8
    mr r4, r29
    bl fn_80653890
    extrwi r0, r29, 5, 24
    cmpwi r0, 0x1
    bne lbl_fn_80650CB4_000026B8
    lwz r0, 0x8(r1)
    cmplwi r0, 0x2
    beq lbl_fn_80650CB4_000026EC
lbl_fn_80650CB4_000026B8:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80650CB4_000026E4
    lis r3, 0xa
    lwz r6, 0x8(r1)
    mr r5, r29
    addi r4, r31, 0xa8
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_80650CB4_000026E4:
    li r3, 0x0
    b lbl_fn_80650CB4_0000275C
lbl_fn_80650CB4_000026EC:
    lbz r4, 0x0(r3)
    mr r5, r27
    lbz r0, 0x1(r3)
    li r7, 0x0
    slwi r6, r4, 8
    lwz r4, 0x410(r26)
    add r0, r6, r0
    li r8, 0x0
    clrlwi r6, r0, 16
    addi r3, r3, 0x2
    bl fn_80650F40
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80650CB4_00002750
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80650CB4_00002748
    lis r3, 0xa
    addi r4, r31, 0x98
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_80650CB4_00002748:
    li r3, 0x0
    b lbl_fn_80650CB4_0000275C
lbl_fn_80650CB4_00002750:
    cmplw r30, r28
    blt lbl_fn_80650CB4_0000268C
    mr r3, r30
lbl_fn_80650CB4_0000275C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80650EA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    cmplwi r5, 0x14
    bge lbl_fn_80650EA0_000027A0
    li r3, 0x0
    b lbl_fn_80650EA0_000027FC
lbl_fn_80650EA0_000027A0:
    lwz r31, 0x68(r3)
    subi r0, r5, 0x14
    stw r0, 0x4(r3)
    li r0, 0x0
    addi r6, r31, 0x14
    li r5, 0x6
    stw r6, 0x68(r3)
    addi r3, r31, 0xc
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    bl memcpy
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    bne lbl_fn_80650EA0_000027E8
    stw r31, 0x8(r30)
    b lbl_fn_80650EA0_000027F8
    b lbl_fn_80650EA0_000027E8
lbl_fn_80650EA0_000027E4:
    mr r3, r0
lbl_fn_80650EA0_000027E8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80650EA0_000027E4
    stw r31, 0x4(r3)
lbl_fn_80650EA0_000027F8:
    mr r3, r31
lbl_fn_80650EA0_000027FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80650F40(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lbz r21, 0x0(r3)
    lis r31, lbl_807B8338@ha
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r4, r21
    addi r31, r31, lbl_807B8338@l
    rlwinm r28, r8, 0, 24, 24
    clrlwi r27, r8, 25
    addi r5, r1, 0x8
    addi r3, r3, 0x1
    bl fn_80653890
    lwz r0, 0x8(r1)
    mr r22, r3
    extrwi r6, r21, 4, 25
    li r4, 0xc
    clrlwi r5, r0, 20
    cmplwi r5, 0x4
    stw r5, 0x8(r1)
    ble lbl_fn_80650F40_00002880
    addi r4, r5, 0x8
lbl_fn_80650F40_00002880:
    addi r4, r4, 0x3
    lwz r0, 0x4(r23)
    clrrwi r30, r4, 2
    cmplw r0, r30
    bge lbl_fn_80650F40_0000289C
    li r3, 0x0
    b lbl_fn_80650F40_00002D94
lbl_fn_80650F40_0000289C:
    lwz r29, 0x68(r23)
    clrlslwi r0, r6, 16, 12
    cmplwi r6, 0x8
    li r4, 0x0
    sth r25, 0x4(r29)
    lwz r5, 0x8(r1)
    clrlwi r5, r5, 16
    or r5, r5, r0
    sth r5, 0x6(r29)
    stw r4, 0x0(r29)
    bgt lbl_fn_80650F40_00002D14
    lis r5, jumptable_807B8470@ha
    slwi r4, r6, 2
    addi r5, r5, jumptable_807B8470@l
    lwzx r5, r5, r4
    mtctr r5
    bctr
    cmpwi r28, 0x0
    beq lbl_fn_80650F40_00002990
    lwz r0, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_fn_80650F40_00002990
    lbz r4, 0x0(r3)
    lbz r0, 0x1(r3)
    slwi r4, r4, 8
    add r0, r4, r0
    clrlwi r0, r0, 16
    cmplwi r0, 0x4
    bne lbl_fn_80650F40_00002990
    lwz r5, 0x68(r23)
    cmplwi r27, 0x5
    lwz r4, 0x4(r23)
    li r30, 0x0
    addi r5, r5, 0xc
    subi r0, r4, 0xc
    stw r5, 0x68(r23)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r1)
    add r4, r3, r0
    addi r21, r4, 0x2
    blt lbl_fn_80650F40_00002968
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80650F40_00002960
    addi r4, r31, 0xd8
    lis r3, 0xa
    bl fn_80629810
lbl_fn_80650F40_00002960:
    mr r3, r21
    b lbl_fn_80650F40_00002D94
lbl_fn_80650F40_00002968:
    addi r0, r27, 0x1
    mr r4, r23
    mr r5, r24
    mr r7, r29
    clrlwi r8, r0, 24
    li r6, 0x4
    addi r3, r3, 0x2
    bl fn_80650F40
    mr r22, r3
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_00002990:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x3
    beq lbl_fn_80650F40_00002A1C
    bge lbl_fn_80650F40_000029B0
    cmpwi r0, 0x1
    beq lbl_fn_80650F40_000029BC
    bge lbl_fn_80650F40_000029CC
    b lbl_fn_80650F40_00002A1C
lbl_fn_80650F40_000029B0:
    cmpwi r0, 0x5
    bge lbl_fn_80650F40_00002A1C
    b lbl_fn_80650F40_000029E8
lbl_fn_80650F40_000029BC:
    lbz r0, 0x0(r3)
    addi r22, r3, 0x1
    stb r0, 0x8(r29)
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_000029CC:
    lbz r4, 0x0(r3)
    addi r22, r3, 0x2
    lbz r0, 0x1(r3)
    slwi r3, r4, 8
    add r0, r3, r0
    sth r0, 0x8(r29)
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_000029E8:
    lbz r5, 0x0(r3)
    addi r22, r3, 0x4
    lbz r0, 0x2(r3)
    lbz r4, 0x1(r3)
    slwi r6, r5, 24
    slwi r0, r0, 8
    slwi r5, r4, 16
    lbz r4, 0x3(r3)
    add r3, r6, r5
    add r0, r4, r0
    add r0, r3, r0
    stw r0, 0x8(r29)
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_00002A1C:
    addi r3, r29, 0x8
    li r4, 0x0
    b lbl_fn_80650F40_00002A3C
lbl_fn_80650F40_00002A28:
    lbz r0, 0x0(r22)
    addi r4, r4, 0x1
    addi r22, r22, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_fn_80650F40_00002A3C:
    lwz r0, 0x8(r1)
    cmpw r4, r0
    blt lbl_fn_80650F40_00002A28
    b lbl_fn_80650F40_00002D14
    lwz r5, 0x8(r1)
    cmpwi r5, 0x4
    beq lbl_fn_80650F40_00002A90
    bge lbl_fn_80650F40_00002A68
    cmpwi r5, 0x2
    beq lbl_fn_80650F40_00002A74
    b lbl_fn_80650F40_00002BB0
lbl_fn_80650F40_00002A68:
    cmpwi r5, 0x10
    beq lbl_fn_80650F40_00002AE8
    b lbl_fn_80650F40_00002BB0
lbl_fn_80650F40_00002A74:
    lbz r4, 0x0(r3)
    addi r22, r3, 0x2
    lbz r0, 0x1(r3)
    slwi r3, r4, 8
    add r0, r3, r0
    sth r0, 0x8(r29)
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_00002A90:
    lbz r7, 0x0(r3)
    addi r22, r3, 0x4
    lbz r6, 0x1(r3)
    lis r4, 0x1
    slwi r8, r7, 24
    lbz r5, 0x2(r3)
    slwi r7, r6, 16
    lbz r6, 0x3(r3)
    slwi r3, r5, 8
    add r5, r8, r7
    add r3, r6, r3
    add r3, r5, r3
    cmplw r3, r4
    stw r3, 0x8(r29)
    bge lbl_fn_80650F40_00002D14
    li r3, 0x2
    ori r0, r0, 0x2
    stw r3, 0x8(r1)
    sth r0, 0x6(r29)
    lwz r0, 0x8(r29)
    sth r0, 0x8(r29)
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_00002AE8:
    mr r3, r22
    bl fn_80653960
    clrlwi. r0, r3, 24
    beq lbl_fn_80650F40_00002B80
    lbz r0, 0x0(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80650F40_00002B3C
    lbz r0, 0x1(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80650F40_00002B3C
    lhz r0, 0x6(r29)
    clrrwi r0, r0, 12
    ori r0, r0, 0x2
    sth r0, 0x6(r29)
    lbz r3, 0x2(r22)
    lbz r0, 0x3(r22)
    addi r22, r22, 0x10
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x8(r29)
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_00002B3C:
    lhz r0, 0x6(r29)
    clrrwi r0, r0, 12
    ori r0, r0, 0x4
    sth r0, 0x6(r29)
    lbz r4, 0x0(r22)
    lbz r3, 0x1(r22)
    lbz r0, 0x2(r22)
    slwi r5, r4, 24
    lbz r4, 0x3(r22)
    slwi r3, r3, 16
    slwi r0, r0, 8
    addi r22, r22, 0x10
    add r3, r5, r3
    add r0, r4, r0
    add r0, r3, r0
    stw r0, 0x8(r29)
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_00002B80:
    addi r3, r29, 0x8
    li r4, 0x0
    b lbl_fn_80650F40_00002BA0
lbl_fn_80650F40_00002B8C:
    lbz r0, 0x0(r22)
    addi r4, r4, 0x1
    addi r22, r22, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_fn_80650F40_00002BA0:
    lwz r0, 0x8(r1)
    cmpw r4, r0
    blt lbl_fn_80650F40_00002B8C
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_00002BB0:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80650F40_00002BD4
    lis r3, 0xa
    addi r4, r31, 0xf4
    addi r3, r3, 0x1
    bl fn_80629830
lbl_fn_80650F40_00002BD4:
    lwz r0, 0x8(r1)
    add r3, r22, r0
    b lbl_fn_80650F40_00002D94
    lwz r5, 0x68(r23)
    cmplwi r27, 0x5
    lwz r4, 0x4(r23)
    li r30, 0x0
    addi r5, r5, 0xc
    subi r0, r4, 0xc
    stw r5, 0x68(r23)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r1)
    add r21, r3, r0
    blt lbl_fn_80650F40_00002C34
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80650F40_00002C2C
    addi r4, r31, 0xd8
    lis r3, 0xa
    bl fn_80629810
lbl_fn_80650F40_00002C2C:
    mr r3, r21
    b lbl_fn_80650F40_00002D94
lbl_fn_80650F40_00002C34:
    cmpwi r28, 0x0
    bne lbl_fn_80650F40_00002C44
    cmplwi r25, 0xd
    bne lbl_fn_80650F40_00002C4C
lbl_fn_80650F40_00002C44:
    ori r0, r27, 0x80
    clrlwi r27, r0, 24
lbl_fn_80650F40_00002C4C:
    clrlwi r3, r27, 24
    addi r25, r3, 0x1
    b lbl_fn_80650F40_00002C88
lbl_fn_80650F40_00002C58:
    mr r3, r22
    mr r4, r23
    mr r5, r24
    mr r7, r29
    clrlwi r8, r25, 24
    li r6, 0x0
    bl fn_80650F40
    cmpwi r3, 0x0
    mr r22, r3
    bne lbl_fn_80650F40_00002C88
    li r3, 0x0
    b lbl_fn_80650F40_00002D94
lbl_fn_80650F40_00002C88:
    cmplw r22, r21
    blt lbl_fn_80650F40_00002C58
    b lbl_fn_80650F40_00002D14
    addi r3, r29, 0x8
    li r4, 0x0
    b lbl_fn_80650F40_00002CB4
lbl_fn_80650F40_00002CA0:
    lbz r0, 0x0(r22)
    addi r4, r4, 0x1
    addi r22, r22, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_fn_80650F40_00002CB4:
    lwz r0, 0x8(r1)
    cmpw r4, r0
    blt lbl_fn_80650F40_00002CA0
    b lbl_fn_80650F40_00002D14
    lwz r5, 0x8(r1)
    cmpwi r5, 0x1
    beq lbl_fn_80650F40_00002CD4
    b lbl_fn_80650F40_00002CE4
lbl_fn_80650F40_00002CD4:
    lbz r0, 0x0(r3)
    addi r22, r3, 0x1
    stb r0, 0x8(r29)
    b lbl_fn_80650F40_00002D14
lbl_fn_80650F40_00002CE4:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80650F40_00002D08
    lis r3, 0xa
    addi r4, r31, 0x114
    addi r3, r3, 0x1
    bl fn_80629830
lbl_fn_80650F40_00002D08:
    lwz r0, 0x8(r1)
    add r3, r22, r0
    b lbl_fn_80650F40_00002D94
lbl_fn_80650F40_00002D14:
    lwz r3, 0x68(r23)
    cmpwi r26, 0x0
    lwz r0, 0x4(r23)
    add r3, r3, r30
    subf r0, r30, r0
    stw r3, 0x68(r23)
    stw r0, 0x4(r23)
    bne lbl_fn_80650F40_00002D64
    lwz r3, 0x0(r24)
    cmpwi r3, 0x0
    bne lbl_fn_80650F40_00002D50
    stw r29, 0x0(r24)
    b lbl_fn_80650F40_00002D90
    b lbl_fn_80650F40_00002D50
lbl_fn_80650F40_00002D4C:
    mr r3, r0
lbl_fn_80650F40_00002D50:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80650F40_00002D4C
    stw r29, 0x0(r3)
    b lbl_fn_80650F40_00002D90
lbl_fn_80650F40_00002D64:
    lwz r3, 0x8(r26)
    cmpwi r3, 0x0
    bne lbl_fn_80650F40_00002D80
    stw r29, 0x8(r26)
    b lbl_fn_80650F40_00002D90
    b lbl_fn_80650F40_00002D80
lbl_fn_80650F40_00002D7C:
    mr r3, r0
lbl_fn_80650F40_00002D80:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80650F40_00002D7C
    stw r29, 0x0(r3)
lbl_fn_80650F40_00002D90:
    mr r3, r22
lbl_fn_80650F40_00002D94:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806514D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4634
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_807B8498@ha
    addi r30, r30, lbl_807B8498@l
    stw r29, 0x14(r1)
    lis r29, lbl_80823CE0@ha
    addi r3, r29, lbl_80823CE0@l
    bl memset
    lis r3, 0x1
    addi r31, r29, lbl_80823CE0@l
    li r7, 0x1
    li r5, 0x100
    subi r11, r3, 0x1
    li r10, 0xf0
    li r0, 0x15
    sth r5, 0x4(r31)
    addi r4, r30, 0x0
    li r29, 0x0
    stb r7, 0x2(r31)
    li r3, 0x0
    li r5, 0x0
    li r6, 0x0
    stb r7, 0x20(r31)
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    sth r11, 0x22(r31)
    sth r10, 0x462c(r31)
    sth r0, 0x462e(r31)
    bl fn_806373C8
    clrlwi. r0, r3, 24
    bne lbl_fn_806514D8_00002E5C
    lbz r0, 0x4630(r31)
    cmplwi r0, 0x1
    blt lbl_fn_806514D8_00002F30
    addi r4, r30, 0x14
    lis r3, 0xa
    bl fn_80629810
    b lbl_fn_806514D8_00002F30
lbl_fn_806514D8_00002E5C:
    addi r4, r30, 0x0
    li r3, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    bl fn_806373C8
    clrlwi. r0, r3, 24
    bne lbl_fn_806514D8_00002EA0
    lbz r0, 0x4630(r31)
    cmplwi r0, 0x1
    blt lbl_fn_806514D8_00002F30
    addi r4, r30, 0x38
    lis r3, 0xa
    bl fn_80629810
    b lbl_fn_806514D8_00002F30
lbl_fn_806514D8_00002EA0:
    lis r11, fn_80651678@ha
    lis r10, fn_8065173C@ha
    lis r9, fn_806518CC@ha
    lis r8, fn_80651A08@ha
    lis r7, fn_80651B84@ha
    lis r6, fn_80651F00@ha
    lis r5, fn_80651C7C@ha
    addi r11, r11, fn_80651678@l
    addi r10, r10, fn_8065173C@l
    addi r9, r9, fn_806518CC@l
    addi r8, r8, fn_80651A08@l
    addi r7, r7, fn_80651B84@l
    addi r6, r6, fn_80651F00@l
    addi r5, r5, fn_80651C7C@l
    stb r29, 0x4630(r31)
    addi r4, r31, 0x4604
    li r3, 0x1
    stw r11, 0x4604(r31)
    stw r10, 0x4608(r31)
    stw r29, 0x460c(r31)
    stw r9, 0x4610(r31)
    stw r8, 0x4614(r31)
    stw r7, 0x4618(r31)
    stw r6, 0x461c(r31)
    stw r29, 0x4620(r31)
    stw r5, 0x4624(r31)
    stw r29, 0x4628(r31)
    bl fn_80642174
    clrlwi. r0, r3, 24
    bne lbl_fn_806514D8_00002F30
    lbz r0, 0x4630(r31)
    cmplwi r0, 0x1
    blt lbl_fn_806514D8_00002F30
    addi r4, r30, 0x60
    lis r3, 0xa
    bl fn_80629810
lbl_fn_806514D8_00002F30:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80651678(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80652DE4
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80651678_00002FF0
    li r0, 0x2
    mr r4, r28
    stb r0, 0x0(r3)
    li r5, 0x6
    addi r3, r3, 0x2
    bl memcpy
    sth r29, 0x22(r30)
    mr r3, r28
    mr r4, r31
    mr r5, r29
    li r6, 0x0
    li r7, 0x0
    bl fn_806425D4
    lis r31, lbl_80823CE0@ha
    mr r3, r29
    addi r4, r31, lbl_80823CE0@l
    bl fn_80642764
    addi r3, r31, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80651678_00002FF0
    lis r3, 0xa
    lis r4, lbl_807B8510@ha
    lhz r5, 0x22(r30)
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B8510@l
    bl fn_80629830
lbl_fn_80651678_00002FF0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065173C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    lis r30, lbl_807B8498@ha
    addi r30, r30, lbl_807B8498@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80652D54
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8065173C_00003078
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8065173C_00003180
    lis r3, 0xa
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r30, 0xb0
    bl fn_80629830
    b lbl_fn_8065173C_00003180
lbl_fn_8065173C_00003078:
    cmpwi r31, 0x0
    bne lbl_fn_8065173C_000030CC
    lbz r0, 0x0(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8065173C_000030CC
    li r0, 0x2
    lis r31, lbl_80823CE0@ha
    stb r0, 0x0(r3)
    mr r3, r28
    addi r4, r31, lbl_80823CE0@l
    bl fn_80642764
    addi r3, r31, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8065173C_00003180
    lis r3, 0xa
    lhz r5, 0x22(r29)
    addi r3, r3, 0x3
    addi r4, r30, 0xdc
    bl fn_80629830
    b lbl_fn_8065173C_00003180
lbl_fn_8065173C_000030CC:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8065173C_000030F8
    lis r3, 0xa
    lhz r6, 0x22(r29)
    mr r5, r31
    addi r4, r30, 0x108
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_8065173C_000030F8:
    lwz r12, 0x414(r29)
    cmpwi r12, 0x0
    beq lbl_fn_8065173C_00003178
    cmplwi r31, 0xe
    beq lbl_fn_8065173C_0000312C
    cmplwi r31, 0x5
    beq lbl_fn_8065173C_0000312C
    cmplwi r31, 0x18
    beq lbl_fn_8065173C_0000312C
    cmplwi r31, 0x29
    beq lbl_fn_8065173C_0000312C
    cmplwi r31, 0x6
    bne lbl_fn_8065173C_00003144
lbl_fn_8065173C_0000312C:
    lis r3, 0x1
    subi r0, r3, 0xa
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
    b lbl_fn_8065173C_00003178
lbl_fn_8065173C_00003144:
    cmplwi r31, 0xf
    bne lbl_fn_8065173C_00003164
    lis r3, 0x1
    subi r0, r3, 0x9
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
    b lbl_fn_8065173C_00003178
lbl_fn_8065173C_00003164:
    lis r3, 0x1
    subi r0, r3, 0xf
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
lbl_fn_8065173C_00003178:
    mr r3, r29
    bl fn_80652E58
lbl_fn_8065173C_00003180:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806518CC(void)
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
    bl fn_80652D54
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806518CC_00003200
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806518CC_000032C0
    lis r3, 0xa
    lis r4, lbl_807B85D0@ha
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B85D0@l
    bl fn_80629830
    b lbl_fn_806518CC_000032C0
lbl_fn_806518CC_00003200:
    lbz r0, 0x2(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806518CC_00003218
    li r0, 0x100
    sth r0, 0x20(r3)
    b lbl_fn_806518CC_00003234
lbl_fn_806518CC_00003218:
    lhz r0, 0x4(r30)
    cmplwi r0, 0x100
    ble lbl_fn_806518CC_00003230
    li r0, 0x100
    sth r0, 0x20(r3)
    b lbl_fn_806518CC_00003234
lbl_fn_806518CC_00003230:
    sth r0, 0x20(r3)
lbl_fn_806518CC_00003234:
    li r0, 0x0
    mr r3, r29
    stb r0, 0x20(r30)
    mr r4, r30
    stb r0, 0x2(r30)
    sth r0, 0x0(r30)
    bl fn_8064281C
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_fn_806518CC_0000327C
    lis r3, 0xa
    lis r4, lbl_807B85FC@ha
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B85FC@l
    bl fn_80629830
lbl_fn_806518CC_0000327C:
    lbz r0, 0x1(r31)
    ori r3, r0, 0x2
    rlwinm. r0, r3, 0, 29, 29
    stb r3, 0x1(r31)
    beq lbl_fn_806518CC_000032C0
    li r0, 0x3
    stb r0, 0x0(r31)
    lbz r0, 0x1(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_806518CC_000032B0
    mr r3, r31
    bl fn_8065047C
    b lbl_fn_806518CC_000032C0
lbl_fn_806518CC_000032B0:
    addi r3, r31, 0x8
    li r4, 0x5
    li r5, 0x1e
    bl fn_80629E20
lbl_fn_806518CC_000032C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80651A08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80823CE0@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80823CE0@l
    stw r31, 0x1c(r1)
    lis r31, lbl_807B8498@ha
    addi r31, r31, lbl_807B8498@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x4630(r5)
    cmplwi r0, 0x4
    blt lbl_fn_80651A08_00003334
    lis r3, 0xa
    lhz r6, 0x0(r29)
    mr r5, r28
    addi r4, r31, 0x190
    addi r3, r3, 0x3
    bl fn_80629850
lbl_fn_80651A08_00003334:
    mr r3, r28
    bl fn_80652D54
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80651A08_00003374
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80651A08_00003438
    lis r3, 0xa
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r31, 0x138
    bl fn_80629830
    b lbl_fn_80651A08_00003438
lbl_fn_80651A08_00003374:
    lhz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80651A08_000033C4
    lbz r0, 0x1(r3)
    ori r4, r0, 0x4
    rlwinm. r0, r4, 0, 30, 30
    stb r4, 0x1(r3)
    beq lbl_fn_80651A08_00003438
    li r0, 0x3
    stb r0, 0x0(r3)
    lbz r0, 0x1(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_80651A08_000033B0
    bl fn_8065047C
    b lbl_fn_80651A08_00003438
lbl_fn_80651A08_000033B0:
    li r4, 0x5
    li r5, 0x1e
    addi r3, r3, 0x8
    bl fn_80629E20
    b lbl_fn_80651A08_00003438
lbl_fn_80651A08_000033C4:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80651A08_000033EC
    lis r3, 0xa
    lhz r5, 0x22(r30)
    addi r3, r3, 0x3
    addi r4, r31, 0x1bc
    bl fn_80629830
lbl_fn_80651A08_000033EC:
    lbz r0, 0x0(r30)
    cmplwi r0, 0x1
    beq lbl_fn_80651A08_00003410
    lhz r3, 0x22(r30)
    bl fn_806428EC
    lis r3, 0x1
    subi r0, r3, 0xe
    sth r0, 0x472(r30)
    b lbl_fn_80651A08_00003438
lbl_fn_80651A08_00003410:
    lwz r12, 0x414(r30)
    cmpwi r12, 0x0
    beq lbl_fn_80651A08_00003430
    lis r3, 0x1
    subi r0, r3, 0xe
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
lbl_fn_80651A08_00003430:
    mr r3, r30
    bl fn_80652E58
lbl_fn_80651A08_00003438:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80651B84(void)
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
    bl fn_80652D54
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80651B84_000034B8
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80651B84_00003534
    lis r3, 0xa
    lis r4, lbl_807B8670@ha
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B8670@l
    bl fn_80629830
    b lbl_fn_80651B84_00003534
lbl_fn_80651B84_000034B8:
    cmpwi r30, 0x0
    beq lbl_fn_80651B84_000034C8
    mr r3, r29
    bl fn_80642990
lbl_fn_80651B84_000034C8:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80651B84_000034F4
    lis r3, 0xa
    lis r4, lbl_807B869C@ha
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B869C@l
    bl fn_80629830
lbl_fn_80651B84_000034F4:
    lwz r12, 0x414(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80651B84_0000352C
    lbz r5, 0x0(r31)
    lis r3, 0x1
    subi r0, r3, 0xf
    subi r4, r5, 0x3
    subfic r3, r5, 0x3
    nor r3, r4, r3
    srawi r3, r3, 31
    andc r0, r0, r3
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
lbl_fn_80651B84_0000352C:
    mr r3, r31
    bl fn_80652E58
lbl_fn_80651B84_00003534:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80651C7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80652D54
    cmpwi r3, 0x0
    beq lbl_fn_80651C7C_000035D8
    lbz r5, 0x0(r3)
    cmplwi r5, 0x3
    bne lbl_fn_80651C7C_000035A8
    lbz r0, 0x1(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_80651C7C_0000359C
    mr r4, r31
    bl fn_806504B0
    b lbl_fn_80651C7C_00003604
lbl_fn_80651C7C_0000359C:
    mr r4, r31
    bl fn_80652044
    b lbl_fn_80651C7C_00003604
lbl_fn_80651C7C_000035A8:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80651C7C_00003604
    lis r3, 0xa
    lis r4, lbl_807B86C0@ha
    mr r6, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B86C0@l
    bl fn_80629850
    b lbl_fn_80651C7C_00003604
lbl_fn_80651C7C_000035D8:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80651C7C_00003604
    lis r3, 0xa
    lis r4, lbl_807B86F8@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B86F8@l
    bl fn_80629830
lbl_fn_80651C7C_00003604:
    mr r3, r31
    bl fn_80626D50
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80651D50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807B8498@ha
    addi r31, r31, lbl_807B8498@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80652DE4
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80651D50_00003684
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80651D50_0000367C
    lis r3, 0xa
    addi r4, r31, 0x28c
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_80651D50_0000367C:
    li r3, 0x0
    b lbl_fn_80651D50_0000371C
lbl_fn_80651D50_00003684:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80651D50_000036A8
    lis r3, 0xa
    addi r4, r31, 0x2a8
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_80651D50_000036A8:
    lbz r0, 0x1(r30)
    mr r4, r29
    addi r3, r30, 0x2
    li r5, 0x6
    ori r0, r0, 0x1
    stb r0, 0x1(r30)
    bl memcpy
    li r0, 0x1
    mr r4, r29
    stb r0, 0x0(r30)
    li r3, 0x1
    bl fn_806423A0
    clrlwi. r0, r3, 16
    beq lbl_fn_80651D50_000036EC
    sth r3, 0x22(r30)
    mr r3, r30
    b lbl_fn_80651D50_0000371C
lbl_fn_80651D50_000036EC:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80651D50_00003710
    lis r3, 0xa
    addi r4, r31, 0x2c0
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_80651D50_00003710:
    mr r3, r30
    bl fn_80652E58
    li r3, 0x0
lbl_fn_80651D50_0000371C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80651E64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80823CE0@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80823CE0@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x4630(r5)
    cmplwi r0, 0x4
    blt lbl_fn_80651E64_00003780
    lis r3, 0xa
    lis r4, lbl_807B8654@ha
    lhz r5, 0x22(r30)
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B8654@l
    bl fn_80629830
lbl_fn_80651E64_00003780:
    lbz r0, 0x0(r30)
    cmplwi r0, 0x1
    beq lbl_fn_80651E64_0000379C
    lhz r3, 0x22(r30)
    bl fn_806428EC
    sth r31, 0x472(r30)
    b lbl_fn_80651E64_000037BC
lbl_fn_80651E64_0000379C:
    lwz r12, 0x414(r30)
    cmpwi r12, 0x0
    beq lbl_fn_80651E64_000037B4
    mr r3, r31
    mtctr r12
    bctrl
lbl_fn_80651E64_000037B4:
    mr r3, r30
    bl fn_80652E58
lbl_fn_80651E64_000037BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80651F00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80652D54
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80651F00_0000382C
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80651F00_00003878
    lis r3, 0xa
    lis r4, lbl_807B8770@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B8770@l
    bl fn_80629830
    b lbl_fn_80651F00_00003878
lbl_fn_80651F00_0000382C:
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80651F00_00003858
    lis r3, 0xa
    lis r4, lbl_807B87A0@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B87A0@l
    bl fn_80629830
lbl_fn_80651F00_00003858:
    lwz r12, 0x414(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80651F00_00003870
    lhz r3, 0x472(r31)
    mtctr r12
    bctrl
lbl_fn_80651F00_00003870:
    mr r3, r31
    bl fn_80652E58
lbl_fn_80651F00_00003878:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80651FBC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80823CE0@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80823CE0@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4630(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80651FBC_000038D4
    lis r3, 0xa
    lis r4, lbl_807B87C8@ha
    lbz r5, 0x0(r31)
    addi r3, r3, 0x3
    lhz r6, 0x22(r31)
    addi r4, r4, lbl_807B87C8@l
    bl fn_80629850
lbl_fn_80651FBC_000038D4:
    lhz r3, 0x22(r31)
    bl fn_806428EC
    lwz r12, 0x414(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80651FBC_000038FC
    lis r3, 0x1
    subi r0, r3, 0xf
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
lbl_fn_80651FBC_000038FC:
    mr r3, r31
    bl fn_80652E58
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80652044(void)
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
    addi r3, r3, 0x8
    lhz r5, 0x4(r4)
    lhz r0, 0x2(r4)
    add r5, r4, r5
    li r4, 0x5
    addi r31, r5, 0x8
    li r5, 0x1e
    add r30, r31, r0
    bl fn_80629E20
    lbz r3, 0x3(r31)
    lbz r0, 0x4(r31)
    slwi r3, r3, 8
    lbz r6, 0x1(r31)
    add r0, r3, r0
    lbz r29, 0x0(r31)
    lbz r4, 0x2(r31)
    clrlwi r5, r0, 16
    addi r31, r31, 0x1
    slwi r6, r6, 8
    add r3, r31, r5
    addi r0, r3, 0x4
    add r3, r6, r4
    cmplw r0, r30
    clrlwi r4, r3, 16
    ble lbl_fn_80652044_000039B0
    mr r3, r28
    li r5, 0x4
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_80652044_00003A4C
lbl_fn_80652044_000039B0:
    cmpwi r29, 0x4
    beq lbl_fn_80652044_000039E8
    bge lbl_fn_80652044_000039C8
    cmpwi r29, 0x2
    beq lbl_fn_80652044_000039D4
    b lbl_fn_80652044_00003A10
lbl_fn_80652044_000039C8:
    cmpwi r29, 0x6
    beq lbl_fn_80652044_000039FC
    b lbl_fn_80652044_00003A10
lbl_fn_80652044_000039D4:
    mr r3, r28
    mr r7, r30
    addi r6, r31, 0x4
    bl fn_80652198
    b lbl_fn_80652044_00003A4C
lbl_fn_80652044_000039E8:
    mr r3, r28
    mr r7, r30
    addi r6, r31, 0x4
    bl fn_806525A8
    b lbl_fn_80652044_00003A4C
lbl_fn_80652044_000039FC:
    mr r3, r28
    mr r7, r30
    addi r6, r31, 0x4
    bl fn_80652938
    b lbl_fn_80652044_00003A4C
lbl_fn_80652044_00003A10:
    mr r3, r28
    li r5, 0x3
    li r6, 0x0
    bl fn_806531B4
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80652044_00003A4C
    lis r3, 0xa
    lis r4, lbl_807B87F8@ha
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B87F8@l
    bl fn_80629830
lbl_fn_80652044_00003A4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80652198(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x1d0
    bl _savegpr_14
    li r0, 0x0
    mr r30, r3
    stb r0, 0x17c(r1)
    mr r17, r4
    mr r4, r5
    mr r3, r6
    addi r5, r1, 0x58
    li r19, 0x0
    bl fn_806532F0
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_80652198_00003ABC
    lhz r0, 0x58(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80652198_00003AD4
lbl_fn_80652198_00003ABC:
    mr r3, r30
    mr r4, r17
    li r5, 0x3
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_80652198_00003E64
lbl_fn_80652198_00003AD4:
    lbz r4, 0x0(r3)
    lbz r0, 0x1(r3)
    slwi r3, r4, 8
    add r0, r3, r0
    clrlwi r18, r0, 16
    cmplwi r18, 0x14
    ble lbl_fn_80652198_00003AF4
    li r18, 0x14
lbl_fn_80652198_00003AF4:
    addi r14, r1, 0x8
    li r16, 0x0
    b lbl_fn_80652198_00003B28
lbl_fn_80652198_00003B00:
    mr r3, r19
    addi r4, r1, 0x58
    bl fn_8064F594
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_80652198_00003B34
    lwz r3, 0x0(r3)
    clrlslwi r0, r16, 16, 2
    addi r16, r16, 0x1
    stwx r3, r14, r0
lbl_fn_80652198_00003B28:
    clrlwi r0, r16, 16
    cmplw r0, r18
    blt lbl_fn_80652198_00003B00
lbl_fn_80652198_00003B34:
    lbz r0, 0x2(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80652198_00003BA8
    cmplwi r0, 0x2
    addi r3, r15, 0x3
    beq lbl_fn_80652198_00003B64
    mr r3, r30
    mr r4, r17
    li r5, 0x5
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_80652198_00003E64
lbl_fn_80652198_00003B64:
    lbz r0, 0x0(r3)
    lbz r3, 0x1(r3)
    slwi r4, r0, 8
    lhz r0, 0x476(r30)
    add r3, r4, r3
    clrlwi r31, r3, 16
    cmplw r31, r0
    beq lbl_fn_80652198_00003B9C
    mr r3, r30
    mr r4, r17
    li r5, 0x5
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_80652198_00003E64
lbl_fn_80652198_00003B9C:
    subf r0, r31, r16
    clrlwi r4, r0, 16
    b lbl_fn_80652198_00003BB0
lbl_fn_80652198_00003BA8:
    mr r4, r16
    li r31, 0x0
lbl_fn_80652198_00003BB0:
    lhz r3, 0x20(r30)
    clrlwi r0, r4, 16
    subi r3, r3, 0xc
    srawi r3, r3, 2
    addze r3, r3
    clrlwi r15, r3, 16
    cmplw r0, r15
    bgt lbl_fn_80652198_00003BD8
    mr r15, r4
    b lbl_fn_80652198_00003BEC
lbl_fn_80652198_00003BD8:
    lhz r3, 0x476(r30)
    li r0, 0x1
    stb r0, 0x17c(r1)
    add r0, r3, r15
    sth r0, 0x476(r30)
lbl_fn_80652198_00003BEC:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_80652198_00003C24
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80652198_00003E64
    lis r4, lbl_807B881C@ha
    lis r3, 0xa
    addi r4, r4, lbl_807B881C@l
    bl fn_80629810
    b lbl_fn_80652198_00003E64
lbl_fn_80652198_00003C24:
    li r0, 0x9
    addi r14, r3, 0x11
    sth r0, 0x4(r3)
    li r4, 0x3
    clrlwi r0, r15, 16
    addi r11, r14, 0x3
    stb r4, 0x11(r3)
    add r10, r31, r0
    srawi r5, r17, 8
    extrwi r4, r16, 8, 16
    stb r5, 0x12(r3)
    extrwi r0, r15, 8, 16
    cmpw r31, r10
    stb r17, 0x13(r3)
    stb r4, 0x16(r3)
    stb r16, 0x17(r3)
    stb r0, 0x18(r3)
    stw r11, 0x180(r1)
    addi r11, r11, 0x6
    stb r15, 0x19(r3)
    bge lbl_fn_80652198_00003DF8
    clrlwi r5, r10, 16
    subi r0, r10, 0x8
    subf r4, r31, r5
    clrlwi r4, r4, 16
    cmplwi r4, 0x8
    ble lbl_fn_80652198_00003DB8
    cmplw r31, r5
    bgt lbl_fn_80652198_00003DB8
    b lbl_fn_80652198_00003DAC
lbl_fn_80652198_00003C9C:
    clrlslwi r4, r31, 16, 2
    addi r17, r1, 0x8
    lwzux r8, r17, r4
    addi r31, r31, 0x8
    srwi r5, r8, 24
    lwz r24, 0x4(r17)
    stb r5, 0x0(r11)
    extrwi r6, r8, 8, 8
    lwz r4, 0x8(r17)
    extrwi r7, r8, 8, 16
    stb r6, 0x1(r11)
    srwi r9, r24, 24
    lwz r6, 0x10(r17)
    extrwi r18, r24, 8, 8
    stb r7, 0x2(r11)
    extrwi r21, r24, 8, 16
    lwz r7, 0x14(r17)
    srwi r27, r4, 24
    stb r8, 0x3(r11)
    extrwi r12, r4, 8, 8
    lwz r8, 0x18(r17)
    extrwi r15, r4, 8, 16
    stb r9, 0x4(r11)
    srwi r19, r6, 24
    lwz r9, 0x1c(r17)
    extrwi r20, r6, 8, 8
    stb r18, 0x5(r11)
    srwi r22, r7, 24
    lwz r5, 0xc(r17)
    extrwi r23, r7, 8, 8
    stb r21, 0x6(r11)
    extrwi r21, r6, 8, 16
    srwi r16, r5, 24
    extrwi r17, r5, 8, 8
    stb r24, 0x7(r11)
    extrwi r18, r5, 8, 16
    extrwi r24, r7, 8, 16
    srwi r25, r8, 24
    stb r27, 0x8(r11)
    extrwi r26, r8, 8, 8
    extrwi r27, r8, 8, 16
    srwi r28, r9, 24
    stb r12, 0x9(r11)
    extrwi r29, r9, 8, 8
    extrwi r12, r9, 8, 16
    stb r15, 0xa(r11)
    stb r4, 0xb(r11)
    stb r16, 0xc(r11)
    stb r17, 0xd(r11)
    stb r18, 0xe(r11)
    stb r5, 0xf(r11)
    stb r19, 0x10(r11)
    stb r20, 0x11(r11)
    stb r21, 0x12(r11)
    stb r6, 0x13(r11)
    stb r22, 0x14(r11)
    stb r23, 0x15(r11)
    stb r24, 0x16(r11)
    stb r7, 0x17(r11)
    stb r25, 0x18(r11)
    stb r26, 0x19(r11)
    stb r27, 0x1a(r11)
    stb r8, 0x1b(r11)
    stb r28, 0x1c(r11)
    stb r29, 0x1d(r11)
    stb r12, 0x1e(r11)
    stb r9, 0x1f(r11)
    addi r11, r11, 0x20
lbl_fn_80652198_00003DAC:
    clrlwi r4, r31, 16
    cmpw r4, r0
    blt lbl_fn_80652198_00003C9C
lbl_fn_80652198_00003DB8:
    addi r5, r1, 0x8
    b lbl_fn_80652198_00003DEC
lbl_fn_80652198_00003DC0:
    clrlslwi r0, r31, 16, 2
    addi r31, r31, 0x1
    lwzx r6, r5, r0
    srwi r0, r6, 24
    extrwi r4, r6, 8, 8
    stb r0, 0x0(r11)
    extrwi r0, r6, 8, 16
    stb r4, 0x1(r11)
    stb r0, 0x2(r11)
    stb r6, 0x3(r11)
    addi r11, r11, 0x4
lbl_fn_80652198_00003DEC:
    clrlwi r0, r31, 16
    cmpw r0, r10
    blt lbl_fn_80652198_00003DC0
lbl_fn_80652198_00003DF8:
    lbz r0, 0x17c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80652198_00003E28
    li r0, 0x2
    stb r0, 0x0(r11)
    lhz r0, 0x476(r30)
    srawi r0, r0, 8
    stb r0, 0x1(r11)
    lhz r0, 0x476(r30)
    stb r0, 0x2(r11)
    addi r11, r11, 0x3
    b lbl_fn_80652198_00003E34
lbl_fn_80652198_00003E28:
    li r0, 0x0
    stb r0, 0x0(r11)
    addi r11, r11, 0x1
lbl_fn_80652198_00003E34:
    lwz r0, 0x180(r1)
    lwz r5, 0x180(r1)
    subf r4, r0, r11
    subf r0, r14, r11
    subi r7, r4, 0x2
    extrwi r6, r7, 8, 16
    mr r4, r3
    stb r6, 0x0(r5)
    stb r7, 0x1(r5)
    sth r0, 0x2(r3)
    lhz r3, 0x22(r30)
    bl fn_80642A34
lbl_fn_80652198_00003E64:
    addi r11, r1, 0x1d0
    bl _restgpr_14
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_806525A8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_24
    lbz r9, 0x0(r6)
    addi r0, r6, 0x4
    lbz r8, 0x1(r6)
    cmplw r0, r7
    lbz r0, 0x2(r6)
    slwi r10, r9, 24
    slwi r8, r8, 16
    lbz r9, 0x3(r6)
    slwi r0, r0, 8
    mr r25, r3
    add r8, r10, r8
    mr r26, r4
    add r0, r9, r0
    mr r24, r7
    add r27, r8, r0
    ble lbl_fn_806525A8_00003EE0
    li r5, 0x2
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_806525A8_000041F4
lbl_fn_806525A8_00003EE0:
    lbz r4, 0x4(r6)
    lbz r0, 0x5(r6)
    slwi r4, r4, 8
    lhz r3, 0x20(r3)
    add r0, r4, r0
    clrlwi r30, r0, 16
    subi r0, r3, 0xa
    cmpw r30, r0
    ble lbl_fn_806525A8_00003F08
    clrlwi r30, r0, 16
lbl_fn_806525A8_00003F08:
    mr r4, r5
    addi r3, r6, 0x6
    addi r5, r1, 0x8
    bl fn_80653640
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_806525A8_00003F38
    lhz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806525A8_00003F38
    cmplw r3, r24
    ble lbl_fn_806525A8_00003F50
lbl_fn_806525A8_00003F38:
    mr r3, r25
    mr r4, r26
    li r5, 0x3
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_806525A8_000041F4
lbl_fn_806525A8_00003F50:
    mr r3, r27
    bl fn_8064F7A8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806525A8_00003F7C
    mr r3, r25
    mr r4, r26
    li r5, 0x2
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_806525A8_000041F4
lbl_fn_806525A8_00003F7C:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806525A8_00003FE0
    cmplwi r0, 0x2
    beq lbl_fn_806525A8_00003FA8
    mr r3, r25
    mr r4, r26
    li r5, 0x5
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_806525A8_000041F4
lbl_fn_806525A8_00003FA8:
    lbz r0, 0x1(r28)
    lbz r3, 0x2(r28)
    slwi r4, r0, 8
    lhz r0, 0x476(r25)
    add r3, r4, r3
    clrlwi r3, r3, 16
    cmplw r3, r0
    beq lbl_fn_806525A8_000040D8
    mr r3, r25
    mr r4, r26
    li r5, 0x5
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_806525A8_000041F4
lbl_fn_806525A8_00003FE0:
    li r0, 0x0
    addi r29, r25, 0x29
    sth r0, 0x476(r25)
    li r28, 0x0
    b lbl_fn_806525A8_00004074
lbl_fn_806525A8_00003FF4:
    clrlslwi r0, r28, 16, 2
    addi r31, r1, 0x8
    add r31, r31, r0
    mr r3, r27
    lhz r4, 0x2(r31)
    lhz r5, 0x4(r31)
    bl fn_8064F804
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_806525A8_00004070
    addi r0, r25, 0x26
    lwz r4, 0x0(r3)
    subf r0, r0, r29
    clrlwi r0, r0, 16
    subfic r0, r0, 0x3e8
    clrlwi r3, r0, 16
    subi r0, r3, 0x6
    cmplw r4, r0
    bgt lbl_fn_806525A8_00004084
    mr r3, r29
    mr r4, r24
    bl fn_80653060
    lhz r4, 0x2(r31)
    mr r29, r3
    lhz r0, 0x4(r31)
    cmplw r4, r0
    beq lbl_fn_806525A8_00004070
    lhz r3, 0x8(r24)
    subi r28, r28, 0x1
    addi r0, r3, 0x1
    sth r0, 0x2(r31)
lbl_fn_806525A8_00004070:
    addi r28, r28, 0x1
lbl_fn_806525A8_00004074:
    lhz r0, 0x8(r1)
    clrlwi r3, r28, 16
    cmplw r3, r0
    blt lbl_fn_806525A8_00003FF4
lbl_fn_806525A8_00004084:
    addi r0, r25, 0x26
    subf r0, r0, r29
    clrlwi r4, r0, 16
    sth r0, 0x24(r25)
    cmplwi r4, 0xff
    ble lbl_fn_806525A8_000040B8
    subi r3, r4, 0x3
    li r4, 0x36
    srawi r0, r3, 8
    stb r4, 0x26(r25)
    stb r0, 0x27(r25)
    stb r3, 0x28(r25)
    b lbl_fn_806525A8_000040D8
lbl_fn_806525A8_000040B8:
    subi r3, r4, 0x3
    subi r0, r4, 0x1
    li r5, 0x1
    li r4, 0x35
    sth r5, 0x476(r25)
    stb r4, 0x27(r25)
    stb r3, 0x28(r25)
    sth r0, 0x24(r25)
lbl_fn_806525A8_000040D8:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806525A8_00004114
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_fn_806525A8_000041F4
    lis r4, lbl_807B881C@ha
    lis r3, 0xa
    addi r4, r4, lbl_807B881C@l
    bl fn_80629810
    b lbl_fn_806525A8_000041F4
lbl_fn_806525A8_00004114:
    li r0, 0x9
    addi r29, r3, 0x11
    sth r0, 0x4(r3)
    li r3, 0x5
    addi r31, r29, 0x3
    extrwi r0, r26, 8, 16
    stb r3, 0x0(r29)
    mr r28, r31
    stb r0, 0x1(r29)
    stb r26, 0x2(r29)
    lhz r0, 0x24(r25)
    cmplw r0, r30
    bgt lbl_fn_806525A8_0000414C
    mr r30, r0
lbl_fn_806525A8_0000414C:
    extrwi r0, r30, 8, 16
    clrlwi r5, r30, 16
    stb r0, 0x2(r31)
    stb r30, 0x3(r31)
    addi r31, r31, 0x4
    mr r3, r31
    lhz r0, 0x476(r25)
    add r4, r25, r0
    addi r4, r4, 0x26
    bl memcpy
    lhz r0, 0x24(r25)
    clrlwi r3, r30, 16
    add r31, r31, r3
    lhz r4, 0x476(r25)
    subf r3, r30, r0
    clrlwi. r0, r3, 16
    sth r3, 0x24(r25)
    add r0, r4, r30
    sth r0, 0x476(r25)
    beq lbl_fn_806525A8_000041C0
    li r0, 0x2
    stb r0, 0x0(r31)
    lhz r0, 0x476(r25)
    srawi r0, r0, 8
    stb r0, 0x1(r31)
    lhz r0, 0x476(r25)
    stb r0, 0x2(r31)
    addi r31, r31, 0x3
    b lbl_fn_806525A8_000041CC
lbl_fn_806525A8_000041C0:
    li r0, 0x0
    stb r0, 0x0(r31)
    addi r31, r31, 0x1
lbl_fn_806525A8_000041CC:
    subf r3, r28, r31
    subf r0, r29, r31
    subi r5, r3, 0x2
    mr r4, r27
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r28)
    stb r5, 0x1(r28)
    sth r0, 0x2(r27)
    lhz r3, 0x22(r25)
    bl fn_80642A34
lbl_fn_806525A8_000041F4:
    addi r11, r1, 0x70
    bl _restgpr_24
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80652938(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    addi r11, r1, 0x1f0
    bl _savegpr_20
    mr r20, r5
    mr r21, r3
    mr r22, r4
    mr r3, r6
    mr r4, r20
    addi r5, r1, 0x90
    li r24, 0x0
    bl fn_806532F0
    cmpwi r3, 0x0
    beq lbl_fn_80652938_00004254
    lhz r0, 0x90(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80652938_0000426C
lbl_fn_80652938_00004254:
    mr r3, r21
    mr r4, r22
    li r5, 0x3
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_80652938_00004610
lbl_fn_80652938_0000426C:
    lbz r4, 0x0(r3)
    lbz r0, 0x1(r3)
    slwi r5, r4, 8
    lhz r4, 0x20(r21)
    add r0, r5, r0
    clrlwi r29, r0, 16
    subi r0, r4, 0xa
    cmpw r29, r0
    ble lbl_fn_80652938_00004294
    clrlwi r29, r0, 16
lbl_fn_80652938_00004294:
    mr r4, r20
    addi r5, r1, 0x4c
    addi r3, r3, 0x2
    bl fn_80653640
    cmpwi r3, 0x0
    beq lbl_fn_80652938_000042B8
    lhz r0, 0x4c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80652938_000042D0
lbl_fn_80652938_000042B8:
    mr r3, r21
    mr r4, r22
    li r5, 0x3
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_80652938_00004610
lbl_fn_80652938_000042D0:
    li r0, 0x8
    addi r6, r1, 0x4
    addi r5, r1, 0x48
    mtctr r0
lbl_fn_80652938_000042E0:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_80652938_000042E0
    lhz r0, 0x4(r5)
    sth r0, 0x4(r6)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80652938_00004360
    cmplwi r0, 0x2
    beq lbl_fn_80652938_00004328
    mr r3, r21
    mr r4, r22
    li r5, 0x5
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_80652938_00004610
lbl_fn_80652938_00004328:
    lbz r0, 0x1(r3)
    lbz r3, 0x2(r3)
    slwi r4, r0, 8
    lhz r0, 0x476(r21)
    add r3, r4, r3
    clrlwi r3, r3, 16
    cmplw r3, r0
    beq lbl_fn_80652938_000044F4
    mr r3, r21
    mr r4, r22
    li r5, 0x5
    li r6, 0x0
    bl fn_806531B4
    b lbl_fn_80652938_00004610
lbl_fn_80652938_00004360:
    li r0, 0x0
    addi r28, r21, 0x29
    sth r0, 0x476(r21)
    addi r4, r1, 0x90
    li r3, 0x0
    bl fn_8064F594
    mr r26, r3
    li r31, 0x8
    li r20, 0x36
    b lbl_fn_80652938_00004498
lbl_fn_80652938_00004388:
    addi r5, r1, 0x48
    addi r4, r1, 0x4
    mtctr r31
lbl_fn_80652938_00004394:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80652938_00004394
    lhz r0, 0x4(r4)
    mr r23, r28
    li r27, 0x0
    addi r28, r28, 0x3
    sth r0, 0x4(r5)
    b lbl_fn_80652938_00004448
lbl_fn_80652938_000043C0:
    clrlslwi r0, r27, 16, 2
    addi r30, r1, 0x4c
    add r30, r30, r0
    mr r3, r26
    lhz r4, 0x2(r30)
    lhz r5, 0x4(r30)
    bl fn_8064F804
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80652938_00004444
    addi r0, r21, 0x26
    lwz r4, 0x0(r3)
    subf r0, r0, r28
    clrlwi r0, r0, 16
    subfic r0, r0, 0x3e8
    clrlwi r3, r0, 16
    subi r0, r3, 0x6
    cmplw r4, r0
    ble lbl_fn_80652938_00004414
    li r24, 0x1
    b lbl_fn_80652938_00004458
lbl_fn_80652938_00004414:
    mr r3, r28
    mr r4, r25
    bl fn_80653060
    lhz r4, 0x2(r30)
    mr r28, r3
    lhz r0, 0x4(r30)
    cmplw r4, r0
    beq lbl_fn_80652938_00004444
    lhz r3, 0x8(r25)
    subi r27, r27, 0x1
    addi r0, r3, 0x1
    sth r0, 0x2(r30)
lbl_fn_80652938_00004444:
    addi r27, r27, 0x1
lbl_fn_80652938_00004448:
    lhz r0, 0x4c(r1)
    clrlwi r3, r27, 16
    cmplw r3, r0
    blt lbl_fn_80652938_000043C0
lbl_fn_80652938_00004458:
    cmpwi r24, 0x0
    bne lbl_fn_80652938_000044A0
    subf r3, r23, r28
    subi r0, r3, 0x3
    clrlwi. r3, r0, 16
    beq lbl_fn_80652938_00004484
    stb r20, 0x0(r23)
    extrwi r0, r3, 8, 16
    stb r0, 0x1(r23)
    stb r3, 0x2(r23)
    b lbl_fn_80652938_00004488
lbl_fn_80652938_00004484:
    mr r28, r23
lbl_fn_80652938_00004488:
    mr r3, r26
    addi r4, r1, 0x90
    bl fn_8064F594
    mr r26, r3
lbl_fn_80652938_00004498:
    cmpwi r26, 0x0
    bne lbl_fn_80652938_00004388
lbl_fn_80652938_000044A0:
    addi r0, r21, 0x26
    subf r0, r0, r28
    clrlwi r4, r0, 16
    sth r0, 0x24(r21)
    cmplwi r4, 0xff
    ble lbl_fn_80652938_000044D4
    subi r3, r4, 0x3
    li r4, 0x36
    srawi r0, r3, 8
    stb r4, 0x26(r21)
    stb r0, 0x27(r21)
    stb r3, 0x28(r21)
    b lbl_fn_80652938_000044F4
lbl_fn_80652938_000044D4:
    subi r3, r4, 0x3
    subi r0, r4, 0x1
    li r5, 0x1
    li r4, 0x35
    sth r5, 0x476(r21)
    stb r4, 0x27(r21)
    stb r3, 0x28(r21)
    sth r0, 0x24(r21)
lbl_fn_80652938_000044F4:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_80652938_00004530
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80652938_00004610
    lis r4, lbl_807B881C@ha
    lis r3, 0xa
    addi r4, r4, lbl_807B881C@l
    bl fn_80629810
    b lbl_fn_80652938_00004610
lbl_fn_80652938_00004530:
    li r0, 0x9
    addi r28, r3, 0x11
    sth r0, 0x4(r3)
    li r3, 0x7
    addi r30, r28, 0x3
    extrwi r0, r22, 8, 16
    stb r3, 0x0(r28)
    mr r31, r30
    stb r0, 0x1(r28)
    stb r22, 0x2(r28)
    lhz r0, 0x24(r21)
    cmplw r0, r29
    bgt lbl_fn_80652938_00004568
    mr r29, r0
lbl_fn_80652938_00004568:
    extrwi r0, r29, 8, 16
    clrlwi r5, r29, 16
    stb r0, 0x2(r30)
    stb r29, 0x3(r30)
    addi r30, r30, 0x4
    mr r3, r30
    lhz r0, 0x476(r21)
    add r4, r21, r0
    addi r4, r4, 0x26
    bl memcpy
    lhz r0, 0x24(r21)
    clrlwi r3, r29, 16
    add r30, r30, r3
    lhz r4, 0x476(r21)
    subf r3, r29, r0
    clrlwi. r0, r3, 16
    sth r3, 0x24(r21)
    add r0, r4, r29
    sth r0, 0x476(r21)
    beq lbl_fn_80652938_000045DC
    li r0, 0x2
    stb r0, 0x0(r30)
    lhz r0, 0x476(r21)
    srawi r0, r0, 8
    stb r0, 0x1(r30)
    lhz r0, 0x476(r21)
    stb r0, 0x2(r30)
    addi r30, r30, 0x3
    b lbl_fn_80652938_000045E8
lbl_fn_80652938_000045DC:
    li r0, 0x0
    stb r0, 0x0(r30)
    addi r30, r30, 0x1
lbl_fn_80652938_000045E8:
    subf r3, r31, r30
    subf r0, r28, r30
    subi r5, r3, 0x2
    mr r4, r25
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r31)
    stb r5, 0x1(r31)
    sth r0, 0x2(r25)
    lhz r3, 0x22(r21)
    bl fn_80642A34
lbl_fn_80652938_00004610:
    addi r11, r1, 0x1f0
    bl _restgpr_20
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_80652D54(void)
{
    nofralloc
    lis r4, lbl_80823CE0@ha
    addi r4, r4, lbl_80823CE0@l
    lbzu r0, 0x3c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80652D54_00004650
    lhz r0, 0x22(r4)
    cmplw r0, r3
    bne lbl_fn_80652D54_00004650
    mr r3, r4
    blr
lbl_fn_80652D54_00004650:
    lbzu r0, 0x478(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80652D54_00004670
    lhz r0, 0x22(r4)
    cmplw r0, r3
    bne lbl_fn_80652D54_00004670
    mr r3, r4
    blr
lbl_fn_80652D54_00004670:
    lbzu r0, 0x478(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80652D54_00004690
    lhz r0, 0x22(r4)
    cmplw r0, r3
    bne lbl_fn_80652D54_00004690
    mr r3, r4
    blr
lbl_fn_80652D54_00004690:
    lbzu r0, 0x478(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80652D54_000046B0
    lhz r0, 0x22(r4)
    cmplw r0, r3
    bne lbl_fn_80652D54_000046B0
    mr r3, r4
    blr
lbl_fn_80652D54_000046B0:
    li r3, 0x0
    blr
}

asm void fn_80652DE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80823CE0@ha
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x4
    addi r3, r3, lbl_80823CE0@l
    stw r31, 0xc(r1)
    addi r31, r3, 0x3c
    mtctr r0
lbl_fn_80652DE4_000046E0:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80652DE4_00004708
    mr r3, r31
    li r4, 0x0
    li r5, 0x478
    bl memset
    stw r31, 0x18(r31)
    mr r3, r31
    b lbl_fn_80652DE4_00004718
lbl_fn_80652DE4_00004708:
    addi r4, r4, 0x1
    addi r31, r31, 0x478
    bdnz lbl_fn_80652DE4_000046E0
    li r3, 0x0
lbl_fn_80652DE4_00004718:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80652E58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x8
    bl fn_80629E90
    li r0, 0x0
    stb r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80652E90(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_80652E90_0000477C
    slwi r0, r5, 2
    subf r0, r5, r0
    clrlwi r7, r0, 16
    b lbl_fn_80652E90_00004780
lbl_fn_80652E90_0000477C:
    li r7, 0x5
lbl_fn_80652E90_00004780:
    cmplwi r7, 0xff
    ble lbl_fn_80652E90_000047A4
    extrwi r0, r7, 8, 16
    li r6, 0x36
    stb r6, 0x0(r3)
    addi r6, r3, 0x3
    stb r0, 0x1(r3)
    stb r7, 0x2(r3)
    b lbl_fn_80652E90_000047B4
lbl_fn_80652E90_000047A4:
    li r0, 0x35
    stb r7, 0x1(r3)
    addi r6, r3, 0x2
    stb r0, 0x0(r3)
lbl_fn_80652E90_000047B4:
    cmpwi r4, 0x0
    bne lbl_fn_80652E90_000047E4
    li r0, 0xa
    li r3, 0x0
    stb r0, 0x0(r6)
    li r0, 0xff
    stb r3, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
    stb r0, 0x4(r6)
    addi r6, r6, 0x5
    b lbl_fn_80652E90_0000492C
lbl_fn_80652E90_000047E4:
    cmpwi r5, 0x0
    li r3, 0x0
    beq lbl_fn_80652E90_0000492C
    cmplwi r5, 0x8
    addis r7, r5, 0x1
    subi r7, r7, 0x8
    ble lbl_fn_80652E90_000048EC
    clrlwi r8, r7, 16
    li r0, 0x9
    addi r7, r8, 0x7
    srwi r7, r7, 3
    mtctr r7
    cmplwi r8, 0x0
    ble lbl_fn_80652E90_000048EC
lbl_fn_80652E90_0000481C:
    stb r0, 0x0(r6)
    addi r3, r3, 0x8
    lhz r7, 0x0(r4)
    srawi r7, r7, 8
    stb r7, 0x1(r6)
    lhz r7, 0x0(r4)
    stb r7, 0x2(r6)
    stb r0, 0x3(r6)
    lhz r7, 0x2(r4)
    srawi r7, r7, 8
    stb r7, 0x4(r6)
    lhz r7, 0x2(r4)
    stb r7, 0x5(r6)
    stb r0, 0x6(r6)
    lhz r7, 0x4(r4)
    srawi r7, r7, 8
    stb r7, 0x7(r6)
    lhz r7, 0x4(r4)
    stb r7, 0x8(r6)
    stb r0, 0x9(r6)
    lhz r7, 0x6(r4)
    srawi r7, r7, 8
    stb r7, 0xa(r6)
    lhz r7, 0x6(r4)
    stb r7, 0xb(r6)
    stb r0, 0xc(r6)
    lhz r7, 0x8(r4)
    srawi r7, r7, 8
    stb r7, 0xd(r6)
    lhz r7, 0x8(r4)
    stb r7, 0xe(r6)
    stb r0, 0xf(r6)
    lhz r7, 0xa(r4)
    srawi r7, r7, 8
    stb r7, 0x10(r6)
    lhz r7, 0xa(r4)
    stb r7, 0x11(r6)
    stb r0, 0x12(r6)
    lhz r7, 0xc(r4)
    srawi r7, r7, 8
    stb r7, 0x13(r6)
    lhz r7, 0xc(r4)
    stb r7, 0x14(r6)
    stb r0, 0x15(r6)
    lhz r7, 0xe(r4)
    srawi r7, r7, 8
    stb r7, 0x16(r6)
    lhz r7, 0xe(r4)
    addi r4, r4, 0x10
    stb r7, 0x17(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_80652E90_0000481C
lbl_fn_80652E90_000048EC:
    clrlwi r7, r3, 16
    li r8, 0x9
    subf r0, r7, r5
    mtctr r0
    cmplw r7, r5
    bge lbl_fn_80652E90_0000492C
lbl_fn_80652E90_00004904:
    stb r8, 0x0(r6)
    addi r3, r3, 0x1
    lhz r0, 0x0(r4)
    srawi r0, r0, 8
    stb r0, 0x1(r6)
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    stb r0, 0x2(r6)
    addi r6, r6, 0x3
    bdnz lbl_fn_80652E90_00004904
lbl_fn_80652E90_0000492C:
    mr r3, r6
    blr
}

asm void fn_80653060(void)
{
    nofralloc
    li r0, 0x9
    stb r0, 0x0(r3)
    lhz r0, 0x8(r4)
    srawi r0, r0, 8
    stb r0, 0x1(r3)
    lhz r0, 0x8(r4)
    stb r0, 0x2(r3)
    lbz r6, 0xa(r4)
    cmpwi r6, 0x5
    beq lbl_fn_80653060_000049BC
    bge lbl_fn_80653060_0000496C
    cmpwi r6, 0x4
    bge lbl_fn_80653060_00004974
    b lbl_fn_80653060_000049BC
lbl_fn_80653060_0000496C:
    cmpwi r6, 0x9
    bge lbl_fn_80653060_000049BC
lbl_fn_80653060_00004974:
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x5
    ori r0, r0, 0x5
    li r5, 0x0
    stb r0, 0x3(r3)
    lwz r0, 0x0(r4)
    stb r0, 0x4(r3)
    b lbl_fn_80653060_000049A8
lbl_fn_80653060_00004994:
    lwz r3, 0x4(r4)
    lbzx r0, r3, r5
    addi r5, r5, 0x1
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
lbl_fn_80653060_000049A8:
    lwz r0, 0x0(r4)
    cmpw r5, r0
    blt lbl_fn_80653060_00004994
    mr r3, r6
    blr
lbl_fn_80653060_000049BC:
    lwz r0, 0x0(r4)
    cmplwi r0, 0x10
    bgt lbl_fn_80653060_00004A40
    lis r5, jumptable_807B8838@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_807B8838@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    clrlslwi r0, r6, 27, 3
    addi r6, r3, 0x4
    stb r0, 0x3(r3)
    b lbl_fn_80653060_00004A58
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x4
    ori r0, r0, 0x1
    stb r0, 0x3(r3)
    b lbl_fn_80653060_00004A58
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x4
    ori r0, r0, 0x2
    stb r0, 0x3(r3)
    b lbl_fn_80653060_00004A58
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x4
    ori r0, r0, 0x3
    stb r0, 0x3(r3)
    b lbl_fn_80653060_00004A58
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x4
    ori r0, r0, 0x4
    stb r0, 0x3(r3)
    b lbl_fn_80653060_00004A58
lbl_fn_80653060_00004A40:
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x5
    ori r0, r0, 0x5
    stb r0, 0x3(r3)
    lwz r0, 0x0(r4)
    stb r0, 0x4(r3)
lbl_fn_80653060_00004A58:
    li r5, 0x0
    b lbl_fn_80653060_00004A74
lbl_fn_80653060_00004A60:
    lwz r3, 0x4(r4)
    lbzx r0, r3, r5
    addi r5, r5, 0x1
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
lbl_fn_80653060_00004A74:
    lwz r0, 0x0(r4)
    cmpw r5, r0
    blt lbl_fn_80653060_00004A60
    mr r3, r6
    blr
}

asm void fn_806531B4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r7, lbl_80823CE0@ha
    mr r31, r3
    addi r7, r7, lbl_80823CE0@l
    mr r30, r4
    lbz r0, 0x4630(r7)
    mr r25, r5
    mr r24, r6
    cmplwi r0, 0x2
    blt lbl_fn_806531B4_00004AD8
    lis r3, 0xa
    lis r4, lbl_807B887C@ha
    lhz r6, 0x22(r31)
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B887C@l
    bl fn_80629850
lbl_fn_806531B4_00004AD8:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_806531B4_00004B14
    lis r3, lbl_80823CE0@ha
    addi r3, r3, lbl_80823CE0@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_fn_806531B4_00004BAC
    lis r4, lbl_807B88B4@ha
    lis r3, 0xa
    addi r4, r4, lbl_807B88B4@l
    bl fn_80629810
    b lbl_fn_806531B4_00004BAC
lbl_fn_806531B4_00004B14:
    li r0, 0x9
    addi r28, r3, 0x11
    sth r0, 0x4(r3)
    li r0, 0x1
    addi r29, r28, 0x3
    srawi r3, r30, 8
    stb r0, 0x0(r28)
    mr r27, r29
    extrwi r0, r25, 8, 16
    cmpwi r24, 0x0
    stb r3, 0x1(r28)
    addi r29, r29, 0x4
    stb r30, 0x2(r28)
    stb r0, 0x5(r28)
    stb r25, 0x6(r28)
    beq lbl_fn_806531B4_00004B84
    mr r30, r24
    li r25, 0x0
    b lbl_fn_806531B4_00004B74
lbl_fn_806531B4_00004B60:
    lbz r0, 0x0(r30)
    addi r25, r25, 0x1
    addi r30, r30, 0x1
    stb r0, 0x0(r29)
    addi r29, r29, 0x1
lbl_fn_806531B4_00004B74:
    mr r3, r24
    bl strlen
    cmpw r25, r3
    blt lbl_fn_806531B4_00004B60
lbl_fn_806531B4_00004B84:
    subf r3, r27, r29
    subf r0, r28, r29
    subi r5, r3, 0x2
    mr r4, r26
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r27)
    stb r5, 0x1(r27)
    sth r0, 0x2(r26)
    lhz r3, 0x22(r31)
    bl fn_80642A34
lbl_fn_806531B4_00004BAC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806532F0(void)
{
    nofralloc
    li r0, 0x0
    addi r8, r3, 0x1
    sth r0, 0x0(r5)
    lbz r3, 0x0(r3)
    srawi r0, r3, 3
    clrlwi r6, r3, 29
    cmplwi r0, 0x6
    beq lbl_fn_806532F0_00004BEC
    li r3, 0x0
    blr
lbl_fn_806532F0_00004BEC:
    cmplwi r6, 0x7
    bgt lbl_fn_806532F0_00004C7C
    lis r3, jumptable_807B88F0@ha
    slwi r0, r6, 2
    addi r3, r3, jumptable_807B88F0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x2
    b lbl_fn_806532F0_00004C84
    li r0, 0x4
    b lbl_fn_806532F0_00004C84
    li r0, 0x10
    b lbl_fn_806532F0_00004C84
    lbz r0, 0x0(r8)
    addi r8, r8, 0x1
    b lbl_fn_806532F0_00004C84
    lbz r3, 0x0(r8)
    lbz r0, 0x1(r8)
    addi r8, r8, 0x2
    slwi r3, r3, 8
    add r0, r3, r0
    clrlwi r0, r0, 16
    b lbl_fn_806532F0_00004C84
    lbz r6, 0x0(r8)
    lbz r3, 0x1(r8)
    lbz r0, 0x2(r8)
    slwi r7, r6, 24
    lbz r6, 0x3(r8)
    slwi r3, r3, 16
    slwi r0, r0, 8
    addi r8, r8, 0x4
    add r3, r7, r3
    add r0, r6, r0
    add r0, r3, r0
    b lbl_fn_806532F0_00004C84
lbl_fn_806532F0_00004C7C:
    li r3, 0x0
    blr
lbl_fn_806532F0_00004C84:
    cmplw r0, r4
    blt lbl_fn_806532F0_00004C94
    li r3, 0x0
    blr
lbl_fn_806532F0_00004C94:
    add r0, r8, r0
    lis r4, jumptable_807B88D0@ha
    lis r3, 0x8000
    b lbl_fn_806532F0_00004EF8
lbl_fn_806532F0_00004CA4:
    lbz r7, 0x0(r8)
    addi r8, r8, 0x1
    srawi r6, r7, 3
    clrlwi r9, r7, 29
    cmplwi r6, 0x3
    beq lbl_fn_806532F0_00004CC4
    li r3, 0x0
    blr
lbl_fn_806532F0_00004CC4:
    cmplwi r9, 0x7
    bgt lbl_fn_806532F0_00004D50
    addi r7, r4, jumptable_807B88D0@l
    slwi r6, r9, 2
    lwzx r7, r7, r6
    mtctr r7
    bctr
    li r6, 0x2
    b lbl_fn_806532F0_00004D58
    li r6, 0x4
    b lbl_fn_806532F0_00004D58
    li r6, 0x10
    b lbl_fn_806532F0_00004D58
    lbz r6, 0x0(r8)
    addi r8, r8, 0x1
    b lbl_fn_806532F0_00004D58
    lbz r7, 0x0(r8)
    lbz r6, 0x1(r8)
    addi r8, r8, 0x2
    slwi r7, r7, 8
    add r6, r7, r6
    clrlwi r6, r6, 16
    b lbl_fn_806532F0_00004D58
    lbz r9, 0x0(r8)
    lbz r7, 0x1(r8)
    lbz r6, 0x2(r8)
    slwi r10, r9, 24
    lbz r9, 0x3(r8)
    slwi r7, r7, 16
    slwi r6, r6, 8
    addi r8, r8, 0x4
    add r7, r10, r7
    add r6, r9, r6
    add r6, r7, r6
    b lbl_fn_806532F0_00004D58
lbl_fn_806532F0_00004D50:
    li r3, 0x0
    blr
lbl_fn_806532F0_00004D58:
    cmplwi r6, 0x2
    beq lbl_fn_806532F0_00004D70
    cmplwi r6, 0x4
    beq lbl_fn_806532F0_00004D70
    cmplwi r6, 0x10
    bne lbl_fn_806532F0_00004EDC
lbl_fn_806532F0_00004D70:
    lhz r9, 0x0(r5)
    cmpwi cr1, r6, 0x0
    li r7, 0x0
    mulli r9, r9, 0x12
    add r9, r5, r9
    sth r6, 0x2(r9)
    ble cr1, lbl_fn_806532F0_00004ECC
    cmpwi r6, 0x8
    subi r10, r6, 0x8
    ble lbl_fn_806532F0_00004E98
    li r11, 0x0
    blt cr1, lbl_fn_806532F0_00004DB0
    subi r9, r3, 0x2
    cmpw r6, r9
    bgt lbl_fn_806532F0_00004DB0
    li r11, 0x1
lbl_fn_806532F0_00004DB0:
    cmpwi r11, 0x0
    beq lbl_fn_806532F0_00004E98
    addi r9, r10, 0x7
    srwi r9, r9, 3
    mtctr r9
    cmpwi r10, 0x0
    ble lbl_fn_806532F0_00004E98
lbl_fn_806532F0_00004DCC:
    lhz r9, 0x0(r5)
    lbz r10, 0x0(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x4(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x1(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x5(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x2(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x6(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x3(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x7(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x4(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x8(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x5(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x9(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x6(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0xa(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x7(r8)
    addi r8, r8, 0x8
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    addi r7, r7, 0x8
    stb r10, 0xb(r9)
    bdnz lbl_fn_806532F0_00004DCC
lbl_fn_806532F0_00004E98:
    subf r9, r7, r6
    mtctr r9
    cmpw r7, r6
    bge lbl_fn_806532F0_00004ECC
lbl_fn_806532F0_00004EA8:
    lhz r6, 0x0(r5)
    lbz r9, 0x0(r8)
    addi r8, r8, 0x1
    mulli r6, r6, 0x12
    add r6, r5, r6
    add r6, r6, r7
    addi r7, r7, 0x1
    stb r9, 0x4(r6)
    bdnz lbl_fn_806532F0_00004EA8
lbl_fn_806532F0_00004ECC:
    lhz r6, 0x0(r5)
    addi r6, r6, 0x1
    sth r6, 0x0(r5)
    b lbl_fn_806532F0_00004EE4
lbl_fn_806532F0_00004EDC:
    li r3, 0x0
    blr
lbl_fn_806532F0_00004EE4:
    clrlwi r6, r6, 16
    cmplwi r6, 0x10
    blt lbl_fn_806532F0_00004EF8
    li r3, 0x0
    blr
lbl_fn_806532F0_00004EF8:
    cmplw r8, r0
    blt lbl_fn_806532F0_00004CA4
    beq lbl_fn_806532F0_00004F0C
    li r3, 0x0
    blr
lbl_fn_806532F0_00004F0C:
    mr r3, r8
    blr
}

asm void fn_80653640(void)
{
    nofralloc
    li r0, 0x0
    sth r0, 0x0(r5)
    lbz r6, 0x0(r3)
    srawi r0, r6, 3
    clrlwi r6, r6, 29
    cmplwi r0, 0x6
    beq lbl_fn_80653640_00004F38
    addi r3, r3, 0x1
    blr
lbl_fn_80653640_00004F38:
    cmpwi r6, 0x6
    beq lbl_fn_80653640_00004F68
    bge lbl_fn_80653640_00004F50
    cmpwi r6, 0x5
    bge lbl_fn_80653640_00004F5C
    b lbl_fn_80653640_00004FB4
lbl_fn_80653640_00004F50:
    cmpwi r6, 0x8
    bge lbl_fn_80653640_00004FB4
    b lbl_fn_80653640_00004F84
lbl_fn_80653640_00004F5C:
    lbz r0, 0x1(r3)
    addi r6, r3, 0x2
    b lbl_fn_80653640_00004FBC
lbl_fn_80653640_00004F68:
    lbz r7, 0x1(r3)
    addi r6, r3, 0x3
    lbz r0, 0x2(r3)
    slwi r3, r7, 8
    add r0, r3, r0
    clrlwi r0, r0, 16
    b lbl_fn_80653640_00004FBC
lbl_fn_80653640_00004F84:
    lbz r8, 0x1(r3)
    addi r6, r3, 0x5
    lbz r7, 0x2(r3)
    lbz r0, 0x3(r3)
    slwi r8, r8, 24
    lbz r3, 0x4(r3)
    slwi r7, r7, 16
    slwi r0, r0, 8
    add r3, r7, r3
    add r0, r8, r0
    add r0, r3, r0
    b lbl_fn_80653640_00004FBC
lbl_fn_80653640_00004FB4:
    addi r3, r3, 0x1
    blr
lbl_fn_80653640_00004FBC:
    cmplw r0, r4
    ble lbl_fn_80653640_00004FCC
    mr r3, r6
    blr
lbl_fn_80653640_00004FCC:
    add r0, r6, r0
    b lbl_fn_80653640_00005154
lbl_fn_80653640_00004FD4:
    lbz r4, 0x0(r6)
    addi r6, r6, 0x1
    srawi r3, r4, 3
    clrlwi r4, r4, 29
    cmplwi r3, 0x1
    beq lbl_fn_80653640_00004FF4
    mr r3, r6
    blr
lbl_fn_80653640_00004FF4:
    cmpwi r4, 0x5
    beq lbl_fn_80653640_00005038
    bge lbl_fn_80653640_00005018
    cmpwi r4, 0x2
    beq lbl_fn_80653640_00005030
    bge lbl_fn_80653640_00005090
    cmpwi r4, 0x1
    bge lbl_fn_80653640_00005028
    b lbl_fn_80653640_00005090
lbl_fn_80653640_00005018:
    cmpwi r4, 0x7
    beq lbl_fn_80653640_00005060
    bge lbl_fn_80653640_00005090
    b lbl_fn_80653640_00005044
lbl_fn_80653640_00005028:
    li r3, 0x2
    b lbl_fn_80653640_00005098
lbl_fn_80653640_00005030:
    li r3, 0x4
    b lbl_fn_80653640_00005098
lbl_fn_80653640_00005038:
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    b lbl_fn_80653640_00005098
lbl_fn_80653640_00005044:
    lbz r4, 0x0(r6)
    lbz r3, 0x1(r6)
    addi r6, r6, 0x2
    slwi r4, r4, 8
    add r3, r4, r3
    clrlwi r3, r3, 16
    b lbl_fn_80653640_00005098
lbl_fn_80653640_00005060:
    lbz r7, 0x0(r6)
    lbz r4, 0x1(r6)
    lbz r3, 0x2(r6)
    slwi r8, r7, 24
    lbz r7, 0x3(r6)
    slwi r4, r4, 16
    slwi r3, r3, 8
    addi r6, r6, 0x4
    add r4, r8, r4
    add r3, r7, r3
    add r3, r4, r3
    b lbl_fn_80653640_00005098
lbl_fn_80653640_00005090:
    li r3, 0x0
    blr
lbl_fn_80653640_00005098:
    cmplwi r3, 0x2
    bne lbl_fn_80653640_000050DC
    lbz r7, 0x0(r6)
    lhz r3, 0x0(r5)
    lbz r4, 0x1(r6)
    slwi r7, r7, 8
    slwi r3, r3, 2
    addi r6, r6, 0x2
    add r4, r7, r4
    add r3, r5, r3
    sth r4, 0x2(r3)
    lhz r3, 0x0(r5)
    slwi r3, r3, 2
    add r4, r5, r3
    lhz r3, 0x2(r4)
    sth r3, 0x4(r4)
    b lbl_fn_80653640_00005134
lbl_fn_80653640_000050DC:
    cmplwi r3, 0x4
    bne lbl_fn_80653640_0000512C
    lbz r7, 0x0(r6)
    lhz r3, 0x0(r5)
    lbz r4, 0x1(r6)
    slwi r7, r7, 8
    slwi r3, r3, 2
    add r4, r7, r4
    add r3, r5, r3
    sth r4, 0x2(r3)
    lbz r7, 0x2(r6)
    lhz r3, 0x0(r5)
    lbz r4, 0x3(r6)
    slwi r7, r7, 8
    slwi r3, r3, 2
    addi r6, r6, 0x4
    add r4, r7, r4
    add r3, r5, r3
    sth r4, 0x4(r3)
    b lbl_fn_80653640_00005134
lbl_fn_80653640_0000512C:
    li r3, 0x0
    blr
lbl_fn_80653640_00005134:
    lhz r3, 0x0(r5)
    addi r4, r3, 0x1
    clrlwi r3, r4, 16
    sth r4, 0x0(r5)
    cmplwi r3, 0x10
    blt lbl_fn_80653640_00005154
    li r3, 0x0
    blr
lbl_fn_80653640_00005154:
    cmplw r6, r0
    blt lbl_fn_80653640_00004FD4
    mr r3, r6
    blr
}

asm void fn_80653890(void)
{
    nofralloc
    clrlwi r0, r4, 29
    mr r8, r3
    cmplwi r0, 0x7
    bgt lbl_fn_80653890_0000522C
    lis r4, jumptable_807B8910@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807B8910@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r0, 0x1
    stw r0, 0x0(r5)
    b lbl_fn_80653890_0000522C
    li r0, 0x2
    stw r0, 0x0(r5)
    b lbl_fn_80653890_0000522C
    li r0, 0x4
    stw r0, 0x0(r5)
    b lbl_fn_80653890_0000522C
    li r0, 0x8
    stw r0, 0x0(r5)
    b lbl_fn_80653890_0000522C
    li r0, 0x10
    stw r0, 0x0(r5)
    b lbl_fn_80653890_0000522C
    lbz r0, 0x0(r3)
    addi r8, r3, 0x1
    stw r0, 0x0(r5)
    b lbl_fn_80653890_0000522C
    lbz r4, 0x0(r3)
    addi r8, r3, 0x2
    lbz r0, 0x1(r3)
    slwi r3, r4, 8
    add r0, r3, r0
    clrlwi r0, r0, 16
    stw r0, 0x0(r5)
    b lbl_fn_80653890_0000522C
    lbz r6, 0x0(r3)
    addi r8, r3, 0x4
    lbz r0, 0x2(r3)
    lbz r4, 0x1(r3)
    slwi r7, r6, 24
    slwi r0, r0, 8
    slwi r6, r4, 16
    lbz r4, 0x3(r3)
    add r3, r7, r6
    add r0, r4, r0
    add r0, r3, r0
    clrlwi r0, r0, 16
    stw r0, 0x0(r5)
lbl_fn_80653890_0000522C:
    mr r3, r8
    blr
}

asm void fn_80653960(void)
{
    nofralloc
    lis r5, lbl_807650A8@ha
    li r0, 0x2
    addi r5, r5, lbl_807650A8@l
    li r6, 0x4
    mtctr r0
lbl_fn_80653960_00005248:
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_fn_80653960_00005264
    li r3, 0x0
    blr
lbl_fn_80653960_00005264:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_fn_80653960_00005284
    li r3, 0x0
    blr
lbl_fn_80653960_00005284:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_fn_80653960_000052A4
    li r3, 0x0
    blr
lbl_fn_80653960_000052A4:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_fn_80653960_000052C4
    li r3, 0x0
    blr
lbl_fn_80653960_000052C4:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_fn_80653960_000052E4
    li r3, 0x0
    blr
lbl_fn_80653960_000052E4:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_fn_80653960_00005304
    li r3, 0x0
    blr
lbl_fn_80653960_00005304:
    addi r6, r6, 0x1
    bdnz lbl_fn_80653960_00005248
    li r3, 0x1
    blr
}

asm void fn_80653A40(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplw r4, r6
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bne lbl_fn_80653A40_000053F0
    cmplwi r4, 0x2
    bne lbl_fn_80653A40_00005380
    lbz r4, 0x0(r3)
    li r6, 0x0
    lbz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_fn_80653A40_00005378
    lbz r3, 0x1(r3)
    lbz r0, 0x1(r5)
    cmplw r3, r0
    bne lbl_fn_80653A40_00005378
    li r6, 0x1
lbl_fn_80653A40_00005378:
    mr r3, r6
    b lbl_fn_80653A40_00005568
lbl_fn_80653A40_00005380:
    cmplwi r4, 0x4
    bne lbl_fn_80653A40_000053D4
    lbz r4, 0x0(r3)
    li r6, 0x0
    lbz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_fn_80653A40_000053E8
    lbz r4, 0x1(r3)
    lbz r0, 0x1(r5)
    cmplw r4, r0
    bne lbl_fn_80653A40_000053E8
    lbz r4, 0x2(r3)
    lbz r0, 0x2(r5)
    cmplw r4, r0
    bne lbl_fn_80653A40_000053E8
    lbz r3, 0x3(r3)
    lbz r0, 0x3(r5)
    cmplw r3, r0
    bne lbl_fn_80653A40_000053E8
    li r6, 0x1
    b lbl_fn_80653A40_000053E8
lbl_fn_80653A40_000053D4:
    mr r4, r30
    mr r5, r29
    bl fn_8067E23C
    cntlzw r0, r3
    extrwi r6, r0, 8, 19
lbl_fn_80653A40_000053E8:
    mr r3, r6
    b lbl_fn_80653A40_00005568
lbl_fn_80653A40_000053F0:
    ble lbl_fn_80653A40_000054B0
    cmplwi r4, 0x4
    bne lbl_fn_80653A40_00005444
    lbz r0, 0x0(r3)
    li r6, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80653A40_0000543C
    lbz r0, 0x1(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80653A40_0000543C
    lbz r4, 0x2(r3)
    lbz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_fn_80653A40_0000543C
    lbz r3, 0x3(r3)
    lbz r0, 0x1(r5)
    cmplw r3, r0
    bne lbl_fn_80653A40_0000543C
    li r6, 0x1
lbl_fn_80653A40_0000543C:
    mr r3, r6
    b lbl_fn_80653A40_00005568
lbl_fn_80653A40_00005444:
    mr r4, r28
    addi r3, r1, 0x18
    li r5, 0x10
    bl memcpy
    lis r4, lbl_807650A8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807650A8@l
    li r5, 0x10
    bl memcpy
    cmplwi r31, 0x4
    bne lbl_fn_80653A40_00005484
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl memcpy
    b lbl_fn_80653A40_00005494
lbl_fn_80653A40_00005484:
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0xa
    bl memcpy
lbl_fn_80653A40_00005494:
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    li r5, 0x10
    bl fn_8067E23C
    cntlzw r0, r3
    extrwi r3, r0, 8, 19
    b lbl_fn_80653A40_00005568
lbl_fn_80653A40_000054B0:
    cmplwi r6, 0x4
    bne lbl_fn_80653A40_00005500
    lbz r0, 0x0(r5)
    li r6, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80653A40_000054F8
    lbz r0, 0x1(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80653A40_000054F8
    lbz r4, 0x2(r5)
    lbz r0, 0x0(r3)
    cmplw r4, r0
    bne lbl_fn_80653A40_000054F8
    lbz r4, 0x3(r5)
    lbz r0, 0x1(r3)
    cmplw r4, r0
    bne lbl_fn_80653A40_000054F8
    li r6, 0x1
lbl_fn_80653A40_000054F8:
    mr r3, r6
    b lbl_fn_80653A40_00005568
lbl_fn_80653A40_00005500:
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x10
    bl memcpy
    lis r4, lbl_807650A8@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_807650A8@l
    li r5, 0x10
    bl memcpy
    cmplwi r29, 0x4
    bne lbl_fn_80653A40_00005540
    mr r4, r28
    mr r5, r29
    addi r3, r1, 0x18
    bl memcpy
    b lbl_fn_80653A40_00005550
lbl_fn_80653A40_00005540:
    mr r4, r28
    mr r5, r29
    addi r3, r1, 0x1a
    bl memcpy
lbl_fn_80653A40_00005550:
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    li r5, 0x10
    bl fn_8067E23C
    cntlzw r0, r3
    extrwi r3, r0, 8, 19
lbl_fn_80653A40_00005568:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80653CB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lhz r0, 0x6(r4)
    lhz r5, 0x0(r3)
    clrlwi r0, r0, 20
    cmplw r5, r0
    beq lbl_fn_80653CB4_000055B0
    li r3, 0x0
    b lbl_fn_80653CB4_00005608
lbl_fn_80653CB4_000055B0:
    cmplwi r5, 0x2
    bne lbl_fn_80653CB4_000055D0
    lhz r3, 0x4(r3)
    lhz r0, 0x8(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    b lbl_fn_80653CB4_00005608
lbl_fn_80653CB4_000055D0:
    cmplwi r5, 0x4
    bne lbl_fn_80653CB4_000055F0
    lwz r3, 0x4(r3)
    lwz r0, 0x8(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    b lbl_fn_80653CB4_00005608
lbl_fn_80653CB4_000055F0:
    li r5, 0x10
    addi r3, r3, 0x4
    addi r4, r4, 0x8
    bl fn_8067E23C
    cntlzw r0, r3
    extrwi r3, r0, 8, 19
lbl_fn_80653CB4_00005608:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
