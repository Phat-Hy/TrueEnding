#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void IOS_IoctlAsync(void);
extern void IOS_Open(void);
extern void IPCCltInit(void);
extern void IPCGetBufferHi(void);
extern void IPCGetBufferLo(void);
extern void IPCSetBufferLo(void);
extern void OSFatal(void*, void*, void*);
extern u32 OSGetPhysicalMem2Size(void);
extern void OSSetFontEncode(u32);
extern u32 SCGetLanguage(void);
extern void __DVDShowFatalMessage(void);
extern void __OSGetIOSRev(void*);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_806070F0(void);
extern void fn_80607230(void);
extern void fn_8061C8A0(void);
extern void fn_8061D2F0(void);
extern void fn_8068236C(void);
extern void fn_80696324(void);
extern void lowCallback_806003F0(u32);

/* External data symbols (> 8 bytes) */
extern u8 CheckBuffer_807D12C0[];
extern u8 __DVDDeviceErrorMessage[];
extern char lbl_807AAB08[];
extern char lbl_807AAB68[];
extern u8 lbl_807D12E0[];
extern u8 lbl_807D1360[];
extern u8 lbl_807D1380[];
extern u8 lbl_807D13A0[];
extern u8 lbl_807D1460[];
extern u8 lbl_807D1480[];
extern u8 lbl_807D14A0[];

/* External small data symbols (<= 8 bytes, SDA21) */
extern u32 lbl_80888598;
extern u8 lbl_8087E7F8[8];
extern u8 lbl_8087E800[8];
extern u32 lbl_8087E80C;
extern u8 lbl_8087FDB8;
extern u8 lbl_8087FDB9;
extern u32 lbl_8087FDBC;
extern u32 lbl_8087FDC0;
extern u8 lbl_8087FDC4;
extern u8 lbl_8087FDC5;
extern u32 lbl_8087FDC8;
extern u32 lbl_8087FDCC;
extern u32 lbl_8087FDD0;
extern u32 lbl_8087FDD4;
extern u8 lbl_8087FDD8;
extern u32 lbl_8087FE10;
extern u32 lbl_8087FE18;
extern u32 lbl_8087FE1C;
extern u32 lbl_8087FE20;
extern u32 lbl_8087FE28;
extern u32 lbl_8087FE2C;
extern u32 lbl_8087FE38;
extern u32 lbl_8087FE4C;
extern u32 lbl_8087FE84;
extern u32 lbl_8087FE88;
extern u32 lbl_8087FE8C;
extern u32 lowDone_8087E7F0;
extern u32 lowIntType_8087FDB0;

/* Function declarations */
void __DVDCheckDevice(void);
void fn_80600680(void);
void fn_80600740(void);
void fn_80600800(void);
void DVDLowInit(void);
void fn_80600AC0(void);
void fn_80600C50(void);
void fn_80600EC0(void);
void fn_80601130(void);
void fn_80601340(void);
void fn_806015E0(void);
void DVDLowUnencryptedRead(void);
void fn_806018F0(void);
void fn_80601A90(void);
void DVDLowRequestError(void);
void fn_80601D70(void);
void fn_80601D80(void);
void fn_80601F00(void);
void DVDLowReportKey(void);
void fn_80602240(void);
void fn_806023D0(void);
void fn_80602580(void);
void fn_80602700(void);
void fn_80602710(void);
void fn_80602720(void);
void fn_80602730(void);
void fn_806028A0(void);
void fn_80602A10(void);
void DVDLowGetImmBufferReg(void);
void DVDLowUnmaskStatusInterrupts(void);
void DVDLowMaskCoverInterrupt(void);
void fn_80602BB0(void);
void fn_80602D20(void);
void fn_80602D30(void);

asm void __DVDCheckDevice(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lis r29, 0x460a
    bl OSGetPhysicalMem2Size
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl___DVDCheckDevice_34
    li r3, 0x1
    b lbl___DVDCheckDevice_260
lbl___DVDCheckDevice_34:
    addi r3, r1, 0x10
    bl __OSGetIOSRev
    lbz r0, 0x11(r1)
    cmplwi r0, 0x1e
    blt lbl___DVDCheckDevice_50
    cmplwi r0, 0xfe
    blt lbl___DVDCheckDevice_58
lbl___DVDCheckDevice_50:
    li r3, 0x1
    b lbl___DVDCheckDevice_260
lbl___DVDCheckDevice_58:
    lis r3, 0x8000
    lbz r0, 0x319c(r3)
    cmplwi r0, 0x81
    bne lbl___DVDCheckDevice_6c
    lis r29, 0x7ed4
lbl___DVDCheckDevice_6c:
    li r0, 0x0
    lis r3, CheckBuffer_807D12C0@ha
    lis r6, lowCallback_806003F0@ha
    stw r0, lowDone_8087E7F0
    mr r5, r29
    addi r3, r3, CheckBuffer_807D12C0@l
    addi r6, r6, lowCallback_806003F0@l
    li r4, 0x20
    bl DVDLowUnencryptedRead
lbl___DVDCheckDevice_90:
    lwz r0, lowDone_8087E7F0
    cmpwi r0, 0x0
    beq lbl___DVDCheckDevice_90
    lwz r0, lowIntType_8087FDB0
    cmpwi r0, 0x2
    beq lbl___DVDCheckDevice_b8
    bge lbl___DVDCheckDevice_258
    cmpwi r0, 0x1
    bge lbl___DVDCheckDevice_1e0
    b lbl___DVDCheckDevice_258
lbl___DVDCheckDevice_b8:
    li r0, 0x0
    lis r3, lowCallback_806003F0@ha
    stw r0, lowDone_8087E7F0
    addi r3, r3, lowCallback_806003F0@l
    bl DVDLowRequestError
    nop
lbl___DVDCheckDevice_d0:
    lwz r0, lowDone_8087E7F0
    cmpwi r0, 0x0
    beq lbl___DVDCheckDevice_d0
    bl DVDLowGetImmBufferReg
    lwz r0, lowIntType_8087FDB0
    cmpwi r0, 0x1
    beq lbl___DVDCheckDevice_f0
    b lbl___DVDCheckDevice_258
lbl___DVDCheckDevice_f0:
    bl DVDLowGetImmBufferReg
    clrrwi. r0, r3, 24
    bne lbl___DVDCheckDevice_250
    bl DVDLowGetImmBufferReg
    lis r4, 0x5
    clrlwi r3, r3, 8
    addi r0, r4, 0x2100
    cmpw r3, r0
    beq lbl___DVDCheckDevice_118
    b lbl___DVDCheckDevice_1e0
lbl___DVDCheckDevice_118:
    li r0, 0x0
    lis r3, CheckBuffer_807D12C0@ha
    lis r6, lowCallback_806003F0@ha
    stw r0, lowDone_8087E7F0
    addi r3, r3, CheckBuffer_807D12C0@l
    lis r4, 0x4
    addi r6, r6, lowCallback_806003F0@l
    li r5, 0x0
    bl DVDLowReportKey
    nop
lbl___DVDCheckDevice_140:
    lwz r0, lowDone_8087E7F0
    cmpwi r0, 0x0
    beq lbl___DVDCheckDevice_140
    lwz r0, lowIntType_8087FDB0
    cmpwi r0, 0x2
    beq lbl___DVDCheckDevice_168
    bge lbl___DVDCheckDevice_258
    cmpwi r0, 0x1
    bge lbl___DVDCheckDevice_1e0
    b lbl___DVDCheckDevice_258
lbl___DVDCheckDevice_168:
    li r0, 0x0
    lis r3, lowCallback_806003F0@ha
    stw r0, lowDone_8087E7F0
    addi r3, r3, lowCallback_806003F0@l
    bl DVDLowRequestError
    nop
lbl___DVDCheckDevice_180:
    lwz r0, lowDone_8087E7F0
    cmpwi r0, 0x0
    beq lbl___DVDCheckDevice_180
    bl DVDLowGetImmBufferReg
    lwz r0, lowIntType_8087FDB0
    cmpwi r0, 0x1
    beq lbl___DVDCheckDevice_1a0
    b lbl___DVDCheckDevice_258
lbl___DVDCheckDevice_1a0:
    bl DVDLowGetImmBufferReg
    clrrwi. r0, r3, 24
    bne lbl___DVDCheckDevice_250
    bl DVDLowGetImmBufferReg
    lis r4, 0x5
    clrlwi r3, r3, 8
    addi r0, r4, 0x3100
    cmpw r3, r0
    beq lbl___DVDCheckDevice_1d8
    bge lbl___DVDCheckDevice_1e0
    addi r0, r4, 0x2000
    cmpw r3, r0
    beq lbl___DVDCheckDevice_1d8
    b lbl___DVDCheckDevice_1e0
lbl___DVDCheckDevice_1d8:
    li r3, 0x1
    b lbl___DVDCheckDevice_260
lbl___DVDCheckDevice_1e0:
    lwz r30, lbl_80888598
    li r31, 0x0
    bl SCGetLanguage
    clrlwi. r0, r3, 24
    bne lbl___DVDCheckDevice_200
    li r3, 0x1
    bl OSSetFontEncode
    b lbl___DVDCheckDevice_208
lbl___DVDCheckDevice_200:
    li r3, 0x0
    bl OSSetFontEncode
lbl___DVDCheckDevice_208:
    lis r29, __DVDDeviceErrorMessage@ha
    addi r29, r29, __DVDDeviceErrorMessage@l
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmplwi r0, 0x6
    ble lbl___DVDCheckDevice_228
    lwz r5, 0x4(r29)
    b lbl___DVDCheckDevice_234
lbl___DVDCheckDevice_228:
    bl SCGetLanguage
    clrlslwi r0, r3, 24, 2
    lwzx r5, r29, r0
lbl___DVDCheckDevice_234:
    stw r31, 0xc(r1)
    addi r4, r1, 0xc
    addi r3, r1, 0x8
    stw r30, 0x8(r1)
    bl OSFatal
    li r3, 0x0
    b lbl___DVDCheckDevice_260
lbl___DVDCheckDevice_250:
    li r3, 0x0
    b lbl___DVDCheckDevice_260
lbl___DVDCheckDevice_258:
    bl __DVDShowFatalMessage
    li r3, 0x0
lbl___DVDCheckDevice_260:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80600680(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r5, 0xc(r4)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80600680_2c4
    lis r3, lbl_807AAB08@ha
    addi r3, r3, lbl_807AAB08@l
    crclr 6
    bl OSReport
    lis r3, 0xfeec
    subi r0, r3, 0x2513
    stw r0, 0xc(r31)
    b lbl_fn_80600680_318
lbl_fn_80600680_2c4:
    li r6, 0x0
    stb r6, lbl_8087FDB8
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80600680_318
    lbz r0, lbl_8087FDD8
    li r5, 0x1
    stb r5, lbl_8087FDB9
    cmplwi r0, 0x1
    bne lbl_fn_80600680_2f4
    stb r6, lbl_8087FDD8
    ori r3, r3, 0x8
lbl_fn_80600680_2f4:
    clrlwi. r0, r3, 31
    beq lbl_fn_80600680_304
    li r0, 0x0
    stw r0, lbl_8087FDCC
lbl_fn_80600680_304:
    lwz r12, 0x0(r4)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, lbl_8087FDB9
lbl_fn_80600680_318:
    li r0, 0x0
    stb r0, 0x8(r31)
    li r3, 0x0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80600740(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807D1360@ha
    lis r6, lbl_807D1380@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807D1360@l
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r0, lbl_807D1380@l(r6)
    li r6, 0x0
    stb r6, lbl_8087FDB8
    stw r0, 0x4(r5)
    lwz r5, 0xc(r4)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80600740_3a0
    lis r3, lbl_807AAB08@ha
    addi r3, r3, lbl_807AAB08@l
    crclr 6
    bl OSReport
    lis r3, 0xfeec
    subi r0, r3, 0x2513
    stw r0, 0xc(r31)
    b lbl_fn_80600740_3dc
lbl_fn_80600740_3a0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80600740_3dc
    lbz r0, lbl_8087FDD8
    li r5, 0x1
    stb r5, lbl_8087FDB9
    cmplwi r0, 0x1
    bne lbl_fn_80600740_3c8
    stb r6, lbl_8087FDD8
    ori r3, r3, 0x8
lbl_fn_80600740_3c8:
    lwz r12, 0x0(r4)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, lbl_8087FDB9
lbl_fn_80600740_3dc:
    li r0, 0x0
    stb r0, 0x8(r31)
    li r3, 0x0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80600800(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087E7F8
    bl fn_8061C8A0
    cmpwi r3, 0x0
    beq lbl_fn_80600800_434
    lis r3, lbl_807AAB68@ha
    addi r3, r3, lbl_807AAB68@l
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80600800_440
lbl_fn_80600800_434:
    li r0, 0x0
    stb r0, lbl_8087FDC5
    li r3, 0x1
lbl_fn_80600800_440:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void DVDLowInit(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lbz r0, lbl_8087FDC5
    cmpwi r0, 0x0
    bne lbl_DVDLowInit_5f8
    li r0, 0x1
    stb r0, lbl_8087FDC5
    bl IPCCltInit
    cmpwi r3, 0x0
    beq lbl_DVDLowInit_4a4
    mr r4, r3
    addi r3, r31, 0x88
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_DVDLowInit_69c
lbl_DVDLowInit_4a4:
    bl IPCGetBufferLo
    mr r30, r3
    bl IPCGetBufferHi
    clrlwi. r0, r30, 27
    beq lbl_DVDLowInit_4c0
    addi r0, r30, 0x1f
    clrlwi r30, r0, 27
lbl_DVDLowInit_4c0:
    addi r0, r30, 0x80
    cmplw r0, r3
    ble lbl_DVDLowInit_4dc
    addi r3, r31, 0xa8
    li r4, 0x80
    crclr 6
    bl OSReport
lbl_DVDLowInit_4dc:
    addi r3, r30, 0x80
    bl IPCSetBufferLo
    cmpwi r30, 0x0
    stw r30, lbl_8087FDD4
    bne lbl_DVDLowInit_504
    addi r3, r31, 0xe4
    crclr 6
    bl OSReport
    li r0, 0x0
    b lbl_DVDLowInit_568
lbl_DVDLowInit_504:
    bl IPCGetBufferLo
    mr r30, r3
    bl IPCGetBufferHi
    clrlwi. r0, r30, 27
    beq lbl_DVDLowInit_520
    addi r0, r30, 0x1f
    clrlwi r30, r0, 27
lbl_DVDLowInit_520:
    addi r0, r30, 0x20
    cmplw r0, r3
    ble lbl_DVDLowInit_53c
    addi r3, r31, 0xa8
    li r4, 0x20
    crclr 6
    bl OSReport
lbl_DVDLowInit_53c:
    addi r3, r30, 0x20
    bl IPCSetBufferLo
    cmpwi r30, 0x0
    stw r30, lbl_8087FDD0
    bne lbl_DVDLowInit_564
    addi r3, r31, 0x10c
    crclr 6
    bl OSReport
    li r0, 0x0
    b lbl_DVDLowInit_568
lbl_DVDLowInit_564:
    li r0, 0x1
lbl_DVDLowInit_568:
    cmpwi r0, 0x0
    bne lbl_DVDLowInit_578
    li r3, 0x0
    b lbl_DVDLowInit_69c
lbl_DVDLowInit_578:
    lbz r0, lbl_8087FDC4
    cmpwi r0, 0x0
    bne lbl_DVDLowInit_5f8
    li r5, 0x0
    lis r4, lbl_807D12E0@ha
    stwu r5, lbl_807D12E0@l(r4)
    lis r3, 0xfeec
    li r0, 0x1
    li r6, 0x2
    stw r5, 0x4(r4)
    subi r3, r3, 0x2513
    stb r5, 0x8(r4)
    stw r3, 0xc(r4)
    stw r5, 0x10(r4)
    stw r5, 0x20(r4)
    stw r5, 0x24(r4)
    stb r5, 0x28(r4)
    stw r3, 0x2c(r4)
    stw r0, 0x30(r4)
    stw r5, 0x40(r4)
    stw r5, 0x44(r4)
    stb r5, 0x48(r4)
    stw r3, 0x4c(r4)
    stw r6, 0x50(r4)
    li r6, 0x3
    stw r5, 0x60(r4)
    stw r5, 0x64(r4)
    stb r5, 0x68(r4)
    stw r3, 0x6c(r4)
    stw r6, 0x70(r4)
    stw r5, lbl_8087FDC0
    stb r0, lbl_8087FDC4
lbl_DVDLowInit_5f8:
    lwz r3, lbl_8087FDD0
    la r4, lbl_8087E800
    li r5, 0x20
    bl fn_8068236C
    lwz r3, lbl_8087FDD0
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, lbl_8087E7F8
    blt lbl_DVDLowInit_628
    li r3, 0x1
    b lbl_DVDLowInit_69c
lbl_DVDLowInit_628:
    cmpwi r3, -0x5
    beq lbl_DVDLowInit_674
    bge lbl_DVDLowInit_640
    cmpwi r3, -0x6
    bge lbl_DVDLowInit_64c
    b lbl_DVDLowInit_688
lbl_DVDLowInit_640:
    cmpwi r3, -0x1
    beq lbl_DVDLowInit_660
    b lbl_DVDLowInit_688
lbl_DVDLowInit_64c:
    addi r3, r31, 0x12c
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_DVDLowInit_69c
lbl_DVDLowInit_660:
    addi r3, r31, 0x178
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_DVDLowInit_69c
lbl_DVDLowInit_674:
    addi r3, r31, 0x1c0
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_DVDLowInit_69c
lbl_DVDLowInit_688:
    mr r4, r3
    addi r3, r31, 0x20c
    crclr 6
    bl OSReport
    li r3, 0x0
lbl_DVDLowInit_69c:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80600AC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_807D12E0@ha
    li r10, 0x1
    stw r0, 0x24(r1)
    addi r7, r7, lbl_807D12E0@l
    stw r31, 0x1c(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r9, lbl_8087FDC0
    stb r10, lbl_8087FDB8
    slwi r8, r9, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80600AC0_73c
    mr r4, r9
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80600AC0_738:
    b lbl_fn_80600AC0_738
lbl_fn_80600AC0_73c:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80600AC0_75c
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80600AC0_758:
    b lbl_fn_80600AC0_758
lbl_fn_80600AC0_75c:
    stwx r4, r7, r8
    addi r0, r9, 0x1
    cmpwi r0, 0x4
    stw r10, 0x4(r6)
    stb r10, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80600AC0_780
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80600AC0_780:
    lis r4, lbl_807D12E0@ha
    cmpwi r3, 0x0
    slwi r0, r9, 5
    addi r4, r4, lbl_807D12E0@l
    add r29, r4, r0
    bne lbl_fn_80600AC0_7a4
    addi r3, r31, 0x2e8
    crclr 6
    bl OSReport
lbl_fn_80600AC0_7a4:
    lwz r3, lbl_8087FDBC
    addi r0, r3, 0x1
    stw r0, lbl_8087FDBC
    cmpwi r0, 0x4
    blt lbl_fn_80600AC0_7c0
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80600AC0_7c0:
    lwz r3, lbl_8087FDD4
    lis r9, fn_80600680@ha
    slwi r0, r0, 5
    li r4, 0x70
    stbx r4, r3, r0
    mr r7, r30
    mr r10, r29
    addi r9, r9, fn_80600680@l
    lwz r0, lbl_8087FDBC
    li r4, 0x70
    lwz r5, lbl_8087FDD4
    li r6, 0x20
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_80600AC0_82c
    mr r4, r3
    addi r3, r31, 0x324
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r29)
    li r3, 0x0
    b lbl_fn_80600AC0_830
lbl_fn_80600AC0_82c:
    li r3, 0x1
lbl_fn_80600AC0_830:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80600C50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r9, lbl_807D12E0@ha
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    addi r9, r9, lbl_807D12E0@l
    stw r31, 0x1c(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    beq lbl_fn_80600C50_8a0
    clrlwi. r0, r4, 27
    beq lbl_fn_80600C50_8a0
    addi r3, r31, 0x360
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80600C50_a9c
lbl_fn_80600C50_8a0:
    cmpwi r6, 0x0
    beq lbl_fn_80600C50_8c4
    clrlwi. r0, r6, 27
    beq lbl_fn_80600C50_8c4
    addi r3, r31, 0x398
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80600C50_a9c
lbl_fn_80600C50_8c4:
    cmpwi r7, 0x0
    beq lbl_fn_80600C50_8e8
    clrlwi. r0, r7, 27
    beq lbl_fn_80600C50_8e8
    addi r3, r31, 0x398
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80600C50_a9c
lbl_fn_80600C50_8e8:
    lwz r29, lbl_8087FDC0
    li r28, 0x1
    addi r12, r9, 0x0
    stb r28, lbl_8087FDB8
    slwi r30, r29, 5
    add r11, r12, r30
    lbz r10, 0x8(r11)
    neg r0, r10
    or r0, r0, r10
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80600C50_93c
    mr r4, r29
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80600C50_938:
    b lbl_fn_80600C50_938
lbl_fn_80600C50_93c:
    lwz r10, 0xc(r11)
    addis r0, r10, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80600C50_95c
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80600C50_958:
    b lbl_fn_80600C50_958
lbl_fn_80600C50_95c:
    stwx r8, r12, r30
    addi r0, r29, 0x1
    cmpwi r0, 0x4
    stw r28, 0x4(r11)
    stb r28, 0x8(r11)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80600C50_980
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80600C50_980:
    lwz r8, lbl_8087FDBC
    slwi r11, r29, 5
    addi r10, r9, 0x0
    addi r0, r8, 0x1
    stw r0, lbl_8087FDBC
    cmpwi r0, 0x4
    add r30, r10, r11
    blt lbl_fn_80600C50_9a8
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80600C50_9a8:
    lwz r8, lbl_8087FDD4
    slwi r0, r0, 5
    li r10, 0x8b
    cmpwi r4, 0x0
    stbx r10, r8, r0
    addi r8, r9, 0xc0
    li r0, 0x20
    lwz r10, lbl_8087FDBC
    lwz r11, lbl_8087FDD4
    slwi r10, r10, 5
    add r10, r11, r10
    stw r3, 0x4(r10)
    lwz r3, lbl_8087FDBC
    lwz r10, lbl_8087FDD4
    slwi r3, r3, 5
    stw r0, 0x4(r8)
    add r0, r10, r3
    stw r0, 0xc0(r9)
    stw r4, 0x8(r8)
    bne lbl_fn_80600C50_a04
    li r0, 0x0
    stw r0, 0xc(r8)
    b lbl_fn_80600C50_a0c
lbl_fn_80600C50_a04:
    li r0, 0x2a4
    stw r0, 0xc(r8)
lbl_fn_80600C50_a0c:
    addi r3, r9, 0xc0
    cmpwi r6, 0x0
    stw r6, 0x10(r3)
    bne lbl_fn_80600C50_a28
    li r0, 0x0
    stw r0, 0x14(r3)
    b lbl_fn_80600C50_a2c
lbl_fn_80600C50_a28:
    stw r5, 0x14(r3)
lbl_fn_80600C50_a2c:
    addi r6, r9, 0xc0
    addi r4, r9, 0x120
    stw r7, 0x18(r6)
    li r3, 0x49e4
    li r0, 0x20
    lis r8, fn_80600680@ha
    stw r3, 0x1c(r6)
    mr r7, r6
    lwz r3, lbl_8087E7F8
    mr r9, r30
    stw r4, 0x20(r6)
    addi r8, r8, fn_80600680@l
    li r4, 0x8b
    li r5, 0x3
    stw r0, 0x24(r6)
    li r6, 0x2
    bl fn_8061D2F0
    cmpwi r3, 0x0
    beq lbl_fn_80600C50_a98
    mr r4, r3
    addi r3, r31, 0x3d0
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80600C50_a9c
lbl_fn_80600C50_a98:
    li r3, 0x1
lbl_fn_80600C50_a9c:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80600EC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r8, 0x0
    lis r10, lbl_807D12E0@ha
    lis r31, lbl_807AAB08@ha
    addi r10, r10, lbl_807D12E0@l
    addi r31, r31, lbl_807AAB08@l
    beq lbl_fn_80600EC0_afc
    clrlwi. r0, r8, 27
    beq lbl_fn_80600EC0_afc
    li r3, 0x0
    b lbl_fn_80600EC0_d0c
lbl_fn_80600EC0_afc:
    cmpwi r6, 0x0
    bne lbl_fn_80600EC0_b1c
    addi r3, r31, 0x458
    addi r4, r31, 0x4c8
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80600EC0_d0c
lbl_fn_80600EC0_b1c:
    clrlwi. r0, r6, 27
    beq lbl_fn_80600EC0_b3c
    addi r3, r31, 0x47c
    addi r4, r31, 0x4c8
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80600EC0_d0c
lbl_fn_80600EC0_b3c:
    cmpwi r4, 0x0
    bne lbl_fn_80600EC0_b5c
    addi r3, r31, 0x4f0
    addi r4, r31, 0x4c8
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80600EC0_d0c
lbl_fn_80600EC0_b5c:
    clrlwi. r0, r4, 27
    beq lbl_fn_80600EC0_b7c
    addi r3, r31, 0x51c
    addi r4, r31, 0x4c8
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80600EC0_d0c
lbl_fn_80600EC0_b7c:
    lwz r28, lbl_8087FDC0
    li r27, 0x1
    addi r29, r10, 0x0
    stb r27, lbl_8087FDB8
    slwi r30, r28, 5
    add r12, r29, r30
    lbz r11, 0x8(r12)
    neg r0, r11
    or r0, r0, r11
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80600EC0_bcc
    mr r4, r28
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
lbl_fn_80600EC0_bc8:
    b lbl_fn_80600EC0_bc8
lbl_fn_80600EC0_bcc:
    lwz r11, 0xc(r12)
    addis r0, r11, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80600EC0_bec
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80600EC0_be8:
    b lbl_fn_80600EC0_be8
lbl_fn_80600EC0_bec:
    stwx r9, r29, r30
    addi r0, r28, 0x1
    cmpwi r0, 0x4
    stw r27, 0x4(r12)
    stb r27, 0x8(r12)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80600EC0_c10
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80600EC0_c10:
    lwz r9, lbl_8087FDBC
    slwi r12, r28, 5
    addi r11, r10, 0x0
    addi r0, r9, 0x1
    stw r0, lbl_8087FDBC
    cmpwi r0, 0x4
    add r30, r11, r12
    blt lbl_fn_80600EC0_c38
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80600EC0_c38:
    lwz r9, lbl_8087FDD4
    slwi r0, r0, 5
    li r11, 0x94
    cmpwi r8, 0x0
    stbx r11, r9, r0
    addi r9, r10, 0xc0
    li r11, 0x20
    li r0, 0xd8
    lwz r12, lbl_8087FDBC
    lwz r29, lbl_8087FDD4
    slwi r12, r12, 5
    add r12, r29, r12
    stw r3, 0x4(r12)
    lwz r3, lbl_8087FDBC
    lwz r12, lbl_8087FDD4
    slwi r3, r3, 5
    stw r11, 0x4(r9)
    add r3, r12, r3
    stw r3, 0xc0(r10)
    stw r4, 0x8(r9)
    stw r0, 0xc(r9)
    stw r6, 0x10(r9)
    stw r5, 0x14(r9)
    stw r8, 0x18(r9)
    bne lbl_fn_80600EC0_ca8
    li r0, 0x0
    stw r0, 0x1c(r9)
    b lbl_fn_80600EC0_cac
lbl_fn_80600EC0_ca8:
    stw r7, 0x1c(r9)
lbl_fn_80600EC0_cac:
    addi r7, r10, 0xc0
    addi r3, r10, 0x120
    li r0, 0x20
    lis r8, fn_80600680@ha
    stw r3, 0x20(r7)
    mr r9, r30
    lwz r3, lbl_8087E7F8
    addi r8, r8, fn_80600680@l
    stw r0, 0x24(r7)
    li r4, 0x94
    li r5, 0x4
    li r6, 0x1
    bl fn_8061D2F0
    cmpwi r3, 0x0
    beq lbl_fn_80600EC0_d08
    mr r4, r3
    addi r3, r31, 0x3d0
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80600EC0_d0c
lbl_fn_80600EC0_d08:
    li r3, 0x1
lbl_fn_80600EC0_d0c:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80601130(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    beq lbl_fn_80601130_d5c
    cmpwi r5, 0x0
    bne lbl_fn_80601130_d74
lbl_fn_80601130_d5c:
    addi r3, r31, 0x560
    addi r4, r31, 0x544
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80601130_f28
lbl_fn_80601130_d74:
    clrlwi. r0, r4, 27
    beq lbl_fn_80601130_d94
    addi r3, r31, 0x584
    addi r4, r31, 0x544
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80601130_f28
lbl_fn_80601130_d94:
    clrlwi. r0, r5, 27
    beq lbl_fn_80601130_db4
    addi r3, r31, 0x5ac
    addi r4, r31, 0x544
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80601130_f28
lbl_fn_80601130_db4:
    lwz r11, lbl_8087FDC0
    lis r9, lbl_807D12E0@ha
    li r12, 0x1
    stb r12, lbl_8087FDB8
    slwi r10, r11, 5
    addi r9, r9, lbl_807D12E0@l
    add r8, r9, r10
    lbz r7, 0x8(r8)
    neg r0, r7
    or r0, r0, r7
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80601130_e0c
    mr r4, r11
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80601130_e08:
    b lbl_fn_80601130_e08
lbl_fn_80601130_e0c:
    lwz r7, 0xc(r8)
    addis r0, r7, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80601130_e2c
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80601130_e28:
    b lbl_fn_80601130_e28
lbl_fn_80601130_e2c:
    stwx r6, r9, r10
    addi r0, r11, 0x1
    cmpwi r0, 0x4
    stw r12, 0x4(r8)
    stb r12, 0x8(r8)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80601130_e50
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80601130_e50:
    lwz r6, lbl_8087FDBC
    lis r7, lbl_807D12E0@ha
    slwi r8, r11, 5
    addi r0, r6, 0x1
    addi r7, r7, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r7, r8
    blt lbl_fn_80601130_e7c
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80601130_e7c:
    lwz r6, lbl_8087FDD4
    lis r8, fn_80600680@ha
    slwi r0, r0, 5
    li r7, 0x92
    stbx r7, r6, r0
    lis r11, lbl_807D13A0@ha
    addi r7, r11, lbl_807D13A0@l
    li r10, 0x20
    lwz r6, lbl_8087FDBC
    li r0, 0x4
    lwz r12, lbl_8087FDD4
    mr r9, r30
    slwi r6, r6, 5
    addi r8, r8, fn_80600680@l
    add r6, r12, r6
    stw r3, 0x4(r6)
    li r6, 0x2
    lwz r3, lbl_8087FDBC
    lwz r12, lbl_8087FDD4
    slwi r3, r3, 5
    stw r4, 0x8(r7)
    add r12, r12, r3
    lwz r3, lbl_8087E7F8
    stw r5, 0x10(r7)
    li r4, 0x92
    li r5, 0x1
    stw r12, lbl_807D13A0@l(r11)
    stw r10, 0x4(r7)
    stw r0, 0xc(r7)
    stw r0, 0x14(r7)
    bl fn_8061D2F0
    cmpwi r3, 0x0
    beq lbl_fn_80601130_f24
    mr r5, r3
    addi r3, r31, 0x5d4
    addi r4, r31, 0x544
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80601130_f28
lbl_fn_80601130_f24:
    li r3, 0x1
lbl_fn_80601130_f28:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80601340(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r4, 0x0
    lis r31, lbl_807AAB08@ha
    lwz r28, 0x38(r1)
    addi r31, r31, lbl_807AAB08@l
    beq lbl_fn_80601340_f98
    cmpwi r5, 0x0
    beq lbl_fn_80601340_f98
    cmpwi r6, 0x0
    beq lbl_fn_80601340_f98
    cmpwi r7, 0x0
    beq lbl_fn_80601340_f98
    cmpwi r8, 0x0
    beq lbl_fn_80601340_f98
    cmpwi r9, 0x0
    beq lbl_fn_80601340_f98
    cmpwi r10, 0x0
    bne lbl_fn_80601340_fb0
lbl_fn_80601340_f98:
    addi r3, r31, 0x560
    addi r4, r31, 0x604
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80601340_11c0
lbl_fn_80601340_fb0:
    clrlwi. r0, r4, 27
    bne lbl_fn_80601340_fe8
    clrlwi. r0, r5, 27
    bne lbl_fn_80601340_fe8
    clrlwi. r0, r6, 27
    bne lbl_fn_80601340_fe8
    clrlwi. r0, r7, 27
    bne lbl_fn_80601340_fe8
    clrlwi. r0, r8, 27
    bne lbl_fn_80601340_fe8
    clrlwi. r0, r9, 27
    bne lbl_fn_80601340_fe8
    clrlwi. r0, r10, 27
    beq lbl_fn_80601340_1000
lbl_fn_80601340_fe8:
    addi r3, r31, 0x628
    addi r4, r31, 0x604
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_80601340_11c0
lbl_fn_80601340_1000:
    lwz r26, lbl_8087FDC0
    lis r24, lbl_807D12E0@ha
    li r27, 0x1
    stb r27, lbl_8087FDB8
    slwi r25, r26, 5
    addi r24, r24, lbl_807D12E0@l
    add r12, r24, r25
    lbz r11, 0x8(r12)
    neg r0, r11
    or r0, r0, r11
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80601340_1054
    mr r4, r26
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
lbl_fn_80601340_1050:
    b lbl_fn_80601340_1050
lbl_fn_80601340_1054:
    lwz r11, 0xc(r12)
    addis r0, r11, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80601340_1074
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80601340_1070:
    b lbl_fn_80601340_1070
lbl_fn_80601340_1074:
    stwx r28, r24, r25
    addi r0, r26, 0x1
    cmpwi r0, 0x4
    stw r27, 0x4(r12)
    stb r27, 0x8(r12)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80601340_1098
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80601340_1098:
    lwz r11, lbl_8087FDBC
    lis r12, lbl_807D12E0@ha
    slwi r24, r26, 5
    addi r0, r11, 0x1
    addi r12, r12, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r12, r24
    blt lbl_fn_80601340_10c4
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80601340_10c4:
    lwz r11, lbl_8087FDD4
    lis r26, lbl_807D13A0@ha
    slwi r0, r0, 5
    li r12, 0x90
    stbx r12, r11, r0
    addi r28, r26, lbl_807D13A0@l
    li r27, 0x20
    li r29, 0x4
    lwz r0, lbl_8087FDBC
    li r12, 0x2a4
    lwz r24, lbl_8087FDD4
    lis r11, 0x2
    slwi r25, r0, 5
    add r25, r24, r25
    addi r0, r11, -0x8000
    stw r3, 0x4(r25)
    lis r11, fn_80600680@ha
    lwz r3, lbl_8087FDBC
    lwz r25, lbl_8087FDD4
    slwi r3, r3, 5
    stw r4, 0x18(r28)
    add r25, r25, r3
    lwz r3, lbl_8087E7F8
    stw r6, 0x28(r28)
    li r4, 0x90
    li r6, 0x7
    stw r25, lbl_807D13A0@l(r26)
    stw r27, 0x4(r28)
    stw r5, 0x8(r28)
    stw r29, 0xc(r28)
    stw r7, 0x10(r28)
    stw r29, 0x14(r28)
    stw r12, 0x1c(r28)
    stw r5, 0x20(r28)
    stw r29, 0x24(r28)
    lwz r12, 0x0(r5)
    li r5, 0x3
    stw r12, 0x2c(r28)
    stw r8, 0x38(r28)
    addi r8, r11, fn_80600680@l
    stw r7, 0x30(r28)
    stw r29, 0x34(r28)
    lwz r11, 0x0(r7)
    mr r7, r28
    stw r11, 0x3c(r28)
    stw r9, 0x40(r28)
    mr r9, r30
    stw r29, 0x44(r28)
    stw r10, 0x48(r28)
    stw r0, 0x4c(r28)
    bl fn_8061D2F0
    cmpwi r3, 0x0
    beq lbl_fn_80601340_11bc
    mr r5, r3
    addi r3, r31, 0x5d4
    addi r4, r31, 0x604
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80601340_11c0
lbl_fn_80601340_11bc:
    li r3, 0x1
lbl_fn_80601340_11c0:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806015E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r4, lbl_8087FDBC
    addi r0, r4, 0x1
    stw r0, lbl_8087FDBC
    cmpwi r0, 0x4
    blt lbl_fn_806015E0_1218
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_806015E0_1218:
    lwz r4, lbl_8087FDD4
    lis r7, lbl_807D12E0@ha
    slwi r0, r0, 5
    li r5, 0x8c
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, lbl_807D12E0@l
    lwz r4, lbl_8087FDC0
    stb r9, lbl_8087FDB8
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806015E0_127c
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_806015E0_1278:
    b lbl_fn_806015E0_1278
lbl_fn_806015E0_127c:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_806015E0_129c
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_806015E0_1298:
    b lbl_fn_806015E0_1298
lbl_fn_806015E0_129c:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_806015E0_12c0
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_806015E0_12c0:
    lwz r0, lbl_8087FDBC
    lis r3, lbl_807D12E0@ha
    slwi r5, r4, 5
    lwz r4, lbl_8087FDD4
    addi r3, r3, lbl_807D12E0@l
    lis r9, fn_80600680@ha
    add r30, r3, r5
    slwi r0, r0, 5
    add r5, r4, r0
    lwz r3, lbl_8087E7F8
    mr r10, r30
    addi r9, r9, fn_80600680@l
    li r4, 0x8c
    li r6, 0x20
    li r7, 0x0
    li r8, 0x0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_806015E0_132c
    mr r4, r3
    addi r3, r31, 0x668
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_806015E0_1330
lbl_fn_806015E0_132c:
    li r3, 0x1
lbl_fn_806015E0_1330:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void DVDLowUnencryptedRead(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r9, lbl_807D12E0@ha
    li r12, 0x1
    stw r0, 0x14(r1)
    addi r9, r9, lbl_807D12E0@l
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r11, lbl_8087FDC0
    stb r12, lbl_8087FDB8
    slwi r10, r11, 5
    add r8, r9, r10
    lbz r7, 0x8(r8)
    neg r0, r7
    or r0, r0, r7
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_DVDLowUnencryptedRead_13c4
    mr r4, r11
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_DVDLowUnencryptedRead_13c0:
    b lbl_DVDLowUnencryptedRead_13c0
lbl_DVDLowUnencryptedRead_13c4:
    lwz r7, 0xc(r8)
    addis r0, r7, 0x115
    cmplwi r0, 0xdaed
    beq lbl_DVDLowUnencryptedRead_13e4
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_DVDLowUnencryptedRead_13e0:
    b lbl_DVDLowUnencryptedRead_13e0
lbl_DVDLowUnencryptedRead_13e4:
    stwx r6, r9, r10
    addi r0, r11, 0x1
    cmpwi r0, 0x4
    stw r12, 0x4(r8)
    stb r12, 0x8(r8)
    stw r0, lbl_8087FDC0
    blt lbl_DVDLowUnencryptedRead_1408
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_DVDLowUnencryptedRead_1408:
    lwz r6, lbl_8087FDBC
    lis r7, lbl_807D12E0@ha
    stw r4, lbl_8087FDCC
    slwi r8, r11, 5
    addi r0, r6, 0x1
    addi r7, r7, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r7, r8
    blt lbl_DVDLowUnencryptedRead_1438
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_DVDLowUnencryptedRead_1438:
    lwz r6, lbl_8087FDD4
    lis r9, fn_80600680@ha
    slwi r0, r0, 5
    li r7, 0x8d
    stbx r7, r6, r0
    mr r7, r3
    mr r8, r4
    mr r10, r30
    lwz r0, lbl_8087FDBC
    addi r9, r9, fn_80600680@l
    lwz r3, lbl_8087FDD4
    li r6, 0x20
    slwi r0, r0, 5
    add r3, r3, r0
    stw r4, 0x4(r3)
    li r4, 0x8d
    lwz r0, lbl_8087FDBC
    lwz r3, lbl_8087FDD4
    slwi r0, r0, 5
    add r3, r3, r0
    stw r5, 0x8(r3)
    lwz r0, lbl_8087FDBC
    lwz r5, lbl_8087FDD4
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_DVDLowUnencryptedRead_14cc
    mr r4, r3
    addi r3, r31, 0x6a8
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_DVDLowUnencryptedRead_14d0
lbl_DVDLowUnencryptedRead_14cc:
    li r3, 0x1
lbl_DVDLowUnencryptedRead_14d0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806018F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, lbl_807D12E0@ha
    li r11, 0x1
    stw r0, 0x14(r1)
    addi r8, r8, lbl_807D12E0@l
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r10, lbl_8087FDC0
    stb r11, lbl_8087FDB8
    slwi r9, r10, 5
    add r7, r8, r9
    lbz r6, 0x8(r7)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806018F0_1564
    mr r4, r10
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_806018F0_1560:
    b lbl_fn_806018F0_1560
lbl_fn_806018F0_1564:
    lwz r6, 0xc(r7)
    addis r0, r6, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_806018F0_1584
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_806018F0_1580:
    b lbl_fn_806018F0_1580
lbl_fn_806018F0_1584:
    stwx r5, r8, r9
    addi r0, r10, 0x1
    cmpwi r0, 0x4
    stw r11, 0x4(r7)
    stb r11, 0x8(r7)
    stw r0, lbl_8087FDC0
    blt lbl_fn_806018F0_15a8
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_806018F0_15a8:
    lwz r5, lbl_8087FDBC
    lis r6, lbl_807D12E0@ha
    slwi r7, r10, 5
    addi r0, r5, 0x1
    addi r6, r6, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r6, r7
    blt lbl_fn_806018F0_15d4
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_806018F0_15d4:
    lwz r5, lbl_8087FDD4
    lis r7, lbl_807D1360@ha
    slwi r0, r0, 5
    li r6, 0xe3
    stbx r6, r5, r0
    lis r9, fn_80600680@ha
    mr r10, r30
    addi r7, r7, lbl_807D1360@l
    lwz r0, lbl_8087FDBC
    addi r9, r9, fn_80600680@l
    lwz r5, lbl_8087FDD4
    li r6, 0x20
    slwi r0, r0, 5
    li r8, 0x20
    add r5, r5, r0
    stw r3, 0x4(r5)
    lwz r0, lbl_8087FDBC
    lwz r3, lbl_8087FDD4
    slwi r0, r0, 5
    add r3, r3, r0
    stw r4, 0x8(r3)
    li r4, 0xe3
    lwz r0, lbl_8087FDBC
    lwz r5, lbl_8087FDD4
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_806018F0_166c
    mr r4, r3
    addi r3, r31, 0x6e8
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_806018F0_1670
lbl_fn_806018F0_166c:
    li r3, 0x1
lbl_fn_806018F0_1670:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80601A90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807D12E0@ha
    li r10, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807D12E0@l
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r9, lbl_8087FDC0
    stb r10, lbl_8087FDB8
    slwi r8, r9, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80601A90_1704
    mr r4, r9
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80601A90_1700:
    b lbl_fn_80601A90_1700
lbl_fn_80601A90_1704:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80601A90_1724
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80601A90_1720:
    b lbl_fn_80601A90_1720
lbl_fn_80601A90_1724:
    stwx r4, r7, r8
    addi r0, r9, 0x1
    cmpwi r0, 0x4
    stw r10, 0x4(r6)
    stb r10, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80601A90_1748
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80601A90_1748:
    lwz r4, lbl_8087FDBC
    lis r5, lbl_807D12E0@ha
    slwi r6, r9, 5
    addi r0, r4, 0x1
    addi r5, r5, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r5, r6
    blt lbl_fn_80601A90_1774
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80601A90_1774:
    lwz r4, lbl_8087FDD4
    lis r9, fn_80600680@ha
    slwi r0, r0, 5
    li r5, 0x12
    stbx r5, r4, r0
    mr r7, r3
    mr r10, r30
    addi r9, r9, fn_80600680@l
    lwz r0, lbl_8087FDBC
    li r4, 0x12
    lwz r5, lbl_8087FDD4
    li r6, 0x20
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_80601A90_17e0
    mr r4, r3
    addi r3, r31, 0x768
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80601A90_17e4
lbl_fn_80601A90_17e0:
    li r3, 0x1
lbl_fn_80601A90_17e4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void DVDLowRequestError(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807D12E0@ha
    li r9, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807D12E0@l
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r4, lbl_8087FDC0
    stb r9, lbl_8087FDB8
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_DVDLowRequestError_186c
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
lbl_DVDLowRequestError_1868:
    b lbl_DVDLowRequestError_1868
lbl_DVDLowRequestError_186c:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_DVDLowRequestError_188c
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_DVDLowRequestError_1888:
    b lbl_DVDLowRequestError_1888
lbl_DVDLowRequestError_188c:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_DVDLowRequestError_18b0
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_DVDLowRequestError_18b0:
    lwz r3, lbl_8087FDBC
    lis r5, lbl_807D12E0@ha
    slwi r4, r4, 5
    addi r0, r3, 0x1
    addi r5, r5, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r5, r4
    blt lbl_DVDLowRequestError_18dc
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_DVDLowRequestError_18dc:
    lwz r3, lbl_8087FDD4
    lis r7, lbl_807D1360@ha
    slwi r0, r0, 5
    li r4, 0xe0
    stbx r4, r3, r0
    lis r9, fn_80600680@ha
    mr r10, r30
    addi r7, r7, lbl_807D1360@l
    lwz r0, lbl_8087FDBC
    addi r9, r9, fn_80600680@l
    lwz r5, lbl_8087FDD4
    li r4, 0xe0
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    li r6, 0x20
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_DVDLowRequestError_194c
    mr r4, r3
    addi r3, r31, 0x7a0
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_DVDLowRequestError_1950
lbl_DVDLowRequestError_194c:
    li r3, 0x1
lbl_DVDLowRequestError_1950:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80601D70(void)
{
    nofralloc
    stw r3, lbl_8087FDC8
    li r3, 0x1
    blr
}

asm void fn_80601D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807D12E0@ha
    li r9, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807D12E0@l
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r4, lbl_8087FDC0
    stb r9, lbl_8087FDB8
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80601D80_19ec
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
lbl_fn_80601D80_19e8:
    b lbl_fn_80601D80_19e8
lbl_fn_80601D80_19ec:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80601D80_1a0c
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80601D80_1a08:
    b lbl_fn_80601D80_1a08
lbl_fn_80601D80_1a0c:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80601D80_1a30
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80601D80_1a30:
    lwz r3, lbl_8087FDBC
    lis r5, lbl_807D12E0@ha
    slwi r4, r4, 5
    addi r0, r3, 0x1
    addi r5, r5, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r5, r4
    blt lbl_fn_80601D80_1a5c
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80601D80_1a5c:
    lwz r3, lbl_8087FDD4
    lis r9, fn_80600680@ha
    slwi r0, r0, 5
    li r4, 0x8a
    stbx r4, r3, r0
    mr r10, r30
    addi r9, r9, fn_80600680@l
    li r4, 0x8a
    lwz r0, lbl_8087FDBC
    li r6, 0x20
    lwz r3, lbl_8087FDD4
    li r7, 0x0
    slwi r0, r0, 5
    lwz r5, lbl_8087FDC8
    add r3, r3, r0
    li r8, 0x0
    stw r5, 0x4(r3)
    lwz r0, lbl_8087FDBC
    lwz r5, lbl_8087FDD4
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_80601D80_1ae0
    mr r4, r3
    addi r3, r31, 0x860
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80601D80_1ae4
lbl_fn_80601D80_1ae0:
    li r3, 0x1
lbl_fn_80601D80_1ae4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80601F00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, lbl_807D12E0@ha
    li r11, 0x1
    stw r0, 0x14(r1)
    addi r8, r8, lbl_807D12E0@l
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r10, lbl_8087FDC0
    stb r11, lbl_8087FDB8
    slwi r9, r10, 5
    add r7, r8, r9
    lbz r6, 0x8(r7)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80601F00_1b74
    mr r4, r10
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80601F00_1b70:
    b lbl_fn_80601F00_1b70
lbl_fn_80601F00_1b74:
    lwz r6, 0xc(r7)
    addis r0, r6, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80601F00_1b94
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80601F00_1b90:
    b lbl_fn_80601F00_1b90
lbl_fn_80601F00_1b94:
    stwx r5, r8, r9
    addi r0, r10, 0x1
    cmpwi r0, 0x4
    stw r11, 0x4(r7)
    stb r11, 0x8(r7)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80601F00_1bb8
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80601F00_1bb8:
    lwz r5, lbl_8087FDBC
    lis r6, lbl_807D12E0@ha
    slwi r7, r10, 5
    addi r0, r5, 0x1
    addi r6, r6, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r6, r7
    blt lbl_fn_80601F00_1be4
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80601F00_1be4:
    lwz r5, lbl_8087FDD4
    lis r7, lbl_807D1360@ha
    slwi r0, r0, 5
    li r6, 0xe4
    stbx r6, r5, r0
    lis r9, fn_80600680@ha
    mr r10, r30
    addi r7, r7, lbl_807D1360@l
    lwz r0, lbl_8087FDBC
    addi r9, r9, fn_80600680@l
    lwz r5, lbl_8087FDD4
    li r6, 0x20
    slwi r0, r0, 5
    li r8, 0x20
    add r5, r5, r0
    stw r3, 0x4(r5)
    lwz r0, lbl_8087FDBC
    lwz r3, lbl_8087FDD4
    slwi r0, r0, 5
    add r3, r3, r0
    stw r4, 0x8(r3)
    li r4, 0xe4
    lwz r0, lbl_8087FDBC
    lwz r5, lbl_8087FDD4
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_80601F00_1c7c
    mr r4, r3
    addi r3, r31, 0x898
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80601F00_1c80
lbl_fn_80601F00_1c7c:
    li r3, 0x1
lbl_fn_80601F00_1c80:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void DVDLowReportKey(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r9, lbl_807D12E0@ha
    li r12, 0x1
    stw r0, 0x14(r1)
    addi r9, r9, lbl_807D12E0@l
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r11, lbl_8087FDC0
    stb r12, lbl_8087FDB8
    slwi r10, r11, 5
    add r8, r9, r10
    lbz r7, 0x8(r8)
    neg r0, r7
    or r0, r0, r7
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_DVDLowReportKey_1d14
    mr r4, r11
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_DVDLowReportKey_1d10:
    b lbl_DVDLowReportKey_1d10
lbl_DVDLowReportKey_1d14:
    lwz r7, 0xc(r8)
    addis r0, r7, 0x115
    cmplwi r0, 0xdaed
    beq lbl_DVDLowReportKey_1d34
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_DVDLowReportKey_1d30:
    b lbl_DVDLowReportKey_1d30
lbl_DVDLowReportKey_1d34:
    stwx r6, r9, r10
    addi r0, r11, 0x1
    cmpwi r0, 0x4
    stw r12, 0x4(r8)
    stb r12, 0x8(r8)
    stw r0, lbl_8087FDC0
    blt lbl_DVDLowReportKey_1d58
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_DVDLowReportKey_1d58:
    lwz r6, lbl_8087FDBC
    lis r7, lbl_807D12E0@ha
    slwi r8, r11, 5
    addi r0, r6, 0x1
    addi r7, r7, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r7, r8
    blt lbl_DVDLowReportKey_1d84
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_DVDLowReportKey_1d84:
    lwz r6, lbl_8087FDD4
    srwi r11, r4, 16
    slwi r0, r0, 5
    li r4, 0xa4
    stbx r4, r6, r0
    mr r7, r3
    lis r9, fn_80600680@ha
    mr r10, r30
    lwz r0, lbl_8087FDBC
    addi r9, r9, fn_80600680@l
    lwz r3, lbl_8087FDD4
    li r4, 0xa4
    slwi r0, r0, 5
    li r6, 0x20
    add r3, r3, r0
    li r8, 0x20
    stw r11, 0x4(r3)
    lwz r0, lbl_8087FDBC
    lwz r3, lbl_8087FDD4
    slwi r0, r0, 5
    add r3, r3, r0
    stw r5, 0x8(r3)
    lwz r0, lbl_8087FDBC
    lwz r5, lbl_8087FDD4
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_DVDLowReportKey_1e1c
    mr r4, r3
    addi r3, r31, 0xa98
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_DVDLowReportKey_1e20
lbl_DVDLowReportKey_1e1c:
    li r3, 0x1
lbl_DVDLowReportKey_1e20:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80602240(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807D12E0@ha
    li r10, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807D12E0@l
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r9, lbl_8087FDC0
    stb r10, lbl_8087FDB8
    slwi r8, r9, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80602240_1eb4
    mr r4, r9
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80602240_1eb0:
    b lbl_fn_80602240_1eb0
lbl_fn_80602240_1eb4:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80602240_1ed4
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80602240_1ed0:
    b lbl_fn_80602240_1ed0
lbl_fn_80602240_1ed4:
    stwx r4, r7, r8
    addi r0, r9, 0x1
    cmpwi r0, 0x4
    stw r10, 0x4(r6)
    stb r10, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80602240_1ef8
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80602240_1ef8:
    lwz r4, lbl_8087FDBC
    lis r5, lbl_807D12E0@ha
    slwi r6, r9, 5
    addi r0, r4, 0x1
    addi r5, r5, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r5, r6
    blt lbl_fn_80602240_1f24
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80602240_1f24:
    lwz r4, lbl_8087FDD4
    lis r9, fn_80600680@ha
    slwi r0, r0, 5
    li r5, 0xdd
    stbx r5, r4, r0
    extrwi r5, r3, 2, 14
    mr r10, r30
    addi r9, r9, fn_80600680@l
    lwz r0, lbl_8087FDBC
    li r4, 0xdd
    lwz r3, lbl_8087FDD4
    li r6, 0x20
    slwi r0, r0, 5
    li r7, 0x0
    add r3, r3, r0
    li r8, 0x0
    stw r5, 0x4(r3)
    lwz r0, lbl_8087FDBC
    lwz r5, lbl_8087FDD4
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_80602240_1fa8
    mr r4, r3
    addi r3, r31, 0xc4c
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80602240_1fac
lbl_fn_80602240_1fa8:
    li r3, 0x1
lbl_fn_80602240_1fac:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806023D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    clrlwi. r0, r3, 27
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    beq lbl_fn_806023D0_2008
    addi r3, r31, 0xc8c
    crclr 6
    bl OSReport
    li r3, 0x0
    b lbl_fn_806023D0_2168
lbl_fn_806023D0_2008:
    lwz r11, lbl_8087FDC0
    lis r9, lbl_807D12E0@ha
    li r12, 0x1
    stb r12, lbl_8087FDB8
    slwi r10, r11, 5
    addi r9, r9, lbl_807D12E0@l
    add r8, r9, r10
    lbz r7, 0x8(r8)
    neg r0, r7
    or r0, r0, r7
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806023D0_205c
    mr r4, r11
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
lbl_fn_806023D0_2058:
    b lbl_fn_806023D0_2058
lbl_fn_806023D0_205c:
    lwz r7, 0xc(r8)
    addis r0, r7, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_806023D0_207c
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_806023D0_2078:
    b lbl_fn_806023D0_2078
lbl_fn_806023D0_207c:
    stwx r6, r9, r10
    addi r0, r11, 0x1
    cmpwi r0, 0x4
    stw r12, 0x4(r8)
    stb r12, 0x8(r8)
    stw r0, lbl_8087FDC0
    blt lbl_fn_806023D0_20a0
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_806023D0_20a0:
    lwz r6, lbl_8087FDBC
    lis r7, lbl_807D12E0@ha
    stw r4, lbl_8087FDCC
    slwi r8, r11, 5
    addi r0, r6, 0x1
    addi r7, r7, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r7, r8
    blt lbl_fn_806023D0_20d0
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_806023D0_20d0:
    lwz r6, lbl_8087FDD4
    lis r9, fn_80600680@ha
    slwi r0, r0, 5
    li r7, 0x71
    stbx r7, r6, r0
    mr r7, r3
    mr r8, r4
    mr r10, r30
    lwz r0, lbl_8087FDBC
    addi r9, r9, fn_80600680@l
    lwz r3, lbl_8087FDD4
    li r6, 0x20
    slwi r0, r0, 5
    add r3, r3, r0
    stw r4, 0x4(r3)
    li r4, 0x71
    lwz r0, lbl_8087FDBC
    lwz r3, lbl_8087FDD4
    slwi r0, r0, 5
    add r3, r3, r0
    stw r5, 0x8(r3)
    lwz r0, lbl_8087FDBC
    lwz r5, lbl_8087FDD4
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_806023D0_2164
    mr r4, r3
    addi r3, r31, 0xccc
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_806023D0_2168
lbl_fn_806023D0_2164:
    li r3, 0x1
lbl_fn_806023D0_2168:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80602580(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807D12E0@ha
    li r10, 0x1
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807D12E0@l
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r9, lbl_8087FDC0
    stb r10, lbl_8087FDB8
    slwi r8, r9, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80602580_21f4
    mr r4, r9
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80602580_21f0:
    b lbl_fn_80602580_21f0
lbl_fn_80602580_21f4:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80602580_2214
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80602580_2210:
    b lbl_fn_80602580_2210
lbl_fn_80602580_2214:
    stwx r4, r7, r8
    addi r0, r9, 0x1
    cmpwi r0, 0x4
    stw r10, 0x4(r6)
    stb r10, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80602580_2238
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80602580_2238:
    lwz r4, lbl_8087FDBC
    lis r5, lbl_807D12E0@ha
    slwi r6, r9, 5
    addi r0, r4, 0x1
    addi r5, r5, lbl_807D12E0@l
    cmpwi r0, 0x4
    stw r0, lbl_8087FDBC
    add r30, r5, r6
    blt lbl_fn_80602580_2264
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80602580_2264:
    lwz r4, lbl_8087FDD4
    lis r9, fn_80600680@ha
    slwi r0, r0, 5
    li r5, 0xab
    stbx r5, r4, r0
    mr r10, r30
    addi r9, r9, fn_80600680@l
    li r4, 0xab
    lwz r0, lbl_8087FDBC
    li r6, 0x20
    lwz r5, lbl_8087FDD4
    li r7, 0x0
    slwi r0, r0, 5
    li r8, 0x0
    add r5, r5, r0
    stw r3, 0x4(r5)
    lwz r0, lbl_8087FDBC
    lwz r5, lbl_8087FDD4
    slwi r0, r0, 5
    lwz r3, lbl_8087E7F8
    add r5, r5, r0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_80602580_22e4
    mr r4, r3
    addi r3, r31, 0xd00
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80602580_22e8
lbl_fn_80602580_22e4:
    li r3, 0x1
lbl_fn_80602580_22e8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80602700(void)
{
    nofralloc
    lis r3, lbl_807D1360@ha
    addi r3, r3, lbl_807D1360@l
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80602710(void)
{
    nofralloc
    lis r3, lbl_807D1460@ha
    lwz r3, lbl_807D1460@l(r3)
    blr
}

asm void fn_80602720(void)
{
    nofralloc
    lis r3, lbl_807D1480@ha
    lwz r3, lbl_807D1480@l(r3)
    blr
}

asm void fn_80602730(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r4, lbl_8087FDBC
    addi r0, r4, 0x1
    stw r0, lbl_8087FDBC
    cmpwi r0, 0x4
    blt lbl_fn_80602730_2368
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80602730_2368:
    lwz r4, lbl_8087FDD4
    lis r7, lbl_807D12E0@ha
    slwi r0, r0, 5
    li r5, 0x7a
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, lbl_807D12E0@l
    lwz r4, lbl_8087FDC0
    stb r9, lbl_8087FDB8
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80602730_23cc
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80602730_23c8:
    b lbl_fn_80602730_23c8
lbl_fn_80602730_23cc:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80602730_23ec
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80602730_23e8:
    b lbl_fn_80602730_23e8
lbl_fn_80602730_23ec:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80602730_2410
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80602730_2410:
    lwz r0, lbl_8087FDBC
    lis r3, lbl_807D12E0@ha
    slwi r5, r4, 5
    lwz r4, lbl_8087FDD4
    addi r3, r3, lbl_807D12E0@l
    lis r7, lbl_807D1380@ha
    add r30, r3, r5
    slwi r0, r0, 5
    lis r9, fn_80600740@ha
    lwz r3, lbl_8087E7F8
    add r5, r4, r0
    mr r10, r30
    addi r7, r7, lbl_807D1380@l
    addi r9, r9, fn_80600740@l
    li r4, 0x7a
    li r6, 0x20
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_80602730_2480
    mr r4, r3
    addi r3, r31, 0xdb0
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80602730_2484
lbl_fn_80602730_2480:
    li r3, 0x1
lbl_fn_80602730_2484:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806028A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r4, lbl_8087FDBC
    addi r0, r4, 0x1
    stw r0, lbl_8087FDBC
    cmpwi r0, 0x4
    blt lbl_fn_806028A0_24d8
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_806028A0_24d8:
    lwz r4, lbl_8087FDD4
    lis r7, lbl_807D12E0@ha
    slwi r0, r0, 5
    li r5, 0x95
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, lbl_807D12E0@l
    lwz r4, lbl_8087FDC0
    stb r9, lbl_8087FDB8
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806028A0_253c
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_806028A0_2538:
    b lbl_fn_806028A0_2538
lbl_fn_806028A0_253c:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_806028A0_255c
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_806028A0_2558:
    b lbl_fn_806028A0_2558
lbl_fn_806028A0_255c:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_806028A0_2580
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_806028A0_2580:
    lwz r0, lbl_8087FDBC
    lis r3, lbl_807D12E0@ha
    slwi r5, r4, 5
    lwz r4, lbl_8087FDD4
    addi r3, r3, lbl_807D12E0@l
    lis r7, lbl_807D1460@ha
    add r30, r3, r5
    slwi r0, r0, 5
    lis r9, fn_80600680@ha
    lwz r3, lbl_8087E7F8
    add r5, r4, r0
    mr r10, r30
    addi r7, r7, lbl_807D1460@l
    addi r9, r9, fn_80600680@l
    li r4, 0x95
    li r6, 0x20
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_806028A0_25f0
    mr r4, r3
    addi r3, r31, 0xdf4
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_806028A0_25f4
lbl_fn_806028A0_25f0:
    li r3, 0x1
lbl_fn_806028A0_25f4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80602A10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r4, lbl_8087FDBC
    addi r0, r4, 0x1
    stw r0, lbl_8087FDBC
    cmpwi r0, 0x4
    blt lbl_fn_80602A10_2648
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80602A10_2648:
    lwz r4, lbl_8087FDD4
    lis r7, lbl_807D12E0@ha
    slwi r0, r0, 5
    li r5, 0x96
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, lbl_807D12E0@l
    lwz r4, lbl_8087FDC0
    stb r9, lbl_8087FDB8
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80602A10_26ac
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80602A10_26a8:
    b lbl_fn_80602A10_26a8
lbl_fn_80602A10_26ac:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80602A10_26cc
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80602A10_26c8:
    b lbl_fn_80602A10_26c8
lbl_fn_80602A10_26cc:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80602A10_26f0
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80602A10_26f0:
    lwz r0, lbl_8087FDBC
    lis r3, lbl_807D12E0@ha
    slwi r5, r4, 5
    lwz r4, lbl_8087FDD4
    addi r3, r3, lbl_807D12E0@l
    lis r7, lbl_807D1480@ha
    add r30, r3, r5
    slwi r0, r0, 5
    lis r9, fn_80600680@ha
    lwz r3, lbl_8087E7F8
    add r5, r4, r0
    mr r10, r30
    addi r7, r7, lbl_807D1480@l
    addi r9, r9, fn_80600680@l
    li r4, 0x96
    li r6, 0x20
    li r8, 0x20
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_80602A10_2760
    mr r4, r3
    addi r3, r31, 0xe3c
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80602A10_2764
lbl_fn_80602A10_2760:
    li r3, 0x1
lbl_fn_80602A10_2764:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void DVDLowGetImmBufferReg(void)
{
    nofralloc
    lis r3, lbl_807D1360@ha
    lwz r3, lbl_807D1360@l(r3)
    blr
}

asm void DVDLowUnmaskStatusInterrupts(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void DVDLowMaskCoverInterrupt(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80602BB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807AAB08@ha
    addi r31, r31, lbl_807AAB08@l
    stw r30, 0x8(r1)
    lwz r4, lbl_8087FDBC
    addi r0, r4, 0x1
    stw r0, lbl_8087FDBC
    cmpwi r0, 0x4
    blt lbl_fn_80602BB0_27e8
    li r0, 0x0
    stw r0, lbl_8087FDBC
lbl_fn_80602BB0_27e8:
    lwz r4, lbl_8087FDD4
    lis r7, lbl_807D12E0@ha
    slwi r0, r0, 5
    li r5, 0x86
    stbx r5, r4, r0
    li r9, 0x1
    addi r7, r7, lbl_807D12E0@l
    lwz r4, lbl_8087FDC0
    stb r9, lbl_8087FDB8
    slwi r8, r4, 5
    add r6, r7, r8
    lbz r5, 0x8(r6)
    neg r0, r5
    or r0, r0, r5
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80602BB0_284c
    addi r3, r31, 0x240
    crclr 6
    bl OSReport
    addi r3, r31, 0x278
    crclr 6
    bl OSReport
    nop
lbl_fn_80602BB0_2848:
    b lbl_fn_80602BB0_2848
lbl_fn_80602BB0_284c:
    lwz r5, 0xc(r6)
    addis r0, r5, 0x115
    cmplwi r0, 0xdaed
    beq lbl_fn_80602BB0_286c
    addi r3, r31, 0x2a8
    crclr 6
    bl OSReport
lbl_fn_80602BB0_2868:
    b lbl_fn_80602BB0_2868
lbl_fn_80602BB0_286c:
    stwx r3, r7, r8
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    stw r9, 0x4(r6)
    stb r9, 0x8(r6)
    stw r0, lbl_8087FDC0
    blt lbl_fn_80602BB0_2890
    li r0, 0x0
    stw r0, lbl_8087FDC0
lbl_fn_80602BB0_2890:
    lwz r0, lbl_8087FDBC
    lis r3, lbl_807D12E0@ha
    slwi r5, r4, 5
    lwz r4, lbl_8087FDD4
    addi r3, r3, lbl_807D12E0@l
    lis r9, fn_80600680@ha
    add r30, r3, r5
    slwi r0, r0, 5
    add r5, r4, r0
    lwz r3, lbl_8087E7F8
    mr r10, r30
    addi r9, r9, fn_80600680@l
    li r4, 0x86
    li r6, 0x20
    li r7, 0x0
    li r8, 0x0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_fn_80602BB0_28fc
    mr r4, r3
    addi r3, r31, 0xe84
    crclr 6
    bl OSReport
    li r0, 0x0
    stb r0, 0x8(r30)
    li r3, 0x0
    b lbl_fn_80602BB0_2900
lbl_fn_80602BB0_28fc:
    li r3, 0x1
lbl_fn_80602BB0_2900:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80602D20(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80602D30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r31, lbl_807D14A0@ha
    addi r31, r31, lbl_807D14A0@l
    bne lbl_fn_80602D30_2aac
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    ble lbl_fn_80602D30_2978
    subi r0, r4, 0x4
    cmplwi r0, 0x2
    ble lbl_fn_80602D30_2aa0
    cmpwi r4, 0x0
    beq lbl_fn_80602D30_2aa0
    b lbl_fn_80602D30_2ab0
lbl_fn_80602D30_2978:
    lwz r0, lbl_8087E80C
    cmpwi r0, 0x0
    beq lbl_fn_80602D30_2a80
    bl fn_80607230
    bl OSDisableInterrupts
    lwz r5, lbl_8087FE20
    li r0, 0x0
    lwz r4, lbl_8087FE10
    mr r30, r3
    addi r28, r31, 0x78
    addi r29, r31, 0x0
    or r3, r5, r4
    stw r3, lbl_8087FE20
    li r27, -0x1
    stw r0, lbl_8087FE10
    lwz r4, lbl_8087FE28
    lwz r5, lbl_8087FE2C
    lwz r0, lbl_8087FE18
    lwz r3, lbl_8087FE1C
    or r0, r4, r0
    or r3, r5, r3
    stw r3, lbl_8087FE2C
    stw r0, lbl_8087FE28
    b lbl_fn_80602D30_2a38
lbl_fn_80602D30_29d8:
    lwz r0, lbl_8087FE18
    lwz r3, lbl_8087FE1C
    cntlzw r4, r0
    cmpwi r4, 0x20
    and r0, r3, r27
    bge lbl_fn_80602D30_29f4
    b lbl_fn_80602D30_29fc
lbl_fn_80602D30_29f4:
    cntlzw r3, r0
    addi r4, r3, 0x20
lbl_fn_80602D30_29fc:
    slwi r3, r4, 1
    subfic r5, r4, 0x3f
    lhzx r0, r28, r3
    li r4, 0x1
    sthx r0, r29, r3
    li r3, 0x0
    bl fn_80696324
    lwz r0, lbl_8087FE18
    nor r5, r3, r3
    lwz r3, lbl_8087FE1C
    nor r4, r4, r4
    and r0, r0, r5
    and r3, r3, r4
    stw r3, lbl_8087FE1C
    stw r0, lbl_8087FE18
lbl_fn_80602D30_2a38:
    lwz r0, lbl_8087FE18
    lwz r3, lbl_8087FE1C
    or. r0, r3, r0
    bne lbl_fn_80602D30_29d8
    addi r3, r31, 0xf0
    li r4, 0x1
    lwz r0, 0x30(r3)
    mr r3, r30
    stw r4, lbl_8087FE88
    stw r4, lbl_8087FE84
    stw r0, lbl_8087FE4C
    bl OSRestoreInterrupts
    lwz r3, lbl_8087FE8C
    li r0, 0x0
    stw r3, lbl_8087FE38
    li r3, 0x0
    stw r0, lbl_8087E80C
    b lbl_fn_80602D30_2ab0
lbl_fn_80602D30_2a80:
    lwz r3, lbl_8087FE38
    lwz r0, lbl_8087FE8C
    cmplw r3, r0
    bne lbl_fn_80602D30_2a98
    li r3, 0x0
    b lbl_fn_80602D30_2ab0
lbl_fn_80602D30_2a98:
    li r3, 0x1
    b lbl_fn_80602D30_2ab0
lbl_fn_80602D30_2aa0:
    bl fn_806070F0
    li r3, 0x1
    b lbl_fn_80602D30_2ab0
lbl_fn_80602D30_2aac:
    li r3, 0x1
lbl_fn_80602D30_2ab0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
