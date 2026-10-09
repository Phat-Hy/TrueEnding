#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8003EA3C(void);
extern void fn_8003EFB0(void);
extern void fn_8003F1E4(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_800CB3A0(void);
extern void fn_800E2A24(void);
extern void fn_800FB1BC(void);
extern void fn_801018E4(void);
extern void fn_80101CDC(void);
extern void fn_80102EAC(void);
extern void fn_801031D0(void);
extern void fn_80108C10(void);
extern void fn_80109864(void);
extern void fn_8012DF7C(void);
extern void fn_80133EE8(void);
extern void fn_80133F18(void);
extern void fn_80148B0C(void);
extern void fn_80150460(void);
extern void fn_8015076C(void);
extern void fn_8015E7A0(void);
extern void fn_801681B0(void);
extern void fn_8016D0A0(void);
extern void fn_801750FC(void);
extern void fn_80211480(void);
extern void fn_80219E6C(void);
extern void fn_8021A684(void);
extern void fn_8021A77C(void);
extern void fn_8021A8D0(void);
extern void fn_803750E4(void);
extern void fn_8037D4C0(void);
extern void fn_803E9B7C(void);
extern void fn_804AE3BC(void);
extern void fn_804D818C(void);
extern void fn_804E8BF8(void);
extern void fn_8050E098(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);

/* External data declarations */
extern u8 lbl_80759748[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8AE8[];
extern u8 lbl_807C8F48[];

/* Small data declarations */
extern u32 lbl_8087E1AC;
extern u32 lbl_8087E1B0;
extern u32 lbl_8087EE74;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F498;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F600;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887570;
extern u32 lbl_80887574;
extern u32 lbl_80887588;
extern u32 lbl_80887590;
extern u32 lbl_808875C4;
extern u32 lbl_808875D0;
extern u32 lbl_80887624;
extern u32 lbl_80887630;
extern u32 lbl_80887634;

/* Function declarations */
void fn_804EF9B8(void);
void fn_804EFC98(void);
void fn_804EFE9C(void);
void fn_804EFF78(void);
void fn_804F1064(void);
void fn_804F106C(void);
void fn_804F1128(void);
void fn_804F12A4(void);
void fn_804F1360(void);

asm void fn_804EF9B8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804EF9B8_000002C8
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EF9B8_00000058
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EF9B8_00000058:
    lwz r28, lbl_8087F600
    lwz r5, lbl_8087F610
    lbz r0, 0x24(r28)
    cmpwi r0, 0x1
    beq lbl_fn_804EF9B8_00000080
    cmpwi r0, 0x2
    beq lbl_fn_804EF9B8_00000088
    cmpwi r0, 0x3
    beq lbl_fn_804EF9B8_000000DC
    b lbl_fn_804EF9B8_00000104
lbl_fn_804EF9B8_00000080:
    li r31, 0x0
    b lbl_fn_804EF9B8_00000108
lbl_fn_804EF9B8_00000088:
    lwz r0, 0x5e8(r5)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EF9B8_000000D4
lbl_fn_804EF9B8_0000009C:
    lwz r6, 0x5e4(r5)
    add r7, r6, r3
    lwz r0, 0xd0(r7)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EF9B8_000000CC
    lbz r4, 0x25(r28)
    lbz r0, 0xcc(r7)
    cmplw r4, r0
    bne lbl_fn_804EF9B8_000000CC
    lwzx r31, r6, r3
    b lbl_fn_804EF9B8_00000108
lbl_fn_804EF9B8_000000CC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EF9B8_0000009C
lbl_fn_804EF9B8_000000D4:
    li r31, 0x0
    b lbl_fn_804EF9B8_00000108
lbl_fn_804EF9B8_000000DC:
    lbz r3, 0x25(r28)
    lwz r0, 0x5f4(r5)
    cmplw r0, r3
    ble lbl_fn_804EF9B8_000000FC
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r5)
    lwzx r31, r3, r0
    b lbl_fn_804EF9B8_00000108
lbl_fn_804EF9B8_000000FC:
    li r31, 0x0
    b lbl_fn_804EF9B8_00000108
lbl_fn_804EF9B8_00000104:
    li r31, 0x0
lbl_fn_804EF9B8_00000108:
    cmpwi r31, 0x0
    beq lbl_fn_804EF9B8_000002C8
    lwz r29, 0x18(r28)
    lwz r30, 0x1208(r31)
    beq lbl_fn_804EF9B8_000001B4
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804EF9B8_000001B4
    rlwinm r0, r29, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_804EF9B8_00000188
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_804EF9B8_00000188
    lwz r5, 0x7e0(r31)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_804EF9B8_0000016C
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_804EF9B8_0000016C
    li r4, 0x0
lbl_fn_804EF9B8_0000016C:
    cmpwi r4, 0x0
    bne lbl_fn_804EF9B8_00000188
    rlwinm r3, r29, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    beq lbl_fn_804EF9B8_00000188
    ori r29, r29, 0x8
lbl_fn_804EF9B8_00000188:
    rlwinm r0, r29, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_804EF9B8_000001B4
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_804EF9B8_000001B4
    lwz r3, 0x560(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_804EF9B8_000001B4
    ori r29, r29, 0x400
lbl_fn_804EF9B8_000001B4:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EF9B8_000001F4
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r26, 0x1
    lis r5, lbl_807C8F48@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r3)
    stw r26, 0xc(r3)
    bl __register_global_object
    stb r26, lbl_8087EE74
lbl_fn_804EF9B8_000001F4:
    lis r27, lbl_807C6BB8@ha
    li r26, 0x0
    addi r27, r27, lbl_807C6BB8@l
    mr r3, r31
    stw r26, 0xc(r27)
    mr r5, r28
    mr r8, r29
    addi r6, r28, 0xc
    lwz r4, 0x1c(r28)
    li r9, 0x0
    lwz r7, 0x20(r28)
    bl fn_8015076C
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EF9B8_00000260
    li r28, 0x1
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8F48@ha
    stw r26, 0x0(r27)
    mr r3, r27
    addi r4, r4, fn_8003EFB0@l
    stw r26, 0x4(r27)
    addi r5, r5, lbl_807C8F48@l
    stw r26, 0x8(r27)
    stw r28, 0xc(r27)
    bl __register_global_object
    stb r28, lbl_8087EE74
lbl_fn_804EF9B8_00000260:
    lis r3, lbl_807C6BB8@ha
    cmpwi r30, 0x0
    addi r3, r3, lbl_807C6BB8@l
    li r0, 0x1
    stw r0, 0xc(r3)
    beq lbl_fn_804EF9B8_000002C8
    lwz r0, 0x1208(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804EF9B8_000002C8
    lfs f0, lbl_80887570
    li r5, 0x0
    li r0, 0x3
    stw r5, 0xc(r1)
    mr r3, r30
    addi r4, r1, 0x8
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r31, 0x18(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_804EF9B8_000002C8:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804EFC98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804EFC98_000004CC
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EFC98_00000338
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EFC98_00000338:
    lwz r31, lbl_8087F600
    lwz r7, lbl_8087F610
    lbz r0, 0x1d(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804EFC98_00000360
    cmpwi r0, 0x2
    beq lbl_fn_804EFC98_00000368
    cmpwi r0, 0x3
    beq lbl_fn_804EFC98_000003BC
    b lbl_fn_804EFC98_000003E4
lbl_fn_804EFC98_00000360:
    li r28, 0x0
    b lbl_fn_804EFC98_000003E8
lbl_fn_804EFC98_00000368:
    lwz r0, 0x5e8(r7)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EFC98_000003B4
lbl_fn_804EFC98_0000037C:
    lwz r5, 0x5e4(r7)
    add r6, r5, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EFC98_000003AC
    lbz r4, 0x1e(r31)
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804EFC98_000003AC
    lwzx r28, r5, r3
    b lbl_fn_804EFC98_000003E8
lbl_fn_804EFC98_000003AC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EFC98_0000037C
lbl_fn_804EFC98_000003B4:
    li r28, 0x0
    b lbl_fn_804EFC98_000003E8
lbl_fn_804EFC98_000003BC:
    lbz r3, 0x1e(r31)
    lwz r0, 0x5f4(r7)
    cmplw r0, r3
    ble lbl_fn_804EFC98_000003DC
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r7)
    lwzx r28, r3, r0
    b lbl_fn_804EFC98_000003E8
lbl_fn_804EFC98_000003DC:
    li r28, 0x0
    b lbl_fn_804EFC98_000003E8
lbl_fn_804EFC98_000003E4:
    li r28, 0x0
lbl_fn_804EFC98_000003E8:
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_804EFC98_000004CC
    lwz r3, 0x0(r31)
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_804EFC98_000004CC
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EFC98_00000448
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8F48@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_804EFC98_00000448:
    lis r30, lbl_807C6BB8@ha
    li r29, 0x0
    addi r30, r30, lbl_807C6BB8@l
    lwz r3, lbl_8087F048
    stw r29, 0xc(r30)
    mr r4, r28
    lfs f1, lbl_80887590
    mr r5, r27
    lhz r0, 0x1c(r31)
    addi r6, r31, 0x4
    addi r7, r31, 0x10
    li r8, 0x0
    extrwi r9, r0, 1, 16
    bl fn_800FB1BC
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EFC98_000004BC
    li r31, 0x1
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8F48@ha
    stw r29, 0x0(r30)
    mr r3, r30
    addi r4, r4, fn_8003EFB0@l
    stw r29, 0x4(r30)
    addi r5, r5, lbl_807C8F48@l
    stw r29, 0x8(r30)
    stw r31, 0xc(r30)
    bl __register_global_object
    stb r31, lbl_8087EE74
lbl_fn_804EFC98_000004BC:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x1
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
lbl_fn_804EFC98_000004CC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804EFE9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804EFE9C_000005B0
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804EFE9C_000005B0
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EFE9C_0000053C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EFE9C_0000053C:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    beq lbl_fn_804EFE9C_000005B0
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EFE9C_0000057C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EFE9C_0000057C:
    lwz r4, lbl_8087F498
    lwz r6, lbl_8087F600
    cmpwi r4, 0x0
    beq lbl_fn_804EFE9C_000005B0
    lwz r5, 0x0(r6)
    addi r3, r1, 0x8
    lfs f1, lbl_80887590
    li r7, 0x1
    lwz r6, 0x4(r6)
    bl fn_803E9B7C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804EFE9C_000005B0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804EFF78(void)
{
    nofralloc
    stwu r1, -0x380(r1)
    mflr r0
    stw r0, 0x384(r1)
    addi r11, r1, 0x380
    bl _savegpr_25
    lwz r3, lbl_8087F430
    mr r25, r4
    cmpwi r3, 0x0
    beq lbl_fn_804EFF78_000005F0
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0xa
    beq lbl_fn_804EFF78_00001694
lbl_fn_804EFF78_000005F0:
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804EFF78_00001694
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EFF78_00000634
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EFF78_00000634:
    lwz r28, lbl_8087F600
    lwz r5, lbl_8087F610
    lbz r0, 0x88(r28)
    cmpwi r0, 0x1
    beq lbl_fn_804EFF78_0000065C
    cmpwi r0, 0x2
    beq lbl_fn_804EFF78_00000664
    cmpwi r0, 0x3
    beq lbl_fn_804EFF78_000006B8
    b lbl_fn_804EFF78_000006E0
lbl_fn_804EFF78_0000065C:
    li r27, 0x0
    b lbl_fn_804EFF78_000006E4
lbl_fn_804EFF78_00000664:
    lwz r0, 0x5e8(r5)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EFF78_000006B0
lbl_fn_804EFF78_00000678:
    lwz r0, 0x5e4(r5)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EFF78_000006A8
    lbz r4, 0x89(r28)
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804EFF78_000006A8
    lwz r27, 0x0(r6)
    b lbl_fn_804EFF78_000006E4
lbl_fn_804EFF78_000006A8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EFF78_00000678
lbl_fn_804EFF78_000006B0:
    li r27, 0x0
    b lbl_fn_804EFF78_000006E4
lbl_fn_804EFF78_000006B8:
    lwz r0, 0x5f4(r5)
    lbz r3, 0x89(r28)
    cmplw r0, r3
    ble lbl_fn_804EFF78_000006D8
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r5)
    lwzx r27, r3, r0
    b lbl_fn_804EFF78_000006E4
lbl_fn_804EFF78_000006D8:
    li r27, 0x0
    b lbl_fn_804EFF78_000006E4
lbl_fn_804EFF78_000006E0:
    li r27, 0x0
lbl_fn_804EFF78_000006E4:
    lbz r0, 0x8a(r28)
    lwz r5, lbl_8087F610
    cmpwi r0, 0x1
    beq lbl_fn_804EFF78_00000708
    cmpwi r0, 0x2
    beq lbl_fn_804EFF78_00000710
    cmpwi r0, 0x3
    beq lbl_fn_804EFF78_00000764
    b lbl_fn_804EFF78_0000078C
lbl_fn_804EFF78_00000708:
    li r26, 0x0
    b lbl_fn_804EFF78_00000790
lbl_fn_804EFF78_00000710:
    lwz r0, 0x5e8(r5)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EFF78_0000075C
lbl_fn_804EFF78_00000724:
    lwz r0, 0x5e4(r5)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EFF78_00000754
    lbz r4, 0x8b(r28)
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804EFF78_00000754
    lwz r26, 0x0(r6)
    b lbl_fn_804EFF78_00000790
lbl_fn_804EFF78_00000754:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EFF78_00000724
lbl_fn_804EFF78_0000075C:
    li r26, 0x0
    b lbl_fn_804EFF78_00000790
lbl_fn_804EFF78_00000764:
    lwz r0, 0x5f4(r5)
    lbz r3, 0x8b(r28)
    cmplw r0, r3
    ble lbl_fn_804EFF78_00000784
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r5)
    lwzx r26, r3, r0
    b lbl_fn_804EFF78_00000790
lbl_fn_804EFF78_00000784:
    li r26, 0x0
    b lbl_fn_804EFF78_00000790
lbl_fn_804EFF78_0000078C:
    li r26, 0x0
lbl_fn_804EFF78_00000790:
    cmpwi r26, 0x0
    beq lbl_fn_804EFF78_00001694
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_804EFF78_000007E4
    lwz r3, 0x0(r28)
    bl fn_80219E6C
    bl fn_8021A684
    cmpwi r3, 0x0
    beq lbl_fn_804EFF78_000007E4
    lwz r3, lbl_8087F048
    mr r4, r26
    mr r5, r27
    li r6, 0x5a
    li r7, -0x1
    bl fn_80102EAC
    lwz r3, lbl_8087F048
    mr r4, r27
    mr r5, r26
    li r6, 0x0
    bl fn_801031D0
lbl_fn_804EFF78_000007E4:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EFF78_00000824
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8F48@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_804EFF78_00000824:
    lis r3, lbl_807C6BB8@ha
    cmpwi r27, 0x0
    addi r3, r3, lbl_807C6BB8@l
    li r0, 0x0
    stw r0, 0xc(r3)
    beq lbl_fn_804EFF78_000008D8
    stw r0, 0xad8(r27)
    mr r31, r28
    addi r30, r28, 0x10
    li r29, 0x0
    b lbl_fn_804EFF78_000008CC
lbl_fn_804EFF78_00000850:
    lwz r3, 0x10(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804EFF78_000008C0
    lwz r0, 0xad8(r27)
    addi r5, r27, 0x7d4
    cmplwi r0, 0x6
    bge lbl_fn_804EFF78_000008B0
    lwz r0, 0x304(r5)
    mulli r0, r0, 0x14
    add r0, r5, r0
    addic. r4, r0, 0x308
    beq lbl_fn_804EFF78_000008A4
    stw r3, 0x0(r4)
    lwz r0, 0x14(r31)
    stw r0, 0x4(r4)
    lwz r0, 0x18(r31)
    stw r0, 0x8(r4)
    lwz r0, 0x1c(r31)
    stw r0, 0xc(r4)
    lwz r0, 0x20(r31)
    stw r0, 0x10(r4)
lbl_fn_804EFF78_000008A4:
    lwz r3, 0x304(r5)
    addi r0, r3, 0x1
    stw r0, 0x304(r5)
lbl_fn_804EFF78_000008B0:
    lwz r3, lbl_8087F048
    mr r4, r30
    mr r5, r27
    bl fn_80109864
lbl_fn_804EFF78_000008C0:
    addi r31, r31, 0x14
    addi r30, r30, 0x14
    addi r29, r29, 0x1
lbl_fn_804EFF78_000008CC:
    bl fn_804F1064
    cmplw r29, r3
    blt lbl_fn_804EFF78_00000850
lbl_fn_804EFF78_000008D8:
    lwz r0, 0x124(r1)
    li r4, 0x0
    cmplwi r25, 0xa
    li r3, -0x1
    clrlwi r0, r0, 4
    stw r4, 0x108(r1)
    stw r4, 0x10c(r1)
    stw r4, 0x110(r1)
    stw r4, 0x114(r1)
    stw r4, 0x118(r1)
    stw r3, 0x11c(r1)
    stw r0, 0x124(r1)
    stw r3, 0x120(r1)
    bne lbl_fn_804EFF78_00001294
    lwz r3, 0x0(r28)
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_804EFF78_000012C4
    cmpwi r26, 0x0
    lwz r30, 0x4(r28)
    beq lbl_fn_804EFF78_000009CC
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    bne lbl_fn_804EFF78_000009CC
    rlwinm r0, r30, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_804EFF78_0000099C
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_804EFF78_0000099C
    lwz r6, 0x7e0(r26)
    li r5, 0x1
    rlwinm r4, r6, 0, 12, 12
    subis r0, r4, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_804EFF78_00000980
    rlwinm r4, r6, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_804EFF78_00000980
    li r5, 0x0
lbl_fn_804EFF78_00000980:
    cmpwi r5, 0x0
    bne lbl_fn_804EFF78_0000099C
    rlwinm r4, r30, 0, 9, 9
    subis r0, r4, 0x40
    cmplwi r0, 0x0
    beq lbl_fn_804EFF78_0000099C
    ori r30, r30, 0x8
lbl_fn_804EFF78_0000099C:
    rlwinm r0, r30, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_804EFF78_000009CC
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_804EFF78_000009CC
    lwz r0, 0x560(r26)
    cmpwi r0, 0x2
    beq lbl_fn_804EFF78_000009C8
    cmpwi r0, 0x1
    bne lbl_fn_804EFF78_000009CC
lbl_fn_804EFF78_000009C8:
    ori r30, r30, 0x400
lbl_fn_804EFF78_000009CC:
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 16, 16
    addis r0, r3, 0x0
    cmplwi r0, 0x8000
    bne lbl_fn_804EFF78_00000AB0
    lwz r0, 0x54c(r26)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_804EFF78_00000AB0
    lwz r0, 0x1208(r26)
    cmpwi r0, 0x0
    beq lbl_fn_804EFF78_00000AA4
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EFF78_00000A40
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r25, 0x1
    lis r5, lbl_807C8F48@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r3)
    stw r25, 0xc(r3)
    bl __register_global_object
    stb r25, lbl_8087EE74
lbl_fn_804EFF78_00000A40:
    lis r25, lbl_807C6BB8@ha
    li r31, 0x1
    addi r25, r25, lbl_807C6BB8@l
    mr r3, r26
    stw r31, 0xc(r25)
    bl fn_801750FC
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EFF78_00000A94
    li r0, 0x0
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8F48@ha
    stw r0, 0x0(r25)
    mr r3, r25
    addi r4, r4, fn_8003EFB0@l
    stw r0, 0x4(r25)
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r25)
    stw r31, 0xc(r25)
    bl __register_global_object
    stb r31, lbl_8087EE74
lbl_fn_804EFF78_00000A94:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
lbl_fn_804EFF78_00000AA4:
    mr r3, r26
    li r4, 0x1
    bl fn_8016D0A0
lbl_fn_804EFF78_00000AB0:
    lwz r0, 0x4(r29)
    li r31, 0x1
    cmpwi r0, 0x147
    beq lbl_fn_804EFF78_0000116C
    cmpwi r27, 0x0
    beq lbl_fn_804EFF78_00000AD8
    lwz r5, 0xc(r28)
    mr r3, r26
    mr r4, r27
    bl fn_80150460
lbl_fn_804EFF78_00000AD8:
    lwz r4, 0xfe4(r26)
    li r0, 0x0
    lfs f0, lbl_80887590
    li r3, 0x1
    stw r4, 0x118(r1)
    stw r3, 0xf0(r1)
    stfs f0, 0xf4(r1)
    stfs f0, 0xf8(r1)
    stw r0, 0xfc(r1)
    stfs f0, 0x100(r1)
    stw r0, 0x104(r1)
    lwz r0, 0xfe4(r26)
    stw r0, 0xf0(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0xf4(r1)
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804EFF78_00000B34
    lwz r0, 0x4(r29)
    cmpwi r0, 0x2711
    beq lbl_fn_804EFF78_00000B34
    li r31, 0x0
lbl_fn_804EFF78_00000B34:
    lwz r0, 0x7e8(r26)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EFF78_00000B6C
    mr r3, r29
    bl fn_8021A8D0
    cmpwi r3, 0x0
    bne lbl_fn_804EFF78_00000B6C
    lwz r0, 0x4(r29)
    cmpwi r0, 0x142
    beq lbl_fn_804EFF78_00000B68
    cmpwi r0, 0x131
    bne lbl_fn_804EFF78_00000B6C
lbl_fn_804EFF78_00000B68:
    li r31, 0x0
lbl_fn_804EFF78_00000B6C:
    cmpwi r31, 0x0
    beq lbl_fn_804EFF78_00000D00
    mr r4, r29
    mr r5, r27
    mr r6, r26
    mr r7, r30
    addi r3, r1, 0x108
    addi r8, r1, 0xf0
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804EFF78_00000D00
    cmpwi r27, 0x0
    beq lbl_fn_804EFF78_00000D00
    addi r3, r27, 0x7d4
    li r4, 0x23
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_804EFF78_00000D00
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_804EFF78_00000D00
    lwz r3, 0xec(r1)
    li r8, 0x0
    li r7, -0x1
    li r0, 0x1
    clrlwi r6, r3, 4
    stw r8, 0xd4(r1)
    addi r3, r27, 0x7d4
    li r4, 0x23
    stw r8, 0xd8(r1)
    li r5, -0x1
    stw r8, 0xdc(r1)
    stw r8, 0xe0(r1)
    stw r7, 0xe4(r1)
    stw r6, 0xec(r1)
    stw r7, 0xe8(r1)
    stw r0, 0xd0(r1)
    bl fn_80133F18
    cmpwi r3, 0x0
    ble lbl_fn_804EFF78_00000C4C
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80759748@ha
    stw r3, 0x344(r1)
    lfd f8, lbl_80759748@l(r4)
    stw r0, 0x340(r1)
    lfs f0, lbl_80887630
    lfd f7, 0x340(r1)
    fsubs f7, f7, f8
    fdivs f8, f7, f0
    b lbl_fn_804EFF78_00000C50
lbl_fn_804EFF78_00000C4C:
    lfs f8, lbl_80887588
lbl_fn_804EFF78_00000C50:
    lwz r4, 0x10c(r1)
    lis r0, 0x4330
    stw r0, 0x348(r1)
    lis r3, lbl_80759748@ha
    xoris r0, r4, 0x8000
    lfd f7, lbl_80759748@l(r3)
    stw r0, 0x34c(r1)
    addi r3, r26, 0x7d4
    lwz r0, 0xd4(r1)
    li r5, 0x0
    lfd f0, 0x348(r1)
    li r6, 0x0
    fsubs f0, f0, f7
    fmuls f0, f0, f8
    fctiwz f0, f0
    stfd f0, 0x350(r1)
    lwz r4, 0x354(r1)
    subf r4, r4, r0
    stw r4, 0xd4(r1)
    bl fn_8012DF7C
    lfs f2, 0x530(r26)
    addi r5, r1, 0xc4
    psq_l f1, 0x528(r26), 0, 0
    mr r6, r26
    psq_st f1, 0x0(r5), 0, 0
    mr r7, r26
    lfs f10, lbl_80887570
    addi r4, r1, 0xd0
    lfs f9, lbl_808875C4
    li r8, 0x0
    lfs f8, 0xc4(r1)
    fadds f0, f2, f10
    lfs f7, 0xc8(r1)
    li r9, 0x0
    fadds f8, f8, f10
    stfs f10, 0xac(r1)
    fadds f7, f7, f9
    stfs f9, 0xb0(r1)
    lwz r3, lbl_8087F048
    stfs f10, 0xb4(r1)
    stfs f8, 0xc4(r1)
    stfs f7, 0xc8(r1)
    stfs f0, 0xcc(r1)
    bl fn_80108C10
lbl_fn_804EFF78_00000D00:
    cmpwi r27, 0x0
    beq lbl_fn_804EFF78_0000116C
    mr r3, r29
    bl fn_8021A77C
    cmpwi r3, 0x0
    beq lbl_fn_804EFF78_0000116C
    lwz r0, 0x328(r1)
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x30c(r1)
    clrlwi r0, r0, 4
    addi r3, r1, 0x2a8
    stw r5, 0x310(r1)
    stw r5, 0x314(r1)
    stw r5, 0x318(r1)
    stw r5, 0x31c(r1)
    stw r4, 0x320(r1)
    stw r0, 0x328(r1)
    stw r4, 0x324(r1)
    bl fn_800E2A24
    lwz r0, 0x12a8(r26)
    addi r25, r1, 0xa0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_804EFF78_00000DBC
    addi r3, r1, 0x28
    psq_l f1, 0x5f4(r26), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x34
    psq_l f1, 0x600(r26), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x2c(r1)
    lfs f7, 0x38(r1)
    psq_l f1, 0x5f4(r26), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80887624
    psq_st f1, 0x0(r25), 0, 0
    lfs f2, 0x5fc(r26)
    fmuls f7, f0, f7
    lfs f0, 0xa4(r1)
    stfs f2, 0x30(r1)
    lfs f2, 0x608(r26)
    fadds f0, f0, f7
    stfs f2, 0x3c(r1)
    lfs f2, 0x5fc(r26)
    stfs f2, 0xa8(r1)
    stfs f0, 0xa4(r1)
    b lbl_fn_804EFF78_00000DD8
lbl_fn_804EFF78_00000DBC:
    mr r3, r26
    li r4, 0x0
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0xa8(r1)
lbl_fn_804EFF78_00000DD8:
    lfs f7, 0x530(r27)
    addi r3, r1, 0xb8
    lfs f0, 0xa8(r1)
    lfs f9, 0x52c(r27)
    fsubs f10, f7, f0
    lfs f8, 0xa4(r1)
    lfs f7, 0x528(r27)
    lfs f0, 0xa0(r1)
    fsubs f8, f9, f8
    stfs f10, 0xc0(r1)
    fsubs f0, f7, f0
    stfs f8, 0xbc(r1)
    stfs f0, 0xb8(r1)
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_80887634
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_804EFF78_00000E5C
    addi r3, r1, 0xb8
    mr r4, r3
    bl fn_805F98D0
    lfs f9, 0x5b0(r26)
    lfs f8, 0xb8(r1)
    lfs f7, 0xbc(r1)
    lfs f0, 0xc0(r1)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0xb8(r1)
    stfs f7, 0xbc(r1)
    stfs f0, 0xc0(r1)
    b lbl_fn_804EFF78_00000FD4
lbl_fn_804EFF78_00000E5C:
    lfs f8, 0x5b0(r26)
    addi r25, r1, 0x278
    lfs f7, lbl_80887570
    lfs f0, lbl_80887590
    stfs f7, 0xb8(r1)
    stfs f7, 0xbc(r1)
    stfs f8, 0xc0(r1)
    stfs f7, 0x2a4(r1)
    stfs f7, 0x29c(r1)
    stfs f7, 0x298(r1)
    stfs f7, 0x294(r1)
    stfs f7, 0x290(r1)
    stfs f7, 0x288(r1)
    stfs f7, 0x284(r1)
    stfs f7, 0x280(r1)
    stfs f7, 0x27c(r1)
    stfs f0, 0x2a0(r1)
    stfs f0, 0x28c(r1)
    stfs f0, 0x278(r1)
    lfs f1, 0x53c(r26)
    fcmpu cr0, f7, f1
    beq lbl_fn_804EFF78_00000F04
    addi r3, r1, 0x188
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0x188
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_804EFF78_00000F04:
    lfs f0, lbl_80887570
    lfs f1, 0x538(r26)
    fcmpu cr0, f0, f1
    beq lbl_fn_804EFF78_00000F64
    addi r3, r1, 0x1e8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0x1e8
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    addi r3, r1, 0x1b8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_804EFF78_00000F64:
    lfs f0, lbl_80887570
    lfs f1, 0x534(r26)
    fcmpu cr0, f0, f1
    beq lbl_fn_804EFF78_00000FC4
    addi r3, r1, 0x248
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0x248
    addi r5, r1, 0x218
    bl fn_805F89F0
    addi r3, r1, 0x218
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_804EFF78_00000FC4:
    addi r4, r1, 0xb8
    addi r3, r1, 0x278
    mr r5, r4
    bl fn_805F93C0
lbl_fn_804EFF78_00000FD4:
    lwz r0, 0x12a8(r26)
    addi r25, r1, 0x88
    extrwi. r0, r0, 1, 2
    beq lbl_fn_804EFF78_00001040
    addi r3, r1, 0x10
    psq_l f1, 0x5f4(r26), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1c
    psq_l f1, 0x600(r26), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x14(r1)
    lfs f7, 0x20(r1)
    psq_l f1, 0x5f4(r26), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80887624
    psq_st f1, 0x0(r25), 0, 0
    lfs f2, 0x5fc(r26)
    fmuls f7, f0, f7
    lfs f0, 0x8c(r1)
    stfs f2, 0x18(r1)
    lfs f2, 0x608(r26)
    fadds f0, f0, f7
    stfs f2, 0x24(r1)
    lfs f2, 0x5fc(r26)
    stfs f2, 0x90(r1)
    stfs f0, 0x8c(r1)
    b lbl_fn_804EFF78_0000105C
lbl_fn_804EFF78_00001040:
    mr r3, r26
    li r4, 0x0
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x90(r1)
lbl_fn_804EFF78_0000105C:
    lfs f7, 0xc0(r1)
    addi r3, r1, 0x70
    lfs f0, 0x90(r1)
    addi r6, r1, 0x94
    lfs f9, 0xbc(r1)
    addi r5, r1, 0x2c4
    fadds f10, f7, f0
    lfs f8, 0x8c(r1)
    lfs f7, 0xb8(r1)
    addi r7, r1, 0xb8
    lfs f0, 0x88(r1)
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f8, 0x98(r1)
    fmr f2, f10
    mr r4, r3
    stfs f0, 0x94(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x2cc(r1)
    lfs f2, 0xc0(r1)
    stfs f10, 0x9c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F98D0
    lfs f0, 0x78(r1)
    rlwinm r0, r30, 0, 28, 28
    lfs f7, 0x74(r1)
    li r3, 0x0
    fneg f8, f0
    lfs f0, 0x70(r1)
    fneg f7, f7
    addi r5, r1, 0x7c
    fneg f0, f0
    cmplwi r0, 0x8
    stfs f0, 0x7c(r1)
    frsp f2, f8
    addi r4, r1, 0x2d0
    stfs f7, 0x80(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f8, 0x84(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x2d8(r1)
    stw r27, 0x2a8(r1)
    stw r26, 0x2ac(r1)
    stw r29, 0x2b0(r1)
    stw r3, 0x2ec(r1)
    stw r30, 0x2b4(r1)
    stw r30, 0x33c(r1)
    bne lbl_fn_804EFF78_00001134
    li r0, 0x1
    stw r0, 0x32c(r1)
    b lbl_fn_804EFF78_00001138
lbl_fn_804EFF78_00001134:
    stw r3, 0x32c(r1)
lbl_fn_804EFF78_00001138:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804EFF78_00001158
    addi r4, r1, 0x2a8
    bl fn_801018E4
    lwz r3, lbl_8087F048
    addi r4, r1, 0x2a8
    bl fn_80101CDC
lbl_fn_804EFF78_00001158:
    lwz r0, 0x10c(r1)
    cmpwi r0, 0x0
    ble lbl_fn_804EFF78_0000116C
    li r0, 0x0
    stw r0, 0xc4c(r26)
lbl_fn_804EFF78_0000116C:
    lwz r0, 0x90(r29)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_804EFF78_000011FC
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_804EFF78_000011FC
    lfs f7, lbl_80887570
    addi r3, r1, 0x128
    lfs f0, lbl_80887590
    li r4, 0x79
    stfs f7, 0x58(r1)
    stfs f7, 0x5c(r1)
    stfs f0, 0x60(r1)
    lfs f1, 0x538(r26)
    bl fn_805F8E70
    addi r4, r1, 0x58
    addi r3, r1, 0x128
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x60(r1)
    mr r3, r26
    lfs f7, 0x5c(r1)
    addi r4, r1, 0x64
    lfs f0, 0x58(r1)
    fneg f8, f8
    fneg f7, f7
    li r5, 0x0
    fneg f0, f0
    stfs f8, 0x6c(r1)
    stfs f0, 0x64(r1)
    stfs f7, 0x68(r1)
    lwz r0, 0xac(r29)
    extrwi r6, r0, 1, 22
    bl fn_801681B0
lbl_fn_804EFF78_000011FC:
    cmpwi r31, 0x0
    beq lbl_fn_804EFF78_000012C4
    lwz r25, lbl_8087F048
    cmpwi r25, 0x0
    beq lbl_fn_804EFF78_000012C4
    lwz r0, 0xac(r29)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_804EFF78_000012C4
    lbz r0, 0x1(r29)
    extsb r0, r0
    cmpwi r0, 0x6
    beq lbl_fn_804EFF78_000012C4
    cmpwi r0, 0x5
    beq lbl_fn_804EFF78_000012C4
    cmpwi r0, 0x3
    beq lbl_fn_804EFF78_000012C4
    lwz r0, 0x4(r29)
    cmpwi r0, 0x1774
    beq lbl_fn_804EFF78_000012C4
    cmpwi r0, 0x4fcc
    beq lbl_fn_804EFF78_000012C4
    lwz r12, 0x0(r26)
    mr r4, r26
    addi r3, r1, 0x4c
    lwz r12, 0xac(r12)
    mtctr r12
    bctrl
    mr r3, r25
    mr r6, r27
    mr r8, r30
    addi r4, r1, 0x108
    addi r5, r1, 0x4c
    li r7, 0x0
    li r9, 0x0
    bl fn_80108C10
    b lbl_fn_804EFF78_000012C4
lbl_fn_804EFF78_00001294:
    cmplwi r25, 0xb
    bne lbl_fn_804EFF78_000012C4
    lwz r3, 0x0(r28)
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_804EFF78_000012C4
    lwz r7, 0x4(r28)
    mr r4, r3
    mr r5, r27
    mr r6, r26
    addi r3, r1, 0x108
    bl fn_8003F1E4
lbl_fn_804EFF78_000012C4:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EFF78_00001304
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r25, 0x1
    lis r5, lbl_807C8F48@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r3)
    stw r25, 0xc(r3)
    bl __register_global_object
    stb r25, lbl_8087EE74
lbl_fn_804EFF78_00001304:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x1
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804EFF78_00001380
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_804EFF78_00001344
    lwz r0, 0x560(r26)
    cmpwi r0, 0x17
    beq lbl_fn_804EFF78_0000136C
    cmpwi r0, 0x3b
    beq lbl_fn_804EFF78_0000136C
lbl_fn_804EFF78_00001344:
    lfs f7, lbl_80887570
    mr r3, r26
    lfs f0, lbl_80887574
    addi r4, r1, 0x40
    stfs f7, 0x40(r1)
    li r5, -0x1
    li r6, 0x0
    stfs f0, 0x44(r1)
    stfs f7, 0x48(r1)
    bl fn_8015E7A0
lbl_fn_804EFF78_0000136C:
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_804EFF78_00001380:
    lwz r30, lbl_8087F610
    li r3, 0x0
    lwz r0, 0x5e8(r30)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EFF78_000013C8
lbl_fn_804EFF78_00001398:
    lwz r0, 0x5e4(r30)
    add r29, r0, r3
    lwz r0, 0xd0(r29)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EFF78_000013C0
    lwz r0, 0x0(r29)
    cmplw r0, r26
    bne lbl_fn_804EFF78_000013C0
    b lbl_fn_804EFF78_000013CC
lbl_fn_804EFF78_000013C0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EFF78_00001398
lbl_fn_804EFF78_000013C8:
    li r29, 0x0
lbl_fn_804EFF78_000013CC:
    lwz r6, lbl_8087F610
    li r5, 0x0
    li r3, 0x0
    lwz r0, 0x5f4(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EFF78_00001408
lbl_fn_804EFF78_000013E8:
    lwz r4, 0x5f0(r6)
    lwzx r0, r4, r3
    cmplw r0, r26
    bne lbl_fn_804EFF78_000013FC
    b lbl_fn_804EFF78_0000140C
lbl_fn_804EFF78_000013FC:
    addi r5, r5, 0x1
    addi r3, r3, 0xb4
    bdnz lbl_fn_804EFF78_000013E8
lbl_fn_804EFF78_00001408:
    li r5, -0x1
lbl_fn_804EFF78_0000140C:
    cmpwi r5, 0x0
    blt lbl_fn_804EFF78_00001424
    mulli r0, r5, 0xb4
    lwz r3, 0x5f0(r6)
    add r31, r3, r0
    b lbl_fn_804EFF78_00001428
lbl_fn_804EFF78_00001424:
    li r31, 0x0
lbl_fn_804EFF78_00001428:
    cmpwi r29, 0x0
    beq lbl_fn_804EFF78_00001540
    lwz r0, 0xd0(r29)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_804EFF78_00001558
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EFF78_00001474
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EFF78_00001468
    li r0, 0x0
    b lbl_fn_804EFF78_00001490
lbl_fn_804EFF78_00001468:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EFF78_00001490
lbl_fn_804EFF78_00001474:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EFF78_00001488
    li r3, 0x0
    b lbl_fn_804EFF78_0000148C
lbl_fn_804EFF78_00001488:
    bl fn_806A8E40
lbl_fn_804EFF78_0000148C:
    clrlwi r0, r3, 24
lbl_fn_804EFF78_00001490:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EFF78_000014D8
lbl_fn_804EFF78_000014A8:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EFF78_000014D0
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EFF78_000014D0
    b lbl_fn_804EFF78_000014DC
lbl_fn_804EFF78_000014D0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EFF78_000014A8
lbl_fn_804EFF78_000014D8:
    li r5, 0x0
lbl_fn_804EFF78_000014DC:
    cmpwi r5, 0x0
    beq lbl_fn_804EFF78_00001518
    cmpwi r29, 0x0
    beq lbl_fn_804EFF78_00001518
    beq lbl_fn_804EFF78_0000150C
    lbz r0, 0xcc(r29)
    cmplwi r0, 0xff
    beq lbl_fn_804EFF78_0000150C
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EFF78_0000150C
    li r0, 0x1
    b lbl_fn_804EFF78_00001510
lbl_fn_804EFF78_0000150C:
    li r0, 0x0
lbl_fn_804EFF78_00001510:
    cmpwi r0, 0x0
    bne lbl_fn_804EFF78_00001520
lbl_fn_804EFF78_00001518:
    li r0, 0x0
    b lbl_fn_804EFF78_00001538
lbl_fn_804EFF78_00001520:
    lbz r0, 0xcc(r29)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_804EFF78_00001538:
    cmpwi r0, 0x0
    bne lbl_fn_804EFF78_00001558
lbl_fn_804EFF78_00001540:
    cmpwi r31, 0x0
    beq lbl_fn_804EFF78_00001694
    lwz r0, 0xb0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EFF78_00001694
lbl_fn_804EFF78_00001558:
    lwz r0, 0x124(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804EFF78_00001694
    lwz r3, lbl_8087F610
    mr r4, r27
    mr r5, r26
    bl fn_804E8BF8
    lwz r4, lbl_8087F610
    li r3, 0x0
    lwz r6, 0x5e8(r4)
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804EFF78_000015BC
lbl_fn_804EFF78_0000158C:
    lwz r0, 0x5e4(r4)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EFF78_000015B4
    lwz r0, 0x0(r5)
    cmplw r0, r27
    bne lbl_fn_804EFF78_000015B4
    b lbl_fn_804EFF78_000015C0
lbl_fn_804EFF78_000015B4:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EFF78_0000158C
lbl_fn_804EFF78_000015BC:
    li r5, 0x0
lbl_fn_804EFF78_000015C0:
    cmpwi r5, 0x0
    beq lbl_fn_804EFF78_00001694
    lwz r4, lbl_8087F610
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804EFF78_0000160C
lbl_fn_804EFF78_000015DC:
    lwz r0, 0x5e4(r4)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EFF78_00001604
    lwz r0, 0x0(r5)
    cmplw r0, r26
    bne lbl_fn_804EFF78_00001604
    b lbl_fn_804EFF78_00001610
lbl_fn_804EFF78_00001604:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EFF78_000015DC
lbl_fn_804EFF78_0000160C:
    li r5, 0x0
lbl_fn_804EFF78_00001610:
    cmpwi r5, 0x0
    beq lbl_fn_804EFF78_00001694
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1011
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804EFF78_00001654
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EFF78_00001654:
    li r3, 0x0
    li r0, 0x4
    stw r3, lbl_8087F5FC
    addi r25, r1, 0xc
    sth r0, 0x8(r1)
    lbz r0, 0x89(r28)
    stb r0, 0xc(r1)
    lbz r0, 0x8b(r28)
    stb r0, 0xd(r1)
    bl fn_804AE3BC
    lbz r0, 0x89(r28)
    mr r6, r25
    li r5, 0x1011
    li r7, 0x1
    clrlwi r4, r0, 28
    bl fn_8050E098
lbl_fn_804EFF78_00001694:
    addi r11, r1, 0x380
    bl _restgpr_25
    lwz r0, 0x384(r1)
    mtlr r0
    addi r1, r1, 0x380
    blr
}

asm void fn_804F1064(void)
{
    nofralloc
    li r3, 0x6
    blr
}

asm void fn_804F106C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F106C_00001760
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F106C_00001760
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F106C_0000170C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F106C_0000170C:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F106C_0000171C
    b lbl_fn_804F106C_00001760
lbl_fn_804F106C_0000171C:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F106C_00001750
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F106C_00001750:
    lwz r4, lbl_8087F600
    lwz r3, lbl_8087F610
    lwz r0, 0x0(r4)
    stw r0, 0x55c(r3)
lbl_fn_804F106C_00001760:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F1128(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F1128_000018DC
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F1128_000018DC
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1128_000017C8
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1128_000017C8:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1128_000017D8
    b lbl_fn_804F1128_000018DC
lbl_fn_804F1128_000017D8:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1128_0000180C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1128_0000180C:
    lwz r4, lbl_8087F600
    lwz r3, lbl_8087F610
    lwz r0, 0x0(r4)
    stw r0, 0x564(r3)
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804F1128_000018DC
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804F1128_000018DC
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_804F1128_0000185C
    lfs f1, lbl_808875D0
    li r4, 0x53d
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_804F1128_0000185C:
    lwz r3, lbl_8087F628
    lwz r4, 0xc2c(r3)
    clrlwi r5, r4, 31
    cmplwi r5, 0x1
    bne lbl_fn_804F1128_0000187C
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804F1128_000018DC
lbl_fn_804F1128_0000187C:
    cmplwi r5, 0x1
    beq lbl_fn_804F1128_00001894
    lwz r0, 0xc2c(r3)
    ori r0, r0, 0x1
    stw r0, 0xc2c(r3)
    b lbl_fn_804F1128_000018AC
lbl_fn_804F1128_00001894:
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804F1128_000018AC
    lwz r0, 0xc2c(r3)
    ori r0, r0, 0x2
    stw r0, 0xc2c(r3)
lbl_fn_804F1128_000018AC:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_804F1128_000018DC
    lwz r3, lbl_8087F9C0
    li r0, 0x1
    li r4, 0x1b0
    stw r0, 0x7c(r3)
    lwz r3, lbl_8087F430
    bl fn_803750E4
    lwz r3, lbl_8087F9C0
    li r0, 0x0
    stw r0, 0x7c(r3)
lbl_fn_804F1128_000018DC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F12A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F12A4_00001998
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F12A4_00001998
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F12A4_00001944
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F12A4_00001944:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F12A4_00001954
    b lbl_fn_804F12A4_00001998
lbl_fn_804F12A4_00001954:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F12A4_00001988
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F12A4_00001988:
    lwz r4, lbl_8087F600
    lwz r3, lbl_8087F610
    lwz r0, 0x0(r4)
    stw r0, 0x568(r3)
lbl_fn_804F12A4_00001998:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F1360(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F1360_00001AB0
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F1360_00001AB0
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1360_00001A04
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1360_00001A04:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1360_00001A14
    b lbl_fn_804F1360_00001AB0
lbl_fn_804F1360_00001A14:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F1360_00001A48
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F1360_00001A48:
    lwz r31, lbl_8087F600
    li r5, 0x20
    lwz r3, lbl_8087F610
    lwz r0, 0x0(r31)
    addi r4, r31, 0xc
    stw r0, 0x560(r3)
    lwz r3, lbl_8087F610
    lwz r0, 0x4(r31)
    stw r0, 0x564(r3)
    lwz r3, lbl_8087F610
    lwz r0, 0x8(r31)
    stw r0, 0x568(r3)
    lwz r3, lbl_8087F610
    addi r3, r3, 0x56c
    bl memcpy
    lwz r3, lbl_8087F610
    addi r4, r31, 0x2c
    li r5, 0xc
    addi r3, r3, 0x58c
    bl memcpy
    lwz r3, lbl_8087F610
    li r0, 0x1
    lwz r4, 0x38(r31)
    stw r4, 0x598(r3)
    lwz r3, lbl_8087F610
    stw r0, 0x5ac(r3)
lbl_fn_804F1360_00001AB0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
