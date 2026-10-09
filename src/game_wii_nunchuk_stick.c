#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void fn_800112E0(void);
extern void fn_8001296C(void);
extern void fn_80013558(void);
extern void fn_80092814(void);
extern void fn_8009290C(void);
extern void fn_80093D98(void);
extern void fn_80093E90(void);
extern void fn_80094958(void);
extern void fn_80094B6C(void);
extern void fn_800DC6B4(void);
extern void fn_80112918(void);
extern void fn_801129B4(void);
extern void fn_80112F5C(void);
extern void fn_8011375C(void);
extern void fn_801139E4(void);
extern void fn_80113CD4(void);
extern void fn_801140A0(void);
extern void fn_804816F4(void);
extern void fn_804817D4(void);
extern void fn_80481818(void);
extern void fn_8048B3B8(void);
extern void fn_8048BD64(void);
extern void fn_8048C884(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_80538DC8(void);
extern void fn_80541BDC(void);
extern void fn_805F93C0(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_8075E858[];
extern u8 lbl_8075EC98[];
extern u8 lbl_8075F058[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C9220[];
extern u8 lbl_807C922C[];

/* Small data declarations */
extern u32 lbl_8087F540;
extern u32 lbl_8087F978;
extern u32 lbl_8087F97C;
extern u32 lbl_80887E30;
extern u32 lbl_80887E34;
extern u32 lbl_80887E50;
extern u32 lbl_80887E68;
extern u32 lbl_80887E70;
extern u32 lbl_80887E74;
extern u32 lbl_80887E78;
extern u32 lbl_80887E7C;
extern u32 lbl_80887E80;

/* Function declarations */
void fn_80559B30(void);
void fn_8055A3E4(void);
void fn_8055A3EC(void);
void fn_8055A3F4(void);
void fn_8055A3FC(void);
void fn_8055A404(void);
void fn_8055A444(void);
void fn_8055A4A0(void);

asm void fn_80559B30(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_24
    subi r0, r5, 0x3
    lis r3, 0x4330
    cmplwi r0, 0x1
    stw r3, 0xe8(r1)
    mr r25, r4
    stw r3, 0xf0(r1)
    ble lbl_fn_80559B30_000002D4
    cmpwi r5, 0x0
    bne lbl_fn_80559B30_00000898
    lwz r5, 0x10(r4)
    mr r3, r25
    lwz r0, 0x14(r4)
    lwz r30, 0x18(r4)
    subf r31, r5, r0
    bl fn_805381A4
    mr r24, r3
    mr r3, r25
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r24)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80559B30_00000094
lbl_fn_80559B30_00000074:
    lwz r0, 0x164(r3)
    add r28, r0, r4
    lwz r0, 0x14(r28)
    cmpw r5, r0
    bne lbl_fn_80559B30_0000008C
    b lbl_fn_80559B30_00000098
lbl_fn_80559B30_0000008C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80559B30_00000074
lbl_fn_80559B30_00000094:
    li r28, 0x0
lbl_fn_80559B30_00000098:
    mr r3, r28
    bl fn_8001296C
    lwz r0, 0x30(r25)
    mr r27, r3
    lwz r26, 0x16c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80559B30_000000BC
    lwz r4, 0x2c(r25)
    b lbl_fn_80559B30_000000C0
lbl_fn_80559B30_000000BC:
    li r4, 0x0
lbl_fn_80559B30_000000C0:
    lwz r4, 0x4(r4)
    bl fn_8009290C
    lwz r0, 0x18(r25)
    mr r24, r3
    cmpwi r0, 0x0
    ble lbl_fn_80559B30_00000104
    lwz r0, 0x30(r25)
    lwz r3, lbl_8087F540
    cmpwi r0, 0x8
    ble lbl_fn_80559B30_000000F4
    lwz r4, 0x2c(r25)
    addi r4, r4, 0x40
    b lbl_fn_80559B30_000000F8
lbl_fn_80559B30_000000F4:
    li r4, 0x0
lbl_fn_80559B30_000000F8:
    lwz r4, 0x4(r4)
    bl fn_8048B3B8
    stw r3, 0x140(r28)
lbl_fn_80559B30_00000104:
    lbz r0, 0x188(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80559B30_00000120
    mr r3, r28
    bl fn_80013558
    li r0, 0x0
    stb r0, 0x188(r28)
lbl_fn_80559B30_00000120:
    cmpwi r24, 0x0
    blt lbl_fn_80559B30_00000898
    slwi r0, r24, 2
    mr r3, r27
    add r29, r26, r0
    lwz r4, 0x50(r29)
    bl fn_80094B6C
    cmpwi r31, 0x0
    beq lbl_fn_80559B30_0000014C
    cmpwi r30, 0x0
    bne lbl_fn_80559B30_00000898
lbl_fn_80559B30_0000014C:
    lwz r0, 0x30(r25)
    cmpwi r0, 0x2
    ble lbl_fn_80559B30_00000164
    lwz r4, 0x2c(r25)
    addi r4, r4, 0x10
    b lbl_fn_80559B30_00000168
lbl_fn_80559B30_00000164:
    li r4, 0x0
lbl_fn_80559B30_00000168:
    lfs f0, 0x4(r4)
    stfs f0, 0xe4(r1)
    lwz r0, 0x30(r25)
    cmpwi r0, 0x3
    ble lbl_fn_80559B30_00000188
    lwz r4, 0x2c(r25)
    addi r4, r4, 0x18
    b lbl_fn_80559B30_0000018C
lbl_fn_80559B30_00000188:
    li r4, 0x0
lbl_fn_80559B30_0000018C:
    lfs f0, 0x4(r4)
    stfs f0, 0xd8(r1)
    lwz r0, 0x30(r25)
    cmpwi r0, 0x4
    ble lbl_fn_80559B30_000001AC
    lwz r4, 0x2c(r25)
    addi r4, r4, 0x20
    b lbl_fn_80559B30_000001B0
lbl_fn_80559B30_000001AC:
    li r4, 0x0
lbl_fn_80559B30_000001B0:
    lfs f0, 0x4(r4)
    stfs f0, 0xdc(r1)
    lwz r0, 0x30(r25)
    cmpwi r0, 0x5
    ble lbl_fn_80559B30_000001D0
    lwz r4, 0x2c(r25)
    addi r4, r4, 0x28
    b lbl_fn_80559B30_000001D4
lbl_fn_80559B30_000001D0:
    li r4, 0x0
lbl_fn_80559B30_000001D4:
    lfs f0, 0x4(r4)
    lis r4, lbl_8075E858@ha
    stfs f0, 0xe0(r1)
    addi r5, r1, 0xd8
    lfd f5, lbl_8075E858@l(r4)
    addi r6, r1, 0x98
    lwz r0, 0x1c(r3)
    addi r7, r1, 0x88
    stw r0, 0x1c(r1)
    lfs f4, lbl_80887E68
    lbz r4, 0x1c(r1)
    stw r4, 0xec(r1)
    lbz r0, 0x1d(r1)
    lfd f0, 0xe8(r1)
    stw r0, 0xf4(r1)
    fsubs f1, f0, f5
    lbz r4, 0x1e(r1)
    lfd f0, 0xf0(r1)
    lbz r0, 0x1f(r1)
    stw r4, 0xec(r1)
    fdivs f3, f1, f4
    lfd f1, 0xe8(r1)
    stw r0, 0xf4(r1)
    stfs f3, 0x88(r1)
    fsubs f2, f0, f5
    lfd f0, 0xf0(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x8c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x90(r1)
    fdivs f0, f0, f4
    stfs f0, 0x94(r1)
    lwz r0, 0x20(r3)
    mr r3, r27
    stw r0, 0x20(r1)
    lbz r4, 0x20(r1)
    stw r4, 0xec(r1)
    lbz r0, 0x21(r1)
    lfd f0, 0xe8(r1)
    stw r0, 0xf4(r1)
    fsubs f1, f0, f5
    lbz r4, 0x22(r1)
    lfd f0, 0xf0(r1)
    lbz r0, 0x23(r1)
    fsubs f2, f0, f5
    stw r0, 0xf4(r1)
    fdivs f3, f1, f4
    stw r4, 0xec(r1)
    lfd f0, 0xf0(r1)
    lfd f1, 0xe8(r1)
    stfs f3, 0x98(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x9c(r1)
    fdivs f1, f1, f4
    stfs f1, 0xa0(r1)
    fdivs f0, f0, f4
    stfs f0, 0xa4(r1)
    lwz r4, 0x50(r29)
    bl fn_80094958
    b lbl_fn_80559B30_00000898
lbl_fn_80559B30_000002D4:
    mr r3, r25
    bl fn_805381A4
    mr r24, r3
    mr r3, r25
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r24)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80559B30_00000320
lbl_fn_80559B30_00000300:
    lwz r0, 0x164(r3)
    add r27, r0, r4
    lwz r0, 0x14(r27)
    cmpw r5, r0
    bne lbl_fn_80559B30_00000318
    b lbl_fn_80559B30_00000324
lbl_fn_80559B30_00000318:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80559B30_00000300
lbl_fn_80559B30_00000320:
    li r27, 0x0
lbl_fn_80559B30_00000324:
    mr r3, r27
    bl fn_8001296C
    lwz r0, 0x30(r25)
    mr r26, r3
    lwz r24, 0x16c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80559B30_00000348
    lwz r4, 0x2c(r25)
    b lbl_fn_80559B30_0000034C
lbl_fn_80559B30_00000348:
    li r4, 0x0
lbl_fn_80559B30_0000034C:
    lwz r4, 0x4(r4)
    bl fn_8009290C
    slwi r0, r3, 2
    mr r29, r3
    add r30, r24, r0
    mr r3, r26
    lwz r4, 0x50(r30)
    bl fn_80094B6C
    cmpwi r29, 0x0
    mr r31, r3
    blt lbl_fn_80559B30_00000898
    lwz r0, 0x30(r25)
    li r5, 0x0
    cmpwi r0, 0x6
    ble lbl_fn_80559B30_00000394
    lwz r4, 0x2c(r25)
    addi r4, r4, 0x30
    b lbl_fn_80559B30_00000398
lbl_fn_80559B30_00000394:
    li r4, 0x0
lbl_fn_80559B30_00000398:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80559B30_000004E0
    lwz r5, 0x170(r27)
    slwi r0, r29, 4
    lis r4, lbl_8075E858@ha
    lfs f4, lbl_80887E68
    lfsx f0, r5, r0
    add r8, r5, r0
    stfs f0, 0xc8(r1)
    addi r5, r1, 0xc8
    lfd f5, lbl_8075E858@l(r4)
    addi r6, r1, 0x78
    lfs f0, 0x4(r8)
    addi r7, r1, 0x68
    stfs f0, 0xcc(r1)
    lfs f0, 0x8(r8)
    stfs f0, 0xd0(r1)
    lfs f0, 0xc(r8)
    stfs f0, 0xd4(r1)
    lwz r0, 0x1c(r3)
    stw r0, 0x14(r1)
    lbz r4, 0x14(r1)
    stw r4, 0xec(r1)
    lbz r0, 0x15(r1)
    lfd f0, 0xe8(r1)
    stw r0, 0xf4(r1)
    fsubs f1, f0, f5
    lbz r4, 0x16(r1)
    lfd f0, 0xf0(r1)
    lbz r0, 0x17(r1)
    stw r4, 0xec(r1)
    fdivs f3, f1, f4
    lfd f1, 0xe8(r1)
    stw r0, 0xf4(r1)
    stfs f3, 0x68(r1)
    fsubs f2, f0, f5
    lfd f0, 0xf0(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x6c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x70(r1)
    fdivs f0, f0, f4
    stfs f0, 0x74(r1)
    lwz r0, 0x20(r3)
    mr r3, r26
    stw r0, 0x18(r1)
    lbz r4, 0x18(r1)
    stw r4, 0xec(r1)
    lbz r0, 0x19(r1)
    lfd f0, 0xe8(r1)
    stw r0, 0xf4(r1)
    fsubs f1, f0, f5
    lbz r4, 0x1a(r1)
    lfd f0, 0xf0(r1)
    lbz r0, 0x1b(r1)
    fsubs f2, f0, f5
    stw r0, 0xf4(r1)
    fdivs f3, f1, f4
    stw r4, 0xec(r1)
    lfd f0, 0xf0(r1)
    lfd f1, 0xe8(r1)
    stfs f3, 0x78(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x7c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x80(r1)
    fdivs f0, f0, f4
    stfs f0, 0x84(r1)
    lwz r4, 0x50(r30)
    bl fn_80094958
    lwz r5, 0x17c(r27)
    slwi r0, r29, 2
    lwz r4, 0x50(r30)
    mr r3, r26
    lwzx r5, r5, r0
    bl fn_80093D98
    li r5, 0x1
lbl_fn_80559B30_000004E0:
    lwz r0, 0x30(r25)
    cmpwi r0, 0x7
    ble lbl_fn_80559B30_000004F8
    lwz r3, 0x2c(r25)
    addi r3, r3, 0x38
    b lbl_fn_80559B30_000004FC
lbl_fn_80559B30_000004F8:
    li r3, 0x0
lbl_fn_80559B30_000004FC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80559B30_000007B8
    lwz r0, 0x158(r27)
    slwi r28, r29, 4
    lis r3, lbl_8075E858@ha
    lfs f4, lbl_80887E68
    lfsx f0, r28, r0
    add r4, r0, r28
    stfs f0, 0xb8(r1)
    addi r5, r1, 0xb8
    lfd f5, lbl_8075E858@l(r3)
    mr r3, r26
    lfs f0, 0x4(r4)
    addi r6, r1, 0x58
    stfs f0, 0xbc(r1)
    addi r7, r1, 0x48
    lfs f0, 0x8(r4)
    stfs f0, 0xc0(r1)
    lfs f0, 0xc(r4)
    stfs f0, 0xc4(r1)
    lwz r0, 0x1c(r31)
    stw r0, 0xc(r1)
    lbz r4, 0xc(r1)
    stw r4, 0xec(r1)
    lbz r0, 0xd(r1)
    lfd f0, 0xe8(r1)
    stw r0, 0xf4(r1)
    fsubs f1, f0, f5
    lbz r4, 0xe(r1)
    lfd f0, 0xf0(r1)
    lbz r0, 0xf(r1)
    stw r4, 0xec(r1)
    fdivs f3, f1, f4
    lfd f1, 0xe8(r1)
    stw r0, 0xf4(r1)
    stfs f3, 0x48(r1)
    fsubs f2, f0, f5
    lfd f0, 0xf0(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x4c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x50(r1)
    fdivs f0, f0, f4
    stfs f0, 0x54(r1)
    lwz r0, 0x20(r31)
    stw r0, 0x10(r1)
    lbz r4, 0x10(r1)
    stw r4, 0xec(r1)
    lbz r0, 0x11(r1)
    lfd f0, 0xe8(r1)
    stw r0, 0xf4(r1)
    fsubs f1, f0, f5
    lbz r4, 0x12(r1)
    lfd f0, 0xf0(r1)
    lbz r0, 0x13(r1)
    fsubs f2, f0, f5
    stw r0, 0xf4(r1)
    fdivs f3, f1, f4
    stw r4, 0xec(r1)
    lfd f0, 0xf0(r1)
    lfd f1, 0xe8(r1)
    stfs f3, 0x58(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x5c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x60(r1)
    fdivs f0, f0, f4
    stfs f0, 0x64(r1)
    lwz r4, 0x50(r30)
    bl fn_80094958
    lwz r5, 0x164(r27)
    slwi r31, r29, 2
    lwz r4, 0x50(r30)
    mr r3, r26
    lwzx r5, r5, r31
    bl fn_80093D98
    lwz r0, 0x170(r27)
    lfs f4, 0xbc(r1)
    lfs f3, 0xc0(r1)
    add r3, r0, r28
    lfs f1, 0xc4(r1)
    lfs f5, 0xb8(r1)
    stfsx f5, r28, r0
    lfs f0, lbl_80887E34
    stfs f4, 0x4(r3)
    stfs f3, 0x8(r3)
    stfs f1, 0xc(r3)
    lfs f2, 0xb8(r1)
    stfs f5, 0x38(r1)
    fcmpo cr0, f2, f0
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f1, 0x44(r1)
    cror eq, gt, eq
    bne lbl_fn_80559B30_00000694
    li r24, 0xff
    b lbl_fn_80559B30_000006C0
lbl_fn_80559B30_00000694:
    lfs f0, lbl_80887E30
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80559B30_000006AC
    li r3, 0x0
    b lbl_fn_80559B30_000006BC
lbl_fn_80559B30_000006AC:
    lfs f1, lbl_80887E68
    lfs f0, lbl_80887E50
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80559B30_000006BC:
    mr r24, r3
lbl_fn_80559B30_000006C0:
    lfs f2, 0xbc(r1)
    lfs f0, lbl_80887E34
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80559B30_000006DC
    li r28, 0xff
    b lbl_fn_80559B30_00000708
lbl_fn_80559B30_000006DC:
    lfs f0, lbl_80887E30
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80559B30_000006F4
    li r3, 0x0
    b lbl_fn_80559B30_00000704
lbl_fn_80559B30_000006F4:
    lfs f1, lbl_80887E68
    lfs f0, lbl_80887E50
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80559B30_00000704:
    mr r28, r3
lbl_fn_80559B30_00000708:
    lfs f2, 0xc0(r1)
    lfs f0, lbl_80887E34
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80559B30_00000724
    li r25, 0xff
    b lbl_fn_80559B30_00000750
lbl_fn_80559B30_00000724:
    lfs f0, lbl_80887E30
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80559B30_0000073C
    li r3, 0x0
    b lbl_fn_80559B30_0000074C
lbl_fn_80559B30_0000073C:
    lfs f1, lbl_80887E68
    lfs f0, lbl_80887E50
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80559B30_0000074C:
    mr r25, r3
lbl_fn_80559B30_00000750:
    lfs f2, 0xc4(r1)
    lfs f0, lbl_80887E34
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80559B30_0000076C
    li r3, 0xff
    b lbl_fn_80559B30_00000794
lbl_fn_80559B30_0000076C:
    lfs f0, lbl_80887E30
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80559B30_00000784
    li r3, 0x0
    b lbl_fn_80559B30_00000794
lbl_fn_80559B30_00000784:
    lfs f1, lbl_80887E68
    lfs f0, lbl_80887E50
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80559B30_00000794:
    slwi r3, r3, 24
    slwi r0, r24, 16
    or r3, r3, r0
    li r5, 0x1
    slwi r0, r28, 8
    or r0, r0, r3
    lwz r3, 0x17c(r27)
    or r0, r25, r0
    stwx r0, r3, r31
lbl_fn_80559B30_000007B8:
    cmpwi r5, 0x0
    bne lbl_fn_80559B30_00000898
    lwz r4, 0x50(r30)
    mr r3, r26
    bl fn_80094B6C
    lwz r0, 0x18(r3)
    lis r3, lbl_8075E858@ha
    stw r0, 0x8(r1)
    lfd f5, lbl_8075E858@l(r3)
    lbz r3, 0x8(r1)
    stw r3, 0xec(r1)
    lbz r0, 0x9(r1)
    lfd f0, 0xe8(r1)
    stw r0, 0xf4(r1)
    fsubs f3, f0, f5
    lbz r3, 0xa(r1)
    lfd f0, 0xf0(r1)
    stw r3, 0xec(r1)
    lbz r0, 0xb(r1)
    fsubs f2, f0, f5
    stw r0, 0xf4(r1)
    lfd f1, 0xe8(r1)
    lfd f0, 0xf0(r1)
    lfs f4, lbl_80887E68
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    lwz r3, 0x50(r30)
    fdivs f3, f3, f4
    stfs f3, 0xa8(r1)
    fdivs f2, f2, f4
    stfs f2, 0xac(r1)
    fdivs f1, f1, f4
    stfs f1, 0xb0(r1)
    fdivs f0, f0, f4
    stfs f0, 0xb4(r1)
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    bl fn_80093E90
    lwz r5, 0x170(r27)
    slwi r4, r29, 4
    lfs f3, 0xa8(r1)
    slwi r0, r29, 2
    stfsux f3, r4, r5
    lfs f2, 0xac(r1)
    stfs f2, 0x4(r4)
    lfs f1, 0xb0(r1)
    stfs f1, 0x8(r4)
    lfs f0, 0xb4(r1)
    stfs f0, 0xc(r4)
    lwz r4, 0x17c(r27)
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    stwx r3, r4, r0
lbl_fn_80559B30_00000898:
    addi r11, r1, 0x120
    li r3, 0x0
    bl _restgpr_24
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8055A3E4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055A3EC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055A3F4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055A3FC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055A404(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055A404_0000090C
lbl_fn_8055A404_000008E8:
    lwz r0, 0x0(r3)
    add r6, r0, r5
    lwz r0, 0x14(r6)
    cmpw r4, r0
    bne lbl_fn_8055A404_00000904
    mr r3, r6
    blr
lbl_fn_8055A404_00000904:
    addi r5, r5, 0x1c0
    bdnz lbl_fn_8055A404_000008E8
lbl_fn_8055A404_0000090C:
    li r3, 0x0
    blr
}

asm void fn_8055A444(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087F978
    stw r0, 0x14(r1)
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    lis r5, lbl_807C9220@ha
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F978
    addi r5, r5, lbl_807C9220@l
    bl __register_global_object
    la r3, lbl_8087F97C
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    lis r5, lbl_807C922C@ha
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F97C
    addi r5, r5, lbl_807C922C@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055A4A0(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x210
    bl _savegpr_25
    subi r0, r5, 0x3
    mr r31, r4
    cmplwi r0, 0x1
    ble lbl_fn_8055A4A0_00001808
    cmpwi r5, 0x0
    beq lbl_fn_8055A4A0_000009A8
    cmpwi r5, 0x6
    beq lbl_fn_8055A4A0_000018A0
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_000009A8:
    mr r3, r31
    bl fn_805381A4
    mr r25, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    mr r27, r3
    cmpwi r0, 0x0
    ble lbl_fn_8055A4A0_000009D4
    lwz r3, 0x2c(r31)
    b lbl_fn_8055A4A0_000009D8
lbl_fn_8055A4A0_000009D4:
    li r3, 0x0
lbl_fn_8055A4A0_000009D8:
    cmpwi r0, 0x1
    lwz r28, 0x4(r3)
    ble lbl_fn_8055A4A0_000009F0
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_8055A4A0_000009F4
lbl_fn_8055A4A0_000009F0:
    li r3, 0x0
lbl_fn_8055A4A0_000009F4:
    cmpwi r0, 0x2
    lwz r4, 0x4(r3)
    ble lbl_fn_8055A4A0_00000A0C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_8055A4A0_00000A10
lbl_fn_8055A4A0_00000A0C:
    li r3, 0x0
lbl_fn_8055A4A0_00000A10:
    lwz r0, 0x10(r25)
    lwz r7, lbl_8087F540
    mulli r0, r0, 0x65c
    lwz r6, 0x4(r3)
    lwz r5, 0x18(r31)
    add r3, r7, r0
    addi r26, r3, 0xc8
    mr r3, r26
    bl fn_80112918
    cmpwi r28, 0x1
    beq lbl_fn_8055A4A0_00000A44
    lwz r3, lbl_8087F540
    bl fn_80481818
lbl_fn_8055A4A0_00000A44:
    cmpwi r28, 0x0
    bne lbl_fn_8055A4A0_00000D60
    lwz r5, 0x30(r31)
    cmpwi r5, 0x3
    ble lbl_fn_8055A4A0_00000A64
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055A4A0_00000A68
lbl_fn_8055A4A0_00000A64:
    li r3, 0x0
lbl_fn_8055A4A0_00000A68:
    lwz r4, 0x168(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_00000AA0
lbl_fn_8055A4A0_00000A80:
    lwz r4, 0x164(r27)
    add r30, r4, r3
    lwz r4, 0x14(r30)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_00000A98
    b lbl_fn_8055A4A0_00000AA4
lbl_fn_8055A4A0_00000A98:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_8055A4A0_00000A80
lbl_fn_8055A4A0_00000AA0:
    li r30, 0x0
lbl_fn_8055A4A0_00000AA4:
    cmpwi r5, 0x4
    ble lbl_fn_8055A4A0_00000AB8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055A4A0_00000ABC
lbl_fn_8055A4A0_00000AB8:
    li r3, 0x0
lbl_fn_8055A4A0_00000ABC:
    cmpwi r5, 0x5
    lwz r28, 0x4(r3)
    ble lbl_fn_8055A4A0_00000AD4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8055A4A0_00000AD8
lbl_fn_8055A4A0_00000AD4:
    li r3, 0x0
lbl_fn_8055A4A0_00000AD8:
    lfs f0, 0x4(r3)
    stfs f0, 0x104(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x6
    ble lbl_fn_8055A4A0_00000AF8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_8055A4A0_00000AFC
lbl_fn_8055A4A0_00000AF8:
    li r3, 0x0
lbl_fn_8055A4A0_00000AFC:
    lfs f0, 0x4(r3)
    stfs f0, 0x108(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x7
    ble lbl_fn_8055A4A0_00000B1C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x38
    b lbl_fn_8055A4A0_00000B20
lbl_fn_8055A4A0_00000B1C:
    li r3, 0x0
lbl_fn_8055A4A0_00000B20:
    lfs f0, 0x4(r3)
    stfs f0, 0x10c(r1)
    lwz r0, 0x20(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_00000B5C
    mr r4, r27
    addi r3, r1, 0xb0
    addi r5, r1, 0x104
    bl fn_80541BDC
    addi r3, r1, 0xb0
    lfs f2, 0xb8(r1)
    addi r4, r1, 0x104
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10c(r1)
lbl_fn_8055A4A0_00000B5C:
    lwz r5, 0x30(r31)
    cmpwi r5, 0x8
    ble lbl_fn_8055A4A0_00000B74
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x40
    b lbl_fn_8055A4A0_00000B78
lbl_fn_8055A4A0_00000B74:
    li r3, 0x0
lbl_fn_8055A4A0_00000B78:
    lwz r4, 0x168(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_00000BB0
lbl_fn_8055A4A0_00000B90:
    lwz r4, 0x164(r27)
    add r29, r4, r3
    lwz r4, 0x14(r29)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_00000BA8
    b lbl_fn_8055A4A0_00000BB4
lbl_fn_8055A4A0_00000BA8:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_8055A4A0_00000B90
lbl_fn_8055A4A0_00000BB0:
    li r29, 0x0
lbl_fn_8055A4A0_00000BB4:
    cmpwi r5, 0x9
    ble lbl_fn_8055A4A0_00000BC8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x48
    b lbl_fn_8055A4A0_00000BCC
lbl_fn_8055A4A0_00000BC8:
    li r3, 0x0
lbl_fn_8055A4A0_00000BCC:
    cmpwi r5, 0xa
    lwz r25, 0x4(r3)
    ble lbl_fn_8055A4A0_00000BE4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x50
    b lbl_fn_8055A4A0_00000BE8
lbl_fn_8055A4A0_00000BE4:
    li r3, 0x0
lbl_fn_8055A4A0_00000BE8:
    lfs f0, 0x4(r3)
    stfs f0, 0xf8(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0xb
    ble lbl_fn_8055A4A0_00000C08
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x58
    b lbl_fn_8055A4A0_00000C0C
lbl_fn_8055A4A0_00000C08:
    li r3, 0x0
lbl_fn_8055A4A0_00000C0C:
    lfs f0, 0x4(r3)
    stfs f0, 0xfc(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0xc
    ble lbl_fn_8055A4A0_00000C2C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x60
    b lbl_fn_8055A4A0_00000C30
lbl_fn_8055A4A0_00000C2C:
    li r3, 0x0
lbl_fn_8055A4A0_00000C30:
    lfs f0, 0x4(r3)
    stfs f0, 0x100(r1)
    lwz r0, 0x20(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_00000C6C
    mr r4, r27
    addi r3, r1, 0xa4
    addi r5, r1, 0xf8
    bl fn_80541BDC
    addi r3, r1, 0xa4
    lfs f2, 0xac(r1)
    addi r4, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x100(r1)
lbl_fn_8055A4A0_00000C6C:
    lwz r0, 0x30(r31)
    cmpwi r0, 0xd
    ble lbl_fn_8055A4A0_00000C84
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x68
    b lbl_fn_8055A4A0_00000C88
lbl_fn_8055A4A0_00000C84:
    li r3, 0x0
lbl_fn_8055A4A0_00000C88:
    lfs f7, 0x4(r3)
    cmpwi r0, 0xe
    lfs f0, lbl_80887E70
    fmuls f0, f0, f7
    ble lbl_fn_8055A4A0_00000CA8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x70
    b lbl_fn_8055A4A0_00000CAC
lbl_fn_8055A4A0_00000CA8:
    li r3, 0x0
lbl_fn_8055A4A0_00000CAC:
    cmpwi r0, 0xf
    lwz r10, 0x4(r3)
    ble lbl_fn_8055A4A0_00000CC4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x78
    b lbl_fn_8055A4A0_00000CC8
lbl_fn_8055A4A0_00000CC4:
    li r3, 0x0
lbl_fn_8055A4A0_00000CC8:
    lwz r5, 0x18(r31)
    addi r4, r1, 0x104
    lwz r8, 0x4(r3)
    li r9, 0x0
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x98
    lfs f2, 0x10c(r1)
    addi r7, r1, 0x1a8
    neg r0, r5
    psq_st f1, 0x0(r3), 0, 0
    andc r6, r0, r5
    addi r11, r1, 0xf8
    psq_st f1, 0x0(r7), 0, 0
    cntlzw r0, r10
    srwi r7, r6, 31
    addi r10, r1, 0x8c
    psq_l f1, 0x0(r11), 0, 0
    addi r12, r1, 0x190
    stfs f2, 0xa0(r1)
    addi r4, r1, 0x1a0
    addi r5, r1, 0x188
    mr r3, r26
    stfs f2, 0x1b0(r1)
    srwi r6, r0, 5
    lfs f2, 0x100(r1)
    psq_st f1, 0x0(r10), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    fmr f1, f0
    stw r30, 0x1a0(r1)
    stw r28, 0x1a4(r1)
    stw r9, 0x1b4(r1)
    stfs f2, 0x94(r1)
    stw r29, 0x188(r1)
    stw r25, 0x18c(r1)
    stfs f2, 0x198(r1)
    stw r9, 0x19c(r1)
    bl fn_80112F5C
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_00000D60:
    cmpwi r28, 0x1
    bne lbl_fn_8055A4A0_00001074
    lwz r5, 0x30(r31)
    cmpwi r5, 0x3
    ble lbl_fn_8055A4A0_00000D80
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055A4A0_00000D84
lbl_fn_8055A4A0_00000D80:
    li r3, 0x0
lbl_fn_8055A4A0_00000D84:
    lwz r4, 0x168(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_00000DBC
lbl_fn_8055A4A0_00000D9C:
    lwz r4, 0x164(r27)
    add r25, r4, r3
    lwz r4, 0x14(r25)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_00000DB4
    b lbl_fn_8055A4A0_00000DC0
lbl_fn_8055A4A0_00000DB4:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_8055A4A0_00000D9C
lbl_fn_8055A4A0_00000DBC:
    li r25, 0x0
lbl_fn_8055A4A0_00000DC0:
    cmpwi r5, 0x4
    ble lbl_fn_8055A4A0_00000DD4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055A4A0_00000DD8
lbl_fn_8055A4A0_00000DD4:
    li r3, 0x0
lbl_fn_8055A4A0_00000DD8:
    cmpwi r5, 0x5
    lwz r28, 0x4(r3)
    ble lbl_fn_8055A4A0_00000DF0
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8055A4A0_00000DF4
lbl_fn_8055A4A0_00000DF0:
    li r3, 0x0
lbl_fn_8055A4A0_00000DF4:
    lfs f0, 0x4(r3)
    stfs f0, 0xec(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x6
    ble lbl_fn_8055A4A0_00000E14
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_8055A4A0_00000E18
lbl_fn_8055A4A0_00000E14:
    li r3, 0x0
lbl_fn_8055A4A0_00000E18:
    lfs f0, 0x4(r3)
    stfs f0, 0xf0(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x7
    ble lbl_fn_8055A4A0_00000E38
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x38
    b lbl_fn_8055A4A0_00000E3C
lbl_fn_8055A4A0_00000E38:
    li r3, 0x0
lbl_fn_8055A4A0_00000E3C:
    lfs f0, 0x4(r3)
    stfs f0, 0xf4(r1)
    lwz r0, 0x20(r25)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_00000E78
    mr r4, r27
    addi r3, r1, 0x80
    addi r5, r1, 0xec
    bl fn_80541BDC
    addi r3, r1, 0x80
    lfs f2, 0x88(r1)
    addi r4, r1, 0xec
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf4(r1)
lbl_fn_8055A4A0_00000E78:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x8
    ble lbl_fn_8055A4A0_00000E90
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x40
    b lbl_fn_8055A4A0_00000E94
lbl_fn_8055A4A0_00000E90:
    li r3, 0x0
lbl_fn_8055A4A0_00000E94:
    lfs f7, 0x4(r3)
    cmpwi r0, 0x9
    lfs f0, lbl_80887E70
    fmuls f8, f0, f7
    ble lbl_fn_8055A4A0_00000EB4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x48
    b lbl_fn_8055A4A0_00000EB8
lbl_fn_8055A4A0_00000EB4:
    li r3, 0x0
lbl_fn_8055A4A0_00000EB8:
    lfs f7, 0x4(r3)
    cmpwi r0, 0xa
    lfs f0, lbl_80887E70
    fmuls f0, f0, f7
    ble lbl_fn_8055A4A0_00000ED8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x50
    b lbl_fn_8055A4A0_00000EDC
lbl_fn_8055A4A0_00000ED8:
    li r3, 0x0
lbl_fn_8055A4A0_00000EDC:
    cmpwi r0, 0xb
    lwz r29, 0x4(r3)
    cmpwi r0, 0xc
    ble lbl_fn_8055A4A0_00000EF8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x60
    b lbl_fn_8055A4A0_00000EFC
lbl_fn_8055A4A0_00000EF8:
    li r3, 0x0
lbl_fn_8055A4A0_00000EFC:
    cmpwi r0, 0xd
    lwz r0, 0x4(r3)
    ble lbl_fn_8055A4A0_00000F14
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x68
    b lbl_fn_8055A4A0_00000F18
lbl_fn_8055A4A0_00000F14:
    li r3, 0x0
lbl_fn_8055A4A0_00000F18:
    lwz r27, 0x4(r3)
    addi r4, r1, 0xec
    lfs f2, 0xf4(r1)
    addi r3, r1, 0x74
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x178
    psq_st f1, 0x0(r3), 0, 0
    li r6, 0x0
    cntlzw r0, r0
    lfs f3, lbl_80887E74
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f8
    addi r4, r1, 0x170
    mr r3, r26
    stfs f2, 0x7c(r1)
    srwi r5, r0, 5
    stfs f2, 0x180(r1)
    fmr f2, f0
    stw r25, 0x170(r1)
    stw r28, 0x174(r1)
    stw r6, 0x184(r1)
    bl fn_8011375C
    cmpwi r27, 0x0
    stw r27, 0x640(r26)
    beq lbl_fn_8055A4A0_00001040
    lfs f7, lbl_80887E78
    lis r27, lbl_8075F058@ha
    lfs f0, lbl_80887E7C
    mr r3, r25
    stfs f7, 0xe0(r1)
    addi r27, r27, lbl_8075F058@l
    stfs f7, 0xe4(r1)
    stfs f0, 0xe8(r1)
    bl fn_8001296C
    mr r25, r3
    mr r4, r27
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8055A4A0_00000FC0
    li r6, 0x0
    b lbl_fn_8055A4A0_00000FCC
lbl_fn_8055A4A0_00000FC0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r25)
    add r6, r3, r0
lbl_fn_8055A4A0_00000FCC:
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r1, 0xe0
    psq_l f2, 0x8(r6), 0, 0
    addi r3, r1, 0x1b8
    psq_l f3, 0x10(r6), 0, 0
    mr r5, r4
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lfs f0, lbl_80887E78
    psq_st f2, 0x8(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0x1c4(r1)
    stfs f0, 0x1d4(r1)
    stfs f0, 0x1e4(r1)
    bl fn_805F93C0
    addi r3, r1, 0xe0
    lfs f2, 0xe8(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x68
    psq_st f1, 0x274(r26), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    stfs f2, 0x27c(r26)
    b lbl_fn_8055A4A0_00001060
lbl_fn_8055A4A0_00001040:
    mr r4, r25
    addi r3, r1, 0x5c
    bl fn_800112E0
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x274(r26), 0, 0
    stfs f2, 0x27c(r26)
lbl_fn_8055A4A0_00001060:
    cmpwi r29, 0x0
    bne lbl_fn_8055A4A0_00001A9C
    lwz r3, lbl_8087F540
    bl fn_804816F4
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_00001074:
    cmpwi r28, 0x2
    bne lbl_fn_8055A4A0_00001250
    lwz r5, 0x30(r31)
    cmpwi r5, 0x3
    ble lbl_fn_8055A4A0_00001094
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055A4A0_00001098
lbl_fn_8055A4A0_00001094:
    li r3, 0x0
lbl_fn_8055A4A0_00001098:
    lwz r4, 0x168(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_000010D0
lbl_fn_8055A4A0_000010B0:
    lwz r4, 0x164(r27)
    add r29, r4, r3
    lwz r4, 0x14(r29)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_000010C8
    b lbl_fn_8055A4A0_000010D4
lbl_fn_8055A4A0_000010C8:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_8055A4A0_000010B0
lbl_fn_8055A4A0_000010D0:
    li r29, 0x0
lbl_fn_8055A4A0_000010D4:
    cmpwi r5, 0x4
    ble lbl_fn_8055A4A0_000010E8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055A4A0_000010EC
lbl_fn_8055A4A0_000010E8:
    li r3, 0x0
lbl_fn_8055A4A0_000010EC:
    cmpwi r5, 0x5
    lwz r25, 0x4(r3)
    ble lbl_fn_8055A4A0_00001104
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8055A4A0_00001108
lbl_fn_8055A4A0_00001104:
    li r3, 0x0
lbl_fn_8055A4A0_00001108:
    lfs f0, 0x4(r3)
    stfs f0, 0xd4(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x6
    ble lbl_fn_8055A4A0_00001128
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_8055A4A0_0000112C
lbl_fn_8055A4A0_00001128:
    li r3, 0x0
lbl_fn_8055A4A0_0000112C:
    lfs f0, 0x4(r3)
    stfs f0, 0xd8(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x7
    ble lbl_fn_8055A4A0_0000114C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x38
    b lbl_fn_8055A4A0_00001150
lbl_fn_8055A4A0_0000114C:
    li r3, 0x0
lbl_fn_8055A4A0_00001150:
    lfs f0, 0x4(r3)
    stfs f0, 0xdc(r1)
    lwz r0, 0x20(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_0000118C
    mr r4, r27
    addi r3, r1, 0x50
    addi r5, r1, 0xd4
    bl fn_80541BDC
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    addi r4, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xdc(r1)
lbl_fn_8055A4A0_0000118C:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x8
    ble lbl_fn_8055A4A0_000011A4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x40
    b lbl_fn_8055A4A0_000011A8
lbl_fn_8055A4A0_000011A4:
    li r3, 0x0
lbl_fn_8055A4A0_000011A8:
    lfs f7, 0x4(r3)
    cmpwi r0, 0x9
    lfs f0, lbl_80887E70
    fmuls f7, f0, f7
    ble lbl_fn_8055A4A0_000011C8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x48
    b lbl_fn_8055A4A0_000011CC
lbl_fn_8055A4A0_000011C8:
    li r3, 0x0
lbl_fn_8055A4A0_000011CC:
    lfs f8, 0x4(r3)
    lfs f0, lbl_80887E80
    fcmpo cr0, f8, f0
    bge lbl_fn_8055A4A0_000011E0
    fmr f8, f0
lbl_fn_8055A4A0_000011E0:
    cmpwi r0, 0xa
    ble lbl_fn_8055A4A0_000011F4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x50
    b lbl_fn_8055A4A0_000011F8
lbl_fn_8055A4A0_000011F4:
    li r3, 0x0
lbl_fn_8055A4A0_000011F8:
    lwz r0, 0x4(r3)
    addi r4, r1, 0xd4
    lfs f2, 0xdc(r1)
    addi r3, r1, 0x44
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x160
    psq_st f1, 0x0(r3), 0, 0
    li r6, 0x0
    cntlzw r0, r0
    addi r4, r1, 0x158
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f8
    mr r3, r26
    srwi r5, r0, 5
    stfs f2, 0x4c(r1)
    stfs f2, 0x168(r1)
    fmr f2, f7
    stw r29, 0x158(r1)
    stw r25, 0x15c(r1)
    stw r6, 0x16c(r1)
    bl fn_801139E4
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_00001250:
    cmpwi r28, 0x3
    bne lbl_fn_8055A4A0_00001264
    mr r3, r26
    bl fn_801129B4
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_00001264:
    cmpwi r28, 0x4
    bne lbl_fn_8055A4A0_0000151C
    lwz r5, 0x30(r31)
    cmpwi r5, 0x3
    ble lbl_fn_8055A4A0_00001284
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055A4A0_00001288
lbl_fn_8055A4A0_00001284:
    li r3, 0x0
lbl_fn_8055A4A0_00001288:
    lwz r4, 0x158(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_000012C0
lbl_fn_8055A4A0_000012A0:
    lwz r4, 0x154(r27)
    add r29, r4, r3
    lwz r4, 0x14(r29)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_000012B8
    b lbl_fn_8055A4A0_000012C4
lbl_fn_8055A4A0_000012B8:
    addi r3, r3, 0x84
    bdnz lbl_fn_8055A4A0_000012A0
lbl_fn_8055A4A0_000012C0:
    li r29, 0x0
lbl_fn_8055A4A0_000012C4:
    cmpwi r29, 0x0
    beq lbl_fn_8055A4A0_00001A9C
    cmpwi r5, 0x4
    ble lbl_fn_8055A4A0_000012E0
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055A4A0_000012E4
lbl_fn_8055A4A0_000012E0:
    li r3, 0x0
lbl_fn_8055A4A0_000012E4:
    lwz r4, 0x158(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_0000131C
lbl_fn_8055A4A0_000012FC:
    lwz r4, 0x154(r27)
    add r30, r4, r3
    lwz r4, 0x14(r30)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_00001314
    b lbl_fn_8055A4A0_00001320
lbl_fn_8055A4A0_00001314:
    addi r3, r3, 0x84
    bdnz lbl_fn_8055A4A0_000012FC
lbl_fn_8055A4A0_0000131C:
    li r30, 0x0
lbl_fn_8055A4A0_00001320:
    cmpwi r30, 0x0
    beq lbl_fn_8055A4A0_00001A9C
    cmpwi r5, 0x5
    ble lbl_fn_8055A4A0_0000133C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8055A4A0_00001340
lbl_fn_8055A4A0_0000133C:
    li r3, 0x0
lbl_fn_8055A4A0_00001340:
    lwz r4, 0x168(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_00001378
lbl_fn_8055A4A0_00001358:
    lwz r4, 0x164(r27)
    add r28, r4, r3
    lwz r4, 0x14(r28)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_00001370
    b lbl_fn_8055A4A0_0000137C
lbl_fn_8055A4A0_00001370:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_8055A4A0_00001358
lbl_fn_8055A4A0_00001378:
    li r28, 0x0
lbl_fn_8055A4A0_0000137C:
    cmpwi r5, 0x6
    ble lbl_fn_8055A4A0_00001390
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_8055A4A0_00001394
lbl_fn_8055A4A0_00001390:
    li r3, 0x0
lbl_fn_8055A4A0_00001394:
    cmpwi r5, 0x7
    lwz r25, 0x4(r3)
    ble lbl_fn_8055A4A0_000013AC
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x38
    b lbl_fn_8055A4A0_000013B0
lbl_fn_8055A4A0_000013AC:
    li r3, 0x0
lbl_fn_8055A4A0_000013B0:
    lfs f0, 0x4(r3)
    stfs f0, 0xc8(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x8
    ble lbl_fn_8055A4A0_000013D0
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x40
    b lbl_fn_8055A4A0_000013D4
lbl_fn_8055A4A0_000013D0:
    li r3, 0x0
lbl_fn_8055A4A0_000013D4:
    lfs f0, 0x4(r3)
    stfs f0, 0xcc(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x9
    ble lbl_fn_8055A4A0_000013F4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x48
    b lbl_fn_8055A4A0_000013F8
lbl_fn_8055A4A0_000013F4:
    li r3, 0x0
lbl_fn_8055A4A0_000013F8:
    lfs f0, 0x4(r3)
    stfs f0, 0xd0(r1)
    lwz r0, 0x20(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_00001434
    mr r4, r27
    addi r3, r1, 0x38
    addi r5, r1, 0xc8
    bl fn_80541BDC
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    addi r4, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_8055A4A0_00001434:
    lwz r0, 0x30(r31)
    cmpwi r0, 0xa
    ble lbl_fn_8055A4A0_0000144C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x50
    b lbl_fn_8055A4A0_00001450
lbl_fn_8055A4A0_0000144C:
    li r3, 0x0
lbl_fn_8055A4A0_00001450:
    lfs f7, 0x4(r3)
    cmpwi r0, 0xb
    lfs f0, lbl_80887E70
    fmuls f0, f0, f7
    ble lbl_fn_8055A4A0_00001470
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x58
    b lbl_fn_8055A4A0_00001474
lbl_fn_8055A4A0_00001470:
    li r3, 0x0
lbl_fn_8055A4A0_00001474:
    cmpwi r0, 0xc
    lwz r6, 0x4(r3)
    ble lbl_fn_8055A4A0_0000148C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x60
    b lbl_fn_8055A4A0_00001490
lbl_fn_8055A4A0_0000148C:
    li r3, 0x0
lbl_fn_8055A4A0_00001490:
    lis r4, lbl_807C7030@ha
    lwz r0, 0x4(r3)
    addi r4, r4, lbl_807C7030@l
    li r8, 0x0
    addi r3, r1, 0x2c
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    addi r7, r1, 0x148
    psq_st f1, 0x0(r3), 0, 0
    addi r9, r1, 0xc8
    cntlzw r0, r0
    addi r4, r1, 0x140
    psq_st f1, 0x0(r7), 0, 0
    addi r7, r1, 0x20
    psq_l f1, 0x0(r9), 0, 0
    addi r9, r1, 0x130
    psq_st f1, 0x0(r7), 0, 0
    addi r5, r1, 0x128
    mr r3, r26
    srwi r7, r0, 5
    psq_st f1, 0x0(r9), 0, 0
    fmr f1, f0
    stfs f2, 0x34(r1)
    stfs f2, 0x150(r1)
    lfs f2, 0xd0(r1)
    stw r8, 0x140(r1)
    stw r8, 0x144(r1)
    stw r29, 0x154(r1)
    stfs f2, 0x28(r1)
    stw r28, 0x128(r1)
    stw r25, 0x12c(r1)
    stfs f2, 0x138(r1)
    stw r30, 0x13c(r1)
    bl fn_80113CD4
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_0000151C:
    cmpwi r28, 0x5
    bne lbl_fn_8055A4A0_00001A9C
    lwz r5, 0x30(r31)
    cmpwi r5, 0x3
    ble lbl_fn_8055A4A0_0000153C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x18
    b lbl_fn_8055A4A0_00001540
lbl_fn_8055A4A0_0000153C:
    li r3, 0x0
lbl_fn_8055A4A0_00001540:
    lwz r4, 0x158(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_00001578
lbl_fn_8055A4A0_00001558:
    lwz r4, 0x154(r27)
    add r25, r4, r3
    lwz r4, 0x14(r25)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_00001570
    b lbl_fn_8055A4A0_0000157C
lbl_fn_8055A4A0_00001570:
    addi r3, r3, 0x84
    bdnz lbl_fn_8055A4A0_00001558
lbl_fn_8055A4A0_00001578:
    li r25, 0x0
lbl_fn_8055A4A0_0000157C:
    cmpwi r25, 0x0
    beq lbl_fn_8055A4A0_00001A9C
    cmpwi r5, 0x4
    ble lbl_fn_8055A4A0_00001598
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x20
    b lbl_fn_8055A4A0_0000159C
lbl_fn_8055A4A0_00001598:
    li r3, 0x0
lbl_fn_8055A4A0_0000159C:
    lwz r4, 0x158(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_000015D4
lbl_fn_8055A4A0_000015B4:
    lwz r4, 0x154(r27)
    add r28, r4, r3
    lwz r4, 0x14(r28)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_000015CC
    b lbl_fn_8055A4A0_000015D8
lbl_fn_8055A4A0_000015CC:
    addi r3, r3, 0x84
    bdnz lbl_fn_8055A4A0_000015B4
lbl_fn_8055A4A0_000015D4:
    li r28, 0x0
lbl_fn_8055A4A0_000015D8:
    cmpwi r28, 0x0
    beq lbl_fn_8055A4A0_00001A9C
    cmpwi r5, 0x5
    ble lbl_fn_8055A4A0_000015F4
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8055A4A0_000015F8
lbl_fn_8055A4A0_000015F4:
    li r3, 0x0
lbl_fn_8055A4A0_000015F8:
    lwz r4, 0x168(r27)
    lwz r0, 0x4(r3)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8055A4A0_00001630
lbl_fn_8055A4A0_00001610:
    lwz r4, 0x164(r27)
    add r29, r4, r3
    lwz r4, 0x14(r29)
    cmpw r0, r4
    bne lbl_fn_8055A4A0_00001628
    b lbl_fn_8055A4A0_00001634
lbl_fn_8055A4A0_00001628:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_8055A4A0_00001610
lbl_fn_8055A4A0_00001630:
    li r29, 0x0
lbl_fn_8055A4A0_00001634:
    cmpwi r5, 0x6
    ble lbl_fn_8055A4A0_00001648
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_8055A4A0_0000164C
lbl_fn_8055A4A0_00001648:
    li r3, 0x0
lbl_fn_8055A4A0_0000164C:
    cmpwi r5, 0x7
    lwz r30, 0x4(r3)
    ble lbl_fn_8055A4A0_00001664
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x38
    b lbl_fn_8055A4A0_00001668
lbl_fn_8055A4A0_00001664:
    li r3, 0x0
lbl_fn_8055A4A0_00001668:
    lfs f0, 0x4(r3)
    stfs f0, 0xbc(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x8
    ble lbl_fn_8055A4A0_00001688
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x40
    b lbl_fn_8055A4A0_0000168C
lbl_fn_8055A4A0_00001688:
    li r3, 0x0
lbl_fn_8055A4A0_0000168C:
    lfs f0, 0x4(r3)
    stfs f0, 0xc0(r1)
    lwz r0, 0x30(r31)
    cmpwi r0, 0x9
    ble lbl_fn_8055A4A0_000016AC
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x48
    b lbl_fn_8055A4A0_000016B0
lbl_fn_8055A4A0_000016AC:
    li r3, 0x0
lbl_fn_8055A4A0_000016B0:
    lfs f0, 0x4(r3)
    stfs f0, 0xc4(r1)
    lwz r0, 0x20(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_000016EC
    mr r4, r27
    addi r3, r1, 0x14
    addi r5, r1, 0xbc
    bl fn_80541BDC
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    addi r4, r1, 0xbc
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
lbl_fn_8055A4A0_000016EC:
    lwz r5, 0x30(r31)
    cmpwi r5, 0xa
    ble lbl_fn_8055A4A0_00001704
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x50
    b lbl_fn_8055A4A0_00001708
lbl_fn_8055A4A0_00001704:
    li r3, 0x0
lbl_fn_8055A4A0_00001708:
    lfs f7, 0x4(r3)
    cmpwi r5, 0xb
    lfs f0, lbl_80887E70
    fmuls f3, f0, f7
    ble lbl_fn_8055A4A0_00001728
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x58
    b lbl_fn_8055A4A0_0000172C
lbl_fn_8055A4A0_00001728:
    li r3, 0x0
lbl_fn_8055A4A0_0000172C:
    cmpwi r5, 0xc
    lwz r6, 0x4(r3)
    ble lbl_fn_8055A4A0_00001744
    lwz r3, 0x2c(r31)
    addi r4, r3, 0x60
    b lbl_fn_8055A4A0_00001748
lbl_fn_8055A4A0_00001744:
    li r4, 0x0
lbl_fn_8055A4A0_00001748:
    lwz r7, 0x10(r31)
    lis r0, 0x4330
    lwz r8, 0x14(r31)
    lis r3, lbl_8075EC98@ha
    stw r0, 0x1e8(r1)
    cmpwi r5, 0xd
    subf r0, r7, r8
    lfd f7, lbl_8075EC98@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1ec(r1)
    lfs f8, 0x4(r4)
    lfd f0, 0x1e8(r1)
    fsubs f0, f0, f7
    fdivs f0, f8, f0
    ble lbl_fn_8055A4A0_00001790
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x68
    b lbl_fn_8055A4A0_00001794
lbl_fn_8055A4A0_00001790:
    li r3, 0x0
lbl_fn_8055A4A0_00001794:
    cmpwi r5, 0xe
    lfs f7, 0x4(r3)
    ble lbl_fn_8055A4A0_000017AC
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x70
    b lbl_fn_8055A4A0_000017B0
lbl_fn_8055A4A0_000017AC:
    li r3, 0x0
lbl_fn_8055A4A0_000017B0:
    lwz r0, 0x4(r3)
    addi r4, r1, 0xbc
    lfs f2, 0xc4(r1)
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r1, 0x118
    psq_st f1, 0x0(r3), 0, 0
    cntlzw r0, r0
    addi r5, r1, 0x110
    mr r3, r26
    psq_st f1, 0x0(r7), 0, 0
    fmr f1, f0
    mr r4, r25
    srwi r7, r0, 5
    stfs f2, 0x10(r1)
    stfs f2, 0x120(r1)
    fmr f2, f7
    stw r29, 0x110(r1)
    stw r30, 0x114(r1)
    stw r28, 0x124(r1)
    bl fn_801140A0
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_00001808:
    mr r3, r31
    bl fn_805381A4
    lwz r0, 0x10(r3)
    lwz r3, lbl_8087F540
    mulli r0, r0, 0x65c
    add r25, r3, r0
    lwz r4, 0x354(r25)
    bl fn_8048C884
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8055A4A0_0000183C
    lwz r3, 0x2c(r31)
    b lbl_fn_8055A4A0_00001840
lbl_fn_8055A4A0_0000183C:
    li r3, 0x0
lbl_fn_8055A4A0_00001840:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x1
    bne lbl_fn_8055A4A0_0000187C
    cmpwi r0, 0xb
    ble lbl_fn_8055A4A0_00001860
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x58
    b lbl_fn_8055A4A0_00001864
lbl_fn_8055A4A0_00001860:
    li r3, 0x0
lbl_fn_8055A4A0_00001864:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8055A4A0_00001A9C
    lwz r3, lbl_8087F540
    bl fn_804817D4
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_0000187C:
    cmpwi r3, 0x0
    beq lbl_fn_8055A4A0_00001890
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_00001890:
    lwz r3, lbl_8087F540
    lwz r4, 0x358(r25)
    bl fn_8048BD64
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_000018A0:
    mr r3, r31
    bl fn_805381CC
    lwz r5, 0x30(r31)
    mr r25, r3
    cmpwi r5, 0x0
    ble lbl_fn_8055A4A0_000018C0
    lwz r4, 0x2c(r31)
    b lbl_fn_8055A4A0_000018C4
lbl_fn_8055A4A0_000018C0:
    li r4, 0x0
lbl_fn_8055A4A0_000018C4:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8055A4A0_000019B0
    cmpwi r5, 0x3
    ble lbl_fn_8055A4A0_000018E4
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x18
    b lbl_fn_8055A4A0_000018E8
lbl_fn_8055A4A0_000018E4:
    li r4, 0x0
lbl_fn_8055A4A0_000018E8:
    lwz r0, 0x168(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055A4A0_00001920
lbl_fn_8055A4A0_00001900:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_8055A4A0_00001918
    b lbl_fn_8055A4A0_00001924
lbl_fn_8055A4A0_00001918:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055A4A0_00001900
lbl_fn_8055A4A0_00001920:
    li r6, 0x0
lbl_fn_8055A4A0_00001924:
    lwz r0, 0x20(r6)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_0000193C
    mr r3, r31
    li r4, 0x5
    bl fn_80538DC8
lbl_fn_8055A4A0_0000193C:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x8
    ble lbl_fn_8055A4A0_00001954
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x40
    b lbl_fn_8055A4A0_00001958
lbl_fn_8055A4A0_00001954:
    li r3, 0x0
lbl_fn_8055A4A0_00001958:
    lwz r0, 0x168(r25)
    lwz r4, 0x4(r3)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055A4A0_00001990
lbl_fn_8055A4A0_00001970:
    lwz r0, 0x164(r25)
    add r5, r0, r3
    lwz r0, 0x14(r5)
    cmpw r4, r0
    bne lbl_fn_8055A4A0_00001988
    b lbl_fn_8055A4A0_00001994
lbl_fn_8055A4A0_00001988:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_8055A4A0_00001970
lbl_fn_8055A4A0_00001990:
    li r5, 0x0
lbl_fn_8055A4A0_00001994:
    lwz r0, 0x20(r5)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_00001A9C
    mr r3, r31
    li r4, 0xa
    bl fn_80538DC8
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_000019B0:
    cmpwi r0, 0x1
    bne lbl_fn_8055A4A0_00001A28
    cmpwi r5, 0x3
    ble lbl_fn_8055A4A0_000019CC
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x18
    b lbl_fn_8055A4A0_000019D0
lbl_fn_8055A4A0_000019CC:
    li r4, 0x0
lbl_fn_8055A4A0_000019D0:
    lwz r0, 0x168(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055A4A0_00001A08
lbl_fn_8055A4A0_000019E8:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_8055A4A0_00001A00
    b lbl_fn_8055A4A0_00001A0C
lbl_fn_8055A4A0_00001A00:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055A4A0_000019E8
lbl_fn_8055A4A0_00001A08:
    li r6, 0x0
lbl_fn_8055A4A0_00001A0C:
    lwz r0, 0x20(r6)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_00001A9C
    mr r3, r31
    li r4, 0x5
    bl fn_80538DC8
    b lbl_fn_8055A4A0_00001A9C
lbl_fn_8055A4A0_00001A28:
    cmpwi r0, 0x2
    bne lbl_fn_8055A4A0_00001A9C
    cmpwi r5, 0x3
    ble lbl_fn_8055A4A0_00001A44
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x18
    b lbl_fn_8055A4A0_00001A48
lbl_fn_8055A4A0_00001A44:
    li r4, 0x0
lbl_fn_8055A4A0_00001A48:
    lwz r0, 0x168(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055A4A0_00001A80
lbl_fn_8055A4A0_00001A60:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_8055A4A0_00001A78
    b lbl_fn_8055A4A0_00001A84
lbl_fn_8055A4A0_00001A78:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055A4A0_00001A60
lbl_fn_8055A4A0_00001A80:
    li r6, 0x0
lbl_fn_8055A4A0_00001A84:
    lwz r0, 0x20(r6)
    cmpwi r0, 0x6
    bne lbl_fn_8055A4A0_00001A9C
    mr r3, r31
    li r4, 0x5
    bl fn_80538DC8
lbl_fn_8055A4A0_00001A9C:
    addi r11, r1, 0x210
    li r3, 0x0
    bl _restgpr_25
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}
