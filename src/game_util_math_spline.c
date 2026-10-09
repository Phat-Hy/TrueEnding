#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void fn_800DD3FC(void);
extern void fn_8011728C(void);
extern void fn_801173A8(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_80211480(void);
extern void fn_8021150C(void);
extern void fn_80211648(void);
extern void fn_80444804(void);
extern void fn_8044D500(void);
extern void fn_8044D560(void);
extern void fn_804A251C(void);
extern void fn_80584178(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);

/* External data declarations */
extern u8 lbl_80761220[];
extern u8 lbl_80796824[];

/* Small data declarations */
extern u32 lbl_8087E688;
extern u32 lbl_8087E68C;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F578;
extern u32 lbl_808813D0;
extern u32 lbl_808880C0;
extern u32 lbl_808880D0;
extern u32 lbl_808880E0;
extern u32 lbl_808880E8;

/* Function declarations */
void fn_80581FDC(void);
void fn_8058259C(void);
void fn_805828B4(void);
void fn_80582BE8(void);
void fn_80582F00(void);
void fn_805830D8(void);

asm void fn_80581FDC(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    bl _savegpr_25
    lis r5, 0x4330
    li r0, 0x0
    mr r27, r3
    stw r5, 0x68(r1)
    addi r3, r1, 0x14
    li r4, 0x0
    stw r5, 0x70(r1)
    li r5, 0x40
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    bl memset
    lwz r0, 0x4c(r27)
    cmpwi r0, 0x4
    bne lbl_fn_80581FDC_0000007C
    lfs f31, lbl_808880D0
    b lbl_fn_80581FDC_00000080
lbl_fn_80581FDC_0000007C:
    lfs f31, lbl_808880C0
lbl_fn_80581FDC_00000080:
    cmpwi r0, 0x4
    bne lbl_fn_80581FDC_00000090
    lfs f30, lbl_808880E0
    b lbl_fn_80581FDC_00000094
lbl_fn_80581FDC_00000090:
    lfs f30, lbl_808880C0
lbl_fn_80581FDC_00000094:
    lis r3, lbl_80761220@ha
    li r0, 0x0
    stw r0, 0x32fc(r27)
    li r31, 0x0
    lfd f27, lbl_80761220@l(r3)
    li r30, 0x1
    lfs f28, lbl_808880E8
    li r29, -0x1
    lfs f29, lbl_808880C0
lbl_fn_80581FDC_000000B8:
    lwz r3, lbl_8087F4F0
    mr r4, r31
    bl fn_80444804
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80581FDC_000002CC
    lwz r25, 0x0(r3)
    mr r3, r25
    bl fn_80211480
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80581FDC_000002CC
    addis r3, r27, 0x2
    mr r4, r26
    lwz r3, 0x5b00(r3)
    bl fn_8011728C
    cmpwi r3, 0x0
    beq lbl_fn_80581FDC_000002CC
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    ble lbl_fn_80581FDC_000002CC
    stw r25, 0xc(r1)
    mr r3, r25
    stw r30, 0x54(r1)
    stw r29, 0x58(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    bne lbl_fn_80581FDC_00000130
    li r0, 0x0
    b lbl_fn_80581FDC_000001D4
lbl_fn_80581FDC_00000130:
    lha r0, 0xbc(r3)
    cmpwi r0, 0x9
    bne lbl_fn_80581FDC_000001A8
    lwz r0, lbl_8087F578
    cmpwi r0, 0x0
    beq lbl_fn_80581FDC_0000017C
    lwz r4, 0x4(r3)
    mr r3, r0
    bl fn_804A251C
    xoris r0, r3, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f27
    fmuls f0, f29, f0
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r0, 0x7c(r1)
    b lbl_fn_80581FDC_000001D4
lbl_fn_80581FDC_0000017C:
    lwz r0, 0xc8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f27
    fmuls f0, f0, f29
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r0, 0x7c(r1)
    b lbl_fn_80581FDC_000001D4
lbl_fn_80581FDC_000001A8:
    lwz r0, 0xc8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f27
    fmuls f0, f28, f0
    fmuls f0, f0, f29
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r0, 0x7c(r1)
lbl_fn_80581FDC_000001D4:
    stw r0, 0x10(r1)
    mr r3, r26
    bl fn_80211648
    stw r3, 0x5c(r1)
    lwz r3, 0xc(r1)
    stw r26, 0x60(r1)
    bl fn_8021150C
    stw r3, 0x64(r1)
    lwz r0, 0x32fc(r27)
    mulli r0, r0, 0x5c
    add r0, r27, r0
    addic. r3, r0, 0x3300
    beq lbl_fn_80581FDC_000002C0
    lwz r0, 0xc(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x18(r1)
    lwz r4, 0x14(r1)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, 0x20(r1)
    lwz r4, 0x1c(r1)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, 0x28(r1)
    lwz r4, 0x24(r1)
    stw r4, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, 0x30(r1)
    lwz r4, 0x2c(r1)
    stw r4, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, 0x38(r1)
    lwz r4, 0x34(r1)
    stw r4, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, 0x40(r1)
    lwz r4, 0x3c(r1)
    stw r4, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0x48(r1)
    lwz r4, 0x44(r1)
    stw r4, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x50(r1)
    lwz r4, 0x4c(r1)
    stw r4, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x54(r1)
    stw r0, 0x48(r3)
    lwz r0, 0x58(r1)
    stw r0, 0x4c(r3)
    lwz r0, 0x5c(r1)
    stw r0, 0x50(r3)
    lwz r0, 0x60(r1)
    stw r0, 0x54(r3)
    lwz r0, 0x64(r1)
    stw r0, 0x58(r3)
lbl_fn_80581FDC_000002C0:
    lwz r3, 0x32fc(r27)
    addi r0, r3, 0x1
    stw r0, 0x32fc(r27)
lbl_fn_80581FDC_000002CC:
    addi r31, r31, 0x1
    cmpwi r31, 0x600
    blt lbl_fn_80581FDC_000000B8
    lwz r3, lbl_8087F4F0
    bl fn_8044D560
    lis r4, lbl_80761220@ha
    lfs f30, lbl_808880C0
    lfd f31, lbl_80761220@l(r4)
    mr r29, r3
    li r28, 0x0
    li r30, 0x0
    li r31, 0x1
    b lbl_fn_80581FDC_00000504
lbl_fn_80581FDC_00000300:
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_8044D500
    mr r26, r3
    bl fn_80211480
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80581FDC_00000500
    addis r3, r27, 0x2
    mr r4, r25
    lwz r3, 0x5b00(r3)
    bl fn_8011728C
    cmpwi r3, 0x0
    beq lbl_fn_80581FDC_00000500
    stw r26, 0xc(r1)
    mr r3, r26
    stw r30, 0x54(r1)
    stw r28, 0x58(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    bne lbl_fn_80581FDC_0000035C
    li r0, 0x0
    b lbl_fn_80581FDC_00000410
lbl_fn_80581FDC_0000035C:
    lha r0, 0xbc(r3)
    cmpwi r0, 0x9
    bne lbl_fn_80581FDC_000003D4
    lwz r0, lbl_8087F578
    cmpwi r0, 0x0
    beq lbl_fn_80581FDC_000003A8
    lwz r4, 0x4(r3)
    mr r3, r0
    bl fn_804A251C
    xoris r0, r3, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f31
    fmuls f0, f30, f0
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r0, 0x7c(r1)
    b lbl_fn_80581FDC_00000410
lbl_fn_80581FDC_000003A8:
    lwz r0, 0xc8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f31
    fmuls f0, f0, f30
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r0, 0x7c(r1)
    b lbl_fn_80581FDC_00000410
lbl_fn_80581FDC_000003D4:
    lwz r3, 0x4(r3)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_80581FDC_0000040C
    lwz r0, 0x124(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f31
    fmuls f0, f0, f30
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r0, 0x7c(r1)
    b lbl_fn_80581FDC_00000410
lbl_fn_80581FDC_0000040C:
    li r0, 0xa
lbl_fn_80581FDC_00000410:
    stw r0, 0x10(r1)
    lwz r3, 0xc(r1)
    stw r31, 0x5c(r1)
    stw r25, 0x60(r1)
    bl fn_8021150C
    stw r3, 0x64(r1)
    lwz r0, 0x32fc(r27)
    mulli r0, r0, 0x5c
    add r0, r27, r0
    addic. r3, r0, 0x3300
    beq lbl_fn_80581FDC_000004F4
    lwz r0, 0xc(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x18(r1)
    lwz r4, 0x14(r1)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, 0x20(r1)
    lwz r4, 0x1c(r1)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, 0x28(r1)
    lwz r4, 0x24(r1)
    stw r4, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, 0x30(r1)
    lwz r4, 0x2c(r1)
    stw r4, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, 0x38(r1)
    lwz r4, 0x34(r1)
    stw r4, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, 0x40(r1)
    lwz r4, 0x3c(r1)
    stw r4, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0x48(r1)
    lwz r4, 0x44(r1)
    stw r4, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x50(r1)
    lwz r4, 0x4c(r1)
    stw r4, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x54(r1)
    stw r0, 0x48(r3)
    lwz r0, 0x58(r1)
    stw r0, 0x4c(r3)
    lwz r0, 0x5c(r1)
    stw r0, 0x50(r3)
    lwz r0, 0x60(r1)
    stw r0, 0x54(r3)
    lwz r0, 0x64(r1)
    stw r0, 0x58(r3)
lbl_fn_80581FDC_000004F4:
    lwz r3, 0x32fc(r27)
    addi r0, r3, 0x1
    stw r0, 0x32fc(r27)
lbl_fn_80581FDC_00000500:
    addi r28, r28, 0x1
lbl_fn_80581FDC_00000504:
    cmpw r28, r29
    blt lbl_fn_80581FDC_00000300
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r27, 0x3300
    addi r5, r1, 0x8
    lwz r0, 0x32fc(r27)
    mulli r0, r0, 0x5c
    add r4, r27, r0
    addi r4, r4, 0x3300
    bl fn_8058259C
    addis r3, r27, 0x2
    lwz r4, 0x32fc(r27)
    lwz r0, 0x5b04(r3)
    stw r4, 0x5b08(r3)
    cmpw r0, r4
    blt lbl_fn_80581FDC_00000558
    subi r4, r4, 0x1
    srawi r0, r4, 31
    andc r0, r4, r0
    stw r0, 0x5b04(r3)
lbl_fn_80581FDC_00000558:
    addis r5, r27, 0x2
    lwz r4, 0x5b10(r5)
    lwz r3, 0x5b08(r5)
    lwz r0, 0x5b0c(r5)
    subf r3, r4, r3
    cmpw r0, r3
    blt lbl_fn_80581FDC_00000580
    srawi r0, r3, 31
    andc r0, r3, r0
    stw r0, 0x5b0c(r5)
lbl_fn_80581FDC_00000580:
    addi r11, r1, 0xa0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    lfd f27, 0xa0(r1)
    bl _restgpr_25
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8058259C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    lis r25, 0xb216
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
    addi r30, r25, 0x42c9
lbl_fn_8058259C_000005EC:
    subf r0, r26, r27
    mulhw r3, r30, r0
    add r0, r3, r0
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_8058259C_000008C4
    cmpwi r7, 0x14
    bgt lbl_fn_8058259C_00000628
    mr r3, r26
    mr r4, r27
    mr r5, r28
    bl fn_80584178
    b lbl_fn_8058259C_000008C4
lbl_fn_8058259C_00000628:
    lwz r4, lbl_8087E688
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x5c
    add r3, r26, r0
    blt lbl_fn_8058259C_00000668
    li r6, -0x4
lbl_fn_8058259C_00000668:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E688
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0x5c
    add r4, r26, r0
    blt lbl_fn_8058259C_000006B4
    li r6, -0x4
    stw r6, lbl_8087E688
lbl_fn_8058259C_000006B4:
    subi r23, r27, 0x5c
    mr r6, r28
    mr r5, r23
    bl fn_805830D8
    mr r29, r26
    mr r24, r23
    b lbl_fn_8058259C_000006D4
lbl_fn_8058259C_000006D0:
    addi r29, r29, 0x5c
lbl_fn_8058259C_000006D4:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_805828B4
    cmpwi r3, 0x0
    bne lbl_fn_8058259C_000006D0
lbl_fn_8058259C_000006EC:
    subi r24, r24, 0x5c
    cmplw r29, r24
    beq lbl_fn_8058259C_00000710
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_805828B4
    cmpwi r3, 0x0
    beq lbl_fn_8058259C_000006EC
lbl_fn_8058259C_00000710:
    cmplw r29, r24
    bge lbl_fn_8058259C_00000780
    mr r3, r29
    mr r4, r24
    bl fn_80582F00
    addi r29, r29, 0x5c
    b lbl_fn_8058259C_00000730
lbl_fn_8058259C_0000072C:
    addi r29, r29, 0x5c
lbl_fn_8058259C_00000730:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_805828B4
    cmpwi r3, 0x0
    bne lbl_fn_8058259C_0000072C
lbl_fn_8058259C_00000748:
    subi r24, r24, 0x5c
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_805828B4
    cmpwi r3, 0x0
    beq lbl_fn_8058259C_00000748
    cmplw r29, r24
    bge lbl_fn_8058259C_00000780
    mr r3, r29
    mr r4, r24
    bl fn_80582F00
    addi r29, r29, 0x5c
    b lbl_fn_8058259C_00000730
lbl_fn_8058259C_00000780:
    cmplw r29, r26
    bne lbl_fn_8058259C_00000858
    mr r3, r29
    mr r4, r23
    bl fn_80582F00
    subi r24, r27, 0x5c
    mr r3, r28
    mr r4, r26
    addi r29, r29, 0x5c
    mr r5, r24
    bl fn_805828B4
    cmpwi r3, 0x0
    bne lbl_fn_8058259C_000007F0
    b lbl_fn_8058259C_000007BC
lbl_fn_8058259C_000007B8:
    addi r29, r29, 0x5c
lbl_fn_8058259C_000007BC:
    cmplw r29, r27
    beq lbl_fn_8058259C_000007DC
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_805828B4
    cmpwi r3, 0x0
    beq lbl_fn_8058259C_000007B8
lbl_fn_8058259C_000007DC:
    cmplw r29, r24
    bge lbl_fn_8058259C_000007F0
    mr r3, r29
    mr r4, r24
    bl fn_80582F00
lbl_fn_8058259C_000007F0:
    cmplw r29, r24
    bge lbl_fn_8058259C_00000850
    b lbl_fn_8058259C_00000800
lbl_fn_8058259C_000007FC:
    addi r29, r29, 0x5c
lbl_fn_8058259C_00000800:
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_805828B4
    cmpwi r3, 0x0
    beq lbl_fn_8058259C_000007FC
lbl_fn_8058259C_00000818:
    subi r24, r24, 0x5c
    mr r3, r28
    mr r4, r26
    mr r5, r24
    bl fn_805828B4
    cmpwi r3, 0x0
    bne lbl_fn_8058259C_00000818
    cmplw r29, r24
    bge lbl_fn_8058259C_00000850
    mr r3, r29
    mr r4, r24
    bl fn_80582F00
    addi r29, r29, 0x5c
    b lbl_fn_8058259C_00000800
lbl_fn_8058259C_00000850:
    mr r26, r29
    b lbl_fn_8058259C_000005EC
lbl_fn_8058259C_00000858:
    subf r4, r26, r29
    addi r3, r25, 0x42c9
    mulhw r5, r3, r4
    subf r0, r29, r27
    mulhw r3, r3, r0
    add r4, r5, r4
    srawi r4, r4, 6
    add r0, r3, r0
    srwi r5, r4, 31
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r4, r4, r5
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_8058259C_000008AC
    mr r3, r26
    mr r4, r29
    mr r5, r28
    bl fn_80582BE8
    mr r26, r29
    b lbl_fn_8058259C_000005EC
lbl_fn_8058259C_000008AC:
    mr r3, r29
    mr r4, r27
    mr r5, r28
    bl fn_80582BE8
    mr r27, r29
    b lbl_fn_8058259C_000005EC
lbl_fn_8058259C_000008C4:
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805828B4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stmw r25, 0x114(r1)
    mr r27, r4
    lwz r31, 0x54(r4)
    mr r28, r5
    lwz r30, 0x54(r5)
    mr r3, r31
    bl fn_801173A8
    mr r29, r3
    mr r3, r30
    bl fn_801173A8
    cmpw r29, r3
    beq lbl_fn_805828B4_0000092C
    xor r0, r3, r29
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r3, r0, 31
    b lbl_fn_805828B4_00000BF8
lbl_fn_805828B4_0000092C:
    lha r4, 0xbc(r30)
    lha r0, 0xbc(r31)
    cmpw r0, r4
    beq lbl_fn_805828B4_00000954
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_805828B4_00000BF8
lbl_fn_805828B4_00000954:
    cmpwi r0, 0x2
    beq lbl_fn_805828B4_00000994
    cmpwi r4, 0x2
    beq lbl_fn_805828B4_00000994
    cmpwi r0, 0x3
    beq lbl_fn_805828B4_00000994
    cmpwi r4, 0x3
    beq lbl_fn_805828B4_00000994
    lwz r0, 0x58(r27)
    lwz r4, 0x58(r28)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_805828B4_00000BF8
lbl_fn_805828B4_00000994:
    lwz r3, 0x48(r27)
    cmpwi r3, 0x0
    beq lbl_fn_805828B4_000009B4
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805828B4_000009B4
    li r3, 0x1
    b lbl_fn_805828B4_00000BF8
lbl_fn_805828B4_000009B4:
    cmpwi r3, 0x0
    bne lbl_fn_805828B4_000009D0
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805828B4_000009D0
    li r3, 0x0
    b lbl_fn_805828B4_00000BF8
lbl_fn_805828B4_000009D0:
    lwz r3, 0x0(r27)
    li r26, 0x0
    li r25, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805828B4_000009F4
    lwz r3, 0x0(r27)
    bl fn_80206C50
    mr r26, r3
lbl_fn_805828B4_000009F4:
    lwz r3, 0x0(r28)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805828B4_00000A10
    lwz r3, 0x0(r28)
    bl fn_80206C50
    mr r25, r3
lbl_fn_805828B4_00000A10:
    cmpwi r26, 0x0
    beq lbl_fn_805828B4_00000A48
    cmpwi r25, 0x0
    beq lbl_fn_805828B4_00000A48
    lwz r4, 0x78(r25)
    lwz r0, 0x78(r26)
    cmpw r0, r4
    beq lbl_fn_805828B4_00000A48
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_805828B4_00000BF8
lbl_fn_805828B4_00000A48:
    lwz r0, 0x48(r27)
    lwz r29, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805828B4_00000A88
    cmpwi r26, 0x0
    beq lbl_fn_805828B4_00000A88
    lwz r3, 0xb8(r26)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r29, 0x4(r3)
    cmpwi r29, 0x0
    beq lbl_fn_805828B4_00000A84
    b lbl_fn_805828B4_00000A88
lbl_fn_805828B4_00000A84:
    la r29, lbl_808813D0
lbl_fn_805828B4_00000A88:
    lwz r0, 0x48(r28)
    lwz r26, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805828B4_00000AC8
    cmpwi r25, 0x0
    beq lbl_fn_805828B4_00000AC8
    lwz r3, 0xb8(r25)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r26, 0x4(r3)
    cmpwi r26, 0x0
    beq lbl_fn_805828B4_00000AC4
    b lbl_fn_805828B4_00000AC8
lbl_fn_805828B4_00000AC4:
    la r26, lbl_808813D0
lbl_fn_805828B4_00000AC8:
    lis r4, lbl_80796824@ha
    mr r5, r29
    addi r4, r4, lbl_80796824@l
    addi r3, r1, 0x88
    addi r4, r4, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x88
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_805828B4_00000B00
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_805828B4_00000B00:
    lis r4, lbl_80796824@ha
    mr r5, r26
    addi r4, r4, lbl_80796824@l
    addi r3, r1, 0x8
    addi r4, r4, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_805828B4_00000B38
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_805828B4_00000B38:
    addi r3, r1, 0x88
    addi r4, r1, 0x8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_805828B4_00000BE8
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    bne lbl_fn_805828B4_00000BB4
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805828B4_00000BB4
    lwz r29, 0x8(r30)
    lwz r30, 0x8(r31)
    mr r4, r29
    mr r3, r30
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_805828B4_00000BA0
    lwz r4, 0x4c(r27)
    lwz r0, 0x4c(r28)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_805828B4_00000BF8
lbl_fn_805828B4_00000BA0:
    mr r3, r30
    mr r4, r29
    bl fn_80686AF0
    srwi r3, r3, 31
    b lbl_fn_805828B4_00000BF8
lbl_fn_805828B4_00000BB4:
    mr r3, r29
    bl fn_80686A48
    mr r27, r3
    mr r3, r26
    bl fn_80686A48
    cmpw r27, r3
    beq lbl_fn_805828B4_00000BE8
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r3, r0, 31
    b lbl_fn_805828B4_00000BF8
lbl_fn_805828B4_00000BE8:
    mr r3, r29
    mr r4, r26
    bl fn_80686AF0
    srwi r3, r3, 31
lbl_fn_805828B4_00000BF8:
    lmw r25, 0x114(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80582BE8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    lis r25, 0xb216
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
    addi r30, r25, 0x42c9
lbl_fn_80582BE8_00000C38:
    subf r0, r26, r27
    mulhw r3, r30, r0
    add r0, r3, r0
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_80582BE8_00000F10
    cmpwi r7, 0x14
    bgt lbl_fn_80582BE8_00000C74
    mr r3, r26
    mr r4, r27
    mr r5, r28
    bl fn_80584178
    b lbl_fn_80582BE8_00000F10
lbl_fn_80582BE8_00000C74:
    lwz r4, lbl_8087E68C
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x5c
    add r3, r26, r0
    blt lbl_fn_80582BE8_00000CB4
    li r6, -0x4
lbl_fn_80582BE8_00000CB4:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E68C
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0x5c
    add r4, r26, r0
    blt lbl_fn_80582BE8_00000D00
    li r6, -0x4
    stw r6, lbl_8087E68C
lbl_fn_80582BE8_00000D00:
    subi r23, r27, 0x5c
    mr r6, r28
    mr r5, r23
    bl fn_805830D8
    mr r29, r26
    mr r24, r23
    b lbl_fn_80582BE8_00000D20
lbl_fn_80582BE8_00000D1C:
    addi r29, r29, 0x5c
lbl_fn_80582BE8_00000D20:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_805828B4
    cmpwi r3, 0x0
    bne lbl_fn_80582BE8_00000D1C
lbl_fn_80582BE8_00000D38:
    subi r24, r24, 0x5c
    cmplw r29, r24
    beq lbl_fn_80582BE8_00000D5C
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_805828B4
    cmpwi r3, 0x0
    beq lbl_fn_80582BE8_00000D38
lbl_fn_80582BE8_00000D5C:
    cmplw r29, r24
    bge lbl_fn_80582BE8_00000DCC
    mr r3, r29
    mr r4, r24
    bl fn_80582F00
    addi r29, r29, 0x5c
    b lbl_fn_80582BE8_00000D7C
lbl_fn_80582BE8_00000D78:
    addi r29, r29, 0x5c
lbl_fn_80582BE8_00000D7C:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_805828B4
    cmpwi r3, 0x0
    bne lbl_fn_80582BE8_00000D78
lbl_fn_80582BE8_00000D94:
    subi r24, r24, 0x5c
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_805828B4
    cmpwi r3, 0x0
    beq lbl_fn_80582BE8_00000D94
    cmplw r29, r24
    bge lbl_fn_80582BE8_00000DCC
    mr r3, r29
    mr r4, r24
    bl fn_80582F00
    addi r29, r29, 0x5c
    b lbl_fn_80582BE8_00000D7C
lbl_fn_80582BE8_00000DCC:
    cmplw r29, r26
    bne lbl_fn_80582BE8_00000EA4
    mr r3, r29
    mr r4, r23
    bl fn_80582F00
    subi r24, r27, 0x5c
    mr r3, r28
    mr r4, r26
    addi r29, r29, 0x5c
    mr r5, r24
    bl fn_805828B4
    cmpwi r3, 0x0
    bne lbl_fn_80582BE8_00000E3C
    b lbl_fn_80582BE8_00000E08
lbl_fn_80582BE8_00000E04:
    addi r29, r29, 0x5c
lbl_fn_80582BE8_00000E08:
    cmplw r29, r27
    beq lbl_fn_80582BE8_00000E28
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_805828B4
    cmpwi r3, 0x0
    beq lbl_fn_80582BE8_00000E04
lbl_fn_80582BE8_00000E28:
    cmplw r29, r24
    bge lbl_fn_80582BE8_00000E3C
    mr r3, r29
    mr r4, r24
    bl fn_80582F00
lbl_fn_80582BE8_00000E3C:
    cmplw r29, r24
    bge lbl_fn_80582BE8_00000E9C
    b lbl_fn_80582BE8_00000E4C
lbl_fn_80582BE8_00000E48:
    addi r29, r29, 0x5c
lbl_fn_80582BE8_00000E4C:
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_805828B4
    cmpwi r3, 0x0
    beq lbl_fn_80582BE8_00000E48
lbl_fn_80582BE8_00000E64:
    subi r24, r24, 0x5c
    mr r3, r28
    mr r4, r26
    mr r5, r24
    bl fn_805828B4
    cmpwi r3, 0x0
    bne lbl_fn_80582BE8_00000E64
    cmplw r29, r24
    bge lbl_fn_80582BE8_00000E9C
    mr r3, r29
    mr r4, r24
    bl fn_80582F00
    addi r29, r29, 0x5c
    b lbl_fn_80582BE8_00000E4C
lbl_fn_80582BE8_00000E9C:
    mr r26, r29
    b lbl_fn_80582BE8_00000C38
lbl_fn_80582BE8_00000EA4:
    subf r4, r26, r29
    addi r3, r25, 0x42c9
    mulhw r5, r3, r4
    subf r0, r29, r27
    mulhw r3, r3, r0
    add r4, r5, r4
    srawi r4, r4, 6
    add r0, r3, r0
    srwi r5, r4, 31
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r4, r4, r5
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_80582BE8_00000EF8
    mr r3, r26
    mr r4, r29
    mr r5, r28
    bl fn_80582BE8
    mr r26, r29
    b lbl_fn_80582BE8_00000C38
lbl_fn_80582BE8_00000EF8:
    mr r3, r29
    mr r4, r27
    mr r5, r28
    bl fn_80582BE8
    mr r27, r29
    b lbl_fn_80582BE8_00000C38
lbl_fn_80582BE8_00000F10:
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80582F00(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    stmw r16, 0x70(r1)
    lwz r19, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r18, 0x4(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r20, 0x8(r3)
    lwz r21, 0xc(r3)
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    lwz r22, 0x10(r3)
    stw r5, 0x8(r3)
    lwz r23, 0x14(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    lwz r24, 0x18(r3)
    lwz r25, 0x1c(r3)
    stw r5, 0x10(r3)
    lwz r26, 0x20(r3)
    stw r0, 0x14(r3)
    lwz r27, 0x24(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    lwz r28, 0x28(r3)
    lwz r29, 0x2c(r3)
    stw r5, 0x18(r3)
    lwz r30, 0x30(r3)
    stw r0, 0x1c(r3)
    lwz r31, 0x34(r3)
    lwz r5, 0x20(r4)
    lwz r0, 0x24(r4)
    lwz r12, 0x38(r3)
    lwz r11, 0x3c(r3)
    stw r5, 0x20(r3)
    lwz r10, 0x40(r3)
    stw r0, 0x24(r3)
    lwz r9, 0x44(r3)
    lwz r8, 0x48(r3)
    lwz r5, 0x28(r4)
    lwz r0, 0x2c(r4)
    lwz r7, 0x4c(r3)
    stw r5, 0x28(r3)
    lwz r6, 0x50(r3)
    stw r0, 0x2c(r3)
    lwz r5, 0x54(r3)
    lwz r16, 0x30(r4)
    lwz r0, 0x34(r4)
    stw r0, 0x34(r3)
    lwz r0, 0x58(r3)
    stw r16, 0x30(r3)
    lwz r17, 0x38(r4)
    lwz r16, 0x3c(r4)
    stw r16, 0x3c(r3)
    stw r17, 0x38(r3)
    lwz r16, 0x40(r4)
    lwz r17, 0x44(r4)
    stw r17, 0x44(r3)
    stw r16, 0x40(r3)
    lwz r17, 0x48(r4)
    stw r17, 0x48(r3)
    lwz r17, 0x4c(r4)
    stw r17, 0x4c(r3)
    lwz r17, 0x50(r4)
    stw r17, 0x50(r3)
    lwz r17, 0x54(r4)
    stw r17, 0x54(r3)
    lwz r17, 0x58(r4)
    stw r17, 0x58(r3)
    stw r20, 0x10(r1)
    stw r21, 0x14(r1)
    stw r22, 0x18(r1)
    stw r23, 0x1c(r1)
    stw r24, 0x20(r1)
    stw r25, 0x24(r1)
    stw r26, 0x28(r1)
    stw r27, 0x2c(r1)
    stw r28, 0x30(r1)
    stw r29, 0x34(r1)
    stw r30, 0x38(r1)
    stw r31, 0x3c(r1)
    stw r12, 0x40(r1)
    stw r11, 0x44(r1)
    stw r10, 0x48(r1)
    stw r9, 0x4c(r1)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r19, 0x0(r4)
    stw r18, 0x4(r4)
    stw r20, 0x8(r4)
    stw r21, 0xc(r4)
    stw r22, 0x10(r4)
    stw r23, 0x14(r4)
    stw r24, 0x18(r4)
    stw r25, 0x1c(r4)
    stw r26, 0x20(r4)
    stw r27, 0x24(r4)
    stw r28, 0x28(r4)
    stw r29, 0x2c(r4)
    stw r30, 0x30(r4)
    stw r31, 0x34(r4)
    stw r12, 0x38(r4)
    stw r11, 0x3c(r4)
    stw r10, 0x40(r4)
    stw r9, 0x44(r4)
    stw r8, 0x48(r4)
    stw r7, 0x4c(r4)
    stw r6, 0x50(r4)
    stw r5, 0x54(r4)
    stw r0, 0x58(r4)
    lmw r16, 0x70(r1)
    addi r1, r1, 0xb0
    blr
}

asm void fn_805830D8(void)
{
    nofralloc
    stwu r1, -0x4d0(r1)
    mflr r0
    stw r0, 0x4d4(r1)
    stmw r14, 0x488(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lwz r16, 0x54(r5)
    lwz r15, 0x54(r3)
    mr r3, r16
    bl fn_801173A8
    mr r14, r3
    mr r3, r15
    bl fn_801173A8
    cmpw r14, r3
    beq lbl_fn_805830D8_00001154
    xor r0, r3, r14
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001420
lbl_fn_805830D8_00001154:
    lha r4, 0xbc(r15)
    lha r0, 0xbc(r16)
    cmpw r0, r4
    beq lbl_fn_805830D8_0000117C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001420
lbl_fn_805830D8_0000117C:
    cmpwi r0, 0x2
    beq lbl_fn_805830D8_000011BC
    cmpwi r4, 0x2
    beq lbl_fn_805830D8_000011BC
    cmpwi r0, 0x3
    beq lbl_fn_805830D8_000011BC
    cmpwi r4, 0x3
    beq lbl_fn_805830D8_000011BC
    lwz r0, 0x58(r30)
    lwz r4, 0x58(r28)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001420
lbl_fn_805830D8_000011BC:
    lwz r3, 0x48(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_000011DC
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000011DC
    li r0, 0x1
    b lbl_fn_805830D8_00001420
lbl_fn_805830D8_000011DC:
    cmpwi r3, 0x0
    bne lbl_fn_805830D8_000011F8
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805830D8_000011F8
    li r0, 0x0
    b lbl_fn_805830D8_00001420
lbl_fn_805830D8_000011F8:
    lwz r3, 0x0(r30)
    li r17, 0x0
    li r18, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_0000121C
    lwz r3, 0x0(r30)
    bl fn_80206C50
    mr r17, r3
lbl_fn_805830D8_0000121C:
    lwz r3, 0x0(r28)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001238
    lwz r3, 0x0(r28)
    bl fn_80206C50
    mr r18, r3
lbl_fn_805830D8_00001238:
    cmpwi r17, 0x0
    beq lbl_fn_805830D8_00001270
    cmpwi r18, 0x0
    beq lbl_fn_805830D8_00001270
    lwz r4, 0x78(r18)
    lwz r0, 0x78(r17)
    cmpw r0, r4
    beq lbl_fn_805830D8_00001270
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001420
lbl_fn_805830D8_00001270:
    lwz r0, 0x48(r30)
    lwz r14, 0x8(r16)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000012B0
    cmpwi r17, 0x0
    beq lbl_fn_805830D8_000012B0
    lwz r3, 0xb8(r17)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r14, 0x4(r3)
    cmpwi r14, 0x0
    beq lbl_fn_805830D8_000012AC
    b lbl_fn_805830D8_000012B0
lbl_fn_805830D8_000012AC:
    la r14, lbl_808813D0
lbl_fn_805830D8_000012B0:
    lwz r0, 0x48(r28)
    lwz r17, 0x8(r15)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000012F0
    cmpwi r18, 0x0
    beq lbl_fn_805830D8_000012F0
    lwz r3, 0xb8(r18)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r17, 0x4(r3)
    cmpwi r17, 0x0
    beq lbl_fn_805830D8_000012EC
    b lbl_fn_805830D8_000012F0
lbl_fn_805830D8_000012EC:
    la r17, lbl_808813D0
lbl_fn_805830D8_000012F0:
    lis r4, lbl_80796824@ha
    mr r5, r14
    addi r4, r4, lbl_80796824@l
    addi r3, r1, 0x380
    addi r4, r4, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x380
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001328
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_805830D8_00001328:
    lis r4, lbl_80796824@ha
    mr r5, r17
    addi r4, r4, lbl_80796824@l
    addi r3, r1, 0x400
    addi r4, r4, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x400
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001360
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_805830D8_00001360:
    addi r3, r1, 0x380
    addi r4, r1, 0x400
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_805830D8_00001410
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000013DC
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000013DC
    lwz r14, 0x8(r15)
    lwz r15, 0x8(r16)
    mr r4, r14
    mr r3, r15
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_805830D8_000013C8
    lwz r4, 0x4c(r30)
    lwz r0, 0x4c(r28)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001420
lbl_fn_805830D8_000013C8:
    mr r3, r15
    mr r4, r14
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805830D8_00001420
lbl_fn_805830D8_000013DC:
    mr r3, r14
    bl fn_80686A48
    mr r15, r3
    mr r3, r17
    bl fn_80686A48
    cmpw r15, r3
    beq lbl_fn_805830D8_00001410
    xor r0, r3, r15
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001420
lbl_fn_805830D8_00001410:
    mr r3, r14
    mr r4, r17
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_805830D8_00001420:
    lwz r16, 0x54(r29)
    cntlzw r0, r0
    lwz r15, 0x54(r30)
    srwi r31, r0, 5
    mr r3, r16
    bl fn_801173A8
    mr r14, r3
    mr r3, r15
    bl fn_801173A8
    cmpw r14, r3
    beq lbl_fn_805830D8_00001464
    xor r0, r3, r14
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001730
lbl_fn_805830D8_00001464:
    lha r4, 0xbc(r15)
    lha r0, 0xbc(r16)
    cmpw r0, r4
    beq lbl_fn_805830D8_0000148C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001730
lbl_fn_805830D8_0000148C:
    cmpwi r0, 0x2
    beq lbl_fn_805830D8_000014CC
    cmpwi r4, 0x2
    beq lbl_fn_805830D8_000014CC
    cmpwi r0, 0x3
    beq lbl_fn_805830D8_000014CC
    cmpwi r4, 0x3
    beq lbl_fn_805830D8_000014CC
    lwz r0, 0x58(r29)
    lwz r4, 0x58(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001730
lbl_fn_805830D8_000014CC:
    lwz r3, 0x48(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_000014EC
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000014EC
    li r0, 0x1
    b lbl_fn_805830D8_00001730
lbl_fn_805830D8_000014EC:
    cmpwi r3, 0x0
    bne lbl_fn_805830D8_00001508
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805830D8_00001508
    li r0, 0x0
    b lbl_fn_805830D8_00001730
lbl_fn_805830D8_00001508:
    lwz r3, 0x0(r29)
    li r17, 0x0
    li r18, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_0000152C
    lwz r3, 0x0(r29)
    bl fn_80206C50
    mr r17, r3
lbl_fn_805830D8_0000152C:
    lwz r3, 0x0(r30)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001548
    lwz r3, 0x0(r30)
    bl fn_80206C50
    mr r18, r3
lbl_fn_805830D8_00001548:
    cmpwi r17, 0x0
    beq lbl_fn_805830D8_00001580
    cmpwi r18, 0x0
    beq lbl_fn_805830D8_00001580
    lwz r4, 0x78(r18)
    lwz r0, 0x78(r17)
    cmpw r0, r4
    beq lbl_fn_805830D8_00001580
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001730
lbl_fn_805830D8_00001580:
    lwz r0, 0x48(r29)
    lwz r14, 0x8(r16)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000015C0
    cmpwi r17, 0x0
    beq lbl_fn_805830D8_000015C0
    lwz r3, 0xb8(r17)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r14, 0x4(r3)
    cmpwi r14, 0x0
    beq lbl_fn_805830D8_000015BC
    b lbl_fn_805830D8_000015C0
lbl_fn_805830D8_000015BC:
    la r14, lbl_808813D0
lbl_fn_805830D8_000015C0:
    lwz r0, 0x48(r30)
    lwz r17, 0x8(r15)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_00001600
    cmpwi r18, 0x0
    beq lbl_fn_805830D8_00001600
    lwz r3, 0xb8(r18)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r17, 0x4(r3)
    cmpwi r17, 0x0
    beq lbl_fn_805830D8_000015FC
    b lbl_fn_805830D8_00001600
lbl_fn_805830D8_000015FC:
    la r17, lbl_808813D0
lbl_fn_805830D8_00001600:
    lis r4, lbl_80796824@ha
    mr r5, r14
    addi r4, r4, lbl_80796824@l
    addi r3, r1, 0x280
    addi r4, r4, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x280
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001638
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_805830D8_00001638:
    lis r4, lbl_80796824@ha
    mr r5, r17
    addi r4, r4, lbl_80796824@l
    addi r3, r1, 0x300
    addi r4, r4, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x300
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001670
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_805830D8_00001670:
    addi r3, r1, 0x280
    addi r4, r1, 0x300
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_805830D8_00001720
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000016EC
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000016EC
    lwz r14, 0x8(r15)
    lwz r15, 0x8(r16)
    mr r4, r14
    mr r3, r15
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_805830D8_000016D8
    lwz r4, 0x4c(r29)
    lwz r0, 0x4c(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001730
lbl_fn_805830D8_000016D8:
    mr r3, r15
    mr r4, r14
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805830D8_00001730
lbl_fn_805830D8_000016EC:
    mr r3, r14
    bl fn_80686A48
    mr r15, r3
    mr r3, r17
    bl fn_80686A48
    cmpw r15, r3
    beq lbl_fn_805830D8_00001720
    xor r0, r3, r15
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001730
lbl_fn_805830D8_00001720:
    mr r3, r14
    mr r4, r17
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_805830D8_00001730:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_805830D8_00001748
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_00002188
lbl_fn_805830D8_00001748:
    cmpwi r31, 0x0
    bne lbl_fn_805830D8_00001920
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_00001920
    lwz r24, 0x0(r28)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r28)
    lwz r25, 0x4(r28)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r28)
    lwz r23, 0x8(r28)
    lwz r22, 0xc(r28)
    lwz r3, 0x8(r29)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r28)
    lwz r21, 0x10(r28)
    stw r3, 0x8(r28)
    lwz r20, 0x14(r28)
    lwz r3, 0x10(r29)
    lwz r0, 0x14(r29)
    lwz r19, 0x18(r28)
    lwz r18, 0x1c(r28)
    stw r3, 0x10(r28)
    lwz r17, 0x20(r28)
    stw r0, 0x14(r28)
    lwz r16, 0x24(r28)
    lwz r3, 0x18(r29)
    lwz r0, 0x1c(r29)
    lwz r15, 0x28(r28)
    lwz r14, 0x2c(r28)
    stw r3, 0x18(r28)
    lwz r12, 0x30(r28)
    stw r0, 0x1c(r28)
    lwz r11, 0x34(r28)
    lwz r3, 0x20(r29)
    lwz r0, 0x24(r29)
    lwz r10, 0x38(r28)
    lwz r9, 0x3c(r28)
    stw r3, 0x20(r28)
    lwz r8, 0x40(r28)
    stw r0, 0x24(r28)
    lwz r7, 0x44(r28)
    lwz r6, 0x48(r28)
    lwz r3, 0x28(r29)
    lwz r0, 0x2c(r29)
    lwz r5, 0x4c(r28)
    stw r3, 0x28(r28)
    lwz r4, 0x50(r28)
    stw r0, 0x2c(r28)
    lwz r3, 0x54(r28)
    lwz r26, 0x30(r29)
    lwz r0, 0x34(r29)
    stw r0, 0x34(r28)
    lwz r0, 0x58(r28)
    stw r26, 0x30(r28)
    lwz r27, 0x38(r29)
    lwz r26, 0x3c(r29)
    stw r26, 0x3c(r28)
    stw r27, 0x38(r28)
    lwz r27, 0x40(r29)
    lwz r26, 0x44(r29)
    stw r26, 0x44(r28)
    stw r27, 0x40(r28)
    lwz r26, 0x48(r29)
    stw r26, 0x48(r28)
    lwz r26, 0x4c(r29)
    stw r26, 0x4c(r28)
    lwz r26, 0x50(r29)
    stw r26, 0x50(r28)
    lwz r26, 0x54(r29)
    stw r26, 0x54(r28)
    lwz r26, 0x58(r29)
    stw r26, 0x58(r28)
    stw r23, 0x228(r1)
    stw r22, 0x22c(r1)
    stw r21, 0x230(r1)
    stw r20, 0x234(r1)
    stw r19, 0x238(r1)
    stw r18, 0x23c(r1)
    stw r17, 0x240(r1)
    stw r16, 0x244(r1)
    stw r15, 0x248(r1)
    stw r14, 0x24c(r1)
    stw r12, 0x250(r1)
    stw r11, 0x254(r1)
    stw r10, 0x258(r1)
    stw r9, 0x25c(r1)
    stw r8, 0x260(r1)
    stw r7, 0x264(r1)
    stw r6, 0x268(r1)
    stw r5, 0x26c(r1)
    stw r4, 0x270(r1)
    stw r3, 0x274(r1)
    stw r0, 0x278(r1)
    stw r24, 0x0(r29)
    stw r25, 0x4(r29)
    stw r23, 0x8(r29)
    stw r22, 0xc(r29)
    stw r21, 0x10(r29)
    stw r20, 0x14(r29)
    stw r19, 0x18(r29)
    stw r18, 0x1c(r29)
    stw r17, 0x20(r29)
    stw r16, 0x24(r29)
    stw r15, 0x28(r29)
    stw r14, 0x2c(r29)
    stw r12, 0x30(r29)
    stw r11, 0x34(r29)
    stw r10, 0x38(r29)
    stw r9, 0x3c(r29)
    stw r8, 0x40(r29)
    stw r7, 0x44(r29)
    stw r6, 0x48(r29)
    stw r5, 0x4c(r29)
    stw r4, 0x50(r29)
    stw r3, 0x54(r29)
    stw r0, 0x58(r29)
    b lbl_fn_805830D8_00002188
lbl_fn_805830D8_00001920:
    lwz r16, 0x54(r29)
    lwz r15, 0x54(r28)
    mr r3, r16
    bl fn_801173A8
    mr r14, r3
    mr r3, r15
    bl fn_801173A8
    cmpw r14, r3
    beq lbl_fn_805830D8_0000195C
    xor r0, r3, r14
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001C28
lbl_fn_805830D8_0000195C:
    lha r4, 0xbc(r15)
    lha r0, 0xbc(r16)
    cmpw r0, r4
    beq lbl_fn_805830D8_00001984
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001C28
lbl_fn_805830D8_00001984:
    cmpwi r0, 0x2
    beq lbl_fn_805830D8_000019C4
    cmpwi r4, 0x2
    beq lbl_fn_805830D8_000019C4
    cmpwi r0, 0x3
    beq lbl_fn_805830D8_000019C4
    cmpwi r4, 0x3
    beq lbl_fn_805830D8_000019C4
    lwz r0, 0x58(r29)
    lwz r4, 0x58(r28)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001C28
lbl_fn_805830D8_000019C4:
    lwz r3, 0x48(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_000019E4
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_000019E4
    li r0, 0x1
    b lbl_fn_805830D8_00001C28
lbl_fn_805830D8_000019E4:
    cmpwi r3, 0x0
    bne lbl_fn_805830D8_00001A00
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805830D8_00001A00
    li r0, 0x0
    b lbl_fn_805830D8_00001C28
lbl_fn_805830D8_00001A00:
    lwz r3, 0x0(r29)
    li r17, 0x0
    li r18, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001A24
    lwz r3, 0x0(r29)
    bl fn_80206C50
    mr r17, r3
lbl_fn_805830D8_00001A24:
    lwz r3, 0x0(r28)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001A40
    lwz r3, 0x0(r28)
    bl fn_80206C50
    mr r18, r3
lbl_fn_805830D8_00001A40:
    cmpwi r17, 0x0
    beq lbl_fn_805830D8_00001A78
    cmpwi r18, 0x0
    beq lbl_fn_805830D8_00001A78
    lwz r4, 0x78(r18)
    lwz r0, 0x78(r17)
    cmpw r0, r4
    beq lbl_fn_805830D8_00001A78
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001C28
lbl_fn_805830D8_00001A78:
    lwz r0, 0x48(r29)
    lwz r14, 0x8(r16)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_00001AB8
    cmpwi r17, 0x0
    beq lbl_fn_805830D8_00001AB8
    lwz r3, 0xb8(r17)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r14, 0x4(r3)
    cmpwi r14, 0x0
    beq lbl_fn_805830D8_00001AB4
    b lbl_fn_805830D8_00001AB8
lbl_fn_805830D8_00001AB4:
    la r14, lbl_808813D0
lbl_fn_805830D8_00001AB8:
    lwz r0, 0x48(r28)
    lwz r17, 0x8(r15)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_00001AF8
    cmpwi r18, 0x0
    beq lbl_fn_805830D8_00001AF8
    lwz r3, 0xb8(r18)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r17, 0x4(r3)
    cmpwi r17, 0x0
    beq lbl_fn_805830D8_00001AF4
    b lbl_fn_805830D8_00001AF8
lbl_fn_805830D8_00001AF4:
    la r17, lbl_808813D0
lbl_fn_805830D8_00001AF8:
    lis r4, lbl_80796824@ha
    mr r5, r14
    addi r4, r4, lbl_80796824@l
    addi r3, r1, 0x120
    addi r4, r4, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x120
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001B30
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_805830D8_00001B30:
    lis r4, lbl_80796824@ha
    mr r5, r17
    addi r4, r4, lbl_80796824@l
    addi r3, r1, 0x1a0
    addi r4, r4, 0x12
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x1a0
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_805830D8_00001B68
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_805830D8_00001B68:
    addi r3, r1, 0x120
    addi r4, r1, 0x1a0
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_805830D8_00001C18
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_00001BE4
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805830D8_00001BE4
    lwz r14, 0x8(r15)
    lwz r15, 0x8(r16)
    mr r4, r14
    mr r3, r15
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_805830D8_00001BD0
    lwz r4, 0x4c(r29)
    lwz r0, 0x4c(r28)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001C28
lbl_fn_805830D8_00001BD0:
    mr r3, r15
    mr r4, r14
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805830D8_00001C28
lbl_fn_805830D8_00001BE4:
    mr r3, r14
    bl fn_80686A48
    mr r15, r3
    mr r3, r17
    bl fn_80686A48
    cmpw r15, r3
    beq lbl_fn_805830D8_00001C18
    xor r0, r3, r15
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_805830D8_00001C28
lbl_fn_805830D8_00001C18:
    mr r3, r14
    mr r4, r17
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_805830D8_00001C28:
    cmpwi r0, 0x0
    beq lbl_fn_805830D8_00001DF4
    lwz r14, 0x0(r28)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r28)
    lwz r17, 0x4(r28)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r28)
    lwz r18, 0x8(r28)
    lwz r19, 0xc(r28)
    lwz r3, 0x8(r29)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r28)
    lwz r20, 0x10(r28)
    stw r3, 0x8(r28)
    lwz r21, 0x14(r28)
    lwz r3, 0x10(r29)
    lwz r0, 0x14(r29)
    lwz r22, 0x18(r28)
    lwz r23, 0x1c(r28)
    stw r3, 0x10(r28)
    lwz r24, 0x20(r28)
    stw r0, 0x14(r28)
    lwz r25, 0x24(r28)
    lwz r3, 0x18(r29)
    lwz r0, 0x1c(r29)
    lwz r26, 0x28(r28)
    lwz r27, 0x2c(r28)
    stw r3, 0x18(r28)
    lwz r12, 0x30(r28)
    stw r0, 0x1c(r28)
    lwz r11, 0x34(r28)
    lwz r3, 0x20(r29)
    lwz r0, 0x24(r29)
    lwz r10, 0x38(r28)
    lwz r9, 0x3c(r28)
    stw r3, 0x20(r28)
    lwz r8, 0x40(r28)
    stw r0, 0x24(r28)
    lwz r7, 0x44(r28)
    lwz r6, 0x48(r28)
    lwz r3, 0x28(r29)
    lwz r0, 0x2c(r29)
    lwz r5, 0x4c(r28)
    stw r3, 0x28(r28)
    lwz r4, 0x50(r28)
    stw r0, 0x2c(r28)
    lwz r3, 0x54(r28)
    lwz r15, 0x30(r29)
    lwz r0, 0x34(r29)
    stw r0, 0x34(r28)
    lwz r0, 0x58(r28)
    stw r15, 0x30(r28)
    lwz r16, 0x38(r29)
    lwz r15, 0x3c(r29)
    stw r15, 0x3c(r28)
    stw r16, 0x38(r28)
    lwz r15, 0x40(r29)
    lwz r16, 0x44(r29)
    stw r16, 0x44(r28)
    stw r15, 0x40(r28)
    lwz r15, 0x48(r29)
    stw r15, 0x48(r28)
    lwz r15, 0x4c(r29)
    stw r15, 0x4c(r28)
    lwz r15, 0x50(r29)
    stw r15, 0x50(r28)
    lwz r15, 0x54(r29)
    stw r15, 0x54(r28)
    lwz r15, 0x58(r29)
    stw r15, 0x58(r28)
    stw r18, 0xc8(r1)
    stw r19, 0xcc(r1)
    stw r20, 0xd0(r1)
    stw r21, 0xd4(r1)
    stw r22, 0xd8(r1)
    stw r23, 0xdc(r1)
    stw r24, 0xe0(r1)
    stw r25, 0xe4(r1)
    stw r26, 0xe8(r1)
    stw r27, 0xec(r1)
    stw r12, 0xf0(r1)
    stw r11, 0xf4(r1)
    stw r10, 0xf8(r1)
    stw r9, 0xfc(r1)
    stw r8, 0x100(r1)
    stw r7, 0x104(r1)
    stw r6, 0x108(r1)
    stw r5, 0x10c(r1)
    stw r4, 0x110(r1)
    stw r3, 0x114(r1)
    stw r0, 0x118(r1)
    stw r14, 0x0(r29)
    stw r17, 0x4(r29)
    stw r18, 0x8(r29)
    stw r19, 0xc(r29)
    stw r20, 0x10(r29)
    stw r21, 0x14(r29)
    stw r22, 0x18(r29)
    stw r23, 0x1c(r29)
    stw r24, 0x20(r29)
    stw r25, 0x24(r29)
    stw r26, 0x28(r29)
    stw r27, 0x2c(r29)
    stw r12, 0x30(r29)
    stw r11, 0x34(r29)
    stw r10, 0x38(r29)
    stw r9, 0x3c(r29)
    stw r8, 0x40(r29)
    stw r7, 0x44(r29)
    stw r6, 0x48(r29)
    stw r5, 0x4c(r29)
    stw r4, 0x50(r29)
    stw r3, 0x54(r29)
    stw r0, 0x58(r29)
lbl_fn_805830D8_00001DF4:
    cmpwi r31, 0x0
    beq lbl_fn_805830D8_00001FC4
    lwz r24, 0x0(r29)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    lwz r25, 0x4(r29)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lwz r23, 0x8(r29)
    lwz r22, 0xc(r29)
    lwz r3, 0x8(r30)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r29)
    lwz r21, 0x10(r29)
    stw r3, 0x8(r29)
    lwz r20, 0x14(r29)
    lwz r3, 0x10(r30)
    lwz r0, 0x14(r30)
    lwz r19, 0x18(r29)
    lwz r18, 0x1c(r29)
    stw r3, 0x10(r29)
    lwz r17, 0x20(r29)
    stw r0, 0x14(r29)
    lwz r16, 0x24(r29)
    lwz r3, 0x18(r30)
    lwz r0, 0x1c(r30)
    lwz r15, 0x28(r29)
    lwz r14, 0x2c(r29)
    stw r3, 0x18(r29)
    lwz r12, 0x30(r29)
    stw r0, 0x1c(r29)
    lwz r11, 0x34(r29)
    lwz r3, 0x20(r30)
    lwz r0, 0x24(r30)
    lwz r10, 0x38(r29)
    lwz r9, 0x3c(r29)
    stw r3, 0x20(r29)
    lwz r8, 0x40(r29)
    stw r0, 0x24(r29)
    lwz r7, 0x44(r29)
    lwz r6, 0x48(r29)
    lwz r3, 0x28(r30)
    lwz r0, 0x2c(r30)
    lwz r5, 0x4c(r29)
    stw r3, 0x28(r29)
    lwz r4, 0x50(r29)
    stw r0, 0x2c(r29)
    lwz r3, 0x54(r29)
    lwz r26, 0x30(r30)
    lwz r0, 0x34(r30)
    stw r0, 0x34(r29)
    lwz r0, 0x58(r29)
    stw r26, 0x30(r29)
    lwz r27, 0x38(r30)
    lwz r26, 0x3c(r30)
    stw r26, 0x3c(r29)
    stw r27, 0x38(r29)
    lwz r27, 0x40(r30)
    lwz r26, 0x44(r30)
    stw r26, 0x44(r29)
    stw r27, 0x40(r29)
    lwz r26, 0x48(r30)
    stw r26, 0x48(r29)
    lwz r26, 0x4c(r30)
    stw r26, 0x4c(r29)
    lwz r26, 0x50(r30)
    stw r26, 0x50(r29)
    lwz r26, 0x54(r30)
    stw r26, 0x54(r29)
    lwz r26, 0x58(r30)
    stw r26, 0x58(r29)
    stw r23, 0x6c(r1)
    stw r22, 0x70(r1)
    stw r21, 0x74(r1)
    stw r20, 0x78(r1)
    stw r19, 0x7c(r1)
    stw r18, 0x80(r1)
    stw r17, 0x84(r1)
    stw r16, 0x88(r1)
    stw r15, 0x8c(r1)
    stw r14, 0x90(r1)
    stw r12, 0x94(r1)
    stw r11, 0x98(r1)
    stw r10, 0x9c(r1)
    stw r9, 0xa0(r1)
    stw r8, 0xa4(r1)
    stw r7, 0xa8(r1)
    stw r6, 0xac(r1)
    stw r5, 0xb0(r1)
    stw r4, 0xb4(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    stw r24, 0x0(r30)
    stw r25, 0x4(r30)
    stw r23, 0x8(r30)
    stw r22, 0xc(r30)
    stw r21, 0x10(r30)
    stw r20, 0x14(r30)
    stw r19, 0x18(r30)
    stw r18, 0x1c(r30)
    stw r17, 0x20(r30)
    stw r16, 0x24(r30)
    stw r15, 0x28(r30)
    stw r14, 0x2c(r30)
    stw r12, 0x30(r30)
    stw r11, 0x34(r30)
    stw r10, 0x38(r30)
    stw r9, 0x3c(r30)
    stw r8, 0x40(r30)
    stw r7, 0x44(r30)
    stw r6, 0x48(r30)
    stw r5, 0x4c(r30)
    stw r4, 0x50(r30)
    stw r3, 0x54(r30)
    stw r0, 0x58(r30)
    b lbl_fn_805830D8_00002188
lbl_fn_805830D8_00001FC4:
    lwz r24, 0x0(r28)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r28)
    lwz r25, 0x4(r28)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r28)
    lwz r23, 0x8(r28)
    lwz r22, 0xc(r28)
    lwz r3, 0x8(r30)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r28)
    lwz r21, 0x10(r28)
    stw r3, 0x8(r28)
    lwz r20, 0x14(r28)
    lwz r3, 0x10(r30)
    lwz r0, 0x14(r30)
    lwz r19, 0x18(r28)
    lwz r18, 0x1c(r28)
    stw r3, 0x10(r28)
    lwz r17, 0x20(r28)
    stw r0, 0x14(r28)
    lwz r16, 0x24(r28)
    lwz r3, 0x18(r30)
    lwz r0, 0x1c(r30)
    lwz r15, 0x28(r28)
    lwz r14, 0x2c(r28)
    stw r3, 0x18(r28)
    lwz r12, 0x30(r28)
    stw r0, 0x1c(r28)
    lwz r11, 0x34(r28)
    lwz r3, 0x20(r30)
    lwz r0, 0x24(r30)
    lwz r10, 0x38(r28)
    lwz r9, 0x3c(r28)
    stw r3, 0x20(r28)
    lwz r8, 0x40(r28)
    stw r0, 0x24(r28)
    lwz r7, 0x44(r28)
    lwz r6, 0x48(r28)
    lwz r3, 0x28(r30)
    lwz r0, 0x2c(r30)
    lwz r5, 0x4c(r28)
    stw r3, 0x28(r28)
    lwz r4, 0x50(r28)
    stw r0, 0x2c(r28)
    lwz r3, 0x54(r28)
    lwz r26, 0x30(r30)
    lwz r0, 0x34(r30)
    stw r0, 0x34(r28)
    lwz r0, 0x58(r28)
    stw r26, 0x30(r28)
    lwz r27, 0x38(r30)
    lwz r26, 0x3c(r30)
    stw r26, 0x3c(r28)
    stw r27, 0x38(r28)
    lwz r27, 0x40(r30)
    lwz r26, 0x44(r30)
    stw r26, 0x44(r28)
    stw r27, 0x40(r28)
    lwz r26, 0x48(r30)
    stw r26, 0x48(r28)
    lwz r26, 0x4c(r30)
    stw r26, 0x4c(r28)
    lwz r26, 0x50(r30)
    stw r26, 0x50(r28)
    lwz r26, 0x54(r30)
    stw r26, 0x54(r28)
    lwz r26, 0x58(r30)
    stw r26, 0x58(r28)
    stw r23, 0x10(r1)
    stw r22, 0x14(r1)
    stw r21, 0x18(r1)
    stw r20, 0x1c(r1)
    stw r19, 0x20(r1)
    stw r18, 0x24(r1)
    stw r17, 0x28(r1)
    stw r16, 0x2c(r1)
    stw r15, 0x30(r1)
    stw r14, 0x34(r1)
    stw r12, 0x38(r1)
    stw r11, 0x3c(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r24, 0x0(r30)
    stw r25, 0x4(r30)
    stw r23, 0x8(r30)
    stw r22, 0xc(r30)
    stw r21, 0x10(r30)
    stw r20, 0x14(r30)
    stw r19, 0x18(r30)
    stw r18, 0x1c(r30)
    stw r17, 0x20(r30)
    stw r16, 0x24(r30)
    stw r15, 0x28(r30)
    stw r14, 0x2c(r30)
    stw r12, 0x30(r30)
    stw r11, 0x34(r30)
    stw r10, 0x38(r30)
    stw r9, 0x3c(r30)
    stw r8, 0x40(r30)
    stw r7, 0x44(r30)
    stw r6, 0x48(r30)
    stw r5, 0x4c(r30)
    stw r4, 0x50(r30)
    stw r3, 0x54(r30)
    stw r0, 0x58(r30)
lbl_fn_805830D8_00002188:
    lmw r14, 0x488(r1)
    lwz r0, 0x4d4(r1)
    mtlr r0
    addi r1, r1, 0x4d0
    blr
}
