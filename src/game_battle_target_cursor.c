#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_16(void);
extern void _savegpr_16(void);
extern void fn_8003EFB0(void);
extern void fn_80051BC4(void);
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
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800EF73C(void);
extern void fn_80161570(void);
extern void fn_801F64D0(void);
extern void fn_802180A8(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A1F4(void);
extern void fn_8023A8B4(void);
extern void fn_80373148(void);
extern void fn_803EC568(void);
extern void fn_803EC758(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_8040B200(void);
extern void fn_8044D710(void);
extern void fn_8044D9BC(void);
extern void fn_8044E1BC(void);
extern void fn_8044E610(void);
extern void fn_8044E644(void);
extern void fn_8044EA34(void);
extern void fn_8044EEC0(void);
extern void fn_8044F14C(void);
extern void fn_8044F434(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804F5B0C(void);
extern void fn_804F5CA0(void);
extern void fn_804F5E3C(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_806958E0(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80752954[];
extern u8 lbl_80752A5C[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D458[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8888[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886294;
extern u32 lbl_80886298;
extern u32 lbl_8088629C;
extern u32 lbl_808862A0;
extern u32 lbl_808862A4;
extern u32 lbl_808862A8;
extern u32 lbl_808862AC;
extern u32 lbl_808862B0;
extern u32 lbl_808862B4;
extern u32 lbl_808862C0;
extern u32 lbl_808862C4;
extern u32 lbl_808862C8;
extern u32 lbl_808862CC;
extern u32 lbl_808862D0;
extern u32 lbl_808862D4;
extern u32 lbl_808862D8;
extern u32 lbl_808862DC;
extern u32 lbl_808862E0;
extern u32 lbl_808862E4;
extern u32 lbl_808862E8;
extern u32 lbl_808862EC;
extern u32 lbl_808862F0;
extern u32 lbl_808862F4;
extern u32 lbl_808862F8;
extern u32 lbl_808862FC;
extern u32 lbl_80886300;
extern u32 lbl_80886304;

/* Function declarations */
void fn_804088C0(void);
void fn_80408920(void);
void fn_804089A0(void);
void fn_80408C94(void);
void fn_80408D58(void);
void fn_8040913C(void);
void fn_804091FC(void);
void fn_80409398(void);
void fn_804093B4(void);
void fn_80409438(void);
void fn_804095F0(void);
void fn_804096D4(void);

asm void fn_804088C0(void)
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
    beq lbl_fn_804088C0_0000004C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_804088C0_0000004C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80408920(void)
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
    bne lbl_fn_80408920_0000009C
    addi r3, r30, 0x4c4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80408920_000000A0
lbl_fn_80408920_0000009C:
    li r31, 0x1
lbl_fn_80408920_000000A0:
    addi r3, r30, 0x894
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80408920_000000C0
    addi r3, r30, 0x8a0
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80408920_000000C4
lbl_fn_80408920_000000C0:
    li r31, 0x1
lbl_fn_80408920_000000C4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804089A0(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    mr r31, r3
    addi r3, r3, 0x60
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r30, r3
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
    mr r4, r30
    mr r5, r29
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
    lis r30, lbl_80752954@ha
    addi r30, r30, lbl_80752954@l
lbl_fn_804089A0_00000190:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804089A0_000003A8
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804089A0_000001E8
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804089A0_000001CC
    addi r3, r1, 0x108
    bl fn_8005B9CC
lbl_fn_804089A0_000001CC:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_804089A0_000003A8
lbl_fn_804089A0_000001E8:
    mr r3, r29
    addi r4, r30, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804089A0_00000218
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x4c4
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_804089A0_000003A8
lbl_fn_804089A0_00000218:
    mr r3, r29
    addi r4, r30, 0x13
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804089A0_00000260
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
    b lbl_fn_804089A0_000003A8
lbl_fn_804089A0_00000260:
    mr r3, r29
    addi r4, r30, 0x1a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804089A0_000002A0
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804089A0_00000288
    addi r3, r1, 0x108
    bl fn_8005B9CC
lbl_fn_804089A0_00000288:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x894
    bl fn_8023780C
    b lbl_fn_804089A0_000003A8
lbl_fn_804089A0_000002A0:
    mr r3, r29
    addi r4, r30, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804089A0_000002CC
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x8a0
    bl fn_8023780C
    b lbl_fn_804089A0_000003A8
lbl_fn_804089A0_000002CC:
    mr r3, r29
    addi r4, r30, 0x2e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804089A0_00000304
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x8ac(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x8b0(r31)
    b lbl_fn_804089A0_000003A8
lbl_fn_804089A0_00000304:
    mr r3, r29
    addi r4, r30, 0x34
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804089A0_000003A8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    addi r0, r31, 0x8b8
    mr r29, r3
    cmplw r3, r0
    beq lbl_fn_804089A0_00000348
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x8b8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_804089A0_00000348:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    addi r0, r31, 0x8d8
    mr r29, r3
    cmplw r3, r0
    beq lbl_fn_804089A0_00000378
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x8d8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_804089A0_00000378:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    addi r0, r31, 0x8f8
    mr r29, r3
    cmplw r3, r0
    beq lbl_fn_804089A0_000003A8
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x8f8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_804089A0_000003A8:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804089A0_00000190
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_80408C94(void)
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
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ED0D4
    mr r3, r31
    addi r4, r31, 0x4c4
    li r5, 0x1
    bl fn_803ED0D4
    lfs f0, lbl_80886294
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
    bne lbl_fn_80408C94_0000045C
    li r0, 0x4
    stw r0, 0x8(r1)
    b lbl_fn_80408C94_0000046C
lbl_fn_80408C94_0000045C:
    cmpwi r0, 0x2
    bne lbl_fn_80408C94_0000046C
    li r0, 0x7
    stw r0, 0x8(r1)
lbl_fn_80408C94_0000046C:
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

asm void fn_80408D58(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r4
    stw r30, 0xa8(r1)
    mr r30, r3
    stw r29, 0xa4(r1)
    bne lbl_fn_80408D58_000004C8
    li r3, 0x0
    b lbl_fn_80408D58_00000860
lbl_fn_80408D58_000004C8:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_80408D58_00000500
    cmpwi r0, 0x3
    beq lbl_fn_80408D58_0000053C
    cmpwi r0, 0x4
    beq lbl_fn_80408D58_0000058C
    cmpwi r0, 0x5
    beq lbl_fn_80408D58_000005D0
    cmpwi r0, 0x6
    beq lbl_fn_80408D58_000006EC
    cmpwi r0, 0x7
    beq lbl_fn_80408D58_000007B0
    b lbl_fn_80408D58_00000854
lbl_fn_80408D58_00000500:
    lfs f1, lbl_80886298
    li r4, 0x0
    lfs f2, lbl_8088629C
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    mr r3, r30
    addi r4, r30, 0xf4
    bl fn_803ED5D0
    lfs f0, lbl_80886294
    stfs f0, 0x328(r30)
    b lbl_fn_80408D58_00000854
lbl_fn_80408D58_0000053C:
    lfs f1, lbl_80886294
    li r4, 0x0
    lfs f2, lbl_8088629C
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    lfs f1, lbl_80886298
    addi r3, r1, 0x18
    addi r4, r30, 0x8b8
    addi r5, r30, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80408D58_00000854
lbl_fn_80408D58_0000058C:
    lwz r29, 0x8b0(r3)
    lwz r0, 0x8ac(r3)
    cmpwi r29, 0x0
    stw r0, 0x8b4(r3)
    ble lbl_fn_80408D58_00000854
    bl fn_80680CF8
    divw r5, r3, r29
    srwi r4, r29, 31
    lwz r0, 0x8b4(r30)
    add r4, r4, r29
    srawi r4, r4, 1
    mullw r5, r5, r29
    subf r3, r5, r3
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0x8b4(r30)
    b lbl_fn_80408D58_00000854
lbl_fn_80408D58_000005D0:
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80408D58_00000604
    lfs f1, lbl_80886294
    li r4, 0x0
    lfs f2, lbl_8088629C
    li r5, 0x2
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    b lbl_fn_80408D58_00000628
lbl_fn_80408D58_00000604:
    lfs f1, lbl_80886294
    li r4, 0x0
    lfs f2, lbl_8088629C
    li r5, 0x1
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
lbl_fn_80408D58_00000628:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x1
    bl fn_80232B7C
    lfs f0, lbl_80886294
    li r3, -0x1
    lfs f1, lbl_80886298
    li r0, 0x1
    stfs f0, 0x7c(r1)
    addi r4, r30, 0x894
    addi r5, r30, 0xf4
    addi r7, r1, 0x70
    stfs f0, 0x80(r1)
    addi r8, r1, 0x7c
    addi r9, r1, 0x88
    li r6, 0x0
    stfs f0, 0x84(r1)
    li r10, -0x1
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x78(r1)
    stfs f1, 0x88(r1)
    stfs f1, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f1, 0x94(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    mr r4, r30
    addi r6, r30, 0x924
    li r5, 0x1
    bl fn_8023A1F4
    lfs f1, lbl_80886298
    addi r3, r1, 0x14
    addi r4, r30, 0x8d8
    addi r5, r30, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80408D58_00000854
lbl_fn_80408D58_000006EC:
    lwz r3, lbl_8087F3C0
    li r29, 0x1
    mr r4, r30
    li r5, 0x1
    stw r29, 0xb8(r3)
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x1
    bl fn_80232B7C
    lfs f0, lbl_80886294
    li r0, -0x1
    lfs f1, lbl_80886298
    addi r4, r30, 0x8a0
    stfs f0, 0x54(r1)
    addi r5, r30, 0x4c4
    addi r7, r1, 0x48
    addi r8, r1, 0x54
    stfs f0, 0x58(r1)
    addi r9, r1, 0x60
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x5c(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r4, lbl_8087F3C0
    li r0, 0x0
    lfs f1, lbl_80886298
    addi r3, r1, 0x10
    stw r0, 0xb8(r4)
    addi r4, r30, 0x8f8
    addi r5, r30, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80408D58_00000854
lbl_fn_80408D58_000007B0:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80408D58_00000854
    lwz r3, lbl_8087F3C0
    li r29, 0x1
    mr r4, r30
    li r5, 0x1
    stw r29, 0xb8(r3)
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x1
    bl fn_80232B7C
    lfs f0, lbl_80886294
    li r0, -0x1
    lfs f1, lbl_80886298
    addi r4, r30, 0x8a0
    stfs f0, 0x28(r1)
    addi r5, r30, 0x4c4
    addi r7, r1, 0x1c
    addi r8, r1, 0x28
    stfs f0, 0x2c(r1)
    addi r9, r1, 0x38
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_80408D58_00000854:
    lwz r0, 0x0(r31)
    li r3, 0x1
    stw r0, 0x54(r30)
lbl_fn_80408D58_00000860:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8040913C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886294
    cmplwi r4, 0x2
    stw r0, 0x34(r1)
    li r0, 0x0
    li r5, 0x4
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    ble lbl_fn_8040913C_000008E0
    subi r0, r4, 0x3
    cmplwi r0, 0x2
    ble lbl_fn_8040913C_000008EC
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_8040913C_000008F4
    b lbl_fn_8040913C_000008FC
lbl_fn_8040913C_000008E0:
    li r0, 0x1
    stw r0, 0x8(r1)
    b lbl_fn_8040913C_000008FC
lbl_fn_8040913C_000008EC:
    stw r5, 0x8(r1)
    b lbl_fn_8040913C_000008FC
lbl_fn_8040913C_000008F4:
    li r0, 0x7
    stw r0, 0x8(r1)
lbl_fn_8040913C_000008FC:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8040913C_00000928
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_8040913C_00000928:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804091FC(void)
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
    bne lbl_fn_804091FC_0000099C
    cmpwi r30, 0x0
    beq lbl_fn_804091FC_0000099C
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_804091FC_0000099C
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_804091FC_000009A0
lbl_fn_804091FC_0000099C:
    li r30, 0x0
lbl_fn_804091FC_000009A0:
    lis r31, lbl_80752954@ha
    mr r3, r30
    addi r31, r31, lbl_80752954@l
    addi r5, r29, 0x54
    addi r4, r31, 0x3d
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808862A0
    mr r3, r30
    lfs f2, lbl_808862A4
    addi r4, r31, 0x43
    lfs f3, lbl_808862A8
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808862AC
    mr r3, r30
    lfs f2, lbl_808862B0
    addi r4, r31, 0x47
    lfs f3, lbl_808862B4
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_808862A0
    mr r3, r30
    lfs f2, lbl_808862A4
    addi r4, r31, 0x4b
    lfs f3, lbl_808862A8
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x4f
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x56
    addi r5, r29, 0x8ac
    li r6, -0x1
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x60
    addi r5, r29, 0x8b0
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808862A0
    mr r3, r30
    lfs f2, lbl_808862A4
    addi r4, r31, 0x6e
    lfs f3, lbl_80886298
    addi r5, r29, 0x924
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80409398(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    cmpwi r0, 0x6
    bge lbl_fn_80409398_00000AEC
    addi r3, r3, 0xf4
    blr
lbl_fn_80409398_00000AEC:
    addi r3, r3, 0x4c4
    blr
}

asm void fn_804093B4(void)
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
    beq lbl_fn_804093B4_00000B58
    lis r5, lbl_80752A5C@ha
    li r3, 0x2a8
    addi r5, r5, lbl_80752A5C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804093B4_00000B5C
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80409438
    b lbl_fn_804093B4_00000B5C
lbl_fn_804093B4_00000B58:
    li r3, 0x0
lbl_fn_804093B4_00000B5C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80409438(void)
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
    lis r3, lbl_8078D458@ha
    lis r4, fn_802377B8@ha
    addi r3, r3, lbl_8078D458@l
    lis r5, fn_800EF73C@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0xf4
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x7
    bl fn_806958E0
    addi r3, r31, 0x148
    bl fn_802377B8
    lfs f1, lbl_808862C0
    li r29, 0x0
    lfs f0, lbl_808862C4
    li r30, -0x1
    li r0, 0x1
    stw r29, 0x154(r31)
    addi r3, r31, 0x19c
    stw r29, 0x158(r31)
    stw r29, 0x15c(r31)
    stw r29, 0x160(r31)
    stfs f1, 0x164(r31)
    stw r30, 0x168(r31)
    stw r29, 0x17c(r31)
    stw r0, 0x180(r31)
    stfs f1, 0x184(r31)
    stfs f0, 0x188(r31)
    stfs f1, 0x18c(r31)
    stw r29, 0x190(r31)
    stw r29, 0x194(r31)
    stw r29, 0x198(r31)
    bl fn_8044D710
    li r0, 0xff
    stw r29, 0x290(r31)
    mr r4, r31
    addi r3, r31, 0x19c
    stb r0, 0x29c(r31)
    stw r30, 0x2a0(r31)
    stw r29, 0x54(r31)
    bl fn_8044D9BC
    lwz r0, 0x288(r31)
    lis r4, lbl_80752A5C@ha
    addi r4, r4, lbl_80752A5C@l
    mr r3, r31
    rlwinm r0, r0, 0, 4, 1
    oris r0, r0, 0x100
    stw r0, 0x288(r31)
    addi r4, r4, 0x1
    bl fn_801F64D0
    lwz r0, 0x290(r31)
    cmplwi r0, 0x2
    bge lbl_fn_80409438_00000C94
    lwz r0, 0x290(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x294
    beq lbl_fn_80409438_00000C88
    stw r3, 0x0(r4)
lbl_fn_80409438_00000C88:
    lwz r3, 0x290(r31)
    addi r0, r3, 0x1
    stw r0, 0x290(r31)
lbl_fn_80409438_00000C94:
    lis r4, lbl_80752A5C@ha
    mr r3, r31
    addi r4, r4, lbl_80752A5C@l
    addi r4, r4, 0x1e
    bl fn_801F64D0
    lwz r0, 0x290(r31)
    cmplwi r0, 0x2
    bge lbl_fn_80409438_00000CD8
    lwz r0, 0x290(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x294
    beq lbl_fn_80409438_00000CCC
    stw r3, 0x0(r4)
lbl_fn_80409438_00000CCC:
    lwz r3, 0x290(r31)
    addi r0, r3, 0x1
    stw r0, 0x290(r31)
lbl_fn_80409438_00000CD8:
    addi r29, r31, 0x294
    b lbl_fn_80409438_00000CF8
lbl_fn_80409438_00000CE0:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80409438_00000CF4
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80409438_00000CF4:
    addi r29, r29, 0x4
lbl_fn_80409438_00000CF8:
    lwz r0, 0x290(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x294
    cmplw r29, r0
    bne lbl_fn_80409438_00000CE0
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804095F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_804095F0_00000DF8
    addi r3, r30, 0x19c
    bl fn_8044E1BC
    cmpwi r3, 0x0
    bne lbl_fn_804095F0_00000DF8
    mr r3, r30
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804095F0_00000DF8
    addi r31, r30, 0x294
    b lbl_fn_804095F0_00000D94
lbl_fn_804095F0_00000D7C:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804095F0_00000D90
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804095F0_00000D90:
    addi r31, r31, 0x4
lbl_fn_804095F0_00000D94:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r31, r0
    bne lbl_fn_804095F0_00000D7C
    addi r4, r30, 0x294
    b lbl_fn_804095F0_00000DD0
lbl_fn_804095F0_00000DB4:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804095F0_00000DCC
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804095F0_00000DCC:
    addi r4, r4, 0x4
lbl_fn_804095F0_00000DD0:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r4, r0
    bne lbl_fn_804095F0_00000DB4
    li r0, 0x1
    stw r0, 0x54(r30)
    li r3, 0x1
    b lbl_fn_804095F0_00000DFC
lbl_fn_804095F0_00000DF8:
    li r3, 0x0
lbl_fn_804095F0_00000DFC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804096D4(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stfd f28, 0x1a0(r1)
    psq_st f28, 0x1a8(r1), 0, 0
    stfd f27, 0x190(r1)
    psq_st f27, 0x198(r1), 0, 0
    bl _savegpr_16
    lwz r12, 0x0(r3)
    mr r17, r3
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00000E90
    lwz r12, 0x0(r17)
    mr r3, r17
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r17
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_804096D4_00000E90:
    lwz r0, 0x54(r17)
    cmpwi r0, 0x3
    beq lbl_fn_804096D4_00000EC8
    cmpwi r0, 0x4
    beq lbl_fn_804096D4_00000EDC
    cmpwi r0, 0x5
    beq lbl_fn_804096D4_00001758
    cmpwi r0, 0x6
    beq lbl_fn_804096D4_00001858
    cmpwi r0, 0x7
    beq lbl_fn_804096D4_000018B8
    cmpwi r0, 0x8
    beq lbl_fn_804096D4_000019EC
    b lbl_fn_804096D4_00001A18
lbl_fn_804096D4_00000EC8:
    li r3, 0x4
    li r0, -0x1
    stw r3, 0x54(r17)
    stw r0, 0x2a0(r17)
    b lbl_fn_804096D4_00001A18
lbl_fn_804096D4_00000EDC:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00000EF0
    lwz r22, 0x48(r3)
    b lbl_fn_804096D4_00000EF4
lbl_fn_804096D4_00000EF0:
    li r22, 0x0
lbl_fn_804096D4_00000EF4:
    cmpwi r22, 0x0
    beq lbl_fn_804096D4_00001A18
    lwz r0, 0x54c(r22)
    rlwinm r4, r0, 0, 28, 28
    subfic r3, r4, 0x8
    subi r0, r4, 0x8
    or r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_804096D4_00001A18
    lwz r0, 0x12a8(r22)
    extrwi. r0, r0, 1, 30
    bne lbl_fn_804096D4_00001A18
    lwz r3, lbl_8087F430
    li r21, 0x0
    lfs f31, lbl_808862C8
    li r20, 0x0
    cmpwi r3, 0x0
    lfs f29, lbl_808862CC
    li r19, 0x0
    beq lbl_fn_804096D4_00000F74
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00000F74
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804096D4_00000F74
    lfs f0, lbl_808862D4
    lfs f3, lbl_808862D0
    fdivs f29, f29, f0
    fmuls f31, f31, f3
lbl_fn_804096D4_00000F74:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x64
    lfs f3, 0x74(r17)
    lfs f0, 0x114(r4)
    lfs f5, 0x70(r17)
    fsubs f6, f3, f0
    lfs f4, 0x110(r4)
    lfs f3, 0x6c(r17)
    lfs f0, 0x10c(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x68(r1)
    stfs f0, 0x64(r1)
    stfs f6, 0x6c(r1)
    bl fn_805F9920
    lwz r3, lbl_8087F430
    fmr f30, f1
    li r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00000FD4
    lwz r3, 0x54e4(r3)
    cmpwi r3, 0x8
    bne lbl_fn_804096D4_00000FD4
    li r0, 0x1
lbl_fn_804096D4_00000FD4:
    cmpwi r0, 0x0
    bne lbl_fn_804096D4_0000110C
    lfs f0, lbl_808862D8
    fcmpo cr0, f1, f0
    bge lbl_fn_804096D4_0000110C
    addi r3, r1, 0x70
    psq_l f1, 0x5f4(r22), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f7, 0x70(r17)
    lfs f4, lbl_808862DC
    lfs f3, 0x74(r1)
    fsubs f0, f7, f4
    lfs f2, 0x5fc(r22)
    stfs f2, 0x78(r1)
    fcmpo cr0, f0, f3
    bge lbl_fn_804096D4_0000110C
    fadds f0, f4, f7
    fcmpo cr0, f3, f0
    bge lbl_fn_804096D4_0000110C
    frsp f5, f2
    lfs f6, 0x74(r17)
    lfs f4, 0x70(r17)
    addi r3, r1, 0x58
    lfs f3, 0x6c(r17)
    lfs f0, 0x70(r1)
    fsubs f5, f6, f5
    stfs f7, 0x74(r1)
    fsubs f4, f4, f7
    fsubs f0, f3, f0
    stfs f5, 0x60(r1)
    stfs f0, 0x58(r1)
    stfs f4, 0x5c(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_804096D4_00001068
    li r21, 0x1
lbl_fn_804096D4_00001068:
    fmuls f0, f29, f29
    fcmpo cr0, f1, f0
    bge lbl_fn_804096D4_00001078
    li r20, 0x1
lbl_fn_804096D4_00001078:
    lwz r0, 0x190(r17)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_000010FC
    lwz r0, 0x198(r17)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_000010E8
    lwz r7, lbl_8087F490
    li r5, 0x0
    li r6, -0x1
    li r4, 0x6
    cmpwi r7, 0x0
    li r3, 0xe
    li r0, 0x1
    stw r6, 0x138(r1)
    stw r5, 0x13c(r1)
    stw r5, 0x140(r1)
    stw r5, 0x144(r1)
    stw r4, 0x130(r1)
    stw r3, 0x134(r1)
    stw r0, 0x148(r1)
    beq lbl_fn_804096D4_000010E8
    stw r4, 0x764(r7)
    stw r3, 0x768(r7)
    stw r6, 0x76c(r7)
    stw r5, 0x770(r7)
    stw r5, 0x774(r7)
    stw r5, 0x778(r7)
    stw r0, 0x77c(r7)
lbl_fn_804096D4_000010E8:
    lwz r0, 0x194(r17)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_0000110C
    li r19, 0x1
    b lbl_fn_804096D4_0000110C
lbl_fn_804096D4_000010FC:
    lfs f0, lbl_808862E0
    fcmpo cr0, f1, f0
    bge lbl_fn_804096D4_0000110C
    li r19, 0x1
lbl_fn_804096D4_0000110C:
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_00001348
    lwz r0, 0x190(r17)
    cmpwi r0, 0x0
    bne lbl_fn_804096D4_00001348
    lfs f27, lbl_808862E8
    addi r29, r1, 0x4c
    lfs f28, lbl_808862C0
    addi r30, r1, 0x124
    lfs f29, lbl_808862EC
    addi r27, r1, 0x40
    lfs f31, lbl_808862E4
    addi r28, r1, 0x118
    addi r25, r1, 0x34
    addi r26, r1, 0xf8
    addi r23, r1, 0x1c
    addi r24, r1, 0x104
    li r18, 0x0
    li r16, 0x0
lbl_fn_804096D4_0000115C:
    lwz r0, lbl_8087F048
    add r31, r0, r16
    lwz r4, 0x154(r31)
    rlwinm r3, r4, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_804096D4_00001188
    rlwinm r3, r4, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_804096D4_00001338
lbl_fn_804096D4_00001188:
    lwz r3, 0x1d8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00001338
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804096D4_00001338
    lwz r7, 0x1b8(r31)
    lfs f4, 0x1ac(r31)
    lwz r5, 0x1b0(r31)
    cmpwi r7, 0x0
    lwz r6, 0x1b4(r31)
    lwz r8, 0x1bc(r31)
    lfs f3, 0x1c0(r31)
    lfs f0, 0x1c4(r31)
    stfs f4, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r6, 0xa0(r1)
    stw r7, 0xa4(r1)
    stw r8, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f0, 0xb0(r1)
    beq lbl_fn_804096D4_00001210
    lwz r0, 0xac(r7)
    stfs f4, 0x7c(r1)
    rlwinm r3, r0, 0, 16, 16
    addis r0, r3, 0x0
    stw r5, 0x80(r1)
    cmplwi r0, 0x8000
    stw r6, 0x84(r1)
    stw r7, 0x88(r1)
    stw r8, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    beq lbl_fn_804096D4_00001338
lbl_fn_804096D4_00001210:
    rlwinm r3, r4, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_804096D4_00001338
    addi r3, r31, 0x170
    bl fn_805F9920
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f31
    blt lbl_fn_804096D4_00001338
    lfs f3, 0x160(r31)
    mr r3, r28
    lfs f0, 0x178(r31)
    mr r4, r26
    lfs f5, 0x15c(r31)
    fadds f6, f3, f0
    lfs f4, 0x174(r31)
    lfs f3, 0x158(r31)
    lfs f0, 0x170(r31)
    fadds f4, f5, f4
    fmr f2, f6
    fadds f0, f3, f0
    stfs f4, 0x50(r1)
    stfs f0, 0x4c(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x12c(r1)
    lfs f3, 0x160(r31)
    lfs f0, 0x178(r31)
    lfs f5, 0x15c(r31)
    fsubs f7, f3, f0
    lfs f4, 0x174(r31)
    lfs f3, 0x158(r31)
    lfs f0, 0x170(r31)
    fsubs f4, f5, f4
    fmr f2, f7
    fsubs f0, f3, f0
    stfs f4, 0x44(r1)
    stfs f0, 0x40(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x120(r1)
    stfs f27, 0x110(r1)
    lfs f3, 0x70(r17)
    lfs f0, 0x6c(r17)
    fadds f5, f3, f27
    lfs f4, 0x74(r17)
    fadds f0, f0, f28
    stfs f6, 0x54(r1)
    fadds f2, f4, f28
    fadds f3, f3, f29
    stfs f0, 0x34(r1)
    stfs f5, 0x38(r1)
    psq_l f1, 0x0(r25), 0, 0
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    stfs f7, 0x48(r1)
    stfs f28, 0x28(r1)
    stfs f27, 0x2c(r1)
    stfs f28, 0x30(r1)
    stfs f2, 0x3c(r1)
    stfs f2, 0x100(r1)
    stfs f28, 0x10(r1)
    stfs f29, 0x14(r1)
    stfs f28, 0x18(r1)
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_80051BC4
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00001338
    li r19, 0x1
lbl_fn_804096D4_00001338:
    addi r18, r18, 0x1
    addi r16, r16, 0xa0
    cmpwi r18, 0x100
    blt lbl_fn_804096D4_0000115C
lbl_fn_804096D4_00001348:
    cmpwi r19, 0x0
    li r0, -0x1
    stw r0, 0x2a0(r17)
    beq lbl_fn_804096D4_0000149C
    lwz r4, 0x1a0(r17)
    li r0, 0x1
    li r3, 0x0
    cmpwi r4, 0x3
    blt lbl_fn_804096D4_00001378
    cmpwi r4, 0x5
    bge lbl_fn_804096D4_00001378
    li r3, 0x1
lbl_fn_804096D4_00001378:
    cmpwi r3, 0x0
    bne lbl_fn_804096D4_0000138C
    cmpwi r4, 0x7
    beq lbl_fn_804096D4_0000138C
    li r0, 0x0
lbl_fn_804096D4_0000138C:
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_000013A0
    addi r3, r17, 0x19c
    li r4, 0x0
    bl fn_8044EA34
lbl_fn_804096D4_000013A0:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_804096D4_000013C0
    addi r3, r17, 0x19c
    bl fn_8044F14C
    mr r3, r17
    bl fn_8040B200
    b lbl_fn_804096D4_00001450
lbl_fn_804096D4_000013C0:
    lwz r0, 0x190(r17)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_000013F0
    lfs f1, lbl_808862F0
    mr r3, r22
    li r4, 0x1ec
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
    lfs f0, lbl_808862F4
    stfs f0, 0x2e8(r22)
lbl_fn_804096D4_000013F0:
    lbz r0, 0x29c(r17)
    cmplwi r0, 0xff
    bne lbl_fn_804096D4_00001450
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804096D4_00001430
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804096D4_00001424
    li r0, 0x0
    b lbl_fn_804096D4_0000144C
lbl_fn_804096D4_00001424:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804096D4_0000144C
lbl_fn_804096D4_00001430:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804096D4_00001444
    li r3, 0x0
    b lbl_fn_804096D4_00001448
lbl_fn_804096D4_00001444:
    bl fn_806A8E40
lbl_fn_804096D4_00001448:
    clrlwi r0, r3, 24
lbl_fn_804096D4_0000144C:
    stb r0, 0x29c(r17)
lbl_fn_804096D4_00001450:
    lfs f0, lbl_808862C0
    li r0, 0x0
    li r3, 0x5
    stw r3, 0xd8(r1)
    mr r3, r17
    addi r4, r1, 0xd8
    stw r0, 0xdc(r1)
    stw r0, 0xe0(r1)
    stw r0, 0xe4(r1)
    stw r0, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f0, 0xf0(r1)
    stfs f0, 0xf4(r1)
    lwz r12, 0x0(r17)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r21, 0x0
    li r20, 0x0
lbl_fn_804096D4_0000149C:
    lfs f0, lbl_808862D8
    fcmpo cr0, f30, f0
    bge lbl_fn_804096D4_00001648
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_000014C4
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_000014C4
    li r21, 0x0
lbl_fn_804096D4_000014C4:
    lwz r4, 0x1a0(r17)
    li r0, 0x1
    li r3, 0x0
    cmpwi r4, 0x3
    blt lbl_fn_804096D4_000014E4
    cmpwi r4, 0x5
    bge lbl_fn_804096D4_000014E4
    li r3, 0x1
lbl_fn_804096D4_000014E4:
    cmpwi r3, 0x0
    bne lbl_fn_804096D4_000014F8
    cmpwi r4, 0x7
    beq lbl_fn_804096D4_000014F8
    li r0, 0x0
lbl_fn_804096D4_000014F8:
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_00001504
    li r21, 0x0
lbl_fn_804096D4_00001504:
    cmpwi r21, 0x0
    beq lbl_fn_804096D4_0000153C
    lfs f4, 0x164(r17)
    lfs f3, lbl_808862F8
    fcmpo cr0, f4, f3
    bge lbl_fn_804096D4_00001568
    lfs f0, lbl_808862FC
    fadds f0, f0, f4
    fcmpo cr0, f0, f3
    bge lbl_fn_804096D4_00001530
    b lbl_fn_804096D4_00001534
lbl_fn_804096D4_00001530:
    fmr f0, f3
lbl_fn_804096D4_00001534:
    stfs f0, 0x164(r17)
    b lbl_fn_804096D4_00001568
lbl_fn_804096D4_0000153C:
    lfs f4, 0x164(r17)
    lfs f3, lbl_808862C0
    fcmpo cr0, f4, f3
    ble lbl_fn_804096D4_00001568
    lfs f0, lbl_808862FC
    fsubs f0, f4, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_804096D4_00001560
    b lbl_fn_804096D4_00001564
lbl_fn_804096D4_00001560:
    fmr f0, f3
lbl_fn_804096D4_00001564:
    stfs f0, 0x164(r17)
lbl_fn_804096D4_00001568:
    lfs f3, 0x164(r17)
    lfs f0, lbl_80886300
    fcmpo cr0, f3, f0
    ble lbl_fn_804096D4_000015FC
    lwz r0, 0x288(r17)
    srwi. r0, r0, 31
    beq lbl_fn_804096D4_000015D0
    addi r3, r17, 0x19c
    bl fn_8044E610
    cmpwi r3, 0x0
    bne lbl_fn_804096D4_000015FC
    lwz r4, 0x1a0(r17)
    li r0, 0x1
    li r3, 0x0
    cmpwi r4, 0x3
    blt lbl_fn_804096D4_000015B4
    cmpwi r4, 0x5
    bge lbl_fn_804096D4_000015B4
    li r3, 0x1
lbl_fn_804096D4_000015B4:
    cmpwi r3, 0x0
    bne lbl_fn_804096D4_000015C8
    cmpwi r4, 0x7
    beq lbl_fn_804096D4_000015C8
    li r0, 0x0
lbl_fn_804096D4_000015C8:
    cmpwi r0, 0x0
    bne lbl_fn_804096D4_000015FC
lbl_fn_804096D4_000015D0:
    lwz r0, 0x190(r17)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_000015E8
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_804096D4_000015FC
lbl_fn_804096D4_000015E8:
    lwz r0, 0x288(r17)
    oris r0, r0, 0x400
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x288(r17)
    b lbl_fn_804096D4_00001624
lbl_fn_804096D4_000015FC:
    lwz r0, 0x288(r17)
    cmpwi r19, 0x0
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x288(r17)
    beq lbl_fn_804096D4_0000161C
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x288(r17)
    b lbl_fn_804096D4_00001624
lbl_fn_804096D4_0000161C:
    oris r0, r0, 0x200
    stw r0, 0x288(r17)
lbl_fn_804096D4_00001624:
    cmpwi r20, 0x0
    beq lbl_fn_804096D4_00001660
    addi r3, r17, 0x19c
    bl fn_8044E610
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00001660
    addi r3, r17, 0x19c
    bl fn_8044E644
    b lbl_fn_804096D4_00001660
lbl_fn_804096D4_00001648:
    lwz r0, 0x288(r17)
    lfs f0, lbl_808862C0
    rlwinm r0, r0, 0, 6, 4
    stfs f0, 0x164(r17)
    oris r0, r0, 0x200
    stw r0, 0x288(r17)
lbl_fn_804096D4_00001660:
    lwz r3, lbl_8087F430
    li r5, 0x0
    mr r4, r5
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00001684
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    bne lbl_fn_804096D4_00001684
    li r4, 0x1
lbl_fn_804096D4_00001684:
    cmpwi r4, 0x0
    bne lbl_fn_804096D4_0000169C
    lfs f0, lbl_80886304
    fcmpo cr0, f30, f0
    bge lbl_fn_804096D4_0000169C
    li r5, 0x1
lbl_fn_804096D4_0000169C:
    cmpwi r5, 0x0
    beq lbl_fn_804096D4_00001728
    lwz r3, lbl_8087F3C0
    mr r4, r17
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_804096D4_00001A18
    lwz r5, lbl_8087F3C0
    li r16, 0x1
    mr r3, r17
    li r4, 0x0
    stw r16, 0xb8(r5)
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    lis r8, lbl_807C7030@ha
    lfs f1, lbl_808862F8
    stw r16, 0xc(r1)
    addi r7, r17, 0x6c
    addi r8, r8, lbl_807C7030@l
    addi r9, r17, 0x16c
    lwz r0, 0x168(r17)
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    mulli r0, r0, 0xc
    li r10, -0x1
    add r4, r17, r0
    addi r4, r4, 0xf4
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_804096D4_00001A18
lbl_fn_804096D4_00001728:
    lwz r3, lbl_8087F3C0
    mr r4, r17
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00001A18
    lwz r3, lbl_8087F3C0
    mr r4, r17
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_804096D4_00001A18
lbl_fn_804096D4_00001758:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x170(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_00001778
    addi r3, r17, 0x19c
    bl fn_8044EEC0
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00001A18
lbl_fn_804096D4_00001778:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804096D4_000017B8
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r16, 0x1
    lis r5, lbl_807C8888@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8888@l
    stw r0, 0x8(r3)
    stw r16, 0xc(r3)
    bl __register_global_object
    stb r16, lbl_8087EE74
lbl_fn_804096D4_000017B8:
    lis r18, lbl_807C6BB8@ha
    li r19, 0x0
    lfs f0, lbl_808862C0
    addi r18, r18, lbl_807C6BB8@l
    li r0, 0x6
    stw r19, 0xc(r18)
    mr r3, r17
    addi r4, r1, 0xb8
    stw r0, 0xb8(r1)
    stw r19, 0xbc(r1)
    stw r19, 0xc0(r1)
    stw r19, 0xc4(r1)
    stw r19, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f0, 0xd0(r1)
    stfs f0, 0xd4(r1)
    lwz r12, 0x0(r17)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804096D4_00001844
    li r16, 0x1
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8888@ha
    stw r19, 0x0(r18)
    mr r3, r18
    addi r4, r4, fn_8003EFB0@l
    stw r19, 0x4(r18)
    addi r5, r5, lbl_807C8888@l
    stw r19, 0x8(r18)
    stw r16, 0xc(r18)
    bl __register_global_object
    stb r16, lbl_8087EE74
lbl_fn_804096D4_00001844:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x1
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
    b lbl_fn_804096D4_00001A18
lbl_fn_804096D4_00001858:
    lwz r3, lbl_8087F3C0
    mr r4, r17
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_804096D4_00001A18
    lwz r3, lbl_8087F3C0
    mr r4, r17
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x2a0(r17)
    cmpwi r0, -0x1
    beq lbl_fn_804096D4_0000189C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_804096D4_000018AC
lbl_fn_804096D4_0000189C:
    lwz r0, 0x38(r17)
    ori r0, r0, 0x4
    stw r0, 0x38(r17)
    b lbl_fn_804096D4_00001A18
lbl_fn_804096D4_000018AC:
    li r0, 0x7
    stw r0, 0x54(r17)
    b lbl_fn_804096D4_00001A18
lbl_fn_804096D4_000018B8:
    lwz r0, 0x2a0(r17)
    li r18, 0x1
    cmpwi r0, -0x2
    bne lbl_fn_804096D4_00001948
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804096D4_000018FC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804096D4_000018F0
    li r0, 0x0
    b lbl_fn_804096D4_00001918
lbl_fn_804096D4_000018F0:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804096D4_00001918
lbl_fn_804096D4_000018FC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804096D4_00001910
    li r3, 0x0
    b lbl_fn_804096D4_00001914
lbl_fn_804096D4_00001910:
    bl fn_806A8E40
lbl_fn_804096D4_00001914:
    clrlwi r0, r3, 24
lbl_fn_804096D4_00001918:
    lbz r3, 0x29c(r17)
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804096D4_000019C8
    lwz r0, 0x160(r17)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_0000193C
    addi r3, r17, 0x19c
    bl fn_8044F14C
lbl_fn_804096D4_0000193C:
    mr r3, r17
    bl fn_8040B200
    b lbl_fn_804096D4_000019C8
lbl_fn_804096D4_00001948:
    cmpwi r0, -0x1
    beq lbl_fn_804096D4_000019C8
    lwz r3, lbl_8087F610
    clrlwi r4, r0, 24
    bl fn_804F5E3C
    cmpwi r3, 0x0
    bne lbl_fn_804096D4_0000196C
    li r18, 0x0
    b lbl_fn_804096D4_000019C8
lbl_fn_804096D4_0000196C:
    cmpwi r3, 0x1
    bne lbl_fn_804096D4_000019C8
    lwz r0, 0x2a0(r17)
    lwz r3, lbl_8087F610
    clrlwi r4, r0, 24
    bl fn_804F5B0C
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_000019C8
    lwz r4, 0x0(r3)
    lwz r0, 0x48(r17)
    cmpw r4, r0
    bne lbl_fn_804096D4_000019C8
    lwz r3, 0x4(r3)
    lwz r0, 0x4c(r17)
    cmpw r3, r0
    bne lbl_fn_804096D4_000019C8
    lwz r0, 0x160(r17)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_000019C0
    addi r3, r17, 0x19c
    bl fn_8044F14C
lbl_fn_804096D4_000019C0:
    mr r3, r17
    bl fn_8040B200
lbl_fn_804096D4_000019C8:
    cmplwi r18, 0x1
    bne lbl_fn_804096D4_00001A18
    li r0, 0x8
    stw r0, 0x54(r17)
    lwz r0, 0x2a0(r17)
    lwz r3, lbl_8087F610
    clrlwi r4, r0, 24
    bl fn_804F5CA0
    b lbl_fn_804096D4_00001A18
lbl_fn_804096D4_000019EC:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x170(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804096D4_00001A0C
    addi r3, r17, 0x19c
    bl fn_8044EEC0
    cmpwi r3, 0x0
    beq lbl_fn_804096D4_00001A18
lbl_fn_804096D4_00001A0C:
    lwz r0, 0x38(r17)
    ori r0, r0, 0x4
    stw r0, 0x38(r17)
lbl_fn_804096D4_00001A18:
    addi r3, r17, 0x19c
    bl fn_8044F434
    li r0, 0x0
    stw r0, 0x194(r17)
    stw r0, 0x198(r17)
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    psq_l f28, 0x1a8(r1), 0, 0
    lfd f28, 0x1a0(r1)
    psq_l f27, 0x198(r1), 0, 0
    lfd f27, 0x190(r1)
    addi r11, r1, 0x190
    bl _restgpr_16
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}
