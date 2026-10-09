#include "revolution/types.h"

/* External function declarations */
extern void ESP_CloseLib(void);
extern void ESP_GetDataDir(void);
extern void ESP_GetTitleId(void);
extern void ESP_InitLib(void);
extern void ISFS_OpenLib(void);
extern void NANDLoggingAddMessageAsync(void);
extern void NANDSetAutoErrorMessaging(void);
extern void OSDisableInterrupts(void);
extern void OSGetTime(void);
extern void OSRegisterShutdownFunction(void);
extern void OSRegisterVersion(void);
extern void OSReport(const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void __NANDPrintErrorMessage(void);
extern void __div2i(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8061AA80(void);
extern void fn_8061ABE0(void);
extern void fn_8061B3A0(void);
extern void fn_8061BC10(void);
extern void fn_80620EF0(void);
extern void fn_80620FD0(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80686A80(void);
extern void fn_80686AF0(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80764848[];
extern u8 lbl_807B0FC0[];
extern u8 lbl_807B1070[];
extern u8 lbl_807B107C[];
extern u8 lbl_807B1190[];
extern u8 lbl_807B11BC[];
extern u8 lbl_807B11D4[];
extern u8 s_currentDir_807B1020[];
extern u8 s_homeDir_807EB280[];

/* Small data declarations */
extern u32 __NANDVersion;
extern u32 lbl_8087E8FC;
static const char lbl_8087E900[] = "";
extern u32 lbl_8087E904;
extern u32 lbl_8087E908;
extern u32 lbl_8087E90C;
extern u32 lbl_8087E910;
extern u32 lbl_8087E918;
extern u32 lbl_8087E91C;
extern u32 s_libState_80880120;

/* Function declarations */
void nandConvertPath(void);
void fn_80621290(void);
void nandIsPrivatePath(void);
void fn_806212F0(void);
void nandIsInitialized(void);
void nandLoggingCallback(void);
void nandConvertErrorCode(void);
void nandGenerateAbsPath(void);
void fn_80621610(void);
void NANDInit(void);
void fn_80621800(void);
void fn_806218D0(void);
void fn_806218E0(void);
void fn_80621B80(void);
void fn_80621BD0(void);
void fn_80621C50(void);
void fn_80621CD0(void);
void fn_80621D30(void);
void fn_80621D70(void);
void fn_80622050(void);
void fn_806220A0(void);
void fn_806220F0(void);
void fn_80622170(void);
void fn_80622180(void);
void fn_80622260(void);
void fn_80622310(void);

asm void nandConvertPath(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r5
    stw r30, 0x218(r1)
    mr r30, r4
    stw r29, 0x214(r1)
    mr r29, r3
    mr r3, r31
    bl strlen
    cmpwi r3, 0x0
    bne lbl_nandConvertPath_00000044
    mr r3, r29
    mr r4, r30
    bl strcpy
    b lbl_nandConvertPath_00000120
lbl_nandConvertPath_00000044:
    mr r5, r31
    addi r3, r1, 0x188
    addi r4, r1, 0x108
    bl fn_80620FD0
    addi r3, r1, 0x188
    la r4, lbl_8087E904
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_nandConvertPath_0000007C
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x108
    bl nandConvertPath
    b lbl_nandConvertPath_00000120
lbl_nandConvertPath_0000007C:
    addi r3, r1, 0x188
    la r4, lbl_8087E908
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_nandConvertPath_000000B0
    mr r4, r30
    addi r3, r1, 0x88
    bl fn_80620EF0
    mr r3, r29
    addi r4, r1, 0x88
    addi r5, r1, 0x108
    bl nandConvertPath
    b lbl_nandConvertPath_00000120
lbl_nandConvertPath_000000B0:
    lbz r0, 0x188(r1)
    extsb. r0, r0
    beq lbl_nandConvertPath_00000114
    mr r3, r30
    la r4, lbl_8087E8FC
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_nandConvertPath_000000E8
    addi r3, r1, 0x8
    addi r5, r1, 0x188
    la r4, lbl_8087E90C
    crclr 6
    bl sprintf
    b lbl_nandConvertPath_00000100
lbl_nandConvertPath_000000E8:
    mr r5, r30
    addi r3, r1, 0x8
    addi r6, r1, 0x188
    la r4, lbl_8087E910
    crclr 6
    bl sprintf
lbl_nandConvertPath_00000100:
    mr r3, r29
    addi r4, r1, 0x8
    addi r5, r1, 0x108
    bl nandConvertPath
    b lbl_nandConvertPath_00000120
lbl_nandConvertPath_00000114:
    mr r3, r29
    mr r4, r30
    bl strcpy
lbl_nandConvertPath_00000120:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80621290(void)
{
    nofralloc
    lbz r0, 0x0(r3)
    extsb r4, r0
    subfic r3, r4, 0x2f
    subi r0, r4, 0x2f
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void nandIsPrivatePath(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807B1070@ha
    li r5, 0x8
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807B1070@l
    bl fn_80682544
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806212F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807B107C@ha
    li r5, 0x9
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807B107C@l
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806212F0_000001E0
    lbz r0, 0x9(r31)
    extsb. r0, r0
    beq lbl_fn_806212F0_000001E0
    li r3, 0x1
    b lbl_fn_806212F0_000001E4
lbl_fn_806212F0_000001E0:
    li r3, 0x0
lbl_fn_806212F0_000001E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void nandIsInitialized(void)
{
    nofralloc
    lwz r3, s_libState_80880120
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void nandLoggingCallback(void)
{
    nofralloc
    cmpwi r4, -0x75
    beq lbl_nandLoggingCallback_00000230
    cmpwi r4, -0x9
    bnelr
lbl_nandLoggingCallback_00000230:
    mr r3, r4
    b __NANDPrintErrorMessage
    blr
}

asm void nandConvertErrorCode(void)
{
    nofralloc
    clrlwi r11, r1, 26
    mr r12, r1
    subfic r11, r11, -0x300
    stwux r1, r1, r11
    mflr r0
    lis r4, lbl_80764848@ha
    stw r0, 0x4(r12)
    addi r4, r4, lbl_80764848@l
    li r0, 0x29
    addi r6, r1, 0x13c
    stw r31, -0x4(r12)
    lis r31, lbl_807B0FC0@ha
    addi r31, r31, lbl_807B0FC0@l
    subi r5, r4, 0x4
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    mr r29, r3
    mtctr r0
lbl_nandConvertErrorCode_00000288:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_nandConvertErrorCode_00000288
    cmpwi r3, 0x0
    li r30, 0x0
    li r4, 0x0
    blt lbl_nandConvertErrorCode_000002B4
    mr r3, r29
    b lbl_nandConvertErrorCode_000003D0
lbl_nandConvertErrorCode_000002B4:
    li r0, 0x29
    addi r5, r1, 0x140
    mtctr r0
lbl_nandConvertErrorCode_000002C0:
    lwzx r0, r5, r4
    cmpw r3, r0
    bne lbl_nandConvertErrorCode_00000378
    cmpwi r3, -0x72
    beq lbl_nandConvertErrorCode_000002F4
    cmpwi r3, -0x74
    beq lbl_nandConvertErrorCode_000002F4
    cmpwi r3, -0x75
    beq lbl_nandConvertErrorCode_000002F4
    cmpwi r3, -0x9
    beq lbl_nandConvertErrorCode_000002F4
    cmpwi r3, -0xc
    bne lbl_nandConvertErrorCode_00000320
lbl_nandConvertErrorCode_000002F4:
    mr r5, r29
    addi r3, r1, 0xc0
    addi r4, r31, 0xc8
    crclr 6
    bl sprintf
    lis r3, nandLoggingCallback@ha
    mr r4, r29
    addi r3, r3, nandLoggingCallback@l
    addi r5, r1, 0xc0
    crclr 6
    bl NANDLoggingAddMessageAsync
lbl_nandConvertErrorCode_00000320:
    cmpwi r29, -0x17
    bge lbl_nandConvertErrorCode_0000032C
    cmpwi r29, -0x64
lbl_nandConvertErrorCode_0000032C:
    cmpwi r29, -0x6c
    beq lbl_nandConvertErrorCode_0000035C
    cmpwi r29, -0x6b
    beq lbl_nandConvertErrorCode_0000035C
    cmpwi r29, -0x67
    beq lbl_nandConvertErrorCode_0000035C
    cmpwi r29, -0x76
    beq lbl_nandConvertErrorCode_0000035C
    cmpwi r29, -0x8
    beq lbl_nandConvertErrorCode_0000035C
    cmpwi r29, -0x16
    bne lbl_nandConvertErrorCode_00000364
lbl_nandConvertErrorCode_0000035C:
    mr r3, r29
    bl __NANDPrintErrorMessage
lbl_nandConvertErrorCode_00000364:
    addi r0, r30, 0x1
    addi r3, r1, 0x140
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_nandConvertErrorCode_000003D0
lbl_nandConvertErrorCode_00000378:
    addi r30, r30, 0x2
    addi r4, r4, 0x8
    bdnz lbl_nandConvertErrorCode_000002C0
    mr r4, r29
    addi r3, r31, 0xdc
    crclr 6
    bl OSReport
    mr r5, r29
    addi r3, r1, 0x40
    addi r4, r31, 0x110
    crclr 6
    bl sprintf
    lis r3, nandLoggingCallback@ha
    mr r4, r29
    addi r3, r3, nandLoggingCallback@l
    addi r5, r1, 0x40
    crclr 6
    bl NANDLoggingAddMessageAsync
    cmpwi r29, -0x17
    bge lbl_nandConvertErrorCode_000003CC
    cmpwi r29, -0x64
lbl_nandConvertErrorCode_000003CC:
    li r3, -0x40
lbl_nandConvertErrorCode_000003D0:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void nandGenerateAbsPath(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl strlen
    cmpwi r3, 0x0
    bne lbl_nandGenerateAbsPath_0000042C
    mr r3, r30
    la r4, lbl_8087E900
    bl strcpy
    b lbl_nandGenerateAbsPath_000004A0
lbl_nandGenerateAbsPath_0000042C:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x2f
    bne lbl_nandGenerateAbsPath_00000440
    li r0, 0x0
    b lbl_nandGenerateAbsPath_00000444
lbl_nandGenerateAbsPath_00000440:
    li r0, 0x1
lbl_nandGenerateAbsPath_00000444:
    cmpwi r0, 0x0
    beq lbl_nandGenerateAbsPath_00000464
    lis r4, s_currentDir_807B1020@ha
    mr r3, r30
    mr r5, r31
    addi r4, r4, s_currentDir_807B1020@l
    bl nandConvertPath
    b lbl_nandGenerateAbsPath_000004A0
lbl_nandGenerateAbsPath_00000464:
    mr r3, r30
    mr r4, r31
    bl strcpy
    mr r3, r30
    bl strlen
    cmpwi r3, 0x0
    beq lbl_nandGenerateAbsPath_000004A0
    add r4, r3, r30
    lbz r0, -0x1(r4)
    cmpwi r0, 0x2f
    bne lbl_nandGenerateAbsPath_000004A0
    subic. r0, r3, 0x1
    beq lbl_nandGenerateAbsPath_000004A0
    li r0, 0x0
    stb r0, -0x1(r4)
lbl_nandGenerateAbsPath_000004A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80621610(void)
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
    mr r3, r30
    bl strlen
    addi r0, r3, 0x1
    mr r31, r3
    add r4, r30, r3
    mtctr r0
    cmpwi r3, 0x0
    blt lbl_fn_80621610_00000518
lbl_fn_80621610_00000500:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x2f
    beq lbl_fn_80621610_00000518
    subi r31, r31, 0x1
    subi r4, r4, 0x1
    bdnz lbl_fn_80621610_00000500
lbl_fn_80621610_00000518:
    cmpwi r31, 0x0
    bne lbl_fn_80621610_00000530
    mr r3, r29
    la r4, lbl_8087E8FC
    bl strcpy
    b lbl_fn_80621610_00000548
lbl_fn_80621610_00000530:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_8068236C
    li r0, 0x0
    stbx r0, r29, r31
lbl_fn_80621610_00000548:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void NANDInit(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807B0FC0@ha
    addi r31, r31, lbl_807B0FC0@l
    stw r30, 0x18(r1)
    bl OSDisableInterrupts
    lwz r0, s_libState_80880120
    cmpwi r0, 0x1
    bne lbl_NANDInit_000005A8
    bl OSRestoreInterrupts
    li r3, -0x3
    b lbl_NANDInit_0000068C
lbl_NANDInit_000005A8:
    cmpwi r0, 0x2
    bne lbl_NANDInit_000005BC
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_NANDInit_0000068C
lbl_NANDInit_000005BC:
    li r0, 0x1
    stw r0, s_libState_80880120
    bl OSRestoreInterrupts
    bl ISFS_OpenLib
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_NANDInit_00000674
    bl ESP_InitLib
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_NANDInit_000005F4
    addi r3, r1, 0x8
    bl ESP_GetTitleId
    mr r30, r3
lbl_NANDInit_000005F4:
    cmpwi r30, 0x0
    bne lbl_NANDInit_00000614
    lis r5, s_homeDir_807EB280@ha
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    addi r5, r5, s_homeDir_807EB280@l
    bl ESP_GetDataDir
    mr r30, r3
lbl_NANDInit_00000614:
    cmpwi r30, 0x0
    bne lbl_NANDInit_0000062C
    lis r4, s_homeDir_807EB280@ha
    addi r3, r31, 0x60
    addi r4, r4, s_homeDir_807EB280@l
    bl strcpy
lbl_NANDInit_0000062C:
    bl ESP_CloseLib
    cmpwi r30, 0x0
    beq lbl_NANDInit_00000644
    addi r3, r31, 0x130
    crclr 6
    bl OSReport
lbl_NANDInit_00000644:
    addi r3, r31, 0xa0
    bl OSRegisterShutdownFunction
    bl OSDisableInterrupts
    li r0, 0x2
    stw r0, s_libState_80880120
    bl OSRestoreInterrupts
    li r3, 0x1
    bl NANDSetAutoErrorMessaging
    lwz r3, __NANDVersion
    bl OSRegisterVersion
    li r3, 0x0
    b lbl_NANDInit_0000068C
lbl_NANDInit_00000674:
    bl OSDisableInterrupts
    li r0, 0x0
    stw r0, s_libState_80880120
    bl OSRestoreInterrupts
    mr r3, r30
    bl nandConvertErrorCode
lbl_NANDInit_0000068C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80621800(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r3, 0x0
    bne lbl_fn_80621800_00000760
    cmplwi r4, 0x2
    bne lbl_fn_80621800_00000758
    li r26, 0x0
    stw r26, 0x8(r1)
    bl OSGetTime
    lis r5, fn_806218D0@ha
    mr r27, r4
    mr r28, r3
    addi r4, r1, 0x8
    addi r3, r5, fn_806218D0@l
    bl fn_8061BC10
    lis r3, 0x1062
    lis r30, 0x8000
    addi r29, r3, 0x4dd3
    li r31, 0x1f4
    b lbl_fn_80621800_00000718
lbl_fn_80621800_0000070C:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80621800_00000758
lbl_fn_80621800_00000718:
    bl OSGetTime
    lwz r0, 0xf8(r30)
    subfc r4, r27, r4
    subfe r3, r28, r3
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r29, r0
    srwi r6, r0, 6
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r26, 0x8000
    subfc r3, r31, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80621800_0000070C
lbl_fn_80621800_00000758:
    li r3, 0x1
    b lbl_fn_80621800_00000764
lbl_fn_80621800_00000760:
    li r3, 0x1
lbl_fn_80621800_00000764:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806218D0(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0x0(r4)
    blr
}

asm void fn_806218E0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    beq lbl_fn_806218E0_000008AC
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_806218E0_000007D8
    addi r3, r30, 0x34
    la r4, lbl_8087E900
    bl strcpy
    b lbl_fn_806218E0_0000084C
lbl_fn_806218E0_000007D8:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x2f
    bne lbl_fn_806218E0_000007EC
    li r0, 0x0
    b lbl_fn_806218E0_000007F0
lbl_fn_806218E0_000007EC:
    li r0, 0x1
lbl_fn_806218E0_000007F0:
    cmpwi r0, 0x0
    beq lbl_fn_806218E0_00000810
    lis r4, s_currentDir_807B1020@ha
    mr r5, r29
    addi r3, r30, 0x34
    addi r4, r4, s_currentDir_807B1020@l
    bl nandConvertPath
    b lbl_fn_806218E0_0000084C
lbl_fn_806218E0_00000810:
    mr r4, r29
    addi r3, r30, 0x34
    bl strcpy
    addi r3, r30, 0x34
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_806218E0_0000084C
    add r4, r3, r30
    lbz r0, 0x33(r4)
    cmpwi r0, 0x2f
    bne lbl_fn_806218E0_0000084C
    subic. r0, r3, 0x1
    beq lbl_fn_806218E0_0000084C
    li r0, 0x0
    stb r0, 0x33(r4)
lbl_fn_806218E0_0000084C:
    cmpwi r31, 0x0
    bne lbl_fn_806218E0_0000088C
    lis r4, lbl_807B1070@ha
    addi r3, r30, 0x34
    addi r4, r4, lbl_807B1070@l
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806218E0_00000878
    li r0, 0x1
    b lbl_fn_806218E0_0000087C
lbl_fn_806218E0_00000878:
    li r0, 0x0
lbl_fn_806218E0_0000087C:
    cmpwi r0, 0x0
    beq lbl_fn_806218E0_0000088C
    li r3, -0x66
    b lbl_fn_806218E0_00000A08
lbl_fn_806218E0_0000088C:
    lis r6, fn_80621BD0@ha
    mr r7, r30
    addi r3, r30, 0x34
    addi r5, r30, 0x30
    addi r6, r6, fn_80621BD0@l
    li r4, 0x0
    bl fn_8061ABE0
    b lbl_fn_806218E0_00000A08
lbl_fn_806218E0_000008AC:
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_806218E0_00000910
    addi r3, r1, 0x10
    la r4, lbl_8087E900
    bl strcpy
    b lbl_fn_806218E0_00000988
lbl_fn_806218E0_00000910:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x2f
    bne lbl_fn_806218E0_00000924
    li r0, 0x0
    b lbl_fn_806218E0_00000928
lbl_fn_806218E0_00000924:
    li r0, 0x1
lbl_fn_806218E0_00000928:
    cmpwi r0, 0x0
    beq lbl_fn_806218E0_00000948
    lis r4, s_currentDir_807B1020@ha
    mr r5, r29
    addi r3, r1, 0x10
    addi r4, r4, s_currentDir_807B1020@l
    bl nandConvertPath
    b lbl_fn_806218E0_00000988
lbl_fn_806218E0_00000948:
    mr r4, r29
    addi r3, r1, 0x10
    bl strcpy
    addi r3, r1, 0x10
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_806218E0_00000988
    addi r0, r1, 0x10
    add r4, r3, r0
    lbz r0, -0x1(r4)
    cmpwi r0, 0x2f
    bne lbl_fn_806218E0_00000988
    subic. r0, r3, 0x1
    beq lbl_fn_806218E0_00000988
    li r0, 0x0
    stb r0, -0x1(r4)
lbl_fn_806218E0_00000988:
    cmpwi r31, 0x0
    bne lbl_fn_806218E0_000009C8
    lis r4, lbl_807B1070@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_807B1070@l
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806218E0_000009B4
    li r0, 0x1
    b lbl_fn_806218E0_000009B8
lbl_fn_806218E0_000009B4:
    li r0, 0x0
lbl_fn_806218E0_000009B8:
    cmpwi r0, 0x0
    beq lbl_fn_806218E0_000009C8
    li r3, -0x66
    b lbl_fn_806218E0_00000A08
lbl_fn_806218E0_000009C8:
    addi r3, r1, 0x10
    addi r5, r1, 0x8
    li r4, 0x0
    bl fn_8061AA80
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806218E0_00000A04
    bl OSDisableInterrupts
    lis r4, s_currentDir_807B1020@ha
    mr r30, r3
    addi r3, r4, s_currentDir_807B1020@l
    addi r4, r1, 0x10
    bl strcpy
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_806218E0_00000A04:
    mr r3, r31
lbl_fn_806218E0_00000A08:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80621B80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_80880120
    cmpwi r0, 0x2
    beq lbl_fn_80621B80_00000A50
    li r3, -0x80
    b lbl_fn_80621B80_00000A64
lbl_fn_80621B80_00000A50:
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_806218E0
    bl nandConvertErrorCode
lbl_fn_80621B80_00000A64:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80621BD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80621BD0_00000AC8
    bl OSDisableInterrupts
    lis r4, s_currentDir_807B1020@ha
    mr r30, r3
    addi r3, r4, s_currentDir_807B1020@l
    addi r4, r31, 0x34
    bl strcpy
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_80621BD0_00000AC8:
    mr r3, r29
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80621C50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, s_libState_80880120
    cmpwi r0, 0x2
    bne lbl_fn_80621C50_00000B2C
    li r0, 0x1
    b lbl_fn_80621C50_00000B30
lbl_fn_80621C50_00000B2C:
    li r0, 0x0
lbl_fn_80621C50_00000B30:
    cmpwi r0, 0x0
    bne lbl_fn_80621C50_00000B40
    li r3, -0x80
    b lbl_fn_80621C50_00000B64
lbl_fn_80621C50_00000B40:
    bl OSDisableInterrupts
    lis r4, s_currentDir_807B1020@ha
    mr r31, r3
    mr r3, r30
    addi r4, r4, s_currentDir_807B1020@l
    bl strcpy
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_fn_80621C50_00000B64:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80621CD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_80880120
    cmpwi r0, 0x2
    bne lbl_fn_80621CD0_00000BA0
    li r0, 0x1
    b lbl_fn_80621CD0_00000BA4
lbl_fn_80621CD0_00000BA0:
    li r0, 0x0
lbl_fn_80621CD0_00000BA4:
    cmpwi r0, 0x0
    bne lbl_fn_80621CD0_00000BB4
    li r3, -0x80
    b lbl_fn_80621CD0_00000BC4
lbl_fn_80621CD0_00000BB4:
    lis r4, s_homeDir_807EB280@ha
    addi r4, r4, s_homeDir_807EB280@l
    bl strcpy
    li r3, 0x0
lbl_fn_80621CD0_00000BC4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80621D30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80621D70(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    mr r27, r3
    mr r30, r4
    mr r28, r5
    mr r29, r6
    mr r31, r7
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_80621D70_00000C5C
    li r3, -0x65
    b lbl_fn_80621D70_00000EDC
lbl_fn_80621D70_00000C5C:
    cmpwi r29, 0x0
    beq lbl_fn_80621D70_00000D68
    mr r3, r27
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_80621D70_00000C84
    addi r3, r28, 0x34
    la r4, lbl_8087E900
    bl strcpy
    b lbl_fn_80621D70_00000CF8
lbl_fn_80621D70_00000C84:
    lbz r0, 0x0(r27)
    cmpwi r0, 0x2f
    bne lbl_fn_80621D70_00000C98
    li r0, 0x0
    b lbl_fn_80621D70_00000C9C
lbl_fn_80621D70_00000C98:
    li r0, 0x1
lbl_fn_80621D70_00000C9C:
    cmpwi r0, 0x0
    beq lbl_fn_80621D70_00000CBC
    lis r4, s_currentDir_807B1020@ha
    mr r5, r27
    addi r3, r28, 0x34
    addi r4, r4, s_currentDir_807B1020@l
    bl nandConvertPath
    b lbl_fn_80621D70_00000CF8
lbl_fn_80621D70_00000CBC:
    mr r4, r27
    addi r3, r28, 0x34
    bl strcpy
    addi r3, r28, 0x34
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80621D70_00000CF8
    add r4, r3, r28
    lbz r0, 0x33(r4)
    cmpwi r0, 0x2f
    bne lbl_fn_80621D70_00000CF8
    subic. r0, r3, 0x1
    beq lbl_fn_80621D70_00000CF8
    li r0, 0x0
    stb r0, 0x33(r4)
lbl_fn_80621D70_00000CF8:
    cmpwi r31, 0x0
    bne lbl_fn_80621D70_00000D44
    lis r4, lbl_807B107C@ha
    addi r3, r28, 0x34
    addi r4, r4, lbl_807B107C@l
    li r5, 0x9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80621D70_00000D30
    lbz r0, 0x3d(r28)
    extsb. r0, r0
    beq lbl_fn_80621D70_00000D30
    li r0, 0x1
    b lbl_fn_80621D70_00000D34
lbl_fn_80621D70_00000D30:
    li r0, 0x0
lbl_fn_80621D70_00000D34:
    cmpwi r0, 0x0
    beq lbl_fn_80621D70_00000D44
    li r3, -0x66
    b lbl_fn_80621D70_00000EDC
lbl_fn_80621D70_00000D44:
    lis r6, fn_806220F0@ha
    stw r30, 0x88(r28)
    mr r7, r28
    addi r3, r28, 0x34
    addi r5, r28, 0x30
    addi r6, r6, fn_806220F0@l
    li r4, 0x0
    bl fn_8061ABE0
    b lbl_fn_80621D70_00000EDC
lbl_fn_80621D70_00000D68:
    li r0, 0x0
    stw r0, 0x10(r1)
    mr r3, r27
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_80621D70_00000DCC
    addi r3, r1, 0x10
    la r4, lbl_8087E900
    bl strcpy
    b lbl_fn_80621D70_00000E44
lbl_fn_80621D70_00000DCC:
    lbz r0, 0x0(r27)
    cmpwi r0, 0x2f
    bne lbl_fn_80621D70_00000DE0
    li r0, 0x0
    b lbl_fn_80621D70_00000DE4
lbl_fn_80621D70_00000DE0:
    li r0, 0x1
lbl_fn_80621D70_00000DE4:
    cmpwi r0, 0x0
    beq lbl_fn_80621D70_00000E04
    lis r4, s_currentDir_807B1020@ha
    mr r5, r27
    addi r3, r1, 0x10
    addi r4, r4, s_currentDir_807B1020@l
    bl nandConvertPath
    b lbl_fn_80621D70_00000E44
lbl_fn_80621D70_00000E04:
    mr r4, r27
    addi r3, r1, 0x10
    bl strcpy
    addi r3, r1, 0x10
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80621D70_00000E44
    addi r0, r1, 0x10
    add r4, r3, r0
    lbz r0, -0x1(r4)
    cmpwi r0, 0x2f
    bne lbl_fn_80621D70_00000E44
    subic. r0, r3, 0x1
    beq lbl_fn_80621D70_00000E44
    li r0, 0x0
    stb r0, -0x1(r4)
lbl_fn_80621D70_00000E44:
    cmpwi r31, 0x0
    bne lbl_fn_80621D70_00000E90
    lis r4, lbl_807B107C@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_807B107C@l
    li r5, 0x9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80621D70_00000E7C
    lbz r0, 0x19(r1)
    extsb. r0, r0
    beq lbl_fn_80621D70_00000E7C
    li r0, 0x1
    b lbl_fn_80621D70_00000E80
lbl_fn_80621D70_00000E7C:
    li r0, 0x0
lbl_fn_80621D70_00000E80:
    cmpwi r0, 0x0
    beq lbl_fn_80621D70_00000E90
    li r3, -0x66
    b lbl_fn_80621D70_00000EDC
lbl_fn_80621D70_00000E90:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    addi r5, r1, 0x8
    li r4, 0x0
    bl fn_8061AA80
    cmpwi r3, 0x0
    beq lbl_fn_80621D70_00000EB8
    cmpwi r3, -0x66
    bne lbl_fn_80621D70_00000EC8
lbl_fn_80621D70_00000EB8:
    li r0, 0x2
    stb r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_80621D70_00000EDC
lbl_fn_80621D70_00000EC8:
    cmpwi r3, -0x65
    bne lbl_fn_80621D70_00000EDC
    li r0, 0x1
    stb r0, 0x0(r30)
    li r3, 0x0
lbl_fn_80621D70_00000EDC:
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80622050(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_80880120
    cmpwi r0, 0x2
    beq lbl_fn_80622050_00000F20
    li r3, -0x80
    b lbl_fn_80622050_00000F34
lbl_fn_80622050_00000F20:
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80621D70
    bl nandConvertErrorCode
lbl_fn_80622050_00000F34:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806220A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, s_libState_80880120
    cmpwi r0, 0x2
    beq lbl_fn_806220A0_00000F70
    li r3, -0x80
    b lbl_fn_806220A0_00000F88
lbl_fn_806220A0_00000F70:
    stw r5, 0x4(r6)
    mr r5, r6
    li r6, 0x1
    li r7, 0x1
    bl fn_80621D70
    bl nandConvertErrorCode
lbl_fn_806220A0_00000F88:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806220F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    beq lbl_fn_806220F0_00000FC4
    cmpwi r3, -0x66
    bne lbl_fn_806220F0_00000FD8
lbl_fn_806220F0_00000FC4:
    lwz r4, 0x88(r4)
    li r0, 0x2
    li r3, 0x0
    stb r0, 0x0(r4)
    b lbl_fn_806220F0_00000FF0
lbl_fn_806220F0_00000FD8:
    cmpwi r3, -0x65
    bne lbl_fn_806220F0_00000FF0
    lwz r4, 0x88(r4)
    li r0, 0x1
    li r3, 0x0
    stb r0, 0x0(r4)
lbl_fn_806220F0_00000FF0:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80622170(void)
{
    nofralloc
    lis r3, s_homeDir_807EB280@ha
    addi r3, r3, s_homeDir_807EB280@l
    blr
}

asm void fn_80622180(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    subi r5, r7, 0xf60
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    bl memset
    lis r3, 0x5749
    stw r29, 0x4(r28)
    addi r0, r3, 0x424e
    la r4, lbl_8087E918
    stw r0, 0x0(r28)
    mr r3, r30
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80622180_000010A4
    addi r3, r28, 0x20
    la r4, lbl_8087E91C
    li r5, 0x20
    bl fn_80686A80
    b lbl_fn_80622180_000010B4
lbl_fn_80622180_000010A4:
    mr r4, r30
    addi r3, r28, 0x20
    li r5, 0x20
    bl fn_80686A80
lbl_fn_80622180_000010B4:
    mr r3, r31
    la r4, lbl_8087E918
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80622180_000010DC
    addi r3, r28, 0x60
    la r4, lbl_8087E91C
    li r5, 0x20
    bl fn_80686A80
    b lbl_fn_80622180_000010EC
lbl_fn_80622180_000010DC:
    mr r4, r31
    addi r3, r28, 0x60
    li r5, 0x20
    bl fn_80686A80
lbl_fn_80622180_000010EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80622260(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_80622260_0000114C
    li r3, -0x80
    b lbl_fn_80622260_000011A4
lbl_fn_80622260_0000114C:
    lis r3, lbl_807B1190@ha
    li r4, 0x0
    addi r3, r3, lbl_807B1190@l
    li r0, 0x14
    stw r30, 0x4(r31)
    stw r27, 0x90(r31)
    stw r28, 0x94(r31)
    stw r29, 0x98(r31)
    stw r4, 0xa4(r31)
    stw r4, 0xa8(r31)
    stw r4, 0xac(r31)
    stw r4, 0xb0(r31)
    stw r3, 0xb4(r31)
    stw r0, 0x7c(r31)
    bl fn_80622170
    lis r6, fn_80622310@ha
    mr r7, r31
    addi r4, r31, 0x9c
    addi r5, r31, 0xa0
    addi r6, r6, fn_80622310@l
    bl fn_8061B3A0
    bl nandConvertErrorCode
lbl_fn_80622260_000011A4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80622310(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    beq lbl_fn_80622310_000011E4
    cmpwi r3, -0x6a
    bne lbl_fn_80622310_000013CC
lbl_fn_80622310_000011E4:
    lwz r5, 0xb4(r4)
    cmpwi r3, 0x0
    lwz r3, 0x0(r5)
    bne lbl_fn_80622310_00001214
    lwz r7, 0xa4(r4)
    lwz r6, 0xac(r4)
    lwz r5, 0xa8(r4)
    lwz r0, 0xb0(r4)
    add r6, r7, r6
    stw r6, 0xa4(r4)
    add r0, r5, r0
    stw r0, 0xa8(r4)
lbl_fn_80622310_00001214:
    cmpwi r3, 0x0
    beq lbl_fn_80622310_00001260
    lwz r5, 0xb4(r4)
    lis r6, fn_80622310@ha
    mr r7, r31
    addi r0, r5, 0x4
    stw r0, 0xb4(r4)
    addi r4, r4, 0xac
    addi r5, r31, 0xb0
    addi r6, r6, fn_80622310@l
    bl fn_8061B3A0
    cmpwi r3, 0x0
    beq lbl_fn_80622310_000013E0
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_fn_80622310_000013E0
lbl_fn_80622310_00001260:
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x14
    bne lbl_fn_80622310_000012EC
    lwz r3, 0x90(r4)
    li r8, 0x0
    lwz r0, 0x9c(r4)
    lwz r7, 0xa8(r4)
    add r0, r0, r3
    lwz r6, 0xa4(r4)
    cmplwi r0, 0x400
    lwz r0, 0xa0(r4)
    lwz r5, 0x94(r4)
    ble lbl_fn_80622310_00001298
    ori r8, r8, 0x1
lbl_fn_80622310_00001298:
    add r0, r0, r5
    cmplwi r0, 0x21
    ble lbl_fn_80622310_000012A8
    ori r8, r8, 0x2
lbl_fn_80622310_000012A8:
    add r0, r6, r3
    cmplwi r0, 0x4400
    ble lbl_fn_80622310_000012B8
    ori r8, r8, 0x4
lbl_fn_80622310_000012B8:
    add r0, r7, r5
    cmplwi r0, 0xfa0
    ble lbl_fn_80622310_000012C8
    ori r8, r8, 0x8
lbl_fn_80622310_000012C8:
    lwz r4, 0x98(r4)
    li r3, 0x0
    stw r8, 0x0(r4)
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_fn_80622310_000013E0
lbl_fn_80622310_000012EC:
    cmpwi r0, 0x15
    bne lbl_fn_80622310_00001398
    lwz r5, 0xa4(r4)
    li r3, 0x4400
    lwz r9, 0xa8(r4)
    li r0, 0xfa0
    subfc r3, r5, r3
    lwz r10, 0x9c(r4)
    subfe r8, r3, r3
    lwz r11, 0xa0(r4)
    subfic r6, r5, 0x4400
    li r3, 0x400
    subfc r5, r9, r0
    li r0, 0x21
    subfe r7, r5, r5
    andc r8, r6, r8
    subfic r6, r9, 0xfa0
    subfc r3, r10, r3
    subfe r5, r3, r3
    andc r6, r6, r7
    subfic r3, r10, 0x400
    andc r5, r3, r5
    subfc r0, r11, r0
    subfe r3, r0, r0
    subfic r0, r11, 0x21
    cmplw r8, r5
    andc r0, r0, r3
    bge lbl_fn_80622310_00001360
    mr r5, r8
lbl_fn_80622310_00001360:
    lwz r3, 0xc(r4)
    cmplw r6, r0
    stw r5, 0x0(r3)
    bge lbl_fn_80622310_00001374
    mr r0, r6
lbl_fn_80622310_00001374:
    lwz r4, 0x10(r4)
    li r3, 0x0
    stw r0, 0x0(r4)
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_fn_80622310_000013E0
lbl_fn_80622310_00001398:
    lis r3, lbl_807B11D4@ha
    lis r4, lbl_807B11BC@ha
    addi r3, r3, lbl_807B11D4@l
    addi r4, r4, lbl_807B11BC@l
    crclr 6
    bl OSReport
    li r3, -0x75
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_fn_80622310_000013E0
lbl_fn_80622310_000013CC:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
lbl_fn_80622310_000013E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
