#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8006F72C(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_8016DAB0(void);
extern void fn_801F3FF8(void);
extern void fn_801F4CB4(void);
extern void fn_801F5644(void);
extern void fn_801F583C(void);
extern void fn_801F5BC8(void);
extern void fn_801F6350(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80211480(void);
extern void fn_80219E6C(void);
extern void fn_80370B78(void);
extern void fn_80370BD0(void);
extern void fn_80370C2C(void);
extern void fn_803E746C(void);
extern void fn_80444CF8(void);
extern void fn_804DA47C(void);
extern void fn_80686A48(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_8078C554[];
extern u8 lbl_80750618[];
extern u8 lbl_80750650[];
extern u8 lbl_807506A0[];
extern u8 lbl_807C8628[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F494;
extern u32 lbl_8087F610;
extern u32 lbl_808813D0;
extern u32 lbl_80885D58;
extern u32 lbl_80885D5C;
extern u32 lbl_80885D60;
extern u32 lbl_80885DE8;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E28;
extern u32 lbl_80885E54;
extern u32 lbl_80885E68;
extern u32 lbl_80885EE4;
extern u32 lbl_80885EF0;
extern u32 lbl_80885F04;
extern u32 lbl_80885F08;

/* Function declarations */
void fn_803E58CC(void);
void fn_803E58E4(void);
void fn_803E5940(void);
void fn_803E598C(void);
void fn_803E5C60(void);
void fn_803E5E64(void);
void fn_803E627C(void);
void fn_803E63D0(void);
void fn_803E644C(void);
void fn_803E64F0(void);
void fn_803E656C(void);
void fn_803E65F8(void);
void fn_803E668C(void);
void fn_803E6850(void);
void fn_803E6890(void);
void fn_803E6ADC(void);
void fn_803E6BB4(void);
void fn_803E6BF0(void);
void fn_803E6C88(void);
void fn_803E6CBC(void);
void fn_803E6D4C(void);

asm void fn_803E58CC(void)
{
    nofralloc
    lwz r3, 0xdc0(r3)
    cmpwi r3, 0x0
    beqlr
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
    blr
}

asm void fn_803E58E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0xdc4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803E58E4_00000064
    lis r3, lbl_80750618@ha
    lfs f0, lbl_80885D58
    addi r3, r3, lbl_80750618@l
    stfs f0, 0x100(r4)
    lwz r4, 0x30(r3)
    addi r3, r1, 0x8
    lfs f1, lbl_80885D60
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803E58E4_00000064:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E5940(void)
{
    nofralloc
    lwz r4, 0xdc4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803E5940_000000B8
    lwz r0, 0x38(r4)
    li r3, 0x0
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beqlr
    lfs f1, 0xa0(r4)
    lfs f0, 0x100(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    bnelr
    li r3, 0x1
    blr
lbl_fn_803E5940_000000B8:
    li r3, 0x0
    blr
}

asm void fn_803E598C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    blt lbl_fn_803E598C_00000374
    cmpwi r4, 0x3
    bge lbl_fn_803E598C_00000374
    slwi r0, r4, 2
    add r30, r3, r0
    lwz r0, 0x2550(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803E598C_00000104
    b lbl_fn_803E598C_00000374
lbl_fn_803E598C_00000104:
    lfs f0, lbl_80885D58
    li r0, -0x1
    stw r0, 0x255c(r3)
    stfs f0, 0x2560(r3)
    lwz r7, 0x2550(r3)
    cmpwi r7, 0x0
    beq lbl_fn_803E598C_00000128
    lfs f0, 0xa0(r7)
    stfs f0, 0x100(r7)
lbl_fn_803E598C_00000128:
    lwz r7, 0x2554(r3)
    cmpwi r7, 0x0
    beq lbl_fn_803E598C_0000013C
    lfs f0, 0xa0(r7)
    stfs f0, 0x100(r7)
lbl_fn_803E598C_0000013C:
    lwz r7, 0x2558(r3)
    cmpwi r7, 0x0
    beq lbl_fn_803E598C_00000150
    lfs f0, 0xa0(r7)
    stfs f0, 0x100(r7)
lbl_fn_803E598C_00000150:
    xoris r5, r5, 0x8000
    lis r0, 0x4330
    lis r7, lbl_80750650@ha
    stw r5, 0xc(r1)
    lfd f2, lbl_80750650@l(r7)
    cmpwi r4, 0x2
    stw r0, 0x8(r1)
    lfs f0, lbl_80885D58
    lfd f1, 0x8(r1)
    stw r4, 0x255c(r3)
    fsubs f1, f1, f2
    stfs f1, 0x2560(r3)
    lwz r3, 0x2550(r30)
    stfs f0, 0x100(r3)
    bne lbl_fn_803E598C_00000364
    cmpwi r6, 0x0
    ble lbl_fn_803E598C_000001A0
    mr r3, r6
    bl fn_80219E6C
    b lbl_fn_803E598C_000001A4
lbl_fn_803E598C_000001A0:
    li r3, 0x0
lbl_fn_803E598C_000001A4:
    cmpwi r3, 0x0
    beq lbl_fn_803E598C_00000364
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1791
    beq lbl_fn_803E598C_000002BC
    bge lbl_fn_803E598C_000001EC
    cmpwi r0, 0x177f
    beq lbl_fn_803E598C_00000268
    bge lbl_fn_803E598C_000001E0
    cmpwi r0, 0x1774
    beq lbl_fn_803E598C_00000214
    bge lbl_fn_803E598C_00000310
    cmpwi r0, 0x6c2
    beq lbl_fn_803E598C_000002F4
    b lbl_fn_803E598C_00000310
lbl_fn_803E598C_000001E0:
    cmpwi r0, 0x1788
    beq lbl_fn_803E598C_000002D8
    b lbl_fn_803E598C_00000310
lbl_fn_803E598C_000001EC:
    cmpwi r0, 0x179c
    beq lbl_fn_803E598C_00000284
    bge lbl_fn_803E598C_00000208
    cmpwi r0, 0x179a
    beq lbl_fn_803E598C_00000230
    bge lbl_fn_803E598C_0000024C
    b lbl_fn_803E598C_00000310
lbl_fn_803E598C_00000208:
    cmpwi r0, 0x179f
    beq lbl_fn_803E598C_000002A0
    b lbl_fn_803E598C_00000310
lbl_fn_803E598C_00000214:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xb3c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_00000228
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_00000228:
    la r28, lbl_808813D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_00000230:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xb44(r3)
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_00000244
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_00000244:
    la r28, lbl_808813D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_0000024C:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xb4c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_00000260
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_00000260:
    la r28, lbl_808813D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_00000268:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xb54(r3)
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_0000027C
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_0000027C:
    la r28, lbl_808813D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_00000284:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xe44(r3)
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_00000298
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_00000298:
    la r28, lbl_808813D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_000002A0:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xe4c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_000002B4
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_000002B4:
    la r28, lbl_808813D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_000002BC:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xe54(r3)
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_000002D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_000002D0:
    la r28, lbl_808813D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_000002D8:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xe5c(r3)
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_000002EC
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_000002EC:
    la r28, lbl_808813D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_000002F4:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xe84(r3)
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_00000308
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_00000308:
    la r28, lbl_808813D0
    b lbl_fn_803E598C_00000314
lbl_fn_803E598C_00000310:
    lwz r28, 0x8(r3)
lbl_fn_803E598C_00000314:
    cmpwi r28, 0x0
    beq lbl_fn_803E598C_00000364
    lwz r4, 0x2550(r30)
    lis r31, lbl_807506A0@ha
    addi r31, r31, lbl_807506A0@l
    addi r3, r31, 0x159e
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r4, 0x2550(r30)
    addi r3, r31, 0x1130
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
lbl_fn_803E598C_00000364:
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_803E598C_00000374
    bl fn_804DA47C
lbl_fn_803E598C_00000374:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E5C60(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r4
    beq lbl_fn_803E5C60_00000578
    lwz r0, 0x254c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803E5C60_000003D0
    b lbl_fn_803E5C60_00000578
lbl_fn_803E5C60_000003D0:
    lwz r12, 0x0(r4)
    addi r3, r1, 0x18
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0xc
    addi r5, r1, 0x18
    bl fn_800BFAC8
    lfs f0, lbl_80885D58
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_803E5C60_00000578
    lfs f0, lbl_80885D60
    fcmpo cr0, f1, f0
    bge lbl_fn_803E5C60_00000578
    lwz r31, 0x254c(r31)
    mr r3, r30
    bl fn_8016DAB0
    lwz r0, lbl_8087F494
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    mr r6, r3
    cmpwi r0, 0x0
    mr r3, r31
    addi r4, r4, 0x1122
    beq lbl_fn_803E5C60_00000460
    lis r5, 0x8889
    subi r0, r5, 0x7777
    mulhw r0, r0, r6
    add r0, r0, r6
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r5, r0, r5
    addi r5, r5, 0x1
    b lbl_fn_803E5C60_00000480
lbl_fn_803E5C60_00000460:
    lis r5, 0x8889
    subi r0, r5, 0x7777
    mulhw r0, r0, r6
    add r0, r0, r6
    srawi r0, r0, 4
    srwi r5, r0, 31
    add r5, r0, r5
    addi r5, r5, 0x1
lbl_fn_803E5C60_00000480:
    li r6, 0x0
    bl fn_801F4CB4
    mr r3, r30
    bl fn_8016DAB0
    lwz r0, lbl_8087F494
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    mr r6, r3
    cmpwi r0, 0x0
    mr r3, r31
    addi r4, r4, 0x1130
    beq lbl_fn_803E5C60_000004D4
    lis r5, 0x8889
    subi r0, r5, 0x7777
    mulhw r0, r0, r6
    add r0, r0, r6
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r5, r0, r5
    addi r5, r5, 0x1
    b lbl_fn_803E5C60_000004F4
lbl_fn_803E5C60_000004D4:
    lis r5, 0x8889
    subi r0, r5, 0x7777
    mulhw r0, r0, r6
    add r0, r0, r6
    srawi r0, r0, 4
    srwi r5, r0, 31
    add r5, r0, r5
    addi r5, r5, 0x1
lbl_fn_803E5C60_000004F4:
    li r6, 0x0
    bl fn_801F4CB4
    lis r30, lbl_807506A0@ha
    lfs f31, 0xc(r1)
    addi r30, r30, lbl_807506A0@l
    addi r3, r30, 0x1215
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x0
    bl fn_801FED24
    lfs f31, 0x10(r1)
    addi r3, r30, 0x1215
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x1
    bl fn_801FED24
    lis r3, lbl_80750618@ha
    lfs f0, lbl_80885D58
    addi r3, r3, lbl_80750618@l
    stfs f0, 0x100(r31)
    lwz r4, 0x24(r3)
    addi r3, r1, 0x8
    lfs f1, lbl_80885DFC
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803E5C60_00000578:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803E5E64(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r30, r3
    mr r27, r4
    mr r29, r5
    mr r28, r6
    ble lbl_fn_803E5E64_000005D4
    mr r3, r27
    bl fn_80211480
    mr r31, r3
    b lbl_fn_803E5E64_000005D8
lbl_fn_803E5E64_000005D4:
    li r31, 0x0
lbl_fn_803E5E64_000005D8:
    cmpwi r31, 0x0
    beq lbl_fn_803E5E64_00000998
    cmpwi r29, 0x0
    beq lbl_fn_803E5E64_00000998
    lwz r3, 0x64(r31)
    lwz r6, 0xb4(r31)
    subi r0, r3, 0x2
    cntlzw r0, r0
    cmpwi r6, 0x0
    srwi r4, r0, 5
    beq lbl_fn_803E5E64_000008E4
    lfs f0, 0xb8(r31)
    cmplwi r6, 0xb
    fctiwz f0, f0
    stfd f0, 0x208(r1)
    lwz r5, 0x20c(r1)
    bgt lbl_fn_803E5E64_000008F8
    lis r3, jumptable_8078C554@ha
    slwi r0, r6, 2
    addi r3, r3, jumptable_8078C554@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_00000664
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7d4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_00000654
    b lbl_fn_803E5E64_00000658
lbl_fn_803E5E64_00000654:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000658:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
lbl_fn_803E5E64_00000664:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7a4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_0000067C
    b lbl_fn_803E5E64_00000680
lbl_fn_803E5E64_0000067C:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000680:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_000006BC
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_000006AC
    b lbl_fn_803E5E64_000006B0
lbl_fn_803E5E64_000006AC:
    la r4, lbl_808813D0
lbl_fn_803E5E64_000006B0:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
lbl_fn_803E5E64_000006BC:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7ac(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_000006D4
    b lbl_fn_803E5E64_000006D8
lbl_fn_803E5E64_000006D4:
    la r4, lbl_808813D0
lbl_fn_803E5E64_000006D8:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_00000714
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7e4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_00000704
    b lbl_fn_803E5E64_00000708
lbl_fn_803E5E64_00000704:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000708:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
lbl_fn_803E5E64_00000714:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7b4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_0000072C
    b lbl_fn_803E5E64_00000730
lbl_fn_803E5E64_0000072C:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000730:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_0000076C
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7ec(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_0000075C
    b lbl_fn_803E5E64_00000760
lbl_fn_803E5E64_0000075C:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000760:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
lbl_fn_803E5E64_0000076C:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7bc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_00000784
    b lbl_fn_803E5E64_00000788
lbl_fn_803E5E64_00000784:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000788:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_000007C4
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7f4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_000007B4
    b lbl_fn_803E5E64_000007B8
lbl_fn_803E5E64_000007B4:
    la r4, lbl_808813D0
lbl_fn_803E5E64_000007B8:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
lbl_fn_803E5E64_000007C4:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7c4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_000007DC
    b lbl_fn_803E5E64_000007E0
lbl_fn_803E5E64_000007DC:
    la r4, lbl_808813D0
lbl_fn_803E5E64_000007E0:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_0000081C
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7cc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_0000080C
    b lbl_fn_803E5E64_00000810
lbl_fn_803E5E64_0000080C:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000810:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
lbl_fn_803E5E64_0000081C:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x79c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_00000834
    b lbl_fn_803E5E64_00000838
lbl_fn_803E5E64_00000834:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000838:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x7fc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_0000085C
    b lbl_fn_803E5E64_00000860
lbl_fn_803E5E64_0000085C:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000860:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x804(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_00000884
    b lbl_fn_803E5E64_00000888
lbl_fn_803E5E64_00000884:
    la r4, lbl_808813D0
lbl_fn_803E5E64_00000888:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x80c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803E5E64_000008AC
    b lbl_fn_803E5E64_000008B0
lbl_fn_803E5E64_000008AC:
    la r4, lbl_808813D0
lbl_fn_803E5E64_000008B0:
    xoris r5, r5, 0x8000
    lis r0, 0x4330
    lis r6, lbl_80750650@ha
    stw r5, 0x20c(r1)
    lfd f2, lbl_80750650@l(r6)
    stw r0, 0x208(r1)
    lfs f0, lbl_80885E68
    lfd f1, 0x208(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    crset 6
    bl fn_800DD3FC
    b lbl_fn_803E5E64_000008F8
lbl_fn_803E5E64_000008E4:
    mr r4, r27
    mr r5, r29
    mr r6, r28
    addi r3, r1, 0x8
    bl fn_80444CF8
lbl_fn_803E5E64_000008F8:
    lwz r3, 0xdb8(r30)
    lis r29, lbl_807506A0@ha
    lfs f0, lbl_80885D58
    addi r29, r29, lbl_807506A0@l
    stfs f0, 0x100(r3)
    addi r3, r29, 0x15a9
    lwz r4, 0xdb8(r30)
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x8
    bl fn_801FEE08
    lwz r4, 0xdb8(r30)
    addi r3, r29, 0x11ab
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x8
    bl fn_801FEE08
    lwz r4, 0xdb8(r30)
    addi r3, r29, 0x14d4
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x8
    bl fn_801FEE08
    lbz r0, 0xc2(r31)
    extsb. r0, r0
    ble lbl_fn_803E5E64_00000998
    lha r3, 0xbc(r31)
    subi r0, r3, 0x2
    clrlwi r0, r0, 16
    cmplwi r0, 0x1
    bgt lbl_fn_803E5E64_00000998
    lwz r3, 0xdbc(r30)
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
lbl_fn_803E5E64_00000998:
    addi r11, r1, 0x230
    bl _restgpr_27
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_803E627C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    mr r30, r4
    lwz r0, 0x262c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803E627C_00000A2C
    lis r4, lbl_807506A0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807506A0@l
    subi r5, r30, 0x1
    addi r4, r4, 0x15b5
    crclr 6
    bl sprintf
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x262c(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, 0x262c(r31)
    li r0, 0x12
    lwz r3, 0xfc(r4)
    rlwinm r3, r3, 0, 4, 2
    stw r3, 0xfc(r4)
    lwz r3, 0x262c(r31)
    stw r0, 0x108(r3)
lbl_fn_803E627C_00000A2C:
    lwz r0, 0x2630(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803E627C_00000A8C
    lis r4, lbl_807506A0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807506A0@l
    subi r5, r30, 0x1
    addi r4, r4, 0x15b5
    crclr 6
    bl sprintf
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x2630(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, 0x2630(r31)
    li r0, 0xf
    lwz r3, 0xfc(r4)
    rlwinm r3, r3, 0, 4, 2
    stw r3, 0xfc(r4)
    lwz r3, 0x2630(r31)
    stw r0, 0x108(r3)
lbl_fn_803E627C_00000A8C:
    lwz r0, 0x2634(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803E627C_00000AEC
    lis r4, lbl_807506A0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807506A0@l
    subi r5, r30, 0x1
    addi r4, r4, 0x15dc
    crclr 6
    bl sprintf
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x2634(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, 0x2634(r31)
    li r0, 0xf
    lwz r3, 0xfc(r4)
    oris r3, r3, 0x1000
    stw r3, 0xfc(r4)
    lwz r3, 0x2634(r31)
    stw r0, 0x108(r3)
lbl_fn_803E627C_00000AEC:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803E63D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x262c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803E63D0_00000B34
    mr r3, r0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x262c(r31)
lbl_fn_803E63D0_00000B34:
    lwz r3, 0x2630(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803E63D0_00000B4C
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x2630(r31)
lbl_fn_803E63D0_00000B4C:
    lwz r3, 0x2634(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803E63D0_00000B64
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x2634(r31)
lbl_fn_803E63D0_00000B64:
    li r0, 0x0
    stw r0, 0x2638(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E644C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x262c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803E644C_00000BB0
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803E644C_00000BB0
    li r3, 0x1
    b lbl_fn_803E644C_00000C14
lbl_fn_803E644C_00000BB0:
    lwz r4, 0x2630(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803E644C_00000BD4
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803E644C_00000BD4
    li r3, 0x1
    b lbl_fn_803E644C_00000C14
lbl_fn_803E644C_00000BD4:
    lwz r3, 0x2634(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803E644C_00000BF8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803E644C_00000BF8
    li r3, 0x1
    b lbl_fn_803E644C_00000C14
lbl_fn_803E644C_00000BF8:
    lwz r3, lbl_8087F430
    bl fn_80370C2C
    cmpwi r3, 0x0
    bne lbl_fn_803E644C_00000C10
    li r3, 0x1
    b lbl_fn_803E644C_00000C14
lbl_fn_803E644C_00000C10:
    li r3, 0x0
lbl_fn_803E644C_00000C14:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E64F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x262c(r3)
    bl fn_800D246C
    lwz r3, 0x262c(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x2630(r31)
    bl fn_800D246C
    lwz r3, 0x2630(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x2634(r31)
    bl fn_800D246C
    lwz r3, 0x2634(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E656C(void)
{
    nofralloc
    lwz r5, 0x262c(r3)
    cmpwi r5, 0x0
    beqlr
    lwz r0, 0x2630(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x2634(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803E656C_00000CC8
    blr
lbl_fn_803E656C_00000CC8:
    lwz r4, 0x2638(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    blelr
    lfs f1, lbl_80885D58
    li r0, 0x1
    stfs f1, 0x100(r5)
    lfs f0, lbl_80885D60
    lwz r4, 0x262c(r3)
    stfs f0, 0x104(r4)
    lwz r4, 0x2630(r3)
    stfs f1, 0x100(r4)
    lwz r4, 0x2630(r3)
    stfs f0, 0x104(r4)
    lwz r4, 0x2634(r3)
    stfs f1, 0x100(r4)
    stw r0, 0x2638(r3)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beqlr
    lfs f1, lbl_80885EE4
    li r4, 0x1e
    li r5, 0x0
    b fn_80370BD0
    blr
}

asm void fn_803E65F8(void)
{
    nofralloc
    lwz r4, 0x262c(r3)
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x2630(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x2634(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803E65F8_00000D54
    blr
lbl_fn_803E65F8_00000D54:
    lwz r0, 0x2638(r3)
    cmpwi r0, 0x3
    beqlr
    cmpwi r0, 0x0
    bne lbl_fn_803E65F8_00000D6C
    blr
lbl_fn_803E65F8_00000D6C:
    lfs f0, 0xa0(r4)
    li r0, 0x3
    stfs f0, 0x100(r4)
    lfs f0, lbl_80885D5C
    lwz r4, 0x262c(r3)
    stfs f0, 0x104(r4)
    lwz r4, 0x2630(r3)
    lfs f1, 0xa0(r4)
    stfs f1, 0x100(r4)
    lwz r4, 0x2630(r3)
    stfs f0, 0x104(r4)
    stw r0, 0x2638(r3)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beqlr
    lfs f1, lbl_80885F04
    lis r4, 0xff00
    li r5, 0x1e
    li r6, 0x0
    b fn_80370B78
    blr
}

asm void fn_803E668C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    lwz r4, 0x262c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803E668C_00000F68
    lwz r5, 0x2630(r3)
    cmpwi r5, 0x0
    beq lbl_fn_803E668C_00000F68
    lwz r6, 0x2634(r3)
    cmpwi r6, 0x0
    bne lbl_fn_803E668C_00000E00
    b lbl_fn_803E668C_00000F68
lbl_fn_803E668C_00000E00:
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803E668C_00000F68
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803E668C_00000F68
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803E668C_00000E34
    b lbl_fn_803E668C_00000F68
lbl_fn_803E668C_00000E34:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x2630(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x2634(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0x2638(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803E668C_00000EB8
    lwz r4, 0x262c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x2630(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x262c(r3)
    lfs f1, 0xa0(r4)
    lfs f0, 0x100(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803E668C_00000F1C
    li r0, 0x2
    stw r0, 0x2638(r3)
    b lbl_fn_803E668C_00000F1C
lbl_fn_803E668C_00000EB8:
    cmpwi r0, 0x2
    bne lbl_fn_803E668C_00000ED4
    lwz r4, 0x2634(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    b lbl_fn_803E668C_00000F1C
lbl_fn_803E668C_00000ED4:
    cmpwi r0, 0x3
    bne lbl_fn_803E668C_00000F1C
    lwz r4, 0x262c(r3)
    lfs f0, lbl_80885D58
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x2630(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x262c(r3)
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803E668C_00000F1C
    li r0, 0x0
    stw r0, 0x2638(r3)
lbl_fn_803E668C_00000F1C:
    lwz r31, 0x262c(r3)
    lfs f0, lbl_80885E54
    lfs f1, 0x100(r31)
    lfs f2, 0xa0(r31)
    lfs f31, lbl_80885D60
    fsubs f1, f2, f1
    fdivs f0, f1, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_803E668C_00000F44
    b lbl_fn_803E668C_00000F48
lbl_fn_803E668C_00000F44:
    fmr f31, f0
lbl_fn_803E668C_00000F48:
    lis r3, lbl_807506A0@ha
    addi r3, r3, lbl_807506A0@l
    addi r3, r3, 0x1605
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_803E668C_00000F68:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E6850(void)
{
    nofralloc
    lwz r0, 0x25cc(r3)
    cmplwi r0, 0x4
    bgelr
    lwz r0, 0x25cc(r3)
    slwi r0, r0, 4
    add r0, r3, r0
    addic. r8, r0, 0x25d0
    beq lbl_fn_803E6850_00000FB4
    stw r4, 0x0(r8)
    stw r5, 0x4(r8)
    stw r6, 0x8(r8)
    stw r7, 0xc(r8)
lbl_fn_803E6850_00000FB4:
    lwz r4, 0x25cc(r3)
    addi r0, r4, 0x1
    stw r0, 0x25cc(r3)
    blr
}

asm void fn_803E6890(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r8, 0x2568(r3)
    cmplwi r8, 0x8
    bge lbl_fn_803E6890_00001200
    cmpwi r5, 0x0
    bne lbl_fn_803E6890_00000FE8
    b lbl_fn_803E6890_00001200
lbl_fn_803E6890_00000FE8:
    cmpwi r8, 0x0
    li r9, 0x0
    bne lbl_fn_803E6890_00000FF8
    li r9, 0x1
lbl_fn_803E6890_00000FF8:
    cmpwi r4, 0x0
    li r7, -0x1
    beq lbl_fn_803E6890_00001010
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_803E6890_00001024
lbl_fn_803E6890_00001010:
    lwz r0, 0x4(r5)
    cmpwi r0, 0x8a
    bne lbl_fn_803E6890_00001160
    li r7, 0xa
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_00001024:
    lwz r0, 0x4(r5)
    cmpwi r0, 0x96
    beq lbl_fn_803E6890_00001144
    bge lbl_fn_803E6890_000010A4
    cmpwi r0, 0x85
    beq lbl_fn_803E6890_00001124
    bge lbl_fn_803E6890_00001070
    cmpwi r0, 0x13
    beq lbl_fn_803E6890_0000115C
    bge lbl_fn_803E6890_00001058
    cmpwi r0, 0xc
    beq lbl_fn_803E6890_00001154
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_00001058:
    cmpwi r0, 0x83
    beq lbl_fn_803E6890_0000111C
    bge lbl_fn_803E6890_00001160
    cmpwi r0, 0x82
    bge lbl_fn_803E6890_00001114
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_00001070:
    cmpwi r0, 0x89
    beq lbl_fn_803E6890_00001124
    bge lbl_fn_803E6890_0000108C
    cmpwi r0, 0x87
    beq lbl_fn_803E6890_00001160
    bge lbl_fn_803E6890_00001114
    b lbl_fn_803E6890_0000112C
lbl_fn_803E6890_0000108C:
    cmpwi r0, 0x90
    beq lbl_fn_803E6890_0000112C
    bge lbl_fn_803E6890_00001160
    cmpwi r0, 0x8f
    bge lbl_fn_803E6890_0000111C
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_000010A4:
    cmpwi r0, 0xa0
    beq lbl_fn_803E6890_0000114C
    bge lbl_fn_803E6890_000010E4
    cmpwi r0, 0x9b
    beq lbl_fn_803E6890_00001160
    bge lbl_fn_803E6890_000010D4
    cmpwi r0, 0x99
    beq lbl_fn_803E6890_00001134
    bge lbl_fn_803E6890_0000113C
    cmpwi r0, 0x98
    bge lbl_fn_803E6890_00001160
    b lbl_fn_803E6890_0000114C
lbl_fn_803E6890_000010D4:
    cmpwi r0, 0x9d
    beq lbl_fn_803E6890_00001134
    bge lbl_fn_803E6890_00001160
    b lbl_fn_803E6890_00001144
lbl_fn_803E6890_000010E4:
    cmpwi r0, 0x4fcc
    bge lbl_fn_803E6890_00001100
    cmpwi r0, 0x4fca
    bge lbl_fn_803E6890_0000114C
    cmpwi r0, 0xa2
    bge lbl_fn_803E6890_00001160
    b lbl_fn_803E6890_0000113C
lbl_fn_803E6890_00001100:
    cmpwi r0, 0x4fd3
    bge lbl_fn_803E6890_00001160
    cmpwi r0, 0x4fd1
    bge lbl_fn_803E6890_0000113C
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_00001114:
    li r7, 0x0
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_0000111C:
    li r7, 0x1
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_00001124:
    li r7, 0x2
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_0000112C:
    li r7, 0x3
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_00001134:
    li r7, 0x4
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_0000113C:
    li r7, 0x5
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_00001144:
    li r7, 0x6
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_0000114C:
    li r7, 0x7
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_00001154:
    li r7, 0x8
    b lbl_fn_803E6890_00001160
lbl_fn_803E6890_0000115C:
    li r7, 0x9
lbl_fn_803E6890_00001160:
    cmpwi r7, 0x0
    blt lbl_fn_803E6890_00001200
    mr r6, r3
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_803E6890_0000118C
lbl_fn_803E6890_00001178:
    lwz r0, 0x256c(r6)
    cmpw r7, r0
    beq lbl_fn_803E6890_00001200
    addi r6, r6, 0xc
    bdnz lbl_fn_803E6890_00001178
lbl_fn_803E6890_0000118C:
    lwz r0, 0x2568(r3)
    mulli r0, r0, 0xc
    add r0, r3, r0
    addic. r6, r0, 0x256c
    beq lbl_fn_803E6890_000011AC
    stw r7, 0x0(r6)
    stw r4, 0x4(r6)
    stw r5, 0x8(r6)
lbl_fn_803E6890_000011AC:
    lwz r4, 0x2568(r3)
    cmpwi r9, 0x0
    addi r0, r4, 0x1
    stw r0, 0x2568(r3)
    beq lbl_fn_803E6890_00001200
    lwz r4, 0x2564(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803E6890_00001200
    lis r3, lbl_80750618@ha
    lfs f0, lbl_80885D58
    addi r3, r3, lbl_80750618@l
    stfs f0, 0x100(r4)
    lwz r4, 0x28(r3)
    addi r3, r1, 0x8
    lfs f1, lbl_80885D60
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803E6890_00001200:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803E6ADC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0xa84(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r6, 0x0
    beq lbl_fn_803E6ADC_00001294
    lfs f0, lbl_80885D58
    lis r31, lbl_807506A0@ha
    stfs f0, 0x100(r6)
    addi r31, r31, lbl_807506A0@l
    addi r3, r31, 0x113e
    lwz r4, 0xa84(r27)
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885EF0
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0xa84(r27)
    addi r3, r31, 0x113e
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885F08
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_801FED24
lbl_fn_803E6ADC_00001294:
    lwz r3, 0xa88(r27)
    cmpwi r3, 0x0
    beq lbl_fn_803E6ADC_000012A8
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
lbl_fn_803E6ADC_000012A8:
    lfs f2, 0x8(r28)
    addi r3, r27, 0x888
    psq_l f1, 0x0(r28), 0, 0
    addi r4, r27, 0x894
    psq_st f1, 0x0(r3), 0, 0
    addi r11, r1, 0x20
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x890(r27)
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x89c(r27)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E6BB4(void)
{
    nofralloc
    lwz r0, 0x2620(r3)
    cmpwi r4, 0x0
    stw r0, 0x2624(r3)
    stw r4, 0x2620(r3)
    beqlr
    cmpwi r0, 0x0
    beqlr
    cmplw r4, r0
    beqlr
    lwz r3, 0x2628(r3)
    cmpwi r3, 0x0
    beqlr
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
    blr
}

asm void fn_803E6BF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mr r6, r3
    li r8, 0x0
    lwz r7, 0x3f0(r3)
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_803E6BF0_00001370
lbl_fn_803E6BF0_00001340:
    lwz r0, 0x3fc(r6)
    cmplw r0, r4
    bne lbl_fn_803E6BF0_00001364
    mulli r4, r8, 0xc
    li r0, 0x0
    add r3, r3, r4
    stw r0, 0x3f8(r3)
    stw r5, 0x3f4(r3)
    b lbl_fn_803E6BF0_000013B4
lbl_fn_803E6BF0_00001364:
    addi r6, r6, 0xc
    addi r8, r8, 0x1
    bdnz lbl_fn_803E6BF0_00001340
lbl_fn_803E6BF0_00001370:
    cmplwi r7, 0x20
    bge lbl_fn_803E6BF0_000013B4
    lwz r0, 0x3f0(r3)
    li r6, 0x0
    stw r6, 0xc(r1)
    mulli r0, r0, 0xc
    stw r5, 0x8(r1)
    add r0, r3, r0
    stw r4, 0x10(r1)
    addic. r7, r0, 0x3f4
    beq lbl_fn_803E6BF0_000013A8
    stw r5, 0x0(r7)
    stw r6, 0x4(r7)
    stw r4, 0x8(r7)
lbl_fn_803E6BF0_000013A8:
    lwz r4, 0x3f0(r3)
    addi r0, r4, 0x1
    stw r0, 0x3f0(r3)
lbl_fn_803E6BF0_000013B4:
    addi r1, r1, 0x20
    blr
}

asm void fn_803E6C88(void)
{
    nofralloc
    lwz r0, 0x3f0(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803E6C88_000013E8
lbl_fn_803E6C88_000013CC:
    lwz r0, 0x3fc(r3)
    cmplw r0, r4
    bne lbl_fn_803E6C88_000013E0
    li r3, 0x1
    blr
lbl_fn_803E6C88_000013E0:
    addi r3, r3, 0xc
    bdnz lbl_fn_803E6C88_000013CC
lbl_fn_803E6C88_000013E8:
    li r3, 0x0
    blr
}

asm void fn_803E6CBC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r30
    bl fn_80686A48
    mr r31, r3
    mr r3, r29
    mr r4, r31
    bl fn_800DBF68
    lbz r3, 0x8(r1)
    slwi r0, r31, 1
    stb r3, 0xc(r1)
    mr r3, r29
    mr r6, r30
    add r7, r30, r0
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E6D4C(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x1e4(r1)
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    stw r29, 0x1d4(r1)
    lis r29, lbl_807C8628@ha
    addi r29, r29, lbl_807C8628@l
    stw r28, 0x1d0(r1)
    mr r28, r4
    beq lbl_fn_803E6D4C_00001B80
    cmpwi r3, 0x0
    bne lbl_fn_803E6D4C_000014C0
    b lbl_fn_803E6D4C_00001B80
lbl_fn_803E6D4C_000014C0:
    lis r30, lbl_807506A0@ha
    lfs f1, lbl_80885D60
    addi r30, r30, lbl_807506A0@l
    addi r4, r30, 0x132f
    bl fn_801F5644
    lfs f1, lbl_80885D58
    mr r3, r31
    addi r4, r30, 0x1335
    bl fn_801F5644
    lbz r4, 0x122(r28)
    mr r3, r31
    extsb r4, r4
    bl fn_803E746C
    lbz r0, 0x120(r28)
    extsb r0, r0
    cmpwi r0, 0x2
    bne lbl_fn_803E6D4C_000015E0
    lfs f1, lbl_80885D60
    mr r3, r31
    addi r4, r30, 0x133b
    bl fn_801F5644
    lfs f1, lbl_80885E28
    mr r3, r31
    lfs f0, lbl_80885DFC
    addi r4, r30, 0x1342
    stfs f1, 0x1b8(r1)
    addi r5, r1, 0x1b8
    stfs f1, 0x1bc(r1)
    stfs f0, 0x1c0(r1)
    stfs f0, 0x1c4(r1)
    bl fn_801F583C
    lfs f1, lbl_80885E28
    mr r3, r31
    lfs f0, lbl_80885DFC
    addi r4, r30, 0x134d
    stfs f1, 0x1a8(r1)
    addi r5, r1, 0x1a8
    stfs f1, 0x1ac(r1)
    stfs f0, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    bl fn_801F583C
    addi r5, r29, 0x70
    lfs f3, 0x70(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x198
    stfs f3, 0x198(r1)
    stfs f2, 0x19c(r1)
    stfs f1, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    bl fn_801F5BC8
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x188
    stfs f3, 0x188(r1)
    stfs f2, 0x18c(r1)
    stfs f1, 0x190(r1)
    stfs f0, 0x194(r1)
    bl fn_801F5BC8
    mr r3, r31
    addi r4, r30, 0x136e
    li r5, 0x0
    bl fn_801F6350
    b lbl_fn_803E6D4C_00001B80
lbl_fn_803E6D4C_000015E0:
    cmpwi r0, 0x1
    bne lbl_fn_803E6D4C_000016CC
    lfs f1, lbl_80885D60
    mr r3, r31
    addi r4, r30, 0x133b
    bl fn_801F5644
    lfs f2, lbl_80885DFC
    mr r3, r31
    lfs f1, lbl_80885E28
    addi r4, r30, 0x1342
    lfs f0, lbl_80885DE8
    addi r5, r1, 0x178
    stfs f2, 0x178(r1)
    stfs f1, 0x17c(r1)
    stfs f0, 0x180(r1)
    stfs f2, 0x184(r1)
    bl fn_801F583C
    lfs f2, lbl_80885DFC
    mr r3, r31
    lfs f1, lbl_80885E28
    addi r4, r30, 0x134d
    lfs f0, lbl_80885DE8
    addi r5, r1, 0x168
    stfs f2, 0x168(r1)
    stfs f1, 0x16c(r1)
    stfs f0, 0x170(r1)
    stfs f2, 0x174(r1)
    bl fn_801F583C
    addi r5, r29, 0x80
    lfs f3, 0x80(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x158
    stfs f3, 0x158(r1)
    stfs f2, 0x15c(r1)
    stfs f1, 0x160(r1)
    stfs f0, 0x164(r1)
    bl fn_801F5BC8
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x148
    stfs f3, 0x148(r1)
    stfs f2, 0x14c(r1)
    stfs f1, 0x150(r1)
    stfs f0, 0x154(r1)
    bl fn_801F5BC8
    mr r3, r31
    addi r4, r30, 0x136e
    li r5, 0x0
    bl fn_801F6350
    b lbl_fn_803E6D4C_00001B80
lbl_fn_803E6D4C_000016CC:
    cmpwi r0, 0x4
    bne lbl_fn_803E6D4C_000017C0
    lfs f1, lbl_80885D60
    mr r3, r31
    addi r4, r30, 0x133b
    bl fn_801F5644
    lfs f3, lbl_80885DE8
    mr r3, r31
    lfs f2, lbl_80885E28
    addi r4, r30, 0x1342
    lfs f1, lbl_80885D60
    addi r5, r1, 0x138
    lfs f0, lbl_80885DFC
    stfs f3, 0x138(r1)
    stfs f2, 0x13c(r1)
    stfs f1, 0x140(r1)
    stfs f0, 0x144(r1)
    bl fn_801F583C
    lfs f3, lbl_80885DE8
    mr r3, r31
    lfs f2, lbl_80885E28
    addi r4, r30, 0x134d
    lfs f1, lbl_80885D60
    addi r5, r1, 0x128
    lfs f0, lbl_80885DFC
    stfs f3, 0x128(r1)
    stfs f2, 0x12c(r1)
    stfs f1, 0x130(r1)
    stfs f0, 0x134(r1)
    bl fn_801F583C
    addi r5, r29, 0x90
    lfs f3, 0x90(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x118
    stfs f3, 0x118(r1)
    stfs f2, 0x11c(r1)
    stfs f1, 0x120(r1)
    stfs f0, 0x124(r1)
    bl fn_801F5BC8
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x108
    stfs f3, 0x108(r1)
    stfs f2, 0x10c(r1)
    stfs f1, 0x110(r1)
    stfs f0, 0x114(r1)
    bl fn_801F5BC8
    mr r3, r31
    addi r4, r30, 0x136e
    li r5, 0x0
    bl fn_801F6350
    b lbl_fn_803E6D4C_00001B80
lbl_fn_803E6D4C_000017C0:
    cmpwi r0, 0x3
    bne lbl_fn_803E6D4C_000018B4
    lfs f1, lbl_80885D60
    mr r3, r31
    addi r4, r30, 0x133b
    bl fn_801F5644
    lfs f3, lbl_80885D58
    mr r3, r31
    lfs f2, lbl_80885DFC
    addi r4, r30, 0x1342
    lfs f1, lbl_80885E28
    addi r5, r1, 0xf8
    lfs f0, lbl_80885DE8
    stfs f3, 0xf8(r1)
    stfs f2, 0xfc(r1)
    stfs f1, 0x100(r1)
    stfs f0, 0x104(r1)
    bl fn_801F583C
    lfs f3, lbl_80885D58
    mr r3, r31
    lfs f2, lbl_80885DFC
    addi r4, r30, 0x134d
    lfs f1, lbl_80885E28
    addi r5, r1, 0xe8
    lfs f0, lbl_80885DE8
    stfs f3, 0xe8(r1)
    stfs f2, 0xec(r1)
    stfs f1, 0xf0(r1)
    stfs f0, 0xf4(r1)
    bl fn_801F583C
    addi r5, r29, 0xb0
    lfs f3, 0xb0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0xd8
    stfs f3, 0xd8(r1)
    stfs f2, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_801F5BC8
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0xc8
    stfs f3, 0xc8(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xd0(r1)
    stfs f0, 0xd4(r1)
    bl fn_801F5BC8
    mr r3, r31
    addi r4, r30, 0x136e
    li r5, 0x0
    bl fn_801F6350
    b lbl_fn_803E6D4C_00001B80
lbl_fn_803E6D4C_000018B4:
    cmpwi r0, 0x5
    bne lbl_fn_803E6D4C_000019A0
    lfs f1, lbl_80885D60
    mr r3, r31
    addi r4, r30, 0x133b
    bl fn_801F5644
    lfs f1, lbl_80885E28
    mr r3, r31
    lfs f2, lbl_80885D58
    addi r4, r30, 0x1342
    lfs f0, lbl_80885DFC
    addi r5, r1, 0xb8
    stfs f2, 0xb8(r1)
    stfs f1, 0xbc(r1)
    stfs f1, 0xc0(r1)
    stfs f0, 0xc4(r1)
    bl fn_801F583C
    lfs f1, lbl_80885E28
    mr r3, r31
    lfs f2, lbl_80885D58
    addi r4, r30, 0x134d
    lfs f0, lbl_80885DFC
    addi r5, r1, 0xa8
    stfs f2, 0xa8(r1)
    stfs f1, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f0, 0xb4(r1)
    bl fn_801F583C
    addi r5, r29, 0xa0
    lfs f3, 0xa0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x98
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    bl fn_801F5BC8
    addi r5, r29, 0xe0
    lfs f3, 0xe0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x88
    stfs f3, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_801F5BC8
    mr r3, r31
    addi r4, r30, 0x136e
    li r5, 0x0
    bl fn_801F6350
    b lbl_fn_803E6D4C_00001B80
lbl_fn_803E6D4C_000019A0:
    cmpwi r0, 0x6
    bne lbl_fn_803E6D4C_00001A84
    lfs f1, lbl_80885D60
    mr r3, r31
    addi r4, r30, 0x133b
    bl fn_801F5644
    lfs f1, lbl_80885DFC
    mr r3, r31
    lfs f0, lbl_80885DE8
    addi r4, r30, 0x1342
    stfs f1, 0x78(r1)
    addi r5, r1, 0x78
    stfs f1, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    bl fn_801F583C
    lfs f1, lbl_80885DFC
    mr r3, r31
    lfs f0, lbl_80885DE8
    addi r4, r30, 0x134d
    stfs f1, 0x68(r1)
    addi r5, r1, 0x68
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    bl fn_801F583C
    addi r5, r29, 0xc0
    lfs f3, 0xc0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x58
    stfs f3, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_801F5BC8
    addi r5, r29, 0xf0
    lfs f3, 0xf0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x48
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_801F5BC8
    mr r3, r31
    addi r4, r30, 0x136e
    li r5, 0x3
    bl fn_801F6350
    b lbl_fn_803E6D4C_00001B80
lbl_fn_803E6D4C_00001A84:
    cmpwi r0, 0x7
    bne lbl_fn_803E6D4C_00001B70
    lfs f1, lbl_80885D60
    mr r3, r31
    addi r4, r30, 0x133b
    bl fn_801F5644
    lfs f2, lbl_80885DE8
    mr r3, r31
    lfs f1, lbl_80885DFC
    addi r4, r30, 0x1342
    lfs f0, lbl_80885D60
    addi r5, r1, 0x38
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f2, 0x44(r1)
    bl fn_801F583C
    lfs f2, lbl_80885DE8
    mr r3, r31
    lfs f1, lbl_80885DFC
    addi r4, r30, 0x134d
    lfs f0, lbl_80885D60
    addi r5, r1, 0x28
    stfs f2, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f2, 0x34(r1)
    bl fn_801F583C
    addi r5, r29, 0xd0
    lfs f3, 0xd0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1358
    lfs f0, 0xc(r5)
    addi r5, r1, 0x18
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_801F5BC8
    addi r5, r29, 0xf0
    lfs f3, 0xf0(r29)
    lfs f2, 0x4(r5)
    mr r3, r31
    lfs f1, 0x8(r5)
    addi r4, r30, 0x1363
    lfs f0, 0xc(r5)
    addi r5, r1, 0x8
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_801F5BC8
    mr r3, r31
    addi r4, r30, 0x136e
    li r5, 0x3
    bl fn_801F6350
    b lbl_fn_803E6D4C_00001B80
lbl_fn_803E6D4C_00001B70:
    lfs f1, lbl_80885D58
    mr r3, r31
    addi r4, r30, 0x133b
    bl fn_801F5644
lbl_fn_803E6D4C_00001B80:
    lwz r0, 0x1e4(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    lwz r28, 0x1d0(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}
