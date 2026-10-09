#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8067E23C(void);
extern void fn_80682544(void);
extern void fn_806A4260(void);
extern void fn_806A4264(void);
extern void fn_806A4270(void);
extern void fn_806D57A0(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D5C90(void);
extern void fn_806D6140(void);
extern void fn_806D64B0(void);
extern void fn_806D6560(void);
extern void fn_806D6610(void);
extern void fn_806D7AC0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7B30(void);
extern void fn_806D7BB0(void);
extern void fn_806D7D60(void);
extern void fn_806D7DA0(void);
extern void fn_806D7EE0(void);
extern void fn_806D88D0(void);
extern void fn_806D8E30(void);
extern void fn_806D8F30(void);
extern void fn_806FD910(void);
extern void fn_806FDBC0(void);
extern void fn_806FE840(void);
extern void fn_806FE8B0(void);
extern void fn_806FE900(void);
extern void fn_806FE940(void);
extern void fn_806FE9A0(void);
extern void fn_806FEC90(void);
extern void fn_806FECB0(void);
extern void fn_806FED20(void);
extern void fn_806FED30(void);
extern void fn_806FF490(void);
extern void fn_806FF560(void);
extern void fn_806FF570(void);
extern void fn_806FF580(void);
extern void fn_806FF590(void);
extern void fn_806FF5A0(void);
extern void fn_806FF5B0(void);
extern void memmove(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B860[];
extern u8 lbl_807C5DF4[];
extern u8 lbl_807C5E14[];
extern u8 lbl_807C5E20[];
extern u8 lbl_80862AF8[];

/* Small data declarations */

/* Function declarations */
void pad_03_80701468_text(void);
void fn_80701470(void);
void fn_80701700(void);
void fn_80701870(void);
void fn_80701AA0(void);
void fn_80701B90(void);
void fn_80701CC0(void);
void fn_80701F90(void);
void fn_80702150(void);
void fn_80702A90(void);
void fn_80702C70(void);
void fn_80702E30(void);
void fn_80703000(void);
void fn_807031B0(void);

asm void pad_03_80701468_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_80701470(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    lis r7, lbl_8076B860@ha
    mr r29, r4
    lwzu r4, lbl_8076B860@l(r7)
    mr r28, r3
    stw r4, 0x20(r1)
    mr r30, r5
    lwz r0, 0x4(r7)
    mr r31, r6
    stw r0, 0x24(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80701470_0000017C
    lwz r3, 0x7c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80701470_0000005C
    bl fn_806D7AC0
lbl_fn_80701470_0000005C:
    lwz r3, 0x6b4(r28)
    li r0, 0x0
    stw r0, 0x7c(r28)
    cmpwi r3, -0x1
    stw r0, 0x80(r28)
    beq lbl_fn_80701470_00000078
    bl fn_806D7B30
lbl_fn_80701470_00000078:
    lwz r0, 0x8(r28)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r28)
    cmpwi r0, 0x0
    stw r3, 0x0(r28)
    beq lbl_fn_80701470_0000010C
    li r27, 0x0
    b lbl_fn_80701470_000000EC
lbl_fn_80701470_0000009C:
    lwz r3, 0x8(r28)
    mr r4, r27
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r3, r28
    stw r0, 0x8(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80701470_000000E8
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80701470_000000E8
    mr r3, r28
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6560
lbl_fn_80701470_000000E8:
    addi r27, r27, 0x1
lbl_fn_80701470_000000EC:
    lwz r3, 0x8(r28)
    bl fn_806D58F0
    cmpw r27, r3
    blt lbl_fn_80701470_0000009C
    lwz r3, 0x8(r28)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x8(r28)
lbl_fn_80701470_0000010C:
    li r0, -0x1
    stw r0, 0x484(r28)
    mr r26, r28
    li r27, 0x0
    b lbl_fn_80701470_00000168
lbl_fn_80701470_00000120:
    lwz r0, 0x84(r26)
    mr r3, r28
    stw r0, 0x10(r1)
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80701470_00000160
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80701470_00000160
    mr r3, r28
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6560
lbl_fn_80701470_00000160:
    addi r26, r26, 0x4
    addi r27, r27, 0x1
lbl_fn_80701470_00000168:
    lwz r0, 0x480(r28)
    cmpw r27, r0
    blt lbl_fn_80701470_00000120
    li r0, 0x0
    stw r0, 0x480(r28)
lbl_fn_80701470_0000017C:
    li r3, 0x2
    li r4, 0x2
    li r5, 0x11
    bl fn_806D7AE0
    cmpwi r3, -0x1
    stw r3, 0x6b4(r28)
    bne lbl_fn_80701470_000001A0
    li r3, 0x1
    b lbl_fn_80701470_00000280
lbl_fn_80701470_000001A0:
    li r27, 0x2
    stb r27, 0x29(r1)
    bl fn_806D88D0
    stw r3, 0x2c(r1)
    lwz r3, 0x7d4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80701470_000001F0
    stb r27, 0x19(r1)
    bl fn_806D7EE0
    li r0, 0x0
    stw r3, 0x1c(r1)
    addi r4, r1, 0x18
    li r5, 0x8
    sth r0, 0x1a(r1)
    lwz r3, 0x6b4(r28)
    bl fn_806D7BB0
    cmpwi r3, 0x0
    beq lbl_fn_80701470_000001F0
    li r3, 0x1
    b lbl_fn_80701470_00000280
lbl_fn_80701470_000001F0:
    subf r0, r29, r30
    cmpwi r0, 0x1f4
    ble lbl_fn_80701470_00000204
    addi r0, r29, 0x1f4
    clrlwi r30, r0, 16
lbl_fn_80701470_00000204:
    lis r27, lbl_807C5E14@ha
    b lbl_fn_80701470_00000260
lbl_fn_80701470_0000020C:
    clrlwi r3, r29, 16
    bl fn_806A4270
    cmpwi r31, 0x1
    sth r3, 0x2a(r1)
    bne lbl_fn_80701470_00000240
    lwz r3, 0x6b4(r28)
    addi r4, r1, 0x20
    addi r7, r1, 0x28
    li r5, 0x8
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    b lbl_fn_80701470_0000025C
lbl_fn_80701470_00000240:
    lwz r3, 0x6b4(r28)
    addi r4, r27, lbl_807C5E14@l
    addi r7, r1, 0x28
    li r5, 0xa
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
lbl_fn_80701470_0000025C:
    addi r29, r29, 0x1
lbl_fn_80701470_00000260:
    clrlwi r0, r29, 16
    cmplw r0, r30
    ble lbl_fn_80701470_0000020C
    li r0, 0x0
    stw r0, 0x0(r28)
    bl fn_806D8F30
    stw r3, 0x6b8(r28)
    li r3, 0x0
lbl_fn_80701470_00000280:
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80701700(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80701700_000002C8
    mr r3, r0
    bl fn_806D7AC0
lbl_fn_80701700_000002C8:
    lwz r3, 0x6b4(r31)
    li r0, 0x0
    stw r0, 0x7c(r31)
    cmpwi r3, -0x1
    stw r0, 0x80(r31)
    beq lbl_fn_80701700_000002E4
    bl fn_806D7B30
lbl_fn_80701700_000002E4:
    lwz r0, 0x8(r31)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r31)
    cmpwi r0, 0x0
    stw r3, 0x0(r31)
    beq lbl_fn_80701700_00000378
    li r30, 0x0
    b lbl_fn_80701700_00000358
lbl_fn_80701700_00000308:
    lwz r3, 0x8(r31)
    mr r4, r30
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r3, r31
    stw r0, 0x10(r1)
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80701700_00000354
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80701700_00000354
    mr r3, r31
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6560
lbl_fn_80701700_00000354:
    addi r30, r30, 0x1
lbl_fn_80701700_00000358:
    lwz r3, 0x8(r31)
    bl fn_806D58F0
    cmpw r30, r3
    blt lbl_fn_80701700_00000308
    lwz r3, 0x8(r31)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_fn_80701700_00000378:
    li r0, -0x1
    stw r0, 0x484(r31)
    mr r29, r31
    li r30, 0x0
    b lbl_fn_80701700_000003D4
lbl_fn_80701700_0000038C:
    lwz r0, 0x84(r29)
    mr r3, r31
    stw r0, 0x8(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80701700_000003CC
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80701700_000003CC
    mr r3, r31
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6560
lbl_fn_80701700_000003CC:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_80701700_000003D4:
    lwz r0, 0x480(r31)
    cmpw r30, r0
    blt lbl_fn_80701700_0000038C
    li r0, 0x0
    stw r0, 0x480(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80701870(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80701870_0000043C
    mr r3, r0
    bl fn_806D7AC0
lbl_fn_80701870_0000043C:
    lwz r3, 0x6b4(r31)
    li r0, 0x0
    stw r0, 0x7c(r31)
    cmpwi r3, -0x1
    stw r0, 0x80(r31)
    beq lbl_fn_80701870_00000458
    bl fn_806D7B30
lbl_fn_80701870_00000458:
    lwz r0, 0x8(r31)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r31)
    cmpwi r0, 0x0
    stw r3, 0x0(r31)
    beq lbl_fn_80701870_000004EC
    li r30, 0x0
    b lbl_fn_80701870_000004CC
lbl_fn_80701870_0000047C:
    lwz r3, 0x8(r31)
    mr r4, r30
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r3, r31
    stw r0, 0x10(r1)
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80701870_000004C8
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80701870_000004C8
    mr r3, r31
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6560
lbl_fn_80701870_000004C8:
    addi r30, r30, 0x1
lbl_fn_80701870_000004CC:
    lwz r3, 0x8(r31)
    bl fn_806D58F0
    cmpw r30, r3
    blt lbl_fn_80701870_0000047C
    lwz r3, 0x8(r31)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_fn_80701870_000004EC:
    li r0, -0x1
    stw r0, 0x484(r31)
    mr r28, r31
    li r30, 0x0
    b lbl_fn_80701870_00000548
lbl_fn_80701870_00000500:
    lwz r0, 0x84(r28)
    mr r3, r31
    stw r0, 0x18(r1)
    bl fn_806FE840
    addi r4, r1, 0x18
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80701870_00000540
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80701870_00000540
    mr r3, r31
    bl fn_806FE840
    addi r4, r1, 0x18
    bl fn_806D6560
lbl_fn_80701870_00000540:
    addi r28, r28, 0x4
    addi r30, r30, 0x1
lbl_fn_80701870_00000548:
    lwz r0, 0x480(r31)
    cmpw r30, r0
    blt lbl_fn_80701870_00000500
    li r0, 0x0
    stw r0, 0x480(r31)
    lwz r3, 0x4(r31)
    bl fn_806D58F0
    mr r30, r3
    li r28, 0x0
    b lbl_fn_80701870_000005AC
lbl_fn_80701870_00000570:
    lwz r3, 0x4(r31)
    mr r4, r28
    bl fn_806D5900
    lwz r4, 0x7d8(r31)
    lwz r29, 0x0(r3)
    cmpwi r4, 0x0
    bne lbl_fn_80701870_0000059C
    mr r3, r29
    li r4, 0x0
    bl fn_806FED20
    b lbl_fn_80701870_000005A4
lbl_fn_80701870_0000059C:
    mr r3, r29
    bl fn_806FED20
lbl_fn_80701870_000005A4:
    stw r29, 0x7d8(r31)
    addi r28, r28, 0x1
lbl_fn_80701870_000005AC:
    cmpw r28, r30
    blt lbl_fn_80701870_00000570
    lwz r3, 0x4(r31)
    bl fn_806D6140
    lwz r28, 0x7d8(r31)
    cmpwi r28, 0x0
    beq lbl_fn_80701870_000005F8
    stw r28, 0x8(r1)
    b lbl_fn_80701870_000005E4
lbl_fn_80701870_000005D0:
    bl fn_806FED30
    mr r28, r3
    addi r3, r1, 0x8
    bl fn_806FE900
    stw r28, 0x8(r1)
lbl_fn_80701870_000005E4:
    cmpwi r28, 0x0
    mr r3, r28
    bne lbl_fn_80701870_000005D0
    li r0, 0x0
    stw r0, 0x7d8(r31)
lbl_fn_80701870_000005F8:
    mr r3, r31
    bl fn_806FE8B0
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80701870_00000610
    bl fn_806D5850
lbl_fn_80701870_00000610:
    li r0, 0x0
    stw r0, 0x4(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80701AA0(void)
{
    nofralloc
    b lbl_fn_80701AA0_000006E4
    nop
lbl_fn_80701AA0_00000640:
    mr r5, r3
    li r6, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_80701AA0_00000678
    nop
lbl_fn_80701AA0_00000658:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_80701AA0_0000066C
    addi r0, r6, 0x1
    b lbl_fn_80701AA0_0000067C
lbl_fn_80701AA0_0000066C:
    addi r6, r6, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_80701AA0_00000658
lbl_fn_80701AA0_00000678:
    li r0, -0x1
lbl_fn_80701AA0_0000067C:
    cmpwi r0, 0x0
    bge lbl_fn_80701AA0_0000068C
    li r3, 0x0
    blr
lbl_fn_80701AA0_0000068C:
    subf. r4, r0, r4
    add r3, r3, r0
    mr r5, r3
    li r6, 0x0
    mtctr r4
    ble lbl_fn_80701AA0_000006C8
    nop
lbl_fn_80701AA0_000006A8:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_80701AA0_000006BC
    addi r0, r6, 0x1
    b lbl_fn_80701AA0_000006CC
lbl_fn_80701AA0_000006BC:
    addi r6, r6, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_80701AA0_000006A8
lbl_fn_80701AA0_000006C8:
    li r0, -0x1
lbl_fn_80701AA0_000006CC:
    cmpwi r0, 0x0
    bge lbl_fn_80701AA0_000006DC
    li r3, 0x0
    blr
lbl_fn_80701AA0_000006DC:
    add r3, r3, r0
    subf r4, r0, r4
lbl_fn_80701AA0_000006E4:
    cmpwi r4, 0x0
    ble lbl_fn_80701AA0_000006F8
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80701AA0_00000640
lbl_fn_80701AA0_000006F8:
    cmpwi r4, 0x0
    bne lbl_fn_80701AA0_00000708
    li r3, 0x0
    blr
lbl_fn_80701AA0_00000708:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80701B90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    lwz r3, 0x8(r3)
    mr r28, r4
    mr r29, r5
    bl fn_806D58F0
    mr r31, r3
    li r30, 0x0
    b lbl_fn_80701B90_00000834
lbl_fn_80701B90_0000075C:
    lwz r3, 0x8(r27)
    mr r4, r30
    bl fn_806D5900
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80701B90_00000788
    cmpwi r0, 0x2
    beq lbl_fn_80701B90_00000794
    cmpwi r0, 0x0
    beq lbl_fn_80701B90_000007A0
    b lbl_fn_80701B90_00000818
lbl_fn_80701B90_00000788:
    addi r28, r28, 0x1
    subi r29, r29, 0x1
    b lbl_fn_80701B90_00000820
lbl_fn_80701B90_00000794:
    addi r28, r28, 0x2
    subi r29, r29, 0x2
    b lbl_fn_80701B90_00000820
lbl_fn_80701B90_000007A0:
    cmpwi r29, 0x1
    bge lbl_fn_80701B90_000007B0
    li r3, 0x0
    b lbl_fn_80701B90_00000840
lbl_fn_80701B90_000007B0:
    lbz r0, 0x0(r28)
    addi r28, r28, 0x1
    subi r29, r29, 0x1
    cmpwi r0, 0xff
    bne lbl_fn_80701B90_00000820
    mr r3, r28
    li r4, 0x0
    mtctr r29
    cmpwi r29, 0x0
    ble lbl_fn_80701B90_000007F8
lbl_fn_80701B90_000007D8:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80701B90_000007EC
    addi r0, r4, 0x1
    b lbl_fn_80701B90_000007FC
lbl_fn_80701B90_000007EC:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_80701B90_000007D8
lbl_fn_80701B90_000007F8:
    li r0, -0x1
lbl_fn_80701B90_000007FC:
    cmpwi r0, -0x1
    bne lbl_fn_80701B90_0000080C
    li r3, 0x0
    b lbl_fn_80701B90_00000840
lbl_fn_80701B90_0000080C:
    add r28, r28, r0
    subf r29, r0, r29
    b lbl_fn_80701B90_00000820
lbl_fn_80701B90_00000818:
    li r3, 0x0
    b lbl_fn_80701B90_00000840
lbl_fn_80701B90_00000820:
    cmpwi r29, 0x0
    bge lbl_fn_80701B90_00000830
    li r3, 0x0
    b lbl_fn_80701B90_00000840
lbl_fn_80701B90_00000830:
    addi r30, r30, 0x1
lbl_fn_80701B90_00000834:
    cmpw r30, r31
    blt lbl_fn_80701B90_0000075C
    li r3, 0x1
lbl_fn_80701B90_00000840:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80701CC0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    lbz r30, 0x0(r5)
    mr r26, r4
    mr r28, r6
    mr r25, r3
    mr r27, r5
    mr r29, r7
    mr r31, r28
    mr r3, r26
    mr r4, r30
    bl fn_806FF560
    rlwinm. r0, r30, 0, 27, 27
    subi r28, r28, 0x5
    addi r27, r27, 0x5
    beq lbl_fn_80701CC0_000008AC
    addi r27, r27, 0x2
    subi r28, r28, 0x2
lbl_fn_80701CC0_000008AC:
    rlwinm. r0, r30, 0, 30, 30
    beq lbl_fn_80701CC0_000008D0
    mr r4, r27
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    addi r27, r27, 0x4
    subi r28, r28, 0x4
    b lbl_fn_80701CC0_000008D8
lbl_fn_80701CC0_000008D0:
    li r0, 0x0
    stw r0, 0xc(r1)
lbl_fn_80701CC0_000008D8:
    rlwinm. r0, r30, 0, 26, 26
    beq lbl_fn_80701CC0_000008FC
    mr r4, r27
    addi r3, r1, 0x8
    li r5, 0x2
    bl memcpy
    addi r27, r27, 0x2
    subi r28, r28, 0x2
    b lbl_fn_80701CC0_00000904
lbl_fn_80701CC0_000008FC:
    lhz r0, 0x6ac(r25)
    sth r0, 0x8(r1)
lbl_fn_80701CC0_00000904:
    lwz r4, 0xc(r1)
    mr r3, r26
    lhz r5, 0x8(r1)
    bl fn_806FF570
    rlwinm. r0, r30, 0, 28, 28
    beq lbl_fn_80701CC0_00000940
    mr r4, r27
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    lwz r4, 0xc(r1)
    mr r3, r26
    addi r27, r27, 0x4
    subi r28, r28, 0x4
    bl fn_806FF580
lbl_fn_80701CC0_00000940:
    rlwinm. r0, r30, 0, 25, 25
    beq lbl_fn_80701CC0_00000A64
    lwz r3, 0x8(r25)
    bl fn_806D58F0
    mr r23, r3
    li r22, 0x0
    b lbl_fn_80701CC0_00000A44
lbl_fn_80701CC0_0000095C:
    lwz r3, 0x8(r25)
    mr r4, r22
    bl fn_806D5900
    lwz r0, 0x4(r3)
    mr r24, r3
    cmpwi r0, 0x1
    beq lbl_fn_80701CC0_0000098C
    cmpwi r0, 0x2
    beq lbl_fn_80701CC0_000009A8
    cmpwi r0, 0x0
    beq lbl_fn_80701CC0_000009DC
    b lbl_fn_80701CC0_00000A40
lbl_fn_80701CC0_0000098C:
    lwz r4, 0x0(r24)
    mr r3, r26
    lbz r5, 0x0(r27)
    bl fn_806FE9A0
    addi r27, r27, 0x1
    subi r28, r28, 0x1
    b lbl_fn_80701CC0_00000A40
lbl_fn_80701CC0_000009A8:
    mr r4, r27
    addi r3, r1, 0xa
    li r5, 0x2
    bl memcpy
    lhz r3, 0xa(r1)
    bl fn_806A4264
    lwz r4, 0x0(r24)
    clrlwi r5, r3, 16
    mr r3, r26
    bl fn_806FE9A0
    addi r27, r27, 0x2
    subi r28, r28, 0x2
    b lbl_fn_80701CC0_00000A40
lbl_fn_80701CC0_000009DC:
    cmpwi r29, 0x0
    beq lbl_fn_80701CC0_000009F4
    lbz r0, 0x0(r27)
    addi r27, r27, 0x1
    subi r28, r28, 0x1
    b lbl_fn_80701CC0_000009F8
lbl_fn_80701CC0_000009F4:
    li r0, 0xff
lbl_fn_80701CC0_000009F8:
    cmpwi r0, 0xff
    bne lbl_fn_80701CC0_00000A28
    lwz r4, 0x0(r24)
    mr r3, r26
    mr r5, r27
    bl fn_806FE940
    mr r3, r27
    bl strlen
    addi r0, r3, 0x1
    add r27, r27, r0
    subf r28, r0, r28
    b lbl_fn_80701CC0_00000A40
lbl_fn_80701CC0_00000A28:
    slwi r0, r0, 2
    lwz r4, 0x0(r24)
    add r5, r25, r0
    mr r3, r26
    lwz r5, 0x84(r5)
    bl fn_806FE940
lbl_fn_80701CC0_00000A40:
    addi r22, r22, 0x1
lbl_fn_80701CC0_00000A44:
    cmpw r22, r23
    blt lbl_fn_80701CC0_0000095C
    mr r3, r26
    bl fn_806FF5A0
    ori r0, r3, 0x1
    mr r3, r26
    clrlwi r4, r0, 24
    bl fn_806FF590
lbl_fn_80701CC0_00000A64:
    rlwinm. r0, r30, 0, 24, 24
    beq lbl_fn_80701CC0_00000ADC
    b lbl_fn_80701CC0_00000AAC
lbl_fn_80701CC0_00000A70:
    mr r22, r27
    mr r3, r27
    bl strlen
    addi r0, r3, 0x1
    mr r3, r26
    add r27, r27, r0
    mr r4, r22
    mr r5, r27
    subf r28, r0, r28
    bl fn_806FE940
    mr r3, r27
    bl strlen
    addi r0, r3, 0x1
    add r27, r27, r0
    subf r28, r0, r28
lbl_fn_80701CC0_00000AAC:
    lbz r0, 0x0(r27)
    extsb. r0, r0
    beq lbl_fn_80701CC0_00000AC0
    cmpwi r28, 0x0
    bgt lbl_fn_80701CC0_00000A70
lbl_fn_80701CC0_00000AC0:
    mr r3, r26
    subi r28, r28, 0x1
    bl fn_806FF5A0
    ori r0, r3, 0x2
    mr r3, r26
    clrlwi r4, r0, 24
    bl fn_806FF590
lbl_fn_80701CC0_00000ADC:
    mr r3, r26
    bl fn_806FF5A0
    rlwinm. r0, r30, 0, 24, 25
    mr r4, r3
    bne lbl_fn_80701CC0_00000B0C
    clrlwi. r0, r3, 31
    bne lbl_fn_80701CC0_00000B00
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_fn_80701CC0_00000B0C
lbl_fn_80701CC0_00000B00:
    mr r3, r26
    rlwinm r4, r4, 0, 24, 29
    bl fn_806FF590
lbl_fn_80701CC0_00000B0C:
    addi r11, r1, 0x40
    subf r3, r28, r31
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80701F90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r5, 0x1
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bge lbl_fn_80701F90_00000B58
    li r3, 0x0
    b lbl_fn_80701F90_00000CD0
lbl_fn_80701F90_00000B58:
    lbz r31, 0x0(r4)
    li r30, 0x5
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_fn_80701F90_00000B6C
    li r30, 0x9
lbl_fn_80701F90_00000B6C:
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_fn_80701F90_00000B78
    addi r30, r30, 0x4
lbl_fn_80701F90_00000B78:
    rlwinm. r0, r31, 0, 27, 27
    beq lbl_fn_80701F90_00000B84
    addi r30, r30, 0x2
lbl_fn_80701F90_00000B84:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_fn_80701F90_00000B90
    addi r30, r30, 0x2
lbl_fn_80701F90_00000B90:
    cmpw r5, r30
    bge lbl_fn_80701F90_00000BA0
    li r3, 0x0
    b lbl_fn_80701F90_00000CD0
lbl_fn_80701F90_00000BA0:
    rlwinm. r0, r31, 0, 25, 25
    beq lbl_fn_80701F90_00000BC8
    mr r3, r27
    add r4, r4, r30
    subf r5, r30, r5
    bl fn_80701B90
    cmpwi r3, 0x0
    bne lbl_fn_80701F90_00000BC8
    li r3, 0x0
    b lbl_fn_80701F90_00000CD0
lbl_fn_80701F90_00000BC8:
    rlwinm. r0, r31, 0, 24, 24
    beq lbl_fn_80701F90_00000BEC
    add r3, r28, r30
    subf r4, r30, r29
    bl fn_80701AA0
    cmpwi r3, 0x0
    bne lbl_fn_80701F90_00000BEC
    li r3, 0x0
    b lbl_fn_80701F90_00000CD0
lbl_fn_80701F90_00000BEC:
    lis r4, lbl_807C5E20@ha
    addi r3, r28, 0x1
    addi r4, r4, lbl_807C5E20@l
    li r5, 0x4
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80701F90_00000C10
    li r3, -0x1
    b lbl_fn_80701F90_00000CD0
lbl_fn_80701F90_00000C10:
    cmpwi r29, 0x5
    blt lbl_fn_80701F90_00000C5C
    lbz r31, 0x0(r28)
    addi r3, r1, 0x10
    addi r4, r28, 0x1
    li r5, 0x4
    bl memcpy
    rlwinm. r0, r31, 0, 27, 27
    beq lbl_fn_80701F90_00000C54
    subi r0, r29, 0x5
    cmpwi r0, 0x2
    blt lbl_fn_80701F90_00000C5C
    addi r3, r1, 0x8
    addi r4, r28, 0x5
    li r5, 0x2
    bl memcpy
    b lbl_fn_80701F90_00000C5C
lbl_fn_80701F90_00000C54:
    lhz r0, 0x6ac(r27)
    sth r0, 0x8(r1)
lbl_fn_80701F90_00000C5C:
    lwz r4, 0x10(r1)
    mr r3, r27
    lhz r5, 0x8(r1)
    bl fn_806FF490
    mr r30, r3
    bl fn_806FF5B0
    cmpwi r3, 0x0
    beq lbl_fn_80701F90_00000C84
    li r3, -0x2
    b lbl_fn_80701F90_00000CD0
lbl_fn_80701F90_00000C84:
    mr r3, r27
    mr r4, r30
    mr r5, r28
    mr r6, r29
    li r7, 0x1
    bl fn_80701CC0
    stw r30, 0xc(r1)
    mr r30, r3
    addi r4, r1, 0xc
    lwz r3, 0x4(r27)
    bl fn_806D5930
    lwz r12, 0x488(r27)
    mr r3, r27
    lwz r5, 0xc(r1)
    li r4, 0x0
    lwz r6, 0x494(r27)
    mtctr r12
    bctrl
    mr r3, r30
lbl_fn_80701F90_00000CD0:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80702150(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_19
    lwz r0, 0x7cc(r3)
    mr r26, r3
    lwz r28, 0x7c(r3)
    cmpwi r0, 0x0
    lwz r27, 0x80(r3)
    beq lbl_fn_80702150_00000D38
    cmpwi r0, 0x1
    beq lbl_fn_80702150_000011EC
    cmpwi r0, 0x2
    beq lbl_fn_80702150_000012F4
    cmpwi r0, 0x3
    beq lbl_fn_80702150_0000143C
    cmpwi r0, 0x4
    beq lbl_fn_80702150_00001548
    b lbl_fn_80702150_000015D4
lbl_fn_80702150_00000D38:
    cmpwi r27, 0x1
    blt lbl_fn_80702150_000015D4
    lbz r0, 0x0(r28)
    xori r4, r0, 0xec
    addi r31, r4, 0x2
    cmpw r27, r31
    blt lbl_fn_80702150_000015D4
    add r4, r31, r28
    mr r30, r31
    lbz r0, -0x1(r4)
    xori r29, r0, 0xea
    add r31, r31, r29
    cmpw r27, r31
    blt lbl_fn_80702150_000015D4
    addi r3, r3, 0x54
    bl strlen
    cmpwi cr1, r29, 0x0
    addi r11, r26, 0x54
    li r12, 0x0
    ble cr1, lbl_fn_80702150_000011A0
    cmpwi r29, 0x8
    subi r5, r29, 0x8
    ble lbl_fn_80702150_00001118
    li r6, 0x0
    blt cr1, lbl_fn_80702150_00000DB0
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r29, r0
    bgt lbl_fn_80702150_00000DB0
    li r6, 0x1
lbl_fn_80702150_00000DB0:
    cmpwi r6, 0x0
    beq lbl_fn_80702150_00001118
    addi r0, r5, 0x7
    add r25, r28, r30
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_80702150_00001118
lbl_fn_80702150_00000DD0:
    divw r19, r12, r3
    addi r7, r12, 0x1
    addi r5, r12, 0x2
    lbz r8, 0x0(r25)
    slwi r6, r12, 29
    srwi r10, r12, 31
    divw r21, r7, r3
    subf r6, r10, r6
    slwi r4, r7, 29
    rotlwi r6, r6, 3
    srwi r9, r7, 31
    add r6, r6, r10
    add r6, r26, r6
    subf r4, r9, r4
    lbz r10, 0x74(r6)
    rotlwi r6, r4, 3
    mullw r19, r19, r3
    srwi r20, r5, 31
    xor r8, r10, r8
    add r6, r6, r9
    addi r0, r12, 0x3
    extsb r8, r8
    subf r4, r19, r12
    slwi r9, r0, 29
    lbzx r10, r11, r4
    divw r4, r5, r3
    add r6, r26, r6
    extsb r19, r10
    slwi r10, r5, 29
    mullw r22, r12, r19
    subf r19, r20, r10
    srwi r10, r0, 31
    rotlwi r19, r19, 3
    subf r9, r10, r9
    add r19, r19, r20
    slwi r23, r22, 29
    srwi r22, r22, 31
    add r20, r26, r19
    rotlwi r9, r9, 3
    subf r19, r22, r23
    rotlwi r19, r19, 3
    mullw r21, r21, r3
    add r19, r19, r22
    add r23, r26, r19
    lbz r22, 0x74(r23)
    subf r21, r21, r7
    xor r8, r22, r8
    stb r8, 0x74(r23)
    add r8, r9, r10
    lbzx r9, r11, r21
    divw r19, r0, r3
    extsb r10, r9
    lbz r9, 0x74(r6)
    add r6, r26, r8
    mullw r10, r7, r10
    lbz r7, 0x1(r25)
    xor r7, r9, r7
    extsb r8, r7
    slwi r7, r10, 29
    srwi r9, r10, 31
    subf r7, r9, r7
    rotlwi r7, r7, 3
    add r9, r7, r9
    mullw r4, r4, r3
    add r10, r26, r9
    lbz r9, 0x74(r10)
    xor r8, r9, r8
    stb r8, 0x74(r10)
    subf r7, r4, r5
    lbzx r7, r11, r7
    mullw r4, r19, r3
    lbz r8, 0x74(r20)
    extsb r9, r7
    lbz r7, 0x2(r25)
    mullw r9, r5, r9
    xor r5, r8, r7
    subf r4, r4, r0
    extsb r5, r5
    slwi r7, r9, 29
    srwi r8, r9, 31
    subf r7, r8, r7
    rotlwi r7, r7, 3
    add r7, r7, r8
    add r8, r26, r7
    lbz r7, 0x74(r8)
    xor r5, r7, r5
    stb r5, 0x74(r8)
    lbzx r4, r11, r4
    lbz r5, 0x74(r6)
    extsb r6, r4
    lbz r4, 0x3(r25)
    mullw r6, r0, r6
    xor r0, r5, r4
    extsb r0, r0
    slwi r4, r6, 29
    srwi r5, r6, 31
    subf r4, r5, r4
    rotlwi r4, r4, 3
    add r4, r4, r5
    add r5, r26, r4
    lbz r4, 0x74(r5)
    xor r0, r4, r0
    stb r0, 0x74(r5)
    addi r10, r12, 0x4
    addi r8, r12, 0x5
    divw r19, r10, r3
    addi r5, r12, 0x6
    addi r0, r12, 0x7
    lbz r9, 0x4(r25)
    slwi r4, r10, 29
    srwi r21, r10, 31
    mullw r19, r19, r3
    subf r6, r21, r4
    slwi r4, r8, 29
    rotlwi r6, r6, 3
    srwi r22, r8, 31
    add r6, r6, r21
    subf r19, r19, r10
    add r6, r26, r6
    lbzx r19, r11, r19
    divw r7, r8, r3
    lbz r21, 0x74(r6)
    subf r6, r22, r4
    extsb r19, r19
    xor r4, r21, r9
    rotlwi r6, r6, 3
    add r6, r6, r22
    extsb r9, r4
    divw r4, r5, r3
    slwi r23, r5, 29
    srwi r22, r5, 31
    slwi r24, r0, 29
    add r6, r26, r6
    mullw r19, r10, r19
    subf r10, r22, r23
    rotlwi r23, r10, 3
    srwi r10, r0, 31
    mullw r21, r7, r3
    add r22, r23, r22
    slwi r7, r19, 29
    srwi r19, r19, 31
    add r23, r26, r22
    subf r20, r19, r7
    subf r7, r10, r24
    rotlwi r20, r20, 3
    add r19, r20, r19
    subf r22, r21, r8
    add r20, r26, r19
    rotlwi r7, r7, 3
    lbz r21, 0x74(r20)
    add r7, r7, r10
    divw r24, r0, r3
    xor r9, r21, r9
    stb r9, 0x74(r20)
    add r7, r26, r7
    lbzx r9, r11, r22
    extsb r10, r9
    lbz r9, 0x74(r6)
    mullw r10, r8, r10
    lbz r6, 0x5(r25)
    xor r6, r9, r6
    extsb r8, r6
    slwi r6, r10, 29
    srwi r9, r10, 31
    subf r6, r9, r6
    rotlwi r6, r6, 3
    add r9, r6, r9
    mullw r4, r4, r3
    add r10, r26, r9
    lbz r9, 0x74(r10)
    xor r8, r9, r8
    stb r8, 0x74(r10)
    subf r6, r4, r5
    lbzx r6, r11, r6
    mullw r4, r24, r3
    lbz r8, 0x74(r23)
    extsb r9, r6
    lbz r6, 0x6(r25)
    mullw r9, r5, r9
    xor r5, r8, r6
    subf r4, r4, r0
    extsb r5, r5
    slwi r6, r9, 29
    srwi r8, r9, 31
    subf r6, r8, r6
    rotlwi r6, r6, 3
    add r6, r6, r8
    add r8, r26, r6
    lbz r6, 0x74(r8)
    xor r5, r6, r5
    stb r5, 0x74(r8)
    lbzx r4, r11, r4
    lbz r5, 0x74(r7)
    extsb r6, r4
    lbz r4, 0x7(r25)
    mullw r6, r0, r6
    xor r0, r5, r4
    extsb r0, r0
    slwi r4, r6, 29
    srwi r5, r6, 31
    subf r4, r5, r4
    rotlwi r4, r4, 3
    add r4, r4, r5
    add r5, r26, r4
    lbz r4, 0x74(r5)
    xor r0, r4, r0
    stb r0, 0x74(r5)
    addi r25, r25, 0x8
    addi r12, r12, 0x8
    bdnz lbl_fn_80702150_00000DD0
lbl_fn_80702150_00001118:
    add r4, r28, r30
    subf r0, r12, r29
    add r4, r12, r4
    mtctr r0
    cmpw r12, r29
    bge lbl_fn_80702150_000011A0
lbl_fn_80702150_00001130:
    divw r7, r12, r3
    lbz r0, 0x0(r4)
    slwi r5, r12, 29
    srwi r6, r12, 31
    addi r4, r4, 0x1
    subf r5, r6, r5
    mullw r7, r7, r3
    rotlwi r5, r5, 3
    add r5, r5, r6
    add r5, r26, r5
    subf r6, r7, r12
    lbz r5, 0x74(r5)
    lbzx r6, r11, r6
    xor r0, r5, r0
    extsb r5, r6
    mullw r6, r12, r5
    extsb r0, r0
    addi r12, r12, 0x1
    slwi r5, r6, 29
    srwi r6, r6, 31
    subf r5, r6, r5
    rotlwi r5, r5, 3
    add r5, r5, r6
    add r6, r26, r5
    lbz r5, 0x74(r6)
    xor r0, r5, r0
    stb r0, 0x74(r6)
    bdnz lbl_fn_80702150_00001130
lbl_fn_80702150_000011A0:
    addi r3, r26, 0x6c0
    addi r4, r26, 0x74
    li r5, 0x8
    bl fn_806FD910
    li r0, 0x1
    stw r0, 0x7cc(r26)
    addi r3, r26, 0x7d0
    addi r4, r28, 0x1
    li r5, 0x2
    bl memcpy
    lhz r3, 0x7d0(r26)
    bl fn_806A4264
    sth r3, 0x7d0(r26)
    add r28, r28, r31
    subf r27, r31, r27
    addi r3, r26, 0x6c0
    mr r4, r28
    mr r5, r27
    bl fn_806FDBC0
lbl_fn_80702150_000011EC:
    cmpwi r27, 0x6
    blt lbl_fn_80702150_000015D4
    mr r4, r28
    addi r3, r26, 0x6a4
    li r5, 0x4
    bl memcpy
    lwz r12, 0x488(r26)
    lis r4, lbl_80862AF8@ha
    lwz r5, lbl_80862AF8@l(r4)
    mr r3, r26
    lwz r6, 0x494(r26)
    li r4, 0x6
    mtctr r12
    bctrl
    addi r3, r26, 0x6ac
    addi r4, r28, 0x4
    li r5, 0x2
    bl memcpy
    lhz r0, 0x6ac(r26)
    cmplwi r0, 0xffff
    bne lbl_fn_80702150_000012B0
    subic. r0, r27, 0x6
    li r4, 0x0
    mtctr r0
    ble lbl_fn_80702150_00001270
lbl_fn_80702150_00001250:
    add r3, r28, r4
    lbz r0, 0x6(r3)
    extsb. r0, r0
    bne lbl_fn_80702150_00001268
    addi r0, r4, 0x1
    b lbl_fn_80702150_00001274
lbl_fn_80702150_00001268:
    addi r4, r4, 0x1
    bdnz lbl_fn_80702150_00001250
lbl_fn_80702150_00001270:
    li r0, -0x1
lbl_fn_80702150_00001274:
    cmpwi r0, -0x1
    beq lbl_fn_80702150_000015D4
    addi r0, r28, 0x6
    stw r0, 0x6b0(r26)
    lis r4, lbl_80862AF8@ha
    lwz r12, 0x488(r26)
    lwz r5, lbl_80862AF8@l(r4)
    mr r3, r26
    lwz r6, 0x494(r26)
    li r4, 0x5
    mtctr r12
    bctrl
    lwz r0, 0x7c(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80702150_000015D4
lbl_fn_80702150_000012B0:
    lwz r0, 0x7c8(r26)
    addi r28, r28, 0x6
    subi r27, r27, 0x6
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_fn_80702150_000012D0
    lhz r0, 0x6ac(r26)
    cmplwi r0, 0xffff
    bne lbl_fn_80702150_000012E4
lbl_fn_80702150_000012D0:
    li r3, 0x5
    li r0, 0x2
    stw r3, 0x7cc(r26)
    stw r0, 0x0(r26)
    b lbl_fn_80702150_000015D4
lbl_fn_80702150_000012E4:
    li r3, 0x2
    li r0, -0x1
    stw r3, 0x7cc(r26)
    stw r0, 0x484(r26)
lbl_fn_80702150_000012F4:
    lwz r0, 0x484(r26)
    cmpwi r0, -0x1
    bne lbl_fn_80702150_00001338
    cmpwi r27, 0x1
    blt lbl_fn_80702150_000015D4
    lbz r4, 0x0(r28)
    li r3, 0x8
    stw r4, 0x484(r26)
    li r5, 0x0
    bl fn_806D57A0
    cmpwi r3, 0x0
    stw r3, 0x8(r26)
    bne lbl_fn_80702150_00001330
    li r3, 0x5
    b lbl_fn_80702150_00001604
lbl_fn_80702150_00001330:
    addi r28, r28, 0x1
    subi r27, r27, 0x1
lbl_fn_80702150_00001338:
    li r25, 0x1
    b lbl_fn_80702150_00001404
lbl_fn_80702150_00001340:
    cmpwi r27, 0x2
    blt lbl_fn_80702150_00001418
    subic. r0, r27, 0x1
    li r4, 0x0
    mtctr r0
    ble lbl_fn_80702150_00001378
lbl_fn_80702150_00001358:
    add r3, r28, r4
    lbz r0, 0x1(r3)
    extsb. r0, r0
    bne lbl_fn_80702150_00001370
    addi r19, r4, 0x1
    b lbl_fn_80702150_0000137C
lbl_fn_80702150_00001370:
    addi r4, r4, 0x1
    bdnz lbl_fn_80702150_00001358
lbl_fn_80702150_00001378:
    li r19, -0x1
lbl_fn_80702150_0000137C:
    cmpwi r19, -0x1
    beq lbl_fn_80702150_00001418
    lbz r3, 0x0(r28)
    addi r0, r28, 0x1
    stw r3, 0x1c(r1)
    mr r3, r26
    stw r0, 0x10(r1)
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80702150_000013C0
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r0, 0x0(r3)
    b lbl_fn_80702150_000013E4
lbl_fn_80702150_000013C0:
    addi r3, r28, 0x1
    bl fn_806D8E30
    stw r3, 0x10(r1)
    mr r3, r26
    stw r25, 0x14(r1)
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D64B0
    lwz r0, 0x10(r1)
lbl_fn_80702150_000013E4:
    stw r0, 0x18(r1)
    addi r4, r1, 0x18
    lwz r3, 0x8(r26)
    bl fn_806D5930
    add r3, r19, r28
    addi r0, r19, 0x1
    addi r28, r3, 0x1
    subf r27, r0, r27
lbl_fn_80702150_00001404:
    lwz r3, 0x8(r26)
    bl fn_806D58F0
    lwz r0, 0x484(r26)
    cmpw r0, r3
    bgt lbl_fn_80702150_00001340
lbl_fn_80702150_00001418:
    lwz r3, 0x8(r26)
    bl fn_806D58F0
    lwz r0, 0x484(r26)
    cmpw r0, r3
    bgt lbl_fn_80702150_000015D4
    li r3, 0x3
    li r0, -0x1
    stw r3, 0x7cc(r26)
    stw r0, 0x484(r26)
lbl_fn_80702150_0000143C:
    lwz r0, 0x484(r26)
    cmpwi r0, -0x1
    bne lbl_fn_80702150_00001468
    cmpwi r27, 0x1
    blt lbl_fn_80702150_000015D4
    lbz r3, 0x0(r28)
    li r0, 0x0
    stw r3, 0x484(r26)
    addi r28, r28, 0x1
    subi r27, r27, 0x1
    stw r0, 0x480(r26)
lbl_fn_80702150_00001468:
    li r25, 0x1
    b lbl_fn_80702150_00001528
lbl_fn_80702150_00001470:
    mr r3, r28
    li r4, 0x0
    mtctr r27
    cmpwi r27, 0x0
    ble lbl_fn_80702150_000014A8
    nop
lbl_fn_80702150_00001488:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80702150_0000149C
    addi r19, r4, 0x1
    b lbl_fn_80702150_000014AC
lbl_fn_80702150_0000149C:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_80702150_00001488
lbl_fn_80702150_000014A8:
    li r19, -0x1
lbl_fn_80702150_000014AC:
    cmpwi r19, -0x1
    beq lbl_fn_80702150_00001538
    stw r28, 0x8(r1)
    mr r3, r26
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80702150_000014E4
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r5, 0x0(r3)
    b lbl_fn_80702150_00001508
lbl_fn_80702150_000014E4:
    mr r3, r28
    bl fn_806D8E30
    stw r3, 0x8(r1)
    mr r3, r26
    stw r25, 0xc(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D64B0
    lwz r5, 0x8(r1)
lbl_fn_80702150_00001508:
    lwz r3, 0x480(r26)
    add r28, r28, r19
    subf r27, r19, r27
    slwi r0, r3, 2
    addi r4, r3, 0x1
    add r3, r26, r0
    stw r5, 0x84(r3)
    stw r4, 0x480(r26)
lbl_fn_80702150_00001528:
    lwz r5, 0x480(r26)
    lwz r6, 0x484(r26)
    cmpw r6, r5
    bgt lbl_fn_80702150_00001470
lbl_fn_80702150_00001538:
    cmpw r6, r5
    bgt lbl_fn_80702150_000015D4
    li r0, 0x4
    stw r0, 0x7cc(r26)
lbl_fn_80702150_00001548:
    cmpwi r27, 0x5
    blt lbl_fn_80702150_000015D4
lbl_fn_80702150_00001550:
    mr r3, r26
    mr r4, r28
    mr r5, r27
    bl fn_80701F90
    cmpwi r3, -0x2
    bne lbl_fn_80702150_00001570
    li r3, 0x5
    b lbl_fn_80702150_00001604
lbl_fn_80702150_00001570:
    cmpwi r3, -0x1
    bne lbl_fn_80702150_000015B4
    li r3, 0x5
    li r0, 0x2
    stw r3, 0x7cc(r26)
    lis r5, lbl_80862AF8@ha
    lwz r12, 0x488(r26)
    mr r3, r26
    stw r0, 0x0(r26)
    li r4, 0x3
    lwz r6, 0x494(r26)
    lwz r5, lbl_80862AF8@l(r5)
    mtctr r12
    subi r27, r27, 0x5
    addi r28, r28, 0x5
    bctrl
    b lbl_fn_80702150_000015D4
lbl_fn_80702150_000015B4:
    lwz r0, 0x7c(r26)
    add r28, r28, r3
    subf r27, r3, r27
    cmpwi r0, 0x0
    bne lbl_fn_80702150_000015CC
    li r3, 0x0
lbl_fn_80702150_000015CC:
    cmpwi r3, 0x0
    bne lbl_fn_80702150_00001550
lbl_fn_80702150_000015D4:
    lwz r3, 0x7c(r26)
    cmpwi r3, 0x0
    bne lbl_fn_80702150_000015E8
    li r3, 0x0
    b lbl_fn_80702150_00001604
lbl_fn_80702150_000015E8:
    cmpwi r27, 0x0
    beq lbl_fn_80702150_000015FC
    mr r4, r28
    mr r5, r27
    bl memmove
lbl_fn_80702150_000015FC:
    stw r27, 0x80(r26)
    li r3, 0x0
lbl_fn_80702150_00001604:
    addi r11, r1, 0x60
    bl _restgpr_19
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80702A90(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r0, 0x8(r3)
    mr r27, r3
    lbz r30, 0x0(r4)
    addi r28, r4, 0x1
    cmpwi r0, 0x0
    subi r29, r5, 0x1
    beq lbl_fn_80702A90_000016D4
    beq lbl_fn_80702A90_000016D4
    li r26, 0x0
    b lbl_fn_80702A90_000016B4
lbl_fn_80702A90_00001664:
    lwz r3, 0x8(r27)
    mr r4, r26
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r3, r27
    stw r0, 0x10(r1)
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80702A90_000016B0
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80702A90_000016B0
    mr r3, r27
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6560
lbl_fn_80702A90_000016B0:
    addi r26, r26, 0x1
lbl_fn_80702A90_000016B4:
    lwz r3, 0x8(r27)
    bl fn_806D58F0
    cmpw r26, r3
    blt lbl_fn_80702A90_00001664
    lwz r3, 0x8(r27)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x8(r27)
lbl_fn_80702A90_000016D4:
    mr r4, r30
    li r3, 0x8
    li r5, 0x0
    bl fn_806D57A0
    cmpwi r3, 0x0
    stw r3, 0x8(r27)
    bne lbl_fn_80702A90_000016F8
    li r3, 0x5
    b lbl_fn_80702A90_000017EC
lbl_fn_80702A90_000016F8:
    li r31, 0x0
    li r26, 0x1
    b lbl_fn_80702A90_000017E0
lbl_fn_80702A90_00001704:
    cmpwi r29, 0x2
    bge lbl_fn_80702A90_00001714
    li r3, 0x4
    b lbl_fn_80702A90_000017EC
lbl_fn_80702A90_00001714:
    subic. r0, r29, 0x1
    li r4, 0x0
    mtctr r0
    ble lbl_fn_80702A90_00001748
    nop
lbl_fn_80702A90_00001728:
    add r3, r28, r4
    lbz r0, 0x1(r3)
    extsb. r0, r0
    bne lbl_fn_80702A90_00001740
    addi r25, r4, 0x1
    b lbl_fn_80702A90_0000174C
lbl_fn_80702A90_00001740:
    addi r4, r4, 0x1
    bdnz lbl_fn_80702A90_00001728
lbl_fn_80702A90_00001748:
    li r25, -0x1
lbl_fn_80702A90_0000174C:
    cmpwi r25, -0x1
    bne lbl_fn_80702A90_0000175C
    li r3, 0x4
    b lbl_fn_80702A90_000017EC
lbl_fn_80702A90_0000175C:
    lbz r3, 0x0(r28)
    addi r0, r28, 0x1
    stw r3, 0x1c(r1)
    mr r3, r27
    stw r0, 0x8(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_80702A90_00001798
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r0, 0x0(r3)
    b lbl_fn_80702A90_000017BC
lbl_fn_80702A90_00001798:
    addi r3, r28, 0x1
    bl fn_806D8E30
    stw r3, 0x8(r1)
    mr r3, r27
    stw r26, 0xc(r1)
    bl fn_806FE840
    addi r4, r1, 0x8
    bl fn_806D64B0
    lwz r0, 0x8(r1)
lbl_fn_80702A90_000017BC:
    stw r0, 0x18(r1)
    addi r4, r1, 0x18
    lwz r3, 0x8(r27)
    bl fn_806D5930
    add r3, r25, r28
    addi r0, r25, 0x1
    addi r28, r3, 0x1
    addi r31, r31, 0x1
    subf r29, r0, r29
lbl_fn_80702A90_000017E0:
    cmpw r31, r30
    blt lbl_fn_80702A90_00001704
    li r3, 0x0
lbl_fn_80702A90_000017EC:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80702C70(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    cmpwi r5, 0x2
    mr r24, r3
    bge lbl_fn_80702C70_00001830
    li r3, 0x4
    b lbl_fn_80702C70_000019A8
lbl_fn_80702C70_00001830:
    lbz r30, 0x0(r4)
    addi r25, r4, 0x2
    lbz r31, 0x1(r4)
    subi r26, r5, 0x2
    li r27, 0x0
    b lbl_fn_80702C70_0000196C
lbl_fn_80702C70_00001848:
    mr r28, r25
    mr r3, r25
    li r4, 0x0
    mtctr r26
    cmpwi r26, 0x0
    ble lbl_fn_80702C70_00001880
lbl_fn_80702C70_00001860:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80702C70_00001874
    addi r0, r4, 0x1
    b lbl_fn_80702C70_00001884
lbl_fn_80702C70_00001874:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_80702C70_00001860
lbl_fn_80702C70_00001880:
    li r0, -0x1
lbl_fn_80702C70_00001884:
    cmpwi r0, -0x1
    bne lbl_fn_80702C70_00001894
    li r3, 0x4
    b lbl_fn_80702C70_000019A8
lbl_fn_80702C70_00001894:
    subf r26, r0, r26
    add r25, r25, r0
    cmpwi r26, 0xb
    bge lbl_fn_80702C70_000018AC
    li r3, 0x4
    b lbl_fn_80702C70_000019A8
lbl_fn_80702C70_000018AC:
    mr r4, r25
    addi r3, r1, 0x10
    li r5, 0x4
    bl memcpy
    addi r3, r1, 0x8
    addi r4, r25, 0x4
    li r5, 0x2
    bl memcpy
    addi r3, r1, 0xc
    addi r4, r25, 0x6
    li r5, 0x4
    bl memcpy
    lwz r3, 0xc(r1)
    bl fn_806A4260
    subic. r26, r26, 0xa
    addi r25, r25, 0xa
    mr r7, r3
    stw r3, 0xc(r1)
    mr r3, r25
    li r4, 0x0
    mtctr r26
    ble lbl_fn_80702C70_00001928
    nop
lbl_fn_80702C70_00001908:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80702C70_0000191C
    addi r29, r4, 0x1
    b lbl_fn_80702C70_0000192C
lbl_fn_80702C70_0000191C:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_80702C70_00001908
lbl_fn_80702C70_00001928:
    li r29, -0x1
lbl_fn_80702C70_0000192C:
    cmpwi r29, -0x1
    bne lbl_fn_80702C70_0000193C
    li r3, 0x4
    b lbl_fn_80702C70_000019A8
lbl_fn_80702C70_0000193C:
    lwz r12, 0x490(r24)
    mr r3, r24
    mr r4, r28
    mr r8, r25
    lwz r5, 0x10(r1)
    lhz r6, 0x8(r1)
    lwz r9, 0x494(r24)
    mtctr r12
    bctrl
    add r25, r25, r29
    subf r26, r29, r26
    addi r27, r27, 0x1
lbl_fn_80702C70_0000196C:
    cmpw r27, r31
    blt lbl_fn_80702C70_00001848
    cmpwi r30, 0x0
    beq lbl_fn_80702C70_000019A4
    lwz r12, 0x490(r24)
    mr r3, r24
    lwz r9, 0x494(r24)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    mtctr r12
    bctrl
lbl_fn_80702C70_000019A4:
    li r3, 0x0
lbl_fn_80702C70_000019A8:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80702E30(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_24
    cmpwi r5, 0xb
    mr r24, r3
    mr r25, r4
    mr r26, r5
    bge lbl_fn_80702E30_000019F8
    li r3, 0x4
    b lbl_fn_80702E30_00001B78
lbl_fn_80702E30_000019F8:
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    addi r3, r1, 0x8
    addi r4, r25, 0x4
    li r5, 0x2
    bl memcpy
    lhz r29, 0x8(r1)
    lwz r30, 0xc(r1)
    lwz r3, 0x4(r24)
    bl fn_806D58F0
    mr r31, r3
    li r28, 0x0
    b lbl_fn_80702E30_00001A6C
lbl_fn_80702E30_00001A30:
    lwz r3, 0x4(r24)
    mr r4, r28
    bl fn_806D5900
    lwz r27, 0x0(r3)
    mr r3, r27
    bl fn_806FEC90
    cmplw r30, r3
    bne lbl_fn_80702E30_00001A68
    mr r3, r27
    bl fn_806FECB0
    clrlwi r0, r3, 16
    cmplw r29, r0
    bne lbl_fn_80702E30_00001A68
    b lbl_fn_80702E30_00001A78
lbl_fn_80702E30_00001A68:
    addi r28, r28, 0x1
lbl_fn_80702E30_00001A6C:
    cmpw r28, r31
    blt lbl_fn_80702E30_00001A30
    li r28, -0x1
lbl_fn_80702E30_00001A78:
    cmpwi r28, -0x1
    bne lbl_fn_80702E30_00001A88
    li r3, 0x0
    b lbl_fn_80702E30_00001B78
lbl_fn_80702E30_00001A88:
    lwz r3, 0x4(r24)
    mr r4, r28
    bl fn_806D5900
    lwz r27, 0x0(r3)
    addi r3, r1, 0x10
    addi r4, r25, 0x6
    li r5, 0x4
    bl memcpy
    lwz r3, 0x10(r1)
    bl fn_806A4260
    stw r3, 0x10(r1)
    mr r5, r3
    addi r8, r1, 0x18
    li r6, 0x0
    lbz r4, 0xa(r25)
    subi r26, r26, 0xb
    addi r25, r25, 0xb
    b lbl_fn_80702E30_00001B38
lbl_fn_80702E30_00001AD0:
    cmpwi r26, 0x1
    blt lbl_fn_80702E30_00001B48
    mr r3, r25
    li r7, 0x0
    mtctr r26
    cmpwi r26, 0x0
    ble lbl_fn_80702E30_00001B10
    nop
lbl_fn_80702E30_00001AF0:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80702E30_00001B04
    addi r0, r7, 0x1
    b lbl_fn_80702E30_00001B14
lbl_fn_80702E30_00001B04:
    addi r7, r7, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_80702E30_00001AF0
lbl_fn_80702E30_00001B10:
    li r0, -0x1
lbl_fn_80702E30_00001B14:
    cmpwi r0, -0x1
    bne lbl_fn_80702E30_00001B24
    li r3, 0x4
    b lbl_fn_80702E30_00001B78
lbl_fn_80702E30_00001B24:
    stw r25, 0x0(r8)
    add r25, r25, r0
    subf r26, r0, r26
    addi r8, r8, 0x4
    addi r6, r6, 0x1
lbl_fn_80702E30_00001B38:
    cmpw r6, r4
    bge lbl_fn_80702E30_00001B48
    cmpwi r6, 0x10
    blt lbl_fn_80702E30_00001AD0
lbl_fn_80702E30_00001B48:
    lwz r12, 0x48c(r24)
    cmpwi r12, 0x0
    bne lbl_fn_80702E30_00001B5C
    li r3, 0x0
    b lbl_fn_80702E30_00001B78
lbl_fn_80702E30_00001B5C:
    mr r3, r24
    mr r4, r27
    addi r7, r1, 0x18
    lwz r8, 0x494(r24)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_80702E30_00001B78:
    addi r11, r1, 0x80
    bl _restgpr_24
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80703000(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    cmpwi r5, 0x5
    mr r24, r3
    mr r25, r4
    mr r26, r5
    bge lbl_fn_80703000_00001BC8
    li r3, 0x4
    b lbl_fn_80703000_00001D2C
lbl_fn_80703000_00001BC8:
    lbz r31, 0x0(r4)
    addi r3, r1, 0x10
    li r5, 0x4
    addi r4, r4, 0x1
    bl memcpy
    rlwinm. r0, r31, 0, 27, 27
    beq lbl_fn_80703000_00001C04
    subi r0, r26, 0x5
    cmpwi r0, 0x2
    blt lbl_fn_80703000_00001C0C
    addi r3, r1, 0x8
    addi r4, r25, 0x5
    li r5, 0x2
    bl memcpy
    b lbl_fn_80703000_00001C0C
lbl_fn_80703000_00001C04:
    lhz r0, 0x6ac(r24)
    sth r0, 0x8(r1)
lbl_fn_80703000_00001C0C:
    lhz r29, 0x8(r1)
    lwz r30, 0x10(r1)
    lwz r3, 0x4(r24)
    bl fn_806D58F0
    mr r31, r3
    li r28, 0x0
    b lbl_fn_80703000_00001C64
lbl_fn_80703000_00001C28:
    lwz r3, 0x4(r24)
    mr r4, r28
    bl fn_806D5900
    lwz r27, 0x0(r3)
    mr r3, r27
    bl fn_806FEC90
    cmplw r30, r3
    bne lbl_fn_80703000_00001C60
    mr r3, r27
    bl fn_806FECB0
    clrlwi r0, r3, 16
    cmplw r29, r0
    bne lbl_fn_80703000_00001C60
    b lbl_fn_80703000_00001C70
lbl_fn_80703000_00001C60:
    addi r28, r28, 0x1
lbl_fn_80703000_00001C64:
    cmpw r28, r31
    blt lbl_fn_80703000_00001C28
    li r28, -0x1
lbl_fn_80703000_00001C70:
    cmpwi r28, -0x1
    bne lbl_fn_80703000_00001CA0
    lwz r4, 0x10(r1)
    mr r3, r24
    lhz r5, 0x8(r1)
    bl fn_806FF490
    mr r27, r3
    bl fn_806FF5B0
    cmpwi r3, 0x0
    beq lbl_fn_80703000_00001CB0
    li r3, 0x5
    b lbl_fn_80703000_00001D2C
lbl_fn_80703000_00001CA0:
    lwz r3, 0x4(r24)
    mr r4, r28
    bl fn_806D5900
    lwz r27, 0x0(r3)
lbl_fn_80703000_00001CB0:
    mr r3, r24
    mr r4, r27
    mr r5, r25
    mr r6, r26
    li r7, 0x0
    bl fn_80701CC0
    cmpwi r3, 0x0
    bge lbl_fn_80703000_00001CD8
    li r3, 0x4
    b lbl_fn_80703000_00001D2C
lbl_fn_80703000_00001CD8:
    cmpwi r28, -0x1
    bne lbl_fn_80703000_00001D0C
    stw r27, 0xc(r1)
    addi r4, r1, 0xc
    lwz r3, 0x4(r24)
    bl fn_806D5930
    lwz r12, 0x488(r24)
    mr r3, r24
    lwz r5, 0xc(r1)
    li r4, 0x0
    lwz r6, 0x494(r24)
    mtctr r12
    bctrl
lbl_fn_80703000_00001D0C:
    lwz r12, 0x488(r24)
    mr r3, r24
    mr r5, r27
    lwz r6, 0x494(r24)
    li r4, 0x1
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_80703000_00001D2C:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_807031B0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r30, r3
    li r31, 0x0
    b lbl_fn_807031B0_00001FA8
lbl_fn_807031B0_00001D68:
    lwz r4, 0x7c(r30)
    addi r3, r1, 0xa
    li r5, 0x2
    bl memcpy
    lhz r3, 0xa(r1)
    bl fn_806A4264
    clrlwi r5, r3, 16
    sth r3, 0xa(r1)
    cmplwi r5, 0x1000
    ble lbl_fn_807031B0_00001D98
    li r31, 0x4
    b lbl_fn_807031B0_00001FB4
lbl_fn_807031B0_00001D98:
    lwz r0, 0x80(r30)
    cmpw r0, r5
    bge lbl_fn_807031B0_00001DAC
    li r3, 0x0
    b lbl_fn_807031B0_0000218C
lbl_fn_807031B0_00001DAC:
    lwz r4, 0x7c(r30)
    lbz r0, 0x2(r4)
    extsb r0, r0
    cmpwi r0, 0x1
    beq lbl_fn_807031B0_00001DEC
    cmpwi r0, 0x2
    beq lbl_fn_807031B0_00001E04
    cmpwi r0, 0x3
    beq lbl_fn_807031B0_00001E1C
    cmpwi r0, 0x4
    beq lbl_fn_807031B0_00001E38
    cmpwi r0, 0x5
    beq lbl_fn_807031B0_00001F4C
    cmpwi r0, 0x6
    beq lbl_fn_807031B0_00001F64
    b lbl_fn_807031B0_00001F78
lbl_fn_807031B0_00001DEC:
    mr r3, r30
    addi r4, r4, 0x3
    subi r5, r5, 0x3
    bl fn_80702A90
    mr r31, r3
    b lbl_fn_807031B0_00001F78
lbl_fn_807031B0_00001E04:
    mr r3, r30
    addi r4, r4, 0x3
    subi r5, r5, 0x3
    bl fn_80703000
    mr r31, r3
    b lbl_fn_807031B0_00001F78
lbl_fn_807031B0_00001E1C:
    lwz r3, 0x6b4(r30)
    li r6, 0x0
    bl fn_806D7D60
    cmpwi r3, 0x0
    bgt lbl_fn_807031B0_00001F78
    li r3, 0x3
    b lbl_fn_807031B0_0000218C
lbl_fn_807031B0_00001E38:
    subi r0, r5, 0x3
    addi r29, r4, 0x3
    cmpwi r0, 0x6
    bge lbl_fn_807031B0_00001E50
    li r31, 0x4
    b lbl_fn_807031B0_00001F78
lbl_fn_807031B0_00001E50:
    mr r4, r29
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    addi r3, r1, 0x8
    addi r4, r29, 0x4
    li r5, 0x2
    bl memcpy
    lhz r28, 0x8(r1)
    lwz r27, 0xc(r1)
    lwz r3, 0x4(r30)
    bl fn_806D58F0
    mr r29, r3
    li r26, 0x0
    b lbl_fn_807031B0_00001EC8
lbl_fn_807031B0_00001E8C:
    lwz r3, 0x4(r30)
    mr r4, r26
    bl fn_806D5900
    lwz r31, 0x0(r3)
    mr r3, r31
    bl fn_806FEC90
    cmplw r27, r3
    bne lbl_fn_807031B0_00001EC4
    mr r3, r31
    bl fn_806FECB0
    clrlwi r0, r3, 16
    cmplw r28, r0
    bne lbl_fn_807031B0_00001EC4
    b lbl_fn_807031B0_00001ED4
lbl_fn_807031B0_00001EC4:
    addi r26, r26, 0x1
lbl_fn_807031B0_00001EC8:
    cmpw r26, r29
    blt lbl_fn_807031B0_00001E8C
    li r26, -0x1
lbl_fn_807031B0_00001ED4:
    cmpwi r26, -0x1
    bne lbl_fn_807031B0_00001EE4
    li r31, 0x0
    b lbl_fn_807031B0_00001F78
lbl_fn_807031B0_00001EE4:
    lwz r3, 0x4(r30)
    mr r4, r26
    bl fn_806D5900
    lwz r29, 0x0(r3)
    mr r3, r30
    lwz r12, 0x488(r30)
    li r4, 0x2
    mr r5, r29
    lwz r6, 0x494(r30)
    mtctr r12
    bctrl
    lwz r3, 0x4(r30)
    mr r4, r26
    bl fn_806D5C90
    lwz r4, 0x7d8(r30)
    cmpwi r4, 0x0
    bne lbl_fn_807031B0_00001F38
    mr r3, r29
    li r4, 0x0
    bl fn_806FED20
    b lbl_fn_807031B0_00001F40
lbl_fn_807031B0_00001F38:
    mr r3, r29
    bl fn_806FED20
lbl_fn_807031B0_00001F40:
    stw r29, 0x7d8(r30)
    li r31, 0x0
    b lbl_fn_807031B0_00001F78
lbl_fn_807031B0_00001F4C:
    mr r3, r30
    addi r4, r4, 0x3
    subi r5, r5, 0x3
    bl fn_80702E30
    mr r31, r3
    b lbl_fn_807031B0_00001F78
lbl_fn_807031B0_00001F64:
    mr r3, r30
    addi r4, r4, 0x3
    subi r5, r5, 0x3
    bl fn_80702C70
    mr r31, r3
lbl_fn_807031B0_00001F78:
    lhz r4, 0xa(r1)
    lwz r0, 0x80(r30)
    subf. r5, r4, r0
    stw r5, 0x80(r30)
    beq lbl_fn_807031B0_00001FA0
    lwz r3, 0x7c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_807031B0_00001FA0
    add r4, r3, r4
    bl memmove
lbl_fn_807031B0_00001FA0:
    cmpwi r31, 0x0
    bne lbl_fn_807031B0_00001FB4
lbl_fn_807031B0_00001FA8:
    lwz r0, 0x80(r30)
    cmpwi r0, 0x3
    bge lbl_fn_807031B0_00001D68
lbl_fn_807031B0_00001FB4:
    cmpwi r31, 0x0
    beq lbl_fn_807031B0_00002188
    lwz r26, 0x80(r30)
    cmpwi r26, 0x0
    ble lbl_fn_807031B0_00002038
    lis r29, lbl_807C5DF4@ha
    lwz r27, lbl_807C5DF4@l(r29)
    mr r3, r27
    bl strlen
    cmplw r26, r3
    ble lbl_fn_807031B0_00002038
    lwz r28, lbl_807C5DF4@l(r29)
    lwz r26, 0x7c(r30)
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r3, r26
    mr r4, r28
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_807031B0_00002038
    mr r3, r27
    bl strlen
    add r0, r26, r3
    stw r0, 0x6b0(r30)
    lis r4, lbl_80862AF8@ha
    lwz r12, 0x488(r30)
    lwz r5, lbl_80862AF8@l(r4)
    mr r3, r30
    lwz r6, 0x494(r30)
    li r4, 0x5
    mtctr r12
    bctrl
lbl_fn_807031B0_00002038:
    lwz r12, 0x488(r30)
    lis r4, lbl_80862AF8@ha
    lwz r5, lbl_80862AF8@l(r4)
    mr r3, r30
    lwz r6, 0x494(r30)
    li r4, 0x4
    mtctr r12
    bctrl
    lwz r3, 0x7c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_807031B0_00002068
    bl fn_806D7AC0
lbl_fn_807031B0_00002068:
    lwz r3, 0x6b4(r30)
    li r0, 0x0
    stw r0, 0x7c(r30)
    cmpwi r3, -0x1
    stw r0, 0x80(r30)
    beq lbl_fn_807031B0_00002084
    bl fn_806D7B30
lbl_fn_807031B0_00002084:
    lwz r0, 0x8(r30)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r30)
    cmpwi r0, 0x0
    stw r3, 0x0(r30)
    beq lbl_fn_807031B0_00002118
    li r26, 0x0
    b lbl_fn_807031B0_000020F8
lbl_fn_807031B0_000020A8:
    lwz r3, 0x8(r30)
    mr r4, r26
    bl fn_806D5900
    lwz r0, 0x0(r3)
    mr r3, r30
    stw r0, 0x18(r1)
    bl fn_806FE840
    addi r4, r1, 0x18
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_807031B0_000020F4
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_807031B0_000020F4
    mr r3, r30
    bl fn_806FE840
    addi r4, r1, 0x18
    bl fn_806D6560
lbl_fn_807031B0_000020F4:
    addi r26, r26, 0x1
lbl_fn_807031B0_000020F8:
    lwz r3, 0x8(r30)
    bl fn_806D58F0
    cmpw r26, r3
    blt lbl_fn_807031B0_000020A8
    lwz r3, 0x8(r30)
    bl fn_806D5850
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_807031B0_00002118:
    li r0, -0x1
    stw r0, 0x484(r30)
    mr r27, r30
    li r26, 0x0
    b lbl_fn_807031B0_00002174
lbl_fn_807031B0_0000212C:
    lwz r0, 0x84(r27)
    mr r3, r30
    stw r0, 0x10(r1)
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6610
    cmpwi r3, 0x0
    beq lbl_fn_807031B0_0000216C
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_807031B0_0000216C
    mr r3, r30
    bl fn_806FE840
    addi r4, r1, 0x10
    bl fn_806D6560
lbl_fn_807031B0_0000216C:
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_807031B0_00002174:
    lwz r0, 0x480(r30)
    cmpw r26, r0
    blt lbl_fn_807031B0_0000212C
    li r0, 0x0
    stw r0, 0x480(r30)
lbl_fn_807031B0_00002188:
    mr r3, r31
lbl_fn_807031B0_0000218C:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
