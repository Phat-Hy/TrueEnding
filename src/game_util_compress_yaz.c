#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_80117228(void);
extern void fn_801347C8(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_8014F5D4(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_8020ED84(void);
extern void fn_8020EF04(void);
extern void fn_8020EF4C(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_80211940(void);
extern void fn_80219544(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_804444E8(void);
extern void fn_8044D034(void);
extern void fn_8044D060(void);
extern void fn_8044D104(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804A39EC(void);
extern void fn_804A3A68(void);
extern void fn_804A5824(void);
extern void fn_8054A340(void);
extern void fn_805634D4(void);
extern void fn_8057F7AC(void);
extern void fn_8057F884(void);
extern void fn_8057F8FC(void);
extern void fn_8057FB24(void);
extern void fn_8057FF3C(void);
extern void fn_80580100(void);
extern void fn_80580268(void);
extern void fn_80580584(void);
extern void fn_80580694(void);
extern void fn_80580D84(void);
extern void fn_80580DB4(void);
extern void fn_80580DE4(void);
extern void fn_80581820(void);
extern void fn_80581968(void);
extern void fn_80581FDC(void);
extern void fn_805847F0(void);
extern void fn_8058480C(void);
extern void fn_80584D7C(void);
extern void fn_8058AAC0(void);
extern void fn_8058CF64(void);
extern void fn_8058D170(void);
extern void fn_8058D45C(void);
extern void fn_8058D6DC(void);
extern void fn_8058D7FC(void);
extern void fn_8058D998(void);
extern void fn_8058DB14(void);
extern void fn_8059709C(void);
extern void fn_80597168(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80796A20[];
extern u8 lbl_80761CBC[];
extern u8 lbl_80761D08[];
extern u8 lbl_80761D5C[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E0;
extern u32 lbl_80888150;
extern u32 lbl_80888154;

/* Function declarations */
void fn_8058B408(void);
void fn_8058B4A8(void);
void fn_8058B868(void);
void fn_8058B930(void);
void fn_8058BBB4(void);
void fn_8058BE7C(void);
void fn_8058C750(void);
void fn_8058CA48(void);

asm void fn_8058B408(void)
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
    beq lbl_fn_8058B408_00000084
    lwz r0, lbl_8087F9E0
    cmpwi r0, 0x0
    beq lbl_fn_8058B408_00000038
    li r0, 0x0
    stw r0, lbl_8087F9E0
lbl_fn_8058B408_00000038:
    addis r4, r3, 0x2
    addic. r4, r4, 0x60a4
    beq lbl_fn_8058B408_00000068
    beq lbl_fn_8058B408_00000068
    beq lbl_fn_8058B408_00000068
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8058B408_00000068
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8058B408_00000068:
    mr r3, r30
    li r4, 0x0
    bl fn_8057F7AC
    cmpwi r31, 0x0
    ble lbl_fn_8058B408_00000084
    mr r3, r30
    bl dtor_80084684
lbl_fn_8058B408_00000084:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8058B4A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8058B4A8_00000444
    mr r3, r28
    bl fn_8057F884
    cmpwi r3, 0x0
    bne lbl_fn_8058B4A8_00000444
    mr r3, r28
    bl fn_8057F8FC
    addi r3, r28, 0x58
    bl fn_8047059C
    mr r27, r3
    addi r3, r28, 0x58
    bl fn_80470580
    lwz r12, 0x0(r28)
    mr r4, r3
    mr r3, r28
    mr r5, r27
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r3, r28
    bl fn_8058DB14
    addis r3, r28, 0x2
    lfs f1, lbl_80888150
    lwz r3, 0x5b6c(r3)
    li r4, 0x1
    lfs f2, lbl_80888154
    li r5, 0x0
    bl fn_804A39EC
    addis r5, r28, 0x2
    li r4, 0x0
    lwz r3, 0x5b6c(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b70(r5)
    bl fn_800D246C
    addis r5, r28, 0x2
    li r4, 0x0
    lwz r3, 0x5b70(r5)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5b70(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b74(r5)
    bl fn_800D246C
    addis r6, r28, 0x2
    lfs f1, lbl_80888150
    lwz r3, 0x5b74(r6)
    li r4, 0x1
    fmr f2, f1
    li r5, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5b74(r6)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b78(r6)
    bl fn_804A39EC
    mr r27, r28
    li r29, 0x0
lbl_fn_8058B4A8_000001C4:
    addis r3, r27, 0x2
    lfs f1, lbl_80888150
    lwz r3, 0x5b7c(r3)
    li r4, 0x1
    lfs f2, lbl_80888154
    li r5, 0x0
    bl fn_804A3A68
    addis r3, r27, 0x2
    addi r29, r29, 0x1
    lwz r3, 0x5b7c(r3)
    cmpwi r29, 0xa
    addi r27, r27, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_8058B4A8_000001C4
    addis r3, r28, 0x2
    li r4, 0x0
    lwz r3, 0x5ba4(r3)
    bl fn_800D246C
    addis r5, r28, 0x2
    li r31, 0x0
    lwz r3, 0x5ba4(r5)
    li r4, 0x0
    stb r31, 0x4d(r3)
    lwz r3, 0x5ba4(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5bb8(r5)
    bl fn_800D246C
    addis r4, r28, 0x2
    mr r30, r28
    lwz r3, 0x5bb8(r4)
    li r29, 0x0
    li r27, 0x1
    stb r31, 0x4d(r3)
    lwz r3, 0x5bb8(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8058B4A8_00000268:
    addis r3, r30, 0x2
    li r4, 0x0
    lwz r3, 0x5ba8(r3)
    bl fn_800D246C
    addis r5, r30, 0x2
    li r4, 0x0
    lwz r3, 0x5ba8(r5)
    stb r31, 0x4d(r3)
    lwz r3, 0x5ba8(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5bb0(r5)
    bl fn_800D246C
    addis r4, r30, 0x2
    addi r29, r29, 0x1
    lwz r3, 0x5bb0(r4)
    cmpwi r29, 0x2
    addi r30, r30, 0x4
    stb r27, 0x4d(r3)
    lwz r3, 0x5bb0(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_8058B4A8_00000268
    mr r27, r28
    li r30, 0x0
    li r29, 0x0
lbl_fn_8058B4A8_000002D8:
    addis r3, r27, 0x2
    li r4, 0x0
    lwz r3, 0x5bbc(r3)
    bl fn_800D246C
    addis r4, r27, 0x2
    addi r30, r30, 0x1
    lwz r3, 0x5bbc(r4)
    cmpwi r30, 0x3
    addi r27, r27, 0x4
    stb r29, 0x4d(r3)
    lwz r3, 0x5bbc(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_8058B4A8_000002D8
    mr r27, r28
    li r29, 0x0
lbl_fn_8058B4A8_0000031C:
    addis r3, r27, 0x2
    li r4, 0x0
    lwz r3, 0x5bc8(r3)
    bl fn_800D246C
    addis r5, r27, 0x2
    li r4, 0x0
    lwz r3, 0x5bc8(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5bd4(r5)
    bl fn_800D246C
    addis r3, r27, 0x2
    addi r29, r29, 0x1
    lwz r3, 0x5bd4(r3)
    cmpwi r29, 0x3
    addi r27, r27, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_8058B4A8_0000031C
    mr r27, r28
    li r29, 0x0
lbl_fn_8058B4A8_00000378:
    addis r3, r27, 0x2
    lwz r3, 0x5be0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8058B4A8_000003C0
    li r4, 0x0
    bl fn_800D246C
    addis r4, r27, 0x2
    lwz r3, 0x5be0(r4)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5be0(r4)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r3, 0x5be0(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8058B4A8_000003C0:
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmpwi r29, 0x2
    blt lbl_fn_8058B4A8_00000378
    addis r3, r28, 0x2
    li r4, 0x0
    lwz r3, 0x5be8(r3)
    bl fn_800D246C
    addis r5, r28, 0x2
    li r4, 0x0
    lwz r3, 0x5be8(r5)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5be8(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5bec(r5)
    bl fn_800D246C
    addis r6, r28, 0x2
    li r0, 0x1
    lwz r5, 0x5bec(r6)
    li r3, 0x1
    lwz r4, 0xfc(r5)
    rlwinm r4, r4, 0, 4, 2
    stw r4, 0xfc(r5)
    lwz r5, 0x5bec(r6)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    stw r0, 0x6070(r6)
    b lbl_fn_8058B4A8_00000448
lbl_fn_8058B4A8_00000444:
    li r3, 0x0
lbl_fn_8058B4A8_00000448:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8058B868(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xe4(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_8058B868_0000050C
    lis r4, jumptable_80796A20@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80796A20@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058B868_0000050C
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058B868_0000050C
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058B868_0000050C
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058B868_0000050C
    bl fn_8058C750
    b lbl_fn_8058B868_0000050C
    bl fn_8058CA48
    b lbl_fn_8058B868_0000050C
    bl fn_8058CF64
    b lbl_fn_8058B868_0000050C
    bl fn_8057FF3C
    b lbl_fn_8058B868_0000050C
    bl fn_80580100
lbl_fn_8058B868_0000050C:
    mr r3, r31
    bl fn_80580268
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8058B930(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    bl fn_80580DE4
    addis r4, r31, 0x2
    lwz r3, 0x5b6c(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b70(r4)
    bl fn_80580D84
    addis r4, r31, 0x2
    mr r30, r31
    lwz r3, 0x5b74(r4)
    li r29, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b78(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8058B930_00000590:
    addis r3, r30, 0x2
    lwz r3, 0x5b7c(r3)
    bl fn_80580DB4
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0xa
    blt lbl_fn_8058B930_00000590
    addis r3, r31, 0x2
    lwz r3, 0x5ba4(r3)
    bl fn_80580DB4
    addis r3, r31, 0x2
    lwz r3, 0x5bb8(r3)
    bl fn_80580DB4
    mr r30, r31
    li r29, 0x0
lbl_fn_8058B930_000005CC:
    addis r3, r30, 0x2
    lwz r3, 0x5ba8(r3)
    bl fn_80580DB4
    addis r3, r30, 0x2
    lwz r3, 0x5bb0(r3)
    bl fn_80580DB4
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x2
    blt lbl_fn_8058B930_000005CC
    mr r30, r31
    li r29, 0x0
lbl_fn_8058B930_000005FC:
    addis r3, r30, 0x2
    lwz r3, 0x5bbc(r3)
    bl fn_80580DB4
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_8058B930_000005FC
    addis r4, r31, 0x2
    lwz r3, 0x5bc8(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5bd4(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5bcc(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5bd8(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5bd0(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5bdc(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5be0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8058B930_00000694
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8058B930_00000694:
    addi r3, r31, 0x4
    addis r3, r3, 0x2
    lwz r3, 0x5be0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8058B930_000006B4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8058B930_000006B4:
    addis r3, r31, 0x2
    lwz r3, 0x5be8(r3)
    bl fn_80580D84
    addis r6, r31, 0x2
    lwz r3, 0x5bec(r6)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xe4(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8058B930_00000710
    cmpwi r3, 0x4
    beq lbl_fn_8058B930_0000071C
    cmpwi r3, 0x7
    beq lbl_fn_8058B930_00000764
    cmpwi r3, 0x8
    beq lbl_fn_8058B930_00000770
    cmpwi r3, 0x5
    beq lbl_fn_8058B930_0000077C
    cmpwi r3, 0x6
    beq lbl_fn_8058B930_00000788
    b lbl_fn_8058B930_00000790
lbl_fn_8058B930_00000710:
    mr r3, r31
    bl fn_8058D6DC
    b lbl_fn_8058B930_00000790
lbl_fn_8058B930_0000071C:
    lwz r5, 0x5b6c(r6)
    lis r4, lbl_80761D5C@ha
    addi r4, r4, lbl_80761D5C@l
    addi r3, r1, 0x8
    lwz r0, 0x38(r5)
    addi r4, r4, 0x243
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x6074(r6)
    crclr 6
    bl sprintf
    addis r4, r31, 0x2
    lwz r3, lbl_8087F580
    lwz r4, 0x5b6c(r4)
    addi r5, r1, 0x8
    li r6, 0x0
    bl fn_804A5824
    b lbl_fn_8058B930_00000790
lbl_fn_8058B930_00000764:
    mr r3, r31
    bl fn_8058D170
    b lbl_fn_8058B930_00000790
lbl_fn_8058B930_00000770:
    mr r3, r31
    bl fn_8058D45C
    b lbl_fn_8058B930_00000790
lbl_fn_8058B930_0000077C:
    mr r3, r31
    bl fn_80580584
    b lbl_fn_8058B930_00000790
lbl_fn_8058B930_00000788:
    mr r3, r31
    bl fn_80580694
lbl_fn_8058B930_00000790:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8058BBB4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x1
    addis r6, r3, 0x2
    stw r0, 0x24(r1)
    li r5, 0x1
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0xe4(r3)
    stw r5, 0x5b40(r6)
    stw r0, 0xe8(r3)
    stw r4, 0xe4(r3)
    beq lbl_fn_8058BBB4_00000814
    cmpwi r4, 0x4
    beq lbl_fn_8058BBB4_00000824
    cmpwi r4, 0x7
    beq lbl_fn_8058BBB4_00000858
    cmpwi r4, 0x5
    beq lbl_fn_8058BBB4_00000924
    cmpwi r4, 0x6
    beq lbl_fn_8058BBB4_000009C0
    cmpwi r4, 0x8
    beq lbl_fn_8058BBB4_00000A14
    cmpwi r4, 0x3
    beq lbl_fn_8058BBB4_00000A58
    b lbl_fn_8058BBB4_00000A60
lbl_fn_8058BBB4_00000814:
    li r0, 0x0
    stw r0, 0x5b40(r6)
    bl fn_8057FB24
    b lbl_fn_8058BBB4_00000A60
lbl_fn_8058BBB4_00000824:
    lwz r3, 0x5b68(r6)
    lis r4, lbl_80761D08@ha
    lwz r5, 0x6074(r6)
    li r0, 0x0
    addi r4, r4, lbl_80761D08@l
    slwi r3, r3, 3
    add r3, r4, r3
    stw r5, 0x5b04(r6)
    lwz r3, 0x4(r3)
    stw r3, 0x5b08(r6)
    stw r0, 0x5b0c(r6)
    stw r3, 0x5b10(r6)
    b lbl_fn_8058BBB4_00000A60
lbl_fn_8058BBB4_00000858:
    bl fn_8058DB14
    addis r6, r31, 0x2
    li r0, 0xa
    lwz r4, 0x60a8(r6)
    mr r3, r31
    stw r4, 0x5b08(r6)
    lwz r4, 0x6108(r6)
    stw r0, 0x5b10(r6)
    lwz r5, 0x610c(r6)
    lwz r6, 0x6088(r6)
    bl fn_8059709C
    addis r3, r31, 0x2
    lwz r0, 0x6088(r3)
    lwz r4, 0x5b08(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x608c(r3)
    cmpw r0, r4
    blt lbl_fn_8058BBB4_000008B4
    subi r4, r4, 0x1
    srawi r0, r4, 31
    andc r0, r4, r0
    stw r0, 0x608c(r3)
lbl_fn_8058BBB4_000008B4:
    addis r3, r31, 0x2
    lwz r6, 0x5b10(r3)
    lwz r7, 0x5b08(r3)
    cmpw r7, r6
    blt lbl_fn_8058BBB4_000008F4
    lwz r0, 0x6088(r3)
    subi r4, r7, 0x1
    slwi r0, r0, 2
    add r5, r3, r0
    lwz r0, 0x6098(r5)
    add r3, r6, r0
    subi r0, r3, 0x1
    cmpw r4, r0
    bgt lbl_fn_8058BBB4_000008F4
    subf r0, r6, r7
    stw r0, 0x6098(r5)
lbl_fn_8058BBB4_000008F4:
    addis r5, r31, 0x2
    li r0, -0x1
    lwz r3, 0x6088(r5)
    slwi r3, r3, 2
    add r4, r5, r3
    lwz r3, 0x608c(r4)
    stw r3, 0x5b04(r5)
    lwz r3, 0x6098(r4)
    stw r3, 0x5b0c(r5)
    stw r0, 0x6108(r5)
    stw r0, 0x610c(r5)
    b lbl_fn_8058BBB4_00000A60
lbl_fn_8058BBB4_00000924:
    lwz r5, 0xdc(r3)
    li r0, 0xa
    lwz r4, 0xe0(r3)
    stw r5, 0x5b04(r6)
    stw r4, 0x5b0c(r6)
    stw r0, 0x5b10(r6)
    bl fn_80581FDC
    lwz r0, 0xe8(r31)
    cmpwi r0, 0x4
    bne lbl_fn_8058BBB4_00000964
    addis r3, r31, 0x2
    li r0, 0x0
    stw r0, 0x5b04(r3)
    stw r0, 0x5b0c(r3)
    stw r0, 0xdc(r31)
    stw r0, 0xe0(r31)
lbl_fn_8058BBB4_00000964:
    lwz r0, 0x32fc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8058BBB4_00000A60
    addi r3, r1, 0x8
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0xa
    li r6, 0x0
    bl fn_80581820
    li r0, 0x4
    stw r0, 0xe4(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x0(r31)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058BBB4_00000A60
lbl_fn_8058BBB4_000009C0:
    lwz r0, 0xdc(r3)
    li r4, 0x0
    stw r4, 0x5b40(r6)
    mulli r0, r0, 0x5c
    stw r5, 0x5b24(r6)
    add r4, r3, r0
    lwz r0, 0x3348(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8058BBB4_000009FC
    lwz r3, lbl_8087F4F0
    lwz r4, 0x3300(r4)
    bl fn_804444E8
    addis r4, r31, 0x2
    stw r3, 0x5b28(r4)
    b lbl_fn_8058BBB4_00000A00
lbl_fn_8058BBB4_000009FC:
    stw r5, 0x5b28(r6)
lbl_fn_8058BBB4_00000A00:
    addis r3, r31, 0x2
    lfs f0, lbl_80888150
    lwz r3, 0x5b2c(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_8058BBB4_00000A60
lbl_fn_8058BBB4_00000A14:
    lwz r4, 0x6080(r6)
    li r0, 0x0
    stw r0, 0x5b40(r6)
    cmpwi r4, 0x0
    blt lbl_fn_8058BBB4_00000A44
    slwi r0, r4, 2
    add r4, r6, r0
    lwz r4, 0x5be0(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8058BBB4_00000A44
    lfs f0, lbl_80888150
    stfs f0, 0x100(r4)
lbl_fn_8058BBB4_00000A44:
    addis r3, r3, 0x2
    lfs f0, lbl_80888150
    lwz r3, 0x5be8(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_8058BBB4_00000A60
lbl_fn_8058BBB4_00000A58:
    li r0, 0x0
    stw r0, 0x5b40(r6)
lbl_fn_8058BBB4_00000A60:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8058BE7C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmplwi r4, 0x1
    stw r0, 0xb4(r1)
    stmw r20, 0x80(r1)
    mr r27, r3
    mr r28, r4
    bgt lbl_fn_8058BE7C_00001240
    addis r3, r3, 0x2
    lwz r0, 0x6088(r3)
    lwz r4, 0x60a4(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x608c(r3)
    mulli r0, r0, 0x58
    lwzx r3, r4, r0
    add r31, r4, r0
    bl fn_80211480
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_8058BE7C_00001108
    lwz r0, 0x50(r31)
    lwz r29, 0x134(r3)
    cmpwi r0, 0x0
    bge lbl_fn_8058BE7C_00000AF0
    mr r3, r27
    mr r4, r31
    li r5, 0x1
    bl fn_8058D998
    mr r29, r3
    b lbl_fn_8058BE7C_000010F0
lbl_fn_8058BE7C_00000AF0:
    cmpwi r29, 0x0
    bne lbl_fn_8058BE7C_00000B0C
    bl fn_8058AAC0
    mr r3, r20
    li r4, 0x1
    bl fn_80211940
    mr r29, r3
lbl_fn_8058BE7C_00000B0C:
    mr r3, r29
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_8058BE7C_00000FF8
    mr r3, r29
    bl fn_8020EFEC
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_8058BE7C_00000B38
    lwz r30, 0x7c(r3)
    b lbl_fn_8058BE7C_00000B3C
lbl_fn_8058BE7C_00000B38:
    li r30, 0x0
lbl_fn_8058BE7C_00000B3C:
    lwz r0, 0x78(r3)
    li r23, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8058BE7C_00000B60
    lwz r4, 0x7c(r22)
    li r3, 0x2
    bl fn_8020ED84
    mr r23, r3
    b lbl_fn_8058BE7C_00000B78
lbl_fn_8058BE7C_00000B60:
    cmpwi r0, 0x1
    bne lbl_fn_8058BE7C_00000B78
    lwz r4, 0x7c(r22)
    li r3, 0x3
    bl fn_8020ED84
    mr r23, r3
lbl_fn_8058BE7C_00000B78:
    lwz r21, 0x50(r31)
    mr r3, r21
    bl fn_80219544
    lwz r5, 0x78(r22)
    mr r24, r3
    slwi r0, r21, 2
    lwz r3, lbl_8087F8A0
    mr r4, r21
    add r26, r5, r0
    bl fn_8054A340
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_8058BE7C_00000C6C
    lwz r3, lbl_8087F4F0
    mr r4, r26
    bl fn_8044D034
    mulli r0, r21, 0x43c
    lwz r5, lbl_8087F4F0
    mr r20, r3
    lwz r4, 0x78(r22)
    add r3, r5, r0
    addi r3, r3, 0x64ec
    bl fn_801347C8
    lis r5, lbl_80761D5C@ha
    mr r21, r3
    addi r5, r5, lbl_80761D5C@l
    li r3, 0x43c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8058BE7C_00000C28
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r5, r30
    mr r6, r26
    stw r0, 0xc(r1)
    mr r7, r25
    mr r8, r20
    mr r10, r21
    lwz r4, 0x78(r22)
    li r9, 0x0
    bl fn_805634D4
lbl_fn_8058BE7C_00000C28:
    addis r4, r27, 0x2
    li r5, 0x0
    lwz r0, 0x60b0(r4)
    stw r5, 0x58(r1)
    mulli r0, r0, 0xc
    stw r3, 0x5c(r1)
    add r0, r4, r0
    stw r25, 0x60(r1)
    addic. r4, r0, 0x60b4
    beq lbl_fn_8058BE7C_00000C5C
    stw r5, 0x0(r4)
    stw r3, 0x4(r4)
    stw r25, 0x8(r4)
lbl_fn_8058BE7C_00000C5C:
    addis r4, r27, 0x2
    lwz r3, 0x60b0(r4)
    addi r0, r3, 0x1
    stw r0, 0x60b0(r4)
lbl_fn_8058BE7C_00000C6C:
    lwz r3, lbl_8087F4F0
    mr r5, r30
    lwz r4, 0x78(r22)
    mr r6, r26
    mr r7, r24
    bl fn_8044D060
    lwz r20, 0x50(r31)
    mr r3, r20
    bl fn_80219544
    lwz r5, 0x78(r23)
    mr r26, r3
    slwi r0, r20, 2
    lwz r3, lbl_8087F8A0
    mr r4, r20
    add r25, r5, r0
    bl fn_8054A340
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_8058BE7C_00000D78
    lwz r3, lbl_8087F4F0
    mr r4, r25
    bl fn_8044D034
    mulli r0, r20, 0x43c
    lwz r5, lbl_8087F4F0
    mr r21, r3
    lwz r4, 0x78(r23)
    add r3, r5, r0
    addi r3, r3, 0x64ec
    bl fn_801347C8
    lis r5, lbl_80761D5C@ha
    mr r20, r3
    addi r5, r5, lbl_80761D5C@l
    li r3, 0x43c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8058BE7C_00000D34
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r5, r30
    mr r6, r25
    stw r0, 0xc(r1)
    mr r7, r24
    mr r8, r21
    mr r10, r20
    lwz r4, 0x78(r23)
    li r9, 0x0
    bl fn_805634D4
lbl_fn_8058BE7C_00000D34:
    addis r4, r27, 0x2
    li r5, 0x0
    lwz r0, 0x60b0(r4)
    stw r5, 0x4c(r1)
    mulli r0, r0, 0xc
    stw r3, 0x50(r1)
    add r0, r4, r0
    stw r24, 0x54(r1)
    addic. r4, r0, 0x60b4
    beq lbl_fn_8058BE7C_00000D68
    stw r5, 0x0(r4)
    stw r3, 0x4(r4)
    stw r24, 0x8(r4)
lbl_fn_8058BE7C_00000D68:
    addis r4, r27, 0x2
    lwz r3, 0x60b0(r4)
    addi r0, r3, 0x1
    stw r0, 0x60b0(r4)
lbl_fn_8058BE7C_00000D78:
    lwz r3, lbl_8087F4F0
    mr r5, r30
    lwz r4, 0x78(r23)
    mr r6, r25
    mr r7, r26
    bl fn_8044D060
    lwz r0, 0x78(r22)
    cmpwi r0, 0x0
    bne lbl_fn_8058BE7C_00000FE4
    mr r3, r22
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_8058BE7C_00000FE4
    lwz r4, 0x7c(r22)
    li r3, 0x1
    bl fn_8020ED84
    lwz r4, 0x7c(r22)
    mr r25, r3
    li r3, 0x3
    bl fn_8020ED84
    lwz r20, 0x50(r31)
    mr r26, r3
    mr r3, r20
    bl fn_80219544
    lwz r5, 0x78(r25)
    mr r22, r3
    slwi r0, r20, 2
    lwz r3, lbl_8087F8A0
    mr r4, r20
    add r23, r5, r0
    bl fn_8054A340
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_8058BE7C_00000EC0
    lwz r3, lbl_8087F4F0
    mr r4, r23
    bl fn_8044D034
    mulli r0, r20, 0x43c
    lwz r5, lbl_8087F4F0
    mr r21, r3
    lwz r4, 0x78(r25)
    add r3, r5, r0
    addi r3, r3, 0x64ec
    bl fn_801347C8
    lis r5, lbl_80761D5C@ha
    mr r20, r3
    addi r5, r5, lbl_80761D5C@l
    li r3, 0x43c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8058BE7C_00000E7C
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r5, r30
    mr r6, r23
    stw r0, 0xc(r1)
    mr r7, r24
    mr r8, r21
    mr r10, r20
    lwz r4, 0x78(r25)
    li r9, 0x0
    bl fn_805634D4
lbl_fn_8058BE7C_00000E7C:
    addis r4, r27, 0x2
    li r5, 0x0
    lwz r0, 0x60b0(r4)
    stw r5, 0x40(r1)
    mulli r0, r0, 0xc
    stw r3, 0x44(r1)
    add r0, r4, r0
    stw r24, 0x48(r1)
    addic. r4, r0, 0x60b4
    beq lbl_fn_8058BE7C_00000EB0
    stw r5, 0x0(r4)
    stw r3, 0x4(r4)
    stw r24, 0x8(r4)
lbl_fn_8058BE7C_00000EB0:
    addis r4, r27, 0x2
    lwz r3, 0x60b0(r4)
    addi r0, r3, 0x1
    stw r0, 0x60b0(r4)
lbl_fn_8058BE7C_00000EC0:
    lwz r3, lbl_8087F4F0
    mr r5, r30
    lwz r4, 0x78(r25)
    mr r6, r23
    mr r7, r22
    bl fn_8044D060
    lwz r20, 0x50(r31)
    mr r3, r20
    bl fn_80219544
    lwz r5, 0x78(r26)
    mr r24, r3
    slwi r0, r20, 2
    lwz r3, lbl_8087F8A0
    mr r4, r20
    add r23, r5, r0
    bl fn_8054A340
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_8058BE7C_00000FCC
    lwz r3, lbl_8087F4F0
    mr r4, r23
    bl fn_8044D034
    mulli r0, r20, 0x43c
    lwz r5, lbl_8087F4F0
    mr r21, r3
    lwz r4, 0x78(r26)
    add r3, r5, r0
    addi r3, r3, 0x64ec
    bl fn_801347C8
    lis r5, lbl_80761D5C@ha
    mr r20, r3
    addi r5, r5, lbl_80761D5C@l
    li r3, 0x43c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8058BE7C_00000F88
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r5, r30
    mr r6, r23
    stw r0, 0xc(r1)
    mr r7, r22
    mr r8, r21
    mr r10, r20
    lwz r4, 0x78(r26)
    li r9, 0x0
    bl fn_805634D4
lbl_fn_8058BE7C_00000F88:
    addis r4, r27, 0x2
    li r5, 0x0
    lwz r0, 0x60b0(r4)
    stw r5, 0x34(r1)
    mulli r0, r0, 0xc
    stw r3, 0x38(r1)
    add r0, r4, r0
    stw r22, 0x3c(r1)
    addic. r4, r0, 0x60b4
    beq lbl_fn_8058BE7C_00000FBC
    stw r5, 0x0(r4)
    stw r3, 0x4(r4)
    stw r22, 0x8(r4)
lbl_fn_8058BE7C_00000FBC:
    addis r4, r27, 0x2
    lwz r3, 0x60b0(r4)
    addi r0, r3, 0x1
    stw r0, 0x60b0(r4)
lbl_fn_8058BE7C_00000FCC:
    lwz r3, lbl_8087F4F0
    mr r5, r30
    lwz r4, 0x78(r26)
    mr r6, r23
    mr r7, r24
    bl fn_8044D060
lbl_fn_8058BE7C_00000FE4:
    mr r3, r27
    mr r4, r31
    li r5, 0x0
    bl fn_8058D998
    b lbl_fn_8058BE7C_000010F0
lbl_fn_8058BE7C_00000FF8:
    mr r3, r29
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8058BE7C_000010F0
    mr r3, r29
    bl fn_80206C50
    lwz r21, 0x50(r31)
    mr r22, r3
    lwz r20, 0x54(r31)
    mr r3, r21
    bl fn_80219544
    mr r23, r3
    lwz r3, lbl_8087F8A0
    mr r4, r21
    bl fn_8054A340
    mr r21, r3
    lwz r3, lbl_8087F4F0
    lwz r5, 0x80(r22)
    mr r4, r20
    mr r7, r23
    li r6, -0x1
    bl fn_8044D104
    cmpwi r21, 0x0
    beq lbl_fn_8058BE7C_000010E0
    lwz r23, 0x674(r21)
    mr r3, r21
    li r4, 0x1
    bl fn_8014EEC4
    lwz r5, 0x78(r22)
    mr r3, r21
    lwz r6, 0x80(r22)
    mr r4, r20
    bl fn_8014F5D4
    cmpwi r23, 0x0
    blt lbl_fn_8058BE7C_00001098
    mr r3, r21
    mr r4, r23
    li r5, 0x0
    li r6, 0x1
    bl fn_8014DEE4
lbl_fn_8058BE7C_00001098:
    addis r3, r27, 0x2
    li r5, 0x1
    lwz r0, 0x60b0(r3)
    li r4, 0x0
    stw r5, 0x28(r1)
    mulli r0, r0, 0xc
    stw r4, 0x2c(r1)
    add r0, r3, r0
    stw r21, 0x30(r1)
    addic. r3, r0, 0x60b4
    beq lbl_fn_8058BE7C_000010D0
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r21, 0x8(r3)
lbl_fn_8058BE7C_000010D0:
    addis r4, r27, 0x2
    lwz r3, 0x60b0(r4)
    addi r0, r3, 0x1
    stw r0, 0x60b0(r4)
lbl_fn_8058BE7C_000010E0:
    mr r3, r27
    mr r4, r31
    li r5, 0x0
    bl fn_8058D998
lbl_fn_8058BE7C_000010F0:
    lwz r0, 0x0(r31)
    addis r3, r27, 0x2
    stw r0, 0x6110(r3)
    stw r29, 0x6108(r3)
    lwz r0, 0x50(r31)
    stw r0, 0x610c(r3)
lbl_fn_8058BE7C_00001108:
    lwz r3, lbl_8087F430
    li r4, 0x11c
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8058BE7C_00001130
    lwz r3, lbl_8087F430
    li r4, 0x11c
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
lbl_fn_8058BE7C_00001130:
    cmpwi r28, 0x1
    addis r3, r27, 0x2
    li r0, -0x1
    stw r0, 0x6080(r3)
    bne lbl_fn_8058BE7C_00001160
    addi r3, r1, 0x24
    li r4, 0x1b
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8058BE7C_00001224
lbl_fn_8058BE7C_00001160:
    addi r3, r1, 0x20
    li r4, 0x1c
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    lis r9, lbl_80761CBC@ha
    lwzu r8, lbl_80761CBC@l(r9)
    addis r3, r27, 0x2
    stw r8, 0x64(r1)
    lwz r10, 0x6108(r3)
    addi r11, r1, 0x64
    lwz r7, 0x4(r9)
    lwz r6, 0x8(r9)
    lwz r5, 0xc(r9)
    lwz r4, 0x10(r9)
    lwz r3, 0x14(r9)
    lwz r0, 0x18(r9)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_8058BE7C_000011D8
lbl_fn_8058BE7C_000011C4:
    cmpw r10, r0
    bne lbl_fn_8058BE7C_000011D4
    li r0, 0x1
    b lbl_fn_8058BE7C_000011E8
lbl_fn_8058BE7C_000011D4:
    addi r11, r11, 0x4
lbl_fn_8058BE7C_000011D8:
    lwz r0, 0x0(r11)
    cmpwi r0, 0x0
    bge lbl_fn_8058BE7C_000011C4
    li r0, 0x0
lbl_fn_8058BE7C_000011E8:
    cmpwi r0, 0x0
    beq lbl_fn_8058BE7C_00001218
    addis r3, r27, 0x2
    li r0, 0x1
    stw r0, 0x6080(r3)
    addi r3, r1, 0x1c
    li r4, 0x1d
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8058BE7C_00001224
lbl_fn_8058BE7C_00001218:
    addis r3, r27, 0x2
    li r0, 0x0
    stw r0, 0x6080(r3)
lbl_fn_8058BE7C_00001224:
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x8
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058BE7C_00001334
lbl_fn_8058BE7C_00001240:
    cmpwi r4, 0x2
    bne lbl_fn_8058BE7C_000012A4
    lwz r3, lbl_8087F430
    li r4, 0x11c
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8058BE7C_00001270
    lwz r3, lbl_8087F430
    li r4, 0x11c
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
lbl_fn_8058BE7C_00001270:
    addi r3, r1, 0x18
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058BE7C_00001334
lbl_fn_8058BE7C_000012A4:
    cmpwi r4, 0x5
    bne lbl_fn_8058BE7C_00001304
    lwz r0, 0xdc(r3)
    addis r4, r3, 0x2
    lwz r5, 0x5b24(r4)
    mulli r0, r0, 0x5c
    add r4, r3, r0
    addi r4, r4, 0x3300
    bl fn_80584D7C
    mr r3, r27
    bl fn_80581FDC
    addi r3, r1, 0x14
    li r4, 0x19
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058BE7C_00001334
lbl_fn_8058BE7C_00001304:
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r27)
    mr r3, r27
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8058BE7C_00001334:
    lmw r20, 0x80(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8058C750(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    bl fn_805847F0
    addis r6, r31, 0x2
    lis r3, lbl_80761D08@ha
    lwz r0, 0x5b68(r6)
    addi r3, r3, lbl_80761D08@l
    lwz r5, 0x5b04(r6)
    li r4, 0x0
    slwi r0, r0, 3
    stw r5, 0x6074(r6)
    lwzx r3, r3, r0
    slwi r0, r5, 2
    li r5, 0x4
    lwzx r0, r3, r0
    stw r0, 0x6078(r6)
    lwz r30, lbl_8087EF70
    mr r3, r30
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8058C750_00001584
    addis r3, r31, 0x2
    lwz r0, 0x6078(r3)
    cmplwi r0, 0x2
    ble lbl_fn_8058C750_000013D4
    cmpwi r0, 0x3
    beq lbl_fn_8058C750_000014C0
    cmpwi r0, 0x4
    beq lbl_fn_8058C750_000014F4
    b lbl_fn_8058C750_00001628
lbl_fn_8058C750_000013D4:
    cmpwi r0, 0x0
    bne lbl_fn_8058C750_000013E8
    li r0, 0x0
    stw r0, 0x6088(r3)
    b lbl_fn_8058C750_00001404
lbl_fn_8058C750_000013E8:
    cmpwi r0, 0x2
    bne lbl_fn_8058C750_000013FC
    li r0, 0x2
    stw r0, 0x6088(r3)
    b lbl_fn_8058C750_00001404
lbl_fn_8058C750_000013FC:
    li r0, 0x1
    stw r0, 0x6088(r3)
lbl_fn_8058C750_00001404:
    mr r3, r31
    bl fn_8058DB14
    addis r3, r31, 0x2
    lwz r0, 0x60a8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8058C750_0000148C
    addi r3, r1, 0x20
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    addis r3, r31, 0x2
    lwz r0, 0x6078(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8058C750_0000145C
    mr r3, r31
    li r4, 0x1
    li r5, 0xd
    li r6, 0x0
    bl fn_80581820
    b lbl_fn_8058C750_00001470
lbl_fn_8058C750_0000145C:
    mr r3, r31
    li r4, 0x1
    li r5, 0xc
    li r6, 0x0
    bl fn_80581820
lbl_fn_8058C750_00001470:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058C750_00001628
lbl_fn_8058C750_0000148C:
    addi r3, r1, 0x1c
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058C750_00001628
lbl_fn_8058C750_000014C0:
    addi r3, r1, 0x18
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058C750_00001628
lbl_fn_8058C750_000014F4:
    lwz r3, lbl_8087F430
    li r4, 0x11c
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8058C750_00001550
    addi r3, r1, 0x14
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0x2
    li r6, 0x0
    bl fn_80581968
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x3
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058C750_00001628
lbl_fn_8058C750_00001550:
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058C750_00001628
lbl_fn_8058C750_00001584:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8058C750_00001628
    lwz r3, lbl_8087F430
    li r4, 0x11c
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8058C750_000015F8
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0x2
    li r6, 0x1
    bl fn_80581968
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x3
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058C750_00001628
lbl_fn_8058C750_000015F8:
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8058C750_00001628:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8058CA48(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    addis r4, r3, 0x2
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    lwz r0, 0x60a8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8058CA48_000016C4
    lwz r12, 0x0(r3)
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x1c
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0xd
    li r6, 0x0
    bl fn_80581820
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058CA48_00001B44
lbl_fn_8058CA48_000016C4:
    li r4, 0x1
    bl fn_8058480C
    addis r5, r31, 0x2
    lwz r0, 0x6088(r5)
    lwz r4, 0x5b04(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    lwz r0, 0x608c(r3)
    cmpw r4, r0
    beq lbl_fn_8058CA48_00001700
    lwz r3, 0x5bb0(r5)
    lfs f0, lbl_80888150
    stfs f0, 0x50(r3)
    lwz r3, 0x5bb4(r5)
    stfs f0, 0x50(r3)
lbl_fn_8058CA48_00001700:
    addis r7, r31, 0x2
    li r4, 0x0
    lwz r0, 0x6088(r7)
    li r5, 0x4
    lwz r6, 0x5b04(r7)
    slwi r0, r0, 2
    add r3, r7, r0
    stw r6, 0x608c(r3)
    lwz r0, 0x6088(r7)
    lwz r6, 0x5b0c(r7)
    slwi r0, r0, 2
    add r3, r7, r0
    stw r6, 0x6098(r3)
    lwz r30, lbl_8087EF70
    mr r3, r30
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8058CA48_00001834
    addis r4, r31, 0x2
    mr r3, r31
    lwz r0, 0x6088(r4)
    lwz r5, 0x60a4(r4)
    slwi r0, r0, 2
    add r4, r4, r0
    lwz r0, 0x608c(r4)
    mulli r0, r0, 0x58
    add r4, r5, r0
    bl fn_8058D7FC
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8058CA48_000017EC
    addi r3, r1, 0x18
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    addis r3, r31, 0x2
    lwz r0, 0x6088(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8058CA48_000017BC
    mr r3, r31
    li r4, 0x1
    li r5, 0x1
    li r6, 0x0
    bl fn_80581968
    b lbl_fn_8058CA48_000017D0
lbl_fn_8058CA48_000017BC:
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_80581968
lbl_fn_8058CA48_000017D0:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x3
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058CA48_00001B44
lbl_fn_8058CA48_000017EC:
    addi r3, r1, 0x14
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    mr r5, r30
    li r4, 0x1
    li r6, 0x0
    bl fn_80581820
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058CA48_00001B44
lbl_fn_8058CA48_00001834:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8058CA48_00001880
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058CA48_00001B44
lbl_fn_8058CA48_00001880:
    mr r3, r30
    li r4, 0x0
    li r5, 0xc
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8058CA48_000019E4
    addis r4, r31, 0x2
    lwz r0, 0x6084(r4)
    cmpwi r0, 0x1
    bne lbl_fn_8058CA48_000019C8
    lwz r0, 0x6088(r4)
    li r3, 0x0
    stw r3, 0x6084(r4)
    mr r3, r31
    slwi r0, r0, 2
    lwz r5, 0x60a4(r4)
    add r4, r4, r0
    lwz r0, 0x608c(r4)
    mulli r0, r0, 0x58
    lwzux r0, r5, r0
    stw r0, 0x78(r1)
    lwz r0, 0x4(r5)
    stw r0, 0x7c(r1)
    lwz r4, 0x8(r5)
    lwz r0, 0xc(r5)
    stw r0, 0x84(r1)
    stw r4, 0x80(r1)
    lwz r4, 0x10(r5)
    lwz r0, 0x14(r5)
    stw r0, 0x8c(r1)
    stw r4, 0x88(r1)
    lwz r4, 0x18(r5)
    lwz r0, 0x1c(r5)
    stw r0, 0x94(r1)
    stw r4, 0x90(r1)
    lwz r4, 0x20(r5)
    lwz r0, 0x24(r5)
    stw r0, 0x9c(r1)
    stw r4, 0x98(r1)
    lwz r4, 0x28(r5)
    lwz r0, 0x2c(r5)
    stw r0, 0xa4(r1)
    stw r4, 0xa0(r1)
    lwz r4, 0x30(r5)
    lwz r0, 0x34(r5)
    stw r0, 0xac(r1)
    stw r4, 0xa8(r1)
    lwz r4, 0x38(r5)
    lwz r0, 0x3c(r5)
    stw r0, 0xb4(r1)
    stw r4, 0xb0(r1)
    lwz r4, 0x40(r5)
    lwz r0, 0x44(r5)
    stw r0, 0xbc(r1)
    stw r4, 0xb8(r1)
    lwz r0, 0x48(r5)
    stw r0, 0xc0(r1)
    lwz r0, 0x4c(r5)
    stw r0, 0xc4(r1)
    lwz r0, 0x50(r5)
    stw r0, 0xc8(r1)
    lwz r0, 0x54(r5)
    stw r0, 0xcc(r1)
    bl fn_8058DB14
    addis r5, r31, 0x2
    mr r3, r31
    mr r6, r5
    addi r4, r1, 0x78
    addi r6, r6, 0x5b0c
    addi r5, r5, 0x5b04
    bl fn_80597168
    addis r5, r31, 0x2
    lwz r0, 0x6088(r5)
    lwz r4, 0x5b04(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x608c(r3)
    lwz r0, 0x6088(r5)
    lwz r4, 0x5b0c(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x6098(r3)
lbl_fn_8058CA48_000019C8:
    addi r3, r1, 0xc
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8058CA48_00001B44
lbl_fn_8058CA48_000019E4:
    mr r3, r30
    li r4, 0x0
    li r5, 0xd
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8058CA48_00001B44
    addis r4, r31, 0x2
    lwz r0, 0x6084(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8058CA48_00001B2C
    lwz r0, 0x6088(r4)
    li r3, 0x1
    stw r3, 0x6084(r4)
    mr r3, r31
    slwi r0, r0, 2
    lwz r5, 0x60a4(r4)
    add r4, r4, r0
    lwz r0, 0x608c(r4)
    mulli r0, r0, 0x58
    lwzux r0, r5, r0
    stw r0, 0x20(r1)
    lwz r0, 0x4(r5)
    stw r0, 0x24(r1)
    lwz r4, 0x8(r5)
    lwz r0, 0xc(r5)
    stw r0, 0x2c(r1)
    stw r4, 0x28(r1)
    lwz r4, 0x10(r5)
    lwz r0, 0x14(r5)
    stw r0, 0x34(r1)
    stw r4, 0x30(r1)
    lwz r4, 0x18(r5)
    lwz r0, 0x1c(r5)
    stw r0, 0x3c(r1)
    stw r4, 0x38(r1)
    lwz r4, 0x20(r5)
    lwz r0, 0x24(r5)
    stw r0, 0x44(r1)
    stw r4, 0x40(r1)
    lwz r4, 0x28(r5)
    lwz r0, 0x2c(r5)
    stw r0, 0x4c(r1)
    stw r4, 0x48(r1)
    lwz r4, 0x30(r5)
    lwz r0, 0x34(r5)
    stw r0, 0x54(r1)
    stw r4, 0x50(r1)
    lwz r4, 0x38(r5)
    lwz r0, 0x3c(r5)
    stw r0, 0x5c(r1)
    stw r4, 0x58(r1)
    lwz r4, 0x40(r5)
    lwz r0, 0x44(r5)
    stw r0, 0x64(r1)
    stw r4, 0x60(r1)
    lwz r0, 0x48(r5)
    stw r0, 0x68(r1)
    lwz r0, 0x4c(r5)
    stw r0, 0x6c(r1)
    lwz r0, 0x50(r5)
    stw r0, 0x70(r1)
    lwz r0, 0x54(r5)
    stw r0, 0x74(r1)
    bl fn_8058DB14
    addis r5, r31, 0x2
    mr r3, r31
    mr r6, r5
    addi r4, r1, 0x20
    addi r6, r6, 0x5b0c
    addi r5, r5, 0x5b04
    bl fn_80597168
    addis r5, r31, 0x2
    lwz r0, 0x6088(r5)
    lwz r4, 0x5b04(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x608c(r3)
    lwz r0, 0x6088(r5)
    lwz r4, 0x5b0c(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    stw r4, 0x6098(r3)
lbl_fn_8058CA48_00001B2C:
    addi r3, r1, 0x8
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8058CA48_00001B44:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}
