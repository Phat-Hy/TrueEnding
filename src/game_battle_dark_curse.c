#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_8008937C(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097D7C(void);
extern void fn_800C16B4(void);
extern void fn_800C16C0(void);
extern void fn_800C1814(void);
extern void fn_800C1990(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800D5808(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023781C(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80375184(void);
extern void fn_80376730(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803EDB18(void);
extern void fn_8041D180(void);
extern void fn_8041D198(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80491528(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_807533A8[];
extern u8 lbl_807533C8[];
extern u8 lbl_807533F0[];
extern u8 lbl_807533F8[];
extern u8 lbl_80753410[];
extern u8 lbl_80753460[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078E2A8[];
extern u8 lbl_8078E340[];
extern u8 lbl_807C7028[];
extern u8 lbl_807C88F0[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4C0;
extern u32 lbl_8087F4C8;
extern u32 lbl_8087F4CC;
extern u32 lbl_8087F4D0;
extern u32 lbl_8087F4D4;
extern u32 lbl_8087F4D8;
extern u32 lbl_8087F4DC;
extern u32 lbl_8087F558;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_80886618;
extern u32 lbl_8088661C;
extern u32 lbl_80886620;
extern u32 lbl_80886624;
extern u32 lbl_80886628;
extern u32 lbl_80886630;
extern u32 lbl_80886634;
extern u32 lbl_80886638;
extern u32 lbl_8088663C;
extern u32 lbl_80886640;
extern u32 lbl_80886644;
extern u32 lbl_80886648;
extern u32 lbl_8088664C;
extern u32 lbl_80886650;
extern u32 lbl_80886658;

/* Function declarations */
void fn_80421E54(void);
void fn_80421E9C(void);
void fn_80421F1C(void);
void fn_80422080(void);
void fn_80422084(void);
void fn_80422454(void);
void fn_80422498(void);
void fn_80422510(void);
void fn_804225E0(void);
void fn_80422610(void);
void fn_80422684(void);
void fn_804227A4(void);
void fn_80422960(void);
void fn_804229A8(void);
void fn_80422BF4(void);
void fn_80422F6C(void);
void fn_80422F70(void);
void fn_80422F78(void);
void fn_804230FC(void);
void fn_80423160(void);
void fn_80423194(void);
void fn_804231C0(void);
void fn_80423340(void);
void fn_8042335C(void);
void fn_80423434(void);
void fn_804234F4(void);
void fn_8042357C(void);
void fn_80423684(void);

asm void fn_80421E54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80421E54_00000030
    li r0, 0x0
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_80421E54_00000034
lbl_fn_80421E54_00000030:
    li r3, 0x0
lbl_fn_80421E54_00000034:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80421E9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886618
    li r5, 0x1
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r4, r1, 0x8
    lwz r6, 0xf4(r3)
    psq_l f1, 0x4(r6), 0, 0
    lfs f2, 0xc(r6)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f3, 0x14(r6)
    stfs f3, 0x7c(r3)
    lfs f3, 0x40(r6)
    stfs f3, 0x120(r3)
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80421F1C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r4, lbl_8087F0A8
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80421F1C_00000214
    lwz r0, 0x54(r3)
    li r4, 0x0
    stw r4, 0x124(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80421F1C_00000114
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_80421F1C_00000114:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x1
    beq lbl_fn_80421F1C_00000214
    lwz r3, lbl_8087F8A0
    cmpwi r0, 0x2
    lwz r30, 0x48(r3)
    bne lbl_fn_80421F1C_00000214
    lfs f1, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x74(r31)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x70(r31)
    lfs f1, 0x528(r30)
    lfs f0, 0x6c(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, 0x120(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80421F1C_00000214
    lwz r3, 0x12a4(r30)
    extrwi. r0, r3, 1, 25
    bne lbl_fn_80421F1C_000001E4
    srwi. r4, r3, 31
    li r3, 0x0
    beq lbl_fn_80421F1C_000001A0
    lwz r0, 0xc48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80421F1C_000001A0
    li r3, 0x1
lbl_fn_80421F1C_000001A0:
    cmpwi r3, 0x0
    bne lbl_fn_80421F1C_000001E4
    cmpwi r4, 0x0
    bne lbl_fn_80421F1C_000001E4
    lwz r5, lbl_8087F490
    li r0, 0xf
    li r4, -0x1
    li r3, 0x0
    stw r0, 0x7c0(r5)
    li r0, 0x1
    stw r4, 0x7c4(r5)
    stw r4, 0x7c8(r5)
    stw r3, 0x7cc(r5)
    stw r3, 0x7d0(r5)
    stw r3, 0x7d4(r5)
    stw r3, 0x7d8(r5)
    stw r0, 0x124(r31)
lbl_fn_80421F1C_000001E4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80421F1C_00000214
    li r4, 0xa2
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80421F1C_00000214
    lwz r3, lbl_8087F430
    li r4, 0xa2
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_80421F1C_00000214:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80422080(void)
{
    nofralloc
    blr
}

asm void fn_80422084(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    mr r30, r4
    lwz r5, lbl_8087F0A8
    lwz r0, 0x194(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80422084_00000264
    li r3, 0x0
    b lbl_fn_80422084_000005E8
lbl_fn_80422084_00000264:
    cmpwi r4, 0x0
    bne lbl_fn_80422084_00000274
    li r3, 0x0
    b lbl_fn_80422084_000005E8
lbl_fn_80422084_00000274:
    lwz r5, 0x0(r4)
    cmpwi r5, 0x1
    beq lbl_fn_80422084_000002A0
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80422084_000002A0
    lwz r0, 0x5694(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80422084_000002A0
    li r3, 0x0
    b lbl_fn_80422084_000005E8
lbl_fn_80422084_000002A0:
    cmpwi r5, 0x1
    beq lbl_fn_80422084_000002C4
    cmpwi r5, 0x2
    beq lbl_fn_80422084_00000334
    cmpwi r5, 0x3
    beq lbl_fn_80422084_00000458
    cmpwi r5, 0x4
    beq lbl_fn_80422084_00000524
    b lbl_fn_80422084_000005E4
lbl_fn_80422084_000002C4:
    stw r5, 0x54(r3)
    mr r4, r31
    li r5, 0x2
    lwz r3, lbl_8087F3C0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_80422084_000002F4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80422084_000002F4:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x4
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_80422084_00000320
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x4
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80422084_00000320:
    addi r3, r31, 0x104
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    b lbl_fn_80422084_000005E4
lbl_fn_80422084_00000334:
    stw r5, 0x54(r3)
    mr r4, r31
    li r5, 0x2
    lwz r3, lbl_8087F3C0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_80422084_000003B8
    lwz r5, lbl_8087F3C0
    li r30, 0x1
    mr r3, r31
    li r4, 0x2
    stw r30, 0xb8(r5)
    bl fn_80232B7C
    lfs f1, lbl_8088661C
    li r0, -0x1
    stfs f1, 0x38(r1)
    addi r4, r31, 0xf8
    addi r7, r31, 0x6c
    addi r8, r31, 0x78
    stfs f1, 0x3c(r1)
    addi r9, r1, 0x38
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x40(r1)
    li r10, -0x1
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_80422084_000003B8:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x4
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_80422084_000003E4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x4
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80422084_000003E4:
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80422084_000003F8
    li r0, 0x0
    stw r0, 0x34c8(r3)
lbl_fn_80422084_000003F8:
    addi r3, r31, 0x104
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lis r3, lbl_807533A8@ha
    lfs f1, lbl_80886620
    lwz r4, lbl_807533A8@l(r3)
    addi r3, r1, 0x14
    addi r5, r31, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x104
    addi r4, r1, 0x14
    bl fn_800CB440
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80422084_000005E4
    li r0, 0x1
    stw r0, 0x34c8(r3)
    b lbl_fn_80422084_000005E4
lbl_fn_80422084_00000458:
    lwz r0, 0x124(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80422084_000005E4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80422084_00000494
    bl fn_80375184
    cmpwi r3, 0x0
    bne lbl_fn_80422084_00000494
    lwz r3, lbl_8087F9C0
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80422084_00000494
    lwz r3, lbl_8087F430
    bl fn_80376730
lbl_fn_80422084_00000494:
    lis r3, lbl_807533A8@ha
    lwz r0, 0x0(r30)
    addi r3, r3, lbl_807533A8@l
    stw r0, 0x54(r31)
    lwz r4, 0x4(r3)
    addi r3, r1, 0x10
    lfs f1, lbl_8088661C
    addi r5, r31, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f1, lbl_8088661C
    li r3, -0x1
    stfs f1, 0x28(r1)
    li r0, 0x1
    addi r4, r31, 0x108
    addi r7, r31, 0x6c
    stfs f1, 0x2c(r1)
    addi r8, r31, 0x78
    addi r9, r1, 0x28
    li r5, 0x0
    stfs f1, 0x30(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80422084_000005E4
lbl_fn_80422084_00000524:
    stw r5, 0x54(r3)
    mr r4, r31
    li r5, 0x2
    lwz r3, lbl_8087F3C0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_80422084_00000554
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80422084_00000554:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x4
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_80422084_000005D4
    lwz r5, lbl_8087F3C0
    li r30, 0x1
    mr r3, r31
    li r4, 0x4
    stw r30, 0xb8(r5)
    bl fn_80232B7C
    lfs f1, lbl_8088661C
    li r0, -0x1
    stfs f1, 0x18(r1)
    addi r4, r31, 0x114
    addi r7, r31, 0x6c
    addi r8, r31, 0x78
    stfs f1, 0x1c(r1)
    addi r9, r1, 0x18
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x20(r1)
    li r10, -0x1
    stfs f1, 0x24(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_80422084_000005D4:
    addi r3, r31, 0x104
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_80422084_000005E4:
    lwz r3, 0x54(r31)
lbl_fn_80422084_000005E8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80422454(void)
{
    nofralloc
    lwz r4, lbl_8087F0A8
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80422454_00000618
    li r3, 0x0
    blr
lbl_fn_80422454_00000618:
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    blt lbl_fn_80422454_0000063C
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80422454_0000063C
    li r4, 0x1
lbl_fn_80422454_0000063C:
    mr r3, r4
    blr
}

asm void fn_80422498(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886618
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80422498_000006A8
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_80422498_000006A8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80422510(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    addi r4, r1, 0x8
    stw r29, 0x34(r1)
    mr r29, r3
    bl fn_803EC758
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80422510_0000071C
    cmpwi r30, 0x0
    beq lbl_fn_80422510_0000071C
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80422510_0000071C
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_80422510_00000720
lbl_fn_80422510_0000071C:
    li r30, 0x0
lbl_fn_80422510_00000720:
    lis r31, lbl_807533C8@ha
    mr r3, r30
    addi r31, r31, lbl_807533C8@l
    addi r5, r29, 0x54
    addi r4, r31, 0x15
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80886618
    mr r3, r30
    lfs f2, lbl_80886624
    addi r4, r31, 0x1b
    lfs f3, lbl_80886628
    addi r5, r29, 0x120
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804225E0(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0xc0(r3)
    li r4, 0x0
    bne lbl_fn_804225E0_000007A8
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804225E0_000007AC
lbl_fn_804225E0_000007A8:
    li r4, 0x1
lbl_fn_804225E0_000007AC:
    li r0, -0x1
    stw r4, 0xbc(r3)
    stw r0, 0x114(r3)
    blr
}

asm void fn_80422610(void)
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
    beq lbl_fn_80422610_00000814
    lis r5, lbl_80753410@ha
    li r3, 0x1a0
    addi r5, r5, lbl_80753410@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80422610_00000818
    mr r4, r30
    mr r5, r31
    bl fn_80422684
    b lbl_fn_80422610_00000818
lbl_fn_80422610_00000814:
    li r3, 0x0
lbl_fn_80422610_00000818:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80422684(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r31)
    bl fn_803EC568
    lis r4, lbl_8078E2A8@ha
    stw r31, 0xf4(r30)
    addi r4, r4, lbl_8078E2A8@l
    addi r3, r30, 0xf8
    stw r4, 0x0(r30)
    bl fn_800C16C0
    addi r4, r30, 0x160
    addi r3, r30, 0x190
    lfs f0, lbl_80886630
    cmplw r4, r3
    li r0, 0x0
    stw r0, 0x148(r30)
    stw r0, 0x14c(r30)
    stfs f0, 0x150(r30)
    stfs f0, 0x154(r30)
    stfs f0, 0x158(r30)
    stfs f0, 0x15c(r30)
    bge lbl_fn_80422684_000008CC
    addi r3, r3, 0xb
    li r0, 0xc
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_80422684_000008CC
lbl_fn_80422684_000008B8:
    stfs f0, 0x0(r4)
    stfs f0, 0x4(r4)
    stfs f0, 0x8(r4)
    addi r4, r4, 0xc
    bdnz lbl_fn_80422684_000008B8
lbl_fn_80422684_000008CC:
    lfs f2, lbl_80886630
    li r0, 0x0
    stfs f2, 0x10(r1)
    addi r4, r1, 0x10
    lfs f0, lbl_80886634
    addi r5, r1, 0x8
    stfs f2, 0x14(r1)
    addi r6, r1, 0x18
    mr r3, r30
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r1)
    stfs f2, 0xc(r1)
    psq_st f1, 0xfc(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x18(r1)
    stfs f0, 0x1c(r1)
    psq_st f1, 0x104(r30), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x190(r30)
    stfs f2, 0x194(r30)
    stfs f2, 0x198(r30)
    stfs f2, 0x19c(r30)
    stw r0, 0x54(r30)
    psq_st f1, 0x11c(r30), 0, 0
    stfs f2, 0x124(r30)
    stw r0, 0xf8(r30)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    stfs f2, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804227A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    beq lbl_fn_804227A4_00000AEC
    lis r4, lbl_8078E2A8@ha
    addi r4, r4, lbl_8078E2A8@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    li r4, 0x0
    stw r4, 0x74(r3)
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804227A4_000009A4
    li r4, 0x1
lbl_fn_804227A4_000009A4:
    stw r4, 0x70(r3)
    lwz r0, lbl_8087F558
    cmpwi r0, 0x0
    beq lbl_fn_804227A4_00000A9C
    lbz r0, lbl_8087F4C0
    li r3, 0x0
    stw r3, 0x8(r1)
    extsb. r0, r0
    bne lbl_fn_804227A4_000009F0
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_804227A4_000009F0:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_804227A4_00000A14
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804227A4_00000A14:
    lis r0, fn_804225E0@ha
    addic. r0, r0, 9696
    beq lbl_fn_804227A4_00000A2C
    stw r0, 0xc(r1)
    li r0, 0x1
    b lbl_fn_804227A4_00000A30
lbl_fn_804227A4_00000A2C:
    li r0, 0x0
lbl_fn_804227A4_00000A30:
    cmpwi r0, 0x0
    beq lbl_fn_804227A4_00000A48
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x8(r1)
    b lbl_fn_804227A4_00000A50
lbl_fn_804227A4_00000A48:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_804227A4_00000A50:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80491528
    addic. r3, r1, 0x8
    beq lbl_fn_804227A4_00000A9C
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804227A4_00000A9C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804227A4_00000A94
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804227A4_00000A94:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_804227A4_00000A9C:
    addic. r29, r30, 0xf8
    beq lbl_fn_804227A4_00000AD0
    addic. r0, r29, 0x3c
    beq lbl_fn_804227A4_00000AD0
    lwz r3, 0x40(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804227A4_00000AC4
    lis r4, fn_800D5808@ha
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_804227A4_00000AC4:
    li r0, 0x0
    stw r0, 0x40(r29)
    stw r0, 0x3c(r29)
lbl_fn_804227A4_00000AD0:
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_804227A4_00000AEC
    mr r3, r30
    bl dtor_80084684
lbl_fn_804227A4_00000AEC:
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80422960(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    beq lbl_fn_80422960_00000B3C
    li r0, 0x0
    stw r0, 0x54(r31)
    li r3, 0x0
    b lbl_fn_80422960_00000B40
lbl_fn_80422960_00000B3C:
    li r3, 0x1
lbl_fn_80422960_00000B40:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804229A8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    addic. r0, r31, 0xf8
    li r4, 0x0
    stw r0, 0x74(r3)
    bne lbl_fn_804229A8_00000B8C
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804229A8_00000B90
lbl_fn_804229A8_00000B8C:
    li r4, 0x1
lbl_fn_804229A8_00000B90:
    stw r4, 0x70(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    li r0, -0x1
    stw r0, 0xc8(r3)
    li r3, 0x0
    lbz r0, lbl_8087F4C0
    stw r3, 0x14(r1)
    extsb. r0, r0
    bne lbl_fn_804229A8_00000BE0
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_804229A8_00000BE0:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_804229A8_00000C04
    addi r3, r1, 0x18
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804229A8_00000C04:
    lis r0, fn_804225E0@ha
    addic. r0, r0, 9696
    beq lbl_fn_804229A8_00000C1C
    stw r0, 0x18(r1)
    li r0, 0x1
    b lbl_fn_804229A8_00000C20
lbl_fn_804229A8_00000C1C:
    li r0, 0x0
lbl_fn_804229A8_00000C20:
    cmpwi r0, 0x0
    beq lbl_fn_804229A8_00000C38
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x14(r1)
    b lbl_fn_804229A8_00000C40
lbl_fn_804229A8_00000C38:
    li r0, 0x0
    stw r0, 0x14(r1)
lbl_fn_804229A8_00000C40:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x14
    addi r5, r31, 0xf8
    bl fn_80491528
    addic. r3, r1, 0x14
    beq lbl_fn_804229A8_00000C8C
    lwz r4, 0x14(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804229A8_00000C8C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804229A8_00000C84
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804229A8_00000C84:
    li r0, 0x0
    stw r0, 0x14(r1)
lbl_fn_804229A8_00000C8C:
    lwz r4, 0xf4(r31)
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804229A8_00000CB8
    cmpwi r0, 0x1
    beq lbl_fn_804229A8_00000CC8
    cmpwi r0, 0x2
    beq lbl_fn_804229A8_00000CDC
    cmpwi r0, 0x3
    beq lbl_fn_804229A8_00000CF0
    b lbl_fn_804229A8_00000D00
lbl_fn_804229A8_00000CB8:
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0x148(r31)
    b lbl_fn_804229A8_00000D00
lbl_fn_804229A8_00000CC8:
    lwz r3, lbl_8087F890
    lwz r4, 0x24(r4)
    bl fn_8011FE3C
    stw r3, 0x148(r31)
    b lbl_fn_804229A8_00000D00
lbl_fn_804229A8_00000CDC:
    lwz r3, lbl_8087F408
    lwz r4, 0x24(r4)
    bl fn_8011FC10
    stw r3, 0x148(r31)
    b lbl_fn_804229A8_00000D00
lbl_fn_804229A8_00000CF0:
    lwz r4, 0x24(r4)
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    stw r3, 0x148(r31)
lbl_fn_804229A8_00000D00:
    lwz r7, 0xf4(r31)
    addi r6, r1, 0x8
    lfs f4, lbl_80886630
    li r5, 0x1
    psq_l f1, 0x4(r7), 0, 0
    li r0, 0x0
    lfs f2, 0xc(r7)
    mr r3, r31
    stfs f2, 0x74(r31)
    fmr f2, f4
    addi r4, r1, 0x28
    psq_st f1, 0x6c(r31), 0, 0
    lfs f0, 0x74(r31)
    lfs f5, 0x14(r7)
    lfs f3, 0x6c(r31)
    stfs f4, 0x8(r1)
    stfs f5, 0xc(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x78(r31), 0, 0
    stfs f2, 0x80(r31)
    stfs f3, 0xfc(r31)
    stfs f0, 0x100(r31)
    stw r5, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f4, 0x44(r1)
    lwz r12, 0x0(r31)
    stfs f4, 0x10(r1)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80422BF4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80422BF4_00000DD0
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_80422BF4_00000DD0:
    lbz r0, lbl_8087F4C0
    li r3, 0x0
    stw r3, 0x38(r1)
    extsb. r0, r0
    bne lbl_fn_80422BF4_00000E0C
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80422BF4_00000E0C:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80422BF4_00000E30
    addi r3, r1, 0x3c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80422BF4_00000E30:
    lis r0, fn_804225E0@ha
    addic. r0, r0, 9696
    beq lbl_fn_80422BF4_00000E48
    stw r0, 0x3c(r1)
    li r0, 0x1
    b lbl_fn_80422BF4_00000E4C
lbl_fn_80422BF4_00000E48:
    li r0, 0x0
lbl_fn_80422BF4_00000E4C:
    cmpwi r0, 0x0
    beq lbl_fn_80422BF4_00000E64
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x38(r1)
    b lbl_fn_80422BF4_00000E6C
lbl_fn_80422BF4_00000E64:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_80422BF4_00000E6C:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x38
    addi r5, r31, 0xf8
    bl fn_80491528
    addic. r3, r1, 0x38
    beq lbl_fn_80422BF4_00000EB8
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80422BF4_00000EB8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80422BF4_00000EB0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80422BF4_00000EB0:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_80422BF4_00000EB8:
    lfs f3, 0x150(r31)
    lis r3, lbl_807533F0@ha
    lfs f0, lbl_80886638
    lfd f2, lbl_807533F0@l(r3)
    fadds f1, f3, f0
    stfs f1, 0x150(r31)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_8088663C
    fcmpo cr0, f3, f0
    ble lbl_fn_80422BF4_00000EEC
    lfs f0, lbl_80886640
    fsubs f3, f3, f0
lbl_fn_80422BF4_00000EEC:
    lfs f0, lbl_80886644
    fcmpo cr0, f3, f0
    bge lbl_fn_80422BF4_00000F00
    lfs f0, lbl_80886640
    fadds f3, f3, f0
lbl_fn_80422BF4_00000F00:
    lwz r3, 0x54(r31)
    stfs f3, 0x150(r31)
    cmpwi r3, 0x1
    bne lbl_fn_80422BF4_00000F24
    lis r3, lbl_807C7028@ha
    addi r3, r3, lbl_807C7028@l
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x104(r31), 0, 0
    b lbl_fn_80422BF4_00001094
lbl_fn_80422BF4_00000F24:
    cmpwi r3, 0x2
    blt lbl_fn_80422BF4_00001094
    subic. r3, r3, 0x2
    blt lbl_fn_80422BF4_00001094
    cmpwi r3, 0x5
    bge lbl_fn_80422BF4_00001094
    lwz r5, 0x14c(r31)
    lis r0, 0x4330
    mulli r6, r3, 0xc
    lis r4, lbl_807533F8@ha
    xoris r3, r5, 0x8000
    stw r3, 0x54(r1)
    lfd f4, lbl_807533F8@l(r4)
    stw r0, 0x50(r1)
    add r3, r31, r6
    lfd f3, 0x50(r1)
    lfs f0, 0x154(r3)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_80422BF4_00000F7C
    addi r0, r5, 0x1
    stw r0, 0x14c(r31)
lbl_fn_80422BF4_00000F7C:
    lfs f4, 0x154(r3)
    lfs f0, lbl_80886630
    fcmpo cr0, f4, f0
    ble lbl_fn_80422BF4_00000FB8
    lwz r4, 0x14c(r31)
    lis r0, 0x4330
    stw r0, 0x50(r1)
    lis r3, lbl_807533F8@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_807533F8@l(r3)
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f3
    fdivs f8, f0, f4
    b lbl_fn_80422BF4_00000FBC
lbl_fn_80422BF4_00000FB8:
    lfs f8, lbl_80886648
lbl_fn_80422BF4_00000FBC:
    lfs f0, 0x19c(r31)
    addi r3, r1, 0x18
    lfs f4, 0x194(r31)
    lfs f3, 0x198(r31)
    fsubs f5, f0, f4
    lfs f0, 0x190(r31)
    lfs f7, 0x150(r31)
    fsubs f3, f3, f0
    stfs f5, 0x14(r1)
    fmuls f6, f5, f8
    stfs f3, 0x10(r1)
    fmuls f5, f3, f8
    fadds f3, f6, f4
    stfs f6, 0xc(r1)
    fadds f0, f5, f0
    stfs f3, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x104(r31), 0, 0
    fmr f1, f7
    stfs f5, 0x8(r1)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, lbl_8088664C
    lfs f0, 0x104(r31)
    lfs f5, lbl_80886648
    fmadds f0, f3, f4, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_80422BF4_00001034
    b lbl_fn_80422BF4_0000104C
lbl_fn_80422BF4_00001034:
    lfs f1, 0x150(r31)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, lbl_8088664C
    lfs f0, 0x104(r31)
    fmadds f5, f3, f4, f0
lbl_fn_80422BF4_0000104C:
    lfs f1, 0x150(r31)
    stfs f5, 0x104(r31)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, lbl_8088664C
    lfs f0, 0x108(r31)
    lfs f5, lbl_80886648
    fmadds f0, f3, f4, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_80422BF4_00001078
    b lbl_fn_80422BF4_00001090
lbl_fn_80422BF4_00001078:
    lfs f1, 0x150(r31)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, lbl_8088664C
    lfs f0, 0x108(r31)
    fmadds f5, f3, f4, f0
lbl_fn_80422BF4_00001090:
    stfs f5, 0x108(r31)
lbl_fn_80422BF4_00001094:
    lwz r4, 0x148(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80422BF4_000010D4
    lfs f0, 0x528(r4)
    addi r3, r1, 0x2c
    lfs f2, lbl_80886630
    stfs f0, 0xfc(r31)
    lfs f0, 0x530(r4)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x100(r31)
    stfs f2, 0x34(r1)
    psq_st f1, 0x11c(r31), 0, 0
    stfs f2, 0x124(r31)
    b lbl_fn_80422BF4_00001104
lbl_fn_80422BF4_000010D4:
    lfs f2, lbl_80886630
    addi r3, r1, 0x20
    stfs f2, 0x20(r1)
    lfs f3, 0x6c(r31)
    stfs f2, 0x24(r1)
    lfs f0, 0x74(r31)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0xfc(r31)
    stfs f0, 0x100(r31)
    stfs f2, 0x28(r1)
    psq_st f1, 0x11c(r31), 0, 0
    stfs f2, 0x124(r31)
lbl_fn_80422BF4_00001104:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80422F6C(void)
{
    nofralloc
    blr
}

asm void fn_80422F70(void)
{
    nofralloc
    addi r3, r3, 0xf8
    b fn_800C1990
}

asm void fn_80422F78(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80753410@ha
    addi r31, r31, lbl_80753410@l
lbl_fn_80422F78_000011D4:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80422F78_0000127C
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80422F78_00001214
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf8
    bl fn_800C1814
    b lbl_fn_80422F78_0000127C
lbl_fn_80422F78_00001214:
    mr r3, r30
    addi r4, r31, 0x9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80422F78_0000127C
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC12C
    subic. r0, r3, 0x2
    blt lbl_fn_80422F78_0000127C
    cmpwi r0, 0x5
    bge lbl_fn_80422F78_0000127C
    mulli r0, r0, 0xc
    addi r3, r1, 0x8
    add r30, r29, r0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x154(r30)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x158(r30)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x15c(r30)
lbl_fn_80422F78_0000127C:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80422F78_000011D4
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_804230FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_804230FC_000012CC
    li r3, 0x0
    b lbl_fn_804230FC_000012F8
lbl_fn_804230FC_000012CC:
    lwz r4, 0x0(r4)
    lwz r0, 0x54(r3)
    cmpw r0, r4
    bne lbl_fn_804230FC_000012E4
    li r3, 0x0
    b lbl_fn_804230FC_000012F8
lbl_fn_804230FC_000012E4:
    lwz r12, 0x0(r3)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    lwz r3, 0x54(r31)
lbl_fn_804230FC_000012F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80423160(void)
{
    nofralloc
    psq_l f1, 0x104(r3), 0, 0
    cmpwi r4, 0x2
    li r0, 0x0
    stw r0, 0x14c(r3)
    psq_st f1, 0x190(r3), 0, 0
    blt lbl_fn_80423160_00001338
    subi r0, r4, 0x2
    mulli r0, r0, 0xc
    add r5, r3, r0
    psq_l f1, 0x158(r5), 0, 0
    psq_st f1, 0x198(r3), 0, 0
lbl_fn_80423160_00001338:
    stw r4, 0x54(r3)
    blr
}

asm void fn_80423194(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    blt lbl_fn_80423194_00001364
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80423194_00001364
    li r4, 0x1
lbl_fn_80423194_00001364:
    mr r3, r4
    blr
}

asm void fn_804231C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r4
    mr r27, r3
    addi r4, r1, 0x8
    bl fn_803EC758
    lwz r0, 0xf0(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804231C0_000013C8
    cmpwi r26, 0x0
    beq lbl_fn_804231C0_000013C8
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_804231C0_000013C8
    mr r3, r26
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r27)
    mr r28, r3
    b lbl_fn_804231C0_000013CC
lbl_fn_804231C0_000013C8:
    li r28, 0x0
lbl_fn_804231C0_000013CC:
    lis r3, lbl_80753410@ha
    addi r5, r27, 0x54
    addi r31, r3, lbl_80753410@l
    li r6, 0x0
    mr r3, r28
    li r7, 0x63
    addi r4, r31, 0xf
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r31, 0x15
    bl fn_8008937C
    lfs f1, lbl_80886630
    mr r29, r3
    lfs f2, lbl_80886650
    addi r4, r31, 0x22
    lfs f3, lbl_80886648
    addi r5, r27, 0x198
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886630
    mr r3, r29
    lfs f2, lbl_80886650
    addi r4, r31, 0x28
    lfs f3, lbl_80886648
    addi r5, r27, 0x19c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    addi r30, r27, 0x158
    addi r29, r27, 0x15c
    li r27, 0x0
lbl_fn_804231C0_00001458:
    addi r3, r1, 0x8
    addi r4, r31, 0x2e
    addi r5, r27, 0x2
    crclr 6
    bl sprintf
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8008937C
    lfs f1, lbl_80886630
    mr r26, r3
    lfs f2, lbl_80886650
    mr r5, r30
    lfs f3, lbl_80886648
    addi r4, r31, 0x22
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886630
    mr r3, r26
    lfs f2, lbl_80886650
    mr r5, r29
    lfs f3, lbl_80886648
    addi r4, r31, 0x28
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmpwi r27, 0x5
    addi r30, r30, 0xc
    blt lbl_fn_804231C0_00001458
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80423340(void)
{
    nofralloc
    la r4, lbl_8087F4C8
    la r3, lbl_8087F4CC
    la r0, lbl_8087F4D0
    stw r4, lbl_8087F4D4
    stw r3, lbl_8087F4D8
    stw r0, lbl_8087F4DC
    blr
}

asm void fn_8042335C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8042335C_000015BC
    lis r5, lbl_80753460@ha
    li r3, 0x928
    addi r5, r5, lbl_80753460@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8042335C_000015B4
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r4, lbl_8078E340@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078E340@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x4c4
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x894
    bl fn_80057F28
    addi r3, r31, 0x91c
    bl fn_802377B8
    li r0, 0x0
    stw r0, 0x54(r31)
lbl_fn_8042335C_000015B4:
    mr r3, r31
    b lbl_fn_8042335C_000015C0
lbl_fn_8042335C_000015BC:
    li r3, 0x0
lbl_fn_8042335C_000015C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80423434(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80423434_00001680
    addic. r31, r3, 0x91c
    beq lbl_fn_80423434_00001628
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80423434_00001628
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80423434_00001628:
    addic. r31, r29, 0x894
    beq lbl_fn_80423434_0000164C
    addic. r3, r31, 0x3c
    beq lbl_fn_80423434_00001640
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80423434_00001640:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_80423434_0000164C:
    addi r3, r29, 0x4c4
    li r4, -0x1
    bl fn_800971D4
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_80423434_00001680
    mr r3, r29
    bl dtor_80084684
lbl_fn_80423434_00001680:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804234F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_804234F4_00001710
    lwz r4, 0xf8(r31)
    li r6, 0x1
    lwz r0, 0x4c8(r31)
    mr r3, r31
    rlwinm r5, r4, 0, 24, 22
    stw r6, 0x54(r31)
    rlwinm r0, r0, 0, 24, 22
    addi r4, r31, 0xf4
    rlwinm r5, r5, 0, 29, 27
    rlwinm r0, r0, 0, 29, 27
    oris r5, r5, 0x10
    stw r5, 0xf8(r31)
    oris r0, r0, 0x10
    stw r0, 0x4c8(r31)
    bl fn_803EDB18
    mr r3, r31
    addi r4, r31, 0x4c4
    bl fn_803EDB18
    li r3, 0x1
    b lbl_fn_804234F4_00001714
lbl_fn_804234F4_00001710:
    li r3, 0x0
lbl_fn_804234F4_00001714:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042357C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042357C_0000178C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042357C_0000178C:
    addi r3, r31, 0x894
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lfs f0, lbl_80886658
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x58(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8042357C_00001804
    li r0, 0x4
    stw r0, 0x8(r1)
lbl_fn_8042357C_00001804:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80423684(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80423684_00001868
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_80423684_00001868:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80423684_000018B8
    lfs f0, lbl_80886658
    li r0, 0x0
    li r3, 0x3
    stw r3, 0x48(r1)
    mr r3, r31
    addi r4, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80423684_000018B8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80423684_000018F8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80423684_000018F8:
    addi r3, r31, 0x894
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    beq lbl_fn_80423684_00001948
    cmpwi r0, 0x5
    beq lbl_fn_80423684_000019E8
    b lbl_fn_80423684_00001A78
lbl_fn_80423684_00001948:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80423684_00001984
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80423684_00001984:
    lfs f31, 0x6f8(r31)
    addi r3, r31, 0x4c4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80423684_00001A78
    lfs f0, lbl_80886658
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x28(r1)
    mr r3, r31
    addi r4, r1, 0x28
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80423684_00001A78
lbl_fn_80423684_000019E8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80423684_00001A24
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80423684_00001A24:
    lfs f7, 0x6f8(r31)
    lfs f0, lbl_80886658
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80423684_00001A78
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80423684_00001A78:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
