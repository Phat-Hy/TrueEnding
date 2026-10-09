#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80041C0C(void);
extern void fn_80042740(void);
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
extern void fn_80092F1C(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800C1720(void);
extern void fn_800DC288(void);
extern void fn_800EF73C(void);
extern void fn_800EFD04(void);
extern void fn_800EFDA0(void);
extern void fn_801010A0(void);
extern void fn_8010EFF0(void);
extern void fn_802180A8(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
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
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068A850(void);
extern void fn_806958E0(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80753110[];
extern u8 lbl_8075312C[];
extern u8 lbl_80753140[];
extern u8 lbl_807531A0[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078DD20[];
extern u8 lbl_8078DDB8[];
extern u8 lbl_8078DE58[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808864F8;
extern u32 lbl_808864FC;
extern u32 lbl_80886504;
extern u32 lbl_80886508;
extern u32 lbl_80886528;
extern u32 lbl_8088652C;
extern u32 lbl_80886530;
extern u32 lbl_80886534;
extern u32 lbl_80886538;
extern u32 lbl_8088653C;
extern u32 lbl_80886540;
extern u32 lbl_80886548;
extern u32 lbl_8088654C;
extern u32 lbl_80886550;
extern u32 lbl_80886554;
extern u32 lbl_80886558;
extern u32 lbl_8088655C;

/* Function declarations */
void fn_8041B4D8(void);
void fn_8041B724(void);
void fn_8041B970(void);
void fn_8041BA1C(void);
void fn_8041BA74(void);
void fn_8041BABC(void);
void fn_8041BAC0(void);
void fn_8041C04C(void);
void fn_8041C050(void);
void fn_8041C070(void);
void fn_8041C09C(void);
void fn_8041C164(void);
void fn_8041C21C(void);
void fn_8041C270(void);
void fn_8041C3B0(void);
void fn_8041C6A8(void);
void fn_8041C718(void);
void fn_8041C784(void);
void fn_8041C99C(void);
void fn_8041CC78(void);
void fn_8041CD1C(void);
void fn_8041CD24(void);
void fn_8041CD54(void);
void fn_8041CDD8(void);

asm void fn_8041B4D8(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r5
    stw r29, 0x64(r1)
    mr r29, r3
    bne lbl_fn_8041B4D8_0000005C
    li r3, 0x0
    b lbl_fn_8041B4D8_00000208
lbl_fn_8041B4D8_0000005C:
    lfs f1, 0x7c(r3)
    addi r3, r1, 0x30
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, lbl_808864F8
    addi r4, r1, 0x20
    stfs f0, 0x8(r1)
    addi r6, r1, 0x8
    lfs f2, lbl_808864FC
    mr r5, r4
    stfs f0, 0xc(r1)
    addi r3, r1, 0x30
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F93C0
    lfs f4, 0x10(r30)
    lfs f3, lbl_80886508
    lfs f0, lbl_808864F8
    fmuls f29, f3, f4
    lfs f31, 0x8(r30)
    lfs f30, 0xc(r30)
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_8041B4D8_000000C8
    lfs f29, lbl_80886504
lbl_fn_8041B4D8_000000C8:
    lwz r31, 0x48(r31)
    lfs f28, lbl_808864F8
    b lbl_fn_8041B4D8_000001FC
lbl_fn_8041B4D8_000000D4:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8041B4D8_00000100
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8041B4D8_00000100
    li r5, 0x1
lbl_fn_8041B4D8_00000100:
    cmpwi r5, 0x0
    beq lbl_fn_8041B4D8_0000011C
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8041B4D8_0000011C
    li r3, 0x1
lbl_fn_8041B4D8_0000011C:
    cmpwi r3, 0x0
    beq lbl_fn_8041B4D8_00000150
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8041B4D8_00000144
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_8041B4D8_00000144
    li r3, 0x1
lbl_fn_8041B4D8_00000144:
    cmpwi r3, 0x0
    bne lbl_fn_8041B4D8_00000150
    li r4, 0x1
lbl_fn_8041B4D8_00000150:
    cmpwi r4, 0x0
    beq lbl_fn_8041B4D8_000001F8
    lfs f3, 0x74(r29)
    addi r3, r1, 0x14
    lfs f0, 0x530(r31)
    lfs f5, 0x70(r29)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x6c(r29)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9920
    fmr f27, f1
    fcmpo cr0, f1, f28
    ble lbl_fn_8041B4D8_000001A8
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8041B4D8_000001A8:
    fmuls f0, f31, f31
    fcmpo cr0, f27, f0
    bge lbl_fn_8041B4D8_000001F8
    fmr f1, f29
    bl fn_8068A850
    frsp f27, f1
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_805F9990
    fcmpo cr0, f1, f27
    cror eq, gt, eq
    bne lbl_fn_8041B4D8_000001F8
    lwz r0, 0x4(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8041B4D8_000001F0
    lfs f0, 0x570(r31)
    fcmpo cr0, f0, f30
    ble lbl_fn_8041B4D8_000001F8
lbl_fn_8041B4D8_000001F0:
    li r3, 0x1
    b lbl_fn_8041B4D8_00000208
lbl_fn_8041B4D8_000001F8:
    lwz r31, 0x14ac(r31)
lbl_fn_8041B4D8_000001FC:
    cmpwi r31, 0x0
    bne lbl_fn_8041B4D8_000000D4
    li r3, 0x0
lbl_fn_8041B4D8_00000208:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8041B724(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r5
    stw r29, 0x64(r1)
    mr r29, r3
    bne lbl_fn_8041B724_000002A8
    li r3, 0x0
    b lbl_fn_8041B724_00000454
lbl_fn_8041B724_000002A8:
    lfs f1, 0x7c(r3)
    addi r3, r1, 0x30
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, lbl_808864F8
    addi r4, r1, 0x20
    stfs f0, 0x8(r1)
    addi r6, r1, 0x8
    lfs f2, lbl_808864FC
    mr r5, r4
    stfs f0, 0xc(r1)
    addi r3, r1, 0x30
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F93C0
    lfs f4, 0x10(r30)
    lfs f3, lbl_80886508
    lfs f0, lbl_808864F8
    fmuls f29, f3, f4
    lfs f31, 0x8(r30)
    lfs f30, 0xc(r30)
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_8041B724_00000314
    lfs f29, lbl_80886504
lbl_fn_8041B724_00000314:
    lwz r31, 0x48(r31)
    lfs f28, lbl_808864F8
    b lbl_fn_8041B724_00000448
lbl_fn_8041B724_00000320:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8041B724_0000034C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8041B724_0000034C
    li r5, 0x1
lbl_fn_8041B724_0000034C:
    cmpwi r5, 0x0
    beq lbl_fn_8041B724_00000368
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8041B724_00000368
    li r3, 0x1
lbl_fn_8041B724_00000368:
    cmpwi r3, 0x0
    beq lbl_fn_8041B724_0000039C
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8041B724_00000390
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_8041B724_00000390
    li r3, 0x1
lbl_fn_8041B724_00000390:
    cmpwi r3, 0x0
    bne lbl_fn_8041B724_0000039C
    li r4, 0x1
lbl_fn_8041B724_0000039C:
    cmpwi r4, 0x0
    beq lbl_fn_8041B724_00000444
    lfs f3, 0x74(r29)
    addi r3, r1, 0x14
    lfs f0, 0x530(r31)
    lfs f5, 0x70(r29)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x6c(r29)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9920
    fmr f27, f1
    fcmpo cr0, f1, f28
    ble lbl_fn_8041B724_000003F4
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8041B724_000003F4:
    fmuls f0, f31, f31
    fcmpo cr0, f27, f0
    bge lbl_fn_8041B724_00000444
    fmr f1, f29
    bl fn_8068A850
    frsp f27, f1
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_805F9990
    fcmpo cr0, f1, f27
    cror eq, gt, eq
    bne lbl_fn_8041B724_00000444
    lwz r0, 0x4(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8041B724_0000043C
    lfs f0, 0x570(r31)
    fcmpo cr0, f0, f30
    ble lbl_fn_8041B724_00000444
lbl_fn_8041B724_0000043C:
    li r3, 0x1
    b lbl_fn_8041B724_00000454
lbl_fn_8041B724_00000444:
    lwz r31, 0x14ac(r31)
lbl_fn_8041B724_00000448:
    cmpwi r31, 0x0
    bne lbl_fn_8041B724_00000320
    li r3, 0x0
lbl_fn_8041B724_00000454:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8041B970(void)
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
    beq lbl_fn_8041B970_00000524
    lis r5, lbl_8075312C@ha
    li r3, 0x100
    addi r5, r5, lbl_8075312C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8041B970_0000051C
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r4, lbl_8078DD20@ha
    li r3, 0x0
    addi r4, r4, lbl_8078DD20@l
    stw r4, 0x0(r31)
    li r0, 0x3
    stw r30, 0xf4(r31)
    stw r3, 0xf8(r31)
    stw r3, 0x54(r31)
    stw r0, 0x68(r31)
lbl_fn_8041B970_0000051C:
    mr r3, r31
    b lbl_fn_8041B970_00000528
lbl_fn_8041B970_00000524:
    li r3, 0x0
lbl_fn_8041B970_00000528:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8041BA1C(void)
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
    beq lbl_fn_8041BA1C_00000580
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8041BA1C_00000580
    mr r3, r30
    bl dtor_80084684
lbl_fn_8041BA1C_00000580:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041BA74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8041BA74_000005CC
    li r0, 0x2
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_8041BA74_000005D0
lbl_fn_8041BA74_000005CC:
    li r3, 0x0
lbl_fn_8041BA74_000005D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041BABC(void)
{
    nofralloc
    blr
}

asm void fn_8041BAC0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x100
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    bl _savegpr_26
    lwz r12, 0x0(r3)
    mr r27, r3
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041BAC0_00000B4C
    lwz r4, 0xf8(r27)
    lwz r3, 0xf4(r27)
    addi r4, r4, 0x1
    stw r4, 0xf8(r27)
    lwz r0, 0x28(r3)
    cmpw r4, r0
    ble lbl_fn_8041BAC0_00000B4C
    li r0, 0x0
    stw r0, 0xf8(r27)
    lwz r3, lbl_8087F048
    bl fn_801010A0
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8041BAC0_00000B4C
    lwz r3, 0xf4(r27)
    lwz r3, 0x20(r3)
    bl fn_80219E6C
    lwz r4, lbl_8087F430
    mr r29, r3
    lwz r3, 0xf4(r27)
    li r5, 0x0
    lwz r6, 0x10d8(r4)
    li r7, 0x0
    lwz r4, 0x24(r3)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8041BAC0_000006C0
lbl_fn_8041BAC0_00000698:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r4, r0
    bne lbl_fn_8041BAC0_000006B4
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_8041BAC0_000006C4
lbl_fn_8041BAC0_000006B4:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8041BAC0_00000698
lbl_fn_8041BAC0_000006C0:
    li r3, 0x0
lbl_fn_8041BAC0_000006C4:
    cmpwi r3, 0x0
    beq lbl_fn_8041BAC0_000006E4
    lfs f2, 0xc(r3)
    addi r4, r1, 0x38
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    b lbl_fn_8041BAC0_000008B0
lbl_fn_8041BAC0_000006E4:
    li r0, 0x0
    stw r0, 0x90(r1)
    lwz r3, 0xf4(r27)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8041BAC0_000007B8
    lwz r3, lbl_8087F408
    lwz r3, 0x48(r3)
    b lbl_fn_8041BAC0_000007AC
lbl_fn_8041BAC0_00000708:
    lwz r4, 0x38(r3)
    li r6, 0x0
    mr r5, r6
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8041BAC0_0000072C
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8041BAC0_00000730
lbl_fn_8041BAC0_0000072C:
    li r5, 0x1
lbl_fn_8041BAC0_00000730:
    cmpwi r5, 0x0
    bne lbl_fn_8041BAC0_00000774
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8041BAC0_00000774
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8041BAC0_00000768
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8041BAC0_00000768
    li r4, 0x1
lbl_fn_8041BAC0_00000768:
    cmpwi r4, 0x0
    bne lbl_fn_8041BAC0_00000774
    li r6, 0x1
lbl_fn_8041BAC0_00000774:
    cmpwi r6, 0x0
    beq lbl_fn_8041BAC0_000007A8
    lwz r0, 0x90(r1)
    addi r4, r1, 0x94
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_8041BAC0_00000794
    stw r3, 0x0(r4)
lbl_fn_8041BAC0_00000794:
    lwz r4, 0x90(r1)
    addi r0, r4, 0x1
    stw r0, 0x90(r1)
    cmplwi r0, 0x10
    bge lbl_fn_8041BAC0_00000870
lbl_fn_8041BAC0_000007A8:
    lwz r3, 0x14ac(r3)
lbl_fn_8041BAC0_000007AC:
    cmpwi r3, 0x0
    bne lbl_fn_8041BAC0_00000708
    b lbl_fn_8041BAC0_00000870
lbl_fn_8041BAC0_000007B8:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_8041BAC0_00000868
lbl_fn_8041BAC0_000007C4:
    lwz r4, 0x38(r3)
    li r6, 0x0
    mr r5, r6
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8041BAC0_000007E8
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8041BAC0_000007EC
lbl_fn_8041BAC0_000007E8:
    li r5, 0x1
lbl_fn_8041BAC0_000007EC:
    cmpwi r5, 0x0
    bne lbl_fn_8041BAC0_00000830
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8041BAC0_00000830
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8041BAC0_00000824
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8041BAC0_00000824
    li r4, 0x1
lbl_fn_8041BAC0_00000824:
    cmpwi r4, 0x0
    bne lbl_fn_8041BAC0_00000830
    li r6, 0x1
lbl_fn_8041BAC0_00000830:
    cmpwi r6, 0x0
    beq lbl_fn_8041BAC0_00000864
    lwz r0, 0x90(r1)
    addi r4, r1, 0x94
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_8041BAC0_00000850
    stw r3, 0x0(r4)
lbl_fn_8041BAC0_00000850:
    lwz r4, 0x90(r1)
    addi r0, r4, 0x1
    stw r0, 0x90(r1)
    cmplwi r0, 0x10
    bge lbl_fn_8041BAC0_00000870
lbl_fn_8041BAC0_00000864:
    lwz r3, 0x14ac(r3)
lbl_fn_8041BAC0_00000868:
    cmpwi r3, 0x0
    bne lbl_fn_8041BAC0_000007C4
lbl_fn_8041BAC0_00000870:
    lwz r0, 0x90(r1)
    lwz r26, 0x90(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8041BAC0_00000B4C
    bl fn_80680CF8
    divwu r0, r3, r26
    addi r5, r1, 0x94
    addi r4, r1, 0x38
    mullw r0, r0, r26
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r3, r5, r0
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_8041BAC0_000008B0:
    bl fn_80680CF8
    lis r26, 0x4178
    lwz r4, 0xf4(r27)
    addi r0, r26, 0x749f
    lis r31, 0x4330
    mulhw r0, r0, r3
    lis r30, lbl_80753110@ha
    lfs f3, 0x40(r4)
    lfs f0, lbl_8088652C
    stw r31, 0xd8(r1)
    lfd f5, lbl_80753110@l(r30)
    srawi r0, r0, 8
    stfs f0, 0x2c(r1)
    srwi r4, r0, 31
    lfs f4, lbl_80886528
    add r0, r0, r4
    stfs f0, 0x30(r1)
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f5
    fdivs f0, f0, f4
    fmuls f0, f3, f0
    stfs f0, 0x34(r1)
    bl fn_80680CF8
    addi r0, r26, 0x749f
    stw r31, 0xe0(r1)
    mulhw r0, r0, r3
    lfd f5, lbl_80753110@l(r30)
    lfs f3, lbl_80886528
    li r4, 0x79
    lfs f0, lbl_80886530
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x60
    xoris r0, r0, 0x8000
    stw r0, 0xe4(r1)
    lfd f4, 0xe0(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmuls f1, f0, f3
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x38(r1)
    lfs f0, 0x2c(r1)
    lfs f5, 0x3c(r1)
    fadds f7, f3, f0
    lfs f4, 0x30(r1)
    lbz r0, 0x2(r29)
    fadds f6, f5, f4
    lfs f3, 0x40(r1)
    lfs f0, 0x34(r1)
    cmpwi r0, 0x1
    stfs f7, 0x38(r1)
    fadds f5, f3, f0
    lfs f31, 0x4c(r29)
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    bne lbl_fn_8041BAC0_00000A9C
    lwz r4, 0xf4(r27)
    addi r26, r1, 0x20
    addi r5, r1, 0x14
    lfs f0, lbl_8088652C
    lfs f4, 0x8(r4)
    mr r3, r26
    lfs f3, 0x4(r4)
    fsubs f6, f6, f4
    lfs f4, 0xc(r4)
    fsubs f3, f7, f3
    stfs f6, 0x18(r1)
    fsubs f2, f5, f4
    stfs f3, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    bl fn_805F9940
    lwz r3, lbl_8087F0A8
    fdivs f6, f1, f31
    lwz r4, 0xf4(r27)
    lwz r0, 0x30(r3)
    mr r3, r26
    lfs f3, 0x8(r4)
    mr r4, r26
    mullw r0, r0, r0
    lfs f0, 0x3c(r1)
    stw r31, 0xe0(r1)
    fsubs f7, f3, f0
    lfd f5, lbl_80753110@l(r30)
    lfs f4, lbl_80886534
    xoris r0, r0, 0x8000
    stw r0, 0xe4(r1)
    lfs f3, lbl_80886538
    lfd f0, 0xe0(r1)
    fsubs f5, f0, f5
    fdivs f0, f7, f6
    fdivs f4, f4, f5
    fmuls f3, f3, f4
    fmsubs f30, f6, f3, f0
    bl fn_805F98D0
    lfs f3, 0x20(r1)
    mr r3, r26
    lfs f0, 0x28(r1)
    fmuls f3, f3, f31
    stfs f30, 0x24(r1)
    fmuls f0, f0, f31
    stfs f3, 0x20(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    fmr f31, f1
    mr r3, r26
    mr r4, r26
    bl fn_805F98D0
    b lbl_fn_8041BAC0_00000AE0
lbl_fn_8041BAC0_00000A9C:
    lwz r5, 0xf4(r27)
    addi r3, r1, 0x20
    addi r6, r1, 0x8
    lfs f0, 0xc(r5)
    mr r4, r3
    lfs f3, 0x8(r5)
    fsubs f2, f5, f0
    lfs f0, 0x4(r5)
    fsubs f3, f6, f3
    fsubs f0, f7, f0
    stfs f2, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
lbl_fn_8041BAC0_00000AE0:
    lfs f4, lbl_8088652C
    li r0, 0x0
    lfs f3, lbl_80886540
    lfs f0, lbl_8088653C
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f0, 0x44(r1)
    lwz r3, 0xb0(r29)
    bl fn_800EFD04
    stw r3, 0x48(r1)
    lwz r3, 0xb0(r29)
    bl fn_800EFDA0
    stw r3, 0x4c(r1)
    fmr f1, f31
    mr r3, r28
    addi r4, r1, 0x44
    stw r29, 0x50(r1)
    addi r6, r1, 0x20
    li r8, -0x1
    lwz r5, 0xf4(r27)
    li r9, 0x0
    lwz r7, 0x2c(r5)
    addi r5, r5, 0x4
    bl fn_8010EFF0
lbl_fn_8041BAC0_00000B4C:
    addi r11, r1, 0x100
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    bl _restgpr_26
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8041C04C(void)
{
    nofralloc
    blr
}

asm void fn_8041C050(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8041C050_00000B88
    li r3, 0x0
    blr
lbl_fn_8041C050_00000B88:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    mr r3, r0
    blr
}

asm void fn_8041C070(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8041C070_00000BBC
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8041C070_00000BBC
    li r4, 0x1
lbl_fn_8041C070_00000BBC:
    mr r3, r4
    blr
}

asm void fn_8041C09C(void)
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
    beq lbl_fn_8041C09C_00000C68
    lis r5, lbl_80753140@ha
    li r3, 0x5d8
    addi r5, r5, lbl_80753140@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8041C09C_00000C60
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r4, lbl_8078DDB8@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078DDB8@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x4c4
    bl fn_80057F28
    addi r3, r31, 0x54c
    bl fn_80057F28
    li r0, 0x0
    stw r0, 0x54(r31)
lbl_fn_8041C09C_00000C60:
    mr r3, r31
    b lbl_fn_8041C09C_00000C6C
lbl_fn_8041C09C_00000C68:
    li r3, 0x0
lbl_fn_8041C09C_00000C6C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8041C164(void)
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
    beq lbl_fn_8041C164_00000D24
    addic. r31, r3, 0x54c
    beq lbl_fn_8041C164_00000CD8
    addic. r3, r31, 0x3c
    beq lbl_fn_8041C164_00000CCC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8041C164_00000CCC:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8041C164_00000CD8:
    addic. r31, r29, 0x4c4
    beq lbl_fn_8041C164_00000CFC
    addic. r3, r31, 0x3c
    beq lbl_fn_8041C164_00000CF0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8041C164_00000CF0:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8041C164_00000CFC:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8041C164_00000D24
    mr r3, r29
    bl dtor_80084684
lbl_fn_8041C164_00000D24:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8041C21C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8041C21C_00000D80
    li r0, 0x1
    stw r0, 0x54(r31)
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    li r3, 0x1
    b lbl_fn_8041C21C_00000D84
lbl_fn_8041C21C_00000D80:
    li r3, 0x0
lbl_fn_8041C21C_00000D84:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041C270(void)
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
    beq lbl_fn_8041C270_00000DFC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8041C270_00000DFC:
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
    addi r3, r31, 0x54c
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
    lfs f0, lbl_80886548
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
    bne lbl_fn_8041C270_00000EAC
    li r0, 0x4
    stw r0, 0x8(r1)
lbl_fn_8041C270_00000EAC:
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

asm void fn_8041C3B0(void)
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
    bne lbl_fn_8041C3B0_00000F10
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8041C3B0_00000F10:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8041C3B0_00000F60
    lfs f0, lbl_80886548
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
lbl_fn_8041C3B0_00000F60:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041C3B0_00000FA0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8041C3B0_00000FA0:
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
    addi r3, r31, 0x54c
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
    cmpwi r0, 0x1
    beq lbl_fn_8041C3B0_00001030
    cmpwi r0, 0x3
    beq lbl_fn_8041C3B0_00001084
    cmpwi r0, 0x5
    beq lbl_fn_8041C3B0_00001124
    b lbl_fn_8041C3B0_000011B4
lbl_fn_8041C3B0_00001030:
    addi r3, r31, 0xf4
    li r4, 0x1
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8041C3B0_000011B4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041C3B0_000011B4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
    b lbl_fn_8041C3B0_000011B4
lbl_fn_8041C3B0_00001084:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041C3B0_000010C0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8041C3B0_000010C0:
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8041C3B0_000011B4
    lfs f0, lbl_80886548
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
    b lbl_fn_8041C3B0_000011B4
lbl_fn_8041C3B0_00001124:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041C3B0_00001160
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8041C3B0_00001160:
    lfs f7, 0x328(r31)
    lfs f0, lbl_80886548
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8041C3B0_000011B4
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
lbl_fn_8041C3B0_000011B4:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8041C6A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8041C6A8_0000122C
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041C6A8_0000122C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_8041C6A8_0000122C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041C718(void)
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
    beq lbl_fn_8041C718_0000126C
    li r3, 0x1
    b lbl_fn_8041C718_00001298
lbl_fn_8041C718_0000126C:
    addi r3, r31, 0x4c4
    bl fn_800580BC
    cmpwi r3, 0x0
    bne lbl_fn_8041C718_0000128C
    addi r3, r31, 0x54c
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_8041C718_00001294
lbl_fn_8041C718_0000128C:
    li r3, 0x1
    b lbl_fn_8041C718_00001298
lbl_fn_8041C718_00001294:
    li r3, 0x0
lbl_fn_8041C718_00001298:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041C784(void)
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
    lis r3, lbl_80753140@ha
    addi r31, r3, lbl_80753140@l
lbl_fn_8041C784_0000135C:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8041C784_00001498
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041C784_000013B0
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
    b lbl_fn_8041C784_0000143C
lbl_fn_8041C784_000013B0:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041C784_000013F8
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
    b lbl_fn_8041C784_0000143C
lbl_fn_8041C784_000013F8:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041C784_0000143C
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
lbl_fn_8041C784_0000143C:
    mr r3, r30
    addi r4, r31, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041C784_00001498
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x100
    bl fn_8068236C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    cmpwi r3, 0x0
    bne lbl_fn_8041C784_0000148C
    addi r3, r29, 0x4c4
    addi r4, r1, 0x8
    bl fn_80058078
    b lbl_fn_8041C784_00001498
lbl_fn_8041C784_0000148C:
    addi r3, r29, 0x54c
    addi r4, r1, 0x8
    bl fn_80058078
lbl_fn_8041C784_00001498:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8041C784_0000135C
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_8041C99C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_8041C99C_000014E8
    li r3, 0x0
    b lbl_fn_8041C99C_0000178C
lbl_fn_8041C99C_000014E8:
    lwz r4, 0x0(r4)
    stw r4, 0x54(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8041C99C_00001620
    cmpwi r4, 0x1
    beq lbl_fn_8041C99C_00001518
    cmpwi r4, 0x4
    beq lbl_fn_8041C99C_00001668
    cmpwi r4, 0x5
    beq lbl_fn_8041C99C_00001734
    b lbl_fn_8041C99C_00001788
lbl_fn_8041C99C_00001518:
    li r4, 0x1
    addi r3, r3, 0xf4
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8041C99C_0000155C
    lfs f1, lbl_8088654C
    addi r3, r31, 0xf4
    lfs f2, lbl_80886550
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_8088654C
    stfs f0, 0x32c(r31)
    b lbl_fn_8041C99C_00001588
lbl_fn_8041C99C_0000155C:
    lfs f1, lbl_8088654C
    addi r3, r31, 0xf4
    lfs f2, lbl_80886550
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80886548
    stfs f0, 0x32c(r31)
lbl_fn_8041C99C_00001588:
    lwz r4, 0x4cc(r31)
    mr r3, r31
    lwz r0, 0x554(r31)
    ori r4, r4, 0x1
    stw r4, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x554(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041C99C_000015E0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8041C99C_000015E0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041C99C_00001788
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
    b lbl_fn_8041C99C_00001788
lbl_fn_8041C99C_00001620:
    lfs f1, lbl_8088654C
    li r4, 0x0
    lfs f2, lbl_80886550
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    lwz r3, 0x4cc(r31)
    lwz r0, 0x554(r31)
    lfs f0, lbl_8088654C
    ori r3, r3, 0x1
    clrrwi r0, r0, 1
    stfs f0, 0x32c(r31)
    stw r3, 0x4cc(r31)
    stw r0, 0x554(r31)
    b lbl_fn_8041C99C_00001788
lbl_fn_8041C99C_00001668:
    lfs f1, lbl_8088654C
    li r4, 0x0
    lfs f2, lbl_80886550
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lwz r4, 0x4cc(r31)
    mr r3, r31
    lwz r0, 0x554(r31)
    clrrwi r4, r4, 1
    stfs f1, 0x328(r31)
    ori r0, r0, 0x1
    stw r4, 0x4cc(r31)
    stw r0, 0x554(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041C99C_000016F4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8041C99C_000016F4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041C99C_00001788
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
    b lbl_fn_8041C99C_00001788
lbl_fn_8041C99C_00001734:
    lfs f1, lbl_8088654C
    li r4, 0x0
    lfs f2, lbl_80886550
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lwz r3, 0x4cc(r31)
    lwz r0, 0x554(r31)
    lfs f0, lbl_80886554
    ori r3, r3, 0x1
    clrrwi r0, r0, 1
    stfs f1, 0x328(r31)
    stfs f0, 0x32c(r31)
    stw r3, 0x4cc(r31)
    stw r0, 0x554(r31)
lbl_fn_8041C99C_00001788:
    lwz r3, 0x54(r31)
lbl_fn_8041C99C_0000178C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041CC78(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    subi r0, r4, 0x2
    cmplwi r0, 0x2
    stw r31, 0x2c(r1)
    mr r31, r3
    ble lbl_fn_8041CC78_000017D8
    cmpwi r4, 0x1
    beq lbl_fn_8041CC78_000017D0
    cmpwi r4, 0x5
    bne lbl_fn_8041CC78_000017DC
lbl_fn_8041CC78_000017D0:
    li r4, 0x1
    b lbl_fn_8041CC78_000017DC
lbl_fn_8041CC78_000017D8:
    li r4, 0x4
lbl_fn_8041CC78_000017DC:
    lfs f0, lbl_80886548
    li r0, 0x0
    stw r4, 0x8(r1)
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
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8041CC78_00001830
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_8041CC78_00001830:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8041CD1C(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_8041CD24(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0xc0(r3)
    li r4, 0x0
    bne lbl_fn_8041CD24_00001868
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8041CD24_0000186C
lbl_fn_8041CD24_00001868:
    li r4, 0x1
lbl_fn_8041CD24_0000186C:
    li r0, -0x1
    stw r4, 0xbc(r3)
    stw r0, 0x114(r3)
    blr
}

asm void fn_8041CD54(void)
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
    beq lbl_fn_8041CD54_000018E0
    lis r5, lbl_807531A0@ha
    li r3, 0x330
    addi r5, r5, lbl_807531A0@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8041CD54_000018E4
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8041CDD8
    b lbl_fn_8041CD54_000018E4
lbl_fn_8041CD54_000018E0:
    li r3, 0x0
lbl_fn_8041CD54_000018E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8041CDD8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_803EC568
    lis r3, lbl_8078DE58@ha
    lis r4, fn_802377B8@ha
    addi r3, r3, lbl_8078DE58@l
    lis r5, fn_800EF73C@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0xf4
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x6
    bl fn_806958E0
    lis r4, fn_80042740@ha
    lis r5, fn_80041C0C@ha
    addi r3, r31, 0x13c
    li r6, 0x20
    addi r4, r4, fn_80042740@l
    addi r5, r5, fn_80041C0C@l
    li r7, 0x6
    bl fn_806958E0
    addi r8, r31, 0x23c
    addi r3, r31, 0x278
    lfs f2, lbl_80886558
    cmplw r8, r3
    li r6, 0x0
    lfs f0, lbl_8088655C
    li r7, 0x3c
    li r5, -0x1
    li r0, 0x12c
    li r4, 0x1e
    stfs f2, 0x1fc(r31)
    stfs f2, 0x200(r31)
    stfs f2, 0x204(r31)
    stfs f2, 0x208(r31)
    stfs f2, 0x20c(r31)
    stfs f2, 0x210(r31)
    stw r7, 0x214(r31)
    stw r6, 0x218(r31)
    stw r5, 0x21c(r31)
    stw r6, 0x220(r31)
    stw r0, 0x224(r31)
    stw r6, 0x228(r31)
    stw r6, 0x22c(r31)
    stw r6, 0x230(r31)
    stw r4, 0x234(r31)
    stfs f0, 0x238(r31)
    bge lbl_fn_8041CDD8_000019FC
    addi r3, r3, 0xb
    li r0, 0xc
    subf r3, r8, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_8041CDD8_000019FC
lbl_fn_8041CDD8_000019E8:
    stw r6, 0x0(r8)
    stw r4, 0x4(r8)
    stfs f0, 0x8(r8)
    addi r8, r8, 0xc
    bdnz lbl_fn_8041CDD8_000019E8
lbl_fn_8041CDD8_000019FC:
    addi r3, r31, 0x2dc
    addi r6, r31, 0x288
    lfs f0, lbl_8088655C
    cmplw r6, r3
    li r5, 0x0
    li r4, 0x1e
    stw r5, 0x278(r31)
    stw r5, 0x27c(r31)
    stw r4, 0x280(r31)
    stfs f0, 0x284(r31)
    bge lbl_fn_8041CDD8_00001A54
    addi r3, r3, 0xb
    li r0, 0xc
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_8041CDD8_00001A54
lbl_fn_8041CDD8_00001A40:
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stfs f0, 0x8(r6)
    addi r6, r6, 0xc
    bdnz lbl_fn_8041CDD8_00001A40
lbl_fn_8041CDD8_00001A54:
    lis r4, lbl_807531A0@ha
    addi r3, r31, 0x2dc
    addi r4, r4, lbl_807531A0@l
    addi r4, r4, 0x1
    bl fn_800C1720
    lfs f0, lbl_80886558
    li r4, 0x0
    stfs f0, 0x10(r1)
    li r0, 0x1
    addi r5, r1, 0x10
    addi r6, r1, 0x8
    stfs f0, 0x14(r1)
    mr r3, r31
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_st f1, 0x2e0(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stw r4, 0x54(r31)
    psq_st f1, 0x2e8(r31), 0, 0
    stw r0, 0x2dc(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
