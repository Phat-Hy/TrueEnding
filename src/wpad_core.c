#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void NANDInit(void);
extern void OSCancelAlarm(void);
extern void OSCreateAlarm(void);
extern void OSDisableInterrupts(void);
extern void OSGetTime(void);
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSReport(const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void SCCheckStatus(void);
extern void SCInit(void);
extern void __OSGetSystemTime(void);
extern void __OSMaskInterrupts(void);
extern void __OSSetInterruptHandler(void);
extern void __OSUnmaskInterrupts(void);
extern void _restgpr_14(void);
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805EBFD0(void);
extern void fn_805EC3B0(void);
extern void fn_805EDC80(void);
extern void fn_8061E7D0(void);
extern void fn_8061E8C0(void);
extern void fn_8061E9E0(void);
extern void fn_8061F9F0(void);
extern void fn_8061FBE0(void);
extern void fn_806242D0(void);
extern void fn_80624B50(void);
extern void fn_80624B60(void);
extern void fn_80624B70(void);
extern void fn_80624B80(void);
extern void fn_80625040(void);
extern void fn_80629910(void);
extern void fn_806299F0(void);
extern void fn_8062A408(void);
extern void fn_8062C970(void);
extern void fn_8062C9F8(void);
extern void fn_8062CA30(void);
extern void fn_8062CA68(void);
extern void fn_8062CACC(void);
extern void fn_8062CB24(void);
extern void fn_8062CBA8(void);
extern void fn_8062CBE0(void);
extern void fn_8062CC6C(void);
extern void fn_8062CD5C(void);
extern void fn_8062F0A0(void);
extern void fn_8062F1C4(void);
extern void fn_8062F308(void);
extern void fn_8062F3B0(void);
extern void fn_806307C8(void);
extern void fn_80630B94(void);
extern void fn_806317D8(void);
extern void fn_806322D0(void);
extern void fn_80632430(void);
extern void fn_806331C8(void);
extern void fn_80633214(void);
extern void fn_806332B4(void);
extern void fn_806332CC(void);
extern void fn_80633434(void);
extern void fn_80633504(void);
extern void fn_806335A4(void);
extern void fn_8063367C(void);
extern void fn_8063374C(void);
extern void fn_80635730(void);
extern void fn_806357EC(void);
extern void fn_80642D20(void);
extern void fn_8064F570(void);
extern void fn_8066E8F0(void);
extern void fn_8066E940(void);
extern void fn_8066E980(void);
extern void fn_8067E23C(void);

/* External data declarations */
extern u8 lbl_807BA8B8[];
extern u8 lbl_807BA994[];
extern u8 lbl_807BA9A0[];
extern u8 lbl_807BAA5C[];
extern u8 lbl_807BAAB8[];
extern u8 lbl_807BAAD4[];
extern u8 lbl_807BAAE8[];
extern u8 lbl_807BAAFC[];
extern u8 lbl_807BAB3C[];
extern u8 lbl_807BAB90[];
extern u8 lbl_807BABB4[];
extern u8 lbl_807BABC8[];
extern u8 lbl_807BABF0[];
extern u8 lbl_807BAC00[];
extern u8 lbl_807BAC14[];
extern u8 lbl_8082DE00[];
extern u8 lbl_8082E550[];
extern u8 lbl_8082E658[];
extern u8 lbl_8082E6B8[];
extern u8 lbl_8082EB20[];
extern u8 lbl_8082EBC0[];
extern u8 lbl_8082ED60[];
extern u8 lbl_8082FF68[];
extern u8 lbl_8082FF88[];

/* Small data declarations */
extern u32 __OSInIPL;
extern u32 __OSStartTime;
extern u32 lbl_8087EBD0;
extern u32 lbl_8087EBD8;
extern u32 lbl_8087EBE0;
extern u32 lbl_808802A0;
extern u32 lbl_808802A4;
extern u32 lbl_808802A8;
extern u32 lbl_808802AC;
extern u32 lbl_808802AD;
extern u32 lbl_808802B0;
extern u32 lbl_808802B4;
extern u32 lbl_808802B8;
extern u32 lbl_808802BC;
extern u32 lbl_808802C0;
extern u32 lbl_808802C4;
extern u32 lbl_808802C5;
extern u32 lbl_808802C6;
extern u32 lbl_808802C8;
extern u32 lbl_808802CC;
extern u32 lbl_808802D0;
extern u32 lbl_808802D4;
extern u32 lbl_808802D5;
extern u32 lbl_808802D6;
extern u32 lbl_808802D7;
extern u32 lbl_808802D8;
extern u32 lbl_808802DC;
extern u32 lbl_808802E0;
extern u32 lbl_808802E4;
extern u32 lbl_808802E8;
extern u32 lbl_80888A50;
extern u32 lbl_80888A54;
extern u32 lbl_80888A56;

/* Function declarations */
void fn_8066EAE0(void);
void fn_8066EC40(void);
void fn_8066F030(void);
void fn_8066F150(void);
void fn_8066F1C0(void);
void fn_8066F240(void);
void fn_8066F2B0(void);
void fn_8066F300(void);
void fn_8066F460(void);
void fn_8066FE30(void);
void fn_8066FE50(void);
void fn_8066FE70(void);
void fn_8066FF10(void);
void fn_80670120(void);
void fn_80670390(void);
void fn_806703B0(void);
void fn_806704C0(void);
void fn_80670640(void);
void fn_80670660(void);
void fn_80670680(void);
void fn_80670BD0(void);
void fn_80670C50(void);
void fn_80670C70(void);
void fn_806710B0(void);
void fn_80671200(void);
void fn_80671220(void);
void fn_80671240(void);
void fn_80671300(void);
void fn_80671320(void);
void fn_806716B0(void);
void fn_806717C0(void);
void fn_80671810(void);
void fn_80671A20(void);
void fn_80671A60(void);
void fn_80671AB0(void);
void fn_80671B20(void);
void fn_80671B70(void);
void fn_80671CC0(void);
void fn_80671CE0(void);
void fn_80671D70(void);
void fn_80671E00(void);
void fn_80671EC0(void);
void fn_80671F10(void);
void fn_80671F60(void);
void fn_80671FC0(void);
void fn_80671FD0(void);
void fn_806720A0(void);
void fn_806722D0(void);
void fn_80672450(void);
void fn_80672470(void);
void fn_806725D0(void);
void fn_80672700(void);
void fn_80672810(void);
void fn_806728F0(void);
void fn_80672A10(void);
void fn_80672B30(void);
void fn_80672CA0(void);
void fn_80672DC0(void);
void fn_80672EE0(void);
void fn_80673070(void);
void fn_80673210(void);
void fn_80673290(void);
void fn_806732B0(void);
void fn_80673630(void);
void fn_80673780(void);
void fn_80673A00(void);
void fn_80673A20(void);
void fn_80673C10(void);
void fn_80673CB0(void);
void fn_80673D10(void);
void fn_80673D70(void);
void fn_80673DD0(void);
void fn_80673E10(void);
void fn_80673E20(void);
void fn_80673EA0(void);
void fn_80673F00(void);
void fn_80673F50(void);
void fn_80673F70(void);
void fn_80673F90(void);
void fn_80673FB0(void);
void fn_80673FD0(void);
void fn_806743E0(void);
void fn_80674410(void);
void fn_80674420(void);
void fn_80674430(void);
void fn_80674438(void);
void fn_8067445C(void);
void fn_80674480(void);
void fn_806744DC(void);
void fn_80674530(void);
void fn_806745D4(void);
void fn_80674654(void);
void fn_80674764(void);
void fn_80674768(void);
void fn_8067476C(void);
void fn_80674A54(void);
void fn_80674B10(void);
void fn_80674C34(void);
void fn_80674D38(void);
void fn_80674E18(void);
void fn_80674EF8(void);
void fn_80674F00(void);
void fn_80674F08(void);
void fn_80674F10(void);

asm void fn_8066EAE0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r30, lbl_8082DE00@ha
    lis r4, lbl_807BAAD4@ha
    addi r30, r30, lbl_8082DE00@l
    li r25, 0xff
    addi r3, r30, 0x750
    addi r4, r4, lbl_807BAAD4@l
    addi r3, r3, 0x6
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066EAE0_00000060
    addi r3, r30, 0x858
    li r0, 0x2
    stb r0, 0x59(r3)
    addi r3, r3, 0x40
    li r4, 0x0
    li r5, 0x12
    bl fn_8062F1C4
    li r25, 0x6
lbl_fn_8066EAE0_00000060:
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_8066EAE0_0000013C
    addi r3, r30, 0x750
    lis r31, lbl_807BAAE8@ha
    addi r3, r3, 0x6
    li r5, 0x10
    addi r4, r31, lbl_807BAAE8@l
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066EAE0_0000013C
    li r27, 0x0
    bl OSDisableInterrupts
    addi r4, r30, 0x0
    mr r29, r3
    lwz r28, 0x64(r4)
    b lbl_fn_8066EAE0_000000C8
lbl_fn_8066EAE0_000000A4:
    lwz r26, 0x0(r28)
    addi r4, r31, lbl_807BAAE8@l
    li r5, 0x10
    mr r3, r26
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066EAE0_000000C4
    mr r27, r26
lbl_fn_8066EAE0_000000C4:
    lwz r28, 0x8(r28)
lbl_fn_8066EAE0_000000C8:
    cmpwi r28, 0x0
    bne lbl_fn_8066EAE0_000000A4
    mr r3, r29
    bl OSRestoreInterrupts
    cmpwi r27, 0x0
    beq lbl_fn_8066EAE0_0000011C
    lbz r0, 0x59(r27)
    cmplwi r0, 0x1
    ble lbl_fn_8066EAE0_000000F4
    mr r3, r25
    b lbl_fn_8066EAE0_00000140
lbl_fn_8066EAE0_000000F4:
    addi r3, r30, 0x750
    addi r4, r27, 0x40
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_8066EAE0_0000011C
    mr r3, r27
    bl fn_80672DC0
    addi r3, r27, 0x40
    bl fn_80672700
lbl_fn_8066EAE0_0000011C:
    addi r3, r30, 0x858
    li r0, 0x2
    stb r0, 0x59(r3)
    addi r3, r3, 0x40
    li r4, 0x0
    li r5, 0x12
    bl fn_8062F1C4
    li r25, 0x6
lbl_fn_8066EAE0_0000013C:
    mr r3, r25
lbl_fn_8066EAE0_00000140:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8066EC40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, lbl_808802B8
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    cmpwi r0, 0x0
    addi r26, r31, 0x0
    beq lbl_fn_8066EC40_0000022C
    lis r4, lbl_807BAAD4@ha
    addi r3, r31, 0x858
    addi r4, r4, lbl_807BAAD4@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066EC40_0000022C
    li r27, 0x0
    bl OSDisableInterrupts
    lwz r28, 0x64(r26)
    mr r30, r3
    lis r29, lbl_807BAAE8@ha
    b lbl_fn_8066EC40_000001E0
lbl_fn_8066EC40_000001C0:
    lwz r3, 0x0(r28)
    addi r4, r29, lbl_807BAAE8@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066EC40_000001DC
    lwz r27, 0x0(r28)
lbl_fn_8066EC40_000001DC:
    lwz r28, 0x8(r28)
lbl_fn_8066EC40_000001E0:
    cmpwi r28, 0x0
    bne lbl_fn_8066EC40_000001C0
    mr r3, r30
    bl OSRestoreInterrupts
    cmpwi r27, 0x0
    beq lbl_fn_8066EC40_0000022C
    addi r27, r31, 0x0
    bl OSDisableInterrupts
    lbz r27, 0x12(r27)
    bl OSRestoreInterrupts
    cmplwi r27, 0xa
    bne lbl_fn_8066EC40_0000022C
    lwz r3, 0x68(r26)
    lwz r3, 0x4(r3)
    lwz r30, 0x0(r3)
    mr r3, r30
    bl fn_80672DC0
    addi r3, r30, 0x40
    bl fn_80672700
lbl_fn_8066EC40_0000022C:
    addi r28, r31, 0x0
    bl OSDisableInterrupts
    lbz r27, 0x12(r28)
    bl OSRestoreInterrupts
    cmplwi r27, 0xa
    bne lbl_fn_8066EC40_00000254
    lwz r3, 0x68(r28)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x40
    bl fn_80672700
lbl_fn_8066EC40_00000254:
    addi r27, r31, 0x0
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_00000334
    lbz r0, 0x13d(r27)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_00000280
    addi r30, r27, 0xe4
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_00000280:
    lbz r0, 0x19d(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_00000294
    addi r30, r27, 0x144
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_00000294:
    lbz r0, 0x1fd(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_000002A8
    addi r30, r27, 0x1a4
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_000002A8:
    lbz r0, 0x25d(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_000002BC
    addi r30, r27, 0x204
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_000002BC:
    lbz r0, 0x2bd(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_000002D0
    addi r30, r27, 0x264
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_000002D0:
    lbz r0, 0x31d(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_000002E4
    addi r30, r27, 0x2c4
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_000002E4:
    lbz r0, 0x37d(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_000002F8
    addi r30, r27, 0x324
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_000002F8:
    lbz r0, 0x3dd(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_0000030C
    addi r30, r27, 0x384
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_0000030C:
    lbz r0, 0x43d(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_00000320
    addi r30, r27, 0x3e4
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_00000320:
    lbz r0, 0x49d(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8066EC40_0000033C
    addi r30, r27, 0x444
    b lbl_fn_8066EC40_0000033C
lbl_fn_8066EC40_00000334:
    lwz r4, 0x18(r27)
    lwz r30, 0x0(r4)
lbl_fn_8066EC40_0000033C:
    bl OSRestoreInterrupts
    cmpwi r30, 0x0
    bne lbl_fn_8066EC40_00000350
    li r3, 0xff
    b lbl_fn_8066EC40_00000534
lbl_fn_8066EC40_00000350:
    lbz r0, 0x59(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8066EC40_00000364
    li r3, 0xff
    b lbl_fn_8066EC40_00000534
lbl_fn_8066EC40_00000364:
    mr r3, r30
    addi r4, r31, 0x858
    li r5, 0x60
    bl memcpy
    addi r3, r30, 0x40
    bl fn_806725D0
    mr r3, r30
    bl fn_80672CA0
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_8066EC40_0000051C
    lis r4, lbl_807BAAE8@ha
    mr r3, r30
    addi r4, r4, lbl_807BAAE8@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066EC40_0000051C
    mr r3, r30
    bl fn_80673070
    addi r29, r31, 0x8b8
    li r4, 0x0
    addi r3, r29, 0x3d5
    li r5, 0x46
    bl memset
    addi r3, r29, 0x3d5
    addi r4, r30, 0x40
    li r5, 0x6
    bl memcpy
    mr r4, r30
    addi r3, r29, 0x3db
    li r5, 0x40
    bl memcpy
    addi r3, r29, 0x3ef
    addi r4, r30, 0x46
    li r5, 0x10
    bl memcpy
    addic. r4, r30, 0x40
    beq lbl_fn_8066EC40_0000040C
    addi r3, r31, 0xd20
    li r5, 0x6
    bl memcpy
lbl_fn_8066EC40_0000040C:
    addic. r4, r30, 0x46
    beq lbl_fn_8066EC40_00000424
    addi r3, r31, 0xd20
    li r5, 0x10
    addi r3, r3, 0x6
    bl memcpy
lbl_fn_8066EC40_00000424:
    cmpwi r30, 0x0
    beq lbl_fn_8066EC40_00000440
    addi r3, r31, 0xd20
    mr r4, r30
    addi r3, r3, 0x16
    li r5, 0x40
    bl memcpy
lbl_fn_8066EC40_00000440:
    lwz r3, lbl_808802BC
    li r0, 0x8
    addi r4, r31, 0xd20
    srwi r5, r3, 16
    clrlwi r6, r3, 16
    mtctr r0
lbl_fn_8066EC40_00000458:
    lhz r3, 0x0(r4)
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x2(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x4(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x6(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x8(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xa(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xc(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xe(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    addi r4, r4, 0x10
    nor r0, r3, r3
    add r5, r5, r3
    add r0, r6, r0
    clrlwi r6, r0, 16
    bdnz lbl_fn_8066EC40_00000458
    rlwimi r6, r5, 16, 0, 15
    addi r3, r31, 0xd20
    stw r6, 0x8(r1)
    addi r3, r3, 0x80
    addi r4, r1, 0x8
    li r5, 0x4
    bl memcpy
lbl_fn_8066EC40_0000051C:
    lbz r0, 0x56(r30)
    addi r4, r31, 0xdc0
    addi r5, r30, 0x40
    li r3, 0x7
    slwi r0, r0, 2
    stwx r5, r4, r0
lbl_fn_8066EC40_00000534:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8066F030(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r29, lbl_8082DE00@ha
    addi r29, r29, lbl_8082DE00@l
    bl SCCheckStatus
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8066F030_00000588
    li r3, 0x16
    b lbl_fn_8066F030_00000658
lbl_fn_8066F030_00000588:
    addi r30, r29, 0x8b8
    li r4, 0x0
    addi r3, r30, 0x1
    li r5, 0x2bc
    bl memset
    bl OSDisableInterrupts
    addi r31, r29, 0x0
    lbz r28, 0x12(r31)
    bl OSRestoreInterrupts
    stb r28, 0x8b8(r29)
    li r27, 0x0
    lwz r31, 0x64(r31)
    b lbl_fn_8066F030_000005F8
lbl_fn_8066F030_000005BC:
    clrlwi r0, r27, 24
    lwz r3, 0x0(r31)
    mulli r28, r0, 0x46
    li r5, 0x6
    addi r4, r3, 0x40
    add r3, r30, r28
    addi r3, r3, 0x1
    bl memcpy
    add r3, r30, r28
    lwz r4, 0x0(r31)
    addi r3, r3, 0x7
    li r5, 0x40
    bl memcpy
    lwz r31, 0x8(r31)
    addi r27, r27, 0x1
lbl_fn_8066F030_000005F8:
    cmpwi r31, 0x0
    bne lbl_fn_8066F030_000005BC
    addi r3, r29, 0x8b8
    bl fn_80624B60
    cmpwi r3, 0x0
    bne lbl_fn_8066F030_00000618
    li r3, 0x16
    b lbl_fn_8066F030_00000658
lbl_fn_8066F030_00000618:
    lwz r0, lbl_808802B8
    li r28, 0x19
    cmpwi r0, 0x0
    beq lbl_fn_8066F030_00000654
    lis r4, lbl_807BAAE8@ha
    addi r3, r29, 0x858
    addi r4, r4, lbl_807BAAE8@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066F030_00000654
    bl fn_80625040
    extsb. r0, r3
    bne lbl_fn_8066F030_00000654
    li r28, 0x64
lbl_fn_8066F030_00000654:
    mr r3, r28
lbl_fn_8066F030_00000658:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8066F150(void)
{
    nofralloc
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lbz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8066F150_000006A0
    cmpwi r3, 0x0
    li r0, 0x19
    bne lbl_fn_8066F150_00000694
    li r0, 0x65
lbl_fn_8066F150_00000694:
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    stb r0, 0xc(r4)
lbl_fn_8066F150_000006A0:
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8066F150_000006D0
    cmpwi r3, 0x0
    li r0, 0x5
    bne lbl_fn_8066F150_000006C4
    li r0, 0x65
lbl_fn_8066F150_000006C4:
    lis r3, lbl_8082DE00@ha
    addi r3, r3, lbl_8082DE00@l
    stb r0, 0xd(r3)
lbl_fn_8066F150_000006D0:
    li r0, 0x0
    stb r0, lbl_808802C4
    blr
}

asm void fn_8066F1C0(void)
{
    nofralloc
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lbz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8066F1C0_00000714
    subis r0, r3, 0x4
    li r5, 0x19
    cmplwi r0, 0xaf18
    bne lbl_fn_8066F1C0_00000708
    li r5, 0x66
lbl_fn_8066F1C0_00000708:
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    stb r5, 0xc(r4)
lbl_fn_8066F1C0_00000714:
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8066F1C0_00000748
    subis r0, r3, 0x4
    li r4, 0x5
    cmplwi r0, 0xaf18
    bne lbl_fn_8066F1C0_0000073C
    li r4, 0x66
lbl_fn_8066F1C0_0000073C:
    lis r3, lbl_8082DE00@ha
    addi r3, r3, lbl_8082DE00@l
    stb r4, 0xd(r3)
lbl_fn_8066F1C0_00000748:
    li r0, 0x0
    stb r0, lbl_808802C4
    blr
}

asm void fn_8066F240(void)
{
    nofralloc
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lbz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8066F240_00000790
    cmpwi r3, 0x84
    li r0, 0x19
    bne lbl_fn_8066F240_00000784
    li r0, 0x67
lbl_fn_8066F240_00000784:
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    stb r0, 0xc(r4)
lbl_fn_8066F240_00000790:
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8066F240_000007C0
    cmpwi r3, 0x84
    li r0, 0x5
    bne lbl_fn_8066F240_000007B4
    li r0, 0x67
lbl_fn_8066F240_000007B4:
    lis r3, lbl_8082DE00@ha
    addi r3, r3, lbl_8082DE00@l
    stb r0, 0xd(r3)
lbl_fn_8066F240_000007C0:
    li r0, 0x0
    stb r0, lbl_808802C4
    blr
}

asm void fn_8066F2B0(void)
{
    nofralloc
    lis r3, lbl_8082DE00@ha
    addi r3, r3, lbl_8082DE00@l
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8066F2B0_000007EC
    li r0, 0x19
    stb r0, 0xc(r3)
lbl_fn_8066F2B0_000007EC:
    lis r3, lbl_8082DE00@ha
    addi r3, r3, lbl_8082DE00@l
    lbz r0, 0xd(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8066F2B0_00000808
    li r0, 0x5
    stb r0, 0xd(r3)
lbl_fn_8066F2B0_00000808:
    li r0, 0x0
    stb r0, lbl_808802C4
    blr
}

asm void fn_8066F300(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, lbl_8082DE00@ha
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    addi r29, r3, lbl_8082DE00@l
    stw r28, 0x20(r1)
    lbz r0, 0x6e7(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8066F300_000008E4
    li r28, 0x0
    li r30, 0x0
lbl_fn_8066F300_00000858:
    bl OSDisableInterrupts
    cmplwi r28, 0x9
    bgt lbl_fn_8066F300_00000870
    add r4, r29, r30
    addi r31, r4, 0xe4
    b lbl_fn_8066F300_00000880
lbl_fn_8066F300_00000870:
    subi r0, r28, 0xa
    mulli r0, r0, 0x60
    add r4, r29, r0
    addi r31, r4, 0x4a4
lbl_fn_8066F300_00000880:
    bl OSRestoreInterrupts
    lbz r0, 0x59(r31)
    cmplwi r0, 0x8
    bne lbl_fn_8066F300_000008D4
    lis r3, lbl_8082DE00@ha
    li r7, 0x8
    addi r3, r3, lbl_8082DE00@l
    li r4, 0x2
    li r6, 0x1
    li r0, 0x0
    stb r4, 0x10(r1)
    addi r4, r31, 0x40
    lbz r3, 0x70a(r3)
    addi r5, r1, 0x8
    sth r7, 0x8(r1)
    sth r7, 0xa(r1)
    sth r6, 0xc(r1)
    sth r0, 0xe(r1)
    bl fn_806357EC
    li r3, 0xe
    b lbl_fn_8066F300_00000958
lbl_fn_8066F300_000008D4:
    addi r28, r28, 0x1
    addi r30, r30, 0x60
    cmpwi r28, 0x10
    blt lbl_fn_8066F300_00000858
lbl_fn_8066F300_000008E4:
    addi r3, r29, 0x710
    bl OSCancelAlarm
    lwz r0, lbl_808802A8
    cmpwi r0, 0x0
    bne lbl_fn_8066F300_00000924
    bl OSDisableInterrupts
    lis r4, lbl_8082DE00@ha
    li r5, 0x0
    addi r4, r4, lbl_8082DE00@l
    li r0, 0x1
    stb r5, 0x6eb(r4)
    stb r0, 0x6ea(r4)
    bl OSRestoreInterrupts
    li r3, 0x0
    li r4, 0x1
    bl fn_8062CACC
lbl_fn_8066F300_00000924:
    lbz r0, 0x6e9(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8066F300_00000938
    lwz r12, 0x0(r29)
    b lbl_fn_8066F300_0000093C
lbl_fn_8066F300_00000938:
    lwz r12, 0x4(r29)
lbl_fn_8066F300_0000093C:
    cmpwi r12, 0x0
    beq lbl_fn_8066F300_00000954
    lbz r4, 0x6e6(r29)
    li r3, 0x1
    mtctr r12
    bctrl
lbl_fn_8066F300_00000954:
    li r3, 0x0
lbl_fn_8066F300_00000958:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8066F460(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    addi r29, r31, 0x0
    stw r28, 0x20(r1)
    lis r28, lbl_807BA8B8@ha
    addi r28, r28, lbl_807BA8B8@l
    lbz r0, 0xc(r29)
    cmpwi r0, 0x13
    beq lbl_fn_8066F460_00000E8C
    bge lbl_fn_8066F460_00000A3C
    cmpwi r0, 0x9
    beq lbl_fn_8066F460_0000132C
    bge lbl_fn_8066F460_00000A08
    cmpwi r0, 0x4
    beq lbl_fn_8066F460_00000BE8
    bge lbl_fn_8066F460_000009F0
    cmpwi r0, 0x2
    beq lbl_fn_8066F460_00000B24
    bge lbl_fn_8066F460_000011D0
    cmpwi r0, 0x1
    bge lbl_fn_8066F460_00000AAC
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_000009F0:
    cmpwi r0, 0x7
    beq lbl_fn_8066F460_00001030
    bge lbl_fn_8066F460_000010BC
    cmpwi r0, 0x6
    bge lbl_fn_8066F460_0000132C
    b lbl_fn_8066F460_00000CD4
lbl_fn_8066F460_00000A08:
    cmpwi r0, 0xf
    beq lbl_fn_8066F460_00000E10
    bge lbl_fn_8066F460_00000A2C
    cmpwi r0, 0xd
    beq lbl_fn_8066F460_0000132C
    bge lbl_fn_8066F460_000011C4
    cmpwi r0, 0xb
    bge lbl_fn_8066F460_0000132C
    b lbl_fn_8066F460_0000111C
lbl_fn_8066F460_00000A2C:
    cmpwi r0, 0x11
    beq lbl_fn_8066F460_00000DA8
    bge lbl_fn_8066F460_00000E1C
    b lbl_fn_8066F460_00000D04
lbl_fn_8066F460_00000A3C:
    cmpwi r0, 0x1d
    beq lbl_fn_8066F460_00000AB8
    bge lbl_fn_8066F460_00000A7C
    cmpwi r0, 0x18
    beq lbl_fn_8066F460_00001210
    bge lbl_fn_8066F460_00000A6C
    cmpwi r0, 0x16
    beq lbl_fn_8066F460_000010F0
    bge lbl_fn_8066F460_00001158
    cmpwi r0, 0x15
    bge lbl_fn_8066F460_0000100C
    b lbl_fn_8066F460_00001000
lbl_fn_8066F460_00000A6C:
    cmpwi r0, 0x1a
    beq lbl_fn_8066F460_0000132C
    bge lbl_fn_8066F460_0000132C
    b lbl_fn_8066F460_000010FC
lbl_fn_8066F460_00000A7C:
    cmpwi r0, 0x67
    beq lbl_fn_8066F460_00001304
    bge lbl_fn_8066F460_00000AA0
    cmpwi r0, 0x65
    beq lbl_fn_8066F460_00001298
    bge lbl_fn_8066F460_000012D0
    cmpwi r0, 0x64
    bge lbl_fn_8066F460_00001264
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000AA0:
    cmpwi r0, 0xff
    beq lbl_fn_8066F460_00001194
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000AAC:
    bl fn_8066E980
    stb r3, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000AB8:
    lbz r0, 0x6e8(r29)
    extsb. r0, r0
    bne lbl_fn_8066F460_00000ACC
    li r0, 0xe
    b lbl_fn_8066F460_00000B1C
lbl_fn_8066F460_00000ACC:
    bl OSDisableInterrupts
    lbz r28, 0x6e5(r29)
    bl OSRestoreInterrupts
    cmplwi r28, 0x4
    bne lbl_fn_8066F460_00000AFC
    bl OSDisableInterrupts
    lbz r28, 0x6e4(r29)
    bl OSRestoreInterrupts
    cmplwi r28, 0x4
    bne lbl_fn_8066F460_00000AFC
    li r0, 0xe
    b lbl_fn_8066F460_00000B1C
lbl_fn_8066F460_00000AFC:
    lbz r3, 0x749(r29)
    subi r0, r3, 0x1
    stb r0, 0x749(r29)
    extsb. r0, r0
    bge lbl_fn_8066F460_00000B18
    li r0, 0x2
    b lbl_fn_8066F460_00000B1C
lbl_fn_8066F460_00000B18:
    li r0, 0x1d
lbl_fn_8066F460_00000B1C:
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000B24:
    lbz r0, 0x6e7(r29)
    li r4, 0x1
    li r3, 0x0
    stb r4, 0x8(r1)
    cmpwi r0, 0x0
    stb r4, 0xa(r1)
    stb r3, 0xb(r1)
    beq lbl_fn_8066F460_00000B50
    li r0, 0x3
    stb r0, 0x9(r1)
    b lbl_fn_8066F460_00000BB0
lbl_fn_8066F460_00000B50:
    lbz r0, 0x6e9(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000B8C
    bl OSDisableInterrupts
    lbz r28, 0x6e5(r29)
    bl OSRestoreInterrupts
    cmplwi r28, 0x3
    bne lbl_fn_8066F460_00000B78
    li r3, 0xa
    b lbl_fn_8066F460_00000B7C
lbl_fn_8066F460_00000B78:
    li r3, 0x5
lbl_fn_8066F460_00000B7C:
    lbz r0, 0x6e8(r29)
    subf r0, r0, r3
    stb r0, 0x9(r1)
    b lbl_fn_8066F460_00000BB0
lbl_fn_8066F460_00000B8C:
    bl OSDisableInterrupts
    lbz r28, 0x6e5(r29)
    bl OSRestoreInterrupts
    cmplwi r28, 0x3
    bne lbl_fn_8066F460_00000BA8
    li r0, 0x8
    b lbl_fn_8066F460_00000BAC
lbl_fn_8066F460_00000BA8:
    li r0, 0x3
lbl_fn_8066F460_00000BAC:
    stb r0, 0x9(r1)
lbl_fn_8066F460_00000BB0:
    li r0, 0x0
    stb r0, lbl_808802D7
    addi r3, r31, 0x750
    li r4, 0x0
    li r5, 0x108
    bl memset
    lis r5, fn_80673630@ha
    addi r3, r1, 0x8
    addi r5, r5, fn_80673630@l
    li r4, 0x0
    bl fn_8062CB24
    li r0, 0x3
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000BE8:
    lbz r0, lbl_808802D7
    li r30, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8066F460_00000C64
    addi r3, r31, 0x750
    addi r4, r28, 0x21c
    addi r3, r3, 0x6
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066F460_00000C18
    li r30, 0x5
lbl_fn_8066F460_00000C18:
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_8066F460_00000C44
    addi r3, r31, 0x750
    addi r4, r28, 0x230
    addi r3, r3, 0x6
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066F460_00000C44
    li r30, 0x5
lbl_fn_8066F460_00000C44:
    addi r3, r31, 0x0
    lbz r4, lbl_808802D6
    lbz r0, 0x70b(r3)
    extsb r3, r4
    extsb r0, r0
    cmpw r3, r0
    bge lbl_fn_8066F460_00000C64
    li r30, 0x1
lbl_fn_8066F460_00000C64:
    addi r28, r31, 0x0
    lbz r0, 0x6e9(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000CCC
    cmplwi r30, 0x1
    bne lbl_fn_8066F460_00000CCC
    li r30, 0x18
    bl OSDisableInterrupts
    lbz r28, 0x6e5(r28)
    bl OSRestoreInterrupts
    cmplwi r28, 0x3
    bne lbl_fn_8066F460_00000C9C
    li r0, 0xc8
    b lbl_fn_8066F460_00000CA0
lbl_fn_8066F460_00000C9C:
    li r0, 0x64
lbl_fn_8066F460_00000CA0:
    addi r31, r31, 0x0
    sth r0, 0x74a(r31)
    bl OSDisableInterrupts
    li r4, 0x0
    li r0, 0x1
    stb r4, 0x6eb(r31)
    stb r0, 0x6ea(r31)
    bl OSRestoreInterrupts
    li r3, 0x0
    li r4, 0x1
    bl fn_8062CACC
lbl_fn_8066F460_00000CCC:
    stb r30, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000CD4:
    addi r3, r31, 0x750
    li r28, 0x11
    bl fn_80672810
    cmpwi r3, 0x0
    beq lbl_fn_8066F460_00000CFC
    mr r4, r3
    addi r3, r31, 0x858
    li r5, 0x60
    bl memcpy
    li r28, 0x10
lbl_fn_8066F460_00000CFC:
    stb r28, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000D04:
    addi r28, r31, 0x858
    li r3, 0x1
    lbz r0, 0x5b(r28)
    stb r3, 0x59(r28)
    cmpwi r0, 0x2
    beq lbl_fn_8066F460_00000D44
    bge lbl_fn_8066F460_00000D30
    cmpwi r0, 0x0
    beq lbl_fn_8066F460_00000D44
    bge lbl_fn_8066F460_00000D78
    b lbl_fn_8066F460_00000D9C
lbl_fn_8066F460_00000D30:
    cmpwi r0, 0x6
    bge lbl_fn_8066F460_00000D9C
    cmpwi r0, 0x4
    bge lbl_fn_8066F460_00000D44
    b lbl_fn_8066F460_00000D78
lbl_fn_8066F460_00000D44:
    addi r3, r31, 0x0
    lbz r0, 0x6e9(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000D6C
    mr r3, r28
    bl fn_80672DC0
    addi r3, r28, 0x40
    bl fn_80672700
    li r0, 0x11
    b lbl_fn_8066F460_00000DA0
lbl_fn_8066F460_00000D6C:
    li r0, 0x4
    stb r0, 0x5b(r28)
    b lbl_fn_8066F460_00000D9C
lbl_fn_8066F460_00000D78:
    mr r3, r28
    bl fn_80672A10
    addi r3, r31, 0x0
    lwz r3, 0x18(r3)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x40
    bl fn_80672700
    li r0, 0x11
    b lbl_fn_8066F460_00000DA0
lbl_fn_8066F460_00000D9C:
    li r0, 0xf
lbl_fn_8066F460_00000DA0:
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000DA8:
    lbz r0, 0x6e9(r29)
    addi r28, r31, 0x858
    li r3, 0x1
    stb r3, 0x59(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000DC8
    li r0, 0x0
    b lbl_fn_8066F460_00000DCC
lbl_fn_8066F460_00000DC8:
    li r0, 0x1
lbl_fn_8066F460_00000DCC:
    stb r0, 0x5b(r28)
    addi r3, r28, 0x40
    addi r4, r31, 0x750
    li r5, 0x6
    bl memcpy
    addi r4, r31, 0x750
    mr r3, r28
    addi r4, r4, 0x6
    li r5, 0x40
    bl memcpy
    addi r3, r28, 0x46
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r0, 0xf
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000E10:
    bl fn_8066EAE0
    stb r3, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000E1C:
    addi r3, r31, 0x858
    lbz r0, 0x5b(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8066F460_00000E70
    bge lbl_fn_8066F460_00000E48
    cmpwi r0, 0x1
    beq lbl_fn_8066F460_00000E58
    bge lbl_fn_8066F460_00000E80
    cmpwi r0, 0x0
    bge lbl_fn_8066F460_00000E60
    b lbl_fn_8066F460_00000E84
lbl_fn_8066F460_00000E48:
    cmpwi r0, 0x5
    beq lbl_fn_8066F460_00000E68
    bge lbl_fn_8066F460_00000E84
    b lbl_fn_8066F460_00000E78
lbl_fn_8066F460_00000E58:
    li r0, 0x13
    b lbl_fn_8066F460_00000E84
lbl_fn_8066F460_00000E60:
    li r0, 0x14
    b lbl_fn_8066F460_00000E84
lbl_fn_8066F460_00000E68:
    li r0, 0x15
    b lbl_fn_8066F460_00000E84
lbl_fn_8066F460_00000E70:
    li r0, 0x17
    b lbl_fn_8066F460_00000E84
lbl_fn_8066F460_00000E78:
    li r0, 0x7
    b lbl_fn_8066F460_00000E84
lbl_fn_8066F460_00000E80:
    li r0, 0x7
lbl_fn_8066F460_00000E84:
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00000E8C:
    bl OSDisableInterrupts
    lbz r28, 0x13(r29)
    bl OSRestoreInterrupts
    cmplwi r28, 0x6
    bne lbl_fn_8066F460_00000EB0
    lwz r3, 0x18(r29)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x40
    bl fn_80672700
lbl_fn_8066F460_00000EB0:
    addi r28, r31, 0x0
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000F90
    lbz r0, 0x13d(r28)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000EDC
    addi r30, r28, 0xe4
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000EDC:
    lbz r0, 0x19d(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000EF0
    addi r30, r28, 0x144
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000EF0:
    lbz r0, 0x1fd(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000F04
    addi r30, r28, 0x1a4
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000F04:
    lbz r0, 0x25d(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000F18
    addi r30, r28, 0x204
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000F18:
    lbz r0, 0x2bd(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000F2C
    addi r30, r28, 0x264
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000F2C:
    lbz r0, 0x31d(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000F40
    addi r30, r28, 0x2c4
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000F40:
    lbz r0, 0x37d(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000F54
    addi r30, r28, 0x324
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000F54:
    lbz r0, 0x3dd(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000F68
    addi r30, r28, 0x384
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000F68:
    lbz r0, 0x43d(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000F7C
    addi r30, r28, 0x3e4
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000F7C:
    lbz r0, 0x49d(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00000F98
    addi r30, r28, 0x444
    b lbl_fn_8066F460_00000F98
lbl_fn_8066F460_00000F90:
    lwz r4, 0x18(r28)
    lwz r30, 0x0(r4)
lbl_fn_8066F460_00000F98:
    bl OSRestoreInterrupts
    cmpwi r30, 0x0
    bne lbl_fn_8066F460_00000FAC
    li r5, 0xff
    b lbl_fn_8066F460_00000FF8
lbl_fn_8066F460_00000FAC:
    lbz r0, 0x59(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8066F460_00000FC0
    li r5, 0xff
    b lbl_fn_8066F460_00000FF8
lbl_fn_8066F460_00000FC0:
    mr r3, r30
    addi r4, r31, 0x858
    li r5, 0x60
    bl memcpy
    addi r3, r30, 0x40
    bl fn_806725D0
    mr r3, r30
    bl fn_806728F0
    lbz r0, 0x56(r30)
    addi r3, r31, 0xdc0
    addi r4, r30, 0x40
    li r5, 0x17
    slwi r0, r0, 2
    stwx r4, r3, r0
lbl_fn_8066F460_00000FF8:
    stb r5, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00001000:
    bl fn_8066EC40
    stb r3, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_0000100C:
    addi r3, r31, 0x858
    bl fn_80672A10
    lwz r3, 0x18(r29)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x40
    bl fn_80672700
    bl fn_8066EC40
    stb r3, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00001030:
    lbz r0, 0xe(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8066F460_00001044
    li r0, 0x1
    b lbl_fn_8066F460_00001048
lbl_fn_8066F460_00001044:
    li r0, 0x0
lbl_fn_8066F460_00001048:
    cmpwi r0, 0x0
    beq lbl_fn_8066F460_00001058
    li r0, 0x7
    b lbl_fn_8066F460_000010B4
lbl_fn_8066F460_00001058:
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_8066F460_00001084
    addi r3, r31, 0x858
    addi r4, r28, 0x230
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8066F460_00001084
    li r0, 0x16
    b lbl_fn_8066F460_000010B4
lbl_fn_8066F460_00001084:
    addi r3, r31, 0x858
    addi r3, r3, 0x40
    bl fn_80672810
    li r0, 0x2
    lis r6, fn_80673A20@ha
    stb r0, 0xe(r29)
    addi r4, r3, 0x40
    addi r5, r3, 0x46
    addi r6, r6, fn_80673A20@l
    li r3, 0x1
    bl fn_8063367C
    li r0, 0x8
lbl_fn_8066F460_000010B4:
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_000010BC:
    lbz r0, 0xe(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8066F460_000010D0
    li r0, 0x1
    b lbl_fn_8066F460_000010D4
lbl_fn_8066F460_000010D0:
    li r0, 0x0
lbl_fn_8066F460_000010D4:
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_000010E4
    li r0, 0x16
    b lbl_fn_8066F460_000010E8
lbl_fn_8066F460_000010E4:
    li r0, 0x8
lbl_fn_8066F460_000010E8:
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_000010F0:
    bl fn_8066F030
    stb r3, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_000010FC:
    bl OSDisableInterrupts
    li r0, 0xd
    stb r0, 0xc(r29)
    bl OSRestoreInterrupts
    lis r3, fn_8066E940@ha
    addi r3, r3, fn_8066E940@l
    bl fn_806242D0
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_0000111C:
    lbz r0, 0xe(r29)
    li r28, 0xa
    cmpwi r0, 0x0
    beq lbl_fn_8066F460_00001134
    li r0, 0x1
    b lbl_fn_8066F460_00001138
lbl_fn_8066F460_00001134:
    li r0, 0x0
lbl_fn_8066F460_00001138:
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00001150
    addi r3, r31, 0x0
    li r28, 0x14
    addi r3, r3, 0x6fc
    bl fn_80672700
lbl_fn_8066F460_00001150:
    stb r28, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00001158:
    lbz r6, 0x6e6(r29)
    addi r3, r31, 0x858
    li r4, 0x0
    li r5, 0x60
    addi r0, r6, 0x1
    stb r0, 0x6e6(r29)
    bl memset
    lbz r0, 0x6e9(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_00001188
    li r0, 0xe
    b lbl_fn_8066F460_0000118C
lbl_fn_8066F460_00001188:
    li r0, 0x1
lbl_fn_8066F460_0000118C:
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00001194:
    addi r3, r31, 0x858
    li r4, 0x0
    li r5, 0x60
    bl memset
    lbz r0, 0x6e9(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_000011B8
    li r0, 0xe
    b lbl_fn_8066F460_000011BC
lbl_fn_8066F460_000011B8:
    li r0, 0x1
lbl_fn_8066F460_000011BC:
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_000011C4:
    bl fn_8066F300
    stb r3, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_000011D0:
    bl OSDisableInterrupts
    lbz r28, 0x6e5(r29)
    bl OSRestoreInterrupts
    cmplwi r28, 0x4
    bne lbl_fn_8066F460_00001204
    bl OSDisableInterrupts
    lbz r28, 0x6e4(r29)
    bl OSRestoreInterrupts
    cmplwi r28, 0x4
    bne lbl_fn_8066F460_00001204
    bl fn_8062CBA8
    li r0, 0x1a
    b lbl_fn_8066F460_00001208
lbl_fn_8066F460_00001204:
    li r0, 0x3
lbl_fn_8066F460_00001208:
    stb r0, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00001210:
    li r30, 0x18
    bl OSDisableInterrupts
    lbz r28, 0x6e5(r29)
    bl OSRestoreInterrupts
    cmplwi r28, 0x4
    bne lbl_fn_8066F460_00001240
    bl OSDisableInterrupts
    lbz r28, 0x6e4(r29)
    bl OSRestoreInterrupts
    cmplwi r28, 0x4
    bne lbl_fn_8066F460_00001240
    li r30, 0xe
lbl_fn_8066F460_00001240:
    addi r4, r31, 0x0
    lha r3, 0x74a(r4)
    subi r0, r3, 0x1
    sth r0, 0x74a(r4)
    extsh. r0, r0
    bge lbl_fn_8066F460_0000125C
    li r30, 0x1
lbl_fn_8066F460_0000125C:
    stb r30, 0xc(r29)
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00001264:
    lbz r0, lbl_808802C4
    addi r3, r28, 0x244
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_0000132C
    li r0, 0x1
    lis r6, fn_8066F150@ha
    stb r0, lbl_808802C4
    addi r4, r31, 0xe00
    addi r6, r6, fn_8066F150@l
    addi r7, r31, 0xe8c
    li r5, 0x2
    bl fn_8061F9F0
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00001298:
    lbz r0, lbl_808802C4
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_0000132C
    li r0, 0x1
    lis r4, 0x5
    lis r6, fn_8066F1C0@ha
    stb r0, lbl_808802C4
    addi r3, r31, 0xe00
    subi r4, r4, 0x50e8
    addi r6, r6, fn_8066F1C0@l
    addi r7, r31, 0xe8c
    li r5, 0x0
    bl fn_8061E9E0
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_000012D0:
    lbz r0, lbl_808802C4
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_0000132C
    li r0, 0x1
    lis r6, fn_8066F240@ha
    stb r0, lbl_808802C4
    addi r3, r31, 0xe00
    addi r4, r31, 0xd20
    addi r6, r6, fn_8066F240@l
    addi r7, r31, 0xe8c
    li r5, 0x84
    bl fn_8061E8C0
    b lbl_fn_8066F460_0000132C
lbl_fn_8066F460_00001304:
    lbz r0, lbl_808802C4
    cmpwi r0, 0x0
    bne lbl_fn_8066F460_0000132C
    li r0, 0x1
    lis r4, fn_8066F2B0@ha
    stb r0, lbl_808802C4
    addi r3, r31, 0xe00
    addi r4, r4, fn_8066F2B0@l
    addi r5, r31, 0xe8c
    bl fn_8061FBE0
lbl_fn_8066F460_0000132C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8066FE30(void)
{
    nofralloc
    lis r8, lbl_8082ED60@ha
    lis r7, fn_8066F460@ha
    addi r8, r8, lbl_8082ED60@l
    li r5, 0x0
    addi r7, r7, fn_8066F460@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b fn_805EDC80
}

asm void fn_8066FE50(void)
{
    nofralloc
    lis r3, lbl_8082DE00@ha
    addi r3, r3, lbl_8082DE00@l
    lbz r0, 0xd(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x8
    stb r0, 0xd(r3)
    blr
}

asm void fn_8066FE70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lis r29, lbl_8082DE00@ha
    addi r29, r29, lbl_8082DE00@l
    addi r31, r29, 0xe4
lbl_fn_8066FE70_000013B8:
    lbz r0, 0x59(r31)
    cmplwi r0, 0x1
    ble lbl_fn_8066FE70_000013CC
    addi r3, r31, 0x40
    bl fn_806317D8
lbl_fn_8066FE70_000013CC:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0xa
    blt lbl_fn_8066FE70_000013B8
    addi r31, r29, 0x4a4
    li r30, 0x0
lbl_fn_8066FE70_000013E4:
    lbz r0, 0x59(r31)
    cmplwi r0, 0x1
    ble lbl_fn_8066FE70_000013F8
    addi r3, r31, 0x40
    bl fn_806317D8
lbl_fn_8066FE70_000013F8:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0x6
    blt lbl_fn_8066FE70_000013E4
    lwz r31, 0x1c(r1)
    li r3, 0x3
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8066FF10(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lis r29, lbl_8082DE00@ha
    addi r29, r29, lbl_8082DE00@l
    bl OSDisableInterrupts
    lbz r31, 0x6e5(r29)
    bl OSRestoreInterrupts
    cmpwi r31, 0x0
    beq lbl_fn_8066FF10_0000146C
    li r3, 0x3
    b lbl_fn_8066FF10_00001618
lbl_fn_8066FF10_0000146C:
    li r30, 0x0
    li r31, 0x0
lbl_fn_8066FF10_00001474:
    add r3, r29, r31
    lbz r0, 0x13d(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8066FF10_0000148C
    addi r3, r3, 0x124
    bl fn_80672700
lbl_fn_8066FF10_0000148C:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0xa
    blt lbl_fn_8066FF10_00001474
    li r30, 0x0
    li r31, 0x0
lbl_fn_8066FF10_000014A4:
    add r3, r29, r31
    lbz r0, 0x4fd(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8066FF10_000014BC
    addi r3, r3, 0x4e4
    bl fn_80672700
lbl_fn_8066FF10_000014BC:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0x6
    blt lbl_fn_8066FF10_000014A4
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_8066FF10_00001614
    bl fn_80625040
    extsb. r0, r3
    bne lbl_fn_8066FF10_0000160C
    li r0, 0x0
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_8066FF10_00001500
    bl memcpy
lbl_fn_8066FF10_00001500:
    lis r3, lbl_8082EB20@ha
    addi r4, r1, 0x10
    addi r3, r3, lbl_8082EB20@l
    li r5, 0x10
    addi r3, r3, 0x6
    bl memcpy
    b lbl_fn_8066FF10_00001520
    bl memcpy
lbl_fn_8066FF10_00001520:
    lwz r3, lbl_808802BC
    lis r4, lbl_8082EB20@ha
    li r0, 0x8
    addi r4, r4, lbl_8082EB20@l
    srwi r5, r3, 16
    clrlwi r6, r3, 16
    mtctr r0
lbl_fn_8066FF10_0000153C:
    lhz r3, 0x0(r4)
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x2(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x4(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x6(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x8(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xa(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xc(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xe(r4)
    add r0, r6, r0
    clrlwi r6, r0, 16
    addi r4, r4, 0x10
    nor r0, r3, r3
    add r5, r5, r3
    add r0, r6, r0
    clrlwi r6, r0, 16
    bdnz lbl_fn_8066FF10_0000153C
    lis r3, lbl_8082EB20@ha
    rlwimi r6, r5, 16, 0, 15
    addi r3, r3, lbl_8082EB20@l
    stw r6, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x4
    addi r3, r3, 0x80
    bl memcpy
    li r3, 0x64
    b lbl_fn_8066FF10_00001618
lbl_fn_8066FF10_0000160C:
    li r3, 0x5
    b lbl_fn_8066FF10_00001618
lbl_fn_8066FF10_00001614:
    li r3, 0x5
lbl_fn_8066FF10_00001618:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80670120(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    lis r30, lbl_8082DE00@ha
    addi r30, r30, lbl_8082DE00@l
    stw r29, 0x14(r1)
    addi r29, r30, 0x0
    lbz r0, 0xd(r29)
    stb r31, 0xc(r29)
    cmpwi r0, 0x7
    beq lbl_fn_80670120_00001894
    bge lbl_fn_80670120_000016A4
    cmpwi r0, 0x3
    beq lbl_fn_80670120_000016F8
    bge lbl_fn_80670120_00001698
    cmpwi r0, 0x1
    beq lbl_fn_80670120_000016D4
    bge lbl_fn_80670120_000016EC
    b lbl_fn_80670120_00001894
lbl_fn_80670120_00001698:
    cmpwi r0, 0x5
    beq lbl_fn_80670120_00001704
    b lbl_fn_80670120_00001894
lbl_fn_80670120_000016A4:
    cmpwi r0, 0x65
    beq lbl_fn_80670120_00001800
    bge lbl_fn_80670120_000016C4
    cmpwi r0, 0x64
    bge lbl_fn_80670120_000017C8
    cmpwi r0, 0x9
    bge lbl_fn_80670120_00001894
    b lbl_fn_80670120_00001770
lbl_fn_80670120_000016C4:
    cmpwi r0, 0x67
    beq lbl_fn_80670120_0000186C
    bge lbl_fn_80670120_00001894
    b lbl_fn_80670120_00001838
lbl_fn_80670120_000016D4:
    li r3, 0x0
    li r4, 0x0
    bl fn_8062CACC
    li r0, 0x2
    stb r0, 0xd(r29)
    b lbl_fn_80670120_00001894
lbl_fn_80670120_000016EC:
    bl fn_8066FE70
    stb r3, 0xd(r29)
    b lbl_fn_80670120_00001894
lbl_fn_80670120_000016F8:
    bl fn_8066FF10
    stb r3, 0xd(r29)
    b lbl_fn_80670120_00001894
lbl_fn_80670120_00001704:
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_fn_80670120_00001894
    addi r3, r30, 0x8b8
    li r4, 0x0
    li r5, 0x461
    bl memset
    addi r3, r30, 0x1f60
    li r4, 0x0
    li r5, 0x205
    bl memset
    addi r3, r30, 0x8b8
    bl fn_80624B60
    mr r31, r3
    addi r3, r30, 0x1f60
    bl fn_80624B80
    or. r0, r31, r3
    beq lbl_fn_80670120_00001764
    li r0, 0x6
    lis r3, fn_8066FE50@ha
    stb r0, 0xd(r29)
    addi r3, r3, fn_8066FE50@l
    bl fn_806242D0
    b lbl_fn_80670120_00001894
lbl_fn_80670120_00001764:
    li r0, 0x8
    stb r0, 0xd(r29)
    b lbl_fn_80670120_00001894
lbl_fn_80670120_00001770:
    bl OSDisableInterrupts
    lbz r30, 0x6ea(r29)
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    stb r31, 0x6eb(r29)
    stb r30, 0x6ea(r29)
    bl OSRestoreInterrupts
    mr r4, r30
    li r3, 0x0
    bl fn_8062CACC
    addi r3, r29, 0x710
    bl OSCancelAlarm
    lwz r12, 0x8(r29)
    stb r31, 0xd(r29)
    cmpwi r12, 0x0
    beq lbl_fn_80670120_000017BC
    li r3, 0x1
    mtctr r12
    bctrl
lbl_fn_80670120_000017BC:
    li r0, 0x0
    stb r0, 0xd(r29)
    b lbl_fn_80670120_00001894
lbl_fn_80670120_000017C8:
    lbz r0, lbl_808802C4
    lis r3, lbl_807BAAFC@ha
    addi r3, r3, lbl_807BAAFC@l
    cmpwi r0, 0x0
    bne lbl_fn_80670120_00001894
    li r0, 0x1
    lis r6, fn_8066F150@ha
    stb r0, lbl_808802C4
    addi r4, r30, 0xe00
    addi r6, r6, fn_8066F150@l
    addi r7, r30, 0xe8c
    li r5, 0x2
    bl fn_8061F9F0
    b lbl_fn_80670120_00001894
lbl_fn_80670120_00001800:
    lbz r0, lbl_808802C4
    cmpwi r0, 0x0
    bne lbl_fn_80670120_00001894
    li r0, 0x1
    lis r4, 0x5
    lis r6, fn_8066F1C0@ha
    stb r0, lbl_808802C4
    addi r3, r30, 0xe00
    subi r4, r4, 0x50e8
    addi r6, r6, fn_8066F1C0@l
    addi r7, r30, 0xe8c
    li r5, 0x0
    bl fn_8061E9E0
    b lbl_fn_80670120_00001894
lbl_fn_80670120_00001838:
    lbz r0, lbl_808802C4
    cmpwi r0, 0x0
    bne lbl_fn_80670120_00001894
    li r0, 0x1
    lis r6, fn_8066F240@ha
    stb r0, lbl_808802C4
    addi r3, r30, 0xe00
    addi r4, r30, 0xd20
    addi r6, r6, fn_8066F240@l
    addi r7, r30, 0xe8c
    li r5, 0x84
    bl fn_8061E8C0
    b lbl_fn_80670120_00001894
lbl_fn_80670120_0000186C:
    lbz r0, lbl_808802C4
    cmpwi r0, 0x0
    bne lbl_fn_80670120_00001894
    li r0, 0x1
    lis r4, fn_8066F2B0@ha
    stb r0, lbl_808802C4
    addi r3, r30, 0xe00
    addi r4, r4, fn_8066F2B0@l
    addi r5, r30, 0xe8c
    bl fn_8061FBE0
lbl_fn_80670120_00001894:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80670390(void)
{
    nofralloc
    lis r8, lbl_8082ED60@ha
    lis r7, fn_80670120@ha
    addi r8, r8, lbl_8082ED60@l
    li r5, 0x0
    addi r7, r7, fn_80670120@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b fn_805EDC80
}

asm void fn_806703B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r3, lbl_8082DE00@ha
    addi r28, r3, lbl_8082DE00@l
    lbz r0, 0xe(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806703B0_000019C0
    li r27, 0x0
    li r29, 0x0
lbl_fn_806703B0_00001900:
    bl OSDisableInterrupts
    cmplwi r27, 0x9
    bgt lbl_fn_806703B0_00001918
    add r4, r28, r29
    addi r31, r4, 0xe4
    b lbl_fn_806703B0_00001928
lbl_fn_806703B0_00001918:
    subi r0, r27, 0xa
    mulli r0, r0, 0x60
    add r4, r28, r0
    addi r31, r4, 0x4a4
lbl_fn_806703B0_00001928:
    bl OSRestoreInterrupts
    lbz r0, 0x59(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806703B0_000019A8
    lbz r0, 0x5c(r31)
    cmplwi r0, 0x1
    bne lbl_fn_806703B0_0000196C
    li r0, 0x3
    lis r4, fn_80673A20@ha
    stb r0, 0xe(r28)
    addi r3, r31, 0x40
    addi r4, r4, fn_80673A20@l
    bl fn_8063374C
    li r0, 0x0
    stb r0, 0x5c(r31)
    li r3, 0x2
    b lbl_fn_806703B0_000019C4
lbl_fn_806703B0_0000196C:
    cmplwi r0, 0x3
    beq lbl_fn_806703B0_000019A8
    addi r3, r31, 0x40
    bl fn_80672810
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_806703B0_000019A8
    bl OSDisableInterrupts
    mr r31, r3
    mr r3, r30
    li r4, 0x0
    li r5, 0x60
    bl memset
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_806703B0_000019A8:
    addi r27, r27, 0x1
    addi r29, r29, 0x60
    cmpwi r27, 0x10
    blt lbl_fn_806703B0_00001900
    li r3, 0x3
    b lbl_fn_806703B0_000019C4
lbl_fn_806703B0_000019C0:
    li r3, 0x2
lbl_fn_806703B0_000019C4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806704C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    lbz r0, 0xf(r31)
    cmpwi r0, 0x1
    beq lbl_fn_806704C0_00001A18
    cmpwi r0, 0x2
    beq lbl_fn_806704C0_00001A48
    cmpwi r0, 0x3
    beq lbl_fn_806704C0_00001A54
    b lbl_fn_806704C0_00001B4C
lbl_fn_806704C0_00001A18:
    lwz r0, 0x740(r31)
    cmplwi r0, 0x1
    bne lbl_fn_806704C0_00001A3C
    li r0, 0x1
    lis r4, fn_80673A20@ha
    stb r0, 0xe(r31)
    addi r4, r4, fn_80673A20@l
    li r3, 0x0
    bl fn_806335A4
lbl_fn_806704C0_00001A3C:
    li r0, 0x2
    stb r0, 0xf(r31)
    b lbl_fn_806704C0_00001B4C
lbl_fn_806704C0_00001A48:
    bl fn_806703B0
    stb r3, 0xf(r31)
    b lbl_fn_806704C0_00001B4C
lbl_fn_806704C0_00001A54:
    lbz r0, 0xe(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806704C0_00001B44
    addi r3, r31, 0x710
    bl OSCancelAlarm
    addi r3, r1, 0x8
    bl fn_806331C8
    lhz r0, 0xa(r1)
    clrlwi r0, r0, 20
    cmpwi r0, 0xa7
    bne lbl_fn_806704C0_00001B38
    lis r3, lbl_807BA9A0@ha
    lwz r0, __OSInIPL
    addi r8, r3, lbl_807BA9A0@l
    lbz r4, lbl_807BA9A0@l(r3)
    lbz r6, 0x3(r8)
    cmpwi r0, 0x0
    lbz r3, 0x7(r8)
    lbz r5, 0x2(r8)
    slwi r6, r6, 8
    lbz r0, 0x6(r8)
    slwi r3, r3, 8
    add r7, r6, r5
    lbz r6, 0x1(r8)
    add r5, r3, r0
    lbz r3, 0x5(r8)
    slwi r7, r7, 8
    lbz r0, 0x4(r8)
    slwi r5, r5, 8
    add r3, r5, r3
    add r6, r7, r6
    slwi r5, r6, 8
    slwi r3, r3, 8
    add r4, r5, r4
    stw r4, lbl_808802C8
    add r0, r3, r0
    stw r0, lbl_808802D0
    beq lbl_fn_806704C0_00001B14
    lis r3, 0x1
    lis r5, lbl_807BA994@ha
    subi r0, r3, 0x3f6
    lis r6, fn_80672450@ha
    clrlwi r3, r0, 16
    addi r5, r5, lbl_807BA994@l
    addi r6, r6, fn_80672450@l
    li r4, 0x9
    bl fn_806332CC
    b lbl_fn_806704C0_00001B3C
lbl_fn_806704C0_00001B14:
    lis r3, 0x1
    lis r6, fn_806722D0@ha
    subi r0, r3, 0x3b1
    li r4, 0x1
    clrlwi r3, r0, 16
    addi r6, r6, fn_806722D0@l
    la r5, lbl_808802AC
    bl fn_806332CC
    b lbl_fn_806704C0_00001B3C
lbl_fn_806704C0_00001B38:
    bl fn_80672470
lbl_fn_806704C0_00001B3C:
    li r0, 0x4
    b lbl_fn_806704C0_00001B48
lbl_fn_806704C0_00001B44:
    li r0, 0x2
lbl_fn_806704C0_00001B48:
    stb r0, 0xf(r31)
lbl_fn_806704C0_00001B4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80670640(void)
{
    nofralloc
    lis r8, lbl_8082ED60@ha
    lis r7, fn_806704C0@ha
    addi r8, r8, lbl_8082ED60@l
    li r5, 0x0
    addi r7, r7, fn_806704C0@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b fn_805EDC80
}

asm void fn_80670660(void)
{
    nofralloc
    lis r3, lbl_8082DE00@ha
    li r0, 0x6
    addi r3, r3, lbl_8082DE00@l
    stb r0, 0x10(r3)
    blr
}

asm void fn_80670680(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    lis r24, lbl_8082DE00@ha
    lis r23, lbl_807BA8B8@ha
    addi r24, r24, lbl_8082DE00@l
    li r4, 0x0
    addi r23, r23, lbl_807BA8B8@l
    li r5, 0x461
    addi r3, r24, 0x8b8
    bl memset
    addi r3, r24, 0x1f60
    li r4, 0x0
    li r5, 0x205
    bl memset
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x6
    bl memset
    addi r3, r24, 0x8b8
    bl fn_80624B50
    addi r3, r24, 0x1f60
    bl fn_80624B70
    addi r27, r24, 0x8b8
    addi r26, r24, 0x0
    addi r19, r27, 0x1
    li r25, 0x0
    stb r25, 0x6e9(r26)
    mr r21, r19
    lbz r16, 0x8b8(r24)
    addi r22, r27, 0x7
    li r18, 0x0
    li r15, 0x0
    li r28, 0x1
    li r29, 0x2
    lis r30, 0x1
    li r31, 0x3
    li r14, 0xa
lbl_fn_80670680_00001C40:
    cmpwi r16, 0x0
    beq lbl_fn_80670680_00001DB8
    mr r3, r22
    addi r4, r23, 0x21c
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80670680_00001C70
    mr r3, r21
    li r4, 0x0
    li r5, 0x46
    bl memset
lbl_fn_80670680_00001C70:
    mr r3, r21
    addi r4, r1, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80670680_00001D00
    cmpwi r18, 0x9
    bge lbl_fn_80670680_00001DA4
    addi r17, r18, 0x1
    mulli r0, r17, 0x46
    add r3, r27, r0
    addi r20, r3, 0x7
    b lbl_fn_80670680_00001CF4
lbl_fn_80670680_00001CA4:
    mr r3, r20
    addi r4, r23, 0x21c
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80670680_00001CEC
    mulli r0, r17, 0x46
    mr r3, r21
    li r5, 0x46
    add r4, r27, r0
    addi r17, r4, 0x1
    mr r4, r17
    bl memcpy
    mr r3, r17
    li r4, 0x0
    li r5, 0x46
    bl memset
    b lbl_fn_80670680_00001D00
lbl_fn_80670680_00001CEC:
    addi r20, r20, 0x46
    addi r17, r17, 0x1
lbl_fn_80670680_00001CF4:
    cmpwi r17, 0xa
    blt lbl_fn_80670680_00001CA4
    b lbl_fn_80670680_00001DA4
lbl_fn_80670680_00001D00:
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80670680_00001D4C
    mr r5, r26
    li r17, 0x0
    li r4, 0x0
    mtctr r14
lbl_fn_80670680_00001D20:
    lbz r0, 0x13d(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80670680_00001D3C
    mulli r0, r4, 0x60
    add r4, r26, r0
    addi r17, r4, 0xe4
    b lbl_fn_80670680_00001D54
lbl_fn_80670680_00001D3C:
    addi r5, r5, 0x60
    addi r4, r4, 0x1
    bdnz lbl_fn_80670680_00001D20
    b lbl_fn_80670680_00001D54
lbl_fn_80670680_00001D4C:
    lwz r4, 0x18(r26)
    lwz r17, 0x0(r4)
lbl_fn_80670680_00001D54:
    bl OSRestoreInterrupts
    cmpwi r17, 0x0
    beq lbl_fn_80670680_00001DA4
    mr r4, r21
    addi r3, r17, 0x40
    li r5, 0x6
    bl memcpy
    mr r3, r17
    mr r4, r22
    li r5, 0x40
    bl memcpy
    stb r28, 0x59(r17)
    subi r0, r30, 0x7f8c
    addi r15, r15, 0x1
    subi r16, r16, 0x1
    stb r25, 0x5b(r17)
    stb r29, 0x5c(r17)
    stb r29, 0x57(r17)
    sth r0, 0x5e(r17)
    stb r31, 0x58(r17)
lbl_fn_80670680_00001DA4:
    addi r18, r18, 0x1
    addi r21, r21, 0x46
    cmpwi r18, 0xa
    addi r22, r22, 0x46
    blt lbl_fn_80670680_00001C40
lbl_fn_80670680_00001DB8:
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_80670680_00001F08
    addi r3, r24, 0x8b8
    addi r4, r23, 0x230
    addi r3, r3, 0x3db
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80670680_00001F08
    bl OSDisableInterrupts
    addi r4, r24, 0x0
    lbz r0, 0x6e9(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80670680_00001E34
    li r0, 0xa
    mr r6, r4
    li r14, 0x0
    li r5, 0x0
    mtctr r0
lbl_fn_80670680_00001E08:
    lbz r0, 0x13d(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80670680_00001E24
    mulli r0, r5, 0x60
    add r4, r4, r0
    addi r14, r4, 0xe4
    b lbl_fn_80670680_00001E3C
lbl_fn_80670680_00001E24:
    addi r6, r6, 0x60
    addi r5, r5, 0x1
    bdnz lbl_fn_80670680_00001E08
    b lbl_fn_80670680_00001E3C
lbl_fn_80670680_00001E34:
    lwz r4, 0x18(r4)
    lwz r14, 0x0(r4)
lbl_fn_80670680_00001E3C:
    bl OSRestoreInterrupts
    cmpwi r14, 0x0
    bne lbl_fn_80670680_00001E5C
    bl OSDisableInterrupts
    bl OSRestoreInterrupts
    addi r3, r24, 0x0
    subi r15, r15, 0x1
    addi r14, r3, 0x444
lbl_fn_80670680_00001E5C:
    addi r16, r24, 0x8b8
    addi r3, r14, 0x40
    addi r4, r16, 0x3d5
    li r5, 0x6
    bl memcpy
    mr r3, r14
    addi r4, r16, 0x3db
    li r5, 0x13
    bl memcpy
    addi r3, r14, 0x46
    addi r4, r16, 0x3ef
    li r5, 0x10
    bl memcpy
    li r0, 0x1
    stb r0, 0x59(r14)
    li r3, 0x0
    li r4, 0x2
    stb r3, 0x5b(r14)
    clrlwi r0, r15, 24
    mulli r17, r0, 0x46
    lis r3, 0x1
    stb r4, 0x57(r14)
    li r0, 0x3
    subi r3, r3, 0x7f8c
    sth r3, 0x5e(r14)
    add r3, r16, r17
    li r4, 0x0
    stb r0, 0x58(r14)
    addi r18, r3, 0x1
    mr r3, r18
    li r5, 0x46
    stb r0, 0x5c(r14)
    bl memset
    mr r3, r18
    addi r4, r16, 0x3d5
    li r5, 0x6
    bl memcpy
    add r3, r16, r17
    addi r4, r16, 0x3db
    addi r3, r3, 0x7
    li r5, 0x13
    bl memcpy
    addi r15, r15, 0x1
lbl_fn_80670680_00001F08:
    addi r14, r24, 0x0
    addi r3, r24, 0x1f60
    li r16, 0x1
    stb r15, 0x8b8(r24)
    lbz r22, 0x1f60(r24)
    addi r17, r3, 0x1af
    stb r16, 0x6e9(r14)
    addi r18, r3, 0x1b5
    addi r20, r3, 0x1f5
    li r21, 0x5
    li r28, 0x3
    li r27, 0x2
    lis r26, 0x1
    li r25, 0xa
lbl_fn_80670680_00001F40:
    cmpwi r22, 0x0
    beq lbl_fn_80670680_00002094
    mr r3, r17
    addi r4, r1, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80670680_00002080
    lbz r30, 0x8b8(r24)
    mr r29, r19
    li r15, 0x0
    b lbl_fn_80670680_00001F98
lbl_fn_80670680_00001F70:
    mr r3, r29
    mr r4, r17
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80670680_00001F90
    li r0, 0x1
    b lbl_fn_80670680_00001FA4
lbl_fn_80670680_00001F90:
    addi r29, r29, 0x46
    addi r15, r15, 0x1
lbl_fn_80670680_00001F98:
    cmpw r15, r30
    blt lbl_fn_80670680_00001F70
    li r0, 0x0
lbl_fn_80670680_00001FA4:
    cmpwi r0, 0x0
    bne lbl_fn_80670680_00002080
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r14)
    cmpwi r0, 0x0
    bne lbl_fn_80670680_00001FFC
    mr r5, r14
    li r15, 0x0
    li r4, 0x0
    mtctr r25
    nop
lbl_fn_80670680_00001FD0:
    lbz r0, 0x13d(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80670680_00001FEC
    mulli r0, r4, 0x60
    add r4, r14, r0
    addi r15, r4, 0xe4
    b lbl_fn_80670680_00002004
lbl_fn_80670680_00001FEC:
    addi r5, r5, 0x60
    addi r4, r4, 0x1
    bdnz lbl_fn_80670680_00001FD0
    b lbl_fn_80670680_00002004
lbl_fn_80670680_00001FFC:
    lwz r4, 0x18(r14)
    lwz r15, 0x0(r4)
lbl_fn_80670680_00002004:
    bl OSRestoreInterrupts
    cmpwi r15, 0x0
    beq lbl_fn_80670680_00002080
    mr r4, r17
    addi r3, r15, 0x40
    li r5, 0x6
    bl memcpy
    mr r3, r15
    mr r4, r18
    li r5, 0x40
    bl memcpy
    mr r4, r20
    addi r3, r15, 0x46
    li r5, 0x10
    bl memcpy
    stb r16, 0x59(r15)
    mr r3, r15
    addi r4, r23, 0x270
    li r5, 0x13
    stb r16, 0x5b(r15)
    stb r28, 0x5c(r15)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80670680_00002074
    stb r27, 0x57(r15)
    subi r0, r26, 0x7f8c
    sth r0, 0x5e(r15)
    stb r28, 0x58(r15)
lbl_fn_80670680_00002074:
    mr r3, r15
    bl fn_806728F0
    subi r22, r22, 0x1
lbl_fn_80670680_00002080:
    subic. r21, r21, 0x1
    subi r18, r18, 0x56
    subi r20, r20, 0x56
    subi r17, r17, 0x56
    bge lbl_fn_80670680_00001F40
lbl_fn_80670680_00002094:
    addi r5, r24, 0x0
    li r3, 0x0
    li r0, 0x5
    stb r3, 0x6e9(r5)
    addi r3, r24, 0x1f60
    li r4, 0x0
    stb r0, 0x10(r5)
    li r5, 0x205
    bl memset
    addi r3, r24, 0x8b8
    bl fn_80624B60
    addi r3, r24, 0x1f60
    bl fn_80624B80
    lis r3, fn_80670660@ha
    addi r3, r3, fn_80670660@l
    bl fn_806242D0
    addi r11, r1, 0x60
    li r3, 0x6
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80670BD0(void)
{
    nofralloc
    lwz r4, lbl_808802C0
    li r0, 0x0
    stb r0, lbl_808802C4
    cmpwi r4, 0x1
    beq lbl_fn_80670BD0_00002118
    cmpwi r4, 0x2
    beq lbl_fn_80670BD0_00002130
    cmpwi r4, 0x3
    beq lbl_fn_80670BD0_00002148
    b lbl_fn_80670BD0_00002164
lbl_fn_80670BD0_00002118:
    cmpwi r3, 0x0
    li r0, 0xff
    bne lbl_fn_80670BD0_00002128
    addi r0, r4, 0x1
lbl_fn_80670BD0_00002128:
    stw r0, lbl_808802C0
    blr
lbl_fn_80670BD0_00002130:
    cmpwi r3, 0x0
    li r0, 0x5
    bne lbl_fn_80670BD0_00002140
    addi r0, r4, 0x1
lbl_fn_80670BD0_00002140:
    stw r0, lbl_808802C0
    blr
lbl_fn_80670BD0_00002148:
    subis r0, r3, 0x4
    li r3, 0x5
    cmplwi r0, 0xb000
    bne lbl_fn_80670BD0_0000215C
    addi r3, r4, 0x1
lbl_fn_80670BD0_0000215C:
    stw r3, lbl_808802C0
    blr
lbl_fn_80670BD0_00002164:
    li r0, 0x6
    stw r0, lbl_808802C0
    blr
}

asm void fn_80670C50(void)
{
    nofralloc
    lwz r3, lbl_808802C0
    li r0, 0x0
    stb r0, lbl_808802C4
    addi r0, r3, 0x1
    stw r0, lbl_808802C0
    blr
}

asm void fn_80670C70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    stw r30, 0x28(r1)
    la r30, lbl_8087EBD0
    stw r29, 0x24(r1)
    li r29, 0x3
    stw r28, 0x20(r1)
    lis r28, lbl_807BAAFC@ha
    addi r28, r28, lbl_807BAAFC@l
    lbz r0, lbl_808802C4
    stw r3, 0x10(r1)
    cmpwi r0, 0x0
    stw r3, 0x14(r1)
    stw r3, 0x18(r1)
    stw r3, 0x1c(r1)
    beq lbl_fn_80670C70_000021EC
    li r3, 0x3
    b lbl_fn_80670C70_000025A4
lbl_fn_80670C70_000021EC:
    lwz r0, lbl_808802B0
    cmpwi r0, 0x0
    beq lbl_fn_80670C70_00002200
    clrlwi. r0, r0, 27
    beq lbl_fn_80670C70_00002218
lbl_fn_80670C70_00002200:
    lis r5, lbl_807BAB3C@ha
    la r3, lbl_8087EBD8
    addi r5, r5, lbl_807BAB3C@l
    li r4, 0xab9
    crclr 6
    bl OSPanic
lbl_fn_80670C70_00002218:
    lwz r0, lbl_808802C0
    cmpwi r0, 0x3
    beq lbl_fn_80670C70_000022E0
    bge lbl_fn_80670C70_00002240
    cmpwi r0, 0x1
    beq lbl_fn_80670C70_00002270
    bge lbl_fn_80670C70_000022B8
    cmpwi r0, 0x0
    bge lbl_fn_80670C70_00002250
    b lbl_fn_80670C70_0000259C
lbl_fn_80670C70_00002240:
    cmpwi r0, 0x5
    beq lbl_fn_80670C70_0000257C
    bge lbl_fn_80670C70_0000259C
    b lbl_fn_80670C70_0000230C
lbl_fn_80670C70_00002250:
    bl NANDInit
    cmpwi r3, 0x0
    bne lbl_fn_80670C70_00002264
    li r0, 0x1
    b lbl_fn_80670C70_00002268
lbl_fn_80670C70_00002264:
    li r0, 0xff
lbl_fn_80670C70_00002268:
    stw r0, lbl_808802C0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_00002270:
    bl fn_80625040
    extsb. r0, r3
    bne lbl_fn_80670C70_000022AC
    li r3, 0x1
    li r0, 0x0
    lis r6, fn_80670BD0@ha
    stb r3, lbl_808802C4
    mr r3, r28
    addi r4, r31, 0xe00
    stw r0, lbl_808802BC
    addi r6, r6, fn_80670BD0@l
    addi r7, r31, 0xe8c
    li r5, 0x1
    bl fn_8061F9F0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_000022AC:
    li r0, 0x6
    stw r0, lbl_808802C0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_000022B8:
    li r0, 0x1
    lis r6, fn_80670BD0@ha
    stb r0, lbl_808802C4
    addi r3, r31, 0xe00
    addi r6, r6, fn_80670BD0@l
    addi r7, r31, 0xe8c
    li r4, 0x0
    li r5, 0x0
    bl fn_8061E9E0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_000022E0:
    li r0, 0x1
    lis r5, 0x5
    lis r6, fn_80670BD0@ha
    stb r0, lbl_808802C4
    lwz r4, lbl_808802B0
    addi r3, r31, 0xe00
    subi r5, r5, 0x5000
    addi r6, r6, fn_80670BD0@l
    addi r7, r31, 0xe8c
    bl fn_8061E7D0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_0000230C:
    lwz r4, lbl_808802B0
    addi r3, r31, 0xd20
    li r5, 0x80
    addis r4, r4, 0x5
    subi r4, r4, 0x50e8
    bl memcpy
    lwz r4, lbl_808802B0
    addi r3, r1, 0x8
    li r5, 0x4
    addis r4, r4, 0x5
    subi r4, r4, 0x5068
    bl memcpy
    lis r3, 0x1
    lwz r6, lbl_808802B0
    subi r0, r3, 0x6a1d
    li r5, 0x0
    li r4, 0x0
    mtctr r0
lbl_fn_80670C70_00002354:
    lhz r3, 0x0(r6)
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x2(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x4(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x6(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    addi r6, r6, 0x8
    nor r0, r3, r3
    add r5, r5, r3
    add r0, r4, r0
    clrlwi r4, r0, 16
    bdnz lbl_fn_80670C70_00002354
    lwz r3, lbl_808802B0
    rlwimi r4, r5, 16, 0, 15
    li r0, 0x8
    stw r4, lbl_808802BC
    addis r3, r3, 0x5
    srwi r5, r4, 16
    subi r6, r3, 0x50e8
    clrlwi r4, r4, 16
    mtctr r0
lbl_fn_80670C70_000023D0:
    lhz r3, 0x0(r6)
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x2(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x4(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x6(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0x8(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xa(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xc(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    nor r0, r3, r3
    add r5, r5, r3
    lhz r3, 0xe(r6)
    add r0, r4, r0
    clrlwi r4, r0, 16
    addi r6, r6, 0x10
    nor r0, r3, r3
    add r5, r5, r3
    add r0, r4, r0
    clrlwi r4, r0, 16
    bdnz lbl_fn_80670C70_000023D0
    lwz r0, 0x8(r1)
    rlwimi r4, r5, 16, 0, 15
    cmplw r0, r4
    beq lbl_fn_80670C70_00002494
    li r0, 0x5
    stw r0, lbl_808802C0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_00002494:
    addi r3, r31, 0xd20
    addi r4, r1, 0x10
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80670C70_000024B8
    li r0, 0x5
    stw r0, lbl_808802C0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_000024B8:
    bl fn_805EBFD0
    mr r4, r30
    li r5, 0x4
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80670C70_000024F8
    addi r3, r31, 0xd20
    addi r4, r1, 0x10
    addi r3, r3, 0x6
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80670C70_000024F8
    li r0, 0x5
    stw r0, lbl_808802C0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_000024F8:
    lis r4, 0x5
    lwz r3, lbl_808802B0
    subi r5, r4, 0x5000
    li r4, 0x0
    bl memset
    addi r3, r31, 0x8b8
    li r4, 0x0
    li r5, 0x461
    bl memset
    addi r3, r31, 0x8b8
    bl fn_80624B50
    addi r28, r31, 0x8b8
    addi r4, r31, 0xd20
    addi r3, r28, 0x3d5
    li r5, 0x6
    bl memcpy
    addi r30, r31, 0xd20
    addi r3, r28, 0x3db
    addi r4, r30, 0x16
    li r5, 0x40
    bl memcpy
    addi r3, r28, 0x3ef
    addi r4, r30, 0x6
    li r5, 0x10
    bl memcpy
    mr r3, r28
    bl fn_80624B60
    li r0, 0x1
    lis r3, fn_80670C50@ha
    stb r0, lbl_808802C4
    addi r3, r3, fn_80670C50@l
    bl fn_806242D0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_0000257C:
    li r0, 0x1
    lis r4, fn_80670BD0@ha
    stb r0, lbl_808802C4
    addi r3, r31, 0xe00
    addi r4, r4, fn_80670BD0@l
    addi r5, r31, 0xe8c
    bl fn_8061FBE0
    b lbl_fn_80670C70_000025A0
lbl_fn_80670C70_0000259C:
    li r29, 0x4
lbl_fn_80670C70_000025A0:
    mr r3, r29
lbl_fn_80670C70_000025A4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806710B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    stw r30, 0x8(r1)
    lbz r0, 0x10(r31)
    cmpwi r0, 0x1
    beq lbl_fn_806710B0_0000261C
    cmpwi r0, 0x2
    beq lbl_fn_806710B0_00002644
    cmpwi r0, 0x4
    beq lbl_fn_806710B0_000026C4
    cmpwi r0, 0x6
    beq lbl_fn_806710B0_000026CC
    cmpwi r0, 0x3
    beq lbl_fn_806710B0_000026F4
    b lbl_fn_806710B0_000026FC
lbl_fn_806710B0_0000261C:
    lbz r3, 0x748(r31)
    li r30, 0x1
    subi r0, r3, 0x1
    stb r0, 0x748(r31)
    bl fn_8062CA30
    clrlwi. r0, r3, 24
    beq lbl_fn_806710B0_0000263C
    li r30, 0x2
lbl_fn_806710B0_0000263C:
    stb r30, 0x10(r31)
    b lbl_fn_806710B0_000026FC
lbl_fn_806710B0_00002644:
    li r30, 0x2
    bl __OSGetSystemTime
    lis r5, 0x8000
    lis r3, 0x1062
    lwz r0, 0xf8(r5)
    addi r3, r3, 0x4dd3
    lwz r5, __OSStartTime+0x4
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    subf r3, r5, r4
    srwi r0, r0, 6
    divwu r0, r3, r0
    subfic r0, r0, 0x1f4
    cmpwi r0, 0x0
    bge lbl_fn_806710B0_000026BC
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_fn_806710B0_000026BC
    bl fn_80671320
    lwz r0, lbl_808802B8
    li r30, 0x4
    cmpwi r0, 0x0
    beq lbl_fn_806710B0_000026BC
    bl fn_80625040
    extsb. r0, r3
    bne lbl_fn_806710B0_000026BC
    li r0, 0x0
    stb r0, lbl_808802C4
    li r30, 0x3
    stw r0, lbl_808802C0
lbl_fn_806710B0_000026BC:
    stb r30, 0x10(r31)
    b lbl_fn_806710B0_000026FC
lbl_fn_806710B0_000026C4:
    bl fn_80670680
    b lbl_fn_806710B0_000026FC
lbl_fn_806710B0_000026CC:
    addi r3, r31, 0x710
    bl OSCancelAlarm
    li r0, 0x1
    lis r3, fn_806732B0@ha
    stb r0, 0x708(r31)
    addi r3, r3, fn_806732B0@l
    bl fn_8062C970
    li r0, 0x7
    stb r0, 0x10(r31)
    b lbl_fn_806710B0_000026FC
lbl_fn_806710B0_000026F4:
    bl fn_80670C70
    stb r3, 0x10(r31)
lbl_fn_806710B0_000026FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80671200(void)
{
    nofralloc
    lis r8, lbl_8082ED60@ha
    lis r7, fn_806710B0@ha
    addi r8, r8, lbl_8082ED60@l
    li r5, 0x0
    addi r7, r7, fn_806710B0@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b fn_805EDC80
}

asm void fn_80671220(void)
{
    nofralloc
    lis r3, lbl_8082DE00@ha
    li r0, 0x3
    addi r3, r3, lbl_8082DE00@l
    stb r0, 0x11(r3)
    blr
}

asm void fn_80671240(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_8082DE00@ha
    addi r30, r30, lbl_8082DE00@l
    stw r29, 0x14(r1)
    addi r31, r30, 0x0
    lbz r0, 0x11(r31)
    cmpwi r0, 0x1
    beq lbl_fn_80671240_0000279C
    cmpwi r0, 0x3
    beq lbl_fn_80671240_000027EC
    b lbl_fn_80671240_000027F8
lbl_fn_80671240_0000279C:
    lwz r29, lbl_808802A4
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_fn_80671240_000027F8
    addi r3, r30, 0x8b8
    bl fn_80624B60
    and r29, r29, r3
    addi r3, r30, 0x1f60
    bl fn_80624B80
    and. r29, r29, r3
    beq lbl_fn_80671240_000027E0
    li r0, 0x2
    lis r3, fn_80671220@ha
    stb r0, 0x11(r31)
    addi r3, r3, fn_80671220@l
    bl fn_806242D0
    b lbl_fn_80671240_000027F8
lbl_fn_80671240_000027E0:
    li r0, 0x3
    stb r0, 0x11(r31)
    b lbl_fn_80671240_000027F8
lbl_fn_80671240_000027EC:
    addi r3, r31, 0x710
    bl OSCancelAlarm
    bl fn_8062C9F8
lbl_fn_80671240_000027F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80671300(void)
{
    nofralloc
    lis r8, lbl_8082ED60@ha
    lis r7, fn_80671240@ha
    addi r8, r8, lbl_8082ED60@l
    li r5, 0x0
    addi r7, r7, fn_80671240@l
    li r6, 0x0
    addi r8, r8, 0x1000
    b fn_805EDC80
}

asm void fn_80671320(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r31, lbl_8082DE00@ha
    li r0, 0x2
    addi r31, r31, lbl_8082DE00@l
    li r3, 0x0
    addi r30, r31, 0x0
    li r28, 0x0
    addi r29, r31, 0xdc0
    addi r12, r31, 0x2168
    addi r11, r31, 0x2188
    mtctr r0
lbl_fn_80671320_0000287C:
    clrlslwi r9, r3, 24, 1
    addi r4, r3, 0x1
    clrlslwi r0, r3, 24, 2
    addi r8, r3, 0x2
    stwx r28, r29, r0
    clrlslwi r10, r4, 24, 2
    clrlslwi r27, r4, 24, 1
    addi r6, r3, 0x4
    sthx r28, r12, r9
    addi r5, r3, 0x5
    addi r7, r3, 0x3
    clrlslwi r26, r8, 24, 1
    sthx r28, r11, r9
    clrlslwi r9, r8, 24, 2
    clrlslwi r8, r7, 24, 2
    clrlslwi r25, r6, 24, 1
    stwx r28, r29, r10
    clrlslwi r10, r7, 24, 1
    clrlslwi r7, r6, 24, 2
    addi r0, r3, 0x6
    sthx r28, r12, r27
    addi r4, r3, 0x7
    clrlslwi r6, r5, 24, 2
    clrlslwi r24, r5, 24, 1
    sthx r28, r11, r27
    clrlslwi r5, r0, 24, 2
    clrlslwi r27, r0, 24, 1
    clrlslwi r0, r4, 24, 2
    stwx r28, r29, r9
    clrlslwi r4, r4, 24, 1
    addi r3, r3, 0x8
    sthx r28, r12, r26
    sthx r28, r11, r26
    stwx r28, r29, r8
    sthx r28, r12, r10
    sthx r28, r11, r10
    stwx r28, r29, r7
    sthx r28, r12, r25
    sthx r28, r11, r25
    stwx r28, r29, r6
    sthx r28, r12, r24
    sthx r28, r11, r24
    stwx r28, r29, r5
    sthx r28, r12, r27
    sthx r28, r11, r27
    stwx r28, r29, r0
    sthx r28, r12, r4
    sthx r28, r11, r4
    bdnz lbl_fn_80671320_0000287C
    li r0, 0x3
    addi r4, r30, 0x58
    addi r3, r30, 0x1c
    stw r4, 0x18(r30)
    mr r5, r30
    li r4, 0x0
    stw r3, 0x14(r30)
    mtctr r0
lbl_fn_80671320_00002960:
    subfic r0, r4, 0x5
    cmpwi r4, 0x0
    mulli r0, r0, 0x60
    add r3, r30, r0
    addi r0, r3, 0x4a4
    stw r0, 0x1c(r5)
    bne lbl_fn_80671320_00002984
    li r0, 0x0
    b lbl_fn_80671320_00002994
lbl_fn_80671320_00002984:
    subi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x1c
lbl_fn_80671320_00002994:
    cmpwi r4, 0x5
    stw r0, 0x20(r5)
    bne lbl_fn_80671320_000029A8
    li r0, 0x0
    b lbl_fn_80671320_000029B8
lbl_fn_80671320_000029A8:
    addi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x1c
lbl_fn_80671320_000029B8:
    addic. r4, r4, 0x1
    stw r0, 0x24(r5)
    subfic r0, r4, 0x5
    mulli r0, r0, 0x60
    add r3, r30, r0
    addi r0, r3, 0x4a4
    stw r0, 0x28(r5)
    bne lbl_fn_80671320_000029E0
    li r0, 0x0
    b lbl_fn_80671320_000029F0
lbl_fn_80671320_000029E0:
    subi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x1c
lbl_fn_80671320_000029F0:
    cmpwi r4, 0x5
    stw r0, 0x2c(r5)
    bne lbl_fn_80671320_00002A04
    li r0, 0x0
    b lbl_fn_80671320_00002A14
lbl_fn_80671320_00002A04:
    addi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x1c
lbl_fn_80671320_00002A14:
    stw r0, 0x30(r5)
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80671320_00002960
    li r0, 0x5
    addi r4, r30, 0xd8
    addi r3, r30, 0x6c
    stw r4, 0x68(r30)
    mr r5, r30
    addi r4, r30, 0xe4
    li r6, 0x0
    stw r3, 0x64(r30)
    mtctr r0
lbl_fn_80671320_00002A48:
    cmpwi r6, 0x0
    stw r4, 0x6c(r5)
    bne lbl_fn_80671320_00002A5C
    li r0, 0x0
    b lbl_fn_80671320_00002A6C
lbl_fn_80671320_00002A5C:
    subi r0, r6, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x6c
lbl_fn_80671320_00002A6C:
    cmpwi r6, 0x9
    stw r0, 0x70(r5)
    bne lbl_fn_80671320_00002A80
    li r0, 0x0
    b lbl_fn_80671320_00002A90
lbl_fn_80671320_00002A80:
    addi r0, r6, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x6c
lbl_fn_80671320_00002A90:
    stw r0, 0x74(r5)
    addi r4, r4, 0x60
    addic. r6, r6, 0x1
    stw r4, 0x78(r5)
    bne lbl_fn_80671320_00002AAC
    li r0, 0x0
    b lbl_fn_80671320_00002ABC
lbl_fn_80671320_00002AAC:
    subi r0, r6, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x6c
lbl_fn_80671320_00002ABC:
    cmpwi r6, 0x9
    stw r0, 0x7c(r5)
    bne lbl_fn_80671320_00002AD0
    li r0, 0x0
    b lbl_fn_80671320_00002AE0
lbl_fn_80671320_00002AD0:
    addi r0, r6, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    addi r0, r3, 0x6c
lbl_fn_80671320_00002AE0:
    stw r0, 0x80(r5)
    addi r4, r4, 0x60
    addi r5, r5, 0x18
    addi r6, r6, 0x1
    bdnz lbl_fn_80671320_00002A48
    li r29, 0x0
    li r6, 0x1
    li r0, -0x41
    stb r29, 0xc(r30)
    addi r3, r30, 0x702
    li r4, 0x0
    stb r29, 0xe(r30)
    li r5, 0x6
    stb r29, 0xd(r30)
    stb r29, 0xf(r30)
    stb r29, 0x10(r30)
    stb r29, 0x11(r30)
    stb r29, 0x6e7(r30)
    stb r29, 0x6e9(r30)
    stb r6, 0x6e8(r30)
    stb r29, 0x6ea(r30)
    stb r29, 0x6eb(r30)
    stb r29, 0x708(r30)
    stb r29, 0x70a(r30)
    stb r0, 0x70b(r30)
    bl memset
    addi r3, r30, 0x6fc
    li r4, 0x0
    li r5, 0x6
    bl memset
    li r0, 0xa
    sth r29, 0x744(r30)
    sth r0, 0x746(r30)
    bl OSDisableInterrupts
    addi r30, r31, 0x0
    mr r28, r3
    addi r3, r30, 0xe4
    li r4, 0x0
    li r5, 0x3c0
    bl memset
    addi r3, r30, 0x4a4
    li r4, 0x0
    li r5, 0x240
    bl memset
    stb r29, 0x12(r30)
    mr r3, r28
    stb r29, 0x13(r30)
    stb r29, 0x6e4(r30)
    stb r29, 0x6e5(r30)
    stb r29, 0x6e6(r30)
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806716B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    lwz r0, lbl_808802A0
    cmpwi r0, 0x0
    beq lbl_fn_806716B0_00002BFC
    li r3, 0x0
    b lbl_fn_806716B0_00002CC0
lbl_fn_806716B0_00002BFC:
    bl fn_80629910
    lbz r3, lbl_808802AD
    bl fn_8062A408
    lbz r3, lbl_808802AD
    bl fn_80642D20
    lbz r3, lbl_808802AD
    bl fn_8064F570
    li r4, 0x0
    li r3, 0x1
    li r0, 0x14
    stw r4, 0x0(r31)
    stw r4, 0x4(r31)
    stw r4, 0x8(r31)
    stw r4, 0x6f0(r31)
    stw r4, 0x6ec(r31)
    stb r3, 0x10(r31)
    stb r0, 0x748(r31)
    bl SCInit
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_806716B0_00002C64
    lwz r12, lbl_808802B4
    cmpwi r12, 0x0
    beq lbl_fn_806716B0_00002C64
    mtctr r12
    bctrl
lbl_fn_806716B0_00002C64:
    addi r3, r31, 0x710
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_80671200@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_80671200@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0xa
    bl fn_805EC3B0
    li r3, 0x1
    li r0, 0x0
    stw r3, lbl_808802A0
    li r3, 0x1
    stb r0, lbl_808802D4
lbl_fn_806716B0_00002CC0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806717C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    stw r30, 0x6f4(r4)
    stw r31, 0x6f8(r4)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80671810(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r26, lbl_8082DE00@ha
    mr r29, r3
    addi r26, r26, lbl_8082DE00@l
    addi r31, r26, 0x0
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80671810_00002D9C
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80671810_00002D9C
    lbz r0, 0xf(r31)
    cmplwi r0, 0x4
    bne lbl_fn_80671810_00002D9C
    lbz r0, 0x10(r31)
    cmplwi r0, 0x7
    bne lbl_fn_80671810_00002D9C
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_80671810_00002DA4
lbl_fn_80671810_00002D9C:
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_80671810_00002DA4:
    cmpwi r0, 0x0
    beq lbl_fn_80671810_00002DB4
    addi r3, r31, 0x710
    bl OSCancelAlarm
lbl_fn_80671810_00002DB4:
    addi r27, r26, 0x8b8
    li r4, 0x0
    addi r3, r27, 0x1
    li r5, 0x2bc
    bl memset
    addi r3, r26, 0x0
    addi r25, r27, 0x1
    lwz r28, 0x64(r3)
    addi r27, r27, 0x7
    b lbl_fn_80671810_00002E0C
lbl_fn_80671810_00002DDC:
    lwz r4, 0x0(r28)
    mr r3, r25
    li r5, 0x6
    addi r4, r4, 0x40
    bl memcpy
    lwz r4, 0x0(r28)
    mr r3, r27
    li r5, 0x40
    bl memcpy
    lwz r28, 0x8(r28)
    addi r25, r25, 0x46
    addi r27, r27, 0x46
lbl_fn_80671810_00002E0C:
    cmpwi r28, 0x0
    bne lbl_fn_80671810_00002DDC
    bl OSDisableInterrupts
    addi r27, r26, 0x0
    lbz r25, 0x12(r27)
    bl OSRestoreInterrupts
    addi r28, r26, 0x1f60
    stb r25, 0x8b8(r26)
    addi r3, r28, 0x1
    li r4, 0x0
    li r5, 0x204
    bl memset
    cmpwi r29, 0x0
    beq lbl_fn_80671810_00002EC0
    lwz r29, 0x14(r27)
    addi r25, r28, 0x1
    addi r27, r28, 0x7
    addi r28, r28, 0x47
    b lbl_fn_80671810_00002EA0
lbl_fn_80671810_00002E58:
    lwz r4, 0x0(r29)
    mr r3, r25
    li r5, 0x6
    addi r4, r4, 0x40
    bl memcpy
    lwz r4, 0x0(r29)
    mr r3, r27
    li r5, 0x40
    bl memcpy
    lwz r4, 0x0(r29)
    mr r3, r28
    li r5, 0x10
    addi r4, r4, 0x46
    bl memcpy
    lwz r29, 0x8(r29)
    addi r25, r25, 0x56
    addi r27, r27, 0x56
    addi r28, r28, 0x56
lbl_fn_80671810_00002EA0:
    cmpwi r29, 0x0
    bne lbl_fn_80671810_00002E58
    bl OSDisableInterrupts
    addi r4, r26, 0x0
    lbz r25, 0x13(r4)
    bl OSRestoreInterrupts
    stb r25, 0x1f60(r26)
    b lbl_fn_80671810_00002EC8
lbl_fn_80671810_00002EC0:
    li r0, 0x0
    stb r0, 0x1f60(r26)
lbl_fn_80671810_00002EC8:
    li r0, 0x1
    stb r0, 0x11(r31)
    addi r3, r31, 0x710
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_80671300@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_80671300@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0xa
    bl fn_805EC3B0
    li r0, 0x4
    stb r0, 0x708(r31)
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80671A20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lbz r31, 0x708(r4)
    bl OSRestoreInterrupts
    extsb r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80671A60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r5, lbl_8082DE00@ha
    addi r5, r5, lbl_8082DE00@l
    lhz r4, 0x744(r5)
    lhz r0, 0x746(r5)
    subf r0, r4, r0
    clrlwi r31, r0, 24
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80671AB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    lis r7, lbl_8082DE00@ha
    stw r0, 0x24(r1)
    mr r8, r3
    addi r7, r7, lbl_8082DE00@l
    ble lbl_fn_80671AB0_00002FFC
    li r0, 0x2
    stb r0, 0x10(r1)
    b lbl_fn_80671AB0_00003004
lbl_fn_80671AB0_00002FFC:
    li r0, 0x0
    stb r0, 0x10(r1)
lbl_fn_80671AB0_00003004:
    li r6, 0x1
    li r0, 0x0
    sth r4, 0x8(r1)
    addi r5, r1, 0x8
    lbz r3, 0x70a(r7)
    sth r4, 0xa(r1)
    mr r4, r8
    sth r6, 0xc(r1)
    sth r0, 0xe(r1)
    bl fn_806357EC
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80671B20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lwz r31, 0x4(r4)
    stw r30, 0x4(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80671B70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r31, lbl_8082DE00@ha
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r25, r6
    addi r31, r31, lbl_8082DE00@l
    li r27, 0x0
    bl OSDisableInterrupts
    lbz r26, 0x708(r31)
    extsb r26, r26
    bl OSRestoreInterrupts
    cmplwi r26, 0x3
    bne lbl_fn_80671B70_000031C0
    bl OSDisableInterrupts
    lbz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80671B70_00003118
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80671B70_00003118
    lbz r0, 0xf(r31)
    cmplwi r0, 0x4
    bne lbl_fn_80671B70_00003118
    lbz r0, 0x10(r31)
    cmplwi r0, 0x7
    bne lbl_fn_80671B70_00003118
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_80671B70_00003120
lbl_fn_80671B70_00003118:
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_80671B70_00003120:
    cmpwi r0, 0x0
    bne lbl_fn_80671B70_000031C0
    bl OSDisableInterrupts
    neg r0, r25
    li r7, 0x1
    or r0, r0, r25
    li r5, 0x0
    srwi r6, r0, 31
    li r4, 0x32
    li r0, 0xc8
    mr r27, r3
    stb r30, lbl_808802D5
    addi r3, r31, 0x710
    stb r7, 0xc(r31)
    stb r29, 0x6e8(r31)
    stb r28, 0x6e9(r31)
    stb r6, 0x6e7(r31)
    stb r5, 0x6e6(r31)
    stb r4, 0x749(r31)
    sth r0, 0x74a(r31)
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_8066FE30@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_8066FE30@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x14
    bl fn_805EC3B0
    mr r3, r27
    bl OSRestoreInterrupts
    li r27, 0x1
lbl_fn_80671B70_000031C0:
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80671CC0(void)
{
    nofralloc
    li r3, 0x1
    li r4, -0x1
    li r5, 0x0
    li r6, 0x1
    b fn_80671B70
}

asm void fn_80671CE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lis r29, lbl_8082DE00@ha
    addi r29, r29, lbl_8082DE00@l
    stw r0, lbl_808802A8
    bl OSDisableInterrupts
    lbz r0, 0x708(r29)
    mr r31, r3
    cmpwi r0, 0x3
    bne lbl_fn_80671CE0_00003268
    lbz r0, 0x6e8(r29)
    extsb. r0, r0
    beq lbl_fn_80671CE0_00003264
    lbz r0, 0xc(r29)
    cmplwi r0, 0x3
    bne lbl_fn_80671CE0_0000325C
    bl fn_8062CBA8
lbl_fn_80671CE0_0000325C:
    li r0, 0x0
    stb r0, 0x6e8(r29)
lbl_fn_80671CE0_00003264:
    li r30, 0x1
lbl_fn_80671CE0_00003268:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80671D70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lis r29, lbl_8082DE00@ha
    addi r29, r29, lbl_8082DE00@l
    bl OSDisableInterrupts
    lbz r0, 0x708(r29)
    mr r31, r3
    cmpwi r0, 0x3
    bne lbl_fn_80671D70_000032F0
    lbz r0, 0x6e8(r29)
    extsb. r0, r0
    beq lbl_fn_80671D70_000032EC
    lbz r0, 0xc(r29)
    cmplwi r0, 0x3
    bne lbl_fn_80671D70_000032E4
    bl fn_8062CBA8
lbl_fn_80671D70_000032E4:
    li r0, 0x0
    stb r0, 0x6e8(r29)
lbl_fn_80671D70_000032EC:
    li r30, 0x1
lbl_fn_80671D70_000032F0:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80671E00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    clrlwi r0, r3, 24
    cmplwi r0, 0xd
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    lis r30, lbl_8082DE00@ha
    addi r30, r30, lbl_8082DE00@l
    stw r29, 0x14(r1)
    mr r29, r3
    ble lbl_fn_80671E00_0000335C
    li r3, 0x0
    b lbl_fn_80671E00_000033C4
lbl_fn_80671E00_0000335C:
    bl OSDisableInterrupts
    lbz r30, 0x708(r30)
    extsb r30, r30
    bl OSRestoreInterrupts
    cmplwi r30, 0x3
    bne lbl_fn_80671E00_000033C0
    extsb. r3, r29
    bne lbl_fn_80671E00_00003388
    li r0, 0xff
    li r4, 0xff
    b lbl_fn_80671E00_000033B0
lbl_fn_80671E00_00003388:
    addi r3, r3, 0x1
    slwi r0, r3, 2
    add r3, r0, r3
    subic. r0, r3, 0xe
    addi r4, r3, 0xe
    bge lbl_fn_80671E00_000033A4
    li r0, 0x0
lbl_fn_80671E00_000033A4:
    cmpwi r4, 0x4e
    ble lbl_fn_80671E00_000033B0
    li r4, 0x4e
lbl_fn_80671E00_000033B0:
    clrlwi r3, r0, 24
    clrlwi r4, r4, 24
    bl fn_80632430
    li r31, 0x1
lbl_fn_80671E00_000033C0:
    mr r3, r31
lbl_fn_80671E00_000033C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80671EC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lwz r31, 0x6ec(r4)
    stw r30, 0x6ec(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80671F10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lwz r31, 0x6f0(r4)
    stw r30, 0x6f0(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80671F60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    stb r30, 0x6eb(r4)
    stb r31, 0x6ea(r4)
    bl OSRestoreInterrupts
    mr r3, r30
    mr r4, r31
    bl fn_8062CACC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80671FC0(void)
{
    nofralloc
    b fn_80672470
}

asm void fn_80671FD0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    lbz r5, lbl_808802C5
    lbz r0, lbl_808802C6
    cmplw r0, r5
    bne lbl_fn_80671FD0_0000351C
    cmpwi r3, 0x0
    bne lbl_fn_80671FD0_00003524
lbl_fn_80671FD0_0000351C:
    cmpwi r3, 0x0
    bne lbl_fn_80671FD0_00003534
lbl_fn_80671FD0_00003524:
    lis r3, fn_80671FC0@ha
    addi r3, r3, fn_80671FC0@l
    bl fn_806322D0
    b lbl_fn_80671FD0_000035A4
lbl_fn_80671FD0_00003534:
    subf r3, r5, r0
    li r0, 0x13
    cmpwi r3, 0x13
    bge lbl_fn_80671FD0_00003548
    mr r0, r3
lbl_fn_80671FD0_00003548:
    clrlwi r31, r0, 24
    stb r0, 0x8(r1)
    lis r4, lbl_807BAA5C@ha
    addi r3, r1, 0x9
    mulli r0, r5, 0xd
    addi r4, r4, lbl_807BAA5C@l
    mulli r30, r31, 0xd
    add r4, r4, r0
    mr r5, r30
    addi r4, r4, 0x1
    bl memcpy
    lbz r4, lbl_808802C5
    lis r3, 0x1
    subi r3, r3, 0x3b1
    lis r6, fn_80671FD0@ha
    add r4, r4, r31
    addi r0, r30, 0x1
    stb r4, lbl_808802C5
    clrlwi r3, r3, 16
    clrlwi r4, r0, 24
    addi r5, r1, 0x8
    addi r6, r6, fn_80671FD0@l
    bl fn_806332CC
lbl_fn_80671FD0_000035A4:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_806720A0(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x214(r1)
    stw r31, 0x20c(r1)
    stw r30, 0x208(r1)
    beq lbl_fn_806720A0_000037CC
    lwz r4, lbl_808802CC
    lwz r0, lbl_808802D0
    cmplw r0, r4
    bne lbl_fn_806720A0_00003668
    lis r3, lbl_807BAA5C@ha
    li r4, 0x0
    lbz r3, lbl_807BAA5C@l(r3)
    li r0, 0x13
    stb r4, lbl_808802C5
    cmpwi r3, 0x13
    stb r3, lbl_808802C6
    bge lbl_fn_806720A0_00003610
    mr r0, r3
lbl_fn_806720A0_00003610:
    clrlwi r31, r0, 24
    lis r4, lbl_807BAA5C@ha
    mulli r30, r31, 0xd
    stb r0, 0x108(r1)
    addi r4, r4, lbl_807BAA5C@l
    addi r3, r1, 0x109
    mr r5, r30
    addi r4, r4, 0x1
    bl memcpy
    lbz r4, lbl_808802C5
    lis r3, 0x1
    subi r3, r3, 0x3b1
    lis r6, fn_80671FD0@ha
    add r4, r4, r31
    addi r0, r30, 0x1
    stb r4, lbl_808802C5
    clrlwi r3, r3, 16
    clrlwi r4, r0, 24
    addi r5, r1, 0x108
    addi r6, r6, fn_80671FD0@l
    bl fn_806332CC
    b lbl_fn_806720A0_000037D8
lbl_fn_806720A0_00003668:
    subf r0, r4, r0
    li r3, 0xfb
    cmplwi r0, 0xfb
    bge lbl_fn_806720A0_0000367C
    mr r3, r0
lbl_fn_806720A0_0000367C:
    lwz r0, lbl_808802C8
    clrlwi r3, r3, 24
    cmpwi cr1, r3, 0x0
    li r6, 0x0
    add r0, r0, r4
    stb r0, 0x8(r1)
    extrwi r5, r0, 8, 16
    extrwi r4, r0, 8, 8
    srwi r0, r0, 24
    stb r5, 0x9(r1)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    ble cr1, lbl_fn_806720A0_00003798
    cmpwi r3, 0x8
    subi r7, r3, 0x8
    ble lbl_fn_806720A0_00003758
    li r5, 0x0
    blt cr1, lbl_fn_806720A0_000036D8
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r3, r0
    bgt lbl_fn_806720A0_000036D8
    li r5, 0x1
lbl_fn_806720A0_000036D8:
    cmpwi r5, 0x0
    beq lbl_fn_806720A0_00003758
    addi r0, r7, 0x7
    lis r4, lbl_807BA9A0@ha
    lwz r5, lbl_808802CC
    addi r4, r4, lbl_807BA9A0@l
    srwi r0, r0, 3
    addi r8, r1, 0x8
    add r5, r4, r5
    mtctr r0
    cmpwi r7, 0x0
    ble lbl_fn_806720A0_00003758
lbl_fn_806720A0_00003708:
    add r4, r5, r6
    addi r6, r6, 0x8
    lbz r0, 0x8(r4)
    stb r0, 0x4(r8)
    lbz r0, 0x9(r4)
    stb r0, 0x5(r8)
    lbz r0, 0xa(r4)
    stb r0, 0x6(r8)
    lbz r0, 0xb(r4)
    stb r0, 0x7(r8)
    lbz r0, 0xc(r4)
    stb r0, 0x8(r8)
    lbz r0, 0xd(r4)
    stb r0, 0x9(r8)
    lbz r0, 0xe(r4)
    stb r0, 0xa(r8)
    lbz r0, 0xf(r4)
    stb r0, 0xb(r8)
    addi r8, r8, 0x8
    bdnz lbl_fn_806720A0_00003708
lbl_fn_806720A0_00003758:
    lis r4, lbl_807BA9A0@ha
    lwz r5, lbl_808802CC
    addi r7, r1, 0x8
    subf r0, r6, r3
    addi r4, r4, lbl_807BA9A0@l
    add r7, r7, r6
    add r5, r4, r5
    mtctr r0
    cmpw r6, r3
    bge lbl_fn_806720A0_00003798
lbl_fn_806720A0_00003780:
    add r4, r5, r6
    addi r6, r6, 0x1
    lbz r0, 0x8(r4)
    stb r0, 0x4(r7)
    addi r7, r7, 0x1
    bdnz lbl_fn_806720A0_00003780
lbl_fn_806720A0_00003798:
    lwz r5, lbl_808802CC
    lis r4, 0x1
    addi r0, r3, 0x4
    lis r6, fn_806720A0@ha
    add r3, r5, r3
    subi r4, r4, 0x3b4
    stw r3, lbl_808802CC
    clrlwi r3, r4, 16
    clrlwi r4, r0, 24
    addi r5, r1, 0x8
    addi r6, r6, fn_806720A0@l
    bl fn_806332CC
    b lbl_fn_806720A0_000037D8
lbl_fn_806720A0_000037CC:
    lis r3, fn_80671FC0@ha
    addi r3, r3, fn_80671FC0@l
    bl fn_806322D0
lbl_fn_806720A0_000037D8:
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_806722D0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x114(r1)
    beq lbl_fn_806722D0_0000394C
    lwz r3, lbl_808802D0
    li r0, 0xfb
    cmplwi r3, 0xfb
    bge lbl_fn_806722D0_00003818
    mr r0, r3
lbl_fn_806722D0_00003818:
    lwz r6, lbl_808802C8
    clrlwi r5, r0, 24
    cmpwi cr1, r5, 0x0
    stb r6, 0x8(r1)
    extrwi r4, r6, 8, 16
    extrwi r3, r6, 8, 8
    srwi r0, r6, 24
    stb r4, 0x9(r1)
    li r6, 0x0
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    ble cr1, lbl_fn_806722D0_00003920
    cmpwi r5, 0x8
    subi r7, r5, 0x8
    ble lbl_fn_806722D0_000038E8
    li r4, 0x0
    blt cr1, lbl_fn_806722D0_00003870
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r5, r0
    bgt lbl_fn_806722D0_00003870
    li r4, 0x1
lbl_fn_806722D0_00003870:
    cmpwi r4, 0x0
    beq lbl_fn_806722D0_000038E8
    addi r0, r7, 0x7
    lis r4, lbl_807BA9A0@ha
    srwi r0, r0, 3
    addi r8, r1, 0x8
    addi r4, r4, lbl_807BA9A0@l
    mtctr r0
    cmpwi r7, 0x0
    ble lbl_fn_806722D0_000038E8
lbl_fn_806722D0_00003898:
    add r3, r4, r6
    addi r6, r6, 0x8
    lbz r0, 0x8(r3)
    stb r0, 0x4(r8)
    lbz r0, 0x9(r3)
    stb r0, 0x5(r8)
    lbz r0, 0xa(r3)
    stb r0, 0x6(r8)
    lbz r0, 0xb(r3)
    stb r0, 0x7(r8)
    lbz r0, 0xc(r3)
    stb r0, 0x8(r8)
    lbz r0, 0xd(r3)
    stb r0, 0x9(r8)
    lbz r0, 0xe(r3)
    stb r0, 0xa(r8)
    lbz r0, 0xf(r3)
    stb r0, 0xb(r8)
    addi r8, r8, 0x8
    bdnz lbl_fn_806722D0_00003898
lbl_fn_806722D0_000038E8:
    addi r7, r1, 0x8
    lis r4, lbl_807BA9A0@ha
    subf r0, r6, r5
    add r7, r7, r6
    addi r4, r4, lbl_807BA9A0@l
    mtctr r0
    cmpw r6, r5
    bge lbl_fn_806722D0_00003920
lbl_fn_806722D0_00003908:
    add r3, r4, r6
    addi r6, r6, 0x1
    lbz r0, 0x8(r3)
    stb r0, 0x4(r7)
    addi r7, r7, 0x1
    bdnz lbl_fn_806722D0_00003908
lbl_fn_806722D0_00003920:
    lis r3, 0x1
    addi r0, r5, 0x4
    subi r3, r3, 0x3b4
    lis r6, fn_806720A0@ha
    stw r5, lbl_808802CC
    clrlwi r3, r3, 16
    clrlwi r4, r0, 24
    addi r5, r1, 0x8
    addi r6, r6, fn_806720A0@l
    bl fn_806332CC
    b lbl_fn_806722D0_00003958
lbl_fn_806722D0_0000394C:
    lis r3, fn_80671FC0@ha
    addi r3, r3, fn_80671FC0@l
    bl fn_806322D0
lbl_fn_806722D0_00003958:
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80672450(void)
{
    nofralloc
    lis r3, 0x1
    lis r6, fn_806722D0@ha
    subi r0, r3, 0x3b1
    li r4, 0x1
    clrlwi r3, r0, 16
    addi r6, r6, fn_806722D0@l
    la r5, lbl_808802AC
    b fn_806332CC
}

asm void fn_80672470(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, lbl_80888A50
    stw r0, 0x24(r1)
    addi r3, r1, 0xc
    lhz r4, lbl_80888A54
    stw r31, 0x1c(r1)
    lbz r0, lbl_80888A56
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lis r28, lbl_8082DE00@ha
    addi r28, r28, lbl_8082DE00@l
    stw r5, 0xc(r1)
    sth r4, 0x8(r1)
    stb r0, 0xa(r1)
    bl fn_8062CA68
    addi r3, r1, 0x8
    bl fn_80633214
    lis r3, fn_80673780@ha
    addi r3, r3, fn_80673780@l
    bl fn_80633434
    lis r3, fn_80673A00@ha
    addi r3, r3, fn_80673A00@l
    bl fn_806332B4
    lis r5, fn_80673C10@ha
    addi r4, r28, 0x70a
    addi r5, r5, fn_80673C10@l
    li r3, 0x3
    bl fn_80635730
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl fn_80633504
    li r3, 0x5
    bl fn_806307C8
    li r3, 0xc80
    bl fn_80630B94
    mr r30, r28
    addi r31, r28, 0x124
    li r29, 0x0
lbl_fn_80672470_00003A34:
    lbz r0, 0x13d(r30)
    cmplwi r0, 0x1
    bne lbl_fn_80672470_00003A48
    mr r3, r31
    bl fn_806725D0
lbl_fn_80672470_00003A48:
    addi r29, r29, 0x1
    addi r31, r31, 0x60
    cmpwi r29, 0xa
    addi r30, r30, 0x60
    blt lbl_fn_80672470_00003A34
    mr r31, r28
    addi r30, r28, 0x4e4
    li r29, 0x0
lbl_fn_80672470_00003A68:
    lbz r0, 0x4fd(r31)
    cmplwi r0, 0x1
    bne lbl_fn_80672470_00003A7C
    mr r3, r30
    bl fn_806725D0
lbl_fn_80672470_00003A7C:
    addi r29, r29, 0x1
    addi r30, r30, 0x60
    cmpwi r29, 0x6
    addi r31, r31, 0x60
    blt lbl_fn_80672470_00003A68
    bl OSDisableInterrupts
    li r0, 0x3
    li r31, 0x1
    stb r0, 0x708(r28)
    stw r31, lbl_808802A4
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    lis r4, lbl_8082DE00@ha
    li r0, 0x0
    addi r4, r4, lbl_8082DE00@l
    stb r0, 0x6eb(r4)
    stb r31, 0x6ea(r4)
    bl OSRestoreInterrupts
    li r3, 0x0
    li r4, 0x1
    bl fn_8062CACC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806725D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807BA8B8@ha
    addi r31, r31, lbl_807BA8B8@l
    stw r30, 0x28(r1)
    lis r30, lbl_8082DE00@ha
    addi r30, r30, lbl_8082DE00@l
    stw r29, 0x24(r1)
    mr r29, r3
    stw r28, 0x20(r1)
    bl OSDisableInterrupts
    mr r28, r3
    mr r3, r29
    bl fn_80672810
    mr r29, r3
    addi r4, r3, 0x46
    li r5, 0x0
    li r6, 0x0
    addi r3, r3, 0x40
    bl fn_8062CC6C
    mr r3, r29
    addi r4, r31, 0x21c
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806725D0_00003B84
    mr r3, r29
    addi r4, r31, 0x230
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806725D0_00003BB8
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_806725D0_00003BB8
lbl_fn_806725D0_00003B84:
    li r0, 0xd9
    sth r0, 0x10(r1)
    addi r4, r31, 0x0
    addi r3, r29, 0x40
    lwz r0, 0x10(r1)
    addi r7, r1, 0x8
    stw r0, 0x8(r1)
    stw r4, 0xc(r1)
    stw r4, 0x14(r1)
    lhz r4, 0x5e(r29)
    lbz r5, 0x57(r29)
    lbz r6, 0x58(r29)
    bl fn_8062F308
lbl_fn_806725D0_00003BB8:
    lbz r0, 0x5b(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806725D0_00003BDC
    cmplwi r0, 0x4
    beq lbl_fn_806725D0_00003BDC
    cmplwi r0, 0x2
    beq lbl_fn_806725D0_00003BDC
    cmplwi r0, 0x5
    bne lbl_fn_806725D0_00003BEC
lbl_fn_806725D0_00003BDC:
    lbz r3, 0x12(r30)
    addi r0, r3, 0x1
    stb r0, 0x12(r30)
    b lbl_fn_806725D0_00003BF8
lbl_fn_806725D0_00003BEC:
    lbz r3, 0x13(r30)
    addi r0, r3, 0x1
    stb r0, 0x13(r30)
lbl_fn_806725D0_00003BF8:
    mr r3, r28
    bl OSRestoreInterrupts
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80672700(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    mr r29, r3
    mr r3, r30
    bl fn_80672810
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80672700_00003D00
    lis r4, lbl_807BAAD4@ha
    li r5, 0x10
    addi r4, r4, lbl_807BAAD4@l
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80672700_00003CA0
    lis r4, lbl_807BAAE8@ha
    mr r3, r30
    addi r4, r4, lbl_807BAAE8@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672700_00003CA8
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_80672700_00003CA8
lbl_fn_80672700_00003CA0:
    lbz r3, 0x56(r30)
    bl fn_8062F3B0
lbl_fn_80672700_00003CA8:
    addi r3, r30, 0x40
    bl fn_8062CD5C
    lbz r3, 0x5b(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80672700_00003CD4
    cmplwi r3, 0x2
    beq lbl_fn_80672700_00003CD4
    addi r0, r3, 0xfc
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_80672700_00003CE4
lbl_fn_80672700_00003CD4:
    lbz r3, 0x12(r31)
    subi r0, r3, 0x1
    stb r0, 0x12(r31)
    b lbl_fn_80672700_00003CF0
lbl_fn_80672700_00003CE4:
    lbz r3, 0x13(r31)
    subi r0, r3, 0x1
    stb r0, 0x13(r31)
lbl_fn_80672700_00003CF0:
    mr r3, r30
    li r4, 0x0
    li r5, 0x60
    bl memset
lbl_fn_80672700_00003D00:
    mr r3, r29
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80672810(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r29, lbl_8082DE00@ha
    mr r26, r3
    addi r29, r29, lbl_8082DE00@l
    li r28, 0x0
    bl OSDisableInterrupts
    mr r27, r3
    addi r31, r29, 0x124
    li r30, 0x0
lbl_fn_80672810_00003D64:
    mr r3, r31
    mr r4, r26
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672810_00003D8C
    mulli r0, r30, 0x60
    add r3, r29, r0
    addi r28, r3, 0xe4
    b lbl_fn_80672810_00003D9C
lbl_fn_80672810_00003D8C:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0xa
    blt lbl_fn_80672810_00003D64
lbl_fn_80672810_00003D9C:
    cmpwi r28, 0x0
    bne lbl_fn_80672810_00003DE4
    addi r31, r29, 0x4e4
    li r30, 0x0
lbl_fn_80672810_00003DAC:
    mr r3, r31
    mr r4, r26
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672810_00003DD4
    mulli r0, r30, 0x60
    add r3, r29, r0
    addi r28, r3, 0x4a4
    b lbl_fn_80672810_00003DE4
lbl_fn_80672810_00003DD4:
    addi r30, r30, 0x1
    addi r31, r31, 0x60
    cmpwi r30, 0x6
    blt lbl_fn_80672810_00003DAC
lbl_fn_80672810_00003DE4:
    mr r3, r27
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    mr r3, r28
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806728F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8082DE00@ha
    mr r27, r3
    addi r30, r30, lbl_8082DE00@l
    bl OSDisableInterrupts
    mr r29, r3
    mr r28, r30
    li r31, 0x0
lbl_fn_806728F0_00003E40:
    lwz r3, 0x1c(r28)
    addi r4, r27, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806728F0_00003EF4
    mulli r28, r31, 0xc
    lwz r3, 0x14(r30)
    li r5, 0x6
    lwz r3, 0x0(r3)
    add r31, r30, r28
    lwzu r4, 0x1c(r31)
    addi r3, r3, 0x40
    addi r4, r4, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806728F0_00003F04
    add r28, r30, r28
    li r5, 0x6
    lwz r3, 0x20(r28)
    lwz r0, 0x24(r28)
    stw r0, 0x8(r3)
    lwz r4, 0x18(r30)
    lwz r3, 0x0(r31)
    lwz r6, 0x0(r4)
    addi r4, r3, 0x40
    addi r3, r6, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806728F0_00003EC8
    lwz r0, 0x20(r28)
    stw r0, 0x18(r30)
    b lbl_fn_806728F0_00003ED4
lbl_fn_806728F0_00003EC8:
    lwz r3, 0x24(r28)
    lwz r0, 0x20(r28)
    stw r0, 0x4(r3)
lbl_fn_806728F0_00003ED4:
    lwz r3, 0x14(r30)
    li r0, 0x0
    stw r3, 0x24(r28)
    lwz r3, 0x14(r30)
    stw r31, 0x4(r3)
    stw r31, 0x14(r30)
    stw r0, 0x20(r28)
    b lbl_fn_806728F0_00003F04
lbl_fn_806728F0_00003EF4:
    addi r31, r31, 0x1
    addi r28, r28, 0xc
    cmpwi r31, 0x6
    blt lbl_fn_806728F0_00003E40
lbl_fn_806728F0_00003F04:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80672A10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8082DE00@ha
    mr r27, r3
    addi r30, r30, lbl_8082DE00@l
    bl OSDisableInterrupts
    mr r29, r3
    mr r28, r30
    li r31, 0x0
lbl_fn_80672A10_00003F60:
    lwz r3, 0x1c(r28)
    addi r4, r27, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672A10_00004014
    mulli r28, r31, 0xc
    lwz r3, 0x18(r30)
    li r5, 0x6
    lwz r3, 0x0(r3)
    add r31, r30, r28
    lwzu r4, 0x1c(r31)
    addi r3, r3, 0x40
    addi r4, r4, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80672A10_00004024
    add r28, r30, r28
    li r5, 0x6
    lwz r3, 0x24(r28)
    lwz r0, 0x20(r28)
    stw r0, 0x4(r3)
    lwz r4, 0x14(r30)
    lwz r3, 0x0(r31)
    lwz r6, 0x0(r4)
    addi r4, r3, 0x40
    addi r3, r6, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672A10_00003FE8
    lwz r0, 0x24(r28)
    stw r0, 0x14(r30)
    b lbl_fn_80672A10_00003FF4
lbl_fn_80672A10_00003FE8:
    lwz r3, 0x20(r28)
    lwz r0, 0x24(r28)
    stw r0, 0x8(r3)
lbl_fn_80672A10_00003FF4:
    lwz r3, 0x18(r30)
    li r0, 0x0
    stw r3, 0x20(r28)
    lwz r3, 0x18(r30)
    stw r31, 0x8(r3)
    stw r31, 0x18(r30)
    stw r0, 0x24(r28)
    b lbl_fn_80672A10_00004024
lbl_fn_80672A10_00004014:
    addi r31, r31, 0x1
    addi r28, r28, 0xc
    cmpwi r31, 0x6
    blt lbl_fn_80672A10_00003F60
lbl_fn_80672A10_00004024:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80672B30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r30, lbl_8082DE00@ha
    mr r26, r3
    addi r30, r30, lbl_8082DE00@l
    bl OSDisableInterrupts
    mr r28, r3
    li r29, 0x0
    li r25, 0x0
lbl_fn_80672B30_00004080:
    add r31, r30, r25
    lwzu r3, 0x1c(r31)
    addi r4, r26, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672B30_00004188
    lwz r23, 0x14(r30)
    mr r27, r23
    b lbl_fn_80672B30_00004180
lbl_fn_80672B30_000040AC:
    lwz r24, 0x0(r27)
    addi r4, r26, 0x40
    li r5, 0x6
    addi r3, r24, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80672B30_0000417C
    lbz r0, 0x59(r24)
    cmplwi r0, 0x1
    bgt lbl_fn_80672B30_0000417C
    add r3, r30, r25
    lwz r6, 0x0(r23)
    lwz r4, 0x1c(r3)
    li r5, 0x6
    addi r3, r6, 0x40
    addi r4, r4, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672B30_00004114
    lwz r0, 0x8(r23)
    cmplw r27, r0
    beq lbl_fn_80672B30_00004188
    add r5, r30, r25
    lwzu r0, 0x24(r5)
    stw r0, 0x14(r30)
    b lbl_fn_80672B30_00004128
lbl_fn_80672B30_00004114:
    add r3, r30, r25
    addi r5, r3, 0x24
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x8(r3)
lbl_fn_80672B30_00004128:
    add r4, r30, r25
    lwz r3, 0x0(r5)
    lwz r0, 0x20(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x14(r30)
    cmplw r27, r0
    beq lbl_fn_80672B30_00004160
    lwz r0, 0x4(r27)
    stw r0, 0x20(r4)
    stw r27, 0x0(r5)
    lwz r3, 0x4(r27)
    stw r31, 0x8(r3)
    stw r31, 0x4(r27)
    b lbl_fn_80672B30_00004188
lbl_fn_80672B30_00004160:
    stw r27, 0x20(r4)
    lwz r0, 0x8(r27)
    stw r0, 0x0(r5)
    lwz r3, 0x8(r27)
    stw r31, 0x4(r3)
    stw r31, 0x8(r27)
    b lbl_fn_80672B30_00004188
lbl_fn_80672B30_0000417C:
    lwz r27, 0x8(r27)
lbl_fn_80672B30_00004180:
    cmpwi r27, 0x0
    bne lbl_fn_80672B30_000040AC
lbl_fn_80672B30_00004188:
    addi r29, r29, 0x1
    addi r25, r25, 0xc
    cmpwi r29, 0x6
    blt lbl_fn_80672B30_00004080
    mr r3, r28
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80672CA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8082DE00@ha
    mr r27, r3
    addi r30, r30, lbl_8082DE00@l
    bl OSDisableInterrupts
    mr r29, r3
    mr r28, r30
    li r31, 0x0
lbl_fn_80672CA0_000041F0:
    lwz r3, 0x6c(r28)
    addi r4, r27, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672CA0_000042A4
    mulli r28, r31, 0xc
    lwz r3, 0x64(r30)
    li r5, 0x6
    lwz r3, 0x0(r3)
    add r31, r30, r28
    lwzu r4, 0x6c(r31)
    addi r3, r3, 0x40
    addi r4, r4, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80672CA0_000042B4
    add r28, r30, r28
    li r5, 0x6
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x8(r3)
    lwz r4, 0x68(r30)
    lwz r3, 0x0(r31)
    lwz r6, 0x0(r4)
    addi r4, r3, 0x40
    addi r3, r6, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672CA0_00004278
    lwz r0, 0x70(r28)
    stw r0, 0x68(r30)
    b lbl_fn_80672CA0_00004284
lbl_fn_80672CA0_00004278:
    lwz r3, 0x74(r28)
    lwz r0, 0x70(r28)
    stw r0, 0x4(r3)
lbl_fn_80672CA0_00004284:
    lwz r3, 0x64(r30)
    li r0, 0x0
    stw r3, 0x74(r28)
    lwz r3, 0x64(r30)
    stw r31, 0x4(r3)
    stw r31, 0x64(r30)
    stw r0, 0x70(r28)
    b lbl_fn_80672CA0_000042B4
lbl_fn_80672CA0_000042A4:
    addi r31, r31, 0x1
    addi r28, r28, 0xc
    cmpwi r31, 0xa
    blt lbl_fn_80672CA0_000041F0
lbl_fn_80672CA0_000042B4:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80672DC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8082DE00@ha
    mr r27, r3
    addi r30, r30, lbl_8082DE00@l
    bl OSDisableInterrupts
    mr r29, r3
    mr r28, r30
    li r31, 0x0
lbl_fn_80672DC0_00004310:
    lwz r3, 0x6c(r28)
    addi r4, r27, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672DC0_000043C4
    mulli r28, r31, 0xc
    lwz r3, 0x68(r30)
    li r5, 0x6
    lwz r3, 0x0(r3)
    add r31, r30, r28
    lwzu r4, 0x6c(r31)
    addi r3, r3, 0x40
    addi r4, r4, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80672DC0_000043D4
    add r28, r30, r28
    li r5, 0x6
    lwz r3, 0x74(r28)
    lwz r0, 0x70(r28)
    stw r0, 0x4(r3)
    lwz r4, 0x64(r30)
    lwz r3, 0x0(r31)
    lwz r6, 0x0(r4)
    addi r4, r3, 0x40
    addi r3, r6, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672DC0_00004398
    lwz r0, 0x74(r28)
    stw r0, 0x64(r30)
    b lbl_fn_80672DC0_000043A4
lbl_fn_80672DC0_00004398:
    lwz r3, 0x70(r28)
    lwz r0, 0x74(r28)
    stw r0, 0x8(r3)
lbl_fn_80672DC0_000043A4:
    lwz r3, 0x68(r30)
    li r0, 0x0
    stw r3, 0x70(r28)
    lwz r3, 0x68(r30)
    stw r31, 0x8(r3)
    stw r31, 0x68(r30)
    stw r0, 0x74(r28)
    b lbl_fn_80672DC0_000043D4
lbl_fn_80672DC0_000043C4:
    addi r31, r31, 0x1
    addi r28, r28, 0xc
    cmpwi r31, 0xa
    blt lbl_fn_80672DC0_00004310
lbl_fn_80672DC0_000043D4:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80672EE0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lis r29, lbl_8082DE00@ha
    mr r25, r3
    addi r29, r29, lbl_8082DE00@l
    bl OSDisableInterrupts
    mr r27, r3
    li r28, 0x0
    li r24, 0x0
    lis r31, lbl_807BAAD4@ha
lbl_fn_80672EE0_00004434:
    add r30, r29, r24
    lwzu r3, 0x6c(r30)
    addi r4, r25, 0x40
    li r5, 0x6
    addi r3, r3, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672EE0_00004560
    lwz r22, 0x64(r29)
    mr r26, r22
    b lbl_fn_80672EE0_00004558
lbl_fn_80672EE0_00004460:
    lwz r23, 0x0(r26)
    addi r4, r25, 0x40
    li r5, 0x6
    addi r3, r23, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80672EE0_00004554
    lbz r0, 0x59(r23)
    cmplwi r0, 0x1
    ble lbl_fn_80672EE0_000044AC
    mr r3, r23
    addi r4, r31, lbl_807BAAD4@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80672EE0_00004554
    lwz r0, lbl_808802B8
    cmpwi r0, 0x0
    beq lbl_fn_80672EE0_00004554
lbl_fn_80672EE0_000044AC:
    add r3, r29, r24
    lwz r6, 0x0(r22)
    lwz r4, 0x6c(r3)
    li r5, 0x6
    addi r3, r6, 0x40
    addi r4, r4, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80672EE0_000044EC
    lwz r0, 0x8(r22)
    cmplw r26, r0
    beq lbl_fn_80672EE0_00004560
    add r5, r29, r24
    lwzu r0, 0x74(r5)
    stw r0, 0x64(r29)
    b lbl_fn_80672EE0_00004500
lbl_fn_80672EE0_000044EC:
    add r3, r29, r24
    addi r5, r3, 0x74
    lwz r3, 0x70(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x8(r3)
lbl_fn_80672EE0_00004500:
    add r4, r29, r24
    lwz r3, 0x0(r5)
    lwz r0, 0x70(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x64(r29)
    cmplw r26, r0
    beq lbl_fn_80672EE0_00004538
    lwz r0, 0x4(r26)
    stw r0, 0x70(r4)
    stw r26, 0x0(r5)
    lwz r3, 0x4(r26)
    stw r30, 0x8(r3)
    stw r30, 0x4(r26)
    b lbl_fn_80672EE0_00004560
lbl_fn_80672EE0_00004538:
    stw r26, 0x70(r4)
    lwz r0, 0x8(r26)
    stw r0, 0x0(r5)
    lwz r3, 0x8(r26)
    stw r30, 0x4(r3)
    stw r30, 0x8(r26)
    b lbl_fn_80672EE0_00004560
lbl_fn_80672EE0_00004554:
    lwz r26, 0x8(r26)
lbl_fn_80672EE0_00004558:
    cmpwi r26, 0x0
    bne lbl_fn_80672EE0_00004460
lbl_fn_80672EE0_00004560:
    addi r28, r28, 0x1
    addi r24, r24, 0xc
    cmpwi r28, 0xa
    blt lbl_fn_80672EE0_00004434
    mr r3, r27
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80673070(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lis r29, lbl_8082DE00@ha
    mr r25, r3
    addi r29, r29, lbl_8082DE00@l
    bl OSDisableInterrupts
    mr r27, r3
    mr r31, r29
    addi r30, r29, 0x6c
    li r28, 0x0
    li r24, 0x0
lbl_fn_80673070_000045C8:
    lwz r3, 0x6c(r31)
    addi r4, r25, 0x40
    li r5, 0x6
    addi r22, r3, 0x40
    mr r3, r22
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80673070_000046F4
    lwz r21, 0x64(r29)
    mr r26, r21
    b lbl_fn_80673070_000046EC
lbl_fn_80673070_000045F4:
    lwz r23, 0x0(r26)
    addi r4, r25, 0x40
    li r5, 0x6
    addi r3, r23, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80673070_000046E8
    lbz r0, 0x59(r23)
    cmpwi r0, 0x0
    beq lbl_fn_80673070_00004628
    lwz r0, 0x68(r29)
    cmplw r26, r0
    bne lbl_fn_80673070_000046E8
lbl_fn_80673070_00004628:
    lwz r3, 0x0(r21)
    mr r4, r22
    li r5, 0x6
    addi r3, r3, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80673070_0000465C
    lwz r0, 0x8(r21)
    cmplw r26, r0
    beq lbl_fn_80673070_000046F4
    lwz r0, 0x74(r31)
    stw r0, 0x64(r29)
    b lbl_fn_80673070_00004668
lbl_fn_80673070_0000465C:
    lwz r3, 0x70(r31)
    lwz r0, 0x74(r31)
    stw r0, 0x8(r3)
lbl_fn_80673070_00004668:
    lwz r3, 0x74(r31)
    lwz r0, 0x70(r31)
    stw r0, 0x4(r3)
    lwz r0, 0x68(r29)
    cmplw r26, r0
    bne lbl_fn_80673070_000046A4
    lwz r3, 0x0(r26)
    lbz r0, 0x59(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80673070_000046A4
    stw r26, 0x70(r31)
    stw r24, 0x74(r31)
    stw r30, 0x8(r26)
    stw r30, 0x68(r29)
    b lbl_fn_80673070_000046F4
lbl_fn_80673070_000046A4:
    lwz r0, 0x64(r29)
    cmplw r26, r0
    beq lbl_fn_80673070_000046CC
    lwz r0, 0x4(r26)
    stw r0, 0x70(r31)
    stw r26, 0x74(r31)
    lwz r3, 0x4(r26)
    stw r30, 0x8(r3)
    stw r30, 0x4(r26)
    b lbl_fn_80673070_000046F4
lbl_fn_80673070_000046CC:
    stw r26, 0x70(r31)
    lwz r0, 0x8(r26)
    stw r0, 0x74(r31)
    lwz r3, 0x8(r26)
    stw r30, 0x4(r3)
    stw r30, 0x8(r26)
    b lbl_fn_80673070_000046F4
lbl_fn_80673070_000046E8:
    lwz r26, 0x8(r26)
lbl_fn_80673070_000046EC:
    cmpwi r26, 0x0
    bne lbl_fn_80673070_000045F4
lbl_fn_80673070_000046F4:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmpwi r28, 0xa
    addi r31, r31, 0xc
    blt lbl_fn_80673070_000045C8
    mr r3, r27
    bl OSRestoreInterrupts
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80673210(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    bl OSDisableInterrupts
    lbz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80673210_00004788
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80673210_00004788
    lbz r0, 0xf(r31)
    cmplwi r0, 0x4
    bne lbl_fn_80673210_00004788
    lbz r0, 0x10(r31)
    cmplwi r0, 0x7
    bne lbl_fn_80673210_00004788
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80673210_00004790
lbl_fn_80673210_00004788:
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_80673210_00004790:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80673290(void)
{
    nofralloc
    cmpwi r3, 0x0
    lis r3, lbl_8082DE00@ha
    addi r3, r3, lbl_8082DE00@l
    bnelr
    li r0, 0x0
    stw r0, lbl_808802A0
    stb r0, 0x708(r3)
    blr
}

asm void fn_806732B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r29, lbl_8082DE00@ha
    cmpwi r3, 0x0
    addi r29, r29, lbl_8082DE00@l
    mr r30, r4
    addi r31, r29, 0x0
    beq lbl_fn_806732B0_00004828
    cmpwi r3, 0x1
    beq lbl_fn_806732B0_000048A0
    cmpwi r3, 0x2
    beq lbl_fn_806732B0_000048B0
    cmpwi r3, 0x3
    beq lbl_fn_806732B0_00004944
    cmpwi r3, 0x5
    beq lbl_fn_806732B0_000049A0
    cmpwi r3, 0x6
    beq lbl_fn_806732B0_00004A28
    b lbl_fn_806732B0_00004B2C
lbl_fn_806732B0_00004828:
    addi r3, r31, 0x702
    li r5, 0x6
    bl memcpy
    lis r4, fn_80673FD0@ha
    li r3, 0x12
    addi r4, r4, fn_80673FD0@l
    bl fn_8062F0A0
    li r0, 0x1
    stb r0, 0xf(r31)
    addi r3, r31, 0x710
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_80670640@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_80670640@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0xa
    bl fn_805EC3B0
    li r0, 0x2
    stb r0, 0x708(r31)
    b lbl_fn_806732B0_00004B2C
lbl_fn_806732B0_000048A0:
    lis r3, fn_80673290@ha
    addi r3, r3, fn_80673290@l
    bl fn_806299F0
    b lbl_fn_806732B0_00004B2C
lbl_fn_806732B0_000048B0:
    lbz r0, 0x6e9(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806732B0_000048C4
    addi r31, r31, 0x702
    b lbl_fn_806732B0_000048C8
lbl_fn_806732B0_000048C4:
    mr r31, r30
lbl_fn_806732B0_000048C8:
    addi r28, r29, 0x858
    lbz r0, 0x5b(r28)
    cmplwi r0, 0x4
    bne lbl_fn_806732B0_000048E8
    addi r3, r28, 0x40
    bl fn_80672700
    addi r3, r28, 0x40
    bl fn_806317D8
lbl_fn_806732B0_000048E8:
    addi r3, r29, 0x858
    li r0, 0x1
    stb r0, 0x5a(r3)
    bl OSDisableInterrupts
    lbz r0, 0x5(r31)
    stb r0, 0x8(r1)
    lbz r0, 0x4(r31)
    stb r0, 0x9(r1)
    lbz r0, 0x3(r31)
    stb r0, 0xa(r1)
    lbz r0, 0x2(r31)
    stb r0, 0xb(r1)
    lbz r0, 0x1(r31)
    stb r0, 0xc(r1)
    lbz r0, 0x0(r31)
    stb r0, 0xd(r1)
    bl OSRestoreInterrupts
    mr r3, r30
    addi r6, r1, 0x8
    li r4, 0x1
    li r5, 0x6
    bl fn_8062CBE0
    b lbl_fn_806732B0_00004B2C
lbl_fn_806732B0_00004944:
    lbz r0, 0x10f(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806732B0_00004B2C
    mr r3, r30
    bl fn_80672810
    addi r28, r29, 0x858
    mr r27, r3
    mr r4, r30
    li r5, 0x6
    addi r3, r28, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806732B0_0000498C
    cmpwi r27, 0x0
    li r0, 0xc
    stb r0, 0x59(r28)
    bne lbl_fn_806732B0_0000498C
    mr r27, r28
lbl_fn_806732B0_0000498C:
    addi r3, r27, 0x46
    addi r4, r30, 0xff
    li r5, 0x10
    bl memcpy
    b lbl_fn_806732B0_00004B2C
lbl_fn_806732B0_000049A0:
    mr r3, r30
    bl fn_80672810
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806732B0_000049D4
    addi r28, r29, 0x858
    mr r3, r30
    addi r4, r28, 0x40
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806732B0_000049D4
    mr r27, r28
lbl_fn_806732B0_000049D4:
    cmpwi r27, 0x0
    beq lbl_fn_806732B0_000049F4
    bl OSDisableInterrupts
    addi r4, r29, 0x0
    lbz r28, 0x6e5(r4)
    bl OSRestoreInterrupts
    cmplwi r28, 0x4
    bne lbl_fn_806732B0_00004A00
lbl_fn_806732B0_000049F4:
    mr r3, r30
    bl fn_806317D8
    b lbl_fn_806732B0_00004B2C
lbl_fn_806732B0_00004A00:
    lbz r0, 0x59(r27)
    li r3, 0x3
    cmplwi r0, 0x2
    bne lbl_fn_806732B0_00004A14
    li r3, 0xc
lbl_fn_806732B0_00004A14:
    stb r3, 0x59(r27)
    lbz r3, 0x6e5(r31)
    addi r0, r3, 0x1
    stb r0, 0x6e5(r31)
    b lbl_fn_806732B0_00004B2C
lbl_fn_806732B0_00004A28:
    mr r3, r30
    bl fn_80672810
    cmpwi r3, 0x0
    beq lbl_fn_806732B0_00004AD8
    li r0, 0x1
    stb r0, 0x59(r3)
    addi r3, r29, 0x858
    mr r4, r30
    lbz r6, 0x6e5(r31)
    addi r3, r3, 0x40
    li r5, 0x6
    subi r0, r6, 0x1
    stb r0, 0x6e5(r31)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806732B0_00004A70
    li r0, 0xff
    stb r0, 0xc(r31)
lbl_fn_806732B0_00004A70:
    lbz r0, 0x6(r30)
    cmplwi r0, 0x15
    bne lbl_fn_806732B0_00004B08
    addi r28, r29, 0x8b8
    li r26, 0x0
    li r29, 0x1
lbl_fn_806732B0_00004A88:
    clrlwi r3, r26, 24
    mr r4, r30
    addi r0, r3, 0xa
    li r5, 0x6
    mulli r0, r0, 0x46
    add r3, r28, r0
    addi r27, r3, 0x1
    mr r3, r27
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806732B0_00004AC8
    mr r3, r27
    li r4, 0x0
    li r5, 0x46
    bl memset
    stb r29, lbl_808802D4
lbl_fn_806732B0_00004AC8:
    addi r26, r26, 0x1
    cmplwi r26, 0x4
    blt lbl_fn_806732B0_00004A88
    b lbl_fn_806732B0_00004B08
lbl_fn_806732B0_00004AD8:
    addi r3, r29, 0x858
    mr r4, r30
    addi r3, r3, 0x40
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806732B0_00004B08
    lbz r3, 0x6e5(r31)
    li r0, 0xff
    stb r0, 0xc(r31)
    subi r0, r3, 0x1
    stb r0, 0x6e5(r31)
lbl_fn_806732B0_00004B08:
    lbz r0, 0x6e5(r31)
    cmplwi r0, 0xfa
    blt lbl_fn_806732B0_00004B2C
    lis r3, lbl_807BAB90@ha
    addi r3, r3, lbl_807BAB90@l
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x6e5(r31)
lbl_fn_806732B0_00004B2C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80673630(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_80673630_00004B8C
    cmpwi r3, 0x2
    beq lbl_fn_80673630_00004BE0
    cmpwi r3, 0x3
    beq lbl_fn_80673630_00004C1C
    cmpwi r3, 0x4
    beq lbl_fn_80673630_00004C30
    b lbl_fn_80673630_00004C7C
lbl_fn_80673630_00004B8C:
    lis r31, lbl_8082DE00@ha
    lbz r0, 0x9(r4)
    addi r31, r31, lbl_8082DE00@l
    stb r0, lbl_808802D6
    lbz r0, 0x6e7(r31)
    cmplwi r0, 0x1
    beq lbl_fn_80673630_00004BC4
    cmpwi r0, 0x0
    bne lbl_fn_80673630_00004BCC
    bl OSDisableInterrupts
    lbz r31, 0x6e5(r31)
    bl OSRestoreInterrupts
    cmplwi r31, 0x3
    bge lbl_fn_80673630_00004BCC
lbl_fn_80673630_00004BC4:
    li r0, 0x1900
    b lbl_fn_80673630_00004BD4
lbl_fn_80673630_00004BCC:
    lis r3, 0x1
    addi r0, r3, -0x8000
lbl_fn_80673630_00004BD4:
    clrlwi r3, r0, 16
    bl fn_80633504
    b lbl_fn_80673630_00004C7C
lbl_fn_80673630_00004BE0:
    lis r31, lbl_8082E550@ha
    li r5, 0x6
    addi r3, r31, lbl_8082E550@l
    bl memcpy
    addi r31, r31, lbl_8082E550@l
    addi r4, r30, 0x6
    addi r3, r31, 0x6
    li r5, 0x40
    bl memcpy
    lbz r3, lbl_808802D7
    lwz r0, 0x100(r30)
    stw r0, 0x100(r31)
    addi r0, r3, 0x1
    stb r0, lbl_808802D7
    b lbl_fn_80673630_00004C7C
lbl_fn_80673630_00004C1C:
    lis r3, lbl_8082DE00@ha
    li r0, 0x4
    addi r3, r3, lbl_8082DE00@l
    stb r0, 0xc(r3)
    b lbl_fn_80673630_00004C7C
lbl_fn_80673630_00004C30:
    lis r3, 0x1
    lis r5, lbl_807BAAB8@ha
    subi r0, r3, 0x3b4
    li r4, 0x1c
    clrlwi r3, r0, 16
    addi r5, r5, lbl_807BAAB8@l
    li r6, 0x0
    bl fn_806332CC
    li r0, 0x0
    lis r3, lbl_8082E550@ha
    stb r0, lbl_808802D7
    addi r3, r3, lbl_8082E550@l
    li r4, 0x0
    li r5, 0x108
    bl memset
    lis r3, lbl_8082DE00@ha
    li r0, 0x4
    addi r3, r3, lbl_8082DE00@l
    stb r0, 0xc(r3)
lbl_fn_80673630_00004C7C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80673780(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_8082DE00@ha
    addi r29, r29, lbl_8082DE00@l
    lbz r0, 0x0(r4)
    cmpwi r0, 0x8
    beq lbl_fn_80673780_00004CE8
    cmpwi r0, 0x9
    beq lbl_fn_80673780_00004D7C
    cmpwi r0, 0xa
    beq lbl_fn_80673780_00004ED8
    cmpwi r0, 0x10
    beq lbl_fn_80673780_00004EE4
    b lbl_fn_80673780_00004EFC
lbl_fn_80673780_00004CE8:
    bl OSDisableInterrupts
    lbz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80673780_00004D28
    lbz r0, 0xd(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80673780_00004D28
    lbz r0, 0xf(r29)
    cmplwi r0, 0x4
    bne lbl_fn_80673780_00004D28
    lbz r0, 0x10(r29)
    cmplwi r0, 0x7
    bne lbl_fn_80673780_00004D28
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_80673780_00004D30
lbl_fn_80673780_00004D28:
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_80673780_00004D30:
    cmpwi r0, 0x0
    bne lbl_fn_80673780_00004EFC
    bl OSDisableInterrupts
    lwz r31, 0x0(r29)
    bl OSRestoreInterrupts
    cmpwi r31, 0x0
    beq lbl_fn_80673780_00004D64
    mr r12, r31
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80673780_00004EFC
lbl_fn_80673780_00004D64:
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    li r6, 0x0
    bl fn_80671B70
    b lbl_fn_80673780_00004EFC
lbl_fn_80673780_00004D7C:
    bl OSDisableInterrupts
    lwz r31, 0x8(r29)
    mr r30, r3
    bl OSDisableInterrupts
    lbz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80673780_00004DC8
    lbz r0, 0xd(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80673780_00004DC8
    lbz r0, 0xf(r29)
    cmplwi r0, 0x4
    bne lbl_fn_80673780_00004DC8
    lbz r0, 0x10(r29)
    cmplwi r0, 0x7
    bne lbl_fn_80673780_00004DC8
    bl OSRestoreInterrupts
    li r4, 0x0
    b lbl_fn_80673780_00004DD0
lbl_fn_80673780_00004DC8:
    bl OSRestoreInterrupts
    li r4, 0x1
lbl_fn_80673780_00004DD0:
    neg r0, r4
    mr r3, r30
    or r0, r0, r4
    srwi r0, r0, 31
    neg r30, r0
    bl OSRestoreInterrupts
    cmpwi r31, 0x0
    beq lbl_fn_80673780_00004E04
    mr r12, r31
    mr r3, r30
    mtctr r12
    bctrl
    b lbl_fn_80673780_00004EFC
lbl_fn_80673780_00004E04:
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    bl OSDisableInterrupts
    lbz r30, 0x708(r31)
    extsb r30, r30
    bl OSRestoreInterrupts
    cmplwi r30, 0x3
    bne lbl_fn_80673780_00004EFC
    bl OSDisableInterrupts
    lbz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80673780_00004E64
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80673780_00004E64
    lbz r0, 0xf(r31)
    cmplwi r0, 0x4
    bne lbl_fn_80673780_00004E64
    lbz r0, 0x10(r31)
    cmplwi r0, 0x7
    bne lbl_fn_80673780_00004E64
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_80673780_00004E6C
lbl_fn_80673780_00004E64:
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_80673780_00004E6C:
    cmpwi r0, 0x0
    bne lbl_fn_80673780_00004EFC
    bl OSDisableInterrupts
    li r0, 0x1
    stb r0, 0xd(r31)
    mr r30, r3
    addi r3, r31, 0x710
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_80670390@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_80670390@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x14
    bl fn_805EC3B0
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80673780_00004EFC
lbl_fn_80673780_00004ED8:
    lbz r0, 0x1(r4)
    stb r0, 0x709(r29)
    b lbl_fn_80673780_00004EFC
lbl_fn_80673780_00004EE4:
    lis r5, lbl_807BABB4@ha
    la r3, lbl_8087EBD8
    addi r5, r5, lbl_807BABB4@l
    li r4, 0x150b
    crclr 6
    bl OSPanic
lbl_fn_80673780_00004EFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80673A00(void)
{
    nofralloc
    cmplwi r3, 0x2
    bnelr
    lis r3, lbl_807BABC8@ha
    addi r3, r3, lbl_807BABC8@l
    crclr 6
    b OSReport
    blr
}

asm void fn_80673A20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lbz r0, 0x0(r3)
    lis r4, lbl_8082DE00@ha
    mr r28, r3
    cmpwi r0, 0x1
    addi r30, r4, lbl_8082DE00@l
    beq lbl_fn_80673A20_00004F88
    cmpwi r0, 0x2
    beq lbl_fn_80673A20_000050DC
    cmpwi r0, 0x3
    beq lbl_fn_80673A20_000050E8
    cmpwi r0, 0x4
    beq lbl_fn_80673A20_000050F4
    b lbl_fn_80673A20_00005100
lbl_fn_80673A20_00004F88:
    addi r31, r3, 0x2
    li r29, 0x0
    li r24, 0x1
    li r25, 0x3
    li r26, 0xa
    li r27, 0x6
    b lbl_fn_80673A20_000050CC
lbl_fn_80673A20_00004FA4:
    mr r3, r31
    bl fn_80672810
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_80673A20_00005084
    bl OSDisableInterrupts
    lbz r0, 0x6e9(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80673A20_00005004
    mr r5, r30
    li r23, 0x0
    li r4, 0x0
    mtctr r26
lbl_fn_80673A20_00004FD8:
    lbz r0, 0x13d(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80673A20_00004FF4
    mulli r0, r4, 0x60
    add r4, r30, r0
    addi r23, r4, 0xe4
    b lbl_fn_80673A20_0000500C
lbl_fn_80673A20_00004FF4:
    addi r5, r5, 0x60
    addi r4, r4, 0x1
    bdnz lbl_fn_80673A20_00004FD8
    b lbl_fn_80673A20_0000500C
lbl_fn_80673A20_00005004:
    lwz r4, 0x18(r30)
    lwz r23, 0x0(r4)
lbl_fn_80673A20_0000500C:
    bl OSRestoreInterrupts
    cmpwi r23, 0x0
    bne lbl_fn_80673A20_00005050
    mr r3, r30
    li r29, 0x0
    mtctr r27
    nop
lbl_fn_80673A20_00005028:
    lbz r0, 0x4fd(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80673A20_00005044
    mulli r0, r29, 0x60
    add r3, r30, r0
    addi r23, r3, 0x4a4
    b lbl_fn_80673A20_00005050
lbl_fn_80673A20_00005044:
    addi r3, r3, 0x60
    addi r29, r29, 0x1
    bdnz lbl_fn_80673A20_00005028
lbl_fn_80673A20_00005050:
    cmpwi r23, 0x0
    beq lbl_fn_80673A20_000050C4
    stb r24, 0x5c(r23)
    mr r4, r31
    addi r3, r23, 0x40
    li r5, 0x6
    stb r24, 0x59(r23)
    bl memcpy
    addi r3, r23, 0x46
    addi r4, r31, 0x6
    li r5, 0x10
    bl memcpy
    b lbl_fn_80673A20_000050C4
lbl_fn_80673A20_00005084:
    mr r4, r31
    li r5, 0x6
    addi r3, r3, 0x40
    bl memcpy
    addi r3, r23, 0x46
    addi r4, r31, 0x6
    li r5, 0x10
    bl memcpy
    lbz r0, 0x5c(r23)
    cmplwi r0, 0x2
    bne lbl_fn_80673A20_000050B4
    stb r25, 0x5c(r23)
lbl_fn_80673A20_000050B4:
    mr r4, r31
    addi r3, r30, 0x6fc
    li r5, 0x6
    bl memcpy
lbl_fn_80673A20_000050C4:
    addi r31, r31, 0x16
    addi r29, r29, 0x1
lbl_fn_80673A20_000050CC:
    lbz r0, 0x1(r28)
    cmpw r29, r0
    blt lbl_fn_80673A20_00004FA4
    b lbl_fn_80673A20_00005118
lbl_fn_80673A20_000050DC:
    li r0, 0x0
    stb r0, 0xe(r30)
    b lbl_fn_80673A20_00005118
lbl_fn_80673A20_000050E8:
    li r0, 0x0
    stb r0, 0xe(r30)
    b lbl_fn_80673A20_00005118
lbl_fn_80673A20_000050F4:
    li r0, 0x0
    stb r0, 0xe(r30)
    b lbl_fn_80673A20_00005118
lbl_fn_80673A20_00005100:
    lis r5, lbl_807BABF0@ha
    la r3, lbl_8087EBD8
    addi r5, r5, lbl_807BABF0@l
    li r4, 0x15a8
    crclr 6
    bl OSPanic
lbl_fn_80673A20_00005118:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80673C10(void)
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
    bl fn_80672810
    cmpwi r3, 0x0
    bne lbl_fn_80673C10_00005188
    lis r31, lbl_8082E658@ha
    mr r4, r29
    addi r31, r31, lbl_8082E658@l
    li r5, 0x6
    addi r3, r31, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80673C10_000051B0
    mr r3, r31
    b lbl_fn_80673C10_00005188
    b lbl_fn_80673C10_000051B0
lbl_fn_80673C10_00005188:
    cmpwi r30, 0x0
    beq lbl_fn_80673C10_0000519C
    cmpwi r30, 0x2
    beq lbl_fn_80673C10_000051A8
    b lbl_fn_80673C10_000051B0
lbl_fn_80673C10_0000519C:
    li r0, 0x8
    stb r0, 0x59(r3)
    b lbl_fn_80673C10_000051B0
lbl_fn_80673C10_000051A8:
    li r0, 0x9
    stb r0, 0x59(r3)
lbl_fn_80673C10_000051B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80673CB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    cmplwi r31, 0x10
    bge lbl_fn_80673CB0_00005204
    lis r4, lbl_8082EBC0@ha
    clrlslwi r0, r31, 24, 2
    addi r4, r4, lbl_8082EBC0@l
    lwzx r31, r4, r0
    b lbl_fn_80673CB0_00005208
lbl_fn_80673CB0_00005204:
    li r31, 0x0
lbl_fn_80673CB0_00005208:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80673D10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    clrlwi r0, r31, 24
    cmplwi r0, 0xf
    bgt lbl_fn_80673D10_00005268
    lis r4, lbl_8082FF68@ha
    clrlslwi r0, r31, 24, 1
    addi r4, r4, lbl_8082FF68@l
    lhzx r31, r4, r0
    b lbl_fn_80673D10_0000526C
lbl_fn_80673D10_00005268:
    li r31, 0x0
lbl_fn_80673D10_0000526C:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80673D70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    clrlwi r0, r31, 24
    cmplwi r0, 0xf
    bgt lbl_fn_80673D70_000052C8
    lis r4, lbl_8082FF88@ha
    clrlslwi r0, r31, 24, 1
    addi r4, r4, lbl_8082FF88@l
    lhzx r31, r4, r0
    b lbl_fn_80673D70_000052CC
lbl_fn_80673D70_000052C8:
    li r31, 0x0
lbl_fn_80673D70_000052CC:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80673DD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, lbl_8082DE00@ha
    addi r4, r4, lbl_8082DE00@l
    lbz r31, 0x6e5(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80673E10(void)
{
    nofralloc
    lis r3, lbl_8082E658@ha
    addi r3, r3, lbl_8082E658@l
    blr
}

asm void fn_80673E20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_80673E20_0000537C
    addi r0, r3, 0xa
    lis r3, lbl_8082E6B8@ha
    mulli r0, r0, 0x46
    li r4, 0x0
    addi r3, r3, lbl_8082E6B8@l
    li r5, 0x46
    add r3, r3, r0
    addi r3, r3, 0x1
    bl memset
    b lbl_fn_80673E20_0000539C
lbl_fn_80673E20_0000537C:
    addi r0, r3, 0xa
    lis r3, lbl_8082E6B8@ha
    mulli r0, r0, 0x46
    li r5, 0x6
    addi r3, r3, lbl_8082E6B8@l
    add r3, r3, r0
    addi r3, r3, 0x1
    bl memcpy
lbl_fn_80673E20_0000539C:
    li r0, 0x1
    stb r0, lbl_808802D4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80673EA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_80673EA0_000053DC
    li r3, 0x0
    b lbl_fn_80673EA0_00005404
lbl_fn_80673EA0_000053DC:
    addi r0, r3, 0xa
    lis r3, lbl_8082E6B8@ha
    mulli r0, r0, 0x46
    li r5, 0x6
    addi r3, r3, lbl_8082E6B8@l
    add r3, r3, r0
    addi r3, r3, 0x1
    bl fn_8067E23C
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_fn_80673EA0_00005404:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80673F00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_808802D4
    cmpwi r0, 0x0
    beq lbl_fn_80673F00_0000545C
    lis r3, lbl_8082E6B8@ha
    addi r3, r3, lbl_8082E6B8@l
    bl fn_80624B60
    cmpwi r3, 0x0
    beq lbl_fn_80673F00_0000545C
    li r3, 0x0
    bl fn_806242D0
    li r0, 0x0
    stb r0, lbl_808802D4
lbl_fn_80673F00_0000545C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80673F50(void)
{
    nofralloc
    lis r5, lbl_8082EBC0@ha
    clrlslwi r0, r3, 24, 2
    addi r5, r5, lbl_8082EBC0@l
    stwx r4, r5, r0
    blr
}

asm void fn_80673F70(void)
{
    nofralloc
    lis r4, lbl_8082EBC0@ha
    clrlslwi r0, r3, 24, 2
    addi r4, r4, lbl_8082EBC0@l
    lwzx r3, r4, r0
    blr
}

asm void fn_80673F90(void)
{
    nofralloc
    lis r5, lbl_8082FF68@ha
    clrlslwi r0, r3, 24, 1
    addi r5, r5, lbl_8082FF68@l
    sthx r4, r5, r0
    blr
}

asm void fn_80673FB0(void)
{
    nofralloc
    lis r5, lbl_8082FF88@ha
    clrlslwi r0, r3, 24, 1
    addi r5, r5, lbl_8082FF88@l
    sthx r4, r5, r0
    blr
}

asm void fn_80673FD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8082DE00@ha
    addi r31, r31, lbl_8082DE00@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    beq lbl_fn_80673FD0_00005540
    cmpwi r3, 0x2
    beq lbl_fn_80673FD0_00005550
    cmpwi r3, 0x3
    beq lbl_fn_80673FD0_00005770
    cmpwi r3, 0xb
    beq lbl_fn_80673FD0_00005834
    cmpwi r3, 0xf
    beq lbl_fn_80673FD0_0000586C
    b lbl_fn_80673FD0_000058E4
lbl_fn_80673FD0_00005540:
    lwz r0, 0x740(r31)
    ori r0, r0, 0x1
    stw r0, 0x740(r31)
    b lbl_fn_80673FD0_000058E4
lbl_fn_80673FD0_00005550:
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80673FD0_00005698
    bl fn_80673E10
    mr r29, r3
    mr r4, r30
    li r5, 0x6
    addi r3, r3, 0x40
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80673FD0_00005588
    mr r3, r30
    bl fn_80672810
    mr r29, r3
lbl_fn_80673FD0_00005588:
    lbz r0, 0x59(r29)
    cmpwi r0, 0xc
    beq lbl_fn_80673FD0_000055A0
    cmpwi r0, 0x2
    beq lbl_fn_80673FD0_000055AC
    b lbl_fn_80673FD0_000055B4
lbl_fn_80673FD0_000055A0:
    li r0, 0x12
    stb r0, 0xc(r31)
    b lbl_fn_80673FD0_000055B4
lbl_fn_80673FD0_000055AC:
    li r0, 0x17
    stb r0, 0xc(r31)
lbl_fn_80673FD0_000055B4:
    li r0, 0x8
    stb r0, 0x59(r29)
    mr r3, r30
    lbz r0, 0x7(r30)
    stb r0, 0x56(r29)
    lbz r4, 0x6e4(r31)
    addi r0, r4, 0x1
    stb r0, 0x6e4(r31)
    bl fn_80672810
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80673FD0_000055EC
    bl fn_80673E10
    mr r29, r3
lbl_fn_80673FD0_000055EC:
    lbz r3, 0x7(r30)
    addi r4, r29, 0x40
    bl fn_80673F50
    lbz r3, 0x7(r30)
    li r4, 0x0
    bl fn_80673F90
    lbz r3, 0x7(r30)
    li r4, 0x0
    bl fn_80673FB0
    lbz r0, 0x5b(r29)
    cmplwi r0, 0x3
    beq lbl_fn_80673FD0_00005624
    cmplwi r0, 0x1
    bne lbl_fn_80673FD0_00005630
lbl_fn_80673FD0_00005624:
    mr r3, r29
    bl fn_806728F0
    b lbl_fn_80673FD0_0000566C
lbl_fn_80673FD0_00005630:
    bl fn_8066E8F0
    cmpwi r3, 0x0
    beq lbl_fn_80673FD0_00005664
    bl fn_8066E8F0
    cmpwi r3, 0x0
    beq lbl_fn_80673FD0_0000566C
    lis r4, lbl_807BAC00@ha
    mr r3, r29
    addi r4, r4, lbl_807BAC00@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80673FD0_0000566C
lbl_fn_80673FD0_00005664:
    mr r3, r29
    bl fn_80672CA0
lbl_fn_80673FD0_0000566C:
    addi r3, r29, 0x40
    li r4, 0x8
    bl fn_80671AB0
    lwz r12, 0x6f0(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80673FD0_000058E4
    mr r3, r29
    li r4, 0x1
    mtctr r12
    bctrl
    b lbl_fn_80673FD0_000058E4
lbl_fn_80673FD0_00005698:
    lbz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80673FD0_0000570C
    bl fn_80673E10
    mr r29, r3
    mr r3, r30
    addi r4, r29, 0x40
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80673FD0_000058E4
    lbz r0, 0x59(r29)
    cmplwi r0, 0x2
    bne lbl_fn_80673FD0_000058E4
    mr r3, r30
    bl fn_80672810
    cmpwi r3, 0x0
    beq lbl_fn_80673FD0_00005700
    lbz r0, 0x6(r30)
    cmplwi r0, 0xc
    bne lbl_fn_80673FD0_00005700
    mr r3, r30
    bl fn_80672700
    lbz r3, 0x6e5(r31)
    subi r0, r3, 0x1
    stb r0, 0x6e5(r31)
lbl_fn_80673FD0_00005700:
    li r0, 0xff
    stb r0, 0xc(r31)
    b lbl_fn_80673FD0_000058E4
lbl_fn_80673FD0_0000570C:
    mr r3, r30
    bl fn_80672810
    cmpwi r3, 0x0
    beq lbl_fn_80673FD0_000058E4
    lbz r0, 0x6(r30)
    cmplwi r0, 0xc
    bne lbl_fn_80673FD0_000058E4
    mr r3, r30
    bl fn_80672810
    cmpwi r3, 0x0
    beq lbl_fn_80673FD0_00005758
    lbz r0, 0x5b(r3)
    cmplwi r0, 0x3
    beq lbl_fn_80673FD0_0000574C
    cmplwi r0, 0x1
    bne lbl_fn_80673FD0_00005754
lbl_fn_80673FD0_0000574C:
    bl fn_80672A10
    b lbl_fn_80673FD0_00005758
lbl_fn_80673FD0_00005754:
    bl fn_80672DC0
lbl_fn_80673FD0_00005758:
    mr r3, r30
    bl fn_80672700
    lbz r3, 0x6e5(r31)
    subi r0, r3, 0x1
    stb r0, 0x6e5(r31)
    b lbl_fn_80673FD0_000058E4
lbl_fn_80673FD0_00005770:
    lbz r3, 0x6e4(r31)
    subi r0, r3, 0x1
    stb r0, 0x6e4(r31)
    lbz r3, 0x1(r4)
    bl fn_80673F70
    bl fn_80672810
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80673FD0_000057F0
    lbz r0, 0x5b(r3)
    cmplwi r0, 0x3
    beq lbl_fn_80673FD0_000057A8
    cmplwi r0, 0x1
    bne lbl_fn_80673FD0_000057B4
lbl_fn_80673FD0_000057A8:
    mr r3, r29
    bl fn_80672B30
    b lbl_fn_80673FD0_000057F0
lbl_fn_80673FD0_000057B4:
    bl fn_8066E8F0
    cmpwi r3, 0x0
    beq lbl_fn_80673FD0_000057E8
    bl fn_8066E8F0
    cmpwi r3, 0x0
    beq lbl_fn_80673FD0_000057F0
    lis r4, lbl_807BAC00@ha
    mr r3, r29
    addi r4, r4, lbl_807BAC00@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80673FD0_000057F0
lbl_fn_80673FD0_000057E8:
    mr r3, r29
    bl fn_80672EE0
lbl_fn_80673FD0_000057F0:
    lbz r3, 0x1(r30)
    li r4, 0x0
    bl fn_80673F50
    lbz r3, 0x1(r30)
    li r4, 0x0
    bl fn_80673F90
    lbz r3, 0x1(r30)
    li r4, 0x0
    bl fn_80673FB0
    lwz r12, 0x6f0(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80673FD0_000058E4
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80673FD0_000058E4
lbl_fn_80673FD0_00005834:
    mr r3, r30
    bl fn_80672810
    lbz r0, 0x7(r30)
    addi r4, r3, 0x40
    stb r0, 0x56(r3)
    lbz r3, 0x7(r30)
    bl fn_80673F50
    lbz r3, 0x7(r30)
    li r4, 0x0
    bl fn_80673F90
    lbz r3, 0x7(r30)
    li r4, 0x0
    bl fn_80673FB0
    b lbl_fn_80673FD0_000058E4
lbl_fn_80673FD0_0000586C:
    lhz r0, 0x0(r4)
    sth r0, 0x744(r31)
    lbz r3, 0x6e5(r31)
    lhz r0, 0x2(r4)
    sth r0, 0x746(r31)
    lhz r0, 0x4(r4)
    cmpw r3, r0
    bge lbl_fn_80673FD0_000058A4
    lis r3, lbl_807BAC14@ha
    addi r3, r3, lbl_807BAC14@l
    crclr 6
    bl OSReport
    lhz r0, 0x4(r30)
    stb r0, 0x6e5(r31)
lbl_fn_80673FD0_000058A4:
    mr r29, r30
    li r31, 0x0
    b lbl_fn_80673FD0_000058D8
lbl_fn_80673FD0_000058B0:
    lbz r3, 0x6(r29)
    cmplwi r3, 0x10
    bge lbl_fn_80673FD0_000058D0
    lhz r4, 0x8(r29)
    bl fn_80673F90
    lbz r3, 0x6(r29)
    lhz r4, 0xa(r29)
    bl fn_80673FB0
lbl_fn_80673FD0_000058D0:
    addi r29, r29, 0x6
    addi r31, r31, 0x1
lbl_fn_80673FD0_000058D8:
    lhz r0, 0x4(r30)
    cmpw r31, r0
    blt lbl_fn_80673FD0_000058B0
lbl_fn_80673FD0_000058E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806743E0(void)
{
    nofralloc
    cmplwi r8, 0x3
    lis r6, lbl_8082DE00@ha
    addi r6, r6, lbl_8082DE00@l
    bnelr
    lwz r12, 0x6ec(r6)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

asm void fn_80674410(void)
{
    nofralloc
    blr
}

asm void fn_80674420(void)
{
    nofralloc
    blr
}

asm void fn_80674430(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80674438(void)
{
    nofralloc
    lwz r12, lbl_808802D8
    li r0, 0x1
    stb r0, lbl_808802E0
    cmpwi r12, 0x0
    beqlr
    li r3, 0x0
    mtctr r12
    bctr
    blr
}

asm void fn_8067445C(void)
{
    nofralloc
    li r0, 0x1000
    lis r5, 0xcc00
    stw r0, 0x3000(r5)
    lwz r12, lbl_808802DC
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

asm void fn_80674480(void)
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
    bl OSDisableInterrupts
    la r0, lbl_808802E0
    mr r31, r3
    stw r0, 0x0(r29)
    stw r30, lbl_808802D8
    bl fn_80674A54
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

asm void fn_806744DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0x2
    stw r0, 0x14(r1)
    addi r3, r3, -0x8000
    bl __OSMaskInterrupts
    li r3, 0x40
    bl __OSMaskInterrupts
    lis r3, fn_80674438@ha
    lis r4, fn_8067445C@ha
    addi r3, r3, fn_80674438@l
    stw r3, lbl_808802DC
    addi r4, r4, fn_8067445C@l
    li r3, 0x19
    bl __OSSetInterruptHandler
    li r3, 0x40
    bl __OSUnmaskInterrupts
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80674530(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_808802E8
    stb r3, lbl_808802E0
    cmpwi r0, 0x0
    bne lbl_fn_80674530_00005ADC
    bl OSDisableInterrupts
    mr r31, r3
    addi r4, r1, 0x8
    lis r3, 0x3400
    li r5, 0x1
    bl fn_80674B10
    lbz r0, 0x8(r1)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_fn_80674530_00005AD4
    lis r3, 0x3400
    addi r4, r1, 0xc
    addi r3, r3, 0x200
    li r5, 0x4
    bl fn_80674B10
    lwz r4, 0xc(r1)
    rlwinm r3, r4, 0, 3, 7
    subis r0, r3, 0x1f00
    cmplwi r0, 0x0
    bne lbl_fn_80674530_00005AD4
    clrlwi r3, r4, 19
    li r0, 0x1
    stw r4, lbl_808802E4
    stw r3, lbl_808802E8
    stb r0, lbl_808802E0
lbl_fn_80674530_00005AD4:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_80674530_00005ADC:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_808802E8
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806745D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r5, lbl_808802E4
    addi r0, r31, 0x3
    mr r31, r3
    mr r4, r30
    extrwi r3, r5, 1, 15
    clrrwi r5, r0, 2
    neg r0, r3
    rlwinm r3, r0, 0, 20, 20
    addis r3, r3, 0xd1
    addi r0, r3, 0x1000
    rlwinm r3, r0, 6, 2, 23
    bl fn_80674D38
    li r0, 0x0
    mr r3, r31
    stw r0, lbl_808802E8
    stb r0, lbl_808802E0
    bl OSRestoreInterrupts
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80674654(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    bl OSDisableInterrupts
    mr r31, r3
lbl_fn_80674654_00005B98:
    addi r4, r1, 0xa
    lis r3, 0x3400
    li r5, 0x1
    bl fn_80674B10
    lbz r0, 0xa(r1)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_fn_80674654_00005B98
    lbz r3, lbl_8087EBE0
    addi r0, r28, 0x3
    clrrwi r29, r0, 2
    addi r3, r3, 0x1
    clrlwi r0, r3, 31
    stb r3, lbl_8087EBE0
    neg r0, r0
    rlwinm r3, r0, 0, 20, 20
    addis r0, r3, 0xd1
    rlwinm r0, r0, 6, 2, 23
    oris r30, r0, 0x8000
lbl_fn_80674654_00005BE0:
    mr r3, r30
    mr r4, r27
    mr r5, r29
    bl fn_80674E18
    cmpwi r3, 0x0
    beq lbl_fn_80674654_00005BE0
lbl_fn_80674654_00005BF8:
    addi r4, r1, 0x9
    lis r3, 0x3400
    li r5, 0x1
    bl fn_80674B10
    lbz r0, 0x9(r1)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_fn_80674654_00005BF8
    lbz r3, lbl_8087EBE0
    clrlwi r0, r28, 19
    oris r29, r0, 0x1f00
    lis r30, 0xb400
    rlwimi r29, r3, 16, 8, 15
lbl_fn_80674654_00005C28:
    stw r29, 0xc(r1)
    addi r3, r30, 0x100
    addi r4, r1, 0xc
    li r5, 0x4
    bl fn_80674C34
    cmpwi r3, 0x0
    beq lbl_fn_80674654_00005C28
lbl_fn_80674654_00005C44:
    addi r4, r1, 0x8
    lis r3, 0x3400
    li r5, 0x1
    bl fn_80674B10
    lbz r0, 0x8(r1)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_fn_80674654_00005C44
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    li r3, 0x0
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80674764(void)
{
    nofralloc
    blr
}

asm void fn_80674768(void)
{
    nofralloc
    blr
}

asm void fn_8067476C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r5, 0x0
    beq lbl_fn_8067476C_00005E00
    cmpwi cr1, r4, 0x0
    li r0, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_8067476C_00005DF8
    cmpwi r4, 0x8
    subi r9, r4, 0x8
    ble lbl_fn_8067476C_00005DC4
    li r8, 0x0
    blt cr1, lbl_fn_8067476C_00005CE0
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r4, r6
    bgt lbl_fn_8067476C_00005CE0
    li r8, 0x1
lbl_fn_8067476C_00005CE0:
    cmpwi r8, 0x0
    beq lbl_fn_8067476C_00005DC4
    addi r8, r9, 0x7
    mr r6, r3
    srwi r8, r8, 3
    mtctr r8
    cmpwi r9, 0x0
    ble lbl_fn_8067476C_00005DC4
lbl_fn_8067476C_00005D00:
    subfic r9, r7, 0x3
    addi r8, r7, 0x1
    subfic r28, r8, 0x3
    lbz r10, 0x0(r6)
    addi r8, r7, 0x2
    lbz r27, 0x1(r6)
    subfic r29, r8, 0x3
    slwi r28, r28, 3
    slwi r8, r9, 3
    neg r12, r7
    slw r26, r10, r8
    slwi r30, r29, 3
    lbz r31, 0x2(r6)
    addi r8, r7, 0x4
    subfic r11, r8, 0x3
    or r0, r0, r26
    slw r28, r27, r28
    addi r8, r7, 0x5
    slw r31, r31, r30
    lbz r29, 0x3(r6)
    slwi r12, r12, 3
    or r0, r0, r28
    subfic r10, r8, 0x3
    addi r8, r7, 0x6
    slw r29, r29, r12
    or r0, r0, r31
    subfic r9, r8, 0x3
    addi r8, r7, 0x7
    slwi r12, r10, 3
    lbz r31, 0x5(r6)
    subfic r8, r8, 0x3
    slwi r10, r9, 3
    lbz r30, 0x4(r6)
    slwi r11, r11, 3
    or r0, r0, r29
    lbz r9, 0x7(r6)
    slw r30, r30, r11
    lbz r11, 0x6(r6)
    slwi r8, r8, 3
    slw r12, r31, r12
    or r0, r0, r30
    slw r10, r11, r10
    or r0, r0, r12
    slw r8, r9, r8
    or r0, r0, r10
    addi r7, r7, 0x8
    or r0, r0, r8
    addi r6, r6, 0x8
    bdnz lbl_fn_8067476C_00005D00
lbl_fn_8067476C_00005DC4:
    subf r6, r7, r4
    add r9, r3, r7
    mtctr r6
    cmpw r7, r4
    bge lbl_fn_8067476C_00005DF8
lbl_fn_8067476C_00005DD8:
    subfic r6, r7, 0x3
    lbz r8, 0x0(r9)
    slwi r6, r6, 3
    addi r9, r9, 0x1
    slw r6, r8, r6
    addi r7, r7, 0x1
    or r0, r0, r6
    bdnz lbl_fn_8067476C_00005DD8
lbl_fn_8067476C_00005DF8:
    lis r6, 0xcd00
    stw r0, 0x6838(r6)
lbl_fn_8067476C_00005E00:
    slwi r6, r5, 2
    subi r0, r4, 0x1
    ori r7, r6, 0x1
    slwi r0, r0, 4
    lis r6, 0xcd00
    or r0, r7, r0
    stw r0, 0x6834(r6)
lbl_fn_8067476C_00005E1C:
    lwz r0, 0x6834(r6)
    clrlwi. r0, r0, 31
    bne lbl_fn_8067476C_00005E1C
    cmpwi r5, 0x0
    bne lbl_fn_8067476C_00005F58
    lis r5, 0xcd00
    cmpwi cr1, r4, 0x0
    lwz r0, 0x6838(r5)
    li r5, 0x0
    ble cr1, lbl_fn_8067476C_00005F58
    cmpwi r4, 0x8
    subi r7, r4, 0x8
    ble lbl_fn_8067476C_00005F2C
    li r8, 0x0
    blt cr1, lbl_fn_8067476C_00005E6C
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r4, r6
    bgt lbl_fn_8067476C_00005E6C
    li r8, 0x1
lbl_fn_8067476C_00005E6C:
    cmpwi r8, 0x0
    beq lbl_fn_8067476C_00005F2C
    addi r6, r7, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r7, 0x0
    ble lbl_fn_8067476C_00005F2C
lbl_fn_8067476C_00005E88:
    subfic r6, r5, 0x3
    addi r7, r5, 0x1
    slwi r8, r6, 3
    srw r9, r0, r8
    subfic r7, r7, 0x3
    slwi r8, r7, 3
    stb r9, 0x0(r3)
    addi r7, r5, 0x2
    neg r6, r5
    srw r9, r0, r8
    slwi r8, r6, 3
    subfic r7, r7, 0x3
    slwi r6, r7, 3
    stb r9, 0x1(r3)
    srw r9, r0, r6
    srw r8, r0, r8
    addi r6, r5, 0x4
    stb r9, 0x2(r3)
    subfic r7, r6, 0x3
    addi r6, r5, 0x5
    stb r8, 0x3(r3)
    slwi r7, r7, 3
    srw r9, r0, r7
    subfic r6, r6, 0x3
    slwi r8, r6, 3
    stb r9, 0x4(r3)
    addi r6, r5, 0x6
    subfic r7, r6, 0x3
    srw r8, r0, r8
    addi r6, r5, 0x7
    stb r8, 0x5(r3)
    slwi r7, r7, 3
    addi r5, r5, 0x8
    subfic r6, r6, 0x3
    srw r7, r0, r7
    slwi r6, r6, 3
    stb r7, 0x6(r3)
    srw r6, r0, r6
    stb r6, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_8067476C_00005E88
lbl_fn_8067476C_00005F2C:
    subf r6, r5, r4
    mtctr r6
    cmpw r5, r4
    bge lbl_fn_8067476C_00005F58
lbl_fn_8067476C_00005F3C:
    subfic r4, r5, 0x3
    addi r5, r5, 0x1
    slwi r4, r4, 3
    srw r4, r0, r4
    stb r4, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_fn_8067476C_00005F3C
lbl_fn_8067476C_00005F58:
    addi r11, r1, 0x20
    li r3, 0x1
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80674A54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x2
    stw r0, 0x24(r1)
    addi r3, r3, -0x8000
    stw r31, 0x1c(r1)
    bl __OSMaskInterrupts
    lis r3, 0xcd00
lbl_fn_80674A54_00005F94:
    lwz r0, 0x6834(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80674A54_00005F94
    lis r31, 0xcd00
    li r0, 0x0
    stw r0, 0x6828(r31)
    lis r3, 0xb400
    lis r0, 0xd400
    li r4, 0x4
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r5, 0x1
    stw r0, 0x8(r1)
    lwz r0, 0x6828(r31)
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r31)
    bl fn_8067476C
lbl_fn_80674A54_00005FE0:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674A54_00005FE0
    addi r3, r1, 0x8
    li r4, 0x4
    li r5, 0x1
    bl fn_8067476C
    lis r3, 0xcd00
lbl_fn_80674A54_00006000:
    lwz r0, 0x6834(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674A54_00006000
    lis r3, 0xcd00
    lwz r0, 0x6828(r3)
    andi. r0, r0, 0x405
    stw r0, 0x6828(r3)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80674B10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x1
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x4
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lis r28, 0xcd00
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    stw r6, 0xc(r1)
    lwz r0, 0x6828(r28)
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r28)
    bl fn_8067476C
    cntlzw r0, r3
    srwi r29, r0, 5
lbl_fn_80674B10_0000608C:
    lwz r0, 0x6834(r28)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674B10_0000608C
    addi r3, r1, 0xc
    li r4, 0x4
    li r5, 0x0
    bl fn_8067476C
    cntlzw r0, r3
    lis r3, 0xcd00
    srwi r0, r0, 5
    or r6, r29, r0
lbl_fn_80674B10_000060B8:
    lwz r0, 0x6834(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674B10_000060B8
    lis r3, 0xcd00
    cmpwi cr1, r31, 0x2
    lwz r0, 0x6828(r3)
    andi. r0, r0, 0x405
    stw r0, 0x6828(r3)
    beq cr1, lbl_fn_80674B10_000060FC
    bge cr1, lbl_fn_80674B10_00006110
    cmpwi r31, 0x1
    bge lbl_fn_80674B10_000060EC
    b lbl_fn_80674B10_00006110
lbl_fn_80674B10_000060EC:
    lwz r0, 0xc(r1)
    srwi r0, r0, 24
    stb r0, 0x0(r30)
    b lbl_fn_80674B10_0000612C
lbl_fn_80674B10_000060FC:
    lwz r3, 0xc(r1)
    rlwinm r0, r3, 24, 16, 23
    rlwimi r0, r3, 8, 24, 31
    sth r0, 0x0(r30)
    b lbl_fn_80674B10_0000612C
lbl_fn_80674B10_00006110:
    lwz r4, 0xc(r1)
    rlwinm r3, r4, 8, 8, 15
    rlwinm r0, r4, 24, 16, 23
    rlwimi r3, r4, 24, 0, 7
    rlwimi r0, r4, 8, 24, 31
    or r0, r3, r0
    stw r0, 0x0(r30)
lbl_fn_80674B10_0000612C:
    cntlzw r0, r6
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    srwi r3, r0, 5
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80674C34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r3, 0x8(r1)
    beq lbl_fn_80674C34_00006194
    bge lbl_fn_80674C34_000061A8
    cmpwi r5, 0x1
    bge lbl_fn_80674C34_00006184
    b lbl_fn_80674C34_000061A8
lbl_fn_80674C34_00006184:
    lbz r0, 0x0(r4)
    slwi r0, r0, 24
    stw r0, 0xc(r1)
    b lbl_fn_80674C34_000061C4
lbl_fn_80674C34_00006194:
    lhz r3, 0x0(r4)
    rlwinm r0, r3, 8, 8, 15
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0xc(r1)
    b lbl_fn_80674C34_000061C4
lbl_fn_80674C34_000061A8:
    lwz r4, 0x0(r4)
    rlwinm r3, r4, 8, 8, 15
    rlwinm r0, r4, 24, 16, 23
    rlwimi r3, r4, 24, 0, 7
    rlwimi r0, r4, 8, 24, 31
    or r0, r3, r0
    stw r0, 0xc(r1)
lbl_fn_80674C34_000061C4:
    lis r30, 0xcd00
    addi r3, r1, 0x8
    lwz r0, 0x6828(r30)
    li r4, 0x4
    li r5, 0x1
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r30)
    bl fn_8067476C
    cntlzw r0, r3
    srwi r31, r0, 5
lbl_fn_80674C34_000061F0:
    lwz r0, 0x6834(r30)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674C34_000061F0
    addi r3, r1, 0xc
    li r4, 0x4
    li r5, 0x1
    bl fn_8067476C
    cntlzw r0, r3
    lis r3, 0xcd00
    srwi r0, r0, 5
    or r5, r31, r0
lbl_fn_80674C34_0000621C:
    lwz r0, 0x6834(r3)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674C34_0000621C
    lis r4, 0xcd00
    cntlzw r0, r5
    lwz r5, 0x6828(r4)
    srwi r3, r0, 5
    andi. r0, r5, 0x405
    stw r0, 0x6828(r4)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80674D38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, 0xcd00
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x4
    stw r28, 0x10(r1)
    mr r28, r5
    li r5, 0x1
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    lwz r0, 0x6828(r31)
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r31)
    bl fn_8067476C
    cntlzw r0, r3
    srwi r30, r0, 5
lbl_fn_80674D38_000062AC:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674D38_000062AC
    lis r31, 0xcd00
    b lbl_fn_80674D38_000062F8
lbl_fn_80674D38_000062C0:
    addi r3, r1, 0xc
    li r4, 0x4
    li r5, 0x0
    bl fn_8067476C
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
lbl_fn_80674D38_000062DC:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674D38_000062DC
    lwz r0, 0xc(r1)
    subi r28, r28, 0x4
    stw r0, 0x0(r29)
    addi r29, r29, 0x4
lbl_fn_80674D38_000062F8:
    cmpwi r28, 0x0
    bgt lbl_fn_80674D38_000062C0
    lis r4, 0xcd00
    cntlzw r0, r30
    lwz r5, 0x6828(r4)
    srwi r3, r0, 5
    andi. r0, r5, 0x405
    stw r0, 0x6828(r4)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80674E18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, 0xcd00
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x4
    stw r28, 0x10(r1)
    mr r28, r5
    li r5, 0x1
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    lwz r0, 0x6828(r31)
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r31)
    bl fn_8067476C
    cntlzw r0, r3
    srwi r30, r0, 5
lbl_fn_80674E18_0000638C:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674E18_0000638C
    lis r31, 0xcd00
    b lbl_fn_80674E18_000063D8
lbl_fn_80674E18_000063A0:
    lwz r0, 0x0(r29)
    addi r3, r1, 0xc
    li r4, 0x4
    li r5, 0x1
    stw r0, 0xc(r1)
    addi r29, r29, 0x4
    bl fn_8067476C
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
lbl_fn_80674E18_000063C8:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_80674E18_000063C8
    subi r28, r28, 0x4
lbl_fn_80674E18_000063D8:
    cmpwi r28, 0x0
    bgt lbl_fn_80674E18_000063A0
    lis r4, 0xcd00
    cntlzw r0, r30
    lwz r5, 0x6828(r4)
    srwi r3, r0, 5
    andi. r0, r5, 0x405
    stw r0, 0x6828(r4)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80674EF8(void)
{
    nofralloc
    twi 31, r0, 0
    blr
}

asm void fn_80674F00(void)
{
    nofralloc
    twi 31, r0, 0
    blr
}

asm void fn_80674F08(void)
{
    nofralloc
    twi 31, r0, 0
    blr
}

asm void fn_80674F10(void)
{
    nofralloc
    twi 31, r0, 0
    blr
}
