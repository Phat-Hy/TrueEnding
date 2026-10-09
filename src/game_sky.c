#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void __va_arg(void);
extern void _restgpr_16(void);
extern void _savegpr_16(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800499D0(void);
extern void fn_8006B174(void);
extern void fn_8006BA30(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80083AD4(void);
extern void fn_80087BB4(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800BDB58(void);
extern void fn_805B55AC(void);
extern void fn_805B56C4(void);
extern void fn_805B5714(void);
extern void fn_805B59C0(void);
extern void fn_805B5A50(void);
extern void fn_805B5AD8(void);
extern void fn_805B5E80(void);
extern void fn_805B6008(void);
extern void fn_805B601C(void);
extern void fn_805B6030(void);
extern void fn_805B6124(void);
extern void fn_805B6478(void);
extern void fn_805B68A4(void);
extern void fn_805B68EC(void);
extern void fn_805B6934(void);
extern void fn_805B6958(void);
extern void fn_805B6AE4(void);
extern void fn_805B6C10(void);
extern void fn_805B6C48(void);
extern void fn_806140C0(void);
extern void fn_8068093C(void);
extern void fn_80686A48(void);
extern void fn_80686AC4(void);
extern void fn_80686B64(void);
extern void fn_80686B90(void);
extern void fn_8068B1A4(void);
extern void fn_8068B29C(void);
extern void fn_8068B2A0(void);
extern void memmove(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80734870[];
extern u8 lbl_807348A0[];
extern u8 lbl_80734D00[];
extern u8 lbl_80734D08[];
extern u8 lbl_80734D2C[];
extern u8 lbl_80734DC0[];
extern u8 lbl_807798D8[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F010;
extern u32 lbl_80881258;
extern u32 lbl_8088125C;
extern u32 lbl_80881260;
extern u32 lbl_80881264;
extern u32 lbl_80881268;
extern u32 lbl_8088126C;
extern u32 lbl_80881270;
extern u32 lbl_80881274;
extern u32 lbl_80881278;
extern u32 lbl_8088127C;
extern u32 lbl_80881280;
extern u32 lbl_80881284;
extern u32 lbl_80881288;
extern u32 lbl_80881290;

/* Function declarations */
void fn_800DC12C(void);
void fn_800DC1DC(void);
void fn_800DC288(void);
void fn_800DC3C8(void);
void fn_800DC3CC(void);
void fn_800DC500(void);
void fn_800DC6B4(void);
void fn_800DC880(void);
void fn_800DC978(void);
void fn_800DC97C(void);
void fn_800DC980(void);
void fn_800DCA6C(void);
void fn_800DCA70(void);
void fn_800DCC54(void);
void fn_800DCCE0(void);
void fn_800DCDA0(void);
void fn_800DCE0C(void);
void fn_800DCE20(void);
void fn_800DD178(void);
void fn_800DD17C(void);
void fn_800DD1D0(void);
void fn_800DD1D4(void);
void fn_800DD1DC(void);
void fn_800DD1E0(void);
void fn_800DD1E4(void);
void fn_800DD1EC(void);
void fn_800DD2A8(void);
void fn_800DD3FC(void);

asm void fn_800DC12C(void)
{
    nofralloc
    b lbl_fn_800DC12C_00000004
lbl_fn_800DC12C_00000004:
    cmpwi r3, 0x0
    bne lbl_fn_800DC12C_0000001C
    li r3, 0x0
    blr
    b lbl_fn_800DC12C_0000001C
lbl_fn_800DC12C_00000018:
    addi r3, r3, 0x1
lbl_fn_800DC12C_0000001C:
    lbz r5, 0x0(r3)
    extsb r4, r5
    cmpwi r4, 0x20
    beq lbl_fn_800DC12C_00000018
    subi r0, r5, 0x30
    li r6, 0x0
    clrlwi r0, r0, 24
    cmplwi r0, 0x9
    ble lbl_fn_800DC12C_00000058
    cmpwi r4, 0x2d
    beq lbl_fn_800DC12C_00000058
    cmpwi r4, 0x2e
    beq lbl_fn_800DC12C_00000058
    li r3, 0x0
    blr
lbl_fn_800DC12C_00000058:
    extsb r0, r5
    li r5, 0x0
    cmpwi r0, 0x2d
    li r7, 0x1
    bne lbl_fn_800DC12C_00000074
    li r7, -0x1
    li r6, 0x1
lbl_fn_800DC12C_00000074:
    add r3, r3, r6
    b lbl_fn_800DC12C_00000094
lbl_fn_800DC12C_0000007C:
    lbz r0, 0x0(r3)
    mulli r5, r5, 0xa
    addi r3, r3, 0x1
    extsb r0, r0
    add r4, r0, r5
    subi r5, r4, 0x30
lbl_fn_800DC12C_00000094:
    lbz r4, 0x0(r3)
    subi r0, r4, 0x30
    clrlwi r0, r0, 24
    cmplwi r0, 0x9
    ble lbl_fn_800DC12C_0000007C
    mullw r3, r5, r7
    blr
}

asm void fn_800DC1DC(void)
{
    nofralloc
    b lbl_fn_800DC1DC_000000B4
lbl_fn_800DC1DC_000000B4:
    cmpwi r3, 0x0
    bne lbl_fn_800DC1DC_000000CC
    li r3, 0x0
    blr
    b lbl_fn_800DC1DC_000000CC
lbl_fn_800DC1DC_000000C8:
    addi r3, r3, 0x2
lbl_fn_800DC1DC_000000CC:
    lhz r5, 0x0(r3)
    cmplwi r5, 0x20
    beq lbl_fn_800DC1DC_000000C8
    addis r4, r5, 0x1
    li r6, 0x0
    subi r0, r4, 0x30
    clrlwi r0, r0, 16
    cmplwi r0, 0x9
    ble lbl_fn_800DC1DC_00000108
    cmplwi r5, 0x2d
    beq lbl_fn_800DC1DC_00000108
    cmplwi r5, 0x2e
    beq lbl_fn_800DC1DC_00000108
    li r3, 0x0
    blr
lbl_fn_800DC1DC_00000108:
    cmplwi r5, 0x2d
    li r7, 0x0
    li r8, 0x1
    bne lbl_fn_800DC1DC_00000120
    li r8, -0x1
    li r6, 0x1
lbl_fn_800DC1DC_00000120:
    slwi r4, r6, 1
    b lbl_fn_800DC1DC_0000013C
lbl_fn_800DC1DC_00000128:
    mulli r7, r7, 0xa
    lhzx r0, r3, r4
    addi r4, r4, 0x2
    add r5, r0, r7
    subi r7, r5, 0x30
lbl_fn_800DC1DC_0000013C:
    lhzx r5, r3, r4
    addis r5, r5, 0x1
    subi r0, r5, 0x30
    clrlwi r0, r0, 16
    cmplwi r0, 0x9
    ble lbl_fn_800DC1DC_00000128
    mullw r3, r7, r8
    blr
}

asm void fn_800DC288(void)
{
    nofralloc
    b lbl_fn_800DC288_00000160
lbl_fn_800DC288_00000160:
    lis r5, lbl_80734870@ha
    stwu r1, -0x10(r1)
    addi r5, r5, lbl_80734870@l
    b lbl_fn_800DC288_00000174
lbl_fn_800DC288_00000170:
    addi r3, r3, 0x1
lbl_fn_800DC288_00000174:
    lbz r6, 0x0(r3)
    extsb r4, r6
    cmpwi r4, 0x20
    beq lbl_fn_800DC288_00000170
    subi r0, r6, 0x30
    li r7, 0x0
    clrlwi r0, r0, 24
    cmplwi r0, 0x9
    ble lbl_fn_800DC288_000001B0
    cmpwi r4, 0x2d
    beq lbl_fn_800DC288_000001B0
    cmpwi r4, 0x2e
    beq lbl_fn_800DC288_000001B0
    lfs f1, lbl_80881258
    b lbl_fn_800DC288_00000294
lbl_fn_800DC288_000001B0:
    lfd f5, 0x8(r5)
    extsb r0, r6
    cmpwi r0, 0x2d
    lfd f4, 0x0(r5)
    fmr f6, f5
    li r6, 0x0
    bne lbl_fn_800DC288_000001D4
    lfd f5, 0x10(r5)
    li r7, 0x1
lbl_fn_800DC288_000001D4:
    lfd f2, 0x20(r5)
    add r3, r3, r7
    lfd f1, 0x28(r5)
    lis r4, 0x4330
    lfd f3, 0x18(r5)
    b lbl_fn_800DC288_0000025C
lbl_fn_800DC288_000001EC:
    li r6, 0x1
    addi r3, r3, 0x1
    b lbl_fn_800DC288_0000025C
lbl_fn_800DC288_000001F8:
    cmpwi r6, 0x0
    bne lbl_fn_800DC288_00000230
    lbz r0, 0x0(r3)
    fmul f4, f4, f3
    stw r4, 0x8(r1)
    addi r3, r3, 0x1
    extsb r5, r0
    subi r0, r5, 0x30
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fadd f4, f4, f0
    b lbl_fn_800DC288_0000025C
lbl_fn_800DC288_00000230:
    lbz r0, 0x0(r3)
    fmul f6, f6, f2
    stw r4, 0x8(r1)
    addi r3, r3, 0x1
    extsb r5, r0
    subi r0, r5, 0x30
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmadd f4, f6, f0, f4
lbl_fn_800DC288_0000025C:
    lbz r5, 0x0(r3)
    subi r0, r5, 0x30
    clrlwi r0, r0, 24
    cmplwi r0, 0x9
    ble lbl_fn_800DC288_000001F8
    extsb r0, r5
    cmpwi r0, 0x2e
    beq lbl_fn_800DC288_000001EC
    fmul f1, f4, f5
    lfs f0, lbl_8088125C
    frsp f1, f1
    fcmpu cr0, f0, f1
    bne lbl_fn_800DC288_00000294
    lfs f1, lbl_80881258
lbl_fn_800DC288_00000294:
    addi r1, r1, 0x10
    blr
}

asm void fn_800DC3C8(void)
{
    nofralloc
    b fn_80686B90
}

asm void fn_800DC3CC(void)
{
    nofralloc
    b lbl_fn_800DC3CC_000002A4
lbl_fn_800DC3CC_000002A4:
    lis r5, lbl_80734870@ha
    stwu r1, -0x10(r1)
    addi r5, r5, lbl_80734870@l
    b lbl_fn_800DC3CC_000002B8
lbl_fn_800DC3CC_000002B4:
    addi r3, r3, 0x2
lbl_fn_800DC3CC_000002B8:
    lhz r6, 0x0(r3)
    cmplwi r6, 0x20
    beq lbl_fn_800DC3CC_000002B4
    addis r4, r6, 0x1
    li r7, 0x0
    subi r0, r4, 0x30
    clrlwi r0, r0, 16
    cmplwi r0, 0x9
    ble lbl_fn_800DC3CC_000002F4
    cmplwi r6, 0x2d
    beq lbl_fn_800DC3CC_000002F4
    cmplwi r6, 0x2e
    beq lbl_fn_800DC3CC_000002F4
    lfs f1, lbl_80881258
    b lbl_fn_800DC3CC_000003CC
lbl_fn_800DC3CC_000002F4:
    lfd f5, 0x8(r5)
    cmplwi r6, 0x2d
    lfd f4, 0x0(r5)
    li r8, 0x0
    fmr f6, f5
    bne lbl_fn_800DC3CC_00000314
    lfd f5, 0x10(r5)
    li r7, 0x1
lbl_fn_800DC3CC_00000314:
    lfd f2, 0x20(r5)
    slwi r4, r7, 1
    lfd f1, 0x28(r5)
    lis r6, 0x4330
    lfd f3, 0x18(r5)
    b lbl_fn_800DC3CC_00000394
lbl_fn_800DC3CC_0000032C:
    li r8, 0x1
    addi r4, r4, 0x2
    b lbl_fn_800DC3CC_00000394
lbl_fn_800DC3CC_00000338:
    cmpwi r8, 0x0
    bne lbl_fn_800DC3CC_0000036C
    lhzx r5, r3, r4
    fmul f4, f4, f3
    stw r6, 0x8(r1)
    addi r4, r4, 0x2
    subi r0, r5, 0x30
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fadd f4, f4, f0
    b lbl_fn_800DC3CC_00000394
lbl_fn_800DC3CC_0000036C:
    lhzx r5, r3, r4
    fmul f6, f6, f2
    stw r6, 0x8(r1)
    addi r4, r4, 0x2
    subi r0, r5, 0x30
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmadd f4, f6, f0, f4
lbl_fn_800DC3CC_00000394:
    lhzx r7, r3, r4
    addis r5, r7, 0x1
    subi r0, r5, 0x30
    clrlwi r0, r0, 16
    cmplwi r0, 0x9
    ble lbl_fn_800DC3CC_00000338
    cmplwi r7, 0x2e
    beq lbl_fn_800DC3CC_0000032C
    fmul f1, f4, f5
    lfs f0, lbl_8088125C
    frsp f1, f1
    fcmpu cr0, f0, f1
    bne lbl_fn_800DC3CC_000003CC
    lfs f1, lbl_80881258
lbl_fn_800DC3CC_000003CC:
    addi r1, r1, 0x10
    blr
}

asm void fn_800DC500(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    cmpwi r4, 0x0
    li r0, -0x1
    li r6, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_fn_800DC500_0000056C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_800DC500_00000528
    addi r7, r8, 0x7
    lis r5, lbl_807348A0@ha
    srwi r7, r7, 3
    addi r5, r5, lbl_807348A0@l
    mtctr r7
    cmplwi r8, 0x0
    ble lbl_fn_800DC500_00000528
lbl_fn_800DC500_0000041C:
    lbzx r7, r3, r6
    add r29, r3, r6
    srwi r10, r0, 24
    lbz r8, 0x1(r29)
    extsb r9, r7
    lbz r7, 0x2(r29)
    xor r9, r10, r9
    extsb r31, r8
    clrlslwi r9, r9, 24, 2
    extsb r12, r7
    lwzx r30, r5, r9
    slwi r0, r0, 8
    lbz r11, 0x3(r29)
    addi r6, r6, 0x8
    xor r0, r0, r30
    lbz r10, 0x4(r29)
    srwi r30, r0, 24
    lbz r9, 0x5(r29)
    xor r31, r30, r31
    lbz r8, 0x6(r29)
    clrlslwi r31, r31, 24, 2
    lbz r7, 0x7(r29)
    lwzx r31, r5, r31
    slwi r0, r0, 8
    extsb r11, r11
    extsb r10, r10
    xor r0, r0, r31
    extsb r9, r9
    srwi r31, r0, 24
    extsb r8, r8
    xor r12, r31, r12
    slwi r0, r0, 8
    clrlslwi r12, r12, 24, 2
    extsb r7, r7
    lwzx r12, r5, r12
    xor r0, r0, r12
    srwi r12, r0, 24
    xor r11, r12, r11
    slwi r0, r0, 8
    clrlslwi r11, r11, 24, 2
    lwzx r11, r5, r11
    xor r0, r0, r11
    srwi r11, r0, 24
    xor r10, r11, r10
    slwi r0, r0, 8
    clrlslwi r10, r10, 24, 2
    lwzx r10, r5, r10
    xor r0, r0, r10
    srwi r10, r0, 24
    xor r9, r10, r9
    slwi r0, r0, 8
    clrlslwi r9, r9, 24, 2
    lwzx r9, r5, r9
    xor r0, r0, r9
    srwi r9, r0, 24
    xor r8, r9, r8
    slwi r0, r0, 8
    clrlslwi r8, r8, 24, 2
    lwzx r8, r5, r8
    xor r0, r0, r8
    srwi r8, r0, 24
    xor r7, r8, r7
    slwi r0, r0, 8
    clrlslwi r7, r7, 24, 2
    lwzx r7, r5, r7
    xor r0, r0, r7
    bdnz lbl_fn_800DC500_0000041C
lbl_fn_800DC500_00000528:
    lis r7, lbl_807348A0@ha
    subf r5, r6, r4
    addi r7, r7, lbl_807348A0@l
    add r3, r3, r6
    mtctr r5
    cmplw r6, r4
    bge lbl_fn_800DC500_0000056C
lbl_fn_800DC500_00000544:
    lbz r4, 0x0(r3)
    srwi r5, r0, 24
    slwi r0, r0, 8
    addi r3, r3, 0x1
    extsb r4, r4
    xor r4, r5, r4
    clrlslwi r4, r4, 24, 2
    lwzx r4, r7, r4
    xor r0, r0, r4
    bdnz lbl_fn_800DC500_00000544
lbl_fn_800DC500_0000056C:
    li r3, -0x1
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    xor r3, r0, r3
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_800DC6B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl strlen
    cmpwi r3, 0x0
    li r0, -0x1
    li r5, 0x0
    beq lbl_fn_800DC6B4_00000730
    cmplwi r3, 0x8
    subi r7, r3, 0x8
    ble lbl_fn_800DC6B4_000006EC
    addi r6, r7, 0x7
    lis r4, lbl_807348A0@ha
    srwi r6, r6, 3
    addi r4, r4, lbl_807348A0@l
    mtctr r6
    cmplwi r7, 0x0
    ble lbl_fn_800DC6B4_000006EC
lbl_fn_800DC6B4_000005E0:
    lbzx r6, r31, r5
    add r29, r31, r5
    srwi r9, r0, 24
    lbz r7, 0x1(r29)
    extsb r8, r6
    lbz r6, 0x2(r29)
    xor r8, r9, r8
    extsb r12, r7
    clrlslwi r8, r8, 24, 2
    extsb r11, r6
    lwzx r30, r4, r8
    slwi r0, r0, 8
    lbz r10, 0x3(r29)
    addi r5, r5, 0x8
    xor r0, r0, r30
    lbz r9, 0x4(r29)
    srwi r30, r0, 24
    lbz r8, 0x5(r29)
    xor r12, r30, r12
    lbz r7, 0x6(r29)
    clrlslwi r12, r12, 24, 2
    lbz r6, 0x7(r29)
    lwzx r12, r4, r12
    slwi r0, r0, 8
    extsb r10, r10
    extsb r9, r9
    xor r0, r0, r12
    extsb r8, r8
    srwi r12, r0, 24
    extsb r7, r7
    xor r11, r12, r11
    slwi r0, r0, 8
    clrlslwi r11, r11, 24, 2
    extsb r6, r6
    lwzx r11, r4, r11
    xor r0, r0, r11
    srwi r11, r0, 24
    xor r10, r11, r10
    slwi r0, r0, 8
    clrlslwi r10, r10, 24, 2
    lwzx r10, r4, r10
    xor r0, r0, r10
    srwi r10, r0, 24
    xor r9, r10, r9
    slwi r0, r0, 8
    clrlslwi r9, r9, 24, 2
    lwzx r9, r4, r9
    xor r0, r0, r9
    srwi r9, r0, 24
    xor r8, r9, r8
    slwi r0, r0, 8
    clrlslwi r8, r8, 24, 2
    lwzx r8, r4, r8
    xor r0, r0, r8
    srwi r8, r0, 24
    xor r7, r8, r7
    slwi r0, r0, 8
    clrlslwi r7, r7, 24, 2
    lwzx r7, r4, r7
    xor r0, r0, r7
    srwi r7, r0, 24
    xor r6, r7, r6
    slwi r0, r0, 8
    clrlslwi r6, r6, 24, 2
    lwzx r6, r4, r6
    xor r0, r0, r6
    bdnz lbl_fn_800DC6B4_000005E0
lbl_fn_800DC6B4_000006EC:
    lis r7, lbl_807348A0@ha
    subf r4, r5, r3
    addi r7, r7, lbl_807348A0@l
    add r6, r31, r5
    mtctr r4
    cmplw r5, r3
    bge lbl_fn_800DC6B4_00000730
lbl_fn_800DC6B4_00000708:
    lbz r3, 0x0(r6)
    srwi r4, r0, 24
    slwi r0, r0, 8
    addi r6, r6, 0x1
    extsb r3, r3
    xor r3, r4, r3
    clrlslwi r3, r3, 24, 2
    lwzx r3, r7, r3
    xor r0, r0, r3
    bdnz lbl_fn_800DC6B4_00000708
lbl_fn_800DC6B4_00000730:
    li r3, -0x1
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    xor r3, r0, r3
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800DC880(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl strlen
    li r4, -0x1
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_800DC880_00000830
lbl_fn_800DC880_0000077C:
    lbz r0, 0x0(r31)
    slwi r0, r0, 24
    xor r4, r4, r0
    clrrwi. r0, r4, 31
    slwi r4, r4, 1
    beq lbl_fn_800DC880_0000079C
    xoris r4, r4, 0x4c1
    xori r4, r4, 0x1db7
lbl_fn_800DC880_0000079C:
    clrrwi. r0, r4, 31
    slwi r4, r4, 1
    beq lbl_fn_800DC880_000007B0
    xoris r4, r4, 0x4c1
    xori r4, r4, 0x1db7
lbl_fn_800DC880_000007B0:
    clrrwi. r0, r4, 31
    slwi r4, r4, 1
    beq lbl_fn_800DC880_000007C4
    xoris r4, r4, 0x4c1
    xori r4, r4, 0x1db7
lbl_fn_800DC880_000007C4:
    clrrwi. r0, r4, 31
    slwi r4, r4, 1
    beq lbl_fn_800DC880_000007D8
    xoris r4, r4, 0x4c1
    xori r4, r4, 0x1db7
lbl_fn_800DC880_000007D8:
    clrrwi. r0, r4, 31
    slwi r4, r4, 1
    beq lbl_fn_800DC880_000007EC
    xoris r4, r4, 0x4c1
    xori r4, r4, 0x1db7
lbl_fn_800DC880_000007EC:
    clrrwi. r0, r4, 31
    slwi r4, r4, 1
    beq lbl_fn_800DC880_00000800
    xoris r4, r4, 0x4c1
    xori r4, r4, 0x1db7
lbl_fn_800DC880_00000800:
    clrrwi. r0, r4, 31
    slwi r4, r4, 1
    beq lbl_fn_800DC880_00000814
    xoris r4, r4, 0x4c1
    xori r4, r4, 0x1db7
lbl_fn_800DC880_00000814:
    clrrwi. r0, r4, 31
    slwi r4, r4, 1
    beq lbl_fn_800DC880_00000828
    xoris r4, r4, 0x4c1
    xori r4, r4, 0x1db7
lbl_fn_800DC880_00000828:
    addi r31, r31, 0x1
    bdnz lbl_fn_800DC880_0000077C
lbl_fn_800DC880_00000830:
    li r0, -0x1
    lwz r31, 0xc(r1)
    xor r3, r4, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DC978(void)
{
    nofralloc
    b fn_8068B1A4
}

asm void fn_800DC97C(void)
{
    nofralloc
    b fn_8068B29C
}

asm void fn_800DC980(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    stw r31, 0x28c(r1)
    stw r30, 0x288(r1)
    mr r30, r3
    bne cr1, lbl_fn_800DC980_00000890
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_800DC980_00000890:
    stw r3, 0x8(r1)
    addi r11, r1, 0x298
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r4, 0xc(r1)
    addi r31, r1, 0x70
    addi r3, r1, 0x80
    stw r5, 0x10(r1)
    mr r5, r31
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x70(r1)
    stw r11, 0x74(r1)
    stw r0, 0x78(r1)
    bl fn_8068093C
    li r0, 0x0
    stw r0, 0x0(r30)
    addi r3, r1, 0x80
    stw r0, 0x4(r30)
    stw r0, 0x8(r30)
    bl strlen
    mr r31, r3
    mr r3, r30
    mr r4, r31
    bl fn_80013DC4
    addi r6, r1, 0x80
    lbz r0, 0x6c(r1)
    mr r7, r6
    stb r0, 0x68(r1)
    mr r3, r30
    addi r8, r1, 0x68
    add r7, r7, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x294(r1)
    lwz r31, 0x28c(r1)
    lwz r30, 0x288(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_800DCA6C(void)
{
    nofralloc
    blr
}

asm void fn_800DCA70(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807798D8@ha
    lfs f0, lbl_80881260
    stw r0, 0x44(r1)
    addi r0, r3, 0x40
    cmplw r4, r0
    li r6, 0x0
    stw r31, 0x3c(r1)
    addi r5, r5, lbl_807798D8@l
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r4
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    stw r6, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r5, 0x0(r3)
    beq lbl_fn_800DCA70_000009C0
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r31, 0x40
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800DCA70_000009C0:
    lfs f3, lbl_80881264
    li r0, 0x0
    lfs f2, lbl_80881268
    mr r3, r28
    lfs f1, lbl_80881260
    addi r30, r1, 0x1c
    lfs f0, lbl_8088126C
    stfs f3, 0x84(r31)
    stfs f2, 0x88(r31)
    stfs f1, 0x8c(r31)
    stfs f0, 0x90(r31)
    stw r0, 0x80(r31)
    stw r0, 0x94(r31)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x10
    bl fn_8006B174
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_800DCA70_00000A58
    addi r4, r1, 0x11
    b lbl_fn_800DCA70_00000A5C
lbl_fn_800DCA70_00000A58:
    lwz r4, 0x18(r1)
lbl_fn_800DCA70_00000A5C:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800DCA70_00000A88
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_800DCA70_00000A88
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x94(r31)
    mr r29, r3
    b lbl_fn_800DCA70_00000A8C
lbl_fn_800DCA70_00000A88:
    li r29, 0x0
lbl_fn_800DCA70_00000A8C:
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800DCA70_00000AA0
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_800DCA70_00000AA0:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800DCA70_00000AB4
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_800DCA70_00000AB4:
    lis r30, lbl_80734D2C@ha
    lfs f1, lbl_80881270
    lfs f2, lbl_80881274
    mr r3, r29
    lfs f3, lbl_80881278
    addi r4, r30, lbl_80734D2C@l
    addi r5, r31, 0x84
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    addi r4, r30, lbl_80734D2C@l
    lfs f1, lbl_8088127C
    lfs f2, lbl_80881280
    mr r3, r29
    lfs f3, lbl_80881284
    addi r4, r4, 0x6
    addi r5, r31, 0x8c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800DCC54(void)
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
    beq lbl_fn_800DCC54_00000B98
    lis r12, lbl_807798D8@ha
    addi r12, r12, lbl_807798D8@l
    stw r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    addic. r0, r30, 0x94
    beq lbl_fn_800DCC54_00000B88
    lwz r4, 0x94(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800DCC54_00000B88
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_800DCC54_00000B88
    bl fn_800897D8
lbl_fn_800DCC54_00000B88:
    cmpwi r31, 0x0
    ble lbl_fn_800DCC54_00000B98
    mr r3, r30
    bl dtor_80084684
lbl_fn_800DCC54_00000B98:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DCCE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x1
    bl fn_805B55AC
    addi r3, r29, 0x40
    bl fn_805B5714
    addi r3, r29, 0x20
    bl fn_805B68A4
    addi r3, r29, 0x2c
    bl fn_805B68EC
    bl fn_805B5A50
    mr r30, r3
    bl fn_800827E0
    lis r31, lbl_80734D2C@ha
    mr r4, r30
    addi r31, r31, lbl_80734D2C@l
    li r5, 0x20
    addi r7, r31, 0xd
    li r6, 0x6
    mr r8, r7
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    cmpwi r3, 0x0
    stw r3, 0x3c(r29)
    bne lbl_fn_800DCCE0_00000C44
    addi r3, r31, 0xe
    addi r5, r31, 0x20
    li r4, 0x35
    crclr 6
    bl OSPanic
lbl_fn_800DCCE0_00000C44:
    lwz r3, 0x3c(r29)
    bl fn_805B5AD8
    li r0, 0x2
    stw r0, 0x8(r29)
    stw r29, lbl_8087F010
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800DCDA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800DCDA0_00000CCC
    cmpwi r0, 0x4
    beq lbl_fn_800DCDA0_00000CA4
    cmpwi r0, 0x1
    bne lbl_fn_800DCDA0_00000CAC
lbl_fn_800DCDA0_00000CA4:
    bl fn_805B601C
    bl fn_805B6030
lbl_fn_800DCDA0_00000CAC:
    bl fn_805B59C0
    bl fn_805B56C4
    bl fn_800827E0
    lwz r4, 0x3c(r31)
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x8(r31)
    stw r0, lbl_8087F010
lbl_fn_800DCDA0_00000CCC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DCE0C(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087EFB4
    lfs f1, 0x10(r4)
    li r5, 0x12
    b fn_800BDB58
}

asm void fn_800DCE20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r4, 0x8(r3)
    stw r0, 0x8(r1)
    cmpwi r4, 0x3
    stw r0, 0x10(r1)
    beq lbl_fn_800DCE20_00000D3C
    cmpwi r4, 0x4
    beq lbl_fn_800DCE20_00000D7C
    cmpwi r4, 0x1
    beq lbl_fn_800DCE20_00000DD0
    cmpwi r4, 0x2
    beq lbl_fn_800DCE20_00001038
    b lbl_fn_800DCE20_00000DE4
lbl_fn_800DCE20_00000D3C:
    li r3, 0x1
    bl fn_805B5E80
    bl fn_805B6008
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_800DCE20_00000D6C
    bl fn_800499D0
    subfic r4, r3, 0x3
    subi r0, r3, 0x3
    or r0, r4, r0
    srwi r3, r0, 31
    bl fn_805B6C48
lbl_fn_800DCE20_00000D6C:
    li r3, 0x4
    li r0, 0x0
    stw r3, 0x8(r31)
    stw r0, 0x80(r31)
lbl_fn_800DCE20_00000D7C:
    bl fn_805B6958
    lwz r0, 0x80(r31)
    subi r3, r3, 0x1
    cmplw r0, r3
    blt lbl_fn_800DCE20_00000D98
    li r0, 0x1
    stw r0, 0x1c(r31)
lbl_fn_800DCE20_00000D98:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800DCE20_00000DC4
    bl fn_805B6958
    lwz r0, 0x80(r31)
    subi r3, r3, 0x1
    cmplw r0, r3
    blt lbl_fn_800DCE20_00000DC4
    li r0, 0x1
    stw r0, 0x8(r31)
    b lbl_fn_800DCE20_00000DD0
lbl_fn_800DCE20_00000DC4:
    li r3, 0x0
    bl fn_805B6124
    b lbl_fn_800DCE20_00000DE4
lbl_fn_800DCE20_00000DD0:
    bl fn_805B601C
    bl fn_805B6030
    li r0, 0x2
    stw r0, 0x8(r31)
    b lbl_fn_800DCE20_00001038
lbl_fn_800DCE20_00000DE4:
    lwz r3, lbl_8087EEE0
    lis r5, lbl_80734D00@ha
    lwz r6, 0x4(r31)
    lwz r4, 0x40(r3)
    lhz r0, 0x10(r3)
    cmpwi r6, 0x1
    xoris r9, r4, 0x8000
    stw r9, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_80734D00@l(r5)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f3
    lwz r0, 0x3c(r3)
    fsubs f0, f0, f3
    fdivs f4, f1, f0
    bne lbl_fn_800DCE20_00000E88
    lwz r6, 0x20(r31)
    lis r4, lbl_80734D08@ha
    lwz r7, 0x24(r31)
    srwi r0, r6, 1
    stw r0, 0xc(r1)
    srwi r0, r7, 1
    lfd f4, lbl_80734D08@l(r4)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f3, f1, f4
    lfs f2, 0x14(r31)
    fsubs f1, f0, f4
    lfs f0, 0x18(r31)
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    fctiwz f1, f2
    fctiwz f0, f0
    stfd f1, 0x18(r1)
    stfd f0, 0x20(r1)
    lwz r4, 0x1c(r1)
    lwz r5, 0x24(r1)
    b lbl_fn_800DCE20_00001014
lbl_fn_800DCE20_00000E88:
    subi r5, r6, 0x2
    cmplwi r5, 0x1
    bgt lbl_fn_800DCE20_00000F68
    lwz r5, 0x44(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800DCE20_00000EB4
    mr r7, r4
    mr r6, r0
    li r4, 0x0
    li r5, 0x0
    b lbl_fn_800DCE20_00001014
lbl_fn_800DCE20_00000EB4:
    cmpwi r6, 0x2
    bne lbl_fn_800DCE20_00000F24
    mulli r6, r0, 0x30
    lis r5, 0x38e4
    subi r7, r4, 0x40
    subi r5, r5, 0x71c7
    mulhw r5, r5, r6
    xoris r8, r7, 0x8000
    stw r8, 0xc(r1)
    lfd f0, 0x8(r1)
    srawi r5, r5, 3
    stw r9, 0xc(r1)
    srwi r6, r5, 31
    fsubs f2, f0, f3
    add r5, r5, r6
    lfd f0, 0x8(r1)
    xoris r5, r5, 0x8000
    stw r5, 0x14(r1)
    fsubs f0, f0, f3
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f1, f1, f4
    fmuls f1, f2, f1
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r6, 0x24(r1)
    b lbl_fn_800DCE20_00000F44
lbl_fn_800DCE20_00000F24:
    mulli r6, r0, 0x30
    lis r5, 0x38e4
    mr r7, r4
    subi r5, r5, 0x71c7
    mulhw r5, r5, r6
    srawi r5, r5, 3
    srwi r6, r5, 31
    add r6, r5, r6
lbl_fn_800DCE20_00000F44:
    subf r8, r6, r0
    subf r5, r7, r4
    srwi r0, r8, 31
    add r4, r0, r8
    srwi r0, r5, 31
    srawi r4, r4, 1
    add r0, r0, r5
    srawi r5, r0, 1
    b lbl_fn_800DCE20_00001014
lbl_fn_800DCE20_00000F68:
    lwz r5, 0x44(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800DCE20_00000FB8
    li r7, 0x1a0
    stw r9, 0x14(r1)
    xoris r4, r7, 0x8000
    lfs f0, lbl_80881284
    stw r4, 0xc(r1)
    mr r6, r0
    lfd f2, 0x10(r1)
    li r4, 0x0
    lfd f1, 0x8(r1)
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    fsubs f1, f2, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r5, 0x24(r1)
    b lbl_fn_800DCE20_00001014
lbl_fn_800DCE20_00000FB8:
    mulli r6, r4, 0x24
    subi r7, r4, 0x40
    lis r4, 0x2aab
    li r5, 0x20
    subi r4, r4, 0x5555
    mulhw r4, r4, r6
    srawi r4, r4, 3
    srwi r6, r4, 31
    mullw r8, r0, r7
    add r4, r4, r6
    divw r4, r8, r4
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fdivs f0, f0, f4
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r6, 0x24(r1)
    subf r4, r6, r0
    srwi r0, r4, 31
    add r0, r0, r4
    srawi r4, r0, 1
lbl_fn_800DCE20_00001014:
    bl fn_805B6478
    stw r3, 0x80(r31)
    bl fn_806140C0
    lwz r3, lbl_8087EFB4
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_800DCE20_00001038:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800DD178(void)
{
    nofralloc
    blr
}

asm void fn_800DD17C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80881288
    lis r3, 0x8889
    stw r0, 0x14(r1)
    mulli r0, r4, 0x3e8
    subi r3, r3, 0x7777
    fmuls f0, f0, f1
    mulhw r3, r3, r0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    add r0, r3, r0
    lwz r3, 0xc(r1)
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r4, r0, r4
    bl fn_805B6AE4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DD1D0(void)
{
    nofralloc
    b fn_805B6C10
}

asm void fn_800DD1D4(void)
{
    nofralloc
    lwz r3, 0x80(r3)
    blr
}

asm void fn_800DD1DC(void)
{
    nofralloc
    b fn_805B6958
}

asm void fn_800DD1E0(void)
{
    nofralloc
    b fn_805B6934
}

asm void fn_800DD1E4(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_800DD1EC(void)
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
    bl fn_80686A48
    mr r31, r3
    mr r3, r29
    bl fn_800DC1DC
    cmpw r3, r31
    ble lbl_fn_800DD1EC_0000115C
    lhz r4, 0x0(r29)
    subf. r6, r31, r3
    mr r5, r29
    li r0, 0x20
    subi r3, r4, 0x30
    cntlzw r4, r3
    li r3, 0x30
    srwi r4, r4, 5
    mtctr r6
    ble lbl_fn_800DD1EC_00001140
lbl_fn_800DD1EC_00001124:
    cmpwi r4, 0x0
    beq lbl_fn_800DD1EC_00001134
    sth r3, 0x0(r5)
    b lbl_fn_800DD1EC_00001138
lbl_fn_800DD1EC_00001134:
    sth r0, 0x0(r5)
lbl_fn_800DD1EC_00001138:
    addi r5, r5, 0x2
    bdnz lbl_fn_800DD1EC_00001124
lbl_fn_800DD1EC_00001140:
    slwi r0, r6, 1
    li r3, 0x0
    sthx r3, r29, r0
    mr r3, r29
    mr r4, r30
    bl fn_80686AC4
    mr r30, r29
lbl_fn_800DD1EC_0000115C:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800DD2A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8006BA30
    subi r0, r3, 0x2
    li r27, 0x2e
    cmplwi r0, 0x3
    bgt lbl_fn_800DD2A8_000011AC
    li r27, 0x2c
lbl_fn_800DD2A8_000011AC:
    mr r3, r31
    bl fn_80686A48
    mr r29, r3
    mr r3, r31
    mr r4, r27
    bl fn_80686B64
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_800DD2A8_000011D8
    bl fn_80686A48
    subf r29, r3, r29
lbl_fn_800DD2A8_000011D8:
    cmpwi r27, 0x0
    beq lbl_fn_800DD2A8_000011F0
    addi r3, r27, 0x2
    bl fn_80686A48
    mr r27, r3
    b lbl_fn_800DD2A8_000011F4
lbl_fn_800DD2A8_000011F0:
    li r27, 0x0
lbl_fn_800DD2A8_000011F4:
    mr r3, r30
    li r4, 0x2e
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_800DD2A8_00001218
    addi r3, r3, 0x2
    bl fn_800DC1DC
    mr r28, r3
    b lbl_fn_800DD2A8_0000121C
lbl_fn_800DD2A8_00001218:
    li r28, 0x5
lbl_fn_800DD2A8_0000121C:
    lhz r0, 0x0(r30)
    cmplwi r0, 0x2e
    beq lbl_fn_800DD2A8_00001234
    mr r3, r30
    bl fn_800DC1DC
    b lbl_fn_800DD2A8_00001238
lbl_fn_800DD2A8_00001234:
    mr r3, r29
lbl_fn_800DD2A8_00001238:
    cmpw r28, r27
    bge lbl_fn_800DD2A8_000012B8
    lhz r4, 0x0(r30)
    subf. r6, r29, r3
    mr r5, r30
    li r0, 0x20
    subi r3, r4, 0x30
    cntlzw r4, r3
    li r3, 0x30
    srwi r4, r4, 5
    mtctr r6
    ble lbl_fn_800DD2A8_00001284
lbl_fn_800DD2A8_00001268:
    cmpwi r4, 0x0
    beq lbl_fn_800DD2A8_00001278
    sth r3, 0x0(r5)
    b lbl_fn_800DD2A8_0000127C
lbl_fn_800DD2A8_00001278:
    sth r0, 0x0(r5)
lbl_fn_800DD2A8_0000127C:
    addi r5, r5, 0x2
    bdnz lbl_fn_800DD2A8_00001268
lbl_fn_800DD2A8_00001284:
    slwi r0, r6, 1
    li r29, 0x0
    sthx r29, r30, r0
    mr r3, r30
    mr r4, r31
    bl fn_80686AC4
    mr r3, r31
    bl fn_80686A48
    subf r0, r28, r27
    mr r31, r30
    subf r0, r0, r3
    slwi r0, r0, 1
    sthx r29, r30, r0
lbl_fn_800DD2A8_000012B8:
    mr r3, r31
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800DD3FC(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    stfd f30, 0x1d0(r1)
    psq_st f30, 0x1d8(r1), 0, 0
    bl _savegpr_16
    mr r17, r3
    bne cr1, lbl_fn_800DD3FC_0000131C
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_800DD3FC_0000131C:
    lis r11, lbl_80734DC0@ha
    addi r12, r1, 0x1f8
    addi r0, r1, 0x8
    lis r16, 0x200
    stw r3, 0x8(r1)
    mr r22, r4
    lfd f30, lbl_80734DC0@l(r11)
    mr r21, r17
    stw r4, 0xc(r1)
    addi r30, r1, 0x78
    lfs f31, lbl_80881290
    addi r26, r1, 0xf8
    stw r5, 0x10(r1)
    lis r28, 0x4330
    li r31, 0x0
    li r27, 0x25
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r16, 0x68(r1)
    stw r12, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_800DD3FC_00001730
lbl_fn_800DD3FC_00001380:
    cmplwi r0, 0x25
    beq lbl_fn_800DD3FC_0000139C
    lhz r0, 0x0(r22)
    addi r22, r22, 0x2
    sth r0, 0x0(r21)
    addi r21, r21, 0x2
    b lbl_fn_800DD3FC_00001730
lbl_fn_800DD3FC_0000139C:
    addi r23, r1, 0x78
    li r24, 0x0
    li r20, 0x0
    li r19, 0x0
    li r18, 0x0
    li r16, 0x0
    addi r22, r22, 0x2
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_000013BC:
    lhz r0, 0x0(r22)
    cmpwi r0, 0x62
    beq lbl_fn_800DD3FC_000014A0
    bge lbl_fn_800DD3FC_00001414
    cmpwi r0, 0x2b
    beq lbl_fn_800DD3FC_000016CC
    bge lbl_fn_800DD3FC_000013F0
    cmpwi r0, 0x25
    beq lbl_fn_800DD3FC_0000145C
    bge lbl_fn_800DD3FC_000016FC
    cmpwi r0, 0x20
    beq lbl_fn_800DD3FC_000016E4
    b lbl_fn_800DD3FC_000016FC
lbl_fn_800DD3FC_000013F0:
    cmpwi r0, 0x2f
    beq lbl_fn_800DD3FC_000016FC
    bge lbl_fn_800DD3FC_00001408
    cmpwi r0, 0x2e
    bge lbl_fn_800DD3FC_000016B4
    b lbl_fn_800DD3FC_000016FC
lbl_fn_800DD3FC_00001408:
    cmpwi r0, 0x3a
    bge lbl_fn_800DD3FC_000016FC
    b lbl_fn_800DD3FC_000016B4
lbl_fn_800DD3FC_00001414:
    cmpwi r0, 0x6f
    beq lbl_fn_800DD3FC_000014DC
    bge lbl_fn_800DD3FC_00001444
    cmpwi r0, 0x65
    beq lbl_fn_800DD3FC_000016FC
    bge lbl_fn_800DD3FC_00001438
    cmpwi r0, 0x64
    bge lbl_fn_800DD3FC_00001554
    b lbl_fn_800DD3FC_00001480
lbl_fn_800DD3FC_00001438:
    cmpwi r0, 0x67
    bge lbl_fn_800DD3FC_000016FC
    b lbl_fn_800DD3FC_000015E8
lbl_fn_800DD3FC_00001444:
    cmpwi r0, 0x78
    beq lbl_fn_800DD3FC_00001518
    bge lbl_fn_800DD3FC_000016FC
    cmpwi r0, 0x73
    beq lbl_fn_800DD3FC_0000146C
    b lbl_fn_800DD3FC_000016FC
lbl_fn_800DD3FC_0000145C:
    sth r27, 0xf8(r1)
    addi r24, r1, 0xf8
    sth r31, 0xfa(r1)
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_0000146C:
    addi r3, r1, 0x68
    li r4, 0x1
    bl __va_arg
    lwz r24, 0x0(r3)
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_00001480:
    addi r3, r1, 0x68
    li r4, 0x1
    bl __va_arg
    lhz r0, 0x0(r3)
    addi r24, r1, 0xf8
    sth r0, 0xf8(r1)
    sth r31, 0xfa(r1)
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_000014A0:
    addi r3, r1, 0x68
    li r4, 0x1
    bl __va_arg
    lwz r3, 0x0(r3)
    addi r4, r1, 0xf8
    li r5, 0x2
    bl fn_8068B2A0
    cmpwi r18, 0x0
    mr r24, r3
    ble lbl_fn_800DD3FC_00001704
    mr r4, r3
    addi r3, r1, 0x78
    bl fn_800DD1EC
    mr r24, r3
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_000014DC:
    addi r3, r1, 0x68
    li r4, 0x1
    bl __va_arg
    lwz r3, 0x0(r3)
    addi r4, r1, 0xf8
    li r5, 0x8
    bl fn_8068B2A0
    cmpwi r18, 0x0
    mr r24, r3
    ble lbl_fn_800DD3FC_00001704
    mr r4, r3
    addi r3, r1, 0x78
    bl fn_800DD1EC
    mr r24, r3
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_00001518:
    addi r3, r1, 0x68
    li r4, 0x1
    bl __va_arg
    lwz r3, 0x0(r3)
    addi r4, r1, 0xf8
    li r5, 0x10
    bl fn_8068B2A0
    cmpwi r18, 0x0
    mr r24, r3
    ble lbl_fn_800DD3FC_00001704
    mr r4, r3
    addi r3, r1, 0x78
    bl fn_800DD1EC
    mr r24, r3
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_00001554:
    addi r3, r1, 0x68
    li r4, 0x1
    bl __va_arg
    lwz r25, 0x0(r3)
    addi r4, r1, 0xf8
    li r5, 0xa
    mr r3, r25
    bl fn_8068B2A0
    cmpwi r18, 0x0
    mr r24, r3
    ble lbl_fn_800DD3FC_000015A0
    mr r4, r3
    addi r3, r1, 0x78
    bl fn_800DD1EC
    mr r4, r3
    addi r3, r1, 0xf8
    li r5, 0x80
    bl memcpy
    addi r24, r1, 0xf8
lbl_fn_800DD3FC_000015A0:
    cmpwi r20, 0x0
    bne lbl_fn_800DD3FC_000015B0
    cmpwi r19, 0x0
    beq lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_000015B0:
    cmpwi r25, 0x0
    blt lbl_fn_800DD3FC_00001704
    addi r3, r1, 0xfa
    addi r4, r1, 0xf8
    li r5, 0x7e
    bl memmove
    cmpwi r20, 0x0
    li r0, 0x20
    beq lbl_fn_800DD3FC_000015D8
    li r0, 0x2b
lbl_fn_800DD3FC_000015D8:
    sth r0, 0xf8(r1)
    li r20, 0x0
    li r19, 0x0
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_000015E8:
    addi r3, r1, 0x68
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
    stw r28, 0x180(r1)
    frsp f1, f1
    fctiwz f0, f1
    stfd f0, 0x178(r1)
    lwz r3, 0x17c(r1)
    xoris r0, r3, 0x8000
    stw r0, 0x184(r1)
    lfd f0, 0x180(r1)
    fsubs f0, f0, f30
    fsubs f0, f1, f0
    fmuls f0, f31, f0
    fabs f0, f0
    frsp f0, f0
    fctiwz f0, f0
    stfd f0, 0x188(r1)
    lwz r25, 0x18c(r1)
    cmpwi r25, 0x0
    ble lbl_fn_800DD3FC_00001644
    addi r25, r25, 0x5
lbl_fn_800DD3FC_00001644:
    addi r4, r1, 0xf8
    li r5, 0xa
    bl fn_8068B2A0
    mr r24, r3
    bl fn_80686A48
    mr r29, r3
    bl fn_8006BA30
    subi r0, r3, 0x2
    li r4, 0x2e
    cmplwi r0, 0x3
    bgt lbl_fn_800DD3FC_00001674
    li r4, 0x2c
lbl_fn_800DD3FC_00001674:
    slwi r3, r29, 1
    addi r0, r29, 0x1
    sthx r4, r24, r3
    slwi r0, r0, 1
    mr r3, r25
    li r5, 0xa
    add r4, r24, r0
    bl fn_8068B2A0
    cmpwi r18, 0x0
    mr r24, r26
    ble lbl_fn_800DD3FC_00001704
    mr r4, r26
    addi r3, r1, 0x78
    bl fn_800DD2A8
    mr r24, r3
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_000016B4:
    sthx r0, r30, r16
    addi r22, r22, 0x2
    addi r18, r18, 0x1
    addi r16, r16, 0x2
    sthu r31, 0x2(r23)
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_000016CC:
    lhz r0, -0x2(r22)
    cmplwi r0, 0x25
    bne lbl_fn_800DD3FC_000016DC
    li r20, 0x1
lbl_fn_800DD3FC_000016DC:
    addi r22, r22, 0x2
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_000016E4:
    lhz r0, -0x2(r22)
    cmplwi r0, 0x25
    bne lbl_fn_800DD3FC_000016F4
    li r19, 0x1
lbl_fn_800DD3FC_000016F4:
    addi r22, r22, 0x2
    b lbl_fn_800DD3FC_00001704
lbl_fn_800DD3FC_000016FC:
    sth r31, 0xf8(r1)
    addi r24, r1, 0xf8
lbl_fn_800DD3FC_00001704:
    cmpwi r24, 0x0
    beq lbl_fn_800DD3FC_000013BC
    addi r22, r22, 0x2
    b lbl_fn_800DD3FC_00001724
lbl_fn_800DD3FC_00001714:
    lhz r0, 0x0(r24)
    addi r24, r24, 0x2
    sth r0, 0x0(r21)
    addi r21, r21, 0x2
lbl_fn_800DD3FC_00001724:
    lhz r0, 0x0(r24)
    cmpwi r0, 0x0
    bne lbl_fn_800DD3FC_00001714
lbl_fn_800DD3FC_00001730:
    lhz r0, 0x0(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800DD3FC_00001380
    subf r3, r17, r21
    li r4, 0x0
    sth r4, 0x0(r21)
    srwi r0, r3, 31
    add r0, r0, r3
    psq_l f31, 0x1e8(r1), 0, 0
    srawi r3, r0, 1
    lfd f31, 0x1e0(r1)
    psq_l f30, 0x1d8(r1), 0, 0
    lfd f30, 0x1d0(r1)
    addi r11, r1, 0x1d0
    bl _restgpr_16
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}
