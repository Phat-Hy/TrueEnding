#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCInvalidateRange(void);
extern void DVDLowInit(void);
extern void DVDLowUnencryptedRead(void);
extern void ESP_CloseLib(void);
extern void ESP_DiGetTicketView(void);
extern void ESP_DiGetTmd(void);
extern void ESP_InitLib(void);
extern void ICFlashInvalidate(void);
extern void OSAllocFromMEM1ArenaLo(void);
extern void OSPlayTimeIsLimited(void);
extern void OSReport(const char* msg, ...);
extern void OSSetArenaHi(void);
extern void OSSetArenaLo(void);
extern void __OSGetPlayTime(void);
extern void __OSInitIPCBuffer(void);
extern void __OSInitMemoryProtection(void);
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void fn_805BFB70(void);
extern void fn_805BFC10(void);
extern void fn_805ED1C0(void);
extern void fn_805F3C90(void);
extern void fn_805F3D40(void);
extern void fn_805F7E30(void);
extern void fn_80600800(void);
extern void fn_80600AC0(void);
extern void fn_80600C50(void);
extern void fn_80600EC0(void);
extern void fn_806015E0(void);
extern void fn_8061BCF0(void);
extern void fn_8061C2A0(void);
extern void fn_80686A48(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8079C958[];
extern u8 lbl_807CB300[];

/* Small data declarations */
extern u32 lbl_8087FBF8;
extern u32 lbl_8087FC00;
extern u32 lbl_8087FC08;

/* Function declarations */
void fn_805EE820(void);
void fn_805EE9A0(void);
void fn_805EEB00(void);
void fn_805EECD0(void);
void fn_805EED10(void);
void __OSGetExecParams(void);
void fn_805EED50(void);
void fn_805EED60(void);
void __OSLaunchMenu(void);

asm void fn_805EE820(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r4
    mr r29, r5
    mr r30, r3
    li r4, 0x0
    li r5, 0x2000
    bl memset
    cmpwi r25, 0x0
    bne lbl_fn_805EE820_00000040
    li r0, 0x0
    stw r0, 0x8(r30)
    b lbl_fn_805EE820_00000164
lbl_fn_805EE820_00000040:
    slwi r0, r25, 2
    mr r31, r25
    addi r26, r30, 0x2000
    add r28, r29, r0
    b lbl_fn_805EE820_0000007C
lbl_fn_805EE820_00000054:
    lwz r27, 0x0(r28)
    mr r3, r27
    bl strlen
    addi r0, r3, 0x1
    mr r4, r27
    subf r26, r0, r26
    mr r3, r26
    bl strcpy
    subf r0, r30, r26
    stw r0, 0x0(r28)
lbl_fn_805EE820_0000007C:
    subic. r25, r25, 0x1
    subi r28, r28, 0x4
    bge lbl_fn_805EE820_00000054
    addic. r3, r31, 0x1
    subf r0, r30, r26
    clrrwi r4, r0, 2
    li r7, 0x0
    add r6, r30, r4
    slwi r0, r3, 2
    subf r6, r0, r6
    beq lbl_fn_805EE820_00000154
    cmplwi r3, 0x8
    subi r3, r31, 0x7
    ble lbl_fn_805EE820_00000120
    addi r0, r3, 0x7
    mr r4, r29
    srwi r0, r0, 3
    mr r5, r6
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_805EE820_00000120
lbl_fn_805EE820_000000D0:
    lwz r0, 0x0(r4)
    addi r7, r7, 0x8
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x1c(r4)
    addi r4, r4, 0x20
    stw r0, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_fn_805EE820_000000D0
lbl_fn_805EE820_00000120:
    addi r3, r31, 0x1
    slwi r5, r7, 2
    subf r0, r7, r3
    add r4, r29, r5
    add r5, r6, r5
    mtctr r0
    cmplw r7, r3
    bge lbl_fn_805EE820_00000154
lbl_fn_805EE820_00000140:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_fn_805EE820_00000140
lbl_fn_805EE820_00000154:
    stw r31, -0x4(r6)
    subi r0, r6, 0x4
    subf r0, r30, r0
    stw r0, 0x8(r30)
lbl_fn_805EE820_00000164:
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805EE9A0(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_805EE9A0_000002D0
    li r6, 0x4
    li r0, 0x2
    b lbl_fn_805EE9A0_000002A8
    nop
lbl_fn_805EE9A0_00000198:
    li r10, 0x0
    mtctr r0
lbl_fn_805EE9A0_000001A0:
    clrlwi. r9, r10, 31
    li r8, 0xf0
    beq lbl_fn_805EE9A0_000001B0
    li r8, 0xf
lbl_fn_805EE9A0_000001B0:
    neg r5, r9
    lbz r7, 0x0(r4)
    or r5, r5, r9
    srawi r5, r5, 31
    extsb r7, r7
    andc r5, r6, r5
    and r7, r7, r8
    clrlwi r5, r5, 24
    sraw. r5, r7, r5
    blt lbl_fn_805EE9A0_000001EC
    cmpwi r5, 0xa
    bge lbl_fn_805EE9A0_000001EC
    addi r5, r5, 0x30
    stb r5, 0x0(r3)
    b lbl_fn_805EE9A0_00000210
lbl_fn_805EE9A0_000001EC:
    cmpwi r5, 0xa
    blt lbl_fn_805EE9A0_00000208
    cmpwi r5, 0x10
    bge lbl_fn_805EE9A0_00000208
    addi r5, r5, 0x57
    stb r5, 0x0(r3)
    b lbl_fn_805EE9A0_00000210
lbl_fn_805EE9A0_00000208:
    li r3, 0x0
    blr
lbl_fn_805EE9A0_00000210:
    cmpwi r9, 0x0
    beq lbl_fn_805EE9A0_0000021C
    addi r4, r4, 0x1
lbl_fn_805EE9A0_0000021C:
    addi r10, r10, 0x1
    li r8, 0xf0
    clrlwi. r9, r10, 31
    beq lbl_fn_805EE9A0_00000230
    li r8, 0xf
lbl_fn_805EE9A0_00000230:
    neg r5, r9
    lbz r7, 0x0(r4)
    or r5, r5, r9
    srawi r5, r5, 31
    extsb r7, r7
    andc r5, r6, r5
    and r7, r7, r8
    clrlwi r5, r5, 24
    sraw. r5, r7, r5
    blt lbl_fn_805EE9A0_0000026C
    cmpwi r5, 0xa
    bge lbl_fn_805EE9A0_0000026C
    addi r5, r5, 0x30
    stb r5, 0x1(r3)
    b lbl_fn_805EE9A0_00000290
lbl_fn_805EE9A0_0000026C:
    cmpwi r5, 0xa
    blt lbl_fn_805EE9A0_00000288
    cmpwi r5, 0x10
    bge lbl_fn_805EE9A0_00000288
    addi r5, r5, 0x57
    stb r5, 0x1(r3)
    b lbl_fn_805EE9A0_00000290
lbl_fn_805EE9A0_00000288:
    li r3, 0x0
    blr
lbl_fn_805EE9A0_00000290:
    cmpwi r9, 0x0
    addi r3, r3, 0x2
    beq lbl_fn_805EE9A0_000002A0
    addi r4, r4, 0x1
lbl_fn_805EE9A0_000002A0:
    addi r10, r10, 0x1
    bdnz lbl_fn_805EE9A0_000001A0
lbl_fn_805EE9A0_000002A8:
    lbz r5, 0x0(r4)
    extsb. r5, r5
    bne lbl_fn_805EE9A0_00000198
    lbz r5, 0x1(r4)
    extsb. r5, r5
    bne lbl_fn_805EE9A0_00000198
    li r0, 0x0
    stb r0, 0x0(r3)
    li r3, 0x1
    blr
lbl_fn_805EE9A0_000002D0:
    li r3, 0x0
    blr
}

asm void fn_805EEB00(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r30, r3
    li r4, 0x0
    li r5, 0x2000
    bl memset
    cmpwi r27, 0x0
    bne lbl_fn_805EEB00_00000320
    li r0, 0x0
    stw r0, 0x8(r30)
    b lbl_fn_805EEB00_00000490
lbl_fn_805EEB00_00000320:
    slwi r0, r27, 2
    mr r31, r27
    addi r29, r30, 0x2000
    add r26, r28, r0
    b lbl_fn_805EEB00_000003A8
lbl_fn_805EEB00_00000334:
    cmpwi r27, 0x2
    blt lbl_fn_805EEB00_00000350
    srwi r3, r27, 31
    clrlwi r0, r27, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    beq lbl_fn_805EEB00_0000037C
lbl_fn_805EEB00_00000350:
    lwz r25, 0x0(r26)
    mr r3, r25
    bl strlen
    addi r0, r3, 0x1
    mr r4, r25
    subf r29, r0, r29
    mr r3, r29
    bl strcpy
    subf r0, r30, r29
    stw r0, 0x0(r26)
    b lbl_fn_805EEB00_000003A8
lbl_fn_805EEB00_0000037C:
    lwz r25, 0x0(r26)
    mr r3, r25
    bl fn_80686A48
    slwi r3, r3, 2
    mr r4, r25
    addi r0, r3, 0x1
    subf r29, r0, r29
    mr r3, r29
    bl fn_805EE9A0
    subf r0, r30, r29
    stw r0, 0x0(r26)
lbl_fn_805EEB00_000003A8:
    subic. r27, r27, 0x1
    subi r26, r26, 0x4
    bge lbl_fn_805EEB00_00000334
    addic. r3, r31, 0x1
    subf r0, r30, r29
    clrrwi r4, r0, 2
    li r7, 0x0
    add r6, r30, r4
    slwi r0, r3, 2
    subf r6, r0, r6
    beq lbl_fn_805EEB00_00000480
    cmplwi r3, 0x8
    subi r3, r31, 0x7
    ble lbl_fn_805EEB00_0000044C
    addi r0, r3, 0x7
    mr r4, r28
    srwi r0, r0, 3
    mr r5, r6
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_805EEB00_0000044C
lbl_fn_805EEB00_000003FC:
    lwz r0, 0x0(r4)
    addi r7, r7, 0x8
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x1c(r4)
    addi r4, r4, 0x20
    stw r0, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_fn_805EEB00_000003FC
lbl_fn_805EEB00_0000044C:
    addi r3, r31, 0x1
    slwi r5, r7, 2
    subf r0, r7, r3
    add r4, r28, r5
    add r5, r6, r5
    mtctr r0
    cmplw r7, r3
    bge lbl_fn_805EEB00_00000480
lbl_fn_805EEB00_0000046C:
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_fn_805EEB00_0000046C
lbl_fn_805EEB00_00000480:
    stw r31, -0x4(r6)
    subi r0, r6, 0x4
    subf r0, r30, r0
    stw r0, 0x8(r30)
lbl_fn_805EEB00_00000490:
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805EECD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl ICFlashInvalidate
    sync
    isync
    mtctr r31
    bctr
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805EED10(void)
{
    nofralloc
    li r0, 0x1
    stw r0, lbl_8087FC08
    blr
}

asm void __OSGetExecParams(void)
{
    nofralloc
    lis r5, 0x8000
    lwz r4, 0x30f0(r5)
    cmplw r4, r5
    blt lbl___OSGetExecParams_00000518
    li r5, 0x1c
    b memcpy
lbl___OSGetExecParams_00000518:
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_805EED50(void)
{
    nofralloc
    stw r3, lbl_8087FC00
    blr
}

asm void fn_805EED60(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    lis r30, lbl_8079C958@ha
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x14(r1)
    addi r30, r30, lbl_8079C958@l
    li r31, -0x1
    stw r0, 0x10(r1)
    li r3, 0x20
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    mr r27, r3
    li r3, 0x800
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    mr r28, r3
    li r3, 0x4a00
    li r4, 0x40
    bl OSAllocFromMEM1ArenaLo
    mr r25, r3
    li r3, 0xe0
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lis r4, 0x8000
    lwz r5, lbl_8087FBF8
    lwz r0, 0x3194(r4)
    mr r29, r3
    cmplw r5, r0
    bne lbl_fn_805EED60_00000664
    lwz r0, 0x3198(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805EED60_00000664
    bl ESP_InitLib
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_805EED60_000005F0
    mr r4, r29
    li r3, 0x0
    bl ESP_DiGetTicketView
    mr r31, r3
lbl_fn_805EED60_000005F0:
    cmpwi r31, 0x0
    bne lbl_fn_805EED60_00000608
    addi r4, r1, 0x10
    li r3, 0x0
    bl ESP_DiGetTmd
    mr r31, r3
lbl_fn_805EED60_00000608:
    cmpwi r31, 0x0
    bne lbl_fn_805EED60_00000620
    mr r3, r25
    addi r4, r1, 0x10
    bl ESP_DiGetTmd
    mr r31, r3
lbl_fn_805EED60_00000620:
    bl ESP_CloseLib
    bl OSPlayTimeIsLimited
    cmpwi r3, 0x0
    beq lbl_fn_805EED60_00000664
    li r3, 0x0
    li r0, -0x1
    stw r3, 0xc(r1)
    mr r3, r29
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    bl __OSGetPlayTime
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_805EED60_00000664
    bl fn_805F7E30
    bl fn_805F3C90
lbl_fn_805EED60_00000664:
    cmpwi r31, 0x0
    bne lbl_fn_805EED60_00000688
    lis r3, 0x8000
    mr r26, r28
    lwz r0, 0x3194(r3)
    stw r0, 0x4(r28)
    lwz r0, 0x3198(r3)
    stw r0, 0x0(r28)
    b lbl_fn_805EED60_00000A1C
lbl_fn_805EED60_00000688:
    li r0, 0x0
    lis r3, fn_805EED50@ha
    stw r0, lbl_8087FC00
    addi r3, r3, fn_805EED50@l
    bl fn_806015E0
    nop
lbl_fn_805EED60_000006A0:
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x0
    beq lbl_fn_805EED60_000006A0
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x2
    beq lbl_fn_805EED60_000006D4
    bge lbl_fn_805EED60_000006C8
    cmpwi r0, 0x1
    bge lbl_fn_805EED60_0000070C
    b lbl_fn_805EED60_000006FC
lbl_fn_805EED60_000006C8:
    cmpwi r0, 0x10
    beq lbl_fn_805EED60_000006E8
    b lbl_fn_805EED60_000006FC
lbl_fn_805EED60_000006D4:
    addi r3, r30, 0x0
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_0000070C
lbl_fn_805EED60_000006E8:
    addi r3, r30, 0x18
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_0000070C
lbl_fn_805EED60_000006FC:
    addi r3, r30, 0x34
    crclr 6
    bl OSReport
    bl fn_805F3C90
lbl_fn_805EED60_0000070C:
    li r0, 0x0
    lis r6, fn_805EED50@ha
    stw r0, lbl_8087FC00
    mr r3, r27
    addi r6, r6, fn_805EED50@l
    li r4, 0x20
    lis r5, 0x1
    bl DVDLowUnencryptedRead
    nop
lbl_fn_805EED60_00000730:
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x0
    beq lbl_fn_805EED60_00000730
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x2
    beq lbl_fn_805EED60_00000764
    bge lbl_fn_805EED60_00000758
    cmpwi r0, 0x1
    bge lbl_fn_805EED60_0000079C
    b lbl_fn_805EED60_0000078C
lbl_fn_805EED60_00000758:
    cmpwi r0, 0x10
    beq lbl_fn_805EED60_00000778
    b lbl_fn_805EED60_0000078C
lbl_fn_805EED60_00000764:
    addi r3, r30, 0x0
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_0000079C
lbl_fn_805EED60_00000778:
    addi r3, r30, 0x18
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_0000079C
lbl_fn_805EED60_0000078C:
    addi r3, r30, 0x34
    crclr 6
    bl OSReport
    bl fn_805F3C90
lbl_fn_805EED60_0000079C:
    li r0, 0x0
    stw r0, lbl_8087FC00
    lis r6, fn_805EED50@ha
    mr r3, r28
    lwz r5, 0x4(r27)
    addi r6, r6, fn_805EED50@l
    li r4, 0x800
    bl DVDLowUnencryptedRead
    nop
lbl_fn_805EED60_000007C0:
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x0
    beq lbl_fn_805EED60_000007C0
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x2
    beq lbl_fn_805EED60_000007F4
    bge lbl_fn_805EED60_000007E8
    cmpwi r0, 0x1
    bge lbl_fn_805EED60_0000082C
    b lbl_fn_805EED60_0000081C
lbl_fn_805EED60_000007E8:
    cmpwi r0, 0x10
    beq lbl_fn_805EED60_00000808
    b lbl_fn_805EED60_0000081C
lbl_fn_805EED60_000007F4:
    addi r3, r30, 0x0
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_0000082C
lbl_fn_805EED60_00000808:
    addi r3, r30, 0x18
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_0000082C
lbl_fn_805EED60_0000081C:
    addi r3, r30, 0x34
    crclr 6
    bl OSReport
    bl fn_805F3C90
lbl_fn_805EED60_0000082C:
    lwz r4, lbl_8087FBF8
    mr r6, r28
    li r26, 0x0
    li r5, 0x0
    b lbl_fn_805EED60_00000858
lbl_fn_805EED60_00000840:
    lwz r0, 0x4(r6)
    cmplw r0, r4
    bne lbl_fn_805EED60_00000850
    mr r26, r6
lbl_fn_805EED60_00000850:
    addi r6, r6, 0x8
    addi r5, r5, 0x1
lbl_fn_805EED60_00000858:
    lwz r0, 0x0(r27)
    clrlwi r3, r5, 24
    cmplw r3, r0
    blt lbl_fn_805EED60_00000840
    cmpwi r26, 0x0
    bne lbl_fn_805EED60_000008A8
    lwz r4, lbl_8087FBF8
    addi r6, r28, 0x20
    li r5, 0x0
    b lbl_fn_805EED60_00000898
lbl_fn_805EED60_00000880:
    lwz r0, 0x4(r6)
    cmplw r0, r4
    bne lbl_fn_805EED60_00000890
    mr r26, r6
lbl_fn_805EED60_00000890:
    addi r6, r6, 0x8
    addi r5, r5, 0x1
lbl_fn_805EED60_00000898:
    lwz r0, 0x8(r27)
    clrlwi r3, r5, 24
    cmplw r3, r0
    blt lbl_fn_805EED60_00000880
lbl_fn_805EED60_000008A8:
    cmpwi r26, 0x0
    bne lbl_fn_805EED60_000008C0
    addi r3, r30, 0x54
    crclr 6
    bl OSReport
    bl fn_805F3C90
lbl_fn_805EED60_000008C0:
    lis r4, 0x8000
    lwz r0, 0x4(r26)
    stw r0, 0x3194(r4)
    li r0, 0x0
    lwz r3, 0x0(r26)
    stw r3, 0x3198(r4)
    stw r0, lbl_8087FC00
    lbz r0, 0x3187(r4)
    cmplwi r0, 0x80
    bne lbl_fn_805EED60_00000910
    lis r9, fn_805EED50@ha
    lwz r3, 0x0(r26)
    lwz r5, 0x10(r1)
    mr r4, r29
    mr r6, r25
    addi r9, r9, fn_805EED50@l
    li r7, 0x0
    li r8, 0x0
    bl fn_80600EC0
    b lbl_fn_805EED60_00000930
lbl_fn_805EED60_00000910:
    lis r8, fn_805EED50@ha
    lwz r3, 0x0(r26)
    mr r7, r25
    li r4, 0x0
    addi r8, r8, fn_805EED50@l
    li r5, 0x0
    li r6, 0x0
    bl fn_80600C50
lbl_fn_805EED60_00000930:
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x0
    beq lbl_fn_805EED60_00000930
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x2
    beq lbl_fn_805EED60_00000964
    bge lbl_fn_805EED60_00000958
    cmpwi r0, 0x1
    bge lbl_fn_805EED60_0000099C
    b lbl_fn_805EED60_0000098C
lbl_fn_805EED60_00000958:
    cmpwi r0, 0x10
    beq lbl_fn_805EED60_00000978
    b lbl_fn_805EED60_0000098C
lbl_fn_805EED60_00000964:
    addi r3, r30, 0x0
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_0000099C
lbl_fn_805EED60_00000978:
    addi r3, r30, 0x18
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_0000099C
lbl_fn_805EED60_0000098C:
    addi r3, r30, 0x34
    crclr 6
    bl OSReport
    bl fn_805F3C90
lbl_fn_805EED60_0000099C:
    li r0, 0x0
    lis r3, fn_805EED50@ha
    stw r0, lbl_8087FC00
    addi r3, r3, fn_805EED50@l
    bl fn_806015E0
lbl_fn_805EED60_000009B0:
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x0
    beq lbl_fn_805EED60_000009B0
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x2
    beq lbl_fn_805EED60_000009E4
    bge lbl_fn_805EED60_000009D8
    cmpwi r0, 0x1
    bge lbl_fn_805EED60_00000A1C
    b lbl_fn_805EED60_00000A0C
lbl_fn_805EED60_000009D8:
    cmpwi r0, 0x10
    beq lbl_fn_805EED60_000009F8
    b lbl_fn_805EED60_00000A0C
lbl_fn_805EED60_000009E4:
    addi r3, r30, 0x0
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_00000A1C
lbl_fn_805EED60_000009F8:
    addi r3, r30, 0x18
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_00000A1C
lbl_fn_805EED60_00000A0C:
    addi r3, r30, 0x34
    crclr 6
    bl OSReport
    bl fn_805F3C90
lbl_fn_805EED60_00000A1C:
    lwz r23, 0x184(r25)
    lwz r22, 0x188(r25)
    bl ESP_InitLib
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805EED60_00000A4C
    mr r4, r31
    addi r3, r30, 0x84
    li r5, 0x40d
    crclr 6
    bl OSReport
    bl fn_805F3D40
lbl_fn_805EED60_00000A4C:
    mr r4, r22
    mr r3, r23
    addi r6, r1, 0x14
    li r5, 0x0
    bl fn_805BFC10
    lwz r0, 0x14(r1)
    mr r31, r3
    cmplwi r0, 0x1
    bne lbl_fn_805EED60_00000A78
    cmpwi r3, 0x0
    beq lbl_fn_805EED60_00000A90
lbl_fn_805EED60_00000A78:
    mr r4, r31
    addi r3, r30, 0x84
    li r5, 0x416
    crclr 6
    bl OSReport
    bl fn_805F3D40
lbl_fn_805EED60_00000A90:
    lwz r0, 0x14(r1)
    li r4, 0x20
    mulli r3, r0, 0xd8
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    bl OSAllocFromMEM1ArenaLo
    mr r24, r3
    mr r4, r22
    mr r3, r23
    addi r6, r1, 0x14
    mr r5, r24
    bl fn_805BFC10
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805EED60_00000AE4
    mr r4, r31
    addi r3, r30, 0x84
    li r5, 0x41f
    crclr 6
    bl OSReport
    bl fn_805F3D40
lbl_fn_805EED60_00000AE4:
    bl fn_80600800
    lis r5, 0x8000
    li r4, 0x100
    lwz r28, 0x311c(r5)
    addi r3, r5, 0x3100
    lwz r27, 0x3120(r5)
    bl fn_805ED1C0
    mr r4, r22
    mr r3, r23
    mr r5, r24
    bl fn_805BFB70
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805EED60_00000B34
    mr r4, r31
    addi r3, r30, 0x84
    li r5, 0x42f
    crclr 6
    bl OSReport
    bl fn_805F3D40
lbl_fn_805EED60_00000B34:
    bl ESP_CloseLib
    lis r31, 0x8000
    li r4, 0x100
    addi r3, r31, 0x3100
    bl DCInvalidateRange
    lwz r3, 0x311c(r31)
    cmplw r28, r3
    bge lbl_fn_805EED60_00000BA4
    lwz r0, 0x3120(r31)
    subf r0, r0, r3
    subf r0, r0, r28
    stw r0, 0x3120(r31)
    lwz r3, 0x3128(r31)
    lwz r0, 0x311c(r31)
    subf r0, r3, r0
    subf r0, r0, r28
    stw r0, 0x3128(r31)
    lwz r3, 0x3130(r31)
    lwz r0, 0x311c(r31)
    subf r0, r3, r0
    subf r0, r0, r28
    stw r0, 0x3130(r31)
    lwz r3, 0x3134(r31)
    lwz r0, 0x311c(r31)
    subf r0, r3, r0
    subf r0, r0, r28
    stw r0, 0x3134(r31)
    stw r28, 0x311c(r31)
lbl_fn_805EED60_00000BA4:
    lis r3, 0x8000
    lwz r0, 0x3120(r3)
    cmplw r27, r0
    bge lbl_fn_805EED60_00000BB8
    bl __OSInitMemoryProtection
lbl_fn_805EED60_00000BB8:
    bl __OSInitIPCBuffer
    bl fn_8061BCF0
    bl fn_8061C2A0
    bl DVDLowInit
    li r0, 0x0
    lis r3, lbl_807CB300@ha
    lis r4, fn_805EED50@ha
    stw r0, lbl_8087FC00
    addi r3, r3, lbl_807CB300@l
    addi r4, r4, fn_805EED50@l
    bl fn_80600AC0
    nop
lbl_fn_805EED60_00000BE8:
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x0
    beq lbl_fn_805EED60_00000BE8
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x2
    beq lbl_fn_805EED60_00000C1C
    bge lbl_fn_805EED60_00000C10
    cmpwi r0, 0x1
    bge lbl_fn_805EED60_00000C54
    b lbl_fn_805EED60_00000C44
lbl_fn_805EED60_00000C10:
    cmpwi r0, 0x10
    beq lbl_fn_805EED60_00000C30
    b lbl_fn_805EED60_00000C44
lbl_fn_805EED60_00000C1C:
    addi r3, r30, 0x0
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_00000C54
lbl_fn_805EED60_00000C30:
    addi r3, r30, 0x18
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_00000C54
lbl_fn_805EED60_00000C44:
    addi r3, r30, 0x34
    crclr 6
    bl OSReport
    bl fn_805F3C90
lbl_fn_805EED60_00000C54:
    li r0, 0x0
    stw r0, lbl_8087FC00
    lis r3, 0x8000
    lbz r0, 0x3187(r3)
    cmplwi r0, 0x80
    bne lbl_fn_805EED60_00000C94
    lis r9, fn_805EED50@ha
    lwz r3, 0x0(r26)
    lwz r5, 0x10(r1)
    mr r4, r29
    mr r6, r25
    addi r9, r9, fn_805EED50@l
    li r7, 0x0
    li r8, 0x0
    bl fn_80600EC0
    b lbl_fn_805EED60_00000CB8
lbl_fn_805EED60_00000C94:
    lis r8, fn_805EED50@ha
    lwz r3, 0x0(r26)
    mr r7, r25
    li r4, 0x0
    addi r8, r8, fn_805EED50@l
    li r5, 0x0
    li r6, 0x0
    bl fn_80600C50
    nop
lbl_fn_805EED60_00000CB8:
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x0
    beq lbl_fn_805EED60_00000CB8
    lwz r0, lbl_8087FC00
    cmpwi r0, 0x2
    beq lbl_fn_805EED60_00000CEC
    bge lbl_fn_805EED60_00000CE0
    cmpwi r0, 0x1
    bge lbl_fn_805EED60_00000D24
    b lbl_fn_805EED60_00000D14
lbl_fn_805EED60_00000CE0:
    cmpwi r0, 0x10
    beq lbl_fn_805EED60_00000D00
    b lbl_fn_805EED60_00000D14
lbl_fn_805EED60_00000CEC:
    addi r3, r30, 0x0
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_00000D24
lbl_fn_805EED60_00000D00:
    addi r3, r30, 0x18
    crclr 6
    bl OSReport
    bl fn_805F3C90
    b lbl_fn_805EED60_00000D24
lbl_fn_805EED60_00000D14:
    addi r3, r30, 0x34
    crclr 6
    bl OSReport
    bl fn_805F3C90
lbl_fn_805EED60_00000D24:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void __OSLaunchMenu(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x8128
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r0, 0x8(r1)
    bl OSSetArenaLo
    lis r3, 0x812f
    bl OSSetArenaHi
    bl ESP_InitLib
    cmpwi r3, 0x0
    bne lbl___OSLaunchMenu_00000DF4
    addi r6, r1, 0x8
    li r4, 0x2
    li r3, 0x1
    li r5, 0x0
    bl fn_805BFC10
    lwz r0, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl___OSLaunchMenu_00000DF4
    cmpwi r3, 0x0
    beq lbl___OSLaunchMenu_00000DA0
    b lbl___OSLaunchMenu_00000DF4
lbl___OSLaunchMenu_00000DA0:
    mulli r3, r0, 0xd8
    li r4, 0x20
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    bl OSAllocFromMEM1ArenaLo
    mr r31, r3
    addi r6, r1, 0x8
    mr r5, r31
    li r4, 0x2
    li r3, 0x1
    bl fn_805BFC10
    cmpwi r3, 0x0
    bne lbl___OSLaunchMenu_00000DF4
    mr r5, r31
    li r4, 0x2
    li r3, 0x1
    bl fn_805BFB70
    cmpwi r3, 0x0
    bne lbl___OSLaunchMenu_00000DF4
    nop
lbl___OSLaunchMenu_00000DF0:
    b lbl___OSLaunchMenu_00000DF0
lbl___OSLaunchMenu_00000DF4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
