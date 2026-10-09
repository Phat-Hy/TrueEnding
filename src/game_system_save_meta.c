#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8000D3A8(void);
extern void fn_8000D430(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8000DD0C(void);
extern void fn_8004203C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_800844D8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80099E9C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_8011F91C(void);
extern void fn_80121F00(void);
extern void fn_8013322C(void);
extern void fn_8013655C(void);
extern void fn_80139550(void);
extern void fn_8013C38C(void);
extern void fn_8013C480(void);
extern void fn_8013C504(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_80148B38(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015ECC4(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_802376D0(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_80244CAC(void);
extern void fn_80265804(void);
extern void fn_80267B28(void);
extern void fn_80288E30(void);
extern void fn_8029F3AC(void);
extern void fn_802A36B0(void);
extern void fn_802A4094(void);
extern void fn_802A4968(void);
extern void fn_802A49BC(void);
extern void fn_80317034(void);
extern void fn_803396EC(void);
extern void fn_803396FC(void);
extern void fn_80339718(void);
extern void fn_80339F34(void);
extern void fn_80339F5C(void);
extern void fn_80339F74(void);
extern void fn_80339F7C(void);
extern void fn_80339F84(void);
extern void fn_80348568(void);
extern void fn_80348FF4(void);
extern void fn_803494AC(void);
extern void fn_80349BA0(void);
extern void fn_8034A194(void);
extern void fn_8034A644(void);
extern void fn_8034AE48(void);
extern void fn_8034B8CC(void);
extern void fn_8034C714(void);
extern void fn_8034CF48(void);
extern void fn_8034DA0C(void);
extern void fn_8034DE90(void);
extern void fn_8034E898(void);
extern void fn_8034EA50(void);
extern void fn_8034ECE8(void);
extern void fn_8034F384(void);
extern void fn_8034F41C(void);
extern void fn_8034F53C(void);
extern void fn_8034F788(void);
extern void fn_8034FB50(void);
extern void fn_80350070(void);
extern void fn_80350464(void);
extern void fn_8035083C(void);
extern void fn_80350F64(void);
extern void fn_80351480(void);
extern void fn_803519C4(void);
extern void fn_803520D8(void);
extern void fn_8035223C(void);
extern void fn_803524AC(void);
extern void fn_803524E4(void);
extern void fn_803526A8(void);
extern void fn_80352C3C(void);
extern void fn_80352EA4(void);
extern void fn_80353370(void);
extern void fn_8035359C(void);
extern void fn_80353EE4(void);
extern void fn_80353F0C(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80373148(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_804A04AC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 jumptable_807894B8[];
extern u8 jumptable_807894F4[];
extern u8 lbl_8074AA58[];
extern u8 lbl_80775A88[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80885378;
extern u32 lbl_80885388;
extern u32 lbl_8088538C;
extern u32 lbl_80885390;
extern u32 lbl_80885394;
extern u32 lbl_80885398;
extern u32 lbl_8088539C;
extern u32 lbl_808853A0;
extern u32 lbl_808853A4;
extern u32 lbl_808853A8;
extern u32 lbl_808853AC;
extern u32 lbl_808853B0;
extern u32 lbl_808853B4;
extern u32 lbl_808853B8;
extern u32 lbl_808853BC;
extern u32 lbl_808853C0;
extern u32 lbl_808853C4;
extern u32 lbl_808853C8;

/* Function declarations */
void fn_8034585C(void);
void fn_803458C0(void);
void fn_803458CC(void);
void fn_803458D0(void);
void fn_803458DC(void);
void fn_803458E0(void);
void fn_803458EC(void);
void fn_80345BA8(void);
void fn_80346384(void);
void fn_80346990(void);
void fn_80346A34(void);
void fn_80346D8C(void);
void fn_8034701C(void);
void fn_803470F0(void);

asm void fn_8034585C(void)
{
    nofralloc
    lfs f0, lbl_80885378
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stw r0, 0x40(r3)
    stfs f0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x58(r3)
    stw r0, 0x5c(r3)
    blr
}

asm void fn_803458C0(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x14(r3)
    blr
}

asm void fn_803458CC(void)
{
    nofralloc
    blr
}

asm void fn_803458D0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_803458DC(void)
{
    nofralloc
    blr
}

asm void fn_803458E0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_803458EC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, __files@ha
    lis r6, lbl_8074AA58@ha
    stw r0, 0x64(r1)
    stmw r18, 0x28(r1)
    mr r20, r3
    mr r21, r4
    addi r25, r6, lbl_8074AA58@l
    addi r26, r5, __files@l
    addi r22, r1, 0x14
    li r19, 0x0
    lis r29, 0xcccd
    lis r24, 0x4000
    lis r28, 0x1555
    lis r30, 0x2aab
    lis r31, lbl_80775A88@ha
lbl_fn_803458EC_000000D4:
    mr r3, r21
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_803458EC_00000338
    lwz r5, 0x4(r20)
    lwz r4, 0x8(r20)
    cmplw r5, r4
    bge lbl_fn_803458EC_00000118
    addi r5, r5, 0x1
    lwz r4, 0x0(r20)
    slwi r0, r5, 2
    stw r5, 0x4(r20)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_803458EC_000000D4
lbl_fn_803458EC_00000118:
    subi r0, r24, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_803458EC_0000013C
    addi r4, r25, 0x17d
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803458EC_0000013C:
    addi r3, r20, 0x8
    stw r19, 0x14(r1)
    subi r0, r24, 0x1
    stw r19, 0x18(r1)
    stw r19, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r19, 0x24(r1)
    lwz r3, 0x4(r20)
    lwz r27, 0x8(r20)
    addi r3, r3, 0x1
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_803458EC_0000018C
    addi r4, r25, 0x17d
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803458EC_0000018C:
    addi r0, r28, 0x5555
    cmplw r27, r0
    bge lbl_fn_803458EC_000001D4
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_803458EC_000001C8
    addi r3, r1, 0x8
lbl_fn_803458EC_000001C8:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_803458EC_00000210
lbl_fn_803458EC_000001D4:
    subi r0, r30, 0x5556
    cmplw r27, r0
    bge lbl_fn_803458EC_0000020C
    addi r3, r27, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_803458EC_00000200
    addi r3, r1, 0x8
lbl_fn_803458EC_00000200:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_803458EC_00000210
lbl_fn_803458EC_0000020C:
    subi r18, r24, 0x1
lbl_fn_803458EC_00000210:
    subi r0, r24, 0x1
    cmplw r18, r0
    ble lbl_fn_803458EC_00000230
    addi r4, r25, 0x17d
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803458EC_00000230:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_803458EC_00000258
    addi r3, r26, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803458EC_00000258:
    lwz r0, 0x18(r1)
    stw r27, 0x14(r1)
    slwi r3, r0, 2
    stw r18, 0x1c(r1)
    lwz r0, 0x4(r20)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r27, r0
    stwx r23, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r20)
    lwz r27, 0x0(r20)
    slwi r4, r4, 2
    add r5, r27, r4
    subf r5, r27, r5
    mr r4, r27
    srawi r5, r5, 2
    addze r23, r5
    subf r0, r23, r0
    stw r0, 0x24(r1)
    slwi r18, r23, 2
    slwi r0, r0, 2
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r27
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r22, 0x0
    add r0, r0, r23
    stw r0, 0x18(r1)
    stw r19, 0x4(r20)
    lwz r3, 0x8(r20)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r20)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r20)
    stw r0, 0x0(r20)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r20)
    stw r19, 0x18(r1)
    beq lbl_fn_803458EC_000000D4
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803458EC_000000D4
    stw r19, 0x18(r1)
    bl dtor_80084684
    b lbl_fn_803458EC_000000D4
lbl_fn_803458EC_00000338:
    lmw r18, 0x28(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80345BA8(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stw r31, 0x65c(r1)
    stw r30, 0x658(r1)
    stw r29, 0x654(r1)
    mr r29, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x1624
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x1630
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x163c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x1648
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x16cc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x16c0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x17d8
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x1704
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x170c
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x180c
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x1618
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x1690
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x169c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x16a8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x16b4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    addi r3, r29, 0x1cac
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000B08
    mr r3, r29
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80345BA8_00000B08
    mr r3, r29
    bl fn_80353370
    mr r3, r29
    li r4, 0x200
    bl fn_803396EC
    lfs f1, lbl_80885388
    mr r3, r29
    bl fn_80288E30
    lis r5, lbl_8074AA58@ha
    lfs f1, lbl_8088538C
    addi r5, r5, lbl_8074AA58@l
    addi r3, r29, 0xb0
    addi r4, r5, 0x191
    addi r5, r5, 0x196
    bl fn_80099E9C
    lwz r3, 0x17f4(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x17f4(r29)
    bl fn_80244CAC
    lwz r3, 0x17f8(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x17f8(r29)
    bl fn_80244CAC
    lwz r0, 0x7ec(r29)
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0x15
    oris r0, r0, 0x40
    ori r0, r0, 0xc208
    oris r0, r0, 0x388
    ori r0, r0, 0x400
    stw r0, 0x7ec(r29)
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_80345BA8_00000528
    bl fn_80121F00
    bl fn_8013C504
    mr r31, r3
    b lbl_fn_80345BA8_0000052C
lbl_fn_80345BA8_00000528:
    li r31, 0x0
lbl_fn_80345BA8_0000052C:
    addi r3, r29, 0x180c
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80345BA8_00000AD8
    cmpwi r31, 0x0
    beq lbl_fn_80345BA8_00000AD8
    addi r3, r29, 0x180c
    bl fn_8047059C
    mr r31, r3
    addi r3, r29, 0x180c
    bl fn_80470580
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x10
    bl fn_8004203C
    lis r31, lbl_8074AA58@ha
    addi r31, r31, lbl_8074AA58@l
lbl_fn_80345BA8_00000570:
    addi r3, r1, 0x10
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0x19c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000005B0
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r30, r3
    bl fn_8000D9E8
    mr r4, r30
    bl fn_8011F91C
    stw r3, 0x14c4(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000005B0:
    mr r3, r30
    addi r4, r31, 0x1a4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000005D8
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1cc8(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000005D8:
    mr r3, r30
    addi r4, r31, 0x1b8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000600
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1cd0(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000600:
    mr r3, r30
    addi r4, r31, 0x1c7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000628
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1818(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000628:
    mr r3, r30
    addi r4, r31, 0x1db
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000650
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x17fc(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000650:
    mr r3, r30
    addi r4, r31, 0x1e5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000678
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1800(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000678:
    mr r3, r30
    addi r4, r31, 0x1f8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000006A0
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1cd4(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000006A0:
    mr r3, r30
    addi r4, r31, 0x20b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000006C8
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1cd8(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000006C8:
    mr r3, r30
    addi r4, r31, 0x21e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000006F0
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1cdc(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000006F0:
    mr r3, r30
    addi r4, r31, 0x22d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000718
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1ce0(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000718:
    mr r3, r30
    addi r4, r31, 0x238
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000740
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1ce4(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000740:
    mr r3, r30
    addi r4, r31, 0x244
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000768
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1ce8(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000768:
    mr r3, r30
    addi r4, r31, 0x24e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_0000078C
    addi r3, r29, 0x1560
    addi r4, r1, 0x10
    bl fn_803458EC
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_0000078C:
    mr r3, r30
    addi r4, r31, 0x263
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000007B0
    addi r3, r29, 0x156c
    addi r4, r1, 0x10
    bl fn_803458EC
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000007B0:
    mr r3, r30
    addi r4, r31, 0x279
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000007D4
    addi r3, r29, 0x1578
    addi r4, r1, 0x10
    bl fn_803458EC
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000007D4:
    mr r3, r30
    addi r4, r31, 0x28d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000007F8
    addi r3, r29, 0x1584
    addi r4, r1, 0x10
    bl fn_803458EC
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000007F8:
    mr r3, r30
    addi r4, r31, 0x2a2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_0000081C
    addi r3, r29, 0x1590
    addi r4, r1, 0x10
    bl fn_803458EC
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_0000081C:
    mr r3, r30
    addi r4, r31, 0x2b8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000840
    addi r3, r29, 0x159c
    addi r4, r1, 0x10
    bl fn_803458EC
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000840:
    mr r3, r30
    addi r4, r31, 0x2cc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000864
    addi r3, r29, 0x15a8
    addi r4, r1, 0x10
    bl fn_803458EC
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000864:
    mr r3, r30
    addi r4, r31, 0x2e1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000888
    addi r3, r29, 0x15b4
    addi r4, r1, 0x10
    bl fn_803458EC
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000888:
    mr r3, r30
    addi r4, r31, 0x2f7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000008AC
    addi r3, r29, 0x15c0
    addi r4, r1, 0x10
    bl fn_803458EC
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000008AC:
    mr r3, r30
    addi r4, r31, 0x30b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000008D8
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x152c(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000008D8:
    mr r3, r30
    addi r4, r31, 0x318
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000904
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1530(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000904:
    mr r3, r30
    addi r4, r31, 0x32c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000944
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1534(r29)
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1538(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000944:
    mr r3, r30
    addi r4, r31, 0x33a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000970
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x153c(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000970:
    mr r3, r30
    addi r4, r31, 0x347
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_0000099C
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1540(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_0000099C:
    mr r3, r30
    addi r4, r31, 0x355
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_000009DC
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1544(r29)
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1548(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_000009DC:
    mr r3, r30
    addi r4, r31, 0x361
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000A08
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x154c(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000A08:
    mr r3, r30
    addi r4, r31, 0x36c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000A34
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1550(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000A34:
    mr r3, r30
    addi r4, r31, 0x37b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000A60
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1528(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000A60:
    mr r3, r30
    addi r4, r31, 0x386
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000A8C
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x155c(r29)
    b lbl_fn_80345BA8_00000AC8
lbl_fn_80345BA8_00000A8C:
    mr r3, r30
    addi r4, r31, 0x393
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000AC8
    mr r30, r29
lbl_fn_80345BA8_00000AA4:
    addi r3, r1, 0x10
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r3, 0x0
    beq lbl_fn_80345BA8_00000AC8
    bl fn_80219E6C
    stw r3, 0x1554(r30)
    addi r30, r30, 0x4
    b lbl_fn_80345BA8_00000AA4
lbl_fn_80345BA8_00000AC8:
    addi r3, r1, 0x10
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80345BA8_00000570
lbl_fn_80345BA8_00000AD8:
    lwz r3, 0x153c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80345BA8_00000B00
    lwz r4, 0x4(r3)
    addi r3, r1, 0x8
    bl fn_80339718
    mr r5, r3
    addi r3, r29, 0x7d4
    li r4, 0x3
    bl fn_803396FC
lbl_fn_80345BA8_00000B00:
    li r3, 0x1
    b lbl_fn_80345BA8_00000B0C
lbl_fn_80345BA8_00000B08:
    li r3, 0x0
lbl_fn_80345BA8_00000B0C:
    lwz r0, 0x664(r1)
    lwz r31, 0x65c(r1)
    lwz r30, 0x658(r1)
    lwz r29, 0x654(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_80346384(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lbz r0, 0x1809(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80346384_00000BDC
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80139550
    lfs f0, lbl_80885390
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80346384_00000BC8
    mr r3, r31
    li r4, 0x1
    bl fn_8016E4C4
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_80346384_00000BC8
    li r0, 0x0
    stb r0, 0x1809(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80339F34
    mr r3, r31
    bl fn_8034F41C
lbl_fn_80346384_00000BC8:
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_803470F0
    b lbl_fn_80346384_0000110C
lbl_fn_80346384_00000BDC:
    lbz r0, 0x16d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80346384_00000BEC
    bl fn_8035223C
lbl_fn_80346384_00000BEC:
    mr r3, r31
    bl fn_803524E4
    mr r3, r31
    bl fn_803526A8
    lwz r5, 0x14b8(r31)
    mr r3, r31
    lfs f1, lbl_80885394
    lwz r4, 0x14c0(r31)
    addi r5, r5, 0x1
    lfs f0, lbl_80885398
    lwz r0, 0xd1c(r31)
    addi r4, r4, 0x1
    stfs f1, 0x500(r31)
    stfs f1, 0x504(r31)
    stfs f0, 0x508(r31)
    stw r5, 0x14b8(r31)
    stw r4, 0x14c0(r31)
    stw r0, 0x14b0(r31)
    bl fn_8035359C
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80346384_00000C54
    bl fn_8000D9E8
    bl fn_8000DCF4
    stw r3, 0x14b0(r31)
    stw r3, 0xd1c(r31)
lbl_fn_80346384_00000C54:
    mr r3, r31
    bl fn_80352EA4
    bl fn_80121F00
    li r4, 0x8c
    bl fn_80370A78
    cmpwi r3, 0x0
    beq lbl_fn_80346384_00000D48
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xf
    bne lbl_fn_80346384_00000CC0
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_80885398
    mr r3, r31
    li r4, 0x3e
    li r5, 0x1
    bl fn_803524AC
    lfs f1, lbl_80885398
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80339F5C
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x14b4(r31)
    stw r0, 0x14b8(r31)
    b lbl_fn_80346384_00000D38
lbl_fn_80346384_00000CC0:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    mr r3, r31
    bl fn_8034F41C
    mr r3, r31
    bl fn_8034F384
    mr r3, r31
    bl fn_80353EE4
    mr r3, r31
    bl fn_80353F0C
    bl fn_8000D9E8
    bl fn_802A36B0
    mr r30, r3
    b lbl_fn_80346384_00000D30
lbl_fn_80346384_00000CFC:
    mr r3, r30
    bl fn_80267B28
    cmpwi r3, 0x53
    bne lbl_fn_80346384_00000D24
    mr r3, r30
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_80346384_00000D24
    mr r3, r30
    bl fn_8015ECC4
lbl_fn_80346384_00000D24:
    mr r3, r30
    bl fn_802A4094
    mr r30, r3
lbl_fn_80346384_00000D30:
    cmpwi r30, 0x0
    bne lbl_fn_80346384_00000CFC
lbl_fn_80346384_00000D38:
    bl fn_80121F00
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80346384_00000D48:
    addi r3, r31, 0x7d4
    bl fn_8029F3AC
    lfs f0, lbl_8088539C
    fcmpo cr0, f1, f0
    bge lbl_fn_80346384_00000D68
    li r0, 0x2
    stw r0, 0x15cc(r31)
    b lbl_fn_80346384_00000D90
lbl_fn_80346384_00000D68:
    addi r3, r31, 0x7d4
    bl fn_8029F3AC
    lfs f0, lbl_808853A0
    fcmpo cr0, f1, f0
    bge lbl_fn_80346384_00000D88
    li r0, 0x1
    stw r0, 0x15cc(r31)
    b lbl_fn_80346384_00000D90
lbl_fn_80346384_00000D88:
    li r0, 0x0
    stw r0, 0x15cc(r31)
lbl_fn_80346384_00000D90:
    lwz r0, 0x15cc(r31)
    cmpwi r0, 0x1
    ble lbl_fn_80346384_00000DAC
    lfs f1, lbl_808853A4
    addi r3, r31, 0x7d4
    bl fn_80265804
    b lbl_fn_80346384_00000DD0
lbl_fn_80346384_00000DAC:
    cmpwi r0, 0x0
    ble lbl_fn_80346384_00000DC4
    lfs f1, lbl_808853A8
    addi r3, r31, 0x7d4
    bl fn_80265804
    b lbl_fn_80346384_00000DD0
lbl_fn_80346384_00000DC4:
    lfs f1, lbl_80885378
    addi r3, r31, 0x7d4
    bl fn_80265804
lbl_fn_80346384_00000DD0:
    bl fn_8000D9E8
    bl fn_8000DCF4
    lbz r0, 0x1808(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80346384_00000E04
    bl fn_8013C38C
    lfs f1, 0x4(r3)
    lfs f0, lbl_808853AC
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80346384_00000E04
    li r0, 0x1
    stb r0, 0x1808(r31)
lbl_fn_80346384_00000E04:
    lwz r0, 0xd18(r31)
    li r29, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80346384_00000E20
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80346384_00000E54
lbl_fn_80346384_00000E20:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xd
    bne lbl_fn_80346384_00000E38
    mr r3, r31
    bl fn_8034DE90
    b lbl_fn_80346384_00000FE0
lbl_fn_80346384_00000E38:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    mr r3, r31
    li r4, 0x1
    bl fn_80339F74
    b lbl_fn_80346384_00000FE0
lbl_fn_80346384_00000E54:
    beq lbl_fn_80346384_00000F50
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0xe
    bgt lbl_fn_80346384_00000F3C
    lis r3, jumptable_807894B8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807894B8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_80348FF4
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_803494AC
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_80349BA0
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034A194
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034A644
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034AE48
    li r29, 0x1
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034B8CC
    li r29, 0x1
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034DE90
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034E898
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034EA50
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034ECE8
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034C714
    li r29, 0x1
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034CF48
    li r29, 0x1
    b lbl_fn_80346384_00000F50
    mr r3, r31
    bl fn_8034DA0C
    li r29, 0x1
    b lbl_fn_80346384_00000F50
lbl_fn_80346384_00000F3C:
    mr r3, r31
    bl fn_80348568
    mr r3, r31
    bl fn_80346D8C
    li r29, 0x1
lbl_fn_80346384_00000F50:
    lwz r3, 0x58c(r31)
    li r4, 0x1
    subi r0, r3, 0x6
    cmplwi r0, 0x7
    bgt lbl_fn_80346384_00000F68
    li r4, 0x0
lbl_fn_80346384_00000F68:
    mr r3, r31
    bl fn_80339F74
    bl fn_80121F00
    bl fn_80373148
    mr r28, r3
    bl fn_8000D9E8
    bl fn_8000DCF4
    bl fn_8013C38C
    lfs f2, 0x4(r3)
    lfs f1, 0x52c(r31)
    lfs f0, lbl_808853B0
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80346384_00000FA8
    li r30, 0x3
    b lbl_fn_80346384_00000FAC
lbl_fn_80346384_00000FA8:
    li r30, 0x1
lbl_fn_80346384_00000FAC:
    mr r3, r28
    bl fn_80339F7C
    cmpw r30, r3
    beq lbl_fn_80346384_00000FE0
    mr r3, r28
    mr r4, r30
    li r5, 0xf
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    mr r3, r28
    mr r4, r30
    bl fn_80339F84
lbl_fn_80346384_00000FE0:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_803470F0
    lfs f1, lbl_808853B4
    mr r3, r31
    lfs f2, lbl_808853B8
    mr r5, r29
    li r4, 0x64
    bl fn_80352C3C
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xc
    bne lbl_fn_80346384_00001078
    lwz r0, 0x14b4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80346384_00001078
    lwz r3, 0x17e4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80346384_00001078
    lbz r0, 0x17ec(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80346384_00001078
    bl fn_80144710
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80317034
    lwz r3, 0x17e4(r31)
    bl fn_8000DD0C
    addi r4, r1, 0x8
    bl fn_8000D430
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8000D3A8
    lwz r3, 0x17e4(r31)
    lfs f1, lbl_808853BC
    bl fn_80148B38
lbl_fn_80346384_00001078:
    lwz r0, 0x1cc4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80346384_0000110C
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x4c
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_80346384_000010A4
    mr r3, r31
    bl fn_8034F53C
lbl_fn_80346384_000010A4:
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x44
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_80346384_000010C4
    mr r3, r31
    bl fn_8034F788
lbl_fn_80346384_000010C4:
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x4d
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_80346384_000010E4
    mr r3, r31
    bl fn_80350F64
lbl_fn_80346384_000010E4:
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x48
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_80346384_0000110C
    mr r3, r31
    bl fn_803520D8
    lfs f0, lbl_80885398
    stfs f0, 0x7d8(r31)
lbl_fn_80346384_0000110C:
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

asm void fn_80346990(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x1809(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80346990_000011C0
    lfs f2, 0x10(r4)
    lfs f3, lbl_80885378
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    lwz r0, 0x50(r4)
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    ori r0, r0, 0x10
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    stw r0, 0x50(r4)
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80346990_000011C0
    li r0, 0x0
    stw r0, 0x40(r4)
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80346990_000011C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80346A34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xf
    bne lbl_fn_80346A34_00001224
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80346A34_00001238
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80346A34_00001238
    lwz r5, 0x1804(r3)
    addi r0, r5, 0x1
    stw r0, 0x1804(r3)
    b lbl_fn_80346A34_00001238
lbl_fn_80346A34_00001224:
    cmpwi r0, 0xc
    bne lbl_fn_80346A34_00001238
    lwz r5, 0x17e8(r3)
    addi r0, r5, 0x1
    stw r0, 0x17e8(r3)
lbl_fn_80346A34_00001238:
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80346A34_00001250
    cmpwi r0, 0x1
    beq lbl_fn_80346A34_000014F8
    b lbl_fn_80346A34_00001518
lbl_fn_80346A34_00001250:
    lfs f1, 0x7d8(r3)
    lfs f0, lbl_80885378
    lwz r5, 0x1814(r3)
    fcmpo cr0, f1, f0
    addi r0, r5, 0x1
    stw r0, 0x1814(r3)
    cror eq, lt, eq
    bne lbl_fn_80346A34_000013E8
    lbz r0, 0x180b(r3)
    li r4, 0x1
    stw r4, 0x14bc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80346A34_0000129C
    lwz r4, lbl_8087F430
    li r0, 0x0
    stw r0, 0x8a0(r4)
    stw r0, 0x4d8(r4)
    stb r0, 0x97c(r4)
    stb r0, 0x180b(r3)
lbl_fn_80346A34_0000129C:
    lfs f0, lbl_80885398
    li r4, 0x20
    stfs f0, 0x7d8(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    li r0, 0x0
    stw r0, 0x14b4(r31)
    stw r0, 0x14b8(r31)
    stw r0, 0x14c0(r31)
    stw r0, 0x17e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80885398
    li r0, 0x10
    lfs f0, lbl_808853C0
    li r30, 0x1
    stw r0, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r30, 0x3fc(r31)
    li r5, 0x38
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f3, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    stw r30, 0x14bc(r31)
    li r4, 0xc9
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80346A34_00001398
    lwz r3, lbl_8087F430
    li r4, 0xc9
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80346A34_00001398:
    lwz r3, lbl_8087F430
    li r4, 0x389
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r0, 0x14a8(r31)
    lis r4, lbl_8074AA58@ha
    addi r4, r4, lbl_8074AA58@l
    lfs f1, lbl_80885398
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r31)
    addi r3, r1, 0x8
    addi r4, r4, 0x39d
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80346A34_00001518
lbl_fn_80346A34_000013E8:
    lwz r4, 0x8(r4)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1791
    bne lbl_fn_80346A34_00001518
    li r30, 0x0
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    stw r30, 0x14c0(r3)
    stw r30, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r3, 0xf
    li r0, 0x1
    stw r3, 0x58c(r31)
    lfs f1, lbl_80885378
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808853C4
    li r5, 0x3d
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lbz r0, 0x180b(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80346A34_000014D4
    lwz r3, lbl_8087F430
    stw r30, 0x8a0(r3)
    stw r30, 0x4d8(r3)
    stb r30, 0x97c(r3)
    stb r30, 0x180b(r31)
lbl_fn_80346A34_000014D4:
    lwz r3, 0x17e4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80346A34_000014EC
    bl fn_8015ECC4
    li r0, 0x0
    stw r0, 0x17e4(r31)
lbl_fn_80346A34_000014EC:
    lfs f0, lbl_80885378
    stfs f0, 0x578(r31)
    b lbl_fn_80346A34_00001518
lbl_fn_80346A34_000014F8:
    lfs f1, 0x7d8(r3)
    lfs f0, lbl_80885398
    fcmpo cr0, f1, f0
    bge lbl_fn_80346A34_00001518
    stfs f0, 0x7d8(r3)
    li r4, 0x20
    addi r3, r3, 0x7d4
    bl fn_8013322C
lbl_fn_80346A34_00001518:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80346D8C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r5, 0x14b0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80346D8C_000017A0
    lfs f2, 0x530(r5)
    addi r4, r1, 0x20
    psq_l f1, 0x528(r5), 0, 0
    lfs f0, 0x530(r3)
    psq_st f1, 0x0(r4), 0, 0
    fsubs f5, f0, f2
    lfs f3, 0x528(r3)
    lfs f0, 0x20(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f3, 0x24(r1)
    fmuls f0, f5, f5
    stfs f2, 0x28(r1)
    fsubs f3, f4, f3
    stfs f6, 0x14(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x18(r1)
    stfs f5, 0x1c(r1)
    bl fn_8068B100
    lwz r0, 0x17e4(r30)
    frsp f31, f1
    li r31, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80346D8C_000015C4
    li r31, 0xc
    b lbl_fn_80346D8C_00001794
lbl_fn_80346D8C_000015C4:
    lwz r3, 0x14c0(r30)
    lwz r0, 0x1cd0(r30)
    cmpw r3, r0
    blt lbl_fn_80346D8C_00001794
    bl fn_80680CF8
    slwi r0, r3, 29
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 3
    add. r0, r0, r3
    bne lbl_fn_80346D8C_00001794
    lfs f4, 0x530(r30)
    lfs f0, 0x1614(r30)
    lfs f3, 0x528(r30)
    fsubs f6, f4, f0
    lfs f0, 0x160c(r30)
    lfs f4, 0x52c(r30)
    fsubs f5, f3, f0
    lfs f3, 0x1610(r30)
    fmuls f0, f6, f6
    fsubs f3, f4, f3
    stfs f5, 0x8(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0xc(r1)
    stfs f6, 0x10(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_808853C8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80346D8C_00001664
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    li r31, 0x6
    subf. r0, r4, r0
    bne lbl_fn_80346D8C_00001794
    li r31, 0x4
    b lbl_fn_80346D8C_00001794
lbl_fn_80346D8C_00001664:
    lfs f0, 0x1ce0(r30)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_80346D8C_000016D0
    lwz r0, 0x15cc(r30)
    lwz r4, 0x15d0(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    lwz r3, 0x1564(r3)
    subi r3, r3, 0x1
    cmpw r4, r3
    bge lbl_fn_80346D8C_00001698
    mr r3, r4
lbl_fn_80346D8C_00001698:
    lwz r0, 0x15cc(r30)
    addi r4, r3, 0x1
    stw r3, 0x15d0(r30)
    slwi r5, r3, 2
    mulli r0, r0, 0x24
    add r6, r30, r0
    lwz r3, 0x1564(r6)
    lwz r6, 0x1560(r6)
    divwu r0, r4, r3
    lwzx r31, r6, r5
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x15d0(r30)
    b lbl_fn_80346D8C_00001794
lbl_fn_80346D8C_000016D0:
    lfs f0, 0x1ce4(r30)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_80346D8C_0000173C
    lwz r0, 0x15cc(r30)
    lwz r4, 0x15d4(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    lwz r3, 0x1570(r3)
    subi r3, r3, 0x1
    cmpw r4, r3
    bge lbl_fn_80346D8C_00001704
    mr r3, r4
lbl_fn_80346D8C_00001704:
    lwz r0, 0x15cc(r30)
    addi r4, r3, 0x1
    stw r3, 0x15d4(r30)
    slwi r5, r3, 2
    mulli r0, r0, 0x24
    add r6, r30, r0
    lwz r3, 0x1570(r6)
    lwz r6, 0x156c(r6)
    divwu r0, r4, r3
    lwzx r31, r6, r5
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x15d4(r30)
    b lbl_fn_80346D8C_00001794
lbl_fn_80346D8C_0000173C:
    lwz r0, 0x15cc(r30)
    lwz r4, 0x15d8(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    lwz r3, 0x157c(r3)
    subi r3, r3, 0x1
    cmpw r4, r3
    bge lbl_fn_80346D8C_00001760
    mr r3, r4
lbl_fn_80346D8C_00001760:
    lwz r0, 0x15cc(r30)
    addi r4, r3, 0x1
    stw r3, 0x15d8(r30)
    slwi r5, r3, 2
    mulli r0, r0, 0x24
    add r6, r30, r0
    lwz r3, 0x157c(r6)
    lwz r6, 0x1578(r6)
    divwu r0, r4, r3
    lwzx r31, r6, r5
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x15d8(r30)
lbl_fn_80346D8C_00001794:
    mr r3, r30
    mr r4, r31
    bl fn_8034701C
lbl_fn_80346D8C_000017A0:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8034701C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0xc
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bgt lbl_fn_8034701C_0000186C
    lis r5, jumptable_807894F4@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_807894F4@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    bl fn_80350070
    b lbl_fn_8034701C_0000186C
    bl fn_80350464
    b lbl_fn_8034701C_0000186C
    bl fn_8035083C
    b lbl_fn_8034701C_0000186C
    bl fn_8034F788
    b lbl_fn_8034701C_0000186C
    bl fn_8034F53C
    b lbl_fn_8034701C_0000186C
    bl fn_8034FB50
    b lbl_fn_8034701C_0000186C
    li r4, 0x1
    bl fn_80351480
    b lbl_fn_8034701C_0000186C
    bl fn_80350F64
    b lbl_fn_8034701C_0000186C
    lbz r0, 0x180a(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8034701C_0000186C
    li r4, 0x0
    bl fn_80351480
    b lbl_fn_8034701C_0000186C
    lbz r0, 0x180a(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8034701C_0000186C
    li r4, 0x1
    bl fn_80351480
    b lbl_fn_8034701C_0000186C
    bl fn_803519C4
lbl_fn_8034701C_0000186C:
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x13
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0x180a(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803470F0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f3, lbl_80885378
    li r4, 0x79
    stw r0, 0x84(r1)
    lfs f0, lbl_80885398
    stw r31, 0x7c(r1)
    addi r31, r1, 0x2c
    stw r30, 0x78(r1)
    mr r30, r3
    lfs f2, 0x5fc(r3)
    psq_l f1, 0x5f4(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x600(r3), 0, 0
    stfs f2, 0x34(r1)
    lfs f2, 0x608(r3)
    lfs f4, 0x60c(r3)
    psq_st f1, 0xc(r31), 0, 0
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x538(r3)
    addi r3, r1, 0x48
    stfs f2, 0x40(r1)
    fmr f1, f0
    stfs f4, 0x44(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_808853BC
    addi r3, r1, 0x20
    lfs f3, 0xc(r1)
    lfs f0, 0x8(r1)
    fmuls f6, f3, f4
    lfs f3, 0x618(r30)
    fmuls f7, f0, f4
    lfs f0, 0x614(r30)
    lfs f5, 0x10(r1)
    fadds f3, f3, f6
    fadds f8, f0, f7
    lfs f0, 0x44(r1)
    stfs f3, 0x24(r1)
    fmuls f5, f5, f4
    lfs f3, 0x61c(r30)
    stfs f8, 0x20(r1)
    fadds f8, f3, f5
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f8
    lfs f3, 0x30(r1)
    stfs f2, 0x34(r1)
    fsubs f3, f3, f4
    frsp f2, f2
    stfs f0, 0x60c(r30)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x5f4(r30), 0, 0
    psq_l f1, 0xc(r31), 0, 0
    stfs f2, 0x5fc(r30)
    lfs f2, 0x40(r1)
    psq_st f1, 0x600(r30), 0, 0
    stfs f2, 0x608(r30)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r0, 0x84(r1)
    stfs f7, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f8, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
