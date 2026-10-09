#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_80059550(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_80092814(void);
extern void fn_80092F1C(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800DC288(void);
extern void fn_800EF73C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_8012476C(void);
extern void fn_801539E0(void);
extern void fn_80169F04(void);
extern void fn_8016A20C(void);
extern void fn_8016A504(void);
extern void fn_8016A7EC(void);
extern void fn_8016A814(void);
extern void fn_8016EB48(void);
extern void fn_802180A8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_80412968(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80682428(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80752D00[];
extern u8 lbl_80752D14[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D818[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_808863D0;
extern u32 lbl_808863D4;
extern u32 lbl_808863D8;
extern u32 lbl_808863DC;
extern u32 lbl_808863E0;
extern u32 lbl_808863E4;
extern u32 lbl_808863E8;
extern u32 lbl_808863EC;
extern u32 lbl_808863F0;
extern u32 lbl_808863F4;
extern u32 lbl_808863F8;
extern u32 lbl_808863FC;
extern u32 lbl_80886400;
extern u32 lbl_80886404;
extern u32 lbl_80886408;
extern u32 lbl_8088640C;

/* Function declarations */
void fn_80410DE0(void);
void fn_80410E84(void);
void fn_80411230(void);
void fn_804112B0(void);
void fn_80411438(void);
void fn_80411440(void);
void fn_804114B4(void);
void fn_8041158C(void);
void fn_8041167C(void);
void fn_80411720(void);
void fn_804119D4(void);
void fn_80411AA8(void);
void fn_80411AF4(void);
void fn_80411BC4(void);
void fn_804120B8(void);
void fn_804120C0(void);

asm void fn_80410DE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_808863D4
    stw r0, 0x14(r1)
    lfs f3, lbl_808863D8
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4c4(r3)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f4, 0x14(r4)
    stfs f4, 0x7c(r3)
    stfs f0, 0x78(r3)
    stfs f0, 0x80(r3)
    lfs f0, 0x40(r4)
    fmuls f0, f3, f0
    stfs f0, 0x4cc(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80410DE0_00000088
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80410DE0_00000088:
    li r0, 0x1
    stw r0, 0x54(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80410E84(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80410E84_000000E0
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_80410E84_000000E0:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80410E84_00000430
    cmpwi r0, 0x1
    beq lbl_fn_80410E84_00000430
    cmpwi r0, 0x6
    bne lbl_fn_80410E84_00000100
    b lbl_fn_80410E84_00000430
lbl_fn_80410E84_00000100:
    lwz r3, 0x4d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80410E84_0000016C
    addi r30, r3, 0xb0
    addi r4, r31, 0x4d4
    mr r3, r30
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80410E84_00000130
    li r4, 0x0
    b lbl_fn_80410E84_0000013C
lbl_fn_80410E84_00000130:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r4, r3, r0
lbl_fn_80410E84_0000013C:
    cmpwi r4, 0x0
    beq lbl_fn_80410E84_0000016C
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x6c(r31), 0, 0
    stfs f2, 0x74(r31)
lbl_fn_80410E84_0000016C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80410E84_000001AC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80410E84_000001AC:
    lwz r3, 0x54(r31)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_80410E84_00000394
    cmpwi r3, 0x2
    beq lbl_fn_80410E84_000001D0
    cmpwi r3, 0x3
    beq lbl_fn_80410E84_00000270
    b lbl_fn_80410E84_00000430
lbl_fn_80410E84_000001D0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80410E84_0000020C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80410E84_0000020C:
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80410E84_00000430
    lfs f0, lbl_808863D4
    li r0, 0x0
    li r3, 0x3
    stw r3, 0x78(r1)
    mr r3, r31
    addi r4, r1, 0x78
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80410E84_00000430
lbl_fn_80410E84_00000270:
    lwz r4, lbl_8087F490
    li r0, 0x1
    mr r3, r31
    stw r0, 0x728(r4)
    lwz r12, 0x0(r31)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80410E84_000002B8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80410E84_000002B8:
    lwz r3, lbl_8087F0A8
    li r4, 0x22
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_80410E84_000002DC
    lwz r3, 0x4c8(r31)
    subi r0, r3, 0x1
    stw r0, 0x4c8(r31)
lbl_fn_80410E84_000002DC:
    lwz r3, 0x4d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80410E84_00000340
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80410E84_00000340
    lfs f0, lbl_808863D4
    li r0, 0x0
    li r3, 0x5
    stw r3, 0x58(r1)
    mr r3, r31
    addi r4, r1, 0x58
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80410E84_00000430
lbl_fn_80410E84_00000340:
    lwz r0, 0x4c8(r31)
    cmpwi r0, 0x0
    bge lbl_fn_80410E84_00000430
    lfs f0, lbl_808863D4
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x38(r1)
    mr r3, r31
    addi r4, r1, 0x38
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80410E84_00000430
lbl_fn_80410E84_00000394:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80410E84_000003D0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80410E84_000003D0:
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80410E84_00000430
    lfs f0, lbl_808863D4
    li r0, 0x0
    li r3, 0x6
    stw r3, 0x18(r1)
    mr r3, r31
    addi r4, r1, 0x18
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80410E84_00000430:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80411230(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80411230_000004BC
    cmpwi r0, 0x1
    beq lbl_fn_80411230_000004BC
    cmpwi r0, 0x6
    bne lbl_fn_80411230_00000484
    b lbl_fn_80411230_000004BC
lbl_fn_80411230_00000484:
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80411230_000004BC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_80411230_000004BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804112B0(void)
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
    bne lbl_fn_804112B0_000004FC
    li r3, 0x0
    b lbl_fn_804112B0_00000640
lbl_fn_804112B0_000004FC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x2
    beq lbl_fn_804112B0_0000052C
    cmpwi r0, 0x3
    beq lbl_fn_804112B0_0000057C
    cmpwi r0, 0x4
    beq lbl_fn_804112B0_000005B4
    cmpwi r0, 0x5
    beq lbl_fn_804112B0_00000600
    cmpwi r0, 0x6
    beq lbl_fn_804112B0_00000630
    b lbl_fn_804112B0_00000638
lbl_fn_804112B0_0000052C:
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x4d0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804112B0_0000054C
    lfs f1, 0x4cc(r30)
    mr r3, r0
    bl fn_8016A814
lbl_fn_804112B0_0000054C:
    lfs f1, lbl_808863D4
    addi r3, r30, 0xf4
    lfs f2, lbl_808863DC
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808863D0
    stfs f0, 0x32c(r30)
    b lbl_fn_804112B0_00000638
lbl_fn_804112B0_0000057C:
    li r0, 0x1e
    stw r0, 0x4c8(r3)
    lfs f1, lbl_808863D4
    li r4, 0x0
    lfs f2, lbl_808863DC
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    lfs f0, lbl_808863D0
    stfs f0, 0x32c(r30)
    b lbl_fn_804112B0_00000638
lbl_fn_804112B0_000005B4:
    lwz r3, 0x4d0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804112B0_000005D0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_804112B0_000005D0:
    lfs f1, lbl_808863D4
    addi r3, r30, 0xf4
    lfs f2, lbl_808863DC
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808863D0
    stfs f0, 0x32c(r30)
    b lbl_fn_804112B0_00000638
lbl_fn_804112B0_00000600:
    lfs f1, lbl_808863D4
    li r4, 0x0
    lfs f2, lbl_808863DC
    li r5, 0x2
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    lfs f0, lbl_808863D0
    stfs f0, 0x32c(r30)
    b lbl_fn_804112B0_00000638
lbl_fn_804112B0_00000630:
    li r0, 0x0
    stw r0, 0x4d0(r3)
lbl_fn_804112B0_00000638:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
lbl_fn_804112B0_00000640:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80411438(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_80411440(void)
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
    beq lbl_fn_80411440_000006B8
    lis r5, lbl_80752D14@ha
    li r3, 0x6a0
    addi r5, r5, lbl_80752D14@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80411440_000006BC
    mr r4, r30
    mr r5, r31
    bl fn_804114B4
    b lbl_fn_80411440_000006BC
lbl_fn_80411440_000006B8:
    li r3, 0x0
lbl_fn_80411440_000006BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804114B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r31)
    bl fn_803EC568
    lis r4, lbl_8078D818@ha
    addi r3, r30, 0xf4
    addi r4, r4, lbl_8078D818@l
    stw r4, 0x0(r30)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r30, 0x4c4
    bl fn_80057F28
    lis r4, fn_80057F28@ha
    lis r5, fn_80059550@ha
    addi r3, r30, 0x54c
    li r6, 0x88
    addi r4, r4, fn_80057F28@l
    addi r5, r5, fn_80059550@l
    li r7, 0x2
    bl fn_806958E0
    stw r31, 0x65c(r30)
    addi r3, r30, 0x660
    bl fn_802377B8
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    addi r3, r30, 0x66c
    li r6, 0xc
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r7, 0x2
    bl fn_806958E0
    addi r3, r30, 0x684
    bl fn_800CB360
    li r0, 0x0
    stw r0, 0x688(r30)
    mr r3, r30
    stw r0, 0x68c(r30)
    stw r0, 0x690(r30)
    stw r0, 0x694(r30)
    stw r0, 0x698(r30)
    stw r0, 0x54(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041158C(void)
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
    beq lbl_fn_8041158C_0000087C
    li r4, -0x1
    addi r3, r3, 0x684
    bl fn_800CB3A0
    lis r4, fn_800EF73C@ha
    addi r3, r29, 0x66c
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x2
    bl fn_806959D8
    addic. r31, r29, 0x660
    beq lbl_fn_8041158C_00000818
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8041158C_00000818
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8041158C_00000818:
    lis r4, fn_80059550@ha
    addi r3, r29, 0x54c
    addi r4, r4, fn_80059550@l
    li r5, 0x88
    li r6, 0x2
    bl fn_806959D8
    addic. r31, r29, 0x4c4
    beq lbl_fn_8041158C_00000854
    addic. r3, r31, 0x3c
    beq lbl_fn_8041158C_00000848
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8041158C_00000848:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8041158C_00000854:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8041158C_0000087C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8041158C_0000087C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8041167C(void)
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
    bne lbl_fn_8041167C_00000920
    addi r3, r31, 0x4c4
    bl fn_800580BC
    cmpwi r3, 0x0
    bne lbl_fn_8041167C_00000920
    addi r3, r31, 0x54c
    bl fn_800580BC
    cmpwi r3, 0x0
    bne lbl_fn_8041167C_00000920
    addi r3, r31, 0x5d4
    bl fn_800580BC
    cmpwi r3, 0x0
    bne lbl_fn_8041167C_00000920
    addi r3, r31, 0x66c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8041167C_00000920
    addi r3, r31, 0x678
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8041167C_00000920
    addi r3, r31, 0x660
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8041167C_00000928
lbl_fn_8041167C_00000920:
    li r3, 0x1
    b lbl_fn_8041167C_0000092C
lbl_fn_8041167C_00000928:
    li r3, 0x0
lbl_fn_8041167C_0000092C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80411720(void)
{
    nofralloc
    stwu r1, -0x850(r1)
    mflr r0
    stw r0, 0x854(r1)
    stw r31, 0x84c(r1)
    stw r30, 0x848(r1)
    stw r29, 0x844(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x208(r1)
    mr r31, r3
    addi r3, r1, 0x218
    stw r0, 0x20c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x210(r1)
    stw r0, 0x214(r1)
    stw r0, 0x838(r1)
    bl memset
    addi r3, r1, 0x818
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x208(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x208
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x208
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x208(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80752D14@ha
    addi r31, r31, lbl_80752D14@l
lbl_fn_80411720_000009F0:
    addi r3, r1, 0x208
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80411720_00000BC8
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80411720_00000A34
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_80411720_00000BC8
lbl_fn_80411720_00000A34:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80411720_00000A7C
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x108
    bl strcpy
    addi r3, r1, 0x208
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r29, 0xf4
    addi r4, r1, 0x108
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_80411720_00000BC8
lbl_fn_80411720_00000A7C:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80411720_00000AC4
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x208
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_80411720_00000BC8
lbl_fn_80411720_00000AC4:
    mr r3, r30
    addi r4, r31, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80411720_00000AF0
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x4c4
    bl fn_80058078
    b lbl_fn_80411720_00000BC8
lbl_fn_80411720_00000AF0:
    mr r3, r30
    addi r4, r31, 0x25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80411720_00000B1C
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x54c
    bl fn_80058078
    b lbl_fn_80411720_00000BC8
lbl_fn_80411720_00000B1C:
    mr r3, r30
    addi r4, r31, 0x36
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80411720_00000B48
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x5d4
    bl fn_80058078
    b lbl_fn_80411720_00000BC8
lbl_fn_80411720_00000B48:
    mr r3, r30
    addi r4, r31, 0x48
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80411720_00000B74
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x660
    bl fn_8023780C
    b lbl_fn_80411720_00000BC8
lbl_fn_80411720_00000B74:
    mr r3, r30
    addi r4, r31, 0x4c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80411720_00000BA0
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x66c
    bl fn_8023780C
    b lbl_fn_80411720_00000BC8
lbl_fn_80411720_00000BA0:
    mr r3, r30
    addi r4, r31, 0x5a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80411720_00000BC8
    addi r3, r1, 0x208
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x678
    bl fn_8023780C
lbl_fn_80411720_00000BC8:
    addi r3, r1, 0x208
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80411720_000009F0
    lwz r0, 0x854(r1)
    lwz r31, 0x84c(r1)
    lwz r30, 0x848(r1)
    lwz r29, 0x844(r1)
    mtlr r0
    addi r1, r1, 0x850
    blr
}

asm void fn_804119D4(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    mr r31, r3
    addi r3, r3, 0x60
    stw r30, 0x648(r1)
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x60
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
lbl_fn_804119D4_00000C98:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804119D4_00000C98
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80411AA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80411AA8_00000CFC
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    li r3, 0x1
    b lbl_fn_80411AA8_00000D00
lbl_fn_80411AA8_00000CFC:
    li r3, 0x0
lbl_fn_80411AA8_00000D00:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80411AF4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808863E0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r4, 0x65c(r3)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f3, 0x14(r4)
    stfs f3, 0x7c(r3)
    stfs f0, 0x78(r3)
    stfs f0, 0x80(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80411AF4_00000D8C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80411AF4_00000D8C:
    lfs f0, lbl_808863E0
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

asm void fn_80411BC4(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80411BC4_00000E24
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_80411BC4_00000EAC
lbl_fn_80411BC4_00000E24:
    cmpwi r0, 0x2
    bne lbl_fn_80411BC4_00000EAC
    lfs f0, lbl_808863E0
    li r0, 0x0
    li r4, 0x3
    stw r4, 0x90(r1)
    addi r4, r1, 0x90
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80411BC4_00000EAC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80411BC4_00000EAC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80411BC4_00000EEC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80411BC4_00000EEC:
    lwz r3, 0x54(r31)
    lwz r5, 0x4cc(r31)
    subi r0, r3, 0x3
    lwz r4, 0x554(r31)
    lwz r3, 0x5dc(r31)
    cmplwi r0, 0x3
    clrrwi r5, r5, 1
    clrrwi r4, r4, 1
    clrrwi r0, r3, 1
    stw r5, 0x4cc(r31)
    stw r4, 0x554(r31)
    stw r0, 0x5dc(r31)
    bgt lbl_fn_80411BC4_00000F80
    lwz r0, 0x68c(r31)
    mulli r0, r0, 0x88
    add r3, r31, r0
    lwz r0, 0x554(r3)
    ori r0, r0, 0x1
    stw r0, 0x554(r3)
    lwz r0, 0x68c(r31)
    psq_l f2, 0x104(r31), 0, 0
    mulli r0, r0, 0x88
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    add r3, r31, r0
    psq_l f6, 0x124(r31), 0, 0
    addi r3, r3, 0x54c
    psq_l f1, 0xfc(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    b lbl_fn_80411BC4_00000FC0
lbl_fn_80411BC4_00000F80:
    addi r3, r31, 0x4c4
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    ori r0, r5, 0x1
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    stw r0, 0x4cc(r31)
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
lbl_fn_80411BC4_00000FC0:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    beq lbl_fn_80411BC4_00000FD8
    cmpwi r0, 0x4
    beq lbl_fn_80411BC4_0000108C
    b lbl_fn_80411BC4_000012B8
lbl_fn_80411BC4_00000FD8:
    lwz r3, lbl_8087F430
    li r4, 0x3
    bl fn_80370A78
    lwz r4, 0x690(r31)
    mr r5, r3
    subic. r0, r4, 0x1
    stw r0, 0x690(r31)
    bge lbl_fn_80411BC4_0000104C
    lwz r3, lbl_8087F430
    addi r5, r5, 0x1
    li r4, 0x3
    bl fn_80370AE4
    lfs f0, lbl_808863E0
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x70(r1)
    mr r3, r31
    addi r4, r1, 0x70
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80411BC4_0000104C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80411BC4_000012B8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
    b lbl_fn_80411BC4_000012B8
lbl_fn_80411BC4_0000108C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80411BC4_000010C8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80411BC4_000010C8:
    lwz r0, 0x694(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80411BC4_0000115C
    lwz r0, 0x688(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80411BC4_0000115C
    subic. r0, r0, 0x1
    stw r0, 0x688(r31)
    bne lbl_fn_80411BC4_0000115C
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808863E0
    li r11, -0x1
    lfs f1, lbl_808863E4
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x660
    lwz r3, lbl_8087F3C0
    addi r5, r31, 0xf4
    stfs f0, 0x24(r1)
    addi r7, r1, 0x14
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    stfs f0, 0x28(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_80411BC4_0000115C:
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80411BC4_000012B8
    lwz r0, 0x694(r31)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80411BC4_00001238
    li r3, 0xfa4
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80411BC4_00001230
    lis r4, lbl_80752D14@ha
    lfs f1, lbl_808863E4
    addi r4, r4, lbl_80752D14@l
    addi r3, r1, 0x10
    addi r4, r4, 0x69
    addi r5, r31, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f2, 0x74(r31)
    addi r7, r1, 0x40
    psq_l f1, 0x6c(r31), 0, 0
    li r9, -0x1
    psq_st f1, 0x0(r7), 0, 0
    li r0, 0x2
    lfs f0, lbl_808863E8
    mr r6, r3
    lfs f7, 0x44(r1)
    mr r5, r30
    stfs f2, 0x48(r1)
    addi r8, r31, 0x78
    fadds f0, f7, f0
    lfs f1, lbl_808863EC
    lfs f2, lbl_808863E4
    li r4, 0x0
    stfs f0, 0x44(r1)
    li r10, 0x1e
    stw r9, 0x8(r1)
    li r9, 0x0
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    bl fn_800FAB80
lbl_fn_80411BC4_00001230:
    li r30, 0x1
    b lbl_fn_80411BC4_00001254
lbl_fn_80411BC4_00001238:
    lwz r3, 0x698(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80411BC4_00001254
    bl fn_8016A7EC
    cmpwi r3, 0x0
    beq lbl_fn_80411BC4_00001254
    li r30, 0x1
lbl_fn_80411BC4_00001254:
    cmpwi r30, 0x0
    beq lbl_fn_80411BC4_000012B8
    lfs f0, lbl_808863E0
    li r30, 0x0
    stw r30, 0x50(r1)
    mr r3, r31
    addi r4, r1, 0x50
    stw r30, 0x54(r1)
    stw r30, 0x58(r1)
    stw r30, 0x5c(r1)
    stw r30, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    lwz r0, 0x68c(r31)
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r5, r0
    addi r0, r5, 0x6
    stw r0, 0x50(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    stw r30, 0x698(r31)
lbl_fn_80411BC4_000012B8:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_804120B8(void)
{
    nofralloc
    addi r3, r3, 0xf4
    b fn_8008CD60
}

asm void fn_804120C0(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x1f0
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r4
    bne lbl_fn_804120C0_0000131C
    li r3, 0x0
    b lbl_fn_804120C0_00001AA0
lbl_fn_804120C0_0000131C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_804120C0_0000134C
    cmpwi r0, 0x3
    beq lbl_fn_804120C0_000013BC
    cmpwi r0, 0x4
    beq lbl_fn_804120C0_000016EC
    cmpwi r0, 0x5
    beq lbl_fn_804120C0_0000197C
    cmpwi r0, 0x6
    beq lbl_fn_804120C0_00001A0C
    b lbl_fn_804120C0_00001A98
lbl_fn_804120C0_0000134C:
    lfs f1, lbl_808863E4
    li r4, 0x0
    lfs f2, lbl_808863F0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    lfs f0, lbl_808863E0
    mr r3, r30
    stfs f0, 0x328(r30)
    stfs f0, 0x32c(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804120C0_00001A98
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_803ED5D0
    b lbl_fn_804120C0_00001A98
lbl_fn_804120C0_000013BC:
    lwz r4, lbl_8087F8A0
    lwz r27, 0x48(r4)
    cmpwi r27, 0x0
    bne lbl_fn_804120C0_000013D4
    li r3, 0x0
    b lbl_fn_804120C0_00001AA0
lbl_fn_804120C0_000013D4:
    lfs f3, 0x530(r27)
    addi r29, r1, 0xf8
    lfs f0, 0x74(r3)
    addi r5, r1, 0xd4
    lfs f5, 0x52c(r27)
    mr r4, r29
    fsubs f2, f3, f0
    lfs f4, 0x70(r3)
    lfs f0, 0x6c(r3)
    mr r3, r29
    lfs f3, 0x528(r27)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xdc(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F98D0
    lfs f2, 0x100(r1)
    addi r28, r1, 0xc8
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_808863F4
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xd0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_804120C0_00001470
    lfs f3, 0xc8(r1)
    lfs f0, lbl_808863E0
    fcmpo cr0, f3, f0
    ble lbl_fn_804120C0_00001464
    lfs f0, lbl_808863F8
    b lbl_fn_804120C0_00001468
lbl_fn_804120C0_00001464:
    lfs f0, lbl_808863FC
lbl_fn_804120C0_00001468:
    stfs f0, 0xa8(r1)
    b lbl_fn_804120C0_00001484
lbl_fn_804120C0_00001470:
    frsp f2, f2
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xa8(r1)
lbl_fn_804120C0_00001484:
    lfs f0, 0xa8(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808863E0
    addi r4, r1, 0x98
    lfs f30, 0x110(r1)
    mr r5, r4
    lfs f31, 0x10c(r1)
    addi r3, r1, 0x138
    lfs f13, 0x108(r1)
    lfs f12, 0x120(r1)
    lfs f11, 0x11c(r1)
    lfs f10, 0x118(r1)
    lfs f9, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f7, 0x128(r1)
    lfs f6, 0x134(r1)
    lfs f5, 0x124(r1)
    lfs f4, 0x114(r1)
    lfs f0, lbl_808863E4
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f13, 0x68(r1)
    stfs f31, 0x6c(r1)
    stfs f30, 0x70(r1)
    stfs f13, 0x138(r1)
    stfs f31, 0x13c(r1)
    stfs f30, 0x140(r1)
    stfs f10, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f10, 0x148(r1)
    stfs f11, 0x14c(r1)
    stfs f12, 0x150(r1)
    stfs f7, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f7, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f9, 0x160(r1)
    stfs f4, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f4, 0x144(r1)
    stfs f5, 0x154(r1)
    stfs f6, 0x164(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F9750
    lfs f2, 0xa0(r1)
    lfs f0, lbl_808863F4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804120C0_000015A0
    lfs f3, 0x9c(r1)
    lfs f0, lbl_808863E0
    fcmpo cr0, f3, f0
    ble lbl_fn_804120C0_00001590
    lfs f0, lbl_808863F8
    b lbl_fn_804120C0_00001594
lbl_fn_804120C0_00001590:
    lfs f0, lbl_808863FC
lbl_fn_804120C0_00001594:
    fneg f0, f0
    stfs f0, 0xa4(r1)
    b lbl_fn_804120C0_000015B4
lbl_fn_804120C0_000015A0:
    lfs f1, 0x9c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa4(r1)
lbl_fn_804120C0_000015B4:
    addi r3, r1, 0xa4
    lfs f4, lbl_808863E0
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80752D00@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f4
    lfs f0, 0x7c(r30)
    lfs f3, 0xcc(r1)
    stfs f2, 0xd0(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80752D00@l(r3)
    stfs f4, 0xac(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886400
    fcmpo cr0, f3, f0
    ble lbl_fn_804120C0_00001600
    lfs f0, lbl_80886404
    fsubs f3, f3, f0
lbl_fn_804120C0_00001600:
    lfs f0, lbl_80886408
    fcmpo cr0, f3, f0
    bge lbl_fn_804120C0_00001614
    lfs f0, lbl_80886404
    fadds f3, f3, f0
lbl_fn_804120C0_00001614:
    lfs f0, lbl_808863E0
    fcmpo cr0, f3, f0
    bge lbl_fn_804120C0_0000162C
    li r0, 0x0
    stw r0, 0x68c(r30)
    b lbl_fn_804120C0_00001634
lbl_fn_804120C0_0000162C:
    li r0, 0x1
    stw r0, 0x68c(r30)
lbl_fn_804120C0_00001634:
    lfs f3, lbl_808863E0
    lfs f0, lbl_8088640C
    stfs f3, 0xec(r1)
    stfs f3, 0xf0(r1)
    stfs f0, 0xf4(r1)
    lwz r0, 0x68c(r30)
    lfs f30, 0x7c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804120C0_00001664
    lfs f0, lbl_808863F8
    fsubs f30, f30, f0
    b lbl_fn_804120C0_0000166C
lbl_fn_804120C0_00001664:
    lfs f0, lbl_808863F8
    fadds f30, f30, f0
lbl_fn_804120C0_0000166C:
    fmr f1, f30
    addi r3, r1, 0x1a8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0xec
    addi r3, r1, 0x1a8
    mr r5, r4
    bl fn_805F93C0
    mr r3, r27
    bl fn_801539E0
    lfs f0, lbl_80886400
    mr r3, r27
    lfs f4, 0x74(r30)
    addi r4, r1, 0xbc
    lfs f3, 0xf4(r1)
    fsubs f1, f30, f0
    lfs f5, 0x70(r30)
    fadds f6, f4, f3
    lfs f4, 0xf0(r1)
    lfs f3, 0x6c(r30)
    lfs f0, 0xec(r1)
    fadds f4, f5, f4
    stfs f6, 0xc4(r1)
    fadds f0, f3, f0
    stfs f4, 0xc0(r1)
    stfs f0, 0xbc(r1)
    bl fn_80169F04
    li r0, 0x4
    stw r0, 0x690(r30)
    mr r3, r30
    bl fn_80412968
    b lbl_fn_804120C0_00001A98
lbl_fn_804120C0_000016EC:
    lwz r4, lbl_8087F8A0
    lwz r28, 0x48(r4)
    cmpwi r28, 0x0
    bne lbl_fn_804120C0_00001704
    li r3, 0x0
    b lbl_fn_804120C0_00001AA0
lbl_fn_804120C0_00001704:
    lfs f3, lbl_808863E0
    lfs f0, lbl_8088640C
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f0, 0xe8(r1)
    lwz r0, 0x68c(r3)
    lfs f30, 0x7c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804120C0_00001734
    lfs f0, lbl_808863F8
    fsubs f30, f30, f0
    b lbl_fn_804120C0_0000173C
lbl_fn_804120C0_00001734:
    lfs f0, lbl_808863F8
    fadds f30, f30, f0
lbl_fn_804120C0_0000173C:
    fmr f1, f30
    addi r3, r1, 0x178
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0xe0
    addi r3, r1, 0x178
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x74(r30)
    mr r3, r28
    lfs f3, 0xe8(r1)
    addi r4, r1, 0xb0
    lfs f5, 0x70(r30)
    fadds f6, f4, f3
    lfs f0, 0xe4(r1)
    lfs f4, 0x6c(r30)
    fadds f5, f5, f0
    lfs f3, 0xe0(r1)
    stfs f6, 0xb8(r1)
    fadds f3, f4, f3
    lfs f0, lbl_80886400
    stfs f5, 0xb4(r1)
    fsubs f1, f30, f0
    stfs f3, 0xb0(r1)
    lwz r5, 0x694(r30)
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r5, r0, 5
    bl fn_8016A20C
    lwz r0, 0x68c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804120C0_000017E4
    lfs f1, lbl_808863E0
    addi r3, r30, 0xf4
    lfs f2, lbl_808863F0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_804120C0_00001808
lbl_fn_804120C0_000017E4:
    lfs f1, lbl_808863E0
    addi r3, r30, 0xf4
    lfs f2, lbl_808863F0
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_804120C0_00001808:
    lfs f1, lbl_808863E4
    li r11, -0x1
    lwz r3, 0x68c(r30)
    li r0, 0x1
    stfs f1, 0x32c(r30)
    addi r5, r30, 0xf4
    lfs f0, lbl_808863E0
    mulli r4, r3, 0xc
    stfs f0, 0x4c(r1)
    addi r7, r1, 0x40
    lwz r3, lbl_8087F3C0
    addi r8, r1, 0x4c
    stfs f0, 0x50(r1)
    add r4, r30, r4
    addi r9, r1, 0x58
    stfs f0, 0x54(r1)
    addi r4, r4, 0x66c
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lwz r0, 0x694(r30)
    cmpwi r0, 0x1
    beq lbl_fn_804120C0_00001894
    cmpwi r0, 0x2
    beq lbl_fn_804120C0_00001904
    b lbl_fn_804120C0_00001970
lbl_fn_804120C0_00001894:
    lwz r0, 0x698(r30)
    cmpwi r0, 0x0
    beq lbl_fn_804120C0_00001970
    lfs f2, 0x74(r30)
    addi r3, r1, 0x28
    psq_l f1, 0x6c(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_808863EC
    lfs f3, 0x2c(r1)
    stfs f2, 0x30(r1)
    fadds f3, f3, f0
    lfs f0, lbl_808863E0
    stfs f3, 0x2c(r1)
    lfs f3, 0x7c(r30)
    stfs f3, 0x38(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x3c(r1)
    lwz r0, 0x68c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804120C0_000018F0
    lfs f0, lbl_80886400
    fadds f0, f3, f0
    stfs f0, 0x38(r1)
lbl_fn_804120C0_000018F0:
    lwz r3, 0x698(r30)
    addi r4, r1, 0x28
    addi r5, r1, 0x34
    bl fn_8016A504
    b lbl_fn_804120C0_00001970
lbl_fn_804120C0_00001904:
    lwz r0, 0x698(r30)
    cmpwi r0, 0x0
    beq lbl_fn_804120C0_00001970
    lfs f2, 0x74(r30)
    addi r3, r1, 0x10
    psq_l f1, 0x6c(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_808863EC
    lfs f3, 0x14(r1)
    stfs f2, 0x18(r1)
    fadds f3, f3, f0
    lfs f0, lbl_808863E0
    stfs f3, 0x14(r1)
    lfs f3, 0x7c(r30)
    stfs f3, 0x20(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x68c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804120C0_00001960
    lfs f0, lbl_80886400
    fadds f0, f3, f0
    stfs f0, 0x20(r1)
lbl_fn_804120C0_00001960:
    lwz r3, 0x698(r30)
    addi r4, r1, 0x10
    addi r5, r1, 0x1c
    bl fn_8016A504
lbl_fn_804120C0_00001970:
    li r0, 0x28
    stw r0, 0x688(r30)
    b lbl_fn_804120C0_00001A98
lbl_fn_804120C0_0000197C:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x4
    beq lbl_fn_804120C0_00001A98
    li r0, 0x0
    stw r0, 0x68c(r3)
    lfs f1, lbl_808863E4
    li r4, 0x0
    lfs f2, lbl_808863F0
    li r5, 0x1
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    addi r3, r30, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808863E4
    mr r3, r30
    stfs f1, 0x328(r30)
    stfs f0, 0x32c(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804120C0_00001A98
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_803ED5D0
    b lbl_fn_804120C0_00001A98
lbl_fn_804120C0_00001A0C:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x4
    beq lbl_fn_804120C0_00001A98
    li r0, 0x1
    stw r0, 0x68c(r3)
    lfs f1, lbl_808863E4
    li r4, 0x0
    lfs f2, lbl_808863F0
    li r5, 0x2
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    addi r3, r30, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808863E4
    mr r3, r30
    stfs f1, 0x328(r30)
    stfs f0, 0x32c(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804120C0_00001A98
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_803ED5D0
lbl_fn_804120C0_00001A98:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
lbl_fn_804120C0_00001AA0:
    addi r11, r1, 0x1f0
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    bl _restgpr_27
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}
