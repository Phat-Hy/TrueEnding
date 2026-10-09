#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004ECC0(void);
extern void fn_80094958(void);
extern void fn_80097C08(void);
extern void fn_800F8548(void);
extern void fn_80126214(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_8017A300(void);
extern void fn_80232B7C(void);
extern void fn_8023A680(void);
extern void fn_802C4858(void);
extern void fn_802C4B70(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803B3B38(void);
extern void fn_803C17FC(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80686A64(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80746C68[];
extern u8 lbl_80746C70[];
extern u8 lbl_80746C90[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_808842A8;
extern u32 lbl_808842AC;
extern u32 lbl_808842B0;
extern u32 lbl_808842E0;
extern u32 lbl_808842F0;
extern u32 lbl_80884300;
extern u32 lbl_80884304;
extern u32 lbl_80884308;
extern u32 lbl_8088431C;
extern u32 lbl_80884324;
extern u32 lbl_80884328;
extern u32 lbl_80884330;
extern u32 lbl_80884334;
extern u32 lbl_80884338;
extern u32 lbl_8088433C;
extern u32 lbl_80884340;
extern u32 lbl_80884344;
extern u32 lbl_80884348;
extern u32 lbl_8088434C;
extern u32 lbl_80884350;
extern u32 lbl_80884354;
extern u32 lbl_80884358;
extern u32 lbl_8088435C;
extern u32 lbl_80884360;
extern u32 lbl_80884364;
extern u32 lbl_80884368;
extern u32 lbl_8088436C;
extern u32 lbl_80884370;
extern u32 lbl_80884374;
extern u32 lbl_80884378;
extern u32 lbl_8088437C;
extern u32 lbl_80884380;
extern u32 lbl_80884384;
extern u32 lbl_80884388;

/* Function declarations */
void fn_802C1FEC(void);
void fn_802C25C4(void);
void fn_802C2944(void);
void fn_802C2AE8(void);
void fn_802C2B68(void);
void fn_802C2BCC(void);
void fn_802C3154(void);
void fn_802C38E4(void);

asm void fn_802C1FEC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, 0x4330
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lwz r0, 0x1700(r3)
    stw r4, 0x48(r1)
    cmpwi r0, 0x0
    stw r4, 0x50(r1)
    beq lbl_fn_802C1FEC_000000D4
    lwz r0, 0x15fc(r3)
    lis r30, lbl_80746C68@ha
    lfd f3, lbl_80746C68@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfs f1, lbl_80884330
    lfd f2, 0x48(r1)
    lfs f0, lbl_80884334
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f2, f1
    lfs f1, lbl_8088433C
    lfs f0, lbl_80884338
    lfs f3, lbl_808842AC
    fmadds f0, f1, f2, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_802C1FEC_00000080
    b lbl_fn_802C1FEC_000000BC
lbl_fn_802C1FEC_00000080:
    lwz r0, 0x15fc(r31)
    lfd f3, lbl_80746C68@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfs f1, lbl_80884330
    lfd f2, 0x50(r1)
    lfs f0, lbl_80884334
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f2, f1
    lfs f1, lbl_8088433C
    lfs f0, lbl_80884338
    fmadds f3, f1, f2, f0
lbl_fn_802C1FEC_000000BC:
    lfs f1, lbl_8088433C
    lfs f0, lbl_80884338
    fmadds f4, f1, f3, f0
    fmr f0, f4
    fmr f5, f4
    b lbl_fn_802C1FEC_00000508
lbl_fn_802C1FEC_000000D4:
    lwz r0, 0x15f4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C1FEC_0000017C
    lwz r0, 0x15fc(r3)
    lis r30, lbl_80746C68@ha
    lfd f3, lbl_80746C68@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfs f1, lbl_80884340
    lfd f2, 0x48(r1)
    lfs f0, lbl_80884334
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80884344
    lfs f2, lbl_808842AC
    fmadds f0, f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_802C1FEC_0000012C
    b lbl_fn_802C1FEC_00000164
lbl_fn_802C1FEC_0000012C:
    lwz r0, 0x15fc(r31)
    lfd f3, lbl_80746C68@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfs f1, lbl_80884340
    lfd f2, 0x50(r1)
    lfs f0, lbl_80884334
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80884344
    fmadds f2, f0, f1, f0
lbl_fn_802C1FEC_00000164:
    lfs f1, lbl_80884348
    lfs f0, lbl_8088433C
    fmadds f4, f1, f2, f0
    fmr f0, f4
    fmr f5, f4
    b lbl_fn_802C1FEC_00000214
lbl_fn_802C1FEC_0000017C:
    lwz r0, 0x15fc(r3)
    lis r30, lbl_80746C68@ha
    lfd f3, lbl_80746C68@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfs f1, lbl_80884330
    lfd f2, 0x48(r1)
    lfs f0, lbl_80884334
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80884344
    lfs f2, lbl_808842AC
    fmadds f0, f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_802C1FEC_000001C8
    b lbl_fn_802C1FEC_00000200
lbl_fn_802C1FEC_000001C8:
    lwz r0, 0x15fc(r31)
    lfd f3, lbl_80746C68@l(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfs f1, lbl_80884330
    lfd f2, 0x50(r1)
    lfs f0, lbl_80884334
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_80884344
    fmadds f2, f0, f1, f0
lbl_fn_802C1FEC_00000200:
    lfs f1, lbl_80884348
    lfs f0, lbl_8088433C
    fmadds f4, f1, f2, f0
    fmr f0, f4
    fmr f5, f4
lbl_fn_802C1FEC_00000214:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_802C1FEC_0000022C
    cmpwi r0, 0x4
    beq lbl_fn_802C1FEC_000003A0
    b lbl_fn_802C1FEC_00000508
lbl_fn_802C1FEC_0000022C:
    lfs f3, 0x2e4(r31)
    lfs f2, lbl_808842E0
    fcmpo cr0, f3, f2
    bge lbl_fn_802C1FEC_00000258
    fdivs f2, f3, f2
    lfs f1, lbl_808842AC
    fsubs f1, f1, f2
    fmuls f4, f4, f1
    fmuls f0, f0, f1
    fmuls f5, f5, f1
    b lbl_fn_802C1FEC_00000508
lbl_fn_802C1FEC_00000258:
    lfs f1, lbl_8088434C
    fcmpo cr0, f3, f1
    bge lbl_fn_802C1FEC_00000358
    lfs f0, lbl_80884350
    fcmpo cr0, f3, f0
    bge lbl_fn_802C1FEC_000002CC
    lfs f0, lbl_80884354
    lfs f1, lbl_808842A8
    fsubs f0, f3, f0
    fdivs f0, f0, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_802C1FEC_0000028C
    b lbl_fn_802C1FEC_00000290
lbl_fn_802C1FEC_0000028C:
    fmr f1, f0
lbl_fn_802C1FEC_00000290:
    lfs f0, lbl_808842AC
    fcmpo cr0, f0, f1
    bge lbl_fn_802C1FEC_000002A0
    b lbl_fn_802C1FEC_00000334
lbl_fn_802C1FEC_000002A0:
    lfs f2, 0x2e4(r31)
    lfs f0, lbl_80884354
    lfs f1, lbl_808842E0
    fsubs f2, f2, f0
    lfs f0, lbl_808842A8
    fdivs f1, f2, f1
    fcmpo cr0, f0, f1
    ble lbl_fn_802C1FEC_000002C4
    b lbl_fn_802C1FEC_00000334
lbl_fn_802C1FEC_000002C4:
    fmr f0, f1
    b lbl_fn_802C1FEC_00000334
lbl_fn_802C1FEC_000002CC:
    fsubs f2, f3, f0
    lfs f1, lbl_80884358
    lfs f0, lbl_808842AC
    lfs f3, lbl_808842A8
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_802C1FEC_000002F0
    b lbl_fn_802C1FEC_000002F4
lbl_fn_802C1FEC_000002F0:
    fmr f3, f0
lbl_fn_802C1FEC_000002F4:
    lfs f0, lbl_808842AC
    fcmpo cr0, f0, f3
    bge lbl_fn_802C1FEC_00000304
    b lbl_fn_802C1FEC_00000334
lbl_fn_802C1FEC_00000304:
    lfs f3, 0x2e4(r31)
    lfs f2, lbl_80884350
    lfs f1, lbl_80884358
    fsubs f2, f3, f2
    lfs f3, lbl_808842A8
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_802C1FEC_0000032C
    b lbl_fn_802C1FEC_00000330
lbl_fn_802C1FEC_0000032C:
    fmr f3, f0
lbl_fn_802C1FEC_00000330:
    fmr f0, f3
lbl_fn_802C1FEC_00000334:
    lwz r0, 0x15f4(r31)
    fmr f4, f0
    lfs f5, lbl_808842A8
    li r3, 0x43
    cmpwi r0, 0x0
    beq lbl_fn_802C1FEC_00000350
    li r3, 0x10
lbl_fn_802C1FEC_00000350:
    stw r3, 0x15fc(r31)
    b lbl_fn_802C1FEC_00000508
lbl_fn_802C1FEC_00000358:
    fsubs f2, f3, f1
    lfs f1, lbl_8088435C
    lfs f3, lbl_808842AC
    fdivs f1, f2, f1
    fcmpo cr0, f3, f1
    bge lbl_fn_802C1FEC_00000374
    b lbl_fn_802C1FEC_00000378
lbl_fn_802C1FEC_00000374:
    fmr f3, f1
lbl_fn_802C1FEC_00000378:
    lwz r0, 0x15f4(r31)
    fmuls f4, f4, f3
    fmuls f0, f0, f3
    li r3, 0x43
    cmpwi r0, 0x0
    fmuls f5, f5, f3
    beq lbl_fn_802C1FEC_00000398
    li r3, 0x10
lbl_fn_802C1FEC_00000398:
    stw r3, 0x15fc(r31)
    b lbl_fn_802C1FEC_00000508
lbl_fn_802C1FEC_000003A0:
    lfs f3, 0x2e4(r31)
    lfs f2, lbl_808842E0
    fcmpo cr0, f3, f2
    bge lbl_fn_802C1FEC_000003CC
    fdivs f2, f3, f2
    lfs f1, lbl_808842AC
    fsubs f1, f1, f2
    fmuls f4, f4, f1
    fmuls f0, f0, f1
    fmuls f5, f5, f1
    b lbl_fn_802C1FEC_00000508
lbl_fn_802C1FEC_000003CC:
    lfs f1, lbl_8088434C
    fcmpo cr0, f3, f1
    bge lbl_fn_802C1FEC_000004C4
    lfs f0, lbl_8088431C
    fcmpo cr0, f3, f0
    bge lbl_fn_802C1FEC_00000438
    fsubs f0, f3, f2
    lfs f1, lbl_808842A8
    fdivs f0, f0, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_802C1FEC_000003FC
    b lbl_fn_802C1FEC_00000400
lbl_fn_802C1FEC_000003FC:
    fmr f1, f0
lbl_fn_802C1FEC_00000400:
    lfs f0, lbl_808842AC
    fcmpo cr0, f0, f1
    bge lbl_fn_802C1FEC_00000410
    b lbl_fn_802C1FEC_000004A0
lbl_fn_802C1FEC_00000410:
    lfs f1, 0x2e4(r31)
    lfs f2, lbl_808842E0
    lfs f0, lbl_808842A8
    fsubs f1, f1, f2
    fdivs f1, f1, f2
    fcmpo cr0, f0, f1
    ble lbl_fn_802C1FEC_00000430
    b lbl_fn_802C1FEC_000004A0
lbl_fn_802C1FEC_00000430:
    fmr f0, f1
    b lbl_fn_802C1FEC_000004A0
lbl_fn_802C1FEC_00000438:
    fsubs f2, f3, f0
    lfs f1, lbl_80884358
    lfs f0, lbl_808842AC
    lfs f3, lbl_808842A8
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_802C1FEC_0000045C
    b lbl_fn_802C1FEC_00000460
lbl_fn_802C1FEC_0000045C:
    fmr f3, f0
lbl_fn_802C1FEC_00000460:
    lfs f0, lbl_808842AC
    fcmpo cr0, f0, f3
    bge lbl_fn_802C1FEC_00000470
    b lbl_fn_802C1FEC_000004A0
lbl_fn_802C1FEC_00000470:
    lfs f3, 0x2e4(r31)
    lfs f2, lbl_8088431C
    lfs f1, lbl_80884358
    fsubs f2, f3, f2
    lfs f3, lbl_808842A8
    fdivs f1, f2, f1
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_802C1FEC_00000498
    b lbl_fn_802C1FEC_0000049C
lbl_fn_802C1FEC_00000498:
    fmr f3, f0
lbl_fn_802C1FEC_0000049C:
    fmr f0, f3
lbl_fn_802C1FEC_000004A0:
    lwz r0, 0x15f4(r31)
    fmr f4, f0
    fmr f5, f0
    li r3, 0x43
    cmpwi r0, 0x0
    beq lbl_fn_802C1FEC_000004BC
    li r3, 0x10
lbl_fn_802C1FEC_000004BC:
    stw r3, 0x15fc(r31)
    b lbl_fn_802C1FEC_00000508
lbl_fn_802C1FEC_000004C4:
    fsubs f2, f3, f1
    lfs f1, lbl_8088435C
    lfs f3, lbl_808842AC
    fdivs f1, f2, f1
    fcmpo cr0, f3, f1
    bge lbl_fn_802C1FEC_000004E0
    b lbl_fn_802C1FEC_000004E4
lbl_fn_802C1FEC_000004E0:
    fmr f3, f1
lbl_fn_802C1FEC_000004E4:
    lwz r0, 0x15f4(r31)
    fmuls f4, f4, f3
    fmuls f0, f0, f3
    li r3, 0x43
    cmpwi r0, 0x0
    fmuls f5, f5, f3
    beq lbl_fn_802C1FEC_00000504
    li r3, 0x10
lbl_fn_802C1FEC_00000504:
    stw r3, 0x15fc(r31)
lbl_fn_802C1FEC_00000508:
    lfs f1, lbl_808842AC
    addi r6, r1, 0x8
    lis r30, lbl_80746C90@ha
    stfs f4, 0x38(r1)
    mr r7, r6
    addi r3, r31, 0xb0
    stfs f4, 0x3c(r1)
    addi r4, r30, lbl_80746C90@l
    addi r5, r1, 0x38
    stfs f4, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f5, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f5, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    bl fn_80094958
    addi r30, r30, lbl_80746C90@l
    addi r6, r1, 0x8
    mr r7, r6
    addi r3, r31, 0xb0
    addi r4, r30, 0x27
    addi r5, r1, 0x38
    bl fn_80094958
    addi r6, r1, 0x8
    addi r3, r31, 0xb0
    mr r7, r6
    addi r4, r30, 0x1a
    addi r5, r1, 0x28
    bl fn_80094958
    addi r6, r1, 0x8
    addi r3, r31, 0xb0
    mr r7, r6
    addi r4, r30, 0xd
    addi r5, r1, 0x18
    bl fn_80094958
    lwz r3, 0x15fc(r31)
    addi r0, r3, 0x1
    stw r0, 0x15fc(r31)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802C25C4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    lwz r0, 0x0(r4)
    cmplw r0, r3
    bne lbl_fn_802C25C4_00000624
    li r5, 0x0
    li r3, 0x2
    li r0, 0x1
    stw r5, 0x90(r4)
    stw r3, 0x84(r4)
    stw r5, 0x68(r4)
    stw r0, 0x8c(r4)
    b lbl_fn_802C25C4_0000093C
lbl_fn_802C25C4_00000624:
    lfs f4, 0x10(r4)
    lfs f5, lbl_808842A8
    lfs f3, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    lwz r5, 0x8(r4)
    fmuls f0, f0, f5
    stfs f4, 0x10(r4)
    stfs f3, 0x14(r4)
    stfs f0, 0x18(r4)
    lbz r0, 0x1(r5)
    cmpwi r0, 0x1
    bne lbl_fn_802C25C4_00000870
    lwz r0, 0x40(r4)
    cmpwi r0, 0x1
    bne lbl_fn_802C25C4_00000870
    lwz r0, 0x4(r5)
    cmpwi r0, 0x4e88
    beq lbl_fn_802C25C4_00000870
    lwz r4, 0x1708(r3)
    bl fn_8017A300
    lwz r3, lbl_8087F430
    li r4, 0xfc
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802C25C4_00000870
    lwz r0, 0x15f4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802C25C4_00000870
    lwz r4, 0xc(r31)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lis r3, lbl_80746C68@ha
    oris r0, r4, 0x20
    lfd f4, lbl_80746C68@l(r3)
    stw r0, 0xc(r31)
    lfs f0, lbl_80884360
    lwz r0, 0x940(r30)
    lfs f5, 0x7d8(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lwz r3, 0x15f8(r30)
    lfd f3, 0x28(r1)
    addi r0, r3, 0x1
    stw r0, 0x15f8(r30)
    fsubs f3, f3, f4
    fdivs f3, f5, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_802C25C4_000006F4
    cmpwi r0, 0x3
    blt lbl_fn_802C25C4_000007EC
lbl_fn_802C25C4_000006F4:
    lwz r3, lbl_8087F430
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802C25C4_000007EC
    li r0, 0x0
    stw r0, 0x1590(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_808842AC
    li r0, 0x7
    lfs f0, lbl_80884344
    li r29, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808842A8
    li r4, 0x0
    stw r0, 0x58c(r30)
    li r5, 0x37
    lfs f2, lbl_80884364
    li r6, 0x0
    stw r29, 0x3fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f3, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    cmpwi r29, 0x0
    stw r29, 0x15b0(r30)
    stw r29, 0x15b4(r30)
    stw r29, 0x15f4(r30)
    beq lbl_fn_802C25C4_00000784
    lwz r3, lbl_8087F430
    li r4, 0xfc
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_802C25C4_00000794
lbl_fn_802C25C4_00000784:
    lwz r3, lbl_8087F430
    li r4, 0xfc
    li r5, 0x3
    bl fn_80370AE4
lbl_fn_802C25C4_00000794:
    li r29, 0x1
    stw r29, 0x1594(r30)
    mr r3, r30
    li r4, 0xc8
    stw r29, 0x16bc(r30)
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    li r0, -0x1
    lfs f1, lbl_808842AC
    stw r4, 0x8(r1)
    addi r4, r30, 0x16f4
    addi r7, r30, 0x16c4
    li r5, -0x1
    stw r0, 0xc(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    stw r29, 0x10(r1)
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_802C25C4_00000844
lbl_fn_802C25C4_000007EC:
    li r0, 0x0
    stw r0, 0x1590(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808842AC
    li r0, 0x6
    stw r3, 0x590(r30)
    li r29, 0x1
    lfs f1, lbl_808842A8
    addi r3, r30, 0xb0
    stw r0, 0x58c(r30)
    li r4, 0x0
    lfs f2, lbl_80884364
    li r5, 0x35
    stw r29, 0x3fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    stw r29, 0x15b4(r30)
lbl_fn_802C25C4_00000844:
    lwz r0, 0x15f8(r30)
    cmpwi r0, 0x3
    bgt lbl_fn_802C25C4_0000085C
    li r0, 0x1
    stw r0, 0x15b8(r30)
    b lbl_fn_802C25C4_00000864
lbl_fn_802C25C4_0000085C:
    li r0, 0x0
    stw r0, 0x15b8(r30)
lbl_fn_802C25C4_00000864:
    li r0, 0x0
    stw r0, 0x1700(r30)
    stw r0, 0x15c4(r30)
lbl_fn_802C25C4_00000870:
    lwz r0, 0x40(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802C25C4_00000888
    lis r0, 0x8000
    stw r0, 0xc(r31)
    stw r0, 0x94(r31)
lbl_fn_802C25C4_00000888:
    lwz r5, 0x40(r31)
    mr r3, r30
    lwz r0, 0x62c(r30)
    mr r4, r31
    mulli r6, r5, 0x14
    lfs f6, 0x30(r31)
    lfs f5, 0x2c(r31)
    lfs f0, 0x28(r31)
    add r5, r0, r6
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x24(r31)
    psq_st f1, 0x1c(r31), 0, 0
    lwz r0, 0x62c(r30)
    lfs f4, 0x1c(r31)
    add r5, r0, r6
    lfs f3, 0x20(r31)
    lfs f7, 0x10(r5)
    fmuls f5, f5, f7
    fmuls f6, f6, f7
    fmuls f7, f0, f7
    stfs f5, 0x1c(r1)
    fadds f3, f3, f5
    fadds f0, f2, f6
    stfs f6, 0x20(r1)
    fadds f4, f4, f7
    stfs f3, 0x20(r31)
    stfs f4, 0x1c(r31)
    stfs f0, 0x24(r31)
    lwz r0, 0x62c(r30)
    stfs f7, 0x18(r1)
    add r5, r0, r6
    lfs f0, 0x10(r5)
    fadds f0, f3, f0
    stfs f0, 0x20(r31)
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r4, 0x1704(r30)
    mr r3, r30
    bl fn_8017A300
lbl_fn_802C25C4_0000093C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802C2944(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802C2944_00000988
    bl fn_802C4B70
    b lbl_fn_802C2944_00000AE4
lbl_fn_802C2944_00000988:
    lwz r3, lbl_8087F430
    li r4, 0xfc
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802C2944_00000AE4
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lis r3, lbl_80746C68@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_80746C68@l(r3)
    stw r0, 0x1c(r1)
    lfs f3, 0x7d8(r31)
    lfd f1, 0x18(r1)
    lfs f0, lbl_80884344
    fsubs f1, f1, f2
    fdivs f1, f3, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_802C2944_00000AC4
    lwz r3, lbl_8087F430
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802C2944_00000AC4
    li r0, 0x0
    stw r0, 0x1590(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808842AC
    li r4, 0x8
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_808842A8
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80884364
    li r5, 0x33
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x15b0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802C2944_00000A58
    lwz r3, lbl_8087F430
    li r4, 0xfc
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_802C2944_00000A68
lbl_fn_802C2944_00000A58:
    lwz r3, lbl_8087F430
    li r4, 0xfc
    li r5, 0x3
    bl fn_80370AE4
lbl_fn_802C2944_00000A68:
    li r30, 0x1
    stw r30, 0x1594(r31)
    mr r3, r31
    li r4, 0xc8
    stw r30, 0x16bc(r31)
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    lfs f1, lbl_808842AC
    stw r0, 0xc(r1)
    addi r4, r31, 0x16f4
    addi r7, r31, 0x16c4
    li r5, -0x1
    stw r30, 0x10(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    bl fn_8023A680
    stw r30, 0x15b8(r31)
    b lbl_fn_802C2944_00000AE4
lbl_fn_802C2944_00000AC4:
    lwz r0, 0x15c8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802C2944_00000AE4
    lfs f0, lbl_80884368
    fcmpo cr0, f1, f0
    bge lbl_fn_802C2944_00000AE4
    li r0, 0x1
    stw r0, 0x15b8(r31)
lbl_fn_802C2944_00000AE4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802C2AE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r5, lbl_8087F430
    lwz r0, 0x5694(r5)
    cmpwi r0, 0x0
    bne lbl_fn_802C2AE8_00000B64
    lwz r3, 0x5c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_802C2AE8_00000B64
    lwz r4, 0xc4(r3)
    cmpwi r4, 0x0
    ble lbl_fn_802C2AE8_00000B64
    cmpwi r5, 0x0
    beq lbl_fn_802C2AE8_00000B64
    addi r3, r5, 0x54f4
    bl fn_803B3B38
    cmpwi r3, 0x0
    beq lbl_fn_802C2AE8_00000B64
    lwz r4, 0x8(r3)
    mr r3, r31
    bl fn_80686A64
    li r3, 0x1
    b lbl_fn_802C2AE8_00000B68
lbl_fn_802C2AE8_00000B64:
    li r3, 0x0
lbl_fn_802C2AE8_00000B68:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802C2B68(void)
{
    nofralloc
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beqlr
    lwz r0, 0x15b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C2B68_00000BB8
    lfs f1, lbl_808842A8
    li r4, 0x0
    lfs f2, lbl_80884364
    li r5, 0x14a
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    b fn_80097C08
lbl_fn_802C2B68_00000BB8:
    lfs f1, lbl_808842A8
    li r4, 0x0
    lfs f2, lbl_80884364
    li r5, 0x14
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    b fn_80097C08
    blr
}

asm void fn_802C2BCC(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r4, r1, 0xec
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    lfs f31, lbl_808842A8
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stw r31, 0x1ec(r1)
    stw r30, 0x1e8(r1)
    stw r29, 0x1e4(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802C2BCC_000010F4
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0xe0
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_8088436C
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802C2BCC_00000E48
    addi r30, r1, 0xbc
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xe8(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0xc4(r1)
    bl fn_805F98D0
    lfs f2, 0xc4(r1)
    addi r31, r1, 0xc8
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884300
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xd0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802C2BCC_00000CDC
    lfs f3, 0xc8(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C2BCC_00000CD0
    lfs f0, lbl_80884304
    b lbl_fn_802C2BCC_00000CD4
lbl_fn_802C2BCC_00000CD0:
    lfs f0, lbl_80884308
lbl_fn_802C2BCC_00000CD4:
    stfs f0, 0xa8(r1)
    b lbl_fn_802C2BCC_00000CF0
lbl_fn_802C2BCC_00000CDC:
    frsp f2, f2
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xa8(r1)
lbl_fn_802C2BCC_00000CF0:
    lfs f0, 0xa8(r1)
    addi r3, r1, 0x168
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808842A8
    addi r4, r1, 0x98
    lfs f29, 0x170(r1)
    mr r5, r4
    lfs f30, 0x16c(r1)
    addi r3, r1, 0x198
    lfs f13, 0x168(r1)
    lfs f12, 0x180(r1)
    lfs f11, 0x17c(r1)
    lfs f10, 0x178(r1)
    lfs f9, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f7, 0x188(r1)
    lfs f6, 0x194(r1)
    lfs f5, 0x184(r1)
    lfs f4, 0x174(r1)
    lfs f0, lbl_808842AC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    stfs f13, 0x68(r1)
    stfs f30, 0x6c(r1)
    stfs f29, 0x70(r1)
    stfs f13, 0x198(r1)
    stfs f30, 0x19c(r1)
    stfs f29, 0x1a0(r1)
    stfs f10, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f10, 0x1a8(r1)
    stfs f11, 0x1ac(r1)
    stfs f12, 0x1b0(r1)
    stfs f7, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f7, 0x1b8(r1)
    stfs f8, 0x1bc(r1)
    stfs f9, 0x1c0(r1)
    stfs f4, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f4, 0x1a4(r1)
    stfs f5, 0x1b4(r1)
    stfs f6, 0x1c4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F9750
    lfs f2, 0xa0(r1)
    lfs f0, lbl_80884300
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C2BCC_00000E0C
    lfs f3, 0x9c(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C2BCC_00000DFC
    lfs f0, lbl_80884304
    b lbl_fn_802C2BCC_00000E00
lbl_fn_802C2BCC_00000DFC:
    lfs f0, lbl_80884308
lbl_fn_802C2BCC_00000E00:
    fneg f0, f0
    stfs f0, 0xa4(r1)
    b lbl_fn_802C2BCC_00000E20
lbl_fn_802C2BCC_00000E0C:
    lfs f1, 0x9c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa4(r1)
lbl_fn_802C2BCC_00000E20:
    lfs f2, lbl_808842A8
    addi r3, r1, 0xa4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xec
    stfs f2, 0xac(r1)
    stfs f2, 0xd0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf4(r1)
lbl_fn_802C2BCC_00000E48:
    lwz r0, 0x1594(r29)
    cmpwi r0, 0x0
    bne lbl_fn_802C2BCC_0000111C
    lfs f4, 0x530(r29)
    lfs f0, 0x14c0(r29)
    lfs f3, 0x528(r29)
    fsubs f5, f4, f0
    lfs f0, 0x14bc(r29)
    lfs f8, 0xe8(r1)
    fsubs f6, f3, f0
    lfs f7, 0xe0(r1)
    fmuls f0, f5, f5
    stfs f3, 0x18(r1)
    fmadds f1, f6, f6, f0
    stfs f4, 0x1c(r1)
    stfs f6, 0x10(r1)
    stfs f5, 0x14(r1)
    stfs f7, 0x8(r1)
    stfs f8, 0xc(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_808842F0
    fcmpo cr0, f3, f0
    ble lbl_fn_802C2BCC_00000EE4
    lfs f3, 0x14(r1)
    lfs f0, 0xc(r1)
    lfs f4, 0x10(r1)
    fmuls f5, f3, f0
    lfs f3, 0x8(r1)
    lfs f0, lbl_808842A8
    fmadds f3, f4, f3, f5
    fcmpo cr0, f3, f0
    ble lbl_fn_802C2BCC_00000EE4
    fmr f31, f0
    lwz r4, 0x1584(r29)
    lfs f1, lbl_808842B0
    mr r3, r29
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802C2BCC_00000EE4:
    lfs f0, lbl_8088436C
    fcmpo cr0, f31, f0
    bge lbl_fn_802C2BCC_0000111C
    lwz r5, 0x1584(r29)
    cmpwi r5, 0x0
    beq lbl_fn_802C2BCC_0000111C
    lfs f5, 0x530(r5)
    addi r3, r1, 0xd4
    lfs f0, 0x530(r29)
    mr r4, r3
    lfs f4, 0x528(r5)
    lfs f3, 0x528(r29)
    fsubs f5, f5, f0
    lfs f0, lbl_808842A8
    fsubs f3, f4, f3
    stfs f5, 0xdc(r1)
    stfs f3, 0xd4(r1)
    stfs f0, 0xd8(r1)
    bl fn_805F98D0
    lfs f2, 0xdc(r1)
    addi r3, r1, 0xd4
    lfs f0, lbl_80884300
    addi r30, r1, 0xb0
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f31, lbl_80884370
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802C2BCC_00000F84
    lfs f3, 0xb0(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C2BCC_00000F78
    lfs f0, lbl_80884304
    b lbl_fn_802C2BCC_00000F7C
lbl_fn_802C2BCC_00000F78:
    lfs f0, lbl_80884308
lbl_fn_802C2BCC_00000F7C:
    stfs f0, 0x60(r1)
    b lbl_fn_802C2BCC_00000F98
lbl_fn_802C2BCC_00000F84:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x60(r1)
lbl_fn_802C2BCC_00000F98:
    lfs f0, 0x60(r1)
    addi r3, r1, 0xf8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808842A8
    addi r4, r1, 0x50
    lfs f30, 0x100(r1)
    mr r5, r4
    lfs f29, 0xfc(r1)
    addi r3, r1, 0x128
    lfs f13, 0xf8(r1)
    lfs f12, 0x110(r1)
    lfs f11, 0x10c(r1)
    lfs f10, 0x108(r1)
    lfs f9, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f7, 0x118(r1)
    lfs f6, 0x124(r1)
    lfs f5, 0x114(r1)
    lfs f4, 0x104(r1)
    lfs f0, lbl_808842AC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f3, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f13, 0x20(r1)
    stfs f29, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f13, 0x128(r1)
    stfs f29, 0x12c(r1)
    stfs f30, 0x130(r1)
    stfs f10, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f10, 0x138(r1)
    stfs f11, 0x13c(r1)
    stfs f12, 0x140(r1)
    stfs f7, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f7, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f9, 0x150(r1)
    stfs f4, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f4, 0x134(r1)
    stfs f5, 0x144(r1)
    stfs f6, 0x154(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9750
    lfs f2, 0x58(r1)
    lfs f0, lbl_80884300
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C2BCC_000010B4
    lfs f3, 0x54(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C2BCC_000010A4
    lfs f0, lbl_80884304
    b lbl_fn_802C2BCC_000010A8
lbl_fn_802C2BCC_000010A4:
    lfs f0, lbl_80884308
lbl_fn_802C2BCC_000010A8:
    fneg f0, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_802C2BCC_000010C8
lbl_fn_802C2BCC_000010B4:
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x5c(r1)
lbl_fn_802C2BCC_000010C8:
    lfs f2, lbl_808842A8
    addi r3, r1, 0x5c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xec
    stfs f2, 0x64(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf4(r1)
    b lbl_fn_802C2BCC_0000111C
lbl_fn_802C2BCC_000010F4:
    cmpwi r0, 0x6
    bne lbl_fn_802C2BCC_0000111C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x4
    bne lbl_fn_802C2BCC_00001114
    stfs f31, 0x580(r3)
    stfs f31, 0x584(r3)
    b lbl_fn_802C2BCC_0000111C
lbl_fn_802C2BCC_00001114:
    bl fn_8013A258
    b lbl_fn_802C2BCC_00001134
lbl_fn_802C2BCC_0000111C:
    fmr f1, f31
    lfs f2, 0x568(r29)
    mr r3, r29
    addi r4, r1, 0xec
    li r5, 0x1
    bl fn_8013CB68
lbl_fn_802C2BCC_00001134:
    lwz r0, 0x224(r1)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_802C3154(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    stfd f30, 0x1d0(r1)
    psq_st f30, 0x1d8(r1), 0, 0
    stw r31, 0x1cc(r1)
    mr r31, r3
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    lwz r0, 0x1584(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C3154_000018CC
    bl fn_802C38E4
    cmpwi r3, 0x1
    beq lbl_fn_802C3154_000011D8
    cmpwi r3, 0x2
    beq lbl_fn_802C3154_0000127C
    cmpwi r3, 0x3
    beq lbl_fn_802C3154_000012F8
    cmpwi r3, 0x4
    beq lbl_fn_802C3154_00001310
    cmpwi r3, 0xa
    beq lbl_fn_802C3154_00001568
    cmpwi r3, 0x5
    beq lbl_fn_802C3154_00001848
    b lbl_fn_802C3154_000018B8
lbl_fn_802C3154_000011D8:
    li r0, 0x0
    stw r0, 0x1590(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r29, 0x1
    mr r3, r31
    li r4, 0x3
    stw r29, 0x58c(r31)
    bl fn_8016E970
    lwz r0, 0x1594(r31)
    li r3, -0x1
    lfs f0, lbl_808842AC
    cmpwi r0, 0x2
    stw r3, 0x158c(r31)
    stw r29, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bne lbl_fn_802C3154_0000124C
    lfs f1, lbl_808842A8
    addi r3, r31, 0xb0
    lfs f2, lbl_80884364
    li r4, 0x0
    li r5, 0x14a
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802C3154_00001270
lbl_fn_802C3154_0000124C:
    lfs f1, lbl_808842A8
    addi r3, r31, 0xb0
    lfs f2, lbl_80884364
    li r4, 0x0
    li r5, 0x14
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802C3154_00001270:
    li r0, 0x1
    stw r0, 0x15b4(r31)
    b lbl_fn_802C3154_000018B8
lbl_fn_802C3154_0000127C:
    li r29, 0x0
    stw r29, 0x1590(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x2
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808842AC
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_808842A8
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80884364
    li r5, 0x156
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, 0x15c4(r31)
    stw r29, 0x15b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x15c4(r31)
    b lbl_fn_802C3154_000018B8
lbl_fn_802C3154_000012F8:
    mr r3, r31
    bl fn_802C4858
    lwz r3, 0x15c4(r31)
    addi r0, r3, 0x1
    stw r0, 0x15c4(r31)
    b lbl_fn_802C3154_000018B8
lbl_fn_802C3154_00001310:
    li r0, 0x0
    stw r0, 0x1590(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_808842AC
    li r5, 0x4
    lfs f0, lbl_80884324
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808842A8
    li r4, 0x0
    stw r5, 0x58c(r31)
    li r5, 0x14d
    lfs f2, lbl_80884364
    li r6, 0x0
    stw r0, 0x3fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f3, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r4, 0x1584(r31)
    addi r3, r1, 0x80
    lfs f0, 0x530(r31)
    addi r29, r1, 0x8c
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f5, f5, f4
    stfs f2, 0x88(r1)
    fsubs f4, f3, f0
    lfs f0, lbl_80884300
    frsp f3, f2
    stfs f5, 0x84(r1)
    stfs f4, 0x80(r1)
    fabs f4, f3
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f4, f4
    stfs f2, 0x94(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_802C3154_000013EC
    lfs f3, 0x8c(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C3154_000013E0
    lfs f0, lbl_80884304
    b lbl_fn_802C3154_000013E4
lbl_fn_802C3154_000013E0:
    lfs f0, lbl_80884308
lbl_fn_802C3154_000013E4:
    stfs f0, 0x9c(r1)
    b lbl_fn_802C3154_00001400
lbl_fn_802C3154_000013EC:
    fmr f2, f3
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x9c(r1)
lbl_fn_802C3154_00001400:
    lfs f0, 0x9c(r1)
    addi r3, r1, 0x190
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808842A8
    addi r4, r1, 0xa4
    lfs f4, 0x198(r1)
    mr r5, r4
    lfs f5, 0x194(r1)
    addi r3, r1, 0x150
    lfs f6, 0x190(r1)
    lfs f7, 0x1a8(r1)
    lfs f8, 0x1a4(r1)
    lfs f9, 0x1a0(r1)
    lfs f10, 0x1b8(r1)
    lfs f11, 0x1b4(r1)
    lfs f12, 0x1b0(r1)
    lfs f13, 0x1bc(r1)
    lfs f31, 0x1ac(r1)
    lfs f30, 0x19c(r1)
    lfs f0, lbl_808842AC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0x180(r1)
    stfs f3, 0x184(r1)
    stfs f3, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f6, 0xd4(r1)
    stfs f5, 0xd8(r1)
    stfs f4, 0xdc(r1)
    stfs f6, 0x150(r1)
    stfs f5, 0x154(r1)
    stfs f4, 0x158(r1)
    stfs f9, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f7, 0xd0(r1)
    stfs f9, 0x160(r1)
    stfs f8, 0x164(r1)
    stfs f7, 0x168(r1)
    stfs f12, 0xbc(r1)
    stfs f11, 0xc0(r1)
    stfs f10, 0xc4(r1)
    stfs f12, 0x170(r1)
    stfs f11, 0x174(r1)
    stfs f10, 0x178(r1)
    stfs f30, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f13, 0xb8(r1)
    stfs f30, 0x15c(r1)
    stfs f31, 0x16c(r1)
    stfs f13, 0x17c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F9750
    lfs f2, 0xac(r1)
    lfs f0, lbl_80884300
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C3154_0000151C
    lfs f3, 0xa8(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C3154_0000150C
    lfs f0, lbl_80884304
    b lbl_fn_802C3154_00001510
lbl_fn_802C3154_0000150C:
    lfs f0, lbl_80884308
lbl_fn_802C3154_00001510:
    fneg f0, f0
    stfs f0, 0x98(r1)
    b lbl_fn_802C3154_00001530
lbl_fn_802C3154_0000151C:
    lfs f1, 0xa8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x98(r1)
lbl_fn_802C3154_00001530:
    addi r3, r1, 0x98
    lfs f2, lbl_808842A8
    psq_l f1, 0x0(r3), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r29), 0, 0
    lwz r3, 0x15c4(r31)
    lfs f0, 0x90(r1)
    addi r0, r3, 0x1
    stfs f2, 0xa0(r1)
    stfs f2, 0x94(r1)
    stfs f0, 0x538(r31)
    stw r4, 0x15b4(r31)
    stw r0, 0x15c4(r31)
    b lbl_fn_802C3154_000018B8
lbl_fn_802C3154_00001568:
    li r0, 0x0
    stw r0, 0x1590(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808842AC
    li r4, 0xa
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_808842A8
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80884364
    li r5, 0x14a
    stw r0, 0x3fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    addi r4, r31, 0x14b0
    lfs f2, 0x14b8(r31)
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r0, -0x1
    lfs f0, 0x530(r31)
    addi r3, r1, 0x14
    lfs f5, 0xc(r1)
    lfs f4, 0x52c(r31)
    fsubs f6, f2, f0
    lfs f3, 0x8(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stw r0, 0x158c(r31)
    fsubs f0, f3, f0
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9940
    stfs f1, 0x15a4(r31)
    addi r3, r1, 0x14
    addi r30, r1, 0x2c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x1c(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    lfs f2, 0x34(r1)
    addi r29, r1, 0x20
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884300
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x28(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802C3154_00001684
    lfs f3, 0x20(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C3154_00001678
    lfs f0, lbl_80884304
    b lbl_fn_802C3154_0000167C
lbl_fn_802C3154_00001678:
    lfs f0, lbl_80884308
lbl_fn_802C3154_0000167C:
    stfs f0, 0x3c(r1)
    b lbl_fn_802C3154_00001698
lbl_fn_802C3154_00001684:
    frsp f2, f2
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x3c(r1)
lbl_fn_802C3154_00001698:
    lfs f0, 0x3c(r1)
    addi r3, r1, 0x120
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808842A8
    addi r4, r1, 0x44
    lfs f4, 0x128(r1)
    mr r5, r4
    lfs f5, 0x124(r1)
    addi r3, r1, 0xe0
    lfs f6, 0x120(r1)
    lfs f7, 0x138(r1)
    lfs f8, 0x134(r1)
    lfs f9, 0x130(r1)
    lfs f10, 0x148(r1)
    lfs f11, 0x144(r1)
    lfs f12, 0x140(r1)
    lfs f13, 0x14c(r1)
    lfs f30, 0x13c(r1)
    lfs f31, 0x12c(r1)
    lfs f0, lbl_808842AC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f6, 0xe0(r1)
    stfs f5, 0xe4(r1)
    stfs f4, 0xe8(r1)
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f9, 0xf0(r1)
    stfs f8, 0xf4(r1)
    stfs f7, 0xf8(r1)
    stfs f12, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f12, 0x100(r1)
    stfs f11, 0x104(r1)
    stfs f10, 0x108(r1)
    stfs f31, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f31, 0xec(r1)
    stfs f30, 0xfc(r1)
    stfs f13, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80884300
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C3154_000017B4
    lfs f3, 0x48(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C3154_000017A4
    lfs f0, lbl_80884304
    b lbl_fn_802C3154_000017A8
lbl_fn_802C3154_000017A4:
    lfs f0, lbl_80884308
lbl_fn_802C3154_000017A8:
    fneg f0, f0
    stfs f0, 0x38(r1)
    b lbl_fn_802C3154_000017C8
lbl_fn_802C3154_000017B4:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x38(r1)
lbl_fn_802C3154_000017C8:
    addi r3, r1, 0x38
    lfs f2, lbl_808842A8
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80746C70@ha
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x538(r31)
    lfs f3, 0x24(r1)
    stfs f2, 0x28(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884374
    stfs f2, 0x40(r1)
    lfd f2, lbl_80746C70@l(r3)
    fmuls f1, f0, f3
    stfs f3, 0x15a8(r31)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884378
    fcmpo cr0, f3, f0
    ble lbl_fn_802C3154_0000181C
    lfs f0, lbl_8088437C
    fsubs f3, f3, f0
lbl_fn_802C3154_0000181C:
    lfs f0, lbl_80884380
    fcmpo cr0, f3, f0
    bge lbl_fn_802C3154_00001830
    lfs f0, lbl_8088437C
    fadds f3, f3, f0
lbl_fn_802C3154_00001830:
    li r3, 0x1
    li r0, 0x0
    stfs f3, 0x15a8(r31)
    stw r3, 0x15b4(r31)
    stw r0, 0x1590(r31)
    b lbl_fn_802C3154_000018B8
lbl_fn_802C3154_00001848:
    li r29, 0x0
    stw r29, 0x1590(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808842AC
    li r0, 0x5
    stw r3, 0x590(r31)
    li r30, 0x1
    lfs f1, lbl_808842A8
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80884364
    li r5, 0x145
    stw r30, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, 0x15c0(r31)
    li r4, 0x1e
    stw r30, 0x15b4(r31)
    addi r0, r3, 0x1
    stw r4, 0x15bc(r31)
    stw r0, 0x15c0(r31)
    stw r29, 0x15b8(r31)
lbl_fn_802C3154_000018B8:
    lwz r0, 0x15c4(r31)
    cmpwi r0, 0xa
    blt lbl_fn_802C3154_000018CC
    li r0, 0x1
    stw r0, 0x1700(r31)
lbl_fn_802C3154_000018CC:
    lwz r0, 0x1f4(r1)
    psq_l f31, 0x1e8(r1), 0, 0
    lfd f31, 0x1e0(r1)
    psq_l f30, 0x1d8(r1), 0, 0
    lfd f30, 0x1d0(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_802C38E4(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    li r31, -0x1
    stw r30, 0x128(r1)
    mr r30, r3
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    lwz r0, 0x15b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C38E4_0000196C
    lwz r0, 0x15bc(r3)
    cmpwi r0, 0x0
    bge lbl_fn_802C38E4_0000196C
    lwz r0, 0x1594(r3)
    cmpwi r0, 0x2
    beq lbl_fn_802C38E4_0000196C
    lwz r0, 0x15c0(r3)
    cmpwi r0, 0x2
    bge lbl_fn_802C38E4_0000196C
    li r31, 0x5
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_0000196C:
    lwz r5, 0x1584(r3)
    cmpwi r5, 0x0
    beq lbl_fn_802C38E4_00001D54
    addi r4, r1, 0x98
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f5, 0x9c(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8c
    lfs f3, 0x98(r1)
    fsubs f4, f5, f4
    stfs f2, 0xa0(r1)
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0x94(r1)
    bl fn_805F9940
    addi r3, r1, 0x8c
    addi r29, r1, 0x50
    fmr f31, f1
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x94(r1)
    mr r3, r29
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r29
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r28, r1, 0x5c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884300
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802C38E4_00001A34
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C38E4_00001A28
    lfs f0, lbl_80884304
    b lbl_fn_802C38E4_00001A2C
lbl_fn_802C38E4_00001A28:
    lfs f0, lbl_80884308
lbl_fn_802C38E4_00001A2C:
    stfs f0, 0x48(r1)
    b lbl_fn_802C38E4_00001A48
lbl_fn_802C38E4_00001A34:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802C38E4_00001A48:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808842A8
    addi r4, r1, 0x38
    lfs f29, 0xb0(r1)
    mr r5, r4
    lfs f30, 0xac(r1)
    addi r3, r1, 0xd8
    lfs f13, 0xa8(r1)
    lfs f12, 0xc0(r1)
    lfs f11, 0xbc(r1)
    lfs f10, 0xb8(r1)
    lfs f9, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f7, 0xc8(r1)
    lfs f6, 0xd4(r1)
    lfs f5, 0xc4(r1)
    lfs f4, 0xb4(r1)
    lfs f0, lbl_808842AC
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xd8(r1)
    stfs f30, 0xdc(r1)
    stfs f29, 0xe0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f12, 0xf0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xf8(r1)
    stfs f8, 0xfc(r1)
    stfs f9, 0x100(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xe4(r1)
    stfs f5, 0xf4(r1)
    stfs f6, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884300
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C38E4_00001B64
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C38E4_00001B54
    lfs f0, lbl_80884304
    b lbl_fn_802C38E4_00001B58
lbl_fn_802C38E4_00001B54:
    lfs f0, lbl_80884308
lbl_fn_802C38E4_00001B58:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802C38E4_00001B78
lbl_fn_802C38E4_00001B64:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802C38E4_00001B78:
    addi r3, r1, 0x44
    lfs f2, lbl_808842A8
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80746C70@ha
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x538(r30)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884374
    stfs f2, 0x4c(r1)
    lfd f2, lbl_80746C70@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884378
    fcmpo cr0, f3, f0
    ble lbl_fn_802C38E4_00001BC8
    lfs f0, lbl_8088437C
    fsubs f3, f3, f0
lbl_fn_802C38E4_00001BC8:
    lfs f0, lbl_80884380
    fcmpo cr0, f3, f0
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r1, 0x80
    lfs f2, 0x530(r30)
    addi r6, r1, 0x74
    stfs f2, 0x88(r1)
    li r4, 0x0
    lfs f4, lbl_808842E0
    lis r7, 0x8000
    psq_st f1, 0x0(r5), 0, 0
    li r8, 0x0
    lwz r3, lbl_8087EE98
    li r9, 0x0
    lwz r10, 0x1584(r30)
    lfs f0, 0x84(r1)
    lfs f2, 0x530(r10)
    psq_l f1, 0x528(r10), 0, 0
    fadds f3, f0, f4
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x78(r1)
    stfs f2, 0x7c(r1)
    fadds f0, f0, f4
    stfs f3, 0x84(r1)
    stfs f0, 0x78(r1)
    bl fn_8004ECC0
    lwz r4, 0x1594(r30)
    cntlzw r0, r3
    srwi r3, r0, 5
    cmpwi r4, 0x0
    beq lbl_fn_802C38E4_00001C58
    cmpwi r4, 0x1
    beq lbl_fn_802C38E4_00001D00
    cmpwi r4, 0x2
    beq lbl_fn_802C38E4_00001D50
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001C58:
    lfs f0, lbl_80884384
    fcmpo cr0, f31, f0
    bge lbl_fn_802C38E4_00001CA8
    lwz r0, 0x15b4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C38E4_00001CA8
    lwz r0, 0x1700(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C38E4_00001CA0
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    li r31, 0x4
    subf. r0, r4, r0
    bne lbl_fn_802C38E4_00001D54
    li r31, 0x2
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001CA0:
    li r31, 0x2
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001CA8:
    lwz r0, 0x1700(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C38E4_00001CD4
    lfs f0, lbl_80884384
    fcmpo cr0, f31, f0
    bge lbl_fn_802C38E4_00001CD4
    lwz r0, 0x15b4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C38E4_00001CD4
    li r31, 0x4
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001CD4:
    lwz r0, 0x15b4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C38E4_00001CF8
    cmpwi r3, 0x0
    beq lbl_fn_802C38E4_00001CF0
    li r31, 0x3
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001CF0:
    li r31, 0x2
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001CF8:
    li r31, 0x1
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001D00:
    lfs f0, lbl_80884384
    fcmpo cr0, f31, f0
    bge lbl_fn_802C38E4_00001D20
    lwz r0, 0x15b4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C38E4_00001D20
    li r31, 0x4
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001D20:
    lfs f0, lbl_80884328
    fcmpo cr0, f31, f0
    bge lbl_fn_802C38E4_00001D48
    cmpwi r3, 0x0
    beq lbl_fn_802C38E4_00001D48
    lwz r0, 0x15b4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C38E4_00001D48
    li r31, 0x3
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001D48:
    li r31, 0xa
    b lbl_fn_802C38E4_00001D54
lbl_fn_802C38E4_00001D50:
    li r31, 0xa
lbl_fn_802C38E4_00001D54:
    cmpwi r31, 0x4
    bne lbl_fn_802C38E4_00001DD0
    lwz r3, lbl_8087F430
    li r4, 0x13
    lwz r28, 0x10d8(r3)
    mr r3, r28
    bl fn_803C17FC
    cmpwi r3, 0x0
    beq lbl_fn_802C38E4_00001DD0
    subi r0, r3, 0x1
    lwz r4, 0x9c(r28)
    mulli r0, r0, 0x30
    lfs f6, 0x530(r30)
    lfs f4, 0x52c(r30)
    addi r3, r1, 0x68
    lfs f0, 0x528(r30)
    add r4, r4, r0
    lfs f7, 0xc(r4)
    lfs f5, 0x8(r4)
    lfs f3, 0x4(r4)
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0x70(r1)
    stfs f0, 0x68(r1)
    stfs f4, 0x6c(r1)
    bl fn_805F9940
    lfs f0, lbl_80884388
    fcmpo cr0, f1, f0
    bge lbl_fn_802C38E4_00001DD0
    li r31, 0x3
lbl_fn_802C38E4_00001DD0:
    psq_l f31, 0x158(r1), 0, 0
    mr r3, r31
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
