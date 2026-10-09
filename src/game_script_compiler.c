#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80018D5C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80088FAC(void);
extern void fn_8008937C(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_8010653C(void);
extern void fn_8012DF7C(void);
extern void fn_8012F440(void);
extern void fn_80133EE8(void);
extern void fn_8013655C(void);
extern void fn_8013CB68(void);
extern void fn_801437D0(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_80219558(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80255F2C(void);
extern void fn_80255F68(void);
extern void fn_8030E490(void);
extern void fn_8030E4AC(void);
extern void fn_8030E530(void);
extern void fn_8035B694(void);
extern void fn_803C11A4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805A3C58(void);
extern void fn_805A3D00(void);
extern void fn_805A3D6C(void);
extern void fn_805A40BC(void);
extern void fn_805A4258(void);
extern void fn_805A4F20(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_8068AEA4(void);
extern void fn_806958E0(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80743C94[];
extern u8 lbl_80743D18[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807844E8[];
extern u8 lbl_807846A0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8300[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE68;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8088333C;
extern u32 lbl_80883358;
extern u32 lbl_808833A8;
extern u32 lbl_808833AC;
extern u32 lbl_808833B0;
extern u32 lbl_808833B4;
extern u32 lbl_808833B8;
extern u32 lbl_808833BC;
extern u32 lbl_808833C0;
extern u32 lbl_808833C4;
extern u32 lbl_808833C8;
extern u32 lbl_808833CC;
extern u32 lbl_808833D0;
extern u32 lbl_808833D4;
extern u32 lbl_808833D8;
extern u32 lbl_808833DC;
extern u32 lbl_808833E0;
extern u32 lbl_808833E4;
extern u32 lbl_808833E8;
extern u32 lbl_808833EC;
extern u32 lbl_808833F0;
extern u32 lbl_808833F4;
extern u32 lbl_808833F8;
extern u32 lbl_808833FC;
extern u32 lbl_80883400;
extern u32 lbl_80883404;
extern u32 lbl_80883408;
extern u32 lbl_8088340C;
extern u32 lbl_80883410;
extern u32 lbl_80883414;
extern u32 lbl_80883418;
extern u32 lbl_8088341C;

/* Function declarations */
void fn_802544F0(void);
void fn_80254530(void);
void fn_8025457C(void);
void fn_80254648(void);
void fn_802546CC(void);
void fn_80254808(void);
void fn_802548C8(void);
void fn_802549C8(void);
void fn_80254B94(void);
void fn_80254B98(void);
void fn_80254C9C(void);
void fn_80254F24(void);
void fn_80254F6C(void);
void fn_80255224(void);
void fn_80255458(void);
void fn_8025589C(void);
void fn_802558B0(void);

asm void fn_802544F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_802544F0_00000028
    cmpwi r4, 0x0
    ble lbl_fn_802544F0_00000028
    bl dtor_80084684
lbl_fn_802544F0_00000028:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80254530(void)
{
    nofralloc
    lis r6, lbl_807C8300@ha
    lfs f3, lbl_8088333C
    addi r6, r6, lbl_807C8300@l
    lfs f0, lbl_808833AC
    addi r5, r6, 0x0
    lfs f2, lbl_80883358
    addi r4, r6, 0xc
    addi r3, r6, 0x18
    lfs f1, lbl_808833A8
    stfs f3, 0x0(r6)
    stfs f3, 0x4(r5)
    stfs f2, 0x8(r5)
    stfs f3, 0xc(r6)
    stfs f3, 0x4(r4)
    stfs f1, 0x8(r4)
    stfs f0, 0x18(r6)
    stfs f3, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

asm void fn_8025457C(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stw r31, 0x20c(r1)
    mr r31, r5
    stw r30, 0x208(r1)
    mr r30, r3
    bl fn_805A3C58
    lis r3, lbl_807844E8@ha
    li r0, 0x0
    addi r3, r3, lbl_807844E8@l
    stw r3, 0x0(r30)
    addi r3, r30, 0x1508
    stw r0, 0x14d4(r30)
    stw r0, 0x14d8(r30)
    bl fn_802377B8
    lwz r0, 0x54c(r30)
    mr r3, r30
    addi r4, r1, 0x108
    addi r5, r31, 0x2c
    oris r0, r0, 0x200
    stw r0, 0x54c(r30)
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_8025457C_0000010C
    lis r4, lbl_80743C94@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80743C94@l
    addi r5, r1, 0x108
    crclr 6
    bl sprintf
    b lbl_fn_8025457C_00000124
lbl_fn_8025457C_0000010C:
    lis r4, lbl_80743C94@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80743C94@l
    addi r4, r4, 0x1c
    crclr 6
    bl sprintf
lbl_fn_8025457C_00000124:
    lwz r12, 0x14b4(r30)
    addi r3, r30, 0x14b4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r30
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80254648(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80254648_000001BC
    addic. r31, r3, 0x1508
    beq lbl_fn_80254648_000001A0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80254648_000001A0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80254648_000001A0:
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_80254648_000001BC
    mr r3, r29
    bl dtor_80084684
lbl_fn_80254648_000001BC:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802546CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_802546CC_00000208
    li r3, 0x0
    b lbl_fn_802546CC_00000300
lbl_fn_802546CC_00000208:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802546CC_0000022C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_802546CC_0000022C
    li r3, 0x0
    b lbl_fn_802546CC_00000300
lbl_fn_802546CC_0000022C:
    addi r3, r31, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_802546CC_00000244
    li r3, 0x0
    b lbl_fn_802546CC_00000300
lbl_fn_802546CC_00000244:
    addi r3, r31, 0x14b4
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_80254808
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802546CC_0000028C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802546CC_0000028C:
    lwz r0, 0x14a8(r31)
    li r3, 0x0
    stw r3, 0x14d8(r31)
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r31)
    lwz r3, lbl_8087F408
    lwz r4, 0x48(r3)
    b lbl_fn_802546CC_000002E0
lbl_fn_802546CC_000002AC:
    lwz r0, 0x146c(r4)
    cmpwi r0, 0x2a
    bne lbl_fn_802546CC_000002DC
    lwz r0, 0x14d8(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x14dc
    beq lbl_fn_802546CC_000002D0
    stw r4, 0x0(r3)
lbl_fn_802546CC_000002D0:
    lwz r3, 0x14d8(r31)
    addi r0, r3, 0x1
    stw r0, 0x14d8(r31)
lbl_fn_802546CC_000002DC:
    lwz r4, 0x14ac(r4)
lbl_fn_802546CC_000002E0:
    cmpwi r4, 0x0
    bne lbl_fn_802546CC_000002AC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
lbl_fn_802546CC_00000300:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80254808(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    stw r31, 0x64c(r1)
    mr r31, r5
    li r5, 0x400
    stw r30, 0x648(r1)
    mr r30, r4
    li r4, 0x0
    stw r3, 0x8(r1)
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_80254808_000003A8:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80254808_000003A8
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_802548C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_802548C8_0000047C
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802548C8_00000424
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_802548C8_00000424
    li r6, 0x1
lbl_fn_802548C8_00000424:
    cmpwi r6, 0x0
    beq lbl_fn_802548C8_00000440
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802548C8_00000440
    li r4, 0x1
lbl_fn_802548C8_00000440:
    cmpwi r4, 0x0
    beq lbl_fn_802548C8_00000474
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802548C8_00000468
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802548C8_00000468
    li r4, 0x1
lbl_fn_802548C8_00000468:
    cmpwi r4, 0x0
    bne lbl_fn_802548C8_00000474
    li r5, 0x1
lbl_fn_802548C8_00000474:
    cmpwi r5, 0x0
    bne lbl_fn_802548C8_00000498
lbl_fn_802548C8_0000047C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_802549C8
lbl_fn_802548C8_00000498:
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_802548C8_000004C4
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_802548C8_000004C4
    mr r3, r31
    bl fn_80145334
lbl_fn_802548C8_000004C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802549C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    li r4, 0x0
    stw r0, 0x24(r1)
    li r6, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r7, 0x38(r3)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802549C8_00000520
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_802549C8_00000520
    li r6, 0x1
lbl_fn_802549C8_00000520:
    cmpwi r6, 0x0
    beq lbl_fn_802549C8_0000053C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802549C8_0000053C
    li r4, 0x1
lbl_fn_802549C8_0000053C:
    cmpwi r4, 0x0
    beq lbl_fn_802549C8_00000570
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802549C8_00000564
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802549C8_00000564
    li r4, 0x1
lbl_fn_802549C8_00000564:
    cmpwi r4, 0x0
    bne lbl_fn_802549C8_00000570
    li r5, 0x1
lbl_fn_802549C8_00000570:
    cmpwi r5, 0x0
    beq lbl_fn_802549C8_00000688
    li r0, 0x0
    stw r0, 0x14d4(r3)
    lwz r0, lbl_8087F408
    cmpwi r0, 0x0
    beq lbl_fn_802549C8_00000688
    mr r29, r30
    li r31, 0x0
    b lbl_fn_802549C8_0000064C
lbl_fn_802549C8_00000598:
    lwz r3, 0x14dc(r29)
    lwz r0, 0x14d4(r3)
    cmplw r0, r30
    bne lbl_fn_802549C8_00000644
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802549C8_000005D4
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_802549C8_000005D4
    li r6, 0x1
lbl_fn_802549C8_000005D4:
    cmpwi r6, 0x0
    beq lbl_fn_802549C8_000005F0
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802549C8_000005F0
    li r4, 0x1
lbl_fn_802549C8_000005F0:
    cmpwi r4, 0x0
    beq lbl_fn_802549C8_00000624
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802549C8_00000618
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802549C8_00000618
    li r4, 0x1
lbl_fn_802549C8_00000618:
    cmpwi r4, 0x0
    bne lbl_fn_802549C8_00000624
    li r5, 0x1
lbl_fn_802549C8_00000624:
    cmpwi r5, 0x0
    beq lbl_fn_802549C8_00000644
    bl fn_8030E490
    cmpwi r3, 0x0
    bne lbl_fn_802549C8_00000644
    lwz r3, 0x14d4(r30)
    addi r0, r3, 0x1
    stw r0, 0x14d4(r30)
lbl_fn_802549C8_00000644:
    addi r29, r29, 0x4
    addi r31, r31, 0x1
lbl_fn_802549C8_0000064C:
    lwz r0, 0x14d8(r30)
    cmplw r31, r0
    blt lbl_fn_802549C8_00000598
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x9
    beq lbl_fn_802549C8_00000688
    lwz r0, 0x14d4(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_802549C8_00000688
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802549C8_00000688:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80254B94(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_80254B98(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    bne lbl_fn_80254B98_000006F4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80254B98_000006F4
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_80254B98_000006F4
    li r3, 0x1
    b lbl_fn_80254B98_00000794
lbl_fn_80254B98_000006F4:
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80254B98_00000744
    lwz r0, 0x90(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80254B98_00000730
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80254B98_00000744
    addi r3, r3, 0x7d4
    li r4, 0x19
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80254B98_00000744
lbl_fn_80254B98_00000730:
    lwz r6, 0x8(r31)
    addi r3, r30, 0x7d4
    li r4, 0x0
    li r5, 0x4
    bl fn_8012DF7C
lbl_fn_80254B98_00000744:
    lis r4, lbl_807C7030@ha
    li r5, 0x0
    addi r4, r4, lbl_807C7030@l
    li r0, 0x2
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r30
    lfs f2, 0x8(r4)
    mr r4, r31
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
    stw r5, 0x48(r31)
    stw r5, 0x90(r31)
    stw r5, 0x68(r31)
    stw r5, 0x8c(r31)
    stw r0, 0x84(r31)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_80254B98_00000794:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80254C9C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80254C9C_000007F4
    lwz r12, 0x0(r3)
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80254C9C_00000A14
lbl_fn_80254C9C_000007F4:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    bne lbl_fn_80254C9C_0000081C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80254C9C_000009FC
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_80254C9C_000009FC
lbl_fn_80254C9C_0000081C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x9
    bne lbl_fn_80254C9C_00000918
    mr r30, r31
    li r29, 0x0
    b lbl_fn_80254C9C_000008E8
lbl_fn_80254C9C_00000834:
    lwz r28, 0x14dc(r30)
    lwz r0, 0x14d4(r28)
    cmplw r0, r31
    bne lbl_fn_80254C9C_000008E0
    lwz r6, 0x38(r28)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80254C9C_00000870
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80254C9C_00000870
    li r5, 0x1
lbl_fn_80254C9C_00000870:
    cmpwi r5, 0x0
    beq lbl_fn_80254C9C_0000088C
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80254C9C_0000088C
    li r3, 0x1
lbl_fn_80254C9C_0000088C:
    cmpwi r3, 0x0
    beq lbl_fn_80254C9C_000008C0
    lwz r0, 0x55c(r28)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80254C9C_000008B4
    lwz r0, 0x560(r28)
    cmpwi r0, 0x1c
    bne lbl_fn_80254C9C_000008B4
    li r3, 0x1
lbl_fn_80254C9C_000008B4:
    cmpwi r3, 0x0
    bne lbl_fn_80254C9C_000008C0
    li r4, 0x1
lbl_fn_80254C9C_000008C0:
    cmpwi r4, 0x0
    beq lbl_fn_80254C9C_000008E0
    mr r3, r28
    bl fn_8030E490
    cmpwi r3, 0x0
    beq lbl_fn_80254C9C_000008E0
    mr r3, r28
    bl fn_8030E530
lbl_fn_80254C9C_000008E0:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_80254C9C_000008E8:
    lwz r0, 0x14d8(r31)
    cmplw r29, r0
    blt lbl_fn_80254C9C_00000834
    addi r3, r31, 0x7d4
    li r4, 0x4
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x1
    bl fn_8012F440
lbl_fn_80254C9C_00000918:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80254C9C_000009E0
    mr r30, r31
    li r28, 0x0
    b lbl_fn_80254C9C_000009D4
lbl_fn_80254C9C_00000934:
    lwz r3, 0x14dc(r30)
    lwz r0, 0x14d4(r3)
    cmplw r0, r31
    bne lbl_fn_80254C9C_000009CC
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80254C9C_00000970
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80254C9C_00000970
    li r6, 0x1
lbl_fn_80254C9C_00000970:
    cmpwi r6, 0x0
    beq lbl_fn_80254C9C_0000098C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80254C9C_0000098C
    li r4, 0x1
lbl_fn_80254C9C_0000098C:
    cmpwi r4, 0x0
    beq lbl_fn_80254C9C_000009C0
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80254C9C_000009B4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80254C9C_000009B4
    li r4, 0x1
lbl_fn_80254C9C_000009B4:
    cmpwi r4, 0x0
    bne lbl_fn_80254C9C_000009C0
    li r5, 0x1
lbl_fn_80254C9C_000009C0:
    cmpwi r5, 0x0
    beq lbl_fn_80254C9C_000009CC
    bl fn_8030E4AC
lbl_fn_80254C9C_000009CC:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_80254C9C_000009D4:
    lwz r0, 0x14d8(r31)
    cmplw r28, r0
    blt lbl_fn_80254C9C_00000934
lbl_fn_80254C9C_000009E0:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_80254C9C_00000A14
lbl_fn_80254C9C_000009FC:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80254C9C_00000A14
    mr r4, r31
    addi r5, r31, 0xb0
    bl fn_8010653C
lbl_fn_80254C9C_00000A14:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80254F24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8016E970
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80254F6C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80254F6C_00000D18
    lwz r0, 0x14cc(r3)
    li r5, 0x0
    lwz r6, 0x58c(r3)
    cmpwi r4, 0x6
    clrlwi r0, r0, 4
    stw r5, 0x14bc(r3)
    oris r0, r0, 0x800
    stw r5, 0x14c0(r3)
    stw r5, 0x14c4(r3)
    stw r5, 0x14c8(r3)
    stw r0, 0x14cc(r3)
    stw r5, 0x14d0(r3)
    stw r4, 0x58c(r3)
    beq lbl_fn_80254F6C_00000B00
    cmpwi r4, 0x7
    beq lbl_fn_80254F6C_00000B0C
    cmpwi r4, 0x8
    beq lbl_fn_80254F6C_00000B34
    cmpwi r4, 0x9
    beq lbl_fn_80254F6C_00000CBC
    cmpwi r4, 0x2
    beq lbl_fn_80254F6C_00000CE4
    b lbl_fn_80254F6C_00000D18
lbl_fn_80254F6C_00000B00:
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_80254F6C_00000D18
lbl_fn_80254F6C_00000B0C:
    lfs f1, lbl_808833B0
    li r4, 0x66
    lfs f2, lbl_808833B4
    li r5, 0x1
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    b lbl_fn_80254F6C_00000D18
lbl_fn_80254F6C_00000B34:
    lfs f1, lbl_808833B0
    li r4, 0x1ea
    lfs f2, lbl_808833B4
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80254F6C_00000B64
    mr r4, r31
    addi r5, r31, 0xb0
    bl fn_8010653C
lbl_fn_80254F6C_00000B64:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80254F6C_00000B78
    lwz r30, 0x10d8(r3)
    b lbl_fn_80254F6C_00000B7C
lbl_fn_80254F6C_00000B78:
    li r30, 0x0
lbl_fn_80254F6C_00000B7C:
    lwz r29, lbl_8087EE68
    mr r3, r31
    bl fn_80179D44
    lfs f3, lbl_808833B8
    mr r9, r3
    lfs f0, 0x538(r31)
    mr r3, r29
    lwz r5, 0xd0c(r31)
    addi r4, r31, 0x528
    fadds f1, f3, f0
    lfs f2, lbl_808833BC
    lfs f3, lbl_808833C0
    li r6, 0x0
    lfs f4, lbl_808833C4
    li r7, -0x1
    li r8, 0x0
    li r10, 0x1
    bl fn_80018D5C
    cmpwi r3, 0x0
    bgt lbl_fn_80254F6C_00000C14
    lwz r29, lbl_8087EE68
    mr r3, r31
    bl fn_80179D44
    lfs f3, lbl_808833B8
    mr r9, r3
    lfs f0, 0x538(r31)
    mr r3, r29
    lwz r5, 0xd0c(r31)
    addi r4, r31, 0x528
    fadds f1, f3, f0
    lfs f2, lbl_808833BC
    lfs f3, lbl_808833C8
    li r6, 0x0
    lfs f4, lbl_808833C4
    li r7, -0x1
    li r8, 0x0
    li r10, 0x1
    bl fn_80018D5C
lbl_fn_80254F6C_00000C14:
    cmpwi r3, 0x0
    bgt lbl_fn_80254F6C_00000C64
    lwz r29, lbl_8087EE68
    mr r3, r31
    bl fn_80179D44
    lfs f3, lbl_808833B8
    mr r9, r3
    lfs f0, 0x538(r31)
    mr r3, r29
    lwz r5, 0xd0c(r31)
    addi r4, r31, 0x528
    fadds f1, f3, f0
    lfs f2, lbl_808833CC
    lfs f3, lbl_808833C8
    li r6, 0x0
    lfs f4, lbl_808833C0
    li r7, -0x1
    li r8, 0x0
    li r10, 0x1
    bl fn_80018D5C
lbl_fn_80254F6C_00000C64:
    cmpwi r3, 0x0
    ble lbl_fn_80254F6C_00000C98
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_803C11A4
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0x14fc
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1504(r31)
    b lbl_fn_80254F6C_00000CAC
lbl_fn_80254F6C_00000C98:
    lfs f2, 0x530(r31)
    addi r3, r31, 0x14fc
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1504(r31)
lbl_fn_80254F6C_00000CAC:
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    b lbl_fn_80254F6C_00000D18
lbl_fn_80254F6C_00000CBC:
    lfs f1, lbl_808833B0
    li r4, 0x1e1
    lfs f2, lbl_808833B4
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    b lbl_fn_80254F6C_00000D18
lbl_fn_80254F6C_00000CE4:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80254F6C_00000D0C
    cmpwi r6, 0x2
    beq lbl_fn_80254F6C_00000D0C
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80254F6C_00000D0C:
    lwz r0, 0x14cc(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
lbl_fn_80254F6C_00000D18:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80255224(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r7, 0x38(r3)
    lwz r4, 0x14c0(r3)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    li r4, 0x0
    beq lbl_fn_80255224_00000D80
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80255224_00000D80
    li r4, 0x1
lbl_fn_80255224_00000D80:
    cmpwi r4, 0x0
    beq lbl_fn_80255224_00000D9C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80255224_00000D9C
    li r6, 0x1
lbl_fn_80255224_00000D9C:
    cmpwi r6, 0x0
    beq lbl_fn_80255224_00000DD0
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80255224_00000DC4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80255224_00000DC4
    li r4, 0x1
lbl_fn_80255224_00000DC4:
    cmpwi r4, 0x0
    bne lbl_fn_80255224_00000DD0
    li r5, 0x1
lbl_fn_80255224_00000DD0:
    cmpwi r5, 0x0
    beq lbl_fn_80255224_00000E18
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80255224_00000E18
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80255224_00000E18
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80255224_00000E18:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80255224_00000E48
    cmpwi r0, 0x7
    beq lbl_fn_80255224_00000EA0
    cmpwi r0, 0x8
    beq lbl_fn_80255224_00000EB8
    cmpwi r0, 0x9
    beq lbl_fn_80255224_00000EF4
    cmpwi r0, 0x2
    beq lbl_fn_80255224_00000F30
    b lbl_fn_80255224_00000F3C
lbl_fn_80255224_00000E48:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80255224_00000E88
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80255224_00000E88
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80255224_00000E88:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80255224_00000F54
lbl_fn_80255224_00000EA0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80255224_00000F54
lbl_fn_80255224_00000EB8:
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80255224_00000EDC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80255224_00000EDC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80255224_00000F54
lbl_fn_80255224_00000EF4:
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80255224_00000F18
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80255224_00000F18:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80255224_00000F54
lbl_fn_80255224_00000F30:
    mr r3, r31
    bl fn_805A40BC
    b lbl_fn_80255224_00000F54
lbl_fn_80255224_00000F3C:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80255224_00000F54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80255458(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r4, r1, 0x6c
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    lfs f31, lbl_808833B4
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    lfs f29, lbl_808833B0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x74(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80255458_00001358
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80255458_00000FE8
    cmpwi r0, 0x7
    beq lbl_fn_80255458_00000FF8
    cmpwi r0, 0x8
    beq lbl_fn_80255458_00001008
    cmpwi r0, 0x9
    beq lbl_fn_80255458_000012FC
    b lbl_fn_80255458_00001360
lbl_fn_80255458_00000FE8:
    lwz r0, 0x14cc(r3)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r3)
    b lbl_fn_80255458_00001360
lbl_fn_80255458_00000FF8:
    lwz r0, 0x14cc(r3)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r3)
    b lbl_fn_80255458_00001360
lbl_fn_80255458_00001008:
    lwz r0, 0x14bc(r3)
    lfs f30, 0x2e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80255458_000012D8
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    ble lbl_fn_80255458_00001360
    lis r4, lbl_80743C94@ha
    lfs f1, lbl_808833B0
    addi r4, r4, lbl_80743C94@l
    addi r3, r1, 0x8
    addi r4, r4, 0x48
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, 0xd1c(r31)
    addi r3, r31, 0x14fc
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x1504(r31)
    cmpwi r4, 0x0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    beq lbl_fn_80255458_0000128C
    frsp f6, f2
    lfs f7, 0x530(r4)
    lfs f5, 0x52c(r4)
    addi r3, r1, 0x60
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0x68(r1)
    stfs f0, 0x60(r1)
    stfs f4, 0x64(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808833D0
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80255458_000010D4
    addi r3, r1, 0x60
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80255458_000010D4:
    lfs f2, 0x68(r1)
    addi r3, r1, 0x60
    lfs f0, lbl_808833D0
    addi r30, r1, 0x54
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x5c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80255458_00001124
    lfs f3, 0x54(r1)
    lfs f0, lbl_808833B4
    fcmpo cr0, f3, f0
    ble lbl_fn_80255458_00001118
    lfs f0, lbl_808833D4
    b lbl_fn_80255458_0000111C
lbl_fn_80255458_00001118:
    lfs f0, lbl_808833D8
lbl_fn_80255458_0000111C:
    stfs f0, 0x4c(r1)
    b lbl_fn_80255458_00001138
lbl_fn_80255458_00001124:
    frsp f2, f2
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_80255458_00001138:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808833B4
    addi r4, r1, 0x3c
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_808833B0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x5c(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f12, 0x20(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f9, 0x2c(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    bl fn_805F9750
    lfs f2, 0x44(r1)
    lfs f0, lbl_808833D0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80255458_00001254
    lfs f3, 0x40(r1)
    lfs f0, lbl_808833B4
    fcmpo cr0, f3, f0
    ble lbl_fn_80255458_00001244
    lfs f0, lbl_808833D4
    b lbl_fn_80255458_00001248
lbl_fn_80255458_00001244:
    lfs f0, lbl_808833D8
lbl_fn_80255458_00001248:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_80255458_00001268
lbl_fn_80255458_00001254:
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_80255458_00001268:
    lfs f2, lbl_808833B4
    addi r3, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x50(r1)
    stfs f2, 0x5c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_80255458_0000128C:
    lfs f1, lbl_808833B4
    addi r3, r31, 0xb0
    lfs f2, lbl_808833DC
    li r4, 0x0
    li r5, 0x1ea
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80255458_000012C8
    mr r4, r31
    addi r5, r31, 0xb0
    bl fn_8010653C
lbl_fn_80255458_000012C8:
    lwz r3, 0x14bc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    b lbl_fn_80255458_0000137C
lbl_fn_80255458_000012D8:
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    ble lbl_fn_80255458_00001360
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_80255458_00001360
lbl_fn_80255458_000012FC:
    lwz r0, 0x14bc(r3)
    lfs f30, 0x2e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80255458_00001360
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80255458_00001360
    lwz r5, 0x14bc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808833B4
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14bc(r31)
    lfs f2, lbl_808833DC
    li r5, 0x1e2
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80255458_00001360
lbl_fn_80255458_00001358:
    bl fn_805A4258
    b lbl_fn_80255458_0000137C
lbl_fn_80255458_00001360:
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0x6c
    fmuls f2, f0, f29
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_80255458_0000137C:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8025589C(void)
{
    nofralloc
    lwz r0, 0x14cc(r3)
    extrwi. r0, r0, 1, 1
    beqlr
    b fn_801437D0
    blr
}

asm void fn_802558B0(void)
{
    nofralloc
    stwu r1, -0x6f0(r1)
    mflr r0
    stw r0, 0x6f4(r1)
    addi r11, r1, 0x6f0
    bl _savegpr_25
    mr r31, r5
    lwz r5, 0x20(r5)
    mr r30, r3
    bl fn_8035B694
    lis r3, lbl_807846A0@ha
    li r28, 0x0
    addi r3, r3, lbl_807846A0@l
    addi r27, r30, 0x14b4
    stw r3, 0x0(r30)
    mr r3, r27
    stw r28, 0x14b0(r30)
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r29, 0x1
    addi r3, r3, lbl_8078FBB0@l
    lis r4, fn_80255F2C@ha
    lis r5, fn_80255F68@ha
    stw r3, 0x0(r27)
    addi r3, r30, 0x151c
    addi r4, r4, fn_80255F2C@l
    stw r28, 0x14bc(r30)
    addi r5, r5, fn_80255F68@l
    li r6, 0x34
    li r7, 0x4
    stw r28, 0x14c0(r30)
    stw r28, 0x14c4(r30)
    stw r28, 0x14c8(r30)
    stw r28, 0x14cc(r30)
    stw r28, 0x14d0(r30)
    stw r28, 0x14d4(r30)
    stw r28, 0x14f0(r30)
    stw r28, 0x14f4(r30)
    stw r28, 0x14f8(r30)
    stw r29, 0x14fc(r30)
    stw r28, 0x1500(r30)
    stw r28, 0x1510(r30)
    bl fn_806958E0
    stw r28, 0x15ec(r30)
    addi r3, r30, 0x15f8
    stw r28, 0x15f0(r30)
    stw r28, 0x15f4(r30)
    bl fn_802377B8
    addi r3, r30, 0x1604
    bl fn_802377B8
    addi r3, r30, 0x1610
    bl fn_802377B8
    addi r3, r30, 0x161c
    bl fn_802377B8
    addi r3, r30, 0x1628
    bl fn_802377B8
    addi r3, r30, 0x1634
    bl fn_802377B8
    addi r3, r30, 0x1640
    bl fn_802377B8
    lwz r4, 0x12a4(r30)
    li r5, 0x78
    lfs f13, lbl_808833E0
    lis r3, lbl_80743D18@ha
    lfs f8, lbl_808833F4
    oris r4, r4, 0x40
    lfs f9, lbl_808833F0
    addi r27, r3, lbl_80743D18@l
    lfs f11, lbl_808833E8
    mr r3, r27
    lfs f10, lbl_808833EC
    addi r26, r1, 0x88
    lfs f7, lbl_808833F8
    lfs f6, lbl_808833FC
    lfs f5, lbl_80883400
    lfs f4, lbl_80883404
    lfs f3, lbl_80883408
    lfs f2, lbl_8088340C
    lfs f1, lbl_80883410
    lfs f0, lbl_80883414
    lwz r0, 0x12a8(r30)
    lfs f12, lbl_808833E4
    ori r0, r0, 0x800
    stfs f13, 0x1654(r30)
    stfs f13, 0x1658(r30)
    stfs f13, 0x165c(r30)
    stfs f13, 0x1668(r30)
    stfs f13, 0x166c(r30)
    stfs f13, 0x1670(r30)
    stfs f13, 0x1674(r30)
    stfs f13, 0x1678(r30)
    stfs f13, 0x167c(r30)
    stfs f13, 0x1684(r30)
    stfs f13, 0x1688(r30)
    stfs f13, 0x168c(r30)
    stfs f13, 0x1690(r30)
    stfs f13, 0x1694(r30)
    stfs f13, 0x1698(r30)
    stfs f13, 0x169c(r30)
    stw r29, 0x16ac(r30)
    stw r5, 0x16b0(r30)
    stfs f12, 0x16b4(r30)
    stfs f11, 0x16c0(r30)
    stfs f10, 0x16c4(r30)
    stfs f9, 0x16c8(r30)
    stfs f8, 0x16cc(r30)
    stfs f7, 0x16d0(r30)
    stfs f6, 0x16d4(r30)
    stfs f5, 0x16d8(r30)
    stfs f8, 0x16dc(r30)
    stfs f8, 0x16e0(r30)
    stfs f8, 0x16e4(r30)
    stfs f8, 0x16e8(r30)
    stfs f8, 0x16ec(r30)
    stfs f9, 0x16f0(r30)
    stfs f4, 0x16f4(r30)
    stfs f3, 0x16f8(r30)
    stfs f8, 0x16fc(r30)
    stfs f2, 0x1700(r30)
    stfs f1, 0x1704(r30)
    stfs f0, 0x1708(r30)
    stfs f8, 0x170c(r30)
    stw r4, 0x12a4(r30)
    stw r0, 0x12a8(r30)
    stw r28, 0x164c(r30)
    stw r28, 0x1650(r30)
    stw r28, 0x1660(r30)
    stw r28, 0x1680(r30)
    stw r28, 0x16a4(r30)
    stw r28, 0x16a8(r30)
    stw r28, 0x16b8(r30)
    stw r28, 0x16bc(r30)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f5, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f8, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f9, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f8, 0x2c(r1)
    stw r28, 0x88(r1)
    stw r28, 0x8c(r1)
    stw r28, 0x90(r1)
    bl strlen
    mr r29, r3
    mr r3, r26
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r26
    stb r0, 0x18(r1)
    mr r6, r27
    add r7, r27, r29
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r27, 0x18
    stw r28, 0x7c(r1)
    addi r29, r1, 0x7c
    stw r28, 0x80(r1)
    mr r3, r26
    stw r28, 0x84(r1)
    bl strlen
    mr r25, r3
    mr r3, r29
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r29
    stb r0, 0x10(r1)
    mr r6, r26
    add r7, r26, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r31, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x94(r1)
    addi r3, r1, 0xa4
    li r5, 0x400
    stw r28, 0x98(r1)
    li r4, 0x0
    stw r28, 0x9c(r1)
    stw r28, 0xa0(r1)
    stw r28, 0x6c4(r1)
    bl memset
    addi r3, r1, 0x6a4
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x94(r1)
    mr r5, r26
    addi r3, r1, 0x94
    addi r4, r31, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x94
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x94(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_802558B0_0000172C:
    addi r3, r1, 0x94
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802558B0_000017C4
    addi r4, r27, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802558B0_000017C4
    mr r3, r26
    addi r4, r27, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802558B0_000017B4
    lwz r0, 0x7c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802558B0_00001780
    lbz r0, 0x7c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802558B0_00001784
lbl_fn_802558B0_00001780:
    lwz r25, 0x80(r1)
lbl_fn_802558B0_00001784:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x7c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_802558B0_000017B4:
    addi r3, r1, 0x94
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802558B0_0000172C
lbl_fn_802558B0_000017C4:
    addi r3, r1, 0x70
    addi r4, r1, 0x88
    addi r5, r1, 0x7c
    bl fn_8006AFF8
    lwz r0, 0x70(r1)
    addi r3, r30, 0x14b4
    srwi. r0, r0, 31
    bne lbl_fn_802558B0_000017EC
    addi r4, r1, 0x71
    b lbl_fn_802558B0_000017F0
lbl_fn_802558B0_000017EC:
    lwz r4, 0x78(r1)
lbl_fn_802558B0_000017F0:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x16b8(r30)
    lis r3, lbl_80743D18@ha
    addi r3, r3, lbl_80743D18@l
    cmpwi r0, 0x0
    addi r4, r3, 0x35
    bne lbl_fn_802558B0_00001838
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802558B0_00001838
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x16b8(r30)
    mr r26, r3
    b lbl_fn_802558B0_0000183C
lbl_fn_802558B0_00001838:
    li r26, 0x0
lbl_fn_802558B0_0000183C:
    lis r31, lbl_80743D18@ha
    mr r3, r26
    addi r31, r31, lbl_80743D18@l
    addi r5, r30, 0x16bc
    addi r4, r31, 0x45
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r6, 0xf
    mr r3, r26
    addi r7, r6, 0x4240
    addi r4, r31, 0x4f
    addi r5, r30, 0x16b0
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808833E0
    mr r3, r26
    lfs f2, lbl_80883418
    addi r4, r31, 0x59
    lfs f3, lbl_808833F4
    addi r5, r30, 0x16b4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lis r6, 0x2
    mr r3, r26
    subi r7, r6, 0x7960
    addi r4, r31, 0x6b
    addi r5, r30, 0x14fc
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r31, 0x79
    addi r5, r30, 0x14cc
    li r6, 0x3
    li r7, 0x5
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808833E0
    mr r3, r26
    lfs f2, lbl_808833F4
    addi r4, r31, 0x87
    lfs f3, lbl_8088341C
    addi r5, r30, 0x16c0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_808833E0
    mr r3, r26
    lfs f2, lbl_808833F4
    addi r4, r31, 0x93
    lfs f3, lbl_8088341C
    addi r5, r30, 0x16d0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_808833E0
    mr r3, r26
    lfs f2, lbl_808833F4
    addi r4, r31, 0x9e
    lfs f3, lbl_8088341C
    addi r5, r30, 0x16f0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_808833E0
    mr r3, r26
    lfs f2, lbl_808833F4
    addi r4, r31, 0xac
    lfs f3, lbl_8088341C
    addi r5, r30, 0x1700
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    addi r3, r30, 0x15f8
    addi r4, r31, 0xb8
    bl fn_8023780C
    addi r3, r30, 0x1604
    addi r4, r31, 0xc6
    bl fn_8023780C
    addi r3, r30, 0x1610
    addi r4, r31, 0xd4
    bl fn_8023780C
    addi r3, r30, 0x161c
    addi r4, r31, 0xe2
    bl fn_8023780C
    addi r3, r30, 0x1628
    addi r4, r31, 0xf0
    bl fn_8023780C
    addi r3, r30, 0x1634
    addi r4, r31, 0xfe
    bl fn_8023780C
    addi r3, r30, 0x1640
    addi r4, r31, 0x10c
    bl fn_8023780C
    lwz r0, 0x12a8(r30)
    ori r0, r0, 0x20
    stw r0, 0x12a8(r30)
    lwz r0, 0x70(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802558B0_000019F8
    lwz r3, 0x78(r1)
    bl dtor_80084684
lbl_fn_802558B0_000019F8:
    lwz r0, 0x7c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802558B0_00001A0C
    lwz r3, 0x84(r1)
    bl dtor_80084684
lbl_fn_802558B0_00001A0C:
    lwz r0, 0x88(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802558B0_00001A20
    lwz r3, 0x90(r1)
    bl dtor_80084684
lbl_fn_802558B0_00001A20:
    addi r11, r1, 0x6f0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6f4(r1)
    mtlr r0
    addi r1, r1, 0x6f0
    blr
}
