#include "revolution/types.h"

/* External function declarations */
extern void IPCCltInit(void);
extern void OSCancelAlarm(void);
extern void OSCreateAlarm(void);
extern void OSGetTime(void);
extern void OSReport(const char* msg, ...);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805EC3B0(void);
extern void fn_805EDC50(void);
extern void fn_805EDC80(void);
extern void fn_80626AA0(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80626EC0(void);
extern void fn_80626F10(void);
extern void fn_806270D0(void);
extern void fn_80627180(void);
extern void fn_806272C0(void);
extern void fn_80627400(void);
extern void fn_806275B0(void);
extern void fn_80627900(void);
extern void fn_80627D50(void);
extern void fn_80627DE0(void);
extern void fn_80627ED0(void);
extern void fn_80628000(void);
extern void fn_80628090(void);
extern void fn_80628140(void);
extern void fn_80628170(void);
extern void fn_80628240(void);
extern void fn_80628270(void);
extern void fn_80628310(void);
extern void fn_80628330(void);
extern void fn_8062A1CC(void);
extern void fn_8062A230(void);
extern void fn_8062A31C(void);
extern void fn_8062CA30(void);
extern void fn_80631014(void);
extern void fn_80632520(void);
extern void fn_80633C38(void);
extern void fn_80635694(void);
extern void fn_80636DF4(void);
extern void fn_8063A1C0(void);
extern void fn_8063A778(void);
extern void fn_8063B1E4(void);
extern void fn_8063B41C(void);
extern void fn_8063B448(void);
extern void fn_8063B574(void);
extern void fn_8063EE48(void);
extern void fn_8063F8CC(void);
extern void fn_806406B8(void);
extern void fn_80644F60(void);
extern void fn_80645130(void);
extern void fn_80645288(void);
extern void fn_806454BC(void);
extern void fn_8064625C(void);
extern void fn_8064829C(void);
extern void fn_8064E418(void);
extern void fn_80651FBC(void);
extern void fn_8065BA40(void);
extern void fn_8065BB40(void);
extern void fn_8065BCF0(void);
extern void fn_8065BE40(void);
extern void fn_8065C630(void);
extern void fn_8065C6B0(void);
extern void fn_8065C750(void);
extern void fn_8065CDA0(void);
extern void fn_8068093C(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80764C40[];
extern u8 lbl_8081C240[];
extern u8 lbl_8081C280[];
extern u8 lbl_8081C2E0[];
extern u8 lbl_8081D2E0[];
extern u8 lbl_8081E2E0[];
extern u8 lbl_8081EAC0[];
extern u8 lbl_8081FAC0[];
extern u8 lbl_8081FAF0[];
extern u8 lbl_8081FB78[];

/* Small data declarations */
extern u32 lbl_8087EA78;
extern u32 lbl_8087EA7C;
extern u32 lbl_8087EA80;
extern u32 lbl_8087EA84;
extern u32 lbl_8087EAB8;
extern u32 lbl_8087EAC0;
extern u32 lbl_8087EAC8;
extern u32 lbl_8087EACC;
extern u32 lbl_80880158;
extern u32 lbl_80880159;
extern u32 lbl_8088015C;
extern u32 lbl_80880160;
extern u32 lbl_80880164;
extern u32 lbl_80880168;
extern u32 lbl_8088016C;
extern u32 lbl_80880170;
extern u32 lbl_80880174;
extern u32 lbl_80880178;
extern u32 lbl_8088017C;
extern u32 lbl_80880180;
extern u32 lbl_80880184;

/* Function declarations */
void fn_806286D0(void);
void fn_80628880(void);
void fn_806288B0(void);
void fn_80628920(void);
void fn_80628960(void);
void fn_80628990(void);
void fn_806289D0(void);
void fn_80628A70(void);
void fn_80628C20(void);
void fn_80628DC0(void);
void fn_80628EB0(void);
void fn_80628F90(void);
void fn_806291A0(void);
void fn_80629330(void);
void fn_80629340(void);
void fn_80629550(void);
void fn_80629600(void);
void fn_80629650(void);
void fn_80629670(void);
void fn_806296E0(void);
void fn_80629710(void);
void fn_80629720(void);
void fn_80629750(void);
void fn_80629810(void);
void fn_80629830(void);
void fn_80629850(void);
void fn_80629870(void);
void fn_80629890(void);
void fn_806298B0(void);
void fn_806298D0(void);
void fn_806298F0(void);
void fn_80629910(void);
void fn_806299F0(void);
void fn_80629A30(void);
void fn_80629A60(void);
void fn_80629AA0(void);
void fn_80629E20(void);
void fn_80629E90(void);
void fn_80629EA4(void);
void fn_80629ED8(void);
void fn_80629F78(void);
void fn_80629F88(void);
void fn_80629F98(void);
void fn_80629FA8(void);

asm void fn_806286D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lhz r5, 0x0(r4)
    mr r27, r4
    lhz r0, 0x4(r4)
    cmplwi r5, 0x2100
    add r3, r4, r0
    addi r6, r3, 0x8
    bne lbl_fn_806286D0_00000038
    li r28, 0x2
    b lbl_fn_806286D0_00000054
lbl_fn_806286D0_00000038:
    cmplwi r5, 0x2200
    bne lbl_fn_806286D0_00000048
    li r28, 0x3
    b lbl_fn_806286D0_00000054
lbl_fn_806286D0_00000048:
    cmplwi r5, 0x2000
    bne lbl_fn_806286D0_00000054
    li r28, 0x0
lbl_fn_806286D0_00000054:
    cmplwi r5, 0x2100
    bne lbl_fn_806286D0_00000178
    lis r3, lbl_8081FAF0@ha
    lhz r4, 0x2(r4)
    addi r30, r3, lbl_8081FAF0@l
    lhz r0, 0x7e(r30)
    cmplw r4, r0
    ble lbl_fn_806286D0_00000178
    lbz r0, 0x1(r6)
    lbz r3, 0x0(r6)
    addi r6, r6, 0x2
    clrlslwi r0, r0, 24, 8
    add r0, r3, r0
    clrlwi r0, r0, 16
    andi. r0, r0, 0xcfff
    ori r31, r0, 0x1000
    srawi r29, r31, 8
    b lbl_fn_806286D0_00000168
lbl_fn_806286D0_0000009C:
    mr r4, r6
    mr r3, r28
    mr r6, r27
    bl fn_80629340
    lhz r3, 0x4(r27)
    lhz r0, 0x7c(r30)
    lhz r4, 0x2(r27)
    add r0, r3, r0
    sth r0, 0x4(r27)
    clrlwi r0, r0, 16
    lhz r5, 0x7c(r30)
    add r3, r27, r0
    addi r6, r3, 0xa
    subf r0, r5, r4
    sth r0, 0x2(r27)
    stb r31, 0x8(r3)
    stb r29, 0x9(r3)
    lhz r3, 0x2(r27)
    lhz r0, 0x7e(r30)
    cmplw r3, r0
    ble lbl_fn_806286D0_0000010C
    lhz r0, 0x7c(r30)
    stb r0, 0x0(r6)
    lhz r0, 0x7c(r30)
    srawi r0, r0, 8
    stb r0, 0x1(r6)
    addi r6, r6, 0x2
    b lbl_fn_806286D0_00000128
lbl_fn_806286D0_0000010C:
    subi r0, r3, 0x4
    stb r0, 0x0(r6)
    lhz r3, 0x2(r27)
    subi r0, r3, 0x4
    srawi r0, r0, 8
    stb r0, 0x1(r6)
    addi r6, r6, 0x2
lbl_fn_806286D0_00000128:
    lhz r3, 0x6(r27)
    cmpwi r3, 0x0
    beq lbl_fn_806286D0_00000168
    subi r0, r3, 0x1
    sth r0, 0x6(r27)
    clrlwi. r0, r0, 16
    bne lbl_fn_806286D0_00000168
    li r0, 0x1900
    lis r3, lbl_8081C240@ha
    sth r0, 0x0(r27)
    addi r3, r3, lbl_8081C240@l
    mr r5, r27
    li r4, 0x0
    lbz r3, 0x1f(r3)
    bl fn_80626F10
    b lbl_fn_806286D0_00000194
lbl_fn_806286D0_00000168:
    lhz r5, 0x7e(r30)
    lhz r0, 0x2(r27)
    cmplw r0, r5
    bgt lbl_fn_806286D0_0000009C
lbl_fn_806286D0_00000178:
    lhz r5, 0x2(r27)
    mr r4, r6
    mr r3, r28
    mr r6, r27
    bl fn_80629340
    mr r3, r27
    bl fn_80626D50
lbl_fn_806286D0_00000194:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80628880(void)
{
    nofralloc
    lis r6, lbl_8081C240@ha
    li r0, 0x0
    addi r6, r6, lbl_8081C240@l
    stb r0, 0x1e(r6)
    stb r0, 0x1a(r6)
    stb r0, 0x1b(r6)
    stb r0, 0x1c(r6)
    stb r3, 0x1f(r6)
    stb r4, 0x20(r6)
    sth r5, 0x12(r6)
    blr
}

asm void fn_806288B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8081C240@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r5, r5, lbl_8081C240@l
    stb r0, 0x13(r1)
    li r0, 0x2
    lhz r4, 0x0(r3)
    sth r4, 0xc(r1)
    lbz r4, 0x1f(r5)
    lhz r6, 0x2(r3)
    addi r3, r1, 0x8
    sth r6, 0xe(r1)
    sth r4, 0x10(r1)
    stb r0, 0x1e(r5)
    bl fn_80628F90
    lis r4, fn_80628310@ha
    addi r3, r1, 0x8
    addi r4, r4, fn_80628310@l
    bl fn_806291A0
    lwz r0, 0x24(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80628920(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8081C240@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_8081C240@l
    li r0, 0x0
    stb r0, 0x1e(r3)
    bl fn_80629550
    bl fn_80629600
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80628960(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8081C240@ha
    mr r4, r3
    stw r0, 0x14(r1)
    addi r3, r5, lbl_8081C240@l
    bl fn_806286D0
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80628990(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8081C240@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_8081C240@l
    subi r0, r3, 0x8
    lhz r3, 0x12(r4)
    subf r0, r3, r0
    clrlwi r3, r0, 16
    bl fn_80628330
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806289D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8081C280@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r4, lbl_8081C280@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r30, lbl_8081C280@l(r4)
    stb r30, 0x10(r31)
    stb r30, 0x11(r31)
    stb r30, 0x12(r31)
    stb r30, 0x13(r31)
    stb r30, lbl_80880158
    bl fn_8065BB40
    bl fn_80628270
    li r0, 0x5
    stb r0, 0x29(r31)
    stb r30, 0x28(r31)
    stb r30, lbl_80880159
    bl fn_80628240
    lwz r12, 0x20(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806289D0_00000378
    extsb r4, r29
    li r3, 0x4
    mtctr r12
    bctrl
lbl_fn_806289D0_00000378:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80628A70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lis r30, lbl_8081C280@ha
    addi r30, r30, lbl_8081C280@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    lbz r0, 0x29(r30)
    stb r5, 0x2b(r30)
    cmplwi r0, 0x2
    beq lbl_fn_80628A70_000003FC
    mr r3, r29
    bl fn_80626D50
    lbz r3, 0x1c(r30)
    bl fn_80627900
    li r0, 0xff
    stb r0, 0x1c(r30)
    b lbl_fn_80628A70_00000528
lbl_fn_80628A70_000003FC:
    li r0, 0x0
    cmplw r4, r0
    beq lbl_fn_80628A70_00000498
    cmpwi r3, 0x0
    bgt lbl_fn_80628A70_0000041C
    mr r3, r29
    bl fn_80626D50
    b lbl_fn_80628A70_00000498
lbl_fn_80628A70_0000041C:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80628A70_0000043C
    mr r3, r29
    bl fn_80626D50
    b lbl_fn_80628A70_00000498
lbl_fn_80628A70_0000043C:
    lhz r0, 0x4(r29)
    li r5, 0x1000
    clrlwi r4, r31, 16
    sth r5, 0x0(r29)
    add r5, r4, r0
    addi r0, r5, 0x8
    sth r31, 0x2(r29)
    clrrwi r5, r0, 2
    mr r4, r29
    addi r5, r5, 0x4
    bl memcpy
    lis r5, lbl_8081C2E0@ha
    lis r7, fn_80629710@ha
    addi r5, r5, lbl_8081C2E0@l
    mr r3, r28
    addi r8, r5, 0x1000
    addi r7, r7, fn_80629710@l
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_805EDC80
    mr r3, r29
    bl fn_80626D50
lbl_fn_80628A70_00000498:
    lis r30, lbl_8081C280@ha
    addi r31, r30, lbl_8081C280@l
lbl_fn_80628A70_000004A0:
    lbz r3, 0x1c(r31)
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80628A70_000004A0
    li r0, 0x1000
    sth r0, 0x0(r3)
    addi r0, r3, 0x27
    li r4, 0x0
    sth r4, 0x2(r3)
    clrrwi r29, r0, 5
    addi r0, r3, 0x8
    subf r0, r0, r29
    sth r0, 0x4(r3)
    bl fn_80626EC0
    clrlwi r3, r3, 16
    lhz r0, 0x4(r28)
    subi r5, r3, 0x28
    lis r7, fn_80628A70@ha
    lwz r3, lbl_8081C280@l(r30)
    mr r6, r29
    lbz r4, 0x12(r31)
    mr r8, r28
    subf r5, r0, r5
    addi r7, r7, fn_80628A70@l
    bl fn_8065C630
    cmpwi r3, 0x0
    beq lbl_fn_80628A70_00000518
    mr r3, r28
    bl fn_80626D50
lbl_fn_80628A70_00000518:
    lis r3, lbl_8081C280@ha
    li r0, 0x1
    addi r3, r3, lbl_8081C280@l
    stb r0, 0x2b(r3)
lbl_fn_80628A70_00000528:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80628C20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_8081C280@ha
    addi r30, r30, lbl_8081C280@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    lbz r0, 0x29(r30)
    cmplwi r0, 0x2
    beq lbl_fn_80628C20_000005A0
    mr r3, r29
    bl fn_80626D50
    lbz r3, 0x1d(r30)
    bl fn_80627900
    li r0, 0xff
    stb r0, 0x1d(r30)
    b lbl_fn_80628C20_000006CC
lbl_fn_80628C20_000005A0:
    cmpwi r3, 0x0
    bgt lbl_fn_80628C20_000005B4
    mr r3, r29
    bl fn_80626D50
    b lbl_fn_80628C20_0000064C
lbl_fn_80628C20_000005B4:
    sth r3, 0x2(r4)
    li r3, 0x3
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80628C20_000005D8
    mr r3, r29
    bl fn_80626D50
    b lbl_fn_80628C20_0000064C
lbl_fn_80628C20_000005D8:
    lhz r5, 0x2(r29)
    mr r4, r29
    lhz r0, 0x4(r29)
    add r5, r5, r0
    addi r0, r5, 0x8
    clrrwi r5, r0, 2
    addi r5, r5, 0x4
    bl memcpy
    mr r3, r28
    bl fn_80644F60
    li r0, 0x0
    mr r28, r3
    cmplw r3, r0
    beq lbl_fn_80628C20_00000644
    bl fn_80645130
    clrlwi. r0, r3, 24
    beq lbl_fn_80628C20_00000644
    lis r5, lbl_8081D2E0@ha
    lis r7, fn_80629710@ha
    addi r5, r5, lbl_8081D2E0@l
    mr r3, r28
    addi r8, r5, 0x1000
    addi r7, r7, fn_80629710@l
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_805EDC80
lbl_fn_80628C20_00000644:
    mr r3, r29
    bl fn_80626D50
lbl_fn_80628C20_0000064C:
    lis r30, lbl_8081C280@ha
    addi r31, r30, lbl_8081C280@l
lbl_fn_80628C20_00000654:
    lbz r3, 0x1d(r31)
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80628C20_00000654
    li r0, 0x1100
    sth r0, 0x0(r3)
    addi r0, r3, 0x27
    li r4, 0x0
    sth r4, 0x2(r3)
    clrrwi r29, r0, 5
    addi r0, r3, 0x8
    subf r0, r0, r29
    sth r0, 0x4(r3)
    bl fn_80626EC0
    clrlwi r3, r3, 16
    lhz r0, 0x4(r28)
    subi r5, r3, 0x28
    lis r7, fn_80628C20@ha
    lwz r3, lbl_8081C280@l(r30)
    mr r6, r29
    lbz r4, 0x11(r31)
    mr r8, r28
    subf r5, r0, r5
    addi r7, r7, fn_80628C20@l
    bl fn_8065C6B0
    cmpwi r3, 0x0
    beq lbl_fn_80628C20_000006CC
    mr r3, r28
    bl fn_80626D50
lbl_fn_80628C20_000006CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80628DC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_fn_80628DC0_00000734
    mr r3, r4
    bl fn_80626D50
    bl fn_80628270
    lis r4, lbl_8081C280@ha
    addi r4, r4, lbl_8081C280@l
    lbz r3, 0x48(r4)
    subi r0, r3, 0x1
    stb r0, 0x48(r4)
    bl fn_80628240
lbl_fn_80628DC0_00000734:
    lis r30, lbl_8081C280@ha
    addi r31, r30, lbl_8081C280@l
    lbz r0, 0x48(r31)
    cmplwi r0, 0x5
    bge lbl_fn_80628DC0_000007C0
    lhz r0, 0x44(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80628DC0_000007C0
    addi r3, r31, 0x3c
    bl fn_80627400
    stw r3, 0x8(r1)
    mr r29, r3
    lis r10, fn_80628DC0@ha
    li r4, 0x20
    lhz r0, 0x4(r3)
    addi r10, r10, fn_80628DC0@l
    lwz r3, lbl_8081C280@l(r30)
    li r5, 0x0
    add r6, r29, r0
    lhz r8, 0x2(r29)
    addi r9, r6, 0x8
    li r7, 0x0
    li r6, 0x0
    bl fn_8065CDA0
    cmpwi r3, 0x0
    bge lbl_fn_80628DC0_000007AC
    mr r4, r29
    addi r3, r31, 0x3c
    bl fn_806272C0
    b lbl_fn_80628DC0_000007C0
lbl_fn_80628DC0_000007AC:
    bl fn_80628270
    lbz r3, 0x48(r31)
    addi r0, r3, 0x1
    stb r0, 0x48(r31)
    bl fn_80628240
lbl_fn_80628DC0_000007C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80628EB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_fn_80628EB0_00000824
    mr r3, r4
    bl fn_80626D50
    bl fn_80628270
    lis r4, lbl_8081C280@ha
    addi r4, r4, lbl_8081C280@l
    lbz r3, 0x38(r4)
    subi r0, r3, 0x1
    stb r0, 0x38(r4)
    bl fn_80628240
lbl_fn_80628EB0_00000824:
    lis r30, lbl_8081C280@ha
    addi r31, r30, lbl_8081C280@l
    lbz r0, 0x38(r31)
    cmplwi r0, 0x5
    bge lbl_fn_80628EB0_000008A4
    lhz r0, 0x34(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80628EB0_000008A4
    addi r3, r31, 0x2c
    bl fn_80627400
    lhz r0, 0x4(r3)
    mr r29, r3
    lis r7, fn_80628EB0@ha
    lwz r3, lbl_8081C280@l(r30)
    add r6, r29, r0
    lbz r4, 0x10(r31)
    lhz r5, 0x2(r29)
    mr r8, r29
    addi r7, r7, fn_80628EB0@l
    addi r6, r6, 0x8
    bl fn_8065C750
    cmpwi r3, 0x0
    bge lbl_fn_80628EB0_00000890
    mr r4, r29
    addi r3, r31, 0x2c
    bl fn_806272C0
    b lbl_fn_80628EB0_000008A4
lbl_fn_80628EB0_00000890:
    bl fn_80628270
    lbz r3, 0x38(r31)
    addi r0, r3, 0x1
    stb r0, 0x38(r31)
    bl fn_80628240
lbl_fn_80628EB0_000008A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80628F90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4c
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lis r30, lbl_8081C280@ha
    addi r3, r30, lbl_8081C280@l
    bl memset
    bl fn_80628270
    addi r30, r30, lbl_8081C280@l
    li r0, 0x5
    stb r0, 0x29(r30)
    bl fn_80628240
    lbz r0, lbl_80880159
    cmpwi r0, 0x0
    bne lbl_fn_80628F90_0000091C
    li r3, 0x0
    li r0, 0x1
    stb r3, 0x28(r30)
    stb r0, lbl_80880159
lbl_fn_80628F90_0000091C:
    bl IPCCltInit
    cmpwi r3, 0x0
    bne lbl_fn_80628F90_00000AB0
    bl fn_8065BA40
    cmpwi r3, 0x0
    bne lbl_fn_80628F90_00000AB0
    lbz r0, lbl_80880164
    lis r4, lbl_8081C280@ha
    addi r4, r4, lbl_8081C280@l
    cmplwi r0, 0x1
    stw r31, 0x24(r4)
    bne lbl_fn_80628F90_00000960
    lwz r3, lbl_80880168
    lwz r0, lbl_8088016C
    stw r3, 0x14(r4)
    stw r0, 0x18(r4)
    b lbl_fn_80628F90_00000970
lbl_fn_80628F90_00000960:
    li r3, 0x57e
    li r0, 0x305
    stw r3, 0x14(r4)
    stw r0, 0x18(r4)
lbl_fn_80628F90_00000970:
    lwz r0, lbl_80880160
    lis r6, lbl_8081C280@ha
    addi r6, r6, lbl_8081C280@l
    li r3, 0x0
    cmplwi r0, 0x1
    stb r3, 0x10(r6)
    lwz r5, 0x18(r6)
    stb r3, 0x11(r6)
    lwz r0, 0x14(r6)
    stb r3, 0x12(r6)
    stb r3, 0x13(r6)
    bne lbl_fn_80628F90_000009E4
    lwz r3, lbl_8088015C
    cmpwi r3, 0x0
    bne lbl_fn_80628F90_000009C4
    clrlwi r4, r0, 16
    clrlwi r5, r5, 16
    la r3, lbl_8087EA80
    bl fn_8065BCF0
    mr r30, r3
    b lbl_fn_80628F90_000009F8
lbl_fn_80628F90_000009C4:
    cmplwi r3, 0x1
    bne lbl_fn_80628F90_000009F8
    clrlwi r4, r0, 16
    clrlwi r5, r5, 16
    la r3, lbl_8087EA84
    bl fn_8065BCF0
    mr r30, r3
    b lbl_fn_80628F90_000009F8
lbl_fn_80628F90_000009E4:
    clrlwi r4, r0, 16
    clrlwi r5, r5, 16
    la r3, lbl_8087EA84
    bl fn_8065BCF0
    mr r30, r3
lbl_fn_80628F90_000009F8:
    cmpwi r30, 0x0
    blt lbl_fn_80628F90_00000A04
    stw r30, lbl_8087EA7C
lbl_fn_80628F90_00000A04:
    cmpwi r30, 0x0
    blt lbl_fn_80628F90_00000AB0
    lis r30, lbl_8081C280@ha
    li r3, 0x2
    addi r30, r30, lbl_8081C280@l
    li r4, 0x82
    li r0, 0x81
    li r31, 0x0
    stb r3, 0x10(r30)
    addi r3, r30, 0x2c
    stb r4, 0x11(r30)
    stb r0, 0x12(r30)
    stb r31, 0x13(r30)
    bl fn_80626AA0
    stb r31, 0x38(r30)
    addi r3, r30, 0x3c
    bl fn_80626AA0
    stb r31, 0x48(r30)
    li r3, 0x294
    li r4, 0x2d
    li r5, 0x1
    li r6, 0x0
    bl fn_806275B0
    stb r3, 0x1c(r30)
    li r3, 0x708
    li r4, 0x1e
    li r5, 0x1
    li r6, 0x0
    bl fn_806275B0
    lbz r0, 0x1c(r30)
    stb r3, 0x1d(r30)
    cmplwi r0, 0xff
    beq lbl_fn_80628F90_00000AB0
    clrlwi r0, r3, 24
    cmplwi r0, 0xff
    bne lbl_fn_80628F90_00000A98
    b lbl_fn_80628F90_00000AB0
lbl_fn_80628F90_00000A98:
    bl fn_80628270
    li r0, 0x4
    stb r0, 0x29(r30)
    bl fn_80628240
    li r0, 0x1
    stw r0, lbl_8087EA78
lbl_fn_80628F90_00000AB0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806291A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8081C280@ha
    stw r30, 0x18(r1)
    addi r30, r31, lbl_8081C280@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lbz r0, 0x29(r30)
    cmplwi r0, 0x4
    bne lbl_fn_806291A0_00000C3C
    lbz r0, 0x1c(r30)
    cmplwi r0, 0xff
    beq lbl_fn_806291A0_00000C3C
    lbz r0, 0x1d(r30)
    cmplwi r0, 0xff
    bne lbl_fn_806291A0_00000B20
    b lbl_fn_806291A0_00000C3C
lbl_fn_806291A0_00000B20:
    bl fn_80628270
    li r0, 0x2
    stw r28, 0x20(r30)
    stb r0, 0x29(r30)
    bl fn_80628240
lbl_fn_806291A0_00000B34:
    lbz r3, 0x1c(r30)
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_806291A0_00000B34
    li r0, 0x1000
    sth r0, 0x0(r3)
    addi r0, r3, 0x27
    li r4, 0x0
    sth r4, 0x2(r3)
    clrrwi r29, r0, 5
    addi r0, r3, 0x8
    subf r0, r0, r29
    sth r0, 0x4(r3)
    bl fn_80626EC0
    clrlwi r3, r3, 16
    lhz r0, 0x4(r28)
    subi r5, r3, 0x28
    lis r7, fn_80628A70@ha
    lwz r3, lbl_8081C280@l(r31)
    mr r6, r29
    lbz r4, 0x12(r30)
    mr r8, r28
    subf r5, r0, r5
    addi r7, r7, fn_80628A70@l
    bl fn_8065C630
    cmpwi r3, 0x0
    beq lbl_fn_806291A0_00000BAC
    mr r3, r28
    bl fn_80626D50
lbl_fn_806291A0_00000BAC:
    lis r30, lbl_8081C280@ha
    li r0, 0x1
    addi r31, r30, lbl_8081C280@l
    stb r0, 0x2b(r31)
lbl_fn_806291A0_00000BBC:
    lbz r3, 0x1d(r31)
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_806291A0_00000BBC
    li r0, 0x1100
    sth r0, 0x0(r3)
    addi r0, r3, 0x27
    li r4, 0x0
    sth r4, 0x2(r3)
    clrrwi r28, r0, 5
    addi r0, r3, 0x8
    subf r0, r0, r28
    sth r0, 0x4(r3)
    bl fn_80626EC0
    clrlwi r3, r3, 16
    lhz r0, 0x4(r29)
    subi r5, r3, 0x28
    lis r7, fn_80628C20@ha
    lwz r3, lbl_8081C280@l(r30)
    mr r6, r28
    lbz r4, 0x11(r31)
    mr r8, r29
    subf r5, r0, r5
    addi r7, r7, fn_80628C20@l
    bl fn_8065C6B0
    cmpwi r3, 0x0
    beq lbl_fn_806291A0_00000C34
    mr r3, r29
    bl fn_80626D50
lbl_fn_806291A0_00000C34:
    li r0, 0x0
    stw r0, lbl_8087EA78
lbl_fn_806291A0_00000C3C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80629330(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80629340(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r29, lbl_8081C280@ha
    mr r25, r4
    addi r30, r29, lbl_8081C280@l
    mr r31, r5
    lbz r0, 0x29(r30)
    li r28, 0x0
    cmplwi r0, 0x2
    beq lbl_fn_80629340_00000CAC
    li r3, 0x0
    b lbl_fn_80629340_00000E64
lbl_fn_80629340_00000CAC:
    cmpwi r3, 0x0
    beq lbl_fn_80629340_00000CC0
    cmpwi r3, 0x2
    beq lbl_fn_80629340_00000D98
    b lbl_fn_80629340_00000E60
lbl_fn_80629340_00000CC0:
    lbz r3, 0x1c(r30)
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80629340_00000CDC
    li r3, 0x0
    b lbl_fn_80629340_00000E64
lbl_fn_80629340_00000CDC:
    addi r0, r3, 0x27
    sth r31, 0x2(r3)
    clrrwi r27, r0, 5
    mr r4, r25
    addi r0, r3, 0x8
    mr r5, r31
    subf r0, r0, r27
    sth r0, 0x4(r3)
    mr r3, r27
    bl memcpy
    lbz r0, 0x48(r30)
    cmplwi r0, 0x5
    bge lbl_fn_80629340_00000D50
    lhz r0, 0x44(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80629340_00000D50
    stw r26, 0x8(r1)
    lis r10, fn_80628DC0@ha
    mr r8, r31
    mr r9, r27
    lwz r3, lbl_8081C280@l(r29)
    addi r10, r10, fn_80628DC0@l
    li r4, 0x20
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8065CDA0
    mr r28, r3
    b lbl_fn_80629340_00000D6C
lbl_fn_80629340_00000D50:
    lis r3, lbl_8081C280@ha
    mr r4, r26
    addi r3, r3, lbl_8081C280@l
    addi r3, r3, 0x3c
    bl fn_80627180
    li r3, 0x0
    b lbl_fn_80629340_00000E64
lbl_fn_80629340_00000D6C:
    cmpwi r3, 0x0
    beq lbl_fn_80629340_00000D80
    mr r3, r26
    bl fn_80626D50
    b lbl_fn_80629340_00000E60
lbl_fn_80629340_00000D80:
    bl fn_80628270
    lbz r3, 0x48(r30)
    addi r0, r3, 0x1
    stb r0, 0x48(r30)
    bl fn_80628240
    b lbl_fn_80629340_00000E60
lbl_fn_80629340_00000D98:
    lbz r3, 0x1d(r30)
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80629340_00000DB4
    li r3, 0x0
    b lbl_fn_80629340_00000E64
lbl_fn_80629340_00000DB4:
    addi r0, r3, 0x27
    sth r31, 0x2(r3)
    clrrwi r28, r0, 5
    mr r4, r25
    addi r0, r3, 0x8
    mr r5, r31
    subf r0, r0, r28
    sth r0, 0x4(r3)
    mr r3, r28
    bl memcpy
    lbz r0, 0x38(r30)
    cmplwi r0, 0x5
    bge lbl_fn_80629340_00000E1C
    lhz r0, 0x34(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80629340_00000E1C
    lis r7, fn_80628EB0@ha
    lwz r3, lbl_8081C280@l(r29)
    lbz r4, 0x10(r30)
    mr r5, r31
    mr r6, r28
    mr r8, r27
    addi r7, r7, fn_80628EB0@l
    bl fn_8065C750
    mr r28, r3
    b lbl_fn_80629340_00000E38
lbl_fn_80629340_00000E1C:
    lis r3, lbl_8081C280@ha
    mr r4, r27
    addi r3, r3, lbl_8081C280@l
    addi r3, r3, 0x2c
    bl fn_80627180
    li r3, 0x0
    b lbl_fn_80629340_00000E64
lbl_fn_80629340_00000E38:
    cmpwi r3, 0x0
    beq lbl_fn_80629340_00000E4C
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_80629340_00000E60
lbl_fn_80629340_00000E4C:
    bl fn_80628270
    lbz r3, 0x38(r30)
    addi r0, r3, 0x1
    stb r0, 0x38(r30)
    bl fn_80628240
lbl_fn_80629340_00000E60:
    clrlwi r3, r28, 16
lbl_fn_80629340_00000E64:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80629550(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80628270
    lis r3, lbl_8081C280@ha
    li r0, 0x0
    addi r31, r3, lbl_8081C280@l
    stb r0, 0x29(r31)
    bl fn_80628240
    lhz r0, 0x34(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80629550_00000ED0
    b lbl_fn_80629550_00000EC4
lbl_fn_80629550_00000EB8:
    addi r3, r31, 0x2c
    bl fn_80627400
    bl fn_80626D50
lbl_fn_80629550_00000EC4:
    lhz r0, 0x34(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80629550_00000EB8
lbl_fn_80629550_00000ED0:
    lis r3, lbl_8081C280@ha
    addi r31, r3, lbl_8081C280@l
    lhz r0, 0x44(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80629550_00000F00
    b lbl_fn_80629550_00000EF4
lbl_fn_80629550_00000EE8:
    addi r3, r31, 0x3c
    bl fn_80627400
    bl fn_80626D50
lbl_fn_80629550_00000EF4:
    lhz r0, 0x44(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80629550_00000EE8
lbl_fn_80629550_00000F00:
    lis r3, lbl_8081C280@ha
    lis r4, fn_806289D0@ha
    lwz r3, lbl_8081C280@l(r3)
    addi r4, r4, fn_806289D0@l
    li r5, 0x0
    bl fn_8065BE40
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80629600(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8065BB40
    bl fn_80628270
    lis r3, lbl_8081C280@ha
    li r0, 0x0
    addi r3, r3, lbl_8081C280@l
    li r4, 0x5
    stb r4, 0x29(r3)
    stb r0, 0x28(r3)
    stb r0, lbl_80880159
    bl fn_80628240
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80629650(void)
{
    nofralloc
    sth r4, 0x0(r3)
    lwz r4, lbl_80880170
    cmpwi r4, 0x0
    beq lbl_fn_80629650_00000F9C
    lwz r12, 0xc(r4)
    mtctr r12
    bctr
lbl_fn_80629650_00000F9C:
    b fn_80626D50
}

asm void fn_80629670(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_80880170
    cmpwi r3, 0x0
    beq lbl_fn_80629670_00000FF4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80629670_00000FD8
    li r3, 0x2
    li r4, 0x1
    li r5, 0x800
    mtctr r12
    bctrl
lbl_fn_80629670_00000FD8:
    lwz r3, lbl_80880170
    lwz r12, 0x4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80629670_00000FF4
    lwz r3, lbl_80880174
    mtctr r12
    bctrl
lbl_fn_80629670_00000FF4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806296E0(void)
{
    nofralloc
    lwz r3, lbl_80880170
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x8(r3)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

asm void fn_80629710(void)
{
    nofralloc
    mr r5, r3
    li r3, 0x2
    li r4, 0x0
    b fn_80626F10
}

asm void fn_80629720(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8064829C
    bl fn_8063B574
    bl fn_8063EE48
    bl fn_8063F8CC
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80629750(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    bne cr1, lbl_fn_80629750_000010B4
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80629750_000010B4:
    addi r11, r1, 0x88
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r3, 0x8(r1)
    lis r31, lbl_8081E2E0@ha
    addi r3, r1, 0x68
    stw r5, 0x10(r1)
    mr r5, r3
    addi r3, r31, lbl_8081E2E0@l
    stw r4, 0xc(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_8068093C
    addi r3, r31, lbl_8081E2E0@l
    la r4, lbl_8087EAB8
    mr r5, r3
    crclr 6
    bl sprintf
    addi r3, r31, lbl_8081E2E0@l
    crclr 6
    bl OSReport
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80629810(void)
{
    nofralloc
    lbz r0, lbl_80880178
    cmpwi r0, 0x0
    bnelr
    crclr 6
    b fn_80629750
    blr
}

asm void fn_80629830(void)
{
    nofralloc
    lbz r0, lbl_80880178
    cmpwi r0, 0x0
    bnelr
    crclr 6
    b fn_80629750
    blr
}

asm void fn_80629850(void)
{
    nofralloc
    lbz r0, lbl_80880178
    cmpwi r0, 0x0
    bnelr
    crclr 6
    b fn_80629750
    blr
}

asm void fn_80629870(void)
{
    nofralloc
    lbz r0, lbl_80880178
    cmpwi r0, 0x0
    bnelr
    crclr 6
    b fn_80629750
    blr
}

asm void fn_80629890(void)
{
    nofralloc
    lbz r0, lbl_80880178
    cmpwi r0, 0x0
    bnelr
    crclr 6
    b fn_80629750
    blr
}

asm void fn_806298B0(void)
{
    nofralloc
    lbz r0, lbl_80880178
    cmpwi r0, 0x0
    bnelr
    crclr 6
    b fn_80629750
    blr
}

asm void fn_806298D0(void)
{
    nofralloc
    lbz r0, lbl_80880178
    cmpwi r0, 0x0
    bnelr
    crclr 6
    b fn_80629750
    blr
}

asm void fn_806298F0(void)
{
    nofralloc
    lis r4, lbl_8081EAC0@ha
    lis r3, fn_80629AA0@ha
    addi r4, r4, lbl_8081EAC0@l
    addi r3, r3, fn_80629AA0@l
    addi r4, r4, 0x1000
    b fn_805EDC50
}

asm void fn_80629910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    stw r0, lbl_8088017C
    bl fn_80628000
    bl fn_80628240
    bl fn_8063B448
    lis r3, lbl_80764C40@ha
    la r0, lbl_8087EAC0
    addi r3, r3, lbl_80764C40@l
    stw r3, lbl_80880170
    li r3, 0x0
    stw r0, lbl_80880174
    bl fn_80629670
    b lbl_fn_80629910_0000128C
lbl_fn_80629910_00001284:
    li r3, 0x64
    bl fn_80628170
lbl_fn_80629910_0000128C:
    lwz r0, lbl_8087EA78
    cmpwi r0, 0x0
    bne lbl_fn_80629910_00001284
    bl fn_80629A60
    lis r31, lbl_8081FAC0@ha
    addi r3, r31, lbl_8081FAC0@l
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_806298F0@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_806298F0@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, lbl_8081FAC0@l
    li r7, 0x0
    rlwinm r8, r0, 27, 5, 30
    bl fn_805EC3B0
    li r3, 0x0
    bl fn_80628140
    b lbl_fn_80629910_000012F8
lbl_fn_80629910_000012F0:
    li r3, 0x7d0
    bl fn_80628170
lbl_fn_80629910_000012F8:
    bl fn_8062CA30
    clrlwi. r0, r3, 24
    beq lbl_fn_80629910_000012F0
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806299F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r3, lbl_8088017C
    lis r3, lbl_8081FAC0@ha
    addi r3, r3, lbl_8081FAC0@l
    bl OSCancelAlarm
    bl fn_806296E0
    bl fn_80628090
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80629A30(void)
{
    nofralloc
    lwz r12, lbl_8088017C
    cmpwi r12, 0x0
    beqlr
    extsb. r0, r3
    blt lbl_fn_80629A30_00001380
    li r3, 0x0
    mtctr r12
    bctr
lbl_fn_80629A30_00001380:
    li r3, 0x1
    mtctr r12
    bctr
    blr
}

asm void fn_80629A60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    li r0, 0x0
    stb r3, lbl_8087EAC8
    stw r3, lbl_8087EACC
    stw r0, lbl_80880180
    stw r0, lbl_80880184
    bl fn_8063B41C
    bl fn_80629720
    bl fn_8062A1CC
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80629AA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r30, 0x0
    bl OSGetTime
    lwz r3, lbl_80880180
    addi r0, r3, 0x1
    stw r0, lbl_80880180
    bl fn_80628270
    lwz r0, lbl_8087EACC
    cmpwi r0, 0x0
    beq lbl_fn_80629AA0_0000141C
    li r3, 0x0
    li r0, 0x1
    stw r3, lbl_8087EACC
    stb r0, lbl_8087EAC8
    b lbl_fn_80629AA0_00001430
lbl_fn_80629AA0_0000141C:
    lbz r3, lbl_8087EAC8
    addi r0, r3, 0x1
    stb r0, lbl_8087EAC8
    bl fn_80628240
    b lbl_fn_80629AA0_00001734
lbl_fn_80629AA0_00001430:
    bl fn_80628240
    lwz r3, lbl_80880184
    li r31, 0x5
    lwz r4, lbl_80880180
    addi r0, r3, 0x1f4
    cmplw r4, r0
    ble lbl_fn_80629AA0_00001454
    stw r4, lbl_80880184
    ori r31, r31, 0x30
lbl_fn_80629AA0_00001454:
    lis r3, lbl_8081FAF0@ha
    addi r29, r3, lbl_8081FAF0@l
    b lbl_fn_80629AA0_00001724
lbl_fn_80629AA0_00001460:
    clrlwi. r0, r31, 31
    li r30, 0x1
    beq lbl_fn_80629AA0_00001568
    b lbl_fn_80629AA0_00001554
lbl_fn_80629AA0_00001470:
    lhz r0, 0x0(r3)
    li r30, 0x0
    rlwinm r28, r0, 0, 16, 23
    cmpwi r28, 0x1100
    beq lbl_fn_80629AA0_000014A8
    cmpwi r28, 0x1900
    beq lbl_fn_80629AA0_000014B4
    cmpwi r28, 0x1200
    beq lbl_fn_80629AA0_000014C0
    cmpwi r28, 0x1000
    beq lbl_fn_80629AA0_000014CC
    cmpwi r28, 0x1600
    beq lbl_fn_80629AA0_000014E0
    b lbl_fn_80629AA0_000014EC
lbl_fn_80629AA0_000014A8:
    mr r3, r27
    bl fn_806454BC
    b lbl_fn_80629AA0_00001554
lbl_fn_80629AA0_000014B4:
    mr r3, r27
    bl fn_80645288
    b lbl_fn_80629AA0_00001554
lbl_fn_80629AA0_000014C0:
    mr r3, r27
    bl fn_80636DF4
    b lbl_fn_80629AA0_00001554
lbl_fn_80629AA0_000014CC:
    mr r3, r27
    bl fn_8063A1C0
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_80629AA0_00001554
lbl_fn_80629AA0_000014E0:
    mr r3, r27
    bl fn_8063A778
    b lbl_fn_80629AA0_00001554
lbl_fn_80629AA0_000014EC:
    li r26, 0x0
    li r4, 0x0
    b lbl_fn_80629AA0_00001530
lbl_fn_80629AA0_000014F8:
    clrlslwi r0, r26, 24, 3
    add r3, r29, r0
    lwz r12, 0x14(r3)
    cmpwi cr1, r12, 0x0
    beq cr1, lbl_fn_80629AA0_0000152C
    lhz r0, 0x10(r3)
    cmplw r28, r0
    bne lbl_fn_80629AA0_0000152C
    beq cr1, lbl_fn_80629AA0_0000152C
    mr r3, r27
    mtctr r12
    bctrl
    li r4, 0x1
lbl_fn_80629AA0_0000152C:
    addi r26, r26, 0x1
lbl_fn_80629AA0_00001530:
    cmpwi r4, 0x0
    bne lbl_fn_80629AA0_00001544
    clrlwi r0, r26, 24
    cmplwi r0, 0x6
    blt lbl_fn_80629AA0_000014F8
lbl_fn_80629AA0_00001544:
    cmpwi r4, 0x0
    bne lbl_fn_80629AA0_00001554
    mr r3, r27
    bl fn_80626D50
lbl_fn_80629AA0_00001554:
    li r3, 0x0
    bl fn_806270D0
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80629AA0_00001470
lbl_fn_80629AA0_00001568:
    rlwinm. r0, r31, 0, 27, 27
    beq lbl_fn_80629AA0_000016E4
    addi r3, r29, 0x40
    li r4, 0x1
    bl fn_80627D50
    rlwinm r0, r31, 0, 28, 26
    clrlwi r31, r0, 16
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_00001588:
    mr r4, r28
    addi r3, r29, 0x40
    li r30, 0x0
    bl fn_80627ED0
    lhz r0, 0x14(r28)
    cmpwi r0, 0xa
    beq lbl_fn_80629AA0_00001634
    bge lbl_fn_80629AA0_000015D4
    cmpwi r0, 0x5
    beq lbl_fn_80629AA0_00001628
    bge lbl_fn_80629AA0_000015C4
    cmpwi r0, 0x1
    beq lbl_fn_80629AA0_00001604
    bge lbl_fn_80629AA0_0000161C
    b lbl_fn_80629AA0_00001678
lbl_fn_80629AA0_000015C4:
    cmpwi r0, 0x8
    beq lbl_fn_80629AA0_0000163C
    bge lbl_fn_80629AA0_00001610
    b lbl_fn_80629AA0_00001678
lbl_fn_80629AA0_000015D4:
    cmpwi r0, 0x3c
    beq lbl_fn_80629AA0_00001650
    bge lbl_fn_80629AA0_000015F8
    cmpwi r0, 0x16
    beq lbl_fn_80629AA0_00001664
    bge lbl_fn_80629AA0_00001678
    cmpwi r0, 0xd
    bge lbl_fn_80629AA0_00001678
    b lbl_fn_80629AA0_00001644
lbl_fn_80629AA0_000015F8:
    cmpwi r0, 0x42
    beq lbl_fn_80629AA0_00001658
    b lbl_fn_80629AA0_00001678
lbl_fn_80629AA0_00001604:
    mr r3, r28
    bl fn_80632520
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_00001610:
    mr r3, r28
    bl fn_80631014
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_0000161C:
    mr r3, r28
    bl fn_8064625C
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_00001628:
    lwz r3, 0x10(r28)
    bl fn_80651FBC
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_00001634:
    bl fn_80635694
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_0000163C:
    bl fn_80633C38
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_00001644:
    mr r3, r28
    bl fn_8064E418
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_00001650:
    bl fn_8063B1E4
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_00001658:
    mr r3, r28
    bl fn_806406B8
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_00001664:
    lwz r12, 0x10(r28)
    mr r3, r28
    mtctr r12
    bctrl
    b lbl_fn_80629AA0_000016CC
lbl_fn_80629AA0_00001678:
    li r27, 0x0
    li r4, 0x0
    b lbl_fn_80629AA0_000016B8
lbl_fn_80629AA0_00001684:
    clrlslwi r0, r27, 24, 3
    add r3, r29, r0
    lwz r12, 0x4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80629AA0_000016B4
    lwz r0, 0x0(r3)
    cmplw r0, r28
    bne lbl_fn_80629AA0_000016B4
    mr r3, r28
    mtctr r12
    bctrl
    li r4, 0x1
lbl_fn_80629AA0_000016B4:
    addi r27, r27, 0x1
lbl_fn_80629AA0_000016B8:
    cmpwi r4, 0x0
    bne lbl_fn_80629AA0_000016CC
    clrlwi r0, r27, 24
    cmplwi r0, 0x2
    blt lbl_fn_80629AA0_00001684
lbl_fn_80629AA0_000016CC:
    lwz r28, 0x40(r29)
    cmpwi r28, 0x0
    beq lbl_fn_80629AA0_000016E4
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80629AA0_00001588
lbl_fn_80629AA0_000016E4:
    rlwinm. r0, r31, 0, 29, 29
    beq lbl_fn_80629AA0_00001708
    b lbl_fn_80629AA0_000016F8
lbl_fn_80629AA0_000016F0:
    li r30, 0x0
    bl fn_8062A230
lbl_fn_80629AA0_000016F8:
    li r3, 0x2
    bl fn_806270D0
    cmpwi r3, 0x0
    bne lbl_fn_80629AA0_000016F0
lbl_fn_80629AA0_00001708:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_fn_80629AA0_0000171C
    rlwinm r0, r31, 0, 27, 25
    clrlwi r31, r0, 16
    bl fn_8062A31C
lbl_fn_80629AA0_0000171C:
    rlwinm. r0, r31, 0, 16, 16
    bne lbl_fn_80629AA0_0000172C
lbl_fn_80629AA0_00001724:
    cmpwi r30, 0x0
    beq lbl_fn_80629AA0_00001460
lbl_fn_80629AA0_0000172C:
    li r0, 0x1
    stw r0, lbl_8087EACC
lbl_fn_80629AA0_00001734:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80629E20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8081FAF0@ha
    addi r31, r31, lbl_8081FAF0@l
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mr r4, r28
    addi r3, r31, 0x40
    bl fn_80627ED0
    sth r29, 0x14(r28)
    mr r4, r28
    addi r3, r31, 0x40
    stw r30, 0xc(r28)
    bl fn_80627DE0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80629E90(void)
{
    nofralloc
    lis r5, lbl_8081FAF0@ha
    mr r4, r3
    addi r5, r5, lbl_8081FAF0@l
    addi r3, r5, 0x40
    b fn_80627ED0
}

asm void fn_80629EA4(void)
{
    nofralloc
    lbz r9, 0x0(r4)
    lbz r8, 0x1(r4)
    lbz r7, 0x2(r4)
    lbz r6, 0x3(r4)
    lbz r5, 0x4(r4)
    lbz r0, 0x5(r4)
    stb r9, 0x0(r3)
    stb r8, 0x1(r3)
    stb r7, 0x2(r3)
    stb r6, 0x3(r3)
    stb r5, 0x4(r3)
    stb r0, 0x5(r3)
    blr
}

asm void fn_80629ED8(void)
{
    nofralloc
    lbz r5, 0x0(r3)
    lbz r0, 0x0(r4)
    cmplw r5, r0
    beq lbl_fn_80629ED8_00001820
    li r3, -0x1
    blr
lbl_fn_80629ED8_00001820:
    lbz r5, 0x1(r3)
    addi r6, r3, 0x2
    lbz r0, 0x1(r4)
    addi r3, r4, 0x2
    cmplw r5, r0
    beq lbl_fn_80629ED8_00001840
    li r3, -0x1
    blr
lbl_fn_80629ED8_00001840:
    lbz r5, 0x0(r6)
    lbz r0, 0x0(r3)
    cmplw r5, r0
    beq lbl_fn_80629ED8_00001858
    li r3, -0x1
    blr
lbl_fn_80629ED8_00001858:
    lbz r5, 0x1(r6)
    lbz r0, 0x1(r3)
    cmplw r5, r0
    beq lbl_fn_80629ED8_00001870
    li r3, -0x1
    blr
lbl_fn_80629ED8_00001870:
    lbz r5, 0x2(r6)
    lbz r0, 0x2(r3)
    cmplw r5, r0
    beq lbl_fn_80629ED8_00001888
    li r3, -0x1
    blr
lbl_fn_80629ED8_00001888:
    lbz r5, 0x3(r6)
    lbz r0, 0x3(r3)
    cmplw r5, r0
    beq lbl_fn_80629ED8_000018A0
    li r3, -0x1
    blr
lbl_fn_80629ED8_000018A0:
    li r3, 0x0
    blr
}

asm void fn_80629F78(void)
{
    nofralloc
    lis r4, lbl_8081FB78@ha
    addi r4, r4, lbl_8081FB78@l
    stw r3, 0x80(r4)
    blr
}

asm void fn_80629F88(void)
{
    nofralloc
    lis r4, lbl_8081FB78@ha
    addi r4, r4, lbl_8081FB78@l
    stw r3, 0x88(r4)
    blr
}

asm void fn_80629F98(void)
{
    nofralloc
    lis r4, lbl_8081FB78@ha
    addi r4, r4, lbl_8081FB78@l
    stw r3, 0x84(r4)
    blr
}

asm void fn_80629FA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8081FB78@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8081FB78@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r12, 0x80(r6)
    cmpwi r12, 0x0
    beq lbl_fn_80629FA8_00001928
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_80629FA8_00001928:
    lis r3, lbl_8081FB78@ha
    addi r3, r3, lbl_8081FB78@l
    lwz r12, 0x84(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80629FA8_00001954
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_80629FA8_00001954:
    lis r3, lbl_8081FB78@ha
    addi r3, r3, lbl_8081FB78@l
    lwz r12, 0x88(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80629FA8_00001980
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_80629FA8_00001980:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
