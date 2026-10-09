#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80092F1C(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_802180A8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805991E4(void);
extern void fn_8059B670(void);
extern void fn_805F89F0(void);
extern void fn_805F90D0(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA8(void);
extern void fn_80695B00(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80752C00[];
extern u8 lbl_80752C28[];
extern u8 lbl_80752C44[];
extern u8 lbl_80752C9C[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D63C[];
extern u8 lbl_8078D648[];
extern u8 lbl_8078D6E8[];
extern u8 lbl_8078D780[];
extern u8 lbl_807C8898[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF80;
extern u32 lbl_8087DF84;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4B0;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808863A0;
extern u32 lbl_808863A4;
extern u32 lbl_808863A8;
extern u32 lbl_808863AC;
extern u32 lbl_808863B0;
extern u32 lbl_808863B4;
extern u32 lbl_808863B8;
extern u32 lbl_808863BC;
extern u32 lbl_808863C0;
extern u32 lbl_808863C4;
extern u32 lbl_808863C8;
extern u32 lbl_808863D0;

/* Function declarations */
void fn_8040F3CC(void);
void fn_8040F42C(void);
void fn_8040F498(void);
void fn_8040F690(void);
void fn_8040F994(void);
void fn_8040F9C0(void);
void fn_8040F9EC(void);
void fn_8040FAA4(void);
void fn_8040FAB8(void);
void fn_8040FAC0(void);
void fn_8040FB44(void);
void fn_8040FC30(void);
void fn_8040FCE4(void);
void fn_8040FD30(void);
void fn_8040FF5C(void);
void fn_8040FFBC(void);
void fn_80410028(void);
void fn_80410358(void);
void fn_8041044C(void);
void fn_80410698(void);
void fn_804109AC(void);
void fn_80410A60(void);
void fn_80410A68(void);
void fn_80410B38(void);
void fn_80410BA0(void);
void fn_80410BC8(void);
void fn_80410BF8(void);

asm void fn_8040F3CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040F3CC_0000004C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_8040F3CC_0000004C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040F42C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8040F42C_0000008C
    li r3, 0x1
    b lbl_fn_8040F42C_000000B8
lbl_fn_8040F42C_0000008C:
    addi r3, r31, 0x4c4
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_8040F42C_000000A4
    li r3, 0x1
    b lbl_fn_8040F42C_000000B8
lbl_fn_8040F42C_000000A4:
    addi r3, r31, 0x54c
    bl fn_80237874
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8040F42C_000000B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040F498(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r31, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80752C00@ha
    addi r31, r31, lbl_80752C00@l
lbl_fn_8040F498_0000017C:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8040F498_00000298
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040F498_000001D0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_8040F498_00000298
lbl_fn_8040F498_000001D0:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040F498_00000218
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r29, 0xf4
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_8040F498_00000298
lbl_fn_8040F498_00000218:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040F498_00000244
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x4c4
    bl fn_80058078
    b lbl_fn_8040F498_00000298
lbl_fn_8040F498_00000244:
    mr r3, r30
    addi r4, r31, 0x1e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040F498_00000270
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x54c
    bl fn_8023780C
    b lbl_fn_8040F498_00000298
lbl_fn_8040F498_00000270:
    mr r3, r30
    addi r4, r31, 0x22
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040F498_00000298
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x558(r29)
lbl_fn_8040F498_00000298:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8040F498_0000017C
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_8040F690(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    mr r30, r4
    stw r29, 0xa4(r1)
    mr r29, r3
    bne lbl_fn_8040F690_000002F4
    li r3, 0x0
    b lbl_fn_8040F690_000005AC
lbl_fn_8040F690_000002F4:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_8040F690_0000030C
    cmpwi r0, 0x2
    beq lbl_fn_8040F690_0000033C
    b lbl_fn_8040F690_000005A4
lbl_fn_8040F690_0000030C:
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, 0x55c(r29)
    li r0, 0x0
    stw r0, 0x560(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8040F690_000005A4
    bl fn_805991E4
    b lbl_fn_8040F690_000005A4
lbl_fn_8040F690_0000033C:
    lwz r3, lbl_8087F3C0
    li r31, 0x1
    mr r4, r29
    li r5, 0x0
    stw r31, 0xb8(r3)
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    mr r3, r29
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808863A0
    li r0, -0x1
    lfs f1, lbl_808863A4
    addi r4, r29, 0x54c
    stfs f0, 0x64(r1)
    addi r5, r29, 0xf4
    addi r7, r1, 0x58
    addi r8, r1, 0x64
    stfs f0, 0x68(r1)
    addi r9, r1, 0x70
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x6c(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r4, lbl_8087F3C0
    li r0, 0x0
    mr r3, r29
    stw r0, 0xb8(r4)
    lwz r12, 0x0(r29)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040F690_000005A4
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8040F690_000005A4
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8040F690_00000410
    lwz r31, 0x48(r3)
    b lbl_fn_8040F690_00000414
lbl_fn_8040F690_00000410:
    li r31, 0x0
lbl_fn_8040F690_00000414:
    cmpwi r31, 0x0
    beq lbl_fn_8040F690_000005A4
    lwz r0, 0x558(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8040F690_000005A4
    lwz r0, lbl_8087F9E8
    cmpwi r0, 0x0
    beq lbl_fn_8040F690_000005A4
    lbz r0, lbl_8087F4B0
    lis r6, lbl_8078D63C@ha
    lwzu r5, lbl_8078D63C@l(r6)
    li r3, 0x0
    extsb. r0, r0
    stw r5, 0x20(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r0, 0x18(r1)
    stw r29, 0x1c(r1)
    stw r3, 0x80(r1)
    bne lbl_fn_8040F690_000004A8
    lis r6, lbl_807C8898@ha
    lis r4, fn_8040F9C0@ha
    lis r3, fn_8040F9EC@ha
    li r0, 0x1
    addi r3, r3, fn_8040F9EC@l
    addi r5, r6, lbl_807C8898@l
    addi r4, r4, fn_8040F9C0@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8898@l(r6)
    stb r0, lbl_8087F4B0
lbl_fn_8040F690_000004A8:
    lwz r6, 0x10(r1)
    addi r3, r1, 0x38
    lwz r5, 0x14(r1)
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8040F690_0000051C
    addic. r0, r1, 0x84
    lwz r5, 0x38(r1)
    lwz r4, 0x3c(r1)
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r5, 0x48(r1)
    stw r4, 0x4c(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    beq lbl_fn_8040F690_00000514
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r3, 0x8c(r1)
    stw r0, 0x90(r1)
lbl_fn_8040F690_00000514:
    li r0, 0x1
    b lbl_fn_8040F690_00000520
lbl_fn_8040F690_0000051C:
    li r0, 0x0
lbl_fn_8040F690_00000520:
    cmpwi r0, 0x0
    beq lbl_fn_8040F690_00000538
    lis r3, lbl_807C8898@ha
    addi r3, r3, lbl_807C8898@l
    stw r3, 0x80(r1)
    b lbl_fn_8040F690_00000540
lbl_fn_8040F690_00000538:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_8040F690_00000540:
    lwz r3, lbl_8087F9E8
    mr r5, r31
    lwz r4, 0x558(r29)
    mr r6, r31
    lfs f1, lbl_808863A4
    addi r7, r29, 0x6c
    addi r8, r29, 0x78
    addi r9, r1, 0x80
    bl fn_8059B670
    addic. r4, r1, 0x80
    stw r3, 0x55c(r29)
    beq lbl_fn_8040F690_000005A4
    lwz r3, 0x80(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8040F690_000005A4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8040F690_0000059C
    addi r3, r4, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8040F690_0000059C:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_8040F690_000005A4:
    lwz r3, 0x0(r30)
    stw r3, 0x54(r29)
lbl_fn_8040F690_000005AC:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8040F994(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8040F994_000005EC
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8040F994_000005EC
    li r4, 0x1
lbl_fn_8040F994_000005EC:
    mr r3, r4
    blr
}

asm void fn_8040F9C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040F9EC(void)
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
    bne lbl_fn_8040F9EC_00000654
    lis r3, lbl_8078D648@ha
    addi r3, r3, lbl_8078D648@l
    stw r3, 0x0(r4)
    b lbl_fn_8040F9EC_000006C0
lbl_fn_8040F9EC_00000654:
    cmpwi r5, 0x0
    bne lbl_fn_8040F9EC_00000688
    cmpwi r4, 0x0
    beq lbl_fn_8040F9EC_000006C0
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8040F9EC_000006C0
lbl_fn_8040F9EC_00000688:
    cmpwi r5, 0x1
    beq lbl_fn_8040F9EC_000006C0
    lwz r5, 0x0(r4)
    lis r3, lbl_8078D648@ha
    lwz r4, lbl_8078D648@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8040F9EC_000006B8
    stw r30, 0x0(r31)
    b lbl_fn_8040F9EC_000006C0
lbl_fn_8040F9EC_000006B8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8040F9EC_000006C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040FAA4(void)
{
    nofralloc
    li r4, 0x0
    li r0, 0x5
    stw r4, 0x55c(r3)
    stw r0, 0x560(r3)
    blr
}

asm void fn_8040FAB8(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_8040FAC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8040FAC0_00000758
    lis r5, lbl_80752C44@ha
    li r3, 0x5e0
    addi r5, r5, lbl_80752C44@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8040FAC0_0000075C
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8040FB44
    b lbl_fn_8040FAC0_0000075C
lbl_fn_8040FAC0_00000758:
    li r3, 0x0
lbl_fn_8040FAC0_0000075C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040FB44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC568
    lis r4, lbl_8078D6E8@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078D6E8@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x4c4
    bl fn_80057F28
    addi r3, r31, 0x54c
    bl fn_802377B8
    addi r4, r31, 0x5a0
    addi r3, r31, 0x5c4
    lfs f1, lbl_808863A8
    cmplw r4, r3
    li r0, 0x0
    lfs f0, lbl_808863AC
    stw r0, 0x558(r31)
    stw r0, 0x55c(r31)
    stw r0, 0x560(r31)
    stw r0, 0x564(r31)
    stb r0, 0x568(r31)
    stfs f1, 0x588(r31)
    stfs f0, 0x594(r31)
    stfs f1, 0x598(r31)
    stfs f0, 0x59c(r31)
    bge lbl_fn_8040FB44_00000828
    addi r3, r3, 0xb
    li r0, 0xc
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_8040FB44_00000828
lbl_fn_8040FB44_00000814:
    stfs f0, 0x0(r4)
    stfs f1, 0x4(r4)
    stfs f0, 0x8(r4)
    addi r4, r4, 0xc
    bdnz lbl_fn_8040FB44_00000814
lbl_fn_8040FB44_00000828:
    lfs f0, lbl_808863AC
    addi r4, r31, 0x594
    li r0, 0x0
    stfs f0, 0x5cc(r31)
    mr r3, r31
    stfs f0, 0x5d0(r31)
    stfs f0, 0x5d4(r31)
    stw r4, 0x5d8(r31)
    stw r4, 0x5dc(r31)
    stw r0, 0x54(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040FC30(void)
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
    beq lbl_fn_8040FC30_000008F8
    addic. r31, r3, 0x54c
    beq lbl_fn_8040FC30_000008AC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8040FC30_000008AC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8040FC30_000008AC:
    addic. r31, r29, 0x4c4
    beq lbl_fn_8040FC30_000008D0
    addic. r3, r31, 0x3c
    beq lbl_fn_8040FC30_000008C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8040FC30_000008C4:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8040FC30_000008D0:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8040FC30_000008F8
    mr r3, r29
    bl dtor_80084684
lbl_fn_8040FC30_000008F8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040FCE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8040FCE4_0000094C
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    li r3, 0x1
    b lbl_fn_8040FCE4_00000950
lbl_fn_8040FCE4_0000094C:
    li r3, 0x0
lbl_fn_8040FCE4_00000950:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040FD30(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8040FD30_00000998
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_8040FD30_000009E0
lbl_fn_8040FD30_00000998:
    cmpwi r0, 0x2
    bne lbl_fn_8040FD30_000009E0
    lfs f0, lbl_808863AC
    li r0, 0x0
    li r4, 0x3
    stw r4, 0x48(r1)
    addi r4, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8040FD30_000009E0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040FD30_00000A20
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8040FD30_00000A20:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8040FD30_00000A38
    cmpwi r0, 0x4
    beq lbl_fn_8040FD30_00000AD8
    b lbl_fn_8040FD30_00000B74
lbl_fn_8040FD30_00000A38:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040FD30_00000A74
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8040FD30_00000A74:
    lwz r3, 0x558(r31)
    lwz r0, 0x560(r31)
    cmpw r3, r0
    blt lbl_fn_8040FD30_00000AC8
    lfs f0, lbl_808863AC
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
lbl_fn_8040FD30_00000AC8:
    lwz r3, 0x558(r31)
    addi r0, r3, 0x1
    stw r0, 0x558(r31)
    b lbl_fn_8040FD30_00000B74
lbl_fn_8040FD30_00000AD8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040FD30_00000B14
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8040FD30_00000B14:
    lwz r3, 0x55c(r31)
    lwz r0, 0x564(r31)
    cmpw r3, r0
    blt lbl_fn_8040FD30_00000B68
    lfs f0, lbl_808863AC
    li r0, 0x0
    li r3, 0x5
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
lbl_fn_8040FD30_00000B68:
    lwz r3, 0x55c(r31)
    addi r0, r3, 0x1
    stw r0, 0x55c(r31)
lbl_fn_8040FD30_00000B74:
    mr r3, r31
    bl fn_8041044C
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8040FF5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040FF5C_00000BDC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_8040FF5C_00000BDC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040FFBC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8040FFBC_00000C3C
    addi r3, r30, 0x4c4
    bl fn_800580BC
    cmpwi r3, 0x0
    bne lbl_fn_8040FFBC_00000C3C
    addi r3, r30, 0x54c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8040FFBC_00000C40
lbl_fn_8040FFBC_00000C3C:
    li r31, 0x1
lbl_fn_8040FFBC_00000C40:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80410028(void)
{
    nofralloc
    stwu r1, -0x760(r1)
    mflr r0
    stw r0, 0x764(r1)
    stfd f31, 0x750(r1)
    psq_st f31, 0x758(r1), 0, 0
    stw r31, 0x74c(r1)
    mr r31, r3
    addi r3, r3, 0x60
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r29, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r29, lbl_80752C44@ha
    lfs f31, lbl_808863B0
    addi r29, r29, lbl_80752C44@l
lbl_fn_80410028_00000D18:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80410028_00000F58
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410028_00000D6C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r31
    addi r4, r31, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_80410028_00000F58
lbl_fn_80410028_00000D6C:
    mr r3, r30
    addi r4, r29, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410028_00000DB4
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r31, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_80410028_00000F58
lbl_fn_80410028_00000DB4:
    mr r3, r30
    addi r4, r29, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410028_00000DE0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x4c4
    bl fn_80058078
    b lbl_fn_80410028_00000F58
lbl_fn_80410028_00000DE0:
    mr r3, r30
    addi r4, r29, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410028_00000E0C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x54c
    bl fn_8023780C
    b lbl_fn_80410028_00000F58
lbl_fn_80410028_00000E0C:
    mr r3, r30
    addi r4, r29, 0x1f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410028_00000E44
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x560(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x564(r31)
    b lbl_fn_80410028_00000F58
lbl_fn_80410028_00000E44:
    mr r3, r30
    addi r4, r29, 0x26
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410028_00000E9C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    addi r0, r31, 0x568
    mr r30, r3
    cmplw r3, r0
    beq lbl_fn_80410028_00000E88
    bl strlen
    mr r5, r3
    mr r4, r30
    addi r3, r31, 0x568
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80410028_00000E88:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x588(r31)
    b lbl_fn_80410028_00000F58
lbl_fn_80410028_00000E9C:
    mr r3, r30
    addi r4, r29, 0x2f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410028_00000F1C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r30, r3
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC12C
    cmplwi r3, 0x1
    bgt lbl_fn_80410028_00000F58
    mulli r0, r30, 0x18
    mulli r4, r3, 0xc
    addi r3, r1, 0x108
    add r0, r31, r0
    add r30, r4, r0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x594(r30)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x598(r30)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f0, f31, f1
    stfs f0, 0x59c(r30)
    b lbl_fn_80410028_00000F58
lbl_fn_80410028_00000F1C:
    mr r3, r30
    addi r4, r29, 0x34
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410028_00000F58
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r30, r3
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    slwi r0, r30, 2
    add r3, r31, r0
    stfs f1, 0x58c(r3)
lbl_fn_80410028_00000F58:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80410028_00000D18
    lwz r0, 0x764(r1)
    psq_l f31, 0x758(r1), 0, 0
    lfd f31, 0x750(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x760
    blr
}

asm void fn_80410358(void)
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
    beq lbl_fn_80410358_00000FF0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80410358_00000FF0:
    addi r3, r31, 0x4c4
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
    lfs f0, lbl_808863AC
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
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8041044C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    bl _savegpr_25
    lis r29, lbl_80752C44@ha
    mr r25, r3
    addi r29, r29, lbl_80752C44@l
    li r5, 0x0
    addi r4, r29, 0x3e
    addi r3, r3, 0xf4
    bl fn_80092814
    stw r3, 0x10(r1)
    addi r3, r25, 0xf4
    addi r4, r29, 0x45
    li r5, 0x0
    bl fn_80092814
    stw r3, 0x14(r1)
    addi r28, r1, 0x8
    lfs f30, lbl_808863BC
    li r27, 0x0
    lfs f29, lbl_808863B8
    lis r29, lbl_80752C28@ha
    lfs f31, lbl_808863C0
lbl_fn_8041044C_00001100:
    lwz r30, 0x5d8(r25)
    lfs f8, 0x5cc(r25)
    lfs f7, 0x4(r30)
    lfs f0, 0x8(r30)
    lfd f2, lbl_80752C28@l(r29)
    fmadds f1, f7, f8, f0
    bl fn_8068AEA8
    frsp f1, f1
    fcmpo cr0, f1, f29
    ble lbl_fn_8041044C_0000112C
    fsubs f1, f1, f30
lbl_fn_8041044C_0000112C:
    fcmpo cr0, f1, f31
    bge lbl_fn_8041044C_00001138
    fadds f1, f1, f30
lbl_fn_8041044C_00001138:
    bl fn_8068AD58
    frsp f9, f1
    lwz r31, 0x5dc(r25)
    lfs f0, 0x0(r30)
    lfs f8, 0x5cc(r25)
    fmuls f28, f0, f9
    lfs f7, 0x4(r31)
    lfs f0, 0x8(r31)
    lfd f2, lbl_80752C28@l(r29)
    fmadds f1, f7, f8, f0
    bl fn_8068AEA8
    frsp f1, f1
    fcmpo cr0, f1, f29
    ble lbl_fn_8041044C_00001174
    fsubs f1, f1, f30
lbl_fn_8041044C_00001174:
    fcmpo cr0, f1, f31
    bge lbl_fn_8041044C_00001180
    fadds f1, f1, f30
lbl_fn_8041044C_00001180:
    bl fn_8068AD58
    lfs f7, 0x5cc(r25)
    frsp f9, f1
    lfs f0, 0x5d0(r25)
    lfs f8, 0x0(r31)
    fsubs f7, f7, f0
    lfs f0, 0x5d4(r25)
    lfs f10, lbl_8087DF80
    fmuls f8, f8, f9
    fdivs f0, f7, f0
    fcmpo cr0, f0, f10
    bge lbl_fn_8041044C_000011B4
    b lbl_fn_8041044C_000011C8
lbl_fn_8041044C_000011B4:
    lfs f10, lbl_8087DF84
    fcmpo cr0, f0, f10
    ble lbl_fn_8041044C_000011C4
    b lbl_fn_8041044C_000011C8
lbl_fn_8041044C_000011C4:
    fmr f10, f0
lbl_fn_8041044C_000011C8:
    fsubs f0, f28, f8
    addi r27, r27, 0x1
    cmpwi r27, 0x2
    fmadds f0, f10, f0, f8
    stfs f0, 0x0(r28)
    addi r28, r28, 0x4
    blt lbl_fn_8041044C_00001100
    lfs f31, lbl_808863AC
    addi r30, r1, 0x8
    addi r28, r1, 0x28
    addi r29, r1, 0x10
    li r27, 0x0
    li r31, 0x0
lbl_fn_8041044C_000011FC:
    lwzx r0, r29, r31
    cmpwi r0, -0x1
    ble lbl_fn_8041044C_00001274
    fmr f1, f31
    lfsx f2, r30, r31
    mulli r0, r0, 0x30
    lwz r3, 0x130(r25)
    stfs f31, 0x18(r1)
    fmr f3, f1
    stfs f2, 0x1c(r1)
    add r26, r3, r0
    addi r3, r1, 0x28
    stfs f31, 0x20(r1)
    bl fn_805F90D0
    psq_l f2, 0x8(r28), 0, 0
    mr r4, r26
    psq_l f3, 0x10(r28), 0, 0
    mr r5, r26
    psq_l f4, 0x18(r28), 0, 0
    addi r3, r25, 0xfc
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    bl fn_805F89F0
lbl_fn_8041044C_00001274:
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0x2
    blt lbl_fn_8041044C_000011FC
    lfs f7, 0x5cc(r25)
    lfs f0, lbl_808863C4
    fadds f0, f7, f0
    stfs f0, 0x5cc(r25)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80410698(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    bne lbl_fn_80410698_000012F8
    li r3, 0x0
    b lbl_fn_80410698_000015C8
lbl_fn_80410698_000012F8:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_80410698_00001320
    cmpwi r0, 0x3
    beq lbl_fn_80410698_00001430
    cmpwi r0, 0x4
    beq lbl_fn_80410698_000014C8
    cmpwi r0, 0x5
    beq lbl_fn_80410698_00001500
    b lbl_fn_80410698_000015C0
lbl_fn_80410698_00001320:
    lfs f0, lbl_808863AC
    addi r0, r3, 0x594
    li r5, 0x0
    lfs f1, lbl_808863A8
    stw r5, 0x558(r3)
    li r4, 0x0
    lfs f2, lbl_808863C8
    li r6, 0x0
    stw r5, 0x55c(r3)
    li r5, 0x0
    li r7, 0x1
    li r8, 0x1
    stfs f0, 0x5cc(r3)
    stfs f1, 0x5d4(r3)
    stfs f0, 0x5d0(r3)
    stw r0, 0x5d8(r3)
    stw r0, 0x5dc(r3)
    addi r3, r3, 0xf4
    bl fn_80097C08
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80410698_000013AC
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80410698_000013AC:
    addi r3, r30, 0x4c4
    psq_l f1, 0xfc(r30), 0, 0
    psq_l f2, 0x104(r30), 0, 0
    psq_l f3, 0x10c(r30), 0, 0
    psq_l f4, 0x114(r30), 0, 0
    psq_l f5, 0x11c(r30), 0, 0
    psq_l f6, 0x124(r30), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80410698_00001420
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_803ED5D0
lbl_fn_80410698_00001420:
    lwz r0, 0x4cc(r30)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r30)
    b lbl_fn_80410698_000015C0
lbl_fn_80410698_00001430:
    lfs f1, lbl_808863AC
    li r4, 0x0
    lfs f2, lbl_808863C8
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    lfs f0, lbl_808863AC
    li r3, -0x1
    lfs f1, lbl_808863A8
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x54c
    addi r5, r30, 0xf4
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x4cc(r30)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r30)
    b lbl_fn_80410698_000015C0
lbl_fn_80410698_000014C8:
    lfs f7, 0x58c(r3)
    addi r5, r3, 0x5ac
    lfs f0, lbl_808863B4
    addi r4, r3, 0x594
    lwz r0, 0x4cc(r3)
    fdivs f7, f7, f0
    lfs f0, 0x5cc(r3)
    ori r0, r0, 0x1
    stw r5, 0x5d8(r3)
    stw r4, 0x5dc(r3)
    stfs f0, 0x5d0(r3)
    stfs f7, 0x5d4(r3)
    stw r0, 0x4cc(r3)
    b lbl_fn_80410698_000015C0
lbl_fn_80410698_00001500:
    lfs f8, 0x590(r3)
    addi r5, r3, 0x594
    lfs f7, lbl_808863B4
    addi r0, r3, 0x5ac
    lfs f0, 0x5cc(r3)
    li r4, 0x0
    fdivs f7, f8, f7
    stw r5, 0x5d8(r3)
    stw r0, 0x5dc(r3)
    stfs f0, 0x5d0(r3)
    stfs f7, 0x5d4(r3)
    addi r3, r3, 0xf4
    bl fn_80097D7C
    stfs f1, 0x328(r30)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80410698_00001578
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80410698_00001578:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80410698_000015B4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_803ED5D0
lbl_fn_80410698_000015B4:
    lwz r0, 0x4cc(r30)
    ori r0, r0, 0x1
    stw r0, 0x4cc(r30)
lbl_fn_80410698_000015C0:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
lbl_fn_80410698_000015C8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804109AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808863AC
    li r5, 0x0
    stw r0, 0x34(r1)
    subi r0, r4, 0x2
    cmplwi r0, 0x3
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r5, 0x8(r1)
    stw r5, 0xc(r1)
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    ble lbl_fn_804109AC_00001650
    cmplwi r4, 0x1
    bgt lbl_fn_804109AC_0000166C
    li r0, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_804109AC_0000166C
lbl_fn_804109AC_00001650:
    li r0, 0x5
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_804109AC_0000166C:
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804109AC_00001680
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_804109AC_00001680:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80410A60(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_80410A68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80410A68_0000174C
    lis r5, lbl_80752C9C@ha
    li r3, 0x5d8
    addi r5, r5, lbl_80752C9C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80410A68_00001744
    lwz r5, 0x18(r31)
    mr r4, r29
    lwz r6, 0x1c(r31)
    bl fn_803EC568
    lis r4, lbl_8078D780@ha
    addi r3, r30, 0xf4
    addi r4, r4, lbl_8078D780@l
    stw r4, 0x0(r30)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    stw r31, 0x4c4(r30)
    li r31, 0x0
    lfs f0, lbl_808863D0
    addi r3, r30, 0x4d4
    stw r31, 0x4c8(r30)
    li r4, 0x0
    li r5, 0x100
    stfs f0, 0x4cc(r30)
    stw r31, 0x4d0(r30)
    bl memset
    stw r31, 0x54(r30)
lbl_fn_80410A68_00001744:
    mr r3, r30
    b lbl_fn_80410A68_00001750
lbl_fn_80410A68_0000174C:
    li r3, 0x0
lbl_fn_80410A68_00001750:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80410B38(void)
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
    beq lbl_fn_80410B38_000017B8
    li r4, -0x1
    addi r3, r3, 0xf4
    bl fn_800971D4
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_80410B38_000017B8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80410B38_000017B8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80410BA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_803EC91C
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80410BC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0xf4
    stw r0, 0x14(r1)
    bl fn_8008B140
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80410BF8(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r31, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80752C9C@ha
    addi r31, r31, lbl_80752C9C@l
lbl_fn_80410BF8_000018DC:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80410BF8_000019E8
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410BF8_00001930
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_80410BF8_000019E8
lbl_fn_80410BF8_00001930:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410BF8_00001978
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r29, 0xf4
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_80410BF8_000019E8
lbl_fn_80410BF8_00001978:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410BF8_000019C0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_80410BF8_000019E8
lbl_fn_80410BF8_000019C0:
    mr r3, r30
    addi r4, r31, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80410BF8_000019E8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x4d4
    bl strcpy
lbl_fn_80410BF8_000019E8:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80410BF8_000018DC
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}
