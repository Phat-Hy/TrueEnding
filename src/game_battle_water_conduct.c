#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80056DB8(void);
extern void fn_80057F28(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092F1C(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_802180A8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803EC758(void);
extern void fn_803EC7A0(void);
extern void fn_803ED774(void);
extern void fn_803F11F8(void);
extern void fn_8041B4D8(void);
extern void fn_8041B724(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068A850(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80753038[];
extern u8 lbl_80753050[];
extern u8 lbl_80766768[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80777668[];
extern u8 lbl_8078DC64[];
extern u8 lbl_8078DC70[];
extern u8 lbl_8078DC7C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_808864F8;
extern u32 lbl_808864FC;
extern u32 lbl_80886504;
extern u32 lbl_80886508;
extern u32 lbl_8088650C;
extern u32 lbl_80886510;
extern u32 lbl_80886514;
extern u32 lbl_80886518;
extern u32 lbl_8088651C;
extern u32 lbl_80886520;
extern u32 lbl_80886524;

/* Function declarations */
void fn_80419A48(void);
void fn_80419AFC(void);
void fn_80419C00(void);
void fn_8041A488(void);
void fn_8041A8DC(void);
void fn_8041AAC0(void);
void fn_8041AC58(void);
void fn_8041ACD0(void);
void fn_8041AD30(void);
void fn_8041AE70(void);
void fn_8041AF48(void);
void fn_8041AFA8(void);
void fn_8041B018(void);
void fn_8041B058(void);
void fn_8041B094(void);
void fn_8041B27C(void);
void fn_8041B284(void);
void fn_8041B28C(void);

asm void fn_80419A48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x814(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80419A48_0000002C
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80419A48_000000A0
lbl_fn_80419A48_0000002C:
    lwz r5, 0x54(r3)
    cmpwi r5, 0x0
    bne lbl_fn_80419A48_0000003C
    b lbl_fn_80419A48_000000A0
lbl_fn_80419A48_0000003C:
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80419A48_000000A0
    mulli r0, r5, 0x28
    add r3, r3, r0
    lwz r0, 0x52c(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80419A48_000000A0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80419A48_000000A0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_80419A48_000000A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80419AFC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80419AFC_000000E4
    li r3, 0x1
    b lbl_fn_80419AFC_000001A0
lbl_fn_80419AFC_000000E4:
    lwz r0, 0x4c4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80419AFC_00000110
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_80419AFC_0000012C
lbl_fn_80419AFC_00000110:
    lis r5, lbl_8078DC64@ha
    lwzu r4, lbl_8078DC64@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_80419AFC_0000012C:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80419AFC_0000016C
    lwz r3, 0x4c4(r30)
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_80419AFC_0000016C
    li r3, 0x1
    b lbl_fn_80419AFC_000001A0
lbl_fn_80419AFC_0000016C:
    addi r31, r30, 0x4c8
    li r30, 0x0
lbl_fn_80419AFC_00000174:
    mr r3, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80419AFC_0000018C
    li r3, 0x1
    b lbl_fn_80419AFC_000001A0
lbl_fn_80419AFC_0000018C:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x7
    blt lbl_fn_80419AFC_00000174
    li r3, 0x0
lbl_fn_80419AFC_000001A0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80419C00(void)
{
    nofralloc
    stwu r1, -0x890(r1)
    mflr r0
    stw r0, 0x894(r1)
    li r0, 0x888
    addi r11, r1, 0x870
    stfd f31, 0x880(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x878
    stfd f30, 0x870(r1)
    psq_stx f30, r1, r0, 0, 0
    bl _savegpr_22
    mr r23, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r25, r3
    addi r3, r23, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r27, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x210(r1)
    mr r24, r3
    addi r3, r1, 0x220
    stw r27, 0x214(r1)
    li r4, 0x0
    li r5, 0x400
    stw r27, 0x218(r1)
    stw r27, 0x21c(r1)
    stw r27, 0x840(r1)
    bl memset
    addi r3, r1, 0x820
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x210(r1)
    mr r4, r24
    mr r5, r25
    addi r3, r1, 0x210
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x210
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x210(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r28, lbl_80753050@ha
    lis r31, lbl_80777668@ha
    lfs f30, lbl_808864F8
    addi r28, r28, lbl_80753050@l
    lfs f31, lbl_80886508
    addi r31, r31, lbl_80777668@l
    addi r25, r1, 0x30
    addi r26, r1, 0x20
    addi r24, r1, 0x100
    li r29, 0x1
lbl_fn_80419C00_0000029C:
    addi r3, r1, 0x210
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r22, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80419C00_00000A00
    addi r4, r28, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_000002F0
    addi r3, r1, 0x210
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r23, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r23
    addi r4, r23, 0xf4
    addi r5, r1, 0x210
    bl fn_803EC7A0
    b lbl_fn_80419C00_00000A00
lbl_fn_80419C00_000002F0:
    mr r3, r22
    addi r4, r28, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_00000338
    addi r3, r1, 0x210
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x110
    bl strcpy
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r23, 0xf4
    addi r4, r1, 0x110
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_80419C00_00000A00
lbl_fn_80419C00_00000338:
    mr r3, r22
    addi r4, r28, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_00000380
    addi r3, r1, 0x210
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x110
    bl strcpy
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r23, 0xf4
    addi r5, r1, 0x110
    bl fn_80097A88
    b lbl_fn_80419C00_00000A00
lbl_fn_80419C00_00000380:
    mr r3, r22
    addi r4, r28, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_000003FC
    mr r5, r28
    mr r6, r28
    li r3, 0x88
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80419C00_000003B8
    bl fn_80057F28
lbl_fn_80419C00_000003B8:
    lwz r0, 0x4c4(r23)
    cmpwi r0, 0x0
    stw r3, 0x4c4(r23)
    beq lbl_fn_80419C00_000003E0
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80419C00_000003E0:
    lwz r22, 0x4c4(r23)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r22
    bl fn_80058078
    b lbl_fn_80419C00_00000A00
lbl_fn_80419C00_000003FC:
    mr r3, r22
    addi r4, r28, 0x25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_00000448
    addi r3, r1, 0x210
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x110
    bl strcpy
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_80684600
    mulli r0, r3, 0xc
    addi r4, r1, 0x110
    add r3, r23, r0
    addi r3, r3, 0x4c8
    bl fn_8023780C
    b lbl_fn_80419C00_00000A00
lbl_fn_80419C00_00000448:
    mr r3, r22
    addi r4, r28, 0x29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_00000820
    stw r27, 0xe8(r1)
    addi r3, r1, 0x210
    stfs f30, 0xec(r1)
    stb r29, 0xf0(r1)
    stb r29, 0xf1(r1)
    stfs f30, 0xf4(r1)
    stw r27, 0xf8(r1)
    stw r27, 0xfc(r1)
    stfs f30, 0x100(r1)
    stfs f30, 0x104(r1)
    stfs f30, 0x108(r1)
    stfs f30, 0x10c(r1)
    bl fn_8005B9CC
    bl fn_80684600
    mr r30, r3
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_802180A8
    stw r3, 0xe8(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xec(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_80684600
    subi r0, r3, 0x1
    addi r3, r1, 0x210
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0xf0(r1)
    bl fn_8005B9CC
    bl fn_80684600
    subi r0, r3, 0x1
    addi r3, r1, 0x210
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0xf1(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xf4(r1)
lbl_fn_80419C00_00000500:
    addi r3, r1, 0x210
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r22, r3
    extsb. r0, r0
    beq lbl_fn_80419C00_000007C4
    addi r4, r28, 0x2f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_0000062C
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x30(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x34(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x38(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    lfs f1, 0x7c(r23)
    bl fn_805F8E70
    addi r4, r1, 0x30
    addi r3, r1, 0xb8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x30(r1)
    addi r3, r1, 0x210
    lfs f0, 0x6c(r23)
    lfs f4, 0x34(r1)
    fadds f0, f3, f0
    lfs f3, 0x38(r1)
    stfs f0, 0x30(r1)
    lfs f0, 0x70(r23)
    fadds f0, f4, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x74(r23)
    psq_l f1, 0x0(r25), 0, 0
    fadds f2, f3, f0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x38(r1)
    stfs f2, 0x28(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    frsp f0, f1
    stfs f1, 0x2c(r1)
    fcmpo cr0, f0, f30
    ble lbl_fn_80419C00_00000500
    mr r5, r28
    mr r6, r28
    li r3, 0x4c
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_80419C00_00000600
    li r4, 0x0
    bl fn_80056DB8
    stw r31, 0x0(r22)
lbl_fn_80419C00_00000600:
    stw r22, 0xfc(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x3c(r22), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x44(r22)
    lfs f0, 0x2c(r1)
    stfs f0, 0x48(r22)
    lwz r0, 0xf8(r1)
    ori r0, r0, 0x1
    stw r0, 0xf8(r1)
    b lbl_fn_80419C00_00000500
lbl_fn_80419C00_0000062C:
    mr r3, r22
    addi r4, r28, 0x35
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_00000650
    lwz r0, 0xf8(r1)
    ori r0, r0, 0x2
    stw r0, 0xf8(r1)
    b lbl_fn_80419C00_00000500
lbl_fn_80419C00_00000650:
    mr r3, r22
    addi r4, r28, 0x3d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_00000674
    lwz r0, 0xf8(r1)
    ori r0, r0, 0x4
    stw r0, 0xf8(r1)
    b lbl_fn_80419C00_00000500
lbl_fn_80419C00_00000674:
    mr r3, r22
    addi r4, r28, 0x46
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_000006F8
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x100(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x104(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x108(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10c(r1)
    addi r3, r1, 0x88
    li r4, 0x79
    lfs f1, 0x7c(r23)
    bl fn_805F8E70
    addi r4, r1, 0x100
    addi r3, r1, 0x88
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0xf8(r1)
    ori r0, r0, 0x8
    stw r0, 0xf8(r1)
    b lbl_fn_80419C00_00000500
lbl_fn_80419C00_000006F8:
    mr r3, r22
    addi r4, r28, 0x4c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_0000077C
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x100(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x104(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x108(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10c(r1)
    addi r3, r1, 0x58
    li r4, 0x79
    lfs f1, 0x7c(r23)
    bl fn_805F8E70
    addi r4, r1, 0x100
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0xf8(r1)
    ori r0, r0, 0x10
    stw r0, 0xf8(r1)
    b lbl_fn_80419C00_00000500
lbl_fn_80419C00_0000077C:
    mr r3, r22
    addi r4, r28, 0x55
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_000007A0
    lwz r0, 0xf8(r1)
    ori r0, r0, 0x20
    stw r0, 0xf8(r1)
    b lbl_fn_80419C00_00000500
lbl_fn_80419C00_000007A0:
    mr r3, r22
    addi r4, r28, 0x60
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_00000500
    lwz r0, 0xf8(r1)
    ori r0, r0, 0x40
    stw r0, 0xf8(r1)
    b lbl_fn_80419C00_00000500
lbl_fn_80419C00_000007C4:
    mulli r3, r30, 0x28
    lwz r0, 0xe8(r1)
    add r3, r23, r3
    stw r0, 0x51c(r3)
    lfs f0, 0xec(r1)
    stfs f0, 0x520(r3)
    lbz r0, 0xf0(r1)
    stb r0, 0x524(r3)
    lbz r0, 0xf1(r1)
    stb r0, 0x525(r3)
    lfs f0, 0xf4(r1)
    stfs f0, 0x528(r3)
    lwz r0, 0xf8(r1)
    stw r0, 0x52c(r3)
    lwz r0, 0xfc(r1)
    stw r0, 0x530(r3)
    lfs f2, 0x108(r1)
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lfs f0, 0x10c(r1)
    stfs f0, 0x540(r3)
    b lbl_fn_80419C00_00000A00
lbl_fn_80419C00_00000820:
    mr r3, r22
    addi r4, r28, 0x6a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_0000090C
    stb r27, 0x3c(r1)
    addi r3, r1, 0x44
    li r4, 0x0
    li r5, 0x14
    stb r27, 0x3d(r1)
    stw r27, 0x40(r1)
    bl memset
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_80684600
    stb r3, 0x3c(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_80684600
    stb r3, 0x3d(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x40(r1)
    addi r22, r1, 0x3c
    li r30, 0x0
lbl_fn_80419C00_00000888:
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    addi r30, r30, 0x1
    stfs f1, 0x8(r22)
    cmpwi r30, 0x5
    addi r22, r22, 0x4
    blt lbl_fn_80419C00_00000888
    lwz r0, 0x634(r23)
    mulli r0, r0, 0x1c
    add r0, r23, r0
    addic. r4, r0, 0x638
    beq lbl_fn_80419C00_000008FC
    lbz r0, 0x3c(r1)
    stb r0, 0x0(r4)
    lbz r0, 0x3d(r1)
    stb r0, 0x1(r4)
    lwz r0, 0x40(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x48(r1)
    lwz r3, 0x44(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x50(r1)
    lwz r3, 0x4c(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x54(r1)
    stw r0, 0x18(r4)
lbl_fn_80419C00_000008FC:
    lwz r3, 0x634(r23)
    addi r0, r3, 0x1
    stw r0, 0x634(r23)
    b lbl_fn_80419C00_00000A00
lbl_fn_80419C00_0000090C:
    mr r3, r22
    addi r4, r28, 0x72
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_0000098C
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f0, f31, f1
    addi r3, r1, 0x210
    stfs f0, 0x14(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f0, f31, f1
    addi r3, r1, 0x210
    stfs f0, 0x18(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f7, f31, f1
    lfs f0, 0x80(r23)
    lfs f6, 0x78(r23)
    lfs f5, 0x14(r1)
    fadds f0, f0, f7
    lfs f4, 0x7c(r23)
    lfs f3, 0x18(r1)
    fadds f5, f6, f5
    stfs f7, 0x1c(r1)
    fadds f3, f4, f3
    stfs f5, 0x78(r23)
    stfs f3, 0x7c(r23)
    stfs f0, 0x80(r23)
    b lbl_fn_80419C00_00000A00
lbl_fn_80419C00_0000098C:
    mr r3, r22
    addi r4, r28, 0x7b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_00000A00
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r1)
    addi r3, r1, 0x210
    bl fn_8005B9CC
    bl fn_800DC288
    frsp f0, f1
    lfs f3, 0x98(r23)
    lfs f6, 0x90(r23)
    lfs f5, 0x8(r1)
    fmuls f0, f3, f0
    lfs f4, 0x94(r23)
    lfs f3, 0xc(r1)
    fmuls f5, f6, f5
    stfs f1, 0x10(r1)
    fmuls f3, f4, f3
    stfs f5, 0x90(r23)
    stfs f3, 0x94(r23)
    stfs f0, 0x98(r23)
lbl_fn_80419C00_00000A00:
    addi r3, r1, 0x210
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80419C00_0000029C
    li r0, 0x888
    addi r11, r1, 0x870
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x880(r1)
    li r0, 0x878
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x870(r1)
    bl _restgpr_22
    lwz r0, 0x894(r1)
    mtlr r0
    addi r1, r1, 0x890
    blr
}

asm void fn_8041A488(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    mr r28, r4
    bne lbl_fn_8041A488_00000A84
    li r3, 0x0
    b lbl_fn_8041A488_00000E64
lbl_fn_8041A488_00000A84:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    blt lbl_fn_8041A488_00000DB4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    lwz r5, 0x54(r31)
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x0(r28)
    stw r0, 0x54(r31)
    cmplwi r0, 0x6
    ble lbl_fn_8041A488_00000ABC
    li r0, 0x0
    stw r0, 0x54(r31)
lbl_fn_8041A488_00000ABC:
    lwz r4, 0x54(r31)
    mr r3, r31
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_808864FC
    li r0, -0x1
    stw r11, 0xb8(r3)
    addi r5, r31, 0xf4
    lfs f0, lbl_808864F8
    addi r7, r1, 0x10
    lwz r3, 0x54(r31)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x1c(r1)
    mulli r3, r3, 0xc
    li r10, -0x1
    stfs f0, 0x20(r1)
    add r3, r31, r3
    stfs f0, 0x24(r1)
    addi r4, r3, 0x4c8
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    stw r4, 0xb8(r3)
    lwz r0, 0x4c4(r31)
    stw r4, 0x7f8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8041A488_00000B7C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_8041A488_00000B98
lbl_fn_8041A488_00000B7C:
    lis r5, lbl_8078DC70@ha
    lwzu r4, lbl_8078DC70@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_8041A488_00000B98:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x44
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8041A488_00000BD0
    lwz r3, 0x4c4(r31)
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
lbl_fn_8041A488_00000BD0:
    lwz r0, 0x54(r31)
    addi r3, r31, 0xf4
    lfs f2, lbl_8088650C
    li r4, 0x0
    mulli r0, r0, 0x28
    li r8, 0x1
    add r30, r31, r0
    lwz r5, 0x51c(r30)
    lfs f1, 0x520(r30)
    lbz r6, 0x524(r30)
    lbz r7, 0x525(r30)
    bl fn_80097C08
    lfs f0, 0x528(r30)
    stfs f0, 0x328(r31)
    lwz r0, 0x52c(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8041A488_00000C24
    lfs f0, lbl_808864F8
    stfs f0, 0x32c(r31)
    b lbl_fn_8041A488_00000C2C
lbl_fn_8041A488_00000C24:
    lfs f0, lbl_808864FC
    stfs f0, 0x32c(r31)
lbl_fn_8041A488_00000C2C:
    lwz r4, 0x530(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8041A488_00000C44
    lwz r0, 0x8(r4)
    clrrwi r0, r0, 1
    stw r0, 0x8(r4)
lbl_fn_8041A488_00000C44:
    lwz r4, 0x558(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8041A488_00000C5C
    lwz r0, 0x8(r4)
    clrrwi r0, r0, 1
    stw r0, 0x8(r4)
lbl_fn_8041A488_00000C5C:
    lwz r4, 0x580(r31)
    addi r3, r31, 0x50
    cmpwi r4, 0x0
    beq lbl_fn_8041A488_00000C78
    lwz r0, 0x8(r4)
    clrrwi r0, r0, 1
    stw r0, 0x8(r4)
lbl_fn_8041A488_00000C78:
    lwz r4, 0x558(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8041A488_00000C90
    lwz r0, 0x8(r4)
    clrrwi r0, r0, 1
    stw r0, 0x8(r4)
lbl_fn_8041A488_00000C90:
    lwz r4, 0x580(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8041A488_00000CA8
    lwz r0, 0x8(r4)
    clrrwi r0, r0, 1
    stw r0, 0x8(r4)
lbl_fn_8041A488_00000CA8:
    lwz r4, 0x5a8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8041A488_00000CC0
    lwz r0, 0x8(r4)
    clrrwi r0, r0, 1
    stw r0, 0x8(r4)
lbl_fn_8041A488_00000CC0:
    lwz r4, 0x5d0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8041A488_00000CD8
    lwz r0, 0x8(r4)
    clrrwi r0, r0, 1
    stw r0, 0x8(r4)
lbl_fn_8041A488_00000CD8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041A488_00000D0C
    lwz r3, 0x530(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8041A488_00000D0C
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
lbl_fn_8041A488_00000D0C:
    lis r3, lbl_80753038@ha
    lfs f30, lbl_808864F8
    lfd f31, lbl_80753038@l(r3)
    addi r29, r31, 0x638
    li r28, 0x0
    lis r30, 0x4330
    b lbl_fn_8041A488_00000DA4
lbl_fn_8041A488_00000D28:
    lbz r3, 0x0(r29)
    lwz r0, 0x54(r31)
    extsb r3, r3
    cmpw r3, r0
    bne lbl_fn_8041A488_00000D9C
    lwz r0, 0x4(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8041A488_00000D9C
    lfs f0, 0x8(r29)
    stfs f0, 0x10(r29)
    lfs f0, 0xc(r29)
    fcmpo cr0, f0, f30
    ble lbl_fn_8041A488_00000D9C
    bl fn_80680CF8
    lfs f0, 0xc(r29)
    stw r30, 0x68(r1)
    fctiwz f1, f0
    lfs f0, 0x10(r29)
    stfd f1, 0x60(r1)
    lwz r4, 0x64(r1)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f1, 0x68(r1)
    fsubs f1, f1, f31
    fadds f0, f0, f1
    stfs f0, 0x10(r29)
lbl_fn_8041A488_00000D9C:
    addi r29, r29, 0x1c
    addi r28, r28, 0x1
lbl_fn_8041A488_00000DA4:
    lwz r0, 0x634(r31)
    cmplw r28, r0
    blt lbl_fn_8041A488_00000D28
    b lbl_fn_8041A488_00000E60
lbl_fn_8041A488_00000DB4:
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F3C0
    mr r4, r31
    lwz r5, 0x54(r31)
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x4c4(r31)
    lwz r3, 0x0(r28)
    cmpwi r0, 0x0
    stw r3, 0x54(r31)
    bne lbl_fn_8041A488_00000E0C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x70(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x74(r1)
    stw r0, 0x78(r1)
    b lbl_fn_8041A488_00000E28
lbl_fn_8041A488_00000E0C:
    lis r5, lbl_8078DC7C@ha
    lwzu r4, lbl_8078DC7C@l(r5)
    stw r4, 0x70(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x74(r1)
    stw r0, 0x78(r1)
lbl_fn_8041A488_00000E28:
    lwz r5, 0x70(r1)
    addi r3, r1, 0x38
    lwz r4, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8041A488_00000E60
    lwz r3, 0x4c4(r31)
    lwz r0, 0x8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x8(r3)
lbl_fn_8041A488_00000E60:
    lwz r3, 0x54(r31)
lbl_fn_8041A488_00000E64:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8041A8DC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    cmpwi r4, 0x0
    mr r31, r3
    mr r26, r4
    bne lbl_fn_8041A8DC_00000EC0
    li r3, 0x0
    b lbl_fn_8041A8DC_00001060
lbl_fn_8041A8DC_00000EC0:
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8041A8DC_00000EE0
    li r3, 0x0
    b lbl_fn_8041A8DC_00001060
lbl_fn_8041A8DC_00000EE0:
    lwz r4, 0x634(r31)
    lis r3, lbl_80753038@ha
    addi r28, r31, 0x638
    lfd f4, lbl_80753038@l(r3)
    lis r0, 0x4330
    mtctr r4
    cmplwi r4, 0x0
    ble lbl_fn_8041A8DC_0000105C
lbl_fn_8041A8DC_00000F00:
    lbz r3, 0x0(r28)
    lwz r4, 0x54(r31)
    extsb r3, r3
    cmpw r3, r4
    bne lbl_fn_8041A8DC_00001054
    lwz r3, 0x4(r28)
    cmpwi r3, 0x5
    bne lbl_fn_8041A8DC_00001054
    mulli r3, r4, 0x28
    add r4, r31, r3
    lwz r3, 0x530(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8041A8DC_00001054
    lwz r5, 0x2c(r26)
    cmpwi r5, 0x0
    beq lbl_fn_8041A8DC_00001054
    lwz r3, 0x3c(r5)
    stw r0, 0x48(r1)
    xoris r3, r3, 0x8000
    lfs f0, 0x8(r28)
    stw r3, 0x4c(r1)
    lfd f3, 0x48(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    blt lbl_fn_8041A8DC_00001054
    lfs f0, 0xc(r28)
    lwz r27, lbl_8087F048
    fctiwz f0, f0
    cmpwi r27, 0x0
    stfd f0, 0x48(r1)
    lwz r26, 0x4c(r1)
    beq lbl_fn_8041A8DC_00001008
    cmpwi r26, 0x0
    ble lbl_fn_8041A8DC_00001008
    lwz r0, 0x4(r5)
    cmpw r0, r26
    beq lbl_fn_8041A8DC_00001008
    lwz r4, 0x530(r4)
    addi r29, r1, 0x1c
    lfs f0, lbl_808864F8
    mr r3, r27
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x44(r4)
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_800F8548
    mr r30, r3
    mr r3, r26
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_808864F8
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r27
    lfs f2, lbl_808864FC
    mr r6, r30
    mr r7, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_8041A8DC_00001008:
    lbz r4, 0x1(r28)
    li r0, 0x0
    lfs f0, lbl_808864F8
    mr r3, r31
    extsb r4, r4
    stw r4, 0x28(r1)
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
    b lbl_fn_8041A8DC_0000105C
lbl_fn_8041A8DC_00001054:
    addi r28, r28, 0x1c
    bdnz lbl_fn_8041A8DC_00000F00
lbl_fn_8041A8DC_0000105C:
    lwz r3, 0x54(r31)
lbl_fn_8041A8DC_00001060:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8041AAC0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    lis r4, lbl_80753038@ha
    mr r27, r3
    lfd f31, lbl_80753038@l(r4)
    addi r30, r3, 0x638
    li r29, -0x1
    li r28, 0x0
    lis r31, 0x4330
    b lbl_fn_8041AAC0_000011E0
lbl_fn_8041AAC0_000010B4:
    lbz r3, 0x0(r30)
    lwz r0, 0x54(r27)
    extsb r3, r3
    cmpw r3, r0
    bne lbl_fn_8041AAC0_000011D8
    lwz r3, 0x4(r30)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8041AAC0_00001118
    cmpwi r3, 0x1
    beq lbl_fn_8041AAC0_000010EC
    cmpwi r3, 0x6
    beq lbl_fn_8041AAC0_00001118
    b lbl_fn_8041AAC0_000011D8
lbl_fn_8041AAC0_000010EC:
    lwz r0, 0x7f8(r27)
    stw r31, 0x8(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0x10(r30)
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_8041AAC0_000011D8
    mr r29, r28
    b lbl_fn_8041AAC0_000011D8
lbl_fn_8041AAC0_00001118:
    lwz r4, lbl_8087F8A0
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8041AAC0_00001134
    mr r3, r27
    mr r5, r30
    bl fn_8041B724
lbl_fn_8041AAC0_00001134:
    cmpwi r3, 0x0
    bne lbl_fn_8041AAC0_00001170
    lwz r4, lbl_8087F408
    cmpwi r4, 0x0
    beq lbl_fn_8041AAC0_00001170
    lwz r0, 0x54(r27)
    mulli r0, r0, 0x28
    add r5, r27, r0
    lwz r0, 0x52c(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8041AAC0_00001170
    mr r3, r27
    mr r5, r30
    bl fn_8041B4D8
lbl_fn_8041AAC0_00001170:
    cmpwi r3, 0x0
    bne lbl_fn_8041AAC0_000011AC
    lwz r4, lbl_8087F890
    cmpwi r4, 0x0
    beq lbl_fn_8041AAC0_000011AC
    lwz r0, 0x54(r27)
    mulli r0, r0, 0x28
    add r5, r27, r0
    lwz r0, 0x52c(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8041AAC0_000011AC
    mr r3, r27
    mr r5, r30
    bl fn_8041B28C
lbl_fn_8041AAC0_000011AC:
    cmpwi r3, 0x0
    beq lbl_fn_8041AAC0_000011C0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8041AAC0_000011D4
lbl_fn_8041AAC0_000011C0:
    cmpwi r3, 0x0
    bne lbl_fn_8041AAC0_000011D8
    lwz r0, 0x4(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8041AAC0_000011D8
lbl_fn_8041AAC0_000011D4:
    mr r29, r28
lbl_fn_8041AAC0_000011D8:
    addi r30, r30, 0x1c
    addi r28, r28, 0x1
lbl_fn_8041AAC0_000011E0:
    lwz r0, 0x634(r27)
    cmplw r28, r0
    blt lbl_fn_8041AAC0_000010B4
    psq_l f31, 0x38(r1), 0, 0
    mr r3, r29
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8041AC58(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808864F8
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
    beq lbl_fn_8041AC58_00001274
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_8041AC58_00001274:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8041ACD0(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8041ACD0_0000129C
    li r3, 0x0
    blr
lbl_fn_8041ACD0_0000129C:
    lwz r0, 0x634(r3)
    addi r5, r3, 0x638
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8041ACD0_000012E0
lbl_fn_8041ACD0_000012B0:
    lbz r4, 0x0(r5)
    lwz r0, 0x54(r3)
    extsb r4, r4
    cmpw r4, r0
    bne lbl_fn_8041ACD0_000012D8
    lwz r0, 0x4(r5)
    cmpwi r0, 0x4
    bne lbl_fn_8041ACD0_000012D8
    li r3, 0x1
    blr
lbl_fn_8041ACD0_000012D8:
    addi r5, r5, 0x1c
    bdnz lbl_fn_8041ACD0_000012B0
lbl_fn_8041ACD0_000012E0:
    li r3, 0x0
    blr
}

asm void fn_8041AD30(void)
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
    beq lbl_fn_8041AD30_000013FC
    cmpwi r31, 0x0
    bne lbl_fn_8041AD30_000013FC
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
    lfs f0, lbl_808864F8
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8041AD30_00001390
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8041AD30_00001390:
    lwz r0, 0x634(r28)
    addi r4, r28, 0x638
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8041AD30_000013FC
lbl_fn_8041AD30_000013A4:
    lbz r3, 0x0(r4)
    lwz r0, 0x54(r28)
    extsb r3, r3
    cmpw r3, r0
    bne lbl_fn_8041AD30_000013F4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x4
    bne lbl_fn_8041AD30_000013F4
    lfs f0, 0x8(r4)
    fmuls f0, f0, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_8041AD30_000013F4
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_805F9990
    lfs f0, lbl_80886510
    fcmpo cr0, f1, f0
    mfcr r3
    extrwi r3, r3, 1, 1
    b lbl_fn_8041AD30_00001400
lbl_fn_8041AD30_000013F4:
    addi r4, r4, 0x1c
    bdnz lbl_fn_8041AD30_000013A4
lbl_fn_8041AD30_000013FC:
    li r3, 0x0
lbl_fn_8041AD30_00001400:
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

asm void fn_8041AE70(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    lfs f31, lbl_808864F8
    stw r31, 0x3c(r1)
    li r31, 0x0
    stw r30, 0x38(r1)
    addi r30, r3, 0x638
    stw r29, 0x34(r1)
    li r29, 0x0
    stw r28, 0x30(r1)
    mr r28, r3
    b lbl_fn_8041AE70_000014CC
lbl_fn_8041AE70_00001464:
    lbz r3, 0x0(r30)
    lwz r0, 0x54(r28)
    extsb r3, r3
    cmpw r3, r0
    bne lbl_fn_8041AE70_000014C4
    lwz r0, 0x4(r30)
    cmpwi r0, 0x4
    bne lbl_fn_8041AE70_000014C4
    lbz r0, 0x1(r30)
    mr r3, r28
    addi r4, r1, 0x8
    extsb r0, r0
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    stw r31, 0x10(r1)
    stw r31, 0x14(r1)
    stw r31, 0x18(r1)
    stfs f31, 0x1c(r1)
    stfs f31, 0x20(r1)
    stfs f31, 0x24(r1)
    lwz r12, 0x0(r28)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8041AE70_000014C4:
    addi r30, r30, 0x1c
    addi r29, r29, 0x1
lbl_fn_8041AE70_000014CC:
    lwz r0, 0x634(r28)
    cmplw r29, r0
    blt lbl_fn_8041AE70_00001464
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8041AF48(void)
{
    nofralloc
    lwz r0, 0x634(r3)
    addi r5, r3, 0x638
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8041AF48_00001558
lbl_fn_8041AF48_00001514:
    lbz r0, 0x0(r5)
    lwz r4, 0x54(r3)
    extsb r0, r0
    cmpw r0, r4
    bne lbl_fn_8041AF48_00001550
    lwz r0, 0x4(r5)
    cmpwi r0, 0x5
    bne lbl_fn_8041AF48_00001550
    mulli r0, r4, 0x28
    add r4, r3, r0
    lwz r0, 0x530(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8041AF48_00001550
    lwz r3, 0x530(r4)
    blr
lbl_fn_8041AF48_00001550:
    addi r5, r5, 0x1c
    bdnz lbl_fn_8041AF48_00001514
lbl_fn_8041AF48_00001558:
    li r3, 0x0
    blr
}

asm void fn_8041AFA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    lwz r12, 0x0(r4)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041AFA8_000015A4
    psq_l f1, 0x3c(r3), 0, 0
    lfs f2, 0x44(r3)
    stfs f2, 0x8(r31)
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_8041AFA8_000015BC
lbl_fn_8041AFA8_000015A4:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r31)
    psq_st f1, 0x0(r31), 0, 0
lbl_fn_8041AFA8_000015BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041B018(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041B018_000015FC
    lfs f1, 0x48(r3)
    b lbl_fn_8041B018_00001600
lbl_fn_8041B018_000015FC:
    lfs f1, lbl_808864F8
lbl_fn_8041B018_00001600:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041B058(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_808864F8
    fcmpo cr0, f1, f0
    mfcr r3
    lwz r0, 0x14(r1)
    extrwi r3, r3, 1, 1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041B094(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_27
    mr r28, r4
    mr r27, r3
    addi r4, r1, 0x8
    bl fn_803EC758
    lwz r0, 0xf0(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8041B094_000016A8
    cmpwi r28, 0x0
    beq lbl_fn_8041B094_000016A8
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8041B094_000016A8
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r27)
    mr r30, r3
    b lbl_fn_8041B094_000016AC
lbl_fn_8041B094_000016A8:
    li r30, 0x0
lbl_fn_8041B094_000016AC:
    lis r3, lbl_80753050@ha
    addi r5, r27, 0x54
    addi r31, r3, lbl_80753050@l
    li r6, 0x0
    mr r3, r30
    li r7, 0x63
    addi r4, r31, 0x81
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80886514
    mr r3, r30
    lfs f2, lbl_80886518
    addi r4, r31, 0x87
    lfs f3, lbl_8088651C
    addi r5, r27, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80886520
    mr r3, r30
    lfs f2, lbl_80886504
    addi r4, r31, 0x8b
    lfs f3, lbl_80886524
    addi r5, r27, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80886514
    mr r3, r30
    lfs f2, lbl_80886518
    addi r4, r31, 0x8f
    lfs f3, lbl_8088651C
    addi r5, r27, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x93
    addi r5, r27, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x9a
    addi r5, r27, 0x58
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r4, r30
    addi r3, r27, 0xb0
    bl fn_803F11F8
    li r29, 0x0
lbl_fn_8041B094_00001790:
    lwz r0, 0x530(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8041B094_0000180C
    mr r5, r29
    addi r3, r1, 0x28
    addi r4, r31, 0xa2
    crclr 6
    bl sprintf
    mr r3, r30
    addi r4, r1, 0x28
    bl fn_8008937C
    lwz r5, 0x530(r27)
    mr r28, r3
    lfs f1, lbl_80886514
    addi r4, r31, 0x87
    lfs f2, lbl_80886518
    addi r5, r5, 0x3c
    lfs f3, lbl_8088651C
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lwz r5, 0x530(r27)
    mr r3, r28
    lfs f1, lbl_80886514
    addi r4, r31, 0xb4
    lfs f2, lbl_80886518
    addi r5, r5, 0x48
    lfs f3, lbl_8088651C
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
lbl_fn_8041B094_0000180C:
    addi r29, r29, 0x1
    addi r27, r27, 0x28
    cmpwi r29, 0x7
    blt lbl_fn_8041B094_00001790
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8041B27C(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_8041B284(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_8041B28C(void)
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
    bne lbl_fn_8041B28C_000018A0
    li r3, 0x0
    b lbl_fn_8041B28C_00001A4C
lbl_fn_8041B28C_000018A0:
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
    bne lbl_fn_8041B28C_0000190C
    lfs f29, lbl_80886504
lbl_fn_8041B28C_0000190C:
    lwz r31, 0x48(r31)
    lfs f28, lbl_808864F8
    b lbl_fn_8041B28C_00001A40
lbl_fn_8041B28C_00001918:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8041B28C_00001944
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8041B28C_00001944
    li r5, 0x1
lbl_fn_8041B28C_00001944:
    cmpwi r5, 0x0
    beq lbl_fn_8041B28C_00001960
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8041B28C_00001960
    li r3, 0x1
lbl_fn_8041B28C_00001960:
    cmpwi r3, 0x0
    beq lbl_fn_8041B28C_00001994
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8041B28C_00001988
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_8041B28C_00001988
    li r3, 0x1
lbl_fn_8041B28C_00001988:
    cmpwi r3, 0x0
    bne lbl_fn_8041B28C_00001994
    li r4, 0x1
lbl_fn_8041B28C_00001994:
    cmpwi r4, 0x0
    beq lbl_fn_8041B28C_00001A3C
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
    ble lbl_fn_8041B28C_000019EC
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8041B28C_000019EC:
    fmuls f0, f31, f31
    fcmpo cr0, f27, f0
    bge lbl_fn_8041B28C_00001A3C
    fmr f1, f29
    bl fn_8068A850
    frsp f27, f1
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_805F9990
    fcmpo cr0, f1, f27
    cror eq, gt, eq
    bne lbl_fn_8041B28C_00001A3C
    lwz r0, 0x4(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8041B28C_00001A34
    lfs f0, 0x570(r31)
    fcmpo cr0, f0, f30
    ble lbl_fn_8041B28C_00001A3C
lbl_fn_8041B28C_00001A34:
    li r3, 0x1
    b lbl_fn_8041B28C_00001A4C
lbl_fn_8041B28C_00001A3C:
    lwz r31, 0x1424(r31)
lbl_fn_8041B28C_00001A40:
    cmpwi r31, 0x0
    bne lbl_fn_8041B28C_00001918
    li r3, 0x0
lbl_fn_8041B28C_00001A4C:
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
