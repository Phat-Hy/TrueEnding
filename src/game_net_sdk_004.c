#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void IOS_IoctlAsync(void);
extern void IOS_Open(void);
extern void OSDisableInterrupts(void);
extern void OSGetCurrentThread(void);
extern void OSGetTime(void);
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSRegisterShutdownFunction(void);
extern void OSRegisterVersion(void);
extern void OSReport(const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void SCCheckStatus(void);
extern void __div2i(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805EC060(void);
extern void fn_805ED1C0(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_805F3410(void);
extern void fn_805F3420(void);
extern void fn_805F6DF0(void);
extern void fn_8061C8A0(void);
extern void fn_8061D080(void);
extern void fn_80624970(void);
extern void fn_80624B10(void);
extern void fn_806806A4(void);
extern void fn_80696324(void);
extern void fn_80696348(void);
extern void fn_8069A0D0(void);
extern void fn_8069A15C(void);
extern void fn_8069A5BC(void);
extern void fn_8069A5DC(void);
extern void fn_8069A768(void);
extern void fn_8069A9B8(void);
extern void fn_8069AA08(void);
extern void fn_8069AA0C(void);
extern void fn_8069B278(void);
extern void fn_8069B8AC(void);
extern void fn_8069BB48(void);
extern void fn_8069BCB4(void);
extern void fn_8069C7B0(void);
extern void fn_8069C7B4(void);
extern void fn_8069C7BC(void);
extern void fn_8069CF48(void);
extern void fn_8069D124(void);
extern void fn_8069FCC8(void);
extern void fn_8069FE10(void);
extern void fn_8069FE9C(void);
extern void fn_806A00DC(void);
extern void fn_806A236C(void);

/* External data declarations */
extern u8 lbl_80767378[];
extern u8 lbl_807BC628[];
extern u8 lbl_807BC720[];
extern u8 lbl_807BC738[];
extern u8 lbl_807BC768[];
extern u8 lbl_807BC920[];
extern u8 lbl_807BC9B0[];
extern u8 lbl_807BC9C4[];
extern u8 lbl_807BC9D8[];
extern u8 lbl_807BC9F8[];
extern u8 lbl_807BCA0C[];
extern u8 lbl_807BCA20[];
extern u8 lbl_807BCA38[];
extern u8 lbl_80833140[];
extern u8 lbl_80833180[];
extern u8 lbl_80833E20[];
extern u8 lbl_80833FA0[];
extern u8 lbl_80834080[];

/* Small data declarations */
extern u32 lbl_8087EDC4;
extern u32 lbl_8087EDC8;
extern u32 lbl_8087EDD0;
extern u32 lbl_8087EDD8;
extern u32 lbl_808803EC;
extern u32 lbl_808803F0;
extern u32 lbl_808803F4;
extern u32 lbl_808803F8;
extern u32 lbl_80880400;
extern u32 lbl_80880404;
extern u32 lbl_80880408;
extern u32 lbl_8088040C;
extern u32 lbl_80880410;
extern u32 lbl_80880418;
extern u32 lbl_80880420;
extern u32 lbl_80880428;

/* Function declarations */
void fn_806A02C0(void);
void fn_806A0390(void);
void fn_806A0414(void);
void fn_806A04D8(void);
void fn_806A059C(void);
void fn_806A05F8(void);
void fn_806A0638(void);
void fn_806A06BC(void);
void fn_806A0724(void);
void fn_806A0784(void);
void fn_806A07E0(void);
void fn_806A0950(void);
void fn_806A0A78(void);
void fn_806A0AD8(void);
void fn_806A0B48(void);
void fn_806A0BC4(void);
void fn_806A0CD4(void);
void fn_806A0D04(void);
void fn_806A0D34(void);
void fn_806A0D6C(void);
void fn_806A0DA4(void);
void fn_806A0DAC(void);
void fn_806A0DB4(void);
void fn_806A0DBC(void);
void fn_806A0E00(void);
void fn_806A0E44(void);
void fn_806A0E64(void);
void fn_806A0F4C(void);
void fn_806A1064(void);
void fn_806A117C(void);
void fn_806A11D4(void);
void fn_806A123C(void);
void fn_806A1240(void);
void fn_806A1248(void);
void fn_806A1250(void);
void fn_806A1258(void);
void fn_806A1260(void);
void fn_806A1270(void);
void fn_806A1288(void);
void fn_806A12E8(void);
void fn_806A1450(void);
void fn_806A1488(void);
void fn_806A149C(void);
void fn_806A14B0(void);
void fn_806A14C4(void);
void NWC24SuspendScheduler(void);
void fn_806A1634(void);
void fn_806A1724(void);
void fn_806A18C4(void);
void fn_806A1A80(void);
void fn_806A1A90(void);
void fn_806A1AA0(void);
void fn_806A1AB0(void);
void fn_806A1AC0(void);
void fn_806A1AD0(void);
void fn_806A1AE0(void);
void fn_806A1C40(void);
void fn_806A1CD8(void);
void fn_806A1F5C(void);
void NWC24iSynchronizeRtcCounter(void);
void fn_806A2138(void);
void fn_806A21B0(void);
void fn_806A21E4(void);
void fn_806A222C(void);
void fn_806A2288(void);
void fn_806A2290(void);
void NWC24iPrepareShutdown(void);

asm void fn_806A02C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r11, fn_806A00DC@ha
    mr r26, r7
    mr r27, r9
    mr r28, r10
    addi r7, r11, fn_806A00DC@l
    bl fn_8069FCC8
    cmpwi r3, 0x0
    mr r31, r3
    li r4, 0x0
    beq lbl_fn_806A02C0_000000B4
    bl fn_806A11D4
    mr r30, r3
    bl fn_806A1258
    mr r29, r3
    mr r4, r31
    bl fn_806A0DB4
    mr r31, r3
    mr r3, r29
    mr r4, r31
    bl fn_806A0D34
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_806A02C0_000000B4
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806A02C0_00000094
    stw r26, 0x30(r31)
    lwz r4, 0x2c(r3)
    stw r27, 0x2c(r4)
    lwz r4, 0x2c(r3)
    stw r28, 0x30(r4)
    b lbl_fn_806A02C0_000000B8
lbl_fn_806A02C0_00000094:
    mr r3, r30
    bl fn_8069B8AC
    mr r3, r29
    mr r4, r31
    bl fn_806A0D04
    mr r3, r31
    bl fn_8069A15C
    li r4, 0x0
lbl_fn_806A02C0_000000B4:
    mr r3, r4
lbl_fn_806A02C0_000000B8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A0390(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, lbl_808803EC
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r0, 0x0
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bne lbl_fn_806A0390_00000118
    lwz r3, lbl_8087EDC4
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_808803EC
lbl_fn_806A0390_00000118:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    li r9, 0x0
    li r10, 0x0
    bl fn_806A02C0
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A0414(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bl fn_806A11D4
    mr r31, r3
    bl fn_806A1258
    mr r4, r30
    bl fn_806A0DBC
    mr r30, r3
    mr r3, r31
    bl fn_806A123C
    cmpwi r30, 0x0
    mr r4, r3
    bne lbl_fn_806A0414_000001B0
    li r3, -0x1
    b lbl_fn_806A0414_000001F8
lbl_fn_806A0414_000001B0:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806A0414_000001DC
    lis r3, lbl_807BC738@ha
    lis r4, lbl_807BC720@ha
    addi r3, r3, lbl_807BC738@l
    addi r4, r4, lbl_807BC720@l
    crclr 6
    bl fn_806806A4
    li r3, -0x1
    b lbl_fn_806A0414_000001F8
lbl_fn_806A0414_000001DC:
    mr r3, r30
    mr r5, r28
    mr r6, r29
    bl fn_8069A5BC
    cntlzw r0, r3
    srwi r0, r0, 5
    neg r3, r0
lbl_fn_806A0414_000001F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A04D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bl fn_806A11D4
    mr r31, r3
    bl fn_806A1258
    mr r4, r30
    bl fn_806A0DBC
    mr r30, r3
    mr r3, r31
    bl fn_806A123C
    cmpwi r30, 0x0
    mr r4, r3
    bne lbl_fn_806A04D8_00000274
    li r3, -0x1
    b lbl_fn_806A04D8_000002BC
lbl_fn_806A04D8_00000274:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806A04D8_000002A0
    lis r3, lbl_807BC738@ha
    lis r4, lbl_807BC768@ha
    addi r3, r3, lbl_807BC738@l
    addi r4, r4, lbl_807BC768@l
    crclr 6
    bl fn_806806A4
    li r3, -0x1
    b lbl_fn_806A04D8_000002BC
lbl_fn_806A04D8_000002A0:
    mr r3, r30
    mr r5, r28
    mr r6, r29
    bl fn_8069A5DC
    cntlzw r0, r3
    srwi r0, r0, 5
    neg r3, r0
lbl_fn_806A04D8_000002BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A059C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r4, r31
    bl fn_806A0DA4
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_806A059C_00000320
    bl fn_8069FE10
    cmpwi r3, 0x0
    bne lbl_fn_806A059C_00000320
    lwz r3, 0x18(r31)
    b lbl_fn_806A059C_00000324
lbl_fn_806A059C_00000320:
    li r3, -0x1
lbl_fn_806A059C_00000324:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A05F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A11D4
    mr r4, r31
    bl fn_8069BB48
    cntlzw r0, r3
    lwz r31, 0xc(r1)
    srwi r0, r0, 5
    neg r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0638(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r31, r3
    mr r4, r30
    bl fn_806A0DAC
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_806A0638_000003E4
    mr r3, r31
    mr r4, r30
    bl fn_806A0D6C
    cmpwi r3, 0x0
    beq lbl_fn_806A0638_000003D0
    lwz r4, 0x14(r30)
    mr r3, r31
    bl fn_8069BCB4
lbl_fn_806A0638_000003D0:
    mr r3, r31
    mr r4, r30
    bl fn_806A0D04
    mr r3, r30
    bl fn_8069A15C
lbl_fn_806A0638_000003E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A06BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r4, r30
    bl fn_806A0DAC
    cmpwi r3, 0x0
    beq lbl_fn_806A06BC_00000448
    li r0, 0x0
    mr r4, r31
    stw r0, 0x8(r1)
    addi r5, r1, 0x8
    bl fn_8069FE9C
    b lbl_fn_806A06BC_0000044C
lbl_fn_806A06BC_00000448:
    li r3, -0x1
lbl_fn_806A06BC_0000044C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A0724(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r4, r31
    bl fn_806A0E00
    cmpwi r3, 0x0
    bne lbl_fn_806A0724_00000498
    li r3, -0x1
    b lbl_fn_806A0724_000004B0
lbl_fn_806A0724_00000498:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806A0724_000004AC
    lwz r3, 0x18(r3)
    b lbl_fn_806A0724_000004B0
lbl_fn_806A0724_000004AC:
    li r3, -0x1
lbl_fn_806A0724_000004B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0784(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r4, r30
    bl fn_806A0DBC
    cmpwi r3, 0x0
    bne lbl_fn_806A0784_00000500
    li r3, -0x1
    b lbl_fn_806A0784_00000508
lbl_fn_806A0784_00000500:
    stw r31, 0xcc(r3)
    li r3, 0x0
lbl_fn_806A0784_00000508:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A07E0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    lis r30, lbl_807BC628@ha
    mr r31, r3
    mr r29, r4
    mr r28, r5
    mr r26, r6
    mr r27, r7
    addi r30, r30, lbl_807BC628@l
    bl fn_806A11D4
    bl fn_806A1258
    mr r4, r31
    bl fn_806A0DBC
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_806A07E0_00000574
    cmpwi r29, 0x0
    bne lbl_fn_806A07E0_0000057C
lbl_fn_806A07E0_00000574:
    li r3, -0x1
    b lbl_fn_806A07E0_00000678
lbl_fn_806A07E0_0000057C:
    mr r3, r29
    bl fn_8069C7B4
    cmpwi r3, 0x100
    ble lbl_fn_806A07E0_000005A0
    addi r3, r30, 0x1f8
    crclr 6
    bl fn_806806A4
    li r3, -0x1
    b lbl_fn_806A07E0_00000678
lbl_fn_806A07E0_000005A0:
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xe0
    bl fn_8069C7B0
    cmpwi r26, 0x0
    stw r28, 0x1e0(r31)
    beq lbl_fn_806A07E0_0000066C
    cmpwi r27, 0x0
    beq lbl_fn_806A07E0_0000066C
    mr r3, r26
    bl fn_8069C7B4
    mr r29, r3
    mr r3, r27
    bl fn_8069C7B4
    cmpwi r29, 0x20
    mr r28, r3
    ble lbl_fn_806A07E0_000005F8
    addi r3, r30, 0x220
    crclr 6
    bl fn_806806A4
    li r3, -0x1
    b lbl_fn_806A07E0_00000678
lbl_fn_806A07E0_000005F8:
    cmpwi r3, 0x20
    ble lbl_fn_806A07E0_00000614
    addi r3, r30, 0x244
    crclr 6
    bl fn_806806A4
    li r3, -0x1
    b lbl_fn_806A07E0_00000678
lbl_fn_806A07E0_00000614:
    addi r3, r1, 0x8
    li r4, 0x41
    bl fn_8069C7BC
    mr r4, r26
    mr r5, r29
    addi r3, r1, 0x8
    bl fn_8069C7B0
    addi r3, r1, 0x8
    la r4, lbl_8087EDC8
    add r3, r3, r29
    li r5, 0x1
    bl fn_8069C7B0
    addi r3, r1, 0x8
    mr r4, r27
    add r3, r29, r3
    mr r5, r28
    addi r3, r3, 0x1
    bl fn_8069C7B0
    addi r3, r31, 0x1e4
    addi r4, r1, 0x8
    bl fn_8069CF48
    stw r3, 0x240(r31)
lbl_fn_806A07E0_0000066C:
    li r0, 0x1
    li r3, 0x0
    stw r0, 0xc(r31)
lbl_fn_806A07E0_00000678:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806A0950(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_807BC628@ha
    mr r27, r3
    addi r31, r31, lbl_807BC628@l
    bl fn_806A11D4
    mr r30, r3
    bl fn_806A1258
    mr r4, r27
    bl fn_806A0DBC
    mr r29, r3
    mr r3, r30
    bl fn_806A123C
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806A0950_000006E4
    addi r30, r3, 0x170
    b lbl_fn_806A0950_000006E8
lbl_fn_806A0950_000006E4:
    addi r30, r3, 0x28
lbl_fn_806A0950_000006E8:
    lbz r0, 0x0(r30)
    cmplwi r0, 0x1
    bne lbl_fn_806A0950_0000079C
    lbz r0, 0x1(r30)
    li r28, 0x0
    li r27, 0x0
    cmplwi r0, 0x1
    bne lbl_fn_806A0950_00000710
    addi r28, r30, 0x106
    addi r27, r30, 0x127
lbl_fn_806A0950_00000710:
    cmpwi r27, 0x0
    beq lbl_fn_806A0950_00000720
    mr r7, r27
    b lbl_fn_806A0950_00000724
lbl_fn_806A0950_00000720:
    addi r7, r31, 0x268
lbl_fn_806A0950_00000724:
    cmpwi r28, 0x0
    lhz r5, 0x104(r30)
    addi r3, r31, 0x274
    addi r4, r30, 0x4
    beq lbl_fn_806A0950_00000740
    mr r6, r28
    b lbl_fn_806A0950_00000744
lbl_fn_806A0950_00000740:
    addi r6, r31, 0x268
lbl_fn_806A0950_00000744:
    crclr 6
    bl OSReport
    lhz r5, 0x104(r30)
    mr r3, r29
    mr r6, r28
    mr r7, r27
    addi r4, r30, 0x4
    bl fn_806A07E0
    cmpwi r3, 0x0
    bge lbl_fn_806A0950_00000794
    mr r4, r3
    addi r3, r31, 0x298
    crclr 6
    bl OSReport
    addi r3, r31, 0x2b4
    addi r5, r31, 0x2c0
    li r4, 0x3dc
    crclr 6
    bl OSPanic
    b lbl_fn_806A0950_0000079C
lbl_fn_806A0950_00000794:
    li r3, 0x0
    b lbl_fn_806A0950_000007A0
lbl_fn_806A0950_0000079C:
    li r3, -0x1
lbl_fn_806A0950_000007A0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A0A78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r4, r31
    bl fn_806A0DBC
    cmpwi r3, 0x0
    bne lbl_fn_806A0A78_000007EC
    li r4, -0x1
    b lbl_fn_806A0A78_00000800
lbl_fn_806A0A78_000007EC:
    li r0, 0x0
    li r4, 0x0
    stw r0, 0xd8(r3)
    stw r0, 0xc0(r3)
    stw r0, 0xc4(r3)
lbl_fn_806A0A78_00000800:
    lwz r31, 0xc(r1)
    mr r3, r4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0AD8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A11D4
    bl fn_806A1258
    mr r4, r31
    bl fn_806A0DBC
    cmpwi r3, 0x0
    bne lbl_fn_806A0AD8_0000084C
    li r5, -0x1
    b lbl_fn_806A0AD8_00000870
lbl_fn_806A0AD8_0000084C:
    li r4, 0x0
    li r0, 0x1
    stw r4, 0xdc(r3)
    li r5, 0x0
    stw r0, 0xc8(r3)
    stw r4, 0xb0(r3)
    stw r4, 0xb4(r3)
    stw r4, 0xb8(r3)
    stw r4, 0xbc(r3)
lbl_fn_806A0AD8_00000870:
    lwz r31, 0xc(r1)
    mr r3, r5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0B48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80833140@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r4, lbl_80833140@l
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_80833140@l(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806A0B48_000008CC
    addi r3, r31, 0x4
    bl fn_805F30F0
    addi r3, r31, 0x1c
    bl fn_805F3410
    li r0, 0x1
    stw r0, 0x0(r31)
lbl_fn_806A0B48_000008CC:
    addi r3, r31, 0x4
    bl fn_805F3130
    li r0, 0x0
    addi r3, r31, 0x1c
    stw r0, 0xc(r30)
    bl fn_805F3420
    addi r3, r31, 0x4
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0BC4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_8069AA08
    cmplwi r30, 0x3
    bne lbl_fn_806A0BC4_00000950
    lwz r0, lbl_808803F0
    mr r31, r29
    stw r0, 0x20(r29)
    stw r29, lbl_808803F0
    b lbl_fn_806A0BC4_000009E8
lbl_fn_806A0BC4_00000950:
    la r4, lbl_808803F0
    b lbl_fn_806A0BC4_000009DC
lbl_fn_806A0BC4_00000958:
    cmpwi r30, 0x2
    beq lbl_fn_806A0BC4_000009A4
    bge lbl_fn_806A0BC4_00000974
    cmpwi r30, 0x0
    beq lbl_fn_806A0BC4_00000980
    bge lbl_fn_806A0BC4_00000990
    b lbl_fn_806A0BC4_000009CC
lbl_fn_806A0BC4_00000974:
    cmpwi r30, 0x4
    beq lbl_fn_806A0BC4_000009B8
    b lbl_fn_806A0BC4_000009CC
lbl_fn_806A0BC4_00000980:
    cmplw r3, r29
    bne lbl_fn_806A0BC4_000009CC
    mr r31, r3
    b lbl_fn_806A0BC4_000009CC
lbl_fn_806A0BC4_00000990:
    lwz r0, 0x10(r3)
    cmplw r0, r29
    bne lbl_fn_806A0BC4_000009CC
    mr r31, r3
    b lbl_fn_806A0BC4_000009CC
lbl_fn_806A0BC4_000009A4:
    lwz r0, 0x14(r3)
    cmplw r0, r29
    bne lbl_fn_806A0BC4_000009CC
    mr r31, r3
    b lbl_fn_806A0BC4_000009CC
lbl_fn_806A0BC4_000009B8:
    cmplw r3, r29
    bne lbl_fn_806A0BC4_000009CC
    lwz r0, 0x20(r3)
    mr r31, r3
    stw r0, 0x0(r4)
lbl_fn_806A0BC4_000009CC:
    cmpwi r31, 0x0
    bne lbl_fn_806A0BC4_000009E8
    lwz r3, 0x0(r4)
    addi r4, r3, 0x20
lbl_fn_806A0BC4_000009DC:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    bne lbl_fn_806A0BC4_00000958
lbl_fn_806A0BC4_000009E8:
    mr r3, r28
    bl fn_8069AA0C
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

asm void fn_806A0CD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x3
    stw r0, 0x14(r1)
    bl fn_806A0BC4
    neg r0, r3
    nor r0, r3, r0
    srawi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0D04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x4
    stw r0, 0x14(r1)
    bl fn_806A0BC4
    neg r0, r3
    nor r0, r3, r0
    srawi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0D34(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0D34_00000A98
    lwz r3, 0x10(r3)
    b lbl_fn_806A0D34_00000A9C
lbl_fn_806A0D34_00000A98:
    li r3, 0x0
lbl_fn_806A0D34_00000A9C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0D6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0D6C_00000AD0
    lwz r3, 0x14(r3)
    b lbl_fn_806A0D6C_00000AD4
lbl_fn_806A0D6C_00000AD0:
    li r3, 0x0
lbl_fn_806A0D6C_00000AD4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0DA4(void)
{
    nofralloc
    li r5, 0x1
    b fn_806A0BC4
}

asm void fn_806A0DAC(void)
{
    nofralloc
    li r5, 0x2
    b fn_806A0BC4
}

asm void fn_806A0DB4(void)
{
    nofralloc
    li r5, 0x0
    b fn_806A0BC4
}

asm void fn_806A0DBC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0DBC_00000B28
    lwz r3, 0x10(r3)
    b lbl_fn_806A0DBC_00000B2C
lbl_fn_806A0DBC_00000B28:
    mr r3, r31
lbl_fn_806A0DBC_00000B2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0E00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0E00_00000B6C
    lwz r3, 0x14(r3)
    b lbl_fn_806A0E00_00000B70
lbl_fn_806A0E00_00000B6C:
    mr r3, r31
lbl_fn_806A0E00_00000B70:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A0E44(void)
{
    nofralloc
    lwz r4, lbl_808803F0
    li r3, 0x0
    b lbl_fn_806A0E44_00000B98
lbl_fn_806A0E44_00000B90:
    lwz r4, 0x20(r4)
    addi r3, r3, 0x1
lbl_fn_806A0E44_00000B98:
    cmpwi r4, 0x0
    bne lbl_fn_806A0E44_00000B90
    blr
}

asm void fn_806A0E64(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r31, r5
    mr r27, r3
    mr r28, r4
    mr r30, r6
    li r29, -0x1
    li r5, 0x0
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0E64_00000C70
    mr r3, r27
    mr r4, r28
    li r5, 0x0
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0E64_00000BFC
    lwz r0, 0x14(r3)
    b lbl_fn_806A0E64_00000C00
lbl_fn_806A0E64_00000BFC:
    li r0, 0x0
lbl_fn_806A0E64_00000C00:
    cmpwi r0, 0x0
    beq lbl_fn_806A0E64_00000C70
    lwz r0, 0x1c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806A0E64_00000C70
    stw r31, 0x8(r1)
    mr r3, r28
    addi r5, r1, 0x8
    li r4, 0x1
    lwz r0, 0x24(r28)
    stw r0, 0xc(r1)
    lwz r0, 0x28(r28)
    stw r0, 0x10(r1)
    stw r30, 0x14(r1)
    lwz r12, 0x1c(r28)
    mtctr r12
    bctrl
    lwz r30, 0x10(r1)
    mr r29, r3
    lwz r31, 0xc(r1)
    mr r3, r27
    mr r4, r28
    li r5, 0x0
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0E64_00000C70
    stw r31, 0x24(r3)
    stw r30, 0x28(r3)
lbl_fn_806A0E64_00000C70:
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A0F4C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0F4C_00000D84
    mr r3, r28
    mr r4, r31
    li r5, 0x0
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0F4C_00000CE0
    lwz r6, 0x14(r3)
    b lbl_fn_806A0F4C_00000CE4
lbl_fn_806A0F4C_00000CE0:
    li r6, 0x0
lbl_fn_806A0F4C_00000CE4:
    cmpwi r6, 0x0
    beq lbl_fn_806A0F4C_00000D84
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806A0F4C_00000D84
    lwz r0, 0x28(r6)
    mr r3, r31
    addi r5, r1, 0x8
    li r4, 0x2
    stw r0, 0x8(r1)
    lwz r0, 0x1c(r6)
    stw r0, 0xc(r1)
    lwz r0, 0x4(r6)
    stw r0, 0x10(r1)
    lwz r12, 0x1c(r31)
    mtctr r12
    bctrl
    mr r4, r31
    lwz r29, 0x10(r1)
    lwz r30, 0xc(r1)
    mr r3, r28
    lwz r31, 0x8(r1)
    li r5, 0x0
    bl fn_806A0BC4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_806A0F4C_00000D84
    mr r3, r28
    li r5, 0x0
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A0F4C_00000D6C
    lwz r3, 0x14(r3)
    b lbl_fn_806A0F4C_00000D70
lbl_fn_806A0F4C_00000D6C:
    li r3, 0x0
lbl_fn_806A0F4C_00000D70:
    cmpwi r3, 0x0
    beq lbl_fn_806A0F4C_00000D84
    stw r31, 0x28(r3)
    stw r30, 0x1c(r3)
    stw r29, 0x4(r3)
lbl_fn_806A0F4C_00000D84:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A1064(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A1064_00000E9C
    mr r3, r28
    mr r4, r31
    li r5, 0x0
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A1064_00000DF8
    lwz r6, 0x14(r3)
    b lbl_fn_806A1064_00000DFC
lbl_fn_806A1064_00000DF8:
    li r6, 0x0
lbl_fn_806A1064_00000DFC:
    cmpwi r6, 0x0
    beq lbl_fn_806A1064_00000E9C
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806A1064_00000E9C
    lwz r0, 0x28(r6)
    mr r3, r31
    addi r5, r1, 0x8
    li r4, 0x3
    stw r0, 0x8(r1)
    lwz r0, 0x1c(r6)
    stw r0, 0xc(r1)
    lwz r0, 0x4(r6)
    stw r0, 0x10(r1)
    lwz r12, 0x1c(r31)
    mtctr r12
    bctrl
    mr r4, r31
    lwz r29, 0x10(r1)
    lwz r30, 0xc(r1)
    mr r3, r28
    lwz r31, 0x8(r1)
    li r5, 0x0
    bl fn_806A0BC4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_806A1064_00000E9C
    mr r3, r28
    li r5, 0x0
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A1064_00000E84
    lwz r3, 0x14(r3)
    b lbl_fn_806A1064_00000E88
lbl_fn_806A1064_00000E84:
    li r3, 0x0
lbl_fn_806A1064_00000E88:
    cmpwi r3, 0x0
    beq lbl_fn_806A1064_00000E9C
    stw r31, 0x28(r3)
    stw r30, 0x1c(r3)
    stw r29, 0x4(r3)
lbl_fn_806A1064_00000E9C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A117C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_806A0BC4
    cmpwi r3, 0x0
    beq lbl_fn_806A117C_00000F00
    lwz r12, 0x1c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806A117C_00000F00
    mr r3, r31
    li r4, 0x4
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_806A117C_00000F00:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A11D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_808803F4
    cmpwi r0, 0x0
    bne lbl_fn_806A11D4_00000F64
    lis r31, lbl_80833180@ha
    addi r31, r31, lbl_80833180@l
    stw r31, lbl_808803F4
    mr r3, r31
    bl fn_8069A0D0
    addi r3, r31, 0x800
    bl fn_8069A768
    addi r3, r31, 0x808
    bl fn_8069B278
    addi r3, r31, 0x80c
    bl fn_8069A9B8
    addi r3, r31, 0x840
    bl fn_8069D124
lbl_fn_806A11D4_00000F64:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_808803F4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A123C(void)
{
    nofralloc
    blr
}

asm void fn_806A1240(void)
{
    nofralloc
    addi r3, r3, 0x800
    blr
}

asm void fn_806A1248(void)
{
    nofralloc
    addi r3, r3, 0x808
    blr
}

asm void fn_806A1250(void)
{
    nofralloc
    addi r3, r3, 0x840
    blr
}

asm void fn_806A1258(void)
{
    nofralloc
    addi r3, r3, 0x80c
    blr
}

asm void fn_806A1260(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    stw r4, 0x2c(r3)
    blr
}

asm void fn_806A1270(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_806A1270_00000FC0
    lwz r3, 0x2c(r3)
    blr
lbl_fn_806A1270_00000FC0:
    li r3, 0x0
    blr
}

asm void fn_806A1288(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_808803F0
    cmpwi r3, 0x0
    beq lbl_fn_806A1288_00001010
    li r4, 0x0
    b lbl_fn_806A1288_00000FF0
lbl_fn_806A1288_00000FE8:
    lwz r3, 0x20(r3)
    addi r4, r4, 0x1
lbl_fn_806A1288_00000FF0:
    cmpwi r3, 0x0
    bne lbl_fn_806A1288_00000FE8
    cmpwi r4, 0x0
    beq lbl_fn_806A1288_00001010
    lis r3, lbl_807BC920@ha
    addi r3, r3, lbl_807BC920@l
    crclr 6
    bl fn_806806A4
lbl_fn_806A1288_00001010:
    li r0, 0x0
    stw r0, lbl_808803F0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A12E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_806A1488
    cmpwi r3, 0x0
    bne lbl_fn_806A12E8_0000105C
    bl fn_806A149C
    cmpwi r3, 0x0
    beq lbl_fn_806A12E8_00001074
lbl_fn_806A12E8_0000105C:
    lwz r3, lbl_808803F8
    lwz r0, 0x8(r3)
    lwz r3, 0xc(r3)
    stw r3, 0x4(r30)
    stw r0, 0x0(r30)
    b lbl_fn_806A12E8_00001174
lbl_fn_806A12E8_00001074:
    lis r4, 0x8000
    lwz r3, 0x31c0(r4)
    lwz r4, 0x31c4(r4)
    or. r0, r4, r3
    stw r4, 0x4(r30)
    stw r3, 0x0(r30)
    bne lbl_fn_806A12E8_00001098
    li r3, -0x5
    b lbl_fn_806A12E8_0000109C
lbl_fn_806A12E8_00001098:
    bl fn_806A1C40
lbl_fn_806A12E8_0000109C:
    cmpwi r3, 0x0
    bne lbl_fn_806A12E8_000010A8
    b lbl_fn_806A12E8_00001178
lbl_fn_806A12E8_000010A8:
    bl NWC24SuspendScheduler
    cmpwi r3, 0x0
    bge lbl_fn_806A12E8_000010B8
    b lbl_fn_806A12E8_00001178
lbl_fn_806A12E8_000010B8:
    li r3, 0x1
    bl fn_806A14C4
    cmpwi r3, 0x0
    bge lbl_fn_806A12E8_000010CC
    b lbl_fn_806A12E8_00001144
lbl_fn_806A12E8_000010CC:
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x8(r1)
    bne lbl_fn_806A12E8_000010E4
    li r31, -0x3
    b lbl_fn_806A12E8_0000112C
lbl_fn_806A12E8_000010E4:
    lis r3, 0x6fc1
    lis r4, 0x24
    subi r5, r3, 0x1
    subi r0, r4, 0x790e
    stw r5, 0x4(r30)
    mr r3, r30
    addi r4, r1, 0x8
    stw r0, 0x0(r30)
    bl fn_806A18C4
    lwz r0, 0x0(r30)
    lis r5, 0x8000
    lwz r6, 0x4(r30)
    mr r31, r3
    addi r3, r5, 0x31c0
    li r4, 0x20
    stw r6, 0x31c4(r5)
    stw r0, 0x31c0(r5)
    bl fn_805ED1C0
lbl_fn_806A12E8_0000112C:
    li r3, 0x0
    bl fn_806A14C4
    cmpwi r31, 0x0
    blt lbl_fn_806A12E8_00001140
    mr r31, r3
lbl_fn_806A12E8_00001140:
    mr r3, r31
lbl_fn_806A12E8_00001144:
    addi r0, r3, 0x24
    mr r31, r3
    cmplwi r0, 0x1
    bgt lbl_fn_806A12E8_00001158
    li r31, 0x0
lbl_fn_806A12E8_00001158:
    bl fn_806A1634
    cmpwi r3, 0x0
    bge lbl_fn_806A12E8_00001174
    cmpwi r31, 0x0
    beq lbl_fn_806A12E8_00001170
    mr r3, r31
lbl_fn_806A12E8_00001170:
    mr r31, r3
lbl_fn_806A12E8_00001174:
    mr r3, r31
lbl_fn_806A12E8_00001178:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A1450(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_80880404
    cmpwi r0, 0x0
    bne lbl_fn_806A1450_000011B8
    lwz r3, lbl_8087EDD0
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_80880404
lbl_fn_806A1450_000011B8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A1488(void)
{
    nofralloc
    lwz r3, lbl_80880400
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_806A149C(void)
{
    nofralloc
    lwz r3, lbl_80880400
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_806A14B0(void)
{
    nofralloc
    lwz r3, lbl_80880400
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_806A14C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    cmpwi r30, 0x0
    beq lbl_fn_806A14C4_0000125C
    lwz r0, lbl_80880400
    cmpwi r0, 0x0
    bne lbl_fn_806A14C4_00001244
    li r0, 0x3
    stw r0, lbl_80880400
    b lbl_fn_806A14C4_00001284
lbl_fn_806A14C4_00001244:
    cmpwi r0, 0x1
    bne lbl_fn_806A14C4_00001254
    li r31, -0xa
    b lbl_fn_806A14C4_00001284
lbl_fn_806A14C4_00001254:
    li r31, -0x1a
    b lbl_fn_806A14C4_00001284
lbl_fn_806A14C4_0000125C:
    lwz r4, lbl_80880400
    subi r0, r4, 0x3
    cntlzw r0, r0
    srwi. r4, r0, 5
    beq lbl_fn_806A14C4_00001278
    li r0, 0x0
    stw r0, lbl_80880400
lbl_fn_806A14C4_00001278:
    cmpwi r4, 0x0
    bne lbl_fn_806A14C4_00001284
    li r31, -0x9
lbl_fn_806A14C4_00001284:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void NWC24SuspendScheduler(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80833E20@ha
    addi r31, r31, lbl_80833E20@l
    stw r30, 0x8(r1)
    lwz r0, lbl_80880408
    clrlwi. r0, r0, 31
    bne lbl_NWC24SuspendScheduler_00001324
    bl OSDisableInterrupts
    lwz r0, lbl_80880408
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_NWC24SuspendScheduler_0000131C
    addi r3, r31, 0x0
    bl fn_805F30F0
    addi r3, r31, 0x18
    bl fn_805F30F0
    addi r3, r31, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r31, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_80880408
    ori r0, r0, 0x1
    stw r0, lbl_80880408
lbl_NWC24SuspendScheduler_0000131C:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_NWC24SuspendScheduler_00001324:
    addi r3, r31, 0x18
    bl fn_805F3130
    bl fn_806A1AC0
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_NWC24SuspendScheduler_00001350
    lwz r4, lbl_8088040C
    lwz r0, lbl_80880410
    addi r4, r4, 0x1
    stw r4, lbl_8088040C
    subf r30, r0, r3
lbl_NWC24SuspendScheduler_00001350:
    addi r3, r31, 0x18
    bl fn_805F3210
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A1634(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80833E20@ha
    addi r31, r31, lbl_80833E20@l
    stw r30, 0x8(r1)
    lwz r0, lbl_80880408
    clrlwi. r0, r0, 31
    bne lbl_fn_806A1634_000013F4
    bl OSDisableInterrupts
    lwz r0, lbl_80880408
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_fn_806A1634_000013EC
    addi r3, r31, 0x0
    bl fn_805F30F0
    addi r3, r31, 0x18
    bl fn_805F30F0
    addi r3, r31, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r31, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_80880408
    ori r0, r0, 0x1
    stw r0, lbl_80880408
lbl_fn_806A1634_000013EC:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_806A1634_000013F4:
    addi r3, r31, 0x18
    bl fn_805F3130
    lwz r0, lbl_80880410
    cmpwi r0, 0x0
    ble lbl_fn_806A1634_0000141C
    lwz r0, lbl_8088040C
    cmpwi r0, 0x0
    bne lbl_fn_806A1634_0000141C
    li r30, 0x0
    b lbl_fn_806A1634_00001440
lbl_fn_806A1634_0000141C:
    bl fn_806A1AD0
    lwz r4, lbl_8088040C
    mr r30, r3
    cmpwi r4, 0x0
    ble lbl_fn_806A1634_00001440
    subi r4, r4, 0x1
    lwz r0, lbl_80880410
    stw r4, lbl_8088040C
    subf r30, r0, r3
lbl_fn_806A1634_00001440:
    addi r3, r31, 0x18
    bl fn_805F3210
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A1724(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80833E20@ha
    addi r30, r30, lbl_80833E20@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_806A1724_000014A0
    li r3, -0x1
    b lbl_fn_806A1724_000014D8
lbl_fn_806A1724_000014A0:
    bl fn_806A1488
    cmpwi r3, 0x0
    bne lbl_fn_806A1724_000014B8
    bl fn_806A149C
    cmpwi r3, 0x0
    beq lbl_fn_806A1724_000014C0
lbl_fn_806A1724_000014B8:
    li r3, -0xa
    b lbl_fn_806A1724_000014D8
lbl_fn_806A1724_000014C0:
    bl fn_806A14B0
    cmpwi r3, 0x0
    beq lbl_fn_806A1724_000014D4
    li r3, -0x1a
    b lbl_fn_806A1724_000014D8
lbl_fn_806A1724_000014D4:
    li r3, 0x0
lbl_fn_806A1724_000014D8:
    cmpwi r3, 0x0
    bge lbl_fn_806A1724_000014E4
    b lbl_fn_806A1724_000015E4
lbl_fn_806A1724_000014E4:
    lwz r0, lbl_80880408
    clrlwi. r0, r0, 31
    bne lbl_fn_806A1724_00001548
    bl OSDisableInterrupts
    lwz r0, lbl_80880408
    mr r31, r3
    clrlwi. r0, r0, 31
    bne lbl_fn_806A1724_00001540
    addi r3, r30, 0x0
    bl fn_805F30F0
    addi r3, r30, 0x18
    bl fn_805F30F0
    addi r3, r30, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r30, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_80880408
    ori r0, r0, 0x1
    stw r0, lbl_80880408
lbl_fn_806A1724_00001540:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_806A1724_00001548:
    addi r3, r30, 0x0
    bl fn_805F3130
    addi r3, r30, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r31, lbl_807BC9C4@ha
    lis r4, lbl_807BC9B0@ha
    addi r3, r31, lbl_807BC9C4@l
    addi r5, r1, 0x8
    addi r4, r4, lbl_807BC9B0@l
    li r6, 0x0
    bl fn_806A2138
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_fn_806A1724_000015D8
    stw r28, 0x40(r30)
    addi r3, r31, lbl_807BC9C4@l
    lwz r4, 0x8(r1)
    addi r6, r30, 0x40
    addi r8, r30, 0x60
    li r5, 0x22
    li r7, 0x20
    li r9, 0x20
    bl fn_806A21E4
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_fn_806A1724_000015BC
    lwz r29, 0x60(r30)
lbl_fn_806A1724_000015BC:
    lis r3, lbl_807BC9C4@ha
    lwz r4, 0x8(r1)
    addi r3, r3, lbl_807BC9C4@l
    bl fn_806A21B0
    cmpwi r29, 0x0
    blt lbl_fn_806A1724_000015D8
    mr r29, r3
lbl_fn_806A1724_000015D8:
    addi r3, r30, 0x0
    bl fn_805F3210
    mr r3, r29
lbl_fn_806A1724_000015E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A18C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r29, lbl_80833E20@ha
    mr r27, r3
    mr r31, r4
    addi r29, r29, lbl_80833E20@l
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_806A18C4_0000163C
    li r3, -0x1
    b lbl_fn_806A18C4_00001660
lbl_fn_806A18C4_0000163C:
    bl fn_806A1488
    cmpwi r3, 0x0
    bne lbl_fn_806A18C4_00001654
    bl fn_806A149C
    cmpwi r3, 0x0
    beq lbl_fn_806A18C4_0000165C
lbl_fn_806A18C4_00001654:
    li r3, -0xa
    b lbl_fn_806A18C4_00001660
lbl_fn_806A18C4_0000165C:
    li r3, 0x0
lbl_fn_806A18C4_00001660:
    cmpwi r3, 0x0
    bge lbl_fn_806A18C4_0000166C
    b lbl_fn_806A18C4_000017A8
lbl_fn_806A18C4_0000166C:
    lwz r0, lbl_80880408
    clrlwi. r0, r0, 31
    bne lbl_fn_806A18C4_000016D0
    bl OSDisableInterrupts
    lwz r0, lbl_80880408
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_fn_806A18C4_000016C8
    addi r3, r29, 0x0
    bl fn_805F30F0
    addi r3, r29, 0x18
    bl fn_805F30F0
    addi r3, r29, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r29, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_80880408
    ori r0, r0, 0x1
    stw r0, lbl_80880408
lbl_fn_806A18C4_000016C8:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_806A18C4_000016D0:
    addi r3, r29, 0x0
    bl fn_805F3130
    lis r30, lbl_807BC9D8@ha
    lis r4, lbl_807BC9B0@ha
    addi r3, r30, lbl_807BC9D8@l
    addi r5, r1, 0x8
    addi r4, r4, lbl_807BC9B0@l
    li r6, 0x0
    bl fn_806A2138
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_fn_806A18C4_0000179C
    lwz r4, 0x8(r1)
    addi r3, r30, lbl_807BC9D8@l
    addi r8, r29, 0x60
    li r5, 0xf
    li r6, 0x0
    li r7, 0x0
    li r9, 0x20
    bl fn_806A21E4
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_fn_806A18C4_00001780
    lwz r28, 0x60(r29)
    cmpwi r28, 0x0
    beq lbl_fn_806A18C4_00001748
    cmpwi r28, -0x23
    beq lbl_fn_806A18C4_00001748
    cmpwi r28, -0x24
    bne lbl_fn_806A18C4_00001780
lbl_fn_806A18C4_00001748:
    li r0, 0x0
    cmplw r27, r0
    beq lbl_fn_806A18C4_00001768
    addi r3, r29, 0x60
    lwz r0, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r3, 0x4(r27)
    stw r0, 0x0(r27)
lbl_fn_806A18C4_00001768:
    li r0, 0x0
    cmplw r31, r0
    beq lbl_fn_806A18C4_00001780
    addi r3, r29, 0x60
    lwz r0, 0xc(r3)
    stw r0, 0x0(r31)
lbl_fn_806A18C4_00001780:
    lis r3, lbl_807BC9D8@ha
    lwz r4, 0x8(r1)
    addi r3, r3, lbl_807BC9D8@l
    bl fn_806A21B0
    cmpwi r28, 0x0
    blt lbl_fn_806A18C4_0000179C
    mr r28, r3
lbl_fn_806A18C4_0000179C:
    addi r3, r29, 0x0
    bl fn_805F3210
    mr r3, r28
lbl_fn_806A18C4_000017A8:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A1A80(void)
{
    nofralloc
    mr r5, r3
    li r3, 0x0
    li r4, 0x6
    b fn_806A1AE0
}

asm void fn_806A1A90(void)
{
    nofralloc
    mr r5, r3
    li r3, 0x0
    li r4, 0x7
    b fn_806A1AE0
}

asm void fn_806A1AA0(void)
{
    nofralloc
    li r3, 0x0
    li r4, 0x8
    li r5, 0x0
    b fn_806A1AE0
}

asm void fn_806A1AB0(void)
{
    nofralloc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    b fn_806A1AE0
}

asm void fn_806A1AC0(void)
{
    nofralloc
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    b fn_806A1AE0
}

asm void fn_806A1AD0(void)
{
    nofralloc
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    b fn_806A1AE0
}

asm void fn_806A1AE0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r31, lbl_80833E20@ha
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r31, lbl_80833E20@l
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_806A1AE0_0000185C
    li r3, -0x1
    b lbl_fn_806A1AE0_00001968
lbl_fn_806A1AE0_0000185C:
    lwz r0, lbl_80880408
    clrlwi. r0, r0, 31
    bne lbl_fn_806A1AE0_000018C0
    bl OSDisableInterrupts
    lwz r0, lbl_80880408
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_fn_806A1AE0_000018B8
    addi r3, r31, 0x0
    bl fn_805F30F0
    addi r3, r31, 0x18
    bl fn_805F30F0
    addi r3, r31, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r31, 0x60
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_80880408
    ori r0, r0, 0x1
    stw r0, lbl_80880408
lbl_fn_806A1AE0_000018B8:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_806A1AE0_000018C0:
    addi r3, r31, 0x0
    bl fn_805F3130
    lis r4, lbl_807BC9B0@ha
    mr r3, r27
    addi r4, r4, lbl_807BC9B0@l
    addi r5, r1, 0x8
    li r6, 0x0
    bl fn_806A2138
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_fn_806A1AE0_0000195C
    lwz r4, 0x8(r1)
    mr r3, r27
    mr r5, r28
    addi r8, r31, 0x60
    li r6, 0x0
    li r7, 0x0
    li r9, 0x20
    bl fn_806A21E4
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_fn_806A1AE0_00001944
    lwz r30, 0x60(r31)
    cmpwi r30, -0x2
    beq lbl_fn_806A1AE0_0000192C
    cmpwi r30, -0x21
    bne lbl_fn_806A1AE0_00001944
lbl_fn_806A1AE0_0000192C:
    li r0, 0x0
    cmplw r29, r0
    beq lbl_fn_806A1AE0_00001944
    addi r3, r31, 0x60
    lwz r0, 0x4(r3)
    stw r0, 0x0(r29)
lbl_fn_806A1AE0_00001944:
    lwz r4, 0x8(r1)
    mr r3, r27
    bl fn_806A21B0
    cmpwi r3, 0x0
    bge lbl_fn_806A1AE0_0000195C
    mr r30, r3
lbl_fn_806A1AE0_0000195C:
    addi r3, r31, 0x0
    bl fn_805F3210
    mr r3, r30
lbl_fn_806A1AE0_00001968:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A1C40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_806A1CD8
    mr r30, r4
    mr r31, r3
    li r29, 0x0
lbl_fn_806A1C40_000019A8:
    addi r0, r29, 0x1
    mr r3, r31
    mr r4, r30
    subfic r5, r0, 0x35
    bl fn_80696348
    clrlwi. r0, r4, 31
    beq lbl_fn_806A1C40_000019DC
    subfic r5, r29, 0x2a
    li r4, 0x635
    li r3, 0x0
    bl fn_80696324
    xor r30, r30, r4
    xor r31, r31, r3
lbl_fn_806A1C40_000019DC:
    addi r29, r29, 0x1
    cmpwi r29, 0x2b
    blt lbl_fn_806A1C40_000019A8
    or. r0, r30, r31
    beq lbl_fn_806A1C40_000019F8
    li r3, -0x25
    b lbl_fn_806A1C40_000019FC
lbl_fn_806A1C40_000019F8:
    li r3, 0x0
lbl_fn_806A1C40_000019FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A1CD8(void)
{
    nofralloc
    li r9, -0x1
    lis r7, 0x20
    lis r6, 0x5e5e
    stwu r1, -0x20(r1)
    subi r7, r7, 0x1
    and r8, r4, r9
    addi r0, r6, 0x5e5e
    stw r31, 0x1c(r1)
    and r3, r3, r7
    lis r5, 0xffff
    xor r8, r8, r0
    stw r30, 0x18(r1)
    and r8, r8, r9
    xori r3, r3, 0x5e5e
    clrlslwi r0, r8, 31, 21
    li r6, -0x100
    and r3, r3, r7
    rotrwi r8, r8, 1
    or r3, r3, r0
    stw r29, 0x14(r1)
    rlwimi r8, r3, 31, 0, 0
    lis r4, 0xff01
    srwi r7, r3, 1
    addi r5, r5, 0xff
    rotrwi r30, r8, 8
    extrwi r29, r3, 8, 15
    and r12, r7, r9
    li r0, 0x0
    rlwimi r30, r3, 23, 0, 7
    and r31, r8, r6
    rlwimi r31, r30, 0, 24, 31
    rlwinm r11, r3, 31, 16, 23
    and r30, r31, r5
    and r12, r12, r9
    rlwimi r0, r29, 8, 24, 31
    subi r4, r4, 0x1
    or r12, r12, r0
    or r11, r30, r11
    and r30, r11, r4
    clrlwi r31, r8, 24
    li r0, 0x0
    clrlslwi r11, r8, 24, 16
    lis r10, 0x100
    and r12, r12, r9
    rlwimi r0, r31, 16, 16, 31
    or r30, r30, r11
    or r29, r12, r0
    extrwi r12, r3, 8, 23
    subi r0, r10, 0x1
    li r10, 0x0
    rlwimi r10, r12, 24, 8, 31
    and r11, r29, r9
    and r12, r30, r0
    extlwi r3, r3, 8, 23
    or r3, r12, r3
    or r12, r11, r10
    and r10, r3, r9
    lis r3, lbl_80767378@ha
    and r31, r10, r9
    rotlwi r30, r8, 16
    extrwi r11, r31, 4, 24
    addi r3, r3, lbl_80767378@l
    rlwimi r30, r7, 16, 0, 15
    clrlwi r10, r31, 28
    and r29, r12, r6
    rotlwi r12, r8, 8
    lbzx r11, r3, r11
    rlwimi r12, r7, 8, 0, 23
    lbzx r7, r3, r10
    rlwimi r29, r30, 0, 24, 31
    slwi r8, r11, 4
    clrlslwi r10, r12, 24, 8
    and r11, r29, r5
    or r10, r11, r10
    or r7, r8, r7
    and r11, r31, r6
    li r8, 0x0
    rlwimi r11, r7, 0, 24, 31
    and r12, r10, r9
    rotrwi r10, r11, 8
    li r7, 0x0
    rlwimi r10, r12, 24, 0, 7
    and r31, r11, r5
    extrwi r11, r10, 4, 24
    and r12, r12, r9
    clrlwi r10, r10, 28
    lbzx r11, r3, r11
    lbzx r10, r3, r10
    slwi r11, r11, 4
    or r10, r11, r10
    clrlwi r11, r10, 24
    clrlslwi r10, r10, 24, 8
    rlwimi r8, r11, 8, 24, 31
    or r10, r31, r10
    or r8, r12, r8
    rotlwi r12, r10, 16
    and r11, r10, r4
    rlwimi r12, r8, 16, 0, 15
    and r10, r8, r9
    extrwi r8, r12, 4, 24
    clrlwi r4, r12, 28
    lbzx r8, r3, r8
    lbzx r4, r3, r4
    slwi r8, r8, 4
    or r4, r8, r4
    clrlwi r8, r4, 24
    clrlslwi r4, r4, 24, 16
    or r29, r11, r4
    rlwimi r7, r8, 16, 16, 31
    or r11, r10, r7
    lis r4, 0x1
    rotlwi r8, r29, 8
    and r31, r29, r0
    rlwimi r8, r11, 8, 0, 23
    and r12, r11, r9
    extrwi r10, r8, 4, 24
    subi r0, r4, 0x4c4d
    lbzx r11, r3, r10
    clrlwi r8, r8, 28
    lbzx r10, r3, r8
    li r8, 0x0
    slwi r11, r11, 4
    lis r7, 0xb3b4
    or r11, r11, r10
    clrlwi r10, r11, 24
    subi r7, r7, 0x4c4d
    rlwimi r8, r10, 24, 8, 31
    slwi r4, r11, 24
    or r10, r12, r8
    extrwi r8, r10, 4, 24
    or r12, r31, r4
    clrlwi r4, r10, 28
    lbzx r8, r3, r8
    and r11, r10, r6
    lbzx r4, r3, r4
    slwi r6, r8, 4
    and r8, r12, r9
    or r4, r6, r4
    rlwimi r11, r4, 0, 24, 31
    and r10, r8, r9
    extrwi r6, r11, 4, 16
    extrwi r4, r11, 4, 20
    lbzx r6, r3, r6
    lbzx r3, r3, r4
    and r8, r11, r5
    slwi r5, r6, 4
    and r4, r10, r9
    or r3, r5, r3
    clrlslwi r3, r3, 24, 8
    or r3, r8, r3
    clrlslwi r5, r3, 21, 10
    extrwi r3, r3, 10, 11
    rlwimi r5, r4, 10, 22, 31
    rlwimi r3, r4, 10, 0, 21
    xor r4, r3, r7
    xor r3, r5, r0
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_806A1F5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r30, lbl_80833FA0@ha
    mr r27, r3
    mr r28, r4
    addi r30, r30, lbl_80833FA0@l
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_806A1F5C_00001CD4
    li r3, -0x1
    b lbl_fn_806A1F5C_00001CD8
lbl_fn_806A1F5C_00001CD4:
    li r3, 0x0
lbl_fn_806A1F5C_00001CD8:
    cmpwi r3, 0x0
    bge lbl_fn_806A1F5C_00001CE4
    b lbl_fn_806A1F5C_00001DCC
lbl_fn_806A1F5C_00001CE4:
    lwz r0, lbl_80880418
    cmpwi r0, 0x0
    bne lbl_fn_806A1F5C_00001D3C
    bl OSDisableInterrupts
    lwz r0, lbl_80880418
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_806A1F5C_00001D34
    addi r3, r30, 0x80
    bl fn_805F30F0
    addi r3, r30, 0xa0
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r30, 0xc0
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r0, 0x1
    stw r0, lbl_80880418
lbl_fn_806A1F5C_00001D34:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_806A1F5C_00001D3C:
    addi r3, r30, 0x80
    bl fn_805F3130
    lis r31, lbl_807BCA0C@ha
    lis r4, lbl_807BC9F8@ha
    addi r3, r31, lbl_807BCA0C@l
    addi r5, r1, 0x8
    addi r4, r4, lbl_807BC9F8@l
    li r6, 0x0
    bl fn_806A2138
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_fn_806A1F5C_00001DC0
    addi r6, r30, 0xa0
    stw r27, 0xa0(r30)
    lwz r4, 0x8(r1)
    addi r3, r31, lbl_807BCA0C@l
    stw r28, 0x4(r6)
    addi r8, r30, 0xc0
    li r5, 0x17
    li r7, 0x20
    li r9, 0x20
    bl fn_806A21E4
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_fn_806A1F5C_00001DA4
    lwz r29, 0xc0(r30)
lbl_fn_806A1F5C_00001DA4:
    lis r3, lbl_807BCA0C@ha
    lwz r4, 0x8(r1)
    addi r3, r3, lbl_807BCA0C@l
    bl fn_806A21B0
    cmpwi r29, 0x0
    blt lbl_fn_806A1F5C_00001DC0
    mr r29, r3
lbl_fn_806A1F5C_00001DC0:
    addi r3, r30, 0x80
    bl fn_805F3210
    mr r3, r29
lbl_fn_806A1F5C_00001DCC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void NWC24iSynchronizeRtcCounter(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
lbl_NWC24iSynchronizeRtcCounter_00001DFC:
    bl SCCheckStatus
    cmplwi r3, 0x2
    bne lbl_NWC24iSynchronizeRtcCounter_00001E10
    li r3, -0x1
    b lbl_NWC24iSynchronizeRtcCounter_00001E40
lbl_NWC24iSynchronizeRtcCounter_00001E10:
    cmpwi r3, 0x0
    bne lbl_NWC24iSynchronizeRtcCounter_00001DFC
    bl fn_80624B10
    mr r31, r3
    bl OSGetTime
    lis r6, 0x8000
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r6, r0, 2
    bl __div2i
    subfc r31, r31, r4
    li r3, 0x0
lbl_NWC24iSynchronizeRtcCounter_00001E40:
    cmpwi r3, 0x0
    beq lbl_NWC24iSynchronizeRtcCounter_00001E4C
    b lbl_NWC24iSynchronizeRtcCounter_00001E60
lbl_NWC24iSynchronizeRtcCounter_00001E4C:
    neg r0, r30
    mr r3, r31
    or r0, r0, r30
    srwi r4, r0, 31
    bl fn_806A1F5C
lbl_NWC24iSynchronizeRtcCounter_00001E60:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A2138(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    bne lbl_fn_806A2138_00001E9C
    li r3, -0x3
    b lbl_fn_806A2138_00001EDC
lbl_fn_806A2138_00001E9C:
    mr r3, r4
    mr r4, r6
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, 0x0(r31)
    bge lbl_fn_806A2138_00001ED8
    cmpwi r3, -0x6
    bne lbl_fn_806A2138_00001EC4
    li r3, -0x1d
    b lbl_fn_806A2138_00001EDC
lbl_fn_806A2138_00001EC4:
    cmpwi r3, -0x8
    li r3, -0x2a
    bne lbl_fn_806A2138_00001EDC
    li r3, -0x1a
    b lbl_fn_806A2138_00001EDC
lbl_fn_806A2138_00001ED8:
    li r3, 0x0
lbl_fn_806A2138_00001EDC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A21B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x14(r1)
    bl fn_8061C8A0
    cmpwi r3, 0x0
    li r3, 0x0
    bge lbl_fn_806A21B0_00001F14
    li r3, -0x2a
lbl_fn_806A21B0_00001F14:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A21E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    mr r5, r6
    mr r6, r7
    mr r7, r8
    mr r8, r9
    bl fn_8061D080
    cmpwi r3, 0x0
    li r3, 0x0
    bge lbl_fn_806A21E4_00001F5C
    li r3, -0x2a
lbl_fn_806A21E4_00001F5C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A222C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    lis r11, fn_806A2290@ha
    mr r5, r6
    mr r6, r7
    mr r7, r8
    mr r8, r9
    addi r9, r11, fn_806A2290@l
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    bge lbl_fn_806A222C_00001FAC
    li r3, -0x2a
    b lbl_fn_806A222C_00001FB8
lbl_fn_806A222C_00001FAC:
    li r0, 0x1
    li r3, 0x0
    stw r0, lbl_80880420
lbl_fn_806A222C_00001FB8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A2288(void)
{
    nofralloc
    lwz r3, lbl_80880420
    blr
}

asm void fn_806A2290(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_806A2290_00001FDC
    stw r3, 0x0(r4)
lbl_fn_806A2290_00001FDC:
    li r0, 0x0
    li r3, 0x0
    stw r0, lbl_80880420
    blr
}

asm void NWC24iPrepareShutdown(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    bl fn_806A1450
    lis r5, fn_806A236C@ha
    lis r4, lbl_80834080@ha
    addi r5, r5, fn_806A236C@l
    li r0, 0x6e
    addi r3, r4, lbl_80834080@l
    stw r5, lbl_80834080@l(r4)
    stw r0, 0x4(r3)
    bl OSRegisterShutdownFunction
    lwz r0, lbl_8087EDD8
    cmpwi r0, 0x0
    bge lbl_NWC24iPrepareShutdown_00002050
    lis r3, lbl_807BCA20@ha
    lis r4, lbl_807BCA38@ha
    addi r3, r3, lbl_807BCA20@l
    la r5, lbl_8087EDD8
    addi r4, r4, lbl_807BCA38@l
    li r6, 0x1
    bl fn_806A2138
    mr r31, r3
lbl_NWC24iPrepareShutdown_00002050:
    li r0, 0x5
    stw r0, lbl_80880428
lbl_NWC24iPrepareShutdown_00002058:
    bl SCCheckStatus
    cmplwi r3, 0x2
    beq lbl_NWC24iPrepareShutdown_0000207C
    cmplwi r3, 0x1
    beq lbl_NWC24iPrepareShutdown_00002058
    addi r3, r1, 0x8
    bl fn_80624970
    lbz r3, 0x9(r1)
    bl fn_805F6DF0
lbl_NWC24iPrepareShutdown_0000207C:
    bl fn_805EC060
    clrlwi r0, r3, 24
    cmplwi r0, 0x40
    bne lbl_NWC24iPrepareShutdown_00002094
    li r3, 0x1
    bl fn_806A1724
lbl_NWC24iPrepareShutdown_00002094:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
