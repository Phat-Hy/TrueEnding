#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_800D246C(void);
extern void fn_801F6C2C(void);
extern void fn_801F6C80(void);
extern void fn_80202D00(void);
extern void fn_803DF5B4(void);

/* External data declarations */
extern u8 lbl_80750650[];
extern u8 lbl_807506A0[];

/* Small data declarations */
extern u32 lbl_80885D58;
extern u32 lbl_80885D5C;
extern u32 lbl_80885D60;
extern u32 lbl_80885DDC;
extern u32 lbl_80885DE8;

/* Function declarations */
void fn_803D164C(void);
void fn_803D2134(void);
void fn_803D213C(void);
void fn_803D2148(void);
void fn_803D215C(void);
void fn_803D218C(void);
void fn_803D2194(void);
void fn_803D2A54(void);
void fn_803D2A60(void);

asm void fn_803D164C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_24
    mr r27, r3
    lwz r3, 0x5c(r3)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x5c(r27)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x60(r27)
    bl fn_800D246C
    lwz r3, 0x60(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x64(r27)
    cmpwi r3, 0x0
    beq lbl_fn_803D164C_00000088
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x64(r27)
    li r0, 0x0
    stb r0, 0x4d(r3)
    lwz r3, 0x64(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D164C_00000088:
    lwz r3, 0x68(r27)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x68(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x6c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_803D164C_000000C8
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x6c(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D164C_000000C8:
    lwz r3, 0x70(r27)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x70(r27)
    li r31, 0x0
    li r4, 0x0
    stb r31, 0x4d(r3)
    lwz r3, 0x70(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x7c(r27)
    bl fn_800D246C
    lwz r3, 0x7c(r27)
    stb r31, 0x4d(r3)
    lwz r28, 0x7c(r27)
    mr r3, r28
    bl fn_801F6C2C
    stfs f1, 0x50(r28)
    li r4, 0x0
    lwz r3, 0x7c(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x74(r27)
    bl fn_800D246C
    lwz r3, 0x74(r27)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x78(r27)
    bl fn_800D246C
    lwz r3, 0x78(r27)
    mr r30, r27
    mr r29, r27
    li r28, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D164C_00000168:
    lwz r3, 0xbc(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xbc(r30)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xc0(r30)
    bl fn_800D246C
    lwz r3, 0xc0(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xc4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803D164C_000001CC
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xc4(r30)
    stb r31, 0x4d(r3)
    lwz r3, 0xc4(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D164C_000001CC:
    lwz r3, 0xc8(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xc8(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xcc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803D164C_0000020C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xcc(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D164C_0000020C:
    lwz r3, 0xd0(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xd0(r30)
    li r4, 0x0
    stb r31, 0x4d(r3)
    lwz r3, 0xd0(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xdc(r30)
    bl fn_800D246C
    lwz r3, 0xdc(r30)
    stb r31, 0x4d(r3)
    lwz r26, 0xdc(r30)
    mr r3, r26
    bl fn_801F6C2C
    stfs f1, 0x50(r26)
    mr r25, r29
    li r24, 0x0
    lwz r3, 0xdc(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D164C_0000026C:
    lwz r3, 0x318(r25)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x318(r25)
    stb r31, 0x4d(r3)
    lwz r26, 0x318(r25)
    mr r3, r26
    bl fn_801F6C2C
    stfs f1, 0x50(r26)
    addi r24, r24, 0x1
    cmpwi r24, 0x5
    lwz r3, 0x318(r25)
    addi r25, r25, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D164C_0000026C
    lwz r3, 0x32c(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x32c(r29)
    stb r31, 0x4d(r3)
    lwz r26, 0x32c(r29)
    mr r3, r26
    bl fn_801F6C2C
    stfs f1, 0x50(r26)
    li r4, 0x0
    lwz r3, 0x32c(r29)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x330(r29)
    bl fn_800D246C
    lwz r3, 0x330(r29)
    stb r31, 0x4d(r3)
    lwz r26, 0x330(r29)
    mr r3, r26
    bl fn_801F6C2C
    stfs f1, 0x50(r26)
    addi r28, r28, 0x1
    cmpwi r28, 0x6
    addi r30, r30, 0x60
    lwz r3, 0x330(r29)
    addi r29, r29, 0x20
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D164C_00000168
    lwz r3, 0x3ec(r27)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x3ec(r27)
    mr r26, r27
    li r24, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
lbl_fn_803D164C_00000350:
    lwz r3, 0x574(r26)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x574(r26)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x594(r26)
    bl fn_800D246C
    lwz r3, 0x594(r26)
    addi r24, r24, 0x1
    cmpwi r24, 0x8
    addi r26, r26, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D164C_00000350
    lwz r3, 0x5b8(r27)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x5b8(r27)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x3d8(r27)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x3d8(r27)
    bl fn_800D246C
    lwz r4, 0x3d8(r27)
    lis r3, lbl_80750650@ha
    lis r29, lbl_807506A0@ha
    lfd f31, lbl_80750650@l(r3)
    lwz r0, 0x38(r4)
    mr r26, r27
    addi r29, r29, lbl_807506A0@l
    li r24, 0x0
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lis r28, 0x4330
lbl_fn_803D164C_000003FC:
    lwz r3, 0x3dc(r26)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x3dc(r26)
    xoris r0, r24, 0x8000
    stw r0, 0xc(r1)
    addi r4, r29, 0x109d
    lwz r0, 0x38(r3)
    stw r28, 0x8(r1)
    ori r0, r0, 0x4
    lfd f0, 0x8(r1)
    stw r0, 0x38(r3)
    fsubs f1, f0, f31
    lwz r3, 0x3dc(r26)
    bl fn_801F6C80
    addi r24, r24, 0x1
    addi r26, r26, 0x4
    cmpwi r24, 0x4
    blt lbl_fn_803D164C_000003FC
    mr r26, r27
    li r24, 0x0
    li r28, 0x0
lbl_fn_803D164C_00000454:
    lwz r3, 0x6fc(r26)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x6fc(r26)
    addi r24, r24, 0x1
    cmpwi r24, 0x6
    stb r28, 0x4d(r3)
    lwz r3, 0x6fc(r26)
    addi r26, r26, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D164C_00000454
    lwz r3, 0x714(r27)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x714(r27)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x714(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x71c(r27)
    bl fn_800D246C
    lwz r3, 0x71c(r27)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x718(r27)
    bl fn_800D246C
    lwz r3, 0x718(r27)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x718(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x720(r27)
    bl fn_800D246C
    lwz r3, 0x720(r27)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x72c(r27)
    bl fn_800D246C
    lwz r3, 0x72c(r27)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x72c(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x730(r27)
    bl fn_800D246C
    lwz r3, 0x730(r27)
    mr r26, r27
    lfs f31, lbl_80885DDC
    li r24, 0x0
    lwz r0, 0x38(r3)
    li r28, 0x0
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D164C_00000570:
    lwz r3, 0x8a0(r26)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x8a0(r26)
    addi r24, r24, 0x1
    cmpwi r24, 0xc
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x8a0(r26)
    stb r28, 0x4d(r3)
    lwz r3, 0x8a0(r26)
    addi r26, r26, 0x4
    stfs f31, 0x54(r3)
    blt lbl_fn_803D164C_00000570
    lwz r3, 0xa84(r27)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xa84(r27)
    li r4, 0x0
    lfs f0, lbl_80885D60
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xa84(r27)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xa84(r27)
    stfs f0, 0x104(r3)
    lwz r3, 0xa84(r27)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0xa88(r27)
    bl fn_800D246C
    lwz r3, 0xa88(r27)
    li r4, 0x0
    lfs f0, lbl_80885D60
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xa88(r27)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xa88(r27)
    stfs f0, 0x104(r3)
    lwz r3, 0xa88(r27)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0x73c(r27)
    bl fn_800D246C
    lwz r3, 0x73c(r27)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x73c(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x740(r27)
    bl fn_800D246C
    lwz r3, 0x740(r27)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x740(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x744(r27)
    bl fn_800D246C
    lwz r3, 0x744(r27)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r3)
    lwz r3, 0x744(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x7b8(r27)
    bl fn_800D246C
    lwz r3, 0x7b8(r27)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x7b8(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x7bc(r27)
    bl fn_800D246C
    lwz r3, 0x7bc(r27)
    mr r30, r27
    li r28, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x7bc(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D164C_00000718:
    lwz r3, 0x814(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x814(r30)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x814(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x81c(r30)
    bl fn_800D246C
    lwz r3, 0x81c(r30)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x824(r30)
    bl fn_800D246C
    lwz r3, 0x824(r30)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x824(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x82c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803D164C_000007C0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x82c(r30)
    lwz r0, 0xfc(r3)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r3)
    lwz r3, 0x82c(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D164C_000007C0:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x2
    blt lbl_fn_803D164C_00000718
    lwz r3, 0x83c(r27)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x83c(r27)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x83c(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x840(r27)
    bl fn_800D246C
    lwz r3, 0x840(r27)
    li r31, 0x0
    mr r30, r27
    li r28, 0x0
    lwz r0, 0xfc(r3)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r3)
    lwz r3, 0x840(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    stw r31, 0x838(r27)
lbl_fn_803D164C_00000838:
    lwz r3, 0xb38(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb38(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb38(r30)
    bl fn_80202D00
    stb r31, 0x4d(r3)
    li r4, 0x0
    lwz r3, 0xb3c(r30)
    bl fn_800D246C
    lwz r3, 0xb3c(r30)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb40(r30)
    bl fn_800D246C
    lwz r3, 0xb40(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb40(r30)
    bl fn_80202D00
    stb r31, 0x4d(r3)
    li r4, 0x0
    lwz r3, 0xb44(r30)
    bl fn_800D246C
    lwz r3, 0xb44(r30)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb48(r30)
    bl fn_800D246C
    lwz r3, 0xb48(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb48(r30)
    bl fn_80202D00
    stb r31, 0x4d(r3)
    li r4, 0x0
    lwz r3, 0xb4c(r30)
    bl fn_800D246C
    lwz r3, 0xb4c(r30)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb50(r30)
    bl fn_800D246C
    lwz r3, 0xb50(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb50(r30)
    bl fn_80202D00
    stb r31, 0x4d(r3)
    li r4, 0x0
    lwz r3, 0xb54(r30)
    bl fn_800D246C
    lwz r3, 0xb54(r30)
    addi r28, r28, 0x1
    cmpwi r28, 0x8
    addi r30, r30, 0x20
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D164C_00000838
    lwz r3, 0x2654(r27)
    li r4, 0x0
    bl fn_800D246C
    lwz r5, 0x2654(r27)
    li r6, 0x0
    li r0, 0x2d
    li r4, 0x0
    lwz r3, 0x38(r5)
    ori r3, r3, 0x4
    stw r3, 0x38(r5)
    lwz r5, 0x2654(r27)
    lwz r3, 0xfc(r5)
    rlwinm r3, r3, 0, 4, 2
    stw r3, 0xfc(r5)
    stw r6, 0x2644(r27)
    lwz r3, 0xd70(r27)
    stw r6, 0x2648(r27)
    stw r0, 0x264c(r27)
    stw r6, 0x2650(r27)
    bl fn_800D246C
    lwz r3, 0xd70(r27)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xd70(r27)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xd74(r27)
    bl fn_800D246C
    lwz r3, 0xd74(r27)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xdb4(r27)
    bl fn_800D246C
    lwz r3, 0xdb4(r27)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xdb8(r27)
    bl fn_800D246C
    lwz r3, 0xdb8(r27)
    li r4, 0x0
    lfs f0, lbl_80885DE8
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xdb8(r27)
    stfs f0, 0x104(r3)
    lwz r3, 0xdb8(r27)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0xdb8(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xdbc(r27)
    bl fn_800D246C
    lwz r3, 0xdbc(r27)
    li r4, 0x0
    lfs f0, lbl_80885DE8
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xdbc(r27)
    stfs f0, 0x104(r3)
    lwz r3, 0xdbc(r27)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0xdbc(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xdc0(r27)
    bl fn_800D246C
    lwz r4, 0xdc0(r27)
    mr r3, r27
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    lwz r4, 0xdc0(r27)
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
    lwz r4, 0xdc0(r27)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    bl fn_803DF5B4
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803D2134(void)
{
    nofralloc
    stfs f1, 0x104(r3)
    blr
}

asm void fn_803D213C(void)
{
    nofralloc
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    blr
}

asm void fn_803D2148(void)
{
    nofralloc
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    stb r0, 0x4d(r3)
    blr
}

asm void fn_803D215C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801F6C2C
    stfs f1, 0x50(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803D218C(void)
{
    nofralloc
    stfs f1, 0x54(r3)
    blr
}

asm void fn_803D2194(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x20
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0xdc8(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803D2194_000013E0
    mr r29, r31
    li r28, 0x0
lbl_fn_803D2194_00000B84:
    mr r30, r29
    li r27, 0x0
lbl_fn_803D2194_00000B8C:
    lwz r3, 0x5bc(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x5bc(r30)
    addi r27, r27, 0x1
    cmpwi r27, 0x5
    addi r30, r30, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D2194_00000B8C
    addi r28, r28, 0x1
    addi r29, r29, 0x14
    cmpwi r28, 0x10
    blt lbl_fn_803D2194_00000B84
    lfs f30, lbl_80885D58
    mr r29, r31
    lfs f31, lbl_80885D60
    li r27, 0x0
    li r30, 0x0
lbl_fn_803D2194_00000BDC:
    lwz r3, 0xa90(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xa90(r29)
    li r4, 0x0
    stfs f30, 0x54(r3)
    lwz r3, 0xab8(r29)
    bl fn_800D246C
    lwz r3, 0xab8(r29)
    li r4, 0x0
    stb r30, 0x4d(r3)
    lwz r3, 0xab8(r29)
    stfs f31, 0x54(r3)
    lwz r3, 0xae0(r29)
    bl fn_800D246C
    lwz r3, 0xae0(r29)
    addi r27, r27, 0x1
    cmpwi r27, 0xa
    addi r29, r29, 0x4
    stfs f30, 0x54(r3)
    blt lbl_fn_803D2194_00000BDC
    li r0, 0x5
    li r3, 0x0
    mr r5, r31
    stw r3, 0xa8c(r31)
    lfs f0, lbl_80885D58
    li r4, 0x0
    mtctr r0
lbl_fn_803D2194_00000C4C:
    lwz r3, 0xa90(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xab8(r5)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803D2194_00000C74
    stfs f0, 0x50(r3)
lbl_fn_803D2194_00000C74:
    lwz r3, 0xab8(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xae0(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xa94(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xabc(r5)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803D2194_00000CBC
    stfs f0, 0x50(r3)
lbl_fn_803D2194_00000CBC:
    lwz r3, 0xabc(r5)
    addi r4, r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xae4(r5)
    addi r5, r5, 0x8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    bdnz lbl_fn_803D2194_00000C4C
    lfs f31, lbl_80885D58
    mr r29, r31
    li r27, 0x0
    li r30, 0x0
lbl_fn_803D2194_00000CF8:
    lwz r3, 0xf14(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xf14(r29)
    addi r27, r27, 0x1
    cmpwi r27, 0x20
    stb r30, 0x4d(r3)
    lwz r3, 0xf14(r29)
    stfs f31, 0x50(r3)
    lwz r3, 0xf14(r29)
    addi r29, r29, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D2194_00000CF8
    lfs f31, lbl_80885D58
    mr r29, r31
    li r27, 0x0
    li r30, 0x0
lbl_fn_803D2194_00000D44:
    lwz r3, 0x10b4(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x10b4(r29)
    addi r27, r27, 0x1
    cmpwi r27, 0x8
    stb r30, 0x4d(r3)
    lwz r3, 0x10b4(r29)
    stfs f31, 0x50(r3)
    lwz r3, 0x10b4(r29)
    addi r29, r29, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D2194_00000D44
    lwz r3, 0x10f4(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x10f4(r31)
    li r4, 0x0
    lfs f0, lbl_80885D58
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x10f4(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0x10f4(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x10f8(r31)
    bl fn_800D246C
    lwz r3, 0x10f8(r31)
    li r4, 0x0
    lfs f0, lbl_80885D58
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x10f8(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0x10f8(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x844(r31)
    bl fn_800D246C
    lwz r3, 0x844(r31)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r3)
    lwz r3, 0x844(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x870(r31)
    bl fn_800D246C
    lwz r3, 0x870(r31)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x870(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x848(r31)
    bl fn_800D246C
    lwz r3, 0x848(r31)
    mr r29, r31
    li r27, 0x0
    li r30, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x848(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D2194_00000E80:
    lwz r3, 0x84c(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x84c(r29)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    stb r30, 0x4d(r3)
    lwz r3, 0x84c(r29)
    addi r29, r29, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D2194_00000E80
    lwz r3, 0x874(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x874(r31)
    mr r29, r31
    li r27, 0x0
    li r30, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x874(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D2194_00000EEC:
    lwz r3, 0x878(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x878(r29)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    stb r30, 0x4d(r3)
    lwz r3, 0x878(r29)
    addi r29, r29, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_803D2194_00000EEC
    lwz r3, 0xb08(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb08(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb08(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xb0c(r31)
    bl fn_800D246C
    lwz r3, 0xb0c(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb10(r31)
    bl fn_800D246C
    lwz r3, 0xb10(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb10(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xb14(r31)
    bl fn_800D246C
    lwz r3, 0xb14(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb18(r31)
    bl fn_800D246C
    lwz r3, 0xb18(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb18(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xb1c(r31)
    bl fn_800D246C
    lwz r3, 0xb1c(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb20(r31)
    bl fn_800D246C
    lwz r3, 0xb20(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb20(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xb24(r31)
    bl fn_800D246C
    lwz r3, 0xb24(r31)
    mr r29, r31
    li r27, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb24(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
lbl_fn_803D2194_00001058:
    lwz r3, 0xb28(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xb28(r29)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb28(r29)
    addi r29, r29, 0x4
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    blt lbl_fn_803D2194_00001058
    lwz r3, 0x1104(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1104(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1104(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x1104(r31)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0x1108(r31)
    bl fn_800D246C
    lwz r3, 0x1108(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1108(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x1108(r31)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0x1110(r31)
    bl fn_800D246C
    lwz r3, 0x1110(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1110(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x1110(r31)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0x1114(r31)
    bl fn_800D246C
    lwz r3, 0x1114(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1114(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x1114(r31)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0x1140(r31)
    bl fn_800D246C
    lwz r3, 0x1140(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1140(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x1144(r31)
    bl fn_800D246C
    lwz r3, 0x1144(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1148(r31)
    bl fn_800D246C
    lwz r3, 0x1148(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1148(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x2544(r31)
    bl fn_800D246C
    lwz r3, 0x2544(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x2544(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x2548(r31)
    bl fn_800D246C
    lwz r3, 0x2548(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x254c(r31)
    bl fn_800D246C
    lwz r3, 0x254c(r31)
    mr r29, r31
    li r27, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x254c(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x254c(r31)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
lbl_fn_803D2194_00001270:
    lwz r3, 0x2550(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803D2194_000012B0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x2550(r29)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x2550(r29)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0x2550(r29)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D2194_000012B0:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x3
    blt lbl_fn_803D2194_00001270
    lwz r3, 0x2564(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803D2194_00001300
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x2564(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x2564(r31)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0x2564(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D2194_00001300:
    lfs f31, lbl_80885D58
    mr r29, r31
    li r27, 0x0
    li r30, 0x1
lbl_fn_803D2194_00001310:
    lwz r3, 0x2610(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803D2194_00001344
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x2610(r29)
    stb r30, 0x4d(r3)
    lwz r3, 0x2610(r29)
    stfs f31, 0x50(r3)
    lwz r3, 0x2610(r29)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D2194_00001344:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_803D2194_00001310
    lwz r3, 0x2628(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803D2194_000013A0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x2628(r31)
    lfs f1, lbl_80885D58
    lwz r0, 0xfc(r3)
    lfs f0, lbl_80885D5C
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x2628(r31)
    stfs f1, 0x100(r3)
    lwz r3, 0x2628(r31)
    stfs f0, 0x104(r3)
    lwz r3, 0x2628(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D2194_000013A0:
    lwz r3, 0xdc4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803D2194_000013E0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xdc4(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0xdc4(r31)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0xdc4(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D2194_000013E0:
    addi r11, r1, 0x20
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803D2A54(void)
{
    nofralloc
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
    blr
}

asm void fn_803D2A60(void)
{
    nofralloc
    lfs f0, lbl_80885D58
    stfs f0, 0x50(r3)
    blr
}
