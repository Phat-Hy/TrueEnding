#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DVDInit(void);
extern void ESP_CloseLib(void);
extern void ESP_GetTitleId(void);
extern void ESP_InitLib(void);
extern void EXIDeselect(void);
extern void EXILock(void);
extern void EXISync(void);
extern void EXIUnlock(void);
extern void ICFlashInvalidate(void);
extern void ICInvalidateRange(void);
extern void OSAllocFromMEM1ArenaLo(void);
extern void OSClearContext(void);
extern void OSDefaultExceptionHandler(void);
extern void OSDisableInterrupts(void);
extern void OSDisableScheduler(void);
extern void OSEnableInterrupts(void);
extern void OSGetArenaHi(void);
extern void OSGetTime(void);
extern void OSReport(const char* msg, ...);
extern void OSSetArenaHi(void);
extern void OSSetArenaLo(void);
extern void OSSetCurrentContext(void);
extern void VIGetTvFormat(void);
extern void __OSMaskInterrupts(void);
extern void __OSSetExceptionHandler(void);
extern void __OSStopAudioSystem(void);
extern void __OSUnmaskInterrupts(void);
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void fn_805E8230(void);
extern void fn_805EDC50(void);
extern void fn_805EE820(void);
extern void fn_805EEB00(void);
extern void fn_805EECD0(void);
extern void fn_805EED10(void);
extern void fn_805EED60(void);
extern void fn_805F05B0(void);
extern void fn_805F1650(void);
extern void fn_805F2FD0(void);
extern void fn_805F34A0(void);
extern void fn_805F3550(void);
extern void fn_805F3C90(void);
extern void fn_805FE860(void);
extern void fn_805FEA30(void);
extern void fn_805FEBA0(void);
extern void fn_805FEBB0(void);
extern void fn_805FF240(void);
extern void fn_806036E0(void);
extern void fn_80603730(void);
extern void fn_80603AA0(void);
extern void fn_80604580(void);
extern void fn_80604C50(void);
extern void fn_80604FB0(void);
extern void fn_80605140(void);
extern void fn_806051C0(void);
extern void fn_80613E30(void);
extern void fn_806809C0(void);
extern void fn_80682544(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8079CB00[];
extern u8 lbl_807CB320[];
extern u8 lbl_807CB5E8[];
extern u8 lbl_80808081[];

/* Small data declarations */
extern u32 __DVDLayoutFormat;
extern u32 __OSInReboot;
extern u32 lbl_8087E778;
extern u32 lbl_8087E780;
extern u32 lbl_8087FBF8;
extern u32 lbl_8087FBFC;
extern u32 lbl_8087FC08;

/* Function declarations */
void fn_805EF630(void);
void fn_805EFD90(void);
void fn_805EFF70(void);
void fn_805F02A0(void);
void OSFatal(void);

asm void fn_805EF630(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x200
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_24
    mr r27, r3
    mr r24, r4
    mr r28, r5
    mr r29, r6
    mr r25, r7
    mr r31, r8
    mr r26, r9
    bl OSDisableInterrupts
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    beq lbl_fn_805EF630_00000058
    lis r3, 0x8000
    lwz r0, 0x3194(r3)
    stw r0, lbl_8087FBF8
lbl_fn_805EF630_00000058:
    lis r3, 0xc
    subi r3, r3, 0x5d31
    bl fn_805F2FD0
    li r3, 0x1c
    li r4, 0x1
    bl OSAllocFromMEM1ArenaLo
    li r0, 0x1
    stw r0, 0x0(r3)
    cmpwi r25, 0x0
    mr r30, r3
    stw r24, 0x4(r3)
    stw r28, 0xc(r3)
    stw r29, 0x10(r3)
    stw r25, 0x14(r3)
    bne lbl_fn_805EF630_000000E0
    li r3, 0x2000
    li r4, 0x1
    bl OSAllocFromMEM1ArenaLo
    stw r3, 0x18(r30)
    lwz r0, lbl_8087FBF8
    cmplwi r0, 0x2
    bne lbl_fn_805EF630_000000D0
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    bne lbl_fn_805EF630_000000D0
    lwz r3, 0x18(r30)
    mr r4, r31
    mr r5, r26
    bl fn_805EEB00
    b lbl_fn_805EF630_000000E0
lbl_fn_805EF630_000000D0:
    lwz r3, 0x18(r30)
    mr r4, r31
    mr r5, r26
    bl fn_805EE820
lbl_fn_805EF630_000000E0:
    bl DVDInit
    li r3, 0x1
    bl fn_805FEBA0
    bl fn_805FEBB0
    li r0, 0x0
    lis r3, fn_805EED10@ha
    stw r0, lbl_8087FC08
    addi r3, r3, fn_805EED10@l
    bl fn_805FF240
    li r3, -0x10
    bl __OSMaskInterrupts
    li r3, 0x10
    bl __OSUnmaskInterrupts
    bl OSEnableInterrupts
lbl_fn_805EF630_00000118:
    lwz r0, lbl_8087FC08
    cmpwi r0, 0x1
    bne lbl_fn_805EF630_00000118
    bl fn_805EED60
    addis r0, r24, 0x6000
    cmplwi r0, 0x0
    bne lbl_fn_805EF630_0000018C
    lwz r0, __OSInReboot
    cmpwi r0, 0x0
    bne lbl_fn_805EF630_0000018C
    bl ESP_InitLib
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_00000738
    addi r3, r1, 0x40
    bl ESP_GetTitleId
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_00000738
    bl ESP_CloseLib
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_00000738
    lwz r3, 0x18(r30)
    li r4, 0x11
    lwz r0, 0x4(r26)
    la r5, lbl_8087E778
    lwz r7, 0x40(r1)
    lwz r8, 0x44(r1)
    add r3, r3, r0
    crclr 6
    bl fn_806809C0
lbl_fn_805EF630_0000018C:
    li r3, 0x20
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lwz r6, lbl_8087FBFC
    mr r31, r3
    cmpwi r6, 0x0
    beq lbl_fn_805EF630_000001AC
    b lbl_fn_805EF630_00000248
lbl_fn_805EF630_000001AC:
    lis r26, 0x8000
    lwz r0, 0x30f4(r26)
    cmpwi r0, 0x0
    beq lbl_fn_805EF630_00000240
    li r3, 0x40
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lwz r0, 0x30f4(r26)
    mr r26, r3
    addi r3, r1, 0x120
    li r5, 0x40
    mr r4, r26
    srawi r6, r0, 2
    li r7, 0x0
    li r8, 0x0
    bl fn_805FE860
    b lbl_fn_805EF630_00000214
lbl_fn_805EF630_000001F0:
    addi r3, r1, 0x120
    bl fn_805FEA30
    cmpwi r3, 0x2
    bgt lbl_fn_805EF630_00000210
    addi r3, r1, 0x120
    bl fn_805FEA30
    cmpwi r3, 0x0
    bge lbl_fn_805EF630_00000214
lbl_fn_805EF630_00000210:
    bl fn_805F3C90
lbl_fn_805EF630_00000214:
    addi r3, r1, 0x120
    bl fn_805FEA30
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_000001F0
    lis r3, 0x8000
    lwz r4, 0x38(r26)
    lwz r0, 0x30f4(r3)
    add r0, r0, r4
    srawi r6, r0, 2
    stw r6, lbl_8087FBFC
    b lbl_fn_805EF630_00000248
lbl_fn_805EF630_00000240:
    li r6, 0x910
    stw r6, lbl_8087FBFC
lbl_fn_805EF630_00000248:
    mr r4, r31
    addi r3, r1, 0x150
    li r5, 0x20
    li r7, 0x0
    li r8, 0x0
    bl fn_805FE860
    b lbl_fn_805EF630_00000288
lbl_fn_805EF630_00000264:
    addi r3, r1, 0x150
    bl fn_805FEA30
    cmpwi r3, 0x2
    bgt lbl_fn_805EF630_00000284
    addi r3, r1, 0x150
    bl fn_805FEA30
    cmpwi r3, 0x0
    bge lbl_fn_805EF630_00000288
lbl_fn_805EF630_00000284:
    bl fn_805F3C90
lbl_fn_805EF630_00000288:
    addi r3, r1, 0x150
    bl fn_805FEA30
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_00000264
    lwz r6, lbl_8087FBFC
    cmpwi r6, 0x0
    beq lbl_fn_805EF630_000002A8
    b lbl_fn_805EF630_00000344
lbl_fn_805EF630_000002A8:
    lis r26, 0x8000
    lwz r0, 0x30f4(r26)
    cmpwi r0, 0x0
    beq lbl_fn_805EF630_0000033C
    li r3, 0x40
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lwz r0, 0x30f4(r26)
    mr r26, r3
    addi r3, r1, 0x180
    li r5, 0x40
    mr r4, r26
    srawi r6, r0, 2
    li r7, 0x0
    li r8, 0x0
    bl fn_805FE860
    b lbl_fn_805EF630_00000310
lbl_fn_805EF630_000002EC:
    addi r3, r1, 0x180
    bl fn_805FEA30
    cmpwi r3, 0x2
    bgt lbl_fn_805EF630_0000030C
    addi r3, r1, 0x180
    bl fn_805FEA30
    cmpwi r3, 0x0
    bge lbl_fn_805EF630_00000310
lbl_fn_805EF630_0000030C:
    bl fn_805F3C90
lbl_fn_805EF630_00000310:
    addi r3, r1, 0x180
    bl fn_805FEA30
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_000002EC
    lis r3, 0x8000
    lwz r4, 0x38(r26)
    lwz r0, 0x30f4(r3)
    add r0, r0, r4
    srawi r6, r0, 2
    stw r6, lbl_8087FBFC
    b lbl_fn_805EF630_00000344
lbl_fn_805EF630_0000033C:
    li r6, 0x910
    stw r6, lbl_8087FBFC
lbl_fn_805EF630_00000344:
    lwz r5, 0x14(r31)
    addi r3, r1, 0x1b0
    addi r6, r6, 0x8
    lis r4, 0x8120
    addi r0, r5, 0x1f
    li r7, 0x0
    clrrwi r5, r0, 5
    li r8, 0x0
    bl fn_805FE860
    b lbl_fn_805EF630_00000390
lbl_fn_805EF630_0000036C:
    addi r3, r1, 0x1b0
    bl fn_805FEA30
    cmpwi r3, 0x2
    bgt lbl_fn_805EF630_0000038C
    addi r3, r1, 0x1b0
    bl fn_805FEA30
    cmpwi r3, 0x0
    bge lbl_fn_805EF630_00000390
lbl_fn_805EF630_0000038C:
    bl fn_805F3C90
lbl_fn_805EF630_00000390:
    addi r3, r1, 0x1b0
    bl fn_805FEA30
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_0000036C
    lwz r4, 0x14(r31)
    lis r3, 0x8120
    addi r0, r4, 0x1f
    clrrwi r4, r0, 5
    bl ICInvalidateRange
    lis r4, lbl_8079CB00@ha
    mr r3, r31
    addi r4, r4, lbl_8079CB00@l
    li r5, 0xa
    bl fn_80682544
    cmpwi r3, 0x0
    ble lbl_fn_805EF630_000003D8
    li r0, 0x1
    b lbl_fn_805EF630_000003DC
lbl_fn_805EF630_000003D8:
    li r0, 0x0
lbl_fn_805EF630_000003DC:
    cmpwi r0, 0x0
    beq lbl_fn_805EF630_000005EC
    addis r0, r27, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_805EF630_000004AC
    lwz r6, lbl_8087FBFC
    cmpwi r6, 0x0
    beq lbl_fn_805EF630_00000400
    b lbl_fn_805EF630_0000049C
lbl_fn_805EF630_00000400:
    lis r27, 0x8000
    lwz r0, 0x30f4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_805EF630_00000494
    li r3, 0x40
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lwz r0, 0x30f4(r27)
    mr r26, r3
    addi r3, r1, 0xf0
    li r5, 0x40
    mr r4, r26
    srawi r6, r0, 2
    li r7, 0x0
    li r8, 0x0
    bl fn_805FE860
    b lbl_fn_805EF630_00000468
lbl_fn_805EF630_00000444:
    addi r3, r1, 0xf0
    bl fn_805FEA30
    cmpwi r3, 0x2
    bgt lbl_fn_805EF630_00000464
    addi r3, r1, 0xf0
    bl fn_805FEA30
    cmpwi r3, 0x0
    bge lbl_fn_805EF630_00000468
lbl_fn_805EF630_00000464:
    bl fn_805F3C90
lbl_fn_805EF630_00000468:
    addi r3, r1, 0xf0
    bl fn_805FEA30
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_00000444
    lis r3, 0x8000
    lwz r4, 0x38(r26)
    lwz r0, 0x30f4(r3)
    add r0, r0, r4
    srawi r6, r0, 2
    stw r6, lbl_8087FBFC
    b lbl_fn_805EF630_0000049C
lbl_fn_805EF630_00000494:
    li r6, 0x910
    stw r6, lbl_8087FBFC
lbl_fn_805EF630_0000049C:
    lwz r3, 0x14(r31)
    addi r0, r3, 0x20
    srwi r0, r0, 2
    add r27, r0, r6
lbl_fn_805EF630_000004AC:
    stw r27, 0x8(r30)
    addi r3, r1, 0x20
    addi r4, r1, 0x24
    addi r5, r1, 0x28
    lwz r12, 0x10(r31)
    mtctr r12
    bctrl
    li r3, 0x1c
    li r4, 0x1
    bl OSAllocFromMEM1ArenaLo
    mr r26, r3
    mr r4, r30
    li r5, 0x1c
    bl memcpy
    lis r4, 0x8000
    lis r3, OSReport@ha
    stw r26, 0x30f0(r4)
    addi r3, r3, OSReport@l
    lwz r12, 0x20(r1)
    mtctr r12
    bctrl
    mr r3, r26
    bl OSSetArenaLo
    b lbl_fn_805EF630_00000568
lbl_fn_805EF630_0000050C:
    lwz r6, 0x34(r1)
    addi r3, r1, 0xc0
    lwz r0, __DVDLayoutFormat
    li r7, 0x0
    lwz r5, 0x30(r1)
    li r8, 0x0
    lwz r4, 0x2c(r1)
    srw r6, r6, r0
    bl fn_805FE860
    b lbl_fn_805EF630_00000558
lbl_fn_805EF630_00000534:
    addi r3, r1, 0xc0
    bl fn_805FEA30
    cmpwi r3, 0x2
    bgt lbl_fn_805EF630_00000554
    addi r3, r1, 0xc0
    bl fn_805FEA30
    cmpwi r3, 0x0
    bge lbl_fn_805EF630_00000558
lbl_fn_805EF630_00000554:
    bl fn_805F3C90
lbl_fn_805EF630_00000558:
    addi r3, r1, 0xc0
    bl fn_805FEA30
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_00000534
lbl_fn_805EF630_00000568:
    lwz r12, 0x24(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x30
    addi r5, r1, 0x34
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_0000050C
    lwz r12, 0x28(r1)
    mtctr r12
    bctrl
    lis r5, 0x8000
    mr r27, r3
    lwz r3, 0x0(r5)
    li r0, 0x80
    stw r3, 0x3180(r5)
    li r3, 0x1c
    li r4, 0x1
    stb r0, 0x3184(r5)
    bl OSAllocFromMEM1ArenaLo
    mr r26, r3
    mr r4, r30
    li r5, 0x1c
    bl memcpy
    lis r4, 0x8000
    lis r3, 0xcc00
    stw r26, 0x30f0(r4)
    li r0, 0x7
    stw r0, 0x3024(r3)
    bl OSDisableInterrupts
    mr r3, r27
    bl fn_805EECD0
    b lbl_fn_805EF630_00000738
lbl_fn_805EF630_000005EC:
    lis r3, 0x8130
    lis r27, 0x8000
    stw r28, -0x2010(r3)
    li r0, 0x1
    stw r29, -0x2014(r3)
    stb r0, 0x30e2(r27)
    lwz r6, lbl_8087FBFC
    cmpwi r6, 0x0
    beq lbl_fn_805EF630_00000614
    b lbl_fn_805EF630_000006AC
lbl_fn_805EF630_00000614:
    lwz r0, 0x30f4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_805EF630_000006A4
    li r3, 0x40
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    lwz r0, 0x30f4(r27)
    mr r26, r3
    addi r3, r1, 0x90
    li r5, 0x40
    mr r4, r26
    srawi r6, r0, 2
    li r7, 0x0
    li r8, 0x0
    bl fn_805FE860
    b lbl_fn_805EF630_00000678
lbl_fn_805EF630_00000654:
    addi r3, r1, 0x90
    bl fn_805FEA30
    cmpwi r3, 0x2
    bgt lbl_fn_805EF630_00000674
    addi r3, r1, 0x90
    bl fn_805FEA30
    cmpwi r3, 0x0
    bge lbl_fn_805EF630_00000678
lbl_fn_805EF630_00000674:
    bl fn_805F3C90
lbl_fn_805EF630_00000678:
    addi r3, r1, 0x90
    bl fn_805FEA30
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_00000654
    lis r3, 0x8000
    lwz r4, 0x38(r26)
    lwz r0, 0x30f4(r3)
    add r0, r0, r4
    srawi r6, r0, 2
    stw r6, lbl_8087FBFC
    b lbl_fn_805EF630_000006AC
lbl_fn_805EF630_000006A4:
    li r6, 0x910
    stw r6, lbl_8087FBFC
lbl_fn_805EF630_000006AC:
    lwz r7, 0x14(r31)
    addi r3, r1, 0x60
    lwz r5, 0x18(r31)
    lis r4, 0x8133
    addi r0, r7, 0x20
    li r7, 0x0
    srwi r8, r0, 2
    addi r0, r5, 0x1f
    add r6, r8, r6
    li r8, 0x0
    clrrwi r5, r0, 5
    bl fn_805FE860
    b lbl_fn_805EF630_00000704
lbl_fn_805EF630_000006E0:
    addi r3, r1, 0x60
    bl fn_805FEA30
    cmpwi r3, 0x2
    bgt lbl_fn_805EF630_00000700
    addi r3, r1, 0x60
    bl fn_805FEA30
    cmpwi r3, 0x0
    bge lbl_fn_805EF630_00000704
lbl_fn_805EF630_00000700:
    bl fn_805F3C90
lbl_fn_805EF630_00000704:
    addi r3, r1, 0x60
    bl fn_805FEA30
    cmpwi r3, 0x0
    bne lbl_fn_805EF630_000006E0
    lwz r4, 0x18(r31)
    lis r3, 0x8133
    addi r0, r4, 0x1f
    clrrwi r4, r0, 5
    bl ICInvalidateRange
    bl OSDisableInterrupts
    bl ICFlashInvalidate
    lis r3, 0x8133
    bl fn_805EECD0
lbl_fn_805EF630_00000738:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_805EFD90(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    addi r4, r1, 0x8
    bl fn_805F34A0
    mr r5, r31
    addi r3, r1, 0x10
    la r4, lbl_8087E780
    crclr 6
    bl sprintf
    cmpwi r30, 0x0
    li r31, 0x0
    beq lbl_fn_805EFD90_000007CC
    mr r3, r30
    b lbl_fn_805EFD90_000007C0
lbl_fn_805EFD90_000007B8:
    addi r3, r3, 0x4
    addi r31, r31, 0x1
lbl_fn_805EFD90_000007C0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805EFD90_000007B8
lbl_fn_805EFD90_000007CC:
    addi r0, r31, 0x2
    li r4, 0x1
    slwi r3, r0, 2
    bl OSAllocFromMEM1ArenaLo
    addi r6, r31, 0x1
    addi r0, r1, 0x10
    cmpwi cr1, r6, 0x1
    stw r0, 0x0(r3)
    li r4, 0x1
    ble cr1, lbl_fn_805EFD90_00000904
    cmpwi r31, 0x8
    subi r7, r31, 0x7
    ble lbl_fn_805EFD90_000008D0
    li r8, 0x0
    li r9, 0x0
    blt cr1, lbl_fn_805EFD90_00000820
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r6, r0
    bgt lbl_fn_805EFD90_00000820
    li r9, 0x1
lbl_fn_805EFD90_00000820:
    cmpwi r9, 0x0
    beq lbl_fn_805EFD90_0000085C
    addi r0, r31, 0x1
    li r5, 0x1
    clrrwi r6, r0, 31
    addis r0, r6, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_805EFD90_00000850
    clrrwi r0, r31, 31
    cmpw r6, r0
    beq lbl_fn_805EFD90_00000850
    li r5, 0x0
lbl_fn_805EFD90_00000850:
    cmpwi r5, 0x0
    beq lbl_fn_805EFD90_0000085C
    li r8, 0x1
lbl_fn_805EFD90_0000085C:
    cmpwi r8, 0x0
    beq lbl_fn_805EFD90_000008D0
    addi r0, r7, 0x6
    addi r5, r30, 0x4
    srwi r0, r0, 3
    addi r6, r3, 0x4
    mtctr r0
    cmpwi r7, 0x1
    ble lbl_fn_805EFD90_000008D0
lbl_fn_805EFD90_00000880:
    lwz r0, -0x4(r5)
    addi r4, r4, 0x8
    stw r0, 0x0(r6)
    lwz r0, 0x0(r5)
    stw r0, 0x4(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x8(r6)
    lwz r0, 0x8(r5)
    stw r0, 0xc(r6)
    lwz r0, 0xc(r5)
    stw r0, 0x10(r6)
    lwz r0, 0x10(r5)
    stw r0, 0x14(r6)
    lwz r0, 0x14(r5)
    stw r0, 0x18(r6)
    lwz r0, 0x18(r5)
    addi r5, r5, 0x20
    stw r0, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_805EFD90_00000880
lbl_fn_805EFD90_000008D0:
    addi r5, r31, 0x1
    slwi r7, r4, 2
    subf r0, r4, r5
    add r6, r30, r7
    add r7, r3, r7
    mtctr r0
    cmpw r4, r5
    bge lbl_fn_805EFD90_00000904
lbl_fn_805EFD90_000008F0:
    lwz r0, -0x4(r6)
    addi r6, r6, 0x4
    stw r0, 0x0(r7)
    addi r7, r7, 0x4
    bdnz lbl_fn_805EFD90_000008F0
lbl_fn_805EFD90_00000904:
    lwz r5, 0xc(r1)
    mr r9, r3
    lwz r6, 0x8(r1)
    mr r4, r29
    addi r8, r31, 0x1
    li r3, -0x1
    li r7, 0x0
    bl fn_805EF630
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805EFF70(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x180
    bl _savegpr_14
    subi r0, r5, 0x18
    stw r3, 0x8(r1)
    mr r24, r4
    mr r25, r6
    stw r0, 0x130(r1)
    mr r26, r7
    mr r27, r8
    mr r14, r9
    subi r30, r4, 0x30
    lis r20, lbl_80808081@ha
    lis r21, 0x8889
    li r31, 0x0
    li r23, 0x18
    li r22, 0x3
lbl_fn_805EFF70_0000098C:
    lwz r0, 0x130(r1)
    cmpw r0, r27
    blt lbl_fn_805EFF70_00000C50
    mullw r0, r27, r24
    mr r28, r26
    add r0, r26, r0
    slwi r3, r0, 1
    lwz r0, 0x8(r1)
    add r29, r0, r3
    b lbl_fn_805EFF70_00000C44
lbl_fn_805EFF70_000009B4:
    extsb r0, r3
    cmpwi r0, 0xa
    bne lbl_fn_805EFF70_000009CC
    add r27, r27, r14
    addi r10, r10, 0x1
    b lbl_fn_805EFF70_0000098C
lbl_fn_805EFF70_000009CC:
    cmpw r30, r28
    bge lbl_fn_805EFF70_000009DC
    add r27, r27, r14
    b lbl_fn_805EFF70_0000098C
lbl_fn_805EFF70_000009DC:
    li r5, 0x0
    li r6, 0x0
    mtctr r22
lbl_fn_805EFF70_000009E8:
    clrlwi r0, r5, 29
    addi r8, r5, 0x1
    add r9, r0, r6
    addi r16, r5, 0x3
    srwi r0, r8, 3
    addi r4, r1, 0x10
    mulli r3, r0, 0x18
    clrlwi r8, r8, 29
    slwi r0, r9, 2
    addi r7, r5, 0x2
    add r4, r4, r0
    addi r18, r5, 0x4
    srwi r0, r7, 3
    add r8, r8, r3
    stw r31, 0x0(r4)
    slwi r8, r8, 2
    mulli r0, r0, 0x18
    clrlwi r7, r7, 29
    stw r31, 0x20(r4)
    addi r3, r1, 0x10
    srwi r17, r16, 3
    stw r31, 0x40(r4)
    add r0, r7, r0
    addi r12, r5, 0x5
    srwi r11, r12, 3
    stwux r31, r3, r8
    addi r9, r5, 0x6
    slwi r15, r0, 2
    srwi r8, r9, 3
    stw r31, 0x20(r3)
    srwi r19, r18, 3
    addi r4, r1, 0x10
    stw r31, 0x40(r3)
    clrlwi r3, r16, 29
    mulli r16, r17, 0x18
    addi r7, r5, 0x7
    stwux r31, r4, r15
    addi r15, r1, 0x10
    srwi r0, r7, 3
    stw r31, 0x20(r4)
    add r3, r3, r16
    clrlwi r17, r18, 29
    mulli r16, r19, 0x18
    stw r31, 0x40(r4)
    slwi r4, r3, 2
    mr r3, r15
    stwux r31, r15, r4
    add r16, r17, r16
    stw r31, 0x20(r15)
    mulli r11, r11, 0x18
    clrlwi r12, r12, 29
    slwi r16, r16, 2
    stw r31, 0x40(r15)
    mr r4, r3
    clrlwi r9, r9, 29
    mulli r8, r8, 0x18
    stwux r31, r3, r16
    add r11, r12, r11
    stw r31, 0x20(r3)
    clrlwi r7, r7, 29
    mulli r0, r0, 0x18
    slwi r11, r11, 2
    stw r31, 0x40(r3)
    add r8, r9, r8
    stwux r31, r4, r11
    slwi r3, r8, 2
    addi r8, r1, 0x10
    add r0, r7, r0
    stw r31, 0x20(r4)
    add r8, r8, r3
    slwi r0, r0, 2
    addi r3, r1, 0x10
    stw r31, 0x40(r4)
    addi r6, r6, 0x18
    addi r5, r5, 0x8
    stw r31, 0x0(r8)
    stw r31, 0x20(r8)
    stw r31, 0x40(r8)
    stwux r31, r3, r0
    stw r31, 0x20(r3)
    stw r31, 0x40(r3)
    bdnz lbl_fn_805EFF70_000009E8
    mr r3, r10
    addi r4, r1, 0x10
    addi r7, r1, 0xc
    li r5, 0x0
    li r6, 0x6
    bl fn_805F1650
    mr r10, r3
    li r7, 0x0
    li r3, 0x0
lbl_fn_805EFF70_00000B54:
    srwi r0, r7, 3
    clrlwi r6, r7, 29
    mulli r0, r0, 0x18
    addi r5, r1, 0x10
    mr r4, r28
    li r8, 0x0
    add r0, r6, r0
    slwi r0, r0, 2
    add r5, r5, r0
    mtctr r23
lbl_fn_805EFF70_00000B7C:
    extlwi r6, r8, 27, 2
    clrlwi r0, r8, 29
    subfic r0, r0, 0x7
    lwzx r6, r5, r6
    slwi r0, r0, 2
    srw r0, r6, r0
    clrlwi. r9, r0, 28
    beq lbl_fn_805EFF70_00000C18
    lbz r6, 0x0(r25)
    add r0, r8, r3
    slwi r12, r0, 1
    addi r11, r20, lbl_80808081@l
    mullw r9, r6, r9
    clrlwi. r0, r4, 31
    add r6, r29, r12
    subi r0, r21, 0x7777
    mulli r9, r9, 0xef
    mulhw r11, r11, r9
    add r9, r11, r9
    srawi r9, r9, 7
    srwi r11, r9, 31
    add r9, r9, r11
    mulhw r0, r0, r9
    add r0, r0, r9
    srawi r0, r0, 3
    srwi r9, r0, 31
    add r9, r0, r9
    addi r0, r9, 0x10
    stbx r0, r29, r12
    beq lbl_fn_805EFF70_00000C08
    lbz r0, 0x1(r25)
    stb r0, -0x1(r6)
    lbz r0, 0x2(r25)
    stb r0, 0x1(r6)
    b lbl_fn_805EFF70_00000C18
lbl_fn_805EFF70_00000C08:
    lbz r0, 0x2(r25)
    stb r0, -0x1(r6)
    lbz r0, 0x1(r25)
    stb r0, 0x1(r6)
lbl_fn_805EFF70_00000C18:
    addi r4, r4, 0x1
    addi r8, r8, 0x1
    bdnz lbl_fn_805EFF70_00000B7C
    addi r7, r7, 0x1
    add r3, r3, r24
    cmplwi r7, 0x18
    blt lbl_fn_805EFF70_00000B54
    lwz r3, 0xc(r1)
    slwi r0, r3, 1
    add r28, r28, r3
    add r29, r29, r0
lbl_fn_805EFF70_00000C44:
    lbz r3, 0x0(r10)
    extsb. r0, r3
    bne lbl_fn_805EFF70_000009B4
lbl_fn_805EFF70_00000C50:
    addi r11, r1, 0x180
    bl _restgpr_14
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_805F02A0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r6, 0x1e0
    li r5, 0x28
    stw r0, 0x54(r1)
    li r0, 0x280
    sth r3, 0xc(r1)
    sth r6, 0xe(r1)
    sth r4, 0x10(r1)
    sth r5, 0x12(r1)
    sth r0, 0x16(r1)
    sth r4, 0x18(r1)
    bl VIGetTvFormat
    cmpwi r3, 0x0
    beq lbl_fn_805F02A0_00000CC8
    cmplwi r3, 0x2
    beq lbl_fn_805F02A0_00000CC8
    cmplwi r3, 0x5
    beq lbl_fn_805F02A0_00000D08
    cmplwi r3, 0x1
    beq lbl_fn_805F02A0_00000D4C
    b lbl_fn_805F02A0_00000D64
lbl_fn_805F02A0_00000CC8:
    lis r3, 0xcc00
    lhz r0, 0x206c(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_805F02A0_00000CF0
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x8(r1)
    sth r0, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_805F02A0_00000D64
lbl_fn_805F02A0_00000CF0:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x8(r1)
    sth r3, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_805F02A0_00000D64
lbl_fn_805F02A0_00000D08:
    lis r3, 0xcc00
    lhz r0, 0x206c(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_805F02A0_00000D30
    li r0, 0x0
    li r3, 0x16
    stw r3, 0x8(r1)
    sth r0, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_805F02A0_00000D64
lbl_fn_805F02A0_00000D30:
    li r4, 0x14
    li r3, 0x0
    li r0, 0x1
    stw r4, 0x8(r1)
    sth r3, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_805F02A0_00000D64
lbl_fn_805F02A0_00000D4C:
    li r4, 0x4
    li r3, 0x2f
    li r0, 0x1
    stw r4, 0x8(r1)
    sth r3, 0x14(r1)
    stw r0, 0x1c(r1)
lbl_fn_805F02A0_00000D64:
    addi r3, r1, 0x8
    bl fn_80604580
    li r3, 0x0
    li r4, 0x0
    li r5, 0x280
    li r6, 0x1e0
    bl fn_80604C50
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void OSFatal(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl OSDisableInterrupts
    bl OSDisableScheduler
    lis r24, lbl_807CB320@ha
    addi r3, r24, lbl_807CB320@l
    bl OSClearContext
    addi r3, r24, lbl_807CB320@l
    bl OSSetCurrentContext
    bl __OSStopAudioSystem
    bl fn_80603AA0
    li r3, 0x80
    bl __OSUnmaskInterrupts
    li r3, 0x1
    bl fn_80605140
    bl fn_80604FB0
    li r3, 0x0
    bl fn_806036E0
    li r3, 0x0
    bl fn_80603730
    bl OSEnableInterrupts
    bl fn_806051C0
    mr r24, r3
lbl_OSFatal_00000E04:
    bl fn_806051C0
    subf r0, r24, r3
    cmpwi r0, 0x1
    blt lbl_OSFatal_00000E04
    bl OSGetTime
    lis r5, 0x1062
    mr r30, r4
    mr r31, r3
    lis r25, 0x8000
    addi r24, r5, 0x4dd3
    li r26, 0x0
lbl_OSFatal_00000E30:
    li r3, 0x0
    li r4, 0x0
    bl fn_805F3550
    cmpwi r3, 0x0
    bne lbl_OSFatal_00000E80
    bl OSGetTime
    lwz r0, 0xf8(r25)
    subfc r6, r30, r4
    subfe r5, r31, r3
    xoris r4, r26, 0x8000
    srwi r0, r0, 2
    mulhwu r3, r24, r0
    xoris r0, r5, 0x8000
    srwi r3, r3, 6
    mulli r3, r3, 0x3e8
    subfc r3, r3, r6
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    bne lbl_OSFatal_00000E30
lbl_OSFatal_00000E80:
    bl OSDisableInterrupts
    li r3, 0x1
    li r4, 0x0
    bl fn_805F3550
    li r3, 0x0
    li r4, 0x0
    bl fn_805E8230
    li r3, 0x2
    li r4, 0x0
    bl fn_805E8230
    b lbl_OSFatal_00000EC4
lbl_OSFatal_00000EAC:
    li r3, 0x0
    bl EXISync
    li r3, 0x0
    bl EXIDeselect
    li r3, 0x0
    bl EXIUnlock
lbl_OSFatal_00000EC4:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl EXILock
    cmpwi r3, 0x0
    beq lbl_OSFatal_00000EAC
    li r3, 0x0
    bl EXIUnlock
    lis r3, 0xcd00
lbl_OSFatal_00000EE8:
    lwz r0, 0x680c(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_OSFatal_00000EE8
    lis r4, OSDefaultExceptionHandler@ha
    li r3, 0x8
    addi r4, r4, OSDefaultExceptionHandler@l
    bl __OSSetExceptionHandler
    bl fn_80613E30
    lis r3, 0x8140
    bl OSSetArenaLo
    lis r4, 0x8000
    lwz r3, 0x38(r4)
    cmpwi r3, 0x0
    bne lbl_OSFatal_00000F30
    lwz r3, 0x3110(r4)
    bl OSSetArenaHi
    b lbl_OSFatal_00000F34
lbl_OSFatal_00000F30:
    bl OSSetArenaHi
lbl_OSFatal_00000F34:
    lwz r0, 0x0(r27)
    lis r3, lbl_807CB5E8@ha
    stwu r0, lbl_807CB5E8@l(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x4(r3)
    stw r29, 0x8(r3)
    bl OSGetArenaHi
    lis r5, fn_805F05B0@ha
    mr r4, r3
    addi r3, r5, fn_805F05B0@l
    bl fn_805EDC50
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
