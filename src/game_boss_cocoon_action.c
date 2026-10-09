#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D9E8(void);
extern void fn_8000D9F8(void);
extern void fn_800132EC(void);
extern void fn_8003E4A4(void);
extern void fn_8004203C(void);
extern void fn_80042108(void);
extern void fn_8004212C(void);
extern void fn_80057A64(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80061824(void);
extern void fn_8006AFF8(void);
extern void fn_8006CA80(void);
extern void fn_8006EF48(void);
extern void fn_80084C24(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008B978(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_800BFAC8(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800F52F0(void);
extern void fn_800F8014(void);
extern void fn_8010EDFC(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_80121F00(void);
extern void fn_8013655C(void);
extern void fn_8013C504(void);
extern void fn_80154654(void);
extern void fn_8015495C(void);
extern void fn_80158BB4(void);
extern void fn_8016DF3C(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_80178164(void);
extern void fn_80178668(void);
extern void fn_801CCD00(void);
extern void fn_8020A780(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_802660FC(void);
extern void fn_802A36B0(void);
extern void fn_802A4094(void);
extern void fn_802BABC0(void);
extern void fn_802F0990(void);
extern void fn_803165E0(void);
extern void fn_80339F74(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80373100(void);
extern void fn_803D6FEC(void);
extern void fn_803D7000(void);
extern void fn_8044E158(void);
extern void fn_80453DB4(void);
extern void fn_80453DBC(void);
extern void fn_80453E20(void);
extern void fn_8045817C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80682544(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_807548FC[];
extern u8 lbl_807549D0[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8078F388[];
extern u8 lbl_8078F3C8[];
extern u8 lbl_8078F500[];
extern u8 lbl_8078F630[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F8;
extern u32 lbl_8087F4FC;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80886B68;
extern u32 lbl_80886B6C;
extern u32 lbl_80886B70;
extern u32 lbl_80886B74;
extern u32 lbl_80886B78;
extern u32 lbl_80886B7C;
extern u32 lbl_80886B80;
extern u32 lbl_80886B84;
extern u32 lbl_80886B88;
extern u32 lbl_80886B8C;
extern u32 lbl_80886B90;
extern u32 lbl_80886B94;
extern u32 lbl_80886B98;
extern u32 lbl_80886B9C;

/* Function declarations */
void fn_80452370(void);
void fn_804523D0(void);
void fn_80452600(void);
void fn_80452710(void);
void fn_80452908(void);
void fn_80452998(void);
void fn_80452B6C(void);
void fn_80452F08(void);
void fn_80452F0C(void);
void fn_80452F10(void);
void fn_80452F14(void);
void fn_804533A8(void);
void fn_804533B4(void);
void fn_804533D0(void);
void fn_804533E4(void);
void fn_80453560(void);
void fn_80453570(void);
void fn_8045374C(void);
void fn_80453C88(void);

asm void fn_80452370(void)
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
    beq lbl_fn_80452370_00000044
    li r0, 0x0
    stw r0, lbl_8087F4FC
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80452370_00000044
    mr r3, r30
    bl dtor_80084684
lbl_fn_80452370_00000044:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804523D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r3
    lwz r0, 0x48(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804523D0_000000F4
lbl_fn_804523D0_00000088:
    lwz r0, 0x50(r3)
    add r4, r0, r6
    lwz r0, 0x40(r4)
    addi r5, r4, 0x44
    slwi r0, r0, 2
    add r4, r4, r0
    addi r4, r4, 0x44
    b lbl_fn_804523D0_000000D0
lbl_fn_804523D0_000000A8:
    lwz r7, 0x0(r5)
    cmpwi r7, 0x0
    beq lbl_fn_804523D0_000000CC
    lwz r0, 0x38(r7)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804523D0_000000CC
    li r0, 0x0
    b lbl_fn_804523D0_000000DC
lbl_fn_804523D0_000000CC:
    addi r5, r5, 0x4
lbl_fn_804523D0_000000D0:
    cmplw r5, r4
    bne lbl_fn_804523D0_000000A8
    li r0, 0x1
lbl_fn_804523D0_000000DC:
    cmpwi r0, 0x0
    bne lbl_fn_804523D0_000000EC
    li r0, 0x1
    b lbl_fn_804523D0_00000274
lbl_fn_804523D0_000000EC:
    addi r6, r6, 0x84
    bdnz lbl_fn_804523D0_00000088
lbl_fn_804523D0_000000F4:
    li r29, 0x0
    li r28, 0x0
    li r26, 0x1
    li r31, 0x0
    b lbl_fn_804523D0_00000264
lbl_fn_804523D0_00000108:
    lwz r0, 0x50(r27)
    add r30, r0, r28
    addi r25, r30, 0x44
    b lbl_fn_804523D0_00000130
lbl_fn_804523D0_00000118:
    lwz r3, 0x0(r25)
    cmpwi r3, 0x0
    beq lbl_fn_804523D0_0000012C
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804523D0_0000012C:
    addi r25, r25, 0x4
lbl_fn_804523D0_00000130:
    lwz r0, 0x40(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x44
    cmplw r25, r0
    bne lbl_fn_804523D0_00000118
    addi r4, r30, 0x44
    b lbl_fn_804523D0_0000016C
lbl_fn_804523D0_00000150:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804523D0_00000168
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804523D0_00000168:
    addi r4, r4, 0x4
lbl_fn_804523D0_0000016C:
    lwz r0, 0x40(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x44
    cmplw r4, r0
    bne lbl_fn_804523D0_00000150
    addi r4, r30, 0x44
    b lbl_fn_804523D0_000001A0
lbl_fn_804523D0_0000018C:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804523D0_0000019C
    stb r31, 0x4d(r3)
lbl_fn_804523D0_0000019C:
    addi r4, r4, 0x4
lbl_fn_804523D0_000001A0:
    lwz r0, 0x40(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x44
    cmplw r4, r0
    bne lbl_fn_804523D0_0000018C
    addi r4, r30, 0x44
    b lbl_fn_804523D0_000001D4
lbl_fn_804523D0_000001C0:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804523D0_000001D0
    stb r26, 0x4c(r3)
lbl_fn_804523D0_000001D0:
    addi r4, r4, 0x4
lbl_fn_804523D0_000001D4:
    lwz r0, 0x40(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x44
    cmplw r4, r0
    bne lbl_fn_804523D0_000001C0
    addi r4, r30, 0x8
    b lbl_fn_804523D0_00000208
lbl_fn_804523D0_000001F4:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804523D0_00000204
    stb r26, 0x4d(r3)
lbl_fn_804523D0_00000204:
    addi r4, r4, 0x4
lbl_fn_804523D0_00000208:
    lwz r0, 0x4(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x8
    cmplw r4, r0
    bne lbl_fn_804523D0_000001F4
    addi r4, r30, 0x18
    b lbl_fn_804523D0_0000023C
lbl_fn_804523D0_00000228:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804523D0_00000238
    stb r26, 0x4d(r3)
lbl_fn_804523D0_00000238:
    addi r4, r4, 0x4
lbl_fn_804523D0_0000023C:
    lwz r0, 0x14(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x18
    cmplw r4, r0
    bne lbl_fn_804523D0_00000228
    lwz r3, 0x3c(r30)
    addi r28, r28, 0x84
    addi r29, r29, 0x1
    stb r26, 0x4d(r3)
lbl_fn_804523D0_00000264:
    lwz r0, 0x48(r27)
    cmplw r29, r0
    blt lbl_fn_804523D0_00000108
    li r0, 0x0
lbl_fn_804523D0_00000274:
    lmw r25, 0x14(r1)
    cntlzw r0, r0
    srwi r3, r0, 5
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80452600(void)
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
    beq lbl_fn_80452600_00000380
    lis r4, lbl_8078F388@ha
    li r6, 0x0
    addi r4, r4, lbl_8078F388@l
    stw r4, 0x0(r3)
    li r7, 0x0
    li r4, 0x0
    b lbl_fn_80452600_00000300
lbl_fn_80452600_000002D4:
    lwz r0, 0x50(r3)
    addi r6, r6, 0x1
    add r5, r0, r7
    stwx r4, r7, r0
    addi r7, r7, 0x84
    stw r4, 0x4(r5)
    stw r4, 0x14(r5)
    stw r4, 0x24(r5)
    stw r4, 0x30(r5)
    stw r4, 0x3c(r5)
    stw r4, 0x40(r5)
lbl_fn_80452600_00000300:
    lwz r0, 0x48(r3)
    cmplw r6, r0
    blt lbl_fn_80452600_000002D4
    cmpwi r3, 0x0
    li r31, 0x0
    stw r31, lbl_8087F4F8
    beq lbl_fn_80452600_00000370
    lwz r0, 0x4c(r3)
    lis r4, lbl_8078F3C8@ha
    addi r4, r4, lbl_8078F3C8@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    stw r31, 0x48(r3)
    beq lbl_fn_80452600_00000344
    mr r3, r0
    bl fn_80084C24
    stw r31, 0x4c(r29)
lbl_fn_80452600_00000344:
    lwz r3, 0x50(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80452600_00000364
    lis r4, fn_8044E158@ha
    addi r4, r4, fn_8044E158@l
    bl fn_80695A50
    li r0, 0x0
    stw r0, 0x50(r29)
lbl_fn_80452600_00000364:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80452600_00000370:
    cmpwi r30, 0x0
    ble lbl_fn_80452600_00000380
    mr r3, r29
    bl dtor_80084684
lbl_fn_80452600_00000380:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80452710(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r5
    stw r28, 0x100(r1)
    mr r28, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r4, lbl_8078F500@ha
    addi r3, r28, 0x14b0
    addi r4, r4, lbl_8078F500@l
    stw r4, 0x0(r28)
    bl fn_8006CA80
    li r31, 0x0
    stw r31, 0x14b8(r28)
    addi r3, r28, 0x14e0
    stw r31, 0x14bc(r28)
    stw r31, 0x14c0(r28)
    stw r31, 0x14c4(r28)
    bl fn_802BABC0
    lwz r0, 0x7ec(r28)
    lis r30, lbl_807548FC@ha
    lwz r4, 0x12a4(r28)
    addi r3, r1, 0x2c
    ori r0, r0, 0x40
    stw r31, 0x14e4(r28)
    oris r4, r4, 0x40
    oris r0, r0, 0x100
    stw r4, 0x12a4(r28)
    addi r4, r30, lbl_807548FC@l
    stw r0, 0x7ec(r28)
    bl fn_8003E4A4
    addi r30, r30, lbl_807548FC@l
    addi r3, r1, 0x20
    addi r4, r30, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r29, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r30, 0x2b
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x14
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    b lbl_fn_80452710_000004CC
lbl_fn_80452710_00000488:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r30, 0x2d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80452710_000004C4
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
lbl_fn_80452710_000004C4:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_80452710_000004CC:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_80452710_00000488
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x14b0(r28)
    mr r4, r3
    addi r3, r28, 0x14b0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    lwz r31, 0x10c(r1)
    mr r3, r28
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80452908(void)
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
    beq lbl_fn_80452908_0000060C
    addic. r0, r3, 0x14e0
    beq lbl_fn_80452908_000005E0
    lwz r4, 0x14e0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80452908_000005E0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80452908_000005E0
    bl fn_800897D8
lbl_fn_80452908_000005E0:
    addic. r3, r30, 0x14b0
    beq lbl_fn_80452908_000005F0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80452908_000005F0:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_80452908_0000060C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80452908_0000060C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80452998(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    mr r29, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80452998_000007DC
    addi r3, r29, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80452998_000007DC
    lwz r0, 0x14e0(r29)
    lis r3, lbl_807548FC@ha
    addi r3, r3, lbl_807548FC@l
    cmpwi r0, 0x0
    addi r4, r3, 0x36
    bne lbl_fn_80452998_00000694
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80452998_00000694
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x14e0(r29)
    b lbl_fn_80452998_00000698
lbl_fn_80452998_00000694:
    li r3, 0x0
lbl_fn_80452998_00000698:
    lis r4, lbl_807548FC@ha
    addi r5, r29, 0x14e4
    addi r4, r4, lbl_807548FC@l
    li r6, 0x0
    addi r4, r4, 0x4a
    li r7, 0x0
    bl fn_80087994
    addi r3, r29, 0x14b0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80452998_00000780
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80452998_00000780
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80452998_00000780
    addi r3, r29, 0x14b0
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
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
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_80452998_00000768:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80452998_00000768
lbl_fn_80452998_00000780:
    li r4, 0x2
    li r3, 0x5
    li r0, 0x6
    stw r4, 0x14d0(r29)
    li r4, 0x2
    stw r3, 0x14d8(r29)
    stw r0, 0x14c8(r29)
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    stw r3, 0x14d4(r29)
    lwz r4, 0x14d8(r29)
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    stw r3, 0x14dc(r29)
    lwz r4, 0x14c8(r29)
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    lwz r0, 0x14a8(r29)
    stw r3, 0x14cc(r29)
    li r3, 0x1
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r29)
    b lbl_fn_80452998_000007E0
lbl_fn_80452998_000007DC:
    li r3, 0x0
lbl_fn_80452998_000007E0:
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80452B6C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r0, 0xd18(r3)
    lwz r4, 0x14c0(r3)
    cmpwi r0, 0x0
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    bne lbl_fn_80452B6C_00000844
    li r4, 0x3
    bl fn_8016E970
lbl_fn_80452B6C_00000844:
    lwz r3, lbl_8087F430
    li r4, 0xc8
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_80452B6C_0000087C
    lwz r3, 0x14cc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80452B6C_0000086C
    lwz r0, 0x14d4(r31)
    stw r0, 0x14b4(r3)
lbl_fn_80452B6C_0000086C:
    lwz r3, lbl_8087F430
    li r4, 0xc8
    li r5, 0x2
    bl fn_80370AE4
lbl_fn_80452B6C_0000087C:
    lwz r3, lbl_8087F430
    li r4, 0xe6
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_80452B6C_000008F4
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    lwz r30, 0x48(r3)
    mr r3, r30
    bl fn_8016DF3C
    lwz r4, 0xc50(r30)
    mr r3, r30
    li r5, 0x1
    bl fn_80154654
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    li r0, 0x0
    stw r0, 0xd1c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016DF3C
    lwz r3, lbl_8087F430
    li r4, 0xe6
    li r5, 0x0
    bl fn_80370AE4
    b lbl_fn_80452B6C_0000094C
lbl_fn_80452B6C_000008F4:
    lwz r3, lbl_8087F430
    li r4, 0xe6
    bl fn_80370A78
    cmpwi r3, 0x2
    bne lbl_fn_80452B6C_0000094C
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    lwz r30, 0x48(r3)
    li r7, 0x1
    mr r3, r30
    bl fn_8015495C
    li r0, 0x0
    stw r0, 0xd1c(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_8016DF3C
    lwz r3, lbl_8087F430
    li r4, 0xe6
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80452B6C_0000094C:
    lwz r3, lbl_8087F430
    li r4, 0xe7
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_80452B6C_000009A8
    lwz r3, 0x14cc(r31)
    li r4, 0x1
    bl fn_8016E4C4
    lwz r3, 0x14cc(r31)
    li r4, 0x2
    lwz r0, 0x14dc(r31)
    stw r0, 0x14b8(r3)
    lwz r3, 0x14cc(r31)
    bl fn_801CCD00
    lwz r3, 0x14dc(r31)
    li r4, 0xe7
    li r5, 0x2
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x8
    stw r0, 0x54c(r3)
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    b lbl_fn_80452B6C_00000B70
lbl_fn_80452B6C_000009A8:
    lwz r3, lbl_8087F430
    li r4, 0xe7
    bl fn_80370A78
    cmpwi r3, 0x2
    bne lbl_fn_80452B6C_00000B14
    li r3, 0x1395
    bl fn_80219E6C
    mr r4, r3
    lwz r3, 0x14dc(r31)
    li r5, 0x0
    li r6, 0x2
    mr r7, r3
    li r8, 0x0
    bl fn_80178668
    lwz r4, 0x14dc(r31)
    addi r3, r1, 0x14
    bl fn_80178164
    lwz r3, lbl_8087F1E4
    lwz r30, 0x1fc(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80452B6C_00000A00
    b lbl_fn_80452B6C_00000A04
lbl_fn_80452B6C_00000A00:
    la r30, lbl_808813D0
lbl_fn_80452B6C_00000A04:
    lfs f30, lbl_80886B68
    mr r4, r30
    lwz r3, lbl_8087EEC8
    li r5, 0x1
    fmr f1, f30
    lfs f2, lbl_80886B6C
    li r6, 0x1
    bl fn_8006EF48
    fmr f31, f1
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    addi r5, r1, 0x14
    bl fn_800BFAC8
    lfs f1, 0x10(r1)
    lfs f3, lbl_80886B6C
    fcmpo cr0, f1, f3
    ble lbl_fn_80452B6C_00000AA0
    lfs f0, lbl_80886B70
    fcmpo cr0, f1, f0
    bge lbl_fn_80452B6C_00000AA0
    lfs f1, lbl_80886B74
    lis r5, 0xa001
    lfs f0, 0x8(r1)
    fmr f4, f30
    fmr f5, f30
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f2, 0xc(r1)
    fmr f7, f3
    fmr f8, f3
    fnmsubs f1, f1, f31, f0
    mr r4, r30
    subi r5, r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_80452B6C_00000AA0:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80452B6C_00000AD0
    lwz r0, 0x560(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80452B6C_00000AD0
    lwz r3, lbl_8087F430
    li r4, 0xe7
    li r5, 0x3
    bl fn_80370AE4
lbl_fn_80452B6C_00000AD0:
    lwz r3, 0x14dc(r31)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80452B6C_00000B70
    lwz r0, 0x560(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80452B6C_00000B70
    lwz r3, lbl_8087F430
    li r4, 0x4b
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80452B6C_00000B70
    lwz r3, lbl_8087F430
    li r4, 0x4b
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80452B6C_00000B70
lbl_fn_80452B6C_00000B14:
    lwz r3, lbl_8087F430
    li r4, 0xe7
    bl fn_80370A78
    cmpwi r3, 0x3
    bne lbl_fn_80452B6C_00000B70
    li r3, 0x1395
    bl fn_80219E6C
    mr r4, r3
    lwz r3, 0x14dc(r31)
    li r5, 0x0
    li r6, 0x2
    mr r7, r3
    li r8, 0x0
    bl fn_80178668
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_80452B6C_00000B70
    lwz r3, lbl_8087F430
    li r4, 0x5b
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80452B6C_00000B70:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80452F08(void)
{
    nofralloc
    blr
}

asm void fn_80452F0C(void)
{
    nofralloc
    blr
}

asm void fn_80452F10(void)
{
    nofralloc
    blr
}

asm void fn_80452F14(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    stw r28, 0x100(r1)
    mr r28, r5
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r4, lbl_8078F630@ha
    addi r3, r31, 0x14b0
    addi r4, r4, lbl_8078F630@l
    stw r4, 0x0(r31)
    bl fn_8006CA80
    lfs f2, lbl_80886B78
    li r29, 0x0
    lfs f1, lbl_80886B7C
    li r0, 0x1
    lfs f0, lbl_80886B80
    addi r3, r31, 0x14ec
    stw r29, 0x14b8(r31)
    li r4, 0x0
    li r5, 0x23a
    stw r29, 0x14bc(r31)
    stw r29, 0x14c0(r31)
    stw r29, 0x14c4(r31)
    stw r29, 0x14c8(r31)
    stw r0, 0x14cc(r31)
    stfs f2, 0x14d0(r31)
    stfs f1, 0x14d4(r31)
    stfs f0, 0x14d8(r31)
    stfs f2, 0x14dc(r31)
    stw r29, 0x14e0(r31)
    stw r29, 0x14e4(r31)
    bl fn_80096E94
    addi r3, r31, 0x18bc
    bl fn_803165E0
    addi r3, r31, 0x18ec
    bl fn_80057A64
    addi r3, r31, 0x18f8
    bl fn_80057A64
    lfs f1, lbl_80886B80
    addi r3, r31, 0x1914
    stw r29, 0x190c(r31)
    fmr f2, f1
    fmr f3, f1
    stw r29, 0x1910(r31)
    bl fn_8000D114
    addi r3, r31, 0x1928
    bl fn_802377B8
    addi r3, r31, 0x1934
    bl fn_802377B8
    addi r3, r31, 0x1940
    bl fn_802377B8
    li r0, 0x2
    stw r0, 0x194c(r31)
    addi r3, r31, 0x1950
    bl fn_802377B8
    addi r3, r31, 0x195c
    bl fn_802377B8
    addi r3, r31, 0x1968
    bl fn_80057A64
    addi r3, r31, 0x1974
    bl fn_80057A64
    stw r29, 0x1980(r31)
    addi r3, r31, 0x1988
    stw r29, 0x1984(r31)
    bl fn_802377B8
    addi r3, r31, 0x1994
    bl fn_80237518
    addi r3, r31, 0x19a0
    bl fn_804533D0
    addi r30, r31, 0x19ac
    addi r29, r31, 0x252c
lbl_fn_80452F14_00000CD4:
    mr r3, r30
    bl fn_804533A8
    addi r30, r30, 0x5c
    cmplw r30, r29
    blt lbl_fn_80452F14_00000CD4
    mr r3, r29
    bl fn_802377B8
    addi r3, r31, 0x2538
    bl fn_802377B8
    addi r3, r31, 0x2548
    bl fn_804533B4
    lfs f0, lbl_80886B84
    li r0, 0x0
    stw r0, 0x2558(r31)
    addi r3, r31, 0x2560
    stfs f0, 0x255c(r31)
    bl fn_804533E4
    addi r3, r31, 0x2630
    bl fn_804533E4
    addi r30, r31, 0x2700
    addi r29, r31, 0x2a40
lbl_fn_80452F14_00000D28:
    mr r3, r30
    bl fn_804533E4
    addi r30, r30, 0xd0
    cmplw r30, r29
    blt lbl_fn_80452F14_00000D28
    mr r3, r29
    bl fn_802BABC0
    lwz r0, 0x12a4(r31)
    li r3, 0x0
    lfs f0, lbl_80886B88
    li r4, 0x1
    oris r0, r0, 0x40
    stw r3, 0x2a44(r31)
    mr r3, r31
    stfs f0, 0x2a48(r31)
    stw r4, 0x2a4c(r31)
    stw r0, 0x12a4(r31)
    bl fn_800F52F0
    li r4, 0x10
    addi r3, r3, 0xe8
    bl fn_802660FC
    mr r3, r31
    bl fn_800F52F0
    li r4, 0x2
    addi r3, r3, 0xe8
    bl fn_802660FC
    mr r3, r31
    bl fn_800F52F0
    li r4, 0x8
    addi r3, r3, 0xe8
    bl fn_802660FC
    mr r3, r31
    bl fn_800F52F0
    li r4, 0x20
    addi r3, r3, 0xe8
    bl fn_802660FC
    lis r29, lbl_807549D0@ha
    addi r3, r1, 0x2c
    addi r4, r29, lbl_807549D0@l
    bl fn_8003E4A4
    addi r30, r29, lbl_807549D0@l
    addi r3, r1, 0x20
    addi r4, r30, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r28, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r30, 0x2b
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x14
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    b lbl_fn_80452F14_00000E68
lbl_fn_80452F14_00000E24:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r30, 0x2d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80452F14_00000E60
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
lbl_fn_80452F14_00000E60:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_80452F14_00000E68:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r29, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r29, 0x0
    bne lbl_fn_80452F14_00000E24
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x14b0(r31)
    mr r4, r3
    addi r3, r31, 0x14b0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x14ec
    li r4, 0x1
    bl fn_8008B978
    lis r29, lbl_807549D0@ha
    addi r3, r31, 0x14ec
    addi r29, r29, lbl_807549D0@l
    li r5, 0x0
    addi r4, r29, 0x36
    bl fn_8008AD4C
    addi r3, r31, 0x14ec
    addi r5, r29, 0x56
    li r4, 0x13f
    bl fn_80097A88
    addi r3, r31, 0x14ec
    addi r5, r29, 0x7a
    li r4, 0x140
    bl fn_80097A88
    addi r3, r31, 0x14ec
    addi r5, r29, 0x9e
    li r4, 0x141
    bl fn_80097A88
    lis r30, lbl_807C7030@ha
    addi r3, r31, 0x18ec
    addi r4, r30, lbl_807C7030@l
    bl fn_8000D124
    addi r3, r31, 0x18f8
    addi r4, r30, lbl_807C7030@l
    bl fn_8000D124
    addi r3, r31, 0x18bc
    bl fn_8010EDFC
    li r30, 0x0
    stw r30, 0x1904(r31)
    addi r3, r31, 0x19a0
    stw r30, 0x1908(r31)
    bl fn_80453560
    li r0, 0x1e
    stw r30, 0x1920(r31)
    addi r3, r31, 0x1928
    addi r4, r29, 0xc2
    stw r0, 0x1924(r31)
    bl fn_8023780C
    addi r3, r31, 0x1934
    addi r4, r29, 0xd0
    bl fn_8023780C
    addi r3, r31, 0x1940
    addi r4, r29, 0xde
    bl fn_8023780C
    addi r3, r31, 0x1950
    addi r4, r29, 0xec
    bl fn_8023780C
    addi r3, r31, 0x195c
    addi r4, r29, 0xfa
    bl fn_8023780C
    addi r3, r31, 0x1988
    addi r4, r29, 0x108
    bl fn_8023780C
    addi r3, r31, 0x1994
    addi r4, r29, 0x116
    bl fn_80237654
    addi r3, r31, 0x252c
    addi r4, r29, 0x127
    bl fn_8023780C
    addi r3, r31, 0x2538
    addi r4, r29, 0x135
    bl fn_8023780C
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    mr r3, r31
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_804533A8(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_804533B4(void)
{
    nofralloc
    lfs f0, lbl_80886B80
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

asm void fn_804533D0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_804533E4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    li r4, 0x0
    lfs f6, lbl_80886B78
    li r5, 0x1
    lfs f4, lbl_80886B80
    li r0, 0x3
    stfs f6, 0x8(r1)
    addi r9, r1, 0x8
    addi r8, r1, 0x18
    lfs f5, lbl_80886B8C
    stfs f4, 0xc(r1)
    addi r7, r1, 0x28
    addi r6, r1, 0x38
    lfs f0, lbl_80886B94
    psq_l f1, 0x0(r9), 0, 0
    lfs f3, lbl_80886B90
    stfs f4, 0x10(r1)
    stfs f4, 0x14(r1)
    psq_l f2, 0x8(r9), 0, 0
    stfs f4, 0x18(r1)
    stfs f6, 0x1c(r1)
    psq_st f1, 0x84(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f4, 0x20(r1)
    stfs f4, 0x24(r1)
    psq_st f2, 0x8c(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f4, 0x28(r1)
    stfs f4, 0x2c(r1)
    psq_st f1, 0x94(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f6, 0x30(r1)
    stfs f4, 0x34(r1)
    psq_st f2, 0x9c(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f4, 0x38(r1)
    stfs f4, 0x3c(r1)
    psq_st f1, 0xa4(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0x40(r1)
    stfs f4, 0x44(r1)
    psq_st f2, 0xac(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r5, 0x10(r3)
    stfs f6, 0x14(r3)
    stfs f5, 0x18(r3)
    stfs f5, 0x1c(r3)
    stfs f4, 0x20(r3)
    stfs f3, 0x24(r3)
    stfs f6, 0x28(r3)
    stfs f6, 0x30(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x34(r3)
    stfs f6, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f6, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f6, 0x38(r3)
    stfs f6, 0x3c(r3)
    stfs f6, 0x40(r3)
    stfs f6, 0x44(r3)
    stfs f6, 0x58(r1)
    stfs f6, 0x5c(r1)
    stfs f6, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f6, 0x48(r3)
    stfs f6, 0x4c(r3)
    stfs f6, 0x50(r3)
    stfs f6, 0x54(r3)
    stfs f6, 0x68(r1)
    stfs f6, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f6, 0x74(r1)
    stfs f6, 0x58(r3)
    stfs f6, 0x5c(r3)
    stfs f6, 0x60(r3)
    stfs f6, 0x64(r3)
    stw r4, 0x68(r3)
    stw r4, 0x6c(r3)
    stw r4, 0x70(r3)
    stw r4, 0x74(r3)
    stw r4, 0x78(r3)
    stw r4, 0x7c(r3)
    stw r4, 0x80(r3)
    stw r4, 0xc4(r3)
    stw r4, 0xc8(r3)
    stfs f6, 0xcc(r3)
    psq_st f1, 0xb4(r3), 0, 0
    psq_st f2, 0xbc(r3), 0, 0
    addi r1, r1, 0x80
    blr
}

asm void fn_80453560(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    blr
}

asm void fn_80453570(void)
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
    beq lbl_fn_80453570_000013BC
    addic. r0, r3, 0x2a40
    beq lbl_fn_80453570_0000124C
    lwz r4, 0x2a40(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80453570_0000124C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80453570_0000124C
    bl fn_800897D8
lbl_fn_80453570_0000124C:
    addic. r31, r29, 0x2538
    beq lbl_fn_80453570_0000126C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80453570_0000126C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80453570_0000126C:
    addic. r31, r29, 0x252c
    beq lbl_fn_80453570_0000128C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80453570_0000128C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80453570_0000128C:
    addic. r4, r29, 0x19a0
    beq lbl_fn_80453570_000012B8
    beq lbl_fn_80453570_000012B8
    beq lbl_fn_80453570_000012B8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80453570_000012B8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80453570_000012B8:
    addi r3, r29, 0x1994
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x1988
    beq lbl_fn_80453570_000012E4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80453570_000012E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80453570_000012E4:
    addic. r31, r29, 0x195c
    beq lbl_fn_80453570_00001304
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80453570_00001304
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80453570_00001304:
    addic. r31, r29, 0x1950
    beq lbl_fn_80453570_00001324
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80453570_00001324
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80453570_00001324:
    addic. r31, r29, 0x1940
    beq lbl_fn_80453570_00001344
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80453570_00001344
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80453570_00001344:
    addic. r31, r29, 0x1934
    beq lbl_fn_80453570_00001364
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80453570_00001364
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80453570_00001364:
    addic. r31, r29, 0x1928
    beq lbl_fn_80453570_00001384
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80453570_00001384
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80453570_00001384:
    addi r3, r29, 0x14ec
    li r4, -0x1
    bl fn_800971D4
    addic. r3, r29, 0x14b0
    beq lbl_fn_80453570_000013A0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80453570_000013A0:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80453570_000013BC
    mr r3, r29
    bl dtor_80084684
lbl_fn_80453570_000013BC:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8045374C(void)
{
    nofralloc
    stwu r1, -0x780(r1)
    mflr r0
    stw r0, 0x784(r1)
    addi r11, r1, 0x780
    bl _savegpr_24
    mr r31, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x14ec
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x1928
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x1934
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x1940
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x1950
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x195c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x1988
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x1994
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x252c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    addi r3, r31, 0x2538
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_000018FC
    lwz r0, 0x7ec(r31)
    mr r3, r31
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0x15
    oris r0, r0, 0x40
    ori r0, r0, 0xc208
    oris r0, r0, 0x388
    stw r0, 0x7ec(r31)
    bl fn_8045817C
    addi r3, r31, 0x14b0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8045374C_00001540
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_8045374C_00001540
    bl fn_80121F00
    bl fn_8013C504
    cmpwi r3, 0x0
    beq lbl_fn_8045374C_00001540
    addi r3, r31, 0x14b0
    bl fn_8047059C
    mr r25, r3
    addi r3, r31, 0x14b0
    bl fn_80470580
    mr r4, r3
    mr r5, r25
    addi r3, r1, 0x120
    bl fn_8004203C
lbl_fn_8045374C_00001528:
    addi r3, r1, 0x120
    bl fn_8005B3CC
    addi r3, r1, 0x120
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8045374C_00001528
lbl_fn_8045374C_00001540:
    lis r4, lbl_807549D0@ha
    addi r3, r31, 0x14ec
    addi r4, r4, lbl_807549D0@l
    addi r4, r4, 0x143
    bl fn_800132EC
    lfs f0, lbl_80886B78
    li r4, 0x0
    stw r3, 0x1904(r31)
    mr r3, r31
    stfs f0, 0x7d8(r31)
    bl fn_80339F74
    lfs f0, lbl_80886B80
    li r25, 0x0
    stfs f0, 0x10c(r1)
    stw r25, 0x110(r1)
    stw r25, 0x114(r1)
    bl fn_8000D9E8
    bl fn_802A36B0
    mr r24, r3
    li r30, 0xb4
    li r29, 0xb7
    li r28, 0xb8
    li r27, 0xb6
    li r26, 0xb5
    b lbl_fn_8045374C_00001628
lbl_fn_8045374C_000015A4:
    stw r24, 0x108(r1)
    mr r3, r24
    stw r25, 0x118(r1)
    bl fn_8000D9F8
    bl fn_80219558
    cmpwi r3, 0x0
    beq lbl_fn_8045374C_000015E4
    cmpwi r3, 0x3
    beq lbl_fn_8045374C_000015EC
    cmpwi r3, 0x4
    beq lbl_fn_8045374C_000015F4
    cmpwi r3, 0x5
    beq lbl_fn_8045374C_000015FC
    cmpwi r3, 0x6
    beq lbl_fn_8045374C_00001604
    b lbl_fn_8045374C_0000160C
lbl_fn_8045374C_000015E4:
    stw r30, 0x11c(r1)
    b lbl_fn_8045374C_00001610
lbl_fn_8045374C_000015EC:
    stw r26, 0x11c(r1)
    b lbl_fn_8045374C_00001610
lbl_fn_8045374C_000015F4:
    stw r27, 0x11c(r1)
    b lbl_fn_8045374C_00001610
lbl_fn_8045374C_000015FC:
    stw r28, 0x11c(r1)
    b lbl_fn_8045374C_00001610
lbl_fn_8045374C_00001604:
    stw r29, 0x11c(r1)
    b lbl_fn_8045374C_00001610
lbl_fn_8045374C_0000160C:
    stw r30, 0x11c(r1)
lbl_fn_8045374C_00001610:
    addi r3, r31, 0x19a0
    addi r4, r1, 0x108
    bl fn_80453E20
    mr r3, r24
    bl fn_802A4094
    mr r24, r3
lbl_fn_8045374C_00001628:
    cmpwi r24, 0x0
    bne lbl_fn_8045374C_000015A4
    bl fn_802F0990
    bl fn_80453DB4
    mr r4, r3
    addi r3, r31, 0x2560
    bl fn_80453C88
    bl fn_802F0990
    bl fn_80373100
    mr r4, r3
    addi r3, r31, 0x25e0
    bl fn_80453DBC
    addi r3, r31, 0x2630
    addi r4, r31, 0x2560
    bl fn_80453C88
    addi r3, r31, 0x26b0
    addi r4, r31, 0x25e0
    bl fn_80453DBC
    addi r25, r31, 0x2700
    addi r26, r31, 0x2780
    li r24, 0x0
lbl_fn_8045374C_0000167C:
    mr r3, r25
    addi r4, r31, 0x2560
    bl fn_80453C88
    mr r3, r26
    addi r4, r31, 0x25e0
    bl fn_80453DBC
    addi r24, r24, 0x1
    addi r26, r26, 0xd0
    cmpwi r24, 0x4
    addi r25, r25, 0xd0
    blt lbl_fn_8045374C_0000167C
    li r30, 0x2
    lis r4, 0xff23
    stw r30, 0x2774(r31)
    addi r3, r1, 0xf8
    addi r4, r4, 0x4794
    stw r30, 0x2778(r31)
    stw r30, 0x277c(r31)
    bl fn_800F8014
    mr r4, r3
    addi r3, r31, 0x2738
    bl fn_80042108
    lfs f2, lbl_80886B84
    addi r3, r1, 0xe8
    lfs f1, lbl_80886B98
    fmr f3, f2
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2784
    bl fn_803D7000
    lfs f1, lbl_80886B84
    addi r3, r1, 0xd8
    lfs f2, lbl_80886B98
    fmr f3, f1
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2794
    bl fn_803D7000
    lfs f1, lbl_80886B84
    addi r3, r1, 0xc8
    lfs f3, lbl_80886B78
    fmr f2, f1
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x27a4
    bl fn_803D7000
    stw r30, 0x2844(r31)
    addi r3, r1, 0xb8
    lis r4, 0xff80
    stw r30, 0x2848(r31)
    stw r30, 0x284c(r31)
    bl fn_800F8014
    mr r4, r3
    addi r3, r31, 0x2808
    bl fn_80042108
    lfs f2, lbl_80886B84
    addi r3, r1, 0xa8
    lfs f1, lbl_80886B90
    fmr f3, f2
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2854
    bl fn_803D7000
    lfs f1, lbl_80886B84
    addi r3, r1, 0x98
    lfs f2, lbl_80886B9C
    fmr f3, f1
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2864
    bl fn_803D7000
    lfs f1, lbl_80886B84
    addi r3, r1, 0x88
    lfs f3, lbl_80886B9C
    fmr f2, f1
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2874
    bl fn_803D7000
    stw r30, 0x2914(r31)
    addi r3, r1, 0x78
    li r4, -0x1
    stw r30, 0x2918(r31)
    stw r30, 0x291c(r31)
    bl fn_800F8014
    mr r4, r3
    addi r3, r31, 0x28d8
    bl fn_80042108
    lfs f2, lbl_80886B84
    addi r3, r1, 0x68
    lfs f1, lbl_80886B98
    fmr f3, f2
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2924
    bl fn_803D7000
    lfs f1, lbl_80886B84
    addi r3, r1, 0x58
    lfs f2, lbl_80886B98
    fmr f3, f1
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2934
    bl fn_803D7000
    lfs f1, lbl_80886B84
    addi r3, r1, 0x48
    lfs f3, lbl_80886B78
    fmr f2, f1
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2944
    bl fn_803D7000
    lis r4, 0xff00
    stw r30, 0x29e4(r31)
    addi r3, r1, 0x38
    stw r30, 0x29e8(r31)
    addi r4, r4, 0x4000
    stw r30, 0x29ec(r31)
    bl fn_800F8014
    mr r4, r3
    addi r3, r31, 0x29a8
    bl fn_80042108
    lfs f2, lbl_80886B84
    addi r3, r1, 0x28
    lfs f1, lbl_80886B98
    fmr f3, f2
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x29f4
    bl fn_803D7000
    lfs f1, lbl_80886B84
    addi r3, r1, 0x18
    lfs f2, lbl_80886B98
    fmr f3, f1
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2a04
    bl fn_803D7000
    lfs f1, lbl_80886B84
    addi r3, r1, 0x8
    lfs f3, lbl_80886B78
    fmr f2, f1
    lfs f4, lbl_80886B80
    bl fn_803D6FEC
    mr r4, r3
    addi r3, r31, 0x2a14
    bl fn_803D7000
    li r3, 0x1
    b lbl_fn_8045374C_00001900
lbl_fn_8045374C_000018FC:
    li r3, 0x0
lbl_fn_8045374C_00001900:
    addi r11, r1, 0x780
    bl _restgpr_24
    lwz r0, 0x784(r1)
    mtlr r0
    addi r1, r1, 0x780
    blr
}

asm void fn_80453C88(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_14
    lwz r15, 0x0(r4)
    lwz r16, 0x4(r4)
    lwz r17, 0x8(r4)
    lwz r18, 0xc(r4)
    lwz r19, 0x10(r4)
    lfs f3, 0x14(r4)
    lfs f2, 0x18(r4)
    lfs f1, 0x1c(r4)
    lfs f0, 0x20(r4)
    lwz r20, 0x24(r4)
    lwz r21, 0x28(r4)
    lwz r22, 0x2c(r4)
    lwz r23, 0x30(r4)
    lwz r24, 0x34(r4)
    lwz r25, 0x38(r4)
    lwz r26, 0x3c(r4)
    lwz r27, 0x40(r4)
    lwz r28, 0x44(r4)
    lwz r29, 0x48(r4)
    lwz r30, 0x4c(r4)
    lwz r31, 0x50(r4)
    lwz r12, 0x54(r4)
    lwz r11, 0x58(r4)
    lwz r10, 0x5c(r4)
    lwz r9, 0x60(r4)
    lwz r8, 0x64(r4)
    lwz r7, 0x68(r4)
    lwz r6, 0x6c(r4)
    lwz r5, 0x70(r4)
    lwz r0, 0x74(r4)
    lwz r14, 0x78(r4)
    lwz r4, 0x7c(r4)
    stw r11, 0x58(r3)
    addi r11, r1, 0x50
    stw r15, 0x0(r3)
    stw r16, 0x4(r3)
    stw r17, 0x8(r3)
    stw r18, 0xc(r3)
    stw r19, 0x10(r3)
    stfs f3, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f0, 0x20(r3)
    stw r20, 0x24(r3)
    stw r21, 0x28(r3)
    stw r22, 0x2c(r3)
    stw r23, 0x30(r3)
    stw r24, 0x34(r3)
    stw r25, 0x38(r3)
    stw r26, 0x3c(r3)
    stw r27, 0x40(r3)
    stw r28, 0x44(r3)
    stw r29, 0x48(r3)
    stw r30, 0x4c(r3)
    stw r31, 0x50(r3)
    stw r12, 0x54(r3)
    stw r10, 0x5c(r3)
    stw r9, 0x60(r3)
    stw r8, 0x64(r3)
    stw r7, 0x68(r3)
    stw r6, 0x6c(r3)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    stw r14, 0x78(r3)
    stw r4, 0x7c(r3)
    bl _restgpr_14
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
