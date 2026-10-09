#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80069758(void);
extern void fn_800697D8(void);
extern void fn_80084320(void);
extern void fn_8008B140(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DD8A8(void);
extern void fn_801092C8(void);
extern void fn_8011D424(void);
extern void fn_801354B4(void);
extern void fn_80136544(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_801765D8(void);
extern void fn_80176ACC(void);
extern void fn_8017C974(void);
extern void fn_80211480(void);
extern void fn_8021DE88(void);
extern void fn_8021DECC(void);
extern void fn_8023781C(void);
extern void fn_80370320(void);
extern void fn_803750E4(void);
extern void fn_803CC6B4(void);
extern void fn_803E3BE8(void);
extern void fn_803E5E64(void);
extern void fn_803EC16C(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_804439FC(void);
extern void fn_8044D6AC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_804A24C4(void);
extern void fn_804A251C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686A64(void);
extern void fn_8068B2A0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80754070[];
extern u8 lbl_807540A0[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078ECA0[];
extern u8 lbl_8078EDA8[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DFD0;
extern u32 lbl_8087DFD4;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F578;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886868;
extern u32 lbl_8088686C;
extern u32 lbl_80886870;
extern u32 lbl_80886874;
extern u32 lbl_80886878;
extern u32 lbl_8088687C;
extern u32 lbl_80886880;
extern u32 lbl_80886884;
extern u32 lbl_80886888;

/* Function declarations */
void fn_80431314(void);
void fn_80431320(void);
void fn_80431388(void);
void fn_80431458(void);
void fn_80431760(void);
void fn_80431774(void);
void fn_80432390(void);
void fn_80432394(void);
void fn_8043239C(void);
void fn_80432728(void);
void fn_80432840(void);
void fn_80432898(void);
void fn_804328B8(void);
void fn_804329BC(void);
void fn_80432C38(void);
void fn_80432C60(void);
void fn_80432C64(void);
void fn_80432C68(void);

asm void fn_80431314(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    blr
}

asm void fn_80431320(void)
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
    beq lbl_fn_80431320_00000058
    lis r4, fn_80069758@ha
    li r5, 0x80
    addi r4, r4, fn_80069758@l
    li r6, 0x3
    addi r3, r3, 0x100
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_80431320_00000058
    mr r3, r30
    bl dtor_80084684
lbl_fn_80431320_00000058:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80431388(void)
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
    beq lbl_fn_80431388_00000124
    lis r5, lbl_8078EDA8@ha
    li r4, 0x0
    addi r5, r5, lbl_8078EDA8@l
    stw r5, 0x0(r3)
    li r5, 0x0
    addi r3, r3, 0x30a0
    bl fn_800CB5C8
    addi r3, r29, 0x30a0
    li r4, -0x1
    bl fn_800CB3A0
    lis r4, fn_80431320@ha
    addi r3, r29, 0x4f8
    addi r4, r4, fn_80431320@l
    li r5, 0x29c
    li r6, 0x10
    bl fn_806959D8
    addic. r31, r29, 0x4c4
    beq lbl_fn_80431388_000000FC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80431388_000000FC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80431388_000000FC:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_80431388_00000124
    mr r3, r29
    bl dtor_80084684
lbl_fn_80431388_00000124:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80431458(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_21
    mr r25, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80431458_00000428
    mr r3, r25
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80431458_00000428
    lwz r0, 0x4ec(r25)
    cmpwi r0, 0x0
    bne lbl_fn_80431458_00000328
    lwz r0, 0x4f4(r25)
    li r26, 0x0
    cmpwi r0, 0x0
    ble lbl_fn_80431458_0000031C
    lis r31, lbl_8078ECA0@ha
    lis r3, 0x1062
    lbz r30, 0xc(r1)
    addi r28, r25, 0x4f8
    addi r27, r1, 0x11
    addi r31, r31, lbl_8078ECA0@l
    addi r24, r3, 0x4dd3
    li r29, 0x0
    li r23, 0xef
    b lbl_fn_80431458_00000310
lbl_fn_80431458_000001C4:
    stw r29, 0x10(r1)
    mr r3, r28
    stw r29, 0x14(r1)
    stw r29, 0x18(r1)
    bl strlen
    mr r22, r3
    addi r3, r1, 0x10
    mr r4, r22
    bl fn_80013DC4
    stb r30, 0x8(r1)
    mr r6, r28
    addi r3, r1, 0x10
    add r7, r28, r22
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    cmpwi r25, 0x0
    beq lbl_fn_80431458_00000284
    li r3, 0x1428
    li r4, 0x1
    la r5, lbl_8087DFD4
    la r6, lbl_8087DFD0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_80431458_00000288
    mr r4, r25
    li r5, 0x1
    li r6, 0x0
    bl fn_801354B4
    stw r31, 0x0(r22)
    mr r3, r22
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80431458_00000260
    mr r4, r27
    b lbl_fn_80431458_00000264
lbl_fn_80431458_00000260:
    lwz r4, 0x18(r1)
lbl_fn_80431458_00000264:
    bl fn_80136544
    addi r3, r22, 0x1188
    addi r4, r22, 0xb0
    bl fn_8011D424
    lwz r0, 0x137c(r22)
    ori r0, r0, 0x1
    stw r0, 0x137c(r22)
    b lbl_fn_80431458_00000288
lbl_fn_80431458_00000284:
    li r22, 0x0
lbl_fn_80431458_00000288:
    stw r22, 0x288(r28)
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80431458_000002A0
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_80431458_000002A0:
    stw r23, 0x280(r28)
    addi r22, r28, 0x100
    li r21, 0x0
lbl_fn_80431458_000002AC:
    lwz r3, 0x288(r28)
    mr r5, r22
    lwz r0, 0x280(r28)
    addi r3, r3, 0xb0
    add r4, r0, r21
    bl fn_80097A88
    addi r21, r21, 0x1
    addi r22, r22, 0x80
    cmpwi r21, 0x3
    blt lbl_fn_80431458_000002AC
    lwz r4, 0x284(r28)
    mulhw r0, r24, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    cmpwi r0, 0xa
    bne lbl_fn_80431458_00000308
    mr r3, r25
    mr r5, r26
    bl fn_803EC16C
    stw r3, 0x28c(r28)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80431458_00000308:
    addi r28, r28, 0x29c
    addi r26, r26, 0x1
lbl_fn_80431458_00000310:
    lwz r0, 0x4f4(r25)
    cmpw r26, r0
    blt lbl_fn_80431458_000001C4
lbl_fn_80431458_0000031C:
    li r0, 0x1
    stw r0, 0x4ec(r25)
    b lbl_fn_80431458_00000428
lbl_fn_80431458_00000328:
    addi r22, r25, 0x4f8
    li r21, 0x1
    li r23, 0x0
    b lbl_fn_80431458_00000380
lbl_fn_80431458_00000338:
    lwz r3, 0x288(r22)
    addi r3, r3, 0xb0
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80431458_00000354
    li r21, 0x0
    b lbl_fn_80431458_0000038C
lbl_fn_80431458_00000354:
    lwz r3, 0x28c(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80431458_00000378
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80431458_00000378
    li r21, 0x0
    b lbl_fn_80431458_0000038C
lbl_fn_80431458_00000378:
    addi r22, r22, 0x29c
    addi r23, r23, 0x1
lbl_fn_80431458_00000380:
    lwz r0, 0x4f4(r25)
    cmpw r23, r0
    blt lbl_fn_80431458_00000338
lbl_fn_80431458_0000038C:
    cmpwi r21, 0x0
    beq lbl_fn_80431458_00000428
    li r0, 0x1
    stw r0, 0x4dc(r25)
    lfs f31, lbl_8088686C
    addi r22, r1, 0x1c
    li r21, 0x0
    li r26, 0x0
    b lbl_fn_80431458_00000414
lbl_fn_80431458_000003B0:
    add r27, r25, r26
    stfs f31, 0x1c(r1)
    lwz r3, 0x780(r27)
    fmr f2, f31
    stfs f31, 0x20(r1)
    li r4, 0x0
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x540(r3), 0, 0
    stfs f2, 0x548(r3)
    stfs f31, 0x24(r1)
    lwz r3, 0x780(r27)
    bl fn_800D246C
    lwz r3, 0x780(r27)
    bl fn_801765D8
    lwz r3, 0x784(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80431458_0000040C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x784(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80431458_0000040C:
    addi r21, r21, 0x1
    addi r26, r26, 0x29c
lbl_fn_80431458_00000414:
    lwz r0, 0x4f4(r25)
    cmpw r21, r0
    blt lbl_fn_80431458_000003B0
    li r3, 0x1
    b lbl_fn_80431458_0000042C
lbl_fn_80431458_00000428:
    li r3, 0x0
lbl_fn_80431458_0000042C:
    addi r11, r1, 0x60
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    bl _restgpr_21
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80431760(void)
{
    nofralloc
    lwz r0, 0x3050(r3)
    li r4, 0x1
    stw r4, 0x54(r3)
    stw r0, 0x3048(r3)
    blr
}

asm void fn_80431774(void)
{
    nofralloc
    stwu r1, -0x9f0(r1)
    mflr r0
    stw r0, 0x9f4(r1)
    li r0, 0x9e8
    addi r11, r1, 0x9c0
    stfd f31, 0x9e0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x9d8
    stfd f30, 0x9d0(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x9c8
    stfd f29, 0x9c0(r1)
    psq_stx f29, r1, r0, 0, 0
    bl _savegpr_27
    lwz r0, 0x4dc(r3)
    mr r30, r3
    cmpwi r0, 0x2
    blt lbl_fn_80431774_000006B0
    lwz r0, 0x4f0(r3)
    mulli r0, r0, 0x29c
    add r4, r3, r0
    lwz r0, 0x784(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80431774_000006B0
    lfs f8, lbl_80886868
    addi r29, r1, 0x318
    lfs f0, lbl_8088686C
    lfs f7, lbl_80886870
    stfs f8, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f8, 0x344(r1)
    stfs f8, 0x33c(r1)
    stfs f8, 0x338(r1)
    stfs f8, 0x334(r1)
    stfs f8, 0x330(r1)
    stfs f8, 0x328(r1)
    stfs f8, 0x324(r1)
    stfs f8, 0x320(r1)
    stfs f8, 0x31c(r1)
    stfs f0, 0x340(r1)
    stfs f0, 0x32c(r1)
    stfs f0, 0x318(r1)
    lfs f1, 0x80(r3)
    fcmpu cr0, f8, f1
    beq lbl_fn_80431774_00000568
    addi r3, r1, 0x1c8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1c8
    addi r5, r1, 0x198
    bl fn_805F89F0
    addi r3, r1, 0x198
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80431774_00000568:
    lfs f0, lbl_80886868
    lfs f1, 0x7c(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80431774_000005C8
    addi r3, r1, 0x228
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x228
    addi r5, r1, 0x1f8
    bl fn_805F89F0
    addi r3, r1, 0x1f8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80431774_000005C8:
    lfs f0, lbl_80886868
    lfs f1, 0x78(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80431774_00000628
    addi r3, r1, 0x288
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x288
    addi r5, r1, 0x258
    bl fn_805F89F0
    addi r3, r1, 0x258
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80431774_00000628:
    addi r4, r1, 0x68
    addi r3, r1, 0x318
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x4f0(r30)
    addi r4, r1, 0x38
    lfs f8, 0x6c(r1)
    mulli r0, r0, 0x29c
    lfs f0, 0x68(r1)
    lfs f10, 0x70(r1)
    add r3, r30, r0
    lwz r5, 0x780(r3)
    lwz r3, 0x784(r3)
    lfs f9, 0x52c(r5)
    lfs f7, 0x528(r5)
    fadds f9, f9, f8
    lfs f8, 0x530(r5)
    fadds f0, f7, f0
    stfs f9, 0x3c(r1)
    fadds f2, f8, f10
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x6c(r3), 0, 0
    stfs f2, 0x74(r3)
    lwz r0, 0x4f0(r30)
    stfs f2, 0x40(r1)
    mulli r0, r0, 0x29c
    add r3, r30, r0
    lwz r4, 0x780(r3)
    lwz r3, 0x784(r3)
    lfs f2, 0x53c(r4)
    psq_l f1, 0x534(r4), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
lbl_fn_80431774_000006B0:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80431774_000006C4
    lwz r31, 0x48(r3)
    b lbl_fn_80431774_000006C8
lbl_fn_80431774_000006C4:
    li r31, 0x0
lbl_fn_80431774_000006C8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80431774_000006E0
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80431774_00001040
lbl_fn_80431774_000006E0:
    cmpwi r31, 0x0
    beq lbl_fn_80431774_00001040
    mr r3, r31
    bl fn_8017C974
    cmpwi r3, 0x0
    beq lbl_fn_80431774_000006FC
    b lbl_fn_80431774_00001040
lbl_fn_80431774_000006FC:
    lwz r0, 0x54(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80431774_00001040
    lwz r0, 0x4dc(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80431774_00000DF4
    mr r28, r30
    li r29, 0x0
    b lbl_fn_80431774_00000770
lbl_fn_80431774_00000720:
    lwz r3, 0x780(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80431774_00000740
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80431774_00000740
    bl fn_801765D8
lbl_fn_80431774_00000740:
    lwz r3, 0x784(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80431774_00000768
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80431774_00000768
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80431774_00000768:
    addi r28, r28, 0x29c
    addi r29, r29, 0x1
lbl_fn_80431774_00000770:
    lwz r0, 0x4f4(r30)
    cmpw r29, r0
    blt lbl_fn_80431774_00000720
    lwz r3, 0x3048(r30)
    cmpwi r3, 0x0
    bgt lbl_fn_80431774_00000DE8
    lwz r3, lbl_8087F430
    lwz r3, 0x10d0(r3)
    bl fn_8021DE88
    cmpwi r3, 0x0
    beq lbl_fn_80431774_00000898
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_8021DECC
    cmpwi r3, 0x0
    beq lbl_fn_80431774_000008A4
    lwz r4, 0x10(r1)
    cmpwi r4, 0x0
    ble lbl_fn_80431774_000008A4
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x2ebc(r30)
    stw r4, 0x2eb8(r30)
    stw r3, 0x2ec0(r30)
    lwz r3, lbl_8087F578
    cmpwi r3, 0x0
    beq lbl_fn_80431774_00000840
    lwz r4, 0x10(r1)
    bl fn_804A24C4
    cmpwi r3, 0x0
    beq lbl_fn_80431774_00000840
    lwz r3, lbl_8087F578
    lwz r4, 0x2eb8(r30)
    bl fn_804A251C
    lwz r5, 0x2ebc(r30)
    lis r0, 0x4330
    stw r0, 0x990(r1)
    lis r4, lbl_80754070@ha
    mullw r0, r5, r3
    lfd f8, lbl_80754070@l(r4)
    lfs f0, lbl_80886874
    xoris r0, r0, 0x8000
    stw r0, 0x994(r1)
    lfd f7, 0x990(r1)
    fsubs f7, f7, f8
    fmuls f0, f0, f7
    fctiwz f0, f0
    stfd f0, 0x998(r1)
    lwz r0, 0x99c(r1)
    stw r0, 0x2ec0(r30)
    b lbl_fn_80431774_000008A4
lbl_fn_80431774_00000840:
    lwz r3, 0x10(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_80431774_000008A4
    lwz r5, 0xc8(r3)
    lis r0, 0x4330
    lwz r4, 0x2ebc(r30)
    lis r3, lbl_80754070@ha
    stw r0, 0x998(r1)
    mullw r0, r5, r4
    lfd f8, lbl_80754070@l(r3)
    lfs f0, lbl_80886874
    xoris r0, r0, 0x8000
    stw r0, 0x99c(r1)
    lfd f7, 0x998(r1)
    fsubs f7, f7, f8
    fmuls f0, f0, f7
    fctiwz f0, f0
    stfd f0, 0x990(r1)
    lwz r0, 0x994(r1)
    stw r0, 0x2ec0(r30)
    b lbl_fn_80431774_000008A4
lbl_fn_80431774_00000898:
    li r0, 0x12c
    stw r0, 0x3048(r30)
    b lbl_fn_80431774_00001040
lbl_fn_80431774_000008A4:
    bl fn_80680CF8
    lwz r4, 0x4f4(r30)
    li r0, 0x0
    stw r0, 0x448(r1)
    addi r5, r1, 0x5c
    divw r0, r3, r4
    addi r28, r30, 0x2ec4
    li r29, 0x0
    mullw r0, r0, r4
    subf r0, r0, r3
    stw r0, 0x4f0(r30)
    lfs f2, 0x530(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    frsp f29, f2
    stfs f2, 0x64(r1)
    lfs f30, 0x60(r1)
    lfs f31, 0x5c(r1)
    b lbl_fn_80431774_00000968
lbl_fn_80431774_000008F0:
    lfs f8, 0x8(r28)
    addi r3, r1, 0x2c
    lfs f7, 0x4(r28)
    lfs f0, 0x0(r28)
    fsubs f8, f8, f29
    fsubs f7, f7, f30
    fsubs f0, f0, f31
    stfs f8, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    bl fn_805F9920
    lfs f0, 0x3060(r30)
    fmuls f0, f0, f0
    fcmpo cr0, f0, f1
    bge lbl_fn_80431774_00000960
    lfs f0, 0x305c(r30)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80431774_00000960
    lwz r0, 0x448(r1)
    addi r3, r1, 0x44c
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_80431774_00000954
    stw r29, 0x0(r3)
lbl_fn_80431774_00000954:
    lwz r3, 0x448(r1)
    addi r0, r3, 0x1
    stw r0, 0x448(r1)
lbl_fn_80431774_00000960:
    addi r28, r28, 0x18
    addi r29, r29, 0x1
lbl_fn_80431774_00000968:
    lwz r0, 0x3044(r30)
    cmpw r29, r0
    blt lbl_fn_80431774_000008F0
    lwz r0, 0x448(r1)
    lwz r28, 0x448(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80431774_000009AC
    bl fn_80680CF8
    lwz r4, 0x304c(r30)
    lwz r0, 0x3058(r30)
    addi r4, r4, 0x1
    stw r0, 0x3054(r30)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    stw r0, 0x3048(r30)
    b lbl_fn_80431774_00001040
lbl_fn_80431774_000009AC:
    bl fn_80680CF8
    divwu r0, r3, r28
    addi r5, r1, 0x44c
    lfs f7, lbl_80886868
    li r4, 0x79
    lfs f0, lbl_8088686C
    mullw r0, r0, r28
    subf r0, r0, r3
    addi r3, r1, 0x2e8
    slwi r0, r0, 2
    lwzx r0, r5, r0
    mulli r0, r0, 0x18
    add r5, r30, r0
    addi r6, r5, 0x2ec4
    psq_l f1, 0x0(r6), 0, 0
    addi r5, r5, 0x2ed0
    lfs f2, 0x8(r6)
    stfs f2, 0x74(r30)
    psq_st f1, 0x6c(r30), 0, 0
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x78(r30), 0, 0
    lfs f1, 0x7c(r30)
    stfs f2, 0x80(r30)
    stfs f7, 0x4e0(r30)
    stfs f7, 0x4e4(r30)
    stfs f0, 0x4e8(r30)
    bl fn_805F8E70
    addi r4, r30, 0x4e0
    addi r3, r1, 0x2e8
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0x4f0(r30)
    li r0, 0x1
    lfs f2, 0x74(r30)
    li r4, 0x0
    mulli r3, r3, 0x29c
    psq_l f1, 0x6c(r30), 0, 0
    li r6, 0x1
    li r7, 0x0
    add r29, r30, r3
    li r8, 0x1
    lwz r27, 0x780(r29)
    psq_st f1, 0x528(r27), 0, 0
    addi r3, r27, 0xb0
    stfs f2, 0x530(r27)
    lfs f2, 0x80(r30)
    psq_l f1, 0x78(r30), 0, 0
    psq_st f1, 0x534(r27), 0, 0
    lfs f1, lbl_80886868
    stfs f2, 0x53c(r27)
    lfs f2, lbl_80886878
    stw r0, 0x3fc(r27)
    lwz r5, 0x778(r29)
    bl fn_80097C08
    lfs f0, lbl_8088686C
    mr r3, r27
    stfs f0, 0x2e8(r27)
    bl fn_80176ACC
    lwz r3, 0x784(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80431774_00000C84
    lwz r0, 0x38(r3)
    addi r28, r1, 0x2b8
    lfs f8, lbl_80886868
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lfs f0, lbl_8088686C
    lfs f7, lbl_80886870
    stfs f8, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f8, 0x2e4(r1)
    stfs f8, 0x2dc(r1)
    stfs f8, 0x2d8(r1)
    stfs f8, 0x2d4(r1)
    stfs f8, 0x2d0(r1)
    stfs f8, 0x2c8(r1)
    stfs f8, 0x2c4(r1)
    stfs f8, 0x2c0(r1)
    stfs f8, 0x2bc(r1)
    stfs f0, 0x2e0(r1)
    stfs f0, 0x2cc(r1)
    stfs f0, 0x2b8(r1)
    lfs f1, 0x80(r30)
    fcmpu cr0, f8, f1
    beq lbl_fn_80431774_00000B58
    addi r3, r1, 0xa8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0xa8
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80431774_00000B58:
    lfs f0, lbl_80886868
    lfs f1, 0x7c(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80431774_00000BB8
    addi r3, r1, 0x108
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80431774_00000BB8:
    lfs f0, lbl_80886868
    lfs f1, 0x78(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80431774_00000C18
    addi r3, r1, 0x168
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x168
    addi r5, r1, 0x138
    bl fn_805F89F0
    addi r3, r1, 0x138
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80431774_00000C18:
    addi r4, r1, 0x50
    addi r3, r1, 0x2b8
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0x52c(r27)
    addi r3, r1, 0x20
    lfs f8, 0x54(r1)
    lfs f7, 0x528(r27)
    fadds f9, f9, f8
    lfs f0, 0x50(r1)
    lfs f8, 0x530(r27)
    fadds f7, f7, f0
    lfs f0, 0x58(r1)
    stfs f9, 0x24(r1)
    fadds f0, f8, f0
    lwz r4, 0x784(r29)
    stfs f7, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    psq_st f1, 0x6c(r4), 0, 0
    stfs f2, 0x74(r4)
    lwz r3, 0x784(r29)
    lfs f2, 0x53c(r27)
    psq_l f1, 0x534(r27), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f0, 0x28(r1)
    stfs f2, 0x80(r3)
lbl_fn_80431774_00000C84:
    lwz r3, 0x3058(r30)
    li r0, 0x40
    stw r3, 0x3054(r30)
    addi r4, r1, 0x58c
    li r3, 0x0
    mtctr r0
lbl_fn_80431774_00000C9C:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_fn_80431774_00000C9C
    lwz r3, 0x2eb8(r30)
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_80431774_00000CC8
    lwz r4, 0x8(r3)
    addi r3, r1, 0x590
    bl fn_80686A64
    b lbl_fn_80431774_00000CF0
lbl_fn_80431774_00000CC8:
    lis r4, lbl_807540A0@ha
    lwz r5, 0x2eb8(r30)
    addi r4, r4, lbl_807540A0@l
    addi r3, r1, 0x490
    addi r4, r4, 0x10
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x490
    bl fn_800697D8
lbl_fn_80431774_00000CF0:
    lwz r0, 0x4f0(r30)
    lwz r3, lbl_8087F430
    mulli r0, r0, 0x29c
    lwz r3, 0x10d8(r3)
    add r4, r30, r0
    lwz r4, 0x788(r4)
    bl fn_803CC6B4
    li r0, 0x10
    mr r29, r3
    addi r4, r1, 0x3c4
    li r3, 0x0
    mtctr r0
lbl_fn_80431774_00000D20:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_fn_80431774_00000D20
    li r0, 0x10
    addi r4, r1, 0x344
    li r3, 0x0
    mtctr r0
lbl_fn_80431774_00000D3C:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_fn_80431774_00000D3C
    lwz r3, 0x2ebc(r30)
    addi r4, r1, 0x3c8
    li r5, 0xa
    bl fn_8068B2A0
    lwz r3, 0x2ec0(r30)
    addi r4, r1, 0x348
    li r5, 0xa
    bl fn_8068B2A0
    lwz r4, 0x8(r29)
    addi r3, r1, 0x790
    addi r6, r1, 0x590
    addi r7, r1, 0x3c8
    addi r8, r1, 0x348
    li r5, 0x3
    crclr 6
    bl fn_800DD8A8
    addi r0, r1, 0x790
    stw r0, 0x3070(r30)
    lfs f1, lbl_8088687C
    addi r4, r30, 0x3068
    lwz r5, 0x34(r29)
    stw r5, 0x309c(r30)
    lwz r0, 0x30(r29)
    stw r0, 0x3098(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x3068(r30)
    lwz r0, 0xc(r29)
    stw r0, 0x3074(r30)
    lwz r3, lbl_8087F490
    bl fn_803E3BE8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80431774_00000DD4
    li r4, 0xdc
    bl fn_803750E4
lbl_fn_80431774_00000DD4:
    li r3, 0x1
    li r0, 0x2
    stw r3, 0x54(r30)
    stw r0, 0x4dc(r30)
    b lbl_fn_80431774_00000FBC
lbl_fn_80431774_00000DE8:
    subi r0, r3, 0x1
    stw r0, 0x3048(r30)
    b lbl_fn_80431774_00000FBC
lbl_fn_80431774_00000DF4:
    cmpwi r0, 0x2
    bne lbl_fn_80431774_00000EEC
    lwz r0, 0x4f0(r30)
    li r29, 0x1
    lfs f1, lbl_80886868
    li r4, 0x0
    mulli r0, r0, 0x29c
    lfs f2, lbl_80886878
    li r6, 0x1
    li r7, 0x0
    add r3, r30, r0
    li r8, 0x1
    lwz r27, 0x780(r3)
    stw r29, 0x3fc(r27)
    addi r3, r27, 0xb0
    lwz r0, 0x4f0(r30)
    mulli r0, r0, 0x29c
    add r5, r30, r0
    lwz r5, 0x778(r5)
    bl fn_80097C08
    lfs f0, lbl_8088686C
    addi r3, r27, 0xb0
    stfs f0, 0x2e8(r27)
    lwz r4, 0x3054(r30)
    cmpwi r4, 0x0
    blt lbl_fn_80431774_00000EAC
    lwz r5, 0x3058(r30)
    lis r3, 0x5555
    subi r4, r4, 0x1
    stw r4, 0x3054(r30)
    slwi r0, r5, 1
    addi r3, r3, 0x5556
    mulhw r3, r3, r0
    subf r4, r4, r5
    srwi r0, r3, 31
    add r0, r3, r0
    cmpw r4, r0
    ble lbl_fn_80431774_00000FBC
    lwz r0, 0x30a0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80431774_00000FBC
    addi r3, r30, 0x30a0
    li r4, 0x96
    li r5, 0x0
    bl fn_800CB5C8
    b lbl_fn_80431774_00000FBC
lbl_fn_80431774_00000EAC:
    stw r29, 0x34c(r3)
    li r4, 0x0
    lfs f1, lbl_80886868
    li r6, 0x1
    lwz r0, 0x4f0(r30)
    li r7, 0x0
    lfs f2, lbl_80886878
    li r8, 0x1
    mulli r0, r0, 0x29c
    add r5, r30, r0
    lwz r5, 0x778(r5)
    addi r5, r5, 0x2
    bl fn_80097C08
    lfs f0, lbl_8088686C
    stfs f0, 0x2e8(r27)
    b lbl_fn_80431774_00000FBC
lbl_fn_80431774_00000EEC:
    cmpwi r0, 0x3
    bne lbl_fn_80431774_00000F60
    lwz r3, 0x4f0(r30)
    li r0, 0x1
    lfs f1, lbl_80886868
    li r4, 0x0
    mulli r3, r3, 0x29c
    lfs f2, lbl_80886878
    li r6, 0x1
    li r7, 0x0
    add r3, r30, r3
    li r8, 0x1
    lwz r27, 0x780(r3)
    stw r0, 0x3fc(r27)
    addi r3, r27, 0xb0
    lwz r0, 0x4f0(r30)
    mulli r0, r0, 0x29c
    add r5, r30, r0
    lwz r5, 0x778(r5)
    addi r5, r5, 0x1
    bl fn_80097C08
    lfs f0, lbl_8088686C
    stfs f0, 0x2e8(r27)
    lwz r0, 0x54(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80431774_00000FBC
    li r0, 0x2
    stw r0, 0x4dc(r30)
    b lbl_fn_80431774_00000FBC
lbl_fn_80431774_00000F60:
    cmpwi r0, 0x4
    bne lbl_fn_80431774_00000FBC
    lwz r3, 0x4f0(r30)
    li r0, 0x1
    lfs f1, lbl_80886868
    li r4, 0x0
    mulli r3, r3, 0x29c
    lfs f2, lbl_80886878
    li r6, 0x1
    li r7, 0x0
    add r3, r30, r3
    li r8, 0x1
    lwz r27, 0x780(r3)
    stw r0, 0x3fc(r27)
    addi r3, r27, 0xb0
    lwz r0, 0x4f0(r30)
    mulli r0, r0, 0x29c
    add r5, r30, r0
    lwz r5, 0x778(r5)
    addi r5, r5, 0x2
    bl fn_80097C08
    lfs f0, lbl_8088686C
    stfs f0, 0x2e8(r27)
lbl_fn_80431774_00000FBC:
    lwz r3, 0x4dc(r30)
    cmpwi r3, 0x2
    bne lbl_fn_80431774_00000FD4
    lwz r0, 0x3054(r30)
    cmpwi r0, 0x0
    blt lbl_fn_80431774_00000FDC
lbl_fn_80431774_00000FD4:
    cmpwi r3, 0x3
    blt lbl_fn_80431774_00001040
lbl_fn_80431774_00000FDC:
    addi r3, r1, 0x44
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x14
    lfs f2, 0x530(r31)
    lfs f0, 0x74(r30)
    lfs f9, 0x70(r30)
    lfs f8, 0x48(r1)
    fsubs f10, f0, f2
    lfs f7, 0x6c(r30)
    lfs f0, 0x44(r1)
    fsubs f8, f9, f8
    stfs f2, 0x4c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f10, 0x1c(r1)
    bl fn_805F9920
    lfs f0, 0x305c(r30)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80431774_00001040
    li r0, 0x1
    stw r0, 0x4dc(r30)
lbl_fn_80431774_00001040:
    li r0, 0x9e8
    addi r11, r1, 0x9c0
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x9e0(r1)
    li r0, 0x9d8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x9d0(r1)
    li r0, 0x9c8
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x9c0(r1)
    bl _restgpr_27
    lwz r0, 0x9f4(r1)
    mtlr r0
    addi r1, r1, 0x9f0
    blr
}

asm void fn_80432390(void)
{
    nofralloc
    blr
}

asm void fn_80432394(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8043239C(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x670
    stfd f31, 0x690(r1)
    psq_st f31, 0x698(r1), 0, 0
    stfd f30, 0x680(r1)
    psq_st f30, 0x688(r1), 0, 0
    stfd f29, 0x670(r1)
    psq_st f29, 0x678(r1), 0, 0
    bl _savegpr_23
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
    mr r28, r3
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
    mr r4, r28
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
    lis r28, lbl_807540A0@ha
    lfs f31, lbl_80886880
    mr r25, r29
    addi r26, r29, 0x4f8
    addi r28, r28, lbl_807540A0@l
    li r31, 0x0
    li r30, 0x0
lbl_fn_8043239C_00001160:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r24, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8043239C_000013AC
    addi r4, r28, 0x26
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043239C_00001258
    cmpwi r31, 0x10
    bge lbl_fn_8043239C_000013AC
    addi r3, r1, 0x8
    bl fn_8005B9CC
    cmplw r3, r26
    mr r27, r3
    beq lbl_fn_8043239C_000011BC
    bl strlen
    mr r5, r3
    mr r3, r26
    mr r4, r27
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8043239C_000011BC:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x284(r26)
    addi r27, r26, 0x100
    li r23, 0x0
lbl_fn_8043239C_000011D4:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r24, r3
    extsb. r0, r0
    beq lbl_fn_8043239C_0000120C
    cmplw r3, r27
    beq lbl_fn_8043239C_0000120C
    bl strlen
    mr r5, r3
    mr r3, r27
    mr r4, r24
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8043239C_0000120C:
    addi r23, r23, 0x1
    addi r27, r27, 0x80
    cmpwi r23, 0x3
    blt lbl_fn_8043239C_000011D4
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x290(r26)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x294(r26)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x298(r26)
    addi r26, r26, 0x29c
    addi r31, r31, 0x1
    b lbl_fn_8043239C_000013AC
lbl_fn_8043239C_00001258:
    mr r3, r24
    addi r4, r28, 0x30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043239C_000012F4
    cmpwi r31, 0x10
    bge lbl_fn_8043239C_000013AC
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f29, 0x2ec4(r25)
    addi r3, r1, 0x8
    stfs f30, 0x2ec8(r25)
    stfs f1, 0x2ecc(r25)
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f29, f31, f1
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f30, f31, f1
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f29, 0x2ed0(r25)
    fmuls f0, f31, f1
    addi r30, r30, 0x1
    stfs f30, 0x2ed4(r25)
    stfs f0, 0x2ed8(r25)
    addi r25, r25, 0x18
    b lbl_fn_8043239C_000013AC
lbl_fn_8043239C_000012F4:
    mr r3, r24
    addi r4, r28, 0x3b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043239C_00001320
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC12C
    mulli r0, r3, 0x1e
    stw r0, 0x304c(r29)
    b lbl_fn_8043239C_000013AC
lbl_fn_8043239C_00001320:
    mr r3, r24
    addi r4, r28, 0x48
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043239C_0000134C
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC12C
    mulli r0, r3, 0x1e
    stw r0, 0x3058(r29)
    b lbl_fn_8043239C_000013AC
lbl_fn_8043239C_0000134C:
    mr r3, r24
    addi r4, r28, 0x53
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043239C_00001384
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3060(r29)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x305c(r29)
    b lbl_fn_8043239C_000013AC
lbl_fn_8043239C_00001384:
    mr r3, r24
    addi r4, r28, 0x61
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8043239C_000013AC
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC12C
    mulli r0, r3, 0x1e
    stw r0, 0x3050(r29)
lbl_fn_8043239C_000013AC:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8043239C_00001160
    lwz r0, 0x304c(r29)
    lwz r3, 0x3050(r29)
    cmpwi r0, 0x12c
    stw r31, 0x4f4(r29)
    stw r30, 0x3044(r29)
    stw r3, 0x3048(r29)
    ble lbl_fn_8043239C_000013DC
    stw r3, 0x3048(r29)
lbl_fn_8043239C_000013DC:
    lwz r0, 0x3058(r29)
    stw r0, 0x3054(r29)
    psq_l f31, 0x698(r1), 0, 0
    lfd f31, 0x690(r1)
    psq_l f30, 0x688(r1), 0, 0
    lfd f30, 0x680(r1)
    psq_l f29, 0x678(r1), 0, 0
    lfd f29, 0x670(r1)
    addi r11, r1, 0x670
    bl _restgpr_23
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_80432728(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_fn_80432728_00001440
    li r3, 0x0
    b lbl_fn_80432728_00001514
lbl_fn_80432728_00001440:
    lwz r0, 0x0(r4)
    cmplwi r0, 0x1
    ble lbl_fn_80432728_00001458
    cmpwi r0, 0x2
    beq lbl_fn_80432728_00001464
    b lbl_fn_80432728_0000150C
lbl_fn_80432728_00001458:
    li r0, 0x1
    stw r0, 0x4dc(r3)
    b lbl_fn_80432728_0000150C
lbl_fn_80432728_00001464:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80432728_0000150C
    lwz r0, 0x4dc(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80432728_0000150C
    lwz r3, lbl_8087F4F0
    lwz r4, 0x2ec0(r30)
    bl fn_8044D6AC
    lwz r3, lbl_8087F4F0
    li r6, 0x0
    lwz r4, 0x2eb8(r30)
    li r7, 0x0
    lwz r5, 0x2ebc(r30)
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80432728_000014CC
    lwz r6, 0x2eb8(r30)
    li r4, 0x1
    lwz r7, 0x2ebc(r30)
    li r5, 0x0
    bl fn_801092C8
lbl_fn_80432728_000014CC:
    lwz r3, lbl_8087F490
    li r6, 0x1
    lwz r4, 0x2eb8(r30)
    lwz r5, 0x2ebc(r30)
    bl fn_803E5E64
    lis r4, lbl_807540A0@ha
    lfs f1, lbl_8088686C
    addi r4, r4, lbl_807540A0@l
    addi r3, r1, 0x8
    addi r4, r4, 0x73
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80432728_0000150C:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
lbl_fn_80432728_00001514:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80432840(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886868
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

asm void fn_80432898(void)
{
    nofralloc
    lwz r0, 0x4dc(r3)
    li r3, 0x0
    cmpwi r0, 0x2
    bltlr
    cmpwi r0, 0x4
    bgtlr
    li r3, 0x1
    blr
}

asm void fn_804328B8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804328B8_0000167C
    cmpwi r31, 0x0
    bne lbl_fn_804328B8_0000167C
    lfs f1, 0x74(r28)
    addi r3, r1, 0x8
    lfs f0, 0x8(r29)
    lfs f3, 0x70(r28)
    fsubs f4, f1, f0
    lfs f2, 0x4(r29)
    lfs f1, 0x6c(r28)
    lfs f0, 0x0(r29)
    fsubs f2, f3, f2
    stfs f4, 0x10(r1)
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    lfs f0, lbl_80886868
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_804328B8_0000164C
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_804328B8_0000164C:
    lfs f0, lbl_80886884
    fcmpo cr0, f31, f0
    bge lbl_fn_804328B8_0000167C
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_805F9990
    lfs f0, lbl_80886888
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_804328B8_00001680
lbl_fn_804328B8_0000167C:
    li r3, 0x0
lbl_fn_804328B8_00001680:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804329BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804329BC_000018A4
    lwz r0, 0x4dc(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804329BC_0000183C
    lwz r0, 0x3054(r3)
    cmpwi r0, 0x0
    blt lbl_fn_804329BC_00001790
    lwz r5, 0x4f0(r3)
    li r0, 0x1
    lfs f1, lbl_80886868
    li r4, 0x0
    mulli r5, r5, 0x29c
    lfs f2, lbl_80886878
    li r6, 0x0
    li r7, 0x0
    add r3, r3, r5
    li r8, 0x1
    lwz r30, 0x780(r3)
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lwz r0, 0x4f0(r31)
    mulli r0, r0, 0x29c
    add r5, r31, r0
    lwz r5, 0x778(r5)
    addi r5, r5, 0x1
    bl fn_80097C08
    lfs f0, lbl_8088686C
    stfs f0, 0x2e8(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804329BC_00001760
    lwz r0, 0x4f0(r31)
    li r5, 0x1
    li r6, 0x0
    mulli r0, r0, 0x29c
    add r4, r31, r0
    lwz r4, 0x78c(r4)
    bl fn_80370320
lbl_fn_804329BC_00001760:
    lwz r0, 0x30a0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804329BC_0000177C
    addi r3, r31, 0x30a0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_804329BC_0000177C:
    li r3, 0x1
    li r0, 0x3
    stw r3, 0x3064(r31)
    stw r0, 0x4dc(r31)
    b lbl_fn_804329BC_0000190C
lbl_fn_804329BC_00001790:
    lwz r5, 0x4f0(r3)
    li r0, 0x1
    lfs f1, lbl_80886868
    li r4, 0x0
    mulli r5, r5, 0x29c
    lfs f2, lbl_80886878
    li r6, 0x0
    li r7, 0x0
    add r3, r3, r5
    li r8, 0x1
    lwz r30, 0x780(r3)
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lwz r0, 0x4f0(r31)
    mulli r0, r0, 0x29c
    add r5, r31, r0
    lwz r5, 0x778(r5)
    addi r5, r5, 0x2
    bl fn_80097C08
    lfs f0, lbl_8088686C
    stfs f0, 0x2e8(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804329BC_0000180C
    lwz r0, 0x4f0(r31)
    li r5, 0x1
    li r6, 0x0
    mulli r0, r0, 0x29c
    add r4, r31, r0
    lwz r4, 0x790(r4)
    bl fn_80370320
lbl_fn_804329BC_0000180C:
    lwz r0, 0x30a0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804329BC_00001828
    addi r3, r31, 0x30a0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_804329BC_00001828:
    li r3, 0x0
    li r0, 0x4
    stw r3, 0x3064(r31)
    stw r0, 0x4dc(r31)
    b lbl_fn_804329BC_0000190C
lbl_fn_804329BC_0000183C:
    cmpwi r0, 0x3
    bne lbl_fn_804329BC_00001870
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804329BC_0000190C
    lwz r0, 0x4f0(r31)
    li r5, 0x1
    li r6, 0x0
    mulli r0, r0, 0x29c
    add r4, r31, r0
    lwz r4, 0x78c(r4)
    bl fn_80370320
    b lbl_fn_804329BC_0000190C
lbl_fn_804329BC_00001870:
    cmpwi r0, 0x4
    bne lbl_fn_804329BC_0000190C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804329BC_0000190C
    lwz r0, 0x4f0(r31)
    li r5, 0x1
    li r6, 0x0
    mulli r0, r0, 0x29c
    add r4, r31, r0
    lwz r4, 0x790(r4)
    bl fn_80370320
    b lbl_fn_804329BC_0000190C
lbl_fn_804329BC_000018A4:
    lwz r0, 0x4dc(r3)
    cmpwi r0, 0x3
    bne lbl_fn_804329BC_000018DC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804329BC_0000190C
    lwz r0, 0x4f0(r31)
    li r5, 0x1
    li r6, 0x0
    mulli r0, r0, 0x29c
    add r4, r31, r0
    lwz r4, 0x78c(r4)
    bl fn_80370320
    b lbl_fn_804329BC_0000190C
lbl_fn_804329BC_000018DC:
    cmpwi r0, 0x4
    bne lbl_fn_804329BC_0000190C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804329BC_0000190C
    lwz r0, 0x4f0(r31)
    li r5, 0x1
    li r6, 0x0
    mulli r0, r0, 0x29c
    add r4, r31, r0
    lwz r4, 0x790(r4)
    bl fn_80370320
lbl_fn_804329BC_0000190C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80432C38(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_80432C38_00001934
    lwz r3, 0x2eb8(r3)
    blr
lbl_fn_80432C38_00001934:
    cmpwi r4, 0x1
    bne lbl_fn_80432C38_00001944
    lwz r3, 0x2ec0(r3)
    blr
lbl_fn_80432C38_00001944:
    li r3, 0x0
    blr
}

asm void fn_80432C60(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_80432C64(void)
{
    nofralloc
    b fn_80145334
}

asm void fn_80432C68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8013655C
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
