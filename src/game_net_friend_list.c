#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_8004829C(void);
extern void fn_8004B290(void);
extern void fn_8005C220(void);
extern void fn_8006A250(void);
extern void fn_8007708C(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_80097C08(void);
extern void fn_800CB360(void);
extern void fn_800CDF84(void);
extern void fn_800D1D3C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_80107274(void);
extern void fn_80107380(void);
extern void fn_801076D0(void);
extern void fn_80107798(void);
extern void fn_80107908(void);
extern void fn_801079B0(void);
extern void fn_80107B30(void);
extern void fn_80107BD8(void);
extern void fn_80107CEC(void);
extern void fn_80107D94(void);
extern void fn_80107DA4(void);
extern void fn_80107E58(void);
extern void fn_80107E68(void);
extern void fn_80107F10(void);
extern void fn_80107F20(void);
extern void fn_80107FC8(void);
extern void fn_8013310C(void);
extern void fn_80133130(void);
extern void fn_8013322C(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_80155DAC(void);
extern void fn_80160324(void);
extern void fn_8016E970(void);
extern void fn_8017C7F8(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80239798(void);
extern void fn_80239DAC(void);
extern void fn_80370AE4(void);
extern void fn_8037C8C4(void);
extern void fn_803E836C(void);
extern void fn_80473E74(void);
extern void fn_80490EB8(void);
extern void fn_804AC430(void);
extern void fn_804AE820(void);
extern void fn_804B4C50(void);
extern void fn_804CE82C(void);
extern void fn_804D1400(void);
extern void fn_804D1414(void);
extern void fn_804D16FC(void);
extern void fn_804D1FDC(void);
extern void fn_804EA60C(void);
extern void fn_804EAEE4(void);
extern void fn_804EB938(void);
extern void fn_804F60D8(void);
extern void fn_804F60DC(void);
extern void fn_804F60E0(void);
extern void fn_804FB224(void);
extern void fn_80508B78(void);
extern void fn_8050CDD4(void);
extern void fn_8050CFCC(void);
extern void fn_8050E514(void);
extern void fn_80680770(void);
extern void fn_80686A64(void);
extern void fn_80686EA4(void);
extern void fn_806958E0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_807595E0[];
extern u8 lbl_80759740[];
extern u8 lbl_80759748[];
extern u8 lbl_80759B6C[];
extern u8 lbl_80759E48[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807908D0[];
extern u8 lbl_80790908[];
extern u8 lbl_80790F78[];
extern u8 lbl_807916A0[];
extern u8 lbl_807916E0[];
extern u8 lbl_80791718[];
extern u8 lbl_80791748[];
extern u8 lbl_80791B0C[];
extern u8 lbl_80792A28[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8F48[];

/* Small data declarations */
extern u32 lbl_8087E17C;
extern u32 lbl_8087E180;
extern u32 lbl_8087E184;
extern u32 lbl_8087E188;
extern u32 lbl_8087E18C;
extern u32 lbl_8087E190;
extern u32 lbl_8087E194;
extern u32 lbl_8087E198;
extern u32 lbl_8087E19C;
extern u32 lbl_8087E1A0;
extern u32 lbl_8087E1A4;
extern u32 lbl_8087E1A8;
extern u32 lbl_8087E1B4;
extern u32 lbl_8087E1B8;
extern u32 lbl_8087E1BC;
extern u32 lbl_8087E1C0;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEA8;
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F018;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F420;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F588;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5A4;
extern u32 lbl_8087F5A8;
extern u32 lbl_8087F610;
extern u32 lbl_8087F618;
extern u32 lbl_8087F61C;
extern u32 lbl_8087F628;
extern u32 lbl_8087F62C;
extern u32 lbl_8087F630;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887570;
extern u32 lbl_80887574;
extern u32 lbl_80887578;
extern u32 lbl_8088757C;
extern u32 lbl_80887580;
extern u32 lbl_80887584;
extern u32 lbl_80887588;
extern u32 lbl_8088758C;
extern u32 lbl_80887590;
extern u32 lbl_808875B0;
extern u32 lbl_808875B4;
extern u32 lbl_808875B8;
extern u32 lbl_808875BC;
extern u32 lbl_808875C0;
extern u32 lbl_808875C4;
extern u32 lbl_808875C8;

/* Function declarations */
void fn_804CEF84(void);
void fn_804CF078(void);
void fn_804CF190(void);
void fn_804CF194(void);
void fn_804CF198(void);
void fn_804CF374(void);
void fn_804CF424(void);
void fn_804CF468(void);
void fn_804CF634(void);
void fn_804CF640(void);
void fn_804D0090(void);
void fn_804D00B8(void);
void fn_804D00DC(void);
void fn_804D0140(void);
void fn_804D0164(void);
void fn_804D0304(void);
void fn_804D0328(void);

asm void fn_804CEF84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x8889
    li r6, 0x1
    stw r0, 0x24(r1)
    li r0, 0x0
    subi r5, r4, 0x7777
    lis r7, lbl_807595E0@ha
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r6, 0x74(r3)
    li r6, 0x0
    stw r0, 0x6c(r3)
    stw r0, 0x70(r3)
    lwzu r0, lbl_807595E0@l(r7)
    lwz r4, lbl_8087F610
    lwz r4, 0x564(r4)
    mulhw r5, r5, r4
    add r4, r5, r4
    srawi r4, r4, 5
    srwi r5, r4, 31
    add r4, r4, r5
    cmpw r4, r0
    bne lbl_fn_804CEF84_0000006C
    stw r6, 0x74(r3)
lbl_fn_804CEF84_0000006C:
    lwz r0, 0x4(r7)
    li r6, 0x1
    cmpw r4, r0
    bne lbl_fn_804CEF84_00000080
    stw r6, 0x74(r3)
lbl_fn_804CEF84_00000080:
    lwz r0, 0x8(r7)
    li r6, 0x2
    cmpw r4, r0
    bne lbl_fn_804CEF84_00000094
    stw r6, 0x74(r3)
lbl_fn_804CEF84_00000094:
    lwz r0, 0xc(r7)
    li r6, 0x3
    cmpw r4, r0
    bne lbl_fn_804CEF84_000000A8
    stw r6, 0x74(r3)
lbl_fn_804CEF84_000000A8:
    mr r31, r29
    li r30, 0x0
lbl_fn_804CEF84_000000B0:
    lwz r5, 0x6c(r31)
    mr r3, r29
    mr r4, r30
    li r7, 0x0
    mr r6, r5
    bl fn_804CE82C
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_804CEF84_000000B0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804CF078(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807595E0@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807595E0@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x74(r3)
    lwz r0, 0x78(r3)
    slwi r6, r6, 2
    lwzx r3, r5, r6
    cmpwi r0, 0x2
    mulli r4, r3, 0x3c
    bne lbl_fn_804CF078_00000138
    li r4, -0x1
lbl_fn_804CF078_00000138:
    lwz r3, lbl_8087F610
    lwz r0, 0x564(r3)
    cmpw r4, r0
    beq lbl_fn_804CF078_00000150
    li r5, 0x0
    bl fn_804EA60C
lbl_fn_804CF078_00000150:
    lwz r0, 0x6c(r30)
    lwz r3, lbl_8087F610
    cmpwi r0, 0x6
    stw r0, 0x5a4(r3)
    ble lbl_fn_804CF078_0000016C
    li r0, 0x6
    stw r0, 0x5a4(r3)
lbl_fn_804CF078_0000016C:
    lwz r3, 0x78(r30)
    cmpwi r3, 0x2
    bne lbl_fn_804CF078_00000194
    lwz r4, 0x70(r30)
    lwz r3, lbl_8087F610
    subi r0, r4, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x5b0(r3)
    b lbl_fn_804CF078_000001F4
lbl_fn_804CF078_00000194:
    cmpwi r31, 0x0
    bne lbl_fn_804CF078_000001F4
    cmpwi r3, 0x0
    bne lbl_fn_804CF078_000001C8
    lwz r0, 0x70(r30)
    cmpwi r0, 0x1
    bne lbl_fn_804CF078_000001C8
    lwz r3, lbl_8087F610
    li r0, 0x1
    stw r0, 0x540(r3)
    lwz r3, lbl_8087F59C
    stw r0, 0xc4(r3)
    b lbl_fn_804CF078_000001F4
lbl_fn_804CF078_000001C8:
    cmpwi r3, 0x1
    bne lbl_fn_804CF078_000001F4
    lwz r0, 0x70(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804CF078_000001F4
    lwz r3, lbl_8087F610
    li r4, 0x0
    li r0, 0x3
    stw r4, 0x540(r3)
    lwz r3, lbl_8087F59C
    stw r0, 0xc4(r3)
lbl_fn_804CF078_000001F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804CF190(void)
{
    nofralloc
    b fn_800D2338
}

asm void fn_804CF194(void)
{
    nofralloc
    b OSGetTime
}

asm void fn_804CF198(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r7, r5
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    stw r28, 0x20(r1)
    lwz r6, lbl_8087F430
    stw r0, 0x8(r1)
    cmpwi r6, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_804CF198_00000260
    lwz r0, 0x54e4(r6)
    cmpwi r0, 0xa
    beq lbl_fn_804CF198_000003D0
lbl_fn_804CF198_00000260:
    mulli r31, r5, 0x30
    lbz r0, 0x7(r29)
    lhz r5, 0x0(r29)
    mr r3, r30
    lfs f1, lbl_80887570
    extrwi r6, r0, 1, 24
    add r4, r4, r31
    lfs f2, lbl_80887574
    lwz r28, 0x22c(r4)
    mr r4, r7
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lbz r0, 0x8(r29)
    lis r5, lbl_80759740@ha
    lhz r3, 0x2(r29)
    lis r4, lbl_80759748@ha
    extsb r0, r0
    stw r3, 0xc(r1)
    xoris r3, r0, 0x8000
    lhz r0, 0x0(r29)
    stw r3, 0x14(r1)
    lfd f3, lbl_80759740@l(r5)
    cmpw r0, r28
    lfd f2, 0x8(r1)
    lfd f1, lbl_80759748@l(r4)
    lfd f0, 0x10(r1)
    fsubs f3, f2, f3
    lfs f2, lbl_80887578
    fsubs f1, f0, f1
    lfs f0, lbl_8088757C
    fdivs f3, f3, f2
    fdivs f5, f1, f0
    bne lbl_fn_804CF198_00000318
    lbz r0, 0x7(r29)
    extrwi. r0, r0, 1, 24
    bne lbl_fn_804CF198_00000324
    add r3, r30, r31
    lfs f0, lbl_80887580
    lfs f1, 0x234(r3)
    fmuls f0, f0, f5
    fsubs f1, f3, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_804CF198_00000324
lbl_fn_804CF198_00000318:
    add r3, r30, r31
    stfs f3, 0x234(r3)
    b lbl_fn_804CF198_00000374
lbl_fn_804CF198_00000324:
    cmpwi r0, 0x0
    bne lbl_fn_804CF198_00000374
    add r3, r30, r31
    lfs f0, lbl_80887584
    lfs f2, 0x234(r3)
    fmuls f0, f0, f5
    fsubs f1, f3, f2
    fabs f3, f1
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_804CF198_00000374
    fcmpo cr0, f1, f0
    ble lbl_fn_804CF198_00000368
    lfs f0, lbl_80887588
    fmadds f0, f0, f5, f2
    stfs f0, 0x234(r3)
    b lbl_fn_804CF198_00000374
lbl_fn_804CF198_00000368:
    lfs f0, lbl_80887588
    fnmsubs f0, f0, f5, f2
    stfs f0, 0x234(r3)
lbl_fn_804CF198_00000374:
    lbz r0, 0x4(r29)
    lis r3, lbl_80759740@ha
    stw r0, 0xc(r1)
    add r4, r30, r31
    lbz r0, 0x5(r29)
    stw r0, 0x14(r1)
    lfd f4, lbl_80759740@l(r3)
    lfd f0, 0x8(r1)
    lbz r0, 0x6(r29)
    fsubs f3, f0, f4
    lfd f0, 0x10(r1)
    lfs f2, lbl_8088758C
    fsubs f1, f0, f4
    stw r0, 0xc(r1)
    fdivs f3, f3, f2
    lfd f0, 0x8(r1)
    stfs f5, 0x238(r4)
    stfs f3, 0x23c(r4)
    fsubs f0, f0, f4
    fdivs f1, f1, f2
    stfs f1, 0x240(r4)
    fdivs f0, f0, f2
    stfs f0, 0x24c(r4)
lbl_fn_804CF198_000003D0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804CF374(void)
{
    nofralloc
    mulli r0, r5, 0x30
    stwu r1, -0x30(r1)
    lfs f2, lbl_80887578
    lfs f0, lbl_8088757C
    add r5, r4, r0
    lfs f1, lbl_8088758C
    lwz r4, 0x22c(r5)
    sth r4, 0x0(r3)
    lbz r0, 0x7(r3)
    lfs f3, 0x234(r5)
    fmuls f2, f2, f3
    fctiwz f2, f2
    stfd f2, 0x8(r1)
    lwz r4, 0xc(r1)
    sth r4, 0x2(r3)
    lfs f2, 0x238(r5)
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    stb r4, 0x8(r3)
    lfs f0, 0x23c(r5)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    stb r4, 0x4(r3)
    lfs f0, 0x240(r5)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    stb r4, 0x5(r3)
    lfs f0, 0x24c(r5)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
    stb r4, 0x6(r3)
    lbz r4, 0x244(r5)
    rlwimi r0, r4, 7, 24, 24
    stb r0, 0x7(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_804CF424(void)
{
    nofralloc
    lwz r0, 0x34c(r3)
    li r4, 0x0
    lfs f1, lbl_80887570
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804CF424_000004DC
lbl_fn_804CF424_000004BC:
    lfs f0, 0x24c(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_804CF424_000004D0
    fmr f1, f0
    mr r4, r5
lbl_fn_804CF424_000004D0:
    addi r3, r3, 0x30
    addi r5, r5, 0x1
    bdnz lbl_fn_804CF424_000004BC
lbl_fn_804CF424_000004DC:
    mr r3, r4
    blr
}

asm void fn_804CF468(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x674(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x55c(r4)
    sth r0, 0x4(r3)
    lwz r0, 0x560(r4)
    sth r0, 0x6(r3)
    mr r3, r31
    bl fn_80160324
    cmpwi r3, 0x0
    beq lbl_fn_804CF468_00000540
    lfs f0, 0xfb8(r31)
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    clrlwi r0, r0, 16
    b lbl_fn_804CF468_00000544
lbl_fn_804CF468_00000540:
    li r0, 0x0
lbl_fn_804CF468_00000544:
    sth r0, 0x8(r30)
    mr r3, r31
    bl fn_80160324
    cmpwi r3, 0x0
    beq lbl_fn_804CF468_00000570
    lfs f0, 0xfbc(r31)
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    clrlwi r0, r0, 16
    b lbl_fn_804CF468_00000574
lbl_fn_804CF468_00000570:
    li r0, 0x0
lbl_fn_804CF468_00000574:
    sth r0, 0xa(r30)
    lwz r3, 0x638(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804CF468_0000058C
    lwz r0, 0x4(r3)
    b lbl_fn_804CF468_00000590
lbl_fn_804CF468_0000058C:
    li r0, 0x0
lbl_fn_804CF468_00000590:
    stw r0, 0xc(r30)
    li r3, 0x0
    lbz r4, 0x12(r30)
    lwz r0, 0x12a4(r31)
    rlwimi r4, r0, 2, 24, 24
    stb r4, 0x12(r30)
    lwz r0, 0x12a4(r31)
    rlwimi r4, r0, 0, 25, 25
    stb r4, 0x12(r30)
    lwz r0, 0x12a4(r31)
    rlwimi r4, r0, 6, 26, 26
    stb r4, 0x12(r30)
    lwz r0, 0x12a4(r31)
    rlwimi r4, r0, 26, 27, 27
    stb r4, 0x12(r30)
    lwz r0, 0x12a8(r31)
    rlwimi r4, r0, 27, 28, 28
    stb r4, 0x12(r30)
    lwz r0, 0x12a8(r31)
    rlwimi r4, r0, 1, 29, 29
    stb r4, 0x12(r30)
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_804CF468_00000600
    lwz r0, 0xc48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804CF468_00000600
    li r3, 0x1
lbl_fn_804CF468_00000600:
    lbz r0, 0x12(r30)
    rlwimi r0, r3, 0, 31, 31
    rlwinm r0, r0, 0, 31, 29
    stb r0, 0x12(r30)
    lwz r3, lbl_8087F610
    lwz r4, 0xd1c(r31)
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x8(r1)
    lbz r3, 0x13(r30)
    lbz r4, 0x8(r1)
    lbz r0, 0x9(r1)
    stb r4, 0x10(r30)
    stb r0, 0x11(r30)
    lwz r0, 0x7e0(r31)
    rlwimi r3, r0, 20, 24, 24
    stb r3, 0x13(r30)
    lwz r0, 0x7e0(r31)
    rlwimi r3, r0, 4, 25, 25
    stb r3, 0x13(r30)
    lwz r0, 0x7e0(r31)
    rlwimi r3, r0, 12, 26, 26
    stb r3, 0x13(r30)
    lwz r0, 0x7e0(r31)
    rlwimi r3, r0, 14, 27, 27
    stb r3, 0x13(r30)
    lwz r0, 0x7e0(r31)
    rlwimi r3, r0, 3, 28, 28
    stb r3, 0x13(r30)
    lwz r0, 0x7e0(r31)
    rlwimi r3, r0, 19, 29, 29
    stb r3, 0x13(r30)
    lwz r0, 0x7e0(r31)
    rlwimi r3, r0, 28, 30, 30
    stb r3, 0x13(r30)
    lwz r0, 0x7e0(r31)
    rlwimi r3, r0, 25, 31, 31
    stb r3, 0x13(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804CF634(void)
{
    nofralloc
    lwz r0, 0x12a8(r3)
    extrwi r3, r0, 1, 30
    blr
}

asm void fn_804CF640(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_804CF640_000006F4
    lwz r0, 0x54e4(r5)
    cmpwi r0, 0xa
    beq lbl_fn_804CF640_000010F0
lbl_fn_804CF640_000006F4:
    lwz r5, 0x0(r3)
    lwz r0, 0x674(r4)
    cmpw r5, r0
    beq lbl_fn_804CF640_00000730
    cmpwi r5, -0x1
    bne lbl_fn_804CF640_0000071C
    mr r3, r31
    li r4, 0x0
    bl fn_8014EEC4
    b lbl_fn_804CF640_00000730
lbl_fn_804CF640_0000071C:
    mr r4, r5
    mr r3, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_804CF640_00000730:
    lhz r4, 0x4(r30)
    mr r3, r31
    bl fn_8016E970
    lhz r5, 0x8(r30)
    lis r4, 0x4330
    stw r5, 0x1c(r1)
    lis r3, lbl_80759740@ha
    lhz r0, 0xa(r30)
    stw r4, 0x18(r1)
    lfd f1, lbl_80759740@l(r3)
    lfd f0, 0x18(r1)
    lwz r3, 0xc(r30)
    fsubs f2, f0, f1
    stw r0, 0x24(r1)
    lhz r5, 0x6(r30)
    cmpwi r3, 0x0
    stw r4, 0x20(r1)
    lfd f0, 0x20(r1)
    stw r5, 0x560(r31)
    fsubs f0, f0, f1
    stfs f2, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    ble lbl_fn_804CF640_00000794
    bl fn_80219E6C
    b lbl_fn_804CF640_00000798
lbl_fn_804CF640_00000794:
    li r3, 0x0
lbl_fn_804CF640_00000798:
    lwz r0, 0x7e0(r31)
    lwz r4, 0x638(r31)
    rlwinm r0, r0, 0, 26, 26
    stw r4, 0x63c(r31)
    cmplwi r0, 0x20
    stw r3, 0x638(r31)
    beq lbl_fn_804CF640_00000D30
    lbz r0, 0x12(r30)
    mr r3, r31
    lwz r5, 0x12a4(r31)
    extrwi r6, r0, 1, 24
    extrwi r4, r0, 1, 25
    subi r0, r6, 0x1
    cntlzw r6, r0
    subi r0, r4, 0x1
    rlwimi r5, r6, 0, 26, 26
    stw r5, 0x12a4(r31)
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_80155DAC
    lbz r7, 0x12(r30)
    lwz r5, 0x12a4(r31)
    extrwi r3, r7, 1, 26
    extrwi r4, r7, 1, 27
    subi r0, r3, 0x1
    cntlzw r6, r0
    extrwi r3, r7, 1, 28
    subi r4, r4, 0x1
    extrwi r0, r7, 1, 29
    subi r3, r3, 0x1
    rlwimi r5, r6, 26, 0, 0
    cntlzw r4, r4
    cmplwi r0, 0x1
    rlwimi r5, r4, 5, 21, 21
    cntlzw r3, r3
    lwz r0, 0x12a8(r31)
    rlwimi r0, r3, 3, 23, 23
    stw r5, 0x12a4(r31)
    stw r0, 0x12a8(r31)
    beq lbl_fn_804CF640_00000848
    lwz r0, 0x5c0(r31)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r31)
    b lbl_fn_804CF640_00000854
lbl_fn_804CF640_00000848:
    lwz r0, 0x5c0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
lbl_fn_804CF640_00000854:
    lbz r0, 0x12(r30)
    li r3, 0x0
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804CF640_0000086C
    li r3, 0x3
lbl_fn_804CF640_0000086C:
    lbz r0, 0x13(r30)
    stw r3, 0xc48(r31)
    extrwi. r4, r0, 1, 24
    beq lbl_fn_804CF640_00000904
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_804CF640_00000904
    lis r4, 0x2
    addi r3, r31, 0x7d4
    subi r5, r4, 0x7960
    li r6, 0x0
    lis r4, 0x8
    bl fn_80133130
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000940
    addi r4, r31, 0xb0
    bl fn_80107E58
    lwz r12, 0x0(r31)
    mr r4, r31
    addi r3, r1, 0x8
    lwz r29, lbl_8087F048
    lwz r12, 0x94(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x90(r12)
    mtctr r12
    bctrl
    addi r4, r31, 0xb0
    mr r3, r29
    mr r5, r4
    addi r6, r1, 0x8
    bl fn_80107DA4
    b lbl_fn_804CF640_00000940
lbl_fn_804CF640_00000904:
    cmpwi r4, 0x0
    bne lbl_fn_804CF640_00000940
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_804CF640_00000940
    addi r3, r31, 0x7d4
    lis r4, 0x8
    bl fn_8013322C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000940
    addi r4, r31, 0xb0
    bl fn_80107E58
lbl_fn_804CF640_00000940:
    lbz r0, 0x13(r30)
    extrwi. r3, r0, 1, 25
    beq lbl_fn_804CF640_000009B4
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804CF640_000009B4
    lis r4, 0x2
    addi r3, r31, 0x7d4
    subi r5, r4, 0x7960
    li r6, 0x0
    li r4, 0x4
    bl fn_80133130
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_000009EC
    addi r4, r31, 0xb0
    bl fn_80107D94
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r29, lbl_8087F048
    lwz r12, 0x90(r12)
    mtctr r12
    bctrl
    addi r4, r31, 0xb0
    mr r3, r29
    mr r5, r4
    bl fn_80107CEC
    b lbl_fn_804CF640_000009EC
lbl_fn_804CF640_000009B4:
    cmpwi r3, 0x0
    bne lbl_fn_804CF640_000009EC
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_804CF640_000009EC
    addi r3, r31, 0x7d4
    li r4, 0x4
    bl fn_8013322C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_000009EC
    addi r4, r31, 0xb0
    bl fn_80107D94
lbl_fn_804CF640_000009EC:
    lbz r0, 0x13(r30)
    extrwi. r4, r0, 1, 26
    beq lbl_fn_804CF640_00000A64
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    beq lbl_fn_804CF640_00000A64
    lis r4, 0x2
    addi r3, r31, 0x7d4
    subi r5, r4, 0x7960
    li r6, 0x0
    lis r4, 0x200
    bl fn_80133130
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000AA0
    addi r4, r31, 0xb0
    bl fn_80107FC8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r29, lbl_8087F048
    lwz r12, 0x90(r12)
    mtctr r12
    bctrl
    addi r4, r31, 0xb0
    mr r3, r29
    mr r5, r4
    bl fn_80107F20
    b lbl_fn_804CF640_00000AA0
lbl_fn_804CF640_00000A64:
    cmpwi r4, 0x0
    bne lbl_fn_804CF640_00000AA0
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_804CF640_00000AA0
    addi r3, r31, 0x7d4
    lis r4, 0x200
    bl fn_8013322C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000AA0
    addi r4, r31, 0xb0
    bl fn_80107FC8
lbl_fn_804CF640_00000AA0:
    lbz r0, 0x13(r30)
    extrwi. r4, r0, 1, 27
    beq lbl_fn_804CF640_00000B00
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    beq lbl_fn_804CF640_00000B00
    lis r4, 0x2
    addi r3, r31, 0x7d4
    subi r5, r4, 0x7960
    li r6, 0x0
    lis r4, 0x40
    bl fn_80133130
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000B3C
    addi r4, r31, 0xb0
    bl fn_80107F10
    addi r4, r31, 0xb0
    lwz r3, lbl_8087F048
    mr r5, r4
    bl fn_80107E68
    b lbl_fn_804CF640_00000B3C
lbl_fn_804CF640_00000B00:
    cmpwi r4, 0x0
    bne lbl_fn_804CF640_00000B3C
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_804CF640_00000B3C
    addi r3, r31, 0x7d4
    lis r4, 0x40
    bl fn_8013322C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000B3C
    addi r4, r31, 0xb0
    bl fn_80107F10
lbl_fn_804CF640_00000B3C:
    lbz r0, 0x13(r30)
    extrwi. r3, r0, 1, 28
    beq lbl_fn_804CF640_00000B98
    lwz r0, 0x7e0(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_804CF640_00000B98
    lis r4, 0x2
    addi r3, r31, 0x7d4
    subi r5, r4, 0x7960
    li r6, 0x0
    li r4, 0x1
    bl fn_80133130
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000BD0
    addi r4, r31, 0xb0
    bl fn_801079B0
    addi r4, r31, 0xb0
    lwz r3, lbl_8087F048
    mr r5, r4
    bl fn_80107908
    b lbl_fn_804CF640_00000BD0
lbl_fn_804CF640_00000B98:
    cmpwi r3, 0x0
    bne lbl_fn_804CF640_00000BD0
    lwz r0, 0x7e0(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804CF640_00000BD0
    addi r3, r31, 0x7d4
    li r4, 0x1
    bl fn_8013322C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000BD0
    addi r4, r31, 0xb0
    bl fn_801079B0
lbl_fn_804CF640_00000BD0:
    lbz r0, 0x13(r30)
    extrwi. r3, r0, 1, 29
    beq lbl_fn_804CF640_00000C48
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    beq lbl_fn_804CF640_00000C48
    lis r4, 0x1
    lis r5, 0x2
    addi r3, r31, 0x7d4
    li r6, 0x0
    addi r4, r4, -0x8000
    subi r5, r5, 0x7960
    bl fn_80133130
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000C90
    addi r4, r31, 0xb0
    bl fn_80107BD8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80107380
    addi r4, r31, 0xb0
    lwz r3, lbl_8087F048
    mr r5, r4
    bl fn_80107B30
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80107274
    b lbl_fn_804CF640_00000C90
lbl_fn_804CF640_00000C48:
    cmpwi r3, 0x0
    bne lbl_fn_804CF640_00000C90
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_804CF640_00000C90
    lis r4, 0x1
    addi r3, r31, 0x7d4
    addi r4, r4, -0x8000
    bl fn_8013322C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000C90
    addi r4, r31, 0xb0
    bl fn_80107BD8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80107380
lbl_fn_804CF640_00000C90:
    lbz r0, 0x13(r30)
    clrlwi. r3, r0, 31
    beq lbl_fn_804CF640_00000CF0
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_804CF640_00000CF0
    lis r4, 0x2
    addi r3, r31, 0x7d4
    subi r5, r4, 0x7960
    li r6, 0x0
    li r4, 0x80
    bl fn_80133130
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000D3C
    addi r4, r31, 0xb0
    li r5, 0x1
    bl fn_80107798
    addi r4, r31, 0xb0
    lwz r3, lbl_8087F048
    mr r5, r4
    bl fn_801076D0
    b lbl_fn_804CF640_00000D3C
lbl_fn_804CF640_00000CF0:
    cmpwi r3, 0x0
    bne lbl_fn_804CF640_00000D3C
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_804CF640_00000D3C
    addi r3, r31, 0x7d4
    li r4, 0x80
    bl fn_8013322C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804CF640_00000D3C
    addi r4, r31, 0xb0
    li r5, 0x1
    bl fn_80107798
    b lbl_fn_804CF640_00000D3C
lbl_fn_804CF640_00000D30:
    lwz r0, 0x5c0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
lbl_fn_804CF640_00000D3C:
    lbz r0, 0x12(r30)
    mr r3, r31
    extrwi r4, r0, 1, 29
    bl fn_8017C7F8
    lbz r0, 0x12(r30)
    extrwi r0, r0, 1, 29
    cmplwi r0, 0x1
    bne lbl_fn_804CF640_00000D6C
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r31)
    b lbl_fn_804CF640_00000D78
lbl_fn_804CF640_00000D6C:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r31)
lbl_fn_804CF640_00000D78:
    lbz r0, 0x12(r30)
    extrwi r4, r0, 1, 29
    extrwi. r0, r0, 1, 30
    subfic r3, r4, 0x1
    subi r0, r4, 0x1
    or r0, r3, r0
    srwi r0, r0, 31
    stw r0, 0xd18(r31)
    beq lbl_fn_804CF640_00000DF0
    lbz r0, 0x13(r30)
    extrwi. r0, r0, 1, 30
    beq lbl_fn_804CF640_00000DF0
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_804CF640_00000DF0
    lwz r0, 0x12a4(r31)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_804CF640_00000DDC
    addi r3, r31, 0x7d4
    li r4, 0x20
    li r5, 0x0
    bl fn_8013310C
    b lbl_fn_804CF640_00000DF0
lbl_fn_804CF640_00000DDC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_804CF640_00000DF0:
    lwz r5, lbl_8087F610
    li r3, 0x0
    lwz r6, 0x5e8(r5)
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804CF640_00000E38
lbl_fn_804CF640_00000E08:
    lwz r0, 0x5e4(r5)
    add r4, r0, r3
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804CF640_00000E30
    lwz r0, 0x0(r4)
    cmplw r0, r31
    bne lbl_fn_804CF640_00000E30
    b lbl_fn_804CF640_00000E3C
lbl_fn_804CF640_00000E30:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804CF640_00000E08
lbl_fn_804CF640_00000E38:
    li r4, 0x0
lbl_fn_804CF640_00000E3C:
    cmpwi r4, 0x0
    beq lbl_fn_804CF640_00000F60
    lwz r4, lbl_8087F610
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804CF640_00000E88
lbl_fn_804CF640_00000E58:
    lwz r0, 0x5e4(r4)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804CF640_00000E80
    lwz r0, 0x0(r6)
    cmplw r0, r31
    bne lbl_fn_804CF640_00000E80
    b lbl_fn_804CF640_00000E8C
lbl_fn_804CF640_00000E80:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804CF640_00000E58
lbl_fn_804CF640_00000E88:
    li r6, 0x0
lbl_fn_804CF640_00000E8C:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    beq lbl_fn_804CF640_00000F60
    lwz r0, 0x1454(r4)
    cmpwi r0, 0x1
    beq lbl_fn_804CF640_00000F60
    lwz r0, 0xd1c(r4)
    lbz r3, 0x10(r30)
    stw r0, 0xd20(r4)
    cmpwi r3, 0x1
    lwz r8, lbl_8087F610
    beq lbl_fn_804CF640_00000ED0
    cmpwi r3, 0x2
    beq lbl_fn_804CF640_00000ED8
    cmpwi r3, 0x3
    beq lbl_fn_804CF640_00000F2C
    b lbl_fn_804CF640_00000F54
lbl_fn_804CF640_00000ED0:
    li r0, 0x0
    b lbl_fn_804CF640_00000F58
lbl_fn_804CF640_00000ED8:
    lwz r0, 0x5e8(r8)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804CF640_00000F24
lbl_fn_804CF640_00000EEC:
    lwz r5, 0x5e4(r8)
    add r7, r5, r3
    lwz r0, 0xd0(r7)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804CF640_00000F1C
    lbz r4, 0x11(r30)
    lbz r0, 0xcc(r7)
    cmplw r4, r0
    bne lbl_fn_804CF640_00000F1C
    lwzx r0, r5, r3
    b lbl_fn_804CF640_00000F58
lbl_fn_804CF640_00000F1C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804CF640_00000EEC
lbl_fn_804CF640_00000F24:
    li r0, 0x0
    b lbl_fn_804CF640_00000F58
lbl_fn_804CF640_00000F2C:
    lbz r3, 0x11(r30)
    lwz r0, 0x5f4(r8)
    cmplw r0, r3
    ble lbl_fn_804CF640_00000F4C
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r8)
    lwzx r0, r3, r0
    b lbl_fn_804CF640_00000F58
lbl_fn_804CF640_00000F4C:
    li r0, 0x0
    b lbl_fn_804CF640_00000F58
lbl_fn_804CF640_00000F54:
    li r0, 0x0
lbl_fn_804CF640_00000F58:
    lwz r3, 0x0(r6)
    stw r0, 0xd1c(r3)
lbl_fn_804CF640_00000F60:
    lwz r6, lbl_8087F610
    li r5, 0x0
    li r3, 0x0
    lwz r7, 0x5f4(r6)
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_804CF640_00000F9C
lbl_fn_804CF640_00000F7C:
    lwz r4, 0x5f0(r6)
    lwzx r0, r4, r3
    cmplw r0, r31
    bne lbl_fn_804CF640_00000F90
    b lbl_fn_804CF640_00000FA0
lbl_fn_804CF640_00000F90:
    addi r5, r5, 0x1
    addi r3, r3, 0xb4
    bdnz lbl_fn_804CF640_00000F7C
lbl_fn_804CF640_00000F9C:
    li r5, -0x1
lbl_fn_804CF640_00000FA0:
    cmpwi r5, 0x0
    blt lbl_fn_804CF640_00000FB8
    mulli r0, r5, 0xb4
    lwz r3, 0x5f0(r6)
    add r0, r3, r0
    b lbl_fn_804CF640_00000FBC
lbl_fn_804CF640_00000FB8:
    li r0, 0x0
lbl_fn_804CF640_00000FBC:
    cmpwi r0, 0x0
    beq lbl_fn_804CF640_000010F0
    lwz r6, lbl_8087F610
    li r5, 0x0
    li r3, 0x0
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_804CF640_00000FFC
lbl_fn_804CF640_00000FDC:
    lwz r4, 0x5f0(r6)
    lwzx r0, r4, r3
    cmplw r0, r31
    bne lbl_fn_804CF640_00000FF0
    b lbl_fn_804CF640_00001000
lbl_fn_804CF640_00000FF0:
    addi r5, r5, 0x1
    addi r3, r3, 0xb4
    bdnz lbl_fn_804CF640_00000FDC
lbl_fn_804CF640_00000FFC:
    li r5, -0x1
lbl_fn_804CF640_00001000:
    cmpwi r5, 0x0
    blt lbl_fn_804CF640_00001018
    mulli r0, r5, 0xb4
    lwz r3, 0x5f0(r6)
    add r6, r3, r0
    b lbl_fn_804CF640_0000101C
lbl_fn_804CF640_00001018:
    li r6, 0x0
lbl_fn_804CF640_0000101C:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    beq lbl_fn_804CF640_000010F0
    lwz r0, 0x1454(r4)
    cmpwi r0, 0x1
    beq lbl_fn_804CF640_000010F0
    lwz r0, 0xd1c(r4)
    lbz r3, 0x10(r30)
    stw r0, 0xd20(r4)
    cmpwi r3, 0x1
    lwz r8, lbl_8087F610
    beq lbl_fn_804CF640_00001060
    cmpwi r3, 0x2
    beq lbl_fn_804CF640_00001068
    cmpwi r3, 0x3
    beq lbl_fn_804CF640_000010BC
    b lbl_fn_804CF640_000010E4
lbl_fn_804CF640_00001060:
    li r0, 0x0
    b lbl_fn_804CF640_000010E8
lbl_fn_804CF640_00001068:
    lwz r0, 0x5e8(r8)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804CF640_000010B4
lbl_fn_804CF640_0000107C:
    lwz r5, 0x5e4(r8)
    add r7, r5, r3
    lwz r0, 0xd0(r7)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804CF640_000010AC
    lbz r4, 0x11(r30)
    lbz r0, 0xcc(r7)
    cmplw r4, r0
    bne lbl_fn_804CF640_000010AC
    lwzx r0, r5, r3
    b lbl_fn_804CF640_000010E8
lbl_fn_804CF640_000010AC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804CF640_0000107C
lbl_fn_804CF640_000010B4:
    li r0, 0x0
    b lbl_fn_804CF640_000010E8
lbl_fn_804CF640_000010BC:
    lbz r3, 0x11(r30)
    lwz r0, 0x5f4(r8)
    cmplw r0, r3
    ble lbl_fn_804CF640_000010DC
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r8)
    lwzx r0, r3, r0
    b lbl_fn_804CF640_000010E8
lbl_fn_804CF640_000010DC:
    li r0, 0x0
    b lbl_fn_804CF640_000010E8
lbl_fn_804CF640_000010E4:
    li r0, 0x0
lbl_fn_804CF640_000010E8:
    lwz r3, 0x0(r6)
    stw r0, 0xd1c(r3)
lbl_fn_804CF640_000010F0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804D0090(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_804D0090_00001124
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    blr
lbl_fn_804D0090_00001124:
    lwz r0, 0x8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x8(r3)
    blr
}

asm void fn_804D00B8(void)
{
    nofralloc
    lwz r0, lbl_8087F430
    mr r6, r3
    mr r5, r4
    cmpwi r0, 0x0
    beqlr
    mr r3, r0
    mr r4, r6
    b fn_80370AE4
    blr
}

asm void fn_804D00DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r4, lbl_8087EEF0
    cmpwi r4, 0x0
    beq lbl_fn_804D00DC_000011A0
    lwz r0, 0xd90(r4)
    li r31, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_804D00DC_000011A4
    mr r3, r4
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_804D00DC_000011A4
    li r31, 0x1
    b lbl_fn_804D00DC_000011A4
lbl_fn_804D00DC_000011A0:
    li r31, 0x0
lbl_fn_804D00DC_000011A4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D0140(void)
{
    nofralloc
    lwz r0, lbl_8087EEA8
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_804D0140_000011D8
    mr r3, r0
    li r4, 0x0
    b fn_8005C220
lbl_fn_804D0140_000011D8:
    li r3, 0x0
    blr
}

asm void fn_804D0164(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    li r4, 0x0
    lfs f5, lbl_80887570
    li r0, 0x1
    lfs f6, lbl_80887590
    addi r10, r1, 0x8
    stfs f6, 0x8(r1)
    addi r11, r1, 0x5c
    addi r8, r1, 0x18
    addi r9, r1, 0x6c
    stfs f5, 0xc(r1)
    addi r6, r1, 0x28
    addi r7, r1, 0x7c
    addi r3, r1, 0x38
    psq_l f1, 0x0(r10), 0, 0
    addi r5, r1, 0x8c
    stfs f5, 0x10(r1)
    lfs f4, lbl_808875B0
    stfs f5, 0x14(r1)
    lfs f3, lbl_80887574
    psq_st f1, 0x0(r11), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    psq_st f2, 0x8(r11), 0, 0
    stfs f5, 0x18(r1)
    stfs f6, 0x1c(r1)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    stfs f5, 0x20(r1)
    stfs f5, 0x24(r1)
    psq_l f2, 0x8(r8), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    stfs f5, 0x28(r1)
    stfs f5, 0x2c(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    psq_l f2, 0x8(r6), 0, 0
    stfs f5, 0x38(r1)
    stfs f5, 0x3c(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x40(r1)
    stfs f5, 0x44(r1)
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    stw r4, 0x9c(r1)
    stw r4, 0xa0(r1)
    stfs f6, 0xa4(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    stw r0, 0x58(r1)
    stfs f4, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f3, 0x74(r1)
    stfs f5, 0x78(r1)
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_808875B4
    stw r0, 0x324(r3)
    psq_l f1, 0x0(r11), 0, 0
    psq_st f1, 0x328(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    psq_st f2, 0x330(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f3, 0x7c(r1)
    stfs f3, 0x80(r1)
    psq_st f2, 0x340(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f4, 0x84(r1)
    stfs f5, 0x88(r1)
    psq_st f1, 0x348(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f5, 0x8c(r1)
    stfs f5, 0x90(r1)
    psq_st f2, 0x350(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x94(r1)
    stfs f5, 0x98(r1)
    psq_st f1, 0x358(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x360(r3), 0, 0
    stw r4, 0x368(r3)
    stw r4, 0x36c(r3)
    stfs f6, 0x370(r3)
    lwz r3, lbl_8087EFA8
    stfs f0, 0x48(r1)
    stw r4, 0xd4(r3)
    lwz r3, lbl_8087EFA8
    stfs f0, 0x4c(r1)
    stw r4, 0x54(r3)
    lwz r3, lbl_8087EFA8
    stfs f0, 0x50(r1)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f6, 0x54(r1)
    stfs f6, 0x48(r3)
    addi r1, r1, 0xb0
    blr
}

asm void fn_804D0304(void)
{
    nofralloc
    lfs f3, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    stfs f3, 0x3c(r3)
    stfs f2, 0x40(r3)
    stfs f1, 0x44(r3)
    stfs f0, 0x48(r3)
    blr
}

asm void fn_804D0328(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x180
    bl _savegpr_26
    mr r29, r3
    bl fn_800D1D3C
    addi r6, r29, 0x60
    addi r3, r29, 0x348
    lis r4, lbl_807916E0@ha
    li r0, 0x0
    addi r4, r4, lbl_807916E0@l
    cmplw r6, r3
    stw r4, 0x0(r29)
    stw r0, 0x4c(r29)
    bge lbl_fn_804D0328_0000148C
    addi r0, r29, 0x60
    addi r5, r29, 0x288
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_804D0328_00001400
    li r3, 0x1
lbl_fn_804D0328_00001400:
    cmpwi r3, 0x0
    beq lbl_fn_804D0328_0000140C
    li r0, 0x1
lbl_fn_804D0328_0000140C:
    cmpwi r0, 0x0
    beq lbl_fn_804D0328_0000145C
    addi r3, r5, 0xbf
    li r0, 0xc0
    subf r3, r6, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r6, r5
    bge lbl_fn_804D0328_0000145C
lbl_fn_804D0328_00001434:
    stw r4, 0x4(r6)
    stw r4, 0x1c(r6)
    stw r4, 0x34(r6)
    stw r4, 0x4c(r6)
    stw r4, 0x64(r6)
    stw r4, 0x7c(r6)
    stw r4, 0x94(r6)
    stw r4, 0xac(r6)
    addi r6, r6, 0xc0
    bdnz lbl_fn_804D0328_00001434
lbl_fn_804D0328_0000145C:
    addi r4, r29, 0x348
    li r0, 0x18
    addi r3, r4, 0x17
    li r5, 0x0
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_804D0328_0000148C
lbl_fn_804D0328_00001480:
    stw r5, 0x4(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_804D0328_00001480
lbl_fn_804D0328_0000148C:
    li r28, 0x0
    stw r28, 0x354(r29)
    addi r27, r29, 0x358
    addi r26, r29, 0x4f8
    li r31, 0xff
    lis r30, lbl_80791B0C@ha
lbl_fn_804D0328_000014A4:
    stb r31, 0x0(r27)
    addi r3, r27, 0x10
    addi r4, r30, lbl_80791B0C@l
    stw r28, 0x4(r27)
    stw r28, 0x8(r27)
    stw r28, 0xc(r27)
    stw r28, 0x30(r27)
    bl fn_80686A64
    addi r27, r27, 0x34
    cmplw r27, r26
    blt lbl_fn_804D0328_000014A4
    li r30, 0x0
    li r10, 0xa
    li r9, 0x12c
    li r8, 0x32
    li r7, -0x1
    li r6, 0x6
    li r0, 0x1
    stw r30, 0x4fc(r29)
    addi r3, r29, 0x56c
    li r4, 0x0
    stw r30, 0x500(r29)
    li r5, 0x20
    stw r30, 0x510(r29)
    stw r10, 0x55c(r29)
    stw r30, 0x560(r29)
    stw r9, 0x564(r29)
    stw r8, 0x568(r29)
    stw r30, 0x598(r29)
    stw r7, 0x59c(r29)
    stw r6, 0x5a0(r29)
    stw r30, 0x5a8(r29)
    stw r30, 0x5ac(r29)
    stw r0, 0x5b0(r29)
    stb r30, 0x5b4(r29)
    bl memset
    addi r3, r29, 0x58c
    li r4, 0x0
    li r5, 0xc
    bl memset
    stw r30, 0x5a4(r29)
    addi r3, r29, 0x610
    li r4, 0x0
    li r5, 0x8c
    stw r30, 0x5e4(r29)
    stw r30, 0x5e8(r29)
    stw r30, 0x5ec(r29)
    stw r30, 0x5f0(r29)
    stw r30, 0x5f4(r29)
    stw r30, 0x5f8(r29)
    stw r30, 0x610(r29)
    stw r30, 0x614(r29)
    bl memset
    stw r30, 0x69c(r29)
    addi r27, r29, 0x6a0
    addi r28, r29, 0x2720
lbl_fn_804D0328_00001584:
    mr r3, r27
    li r4, 0x0
    li r5, 0x104
    bl memset
    addi r27, r27, 0x104
    cmplw r27, r28
    blt lbl_fn_804D0328_00001584
    addi r6, r29, 0x28b8
    addi r5, r29, 0x2764
    cmplw r5, r6
    li r4, 0x0
    stw r4, 0x2720(r29)
    bge lbl_fn_804D0328_000015DC
    addi r3, r6, 0x43
    li r0, 0x44
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_804D0328_000015DC
lbl_fn_804D0328_000015D0:
    stw r4, 0x0(r5)
    addi r5, r5, 0x44
    bdnz lbl_fn_804D0328_000015D0
lbl_fn_804D0328_000015DC:
    addi r3, r29, 0x2a50
    addi r5, r6, 0x44
    cmplw r5, r3
    li r4, 0x0
    stw r4, 0x0(r6)
    bge lbl_fn_804D0328_00001618
    addi r3, r3, 0x43
    li r0, 0x44
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_804D0328_00001618
lbl_fn_804D0328_0000160C:
    stw r4, 0x0(r5)
    addi r5, r5, 0x44
    bdnz lbl_fn_804D0328_0000160C
lbl_fn_804D0328_00001618:
    addi r27, r29, 0x2a50
    lis r4, fn_804D1400@ha
    lis r5, fn_804D1414@ha
    li r6, 0xc
    mr r3, r27
    addi r4, r4, fn_804D1400@l
    addi r5, r5, fn_804D1414@l
    li r7, 0x15
    bl fn_806958E0
    addi r28, r29, 0x2b50
    li r31, 0x0
    stw r31, 0xfc(r27)
    mr r3, r28
    bl fn_80473E74
    lis r30, lbl_8078FBB0@ha
    addi r27, r29, 0x2b58
    addi r30, r30, lbl_8078FBB0@l
    stw r30, 0x0(r28)
    mr r3, r27
    bl fn_80473E74
    addi r28, r29, 0x2b60
    stw r30, 0x0(r27)
    mr r3, r28
    bl fn_80473E74
    addi r27, r29, 0x2b68
    stw r30, 0x0(r28)
    mr r3, r27
    bl fn_80473E74
    stw r30, 0x0(r27)
    addi r3, r29, 0x2b70
    bl fn_800CB360
    addi r3, r29, 0x2b74
    bl fn_800CB360
    addi r3, r29, 0x2b78
    bl fn_800CB360
    lis r4, fn_804D16FC@ha
    lis r5, fn_804D1FDC@ha
    stw r31, 0x2b88(r29)
    addi r3, r29, 0x2b8c
    addi r4, r4, fn_804D16FC@l
    addi r5, r5, fn_804D1FDC@l
    li r6, 0xd5c
    li r7, 0x8
    bl fn_806958E0
    addis r3, r29, 0x1
    subi r3, r3, 0x694c
    bl fn_802377B8
    addis r3, r29, 0x1
    subi r3, r3, 0x6940
    bl fn_80237518
    addis r3, r29, 0x1
    li r4, 0x0
    li r5, 0x0
    subi r3, r3, 0x688c
    bl fn_8004B290
    addis r3, r29, 0x1
    subi r3, r3, 0x6698
    bl fn_802377B8
    addis r3, r29, 0x1
    subi r4, r3, 0x6658
    stw r31, -0x665c(r3)
    stw r4, 0x4(r4)
    stw r4, 0x0(r4)
    stw r31, -0x6640(r3)
    stw r31, -0x663c(r3)
    stw r31, -0x6638(r3)
    stw r31, -0x6634(r3)
    stw r31, -0x6630(r3)
    stw r31, -0x662c(r3)
    stw r31, -0x6628(r3)
    stw r31, -0x6624(r3)
    stw r31, -0x6620(r3)
    stw r31, -0x661c(r3)
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_804D0328_00001758
    lwz r0, 0x88(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804D0328_00001758
    stw r31, 0x88(r3)
lbl_fn_804D0328_00001758:
    lwz r0, lbl_8087F618
    cmpwi r0, 0x0
    bne lbl_fn_804D0328_000017A0
    lis r3, 0x1
    li r4, 0x1
    subi r3, r3, 0x3de0
    la r5, lbl_8087E190
    la r6, lbl_8087E18C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_804D0328_0000179C
    bl fn_80508B78
    lis r3, lbl_807916A0@ha
    addi r3, r3, lbl_807916A0@l
    stw r3, 0x0(r27)
lbl_fn_804D0328_0000179C:
    stw r27, lbl_8087F618
lbl_fn_804D0328_000017A0:
    lwz r0, lbl_8087F61C
    lwz r3, lbl_8087F618
    cmpwi r0, 0x0
    stw r3, lbl_8087F628
    bne lbl_fn_804D0328_0000192C
    li r3, 0x18
    li r4, 0x1
    la r5, lbl_8087E188
    la r6, lbl_8087E184
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_804D0328_00001928
    lis r4, lbl_80791718@ha
    lis r8, lbl_80792A28@ha
    addi r4, r4, lbl_80791718@l
    stw r4, 0x0(r3)
    li r30, 0x0
    addi r9, r3, 0x8
    stw r30, 0x4(r3)
    addi r8, r8, lbl_80792A28@l
    li r4, 0x5
    la r5, lbl_8087E198
    stw r9, 0x4(r9)
    la r6, lbl_8087E194
    li r7, 0x0
    stw r9, 0x0(r9)
    stw r30, 0x10(r3)
    stw r8, 0x0(r3)
    li r3, 0x1c
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_804D0328_00001918
    lis r4, lbl_80790908@ha
    li r0, 0x1000
    addi r4, r4, lbl_80790908@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x20
    li r6, 0x5
    la r7, lbl_8087E1C0
    la r8, lbl_8087E1BC
    li r9, 0x0
    bl fn_800838B8
    stw r3, 0x8(r28)
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x20
    li r6, 0x5
    la r7, lbl_8087E1B8
    la r8, lbl_8087E1B4
    li r9, 0x0
    bl fn_800838B8
    stw r3, 0xc(r28)
    lis r4, lbl_807908D0@ha
    addi r4, r4, lbl_807908D0@l
    mr r3, r28
    stw r4, 0x0(r28)
    stb r30, 0x10(r28)
    stw r30, 0x14(r28)
    stw r30, 0x18(r28)
    lwz r12, 0x0(r28)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    slwi r30, r3, 1
    bl fn_800827E0
    addi r4, r30, 0x1
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1A8
    la r8, lbl_8087E1A4
    li r9, 0x0
    bl fn_800838B8
    stw r3, 0x14(r28)
    mr r3, r28
    lwz r12, 0x0(r28)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r30, r3
    bl fn_800827E0
    addi r4, r30, 0x1
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1A0
    la r8, lbl_8087E19C
    li r9, 0x0
    bl fn_800838B8
    stw r3, 0x18(r28)
lbl_fn_804D0328_00001918:
    stw r28, 0x14(r27)
    mr r3, r27
    mr r4, r28
    bl fn_8050E514
lbl_fn_804D0328_00001928:
    stw r27, lbl_8087F61C
lbl_fn_804D0328_0000192C:
    lwz r4, lbl_8087F630
    lwz r0, lbl_8087F61C
    cmpwi r4, 0x0
    stw r0, lbl_8087F62C
    ble lbl_fn_804D0328_0000194C
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    stw r4, -0x3de8(r3)
lbl_fn_804D0328_0000194C:
    lwz r0, lbl_8087F630
    lwz r3, lbl_8087F628
    cntlzw r0, r0
    srwi r0, r0, 5
    addis r3, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, -0x3deb(r3)
    lwz r0, lbl_8087F5A4
    cmpwi r0, 0x0
    bne lbl_fn_804D0328_000019C0
    li r3, 0x754
    li r4, 0x1
    la r5, lbl_8087E180
    la r6, lbl_8087E17C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804D0328_000019BC
    li r4, 0x0
    stw r4, 0x0(r3)
    li r0, -0x1
    stw r4, 0x14(r3)
    stw r4, 0x734(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
lbl_fn_804D0328_000019BC:
    stw r3, lbl_8087F5A4
lbl_fn_804D0328_000019C0:
    addi r3, r29, 0x4fc
    li r4, 0x0
    bl fn_804FB224
    lfs f0, lbl_808875B8
    addis r3, r29, 0x1
    li r31, 0x0
    li r30, 0x1
    li r8, 0x1e
    li r0, -0x1
    li r4, 0x1c2
    li r7, 0xa
    li r6, 0x2
    stw r4, 0x5c4(r29)
    li r4, 0x0
    li r5, 0x20
    stw r31, 0x50c(r29)
    stw r31, -0x668c(r3)
    stw r30, 0x518(r29)
    stw r31, 0x51c(r29)
    stw r30, 0x520(r29)
    stw r31, 0x524(r29)
    stw r31, 0x528(r29)
    stw r30, 0x530(r29)
    stw r30, 0x52c(r29)
    stw r31, 0x534(r29)
    stw r31, 0x538(r29)
    sth r31, 0x50a(r29)
    stw r31, 0x5cc(r29)
    stw r8, 0x5d0(r29)
    stw r30, 0x5d4(r29)
    stw r7, 0x5d8(r29)
    stw r8, 0x5dc(r29)
    stw r31, 0x558(r29)
    stw r31, 0x5e0(r29)
    stw r31, 0x548(r29)
    stw r31, 0x544(r29)
    stw r31, 0x540(r29)
    stw r6, 0x54c(r29)
    stb r31, -0x6664(r3)
    stb r31, -0x6663(r3)
    stw r31, 0x550(r29)
    stw r31, 0x554(r29)
    stw r31, 0x5bc(r29)
    stw r31, 0x5b8(r29)
    stw r31, 0x60c(r29)
    stw r30, 0x5c0(r29)
    stw r31, -0x68b4(r3)
    stw r0, -0x68a8(r3)
    stw r31, 0x53c(r29)
    stfs f0, 0x5c8(r29)
    stw r0, -0x68ac(r3)
    stw r8, 0x600(r29)
    stw r30, 0x604(r29)
    stw r0, 0x608(r29)
    stw r31, 0x514(r29)
    stb r31, -0x6610(r3)
    stb r31, -0x660f(r3)
    stb r31, -0x660e(r3)
    stb r31, -0x6688(r3)
    stb r31, -0x660d(r3)
    stw r31, -0x68a0(r3)
    stw r30, -0x689c(r3)
    stw r31, -0x6898(r3)
    stw r31, -0x6894(r3)
    subi r3, r3, 0x6934
    bl memset
    addis r3, r29, 0x1
    li r4, 0x0
    li r5, 0x20
    subi r3, r3, 0x6914
    bl memset
    addis r3, r29, 0x1
    li r4, 0x0
    li r5, 0x20
    subi r3, r3, 0x68f4
    bl memset
    addis r3, r29, 0x1
    li r4, 0x0
    li r5, 0x20
    subi r3, r3, 0x68d4
    bl memset
    addis r3, r29, 0x1
    li r4, 0x0
    li r5, 0x8
    subi r3, r3, 0x667c
    bl memset
    addis r3, r29, 0x1
    li r4, 0xff
    li r5, 0x8
    subi r3, r3, 0x6674
    bl memset
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804D0328_00001B64
    lis r3, lbl_807C6BB8@ha
    stwu r31, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8F48@ha
    stw r31, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r31, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_804D0328_00001B64:
    lbz r0, lbl_8087EE74
    lis r3, lbl_807C6BB8@ha
    addi r3, r3, lbl_807C6BB8@l
    extsb. r0, r0
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    bne lbl_fn_804D0328_00001BB4
    li r0, 0x0
    li r30, 0x1
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8F48@ha
    stw r0, 0x0(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_804D0328_00001BB4:
    lis r30, lbl_807C6BB8@ha
    lis r5, fn_804EB938@ha
    addi r30, r30, lbl_807C6BB8@l
    li r6, -0x1
    lwz r3, 0x4(r30)
    addi r5, r5, fn_804EB938@l
    lwz r31, 0x8(r30)
    stw r6, 0x20(r1)
    cmplw r3, r31
    stw r5, 0x24(r1)
    bge lbl_fn_804D0328_00001C00
    addi r4, r3, 0x1
    lwz r3, 0x0(r30)
    subi r0, r4, 0x1
    stw r4, 0x4(r30)
    slwi r0, r0, 3
    stwux r6, r3, r0
    stw r5, 0x4(r3)
    b lbl_fn_804D0328_00001ED0
lbl_fn_804D0328_00001C00:
    lis r3, 0x2000
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x1c(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_804D0328_00001C3C
    lis r3, __files@ha
    lis r4, lbl_80759E48@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80759E48@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804D0328_00001C3C:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_804D0328_00001C74
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_804D0328_00001C94
lbl_fn_804D0328_00001C74:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_804D0328_00001C94
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_804D0328_00001C94:
    lwz r4, 0x4(r30)
    li r5, 0x0
    lis r3, 0x2000
    lwz r31, 0x8(r30)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r6, r30, 0x8
    subf r0, r31, r0
    stw r5, 0x4c(r1)
    cmplw r3, r0
    stw r5, 0x50(r1)
    stw r5, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_804D0328_00001CF8
    lis r3, __files@ha
    lis r4, lbl_80759E48@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80759E48@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804D0328_00001CF8:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_804D0328_00001D48
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_804D0328_00001D3C
    addi r3, r1, 0x8
lbl_fn_804D0328_00001D3C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_804D0328_00001D8C
lbl_fn_804D0328_00001D48:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_804D0328_00001D84
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_804D0328_00001D78
    addi r3, r1, 0x8
lbl_fn_804D0328_00001D78:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_804D0328_00001D8C
lbl_fn_804D0328_00001D84:
    lis r3, 0x2000
    subi r28, r3, 0x1
lbl_fn_804D0328_00001D8C:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_804D0328_00001DBC
    lis r3, __files@ha
    lis r4, lbl_80759E48@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80759E48@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804D0328_00001DBC:
    slwi r3, r28, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_804D0328_00001DF0
    lis r3, __files@ha
    lis r4, lbl_80791748@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80791748@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804D0328_00001DF0:
    lwz r4, 0x4(r30)
    lwz r3, 0x50(r1)
    slwi r5, r4, 3
    lwz r0, 0x20(r1)
    add r7, r27, r5
    stw r27, 0x4c(r1)
    slwi r5, r3, 3
    addi r3, r3, 0x1
    stwux r0, r5, r7
    lwz r0, 0x24(r1)
    stw r0, 0x4(r5)
    lwz r0, 0x4(r30)
    lwz r6, 0x0(r30)
    slwi r0, r0, 3
    stw r28, 0x54(r1)
    add r5, r6, r0
    addi r0, r5, 0x7
    stw r4, 0x5c(r1)
    subf r0, r6, r0
    srwi r0, r0, 3
    stw r3, 0x50(r1)
    mtctr r0
    cmplw r5, r6
    ble lbl_fn_804D0328_00001E88
lbl_fn_804D0328_00001E50:
    subic. r7, r7, 0x8
    subi r5, r5, 0x8
    beq lbl_fn_804D0328_00001E6C
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x0(r7)
    stw r0, 0x4(r7)
lbl_fn_804D0328_00001E6C:
    lwz r4, 0x5c(r1)
    lwz r3, 0x50(r1)
    subi r0, r4, 0x1
    stw r0, 0x5c(r1)
    addi r0, r3, 0x1
    stw r0, 0x50(r1)
    bdnz lbl_fn_804D0328_00001E50
lbl_fn_804D0328_00001E88:
    addic. r0, r1, 0x4c
    lwz r0, 0x50(r1)
    lwz r7, 0x8(r30)
    li r6, 0x0
    lwz r5, 0x54(r1)
    lwz r3, 0x0(r30)
    lwz r4, 0x4c(r1)
    stw r5, 0x8(r30)
    stw r7, 0x54(r1)
    stw r4, 0x0(r30)
    stw r3, 0x4c(r1)
    stw r0, 0x4(r30)
    stw r6, 0x50(r1)
    beq lbl_fn_804D0328_00001ED0
    cmpwi r3, 0x0
    beq lbl_fn_804D0328_00001ED0
    stw r6, 0x50(r1)
    bl dtor_80084684
lbl_fn_804D0328_00001ED0:
    lwz r0, 0x510(r29)
    lis r3, lbl_80759E48@ha
    addi r3, r3, lbl_80759E48@l
    cmpwi r0, 0x0
    addi r4, r3, 0x14
    bne lbl_fn_804D0328_00001F08
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_804D0328_00001F08
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x510(r29)
    mr r27, r3
    b lbl_fn_804D0328_00001F0C
lbl_fn_804D0328_00001F08:
    li r27, 0x0
lbl_fn_804D0328_00001F0C:
    lis r4, lbl_80759E48@ha
    mr r3, r27
    addi r30, r4, lbl_80759E48@l
    addi r5, r29, 0x54c
    addi r4, r30, 0x20
    li r6, 0x2
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r27
    addi r4, r30, 0x2b
    addi r5, r29, 0x518
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x35
    addi r5, r29, 0x51c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x40
    addi r5, r29, 0x520
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x4d
    addi r5, r29, 0x524
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x5a
    addi r5, r29, 0x528
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x67
    bl fn_8008937C
    mr r26, r3
    addi r4, r30, 0x6d
    addi r5, r29, 0x564
    li r6, -0x1
    li r7, 0x1770
    li r8, 0x3c
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x78
    addi r5, r29, 0x568
    li r6, -0x1
    li r7, 0x3e8
    li r8, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r27
    addi r4, r30, 0x84
    bl fn_8008937C
    mr r26, r3
    mr r3, r27
    addi r4, r30, 0x8c
    addi r5, r29, 0x52c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r26
    addi r4, r30, 0x9e
    addi r5, r29, 0x5d0
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0xb1
    addi r5, r29, 0x5d4
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0xc5
    addi r5, r29, 0x5d8
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0xd9
    addi r5, r29, 0x5dc
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r5, lbl_8087F628
    lis r9, fn_804F60D8@ha
    mr r3, r26
    addi r4, r30, 0xeb
    addi r5, r5, 0x250
    addi r9, r9, fn_804F60D8@l
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r10, 0x0
    bl fn_800874C8
    lwz r5, lbl_8087F628
    lis r9, fn_804F60DC@ha
    mr r3, r26
    addi r4, r30, 0xfa
    addi r5, r5, 0x254
    addi r9, r9, fn_804F60DC@l
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r10, 0x0
    bl fn_800874C8
    lwz r5, lbl_8087F628
    lis r9, fn_804F60E0@ha
    mr r3, r26
    addi r4, r30, 0x10c
    addi r5, r5, 0x258
    addi r9, r9, fn_804F60E0@l
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r10, 0x0
    bl fn_800874C8
    mr r3, r27
    addi r4, r30, 0x11c
    bl fn_8008937C
    mr r26, r3
    addi r4, r30, 0x125
    addi r5, r29, 0x5c4
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1e
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80887570
    mr r3, r26
    lfs f2, lbl_80887590
    addi r4, r30, 0x132
    lfs f3, lbl_808875BC
    addi r5, r29, 0x5c8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r27
    addi r4, r30, 0x144
    bl fn_8008937C
    lis r27, lbl_80790F78@ha
    mr r26, r3
    li r28, 0x0
    addi r27, r27, lbl_80790F78@l
lbl_fn_804D0328_000021B0:
    mr r5, r28
    addi r3, r1, 0x60
    addi r4, r30, 0x14d
    crclr 6
    bl sprintf
    mr r3, r26
    mr r5, r27
    addi r4, r1, 0x60
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    addi r28, r28, 0x1
    addi r27, r27, 0x4
    cmplwi r28, 0x1e
    blt lbl_fn_804D0328_000021B0
    lwz r5, lbl_8087F9C0
    li r30, 0x0
    addis r4, r29, 0x1
    mr r3, r29
    stw r30, 0x7c(r5)
    stb r30, -0x6644(r4)
    bl fn_804AE820
    lwz r3, lbl_8087F59C
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_804B4C50
    lwz r3, lbl_8087F5A8
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_804AC430
    lwz r3, lbl_8087F588
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    bl fn_80490EB8
    addis r3, r29, 0x1
    stw r30, -0x6890(r3)
    lwz r3, lbl_8087EFE8
    bl fn_800CDF84
    lis r8, lbl_80759B6C@ha
    lwzu r7, lbl_80759B6C@l(r8)
    lwz r3, lbl_8087EE90
    addi r4, r1, 0x40
    lwz r6, 0x4(r8)
    li r5, 0x3
    lwz r0, 0x8(r8)
    stw r7, 0x40(r1)
    stw r6, 0x44(r1)
    stw r0, 0x48(r1)
    bl fn_8004829C
    lwz r0, lbl_8087F448
    cmpwi r0, 0x0
    bne lbl_fn_804D0328_000022A0
    mr r3, r29
    bl fn_8037C8C4
lbl_fn_804D0328_000022A0:
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    bne lbl_fn_804D0328_000022C0
    mr r3, r29
    bl fn_803E836C
    lwz r3, lbl_8087F498
    li r0, 0x3
    stw r0, 0x10c(r3)
lbl_fn_804D0328_000022C0:
    lfs f5, lbl_80887570
    addis r9, r29, 0x1
    lfs f4, lbl_808875C0
    mr r11, r9
    lfs f3, lbl_808875C4
    fmr f2, f5
    stfs f5, 0x34(r1)
    addi r3, r1, 0x34
    addi r10, r1, 0x28
    mr r8, r9
    stfs f2, -0x687c(r9)
    lfs f0, lbl_808875C8
    fmr f2, f3
    stfs f4, 0x38(r1)
    subi r11, r11, 0x6878
    subi r9, r9, 0x6884
    li r4, 0x240
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x28(r1)
    mr r3, r29
    li r5, 0x480
    li r6, 0x8
    stfs f4, 0x2c(r1)
    li r7, 0x180
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f5, 0x3c(r1)
    stfs f3, 0x30(r1)
    psq_st f1, 0x0(r11), 0, 0
    stfs f2, 0x8(r11)
    stfs f0, -0x683c(r8)
    bl fn_80239798
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lis r4, lbl_80759E48@ha
    addis r3, r29, 0x1
    addi r4, r4, lbl_80759E48@l
    addi r4, r4, 0x151
    subi r3, r3, 0x6698
    bl fn_8023780C
    li r0, 0x0
    stw r0, 0x48(r29)
    lis r4, fn_8050CFCC@ha
    li r5, 0x11
    stw r0, 0x60(r29)
    addi r4, r4, fn_8050CFCC@l
    stw r0, 0x78(r29)
    stw r0, 0x90(r29)
    stw r0, 0xa8(r29)
    stw r0, 0xc0(r29)
    stw r0, 0xd8(r29)
    stw r0, 0xf0(r29)
    stw r0, 0x108(r29)
    stw r0, 0x120(r29)
    stw r0, 0x138(r29)
    stw r0, 0x150(r29)
    stw r0, 0x168(r29)
    stw r0, 0x180(r29)
    stw r0, 0x198(r29)
    stw r0, 0x1b0(r29)
    stw r0, 0x1c8(r29)
    stw r0, 0x1e0(r29)
    stw r0, 0x1f8(r29)
    stw r0, 0x210(r29)
    stw r0, 0x228(r29)
    stw r0, 0x240(r29)
    stw r0, 0x258(r29)
    stw r0, 0x270(r29)
    stw r0, 0x288(r29)
    stw r0, 0x2a0(r29)
    stw r0, 0x2b8(r29)
    stw r0, 0x2d0(r29)
    stw r0, 0x2e8(r29)
    stw r0, 0x300(r29)
    stw r0, 0x318(r29)
    stw r0, 0x330(r29)
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    subi r3, r3, 0x4130
    bl fn_8050CDD4
    lwz r3, lbl_8087F420
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, lbl_8087F018
    cmpwi r3, 0x0
    beq lbl_fn_804D0328_00002428
    stw r0, 0x40e0(r3)
lbl_fn_804D0328_00002428:
    mr r3, r29
    li r4, 0xf
    lis r5, 0xff00
    li r6, 0x0
    bl fn_8006A250
    stw r3, 0x2b7c(r29)
    li r5, 0x1
    lis r4, 0x2
    addi r11, r1, 0x180
    stw r5, 0x68(r3)
    subi r0, r4, 0x7961
    mr r3, r29
    lwz r4, 0x2b7c(r29)
    stw r0, 0x58(r4)
    lwz r4, 0x2b7c(r29)
    stw r5, 0x48(r4)
    bl _restgpr_26
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}
