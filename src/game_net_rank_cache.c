#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_26(void);
extern void _savegpr_20(void);
extern void _savegpr_26(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800A58D0(void);
extern void fn_800CB3A0(void);
extern void fn_80116EB8(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_801F6C2C(void);
extern void fn_801F6C80(void);
extern void fn_801F837C(void);
extern void fn_80202D00(void);
extern void fn_803750E4(void);
extern void fn_80473F50(void);
extern void fn_804A3C24(void);
extern void fn_804A62C8(void);
extern void fn_80510D68(void);
extern void fn_80510E98(void);
extern void fn_805113EC(void);
extern void fn_805114D8(void);
extern void fn_805115D4(void);
extern void fn_8052293C(void);
extern void fn_8052DEF0(void);
extern void fn_8057EF44(void);
extern void fn_8057F158(void);
extern void fn_8057F19C(void);
extern void fn_8057F1B8(void);
extern void fn_80682428(void);

/* External data declarations */
extern u8 jumptable_80793598[];
extern u8 jumptable_807935BC[];
extern u8 lbl_8075C300[];
extern u8 lbl_8075C680[];
extern u8 lbl_8075C698[];
extern u8 lbl_8075C6A8[];
extern u8 lbl_8075C6C4[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F430;
extern u32 lbl_8087F580;
extern u32 lbl_8087F9C0;
extern u32 lbl_808879F0;
extern u32 lbl_808879F8;
extern u32 lbl_808879FC;
extern u32 lbl_80887A04;
extern u32 lbl_80887A08;
extern u32 lbl_80887A30;
extern u32 lbl_80887A34;
extern u32 lbl_80887A38;
extern u32 lbl_80887A3C;
extern u32 lbl_80887A40;
extern u32 lbl_80887A44;
extern u32 lbl_80887A48;
extern u32 lbl_80887A4C;
extern u32 lbl_80887A50;
extern u32 lbl_80887A54;

/* Function declarations */
void fn_80524824(void);
void fn_80524C00(void);
void fn_80524D54(void);
void fn_80524DA0(void);
void fn_80524E5C(void);
void fn_80524E84(void);
void fn_805251D0(void);
void fn_8052549C(void);
void fn_805256C8(void);
void fn_80525804(void);
void fn_80525A0C(void);
void fn_80525F0C(void);
void fn_80526138(void);

asm void fn_80524824(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_20
    lbz r0, 0x96(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80524824_000003BC
    lwz r0, 0x4c(r3)
    li r31, 0x1
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80524824_00000074
lbl_fn_80524824_00000044:
    lwz r4, 0x50(r3)
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_80524824_0000006C
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80524824_0000006C
    li r31, 0x0
    b lbl_fn_80524824_00000074
lbl_fn_80524824_0000006C:
    addi r5, r5, 0x40
    bdnz lbl_fn_80524824_00000044
lbl_fn_80524824_00000074:
    mr r5, r30
    li r7, 0x0
lbl_fn_80524824_0000007C:
    lwz r4, 0xf0(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80524824_000000A0
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80524824_000000A0
    li r0, 0x1
    b lbl_fn_80524824_000000E4
lbl_fn_80524824_000000A0:
    lwz r0, 0xf4(r5)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80524824_000000E0
lbl_fn_80524824_000000B4:
    lwz r0, 0xf8(r5)
    add r4, r0, r6
    lwz r4, 0x18(r4)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80524824_000000D8
    li r0, 0x1
    b lbl_fn_80524824_000000E4
lbl_fn_80524824_000000D8:
    addi r6, r6, 0x20
    bdnz lbl_fn_80524824_000000B4
lbl_fn_80524824_000000E0:
    li r0, 0x0
lbl_fn_80524824_000000E4:
    cmpwi r0, 0x0
    beq lbl_fn_80524824_000000F0
    li r31, 0x0
lbl_fn_80524824_000000F0:
    addi r7, r7, 0x1
    addi r5, r5, 0xc
    cmpwi r7, 0x6
    blt lbl_fn_80524824_0000007C
    lwz r4, 0x138(r3)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80524824_00000118
    li r31, 0x0
lbl_fn_80524824_00000118:
    lwz r4, 0x13c(r3)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80524824_00000130
    li r31, 0x0
lbl_fn_80524824_00000130:
    lwz r4, 0x144(r3)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80524824_00000148
    li r31, 0x0
lbl_fn_80524824_00000148:
    lwz r4, 0x140(r3)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80524824_00000160
    li r31, 0x0
lbl_fn_80524824_00000160:
    lwz r4, 0x148(r3)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80524824_00000178
    li r31, 0x0
lbl_fn_80524824_00000178:
    addi r3, r3, 0x184
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80524824_0000018C
    li r31, 0x0
lbl_fn_80524824_0000018C:
    lwz r3, 0x17c(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80524824_000001A4
    li r31, 0x0
lbl_fn_80524824_000001A4:
    lwz r3, 0x174(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80524824_000001BC
    li r31, 0x0
lbl_fn_80524824_000001BC:
    lwz r3, 0x178(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80524824_000001D4
    li r31, 0x0
lbl_fn_80524824_000001D4:
    cmpwi r31, 0x0
    beq lbl_fn_80524824_000003BC
    mr r3, r30
    bl fn_8052293C
    li r22, 0x0
    li r21, 0x0
    b lbl_fn_80524824_00000214
lbl_fn_80524824_000001F0:
    lfs f1, lbl_808879F0
    li r4, 0x1
    lwz r3, 0x50(r30)
    li r5, 0x0
    fmr f2, f1
    lwzx r3, r3, r21
    bl fn_805113EC
    addi r21, r21, 0x40
    addi r22, r22, 0x1
lbl_fn_80524824_00000214:
    lwz r0, 0x4c(r30)
    cmpw r22, r0
    blt lbl_fn_80524824_000001F0
    lis r25, lbl_8075C680@ha
    lis r31, lbl_8075C6C4@ha
    mr r24, r30
    li r20, 0x0
    addi r25, r25, lbl_8075C680@l
    addi r31, r31, lbl_8075C6C4@l
lbl_fn_80524824_00000238:
    lfs f1, lbl_808879F0
    li r4, 0x1
    lwz r28, 0x0(r25)
    li r5, 0x0
    fmr f2, f1
    lwz r3, 0xf0(r24)
    bl fn_805113EC
    mr r22, r28
    mr r21, r28
    li r27, 0x0
    li r23, 0x0
    b lbl_fn_80524824_000002D0
lbl_fn_80524824_00000268:
    lwz r0, 0xf8(r24)
    li r4, 0x1
    lfs f1, lbl_808879F0
    li r5, 0x0
    add r26, r0, r23
    fmr f2, f1
    lwz r3, 0x18(r26)
    bl fn_805114D8
    cmpwi r28, 0x0
    beq lbl_fn_80524824_000002C0
    lwz r0, 0x14(r22)
    mr r3, r21
    stw r0, 0x1c(r26)
    lwz r0, 0x10(r22)
    stw r0, 0xc(r26)
    bl fn_80116EB8
    mr r29, r3
    lwz r3, 0x18(r26)
    bl fn_80202D00
    mr r5, r29
    addi r4, r31, 0x24b
    bl fn_801F837C
lbl_fn_80524824_000002C0:
    addi r23, r23, 0x20
    addi r22, r22, 0x18
    addi r21, r21, 0x18
    addi r27, r27, 0x1
lbl_fn_80524824_000002D0:
    lwz r0, 0xf4(r24)
    cmpw r27, r0
    blt lbl_fn_80524824_00000268
    addi r20, r20, 0x1
    addi r24, r24, 0xc
    cmpwi r20, 0x6
    addi r25, r25, 0x4
    blt lbl_fn_80524824_00000238
    lwz r3, 0x138(r30)
    li r4, 0x1
    lfs f1, lbl_808879F0
    li r5, 0x1
    lfs f2, lbl_808879F8
    bl fn_805113EC
    lfs f31, lbl_808879F0
    mr r26, r30
    li r20, 0x0
lbl_fn_80524824_00000314:
    lwz r3, 0x13c(r26)
    li r4, 0x1
    lfs f1, lbl_808879F0
    li r5, 0x0
    lfs f2, lbl_808879F8
    bl fn_805113EC
    lwz r3, 0x144(r26)
    li r4, 0x1
    lfs f1, lbl_808879F0
    li r5, 0x1
    lfs f2, lbl_808879F8
    bl fn_805113EC
    addi r20, r20, 0x1
    stfs f31, 0x14c(r26)
    cmpwi r20, 0x2
    addi r26, r26, 0x4
    blt lbl_fn_80524824_00000314
    lwz r3, 0x17c(r30)
    li r4, 0x1
    lfs f1, lbl_808879F0
    li r5, 0x0
    lfs f2, lbl_808879F8
    bl fn_805115D4
    lwz r3, 0x174(r30)
    li r4, 0x1
    lfs f1, lbl_808879F0
    li r5, 0x0
    lfs f2, lbl_808879F8
    bl fn_805115D4
    lfs f1, lbl_808879F0
    li r4, 0x1
    lwz r3, 0x178(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805115D4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x96(r30)
lbl_fn_80524824_000003BC:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_20
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80524C00(void)
{
    nofralloc
    cntlzw r5, r4
    li r8, 0x0
    li r6, 0x0
    b lbl_fn_80524C00_00000440
lbl_fn_80524C00_000003EC:
    lwz r0, 0x50(r3)
    add r7, r0, r6
    lbz r0, 0x3c(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80524C00_00000438
    lwz r7, 0x0(r7)
    cmpwi r7, 0x0
    beq lbl_fn_80524C00_00000418
    lwz r0, 0x104(r7)
    rlwimi r0, r4, 23, 8, 8
    stw r0, 0x104(r7)
lbl_fn_80524C00_00000418:
    lwz r0, 0x50(r3)
    add r7, r0, r6
    lwz r7, 0x8(r7)
    cmpwi r7, 0x0
    beq lbl_fn_80524C00_00000438
    lwz r0, 0x88(r7)
    rlwimi r0, r5, 26, 0, 0
    stw r0, 0x88(r7)
lbl_fn_80524C00_00000438:
    addi r6, r6, 0x40
    addi r8, r8, 0x1
lbl_fn_80524C00_00000440:
    lwz r0, 0x4c(r3)
    cmpw r8, r0
    blt lbl_fn_80524C00_000003EC
    li r0, 0x6
    mr r6, r3
    li r9, 0x0
    mtctr r0
lbl_fn_80524C00_0000045C:
    lwz r0, 0xe8(r3)
    mr r10, r4
    cmpw r9, r0
    bne lbl_fn_80524C00_00000478
    cmpwi r4, 0x0
    bne lbl_fn_80524C00_00000478
    li r10, 0x1
lbl_fn_80524C00_00000478:
    lwz r5, 0xf0(r6)
    cmpwi r5, 0x0
    beq lbl_fn_80524C00_00000490
    lwz r0, 0x104(r5)
    rlwimi r0, r10, 23, 8, 8
    stw r0, 0x104(r5)
lbl_fn_80524C00_00000490:
    li r5, 0x0
    li r7, 0x0
    b lbl_fn_80524C00_000004C4
lbl_fn_80524C00_0000049C:
    lwz r0, 0xf8(r6)
    add r8, r0, r7
    lwz r8, 0x18(r8)
    cmpwi r8, 0x0
    beq lbl_fn_80524C00_000004BC
    lwz r0, 0x104(r8)
    rlwimi r0, r10, 23, 8, 8
    stw r0, 0x104(r8)
lbl_fn_80524C00_000004BC:
    addi r7, r7, 0x20
    addi r5, r5, 0x1
lbl_fn_80524C00_000004C4:
    lwz r0, 0xf4(r6)
    cmpw r5, r0
    blt lbl_fn_80524C00_0000049C
    cmpwi r9, 0x0
    bne lbl_fn_80524C00_000004F8
    lwz r5, 0x13c(r3)
    lwz r0, 0x104(r5)
    rlwimi r0, r10, 23, 8, 8
    stw r0, 0x104(r5)
    lwz r5, 0x140(r3)
    lwz r0, 0x104(r5)
    rlwimi r0, r10, 23, 8, 8
    stw r0, 0x104(r5)
lbl_fn_80524C00_000004F8:
    cmpwi r9, 0x1
    bne lbl_fn_80524C00_00000520
    lwz r5, 0x144(r3)
    lwz r0, 0x104(r5)
    rlwimi r0, r10, 23, 8, 8
    stw r0, 0x104(r5)
    lwz r5, 0x148(r3)
    lwz r0, 0x104(r5)
    rlwimi r0, r10, 23, 8, 8
    stw r0, 0x104(r5)
lbl_fn_80524C00_00000520:
    addi r6, r6, 0xc
    addi r9, r9, 0x1
    bdnz lbl_fn_80524C00_0000045C
    blr
}

asm void fn_80524D54(void)
{
    nofralloc
    lfs f1, lbl_808879F8
    li r0, 0x0
    lfs f0, lbl_808879F0
    li r4, 0x1
    stb r4, 0x96(r3)
    stw r0, 0xe0(r3)
    stw r0, 0xe8(r3)
    stw r0, 0x80(r3)
    stw r0, 0x84(r3)
    stw r0, 0xd8(r3)
    stw r0, 0xdc(r3)
    stw r0, 0x154(r3)
    stw r0, 0x158(r3)
    stfs f1, 0x160(r3)
    stfs f0, 0x168(r3)
    stw r0, 0x15c(r3)
    stfs f1, 0x164(r3)
    stfs f0, 0x16c(r3)
    b fn_8052549C
}

asm void fn_80524DA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    bl fn_805251D0
    lfs f0, lbl_808879FC
    li r30, 0x0
    lis r29, lbl_8075C300@ha
    lis r31, lbl_8075C6C4@ha
    stw r30, 0xd8(r26)
    addi r29, r29, lbl_8075C300@l
    addi r31, r31, lbl_8075C6C4@l
    li r27, 0x0
    stw r30, 0x80(r26)
    li r28, 0x0
    stw r30, 0xe0(r26)
    stfs f0, 0x58(r26)
    stb r30, 0x95(r26)
    b lbl_fn_80524DA0_000005F8
lbl_fn_80524DA0_000005D0:
    lwz r3, 0x4(r29)
    addi r4, r31, 0x35b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80524DA0_000005EC
    lwz r3, 0x50(r26)
    stwx r30, r3, r28
lbl_fn_80524DA0_000005EC:
    addi r29, r29, 0xc
    addi r28, r28, 0x40
    addi r27, r27, 0x1
lbl_fn_80524DA0_000005F8:
    lwz r0, 0x4c(r26)
    cmpw r27, r0
    blt lbl_fn_80524DA0_000005D0
    lwz r3, 0x174(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80524DA0_00000618
    lfs f0, lbl_808879F0
    stfs f0, 0x100(r3)
lbl_fn_80524DA0_00000618:
    li r0, 0x0
    stb r0, 0x96(r26)
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80524E5C(void)
{
    nofralloc
    li r4, 0x0
    li r0, 0x1
    stw r4, 0xe0(r3)
    stw r4, 0xe8(r3)
    stw r4, 0x80(r3)
    stw r4, 0x84(r3)
    stw r4, 0xd8(r3)
    stw r4, 0xdc(r3)
    stb r0, 0x95(r3)
    b fn_8052549C
}

asm void fn_80524E84(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f0, lbl_808879F8
    li r4, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lwz r0, 0xd8(r3)
    stfs f0, 0x58(r3)
    cmplwi r0, 0x8
    stb r4, 0x95(r3)
    bgt lbl_fn_80524E84_00000934
    lis r4, jumptable_80793598@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80793598@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    bl fn_80525804
    b lbl_fn_80524E84_00000934
    bl fn_80525F0C
    b lbl_fn_80524E84_00000934
    lwz r4, lbl_8087F9C0
    lwz r0, 0x28(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80524E84_000006E8
    li r0, 0x1
    stw r0, 0xe4(r3)
    li r4, 0x1
    li r5, 0x1
    bl fn_80525A0C
    b lbl_fn_80524E84_00000934
lbl_fn_80524E84_000006E8:
    li r4, 0x2
    li r5, 0x0
    bl fn_80525A0C
    b lbl_fn_80524E84_00000934
    li r4, 0x6
    li r5, 0x0
    bl fn_80525A0C
    b lbl_fn_80524E84_00000934
    li r4, 0x8
    li r5, 0x0
    bl fn_80525A0C
    b lbl_fn_80524E84_00000934
    lwz r8, lbl_8087F9C0
    lis r0, 0x4330
    lis r5, lbl_8075C6A8@ha
    stw r0, 0x30(r1)
    lwz r7, 0x94(r8)
    addi r4, r1, 0x20
    lwz r6, 0x98(r8)
    stw r6, 0x24(r1)
    lfd f2, lbl_8075C6A8@l(r5)
    stw r7, 0x20(r1)
    lfs f1, lbl_80887A08
    lwz r6, 0x9c(r8)
    lwz r5, 0xa0(r8)
    stw r5, 0x2c(r1)
    stw r6, 0x28(r1)
    lwz r6, 0x134(r3)
    mr r3, r8
    stw r0, 0x38(r1)
    lwz r5, 0x8(r6)
    stw r0, 0x40(r1)
    xoris r0, r5, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    stfs f0, 0x24(r1)
    lwz r0, 0x28(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    stfs f0, 0x28(r1)
    lwz r0, 0x48(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    stfs f0, 0x2c(r1)
    lwz r0, 0x68(r6)
    stw r0, 0x20(r1)
    bl fn_8057F1B8
    mr r3, r31
    li r4, 0x5
    li r5, 0x0
    bl fn_80525A0C
    lwz r0, 0xe4(r31)
    cmpwi r0, 0x4
    bne lbl_fn_80524E84_00000934
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80524E84_00000934
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    bl fn_805256C8
    addi r3, r1, 0x18
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80524E84_00000934
    li r4, 0x3
    li r5, 0x0
    bl fn_80525A0C
    b lbl_fn_80524E84_00000934
    lwz r29, 0x170(r3)
    li r0, 0xb
    lwz r30, lbl_8087EF70
    li r4, 0x0
    addi r6, r29, 0x5
    li r5, 0x3
    stw r6, 0x80(r3)
    stw r0, 0x84(r3)
    bl fn_80510E98
    lwz r3, 0x80(r31)
    subi r4, r3, 0x5
    stw r4, 0x170(r31)
    cmpw r29, r4
    beq lbl_fn_80524E84_00000874
    lwz r3, lbl_8087F9C0
    bl fn_8057F19C
lbl_fn_80524E84_00000874:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80524E84_00000934
    mr r3, r31
    li r4, 0x6
    li r5, 0x1
    bl fn_805256C8
    addi r3, r1, 0x14
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80524E84_00000934
    lwz r3, lbl_8087F580
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80524E84_0000090C
    lwz r3, lbl_8087F9C0
    bl fn_8057EF44
    mr r3, r31
    bl fn_8052549C
    mr r3, r31
    bl fn_8052293C
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_805256C8
    b lbl_fn_80524E84_00000934
lbl_fn_80524E84_0000090C:
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_805256C8
lbl_fn_80524E84_00000934:
    lwz r0, 0xd8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80524E84_00000990
    lfs f1, 0x58(r31)
    lfs f0, lbl_808879F0
    fcmpo cr0, f1, f0
    ble lbl_fn_80524E84_00000990
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x6
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80524E84_00000990
    mr r3, r31
    li r4, 0x8
    li r5, 0x0
    bl fn_805256C8
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80524E84_00000990:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805251D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, 0x4330
    lis r4, lbl_8075C6A8@ha
    stw r0, 0x24(r1)
    lfd f2, lbl_8075C6A8@l(r4)
    stw r31, 0x1c(r1)
    lfs f0, lbl_80887A30
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, 0x104(r3)
    lwz r31, lbl_8087F9C0
    lwz r0, 0x28(r5)
    stw r0, 0x28(r31)
    lwz r4, 0x104(r3)
    stw r6, 0x8(r1)
    lwz r0, 0x8(r4)
    stw r0, 0x2c(r31)
    lwz r0, 0x158(r3)
    stw r0, 0x34(r31)
    lwz r0, 0x15c(r3)
    stw r0, 0x30(r31)
    lwz r4, 0x110(r3)
    stw r6, 0x10(r1)
    lwz r0, 0x8(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    stfs f0, 0x48(r31)
    lwz r4, 0x110(r3)
    lwz r0, 0x88(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805251D0_00000A48
    lwz r0, 0x50(r31)
    ori r0, r0, 0x1
    stw r0, 0x50(r31)
    b lbl_fn_805251D0_00000A54
lbl_fn_805251D0_00000A48:
    lwz r0, 0x50(r31)
    clrrwi r0, r0, 1
    stw r0, 0x50(r31)
lbl_fn_805251D0_00000A54:
    lwz r4, 0x110(r3)
    lwz r0, 0xa8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805251D0_00000A74
    lwz r0, 0x50(r31)
    ori r0, r0, 0x2
    stw r0, 0x50(r31)
    b lbl_fn_805251D0_00000A80
lbl_fn_805251D0_00000A74:
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x50(r31)
lbl_fn_805251D0_00000A80:
    lwz r4, 0x110(r3)
    lwz r0, 0x68(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805251D0_00000AA0
    lwz r0, 0x50(r31)
    ori r0, r0, 0x10
    stw r0, 0x50(r31)
    b lbl_fn_805251D0_00000AAC
lbl_fn_805251D0_00000AA0:
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x50(r31)
lbl_fn_805251D0_00000AAC:
    lwz r5, 0x110(r3)
    lis r4, lbl_8075C6A8@ha
    lfd f4, lbl_8075C6A8@l(r4)
    lwz r0, 0x48(r5)
    lfs f3, lbl_80887A38
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f2, lbl_80887A34
    lfd f1, 0x10(r1)
    lfs f0, lbl_80887A04
    fsubs f1, f1, f4
    fmadds f1, f3, f1, f2
    stfs f1, 0x40(r31)
    lwz r4, 0x110(r3)
    lwz r0, 0x28(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f4
    fmadds f1, f3, f1, f2
    stfs f1, 0x44(r31)
    lwz r4, 0x11c(r3)
    lwz r0, 0x8(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fmuls f0, f0, f1
    stfs f0, 0x4c(r31)
    lwz r4, 0x11c(r3)
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805251D0_00000B40
    lwz r0, 0x50(r31)
    ori r0, r0, 0x4
    stw r0, 0x50(r31)
    b lbl_fn_805251D0_00000B4C
lbl_fn_805251D0_00000B40:
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x50(r31)
lbl_fn_805251D0_00000B4C:
    lwz r4, 0x11c(r3)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805251D0_00000B6C
    lwz r0, 0x50(r31)
    ori r0, r0, 0x8
    stw r0, 0x50(r31)
    b lbl_fn_805251D0_00000B78
lbl_fn_805251D0_00000B6C:
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x50(r31)
lbl_fn_805251D0_00000B78:
    lwz r4, 0x128(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x58(r31)
    lwz r4, 0x128(r3)
    lwz r0, 0x28(r4)
    stw r0, 0x5c(r31)
    lwz r4, 0x128(r3)
    lwz r0, 0x48(r4)
    stw r0, 0x60(r31)
    lwz r4, 0x128(r3)
    lwz r0, 0x68(r4)
    stw r0, 0x64(r31)
    lwz r4, 0x128(r3)
    lwz r0, 0x88(r4)
    stw r0, 0x78(r31)
    lwz r4, 0x128(r3)
    lwz r0, 0xa8(r4)
    stw r0, 0x7c(r31)
    lwz r4, 0x128(r3)
    lwz r0, 0xc8(r4)
    stw r0, 0x80(r31)
    lwz r4, 0x128(r3)
    mr r3, r31
    lwz r0, 0xe8(r4)
    stw r0, 0x84(r31)
    lwz r4, 0x170(r30)
    bl fn_8057F19C
    lwz r4, 0x134(r30)
    mr r3, r31
    lwz r4, 0x68(r4)
    bl fn_8057F158
    lwz r4, 0x134(r30)
    lis r3, lbl_8075C6A8@ha
    lfd f2, lbl_8075C6A8@l(r3)
    lwz r0, 0x8(r4)
    lfs f1, lbl_80887A08
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    stfs f0, 0x98(r31)
    lwz r3, 0x134(r30)
    lwz r0, 0x28(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    stfs f0, 0x9c(r31)
    lwz r3, 0x134(r30)
    lwz r0, 0x48(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    stfs f0, 0xa0(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8052549C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    lfs f1, lbl_80887A3C
    lwz r4, lbl_8087F9C0
    lwz r5, 0x104(r3)
    lwz r0, 0x28(r4)
    stw r0, 0x28(r5)
    lfs f4, lbl_80887A34
    lwz r5, 0x104(r3)
    lwz r0, 0x2c(r4)
    stw r0, 0x8(r5)
    lfs f3, lbl_80887A44
    lwz r0, 0x34(r4)
    stw r0, 0x158(r3)
    lwz r5, 0x110(r3)
    lwz r0, 0x30(r4)
    stw r0, 0x15c(r3)
    lfs f2, lbl_80887A40
    lfs f0, 0x48(r4)
    fmuls f0, f1, f0
    lfs f1, lbl_80887A48
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x8(r5)
    lwz r0, 0x50(r4)
    lwz r5, 0x110(r3)
    extrwi r0, r0, 1, 27
    stw r0, 0x68(r5)
    lwz r0, 0x50(r4)
    lwz r5, 0x110(r3)
    clrlwi r0, r0, 31
    stw r0, 0x88(r5)
    lwz r0, 0x50(r4)
    lwz r5, 0x110(r3)
    extrwi r0, r0, 1, 30
    stw r0, 0xa8(r5)
    lfs f0, 0x40(r4)
    lwz r5, 0x110(r3)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x48(r5)
    lfs f0, 0x44(r4)
    lwz r5, 0x110(r3)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x28(r5)
    lfs f0, 0x4c(r4)
    lwz r5, 0x11c(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x8(r5)
    lwz r0, 0x50(r4)
    lwz r5, 0x11c(r3)
    extrwi r0, r0, 1, 29
    stw r0, 0x28(r5)
    lwz r0, 0x50(r4)
    lwz r5, 0x11c(r3)
    extrwi r0, r0, 1, 28
    stw r0, 0x48(r5)
    lwz r5, 0x128(r3)
    lwz r0, 0x58(r4)
    stw r0, 0x8(r5)
    lwz r6, 0x5c(r4)
    lwz r5, 0x128(r3)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stw r0, 0x28(r5)
    lwz r6, 0x60(r4)
    lwz r5, 0x128(r3)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stw r0, 0x48(r5)
    lwz r6, 0x64(r4)
    lwz r5, 0x128(r3)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stw r0, 0x68(r5)
    lwz r6, 0x78(r4)
    lwz r5, 0x128(r3)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stw r0, 0x88(r5)
    lwz r6, 0x7c(r4)
    lwz r5, 0x128(r3)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stw r0, 0xa8(r5)
    lwz r5, 0x128(r3)
    lwz r0, 0x80(r4)
    stw r0, 0xc8(r5)
    lwz r6, 0x84(r4)
    lwz r5, 0x128(r3)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stw r0, 0xe8(r5)
    lwz r0, 0xa4(r4)
    stw r0, 0x170(r3)
    lwz r5, 0x134(r3)
    lwz r0, 0x94(r4)
    stw r0, 0x68(r5)
    lfs f0, 0x98(r4)
    lwz r5, 0x134(r3)
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x8(r5)
    lfs f0, 0x9c(r4)
    lwz r5, 0x134(r3)
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x28(r5)
    lfs f0, 0xa0(r4)
    lwz r3, 0x134(r3)
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x48(r3)
    addi r1, r1, 0x40
    blr
}

asm void fn_805256C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r4, 0x8
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    lwz r0, 0xd8(r3)
    stw r0, 0xdc(r3)
    stw r4, 0xd8(r3)
    bgt lbl_fn_805256C8_00000F9C
    lis r5, jumptable_807935BC@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_807935BC@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    bl fn_805251D0
    lwz r3, 0xe0(r31)
    li r0, 0x6
    stw r3, 0x80(r31)
    stw r0, 0x84(r31)
    b lbl_fn_805256C8_00000F9C
    li r0, 0x2
    stw r0, 0x84(r3)
    li r30, 0x1
    b lbl_fn_805256C8_00000F9C
    lwz r4, lbl_8087F9C0
    lwz r0, 0x28(r4)
    cmpwi r0, 0x1
    bne lbl_fn_805256C8_00000F3C
    li r0, 0x1
    stw r0, 0x84(r3)
    stw r0, 0xe4(r3)
    b lbl_fn_805256C8_00000F9C
lbl_fn_805256C8_00000F3C:
    li r0, 0x2
    stw r0, 0x84(r3)
    li r30, 0x1
    b lbl_fn_805256C8_00000F9C
    li r0, 0x6
    stw r0, 0x84(r3)
    li r30, 0x1
    b lbl_fn_805256C8_00000F9C
    li r0, 0x8
    stw r0, 0x84(r3)
    li r30, 0x1
    b lbl_fn_805256C8_00000F9C
    li r0, 0x5
    stw r0, 0x84(r3)
    li r30, 0x1
    b lbl_fn_805256C8_00000F9C
    li r0, 0x3
    stw r0, 0x84(r3)
    li r30, 0x1
    b lbl_fn_805256C8_00000F9C
    lwz r3, lbl_8087F580
    li r4, 0x8
    li r5, 0x1
    bl fn_804A62C8
lbl_fn_805256C8_00000F9C:
    cmpwi r30, 0x0
    beq lbl_fn_805256C8_00000FC4
    cmpwi r29, 0x0
    beq lbl_fn_805256C8_00000FBC
    lwz r3, 0x84(r31)
    subi r0, r3, 0x1
    stw r0, 0xe4(r31)
    b lbl_fn_805256C8_00000FC4
lbl_fn_805256C8_00000FBC:
    li r0, 0x0
    stw r0, 0xe4(r31)
lbl_fn_805256C8_00000FC4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80525804(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    li r5, 0xa
    stw r0, 0x24(r1)
    li r0, 0x6
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, lbl_8087EF70
    lwz r30, 0xe8(r3)
    stw r30, 0x80(r3)
    stw r0, 0x84(r3)
    bl fn_80510E98
    lwz r0, 0x80(r29)
    stw r0, 0xe8(r29)
    cmpw r0, r30
    beq lbl_fn_80525804_000010A8
    mr r3, r31
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80525804_0000105C
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80525804_0000106C
lbl_fn_80525804_0000105C:
    lfs f0, lbl_808879FC
    stfs f0, 0xd4(r29)
    stfs f0, 0x180(r29)
    b lbl_fn_80525804_000010A8
lbl_fn_80525804_0000106C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80525804_0000109C
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80525804_000010A8
lbl_fn_80525804_0000109C:
    lfs f0, lbl_808879F8
    stfs f0, 0xd4(r29)
    stfs f0, 0x180(r29)
lbl_fn_80525804_000010A8:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80525804_000010F0
    lwz r3, 0x48(r29)
    li r4, 0x0
    bl fn_8052DEF0
    addi r3, r1, 0xc
    li r4, 0x8
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_808879FC
    stfs f0, 0x58(r29)
    b lbl_fn_80525804_000011CC
lbl_fn_80525804_000010F0:
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80525804_000011CC
    lwz r0, 0xe8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80525804_00001140
    cmpwi r0, 0x1
    beq lbl_fn_80525804_00001154
    cmpwi r0, 0x2
    beq lbl_fn_80525804_00001168
    cmpwi r0, 0x3
    beq lbl_fn_80525804_0000117C
    cmpwi r0, 0x4
    beq lbl_fn_80525804_00001190
    cmpwi r0, 0x5
    beq lbl_fn_80525804_000011A4
    b lbl_fn_80525804_000011B4
lbl_fn_80525804_00001140:
    mr r3, r29
    li r4, 0x1
    li r5, 0x0
    bl fn_805256C8
    b lbl_fn_80525804_000011B4
lbl_fn_80525804_00001154:
    mr r3, r29
    li r4, 0x2
    li r5, 0x0
    bl fn_805256C8
    b lbl_fn_80525804_000011B4
lbl_fn_80525804_00001168:
    mr r3, r29
    li r4, 0x3
    li r5, 0x0
    bl fn_805256C8
    b lbl_fn_80525804_000011B4
lbl_fn_80525804_0000117C:
    mr r3, r29
    li r4, 0x4
    li r5, 0x0
    bl fn_805256C8
    b lbl_fn_80525804_000011B4
lbl_fn_80525804_00001190:
    mr r3, r29
    li r4, 0x5
    li r5, 0x0
    bl fn_805256C8
    b lbl_fn_80525804_000011B4
lbl_fn_80525804_000011A4:
    mr r3, r29
    li r4, 0x6
    li r5, 0x0
    bl fn_805256C8
lbl_fn_80525804_000011B4:
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80525804_000011CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80525A0C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    stw r28, 0x20(r1)
    mr r28, r5
    lwz r31, lbl_8087EF70
    lwz r0, 0xe4(r3)
    stw r4, 0x84(r3)
    li r4, 0x1
    subf r0, r5, r0
    li r5, 0x3
    stw r0, 0x80(r3)
    bl fn_80510D68
    lwz r0, 0xe8(r29)
    lwz r3, 0x80(r29)
    mulli r0, r0, 0xc
    add r4, r3, r28
    stw r4, 0xe4(r29)
    add r3, r29, r0
    lwz r3, 0xf8(r3)
    slwi r0, r4, 5
    add r30, r3, r0
    lwz r28, 0x8(r30)
    stw r28, 0x80(r29)
    lwz r0, 0xc(r30)
    stw r0, 0x84(r29)
    lwz r3, 0x0(r30)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    bgt lbl_fn_80525A0C_00001294
    lwz r0, 0x10(r30)
    mr r3, r29
    li r4, 0x0
    li r5, 0x3
    cmpwi r0, 0x0
    bne lbl_fn_80525A0C_0000128C
    li r5, 0xb
lbl_fn_80525A0C_0000128C:
    bl fn_80510E98
    b lbl_fn_80525A0C_000012B4
lbl_fn_80525A0C_00001294:
    lwz r0, 0x10(r30)
    mr r3, r29
    li r4, 0x1
    li r5, 0x13
    cmpwi r0, 0x0
    bne lbl_fn_80525A0C_000012B0
    li r5, 0xb
lbl_fn_80525A0C_000012B0:
    bl fn_80510E98
lbl_fn_80525A0C_000012B4:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80525A0C_000012C8
    lwz r0, 0x80(r29)
    stw r0, 0x8(r30)
lbl_fn_80525A0C_000012C8:
    lwz r4, 0x8(r30)
    cmpw r28, r4
    beq lbl_fn_80525A0C_000015D0
    lwz r3, 0x0(r30)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    ble lbl_fn_80525A0C_000014B0
    mr r3, r31
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80525A0C_00001314
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_000013CC
lbl_fn_80525A0C_00001314:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    lwz r3, 0x0(r30)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    bgt lbl_fn_80525A0C_000013A4
    lwz r3, 0x18(r30)
    lwz r28, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    lwz r3, 0x0(r30)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    ble lbl_fn_80525A0C_00001598
    lwz r3, 0x18(r30)
    bl fn_80202D00
    xoris r4, r28, 0x8000
    lis r0, 0x4330
    stw r4, 0x14(r1)
    lis r5, lbl_8075C6A8@ha
    lfd f1, lbl_8075C6A8@l(r5)
    lis r4, lbl_8075C6C4@ha
    stw r0, 0x10(r1)
    addi r4, r4, lbl_8075C6C4@l
    addi r4, r4, 0x35d
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_801F6C80
    b lbl_fn_80525A0C_00001598
lbl_fn_80525A0C_000013A4:
    lwz r3, 0x18(r30)
    bl fn_80202D00
    mr r28, r3
    bl fn_801F6C2C
    stfs f1, 0x50(r28)
    lwz r3, 0x18(r30)
    bl fn_80202D00
    lfs f0, lbl_808879FC
    stfs f0, 0x54(r3)
    b lbl_fn_80525A0C_00001598
lbl_fn_80525A0C_000013CC:
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80525A0C_000013FC
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
lbl_fn_80525A0C_000013FC:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    lwz r3, 0x0(r30)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    bgt lbl_fn_80525A0C_0000148C
    lwz r3, 0x18(r30)
    lwz r28, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    lwz r3, 0x0(r30)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    ble lbl_fn_80525A0C_00001598
    lwz r3, 0x18(r30)
    bl fn_80202D00
    xoris r4, r28, 0x8000
    lis r0, 0x4330
    stw r4, 0x14(r1)
    lis r5, lbl_8075C6A8@ha
    lfd f1, lbl_8075C6A8@l(r5)
    lis r4, lbl_8075C6C4@ha
    stw r0, 0x10(r1)
    addi r4, r4, lbl_8075C6C4@l
    addi r4, r4, 0x35d
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_801F6C80
    b lbl_fn_80525A0C_00001598
lbl_fn_80525A0C_0000148C:
    lwz r3, 0x18(r30)
    bl fn_80202D00
    lfs f0, lbl_808879F0
    stfs f0, 0x50(r3)
    lwz r3, 0x18(r30)
    bl fn_80202D00
    lfs f0, lbl_808879F8
    stfs f0, 0x54(r3)
    b lbl_fn_80525A0C_00001598
lbl_fn_80525A0C_000014B0:
    lwz r3, 0x18(r30)
    subf r28, r28, r4
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    lwz r3, 0x0(r30)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    bgt lbl_fn_80525A0C_00001544
    lwz r3, 0x18(r30)
    lwz r28, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001598
    lwz r3, 0x0(r30)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    ble lbl_fn_80525A0C_00001598
    lwz r3, 0x18(r30)
    bl fn_80202D00
    xoris r4, r28, 0x8000
    lis r0, 0x4330
    stw r4, 0x14(r1)
    lis r5, lbl_8075C6A8@ha
    lfd f1, lbl_8075C6A8@l(r5)
    lis r4, lbl_8075C6C4@ha
    stw r0, 0x10(r1)
    addi r4, r4, lbl_8075C6C4@l
    addi r4, r4, 0x35d
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_801F6C80
    b lbl_fn_80525A0C_00001598
lbl_fn_80525A0C_00001544:
    cmpwi r28, 0x0
    bge lbl_fn_80525A0C_00001570
    lwz r3, 0x18(r30)
    bl fn_80202D00
    lfs f0, lbl_808879F0
    stfs f0, 0x50(r3)
    lwz r3, 0x18(r30)
    bl fn_80202D00
    lfs f0, lbl_808879F8
    stfs f0, 0x54(r3)
    b lbl_fn_80525A0C_00001598
lbl_fn_80525A0C_00001570:
    ble lbl_fn_80525A0C_00001598
    lwz r3, 0x18(r30)
    bl fn_80202D00
    mr r28, r3
    bl fn_801F6C2C
    stfs f1, 0x50(r28)
    lwz r3, 0x18(r30)
    bl fn_80202D00
    lfs f0, lbl_808879FC
    stfs f0, 0x54(r3)
lbl_fn_80525A0C_00001598:
    mr r3, r29
    bl fn_805251D0
    lwz r0, 0xe8(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80525A0C_000015D0
    lwz r0, 0xe4(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80525A0C_000015D0
    lwz r0, 0x8(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80525A0C_000015D0
    lwz r3, lbl_8087F430
    li r4, 0x155
    bl fn_803750E4
lbl_fn_80525A0C_000015D0:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_00001610
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_805256C8
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80525A0C_00001610:
    lwz r0, 0xe8(r29)
    lis r3, lbl_8075C680@ha
    addi r3, r3, lbl_8075C680@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_80525A0C_000016C8
    lwz r3, 0xe4(r29)
    mulli r3, r3, 0x18
    add r29, r0, r3
    lwz r3, 0xc(r29)
    cmpwi r3, 0x0
    blt lbl_fn_80525A0C_000016C8
    subis r0, r3, 0xf
    cmplwi r0, 0x4241
    bne lbl_fn_80525A0C_000016AC
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80525A0C_0000168C
    lis r3, 0xf
    lwz r28, lbl_8087F580
    addi r4, r3, 0x4258
    li r3, 0x0
    bl fn_80116FC0
    mr r4, r3
    mr r3, r28
    li r5, 0x1
    bl fn_804A3C24
    b lbl_fn_80525A0C_000016C8
lbl_fn_80525A0C_0000168C:
    lwz r28, lbl_8087F580
    addi r3, r29, 0x8
    bl fn_80116EB8
    mr r4, r3
    mr r3, r28
    li r5, 0x1
    bl fn_804A3C24
    b lbl_fn_80525A0C_000016C8
lbl_fn_80525A0C_000016AC:
    lwz r28, lbl_8087F580
    addi r3, r29, 0x8
    bl fn_80116EB8
    mr r4, r3
    mr r3, r28
    li r5, 0x1
    bl fn_804A3C24
lbl_fn_80525A0C_000016C8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80525F0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r3, lbl_8087EF70
    bl fn_800A58D0
    lwz r5, 0xe4(r30)
    lfs f3, lbl_808879F0
    slwi r0, r5, 2
    lwz r31, lbl_8087EF70
    add r4, r30, r0
    lfs f0, 0x168(r4)
    fcmpo cr0, f0, f3
    bge lbl_fn_80525F0C_00001788
    li r0, 0x1
    stw r0, 0x154(r30)
    lfs f1, 0x160(r4)
    lfs f0, 0x168(r4)
    fadds f0, f1, f0
    stfs f0, 0x160(r4)
    lwz r0, 0xe4(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    lfs f0, 0x160(r3)
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_80525F0C_000018CC
    stfs f3, 0x160(r3)
    mr r3, r30
    lfs f0, lbl_80887A04
    lwz r0, 0xe4(r30)
    slwi r0, r0, 2
    add r4, r30, r0
    stfs f0, 0x168(r4)
    bl fn_8052293C
    b lbl_fn_80525F0C_000018CC
lbl_fn_80525F0C_00001788:
    ble lbl_fn_80525F0C_000017DC
    li r0, 0x1
    stw r0, 0x154(r30)
    lfs f0, lbl_808879F8
    lfs f2, 0x160(r4)
    lfs f1, 0x168(r4)
    fadds f1, f2, f1
    stfs f1, 0x160(r4)
    lwz r0, 0xe4(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    lfs f1, 0x160(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80525F0C_000018CC
    stfs f0, 0x160(r3)
    lwz r0, 0xe4(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    stfs f3, 0x168(r3)
    b lbl_fn_80525F0C_000018CC
lbl_fn_80525F0C_000017DC:
    neg r0, r3
    li r4, 0x0
    or r0, r0, r3
    stw r4, 0x154(r30)
    srawi r4, r0, 31
    mr r3, r30
    addi r0, r4, 0x2
    stw r5, 0x80(r30)
    li r4, 0x0
    li r5, 0x3
    stw r0, 0x84(r30)
    bl fn_80510E98
    lwz r3, 0x84(r30)
    lwz r0, 0x80(r30)
    cmpw r0, r3
    blt lbl_fn_80525F0C_00001824
    subi r0, r3, 0x1
    stw r0, 0x80(r30)
lbl_fn_80525F0C_00001824:
    lwz r4, 0x80(r30)
    li r0, 0x2
    stw r4, 0xe4(r30)
    mr r3, r30
    slwi r5, r4, 2
    li r4, 0x1
    add r6, r30, r5
    lwz r29, 0x158(r6)
    li r5, 0x3
    stw r29, 0x80(r30)
    stw r0, 0x84(r30)
    bl fn_80510D68
    lwz r0, 0xe4(r30)
    lwz r4, 0x80(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    stw r4, 0x158(r3)
    lwz r0, 0xe4(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r0, 0x158(r3)
    cmpw r29, r0
    beq lbl_fn_80525F0C_0000188C
    lfs f0, lbl_80887A4C
    stfs f0, 0x168(r3)
    b lbl_fn_80525F0C_000018CC
lbl_fn_80525F0C_0000188C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80525F0C_000018CC
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_805256C8
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80525F0C_000018CC:
    lwz r0, 0xe4(r30)
    lis r3, lbl_8075C698@ha
    addi r3, r3, lbl_8075C698@l
    lwz r30, lbl_8087F580
    slwi r0, r0, 3
    add r3, r3, r0
    bl fn_80116EB8
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_804A3C24
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80526138(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    lwz r0, 0x98(r29)
    srwi. r0, r0, 31
    bne lbl_fn_80526138_00001948
    addi r4, r29, 0x99
    b lbl_fn_80526138_0000194C
lbl_fn_80526138_00001948:
    lwz r4, 0xa0(r29)
lbl_fn_80526138_0000194C:
    bl fn_8008937C
    lis r31, lbl_8075C6C4@ha
    lfs f1, lbl_80887A50
    addi r31, r31, lbl_8075C6C4@l
    lfs f2, lbl_80887A54
    lfs f3, lbl_808879F8
    mr r30, r3
    addi r4, r31, 0x365
    addi r5, r29, 0x14b0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887A50
    mr r3, r30
    lfs f2, lbl_80887A54
    addi r4, r31, 0x370
    lfs f3, lbl_808879F8
    addi r5, r29, 0xa4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887A50
    mr r3, r30
    lfs f2, lbl_80887A54
    addi r4, r31, 0x37a
    lfs f3, lbl_808879F8
    addi r5, r29, 0xb0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887A50
    mr r3, r30
    lfs f2, lbl_80887A54
    addi r4, r31, 0x384
    lfs f3, lbl_808879F8
    addi r5, r29, 0xbc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887A50
    mr r3, r30
    lfs f2, lbl_80887A54
    addi r4, r31, 0x38f
    lfs f3, lbl_808879F8
    addi r5, r29, 0xc8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
