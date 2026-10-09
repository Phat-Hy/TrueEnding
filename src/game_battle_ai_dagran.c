#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_17(void);
extern void _restgpr_20(void);
extern void _savegpr_14(void);
extern void _savegpr_17(void);
extern void _savegpr_20(void);
extern void dtor_80084684(void);
extern void fn_80051CD8(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_800629F0(void);
extern void fn_80063D3C(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800DC288(void);
extern void fn_80136138(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_8043465C(void);
extern void fn_804348C4(void);
extern void fn_80435684(void);
extern void fn_8044D710(void);
extern void fn_8044D884(void);
extern void fn_8044D9BC(void);
extern void fn_8044E1BC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_807541B8[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078EE40[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DFD8;
extern u32 lbl_8087DFDC;
extern u32 lbl_8087DFE0;
extern u32 lbl_8087DFE4;
extern u32 lbl_8087DFE8;
extern u32 lbl_8087DFEC;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F430;
extern u32 lbl_80886890;
extern u32 lbl_80886894;
extern u32 lbl_80886898;
extern u32 lbl_8088689C;
extern u32 lbl_808868A0;
extern u32 lbl_808868A4;

/* Function declarations */
void fn_80432C90(void);
void fn_80432CE8(void);
void fn_80432CF0(void);
void fn_80432D74(void);
void fn_80432E50(void);
void fn_80432EC0(void);
void fn_80432FD0(void);
void fn_80432FF8(void);
void fn_8043323C(void);
void fn_8043329C(void);
void fn_80433478(void);
void fn_804334EC(void);
void fn_804345C8(void);
void fn_804345E0(void);
void fn_804345E4(void);

asm void fn_80432C90(void)
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
    beq lbl_fn_80432C90_0000003C
    li r4, 0x0
    bl fn_80136138
    cmpwi r31, 0x0
    ble lbl_fn_80432C90_0000003C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80432C90_0000003C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80432CE8(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_80432CF0(void)
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
    beq lbl_fn_80432CF0_000000C4
    lis r5, lbl_807541B8@ha
    li r3, 0x268
    addi r5, r5, lbl_807541B8@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80432CF0_000000C8
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80432D74
    b lbl_fn_80432CF0_000000C8
lbl_fn_80432CF0_000000C4:
    li r3, 0x0
lbl_fn_80432CF0_000000C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80432D74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_803EC568
    lis r4, lbl_8078EE40@ha
    addi r3, r30, 0xf4
    addi r4, r4, lbl_8078EE40@l
    stw r4, 0x0(r30)
    bl fn_802377B8
    addi r3, r30, 0x100
    bl fn_802377B8
    addi r3, r30, 0x10c
    bl fn_802377B8
    lfs f0, lbl_80886894
    li r31, 0x0
    lfs f1, lbl_80886890
    li r0, 0x5
    stw r31, 0x118(r30)
    addi r3, r30, 0x16c
    stw r31, 0x11c(r30)
    stfs f1, 0x120(r30)
    stw r31, 0x124(r30)
    stw r31, 0x128(r30)
    stw r31, 0x12c(r30)
    stw r31, 0x130(r30)
    stw r31, 0x134(r30)
    stw r31, 0x138(r30)
    stw r31, 0x13c(r30)
    stw r31, 0x140(r30)
    stw r31, 0x144(r30)
    stw r31, 0x148(r30)
    stw r31, 0x14c(r30)
    stw r31, 0x150(r30)
    stfs f0, 0x154(r30)
    stfs f0, 0x158(r30)
    stfs f0, 0x15c(r30)
    stw r31, 0x160(r30)
    stw r0, 0x164(r30)
    stw r31, 0x168(r30)
    bl fn_8044D710
    stw r31, 0x260(r30)
    mr r4, r30
    addi r3, r30, 0x16c
    stw r31, 0x54(r30)
    bl fn_8044D9BC
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80432E50(void)
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
    beq lbl_fn_80432E50_00000214
    addic. r0, r3, 0x8
    beq lbl_fn_80432E50_00000204
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80432E50_00000204
    beq lbl_fn_80432E50_00000204
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80432E50_00000204:
    cmpwi r31, 0x0
    ble lbl_fn_80432E50_00000214
    mr r3, r30
    bl dtor_80084684
lbl_fn_80432E50_00000214:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80432EC0(void)
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
    beq lbl_fn_80432EC0_00000320
    li r4, -0x1
    addi r3, r3, 0x16c
    bl fn_8044D884
    addic. r0, r29, 0x138
    beq lbl_fn_80432EC0_00000284
    lwz r3, 0x140(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80432EC0_00000284
    lis r4, fn_80432E50@ha
    addi r4, r4, fn_80432E50@l
    bl fn_80695A50
lbl_fn_80432EC0_00000284:
    addic. r0, r29, 0x12c
    beq lbl_fn_80432EC0_000002A4
    lwz r3, 0x134(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80432EC0_000002A4
    beq lbl_fn_80432EC0_000002A4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80432EC0_000002A4:
    addic. r31, r29, 0x10c
    beq lbl_fn_80432EC0_000002C4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80432EC0_000002C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80432EC0_000002C4:
    addic. r31, r29, 0x100
    beq lbl_fn_80432EC0_000002E4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80432EC0_000002E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80432EC0_000002E4:
    addic. r31, r29, 0xf4
    beq lbl_fn_80432EC0_00000304
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80432EC0_00000304
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80432EC0_00000304:
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_80432EC0_00000320
    mr r3, r29
    bl dtor_80084684
lbl_fn_80432EC0_00000320:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80432FD0(void)
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

asm void fn_80432FF8(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x110
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    bl _savegpr_17
    li r0, 0x1
    stw r0, 0x54(r3)
    mr r20, r3
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80432FF8_000003B4
    lwz r27, 0x10d8(r3)
    b lbl_fn_80432FF8_000003B8
lbl_fn_80432FF8_000003B4:
    li r27, 0x0
lbl_fn_80432FF8_000003B8:
    cmpwi r27, 0x0
    beq lbl_fn_80432FF8_0000057C
    lwz r25, 0x74(r27)
    addi r30, r1, 0x9c
    lfs f30, lbl_80886894
    addi r29, r1, 0x30
    lfs f31, lbl_8088689C
    addi r28, r1, 0x90
    lfs f29, lbl_80886898
    addi r31, r1, 0x20
    li r24, 0x0
    li r19, 0x0
    b lbl_fn_80432FF8_00000570
lbl_fn_80432FF8_000003EC:
    lwz r0, 0x140(r20)
    li r22, 0x1
    add r23, r0, r19
    b lbl_fn_80432FF8_00000560
lbl_fn_80432FF8_000003FC:
    subi r0, r22, 0x1
    lwz r3, 0x9c(r27)
    mulli r0, r0, 0x30
    li r21, 0x0
    li r18, 0x0
    add r26, r3, r0
    psq_l f1, 0x4(r26), 0, 0
    lfs f2, 0xc(r26)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x14(r26)
    fmuls f0, f29, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_80432FF8_00000550
lbl_fn_80432FF8_00000434:
    lwz r0, 0x10(r23)
    addi r3, r1, 0x60
    li r4, 0x79
    stfs f30, 0xc8(r1)
    add r17, r0, r18
    stfs f30, 0xc0(r1)
    stfs f30, 0xbc(r1)
    stfs f30, 0xb8(r1)
    stfs f30, 0xb4(r1)
    stfs f30, 0xac(r1)
    stfs f30, 0xa8(r1)
    stfs f30, 0xa4(r1)
    stfs f30, 0xa0(r1)
    stfs f31, 0xc4(r1)
    stfs f31, 0xb0(r1)
    stfs f31, 0x9c(r1)
    lfs f1, 0xc(r17)
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r28
    psq_l f2, 0x8(r29), 0, 0
    addi r3, r1, 0x20
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f9, 0x14(r17)
    lfs f8, 0x8(r17)
    lfs f7, 0x4(r17)
    lfs f0, 0x0(r17)
    fadds f8, f8, f30
    fadds f7, f7, f9
    stfs f30, 0x8(r1)
    fadds f0, f0, f30
    stfs f7, 0xb8(r1)
    stfs f0, 0xa8(r1)
    stfs f8, 0xc8(r1)
    psq_l f1, 0x10(r17), 0, 0
    lfs f2, 0x18(r17)
    stfs f9, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x98(r1)
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_80432FF8_00000548
    lwz r0, 0x14(r23)
    slwi r0, r0, 2
    add r0, r23, r0
    addic. r3, r0, 0x18
    beq lbl_fn_80432FF8_00000538
    stw r26, 0x0(r3)
lbl_fn_80432FF8_00000538:
    lwz r3, 0x14(r23)
    addi r0, r3, 0x1
    stw r0, 0x14(r23)
    b lbl_fn_80432FF8_0000055C
lbl_fn_80432FF8_00000548:
    addi r21, r21, 0x1
    addi r18, r18, 0x1c
lbl_fn_80432FF8_00000550:
    lwz r0, 0x8(r23)
    cmplw r21, r0
    blt lbl_fn_80432FF8_00000434
lbl_fn_80432FF8_0000055C:
    addi r22, r22, 0x1
lbl_fn_80432FF8_00000560:
    cmpw r22, r25
    ble lbl_fn_80432FF8_000003FC
    addi r24, r24, 0x1
    addi r19, r19, 0x830
lbl_fn_80432FF8_00000570:
    lwz r0, 0x138(r20)
    cmplw r24, r0
    blt lbl_fn_80432FF8_000003EC
lbl_fn_80432FF8_0000057C:
    addi r11, r1, 0x110
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    bl _restgpr_17
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8043323C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8043323C_000005EC
    lwz r0, 0x11c(r3)
    li r4, 0x0
    stw r4, 0x118(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8043323C_000005F8
    li r4, 0x0
    bl fn_80435684
    b lbl_fn_8043323C_000005F8
lbl_fn_8043323C_000005EC:
    bl fn_8043465C
    mr r3, r31
    bl fn_804348C4
lbl_fn_8043323C_000005F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8043329C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    bl _savegpr_20
    lwz r0, 0x128(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8043329C_000007C0
    lwz r3, 0x11c(r3)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_8043329C_00000668
    lwz r3, lbl_8087EEB0
    addi r4, r31, 0x154
    lfs f1, lbl_808868A0
    li r5, -0x100
    lfs f2, lbl_80886894
    bl fn_80063D3C
lbl_fn_8043329C_00000668:
    lfs f30, lbl_80886894
    addi r26, r1, 0x20
    lfs f31, lbl_8088689C
    addi r25, r1, 0x80
    li r22, 0x0
    li r30, 0x0
    lis r28, lbl_807C7030@ha
    lis r27, 0x6700
    b lbl_fn_8043329C_000007B4
lbl_fn_8043329C_0000068C:
    lwz r3, 0x140(r31)
    li r21, -0x5600
    lwz r0, 0x144(r31)
    add r24, r3, r30
    cmplw r24, r0
    beq lbl_fn_8043329C_000006A8
    subi r21, r27, 0x5600
lbl_fn_8043329C_000006A8:
    li r20, 0x0
    li r29, 0x0
    b lbl_fn_8043329C_000007A0
lbl_fn_8043329C_000006B4:
    lwz r0, 0x10(r24)
    addi r3, r1, 0x50
    li r4, 0x79
    stfs f30, 0xac(r1)
    add r23, r0, r29
    stfs f30, 0xa4(r1)
    stfs f30, 0xa0(r1)
    stfs f30, 0x9c(r1)
    stfs f30, 0x98(r1)
    stfs f30, 0x90(r1)
    stfs f30, 0x8c(r1)
    stfs f30, 0x88(r1)
    stfs f30, 0x84(r1)
    stfs f31, 0xa8(r1)
    stfs f31, 0x94(r1)
    stfs f31, 0x80(r1)
    lfs f1, 0xc(r23)
    bl fn_805F8E70
    addi r3, r1, 0x80
    addi r4, r1, 0x50
    addi r5, r1, 0x20
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    mr r6, r21
    psq_l f2, 0x8(r26), 0, 0
    mr r7, r25
    psq_l f3, 0x10(r26), 0, 0
    addi r4, r28, lbl_807C7030@l
    psq_l f4, 0x18(r26), 0, 0
    addi r5, r23, 0x10
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    fmr f1, f30
    lwz r3, lbl_8087EEB0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
    lfs f9, 0x14(r23)
    lfs f8, 0x8(r23)
    lfs f7, 0x4(r23)
    lfs f0, 0x0(r23)
    fadds f8, f8, f30
    fadds f7, f7, f9
    stfs f30, 0x8(r1)
    fadds f0, f0, f30
    stfs f9, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    stfs f0, 0x8c(r1)
    stfs f7, 0x9c(r1)
    stfs f8, 0xac(r1)
    bl fn_800629F0
    addi r20, r20, 0x1
    addi r29, r29, 0x1c
lbl_fn_8043329C_000007A0:
    lwz r0, 0x8(r24)
    cmplw r20, r0
    blt lbl_fn_8043329C_000006B4
    addi r22, r22, 0x1
    addi r30, r30, 0x830
lbl_fn_8043329C_000007B4:
    lwz r0, 0x138(r31)
    cmplw r22, r0
    blt lbl_fn_8043329C_0000068C
lbl_fn_8043329C_000007C0:
    addi r11, r1, 0xe0
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    bl _restgpr_20
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80433478(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xf4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80433478_0000082C
    addi r3, r31, 0x100
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80433478_0000082C
    addi r3, r31, 0x10c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80433478_00000834
lbl_fn_80433478_0000082C:
    li r3, 0x1
    b lbl_fn_80433478_00000848
lbl_fn_80433478_00000834:
    addi r3, r31, 0x16c
    bl fn_8044E1BC
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_80433478_00000848:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804334EC(void)
{
    nofralloc
    stwu r1, -0xef0(r1)
    mflr r0
    stw r0, 0xef4(r1)
    li r0, 0xee8
    addi r11, r1, 0xee0
    stfd f31, 0xee0(r1)
    psq_stx f31, r1, r0, 0, 0
    bl _savegpr_14
    mr r15, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r16, r3
    addi r3, r15, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r24, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x858(r1)
    mr r14, r3
    addi r3, r1, 0x868
    stw r24, 0x85c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r24, 0x860(r1)
    stw r24, 0x864(r1)
    stw r24, 0xe88(r1)
    bl memset
    addi r3, r1, 0xe68
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x858(r1)
    mr r4, r14
    mr r5, r16
    addi r3, r1, 0x858
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x858
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x858(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r25, lbl_807541B8@ha
    lfs f31, lbl_808868A4
    addi r25, r25, lbl_807541B8@l
    addi r19, r1, 0x8
    lis r28, fn_804345E0@ha
    li r29, 0x100
    lis r26, fn_804345C8@ha
    lis r27, fn_80432E50@ha
    li r14, 0x8
lbl_fn_804334EC_00000930:
    addi r3, r1, 0x858
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r16, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804334EC_00001904
    addi r4, r25, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804334EC_00000970
    addi r3, r1, 0x858
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r15, 0xf4
    bl fn_8023780C
    b lbl_fn_804334EC_00001904
lbl_fn_804334EC_00000970:
    mr r3, r16
    addi r4, r25, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804334EC_0000099C
    addi r3, r1, 0x858
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r15, 0x100
    bl fn_8023780C
    b lbl_fn_804334EC_00001904
lbl_fn_804334EC_0000099C:
    mr r3, r16
    addi r4, r25, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804334EC_000009C8
    addi r3, r1, 0x858
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r15, 0x10c
    bl fn_8023780C
    b lbl_fn_804334EC_00001904
lbl_fn_804334EC_000009C8:
    mr r3, r16
    addi r4, r25, 0x16
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804334EC_00000A00
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x120(r15)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x124(r15)
    b lbl_fn_804334EC_00001904
lbl_fn_804334EC_00000A00:
    mr r3, r16
    addi r4, r25, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804334EC_00001454
    stw r24, 0x30(r1)
    addi r3, r1, 0x858
    stw r24, 0x34(r1)
    stw r24, 0x38(r1)
    stw r24, 0x3c(r1)
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x28(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x2c(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x840(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x844(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x848(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x84c(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x850(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x854(r1)
    lwz r0, 0x140(r15)
    cmpwi r0, 0x0
    beq lbl_fn_804334EC_00000ABC
    lwz r0, 0x13c(r15)
    cmpwi r0, 0x0
    bne lbl_fn_804334EC_00000E0C
lbl_fn_804334EC_00000ABC:
    lwz r0, 0x13c(r15)
    cmplwi r0, 0x8
    bgt lbl_fn_804334EC_00001164
    li r3, 0x4190
    li r4, 0x0
    la r5, lbl_8087DFEC
    la r6, lbl_8087DFE8
    li r7, 0x0
    bl fn_800846FC
    addi r4, r26, fn_804345C8@l
    addi r5, r27, fn_80432E50@l
    li r6, 0x830
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x140(r15)
    mr r22, r3
    cmpwi r0, 0x0
    beq lbl_fn_804334EC_00000DFC
    lwz r0, 0x138(r15)
    li r17, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_804334EC_00000B18
    mr r17, r0
lbl_fn_804334EC_00000B18:
    li r18, 0x0
    li r16, 0x0
    b lbl_fn_804334EC_00000DE8
lbl_fn_804334EC_00000B24:
    lwz r0, 0x140(r15)
    add r20, r22, r16
    add r21, r0, r16
    lwzx r0, r16, r0
    stwx r0, r22, r16
    lwz r0, 0x4(r21)
    stw r0, 0x4(r20)
    stw r24, 0x8(r20)
    stw r24, 0xc(r20)
    lwz r3, 0x10(r20)
    cmpwi r3, 0x0
    beq lbl_fn_804334EC_00000B64
    beq lbl_fn_804334EC_00000B60
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804334EC_00000B60:
    stw r24, 0x10(r20)
lbl_fn_804334EC_00000B64:
    lwz r23, 0x8(r21)
    cmpwi r23, 0x0
    beq lbl_fn_804334EC_00000BA8
    mulli r3, r23, 0x1c
    li r4, 0x0
    la r5, lbl_8087DFE4
    la r6, lbl_8087DFE0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r23
    addi r4, r28, fn_804345E0@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    mr r30, r3
    b lbl_fn_804334EC_00000BAC
lbl_fn_804334EC_00000BA8:
    li r30, 0x0
lbl_fn_804334EC_00000BAC:
    lwz r0, 0x10(r20)
    cmpwi r0, 0x0
    beq lbl_fn_804334EC_00000D24
    lwz r0, 0x8(r20)
    mr r4, r23
    cmplw r23, r0
    ble lbl_fn_804334EC_00000BCC
    mr r4, r0
lbl_fn_804334EC_00000BCC:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_804334EC_00000D10
    srwi. r0, r4, 2
    mtctr r0
    beq lbl_fn_804334EC_00000CD0
lbl_fn_804334EC_00000BE4:
    lwz r0, 0x10(r20)
    add r6, r30, r3
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r30, r3
    lwz r0, 0x10(r20)
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r30, r3
    lwz r0, 0x10(r20)
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r30, r3
    lwz r0, 0x10(r20)
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    bdnz lbl_fn_804334EC_00000BE4
    andi. r4, r4, 0x3
    beq lbl_fn_804334EC_00000D10
lbl_fn_804334EC_00000CD0:
    mtctr r4
lbl_fn_804334EC_00000CD4:
    lwz r0, 0x10(r20)
    add r6, r30, r3
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    bdnz lbl_fn_804334EC_00000CD4
lbl_fn_804334EC_00000D10:
    lwz r3, 0x10(r20)
    cmpwi r3, 0x0
    beq lbl_fn_804334EC_00000D24
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804334EC_00000D24:
    stw r30, 0x10(r20)
    li r5, 0x0
    li r3, 0x0
    stw r23, 0x8(r20)
    stw r23, 0xc(r20)
    b lbl_fn_804334EC_00000D7C
lbl_fn_804334EC_00000D3C:
    lwz r4, 0x10(r21)
    addi r5, r5, 0x1
    lwz r0, 0x10(r20)
    add r6, r4, r3
    lfs f2, 0x8(r6)
    add r4, r0, r3
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r3, 0x1c
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r4)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r4), 0, 0
    stfs f2, 0x18(r4)
lbl_fn_804334EC_00000D7C:
    lwz r0, 0x8(r20)
    cmplw r5, r0
    blt lbl_fn_804334EC_00000D3C
    addi r5, r20, 0x10
    addi r4, r21, 0x10
    mtctr r29
lbl_fn_804334EC_00000D94:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804334EC_00000D94
    lwz r0, 0x4(r4)
    addi r18, r18, 0x1
    stw r0, 0x4(r5)
    addi r16, r16, 0x830
    lfs f0, 0x818(r21)
    stfs f0, 0x818(r20)
    lwz r0, 0x81c(r21)
    stw r0, 0x81c(r20)
    lwz r0, 0x820(r21)
    stw r0, 0x820(r20)
    lwz r0, 0x824(r21)
    stw r0, 0x824(r20)
    lwz r0, 0x828(r21)
    stw r0, 0x828(r20)
    lwz r0, 0x82c(r21)
    stw r0, 0x82c(r20)
lbl_fn_804334EC_00000DE8:
    cmplw r18, r17
    blt lbl_fn_804334EC_00000B24
    lwz r3, 0x140(r15)
    addi r4, r27, fn_80432E50@l
    bl fn_80695A50
lbl_fn_804334EC_00000DFC:
    li r0, 0x8
    stw r22, 0x140(r15)
    stw r0, 0x13c(r15)
    b lbl_fn_804334EC_00001164
lbl_fn_804334EC_00000E0C:
    lwz r3, 0x138(r15)
    cmplw r3, r0
    blt lbl_fn_804334EC_00001164
    slwi r20, r3, 1
    cmplw r0, r20
    bgt lbl_fn_804334EC_00001164
    mulli r3, r20, 0x830
    li r4, 0x0
    la r5, lbl_8087DFEC
    la r6, lbl_8087DFE8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r20
    addi r4, r26, fn_804345C8@l
    addi r5, r27, fn_80432E50@l
    li r6, 0x830
    bl fn_80695720
    lwz r0, 0x140(r15)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_804334EC_0000115C
    lwz r0, 0x138(r15)
    mr r30, r20
    cmplw r20, r0
    ble lbl_fn_804334EC_00000E78
    mr r30, r0
lbl_fn_804334EC_00000E78:
    li r23, 0x0
    li r31, 0x0
    b lbl_fn_804334EC_00001148
lbl_fn_804334EC_00000E84:
    lwz r0, 0x140(r15)
    add r22, r18, r31
    add r21, r0, r31
    lwzx r0, r31, r0
    stwx r0, r18, r31
    lwz r0, 0x4(r21)
    stw r0, 0x4(r22)
    stw r24, 0x8(r22)
    stw r24, 0xc(r22)
    lwz r3, 0x10(r22)
    cmpwi r3, 0x0
    beq lbl_fn_804334EC_00000EC4
    beq lbl_fn_804334EC_00000EC0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804334EC_00000EC0:
    stw r24, 0x10(r22)
lbl_fn_804334EC_00000EC4:
    lwz r17, 0x8(r21)
    cmpwi r17, 0x0
    beq lbl_fn_804334EC_00000F08
    mulli r3, r17, 0x1c
    li r4, 0x0
    la r5, lbl_8087DFE4
    la r6, lbl_8087DFE0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r17
    addi r4, r28, fn_804345E0@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    mr r16, r3
    b lbl_fn_804334EC_00000F0C
lbl_fn_804334EC_00000F08:
    li r16, 0x0
lbl_fn_804334EC_00000F0C:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x0
    beq lbl_fn_804334EC_00001084
    lwz r0, 0x8(r22)
    mr r4, r17
    cmplw r17, r0
    ble lbl_fn_804334EC_00000F2C
    mr r4, r0
lbl_fn_804334EC_00000F2C:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_804334EC_00001070
    srwi. r0, r4, 2
    mtctr r0
    beq lbl_fn_804334EC_00001030
lbl_fn_804334EC_00000F44:
    lwz r0, 0x10(r22)
    add r6, r16, r3
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r16, r3
    lwz r0, 0x10(r22)
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r16, r3
    lwz r0, 0x10(r22)
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r16, r3
    lwz r0, 0x10(r22)
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    bdnz lbl_fn_804334EC_00000F44
    andi. r4, r4, 0x3
    beq lbl_fn_804334EC_00001070
lbl_fn_804334EC_00001030:
    mtctr r4
lbl_fn_804334EC_00001034:
    lwz r0, 0x10(r22)
    add r6, r16, r3
    add r5, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    bdnz lbl_fn_804334EC_00001034
lbl_fn_804334EC_00001070:
    lwz r3, 0x10(r22)
    cmpwi r3, 0x0
    beq lbl_fn_804334EC_00001084
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804334EC_00001084:
    stw r16, 0x10(r22)
    li r5, 0x0
    li r3, 0x0
    stw r17, 0x8(r22)
    stw r17, 0xc(r22)
    b lbl_fn_804334EC_000010DC
lbl_fn_804334EC_0000109C:
    lwz r4, 0x10(r21)
    addi r5, r5, 0x1
    lwz r0, 0x10(r22)
    add r6, r4, r3
    lfs f2, 0x8(r6)
    add r4, r0, r3
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r3, 0x1c
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r4)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r4), 0, 0
    stfs f2, 0x18(r4)
lbl_fn_804334EC_000010DC:
    lwz r0, 0x8(r22)
    cmplw r5, r0
    blt lbl_fn_804334EC_0000109C
    addi r5, r22, 0x10
    addi r4, r21, 0x10
    mtctr r29
lbl_fn_804334EC_000010F4:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804334EC_000010F4
    lwz r0, 0x4(r4)
    addi r23, r23, 0x1
    stw r0, 0x4(r5)
    addi r31, r31, 0x830
    lfs f0, 0x818(r21)
    stfs f0, 0x818(r22)
    lwz r0, 0x81c(r21)
    stw r0, 0x81c(r22)
    lwz r0, 0x820(r21)
    stw r0, 0x820(r22)
    lwz r0, 0x824(r21)
    stw r0, 0x824(r22)
    lwz r0, 0x828(r21)
    stw r0, 0x828(r22)
    lwz r0, 0x82c(r21)
    stw r0, 0x82c(r22)
lbl_fn_804334EC_00001148:
    cmplw r23, r30
    blt lbl_fn_804334EC_00000E84
    lwz r3, 0x140(r15)
    addi r4, r27, fn_80432E50@l
    bl fn_80695A50
lbl_fn_804334EC_0000115C:
    stw r18, 0x140(r15)
    stw r20, 0x13c(r15)
lbl_fn_804334EC_00001164:
    lwz r0, 0x138(r15)
    lwz r4, 0x140(r15)
    mulli r3, r0, 0x830
    lwz r0, 0x28(r1)
    stwx r0, r4, r3
    add r16, r4, r3
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r16)
    stw r24, 0x8(r16)
    stw r24, 0xc(r16)
    lwz r3, 0x10(r16)
    cmpwi r3, 0x0
    beq lbl_fn_804334EC_000011A8
    beq lbl_fn_804334EC_000011A4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804334EC_000011A4:
    stw r24, 0x10(r16)
lbl_fn_804334EC_000011A8:
    lwz r17, 0x30(r1)
    cmpwi r17, 0x0
    beq lbl_fn_804334EC_000011EC
    mulli r3, r17, 0x1c
    li r4, 0x0
    la r5, lbl_8087DFE4
    la r6, lbl_8087DFE0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r17
    addi r4, r28, fn_804345E0@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    mr r18, r3
    b lbl_fn_804334EC_000011F0
lbl_fn_804334EC_000011EC:
    li r18, 0x0
lbl_fn_804334EC_000011F0:
    lwz r0, 0x10(r16)
    cmpwi r0, 0x0
    beq lbl_fn_804334EC_00001368
    lwz r0, 0x8(r16)
    mr r4, r17
    cmplw r17, r0
    ble lbl_fn_804334EC_00001210
    mr r4, r0
lbl_fn_804334EC_00001210:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_804334EC_00001354
    srwi. r0, r4, 2
    mtctr r0
    beq lbl_fn_804334EC_00001314
lbl_fn_804334EC_00001228:
    lwz r0, 0x10(r16)
    add r5, r18, r3
    add r6, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    add r5, r18, r3
    lwz r0, 0x10(r16)
    add r6, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    add r5, r18, r3
    lwz r0, 0x10(r16)
    add r6, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    add r5, r18, r3
    lwz r0, 0x10(r16)
    add r6, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    bdnz lbl_fn_804334EC_00001228
    andi. r4, r4, 0x3
    beq lbl_fn_804334EC_00001354
lbl_fn_804334EC_00001314:
    mtctr r4
lbl_fn_804334EC_00001318:
    lwz r0, 0x10(r16)
    add r5, r18, r3
    add r6, r0, r3
    addi r3, r3, 0x1c
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    bdnz lbl_fn_804334EC_00001318
lbl_fn_804334EC_00001354:
    lwz r3, 0x10(r16)
    cmpwi r3, 0x0
    beq lbl_fn_804334EC_00001368
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804334EC_00001368:
    stw r18, 0x10(r16)
    li r5, 0x0
    li r3, 0x0
    stw r17, 0x8(r16)
    stw r17, 0xc(r16)
    b lbl_fn_804334EC_000013C0
lbl_fn_804334EC_00001380:
    lwz r4, 0x38(r1)
    addi r5, r5, 0x1
    lwz r0, 0x10(r16)
    add r6, r4, r3
    lfs f2, 0x8(r6)
    add r4, r0, r3
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r3, 0x1c
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r4)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r4), 0, 0
    stfs f2, 0x18(r4)
lbl_fn_804334EC_000013C0:
    lwz r0, 0x8(r16)
    cmplw r5, r0
    blt lbl_fn_804334EC_00001380
    addi r5, r16, 0x10
    addi r4, r1, 0x38
    mtctr r29
lbl_fn_804334EC_000013D8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804334EC_000013D8
    lwz r3, 0x4(r4)
    addic. r0, r1, 0x30
    stw r3, 0x4(r5)
    lfs f0, 0x840(r1)
    stfs f0, 0x818(r16)
    lwz r0, 0x844(r1)
    stw r0, 0x81c(r16)
    lwz r0, 0x848(r1)
    stw r0, 0x820(r16)
    lwz r0, 0x84c(r1)
    stw r0, 0x824(r16)
    lwz r0, 0x850(r1)
    stw r0, 0x828(r16)
    lwz r0, 0x854(r1)
    stw r0, 0x82c(r16)
    lwz r3, 0x138(r15)
    addi r0, r3, 0x1
    stw r0, 0x138(r15)
    beq lbl_fn_804334EC_00001904
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804334EC_00001904
    beq lbl_fn_804334EC_00001904
    subi r3, r3, 0x10
    bl fn_80084C24
    b lbl_fn_804334EC_00001904
lbl_fn_804334EC_00001454:
    mr r3, r16
    addi r4, r25, 0x20
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804334EC_00001904
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_80684600
    lwz r0, 0x138(r15)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804334EC_00001904
lbl_fn_804334EC_00001488:
    lwz r0, 0x140(r15)
    add r17, r0, r4
    lwzx r0, r4, r0
    cmpw r3, r0
    bne lbl_fn_804334EC_000018FC
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f0, f31, f1
    addi r3, r1, 0x858
    stfs f0, 0x14(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x18(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1c(r1)
    addi r3, r1, 0x858
    bl fn_8005B9CC
    bl fn_800DC288
    lwz r0, 0x10(r17)
    stfs f1, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804334EC_00001528
    lwz r0, 0xc(r17)
    cmpwi r0, 0x0
    bne lbl_fn_804334EC_000016E8
lbl_fn_804334EC_00001528:
    lwz r0, 0xc(r17)
    cmplwi r0, 0x8
    bgt lbl_fn_804334EC_000018B4
    li r3, 0xf0
    li r4, 0x0
    la r5, lbl_8087DFDC
    la r6, lbl_8087DFD8
    li r7, 0x0
    bl fn_800846FC
    addi r4, r28, fn_804345E0@l
    li r5, 0x0
    li r6, 0x1c
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x10(r17)
    mr r16, r3
    cmpwi r0, 0x0
    beq lbl_fn_804334EC_000016DC
    lwz r0, 0x8(r17)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_804334EC_00001584
    mr r5, r0
lbl_fn_804334EC_00001584:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_804334EC_000016C8
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_804334EC_00001688
lbl_fn_804334EC_0000159C:
    lwz r0, 0x10(r17)
    add r6, r3, r4
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r3, r4
    lwz r0, 0x10(r17)
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r3, r4
    lwz r0, 0x10(r17)
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r3, r4
    lwz r0, 0x10(r17)
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    bdnz lbl_fn_804334EC_0000159C
    andi. r5, r5, 0x3
    beq lbl_fn_804334EC_000016C8
lbl_fn_804334EC_00001688:
    mtctr r5
lbl_fn_804334EC_0000168C:
    lwz r0, 0x10(r17)
    add r6, r3, r4
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    bdnz lbl_fn_804334EC_0000168C
lbl_fn_804334EC_000016C8:
    lwz r3, 0x10(r17)
    cmpwi r3, 0x0
    beq lbl_fn_804334EC_000016DC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804334EC_000016DC:
    stw r16, 0x10(r17)
    stw r14, 0xc(r17)
    b lbl_fn_804334EC_000018B4
lbl_fn_804334EC_000016E8:
    lwz r3, 0x8(r17)
    cmplw r3, r0
    blt lbl_fn_804334EC_000018B4
    slwi r16, r3, 1
    cmplw r0, r16
    bgt lbl_fn_804334EC_000018B4
    mulli r3, r16, 0x1c
    li r4, 0x0
    la r5, lbl_8087DFDC
    la r6, lbl_8087DFD8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r16
    addi r4, r28, fn_804345E0@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    lwz r0, 0x10(r17)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_804334EC_000018AC
    lwz r0, 0x8(r17)
    mr r5, r16
    cmplw r16, r0
    ble lbl_fn_804334EC_00001754
    mr r5, r0
lbl_fn_804334EC_00001754:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_804334EC_00001898
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_804334EC_00001858
lbl_fn_804334EC_0000176C:
    lwz r0, 0x10(r17)
    add r6, r3, r4
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r3, r4
    lwz r0, 0x10(r17)
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r3, r4
    lwz r0, 0x10(r17)
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    add r6, r3, r4
    lwz r0, 0x10(r17)
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    bdnz lbl_fn_804334EC_0000176C
    andi. r5, r5, 0x3
    beq lbl_fn_804334EC_00001898
lbl_fn_804334EC_00001858:
    mtctr r5
lbl_fn_804334EC_0000185C:
    lwz r0, 0x10(r17)
    add r6, r3, r4
    add r7, r0, r4
    addi r4, r4, 0x1c
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r7)
    psq_l f1, 0x10(r7), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    bdnz lbl_fn_804334EC_0000185C
lbl_fn_804334EC_00001898:
    lwz r3, 0x10(r17)
    cmpwi r3, 0x0
    beq lbl_fn_804334EC_000018AC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804334EC_000018AC:
    stw r18, 0x10(r17)
    stw r16, 0xc(r17)
lbl_fn_804334EC_000018B4:
    lwz r0, 0x8(r17)
    lwz r3, 0x10(r17)
    mulli r0, r0, 0x1c
    psq_l f1, 0x0(r19), 0, 0
    lfs f2, 0x10(r1)
    lfs f0, 0x14(r1)
    add r3, r3, r0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x10(r19), 0, 0
    stfs f2, 0x8(r3)
    lfs f2, 0x20(r1)
    stfs f0, 0xc(r3)
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    lwz r3, 0x8(r17)
    addi r0, r3, 0x1
    stw r0, 0x8(r17)
    b lbl_fn_804334EC_00001904
lbl_fn_804334EC_000018FC:
    addi r4, r4, 0x830
    bdnz lbl_fn_804334EC_00001488
lbl_fn_804334EC_00001904:
    addi r3, r1, 0x858
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804334EC_00000930
    li r0, 0xee8
    addi r11, r1, 0xee0
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xee0(r1)
    bl _restgpr_14
    lwz r0, 0xef4(r1)
    mtlr r0
    addi r1, r1, 0xef0
    blr
}

asm void fn_804345C8(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_804345E0(void)
{
    nofralloc
    blr
}

asm void fn_804345E4(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_804345E4_00001964
    li r3, 0x0
    blr
lbl_fn_804345E4_00001964:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    mr r3, r0
    blr
}
