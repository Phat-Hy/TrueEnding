#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void fn_80010374(void);
extern void fn_8001296C(void);
extern void fn_80012AC4(void);
extern void fn_80051B70(void);
extern void fn_800A555C(void);
extern void fn_800A5584(void);
extern void fn_800A55D4(void);
extern void fn_800A56A8(void);
extern void fn_800A58D0(void);
extern void fn_800BFAC8(void);
extern void fn_800DC6B4(void);
extern void fn_80112974(void);
extern void fn_80114468(void);
extern void fn_8011447C(void);
extern void fn_801FECE0(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_804786F8(void);
extern void fn_8047F6B0(void);
extern void fn_8047F850(void);
extern void fn_8047F8A4(void);
extern void fn_804817D4(void);
extern void fn_80481800(void);
extern void fn_80481818(void);
extern void fn_80531E84(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_805384D0(void);
extern void fn_80538DC8(void);
extern void fn_80541370(void);
extern void fn_80541BDC(void);
extern void fn_805430A4(void);
extern void fn_805430C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);

/* External data declarations */
extern u8 lbl_8075EC98[];
extern u8 lbl_8075ECA0[];
extern u8 lbl_8075FAF8[];
extern u8 lbl_80794D90[];
extern u8 lbl_80794DC0[];
extern u8 lbl_80794F50[];
extern u8 lbl_80794F58[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F540;
extern u32 lbl_80887E78;
extern u32 lbl_80887E7C;
extern u32 lbl_80887E84;
extern u32 lbl_80887E88;
extern u32 lbl_80887E8C;
extern u32 lbl_80887EA8;
extern u32 lbl_80887EB0;
extern u32 lbl_80887EB4;
extern u32 lbl_80887EB8;
extern u32 lbl_80887EBC;
extern u32 lbl_80887EC0;
extern u32 lbl_80887EC4;
extern u32 lbl_80887EC8;
extern u32 lbl_80887ECC;

/* Function declarations */
void fn_8055D004(void);
void fn_8055D0BC(void);
void fn_8055D6B8(void);
void fn_8055D818(void);
void fn_8055DB04(void);
void fn_8055DBD8(void);
void fn_8055DBE0(void);
void fn_8055DBE8(void);
void fn_8055DBF0(void);
void fn_8055DBF8(void);
void fn_8055E258(void);
void fn_8055E354(void);
void fn_8055E520(void);
void fn_8055E724(void);

asm void fn_8055D004(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8055D004_00000034
    lis r3, lbl_80794DC0@ha
    addi r3, r3, lbl_80794DC0@l
    stw r3, 0x0(r4)
    b lbl_fn_8055D004_000000A0
lbl_fn_8055D004_00000034:
    cmpwi r5, 0x0
    bne lbl_fn_8055D004_00000068
    cmpwi r4, 0x0
    beq lbl_fn_8055D004_000000A0
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8055D004_000000A0
lbl_fn_8055D004_00000068:
    cmpwi r5, 0x1
    beq lbl_fn_8055D004_000000A0
    lwz r5, 0x0(r4)
    lis r3, lbl_80794DC0@ha
    lwz r4, lbl_80794DC0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8055D004_00000098
    stw r30, 0x0(r31)
    b lbl_fn_8055D004_000000A0
lbl_fn_8055D004_00000098:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8055D004_000000A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055D0BC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_26
    lis r0, 0x4330
    mr r28, r4
    stw r0, 0x88(r1)
    mr r3, r28
    stw r0, 0x90(r1)
    bl fn_805381CC
    lwz r6, 0x30(r28)
    lwz r29, 0x18(r28)
    cmpwi r6, 0x0
    lfs f0, 0x198(r3)
    lwz r27, 0x1c(r28)
    lwz r31, 0x10(r28)
    lwz r30, 0x14(r28)
    ble lbl_fn_8055D0BC_0000010C
    lwz r3, 0x2c(r28)
    b lbl_fn_8055D0BC_00000110
lbl_fn_8055D0BC_0000010C:
    li r3, 0x0
lbl_fn_8055D0BC_00000110:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055D0BC_00000138
    cmpwi r0, 0x3
    beq lbl_fn_8055D0BC_00000280
    cmpwi r0, 0x4
    beq lbl_fn_8055D0BC_000002B8
    cmpwi r0, 0x7
    beq lbl_fn_8055D0BC_000005D4
    b lbl_fn_8055D0BC_00000698
lbl_fn_8055D0BC_00000138:
    lfs f1, lbl_80887EA8
    cmpwi r6, 0x1
    li r4, 0x0
    lfs f3, lbl_80887E7C
    lfs f2, lbl_80887E78
    stw r4, 0x60(r1)
    lwz r5, lbl_8087F540
    stw r4, 0x64(r1)
    stw r4, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    stw r4, 0x74(r1)
    stw r4, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    ble lbl_fn_8055D0BC_00000180
    lwz r3, 0x2c(r28)
    addi r4, r3, 0x8
lbl_fn_8055D0BC_00000180:
    add r0, r31, r29
    lis r3, lbl_8075EC98@ha
    xoris r0, r0, 0x8000
    stw r0, 0x8c(r1)
    lwz r0, 0x4(r4)
    lfd f3, lbl_8075EC98@l(r3)
    lfd f2, 0x88(r1)
    lfs f1, lbl_80887E78
    fsubs f2, f2, f3
    stw r0, 0x60(r1)
    fsubs f2, f2, f0
    fcmpo cr0, f2, f1
    ble lbl_fn_8055D0BC_000001D4
    xoris r0, r29, 0x8000
    stw r0, 0x94(r1)
    lfs f0, lbl_80887E7C
    lfd f1, 0x90(r1)
    fsubs f1, f1, f3
    fdivs f1, f2, f1
    fsubs f5, f0, f1
    b lbl_fn_8055D0BC_000001D8
lbl_fn_8055D0BC_000001D4:
    lfs f5, lbl_80887E7C
lbl_fn_8055D0BC_000001D8:
    cmpwi r6, 0x2
    ble lbl_fn_8055D0BC_000001EC
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x10
    b lbl_fn_8055D0BC_000001F0
lbl_fn_8055D0BC_000001EC:
    li r3, 0x0
lbl_fn_8055D0BC_000001F0:
    lfs f0, 0x4(r3)
    cmpwi r6, 0x3
    stfs f0, 0x6c(r1)
    ble lbl_fn_8055D0BC_0000020C
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x18
    b lbl_fn_8055D0BC_00000210
lbl_fn_8055D0BC_0000020C:
    li r3, 0x0
lbl_fn_8055D0BC_00000210:
    lfs f4, 0x1dcc(r5)
    lfs f2, 0x6c(r1)
    lfs f0, 0x4(r3)
    lfs f1, 0x1dd0(r5)
    fsubs f3, f2, f4
    lwz r4, lbl_8087EFA8
    lwz r0, 0x60(r1)
    fsubs f0, f0, f1
    stw r0, 0x240(r4)
    fmadds f3, f5, f3, f4
    lwz r0, 0x64(r1)
    fmadds f2, f5, f0, f1
    stw r0, 0x244(r4)
    lwz r0, 0x68(r1)
    stw r0, 0x248(r4)
    lwz r3, 0x74(r1)
    stfs f3, 0x24c(r4)
    lwz r0, 0x78(r1)
    stfs f2, 0x250(r4)
    lfs f1, 0x7c(r1)
    stw r3, 0x254(r4)
    lfs f0, 0x80(r1)
    stw r0, 0x258(r4)
    stfs f1, 0x25c(r4)
    stfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    stfs f0, 0x260(r4)
    b lbl_fn_8055D0BC_00000698
lbl_fn_8055D0BC_00000280:
    lwz r0, 0x38(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8055D0BC_00000698
    cmpwi r29, 0x0
    bne lbl_fn_8055D0BC_00000298
    subf r29, r31, r30
lbl_fn_8055D0BC_00000298:
    lwz r3, lbl_8087F540
    mr r4, r29
    bl fn_8047F6B0
    cmpwi r3, 0x3
    bne lbl_fn_8055D0BC_00000698
    li r0, 0x1
    stw r0, 0x38(r28)
    b lbl_fn_8055D0BC_00000698
lbl_fn_8055D0BC_000002B8:
    lwz r0, 0x30(r28)
    li r4, 0x0
    lfs f2, lbl_80887E7C
    li r3, 0x1
    lfs f1, lbl_80887E78
    cmpwi r0, 0x1
    stw r4, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f2, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x3c(r1)
    ble lbl_fn_8055D0BC_00000300
    lwz r3, 0x2c(r28)
    addi r4, r3, 0x8
lbl_fn_8055D0BC_00000300:
    lwz r6, 0x4(r4)
    lis r5, lbl_8075ECA0@ha
    lwz r0, 0x30(r28)
    extrwi r3, r6, 8, 8
    stw r3, 0x8c(r1)
    extrwi r3, r6, 8, 16
    clrlwi r4, r6, 24
    stw r3, 0x94(r1)
    srwi r3, r6, 24
    lfd f1, 0x88(r1)
    cmpwi r0, 0x2
    lfd f3, 0x90(r1)
    lfd f6, lbl_8075ECA0@l(r5)
    stw r4, 0x8c(r1)
    fsubs f4, f1, f6
    lfs f5, lbl_80887E84
    stw r3, 0x94(r1)
    fsubs f3, f3, f6
    lfd f2, 0x88(r1)
    lfd f1, 0x90(r1)
    fmuls f4, f5, f4
    fmuls f3, f5, f3
    fsubs f2, f2, f6
    stfs f4, 0x8(r1)
    fsubs f1, f1, f6
    stfs f3, 0xc(r1)
    fmuls f2, f5, f2
    fmuls f1, f5, f1
    stfs f4, 0x44(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    ble lbl_fn_8055D0BC_00000398
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x10
    b lbl_fn_8055D0BC_0000039C
lbl_fn_8055D0BC_00000398:
    li r3, 0x0
lbl_fn_8055D0BC_0000039C:
    lwz r0, 0x30(r28)
    lfs f1, 0x4(r3)
    cmpwi r0, 0x3
    stfs f1, 0x54(r1)
    ble lbl_fn_8055D0BC_000003BC
    lwz r3, 0x2c(r28)
    addi r5, r3, 0x18
    b lbl_fn_8055D0BC_000003C0
lbl_fn_8055D0BC_000003BC:
    li r5, 0x0
lbl_fn_8055D0BC_000003C0:
    xoris r3, r31, 0x8000
    stw r3, 0x8c(r1)
    lis r4, lbl_8075EC98@ha
    lfs f3, 0x4(r5)
    lfd f2, lbl_8075EC98@l(r4)
    lfd f1, 0x88(r1)
    stfs f3, 0x58(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8055D0BC_0000044C
    lwz r4, 0x18(r28)
    add r0, r31, r4
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    lfd f1, 0x90(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8055D0BC_0000044C
    stw r3, 0x8c(r1)
    lfs f3, lbl_80887E78
    lfd f1, 0x88(r1)
    fsubs f1, f1, f2
    fsubs f4, f0, f1
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8055D0BC_00000434
    b lbl_fn_8055D0BC_000004E0
lbl_fn_8055D0BC_00000434:
    xoris r0, r4, 0x8000
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f0, f0, f2
    fdivs f3, f4, f0
    b lbl_fn_8055D0BC_000004E0
lbl_fn_8055D0BC_0000044C:
    lwz r4, 0x1c(r28)
    lis r3, lbl_8075EC98@ha
    lfd f3, lbl_8075EC98@l(r3)
    subf r0, r4, r30
    xoris r3, r0, 0x8000
    stw r3, 0x8c(r1)
    lfd f1, 0x88(r1)
    fsubs f1, f1, f3
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8055D0BC_000004DC
    xoris r0, r30, 0x8000
    stw r0, 0x94(r1)
    lfd f1, 0x90(r1)
    fsubs f1, f1, f3
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8055D0BC_000004DC
    stw r3, 0x8c(r1)
    lfs f1, lbl_80887E78
    lfd f2, 0x88(r1)
    fsubs f2, f2, f3
    fsubs f4, f0, f2
    fcmpo cr0, f4, f1
    cror eq, lt, eq
    bne lbl_fn_8055D0BC_000004BC
    lfs f3, lbl_80887E7C
    b lbl_fn_8055D0BC_000004E0
lbl_fn_8055D0BC_000004BC:
    xoris r0, r4, 0x8000
    stw r0, 0x94(r1)
    lfs f0, lbl_80887E7C
    lfd f1, 0x90(r1)
    fsubs f1, f1, f3
    fdivs f1, f4, f1
    fsubs f3, f0, f1
    b lbl_fn_8055D0BC_000004E0
lbl_fn_8055D0BC_000004DC:
    lfs f3, lbl_80887E7C
lbl_fn_8055D0BC_000004E0:
    lwz r0, 0x30(r28)
    cmpwi r0, 0x4
    ble lbl_fn_8055D0BC_000004F8
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x20
    b lbl_fn_8055D0BC_000004FC
lbl_fn_8055D0BC_000004F8:
    li r3, 0x0
lbl_fn_8055D0BC_000004FC:
    lfs f1, 0x4(r3)
    lfs f2, lbl_80887E7C
    lfs f0, lbl_80887E88
    fadds f1, f2, f1
    fmuls f4, f3, f1
    fsubs f1, f4, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_8055D0BC_00000520
    b lbl_fn_8055D0BC_00000524
lbl_fn_8055D0BC_00000520:
    fmr f1, f0
lbl_fn_8055D0BC_00000524:
    lfs f3, lbl_80887E8C
    fcmpo cr0, f1, f3
    bge lbl_fn_8055D0BC_0000054C
    lfs f1, lbl_80887E7C
    lfs f0, lbl_80887E88
    fsubs f3, f4, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_8055D0BC_00000548
    b lbl_fn_8055D0BC_0000054C
lbl_fn_8055D0BC_00000548:
    fmr f3, f0
lbl_fn_8055D0BC_0000054C:
    lwz r5, lbl_8087EFA8
    frsp f0, f3
    lwz r4, 0x3c(r1)
    lfs f1, 0x44(r1)
    stfs f1, 0x20(r1)
    lwz r3, 0x40(r1)
    stw r4, 0x374(r5)
    lfs f1, 0x48(r1)
    stfs f1, 0x24(r1)
    lfs f1, 0x4c(r1)
    stfs f1, 0x28(r1)
    lfs f1, 0x50(r1)
    stfs f1, 0x2c(r1)
    lfs f2, 0x54(r1)
    lfs f1, 0x58(r1)
    stw r3, 0x378(r5)
    lwz r0, 0x20(r1)
    stw r0, 0x37c(r5)
    lwz r0, 0x24(r1)
    stw r0, 0x380(r5)
    lwz r0, 0x28(r1)
    stw r0, 0x384(r5)
    lwz r0, 0x2c(r1)
    stw r0, 0x388(r5)
    stfs f2, 0x38c(r5)
    stfs f1, 0x390(r5)
    stfs f3, 0x5c(r1)
    stw r4, 0x18(r1)
    stw r3, 0x1c(r1)
    stfs f2, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x394(r5)
    b lbl_fn_8055D0BC_00000698
lbl_fn_8055D0BC_000005D4:
    xoris r0, r31, 0x8000
    stw r0, 0x94(r1)
    lis r3, lbl_8075EC98@ha
    lfd f3, lbl_8075EC98@l(r3)
    xoris r0, r29, 0x8000
    lfd f1, 0x90(r1)
    stw r0, 0x8c(r1)
    fsubs f1, f1, f3
    lfd f2, 0x88(r1)
    fsubs f2, f2, f3
    fsubs f1, f0, f1
    fcmpo cr0, f2, f1
    cror eq, gt, eq
    beq lbl_fn_8055D0BC_00000698
    xoris r0, r30, 0x8000
    stw r0, 0x94(r1)
    xoris r0, r27, 0x8000
    lfd f1, 0x90(r1)
    stw r0, 0x8c(r1)
    fsubs f1, f1, f3
    lfd f2, 0x88(r1)
    fsubs f2, f2, f3
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    beq lbl_fn_8055D0BC_00000698
    lwz r0, 0x38(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8055D0BC_00000698
    cmpwi r6, 0x1
    ble lbl_fn_8055D0BC_0000065C
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x8
    b lbl_fn_8055D0BC_00000660
lbl_fn_8055D0BC_0000065C:
    li r3, 0x0
lbl_fn_8055D0BC_00000660:
    lwz r26, 0x4(r3)
    lwz r3, lbl_8087F540
    lfs f1, lbl_80887E88
    oris r26, r26, 0xff00
    bl fn_8047F8A4
    add r4, r31, r29
    subf r0, r27, r30
    lwz r3, lbl_8087F540
    mr r5, r26
    mr r6, r26
    subf r4, r4, r0
    bl fn_8047F850
    li r0, 0x1
    stw r0, 0x38(r28)
lbl_fn_8055D0BC_00000698:
    addi r11, r1, 0xb0
    li r3, 0x0
    bl _restgpr_26
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8055D6B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_fn_8055D6B8_000007FC
    lwz r3, lbl_8087F540
    bl fn_80481818
    mr r3, r31
    bl fn_805381A4
    lwz r5, 0x30(r31)
    cmpwi r5, 0x0
    ble lbl_fn_8055D6B8_000006F4
    lwz r4, 0x2c(r31)
    b lbl_fn_8055D6B8_000006F8
lbl_fn_8055D6B8_000006F4:
    li r4, 0x0
lbl_fn_8055D6B8_000006F8:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8055D6B8_000007E4
    cmpwi r5, 0x1
    ble lbl_fn_8055D6B8_00000718
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_8055D6B8_0000071C
lbl_fn_8055D6B8_00000718:
    li r4, 0x0
lbl_fn_8055D6B8_0000071C:
    cmpwi r5, 0x2
    lfs f1, 0x4(r4)
    ble lbl_fn_8055D6B8_00000734
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x10
    b lbl_fn_8055D6B8_00000738
lbl_fn_8055D6B8_00000734:
    li r4, 0x0
lbl_fn_8055D6B8_00000738:
    cmpwi r5, 0x3
    lfs f2, 0x4(r4)
    ble lbl_fn_8055D6B8_00000750
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x18
    b lbl_fn_8055D6B8_00000754
lbl_fn_8055D6B8_00000750:
    li r4, 0x0
lbl_fn_8055D6B8_00000754:
    cmpwi r5, 0x4
    lfs f3, 0x4(r4)
    ble lbl_fn_8055D6B8_0000076C
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x20
    b lbl_fn_8055D6B8_00000770
lbl_fn_8055D6B8_0000076C:
    li r4, 0x0
lbl_fn_8055D6B8_00000770:
    cmpwi r5, 0x5
    lfs f4, 0x4(r4)
    ble lbl_fn_8055D6B8_00000788
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x28
    b lbl_fn_8055D6B8_0000078C
lbl_fn_8055D6B8_00000788:
    li r4, 0x0
lbl_fn_8055D6B8_0000078C:
    cmpwi r5, 0x6
    lwz r6, 0x4(r4)
    ble lbl_fn_8055D6B8_000007A4
    lwz r4, 0x2c(r31)
    addi r7, r4, 0x30
    b lbl_fn_8055D6B8_000007A8
lbl_fn_8055D6B8_000007A4:
    li r7, 0x0
lbl_fn_8055D6B8_000007A8:
    lwz r0, 0x10(r3)
    lis r5, lbl_80794D90@ha
    slwi r6, r6, 3
    lwz r3, lbl_8087F540
    mulli r0, r0, 0x65c
    addi r5, r5, lbl_80794D90@l
    lfsx f6, r5, r6
    add r4, r5, r6
    lwz r5, 0x4(r7)
    lfs f5, 0x4(r4)
    add r3, r3, r0
    lwz r4, 0x18(r31)
    addi r3, r3, 0xc8
    bl fn_8011447C
    b lbl_fn_8055D6B8_000007FC
lbl_fn_8055D6B8_000007E4:
    lwz r0, 0x10(r3)
    lwz r3, lbl_8087F540
    mulli r0, r0, 0x65c
    add r3, r3, r0
    addi r3, r3, 0xc8
    bl fn_80114468
lbl_fn_8055D6B8_000007FC:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055D818(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r3, 0x4330
    stw r0, 0x64(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    stw r3, 0x8(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_8055D818_00000A88
    cmpwi r5, 0x0
    beq lbl_fn_8055D818_00000878
    cmpwi r5, 0x2
    beq lbl_fn_8055D818_00000A0C
    b lbl_fn_8055D818_00000AC4
lbl_fn_8055D818_00000878:
    lwz r3, lbl_8087F540
    bl fn_80481818
    mr r3, r29
    bl fn_805381A4
    mr r30, r3
    mr r3, r29
    bl fn_805381CC
    lwz r0, 0x30(r29)
    mr r31, r3
    cmpwi r0, 0x0
    ble lbl_fn_8055D818_000008AC
    lwz r4, 0x2c(r29)
    b lbl_fn_8055D818_000008B0
lbl_fn_8055D818_000008AC:
    li r4, 0x0
lbl_fn_8055D818_000008B0:
    cmpwi r0, 0x1
    lwz r5, 0x4(r4)
    ble lbl_fn_8055D818_000008C8
    lwz r4, 0x2c(r29)
    addi r4, r4, 0x8
    b lbl_fn_8055D818_000008CC
lbl_fn_8055D818_000008C8:
    li r4, 0x0
lbl_fn_8055D818_000008CC:
    cmpwi r0, 0x2
    lfs f31, 0x4(r4)
    ble lbl_fn_8055D818_000008E4
    lwz r4, 0x2c(r29)
    addi r4, r4, 0x10
    b lbl_fn_8055D818_000008E8
lbl_fn_8055D818_000008E4:
    li r4, 0x0
lbl_fn_8055D818_000008E8:
    cmpwi r0, 0x3
    lfs f30, 0x4(r4)
    ble lbl_fn_8055D818_00000900
    lwz r4, 0x2c(r29)
    addi r4, r4, 0x18
    b lbl_fn_8055D818_00000904
lbl_fn_8055D818_00000900:
    li r4, 0x0
lbl_fn_8055D818_00000904:
    cmpwi r0, 0x4
    lfs f29, 0x4(r4)
    ble lbl_fn_8055D818_0000091C
    lwz r4, 0x2c(r29)
    addi r4, r4, 0x20
    b lbl_fn_8055D818_00000920
lbl_fn_8055D818_0000091C:
    li r4, 0x0
lbl_fn_8055D818_00000920:
    lwz r0, 0x128(r3)
    lwz r28, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055D818_00000958
lbl_fn_8055D818_00000938:
    lwz r0, 0x124(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_8055D818_00000950
    b lbl_fn_8055D818_0000095C
lbl_fn_8055D818_00000950:
    addi r4, r4, 0x1c
    bdnz lbl_fn_8055D818_00000938
lbl_fn_8055D818_00000958:
    li r6, 0x0
lbl_fn_8055D818_0000095C:
    lwz r3, 0x18(r6)
    cmpwi r3, 0x0
    beq lbl_fn_8055D818_00000970
    bl fn_804786F8
    b lbl_fn_8055D818_00000974
lbl_fn_8055D818_00000970:
    li r3, 0x0
lbl_fn_8055D818_00000974:
    lwz r5, 0x10(r30)
    lis r4, lbl_8075EC98@ha
    xoris r0, r28, 0x8000
    stw r0, 0xc(r1)
    mulli r5, r5, 0x65c
    lwz r6, lbl_8087F540
    lfd f3, lbl_8075EC98@l(r4)
    li r0, 0x0
    lfd f0, 0x8(r1)
    add r4, r6, r5
    stw r3, 0x4c8(r4)
    fsubs f1, f0, f3
    lfs f0, lbl_80887E78
    stfs f31, 0x4cc(r4)
    stfs f30, 0x4d4(r4)
    stfs f29, 0x4d8(r4)
    stfs f1, 0x4d0(r4)
    stw r0, 0x4e4(r4)
    lwz r0, 0x10(r29)
    lwz r3, 0x18(r29)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r3, r3, 0x8000
    lwz r0, 0x10(r30)
    lfd f1, 0x8(r1)
    stw r3, 0x14(r1)
    mulli r0, r0, 0x65c
    fsubs f1, f1, f3
    lfs f4, 0x198(r31)
    lfd f2, 0x10(r1)
    lwz r3, lbl_8087F540
    fsubs f2, f2, f3
    fsubs f1, f1, f4
    add r3, r3, r0
    fadds f1, f2, f1
    stfs f1, 0x4dc(r3)
    stfs f0, 0x4e0(r3)
    b lbl_fn_8055D818_00000AC4
lbl_fn_8055D818_00000A0C:
    mr r3, r29
    bl fn_805381A4
    mr r30, r3
    mr r3, r29
    bl fn_805381CC
    lwz r4, 0x1c(r29)
    lis r5, lbl_8075EC98@ha
    lwz r0, 0x14(r29)
    lfs f3, 0x198(r3)
    subf r4, r4, r0
    lwz r0, 0x10(r30)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lwz r6, 0x18(r29)
    mulli r0, r0, 0x65c
    lfd f2, lbl_8075EC98@l(r5)
    lfd f0, 0x8(r1)
    xoris r4, r6, 0x8000
    stw r4, 0x14(r1)
    fsubs f1, f0, f2
    lwz r3, lbl_8087F540
    lfd f0, 0x10(r1)
    add r3, r3, r0
    fsubs f2, f0, f2
    lfs f0, lbl_80887E78
    fsubs f1, f1, f3
    fadds f1, f2, f1
    fneg f1, f1
    stfs f1, 0x4dc(r3)
    stfs f0, 0x4e0(r3)
    b lbl_fn_8055D818_00000AC4
lbl_fn_8055D818_00000A88:
    mr r3, r29
    bl fn_805381A4
    lwz r3, 0x10(r3)
    li r0, 0x0
    lwz r4, lbl_8087F540
    mulli r3, r3, 0x65c
    lfs f1, lbl_80887E7C
    lfs f0, lbl_80887E78
    add r3, r4, r3
    stw r0, 0x4c8(r3)
    stfs f1, 0x4cc(r3)
    stfs f1, 0x4d4(r3)
    stfs f1, 0x4d8(r3)
    stfs f0, 0x4d0(r3)
    stw r0, 0x4e4(r3)
lbl_fn_8055D818_00000AC4:
    psq_l f31, 0x58(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8055DB04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r4
    ble lbl_fn_8055DB04_00000B90
    cmpwi r5, 0x0
    bne lbl_fn_8055DB04_00000BBC
    lwz r3, lbl_8087F540
    bl fn_80481818
    mr r3, r31
    bl fn_805381A4
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8055DB04_00000B4C
    lwz r4, 0x2c(r31)
    b lbl_fn_8055DB04_00000B50
lbl_fn_8055DB04_00000B4C:
    li r4, 0x0
lbl_fn_8055DB04_00000B50:
    cmpwi r0, 0x1
    lfs f1, 0x4(r4)
    ble lbl_fn_8055DB04_00000B68
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_8055DB04_00000B6C
lbl_fn_8055DB04_00000B68:
    li r4, 0x0
lbl_fn_8055DB04_00000B6C:
    lwz r0, 0x10(r3)
    lfs f2, 0x4(r4)
    li r4, 0x1
    mulli r0, r0, 0x65c
    lwz r3, lbl_8087F540
    add r3, r3, r0
    addi r3, r3, 0xc8
    bl fn_80112974
    b lbl_fn_8055DB04_00000BBC
lbl_fn_8055DB04_00000B90:
    mr r3, r31
    bl fn_805381A4
    lwz r0, 0x10(r3)
    li r4, 0x0
    lfs f1, lbl_80887E7C
    mulli r0, r0, 0x65c
    lwz r3, lbl_8087F540
    fmr f2, f1
    add r3, r3, r0
    addi r3, r3, 0xc8
    bl fn_80112974
lbl_fn_8055DB04_00000BBC:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055DBD8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055DBE0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055DBE8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055DBF0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055DBF8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_23
    subi r0, r5, 0x3
    mr r26, r4
    cmplwi r0, 0x1
    ble lbl_fn_8055DBF8_0000109C
    cmpwi r5, 0x0
    beq lbl_fn_8055DBF8_00000C34
    cmpwi r5, 0x6
    beq lbl_fn_8055DBF8_000011B8
    b lbl_fn_8055DBF8_00001230
lbl_fn_8055DBF8_00000C34:
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x30(r26)
    mr r28, r3
    cmpwi r0, 0x0
    ble lbl_fn_8055DBF8_00000C54
    lwz r3, 0x2c(r26)
    b lbl_fn_8055DBF8_00000C58
lbl_fn_8055DBF8_00000C54:
    li r3, 0x0
lbl_fn_8055DBF8_00000C58:
    cmpwi r0, 0x1
    lwz r31, 0x4(r3)
    ble lbl_fn_8055DBF8_00000C70
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x8
    b lbl_fn_8055DBF8_00000C74
lbl_fn_8055DBF8_00000C70:
    li r3, 0x0
lbl_fn_8055DBF8_00000C74:
    cmpwi r0, 0x2
    lwz r25, 0x4(r3)
    ble lbl_fn_8055DBF8_00000C8C
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x10
    b lbl_fn_8055DBF8_00000C90
lbl_fn_8055DBF8_00000C8C:
    li r3, 0x0
lbl_fn_8055DBF8_00000C90:
    cmpwi r0, 0x3
    lwz r27, 0x4(r3)
    ble lbl_fn_8055DBF8_00000CA8
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x18
    b lbl_fn_8055DBF8_00000CAC
lbl_fn_8055DBF8_00000CA8:
    li r3, 0x0
lbl_fn_8055DBF8_00000CAC:
    lfs f0, 0x4(r3)
    stfs f0, 0x64(r1)
    lwz r0, 0x30(r26)
    cmpwi r0, 0x4
    ble lbl_fn_8055DBF8_00000CCC
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x20
    b lbl_fn_8055DBF8_00000CD0
lbl_fn_8055DBF8_00000CCC:
    li r3, 0x0
lbl_fn_8055DBF8_00000CD0:
    lfs f0, 0x4(r3)
    stfs f0, 0x68(r1)
    lwz r0, 0x30(r26)
    cmpwi r0, 0x5
    ble lbl_fn_8055DBF8_00000CF0
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x28
    b lbl_fn_8055DBF8_00000CF4
lbl_fn_8055DBF8_00000CF0:
    li r3, 0x0
lbl_fn_8055DBF8_00000CF4:
    lfs f0, 0x4(r3)
    stfs f0, 0x6c(r1)
    lwz r4, 0x30(r26)
    cmpwi r4, 0x6
    ble lbl_fn_8055DBF8_00000D14
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x30
    b lbl_fn_8055DBF8_00000D18
lbl_fn_8055DBF8_00000D14:
    li r3, 0x0
lbl_fn_8055DBF8_00000D18:
    cmpwi r4, 0x7
    lfs f31, 0x4(r3)
    ble lbl_fn_8055DBF8_00000D30
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x38
    b lbl_fn_8055DBF8_00000D34
lbl_fn_8055DBF8_00000D30:
    li r3, 0x0
lbl_fn_8055DBF8_00000D34:
    cmpwi r4, 0x8
    lwz r30, 0x4(r3)
    ble lbl_fn_8055DBF8_00000D4C
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x40
    b lbl_fn_8055DBF8_00000D50
lbl_fn_8055DBF8_00000D4C:
    li r3, 0x0
lbl_fn_8055DBF8_00000D50:
    lfs f3, 0x4(r3)
    cmpwi r4, 0x9
    lfs f0, lbl_80887EB0
    fmuls f0, f0, f3
    stfs f0, 0x58(r1)
    ble lbl_fn_8055DBF8_00000D74
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x48
    b lbl_fn_8055DBF8_00000D78
lbl_fn_8055DBF8_00000D74:
    li r3, 0x0
lbl_fn_8055DBF8_00000D78:
    lfs f3, 0x4(r3)
    cmpwi r4, 0xa
    lfs f0, lbl_80887EB0
    fmuls f0, f0, f3
    stfs f0, 0x5c(r1)
    ble lbl_fn_8055DBF8_00000D9C
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x50
    b lbl_fn_8055DBF8_00000DA0
lbl_fn_8055DBF8_00000D9C:
    li r3, 0x0
lbl_fn_8055DBF8_00000DA0:
    lfs f3, 0x4(r3)
    cmpwi r4, 0xc
    lfs f0, lbl_80887EB0
    fmuls f0, f0, f3
    stfs f0, 0x60(r1)
    ble lbl_fn_8055DBF8_00000DC4
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x60
    b lbl_fn_8055DBF8_00000DC8
lbl_fn_8055DBF8_00000DC4:
    li r3, 0x0
lbl_fn_8055DBF8_00000DC8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055DBF8_00000E24
    cmpwi r4, 0xd
    ble lbl_fn_8055DBF8_00000DE8
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x68
    b lbl_fn_8055DBF8_00000DEC
lbl_fn_8055DBF8_00000DE8:
    li r3, 0x0
lbl_fn_8055DBF8_00000DEC:
    cmpwi r4, 0xe
    lwz r0, 0x4(r3)
    ble lbl_fn_8055DBF8_00000E04
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x70
    b lbl_fn_8055DBF8_00000E08
lbl_fn_8055DBF8_00000E04:
    li r3, 0x0
lbl_fn_8055DBF8_00000E08:
    cmpwi r0, 0x0
    lwz r4, 0x4(r3)
    bne lbl_fn_8055DBF8_00001230
    mr r3, r28
    mr r5, r31
    mr r6, r26
    bl fn_805430A4
lbl_fn_8055DBF8_00000E24:
    lwz r0, 0xe8(r28)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055DBF8_00000E58
lbl_fn_8055DBF8_00000E38:
    lwz r0, 0xe4(r28)
    add r29, r0, r3
    lwz r0, 0x14(r29)
    cmpw r31, r0
    bne lbl_fn_8055DBF8_00000E50
    b lbl_fn_8055DBF8_00000E5C
lbl_fn_8055DBF8_00000E50:
    addi r3, r3, 0x20
    bdnz lbl_fn_8055DBF8_00000E38
lbl_fn_8055DBF8_00000E58:
    li r29, 0x0
lbl_fn_8055DBF8_00000E5C:
    lwz r0, 0x168(r28)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055DBF8_00000E90
lbl_fn_8055DBF8_00000E70:
    lwz r0, 0x164(r28)
    add r24, r0, r3
    lwz r0, 0x14(r24)
    cmpw r25, r0
    bne lbl_fn_8055DBF8_00000E88
    b lbl_fn_8055DBF8_00000E94
lbl_fn_8055DBF8_00000E88:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_8055DBF8_00000E70
lbl_fn_8055DBF8_00000E90:
    li r24, 0x0
lbl_fn_8055DBF8_00000E94:
    lwz r0, 0x20(r24)
    cmpwi r0, 0x6
    bne lbl_fn_8055DBF8_00000EC8
    mr r4, r28
    addi r3, r1, 0x34
    addi r5, r1, 0x64
    bl fn_80541BDC
    addi r3, r1, 0x34
    lfs f2, 0x3c(r1)
    addi r4, r1, 0x64
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x6c(r1)
lbl_fn_8055DBF8_00000EC8:
    mr r4, r24
    addi r3, r1, 0x28
    bl fn_80010374
    lis r4, lbl_807C7030@ha
    lfs f4, 0x30(r1)
    addi r4, r4, lbl_807C7030@l
    lfs f3, 0x6c(r1)
    addi r31, r1, 0x40
    psq_l f1, 0x0(r4), 0, 0
    fadds f7, f4, f3
    psq_st f1, 0x0(r31), 0, 0
    lfs f5, 0x2c(r1)
    mr r3, r24
    lfs f0, 0x68(r1)
    lfs f4, 0x28(r1)
    fadds f8, f5, f0
    lfs f3, 0x64(r1)
    lfs f2, 0x8(r4)
    fadds f9, f4, f3
    lfs f0, 0x60(r1)
    lfs f6, 0x40(r1)
    lfs f5, 0x58(r1)
    fadds f0, f2, f0
    lfs f4, 0x44(r1)
    lfs f3, 0x5c(r1)
    fadds f5, f6, f5
    stfs f9, 0x4c(r1)
    fadds f3, f4, f3
    stfs f8, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f5, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f0, 0x48(r1)
    bl fn_8001296C
    mr r23, r3
    mr r3, r24
    mr r4, r27
    bl fn_80012AC4
    lis r4, lbl_8075FAF8@ha
    mr r24, r3
    addi r3, r4, lbl_8075FAF8@l
    bl fn_800DC6B4
    lwz r3, lbl_8087F3C0
    li r0, 0x4
    stw r0, 0xb8(r3)
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x2
    bne lbl_fn_8055DBF8_00001030
    lwz r25, 0x18(r29)
    mr r3, r28
    mr r4, r26
    bl fn_80232B7C
    cmpwi r24, 0x0
    beq lbl_fn_8055DBF8_00000FEC
    neg r0, r30
    li r3, -0x1
    or r4, r0, r30
    fmr f1, f31
    srwi r4, r4, 31
    stw r4, 0x8(r1)
    li r0, 0x1
    mr r7, r24
    stw r3, 0xc(r1)
    mr r4, r25
    mr r9, r31
    stw r0, 0x10(r1)
    addi r8, r1, 0x64
    li r5, -0x1
    li r6, 0x5
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_8055DBF8_0000108C
lbl_fn_8055DBF8_00000FEC:
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    fmr f1, f31
    stw r3, 0xc(r1)
    li r0, 0x1
    mr r4, r25
    mr r9, r31
    stw r0, 0x10(r1)
    addi r8, r1, 0x4c
    li r5, -0x1
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_8055DBF8_0000108C
lbl_fn_8055DBF8_00001030:
    lwz r25, 0x18(r29)
    mr r3, r28
    mr r4, r26
    bl fn_80232B7C
    lfs f0, lbl_80887EB4
    li r3, -0x1
    stfs f0, 0x18(r1)
    li r0, 0x1
    fmr f1, f31
    mr r4, r25
    stfs f0, 0x1c(r1)
    mr r5, r23
    mr r8, r31
    addi r7, r1, 0x64
    stfs f0, 0x20(r1)
    addi r9, r1, 0x18
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8055DBF8_0000108C:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_8055DBF8_00001230
lbl_fn_8055DBF8_0000109C:
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x30(r26)
    mr r27, r3
    mr r3, r26
    cmpwi r0, 0xc
    ble lbl_fn_8055DBF8_000010C4
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x60
    b lbl_fn_8055DBF8_000010C8
lbl_fn_8055DBF8_000010C4:
    li r4, 0x0
lbl_fn_8055DBF8_000010C8:
    cmpwi r0, 0xd
    lwz r25, 0x4(r4)
    ble lbl_fn_8055DBF8_000010E0
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x68
    b lbl_fn_8055DBF8_000010E4
lbl_fn_8055DBF8_000010E0:
    li r4, 0x0
lbl_fn_8055DBF8_000010E4:
    cmpwi r25, 0x0
    lwz r28, 0x4(r4)
    beq lbl_fn_8055DBF8_0000113C
    cmpwi r0, 0xe
    ble lbl_fn_8055DBF8_00001104
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x70
    b lbl_fn_8055DBF8_00001108
lbl_fn_8055DBF8_00001104:
    li r3, 0x0
lbl_fn_8055DBF8_00001108:
    cmpwi r28, 0x0
    lwz r4, 0x4(r3)
    beq lbl_fn_8055DBF8_00001230
    cmpwi r0, 0x0
    mr r3, r27
    ble lbl_fn_8055DBF8_00001128
    lwz r5, 0x2c(r26)
    b lbl_fn_8055DBF8_0000112C
lbl_fn_8055DBF8_00001128:
    li r5, 0x0
lbl_fn_8055DBF8_0000112C:
    lwz r5, 0x4(r5)
    bl fn_805430C0
    cmpwi r3, -0x1
    beq lbl_fn_8055DBF8_00001230
lbl_fn_8055DBF8_0000113C:
    lwz r4, 0x10(r26)
    lwz r0, 0x14(r26)
    subf. r0, r4, r0
    ble lbl_fn_8055DBF8_00001154
    cmpwi r25, 0x0
    beq lbl_fn_8055DBF8_00001164
lbl_fn_8055DBF8_00001154:
    cmpwi r25, 0x0
    beq lbl_fn_8055DBF8_00001230
    cmpwi r28, 0x1
    bne lbl_fn_8055DBF8_00001230
lbl_fn_8055DBF8_00001164:
    lwz r0, 0x30(r26)
    cmpwi r0, 0xb
    ble lbl_fn_8055DBF8_0000117C
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x58
    b lbl_fn_8055DBF8_00001180
lbl_fn_8055DBF8_0000117C:
    li r4, 0x0
lbl_fn_8055DBF8_00001180:
    lwz r0, 0x4(r4)
    li r7, 0x4
    lwz r6, lbl_8087F3C0
    mr r5, r3
    cntlzw r0, r0
    mr r4, r27
    stw r7, 0xb8(r6)
    srwi r6, r0, 5
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_8055DBF8_00001230
lbl_fn_8055DBF8_000011B8:
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x30(r26)
    cmpwi r0, 0x1
    ble lbl_fn_8055DBF8_000011D8
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x8
    b lbl_fn_8055DBF8_000011DC
lbl_fn_8055DBF8_000011D8:
    li r4, 0x0
lbl_fn_8055DBF8_000011DC:
    lwz r0, 0x168(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055DBF8_00001214
lbl_fn_8055DBF8_000011F4:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_8055DBF8_0000120C
    b lbl_fn_8055DBF8_00001218
lbl_fn_8055DBF8_0000120C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055DBF8_000011F4
lbl_fn_8055DBF8_00001214:
    li r6, 0x0
lbl_fn_8055DBF8_00001218:
    lwz r0, 0x20(r6)
    cmpwi r0, 0x6
    bne lbl_fn_8055DBF8_00001230
    mr r3, r26
    li r4, 0x3
    bl fn_80538DC8
lbl_fn_8055DBF8_00001230:
    psq_l f31, 0xa8(r1), 0, 0
    li r3, 0x0
    lfd f31, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_23
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8055E258(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r4
    mr r3, r31
    bl fn_805381A4
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8055E258_00001294
    lwz r4, 0x2c(r31)
    b lbl_fn_8055E258_00001298
lbl_fn_8055E258_00001294:
    li r4, 0x0
lbl_fn_8055E258_00001298:
    lwz r0, 0xd8(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055E258_000012D0
lbl_fn_8055E258_000012B0:
    lwz r0, 0xd4(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_8055E258_000012C8
    b lbl_fn_8055E258_000012D4
lbl_fn_8055E258_000012C8:
    addi r4, r4, 0x20
    bdnz lbl_fn_8055E258_000012B0
lbl_fn_8055E258_000012D0:
    li r5, 0x0
lbl_fn_8055E258_000012D4:
    lwz r0, 0x1c(r5)
    cmpwi r0, 0x1
    bne lbl_fn_8055E258_00001330
    lwz r3, lbl_8087EF70
    lwz r31, 0x18(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8055E258_00001330
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8075FAF8@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8075FAF8@l
    addi r31, r31, 0x58
    addi r3, r4, 0x9
    beq lbl_fn_8055E258_00001318
    lfs f31, lbl_80887EB4
    b lbl_fn_8055E258_0000131C
lbl_fn_8055E258_00001318:
    lfs f31, lbl_80887EB8
lbl_fn_8055E258_0000131C:
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r31
    bl fn_801FECE0
lbl_fn_8055E258_00001330:
    psq_l f31, 0x18(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8055E354(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r4
    ble lbl_fn_8055E354_00001474
    cmpwi r5, 0x0
    bne lbl_fn_8055E354_00001504
    mr r3, r31
    bl fn_805381A4
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8055E354_0000139C
    lwz r4, 0x2c(r31)
    b lbl_fn_8055E354_000013A0
lbl_fn_8055E354_0000139C:
    li r4, 0x0
lbl_fn_8055E354_000013A0:
    cmpwi r0, 0x1
    lwz r5, 0x4(r4)
    ble lbl_fn_8055E354_000013B8
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_8055E354_000013BC
lbl_fn_8055E354_000013B8:
    li r4, 0x0
lbl_fn_8055E354_000013BC:
    cmpwi r0, 0x2
    lfs f1, 0x4(r4)
    ble lbl_fn_8055E354_000013D4
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x10
    b lbl_fn_8055E354_000013D8
lbl_fn_8055E354_000013D4:
    li r4, 0x0
lbl_fn_8055E354_000013D8:
    lwz r0, 0xd8(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055E354_00001410
lbl_fn_8055E354_000013F0:
    lwz r0, 0xd4(r3)
    add r7, r0, r4
    lwz r0, 0x14(r7)
    cmpw r5, r0
    bne lbl_fn_8055E354_00001408
    b lbl_fn_8055E354_00001414
lbl_fn_8055E354_00001408:
    addi r4, r4, 0x20
    bdnz lbl_fn_8055E354_000013F0
lbl_fn_8055E354_00001410:
    li r7, 0x0
lbl_fn_8055E354_00001414:
    lwz r0, 0x1c(r7)
    cmpwi r0, 0x1
    bne lbl_fn_8055E354_00001504
    lwz r3, 0x18(r7)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8055E354_00001440
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8055E354_00001440:
    lfs f0, lbl_80887EB8
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8055E354_00001458
    stfs f0, 0x100(r3)
    b lbl_fn_8055E354_00001460
lbl_fn_8055E354_00001458:
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
lbl_fn_8055E354_00001460:
    stfs f1, 0x104(r3)
    lwz r0, 0xfc(r3)
    rlwimi r0, r6, 28, 3, 3
    stw r0, 0xfc(r3)
    b lbl_fn_8055E354_00001504
lbl_fn_8055E354_00001474:
    mr r3, r31
    bl fn_805381A4
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8055E354_00001498
    lwz r4, 0x2c(r31)
    b lbl_fn_8055E354_0000149C
lbl_fn_8055E354_00001498:
    li r4, 0x0
lbl_fn_8055E354_0000149C:
    lwz r0, 0xd8(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055E354_000014D4
lbl_fn_8055E354_000014B4:
    lwz r0, 0xd4(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_8055E354_000014CC
    b lbl_fn_8055E354_000014D8
lbl_fn_8055E354_000014CC:
    addi r4, r4, 0x20
    bdnz lbl_fn_8055E354_000014B4
lbl_fn_8055E354_000014D4:
    li r6, 0x0
lbl_fn_8055E354_000014D8:
    lwz r0, 0x1c(r6)
    cmpwi r0, 0x1
    bne lbl_fn_8055E354_00001504
    lwz r3, 0x18(r6)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8055E354_00001504
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8055E354_00001504:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055E520(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    ble lbl_fn_8055E520_000015BC
    cmpwi r5, 0x0
    beq lbl_fn_8055E520_0000155C
    cmpwi r5, 0x5
    beq lbl_fn_8055E520_00001568
    cmpwi r5, 0x6
    beq lbl_fn_8055E520_00001668
    b lbl_fn_8055E520_00001704
lbl_fn_8055E520_0000155C:
    li r0, 0x0
    stw r0, 0x38(r4)
    b lbl_fn_8055E520_00001704
lbl_fn_8055E520_00001568:
    mr r3, r31
    bl fn_805381CC
    lwz r5, 0x30(r31)
    cmpwi r5, 0x0
    ble lbl_fn_8055E520_00001584
    lwz r4, 0x2c(r31)
    b lbl_fn_8055E520_00001588
lbl_fn_8055E520_00001584:
    li r4, 0x0
lbl_fn_8055E520_00001588:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8055E520_000015BC
    cmpwi r5, 0x1
    ble lbl_fn_8055E520_000015A8
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_8055E520_000015AC
lbl_fn_8055E520_000015A8:
    li r4, 0x0
lbl_fn_8055E520_000015AC:
    lwz r4, 0x4(r4)
    bl fn_80541370
    li r3, 0x1
    b lbl_fn_8055E520_00001708
lbl_fn_8055E520_000015BC:
    lwz r6, 0x30(r31)
    cmpwi r6, 0x0
    ble lbl_fn_8055E520_000015D0
    lwz r3, 0x2c(r31)
    b lbl_fn_8055E520_000015D4
lbl_fn_8055E520_000015D0:
    li r3, 0x0
lbl_fn_8055E520_000015D4:
    lwz r5, 0x4(r3)
    subi r0, r5, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_8055E520_00001648
    cmpwi r6, 0x6
    lwz r4, 0x38(r31)
    ble lbl_fn_8055E520_000015FC
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_8055E520_00001600
lbl_fn_8055E520_000015FC:
    li r3, 0x0
lbl_fn_8055E520_00001600:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055E520_00001648
    extrwi. r0, r4, 1, 30
    bne lbl_fn_8055E520_00001648
    cmpwi r6, 0x5
    ble lbl_fn_8055E520_00001628
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8055E520_0000162C
lbl_fn_8055E520_00001628:
    li r3, 0x0
lbl_fn_8055E520_0000162C:
    lwz r30, 0x4(r3)
    mr r3, r31
    bl fn_805381CC
    mr r4, r30
    bl fn_80541370
    li r3, 0x1
    b lbl_fn_8055E520_00001708
lbl_fn_8055E520_00001648:
    cmpwi r5, 0x1
    bne lbl_fn_8055E520_00001704
    lwz r3, lbl_8087F540
    bl fn_804817D4
    lwz r3, lbl_8087F540
    li r0, 0x1
    stw r0, 0x1eb0(r3)
    b lbl_fn_8055E520_00001704
lbl_fn_8055E520_00001668:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_8055E520_0000167C
    lwz r3, 0x2c(r4)
    b lbl_fn_8055E520_00001680
lbl_fn_8055E520_0000167C:
    li r3, 0x0
lbl_fn_8055E520_00001680:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8055E520_00001704
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x2
    ble lbl_fn_8055E520_000016AC
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x10
    b lbl_fn_8055E520_000016B0
lbl_fn_8055E520_000016AC:
    li r4, 0x0
lbl_fn_8055E520_000016B0:
    lwz r0, 0x168(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055E520_000016E8
lbl_fn_8055E520_000016C8:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_8055E520_000016E0
    b lbl_fn_8055E520_000016EC
lbl_fn_8055E520_000016E0:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055E520_000016C8
lbl_fn_8055E520_000016E8:
    li r6, 0x0
lbl_fn_8055E520_000016EC:
    lwz r0, 0x20(r6)
    cmpwi r0, 0x6
    bne lbl_fn_8055E520_00001704
    mr r3, r31
    li r4, 0x4
    bl fn_80538DC8
lbl_fn_8055E520_00001704:
    li r3, 0x0
lbl_fn_8055E520_00001708:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055E724(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_26
    mr r27, r4
    mr r3, r27
    bl fn_805381A4
    mr r3, r27
    bl fn_805381CC
    lwz r5, 0x30(r27)
    mr r30, r3
    cmpwi r5, 0x0
    ble lbl_fn_8055E724_00001768
    lwz r4, 0x2c(r27)
    b lbl_fn_8055E724_0000176C
lbl_fn_8055E724_00001768:
    li r4, 0x0
lbl_fn_8055E724_0000176C:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8055E724_00001794
    cmpwi r0, 0x1
    beq lbl_fn_8055E724_000017C0
    cmpwi r0, 0x2
    beq lbl_fn_8055E724_00001B90
    cmpwi r0, 0x3
    beq lbl_fn_8055E724_00001E54
    b lbl_fn_8055E724_00002018
lbl_fn_8055E724_00001794:
    cmpwi r5, 0x1
    mr r3, r30
    ble lbl_fn_8055E724_000017AC
    lwz r4, 0x2c(r27)
    addi r4, r4, 0x8
    b lbl_fn_8055E724_000017B0
lbl_fn_8055E724_000017AC:
    li r4, 0x0
lbl_fn_8055E724_000017B0:
    lwz r4, 0x4(r4)
    bl fn_80541370
    li r3, 0x1
    b lbl_fn_8055E724_0000201C
lbl_fn_8055E724_000017C0:
    lwz r0, 0x98(r3)
    mr r4, r27
    li r5, 0x2
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x98(r3)
    addi r3, r1, 0x44
    bl fn_805384D0
    addi r3, r1, 0x44
    lfs f2, 0x4c(r1)
    addi r4, r1, 0x90
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x98(r1)
    lwz r0, 0x30(r27)
    cmpwi r0, 0x7
    ble lbl_fn_8055E724_0000180C
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x38
    b lbl_fn_8055E724_00001810
lbl_fn_8055E724_0000180C:
    li r3, 0x0
lbl_fn_8055E724_00001810:
    lfs f0, 0x4(r3)
    addi r3, r1, 0x80
    stfs f0, 0x9c(r1)
    addi r5, r1, 0x90
    lwz r4, lbl_8087EFB4
    bl fn_800BFAC8
    lfs f5, lbl_80887EB8
    addi r3, r1, 0x74
    lfs f6, 0x9c(r1)
    addi r5, r1, 0x38
    lfs f4, 0x98(r1)
    lfs f3, 0x94(r1)
    lfs f0, 0x90(r1)
    fadds f4, f4, f5
    fadds f3, f3, f6
    stfs f5, 0x2c(r1)
    fadds f0, f0, f5
    lwz r4, lbl_8087EFB4
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f4, 0x40(r1)
    bl fn_800BFAC8
    lfs f0, 0x9c(r1)
    addi r3, r1, 0x68
    lfs f5, lbl_80887EB8
    addi r5, r1, 0x20
    fneg f6, f0
    lfs f3, 0x98(r1)
    lfs f0, 0x90(r1)
    fadds f7, f3, f5
    lfs f4, 0x94(r1)
    frsp f3, f6
    fadds f8, f0, f5
    stfs f5, 0x14(r1)
    lwz r4, lbl_8087EFB4
    fadds f0, f4, f3
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f8, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f7, 0x28(r1)
    bl fn_800BFAC8
    lfs f5, 0x84(r1)
    addi r3, r1, 0x5c
    lfs f0, 0x78(r1)
    lfs f4, 0x80(r1)
    fsubs f5, f5, f0
    lfs f3, 0x74(r1)
    lfs f0, lbl_80887EB8
    fsubs f3, f4, f3
    stfs f5, 0x60(r1)
    stfs f3, 0x5c(r1)
    stfs f0, 0x64(r1)
    bl fn_805F9940
    lfs f4, 0x88(r1)
    fmr f31, f1
    lfs f3, 0x70(r1)
    addi r3, r1, 0x50
    lfs f6, 0x84(r1)
    fsubs f7, f4, f3
    lfs f5, 0x6c(r1)
    lfs f4, 0x80(r1)
    lfs f3, 0x68(r1)
    fsubs f5, f6, f5
    lfs f0, lbl_80887EB8
    fsubs f3, f4, f3
    stfs f7, 0x58(r1)
    stfs f5, 0x54(r1)
    stfs f3, 0x50(r1)
    stfs f0, 0x64(r1)
    bl fn_805F9940
    fcmpo cr0, f31, f1
    ble lbl_fn_8055E724_00001948
    addi r3, r1, 0x50
    bl fn_805F9940
    fmr f31, f1
lbl_fn_8055E724_00001948:
    lfs f3, lbl_80887EBC
    li r0, 0x0
    lfs f0, 0x9c(r1)
    li r4, 0x1
    lfs f4, 0x9c(r1)
    fmuls f3, f3, f0
    lfs f0, lbl_80887EC0
    lwz r3, lbl_8087F540
    fdivs f3, f3, f31
    fsubs f3, f3, f4
    fmadds f0, f0, f3, f4
    stfs f0, 0x9c(r1)
    stw r0, 0x1ea8(r3)
    lwz r3, lbl_8087F540
    bl fn_80481800
    lwz r4, lbl_8087F540
    addi r28, r1, 0x90
    lfs f2, 0x98(r1)
    li r0, 0x1
    addi r5, r4, 0x1e94
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r29, r1, 0xa0
    addi r3, r1, 0xac
    stfs f2, 0x1e9c(r4)
    mr r4, r3
    lfs f0, 0x9c(r1)
    stfs f0, 0xc(r5)
    lwz r5, lbl_8087EFB4
    addis r5, r5, 0x5
    stw r0, 0x4964(r5)
    lwz r6, lbl_8087F540
    lwz r0, 0x1a38(r6)
    mulli r0, r0, 0x65c
    add r5, r6, r0
    lfs f2, 0xd8(r5)
    psq_l f1, 0xd0(r5), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f0, f2
    stfs f2, 0xa8(r1)
    lfs f5, 0xa0(r1)
    lwz r0, 0x1a38(r6)
    lfs f3, 0xa4(r1)
    mulli r0, r0, 0x65c
    add r5, r6, r0
    lfs f2, 0xe4(r5)
    psq_l f1, 0xdc(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f0, f2, f0
    lfs f6, 0xac(r1)
    lfs f4, 0xb0(r1)
    fsubs f5, f6, f5
    stfs f0, 0xb4(r1)
    fsubs f0, f4, f3
    stfs f5, 0xac(r1)
    stfs f0, 0xb0(r1)
    bl fn_805F98D0
    lfs f4, 0xac(r1)
    mr r3, r29
    lfs f5, lbl_80887EC4
    mr r4, r28
    lfs f3, 0xb0(r1)
    fmuls f7, f4, f5
    lfs f4, 0xa0(r1)
    fmuls f6, f3, f5
    lfs f0, 0xb4(r1)
    lfs f3, 0xa4(r1)
    fmuls f5, f0, f5
    lfs f0, 0xa8(r1)
    fadds f4, f7, f4
    fadds f3, f6, f3
    fadds f0, f5, f0
    stfs f4, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    bne lbl_fn_8055E724_00001A90
    lwz r3, lbl_8087F540
    lwz r0, 0x2448(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055E724_00002018
lbl_fn_8055E724_00001A90:
    lwz r3, lbl_8087F540
    li r0, 0x1
    lis r28, lbl_80794F50@ha
    lfs f31, lbl_80887EC8
    stw r0, 0x1ea8(r3)
    addi r28, r28, lbl_80794F50@l
    li r29, 0x1
    li r31, 0x0
lbl_fn_8055E724_00001AB0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    lwz r5, 0x0(r28)
    li r6, 0x0
    bl fn_800A56A8
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f31
    blt lbl_fn_8055E724_00001ADC
    li r29, 0x0
    b lbl_fn_8055E724_00001AEC
lbl_fn_8055E724_00001ADC:
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    cmplwi r31, 0x2
    blt lbl_fn_8055E724_00001AB0
lbl_fn_8055E724_00001AEC:
    cmpwi r29, 0x0
    lwz r3, 0x38(r27)
    beq lbl_fn_8055E724_00001B84
    addi r0, r3, 0x1
    cmplwi r0, 0x3
    ble lbl_fn_8055E724_00001B88
    lwz r0, 0x30(r27)
    cmpwi r0, 0x1
    ble lbl_fn_8055E724_00001B1C
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x8
    b lbl_fn_8055E724_00001B20
lbl_fn_8055E724_00001B1C:
    li r3, 0x0
lbl_fn_8055E724_00001B20:
    lwz r4, 0x4(r3)
    mr r3, r30
    bl fn_80541370
    lwz r3, lbl_8087F540
    bl fn_804817D4
    lwz r3, lbl_8087F540
    li r4, 0x0
    bl fn_80481800
    addi r3, r1, 0x90
    lfs f2, 0x98(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x8
    lwz r4, lbl_8087F540
    li r0, 0x1
    psq_st f1, 0x0(r5), 0, 0
    li r3, 0x1
    psq_st f1, 0x4c(r4), 0, 0
    stfs f2, 0x54(r4)
    lwz r4, lbl_8087F540
    lfs f0, 0x9c(r1)
    stfs f0, 0x58(r4)
    lwz r4, lbl_8087F540
    stfs f2, 0x10(r1)
    stw r0, 0x23b4(r4)
    b lbl_fn_8055E724_0000201C
lbl_fn_8055E724_00001B84:
    li r0, 0x0
lbl_fn_8055E724_00001B88:
    stw r0, 0x38(r27)
    b lbl_fn_8055E724_00002018
lbl_fn_8055E724_00001B90:
    lwz r0, 0x98(r3)
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x98(r3)
    lwz r4, 0x30(r27)
    cmpwi r4, 0x1
    ble lbl_fn_8055E724_00001BB4
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x8
    b lbl_fn_8055E724_00001BB8
lbl_fn_8055E724_00001BB4:
    li r3, 0x0
lbl_fn_8055E724_00001BB8:
    cmpwi r4, 0x2
    lwz r5, 0x4(r3)
    ble lbl_fn_8055E724_00001BD0
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x10
    b lbl_fn_8055E724_00001BD4
lbl_fn_8055E724_00001BD0:
    li r3, 0x0
lbl_fn_8055E724_00001BD4:
    cmpwi r4, 0x3
    lwz r0, 0x4(r3)
    ble lbl_fn_8055E724_00001BEC
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x18
    b lbl_fn_8055E724_00001BF0
lbl_fn_8055E724_00001BEC:
    li r3, 0x0
lbl_fn_8055E724_00001BF0:
    cmpwi r4, 0x4
    lwz r29, 0x4(r3)
    ble lbl_fn_8055E724_00001C08
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x20
    b lbl_fn_8055E724_00001C0C
lbl_fn_8055E724_00001C08:
    li r3, 0x0
lbl_fn_8055E724_00001C0C:
    cmpwi r29, 0x0
    lwz r28, 0x4(r3)
    bne lbl_fn_8055E724_00001C1C
    li r29, 0x1
lbl_fn_8055E724_00001C1C:
    cmpwi r0, 0x0
    lwz r31, 0x38(r27)
    bne lbl_fn_8055E724_00001C5C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8055E724_00001C4C
    lwz r3, lbl_8087F540
    lwz r0, 0x2448(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055E724_00001DB8
lbl_fn_8055E724_00001C4C:
    srwi r3, r31, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 16, 0, 15
    b lbl_fn_8055E724_00001DB8
lbl_fn_8055E724_00001C5C:
    cmpwi r0, 0x1
    bne lbl_fn_8055E724_00001CC0
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8055E724_00001C88
    lwz r3, lbl_8087F540
    lwz r0, 0x2448(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055E724_00001C98
lbl_fn_8055E724_00001C88:
    srwi r3, r31, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 16, 0, 15
    b lbl_fn_8055E724_00001CA4
lbl_fn_8055E724_00001C98:
    extrwi r3, r31, 14, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 2, 16, 29
lbl_fn_8055E724_00001CA4:
    extrwi r0, r31, 14, 16
    cmplw r0, r28
    blt lbl_fn_8055E724_00001DB8
    rlwinm r31, r31, 0, 30, 15
    extrwi r0, r31, 14, 16
    rlwimi r31, r0, 16, 0, 15
    b lbl_fn_8055E724_00001DB8
lbl_fn_8055E724_00001CC0:
    cmpwi r0, 0x2
    bne lbl_fn_8055E724_00001CFC
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A5584
    cmpwi r3, 0x0
    bne lbl_fn_8055E724_00001CEC
    lwz r3, lbl_8087F540
    lwz r0, 0x2448(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055E724_00001DB8
lbl_fn_8055E724_00001CEC:
    srwi r3, r31, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 16, 0, 15
    b lbl_fn_8055E724_00001DB8
lbl_fn_8055E724_00001CFC:
    cmpwi r0, 0x3
    bne lbl_fn_8055E724_00001D60
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A5584
    cmpwi r3, 0x0
    bne lbl_fn_8055E724_00001D28
    lwz r3, lbl_8087F540
    lwz r0, 0x2448(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055E724_00001D38
lbl_fn_8055E724_00001D28:
    srwi r3, r31, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 16, 0, 15
    b lbl_fn_8055E724_00001D44
lbl_fn_8055E724_00001D38:
    extrwi r3, r31, 14, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 2, 16, 29
lbl_fn_8055E724_00001D44:
    extrwi r0, r31, 14, 16
    cmplw r0, r28
    blt lbl_fn_8055E724_00001DB8
    rlwinm r31, r31, 0, 30, 15
    extrwi r0, r31, 14, 16
    rlwimi r31, r0, 16, 0, 15
    b lbl_fn_8055E724_00001DB8
lbl_fn_8055E724_00001D60:
    cmpwi r0, 0x4
    bne lbl_fn_8055E724_00001DB8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A55D4
    cmpwi r3, 0x0
    bne lbl_fn_8055E724_00001D8C
    lwz r3, lbl_8087F540
    lwz r0, 0x2448(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055E724_00001D9C
lbl_fn_8055E724_00001D8C:
    extrwi r3, r31, 14, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 2, 16, 29
    b lbl_fn_8055E724_00001DA0
lbl_fn_8055E724_00001D9C:
    rlwinm r31, r31, 0, 30, 15
lbl_fn_8055E724_00001DA0:
    extrwi r0, r31, 14, 16
    cmplw r0, r28
    blt lbl_fn_8055E724_00001DB8
    srwi r3, r31, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 16, 0, 15
lbl_fn_8055E724_00001DB8:
    srwi r0, r31, 16
    cmplw r0, r29
    blt lbl_fn_8055E724_00001DF0
    lwz r0, 0x190(r30)
    cmpwi r0, 0x151e
    bne lbl_fn_8055E724_00001DEC
    lwz r3, lbl_8087F540
    lwz r3, 0x2400(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8055E724_00001DF0
    bl fn_80531E84
    cmpwi r3, 0x0
    beq lbl_fn_8055E724_00001DF0
lbl_fn_8055E724_00001DEC:
    ori r31, r31, 0x2
lbl_fn_8055E724_00001DF0:
    lwz r4, 0x30(r27)
    stw r31, 0x38(r27)
    cmpwi r4, 0x6
    ble lbl_fn_8055E724_00001E0C
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x30
    b lbl_fn_8055E724_00001E10
lbl_fn_8055E724_00001E0C:
    li r3, 0x0
lbl_fn_8055E724_00001E10:
    extrwi r0, r31, 1, 30
    lwz r3, 0x4(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8055E724_00002018
    cmpwi r3, 0x0
    bne lbl_fn_8055E724_00002018
    cmpwi r4, 0x5
    mr r3, r30
    ble lbl_fn_8055E724_00001E40
    lwz r4, 0x2c(r27)
    addi r4, r4, 0x28
    b lbl_fn_8055E724_00001E44
lbl_fn_8055E724_00001E40:
    li r4, 0x0
lbl_fn_8055E724_00001E44:
    lwz r4, 0x4(r4)
    bl fn_80541370
    li r3, 0x1
    b lbl_fn_8055E724_0000201C
lbl_fn_8055E724_00001E54:
    lwz r0, 0x98(r3)
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x98(r3)
    lwz r0, 0x30(r27)
    cmpwi r0, 0x1
    ble lbl_fn_8055E724_00001E78
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x8
    b lbl_fn_8055E724_00001E7C
lbl_fn_8055E724_00001E78:
    li r3, 0x0
lbl_fn_8055E724_00001E7C:
    cmpwi r0, 0x2
    lwz r5, 0x4(r3)
    ble lbl_fn_8055E724_00001E94
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x10
    b lbl_fn_8055E724_00001E98
lbl_fn_8055E724_00001E94:
    li r3, 0x0
lbl_fn_8055E724_00001E98:
    cmpwi r0, 0x3
    lwz r4, 0x4(r3)
    ble lbl_fn_8055E724_00001EB0
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x18
    b lbl_fn_8055E724_00001EB4
lbl_fn_8055E724_00001EB0:
    li r3, 0x0
lbl_fn_8055E724_00001EB4:
    cmpwi r0, 0x4
    lwz r28, 0x4(r3)
    ble lbl_fn_8055E724_00001ECC
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x20
    b lbl_fn_8055E724_00001ED0
lbl_fn_8055E724_00001ECC:
    li r3, 0x0
lbl_fn_8055E724_00001ED0:
    cmpwi r28, 0x0
    lwz r29, 0x4(r3)
    bne lbl_fn_8055E724_00001EE0
    li r28, 0x1
lbl_fn_8055E724_00001EE0:
    cmpwi r4, 0x0
    lwz r31, 0x38(r27)
    bne lbl_fn_8055E724_00001FA4
    lis r4, lbl_80794F58@ha
    slwi r0, r5, 2
    addi r4, r4, lbl_80794F58@l
    lwz r3, lbl_8087EF70
    lwzx r5, r4, r0
    li r26, 0x0
    li r4, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fabs f3, f1
    lfs f0, lbl_80887ECC
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_8055E724_00001F58
    lfs f0, lbl_80887EB8
    fcmpo cr0, f1, f0
    mfcr r3
    clrlwi r0, r31, 31
    srwi r3, r3, 31
    cntlzw r3, r3
    srwi r3, r3, 5
    cmpw r3, r0
    beq lbl_fn_8055E724_00001F58
    subi r0, r3, 0x1
    li r26, 0x1
    cntlzw r0, r0
    rlwimi r31, r0, 27, 31, 31
lbl_fn_8055E724_00001F58:
    cmpwi r26, 0x0
    bne lbl_fn_8055E724_00001F70
    lwz r3, lbl_8087F540
    lwz r0, 0x2448(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055E724_00001F80
lbl_fn_8055E724_00001F70:
    srwi r3, r31, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 16, 0, 15
    b lbl_fn_8055E724_00001F8C
lbl_fn_8055E724_00001F80:
    extrwi r3, r31, 14, 16
    addi r0, r3, 0x1
    rlwimi r31, r0, 2, 16, 29
lbl_fn_8055E724_00001F8C:
    extrwi r0, r31, 14, 16
    cmplw r0, r29
    blt lbl_fn_8055E724_00001FA4
    rlwinm r31, r31, 0, 30, 15
    extrwi r0, r31, 14, 16
    rlwimi r31, r0, 16, 0, 15
lbl_fn_8055E724_00001FA4:
    srwi r0, r31, 16
    cmplw r0, r28
    blt lbl_fn_8055E724_00001FB4
    ori r31, r31, 0x2
lbl_fn_8055E724_00001FB4:
    lwz r4, 0x30(r27)
    stw r31, 0x38(r27)
    cmpwi r4, 0x6
    ble lbl_fn_8055E724_00001FD0
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x30
    b lbl_fn_8055E724_00001FD4
lbl_fn_8055E724_00001FD0:
    li r3, 0x0
lbl_fn_8055E724_00001FD4:
    extrwi r0, r31, 1, 30
    lwz r3, 0x4(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8055E724_00002018
    cmpwi r3, 0x0
    bne lbl_fn_8055E724_00002018
    cmpwi r4, 0x5
    mr r3, r30
    ble lbl_fn_8055E724_00002004
    lwz r4, 0x2c(r27)
    addi r4, r4, 0x28
    b lbl_fn_8055E724_00002008
lbl_fn_8055E724_00002004:
    li r4, 0x0
lbl_fn_8055E724_00002008:
    lwz r4, 0x4(r4)
    bl fn_80541370
    li r3, 0x1
    b lbl_fn_8055E724_0000201C
lbl_fn_8055E724_00002018:
    li r3, 0x0
lbl_fn_8055E724_0000201C:
    addi r11, r1, 0xd0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    bl _restgpr_26
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}
