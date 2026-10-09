#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80076FF8(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087BB4(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB518(void);
extern void fn_800CB5C8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_80117228(void);
extern void fn_80124B60(void);
extern void fn_801F3FF8(void);
extern void fn_801F4E8C(void);
extern void fn_801F64D0(void);
extern void fn_801F6C10(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_80202A6C(void);
extern void fn_80211480(void);
extern void fn_802179B4(void);
extern void fn_802179BC(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_804A3BD4(void);
extern void fn_805114D8(void);
extern void fn_805115D4(void);
extern void fn_80680CF8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_807570C0[];
extern u8 lbl_807570D4[];
extern u8 lbl_807573D0[];
extern u8 lbl_80790778[];
extern u8 lbl_807907DC[];

/* Small data declarations */
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F578;
extern u32 lbl_8087F580;
extern u32 lbl_8087FA20;
extern u32 lbl_808871B0;
extern u32 lbl_808871B4;
extern u32 lbl_808871B8;
extern u32 lbl_808871BC;
extern u32 lbl_808871C0;
extern u32 lbl_808871C4;
extern u32 lbl_808871C8;
extern u32 lbl_808871D0;
extern u32 lbl_808871D4;
extern u32 lbl_808871D8;
extern u32 lbl_808871DC;
extern u32 lbl_808871E0;
extern u32 lbl_808871E4;
extern u32 lbl_808871E8;
extern u32 lbl_808871EC;
extern u32 lbl_808871F0;
extern u32 lbl_808871F4;
extern u32 lbl_808871F8;
extern u32 lbl_808871FC;
extern u32 lbl_80887200;
extern u32 lbl_80887204;
extern u32 lbl_80887208;

/* Function declarations */
void fn_804A2078(void);
void fn_804A2128(void);
void fn_804A2294(void);
void fn_804A2338(void);
void fn_804A233C(void);
void fn_804A24C4(void);
void fn_804A251C(void);
void fn_804A26DC(void);
void fn_804A2724(void);
void fn_804A2800(void);
void fn_804A28F8(void);
void fn_804A29C4(void);
void fn_804A2A34(void);
void fn_804A2C98(void);
void fn_804A2D2C(void);
void fn_804A2F98(void);
void fn_804A2FBC(void);
void fn_804A313C(void);
void fn_804A3228(void);
void fn_804A3438(void);
void fn_804A39EC(void);
void fn_804A3A68(void);

asm void fn_804A2078(void)
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
    beq lbl_fn_804A2078_00000094
    lis r4, lbl_80790778@ha
    li r0, 0x0
    addi r4, r4, lbl_80790778@l
    stw r4, 0x0(r3)
    li r4, 0x0
    li r5, 0x0
    stw r0, lbl_8087F578
    addi r3, r3, 0x23c
    bl fn_800CB5C8
    addic. r0, r30, 0x244
    beq lbl_fn_804A2078_0000006C
    lwz r4, 0x244(r30)
    cmpwi r4, 0x0
    beq lbl_fn_804A2078_0000006C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_804A2078_0000006C
    bl fn_800897D8
lbl_fn_804A2078_0000006C:
    addi r3, r30, 0x23c
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804A2078_00000094
    mr r3, r30
    bl dtor_80084684
lbl_fn_804A2078_00000094:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A2128(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, lbl_8087F430
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_804A2128_0000014C
    lis r4, 0x8d3e
    addi r28, r3, 0x5c
    subi r29, r4, 0x34f7
    li r27, 0x0
    b lbl_fn_804A2128_00000140
lbl_fn_804A2128_000000E8:
    bl fn_802179B4
    mr r30, r3
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    mulli r30, r0, 0x3a
    bl fn_80680CF8
    mulhw r0, r29, r3
    lwz r4, 0x4(r28)
    li r6, 0x1
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3a
    subf r0, r0, r3
    lwz r3, lbl_8087F430
    add r5, r0, r30
    bl fn_80370320
    addi r28, r28, 0x10
    addi r27, r27, 0x1
lbl_fn_804A2128_00000140:
    lwz r0, 0x58(r31)
    cmplw r27, r0
    blt lbl_fn_804A2128_000000E8
lbl_fn_804A2128_0000014C:
    lwz r0, 0x244(r31)
    lis r3, lbl_807570D4@ha
    addi r3, r3, lbl_807570D4@l
    cmpwi r0, 0x0
    addi r4, r3, 0x1
    bne lbl_fn_804A2128_00000184
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_804A2128_00000184
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x244(r31)
    mr r28, r3
    b lbl_fn_804A2128_00000188
lbl_fn_804A2128_00000184:
    li r28, 0x0
lbl_fn_804A2128_00000188:
    lis r29, lbl_807570D4@ha
    lis r30, 0xf
    addi r29, r29, lbl_807570D4@l
    mr r3, r28
    addi r4, r29, 0x8
    addi r5, r31, 0x4c
    addi r7, r30, 0x423f
    li r6, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808871B4
    mr r3, r28
    lfs f2, lbl_808871B8
    addi r4, r29, 0x11
    lfs f3, lbl_808871BC
    addi r5, r31, 0x50
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r29, 0x17
    addi r5, r31, 0x54
    addi r7, r30, 0x423f
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    addi r11, r1, 0x20
    li r3, 0x1
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A2294(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x240(r3)
    cmpwi r4, 0x0
    ble lbl_fn_804A2294_00000244
    subi r0, r4, 0x1
    stw r0, 0x240(r3)
lbl_fn_804A2294_00000244:
    lwz r0, 0x240(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_804A2294_0000026C
    lwz r0, 0x23c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A2294_0000026C
    li r4, 0x5a
    li r5, 0x0
    addi r3, r3, 0x23c
    bl fn_800CB5C8
lbl_fn_804A2294_0000026C:
    lwz r3, lbl_8087F430
    li r4, 0xfa
    bl fn_80370174
    cmpwi r3, 0x1
    beq lbl_fn_804A2294_000002AC
    lwz r3, lbl_8087F430
    lwz r4, 0x5744(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804A2294_000002AC
    lwz r3, 0x4c(r31)
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_804A2294_000002AC
    mr r3, r31
    bl fn_804A233C
lbl_fn_804A2294_000002AC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A2338(void)
{
    nofralloc
    blr
}

asm void fn_804A233C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r0, lbl_8087F430
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_804A233C_0000036C
    lis r4, 0x8d3e
    addi r28, r3, 0x5c
    subi r29, r4, 0x34f7
    li r27, 0x0
    b lbl_fn_804A233C_00000360
lbl_fn_804A233C_000002FC:
    lwz r3, lbl_8087F430
    lwz r4, 0x4(r28)
    bl fn_80370174
    addi r5, r3, 0x1
    mulhw r0, r29, r5
    add r0, r0, r5
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3a
    subf. r0, r0, r5
    bne lbl_fn_804A233C_00000348
    bl fn_802179B4
    mr r30, r3
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    mulli r5, r0, 0x3a
lbl_fn_804A233C_00000348:
    lwz r3, lbl_8087F430
    li r6, 0x0
    lwz r4, 0x4(r28)
    bl fn_80370320
    addi r28, r28, 0x10
    addi r27, r27, 0x1
lbl_fn_804A233C_00000360:
    lwz r0, 0x58(r31)
    cmplw r27, r0
    blt lbl_fn_804A233C_000002FC
lbl_fn_804A233C_0000036C:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_804A233C_00000434
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_804A233C_00000434
    lwz r3, 0x10d8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804A233C_00000434
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804A233C_000003A8
    b lbl_fn_804A233C_00000434
lbl_fn_804A233C_000003A8:
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804A233C_00000434
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    beq lbl_fn_804A233C_000003CC
    b lbl_fn_804A233C_00000434
lbl_fn_804A233C_000003CC:
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_804A233C_00000434
    addi r3, r31, 0x23c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lis r4, lbl_807570D4@ha
    lfs f1, lbl_808871B0
    addi r4, r4, lbl_807570D4@l
    addi r3, r1, 0x8
    addi r4, r4, 0x21
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r31, 0x23c
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r31, 0x23c
    li r4, 0x3c
    bl fn_800CB518
    li r0, 0xf0
    stw r0, 0x240(r31)
lbl_fn_804A233C_00000434:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804A24C4(void)
{
    nofralloc
    subi r0, r4, 0x26e
    cmplwi r0, 0x2
    bgt lbl_fn_804A24C4_0000045C
    li r4, 0x26d
lbl_fn_804A24C4_0000045C:
    lwz r0, 0x58(r3)
    addi r3, r3, 0x5c
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804A24C4_00000488
lbl_fn_804A24C4_00000470:
    lwz r0, 0x0(r3)
    cmpw r4, r0
    bne lbl_fn_804A24C4_00000480
    b lbl_fn_804A24C4_0000048C
lbl_fn_804A24C4_00000480:
    addi r3, r3, 0x10
    bdnz lbl_fn_804A24C4_00000470
lbl_fn_804A24C4_00000488:
    li r3, 0x0
lbl_fn_804A24C4_0000048C:
    cmpwi r3, 0x0
    beq lbl_fn_804A24C4_0000049C
    li r3, 0x1
    blr
lbl_fn_804A24C4_0000049C:
    li r3, 0x0
    blr
}

asm void fn_804A251C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    mr r29, r4
    ble lbl_fn_804A251C_000004DC
    mr r3, r29
    bl fn_80211480
    mr r31, r3
    b lbl_fn_804A251C_000004E0
lbl_fn_804A251C_000004DC:
    li r31, 0x0
lbl_fn_804A251C_000004E0:
    cmpwi r31, 0x0
    beq lbl_fn_804A251C_00000644
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804A251C_00000644
    subi r0, r29, 0x26e
    cmplwi r0, 0x2
    bgt lbl_fn_804A251C_00000504
    li r29, 0x26d
lbl_fn_804A251C_00000504:
    lwz r0, 0x58(r30)
    addi r4, r30, 0x5c
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804A251C_00000530
lbl_fn_804A251C_00000518:
    lwz r0, 0x0(r4)
    cmpw r29, r0
    bne lbl_fn_804A251C_00000528
    b lbl_fn_804A251C_00000534
lbl_fn_804A251C_00000528:
    addi r4, r4, 0x10
    bdnz lbl_fn_804A251C_00000518
lbl_fn_804A251C_00000530:
    li r4, 0x0
lbl_fn_804A251C_00000534:
    cmpwi r4, 0x0
    beq lbl_fn_804A251C_0000063C
    lwz r4, 0x4(r4)
    bl fn_80370174
    lis r4, 0x8d3e
    mr r6, r3
    subi r0, r4, 0x34f7
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r4, r0, 5
    srawi r0, r0, 5
    srwi r3, r0, 31
    srwi r5, r4, 31
    add r0, r0, r3
    mulli r0, r0, 0x3a
    add r3, r4, r5
    subf r4, r0, r6
    bl fn_802179BC
    lfs f2, lbl_808871C0
    fcmpo cr0, f1, f2
    ble lbl_fn_804A251C_00000594
    fsubs f1, f1, f2
    lfs f0, 0x50(r30)
    fmadds f1, f1, f0, f2
lbl_fn_804A251C_00000594:
    lwz r4, lbl_8087F430
    lis r3, 0x5
    subi r0, r3, 0x6c20
    lwz r4, 0x10d0(r4)
    cmpw r4, r0
    blt lbl_fn_804A251C_000005C8
    lis r3, 0x6
    addi r0, r3, 0x1a80
    cmpw r4, r0
    bge lbl_fn_804A251C_000005C8
    lfs f0, lbl_808871C4
    fmuls f1, f1, f0
    b lbl_fn_804A251C_000005E0
lbl_fn_804A251C_000005C8:
    lis r3, 0x6
    addi r0, r3, 0x1a80
    cmpw r4, r0
    blt lbl_fn_804A251C_000005E0
    lfs f0, lbl_808871C8
    fmuls f1, f1, f0
lbl_fn_804A251C_000005E0:
    lwz r0, 0xc8(r31)
    lis r4, 0x4330
    lis r5, lbl_807570C0@ha
    stw r4, 0x8(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_807570C0@l(r5)
    stw r0, 0xc(r1)
    lis r3, 0x6666
    lfs f0, lbl_808871C0
    addi r0, r3, 0x6667
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    mulhw r0, r0, r3
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r3, r0, 0xa
    b lbl_fn_804A251C_00000648
lbl_fn_804A251C_0000063C:
    lwz r3, 0xc8(r31)
    b lbl_fn_804A251C_00000648
lbl_fn_804A251C_00000644:
    li r3, 0x0
lbl_fn_804A251C_00000648:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804A26DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0xfb
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F430
    bl fn_80370174
    lis r4, 0x2e8c
    subi r0, r4, 0x5d17
    mulhw r0, r0, r3
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xb
    subf r3, r0, r3
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A2724(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    ble lbl_fn_804A2724_000006DC
    mr r3, r31
    bl fn_80211480
    b lbl_fn_804A2724_000006E0
lbl_fn_804A2724_000006DC:
    li r3, 0x0
lbl_fn_804A2724_000006E0:
    cmpwi r3, 0x0
    beq lbl_fn_804A2724_0000076C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804A2724_0000076C
    subi r0, r31, 0x26e
    cmplwi r0, 0x2
    bgt lbl_fn_804A2724_00000704
    li r31, 0x26d
lbl_fn_804A2724_00000704:
    lwz r0, 0x58(r30)
    addi r30, r30, 0x5c
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804A2724_00000730
lbl_fn_804A2724_00000718:
    lwz r0, 0x0(r30)
    cmpw r31, r0
    bne lbl_fn_804A2724_00000728
    b lbl_fn_804A2724_00000734
lbl_fn_804A2724_00000728:
    addi r30, r30, 0x10
    bdnz lbl_fn_804A2724_00000718
lbl_fn_804A2724_00000730:
    li r30, 0x0
lbl_fn_804A2724_00000734:
    cmpwi r30, 0x0
    beq lbl_fn_804A2724_0000076C
    lwz r4, 0x8(r30)
    bl fn_80370174
    mr r31, r3
    lwz r3, lbl_8087F430
    lwz r4, 0xc(r30)
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_804A2724_00000764
    li r3, 0x0
    b lbl_fn_804A2724_00000770
lbl_fn_804A2724_00000764:
    divw r3, r31, r3
    b lbl_fn_804A2724_00000770
lbl_fn_804A2724_0000076C:
    li r3, 0x0
lbl_fn_804A2724_00000770:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A2800(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    ble lbl_fn_804A2800_000007B8
    mr r3, r28
    bl fn_80211480
    b lbl_fn_804A2800_000007BC
lbl_fn_804A2800_000007B8:
    li r3, 0x0
lbl_fn_804A2800_000007BC:
    cmpwi r3, 0x0
    beq lbl_fn_804A2800_0000086C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804A2800_0000086C
    subi r0, r28, 0x26e
    mr r4, r28
    cmplwi r0, 0x2
    bgt lbl_fn_804A2800_000007E4
    li r4, 0x26d
lbl_fn_804A2800_000007E4:
    lwz r0, 0x58(r27)
    addi r30, r27, 0x5c
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804A2800_00000810
lbl_fn_804A2800_000007F8:
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_804A2800_00000808
    b lbl_fn_804A2800_00000814
lbl_fn_804A2800_00000808:
    addi r30, r30, 0x10
    bdnz lbl_fn_804A2800_000007F8
lbl_fn_804A2800_00000810:
    li r30, 0x0
lbl_fn_804A2800_00000814:
    cmpwi r30, 0x0
    beq lbl_fn_804A2800_0000086C
    lwz r4, 0x8(r30)
    bl fn_80370174
    mr r31, r3
    mr r3, r27
    mr r4, r28
    bl fn_804A251C
    mullw r0, r3, r29
    lwz r3, lbl_8087F430
    lwz r4, 0x8(r30)
    li r6, 0x0
    add r5, r31, r0
    bl fn_80370320
    lwz r3, lbl_8087F430
    lwz r4, 0xc(r30)
    bl fn_80370174
    add r5, r3, r29
    lwz r3, lbl_8087F430
    lwz r4, 0xc(r30)
    li r6, 0x0
    bl fn_80370320
lbl_fn_804A2800_0000086C:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A28F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    ble lbl_fn_804A28F8_000008B0
    mr r3, r30
    bl fn_80211480
    b lbl_fn_804A28F8_000008B4
lbl_fn_804A28F8_000008B0:
    li r3, 0x0
lbl_fn_804A28F8_000008B4:
    cmpwi r3, 0x0
    beq lbl_fn_804A28F8_00000934
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804A28F8_00000934
    subi r0, r30, 0x26e
    cmplwi r0, 0x2
    bgt lbl_fn_804A28F8_000008D8
    li r30, 0x26d
lbl_fn_804A28F8_000008D8:
    lwz r0, 0x58(r31)
    addi r31, r31, 0x5c
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804A28F8_00000904
lbl_fn_804A28F8_000008EC:
    lwz r0, 0x0(r31)
    cmpw r30, r0
    bne lbl_fn_804A28F8_000008FC
    b lbl_fn_804A28F8_00000908
lbl_fn_804A28F8_000008FC:
    addi r31, r31, 0x10
    bdnz lbl_fn_804A28F8_000008EC
lbl_fn_804A28F8_00000904:
    li r31, 0x0
lbl_fn_804A28F8_00000908:
    cmpwi r31, 0x0
    beq lbl_fn_804A28F8_00000934
    lwz r4, 0x8(r31)
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    lwz r3, lbl_8087F430
    li r5, 0x0
    lwz r4, 0xc(r31)
    li r6, 0x0
    bl fn_80370320
lbl_fn_804A28F8_00000934:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A29C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_804A29C4_000009A4
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    bne lbl_fn_804A29C4_000009A4
    lis r5, lbl_807573D0@ha
    li r3, 0x200
    addi r5, r5, lbl_807573D0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804A29C4_000009A0
    mr r4, r31
    bl fn_804A2A34
lbl_fn_804A29C4_000009A0:
    stw r3, lbl_8087F580
lbl_fn_804A29C4_000009A4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F580
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A2A34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_807907DC@ha
    li r29, 0x0
    addi r3, r3, lbl_807907DC@l
    stw r3, 0x0(r31)
    addi r30, r31, 0xa0
    addi r28, r31, 0x1c0
    stw r29, 0x9c(r31)
lbl_fn_804A2A34_000009F4:
    stw r29, 0x0(r30)
    addi r3, r30, 0x8
    li r4, 0x0
    li r5, 0x40
    stw r29, 0x4(r30)
    bl memset
    addi r30, r30, 0x48
    cmplw r30, r28
    blt lbl_fn_804A2A34_000009F4
    lfs f1, lbl_808871D8
    lis r3, lbl_807573D0@ha
    li r30, 0x0
    lfs f3, lbl_808871D0
    addi r29, r3, lbl_807573D0@l
    lfs f2, lbl_808871D4
    lfs f0, lbl_808871DC
    mr r3, r31
    stw r30, 0x1e8(r31)
    addi r4, r29, 0x1
    li r5, 0x0
    stfs f3, 0x1ec(r31)
    stfs f2, 0x1f0(r31)
    stfs f1, 0x1f4(r31)
    stfs f1, 0x1f8(r31)
    stfs f0, 0x1fc(r31)
    stw r30, 0x4c(r31)
    bl fn_801F3FF8
    stw r3, 0x50(r31)
    li r4, 0x1
    bl fn_800D246C
    stw r30, 0x54(r31)
    mr r3, r31
    addi r4, r29, 0x1d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x58(r31)
    li r4, 0x1
    bl fn_800D246C
    stw r30, 0x5c(r31)
    mr r3, r31
    addi r4, r29, 0x1
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x60(r31)
    li r4, 0x1
    bl fn_800D246C
    stw r30, 0x64(r31)
    mr r3, r31
    addi r4, r29, 0x3a
    li r5, 0x1
    bl fn_801F3FF8
    stw r3, 0x6c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r29, 0x57
    li r5, 0x1
    bl fn_801F3FF8
    stw r3, 0x70(r31)
    li r4, 0x1
    bl fn_800D246C
    li r0, -0x1
    stw r30, 0x68(r31)
    li r27, 0x0
    li r28, 0x0
    stw r0, 0x74(r31)
lbl_fn_804A2A34_00000AFC:
    mr r3, r31
    add r30, r31, r28
    addi r4, r29, 0x57
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x78(r30)
    li r4, 0x1
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_804A2A34_00000AFC
    lis r3, lbl_807573D0@ha
    li r27, 0x0
    addi r3, r3, lbl_807573D0@l
    li r28, 0x0
    addi r29, r3, 0x57
lbl_fn_804A2A34_00000B40:
    mr r3, r31
    mr r4, r29
    bl fn_801F64D0
    add r5, r31, r28
    li r4, 0x1
    stw r3, 0x8c(r5)
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_804A2A34_00000B40
    lis r3, lbl_807573D0@ha
    li r0, -0x1
    addi r30, r3, lbl_807573D0@l
    li r29, 0x0
    stw r0, 0x88(r31)
    mr r3, r31
    addi r4, r30, 0x75
    li r5, 0x1
    stw r0, 0x1c0(r31)
    stw r29, 0x1c4(r31)
    bl fn_801F3FF8
    stw r3, 0x1c8(r31)
    li r4, 0x1
    bl fn_800D246C
    stw r29, 0x9c(r31)
    li r26, 0x0
    li r28, 0x0
    stw r29, 0x1cc(r31)
lbl_fn_804A2A34_00000BB4:
    add r27, r31, r28
    mr r3, r31
    stw r29, 0x1d0(r27)
    addi r4, r30, 0x95
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x1d8(r27)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xbd
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x1e0(r27)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x2
    blt lbl_fn_804A2A34_00000BB4
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A2C98(void)
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
    beq lbl_fn_804A2C98_00000C98
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    beq lbl_fn_804A2C98_00000C58
    li r0, 0x0
    stw r0, lbl_8087F580
lbl_fn_804A2C98_00000C58:
    addic. r0, r3, 0x1e8
    beq lbl_fn_804A2C98_00000C7C
    lwz r4, 0x1e8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804A2C98_00000C7C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_804A2C98_00000C7C
    bl fn_800897D8
lbl_fn_804A2C98_00000C7C:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804A2C98_00000C98
    mr r3, r30
    bl dtor_80084684
lbl_fn_804A2C98_00000C98:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A2D2C(void)
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
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804A2D2C_00000EFC
    lwz r3, 0x50(r31)
    li r4, 0x1
    lfs f1, lbl_808871D0
    li r5, 0x0
    lfs f2, lbl_808871E0
    bl fn_805115D4
    lwz r3, 0x58(r31)
    li r4, 0x1
    lfs f1, lbl_808871D0
    li r5, 0x0
    lfs f2, lbl_808871E0
    bl fn_805115D4
    lwz r3, 0x60(r31)
    li r4, 0x1
    lfs f1, lbl_808871D0
    li r5, 0x0
    lfs f2, lbl_808871E0
    bl fn_805115D4
    lfs f1, lbl_808871D0
    li r4, 0x0
    lwz r3, 0x6c(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805115D4
    lwz r3, 0x70(r31)
    li r4, 0x0
    lfs f1, lbl_808871D0
    li r5, 0x1
    lfs f2, lbl_808871E4
    bl fn_805115D4
    mr r29, r31
    li r30, 0x0
lbl_fn_804A2D2C_00000D60:
    lwz r3, 0x78(r29)
    li r4, 0x0
    lfs f1, lbl_808871D0
    li r5, 0x1
    lfs f2, lbl_808871E4
    bl fn_805114D8
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x4
    blt lbl_fn_804A2D2C_00000D60
    mr r29, r31
    li r30, 0x0
lbl_fn_804A2D2C_00000D90:
    lwz r3, 0x8c(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x8c(r29)
    addi r30, r30, 0x1
    cmpwi r30, 0x4
    addi r29, r29, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_804A2D2C_00000D90
    lwz r3, 0x1c8(r31)
    li r4, 0x1
    lfs f1, lbl_808871D0
    li r5, 0x0
    lfs f2, lbl_808871E8
    bl fn_805115D4
    mr r29, r31
    li r28, 0x0
    li r30, 0x0
lbl_fn_804A2D2C_00000DE0:
    lwz r3, 0x1d8(r29)
    li r4, 0x1
    lfs f1, lbl_808871D0
    li r5, 0x0
    lfs f2, lbl_808871E4
    bl fn_805115D4
    lwz r3, 0x1e0(r29)
    li r4, 0x0
    lfs f1, lbl_808871D0
    li r5, 0x1
    lfs f2, lbl_808871E4
    bl fn_805115D4
    lwz r3, 0x1d8(r29)
    addi r28, r28, 0x1
    cmpwi r28, 0x2
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1e0(r29)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    stw r30, 0x1d0(r29)
    addi r29, r29, 0x4
    blt lbl_fn_804A2D2C_00000DE0
    lwz r0, 0x1e8(r31)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    cmpwi r0, 0x0
    addi r4, r3, 0xe5
    bne lbl_fn_804A2D2C_00000E7C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_804A2D2C_00000E7C
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1e8(r31)
    mr r29, r3
    b lbl_fn_804A2D2C_00000E80
lbl_fn_804A2D2C_00000E7C:
    li r29, 0x0
lbl_fn_804A2D2C_00000E80:
    lis r30, lbl_807573D0@ha
    lfs f1, lbl_808871EC
    addi r30, r30, lbl_807573D0@l
    lfs f2, lbl_808871F0
    lfs f3, lbl_808871E4
    mr r3, r29
    addi r4, r30, 0xf0
    addi r5, r31, 0x1ec
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_808871EC
    mr r3, r29
    lfs f2, lbl_808871F0
    addi r4, r30, 0xfe
    lfs f3, lbl_808871E4
    addi r5, r31, 0x1f4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_808871EC
    mr r3, r29
    lfs f2, lbl_808871F0
    addi r4, r30, 0x10c
    lfs f3, lbl_808871E4
    addi r5, r31, 0x1fc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    li r3, 0x1
    b lbl_fn_804A2D2C_00000F00
lbl_fn_804A2D2C_00000EFC:
    li r3, 0x0
lbl_fn_804A2D2C_00000F00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A2F98(void)
{
    nofralloc
    lwz r0, 0x38(r3)
    li r4, 0x0
    stw r4, 0x4c(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r4, 0x54(r3)
    stw r4, 0x64(r3)
    stw r4, 0x68(r3)
    stw r0, 0x38(r3)
    blr
}

asm void fn_804A2FBC(void)
{
    nofralloc
    lwz r5, 0x78(r3)
    li r6, -0x1
    li r0, 0x0
    lfs f2, lbl_808871D0
    lwz r4, 0x104(r5)
    lfs f1, lbl_808871F4
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lfs f0, lbl_808871E8
    lwz r5, 0x7c(r3)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0x80(r3)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0x84(r3)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    stw r6, 0x74(r3)
    lwz r5, 0x8c(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r5, 0x90(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r5, 0x94(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r5, 0x98(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    stw r6, 0x88(r3)
    lwz r4, 0x50(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x54(r3)
    stfs f2, 0x100(r4)
    lwz r4, 0x50(r3)
    stfs f1, 0x104(r4)
    lwz r4, 0x58(r3)
    stfs f2, 0x100(r4)
    lwz r4, 0x58(r3)
    stfs f1, 0x104(r4)
    stw r0, 0x5c(r3)
    lwz r4, 0x60(r3)
    stfs f2, 0x100(r4)
    lwz r4, 0x60(r3)
    stfs f1, 0x104(r4)
    stw r0, 0x64(r3)
    lwz r4, 0x6c(r3)
    stw r0, 0x68(r3)
    stfs f2, 0x100(r4)
    lwz r4, 0x6c(r3)
    stfs f0, 0x104(r4)
    stw r6, 0x1c0(r3)
    lwz r4, 0x1c8(r3)
    stw r0, 0x1c4(r3)
    stfs f2, 0x100(r4)
    lwz r4, 0x1c8(r3)
    stfs f0, 0x104(r4)
    lwz r4, 0x1d8(r3)
    stfs f2, 0x100(r4)
    lwz r5, 0x1d8(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r4, 0x1e0(r3)
    stfs f2, 0x100(r4)
    lwz r5, 0x1e0(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    stw r0, 0x1d0(r3)
    lwz r4, 0x1dc(r3)
    stfs f2, 0x100(r4)
    lwz r5, 0x1dc(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r4, 0x1e4(r3)
    stfs f2, 0x100(r4)
    lwz r5, 0x1e4(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r4, 0x38(r3)
    stw r0, 0x1d4(r3)
    ori r0, r4, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_804A313C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4c(r3)
    lwz r5, 0x50(r3)
    li r4, -0x1
    stw r0, 0x54(r3)
    lfs f2, lbl_808871D0
    stfs f2, 0x100(r5)
    lfs f1, lbl_808871F4
    lwz r5, 0x50(r3)
    lfs f0, lbl_808871E8
    stfs f1, 0x104(r5)
    lwz r5, 0x58(r3)
    stfs f2, 0x100(r5)
    lwz r5, 0x58(r3)
    stfs f1, 0x104(r5)
    stw r0, 0x5c(r3)
    lwz r5, 0x60(r3)
    stfs f2, 0x100(r5)
    lwz r5, 0x60(r3)
    stfs f1, 0x104(r5)
    stw r0, 0x64(r3)
    lwz r5, 0x6c(r3)
    stw r0, 0x68(r3)
    stfs f2, 0x100(r5)
    lwz r5, 0x6c(r3)
    stfs f0, 0x104(r5)
    stw r4, 0x1c0(r3)
    lwz r4, 0x1c8(r3)
    stw r0, 0x1c4(r3)
    stfs f2, 0x100(r4)
    lwz r4, 0x1c8(r3)
    stfs f0, 0x104(r4)
    lwz r4, 0x1d8(r3)
    stfs f2, 0x100(r4)
    lwz r5, 0x1d8(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r4, 0x1e0(r3)
    stfs f2, 0x100(r4)
    lwz r5, 0x1e0(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    stw r0, 0x1d0(r3)
    lwz r4, 0x1dc(r3)
    stfs f2, 0x100(r4)
    lwz r5, 0x1dc(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r4, 0x1e4(r3)
    stfs f2, 0x100(r4)
    lwz r5, 0x1e4(r3)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    stw r0, 0x1d4(r3)
    blr
}

asm void fn_804A3228(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0x4c(r3)
    stw r4, 0x9c(r3)
    cmpwi r0, 0x0
    stw r4, 0x48(r3)
    lwz r30, lbl_8087EF70
    beq lbl_fn_804A3228_00001240
    lwz r3, 0x50(r3)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_804A3228_000013A8
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_804A3228_00001234
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804A3228_000013A8
lbl_fn_804A3228_00001234:
    li r0, 0x1
    stw r0, 0x48(r31)
    b lbl_fn_804A3228_000013A8
lbl_fn_804A3228_00001240:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A3228_000012A8
    lwz r3, 0x58(r3)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_804A3228_000013A8
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_804A3228_0000129C
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804A3228_000013A8
lbl_fn_804A3228_0000129C:
    li r0, 0x1
    stw r0, 0x48(r31)
    b lbl_fn_804A3228_000013A8
lbl_fn_804A3228_000012A8:
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A3228_000013A8
    lwz r3, 0x6c(r3)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_804A3228_000013A8
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804A3228_000012F8
    li r0, 0x1
    stw r0, 0x48(r31)
    b lbl_fn_804A3228_000013A8
lbl_fn_804A3228_000012F8:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804A3228_00001320
    li r0, 0x1
    stw r0, 0x68(r31)
    stw r0, 0x48(r31)
    b lbl_fn_804A3228_000013A8
lbl_fn_804A3228_00001320:
    mr r3, r30
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804A3228_00001380
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804A3228_00001380
    mr r3, r30
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804A3228_00001380
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804A3228_000013A8
lbl_fn_804A3228_00001380:
    lwz r0, 0x68(r31)
    addi r3, r1, 0x8
    li r4, 0x3
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x68(r31)
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804A3228_000013A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A3438(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A3438_00001400
    li r0, 0x0
    stw r0, 0x64(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x54(r3)
lbl_fn_804A3438_00001400:
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A3438_0000141C
    lwz r4, 0x50(r3)
    lfs f0, lbl_808871F8
    stfs f0, 0x104(r4)
    b lbl_fn_804A3438_00001428
lbl_fn_804A3438_0000141C:
    lwz r4, 0x50(r3)
    lfs f0, lbl_808871E0
    stfs f0, 0x104(r4)
lbl_fn_804A3438_00001428:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A3438_00001444
    lwz r4, 0x58(r3)
    lfs f0, lbl_808871F8
    stfs f0, 0x104(r4)
    b lbl_fn_804A3438_00001450
lbl_fn_804A3438_00001444:
    lwz r4, 0x58(r3)
    lfs f0, lbl_808871E0
    stfs f0, 0x104(r4)
lbl_fn_804A3438_00001450:
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A3438_0000146C
    lwz r4, 0x60(r3)
    lfs f0, lbl_808871F8
    stfs f0, 0x104(r4)
    b lbl_fn_804A3438_00001478
lbl_fn_804A3438_0000146C:
    lwz r4, 0x60(r3)
    lfs f0, lbl_808871E0
    stfs f0, 0x104(r4)
lbl_fn_804A3438_00001478:
    li r0, 0x0
    stw r0, 0x5c(r3)
    lwz r4, 0x70(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A3438_000015E0
    lwz r4, 0x6c(r3)
    lfs f0, lbl_808871E4
    stfs f0, 0x104(r4)
    lwz r4, 0x6c(r3)
    lfs f1, 0xa0(r4)
    lfs f0, 0x100(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_804A3438_000015EC
    lwz r4, 0x70(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804A3438_000015EC
    lwz r0, 0x38(r4)
    lis r30, lbl_807573D0@ha
    addi r30, r30, lbl_807573D0@l
    addi r3, r1, 0x20
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    addi r4, r30, 0x119
    lwz r5, 0x68(r31)
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r29, 0x6c(r31)
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r4, 0x70(r31)
    addi r3, r30, 0x128
    lfs f31, 0x8(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x70(r31)
    addi r3, r30, 0x128
    lfs f31, 0xc(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x70(r31)
    addi r3, r30, 0x128
    lfs f31, 0x18(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x70(r31)
    addi r3, r30, 0x133
    lfs f31, 0x10(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r4, 0x70(r31)
    addi r3, r30, 0x139
    lfs f31, 0x14(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    b lbl_fn_804A3438_000015EC
lbl_fn_804A3438_000015E0:
    lwz r3, 0x6c(r3)
    lfs f0, lbl_808871E8
    stfs f0, 0x104(r3)
lbl_fn_804A3438_000015EC:
    lwz r0, 0x74(r31)
    li r5, 0x1
    lwz r3, 0x78(r31)
    li r8, 0x0
    srwi r0, r0, 31
    li r4, 0x2
    xori r6, r0, 0x1
    lwz r0, 0x104(r3)
    rlwimi r0, r6, 23, 8, 8
    stw r0, 0x104(r3)
    li r0, 0x3
    li r3, -0x1
    lwz r9, 0x74(r31)
    lwz r6, 0x7c(r31)
    srawi r7, r9, 31
    subfc r5, r5, r9
    lwz r5, 0x104(r6)
    adde r7, r7, r8
    rlwimi r5, r7, 23, 8, 8
    stw r5, 0x104(r6)
    lwz r7, 0x74(r31)
    lwz r5, 0x80(r31)
    srawi r6, r7, 31
    subfc r4, r4, r7
    lwz r4, 0x104(r5)
    adde r6, r6, r8
    rlwimi r4, r6, 23, 8, 8
    stw r4, 0x104(r5)
    lwz r6, 0x74(r31)
    lwz r4, 0x84(r31)
    srawi r5, r6, 31
    subfc r0, r0, r6
    lwz r0, 0x104(r4)
    adde r5, r5, r8
    rlwimi r0, r5, 23, 8, 8
    stw r0, 0x104(r4)
    lwz r0, 0x88(r31)
    stw r3, 0x74(r31)
    cmpw r8, r0
    bgt lbl_fn_804A3438_000016A0
    lwz r3, 0x8c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804A3438_000016B0
lbl_fn_804A3438_000016A0:
    lwz r3, 0x8c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804A3438_000016B0:
    lwz r0, 0x88(r31)
    li r3, 0x1
    cmpw r3, r0
    bgt lbl_fn_804A3438_000016D4
    lwz r3, 0x90(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804A3438_000016E4
lbl_fn_804A3438_000016D4:
    lwz r3, 0x90(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804A3438_000016E4:
    lwz r0, 0x88(r31)
    li r3, 0x2
    cmpw r3, r0
    bgt lbl_fn_804A3438_00001708
    lwz r3, 0x94(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804A3438_00001718
lbl_fn_804A3438_00001708:
    lwz r3, 0x94(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804A3438_00001718:
    lwz r0, 0x88(r31)
    li r3, 0x3
    cmpw r3, r0
    bgt lbl_fn_804A3438_0000173C
    lwz r3, 0x98(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804A3438_0000174C
lbl_fn_804A3438_0000173C:
    lwz r3, 0x98(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804A3438_0000174C:
    li r0, -0x1
    stw r0, 0x88(r31)
    lwz r3, 0x1c8(r31)
    lfs f0, lbl_808871E8
    stfs f0, 0x104(r3)
    lwz r0, 0x1c0(r31)
    cmpwi r0, 0x0
    blt lbl_fn_804A3438_00001778
    lwz r3, 0x1c8(r31)
    lfs f0, lbl_808871E4
    stfs f0, 0x104(r3)
lbl_fn_804A3438_00001778:
    lwz r0, 0x1c4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804A3438_000017A4
    lwz r3, 0x1c8(r31)
    lfs f0, lbl_808871FC
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804A3438_000017C0
    stfs f0, 0x100(r3)
    b lbl_fn_804A3438_000017C0
lbl_fn_804A3438_000017A4:
    lwz r3, 0x1c8(r31)
    lfs f0, lbl_80887200
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804A3438_000017C0
    stfs f0, 0x100(r3)
lbl_fn_804A3438_000017C0:
    li r3, -0x1
    li r0, 0x0
    stw r3, 0x1c0(r31)
    stw r0, 0x1c4(r31)
    lwz r3, lbl_8087EEE0
    bl fn_80076FF8
    lfs f0, lbl_80887204
    fcmpo cr0, f1, f0
    bge lbl_fn_804A3438_00001814
    lwz r4, 0x1c8(r31)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    lfs f31, 0x1fc(r31)
    addi r3, r3, 0x13f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    b lbl_fn_804A3438_0000183C
lbl_fn_804A3438_00001814:
    lwz r4, 0x1c8(r31)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    addi r3, r3, 0x13f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808871D0
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
lbl_fn_804A3438_0000183C:
    li r0, 0x2
    mr r3, r31
    lfs f2, lbl_80887208
    li r4, 0x0
    lfs f0, lbl_808871D0
    li r5, 0x0
    mtctr r0
lbl_fn_804A3438_00001858:
    lwz r6, 0x1d8(r3)
    lwz r9, 0x1cc(r31)
    lwz r0, 0x38(r6)
    xor r8, r9, r4
    ori r0, r0, 0x4
    stw r0, 0x38(r6)
    srawi r7, r8, 1
    and r0, r8, r9
    lwz r6, 0x1e0(r3)
    subf r0, r0, r7
    srwi. r0, r0, 31
    lwz r0, 0x38(r6)
    ori r0, r0, 0x4
    stw r0, 0x38(r6)
    beq lbl_fn_804A3438_000018F0
    lwz r6, 0x1d8(r3)
    lfs f1, 0x100(r6)
    fcmpo cr0, f1, f2
    cror eq, gt, eq
    bne lbl_fn_804A3438_000018E0
    stfs f2, 0x100(r6)
    lwz r0, 0x1d0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A3438_000018CC
    lwz r6, 0x1d8(r3)
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    b lbl_fn_804A3438_00001938
lbl_fn_804A3438_000018CC:
    lwz r6, 0x1e0(r3)
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    b lbl_fn_804A3438_00001938
lbl_fn_804A3438_000018E0:
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    b lbl_fn_804A3438_00001938
lbl_fn_804A3438_000018F0:
    lwz r6, 0x1d8(r3)
    lfs f3, 0xa0(r6)
    lfs f1, 0x100(r6)
    fcmpo cr0, f1, f3
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    bne lbl_fn_804A3438_0000191C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804A3438_0000192C
lbl_fn_804A3438_0000191C:
    stfs f0, 0x100(r6)
    lwz r6, 0x1e0(r3)
    stfs f0, 0x100(r6)
    b lbl_fn_804A3438_00001938
lbl_fn_804A3438_0000192C:
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
lbl_fn_804A3438_00001938:
    stw r5, 0x1d0(r3)
    addi r3, r3, 0x4
    addi r4, r4, 0x1
    bdnz lbl_fn_804A3438_00001858
    li r0, 0x0
    stw r0, 0x1cc(r31)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804A39EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f2
    stfd f30, 0x10(r1)
    fmr f30, f1
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_804A39EC_000019D0
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0xfc(r30)
    lis r3, fn_804A3BD4@ha
    rlwimi r0, r31, 28, 3, 3
    stw r0, 0xfc(r30)
    addi r3, r3, fn_804A3BD4@l
    stfs f31, 0x104(r30)
    stfs f30, 0x100(r30)
    stw r3, 0xe4(r30)
lbl_fn_804A39EC_000019D0:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A3A68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f2
    stfd f30, 0x10(r1)
    fmr f30, f1
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_804A3A68_00001A58
    li r4, 0x0
    bl fn_800D246C
    neg r0, r31
    stfs f31, 0x54(r30)
    or r0, r0, r31
    mr r3, r30
    srwi r0, r0, 31
    stb r0, 0x4d(r30)
    stfs f30, 0x50(r30)
    bl fn_801F6C10
    lis r4, fn_804A3BD4@ha
    addi r4, r4, fn_804A3BD4@l
    stw r4, 0x9c(r3)
lbl_fn_804A3A68_00001A58:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
