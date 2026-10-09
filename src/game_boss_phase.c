#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8000D7DC(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003EFB0(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_80056E40(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_8006A004(void);
extern void fn_8006AD24(void);
extern void fn_8006B0C8(void);
extern void fn_8006D008(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_800899DC(void);
extern void fn_8008AD4C(void);
extern void fn_8008B130(void);
extern void fn_8008B140(void);
extern void fn_8008BBD8(void);
extern void fn_80091CFC(void);
extern void fn_80092814(void);
extern void fn_80092EC8(void);
extern void fn_80092F1C(void);
extern void fn_80095D44(void);
extern void fn_800971D4(void);
extern void fn_80097510(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097E80(void);
extern void fn_80099E9C(void);
extern void fn_800CB3A0(void);
extern void fn_800D1E9C(void);
extern void fn_800DC288(void);
extern void fn_800F29D0(void);
extern void fn_8011D394(void);
extern void fn_8011D424(void);
extern void fn_80121048(void);
extern void fn_801210C4(void);
extern void fn_80121114(void);
extern void fn_80121E14(void);
extern void fn_801298AC(void);
extern void fn_801298EC(void);
extern void fn_8012B3A8(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_8012D8B8(void);
extern void fn_801352F8(void);
extern void fn_80137E68(void);
extern void fn_80137FC0(void);
extern void fn_80138528(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_8014FD30(void);
extern void fn_8014FF9C(void);
extern void fn_8020EE8C(void);
extern void fn_802180A8(void);
extern void fn_80219558(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80363284(void);
extern void fn_8036354C(void);
extern void fn_80363960(void);
extern void fn_8036823C(void);
extern void fn_803EBBCC(void);
extern void fn_8044D208(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804776F4(void);
extern void fn_805634D4(void);
extern void fn_805638C0(void);
extern void fn_80563A20(void);
extern void fn_80564060(void);
extern void fn_80566014(void);
extern void fn_805663FC(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_806959D8(void);
extern void fn_80695AD0(void);
extern void fn_80695B00(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807377B0[];
extern u8 lbl_80737808[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8077A720[];
extern u8 lbl_8077A72C[];
extern u8 lbl_8077C458[];
extern u8 lbl_8077C460[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7B10[];
extern u8 lbl_807C7B20[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087D9F0;
extern u32 lbl_8087D9F4;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F088;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087FA20;
extern u32 lbl_80881964;
extern u32 lbl_8088198C;
extern u32 lbl_80881990;
extern u32 lbl_80881994;
extern u32 lbl_80881998;

/* Function declarations */
void fn_8013606C(void);
void fn_801360C4(void);
void fn_801360D8(void);
void fn_80136138(void);
void fn_80136544(void);
void fn_8013655C(void);
void fn_801370B8(void);
void fn_801370C8(void);
void fn_801370F4(void);
void fn_801371AC(void);

asm void fn_8013606C(void)
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
    beq lbl_fn_8013606C_0000003C
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_8013606C_0000003C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8013606C_0000003C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801360C4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_801360D8(void)
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
    beq lbl_fn_801360D8_000000B0
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801360D8_000000A0
    bl fn_80084C24
lbl_fn_801360D8_000000A0:
    cmpwi r31, 0x0
    ble lbl_fn_801360D8_000000B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_801360D8_000000B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80136138(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_80136138_000004C0
    lis r5, lbl_8077C460@ha
    li r4, 0x1
    addi r5, r5, lbl_8077C460@l
    stw r5, 0x0(r3)
    addi r3, r3, 0x1220
    bl fn_80121E14
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80136138_00000118
    mr r4, r30
    bl fn_803EBBCC
lbl_fn_80136138_00000118:
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_80136138_00000150
lbl_fn_80136138_00000124:
    add r3, r30, r27
    lwz r3, 0x654(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80136138_00000148
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80136138_00000148:
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_fn_80136138_00000150:
    lwz r0, 0x650(r30)
    cmplw r28, r0
    blt lbl_fn_80136138_00000124
    lwz r3, 0x678(r30)
    li r0, 0x0
    stw r0, 0x650(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80136138_00000284
    beq lbl_fn_80136138_00000188
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80136138_00000188:
    lwz r3, 0x67c(r30)
    li r0, 0x0
    stw r0, 0x678(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80136138_000001BC
    beq lbl_fn_80136138_000001B4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80136138_000001B4:
    li r0, 0x0
    stw r0, 0x67c(r30)
lbl_fn_80136138_000001BC:
    lwz r0, 0x674(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80136138_000001DC
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80136138_000001DC:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_80136138_0000021C
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C7B10@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7B10@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_80136138_0000021C:
    lis r27, lbl_807C6BB8@ha
    addi r27, r27, lbl_807C6BB8@l
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80136138_00000284
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_80136138_00000278
lbl_fn_80136138_0000023C:
    lwz r0, 0x0(r27)
    add r3, r0, r29
    lwzx r0, r29, r0
    cmpwi r0, -0x1
    beq lbl_fn_80136138_00000258
    cmpwi r0, 0x9
    bne lbl_fn_80136138_00000270
lbl_fn_80136138_00000258:
    lwz r12, 0x4(r3)
    mr r4, r30
    li r3, 0x9
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_80136138_00000270:
    addi r28, r28, 0x1
    addi r29, r29, 0x8
lbl_fn_80136138_00000278:
    lwz r0, 0x4(r27)
    cmpw r28, r0
    blt lbl_fn_80136138_0000023C
lbl_fn_80136138_00000284:
    li r28, 0x0
    li r27, 0x0
lbl_fn_80136138_0000028C:
    add r3, r30, r27
    lwz r3, 0x680(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80136138_000002A4
    li r4, 0x1
    bl fn_805638C0
lbl_fn_80136138_000002A4:
    addi r28, r28, 0x1
    addi r27, r27, 0x4
    cmplwi r28, 0x8
    blt lbl_fn_80136138_0000028C
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_80136138_000002FC
lbl_fn_80136138_000002C0:
    add r3, r30, r28
    lwz r27, 0x6a8(r3)
    cmpwi r27, 0x0
    beq lbl_fn_80136138_000002F4
    addic. r3, r27, 0x3ec
    beq lbl_fn_80136138_000002E0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80136138_000002E0:
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r27
    bl dtor_80084684
lbl_fn_80136138_000002F4:
    addi r28, r28, 0x4
    addi r29, r29, 0x1
lbl_fn_80136138_000002FC:
    lwz r0, 0x6a4(r30)
    cmplw r29, r0
    blt lbl_fn_80136138_000002C0
    li r0, 0x0
    stw r0, 0x6a4(r30)
    lwz r3, 0x480(r30)
    li r4, 0x1
    bl fn_800899DC
    lwz r3, 0x1394(r30)
    li r4, 0x1
    bl fn_801352F8
    addi r3, r30, 0x1414
    li r4, -0x1
    bl fn_800CB3A0
    addic. r0, r30, 0x1400
    beq lbl_fn_80136138_0000034C
    lwz r3, 0x1408(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80136138_0000034C
    bl fn_80084C24
lbl_fn_80136138_0000034C:
    addi r3, r30, 0x1220
    li r4, -0x1
    bl fn_80121048
    addic. r0, r30, 0x121c
    beq lbl_fn_80136138_0000038C
    lwz r27, 0x121c(r30)
    cmpwi r27, 0x0
    beq lbl_fn_80136138_0000038C
    mr r3, r27
    bl fn_8023781C
    addic. r3, r27, 0x4
    beq lbl_fn_80136138_00000384
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80136138_00000384:
    mr r3, r27
    bl dtor_80084684
lbl_fn_80136138_0000038C:
    addic. r27, r30, 0x1188
    beq lbl_fn_80136138_000003C4
    lis r4, fn_8000D7DC@ha
    addi r3, r27, 0x44
    addi r4, r4, fn_8000D7DC@l
    li r5, 0xc
    li r6, 0x2
    bl fn_806959D8
    lis r4, fn_8011D394@ha
    addi r3, r27, 0x4
    addi r4, r4, fn_8011D394@l
    li r5, 0x20
    li r6, 0x2
    bl fn_806959D8
lbl_fn_80136138_000003C4:
    addi r3, r30, 0x10d8
    li r4, -0x1
    bl fn_801298AC
    addic. r0, r30, 0xf80
    beq lbl_fn_80136138_000003F8
    lwz r3, 0xf80(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80136138_000003F8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80136138_000003F8:
    addi r3, r30, 0x7d4
    li r4, -0x1
    bl fn_8012B3A8
    addic. r0, r30, 0x624
    beq lbl_fn_80136138_00000424
    lwz r3, 0x62c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80136138_00000424
    beq lbl_fn_80136138_00000424
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80136138_00000424:
    addic. r3, r30, 0x5b8
    beq lbl_fn_80136138_00000434
    li r4, 0x0
    bl fn_80056E40
lbl_fn_80136138_00000434:
    addi r3, r30, 0xb0
    li r4, -0x1
    bl fn_800971D4
    addic. r3, r30, 0xa4
    beq lbl_fn_80136138_00000450
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80136138_00000450:
    addic. r3, r30, 0x98
    beq lbl_fn_80136138_00000460
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80136138_00000460:
    addic. r3, r30, 0x8c
    beq lbl_fn_80136138_00000470
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80136138_00000470:
    addic. r3, r30, 0x84
    beq lbl_fn_80136138_00000480
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80136138_00000480:
    addic. r0, r30, 0x54
    beq lbl_fn_80136138_000004A4
    lwz r4, 0x54(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80136138_000004A4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80136138_000004A4
    bl fn_800897D8
lbl_fn_80136138_000004A4:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80136138_000004C0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80136138_000004C0:
    mr r3, r30
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80136544(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0xac(r3)
    lwzu r12, 0x84(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

asm void fn_8013655C(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x190
    bl _savegpr_27
    lwz r0, 0xac(r3)
    mr r30, r3
    li r31, 0x0
    cmpwi r0, 0x1
    beq lbl_fn_8013655C_00000524
    cmpwi r0, 0x2
    beq lbl_fn_8013655C_00000650
    b lbl_fn_8013655C_00001030
lbl_fn_8013655C_00000524:
    addi r3, r3, 0x84
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_00000538
    li r31, 0x1
lbl_fn_8013655C_00000538:
    addi r3, r30, 0xa4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_0000054C
    li r31, 0x1
lbl_fn_8013655C_0000054C:
    cmpwi r31, 0x0
    bne lbl_fn_8013655C_00001030
    mr r3, r30
    bl fn_801371AC
    mr r3, r30
    bl fn_80138528
    lwz r0, 0x5c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8013655C_00000648
    li r28, 0x0
    li r27, 0x0
lbl_fn_8013655C_00000578:
    lwz r0, 0x5c(r30)
    add r3, r0, r27
    lwz r5, 0x108(r3)
    cmpwi r5, 0x0
    ble lbl_fn_8013655C_0000059C
    mr r3, r30
    mr r4, r28
    li r6, 0x0
    bl fn_8014FF9C
lbl_fn_8013655C_0000059C:
    addi r28, r28, 0x1
    addi r27, r27, 0x4
    cmpwi r28, 0x5
    blt lbl_fn_8013655C_00000578
    li r0, 0x2
    li r7, 0x0
    li r6, 0x0
    mtctr r0
lbl_fn_8013655C_000005BC:
    lwz r0, 0xaa0(r30)
    lwz r4, 0x5c(r30)
    slwi r0, r0, 3
    add r0, r30, r0
    add r4, r4, r6
    addic. r5, r0, 0xaa4
    lwz r3, 0xe8(r4)
    lwz r0, 0xec(r4)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_8013655C_000005F0
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
lbl_fn_8013655C_000005F0:
    lwz r3, 0xaa0(r30)
    addi r6, r6, 0x8
    lwz r4, 0x5c(r30)
    addi r0, r3, 0x1
    stw r0, 0xaa0(r30)
    slwi r0, r0, 3
    add r4, r4, r6
    add r0, r30, r0
    lwz r3, 0xe8(r4)
    addic. r5, r0, 0xaa4
    lwz r0, 0xec(r4)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_8013655C_00000630
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
lbl_fn_8013655C_00000630:
    lwz r3, 0xaa0(r30)
    addi r6, r6, 0x8
    addi r7, r7, 0x1
    addi r0, r3, 0x1
    stw r0, 0xaa0(r30)
    bdnz lbl_fn_8013655C_000005BC
lbl_fn_8013655C_00000648:
    li r0, 0x2
    stw r0, 0xac(r30)
lbl_fn_8013655C_00000650:
    addi r3, r30, 0xb0
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_00000664
    li r31, 0x1
lbl_fn_8013655C_00000664:
    addi r3, r30, 0x8c
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_00000678
    li r31, 0x1
lbl_fn_8013655C_00000678:
    addi r3, r30, 0x98
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_0000068C
    li r31, 0x1
lbl_fn_8013655C_0000068C:
    mr r27, r30
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_8013655C_000006CC
lbl_fn_8013655C_0000069C:
    lwz r3, 0x654(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_000006C4
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_000006C4
    li r28, 0x1
lbl_fn_8013655C_000006C4:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_fn_8013655C_000006CC:
    lwz r0, 0x650(r30)
    cmplw r29, r0
    blt lbl_fn_8013655C_0000069C
    cmpwi r28, 0x0
    beq lbl_fn_8013655C_000006E4
    li r31, 0x1
lbl_fn_8013655C_000006E4:
    addi r27, r30, 0x680
    li r29, 0x0
    li r28, 0x0
lbl_fn_8013655C_000006F0:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_0000070C
    bl fn_80564060
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_0000070C
    li r29, 0x1
lbl_fn_8013655C_0000070C:
    addi r28, r28, 0x1
    addi r27, r27, 0x4
    cmplwi r28, 0x8
    blt lbl_fn_8013655C_000006F0
    mr r27, r30
    li r28, 0x0
    b lbl_fn_8013655C_00000744
lbl_fn_8013655C_00000728:
    lwz r3, 0x6a8(r27)
    bl fn_8036354C
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_0000073C
    li r29, 0x1
lbl_fn_8013655C_0000073C:
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_fn_8013655C_00000744:
    lwz r0, 0x6a4(r30)
    cmplw r28, r0
    blt lbl_fn_8013655C_00000728
    cmpwi r29, 0x0
    beq lbl_fn_8013655C_0000075C
    li r31, 0x1
lbl_fn_8013655C_0000075C:
    lwz r0, 0x121c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8013655C_00000788
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x154(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x158(r1)
    stw r0, 0x15c(r1)
    b lbl_fn_8013655C_000007A4
lbl_fn_8013655C_00000788:
    lis r5, lbl_8077A720@ha
    lwzu r4, lbl_8077A720@l(r5)
    stw r4, 0x154(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x158(r1)
    stw r0, 0x15c(r1)
lbl_fn_8013655C_000007A4:
    lwz r5, 0x154(r1)
    addi r3, r1, 0x120
    lwz r4, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r5, 0x120(r1)
    stw r4, 0x124(r1)
    stw r0, 0x128(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_000007E0
    lwz r3, 0x121c(r30)
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_000007E0
    li r31, 0x1
lbl_fn_8013655C_000007E0:
    addi r3, r30, 0x1220
    bl fn_801210C4
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_000007F4
    li r31, 0x1
lbl_fn_8013655C_000007F4:
    cmpwi r31, 0x0
    bne lbl_fn_8013655C_00001030
    addi r3, r30, 0x8c
    addi r4, r30, 0xb0
    bl fn_804776F4
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8013655C_00000824
    addi r3, r30, 0x98
    addi r4, r30, 0xb0
    bl fn_804776F4
lbl_fn_8013655C_00000824:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8013655C_0000083C
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    bne lbl_fn_8013655C_0000089C
lbl_fn_8013655C_0000083C:
    li r3, 0x1fc
    li r4, 0x6
    la r5, lbl_8087D9F4
    la r6, lbl_8087D9F0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8013655C_00000878
    li r0, 0x0
    stw r0, 0x0(r3)
    li r4, 0x0
    li r5, 0x0
    addi r3, r3, 0x8
    bl fn_8004B290
lbl_fn_8013655C_00000878:
    lwz r27, 0x2b8(r30)
    cmpwi r27, 0x0
    stw r28, 0x2b8(r30)
    beq lbl_fn_8013655C_0000089C
    addi r3, r27, 0x8
    li r4, -0x1
    bl fn_8004B338
    mr r3, r27
    bl dtor_80084684
lbl_fn_8013655C_0000089C:
    addi r29, r30, 0x680
    li r28, 0x0
lbl_fn_8013655C_000008A4:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_000008B4
    bl fn_80566014
lbl_fn_8013655C_000008B4:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmplwi r28, 0x8
    blt lbl_fn_8013655C_000008A4
    mr r3, r30
    bl fn_80137FC0
    mr r3, r30
    bl fn_8014C228
    lbz r0, lbl_8087F088
    lis r4, lbl_8077A72C@ha
    lwzu r9, lbl_8077A72C@l(r4)
    li r3, 0x0
    extsb. r0, r0
    stw r9, 0xf4(r1)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    stw r8, 0xf8(r1)
    stw r7, 0xfc(r1)
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r9, 0xe8(r1)
    stw r8, 0xec(r1)
    stw r7, 0xf0(r1)
    stw r9, 0xdc(r1)
    stw r8, 0xe0(r1)
    stw r7, 0xe4(r1)
    stw r9, 0xd0(r1)
    stw r8, 0xd4(r1)
    stw r7, 0xd8(r1)
    stw r9, 0x100(r1)
    stw r8, 0x104(r1)
    stw r7, 0x108(r1)
    stw r30, 0x10c(r1)
    stw r9, 0x10(r1)
    stw r8, 0x14(r1)
    stw r7, 0x18(r1)
    stw r30, 0x1c(r1)
    stw r9, 0x110(r1)
    stw r8, 0x114(r1)
    stw r7, 0x118(r1)
    stw r30, 0x11c(r1)
    stw r9, 0x30(r1)
    stw r8, 0x34(r1)
    stw r7, 0x38(r1)
    stw r30, 0x3c(r1)
    stw r9, 0x50(r1)
    stw r8, 0x54(r1)
    stw r7, 0x58(r1)
    stw r30, 0x5c(r1)
    stw r3, 0x140(r1)
    stw r9, 0xc0(r1)
    stw r8, 0xc4(r1)
    stw r7, 0xc8(r1)
    stw r30, 0xcc(r1)
    bne lbl_fn_8013655C_000009F8
    lis r6, lbl_807C7B20@ha
    lis r4, fn_801370C8@ha
    lis r3, fn_801370F4@ha
    li r0, 0x1
    addi r3, r3, fn_801370F4@l
    addi r5, r6, lbl_807C7B20@l
    addi r4, r4, fn_801370C8@l
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r30, 0x6c(r1)
    stw r9, 0x90(r1)
    stw r8, 0x94(r1)
    stw r7, 0x98(r1)
    stw r30, 0x9c(r1)
    stw r9, 0x80(r1)
    stw r8, 0x84(r1)
    stw r7, 0x88(r1)
    stw r30, 0x8c(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B20@l(r6)
    stb r0, lbl_8087F088
lbl_fn_8013655C_000009F8:
    lwz r6, 0x30(r1)
    addi r3, r1, 0xb0
    lwz r5, 0x34(r1)
    lwz r4, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r6, 0x70(r1)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r6, 0xb0(r1)
    stw r5, 0xb4(r1)
    stw r4, 0xb8(r1)
    stw r0, 0xbc(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00000A7C
    addic. r0, r1, 0x144
    lwz r5, 0xb0(r1)
    lwz r4, 0xb4(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r5, 0xa0(r1)
    stw r4, 0xa4(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    beq lbl_fn_8013655C_00000A74
    stw r5, 0x144(r1)
    stw r4, 0x148(r1)
    stw r3, 0x14c(r1)
    stw r0, 0x150(r1)
lbl_fn_8013655C_00000A74:
    li r0, 0x1
    b lbl_fn_8013655C_00000A80
lbl_fn_8013655C_00000A7C:
    li r0, 0x0
lbl_fn_8013655C_00000A80:
    cmpwi r0, 0x0
    beq lbl_fn_8013655C_00000A98
    lis r3, lbl_807C7B20@ha
    addi r3, r3, lbl_807C7B20@l
    stw r3, 0x140(r1)
    b lbl_fn_8013655C_00000AA0
lbl_fn_8013655C_00000A98:
    li r0, 0x0
    stw r0, 0x140(r1)
lbl_fn_8013655C_00000AA0:
    addi r3, r30, 0xb0
    addi r4, r1, 0x140
    bl fn_800F29D0
    addic. r3, r1, 0x140
    beq lbl_fn_8013655C_00000AE8
    lwz r4, 0x140(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8013655C_00000AE8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8013655C_00000AE0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8013655C_00000AE0:
    li r0, 0x0
    stw r0, 0x140(r1)
lbl_fn_8013655C_00000AE8:
    lis r29, lbl_80737A9C@ha
    addi r3, r30, 0xb0
    addi r29, r29, lbl_80737A9C@l
    addi r4, r29, 0x56
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0x5b
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0x60
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0x65
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0x6c
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0x72
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0x80
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0x8d
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0x93
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0x99
    bl fn_80091CFC
    addi r3, r30, 0xb0
    addi r4, r29, 0xa3
    bl fn_80091CFC
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 4
    beq lbl_fn_8013655C_00000B8C
    addi r3, r30, 0xb0
    addi r4, r29, 0xad
    bl fn_80091CFC
lbl_fn_8013655C_00000B8C:
    lwz r4, 0x50(r30)
    cmpwi r4, 0x1
    beq lbl_fn_8013655C_00000BB8
    lis r3, 0x1062
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    cmpwi r0, 0x64
    bne lbl_fn_8013655C_00000BC4
lbl_fn_8013655C_00000BB8:
    lwz r0, 0x12a8(r30)
    oris r0, r0, 0x200
    stw r0, 0x12a8(r30)
lbl_fn_8013655C_00000BC4:
    lis r29, lbl_80737A9C@ha
    addi r3, r30, 0xb0
    addi r29, r29, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r29, 0xb4
    bl fn_80092814
    stw r3, 0x524(r30)
    addi r3, r30, 0xb0
    addi r4, r29, 0x5b
    li r5, 0x0
    bl fn_80092814
    lwz r0, 0x160(r30)
    stw r3, 0x520(r30)
    cmpwi r0, 0x0
    bge lbl_fn_8013655C_00000C20
    addi r3, r30, 0xb0
    addi r4, r29, 0x60
    li r5, 0x0
    bl fn_80092814
    mr r4, r3
    addi r3, r30, 0xb0
    li r5, -0x1
    bl fn_80095D44
lbl_fn_8013655C_00000C20:
    addi r3, r30, 0xb0
    bl fn_8008B130
    lis r29, lbl_80737A9C@ha
    addi r29, r29, lbl_80737A9C@l
    addi r4, r29, 0xbe
    bl fn_806827C4
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00000C58
    addi r3, r30, 0xb0
    bl fn_8008B130
    addi r4, r29, 0xc3
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_00000C74
lbl_fn_8013655C_00000C58:
    lis r5, lbl_80737A9C@ha
    lfs f1, lbl_8088198C
    addi r5, r5, lbl_80737A9C@l
    addi r3, r30, 0xb0
    addi r4, r5, 0x60
    addi r5, r5, 0xc8
    bl fn_80099E9C
lbl_fn_8013655C_00000C74:
    lwz r3, 0x50(r30)
    subis r0, r3, 0xa
    cmplwi r0, 0xae77
    bne lbl_fn_8013655C_00000CA0
    lis r5, lbl_80737A9C@ha
    lfs f1, lbl_80881990
    addi r5, r5, lbl_80737A9C@l
    addi r3, r30, 0xb0
    addi r4, r5, 0x60
    addi r5, r5, 0xce
    bl fn_80099E9C
lbl_fn_8013655C_00000CA0:
    mr r4, r30
    addi r3, r30, 0x10d8
    bl fn_801298EC
    addi r3, r30, 0x1188
    addi r4, r30, 0xb0
    bl fn_8011D424
    mr r4, r30
    addi r3, r30, 0x1220
    bl fn_80121114
    mr r28, r30
    li r27, 0x0
    b lbl_fn_8013655C_00000CE4
lbl_fn_8013655C_00000CD0:
    lwz r3, 0x6a8(r28)
    addi r4, r30, 0xb0
    bl fn_80363960
    addi r28, r28, 0x4
    addi r27, r27, 0x1
lbl_fn_8013655C_00000CE4:
    lwz r0, 0x6a4(r30)
    cmplw r27, r0
    blt lbl_fn_8013655C_00000CD0
    lwz r5, 0x484(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80881964
    li r4, 0x0
    lfs f2, lbl_80881994
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x12c0(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8013655C_00000D8C
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, 0x4330
    addi r0, r5, 0x749f
    stw r4, 0x160(r1)
    mulhw r6, r0, r3
    lis r5, lbl_80737808@ha
    lwz r0, 0x12c0(r30)
    lfd f5, lbl_80737808@l(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    srawi r5, r6, 8
    stw r4, 0x168(r1)
    srwi r0, r5, 31
    lfs f3, lbl_80881998
    add r0, r5, r0
    lfd f0, 0x168(r1)
    mulli r0, r0, 0x3e9
    fsubs f0, f0, f5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f4, 0x160(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmuls f0, f0, f3
    stfs f0, 0x2e4(r30)
lbl_fn_8013655C_00000D8C:
    addi r3, r30, 0xb0
    li r4, 0x1
    bl fn_80097E80
    li r0, 0x0
    stw r0, 0x12c(r1)
    addi r3, r30, 0xb0
    addi r4, r1, 0x12c
    bl fn_8000D430
    addic. r3, r1, 0x12c
    beq lbl_fn_8013655C_00000DE8
    lwz r4, 0x12c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8013655C_00000DE8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8013655C_00000DE0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8013655C_00000DE0:
    li r0, 0x0
    stw r0, 0x12c(r1)
lbl_fn_8013655C_00000DE8:
    addi r3, r30, 0xb0
    bl fn_80097510
    lwz r0, 0x2bc(r30)
    extlwi r0, r0, 2, 26
    srawi. r0, r0, 31
    beq lbl_fn_8013655C_00000E34
    lwz r0, 0x2bc(r30)
    addi r29, r30, 0x680
    li r28, 0x0
    ori r0, r0, 0x10
    stw r0, 0x2bc(r30)
lbl_fn_8013655C_00000E14:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8013655C_00000E24
    bl fn_805663FC
lbl_fn_8013655C_00000E24:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmplwi r28, 0x8
    blt lbl_fn_8013655C_00000E14
lbl_fn_8013655C_00000E34:
    lfs f0, 0x538(r30)
    addi r4, r30, 0x13b8
    lfs f2, 0x530(r30)
    addi r5, r30, 0x13c4
    psq_l f1, 0x528(r30), 0, 0
    mr r3, r30
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x13c0(r30)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x13cc(r30)
    stfs f0, 0x13d0(r30)
    stfs f0, 0x13d4(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    addi r3, r30, 0xb0
    li r4, 0x1dc
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00000EA8
    lwz r0, 0x7ec(r30)
    ori r0, r0, 0x80
    stw r0, 0x7ec(r30)
lbl_fn_8013655C_00000EA8:
    lwz r3, 0x5c(r30)
    lwz r0, 0x9c(r3)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_8013655C_00000ECC
    lwz r0, 0x7ec(r30)
    ori r0, r0, 0x4
    stw r0, 0x7ec(r30)
lbl_fn_8013655C_00000ECC:
    addi r3, r30, 0xb0
    li r4, 0x45
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00000EEC
    lwz r0, 0xc10(r30)
    ori r0, r0, 0x2
    stw r0, 0xc10(r30)
lbl_fn_8013655C_00000EEC:
    addi r3, r30, 0xb0
    li r4, 0x1dd
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00000F0C
    lwz r0, 0xc10(r30)
    ori r0, r0, 0x4
    stw r0, 0xc10(r30)
lbl_fn_8013655C_00000F0C:
    addi r3, r30, 0xb0
    li r4, 0x46
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00000F2C
    lwz r0, 0xc10(r30)
    ori r0, r0, 0x80
    stw r0, 0xc10(r30)
lbl_fn_8013655C_00000F2C:
    addi r3, r30, 0xb0
    li r4, 0x68
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00000F4C
    lwz r0, 0xc10(r30)
    ori r0, r0, 0x20
    stw r0, 0xc10(r30)
lbl_fn_8013655C_00000F4C:
    addi r3, r30, 0xb0
    li r4, 0x1de
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00000F6C
    lwz r0, 0xc10(r30)
    ori r0, r0, 0x2000
    stw r0, 0xc10(r30)
lbl_fn_8013655C_00000F6C:
    lwz r0, 0x137c(r30)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8013655C_00000F88
    lwz r0, 0xb4(r30)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xb4(r30)
lbl_fn_8013655C_00000F88:
    lwz r0, 0x12a4(r30)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_8013655C_00000FAC
    addi r3, r30, 0xb0
    li r4, 0x8e
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00000FB8
lbl_fn_8013655C_00000FAC:
    lwz r0, 0x54c(r30)
    oris r0, r0, 0x100
    stw r0, 0x54c(r30)
lbl_fn_8013655C_00000FB8:
    lwz r3, 0x50(r30)
    subis r0, r3, 0x3
    cmplwi r0, 0x18f9
    bne lbl_fn_8013655C_00000FE0
    lwz r0, 0x7ec(r30)
    ori r0, r0, 0x1
    oris r0, r0, 0x40
    ori r0, r0, 0x100
    oris r0, r0, 0x1
    stw r0, 0x7ec(r30)
lbl_fn_8013655C_00000FE0:
    addi r3, r30, 0xb0
    li r4, 0x5d
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_8013655C_00001000
    lwz r0, 0x54c(r30)
    oris r0, r0, 0x400
    stw r0, 0x54c(r30)
lbl_fn_8013655C_00001000:
    addi r3, r30, 0x7d4
    bl fn_8012B3E8
    addi r3, r30, 0x7d4
    bl fn_8012B988
    addi r3, r30, 0x7d4
    bl fn_8012D8B8
    lwz r0, 0x954(r30)
    mr r3, r30
    stw r0, 0x9f8(r30)
    bl fn_8014FD30
    li r0, 0x3
    stw r0, 0xac(r30)
lbl_fn_8013655C_00001030:
    addi r11, r1, 0x190
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_801370B8(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x484(r3)
    blr
}

asm void fn_801370C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801370F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_801370F4_000010BC
    lis r3, lbl_8077C458@ha
    addi r3, r3, lbl_8077C458@l
    stw r3, 0x0(r4)
    b lbl_fn_801370F4_00001128
lbl_fn_801370F4_000010BC:
    cmpwi r5, 0x0
    bne lbl_fn_801370F4_000010F0
    cmpwi r4, 0x0
    beq lbl_fn_801370F4_00001128
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_801370F4_00001128
lbl_fn_801370F4_000010F0:
    cmpwi r5, 0x1
    beq lbl_fn_801370F4_00001128
    lwz r5, 0x0(r4)
    lis r3, lbl_8077C458@ha
    lwz r4, lbl_8077C458@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801370F4_00001120
    stw r30, 0x0(r31)
    b lbl_fn_801370F4_00001128
lbl_fn_801370F4_00001120:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801370F4_00001128:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801371AC(void)
{
    nofralloc
    stwu r1, -0xef0(r1)
    mflr r0
    stw r0, 0xef4(r1)
    stmw r16, 0xeb0(r1)
    mr r17, r3
    addi r3, r3, 0x84
    bl fn_8047059C
    mr r19, r3
    addi r3, r17, 0x84
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r16, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x870(r1)
    mr r18, r3
    addi r3, r1, 0x880
    stw r16, 0x874(r1)
    li r4, 0x0
    li r5, 0x400
    stw r16, 0x878(r1)
    stw r16, 0x87c(r1)
    stw r16, 0xea0(r1)
    bl memset
    addi r3, r1, 0xe80
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x870(r1)
    mr r4, r18
    mr r5, r19
    addi r3, r1, 0x870
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x870
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x870(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    li r0, 0x20
    addi r3, r1, 0x76c
    mtctr r0
lbl_fn_801371AC_000011EC:
    stw r16, 0x4(r3)
    stwu r16, 0x8(r3)
    bdnz lbl_fn_801371AC_000011EC
    lis r3, lbl_80737A9C@ha
    lis r26, lbl_807377B0@ha
    addi r21, r1, 0x31
    addi r20, r1, 0x61
    addi r19, r1, 0x55
    addi r27, r26, lbl_807377B0@l
    addi r28, r3, lbl_80737A9C@l
    addi r25, r1, 0x60
    addi r24, r1, 0x48
    addi r30, r1, 0x370
    addi r23, r1, 0x54
    li r29, 0x0
    li r31, 0x1
lbl_fn_801371AC_0000122C:
    addi r3, r1, 0x870
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r16, r3
    cmpwi r0, 0x3b
    beq lbl_fn_801371AC_00001AE8
    addi r4, r28, 0xd4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_0000130C
    addi r3, r1, 0x870
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x670
    bl strcpy
    addi r3, r1, 0x870
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x770
    bl strcpy
    addi r18, r26, lbl_807377B0@l
    li r16, 0x0
lbl_fn_801371AC_00001284:
    lwz r4, 0x0(r18)
    addi r3, r1, 0x670
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_000012B0
    slwi r0, r16, 3
    addi r3, r1, 0x670
    add r4, r27, r0
    lwz r4, 0x4(r4)
    bl strcpy
    b lbl_fn_801371AC_000012C0
lbl_fn_801371AC_000012B0:
    addi r16, r16, 0x1
    addi r18, r18, 0x8
    cmplwi r16, 0xb
    blt lbl_fn_801371AC_00001284
lbl_fn_801371AC_000012C0:
    addi r3, r1, 0x770
    addi r4, r28, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_000012E8
    addi r3, r17, 0xb0
    addi r4, r1, 0x670
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_801371AC_000012F8
lbl_fn_801371AC_000012E8:
    addi r3, r17, 0xb0
    addi r4, r1, 0x670
    addi r5, r1, 0x770
    bl fn_8008AD4C
lbl_fn_801371AC_000012F8:
    mr r3, r17
    addi r4, r17, 0xb0
    addi r5, r1, 0x870
    bl fn_80137E68
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_0000130C:
    mr r3, r16
    addi r4, r28, 0xda
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_00001388
    addi r3, r1, 0x870
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x270
    bl strcpy
    addi r3, r1, 0x770
    addi r4, r28, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_00001368
    addi r3, r1, 0x870
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r17, 0xb0
    addi r4, r1, 0x270
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_00001368:
    addi r3, r1, 0x870
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r17, 0xb0
    addi r4, r1, 0x270
    addi r5, r1, 0x770
    bl fn_80092F1C
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_00001388:
    mr r3, r16
    addi r4, r28, 0xe4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_0000143C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_000013BC
    bl fn_8036823C
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_000013BC
    li r0, 0x1
    b lbl_fn_801371AC_000013CC
lbl_fn_801371AC_000013BC:
    lwz r3, lbl_8087FA20
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801371AC_000013CC:
    cmpwi r0, 0x0
    bne lbl_fn_801371AC_00001AE8
    addi r3, r1, 0x870
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x170
    bl strcpy
    addi r3, r1, 0x770
    addi r4, r28, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_0000141C
    addi r3, r1, 0x870
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r17, 0xb0
    addi r4, r1, 0x170
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_0000141C:
    addi r3, r1, 0x870
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r17, 0xb0
    addi r4, r1, 0x170
    addi r5, r1, 0x770
    bl fn_80092F1C
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_0000143C:
    mr r3, r16
    addi r4, r28, 0xf5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_000014F0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_00001470
    bl fn_8036823C
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_00001470
    li r0, 0x1
    b lbl_fn_801371AC_00001480
lbl_fn_801371AC_00001470:
    lwz r3, lbl_8087FA20
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801371AC_00001480:
    cmpwi r0, 0x0
    beq lbl_fn_801371AC_00001AE8
    addi r3, r1, 0x870
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x70
    bl strcpy
    addi r3, r1, 0x770
    addi r4, r28, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_000014D0
    addi r3, r1, 0x870
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r17, 0xb0
    addi r4, r1, 0x70
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_000014D0:
    addi r3, r1, 0x870
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r17, 0xb0
    addi r4, r1, 0x70
    addi r5, r1, 0x770
    bl fn_80092F1C
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_000014F0:
    mr r3, r16
    addi r4, r28, 0x104
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_00001528
    addi r3, r1, 0x870
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x570
    bl strcpy
    addi r3, r17, 0xb0
    addi r4, r1, 0x570
    bl fn_80092EC8
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_00001528:
    mr r3, r16
    addi r4, r28, 0x10f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_00001570
    addi r3, r1, 0x870
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x470
    bl strcpy
    addi r3, r1, 0x870
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r17, 0xb0
    addi r5, r1, 0x470
    bl fn_80097A88
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_00001570:
    mr r3, r16
    addi r4, r28, 0x116
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_000017B4
    addi r3, r1, 0x870
    bl fn_8005B9CC
    stw r29, 0x60(r1)
    mr r16, r3
    stw r29, 0x64(r1)
    stw r29, 0x68(r1)
    bl strlen
    mr r18, r3
    mr r3, r25
    mr r4, r18
    bl fn_80013DC4
    lbz r0, 0x2c(r1)
    mr r3, r25
    stb r0, 0x28(r1)
    mr r6, r16
    add r7, r16, r18
    addi r8, r1, 0x28
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r16, r28, 0x121
    stw r29, 0x48(r1)
    mr r3, r16
    stw r29, 0x4c(r1)
    stw r29, 0x50(r1)
    bl strlen
    mr r18, r3
    mr r3, r24
    mr r4, r18
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r24
    stb r0, 0x20(r1)
    mr r6, r16
    add r7, r16, r18
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r3, r25
    mr r4, r24
    bl fn_8006AD24
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801371AC_00001640
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_801371AC_00001640:
    addi r16, r28, 0x126
    mr r3, r16
    bl strlen
    mr r6, r3
    mr r4, r16
    addi r3, r1, 0x60
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_801371AC_00001770
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_0000168C
    bl fn_8036823C
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_0000168C
    li r0, 0x1
    b lbl_fn_801371AC_0000169C
lbl_fn_801371AC_0000168C:
    lwz r3, lbl_8087FA20
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801371AC_0000169C:
    cmpwi r0, 0x0
    beq lbl_fn_801371AC_00001770
    addi r3, r1, 0x3c
    addi r4, r1, 0x60
    bl fn_8006B0C8
    addi r3, r1, 0x30
    addi r4, r1, 0x3c
    addi r5, r28, 0x134
    bl fn_8006D008
    lwz r0, 0x60(r1)
    srwi. r3, r0, 31
    bne lbl_fn_801371AC_000016F0
    lwz r4, 0x30(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801371AC_000016F0
    lwz r3, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r4, 0x60(r1)
    stw r3, 0x64(r1)
    stw r0, 0x68(r1)
    b lbl_fn_801371AC_00001748
lbl_fn_801371AC_000016F0:
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_00001700
    lwz r5, 0x64(r1)
    b lbl_fn_801371AC_00001708
lbl_fn_801371AC_00001700:
    lbz r0, 0x60(r1)
    clrlwi r5, r0, 25
lbl_fn_801371AC_00001708:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801371AC_00001724
    lbz r0, 0x30(r1)
    mr r6, r21
    clrlwi r4, r0, 25
    b lbl_fn_801371AC_0000172C
lbl_fn_801371AC_00001724:
    lwz r6, 0x38(r1)
    lwz r4, 0x34(r1)
lbl_fn_801371AC_0000172C:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r3, r1, 0x60
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_801371AC_00001748:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801371AC_0000175C
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_801371AC_0000175C:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801371AC_00001770
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_801371AC_00001770:
    lwz r0, 0x60(r1)
    addi r3, r17, 0x8c
    srwi. r0, r0, 31
    bne lbl_fn_801371AC_00001788
    mr r4, r20
    b lbl_fn_801371AC_0000178C
lbl_fn_801371AC_00001788:
    lwz r4, 0x68(r1)
lbl_fn_801371AC_0000178C:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801371AC_00001AE8
    lwz r3, 0x68(r1)
    bl dtor_80084684
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_000017B4:
    mr r3, r16
    addi r4, r28, 0x148
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_0000180C
    lwz r3, 0x60(r17)
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_000017E8
    lwz r3, 0x18(r3)
    addi r4, r28, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_000017E8:
    addi r3, r1, 0x870
    bl fn_8005B9CC
    lwz r12, 0x98(r17)
    mr r4, r3
    addi r3, r17, 0x98
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_0000180C:
    mr r3, r16
    addi r4, r28, 0x156
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_00001890
    addi r5, r28, 0x24
    li r3, 0xc
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_00001844
    bl fn_802377B8
lbl_fn_801371AC_00001844:
    lwz r16, 0x121c(r17)
    cmpwi r16, 0x0
    stw r3, 0x121c(r17)
    beq lbl_fn_801371AC_00001874
    mr r3, r16
    bl fn_8023781C
    addic. r3, r16, 0x4
    beq lbl_fn_801371AC_0000186C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_801371AC_0000186C:
    mr r3, r16
    bl dtor_80084684
lbl_fn_801371AC_00001874:
    lwz r16, 0x121c(r17)
    addi r3, r1, 0x870
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r16
    bl fn_8023780C
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_00001890:
    mr r3, r16
    addi r4, r28, 0x15a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_000018F4
    addi r5, r28, 0x24
    li r3, 0x3f8
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_000018CC
    addi r4, r1, 0x870
    bl fn_80363284
lbl_fn_801371AC_000018CC:
    lwz r0, 0x6a4(r17)
    slwi r0, r0, 2
    add r0, r17, r0
    addic. r4, r0, 0x6a8
    beq lbl_fn_801371AC_000018E4
    stw r3, 0x0(r4)
lbl_fn_801371AC_000018E4:
    lwz r3, 0x6a4(r17)
    addi r0, r3, 0x1
    stw r0, 0x6a4(r17)
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_000018F4:
    mr r3, r16
    addi r4, r28, 0x160
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_00001AE8
    addi r3, r1, 0x870
    bl fn_8005B9CC
    bl fn_8020EE8C
    mr r18, r3
    addi r3, r1, 0x870
    bl fn_8005B9CC
    cmplw r3, r30
    mr r16, r3
    beq lbl_fn_801371AC_00001944
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r16
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_801371AC_00001944:
    addi r3, r1, 0x870
    bl fn_8005B9CC
    bl fn_80684600
    lwz r0, lbl_8087F4F0
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_801371AC_000019E8
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_000019E8
    li r16, 0x0
    beq cr1, lbl_fn_801371AC_000019C0
    lwz r3, 0x50(r17)
    bl fn_80219558
    cmpwi r3, 0x0
    li r0, 0x0
    blt lbl_fn_801371AC_0000198C
    cmpwi r3, 0x7
    bge lbl_fn_801371AC_0000198C
    li r0, 0x1
lbl_fn_801371AC_0000198C:
    cmpwi r0, 0x0
    beq lbl_fn_801371AC_000019C0
    lwz r3, 0x50(r17)
    bl fn_80219558
    mulli r0, r3, 0x43c
    lwz r3, lbl_8087F4F0
    slw r4, r31, r18
    add r3, r3, r0
    lbz r0, 0x671c(r3)
    and r0, r4, r0
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r16, r0, 5
lbl_fn_801371AC_000019C0:
    lwz r3, lbl_8087F4F0
    mr r4, r18
    lwz r5, 0x50(r17)
    bl fn_8044D208
    mr r5, r3
    mr r3, r17
    mr r4, r18
    mr r6, r16
    bl fn_8014FF9C
    b lbl_fn_801371AC_00001AE8
lbl_fn_801371AC_000019E8:
    addi r5, r28, 0x24
    li r3, 0x43c
    mr r6, r5
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_801371AC_00001A38
    stw r31, 0x8(r1)
    mr r4, r18
    mr r7, r17
    li r5, -0x1
    stw r31, 0xc(r1)
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_805634D4
    mr r22, r3
lbl_fn_801371AC_00001A38:
    stw r29, 0x54(r1)
    addi r3, r1, 0x370
    stw r29, 0x58(r1)
    stw r29, 0x5c(r1)
    bl strlen
    mr r16, r3
    mr r3, r23
    mr r4, r16
    bl fn_80013DC4
    addi r6, r1, 0x370
    lbz r0, 0x14(r1)
    mr r7, r6
    stb r0, 0x10(r1)
    mr r3, r23
    addi r8, r1, 0x10
    add r7, r7, r16
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x54(r1)
    mr r3, r22
    srwi. r0, r0, 31
    bne lbl_fn_801371AC_00001A9C
    mr r4, r19
    b lbl_fn_801371AC_00001AA0
lbl_fn_801371AC_00001A9C:
    lwz r4, 0x5c(r1)
lbl_fn_801371AC_00001AA0:
    bl fn_80563A20
    slwi r0, r18, 2
    add r16, r17, r0
    lwz r3, 0x680(r16)
    cmpwi r3, 0x0
    beq lbl_fn_801371AC_00001AC0
    li r4, 0x1
    bl fn_805638C0
lbl_fn_801371AC_00001AC0:
    cmpwi r18, 0x0
    stw r22, 0x680(r16)
    bne lbl_fn_801371AC_00001AD4
    mr r3, r17
    bl fn_8014FD30
lbl_fn_801371AC_00001AD4:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801371AC_00001AE8
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_801371AC_00001AE8:
    addi r3, r1, 0x870
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_801371AC_0000122C
    lmw r16, 0xeb0(r1)
    lwz r0, 0xef4(r1)
    mtlr r0
    addi r1, r1, 0xef0
    blr
}
