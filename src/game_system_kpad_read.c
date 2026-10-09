#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _savegpr_18(void);
extern void fn_800697D8(void);
extern void fn_8006D3F8(void);
extern void fn_800CFBA0(void);
extern void fn_800CFD18(void);
extern void fn_800D0518(void);
extern void fn_800D089C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800F3490(void);
extern void fn_801092C8(void);
extern void fn_8011770C(void);
extern void fn_802085E0(void);
extern void fn_8021771C(void);
extern void fn_80219558(void);
extern void fn_8037D34C(void);
extern void fn_8037D3E8(void);
extern void fn_803933A4(void);
extern void fn_803BAAE0(void);
extern void fn_803D1574(void);
extern void fn_803E4100(void);
extern void fn_803E4510(void);
extern void fn_803E63D0(void);
extern void fn_803EB4A8(void);
extern void fn_803EBAC8(void);
extern void fn_80468F54(void);
extern void fn_8046ECDC(void);
extern void fn_804A2F98(void);
extern void fn_804A2FBC(void);
extern void fn_804A313C(void);
extern void fn_80571630(void);
extern void fn_805A2FD8(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074DA2C[];
extern u8 lbl_8074DAF8[];
extern u8 lbl_8074DC1C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F040;
extern u32 lbl_8087F048;
extern u32 lbl_8087F068;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F448;
extern u32 lbl_8087F480;
extern u32 lbl_8087F488;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F508;
extern u32 lbl_8087F518;
extern u32 lbl_8087F540;
extern u32 lbl_8087F558;
extern u32 lbl_8087F578;
extern u32 lbl_8087F580;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087F9C8;
extern u32 lbl_8087F9D0;
extern u32 lbl_8087F9D8;
extern u32 lbl_8087F9E0;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F0;
extern u32 lbl_8087F9F8;
extern u32 lbl_8087FA20;
extern u32 lbl_80885708;
extern u32 lbl_80885748;
extern u32 lbl_808857C4;

/* Function declarations */
void fn_8036E92C(void);
void fn_8036E964(void);
void fn_8036E994(void);
void fn_8036EA04(void);
void fn_8036EA3C(void);
void fn_8036EA6C(void);
void fn_8036EE04(void);
void fn_8036EE0C(void);
void fn_8036F268(void);
void fn_8036FB4C(void);
void fn_8036FC58(void);
void fn_8036FD4C(void);
void fn_8036FE74(void);
void fn_80370094(void);
void fn_80370174(void);
void fn_803701E0(void);

asm void fn_8036E92C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8036EA6C
    mr r3, r31
    bl fn_8011770C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036E964(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8036EE0C
    lwz r3, lbl_8087F068
    cmpwi r3, 0x0
    beq lbl_fn_8036E964_00000058
    bl fn_800D2338
lbl_fn_8036E964_00000058:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036E994(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x5
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_8036EA6C
    mr r3, r28
    mr r4, r29
    li r5, 0x1
    bl fn_80571630
    stw r3, 0x5750(r28)
    stw r30, 0x5754(r28)
    stw r31, 0x5758(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8036EA04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8036EA6C
    mr r3, r31
    bl fn_80468F54
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036EA3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8036EE0C
    lwz r3, lbl_8087F508
    cmpwi r3, 0x0
    beq lbl_fn_8036EA3C_00000130
    bl fn_800D2338
lbl_fn_8036EA3C_00000130:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036EA6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r4, 0x3
    cmplwi r0, 0x2
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x54e4(r3)
    stw r5, 0x5680(r3)
    stw r4, 0x54e4(r3)
    ble lbl_fn_8036EA6C_0000031C
    cmpwi r4, 0x1
    beq lbl_fn_8036EA6C_00000180
    cmpwi r4, 0x2
    beq lbl_fn_8036EA6C_000003A0
    b lbl_fn_8036EA6C_000003B4
lbl_fn_8036EA6C_00000180:
    lwz r4, 0x10d8(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000001A4
    lwz r4, 0x64(r3)
    b lbl_fn_8036EA6C_000001A8
lbl_fn_8036EA6C_000001A4:
    li r4, 0x0
lbl_fn_8036EA6C_000001A8:
    lwz r3, 0x38(r4)
    li r0, 0x6
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F048
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F8A0
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F408
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F890
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F098
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r4, lbl_8087EE68
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F4A0
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F3C0
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r3, lbl_8087F558
    stw r0, 0x14c(r3)
    lwz r3, lbl_8087F480
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_00000278
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036EA6C_00000278:
    lwz r3, lbl_8087F9C8
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_00000290
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036EA6C_00000290:
    lwz r3, lbl_8087F9E0
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000002A8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036EA6C_000002A8:
    lwz r3, lbl_8087F9D0
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000002C0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036EA6C_000002C0:
    lwz r3, lbl_8087F9D8
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000002D8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036EA6C_000002D8:
    lwz r3, lbl_8087F508
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000002F0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036EA6C_000002F0:
    lwz r3, lbl_8087F9E8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000003B4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8036EA6C_000003B4
lbl_fn_8036EA6C_0000031C:
    lwz r3, lbl_8087F558
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F048
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087EE68
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F418
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x10d8(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000003B4
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_8036EA6C_000003B4
lbl_fn_8036EA6C_000003A0:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x10
    stw r0, 0x54c(r3)
lbl_fn_8036EA6C_000003B4:
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000003D8
    lwz r3, 0x258(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000003D8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036EA6C_000003D8:
    lwz r3, lbl_8087F580
    bl fn_804A2F98
    lwz r3, lbl_8087F580
    bl fn_804A313C
    lwz r3, lbl_8087F490
    li r4, 0x1
    lfs f1, lbl_80885748
    li r5, 0x1e
    lwz r3, 0x263c(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x2640(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F578
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F488
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EFE8
    bl fn_800D0518
    lwz r3, lbl_8087EFE8
    li r0, 0x2
    li r4, 0x8
    li r5, 0x1
    stw r0, 0x34d4(r3)
    li r6, 0x4
    li r7, 0xf
    lwz r3, lbl_8087EFE8
    bl fn_800CFBA0
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    li r5, 0x1
    bl fn_800D089C
    cmpwi r3, 0x0
    ble lbl_fn_8036EA6C_000004C4
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_8036EA6C_000004C4
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036EA6C_000004A0
    lwz r0, 0xc4(r3)
    b lbl_fn_8036EA6C_000004A4
lbl_fn_8036EA6C_000004A0:
    lwz r0, 0x8c(r3)
lbl_fn_8036EA6C_000004A4:
    cmpwi r0, 0x67
    beq lbl_fn_8036EA6C_000004C4
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    li r5, 0x1
    li r6, 0x4
    li r7, 0xf
    bl fn_800CFBA0
lbl_fn_8036EA6C_000004C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036EE04(void)
{
    nofralloc
    lwz r3, 0x2640(r3)
    blr
}

asm void fn_8036EE0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r4, 0x54e4(r3)
    subi r0, r4, 0x3
    cmplwi r0, 0x2
    ble lbl_fn_8036EE0C_000006B8
    cmpwi r4, 0x1
    beq lbl_fn_8036EE0C_0000051C
    cmpwi r4, 0x2
    beq lbl_fn_8036EE0C_00000744
    b lbl_fn_8036EE0C_00000758
lbl_fn_8036EE0C_0000051C:
    lwz r4, 0x10d8(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_00000540
    lwz r4, 0x64(r3)
    b lbl_fn_8036EE0C_00000544
lbl_fn_8036EE0C_00000540:
    li r4, 0x0
lbl_fn_8036EE0C_00000544:
    lwz r3, 0x38(r4)
    li r0, 0x0
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F048
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F8A0
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F408
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F890
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F098
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r4, lbl_8087EE68
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F4A0
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r4, lbl_8087F3C0
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r3, lbl_8087F558
    stw r0, 0x14c(r3)
    lwz r3, lbl_8087F480
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_00000614
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036EE0C_00000614:
    lwz r3, lbl_8087F9C8
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_0000062C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036EE0C_0000062C:
    lwz r3, lbl_8087F9E0
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_00000644
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036EE0C_00000644:
    lwz r3, lbl_8087F9D0
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_0000065C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036EE0C_0000065C:
    lwz r3, lbl_8087F9D8
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_00000674
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036EE0C_00000674:
    lwz r3, lbl_8087F508
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_0000068C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036EE0C_0000068C:
    lwz r3, lbl_8087F9E8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_00000758
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8036EE0C_00000758
lbl_fn_8036EE0C_000006B8:
    lwz r3, lbl_8087F558
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F048
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087EE68
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F418
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x10d8(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F490
    bl fn_803E4100
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_00000758
    li r4, 0x0
    bl fn_800D246C
    b lbl_fn_8036EE0C_00000758
lbl_fn_8036EE0C_00000744:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
lbl_fn_8036EE0C_00000758:
    lwz r3, 0x5680(r31)
    li r30, 0x0
    subi r3, r3, 0x1
    cmplwi r3, 0xd
    bgt lbl_fn_8036EE0C_00000780
    li r0, 0x1
    slw r0, r0, r3
    andi. r0, r0, 0x201d
    beq lbl_fn_8036EE0C_00000780
    li r30, 0x1
lbl_fn_8036EE0C_00000780:
    cmpwi r30, 0x0
    bne lbl_fn_8036EE0C_000007A0
    lwz r3, lbl_8087F580
    bl fn_804A2FBC
    lwz r3, lbl_8087F488
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036EE0C_000007A0:
    cmpwi r30, 0x0
    bne lbl_fn_8036EE0C_00000804
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_000007CC
    lwz r3, 0x258(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_000007CC
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036EE0C_000007CC:
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x2640(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F578
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036EE0C_00000804:
    lwz r3, lbl_8087F580
    bl fn_804A313C
    lwz r0, 0x5680(r31)
    cmpwi r0, 0x1
    blt lbl_fn_8036EE0C_00000820
    cmpwi r0, 0x5
    ble lbl_fn_8036EE0C_00000880
lbl_fn_8036EE0C_00000820:
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    lfs f1, lbl_80885708
    li r5, 0x1e
    bl fn_800D0518
    lwz r3, lbl_8087EFE8
    li r30, 0x1
    li r4, 0x8
    li r5, 0x0
    stw r30, 0x34d4(r3)
    li r6, 0x4
    li r7, 0xf
    lwz r3, lbl_8087EFE8
    bl fn_800CFBA0
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    li r5, 0x0
    li r6, 0x4
    li r7, 0xf
    bl fn_800CFBA0
    lwz r3, lbl_8087F0A8
    stb r30, 0x4c4(r3)
    lwz r3, lbl_8087F0A8
    stb r30, 0x4a7(r3)
lbl_fn_8036EE0C_00000880:
    lwz r0, 0x54e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8036EE0C_0000091C
    lwz r3, 0x5680(r31)
    subi r0, r3, 0x3
    cmplwi r0, 0x2
    bgt lbl_fn_8036EE0C_0000091C
    li r0, 0x0
    stw r3, 0x54e4(r31)
    stw r0, 0x5680(r31)
    lwz r3, lbl_8087F9C8
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_000008C4
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8036EE0C_000008C4:
    lwz r3, lbl_8087F9E0
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_000008E0
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8036EE0C_000008E0:
    lwz r3, lbl_8087F9D0
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_000008FC
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8036EE0C_000008FC:
    lwz r3, lbl_8087F9D8
    cmpwi r3, 0x0
    beq lbl_fn_8036EE0C_00000924
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_8036EE0C_00000924
lbl_fn_8036EE0C_0000091C:
    lwz r0, 0x5680(r31)
    stw r0, 0x54e4(r31)
lbl_fn_8036EE0C_00000924:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036F268(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_18
    cmpwi r9, 0x0
    mr r31, r3
    mr r18, r4
    mr r19, r5
    mr r20, r6
    mr r21, r7
    mr r22, r8
    mr r23, r9
    mr r24, r10
    bne lbl_fn_8036F268_00000980
    lwz r3, 0x5628(r3)
    bl fn_803BAAE0
lbl_fn_8036F268_00000980:
    lwz r3, lbl_8087F8A0
    li r26, 0x18
    li r27, 0xf
    li r28, 0x10
    lwz r25, 0x48(r3)
    li r29, 0x14
    li r30, 0x0
    b lbl_fn_8036F268_00000BF8
lbl_fn_8036F268_000009A0:
    lwz r3, 0x50(r25)
    bl fn_80219558
    cmplwi r3, 0x6
    bgt lbl_fn_8036F268_00000BF4
    mulli r0, r3, 0x43c
    lwz r3, lbl_8087F4F0
    lfs f0, 0x7d8(r25)
    addi r6, r25, 0x7f8
    add r3, r3, r0
    stfs f0, 0x64f0(r3)
    addi r7, r3, 0x6510
    lfs f0, 0x7dc(r25)
    stfs f0, 0x64f4(r3)
    lwz r4, 0x7e0(r25)
    stw r4, 0x64f8(r3)
    lwz r4, 0x7e4(r25)
    stw r4, 0x64fc(r3)
    lwz r4, 0x7e8(r25)
    stw r4, 0x6500(r3)
    lwz r4, 0x7ec(r25)
    stw r4, 0x6504(r3)
    lwz r4, 0x7f0(r25)
    stw r4, 0x6508(r3)
    lfs f0, 0x7f4(r25)
    stfs f0, 0x650c(r3)
    lfs f0, 0x7f8(r25)
    stfs f0, 0x6510(r3)
    mtctr r26
lbl_fn_8036F268_00000A10:
    lwz r5, 0x4(r6)
    lwzu r4, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r4, 0x8(r7)
    bdnz lbl_fn_8036F268_00000A10
    addi r7, r3, 0x65d0
    addi r6, r25, 0x8b8
    mtctr r26
lbl_fn_8036F268_00000A30:
    lwz r5, 0x4(r6)
    lwzu r4, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r4, 0x8(r7)
    bdnz lbl_fn_8036F268_00000A30
    addi r8, r3, 0x6690
    addi r6, r25, 0x978
    mtctr r27
lbl_fn_8036F268_00000A50:
    lwz r5, 0x4(r6)
    lwzu r4, 0x8(r6)
    stw r5, 0x4(r8)
    stwu r4, 0x8(r8)
    bdnz lbl_fn_8036F268_00000A50
    lwz r4, 0x4(r6)
    addi r7, r3, 0x6734
    stw r4, 0x4(r8)
    addi r6, r25, 0xa1c
    lwz r4, 0x9f8(r25)
    stw r4, 0x6710(r3)
    lfs f0, 0x9fc(r25)
    stfs f0, 0x6714(r3)
    lwz r4, 0xa00(r25)
    stw r4, 0x6718(r3)
    lbz r4, 0xa04(r25)
    stb r4, 0x671c(r3)
    lbz r4, 0xa05(r25)
    stb r4, 0x671d(r3)
    lwz r4, 0xa0a(r25)
    lwz r5, 0xa06(r25)
    stw r5, 0x671e(r3)
    stw r4, 0x6722(r3)
    lwz r4, 0xa0e(r25)
    stw r4, 0x6726(r3)
    lhz r4, 0xa12(r25)
    sth r4, 0x672a(r3)
    lwz r4, 0xa14(r25)
    stw r4, 0x672c(r3)
    lfs f0, 0xa18(r25)
    stfs f0, 0x6730(r3)
    lwz r4, 0xa1c(r25)
    stw r4, 0x6734(r3)
    mtctr r28
lbl_fn_8036F268_00000AD8:
    lwz r5, 0x4(r6)
    lwzu r4, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r4, 0x8(r7)
    bdnz lbl_fn_8036F268_00000AD8
    lwz r4, 0xaa4(r25)
    addi r8, r3, 0x67ec
    lwz r5, 0xaa0(r25)
    addi r6, r25, 0xad4
    stw r5, 0x67b8(r3)
    stw r4, 0x67bc(r3)
    lwz r4, 0xaac(r25)
    lwz r5, 0xaa8(r25)
    stw r5, 0x67c0(r3)
    stw r4, 0x67c4(r3)
    lwz r4, 0xab4(r25)
    lwz r5, 0xab0(r25)
    stw r5, 0x67c8(r3)
    stw r4, 0x67cc(r3)
    lwz r4, 0xabc(r25)
    lwz r5, 0xab8(r25)
    stw r5, 0x67d0(r3)
    stw r4, 0x67d4(r3)
    lwz r4, 0xac0(r25)
    stw r4, 0x67d8(r3)
    lwz r4, 0xac4(r25)
    stw r4, 0x67dc(r3)
    lfs f0, 0xac8(r25)
    stfs f0, 0x67e0(r3)
    lfs f0, 0xacc(r25)
    stfs f0, 0x67e4(r3)
    lfs f0, 0xad0(r25)
    stfs f0, 0x67e8(r3)
    lwz r4, 0xad4(r25)
    stw r4, 0x67ec(r3)
    mtctr r27
lbl_fn_8036F268_00000B68:
    lwz r5, 0x4(r6)
    lwzu r4, 0x8(r6)
    stw r5, 0x4(r8)
    stwu r4, 0x8(r8)
    bdnz lbl_fn_8036F268_00000B68
    lwz r4, 0x4(r6)
    addi r7, r3, 0x6868
    stw r4, 0x4(r8)
    addi r6, r25, 0xb50
    mtctr r29
lbl_fn_8036F268_00000B90:
    lwz r5, 0x4(r6)
    lwzu r4, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r4, 0x8(r7)
    bdnz lbl_fn_8036F268_00000B90
    lwz r4, 0x4(r6)
    stw r4, 0x4(r7)
    lwz r4, 0xbf8(r25)
    stw r4, 0x6910(r3)
    lfs f0, 0xbfc(r25)
    stfs f0, 0x6914(r3)
    lfs f0, 0xc00(r25)
    stfs f0, 0x6918(r3)
    lwz r4, 0xc04(r25)
    stw r4, 0x691c(r3)
    lfs f0, 0xc08(r25)
    stfs f0, 0x6920(r3)
    lfs f0, 0xc0c(r25)
    stfs f0, 0x6924(r3)
    lwz r3, lbl_8087F4F0
    add r3, r3, r0
    stw r30, 0x67dc(r3)
    lwz r3, lbl_8087F4F0
    add r3, r3, r0
    stw r30, 0x686c(r3)
lbl_fn_8036F268_00000BF4:
    lwz r25, 0x14ac(r25)
lbl_fn_8036F268_00000BF8:
    cmpwi r25, 0x0
    bne lbl_fn_8036F268_000009A0
    cmpwi r23, 0x0
    stw r23, 0x553c(r31)
    beq lbl_fn_8036F268_00000C38
    li r0, 0x0
    stw r0, 0x5540(r31)
    li r0, -0x1
    lbz r3, 0x4d10(r23)
    stw r3, 0x5514(r31)
    lhz r3, 0x4d12(r23)
    stw r3, 0x5518(r31)
    lbz r3, 0x4d11(r23)
    stw r3, 0x551c(r31)
    stw r0, 0x5520(r31)
    b lbl_fn_8036F268_00000C50
lbl_fn_8036F268_00000C38:
    lwz r0, 0x5628(r31)
    stw r0, 0x5540(r31)
    stw r18, 0x5514(r31)
    stw r19, 0x5518(r31)
    stw r20, 0x551c(r31)
    stw r21, 0x5520(r31)
lbl_fn_8036F268_00000C50:
    lwz r4, 0x10d8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8036F268_00000C8C
    lwz r3, 0x64(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_00000C8C
    lwz r0, 0x48(r3)
    stw r0, 0x5524(r31)
    lwz r3, 0x64(r4)
    lwz r0, 0x4c(r3)
    stw r0, 0x5528(r31)
    lwz r3, 0x64(r4)
    lwz r0, 0x50(r3)
    stw r0, 0x552c(r31)
    b lbl_fn_8036F268_00000C9C
lbl_fn_8036F268_00000C8C:
    li r0, -0x1
    stw r0, 0x5524(r31)
    stw r0, 0x5528(r31)
    stw r0, 0x552c(r31)
lbl_fn_8036F268_00000C9C:
    lwz r0, 0x54f0(r31)
    li r3, 0x1
    stw r22, 0x5530(r31)
    cmpwi r0, 0x1
    stw r3, 0x5538(r31)
    bne lbl_fn_8036F268_00000CC0
    lwz r3, 0x5620(r31)
    lfs f0, lbl_808857C4
    stfs f0, 0x74(r3)
lbl_fn_8036F268_00000CC0:
    lwz r4, 0x5624(r31)
    li r7, 0x0
    lis r3, 0x99
    li r5, -0x1
    stw r7, 0x4c(r4)
    subi r6, r3, 0x6981
    lis r4, 0xff00
    li r0, 0x1e
    lwz r3, 0x5624(r31)
    stw r7, 0x58(r3)
    lwz r3, 0x5624(r31)
    stw r6, 0x5c(r3)
    lwz r3, 0x5624(r31)
    stw r5, 0x6c(r3)
    lwz r3, 0x5624(r31)
    stw r4, 0x70(r3)
    lwz r3, 0x5624(r31)
    stw r24, 0x78(r3)
    lwz r3, 0x5624(r31)
    stw r0, 0x54(r3)
    lwz r0, 0x563c(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8036F268_00000D2C
    lwz r3, 0x5624(r31)
    li r0, 0x1
    stw r0, 0x48(r3)
    stw r5, 0x563c(r31)
lbl_fn_8036F268_00000D2C:
    cmpwi r23, 0x0
    bne lbl_fn_8036F268_00000D3C
    li r0, 0x0
    stw r0, 0x5670(r31)
lbl_fn_8036F268_00000D3C:
    lwz r25, 0x48(r31)
    li r0, 0x0
    lwz r6, 0x5514(r31)
    lwz r4, 0x551c(r31)
    lwz r3, 0x5520(r31)
    lwz r26, 0x4c(r31)
    lwz r5, 0x5518(r31)
    stw r6, 0x48(r31)
    stw r5, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r3, 0x58(r31)
    stw r0, 0x10fc(r31)
    stw r0, 0x1150(r31)
    stw r0, 0x1178(r31)
    stw r0, 0x10f0(r31)
    stw r0, 0x110c(r31)
    stw r0, 0x1110(r31)
    stw r0, 0x1160(r31)
    stw r0, 0x1164(r31)
    stw r0, 0x117c(r31)
    stw r0, 0x1190(r31)
    stw r0, 0x1274(r31)
    stw r0, 0x127c(r31)
    stw r0, 0x1284(r31)
    stw r0, 0x1288(r31)
    stw r0, 0x1298(r31)
    stw r0, 0x1308(r31)
    stw r0, 0x141c(r31)
    stw r0, 0x142c(r31)
    stw r0, 0x1f08(r31)
    stw r0, 0x1f0c(r31)
    stw r0, 0x1424(r31)
    stw r0, 0x1434(r31)
    stw r0, 0x2604(r31)
    stw r0, 0x1280(r31)
    stw r0, 0x1448(r31)
    stw r0, 0x1450(r31)
    stw r0, 0x1548(r31)
    stw r0, 0x154c(r31)
    stw r0, 0x1278(r31)
    stw r0, 0x1f14(r31)
    stw r0, 0x1f18(r31)
    stw r0, 0x1f1c(r31)
    stw r0, 0x1564(r31)
    stw r0, 0x1568(r31)
    stw r0, 0x1f34(r31)
    stw r0, 0x1570(r31)
    stw r0, 0x1f38(r31)
    stw r0, 0x1f3c(r31)
    stw r0, 0x1f48(r31)
    lwz r3, lbl_8087EFB4
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_00000E1C
    li r0, 0x1
    stw r0, 0x4(r3)
lbl_fn_8036F268_00000E1C:
    lwz r3, lbl_8087EFB4
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_00000E34
    li r0, 0x1
    stw r0, 0x4(r3)
lbl_fn_8036F268_00000E34:
    lwz r3, lbl_8087EFA8
    li r0, 0x1
    li r4, 0x0
    stw r0, 0x104(r3)
    lwz r3, lbl_8087EFA8
    stw r4, 0x2c(r3)
    lwz r3, 0x48(r31)
    stw r4, 0x56f4(r31)
    cmpw r25, r3
    stw r4, 0x571c(r31)
    bne lbl_fn_8036F268_00000E6C
    lwz r0, 0x4c(r31)
    cmpw r26, r0
    beq lbl_fn_8036F268_00001074
lbl_fn_8036F268_00000E6C:
    lwz r4, 0x4c(r31)
    li r19, 0x0
    lwz r5, 0x50(r31)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_8036F268_00001068
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8036F268_00001068
    lwz r20, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r21, -0x1
    mr r3, r20
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8036F268_00000EEC
    addi r3, r20, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r21, r3, 0x64
    bne lbl_fn_8036F268_00000EEC
    mr r3, r20
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_8036F268_00000EEC
    addi r3, r20, 0x6
    bl fn_80684600
    add r21, r21, r3
lbl_fn_8036F268_00000EEC:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_8036F268_00000F0C
lbl_fn_8036F268_00000EF8:
    cmpw r21, r0
    bne lbl_fn_8036F268_00000F08
    li r0, 0x1
    b lbl_fn_8036F268_00000F1C
lbl_fn_8036F268_00000F08:
    addi r3, r3, 0x4
lbl_fn_8036F268_00000F0C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8036F268_00000EF8
    li r0, 0x0
lbl_fn_8036F268_00000F1C:
    cmpwi r0, 0x0
    beq lbl_fn_8036F268_00001068
    lwz r20, 0x0(r18)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r21, -0x1
    mr r3, r20
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8036F268_00000F7C
    addi r3, r20, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r21, r3, 0x64
    bne lbl_fn_8036F268_00000F7C
    mr r3, r20
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_8036F268_00000F7C
    addi r3, r20, 0x6
    bl fn_80684600
    add r21, r21, r3
lbl_fn_8036F268_00000F7C:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_8036F268_00000FB0
lbl_fn_8036F268_00000F8C:
    cmpw r21, r0
    bne lbl_fn_8036F268_00000FA8
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r20, r3, r0
    b lbl_fn_8036F268_00000FC0
lbl_fn_8036F268_00000FA8:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_8036F268_00000FB0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_8036F268_00000F8C
    li r20, 0x0
lbl_fn_8036F268_00000FC0:
    cmpwi r20, 0x0
    bne lbl_fn_8036F268_00001004
    lwz r4, 0x48(r18)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_00001068
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_00001068
    lwz r5, 0x10d0(r31)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r19, r4, r3
    b lbl_fn_8036F268_00001068
lbl_fn_8036F268_00001004:
    lwz r5, 0x4(r20)
    cmplwi r5, 0xfff
    ble lbl_fn_8036F268_00001048
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_8036F268_00001040
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_8036F268_00001040:
    li r5, 0x0
    b lbl_fn_8036F268_00001054
lbl_fn_8036F268_00001048:
    slwi r0, r5, 2
    add r3, r31, r0
    lwz r5, 0x10e4(r3)
lbl_fn_8036F268_00001054:
    lwz r0, 0x8(r20)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r19, r4, r3
lbl_fn_8036F268_00001068:
    stw r19, 0x5694(r31)
    stw r19, 0x5698(r31)
    b lbl_fn_8036F268_00001078
lbl_fn_8036F268_00001074:
    stw r4, 0x5698(r31)
lbl_fn_8036F268_00001078:
    lwz r3, lbl_8087F4E8
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_000010AC
    li r4, 0x3c
    li r5, 0x0
    bl fn_803EBAC8
    lwz r3, lbl_8087F498
    li r4, 0x0
    li r5, 0x0
    bl fn_803EB4A8
lbl_fn_8036F268_000010AC:
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_000010C8
    lwz r0, 0x2638(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036F268_000010C8
    bl fn_803E63D0
lbl_fn_8036F268_000010C8:
    lwz r3, 0x56f0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_000010EC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x8e
    bne lbl_fn_8036F268_000010EC
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x56f0(r31)
lbl_fn_8036F268_000010EC:
    cmpwi r23, 0x0
    beq lbl_fn_8036F268_00001120
    lwz r3, lbl_8087F9F0
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_00001108
    li r4, 0x0
    bl fn_805A2FD8
lbl_fn_8036F268_00001108:
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_00001120
    mr r4, r31
    li r5, 0xf
    bl fn_800CFD18
lbl_fn_8036F268_00001120:
    cmpwi r25, 0x2
    li r3, 0x1
    bne lbl_fn_8036F268_000011B4
    cmpwi r26, 0x21
    beq lbl_fn_8036F268_00001150
    cmpwi r26, 0x3f
    beq lbl_fn_8036F268_00001150
    cmpwi r26, 0x22
    beq lbl_fn_8036F268_00001178
    cmpwi r26, 0x28
    beq lbl_fn_8036F268_00001198
    b lbl_fn_8036F268_000011B4
lbl_fn_8036F268_00001150:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8036F268_000011B4
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x21
    beq lbl_fn_8036F268_00001170
    cmpwi r0, 0x3f
    bne lbl_fn_8036F268_000011B4
lbl_fn_8036F268_00001170:
    li r3, 0x0
    b lbl_fn_8036F268_000011B4
lbl_fn_8036F268_00001178:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8036F268_000011B4
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x22
    bne lbl_fn_8036F268_000011B4
    li r3, 0x0
    b lbl_fn_8036F268_000011B4
lbl_fn_8036F268_00001198:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8036F268_000011B4
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x28
    bne lbl_fn_8036F268_000011B4
    li r3, 0x0
lbl_fn_8036F268_000011B4:
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_00001208
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_8036F268_00001208
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036F268_000011DC
    lwz r0, 0xc4(r3)
    b lbl_fn_8036F268_000011E0
lbl_fn_8036F268_000011DC:
    lwz r0, 0x8c(r3)
lbl_fn_8036F268_000011E0:
    cmpwi r0, 0x0
    ble lbl_fn_8036F268_00001208
    bl fn_8037D34C
    cmpwi r3, 0x0
    bne lbl_fn_8036F268_00001208
    lwz r3, lbl_8087F448
    li r4, 0x1
    li r5, 0x10
    li r6, 0x2d
    bl fn_8037D3E8
lbl_fn_8036F268_00001208:
    addi r11, r1, 0x140
    bl _restgpr_18
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8036FB4C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0xc
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x54e4(r3)
    lwz r5, 0x10d8(r3)
    lwz r3, 0x134(r5)
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087EE68
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x1
    bl fn_800D246C
    lwz r4, 0x5624(r30)
    li r0, 0x0
    stw r0, 0x56e4(r30)
    lis r3, 0x99
    subi r7, r3, 0x6981
    li r6, -0x1
    stw r0, 0x4c(r4)
    lis r5, 0xff00
    li r4, 0x12
    li r0, 0x1e
    lwz r3, 0x5624(r30)
    stw r7, 0x5c(r3)
    lwz r3, 0x5624(r30)
    stw r6, 0x6c(r3)
    lwz r3, 0x5624(r30)
    stw r5, 0x70(r3)
    lwz r3, 0x5624(r30)
    stw r4, 0x78(r3)
    lwz r3, 0x5624(r30)
    stw r0, 0x54(r3)
    lwz r0, 0x563c(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8036FB4C_000012FC
    lwz r3, 0x5624(r30)
    li r0, 0x1
    stw r0, 0x48(r3)
    stw r6, 0x563c(r30)
lbl_fn_8036FB4C_000012FC:
    lwz r3, lbl_8087F490
    bl fn_803E4510
    stw r31, 0x56e8(r30)
    li r0, 0x0
    lwz r3, lbl_8087F4E8
    stw r0, 0x88(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036FC58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x54e4(r3)
    lwz r5, 0x10d8(r3)
    lwz r3, 0x134(r5)
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087EE68
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x5624(r30)
    lis r5, 0xff00
    li r4, 0x12
    li r0, 0x1e
    stw r31, 0x4c(r3)
    lwz r3, 0x5624(r30)
    stw r31, 0x5c(r3)
    lwz r3, 0x5624(r30)
    stw r5, 0x6c(r3)
    lwz r3, 0x5624(r30)
    stw r31, 0x70(r3)
    lwz r3, 0x5624(r30)
    stw r4, 0x78(r3)
    lwz r3, 0x5624(r30)
    stw r0, 0x54(r3)
    lwz r0, 0x563c(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8036FC58_000013F4
    lwz r3, 0x5624(r30)
    li r4, 0x1
    li r0, -0x1
    stw r4, 0x48(r3)
    stw r0, 0x563c(r30)
lbl_fn_8036FC58_000013F4:
    addi r3, r30, 0x6c
    bl fn_803933A4
    lwz r3, lbl_8087F4E8
    li r0, 0x1
    stw r0, 0x88(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036FD4C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x5534(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8036FD4C_00001454
    li r31, 0x1
lbl_fn_8036FD4C_00001454:
    lwz r3, lbl_8087F8A0
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8036FD4C_00001468
    li r31, 0x1
lbl_fn_8036FD4C_00001468:
    lwz r3, lbl_8087F408
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8036FD4C_0000147C
    li r31, 0x1
lbl_fn_8036FD4C_0000147C:
    lwz r3, lbl_8087F890
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8036FD4C_00001490
    li r31, 0x1
lbl_fn_8036FD4C_00001490:
    lwz r3, lbl_8087F048
    bl fn_800F3490
    cmpwi r3, 0x0
    beq lbl_fn_8036FD4C_000014A4
    li r31, 0x1
lbl_fn_8036FD4C_000014A4:
    lwz r3, lbl_8087F490
    bl fn_803D1574
    cmpwi r3, 0x0
    beq lbl_fn_8036FD4C_000014B8
    li r31, 0x1
lbl_fn_8036FD4C_000014B8:
    lwz r3, lbl_8087F8A8
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8036FD4C_000014CC
    li r31, 0x1
lbl_fn_8036FD4C_000014CC:
    lwz r3, lbl_8087F040
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8036FD4C_000014E0
    li r31, 0x1
lbl_fn_8036FD4C_000014E0:
    lwz r3, lbl_8087EEC8
    bl fn_8006D3F8
    cmpwi r3, 0x0
    beq lbl_fn_8036FD4C_000014F4
    li r31, 0x1
lbl_fn_8036FD4C_000014F4:
    lwz r4, 0x5624(r30)
    lwz r3, 0x58(r4)
    lwz r0, 0x54(r4)
    lwz r4, 0x4c(r4)
    add r0, r3, r0
    cmpw r4, r0
    bge lbl_fn_8036FD4C_00001518
    li r31, 0x1
    b lbl_fn_8036FD4C_0000152C
lbl_fn_8036FD4C_00001518:
    cmpwi r31, 0x0
    beq lbl_fn_8036FD4C_0000152C
    lwz r3, lbl_8087F518
    li r4, 0x1
    bl fn_8046ECDC
lbl_fn_8036FD4C_0000152C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036FE74(void)
{
    nofralloc
    lis r6, lbl_807C7030@ha
    addi r6, r6, lbl_807C7030@l
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0x8(r4)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0x8(r5)
    psq_st f1, 0x0(r5), 0, 0
    lwz r6, 0x553c(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8036FE74_000015A8
    addi r3, r6, 0x4f64
    addi r6, r6, 0x4f70
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r4)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0x8(r5)
    psq_st f1, 0x0(r5), 0, 0
    blr
lbl_fn_8036FE74_000015A8:
    lwz r9, 0x5534(r3)
    cmpwi r9, 0x0
    beq lbl_fn_8036FE74_0000166C
    lwz r10, 0x78(r9)
    li r7, 0x0
    lwz r6, 0x5520(r3)
    li r8, 0x0
    mtctr r10
    cmplwi r10, 0x0
    ble lbl_fn_8036FE74_000015F8
lbl_fn_8036FE74_000015D0:
    lwz r3, 0x7c(r9)
    lwzx r0, r3, r8
    cmpw r6, r0
    bne lbl_fn_8036FE74_000015EC
    mulli r0, r7, 0x28
    add r3, r3, r0
    b lbl_fn_8036FE74_000015FC
lbl_fn_8036FE74_000015EC:
    addi r8, r8, 0x28
    addi r7, r7, 0x1
    bdnz lbl_fn_8036FE74_000015D0
lbl_fn_8036FE74_000015F8:
    li r3, 0x0
lbl_fn_8036FE74_000015FC:
    cmpwi r3, 0x0
    bne lbl_fn_8036FE74_00001648
    lwz r8, 0x70(r9)
    li r6, 0x0
    li r7, 0x0
    mtctr r10
    cmplwi r10, 0x0
    ble lbl_fn_8036FE74_00001644
lbl_fn_8036FE74_0000161C:
    lwz r3, 0x7c(r9)
    lwzx r0, r3, r7
    cmpw r8, r0
    bne lbl_fn_8036FE74_00001638
    mulli r0, r6, 0x28
    add r3, r3, r0
    b lbl_fn_8036FE74_00001648
lbl_fn_8036FE74_00001638:
    addi r7, r7, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_8036FE74_0000161C
lbl_fn_8036FE74_00001644:
    li r3, 0x0
lbl_fn_8036FE74_00001648:
    cmpwi r3, 0x0
    beqlr
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x8(r4)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x4(r5)
    blr
lbl_fn_8036FE74_0000166C:
    lwz r6, 0x64(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8036FE74_000016A4
    addi r3, r6, 0x4f64
    addi r6, r6, 0x4f70
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r4)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0x8(r5)
    psq_st f1, 0x0(r5), 0, 0
    blr
lbl_fn_8036FE74_000016A4:
    lwz r9, 0x10d8(r3)
    cmpwi r9, 0x0
    beqlr
    lwz r10, 0x78(r9)
    li r7, 0x0
    lwz r6, 0x58(r3)
    li r8, 0x0
    mtctr r10
    cmplwi r10, 0x0
    ble lbl_fn_8036FE74_000016F4
lbl_fn_8036FE74_000016CC:
    lwz r3, 0x7c(r9)
    lwzx r0, r3, r8
    cmpw r6, r0
    bne lbl_fn_8036FE74_000016E8
    mulli r0, r7, 0x28
    add r3, r3, r0
    b lbl_fn_8036FE74_000016F8
lbl_fn_8036FE74_000016E8:
    addi r8, r8, 0x28
    addi r7, r7, 0x1
    bdnz lbl_fn_8036FE74_000016CC
lbl_fn_8036FE74_000016F4:
    li r3, 0x0
lbl_fn_8036FE74_000016F8:
    cmpwi r3, 0x0
    bne lbl_fn_8036FE74_00001744
    lwz r8, 0x70(r9)
    li r6, 0x0
    li r7, 0x0
    mtctr r10
    cmplwi r10, 0x0
    ble lbl_fn_8036FE74_00001740
lbl_fn_8036FE74_00001718:
    lwz r3, 0x7c(r9)
    lwzx r0, r3, r7
    cmpw r8, r0
    bne lbl_fn_8036FE74_00001734
    mulli r0, r6, 0x28
    add r3, r3, r0
    b lbl_fn_8036FE74_00001744
lbl_fn_8036FE74_00001734:
    addi r7, r7, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_8036FE74_00001718
lbl_fn_8036FE74_00001740:
    li r3, 0x0
lbl_fn_8036FE74_00001744:
    cmpwi r3, 0x0
    beqlr
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x8(r4)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x14(r3)
    stfs f0, 0x4(r5)
    blr
}

asm void fn_80370094(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r4
    stw r30, 0x108(r1)
    mr r30, r3
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80370094_0000182C
    lwz r0, 0x10d0(r3)
    cmpw r0, r4
    ble lbl_fn_80370094_000017D8
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x100
    bl memset
    lis r4, lbl_8074DC1C@ha
    lwz r5, 0x10d0(r30)
    addi r4, r4, lbl_8074DC1C@l
    mr r6, r31
    addi r3, r1, 0x8
    addi r4, r4, 0x36
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80370094_000017D8:
    lwz r4, 0x10d0(r30)
    cmpwi r4, 0x0
    blt lbl_fn_80370094_000017F4
    lis r3, 0xf
    addi r0, r3, 0x423f
    cmpw r4, r0
    ble lbl_fn_80370094_0000182C
lbl_fn_80370094_000017F4:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x100
    bl memset
    lis r4, lbl_8074DC1C@ha
    mr r5, r31
    addi r4, r4, lbl_8074DC1C@l
    addi r3, r1, 0x8
    addi r4, r4, 0x5b
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80370094_0000182C:
    stw r31, 0x10d0(r30)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80370174(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    cmplwi r4, 0xfff
    stw r0, 0x114(r1)
    ble lbl_fn_80370174_00001898
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80370174_00001890
    lis r6, lbl_8074DC1C@ha
    mr r5, r4
    addi r6, r6, lbl_8074DC1C@l
    addi r3, r1, 0x8
    addi r4, r6, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80370174_00001890:
    li r3, 0x0
    b lbl_fn_80370174_000018A4
lbl_fn_80370174_00001898:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x10e4(r3)
lbl_fn_80370174_000018A4:
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803701E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    beq lbl_fn_803701E0_000019E0
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_803701E0_000019E0
    cmpwi r3, 0x7
    blt lbl_fn_803701E0_000018F4
    b lbl_fn_803701E0_000019E0
lbl_fn_803701E0_000018F4:
    mulli r0, r3, 0x43c
    lwz r3, lbl_8087F4F0
    cmpwi r29, 0x0
    add r3, r3, r0
    addi r29, r3, 0x6694
    beq lbl_fn_803701E0_00001968
    srawi r0, r28, 5
    slwi r3, r28, 27
    srwi r5, r28, 31
    li r4, 0x1
    addze r0, r0
    subf r3, r5, r3
    slwi r31, r0, 2
    rotlwi r0, r3, 5
    add r5, r0, r5
    add r3, r29, r31
    lwz r0, 0x44(r3)
    slw r30, r4, r5
    or r0, r0, r30
    stw r0, 0x44(r3)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_803701E0_000019A0
    mr r5, r27
    mr r6, r28
    li r4, 0x14
    li r7, 0x0
    bl fn_801092C8
    b lbl_fn_803701E0_000019A0
lbl_fn_803701E0_00001968:
    srawi r0, r28, 5
    slwi r3, r28, 27
    srwi r5, r28, 31
    li r4, 0x1
    addze r0, r0
    subf r3, r5, r3
    slwi r31, r0, 2
    rotlwi r0, r3, 5
    add r5, r0, r5
    add r3, r29, r31
    lwz r0, 0x44(r3)
    slw r30, r4, r5
    andc r0, r0, r30
    stw r0, 0x44(r3)
lbl_fn_803701E0_000019A0:
    cmpwi r27, 0x0
    beq lbl_fn_803701E0_000019E0
    add r3, r29, r31
    lwz r0, 0x44(r3)
    and r0, r30, r0
    cmplw r30, r0
    bne lbl_fn_803701E0_000019D0
    add r3, r27, r31
    lwz r0, 0x9c0(r3)
    or r0, r0, r30
    stw r0, 0x9c0(r3)
    b lbl_fn_803701E0_000019E0
lbl_fn_803701E0_000019D0:
    add r3, r27, r31
    lwz r0, 0x9c0(r3)
    andc r0, r0, r30
    stw r0, 0x9c0(r3)
lbl_fn_803701E0_000019E0:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
