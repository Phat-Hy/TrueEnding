#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void DCInvalidateRange(void);
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_16(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_805FEB00(void);
extern void fn_807097C0(void);
extern void fn_807097E0(void);
extern void fn_80709820(void);
extern void fn_8070EFE0(void);
extern void fn_807187D0(void);
extern void fn_80718D00(void);
extern void fn_80718D70(void);
extern void fn_80718FA0(void);
extern void fn_80719090(void);
extern void fn_80719110(void);
extern void fn_807194F0(void);
extern void fn_807196C0(void);
extern void fn_80719710(void);
extern void fn_80719750(void);
extern void fn_80719790(void);
extern void fn_807198E0(void);
extern void fn_8071BF80(void);
extern void fn_8071C1B0(void);
extern void fn_8071C270(void);
extern void fn_8071C380(void);
extern void fn_8071D260(void);
extern void fn_8071D3F0(void);
extern void fn_8071D760(void);
extern void fn_8071E680(void);
extern void fn_8071E750(void);
extern void fn_8071E950(void);
extern void fn_8071E970(void);
extern void fn_8071EA60(void);
extern void fn_8071EA80(void);
extern void fn_8071EB30(void);
extern void fn_8071EB90(void);
extern void fn_8071EBB0(void);
extern void fn_8071EBD0(void);
extern void fn_8071EBF0(void);
extern void fn_8071EC60(void);
extern void fn_8071ECA0(void);
extern void fn_8071ECC0(void);
extern void fn_8071ECF0(void);
extern void fn_8071ED30(void);
extern void fn_8071ED70(void);
extern void fn_8071EDB0(void);
extern void fn_8071EF30(void);
extern void fn_8071EFB0(void);
extern void fn_8071EFD0(void);
extern void fn_8071F050(void);
extern void fn_8071F0D0(void);
extern void fn_8071F160(void);
extern void fn_8071F1E0(void);
extern void fn_807204D0(void);
extern void fn_80720760(void);

/* External data declarations */
extern u8 lbl_808795C0[];
extern u8 lbl_8087D5C0[];

/* Small data declarations */
extern u32 lbl_80880550;
extern u32 lbl_80889268;
extern u32 lbl_8088926C;
extern u32 lbl_80889270;
extern u32 lbl_80889278;
extern u32 lbl_80889280;
extern u32 lbl_80889284;
extern u32 lbl_80889288;

/* Function declarations */
void pad_03_80719F68_text(void);
void fn_80719F70(void);
void fn_8071A000(void);
void fn_8071A0E0(void);
void fn_8071A440(void);
void fn_8071A610(void);
void fn_8071A680(void);
void fn_8071A720(void);
void fn_8071A800(void);
void fn_8071A9B0(void);
void fn_8071AAF0(void);
void fn_8071ADF0(void);
void fn_8071B060(void);
void fn_8071B260(void);
void fn_8071B350(void);
void fn_8071B510(void);
void fn_8071B840(void);
void fn_8071BA20(void);
void fn_8071BB30(void);
void fn_8071BD30(void);
void fn_8071BE90(void);

asm void pad_03_80719F68_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_80719F70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x100(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80719F70_00000058
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80719F70_00000080
lbl_fn_80719F70_00000058:
    li r31, 0x0
    stw r31, 0x804(r30)
    addi r3, r30, 0x180
    addi r4, r30, 0x184
    li r5, 0x680
    bl fn_8070EFE0
    stb r31, 0x100(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80719F70_00000080:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071A000(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r28, 0x0
    li r3, 0x0
    li r0, 0x1
    stw r31, 0x808(r28)
    mr r31, r28
    stw r29, 0x14c(r28)
    stw r30, 0x150(r28)
    stb r3, 0x104(r28)
    stb r3, 0x105(r28)
    stb r3, 0x106(r28)
    stb r0, 0x101(r28)
    beq lbl_fn_8071A000_00000104
    addi r31, r28, 0xb4
lbl_fn_8071A000_00000104:
    bl fn_807187D0
    mr r4, r31
    bl fn_80718D00
    lwz r4, 0x808(r28)
    addi r31, r28, 0x154
    lwz r3, 0x14c(r28)
    lwz r0, 0x150(r28)
    stw r28, 0x164(r28)
    stw r4, 0x168(r28)
    stw r3, 0x16c(r28)
    stw r0, 0x170(r28)
    bl fn_8071D260
    mr r4, r31
    li r5, 0x1
    bl fn_8071D3F0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071A0E0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_25
    mr r26, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x103(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8071A0E0_000001BC
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_8071A0E0_000004B4
lbl_fn_8071A0E0_000001BC:
    lbz r0, 0x102(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8071A0E0_000004A4
    lwz r4, 0x814(r26)
    mr r3, r26
    bl fn_8071B260
    cmpwi r3, 0x0
    bne lbl_fn_8071A0E0_0000022C
    mr r28, r26
    li r27, 0x0
    li r25, 0x0
    b lbl_fn_8071A0E0_0000020C
lbl_fn_8071A0E0_000001EC:
    lwz r4, 0x818(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8071A0E0_00000204
    lwz r3, 0x804(r26)
    bl fn_80719090
    stw r25, 0x818(r28)
lbl_fn_8071A0E0_00000204:
    addi r28, r28, 0x34
    addi r27, r27, 0x1
lbl_fn_8071A0E0_0000020C:
    lwz r0, 0x810(r26)
    cmpw r27, r0
    blt lbl_fn_8071A0E0_000001EC
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_8071A0E0_000004B4
lbl_fn_8071A0E0_0000022C:
    li r0, 0x0
    stw r0, 0x10(r1)
    mr r3, r26
    addi r4, r1, 0x10
    stw r0, 0xc(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_8071C270
    cmpwi r3, 0x0
    bne lbl_fn_8071A0E0_0000026C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_8071A0E0_000004B4
lbl_fn_8071A0E0_0000026C:
    lwz r3, 0x11c(r26)
    li r29, 0x0
    lwz r0, 0x134(r26)
    lwz r4, 0xc0(r26)
    mullw r5, r3, r0
    lwz r3, 0x110(r26)
    lwz r0, 0x8(r1)
    cmpwi r4, 0x3
    add r0, r3, r0
    stw r0, 0x110(r26)
    beq lbl_fn_8071A0E0_000002AC
    cmpwi r4, 0x2
    beq lbl_fn_8071A0E0_000002CC
    cmpwi r4, 0x1
    beq lbl_fn_8071A0E0_000002D4
    b lbl_fn_8071A0E0_000002D8
lbl_fn_8071A0E0_000002AC:
    srwi r0, r5, 3
    clrlwi. r3, r5, 29
    mulli r29, r0, 0xe
    beq lbl_fn_8071A0E0_000002D8
    subi r0, r3, 0x1
    slwi r0, r0, 1
    add r29, r29, r0
    b lbl_fn_8071A0E0_000002D8
lbl_fn_8071A0E0_000002CC:
    mr r29, r5
    b lbl_fn_8071A0E0_000002D8
lbl_fn_8071A0E0_000002D4:
    srwi r29, r5, 1
lbl_fn_8071A0E0_000002D8:
    addi r28, r26, 0xb58
    li r27, 0x0
    li r30, 0x1
    li r31, 0x0
    b lbl_fn_8071A0E0_0000044C
lbl_fn_8071A0E0_000002EC:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8071A0E0_00000444
    lwz r0, 0xc0(r26)
    addi r3, r1, 0x30
    stw r0, 0x18(r1)
    li r4, 0x0
    stb r30, 0x1c(r1)
    lwz r0, 0xc(r28)
    stw r0, 0x20(r1)
    lwz r0, 0xcc(r26)
    stw r0, 0x24(r1)
    stw r31, 0x28(r1)
    stw r29, 0x2c(r1)
    b lbl_fn_8071A0E0_000003F8
lbl_fn_8071A0E0_00000328:
    cmpwi r4, 0x2
    blt lbl_fn_8071A0E0_00000338
    li r6, 0x0
    b lbl_fn_8071A0E0_0000035C
lbl_fn_8071A0E0_00000338:
    add r5, r28, r4
    lbz r0, 0x10(r5)
    cmpwi r0, 0x10
    blt lbl_fn_8071A0E0_00000350
    li r6, 0x0
    b lbl_fn_8071A0E0_0000035C
lbl_fn_8071A0E0_00000350:
    mulli r0, r0, 0x34
    add r5, r26, r0
    addi r6, r5, 0x818
lbl_fn_8071A0E0_0000035C:
    cmpwi r6, 0x0
    beq lbl_fn_8071A0E0_000003F0
    lwz r0, 0x0(r6)
    stw r0, 0x0(r3)
    lwz r0, 0x8(r6)
    lwz r5, 0x4(r6)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r6)
    lwz r5, 0xc(r6)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x18(r6)
    lwz r5, 0x14(r6)
    stw r5, 0x14(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x20(r6)
    lwz r5, 0x1c(r6)
    stw r5, 0x1c(r3)
    stw r0, 0x20(r3)
    lhz r0, 0x24(r6)
    sth r0, 0x24(r3)
    lhz r0, 0x26(r6)
    sth r0, 0x26(r3)
    lhz r0, 0x28(r6)
    sth r0, 0x28(r3)
    lhz r0, 0x2a(r6)
    sth r0, 0x2a(r3)
    lhz r0, 0x2c(r6)
    sth r0, 0x2c(r3)
    lhz r0, 0x2e(r6)
    sth r0, 0x2e(r3)
    lhz r0, 0x30(r6)
    sth r0, 0x30(r3)
    lwz r5, 0x0(r6)
    lbz r0, 0x0(r5)
    sth r0, 0x26(r3)
lbl_fn_8071A0E0_000003F0:
    addi r3, r3, 0x34
    addi r4, r4, 0x1
lbl_fn_8071A0E0_000003F8:
    lwz r0, 0xc(r28)
    cmpw r4, r0
    blt lbl_fn_8071A0E0_00000328
    bl OSDisableInterrupts
    lwz r0, 0x4(r28)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_8071A0E0_0000043C
    lwz r5, 0xc(r1)
    mr r3, r0
    addi r4, r1, 0x18
    bl fn_8071E750
    lwz r3, 0x4(r28)
    li r4, 0x1
    bl fn_8071F1E0
    lwz r3, 0x4(r28)
    bl fn_8071E950
lbl_fn_8071A0E0_0000043C:
    mr r3, r25
    bl OSRestoreInterrupts
lbl_fn_8071A0E0_00000444:
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_fn_8071A0E0_0000044C:
    lwz r0, 0x80c(r26)
    cmpw r27, r0
    blt lbl_fn_8071A0E0_000002EC
    lwz r3, 0xe0(r26)
    lwz r4, 0x10(r1)
    subi r0, r3, 0x2
    cmplw r4, r0
    bne lbl_fn_8071A0E0_0000047C
    mr r3, r26
    li r4, 0x1
    bl fn_8071BD30
    b lbl_fn_8071A0E0_00000494
lbl_fn_8071A0E0_0000047C:
    subi r0, r3, 0x1
    cmplw r4, r0
    bne lbl_fn_8071A0E0_00000494
    mr r3, r26
    li r4, 0x0
    bl fn_8071BD30
lbl_fn_8071A0E0_00000494:
    mr r3, r26
    bl fn_8071C1B0
    li r0, 0x1
    stb r0, 0x102(r26)
lbl_fn_8071A0E0_000004A4:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
lbl_fn_8071A0E0_000004B4:
    addi r11, r1, 0xc0
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8071A440(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r31, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    mr r27, r31
    li r28, 0x0
lbl_fn_8071A440_00000504:
    lbz r0, 0xb58(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8071A440_00000520
    lwz r3, 0xb5c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8071A440_00000520
    bl fn_8071E970
lbl_fn_8071A440_00000520:
    addi r28, r28, 0x1
    addi r27, r27, 0x38
    cmpwi r28, 0x8
    blt lbl_fn_8071A440_00000504
    lbz r0, 0x101(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8071A440_00000558
    cmpwi r31, 0x0
    mr r28, r31
    beq lbl_fn_8071A440_0000054C
    addi r28, r31, 0xb4
lbl_fn_8071A440_0000054C:
    bl fn_807187D0
    mr r4, r28
    bl fn_80718D70
lbl_fn_8071A440_00000558:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_8071D260
    addi r4, r31, 0x154
    bl fn_8071D760
    bl OSDisableInterrupts
    lwz r0, 0x174(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_8071A440_000005A4
    b lbl_fn_8071A440_00000598
lbl_fn_8071A440_00000588:
    lwz r29, 0x17c(r31)
    bl fn_8071D260
    subi r4, r29, 0x2c
    bl fn_8071D760
lbl_fn_8071A440_00000598:
    lwz r0, 0x174(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071A440_00000588
lbl_fn_8071A440_000005A4:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r27, r31
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_8071A440_000005DC
lbl_fn_8071A440_000005BC:
    lwz r4, 0x818(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8071A440_000005D4
    lwz r3, 0x804(r31)
    bl fn_80719090
    stw r29, 0x818(r27)
lbl_fn_8071A440_000005D4:
    addi r27, r27, 0x34
    addi r30, r30, 0x1
lbl_fn_8071A440_000005DC:
    lwz r0, 0x810(r31)
    cmpw r30, r0
    blt lbl_fn_8071A440_000005BC
    bl OSDisableInterrupts
    mr r29, r3
    addi r27, r31, 0xb58
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8071A440_00000628
lbl_fn_8071A440_00000600:
    lbz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8071A440_00000620
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8071A440_00000620
    bl fn_8071E680
    stw r30, 0x4(r27)
lbl_fn_8071A440_00000620:
    addi r27, r27, 0x38
    addi r28, r28, 0x1
lbl_fn_8071A440_00000628:
    lwz r0, 0x80c(r31)
    cmpw r28, r0
    blt lbl_fn_8071A440_00000600
    mr r3, r29
    bl OSRestoreInterrupts
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r3, 0x808(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8071A440_0000066C
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x808(r31)
lbl_fn_8071A440_0000066C:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r0, 0x0
    stb r0, 0x102(r31)
    addi r11, r1, 0x20
    stb r0, 0x103(r31)
    stb r0, 0x101(r31)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071A610(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r31, 0x0
    stb r31, 0x107(r30)
    beq lbl_fn_8071A610_000006E4
    li r0, 0x1
    stb r0, 0x109(r30)
lbl_fn_8071A610_000006E4:
    mr r3, r30
    bl fn_8071C1B0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071A680(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x103(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8071A680_00000760
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_8071A680_0000079C
lbl_fn_8071A680_00000760:
    lbz r5, 0xc4(r30)
    lwz r4, 0xcc(r30)
    neg r0, r5
    lwz r3, 0xd4(r30)
    or r5, r0, r5
    lwz r0, 0xd8(r30)
    srwi r5, r5, 31
    stb r5, 0x0(r31)
    stw r4, 0x4(r31)
    stw r3, 0x8(r31)
    stw r0, 0xc(r31)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
lbl_fn_8071A680_0000079C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071A720(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x101(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071A720_000007F8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, -0x1
    b lbl_fn_8071A720_00000878
lbl_fn_8071A720_000007F8:
    lbz r0, 0xb58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071A720_00000818
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, -0x1
    b lbl_fn_8071A720_00000878
lbl_fn_8071A720_00000818:
    lbz r0, 0x103(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071A720_00000838
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_8071A720_00000878
lbl_fn_8071A720_00000838:
    lwz r3, 0xb5c(r31)
    li r5, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8071A720_00000850
    bl fn_8071EFB0
    mr r5, r3
lbl_fn_8071A720_00000850:
    lwz r3, 0x138(r31)
    lwz r0, 0x13c(r31)
    lwz r4, 0xe8(r31)
    subf r0, r3, r0
    mullw r0, r4, r0
    add r31, r0, r5
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r31
lbl_fn_8071A720_00000878:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071A800(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x101(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071A800_000008F0
    lfs f31, lbl_80889268
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    fmr f1, f31
    b lbl_fn_8071A800_00000A2C
lbl_fn_8071A800_000008F0:
    lbz r0, 0xb58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071A800_00000914
    lfs f31, lbl_80889268
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    fmr f1, f31
    b lbl_fn_8071A800_00000A2C
lbl_fn_8071A800_00000914:
    lbz r0, 0x103(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071A800_00000970
    lwz r4, 0x124(r31)
    lwz r3, 0x114(r31)
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    subf r0, r3, r4
    lfd f3, lbl_80889270
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f2, 0x8(r1)
    lfs f1, lbl_8088926C
    fsubs f0, f0, f3
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fdivs f31, f1, f0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    fmr f1, f31
    b lbl_fn_8071A800_00000A2C
lbl_fn_8071A800_00000970:
    lwz r3, 0xb5c(r31)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8071A800_00000988
    bl fn_8071EFB0
    mr r4, r3
lbl_fn_8071A800_00000988:
    lwz r3, 0xe8(r31)
    lwz r0, 0x138(r31)
    stw r3, 0x14(r1)
    mullw r0, r0, r3
    lwz r3, 0x124(r31)
    lfd f6, lbl_80889270
    subi r5, r3, 0x1
    lfd f5, lbl_80889278
    lfd f0, 0x10(r1)
    subf r3, r0, r4
    xoris r0, r5, 0x8000
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    fsubs f0, f0, f5
    lwz r3, 0x174(r31)
    lfd f1, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f3, f1, f6
    lfs f1, lbl_8088926C
    lfd f2, 0x10(r1)
    stw r3, 0xc(r1)
    fdivs f4, f3, f0
    lfs f31, lbl_80889268
    lfd f3, 0x8(r1)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f3, f3, f5
    fsubs f2, f2, f6
    fsubs f0, f0, f6
    fadds f3, f4, f3
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fdivs f0, f1, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_8071A800_00000A18
    b lbl_fn_8071A800_00000A1C
lbl_fn_8071A800_00000A18:
    fmr f31, f0
lbl_fn_8071A800_00000A1C:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    fmr f1, f31
lbl_fn_8071A800_00000A2C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071A9B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_807097C0
    lfs f1, lbl_80889280
    li r3, 0x0
    lfs f0, lbl_80889268
    li r0, 0x1
    stw r0, 0x814(r31)
    stfs f1, 0xb88(r31)
    stfs f0, 0xb8c(r31)
    stfs f1, 0xbc0(r31)
    stfs f0, 0xbc4(r31)
    stfs f1, 0xbf8(r31)
    stfs f0, 0xbfc(r31)
    stfs f1, 0xc30(r31)
    stfs f0, 0xc34(r31)
    stfs f1, 0xc68(r31)
    stfs f0, 0xc6c(r31)
    stfs f1, 0xca0(r31)
    stfs f0, 0xca4(r31)
    stfs f1, 0xcd8(r31)
    stfs f0, 0xcdc(r31)
    stfs f1, 0xd10(r31)
    stfs f0, 0xd14(r31)
    stb r3, 0x102(r31)
    stb r3, 0x103(r31)
    stb r3, 0x10e(r31)
    stb r3, 0x107(r31)
    stb r3, 0x108(r31)
    stb r3, 0x109(r31)
    stb r3, 0x10a(r31)
    stb r3, 0x10d(r31)
    stb r3, 0x10b(r31)
    stb r3, 0x10c(r31)
    stb r3, 0x10f(r31)
    stw r3, 0x110(r31)
    stw r3, 0x148(r31)
    stb r3, 0xb58(r31)
    stw r3, 0xb5c(r31)
    stb r3, 0xb90(r31)
    stw r3, 0xb94(r31)
    stb r3, 0xbc8(r31)
    stw r3, 0xbcc(r31)
    stb r3, 0xc00(r31)
    stw r3, 0xc04(r31)
    stb r3, 0xc38(r31)
    stw r3, 0xc3c(r31)
    stb r3, 0xc70(r31)
    stw r3, 0xc74(r31)
    stb r3, 0xca8(r31)
    stw r3, 0xcac(r31)
    stb r3, 0xce0(r31)
    stw r3, 0xce4(r31)
    stw r3, 0x818(r31)
    stw r3, 0x84c(r31)
    stw r3, 0x880(r31)
    stw r3, 0x8b4(r31)
    stw r3, 0x8e8(r31)
    stw r3, 0x91c(r31)
    stw r3, 0x950(r31)
    stw r3, 0x984(r31)
    stw r3, 0x9b8(r31)
    stw r3, 0x9ec(r31)
    stw r3, 0xa20(r31)
    stw r3, 0xa54(r31)
    stw r3, 0xa88(r31)
    stw r3, 0xabc(r31)
    stw r3, 0xaf0(r31)
    stw r3, 0xb24(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071AAF0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    lis r7, lbl_8087D5C0@ha
    mr r29, r3
    addi r7, r7, lbl_8087D5C0@l
    stw r7, 0x8(r1)
    mr r27, r4
    mr r30, r5
    mr r31, r6
    mr r3, r7
    addi r28, r1, 0x8
    bl fn_805F3130
    stw r27, 0xc(r1)
    addi r3, r1, 0x10
    bl fn_80719110
    lis r4, lbl_808795C0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_808795C0@l
    li r5, 0x4000
    bl fn_807194F0
    cmpwi r3, 0x0
    bne lbl_fn_8071AAF0_00000C04
    cmpwi r28, 0x0
    beq lbl_fn_8071AAF0_00000BFC
    lwz r3, 0x8(r1)
    bl fn_805F3210
lbl_fn_8071AAF0_00000BFC:
    li r3, 0x0
    b lbl_fn_8071AAF0_00000E70
lbl_fn_8071AAF0_00000C04:
    addi r3, r1, 0xc
    addi r4, r29, 0xc0
    bl fn_80719710
    cmpwi r3, 0x0
    bne lbl_fn_8071AAF0_00000C30
    cmpwi r28, 0x0
    beq lbl_fn_8071AAF0_00000C28
    lwz r3, 0x8(r1)
    bl fn_805F3210
lbl_fn_8071AAF0_00000C28:
    li r3, 0x0
    b lbl_fn_8071AAF0_00000E70
lbl_fn_8071AAF0_00000C30:
    lwz r0, 0x810(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8071AAF0_00000C54
    addi r3, r1, 0xc
    bl fn_807196C0
    cmpwi r3, 0x10
    ble lbl_fn_8071AAF0_00000C50
    li r3, 0x10
lbl_fn_8071AAF0_00000C50:
    stw r3, 0x810(r29)
lbl_fn_8071AAF0_00000C54:
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_8071AAF0_00000C9C
lbl_fn_8071AAF0_00000C60:
    add r4, r29, r28
    mr r5, r27
    addi r3, r1, 0xc
    addi r4, r4, 0xb60
    bl fn_80719750
    cmpwi r3, 0x0
    bne lbl_fn_8071AAF0_00000C94
    addic. r0, r1, 0x8
    beq lbl_fn_8071AAF0_00000C8C
    lwz r3, 0x8(r1)
    bl fn_805F3210
lbl_fn_8071AAF0_00000C8C:
    li r3, 0x0
    b lbl_fn_8071AAF0_00000E70
lbl_fn_8071AAF0_00000C94:
    addi r27, r27, 0x1
    addi r28, r28, 0x38
lbl_fn_8071AAF0_00000C9C:
    lwz r0, 0x80c(r29)
    cmpw r27, r0
    blt lbl_fn_8071AAF0_00000C60
    lwz r3, 0xc0(r29)
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8071AAF0_00000DD0
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_8071AAF0_00000D08
lbl_fn_8071AAF0_00000CC8:
    add r5, r29, r28
    mr r6, r27
    addi r4, r5, 0x81c
    addi r3, r1, 0xc
    addi r5, r5, 0x844
    bl fn_80719790
    cmpwi r3, 0x0
    bne lbl_fn_8071AAF0_00000D00
    addic. r0, r1, 0x8
    beq lbl_fn_8071AAF0_00000CF8
    lwz r3, 0x8(r1)
    bl fn_805F3210
lbl_fn_8071AAF0_00000CF8:
    li r3, 0x0
    b lbl_fn_8071AAF0_00000E70
lbl_fn_8071AAF0_00000D00:
    addi r27, r27, 0x1
    addi r28, r28, 0x34
lbl_fn_8071AAF0_00000D08:
    lwz r0, 0x810(r29)
    cmpw r27, r0
    blt lbl_fn_8071AAF0_00000CC8
    cmpwi r31, 0x0
    beq lbl_fn_8071AAF0_00000DD0
    cmpwi r30, 0x0
    bne lbl_fn_8071AAF0_00000D28
    b lbl_fn_8071AAF0_00000D50
lbl_fn_8071AAF0_00000D28:
    cmpwi r30, 0x1
    bne lbl_fn_8071AAF0_00000D50
    lwz r0, 0xcc(r29)
    lis r3, 0x1062
    addi r3, r3, 0x4dd3
    mullw r0, r31, r0
    mulhw r0, r3, r0
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r31, r0, r3
lbl_fn_8071AAF0_00000D50:
    lwz r0, 0xe8(r29)
    addi r3, r1, 0xc
    lwz r7, 0xc8(r29)
    addi r4, r1, 0x38
    divw r6, r31, r0
    addi r5, r1, 0x18
    bl fn_807198E0
    cmpwi r3, 0x0
    bne lbl_fn_8071AAF0_00000D8C
    addic. r0, r1, 0x8
    beq lbl_fn_8071AAF0_00000D84
    lwz r3, 0x8(r1)
    bl fn_805F3210
lbl_fn_8071AAF0_00000D84:
    li r3, 0x0
    b lbl_fn_8071AAF0_00000E70
lbl_fn_8071AAF0_00000D8C:
    addi r7, r1, 0x38
    addi r5, r1, 0x18
    li r8, 0x0
    li r3, 0x0
    li r4, 0x0
    b lbl_fn_8071AAF0_00000DC4
lbl_fn_8071AAF0_00000DA4:
    add r6, r29, r3
    lhzx r0, r7, r4
    sth r0, 0x840(r6)
    addi r8, r8, 0x1
    addi r3, r3, 0x34
    lhzx r0, r5, r4
    addi r4, r4, 0x2
    sth r0, 0x842(r6)
lbl_fn_8071AAF0_00000DC4:
    lwz r0, 0xc8(r29)
    cmpw r8, r0
    blt lbl_fn_8071AAF0_00000DA4
lbl_fn_8071AAF0_00000DD0:
    mr r3, r29
    bl fn_8071B060
    cmpwi r3, 0x0
    bne lbl_fn_8071AAF0_00000DF8
    addic. r0, r1, 0x8
    beq lbl_fn_8071AAF0_00000DF0
    lwz r3, 0x8(r1)
    bl fn_805F3210
lbl_fn_8071AAF0_00000DF0:
    li r3, 0x0
    b lbl_fn_8071AAF0_00000E70
lbl_fn_8071AAF0_00000DF8:
    li r0, 0x0
    stw r0, 0x114(r29)
    li r27, 0x0
    b lbl_fn_8071AAF0_00000E2C
lbl_fn_8071AAF0_00000E08:
    mr r3, r29
    bl fn_8071BF80
    lbz r0, 0x10e(r29)
    lwz r3, 0x114(r29)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x114(r29)
    bne lbl_fn_8071AAF0_00000E38
    addi r27, r27, 0x1
lbl_fn_8071AAF0_00000E2C:
    lwz r0, 0x124(r29)
    cmpw r27, r0
    blt lbl_fn_8071AAF0_00000E08
lbl_fn_8071AAF0_00000E38:
    lwz r4, 0xe0(r29)
    cmplwi r4, 0x2
    bgt lbl_fn_8071AAF0_00000E5C
    lbz r0, 0xc4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8071AAF0_00000E5C
    mr r3, r29
    subi r4, r4, 0x1
    bl fn_8071BE90
lbl_fn_8071AAF0_00000E5C:
    addic. r0, r1, 0x8
    beq lbl_fn_8071AAF0_00000E6C
    lwz r3, 0x8(r1)
    bl fn_805F3210
lbl_fn_8071AAF0_00000E6C:
    li r3, 0x1
lbl_fn_8071AAF0_00000E70:
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8071ADF0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_16
    cmpwi r4, 0x0
    mr r19, r3
    mr r20, r4
    mr r16, r5
    mr r21, r7
    mr r22, r8
    mr r23, r9
    la r17, lbl_80880550
    beq lbl_fn_8071ADF0_00000F08
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071ADF0_00000EEC
lbl_fn_8071ADF0_00000ED8:
    cmplw r3, r17
    bne lbl_fn_8071ADF0_00000EE8
    li r0, 0x1
    b lbl_fn_8071ADF0_00000EF8
lbl_fn_8071ADF0_00000EE8:
    lwz r3, 0x0(r3)
lbl_fn_8071ADF0_00000EEC:
    cmpwi r3, 0x0
    bne lbl_fn_8071ADF0_00000ED8
    li r0, 0x0
lbl_fn_8071ADF0_00000EF8:
    cmpwi r0, 0x0
    beq lbl_fn_8071ADF0_00000F08
    mr r3, r20
    b lbl_fn_8071ADF0_00000F0C
lbl_fn_8071ADF0_00000F08:
    li r3, 0x0
lbl_fn_8071ADF0_00000F0C:
    cmpwi r3, 0x0
    beq lbl_fn_8071ADF0_00000F1C
    li r0, 0x1
    stw r0, 0x68(r3)
lbl_fn_8071ADF0_00000F1C:
    lis r3, lbl_8087D5C0@ha
    addi r3, r3, lbl_8087D5C0@l
    stw r3, 0x8(r1)
    bl fn_805F3130
    lis r29, lbl_808795C0@ha
    li r4, 0x4000
    addi r3, r29, lbl_808795C0@l
    bl DCInvalidateRange
    lhz r0, 0xd0(r19)
    addi r30, r29, lbl_808795C0@l
    addi r31, r1, 0x10
    li r27, 0x0
    add r28, r16, r0
    b lbl_fn_8071ADF0_0000103C
lbl_fn_8071ADF0_00000F54:
    lwz r0, 0x810(r19)
    addi r3, r27, 0x2
    li r26, 0x2
    cmpw r3, r0
    ble lbl_fn_8071ADF0_00000F6C
    subf r26, r27, r0
lbl_fn_8071ADF0_00000F6C:
    lwz r12, 0x0(r20)
    mullw r25, r21, r26
    mr r3, r20
    lwz r12, 0x44(r12)
    mr r4, r28
    li r5, 0x0
    mtctr r12
    bctrl
    lwz r12, 0x0(r20)
    mr r3, r20
    mr r5, r25
    addi r4, r29, lbl_808795C0@l
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r3, r25
    beq lbl_fn_8071ADF0_00000FC8
    addic. r0, r1, 0x8
    beq lbl_fn_8071ADF0_00000FC0
    lwz r3, 0x8(r1)
    bl fn_805F3210
lbl_fn_8071ADF0_00000FC0:
    li r3, 0x0
    b lbl_fn_8071ADF0_000010E0
lbl_fn_8071ADF0_00000FC8:
    mulli r18, r27, 0x34
    slwi r17, r27, 1
    li r24, 0x0
    b lbl_fn_8071ADF0_00001030
lbl_fn_8071ADF0_00000FD8:
    cmpwi r23, 0x0
    beq lbl_fn_8071ADF0_00000FEC
    mullw r0, r21, r24
    lbzx r0, r30, r0
    sthx r0, r31, r17
lbl_fn_8071ADF0_00000FEC:
    lwz r0, 0x11c(r19)
    mullw r4, r21, r24
    add r3, r19, r18
    lwz r3, 0x818(r3)
    mr r5, r21
    mullw r0, r0, r22
    add r4, r4, r30
    add r16, r0, r3
    mr r3, r16
    bl memcpy
    mr r3, r16
    mr r4, r21
    bl DCFlushRange
    addi r27, r27, 0x1
    addi r18, r18, 0x34
    addi r17, r17, 0x2
    addi r24, r24, 0x1
lbl_fn_8071ADF0_00001030:
    cmpw r24, r26
    blt lbl_fn_8071ADF0_00000FD8
    add r28, r28, r25
lbl_fn_8071ADF0_0000103C:
    lwz r7, 0x810(r19)
    cmpw r27, r7
    blt lbl_fn_8071ADF0_00000F54
    cmpwi r23, 0x0
    beq lbl_fn_8071ADF0_000010A8
    lwz r3, 0xc0(r19)
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8071ADF0_000010A8
    addi r6, r1, 0x10
    li r8, 0x0
    li r3, 0x0
    li r4, 0x0
    b lbl_fn_8071ADF0_00001090
lbl_fn_8071ADF0_00001078:
    add r5, r19, r3
    lhzx r0, r6, r4
    sth r0, 0x84a(r5)
    addi r8, r8, 0x1
    addi r3, r3, 0x34
    addi r4, r4, 0x2
lbl_fn_8071ADF0_00001090:
    cmpw r8, r7
    bge lbl_fn_8071ADF0_000010A0
    cmpwi r8, 0x10
    blt lbl_fn_8071ADF0_00001078
lbl_fn_8071ADF0_000010A0:
    li r0, 0x1
    stb r0, 0x10c(r19)
lbl_fn_8071ADF0_000010A8:
    lbz r0, 0x103(r19)
    cmpwi r0, 0x0
    bne lbl_fn_8071ADF0_000010CC
    lwz r0, 0x114(r19)
    subic. r0, r0, 0x1
    stw r0, 0x114(r19)
    bne lbl_fn_8071ADF0_000010CC
    li r0, 0x1
    stb r0, 0x103(r19)
lbl_fn_8071ADF0_000010CC:
    addic. r0, r1, 0x8
    beq lbl_fn_8071ADF0_000010DC
    lwz r3, 0x8(r1)
    bl fn_805F3210
lbl_fn_8071ADF0_000010DC:
    li r3, 0x1
lbl_fn_8071ADF0_000010E0:
    addi r11, r1, 0x70
    bl _restgpr_16
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8071B060(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r5, 0x804(r3)
    li r0, 0x0
    mr r31, r3
    addi r4, r1, 0x10
    lwz r27, 0x8(r5)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8071C270
    cmpwi r3, 0x0
    bne lbl_fn_8071B060_00001148
    li r3, 0x0
    b lbl_fn_8071B060_000012D8
lbl_fn_8071B060_00001148:
    lwz r4, 0xd4(r31)
    lwz r3, 0xe8(r31)
    lwz r0, 0xe4(r31)
    divwu r4, r4, r3
    lwz r3, 0xe0(r31)
    cmpwi r0, 0x2000
    stw r0, 0x11c(r31)
    subi r3, r3, 0x1
    stw r3, 0x144(r31)
    stw r4, 0x140(r31)
    ble lbl_fn_8071B060_0000117C
    li r3, 0x0
    b lbl_fn_8071B060_000012D8
lbl_fn_8071B060_0000117C:
    divwu r0, r27, r0
    stw r0, 0x120(r31)
    cmpwi r0, 0x4
    bge lbl_fn_8071B060_00001194
    li r3, 0x0
    b lbl_fn_8071B060_000012D8
lbl_fn_8071B060_00001194:
    cmpwi r0, 0x20
    ble lbl_fn_8071B060_000011A4
    li r0, 0x20
    stw r0, 0x120(r31)
lbl_fn_8071B060_000011A4:
    lwz r4, 0x120(r31)
    li r3, 0x0
    lbz r0, 0x10a(r31)
    subi r5, r4, 0x1
    stw r5, 0x124(r31)
    cmpwi r0, 0x0
    stw r5, 0x118(r31)
    lwz r0, 0x10(r1)
    stw r0, 0x13c(r31)
    lwz r4, 0x10(r1)
    stw r4, 0x130(r31)
    stw r3, 0x12c(r31)
    stw r3, 0x138(r31)
    beq lbl_fn_8071B060_000011E8
    lwz r0, 0xe0(r31)
    stw r0, 0x128(r31)
    b lbl_fn_8071B060_00001220
lbl_fn_8071B060_000011E8:
    lwz r6, 0x144(r31)
    addi r7, r5, 0x1
    lwz r0, 0x140(r31)
    subf r3, r4, r6
    addi r4, r3, 0x1
    subf r3, r0, r6
    subf r4, r4, r7
    addi r3, r3, 0x1
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_8071B060_0000121C
    mr r5, r7
lbl_fn_8071B060_0000121C:
    stw r5, 0x128(r31)
lbl_fn_8071B060_00001220:
    lwz r0, 0x128(r31)
    stw r0, 0x134(r31)
    bl OSDisableInterrupts
    lbz r0, 0x10f(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_8071B060_000012CC
    mr r28, r31
    li r27, 0x0
    b lbl_fn_8071B060_0000129C
lbl_fn_8071B060_00001248:
    lwz r3, 0x804(r31)
    bl fn_80718FA0
    cmpwi r3, 0x0
    bne lbl_fn_8071B060_00001290
    mr r26, r31
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_8071B060_00001280
lbl_fn_8071B060_00001268:
    lwz r3, 0x804(r31)
    lwz r4, 0x818(r26)
    bl fn_80719090
    stw r29, 0x818(r26)
    addi r26, r26, 0x34
    addi r28, r28, 0x1
lbl_fn_8071B060_00001280:
    cmpw r28, r27
    blt lbl_fn_8071B060_00001268
    li r0, 0x0
    b lbl_fn_8071B060_000012AC
lbl_fn_8071B060_00001290:
    stw r3, 0x818(r28)
    addi r28, r28, 0x34
    addi r27, r27, 0x1
lbl_fn_8071B060_0000129C:
    lwz r0, 0x810(r31)
    cmpw r27, r0
    blt lbl_fn_8071B060_00001248
    li r0, 0x1
lbl_fn_8071B060_000012AC:
    cmpwi r0, 0x0
    bne lbl_fn_8071B060_000012C4
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8071B060_000012D8
lbl_fn_8071B060_000012C4:
    li r0, 0x1
    stb r0, 0x10f(r31)
lbl_fn_8071B060_000012CC:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8071B060_000012D8:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071B260(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    bl OSDisableInterrupts
    addi r27, r24, 0xb58
    mr r31, r3
    mr r28, r27
    li r26, 0x0
    lis r29, fn_8071C380@ha
    li r30, 0x1
    b lbl_fn_8071B260_000013B4
lbl_fn_8071B260_00001334:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8071B260_000013AC
    bl fn_807204D0
    lwz r4, 0xc(r28)
    mr r5, r25
    mr r8, r28
    addi r7, r29, fn_8071C380@l
    li r6, 0xff
    bl fn_80720760
    cmpwi r3, 0x0
    bne lbl_fn_8071B260_000013A4
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8071B260_0000138C
lbl_fn_8071B260_00001370:
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8071B260_00001384
    bl fn_8071E680
    stw r30, 0x4(r27)
lbl_fn_8071B260_00001384:
    addi r27, r27, 0x38
    addi r28, r28, 0x1
lbl_fn_8071B260_0000138C:
    cmpw r28, r26
    blt lbl_fn_8071B260_00001370
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8071B260_000013CC
lbl_fn_8071B260_000013A4:
    stw r3, 0x4(r28)
    stb r30, 0xa1(r3)
lbl_fn_8071B260_000013AC:
    addi r28, r28, 0x38
    addi r26, r26, 0x1
lbl_fn_8071B260_000013B4:
    lwz r0, 0x80c(r24)
    cmpw r26, r0
    blt lbl_fn_8071B260_00001334
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8071B260_000013CC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071B350(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x101(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071B350_00001584
    lbz r0, 0x104(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071B350_0000143C
    lbz r0, 0x105(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8071B350_0000143C
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071B350_00001584
lbl_fn_8071B350_0000143C:
    lbz r0, 0x102(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071B350_00001498
    lwz r0, 0x80c(r3)
    addi r4, r3, 0xb58
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8071B350_00001498
    nop
lbl_fn_8071B350_00001460:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8071B350_00001490
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8071B350_00001490
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071B350_00001584
lbl_fn_8071B350_00001490:
    addi r4, r4, 0x38
    bdnz lbl_fn_8071B350_00001460
lbl_fn_8071B350_00001498:
    lbz r0, 0x109(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071B350_00001544
    lwz r0, 0x174(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8071B350_00001544
    lwz r29, 0x808(r3)
    la r30, lbl_80880550
    cmpwi r29, 0x0
    beq lbl_fn_8071B350_00001504
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071B350_000014EC
lbl_fn_8071B350_000014D8:
    cmplw r3, r30
    bne lbl_fn_8071B350_000014E8
    li r0, 0x1
    b lbl_fn_8071B350_000014F8
lbl_fn_8071B350_000014E8:
    lwz r3, 0x0(r3)
lbl_fn_8071B350_000014EC:
    cmpwi r3, 0x0
    bne lbl_fn_8071B350_000014D8
    li r0, 0x0
lbl_fn_8071B350_000014F8:
    cmpwi r0, 0x0
    beq lbl_fn_8071B350_00001504
    b lbl_fn_8071B350_00001508
lbl_fn_8071B350_00001504:
    li r29, 0x0
lbl_fn_8071B350_00001508:
    cmpwi r29, 0x0
    bne lbl_fn_8071B350_00001518
    li r0, 0x0
    b lbl_fn_8071B350_0000152C
lbl_fn_8071B350_00001518:
    bl fn_805FEB00
    xori r0, r3, 0x1
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_8071B350_0000152C:
    cmpwi r0, 0x0
    bne lbl_fn_8071B350_00001544
    li r0, 0x0
    stb r0, 0x109(r31)
    mr r3, r31
    bl fn_8071C1B0
lbl_fn_8071B350_00001544:
    lbz r0, 0x106(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8071B350_00001558
    li r0, 0x0
    stb r0, 0x106(r31)
lbl_fn_8071B350_00001558:
    addi r29, r31, 0xb58
    li r30, 0x0
    b lbl_fn_8071B350_00001578
lbl_fn_8071B350_00001564:
    mr r3, r31
    mr r4, r29
    bl fn_8071B510
    addi r29, r29, 0x38
    addi r30, r30, 0x1
lbl_fn_8071B350_00001578:
    lwz r0, 0x80c(r31)
    cmpw r30, r0
    blt lbl_fn_8071B350_00001564
lbl_fn_8071B350_00001584:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071B510(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x50
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    stfd f25, 0x60(r1)
    psq_st f25, 0x68(r1), 0, 0
    stfd f24, 0x50(r1)
    psq_st f24, 0x58(r1), 0, 0
    bl _savegpr_26
    lbz r0, 0x0(r4)
    mr r31, r3
    mr r26, r4
    cmpwi r0, 0x0
    beq lbl_fn_8071B510_00001874
    lbz r0, 0x8(r4)
    lis r5, 0x4330
    stw r0, 0x2c(r1)
    lfs f31, lbl_80889280
    stw r5, 0x28(r1)
    lfd f2, lbl_80889278
    fmr f30, f31
    lfd f0, 0x28(r1)
    lfs f1, lbl_80889284
    fsubs f2, f0, f2
    lfs f3, 0x4(r3)
    lbz r6, 0x9(r4)
    fmuls f31, f31, f3
    lfs f0, 0x30(r4)
    fdivs f1, f2, f1
    lfs f2, 0x8(r3)
    cmplwi r6, 0x1
    lfs f29, lbl_80889268
    lfs f4, 0xc(r3)
    fmuls f31, f31, f1
    fmuls f30, f30, f2
    fadds f29, f29, f4
    fmuls f31, f31, f0
    bgt lbl_fn_8071B510_0000169C
    subi r0, r6, 0x3f
    stw r5, 0x28(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_80889270
    stw r0, 0x2c(r1)
    lfs f0, lbl_80889288
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f29, f29, f0
    b lbl_fn_8071B510_000016C4
lbl_fn_8071B510_0000169C:
    subi r0, r6, 0x40
    stw r5, 0x28(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_80889270
    stw r0, 0x2c(r1)
    lfs f0, lbl_80889288
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f29, f29, f0
lbl_fn_8071B510_000016C4:
    lfs f0, 0x34(r4)
    addi r30, r1, 0x18
    lfs f27, lbl_80889268
    li r27, 0x0
    fadds f29, f29, f0
    lfs f0, 0x10(r3)
    lfs f26, lbl_80889280
    lfs f1, 0x14(r3)
    fadds f27, f27, f0
    lfs f24, lbl_80889268
    lfs f0, 0x28(r3)
    fadds f26, f26, f1
    lfs f25, 0x18(r3)
    fadds f24, f24, f0
    lbz r28, 0x1d(r3)
    lbz r29, 0x1c(r3)
    lfs f28, lbl_80889268
lbl_fn_8071B510_00001708:
    stfs f28, 0x0(r30)
    mr r3, r31
    mr r4, r27
    bl fn_807097E0
    lfs f0, 0x0(r30)
    addi r27, r27, 0x1
    cmpwi r27, 0x3
    fadds f0, f0, f1
    stfs f0, 0x0(r30)
    addi r30, r30, 0x4
    blt lbl_fn_8071B510_00001708
    addi r30, r1, 0x8
    li r27, 0x0
lbl_fn_8071B510_0000173C:
    mr r3, r31
    mr r4, r27
    bl fn_80709820
    addi r27, r27, 0x1
    stfs f1, 0x0(r30)
    cmpwi r27, 0x4
    addi r30, r30, 0x4
    blt lbl_fn_8071B510_0000173C
    bl OSDisableInterrupts
    lwz r27, 0x4(r26)
    mr r30, r3
    cmpwi r27, 0x0
    beq lbl_fn_8071B510_0000186C
    fmr f1, f31
    mr r3, r27
    bl fn_8071EA80
    fmr f1, f30
    mr r3, r27
    bl fn_8071EB30
    fmr f1, f29
    mr r3, r27
    bl fn_8071EB90
    fmr f1, f27
    mr r3, r27
    bl fn_8071EBB0
    fmr f1, f26
    mr r3, r27
    bl fn_8071EBD0
    fmr f1, f25
    mr r3, r27
    mr r4, r29
    bl fn_8071EBF0
    mr r3, r27
    mr r4, r28
    bl fn_8071EC60
    lwz r4, 0x20(r31)
    mr r3, r27
    bl fn_8071ECA0
    lfs f1, 0x24(r31)
    mr r3, r27
    bl fn_8071ECC0
    fmr f1, f24
    mr r3, r27
    bl fn_8071ECF0
    addi r29, r1, 0x18
    li r28, 0x0
lbl_fn_8071B510_000017F4:
    lfs f1, 0x0(r29)
    mr r3, r27
    mr r4, r28
    bl fn_8071ED30
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_8071B510_000017F4
    addi r29, r1, 0x8
    li r28, 0x0
lbl_fn_8071B510_0000181C:
    lfs f1, 0x0(r29)
    mr r3, r27
    mr r4, r28
    bl fn_8071ED70
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x4
    blt lbl_fn_8071B510_0000181C
    addi r29, r31, 0x50
    li r28, 0x0
    b lbl_fn_8071B510_00001860
lbl_fn_8071B510_00001848:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_8071EDB0
    addi r29, r29, 0x18
    addi r28, r28, 0x1
lbl_fn_8071B510_00001860:
    lwz r0, 0x814(r31)
    cmpw r28, r0
    blt lbl_fn_8071B510_00001848
lbl_fn_8071B510_0000186C:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_8071B510_00001874:
    addi r11, r1, 0x50
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    psq_l f25, 0x68(r1), 0, 0
    lfd f25, 0x60(r1)
    psq_l f24, 0x58(r1), 0, 0
    lfd f24, 0x50(r1)
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8071B840(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r0, 0x102(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071B840_00001A8C
    lbz r0, 0xb58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071B840_00001A8C
    lwz r31, 0xb5c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8071B840_00001A8C
    lwz r5, 0xc(r31)
    li r4, 0x0
    cmpwi r5, 0x0
    beq lbl_fn_8071B840_00001958
    lwz r6, 0x0(r5)
    li r5, 0x0
    cmpwi r6, 0x0
    beq lbl_fn_8071B840_0000194C
    lhz r0, 0x38(r6)
    cmplwi r0, 0x1
    bne lbl_fn_8071B840_0000194C
    li r5, 0x1
lbl_fn_8071B840_0000194C:
    cmpwi r5, 0x0
    beq lbl_fn_8071B840_00001958
    li r4, 0x1
lbl_fn_8071B840_00001958:
    cmpwi r4, 0x0
    beq lbl_fn_8071B840_00001A8C
    lwz r28, 0x808(r3)
    la r29, lbl_80880550
    cmpwi r28, 0x0
    beq lbl_fn_8071B840_000019B4
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071B840_0000199C
lbl_fn_8071B840_00001988:
    cmplw r3, r29
    bne lbl_fn_8071B840_00001998
    li r0, 0x1
    b lbl_fn_8071B840_000019A8
lbl_fn_8071B840_00001998:
    lwz r3, 0x0(r3)
lbl_fn_8071B840_0000199C:
    cmpwi r3, 0x0
    bne lbl_fn_8071B840_00001988
    li r0, 0x0
lbl_fn_8071B840_000019A8:
    cmpwi r0, 0x0
    beq lbl_fn_8071B840_000019B4
    b lbl_fn_8071B840_000019B8
lbl_fn_8071B840_000019B4:
    li r28, 0x0
lbl_fn_8071B840_000019B8:
    cmpwi r28, 0x0
    bne lbl_fn_8071B840_000019C8
    li r0, 0x0
    b lbl_fn_8071B840_000019DC
lbl_fn_8071B840_000019C8:
    bl fn_805FEB00
    xori r0, r3, 0x1
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_8071B840_000019DC:
    cmpwi r0, 0x0
    beq lbl_fn_8071B840_000019F4
    li r0, 0x1
    stb r0, 0x109(r30)
    mr r3, r30
    bl fn_8071C1B0
lbl_fn_8071B840_000019F4:
    lbz r0, 0x10d(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8071B840_00001A8C
    lbz r0, 0x10a(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8071B840_00001A8C
    lbz r0, 0x109(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8071B840_00001A8C
    mr r3, r31
    bl fn_8071EFB0
    lwz r0, 0xe8(r30)
    divwu r28, r3, r0
    b lbl_fn_8071B840_00001A80
lbl_fn_8071B840_00001A2C:
    lbz r0, 0x109(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8071B840_00001A70
    lwz r0, 0x174(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8071B840_00001A70
    lwz r3, 0x124(r30)
    lwz r4, 0x148(r30)
    subi r0, r3, 0x2
    cmpw r4, r0
    blt lbl_fn_8071B840_00001A70
    li r0, 0x1
    stb r0, 0x106(r30)
    mr r3, r30
    stb r0, 0x109(r30)
    bl fn_8071C1B0
    b lbl_fn_8071B840_00001A8C
lbl_fn_8071B840_00001A70:
    mr r3, r30
    bl fn_8071BB30
    mr r3, r30
    bl fn_8071BF80
lbl_fn_8071B840_00001A80:
    lwz r0, 0x138(r30)
    cmpw r0, r28
    bne lbl_fn_8071B840_00001A2C
lbl_fn_8071B840_00001A8C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071BA20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    bl OSDisableInterrupts
    mr r31, r3
    mr r28, r22
    addi r29, r22, 0xb58
    li r27, 0x0
    b lbl_fn_8071BA20_00001B94
lbl_fn_8071BA20_00001AF0:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8071BA20_00001B88
    lwz r26, 0x4(r29)
    cmpwi r26, 0x0
    beq lbl_fn_8071BA20_00001B88
    li r25, 0x0
    b lbl_fn_8071BA20_00001B70
lbl_fn_8071BA20_00001B10:
    cmpwi r25, 0x2
    blt lbl_fn_8071BA20_00001B20
    li r30, 0x0
    b lbl_fn_8071BA20_00001B44
lbl_fn_8071BA20_00001B20:
    add r3, r28, r25
    lbz r0, 0xb68(r3)
    cmpwi r0, 0x10
    blt lbl_fn_8071BA20_00001B38
    li r30, 0x0
    b lbl_fn_8071BA20_00001B44
lbl_fn_8071BA20_00001B38:
    mulli r0, r0, 0x34
    add r3, r22, r0
    addi r30, r3, 0x818
lbl_fn_8071BA20_00001B44:
    lwz r5, 0x0(r30)
    mr r3, r26
    mr r4, r25
    mr r6, r23
    bl fn_8071EFD0
    lwz r5, 0x0(r30)
    mr r3, r26
    mr r4, r25
    mr r6, r24
    bl fn_8071F050
    addi r25, r25, 0x1
lbl_fn_8071BA20_00001B70:
    lwz r0, 0xc(r29)
    cmpw r25, r0
    blt lbl_fn_8071BA20_00001B10
    mr r3, r26
    li r4, 0x1
    bl fn_8071F0D0
lbl_fn_8071BA20_00001B88:
    addi r29, r29, 0x38
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_fn_8071BA20_00001B94:
    lwz r0, 0x80c(r22)
    cmpw r27, r0
    blt lbl_fn_8071BA20_00001AF0
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071BB30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r4, 0x13c(r3)
    mr r31, r3
    lwz r0, 0x144(r3)
    addi r4, r4, 0x1
    stw r4, 0x13c(r3)
    cmpw r4, r0
    ble lbl_fn_8071BB30_00001C40
    lbz r0, 0xc4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071BB30_00001C40
    lis r4, 0x8000
    lwz r5, 0x110(r3)
    subi r0, r4, 0x1
    lwz r4, 0x140(r3)
    cmpw r5, r0
    stw r4, 0x13c(r3)
    bge lbl_fn_8071BB30_00001C28
    addi r0, r5, 0x1
    stw r0, 0x110(r3)
lbl_fn_8071BB30_00001C28:
    lwz r5, 0x134(r31)
    mr r3, r31
    lwz r0, 0xe8(r31)
    li r4, 0x0
    mullw r5, r5, r0
    bl fn_8071BA20
lbl_fn_8071BB30_00001C40:
    lwz r3, 0x138(r31)
    lwz r0, 0x134(r31)
    addi r3, r3, 0x1
    stw r3, 0x138(r31)
    cmpw r3, r0
    blt lbl_fn_8071BB30_00001C7C
    lwz r6, 0x128(r31)
    li r4, 0x0
    lwz r0, 0xe8(r31)
    mr r3, r31
    stw r4, 0x138(r31)
    li r4, 0x0
    mullw r5, r6, r0
    stw r6, 0x134(r31)
    bl fn_8071BA20
lbl_fn_8071BB30_00001C7C:
    lwz r3, 0x134(r31)
    lwz r4, 0x138(r31)
    subi r0, r3, 0x1
    cmpw r4, r0
    bne lbl_fn_8071BB30_00001D88
    lbz r0, 0x10b(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071BB30_00001D7C
    lbz r0, 0x10c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8071BB30_00001D7C
    addi r28, r31, 0xb58
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_8071BB30_00001D70
lbl_fn_8071BB30_00001CB8:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8071BB30_00001D68
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_8071BB30_00001D68
    mr r3, r26
    bl fn_8071EA60
    cmpwi r3, 0x3
    bne lbl_fn_8071BB30_00001D68
    bl OSDisableInterrupts
    mr r30, r3
    li r25, 0x0
    b lbl_fn_8071BB30_00001D48
lbl_fn_8071BB30_00001CF0:
    cmpwi r25, 0x2
    blt lbl_fn_8071BB30_00001D00
    li r3, 0x0
    b lbl_fn_8071BB30_00001D24
lbl_fn_8071BB30_00001D00:
    add r3, r28, r25
    lbz r0, 0x10(r3)
    cmpwi r0, 0x10
    blt lbl_fn_8071BB30_00001D18
    li r3, 0x0
    b lbl_fn_8071BB30_00001D24
lbl_fn_8071BB30_00001D18:
    mulli r0, r0, 0x34
    add r3, r31, r0
    addi r3, r3, 0x818
lbl_fn_8071BB30_00001D24:
    lhz r0, 0x32(r3)
    mr r3, r26
    sth r0, 0x8(r1)
    mr r4, r25
    addi r5, r1, 0x8
    sth r29, 0xa(r1)
    sth r29, 0xc(r1)
    bl fn_8071EF30
    addi r25, r25, 0x1
lbl_fn_8071BB30_00001D48:
    lwz r0, 0xc(r28)
    cmpw r25, r0
    blt lbl_fn_8071BB30_00001CF0
    mr r3, r26
    li r4, 0x1
    bl fn_8071F1E0
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_8071BB30_00001D68:
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_fn_8071BB30_00001D70:
    lwz r0, 0x80c(r31)
    cmpw r27, r0
    blt lbl_fn_8071BB30_00001CB8
lbl_fn_8071BB30_00001D7C:
    li r0, 0x0
    stb r0, 0x10c(r31)
    stb r0, 0x10b(r31)
lbl_fn_8071BB30_00001D88:
    lwz r3, 0x144(r31)
    lwz r4, 0x13c(r31)
    subi r0, r3, 0x1
    cmpw r4, r0
    bne lbl_fn_8071BB30_00001DAC
    lwz r4, 0x138(r31)
    mr r3, r31
    addi r4, r4, 0x1
    bl fn_8071BD30
lbl_fn_8071BB30_00001DAC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071BD30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lbz r0, 0xc4(r3)
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x0
    beq lbl_fn_8071BD30_00001F08
    lwz r0, 0x134(r3)
    addi r28, r4, 0x1
    cmpw r28, r0
    blt lbl_fn_8071BD30_00001E04
    subf r28, r0, r28
lbl_fn_8071BD30_00001E04:
    bl OSDisableInterrupts
    lwz r4, 0xe8(r30)
    mr r29, r3
    lwz r5, 0xf0(r30)
    mr r3, r30
    mullw r0, r31, r4
    mullw r4, r28, r4
    add r5, r5, r0
    bl fn_8071BA20
    lwz r0, 0xc0(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8071BD30_00001EFC
    addi r28, r30, 0xb58
    li r27, 0x0
    b lbl_fn_8071BD30_00001ED8
lbl_fn_8071BD30_00001E40:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8071BD30_00001ED0
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_8071BD30_00001ED0
    mr r3, r26
    bl fn_8071EA60
    cmpwi r3, 0x3
    bne lbl_fn_8071BD30_00001ED0
    mr r3, r26
    li r4, 0x0
    bl fn_8071F1E0
    li r25, 0x0
    b lbl_fn_8071BD30_00001EC4
lbl_fn_8071BD30_00001E7C:
    cmpwi r25, 0x2
    blt lbl_fn_8071BD30_00001E8C
    li r5, 0x0
    b lbl_fn_8071BD30_00001EB0
lbl_fn_8071BD30_00001E8C:
    add r3, r28, r25
    lbz r0, 0x10(r3)
    cmpwi r0, 0x10
    blt lbl_fn_8071BD30_00001EA4
    li r5, 0x0
    b lbl_fn_8071BD30_00001EB0
lbl_fn_8071BD30_00001EA4:
    mulli r0, r0, 0x34
    add r3, r30, r0
    addi r5, r3, 0x818
lbl_fn_8071BD30_00001EB0:
    mr r3, r26
    mr r4, r25
    addi r5, r5, 0x2c
    bl fn_8071EF30
    addi r25, r25, 0x1
lbl_fn_8071BD30_00001EC4:
    lwz r0, 0xc(r28)
    cmpw r25, r0
    blt lbl_fn_8071BD30_00001E7C
lbl_fn_8071BD30_00001ED0:
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_fn_8071BD30_00001ED8:
    lwz r0, 0x80c(r30)
    cmpw r27, r0
    blt lbl_fn_8071BD30_00001E40
    lwz r3, 0x134(r30)
    subi r0, r3, 0x1
    cmpw r31, r0
    bne lbl_fn_8071BD30_00001EFC
    li r0, 0x1
    stb r0, 0x10b(r30)
lbl_fn_8071BD30_00001EFC:
    mr r3, r29
    bl OSRestoreInterrupts
    b lbl_fn_8071BD30_00001F0C
lbl_fn_8071BD30_00001F08:
    bl fn_8071BE90
lbl_fn_8071BD30_00001F0C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071BE90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r30, r3
    mr r31, r4
    bl OSDisableInterrupts
    mr r29, r3
    addi r28, r30, 0xb58
    li r27, 0x0
    b lbl_fn_8071BE90_00001FE4
lbl_fn_8071BE90_00001F58:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8071BE90_00001FDC
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_8071BE90_00001FDC
    li r25, 0x0
    b lbl_fn_8071BE90_00001FD0
lbl_fn_8071BE90_00001F78:
    cmpwi r25, 0x2
    blt lbl_fn_8071BE90_00001F88
    li r5, 0x0
    b lbl_fn_8071BE90_00001FAC
lbl_fn_8071BE90_00001F88:
    add r3, r28, r25
    lbz r0, 0x10(r3)
    cmpwi r0, 0x10
    blt lbl_fn_8071BE90_00001FA0
    li r5, 0x0
    b lbl_fn_8071BE90_00001FAC
lbl_fn_8071BE90_00001FA0:
    mulli r0, r0, 0x34
    add r3, r30, r0
    addi r5, r3, 0x818
lbl_fn_8071BE90_00001FAC:
    lwz r0, 0xe8(r30)
    mr r3, r26
    lwz r6, 0xf0(r30)
    mr r4, r25
    mullw r0, r31, r0
    lwz r5, 0x0(r5)
    add r6, r6, r0
    bl fn_8071F160
    addi r25, r25, 0x1
lbl_fn_8071BE90_00001FD0:
    lwz r0, 0xc(r28)
    cmpw r25, r0
    blt lbl_fn_8071BE90_00001F78
lbl_fn_8071BE90_00001FDC:
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_fn_8071BE90_00001FE4:
    lwz r0, 0x80c(r30)
    cmpw r27, r0
    blt lbl_fn_8071BE90_00001F58
    mr r3, r29
    bl OSRestoreInterrupts
    li r0, 0x1
    stb r0, 0x10d(r30)
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
