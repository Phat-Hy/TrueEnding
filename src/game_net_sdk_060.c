#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCreateThread(void);
extern void OSDisableInterrupts(void);
extern void OSInitThreadQueue(void);
extern void OSJoinThread(void);
extern void OSRestoreInterrupts(void);
extern void OSResumeThread(void);
extern void OSSleepThread(void);
extern void OSWakeupThread(void);
extern void __div2i(void);
extern void __register_global_object(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80705450(void);
extern void fn_80706E80(void);
extern void fn_80707170(void);
extern void fn_80707300(void);
extern void fn_80707530(void);
extern void fn_807080C0(void);
extern void fn_80708810(void);
extern void fn_80709870(void);
extern void fn_80709950(void);
extern void fn_8070A5E0(void);
extern void fn_8070A620(void);
extern void fn_8070A9F0(void);
extern void fn_8070AC10(void);
extern void fn_8070F0D0(void);
extern void fn_8070F130(void);
extern void fn_80719AA0(void);
extern void fn_80719C50(void);
extern void fn_80719D50(void);
extern void fn_80719F70(void);
extern void fn_8071A000(void);
extern void fn_8071AAF0(void);
extern void fn_8071ADF0(void);
extern void fn_8071B350(void);
extern void fn_8071B840(void);
extern void fn_8071E680(void);
extern void fn_8071EA40(void);
extern void fn_8071F270(void);
extern void fn_8071F360(void);
extern void fn_80721000(void);
extern void fn_80725170(void);
extern void fn_80725200(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);

/* External data declarations */
extern u8 lbl_807C63C8[];
extern u8 lbl_807C63F8[];
extern u8 lbl_807C6454[];
extern u8 lbl_8087D5D8[];
extern u8 lbl_8087D5E4[];

/* Small data declarations */
extern u32 lbl_808804B0;
extern u32 lbl_80880500;
extern u32 lbl_80880508;
extern u32 lbl_80889290;
extern u32 lbl_80889294;
extern u32 lbl_80889298;
extern u32 lbl_808892A0;
extern u32 lbl_808892A4;

/* Function declarations */
void fn_8071BF80(void);
void fn_8071C1B0(void);
void fn_8071C270(void);
void fn_8071C380(void);
void fn_8071C420(void);
void fn_8071C4B0(void);
void fn_8071C4D0(void);
void fn_8071C520(void);
void fn_8071C530(void);
void fn_8071C5E0(void);
void fn_8071C630(void);
void fn_8071C700(void);
void fn_8071C790(void);
void fn_8071C840(void);
void fn_8071C850(void);
void fn_8071C860(void);
void fn_8071C870(void);
void fn_8071C880(void);
void fn_8071C890(void);
void fn_8071C8A0(void);
void fn_8071C8B0(void);
void fn_8071C8C0(void);
void fn_8071C8D0(void);
void fn_8071C8E0(void);
void fn_8071C9A0(void);
void fn_8071CAE0(void);
void fn_8071CB60(void);
void fn_8071CBC0(void);
void fn_8071CC40(void);
void fn_8071CD20(void);
void fn_8071CE70(void);
void fn_8071CF10(void);
void fn_8071CF70(void);
void fn_8071D060(void);
void fn_8071D080(void);
void fn_8071D090(void);
void fn_8071D0A0(void);
void fn_8071D0B0(void);
void fn_8071D0C0(void);
void fn_8071D0D0(void);
void fn_8071D0E0(void);
void fn_8071D1E0(void);
void fn_8071D220(void);
void fn_8071D260(void);
void fn_8071D300(void);
void fn_8071D370(void);
void fn_8071D3D0(void);
void fn_8071D3F0(void);
void fn_8071D470(void);
void fn_8071D5D0(void);
void fn_8071D6E0(void);
void fn_8071D760(void);
void fn_8071D860(void);
void fn_8071D950(void);
void fn_8071D9C0(void);
void fn_8071DA10(void);
void fn_8071DA30(void);
void fn_8071DAB0(void);
void fn_8071DB80(void);
void fn_8071DBE0(void);
void fn_8071DC40(void);
void fn_8071DD10(void);
void fn_8071DDC0(void);
void fn_8071DE50(void);
void fn_8071DEF0(void);

asm void fn_8071BF80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lbz r0, 0x10e(r3)
    mr r29, r3
    lwz r4, 0x148(r3)
    cmpwi r0, 0x0
    addi r0, r4, 0x1
    stw r0, 0x148(r3)
    bne lbl_fn_8071BF80_00000214
    lwz r4, 0xe0(r3)
    lwz r8, 0x130(r3)
    subi r0, r4, 0x1
    cmpw r8, r0
    bge lbl_fn_8071BF80_0000004C
    lwz r31, 0xe4(r3)
    b lbl_fn_8071BF80_00000050
lbl_fn_8071BF80_0000004C:
    lwz r31, 0xf4(r3)
lbl_fn_8071BF80_00000050:
    lwz r4, 0xe4(r3)
    li r30, 0x0
    lwz r0, 0xc8(r3)
    lhz r7, 0xd0(r3)
    mullw r4, r4, r0
    lwz r0, 0x12c(r3)
    lwz r6, 0x810(r3)
    cmpwi r0, 0x0
    lwz r5, 0xdc(r3)
    add r0, r7, r4
    mullw r4, r31, r6
    mullw r0, r8, r0
    add r27, r7, r4
    add r26, r5, r0
    bne lbl_fn_8071BF80_0000009C
    lwz r0, 0xc0(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8071BF80_0000009C
    li r30, 0x1
lbl_fn_8071BF80_0000009C:
    addi r3, r3, 0x180
    bl fn_8070F0D0
    cmpwi r3, 0x0
    bne lbl_fn_8071BF80_000000B4
    li r28, 0x0
    b lbl_fn_8071BF80_00000100
lbl_fn_8071BF80_000000B4:
    mr r28, r3
    beq lbl_fn_8071BF80_00000100
    li r5, 0x0
    stw r5, 0x4(r3)
    lis r4, lbl_807C63C8@ha
    li r0, -0x1
    stw r5, 0x8(r3)
    addi r4, r4, lbl_807C63C8@l
    stb r5, 0xc(r3)
    stw r4, 0x0(r3)
    stw r5, 0x10(r3)
    stw r5, 0x14(r3)
    stw r5, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    stb r5, 0x28(r3)
    stw r5, 0x2c(r3)
    stw r5, 0x30(r3)
lbl_fn_8071BF80_00000100:
    stw r29, 0x10(r28)
    lwz r0, 0x808(r29)
    stw r0, 0x14(r28)
    stw r27, 0x18(r28)
    stw r26, 0x1c(r28)
    stw r31, 0x20(r28)
    lwz r0, 0x12c(r29)
    stw r0, 0x24(r28)
    stb r30, 0x28(r28)
    bl OSDisableInterrupts
    addi r0, r29, 0x178
    stw r0, 0x8(r1)
    mr r30, r3
    addi r3, r29, 0x174
    addi r4, r1, 0x8
    addi r5, r28, 0x2c
    bl fn_807252A0
    lbz r0, 0x102(r29)
    li r31, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8071BF80_00000158
    li r31, 0x2
lbl_fn_8071BF80_00000158:
    bl fn_8071D260
    mr r4, r28
    mr r5, r31
    bl fn_8071D3F0
    lwz r3, 0x130(r29)
    lwz r0, 0x144(r29)
    addi r3, r3, 0x1
    stw r3, 0x130(r29)
    cmpw r3, r0
    ble lbl_fn_8071BF80_000001AC
    lbz r0, 0xc4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8071BF80_00000198
    lwz r0, 0x140(r29)
    stw r0, 0x130(r29)
    b lbl_fn_8071BF80_000001AC
lbl_fn_8071BF80_00000198:
    li r0, 0x1
    stb r0, 0x10e(r29)
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_8071BF80_00000214
lbl_fn_8071BF80_000001AC:
    lwz r3, 0x12c(r29)
    lwz r0, 0x128(r29)
    addi r3, r3, 0x1
    stw r3, 0x12c(r29)
    cmpw r3, r0
    blt lbl_fn_8071BF80_0000020C
    lwz r5, 0x144(r29)
    li r4, 0x0
    lwz r3, 0x130(r29)
    lwz r6, 0x124(r29)
    lwz r0, 0x140(r29)
    subf r3, r3, r5
    stw r4, 0x12c(r29)
    addi r4, r3, 0x1
    addi r7, r6, 0x1
    subf r3, r0, r5
    subf r4, r4, r7
    addi r3, r3, 0x1
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_8071BF80_00000208
    mr r6, r7
lbl_fn_8071BF80_00000208:
    stw r6, 0x128(r29)
lbl_fn_8071BF80_0000020C:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_8071BF80_00000214:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071C1B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl OSDisableInterrupts
    lbz r0, 0x107(r27)
    mr r31, r3
    li r29, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8071C1B0_00000264
    li r29, 0x1
lbl_fn_8071C1B0_00000264:
    lbz r0, 0x109(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8071C1B0_00000274
    li r29, 0x1
lbl_fn_8071C1B0_00000274:
    lbz r0, 0x108(r27)
    cmplw r29, r0
    beq lbl_fn_8071C1B0_000002C4
    mr r30, r27
    li r28, 0x0
    b lbl_fn_8071C1B0_000002B4
lbl_fn_8071C1B0_0000028C:
    lbz r0, 0xb58(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8071C1B0_000002AC
    lwz r3, 0xb5c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8071C1B0_000002AC
    mr r4, r29
    bl fn_8071EA40
lbl_fn_8071C1B0_000002AC:
    addi r30, r30, 0x38
    addi r28, r28, 0x1
lbl_fn_8071C1B0_000002B4:
    lwz r0, 0x80c(r27)
    cmpw r28, r0
    blt lbl_fn_8071C1B0_0000028C
    stb r29, 0x108(r27)
lbl_fn_8071C1B0_000002C4:
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071C270(void)
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
    stw r28, 0x10(r1)
    mr r28, r6
    lwz r0, 0xe8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8071C270_00000330
    li r3, 0x0
    b lbl_fn_8071C270_000003DC
lbl_fn_8071C270_00000330:
    lwz r0, 0x14c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8071C270_00000344
    lwz r4, 0x150(r3)
    b lbl_fn_8071C270_00000368
lbl_fn_8071C270_00000344:
    cmpwi r0, 0x1
    bne lbl_fn_8071C270_00000368
    lwz r7, 0x150(r3)
    li r6, 0x3e8
    lwz r0, 0xcc(r3)
    li r5, 0x0
    mullw r4, r7, r0
    mulhw r3, r7, r0
    bl __div2i
lbl_fn_8071C270_00000368:
    li r0, 0x0
    stw r0, 0x0(r28)
    lwz r3, 0xd8(r29)
    cmplw r4, r3
    blt lbl_fn_8071C270_000003B8
    lbz r0, 0xc4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8071C270_000003B0
    lwz r5, 0xd4(r29)
    subf r4, r3, r4
    subf r0, r5, r3
    divw r3, r4, r0
    mullw r0, r3, r0
    addi r3, r3, 0x1
    stw r3, 0x0(r28)
    subf r0, r0, r4
    add r4, r5, r0
    b lbl_fn_8071C270_000003B8
lbl_fn_8071C270_000003B0:
    li r3, 0x0
    b lbl_fn_8071C270_000003DC
lbl_fn_8071C270_000003B8:
    lwz r0, 0xe8(r29)
    li r3, 0x1
    divw r0, r4, r0
    stw r0, 0x0(r30)
    lwz r5, 0xe8(r29)
    divwu r0, r4, r5
    mullw r0, r0, r5
    subf r0, r0, r4
    stw r0, 0x0(r31)
lbl_fn_8071C270_000003DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071C380(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    cmplwi r29, 0x1
    mr r31, r3
    ble lbl_fn_8071C380_00000448
    subi r0, r29, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8071C380_0000045C
    b lbl_fn_8071C380_00000468
lbl_fn_8071C380_00000448:
    mr r3, r28
    bl fn_8071E680
    li r0, 0x0
    stw r0, 0x4(r30)
    b lbl_fn_8071C380_00000470
lbl_fn_8071C380_0000045C:
    li r0, 0x0
    stw r0, 0x4(r30)
    b lbl_fn_8071C380_00000470
lbl_fn_8071C380_00000468:
    bl OSRestoreInterrupts
    b lbl_fn_8071C380_00000478
lbl_fn_8071C380_00000470:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_8071C380_00000478:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071C420(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r4
    stw r30, 0x10(r1)
    mr r30, r3
    bl OSDisableInterrupts
    mr r4, r30
    li r5, 0x0
    b lbl_fn_8071C420_000004F0
    nop
lbl_fn_8071C420_000004D8:
    clrlwi. r0, r31, 31
    beq lbl_fn_8071C420_000004E4
    stfs f31, 0xb88(r4)
lbl_fn_8071C420_000004E4:
    srwi r31, r31, 1
    addi r4, r4, 0x38
    addi r5, r5, 0x1
lbl_fn_8071C420_000004F0:
    lwz r0, 0x80c(r30)
    cmpw r5, r0
    bge lbl_fn_8071C420_00000504
    cmpwi r31, 0x0
    bne lbl_fn_8071C420_000004D8
lbl_fn_8071C420_00000504:
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071C4B0(void)
{
    nofralloc
    cmpwi r4, 0x7
    ble lbl_fn_8071C4B0_00000540
    li r3, 0x0
    blr
lbl_fn_8071C4B0_00000540:
    mulli r0, r4, 0x38
    add r3, r3, r0
    addi r3, r3, 0xb58
    blr
}

asm void fn_8071C4D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x10(r3)
    lwz r4, 0x14(r31)
    lwz r5, 0x18(r31)
    lwz r6, 0x1c(r31)
    bl fn_8071AAF0
    cmpwi r3, 0x0
    bne lbl_fn_8071C4D0_0000058C
    lwz r3, 0x10(r31)
    li r0, 0x1
    stb r0, 0x104(r3)
lbl_fn_8071C4D0_0000058C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071C520(void)
{
    nofralloc
    blr
}

asm void fn_8071C530(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x10(r3)
    stb r0, 0x105(r4)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8071C530_00000644
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8071C530_00000644
    lwz r3, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8071C530_00000630
    lwz r3, 0x14(r31)
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071C530_00000644
lbl_fn_8071C530_00000630:
    lwz r3, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
lbl_fn_8071C530_00000644:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071C5E0(void)
{
    nofralloc
    lis r4, lbl_807C63C8@ha
    li r5, 0x0
    addi r4, r4, lbl_807C63C8@l
    li r0, -0x1
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stb r5, 0xc(r3)
    stw r4, 0x0(r3)
    stw r5, 0x10(r3)
    stw r5, 0x14(r3)
    stw r5, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    stb r5, 0x28(r3)
    stw r5, 0x2c(r3)
    stw r5, 0x30(r3)
    blr
}

asm void fn_8071C630(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, 0x10(r3)
    lwz r4, 0x14(r29)
    lwz r5, 0x1c(r29)
    lwz r6, 0x18(r29)
    lwz r7, 0x20(r29)
    lwz r8, 0x24(r29)
    lbz r9, 0x28(r29)
    bl fn_8071ADF0
    cmpwi r3, 0x0
    bne lbl_fn_8071C630_00000700
    lwz r3, 0x10(r29)
    li r0, 0x1
    stb r0, 0x104(r3)
lbl_fn_8071C630_00000700:
    bl OSDisableInterrupts
    lwz r5, 0x10(r29)
    mr r31, r3
    addi r4, r29, 0x2c
    addi r3, r5, 0x174
    bl fn_807252D0
    lwz r3, 0x10(r29)
    cmpwi r29, 0x0
    addi r30, r3, 0x180
    beq lbl_fn_8071C630_0000074C
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    mr r3, r30
    mr r4, r29
    bl fn_8070F130
lbl_fn_8071C630_0000074C:
    lwz r5, 0x10(r29)
    mr r3, r31
    lwz r4, 0x148(r5)
    subi r0, r4, 0x1
    stw r0, 0x148(r5)
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071C700(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r5, 0x10(r29)
    mr r31, r3
    addi r4, r29, 0x2c
    addi r3, r5, 0x174
    bl fn_807252D0
    lwz r3, 0x10(r29)
    cmpwi r29, 0x0
    addi r30, r3, 0x180
    beq lbl_fn_8071C700_000007E8
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    mr r3, r30
    mr r4, r29
    bl fn_8070F130
lbl_fn_8071C700_000007E8:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071C790(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x10(r3)
    stb r0, 0x105(r4)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8071C790_000008A4
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8071C790_000008A4
    lwz r3, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8071C790_00000890
    lwz r3, 0x14(r31)
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071C790_000008A4
lbl_fn_8071C790_00000890:
    lwz r3, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
lbl_fn_8071C790_000008A4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071C840(void)
{
    nofralloc
    b fn_8071B350
}

asm void fn_8071C850(void)
{
    nofralloc
    b fn_8071B840
}

asm void fn_8071C860(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

asm void fn_8071C870(void)
{
    nofralloc
    lbz r3, 0x107(r3)
    blr
}

asm void fn_8071C880(void)
{
    nofralloc
    lbz r3, 0x102(r3)
    blr
}

asm void fn_8071C890(void)
{
    nofralloc
    lbz r3, 0x101(r3)
    blr
}

asm void fn_8071C8A0(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_8071C860
}

asm void fn_8071C8B0(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_8071C850
}

asm void fn_8071C8C0(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_8071C840
}

asm void fn_8071C8D0(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_80719C50
}

asm void fn_8071C8E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r4, r5
    mr r5, r6
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80709870
    lis r4, lbl_807C63F8@ha
    addi r3, r30, 0x110
    addi r4, r4, lbl_807C63F8@l
    stw r4, 0x0(r30)
    bl fn_80719AA0
    addi r5, r30, 0xe40
    addi r3, r30, 0xeb0
    lfs f0, lbl_80889290
    cmplw r5, r3
    li r4, 0x0
    stw r4, 0xe28(r30)
    stw r31, 0xe2c(r30)
    stfs f0, 0xe30(r30)
    stfs f0, 0xe34(r30)
    stw r4, 0xe38(r30)
    stw r4, 0xe3c(r30)
    bge lbl_fn_8071C8E0_000009F8
    addi r0, r3, 0xf
    subf r0, r5, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_8071C8E0_000009F8
lbl_fn_8071C8E0_000009E0:
    stfs f0, 0x0(r5)
    stfs f0, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    addi r5, r5, 0x10
    bdnz lbl_fn_8071C8E0_000009E0
lbl_fn_8071C8E0_000009F8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071C9A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80709950
    li r0, 0x4
    lfs f6, lbl_80889290
    li r6, 0x0
    lfd f5, lbl_80889298
    li r5, 0x0
    lfs f0, lbl_80889294
    lis r4, 0x4330
    li r3, 0x1
    mtctr r0
    nop
lbl_fn_8071C9A0_00000A60:
    stfs f6, 0xe30(r31)
    cmpw r5, r5
    stfs f6, 0xe34(r31)
    stw r5, 0xe38(r31)
    stw r5, 0xe3c(r31)
    blt lbl_fn_8071C9A0_00000A80
    lfs f1, 0xe34(r31)
    b lbl_fn_8071C9A0_00000ABC
lbl_fn_8071C9A0_00000A80:
    xoris r0, r5, 0x8000
    stw r0, 0xc(r1)
    lfs f1, 0xe34(r31)
    stw r4, 0x8(r1)
    lfs f3, 0xe30(r31)
    lfd f4, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f2, f1, f3
    fsubs f4, f4, f5
    stw r4, 0x10(r1)
    lfd f1, 0x10(r1)
    fmuls f2, f4, f2
    fsubs f1, f1, f5
    fdivs f1, f2, f1
    fadds f1, f3, f1
lbl_fn_8071C9A0_00000ABC:
    stfs f1, 0xe30(r31)
    cmpw r5, r5
    stfs f0, 0xe34(r31)
    stw r3, 0xe38(r31)
    stw r5, 0xe3c(r31)
    stfs f6, 0xe40(r31)
    stfs f6, 0xe44(r31)
    stw r5, 0xe48(r31)
    stw r5, 0xe4c(r31)
    blt lbl_fn_8071C9A0_00000AEC
    lfs f1, 0xe44(r31)
    b lbl_fn_8071C9A0_00000B28
lbl_fn_8071C9A0_00000AEC:
    xoris r0, r5, 0x8000
    stw r0, 0xc(r1)
    lfs f1, 0xe44(r31)
    stw r4, 0x8(r1)
    lfs f3, 0xe40(r31)
    lfd f4, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f2, f1, f3
    fsubs f4, f4, f5
    stw r4, 0x10(r1)
    lfd f1, 0x10(r1)
    fmuls f2, f4, f2
    fsubs f1, f1, f5
    fdivs f1, f2, f1
    fadds f1, f3, f1
lbl_fn_8071C9A0_00000B28:
    stfs f1, 0xe40(r31)
    addi r6, r6, 0x1
    stfs f0, 0xe44(r31)
    stw r3, 0xe48(r31)
    stw r5, 0xe4c(r31)
    addi r31, r31, 0x20
    bdnz lbl_fn_8071C9A0_00000A60
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071CAE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r28
    bl fn_8070AC10
    mr r7, r3
    mr r4, r29
    mr r5, r30
    mr r6, r31
    addi r3, r28, 0x110
    bl fn_80719D50
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071CB60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r7, r4
    mr r4, r6
    stw r0, 0x14(r1)
    mr r0, r5
    mr r5, r7
    stw r31, 0xc(r1)
    mr r31, r3
    mr r6, r0
    addi r3, r3, 0x110
    bl fn_8071A000
    cmpwi r3, 0x0
    bne lbl_fn_8071CB60_00000C28
    addi r3, r31, 0x110
    bl fn_80719F70
    li r3, 0x0
    b lbl_fn_8071CB60_00000C2C
lbl_fn_8071CB60_00000C28:
    li r3, 0x1
lbl_fn_8071CB60_00000C2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071CBC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8070A5E0
    mr r31, r29
    li r30, 0x0
lbl_fn_8071CBC0_00000C68:
    mr r4, r30
    addi r3, r29, 0x110
    bl fn_8071C4B0
    cmpwi r3, 0x0
    beq lbl_fn_8071CBC0_00000C94
    lwz r3, 0xe3c(r31)
    lwz r0, 0xe38(r31)
    cmpw r3, r0
    bge lbl_fn_8071CBC0_00000C94
    addi r0, r3, 0x1
    stw r0, 0xe3c(r31)
lbl_fn_8071CBC0_00000C94:
    addi r30, r30, 0x1
    addi r31, r31, 0x10
    cmpwi r30, 0x8
    blt lbl_fn_8071CBC0_00000C68
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071CC40(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    mr r27, r3
    bl fn_8070A620
    lfd f31, lbl_80889298
    mr r29, r27
    li r28, 0x0
    li r30, 0x1
    lis r31, 0x4330
lbl_fn_8071CC40_00000CF8:
    mr r4, r28
    addi r3, r27, 0x110
    bl fn_8071C4B0
    cmpwi r3, 0x0
    beq lbl_fn_8071CC40_00000D70
    lwz r5, 0xe38(r29)
    addi r3, r27, 0x110
    lwz r0, 0xe3c(r29)
    slw r4, r30, r28
    cmpw r0, r5
    blt lbl_fn_8071CC40_00000D2C
    lfs f1, 0xe34(r29)
    b lbl_fn_8071CC40_00000D6C
lbl_fn_8071CC40_00000D2C:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r5, 0x8000
    lfs f0, 0xe34(r29)
    stw r31, 0x8(r1)
    lfs f2, 0xe30(r29)
    lfd f3, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    fsubs f3, f3, f31
    stw r31, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_8071CC40_00000D6C:
    bl fn_8071C420
lbl_fn_8071CC40_00000D70:
    addi r28, r28, 0x1
    addi r29, r29, 0x10
    cmpwi r28, 0x8
    blt lbl_fn_8071CC40_00000CF8
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8071CD20(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x40
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    bl _savegpr_24
    fmr f29, f1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    bl OSDisableInterrupts
    lfs f30, lbl_80889290
    mr r31, r3
    lfd f31, lbl_80889298
    mr r28, r24
    li r27, 0x0
    lis r29, 0x4330
    li r30, 0x0
    b lbl_fn_8071CD20_00000E9C
lbl_fn_8071CD20_00000E00:
    mr r4, r27
    addi r3, r24, 0x110
    bl fn_8071C4B0
    cmpwi r3, 0x0
    beq lbl_fn_8071CD20_00000E90
    clrlwi. r0, r25, 31
    beq lbl_fn_8071CD20_00000E90
    fcmpo cr0, f29, f30
    bge lbl_fn_8071CD20_00000E28
    fmr f29, f30
lbl_fn_8071CD20_00000E28:
    lwz r3, 0xe38(r28)
    lwz r0, 0xe3c(r28)
    cmpw r0, r3
    blt lbl_fn_8071CD20_00000E40
    lfs f0, 0xe34(r28)
    b lbl_fn_8071CD20_00000E80
lbl_fn_8071CD20_00000E40:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r3, 0x8000
    lfs f0, 0xe34(r28)
    stw r29, 0x8(r1)
    lfs f2, 0xe30(r28)
    lfd f3, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    fsubs f3, f3, f31
    stw r29, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_fn_8071CD20_00000E80:
    stfs f0, 0xe30(r28)
    stfs f29, 0xe34(r28)
    stw r26, 0xe38(r28)
    stw r30, 0xe3c(r28)
lbl_fn_8071CD20_00000E90:
    srwi r25, r25, 1
    addi r28, r28, 0x10
    addi r27, r27, 0x1
lbl_fn_8071CD20_00000E9C:
    cmpwi r27, 0x8
    bge lbl_fn_8071CD20_00000EAC
    cmpwi r25, 0x0
    bne lbl_fn_8071CD20_00000E00
lbl_fn_8071CD20_00000EAC:
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    bl _restgpr_24
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8071CE70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8070A9F0
    lwz r30, 0xe2c(r29)
    addi r31, r30, 0x10
    mr r3, r31
    bl fn_805F3130
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8071CE70_00000F38
    mr r3, r31
    bl fn_805F3210
    b lbl_fn_8071CE70_00000F70
lbl_fn_8071CE70_00000F38:
    addi r3, r30, 0x4
    addi r4, r29, 0xf0
    bl fn_807252D0
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r30
    mr r4, r29
    bl fn_8070F130
    mr r3, r31
    bl fn_805F3210
lbl_fn_8071CE70_00000F70:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071CF10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8071CF10_00000FD0
    li r4, -0x1
    addi r3, r3, 0x110
    bl fn_80719C50
    cmpwi r31, 0x0
    ble lbl_fn_8071CF10_00000FD0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8071CF10_00000FD0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071CF70(void)
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
    lbz r4, 0x98(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_fn_8071CF70_0000102C
    li r29, 0x7f
    b lbl_fn_8071CF70_00001034
lbl_fn_8071CF70_0000102C:
    srawi r0, r4, 31
    andc r29, r4, r0
lbl_fn_8071CF70_00001034:
    lwz r30, 0xe2c(r3)
    addi r31, r30, 0x10
    mr r3, r31
    bl fn_805F3130
    addi r28, r28, 0xf0
    addi r3, r30, 0x4
    mr r4, r28
    bl fn_807252D0
    lwz r3, 0x8(r30)
    addi r0, r30, 0x8
    b lbl_fn_8071CF70_00001090
lbl_fn_8071CF70_00001060:
    lbz r5, -0x58(r3)
    lwz r4, -0xa0(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_fn_8071CF70_0000107C
    li r4, 0x7f
    b lbl_fn_8071CF70_00001084
lbl_fn_8071CF70_0000107C:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_fn_8071CF70_00001084:
    cmpw r29, r4
    blt lbl_fn_8071CF70_00001098
    lwz r3, 0x0(r3)
lbl_fn_8071CF70_00001090:
    cmplw r3, r0
    bne lbl_fn_8071CF70_00001060
lbl_fn_8071CF70_00001098:
    stw r3, 0x8(r1)
    mr r5, r28
    addi r3, r30, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r31
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071D060(void)
{
    nofralloc
    lwz r3, 0xe28(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8071D080(void)
{
    nofralloc
    lwz r3, 0xe28(r3)
    b fn_8071D1E0
}

asm void fn_8071D090(void)
{
    nofralloc
    addi r3, r3, 0x110
    blr
}

asm void fn_8071D0A0(void)
{
    nofralloc
    addi r3, r3, 0x110
    blr
}

asm void fn_8071D0B0(void)
{
    nofralloc
    lbz r3, 0x213(r3)
    blr
}

asm void fn_8071D0C0(void)
{
    nofralloc
    la r3, lbl_80880500
    blr
}

asm void fn_8071D0D0(void)
{
    nofralloc
    la r0, lbl_808804B0
    stw r0, lbl_80880500
    blr
}

asm void fn_8071D0E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r0, 0x0(r3)
    bne lbl_fn_8071D0E0_00001190
    b lbl_fn_8071D0E0_00001238
lbl_fn_8071D0E0_00001190:
    lwz r30, 0x0(r4)
    cmpwi r30, 0x0
    bne lbl_fn_8071D0E0_000011A0
    b lbl_fn_8071D0E0_00001238
lbl_fn_8071D0E0_000011A0:
    la r31, lbl_80880500
    beq lbl_fn_8071D0E0_000011EC
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071D0E0_000011D4
lbl_fn_8071D0E0_000011C0:
    cmplw r3, r31
    bne lbl_fn_8071D0E0_000011D0
    li r0, 0x1
    b lbl_fn_8071D0E0_000011E0
lbl_fn_8071D0E0_000011D0:
    lwz r3, 0x0(r3)
lbl_fn_8071D0E0_000011D4:
    cmpwi r3, 0x0
    bne lbl_fn_8071D0E0_000011C0
    li r0, 0x0
lbl_fn_8071D0E0_000011E0:
    cmpwi r0, 0x0
    beq lbl_fn_8071D0E0_000011EC
    b lbl_fn_8071D0E0_000011F0
lbl_fn_8071D0E0_000011EC:
    li r30, 0x0
lbl_fn_8071D0E0_000011F0:
    cmpwi r30, 0x0
    beq lbl_fn_8071D0E0_00001234
    stw r30, 0x0(r29)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8071D0E0_0000122C
    lwz r3, 0x0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8071D0E0_0000122C:
    lwz r3, 0x0(r29)
    stw r29, 0xe28(r3)
lbl_fn_8071D0E0_00001234:
    mr r3, r29
lbl_fn_8071D0E0_00001238:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071D1E0(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8071D1E0_00001280
    lwz r0, 0xe28(r4)
    cmplw r0, r3
    bne lbl_fn_8071D1E0_00001280
    li r0, 0x0
    stw r0, 0xe28(r4)
lbl_fn_8071D1E0_00001280:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_8071D220(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8071D220_000012C8
    cmpwi r4, 0x0
    ble lbl_fn_8071D220_000012C8
    bl dtor_80084684
lbl_fn_8071D220_000012C8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071D260(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, lbl_80880508
    extsb. r0, r0
    bne lbl_fn_8071D260_00001360
    lis r31, lbl_8087D5E4@ha
    lis r4, fn_8071D3D0@ha
    addi r31, r31, lbl_8087D5E4@l
    lis r5, fn_8071D370@ha
    mr r3, r31
    addi r4, r4, fn_8071D3D0@l
    addi r5, r5, fn_8071D370@l
    li r6, 0xc
    li r7, 0x3
    bl fn_806958E0
    li r0, 0x0
    stw r0, 0x24(r31)
    addi r3, r31, 0x2c
    stb r0, 0x28(r31)
    bl OSInitThreadQueue
    addi r3, r31, 0x34
    bl OSInitThreadQueue
    lis r4, fn_8071D300@ha
    lis r5, lbl_8087D5D8@ha
    mr r3, r31
    addi r4, r4, fn_8071D300@l
    addi r5, r5, lbl_8087D5D8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_80880508
lbl_fn_8071D260_00001360:
    lwz r31, 0xc(r1)
    lis r3, lbl_8087D5E4@ha
    lwz r0, 0x14(r1)
    addi r3, r3, lbl_8087D5E4@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071D300(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8071D300_000013C8
    lis r4, fn_8071D370@ha
    li r5, 0xc
    addi r4, r4, fn_8071D370@l
    li r6, 0x3
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_8071D300_000013C8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8071D300_000013C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071D370(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8071D370_0000142C
    li r4, 0x0
    bl fn_80725170
    cmpwi r31, 0x0
    ble lbl_fn_8071D370_0000142C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8071D370_0000142C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071D3D0(void)
{
    nofralloc
    addi r4, r3, 0x4
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

asm void fn_8071D3F0(void)
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
    bl OSDisableInterrupts
    mulli r0, r31, 0xc
    li r4, 0x1
    stb r4, 0xc(r30)
    mr r31, r3
    addi r4, r1, 0x8
    add r3, r29, r0
    addi r0, r3, 0x4
    stw r0, 0x8(r1)
    addi r5, r30, 0x4
    bl fn_807252A0
    addi r3, r29, 0x2c
    bl OSWakeupThread
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071D470(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, 0x18(r28)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_8071D470_00001538
    bl OSRestoreInterrupts
    li r29, 0x0
    b lbl_fn_8071D470_00001558
lbl_fn_8071D470_00001538:
    lwz r5, 0x1c(r28)
    addi r3, r28, 0x18
    stw r5, 0x10(r1)
    addi r4, r1, 0x10
    subi r29, r5, 0x4
    bl fn_80725200
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_8071D470_00001558:
    cmpwi r29, 0x0
    beq lbl_fn_8071D470_00001570
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r29
    b lbl_fn_8071D470_0000162C
lbl_fn_8071D470_00001570:
    bl OSDisableInterrupts
    lwz r0, 0xc(r28)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_8071D470_00001590
    bl OSRestoreInterrupts
    li r29, 0x0
    b lbl_fn_8071D470_000015B0
lbl_fn_8071D470_00001590:
    lwz r5, 0x10(r28)
    addi r3, r28, 0xc
    stw r5, 0xc(r1)
    addi r4, r1, 0xc
    subi r29, r5, 0x4
    bl fn_80725200
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_8071D470_000015B0:
    cmpwi r29, 0x0
    beq lbl_fn_8071D470_000015C8
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r29
    b lbl_fn_8071D470_0000162C
lbl_fn_8071D470_000015C8:
    bl OSDisableInterrupts
    lwz r0, 0x0(r28)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_8071D470_000015E8
    bl OSRestoreInterrupts
    li r29, 0x0
    b lbl_fn_8071D470_00001608
lbl_fn_8071D470_000015E8:
    lwz r5, 0x4(r28)
    mr r3, r28
    stw r5, 0x8(r1)
    addi r4, r1, 0x8
    subi r29, r5, 0x4
    bl fn_80725200
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_8071D470_00001608:
    cmpwi r29, 0x0
    beq lbl_fn_8071D470_00001620
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r29
    b lbl_fn_8071D470_0000162C
lbl_fn_8071D470_00001620:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_fn_8071D470_0000162C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071D5D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8071D5D0_00001690
    bl OSRestoreInterrupts
    li r30, 0x0
    b lbl_fn_8071D5D0_0000169C
lbl_fn_8071D5D0_00001690:
    lwz r4, 0x1c(r29)
    subi r30, r4, 0x4
    bl OSRestoreInterrupts
lbl_fn_8071D5D0_0000169C:
    cmpwi r30, 0x0
    beq lbl_fn_8071D5D0_000016B4
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    b lbl_fn_8071D5D0_00001740
lbl_fn_8071D5D0_000016B4:
    bl OSDisableInterrupts
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8071D5D0_000016D0
    bl OSRestoreInterrupts
    li r30, 0x0
    b lbl_fn_8071D5D0_000016DC
lbl_fn_8071D5D0_000016D0:
    lwz r4, 0x10(r29)
    subi r30, r4, 0x4
    bl OSRestoreInterrupts
lbl_fn_8071D5D0_000016DC:
    cmpwi r30, 0x0
    beq lbl_fn_8071D5D0_000016F4
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    b lbl_fn_8071D5D0_00001740
lbl_fn_8071D5D0_000016F4:
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8071D5D0_00001710
    bl OSRestoreInterrupts
    li r30, 0x0
    b lbl_fn_8071D5D0_0000171C
lbl_fn_8071D5D0_00001710:
    lwz r4, 0x4(r29)
    subi r30, r4, 0x4
    bl OSRestoreInterrupts
lbl_fn_8071D5D0_0000171C:
    cmpwi r30, 0x0
    beq lbl_fn_8071D5D0_00001734
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    b lbl_fn_8071D5D0_00001740
lbl_fn_8071D5D0_00001734:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_fn_8071D5D0_00001740:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071D6E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8071D470
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8071D6E0_00001794
    li r3, 0x0
    b lbl_fn_8071D6E0_000017C0
lbl_fn_8071D6E0_00001794:
    stw r3, 0x24(r29)
    li r31, 0x0
    stb r31, 0xc(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r31, 0x24(r29)
    addi r3, r29, 0x34
    bl OSWakeupThread
    mr r3, r30
lbl_fn_8071D6E0_000017C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071D760(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    bl OSDisableInterrupts
    lwz r0, 0x24(r25)
    mr r30, r3
    cmplw r26, r0
    bne lbl_fn_8071D760_00001840
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071D760_00001830
lbl_fn_8071D760_00001828:
    addi r3, r25, 0x34
    bl OSSleepThread
lbl_fn_8071D760_00001830:
    lwz r0, 0x24(r25)
    cmplw r26, r0
    beq lbl_fn_8071D760_00001828
    b lbl_fn_8071D760_000018B4
lbl_fn_8071D760_00001840:
    li r27, 0x0
    li r31, 0x0
    li r29, 0x0
lbl_fn_8071D760_0000184C:
    add r3, r25, r31
    lwz r4, 0x4(r3)
    addi r0, r3, 0x4
    b lbl_fn_8071D760_0000189C
    nop
lbl_fn_8071D760_00001860:
    mr r5, r4
    lwz r4, 0x0(r4)
    subi r28, r5, 0x4
    cmplw r28, r26
    bne lbl_fn_8071D760_0000189C
    stw r5, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_80725200
    stb r29, 0xc(r28)
    mr r3, r28
    lwz r12, 0x0(r28)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071D760_000018A4
lbl_fn_8071D760_0000189C:
    cmplw r4, r0
    bne lbl_fn_8071D760_00001860
lbl_fn_8071D760_000018A4:
    addi r27, r27, 0x1
    addi r31, r31, 0xc
    cmpwi r27, 0x3
    blt lbl_fn_8071D760_0000184C
lbl_fn_8071D760_000018B4:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071D860(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    bl OSDisableInterrupts
    mr r30, r3
    li r27, 0x0
    li r31, 0x0
    li r29, 0x0
lbl_fn_8071D860_0000190C:
    lwzx r0, r25, r31
    add r26, r25, r31
    cmpwi r0, 0x0
    beq lbl_fn_8071D860_0000195C
    b lbl_fn_8071D860_00001950
lbl_fn_8071D860_00001920:
    lwz r5, 0x8(r26)
    mr r3, r26
    stw r5, 0x8(r1)
    addi r4, r1, 0x8
    subi r28, r5, 0x4
    bl fn_80725200
    stb r29, 0xc(r28)
    mr r3, r28
    lwz r12, 0x0(r28)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8071D860_00001950:
    lwz r0, 0x0(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8071D860_00001920
lbl_fn_8071D860_0000195C:
    addi r27, r27, 0x1
    addi r31, r31, 0xc
    cmpwi r27, 0x3
    blt lbl_fn_8071D860_0000190C
    lwz r0, 0x24(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8071D860_000019A4
    lwz r3, 0x24(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    b lbl_fn_8071D860_00001998
lbl_fn_8071D860_00001990:
    addi r3, r25, 0x34
    bl OSSleepThread
lbl_fn_8071D860_00001998:
    lwz r0, 0x24(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8071D860_00001990
lbl_fn_8071D860_000019A4:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071D950(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    li r0, 0x0
    stb r0, 0x28(r30)
    mr r31, r3
    b lbl_fn_8071D950_00001A04
lbl_fn_8071D950_000019FC:
    addi r3, r30, 0x2c
    bl OSSleepThread
lbl_fn_8071D950_00001A04:
    mr r3, r30
    bl fn_8071D5D0
    cmpwi r3, 0x0
    bne lbl_fn_8071D950_00001A20
    lbz r0, 0x28(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8071D950_000019FC
lbl_fn_8071D950_00001A20:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071D9C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    li r0, 0x1
    stb r0, 0x28(r30)
    mr r31, r3
    addi r3, r30, 0x2c
    bl OSWakeupThread
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071DA10(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x318(r3)
    stb r0, 0x31c(r3)
    stb r0, 0x31d(r3)
    blr
}

asm void fn_8071DA30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8071DA30_00001B14
    lbz r0, 0x31d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071DA30_00001B04
    li r0, 0x1
    stb r0, 0x31c(r3)
    bl fn_8071D260
    bl fn_8071D9C0
    mr r3, r30
    li r4, 0x0
    bl OSJoinThread
    li r0, 0x0
    stb r0, 0x31d(r30)
lbl_fn_8071DA30_00001B04:
    cmpwi r31, 0x0
    ble lbl_fn_8071DA30_00001B14
    mr r3, r30
    bl dtor_80084684
lbl_fn_8071DA30_00001B14:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071DAB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x31d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071DAB0_00001B8C
    li r0, 0x1
    stb r0, 0x31c(r3)
    bl fn_8071D260
    bl fn_8071D9C0
    mr r3, r28
    li r4, 0x0
    bl OSJoinThread
    li r0, 0x0
    stb r0, 0x31d(r28)
lbl_fn_8071DAB0_00001B8C:
    lis r4, fn_8071DBE0@ha
    mr r3, r28
    mr r5, r28
    mr r7, r31
    mr r8, r29
    addi r4, r4, fn_8071DBE0@l
    add r6, r30, r31
    li r9, 0x0
    bl OSCreateThread
    cmpwi r3, 0x0
    bne lbl_fn_8071DAB0_00001BC0
    li r3, 0x0
    b lbl_fn_8071DAB0_00001BE0
lbl_fn_8071DAB0_00001BC0:
    li r4, 0x0
    li r0, 0x1
    stw r30, 0x318(r28)
    mr r3, r28
    stb r4, 0x31c(r28)
    stb r0, 0x31d(r28)
    bl OSResumeThread
    li r3, 0x1
lbl_fn_8071DAB0_00001BE0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071DB80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x31d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071DB80_00001C44
    li r0, 0x1
    stb r0, 0x31c(r3)
    bl fn_8071D260
    bl fn_8071D9C0
    mr r3, r31
    li r4, 0x0
    bl OSJoinThread
    li r0, 0x0
    stb r0, 0x31d(r31)
lbl_fn_8071DB80_00001C44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071DBE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_fn_8071DBE0_00001C94
lbl_fn_8071DBE0_00001C78:
    bl fn_8071D260
    bl fn_8071D950
    lbz r0, 0x31c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071DBE0_00001CA0
    bl fn_8071D260
    bl fn_8071D6E0
lbl_fn_8071DBE0_00001C94:
    lbz r0, 0x31c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8071DBE0_00001C78
lbl_fn_8071DBE0_00001CA0:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071DC40(void)
{
    nofralloc
    addi r6, r3, 0x44
    addi r4, r3, 0x8c
    lfs f0, lbl_808892A4
    lis r5, lbl_807C6454@ha
    lfs f1, lbl_808892A0
    li r0, 0x0
    addi r5, r5, lbl_807C6454@l
    cmplw r6, r4
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r5, 0x8(r3)
    stfs f1, 0x2c(r3)
    stfs f1, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    bge lbl_fn_8071DC40_00001D40
    addi r4, r4, 0x17
    li r0, 0x18
    subf r4, r6, r4
    divwu r4, r4, r0
    mtctr r4
    bge lbl_fn_8071DC40_00001D40
lbl_fn_8071DC40_00001D20:
    stfs f1, 0x0(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f0, 0x14(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_8071DC40_00001D20
lbl_fn_8071DC40_00001D40:
    li r0, 0x0
    stw r0, 0x94(r3)
    stb r0, 0x9c(r3)
    stb r0, 0x9d(r3)
    stb r0, 0x9e(r3)
    stb r0, 0x9f(r3)
    sth r0, 0xa2(r3)
    stw r0, 0xfc(r3)
    stw r0, 0x100(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    blr
}

asm void fn_8071DD10(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r3, 0x0
    mr r24, r3
    mr r25, r4
    beq lbl_fn_8071DD10_00001E20
    lis r4, lbl_807C6454@ha
    li r28, 0x0
    addi r4, r4, lbl_807C6454@l
    stw r4, 0x8(r3)
    li r30, 0x0
lbl_fn_8071DD10_00001DC8:
    add r31, r30, r24
    li r27, 0x0
    li r29, 0x0
lbl_fn_8071DD10_00001DD4:
    add r3, r29, r31
    lwz r26, 0xc(r3)
    cmpwi r26, 0x0
    beq lbl_fn_8071DD10_00001DF0
    bl fn_807080C0
    mr r4, r26
    bl fn_80708810
lbl_fn_8071DD10_00001DF0:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_8071DD10_00001DD4
    addi r28, r28, 0x1
    addi r30, r30, 0x10
    cmpwi r28, 0x2
    blt lbl_fn_8071DD10_00001DC8
    cmpwi r25, 0x0
    ble lbl_fn_8071DD10_00001E20
    mr r3, r24
    bl dtor_80084684
lbl_fn_8071DD10_00001E20:
    addi r11, r1, 0x30
    mr r3, r24
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071DDC0(void)
{
    nofralloc
    lfs f1, lbl_808892A0
    li r8, 0x0
    lfs f0, lbl_808892A4
    li r0, 0x1
    stw r4, 0x8c(r3)
    stw r5, 0x90(r3)
    stw r6, 0x94(r3)
    stw r7, 0x98(r3)
    sth r8, 0xa2(r3)
    stb r8, 0x9f(r3)
    stb r8, 0xa0(r3)
    stb r8, 0x9e(r3)
    stb r8, 0xa1(r3)
    stfs f1, 0xe8(r3)
    stfs f0, 0xec(r3)
    stfs f1, 0xf0(r3)
    stfs f1, 0xb4(r3)
    stb r8, 0xa5(r3)
    stfs f0, 0xb8(r3)
    stfs f0, 0xac(r3)
    stfs f0, 0xb0(r3)
    stw r0, 0xbc(r3)
    stfs f1, 0xc0(r3)
    stfs f1, 0xc4(r3)
    stfs f0, 0xc8(r3)
    stfs f0, 0xcc(r3)
    stfs f0, 0xd0(r3)
    stfs f1, 0xd4(r3)
    stfs f1, 0xd8(r3)
    stfs f1, 0xdc(r3)
    stfs f1, 0xe0(r3)
    stfs f1, 0xe4(r3)
    stb r8, 0xa4(r3)
    stw r8, 0xf4(r3)
    stw r8, 0xf8(r3)
    blr
}

asm void fn_8071DE50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071DE50_00001F54
    lbz r0, 0x9e(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8071DE50_00001F54
    lwz r3, 0xc(r3)
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8071DE50_00001F20
    bl fn_80705450
    cmpwi r3, 0x0
    beq lbl_fn_8071DE50_00001F20
    li r31, 0x1
lbl_fn_8071DE50_00001F20:
    cmpwi r31, 0x0
    beq lbl_fn_8071DE50_00001F54
    lwz r12, 0x94(r30)
    cmpwi r12, 0x0
    beq lbl_fn_8071DE50_00001F48
    mr r3, r30
    lwz r5, 0x98(r30)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_8071DE50_00001F48:
    li r0, 0x0
    stb r0, 0x9e(r30)
    stb r0, 0x9d(r30)
lbl_fn_8071DE50_00001F54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8071DEF0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_25
    lbz r0, 0x9d(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8071DEF0_000021D8
    lhz r0, 0xa2(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_8071DEF0_0000202C
    mr r25, r31
    li r29, 0x0
    li r26, 0x0
    b lbl_fn_8071DEF0_00002014
lbl_fn_8071DEF0_00001FB8:
    lbz r0, 0xa1(r31)
    lfs f31, 0xe4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8071DEF0_00001FD0
    lfs f0, 0x30(r25)
    fmuls f31, f31, f0
lbl_fn_8071DEF0_00001FD0:
    add r27, r31, r26
    li r30, 0x0
    b lbl_fn_8071DEF0_00001FFC
lbl_fn_8071DEF0_00001FDC:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8071DEF0_00001FF4
    fmr f1, f31
    li r4, 0x0
    bl fn_80706E80
lbl_fn_8071DEF0_00001FF4:
    addi r27, r27, 0x10
    addi r30, r30, 0x1
lbl_fn_8071DEF0_00001FFC:
    lwz r0, 0x8c(r31)
    cmpw r30, r0
    blt lbl_fn_8071DEF0_00001FDC
    addi r25, r25, 0x18
    addi r26, r26, 0x4
    addi r29, r29, 0x1
lbl_fn_8071DEF0_00002014:
    lwz r0, 0x90(r31)
    cmpw r29, r0
    blt lbl_fn_8071DEF0_00001FB8
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 30, 28
    sth r0, 0xa2(r31)
lbl_fn_8071DEF0_0000202C:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_8071DEF0_0000204C
    mr r3, r31
    bl fn_8071F270
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 29, 27
    sth r0, 0xa2(r31)
lbl_fn_8071DEF0_0000204C:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_8071DEF0_00002074
    mr r3, r31
    bl fn_8071F360
    cmpwi r3, 0x0
    bne lbl_fn_8071DEF0_00002074
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 28, 26
    sth r0, 0xa2(r31)
lbl_fn_8071DEF0_00002074:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_fn_8071DEF0_000020FC
    mr r27, r31
    li r28, 0x0
    li r26, 0x0
    b lbl_fn_8071DEF0_000020E4
lbl_fn_8071DEF0_00002090:
    lfs f1, 0xb4(r31)
    lfs f0, 0x40(r27)
    fadds f1, f1, f0
    bl fn_80721000
    mr r30, r3
    add r25, r31, r26
    li r29, 0x0
    b lbl_fn_8071DEF0_000020CC
lbl_fn_8071DEF0_000020B0:
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8071DEF0_000020C4
    clrlwi r4, r30, 16
    bl fn_80707170
lbl_fn_8071DEF0_000020C4:
    addi r25, r25, 0x10
    addi r29, r29, 0x1
lbl_fn_8071DEF0_000020CC:
    lwz r0, 0x8c(r31)
    cmpw r29, r0
    blt lbl_fn_8071DEF0_000020B0
    addi r27, r27, 0x18
    addi r26, r26, 0x4
    addi r28, r28, 0x1
lbl_fn_8071DEF0_000020E4:
    lwz r0, 0x90(r31)
    cmpw r28, r0
    blt lbl_fn_8071DEF0_00002090
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 27, 25
    sth r0, 0xa2(r31)
lbl_fn_8071DEF0_000020FC:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 23, 23
    beq lbl_fn_8071DEF0_0000216C
    li r29, 0x0
    li r27, 0x0
    b lbl_fn_8071DEF0_00002154
lbl_fn_8071DEF0_00002114:
    add r30, r31, r27
    li r28, 0x0
    b lbl_fn_8071DEF0_00002140
lbl_fn_8071DEF0_00002120:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8071DEF0_00002138
    lbz r4, 0xa5(r31)
    lfs f1, 0xb8(r31)
    bl fn_80707300
lbl_fn_8071DEF0_00002138:
    addi r30, r30, 0x10
    addi r28, r28, 0x1
lbl_fn_8071DEF0_00002140:
    lwz r0, 0x8c(r31)
    cmpw r28, r0
    blt lbl_fn_8071DEF0_00002120
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_fn_8071DEF0_00002154:
    lwz r0, 0x90(r31)
    cmpw r29, r0
    blt lbl_fn_8071DEF0_00002114
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 24, 22
    sth r0, 0xa2(r31)
lbl_fn_8071DEF0_0000216C:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_8071DEF0_000021D8
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_8071DEF0_000021C0
lbl_fn_8071DEF0_00002184:
    add r27, r31, r30
    li r28, 0x0
    b lbl_fn_8071DEF0_000021AC
lbl_fn_8071DEF0_00002190:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8071DEF0_000021A4
    lbz r4, 0xa4(r31)
    bl fn_80707530
lbl_fn_8071DEF0_000021A4:
    addi r27, r27, 0x10
    addi r28, r28, 0x1
lbl_fn_8071DEF0_000021AC:
    lwz r0, 0x8c(r31)
    cmpw r28, r0
    blt lbl_fn_8071DEF0_00002190
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_8071DEF0_000021C0:
    lwz r0, 0x90(r31)
    cmpw r29, r0
    blt lbl_fn_8071DEF0_00002184
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 25, 23
    sth r0, 0xa2(r31)
lbl_fn_8071DEF0_000021D8:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
