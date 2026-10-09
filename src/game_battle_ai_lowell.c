#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004ECC0(void);
extern void fn_80051B70(void);
extern void fn_80051CD8(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800A4228(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_80211480(void);
extern void fn_80216AFC(void);
extern void fn_8021D990(void);
extern void fn_8021D9D4(void);
extern void fn_8021E4E4(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8036E098(void);
extern void fn_8036E92C(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803750E4(void);
extern void fn_80375184(void);
extern void fn_803E3050(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ECBD4(void);
extern void fn_804392C0(void);
extern void fn_8043A08C(void);
extern void fn_80445130(void);
extern void fn_80448F9C(void);
extern void fn_8044D710(void);
extern void fn_8044D884(void);
extern void fn_8044D9BC(void);
extern void fn_8044E418(void);
extern void fn_8044E610(void);
extern void fn_8044E644(void);
extern void fn_8044F2D4(void);
extern void fn_80450B60(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_8054E100(void);
extern void fn_8054E52C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_807541F0[];
extern u8 lbl_80754288[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078EF70[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7060[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF68;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_808868CC;
extern u32 lbl_808868D0;
extern u32 lbl_808868D4;
extern u32 lbl_808868D8;
extern u32 lbl_808868DC;
extern u32 lbl_808868E0;
extern u32 lbl_808868E4;
extern u32 lbl_808868E8;
extern u32 lbl_808868EC;
extern u32 lbl_808868F0;
extern u32 lbl_808868F4;
extern u32 lbl_808868F8;
extern u32 lbl_80886900;
extern u32 lbl_80886904;
extern u32 lbl_80886908;
extern u32 lbl_8088690C;
extern u32 lbl_80886910;
extern u32 lbl_80886914;
extern u32 lbl_80886918;
extern u32 lbl_8088691C;
extern u32 lbl_80886920;
extern u32 lbl_80886924;
extern u32 lbl_80886928;

/* Function declarations */
void fn_80436000(void);
void fn_80436028(void);
void fn_804360D4(void);
void fn_804365D4(void);
void fn_804365FC(void);
void fn_80436624(void);
void fn_804366A0(void);
void fn_80436800(void);
void fn_80436804(void);
void fn_80436B44(void);
void fn_80436B9C(void);
void fn_80436CA8(void);
void fn_80436D04(void);
void fn_80436E34(void);
void fn_80436EB8(void);
void fn_80437054(void);
void fn_8043711C(void);
void fn_8043723C(void);
void fn_804372E4(void);
void fn_8043730C(void);
void fn_804375C0(void);

asm void fn_80436000(void)
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

asm void fn_80436028(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x198(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80436028_000000C0
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ECBD4
    lfs f0, lbl_808868CC
    li r3, 0x0
    li r0, 0x1
    stw r0, 0x8(r1)
    stw r3, 0xc(r1)
    stw r3, 0x10(r1)
    stw r3, 0x14(r1)
    stw r3, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x58(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80436028_000000A8
    stw r3, 0x8(r1)
lbl_fn_80436028_000000A8:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80436028_000000C0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804360D4(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    lwz r4, lbl_8087F0A8
    lwz r0, 0x198(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804360D4_000005B4
    lwz r4, 0x338(r3)
    li r0, 0x1
    lwz r30, 0x33c(r3)
    cmpwi r4, 0x0
    stw r0, 0x33c(r3)
    beq lbl_fn_804360D4_00000130
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804360D4_00000130
    li r0, 0x0
    stw r0, 0x33c(r3)
lbl_fn_804360D4_00000130:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_804360D4_000001C4
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x8
    bne lbl_fn_804360D4_00000150
    li r0, 0x0
    stw r0, 0x33c(r3)
lbl_fn_804360D4_00000150:
    lwz r4, lbl_8087F430
    lfs f0, 0x74(r3)
    lfs f1, 0x7c(r4)
    lfs f3, 0x78(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r3)
    lfs f0, 0x6c(r3)
    addi r3, r1, 0x24
    lfs f1, 0x74(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    stfs f4, 0x2c(r1)
    bl fn_805F9920
    lfs f0, lbl_808868D4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804360D4_000001A4
    li r0, 0x0
    stw r0, 0x33c(r31)
lbl_fn_804360D4_000001A4:
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_804360D4_000001C4
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804360D4_000001C4
    li r0, 0x0
    stw r0, 0x33c(r31)
lbl_fn_804360D4_000001C4:
    lwz r0, 0x33c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804360D4_00000208
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_804360D4_000005B4
    mr r4, r31
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_804360D4_000005B4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_804360D4_000005B4
lbl_fn_804360D4_00000208:
    cmpwi r30, 0x0
    bne lbl_fn_804360D4_0000025C
    lwz r30, 0x32c(r31)
    li r0, 0x0
    lwz r5, 0x54(r31)
    mr r3, r31
    lfs f0, lbl_808868CC
    addi r4, r1, 0xb0
    stw r5, 0xb0(r1)
    stw r0, 0xb4(r1)
    stw r0, 0xb8(r1)
    stw r0, 0xbc(r1)
    stw r0, 0xc0(r1)
    stfs f0, 0xc4(r1)
    stfs f0, 0xc8(r1)
    stfs f0, 0xcc(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    stw r30, 0x32c(r31)
lbl_fn_804360D4_0000025C:
    lwz r0, 0x54(r31)
    cmplwi r0, 0x2
    bgt lbl_fn_804360D4_00000368
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804360D4_00000368
    lwz r0, 0x32c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804360D4_00000368
    bl fn_80375184
    cmpwi r3, 0x0
    bne lbl_fn_804360D4_0000029C
    lwz r3, lbl_8087F430
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804360D4_00000304
lbl_fn_804360D4_0000029C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804360D4_00000368
    lfs f0, lbl_808868CC
    li r0, 0x0
    stw r0, 0x90(r1)
    mr r3, r31
    addi r4, r1, 0x90
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r0, 0x32c(r31)
    b lbl_fn_804360D4_00000368
lbl_fn_804360D4_00000304:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_804360D4_00000368
    lfs f0, lbl_808868CC
    li r0, 0x0
    li r30, 0x1
    stw r30, 0x70(r1)
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
    stw r30, 0x32c(r31)
lbl_fn_804360D4_00000368:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_804360D4_0000037C
    lwz r30, 0x48(r3)
    b lbl_fn_804360D4_00000380
lbl_fn_804360D4_0000037C:
    li r30, 0x0
lbl_fn_804360D4_00000380:
    cmpwi r30, 0x0
    beq lbl_fn_804360D4_000005A4
    lfs f1, 0x530(r30)
    addi r3, r1, 0x18
    lfs f0, 0x74(r31)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x70(r31)
    lfs f1, 0x528(r30)
    lfs f0, 0x6c(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f4, 0x20(r1)
    bl fn_805F9920
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804360D4_00000400
    lfs f0, lbl_808868D8
    fcmpo cr0, f1, f0
    bge lbl_fn_804360D4_000005A4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804360D4_000005A4
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_804360D4_000005A4
    lwz r3, lbl_8087F430
    li r4, 0x145
    bl fn_803750E4
    b lbl_fn_804360D4_000005A4
lbl_fn_804360D4_00000400:
    cmpwi r0, 0x1
    blt lbl_fn_804360D4_000005A4
    lfs f1, 0x530(r30)
    addi r3, r1, 0xc
    lfs f0, 0x74(r31)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x70(r31)
    lfs f1, 0x528(r30)
    lfs f0, 0x6c(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
    stfs f4, 0x14(r1)
    bl fn_805F9920
    lwz r0, 0x54(r31)
    fmr f31, f1
    cmpwi r0, 0x1
    bne lbl_fn_804360D4_000004A8
    lfs f0, 0x330(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_804360D4_00000528
    lfs f0, lbl_808868CC
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x50(r1)
    mr r3, r31
    addi r4, r1, 0x50
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_804360D4_00000528
lbl_fn_804360D4_000004A8:
    cmpwi r0, 0x2
    bne lbl_fn_804360D4_00000528
    lfs f0, 0x330(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804360D4_000004D4
    lfs f1, 0x334(r31)
    lfs f0, lbl_808868DC
    fsubs f0, f1, f0
    stfs f0, 0x334(r31)
lbl_fn_804360D4_000004D4:
    lfs f1, 0x334(r31)
    lfs f0, lbl_808868CC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804360D4_00000528
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x30(r1)
    mr r3, r31
    addi r4, r1, 0x30
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_804360D4_00000528:
    lfs f0, lbl_808868E0
    fcmpo cr0, f31, f0
    bge lbl_fn_804360D4_00000590
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804360D4_00000590
    bl fn_8036E098
    cmplw r3, r31
    bne lbl_fn_804360D4_00000590
    lwz r0, 0x340(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804360D4_000005A4
    lis r4, lbl_807541F0@ha
    li r0, 0x1
    addi r4, r4, lbl_807541F0@l
    stw r0, 0x340(r31)
    lfs f1, lbl_808868D0
    addi r3, r1, 0x8
    addi r4, r4, 0x1
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804360D4_000005A4
lbl_fn_804360D4_00000590:
    lwz r0, 0x340(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804360D4_000005A4
    li r0, 0x0
    stw r0, 0x340(r31)
lbl_fn_804360D4_000005A4:
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ECBD4
lbl_fn_804360D4_000005B4:
    lwz r0, 0xf4(r1)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_804365D4(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x1
    blt lbl_fn_804365D4_000005F4
    lwz r0, 0x33c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804365D4_000005F4
    li r4, 0x1
lbl_fn_804365D4_000005F4:
    mr r3, r4
    blr
}

asm void fn_804365FC(void)
{
    nofralloc
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x198(r4)
    cmpwi r0, 0x0
    bnelr
    addi r3, r3, 0xf4
    b fn_8008CD60
    blr
}

asm void fn_80436624(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80436624_00000654
    li r3, 0x1
    b lbl_fn_80436624_00000688
lbl_fn_80436624_00000654:
    addi r31, r30, 0x308
    li r30, 0x0
lbl_fn_80436624_0000065C:
    mr r3, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80436624_00000674
    li r3, 0x1
    b lbl_fn_80436624_00000688
lbl_fn_80436624_00000674:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x3
    blt lbl_fn_80436624_0000065C
    li r3, 0x0
lbl_fn_80436624_00000688:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804366A0(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r27, 0x64c(r1)
    mr r27, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r29, r3
    addi r3, r27, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r30, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r30, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r30, 0x10(r1)
    stw r30, 0x14(r1)
    stw r30, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r29
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
    lis r31, lbl_807541F0@ha
    li r29, 0x0
    addi r31, r31, lbl_807541F0@l
lbl_fn_804366A0_0000074C:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804366A0_000007DC
    addi r4, r31, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804366A0_000007A0
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r27, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r27
    addi r4, r27, 0xf4
    addi r5, r1, 0x8
    bl fn_803EC7A0
    b lbl_fn_804366A0_000007DC
lbl_fn_804366A0_000007A0:
    mr r3, r28
    addi r4, r31, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804366A0_000007DC
    cmpwi r29, 0x3
    bge lbl_fn_804366A0_000007DC
    addi r3, r1, 0x8
    bl fn_8005B9CC
    add r5, r27, r30
    mr r4, r3
    addi r3, r5, 0x308
    addi r29, r29, 0x1
    addi r30, r30, 0xc
    bl fn_8023780C
lbl_fn_804366A0_000007DC:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804366A0_0000074C
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_80436800(void)
{
    nofralloc
    blr
}

asm void fn_80436804(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r4
    stw r30, 0x98(r1)
    mr r30, r3
    stw r29, 0x94(r1)
    lwz r5, lbl_8087F0A8
    lwz r0, 0x198(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80436804_0000083C
    li r3, 0x0
    b lbl_fn_80436804_00000B28
lbl_fn_80436804_0000083C:
    cmpwi r4, 0x0
    bne lbl_fn_80436804_0000084C
    li r3, 0x0
    b lbl_fn_80436804_00000B28
lbl_fn_80436804_0000084C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80436804_0000086C
    cmpwi r0, 0x1
    beq lbl_fn_80436804_00000934
    cmpwi r0, 0x2
    beq lbl_fn_80436804_00000A30
    b lbl_fn_80436804_00000B20
lbl_fn_80436804_0000086C:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80436804_00000888
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80436804_00000888:
    lwz r3, 0x0(r31)
    lwz r0, lbl_8087F3C0
    mulli r3, r3, 0xc
    cmpwi r0, 0x0
    add r3, r30, r3
    addi r29, r3, 0x308
    beq lbl_fn_80436804_00000928
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_808868D0
    li r0, -0x1
    stw r11, 0xb8(r3)
    mr r4, r29
    lfs f0, lbl_808868CC
    addi r5, r30, 0xf4
    stfs f0, 0x70(r1)
    addi r7, r1, 0x7c
    addi r8, r1, 0x70
    addi r9, r1, 0x60
    stfs f0, 0x74(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_80436804_00000928:
    li r0, 0x0
    stw r0, 0x32c(r30)
    b lbl_fn_80436804_00000B20
lbl_fn_80436804_00000934:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80436804_00000960
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80436804_0000097C
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_80436804_0000097C
lbl_fn_80436804_00000960:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80436804_0000097C
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80436804_0000097C:
    lwz r3, 0x0(r31)
    lwz r0, lbl_8087F3C0
    mulli r3, r3, 0xc
    cmpwi r0, 0x0
    add r3, r30, r3
    addi r29, r3, 0x308
    beq lbl_fn_80436804_00000A1C
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_808868D0
    li r0, -0x1
    stw r11, 0xb8(r3)
    mr r4, r29
    lfs f0, lbl_808868CC
    addi r5, r30, 0xf4
    stfs f0, 0x48(r1)
    addi r7, r1, 0x54
    addi r8, r1, 0x48
    addi r9, r1, 0x38
    stfs f0, 0x4c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_80436804_00000A1C:
    lfs f0, lbl_808868CC
    li r0, 0x1
    stw r0, 0x32c(r30)
    stfs f0, 0x334(r30)
    b lbl_fn_80436804_00000B20
lbl_fn_80436804_00000A30:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80436804_00000A5C
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80436804_00000A78
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_80436804_00000A78
lbl_fn_80436804_00000A5C:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80436804_00000A78
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80436804_00000A78:
    lwz r3, 0x0(r31)
    lwz r0, lbl_8087F3C0
    mulli r3, r3, 0xc
    cmpwi r0, 0x0
    add r3, r30, r3
    addi r29, r3, 0x308
    beq lbl_fn_80436804_00000B18
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_808868D0
    li r0, -0x1
    stw r11, 0xb8(r3)
    mr r4, r29
    lfs f0, lbl_808868CC
    addi r5, r30, 0xf4
    stfs f0, 0x20(r1)
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    stfs f0, 0x24(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_80436804_00000B18:
    lfs f0, lbl_808868D0
    stfs f0, 0x334(r30)
lbl_fn_80436804_00000B20:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
lbl_fn_80436804_00000B28:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80436B44(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808868CC
    stw r0, 0x34(r1)
    li r0, 0x0
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
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80436B9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80436B9C_00000BE0
    cmpwi r31, 0x0
    beq lbl_fn_80436B9C_00000BE8
lbl_fn_80436B9C_00000BE0:
    li r3, 0x0
    b lbl_fn_80436B9C_00000C8C
lbl_fn_80436B9C_00000BE8:
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_80436B9C_00000C0C
    addi r4, r1, 0x8
    bl fn_800A4228
    cmpwi r3, 0x0
    beq lbl_fn_80436B9C_00000C0C
    li r3, 0x0
    b lbl_fn_80436B9C_00000C8C
lbl_fn_80436B9C_00000C0C:
    lfs f1, 0x74(r29)
    addi r3, r1, 0xc
    lfs f0, 0x8(r30)
    lfs f3, 0x70(r29)
    fsubs f4, f1, f0
    lfs f2, 0x4(r30)
    lfs f1, 0x6c(r29)
    lfs f0, 0x0(r30)
    fsubs f2, f3, f2
    stfs f4, 0x14(r1)
    fsubs f0, f1, f0
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
    bl fn_805F9920
    lfs f0, lbl_808868D8
    fcmpo cr0, f1, f0
    bge lbl_fn_80436B9C_00000C88
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80436B9C_00000C80
    li r4, 0x92
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80436B9C_00000C80
    lwz r3, lbl_8087F430
    li r4, 0x92
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_80436B9C_00000C80:
    li r3, 0x1
    b lbl_fn_80436B9C_00000C8C
lbl_fn_80436B9C_00000C88:
    li r3, 0x0
lbl_fn_80436B9C_00000C8C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80436CA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80436CA8_00000CF4
    li r4, 0x1
    bl fn_8036E92C
    lis r4, lbl_807541F0@ha
    lfs f1, lbl_808868D0
    addi r4, r4, lbl_807541F0@l
    addi r3, r1, 0x8
    addi r4, r4, 0x18
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80436CA8_00000CF4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80436D04(void)
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
    bne lbl_fn_80436D04_00000D64
    cmpwi r30, 0x0
    beq lbl_fn_80436D04_00000D64
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80436D04_00000D64
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_80436D04_00000D68
lbl_fn_80436D04_00000D64:
    li r30, 0x0
lbl_fn_80436D04_00000D68:
    lis r31, lbl_807541F0@ha
    mr r3, r30
    addi r31, r31, lbl_807541F0@l
    addi r5, r29, 0x54
    addi r4, r31, 0x25
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808868E4
    mr r3, r30
    lfs f2, lbl_808868E8
    addi r4, r31, 0x2b
    lfs f3, lbl_808868EC
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808868F0
    mr r3, r30
    lfs f2, lbl_808868F4
    addi r4, r31, 0x2f
    lfs f3, lbl_808868F8
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_808868E4
    mr r3, r30
    lfs f2, lbl_808868E8
    addi r4, r31, 0x33
    lfs f3, lbl_808868EC
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x37
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80436E34(void)
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
    beq lbl_fn_80436E34_00000E98
    lis r5, lbl_80754288@ha
    li r3, 0xf28
    addi r5, r5, lbl_80754288@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80436E34_00000E9C
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80436EB8
    b lbl_fn_80436E34_00000E9C
lbl_fn_80436E34_00000E98:
    li r3, 0x0
lbl_fn_80436E34_00000E9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80436EB8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_803EC568
    addi r4, r31, 0x15c
    addi r5, r31, 0x288
    lfs f0, lbl_80886900
    lis r3, lbl_8078EF70@ha
    addi r3, r3, lbl_8078EF70@l
    li r0, 0x0
    cmplw r4, r5
    stw r3, 0x0(r31)
    stw r0, 0xf4(r31)
    stfs f0, 0xf8(r31)
    stfs f0, 0xfc(r31)
    stfs f0, 0x100(r31)
    stfs f0, 0x104(r31)
    stfs f0, 0x108(r31)
    stfs f0, 0x10c(r31)
    stfs f0, 0x110(r31)
    stfs f0, 0x114(r31)
    stfs f0, 0x118(r31)
    stfs f0, 0x11c(r31)
    bge lbl_fn_80436EB8_00000F70
    addi r3, r5, 0x63
    li r0, 0x64
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_80436EB8_00000F70
lbl_fn_80436EB8_00000F40:
    stfs f0, 0x0(r4)
    stfs f0, 0x4(r4)
    stfs f0, 0x8(r4)
    stfs f0, 0xc(r4)
    stfs f0, 0x10(r4)
    stfs f0, 0x14(r4)
    stfs f0, 0x18(r4)
    stfs f0, 0x1c(r4)
    stfs f0, 0x20(r4)
    stfs f0, 0x24(r4)
    addi r4, r4, 0x64
    bdnz lbl_fn_80436EB8_00000F40
lbl_fn_80436EB8_00000F70:
    lis r4, fn_80437054@ha
    lis r5, fn_8043711C@ha
    addi r3, r31, 0x288
    li r6, 0x188
    addi r4, r4, fn_80437054@l
    addi r5, r5, fn_8043711C@l
    li r7, 0x8
    bl fn_806958E0
    lfs f0, lbl_80886904
    li r30, 0x0
    li r9, 0x5
    li r6, 0x12c
    li r8, 0x2
    li r7, -0x1
    li r5, 0x5a
    li r4, 0x5dc
    li r0, 0xa
    stw r30, 0xec8(r31)
    addi r3, r31, 0xf0c
    stw r9, 0xecc(r31)
    stw r8, 0xed0(r31)
    stw r7, 0xed4(r31)
    stw r30, 0xed8(r31)
    stw r6, 0xedc(r31)
    stw r5, 0xee0(r31)
    stw r30, 0xee4(r31)
    stw r9, 0xee8(r31)
    stw r30, 0xeec(r31)
    stw r4, 0xef0(r31)
    stfs f0, 0xef4(r31)
    stw r30, 0xef8(r31)
    stw r30, 0xefc(r31)
    stw r6, 0xf00(r31)
    stw r0, 0xf04(r31)
    stw r30, 0xf08(r31)
    bl fn_802377B8
    addi r3, r31, 0xf18
    bl fn_80237518
    stw r30, 0x54(r31)
    li r29, 0x0
    li r30, 0x0
lbl_fn_80436EB8_00001014:
    add r3, r31, r30
    mr r4, r31
    addi r3, r3, 0x318
    bl fn_8044D9BC
    addi r29, r29, 0x1
    addi r30, r30, 0x188
    cmpwi r29, 0x8
    blt lbl_fn_80436EB8_00001014
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80437054(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C7060@ha
    lfs f0, lbl_80886900
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807C7060@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x0(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x2c(r3), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    psq_st f2, 0xc(r3), 0, 0
    psq_st f3, 0x14(r3), 0, 0
    psq_st f4, 0x1c(r3), 0, 0
    psq_st f5, 0x24(r3), 0, 0
    stw r31, 0x34(r3)
    stfs f0, 0x38(r3)
    stw r31, 0x54(r3)
    stw r31, 0x58(r3)
    stw r31, 0x5c(r3)
    stw r31, 0x60(r3)
    stw r31, 0x64(r3)
    stw r31, 0x68(r3)
    stw r31, 0x6c(r3)
    stw r31, 0x70(r3)
    stw r31, 0x74(r3)
    stw r31, 0x78(r3)
    stw r31, 0x7c(r3)
    stw r31, 0x80(r3)
    stfs f0, 0x84(r3)
    stfs f0, 0x88(r3)
    stw r31, 0x8c(r3)
    addi r3, r3, 0x90
    bl fn_8044D710
    stw r31, 0x184(r30)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043711C(void)
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
    beq lbl_fn_8043711C_0000121C
    li r4, -0x1
    addi r3, r3, 0x90
    bl fn_8044D884
    addic. r31, r29, 0x34
    beq lbl_fn_8043711C_0000120C
    addic. r4, r31, 0x44
    beq lbl_fn_8043711C_00001188
    beq lbl_fn_8043711C_00001188
    beq lbl_fn_8043711C_00001188
    beq lbl_fn_8043711C_00001188
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043711C_00001188
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043711C_00001188:
    addic. r4, r31, 0x38
    beq lbl_fn_8043711C_000011B4
    beq lbl_fn_8043711C_000011B4
    beq lbl_fn_8043711C_000011B4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043711C_000011B4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043711C_000011B4:
    addic. r4, r31, 0x2c
    beq lbl_fn_8043711C_000011E0
    beq lbl_fn_8043711C_000011E0
    beq lbl_fn_8043711C_000011E0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043711C_000011E0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043711C_000011E0:
    addic. r4, r31, 0x20
    beq lbl_fn_8043711C_0000120C
    beq lbl_fn_8043711C_0000120C
    beq lbl_fn_8043711C_0000120C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8043711C_0000120C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8043711C_0000120C:
    cmpwi r30, 0x0
    ble lbl_fn_8043711C_0000121C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8043711C_0000121C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8043723C(void)
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
    beq lbl_fn_8043723C_000012C4
    li r4, -0x1
    addi r3, r3, 0xf18
    bl fn_802375C4
    addic. r31, r29, 0xf0c
    beq lbl_fn_8043723C_00001290
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8043723C_00001290
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8043723C_00001290:
    lis r4, fn_8043711C@ha
    addi r3, r29, 0x288
    addi r4, r4, fn_8043711C@l
    li r5, 0x188
    li r6, 0x8
    bl fn_806959D8
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8043723C_000012C4
    mr r3, r29
    bl dtor_80084684
lbl_fn_8043723C_000012C4:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804372E4(void)
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

asm void fn_8043730C(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    stfd f26, 0x100(r1)
    psq_st f26, 0x108(r1), 0, 0
    stfd f25, 0xf0(r1)
    psq_st f25, 0xf8(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0xf04(r3)
    li r6, 0x1
    lwz r4, 0xf00(r3)
    li r5, 0x0
    cmpwi r0, 0x0
    stw r6, 0x54(r3)
    mr r31, r3
    stw r5, 0xeec(r3)
    stw r4, 0xefc(r3)
    ble lbl_fn_8043730C_000013A0
    bl fn_80680CF8
    lwz r5, 0xf04(r31)
    lwz r0, 0xefc(r31)
    divw r4, r3, r5
    mullw r4, r4, r5
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0xefc(r31)
lbl_fn_8043730C_000013A0:
    lwz r3, 0xf00(r31)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r27, r0, 1
    bl fn_80680CF8
    addi r4, r27, 0x1
    lfs f30, lbl_80886900
    divw r0, r3, r4
    lfs f31, lbl_80886908
    lfs f29, lbl_8088690C
    addi r28, r1, 0xa8
    li r26, 0x0
    li r30, 0x0
    mullw r0, r0, r4
    subf r0, r0, r3
    add r0, r27, r0
    stw r0, 0xefc(r31)
    b lbl_fn_8043730C_00001564
lbl_fn_8043730C_000013E8:
    add r29, r31, r30
    addi r3, r1, 0x48
    stfs f30, 0x108(r29)
    li r4, 0x79
    stfs f30, 0x10c(r29)
    stfs f31, 0x110(r29)
    lfs f1, 0x104(r29)
    bl fn_805F8E70
    addi r4, r29, 0x108
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x114(r29)
    addi r27, r29, 0x12c
    lfs f7, 0x118(r29)
    addi r3, r1, 0x78
    lfs f8, 0x11c(r29)
    fmuls f9, f0, f29
    fmuls f7, f7, f29
    li r4, 0x79
    stfs f9, 0x120(r29)
    fmuls f0, f8, f29
    stfs f7, 0x124(r29)
    stfs f0, 0x128(r29)
    stfs f30, 0x158(r29)
    stfs f30, 0x150(r29)
    stfs f30, 0x14c(r29)
    stfs f30, 0x148(r29)
    stfs f30, 0x144(r29)
    stfs f30, 0x13c(r29)
    stfs f30, 0x138(r29)
    stfs f30, 0x134(r29)
    stfs f30, 0x130(r29)
    stfs f31, 0x154(r29)
    stfs f31, 0x140(r29)
    stfs f31, 0x12c(r29)
    lfs f1, 0x104(r29)
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x78
    addi r5, r1, 0xa8
    bl fn_805F89F0
    psq_l f2, 0x8(r28), 0, 0
    addi r26, r26, 0x1
    psq_l f3, 0x10(r28), 0, 0
    addi r30, r30, 0x64
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    lfs f8, 0x11c(r29)
    lfs f0, 0x108(r29)
    lfs f7, 0x10c(r29)
    fmuls f11, f0, f8
    lfs f0, 0x110(r29)
    fmuls f26, f7, f8
    lfs f9, 0x118(r29)
    fmuls f25, f0, f8
    lfs f0, 0xf8(r29)
    fmuls f13, f11, f29
    lfs f7, 0xfc(r29)
    fmuls f28, f26, f29
    stfs f11, 0x2c(r1)
    fmuls f27, f25, f29
    lfs f8, 0x100(r29)
    fadds f10, f0, f13
    stfs f30, 0x38(r1)
    fadds f12, f8, f27
    fmuls f9, f9, f29
    stfs f30, 0x40(r1)
    fadds f11, f7, f28
    fadds f0, f10, f30
    stfs f9, 0x3c(r1)
    fadds f8, f12, f30
    fadds f7, f11, f9
    stfs f0, 0x138(r29)
    stfs f7, 0x148(r29)
    stfs f26, 0x30(r1)
    stfs f25, 0x34(r1)
    stfs f13, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f27, 0x28(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f0, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f8, 0x158(r29)
lbl_fn_8043730C_00001564:
    lwz r0, 0xf4(r31)
    cmplw r26, r0
    blt lbl_fn_8043730C_000013E8
    addi r11, r1, 0xf0
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    psq_l f26, 0x108(r1), 0, 0
    lfd f26, 0x100(r1)
    psq_l f25, 0xf8(r1), 0, 0
    lfd f25, 0xf0(r1)
    bl _restgpr_26
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_804375C0(void)
{
    nofralloc
    stwu r1, -0x3b0(r1)
    mflr r0
    stw r0, 0x3b4(r1)
    addi r11, r1, 0x300
    stfd f31, 0x3a0(r1)
    psq_st f31, 0x3a8(r1), 0, 0
    stfd f30, 0x390(r1)
    psq_st f30, 0x398(r1), 0, 0
    stfd f29, 0x380(r1)
    psq_st f29, 0x388(r1), 0, 0
    stfd f28, 0x370(r1)
    psq_st f28, 0x378(r1), 0, 0
    stfd f27, 0x360(r1)
    psq_st f27, 0x368(r1), 0, 0
    stfd f26, 0x350(r1)
    psq_st f26, 0x358(r1), 0, 0
    stfd f25, 0x340(r1)
    psq_st f25, 0x348(r1), 0, 0
    stfd f24, 0x330(r1)
    psq_st f24, 0x338(r1), 0, 0
    stfd f23, 0x320(r1)
    psq_st f23, 0x328(r1), 0, 0
    stfd f22, 0x310(r1)
    psq_st f22, 0x318(r1), 0, 0
    stfd f21, 0x300(r1)
    psq_st f21, 0x308(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x54(r3)
    mr r15, r3
    cmpwi r0, 0x0
    bne lbl_fn_804375C0_00001700
    lwz r0, 0xec8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804375C0_000016B4
    addi r17, r3, 0x288
    li r16, 0x0
    li r14, 0x0
lbl_fn_804375C0_00001654:
    lwz r0, 0x0(r17)
    cmpwi r0, 0x0
    beq lbl_fn_804375C0_000016A4
    stw r14, 0x0(r17)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_00001698
    mr r4, r17
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_00001698
    lwz r3, lbl_8087F3C0
    mr r4, r17
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_804375C0_00001698:
    lwz r3, 0xec8(r15)
    subi r0, r3, 0x1
    stw r0, 0xec8(r15)
lbl_fn_804375C0_000016A4:
    addi r16, r16, 0x1
    addi r17, r17, 0x188
    cmpwi r16, 0x8
    blt lbl_fn_804375C0_00001654
lbl_fn_804375C0_000016B4:
    lwz r0, 0xeec(r15)
    cmpwi r0, 0x0
    ble lbl_fn_804375C0_000027A4
    lwz r0, 0xf04(r15)
    li r4, 0x0
    lwz r3, 0xf00(r15)
    cmpwi r0, 0x0
    stw r4, 0xeec(r15)
    stw r3, 0xefc(r15)
    ble lbl_fn_804375C0_000027A4
    bl fn_80680CF8
    lwz r5, 0xf04(r15)
    lwz r0, 0xefc(r15)
    divw r4, r3, r5
    mullw r4, r4, r5
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0xefc(r15)
    b lbl_fn_804375C0_000027A4
lbl_fn_804375C0_00001700:
    li r0, 0x0
    stw r0, 0xef8(r3)
    addi r5, r1, 0x148
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_804375C0_00001720
    lwz r4, 0x48(r4)
    b lbl_fn_804375C0_00001724
lbl_fn_804375C0_00001720:
    li r4, 0x0
lbl_fn_804375C0_00001724:
    cmpwi r4, 0x0
    beq lbl_fn_804375C0_00001748
    psq_l f1, 0x614(r4), 0, 0
    lfs f2, 0x61c(r4)
    stfs f2, 0x150(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x620(r4)
    stfs f0, 0x154(r1)
    b lbl_fn_804375C0_00001764
lbl_fn_804375C0_00001748:
    lwz r4, lbl_8087EFB4
    lfs f0, lbl_80886910
    psq_l f1, 0x10c(r4), 0, 0
    lfs f2, 0x114(r4)
    stfs f2, 0x150(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f0, 0x154(r1)
lbl_fn_804375C0_00001764:
    addi r14, r3, 0xf8
    li r16, 0x0
    b lbl_fn_804375C0_00001794
lbl_fn_804375C0_00001770:
    addi r3, r1, 0x148
    addi r4, r14, 0x28
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_0000178C
    stw r14, 0xef8(r15)
    b lbl_fn_804375C0_000017A0
lbl_fn_804375C0_0000178C:
    addi r14, r14, 0x64
    addi r16, r16, 0x1
lbl_fn_804375C0_00001794:
    lwz r0, 0xf4(r15)
    cmplw r16, r0
    blt lbl_fn_804375C0_00001770
lbl_fn_804375C0_000017A0:
    lwz r0, 0xef8(r15)
    cmpwi r0, 0x0
    bne lbl_fn_804375C0_000017B8
    lwz r0, 0xec8(r15)
    cmpwi r0, 0x0
    ble lbl_fn_804375C0_000027A4
lbl_fn_804375C0_000017B8:
    lwz r3, 0xefc(r15)
    cmpwi r3, 0x0
    ble lbl_fn_804375C0_000017E8
    subic. r0, r3, 0x1
    stw r0, 0xefc(r15)
    bgt lbl_fn_804375C0_000017E8
    lwz r4, 0xef0(r15)
    li r3, 0x0
    li r0, 0x1
    stw r4, 0xeec(r15)
    stw r3, 0xee4(r15)
    stw r0, 0xed8(r15)
lbl_fn_804375C0_000017E8:
    lwz r0, 0xeec(r15)
    cmpwi r0, 0x0
    ble lbl_fn_804375C0_00001870
    lwz r3, 0xed8(r15)
    cmpwi r3, 0x0
    ble lbl_fn_804375C0_00001814
    subic. r0, r3, 0x1
    stw r0, 0xed8(r15)
    bgt lbl_fn_804375C0_00001814
    mr r3, r15
    bl fn_804392C0
lbl_fn_804375C0_00001814:
    lwz r3, 0xeec(r15)
    subic. r0, r3, 0x1
    stw r0, 0xeec(r15)
    ble lbl_fn_804375C0_00001834
    lwz r3, 0xee4(r15)
    lwz r0, 0xee8(r15)
    cmpw r3, r0
    blt lbl_fn_804375C0_00001870
lbl_fn_804375C0_00001834:
    lwz r0, 0xf04(r15)
    li r4, 0x0
    lwz r3, 0xf00(r15)
    cmpwi r0, 0x0
    stw r4, 0xeec(r15)
    stw r3, 0xefc(r15)
    ble lbl_fn_804375C0_00001870
    bl fn_80680CF8
    lwz r5, 0xf04(r15)
    lwz r0, 0xefc(r15)
    divw r4, r3, r5
    mullw r4, r4, r5
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0xefc(r15)
lbl_fn_804375C0_00001870:
    addi r16, r15, 0x288
    li r14, 0x0
lbl_fn_804375C0_00001878:
    mr r3, r15
    mr r4, r16
    bl fn_8043A08C
    addi r14, r14, 0x1
    addi r16, r16, 0x188
    cmpwi r14, 0x8
    blt lbl_fn_804375C0_00001878
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_000018A8
    lwz r17, 0x48(r3)
    b lbl_fn_804375C0_000018AC
lbl_fn_804375C0_000018A8:
    li r17, 0x0
lbl_fn_804375C0_000018AC:
    lwz r18, lbl_8087F430
    cmpwi r18, 0x0
    beq lbl_fn_804375C0_000020B8
    cmpwi r17, 0x0
    beq lbl_fn_804375C0_000020B8
    lwz r3, 0x868(r18)
    li r4, 0x0
    subi r3, r3, 0x1
    cmplwi r3, 0x3
    bgt lbl_fn_804375C0_000018E8
    li r0, 0x1
    slw r0, r0, r3
    andi. r0, r0, 0xd
    beq lbl_fn_804375C0_000018E8
    li r4, 0x1
lbl_fn_804375C0_000018E8:
    cmpwi r4, 0x0
    beq lbl_fn_804375C0_000020B8
    lwz r0, 0xef8(r15)
    lfs f31, lbl_80886914
    cmpwi r0, 0x0
    beq lbl_fn_804375C0_00001954
    lfs f7, lbl_80886900
    addi r3, r1, 0x1a0
    lfs f0, lbl_80886908
    li r4, 0x79
    stfs f7, 0xcc(r1)
    stfs f7, 0xd0(r1)
    stfs f0, 0xd4(r1)
    lfs f1, 0x538(r17)
    bl fn_805F8E70
    addi r4, r1, 0xcc
    addi r3, r1, 0x1a0
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0xef8(r15)
    addi r4, r1, 0xcc
    addi r3, r3, 0x10
    bl fn_805F9990
    lfs f0, lbl_80886900
    fcmpo cr0, f1, f0
    bge lbl_fn_804375C0_00001954
    lfs f31, lbl_80886918
lbl_fn_804375C0_00001954:
    lis r25, lbl_807C7030@ha
    lfs f23, lbl_80886900
    lfs f22, lbl_80886908
    addi r25, r25, lbl_807C7030@l
    lfs f26, lbl_80886920
    addi r28, r1, 0x188
    lfs f27, lbl_80886928
    addi r27, r1, 0x194
    lfs f28, lbl_80886914
    addi r26, r1, 0xc0
    lfs f24, lbl_8088690C
    addi r24, r1, 0x138
    lfs f25, lbl_8088691C
    addi r23, r1, 0x128
    addi r22, r1, 0x1d0
    addi r21, r1, 0x17c
    addi r14, r1, 0x158
    addi r20, r1, 0x164
    addi r19, r1, 0xe8
    li r16, 0x0
    li r31, 0x0
    lis r30, 0x8000
lbl_fn_804375C0_000019AC:
    add r29, r15, r31
    lwz r0, 0x288(r29)
    cmpwi r0, 0x2
    bne lbl_fn_804375C0_000020A8
    lfs f2, 0x7c(r18)
    mr r3, r27
    psq_l f1, 0x74(r18), 0, 0
    mr r4, r27
    psq_st f1, 0x0(r28), 0, 0
    frsp f0, f2
    stfs f2, 0x190(r1)
    lfs f9, 0x188(r1)
    lfs f2, 0x88(r18)
    psq_l f1, 0x80(r18), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    fsubs f0, f2, f0
    lfs f7, 0x18c(r1)
    lfs f10, 0x194(r1)
    lfs f8, 0x198(r1)
    fsubs f9, f10, f9
    stfs f0, 0x19c(r1)
    fsubs f0, f8, f7
    stfs f9, 0x194(r1)
    stfs f0, 0x198(r1)
    bl fn_805F98D0
    lfs f8, 0x194(r1)
    lfs f7, 0x198(r1)
    lfs f0, 0x19c(r1)
    fmuls f11, f8, f31
    fmuls f10, f7, f31
    lfs f8, 0x188(r1)
    fmuls f9, f0, f31
    lfs f7, 0x18c(r1)
    lfs f0, 0x190(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x194(r1)
    stfs f7, 0x198(r1)
    stfs f0, 0x19c(r1)
    lfs f7, 0x30c(r29)
    fcmpo cr0, f7, f23
    cror eq, lt, eq
    bne lbl_fn_804375C0_00001A70
    psq_l f1, 0x2c4(r29), 0, 0
    lfs f2, 0x2cc(r29)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xc8(r1)
    b lbl_fn_804375C0_00001BE0
lbl_fn_804375C0_00001A70:
    fcmpo cr0, f7, f22
    cror eq, gt, eq
    bne lbl_fn_804375C0_00001A90
    psq_l f1, 0x2d0(r29), 0, 0
    lfs f2, 0x2d8(r29)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xc8(r1)
    b lbl_fn_804375C0_00001BE0
lbl_fn_804375C0_00001A90:
    lwz r5, 0x2bc(r29)
    li r4, 0x0
    lfs f0, 0x2c0(r29)
    li r3, 0x0
    subic. r0, r5, 0x1
    fmuls f7, f0, f7
    mtctr r0
    ble lbl_fn_804375C0_00001BD0
lbl_fn_804375C0_00001AB0:
    lwz r6, 0x300(r29)
    lfsx f0, r6, r3
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_804375C0_00001BC0
    fcmpu cr0, f23, f7
    bne lbl_fn_804375C0_00001AD4
    fmr f0, f23
    b lbl_fn_804375C0_00001AD8
lbl_fn_804375C0_00001AD4:
    fdivs f0, f7, f0
lbl_fn_804375C0_00001AD8:
    cmpwi r4, 0x0
    bge lbl_fn_804375C0_00001AF4
    psq_l f1, 0x2c4(r29), 0, 0
    lfs f2, 0x2cc(r29)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xc8(r1)
    b lbl_fn_804375C0_00001BE0
lbl_fn_804375C0_00001AF4:
    subi r0, r5, 0x1
    cmpw r4, r0
    blt lbl_fn_804375C0_00001B14
    psq_l f1, 0x2d0(r29), 0, 0
    lfs f2, 0x2d8(r29)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xc8(r1)
    b lbl_fn_804375C0_00001BE0
lbl_fn_804375C0_00001B14:
    cmpwi r5, 0x2
    bge lbl_fn_804375C0_00001B30
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0x8(r25)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xc8(r1)
    b lbl_fn_804375C0_00001BE0
lbl_fn_804375C0_00001B30:
    lwz r0, 0x2dc(r29)
    slwi r5, r4, 4
    lwz r3, 0x2e8(r29)
    add r4, r0, r5
    lwz r0, 0x2f4(r29)
    add r3, r3, r5
    lfs f10, 0xc(r4)
    lfs f8, 0x8(r4)
    add r5, r0, r5
    lfs f9, 0xc(r3)
    fmadds f12, f10, f0, f8
    lfs f7, 0x8(r3)
    lfs f11, 0x4(r4)
    fmadds f10, f9, f0, f7
    lfs f9, 0x4(r3)
    fmadds f12, f0, f12, f11
    lfs f11, 0x0(r4)
    fmadds f10, f0, f10, f9
    lfs f9, 0x0(r3)
    fmadds f11, f0, f12, f11
    lfs f8, 0xc(r5)
    lfs f7, 0x8(r5)
    addi r3, r1, 0x6c
    fmadds f8, f8, f0, f7
    lfs f7, 0x4(r5)
    fmadds f9, f0, f10, f9
    stfs f11, 0x6c(r1)
    fmadds f8, f0, f8, f7
    lfs f7, 0x0(r5)
    stfs f9, 0x70(r1)
    fmadds f2, f0, f8, f7
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x74(r1)
    stfs f2, 0xc8(r1)
    b lbl_fn_804375C0_00001BE0
lbl_fn_804375C0_00001BC0:
    fsubs f7, f7, f0
    addi r4, r4, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_804375C0_00001AB0
lbl_fn_804375C0_00001BD0:
    psq_l f1, 0x2c4(r29), 0, 0
    lfs f2, 0x2cc(r29)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xc8(r1)
lbl_fn_804375C0_00001BE0:
    lfs f12, 0xef4(r15)
    addi r3, r1, 0x60
    lfs f2, 0x8(r26)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    frsp f11, f2
    stfs f2, 0x130(r1)
    lfs f9, 0x12c(r1)
    stfs f12, 0x134(r1)
    lfs f7, 0x128(r1)
    lfs f10, 0x7c(r18)
    lfs f8, 0x78(r18)
    lfs f0, 0x74(r18)
    fsubs f10, f11, f10
    fsubs f8, f9, f8
    psq_st f1, 0x0(r24), 0, 0
    fsubs f0, f7, f0
    stfs f2, 0x140(r1)
    stfs f12, 0x144(r1)
    stfs f0, 0x60(r1)
    stfs f8, 0x64(r1)
    stfs f10, 0x68(r1)
    bl fn_805F9940
    lfs f0, 0x144(r1)
    addi r4, r1, 0x118
    stfs f23, 0x120(r1)
    fmr f30, f1
    fneg f7, f0
    mr r3, r22
    stfs f0, 0x10c(r1)
    mr r5, r4
    stfs f7, 0x118(r1)
    stfs f7, 0x11c(r1)
    stfs f0, 0x110(r1)
    stfs f23, 0x114(r1)
    psq_l f1, 0x13c(r18), 0, 0
    psq_l f2, 0x144(r18), 0, 0
    psq_l f3, 0x14c(r18), 0, 0
    psq_l f4, 0x154(r18), 0, 0
    psq_l f5, 0x15c(r18), 0, 0
    psq_l f6, 0x164(r18), 0, 0
    psq_st f6, 0x28(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    stfs f23, 0x1dc(r1)
    stfs f23, 0x1ec(r1)
    stfs f23, 0x1fc(r1)
    bl fn_805F93C0
    addi r4, r1, 0x10c
    mr r3, r22
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x140(r1)
    addi r3, r1, 0xb4
    lfs f0, 0x120(r1)
    addi r5, r1, 0x100
    lfs f9, 0x13c(r1)
    fadds f10, f7, f0
    lfs f8, 0x11c(r1)
    lfs f7, 0x138(r1)
    lfs f0, 0x118(r1)
    fadds f8, f9, f8
    stfs f10, 0x108(r1)
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f8, 0x104(r1)
    stfs f0, 0x100(r1)
    bl fn_800BFAC8
    lfs f9, 0x140(r1)
    addi r4, r1, 0xb4
    lfs f8, 0x114(r1)
    addi r3, r1, 0xa8
    lfs f7, 0x13c(r1)
    addi r5, r1, 0xf4
    fadds f8, f9, f8
    lfs f0, 0x110(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x100
    fadds f9, f7, f0
    lfs f2, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x138(r1)
    lfs f0, 0x10c(r1)
    lwz r4, lbl_8087EFB4
    fadds f0, f7, f0
    stfs f2, 0x108(r1)
    stfs f0, 0xf4(r1)
    stfs f9, 0xf8(r1)
    stfs f8, 0xfc(r1)
    bl fn_800BFAC8
    addi r3, r1, 0xa8
    lfs f2, 0xb0(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xf4
    psq_st f1, 0x0(r3), 0, 0
    lfs f9, 0x104(r1)
    lfs f8, 0xf8(r1)
    lfs f7, 0x100(r1)
    fsubs f10, f9, f8
    lfs f0, 0xf4(r1)
    fadds f8, f9, f8
    stfs f2, 0xfc(r1)
    fsubs f9, f7, f0
    fabs f10, f10
    fadds f0, f7, f0
    fabs f11, f9
    fmuls f7, f24, f8
    frsp f9, f10
    frsp f8, f11
    stfs f7, 0x2c(r1)
    fmuls f7, f24, f0
    fmuls f9, f24, f9
    fmuls f8, f24, f8
    stfs f7, 0x28(r1)
    fadds f0, f9, f25
    fadds f7, f8, f25
    stfs f0, 0x24(r1)
    stfs f7, 0x20(r1)
    lwz r0, 0xeec(r15)
    cmpwi r0, 0x0
    ble lbl_fn_804375C0_000020A8
    lwz r0, 0xed0(r15)
    cmpwi r0, 0x2
    bne lbl_fn_804375C0_00001F3C
    mr r4, r23
    addi r3, r1, 0x188
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_00001F3C
    lfs f2, 0x190(r1)
    addi r4, r1, 0x170
    stfs f2, 0x178(r1)
    addi r3, r1, 0x54
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    lfs f2, 0x130(r1)
    lfs f0, 0x178(r1)
    lfs f9, 0x180(r1)
    fsubs f10, f2, f0
    lfs f8, 0x174(r1)
    lfs f7, 0x17c(r1)
    lfs f0, 0x170(r1)
    fsubs f8, f9, f8
    stfs f2, 0x184(r1)
    fsubs f0, f7, f0
    lfs f21, 0x134(r1)
    stfs f8, 0x58(r1)
    stfs f0, 0x54(r1)
    stfs f10, 0x5c(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f29, f1
    frsp f0, f0
    fcmpo cr0, f0, f26
    blt lbl_fn_804375C0_00001EDC
    lfs f7, 0x17c(r1)
    mr r3, r21
    lfs f0, 0x170(r1)
    mr r4, r21
    lfs f9, 0x180(r1)
    fsubs f10, f7, f0
    lfs f8, 0x174(r1)
    lfs f7, 0x184(r1)
    lfs f0, 0x178(r1)
    fsubs f8, f9, f8
    stfs f10, 0x17c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x180(r1)
    stfs f0, 0x184(r1)
    bl fn_805F98D0
    fsubs f9, f29, f21
    lfs f8, 0x17c(r1)
    lfs f7, 0x180(r1)
    lfs f0, 0x184(r1)
    fmuls f11, f8, f9
    lfs f8, 0x170(r1)
    fmuls f10, f7, f9
    lfs f7, 0x174(r1)
    fmuls f9, f0, f9
    lfs f0, 0x178(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x17c(r1)
    stfs f7, 0x180(r1)
    stfs f0, 0x184(r1)
lbl_fn_804375C0_00001EDC:
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x170
    addi r6, r1, 0x17c
    addi r7, r30, 0x10
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_804375C0_00001F3C
    li r0, 0x0
    stw r0, 0xed0(r15)
    lfs f1, lbl_80886900
    addi r3, r17, 0xb0
    stw r16, 0xed4(r15)
    li r4, 0x3
    lfs f2, lbl_80886924
    li r5, 0x64
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f27, 0x378(r17)
lbl_fn_804375C0_00001F3C:
    fcmpo cr0, f30, f28
    bge lbl_fn_804375C0_000020A8
    lfs f2, 0x190(r1)
    addi r3, r1, 0x48
    stfs f2, 0x160(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r14), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    lfs f2, 0x130(r1)
    lfs f0, 0x160(r1)
    lfs f9, 0x168(r1)
    fsubs f10, f2, f0
    lfs f8, 0x15c(r1)
    lfs f7, 0x164(r1)
    lfs f0, 0x158(r1)
    fsubs f8, f9, f8
    stfs f2, 0x16c(r1)
    fsubs f0, f7, f0
    lfs f21, 0x134(r1)
    stfs f8, 0x4c(r1)
    stfs f0, 0x48(r1)
    stfs f10, 0x50(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f29, f1
    frsp f0, f0
    fcmpo cr0, f0, f26
    blt lbl_fn_804375C0_0000202C
    lfs f7, 0x164(r1)
    mr r3, r20
    lfs f0, 0x158(r1)
    mr r4, r20
    lfs f9, 0x168(r1)
    fsubs f10, f7, f0
    lfs f8, 0x15c(r1)
    lfs f7, 0x16c(r1)
    lfs f0, 0x160(r1)
    fsubs f8, f9, f8
    stfs f10, 0x164(r1)
    fsubs f0, f7, f0
    stfs f8, 0x168(r1)
    stfs f0, 0x16c(r1)
    bl fn_805F98D0
    fsubs f9, f29, f21
    lfs f8, 0x164(r1)
    lfs f7, 0x168(r1)
    lfs f0, 0x16c(r1)
    fmuls f11, f8, f9
    lfs f8, 0x158(r1)
    fmuls f10, f7, f9
    lfs f7, 0x15c(r1)
    fmuls f9, f0, f9
    lfs f0, 0x160(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x164(r1)
    stfs f7, 0x168(r1)
    stfs f0, 0x16c(r1)
lbl_fn_804375C0_0000202C:
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x158
    addi r6, r1, 0x164
    addi r7, r30, 0x10
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_804375C0_000020A8
    lfs f7, 0x2c(r1)
    addi r4, r1, 0x9c
    lfs f0, 0x28(r1)
    addi r5, r1, 0x90
    lfs f8, 0x108(r1)
    addi r6, r1, 0x20
    psq_l f1, 0x0(r24), 0, 0
    lfs f2, 0x140(r1)
    stfs f2, 0xa4(r1)
    fmr f2, f8
    lwz r3, lbl_8087F490
    stfs f0, 0xe8(r1)
    stfs f7, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f30
    stfs f8, 0xf0(r1)
    stfs f2, 0x98(r1)
    bl fn_803E3050
lbl_fn_804375C0_000020A8:
    addi r16, r16, 0x1
    addi r31, r31, 0x188
    cmpwi r16, 0x8
    blt lbl_fn_804375C0_000019AC
lbl_fn_804375C0_000020B8:
    lwz r0, 0xed0(r15)
    cmpwi r0, 0x2
    beq lbl_fn_804375C0_000027A4
    cmpwi r0, 0x0
    addi r14, r17, 0xb0
    bne lbl_fn_804375C0_00002754
    lfs f7, 0x2c4(r14)
    lfs f0, lbl_8088691C
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    beq lbl_fn_804375C0_000020F0
    lwz r0, 0x2bc(r14)
    cmpwi r0, 0x64
    beq lbl_fn_804375C0_000027A4
lbl_fn_804375C0_000020F0:
    lwz r3, 0xee4(r15)
    li r8, 0x1
    lwz r0, 0xed4(r15)
    addi r5, r3, 0x1
    stw r8, 0xed0(r15)
    mulli r0, r0, 0x188
    stw r5, 0xee4(r15)
    lwz r3, lbl_8087F8A8
    add r4, r15, r0
    addi r16, r4, 0x288
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_000023A8
    lfs f0, lbl_80886900
    li r7, 0x0
    li r6, -0x1
    li r0, 0x9
    stw r7, 0x200(r1)
    mr r4, r17
    stfs f0, 0x204(r1)
    stfs f0, 0x208(r1)
    stw r7, 0x20c(r1)
    stw r7, 0x214(r1)
    stw r7, 0x218(r1)
    stw r8, 0x21c(r1)
    sth r7, 0x220(r1)
    stfs f0, 0x260(r1)
    stfs f0, 0x264(r1)
    stfs f0, 0x268(r1)
    stfs f0, 0x26c(r1)
    stfs f0, 0x270(r1)
    stfs f0, 0x274(r1)
    stw r7, 0x278(r1)
    stw r6, 0x27c(r1)
    stw r6, 0x280(r1)
    stw r7, 0x284(r1)
    stw r7, 0x288(r1)
    stw r7, 0x28c(r1)
    stw r7, 0x290(r1)
    stw r7, 0x294(r1)
    stw r7, 0x298(r1)
    stw r7, 0x29c(r1)
    stw r7, 0x2a0(r1)
    stw r7, 0x2a4(r1)
    stw r7, 0x2a8(r1)
    stw r7, 0x2ac(r1)
    stw r7, 0x2b0(r1)
    stw r0, 0x210(r1)
    bl fn_8054E52C
    stw r3, 0x294(r1)
    lwz r0, 0xee4(r15)
    cmpwi r0, 0x5
    blt lbl_fn_804375C0_000021C8
    li r0, 0x64
    stw r0, 0x284(r1)
lbl_fn_804375C0_000021C8:
    lwz r3, 0x294(r1)
    addi r4, r1, 0x84
    lfs f0, lbl_80886900
    lwz r3, 0x4(r3)
    lfs f7, 0xa0(r3)
    stfs f7, 0x204(r1)
    lfs f7, 0x84(r16)
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_804375C0_00002204
    psq_l f1, 0x3c(r16), 0, 0
    lfs f2, 0x44(r16)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8c(r1)
    b lbl_fn_804375C0_00002380
lbl_fn_804375C0_00002204:
    lfs f0, lbl_80886908
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_804375C0_00002228
    psq_l f1, 0x48(r16), 0, 0
    lfs f2, 0x50(r16)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8c(r1)
    b lbl_fn_804375C0_00002380
lbl_fn_804375C0_00002228:
    lwz r6, 0x34(r16)
    li r5, 0x0
    lfs f0, 0x38(r16)
    li r3, 0x0
    subic. r0, r6, 0x1
    fmuls f7, f0, f7
    mtctr r0
    ble lbl_fn_804375C0_00002370
lbl_fn_804375C0_00002248:
    lwz r7, 0x78(r16)
    lfsx f0, r7, r3
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_804375C0_00002360
    lfs f12, lbl_80886900
    fcmpu cr0, f12, f7
    bne lbl_fn_804375C0_0000226C
    b lbl_fn_804375C0_00002270
lbl_fn_804375C0_0000226C:
    fdivs f12, f7, f0
lbl_fn_804375C0_00002270:
    cmpwi r5, 0x0
    bge lbl_fn_804375C0_0000228C
    psq_l f1, 0x3c(r16), 0, 0
    lfs f2, 0x44(r16)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8c(r1)
    b lbl_fn_804375C0_00002380
lbl_fn_804375C0_0000228C:
    subi r0, r6, 0x1
    cmpw r5, r0
    blt lbl_fn_804375C0_000022AC
    psq_l f1, 0x48(r16), 0, 0
    lfs f2, 0x50(r16)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8c(r1)
    b lbl_fn_804375C0_00002380
lbl_fn_804375C0_000022AC:
    cmpwi r6, 0x2
    bge lbl_fn_804375C0_000022D0
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8c(r1)
    b lbl_fn_804375C0_00002380
lbl_fn_804375C0_000022D0:
    lwz r0, 0x54(r16)
    slwi r7, r5, 4
    lwz r3, 0x60(r16)
    addi r5, r1, 0x3c
    add r6, r0, r7
    lwz r0, 0x6c(r16)
    add r3, r3, r7
    lfs f9, 0xc(r6)
    lfs f7, 0x8(r6)
    add r7, r0, r7
    lfs f8, 0xc(r3)
    fmadds f11, f9, f12, f7
    lfs f0, 0x8(r3)
    lfs f10, 0x4(r6)
    fmadds f9, f8, f12, f0
    lfs f8, 0x4(r3)
    fmadds f11, f12, f11, f10
    lfs f10, 0x0(r6)
    fmadds f9, f12, f9, f8
    lfs f8, 0x0(r3)
    fmadds f10, f12, f11, f10
    lfs f7, 0xc(r7)
    lfs f0, 0x8(r7)
    fmadds f8, f12, f9, f8
    fmadds f7, f7, f12, f0
    lfs f0, 0x4(r7)
    stfs f10, 0x3c(r1)
    fmadds f7, f12, f7, f0
    lfs f0, 0x0(r7)
    stfs f8, 0x40(r1)
    fmadds f2, f12, f7, f0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    stfs f2, 0x8c(r1)
    b lbl_fn_804375C0_00002380
lbl_fn_804375C0_00002360:
    fsubs f7, f7, f0
    addi r5, r5, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_804375C0_00002248
lbl_fn_804375C0_00002370:
    psq_l f1, 0x3c(r16), 0, 0
    lfs f2, 0x44(r16)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8c(r1)
lbl_fn_804375C0_00002380:
    lfs f2, 0x8(r4)
    addi r3, r1, 0x260
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x200
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, lbl_8087F8A8
    stfs f2, 0x268(r1)
    lwz r0, 0xee4(r15)
    stw r0, 0x284(r1)
    bl fn_8054E100
lbl_fn_804375C0_000023A8:
    lwz r3, lbl_8087F430
    lwz r3, 0x10d0(r3)
    bl fn_8021D990
    mr r14, r3
    addi r3, r1, 0xd8
    li r4, 0x0
    li r5, 0x10
    bl memset
    cmpwi r14, 0x0
    beq lbl_fn_804375C0_000027A4
    lwz r6, 0xee4(r15)
    mr r3, r14
    addi r4, r1, 0x1c
    addi r5, r1, 0xd8
    subi r6, r6, 0x1
    bl fn_8021D9D4
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_000027A4
    lwz r5, 0x1c(r1)
    cmpwi r5, 0x0
    ble lbl_fn_804375C0_000027A4
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    li r6, 0x1
    bl fn_8021E4E4
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_000027A4
    lwz r3, 0x18(r1)
    bl fn_80450B60
    lwz r0, lbl_8087F4F0
    mr r14, r3
    cmpwi r0, 0x0
    beq lbl_fn_804375C0_000024C8
    li r0, -0x1
    stw r0, 0x10(r1)
    addi r3, r1, 0xd8
    addi r4, r1, 0x10
    stw r0, 0xc(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_80216AFC
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_0000248C
    lwz r3, lbl_8087F4F0
    li r4, 0x1
    lwz r7, 0x8(r1)
    li r0, 0x0
    lwz r6, 0xc(r1)
    addis r3, r3, 0x1
    lwz r5, 0x10(r1)
    stw r4, -0x24ec(r3)
    stw r5, -0x24e8(r3)
    stw r6, -0x24e4(r3)
    stw r7, -0x24e0(r3)
    stw r0, -0x24dc(r3)
    stw r0, -0x24d8(r3)
lbl_fn_804375C0_0000248C:
    lwz r3, lbl_8087F4F0
    addi r4, r1, 0x18
    addi r5, r1, 0x14
    li r6, 0x0
    bl fn_80445130
    lwz r3, lbl_8087F4F0
    li r4, 0x0
    li r0, -0x1
    addis r3, r3, 0x1
    stw r4, -0x24ec(r3)
    stw r0, -0x24e8(r3)
    stw r0, -0x24e4(r3)
    stw r0, -0x24e0(r3)
    stw r4, -0x24dc(r3)
    stw r4, -0x24d8(r3)
lbl_fn_804375C0_000024C8:
    lwz r3, 0x18(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_804375C0_000027A4
    lwz r3, lbl_8087F4F0
    li r17, 0x0
    lwz r4, 0x18(r1)
    bl fn_80448F9C
    mr r18, r3
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpw r18, r0
    ble lbl_fn_804375C0_00002520
    li r17, 0x1
lbl_fn_804375C0_00002520:
    lfs f7, 0x84(r16)
    addi r4, r1, 0x78
    lfs f0, lbl_80886900
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_804375C0_0000254C
    psq_l f1, 0x3c(r16), 0, 0
    lfs f2, 0x44(r16)
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_804375C0_000026C8
lbl_fn_804375C0_0000254C:
    lfs f0, lbl_80886908
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_804375C0_00002570
    psq_l f1, 0x48(r16), 0, 0
    lfs f2, 0x50(r16)
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_804375C0_000026C8
lbl_fn_804375C0_00002570:
    lwz r6, 0x34(r16)
    li r5, 0x0
    lfs f0, 0x38(r16)
    li r3, 0x0
    subic. r0, r6, 0x1
    fmuls f7, f0, f7
    mtctr r0
    ble lbl_fn_804375C0_000026B8
lbl_fn_804375C0_00002590:
    lwz r7, 0x78(r16)
    lfsx f0, r7, r3
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_804375C0_000026A8
    lfs f12, lbl_80886900
    fcmpu cr0, f12, f7
    bne lbl_fn_804375C0_000025B4
    b lbl_fn_804375C0_000025B8
lbl_fn_804375C0_000025B4:
    fdivs f12, f7, f0
lbl_fn_804375C0_000025B8:
    cmpwi r5, 0x0
    bge lbl_fn_804375C0_000025D4
    psq_l f1, 0x3c(r16), 0, 0
    lfs f2, 0x44(r16)
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_804375C0_000026C8
lbl_fn_804375C0_000025D4:
    subi r0, r6, 0x1
    cmpw r5, r0
    blt lbl_fn_804375C0_000025F4
    psq_l f1, 0x48(r16), 0, 0
    lfs f2, 0x50(r16)
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_804375C0_000026C8
lbl_fn_804375C0_000025F4:
    cmpwi r6, 0x2
    bge lbl_fn_804375C0_00002618
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x80(r1)
    b lbl_fn_804375C0_000026C8
lbl_fn_804375C0_00002618:
    lwz r0, 0x54(r16)
    slwi r7, r5, 4
    lwz r3, 0x60(r16)
    addi r5, r1, 0x30
    add r6, r0, r7
    lwz r0, 0x6c(r16)
    add r3, r3, r7
    lfs f9, 0xc(r6)
    lfs f7, 0x8(r6)
    add r7, r0, r7
    lfs f8, 0xc(r3)
    fmadds f11, f9, f12, f7
    lfs f0, 0x8(r3)
    lfs f10, 0x4(r6)
    fmadds f9, f8, f12, f0
    lfs f8, 0x4(r3)
    fmadds f11, f12, f11, f10
    lfs f10, 0x0(r6)
    fmadds f9, f12, f9, f8
    lfs f8, 0x0(r3)
    fmadds f10, f12, f11, f10
    lfs f7, 0xc(r7)
    lfs f0, 0x8(r7)
    fmadds f8, f12, f9, f8
    fmadds f7, f7, f12, f0
    lfs f0, 0x4(r7)
    stfs f10, 0x30(r1)
    fmadds f7, f12, f7, f0
    lfs f0, 0x0(r7)
    stfs f8, 0x34(r1)
    fmadds f2, f12, f7, f0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x38(r1)
    stfs f2, 0x80(r1)
    b lbl_fn_804375C0_000026C8
lbl_fn_804375C0_000026A8:
    fsubs f7, f7, f0
    addi r5, r5, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_804375C0_00002590
lbl_fn_804375C0_000026B8:
    psq_l f1, 0x3c(r16), 0, 0
    lfs f2, 0x44(r16)
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_804375C0_000026C8:
    lwz r8, 0x14(r1)
    mr r7, r15
    mr r9, r17
    addi r3, r16, 0x90
    li r5, 0x19
    li r6, 0x19
    li r10, 0x0
    bl fn_8044E418
    addi r3, r16, 0x90
    bl fn_8044E610
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_00002714
    cmpwi r14, 0x0
    beq lbl_fn_804375C0_0000270C
    addi r3, r16, 0x90
    bl fn_8044E644
    b lbl_fn_804375C0_00002714
lbl_fn_804375C0_0000270C:
    addi r3, r16, 0x90
    bl fn_8044F2D4
lbl_fn_804375C0_00002714:
    li r0, 0x3
    stw r0, 0x0(r16)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_000027A4
    mr r4, r16
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_804375C0_000027A4
    lwz r3, lbl_8087F3C0
    mr r4, r16
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_804375C0_000027A4
lbl_fn_804375C0_00002754:
    cmpwi r0, 0x1
    bne lbl_fn_804375C0_000027A4
    lfs f21, 0x2c4(r14)
    mr r3, r14
    li r4, 0x3
    bl fn_80097D7C
    fcmpo cr0, f21, f1
    cror eq, gt, eq
    beq lbl_fn_804375C0_00002784
    lwz r0, 0x2bc(r14)
    cmpwi r0, 0x64
    beq lbl_fn_804375C0_000027A4
lbl_fn_804375C0_00002784:
    lfs f0, lbl_80886908
    mr r3, r14
    stfs f0, 0x2c8(r14)
    li r4, 0x3
    lfs f1, lbl_80886900
    bl fn_80097CCC
    li r0, 0x2
    stw r0, 0xed0(r15)
lbl_fn_804375C0_000027A4:
    addi r11, r1, 0x300
    psq_l f31, 0x3a8(r1), 0, 0
    lfd f31, 0x3a0(r1)
    psq_l f30, 0x398(r1), 0, 0
    lfd f30, 0x390(r1)
    psq_l f29, 0x388(r1), 0, 0
    lfd f29, 0x380(r1)
    psq_l f28, 0x378(r1), 0, 0
    lfd f28, 0x370(r1)
    psq_l f27, 0x368(r1), 0, 0
    lfd f27, 0x360(r1)
    psq_l f26, 0x358(r1), 0, 0
    lfd f26, 0x350(r1)
    psq_l f25, 0x348(r1), 0, 0
    lfd f25, 0x340(r1)
    psq_l f24, 0x338(r1), 0, 0
    lfd f24, 0x330(r1)
    psq_l f23, 0x328(r1), 0, 0
    lfd f23, 0x320(r1)
    psq_l f22, 0x318(r1), 0, 0
    lfd f22, 0x310(r1)
    psq_l f21, 0x308(r1), 0, 0
    lfd f21, 0x300(r1)
    bl _restgpr_14
    lwz r0, 0x3b4(r1)
    mtlr r0
    addi r1, r1, 0x3b0
    blr
}
