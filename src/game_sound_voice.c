#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800CFBA0(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80116FC0(void);
extern void fn_80117214(void);
extern void fn_80117228(void);
extern void fn_801CF334(void);
extern void fn_801CFA5C(void);
extern void fn_801CFAA8(void);
extern void fn_801DC42C(void);
extern void fn_801DD26C(void);
extern void fn_801E07A4(void);
extern void fn_801E6714(void);
extern void fn_801E6EF0(void);
extern void fn_801E7D78(void);
extern void fn_801E7EA8(void);
extern void fn_801F45F4(void);
extern void fn_801F48C8(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F7590(void);
extern void fn_801F7DF0(void);
extern void fn_801F8830(void);
extern void fn_80202118(void);
extern void fn_80202D00(void);
extern void fn_80206BE4(void);
extern void fn_802091E8(void);
extern void fn_8020924C(void);
extern void fn_8020BCEC(void);
extern void fn_8020BD14(void);
extern void fn_8020ED84(void);
extern void fn_8020EF4C(void);
extern void fn_8020EF80(void);
extern void fn_80211480(void);
extern void fn_80219558(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803750E4(void);
extern void fn_804444E8(void);
extern void fn_8044493C(void);
extern void fn_804A3C24(void);
extern void fn_804A4294(void);
extern void fn_804A4300(void);
extern void fn_804A4494(void);
extern void fn_80510D68(void);
extern void fn_805112AC(void);
extern void fn_80530388(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8073CA20[];
extern u8 lbl_8073CA28[];
extern u8 lbl_807C7D28[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_808813D0;
extern u32 lbl_80882AD0;
extern u32 lbl_80882AD8;
extern u32 lbl_80882ADC;
extern u32 lbl_80882AE0;
extern u32 lbl_80882AE4;
extern u32 lbl_80882AE8;

/* Function declarations */
void fn_801D7354(void);
void fn_801D7560(void);
void fn_801D77A0(void);
void fn_801D77A4(void);
void fn_801D7AC0(void);
void fn_801D7DE8(void);
void fn_801D8040(void);
void fn_801D8060(void);
void fn_801D8080(void);
void fn_801D80A0(void);
void fn_801D80B4(void);
void fn_801D80BC(void);
void fn_801D8560(void);
void fn_801D8C90(void);
void fn_801D8CAC(void);
void fn_801D8CB4(void);

asm void fn_801D7354(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    bl _savegpr_22
    cmpwi r4, 0x0
    mr r23, r3
    mr r22, r4
    beq lbl_fn_801D7354_000001EC
    mr r3, r22
    bl fn_80202118
    cmpwi r3, 0x0
    bne lbl_fn_801D7354_00000040
    b lbl_fn_801D7354_000001EC
lbl_fn_801D7354_00000040:
    mr r3, r22
    bl fn_80202118
    lfs f0, lbl_80882AD8
    mr r24, r3
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_801F45F4
    lis r3, lbl_8073CA20@ha
    lis r4, lbl_8073CA28@ha
    lfd f31, lbl_8073CA20@l(r3)
    addi r26, r23, 0x10f8
    addi r29, r4, lbl_8073CA28@l
    li r23, 0x0
    li r27, 0x0
    li r30, 0x1
    lis r31, 0x4330
lbl_fn_801D7354_0000008C:
    mr r25, r26
    li r22, 0x0
lbl_fn_801D7354_00000094:
    stw r27, 0xc(r25)
    lwz r3, 0x8(r25)
    bl fn_8020BD14
    lwz r0, 0x0(r25)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801D7354_000001CC
    lwz r0, 0x4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_801D7354_000001CC
    mr r5, r22
    mr r6, r23
    addi r3, r1, 0x30
    addi r4, r29, 0x1e
    crclr 6
    bl sprintf
    addi r3, r1, 0x30
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r24
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    lfs f3, 0xc(r1)
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    lwz r3, 0x0(r25)
    bl fn_80202D00
    addi r4, r29, 0x2e
    addi r5, r1, 0x1c
    bl fn_801F6E78
    lwz r3, 0x4(r25)
    bl fn_80202D00
    addi r4, r29, 0x2e
    addi r5, r1, 0x1c
    bl fn_801F6E78
    cmpwi r28, 0x0
    beq lbl_fn_801D7354_00000178
    lwz r3, lbl_8087F4F0
    lwz r4, 0x8(r25)
    bl fn_8044493C
    mr r4, r3
    lwz r3, lbl_8087F4F0
    bl fn_804444E8
    cmpwi r3, 0x0
    bgt lbl_fn_801D7354_00000170
    lwz r0, 0x8(r25)
    cmpwi r0, 0x1f
    bne lbl_fn_801D7354_0000017C
lbl_fn_801D7354_00000170:
    stw r30, 0xc(r25)
    b lbl_fn_801D7354_0000017C
lbl_fn_801D7354_00000178:
    stw r30, 0xc(r25)
lbl_fn_801D7354_0000017C:
    lwz r3, 0x0(r25)
    bl fn_80202D00
    lwz r0, 0xc(r25)
    addi r4, r29, 0x44
    stw r31, 0x70(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    bl fn_801F6C80
    lwz r3, 0x4(r25)
    bl fn_80202D00
    lwz r0, 0xc(r25)
    addi r4, r29, 0x44
    stw r31, 0x78(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f31
    bl fn_801F6C80
lbl_fn_801D7354_000001CC:
    addi r22, r22, 0x1
    addi r25, r25, 0x10
    cmpwi r22, 0x4
    blt lbl_fn_801D7354_00000094
    addi r23, r23, 0x1
    addi r26, r26, 0x40
    cmpwi r23, 0x8
    blt lbl_fn_801D7354_0000008C
lbl_fn_801D7354_000001EC:
    addi r11, r1, 0xb0
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    bl _restgpr_22
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_801D7560(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_26
    cmpwi r6, 0x0
    mr r30, r3
    mr r28, r4
    mr r27, r5
    mr r31, r6
    mr r26, r7
    beq lbl_fn_801D7560_00000434
    cmpwi r7, 0x0
    beq lbl_fn_801D7560_00000434
    mr r3, r26
    bl fn_80202118
    cmpwi r3, 0x0
    bne lbl_fn_801D7560_00000258
    b lbl_fn_801D7560_00000434
lbl_fn_801D7560_00000258:
    lwz r4, lbl_8087F4F0
    slwi r0, r28, 6
    mr r3, r30
    mr r6, r31
    addis r4, r4, 0x1
    mr r7, r26
    add r4, r4, r0
    addi r5, r30, 0xb94
    subi r4, r4, 0x2c80
    li r8, -0x1
    bl fn_801D7AC0
    lwz r6, 0xbb4(r30)
    lis r4, lbl_8073CA28@ha
    addi r4, r4, lbl_8073CA28@l
    addi r3, r1, 0x60
    lwz r0, 0x104(r6)
    addi r4, r4, 0x4b
    li r5, 0x8
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r6)
    crclr 6
    bl sprintf
    mr r3, r26
    bl fn_80202118
    lbz r4, 0x231(r27)
    mr r27, r3
    subic. r26, r4, 0x1
    blt lbl_fn_801D7560_000002D8
    slwi r0, r26, 2
    add r3, r30, r0
    lwz r28, 0x12f8(r3)
    b lbl_fn_801D7560_000002DC
lbl_fn_801D7560_000002D8:
    li r28, 0x0
lbl_fn_801D7560_000002DC:
    cmpwi r28, 0x0
    beq lbl_fn_801D7560_00000370
    mr r3, r28
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_801D7560_00000370
    lwz r0, 0x104(r28)
    lis r29, lbl_8073CA28@ha
    addi r29, r29, lbl_8073CA28@l
    lfs f1, lbl_80882AD0
    oris r0, r0, 0x80
    stw r0, 0x104(r28)
    lfs f0, lbl_80882AD8
    mr r3, r30
    stfs f1, 0x20(r1)
    mr r4, r31
    mr r5, r28
    addi r6, r1, 0x2c
    stfs f1, 0x24(r1)
    addi r7, r1, 0x20
    addi r8, r29, 0x57
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805112AC
    addi r3, r1, 0x60
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x4c
    bl fn_801F4E8C
    mr r3, r28
    bl fn_80202D00
    addi r4, r29, 0x2e
    addi r5, r1, 0x4c
    bl fn_801F6E78
lbl_fn_801D7560_00000370:
    lwz r3, 0x1378(r30)
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_801D7560_00000434
    lwz r5, 0x1378(r30)
    lis r29, lbl_8073CA28@ha
    addi r29, r29, lbl_8073CA28@l
    lfs f1, lbl_80882AD0
    lwz r0, 0x104(r5)
    mr r3, r30
    lfs f0, lbl_80882AD8
    mr r4, r31
    oris r0, r0, 0x80
    stw r0, 0x104(r5)
    addi r6, r1, 0x14
    addi r7, r1, 0x8
    stfs f1, 0x8(r1)
    addi r8, r29, 0x57
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    lwz r5, 0x1378(r30)
    bl fn_805112AC
    addi r3, r1, 0x60
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x38
    bl fn_801F4E8C
    lwz r3, 0x1378(r30)
    bl fn_80202D00
    addi r4, r29, 0x2e
    addi r5, r1, 0x38
    bl fn_801F6E78
    cmpwi r26, 0x0
    ble lbl_fn_801D7560_00000420
    lwz r3, 0x1378(r30)
    bl fn_80202D00
    lfs f1, lbl_80882AD0
    addi r4, r29, 0x44
    bl fn_801F6C80
    b lbl_fn_801D7560_00000434
lbl_fn_801D7560_00000420:
    lwz r3, 0x1378(r30)
    bl fn_80202D00
    lfs f1, lbl_80882AD8
    addi r4, r29, 0x44
    bl fn_801F6C80
lbl_fn_801D7560_00000434:
    addi r11, r1, 0xc0
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_801D77A0(void)
{
    nofralloc
    b fn_801D77A4
}

asm void fn_801D77A4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stfd f28, 0xf0(r1)
    psq_st f28, 0xf8(r1), 0, 0
    bl _savegpr_22
    cmpwi r5, 0x0
    lis r0, 0x4330
    stw r0, 0xb8(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    stw r0, 0xc0(r1)
    mr r30, r6
    mr r31, r7
    beq lbl_fn_801D77A4_00000734
    lfs f0, lbl_80882AD0
    cmpwi r8, 0x0
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    blt lbl_fn_801D77A4_0000059C
    mr r3, r8
    bl fn_802091E8
    cmpwi r3, 0x0
    beq lbl_fn_801D77A4_000004E0
    lwz r3, 0x2c(r3)
    b lbl_fn_801D77A4_000004E4
lbl_fn_801D77A4_000004E0:
    li r3, 0x0
lbl_fn_801D77A4_000004E4:
    cmpwi r3, 0x0
    ble lbl_fn_801D77A4_0000059C
    subi r0, r3, 0x1
    lis r3, lbl_8073CA20@ha
    slwi r5, r0, 30
    lfd f8, lbl_8073CA20@l(r3)
    srwi r4, r0, 31
    srawi r0, r0, 2
    subf r3, r4, r5
    lfs f5, lbl_80882AE4
    addze r6, r0
    lfs f7, lbl_80882AE0
    rotlwi r0, r3, 2
    addi r5, r1, 0x40
    add r3, r0, r4
    xoris r4, r3, 0x8000
    stw r4, 0xbc(r1)
    xoris r0, r6, 0x8000
    addi r3, r3, 0x1
    stw r0, 0xc4(r1)
    addi r0, r6, 0x1
    lfd f4, 0xb8(r1)
    xoris r3, r3, 0x8000
    lfd f0, 0xc0(r1)
    xoris r0, r0, 0x8000
    fsubs f6, f4, f8
    stw r3, 0xbc(r1)
    fsubs f3, f0, f8
    addi r4, r1, 0x50
    stw r0, 0xc4(r1)
    fmuls f6, f7, f6
    fmuls f4, f5, f3
    lfd f0, 0xc0(r1)
    lfd f3, 0xb8(r1)
    fsubs f0, f0, f8
    stfs f4, 0x44(r1)
    fsubs f3, f3, f8
    stfs f6, 0x40(r1)
    fmuls f0, f5, f0
    fmuls f3, f7, f3
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x4c(r1)
    stfs f3, 0x48(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
lbl_fn_801D77A4_0000059C:
    addi r26, r1, 0x50
    addi r25, r1, 0x30
    psq_l f1, 0x0(r26), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    bl fn_80202D00
    lis r4, lbl_8073CA28@ha
    mr r5, r25
    addi r25, r4, lbl_8073CA28@l
    addi r4, r25, 0x61
    bl fn_801F7590
    addi r24, r1, 0x20
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    bl fn_80202D00
    mr r5, r24
    addi r4, r25, 0x68
    bl fn_801F7590
    lfs f30, lbl_80882AE0
    mr r24, r29
    lfs f31, lbl_80882ADC
    li r23, 0x0
    lfs f28, lbl_80882AD0
    lfs f29, lbl_80882AD8
lbl_fn_801D77A4_00000610:
    lwz r22, 0x0(r24)
    mr r3, r27
    mr r4, r30
    addi r6, r1, 0x14
    lwz r0, 0x104(r22)
    mr r5, r22
    addi r7, r1, 0x8
    addi r8, r25, 0x57
    oris r0, r0, 0x80
    stw r0, 0x104(r22)
    stfs f28, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f29, 0x14(r1)
    stfs f29, 0x18(r1)
    stfs f29, 0x1c(r1)
    bl fn_805112AC
    mr r5, r23
    addi r3, r1, 0x78
    addi r4, r25, 0x4b
    crclr 6
    bl sprintf
    mr r3, r31
    bl fn_80202D00
    mr r4, r3
    addi r3, r1, 0x60
    addi r5, r1, 0x78
    bl fn_801F8830
    mr r3, r22
    bl fn_80202D00
    addi r4, r25, 0x2e
    addi r5, r1, 0x60
    bl fn_801F6E78
    mr r3, r23
    bl fn_80117214
    slwi r0, r3, 2
    lwzx r3, r28, r0
    bl fn_8020BCEC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_801D77A4_00000700
    mr r3, r22
    bl fn_80202D00
    lfs f1, lbl_80882AD0
    addi r4, r25, 0x44
    bl fn_801F6C80
    mr r3, r22
    bl fn_80202D00
    lfs f4, 0x4(r26)
    addi r4, r25, 0x37
    lfs f3, 0x8(r26)
    lfs f0, 0xc(r26)
    fmuls f4, f30, f4
    fmuls f3, f30, f3
    fmuls f0, f30, f0
    fmuls f1, f31, f4
    fmuls f2, f31, f3
    fmuls f3, f31, f0
    bl fn_801F7DF0
    b lbl_fn_801D77A4_00000714
lbl_fn_801D77A4_00000700:
    mr r3, r22
    bl fn_80202D00
    lfs f1, lbl_80882AD8
    addi r4, r25, 0x44
    bl fn_801F6C80
lbl_fn_801D77A4_00000714:
    addi r23, r23, 0x1
    addi r24, r24, 0x4
    cmpwi r23, 0x8
    blt lbl_fn_801D77A4_00000610
    lwz r3, 0x20(r29)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
lbl_fn_801D77A4_00000734:
    addi r11, r1, 0xf0
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    psq_l f28, 0xf8(r1), 0, 0
    lfd f28, 0xf0(r1)
    bl _restgpr_22
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_801D7AC0(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x100
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    bl _savegpr_21
    cmpwi r5, 0x0
    lis r0, 0x4330
    stw r0, 0xb8(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    stw r0, 0xc0(r1)
    mr r30, r6
    mr r31, r7
    beq lbl_fn_801D7AC0_00000A5C
    lfs f0, lbl_80882AD0
    cmpwi r8, 0x0
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    blt lbl_fn_801D7AC0_000008B8
    mr r3, r8
    bl fn_802091E8
    cmpwi r3, 0x0
    beq lbl_fn_801D7AC0_000007FC
    lwz r3, 0x2c(r3)
    b lbl_fn_801D7AC0_00000800
lbl_fn_801D7AC0_000007FC:
    li r3, 0x0
lbl_fn_801D7AC0_00000800:
    cmpwi r3, 0x0
    ble lbl_fn_801D7AC0_000008B8
    subi r0, r3, 0x1
    lis r3, lbl_8073CA20@ha
    slwi r5, r0, 30
    lfd f8, lbl_8073CA20@l(r3)
    srwi r4, r0, 31
    srawi r0, r0, 2
    subf r3, r4, r5
    lfs f5, lbl_80882AE4
    addze r6, r0
    lfs f7, lbl_80882AE0
    rotlwi r0, r3, 2
    addi r5, r1, 0x40
    add r3, r0, r4
    xoris r4, r3, 0x8000
    stw r4, 0xbc(r1)
    xoris r0, r6, 0x8000
    addi r3, r3, 0x1
    stw r0, 0xc4(r1)
    addi r0, r6, 0x1
    lfd f4, 0xb8(r1)
    xoris r3, r3, 0x8000
    lfd f0, 0xc0(r1)
    xoris r0, r0, 0x8000
    fsubs f6, f4, f8
    stw r3, 0xbc(r1)
    fsubs f3, f0, f8
    addi r4, r1, 0x50
    stw r0, 0xc4(r1)
    fmuls f6, f7, f6
    fmuls f4, f5, f3
    lfd f0, 0xc0(r1)
    lfd f3, 0xb8(r1)
    fsubs f0, f0, f8
    stfs f4, 0x44(r1)
    fsubs f3, f3, f8
    stfs f6, 0x40(r1)
    fmuls f0, f5, f0
    fmuls f3, f7, f3
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x4c(r1)
    stfs f3, 0x48(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
lbl_fn_801D7AC0_000008B8:
    addi r26, r1, 0x50
    addi r25, r1, 0x30
    psq_l f1, 0x0(r26), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    bl fn_80202118
    lis r4, lbl_8073CA28@ha
    mr r5, r25
    addi r25, r4, lbl_8073CA28@l
    addi r4, r25, 0x61
    bl fn_801F48C8
    addi r24, r1, 0x20
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    bl fn_80202118
    mr r5, r24
    addi r4, r25, 0x68
    bl fn_801F48C8
    lfs f30, lbl_80882AE0
    mr r23, r29
    lfs f31, lbl_80882ADC
    li r22, 0x0
    lfs f28, lbl_80882AD0
    lfs f29, lbl_80882AD8
lbl_fn_801D7AC0_0000092C:
    lwz r21, 0x0(r23)
    mr r3, r27
    mr r4, r30
    addi r6, r1, 0x14
    lwz r0, 0x104(r21)
    mr r5, r21
    addi r7, r1, 0x8
    addi r8, r25, 0x57
    oris r0, r0, 0x80
    stw r0, 0x104(r21)
    stfs f28, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f29, 0x14(r1)
    stfs f29, 0x18(r1)
    stfs f29, 0x1c(r1)
    bl fn_805112AC
    mr r5, r22
    addi r3, r1, 0x78
    addi r4, r25, 0x4b
    crclr 6
    bl sprintf
    mr r3, r31
    bl fn_80202118
    mr r24, r3
    addi r3, r1, 0x78
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r24
    addi r3, r1, 0x60
    bl fn_801F4E8C
    mr r3, r21
    bl fn_80202D00
    addi r4, r25, 0x2e
    addi r5, r1, 0x60
    bl fn_801F6E78
    mr r3, r22
    bl fn_80117214
    slwi r0, r3, 2
    lwzx r3, r28, r0
    bl fn_8020BCEC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_801D7AC0_00000A28
    mr r3, r21
    bl fn_80202D00
    lfs f1, lbl_80882AD0
    addi r4, r25, 0x44
    bl fn_801F6C80
    mr r3, r21
    bl fn_80202D00
    lfs f4, 0x4(r26)
    addi r4, r25, 0x37
    lfs f3, 0x8(r26)
    lfs f0, 0xc(r26)
    fmuls f4, f30, f4
    fmuls f3, f30, f3
    fmuls f0, f30, f0
    fmuls f1, f31, f4
    fmuls f2, f31, f3
    fmuls f3, f31, f0
    bl fn_801F7DF0
    b lbl_fn_801D7AC0_00000A3C
lbl_fn_801D7AC0_00000A28:
    mr r3, r21
    bl fn_80202D00
    lfs f1, lbl_80882AD8
    addi r4, r25, 0x44
    bl fn_801F6C80
lbl_fn_801D7AC0_00000A3C:
    addi r22, r22, 0x1
    addi r23, r23, 0x4
    cmpwi r22, 0x8
    blt lbl_fn_801D7AC0_0000092C
    lwz r3, 0x20(r29)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
lbl_fn_801D7AC0_00000A5C:
    addi r11, r1, 0x100
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    bl _restgpr_21
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_801D7DE8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r26, r7
    mr r31, r8
    li r4, 0x0
    li r5, 0x1a
    lwz r27, lbl_8087EF70
    mr r3, r27
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_801D7DE8_00000AEC
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_801D7DE8_00000B40
lbl_fn_801D7DE8_00000AEC:
    lwz r3, 0x0(r29)
    subic. r0, r3, 0x1
    stw r0, 0x0(r29)
    bge lbl_fn_801D7DE8_00000B04
    subi r0, r26, 0x1
    stw r0, 0x0(r29)
lbl_fn_801D7DE8_00000B04:
    lwz r3, 0x0(r29)
    lwz r4, 0x0(r28)
    mullw r0, r3, r30
    add r0, r4, r0
    cmpw r31, r0
    bgt lbl_fn_801D7DE8_00000B24
    subi r0, r3, 0x1
    stw r0, 0x0(r29)
lbl_fn_801D7DE8_00000B24:
    addi r3, r1, 0x14
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D7DE8_00000CD8
lbl_fn_801D7DE8_00000B40:
    mr r3, r27
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_801D7DE8_00000B70
    mr r3, r27
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_801D7DE8_00000BC8
lbl_fn_801D7DE8_00000B70:
    lwz r3, 0x0(r29)
    addi r4, r3, 0x1
    stw r4, 0x0(r29)
    mullw r0, r4, r30
    lwz r3, 0x0(r28)
    add r0, r3, r0
    cmpw r31, r0
    bgt lbl_fn_801D7DE8_00000B98
    addi r0, r4, 0x1
    stw r0, 0x0(r29)
lbl_fn_801D7DE8_00000B98:
    lwz r0, 0x0(r29)
    cmpw r0, r26
    blt lbl_fn_801D7DE8_00000BAC
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801D7DE8_00000BAC:
    addi r3, r1, 0x10
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D7DE8_00000CD8
lbl_fn_801D7DE8_00000BC8:
    mr r3, r27
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_801D7DE8_00000BF8
    mr r3, r27
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_801D7DE8_00000C50
lbl_fn_801D7DE8_00000BF8:
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
    cmpw r0, r30
    blt lbl_fn_801D7DE8_00000C14
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_fn_801D7DE8_00000C14:
    lwz r0, 0x0(r29)
    lwz r3, 0x0(r28)
    mullw r0, r0, r30
    add r0, r3, r0
    cmpw r31, r0
    bgt lbl_fn_801D7DE8_00000C34
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_fn_801D7DE8_00000C34:
    addi r3, r1, 0xc
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D7DE8_00000CD8
lbl_fn_801D7DE8_00000C50:
    mr r3, r27
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_801D7DE8_00000C80
    mr r3, r27
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_801D7DE8_00000CD8
lbl_fn_801D7DE8_00000C80:
    lwz r3, 0x0(r28)
    subic. r0, r3, 0x1
    stw r0, 0x0(r28)
    bge lbl_fn_801D7DE8_00000CC0
    subi r3, r30, 0x1
    stw r3, 0x0(r28)
    lwz r0, 0x0(r29)
    mullw r0, r0, r30
    add r0, r3, r0
    cmpw r31, r0
    bgt lbl_fn_801D7DE8_00000CC0
    divw r0, r31, r30
    mullw r0, r0, r30
    subf r3, r0, r31
    subi r0, r3, 0x1
    stw r0, 0x0(r28)
lbl_fn_801D7DE8_00000CC0:
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_801D7DE8_00000CD8:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801D8040(void)
{
    nofralloc
    lwz r4, 0x1f8(r3)
    lwz r0, 0x1fc(r3)
    slwi r4, r4, 7
    add r3, r3, r4
    slwi r0, r0, 4
    add r3, r3, r0
    addi r3, r3, 0xcf8
    blr
}

asm void fn_801D8060(void)
{
    nofralloc
    lwz r4, 0x200(r3)
    lwz r0, 0x204(r3)
    slwi r4, r4, 6
    add r3, r3, r4
    slwi r0, r0, 4
    add r3, r3, r0
    addi r3, r3, 0x10f8
    blr
}

asm void fn_801D8080(void)
{
    nofralloc
    lis r4, lbl_807C7D28@ha
    lfs f1, lbl_80882AD8
    addi r3, r4, lbl_807C7D28@l
    lfs f0, lbl_80882AE8
    stfs f1, lbl_807C7D28@l(r4)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

asm void fn_801D80A0(void)
{
    nofralloc
    addis r3, r3, 0x1
    slwi r0, r4, 6
    add r3, r3, r0
    subi r3, r3, 0x7d70
    blr
}

asm void fn_801D80B4(void)
{
    nofralloc
    lwz r3, lbl_8087F4F0
    blr
}

asm void fn_801D80BC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r4, 0x1b98(r3)
    cmplwi r4, 0x1
    ble lbl_fn_801D80BC_00000DA8
    cmpwi r4, 0x2
    beq lbl_fn_801D80BC_00000E0C
    cmpwi r4, 0x3
    beq lbl_fn_801D80BC_00000E14
    b lbl_fn_801D80BC_00000E74
lbl_fn_801D80BC_00000DA8:
    neg r0, r4
    or r0, r0, r4
    srwi r30, r0, 31
    bl fn_801CF334
    mr r4, r3
    mr r3, r31
    lwz r4, 0x4c(r4)
    mr r5, r30
    bl fn_801CFA5C
    mr r28, r3
    lwz r3, 0xacc(r31)
    mr r4, r28
    li r5, 0x1
    bl fn_801E7D78
    mr r3, r28
    bl fn_80206BE4
    bl fn_80211480
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_801D80BC_00000E84
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0xc(r4)
    bl fn_804A3C24
    b lbl_fn_801D80BC_00000E84
lbl_fn_801D80BC_00000E0C:
    li r30, 0x0
    b lbl_fn_801D80BC_00000E18
lbl_fn_801D80BC_00000E14:
    li r30, 0x1
lbl_fn_801D80BC_00000E18:
    mr r3, r31
    bl fn_801CF334
    mr r4, r3
    mr r3, r31
    lwz r4, 0x4c(r4)
    mr r5, r30
    bl fn_801CFAA8
    mr r28, r3
    lwz r3, 0xacc(r31)
    mr r4, r28
    li r5, 0x1
    bl fn_801E7EA8
    mr r3, r28
    bl fn_8020EF80
    bl fn_80211480
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_801D80BC_00000E84
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0xc(r4)
    bl fn_804A3C24
    b lbl_fn_801D80BC_00000E84
lbl_fn_801D80BC_00000E74:
    lwz r3, 0xacc(r3)
    li r4, 0x0
    li r5, 0x1
    bl fn_801E7EA8
lbl_fn_801D80BC_00000E84:
    lwz r28, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r28
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D80BC_00001144
    lwz r0, 0x1b98(r31)
    cmpwi r0, 0x4
    beq lbl_fn_801D80BC_00000EC0
    cmpwi r0, 0x0
    beq lbl_fn_801D80BC_00000F1C
    cmpwi r0, 0x1
    beq lbl_fn_801D80BC_00000F24
    b lbl_fn_801D80BC_00001084
lbl_fn_801D80BC_00000EC0:
    lwz r3, lbl_8087F430
    li r4, 0xc6
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_801D80BC_00000EE8
    lwz r3, lbl_8087F430
    li r4, 0xc6
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_801D80BC_00000EE8:
    addi r3, r1, 0x2c
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D80BC_000011EC
lbl_fn_801D80BC_00000F1C:
    li r29, 0x0
    b lbl_fn_801D80BC_00000F28
lbl_fn_801D80BC_00000F24:
    li r29, 0x1
lbl_fn_801D80BC_00000F28:
    mr r3, r31
    bl fn_801CF334
    lwz r28, 0x4c(r3)
    mr r3, r31
    mr r5, r29
    mr r4, r28
    bl fn_801CFA5C
    mr r30, r3
    mr r3, r31
    mr r4, r28
    mr r5, r29
    bl fn_801E07A4
    lwz r0, 0xb50(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801D80BC_00000FEC
    cmpwi r30, 0x0
    bne lbl_fn_801D80BC_00000F9C
    addi r3, r1, 0x28
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801D80BC_000011EC
    li r4, 0x159
    bl fn_803750E4
    b lbl_fn_801D80BC_000011EC
lbl_fn_801D80BC_00000F9C:
    addi r3, r1, 0x24
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0x20
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    stw r29, 0x1e4(r31)
    mr r3, r31
    li r4, 0x3
    lwz r12, 0x0(r31)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D80BC_000011EC
lbl_fn_801D80BC_00000FEC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801D80BC_00001054
    li r4, 0x395
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_801D80BC_00001054
    lwz r3, lbl_8087F430
    li r4, 0x396
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_801D80BC_00001054
    addi r3, r1, 0x1c
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    lwz r28, lbl_8087F580
    li r3, 0x1
    li r4, 0x111
    bl fn_80116FC0
    mr r4, r3
    mr r3, r28
    bl fn_804A4294
    b lbl_fn_801D80BC_000011EC
lbl_fn_801D80BC_00001054:
    addi r3, r1, 0x18
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801D80BC_000011EC
    li r4, 0x159
    bl fn_803750E4
    b lbl_fn_801D80BC_000011EC
lbl_fn_801D80BC_00001084:
    mr r3, r31
    bl fn_801CF334
    lwz r0, 0x1b98(r31)
    lwz r4, lbl_8087F4F0
    lwz r3, 0x4c(r3)
    cmpwi r0, 0x3
    addis r4, r4, 0x1
    slwi r0, r3, 6
    add r3, r4, r0
    bne lbl_fn_801D80BC_000010E0
    lwz r4, -0x7d70(r3)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D80BC_000010E0
    addi r3, r1, 0x14
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D80BC_000011EC
lbl_fn_801D80BC_000010E0:
    lwz r6, 0x1b98(r31)
    addi r3, r1, 0x10
    li r4, 0x1
    subfic r5, r6, 0x2
    subi r0, r6, 0x2
    or r0, r5, r0
    srwi r0, r0, 31
    stw r0, 0x1e4(r31)
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0xc
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D80BC_000011EC
lbl_fn_801D80BC_00001144:
    mr r3, r28
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D80BC_000011C8
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_801D80BC_000011EC
    li r4, 0x1
    li r5, 0x0
    li r6, 0x20
    li r7, 0x1e
    bl fn_800CFBA0
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    li r5, 0x0
    li r6, 0x20
    li r7, 0xf
    bl fn_800CFBA0
    b lbl_fn_801D80BC_000011EC
lbl_fn_801D80BC_000011C8:
    lwz r28, 0x80(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x3
    bl fn_80510D68
    lwz r0, 0x80(r31)
    cmpw r28, r0
    beq lbl_fn_801D80BC_000011EC
    stw r0, 0x1b98(r31)
lbl_fn_801D80BC_000011EC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801D8560(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    stmw r24, 0x250(r1)
    mr r26, r3
    lwz r0, 0x1e4(r3)
    mulli r0, r0, 0xc
    add r4, r3, r0
    lwz r0, 0xb38(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801D8560_0000128C
    lwz r5, 0x80(r3)
    cmpw r5, r0
    bge lbl_fn_801D8560_0000128C
    mulli r0, r5, 0x18
    lwz r4, 0xb34(r4)
    add. r27, r4, r0
    beq lbl_fn_801D8560_0000128C
    lwz r3, 0xacc(r3)
    li r5, 0x1
    lwz r4, 0x0(r27)
    bl fn_801E7EA8
    lwz r3, 0x0(r27)
    bl fn_8020EF80
    bl fn_80211480
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_801D8560_0000128C
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0xc(r4)
    bl fn_804A3C24
lbl_fn_801D8560_0000128C:
    lwz r25, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r25
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D8560_00001610
    lwz r0, 0x1e4(r26)
    mulli r0, r0, 0xc
    add r3, r26, r0
    lwz r3, 0xb38(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801D8560_000015F4
    lwz r0, 0x80(r26)
    cmpw r0, r3
    bge lbl_fn_801D8560_000015F4
    mr r3, r26
    bl fn_801CF334
    lwz r31, 0x48(r3)
    mr r3, r26
    bl fn_801CF334
    lwz r4, 0x1e4(r26)
    li r29, 0x0
    lwz r30, 0x4c(r3)
    mulli r0, r4, 0xc
    add r3, r26, r0
    lwz r0, 0xb38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D8560_00001310
    lwz r0, 0x80(r26)
    lwz r3, 0xb34(r3)
    mulli r0, r0, 0x18
    add r29, r3, r0
lbl_fn_801D8560_00001310:
    cmpwi r29, 0x0
    bne lbl_fn_801D8560_00001334
    addi r3, r1, 0x2c
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D8560_00001928
lbl_fn_801D8560_00001334:
    lwz r3, lbl_8087F4F0
    cmpwi r4, 0x1
    slwi r25, r30, 6
    addis r0, r3, 0x1
    add r3, r0, r25
    bne lbl_fn_801D8560_000013A0
    lwz r4, -0x7d70(r3)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D8560_000013A0
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F580
    lwz r4, 0xdd4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801D8560_0000137C
    b lbl_fn_801D8560_00001380
lbl_fn_801D8560_0000137C:
    la r4, lbl_808813D0
lbl_fn_801D8560_00001380:
    bl fn_804A4294
    addi r3, r1, 0x28
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D8560_00001928
lbl_fn_801D8560_000013A0:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    blt lbl_fn_801D8560_00001530
    lwz r5, 0x1e4(r26)
    mr r3, r26
    mr r4, r30
    bl fn_801CFAA8
    lwz r0, 0x10(r29)
    mr r28, r3
    cmpwi r0, 0x0
    bne lbl_fn_801D8560_0000143C
    addi r3, r1, 0x24
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0xc(r29)
    bl fn_8020924C
    lwz r4, lbl_8087F1E4
    mr r26, r3
    lwz r27, 0x894(r4)
    cmpwi r27, 0x0
    beq lbl_fn_801D8560_00001404
    b lbl_fn_801D8560_00001408
lbl_fn_801D8560_00001404:
    la r27, lbl_808813D0
lbl_fn_801D8560_00001408:
    mr r3, r28
    bl fn_8020EF80
    bl fn_80211480
    lwz r6, 0x8(r3)
    mr r4, r27
    lwz r5, 0x4(r26)
    addi r3, r1, 0x48
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F580
    addi r4, r1, 0x48
    bl fn_804A4300
    b lbl_fn_801D8560_00001928
lbl_fn_801D8560_0000143C:
    lwz r3, 0xc(r29)
    bl fn_80219558
    lwz r5, lbl_8087F4F0
    mr r27, r3
    lwz r3, 0x48(r26)
    mr r4, r27
    addis r0, r5, 0x1
    add r5, r0, r25
    subi r25, r5, 0x7d70
    bl fn_80530388
    lwz r24, 0x4(r3)
    li r5, -0x1
    li r4, 0x0
    li r0, 0x1
    stw r5, 0x38(r1)
    mr r3, r28
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r28, 0x30(r1)
    lwz r4, 0x1e4(r26)
    stw r4, 0x34(r1)
    slwi r4, r4, 3
    lwzx r4, r25, r4
    stw r4, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D8560_000014F0
    mr r3, r26
    mr r4, r27
    mr r5, r24
    addi r6, r1, 0x30
    li r7, 0x0
    li r8, 0x0
    bl fn_801DC42C
    mr r3, r26
    mr r4, r30
    mr r5, r31
    mr r6, r29
    li r7, 0x0
    li r8, 0x0
    bl fn_801DC42C
    mr r25, r3
    b lbl_fn_801D8560_00001598
lbl_fn_801D8560_000014F0:
    mr r3, r26
    mr r4, r30
    mr r5, r31
    mr r6, r29
    li r7, 0x0
    li r8, 0x0
    bl fn_801DC42C
    mr r25, r3
    mr r3, r26
    mr r4, r27
    mr r5, r24
    addi r6, r1, 0x30
    li r7, 0x0
    li r8, 0x0
    bl fn_801DC42C
    b lbl_fn_801D8560_00001598
lbl_fn_801D8560_00001530:
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801D8560_00001578
    addi r3, r1, 0x20
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F580
    lwz r4, 0x89c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801D8560_0000156C
    b lbl_fn_801D8560_00001570
lbl_fn_801D8560_0000156C:
    la r4, lbl_808813D0
lbl_fn_801D8560_00001570:
    bl fn_804A4294
    b lbl_fn_801D8560_00001928
lbl_fn_801D8560_00001578:
    mr r3, r26
    mr r4, r30
    mr r5, r31
    mr r6, r29
    li r7, 0x1
    li r8, 0x1
    bl fn_801DC42C
    mr r25, r3
lbl_fn_801D8560_00001598:
    cmpwi r25, 0x0
    beq lbl_fn_801D8560_000015D8
    mr r3, r26
    mr r4, r30
    bl fn_801DD26C
    mr r3, r26
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r26
    lwz r5, 0x1e4(r26)
    addi r6, r26, 0x80
    addi r7, r26, 0x88
    li r8, 0x0
    bl fn_801E6EF0
    mr r3, r26
    bl fn_801E6714
lbl_fn_801D8560_000015D8:
    addi r3, r1, 0x1c
    li r4, 0xd
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D8560_00001928
lbl_fn_801D8560_000015F4:
    addi r3, r1, 0x18
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D8560_00001928
lbl_fn_801D8560_00001610:
    mr r3, r25
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D8560_00001674
    addi r3, r1, 0x14
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0x10
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r26)
    mr r3, r26
    li r4, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D8560_00001928
lbl_fn_801D8560_00001674:
    mr r3, r25
    li r4, 0x0
    li r5, 0xd
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D8560_000017B4
    lwz r0, 0x1e4(r26)
    mulli r0, r0, 0xc
    add r3, r26, r0
    lwz r0, 0xb38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D8560_000017B4
    addi r3, r1, 0xc
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x1e4(r26)
    li r3, 0x1
    stw r3, 0xb7c(r26)
    li r30, -0x1
    mulli r0, r0, 0xc
    li r25, -0x1
    add r3, r26, r0
    lwz r0, 0xb38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D8560_000016FC
    lwz r0, 0x80(r26)
    lwz r3, 0xb34(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    lwz r30, 0x8(r3)
    lwz r25, 0xc(r3)
lbl_fn_801D8560_000016FC:
    mr r3, r26
    bl fn_801CF334
    mr r4, r3
    mr r3, r26
    lwz r4, 0x4c(r4)
    bl fn_801DD26C
    lwz r0, 0x1e4(r26)
    li r5, 0x0
    lwz r4, 0x88(r26)
    li r3, 0x0
    mulli r8, r0, 0xc
    lwz r0, 0x80(r26)
    subf r4, r4, r0
    add r7, r26, r8
    lwz r0, 0xb38(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801D8560_000017A8
lbl_fn_801D8560_00001744:
    lwz r0, 0xb34(r7)
    add r6, r0, r3
    lwz r0, 0xc(r6)
    cmpw r0, r25
    bne lbl_fn_801D8560_0000179C
    lwz r0, 0x8(r6)
    cmpw r0, r30
    bne lbl_fn_801D8560_0000179C
    subf r4, r4, r5
    stw r5, 0x80(r26)
    neg r0, r4
    add r3, r26, r8
    andc r0, r0, r4
    srawi r0, r0, 31
    and r0, r4, r0
    stw r0, 0x88(r26)
    lwz r0, 0xb38(r3)
    cmplwi r0, 0xa
    bge lbl_fn_801D8560_000017A8
    li r0, 0x0
    stw r0, 0x88(r26)
    b lbl_fn_801D8560_000017A8
lbl_fn_801D8560_0000179C:
    addi r5, r5, 0x1
    addi r3, r3, 0x18
    bdnz lbl_fn_801D8560_00001744
lbl_fn_801D8560_000017A8:
    mr r3, r26
    bl fn_801E6714
    b lbl_fn_801D8560_00001928
lbl_fn_801D8560_000017B4:
    mr r3, r25
    li r4, 0x0
    li r5, 0xc
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D8560_000018F4
    lwz r0, 0x1e4(r26)
    mulli r0, r0, 0xc
    add r3, r26, r0
    lwz r0, 0xb38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D8560_000018F4
    addi r3, r1, 0x8
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x1e4(r26)
    li r3, 0x0
    stw r3, 0xb7c(r26)
    li r30, -0x1
    mulli r0, r0, 0xc
    li r25, -0x1
    add r3, r26, r0
    lwz r0, 0xb38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D8560_0000183C
    lwz r0, 0x80(r26)
    lwz r3, 0xb34(r3)
    mulli r0, r0, 0x18
    add r3, r3, r0
    lwz r30, 0x8(r3)
    lwz r25, 0xc(r3)
lbl_fn_801D8560_0000183C:
    mr r3, r26
    bl fn_801CF334
    mr r4, r3
    mr r3, r26
    lwz r4, 0x4c(r4)
    bl fn_801DD26C
    lwz r0, 0x1e4(r26)
    li r5, 0x0
    lwz r4, 0x88(r26)
    li r3, 0x0
    mulli r8, r0, 0xc
    lwz r0, 0x80(r26)
    subf r4, r4, r0
    add r7, r26, r8
    lwz r0, 0xb38(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801D8560_000018E8
lbl_fn_801D8560_00001884:
    lwz r0, 0xb34(r7)
    add r6, r0, r3
    lwz r0, 0xc(r6)
    cmpw r0, r25
    bne lbl_fn_801D8560_000018DC
    lwz r0, 0x8(r6)
    cmpw r0, r30
    bne lbl_fn_801D8560_000018DC
    subf r4, r4, r5
    stw r5, 0x80(r26)
    neg r0, r4
    add r3, r26, r8
    andc r0, r0, r4
    srawi r0, r0, 31
    and r0, r4, r0
    stw r0, 0x88(r26)
    lwz r0, 0xb38(r3)
    cmplwi r0, 0xa
    bge lbl_fn_801D8560_000018E8
    li r0, 0x0
    stw r0, 0x88(r26)
    b lbl_fn_801D8560_000018E8
lbl_fn_801D8560_000018DC:
    addi r5, r5, 0x1
    addi r3, r3, 0x18
    bdnz lbl_fn_801D8560_00001884
lbl_fn_801D8560_000018E8:
    mr r3, r26
    bl fn_801E6714
    b lbl_fn_801D8560_00001928
lbl_fn_801D8560_000018F4:
    lwz r24, 0x80(r26)
    addi r3, r26, 0x80
    lwz r5, 0x84(r26)
    addi r4, r26, 0x88
    lwz r6, 0x8c(r26)
    li r7, 0x1
    li r8, 0x3
    bl fn_804A4494
    lwz r0, 0x80(r26)
    cmpw r24, r0
    beq lbl_fn_801D8560_00001928
    mr r3, r26
    bl fn_801E6714
lbl_fn_801D8560_00001928:
    lmw r24, 0x250(r1)
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}

asm void fn_801D8C90(void)
{
    nofralloc
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r4, 0x10(r3)
    blr
}

asm void fn_801D8CAC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_801D8CB4(void)
{
    nofralloc
    mulli r0, r4, 0x18
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}
