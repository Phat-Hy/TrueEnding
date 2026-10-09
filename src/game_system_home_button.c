#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80049B2C(void);
extern void fn_80049B74(void);
extern void fn_8004A1D4(void);
extern void fn_8004B0E4(void);
extern void fn_8004B1EC(void);
extern void fn_8005B3CC(void);
extern void fn_800616C0(void);
extern void fn_80063D3C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008771C(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800BFAC8(void);
extern void fn_800C3184(void);
extern void fn_800C31E4(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB480(void);
extern void fn_800CB518(void);
extern void fn_800CB5B4(void);
extern void fn_800CB5C8(void);
extern void fn_800CB69C(void);
extern void fn_800CB6B0(void);
extern void fn_800CB6E4(void);
extern void fn_800CB6F8(void);
extern void fn_800CFDC8(void);
extern void fn_800D03AC(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC288(void);
extern void fn_800EC654(void);
extern void fn_800EDFE8(void);
extern void fn_80205BE8(void);
extern void fn_80214ED4(void);
extern void fn_80214F38(void);
extern void fn_80215018(void);
extern void fn_80215084(void);
extern void fn_8035E244(void);
extern void fn_8035E2A0(void);
extern void fn_8035E730(void);
extern void fn_8035EA2C(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80373148(void);
extern void fn_803E907C(void);
extern void fn_803E9608(void);
extern void fn_805A38F4(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_8068236C(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074B538[];
extern u8 lbl_8074B658[];
extern u8 lbl_8074B6B8[];
extern u8 lbl_80775A88[];
extern u8 lbl_80789DC8[];
extern u8 lbl_80789E10[];
extern u8 lbl_80789E58[];

/* Small data declarations */
extern u32 lbl_8087D6E8;
extern u32 lbl_8087D6EC;
extern u32 lbl_8087DCB0;
extern u32 lbl_8087DCB4;
extern u32 lbl_8087DCB8;
extern u32 lbl_8087DCBC;
extern u32 lbl_8087DCC0;
extern u32 lbl_8087DCC4;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F540;
extern u32 lbl_80885670;
extern u32 lbl_80885674;
extern u32 lbl_80885694;
extern u32 lbl_80885698;
extern u32 lbl_8088569C;
extern u32 lbl_808856A0;
extern u32 lbl_808856A4;
extern u32 lbl_808856A8;
extern u32 lbl_808856AC;
extern u32 lbl_808856B0;

/* Function declarations */
void fn_8035FBF8(void);
void fn_8035FC00(void);
void fn_8035FC08(void);
void fn_8035FC10(void);
void fn_8035FCB4(void);
void fn_8035FD40(void);
void fn_8035FDE4(void);
void fn_8035FE88(void);
void fn_8035FF24(void);
void fn_8035FF34(void);
void fn_8035FF44(void);
void fn_8035FF94(void);
void fn_803601E4(void);
void fn_80360230(void);
void fn_80360504(void);
void fn_8036055C(void);
void fn_80360574(void);
void fn_803605EC(void);
void fn_803606CC(void);
void fn_80360780(void);
void fn_80360848(void);
void fn_803608A4(void);
void fn_803608A8(void);
void fn_8036097C(void);
void fn_80360A2C(void);
void fn_80360B00(void);
void fn_80360B40(void);
void fn_80360C5C(void);
void fn_80360CDC(void);
void fn_80360EA0(void);
void fn_80360EA4(void);
void fn_8036102C(void);
void fn_8036103C(void);
void fn_80361100(void);
void fn_8036111C(void);
void fn_803611E8(void);
void fn_8036126C(void);
void fn_803612DC(void);
void fn_803612E0(void);
void fn_803612F4(void);
void fn_80361414(void);
void fn_803614E8(void);

asm void fn_8035FBF8(void)
{
    nofralloc
    lwz r3, 0x7c(r3)
    blr
}

asm void fn_8035FC00(void)
{
    nofralloc
    lwz r3, lbl_8087EE90
    blr
}

asm void fn_8035FC08(void)
{
    nofralloc
    stw r4, 0x64(r3)
    blr
}

asm void fn_8035FC10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035FC10_00000050
    lis r4, fn_8035E244@ha
    mr r3, r0
    addi r4, r4, fn_8035E244@l
    bl fn_80695A50
lbl_fn_8035FC10_00000050:
    cmpwi r31, 0x0
    stw r31, 0x0(r30)
    beq lbl_fn_8035FC10_0000009C
    mulli r3, r31, 0x5c
    li r4, 0x0
    la r5, lbl_8087DCC4
    la r6, lbl_8087DCC0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8035FCB4@ha
    lis r5, fn_8035E244@ha
    mr r7, r31
    li r6, 0x5c
    addi r4, r4, fn_8035FCB4@l
    addi r5, r5, fn_8035E244@l
    bl fn_80695720
    stw r3, 0x4(r30)
    b lbl_fn_8035FC10_000000A4
lbl_fn_8035FC10_0000009C:
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8035FC10_000000A4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035FCB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80885674
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x6
    lfs f1, lbl_80885670
    li r4, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    li r5, 0x20
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    stw r6, 0x28(r3)
    stfs f1, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stw r6, 0x44(r3)
    stw r6, 0x48(r3)
    stw r6, 0x4c(r3)
    stw r6, 0x50(r3)
    stw r6, 0x54(r3)
    addi r3, r3, 0x8
    bl memset
    addi r3, r31, 0x58
    bl fn_800CB360
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035FD40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035FD40_00000180
    lis r4, fn_8035E2A0@ha
    mr r3, r0
    addi r4, r4, fn_8035E2A0@l
    bl fn_80695A50
lbl_fn_8035FD40_00000180:
    cmpwi r31, 0x0
    stw r31, 0x0(r30)
    beq lbl_fn_8035FD40_000001CC
    mulli r3, r31, 0xa8
    li r4, 0x0
    la r5, lbl_8087DCBC
    la r6, lbl_8087DCB8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8035FDE4@ha
    lis r5, fn_8035E2A0@ha
    mr r7, r31
    li r6, 0xa8
    addi r4, r4, fn_8035FDE4@l
    addi r5, r5, fn_8035E2A0@l
    bl fn_80695720
    stw r3, 0x4(r30)
    b lbl_fn_8035FD40_000001D4
lbl_fn_8035FD40_000001CC:
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8035FD40_000001D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035FDE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80885674
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x5
    lfs f1, lbl_80885670
    li r5, 0x20
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x0(r3)
    stw r31, 0x4(r3)
    stw r0, 0x8(r3)
    stw r31, 0x2c(r3)
    stfs f1, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stw r31, 0x48(r3)
    stw r31, 0x4c(r3)
    stw r31, 0x50(r3)
    stw r31, 0x54(r3)
    stw r31, 0x58(r3)
    addi r3, r3, 0xc
    bl memset
    lfs f0, lbl_80885670
    mr r3, r30
    stw r31, 0x5c(r30)
    stw r31, 0x9c(r30)
    stfs f0, 0xa0(r30)
    stw r31, 0xa4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035FE88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8035FE88_000002C4
    beq lbl_fn_8035FE88_000002C4
    subi r3, r5, 0x10
    bl fn_80084C24
lbl_fn_8035FE88_000002C4:
    cmpwi r31, 0x0
    stw r31, 0x0(r30)
    beq lbl_fn_8035FE88_0000030C
    slwi r3, r31, 3
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087DCB4
    la r6, lbl_8087DCB0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8035FF24@ha
    mr r7, r31
    addi r4, r4, fn_8035FF24@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    stw r3, 0x4(r30)
    b lbl_fn_8035FE88_00000314
lbl_fn_8035FE88_0000030C:
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8035FE88_00000314:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035FF24(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_8035FF34(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    blr
}

asm void fn_8035FF44(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r5, 0x0
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8035FF44_00000394
lbl_fn_8035FF44_00000364:
    lwz r0, 0x58(r3)
    add r6, r0, r7
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8035FF44_0000038C
    cmpw r5, r4
    bne lbl_fn_8035FF44_00000388
    lwz r3, 0x0(r6)
    blr
lbl_fn_8035FF44_00000388:
    addi r5, r5, 0x1
lbl_fn_8035FF44_0000038C:
    addi r7, r7, 0x5c
    bdnz lbl_fn_8035FF44_00000364
lbl_fn_8035FF44_00000394:
    li r3, 0x0
    blr
}

asm void fn_8035FF94(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r0, 0x5c(r3)
    mr r29, r5
    mr r27, r3
    mr r28, r4
    mr r30, r6
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8035FF94_000003F4
lbl_fn_8035FF94_000003D4:
    lwz r0, 0x60(r3)
    add r31, r0, r5
    lwzx r0, r5, r0
    cmpw r0, r4
    bne lbl_fn_8035FF94_000003EC
    b lbl_fn_8035FF94_000003F8
lbl_fn_8035FF94_000003EC:
    addi r5, r5, 0xa8
    bdnz lbl_fn_8035FF94_000003D4
lbl_fn_8035FF94_000003F4:
    li r31, 0x0
lbl_fn_8035FF94_000003F8:
    lfs f1, lbl_80885670
    li r6, 0x0
    lfs f0, lbl_80885674
    li r0, 0x1
    stw r6, 0x28(r1)
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x20
    stfs f1, 0x2c(r1)
    stfs f0, 0x30(r1)
    stw r6, 0x34(r1)
    stw r6, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r0, 0x44(r1)
    bl memset
    lwz r3, 0x8(r1)
    cmpwi r31, 0x0
    lwz r0, 0xc(r1)
    stw r0, 0x144(r27)
    stw r3, 0x140(r27)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x14c(r27)
    stw r3, 0x148(r27)
    lwz r3, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x154(r27)
    stw r3, 0x150(r27)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x15c(r27)
    stw r3, 0x158(r27)
    lwz r0, 0x28(r1)
    stw r0, 0x160(r27)
    lfs f0, 0x2c(r1)
    stfs f0, 0x164(r27)
    lfs f0, 0x30(r1)
    stfs f0, 0x168(r27)
    lwz r0, 0x34(r1)
    stw r0, 0x16c(r27)
    lwz r0, 0x38(r1)
    stw r0, 0x170(r27)
    lfs f0, 0x3c(r1)
    stfs f0, 0x174(r27)
    lwz r0, 0x40(r1)
    stw r0, 0x178(r27)
    lwz r0, 0x44(r1)
    stw r0, 0x17c(r27)
    beq lbl_fn_8035FF94_00000540
    lis r4, lbl_8074B538@ha
    addi r3, r27, 0x140
    addi r4, r4, lbl_8074B538@l
    addi r5, r31, 0xc
    addi r4, r4, 0x95
    crclr 6
    bl sprintf
    lwz r0, 0x7c(r27)
    lwz r3, 0x4(r31)
    cmpwi r0, 0x0
    stw r3, 0x160(r27)
    bne lbl_fn_8035FF94_00000518
    lwz r0, 0x80(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8035FF94_00000520
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_8035FF94_00000520
    lwz r4, 0x4(r31)
    bl fn_80049B2C
    cmpwi r3, 0x0
    beq lbl_fn_8035FF94_00000520
lbl_fn_8035FF94_00000518:
    li r0, 0x0
    stw r0, 0x160(r27)
lbl_fn_8035FF94_00000520:
    lfs f0, 0x30(r31)
    stfs f0, 0x164(r27)
    lfs f0, 0x44(r31)
    stfs f0, 0x168(r27)
    lwz r0, 0x9c(r31)
    stw r0, 0x170(r27)
    lfs f0, 0xa0(r31)
    stfs f0, 0x174(r27)
lbl_fn_8035FF94_00000540:
    lwz r0, 0x84(r27)
    stw r29, 0x178(r27)
    cmpw r28, r0
    stw r30, 0x17c(r27)
    bne lbl_fn_8035FF94_00000564
    lwz r3, 0x120(r27)
    lwz r0, 0x160(r27)
    cmpw r3, r0
    beq lbl_fn_8035FF94_000005D4
lbl_fn_8035FF94_00000564:
    lwz r0, 0x180(r27)
    lwz r3, 0x84(r27)
    cmpwi r0, 0x2
    stw r3, 0x88(r27)
    stw r28, 0x84(r27)
    beq lbl_fn_8035FF94_0000058C
    lwz r3, 0xb8(r27)
    bl fn_8004B0E4
    cmpwi r3, 0x0
    beq lbl_fn_8035FF94_000005A8
lbl_fn_8035FF94_0000058C:
    lwz r3, 0xb8(r27)
    li r4, 0x0
    bl fn_8004B1EC
    lwz r3, 0xb8(r27)
    addi r3, r3, 0x8
    bl fn_800CB480
    b lbl_fn_8035FF94_000005CC
lbl_fn_8035FF94_000005A8:
    lwz r0, 0x180(r27)
    cmpwi r0, 0x5
    bne lbl_fn_8035FF94_000005CC
    lwz r3, 0xb8(r27)
    mr r4, r29
    bl fn_8004B1EC
    lwz r3, 0xb8(r27)
    addi r3, r3, 0x8
    bl fn_800CB480
lbl_fn_8035FF94_000005CC:
    li r0, 0x1
    stw r0, 0x180(r27)
lbl_fn_8035FF94_000005D4:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803601E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x130(r3)
    cmpw r0, r4
    beq lbl_fn_803601E4_00000620
    lwz r3, lbl_8087EE90
    bl fn_8004A1D4
    stw r31, 0x130(r30)
lbl_fn_803601E4_00000620:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80360230(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    mulli r0, r4, 0x5c
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r5, lbl_8087EE90
    lwz r4, 0x58(r3)
    cmpwi r5, 0x0
    add r31, r4, r0
    lwzx r30, r4, r0
    addi r29, r31, 0x58
    beq lbl_fn_80360230_00000684
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    bne lbl_fn_80360230_0000068C
lbl_fn_80360230_00000684:
    li r3, 0x0
    b lbl_fn_80360230_00000700
lbl_fn_80360230_0000068C:
    lwz r4, 0x28(r31)
    mr r3, r5
    bl fn_80049B2C
    cmpwi r3, 0x0
    bne lbl_fn_80360230_000006A8
    li r3, 0x1
    b lbl_fn_80360230_00000700
lbl_fn_80360230_000006A8:
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80360230_000006C8
    addi r3, r31, 0x8
    li r4, 0x8
    li r5, 0x0
    bl fn_805A38F4
    b lbl_fn_80360230_00000700
lbl_fn_80360230_000006C8:
    lwz r3, 0xb4(r28)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80360230_000006FC
    lwz r3, 0xb8(r28)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80360230_000006FC
    addi r3, r31, 0x8
    li r4, 0x2
    li r5, 0x0
    bl fn_805A38F4
    b lbl_fn_80360230_00000700
lbl_fn_80360230_000006FC:
    li r3, 0x0
lbl_fn_80360230_00000700:
    cmpwi r3, 0x0
    bne lbl_fn_80360230_00000710
    li r3, 0x0
    b lbl_fn_80360230_000008EC
lbl_fn_80360230_00000710:
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    beq lbl_fn_80360230_000007B8
    lwz r3, lbl_8087EFE8
    li r0, 0x2
    stw r0, 0x34d0(r3)
    lwz r0, 0x4(r31)
    cmpwi r0, 0x4
    beq lbl_fn_80360230_0000076C
    lfs f1, 0x2c(r31)
    addi r3, r1, 0x14
    addi r4, r31, 0x8
    addi r5, r31, 0x30
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    mr r3, r29
    addi r4, r1, 0x14
    bl fn_800CB440
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80360230_0000079C
lbl_fn_80360230_0000076C:
    lfs f1, 0x2c(r31)
    addi r3, r1, 0x10
    addi r4, r31, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    mr r3, r29
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80360230_0000079C:
    mr r3, r29
    li r4, 0x3c
    bl fn_800CB518
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x34d0(r3)
    b lbl_fn_80360230_0000089C
lbl_fn_80360230_000007B8:
    addi r3, r31, 0x8
    li r4, 0x8
    li r5, 0x0
    bl fn_805A38F4
    cmpwi r3, 0x0
    beq lbl_fn_80360230_0000089C
    lwz r0, 0x4(r31)
    cmpwi r0, 0x4
    beq lbl_fn_80360230_00000840
    lwz r28, lbl_8087F498
    bl fn_80680CF8
    lis r4, 0x6666
    lfs f1, 0x2c(r31)
    addi r0, r4, 0x6667
    addi r5, r31, 0x8
    mulhw r0, r0, r3
    mr r4, r28
    addi r6, r31, 0x30
    li r8, 0x0
    srawi r0, r0, 1
    srwi r7, r0, 31
    add r0, r0, r7
    mulli r0, r0, 0x5
    subf r0, r0, r3
    addi r3, r1, 0xc
    mulli r7, r0, 0xbb8
    bl fn_803E907C
    mr r3, r29
    addi r4, r1, 0xc
    bl fn_800CB440
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80360230_0000089C
lbl_fn_80360230_00000840:
    lwz r28, lbl_8087F498
    bl fn_80680CF8
    lis r4, 0x6666
    lfs f1, 0x2c(r31)
    addi r0, r4, 0x6667
    addi r5, r31, 0x8
    mulhw r0, r0, r3
    mr r4, r28
    li r7, 0x0
    srawi r0, r0, 1
    srwi r6, r0, 31
    add r0, r0, r6
    mulli r0, r0, 0x5
    subf r0, r0, r3
    addi r3, r1, 0x8
    mulli r6, r0, 0xbb8
    bl fn_803E9608
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80360230_0000089C:
    lfs f1, 0x40(r31)
    mr r3, r29
    li r4, 0x0
    bl fn_800CB69C
    lfs f1, 0x3c(r31)
    mr r3, r29
    li r4, 0x1
    bl fn_800CB6B0
    cmpwi r30, 0x0
    beq lbl_fn_80360230_000008DC
    lwz r4, 0x0(r29)
    mr r3, r30
    neg r0, r4
    or r0, r0, r4
    srwi r4, r0, 31
    bl fn_8036102C
lbl_fn_80360230_000008DC:
    lwz r3, 0x0(r29)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_80360230_000008EC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80360504(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r0, r4
    mulli r0, r0, 0x5c
    mr r4, r5
    stw r31, 0xc(r1)
    li r5, 0x0
    lwz r3, 0x58(r3)
    lwzux r31, r3, r0
    addi r3, r3, 0x58
    bl fn_800CB5C8
    cmpwi r31, 0x0
    beq lbl_fn_80360504_00000950
    mr r3, r31
    li r4, 0x0
    bl fn_8036102C
lbl_fn_80360504_00000950:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036055C(void)
{
    nofralloc
    mulli r0, r4, 0x5c
    lwz r3, 0x58(r3)
    add r4, r3, r0
    addi r3, r4, 0x58
    addi r4, r4, 0x30
    b fn_800CB6E4
}

asm void fn_80360574(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mulli r0, r4, 0x5c
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r3, 0x58(r3)
    add r31, r3, r0
    addi r30, r31, 0x58
    mr r3, r30
    addi r4, r31, 0x30
    bl fn_800CB6E4
    lfs f1, 0x3c(r31)
    mr r3, r30
    li r4, 0x1
    bl fn_800CB6B0
    lfs f1, 0x2c(r31)
    mr r3, r30
    li r4, 0x0
    bl fn_800CB5B4
    lfs f1, 0x40(r31)
    mr r3, r30
    li r4, 0x0
    bl fn_800CB69C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803605EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    fmr f31, f1
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x2
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, lbl_8087EFE8
    bl fn_800CFDC8
    cmpwi r3, 0x0
    beq lbl_fn_803605EC_00000A38
    lfs f0, 0x8(r3)
    b lbl_fn_803605EC_00000A3C
lbl_fn_803605EC_00000A38:
    lfs f0, lbl_80885674
lbl_fn_803605EC_00000A3C:
    stfs f0, 0x188(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803605EC_00000A90
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803605EC_00000A90
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803605EC_00000A90
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x28
    bne lbl_fn_803605EC_00000A90
    lwz r0, 0x50(r3)
    cmpwi r0, 0x9
    blt lbl_fn_803605EC_00000A90
    cmpwi r0, 0xc
    bgt lbl_fn_803605EC_00000A90
    lfs f31, lbl_80885670
lbl_fn_803605EC_00000A90:
    cmpwi r31, 0x3c
    stfs f31, 0x184(r30)
    bge lbl_fn_803605EC_00000AA0
    li r31, 0x3c
lbl_fn_803605EC_00000AA0:
    lwz r3, lbl_8087EFE8
    mr r5, r31
    lfs f1, 0x184(r30)
    li r4, 0x2
    bl fn_800D03AC
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803606CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r6
    beq lbl_fn_803606CC_00000B04
    lwz r0, 0x78(r3)
    andc r0, r0, r5
    stw r0, 0x78(r3)
    b lbl_fn_803606CC_00000B10
lbl_fn_803606CC_00000B04:
    lwz r0, 0x78(r3)
    or r0, r0, r5
    stw r0, 0x78(r3)
lbl_fn_803606CC_00000B10:
    cmpwi r4, 0x0
    bne lbl_fn_803606CC_00000B74
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803606CC_00000B74
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_803606CC_00000B68
lbl_fn_803606CC_00000B30:
    lwz r0, 0x58(r27)
    mr r4, r28
    li r5, 0x0
    add r3, r0, r31
    lwzx r30, r31, r0
    addi r3, r3, 0x58
    bl fn_800CB5C8
    cmpwi r30, 0x0
    beq lbl_fn_803606CC_00000B60
    mr r3, r30
    li r4, 0x0
    bl fn_8036102C
lbl_fn_803606CC_00000B60:
    addi r29, r29, 0x1
    addi r31, r31, 0x5c
lbl_fn_803606CC_00000B68:
    lwz r0, 0x54(r27)
    cmplw r29, r0
    blt lbl_fn_803606CC_00000B30
lbl_fn_803606CC_00000B74:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80360780(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80360780_00000BC0
    lwz r0, 0x7c(r3)
    andc r0, r0, r5
    stw r0, 0x7c(r3)
    b lbl_fn_80360780_00000BCC
lbl_fn_80360780_00000BC0:
    lwz r0, 0x7c(r3)
    or r0, r0, r5
    stw r0, 0x7c(r3)
lbl_fn_80360780_00000BCC:
    cmpwi r4, 0x0
    beq lbl_fn_80360780_00000BEC
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80360780_00000C34
    mr r3, r29
    bl fn_8035EA2C
    b lbl_fn_80360780_00000C34
lbl_fn_80360780_00000BEC:
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80360780_00000C34
    lwz r3, 0xb4(r3)
    mr r4, r30
    bl fn_8004B1EC
    lwz r3, 0xb4(r29)
    addi r3, r3, 0x8
    bl fn_800CB480
    li r31, 0x0
    stw r31, 0x120(r29)
    lwz r3, 0xb8(r29)
    mr r4, r30
    bl fn_8004B1EC
    lwz r3, 0xb8(r29)
    addi r3, r3, 0x8
    bl fn_800CB480
    stw r31, 0x160(r29)
lbl_fn_80360780_00000C34:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80360848(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_80360848_00000C68
    lwz r0, 0x80(r3)
    andc r0, r0, r5
    stw r0, 0x80(r3)
    b lbl_fn_80360848_00000C74
lbl_fn_80360848_00000C68:
    lwz r0, 0x80(r3)
    or r0, r0, r5
    stw r0, 0x80(r3)
lbl_fn_80360848_00000C74:
    cmpwi r4, 0x0
    beq lbl_fn_80360848_00000C8C
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    bnelr
    b fn_8035EA2C
lbl_fn_80360848_00000C8C:
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x84(r3)
    mr r5, r6
    li r6, 0x1
    b fn_8035FF94
    blr
}

asm void fn_803608A4(void)
{
    nofralloc
    blr
}

asm void fn_803608A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803608A8_00000D70
    lwz r3, 0xb4(r3)
    li r5, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803608A8_00000CF4
    lwzu r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803608A8_00000CF4
    bl fn_800CB6F8
    mr r5, r3
lbl_fn_803608A8_00000CF4:
    cmpwi r5, 0x0
    bne lbl_fn_803608A8_00000D60
    lwz r0, 0x54(r31)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803608A8_00000D60
lbl_fn_803608A8_00000D10:
    lwz r0, 0x58(r31)
    add r3, r0, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_fn_803608A8_00000D58
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803608A8_00000D58
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803608A8_00000D58
    lwz r0, 0x58(r6)
    cmpwi r0, 0x0
    beq lbl_fn_803608A8_00000D58
    addi r3, r3, 0x58
    bl fn_800CB6F8
    mr r5, r3
    b lbl_fn_803608A8_00000D60
lbl_fn_803608A8_00000D58:
    addi r4, r4, 0x5c
    bdnz lbl_fn_803608A8_00000D10
lbl_fn_803608A8_00000D60:
    lwz r3, lbl_8087F430
    li r4, 0x393
    li r6, 0x0
    bl fn_80370320
lbl_fn_803608A8_00000D70:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036097C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8036097C_00000E20
    cmpwi r4, 0x4
    bne lbl_fn_8036097C_00000DB0
    li r4, 0x3
lbl_fn_8036097C_00000DB0:
    cmpwi r8, 0x0
    li r0, 0x0
    stw r0, 0x1a0(r3)
    beq lbl_fn_8036097C_00000DD8
    lwz r3, lbl_8087F430
    li r4, 0x393
    bl fn_80370174
    bl fn_80214F38
    stw r3, 0x1a0(r31)
    b lbl_fn_8036097C_00000DF0
lbl_fn_8036097C_00000DD8:
    mr r3, r4
    mr r4, r5
    mr r5, r6
    mr r6, r7
    bl fn_80214ED4
    stw r3, 0x1a0(r31)
lbl_fn_8036097C_00000DF0:
    lwz r3, 0x1a0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8036097C_00000E14
    addi r4, r1, 0x8
    bl fn_80215018
    cmpwi r3, 0x0
    beq lbl_fn_8036097C_00000E14
    addi r3, r1, 0x8
    bl fn_800C3184
lbl_fn_8036097C_00000E14:
    li r0, 0x0
    stw r0, 0x198(r31)
    stw r0, 0x19c(r31)
lbl_fn_8036097C_00000E20:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80360A2C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80360A2C_00000E5C
    li r3, 0x0
    b lbl_fn_80360A2C_00000EF4
lbl_fn_80360A2C_00000E5C:
    bl fn_800C31E4
    cmpwi r3, 0x0
    bne lbl_fn_80360A2C_00000EF0
    lwz r3, 0x1a0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80360A2C_00000ED8
    addi r4, r1, 0x10
    bl fn_80215084
    cmpwi r3, 0x0
    beq lbl_fn_80360A2C_00000ED8
    lwz r4, lbl_8087EFE8
    li r0, 0x2
    lfs f1, lbl_80885670
    addi r3, r1, 0x8
    stw r0, 0x34d0(r4)
    addi r4, r1, 0x10
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r31, 0x194
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r5, lbl_8087EFE8
    li r0, 0x0
    addi r3, r31, 0x194
    li r4, 0x3c
    stw r0, 0x34d0(r5)
    bl fn_800CB518
lbl_fn_80360A2C_00000ED8:
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x198(r31)
    li r3, 0x0
    stw r0, 0x19c(r31)
    b lbl_fn_80360A2C_00000EF4
lbl_fn_80360A2C_00000EF0:
    li r3, 0x1
lbl_fn_80360A2C_00000EF4:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80360B00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x3c
    li r5, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x194
    bl fn_800CB5C8
    li r0, 0x1
    stw r0, 0x19c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80360B40(void)
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
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r30, 0x4
    li r5, 0x20
    bl fn_8068236C
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_80360B40_00000F94
    addi r4, r30, 0x4
    bl fn_80049B74
    stw r3, 0x24(r30)
lbl_fn_80360B40_00000F94:
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x28(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x38(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x3c(r30)
    mr r3, r31
    bl fn_8005B3CC
    mr r3, r31
    bl fn_8005B3CC
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x40(r30)
    mr r3, r31
    bl fn_8005B3CC
    mr r3, r31
    bl fn_8005B3CC
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x44(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x48(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4c(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x50(r30)
    mr r3, r31
    bl fn_8005B3CC
    mr r3, r31
    bl fn_8005B3CC
    mr r3, r31
    bl fn_8005B3CC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80360C5C(void)
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
    beq lbl_fn_80360C5C_000010C8
    addic. r0, r3, 0x60
    beq lbl_fn_80360C5C_000010AC
    lwz r4, 0x60(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80360C5C_000010AC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80360C5C_000010AC
    bl fn_800897D8
lbl_fn_80360C5C_000010AC:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80360C5C_000010C8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80360C5C_000010C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80360CDC(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r4
    mr r3, r28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4c(r31)
    mr r3, r28
    bl fn_8005B3CC
    lwz r3, 0x50(r31)
    mr r4, r28
    bl fn_80360B40
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r28
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r4, lbl_8087F418
    cmpwi r4, 0x0
    beq lbl_fn_80360CDC_00001288
    lwz r3, lbl_8087F0A8
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80360CDC_00001288
    lwz r28, 0x1ac(r4)
    cmpwi r28, 0x0
    beq lbl_fn_80360CDC_00001288
    lwz r7, 0x50(r31)
    lis r5, lbl_8074B658@ha
    lis r4, lbl_8074B6B8@ha
    lwz r6, 0x4c(r31)
    lwz r0, 0x0(r7)
    addi r5, r5, lbl_8074B658@l
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074B6B8@l
    slwi r0, r0, 2
    addi r7, r7, 0x4
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    lwz r0, 0x60(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80360CDC_000011D8
    cmpwi r28, 0x0
    beq lbl_fn_80360CDC_000011D8
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80360CDC_000011D8
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0x60(r31)
    mr r28, r3
    b lbl_fn_80360CDC_000011DC
lbl_fn_80360CDC_000011D8:
    li r28, 0x0
lbl_fn_80360CDC_000011DC:
    lwz r5, 0x50(r31)
    lis r29, lbl_8074B6B8@ha
    addi r29, r29, lbl_8074B6B8@l
    lis r30, fn_80361100@ha
    lfs f1, lbl_80885694
    mr r3, r28
    lfs f2, lbl_80885698
    mr r7, r31
    lfs f3, lbl_8088569C
    addi r4, r29, 0xb
    addi r5, r5, 0x2c
    addi r6, r30, fn_80361100@l
    bl fn_80087E9C
    lfs f1, lbl_8088569C
    mr r3, r28
    lwz r5, 0x50(r31)
    mr r7, r31
    fmr f3, f1
    lfs f2, lbl_80885698
    addi r4, r29, 0x14
    addi r5, r5, 0x38
    addi r6, r30, fn_80361100@l
    bl fn_8008771C
    lwz r5, 0x50(r31)
    mr r3, r28
    lfs f1, lbl_808856A0
    mr r7, r31
    lfs f2, lbl_808856A4
    addi r4, r29, 0x1d
    lfs f3, lbl_808856A8
    addi r5, r5, 0x28
    addi r6, r30, fn_80361100@l
    bl fn_8008771C
    lwz r5, 0x50(r31)
    mr r3, r28
    lfs f1, lbl_808856A0
    mr r7, r31
    lfs f2, lbl_8088569C
    addi r4, r29, 0x24
    lfs f3, lbl_808856A8
    addi r5, r5, 0x3c
    addi r6, r30, fn_80361100@l
    bl fn_8008771C
lbl_fn_80360CDC_00001288:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80360EA0(void)
{
    nofralloc
    blr
}

asm void fn_80360EA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F418
    cmpwi r0, 0x0
    beq lbl_fn_80360EA4_00001420
    mr r3, r0
    bl fn_8035E730
    cmpwi r3, 0x0
    bne lbl_fn_80360EA4_00001420
    lwz r3, lbl_8087F418
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80360EA4_000012F0
    b lbl_fn_80360EA4_00001420
lbl_fn_80360EA4_000012F0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80360EA4_00001310
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80360EA4_00001310
    cmpwi r0, 0x8
    bne lbl_fn_80360EA4_00001420
lbl_fn_80360EA4_00001310:
    li r0, 0x1
    stw r0, 0x54(r31)
    lwz r3, lbl_8087F418
    lwz r0, 0x50(r3)
    cmpwi r0, 0x5
    beq lbl_fn_80360EA4_00001334
    li r0, 0x0
    stw r0, 0x54(r31)
    b lbl_fn_80360EA4_00001358
lbl_fn_80360EA4_00001334:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80360EA4_00001358
    li r0, 0x0
    stw r0, 0x54(r31)
lbl_fn_80360EA4_00001358:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80360EA4_000013C4
    lwz r4, 0x50(r31)
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80360EA4_000013C4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80360EA4_000013C4
    lwz r0, 0x48(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80360EA4_00001398
    lwz r4, 0x4c(r4)
    bl fn_80370174
    b lbl_fn_80360EA4_000013A0
lbl_fn_80360EA4_00001398:
    lwz r4, 0x4c(r4)
    bl fn_80370A78
lbl_fn_80360EA4_000013A0:
    lwz r4, 0x50(r31)
    lwz r0, 0x50(r4)
    cmpw r3, r0
    bne lbl_fn_80360EA4_000013BC
    li r0, 0x1
    stw r0, 0x54(r31)
    b lbl_fn_80360EA4_000013C4
lbl_fn_80360EA4_000013BC:
    li r0, 0x0
    stw r0, 0x54(r31)
lbl_fn_80360EA4_000013C4:
    lwz r3, 0x5c(r31)
    cmpwi r3, 0x0
    bgt lbl_fn_80360EA4_00001418
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80360EA4_000013F8
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80360EA4_00001420
    lwz r3, lbl_8087F418
    lwz r4, 0x48(r31)
    bl fn_80360230
    b lbl_fn_80360EA4_00001420
lbl_fn_80360EA4_000013F8:
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80360EA4_00001420
    lwz r3, lbl_8087F418
    li r5, 0x3c
    lwz r4, 0x48(r31)
    bl fn_80360504
    b lbl_fn_80360EA4_00001420
lbl_fn_80360EA4_00001418:
    subi r0, r3, 0x1
    stw r0, 0x5c(r31)
lbl_fn_80360EA4_00001420:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036102C(void)
{
    nofralloc
    li r0, 0x1e
    stw r4, 0x58(r3)
    stw r0, 0x5c(r3)
    blr
}

asm void fn_8036103C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_8036103C_000014F0
    lwz r5, 0x50(r3)
    lwz r0, 0x40(r5)
    cmpwi r0, 0x1
    bne lbl_fn_8036103C_00001494
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_8036103C_00001494
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036103C_00001494
    li r3, 0x0
    b lbl_fn_8036103C_000014F4
lbl_fn_8036103C_00001494:
    lwz r4, lbl_8087EFE8
    addi r3, r1, 0x8
    lfs f0, 0x34(r5)
    lfs f1, 0x29fc(r4)
    lfs f3, 0x29f8(r4)
    fsubs f4, f1, f0
    lfs f2, 0x30(r5)
    lfs f1, 0x29f4(r4)
    lfs f0, 0x2c(r5)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lwz r3, 0x50(r31)
    lfs f0, 0x38(r3)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8036103C_000014F0
    li r3, 0x1
    b lbl_fn_8036103C_000014F4
lbl_fn_8036103C_000014F0:
    li r3, 0x0
lbl_fn_8036103C_000014F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80361100(void)
{
    nofralloc
    lwz r0, lbl_8087F418
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x48(r3)
    mr r3, r0
    b fn_80360574
    blr
}

asm void fn_8036111C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8074B6B8@ha
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8074B6B8@l
    addi r5, r5, 0x28
    stw r31, 0x1c(r1)
    mr r6, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0xc
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x68
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8036111C_000015D0
    mr r4, r29
    bl fn_800D1D3C
    lis r4, lbl_80789E58@ha
    lis r3, lbl_80789E10@ha
    addi r4, r4, lbl_80789E58@l
    stw r4, 0x0(r31)
    li r5, 0x0
    addi r3, r3, lbl_80789E10@l
    stw r30, 0x48(r31)
    mulli r0, r30, 0x5c
    stw r5, 0x4c(r31)
    stw r5, 0x50(r31)
    stw r5, 0x54(r31)
    stw r5, 0x58(r31)
    stw r5, 0x5c(r31)
    stw r5, 0x60(r31)
    lwz r4, lbl_8087F418
    lwz r4, 0x58(r4)
    add r4, r4, r0
    addi r4, r4, 0x4
    stw r4, 0x50(r31)
    stw r5, 0x0(r4)
    stw r3, 0x0(r31)
    stw r5, 0x64(r31)
lbl_fn_8036111C_000015D0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803611E8(void)
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
    beq lbl_fn_803611E8_00001658
    beq lbl_fn_803611E8_00001648
    addic. r0, r3, 0x60
    beq lbl_fn_803611E8_0000163C
    lwz r4, 0x60(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803611E8_0000163C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803611E8_0000163C
    bl fn_800897D8
lbl_fn_803611E8_0000163C:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_803611E8_00001648:
    cmpwi r31, 0x0
    ble lbl_fn_803611E8_00001658
    mr r3, r30
    bl dtor_80084684
lbl_fn_803611E8_00001658:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036126C(void)
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
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r4, 0x50(r30)
    mr r3, r31
    stfs f1, 0x2c(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r4, 0x50(r30)
    mr r3, r31
    stfs f1, 0x30(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r3, 0x50(r30)
    stfs f1, 0x34(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803612DC(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_803612E0(void)
{
    nofralloc
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bnelr
    b fn_80360EA4
    blr
}

asm void fn_803612F4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803612F4_00001808
    lwz r3, lbl_8087F418
    lwz r0, 0x1a4(r3)
    cmpwi r0, 0x1
    blt lbl_fn_803612F4_00001808
    lwz r0, 0x58(r31)
    lis r3, 0xff7f
    lwz r4, 0x50(r31)
    addi r5, r3, 0x4040
    cmpwi r0, 0x0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_808856B0
    addi r4, r4, 0x2c
    lfs f2, lbl_808856A0
    beq lbl_fn_803612F4_00001758
    li r5, -0x7f80
lbl_fn_803612F4_00001758:
    bl fn_80063D3C
    lwz r5, 0x50(r31)
    addi r3, r1, 0x8
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x2c
    bl fn_800BFAC8
    lfs f0, lbl_808856A0
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_803612F4_00001808
    lfs f0, lbl_8088569C
    fcmpo cr0, f1, f0
    bge lbl_fn_803612F4_00001808
    lwz r7, 0x50(r31)
    lis r5, lbl_8074B658@ha
    lis r4, lbl_8074B6B8@ha
    lwz r6, 0x4c(r31)
    lwz r0, 0x0(r7)
    addi r5, r5, lbl_8074B658@l
    addi r3, r1, 0x18
    addi r4, r4, lbl_8074B6B8@l
    slwi r0, r0, 2
    addi r7, r7, 0x4
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    lfs f4, lbl_808856AC
    lis r5, 0xff7f
    lwz r0, 0x58(r31)
    addi r4, r1, 0x18
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    addi r5, r5, 0x7f7f
    lfs f3, lbl_808856A0
    beq lbl_fn_803612F4_000017F4
    li r5, -0x1
lbl_fn_803612F4_000017F4:
    lfs f6, lbl_808856A0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_803612F4_00001808:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80361414(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8074B6B8@ha
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8074B6B8@l
    addi r5, r5, 0x28
    stw r31, 0x1c(r1)
    mr r6, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0xc
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x70
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80361414_000018D0
    mr r4, r29
    bl fn_800D1D3C
    lis r4, lbl_80789E58@ha
    lis r3, lbl_80789DC8@ha
    addi r4, r4, lbl_80789E58@l
    stw r4, 0x0(r31)
    li r6, 0x0
    li r0, 0x1
    stw r30, 0x48(r31)
    mulli r4, r30, 0x5c
    addi r3, r3, lbl_80789DC8@l
    stw r6, 0x4c(r31)
    stw r6, 0x50(r31)
    stw r6, 0x54(r31)
    stw r6, 0x58(r31)
    stw r6, 0x5c(r31)
    stw r6, 0x60(r31)
    lwz r5, lbl_8087F418
    lwz r5, 0x58(r5)
    add r4, r5, r4
    addi r4, r4, 0x4
    stw r4, 0x50(r31)
    stw r0, 0x0(r4)
    stw r3, 0x0(r31)
    stw r6, 0x64(r31)
    stw r6, 0x68(r31)
lbl_fn_80361414_000018D0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803614E8(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    stmw r14, 0x168(r1)
    mr r29, r3
    mr r3, r4
    bl fn_8005B3CC
    li r14, 0x0
    stw r14, 0x40(r1)
    mr r15, r3
    addi r16, r1, 0x40
    stw r14, 0x44(r1)
    stw r14, 0x48(r1)
    bl strlen
    mr r17, r3
    mr r3, r16
    mr r4, r17
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r16
    stb r0, 0x20(r1)
    mr r6, r15
    add r7, r15, r17
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_8074B6B8@ha
    stw r14, 0x34(r1)
    addi r3, r3, lbl_8074B6B8@l
    addi r16, r1, 0xe4
    addi r15, r3, 0x29
    stw r14, 0x38(r1)
    mr r3, r15
    stw r14, 0x3c(r1)
    stw r14, 0xd8(r1)
    stw r14, 0xdc(r1)
    stw r14, 0xe0(r1)
    stw r14, 0xe4(r1)
    stw r14, 0xe8(r1)
    stw r14, 0xec(r1)
    bl strlen
    mr r17, r3
    mr r3, r16
    mr r4, r17
    bl fn_80013DC4
    lbz r0, 0x18(r1)
    mr r3, r16
    stb r0, 0x1c(r1)
    mr r6, r15
    add r7, r15, r17
    addi r8, r1, 0x1c
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x40(r1)
    stb r14, 0xf0(r1)
    srwi. r0, r0, 31
    stb r14, 0xf1(r1)
    stw r14, 0xf4(r1)
    stb r14, 0xf8(r1)
    bne lbl_fn_803614E8_000019F0
    addi r3, r1, 0x41
    b lbl_fn_803614E8_000019F4
lbl_fn_803614E8_000019F0:
    lwz r3, 0x48(r1)
lbl_fn_803614E8_000019F4:
    lwz r0, 0x40(r1)
    stw r3, 0x138(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803614E8_00001A14
    lbz r0, 0x40(r1)
    addi r3, r1, 0x41
    clrlwi r0, r0, 25
    b lbl_fn_803614E8_00001A1C
lbl_fn_803614E8_00001A14:
    lwz r3, 0x48(r1)
    lwz r0, 0x44(r1)
lbl_fn_803614E8_00001A1C:
    lwz r4, 0xd8(r1)
    add r0, r3, r0
    stw r0, 0x13c(r1)
    addi r14, r1, 0x140
    srwi. r0, r4, 31
    bne lbl_fn_803614E8_00001A4C
    lwz r3, 0xdc(r1)
    lwz r0, 0xe0(r1)
    stw r4, 0x140(r1)
    stw r3, 0x144(r1)
    stw r0, 0x148(r1)
    b lbl_fn_803614E8_00001A90
lbl_fn_803614E8_00001A4C:
    li r0, 0x0
    stw r0, 0x140(r1)
    lwz r4, 0xdc(r1)
    mr r3, r14
    stw r0, 0x144(r1)
    stw r0, 0x148(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    mr r3, r14
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0xe0(r1)
    li r4, 0x0
    lwz r0, 0xdc(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_803614E8_00001A90:
    lwz r4, 0xe4(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803614E8_00001AB4
    lwz r3, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r4, 0x14c(r1)
    stw r3, 0x150(r1)
    stw r0, 0x154(r1)
    b lbl_fn_803614E8_00001AF8
lbl_fn_803614E8_00001AB4:
    li r0, 0x0
    stw r0, 0xc(r14)
    lwz r4, 0xe8(r1)
    addi r3, r14, 0xc
    stw r0, 0x10(r14)
    stw r0, 0x14(r14)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    addi r3, r14, 0xc
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0xec(r1)
    li r4, 0x0
    lwz r0, 0xe8(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_803614E8_00001AF8:
    addi r14, r1, 0xd8
    lbz r5, 0xf0(r1)
    addic. r0, r14, 0xc
    lbz r4, 0xf1(r1)
    lwz r3, 0xf4(r1)
    lbz r0, 0xf8(r1)
    stb r5, 0x158(r1)
    stb r4, 0x159(r1)
    stw r3, 0x15c(r1)
    stb r0, 0x160(r1)
    beq lbl_fn_803614E8_00001B38
    lwz r0, 0xe4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001B38
    lwz r3, 0xec(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001B38:
    cmpwi r14, 0x0
    beq lbl_fn_803614E8_00001B54
    lwz r0, 0xd8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001B54
    lwz r3, 0xe0(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001B54:
    addi r3, r1, 0xfc
    addi r4, r1, 0x138
    bl fn_800EC654
    lis r3, __files@ha
    lis r4, lbl_8074B6B8@ha
    addi r30, r1, 0x60
    addi r31, r1, 0x9c
    addi r28, r30, 0x30
    addi r20, r4, lbl_8074B6B8@l
    addi r21, r3, __files@l
    addi r23, r1, 0x3c
    addi r17, r1, 0x4c
    addi r27, r31, 0x30
    lis r25, 0xcccd
    lis r19, 0x4000
    li r22, 0x0
    lis r24, 0x1555
    lis r26, 0x2aab
    lis r14, lbl_80775A88@ha
    b lbl_fn_803614E8_00001E64
lbl_fn_803614E8_00001BA4:
    lwz r0, 0x12c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803614E8_00001BB8
    addi r3, r1, 0x12d
    b lbl_fn_803614E8_00001BBC
lbl_fn_803614E8_00001BB8:
    lwz r3, 0x134(r1)
lbl_fn_803614E8_00001BBC:
    bl fn_80684600
    lwz r5, 0x38(r1)
    mr r18, r3
    lwz r4, 0x3c(r1)
    cmplw r5, r4
    bge lbl_fn_803614E8_00001BF0
    addi r5, r5, 0x1
    lwz r4, 0x34(r1)
    slwi r0, r5, 2
    stw r5, 0x38(r1)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_803614E8_00001DF8
lbl_fn_803614E8_00001BF0:
    subi r0, r19, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_803614E8_00001C14
    addi r4, r20, 0x2b
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803614E8_00001C14:
    lwz r3, 0x38(r1)
    subi r0, r19, 0x1
    lwz r15, 0x3c(r1)
    addi r3, r3, 0x1
    stw r22, 0x4c(r1)
    subf r3, r15, r3
    subf r0, r15, r0
    cmplw r3, r0
    stw r22, 0x50(r1)
    stw r22, 0x54(r1)
    stw r23, 0x58(r1)
    stw r22, 0x5c(r1)
    stw r3, 0x28(r1)
    ble lbl_fn_803614E8_00001C60
    addi r4, r20, 0x2b
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803614E8_00001C60:
    addi r0, r24, 0x5555
    cmplw r15, r0
    bge lbl_fn_803614E8_00001CA8
    addi r4, r15, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x28(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x30
    srwi r4, r4, 2
    stw r4, 0x30(r1)
    cmplw r4, r0
    bge lbl_fn_803614E8_00001C9C
    addi r3, r1, 0x28
lbl_fn_803614E8_00001C9C:
    lwz r0, 0x0(r3)
    add r15, r15, r0
    b lbl_fn_803614E8_00001CE4
lbl_fn_803614E8_00001CA8:
    subi r0, r26, 0x5556
    cmplw r15, r0
    bge lbl_fn_803614E8_00001CE0
    addi r3, r15, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_803614E8_00001CD4
    addi r3, r1, 0x28
lbl_fn_803614E8_00001CD4:
    lwz r0, 0x0(r3)
    add r15, r15, r0
    b lbl_fn_803614E8_00001CE4
lbl_fn_803614E8_00001CE0:
    subi r15, r19, 0x1
lbl_fn_803614E8_00001CE4:
    subi r0, r19, 0x1
    cmplw r15, r0
    ble lbl_fn_803614E8_00001D04
    addi r4, r20, 0x2b
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803614E8_00001D04:
    slwi r3, r15, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_803614E8_00001D2C
    addi r3, r21, 0xa0
    addi r4, r14, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803614E8_00001D2C:
    lwz r5, 0x38(r1)
    lwz r0, 0x50(r1)
    slwi r4, r5, 2
    stw r16, 0x4c(r1)
    slwi r3, r0, 2
    stw r15, 0x54(r1)
    add r0, r16, r4
    stw r5, 0x5c(r1)
    stwx r18, r3, r0
    lwz r0, 0x38(r1)
    lwz r4, 0x50(r1)
    lwz r16, 0x34(r1)
    slwi r0, r0, 2
    addi r5, r4, 0x1
    stw r5, 0x50(r1)
    add r3, r16, r0
    lwz r0, 0x5c(r1)
    subf r3, r16, r3
    srawi r4, r3, 2
    lwz r3, 0x4c(r1)
    addze r18, r4
    subf r0, r18, r0
    stw r0, 0x5c(r1)
    slwi r15, r18, 2
    mr r4, r16
    slwi r0, r0, 2
    mr r5, r15
    add r3, r3, r0
    bl memcpy
    mr r3, r16
    mr r5, r15
    li r4, 0x0
    bl memset
    lwz r0, 0x50(r1)
    cmpwi r17, 0x0
    lwz r6, 0x3c(r1)
    lwz r4, 0x54(r1)
    add r5, r0, r18
    lwz r3, 0x34(r1)
    lwz r0, 0x4c(r1)
    stw r4, 0x3c(r1)
    stw r6, 0x54(r1)
    stw r0, 0x34(r1)
    stw r3, 0x4c(r1)
    stw r5, 0x38(r1)
    stw r22, 0x50(r1)
    beq lbl_fn_803614E8_00001DF8
    cmpwi r3, 0x0
    beq lbl_fn_803614E8_00001DF8
    stw r22, 0x50(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001DF8:
    addi r3, r1, 0x9c
    addi r4, r1, 0xfc
    li r5, 0x0
    bl fn_80205BE8
    cmpwi r27, 0x0
    beq lbl_fn_803614E8_00001E24
    lwz r0, 0xcc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001E24
    lwz r3, 0xd4(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001E24:
    cmpwi r31, 0x0
    beq lbl_fn_803614E8_00001E64
    addic. r0, r31, 0xc
    beq lbl_fn_803614E8_00001E48
    lwz r0, 0xa8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001E48
    lwz r3, 0xb0(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001E48:
    cmpwi r31, 0x0
    beq lbl_fn_803614E8_00001E64
    lwz r0, 0x9c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001E64
    lwz r3, 0xa4(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001E64:
    addi r3, r1, 0x60
    addi r4, r1, 0x138
    bl fn_800EDFE8
    lbz r4, 0x8c(r1)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_803614E8_00001E90
    lbz r0, 0x128(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803614E8_00001E90
    li r3, 0x1
lbl_fn_803614E8_00001E90:
    cmpwi r3, 0x0
    beq lbl_fn_803614E8_00001EC4
    lwz r3, 0x84(r1)
    li r4, 0x0
    lwz r0, 0x120(r1)
    cmplw r3, r0
    bne lbl_fn_803614E8_00001ED4
    lwz r3, 0x88(r1)
    lwz r0, 0x124(r1)
    cmplw r3, r0
    bne lbl_fn_803614E8_00001ED4
    li r4, 0x1
    b lbl_fn_803614E8_00001ED4
lbl_fn_803614E8_00001EC4:
    lbz r0, 0x128(r1)
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r4, r0, 5
lbl_fn_803614E8_00001ED4:
    cmpwi r28, 0x0
    cntlzw r0, r4
    srwi r15, r0, 5
    beq lbl_fn_803614E8_00001EF8
    lwz r0, 0x90(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001EF8
    lwz r3, 0x98(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001EF8:
    cmpwi r30, 0x0
    beq lbl_fn_803614E8_00001F38
    addic. r0, r30, 0xc
    beq lbl_fn_803614E8_00001F1C
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001F1C
    lwz r3, 0x74(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001F1C:
    cmpwi r30, 0x0
    beq lbl_fn_803614E8_00001F38
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001F38
    lwz r3, 0x68(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001F38:
    cmpwi r15, 0x0
    bne lbl_fn_803614E8_00001BA4
    addi r14, r1, 0xfc
    addic. r0, r14, 0x30
    beq lbl_fn_803614E8_00001F60
    lwz r0, 0x12c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001F60
    lwz r3, 0x134(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001F60:
    cmpwi r14, 0x0
    beq lbl_fn_803614E8_00001FA0
    addic. r0, r14, 0xc
    beq lbl_fn_803614E8_00001F84
    lwz r0, 0x108(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001F84
    lwz r3, 0x110(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001F84:
    cmpwi r14, 0x0
    beq lbl_fn_803614E8_00001FA0
    lwz r0, 0xfc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00001FA0
    lwz r3, 0x104(r1)
    bl dtor_80084684
lbl_fn_803614E8_00001FA0:
    lwz r3, 0x68(r29)
    lwz r14, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803614E8_00001FB4
    bl fn_80084C24
lbl_fn_803614E8_00001FB4:
    cmpwi r14, 0x0
    stw r14, 0x64(r29)
    beq lbl_fn_803614E8_00001FE0
    slwi r3, r14, 2
    li r4, 0x0
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x68(r29)
    b lbl_fn_803614E8_00001FE8
lbl_fn_803614E8_00001FE0:
    li r0, 0x0
    stw r0, 0x68(r29)
lbl_fn_803614E8_00001FE8:
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_803614E8_0000200C
lbl_fn_803614E8_00001FF4:
    lwz r4, 0x34(r1)
    addi r6, r6, 0x1
    lwz r3, 0x68(r29)
    lwzx r0, r4, r5
    stwx r0, r3, r5
    addi r5, r5, 0x4
lbl_fn_803614E8_0000200C:
    lwz r0, 0x38(r1)
    cmplw r6, r0
    blt lbl_fn_803614E8_00001FF4
    addic. r14, r1, 0x140
    beq lbl_fn_803614E8_00002058
    addic. r0, r14, 0xc
    beq lbl_fn_803614E8_0000203C
    lwz r0, 0x14c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_0000203C
    lwz r3, 0x154(r1)
    bl dtor_80084684
lbl_fn_803614E8_0000203C:
    cmpwi r14, 0x0
    beq lbl_fn_803614E8_00002058
    lwz r0, 0x140(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00002058
    lwz r3, 0x148(r1)
    bl dtor_80084684
lbl_fn_803614E8_00002058:
    addic. r0, r1, 0x34
    beq lbl_fn_803614E8_00002084
    beq lbl_fn_803614E8_00002084
    beq lbl_fn_803614E8_00002084
    lwz r3, 0x34(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803614E8_00002084
    lwz r0, 0x38(r1)
    subf r0, r0, r0
    stw r0, 0x38(r1)
    bl dtor_80084684
lbl_fn_803614E8_00002084:
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803614E8_00002098
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_803614E8_00002098:
    lmw r14, 0x168(r1)
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
