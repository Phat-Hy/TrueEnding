#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_80058A1C(void);
extern void fn_80058B78(void);
extern void fn_80058BBC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092814(void);
extern void fn_80092F1C(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800EF73C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_802180A8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803EBD6C(void);
extern void fn_803EBE74(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_803F11F8(void);
extern void fn_803F3334(void);
extern void fn_80424AD4(void);
extern void fn_80424FB4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_8049994C(void);
extern void fn_80499B9C(void);
extern void fn_80499C48(void);
extern void fn_8049D68C(void);
extern void fn_804A0EFC(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80753498[];
extern u8 lbl_80753630[];
extern u8 lbl_80753670[];
extern u8 lbl_80753688[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078E470[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C88F8[];
extern u8 lbl_807C8908[];
extern u8 lbl_807C8A28[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF48;
extern u32 lbl_8087DF4C;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_80886668;
extern u32 lbl_80886674;
extern u32 lbl_80886678;
extern u32 lbl_80886680;
extern u32 lbl_80886684;
extern u32 lbl_80886688;
extern u32 lbl_8088668C;
extern u32 lbl_80886690;
extern u32 lbl_80886694;
extern u32 lbl_80886698;
extern u32 lbl_8088669C;
extern u32 lbl_808866A0;
extern u32 lbl_808866A4;
extern u32 lbl_808866A8;
extern u32 lbl_808866AC;
extern u32 lbl_808866B0;
extern u32 lbl_808866B4;

/* Function declarations */
void fn_80425498(void);
void fn_80425878(void);
void fn_80425928(void);
void fn_8042592C(void);
void fn_804259B8(void);
void fn_80425B64(void);
void fn_80425DB4(void);
void fn_80425E2C(void);
void fn_80425FB0(void);
void fn_80426108(void);
void fn_8042618C(void);
void fn_80426260(void);
void fn_80426344(void);
void fn_804264A0(void);
void fn_804265E8(void);
void fn_80426878(void);
void fn_8042693C(void);
void fn_804269E0(void);
void fn_80426CF8(void);

asm void fn_80425498(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r23, lbl_807C88F8@ha
    mr r28, r3
    addi r30, r3, 0x120
    li r29, 0x0
    addi r24, r23, lbl_807C88F8@l
    li r25, 0x1
    li r31, 0x0
    li r27, 0x5
    li r26, 0x5
lbl_fn_80425498_00000038:
    lwz r4, 0x8(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80425498_000003B8
    lwz r0, 0x54(r28)
    cmpw r29, r0
    bne lbl_fn_80425498_000001D8
    lwz r3, 0xf4(r28)
    bl fn_804A0EFC
    lbz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80425498_000003B8
    lwz r4, 0x8(r30)
    li r7, 0x0
    li r5, 0x0
    b lbl_fn_80425498_0000010C
lbl_fn_80425498_00000074:
    lwz r3, 0x58(r4)
    li r9, 0x0
    li r6, 0x0
    lwzx r8, r3, r5
    b lbl_fn_80425498_000000F8
lbl_fn_80425498_00000088:
    lwz r0, 0x28(r8)
    addi r9, r9, 0x1
    lfs f0, lbl_807C88F8@l(r23)
    lfsx f1, r6, r0
    add r3, r0, r6
    fsubs f0, f1, f0
    stfsx f0, r6, r0
    addi r6, r6, 0x18
    lfs f1, 0x4(r3)
    lfs f0, 0x4(r24)
    fsubs f0, f1, f0
    stfs f0, 0x4(r3)
    lfs f1, 0x8(r3)
    lfs f0, 0x8(r24)
    fsubs f0, f1, f0
    stfs f0, 0x8(r3)
    lfs f1, 0xc(r3)
    lfs f0, lbl_807C88F8@l(r23)
    fsubs f0, f1, f0
    stfs f0, 0xc(r3)
    lfs f1, 0x10(r3)
    lfs f0, 0x4(r24)
    fsubs f0, f1, f0
    stfs f0, 0x10(r3)
    lfs f1, 0x14(r3)
    lfs f0, 0x8(r24)
    fsubs f0, f1, f0
    stfs f0, 0x14(r3)
lbl_fn_80425498_000000F8:
    lwz r0, 0x2c(r8)
    cmplw r9, r0
    blt lbl_fn_80425498_00000088
    addi r5, r5, 0x4
    addi r7, r7, 0x1
lbl_fn_80425498_0000010C:
    lwz r0, 0x5c(r4)
    cmplw r7, r0
    blt lbl_fn_80425498_00000074
    mr r4, r28
    stb r31, 0xc(r30)
    li r5, 0x0
    mtctr r26
lbl_fn_80425498_00000128:
    lwz r3, 0x128(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_00000148
    lbz r0, 0x12c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80425498_00000148
    stb r31, 0x12c(r4)
lbl_fn_80425498_00000148:
    lwz r3, 0x138(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_00000168
    lbz r0, 0x13c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80425498_00000168
    stb r31, 0x13c(r4)
lbl_fn_80425498_00000168:
    lwz r3, 0x148(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_00000188
    lbz r0, 0x14c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80425498_00000188
    stb r31, 0x14c(r4)
lbl_fn_80425498_00000188:
    lwz r3, 0x158(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_000001A8
    lbz r0, 0x15c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80425498_000001A8
    stb r31, 0x15c(r4)
lbl_fn_80425498_000001A8:
    lwz r3, 0x168(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_000001C8
    lbz r0, 0x16c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80425498_000001C8
    stb r31, 0x16c(r4)
lbl_fn_80425498_000001C8:
    addi r4, r4, 0x50
    addi r5, r5, 0x4
    bdnz lbl_fn_80425498_00000128
    b lbl_fn_80425498_000003B8
lbl_fn_80425498_000001D8:
    lwz r5, 0xf4(r28)
    lwz r6, 0xc4(r5)
    cmpwi r6, 0x0
    beq lbl_fn_80425498_000001FC
    lwz r3, 0x108(r5)
    lwz r0, 0x10c(r5)
    cmpw r3, r0
    beq lbl_fn_80425498_000001FC
    b lbl_fn_80425498_00000238
lbl_fn_80425498_000001FC:
    lwz r6, 0x108(r5)
    li r3, 0x0
    cmpwi r6, 0x0
    blt lbl_fn_80425498_0000021C
    lwz r0, 0xa0(r5)
    cmpw r6, r0
    bge lbl_fn_80425498_0000021C
    li r3, 0x1
lbl_fn_80425498_0000021C:
    cmpwi r3, 0x0
    beq lbl_fn_80425498_00000234
    slwi r0, r6, 2
    add r3, r5, r0
    lwz r6, 0xa4(r3)
    b lbl_fn_80425498_00000238
lbl_fn_80425498_00000234:
    li r6, 0x0
lbl_fn_80425498_00000238:
    cmplw r6, r4
    beq lbl_fn_80425498_000003B8
    lbz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80425498_000003B8
    li r7, 0x0
    li r5, 0x0
    b lbl_fn_80425498_000002F0
lbl_fn_80425498_00000258:
    lwz r3, 0x58(r4)
    li r9, 0x0
    li r6, 0x0
    lwzx r8, r3, r5
    b lbl_fn_80425498_000002DC
lbl_fn_80425498_0000026C:
    lwz r0, 0x28(r8)
    addi r9, r9, 0x1
    lfs f0, lbl_807C88F8@l(r23)
    lfsx f1, r6, r0
    add r3, r0, r6
    fadds f0, f1, f0
    stfsx f0, r6, r0
    addi r6, r6, 0x18
    lfs f1, 0x4(r3)
    lfs f0, 0x4(r24)
    fadds f0, f1, f0
    stfs f0, 0x4(r3)
    lfs f1, 0x8(r3)
    lfs f0, 0x8(r24)
    fadds f0, f1, f0
    stfs f0, 0x8(r3)
    lfs f1, 0xc(r3)
    lfs f0, lbl_807C88F8@l(r23)
    fadds f0, f1, f0
    stfs f0, 0xc(r3)
    lfs f1, 0x10(r3)
    lfs f0, 0x4(r24)
    fadds f0, f1, f0
    stfs f0, 0x10(r3)
    lfs f1, 0x14(r3)
    lfs f0, 0x8(r24)
    fadds f0, f1, f0
    stfs f0, 0x14(r3)
lbl_fn_80425498_000002DC:
    lwz r0, 0x2c(r8)
    cmplw r9, r0
    blt lbl_fn_80425498_0000026C
    addi r5, r5, 0x4
    addi r7, r7, 0x1
lbl_fn_80425498_000002F0:
    lwz r0, 0x5c(r4)
    cmplw r7, r0
    blt lbl_fn_80425498_00000258
    mr r4, r28
    stb r25, 0xc(r30)
    li r5, 0x0
    mtctr r27
lbl_fn_80425498_0000030C:
    lwz r3, 0x128(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_0000032C
    lbz r0, 0x12c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80425498_0000032C
    stb r25, 0x12c(r4)
lbl_fn_80425498_0000032C:
    lwz r3, 0x138(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_0000034C
    lbz r0, 0x13c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80425498_0000034C
    stb r25, 0x13c(r4)
lbl_fn_80425498_0000034C:
    lwz r3, 0x148(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_0000036C
    lbz r0, 0x14c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80425498_0000036C
    stb r25, 0x14c(r4)
lbl_fn_80425498_0000036C:
    lwz r3, 0x158(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_0000038C
    lbz r0, 0x15c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80425498_0000038C
    stb r25, 0x15c(r4)
lbl_fn_80425498_0000038C:
    lwz r3, 0x168(r4)
    lwz r0, 0x8(r30)
    cmplw r3, r0
    bne lbl_fn_80425498_000003AC
    lbz r0, 0x16c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80425498_000003AC
    stb r25, 0x16c(r4)
lbl_fn_80425498_000003AC:
    addi r4, r4, 0x50
    addi r5, r5, 0x4
    bdnz lbl_fn_80425498_0000030C
lbl_fn_80425498_000003B8:
    addi r29, r29, 0x1
    addi r30, r30, 0x10
    cmpwi r29, 0x19
    blt lbl_fn_80425498_00000038
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80425878(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80425878_00000448
    lwz r3, 0xf4(r3)
    lis r31, lbl_807C7030@ha
    lwz r30, 0x70(r3)
    b lbl_fn_80425878_0000043C
lbl_fn_80425878_00000414:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x5
    bne lbl_fn_80425878_00000438
    mr r3, r30
    addi r4, r31, lbl_807C7030@l
    addi r5, r29, 0x104
    bl fn_8049994C
    mr r3, r30
    bl fn_80499B9C
lbl_fn_80425878_00000438:
    lwz r30, 0x4c(r30)
lbl_fn_80425878_0000043C:
    cmpwi r30, 0x0
    bne lbl_fn_80425878_00000414
    b lbl_fn_80425878_00000474
lbl_fn_80425878_00000448:
    lwz r3, 0xf4(r3)
    lwz r30, 0x70(r3)
    b lbl_fn_80425878_0000046C
lbl_fn_80425878_00000454:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x5
    bne lbl_fn_80425878_00000468
    mr r3, r30
    bl fn_80499C48
lbl_fn_80425878_00000468:
    lwz r30, 0x4c(r30)
lbl_fn_80425878_0000046C:
    cmpwi r30, 0x0
    bne lbl_fn_80425878_00000454
lbl_fn_80425878_00000474:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80425928(void)
{
    nofralloc
    blr
}

asm void fn_8042592C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r4, 0xf4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8042592C_000004CC
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8042592C_000004CC
    li r3, 0x1
    b lbl_fn_8042592C_00000508
lbl_fn_8042592C_000004CC:
    addi r31, r3, 0x120
    li r30, 0x0
lbl_fn_8042592C_000004D4:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8042592C_000004F4
    bl fn_80058BBC
    cmpwi r3, 0x0
    beq lbl_fn_8042592C_000004F4
    li r3, 0x1
    b lbl_fn_8042592C_00000508
lbl_fn_8042592C_000004F4:
    addi r30, r30, 0x1
    addi r31, r31, 0x10
    cmplwi r30, 0x19
    blt lbl_fn_8042592C_000004D4
    li r3, 0x0
lbl_fn_8042592C_00000508:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804259B8(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r27, 0x64c(r1)
    mr r27, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r27, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r29, r3
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
    mr r4, r29
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
    lis r29, lbl_80753630@ha
    li r30, 0x1
    addi r29, r29, lbl_80753630@l
lbl_fn_804259B8_000005CC:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804259B8_000006A8
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804259B8_00000628
    lwz r31, 0x20(r27)
    cmpwi r31, 0x0
    beq lbl_fn_804259B8_00000628
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r31
    bl fn_8049D68C
    cmpwi r3, 0x0
    stw r3, 0xf4(r27)
    beq lbl_fn_804259B8_000006A8
    stw r30, 0xf4(r3)
    b lbl_fn_804259B8_000006A8
lbl_fn_804259B8_00000628:
    mr r3, r28
    addi r4, r29, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804259B8_000006A8
    lwz r0, 0x20(r27)
    cmpwi r0, 0x0
    beq lbl_fn_804259B8_000006A8
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_80684600
    slwi r0, r3, 4
    mr r5, r29
    mr r6, r29
    li r3, 0x78
    add r31, r27, r0
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804259B8_00000680
    bl fn_80058A1C
lbl_fn_804259B8_00000680:
    stw r3, 0x120(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    lwz r3, 0x120(r31)
    bl fn_80058B78
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC6B4
    stw r3, 0x124(r31)
lbl_fn_804259B8_000006A8:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804259B8_000005CC
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_80425B64(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    mr r30, r4
    bne lbl_fn_80425B64_000006F8
    li r3, 0x0
    b lbl_fn_80425B64_00000904
lbl_fn_80425B64_000006F8:
    lwz r4, 0x114(r3)
    lwz r0, 0x110(r3)
    cmpw r4, r0
    bge lbl_fn_80425B64_00000710
    lfs f1, lbl_80886674
    bl fn_80424FB4
lbl_fn_80425B64_00000710:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x1
    blt lbl_fn_80425B64_000007BC
    cmpwi r0, 0x18
    bgt lbl_fn_80425B64_000007BC
    mr r3, r31
    bl fn_80424AD4
    mr r3, r31
    li r4, 0x0
    bl fn_80425878
    lwz r3, 0x0(r30)
    lis r4, lbl_807C8908@ha
    stw r3, 0x54(r31)
    addi r4, r4, lbl_807C8908@l
    subi r0, r3, 0x1
    lfs f3, 0x100(r31)
    mulli r5, r0, 0xc
    lfs f4, 0xfc(r31)
    lfs f0, 0xf8(r31)
    addi r6, r1, 0x38
    lwz r0, 0x110(r31)
    mr r3, r31
    add r5, r4, r5
    li r4, 0x1
    lfs f6, 0x8(r5)
    lfs f5, 0x4(r5)
    fsubs f2, f6, f3
    lfs f3, 0x0(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0x10c(r31)
    stfs f0, 0x38(r1)
    stfs f4, 0x3c(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x104(r31), 0, 0
    stfs f2, 0x40(r1)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x100(r31)
    psq_st f1, 0xf8(r31), 0, 0
    stw r0, 0x114(r31)
    bl fn_80425878
    b lbl_fn_80425B64_00000900
lbl_fn_80425B64_000007BC:
    cmpwi r0, 0x3e8
    blt lbl_fn_80425B64_00000900
    cmpwi r0, 0x3eb
    bgt lbl_fn_80425B64_00000900
    mr r3, r31
    bl fn_80424AD4
    lwz r5, 0x54(r31)
    lis r4, lbl_80753498@ha
    lwz r3, 0x0(r30)
    addi r4, r4, lbl_80753498@l
    subi r0, r5, 0x1
    slwi r5, r0, 4
    subi r0, r3, 0x3e8
    slwi r3, r0, 2
    add r0, r4, r5
    lwzx r0, r3, r0
    stw r0, 0x54(r31)
    lwz r0, 0x0(r30)
    cmpwi r0, 0x3e8
    beq lbl_fn_80425B64_00000828
    cmpwi r0, 0x3e9
    beq lbl_fn_80425B64_00000850
    cmpwi r0, 0x3ea
    beq lbl_fn_80425B64_00000878
    cmpwi r0, 0x3eb
    beq lbl_fn_80425B64_000008A0
    b lbl_fn_80425B64_000008C4
lbl_fn_80425B64_00000828:
    lfs f2, lbl_80886668
    addi r3, r1, 0x2c
    lfs f0, lbl_80886680
    stfs f0, 0x2c(r1)
    stfs f2, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x104(r31), 0, 0
    stfs f2, 0x10c(r31)
    b lbl_fn_80425B64_000008C4
lbl_fn_80425B64_00000850:
    lfs f0, lbl_80886668
    addi r3, r1, 0x20
    stfs f0, 0x20(r1)
    lfs f2, lbl_80886680
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x104(r31), 0, 0
    stfs f2, 0x10c(r31)
    b lbl_fn_80425B64_000008C4
lbl_fn_80425B64_00000878:
    lfs f2, lbl_80886668
    addi r3, r1, 0x14
    lfs f0, lbl_80886678
    stfs f0, 0x14(r1)
    stfs f2, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x104(r31), 0, 0
    stfs f2, 0x10c(r31)
    b lbl_fn_80425B64_000008C4
lbl_fn_80425B64_000008A0:
    lfs f0, lbl_80886668
    addi r3, r1, 0x8
    stfs f0, 0x8(r1)
    lfs f2, lbl_80886678
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x104(r31), 0, 0
    stfs f2, 0x10c(r31)
lbl_fn_80425B64_000008C4:
    lwz r3, 0x54(r31)
    lis r5, lbl_807C8908@ha
    addi r5, r5, lbl_807C8908@l
    li r0, 0x0
    subi r4, r3, 0x1
    mr r3, r31
    mulli r6, r4, 0xc
    li r4, 0x0
    add r5, r5, r6
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x100(r31)
    psq_st f1, 0xf8(r31), 0, 0
    stw r0, 0x114(r31)
    bl fn_80425878
lbl_fn_80425B64_00000900:
    lwz r3, 0x54(r31)
lbl_fn_80425B64_00000904:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80425DB4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886668
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
    beq lbl_fn_80425DB4_00000980
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_80425DB4_00000980:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80425E2C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    addi r4, r1, 0x8
    stw r29, 0x34(r1)
    mr r29, r3
    bl fn_803EC758
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80425E2C_000009F4
    cmpwi r30, 0x0
    beq lbl_fn_80425E2C_000009F4
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80425E2C_000009F4
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_80425E2C_000009F8
lbl_fn_80425E2C_000009F4:
    li r30, 0x0
lbl_fn_80425E2C_000009F8:
    lis r31, lbl_80753630@ha
    mr r3, r30
    addi r31, r31, lbl_80753630@l
    addi r5, r29, 0x54
    addi r4, r31, 0xb
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80886684
    mr r3, r30
    lfs f2, lbl_80886688
    addi r4, r31, 0x11
    lfs f3, lbl_8088668C
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80886690
    mr r3, r30
    lfs f2, lbl_80886678
    addi r4, r31, 0x15
    lfs f3, lbl_80886694
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80886684
    mr r3, r30
    lfs f2, lbl_80886688
    addi r4, r31, 0x19
    lfs f3, lbl_8088668C
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x1d
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x24
    addi r5, r29, 0x58
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x2c
    addi r5, r29, 0x110
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r4, r30
    addi r3, r29, 0xb0
    bl fn_803F11F8
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80425FB0(void)
{
    nofralloc
    lis r6, lbl_807C88F8@ha
    lis r4, lbl_807C8908@ha
    lfs f5, lbl_80886698
    addi r5, r6, lbl_807C88F8@l
    lfs f4, lbl_80886668
    addi r3, r4, lbl_807C8908@l
    lfs f3, lbl_80886680
    lfs f1, lbl_8088669C
    lfs f2, lbl_80886678
    lfs f0, lbl_80886690
    stfs f5, lbl_807C88F8@l(r6)
    stfs f5, 0x4(r5)
    stfs f5, 0x8(r5)
    stfs f4, lbl_807C8908@l(r4)
    stfs f4, 0x4(r3)
    stfs f4, 0x8(r3)
    stfs f4, 0xc(r3)
    stfs f3, 0x10(r3)
    stfs f4, 0x14(r3)
    stfs f4, 0x18(r3)
    stfs f2, 0x1c(r3)
    stfs f4, 0x20(r3)
    stfs f4, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f4, 0x2c(r3)
    stfs f4, 0x30(r3)
    stfs f4, 0x34(r3)
    stfs f3, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f3, 0x40(r3)
    stfs f4, 0x44(r3)
    stfs f4, 0x48(r3)
    stfs f2, 0x4c(r3)
    stfs f1, 0x50(r3)
    stfs f3, 0x54(r3)
    stfs f1, 0x58(r3)
    stfs f4, 0x5c(r3)
    stfs f4, 0x60(r3)
    stfs f4, 0x64(r3)
    stfs f2, 0x68(r3)
    stfs f0, 0x6c(r3)
    stfs f3, 0x70(r3)
    stfs f4, 0x74(r3)
    stfs f0, 0x78(r3)
    stfs f4, 0x7c(r3)
    stfs f4, 0x80(r3)
    stfs f0, 0x84(r3)
    stfs f1, 0x88(r3)
    stfs f4, 0x8c(r3)
    stfs f4, 0x90(r3)
    stfs f4, 0x94(r3)
    stfs f1, 0x98(r3)
    stfs f1, 0x9c(r3)
    stfs f3, 0xa0(r3)
    stfs f4, 0xa4(r3)
    stfs f4, 0xa8(r3)
    stfs f2, 0xac(r3)
    stfs f3, 0xb0(r3)
    stfs f3, 0xb4(r3)
    stfs f1, 0xb8(r3)
    stfs f4, 0xbc(r3)
    stfs f1, 0xc0(r3)
    stfs f4, 0xc4(r3)
    stfs f4, 0xc8(r3)
    stfs f4, 0xcc(r3)
    stfs f3, 0xd0(r3)
    stfs f3, 0xd4(r3)
    stfs f3, 0xd8(r3)
    stfs f2, 0xdc(r3)
    stfs f4, 0xe0(r3)
    stfs f4, 0xe4(r3)
    stfs f1, 0xe8(r3)
    stfs f1, 0xec(r3)
    stfs f3, 0xf0(r3)
    stfs f4, 0xf4(r3)
    stfs f4, 0xf8(r3)
    stfs f4, 0xfc(r3)
    stfs f3, 0x100(r3)
    stfs f1, 0x104(r3)
    stfs f1, 0x108(r3)
    stfs f2, 0x10c(r3)
    stfs f4, 0x110(r3)
    stfs f4, 0x114(r3)
    stfs f1, 0x118(r3)
    stfs f3, 0x11c(r3)
    blr
}

asm void fn_80426108(void)
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
    beq lbl_fn_80426108_00000CD4
    lis r5, lbl_80753688@ha
    li r3, 0x9a0
    addi r5, r5, lbl_80753688@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80426108_00000CD8
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8042618C
    b lbl_fn_80426108_00000CD8
lbl_fn_80426108_00000CD4:
    li r3, 0x0
lbl_fn_80426108_00000CD8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042618C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_803EC568
    lis r4, lbl_8078E470@ha
    addi r3, r30, 0xf4
    addi r4, r4, lbl_8078E470@l
    stw r4, 0x0(r30)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r30, 0x4c4
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    li r31, 0x0
    stw r31, 0x894(r30)
    addi r3, r30, 0x898
    bl fn_80057F28
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    addi r3, r30, 0x928
    li r6, 0xc
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r7, 0x5
    bl fn_806958E0
    lfs f0, lbl_808866A0
    mr r3, r30
    stw r31, 0x98c(r30)
    stw r31, 0x990(r30)
    stw r31, 0x994(r30)
    stw r31, 0x998(r30)
    stw r31, 0x54(r30)
    stfs f0, 0x964(r30)
    stfs f0, 0x978(r30)
    stfs f0, 0x968(r30)
    stfs f0, 0x97c(r30)
    stfs f0, 0x96c(r30)
    stfs f0, 0x980(r30)
    stfs f0, 0x970(r30)
    stfs f0, 0x984(r30)
    stfs f0, 0x974(r30)
    stfs f0, 0x988(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80426260(void)
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
    beq lbl_fn_80426260_00000E8C
    addic. r0, r3, 0x990
    beq lbl_fn_80426260_00000E1C
    lwz r3, 0x994(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80426260_00000E10
    beq lbl_fn_80426260_00000E10
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80426260_00000E10:
    li r0, 0x0
    stw r0, 0x994(r29)
    stw r0, 0x990(r29)
lbl_fn_80426260_00000E1C:
    lis r4, fn_800EF73C@ha
    addi r3, r29, 0x928
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x5
    bl fn_806959D8
    addic. r31, r29, 0x898
    beq lbl_fn_80426260_00000E58
    addic. r3, r31, 0x3c
    beq lbl_fn_80426260_00000E4C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80426260_00000E4C:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_80426260_00000E58:
    addi r3, r29, 0x4c4
    li r4, -0x1
    bl fn_800971D4
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_80426260_00000E8C
    mr r3, r29
    bl dtor_80084684
lbl_fn_80426260_00000E8C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80426344(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80426344_00000FE4
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    mr r3, r31
    addi r4, r31, 0x4c4
    bl fn_803EDB18
    lwz r3, 0x48(r31)
    lwz r4, 0x8a0(r31)
    addis r0, r3, 0x0
    stw r31, 0x8a4(r31)
    cmplwi r0, 0xbb80
    ori r0, r4, 0x8
    stw r0, 0x8a0(r31)
    bne lbl_fn_80426344_00000F1C
    li r0, 0xf8
    stw r0, 0x8b8(r31)
    b lbl_fn_80426344_00000FDC
lbl_fn_80426344_00000F1C:
    lwz r4, 0x994(r31)
    lwz r3, 0x630(r31)
    cmpwi r4, 0x0
    lwz r30, 0x30(r3)
    beq lbl_fn_80426344_00000F3C
    beq lbl_fn_80426344_00000F3C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80426344_00000F3C:
    cmpwi r30, 0x0
    stw r30, 0x990(r31)
    beq lbl_fn_80426344_00000F84
    mulli r3, r30, 0x1c
    li r4, 0x0
    la r5, lbl_8087DF4C
    la r6, lbl_8087DF48
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803F3334@ha
    mr r7, r30
    addi r4, r4, fn_803F3334@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    stw r3, 0x994(r31)
    b lbl_fn_80426344_00000F8C
lbl_fn_80426344_00000F84:
    li r0, 0x0
    stw r0, 0x994(r31)
lbl_fn_80426344_00000F8C:
    li r28, 0x0
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_80426344_00000FCC
lbl_fn_80426344_00000F9C:
    add r3, r3, r29
    lwz r0, 0x994(r31)
    lwz r5, 0x50(r3)
    addi r4, r31, 0x4c4
    lfs f1, lbl_808866A0
    add r3, r0, r30
    li r6, 0x1e
    li r7, 0x1e
    bl fn_803EBD6C
    addi r29, r29, 0x4
    addi r28, r28, 0x1
    addi r30, r30, 0x1c
lbl_fn_80426344_00000FCC:
    lwz r3, 0x630(r31)
    lwz r0, 0x30(r3)
    cmpw r28, r0
    blt lbl_fn_80426344_00000F9C
lbl_fn_80426344_00000FDC:
    li r3, 0x1
    b lbl_fn_80426344_00000FE8
lbl_fn_80426344_00000FE4:
    li r3, 0x0
lbl_fn_80426344_00000FE8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804264A0(void)
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
    beq lbl_fn_804264A0_0000106C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_804264A0_0000106C:
    lis r4, lbl_80753688@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_80753688@l
    li r5, 0x0
    addi r4, r4, 0x1
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_804264A0_00001094
    li r4, 0x0
    b lbl_fn_804264A0_000010A0
lbl_fn_804264A0_00001094:
    mulli r0, r3, 0x30
    lwz r3, 0x130(r31)
    add r4, r3, r0
lbl_fn_804264A0_000010A0:
    cmpwi r4, 0x0
    beq lbl_fn_804264A0_000010AC
    b lbl_fn_804264A0_000010B0
lbl_fn_804264A0_000010AC:
    addi r4, r31, 0xfc
lbl_fn_804264A0_000010B0:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r31, 0x898
    psq_l f2, 0x8(r4), 0, 0
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
    lwz r5, 0x8a0(r31)
    li r0, 0x0
    lwz r4, 0x58(r31)
    mr r3, r31
    ori r5, r5, 0x1
    stw r5, 0x8a0(r31)
    lfs f0, lbl_808866A0
    addi r4, r4, 0x1
    stw r4, 0x8(r1)
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
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804265E8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804265E8_00001190
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_804265E8_00001190:
    lwz r3, lbl_8087EFA8
    li r30, -0x1
    lwz r4, 0x54(r31)
    lfs f7, 0x3a4(r3)
    lfs f0, 0x920(r31)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    fadds f7, f0, f7
    stfs f7, 0x920(r31)
    ble lbl_fn_804265E8_000011C4
    cmpwi r4, 0x4
    beq lbl_fn_804265E8_000011D8
    b lbl_fn_804265E8_0000121C
lbl_fn_804265E8_000011C4:
    lfs f0, 0x924(r31)
    fcmpo cr0, f7, f0
    ble lbl_fn_804265E8_0000121C
    addi r30, r4, 0x1
    b lbl_fn_804265E8_0000121C
lbl_fn_804265E8_000011D8:
    lwz r0, 0x894(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804265E8_000011FC
    cmpwi r4, 0x3
    bge lbl_fn_804265E8_000011F4
    addi r3, r31, 0xf4
    b lbl_fn_804265E8_00001200
lbl_fn_804265E8_000011F4:
    addi r3, r31, 0x4c4
    b lbl_fn_804265E8_00001200
lbl_fn_804265E8_000011FC:
    addi r3, r31, 0xf4
lbl_fn_804265E8_00001200:
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_804265E8_0000121C
    li r30, 0x1
lbl_fn_804265E8_0000121C:
    cmpwi r30, 0x0
    blt lbl_fn_804265E8_0000123C
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r30
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
lbl_fn_804265E8_0000123C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804265E8_00001278
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_804265E8_00001278:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804265E8_000012B8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_804265E8_000012B8:
    lis r4, lbl_80753688@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_80753688@l
    li r5, 0x0
    addi r4, r4, 0x1
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_804265E8_000012E0
    li r4, 0x0
    b lbl_fn_804265E8_000012EC
lbl_fn_804265E8_000012E0:
    mulli r0, r3, 0x30
    lwz r3, 0x130(r31)
    add r4, r3, r0
lbl_fn_804265E8_000012EC:
    cmpwi r4, 0x0
    beq lbl_fn_804265E8_000012F8
    b lbl_fn_804265E8_000012FC
lbl_fn_804265E8_000012F8:
    addi r4, r31, 0xfc
lbl_fn_804265E8_000012FC:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r31, 0x898
    psq_l f2, 0x8(r4), 0, 0
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
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    blt lbl_fn_804265E8_000013B4
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_804265E8_00001364
lbl_fn_804265E8_0000134C:
    lwz r0, 0x994(r31)
    addi r4, r31, 0x4c4
    add r3, r0, r30
    bl fn_803EBE74
    addi r30, r30, 0x1c
    addi r29, r29, 0x1
lbl_fn_804265E8_00001364:
    lwz r0, 0x990(r31)
    cmplw r29, r0
    blt lbl_fn_804265E8_0000134C
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    bne lbl_fn_804265E8_00001398
    lfs f7, 0x6f8(r31)
    lfs f0, lbl_808866A8
    fcmpo cr0, f7, f0
    mfcr r0
    extrwi r0, r0, 1, 1
    stw r0, 0x998(r31)
    b lbl_fn_804265E8_000013BC
lbl_fn_804265E8_00001398:
    lfs f7, 0x6f8(r31)
    lfs f0, lbl_808866AC
    fcmpo cr0, f7, f0
    mfcr r0
    srwi r0, r0, 31
    stw r0, 0x998(r31)
    b lbl_fn_804265E8_000013BC
lbl_fn_804265E8_000013B4:
    li r0, 0x0
    stw r0, 0x998(r31)
lbl_fn_804265E8_000013BC:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80426878(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80426878_00001488
    lwz r0, 0x894(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80426878_00001440
    lwz r0, 0x54(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80426878_00001440
    lfs f31, 0x6f8(r3)
    li r4, 0x0
    addi r3, r3, 0x4c4
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    beq lbl_fn_80426878_00001488
lbl_fn_80426878_00001440:
    lwz r0, 0x998(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80426878_00001488
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80426878_00001488
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_80426878_00001488:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042693C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8042693C_000014DC
    addi r3, r30, 0x4c4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8042693C_000014E4
lbl_fn_8042693C_000014DC:
    li r3, 0x1
    b lbl_fn_8042693C_00001530
lbl_fn_8042693C_000014E4:
    addi r3, r30, 0x898
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_8042693C_000014FC
    li r3, 0x1
    b lbl_fn_8042693C_00001530
lbl_fn_8042693C_000014FC:
    addi r31, r30, 0x928
    li r30, 0x0
lbl_fn_8042693C_00001504:
    mr r3, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8042693C_0000151C
    li r3, 0x1
    b lbl_fn_8042693C_00001530
lbl_fn_8042693C_0000151C:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x5
    blt lbl_fn_8042693C_00001504
    li r3, 0x0
lbl_fn_8042693C_00001530:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804269E0(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    stw r28, 0x740(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r30, r3
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
    mr r4, r30
    mr r5, r31
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
    lis r30, lbl_80753688@ha
    li r31, 0x1
    addi r30, r30, lbl_80753688@l
lbl_fn_804269E0_00001600:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804269E0_00001830
    addi r4, r30, 0x9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804269E0_00001654
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r28
    addi r4, r28, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_804269E0_00001830
lbl_fn_804269E0_00001654:
    mr r3, r29
    addi r4, r30, 0xf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804269E0_00001698
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0x4c4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r28
    addi r4, r28, 0x4c4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    stw r31, 0x894(r28)
    b lbl_fn_804269E0_00001830
lbl_fn_804269E0_00001698:
    mr r3, r29
    addi r4, r30, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804269E0_000016E0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r28, 0xf4
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_804269E0_00001830
lbl_fn_804269E0_000016E0:
    mr r3, r29
    addi r4, r30, 0x25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804269E0_00001748
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    lwz r0, 0x894(r28)
    cmpwi r0, 0x0
    beq lbl_fn_804269E0_00001734
    mr r4, r3
    addi r3, r28, 0x4c4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_804269E0_00001830
lbl_fn_804269E0_00001734:
    mr r4, r3
    addi r3, r28, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_804269E0_00001830
lbl_fn_804269E0_00001748:
    mr r3, r29
    addi r4, r30, 0x2c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804269E0_00001774
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0x898
    bl fn_80058078
    b lbl_fn_804269E0_00001830
lbl_fn_804269E0_00001774:
    mr r3, r29
    addi r4, r30, 0x39
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804269E0_000017C0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    mulli r0, r3, 0xc
    addi r4, r1, 0x8
    add r3, r28, r0
    addi r3, r3, 0x928
    bl fn_8023780C
    b lbl_fn_804269E0_00001830
lbl_fn_804269E0_000017C0:
    mr r3, r29
    addi r4, r30, 0x3d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804269E0_0000180C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    slwi r0, r3, 2
    addi r3, r1, 0x108
    add r29, r28, r0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x964(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x978(r29)
    b lbl_fn_804269E0_00001830
lbl_fn_804269E0_0000180C:
    mr r3, r29
    addi r4, r30, 0x50
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804269E0_00001830
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x98c(r28)
lbl_fn_804269E0_00001830:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804269E0_00001600
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    lwz r28, 0x740(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_80426CF8(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r4
    bne lbl_fn_80426CF8_0000188C
    li r3, 0x0
    b lbl_fn_80426CF8_00001EF4
lbl_fn_80426CF8_0000188C:
    lfs f0, lbl_808866A0
    stfs f0, 0x920(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmplwi r0, 0x4
    ble lbl_fn_80426CF8_000018AC
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_80426CF8_000018AC:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    li r29, 0x0
    stw r29, 0x9c(r30)
    lfs f1, lbl_808866A0
    addi r3, r30, 0xf4
    lfs f2, lbl_808866B0
    li r4, 0x0
    li r5, -0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_808866A0
    addi r3, r30, 0x4c4
    lfs f2, lbl_808866B0
    li r4, 0x0
    li r5, -0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x54(r30)
    cmpwi r0, 0x1
    beq lbl_fn_80426CF8_00001938
    cmpwi r0, 0x2
    beq lbl_fn_80426CF8_000019F4
    cmpwi r0, 0x3
    beq lbl_fn_80426CF8_00001B04
    cmpwi r0, 0x4
    beq lbl_fn_80426CF8_00001D18
    b lbl_fn_80426CF8_00001E48
lbl_fn_80426CF8_00001938:
    mulli r0, r0, 0xc
    add r3, r30, r0
    lwz r0, 0x928(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80426CF8_000019DC
    lwz r5, lbl_8087F3C0
    li r0, 0x2
    mr r3, r30
    li r4, 0x0
    stw r0, 0xb8(r5)
    bl fn_80232B7C
    lwz r4, 0x54(r30)
    li r3, -0x1
    lfs f0, lbl_808866A0
    li r0, 0x1
    lfs f1, lbl_808866A4
    mulli r4, r4, 0xc
    stfs f0, 0x94(r1)
    addi r5, r30, 0xf4
    addi r7, r1, 0x88
    stfs f0, 0x98(r1)
    add r4, r30, r4
    addi r8, r1, 0x94
    addi r9, r1, 0xa0
    stfs f0, 0x9c(r1)
    addi r4, r4, 0x928
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f1, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stfs f1, 0xa8(r1)
    stfs f1, 0xac(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    stw r29, 0xb8(r3)
lbl_fn_80426CF8_000019DC:
    lwz r0, 0x8a0(r30)
    li r3, 0x1
    stw r3, 0x9c(r30)
    ori r0, r0, 0x1
    stw r0, 0x8a0(r30)
    b lbl_fn_80426CF8_00001E48
lbl_fn_80426CF8_000019F4:
    mulli r0, r0, 0xc
    add r3, r30, r0
    lwz r0, 0x928(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80426CF8_00001A84
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, 0x54(r30)
    li r3, -0x1
    lfs f0, lbl_808866A0
    li r0, 0x1
    lfs f1, lbl_808866A4
    mulli r4, r4, 0xc
    stfs f0, 0x6c(r1)
    addi r5, r30, 0xf4
    addi r7, r1, 0x60
    stfs f0, 0x70(r1)
    add r4, r30, r4
    addi r8, r1, 0x6c
    addi r9, r1, 0x78
    stfs f0, 0x74(r1)
    addi r4, r4, 0x928
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80426CF8_00001A84:
    lwz r0, 0x54(r30)
    slwi r27, r0, 2
    bl fn_80680CF8
    lis r4, 0x4178
    add r5, r30, r27
    addi r0, r4, 0x749f
    lis r6, 0x4330
    mulhw r8, r0, r3
    lis r7, lbl_80753670@ha
    stw r6, 0xc8(r1)
    li r4, 0x1
    lwz r0, 0x8a0(r30)
    lfd f4, lbl_80753670@l(r7)
    srawi r6, r8, 8
    lfs f1, 0x978(r5)
    srwi r7, r6, 31
    lfs f0, 0x964(r5)
    add r6, r6, r7
    ori r0, r0, 0x1
    mulli r5, r6, 0x3e9
    stw r0, 0x8a0(r30)
    lfs f2, lbl_808866B4
    stw r4, 0x9c(r30)
    subf r3, r5, r3
    xoris r0, r3, 0x8000
    stw r0, 0xcc(r1)
    lfd f3, 0xc8(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmadds f0, f1, f2, f0
    stfs f0, 0x924(r30)
    b lbl_fn_80426CF8_00001E48
lbl_fn_80426CF8_00001B04:
    mulli r0, r0, 0xc
    add r3, r30, r0
    lwz r0, 0x928(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80426CF8_00001B94
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, 0x54(r30)
    li r3, -0x1
    lfs f0, lbl_808866A0
    li r0, 0x1
    lfs f1, lbl_808866A4
    mulli r4, r4, 0xc
    stfs f0, 0x44(r1)
    addi r5, r30, 0xf4
    addi r7, r1, 0x38
    stfs f0, 0x48(r1)
    add r4, r30, r4
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    stfs f0, 0x4c(r1)
    addi r4, r4, 0x928
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80426CF8_00001B94:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80426CF8_00001C20
    li r4, 0x1
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_80426CF8_00001C20
    lfs f1, lbl_808866A4
    mr r3, r27
    lfs f2, lbl_808866B0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x1
    stw r0, 0x9c(r30)
    li r6, 0x0
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_80426CF8_00001C14
lbl_fn_80426CF8_00001C00:
    lwz r0, 0x994(r30)
    addi r6, r6, 0x1
    add r3, r0, r5
    addi r5, r5, 0x1c
    stw r4, 0x18(r3)
lbl_fn_80426CF8_00001C14:
    lwz r0, 0x990(r30)
    cmplw r6, r0
    blt lbl_fn_80426CF8_00001C00
lbl_fn_80426CF8_00001C20:
    lwz r27, lbl_8087F048
    cmpwi r27, 0x0
    beq lbl_fn_80426CF8_00001CA0
    lfs f0, lbl_808866A0
    mr r3, r27
    stfs f0, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f0, 0x128(r30)
    lfs f1, 0x118(r30)
    lfs f2, 0x108(r30)
    stfs f2, 0xbc(r1)
    stfs f1, 0xc0(r1)
    stfs f0, 0xc4(r1)
    bl fn_800F8548
    mr r29, r3
    lwz r3, 0x98c(r30)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_808866A0
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r27
    lfs f2, lbl_808866A4
    mr r6, r29
    addi r7, r1, 0xbc
    addi r8, r1, 0xb0
    li r4, 0x0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_80426CF8_00001CA0:
    lwz r0, 0x54(r30)
    slwi r27, r0, 2
    bl fn_80680CF8
    lis r5, 0x4178
    add r4, r30, r27
    addi r0, r5, 0x749f
    lis r6, lbl_80753670@ha
    mulhw r7, r0, r3
    lis r5, 0x4330
    stw r5, 0xc8(r1)
    lwz r0, 0x8a0(r30)
    lfd f4, lbl_80753670@l(r6)
    lfs f1, 0x978(r4)
    srawi r5, r7, 8
    lfs f0, 0x964(r4)
    srwi r6, r5, 31
    clrrwi r0, r0, 1
    add r5, r5, r6
    stw r0, 0x8a0(r30)
    mulli r4, r5, 0x3e9
    lfs f2, lbl_808866B4
    subf r0, r4, r3
    xoris r0, r0, 0x8000
    stw r0, 0xcc(r1)
    lfd f3, 0xc8(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmadds f0, f1, f2, f0
    stfs f0, 0x924(r30)
    b lbl_fn_80426CF8_00001E48
lbl_fn_80426CF8_00001D18:
    mulli r0, r0, 0xc
    add r3, r30, r0
    lwz r0, 0x928(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80426CF8_00001DA8
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, 0x54(r30)
    li r3, -0x1
    lfs f0, lbl_808866A0
    li r0, 0x1
    lfs f1, lbl_808866A4
    mulli r4, r4, 0xc
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xf4
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    add r4, r30, r4
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x24(r1)
    addi r4, r4, 0x928
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80426CF8_00001DA8:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80426CF8_00001E34
    li r4, 0x0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_80426CF8_00001E34
    lfs f1, lbl_808866A4
    mr r3, r27
    lfs f2, lbl_808866B0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808866A4
    li r6, 0x0
    stfs f0, 0x234(r27)
    li r5, 0x0
    li r4, 0x1
    b lbl_fn_80426CF8_00001E28
lbl_fn_80426CF8_00001E14:
    lwz r0, 0x994(r30)
    addi r6, r6, 0x1
    add r3, r0, r5
    addi r5, r5, 0x1c
    stw r4, 0x18(r3)
lbl_fn_80426CF8_00001E28:
    lwz r0, 0x990(r30)
    cmplw r6, r0
    blt lbl_fn_80426CF8_00001E14
lbl_fn_80426CF8_00001E34:
    lwz r0, 0x8a0(r30)
    li r3, 0x1
    stw r3, 0x9c(r30)
    ori r0, r0, 0x1
    stw r0, 0x8a0(r30)
lbl_fn_80426CF8_00001E48:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_80426CF8_00001E88
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8A28@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8A28@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_80426CF8_00001E88:
    lis r28, lbl_807C6BB8@ha
    addi r28, r28, lbl_807C6BB8@l
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80426CF8_00001EF0
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80426CF8_00001EE4
lbl_fn_80426CF8_00001EA8:
    lwz r0, 0x0(r28)
    add r3, r0, r29
    lwzx r0, r29, r0
    cmpwi r0, -0x1
    beq lbl_fn_80426CF8_00001EC4
    cmpwi r0, 0xb
    bne lbl_fn_80426CF8_00001EDC
lbl_fn_80426CF8_00001EC4:
    lwz r12, 0x4(r3)
    mr r4, r30
    mr r5, r31
    li r3, 0xb
    mtctr r12
    bctrl
lbl_fn_80426CF8_00001EDC:
    addi r27, r27, 0x1
    addi r29, r29, 0x8
lbl_fn_80426CF8_00001EE4:
    lwz r0, 0x4(r28)
    cmpw r27, r0
    blt lbl_fn_80426CF8_00001EA8
lbl_fn_80426CF8_00001EF0:
    lwz r3, 0x54(r30)
lbl_fn_80426CF8_00001EF4:
    addi r11, r1, 0xf0
    bl _restgpr_27
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
