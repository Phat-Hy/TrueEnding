#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTick(void);
extern void OSReport(const char* msg, ...);
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_806540C0(void);
extern void fn_806540E0(void);
extern void fn_806581D0(void);
extern void fn_806581F0(void);
extern void fn_80658260(void);
extern void fn_80658300(void);
extern void fn_8065CED0(void);
extern void fn_8065CEE0(void);
extern void fn_8065CF00(void);
extern void fn_8065CF10(void);
extern void fn_8065F5A0(void);
extern void fn_80660A80(void);
extern void fn_80660CF0(void);
extern void fn_80660F00(void);
extern void fn_80660F50(void);
extern void fn_806616F0(void);
extern void fn_80663610(void);
extern void fn_806636A0(void);
extern void fn_80664720(void);
extern void fn_80664950(void);
extern void fn_80665B30(void);
extern void fn_80665EA0(void);
extern void fn_8068B100(void);
extern void vprintf(void);

/* External data declarations */
extern u8 lbl_807B89FC[];
extern u8 lbl_807B8A28[];
extern u8 lbl_807B8A4C[];
extern u8 lbl_807B8A70[];
extern u8 lbl_80828318[];

/* Small data declarations */
extern u32 lbl_8087EB94;
extern u32 lbl_8087EB98;
extern u32 lbl_8087EBB0;
extern u32 lbl_808801D0;
extern u32 lbl_808801D2;
extern u32 lbl_808801D3;
extern u32 lbl_808801D4;
extern u32 lbl_808801D9;
extern u32 lbl_808801DA;
extern u32 lbl_808801E8;
extern u32 lbl_808801F8;
extern u32 lbl_80888898;
extern u32 lbl_808888A4;
extern u32 lbl_808888AC;
extern u32 lbl_808888B8;
extern u32 lbl_808888D8;
extern u32 lbl_80888908;
extern u32 lbl_80888920;
extern u32 lbl_80888924;
extern u32 lbl_80888928;
extern u32 lbl_8088892C;
extern u32 lbl_80888930;
extern u32 lbl_80888938;
extern u32 lbl_8088893C;
extern u32 lbl_80888940;
extern u32 lbl_80888948;
extern u32 lbl_80888950;
extern u32 lbl_80888958;
extern u32 lbl_80888960;
extern u32 lbl_80888968;
extern u32 lbl_8088896C;
extern u32 lbl_80888970;
extern u32 lbl_80888974;
extern u32 lbl_80888978;
extern u32 lbl_8088897C;
extern u32 lbl_80888980;
extern u32 lbl_80888984;
extern u32 lbl_80888988;
extern u32 lbl_8088898C;
extern u32 lbl_80888990;
extern u32 lbl_80888998;
extern u32 lbl_808889A0;
extern u32 lbl_808889A8;
extern u32 lbl_808889AC;
extern u32 lbl_808889B0;
extern u32 lbl_808889B8;
extern u32 lbl_808889C0;
extern u32 lbl_808889C4;
extern u32 lbl_808889C8;
extern u32 lbl_808889CC;

/* Function declarations */
void fn_806583E0(void);
void fn_80658DB0(void);
void fn_80658DF0(void);
void fn_80658F30(void);
void fn_80658F50(void);
void fn_80659070(void);
void fn_80659220(void);
void fn_806594D0(void);
void fn_80659860(void);
void fn_80659B20(void);
void fn_80659C10(void);
void fn_80659D00(void);
void fn_80659DF0(void);
void fn_8065A8B0(void);
void fn_8065AA50(void);
void fn_8065AA80(void);
void fn_8065AEB0(void);
void fn_8065AED0(void);
void fn_8065AF20(void);
void fn_8065AFB0(void);
void fn_8065B320(void);
void fn_8065B630(void);
void fn_8065B7F0(void);
void fn_8065B8E0(void);

asm void fn_806583E0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_27
    lis r31, lbl_80828318@ha
    lis r7, 0x4330
    addi r31, r31, lbl_80828318@l
    lwz r5, lbl_80888928
    lhz r0, lbl_8088892C
    mulli r6, r3, 0x688
    addi r4, r31, 0x0
    stw r7, 0x18(r1)
    mr r28, r3
    add r30, r4, r6
    stw r7, 0x20(r1)
    addi r4, r1, 0x8
    stw r5, 0xc(r1)
    sth r0, 0x10(r1)
    bl fn_80660CF0
    cmpwi r3, -0x1
    beq lbl_fn_806583E0_00000988
    lwz r3, 0x5a4(r30)
    lbz r27, 0x17a(r30)
    addi r0, r3, 0x10
    cmplw r27, r0
    blt lbl_fn_806583E0_00000080
    li r27, 0x0
lbl_fn_806583E0_00000080:
    cmplwi r27, 0x10
    blt lbl_fn_806583E0_0000009C
    subi r0, r27, 0x10
    lwz r3, 0x5a0(r30)
    mulli r0, r0, 0x42
    add r29, r3, r0
    b lbl_fn_806583E0_000000A8
lbl_fn_806583E0_0000009C:
    mulli r0, r27, 0x42
    add r3, r30, r0
    addi r29, r3, 0x180
lbl_fn_806583E0_000000A8:
    mr r3, r28
    mr r4, r29
    bl fn_806616F0
    mr r3, r28
    bl fn_80660F00
    stb r3, 0x40(r29)
    addi r0, r27, 0x1
    stb r0, 0x17a(r30)
    lwz r3, 0x5a4(r30)
    lbz r4, 0x17b(r30)
    addi r0, r3, 0x10
    cmplw r4, r0
    bge lbl_fn_806583E0_000000E4
    addi r0, r4, 0x1
    stb r0, 0x17b(r30)
lbl_fn_806583E0_000000E4:
    lwz r0, 0x670(r30)
    stw r0, 0x66c(r30)
    bl OSGetTick
    stw r3, 0x670(r30)
    lwz r3, 0x8(r1)
    lwz r0, 0x65c(r30)
    cmplw r3, r0
    beq lbl_fn_806583E0_00000114
    cmplwi r3, 0x1
    bne lbl_fn_806583E0_00000114
    li r0, 0x1
    stb r0, 0x67e(r30)
lbl_fn_806583E0_00000114:
    lbz r0, 0x67e(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806583E0_00000240
    mr r3, r28
    addi r5, r1, 0xc
    li r4, 0x0
    bl fn_80660A80
    lha r5, 0xc(r1)
    lha r4, 0x10(r1)
    lha r3, 0xe(r1)
    mullw r0, r4, r5
    mullw. r0, r0, r3
    beq lbl_fn_806583E0_000001A4
    xoris r0, r5, 0x8000
    stw r0, 0x1c(r1)
    xoris r0, r3, 0x8000
    lfd f4, lbl_808888B8
    stw r0, 0x24(r1)
    xoris r3, r4, 0x8000
    lfd f1, 0x18(r1)
    li r0, 0x0
    lfd f0, 0x20(r1)
    fsubs f2, f1, f4
    lfs f3, lbl_808888A4
    fsubs f1, f0, f4
    stw r3, 0x1c(r1)
    lfd f0, 0x18(r1)
    fdivs f2, f3, f2
    stfs f2, 0x5fc(r30)
    fsubs f0, f0, f4
    fdivs f1, f3, f1
    stfs f1, 0x600(r30)
    fdivs f0, f3, f0
    stfs f0, 0x604(r30)
    stb r0, 0x67e(r30)
    b lbl_fn_806583E0_000001B4
lbl_fn_806583E0_000001A4:
    lfs f0, lbl_80888924
    stfs f0, 0x5fc(r30)
    stfs f0, 0x600(r30)
    stfs f0, 0x604(r30)
lbl_fn_806583E0_000001B4:
    mr r3, r28
    addi r5, r1, 0xc
    li r4, 0x1
    bl fn_80660A80
    lha r5, 0xc(r1)
    lha r4, 0x10(r1)
    lha r3, 0xe(r1)
    mullw r0, r4, r5
    mullw. r0, r0, r3
    beq lbl_fn_806583E0_00000230
    xoris r0, r5, 0x8000
    stw r0, 0x24(r1)
    xoris r0, r3, 0x8000
    lfd f4, lbl_808888B8
    stw r0, 0x1c(r1)
    xoris r0, r4, 0x8000
    lfd f1, 0x20(r1)
    lfd f0, 0x18(r1)
    fsubs f2, f1, f4
    lfs f3, lbl_808888A4
    fsubs f1, f0, f4
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fdivs f2, f3, f2
    stfs f2, 0x608(r30)
    fsubs f0, f0, f4
    fdivs f1, f3, f1
    stfs f1, 0x60c(r30)
    fdivs f0, f3, f0
    stfs f0, 0x610(r30)
    b lbl_fn_806583E0_00000240
lbl_fn_806583E0_00000230:
    lfs f0, lbl_80888920
    stfs f0, 0x608(r30)
    stfs f0, 0x60c(r30)
    stfs f0, 0x610(r30)
lbl_fn_806583E0_00000240:
    lbz r0, 0x648(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806583E0_00000300
    lbz r0, 0x649(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806583E0_00000278
    bl fn_8065F5A0
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_806583E0_00000270
    lfs f0, lbl_808888D8
    b lbl_fn_806583E0_0000027C
lbl_fn_806583E0_00000270:
    lfs f0, lbl_80888930
    b lbl_fn_806583E0_0000027C
lbl_fn_806583E0_00000278:
    lfs f0, lbl_80888898
lbl_fn_806583E0_0000027C:
    lfs f30, lbl_808888A4
    fneg f2, f0
    lfs f31, lbl_808888AC
    fmuls f1, f30, f30
    lfs f3, lbl_80888898
    fmuls f0, f31, f31
    stfs f3, 0x124(r30)
    stfs f2, 0x128(r30)
    fadds f1, f1, f0
    bl fn_8068B100
    lfs f2, 0x124(r30)
    frsp f3, f1
    lfs f0, lbl_80888898
    fcmpo cr0, f2, f0
    bge lbl_fn_806583E0_000002C0
    fadds f30, f30, f2
    b lbl_fn_806583E0_000002C4
lbl_fn_806583E0_000002C0:
    fsubs f30, f30, f2
lbl_fn_806583E0_000002C4:
    lfs f1, 0x128(r30)
    lfs f0, lbl_80888898
    fcmpo cr0, f1, f0
    bge lbl_fn_806583E0_000002DC
    fadds f31, f31, f1
    b lbl_fn_806583E0_000002E0
lbl_fn_806583E0_000002DC:
    fsubs f31, f31, f1
lbl_fn_806583E0_000002E0:
    fcmpo cr0, f30, f31
    bge lbl_fn_806583E0_000002EC
    b lbl_fn_806583E0_000002F0
lbl_fn_806583E0_000002EC:
    fmr f30, f31
lbl_fn_806583E0_000002F0:
    fdivs f0, f3, f30
    li r0, 0x0
    stfs f0, 0x12c(r30)
    stb r0, 0x648(r30)
lbl_fn_806583E0_00000300:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x12
    beq lbl_fn_806583E0_000003B4
    bge lbl_fn_806583E0_00000358
    cmpwi r0, 0x4
    beq lbl_fn_806583E0_00000988
    bge lbl_fn_806583E0_00000340
    cmpwi r0, 0x1
    beq lbl_fn_806583E0_0000039C
    bge lbl_fn_806583E0_00000334
    cmpwi r0, 0x0
    bge lbl_fn_806583E0_00000394
    b lbl_fn_806583E0_00000988
lbl_fn_806583E0_00000334:
    cmpwi r0, 0x3
    bge lbl_fn_806583E0_000003BC
    b lbl_fn_806583E0_000003A4
lbl_fn_806583E0_00000340:
    cmpwi r0, 0x10
    beq lbl_fn_806583E0_000003C4
    bge lbl_fn_806583E0_000003AC
    cmpwi r0, 0x8
    bge lbl_fn_806583E0_00000988
    b lbl_fn_806583E0_000003D4
lbl_fn_806583E0_00000358:
    cmpwi r0, 0xfa
    beq lbl_fn_806583E0_000003D4
    bge lbl_fn_806583E0_00000380
    cmpwi r0, 0x1d
    beq lbl_fn_806583E0_000003E4
    bge lbl_fn_806583E0_00000988
    cmpwi r0, 0x14
    beq lbl_fn_806583E0_00000988
    bge lbl_fn_806583E0_000003DC
    b lbl_fn_806583E0_000003CC
lbl_fn_806583E0_00000380:
    cmpwi r0, 0xff
    beq lbl_fn_806583E0_00000394
    bge lbl_fn_806583E0_00000988
    cmpwi r0, 0xfd
    bge lbl_fn_806583E0_00000988
lbl_fn_806583E0_00000394:
    li r27, 0x0
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_0000039C:
    li r27, 0x2
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_000003A4:
    li r27, 0x4
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_000003AC:
    li r27, 0x6
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_000003B4:
    li r27, 0x8
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_000003BC:
    li r27, 0xa
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_000003C4:
    li r27, 0xc
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_000003CC:
    li r27, 0xe
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_000003D4:
    li r27, 0x10
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_000003DC:
    li r27, 0x12
    b lbl_fn_806583E0_000003E8
lbl_fn_806583E0_000003E4:
    li r27, 0x14
lbl_fn_806583E0_000003E8:
    lbz r0, 0x642(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806583E0_000003F8
    addi r27, r27, 0x1
lbl_fn_806583E0_000003F8:
    mr r3, r28
    bl fn_80663610
    cmpwi r3, 0x0
    beq lbl_fn_806583E0_00000410
    lbz r4, 0x645(r30)
    b lbl_fn_806583E0_00000414
lbl_fn_806583E0_00000410:
    li r4, 0x0
lbl_fn_806583E0_00000414:
    lis r3, lbl_807B89FC@ha
    slwi r0, r27, 1
    addi r3, r3, lbl_807B89FC@l
    add r27, r3, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_fn_806583E0_000004A8
    lwz r0, 0x5f8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806583E0_0000046C
    lbz r0, 0x646(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806583E0_0000046C
    li r0, 0x1
    stb r0, 0x646(r30)
    mr r3, r28
    li r4, 0x0
    lwz r12, 0x5f8(r30)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x647(r30)
lbl_fn_806583E0_0000046C:
    lbz r0, 0x644(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806583E0_000004C0
    li r0, 0x1
    lis r5, fn_80658260@ha
    stb r0, 0x644(r30)
    mr r3, r28
    lbz r4, 0x0(r27)
    addi r5, r5, fn_80658260@l
    bl fn_806636A0
    cmpwi r3, 0x0
    bne lbl_fn_806583E0_000004C0
    lbz r0, 0x0(r27)
    stb r0, 0x645(r30)
    b lbl_fn_806583E0_000004C0
lbl_fn_806583E0_000004A8:
    lbz r4, 0x1(r27)
    lbz r0, 0x40(r29)
    cmplw r0, r4
    beq lbl_fn_806583E0_000004C0
    mr r3, r28
    bl fn_80660F50
lbl_fn_806583E0_000004C0:
    lwz r0, 0x8(r1)
    cmplwi r0, 0x3
    bne lbl_fn_806583E0_000007BC
    lbz r0, lbl_808801DA
    cmpwi r0, 0x0
    bne lbl_fn_806583E0_000007BC
    lbz r0, lbl_808801D9
    extsb r0, r0
    cmpwi cr1, r0, 0x2
    ble cr1, lbl_fn_806583E0_000006E8
    lbz r0, lbl_808801D3
    extsb r0, r0
    cmpwi r0, 0x1
    bne lbl_fn_806583E0_00000520
    lis r5, fn_806581F0@ha
    mr r3, r28
    addi r5, r5, fn_806581F0@l
    li r4, 0x0
    bl fn_80664720
    cmpwi r3, 0x0
    bne lbl_fn_806583E0_000007BC
    li r0, 0x1
    stb r0, lbl_808801DA
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_00000520:
    cmpwi r0, 0x2
    bne lbl_fn_806583E0_00000578
    lbz r3, lbl_808801D4
    cmpwi r3, 0x0
    bne lbl_fn_806583E0_0000056C
    lbz r0, 0x32(r29)
    extsb r0, r0
    cmpwi r0, 0x7f
    beq lbl_fn_806583E0_0000054C
    cmpwi r0, -0x80
    bne lbl_fn_806583E0_00000558
lbl_fn_806583E0_0000054C:
    li r0, 0x1
    stb r0, lbl_808801D3
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_00000558:
    li r3, 0x3
    li r0, 0x0
    stb r3, lbl_808801D3
    sth r0, lbl_808801D0
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_0000056C:
    subi r0, r3, 0x1
    stb r0, lbl_808801D4
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_00000578:
    cmpwi r0, 0x3
    bne lbl_fn_806583E0_000007BC
    lbz r0, 0x29(r29)
    extsb. r0, r0
    bne lbl_fn_806583E0_000007BC
    lhz r3, lbl_808801D0
    addi r27, r31, 0x1a70
    lfd f1, lbl_808888B8
    addi r0, r3, 0x1
    sth r0, lbl_808801D0
    clrlwi r4, r0, 16
    lfd f2, 0x1a70(r31)
    subi r3, r4, 0x1
    lhz r0, 0x2a(r29)
    xoris r3, r3, 0x8000
    stw r3, 0x1c(r1)
    lfd f0, lbl_80888908
    lfd f3, 0x18(r1)
    stw r0, 0x24(r1)
    fsub f4, f3, f1
    lfd f6, 0x8(r27)
    lfd f3, 0x20(r1)
    stw r4, 0x1c(r1)
    fmul f7, f4, f2
    lfd f5, 0x10(r27)
    lfd f2, 0x18(r1)
    fsub f3, f3, f0
    stw r3, 0x24(r1)
    fsub f4, f2, f0
    fadd f8, f7, f3
    lfd f2, 0x20(r1)
    lfd f3, 0x18(r27)
    fsub f7, f2, f1
    stw r4, 0x24(r1)
    fdiv f8, f8, f4
    lfd f4, 0x20(r1)
    lfs f2, lbl_8087EB94
    stfd f8, 0x1a70(r31)
    fmul f8, f7, f6
    lhz r0, 0x2c(r29)
    stw r0, 0x1c(r1)
    fsub f7, f4, f0
    lfd f4, 0x18(r1)
    fsub f6, f4, f0
    stw r3, 0x1c(r1)
    lfd f4, 0x18(r1)
    fadd f8, f8, f6
    stw r4, 0x1c(r1)
    fsub f6, f4, f1
    fdiv f7, f8, f7
    lfd f4, 0x18(r1)
    stfd f7, 0x8(r27)
    fmul f7, f6, f5
    lhz r0, 0x2e(r29)
    stw r0, 0x24(r1)
    fsub f5, f4, f0
    lfd f4, 0x20(r1)
    fsub f6, f4, f0
    stw r3, 0x24(r1)
    lfd f4, 0x20(r1)
    fadd f6, f7, f6
    stw r4, 0x24(r1)
    fsub f4, f4, f1
    fdiv f5, f6, f5
    lfd f1, 0x20(r1)
    stfd f5, 0x10(r27)
    fmul f5, f4, f3
    lhz r0, 0x30(r29)
    stw r0, 0x1c(r1)
    fsub f3, f1, f0
    lfd f1, 0x18(r1)
    fsub f4, f1, f0
    stw r4, 0x1c(r1)
    lfd f1, 0x18(r1)
    fadd f4, f5, f4
    fsubs f0, f1, f0
    fdiv f1, f4, f3
    stfd f1, 0x18(r27)
    fcmpu cr0, f0, f2
    bne lbl_fn_806583E0_000007BC
    li r3, 0x4
    li r0, 0x0
    stb r3, lbl_808801D3
    mr r3, r29
    addi r4, r31, 0x1a50
    li r5, 0x4
    sth r0, lbl_808801D0
    bl fn_8065CF00
    mr r3, r27
    li r4, 0x4
    bl fn_8065CF10
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_000006E8:
    cmpwi r0, 0x0
    bne lbl_fn_806583E0_00000718
    lis r5, fn_806581D0@ha
    mr r3, r28
    addi r5, r5, fn_806581D0@l
    li r4, 0xaa
    bl fn_80664720
    cmpwi r3, 0x0
    bne lbl_fn_806583E0_000007BC
    li r0, 0x1
    stb r0, lbl_808801DA
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_00000718:
    cmpwi r0, 0x1
    bne lbl_fn_806583E0_00000768
    lbz r0, lbl_808801D2
    cmplwi r0, 0x3
    bge lbl_fn_806583E0_0000075C
    bl fn_8065CED0
    cmpwi r3, 0x1
    bne lbl_fn_806583E0_0000074C
    li r3, 0x2
    li r0, 0x0
    stb r3, lbl_808801D9
    stb r0, lbl_808801D4
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_0000074C:
    lbz r3, lbl_808801D2
    addi r0, r3, 0x1
    stb r0, lbl_808801D2
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_0000075C:
    li r0, -0x1
    stb r0, lbl_808801D9
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_00000768:
    bne cr1, lbl_fn_806583E0_000007BC
    bl fn_8065CEE0
    cmpwi r3, 0x0
    beq lbl_fn_806583E0_0000078C
    li r3, 0x3
    li r0, 0x0
    stb r3, lbl_808801D9
    stb r0, lbl_808801D2
    b lbl_fn_806583E0_000007BC
lbl_fn_806583E0_0000078C:
    lbz r3, lbl_808801D4
    lbz r0, lbl_8087EB98
    addi r3, r3, 0x1
    stb r3, lbl_808801D4
    clrlwi r3, r3, 24
    cmplw r3, r0
    ble lbl_fn_806583E0_000007BC
    lbz r3, lbl_808801D2
    li r0, 0x1
    stb r0, lbl_808801D9
    addi r0, r3, 0x1
    stb r0, lbl_808801D2
lbl_fn_806583E0_000007BC:
    mr r3, r28
    bl fn_80664950
    lbz r0, 0x67a(r30)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_806583E0_00000988
    lbz r0, 0x67b(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806583E0_00000840
    lbz r0, 0x677(r30)
    clrlwi r4, r3, 24
    cmplw r4, r0
    bne lbl_fn_806583E0_00000840
    lbz r0, 0x678(r30)
    cmplw r4, r0
    bne lbl_fn_806583E0_00000840
    lbz r3, 0x679(r30)
    cmplw r0, r3
    bne lbl_fn_806583E0_00000838
    li r0, 0x0
    stb r0, 0x67b(r30)
    lwz r12, 0x680(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806583E0_0000082C
    mr r3, r28
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_806583E0_0000082C:
    li r0, 0x1
    stb r0, 0x67c(r30)
    b lbl_fn_806583E0_00000970
lbl_fn_806583E0_00000838:
    stb r3, 0x678(r30)
    b lbl_fn_806583E0_00000970
lbl_fn_806583E0_00000840:
    lbz r4, 0x67d(r30)
    cmpwi r4, 0x0
    beq lbl_fn_806583E0_00000858
    subi r0, r4, 0x1
    stb r0, 0x67d(r30)
    b lbl_fn_806583E0_00000988
lbl_fn_806583E0_00000858:
    lbz r0, 0x678(r30)
    clrlwi. r4, r3, 24
    stb r0, 0x676(r30)
    beq lbl_fn_806583E0_0000087C
    lbz r0, 0x676(r30)
    cmplw r4, r0
    beq lbl_fn_806583E0_0000087C
    li r0, 0x0
    stb r0, 0x676(r30)
lbl_fn_806583E0_0000087C:
    lbz r0, 0x676(r30)
    clrlwi r4, r3, 24
    cmplw r4, r0
    beq lbl_fn_806583E0_00000968
    lbz r0, 0x67b(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806583E0_000008A0
    li r0, 0x0
    stb r0, 0x677(r30)
lbl_fn_806583E0_000008A0:
    li r4, 0x1
    stb r4, 0x67a(r30)
    lbz r0, 0x67b(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806583E0_00000950
    stb r4, 0x67b(r30)
    lwz r12, 0x680(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806583E0_00000948
    clrlwi. r0, r3, 24
    bne lbl_fn_806583E0_000008F0
    lbz r3, 0x678(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806583E0_000008F0
    lwz r4, 0x65c(r30)
    subi r0, r4, 0x5
    cmplwi r0, 0x2
    ble lbl_fn_806583E0_000008F8
    cmplwi r4, 0xfa
    beq lbl_fn_806583E0_000008F8
lbl_fn_806583E0_000008F0:
    li r27, 0x0
    b lbl_fn_806583E0_00000918
lbl_fn_806583E0_000008F8:
    cmplwi r3, 0x5
    bne lbl_fn_806583E0_00000908
    li r27, -0x2
    b lbl_fn_806583E0_00000918
lbl_fn_806583E0_00000908:
    cmplwi r3, 0x7
    li r27, -0x1
    bne lbl_fn_806583E0_00000918
    li r27, -0x3
lbl_fn_806583E0_00000918:
    mr r3, r28
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r27, 0x0
    bge lbl_fn_806583E0_00000948
    lbz r0, 0x679(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806583E0_00000948
    stb r0, 0x678(r30)
    lbz r0, 0x679(r30)
    stb r0, 0x676(r30)
lbl_fn_806583E0_00000948:
    li r0, 0x0
    stb r0, 0x67c(r30)
lbl_fn_806583E0_00000950:
    lis r5, fn_80658300@ha
    lbz r4, 0x676(r30)
    mr r3, r28
    addi r5, r5, fn_80658300@l
    bl fn_80665B30
    b lbl_fn_806583E0_00000970
lbl_fn_806583E0_00000968:
    lbz r0, 0x679(r30)
    stb r0, 0x678(r30)
lbl_fn_806583E0_00000970:
    clrlwi. r0, r31, 24
    bne lbl_fn_806583E0_00000988
    lbz r0, 0x679(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806583E0_00000988
    stb r0, 0x678(r30)
lbl_fn_806583E0_00000988:
    lwz r0, 0x8(r1)
    stw r0, 0x65c(r30)
    lwz r12, 0x638(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806583E0_000009A8
    mr r3, r28
    mtctr r12
    bctrl
lbl_fn_806583E0_000009A8:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80658DB0(void)
{
    nofralloc
    lwz r5, lbl_808801E8
    mulli r0, r3, 0xdb0
    cmpwi r5, 0x0
    add r3, r5, r0
    beqlr
    cmpwi r4, 0x0
    bne lbl_fn_80658DB0_000009F8
    li r0, 0x1
    stb r0, 0xca(r3)
    blr
lbl_fn_80658DB0_000009F8:
    li r0, -0x1
    stb r0, 0xca(r3)
    blr
}

asm void fn_80658DF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mulli r31, r3, 0xdb0
    stw r30, 0x8(r1)
    lwz r0, lbl_808801E8
    cmpwi cr1, r0, 0x0
    add r4, r0, r31
    addi r30, r4, 0x8
    beq cr1, lbl_fn_80658DF0_00000B2C
    lbz r0, 0xc2(r30)
    extsb. r0, r0
    bne lbl_fn_80658DF0_00000A78
    beq cr1, lbl_fn_80658DF0_00000B2C
    lwz r3, 0x17c(r30)
    lis r0, 0x8000
    lfs f0, lbl_80888938
    addi r3, r3, 0xff
    clrlslwi r3, r3, 24, 2
    add r3, r30, r3
    stw r0, 0x980(r3)
    stw r0, 0x580(r3)
    stw r0, 0x180(r3)
    stfs f0, 0xec(r30)
    b lbl_fn_80658DF0_00000B2C
lbl_fn_80658DF0_00000A78:
    bge lbl_fn_80658DF0_00000A98
    li r0, 0x0
    lis r5, fn_80658DB0@ha
    stb r0, 0xc2(r30)
    addi r5, r5, fn_80658DB0@l
    li r4, 0x80
    bl fn_80665B30
    b lbl_fn_80658DF0_00000B2C
lbl_fn_80658DF0_00000A98:
    lfs f1, lbl_8088893C
    lfs f0, 0xec(r30)
    fcmpu cr0, f1, f0
    bne lbl_fn_80658DF0_00000B2C
    lfs f1, 0xc4(r30)
    lfs f0, lbl_80888940
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80658DF0_00000AC8
    li r0, 0x0
    stb r0, 0xb8(r30)
    b lbl_fn_80658DF0_00000B2C
lbl_fn_80658DF0_00000AC8:
    li r0, 0x0
    lis r5, fn_80658DB0@ha
    stb r0, 0xc2(r30)
    addi r5, r5, fn_80658DB0@l
    li r4, 0x80
    bl fn_80665B30
    lfs f1, 0xc4(r30)
    lfs f0, lbl_80888940
    fsubs f0, f1, f0
    stfs f0, 0xc4(r30)
    lwz r0, lbl_808801E8
    add r3, r0, r31
    cmpwi r0, 0x0
    addi r4, r3, 0x8
    beq lbl_fn_80658DF0_00000B2C
    lwz r3, 0x17c(r4)
    lis r0, 0x8000
    lfs f0, lbl_80888938
    addi r3, r3, 0xff
    clrlslwi r3, r3, 24, 2
    add r3, r4, r3
    stw r0, 0x980(r3)
    stw r0, 0x580(r3)
    stw r0, 0x180(r3)
    stfs f0, 0xec(r4)
lbl_fn_80658DF0_00000B2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80658F30(void)
{
    nofralloc
    lwz r3, lbl_808801E8
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80658F50(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    lfs f31, lbl_80888938
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stfd f28, 0x10(r1)
    psq_st f28, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    lwz r0, lbl_808801E8
    cmpwi r0, 0x0
    beq lbl_fn_80658F50_00000C58
    mulli r31, r3, 0xdb0
    add r3, r0, r31
    lwz r0, 0x108(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80658F50_00000BE4
    bl fn_8065F5A0
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_80658F50_00000BDC
    lfs f30, lbl_80888974
    b lbl_fn_80658F50_00000BEC
lbl_fn_80658F50_00000BDC:
    lfs f30, lbl_80888978
    b lbl_fn_80658F50_00000BEC
lbl_fn_80658F50_00000BE4:
    lfs f0, 0x10c(r3)
    fneg f30, f0
lbl_fn_80658F50_00000BEC:
    lfs f29, lbl_8088893C
    lfs f28, lbl_8088897C
    fmuls f1, f29, f29
    fmuls f0, f28, f28
    fadds f1, f1, f0
    bl fn_8068B100
    lfs f0, lbl_80888938
    frsp f1, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_80658F50_00000C1C
    fadds f29, f29, f31
    b lbl_fn_80658F50_00000C20
lbl_fn_80658F50_00000C1C:
    fsubs f29, f29, f31
lbl_fn_80658F50_00000C20:
    lfs f0, lbl_80888938
    fcmpo cr0, f30, f0
    bge lbl_fn_80658F50_00000C34
    fadds f28, f28, f30
    b lbl_fn_80658F50_00000C38
lbl_fn_80658F50_00000C34:
    fsubs f28, f28, f30
lbl_fn_80658F50_00000C38:
    fcmpo cr0, f29, f28
    bge lbl_fn_80658F50_00000C44
    b lbl_fn_80658F50_00000C48
lbl_fn_80658F50_00000C44:
    fmr f29, f28
lbl_fn_80658F50_00000C48:
    fdivs f0, f1, f29
    lwz r0, lbl_808801E8
    add r3, r0, r31
    stfs f0, 0x104(r3)
lbl_fn_80658F50_00000C58:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    psq_l f28, 0x18(r1), 0, 0
    lfd f28, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80659070(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lfs f2, 0x0(r4)
    lfs f0, 0x0(r5)
    lfs f1, 0x4(r4)
    fsubs f5, f2, f0
    lfs f0, 0x4(r5)
    lfs f2, 0x8(r4)
    fsubs f4, f1, f0
    lfs f0, 0x8(r5)
    fmuls f1, f5, f5
    fsubs f3, f2, f0
    stfs f5, 0x14(r1)
    fmuls f0, f4, f4
    stfs f4, 0x18(r1)
    fmuls f2, f3, f3
    fadds f0, f1, f0
    stfs f3, 0x1c(r1)
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f31, f1
    lfs f9, 0x0(r30)
    lfs f1, 0x0(r31)
    lfs f7, 0x4(r30)
    fsubs f8, f9, f1
    lfs f0, 0x4(r31)
    lfs f1, 0x14(r1)
    fsubs f6, f7, f0
    lfs f0, 0x18(r1)
    fmuls f2, f8, f1
    lfs f4, 0x8(r30)
    lfs f1, 0x8(r31)
    fmuls f0, f6, f0
    lfs f3, 0x1c(r1)
    fsubs f5, f4, f1
    lfs f1, lbl_80888938
    fadds f0, f2, f0
    stfs f8, 0x8(r1)
    fmuls f2, f5, f3
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    fadds f0, f2, f0
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80659070_00000D6C
    b lbl_fn_80659070_00000E1C
lbl_fn_80659070_00000D6C:
    fmuls f1, f9, f8
    fmuls f0, f7, f6
    fmuls f2, f4, f5
    fadds f0, f1, f0
    fadds f0, f2, f0
    fmuls f2, f0, f9
    fmuls f1, f0, f7
    fmuls f0, f0, f4
    fsubs f4, f8, f2
    fsubs f2, f6, f1
    fsubs f3, f5, f0
    stfs f4, 0x8(r1)
    fmuls f1, f4, f4
    fmuls f0, f2, f2
    stfs f2, 0xc(r1)
    fmuls f2, f3, f3
    stfs f3, 0x10(r1)
    fadds f0, f1, f0
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f1, f1
    lfs f0, lbl_80888980
    fcmpo cr0, f1, f0
    bge lbl_fn_80659070_00000DD4
    lfs f1, lbl_80888938
    b lbl_fn_80659070_00000E1C
lbl_fn_80659070_00000DD4:
    lfs f0, 0xd8(r29)
    lfs f6, 0x8(r1)
    fmuls f0, f31, f0
    lfs f4, 0xc(r1)
    lfs f2, 0x10(r1)
    lfs f5, 0x0(r30)
    fdivs f1, f0, f1
    lfs f3, 0x4(r30)
    lfs f0, 0x8(r30)
    fmuls f6, f1, f6
    fmuls f4, f1, f4
    fmuls f2, f1, f2
    fsubs f5, f5, f6
    fsubs f3, f3, f4
    fsubs f0, f0, f2
    stfs f5, 0x0(r30)
    stfs f3, 0x4(r30)
    stfs f0, 0x8(r30)
lbl_fn_80659070_00000E1C:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80659220(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    mulli r0, r3, 0xdb0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r5
    stw r29, 0x84(r1)
    mr r29, r4
    lwz r6, lbl_808801E8
    cmpwi r6, 0x0
    add r31, r6, r0
    bne lbl_fn_80659220_00000E7C
    lfs f1, lbl_80888938
    b lbl_fn_80659220_000010D0
lbl_fn_80659220_00000E7C:
    lfs f1, 0x0(r5)
    lfs f0, 0x4(r5)
    fmuls f2, f1, f1
    lfs f3, 0x8(r5)
    fmuls f0, f0, f0
    lfs f1, lbl_80888938
    fmuls f3, f3, f3
    fadds f0, f2, f0
    fadds f0, f3, f0
    fcmpu cr0, f1, f0
    bne lbl_fn_80659220_00000EAC
    b lbl_fn_80659220_000010D0
lbl_fn_80659220_00000EAC:
    fmr f1, f0
    bl fn_8068B100
    frsp f4, f1
    lfs f3, lbl_8088893C
    fcmpo cr0, f4, f3
    bge lbl_fn_80659220_00000EF0
    lfs f1, 0xe8(r31)
    fsubs f0, f3, f1
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80659220_00000EE0
    lfs f1, lbl_80888938
    b lbl_fn_80659220_000010D0
lbl_fn_80659220_00000EE0:
    fdivs f1, f3, f1
    fsubs f0, f4, f0
    fmuls f0, f1, f0
    b lbl_fn_80659220_00000F1C
lbl_fn_80659220_00000EF0:
    lfs f2, 0xe8(r31)
    fadds f0, f3, f2
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_80659220_00000F0C
    lfs f1, lbl_80888938
    b lbl_fn_80659220_000010D0
lbl_fn_80659220_00000F0C:
    lfs f1, lbl_80888970
    fsubs f0, f4, f0
    fdivs f1, f1, f2
    fmuls f0, f1, f0
lbl_fn_80659220_00000F1C:
    lfs f1, lbl_8088893C
    fmuls f0, f0, f0
    lfs f6, 0xe4(r31)
    addi r3, r1, 0x14
    fdivs f7, f1, f4
    lfs f4, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f5, 0x8(r30)
    lfs f3, 0x0(r29)
    lfs f2, 0xc(r29)
    fmuls f9, f7, f4
    lfs f4, 0x18(r29)
    fmuls f8, f7, f1
    lfs f1, lbl_80888970
    fmuls f7, f7, f5
    stfs f9, 0x8(r1)
    fmuls f3, f9, f3
    stfs f8, 0xc(r1)
    fmuls f2, f8, f2
    fmuls f4, f7, f4
    stfs f7, 0x10(r1)
    fmuls f0, f0, f6
    fadds f2, f3, f2
    fadds f6, f4, f2
    stfs f6, 0x20(r1)
    fneg f2, f6
    lfs f4, 0x4(r29)
    lfs f3, 0x10(r29)
    lfs f5, 0x1c(r29)
    fmuls f2, f2, f0
    fmuls f4, f9, f4
    fmuls f3, f8, f3
    fmuls f5, f7, f5
    fadds f2, f6, f2
    fadds f3, f4, f3
    fadds f6, f5, f3
    stfs f6, 0x24(r1)
    fsubs f1, f1, f6
    lfs f4, 0x8(r29)
    lfs f3, 0x14(r29)
    lfs f5, 0x20(r29)
    fmuls f1, f1, f0
    fmuls f4, f9, f4
    fmuls f3, f8, f3
    stfs f2, 0x14(r1)
    fadds f1, f6, f1
    fmuls f5, f7, f5
    fadds f2, f4, f3
    stfs f1, 0x18(r1)
    fadds f2, f5, f2
    stfs f2, 0x28(r1)
    fneg f1, f2
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x1c(r1)
    bl fn_8065AF20
    lfs f0, lbl_80888938
    fcmpu cr0, f0, f1
    bne lbl_fn_80659220_00001010
    fmr f1, f0
    b lbl_fn_80659220_000010D0
lbl_fn_80659220_00001010:
    addi r3, r1, 0x50
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8065B320
    mr r4, r29
    addi r3, r1, 0x50
    addi r5, r1, 0x2c
    bl fn_8065B630
    lwz r4, 0x2c(r1)
    mr r3, r29
    lwz r0, 0x30(r1)
    stw r0, 0x4(r29)
    lfs f1, lbl_80888984
    stw r4, 0x0(r29)
    lwz r4, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r0, 0xc(r29)
    stw r4, 0x8(r29)
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r0, 0x14(r29)
    stw r4, 0x10(r29)
    lwz r4, 0x44(r1)
    lwz r0, 0x48(r1)
    stw r0, 0x1c(r29)
    stw r4, 0x18(r29)
    lwz r0, 0x4c(r1)
    stw r0, 0x20(r29)
    bl fn_8065AFB0
    lfs f2, 0x20(r1)
    lfs f0, 0x14(r1)
    lfs f1, 0x24(r1)
    fsubs f5, f2, f0
    lfs f0, 0x18(r1)
    lfs f2, 0x28(r1)
    fsubs f4, f1, f0
    lfs f0, 0x1c(r1)
    fmuls f1, f5, f5
    fsubs f3, f2, f0
    stfs f5, 0x20(r1)
    fmuls f0, f4, f4
    stfs f4, 0x24(r1)
    fmuls f2, f3, f3
    fadds f0, f1, f0
    stfs f3, 0x28(r1)
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f1, f1
lbl_fn_80659220_000010D0:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806594D0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    bl _savegpr_27
    lwz r0, lbl_808801E8
    mulli r28, r3, 0xdb0
    lfs f31, lbl_80888988
    mr r27, r3
    cmpwi r0, 0x0
    mr r29, r4
    mr r30, r5
    add r31, r0, r28
    bne lbl_fn_806594D0_00001138
    lfs f1, lbl_80888938
    b lbl_fn_806594D0_0000145C
lbl_fn_806594D0_00001138:
    bl fn_806540C0
    lwz r0, lbl_808801E8
    clrlwi r4, r3, 24
    add r3, r0, r28
    lwz r0, 0x108(r3)
    cmpw r0, r4
    bne lbl_fn_806594D0_00001170
    mr r3, r27
    bl fn_806540E0
    lwz r0, lbl_808801E8
    add r3, r0, r28
    lfs f0, 0x10c(r3)
    fcmpu cr0, f0, f1
    beq lbl_fn_806594D0_000011A4
lbl_fn_806594D0_00001170:
    mr r3, r27
    bl fn_806540C0
    lwz r0, lbl_808801E8
    clrlwi r5, r3, 24
    mr r3, r27
    add r4, r0, r28
    stw r5, 0x108(r4)
    bl fn_806540E0
    lwz r0, lbl_808801E8
    mr r3, r27
    add r4, r0, r28
    stfs f1, 0x10c(r4)
    bl fn_80658F50
lbl_fn_806594D0_000011A4:
    lfs f0, 0x104(r31)
    lbz r0, 0x5e(r30)
    fdivs f31, f31, f0
    cmpwi r0, 0x2
    bne lbl_fn_806594D0_00001458
    lfs f4, 0x34(r30)
    lis r6, lbl_807B8A70@ha
    stfs f4, 0x68(r1)
    addi r6, r6, lbl_807B8A70@l
    lfs f2, lbl_80888938
    fneg f1, f31
    lfs f3, 0x38(r30)
    addi r3, r1, 0x8
    lwz r5, 0x18(r6)
    fneg f0, f3
    lwz r4, 0x1c(r6)
    lwz r0, 0x20(r6)
    stfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f2, 0x7c(r1)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    lfs f0, 0x20(r30)
    fmuls f0, f1, f0
    stfs f0, 0x8(r1)
    bl fn_8065AF20
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8065B320
    addi r3, r1, 0x20
    addi r4, r1, 0x68
    addi r5, r1, 0x44
    bl fn_8065B630
    lwz r4, 0x5c(r1)
    lwz r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r4, 0x8(r1)
    stw r3, 0xc(r1)
    stw r0, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    lfs f1, 0x18(r29)
    lfs f0, 0x20(r29)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f2, f1
    lfs f1, 0x8(r1)
    lfs f0, 0x10(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    fmuls f1, f1, f2
    fmuls f0, f0, f2
    stfs f1, 0x8(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x1c(r29)
    stfs f0, 0xc(r1)
    bl fn_8065B320
    addi r3, r1, 0x20
    addi r4, r1, 0x44
    addi r5, r1, 0x68
    bl fn_8065B630
    lwz r6, 0x0(r29)
    mr r3, r29
    lwz r0, 0x4(r29)
    mr r5, r29
    stw r0, 0x48(r1)
    addi r4, r1, 0x68
    stw r6, 0x44(r1)
    lwz r6, 0x8(r29)
    lwz r0, 0xc(r29)
    stw r0, 0x50(r1)
    stw r6, 0x4c(r1)
    lwz r6, 0x10(r29)
    lwz r0, 0x14(r29)
    stw r0, 0x58(r1)
    stw r6, 0x54(r1)
    lwz r6, 0x18(r29)
    lwz r0, 0x1c(r29)
    stw r0, 0x60(r1)
    stw r6, 0x5c(r1)
    lwz r0, 0x20(r29)
    stw r0, 0x64(r1)
    lfs f1, 0xec(r31)
    bl fn_8065B7F0
    lfs f1, 0x44(r1)
    lfs f0, 0x0(r29)
    lfs f2, 0x48(r1)
    fsubs f0, f1, f0
    lfs f9, 0x4c(r1)
    lfs f5, 0x50(r1)
    stfs f0, 0x44(r1)
    fmuls f1, f0, f0
    lfs f6, 0x54(r1)
    lfs f0, 0x4(r29)
    lfs f7, 0x58(r1)
    fsubs f0, f2, f0
    lfs f2, 0x5c(r1)
    lfs f3, 0x60(r1)
    stfs f0, 0x48(r1)
    fmuls f0, f0, f0
    lfs f4, 0x64(r1)
    lfs f8, 0x8(r29)
    fsubs f8, f9, f8
    fadds f0, f1, f0
    stfs f8, 0x4c(r1)
    fmuls f1, f8, f8
    fadds f1, f1, f0
    stfs f1, 0x44(r1)
    lfs f0, 0xc(r29)
    fsubs f0, f5, f0
    stfs f0, 0x50(r1)
    fmuls f5, f0, f0
    lfs f0, 0x10(r29)
    fsubs f0, f6, f0
    stfs f0, 0x54(r1)
    fmuls f0, f0, f0
    lfs f6, 0x14(r29)
    fsubs f6, f7, f6
    fadds f0, f5, f0
    stfs f6, 0x58(r1)
    fmuls f5, f6, f6
    fadds f5, f5, f0
    stfs f5, 0x50(r1)
    fcmpo cr0, f1, f5
    lfs f0, 0x18(r29)
    fsubs f0, f2, f0
    stfs f0, 0x5c(r1)
    fmuls f2, f0, f0
    lfs f0, 0x1c(r29)
    fsubs f0, f3, f0
    stfs f0, 0x60(r1)
    fmuls f0, f0, f0
    lfs f3, 0x20(r29)
    fsubs f3, f4, f3
    fadds f0, f2, f0
    stfs f3, 0x64(r1)
    fmuls f2, f3, f3
    fadds f0, f2, f0
    stfs f0, 0x5c(r1)
    ble lbl_fn_806594D0_00001430
    fcmpo cr0, f1, f0
    ble lbl_fn_806594D0_00001420
    bl fn_8068B100
    frsp f1, f1
    b lbl_fn_806594D0_0000145C
lbl_fn_806594D0_00001420:
    fmr f1, f0
    bl fn_8068B100
    frsp f1, f1
    b lbl_fn_806594D0_0000145C
lbl_fn_806594D0_00001430:
    fcmpo cr0, f5, f0
    ble lbl_fn_806594D0_00001448
    fmr f1, f5
    bl fn_8068B100
    frsp f1, f1
    b lbl_fn_806594D0_0000145C
lbl_fn_806594D0_00001448:
    fmr f1, f0
    bl fn_8068B100
    frsp f1, f1
    b lbl_fn_806594D0_0000145C
lbl_fn_806594D0_00001458:
    lfs f1, lbl_80888938
lbl_fn_806594D0_0000145C:
    addi r11, r1, 0xb0
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80659860(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    stfd f27, 0xc0(r1)
    psq_st f27, 0xc8(r1), 0, 0
    stfd f26, 0xb0(r1)
    psq_st f26, 0xb8(r1), 0, 0
    stfd f25, 0xa0(r1)
    psq_st f25, 0xa8(r1), 0, 0
    stfd f24, 0x90(r1)
    psq_st f24, 0x98(r1), 0, 0
    stfd f23, 0x80(r1)
    psq_st f23, 0x88(r1), 0, 0
    stfd f22, 0x70(r1)
    psq_st f22, 0x78(r1), 0, 0
    stfd f21, 0x60(r1)
    psq_st f21, 0x68(r1), 0, 0
    stfd f20, 0x50(r1)
    psq_st f20, 0x58(r1), 0, 0
    stfd f19, 0x40(r1)
    psq_st f19, 0x48(r1), 0, 0
    stfd f18, 0x30(r1)
    psq_st f18, 0x38(r1), 0, 0
    lfs f23, 0xa8(r3)
    lfs f1, 0x0(r3)
    lfs f0, 0x4(r3)
    fmuls f2, f23, f1
    lfs f24, 0xb0(r3)
    fmuls f4, f23, f0
    lwz r5, 0x24(r3)
    stw r5, 0x14(r1)
    fmuls f0, f24, f2
    fmuls f1, f24, f4
    lfs f27, 0xb4(r3)
    lwz r0, 0x2c(r3)
    fmuls f0, f0, f0
    lfs f25, lbl_8088898C
    stw r0, 0x1c(r1)
    fmuls f1, f1, f1
    lwz r4, 0x28(r3)
    fmuls f3, f25, f0
    lfs f26, lbl_8088893C
    fmuls f0, f27, f4
    fmuls f2, f27, f2
    fadds f12, f26, f3
    stw r4, 0x18(r1)
    fmuls f1, f25, f1
    lwz r5, 0x18(r3)
    stw r5, 0x8(r1)
    fmuls f12, f12, f2
    fadds f22, f26, f1
    lfs f10, 0x14(r1)
    lfs f8, 0x1c(r1)
    lfs f9, 0x18(r1)
    fmuls f1, f12, f10
    fmuls f22, f22, f0
    lfs f0, 0x30(r3)
    fmuls f3, f12, f8
    lwz r0, 0x20(r3)
    fmuls f5, f12, f9
    lwz r5, 0x30(r3)
    lwz r4, 0x1c(r3)
    fsubs f19, f0, f1
    stw r0, 0x10(r1)
    lfs f0, 0x38(r3)
    stw r5, 0x20(r1)
    fsubs f18, f0, f3
    lfs f4, 0x34(r3)
    lfs f6, 0x20(r1)
    stw r4, 0xc(r1)
    fsubs f11, f4, f5
    lwz r4, 0x34(r3)
    lwz r0, 0x38(r3)
    fmuls f28, f12, f6
    lfs f3, 0x10(r1)
    fmuls f1, f22, f6
    lfs f7, 0x8(r1)
    stw r4, 0x24(r1)
    fmuls f21, f22, f3
    lfs f5, 0xc(r1)
    fmuls f6, f22, f7
    stw r0, 0x28(r1)
    lfs f2, 0x24(r1)
    fmuls f4, f22, f5
    fadds f6, f19, f6
    lfs f29, 0x24(r3)
    lfs f0, 0x18(r3)
    fmuls f30, f12, f2
    fadds f4, f11, f4
    lfs f13, 0x28(r1)
    fmuls f19, f22, f2
    lfs f31, 0x28(r3)
    fadds f2, f18, f21
    lfs f11, 0x2c(r3)
    fmuls f21, f22, f13
    lfs f20, 0x1c(r3)
    fmuls f12, f12, f13
    stfs f6, 0x30(r3)
    lfs f22, 0x20(r3)
    fadds f29, f29, f28
    fadds f13, f31, f30
    stfs f4, 0x34(r3)
    fadds f6, f11, f12
    stfs f2, 0x38(r3)
    fsubs f0, f0, f1
    fsubs f12, f20, f19
    fsubs f11, f22, f21
    lfs f2, 0x8(r3)
    lfs f1, lbl_80888984
    fmuls f2, f23, f2
    fmuls f4, f24, f2
    fmuls f2, f27, f2
    fmuls f4, f4, f4
    fmuls f4, f25, f4
    fadds f18, f26, f4
    fmuls f18, f18, f2
    fmuls f10, f18, f10
    fmuls f9, f18, f9
    fmuls f8, f18, f8
    fmuls f2, f18, f3
    fadds f3, f0, f10
    fadds f0, f12, f9
    fadds f8, f11, f8
    stfs f3, 0x18(r3)
    fmuls f4, f18, f5
    fmuls f7, f18, f7
    stfs f0, 0x1c(r3)
    fsubs f0, f6, f2
    fsubs f3, f13, f4
    stfs f8, 0x20(r3)
    fsubs f5, f29, f7
    stfs f3, 0x28(r3)
    stfs f5, 0x24(r3)
    stfs f0, 0x2c(r3)
    addi r3, r3, 0x18
    bl fn_8065AFB0
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    psq_l f27, 0xc8(r1), 0, 0
    lfd f27, 0xc0(r1)
    psq_l f26, 0xb8(r1), 0, 0
    lfd f26, 0xb0(r1)
    psq_l f25, 0xa8(r1), 0, 0
    lfd f25, 0xa0(r1)
    psq_l f24, 0x98(r1), 0, 0
    lfd f24, 0x90(r1)
    psq_l f23, 0x88(r1), 0, 0
    lfd f23, 0x80(r1)
    psq_l f22, 0x78(r1), 0, 0
    lfd f22, 0x70(r1)
    psq_l f21, 0x68(r1), 0, 0
    lfd f21, 0x60(r1)
    psq_l f20, 0x58(r1), 0, 0
    lfd f20, 0x50(r1)
    psq_l f19, 0x48(r1), 0, 0
    lfd f19, 0x40(r1)
    psq_l f18, 0x38(r1), 0, 0
    lfd f18, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80659B20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lbz r0, 0x36(r4)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80659B20_0000175C
    lfs f4, 0x154(r3)
    lfd f5, 0x120(r3)
    b lbl_fn_80659B20_00001764
lbl_fn_80659B20_0000175C:
    lfs f4, 0x138(r3)
    lfd f5, 0x108(r3)
lbl_fn_80659B20_00001764:
    lha r4, 0x38(r4)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    xoris r0, r4, 0x8000
    lfd f3, lbl_80888960
    stw r0, 0xc(r1)
    lfd f2, 0xd80(r3)
    lfd f0, 0x8(r1)
    lfd f1, lbl_80888990
    fsub f3, f0, f3
    lfd f0, lbl_80888948
    fsub f3, f3, f4
    fmul f3, f5, f3
    fsub f3, f3, f2
    fmul f1, f1, f3
    fcmpo cr0, f1, f0
    bge lbl_fn_80659B20_000017AC
    fneg f1, f1
lbl_fn_80659B20_000017AC:
    lfd f0, lbl_80888998
    fcmpo cr0, f1, f0
    bge lbl_fn_80659B20_000017C0
    fmr f1, f0
    b lbl_fn_80659B20_000017D0
lbl_fn_80659B20_000017C0:
    lfd f0, lbl_80888950
    fcmpo cr0, f1, f0
    ble lbl_fn_80659B20_000017D0
    fmr f1, f0
lbl_fn_80659B20_000017D0:
    fmul f3, f3, f1
    lfd f2, 0xd80(r3)
    lfs f1, 0xda4(r3)
    lfd f0, lbl_80888948
    fadd f2, f2, f3
    stfd f2, 0xd80(r3)
    fmul f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80659B20_0000180C
    lfd f0, lbl_808889A0
    fsub f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r3, 0xc(r1)
    b lbl_fn_80659B20_00001820
lbl_fn_80659B20_0000180C:
    lfd f0, lbl_808889A0
    fadd f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
lbl_fn_80659B20_00001820:
    addi r1, r1, 0x20
    blr
}

asm void fn_80659C10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lbz r0, 0x36(r4)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_80659C10_0000184C
    lfs f4, 0x15c(r3)
    lfd f5, 0x128(r3)
    b lbl_fn_80659C10_00001854
lbl_fn_80659C10_0000184C:
    lfs f4, 0x140(r3)
    lfd f5, 0x110(r3)
lbl_fn_80659C10_00001854:
    lha r4, 0x3a(r4)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    xoris r0, r4, 0x8000
    lfd f3, lbl_80888960
    stw r0, 0xc(r1)
    lfd f2, 0xd88(r3)
    lfd f0, 0x8(r1)
    lfd f1, lbl_80888990
    fsub f3, f0, f3
    lfd f0, lbl_80888948
    fsub f3, f3, f4
    fmul f3, f5, f3
    fsub f3, f3, f2
    fmul f1, f1, f3
    fcmpo cr0, f1, f0
    bge lbl_fn_80659C10_0000189C
    fneg f1, f1
lbl_fn_80659C10_0000189C:
    lfd f0, lbl_80888998
    fcmpo cr0, f1, f0
    bge lbl_fn_80659C10_000018B0
    fmr f1, f0
    b lbl_fn_80659C10_000018C0
lbl_fn_80659C10_000018B0:
    lfd f0, lbl_80888950
    fcmpo cr0, f1, f0
    ble lbl_fn_80659C10_000018C0
    fmr f1, f0
lbl_fn_80659C10_000018C0:
    fmul f3, f3, f1
    lfd f2, 0xd88(r3)
    lfs f1, 0xda8(r3)
    lfd f0, lbl_80888948
    fadd f2, f2, f3
    stfd f2, 0xd88(r3)
    fmul f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80659C10_000018FC
    lfd f0, lbl_808889A0
    fsub f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r3, 0xc(r1)
    b lbl_fn_80659C10_00001910
lbl_fn_80659C10_000018FC:
    lfd f0, lbl_808889A0
    fadd f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
lbl_fn_80659C10_00001910:
    addi r1, r1, 0x20
    blr
}

asm void fn_80659D00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lbz r0, 0x36(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_80659D00_0000193C
    lfs f4, 0x164(r3)
    lfd f5, 0x130(r3)
    b lbl_fn_80659D00_00001944
lbl_fn_80659D00_0000193C:
    lfs f4, 0x148(r3)
    lfd f5, 0x118(r3)
lbl_fn_80659D00_00001944:
    lha r4, 0x3c(r4)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    xoris r0, r4, 0x8000
    lfd f3, lbl_80888960
    stw r0, 0xc(r1)
    lfd f2, 0xd90(r3)
    lfd f0, 0x8(r1)
    lfd f1, lbl_80888990
    fsub f3, f0, f3
    lfd f0, lbl_80888948
    fsub f3, f3, f4
    fmul f3, f5, f3
    fsub f3, f3, f2
    fmul f1, f1, f3
    fcmpo cr0, f1, f0
    bge lbl_fn_80659D00_0000198C
    fneg f1, f1
lbl_fn_80659D00_0000198C:
    lfd f0, lbl_80888998
    fcmpo cr0, f1, f0
    bge lbl_fn_80659D00_000019A0
    fmr f1, f0
    b lbl_fn_80659D00_000019B0
lbl_fn_80659D00_000019A0:
    lfd f0, lbl_80888950
    fcmpo cr0, f1, f0
    ble lbl_fn_80659D00_000019B0
    fmr f1, f0
lbl_fn_80659D00_000019B0:
    fmul f3, f3, f1
    lfd f2, 0xd90(r3)
    lfs f1, 0xdac(r3)
    lfd f0, lbl_80888948
    fadd f2, f2, f3
    stfd f2, 0xd90(r3)
    fmul f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80659D00_000019EC
    lfd f0, lbl_808889A0
    fsub f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r3, 0xc(r1)
    b lbl_fn_80659D00_00001A00
lbl_fn_80659D00_000019EC:
    lfd f0, lbl_808889A0
    fadd f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
lbl_fn_80659D00_00001A00:
    addi r1, r1, 0x20
    blr
}

asm void fn_80659DF0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    stfd f26, 0xc0(r1)
    psq_st f26, 0xc8(r1), 0, 0
    bl _savegpr_14
    mulli r7, r3, 0xdb0
    lis r0, 0x4330
    lwz r6, lbl_808801E8
    mr r18, r3
    cmpwi r5, 0x0
    stw r0, 0x50(r1)
    add r3, r6, r7
    stw r0, 0x58(r1)
    mr r19, r4
    mr r20, r5
    addi r16, r3, 0x8
    ble lbl_fn_80659DF0_00002488
    cmpwi r6, 0x0
    beq lbl_fn_80659DF0_00002488
    lbz r0, 0xb8(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80659DF0_00001ABC
    lfs f27, 0xc4(r16)
    li r21, 0x1
    lfs f0, lbl_808889A8
    lfs f26, lbl_808889AC
    fmuls f0, f0, f27
    fctiwz f0, f0
    stfd f0, 0x60(r1)
    lwz r22, 0x64(r1)
    b lbl_fn_80659DF0_00001ACC
lbl_fn_80659DF0_00001ABC:
    lbz r21, 0xc6(r3)
    lfs f27, 0xd4(r3)
    lwz r22, 0xd8(r3)
    lfs f26, 0xdc(r3)
lbl_fn_80659DF0_00001ACC:
    lfs f0, 0x54(r16)
    lis r4, lbl_807B8A4C@ha
    lbz r0, 0xbc(r16)
    addi r4, r4, lbl_807B8A4C@l
    fdivs f1, f27, f0
    mulli r0, r0, 0xc
    add r3, r4, r0
    lwzx r29, r4, r0
    lwz r28, 0x4(r3)
    lwz r26, 0x8(r3)
    neg r0, r29
    stw r0, 0x68(r1)
    neg r14, r28
    neg r27, r26
    bl fn_8065AED0
    lfs f0, 0x58(r16)
    mr r25, r3
    fdivs f1, f27, f0
    bl fn_8065AED0
    lfs f0, 0x5c(r16)
    mr r24, r3
    fdivs f1, f27, f0
    bl fn_8065AED0
    cmpwi r25, 0x0
    mr r23, r3
    bne lbl_fn_80659DF0_00001B38
    addi r25, r25, 0x1
lbl_fn_80659DF0_00001B38:
    cmpwi r24, 0x0
    bne lbl_fn_80659DF0_00001B44
    addi r24, r24, 0x1
lbl_fn_80659DF0_00001B44:
    cmpwi r3, 0x0
    bne lbl_fn_80659DF0_00001B50
    addi r23, r3, 0x1
lbl_fn_80659DF0_00001B50:
    li r0, 0x0
    stb r0, 0xbb(r16)
    lfs f27, lbl_8088893C
    stb r0, 0xba(r16)
    lfd f28, lbl_80888960
    stb r0, 0xb9(r16)
    lfd f29, lbl_80888948
    stfs f27, 0xe8(r16)
    lfs f30, lbl_80888938
    stfs f27, 0xec(r16)
    lfs f31, lbl_80888968
lbl_fn_80659DF0_00001B7C:
    subf r3, r20, r19
    subic. r3, r3, 0x1
    bge lbl_fn_80659DF0_00001B94
    lwz r0, 0xda0(r16)
    add r3, r3, r0
    addi r3, r3, 0x10
lbl_fn_80659DF0_00001B94:
    cmpwi r3, 0x10
    blt lbl_fn_80659DF0_00001BB0
    subi r0, r3, 0x10
    lwz r3, 0xd9c(r16)
    mulli r0, r0, 0x42
    add r15, r3, r0
    b lbl_fn_80659DF0_00001BBC
lbl_fn_80659DF0_00001BB0:
    mulli r0, r3, 0x42
    lwz r3, 0xd98(r16)
    add r15, r3, r0
lbl_fn_80659DF0_00001BBC:
    lwz r6, 0x3c(r16)
    lwz r5, 0x40(r16)
    lwz r4, 0x44(r16)
    lwz r0, 0x4(r16)
    lwz r3, 0x0(r16)
    stw r3, 0x3c(r16)
    stw r0, 0x40(r16)
    lwz r0, 0x8(r16)
    stw r0, 0x44(r16)
    lbz r0, 0x29(r15)
    stw r6, 0x8(r1)
    extsb. r0, r0
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    beq lbl_fn_80659DF0_00001C64
    lwz r3, lbl_808801E8
    lfs f1, 0x48(r16)
    lfs f0, 0x0(r3)
    fmuls f1, f1, f0
    stfs f1, 0x48(r16)
    lfs f0, 0x0(r16)
    fadds f0, f0, f1
    stfs f0, 0x0(r16)
    lwz r3, lbl_808801E8
    lfs f1, 0x4c(r16)
    lfs f0, 0x0(r3)
    fmuls f1, f1, f0
    stfs f1, 0x4c(r16)
    lfs f0, 0x4(r16)
    fadds f0, f0, f1
    stfs f0, 0x4(r16)
    lwz r3, lbl_808801E8
    lfs f1, 0x50(r16)
    lfs f0, 0x0(r3)
    fmuls f1, f1, f0
    stfs f1, 0x50(r16)
    lfs f0, 0x8(r16)
    fadds f0, f0, f1
    stfs f0, 0x8(r16)
    stfs f30, 0xe8(r16)
    stfs f30, 0xec(r16)
    b lbl_fn_80659DF0_00002388
lbl_fn_80659DF0_00001C64:
    lwz r3, 0x17c(r16)
    addi r0, r3, 0x1
    clrlwi r0, r0, 24
    stw r0, 0x17c(r16)
    lbz r0, 0xbc(r16)
    cmplwi r0, 0x2
    bge lbl_fn_80659DF0_00001C94
    mr r3, r16
    mr r4, r15
    bl fn_80659B20
    mr r17, r3
    b lbl_fn_80659DF0_00001C98
lbl_fn_80659DF0_00001C94:
    lha r17, 0x2e(r15)
lbl_fn_80659DF0_00001C98:
    lwz r0, 0x17c(r16)
    li r31, 0x1
    slwi r0, r0, 2
    add r3, r16, r0
    stw r17, 0x180(r3)
    lfs f1, 0x170(r16)
    bl fn_8065AED0
    lwz r0, 0x68(r1)
    subf r3, r3, r17
    cmpw r3, r0
    ble lbl_fn_80659DF0_00001CCC
    cmpw r3, r29
    blt lbl_fn_80659DF0_00001D00
lbl_fn_80659DF0_00001CCC:
    lwz r3, lbl_808801E8
    lfs f1, 0x48(r16)
    lfs f0, 0x0(r3)
    fmuls f1, f1, f0
    stfs f1, 0x48(r16)
    lfs f0, 0x0(r16)
    fadds f0, f0, f1
    stfs f0, 0x0(r16)
    lbz r3, 0xb9(r16)
    addi r0, r3, 0x1
    stb r0, 0xb9(r16)
    stfs f30, 0xe8(r16)
    b lbl_fn_80659DF0_00001EB0
lbl_fn_80659DF0_00001D00:
    xoris r0, r17, 0x8000
    stw r0, 0x54(r1)
    subf r5, r25, r17
    add r6, r17, r25
    lfd f0, 0x50(r1)
    fsubs f0, f0, f28
    stfs f0, 0x0(r16)
    lwz r4, 0x17c(r16)
    subf r0, r22, r4
    subi r3, r4, 0x1
    clrlwi r4, r3, 24
    clrlwi r7, r0, 24
lbl_fn_80659DF0_00001D30:
    slwi r0, r4, 2
    add r3, r16, r0
    lwz r3, 0x180(r3)
    cmpw r3, r5
    blt lbl_fn_80659DF0_00001D64
    cmpw r3, r6
    bgt lbl_fn_80659DF0_00001D64
    subi r0, r4, 0x1
    add r17, r17, r3
    clrlwi r4, r0, 24
    addi r31, r31, 0x1
    cmpw r4, r7
    bne lbl_fn_80659DF0_00001D30
lbl_fn_80659DF0_00001D64:
    subi r3, r31, 0x1
    subi r0, r22, 0x1
    xoris r3, r3, 0x8000
    stw r3, 0x5c(r1)
    xoris r4, r0, 0x8000
    xoris r0, r31, 0x8000
    lfd f0, 0x58(r1)
    xoris r3, r17, 0x8000
    stw r4, 0x54(r1)
    cmpwi r21, 0x0
    fsubs f3, f0, f28
    lfs f1, 0x0(r16)
    lfd f0, 0x50(r1)
    stw r3, 0x5c(r1)
    fsubs f0, f0, f28
    lfd f2, 0x58(r1)
    stw r0, 0x54(r1)
    fdivs f3, f3, f0
    lfd f0, 0x50(r1)
    fmuls f3, f3, f3
    fsubs f2, f2, f28
    fsubs f0, f0, f28
    fmuls f3, f3, f3
    fdivs f0, f2, f0
    fmuls f3, f3, f3
    fsubs f0, f0, f1
    fmuls f3, f3, f3
    fmuls f3, f3, f3
    fmuls f0, f3, f0
    fadds f0, f1, f0
    stfs f0, 0x0(r16)
    beq lbl_fn_80659DF0_00001E00
    lfs f0, 0x0(r16)
    fmuls f3, f3, f26
    lfs f1, 0x170(r16)
    fsubs f0, f0, f1
    fmuls f0, f3, f0
    fadds f0, f1, f0
    stfs f0, 0x170(r16)
lbl_fn_80659DF0_00001E00:
    lfs f2, 0x0(r16)
    lfs f1, 0x170(r16)
    lfs f0, 0x54(r16)
    fsubs f1, f2, f1
    fmuls f0, f0, f1
    stfs f0, 0x0(r16)
    lbz r0, 0xbd(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80659DF0_00001E7C
    lfs f1, 0xc8(r16)
    lfs f2, 0x0(r16)
    fneg f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80659DF0_00001E78
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_80659DF0_00001E78
    fcmpo cr0, f2, f29
    bge lbl_fn_80659DF0_00001E54
    fneg f2, f2
lbl_fn_80659DF0_00001E54:
    lfs f1, 0xc8(r16)
    lfs f0, 0xe8(r16)
    fdivs f1, f2, f1
    fsubs f1, f27, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80659DF0_00001E70
    stfs f1, 0xe8(r16)
lbl_fn_80659DF0_00001E70:
    stfs f30, 0x0(r16)
    b lbl_fn_80659DF0_00001E7C
lbl_fn_80659DF0_00001E78:
    stfs f30, 0xe8(r16)
lbl_fn_80659DF0_00001E7C:
    lbz r0, 0xbc(r16)
    cmplwi r0, 0x1
    bne lbl_fn_80659DF0_00001EA0
    lfs f1, 0x0(r16)
    lfs f0, 0x8(r1)
    fsubs f0, f1, f0
    fmuls f0, f31, f0
    stfs f0, 0x48(r16)
    b lbl_fn_80659DF0_00001EB0
lbl_fn_80659DF0_00001EA0:
    lfs f1, 0x0(r16)
    lfs f0, 0x3c(r16)
    fsubs f0, f1, f0
    stfs f0, 0x48(r16)
lbl_fn_80659DF0_00001EB0:
    lbz r0, 0xbc(r16)
    cmplwi r0, 0x2
    bge lbl_fn_80659DF0_00001ED0
    mr r3, r16
    mr r4, r15
    bl fn_80659C10
    mr r17, r3
    b lbl_fn_80659DF0_00001ED8
lbl_fn_80659DF0_00001ED0:
    lha r0, 0x2a(r15)
    neg r17, r0
lbl_fn_80659DF0_00001ED8:
    lwz r0, 0x17c(r16)
    li r30, 0x1
    slwi r0, r0, 2
    add r3, r16, r0
    stw r17, 0x580(r3)
    lfs f1, 0x174(r16)
    bl fn_8065AED0
    subf r0, r3, r17
    cmpw r0, r14
    ble lbl_fn_80659DF0_00001F08
    cmpw r0, r28
    blt lbl_fn_80659DF0_00001F3C
lbl_fn_80659DF0_00001F08:
    lwz r3, lbl_808801E8
    lfs f1, 0x4c(r16)
    lfs f0, 0x0(r3)
    fmuls f1, f1, f0
    stfs f1, 0x4c(r16)
    lfs f0, 0x4(r16)
    fadds f0, f0, f1
    stfs f0, 0x4(r16)
    lbz r3, 0xba(r16)
    addi r0, r3, 0x1
    stb r0, 0xba(r16)
    stfs f30, 0xe8(r16)
    b lbl_fn_80659DF0_000020F0
lbl_fn_80659DF0_00001F3C:
    xoris r0, r17, 0x8000
    stw r0, 0x5c(r1)
    subf r5, r24, r17
    add r6, r17, r24
    lfd f0, 0x58(r1)
    fsubs f0, f0, f28
    stfs f0, 0x4(r16)
    lwz r4, 0x17c(r16)
    subf r0, r22, r4
    subi r3, r4, 0x1
    clrlwi r4, r3, 24
    clrlwi r7, r0, 24
    nop
lbl_fn_80659DF0_00001F70:
    slwi r0, r4, 2
    add r3, r16, r0
    lwz r3, 0x580(r3)
    cmpw r3, r5
    blt lbl_fn_80659DF0_00001FA4
    cmpw r3, r6
    bgt lbl_fn_80659DF0_00001FA4
    subi r0, r4, 0x1
    add r17, r17, r3
    clrlwi r4, r0, 24
    addi r30, r30, 0x1
    cmpw r4, r7
    bne lbl_fn_80659DF0_00001F70
lbl_fn_80659DF0_00001FA4:
    subi r3, r30, 0x1
    subi r0, r22, 0x1
    xoris r3, r3, 0x8000
    stw r3, 0x54(r1)
    xoris r4, r0, 0x8000
    xoris r0, r30, 0x8000
    lfd f0, 0x50(r1)
    xoris r3, r17, 0x8000
    stw r4, 0x5c(r1)
    cmpwi r21, 0x0
    fsubs f3, f0, f28
    lfs f1, 0x4(r16)
    lfd f0, 0x58(r1)
    stw r3, 0x54(r1)
    fsubs f0, f0, f28
    lfd f2, 0x50(r1)
    stw r0, 0x5c(r1)
    fdivs f3, f3, f0
    lfd f0, 0x58(r1)
    fmuls f3, f3, f3
    fsubs f2, f2, f28
    fsubs f0, f0, f28
    fmuls f3, f3, f3
    fdivs f0, f2, f0
    fmuls f3, f3, f3
    fsubs f0, f0, f1
    fmuls f3, f3, f3
    fmuls f3, f3, f3
    fmuls f0, f3, f0
    fadds f0, f1, f0
    stfs f0, 0x4(r16)
    beq lbl_fn_80659DF0_00002040
    lfs f0, 0x4(r16)
    fmuls f3, f3, f26
    lfs f1, 0x174(r16)
    fsubs f0, f0, f1
    fmuls f0, f3, f0
    fadds f0, f1, f0
    stfs f0, 0x174(r16)
lbl_fn_80659DF0_00002040:
    lfs f2, 0x4(r16)
    lfs f1, 0x174(r16)
    lfs f0, 0x58(r16)
    fsubs f1, f2, f1
    fmuls f0, f0, f1
    stfs f0, 0x4(r16)
    lbz r0, 0xbd(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80659DF0_000020BC
    lfs f1, 0xc8(r16)
    lfs f2, 0x4(r16)
    fneg f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80659DF0_000020B8
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_80659DF0_000020B8
    fcmpo cr0, f2, f29
    bge lbl_fn_80659DF0_00002094
    fneg f2, f2
lbl_fn_80659DF0_00002094:
    lfs f1, 0xc8(r16)
    lfs f0, 0xe8(r16)
    fdivs f1, f2, f1
    fsubs f1, f27, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80659DF0_000020B0
    stfs f1, 0xe8(r16)
lbl_fn_80659DF0_000020B0:
    stfs f30, 0x4(r16)
    b lbl_fn_80659DF0_000020BC
lbl_fn_80659DF0_000020B8:
    stfs f30, 0xe8(r16)
lbl_fn_80659DF0_000020BC:
    lbz r0, 0xbc(r16)
    cmplwi r0, 0x1
    bne lbl_fn_80659DF0_000020E0
    lfs f1, 0x4(r16)
    lfs f0, 0xc(r1)
    fsubs f0, f1, f0
    fmuls f0, f31, f0
    stfs f0, 0x4c(r16)
    b lbl_fn_80659DF0_000020F0
lbl_fn_80659DF0_000020E0:
    lfs f1, 0x4(r16)
    lfs f0, 0x40(r16)
    fsubs f0, f1, f0
    stfs f0, 0x4c(r16)
lbl_fn_80659DF0_000020F0:
    lbz r0, 0xbc(r16)
    cmplwi r0, 0x2
    bge lbl_fn_80659DF0_00002110
    mr r3, r16
    mr r4, r15
    bl fn_80659D00
    mr r17, r3
    b lbl_fn_80659DF0_00002114
lbl_fn_80659DF0_00002110:
    lha r17, 0x2c(r15)
lbl_fn_80659DF0_00002114:
    lwz r0, 0x17c(r16)
    li r15, 0x1
    slwi r0, r0, 2
    add r3, r16, r0
    stw r17, 0x980(r3)
    lfs f1, 0x178(r16)
    bl fn_8065AED0
    subf r0, r3, r17
    cmpw r0, r27
    ble lbl_fn_80659DF0_00002144
    cmpw r0, r26
    blt lbl_fn_80659DF0_00002178
lbl_fn_80659DF0_00002144:
    lwz r3, lbl_808801E8
    lfs f1, 0x50(r16)
    lfs f0, 0x0(r3)
    fmuls f1, f1, f0
    stfs f1, 0x50(r16)
    lfs f0, 0x8(r16)
    fadds f0, f0, f1
    stfs f0, 0x8(r16)
    lbz r3, 0xbb(r16)
    addi r0, r3, 0x1
    stb r0, 0xbb(r16)
    stfs f30, 0xe8(r16)
    b lbl_fn_80659DF0_00002328
lbl_fn_80659DF0_00002178:
    xoris r0, r17, 0x8000
    stw r0, 0x54(r1)
    subf r5, r23, r17
    add r6, r17, r23
    lfd f0, 0x50(r1)
    fsubs f0, f0, f28
    stfs f0, 0x8(r16)
    lwz r4, 0x17c(r16)
    subf r0, r22, r4
    subi r3, r4, 0x1
    clrlwi r4, r3, 24
    clrlwi r7, r0, 24
lbl_fn_80659DF0_000021A8:
    slwi r0, r4, 2
    add r3, r16, r0
    lwz r3, 0x980(r3)
    cmpw r3, r5
    blt lbl_fn_80659DF0_000021DC
    cmpw r3, r6
    bgt lbl_fn_80659DF0_000021DC
    subi r0, r4, 0x1
    add r17, r17, r3
    clrlwi r4, r0, 24
    addi r15, r15, 0x1
    cmpw r4, r7
    bne lbl_fn_80659DF0_000021A8
lbl_fn_80659DF0_000021DC:
    subi r3, r15, 0x1
    subi r0, r22, 0x1
    xoris r3, r3, 0x8000
    stw r3, 0x5c(r1)
    xoris r4, r0, 0x8000
    xoris r0, r15, 0x8000
    lfd f0, 0x58(r1)
    xoris r3, r17, 0x8000
    stw r4, 0x54(r1)
    cmpwi r21, 0x0
    fsubs f3, f0, f28
    lfs f1, 0x8(r16)
    lfd f0, 0x50(r1)
    stw r3, 0x5c(r1)
    fsubs f0, f0, f28
    lfd f2, 0x58(r1)
    stw r0, 0x54(r1)
    fdivs f3, f3, f0
    lfd f0, 0x50(r1)
    fmuls f3, f3, f3
    fsubs f2, f2, f28
    fsubs f0, f0, f28
    fmuls f3, f3, f3
    fdivs f0, f2, f0
    fmuls f3, f3, f3
    fsubs f0, f0, f1
    fmuls f3, f3, f3
    fmuls f3, f3, f3
    fmuls f0, f3, f0
    fadds f0, f1, f0
    stfs f0, 0x8(r16)
    beq lbl_fn_80659DF0_00002278
    lfs f0, 0x8(r16)
    fmuls f3, f3, f26
    lfs f1, 0x178(r16)
    fsubs f0, f0, f1
    fmuls f0, f3, f0
    fadds f0, f1, f0
    stfs f0, 0x178(r16)
lbl_fn_80659DF0_00002278:
    lfs f2, 0x8(r16)
    lfs f1, 0x178(r16)
    lfs f0, 0x5c(r16)
    fsubs f1, f2, f1
    fmuls f0, f0, f1
    stfs f0, 0x8(r16)
    lbz r0, 0xbd(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80659DF0_000022F4
    lfs f1, 0xc8(r16)
    lfs f2, 0x8(r16)
    fneg f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80659DF0_000022F0
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_80659DF0_000022F0
    fcmpo cr0, f2, f29
    bge lbl_fn_80659DF0_000022CC
    fneg f2, f2
lbl_fn_80659DF0_000022CC:
    lfs f1, 0xc8(r16)
    lfs f0, 0xe8(r16)
    fdivs f1, f2, f1
    fsubs f1, f27, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80659DF0_000022E8
    stfs f1, 0xe8(r16)
lbl_fn_80659DF0_000022E8:
    stfs f30, 0x8(r16)
    b lbl_fn_80659DF0_000022F4
lbl_fn_80659DF0_000022F0:
    stfs f30, 0xe8(r16)
lbl_fn_80659DF0_000022F4:
    lbz r0, 0xbc(r16)
    cmplwi r0, 0x1
    bne lbl_fn_80659DF0_00002318
    lfs f1, 0x8(r16)
    lfs f0, 0x10(r1)
    fsubs f0, f1, f0
    fmuls f0, f31, f0
    stfs f0, 0x50(r16)
    b lbl_fn_80659DF0_00002328
lbl_fn_80659DF0_00002318:
    lfs f1, 0x8(r16)
    lfs f0, 0x44(r16)
    fsubs f0, f1, f0
    stfs f0, 0x50(r16)
lbl_fn_80659DF0_00002328:
    cmpw r31, r30
    bge lbl_fn_80659DF0_00002340
    cmpw r31, r15
    bge lbl_fn_80659DF0_0000234C
    mr r15, r31
    b lbl_fn_80659DF0_0000234C
lbl_fn_80659DF0_00002340:
    cmpw r30, r15
    bge lbl_fn_80659DF0_0000234C
    mr r15, r30
lbl_fn_80659DF0_0000234C:
    subi r3, r15, 0x1
    subi r0, r22, 0x1
    xoris r3, r3, 0x8000
    stw r3, 0x5c(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0xec(r16)
    stw r0, 0x54(r1)
    lfd f2, 0x58(r1)
    lfd f1, 0x50(r1)
    fsubs f2, f2, f28
    fsubs f1, f1, f28
    fdivs f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80659DF0_00002388
    stfs f1, 0xec(r16)
lbl_fn_80659DF0_00002388:
    lfs f2, 0xac(r16)
    mr r3, r16
    lfs f1, 0x0(r16)
    lfs f0, 0xc(r16)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0xc(r16)
    lfs f2, 0xac(r16)
    lfs f1, 0x4(r16)
    lfs f0, 0x10(r16)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x10(r16)
    lfs f2, 0xac(r16)
    lfs f1, 0x8(r16)
    lfs f0, 0x14(r16)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x14(r16)
    bl fn_80659860
    lwz r5, lbl_808801E8
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80659DF0_00002474
    lwz r6, 0x0(r16)
    mr r3, r18
    lwz r0, 0x4(r16)
    addi r4, r1, 0x14
    stw r0, 0x18(r1)
    stw r6, 0x14(r1)
    lwz r0, 0x8(r16)
    stw r0, 0x1c(r1)
    lwz r6, 0xc(r16)
    lwz r0, 0x10(r16)
    stw r0, 0x24(r1)
    stw r6, 0x20(r1)
    lwz r0, 0x14(r16)
    stw r0, 0x28(r1)
    lwz r6, 0x18(r16)
    lwz r0, 0x1c(r16)
    stw r0, 0x30(r1)
    stw r6, 0x2c(r1)
    lwz r6, 0x20(r16)
    lwz r0, 0x24(r16)
    stw r0, 0x38(r1)
    stw r6, 0x34(r1)
    lwz r6, 0x28(r16)
    lwz r0, 0x2c(r16)
    stw r0, 0x40(r1)
    stw r6, 0x3c(r1)
    lwz r6, 0x30(r16)
    lwz r0, 0x34(r16)
    stw r0, 0x48(r1)
    stw r6, 0x44(r1)
    lwz r0, 0x38(r16)
    stw r0, 0x4c(r1)
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_80659DF0_00002474:
    subic. r20, r20, 0x1
    bne lbl_fn_80659DF0_00001B7C
    lwz r3, lbl_808801E8
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_80659DF0_00002488:
    addi r11, r1, 0xc0
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    psq_l f26, 0xc8(r1), 0, 0
    lfd f26, 0xc0(r1)
    bl _restgpr_14
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8065A8B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mulli r30, r3, 0xdb0
    lwz r0, lbl_808801E8
    cmpwi r0, 0x0
    add r31, r0, r30
    beq lbl_fn_8065A8B0_00002658
    lbz r0, 0xc4(r31)
    cmplwi r0, 0x2
    blt lbl_fn_8065A8B0_00002510
    lfd f0, lbl_80888948
    stfd f0, 0x110(r31)
    b lbl_fn_8065A8B0_00002658
lbl_fn_8065A8B0_00002510:
    addi r4, r31, 0x140
    addi r5, r31, 0x15c
    bl fn_80665EA0
    lfs f4, lbl_80888938
    lfs f1, 0x144(r31)
    fcmpu cr0, f4, f1
    beq lbl_fn_8065A8B0_00002568
    lfs f0, 0x14c(r31)
    fcmpu cr0, f4, f0
    beq lbl_fn_8065A8B0_00002568
    lfs f0, 0x154(r31)
    fcmpu cr0, f4, f0
    beq lbl_fn_8065A8B0_00002568
    lfs f0, 0x160(r31)
    fcmpu cr0, f4, f0
    beq lbl_fn_8065A8B0_00002568
    lfs f0, 0x168(r31)
    fcmpu cr0, f4, f0
    beq lbl_fn_8065A8B0_00002568
    lfs f0, 0x170(r31)
    fcmpu cr0, f4, f0
    bne lbl_fn_8065A8B0_00002574
lbl_fn_8065A8B0_00002568:
    lfd f0, lbl_80888948
    stfd f0, 0x110(r31)
    b lbl_fn_8065A8B0_00002658
lbl_fn_8065A8B0_00002574:
    lwz r4, 0x158(r31)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    li r0, 0x1
    xoris r4, r4, 0x8000
    lfd f3, lbl_80888960
    stw r4, 0xc(r1)
    lfd f2, lbl_808889B0
    lfd f0, 0x8(r1)
    stw r3, 0x10(r1)
    fsub f0, f0, f3
    fmul f5, f2, f0
    fdiv f0, f5, f1
    stfd f0, 0x110(r31)
    lfs f0, 0x14c(r31)
    fdiv f0, f5, f0
    stfd f0, 0x118(r31)
    lfs f0, 0x154(r31)
    fdiv f0, f5, f0
    stfd f0, 0x120(r31)
    lwz r3, 0x174(r31)
    lfs f0, 0x160(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lfd f1, 0x10(r1)
    fsub f1, f1, f3
    fmul f1, f2, f1
    fdiv f0, f1, f0
    stfd f0, 0x128(r31)
    lfs f0, 0x168(r31)
    fdiv f0, f1, f0
    stfd f0, 0x130(r31)
    lfs f0, 0x170(r31)
    fdiv f0, f1, f0
    stfd f0, 0x138(r31)
    stb r0, 0xca(r31)
    lwz r3, lbl_808801E8
    cmpwi r3, 0x0
    add r3, r3, r30
    beq lbl_fn_8065A8B0_00002658
    stb r0, 0xc0(r3)
    lfs f0, lbl_8088896C
    stfs f0, 0xcc(r3)
    lwz r0, lbl_808801E8
    cmpwi r0, 0x0
    add r3, r0, r30
    addi r4, r3, 0x8
    beq lbl_fn_8065A8B0_00002658
    lwz r3, 0x17c(r4)
    lis r0, 0x8000
    addi r3, r3, 0xff
    clrlslwi r3, r3, 24, 2
    add r3, r4, r3
    stw r0, 0x980(r3)
    stw r0, 0x580(r3)
    stw r0, 0x180(r3)
    stfs f4, 0xec(r4)
lbl_fn_8065A8B0_00002658:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8065AA50(void)
{
    nofralloc
    lwz r7, lbl_808801E8
    mulli r0, r3, 0xdb0
    cmpwi r7, 0x0
    add r3, r7, r0
    beqlr
    stw r4, 0xda0(r3)
    stw r5, 0xda4(r3)
    stw r6, 0xda8(r3)
    blr
}

asm void fn_8065AA80(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_24
    lwz r8, lbl_808801E8
    lis r0, 0x4330
    mulli r30, r3, 0xdb0
    fmr f31, f1
    cmpwi r8, 0x0
    stw r0, 0x10(r1)
    mr r28, r7
    stw r0, 0x18(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    add r31, r8, r30
    beq lbl_fn_8065AA80_00002AAC
    addi r4, r1, 0x8
    li r29, 0x2
    bl fn_80660CF0
    cmpwi r3, -0x1
    beq lbl_fn_8065AA80_0000275C
    lwz r3, 0x8(r1)
    subi r0, r3, 0x5
    cmplwi r0, 0x2
    ble lbl_fn_8065AA80_00002720
    cmplwi r3, 0xfa
    bne lbl_fn_8065AA80_0000275C
lbl_fn_8065AA80_00002720:
    mr r3, r24
    bl fn_80664950
    clrlwi r0, r3, 24
    cmplwi r0, 0x4
    bne lbl_fn_8065AA80_0000273C
    li r29, 0x0
    b lbl_fn_8065AA80_0000275C
lbl_fn_8065AA80_0000273C:
    cmpwi r0, 0x0
    beq lbl_fn_8065AA80_0000275C
    lwz r4, 0x8(r1)
    subfic r3, r4, 0x5
    subi r0, r4, 0x5
    or r0, r3, r0
    srwi r29, r0, 31
    stb r29, 0xc4(r31)
lbl_fn_8065AA80_0000275C:
    lwz r0, lbl_808801E8
    cmpwi r0, 0x0
    add r3, r0, r30
    beq lbl_fn_8065AA80_0000287C
    lbz r0, 0xc4(r3)
    cmpw r0, r29
    beq lbl_fn_8065AA80_00002780
    lfd f0, lbl_80888948
    stfd f0, 0x110(r3)
lbl_fn_8065AA80_00002780:
    clrlwi r0, r29, 24
    lis r7, lbl_807B8A28@ha
    mulli r0, r0, 0xc
    lis r6, lbl_807B8A4C@ha
    stb r29, 0xc4(r3)
    addi r7, r7, lbl_807B8A28@l
    lfd f4, lbl_80888960
    addi r6, r6, lbl_807B8A4C@l
    lwzx r4, r7, r0
    lwzx r0, r6, r0
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_80888958
    lfd f0, 0x10(r1)
    stw r0, 0x1c(r1)
    fsub f1, f0, f4
    lfd f2, lbl_80888950
    lfd f0, 0x18(r1)
    fdiv f1, f3, f1
    fsub f0, f0, f4
    fmul f0, f1, f0
    fdiv f0, f2, f0
    frsp f0, f0
    stfs f0, 0x5c(r3)
    lbz r0, 0xc4(r3)
    mulli r0, r0, 0xc
    add r4, r7, r0
    lwz r5, 0x4(r4)
    add r4, r6, r0
    lwz r0, 0x4(r4)
    xoris r4, r5, 0x8000
    stw r4, 0x14(r1)
    xoris r0, r0, 0x8000
    lfd f0, 0x10(r1)
    stw r0, 0x1c(r1)
    fsub f1, f0, f4
    lfd f0, 0x18(r1)
    fdiv f1, f3, f1
    fsub f0, f0, f4
    fmul f0, f1, f0
    fdiv f0, f2, f0
    frsp f0, f0
    stfs f0, 0x60(r3)
    lbz r0, 0xc4(r3)
    mulli r0, r0, 0xc
    add r4, r7, r0
    lwz r5, 0x8(r4)
    add r4, r6, r0
    lwz r0, 0x8(r4)
    xoris r4, r5, 0x8000
    stw r4, 0x14(r1)
    xoris r0, r0, 0x8000
    lfd f0, 0x10(r1)
    stw r0, 0x1c(r1)
    fsub f1, f0, f4
    lfd f0, 0x18(r1)
    fdiv f1, f3, f1
    fsub f0, f0, f4
    fmul f0, f1, f0
    fdiv f0, f2, f0
    frsp f0, f0
    stfs f0, 0x64(r3)
lbl_fn_8065AA80_0000287C:
    cmpwi r27, 0x0
    ble lbl_fn_8065AA80_00002A34
    cmpwi r28, 0x0
    beq lbl_fn_8065AA80_00002A34
    cmpwi r29, 0x2
    beq lbl_fn_8065AA80_00002A34
    lfd f1, lbl_80888958
    frsp f3, f31
    lfd f0, lbl_808889B8
    fmul f2, f1, f31
    stfs f3, 0xb4(r31)
    lfd f1, lbl_80888948
    fmul f0, f0, f31
    frsp f2, f2
    stfs f2, 0xb8(r31)
    frsp f0, f0
    stfs f0, 0xbc(r31)
    lfd f0, 0x110(r31)
    fcmpu cr0, f1, f0
    bne lbl_fn_8065AA80_000028D4
    mr r3, r24
    bl fn_8065A8B0
lbl_fn_8065AA80_000028D4:
    lwz r0, 0x24(r31)
    mr r3, r24
    lwz r5, 0x20(r31)
    mr r4, r26
    stw r5, 0x68(r31)
    mr r5, r27
    stw r0, 0x6c(r31)
    lwz r0, 0x2c(r31)
    lwz r6, 0x28(r31)
    stw r6, 0x70(r31)
    stw r0, 0x74(r31)
    lwz r0, 0x34(r31)
    lwz r6, 0x30(r31)
    stw r6, 0x78(r31)
    stw r0, 0x7c(r31)
    lwz r0, 0x3c(r31)
    lwz r6, 0x38(r31)
    stw r6, 0x80(r31)
    stw r0, 0x84(r31)
    lwz r0, 0x40(r31)
    stw r0, 0x88(r31)
    bl fn_80659DF0
    lbz r0, 0xc0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8065AA80_00002940
    mr r3, r24
    bl fn_80658DF0
lbl_fn_8065AA80_00002940:
    lbz r0, 0xc7(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8065AA80_000029D4
    lwz r0, lbl_808801E8
    cmpwi r0, 0x0
    add r3, r0, r30
    addi r26, r3, 0x8
    bne lbl_fn_8065AA80_00002968
    lfs f31, lbl_80888938
    b lbl_fn_8065AA80_000029CC
lbl_fn_8065AA80_00002968:
    mr r3, r26
    addi r4, r26, 0x18
    addi r5, r26, 0x60
    addi r6, r26, 0x84
    bl fn_80659070
    fmr f31, f1
    mr r3, r26
    addi r4, r26, 0x24
    addi r5, r26, 0x6c
    addi r6, r26, 0x90
    bl fn_80659070
    fcmpo cr0, f1, f31
    ble lbl_fn_8065AA80_000029A0
    fmr f31, f1
lbl_fn_8065AA80_000029A0:
    mr r3, r26
    addi r4, r26, 0x30
    addi r5, r26, 0x78
    addi r6, r26, 0x9c
    bl fn_80659070
    fcmpo cr0, f1, f31
    ble lbl_fn_8065AA80_000029C0
    fmr f31, f1
lbl_fn_8065AA80_000029C0:
    lfs f1, lbl_80888984
    addi r3, r26, 0x18
    bl fn_8065AFB0
lbl_fn_8065AA80_000029CC:
    stfs f31, 0xf8(r31)
    b lbl_fn_8065AA80_000029DC
lbl_fn_8065AA80_000029D4:
    lfs f0, lbl_80888938
    stfs f0, 0xf8(r31)
lbl_fn_8065AA80_000029DC:
    lbz r0, 0xc8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8065AA80_00002A00
    mr r3, r24
    addi r4, r31, 0x20
    addi r5, r28, 0xc
    bl fn_80659220
    stfs f1, 0xfc(r31)
    b lbl_fn_8065AA80_00002A08
lbl_fn_8065AA80_00002A00:
    lfs f0, lbl_80888938
    stfs f0, 0xfc(r31)
lbl_fn_8065AA80_00002A08:
    lbz r0, 0xc9(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8065AA80_00002A2C
    mr r3, r24
    mr r5, r28
    addi r4, r31, 0x20
    bl fn_806594D0
    stfs f1, 0x100(r31)
    b lbl_fn_8065AA80_00002A34
lbl_fn_8065AA80_00002A2C:
    lfs f0, lbl_80888938
    stfs f0, 0x100(r31)
lbl_fn_8065AA80_00002A34:
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r31)
    stw r0, 0x4(r25)
    stw r3, 0x0(r25)
    lwz r0, 0x10(r31)
    stw r0, 0x8(r25)
    lwz r3, 0x14(r31)
    lwz r0, 0x18(r31)
    stw r0, 0x10(r25)
    stw r3, 0xc(r25)
    lwz r0, 0x1c(r31)
    stw r0, 0x14(r25)
    lwz r3, 0x20(r31)
    lwz r0, 0x24(r31)
    stw r0, 0x1c(r25)
    stw r3, 0x18(r25)
    lwz r3, 0x28(r31)
    lwz r0, 0x2c(r31)
    stw r0, 0x24(r25)
    stw r3, 0x20(r25)
    lwz r3, 0x30(r31)
    lwz r0, 0x34(r31)
    stw r0, 0x2c(r25)
    stw r3, 0x28(r25)
    lwz r3, 0x38(r31)
    lwz r0, 0x3c(r31)
    stw r0, 0x34(r25)
    stw r3, 0x30(r25)
    lwz r0, 0x40(r31)
    stw r0, 0x38(r25)
lbl_fn_8065AA80_00002AAC:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8065AEB0(void)
{
    nofralloc
    lwz r4, lbl_808801E8
    cmpwi r4, 0x0
    beqlr
    stw r3, 0x4(r4)
    blr
}

asm void fn_8065AED0(void)
{
    nofralloc
    lfs f0, lbl_808889C4
    stwu r1, -0x20(r1)
    fcmpo cr0, f1, f0
    bge lbl_fn_8065AED0_00002B18
    lfs f0, lbl_808889C0
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r3, 0xc(r1)
    b lbl_fn_8065AED0_00002B2C
lbl_fn_8065AED0_00002B18:
    lfs f0, lbl_808889C0
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
lbl_fn_8065AED0_00002B2C:
    addi r1, r1, 0x20
    blr
}

asm void fn_8065AF20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x0(r3)
    lfs f0, 0x4(r3)
    fmuls f1, f1, f1
    lfs f2, 0x8(r3)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f1, f1
    lfs f0, lbl_808889C4
    fcmpu cr0, f0, f1
    beq lbl_fn_8065AF20_00002BB4
    lfs f0, lbl_808889C8
    lfs f3, 0x0(r31)
    fdivs f4, f0, f1
    lfs f2, 0x4(r31)
    lfs f0, 0x8(r31)
    fmuls f3, f3, f4
    fmuls f2, f2, f4
    fmuls f0, f0, f4
    stfs f3, 0x0(r31)
    stfs f2, 0x4(r31)
    stfs f0, 0x8(r31)
lbl_fn_8065AF20_00002BB4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8065AFB0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    lfs f31, lbl_808889C0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    lfs f30, lbl_808889C8
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    fmr f28, f1
    stw r31, 0x3c(r1)
    mr r31, r3
lbl_fn_8065AFB0_00002C10:
    lfs f1, 0x0(r31)
    lfs f0, 0x4(r31)
    fmuls f1, f1, f1
    lfs f2, 0x8(r31)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f3, f1
    lfs f1, 0xc(r31)
    lfs f0, 0x10(r31)
    lfs f2, 0x14(r31)
    fmuls f1, f1, f1
    fdivs f6, f30, f3
    lfs f5, 0x0(r31)
    lfs f4, 0x4(r31)
    lfs f3, 0x8(r31)
    fmuls f0, f0, f0
    fmuls f5, f5, f6
    fmuls f4, f4, f6
    fmuls f3, f3, f6
    stfs f5, 0x0(r31)
    fmuls f2, f2, f2
    fadds f0, f1, f0
    stfs f4, 0x4(r31)
    stfs f3, 0x8(r31)
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f3, f1
    lfs f1, 0x18(r31)
    lfs f0, 0x1c(r31)
    lfs f2, 0x20(r31)
    fmuls f1, f1, f1
    fdivs f6, f30, f3
    lfs f5, 0xc(r31)
    lfs f4, 0x10(r31)
    lfs f3, 0x14(r31)
    fmuls f0, f0, f0
    fmuls f5, f5, f6
    fmuls f4, f4, f6
    fmuls f3, f3, f6
    stfs f5, 0xc(r31)
    fmuls f2, f2, f2
    fadds f0, f1, f0
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f0, f1
    lfs f5, 0x18(r31)
    lfs f4, 0x1c(r31)
    lfs f1, 0x20(r31)
    fdivs f6, f30, f0
    lfs f3, 0x10(r31)
    lfs f0, 0xc(r31)
    lfs f2, 0x14(r31)
    lfs f12, 0x8(r31)
    lfs f11, 0x4(r31)
    fmuls f4, f4, f6
    lfs f9, 0x0(r31)
    fmuls f29, f1, f6
    fmuls f5, f5, f6
    stfs f4, 0x1c(r31)
    fmuls f7, f2, f4
    fmuls f10, f3, f29
    stfs f5, 0x18(r31)
    fmuls f6, f2, f5
    fmuls f1, f0, f29
    stfs f29, 0x20(r31)
    fsubs f13, f10, f7
    fmuls f8, f0, f4
    fsubs f10, f6, f1
    stfs f13, 0x8(r1)
    fmuls f7, f3, f5
    fmuls f6, f13, f13
    stfs f10, 0xc(r1)
    fmuls f1, f10, f10
    fsubs f7, f8, f7
    fmuls f10, f4, f12
    fmuls f8, f29, f11
    stfs f7, 0x10(r1)
    fadds f1, f6, f1
    fmuls f6, f5, f12
    fsubs f10, f10, f8
    fmuls f8, f29, f9
    fmuls f7, f7, f7
    stfs f10, 0x14(r1)
    fmuls f5, f5, f11
    fsubs f8, f8, f6
    fadds f1, f7, f1
    fmuls f4, f4, f9
    stfs f8, 0x18(r1)
    fmuls f7, f11, f2
    fmuls f6, f12, f3
    fsubs f8, f5, f4
    fmuls f5, f12, f0
    fmuls f4, f9, f2
    stfs f8, 0x1c(r1)
    fmuls f2, f9, f3
    fmuls f0, f11, f0
    fsubs f6, f7, f6
    fsubs f3, f5, f4
    fsubs f0, f2, f0
    stfs f6, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_8068B100
    frsp f29, f1
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    lfs f2, 0x1c(r1)
    fmuls f1, f1, f1
    fdivs f9, f30, f29
    lfs f8, 0x8(r1)
    lfs f6, 0xc(r1)
    lfs f4, 0x10(r1)
    lfs f7, 0x0(r31)
    lfs f5, 0x4(r31)
    fmuls f8, f9, f8
    lfs f3, 0x8(r31)
    fmuls f6, f9, f6
    fmuls f4, f9, f4
    fmuls f0, f0, f0
    fadds f7, f7, f8
    fadds f5, f5, f6
    fadds f3, f3, f4
    fmuls f6, f31, f7
    fmuls f4, f31, f5
    fmuls f3, f31, f3
    stfs f6, 0x0(r31)
    fmuls f2, f2, f2
    fadds f0, f1, f0
    stfs f4, 0x4(r31)
    stfs f3, 0x8(r31)
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f9, f1
    lfs f1, 0x20(r1)
    lfs f0, 0x24(r1)
    lfs f2, 0x28(r1)
    fmuls f1, f1, f1
    fdivs f10, f30, f9
    lfs f8, 0x14(r1)
    lfs f6, 0x18(r1)
    lfs f4, 0x1c(r1)
    lfs f7, 0xc(r31)
    lfs f5, 0x10(r31)
    fmuls f8, f10, f8
    lfs f3, 0x14(r31)
    fmuls f6, f10, f6
    fmuls f4, f10, f4
    fmuls f0, f0, f0
    fadds f7, f7, f8
    fadds f5, f5, f6
    fadds f3, f3, f4
    fmuls f6, f31, f7
    fmuls f4, f31, f5
    fmuls f3, f31, f3
    stfs f6, 0xc(r31)
    fmuls f2, f2, f2
    fadds f0, f1, f0
    stfs f4, 0x10(r31)
    fadds f29, f29, f9
    stfs f3, 0x14(r31)
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f6, f1
    lfs f5, 0x20(r1)
    lfs f3, 0x24(r1)
    lfs f1, 0x28(r1)
    fdivs f7, f30, f6
    lfs f4, 0x18(r31)
    lfs f2, 0x1c(r31)
    lfs f0, 0x20(r31)
    fmuls f5, f7, f5
    fmuls f3, f7, f3
    fmuls f1, f7, f1
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    fadds f29, f29, f6
    fmuls f3, f31, f4
    fmuls f1, f31, f2
    fmuls f0, f31, f0
    stfs f3, 0x18(r31)
    fcmpo cr0, f29, f28
    stfs f1, 0x1c(r31)
    stfs f0, 0x20(r31)
    blt lbl_fn_8065AFB0_00002C10
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8065B320(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    stfd f28, 0xa0(r1)
    psq_st f28, 0xa8(r1), 0, 0
    stfd f27, 0x90(r1)
    psq_st f27, 0x98(r1), 0, 0
    stfd f26, 0x80(r1)
    psq_st f26, 0x88(r1), 0, 0
    stfd f25, 0x70(r1)
    psq_st f25, 0x78(r1), 0, 0
    stfd f24, 0x60(r1)
    psq_st f24, 0x68(r1), 0, 0
    stfd f23, 0x50(r1)
    psq_st f23, 0x58(r1), 0, 0
    stfd f22, 0x40(r1)
    psq_st f22, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    lfs f0, 0x4(r4)
    lfs f4, 0x8(r5)
    lfs f1, 0x0(r5)
    lfs f3, 0x8(r4)
    fmuls f31, f0, f4
    lfs f2, 0x4(r5)
    fmuls f26, f0, f1
    lfs f0, 0x0(r4)
    fmuls f30, f3, f1
    fmuls f28, f3, f2
    fmuls f29, f0, f2
    fmuls f27, f0, f4
    fsubs f0, f31, f28
    fsubs f3, f29, f26
    fsubs f2, f30, f27
    stfs f0, 0x20(r1)
    fmuls f1, f0, f0
    stfs f2, 0x24(r1)
    fmuls f0, f2, f2
    fmuls f2, f3, f3
    stfs f3, 0x28(r1)
    fadds f0, f1, f0
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f1, f1
    lfs f0, lbl_808889C4
    fcmpu cr0, f0, f1
    bne lbl_fn_8065B320_00003074
    lis r4, lbl_807B8A70@ha
    lwzu r3, lbl_807B8A70@l(r4)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r29)
    stw r3, 0x0(r29)
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r29)
    stw r3, 0x8(r29)
    lwz r3, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r29)
    stw r3, 0x10(r29)
    lwz r3, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r0, 0x1c(r29)
    stw r3, 0x18(r29)
    lwz r0, 0x20(r4)
    stw r0, 0x20(r29)
    b lbl_fn_8065B320_000031DC
lbl_fn_8065B320_00003074:
    lfs f0, lbl_808889C8
    lfs f3, 0x20(r1)
    fdivs f7, f0, f1
    lfs f0, 0x28(r1)
    lfs f1, 0x24(r1)
    lfs f5, 0x4(r30)
    lfs f2, 0x8(r30)
    lfs f4, 0x0(r30)
    fmuls f8, f3, f7
    lfs f11, 0x4(r31)
    fmuls f6, f0, f7
    lfs f24, 0x0(r31)
    fmuls f7, f1, f7
    lfs f1, 0x8(r31)
    fmuls f10, f5, f6
    stfs f8, 0x20(r1)
    fmuls f0, f2, f7
    fmuls f9, f2, f8
    stfs f7, 0x24(r1)
    fmuls f3, f4, f6
    fsubs f23, f10, f0
    stfs f6, 0x28(r1)
    fmuls f2, f11, f6
    fsubs f3, f9, f3
    stfs f23, 0x14(r1)
    fmuls f0, f1, f7
    fmuls f10, f1, f8
    stfs f3, 0x18(r1)
    fmuls f1, f24, f6
    fsubs f2, f2, f0
    fmuls f9, f24, f7
    fsubs f1, f10, f1
    stfs f2, 0x8(r1)
    fmuls f0, f11, f8
    fmuls f22, f7, f8
    stfs f1, 0xc(r1)
    fmuls f12, f1, f23
    fsubs f0, f9, f0
    fmuls f10, f2, f3
    fadds f12, f22, f12
    stfs f0, 0x10(r1)
    fmuls f9, f6, f8
    fmuls f11, f0, f23
    fadds f12, f29, f12
    fmuls f25, f8, f8
    fadds f11, f9, f11
    stfs f12, 0x4(r29)
    fmuls f8, f5, f8
    fadds f10, f22, f10
    fadds f11, f27, f11
    fmuls f12, f4, f7
    stfs f11, 0x8(r29)
    fadds f10, f26, f10
    fmuls f13, f2, f23
    fsubs f11, f12, f8
    stfs f10, 0xc(r29)
    fmuls f5, f24, f4
    fadds f4, f25, f13
    stfs f11, 0x1c(r1)
    fmuls f2, f2, f11
    fmuls f12, f6, f7
    fadds f4, f5, f4
    fmuls f5, f1, f3
    fmuls f3, f0, f3
    stfs f4, 0x0(r29)
    fmuls f1, f1, f11
    fmuls f8, f7, f7
    lfs f10, 0x4(r31)
    lfs f7, 0x4(r30)
    fadds f4, f12, f3
    fadds f2, f9, f2
    fadds f1, f12, f1
    fadds f4, f31, f4
    fadds f3, f30, f2
    fadds f2, f28, f1
    stfs f4, 0x14(r29)
    fmuls f7, f10, f7
    stfs f3, 0x18(r29)
    fadds f3, f8, f5
    fmuls f1, f6, f6
    stfs f2, 0x1c(r29)
    fmuls f0, f0, f11
    fadds f2, f7, f3
    stfs f2, 0x10(r29)
    fadds f0, f1, f0
    lfs f2, 0x8(r31)
    lfs f1, 0x8(r30)
    fmuls f1, f2, f1
    fadds f0, f1, f0
    stfs f0, 0x20(r29)
lbl_fn_8065B320_000031DC:
    lwz r0, 0xe4(r1)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    psq_l f28, 0xa8(r1), 0, 0
    lfd f28, 0xa0(r1)
    psq_l f27, 0x98(r1), 0, 0
    lfd f27, 0x90(r1)
    psq_l f26, 0x88(r1), 0, 0
    lfd f26, 0x80(r1)
    psq_l f25, 0x78(r1), 0, 0
    lfd f25, 0x70(r1)
    psq_l f24, 0x68(r1), 0, 0
    lfd f24, 0x60(r1)
    psq_l f23, 0x58(r1), 0, 0
    lfd f23, 0x50(r1)
    psq_l f22, 0x48(r1), 0, 0
    lfd f22, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8065B630(void)
{
    nofralloc
    lfs f3, 0x0(r4)
    lfs f2, 0x0(r3)
    lfs f1, 0x4(r4)
    lfs f0, 0xc(r3)
    fmuls f2, f3, f2
    lfs f3, 0x8(r4)
    fmuls f0, f1, f0
    lfs f1, 0x18(r3)
    fmuls f1, f3, f1
    fadds f0, f2, f0
    fadds f0, f1, f0
    stfs f0, 0x0(r5)
    lfs f3, 0x0(r4)
    lfs f2, 0x4(r3)
    lfs f1, 0x4(r4)
    lfs f0, 0x10(r3)
    fmuls f2, f3, f2
    lfs f3, 0x8(r4)
    fmuls f0, f1, f0
    lfs f1, 0x1c(r3)
    fmuls f1, f3, f1
    fadds f0, f2, f0
    fadds f0, f1, f0
    stfs f0, 0x4(r5)
    lfs f3, 0x0(r4)
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r4)
    lfs f0, 0x14(r3)
    fmuls f2, f3, f2
    lfs f3, 0x8(r4)
    fmuls f0, f1, f0
    lfs f1, 0x20(r3)
    fmuls f1, f3, f1
    fadds f0, f2, f0
    fadds f0, f1, f0
    stfs f0, 0x8(r5)
    lfs f3, 0xc(r4)
    lfs f2, 0x0(r3)
    lfs f1, 0x10(r4)
    lfs f0, 0xc(r3)
    fmuls f2, f3, f2
    lfs f3, 0x14(r4)
    fmuls f0, f1, f0
    lfs f1, 0x18(r3)
    fmuls f1, f3, f1
    fadds f0, f2, f0
    fadds f0, f1, f0
    stfs f0, 0xc(r5)
    lfs f3, 0xc(r4)
    lfs f2, 0x4(r3)
    lfs f1, 0x10(r4)
    lfs f0, 0x10(r3)
    fmuls f2, f3, f2
    lfs f3, 0x14(r4)
    fmuls f0, f1, f0
    lfs f1, 0x1c(r3)
    fmuls f1, f3, f1
    fadds f0, f2, f0
    fadds f0, f1, f0
    stfs f0, 0x10(r5)
    lfs f3, 0xc(r4)
    lfs f2, 0x8(r3)
    lfs f1, 0x10(r4)
    lfs f0, 0x14(r3)
    fmuls f2, f3, f2
    lfs f3, 0x14(r4)
    fmuls f0, f1, f0
    lfs f1, 0x20(r3)
    fmuls f1, f3, f1
    fadds f0, f2, f0
    fadds f0, f1, f0
    stfs f0, 0x14(r5)
    lfs f3, 0x18(r4)
    lfs f2, 0x0(r3)
    lfs f1, 0x1c(r4)
    lfs f0, 0xc(r3)
    fmuls f2, f3, f2
    lfs f3, 0x20(r4)
    fmuls f0, f1, f0
    lfs f1, 0x18(r3)
    fmuls f1, f3, f1
    fadds f0, f2, f0
    fadds f0, f1, f0
    stfs f0, 0x18(r5)
    lfs f3, 0x18(r4)
    lfs f2, 0x4(r3)
    lfs f1, 0x1c(r4)
    lfs f0, 0x10(r3)
    fmuls f2, f3, f2
    lfs f3, 0x20(r4)
    fmuls f0, f1, f0
    lfs f1, 0x1c(r3)
    fmuls f1, f3, f1
    fadds f0, f2, f0
    fadds f0, f1, f0
    stfs f0, 0x1c(r5)
    lfs f3, 0x18(r4)
    lfs f2, 0x8(r3)
    lfs f1, 0x1c(r4)
    lfs f0, 0x14(r3)
    fmuls f2, f3, f2
    lfs f3, 0x20(r4)
    fmuls f0, f1, f0
    lfs f1, 0x20(r3)
    fmuls f1, f3, f1
    fadds f0, f2, f0
    fadds f0, f1, f0
    stfs f0, 0x20(r5)
    blr
}

asm void fn_8065B7F0(void)
{
    nofralloc
    lfs f0, 0x0(r4)
    lfs f2, 0x0(r3)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x0(r5)
    lfs f0, 0x4(r4)
    lfs f2, 0x4(r3)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r4)
    lfs f2, 0x8(r3)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r4)
    lfs f2, 0xc(r3)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r4)
    lfs f2, 0x10(r3)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x10(r5)
    lfs f0, 0x14(r4)
    lfs f2, 0x14(r3)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x14(r5)
    lfs f0, 0x18(r4)
    lfs f2, 0x18(r3)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x18(r5)
    lfs f0, 0x1c(r4)
    lfs f2, 0x1c(r3)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x1c(r5)
    lfs f2, 0x20(r3)
    mr r3, r5
    lfs f0, 0x20(r4)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    lfs f1, lbl_808889CC
    fadds f0, f2, f0
    stfs f0, 0x20(r5)
    b fn_8065AFB0
}

asm void fn_8065B8E0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    bne cr1, lbl_fn_8065B8E0_00003538
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_8065B8E0_00003538:
    lbz r0, lbl_808801F8
    stw r3, 0x8(r1)
    cmpwi r0, 0x0
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    beq lbl_fn_8065B8E0_00003594
    la r3, lbl_8087EBB0
    crclr 6
    bl OSReport
    addi r5, r1, 0x88
    addi r0, r1, 0x8
    lis r3, 0x100
    stw r3, 0x68(r1)
    addi r4, r1, 0x68
    stw r5, 0x6c(r1)
    mr r3, r31
    stw r0, 0x70(r1)
    bl vprintf
lbl_fn_8065B8E0_00003594:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
