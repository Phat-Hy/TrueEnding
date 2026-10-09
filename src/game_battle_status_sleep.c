#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_80056DB8(void);
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
extern void fn_80097D7C(void);
extern void fn_8009EE30(void);
extern void fn_800A04A0(void);
extern void fn_800A08D4(void);
extern void fn_800B2180(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC288(void);
extern void fn_800EF73C(void);
extern void fn_802180A8(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
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
extern void fn_8049994C(void);
extern void fn_8049CDBC(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80753768[];
extern u8 lbl_80753810[];
extern u8 lbl_80753830[];
extern u8 lbl_8075387C[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_807775F8[];
extern u8 lbl_8078E6D8[];
extern u8 lbl_8078E770[];
extern u8 lbl_8078E808[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DFB8;
extern u32 lbl_8087DFBC;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886720;
extern u32 lbl_80886728;
extern u32 lbl_8088672C;
extern u32 lbl_80886730;
extern u32 lbl_80886734;
extern u32 lbl_80886738;
extern u32 lbl_8088673C;
extern u32 lbl_80886740;
extern u32 lbl_80886744;
extern u32 lbl_80886748;
extern u32 lbl_8088674C;
extern u32 lbl_80886750;
extern u32 lbl_80886758;
extern u32 lbl_8088675C;

/* Function declarations */
void fn_8042A98C(void);
void fn_8042AA7C(void);
void fn_8042AADC(void);
void fn_8042AB58(void);
void fn_8042AE60(void);
void fn_8042AFE4(void);
void fn_8042B0C0(void);
void fn_8042B134(void);
void fn_8042B1C4(void);
void fn_8042B228(void);
void fn_8042B358(void);
void fn_8042B35C(void);
void fn_8042B3BC(void);
void fn_8042B54C(void);
void fn_8042B56C(void);
void fn_8042B678(void);
void fn_8042B72C(void);
void fn_8042B77C(void);
void fn_8042B90C(void);
void fn_8042BE5C(void);
void fn_8042BECC(void);
void fn_8042BF38(void);
void fn_8042C174(void);
void fn_8042C1A4(void);
void fn_8042C1FC(void);
void fn_8042C210(void);
void fn_8042C214(void);
void fn_8042C21C(void);

asm void fn_8042A98C(void)
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
    lis r31, lbl_80753768@ha
    addi r31, r31, lbl_80753768@l
lbl_fn_8042A98C_000000AC:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8042A98C_000000C8
    addi r4, r31, 0x1
    bl fn_80682428
lbl_fn_8042A98C_000000C8:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042A98C_000000AC
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8042AA7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_8042AA7C_00000114
    li r3, 0x0
    b lbl_fn_8042AA7C_0000013C
lbl_fn_8042AA7C_00000114:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmplwi r0, 0xc
    ble lbl_fn_8042AA7C_0000012C
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_8042AA7C_0000012C:
    lwz r4, 0x54(r31)
    mr r3, r31
    bl fn_8042AE60
    lwz r3, 0x54(r31)
lbl_fn_8042AA7C_0000013C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042AADC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886720
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
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
    mr r3, r30
    mr r4, r31
    bl fn_8042AE60
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042AB58(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    addi r28, r1, 0x98
    addi r27, r1, 0x68
    addi r26, r1, 0x38
    li r25, 0x0
    li r31, 0x0
    lis r30, lbl_807C7030@ha
    b lbl_fn_8042AB58_000004A0
lbl_fn_8042AB58_00000218:
    lwz r0, 0x284(r22)
    add r6, r0, r31
    lwzx r0, r31, r0
    cmpwi r0, 0x0
    bne lbl_fn_8042AB58_0000037C
    lwz r29, 0x4(r6)
    addi r3, r1, 0x14
    lfs f7, 0x8(r6)
    lfs f0, 0x0(r23)
    psq_l f2, 0x10(r29), 0, 0
    fadds f9, f7, f0
    psq_st f2, 0x8(r28), 0, 0
    psq_l f3, 0x18(r29), 0, 0
    psq_l f4, 0x20(r29), 0, 0
    psq_l f5, 0x28(r29), 0, 0
    psq_l f6, 0x30(r29), 0, 0
    stfs f9, 0xa4(r1)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    lfs f7, 0x10(r6)
    lfs f0, 0x8(r23)
    psq_st f6, 0x28(r28), 0, 0
    fadds f8, f7, f0
    lfs f7, 0xc(r6)
    lfs f0, 0x4(r23)
    stfs f8, 0xc4(r1)
    fadds f0, f7, f0
    psq_l f2, 0x8(r28), 0, 0
    psq_st f1, 0x8(r29), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f2, 0x10(r29), 0, 0
    lfs f11, 0xc0(r1)
    stfs f0, 0xb4(r1)
    lfs f10, 0xb0(r1)
    psq_st f3, 0x18(r29), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_st f4, 0x20(r29), 0, 0
    lfs f7, 0xa0(r1)
    psq_st f5, 0x28(r29), 0, 0
    psq_st f6, 0x30(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    stfs f9, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f7, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0xbc(r1)
    fmr f30, f1
    lfs f7, 0xac(r1)
    addi r3, r1, 0x20
    lfs f0, 0x9c(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0xb8(r1)
    fmr f31, f1
    lfs f7, 0xa8(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x98(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_8042AB58_00000348
    b lbl_fn_8042AB58_0000034C
lbl_fn_8042AB58_00000348:
    fmr f7, f0
lbl_fn_8042AB58_0000034C:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8042AB58_0000035C
    b lbl_fn_8042AB58_00000374
lbl_fn_8042AB58_0000035C:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8042AB58_00000370
    b lbl_fn_8042AB58_00000374
lbl_fn_8042AB58_00000370:
    fmr f8, f0
lbl_fn_8042AB58_00000374:
    stfs f8, 0x54(r29)
    b lbl_fn_8042AB58_00000498
lbl_fn_8042AB58_0000037C:
    cmpwi r0, 0x1
    bne lbl_fn_8042AB58_00000404
    lwz r3, 0x4(r6)
    mr r4, r27
    psq_l f1, 0x30(r3), 0, 0
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    lfs f7, 0x10(r6)
    lfs f0, 0x8(r23)
    lfs f9, 0xc(r6)
    fadds f10, f7, f0
    lfs f8, 0x4(r23)
    lfs f7, 0x8(r6)
    lfs f0, 0x0(r23)
    fadds f8, f9, f8
    stfs f10, 0x4c(r1)
    fadds f0, f7, f0
    stfs f8, 0x84(r1)
    stfs f0, 0x74(r1)
    stfs f10, 0x94(r1)
    stfs f0, 0x44(r1)
    lwz r3, 0x4(r6)
    stfs f8, 0x48(r1)
    bl fn_8009EE30
    b lbl_fn_8042AB58_00000498
lbl_fn_8042AB58_00000404:
    cmpwi r0, 0x2
    bne lbl_fn_8042AB58_00000450
    lfs f9, 0xc(r6)
    lfs f8, 0x4(r23)
    lfs f7, 0x8(r6)
    fadds f9, f9, f8
    lfs f0, 0x0(r23)
    lfs f8, 0x10(r6)
    fadds f7, f7, f0
    lfs f0, 0x8(r23)
    stfs f9, 0x3c(r1)
    fadds f2, f8, f0
    lwz r3, 0x4(r6)
    stfs f7, 0x38(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x6c(r3), 0, 0
    stfs f2, 0x40(r1)
    stfs f2, 0x74(r3)
    b lbl_fn_8042AB58_00000498
lbl_fn_8042AB58_00000450:
    cmpwi r0, 0x3
    bne lbl_fn_8042AB58_00000498
    lfs f7, 0x8(r23)
    addi r4, r1, 0x5c
    lfs f0, 0x8(r24)
    addi r5, r30, lbl_807C7030@l
    lfs f9, 0x4(r23)
    fsubs f10, f7, f0
    lfs f8, 0x4(r24)
    lfs f7, 0x0(r23)
    lfs f0, 0x0(r24)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f10, 0x64(r1)
    lwz r3, 0x4(r6)
    bl fn_8049994C
lbl_fn_8042AB58_00000498:
    addi r25, r25, 0x1
    addi r31, r31, 0x14
lbl_fn_8042AB58_000004A0:
    lwz r0, 0x280(r22)
    cmplw r25, r0
    blt lbl_fn_8042AB58_00000218
    addi r11, r1, 0xf0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    bl _restgpr_22
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8042AE60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    ble lbl_fn_8042AE60_0000050C
    cmpwi r4, 0x3
    beq lbl_fn_8042AE60_00000558
    cmpwi r4, 0x5
    beq lbl_fn_8042AE60_000005A8
    cmpwi r4, 0x9
    beq lbl_fn_8042AE60_000005F8
    b lbl_fn_8042AE60_00000644
lbl_fn_8042AE60_0000050C:
    lfs f1, lbl_80886720
    addi r4, r3, 0x240
    addi r5, r3, 0x200
    addi r6, r3, 0x26c
    addi r3, r3, 0x104
    bl fn_800A04A0
    lfs f2, 0x24c(r31)
    addi r4, r31, 0x294
    psq_l f1, 0x244(r31), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r31, 0x2a0
    stfs f2, 0x29c(r31)
    bl fn_8042AB58
    psq_l f1, 0x294(r31), 0, 0
    lfs f2, 0x29c(r31)
    psq_st f1, 0x2a0(r31), 0, 0
    stfs f2, 0x2a8(r31)
    b lbl_fn_8042AE60_00000644
lbl_fn_8042AE60_00000558:
    addi r3, r3, 0x104
    bl fn_800A08D4
    addi r3, r31, 0x104
    addi r4, r31, 0x240
    addi r5, r31, 0x200
    addi r6, r31, 0x26c
    bl fn_800A04A0
    lfs f2, 0x24c(r31)
    addi r4, r31, 0x294
    psq_l f1, 0x244(r31), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r31, 0x2a0
    stfs f2, 0x29c(r31)
    bl fn_8042AB58
    psq_l f1, 0x294(r31), 0, 0
    lfs f2, 0x29c(r31)
    psq_st f1, 0x2a0(r31), 0, 0
    stfs f2, 0x2a8(r31)
    b lbl_fn_8042AE60_00000644
lbl_fn_8042AE60_000005A8:
    addi r3, r3, 0x110
    bl fn_800A08D4
    addi r3, r31, 0x110
    addi r4, r31, 0x240
    addi r5, r31, 0x200
    addi r6, r31, 0x26c
    bl fn_800A04A0
    lfs f2, 0x24c(r31)
    addi r4, r31, 0x294
    psq_l f1, 0x244(r31), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r31, 0x2a0
    stfs f2, 0x29c(r31)
    bl fn_8042AB58
    psq_l f1, 0x294(r31), 0, 0
    lfs f2, 0x29c(r31)
    psq_st f1, 0x2a0(r31), 0, 0
    stfs f2, 0x2a8(r31)
    b lbl_fn_8042AE60_00000644
lbl_fn_8042AE60_000005F8:
    addi r3, r3, 0x134
    bl fn_800A08D4
    addi r3, r31, 0x134
    addi r4, r31, 0x240
    addi r5, r31, 0x200
    addi r6, r31, 0x26c
    bl fn_800A04A0
    lfs f2, 0x24c(r31)
    addi r4, r31, 0x294
    psq_l f1, 0x244(r31), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r31, 0x2a0
    stfs f2, 0x29c(r31)
    bl fn_8042AB58
    psq_l f1, 0x294(r31), 0, 0
    lfs f2, 0x29c(r31)
    psq_st f1, 0x2a0(r31), 0, 0
    stfs f2, 0x2a8(r31)
lbl_fn_8042AE60_00000644:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042AFE4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8042AFE4_00000710
    lis r5, lbl_80753810@ha
    li r3, 0x188
    addi r5, r5, lbl_80753810@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8042AFE4_00000708
    mr r4, r28
    mr r5, r29
    mr r6, r31
    bl fn_803EC568
    lis r3, lbl_8078E6D8@ha
    lis r4, fn_802377B8@ha
    addi r3, r3, lbl_8078E6D8@l
    stw r3, 0x0(r30)
    li r31, 0x0
    lis r5, fn_800EF73C@ha
    stw r31, 0xf4(r30)
    addi r3, r30, 0xf8
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x9
    bl fn_806958E0
    stw r31, 0x54(r30)
    addi r3, r30, 0x164
    li r4, 0x0
    li r5, 0x24
    bl memset
lbl_fn_8042AFE4_00000708:
    mr r3, r30
    b lbl_fn_8042AFE4_00000714
lbl_fn_8042AFE4_00000710:
    li r3, 0x0
lbl_fn_8042AFE4_00000714:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042B0C0(void)
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
    beq lbl_fn_8042B0C0_0000078C
    lis r4, fn_800EF73C@ha
    li r5, 0xc
    addi r4, r4, fn_800EF73C@l
    li r6, 0x9
    addi r3, r3, 0xf8
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8042B0C0_0000078C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8042B0C0_0000078C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042B134(void)
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
    bne lbl_fn_8042B134_0000081C
    mr r3, r30
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8042B134_0000081C
    li r31, 0x0
lbl_fn_8042B134_000007E0:
    lwz r3, 0x164(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8042B134_00000804
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x164(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8042B134_00000804:
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmpwi r31, 0x9
    blt lbl_fn_8042B134_000007E0
    li r3, 0x1
    b lbl_fn_8042B134_00000820
lbl_fn_8042B134_0000081C:
    li r3, 0x0
lbl_fn_8042B134_00000820:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042B1C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lwz r4, 0x58(r3)
    cmpwi r4, 0x0
    ble lbl_fn_8042B1C4_0000088C
    lfs f0, lbl_80886728
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
lbl_fn_8042B1C4_0000088C:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042B228(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r5, 0xf4(r3)
    lwz r0, 0x54(r3)
    cmpw r0, r5
    beq lbl_fn_8042B228_000009B4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x54(r31)
    mulli r0, r0, 0xc
    add r3, r31, r0
    lwz r0, 0xf8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8042B228_00000964
    lwz r4, lbl_8087F3C0
    li r30, 0x1
    mr r3, r31
    stw r30, 0xb8(r4)
    lwz r4, 0x54(r31)
    bl fn_80232B7C
    lwz r3, 0x54(r31)
    li r0, -0x1
    lfs f1, 0x90(r31)
    addi r7, r31, 0x6c
    lfs f0, lbl_8088672C
    mulli r3, r3, 0xc
    stfs f0, 0x10(r1)
    addi r8, r31, 0x78
    addi r9, r1, 0x10
    stfs f0, 0x14(r1)
    add r3, r31, r3
    addi r4, r3, 0xf8
    li r5, 0x0
    stfs f0, 0x18(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_8042B228_00000964:
    lwz r0, 0x54(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x164(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8042B228_00000988
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8042B228_00000988:
    lwz r0, 0xf4(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x164(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8042B228_000009AC
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8042B228_000009AC:
    lwz r0, 0x54(r31)
    stw r0, 0xf4(r31)
lbl_fn_8042B228_000009B4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042B358(void)
{
    nofralloc
    blr
}

asm void fn_8042B35C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0xf8
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_8042B35C_000009EC:
    mr r3, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8042B35C_00000A04
    li r3, 0x1
    b lbl_fn_8042B35C_00000A18
lbl_fn_8042B35C_00000A04:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x9
    blt lbl_fn_8042B35C_000009EC
    li r3, 0x0
lbl_fn_8042B35C_00000A18:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042B3BC(void)
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
    mr r30, r3
    addi r3, r28, 0x60
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
    lis r31, lbl_80753810@ha
    li r29, 0x0
    addi r31, r31, lbl_80753810@l
lbl_fn_8042B3BC_00000AE8:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8042B3BC_00000B90
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042B3BC_00000B40
    addi r29, r29, 0x1
    cmpwi r29, 0x9
    blt lbl_fn_8042B3BC_00000B20
    li r29, 0x8
lbl_fn_8042B3BC_00000B20:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mulli r0, r29, 0xc
    mr r4, r3
    add r3, r28, r0
    addi r3, r3, 0xf8
    bl fn_8023780C
    b lbl_fn_8042B3BC_00000B90
lbl_fn_8042B3BC_00000B40:
    mr r3, r30
    addi r4, r31, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042B3BC_00000B90
    slwi r0, r29, 2
    mr r3, r28
    add r30, r28, r0
    addi r5, r1, 0x8
    li r4, 0x8
    bl fn_8049CDBC
    stw r3, 0x164(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x164(r30)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8042B3BC_00000B90
    addi r3, r3, 0x54
    bl fn_800B2180
lbl_fn_8042B3BC_00000B90:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042B3BC_00000AE8
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8042B54C(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8042B54C_00000BD0
    li r3, 0x0
    blr
lbl_fn_8042B54C_00000BD0:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    mr r3, r0
    blr
}

asm void fn_8042B56C(void)
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
    beq lbl_fn_8042B56C_00000CC8
    lis r5, lbl_80753830@ha
    li r3, 0x580
    addi r5, r5, lbl_80753830@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8042B56C_00000CC0
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r4, lbl_8078E770@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078E770@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x4c4
    bl fn_80057F28
    addi r3, r31, 0x54c
    bl fn_802377B8
    lfs f0, lbl_80886730
    li r0, 0x0
    stfs f0, 0x558(r31)
    lfs f2, lbl_80886734
    stfs f2, 0x55c(r31)
    lfs f0, lbl_80886738
    stfs f2, 0x560(r31)
    stfs f0, 0x564(r31)
    stb r0, 0x568(r31)
    lfs f1, lbl_8087DFB8
    stfs f1, 0x56c(r31)
    lfs f0, lbl_8087DFB8
    stfs f0, 0x570(r31)
    fsubs f0, f0, f1
    lfs f1, lbl_8087DFB8
    stfs f1, 0x574(r31)
    stfs f0, 0x578(r31)
    stfs f2, 0x57c(r31)
    stw r0, 0x54(r31)
lbl_fn_8042B56C_00000CC0:
    mr r3, r31
    b lbl_fn_8042B56C_00000CCC
lbl_fn_8042B56C_00000CC8:
    li r3, 0x0
lbl_fn_8042B56C_00000CCC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042B678(void)
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
    beq lbl_fn_8042B678_00000D80
    addic. r31, r3, 0x54c
    beq lbl_fn_8042B678_00000D34
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8042B678_00000D34
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8042B678_00000D34:
    addic. r31, r29, 0x4c4
    beq lbl_fn_8042B678_00000D58
    addic. r3, r31, 0x3c
    beq lbl_fn_8042B678_00000D4C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8042B678_00000D4C:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8042B678_00000D58:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8042B678_00000D80
    mr r3, r29
    bl dtor_80084684
lbl_fn_8042B678_00000D80:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042B72C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8042B72C_00000DD8
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    stw r31, 0x4d0(r31)
    li r3, 0x1
    b lbl_fn_8042B72C_00000DDC
lbl_fn_8042B72C_00000DD8:
    li r3, 0x0
lbl_fn_8042B72C_00000DDC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042B77C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
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
    beq lbl_fn_8042B77C_00000E54
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042B77C_00000E54:
    lfs f1, 0x7c(r31)
    addi r3, r1, 0x28
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, 0x6c(r31)
    addi r4, r1, 0x28
    stfs f0, 0x34(r1)
    addi r3, r31, 0x4c4
    psq_l f1, 0x0(r4), 0, 0
    lfs f0, 0x70(r31)
    stfs f0, 0x44(r1)
    psq_l f2, 0x8(r4), 0, 0
    lfs f0, 0x74(r31)
    stfs f0, 0x54(r1)
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    bl fn_800588FC
    lwz r0, 0x4cc(r31)
    addi r3, r31, 0xf4
    lfs f1, lbl_80886734
    li r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x4cc(r31)
    lfs f2, lbl_8088673C
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f8, lbl_80886734
    li r6, 0x0
    lfs f0, lbl_80886738
    mr r3, r31
    stfs f8, 0x32c(r31)
    addi r4, r1, 0x8
    lwz r5, 0x58(r31)
    stfs f8, 0x328(r31)
    addi r0, r5, 0x1
    stfs f8, 0x55c(r31)
    stfs f8, 0x560(r31)
    stfs f0, 0x564(r31)
    stb r6, 0x568(r31)
    lfs f7, lbl_8087DFBC
    stfs f7, 0x56c(r31)
    lfs f0, lbl_8087DFBC
    stfs f0, 0x570(r31)
    fsubs f0, f0, f7
    lfs f7, lbl_8087DFBC
    stfs f7, 0x574(r31)
    stfs f0, 0x578(r31)
    stw r0, 0x8(r1)
    stw r6, 0xc(r1)
    stw r6, 0x10(r1)
    stw r6, 0x14(r1)
    stw r6, 0x18(r1)
    stfs f8, 0x1c(r1)
    stfs f8, 0x20(r1)
    stfs f8, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8042B90C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8042B90C_00000FD0
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8042B90C_00000FD0:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    beq lbl_fn_8042B90C_0000149C
    lwz r7, 0x260(r31)
    addi r3, r1, 0x44
    addi r4, r1, 0x68
    addi r6, r1, 0x74
    psq_l f1, 0x10(r7), 0, 0
    addi r5, r1, 0x38
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x18(r7)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x1c(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f7, 0x68(r1)
    lfs f8, 0x74(r1)
    lfs f0, lbl_80886734
    fsubs f7, f8, f7
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    lfs f2, 0x24(r7)
    fcmpo cr0, f7, f0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x40(r1)
    stfs f2, 0x7c(r1)
    bge lbl_fn_8042B90C_0000103C
    fneg f7, f7
lbl_fn_8042B90C_0000103C:
    lfs f0, lbl_80886740
    addi r30, r1, 0xb0
    psq_l f1, 0xfc(r31), 0, 0
    mr r3, r30
    psq_l f2, 0x104(r31), 0, 0
    fmuls f30, f7, f0
    psq_l f3, 0x10c(r31), 0, 0
    mr r4, r30
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    bl fn_805F8CA0
    lwz r3, lbl_8087F8A0
    lfs f29, 0x558(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8042B90C_00001104
    lfs f0, lbl_80886744
    addi r30, r1, 0x5c
    lwz r29, 0x48(r3)
    fmuls f30, f0, f30
    lfs f31, lbl_80886734
    b lbl_fn_8042B90C_000010F8
lbl_fn_8042B90C_000010AC:
    psq_l f1, 0x528(r29), 0, 0
    mr r4, r30
    lfs f2, 0x530(r29)
    mr r5, r30
    stfs f2, 0x64(r1)
    addi r3, r1, 0xb0
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F93C0
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f30
    bge lbl_fn_8042B90C_000010F4
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f31
    bge lbl_fn_8042B90C_000010E8
    fneg f0, f0
lbl_fn_8042B90C_000010E8:
    fcmpo cr0, f0, f29
    bge lbl_fn_8042B90C_000010F4
    fmr f29, f0
lbl_fn_8042B90C_000010F4:
    lwz r29, 0x14ac(r29)
lbl_fn_8042B90C_000010F8:
    cmpwi r29, 0x0
    bne lbl_fn_8042B90C_000010AC
    b lbl_fn_8042B90C_00001140
lbl_fn_8042B90C_00001104:
    lwz r5, lbl_8087EFB4
    addi r4, r1, 0x50
    mr r3, r30
    psq_l f1, 0x10c(r5), 0, 0
    lfs f2, 0x114(r5)
    mr r5, r4
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F93C0
    lfs f0, 0x58(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_8042B90C_00001140
    fmr f29, f0
lbl_fn_8042B90C_00001140:
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, 0x558(r31)
    lfs f7, lbl_80886738
    fdivs f8, f29, f0
    lfs f9, 0x328(r31)
    lfs f0, lbl_80886748
    fsubs f7, f7, f8
    fmuls f29, f7, f1
    fsubs f7, f29, f9
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_8042B90C_00001218
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8042B90C_00001218
    mr r4, r31
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_8042B90C_00001218
    lwz r0, 0x54c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8042B90C_00001218
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80886734
    li r11, -0x1
    lfs f1, lbl_80886738
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x54c
    lwz r3, lbl_8087F3C0
    addi r5, r31, 0xf4
    stfs f0, 0x20(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x24(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_8042B90C_00001218:
    lfs f7, 0x574(r31)
    li r0, 0x1
    lfs f10, lbl_80886734
    lfs f9, lbl_8088674C
    fsubs f0, f7, f7
    lfs f8, lbl_80886750
    fcmpo cr0, f9, f10
    stfs f10, 0x55c(r31)
    stfs f9, 0x560(r31)
    stfs f8, 0x564(r31)
    stb r0, 0x568(r31)
    stfs f7, 0x56c(r31)
    stfs f29, 0x570(r31)
    stfs f0, 0x578(r31)
    cror eq, lt, eq
    bne lbl_fn_8042B90C_00001280
    fcmpo cr0, f8, f10
    cror eq, gt, eq
    bne lbl_fn_8042B90C_00001270
    stfs f29, 0x574(r31)
    stfs f9, 0x55c(r31)
    b lbl_fn_8042B90C_00001278
lbl_fn_8042B90C_00001270:
    stfs f7, 0x574(r31)
    stfs f10, 0x55c(r31)
lbl_fn_8042B90C_00001278:
    li r0, 0x0
    stb r0, 0x568(r31)
lbl_fn_8042B90C_00001280:
    lbz r0, 0x568(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8042B90C_000013B4
    lfs f0, 0x55c(r31)
    lfs f9, 0x564(r31)
    lfs f8, lbl_80886734
    fadds f0, f0, f9
    fcmpo cr0, f9, f8
    stfs f0, 0x55c(r31)
    cror eq, gt, eq
    bne lbl_fn_8042B90C_00001330
    fcmpo cr0, f0, f8
    bge lbl_fn_8042B90C_000012C4
    lfs f0, 0x56c(r31)
    stfs f0, 0x574(r31)
    stfs f8, 0x55c(r31)
    b lbl_fn_8042B90C_000013B4
lbl_fn_8042B90C_000012C4:
    lfs f7, 0x560(r31)
    fcmpo cr0, f0, f7
    bge lbl_fn_8042B90C_000012FC
    fdivs f9, f0, f7
    lfs f7, 0x570(r31)
    lfs f8, 0x56c(r31)
    lfs f0, 0x574(r31)
    fsubs f7, f7, f8
    fmuls f7, f9, f7
    fadds f7, f8, f7
    stfs f7, 0x574(r31)
    fsubs f0, f7, f0
    stfs f0, 0x578(r31)
    b lbl_fn_8042B90C_000013B4
lbl_fn_8042B90C_000012FC:
    fcmpo cr0, f9, f8
    cror eq, gt, eq
    bne lbl_fn_8042B90C_00001318
    lfs f0, 0x570(r31)
    stfs f0, 0x574(r31)
    stfs f7, 0x55c(r31)
    b lbl_fn_8042B90C_00001324
lbl_fn_8042B90C_00001318:
    lfs f0, 0x56c(r31)
    stfs f0, 0x574(r31)
    stfs f8, 0x55c(r31)
lbl_fn_8042B90C_00001324:
    li r0, 0x0
    stb r0, 0x568(r31)
    b lbl_fn_8042B90C_000013B4
lbl_fn_8042B90C_00001330:
    fcmpo cr0, f0, f8
    bge lbl_fn_8042B90C_00001370
    fcmpo cr0, f9, f8
    cror eq, gt, eq
    bne lbl_fn_8042B90C_00001358
    lfs f7, 0x570(r31)
    lfs f0, 0x560(r31)
    stfs f7, 0x574(r31)
    stfs f0, 0x55c(r31)
    b lbl_fn_8042B90C_00001364
lbl_fn_8042B90C_00001358:
    lfs f0, 0x56c(r31)
    stfs f0, 0x574(r31)
    stfs f8, 0x55c(r31)
lbl_fn_8042B90C_00001364:
    li r0, 0x0
    stb r0, 0x568(r31)
    b lbl_fn_8042B90C_000013B4
lbl_fn_8042B90C_00001370:
    lfs f7, 0x560(r31)
    fcmpo cr0, f0, f7
    bge lbl_fn_8042B90C_000013A8
    fdivs f9, f0, f7
    lfs f7, 0x570(r31)
    lfs f8, 0x56c(r31)
    lfs f0, 0x574(r31)
    fsubs f7, f7, f8
    fmuls f7, f9, f7
    fadds f7, f8, f7
    stfs f7, 0x574(r31)
    fsubs f0, f7, f0
    stfs f0, 0x578(r31)
    b lbl_fn_8042B90C_000013B4
lbl_fn_8042B90C_000013A8:
    lfs f0, 0x570(r31)
    stfs f0, 0x574(r31)
    stfs f7, 0x55c(r31)
lbl_fn_8042B90C_000013B4:
    lfs f0, 0x574(r31)
    mr r3, r31
    stfs f0, 0x328(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042B90C_000013F8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8042B90C_000013F8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042B90C_00001438
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042B90C_00001438:
    lfs f1, 0x7c(r31)
    addi r3, r1, 0x80
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, 0x6c(r31)
    addi r4, r1, 0x80
    stfs f0, 0x8c(r1)
    addi r3, r31, 0x4c4
    psq_l f1, 0x0(r4), 0, 0
    lfs f0, 0x70(r31)
    stfs f0, 0x9c(r1)
    psq_l f2, 0x8(r4), 0, 0
    lfs f0, 0x74(r31)
    stfs f0, 0xac(r1)
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    bl fn_800588FC
lbl_fn_8042B90C_0000149C:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8042BE5C(void)
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
    beq lbl_fn_8042BE5C_0000152C
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042BE5C_0000152C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_8042BE5C_0000152C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042BECC(void)
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
    beq lbl_fn_8042BECC_0000156C
    li r3, 0x1
    b lbl_fn_8042BECC_00001598
lbl_fn_8042BECC_0000156C:
    addi r3, r31, 0x4c4
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_8042BECC_00001584
    li r3, 0x1
    b lbl_fn_8042BECC_00001598
lbl_fn_8042BECC_00001584:
    addi r3, r31, 0x54c
    bl fn_80237874
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8042BECC_00001598:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042BF38(void)
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
    lis r31, lbl_80753830@ha
    addi r31, r31, lbl_80753830@l
lbl_fn_8042BF38_0000165C:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8042BF38_000017BC
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042BF38_000016B0
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
    b lbl_fn_8042BF38_000017BC
lbl_fn_8042BF38_000016B0:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042BF38_000016F8
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
    b lbl_fn_8042BF38_000017BC
lbl_fn_8042BF38_000016F8:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042BF38_00001740
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
    b lbl_fn_8042BF38_000017BC
lbl_fn_8042BF38_00001740:
    mr r3, r30
    addi r4, r31, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042BF38_0000176C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x4c4
    bl fn_80058078
    b lbl_fn_8042BF38_000017BC
lbl_fn_8042BF38_0000176C:
    mr r3, r30
    addi r4, r31, 0x25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042BF38_00001798
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x54c
    bl fn_8023780C
    b lbl_fn_8042BF38_000017BC
lbl_fn_8042BF38_00001798:
    mr r3, r30
    addi r4, r31, 0x29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042BF38_000017BC
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x558(r29)
lbl_fn_8042BF38_000017BC:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042BF38_0000165C
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_8042C174(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8042C174_000017F8
    li r3, 0x0
    blr
lbl_fn_8042C174_000017F8:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmplwi r0, 0x2
    ble lbl_fn_8042C174_00001810
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_8042C174_00001810:
    lwz r3, 0x54(r3)
    blr
}

asm void fn_8042C1A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886734
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

asm void fn_8042C1FC(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8042C210(void)
{
    nofralloc
    blr
}

asm void fn_8042C214(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_8042C21C(void)
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
    beq lbl_fn_8042C21C_0000195C
    lis r5, lbl_8075387C@ha
    li r3, 0x880
    addi r5, r5, lbl_8075387C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8042C21C_00001954
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r4, lbl_8078E808@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078E808@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r30, r31, 0x4c4
    li r4, 0x2
    mr r3, r30
    bl fn_80056DB8
    lis r3, lbl_807775F8@ha
    lfs f1, lbl_80886758
    addi r3, r3, lbl_807775F8@l
    stw r3, 0x0(r30)
    lfs f0, lbl_8088675C
    li r0, 0x0
    stfs f1, 0x848(r31)
    stfs f0, 0x84c(r31)
    stfs f0, 0x850(r31)
    stfs f0, 0x878(r31)
    stw r0, 0x54(r31)
    stw r0, 0x854(r31)
lbl_fn_8042C21C_00001954:
    mr r3, r31
    b lbl_fn_8042C21C_00001960
lbl_fn_8042C21C_0000195C:
    li r3, 0x0
lbl_fn_8042C21C_00001960:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
