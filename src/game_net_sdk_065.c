#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void OSSleepThread(void);
extern void OSWakeupThread(void);
extern void _restgpr_15(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805F3210(void);
extern void fn_805F3350(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614790(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806165B0(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_80617520(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_806177F0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617A10(void);
extern void fn_80617D50(void);
extern void fn_80725FF0(void);
extern void fn_80726070(void);
extern void fn_807260C0(void);
extern void fn_80726250(void);
extern void fn_80726320(void);
extern void fn_807299D0(void);
extern void vsnprintf(void);

/* External data declarations */
extern u8 lbl_80808081[];
extern u8 lbl_8087D678[];
extern u8 lbl_8087D690[];

/* Small data declarations */
extern u32 lbl_8087EE40;
extern u32 lbl_80880550;
extern u32 lbl_80880558;
extern u32 lbl_80880560;
extern u32 lbl_80880570;
extern u32 lbl_80880574;
extern u32 lbl_80880578;
extern u32 lbl_8088057C;
extern u32 lbl_80889358;
extern u32 lbl_8088935C;
extern u32 lbl_80889360;
extern u32 lbl_80889368;
extern u32 lbl_80889370;
extern u32 lbl_80889378;
extern u32 lbl_8088937C;
extern u32 lbl_80889380;

/* Function declarations */
void pad_03_807264F4_text(void);
void fn_80726500(void);
void fn_80726560(void);
void fn_807265A0(void);
void fn_80726680(void);
void fn_80726760(void);
void fn_807267C0(void);
void fn_807267D0(void);
void fn_80726B50(void);
void fn_80726B90(void);
void fn_807274C0(void);
void fn_80727540(void);
void fn_807275A0(void);
void fn_80727600(void);
void fn_80727660(void);
void fn_80727790(void);
void fn_80727A10(void);
void fn_80727B60(void);
void fn_80727E50(void);
void fn_80727EB0(void);
void fn_80727F10(void);
void fn_80727FA0(void);
void fn_80728020(void);
void fn_80728230(void);
void fn_80728440(void);

asm void pad_03_807264F4_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_80726500(void)
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
    beq lbl_fn_80726500_00000048
    li r4, 0x0
    bl fn_80725FF0
    cmpwi r31, 0x0
    ble lbl_fn_80726500_00000048
    mr r3, r30
    bl dtor_80084684
lbl_fn_80726500_00000048:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80726560(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80726070
    li r0, 0x0
    stb r0, 0x6f(r31)
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807265A0(void)
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
    bl OSDisableInterrupts
    mr r30, r3
    lis r31, lbl_8087D678@ha
    b lbl_fn_807265A0_00000100
lbl_fn_807265A0_000000DC:
    la r3, lbl_80880560
    bl OSSleepThread
    lbz r0, 0x6f(r27)
    cmpwi r0, 0x0
    beq lbl_fn_807265A0_00000100
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_807265A0_0000011C
lbl_fn_807265A0_00000100:
    addi r3, r31, lbl_8087D678@l
    bl fn_805F3350
    cmpwi r3, 0x0
    beq lbl_fn_807265A0_000000DC
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_807265A0_0000011C:
    cmpwi r0, 0x0
    bne lbl_fn_807265A0_0000012C
    li r3, -0x3
    b lbl_fn_807265A0_00000168
lbl_fn_807265A0_0000012C:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_807260C0
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, lbl_8087D678@ha
    mr r30, r3
    addi r3, r4, lbl_8087D678@l
    bl fn_805F3210
    la r3, lbl_80880560
    bl OSWakeupThread
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
lbl_fn_807265A0_00000168:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80726680(void)
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
    bl OSDisableInterrupts
    mr r30, r3
    lis r31, lbl_8087D678@ha
    b lbl_fn_80726680_000001E0
lbl_fn_80726680_000001BC:
    la r3, lbl_80880560
    bl OSSleepThread
    lbz r0, 0x6f(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80726680_000001E0
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_80726680_000001FC
lbl_fn_80726680_000001E0:
    addi r3, r31, lbl_8087D678@l
    bl fn_805F3350
    cmpwi r3, 0x0
    beq lbl_fn_80726680_000001BC
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_80726680_000001FC:
    cmpwi r0, 0x0
    bne lbl_fn_80726680_0000020C
    li r3, -0x3
    b lbl_fn_80726680_00000248
lbl_fn_80726680_0000020C:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_80726250
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, lbl_8087D678@ha
    mr r30, r3
    addi r3, r4, lbl_8087D678@l
    bl fn_805F3210
    la r3, lbl_80880560
    bl OSWakeupThread
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
lbl_fn_80726680_00000248:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80726760(void)
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
    stb r0, 0x6f(r30)
    mr r31, r3
    la r3, lbl_80880560
    bl OSWakeupThread
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl fn_80726320
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807267C0(void)
{
    nofralloc
    la r0, lbl_80880550
    stw r0, lbl_80880558
    blr
}

asm void fn_807267D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    li r6, -0x1
    lis r5, lbl_8087D690@ha
    lfs f0, lbl_80889358
    stw r31, 0x2c(r1)
    li r0, 0xff
    addi r4, r5, lbl_8087D690@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    li r29, 0x0
    stw r28, 0x20(r1)
    addi r28, r3, 0x18
    stw r6, 0x0(r3)
    stw r29, 0x8(r1)
    stw r6, 0xc(r1)
    lbz r30, 0x8(r1)
    stw r6, 0x4(r3)
    lbz r31, 0x9(r1)
    stw r6, 0x8(r3)
    lbz r12, 0xa(r1)
    stw r6, 0xc(r3)
    lbz r11, 0xb(r1)
    stw r6, 0x10(r3)
    lbz r10, 0xc(r1)
    stw r6, 0x14(r3)
    lbz r9, 0xd(r1)
    stw r6, 0x18(r3)
    lbz r8, 0xe(r1)
    stw r6, 0x1c(r3)
    lbz r7, 0xf(r1)
    stb r0, 0x42(r3)
    stb r29, 0x43(r3)
    stfs f0, 0x44(r3)
    stw r29, 0x48(r3)
    stw r0, lbl_8087D690@l(r5)
    stw r29, 0x4(r4)
    lbz r6, 0x18(r3)
    lbz r5, 0x19(r3)
    lbz r4, 0x1a(r3)
    lbz r0, 0x1b(r3)
    stb r30, 0x0(r3)
    stb r31, 0x1(r3)
    stb r12, 0x2(r3)
    stb r11, 0x3(r3)
    stb r10, 0x4(r3)
    stb r9, 0x5(r3)
    stb r8, 0x6(r3)
    stb r7, 0x7(r3)
    stw r29, 0x20(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r0, 0xb(r3)
    lbz r0, 0x0(r28)
    stb r0, 0xc(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r28)
    stb r4, 0xd(r3)
    cmpwi r0, 0x2
    lbz r0, 0x2(r28)
    stb r0, 0xe(r3)
    lbz r0, 0x3(r28)
    stb r0, 0xf(r3)
    beq lbl_fn_807267D0_000003E4
    addi r5, r3, 0x18
    b lbl_fn_807267D0_000003E8
lbl_fn_807267D0_000003E4:
    addi r5, r3, 0x1c
lbl_fn_807267D0_000003E8:
    lbz r0, 0x0(r5)
    stb r0, 0x10(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r5)
    stb r4, 0x11(r3)
    cmpwi r0, 0x0
    lbz r0, 0x2(r5)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x13(r3)
    bne lbl_fn_807267D0_0000041C
    addi r6, r3, 0x18
    b lbl_fn_807267D0_00000420
lbl_fn_807267D0_0000041C:
    addi r6, r3, 0x1c
lbl_fn_807267D0_00000420:
    lbz r0, 0x0(r6)
    lis r5, lbl_80808081@ha
    stb r0, 0x14(r3)
    addi r12, r5, lbl_80808081@l
    lwz r0, 0x20(r3)
    li r4, -0x1
    lbz r5, 0x1(r6)
    stb r5, 0x15(r3)
    cmpwi r0, 0x1
    lbz r5, 0xb(r3)
    lbz r0, 0x2(r6)
    stb r0, 0x16(r3)
    lbz r11, 0x42(r3)
    lbz r0, 0xf(r3)
    stw r4, 0x10(r1)
    mullw r10, r5, r11
    lbz r31, 0x3(r6)
    lbz r5, 0x11(r1)
    lbz r7, 0x13(r3)
    stb r5, 0x19(r3)
    mullw r9, r0, r11
    lbz r0, 0x13(r1)
    lbz r4, 0x12(r1)
    stb r5, 0x9(r3)
    lbz r6, 0x10(r1)
    mullw r8, r7, r11
    stb r0, 0x1b(r3)
    stb r0, 0xb(r3)
    mulhw r0, r12, r9
    stb r4, 0x1a(r3)
    stb r4, 0xa(r3)
    stb r6, 0x18(r3)
    mulhw r5, r12, r10
    add r0, r0, r9
    stb r6, 0x8(r3)
    add r4, r5, r10
    srawi r4, r4, 7
    mulhw r4, r12, r8
    srawi r5, r0, 7
    srwi r6, r5, 31
    add r5, r5, r6
    stb r5, 0xf(r3)
    mullw r7, r31, r11
    add r4, r4, r8
    srawi r5, r4, 7
    mulhw r0, r12, r7
    srwi r6, r5, 31
    add r5, r5, r6
    stb r5, 0x13(r3)
    add r0, r0, r7
    srawi r0, r0, 7
    srwi r4, r0, 31
    add r0, r0, r4
    stb r0, 0x17(r3)
    beq lbl_fn_807267D0_00000504
    addi r5, r3, 0x18
    b lbl_fn_807267D0_00000508
lbl_fn_807267D0_00000504:
    addi r5, r3, 0x1c
lbl_fn_807267D0_00000508:
    lbz r0, 0x0(r5)
    stb r0, 0xc(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r5)
    stb r4, 0xd(r3)
    cmpwi r0, 0x2
    lbz r0, 0x2(r5)
    stb r0, 0xe(r3)
    lbz r0, 0x3(r5)
    stb r0, 0xf(r3)
    beq lbl_fn_807267D0_0000053C
    addi r5, r3, 0x18
    b lbl_fn_807267D0_00000540
lbl_fn_807267D0_0000053C:
    addi r5, r3, 0x1c
lbl_fn_807267D0_00000540:
    lbz r0, 0x0(r5)
    stb r0, 0x10(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r5)
    stb r4, 0x11(r3)
    cmpwi r0, 0x0
    lbz r0, 0x2(r5)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x13(r3)
    bne lbl_fn_807267D0_00000574
    addi r7, r3, 0x18
    b lbl_fn_807267D0_00000578
lbl_fn_807267D0_00000574:
    addi r7, r3, 0x1c
lbl_fn_807267D0_00000578:
    lbz r0, 0x0(r7)
    lis r4, lbl_80808081@ha
    stb r0, 0x14(r3)
    addi r10, r4, lbl_80808081@l
    lbz r4, 0xb(r3)
    li r0, 0x1
    lbz r5, 0x1(r7)
    stb r5, 0x15(r3)
    lbz r8, 0x42(r3)
    lbz r5, 0x2(r7)
    stb r5, 0x16(r3)
    mullw r6, r4, r8
    lbz r5, 0xf(r3)
    lbz r9, 0x3(r7)
    lbz r4, 0x13(r3)
    lfs f0, lbl_80889358
    mullw r7, r5, r8
    lfs f1, lbl_8088935C
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    mullw r5, r4, r8
    stfs f1, 0x24(r3)
    stfs f1, 0x28(r3)
    mullw r4, r9, r8
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    mulhw r8, r10, r6
    mulhw r0, r10, r7
    add r6, r8, r6
    srawi r8, r6, 7
    mulhw r6, r10, r5
    srwi r9, r8, 31
    add r0, r0, r7
    add r7, r8, r9
    stb r7, 0xb(r3)
    srawi r7, r0, 7
    add r5, r6, r5
    srwi r6, r7, 31
    mulhw r0, r10, r4
    add r6, r7, r6
    stb r6, 0xf(r3)
    srawi r5, r5, 7
    srwi r6, r5, 31
    add r0, r0, r4
    srawi r0, r0, 7
    add r5, r5, r6
    srwi r4, r0, 31
    stb r5, 0x13(r3)
    add r0, r0, r4
    stb r0, 0x17(r3)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_80726B50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80726B50_00000684
    cmpwi r4, 0x0
    ble lbl_fn_80726B50_00000684
    bl dtor_80084684
lbl_fn_80726B50_00000684:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80726B90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_8087D690@ha
    stw r0, 0x34(r1)
    addi r4, r5, lbl_8087D690@l
    li r0, 0xff
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r0, lbl_8087D690@l(r5)
    stw r31, 0x4(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80726B90_000006E0
    lwz r4, 0x4(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_80726B90_00000700
lbl_fn_80726B90_000006E0:
    lwz r0, 0x0(r3)
    addi r4, r1, 0x1c
    stw r0, 0x20(r1)
    lwz r0, 0x4(r3)
    addi r3, r1, 0x20
    stw r0, 0x1c(r1)
    bl fn_80727B60
    b lbl_fn_80726B90_00000FB8
lbl_fn_80726B90_00000700:
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80726B90_00000E1C
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    subi r0, r3, 0x4
    cmplwi r0, 0x2
    ble lbl_fn_80726B90_00000ADC
    cmplwi r3, 0x1
    ble lbl_fn_80726B90_00000740
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_80726B90_0000093C
    b lbl_fn_80726B90_00000C7C
lbl_fn_80726B90_00000740:
    lbz r0, lbl_80880570
    extsb. r0, r0
    bne lbl_fn_80726B90_00000758
    li r0, 0x1
    stw r31, lbl_80880574
    stb r0, lbl_80880570
lbl_fn_80726B90_00000758:
    lfs f1, lbl_80889358
    addi r4, r1, 0x18
    lwz r0, lbl_80880574
    li r3, 0x0
    fmr f2, f1
    stw r0, 0x18(r1)
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xa
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    b lbl_fn_80726B90_00000FB8
lbl_fn_80726B90_0000093C:
    lbz r0, lbl_80880570
    extsb. r0, r0
    bne lbl_fn_80726B90_00000954
    li r0, 0x1
    stw r31, lbl_80880574
    stb r0, lbl_80880570
lbl_fn_80726B90_00000954:
    lfs f1, lbl_80889358
    addi r4, r1, 0x14
    lwz r0, lbl_80880574
    li r3, 0x0
    fmr f2, f1
    stw r0, 0x14(r1)
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    b lbl_fn_80726B90_00000FB8
lbl_fn_80726B90_00000ADC:
    lbz r0, lbl_80880570
    extsb. r0, r0
    bne lbl_fn_80726B90_00000AF4
    li r0, 0x1
    stw r31, lbl_80880574
    stb r0, lbl_80880570
lbl_fn_80726B90_00000AF4:
    lfs f1, lbl_80889358
    addi r4, r1, 0x10
    lwz r0, lbl_80880574
    li r3, 0x0
    fmr f2, f1
    stw r0, 0x10(r1)
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    b lbl_fn_80726B90_00000FB8
lbl_fn_80726B90_00000C7C:
    lbz r0, lbl_80880570
    extsb. r0, r0
    bne lbl_fn_80726B90_00000C94
    li r0, 0x1
    stw r31, lbl_80880574
    stb r0, lbl_80880570
lbl_fn_80726B90_00000C94:
    lfs f1, lbl_80889358
    addi r4, r1, 0xc
    lwz r0, lbl_80880574
    li r3, 0x0
    fmr f2, f1
    stw r0, 0xc(r1)
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    b lbl_fn_80726B90_00000FB8
lbl_fn_80726B90_00000E1C:
    lbz r0, lbl_80880570
    extsb. r0, r0
    bne lbl_fn_80726B90_00000E34
    li r0, 0x1
    stw r31, lbl_80880574
    stb r0, lbl_80880570
lbl_fn_80726B90_00000E34:
    lfs f1, lbl_80889358
    addi r4, r1, 0x8
    lwz r0, lbl_80880574
    li r3, 0x0
    fmr f2, f1
    stw r0, 0x8(r1)
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
lbl_fn_80726B90_00000FB8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_807274C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f1, lbl_80889360
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f0, f31, f0
    stfs f0, 0x24(r31)
    stfs f0, 0x28(r31)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80727540(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_80889360
    stw r0, 0x8(r1)
    lfs f0, 0x24(r31)
    lfd f1, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f1, f1, f2
    lwz r0, 0x24(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807275A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_80889360
    stw r0, 0x8(r1)
    lfs f0, 0x28(r31)
    lfd f1, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f1, f1, f2
    lwz r0, 0x24(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80727600(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_80889360
    stw r0, 0x8(r1)
    lfs f0, 0x28(r31)
    lfd f1, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f1, f1, f2
    lwz r0, 0x24(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80727660(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x54(r1)
    lis r0, 0x4330
    addi r4, r1, 0x8
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    stw r0, 0x20(r1)
    lwz r12, 0x0(r3)
    stw r0, 0x28(r1)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80727660_00001214
    lbz r3, 0xe(r1)
    lbz r0, 0xc(r1)
    extsb r3, r3
    lfd f4, lbl_80889360
    xoris r3, r3, 0x8000
    stw r3, 0x24(r1)
    extsb r0, r0
    lfs f3, 0x24(r31)
    lfd f0, 0x20(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    fsubs f2, f0, f4
    lfs f31, 0x44(r31)
    lfd f0, 0x28(r1)
    lfs f1, lbl_80889368
    fmuls f2, f2, f3
    fsubs f0, f0, f4
    fsubs f2, f31, f2
    fmuls f0, f0, f3
    fmuls f1, f2, f1
    fadds f1, f1, f0
    b lbl_fn_80727660_00001254
lbl_fn_80727660_00001214:
    lbz r3, 0xe(r1)
    lbz r0, 0xc(r1)
    extsb r3, r3
    lfd f3, lbl_80889360
    extsb r0, r0
    lfs f1, 0x24(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x24(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f2, 0x20(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f2, f3
    fsubs f0, f0, f3
    fmuls f31, f2, f1
    fmuls f1, f0, f1
lbl_fn_80727660_00001254:
    lfs f0, 0x2c(r31)
    mr r3, r31
    lfs f2, 0x30(r31)
    addi r4, r1, 0x8
    fadds f1, f0, f1
    lfs f3, 0x34(r31)
    bl fn_80727790
    lfs f0, 0x2c(r31)
    fmr f1, f31
    fadds f0, f0, f31
    stfs f0, 0x2c(r31)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80727790(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x60
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stfd f28, 0x70(r1)
    psq_st f28, 0x78(r1), 0, 0
    stfd f27, 0x60(r1)
    psq_st f27, 0x68(r1), 0, 0
    bl _savegpr_26
    lbz r28, 0x5(r4)
    lis r31, 0x4330
    lhz r0, 0x10(r4)
    li r11, 0x0
    lbz r26, 0x7(r4)
    lis r8, lbl_8087D690@ha
    add r6, r0, r28
    lhz r9, 0x12(r4)
    slwi r7, r0, 15
    lhz r5, 0xc(r4)
    add r0, r9, r26
    slwi r27, r6, 15
    divwu r30, r7, r5
    lwz r7, lbl_8087D690@l(r8)
    slwi r12, r0, 15
    stw r28, 0x3c(r1)
    lhz r6, 0xe(r4)
    slwi r9, r9, 15
    divwu r29, r9, r6
    cmpw r11, r7
    stw r31, 0x38(r1)
    fmr f29, f3
    lwz r0, 0x0(r4)
    fmr f27, f1
    divwu r28, r27, r5
    stw r31, 0x40(r1)
    lwz r10, 0x38(r3)
    clrlwi r31, r30, 16
    stw r26, 0x44(r1)
    clrlwi r30, r29, 16
    lwz r9, 0x3c(r3)
    divwu r7, r12, r6
    clrlwi r29, r28, 16
    lfd f5, lbl_80889370
    lfd f0, 0x38(r1)
    fmr f28, f2
    lfd f3, 0x40(r1)
    fsubs f4, f0, f5
    lfs f0, 0x24(r3)
    fsubs f3, f3, f5
    stw r11, 0x8(r1)
    mr r27, r3
    clrlwi r28, r7, 16
    fmuls f4, f4, f0
    lfs f0, 0x28(r3)
    stw r0, 0xc(r1)
    fmuls f0, f3, f0
    fadds f31, f1, f4
    stw r10, 0x10(r1)
    fadds f30, f2, f0
    stw r9, 0x14(r1)
    bne lbl_fn_80727790_000013D0
    addi r7, r8, lbl_8087D690@l
    lwz r3, 0x4(r7)
    cmplw r0, r3
    bne lbl_fn_80727790_000013D0
    lwz r3, 0x8(r7)
    cmpw r10, r3
    bne lbl_fn_80727790_000013D0
    lwz r3, 0xc(r7)
    cmpw r9, r3
    beq lbl_fn_80727790_000013D4
lbl_fn_80727790_000013D0:
    li r11, 0x1
lbl_fn_80727790_000013D4:
    cmpwi r11, 0x0
    beq lbl_fn_80727790_00001454
    lwz r7, 0x8(r4)
    mr r4, r0
    addi r3, r1, 0x18
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80889358
    addi r3, r1, 0x18
    lwz r4, 0x38(r27)
    li r6, 0x0
    fmr f2, f1
    lwz r5, 0x3c(r27)
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_806165B0
    lis r6, lbl_8087D690@ha
    lwz r7, 0x8(r1)
    addi r4, r6, lbl_8087D690@l
    lwz r5, 0xc(r1)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r7, lbl_8087D690@l(r6)
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
lbl_fn_80727790_00001454:
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    lis r3, 0xcc01
    stfs f27, -0x8000(r3)
    stfs f28, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0x8(r27)
    stw r0, -0x8000(r3)
    sth r31, -0x8000(r3)
    sth r30, -0x8000(r3)
    stfs f31, -0x8000(r3)
    stfs f28, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0xc(r27)
    stw r0, -0x8000(r3)
    sth r29, -0x8000(r3)
    sth r30, -0x8000(r3)
    stfs f31, -0x8000(r3)
    stfs f30, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0x14(r27)
    stw r0, -0x8000(r3)
    sth r29, -0x8000(r3)
    sth r28, -0x8000(r3)
    stfs f27, -0x8000(r3)
    stfs f30, -0x8000(r3)
    stfs f29, -0x8000(r3)
    lwz r0, 0x10(r27)
    stw r0, -0x8000(r3)
    sth r31, -0x8000(r3)
    sth r28, -0x8000(r3)
    addi r11, r1, 0x60
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    psq_l f27, 0x68(r1), 0, 0
    lfd f27, 0x60(r1)
    bl _restgpr_26
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80727A10(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    lbz r6, 0x18(r3)
    lbz r5, 0x19(r3)
    cmpwi r0, 0x1
    lbz r4, 0x1a(r3)
    lbz r0, 0x1b(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r0, 0xb(r3)
    beq lbl_fn_80727A10_00001550
    addi r5, r3, 0x18
    b lbl_fn_80727A10_00001554
lbl_fn_80727A10_00001550:
    addi r5, r3, 0x1c
lbl_fn_80727A10_00001554:
    lbz r0, 0x0(r5)
    stb r0, 0xc(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r5)
    stb r4, 0xd(r3)
    cmpwi r0, 0x2
    lbz r0, 0x2(r5)
    stb r0, 0xe(r3)
    lbz r0, 0x3(r5)
    stb r0, 0xf(r3)
    beq lbl_fn_80727A10_00001588
    addi r5, r3, 0x18
    b lbl_fn_80727A10_0000158C
lbl_fn_80727A10_00001588:
    addi r5, r3, 0x1c
lbl_fn_80727A10_0000158C:
    lbz r0, 0x0(r5)
    stb r0, 0x10(r3)
    lwz r0, 0x20(r3)
    lbz r4, 0x1(r5)
    stb r4, 0x11(r3)
    cmpwi r0, 0x0
    lbz r0, 0x2(r5)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r5)
    stb r0, 0x13(r3)
    bne lbl_fn_80727A10_000015C0
    addi r5, r3, 0x18
    b lbl_fn_80727A10_000015C4
lbl_fn_80727A10_000015C0:
    addi r5, r3, 0x1c
lbl_fn_80727A10_000015C4:
    lbz r0, 0x0(r5)
    lis r4, lbl_80808081@ha
    stb r0, 0x14(r3)
    addi r10, r4, lbl_80808081@l
    lbz r0, 0xb(r3)
    lbz r4, 0x1(r5)
    stb r4, 0x15(r3)
    lbz r7, 0x42(r3)
    lbz r4, 0x2(r5)
    stb r4, 0x16(r3)
    mullw r6, r0, r7
    lbz r4, 0xf(r3)
    lbz r0, 0x13(r3)
    lbz r8, 0x3(r5)
    mullw r5, r0, r7
    mullw r0, r8, r7
    mullw r4, r4, r7
    mulhw r8, r10, r6
    mulhw r7, r10, r4
    add r6, r8, r6
    srawi r8, r6, 7
    mulhw r6, r10, r5
    srwi r9, r8, 31
    add r4, r7, r4
    add r7, r8, r9
    stb r7, 0xb(r3)
    srawi r7, r4, 7
    add r5, r6, r5
    srwi r6, r7, 31
    mulhw r4, r10, r0
    add r6, r7, r6
    stb r6, 0xf(r3)
    srawi r5, r5, 7
    srwi r6, r5, 31
    add r0, r4, r0
    srawi r0, r0, 7
    add r5, r5, r6
    srwi r4, r0, 31
    stb r5, 0x13(r3)
    add r0, r0, r4
    stb r0, 0x17(r3)
    blr
}

asm void fn_80727B60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lbz r0, lbl_80880570
    extsb. r0, r0
    bne lbl_fn_80727B60_000016A4
    li r3, 0x0
    li r0, 0x1
    stw r3, lbl_80880574
    stb r0, lbl_80880570
lbl_fn_80727B60_000016A4:
    lfs f1, lbl_80889358
    addi r4, r1, 0x8
    lwz r0, lbl_80880574
    li r3, 0x0
    fmr f2, f1
    stw r0, 0x8(r1)
    fmr f3, f1
    fmr f4, f1
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617200
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x1
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    lwz r0, 0x0(r30)
    addi r4, r1, 0x10
    stw r0, 0x10(r1)
    li r3, 0x1
    bl fn_80617520
    lwz r0, 0x0(r31)
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    li r3, 0x2
    bl fn_80617520
    li r3, 0x0
    li r4, 0x2
    li r5, 0x4
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x2
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_80613520
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80727E50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_807267D0
    lfs f0, lbl_8088937C
    li r5, 0x4
    lfs f1, lbl_80889378
    li r4, 0x0
    la r0, lbl_8088057C
    stfs f1, 0x4c(r31)
    mr r3, r31
    stfs f0, 0x50(r31)
    stfs f0, 0x54(r31)
    stw r5, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r0, 0x60(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80727EB0(void)
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
    beq lbl_fn_80727EB0_000019F8
    li r4, 0x0
    bl fn_80726B50
    cmpwi r31, 0x0
    ble lbl_fn_80727EB0_000019F8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80727EB0_000019F8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80727F10(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80727F10_00001A60
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_80727F10_00001A64
lbl_fn_80727F10_00001A60:
    li r3, 0x0
lbl_fn_80727F10_00001A64:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f1, lbl_80889380
    stw r0, 0x8(r1)
    lfs f2, 0x28(r31)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fsubs f0, f31, f0
    stfs f0, 0x54(r31)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80727FA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x48(r3)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80727FA0_00001AE4
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_80727FA0_00001AE8
lbl_fn_80727FA0_00001AE4:
    li r3, 0x0
lbl_fn_80727FA0_00001AE8:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_80889380
    stw r0, 0x8(r1)
    lfs f3, 0x28(r31)
    lfd f1, 0x8(r1)
    lfs f0, 0x54(r31)
    fsubs f1, f1, f2
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    fmuls f1, f1, f3
    fadds f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80728020(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_15
    mr r31, r1
    mr r30, r3
    mr r16, r4
    bne cr1, lbl_fn_80728020_00001B70
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_80728020_00001B70:
    lwz r15, lbl_80880578
    addi r11, r31, 0x148
    lfs f0, lbl_8088937C
    addi r0, r31, 0x8
    cmpwi r15, 0x0
    lis r12, 0x200
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stfs f0, 0x78(r31)
    stfs f0, 0x7c(r31)
    stfs f0, 0x80(r31)
    stfs f0, 0x84(r31)
    stw r12, 0x68(r31)
    stw r11, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_80728020_00001BCC
    b lbl_fn_80728020_00001BE4
lbl_fn_80728020_00001BCC:
    lwz r3, lbl_8087EE40
    lwz r0, 0x0(r1)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_80728020_00001BE4:
    lwz r4, lbl_8087EE40
    mr r3, r15
    mr r5, r16
    addi r6, r31, 0x68
    bl vsnprintf
    lwz r4, lbl_8087EE40
    subi r0, r4, 0x1
    cmpw r3, r0
    ble lbl_fn_80728020_00001C0C
    mr r3, r0
lbl_fn_80728020_00001C0C:
    lwz r16, 0x0(r30)
    mr r5, r15
    lwz r17, 0x4(r30)
    mr r6, r3
    lwz r18, 0x8(r30)
    addi r3, r31, 0x88
    lwz r19, 0xc(r30)
    addi r4, r31, 0x78
    lwz r20, 0x10(r30)
    lwz r21, 0x14(r30)
    lwz r22, 0x18(r30)
    lwz r23, 0x1c(r30)
    lwz r24, 0x20(r30)
    lwz r25, 0x24(r30)
    lwz r26, 0x28(r30)
    lwz r27, 0x2c(r30)
    lwz r28, 0x30(r30)
    lwz r29, 0x34(r30)
    lwz r12, 0x38(r30)
    lwz r11, 0x3c(r30)
    lhz r10, 0x40(r30)
    lbz r9, 0x42(r30)
    lbz r8, 0x43(r30)
    lfs f3, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f2, 0x4c(r30)
    lfs f1, 0x50(r30)
    lfs f0, 0x54(r30)
    lwz r0, 0x58(r30)
    lwz r15, 0x5c(r30)
    lwz r30, 0x60(r30)
    stw r16, 0x88(r31)
    stw r17, 0x8c(r31)
    stw r18, 0x90(r31)
    stw r19, 0x94(r31)
    stw r20, 0x98(r31)
    stw r21, 0x9c(r31)
    stw r22, 0xa0(r31)
    stw r23, 0xa4(r31)
    stw r24, 0xa8(r31)
    stw r25, 0xac(r31)
    stw r26, 0xb0(r31)
    stw r27, 0xb4(r31)
    stw r28, 0xb8(r31)
    stw r29, 0xbc(r31)
    stw r12, 0xc0(r31)
    stw r11, 0xc4(r31)
    sth r10, 0xc8(r31)
    stb r9, 0xca(r31)
    stb r8, 0xcb(r31)
    stfs f3, 0xcc(r31)
    stw r7, 0xd0(r31)
    stfs f2, 0xd4(r31)
    stfs f1, 0xd8(r31)
    stfs f0, 0xdc(r31)
    stw r0, 0xe0(r31)
    stw r15, 0xe4(r31)
    stw r30, 0xe8(r31)
    bl fn_807299D0
    addi r3, r31, 0x88
    li r4, 0x0
    bl fn_80726B50
    mr r10, r31
    lfs f1, 0x80(r31)
    lfs f0, 0x78(r31)
    addi r11, r10, 0x140
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_80728230(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_15
    mr r31, r1
    mr r30, r3
    mr r16, r4
    bne cr1, lbl_fn_80728230_00001D80
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_80728230_00001D80:
    lwz r15, lbl_80880578
    addi r11, r31, 0x148
    lfs f0, lbl_8088937C
    addi r0, r31, 0x8
    cmpwi r15, 0x0
    lis r12, 0x200
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stfs f0, 0x78(r31)
    stfs f0, 0x7c(r31)
    stfs f0, 0x80(r31)
    stfs f0, 0x84(r31)
    stw r12, 0x68(r31)
    stw r11, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_80728230_00001DDC
    b lbl_fn_80728230_00001DF4
lbl_fn_80728230_00001DDC:
    lwz r3, lbl_8087EE40
    lwz r0, 0x0(r1)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_80728230_00001DF4:
    lwz r4, lbl_8087EE40
    mr r3, r15
    mr r5, r16
    addi r6, r31, 0x68
    bl vsnprintf
    lwz r4, lbl_8087EE40
    subi r0, r4, 0x1
    cmpw r3, r0
    ble lbl_fn_80728230_00001E1C
    mr r3, r0
lbl_fn_80728230_00001E1C:
    lwz r16, 0x0(r30)
    mr r5, r15
    lwz r17, 0x4(r30)
    mr r6, r3
    lwz r18, 0x8(r30)
    addi r3, r31, 0x88
    lwz r19, 0xc(r30)
    addi r4, r31, 0x78
    lwz r20, 0x10(r30)
    lwz r21, 0x14(r30)
    lwz r22, 0x18(r30)
    lwz r23, 0x1c(r30)
    lwz r24, 0x20(r30)
    lwz r25, 0x24(r30)
    lwz r26, 0x28(r30)
    lwz r27, 0x2c(r30)
    lwz r28, 0x30(r30)
    lwz r29, 0x34(r30)
    lwz r12, 0x38(r30)
    lwz r11, 0x3c(r30)
    lhz r10, 0x40(r30)
    lbz r9, 0x42(r30)
    lbz r8, 0x43(r30)
    lfs f3, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f2, 0x4c(r30)
    lfs f1, 0x50(r30)
    lfs f0, 0x54(r30)
    lwz r0, 0x58(r30)
    lwz r15, 0x5c(r30)
    lwz r30, 0x60(r30)
    stw r16, 0x88(r31)
    stw r17, 0x8c(r31)
    stw r18, 0x90(r31)
    stw r19, 0x94(r31)
    stw r20, 0x98(r31)
    stw r21, 0x9c(r31)
    stw r22, 0xa0(r31)
    stw r23, 0xa4(r31)
    stw r24, 0xa8(r31)
    stw r25, 0xac(r31)
    stw r26, 0xb0(r31)
    stw r27, 0xb4(r31)
    stw r28, 0xb8(r31)
    stw r29, 0xbc(r31)
    stw r12, 0xc0(r31)
    stw r11, 0xc4(r31)
    sth r10, 0xc8(r31)
    stb r9, 0xca(r31)
    stb r8, 0xcb(r31)
    stfs f3, 0xcc(r31)
    stw r7, 0xd0(r31)
    stfs f2, 0xd4(r31)
    stfs f1, 0xd8(r31)
    stfs f0, 0xdc(r31)
    stw r0, 0xe0(r31)
    stw r15, 0xe4(r31)
    stw r30, 0xe8(r31)
    bl fn_807299D0
    addi r3, r31, 0x88
    li r4, 0x0
    bl fn_80726B50
    mr r10, r31
    lfs f1, 0x84(r31)
    lfs f0, 0x7c(r31)
    addi r11, r10, 0x140
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_80728440(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_15
    mr r31, r1
    mr r30, r3
    mr r18, r4
    bne cr1, lbl_fn_80728440_00001F90
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_80728440_00001F90:
    lwz r15, lbl_80880578
    addi r11, r31, 0x128
    addi r0, r31, 0x8
    lis r12, 0x300
    cmpwi r15, 0x0
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stw r12, 0x68(r31)
    stw r11, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_80728440_00001FD8
    b lbl_fn_80728440_00001FF0
lbl_fn_80728440_00001FD8:
    lwz r3, lbl_8087EE40
    lwz r0, 0x0(r1)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_80728440_00001FF0:
    lwz r4, lbl_8087EE40
    mr r3, r15
    addi r6, r31, 0x68
    bl vsnprintf
    lwz r4, lbl_8087EE40
    subi r0, r4, 0x1
    cmpw r3, r0
    ble lbl_fn_80728440_00002014
    mr r3, r0
lbl_fn_80728440_00002014:
    lwz r16, 0x0(r30)
    mr r4, r18
    lwz r17, 0x4(r30)
    mr r5, r15
    lwz r18, 0x8(r30)
    mr r6, r3
    lwz r19, 0xc(r30)
    addi r3, r31, 0x74
    lwz r20, 0x10(r30)
    lwz r21, 0x14(r30)
    lwz r22, 0x18(r30)
    lwz r23, 0x1c(r30)
    lwz r24, 0x20(r30)
    lwz r25, 0x24(r30)
    lwz r26, 0x28(r30)
    lwz r27, 0x2c(r30)
    lwz r28, 0x30(r30)
    lwz r29, 0x34(r30)
    lwz r12, 0x38(r30)
    lwz r11, 0x3c(r30)
    lhz r10, 0x40(r30)
    lbz r9, 0x42(r30)
    lbz r8, 0x43(r30)
    lfs f3, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f2, 0x4c(r30)
    lfs f1, 0x50(r30)
    lfs f0, 0x54(r30)
    lwz r0, 0x58(r30)
    lwz r15, 0x5c(r30)
    lwz r30, 0x60(r30)
    stw r16, 0x74(r31)
    stw r17, 0x78(r31)
    stw r18, 0x7c(r31)
    stw r19, 0x80(r31)
    stw r20, 0x84(r31)
    stw r21, 0x88(r31)
    stw r22, 0x8c(r31)
    stw r23, 0x90(r31)
    stw r24, 0x94(r31)
    stw r25, 0x98(r31)
    stw r26, 0x9c(r31)
    stw r27, 0xa0(r31)
    stw r28, 0xa4(r31)
    stw r29, 0xa8(r31)
    stw r12, 0xac(r31)
    stw r11, 0xb0(r31)
    sth r10, 0xb4(r31)
    stb r9, 0xb6(r31)
    stb r8, 0xb7(r31)
    stfs f3, 0xb8(r31)
    stw r7, 0xbc(r31)
    stfs f2, 0xc0(r31)
    stfs f1, 0xc4(r31)
    stfs f0, 0xc8(r31)
    stw r0, 0xcc(r31)
    stw r15, 0xd0(r31)
    stw r30, 0xd4(r31)
    bl fn_807299D0
    addi r3, r31, 0x74
    li r4, 0x0
    bl fn_80726B50
    mr r10, r31
    addi r11, r10, 0x120
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}
