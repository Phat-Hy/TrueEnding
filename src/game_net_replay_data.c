#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80061AE4(void);
extern void fn_8006EF48(void);
extern void fn_80084320(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_80117228(void);
extern void fn_801231D0(void);
extern void fn_801F3FF8(void);
extern void fn_801F4728(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801FEE08(void);
extern void fn_803729B4(void);
extern void fn_804B4678(void);
extern void fn_804B4700(void);
extern void fn_804B4770(void);
extern void fn_804B50C0(void);
extern void fn_804C4150(void);
extern void fn_804C66D0(void);
extern void fn_804C7408(void);
extern void fn_804C76EC(void);
extern void fn_804C7D7C(void);
extern void fn_804C822C(void);
extern void fn_804DA3F8(void);
extern void fn_804E82C8(void);
extern void fn_804EB874(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80790E20[];
extern u8 lbl_80758D4C[];
extern u8 lbl_80758E44[];
extern u8 lbl_80790DF8[];
extern u8 lbl_80790EB0[];

/* Small data declarations */
extern u32 lbl_8087E118;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F5A0;
extern u32 lbl_8087F5A8;
extern u32 lbl_8087F5D0;
extern u32 lbl_8087F5D8;
extern u32 lbl_8087F5E4;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_8087F9C0;
extern u32 lbl_808813D0;
extern u32 lbl_80887470;
extern u32 lbl_80887474;
extern u32 lbl_80887478;
extern u32 lbl_80887480;
extern u32 lbl_80887484;
extern u32 lbl_80887488;
extern u32 lbl_8088748C;
extern u32 lbl_80887490;
extern u32 lbl_80887494;
extern u32 lbl_80887498;
extern u32 lbl_8088749C;
extern u32 lbl_808874A0;
extern u32 lbl_808874A4;
extern u32 lbl_808874A8;
extern u32 lbl_808874AC;
extern u32 lbl_808874B0;
extern u32 lbl_808874B4;
extern u32 lbl_808874B8;
extern u32 lbl_808874BC;

/* Function declarations */
void fn_804C4530(void);
void fn_804C506C(void);
void fn_804C50C0(void);
void fn_804C54FC(void);
void fn_804C5638(void);
void fn_804C563C(void);
void fn_804C566C(void);
void fn_804C56D4(void);
void fn_804C5CE8(void);
void fn_804C5D74(void);
void fn_804C5E1C(void);
void fn_804C5E9C(void);

asm void fn_804C4530(void)
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
    lwz r4, lbl_8087F628
    cmpwi r4, 0x0
    beq lbl_fn_804C4530_0000031C
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C4530_00000058
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C4530_00000050
    li r3, 0x1
    b lbl_fn_804C4530_00000070
lbl_fn_804C4530_00000050:
    bl fn_806B0DE0
    b lbl_fn_804C4530_00000070
lbl_fn_804C4530_00000058:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C4530_0000006C
    li r3, 0x1
    b lbl_fn_804C4530_00000070
lbl_fn_804C4530_0000006C:
    bl fn_806A8E70
lbl_fn_804C4530_00000070:
    cmpwi r3, 0x1
    ble lbl_fn_804C4530_0000031C
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    beq lbl_fn_804C4530_0000031C
    lha r0, 0x508(r3)
    cmpwi r0, 0x5a
    bge lbl_fn_804C4530_0000031C
    lwz r3, 0x94(r31)
    cmpwi r3, 0x3
    beq lbl_fn_804C4530_00000B1C
    cmpwi r3, 0x2
    li r0, 0x3
    stw r3, 0x98(r31)
    stw r0, 0x94(r31)
    bne lbl_fn_804C4530_000000E0
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C4530_000000E0
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887478
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C4530_000000E0:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804C4530_000000F8
    cmpwi r0, 0x3
    beq lbl_fn_804C4530_00000304
    b lbl_fn_804C4530_00000B1C
lbl_fn_804C4530_000000F8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C4530_00000138
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887474
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C4530_00000138:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C4530_00000178
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    mr r3, r29
    addi r5, r5, lbl_80790DF8@l
    bl fn_801FEE08
    b lbl_fn_804C4530_000001A8
lbl_fn_804C4530_00000178:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    addi r5, r5, lbl_80790DF8@l
    mr r3, r29
    addi r5, r5, 0x8
    bl fn_801FEE08
lbl_fn_804C4530_000001A8:
    lwz r4, 0x48(r31)
    lis r30, lbl_80758D4C@ha
    addi r30, r30, lbl_80758D4C@l
    addi r3, r30, 0x55
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r29, lbl_80790DF8@ha
    mr r4, r3
    addi r29, r29, lbl_80790DF8@l
    mr r3, r28
    addi r5, r29, 0x10
    bl fn_801FEE08
    lwz r4, 0x48(r31)
    addi r3, r30, 0x63
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r29, 0x18
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0x9fc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_0000020C
    b lbl_fn_804C4530_00000210
lbl_fn_804C4530_0000020C:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000210:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x71
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_0000024C
    b lbl_fn_804C4530_00000250
lbl_fn_804C4530_0000024C:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000250:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x7f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_0000028C
    b lbl_fn_804C4530_00000290
lbl_fn_804C4530_0000028C:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000290:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x8d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_000002CC
    b lbl_fn_804C4530_000002D0
lbl_fn_804C4530_000002CC:
    la r28, lbl_808813D0
lbl_fn_804C4530_000002D0:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x9b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lfs f0, lbl_80887470
    stfs f0, 0xb0(r31)
    b lbl_fn_804C4530_00000B1C
lbl_fn_804C4530_00000304:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    b lbl_fn_804C4530_00000B1C
lbl_fn_804C4530_0000031C:
    mr r3, r31
    li r4, 0xa
    bl fn_804C4150
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_804C4530_00000B1C
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_804C4530_00000868
    cmpwi r3, 0x1
    bne lbl_fn_804C4530_000005E4
    lwz r3, lbl_8087F610
    lwz r4, 0xac(r31)
    bl fn_804E82C8
    cmpwi r3, 0x0
    beq lbl_fn_804C4530_00000868
    lwz r3, 0x94(r31)
    cmpwi r3, 0x3
    beq lbl_fn_804C4530_00000868
    cmpwi r3, 0x2
    li r0, 0x3
    stw r3, 0x98(r31)
    stw r0, 0x94(r31)
    bne lbl_fn_804C4530_000003A8
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C4530_000003A8
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887478
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C4530_000003A8:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804C4530_000003C0
    cmpwi r0, 0x3
    beq lbl_fn_804C4530_000005CC
    b lbl_fn_804C4530_00000868
lbl_fn_804C4530_000003C0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C4530_00000400
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887474
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C4530_00000400:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C4530_00000440
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    mr r3, r28
    addi r5, r5, lbl_80790DF8@l
    bl fn_801FEE08
    b lbl_fn_804C4530_00000470
lbl_fn_804C4530_00000440:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    addi r5, r5, lbl_80790DF8@l
    mr r3, r28
    addi r5, r5, 0x8
    bl fn_801FEE08
lbl_fn_804C4530_00000470:
    lwz r4, 0x48(r31)
    lis r30, lbl_80758D4C@ha
    addi r30, r30, lbl_80758D4C@l
    addi r3, r30, 0x55
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r29, lbl_80790DF8@ha
    mr r4, r3
    addi r29, r29, lbl_80790DF8@l
    mr r3, r28
    addi r5, r29, 0x10
    bl fn_801FEE08
    lwz r4, 0x48(r31)
    addi r3, r30, 0x63
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r29, 0x18
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0x9fc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_000004D4
    b lbl_fn_804C4530_000004D8
lbl_fn_804C4530_000004D4:
    la r28, lbl_808813D0
lbl_fn_804C4530_000004D8:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x71
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_00000514
    b lbl_fn_804C4530_00000518
lbl_fn_804C4530_00000514:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000518:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x7f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_00000554
    b lbl_fn_804C4530_00000558
lbl_fn_804C4530_00000554:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000558:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x8d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_00000594
    b lbl_fn_804C4530_00000598
lbl_fn_804C4530_00000594:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000598:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x9b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lfs f0, lbl_80887470
    stfs f0, 0xb0(r31)
    b lbl_fn_804C4530_00000868
lbl_fn_804C4530_000005CC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    b lbl_fn_804C4530_00000868
lbl_fn_804C4530_000005E4:
    lwz r3, 0x94(r31)
    cmpwi r3, 0x3
    beq lbl_fn_804C4530_00000868
    cmpwi r3, 0x2
    li r0, 0x3
    stw r3, 0x98(r31)
    stw r0, 0x94(r31)
    bne lbl_fn_804C4530_00000630
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C4530_00000630
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887478
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C4530_00000630:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804C4530_00000648
    cmpwi r0, 0x3
    beq lbl_fn_804C4530_00000854
    b lbl_fn_804C4530_00000868
lbl_fn_804C4530_00000648:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C4530_00000688
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887474
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C4530_00000688:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C4530_000006C8
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    mr r3, r28
    addi r5, r5, lbl_80790DF8@l
    bl fn_801FEE08
    b lbl_fn_804C4530_000006F8
lbl_fn_804C4530_000006C8:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    addi r5, r5, lbl_80790DF8@l
    mr r3, r28
    addi r5, r5, 0x8
    bl fn_801FEE08
lbl_fn_804C4530_000006F8:
    lwz r4, 0x48(r31)
    lis r30, lbl_80758D4C@ha
    addi r30, r30, lbl_80758D4C@l
    addi r3, r30, 0x55
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r29, lbl_80790DF8@ha
    mr r4, r3
    addi r29, r29, lbl_80790DF8@l
    mr r3, r28
    addi r5, r29, 0x10
    bl fn_801FEE08
    lwz r4, 0x48(r31)
    addi r3, r30, 0x63
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r29, 0x18
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0x9fc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_0000075C
    b lbl_fn_804C4530_00000760
lbl_fn_804C4530_0000075C:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000760:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x71
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_0000079C
    b lbl_fn_804C4530_000007A0
lbl_fn_804C4530_0000079C:
    la r28, lbl_808813D0
lbl_fn_804C4530_000007A0:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x7f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_000007DC
    b lbl_fn_804C4530_000007E0
lbl_fn_804C4530_000007DC:
    la r28, lbl_808813D0
lbl_fn_804C4530_000007E0:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x8d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_0000081C
    b lbl_fn_804C4530_00000820
lbl_fn_804C4530_0000081C:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000820:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x9b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lfs f0, lbl_80887470
    stfs f0, 0xb0(r31)
    b lbl_fn_804C4530_00000868
lbl_fn_804C4530_00000854:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_804C4530_00000868:
    lwz r3, lbl_8087F0A8
    li r4, 0x34
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_804C4530_00000B1C
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x94(r31)
    cmpwi r3, 0x3
    beq lbl_fn_804C4530_00000B1C
    cmpwi r3, 0x2
    li r0, 0x3
    stw r3, 0x98(r31)
    stw r0, 0x94(r31)
    bne lbl_fn_804C4530_000008E4
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C4530_000008E4
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887478
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C4530_000008E4:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804C4530_000008FC
    cmpwi r0, 0x3
    beq lbl_fn_804C4530_00000B08
    b lbl_fn_804C4530_00000B1C
lbl_fn_804C4530_000008FC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C4530_0000093C
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887474
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C4530_0000093C:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C4530_0000097C
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    mr r3, r28
    addi r5, r5, lbl_80790DF8@l
    bl fn_801FEE08
    b lbl_fn_804C4530_000009AC
lbl_fn_804C4530_0000097C:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x46
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r5, lbl_80790DF8@ha
    mr r4, r3
    addi r5, r5, lbl_80790DF8@l
    mr r3, r28
    addi r5, r5, 0x8
    bl fn_801FEE08
lbl_fn_804C4530_000009AC:
    lwz r4, 0x48(r31)
    lis r29, lbl_80758D4C@ha
    addi r29, r29, lbl_80758D4C@l
    addi r3, r29, 0x55
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lis r30, lbl_80790DF8@ha
    mr r4, r3
    addi r30, r30, lbl_80790DF8@l
    mr r3, r28
    addi r5, r30, 0x10
    bl fn_801FEE08
    lwz r4, 0x48(r31)
    addi r3, r29, 0x63
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r30, 0x18
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0x9fc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_00000A10
    b lbl_fn_804C4530_00000A14
lbl_fn_804C4530_00000A10:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000A14:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x71
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa04(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_00000A50
    b lbl_fn_804C4530_00000A54
lbl_fn_804C4530_00000A50:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000A54:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x7f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_00000A90
    b lbl_fn_804C4530_00000A94
lbl_fn_804C4530_00000A90:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000A94:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x8d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r28, 0xa0c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804C4530_00000AD0
    b lbl_fn_804C4530_00000AD4
lbl_fn_804C4530_00000AD0:
    la r28, lbl_808813D0
lbl_fn_804C4530_00000AD4:
    lwz r4, 0x48(r31)
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    addi r3, r3, 0x9b
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lfs f0, lbl_80887470
    stfs f0, 0xb0(r31)
    b lbl_fn_804C4530_00000B1C
lbl_fn_804C4530_00000B08:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_804C4530_00000B1C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C506C(void)
{
    nofralloc
    addi r5, r3, 0x54
    b lbl_fn_804C506C_00000B60
lbl_fn_804C506C_00000B44:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_fn_804C506C_00000B5C
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_804C506C_00000B5C:
    addi r5, r5, 0x4
lbl_fn_804C506C_00000B60:
    lwz r0, 0x50(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    addi r0, r4, 0x54
    cmplw r5, r0
    bne lbl_fn_804C506C_00000B44
    lwz r4, 0x94(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgtlr
    b fn_804C50C0
    blr
}

asm void fn_804C50C0(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    bl _savegpr_27
    lwz r5, 0x48(r3)
    lis r29, lbl_80758D4C@ha
    addi r29, r29, lbl_80758D4C@l
    mr r28, r3
    lwz r0, 0x38(r5)
    addi r4, r29, 0xa9
    lfs f31, lbl_80887480
    li r6, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lfs f26, lbl_80887484
    lwz r5, lbl_8087F5D8
    lfs f30, lbl_80887488
    lwz r3, 0x48(r3)
    addi r5, r5, 0x1
    bl fn_801F4CB4
    lwz r3, 0x48(r28)
    lfs f0, lbl_8088748C
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    blt lbl_fn_804C50C0_00000F84
    lwz r5, 0xac(r28)
    addi r3, r1, 0x40
    addi r4, r29, 0xae
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r30, 0x48(r28)
    addi r3, r1, 0x40
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x2c
    bl fn_801F4E8C
    lfs f2, lbl_80887490
    addi r4, r29, 0xbf
    lfs f1, lbl_80887494
    addi r5, r1, 0x2c
    lfs f0, lbl_80887498
    stfs f2, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    lwz r3, 0x4c(r28)
    bl fn_801F4728
    lwz r3, 0x4c(r28)
    lfs f1, lbl_80887474
    lwz r0, 0x38(r3)
    lfs f0, lbl_8088749C
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lfs f2, 0xb0(r28)
    fadds f1, f2, f1
    stfs f1, 0xb0(r28)
    fcmpo cr0, f1, f0
    bge lbl_fn_804C50C0_00000CB8
    lfs f26, lbl_80887470
    b lbl_fn_804C50C0_00000CC0
lbl_fn_804C50C0_00000CB8:
    fsubs f0, f1, f0
    fmuls f26, f0, f26
lbl_fn_804C50C0_00000CC0:
    lwz r3, lbl_8087F628
    lis r31, lbl_80758D4C@ha
    lfs f27, lbl_808874A0
    addi r31, r31, lbl_80758D4C@l
    lfs f28, lbl_808874A4
    addi r30, r3, 0xc20
    lfs f29, lbl_80887470
    li r29, 0x0
lbl_fn_804C50C0_00000CE0:
    addi r3, r1, 0x40
    addi r4, r31, 0xae
    addi r5, r29, 0x1
    crclr 6
    bl sprintf
    lwz r27, 0x48(r28)
    addi r3, r1, 0x40
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x18
    bl fn_801F4E8C
    lwz r0, lbl_8087F5D8
    lfs f1, 0x18(r1)
    mulli r0, r0, 0xa
    lfs f0, 0x1c(r1)
    fadds f1, f1, f27
    lwz r3, lbl_8087F610
    fadds f0, f0, f28
    add r0, r29, r0
    slwi r0, r0, 2
    stfs f1, 0x18(r1)
    add r4, r30, r0
    addi r3, r3, 0x2a50
    stfs f0, 0x1c(r1)
    lha r0, 0x18(r4)
    lha r5, 0x1a(r4)
    cmpwi r0, 0x0
    blt lbl_fn_804C50C0_00000D5C
    cmpwi r0, 0x15
    ble lbl_fn_804C50C0_00000D64
lbl_fn_804C50C0_00000D5C:
    li r27, 0x0
    b lbl_fn_804C50C0_00000E8C
lbl_fn_804C50C0_00000D64:
    bge lbl_fn_804C50C0_00000D9C
    cmpwi r5, 0x0
    blt lbl_fn_804C50C0_00000D84
    mulli r0, r0, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804C50C0_00000D8C
lbl_fn_804C50C0_00000D84:
    li r27, 0x0
    b lbl_fn_804C50C0_00000E8C
lbl_fn_804C50C0_00000D8C:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r27, r3, r0
    b lbl_fn_804C50C0_00000E8C
lbl_fn_804C50C0_00000D9C:
    cmpwi r5, 0x0
    bge lbl_fn_804C50C0_00000DAC
    li r27, 0x0
    b lbl_fn_804C50C0_00000E8C
lbl_fn_804C50C0_00000DAC:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804C50C0_00000DC4
lbl_fn_804C50C0_00000DB8:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804C50C0_00000DC4:
    cmpwi r4, 0x14
    bge lbl_fn_804C50C0_00000DD8
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804C50C0_00000DB8
lbl_fn_804C50C0_00000DD8:
    cmpwi r4, 0x14
    bge lbl_fn_804C50C0_00000E88
    cmpwi r4, 0x0
    blt lbl_fn_804C50C0_00000DF0
    cmpwi r4, 0x15
    ble lbl_fn_804C50C0_00000DF8
lbl_fn_804C50C0_00000DF0:
    li r3, 0x0
    b lbl_fn_804C50C0_00000E80
lbl_fn_804C50C0_00000DF8:
    bge lbl_fn_804C50C0_00000E30
    cmpwi r5, 0x0
    blt lbl_fn_804C50C0_00000E18
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804C50C0_00000E20
lbl_fn_804C50C0_00000E18:
    li r3, 0x0
    b lbl_fn_804C50C0_00000E80
lbl_fn_804C50C0_00000E20:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804C50C0_00000E80
lbl_fn_804C50C0_00000E30:
    cmpwi r5, 0x0
    bge lbl_fn_804C50C0_00000E40
    li r3, 0x0
    b lbl_fn_804C50C0_00000E80
lbl_fn_804C50C0_00000E40:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804C50C0_00000E58
lbl_fn_804C50C0_00000E4C:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804C50C0_00000E58:
    cmpwi r4, 0x14
    bge lbl_fn_804C50C0_00000E6C
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804C50C0_00000E4C
lbl_fn_804C50C0_00000E6C:
    cmpwi r4, 0x14
    bge lbl_fn_804C50C0_00000E7C
    bl fn_804C54FC
    b lbl_fn_804C50C0_00000E80
lbl_fn_804C50C0_00000E7C:
    li r3, 0x0
lbl_fn_804C50C0_00000E80:
    mr r27, r3
    b lbl_fn_804C50C0_00000E8C
lbl_fn_804C50C0_00000E88:
    li r27, 0x0
lbl_fn_804C50C0_00000E8C:
    cmpwi r27, 0x0
    beq lbl_fn_804C50C0_00000F78
    lwz r4, 0x18(r27)
    cmpwi r4, 0x0
    beq lbl_fn_804C50C0_00000EA8
    mr r0, r4
    b lbl_fn_804C50C0_00000EAC
lbl_fn_804C50C0_00000EA8:
    la r0, lbl_808813D0
lbl_fn_804C50C0_00000EAC:
    cmpwi r0, 0x0
    beq lbl_fn_804C50C0_00000F78
    lwz r0, 0xac(r28)
    cmpw r29, r0
    bne lbl_fn_804C50C0_00000EC8
    fmr f1, f26
    b lbl_fn_804C50C0_00000ECC
lbl_fn_804C50C0_00000EC8:
    lfs f1, lbl_80887470
lbl_fn_804C50C0_00000ECC:
    lfs f0, 0x18(r1)
    cmpwi r4, 0x0
    lfs f4, lbl_808874AC
    fnmsubs f0, f30, f31, f0
    lfs f3, lbl_808874A8
    fmr f5, f4
    stfs f0, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    lfs f0, 0x18(r1)
    lwz r3, lbl_8087EEB0
    fsubs f1, f0, f1
    lfs f2, 0x1c(r1)
    beq lbl_fn_804C50C0_00000F08
    b lbl_fn_804C50C0_00000F0C
lbl_fn_804C50C0_00000F08:
    la r4, lbl_808813D0
lbl_fn_804C50C0_00000F0C:
    lfs f6, lbl_80887470
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x1
    lis r10, 0xff00
    bl fn_80061AE4
    lwz r0, 0xac(r28)
    cmpw r29, r0
    bne lbl_fn_804C50C0_00000F78
    lwz r4, 0x18(r27)
    lwz r3, lbl_8087EEC8
    cmpwi r4, 0x0
    lfs f1, lbl_808874AC
    beq lbl_fn_804C50C0_00000F58
    b lbl_fn_804C50C0_00000F5C
lbl_fn_804C50C0_00000F58:
    la r4, lbl_808813D0
lbl_fn_804C50C0_00000F5C:
    lfs f2, lbl_80887470
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    fcmpo cr0, f26, f1
    ble lbl_fn_804C50C0_00000F78
    stfs f29, 0xb0(r28)
lbl_fn_804C50C0_00000F78:
    addi r29, r29, 0x1
    cmpwi r29, 0xa
    blt lbl_fn_804C50C0_00000CE0
lbl_fn_804C50C0_00000F84:
    addi r11, r1, 0xa0
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    bl _restgpr_27
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_804C54FC(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_804C54FC_00000FDC
    cmpwi r4, 0x15
    ble lbl_fn_804C54FC_00000FE4
lbl_fn_804C54FC_00000FDC:
    li r3, 0x0
    blr
lbl_fn_804C54FC_00000FE4:
    bge lbl_fn_804C54FC_0000101C
    cmpwi r5, 0x0
    blt lbl_fn_804C54FC_00001000
    mulli r4, r4, 0xc
    lwzx r0, r3, r4
    cmpw r0, r5
    bgt lbl_fn_804C54FC_00001008
lbl_fn_804C54FC_00001000:
    li r3, 0x0
    blr
lbl_fn_804C54FC_00001008:
    add r3, r3, r4
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    blr
lbl_fn_804C54FC_0000101C:
    cmpwi r5, 0x0
    bge lbl_fn_804C54FC_0000102C
    li r3, 0x0
    blr
lbl_fn_804C54FC_0000102C:
    mr r4, r3
    li r6, 0x0
    b lbl_fn_804C54FC_00001044
lbl_fn_804C54FC_00001038:
    subf r5, r0, r5
    addi r4, r4, 0xc
    addi r6, r6, 0x1
lbl_fn_804C54FC_00001044:
    cmpwi r6, 0x14
    bge lbl_fn_804C54FC_00001058
    lwz r0, 0x0(r4)
    cmplw r0, r5
    ble lbl_fn_804C54FC_00001038
lbl_fn_804C54FC_00001058:
    cmpwi r6, 0x14
    bge lbl_fn_804C54FC_00001100
    cmpwi r6, 0x0
    blt lbl_fn_804C54FC_00001070
    cmpwi r6, 0x15
    ble lbl_fn_804C54FC_00001078
lbl_fn_804C54FC_00001070:
    li r3, 0x0
    blr
lbl_fn_804C54FC_00001078:
    bge lbl_fn_804C54FC_000010B0
    cmpwi r5, 0x0
    blt lbl_fn_804C54FC_00001094
    mulli r4, r6, 0xc
    lwzx r0, r3, r4
    cmpw r0, r5
    bgt lbl_fn_804C54FC_0000109C
lbl_fn_804C54FC_00001094:
    li r3, 0x0
    blr
lbl_fn_804C54FC_0000109C:
    add r3, r3, r4
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    blr
lbl_fn_804C54FC_000010B0:
    cmpwi r5, 0x0
    bge lbl_fn_804C54FC_000010C0
    li r3, 0x0
    blr
lbl_fn_804C54FC_000010C0:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804C54FC_000010D8
lbl_fn_804C54FC_000010CC:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804C54FC_000010D8:
    cmpwi r4, 0x14
    bge lbl_fn_804C54FC_000010EC
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804C54FC_000010CC
lbl_fn_804C54FC_000010EC:
    cmpwi r4, 0x14
    bge lbl_fn_804C54FC_000010F8
    b fn_804C54FC
lbl_fn_804C54FC_000010F8:
    li r3, 0x0
    blr
lbl_fn_804C54FC_00001100:
    li r3, 0x0
    blr
}

asm void fn_804C5638(void)
{
    nofralloc
    b fn_800D2338
}

asm void fn_804C563C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80758D4C@ha
    addi r3, r3, lbl_80758D4C@l
    stw r0, 0x14(r1)
    addi r3, r3, 0xca
    bl fn_800DC6B4
    lwz r0, 0x14(r1)
    stw r3, lbl_8087F5D0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C566C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F5E4
    cmpwi r0, 0x0
    bne lbl_fn_804C566C_0000118C
    lis r5, lbl_80758E44@ha
    li r3, 0x1a8
    addi r5, r5, lbl_80758E44@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804C566C_00001188
    mr r4, r31
    bl fn_804C56D4
lbl_fn_804C566C_00001188:
    stw r3, lbl_8087F5E4
lbl_fn_804C566C_0000118C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F5E4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C56D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    mr r29, r3
    bl fn_800D1D3C
    lis r3, lbl_80790EB0@ha
    lis r4, lbl_80758E44@ha
    li r0, 0x0
    stw r0, 0xe4(r29)
    addi r3, r3, lbl_80790EB0@l
    addi r4, r4, lbl_80758E44@l
    stw r3, 0x0(r29)
    mr r3, r29
    addi r4, r4, 0x1
    li r5, 0x0
    stw r0, 0xe8(r29)
    stw r0, 0xec(r29)
    stw r0, 0xf0(r29)
    stw r0, 0xf4(r29)
    stb r0, 0x104(r29)
    stw r0, 0x108(r29)
    stw r0, 0x19c(r29)
    stw r0, 0x1a0(r29)
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x48(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_00001248
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_0000123C
    stw r3, 0x0(r4)
lbl_fn_804C56D4_0000123C:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_00001248:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x2b
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x4c(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_00001294
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_00001288
    stw r3, 0x0(r4)
lbl_fn_804C56D4_00001288:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_00001294:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x57
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x50(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_000012E0
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_000012D4
    stw r3, 0x0(r4)
lbl_fn_804C56D4_000012D4:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_000012E0:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x80
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x54(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_0000132C
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_00001320
    stw r3, 0x0(r4)
lbl_fn_804C56D4_00001320:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_0000132C:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0xaa
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x58(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_00001378
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_0000136C
    stw r3, 0x0(r4)
lbl_fn_804C56D4_0000136C:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_00001378:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0xd0
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x68(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_000013C4
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_000013B8
    stw r3, 0x0(r4)
lbl_fn_804C56D4_000013B8:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_000013C4:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0xf2
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x6c(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_00001410
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_00001404
    stw r3, 0x0(r4)
lbl_fn_804C56D4_00001404:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_00001410:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x111
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x70(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_0000145C
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_00001450
    stw r3, 0x0(r4)
lbl_fn_804C56D4_00001450:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_0000145C:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x131
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x74(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_000014A8
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_0000149C
    stw r3, 0x0(r4)
lbl_fn_804C56D4_0000149C:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_000014A8:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x151
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x78(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_000014F4
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_000014E8
    stw r3, 0x0(r4)
lbl_fn_804C56D4_000014E8:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_000014F4:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x172
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0x7c(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_00001540
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_00001534
    stw r3, 0x0(r4)
lbl_fn_804C56D4_00001534:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_00001540:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x194
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0xc0(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_0000158C
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_00001580
    stw r3, 0x0(r4)
lbl_fn_804C56D4_00001580:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_0000158C:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x1b8
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0xc4(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_000015D8
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_000015CC
    stw r3, 0x0(r4)
lbl_fn_804C56D4_000015CC:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_000015D8:
    lis r4, lbl_80758E44@ha
    mr r3, r29
    addi r4, r4, lbl_80758E44@l
    li r5, 0x0
    addi r4, r4, 0x1db
    bl fn_801F3FF8
    lwz r0, 0x108(r29)
    stw r3, 0xc8(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_00001624
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_00001618
    stw r3, 0x0(r4)
lbl_fn_804C56D4_00001618:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_00001624:
    lis r30, lbl_80758E44@ha
    lfs f31, lbl_808874B0
    addi r30, r30, lbl_80758E44@l
    li r26, 0x0
    li r31, 0x0
    li r28, 0x0
lbl_fn_804C56D4_0000163C:
    mr r3, r29
    add r27, r29, r31
    addi r4, r30, 0x200
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x5c(r27)
    lwz r0, 0x108(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_00001684
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_00001678
    stw r3, 0x0(r4)
lbl_fn_804C56D4_00001678:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_00001684:
    add r3, r29, r31
    addi r26, r26, 0x1
    stw r28, 0xcc(r3)
    cmplwi r26, 0x3
    addi r31, r31, 0x4
    stfs f31, 0xd8(r3)
    blt lbl_fn_804C56D4_0000163C
    lis r3, lbl_80758E44@ha
    li r30, 0x0
    li r31, 0x0
    addi r28, r3, lbl_80758E44@l
lbl_fn_804C56D4_000016B0:
    mr r3, r29
    add r27, r29, r31
    addi r4, r28, 0x220
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x80(r27)
    lwz r0, 0x108(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_000016F8
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_000016EC
    stw r3, 0x0(r4)
lbl_fn_804C56D4_000016EC:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_000016F8:
    mr r3, r29
    add r27, r29, r31
    addi r4, r28, 0x249
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xa0(r27)
    lwz r0, 0x108(r29)
    cmplwi r0, 0x24
    bge lbl_fn_804C56D4_00001740
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x10c
    beq lbl_fn_804C56D4_00001734
    stw r3, 0x0(r4)
lbl_fn_804C56D4_00001734:
    lwz r3, 0x108(r29)
    addi r0, r3, 0x1
    stw r0, 0x108(r29)
lbl_fn_804C56D4_00001740:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x8
    blt lbl_fn_804C56D4_000016B0
    addi r28, r29, 0x10c
    b lbl_fn_804C56D4_00001770
lbl_fn_804C56D4_00001758:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_804C56D4_0000176C
    li r4, 0x1
    bl fn_800D246C
lbl_fn_804C56D4_0000176C:
    addi r28, r28, 0x4
lbl_fn_804C56D4_00001770:
    lwz r0, 0x108(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    addi r0, r3, 0x10c
    cmplw r28, r0
    bne lbl_fn_804C56D4_00001758
    lwz r3, lbl_8087F5A0
    li r4, -0x1
    bl fn_804B4770
    psq_l f31, 0x28(r1), 0, 0
    mr r3, r29
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804C5CE8(void)
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
    beq lbl_fn_804C5CE8_00001828
    lis r5, lbl_80790EB0@ha
    li r4, -0x1
    addi r5, r5, lbl_80790EB0@l
    stw r5, 0x0(r3)
    lwz r3, lbl_8087F5A0
    bl fn_804B4770
    li r3, 0x0
    stw r3, 0x108(r30)
    lwz r0, lbl_8087F5E4
    cmpwi r0, 0x0
    beq lbl_fn_804C5CE8_0000180C
    stw r3, lbl_8087F5E4
lbl_fn_804C5CE8_0000180C:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804C5CE8_00001828
    mr r3, r30
    bl dtor_80084684
lbl_fn_804C5CE8_00001828:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C5D74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804C5D74_000018C8
    lwz r4, 0xc0(r28)
    lis r31, lbl_80758E44@ha
    addi r31, r31, lbl_80758E44@l
    la r30, lbl_8087E118
    addi r3, r31, 0x273
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801FEE08
    lwz r4, 0xc0(r28)
    addi r3, r31, 0x279
    la r30, lbl_8087E118
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801FEE08
    li r3, 0x1
    b lbl_fn_804C5D74_000018CC
lbl_fn_804C5D74_000018C8:
    li r3, 0x0
lbl_fn_804C5D74_000018CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804C5E1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x10c
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_fn_804C5E1C_00001924
lbl_fn_804C5E1C_0000190C:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804C5E1C_00001920
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804C5E1C_00001920:
    addi r31, r31, 0x4
lbl_fn_804C5E1C_00001924:
    lwz r0, 0x108(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x10c
    cmplw r31, r0
    bne lbl_fn_804C5E1C_0000190C
    mr r3, r30
    li r4, 0x1
    bl fn_804C5E9C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804C5E9C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0xe4(r3)
    mr r31, r3
    mr r27, r4
    cmpw r0, r4
    beq lbl_fn_804C5E9C_00002178
    cmpwi r4, 0x0
    blt lbl_fn_804C5E9C_00002178
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0xe4(r31)
    li r3, 0x0
    stw r3, 0xec(r31)
    mr r3, r31
    stw r0, 0xe8(r31)
    stw r27, 0xe4(r31)
    bl fn_804C66D0
    lwz r0, 0xe4(r31)
    cmplwi r0, 0xb
    bgt lbl_fn_804C5E9C_00002178
    lis r3, jumptable_80790E20@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80790E20@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r4, 0xd2
    stw r4, 0x1a0(r31)
    lwz r3, lbl_8087F610
    lwz r0, 0x534(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C5E9C_00001A34
    lwz r30, 0x68(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804C5E9C_00002178
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
    b lbl_fn_804C5E9C_00002178
lbl_fn_804C5E9C_00001A34:
    srawi r0, r4, 1
    stw r0, 0x1a0(r31)
    b lbl_fn_804C5E9C_00002178
    lwz r3, lbl_8087F610
    lwz r0, 0x2b84(r3)
    stw r0, 0xf0(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r30, 0x6c(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804C5E9C_00001A80
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804C5E9C_00001A80:
    lwz r0, 0xf0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804C5E9C_00001A9C
    cmpwi r0, 0x1
    beq lbl_fn_804C5E9C_00001A9C
    cmpwi r0, 0x3
    bne lbl_fn_804C5E9C_00001B04
lbl_fn_804C5E9C_00001A9C:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_804C5E9C_00001B04
    lwz r3, lbl_8087F610
    bl fn_804EB874
    cmpwi r3, 0x0
    beq lbl_fn_804C5E9C_00001B04
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C5E9C_00001B04
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r28, 0x0(r3)
    li r4, 0x1
    lwz r0, 0x54c(r28)
    mr r3, r28
    ori r0, r0, 0x10
    stw r0, 0x54c(r28)
    bl fn_800D246C
    lwz r3, lbl_8087F430
    mr r4, r28
    bl fn_803729B4
    li r0, 0x1
    stw r0, 0x19c(r31)
lbl_fn_804C5E9C_00001B04:
    lwz r3, lbl_8087F5A8
    li r4, 0x3
    bl fn_804B50C0
    b lbl_fn_804C5E9C_00002178
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F5A0
    li r4, 0x0
    lfs f1, lbl_808874B0
    li r5, 0x0
    bl fn_804B4678
    lwz r3, lbl_8087F5A0
    li r4, 0x0
    bl fn_804B4700
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804C5E9C_00001BD0
    lwz r30, 0x50(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804C5E9C_00001B84
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804C5E9C_00001B84:
    mr r3, r31
    bl fn_804C7D7C
    lwz r3, lbl_8087F86C
    lwz r29, 0x9a4(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001BA0
    b lbl_fn_804C5E9C_00001BA4
lbl_fn_804C5E9C_00001BA0:
    la r29, lbl_808813D0
lbl_fn_804C5E9C_00001BA4:
    lwz r4, 0xc0(r31)
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x287
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804C5E9C_00001BFC
lbl_fn_804C5E9C_00001BD0:
    lwz r30, 0x48(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804C5E9C_00001BFC
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804C5E9C_00001BFC:
    lfs f31, lbl_808874B0
    mr r28, r31
    li r27, 0x0
    li r30, 0x0
lbl_fn_804C5E9C_00001C0C:
    lwz r29, 0x5c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001C34
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00001C34:
    addi r27, r27, 0x1
    stw r30, 0xf8(r28)
    cmpwi r27, 0x3
    addi r28, r28, 0x4
    blt lbl_fn_804C5E9C_00001C0C
    lwz r29, 0xc0(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001C74
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00001C74:
    lis r4, lbl_80758E44@ha
    lfs f1, lbl_808874B0
    addi r4, r4, lbl_80758E44@l
    addi r3, r1, 0x1c
    addi r4, r4, 0x295
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    bl fn_804C76EC
    mr r3, r31
    bl fn_804C7408
    b lbl_fn_804C5E9C_00002178
    mr r3, r31
    bl fn_804C822C
    lwz r29, 0x54(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001CE8
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00001CE8:
    lwz r29, 0xc4(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001D14
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00001D14:
    lwz r3, lbl_8087F86C
    lwz r29, 0x9ac(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001D28
    b lbl_fn_804C5E9C_00001D2C
lbl_fn_804C5E9C_00001D28:
    la r29, lbl_808813D0
lbl_fn_804C5E9C_00001D2C:
    lwz r4, 0xc0(r31)
    lis r31, lbl_80758E44@ha
    addi r31, r31, lbl_80758E44@l
    addi r3, r31, 0x287
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    lwz r0, -0x698c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804C5E9C_00001D98
    lfs f1, lbl_808874B0
    addi r3, r1, 0x18
    addi r4, r31, 0x2a2
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F610
    bl fn_804DA3F8
    b lbl_fn_804C5E9C_00002178
lbl_fn_804C5E9C_00001D98:
    lfs f1, lbl_808874B0
    addi r3, r1, 0x14
    addi r4, r31, 0x295
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804C5E9C_00002178
    lwz r29, 0xc8(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001DEC
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00001DEC:
    lwz r3, lbl_8087F5A0
    li r4, 0x0
    bl fn_804B4700
    lis r4, lbl_80758E44@ha
    lfs f1, lbl_808874B0
    addi r4, r4, lbl_80758E44@l
    addi r3, r1, 0x10
    addi r4, r4, 0x2af
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r0, 0x96
    stw r0, 0x1a4(r31)
    b lbl_fn_804C5E9C_00002178
    lwz r29, 0x58(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001E5C
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00001E5C:
    lwz r3, lbl_8087F86C
    lwz r29, 0x834(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001E70
    b lbl_fn_804C5E9C_00001E74
lbl_fn_804C5E9C_00001E70:
    la r29, lbl_808813D0
lbl_fn_804C5E9C_00001E74:
    lwz r4, 0x58(r31)
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x2bc
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r29, 0x834(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001EB0
    b lbl_fn_804C5E9C_00001EB4
lbl_fn_804C5E9C_00001EB0:
    la r29, lbl_808813D0
lbl_fn_804C5E9C_00001EB4:
    lwz r4, 0x58(r31)
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x287
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    addi r3, r1, 0xc
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804C5E9C_00002178
    lwz r29, 0x58(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001F24
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B4
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00001F24:
    lwz r29, 0xc0(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001F50
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874B0
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00001F50:
    lwz r3, 0x58(r31)
    lfs f0, lbl_808874B8
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087F86C
    lwz r29, 0x83c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001F70
    b lbl_fn_804C5E9C_00001F74
lbl_fn_804C5E9C_00001F70:
    la r29, lbl_808813D0
lbl_fn_804C5E9C_00001F74:
    lwz r4, 0x58(r31)
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x2bc
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r29, 0x83c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00001FB0
    b lbl_fn_804C5E9C_00001FB4
lbl_fn_804C5E9C_00001FB0:
    la r29, lbl_808813D0
lbl_fn_804C5E9C_00001FB4:
    lwz r4, 0x58(r31)
    lis r3, lbl_80758E44@ha
    addi r3, r3, lbl_80758E44@l
    addi r3, r3, 0x287
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    addi r3, r1, 0x8
    li r4, 0xc
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804C5E9C_00002178
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r29, 0x48(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00002038
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874BC
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00002038:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804C5E9C_00002138
    lwz r29, 0x50(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00002074
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874BC
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00002074:
    lwz r29, 0x54(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_000020A0
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874BC
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_000020A0:
    lwz r29, 0xc4(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_000020CC
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808874BC
    stfs f0, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_000020CC:
    lfs f31, lbl_808874BC
    mr r30, r31
    li r27, 0x0
lbl_fn_804C5E9C_000020D8:
    lwz r29, 0x80(r30)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00002100
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00002100:
    lwz r29, 0xa0(r30)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00002128
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00002128:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x8
    blt lbl_fn_804C5E9C_000020D8
lbl_fn_804C5E9C_00002138:
    lfs f31, lbl_808874BC
    li r27, 0x0
lbl_fn_804C5E9C_00002140:
    lwz r29, 0x5c(r31)
    cmpwi r29, 0x0
    beq lbl_fn_804C5E9C_00002168
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r29)
    lwz r0, 0xfc(r29)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r29)
lbl_fn_804C5E9C_00002168:
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0x3
    blt lbl_fn_804C5E9C_00002140
lbl_fn_804C5E9C_00002178:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
