#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _savegpr_18(void);
extern void dtor_80084684(void);
extern void fn_80056DB8(void);
extern void fn_80056E40(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087BB4(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_800C1814(void);
extern void fn_800C1990(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800CB688(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
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
extern void fn_803EC758(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED774(void);
extern void fn_803F11F8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80753230[];
extern u8 lbl_807532E0[];
extern u8 lbl_80753310[];
extern u8 lbl_8075332C[];
extern u8 lbl_807533C8[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80777668[];
extern u8 lbl_8078E0E0[];
extern u8 lbl_8078E178[];
extern u8 lbl_8078E210[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808865C0;
extern u32 lbl_808865C4;
extern u32 lbl_808865C8;
extern u32 lbl_808865CC;
extern u32 lbl_808865D0;
extern u32 lbl_808865D4;
extern u32 lbl_808865D8;
extern u32 lbl_808865E0;
extern u32 lbl_808865E4;
extern u32 lbl_808865E8;
extern u32 lbl_808865EC;
extern u32 lbl_808865F0;
extern u32 lbl_808865F8;
extern u32 lbl_808865FC;
extern u32 lbl_80886600;
extern u32 lbl_80886604;
extern u32 lbl_80886608;
extern u32 lbl_8088660C;
extern u32 lbl_80886610;

/* Function declarations */
void fn_80420490(void);
void fn_80420494(void);
void fn_8042049C(void);
void fn_804208E4(void);
void fn_80420934(void);
void fn_80420ADC(void);
void fn_80420BE0(void);
void fn_80420CA0(void);
void fn_80420D0C(void);
void fn_80420EC8(void);
void fn_80420F10(void);
void fn_80420F88(void);
void fn_80421128(void);
void fn_804211B0(void);
void fn_80421308(void);
void fn_8042140C(void);
void fn_80421438(void);
void fn_8042144C(void);
void fn_80421454(void);
void fn_804214FC(void);
void fn_80421554(void);
void fn_8042157C(void);
void fn_80421628(void);
void fn_80421864(void);
void fn_80421868(void);
void fn_804218D8(void);
void fn_80421904(void);
void fn_80421AB8(void);
void fn_80421B7C(void);
void fn_80421C68(void);
void fn_80421CCC(void);

asm void fn_80420490(void)
{
    nofralloc
    blr
}

asm void fn_80420494(void)
{
    nofralloc
    addi r3, r3, 0xfc
    b fn_800C1990
}

asm void fn_8042049C(void)
{
    nofralloc
    stwu r1, -0x6e0(r1)
    mflr r0
    stw r0, 0x6e4(r1)
    addi r11, r1, 0x6a0
    stfd f31, 0x6d0(r1)
    psq_st f31, 0x6d8(r1), 0, 0
    stfd f30, 0x6c0(r1)
    psq_st f30, 0x6c8(r1), 0, 0
    stfd f29, 0x6b0(r1)
    psq_st f29, 0x6b8(r1), 0, 0
    stfd f28, 0x6a0(r1)
    psq_st f28, 0x6a8(r1), 0, 0
    bl _savegpr_18
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r25, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r23, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x34(r1)
    mr r24, r3
    addi r3, r1, 0x44
    stw r23, 0x38(r1)
    li r4, 0x0
    li r5, 0x400
    stw r23, 0x3c(r1)
    stw r23, 0x40(r1)
    stw r23, 0x664(r1)
    bl memset
    addi r3, r1, 0x644
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x34(r1)
    mr r4, r24
    mr r5, r25
    addi r3, r1, 0x34
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x34
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x34(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r24, lbl_80753230@ha
    lis r20, lbl_807C7030@ha
    lfs f30, lbl_808865C0
    addi r22, r1, 0x1c
    addi r21, r1, 0x10
    addi r24, r24, lbl_80753230@l
    addi r19, r1, 0x8
    addi r20, r20, lbl_807C7030@l
    li r30, 0x2
    li r29, 0x6
    li r28, 0x5
    li r27, 0x4
    li r26, 0x3
    li r25, 0x1
lbl_fn_8042049C_00000108:
    addi r3, r1, 0x34
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r18, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8042049C_0000040C
    addi r4, r24, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_0000016C
    addi r3, r1, 0x34
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0xfc
    bl fn_800C1814
    addi r3, r1, 0x34
    bl fn_8005B9CC
    addi r4, r24, 0x9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_0000040C
    lwz r3, 0x13c(r31)
    stb r25, 0x2d(r3)
    stb r25, 0x2e(r3)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_0000016C:
    mr r3, r18
    addi r4, r24, 0x15
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_00000194
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xf4(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_00000194:
    mr r3, r18
    addi r4, r24, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_000001CC
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x150(r31)
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x154(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_000001CC:
    mr r3, r18
    addi r4, r24, 0x20
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_00000204
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x158(r31)
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x15c(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_00000204:
    mr r3, r18
    addi r4, r24, 0x29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_00000220
    stw r23, 0xfc(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_00000220:
    mr r3, r18
    addi r4, r24, 0x2d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_0000023C
    stw r25, 0xfc(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_0000023C:
    mr r3, r18
    addi r4, r24, 0x32
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_00000258
    stw r30, 0xfc(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_00000258:
    mr r3, r18
    addi r4, r24, 0x37
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_00000274
    stw r26, 0xfc(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_00000274:
    mr r3, r18
    addi r4, r24, 0x3b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_00000290
    stw r27, 0xfc(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_00000290:
    mr r3, r18
    addi r4, r24, 0x43
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_000002AC
    stw r28, 0xfc(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_000002AC:
    mr r3, r18
    addi r4, r24, 0x47
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_000002C8
    stw r29, 0xfc(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_000002C8:
    mr r3, r18
    addi r4, r24, 0x4f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_00000378
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f28, f1
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    stfs f28, 0x28(r1)
    addi r3, r1, 0x28
    stfs f29, 0x2c(r1)
    stfs f1, 0x30(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    ble lbl_fn_8042049C_00000364
    stfs f28, 0x10(r1)
    frsp f2, f31
    mr r3, r22
    mr r4, r22
    stfs f29, 0x14(r1)
    psq_l f1, 0x0(r21), 0, 0
    stfs f31, 0x18(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x24(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r22), 0, 0
    lfs f2, 0x24(r1)
    stfs f2, 0x128(r31)
    psq_st f1, 0x120(r31), 0, 0
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_00000364:
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x8(r20)
    stfs f2, 0x128(r31)
    psq_st f1, 0x120(r31), 0, 0
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_00000378:
    mr r3, r18
    addi r4, r24, 0x59
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_000003B0
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x118(r31)
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x11c(r31)
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_000003B0:
    mr r3, r18
    addi r4, r24, 0x5d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_000003F4
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f31, 0x8(r1)
    stfs f1, 0xc(r1)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x110(r31), 0, 0
    b lbl_fn_8042049C_0000040C
lbl_fn_8042049C_000003F4:
    mr r3, r18
    addi r4, r24, 0x63
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_0000040C
    stw r30, 0x14c(r31)
lbl_fn_8042049C_0000040C:
    addi r3, r1, 0x34
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042049C_00000108
    addi r11, r1, 0x6a0
    psq_l f31, 0x6d8(r1), 0, 0
    lfd f31, 0x6d0(r1)
    psq_l f30, 0x6c8(r1), 0, 0
    lfd f30, 0x6c0(r1)
    psq_l f29, 0x6b8(r1), 0, 0
    lfd f29, 0x6b0(r1)
    psq_l f28, 0x6a8(r1), 0, 0
    lfd f28, 0x6a0(r1)
    bl _restgpr_18
    lwz r0, 0x6e4(r1)
    mtlr r0
    addi r1, r1, 0x6e0
    blr
}

asm void fn_804208E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_804208E4_00000478
    li r3, 0x0
    b lbl_fn_804208E4_00000490
lbl_fn_804208E4_00000478:
    lwz r12, 0x0(r3)
    lwz r4, 0x0(r4)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    lwz r3, 0x54(r31)
lbl_fn_804208E4_00000490:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80420934(void)
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
    bne lbl_fn_80420934_00000504
    cmpwi r30, 0x0
    beq lbl_fn_80420934_00000504
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80420934_00000504
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_80420934_00000508
lbl_fn_80420934_00000504:
    li r30, 0x0
lbl_fn_80420934_00000508:
    lis r31, lbl_80753230@ha
    mr r3, r30
    addi r31, r31, lbl_80753230@l
    addi r5, r29, 0x54
    addi r4, r31, 0x6e
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808865C4
    mr r3, r30
    lfs f2, lbl_808865C8
    addi r4, r31, 0x74
    lfs f3, lbl_808865CC
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808865D0
    mr r3, r30
    lfs f2, lbl_808865D4
    addi r4, r31, 0x78
    lfs f3, lbl_808865D8
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_808865C4
    mr r3, r30
    lfs f2, lbl_808865C8
    addi r4, r31, 0x7c
    lfs f3, lbl_808865CC
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x80
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x87
    addi r5, r29, 0x58
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r4, r30
    addi r3, r29, 0xb0
    bl fn_803F11F8
    lfs f1, lbl_808865C4
    mr r3, r30
    lfs f2, lbl_808865C8
    addi r4, r31, 0x8f
    lfs f3, lbl_808865CC
    addi r5, r29, 0x150
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_808865C4
    mr r3, r30
    lfs f2, lbl_808865C8
    addi r4, r31, 0x97
    lfs f3, lbl_808865CC
    addi r5, r29, 0x150
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80420ADC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_fn_80420ADC_00000730
    lis r5, lbl_807532E0@ha
    li r3, 0x540
    addi r5, r5, lbl_807532E0@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80420ADC_00000728
    lwz r5, 0x18(r29)
    mr r4, r31
    lwz r6, 0x1c(r29)
    bl fn_803EC568
    lis r4, lbl_8078E0E0@ha
    addi r3, r30, 0xf4
    addi r4, r4, lbl_8078E0E0@l
    stw r4, 0x0(r30)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    stw r29, 0x4c4(r30)
    addi r3, r30, 0x4c8
    bl fn_802377B8
    li r31, 0x0
    stw r31, 0x4d4(r30)
    addi r3, r30, 0x4d8
    bl fn_802377B8
    lfs f0, lbl_808865E0
    addi r29, r30, 0x4f4
    stfs f0, 0x4e4(r30)
    mr r3, r29
    lfs f0, lbl_808865E4
    li r4, 0x0
    stw r31, 0x4e8(r30)
    stw r31, 0x4ec(r30)
    stfs f0, 0x4f0(r30)
    bl fn_80056DB8
    lis r4, lbl_80777668@ha
    lis r3, 0x8
    addi r4, r4, lbl_80777668@l
    stw r4, 0x0(r29)
    addi r0, r3, 0xf8
    stw r0, 0x514(r30)
    stw r31, 0x54(r30)
lbl_fn_80420ADC_00000728:
    mr r3, r30
    b lbl_fn_80420ADC_00000734
lbl_fn_80420ADC_00000730:
    li r3, 0x0
lbl_fn_80420ADC_00000734:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80420BE0(void)
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
    beq lbl_fn_80420BE0_000007F0
    addic. r3, r3, 0x4f4
    beq lbl_fn_80420BE0_00000788
    li r4, 0x0
    bl fn_80056E40
lbl_fn_80420BE0_00000788:
    addic. r31, r29, 0x4d8
    beq lbl_fn_80420BE0_000007A8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80420BE0_000007A8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80420BE0_000007A8:
    addic. r31, r29, 0x4c8
    beq lbl_fn_80420BE0_000007C8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80420BE0_000007C8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80420BE0_000007C8:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_80420BE0_000007F0
    mr r3, r29
    bl dtor_80084684
lbl_fn_80420BE0_000007F0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80420CA0(void)
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
    beq lbl_fn_80420CA0_0000083C
    li r3, 0x1
    b lbl_fn_80420CA0_00000868
lbl_fn_80420CA0_0000083C:
    addi r3, r31, 0x4c8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80420CA0_0000085C
    addi r3, r31, 0x4d8
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80420CA0_00000864
lbl_fn_80420CA0_0000085C:
    li r3, 0x1
    b lbl_fn_80420CA0_00000868
lbl_fn_80420CA0_00000864:
    li r3, 0x0
lbl_fn_80420CA0_00000868:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80420D0C(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r30, r3
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
    mr r4, r30
    mr r5, r31
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
    lis r30, lbl_807532E0@ha
    li r31, 0x1
    addi r30, r30, lbl_807532E0@l
lbl_fn_80420D0C_00000934:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80420D0C_00000A08
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80420D0C_00000974
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0x4c8
    bl fn_8023780C
    b lbl_fn_80420D0C_00000A08
lbl_fn_80420D0C_00000974:
    mr r3, r29
    addi r4, r30, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80420D0C_000009A0
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0x4d8
    bl fn_8023780C
    b lbl_fn_80420D0C_00000A08
lbl_fn_80420D0C_000009A0:
    mr r3, r29
    addi r4, r30, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80420D0C_000009E4
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r28
    addi r4, r28, 0xf4
    addi r5, r1, 0x8
    bl fn_803EC7A0
    stw r31, 0x4ec(r28)
    b lbl_fn_80420D0C_00000A08
lbl_fn_80420D0C_000009E4:
    mr r3, r29
    addi r4, r30, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80420D0C_00000A08
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4f0(r28)
lbl_fn_80420D0C_00000A08:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80420D0C_00000934
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80420EC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80420EC8_00000A68
    li r0, 0x1
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_80420EC8_00000A6C
lbl_fn_80420EC8_00000A68:
    li r3, 0x0
lbl_fn_80420EC8_00000A6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80420F10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f3, lbl_808865E8
    lwz r4, 0x4c4(r3)
    addi r5, r1, 0x8
    lwz r0, 0x4fc(r3)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    ori r0, r0, 0x8
    stfs f2, 0x74(r3)
    lfs f0, 0x4f0(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f4, 0x14(r4)
    stfs f4, 0x7c(r3)
    stfs f3, 0x78(r3)
    stfs f3, 0x80(r3)
    lfs f3, 0x40(r4)
    stfs f3, 0x4e4(r3)
    lwz r4, 0x24(r4)
    stfs f2, 0x10(r1)
    frsp f2, f2
    stw r4, 0x4d4(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f0, 0x14(r1)
    psq_st f1, 0x530(r3), 0, 0
    stfs f2, 0x538(r3)
    stfs f0, 0x53c(r3)
    stw r0, 0x4fc(r3)
    stw r3, 0x500(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_80420F88(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80420F88_00000B2C
    lwz r0, 0x4fc(r3)
    clrrwi r0, r0, 1
    stw r0, 0x4fc(r3)
    b lbl_fn_80420F88_00000C80
lbl_fn_80420F88_00000B2C:
    cmpwi r0, 0x2
    beq lbl_fn_80420F88_00000B40
    cmpwi r0, 0x3
    beq lbl_fn_80420F88_00000BFC
    b lbl_fn_80420F88_00000C34
lbl_fn_80420F88_00000B40:
    lwz r0, 0x4fc(r3)
    ori r0, r0, 0x1
    stw r0, 0x4fc(r3)
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    b lbl_fn_80420F88_00000BF0
lbl_fn_80420F88_00000B58:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80420F88_00000B70
    lwz r0, 0x560(r30)
    cmpwi r0, 0xe
    beq lbl_fn_80420F88_00000BEC
lbl_fn_80420F88_00000B70:
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
    lfs f0, 0x4e4(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80420F88_00000BEC
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x30
    bl memset
    li r0, 0x3
    stw r0, 0x18(r1)
    mr r3, r31
    addi r4, r1, 0x18
    lwz r12, 0x0(r31)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_fn_80420F88_00000C34
lbl_fn_80420F88_00000BEC:
    lwz r30, 0x14ac(r30)
lbl_fn_80420F88_00000BF0:
    cmpwi r30, 0x0
    bne lbl_fn_80420F88_00000B58
    b lbl_fn_80420F88_00000C34
lbl_fn_80420F88_00000BFC:
    lwz r0, 0x4fc(r3)
    lwz r4, 0x4e8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x4fc(r3)
    addi r5, r4, 0x1
    lwz r4, 0x4c4(r3)
    stw r5, 0x4e8(r3)
    lwz r0, 0x20(r4)
    cmpw r5, r0
    ble lbl_fn_80420F88_00000C34
    li r4, 0x0
    li r0, 0x2
    stw r4, 0x4e8(r3)
    stw r0, 0x54(r3)
lbl_fn_80420F88_00000C34:
    lwz r0, 0x4ec(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80420F88_00000C80
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80420F88_00000C80
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80420F88_00000C80:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80421128(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80421128_00000D0C
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80421128_00000D0C
    lwz r0, 0x4ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80421128_00000D0C
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80421128_00000D0C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_80421128_00000D0C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804211B0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    bne lbl_fn_804211B0_00000D48
    li r3, 0x0
    b lbl_fn_804211B0_00000E60
lbl_fn_804211B0_00000D48:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804211B0_00000D6C
    cmpwi r0, 0x3
    beq lbl_fn_804211B0_00000D6C
    cmpwi r0, 0x2
    beq lbl_fn_804211B0_00000DA4
    b lbl_fn_804211B0_00000E5C
lbl_fn_804211B0_00000D6C:
    lwz r0, 0x4ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804211B0_00000E5C
    lwz r0, 0x4d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804211B0_00000E5C
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_804211B0_00000E5C
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_804211B0_00000E5C
lbl_fn_804211B0_00000DA4:
    lwz r0, 0x4ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804211B0_00000E5C
    lwz r0, 0x4d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804211B0_00000E5C
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_804211B0_00000E5C
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    lwz r5, lbl_8087F3C0
    li r31, 0x1
    mr r3, r30
    li r4, 0x0
    stw r31, 0xb8(r5)
    bl fn_80232B7C
    lfs f0, lbl_808865E8
    li r0, -0x1
    lfs f1, lbl_808865EC
    addi r4, r30, 0x4d8
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xf4
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_804211B0_00000E5C:
    lwz r3, 0x54(r30)
lbl_fn_804211B0_00000E60:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80421308(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_fn_80421308_00000EA0
    li r3, 0x0
    b lbl_fn_80421308_00000F64
lbl_fn_80421308_00000EA0:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80421308_00000F60
    lwz r3, 0x4d4(r3)
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80421308_00000F60
    lwz r3, lbl_8087F048
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x2
    mr r6, r3
    stw r0, 0xc(r1)
    mr r5, r31
    lfs f1, lbl_808865F0
    addi r7, r30, 0x6c
    lwz r3, lbl_8087F048
    addi r8, r30, 0x78
    lfs f2, lbl_808865EC
    li r4, 0x0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lis r4, lbl_807532E0@ha
    lfs f1, lbl_808865EC
    addi r4, r4, lbl_807532E0@l
    addi r3, r1, 0x10
    addi r4, r4, 0x21
    addi r5, r30, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r0, 0x0
    stw r0, 0x4e8(r30)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80421308_00000F58
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80421308_00000F58:
    li r0, 0x3
    stw r0, 0x54(r30)
lbl_fn_80421308_00000F60:
    li r3, 0x0
lbl_fn_80421308_00000F64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042140C(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8042140C_00000FA0
    lwz r3, 0x4c4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8042140C_00000FA0
    li r4, 0x1
lbl_fn_8042140C_00000FA0:
    mr r3, r4
    blr
}

asm void fn_80421438(void)
{
    nofralloc
    psq_l f1, 0x530(r4), 0, 0
    lfs f2, 0x538(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_8042144C(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_80421454(void)
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
    beq lbl_fn_80421454_0000104C
    lis r5, lbl_8075332C@ha
    li r3, 0x118
    addi r5, r5, lbl_8075332C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80421454_00001044
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r4, lbl_8078E178@ha
    li r3, 0x0
    addi r4, r4, lbl_8078E178@l
    stw r4, 0x0(r31)
    li r0, 0x1
    stw r30, 0xf4(r31)
    stw r3, 0x54(r31)
    stw r0, 0x68(r31)
lbl_fn_80421454_00001044:
    mr r3, r31
    b lbl_fn_80421454_00001050
lbl_fn_80421454_0000104C:
    li r3, 0x0
lbl_fn_80421454_00001050:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804214FC(void)
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
    beq lbl_fn_804214FC_000010A8
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_804214FC_000010A8
    mr r3, r30
    bl dtor_80084684
lbl_fn_804214FC_000010A8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80421554(void)
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

asm void fn_8042157C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f3, lbl_808865F8
    li r5, 0x1
    stw r0, 0x34(r1)
    li r0, 0x0
    lfs f0, lbl_808865FC
    addi r4, r1, 0x8
    lwz r7, 0xf4(r3)
    psq_l f1, 0x4(r7), 0, 0
    lfs f2, 0xc(r7)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f4, 0x14(r7)
    stfs f4, 0x7c(r3)
    lfs f4, 0x40(r7)
    stfs f4, 0xfc(r3)
    lfs f4, 0x44(r7)
    stfs f4, 0x100(r3)
    lwz r6, 0x20(r7)
    stw r6, 0x104(r3)
    lwz r6, 0x24(r7)
    stw r6, 0x108(r3)
    lwz r6, 0x28(r7)
    stw r6, 0x10c(r3)
    stfs f3, 0x110(r3)
    stfs f0, 0x114(r3)
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

asm void fn_80421628(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    stfd f28, 0x20(r1)
    psq_st f28, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80421628_000013A0
    cmpwi r0, 0x2
    bne lbl_fn_80421628_000013A0
    lwz r4, 0xf8(r3)
    subic. r0, r4, 0x1
    stw r0, 0xf8(r3)
    bge lbl_fn_80421628_000013A0
    bl fn_80680CF8
    lwz r5, 0x108(r31)
    lwz r0, 0x10c(r31)
    divw r4, r3, r5
    lfs f30, 0x114(r31)
    lfs f31, 0x110(r31)
    mullw r4, r4, r5
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0xf8(r31)
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x10(r1)
    mulhw r6, r5, r3
    lis r4, lbl_80753310@ha
    lwz r5, lbl_8087F430
    fsubs f2, f30, f31
    lfd f5, lbl_80753310@l(r4)
    lwz r0, 0x96c(r5)
    srawi r6, r6, 8
    srwi r4, r0, 31
    srwi r7, r6, 31
    clrlwi r0, r0, 31
    add r6, r6, r7
    lfs f3, lbl_80886600
    mulli r6, r6, 0x3e9
    xor r0, r0, r4
    lfs f1, 0xfc(r31)
    lfs f0, 0x100(r31)
    subf r0, r4, r0
    subf r3, r6, r3
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lwz r7, 0x104(r31)
    lfd f4, 0x10(r1)
    stw r0, 0x96c(r5)
    fsubs f4, f4, f5
    stw r7, 0x970(r5)
    fdivs f3, f4, f3
    fmadds f31, f2, f3, f31
    fmuls f29, f1, f31
    fmuls f28, f0, f31
    stfs f29, 0x974(r5)
    stfs f28, 0x978(r5)
    lwz r3, lbl_8087F430
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80421628_000013A0
    fmuls f0, f28, f28
    fmadds f1, f29, f29, f0
    bl fn_8068B100
    frsp f30, f1
    fmr f1, f31
    bl fn_8068B100
    frsp f0, f1
    lfs f1, lbl_80886604
    fmuls f0, f0, f30
    fcmpo cr0, f0, f1
    bge lbl_fn_80421628_00001304
    fmuls f0, f28, f28
    fmadds f1, f29, f29, f0
    bl fn_8068B100
    frsp f30, f1
    fmr f1, f31
    bl fn_8068B100
    frsp f0, f1
    fmuls f1, f0, f30
lbl_fn_80421628_00001304:
    lis r4, lbl_8075332C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8075332C@l
    li r5, 0x0
    addi r4, r4, 0x1
    li r6, -0x1
    bl fn_800C31F4
    lwz r31, lbl_8087EFE8
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x10(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80753310@ha
    lfd f5, lbl_80753310@l(r4)
    lfs f3, lbl_80886600
    li r4, 0x0
    lfs f2, 0x34cc(r31)
    srawi r0, r5, 8
    lfs f1, lbl_80886608
    srwi r5, r0, 31
    lfs f0, lbl_808865F8
    add r0, r0, r5
    fmuls f1, f1, f2
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x8
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f4, 0x10(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmsubs f1, f2, f3, f1
    fadds f1, f0, f1
    bl fn_800CB688
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80421628_000013A0:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    psq_l f28, 0x28(r1), 0, 0
    lfd f28, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80421864(void)
{
    nofralloc
    blr
}

asm void fn_80421868(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_80421868_000013FC
    li r3, 0x0
    b lbl_fn_80421868_00001434
lbl_fn_80421868_000013FC:
    lwz r4, 0x0(r4)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80421868_00001430
    stw r4, 0x54(r3)
    bl fn_80680CF8
    lwz r5, 0x108(r31)
    lwz r0, 0x10c(r31)
    divw r4, r3, r5
    mullw r4, r4, r5
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0xf8(r31)
lbl_fn_80421868_00001430:
    lwz r3, 0x54(r31)
lbl_fn_80421868_00001434:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804218D8(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    blt lbl_fn_804218D8_0000146C
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804218D8_0000146C
    li r4, 0x1
lbl_fn_804218D8_0000146C:
    mr r3, r4
    blr
}

asm void fn_80421904(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    addi r4, r1, 0x8
    stw r28, 0x30(r1)
    mr r28, r3
    bl fn_803EC758
    lwz r0, 0xf0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80421904_000014D8
    cmpwi r29, 0x0
    beq lbl_fn_80421904_000014D8
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80421904_000014D8
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r28)
    mr r29, r3
    b lbl_fn_80421904_000014DC
lbl_fn_80421904_000014D8:
    li r29, 0x0
lbl_fn_80421904_000014DC:
    lis r30, lbl_8075332C@ha
    mr r3, r29
    addi r30, r30, lbl_8075332C@l
    addi r5, r28, 0x54
    addi r4, r30, 0xe
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808865FC
    mr r3, r29
    lfs f2, lbl_80886600
    addi r4, r30, 0x14
    lfs f3, lbl_8088660C
    addi r5, r28, 0xfc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808865FC
    mr r3, r29
    lfs f2, lbl_80886600
    addi r4, r30, 0x1c
    lfs f3, lbl_8088660C
    addi r5, r28, 0x100
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lis r31, 0x2
    mr r3, r29
    addi r4, r30, 0x24
    addi r5, r28, 0x104
    subi r7, r31, 0x7960
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x30
    addi r5, r28, 0x108
    subi r7, r31, 0x7960
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x3b
    addi r5, r28, 0x10c
    subi r7, r31, 0x7960
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808865FC
    mr r3, r29
    lfs f2, lbl_80886600
    addi r4, r30, 0x4a
    lfs f3, lbl_80886610
    addi r5, r28, 0x110
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808865FC
    mr r3, r29
    lfs f2, lbl_80886600
    addi r4, r30, 0x53
    lfs f3, lbl_80886610
    addi r5, r28, 0x114
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80421AB8(void)
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
    beq lbl_fn_80421AB8_000016CC
    lis r5, lbl_807533C8@ha
    li r3, 0x128
    addi r5, r5, lbl_807533C8@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80421AB8_000016C4
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r4, lbl_8078E210@ha
    addi r3, r31, 0xf8
    addi r4, r4, lbl_8078E210@l
    stw r4, 0x0(r31)
    stw r30, 0xf4(r31)
    bl fn_802377B8
    addi r3, r31, 0x104
    bl fn_800CB360
    addi r3, r31, 0x108
    bl fn_802377B8
    addi r3, r31, 0x114
    bl fn_802377B8
    li r0, 0x0
    stw r0, 0x124(r31)
    stw r0, 0x54(r31)
lbl_fn_80421AB8_000016C4:
    mr r3, r31
    b lbl_fn_80421AB8_000016D0
lbl_fn_80421AB8_000016CC:
    li r3, 0x0
lbl_fn_80421AB8_000016D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80421B7C(void)
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
    beq lbl_fn_80421B7C_000017B8
    lis r5, lbl_8078E210@ha
    li r4, 0x0
    addi r5, r5, lbl_8078E210@l
    stw r5, 0x0(r3)
    li r5, 0x0
    addi r3, r3, 0x104
    bl fn_800CB5C8
    addic. r31, r29, 0x114
    beq lbl_fn_80421B7C_00001750
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80421B7C_00001750
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80421B7C_00001750:
    addic. r31, r29, 0x108
    beq lbl_fn_80421B7C_00001770
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80421B7C_00001770
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80421B7C_00001770:
    addi r3, r29, 0x104
    li r4, -0x1
    bl fn_800CB3A0
    addic. r31, r29, 0xf8
    beq lbl_fn_80421B7C_0000179C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80421B7C_0000179C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80421B7C_0000179C:
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_80421B7C_000017B8
    mr r3, r29
    bl dtor_80084684
lbl_fn_80421B7C_000017B8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80421C68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xf8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80421C68_0000181C
    addi r3, r31, 0x108
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80421C68_0000181C
    addi r3, r31, 0x114
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80421C68_00001824
lbl_fn_80421C68_0000181C:
    li r3, 0x1
    b lbl_fn_80421C68_00001828
lbl_fn_80421C68_00001824:
    li r3, 0x0
lbl_fn_80421C68_00001828:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80421CCC(void)
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
    lis r31, lbl_807533C8@ha
    addi r31, r31, lbl_807533C8@l
lbl_fn_80421CCC_000018EC:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_80421CCC_00001998
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80421CCC_00001998
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r30, r3
    addi r4, r31, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80421CCC_00001944
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf8
    bl fn_8023780C
    b lbl_fn_80421CCC_00001998
lbl_fn_80421CCC_00001944:
    mr r3, r30
    addi r4, r31, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80421CCC_00001970
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x108
    bl fn_8023780C
    b lbl_fn_80421CCC_00001998
lbl_fn_80421CCC_00001970:
    mr r3, r30
    addi r4, r31, 0x10
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80421CCC_00001998
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x114
    bl fn_8023780C
lbl_fn_80421CCC_00001998:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80421CCC_000018EC
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}
