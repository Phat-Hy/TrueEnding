#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void OSSleepTicks(void);
extern void OSTicksToCalendarTime(void);
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E120(void);
extern void fn_8004B378(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800697D8(void);
extern void fn_8006A9A4(void);
extern void fn_8006AA20(void);
extern void fn_8006AD24(void);
extern void fn_8006B53C(void);
extern void fn_8006B594(void);
extern void fn_8006BA6C(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800C93D4(void);
extern void fn_800C97F8(void);
extern void fn_800CA7D4(void);
extern void fn_800CAD9C(void);
extern void fn_800CAE24(void);
extern void fn_800CB1F4(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB404(void);
extern void fn_800CB480(void);
extern void fn_800CB4EC(void);
extern void fn_800CB504(void);
extern void fn_800CB518(void);
extern void fn_800CB5B4(void);
extern void fn_800CB654(void);
extern void fn_800CFDA0(void);
extern void fn_800D0AB0(void);
extern void fn_800D19FC(void);
extern void fn_800DC12C(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA6C(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_8059D7DC(void);
extern void fn_8059D828(void);
extern void fn_8059D8B4(void);
extern void fn_8059DA44(void);
extern void fn_8059DD4C(void);
extern void fn_8059DE68(void);
extern void fn_8059E318(void);
extern void fn_8059E320(void);
extern void fn_8059E330(void);
extern void fn_8059E348(void);
extern void fn_8059E390(void);
extern void fn_8059E7F0(void);
extern void fn_8059EB20(void);
extern void fn_8059EBD8(void);
extern void fn_8059EDE8(void);
extern void fn_8059EF94(void);
extern void fn_8059F100(void);
extern void fn_8059F878(void);
extern void fn_805A1C04(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_805FA4E0(void);
extern void fn_80607900(void);
extern void fn_80607D70(void);
extern void fn_806095E0(void);
extern void fn_80624AB0(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern void fn_80703F90(void);
extern void fn_80704780(void);
extern void fn_80704890(void);
extern void fn_807048A0(void);
extern void fn_80704AD0(void);
extern void fn_80704CC0(void);
extern void fn_80709AD0(void);
extern void fn_8070DC00(void);
extern void fn_8070DC10(void);
extern void fn_8070DC20(void);
extern void fn_8070E190(void);
extern void fn_8070E760(void);
extern void fn_8070E830(void);
extern void fn_8070EA60(void);
extern void fn_80710A80(void);
extern void fn_80710B40(void);
extern void fn_80711390(void);
extern void fn_80711430(void);
extern void fn_80715D90(void);
extern void fn_80715DF0(void);
extern void fn_80715E50(void);
extern void fn_80715E90(void);
extern void fn_80717680(void);
extern void fn_807176D0(void);
extern void fn_80717740(void);
extern void fn_80717750(void);
extern void fn_807177D0(void);
extern void fn_80717840(void);
extern void fn_807178A0(void);
extern void fn_80718470(void);
extern void fn_807184D0(void);
extern void fn_807184F0(void);
extern void fn_807186F0(void);
extern void fn_80725170(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80730F38[];
extern u8 lbl_80730F54[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80777520[];
extern u8 lbl_80777538[];
extern u8 lbl_80777554[];
extern u8 lbl_80777570[];
extern u8 lbl_807C5ED8[];
extern u8 lbl_807C5F00[];
extern u8 lbl_807C5F28[];

/* Small data declarations */
extern u32 lbl_8087D718;
extern u32 lbl_8087D71C;
extern u32 lbl_8087D720;
extern u32 lbl_8087EE80;
extern u32 lbl_8087EE84;
extern u32 lbl_8087EE88;
extern u32 lbl_8087EE8C;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EE94;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F518;
extern u32 lbl_80880870;
extern u32 lbl_80880874;
extern u32 lbl_80880878;
extern u32 lbl_8088087C;
extern u32 lbl_80880880;
extern u32 lbl_80880884;
extern u32 lbl_80880888;
extern u32 lbl_80880890;
extern u32 lbl_80880894;
extern u32 lbl_80880898;
extern u32 lbl_8088089C;
extern u32 lbl_808808A0;
extern u32 lbl_808808A4;
extern u32 lbl_808808A8;
extern u32 lbl_808808AC;

/* Function declarations */
void fn_800461FC(void);
void fn_80046200(void);
void fn_80046208(void);
void fn_8004620C(void);
void fn_80046214(void);
void fn_80046218(void);
void fn_80046220(void);
void fn_80046224(void);
void fn_80046228(void);
void fn_80046398(void);
void fn_800463A8(void);
void fn_800463FC(void);
void fn_800465E8(void);
void fn_80046610(void);
void fn_8004668C(void);
void fn_80046708(void);
void fn_80046784(void);
void fn_800467E4(void);
void fn_80046EE0(void);
void fn_80047628(void);
void fn_80047B54(void);
void fn_80047C74(void);
void fn_80047D20(void);
void fn_80047DBC(void);
void fn_80047DCC(void);
void fn_8004829C(void);
void fn_8004895C(void);
void fn_800489F4(void);
void fn_80048F8C(void);
void fn_80049268(void);
void fn_8004937C(void);
void fn_80049654(void);
void fn_800496C0(void);
void fn_800498A4(void);
void fn_800498D4(void);
void fn_800499D0(void);
void fn_800499F4(void);
void fn_80049A28(void);
void fn_80049AAC(void);
void fn_80049AE4(void);
void fn_80049B08(void);
void fn_80049B2C(void);
void fn_80049B74(void);
void fn_80049C3C(void);
void fn_80049CDC(void);
void fn_80049D74(void);
void fn_80049E3C(void);
void fn_80049E44(void);
void fn_80049E54(void);
void fn_8004A03C(void);
void fn_8004A1D4(void);
void fn_8004A2CC(void);
void fn_8004A388(void);
void fn_8004A3FC(void);
void fn_8004A600(void);
void fn_8004A660(void);
void fn_8004A664(void);
void fn_8004A7C4(void);
void fn_8004A8FC(void);
void fn_8004AA5C(void);
void fn_8004ABDC(void);
void fn_8004AD3C(void);
void fn_8004AD9C(void);
void fn_8004ADF4(void);
void fn_8004AE84(void);
void fn_8004AFAC(void);
void fn_8004B0E4(void);
void fn_8004B158(void);
void fn_8004B1EC(void);
void fn_8004B20C(void);
void fn_8004B290(void);
void fn_8004B338(void);

asm void fn_800461FC(void)
{
    nofralloc
    blr
}

asm void fn_80046200(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80046208(void)
{
    nofralloc
    blr
}

asm void fn_8004620C(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_80046214(void)
{
    nofralloc
    blr
}

asm void fn_80046218(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_80046220(void)
{
    nofralloc
    blr
}

asm void fn_80046224(void)
{
    nofralloc
    blr
}

asm void fn_80046228(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r18, 0x28(r1)
    lwz r25, lbl_8087EE94
    cmpwi r25, 0x0
    beq lbl_fn_80046228_00000164
    li r27, 0x0
    lis r29, lbl_80775B60@ha
    lis r21, lbl_80775B98@ha
    lis r23, lbl_80775B30@ha
    mr r30, r27
    mr r22, r27
    addi r29, r29, lbl_80775B60@l
    addi r19, r1, 0x8
    addi r21, r21, lbl_80775B98@l
    addi r23, r23, lbl_80775B30@l
    addi r28, r1, 0x18
    li r24, 0x0
    lis r31, lbl_80775BC8@ha
    li r20, 0x1
    b lbl_fn_80046228_00000158
lbl_fn_80046228_00000084:
    lwz r0, 0x8(r25)
    add r26, r0, r24
    lwzx r0, r24, r0
    cmpwi r0, 0x0
    bne lbl_fn_80046228_0000013C
    stw r29, 0x18(r1)
    addi r3, r31, lbl_80775BC8@l
    stb r30, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x1c(r1)
    mr r18, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r19, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80046228_000000E8
    stw r20, 0x4(r3)
    stw r20, 0x8(r3)
    stw r21, 0x0(r3)
    stw r18, 0xc(r3)
lbl_fn_80046228_000000E8:
    cmpwi r22, 0x0
    stw r3, 0x20(r1)
    stw r22, 0x10(r1)
    beq lbl_fn_80046228_00000100
    li r3, 0x0
    bl fn_80084C24
lbl_fn_80046228_00000100:
    lwz r3, 0x1c(r1)
    addi r4, r31, lbl_80775BC8@l
    bl strcpy
    stw r23, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800DCA6C
    cmpwi r28, 0x0
    beq lbl_fn_80046228_0000013C
    addic. r3, r28, 0x4
    beq lbl_fn_80046228_0000013C
    beq lbl_fn_80046228_0000013C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80046228_0000013C
    bl fn_806952C4
lbl_fn_80046228_0000013C:
    lwz r4, 0x0(r26)
    addi r3, r26, 0x4
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
    addi r27, r27, 0x1
    addi r24, r24, 0x14
lbl_fn_80046228_00000158:
    lwz r0, 0x0(r25)
    cmplw r27, r0
    blt lbl_fn_80046228_00000084
lbl_fn_80046228_00000164:
    lis r4, 0x8000
    lis r3, 0x1062
    lwz r0, 0xf8(r4)
    addi r4, r3, 0x4dd3
    li r3, 0x0
    srwi r0, r0, 2
    mulhwu r0, r4, r0
    srwi r4, r0, 6
    bl OSSleepTicks
    lmw r18, 0x28(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80046398(void)
{
    nofralloc
    li r0, 0x1
    stw r0, lbl_8087EE80
    stw r3, lbl_8087EE84
    blr
}

asm void fn_800463A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087EE90
    cmpwi r0, 0x0
    bne lbl_fn_800463A8_000001F0
    lis r5, lbl_80730F54@ha
    li r3, 0x92c
    addi r5, r5, lbl_80730F54@l
    li r4, 0xa
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800463A8_000001EC
    bl fn_800463FC
lbl_fn_800463A8_000001EC:
    stw r3, lbl_8087EE90
lbl_fn_800463A8_000001F0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800463FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80777520@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80777520@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r4, 0x0(r3)
    stw r30, 0x4(r3)
    addi r3, r3, 0x8
    bl fn_8059D7DC
    stw r30, 0x194(r29)
    addi r3, r29, 0x1d8
    stw r30, 0x198(r29)
    bl fn_8059E7F0
    stw r30, 0x2c4(r29)
    addi r3, r29, 0x2cc
    stw r30, 0x2c8(r29)
    bl fn_80717680
    stw r30, 0x2f8(r29)
    addi r3, r29, 0x300
    stw r30, 0x2fc(r29)
    bl fn_80717680
    stw r30, 0x32c(r29)
    addi r3, r29, 0x330
    bl fn_80717680
    lis r3, 0x2
    stw r30, 0x35c(r29)
    subi r0, r3, 0x2000
    stw r0, 0x360(r29)
    addi r3, r29, 0x364
    bl fn_80715D90
    li r31, 0x1
    stw r30, 0x390(r29)
    addi r3, r29, 0x410
    stw r30, 0x394(r29)
    stw r30, 0x398(r29)
    stw r30, 0x39c(r29)
    stw r30, 0x3a0(r29)
    stw r30, 0x3a4(r29)
    stw r30, 0x3a8(r29)
    stw r30, 0x3cc(r29)
    stw r31, 0x3d0(r29)
    stw r30, 0x3d4(r29)
    stw r30, 0x3d8(r29)
    stw r30, 0x3dc(r29)
    stw r30, 0x3f8(r29)
    stw r30, 0x3fc(r29)
    stw r30, 0x404(r29)
    stw r30, 0x408(r29)
    stw r30, 0x40c(r29)
    bl fn_8070E760
    addi r3, r29, 0x640
    bl fn_8070DC20
    addi r3, r29, 0x7c4
    bl fn_8070E190
    addi r6, r29, 0x8b0
    addi r5, r29, 0x8d4
    addi r4, r29, 0x8ec
    addi r0, r29, 0x8f8
    stw r30, 0x8ac(r29)
    addi r3, r29, 0x900
    stw r30, 0x8b0(r29)
    stw r6, 0x8b8(r29)
    stw r30, 0x8bc(r29)
    stw r30, 0x8c0(r29)
    stw r30, 0x8c4(r29)
    stw r30, 0x8c8(r29)
    stw r31, 0x8cc(r29)
    stw r30, 0x8d0(r29)
    stw r30, 0x8d4(r29)
    stw r5, 0x8dc(r29)
    stw r30, 0x8e0(r29)
    stw r30, 0x8e4(r29)
    stw r30, 0x8e8(r29)
    stw r30, 0x8ec(r29)
    stw r4, 0x8f0(r29)
    stw r30, 0x8f4(r29)
    stw r30, 0x8f8(r29)
    stw r0, 0x8fc(r29)
    bl fn_800CAD9C
    lis r31, lbl_80730F54@ha
    li r0, -0x1
    addi r5, r31, lbl_80730F54@l
    stw r0, 0x91c(r29)
    li r3, 0x800
    li r4, 0xa
    stw r30, 0x920(r29)
    mr r6, r5
    li r7, 0x0
    stw r30, 0x924(r29)
    stw r30, 0x928(r29)
    bl fn_800846FC
    stw r3, lbl_8087EE88
    li r4, 0x0
    li r5, 0x800
    bl memset
    addi r5, r31, lbl_80730F54@l
    li r3, 0x100
    mr r6, r5
    li r4, 0xa
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087EE8C
    li r4, 0x0
    li r5, 0x100
    bl memset
    addi r4, r31, lbl_80730F54@l
    lwz r3, lbl_8087EE8C
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800465E8(void)
{
    nofralloc
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x20(r3)
    stw r0, 0x24(r3)
    stw r4, 0x28(r3)
    stw r4, 0x2c(r3)
    stw r4, 0x30(r3)
    stw r4, 0x4c(r3)
    stw r4, 0x50(r3)
    blr
}

asm void fn_80046610(void)
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
    beq lbl_fn_80046610_00000474
    lis r12, lbl_807C5F28@ha
    addi r12, r12, lbl_807C5F28@l
    stw r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    ble lbl_fn_80046610_00000474
    mr r3, r30
    bl dtor_80084684
lbl_fn_80046610_00000474:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004668C(void)
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
    beq lbl_fn_8004668C_000004F0
    lis r12, lbl_807C5ED8@ha
    addi r12, r12, lbl_807C5ED8@l
    stw r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    ble lbl_fn_8004668C_000004F0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004668C_000004F0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80046708(void)
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
    beq lbl_fn_80046708_0000056C
    lis r12, lbl_807C5F00@ha
    addi r12, r12, lbl_807C5F00@l
    stw r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    ble lbl_fn_80046708_0000056C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80046708_0000056C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80046784(void)
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
    beq lbl_fn_80046784_000005CC
    addic. r3, r3, 0xc
    beq lbl_fn_80046784_000005BC
    li r4, 0x0
    bl fn_80725170
lbl_fn_80046784_000005BC:
    cmpwi r31, 0x0
    ble lbl_fn_80046784_000005CC
    mr r3, r30
    bl dtor_80084684
lbl_fn_80046784_000005CC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800467E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_800467E4_00000CCC
    lis r4, lbl_80777520@ha
    addi r4, r4, lbl_80777520@l
    stw r4, 0x0(r3)
    bl fn_80047628
    lwz r3, lbl_8087EE88
    bl fn_80084C24
    li r29, 0x0
    stw r29, lbl_8087EE88
    lwz r3, lbl_8087EE8C
    bl fn_80084C24
    addic. r3, r30, 0x91c
    stw r29, lbl_8087EE8C
    beq lbl_fn_800467E4_00000658
    addic. r0, r3, 0x4
    beq lbl_fn_800467E4_00000658
    lwz r0, 0x4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_800467E4_00000658
    lwz r3, 0xc(r3)
    bl dtor_80084684
lbl_fn_800467E4_00000658:
    addi r3, r30, 0x900
    li r4, -0x1
    bl fn_800CAE24
    addic. r29, r30, 0x8f4
    beq lbl_fn_800467E4_000007A8
    beq lbl_fn_800467E4_000007A8
    beq lbl_fn_800467E4_000007A8
    beq lbl_fn_800467E4_000007A8
    beq lbl_fn_800467E4_000007A8
    lwz r28, 0x4(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_000007A8
    lwz r27, 0x0(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800467E4_00000714
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_800467E4_000006D0
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_000006B4
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_000006B4:
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_000006C8
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_000006C8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_800467E4_000006D0:
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_800467E4_0000070C
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_000006F0
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_000006F0:
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000704
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_00000704:
    mr r3, r26
    bl dtor_80084684
lbl_fn_800467E4_0000070C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_800467E4_00000714:
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_800467E4_000007A0
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800467E4_0000075C
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000740
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_00000740:
    lwz r4, 0x4(r27)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000754
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_00000754:
    mr r3, r27
    bl dtor_80084684
lbl_fn_800467E4_0000075C:
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800467E4_00000798
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_0000077C
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_0000077C:
    lwz r4, 0x4(r27)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000790
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_00000790:
    mr r3, r27
    bl dtor_80084684
lbl_fn_800467E4_00000798:
    mr r3, r26
    bl dtor_80084684
lbl_fn_800467E4_000007A0:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_000007A8:
    addic. r29, r30, 0x8e8
    beq lbl_fn_800467E4_000008EC
    beq lbl_fn_800467E4_000008EC
    beq lbl_fn_800467E4_000008EC
    beq lbl_fn_800467E4_000008EC
    beq lbl_fn_800467E4_000008EC
    lwz r26, 0x4(r29)
    cmpwi r26, 0x0
    beq lbl_fn_800467E4_000008EC
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800467E4_00000858
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_00000814
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_000007F8
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_000007F8:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_0000080C
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_0000080C:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_00000814:
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_00000850
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000834
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_00000834:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000848
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_00000848:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_00000850:
    mr r3, r27
    bl dtor_80084684
lbl_fn_800467E4_00000858:
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800467E4_000008E4
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_000008A0
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000884
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_00000884:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000898
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_00000898:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_000008A0:
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_000008DC
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_000008C0
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_000008C0:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_000008D4
    mr r3, r29
    bl fn_8004A664
lbl_fn_800467E4_000008D4:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_000008DC:
    mr r3, r27
    bl dtor_80084684
lbl_fn_800467E4_000008E4:
    mr r3, r26
    bl dtor_80084684
lbl_fn_800467E4_000008EC:
    addic. r29, r30, 0x8d0
    beq lbl_fn_800467E4_00000A30
    beq lbl_fn_800467E4_00000A30
    beq lbl_fn_800467E4_00000A30
    beq lbl_fn_800467E4_00000A30
    beq lbl_fn_800467E4_00000A30
    lwz r26, 0x4(r29)
    cmpwi r26, 0x0
    beq lbl_fn_800467E4_00000A30
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800467E4_0000099C
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_00000958
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_0000093C
    mr r3, r29
    bl fn_8004A8FC
lbl_fn_800467E4_0000093C:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000950
    mr r3, r29
    bl fn_8004A8FC
lbl_fn_800467E4_00000950:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_00000958:
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_00000994
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000978
    mr r3, r29
    bl fn_8004A8FC
lbl_fn_800467E4_00000978:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_0000098C
    mr r3, r29
    bl fn_8004A8FC
lbl_fn_800467E4_0000098C:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_00000994:
    mr r3, r27
    bl dtor_80084684
lbl_fn_800467E4_0000099C:
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800467E4_00000A28
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_000009E4
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_000009C8
    mr r3, r29
    bl fn_8004A8FC
lbl_fn_800467E4_000009C8:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_000009DC
    mr r3, r29
    bl fn_8004A8FC
lbl_fn_800467E4_000009DC:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_000009E4:
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_00000A20
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000A04
    mr r3, r29
    bl fn_8004A8FC
lbl_fn_800467E4_00000A04:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000A18
    mr r3, r29
    bl fn_8004A8FC
lbl_fn_800467E4_00000A18:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_00000A20:
    mr r3, r27
    bl dtor_80084684
lbl_fn_800467E4_00000A28:
    mr r3, r26
    bl dtor_80084684
lbl_fn_800467E4_00000A30:
    addic. r29, r30, 0x8ac
    beq lbl_fn_800467E4_00000B74
    beq lbl_fn_800467E4_00000B74
    beq lbl_fn_800467E4_00000B74
    beq lbl_fn_800467E4_00000B74
    beq lbl_fn_800467E4_00000B74
    lwz r26, 0x4(r29)
    cmpwi r26, 0x0
    beq lbl_fn_800467E4_00000B74
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800467E4_00000AE0
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_00000A9C
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000A80
    mr r3, r29
    bl fn_8004ABDC
lbl_fn_800467E4_00000A80:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000A94
    mr r3, r29
    bl fn_8004ABDC
lbl_fn_800467E4_00000A94:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_00000A9C:
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_00000AD8
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000ABC
    mr r3, r29
    bl fn_8004ABDC
lbl_fn_800467E4_00000ABC:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000AD0
    mr r3, r29
    bl fn_8004ABDC
lbl_fn_800467E4_00000AD0:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_00000AD8:
    mr r3, r27
    bl dtor_80084684
lbl_fn_800467E4_00000AE0:
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800467E4_00000B6C
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_00000B28
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000B0C
    mr r3, r29
    bl fn_8004ABDC
lbl_fn_800467E4_00000B0C:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000B20
    mr r3, r29
    bl fn_8004ABDC
lbl_fn_800467E4_00000B20:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_00000B28:
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800467E4_00000B64
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000B48
    mr r3, r29
    bl fn_8004ABDC
lbl_fn_800467E4_00000B48:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800467E4_00000B5C
    mr r3, r29
    bl fn_8004ABDC
lbl_fn_800467E4_00000B5C:
    mr r3, r28
    bl dtor_80084684
lbl_fn_800467E4_00000B64:
    mr r3, r27
    bl dtor_80084684
lbl_fn_800467E4_00000B6C:
    mr r3, r26
    bl dtor_80084684
lbl_fn_800467E4_00000B74:
    addic. r29, r30, 0x7c4
    beq lbl_fn_800467E4_00000BB0
    lis r4, lbl_807C5F00@ha
    mr r3, r29
    addi r4, r4, lbl_807C5F00@l
    stw r4, 0x0(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_800467E4_00000BB0:
    addic. r29, r30, 0x640
    beq lbl_fn_800467E4_00000BEC
    lis r4, lbl_807C5ED8@ha
    mr r3, r29
    addi r4, r4, lbl_807C5ED8@l
    stw r4, 0x0(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_800467E4_00000BEC:
    addic. r29, r30, 0x410
    beq lbl_fn_800467E4_00000C28
    lis r4, lbl_807C5F28@ha
    mr r3, r29
    addi r4, r4, lbl_807C5F28@l
    stw r4, 0x0(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_800467E4_00000C28:
    addic. r0, r30, 0x3a0
    beq lbl_fn_800467E4_00000C48
    lwz r3, 0x3a8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800467E4_00000C48
    beq lbl_fn_800467E4_00000C48
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800467E4_00000C48:
    addic. r0, r30, 0x394
    beq lbl_fn_800467E4_00000C68
    lwz r3, 0x39c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800467E4_00000C68
    beq lbl_fn_800467E4_00000C68
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800467E4_00000C68:
    addic. r0, r30, 0x364
    beq lbl_fn_800467E4_00000C80
    addic. r3, r0, 0xc
    beq lbl_fn_800467E4_00000C80
    li r4, 0x0
    bl fn_80725170
lbl_fn_800467E4_00000C80:
    addi r3, r30, 0x330
    li r4, -0x1
    bl fn_807176D0
    addi r3, r30, 0x300
    li r4, -0x1
    bl fn_807176D0
    addi r3, r30, 0x2cc
    li r4, -0x1
    bl fn_807176D0
    addi r3, r30, 0x1d8
    li r4, -0x1
    bl fn_8059EB20
    addi r3, r30, 0x8
    li r4, -0x1
    bl fn_8059D828
    cmpwi r31, 0x0
    ble lbl_fn_800467E4_00000CCC
    mr r3, r30
    bl dtor_80084684
lbl_fn_800467E4_00000CCC:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80046EE0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r26, 0x88(r1)
    mr r30, r3
    mr r28, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80046EE0_00000D0C
    bl fn_80047628
lbl_fn_80046EE0_00000D0C:
    bl fn_8006BA6C
    lwz r0, 0x920(r30)
    stw r3, 0x91c(r30)
    srwi. r0, r0, 31
    bne lbl_fn_80046EE0_00000D2C
    lbz r0, 0x920(r30)
    clrlwi r26, r0, 25
    b lbl_fn_80046EE0_00000D30
lbl_fn_80046EE0_00000D2C:
    lwz r26, 0x924(r30)
lbl_fn_80046EE0_00000D30:
    lbz r0, 0x3c(r1)
    mr r3, r28
    stb r0, 0x38(r1)
    bl strlen
    mr r0, r3
    mr r5, r26
    mr r6, r28
    addi r3, r30, 0x920
    add r7, r28, r0
    addi r8, r1, 0x38
    li r4, 0x0
    bl fn_80013F78
    li r3, 0x0
    bl fn_80607900
    bl fn_80607D70
    li r3, 0x4
    li r4, 0x3
    bl fn_807184F0
    li r0, 0x0
    stw r0, 0x7c(r1)
    mr r3, r28
    addi r26, r1, 0x7c
    stw r0, 0x80(r1)
    stw r0, 0x84(r1)
    bl strlen
    mr r27, r3
    mr r3, r26
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x34(r1)
    mr r3, r26
    stb r0, 0x30(r1)
    mr r6, r28
    add r7, r28, r27
    addi r8, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r3, r26
    bl fn_8006A9A4
    mr r4, r26
    addi r3, r1, 0x64
    bl fn_8006B53C
    lwz r0, 0x7c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80046EE0_00000E0C
    lwz r4, 0x64(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80046EE0_00000E0C
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r4, 0x7c(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    b lbl_fn_80046EE0_00000E64
lbl_fn_80046EE0_00000E0C:
    cmpwi r3, 0x0
    beq lbl_fn_80046EE0_00000E1C
    lwz r5, 0x80(r1)
    b lbl_fn_80046EE0_00000E24
lbl_fn_80046EE0_00000E1C:
    lbz r0, 0x7c(r1)
    clrlwi r5, r0, 25
lbl_fn_80046EE0_00000E24:
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80046EE0_00000E40
    lbz r0, 0x64(r1)
    addi r6, r1, 0x65
    clrlwi r4, r0, 25
    b lbl_fn_80046EE0_00000E48
lbl_fn_80046EE0_00000E40:
    lwz r6, 0x6c(r1)
    lwz r4, 0x68(r1)
lbl_fn_80046EE0_00000E48:
    lbz r0, 0x2c(r1)
    add r7, r6, r4
    stb r0, 0x28(r1)
    addi r3, r1, 0x7c
    addi r8, r1, 0x28
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80046EE0_00000E64:
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80046EE0_00000E78
    lwz r3, 0x6c(r1)
    bl dtor_80084684
lbl_fn_80046EE0_00000E78:
    bl fn_8006BA6C
    cmpwi r3, 0x0
    bne lbl_fn_80046EE0_00000F2C
    addi r3, r1, 0x58
    addi r4, r1, 0x7c
    bl fn_8006B594
    lwz r0, 0x7c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80046EE0_00000EC0
    lwz r4, 0x58(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80046EE0_00000EC0
    lwz r3, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r4, 0x7c(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    b lbl_fn_80046EE0_00000F18
lbl_fn_80046EE0_00000EC0:
    cmpwi r3, 0x0
    beq lbl_fn_80046EE0_00000ED0
    lwz r5, 0x80(r1)
    b lbl_fn_80046EE0_00000ED8
lbl_fn_80046EE0_00000ED0:
    lbz r0, 0x7c(r1)
    clrlwi r5, r0, 25
lbl_fn_80046EE0_00000ED8:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80046EE0_00000EF4
    lbz r0, 0x58(r1)
    addi r6, r1, 0x59
    clrlwi r4, r0, 25
    b lbl_fn_80046EE0_00000EFC
lbl_fn_80046EE0_00000EF4:
    lwz r6, 0x60(r1)
    lwz r4, 0x5c(r1)
lbl_fn_80046EE0_00000EFC:
    lbz r0, 0x24(r1)
    add r7, r6, r4
    stb r0, 0x20(r1)
    addi r3, r1, 0x7c
    addi r8, r1, 0x20
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80046EE0_00000F18:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80046EE0_00000F2C
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_80046EE0_00000F2C:
    lwz r0, 0x7c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80046EE0_00000F40
    addi r3, r1, 0x7d
    b lbl_fn_80046EE0_00000F44
lbl_fn_80046EE0_00000F40:
    lwz r3, 0x84(r1)
lbl_fn_80046EE0_00000F44:
    bl fn_8006AA20
    cmpwi r3, 0x0
    bne lbl_fn_80046EE0_00001038
    addi r3, r1, 0x4c
    addi r4, r1, 0x7c
    bl fn_8006B594
    lwz r0, 0x7c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80046EE0_00000F8C
    lwz r4, 0x4c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80046EE0_00000F8C
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r4, 0x7c(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    b lbl_fn_80046EE0_00000FE4
lbl_fn_80046EE0_00000F8C:
    cmpwi r3, 0x0
    beq lbl_fn_80046EE0_00000F9C
    lwz r5, 0x80(r1)
    b lbl_fn_80046EE0_00000FA4
lbl_fn_80046EE0_00000F9C:
    lbz r0, 0x7c(r1)
    clrlwi r5, r0, 25
lbl_fn_80046EE0_00000FA4:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80046EE0_00000FC0
    lbz r0, 0x4c(r1)
    addi r6, r1, 0x4d
    clrlwi r4, r0, 25
    b lbl_fn_80046EE0_00000FC8
lbl_fn_80046EE0_00000FC0:
    lwz r6, 0x54(r1)
    lwz r4, 0x50(r1)
lbl_fn_80046EE0_00000FC8:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r3, r1, 0x7c
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80046EE0_00000FE4:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80046EE0_00000FF8
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_80046EE0_00000FF8:
    lwz r0, 0x7c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80046EE0_0000100C
    addi r3, r1, 0x7d
    b lbl_fn_80046EE0_00001010
lbl_fn_80046EE0_0000100C:
    lwz r3, 0x84(r1)
lbl_fn_80046EE0_00001010:
    bl fn_8006AA20
    cmpwi r3, 0x0
    bne lbl_fn_80046EE0_00001038
    lwz r0, 0x7c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80046EE0_00001030
    lwz r3, 0x84(r1)
    bl dtor_80084684
lbl_fn_80046EE0_00001030:
    li r3, 0x0
    b lbl_fn_80046EE0_00001418
lbl_fn_80046EE0_00001038:
    lwz r4, 0x7c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80046EE0_0000105C
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r4, 0x70(r1)
    stw r3, 0x74(r1)
    stw r0, 0x78(r1)
    b lbl_fn_80046EE0_000010A4
lbl_fn_80046EE0_0000105C:
    li r0, 0x0
    addi r26, r1, 0x70
    stw r0, 0x70(r1)
    mr r3, r26
    lwz r4, 0x80(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    mr r3, r26
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0x84(r1)
    li r4, 0x0
    lwz r0, 0x80(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80046EE0_000010A4:
    lis r3, lbl_80730F54@ha
    li r0, 0x0
    addi r3, r3, lbl_80730F54@l
    stw r0, 0x40(r1)
    addi r26, r3, 0x8
    addi r27, r1, 0x40
    stw r0, 0x44(r1)
    mr r3, r26
    stw r0, 0x48(r1)
    bl strlen
    mr r28, r3
    mr r3, r27
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r27
    stb r0, 0x8(r1)
    mr r6, r26
    add r7, r26, r28
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r27
    addi r3, r1, 0x70
    bl fn_8006AD24
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80046EE0_00001120
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_80046EE0_00001120:
    lwz r0, 0x70(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80046EE0_00001134
    addi r3, r1, 0x71
    b lbl_fn_80046EE0_00001138
lbl_fn_80046EE0_00001134:
    lwz r3, 0x78(r1)
lbl_fn_80046EE0_00001138:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_80046EE0_00001164
    lwz r0, 0x70(r1)
    mr r3, r30
    srwi. r0, r0, 31
    bne lbl_fn_80046EE0_0000115C
    addi r4, r1, 0x71
    b lbl_fn_80046EE0_00001160
lbl_fn_80046EE0_0000115C:
    lwz r4, 0x78(r1)
lbl_fn_80046EE0_00001160:
    bl fn_8004A3FC
lbl_fn_80046EE0_00001164:
    lwz r0, 0x7c(r1)
    addi r3, r30, 0x8
    srwi. r0, r0, 31
    bne lbl_fn_80046EE0_0000117C
    addi r4, r1, 0x7d
    b lbl_fn_80046EE0_00001180
lbl_fn_80046EE0_0000117C:
    lwz r4, 0x84(r1)
lbl_fn_80046EE0_00001180:
    bl fn_8059D8B4
    lwz r26, 0x12c(r30)
    bl fn_800827E0
    lis r31, lbl_80730F54@ha
    mr r4, r26
    addi r7, r31, lbl_80730F54@l
    li r5, 0x20
    mr r8, r7
    li r6, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x194(r30)
    mr r4, r3
    mr r5, r26
    addi r3, r30, 0x8
    bl fn_8059DD4C
    lwz r0, 0x8e0(r30)
    lwz r26, 0x154(r30)
    lwz r27, 0x158(r30)
    cmpwi r0, 0x0
    lwz r28, 0x15c(r30)
    lwz r29, 0x160(r30)
    lwz r12, 0x164(r30)
    lwz r11, 0x168(r30)
    lwz r10, 0x16c(r30)
    lwz r9, 0x170(r30)
    lwz r8, 0x174(r30)
    lwz r7, 0x178(r30)
    lwz r6, 0x17c(r30)
    lwz r5, 0x180(r30)
    lwz r4, 0x184(r30)
    lwz r3, 0x188(r30)
    lwz r0, 0x18c(r30)
    stw r26, 0x19c(r30)
    stw r27, 0x1a0(r30)
    stw r28, 0x1a4(r30)
    stw r29, 0x1a8(r30)
    stw r12, 0x1ac(r30)
    stw r11, 0x1b0(r30)
    stw r10, 0x1b4(r30)
    stw r9, 0x1b8(r30)
    stw r8, 0x1bc(r30)
    stw r7, 0x1c0(r30)
    stw r6, 0x1c4(r30)
    stw r5, 0x1c8(r30)
    stw r4, 0x1cc(r30)
    stw r3, 0x1d0(r30)
    stw r0, 0x1d4(r30)
    bne lbl_fn_80046EE0_00001284
    lwz r26, 0x124(r30)
    bl fn_800827E0
    addi r7, r31, lbl_80730F54@l
    mr r4, r26
    mr r8, r7
    li r5, 0x20
    li r6, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x198(r30)
    mr r4, r3
    mr r5, r26
    addi r3, r30, 0x8
    bl fn_8059DE68
lbl_fn_80046EE0_00001284:
    addi r3, r30, 0x1d8
    addi r4, r30, 0x8
    bl fn_8059EF94
    mr r26, r3
    addi r3, r30, 0x1d8
    addi r4, r30, 0x8
    bl fn_8059F100
    slwi r27, r3, 1
    bl fn_800827E0
    lis r31, lbl_80730F54@ha
    mr r4, r26
    addi r7, r31, lbl_80730F54@l
    li r5, 0x20
    mr r8, r7
    li r6, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x2c4(r30)
    bl fn_800827E0
    addi r7, r31, lbl_80730F54@l
    mr r4, r27
    mr r8, r7
    li r5, 0x20
    li r6, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x2c8(r30)
    mr r5, r26
    lwz r3, 0x2c4(r30)
    li r4, 0x0
    bl memset
    lwz r3, 0x2c8(r30)
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r5, 0x2c4(r30)
    mr r6, r26
    lwz r7, 0x2c8(r30)
    mr r8, r27
    addi r3, r30, 0x1d8
    addi r4, r30, 0x8
    bl fn_8059EBD8
    addi r3, r30, 0x364
    addi r4, r30, 0x8
    bl fn_80715DF0
    mr r26, r3
    bl fn_800827E0
    addi r7, r31, lbl_80730F54@l
    mr r4, r26
    mr r8, r7
    li r5, 0x20
    li r6, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x390(r30)
    mr r5, r3
    mr r6, r26
    addi r3, r30, 0x364
    addi r4, r30, 0x8
    bl fn_80715E50
    li r0, 0x20
    stw r0, 0x380(r30)
    addi r3, r30, 0x364
    addi r4, r30, 0x900
    bl fn_80715E90
    lis r4, 0x2d
    mr r3, r30
    addi r4, r4, 0x5000
    bl fn_80047B54
    bl fn_80624AB0
    clrlwi. r0, r3, 24
    bne lbl_fn_80046EE0_000013C0
    bl fn_80703F90
    li r4, 0x3
    bl fn_80704780
    b lbl_fn_80046EE0_000013E4
lbl_fn_80046EE0_000013C0:
    cmplwi r0, 0x2
    bne lbl_fn_80046EE0_000013D8
    bl fn_80703F90
    li r4, 0x2
    bl fn_80704780
    b lbl_fn_80046EE0_000013E4
lbl_fn_80046EE0_000013D8:
    bl fn_80703F90
    li r4, 0x0
    bl fn_80704780
lbl_fn_80046EE0_000013E4:
    li r0, 0x1
    stw r0, 0x4(r30)
    lwz r0, 0x70(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80046EE0_00001400
    lwz r3, 0x78(r1)
    bl dtor_80084684
lbl_fn_80046EE0_00001400:
    lwz r0, 0x7c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80046EE0_00001414
    lwz r3, 0x84(r1)
    bl dtor_80084684
lbl_fn_80046EE0_00001414:
    li r3, 0x1
lbl_fn_80046EE0_00001418:
    lmw r26, 0x88(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80047628(void)
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
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80047628_00001490
    lwz r4, 0x39c(r3)
    li r0, 0x0
    stw r0, 0x394(r3)
    cmpwi r4, 0x0
    stw r0, 0x398(r3)
    beq lbl_fn_80047628_00001484
    beq lbl_fn_80047628_0000147C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80047628_0000147C:
    li r0, 0x0
    stw r0, 0x39c(r31)
lbl_fn_80047628_00001484:
    addi r3, r31, 0x300
    li r4, 0x0
    bl fn_807178A0
lbl_fn_80047628_00001490:
    mr r3, r31
    li r4, 0x0
    bl fn_80047B54
    addi r3, r31, 0x1d8
    bl fn_8059EDE8
    addi r3, r31, 0x8
    bl fn_8059DA44
    lwz r30, 0x194(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_000014CC
    bl fn_800827E0
    mr r4, r30
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x194(r31)
lbl_fn_80047628_000014CC:
    lwz r30, 0x198(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_000014EC
    bl fn_800827E0
    mr r4, r30
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x198(r31)
lbl_fn_80047628_000014EC:
    lwz r30, 0x2c4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_0000150C
    bl fn_800827E0
    mr r4, r30
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x2c4(r31)
lbl_fn_80047628_0000150C:
    lwz r30, 0x2c8(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_0000152C
    bl fn_800827E0
    mr r4, r30
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x2c8(r31)
lbl_fn_80047628_0000152C:
    lwz r30, 0x390(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_0000154C
    bl fn_800827E0
    mr r4, r30
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x390(r31)
lbl_fn_80047628_0000154C:
    lwz r30, 0x8d4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_0000168C
    lwz r29, 0x0(r30)
    cmpwi r29, 0x0
    beq lbl_fn_80047628_000015E4
    lwz r28, 0x0(r29)
    cmpwi r28, 0x0
    beq lbl_fn_80047628_000015A0
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001584
    addi r3, r31, 0x8d0
    bl fn_8004A8FC
lbl_fn_80047628_00001584:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001598
    addi r3, r31, 0x8d0
    bl fn_8004A8FC
lbl_fn_80047628_00001598:
    mr r3, r28
    bl dtor_80084684
lbl_fn_80047628_000015A0:
    lwz r28, 0x4(r29)
    cmpwi r28, 0x0
    beq lbl_fn_80047628_000015DC
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_000015C0
    addi r3, r31, 0x8d0
    bl fn_8004A8FC
lbl_fn_80047628_000015C0:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_000015D4
    addi r3, r31, 0x8d0
    bl fn_8004A8FC
lbl_fn_80047628_000015D4:
    mr r3, r28
    bl dtor_80084684
lbl_fn_80047628_000015DC:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80047628_000015E4:
    lwz r28, 0x4(r30)
    cmpwi r28, 0x0
    beq lbl_fn_80047628_00001670
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80047628_0000162C
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001610
    addi r3, r31, 0x8d0
    bl fn_8004A8FC
lbl_fn_80047628_00001610:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001624
    addi r3, r31, 0x8d0
    bl fn_8004A8FC
lbl_fn_80047628_00001624:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80047628_0000162C:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80047628_00001668
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_0000164C
    addi r3, r31, 0x8d0
    bl fn_8004A8FC
lbl_fn_80047628_0000164C:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001660
    addi r3, r31, 0x8d0
    bl fn_8004A8FC
lbl_fn_80047628_00001660:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80047628_00001668:
    mr r3, r28
    bl dtor_80084684
lbl_fn_80047628_00001670:
    mr r3, r30
    bl dtor_80084684
    li r3, 0x0
    addi r0, r31, 0x8d4
    stw r3, 0x8d0(r31)
    stw r3, 0x8d4(r31)
    stw r0, 0x8dc(r31)
lbl_fn_80047628_0000168C:
    lwz r28, 0x8ec(r31)
    li r0, 0x0
    stw r0, 0x8e0(r31)
    cmpwi r28, 0x0
    beq lbl_fn_80047628_000017D4
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80047628_0000172C
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_000016E8
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_000016CC
    addi r3, r31, 0x8e8
    bl fn_8004A664
lbl_fn_80047628_000016CC:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_000016E0
    addi r3, r31, 0x8e8
    bl fn_8004A664
lbl_fn_80047628_000016E0:
    mr r3, r30
    bl dtor_80084684
lbl_fn_80047628_000016E8:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_00001724
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001708
    addi r3, r31, 0x8e8
    bl fn_8004A664
lbl_fn_80047628_00001708:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_0000171C
    addi r3, r31, 0x8e8
    bl fn_8004A664
lbl_fn_80047628_0000171C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_80047628_00001724:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80047628_0000172C:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80047628_000017B8
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_00001774
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001758
    addi r3, r31, 0x8e8
    bl fn_8004A664
lbl_fn_80047628_00001758:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_0000176C
    addi r3, r31, 0x8e8
    bl fn_8004A664
lbl_fn_80047628_0000176C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_80047628_00001774:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_000017B0
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001794
    addi r3, r31, 0x8e8
    bl fn_8004A664
lbl_fn_80047628_00001794:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_000017A8
    addi r3, r31, 0x8e8
    bl fn_8004A664
lbl_fn_80047628_000017A8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_80047628_000017B0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80047628_000017B8:
    mr r3, r28
    bl dtor_80084684
    li r3, 0x0
    addi r0, r31, 0x8ec
    stw r3, 0x8e8(r31)
    stw r3, 0x8ec(r31)
    stw r0, 0x8f0(r31)
lbl_fn_80047628_000017D4:
    lwz r28, 0x8f8(r31)
    cmpwi r28, 0x0
    beq lbl_fn_80047628_00001914
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80047628_0000186C
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_00001828
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_0000180C
    addi r3, r31, 0x8f4
    bl fn_8004A664
lbl_fn_80047628_0000180C:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001820
    addi r3, r31, 0x8f4
    bl fn_8004A664
lbl_fn_80047628_00001820:
    mr r3, r30
    bl dtor_80084684
lbl_fn_80047628_00001828:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_00001864
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001848
    addi r3, r31, 0x8f4
    bl fn_8004A664
lbl_fn_80047628_00001848:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_0000185C
    addi r3, r31, 0x8f4
    bl fn_8004A664
lbl_fn_80047628_0000185C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_80047628_00001864:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80047628_0000186C:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80047628_000018F8
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_000018B4
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_00001898
    addi r3, r31, 0x8f4
    bl fn_8004A664
lbl_fn_80047628_00001898:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_000018AC
    addi r3, r31, 0x8f4
    bl fn_8004A664
lbl_fn_80047628_000018AC:
    mr r3, r30
    bl dtor_80084684
lbl_fn_80047628_000018B4:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_80047628_000018F0
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_000018D4
    addi r3, r31, 0x8f4
    bl fn_8004A664
lbl_fn_80047628_000018D4:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80047628_000018E8
    addi r3, r31, 0x8f4
    bl fn_8004A664
lbl_fn_80047628_000018E8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_80047628_000018F0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80047628_000018F8:
    mr r3, r28
    bl dtor_80084684
    li r3, 0x0
    addi r0, r31, 0x8f8
    stw r3, 0x8f4(r31)
    stw r3, 0x8f8(r31)
    stw r0, 0x8fc(r31)
lbl_fn_80047628_00001914:
    lwz r3, 0x8e4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80047628_0000192C
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x8e4(r31)
lbl_fn_80047628_0000192C:
    bl fn_807186F0
    li r0, 0x0
    stw r0, 0x4(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80047B54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80047B54_00001A58
    lwz r0, 0x31c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80047B54_00001A08
    addi r30, r3, 0x304
    mr r3, r30
    bl fn_805F3130
    addi r3, r28, 0x31c
    bl fn_8070DC10
    mr r31, r3
    mr r3, r30
    bl fn_805F3210
    cmplw r29, r31
    beq lbl_fn_80047B54_00001A58
    addi r3, r28, 0x300
    bl fn_807177D0
    addi r3, r28, 0x300
    bl fn_80717750
    bl fn_800827E0
    lwz r4, 0x32c(r28)
    bl fn_80083AD4
    lwz r3, 0x39c(r28)
    li r0, 0x0
    stw r0, 0x32c(r28)
    cmpwi r3, 0x0
    stw r0, 0x394(r28)
    stw r0, 0x398(r28)
    beq lbl_fn_80047B54_00001A08
    beq lbl_fn_80047B54_00001A00
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80047B54_00001A00:
    li r0, 0x0
    stw r0, 0x39c(r28)
lbl_fn_80047B54_00001A08:
    cmpwi r29, 0x0
    beq lbl_fn_80047B54_00001A58
    bl fn_800827E0
    lis r7, lbl_80730F54@ha
    mr r4, r29
    addi r7, r7, lbl_80730F54@l
    li r5, 0x20
    mr r8, r7
    li r6, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x32c(r28)
    mr r5, r29
    li r4, 0x0
    bl memset
    lwz r4, 0x32c(r28)
    mr r5, r29
    addi r3, r28, 0x300
    bl fn_80717740
lbl_fn_80047B54_00001A58:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80047C74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80047C74_00001B10
    lwz r0, 0x408(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80047C74_00001AF8
    bl fn_800827E0
    lis r7, lbl_80730F54@ha
    lwz r4, 0x8c8(r31)
    addi r7, r7, lbl_80730F54@l
    li r5, 0x20
    mr r8, r7
    li r6, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x8c4(r31)
    li r4, 0x0
    lwz r5, 0x8c8(r31)
    bl memset
    lwz r12, 0x410(r31)
    addi r3, r31, 0x410
    lwz r4, 0x8c4(r31)
    lwz r12, 0x1c(r12)
    lwz r5, 0x8c8(r31)
    mtctr r12
    bctrl
lbl_fn_80047C74_00001AF8:
    bl fn_80711390
    li r4, 0x0
    bl fn_80711430
    lis r4, fn_80046220@ha
    addi r4, r4, fn_80046220@l
    bl fn_80710A80
lbl_fn_80047C74_00001B10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80047D20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80047D20_00001BA8
    lwz r0, 0x408(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80047D20_00001B70
    li r4, 0x0
    bl fn_8004A1D4
    lwz r12, 0x410(r30)
    addi r3, r30, 0x410
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_80047D20_00001B70:
    lwz r31, 0x8c4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_80047D20_00001B90
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x8c4(r30)
lbl_fn_80047D20_00001B90:
    bl fn_80711390
    li r4, 0x0
    bl fn_80711430
    lis r4, fn_80046224@ha
    addi r4, r4, fn_80046224@l
    bl fn_80710B40
lbl_fn_80047D20_00001BA8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80047DBC(void)
{
    nofralloc
    lwz r3, 0x2c(r4)
    li r0, 0x0
    stw r0, 0x30(r3)
    blr
}

asm void fn_80047DCC(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    stmw r27, 0x30c(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80047DCC_0000208C
    addi r3, r3, 0x1d8
    bl fn_8059F878
    lwz r0, 0x400(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80047DCC_00001DB8
    lis r27, lbl_80730F54@ha
    lwz r31, 0x3a8(r30)
    addi r27, r27, lbl_80730F54@l
    li r29, 0x3
    li r28, 0x4
    b lbl_fn_80047DCC_00001D54
lbl_fn_80047DCC_00001C1C:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80047DCC_00001D6C
    lwz r0, 0x2c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80047DCC_00001C88
    li r0, 0x1
    stw r0, 0x2c(r31)
    stw r0, 0x30(r31)
    stw r31, 0x1c8(r30)
    lwz r4, 0x4c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80047DCC_00001C74
    lis r7, fn_80047DBC@ha
    lwz r5, 0x40(r31)
    lwz r6, 0x3c(r31)
    addi r3, r30, 0x19c
    addi r7, r7, fn_80047DBC@l
    li r8, 0x2
    bl fn_805FA4E0
    cmpwi r3, 0x0
    bne lbl_fn_80047DCC_00001D6C
lbl_fn_80047DCC_00001C74:
    li r0, 0x4
    stw r0, 0x2c(r31)
    li r0, 0x0
    stw r0, 0x30(r31)
    b lbl_fn_80047DCC_00001D6C
lbl_fn_80047DCC_00001C88:
    cmpwi r0, 0x1
    bne lbl_fn_80047DCC_00001CE8
    li r0, 0x2
    stw r0, 0x2c(r31)
    li r0, 0x1
    stw r0, 0x30(r31)
    stw r31, 0x1c8(r30)
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80047DCC_00001CD4
    lis r7, fn_80047DBC@ha
    lwz r5, 0x48(r31)
    lwz r6, 0x44(r31)
    addi r3, r30, 0x19c
    addi r7, r7, fn_80047DBC@l
    li r8, 0x2
    bl fn_805FA4E0
    cmpwi r3, 0x0
    bne lbl_fn_80047DCC_00001D6C
lbl_fn_80047DCC_00001CD4:
    li r0, 0x4
    stw r0, 0x2c(r31)
    li r0, 0x0
    stw r0, 0x30(r31)
    b lbl_fn_80047DCC_00001D6C
lbl_fn_80047DCC_00001CE8:
    cmpwi r0, 0x2
    bne lbl_fn_80047DCC_00001D1C
    stw r29, 0x2c(r31)
    addi r3, r30, 0x1d8
    lwz r4, 0x20(r31)
    lwz r5, 0x4c(r31)
    lwz r6, 0x50(r31)
    subi r4, r4, 0x1
    bl fn_805A1C04
    cmpwi r3, 0x0
    bne lbl_fn_80047DCC_00001D50
    stw r28, 0x2c(r31)
    b lbl_fn_80047DCC_00001D50
lbl_fn_80047DCC_00001D1C:
    cmpwi r0, 0x4
    bne lbl_fn_80047DCC_00001D50
    mr r5, r31
    addi r3, r1, 0x208
    addi r4, r27, 0x11
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    cmpwi r3, 0x0
    beq lbl_fn_80047DCC_00001D4C
    addi r4, r1, 0x208
    bl fn_800697D8
lbl_fn_80047DCC_00001D4C:
    stw r29, 0x2c(r31)
lbl_fn_80047DCC_00001D50:
    addi r31, r31, 0x54
lbl_fn_80047DCC_00001D54:
    lwz r0, 0x3a0(r30)
    lwz r3, 0x3a8(r30)
    mulli r0, r0, 0x54
    add r0, r3, r0
    cmplw r31, r0
    bne lbl_fn_80047DCC_00001C1C
lbl_fn_80047DCC_00001D6C:
    lwz r0, 0x3a0(r30)
    li r3, 0x0
    lwz r4, 0x3a8(r30)
    mulli r0, r0, 0x54
    stw r3, 0x400(r30)
    add r0, r4, r0
    b lbl_fn_80047DCC_00001DAC
lbl_fn_80047DCC_00001D88:
    lwz r3, 0x2c(r4)
    cmpwi r3, 0x3
    beq lbl_fn_80047DCC_00001DA8
    cmpwi r3, 0x4
    beq lbl_fn_80047DCC_00001DA8
    li r0, 0x1
    stw r0, 0x400(r30)
    b lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001DA8:
    addi r4, r4, 0x54
lbl_fn_80047DCC_00001DAC:
    cmplw r4, r0
    bne lbl_fn_80047DCC_00001D88
    b lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001DB8:
    lwz r0, 0x404(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80047DCC_00001F24
    lwz r0, 0x3dc(r30)
    addi r27, r30, 0x3ac
    cmpwi r0, 0x0
    bne lbl_fn_80047DCC_0000208C
    lwz r0, 0x2c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80047DCC_00001E34
    lwz r4, 0x4c(r27)
    li r0, 0x1
    stw r0, 0x2c(r27)
    cmpwi r4, 0x0
    stw r0, 0x30(r27)
    stw r27, 0x1c8(r30)
    beq lbl_fn_80047DCC_00001E20
    lis r7, fn_80047DBC@ha
    lwz r5, 0x40(r27)
    lwz r6, 0x3c(r27)
    addi r3, r30, 0x19c
    addi r7, r7, fn_80047DBC@l
    li r8, 0x2
    bl fn_805FA4E0
    cmpwi r3, 0x0
    bne lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001E20:
    li r3, 0x4
    li r0, 0x0
    stw r3, 0x2c(r27)
    stw r0, 0x30(r27)
    b lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001E34:
    cmpwi r0, 0x1
    bne lbl_fn_80047DCC_00001E94
    lwz r4, 0x50(r27)
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x2c(r27)
    cmpwi r4, 0x0
    stw r0, 0x30(r27)
    stw r27, 0x1c8(r30)
    beq lbl_fn_80047DCC_00001E80
    lis r7, fn_80047DBC@ha
    lwz r5, 0x48(r27)
    lwz r6, 0x44(r27)
    addi r3, r30, 0x19c
    addi r7, r7, fn_80047DBC@l
    li r8, 0x2
    bl fn_805FA4E0
    cmpwi r3, 0x0
    bne lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001E80:
    li r3, 0x4
    li r0, 0x0
    stw r3, 0x2c(r27)
    stw r0, 0x30(r27)
    b lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001E94:
    cmpwi r0, 0x2
    bne lbl_fn_80047DCC_00001ED8
    lwz r4, 0x20(r27)
    li r0, 0x3
    stw r0, 0x2c(r27)
    addi r3, r30, 0x1d8
    lwz r5, 0x4c(r27)
    subi r4, r4, 0x1
    lwz r6, 0x50(r27)
    bl fn_805A1C04
    cmpwi r3, 0x0
    bne lbl_fn_80047DCC_00001ECC
    li r0, 0x4
    stw r0, 0x2c(r27)
lbl_fn_80047DCC_00001ECC:
    li r0, 0x0
    stw r0, 0x404(r30)
    b lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001ED8:
    cmpwi r0, 0x4
    bne lbl_fn_80047DCC_0000208C
    lis r4, lbl_80730F54@ha
    mr r5, r27
    addi r4, r4, lbl_80730F54@l
    addi r3, r1, 0x108
    addi r4, r4, 0x31
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    cmpwi r3, 0x0
    beq lbl_fn_80047DCC_00001F10
    addi r4, r1, 0x108
    bl fn_800697D8
lbl_fn_80047DCC_00001F10:
    li r3, 0x3
    li r0, 0x0
    stw r3, 0x2c(r27)
    stw r0, 0x404(r30)
    b lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001F24:
    lis r29, lbl_80730F54@ha
    lwz r31, 0x39c(r30)
    addi r29, r29, lbl_80730F54@l
    li r27, 0x3
    li r28, 0x4
    b lbl_fn_80047DCC_00002074
lbl_fn_80047DCC_00001F3C:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80047DCC_0000208C
    lwz r0, 0x2c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80047DCC_00001FA8
    li r0, 0x1
    stw r0, 0x2c(r31)
    stw r0, 0x30(r31)
    stw r31, 0x1c8(r30)
    lwz r4, 0x4c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80047DCC_00001F94
    lis r7, fn_80047DBC@ha
    lwz r5, 0x40(r31)
    lwz r6, 0x3c(r31)
    addi r3, r30, 0x19c
    addi r7, r7, fn_80047DBC@l
    li r8, 0x2
    bl fn_805FA4E0
    cmpwi r3, 0x0
    bne lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001F94:
    li r0, 0x4
    stw r0, 0x2c(r31)
    li r0, 0x0
    stw r0, 0x30(r31)
    b lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001FA8:
    cmpwi r0, 0x1
    bne lbl_fn_80047DCC_00002008
    li r0, 0x2
    stw r0, 0x2c(r31)
    li r0, 0x1
    stw r0, 0x30(r31)
    stw r31, 0x1c8(r30)
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80047DCC_00001FF4
    lis r7, fn_80047DBC@ha
    lwz r5, 0x48(r31)
    lwz r6, 0x44(r31)
    addi r3, r30, 0x19c
    addi r7, r7, fn_80047DBC@l
    li r8, 0x2
    bl fn_805FA4E0
    cmpwi r3, 0x0
    bne lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00001FF4:
    li r0, 0x4
    stw r0, 0x2c(r31)
    li r0, 0x0
    stw r0, 0x30(r31)
    b lbl_fn_80047DCC_0000208C
lbl_fn_80047DCC_00002008:
    cmpwi r0, 0x2
    bne lbl_fn_80047DCC_0000203C
    stw r27, 0x2c(r31)
    addi r3, r30, 0x1d8
    lwz r4, 0x20(r31)
    lwz r5, 0x4c(r31)
    lwz r6, 0x50(r31)
    subi r4, r4, 0x1
    bl fn_805A1C04
    cmpwi r3, 0x0
    bne lbl_fn_80047DCC_00002070
    stw r28, 0x2c(r31)
    b lbl_fn_80047DCC_00002070
lbl_fn_80047DCC_0000203C:
    cmpwi r0, 0x4
    bne lbl_fn_80047DCC_00002070
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r29, 0x11
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    cmpwi r3, 0x0
    beq lbl_fn_80047DCC_0000206C
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80047DCC_0000206C:
    stw r27, 0x2c(r31)
lbl_fn_80047DCC_00002070:
    addi r31, r31, 0x54
lbl_fn_80047DCC_00002074:
    lwz r0, 0x394(r30)
    lwz r3, 0x39c(r30)
    mulli r0, r0, 0x54
    add r0, r3, r0
    cmplw r31, r0
    bne lbl_fn_80047DCC_00001F3C
lbl_fn_80047DCC_0000208C:
    lmw r27, 0x30c(r1)
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}

asm void fn_8004829C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stmw r21, 0x84(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lwz r0, 0x2f8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8004829C_00002214
    li r0, 0x0
    stw r0, 0x2fc(r3)
    mr r21, r29
    li r22, 0x0
    b lbl_fn_8004829C_000021D4
lbl_fn_8004829C_000020DC:
    lwz r23, 0x0(r21)
    cmpwi r23, 0x0
    beq lbl_fn_8004829C_000021CC
    mr r3, r23
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8004829C_000021CC
    lwz r0, 0x8e0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8004829C_00002178
    mr r3, r23
    bl fn_800DC6B4
    lwz r4, 0x8d4(r28)
    addi r5, r28, 0x8d4
    b lbl_fn_8004829C_00002134
lbl_fn_8004829C_00002118:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_8004829C_00002130
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_8004829C_00002134
lbl_fn_8004829C_00002130:
    lwz r4, 0x4(r4)
lbl_fn_8004829C_00002134:
    cmpwi r4, 0x0
    bne lbl_fn_8004829C_00002118
    addi r0, r28, 0x8d4
    cmplw r5, r0
    beq lbl_fn_8004829C_00002154
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_8004829C_00002158
lbl_fn_8004829C_00002154:
    addi r5, r28, 0x8d4
lbl_fn_8004829C_00002158:
    addi r0, r28, 0x8d4
    cmplw r5, r0
    beq lbl_fn_8004829C_00002170
    lwz r3, 0x10(r5)
    addi r4, r3, 0x1
    b lbl_fn_8004829C_0000219C
lbl_fn_8004829C_00002170:
    li r4, 0x0
    b lbl_fn_8004829C_0000219C
lbl_fn_8004829C_00002178:
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8004829C_00002198
    mr r4, r23
    addi r3, r28, 0x8
    bl fn_8059E330
    addi r4, r3, 0x1
    b lbl_fn_8004829C_0000219C
lbl_fn_8004829C_00002198:
    li r4, 0x0
lbl_fn_8004829C_0000219C:
    addi r3, r28, 0x8
    subi r4, r4, 0x1
    addi r5, r1, 0x8
    bl fn_8059E390
    lwz r3, 0x2fc(r28)
    lwz r0, 0x14(r1)
    add r3, r3, r0
    stw r3, 0x2fc(r28)
    lwz r0, 0x1c(r1)
    add r3, r3, r0
    addi r0, r3, 0x100
    stw r0, 0x2fc(r28)
lbl_fn_8004829C_000021CC:
    addi r21, r21, 0x4
    addi r22, r22, 0x1
lbl_fn_8004829C_000021D4:
    cmplw r22, r30
    blt lbl_fn_8004829C_000020DC
    bl fn_800827E0
    lis r7, lbl_80730F54@ha
    lwz r4, 0x2fc(r28)
    addi r7, r7, lbl_80730F54@l
    li r5, 0x20
    mr r8, r7
    li r6, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x2f8(r28)
    li r4, 0x0
    lwz r5, 0x2fc(r28)
    bl memset
lbl_fn_8004829C_00002214:
    lwz r0, 0x2e8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8004829C_00002230
    lwz r4, 0x2f8(r28)
    addi r3, r28, 0x2cc
    lwz r5, 0x2fc(r28)
    bl fn_80717740
lbl_fn_8004829C_00002230:
    lis r25, lbl_80730F54@ha
    li r31, 0x0
    addi r25, r25, lbl_80730F54@l
    lis r26, fn_800465E8@ha
    li r23, 0x0
    li r24, 0x1
    li r27, 0x8
    b lbl_fn_8004829C_00002740
lbl_fn_8004829C_00002250:
    lwz r21, 0x0(r29)
    cmpwi r21, 0x0
    beq lbl_fn_8004829C_00002738
    mr r3, r21
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8004829C_00002738
    lwz r0, 0x8e0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8004829C_000022EC
    mr r3, r21
    bl fn_800DC6B4
    lwz r4, 0x8d4(r28)
    addi r5, r28, 0x8d4
    b lbl_fn_8004829C_000022A8
lbl_fn_8004829C_0000228C:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_8004829C_000022A4
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_8004829C_000022A8
lbl_fn_8004829C_000022A4:
    lwz r4, 0x4(r4)
lbl_fn_8004829C_000022A8:
    cmpwi r4, 0x0
    bne lbl_fn_8004829C_0000228C
    addi r0, r28, 0x8d4
    cmplw r5, r0
    beq lbl_fn_8004829C_000022C8
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_8004829C_000022CC
lbl_fn_8004829C_000022C8:
    addi r5, r28, 0x8d4
lbl_fn_8004829C_000022CC:
    addi r0, r28, 0x8d4
    cmplw r5, r0
    beq lbl_fn_8004829C_000022E4
    lwz r3, 0x10(r5)
    addi r21, r3, 0x1
    b lbl_fn_8004829C_00002310
lbl_fn_8004829C_000022E4:
    li r21, 0x0
    b lbl_fn_8004829C_00002310
lbl_fn_8004829C_000022EC:
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8004829C_0000230C
    mr r4, r21
    addi r3, r28, 0x8
    bl fn_8059E330
    addi r21, r3, 0x1
    b lbl_fn_8004829C_00002310
lbl_fn_8004829C_0000230C:
    li r21, 0x0
lbl_fn_8004829C_00002310:
    stw r23, 0x40(r1)
    addi r3, r1, 0x20
    addi r4, r25, 0x57
    stw r24, 0x44(r1)
    stw r23, 0x48(r1)
    stw r23, 0x4c(r1)
    stw r23, 0x50(r1)
    stw r23, 0x6c(r1)
    stw r23, 0x70(r1)
    lwz r5, 0x0(r29)
    crclr 6
    bl sprintf
    stw r21, 0x40(r1)
    addi r3, r28, 0x8
    subi r4, r21, 0x1
    addi r5, r1, 0x54
    bl fn_8059E390
    lwz r12, 0x2cc(r28)
    addi r3, r28, 0x2cc
    lwz r4, 0x60(r1)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r3, 0x6c(r1)
    addi r3, r28, 0x2cc
    lwz r4, 0x68(r1)
    lwz r12, 0x2cc(r28)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r3, 0x70(r1)
    addi r3, r28, 0x2cc
    bl fn_80717840
    addi r22, r28, 0x2d0
    mr r3, r22
    bl fn_805F3130
    addi r3, r28, 0x2e8
    bl fn_8070DC00
    mr r21, r3
    mr r3, r22
    bl fn_805F3210
    stw r21, 0x48(r1)
    lwz r0, 0x3a8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8004829C_000023D0
    lwz r0, 0x3a4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8004829C_0000251C
lbl_fn_8004829C_000023D0:
    lwz r0, 0x3a4(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_8004829C_00002674
    li r3, 0x2b0
    li r4, 0x0
    la r5, lbl_8087D71C
    la r6, lbl_8087D718
    li r7, 0x0
    bl fn_800846FC
    addi r4, r26, fn_800465E8@l
    li r5, 0x0
    li r6, 0x54
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x3a8(r28)
    mr r22, r3
    cmpwi r0, 0x0
    beq lbl_fn_8004829C_00002510
    lwz r3, 0x3a0(r28)
    li r0, 0x8
    cmplwi r3, 0x8
    bge lbl_fn_8004829C_0000242C
    mr r0, r3
lbl_fn_8004829C_0000242C:
    mr r5, r22
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8004829C_000024FC
lbl_fn_8004829C_00002440:
    lwz r0, 0x3a8(r28)
    add r3, r0, r4
    addi r4, r4, 0x54
    lwz r0, 0x4(r3)
    lwz r6, 0x0(r3)
    stw r6, 0x0(r5)
    stw r0, 0x4(r5)
    lwz r0, 0xc(r3)
    lwz r6, 0x8(r3)
    stw r6, 0x8(r5)
    stw r0, 0xc(r5)
    lwz r0, 0x14(r3)
    lwz r6, 0x10(r3)
    stw r6, 0x10(r5)
    stw r0, 0x14(r5)
    lwz r0, 0x1c(r3)
    lwz r6, 0x18(r3)
    stw r6, 0x18(r5)
    stw r0, 0x1c(r5)
    lwz r0, 0x20(r3)
    stw r0, 0x20(r5)
    lwz r0, 0x24(r3)
    stw r0, 0x24(r5)
    lwz r0, 0x28(r3)
    stw r0, 0x28(r5)
    lwz r0, 0x2c(r3)
    stw r0, 0x2c(r5)
    lwz r0, 0x30(r3)
    stw r0, 0x30(r5)
    lwz r0, 0x38(r3)
    lwz r6, 0x34(r3)
    stw r6, 0x34(r5)
    stw r0, 0x38(r5)
    lwz r0, 0x40(r3)
    lwz r6, 0x3c(r3)
    stw r6, 0x3c(r5)
    stw r0, 0x40(r5)
    lwz r0, 0x48(r3)
    lwz r6, 0x44(r3)
    stw r6, 0x44(r5)
    stw r0, 0x48(r5)
    lwz r0, 0x4c(r3)
    stw r0, 0x4c(r5)
    lwz r0, 0x50(r3)
    stw r0, 0x50(r5)
    addi r5, r5, 0x54
    bdnz lbl_fn_8004829C_00002440
lbl_fn_8004829C_000024FC:
    lwz r3, 0x3a8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8004829C_00002510
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8004829C_00002510:
    stw r22, 0x3a8(r28)
    stw r27, 0x3a4(r28)
    b lbl_fn_8004829C_00002674
lbl_fn_8004829C_0000251C:
    lwz r3, 0x3a0(r28)
    cmplw r3, r0
    blt lbl_fn_8004829C_00002674
    slwi r22, r3, 1
    cmplw r0, r22
    bgt lbl_fn_8004829C_00002674
    mulli r3, r22, 0x54
    li r4, 0x0
    la r5, lbl_8087D71C
    la r6, lbl_8087D718
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r22
    addi r4, r26, fn_800465E8@l
    li r5, 0x0
    li r6, 0x54
    bl fn_80695720
    lwz r0, 0x3a8(r28)
    mr r21, r3
    cmpwi r0, 0x0
    beq lbl_fn_8004829C_0000266C
    lwz r3, 0x3a0(r28)
    mr r0, r22
    cmplw r22, r3
    ble lbl_fn_8004829C_00002588
    mr r0, r3
lbl_fn_8004829C_00002588:
    mr r5, r21
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8004829C_00002658
lbl_fn_8004829C_0000259C:
    lwz r0, 0x3a8(r28)
    add r3, r0, r4
    addi r4, r4, 0x54
    lwz r0, 0x4(r3)
    lwz r6, 0x0(r3)
    stw r6, 0x0(r5)
    stw r0, 0x4(r5)
    lwz r0, 0xc(r3)
    lwz r6, 0x8(r3)
    stw r6, 0x8(r5)
    stw r0, 0xc(r5)
    lwz r0, 0x14(r3)
    lwz r6, 0x10(r3)
    stw r6, 0x10(r5)
    stw r0, 0x14(r5)
    lwz r0, 0x1c(r3)
    lwz r6, 0x18(r3)
    stw r6, 0x18(r5)
    stw r0, 0x1c(r5)
    lwz r0, 0x20(r3)
    stw r0, 0x20(r5)
    lwz r0, 0x24(r3)
    stw r0, 0x24(r5)
    lwz r0, 0x28(r3)
    stw r0, 0x28(r5)
    lwz r0, 0x2c(r3)
    stw r0, 0x2c(r5)
    lwz r0, 0x30(r3)
    stw r0, 0x30(r5)
    lwz r0, 0x38(r3)
    lwz r6, 0x34(r3)
    stw r6, 0x34(r5)
    stw r0, 0x38(r5)
    lwz r0, 0x40(r3)
    lwz r6, 0x3c(r3)
    stw r6, 0x3c(r5)
    stw r0, 0x40(r5)
    lwz r0, 0x48(r3)
    lwz r6, 0x44(r3)
    stw r6, 0x44(r5)
    stw r0, 0x48(r5)
    lwz r0, 0x4c(r3)
    stw r0, 0x4c(r5)
    lwz r0, 0x50(r3)
    stw r0, 0x50(r5)
    addi r5, r5, 0x54
    bdnz lbl_fn_8004829C_0000259C
lbl_fn_8004829C_00002658:
    lwz r3, 0x3a8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8004829C_0000266C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8004829C_0000266C:
    stw r21, 0x3a8(r28)
    stw r22, 0x3a4(r28)
lbl_fn_8004829C_00002674:
    lwz r0, 0x3a0(r28)
    lwz r5, 0x3a8(r28)
    mulli r3, r0, 0x54
    lwz r0, 0x24(r1)
    lwz r4, 0x20(r1)
    stwux r4, r3, r5
    stw r0, 0x4(r3)
    lwz r0, 0x2c(r1)
    lwz r4, 0x28(r1)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, 0x34(r1)
    lwz r4, 0x30(r1)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, 0x3c(r1)
    lwz r4, 0x38(r1)
    stw r4, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, 0x40(r1)
    stw r0, 0x20(r3)
    lwz r0, 0x44(r1)
    stw r0, 0x24(r3)
    lwz r0, 0x48(r1)
    stw r0, 0x28(r3)
    lwz r0, 0x4c(r1)
    stw r0, 0x2c(r3)
    lwz r0, 0x50(r1)
    stw r0, 0x30(r3)
    lwz r0, 0x58(r1)
    lwz r4, 0x54(r1)
    stw r4, 0x34(r3)
    stw r0, 0x38(r3)
    lwz r0, 0x60(r1)
    lwz r4, 0x5c(r1)
    stw r4, 0x3c(r3)
    stw r0, 0x40(r3)
    lwz r0, 0x68(r1)
    lwz r4, 0x64(r1)
    stw r4, 0x44(r3)
    stw r0, 0x48(r3)
    lwz r0, 0x6c(r1)
    stw r0, 0x4c(r3)
    lwz r0, 0x70(r1)
    stw r0, 0x50(r3)
    lwz r3, 0x3a0(r28)
    stw r24, 0x400(r28)
    addi r0, r3, 0x1
    stw r0, 0x3a0(r28)
lbl_fn_8004829C_00002738:
    addi r29, r29, 0x4
    addi r31, r31, 0x1
lbl_fn_8004829C_00002740:
    cmplw r31, r30
    blt lbl_fn_8004829C_00002250
    lmw r21, 0x84(r1)
    li r3, 0x1
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8004895C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004895C_000027E4
    lwz r0, 0x2e8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004895C_000027B0
    addi r3, r3, 0x2cc
    bl fn_807177D0
    addi r3, r31, 0x2cc
    bl fn_80717750
    bl fn_800827E0
    lwz r4, 0x2f8(r31)
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x2f8(r31)
lbl_fn_8004895C_000027B0:
    lwz r3, 0x3a8(r31)
    li r0, 0x0
    stw r0, 0x3a0(r31)
    cmpwi r3, 0x0
    stw r0, 0x3a4(r31)
    beq lbl_fn_8004895C_000027DC
    beq lbl_fn_8004895C_000027D4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8004895C_000027D4:
    li r0, 0x0
    stw r0, 0x3a8(r31)
lbl_fn_8004895C_000027DC:
    li r0, 0x0
    stw r0, 0x400(r31)
lbl_fn_8004895C_000027E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800489F4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r4
    stw r29, 0x64(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800489F4_0000282C
    li r3, 0x1
    b lbl_fn_800489F4_00002D74
lbl_fn_800489F4_0000282C:
    cmpwi r4, 0x0
    beq lbl_fn_800489F4_00002844
    mr r3, r30
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_800489F4_0000284C
lbl_fn_800489F4_00002844:
    li r3, 0x0
    b lbl_fn_800489F4_00002D74
lbl_fn_800489F4_0000284C:
    lwz r0, 0x8e0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800489F4_000028CC
    mr r3, r30
    bl fn_800DC6B4
    lwz r4, 0x8d4(r29)
    addi r5, r29, 0x8d4
    b lbl_fn_800489F4_00002888
lbl_fn_800489F4_0000286C:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_800489F4_00002884
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_800489F4_00002888
lbl_fn_800489F4_00002884:
    lwz r4, 0x4(r4)
lbl_fn_800489F4_00002888:
    cmpwi r4, 0x0
    bne lbl_fn_800489F4_0000286C
    addi r0, r29, 0x8d4
    cmplw r5, r0
    beq lbl_fn_800489F4_000028A8
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_800489F4_000028AC
lbl_fn_800489F4_000028A8:
    addi r5, r29, 0x8d4
lbl_fn_800489F4_000028AC:
    addi r0, r29, 0x8d4
    cmplw r5, r0
    beq lbl_fn_800489F4_000028C4
    lwz r3, 0x10(r5)
    addi r31, r3, 0x1
    b lbl_fn_800489F4_000028F0
lbl_fn_800489F4_000028C4:
    li r31, 0x0
    b lbl_fn_800489F4_000028F0
lbl_fn_800489F4_000028CC:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800489F4_000028EC
    mr r4, r30
    addi r3, r29, 0x8
    bl fn_8059E330
    addi r31, r3, 0x1
    b lbl_fn_800489F4_000028F0
lbl_fn_800489F4_000028EC:
    li r31, 0x0
lbl_fn_800489F4_000028F0:
    lwz r0, 0x394(r29)
    lwz r5, 0x39c(r29)
    mulli r0, r0, 0x54
    add r3, r5, r0
    b lbl_fn_800489F4_00002928
lbl_fn_800489F4_00002904:
    lwz r0, 0x20(r5)
    cmplw r31, r0
    bne lbl_fn_800489F4_00002924
    lwz r4, 0x24(r5)
    li r3, 0x1
    addi r0, r4, 0x1
    stw r0, 0x24(r5)
    b lbl_fn_800489F4_00002D74
lbl_fn_800489F4_00002924:
    addi r5, r5, 0x54
lbl_fn_800489F4_00002928:
    cmplw r5, r3
    bne lbl_fn_800489F4_00002904
    lis r4, lbl_80730F54@ha
    li r6, 0x0
    addi r4, r4, lbl_80730F54@l
    li r0, 0x1
    stw r6, 0x28(r1)
    mr r5, r30
    addi r3, r1, 0x8
    addi r4, r4, 0x57
    stw r0, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r6, 0x34(r1)
    stw r6, 0x38(r1)
    stw r6, 0x54(r1)
    stw r6, 0x58(r1)
    crclr 6
    bl sprintf
    stw r31, 0x28(r1)
    addi r3, r29, 0x8
    subi r4, r31, 0x1
    addi r5, r1, 0x3c
    bl fn_8059E390
    lwz r12, 0x300(r29)
    addi r3, r29, 0x300
    lwz r4, 0x48(r1)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r3, 0x54(r1)
    addi r3, r29, 0x300
    lwz r4, 0x50(r1)
    lwz r12, 0x300(r29)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r3, 0x58(r1)
    addi r3, r29, 0x300
    bl fn_80717840
    addi r31, r29, 0x304
    mr r3, r31
    bl fn_805F3130
    addi r3, r29, 0x31c
    bl fn_8070DC00
    mr r30, r3
    mr r3, r31
    bl fn_805F3210
    stw r30, 0x30(r1)
    lwz r0, 0x39c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800489F4_00002A00
    lwz r0, 0x398(r29)
    cmpwi r0, 0x0
    bne lbl_fn_800489F4_00002B54
lbl_fn_800489F4_00002A00:
    lwz r0, 0x398(r29)
    cmplwi r0, 0x8
    bgt lbl_fn_800489F4_00002CB0
    li r3, 0x2b0
    li r4, 0x0
    la r5, lbl_8087D71C
    la r6, lbl_8087D718
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800465E8@ha
    li r5, 0x0
    addi r4, r4, fn_800465E8@l
    li r6, 0x54
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x39c(r29)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_800489F4_00002B44
    lwz r3, 0x394(r29)
    li r0, 0x8
    cmplwi r3, 0x8
    bge lbl_fn_800489F4_00002A60
    mr r0, r3
lbl_fn_800489F4_00002A60:
    mr r4, r31
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800489F4_00002B30
lbl_fn_800489F4_00002A74:
    lwz r0, 0x39c(r29)
    add r6, r0, r3
    addi r3, r3, 0x54
    lwz r0, 0x4(r6)
    lwz r5, 0x0(r6)
    stw r5, 0x0(r4)
    stw r0, 0x4(r4)
    lwz r0, 0xc(r6)
    lwz r5, 0x8(r6)
    stw r5, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x14(r6)
    lwz r5, 0x10(r6)
    stw r5, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x1c(r6)
    lwz r5, 0x18(r6)
    stw r5, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x20(r6)
    stw r0, 0x20(r4)
    lwz r0, 0x24(r6)
    stw r0, 0x24(r4)
    lwz r0, 0x28(r6)
    stw r0, 0x28(r4)
    lwz r0, 0x2c(r6)
    stw r0, 0x2c(r4)
    lwz r0, 0x30(r6)
    stw r0, 0x30(r4)
    lwz r0, 0x38(r6)
    lwz r5, 0x34(r6)
    stw r5, 0x34(r4)
    stw r0, 0x38(r4)
    lwz r0, 0x40(r6)
    lwz r5, 0x3c(r6)
    stw r5, 0x3c(r4)
    stw r0, 0x40(r4)
    lwz r0, 0x48(r6)
    lwz r5, 0x44(r6)
    stw r5, 0x44(r4)
    stw r0, 0x48(r4)
    lwz r0, 0x4c(r6)
    stw r0, 0x4c(r4)
    lwz r0, 0x50(r6)
    stw r0, 0x50(r4)
    addi r4, r4, 0x54
    bdnz lbl_fn_800489F4_00002A74
lbl_fn_800489F4_00002B30:
    lwz r3, 0x39c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800489F4_00002B44
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800489F4_00002B44:
    li r0, 0x8
    stw r31, 0x39c(r29)
    stw r0, 0x398(r29)
    b lbl_fn_800489F4_00002CB0
lbl_fn_800489F4_00002B54:
    lwz r3, 0x394(r29)
    cmplw r3, r0
    blt lbl_fn_800489F4_00002CB0
    slwi r31, r3, 1
    cmplw r0, r31
    bgt lbl_fn_800489F4_00002CB0
    mulli r3, r31, 0x54
    li r4, 0x0
    la r5, lbl_8087D71C
    la r6, lbl_8087D718
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800465E8@ha
    mr r7, r31
    addi r4, r4, fn_800465E8@l
    li r5, 0x0
    li r6, 0x54
    bl fn_80695720
    lwz r0, 0x39c(r29)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_800489F4_00002CA8
    lwz r3, 0x394(r29)
    mr r0, r31
    cmplw r31, r3
    ble lbl_fn_800489F4_00002BC4
    mr r0, r3
lbl_fn_800489F4_00002BC4:
    mr r4, r30
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800489F4_00002C94
lbl_fn_800489F4_00002BD8:
    lwz r0, 0x39c(r29)
    add r6, r0, r3
    addi r3, r3, 0x54
    lwz r0, 0x4(r6)
    lwz r5, 0x0(r6)
    stw r5, 0x0(r4)
    stw r0, 0x4(r4)
    lwz r0, 0xc(r6)
    lwz r5, 0x8(r6)
    stw r5, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x14(r6)
    lwz r5, 0x10(r6)
    stw r5, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x1c(r6)
    lwz r5, 0x18(r6)
    stw r5, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x20(r6)
    stw r0, 0x20(r4)
    lwz r0, 0x24(r6)
    stw r0, 0x24(r4)
    lwz r0, 0x28(r6)
    stw r0, 0x28(r4)
    lwz r0, 0x2c(r6)
    stw r0, 0x2c(r4)
    lwz r0, 0x30(r6)
    stw r0, 0x30(r4)
    lwz r0, 0x38(r6)
    lwz r5, 0x34(r6)
    stw r5, 0x34(r4)
    stw r0, 0x38(r4)
    lwz r0, 0x40(r6)
    lwz r5, 0x3c(r6)
    stw r5, 0x3c(r4)
    stw r0, 0x40(r4)
    lwz r0, 0x48(r6)
    lwz r5, 0x44(r6)
    stw r5, 0x44(r4)
    stw r0, 0x48(r4)
    lwz r0, 0x4c(r6)
    stw r0, 0x4c(r4)
    lwz r0, 0x50(r6)
    stw r0, 0x50(r4)
    addi r4, r4, 0x54
    bdnz lbl_fn_800489F4_00002BD8
lbl_fn_800489F4_00002C94:
    lwz r3, 0x39c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800489F4_00002CA8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800489F4_00002CA8:
    stw r30, 0x39c(r29)
    stw r31, 0x398(r29)
lbl_fn_800489F4_00002CB0:
    lwz r0, 0x394(r29)
    li r3, 0x1
    lwz r6, 0x39c(r29)
    mulli r5, r0, 0x54
    lwz r0, 0xc(r1)
    lwz r4, 0x8(r1)
    stwux r4, r5, r6
    stw r0, 0x4(r5)
    lwz r0, 0x14(r1)
    lwz r4, 0x10(r1)
    stw r4, 0x8(r5)
    stw r0, 0xc(r5)
    lwz r0, 0x1c(r1)
    lwz r4, 0x18(r1)
    stw r4, 0x10(r5)
    stw r0, 0x14(r5)
    lwz r0, 0x24(r1)
    lwz r4, 0x20(r1)
    stw r4, 0x18(r5)
    stw r0, 0x1c(r5)
    lwz r0, 0x28(r1)
    stw r0, 0x20(r5)
    lwz r0, 0x2c(r1)
    stw r0, 0x24(r5)
    lwz r0, 0x30(r1)
    stw r0, 0x28(r5)
    lwz r0, 0x34(r1)
    stw r0, 0x2c(r5)
    lwz r0, 0x38(r1)
    stw r0, 0x30(r5)
    lwz r0, 0x40(r1)
    lwz r4, 0x3c(r1)
    stw r4, 0x34(r5)
    stw r0, 0x38(r5)
    lwz r0, 0x48(r1)
    lwz r4, 0x44(r1)
    stw r4, 0x3c(r5)
    stw r0, 0x40(r5)
    lwz r0, 0x50(r1)
    lwz r4, 0x4c(r1)
    stw r4, 0x44(r5)
    stw r0, 0x48(r5)
    lwz r0, 0x54(r1)
    stw r0, 0x4c(r5)
    lwz r0, 0x58(r1)
    stw r0, 0x50(r5)
    lwz r4, 0x394(r29)
    addi r0, r4, 0x1
    stw r0, 0x394(r29)
lbl_fn_800489F4_00002D74:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80048F8C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80048F8C_00002DC4
    li r3, 0x0
    b lbl_fn_80048F8C_00003050
lbl_fn_80048F8C_00002DC4:
    cmpwi r4, 0x0
    bne lbl_fn_80048F8C_00002EAC
    lwz r0, 0x394(r3)
    lwz r5, 0x39c(r3)
    mulli r0, r0, 0x54
    add r0, r5, r0
    b lbl_fn_80048F8C_00002E00
lbl_fn_80048F8C_00002DE0:
    lwz r4, 0x2c(r5)
    cmpwi r4, 0x3
    beq lbl_fn_80048F8C_00002DFC
    cmpwi r4, 0x4
    beq lbl_fn_80048F8C_00002DFC
    li r3, 0x1
    b lbl_fn_80048F8C_00003050
lbl_fn_80048F8C_00002DFC:
    addi r5, r5, 0x54
lbl_fn_80048F8C_00002E00:
    cmplw r5, r0
    bne lbl_fn_80048F8C_00002DE0
    lwz r0, 0x400(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80048F8C_00002E64
    lwz r0, 0x3a0(r3)
    lwz r4, 0x3a8(r3)
    mulli r0, r0, 0x54
    add r0, r4, r0
    b lbl_fn_80048F8C_00002E48
lbl_fn_80048F8C_00002E28:
    lwz r5, 0x2c(r4)
    cmpwi r5, 0x3
    beq lbl_fn_80048F8C_00002E44
    cmpwi r5, 0x4
    beq lbl_fn_80048F8C_00002E44
    li r0, 0x1
    b lbl_fn_80048F8C_00002E54
lbl_fn_80048F8C_00002E44:
    addi r4, r4, 0x54
lbl_fn_80048F8C_00002E48:
    cmplw r4, r0
    bne lbl_fn_80048F8C_00002E28
    li r0, 0x0
lbl_fn_80048F8C_00002E54:
    cmpwi r0, 0x0
    beq lbl_fn_80048F8C_00002E64
    li r3, 0x1
    b lbl_fn_80048F8C_00003050
lbl_fn_80048F8C_00002E64:
    lwz r0, 0x404(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80048F8C_0000304C
    lwz r0, 0x404(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80048F8C_00002E98
    lwz r0, 0x3d8(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80048F8C_00002E98
    cmpwi r0, 0x4
    beq lbl_fn_80048F8C_00002E98
    li r0, 0x1
    b lbl_fn_80048F8C_00002E9C
lbl_fn_80048F8C_00002E98:
    li r0, 0x0
lbl_fn_80048F8C_00002E9C:
    cmpwi r0, 0x0
    beq lbl_fn_80048F8C_0000304C
    li r3, 0x1
    b lbl_fn_80048F8C_00003050
lbl_fn_80048F8C_00002EAC:
    lwz r29, lbl_8087EE90
    lwz r0, 0x8e0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80048F8C_00002F30
    mr r3, r31
    bl fn_800DC6B4
    lwz r4, 0x8d4(r29)
    addi r5, r29, 0x8d4
    b lbl_fn_80048F8C_00002EEC
lbl_fn_80048F8C_00002ED0:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_80048F8C_00002EE8
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_80048F8C_00002EEC
lbl_fn_80048F8C_00002EE8:
    lwz r4, 0x4(r4)
lbl_fn_80048F8C_00002EEC:
    cmpwi r4, 0x0
    bne lbl_fn_80048F8C_00002ED0
    addi r0, r29, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80048F8C_00002F0C
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_80048F8C_00002F10
lbl_fn_80048F8C_00002F0C:
    addi r5, r29, 0x8d4
lbl_fn_80048F8C_00002F10:
    addi r0, r29, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80048F8C_00002F28
    lwz r3, 0x10(r5)
    addi r3, r3, 0x1
    b lbl_fn_80048F8C_00002F50
lbl_fn_80048F8C_00002F28:
    li r3, 0x0
    b lbl_fn_80048F8C_00002F50
lbl_fn_80048F8C_00002F30:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80048F8C_00002F4C
    addi r3, r29, 0x8
    bl fn_8059E330
    addi r3, r3, 0x1
    b lbl_fn_80048F8C_00002F50
lbl_fn_80048F8C_00002F4C:
    li r3, 0x0
lbl_fn_80048F8C_00002F50:
    subi r3, r3, 0x1
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_80048F8C_0000304C
    lwz r0, 0x8e0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80048F8C_00002FE0
    mr r3, r31
    bl fn_800DC6B4
    lwz r4, 0x8d4(r30)
    addi r5, r30, 0x8d4
    b lbl_fn_80048F8C_00002F9C
lbl_fn_80048F8C_00002F80:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_80048F8C_00002F98
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_80048F8C_00002F9C
lbl_fn_80048F8C_00002F98:
    lwz r4, 0x4(r4)
lbl_fn_80048F8C_00002F9C:
    cmpwi r4, 0x0
    bne lbl_fn_80048F8C_00002F80
    addi r0, r30, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80048F8C_00002FBC
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_80048F8C_00002FC0
lbl_fn_80048F8C_00002FBC:
    addi r5, r30, 0x8d4
lbl_fn_80048F8C_00002FC0:
    addi r0, r30, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80048F8C_00002FD8
    lwz r3, 0x10(r5)
    addi r3, r3, 0x1
    b lbl_fn_80048F8C_00003004
lbl_fn_80048F8C_00002FD8:
    li r3, 0x0
    b lbl_fn_80048F8C_00003004
lbl_fn_80048F8C_00002FE0:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80048F8C_00003000
    mr r4, r31
    addi r3, r30, 0x8
    bl fn_8059E330
    addi r3, r3, 0x1
    b lbl_fn_80048F8C_00003004
lbl_fn_80048F8C_00003000:
    li r3, 0x0
lbl_fn_80048F8C_00003004:
    lwz r0, 0x394(r30)
    lwz r5, 0x39c(r30)
    mulli r0, r0, 0x54
    add r4, r5, r0
    b lbl_fn_80048F8C_00003044
lbl_fn_80048F8C_00003018:
    lwz r0, 0x20(r5)
    cmplw r3, r0
    bne lbl_fn_80048F8C_00003040
    lwz r0, 0x2c(r5)
    cmpwi r0, 0x3
    beq lbl_fn_80048F8C_00003040
    cmpwi r0, 0x4
    beq lbl_fn_80048F8C_00003040
    li r3, 0x1
    b lbl_fn_80048F8C_00003050
lbl_fn_80048F8C_00003040:
    addi r5, r5, 0x54
lbl_fn_80048F8C_00003044:
    cmplw r5, r4
    bne lbl_fn_80048F8C_00003018
lbl_fn_80048F8C_0000304C:
    li r3, 0x0
lbl_fn_80048F8C_00003050:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80049268(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80049268_00003094
    li r3, 0x1
    b lbl_fn_80049268_0000316C
lbl_fn_80049268_00003094:
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049268_00003114
    mr r3, r4
    bl fn_800DC6B4
    lwz r4, 0x8d4(r31)
    addi r5, r31, 0x8d4
    b lbl_fn_80049268_000030D0
lbl_fn_80049268_000030B4:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_80049268_000030CC
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_80049268_000030D0
lbl_fn_80049268_000030CC:
    lwz r4, 0x4(r4)
lbl_fn_80049268_000030D0:
    cmpwi r4, 0x0
    bne lbl_fn_80049268_000030B4
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80049268_000030F0
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_80049268_000030F4
lbl_fn_80049268_000030F0:
    addi r5, r31, 0x8d4
lbl_fn_80049268_000030F4:
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80049268_0000310C
    lwz r3, 0x10(r5)
    addi r3, r3, 0x1
    b lbl_fn_80049268_00003134
lbl_fn_80049268_0000310C:
    li r3, 0x0
    b lbl_fn_80049268_00003134
lbl_fn_80049268_00003114:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049268_00003130
    addi r3, r3, 0x8
    bl fn_8059E330
    addi r3, r3, 0x1
    b lbl_fn_80049268_00003134
lbl_fn_80049268_00003130:
    li r3, 0x0
lbl_fn_80049268_00003134:
    lwz r0, 0x394(r31)
    lwz r5, 0x39c(r31)
    mulli r0, r0, 0x54
    add r4, r5, r0
    b lbl_fn_80049268_00003160
lbl_fn_80049268_00003148:
    lwz r0, 0x20(r5)
    cmplw r3, r0
    bne lbl_fn_80049268_0000315C
    li r3, 0x1
    b lbl_fn_80049268_0000316C
lbl_fn_80049268_0000315C:
    addi r5, r5, 0x54
lbl_fn_80049268_00003160:
    cmplw r5, r4
    bne lbl_fn_80049268_00003148
    li r3, 0x0
lbl_fn_80049268_0000316C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004937C(void)
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
    mr r28, r4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004937C_00003438
    lwz r0, 0x31c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8004937C_000031C0
    b lbl_fn_8004937C_00003438
lbl_fn_8004937C_000031C0:
    cmpwi r4, 0x0
    beq lbl_fn_8004937C_00003438
    mr r3, r28
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_8004937C_000031DC
    b lbl_fn_8004937C_00003438
lbl_fn_8004937C_000031DC:
    lwz r0, 0x8e0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8004937C_0000325C
    mr r3, r28
    bl fn_800DC6B4
    lwz r4, 0x8d4(r31)
    addi r5, r31, 0x8d4
    b lbl_fn_8004937C_00003218
lbl_fn_8004937C_000031FC:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_8004937C_00003214
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_8004937C_00003218
lbl_fn_8004937C_00003214:
    lwz r4, 0x4(r4)
lbl_fn_8004937C_00003218:
    cmpwi r4, 0x0
    bne lbl_fn_8004937C_000031FC
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_8004937C_00003238
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_8004937C_0000323C
lbl_fn_8004937C_00003238:
    addi r5, r31, 0x8d4
lbl_fn_8004937C_0000323C:
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_8004937C_00003254
    lwz r3, 0x10(r5)
    addi r0, r3, 0x1
    b lbl_fn_8004937C_00003280
lbl_fn_8004937C_00003254:
    li r0, 0x0
    b lbl_fn_8004937C_00003280
lbl_fn_8004937C_0000325C:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8004937C_0000327C
    mr r4, r28
    addi r3, r31, 0x8
    bl fn_8059E330
    addi r0, r3, 0x1
    b lbl_fn_8004937C_00003280
lbl_fn_8004937C_0000327C:
    li r0, 0x0
lbl_fn_8004937C_00003280:
    lwz r8, 0x39c(r31)
    lis r3, 0x30c3
    b lbl_fn_8004937C_000033C8
lbl_fn_8004937C_0000328C:
    lwz r4, 0x20(r8)
    cmplw r0, r4
    bne lbl_fn_8004937C_000033C4
    lwz r4, 0x24(r8)
    subic. r4, r4, 0x1
    stw r4, 0x24(r8)
    bgt lbl_fn_8004937C_000033BC
    lwz r4, 0x394(r31)
    lwz r5, 0x39c(r31)
    mulli r4, r4, 0x54
    add r4, r5, r4
    cmplw r8, r4
    beq lbl_fn_8004937C_000033C8
    subf r4, r5, r8
    addi r5, r3, 0xc31
    mulhw r4, r5, r4
    srawi r4, r4, 4
    srwi r5, r4, 31
    add r6, r4, r5
    mulli r7, r6, 0x54
    b lbl_fn_8004937C_000033A4
lbl_fn_8004937C_000032E0:
    addi r4, r6, 0x1
    lwz r9, 0x39c(r31)
    mulli r4, r4, 0x54
    addi r6, r6, 0x1
    add r5, r9, r7
    addi r7, r7, 0x54
    add r4, r9, r4
    lwz r9, 0x4(r4)
    lwz r10, 0x0(r4)
    stw r10, 0x0(r5)
    stw r9, 0x4(r5)
    lwz r9, 0xc(r4)
    lwz r10, 0x8(r4)
    stw r10, 0x8(r5)
    stw r9, 0xc(r5)
    lwz r9, 0x14(r4)
    lwz r10, 0x10(r4)
    stw r10, 0x10(r5)
    stw r9, 0x14(r5)
    lwz r9, 0x1c(r4)
    lwz r10, 0x18(r4)
    stw r10, 0x18(r5)
    stw r9, 0x1c(r5)
    lwz r9, 0x20(r4)
    stw r9, 0x20(r5)
    lwz r9, 0x24(r4)
    stw r9, 0x24(r5)
    lwz r9, 0x28(r4)
    stw r9, 0x28(r5)
    lwz r9, 0x2c(r4)
    stw r9, 0x2c(r5)
    lwz r9, 0x30(r4)
    stw r9, 0x30(r5)
    lwz r9, 0x38(r4)
    lwz r10, 0x34(r4)
    stw r10, 0x34(r5)
    stw r9, 0x38(r5)
    lwz r9, 0x40(r4)
    lwz r10, 0x3c(r4)
    stw r10, 0x3c(r5)
    stw r9, 0x40(r5)
    lwz r9, 0x48(r4)
    lwz r10, 0x44(r4)
    stw r10, 0x44(r5)
    stw r9, 0x48(r5)
    lwz r9, 0x4c(r4)
    stw r9, 0x4c(r5)
    lwz r4, 0x50(r4)
    stw r4, 0x50(r5)
lbl_fn_8004937C_000033A4:
    lwz r4, 0x394(r31)
    subi r4, r4, 0x1
    cmplw r6, r4
    blt lbl_fn_8004937C_000032E0
    stw r4, 0x394(r31)
    b lbl_fn_8004937C_000033C8
lbl_fn_8004937C_000033BC:
    addi r8, r8, 0x54
    b lbl_fn_8004937C_000033C8
lbl_fn_8004937C_000033C4:
    addi r8, r8, 0x54
lbl_fn_8004937C_000033C8:
    lwz r4, 0x394(r31)
    lwz r5, 0x39c(r31)
    mulli r4, r4, 0x54
    add r4, r5, r4
    cmplw r8, r4
    bne lbl_fn_8004937C_0000328C
    li r28, 0x0
    b lbl_fn_8004937C_000033FC
lbl_fn_8004937C_000033E8:
    lwz r0, 0x28(r5)
    cmpw r28, r0
    bge lbl_fn_8004937C_000033F8
    mr r28, r0
lbl_fn_8004937C_000033F8:
    addi r5, r5, 0x54
lbl_fn_8004937C_000033FC:
    cmplw r5, r4
    bne lbl_fn_8004937C_000033E8
    addi r29, r31, 0x304
    mr r3, r29
    bl fn_805F3130
    addi r3, r31, 0x31c
    bl fn_8070DC00
    mr r30, r3
    mr r3, r29
    bl fn_805F3210
    cmpw r28, r30
    bge lbl_fn_8004937C_00003438
    mr r4, r28
    addi r3, r31, 0x300
    bl fn_807178A0
lbl_fn_8004937C_00003438:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80049654(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049654_000034B0
    lwz r4, 0x39c(r3)
    li r0, 0x0
    stw r0, 0x394(r3)
    cmpwi r4, 0x0
    stw r0, 0x398(r3)
    beq lbl_fn_80049654_000034A4
    beq lbl_fn_80049654_0000349C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80049654_0000349C:
    li r0, 0x0
    stw r0, 0x39c(r31)
lbl_fn_80049654_000034A4:
    addi r3, r31, 0x300
    li r4, 0x0
    bl fn_807178A0
lbl_fn_80049654_000034B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800496C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    mr r27, r4
    beq lbl_fn_800496C0_000034F4
    mr r3, r27
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_800496C0_000034FC
lbl_fn_800496C0_000034F4:
    li r3, 0x0
    b lbl_fn_800496C0_00003694
lbl_fn_800496C0_000034FC:
    lwz r0, 0x8e0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800496C0_0000357C
    mr r3, r27
    bl fn_800DC6B4
    lwz r4, 0x8d4(r31)
    addi r5, r31, 0x8d4
    b lbl_fn_800496C0_00003538
lbl_fn_800496C0_0000351C:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_800496C0_00003534
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_800496C0_00003538
lbl_fn_800496C0_00003534:
    lwz r4, 0x4(r4)
lbl_fn_800496C0_00003538:
    cmpwi r4, 0x0
    bne lbl_fn_800496C0_0000351C
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_800496C0_00003558
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_800496C0_0000355C
lbl_fn_800496C0_00003558:
    addi r5, r31, 0x8d4
lbl_fn_800496C0_0000355C:
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_800496C0_00003574
    lwz r3, 0x10(r5)
    addi r30, r3, 0x1
    b lbl_fn_800496C0_000035A0
lbl_fn_800496C0_00003574:
    li r30, 0x0
    b lbl_fn_800496C0_000035A0
lbl_fn_800496C0_0000357C:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800496C0_0000359C
    mr r4, r27
    addi r3, r31, 0x8
    bl fn_8059E330
    addi r30, r3, 0x1
    b lbl_fn_800496C0_000035A0
lbl_fn_800496C0_0000359C:
    li r30, 0x0
lbl_fn_800496C0_000035A0:
    lwz r0, 0x3cc(r31)
    cmplw r0, r30
    bne lbl_fn_800496C0_000035B4
    li r3, 0x1
    b lbl_fn_800496C0_00003694
lbl_fn_800496C0_000035B4:
    bl fn_800827E0
    lis r29, lbl_80730F54@ha
    lwz r4, 0x360(r31)
    addi r7, r29, lbl_80730F54@l
    li r5, 0x20
    mr r8, r7
    li r6, 0xa
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x35c(r31)
    li r4, 0x0
    lwz r5, 0x360(r31)
    bl memset
    lwz r4, 0x35c(r31)
    addi r3, r31, 0x330
    lwz r5, 0x360(r31)
    bl fn_80717740
    addi r28, r31, 0x3ac
    addi r4, r29, lbl_80730F54@l
    mr r3, r28
    mr r5, r27
    addi r4, r4, 0x57
    crclr 6
    bl sprintf
    stw r30, 0x20(r28)
    addi r3, r31, 0x8
    subi r4, r30, 0x1
    addi r5, r28, 0x34
    bl fn_8059E390
    lwz r12, 0x330(r31)
    addi r3, r31, 0x330
    lwz r4, 0x40(r28)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r3, 0x4c(r28)
    addi r3, r31, 0x330
    lwz r4, 0x48(r28)
    lwz r12, 0x330(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r29, r31, 0x304
    stw r3, 0x50(r28)
    mr r3, r29
    bl fn_805F3130
    addi r3, r31, 0x31c
    bl fn_8070DC00
    mr r30, r3
    mr r3, r29
    bl fn_805F3210
    li r0, 0x1
    stw r30, 0x28(r28)
    li r3, 0x1
    stw r0, 0x404(r31)
lbl_fn_800496C0_00003694:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800498A4(void)
{
    nofralloc
    lwz r0, 0x404(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800498A4_000036D0
    lwz r0, 0x3d8(r3)
    cmpwi r0, 0x3
    beq lbl_fn_800498A4_000036D0
    cmpwi r0, 0x4
    beq lbl_fn_800498A4_000036D0
    li r3, 0x1
    blr
lbl_fn_800498A4_000036D0:
    li r3, 0x0
    blr
}

asm void fn_800498D4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r26, 0x68(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800498D4_000037C0
    lwz r0, 0x34c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800498D4_00003728
    addi r3, r3, 0x330
    bl fn_807177D0
    addi r3, r31, 0x330
    bl fn_80717750
    bl fn_800827E0
    lwz r4, 0x35c(r31)
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x35c(r31)
lbl_fn_800498D4_00003728:
    lwz r26, 0x8(r1)
    li r9, 0x0
    lwz r27, 0xc(r1)
    li r8, 0x1
    lwz r28, 0x10(r1)
    lwz r29, 0x14(r1)
    lwz r30, 0x18(r1)
    lwz r12, 0x1c(r1)
    lwz r11, 0x20(r1)
    lwz r10, 0x24(r1)
    lwz r7, 0x3c(r1)
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r3, 0x4c(r1)
    lwz r0, 0x50(r1)
    stw r26, 0x3ac(r31)
    stw r27, 0x3b0(r31)
    stw r28, 0x3b4(r31)
    stw r29, 0x3b8(r31)
    stw r30, 0x3bc(r31)
    stw r12, 0x3c0(r31)
    stw r11, 0x3c4(r31)
    stw r10, 0x3c8(r31)
    stw r9, 0x3cc(r31)
    stw r8, 0x3d0(r31)
    stw r9, 0x3d4(r31)
    stw r9, 0x3d8(r31)
    stw r9, 0x3dc(r31)
    stw r7, 0x3e0(r31)
    stw r6, 0x3e4(r31)
    stw r5, 0x3e8(r31)
    stw r4, 0x3ec(r31)
    stw r3, 0x3f0(r31)
    stw r0, 0x3f4(r31)
    stw r9, 0x3f8(r31)
    stw r9, 0x3fc(r31)
    stw r9, 0x404(r31)
lbl_fn_800498D4_000037C0:
    lmw r26, 0x68(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_800499D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80703F90
    bl fn_80704890
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800499F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_80703F90
    mr r4, r31
    bl fn_80704780
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80049A28(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    bl fn_80703F90
    lwz r6, 0x24(r3)
    lwz r0, 0x28(r3)
    cmpw r0, r6
    blt lbl_fn_80049A28_00003854
    lfs f1, 0x20(r3)
    b lbl_fn_80049A28_000038A0
lbl_fn_80049A28_00003854:
    lis r4, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r5, lbl_80730F38@ha
    lfd f4, lbl_80730F38@l(r5)
    xoris r0, r6, 0x8000
    stw r4, 0x8(r1)
    lfs f0, 0x20(r3)
    lfd f1, 0x8(r1)
    lfs f2, 0x1c(r3)
    fsubs f3, f1, f4
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_fn_80049A28_000038A0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80049AAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stfd f31, 0x8(r1)
    fmr f31, f1
    bl fn_80703F90
    fmr f1, f31
    li r4, 0x0
    bl fn_807048A0
    lwz r0, 0x14(r1)
    lfd f31, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80049AE4(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80049AE4_000038FC
    li r3, 0x0
    blr
lbl_fn_80049AE4_000038FC:
    addi r3, r3, 0x1e4
    subi r5, r5, 0x1
    b fn_80718470
    blr
}

asm void fn_80049B08(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80049B08_00003920
    li r3, 0x0
    blr
lbl_fn_80049B08_00003920:
    addi r3, r3, 0x1e4
    subi r5, r5, 0x1
    b fn_807184D0
    blr
}

asm void fn_80049B2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049B2C_00003964
    addi r3, r3, 0x8
    subi r4, r4, 0x1
    bl fn_8059E348
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80049B2C_00003968
lbl_fn_80049B2C_00003964:
    li r3, 0x0
lbl_fn_80049B2C_00003968:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80049B74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049B74_00003A0C
    mr r3, r4
    bl fn_800DC6B4
    lwz r4, 0x8d4(r31)
    addi r5, r31, 0x8d4
    b lbl_fn_80049B74_000039C8
lbl_fn_80049B74_000039AC:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_80049B74_000039C4
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_80049B74_000039C8
lbl_fn_80049B74_000039C4:
    lwz r4, 0x4(r4)
lbl_fn_80049B74_000039C8:
    cmpwi r4, 0x0
    bne lbl_fn_80049B74_000039AC
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80049B74_000039E8
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_80049B74_000039EC
lbl_fn_80049B74_000039E8:
    addi r5, r31, 0x8d4
lbl_fn_80049B74_000039EC:
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80049B74_00003A04
    lwz r3, 0x10(r5)
    addi r3, r3, 0x1
    b lbl_fn_80049B74_00003A2C
lbl_fn_80049B74_00003A04:
    li r3, 0x0
    b lbl_fn_80049B74_00003A2C
lbl_fn_80049B74_00003A0C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049B74_00003A28
    addi r3, r3, 0x8
    bl fn_8059E320
    addi r3, r3, 0x1
    b lbl_fn_80049B74_00003A2C
lbl_fn_80049B74_00003A28:
    li r3, 0x0
lbl_fn_80049B74_00003A2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80049C3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049C3C_00003AC8
    mr r3, r4
    bl fn_800DC6B4
    lwz r4, 0x8d4(r31)
    addi r5, r31, 0x8d4
    b lbl_fn_80049C3C_00003A90
lbl_fn_80049C3C_00003A74:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_80049C3C_00003A8C
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_80049C3C_00003A90
lbl_fn_80049C3C_00003A8C:
    lwz r4, 0x4(r4)
lbl_fn_80049C3C_00003A90:
    cmpwi r4, 0x0
    bne lbl_fn_80049C3C_00003A74
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80049C3C_00003AB0
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_80049C3C_00003AB4
lbl_fn_80049C3C_00003AB0:
    addi r5, r31, 0x8d4
lbl_fn_80049C3C_00003AB4:
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80049C3C_00003AC8
    lwz r3, 0x14(r5)
    b lbl_fn_80049C3C_00003ACC
lbl_fn_80049C3C_00003AC8:
    li r3, 0x0
lbl_fn_80049C3C_00003ACC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80049CDC(void)
{
    nofralloc
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049CDC_00003B58
    lwz r5, 0x8ec(r3)
    subi r4, r4, 0x1
    addi r6, r3, 0x8ec
    b lbl_fn_80049CDC_00003B18
lbl_fn_80049CDC_00003AFC:
    lwz r0, 0xc(r5)
    cmplw r0, r4
    blt lbl_fn_80049CDC_00003B14
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_80049CDC_00003B18
lbl_fn_80049CDC_00003B14:
    lwz r5, 0x4(r5)
lbl_fn_80049CDC_00003B18:
    cmpwi r5, 0x0
    bne lbl_fn_80049CDC_00003AFC
    addi r0, r3, 0x8ec
    cmplw r6, r0
    beq lbl_fn_80049CDC_00003B38
    lwz r0, 0xc(r6)
    cmplw r4, r0
    bge lbl_fn_80049CDC_00003B3C
lbl_fn_80049CDC_00003B38:
    addi r6, r3, 0x8ec
lbl_fn_80049CDC_00003B3C:
    addi r0, r3, 0x8ec
    cmplw r6, r0
    beq lbl_fn_80049CDC_00003B50
    lwz r3, 0x10(r6)
    blr
lbl_fn_80049CDC_00003B50:
    li r3, 0x0
    blr
lbl_fn_80049CDC_00003B58:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049CDC_00003B70
    addi r3, r3, 0x8
    subi r4, r4, 0x1
    b fn_8059E318
lbl_fn_80049CDC_00003B70:
    li r3, 0x0
    blr
}

asm void fn_80049D74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049D74_00003C0C
    mr r3, r4
    bl fn_800DC6B4
    lwz r4, 0x8d4(r31)
    addi r5, r31, 0x8d4
    b lbl_fn_80049D74_00003BC8
lbl_fn_80049D74_00003BAC:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_80049D74_00003BC4
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_80049D74_00003BC8
lbl_fn_80049D74_00003BC4:
    lwz r4, 0x4(r4)
lbl_fn_80049D74_00003BC8:
    cmpwi r4, 0x0
    bne lbl_fn_80049D74_00003BAC
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80049D74_00003BE8
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_80049D74_00003BEC
lbl_fn_80049D74_00003BE8:
    addi r5, r31, 0x8d4
lbl_fn_80049D74_00003BEC:
    addi r0, r31, 0x8d4
    cmplw r5, r0
    beq lbl_fn_80049D74_00003C04
    lwz r3, 0x10(r5)
    addi r3, r3, 0x1
    b lbl_fn_80049D74_00003C2C
lbl_fn_80049D74_00003C04:
    li r3, 0x0
    b lbl_fn_80049D74_00003C2C
lbl_fn_80049D74_00003C0C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80049D74_00003C28
    addi r3, r3, 0x8
    bl fn_8059E330
    addi r3, r3, 0x1
    b lbl_fn_80049D74_00003C2C
lbl_fn_80049D74_00003C28:
    li r3, 0x0
lbl_fn_80049D74_00003C2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80049E3C(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80049E44(void)
{
    nofralloc
    mr r5, r4
    mr r4, r3
    addi r3, r3, 0x900
    b fn_800CB1F4
}

asm void fn_80049E54(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lfs f0, 0xc(r4)
    li r6, 0x5
    stw r0, 0x94(r1)
    fctiwz f0, f0
    lfs f6, lbl_80880870
    stw r31, 0x8c(r1)
    mr r31, r3
    lfs f3, lbl_8088087C
    stfd f0, 0x68(r1)
    lfs f5, lbl_80880874
    lwz r0, 0x6c(r1)
    lfs f4, lbl_80880878
    lfs f2, lbl_80880880
    cmpwi r0, 0x5
    lwz r5, 0x4(r4)
    lfs f1, 0x8(r4)
    stfs f6, 0x40(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f3, 0x50(r1)
    stw r6, 0x54(r1)
    stfs f6, 0x58(r1)
    stfs f2, 0x60(r1)
    stfs f3, 0x64(r1)
    stw r5, 0x5c(r1)
    stfs f1, 0x44(r1)
    ble lbl_fn_80049E54_00003CD4
    stfd f0, 0x70(r1)
    lwz r6, 0x74(r1)
lbl_fn_80049E54_00003CD4:
    cmpwi r6, 0x28
    bge lbl_fn_80049E54_00003D08
    lfs f0, 0xc(r4)
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r0, 0x7c(r1)
    cmpwi r0, 0x5
    ble lbl_fn_80049E54_00003D00
    stfd f0, 0x80(r1)
    lwz r0, 0x84(r1)
    b lbl_fn_80049E54_00003D0C
lbl_fn_80049E54_00003D00:
    li r0, 0x5
    b lbl_fn_80049E54_00003D0C
lbl_fn_80049E54_00003D08:
    li r0, 0x28
lbl_fn_80049E54_00003D0C:
    lis r5, 0x6666
    lfs f0, lbl_80880884
    addi r5, r5, 0x6667
    lfs f8, 0x14(r4)
    mulhw r0, r5, r0
    lfs f1, 0x10(r4)
    fcmpo cr0, f8, f0
    stfs f1, 0x4c(r1)
    stfs f0, 0x58(r1)
    srawi r0, r0, 1
    srwi r5, r0, 31
    add r5, r0, r5
    subi r0, r5, 0x1
    stw r0, 0x54(r1)
    bge lbl_fn_80049E54_00003D4C
    b lbl_fn_80049E54_00003D50
lbl_fn_80049E54_00003D4C:
    fmr f8, f0
lbl_fn_80049E54_00003D50:
    frsp f3, f8
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    addi r5, r1, 0xc
    lfs f5, 0x20(r4)
    addi r6, r1, 0x9
    lfs f4, lbl_80880888
    addi r7, r1, 0x8
    lwz r9, 0x0(r4)
    addi r4, r1, 0x10
    lfs f2, 0x44(r1)
    addi r3, r3, 0x8ac
    lfs f1, 0x4c(r1)
    lwz r8, 0x54(r1)
    lfs f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stfs f8, 0x40(r1)
    stfs f7, 0x48(r1)
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f4, 0x50(r1)
    stw r9, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f4, 0x24(r1)
    stw r8, 0x28(r1)
    stfs f0, 0x2c(r1)
    stw r0, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f5, 0x38(r1)
    bl fn_8004AD3C
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80049E54_00003DF0
    lwz r4, 0xc(r4)
    lwz r0, 0x10(r1)
    cmpw r4, r0
    bge lbl_fn_80049E54_00003E08
lbl_fn_80049E54_00003DF0:
    lbz r5, 0x9(r1)
    mr r4, r3
    lbz r6, 0x8(r1)
    addi r3, r31, 0x8ac
    addi r7, r1, 0x10
    bl fn_8004AA5C
lbl_fn_80049E54_00003E08:
    addi r3, r31, 0x410
    addi r4, r1, 0x40
    bl fn_8070EA60
    addi r3, r31, 0x410
    bl fn_8070E830
    lwz r0, 0x8c8(r31)
    cmplw r0, r3
    bge lbl_fn_80049E54_00003E2C
    stw r3, 0x8c8(r31)
lbl_fn_80049E54_00003E2C:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8004A03C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_8004A1D4
    lwz r31, 0x8b0(r28)
    cmpwi r31, 0x0
    beq lbl_fn_8004A03C_00003FA8
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8004A03C_00003F00
    lwz r29, 0x0(r30)
    cmpwi r29, 0x0
    beq lbl_fn_8004A03C_00003EBC
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8004A03C_00003EA0
    addi r3, r28, 0x8ac
    bl fn_8004ABDC
lbl_fn_8004A03C_00003EA0:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8004A03C_00003EB4
    addi r3, r28, 0x8ac
    bl fn_8004ABDC
lbl_fn_8004A03C_00003EB4:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8004A03C_00003EBC:
    lwz r29, 0x4(r30)
    cmpwi r29, 0x0
    beq lbl_fn_8004A03C_00003EF8
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8004A03C_00003EDC
    addi r3, r28, 0x8ac
    bl fn_8004ABDC
lbl_fn_8004A03C_00003EDC:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8004A03C_00003EF0
    addi r3, r28, 0x8ac
    bl fn_8004ABDC
lbl_fn_8004A03C_00003EF0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8004A03C_00003EF8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004A03C_00003F00:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_fn_8004A03C_00003F8C
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8004A03C_00003F48
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A03C_00003F2C
    addi r3, r28, 0x8ac
    bl fn_8004ABDC
lbl_fn_8004A03C_00003F2C:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A03C_00003F40
    addi r3, r28, 0x8ac
    bl fn_8004ABDC
lbl_fn_8004A03C_00003F40:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004A03C_00003F48:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8004A03C_00003F84
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A03C_00003F68
    addi r3, r28, 0x8ac
    bl fn_8004ABDC
lbl_fn_8004A03C_00003F68:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A03C_00003F7C
    addi r3, r28, 0x8ac
    bl fn_8004ABDC
lbl_fn_8004A03C_00003F7C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004A03C_00003F84:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8004A03C_00003F8C:
    mr r3, r31
    bl dtor_80084684
    li r3, 0x0
    addi r0, r28, 0x8b0
    stw r3, 0x8ac(r28)
    stw r3, 0x8b0(r28)
    stw r0, 0x8b8(r28)
lbl_fn_8004A03C_00003FA8:
    li r0, 0x0
    stw r0, 0x8c8(r28)
    stw r0, 0x8bc(r28)
    stw r0, 0x8c0(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004A1D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x408(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004A1D4_000040B8
    lwz r0, 0x8bc(r3)
    cmpw r4, r0
    beq lbl_fn_8004A1D4_000040B8
    cmpwi r4, 0x0
    stw r0, 0x8c0(r3)
    bgt lbl_fn_8004A1D4_00004034
    bl fn_80703F90
    li r4, 0x0
    li r5, 0x0
    bl fn_80704CC0
    li r0, 0x0
    stw r0, 0x8bc(r30)
    b lbl_fn_8004A1D4_000040B8
lbl_fn_8004A1D4_00004034:
    lwz r5, 0x8b0(r3)
    addi r6, r3, 0x8b0
    b lbl_fn_8004A1D4_0000405C
lbl_fn_8004A1D4_00004040:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_8004A1D4_00004058
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_8004A1D4_0000405C
lbl_fn_8004A1D4_00004058:
    lwz r5, 0x4(r5)
lbl_fn_8004A1D4_0000405C:
    cmpwi r5, 0x0
    bne lbl_fn_8004A1D4_00004040
    addi r0, r3, 0x8b0
    cmplw r6, r0
    beq lbl_fn_8004A1D4_0000407C
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_8004A1D4_00004080
lbl_fn_8004A1D4_0000407C:
    addi r6, r3, 0x8b0
lbl_fn_8004A1D4_00004080:
    addi r0, r3, 0x8b0
    cmplw r6, r0
    beq lbl_fn_8004A1D4_000040B4
    addi r3, r3, 0x410
    addi r4, r6, 0x10
    bl fn_8070EA60
    lwz r0, 0x8bc(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_8004A1D4_000040B4
    bl fn_80703F90
    addi r5, r30, 0x410
    li r4, 0x0
    bl fn_80704AD0
lbl_fn_8004A1D4_000040B4:
    stw r31, 0x8bc(r30)
lbl_fn_8004A1D4_000040B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004A2CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8004A2CC_00004144
    lwz r0, 0x40c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8004A2CC_00004134
    bl fn_80703F90
    mulli r0, r31, 0x3e8
    lis r5, 0x8889
    li r4, 0x0
    subi r5, r5, 0x7777
    mulhw r5, r5, r0
    add r0, r5, r0
    srawi r0, r0, 4
    srwi r5, r0, 31
    add r5, r0, r5
    bl fn_80704CC0
lbl_fn_8004A2CC_00004134:
    lwz r0, 0x40c(r29)
    or r0, r0, r30
    stw r0, 0x40c(r29)
    b lbl_fn_8004A2CC_00004170
lbl_fn_8004A2CC_00004144:
    lwz r0, 0x40c(r3)
    andc. r0, r0, r5
    stw r0, 0x40c(r3)
    bne lbl_fn_8004A2CC_00004170
    lwz r0, 0x8bc(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8004A2CC_00004170
    bl fn_80703F90
    addi r5, r29, 0x410
    li r4, 0x0
    bl fn_80704AD0
lbl_fn_8004A2CC_00004170:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004A388(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8004A388_000041C8
    lwz r0, 0x8cc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8004A388_000041C8
    li r3, 0x1
    bl fn_806095E0
    li r0, 0x1
    stw r0, 0x8cc(r31)
    b lbl_fn_8004A388_000041EC
lbl_fn_8004A388_000041C8:
    cmpwi r4, 0x0
    bne lbl_fn_8004A388_000041EC
    lwz r0, 0x8cc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004A388_000041EC
    li r3, 0x0
    bl fn_806095E0
    li r0, 0x0
    stw r0, 0x8cc(r31)
lbl_fn_8004A388_000041EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004A3FC(void)
{
    nofralloc
    stwu r1, -0x790(r1)
    mflr r0
    stw r0, 0x794(r1)
    stmw r25, 0x774(r1)
    mr r27, r3
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8004A3FC_000043F0
    li r29, 0x0
    stw r29, 0x14(r1)
    lwz r3, lbl_8087F518
    addi r5, r1, 0x14
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    mr r28, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x130(r1)
    addi r3, r1, 0x140
    li r5, 0x400
    stw r29, 0x134(r1)
    li r4, 0x0
    stw r29, 0x138(r1)
    stw r29, 0x13c(r1)
    stw r29, 0x760(r1)
    bl memset
    addi r3, r1, 0x740
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x130
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x130(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r12, 0x130(r1)
    mr r4, r28
    addi r3, r1, 0x130
    lwz r5, 0x14(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r30, lbl_80730F54@ha
    li r25, 0x1
    addi r30, r30, lbl_80730F54@l
lbl_fn_8004A3FC_000042B8:
    addi r3, r1, 0x130
    bl fn_8005B3CC
    mr r5, r3
    addi r3, r1, 0x30
    addi r4, r30, 0x57
    crclr 6
    bl sprintf
    addi r3, r1, 0x130
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r31, r3
    addi r3, r1, 0x130
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r26, r3
    addi r3, r1, 0x130
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r3, 0x0
    ble lbl_fn_8004A3FC_0000433C
    srawi r4, r26, 5
    slwi r0, r26, 27
    srwi r3, r26, 31
    lwz r6, lbl_8087EE88
    addze r4, r4
    subf r0, r3, r0
    slwi r5, r4, 2
    rotlwi r0, r0, 5
    lwzx r4, r6, r5
    add r0, r0, r3
    slw r0, r25, r0
    or r0, r4, r0
    stwx r0, r6, r5
lbl_fn_8004A3FC_0000433C:
    addi r3, r1, 0x130
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r26, r3
    addi r3, r1, 0x30
    bl fn_800DC6B4
    stw r3, 0x10(r1)
    addi r3, r27, 0x8d0
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    addi r7, r1, 0x9
    bl fn_8004A600
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8004A3FC_00004390
    addi r5, r4, 0xc
    lwz r0, 0x10(r1)
    lwz r4, 0xc(r4)
    cmplw r4, r0
    bge lbl_fn_8004A3FC_000043C4
lbl_fn_8004A3FC_00004390:
    lwz r0, 0x10(r1)
    mr r4, r3
    stw r29, 0x18(r1)
    addi r3, r27, 0x8d0
    lbz r5, 0x8(r1)
    addi r7, r1, 0x20
    stw r29, 0x1c(r1)
    lbz r6, 0x9(r1)
    stw r0, 0x20(r1)
    stw r29, 0x24(r1)
    stw r29, 0x28(r1)
    bl fn_8004A7C4
    addi r5, r3, 0xc
lbl_fn_8004A3FC_000043C4:
    stw r31, 0x4(r5)
    addi r3, r1, 0x130
    stw r26, 0x8(r5)
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8004A3FC_000042B8
    lwz r3, lbl_8087F518
    mr r4, r28
    bl fn_8046DD20
    li r0, 0x1
    stw r0, 0x8e0(r27)
lbl_fn_8004A3FC_000043F0:
    lmw r25, 0x774(r1)
    lwz r0, 0x794(r1)
    mtlr r0
    addi r1, r1, 0x790
    blr
}

asm void fn_8004A600(void)
{
    nofralloc
    li r9, 0x0
    stw r9, 0x0(r5)
    li r8, 0x1
    addi r10, r3, 0x4
    lwz r11, 0x4(r3)
    stb r8, 0x0(r6)
    stb r8, 0x0(r7)
    b lbl_fn_8004A600_00004454
lbl_fn_8004A600_00004424:
    lwz r3, 0x0(r4)
    mr r10, r11
    lwz r0, 0xc(r11)
    cmplw r3, r0
    bge lbl_fn_8004A600_00004444
    lwz r11, 0x0(r11)
    stb r8, 0x0(r6)
    b lbl_fn_8004A600_00004454
lbl_fn_8004A600_00004444:
    stw r11, 0x0(r5)
    lwz r11, 0x4(r11)
    stb r9, 0x0(r6)
    stb r9, 0x0(r7)
lbl_fn_8004A600_00004454:
    cmpwi r11, 0x0
    bne lbl_fn_8004A600_00004424
    mr r3, r10
    blr
}

asm void fn_8004A660(void)
{
    nofralloc
    blr
}

asm void fn_8004A664(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_8004A664_00004514
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8004A664_000044D0
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A664_000044B4
    bl fn_8004A664
lbl_fn_8004A664_000044B4:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A664_000044C8
    mr r3, r28
    bl fn_8004A664
lbl_fn_8004A664_000044C8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004A664_000044D0:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8004A664_0000450C
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A664_000044F0
    mr r3, r28
    bl fn_8004A664
lbl_fn_8004A664_000044F0:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A664_00004504
    mr r3, r28
    bl fn_8004A664
lbl_fn_8004A664_00004504:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004A664_0000450C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8004A664_00004514:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8004A664_000045A0
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8004A664_0000455C
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004A664_00004540
    mr r3, r28
    bl fn_8004A664
lbl_fn_8004A664_00004540:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004A664_00004554
    mr r3, r28
    bl fn_8004A664
lbl_fn_8004A664_00004554:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8004A664_0000455C:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8004A664_00004598
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004A664_0000457C
    mr r3, r28
    bl fn_8004A664
lbl_fn_8004A664_0000457C:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004A664_00004590
    mr r3, r28
    bl fn_8004A664
lbl_fn_8004A664_00004590:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8004A664_00004598:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004A664_000045A0:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004A7C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    mr r26, r7
    lwz r8, 0x0(r3)
    addis r0, r8, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_8004A7C4_00004620
    lis r4, lbl_80730F54@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80730F54@l
    addi r3, r3, __files@l
    addi r4, r4, 0x5b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8004A7C4_00004620:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8004A7C4_00004654
    lis r3, __files@ha
    lis r4, lbl_80777554@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80777554@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8004A7C4_00004654:
    addic. r3, r27, 0xc
    addi r0, r28, 0x4
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    beq lbl_fn_8004A7C4_00004680
    lwz r0, 0x0(r26)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r26)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r26)
    stw r0, 0x8(r3)
lbl_fn_8004A7C4_00004680:
    lwz r27, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r27)
    addic. r3, r27, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r27)
    beq lbl_fn_8004A7C4_000046A0
    stw r29, 0x0(r3)
lbl_fn_8004A7C4_000046A0:
    cmpwi r30, 0x0
    beq lbl_fn_8004A7C4_000046B0
    stw r27, 0x0(r29)
    b lbl_fn_8004A7C4_000046B4
lbl_fn_8004A7C4_000046B0:
    stw r27, 0x4(r29)
lbl_fn_8004A7C4_000046B4:
    lwz r5, 0x0(r28)
    mr r3, r27
    lwz r4, 0x4(r28)
    addi r0, r5, 0x1
    stw r0, 0x0(r28)
    bl fn_8003E120
    cmpwi r31, 0x0
    beq lbl_fn_8004A7C4_000046D8
    stw r27, 0xc(r28)
lbl_fn_8004A7C4_000046D8:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8004A7C4_000046E8
    bl dtor_80084684
lbl_fn_8004A7C4_000046E8:
    mr r3, r27
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8004A8FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_8004A8FC_000047AC
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8004A8FC_00004768
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A8FC_0000474C
    bl fn_8004A8FC
lbl_fn_8004A8FC_0000474C:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A8FC_00004760
    mr r3, r28
    bl fn_8004A8FC
lbl_fn_8004A8FC_00004760:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004A8FC_00004768:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8004A8FC_000047A4
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A8FC_00004788
    mr r3, r28
    bl fn_8004A8FC
lbl_fn_8004A8FC_00004788:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004A8FC_0000479C
    mr r3, r28
    bl fn_8004A8FC
lbl_fn_8004A8FC_0000479C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004A8FC_000047A4:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8004A8FC_000047AC:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8004A8FC_00004838
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8004A8FC_000047F4
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004A8FC_000047D8
    mr r3, r28
    bl fn_8004A8FC
lbl_fn_8004A8FC_000047D8:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004A8FC_000047EC
    mr r3, r28
    bl fn_8004A8FC
lbl_fn_8004A8FC_000047EC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8004A8FC_000047F4:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8004A8FC_00004830
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004A8FC_00004814
    mr r3, r28
    bl fn_8004A8FC
lbl_fn_8004A8FC_00004814:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004A8FC_00004828
    mr r3, r28
    bl fn_8004A8FC
lbl_fn_8004A8FC_00004828:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8004A8FC_00004830:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004A8FC_00004838:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004AA5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r8, 0x0(r3)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    addis r0, r8, 0x1
    mr r31, r6
    cmplwi r0, 0xffff
    mr r26, r7
    bne lbl_fn_8004AA5C_000048BC
    lis r4, lbl_80730F54@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80730F54@l
    addi r3, r3, __files@l
    addi r4, r4, 0x5b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8004AA5C_000048BC:
    li r3, 0x38
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8004AA5C_000048F0
    lis r3, __files@ha
    lis r4, lbl_80777538@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80777538@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8004AA5C_000048F0:
    addic. r3, r27, 0xc
    addi r0, r28, 0x4
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    beq lbl_fn_8004AA5C_0000495C
    lwz r0, 0x0(r26)
    stw r0, 0x0(r3)
    lfs f0, 0x4(r26)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r26)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r26)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r26)
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r26)
    stfs f0, 0x14(r3)
    lwz r0, 0x18(r26)
    stw r0, 0x18(r3)
    lfs f0, 0x1c(r26)
    stfs f0, 0x1c(r3)
    lwz r0, 0x20(r26)
    stw r0, 0x20(r3)
    lfs f0, 0x24(r26)
    stfs f0, 0x24(r3)
    lfs f0, 0x28(r26)
    stfs f0, 0x28(r3)
lbl_fn_8004AA5C_0000495C:
    lwz r27, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r27)
    addic. r3, r27, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r27)
    beq lbl_fn_8004AA5C_0000497C
    stw r29, 0x0(r3)
lbl_fn_8004AA5C_0000497C:
    cmpwi r30, 0x0
    beq lbl_fn_8004AA5C_0000498C
    stw r27, 0x0(r29)
    b lbl_fn_8004AA5C_00004990
lbl_fn_8004AA5C_0000498C:
    stw r27, 0x4(r29)
lbl_fn_8004AA5C_00004990:
    lwz r5, 0x0(r28)
    mr r3, r27
    lwz r4, 0x4(r28)
    addi r0, r5, 0x1
    stw r0, 0x0(r28)
    bl fn_8003E120
    cmpwi r31, 0x0
    beq lbl_fn_8004AA5C_000049B4
    stw r27, 0xc(r28)
lbl_fn_8004AA5C_000049B4:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8004AA5C_000049C4
    bl dtor_80084684
lbl_fn_8004AA5C_000049C4:
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8004ABDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_8004ABDC_00004A8C
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8004ABDC_00004A48
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004ABDC_00004A2C
    bl fn_8004ABDC
lbl_fn_8004ABDC_00004A2C:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004ABDC_00004A40
    mr r3, r28
    bl fn_8004ABDC
lbl_fn_8004ABDC_00004A40:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004ABDC_00004A48:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8004ABDC_00004A84
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004ABDC_00004A68
    mr r3, r28
    bl fn_8004ABDC
lbl_fn_8004ABDC_00004A68:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8004ABDC_00004A7C
    mr r3, r28
    bl fn_8004ABDC
lbl_fn_8004ABDC_00004A7C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004ABDC_00004A84:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8004ABDC_00004A8C:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8004ABDC_00004B18
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8004ABDC_00004AD4
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004ABDC_00004AB8
    mr r3, r28
    bl fn_8004ABDC
lbl_fn_8004ABDC_00004AB8:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004ABDC_00004ACC
    mr r3, r28
    bl fn_8004ABDC
lbl_fn_8004ABDC_00004ACC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8004ABDC_00004AD4:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8004ABDC_00004B10
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004ABDC_00004AF4
    mr r3, r28
    bl fn_8004ABDC
lbl_fn_8004ABDC_00004AF4:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8004ABDC_00004B08
    mr r3, r28
    bl fn_8004ABDC
lbl_fn_8004ABDC_00004B08:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8004ABDC_00004B10:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004ABDC_00004B18:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004AD3C(void)
{
    nofralloc
    li r9, 0x0
    stw r9, 0x0(r5)
    li r8, 0x1
    addi r10, r3, 0x4
    lwz r11, 0x4(r3)
    stb r8, 0x0(r6)
    stb r8, 0x0(r7)
    b lbl_fn_8004AD3C_00004B90
lbl_fn_8004AD3C_00004B60:
    lwz r3, 0x0(r4)
    mr r10, r11
    lwz r0, 0xc(r11)
    cmpw r3, r0
    bge lbl_fn_8004AD3C_00004B80
    lwz r11, 0x0(r11)
    stb r8, 0x0(r6)
    b lbl_fn_8004AD3C_00004B90
lbl_fn_8004AD3C_00004B80:
    stw r11, 0x0(r5)
    lwz r11, 0x4(r11)
    stb r9, 0x0(r6)
    stb r9, 0x0(r7)
lbl_fn_8004AD3C_00004B90:
    cmpwi r11, 0x0
    bne lbl_fn_8004AD3C_00004B60
    mr r3, r10
    blr
}

asm void fn_8004AD9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80777570@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80777570@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x0(r3)
    stw r31, 0x4(r3)
    addi r3, r3, 0x8
    bl fn_800CB360
    stw r31, 0xc(r30)
    mr r3, r30
    stw r31, 0x10(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004ADF4(void)
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
    beq lbl_fn_8004ADF4_00004C6C
    lwz r5, 0x8(r3)
    lis r4, lbl_80777570@ha
    addi r4, r4, lbl_80777570@l
    stw r4, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8004ADF4_00004C48
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8004ADF4_00004C48
    li r4, 0x0
    bl fn_80709AD0
lbl_fn_8004ADF4_00004C48:
    addi r3, r30, 0x8
    bl fn_800CB480
    addi r3, r30, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    cmpwi r31, 0x0
    ble lbl_fn_8004ADF4_00004C6C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8004ADF4_00004C6C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004AE84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    addi r3, r3, 0x8
    bl fn_800CB480
    lwz r3, lbl_8087EE90
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004AE84_00004CFC
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_8004AE84_00004CFC
    cmpwi r29, 0x0
    li r31, 0x0
    beq lbl_fn_8004AE84_00004CF4
    mr r3, r29
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8004AE84_00004CF4
    li r31, 0x1
lbl_fn_8004AE84_00004CF4:
    cmpwi r31, 0x0
    bne lbl_fn_8004AE84_00004D04
lbl_fn_8004AE84_00004CFC:
    li r3, 0x0
    b lbl_fn_8004AE84_00004D90
lbl_fn_8004AE84_00004D04:
    lwz r3, lbl_8087EE90
    mr r4, r29
    bl fn_80049B74
    mr r4, r3
    lwz r3, lbl_8087EFE8
    bl fn_800D0AB0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8004AE84_00004D30
    li r3, 0x0
    b lbl_fn_8004AE84_00004D90
lbl_fn_8004AE84_00004D30:
    lwz r3, lbl_8087EFE8
    lwz r4, 0xc(r28)
    bl fn_800CFDA0
    stw r3, 0xa8(r31)
    mr r3, r31
    mr r4, r30
    bl fn_800CA7D4
    mr r3, r31
    mr r4, r29
    bl fn_800C93D4
    li r0, 0x0
    stw r0, 0x4(r28)
    lwz r0, 0x90(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8004AE84_00004D74
    li r0, 0x1
    stw r0, 0x4(r28)
lbl_fn_8004AE84_00004D74:
    mr r4, r31
    addi r3, r28, 0x8
    bl fn_800CB404
    lwz r3, 0x4(r28)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_8004AE84_00004D90:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004AFAC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    addi r3, r3, 0x8
    bl fn_800CB480
    lwz r3, lbl_8087EE90
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004AFAC_00004E1C
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_8004AFAC_00004E1C
    cmpwi r28, 0x0
    li r31, 0x0
    beq lbl_fn_8004AFAC_00004E14
    mr r3, r28
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8004AFAC_00004E14
    li r31, 0x1
lbl_fn_8004AFAC_00004E14:
    cmpwi r31, 0x0
    bne lbl_fn_8004AFAC_00004E24
lbl_fn_8004AFAC_00004E1C:
    li r3, 0x0
    b lbl_fn_8004AFAC_00004ED4
lbl_fn_8004AFAC_00004E24:
    lwz r3, lbl_8087EE90
    mr r4, r28
    bl fn_80049B74
    mr r4, r3
    lwz r3, lbl_8087EFE8
    bl fn_800D0AB0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8004AFAC_00004E50
    li r3, 0x0
    b lbl_fn_8004AFAC_00004ED4
lbl_fn_8004AFAC_00004E50:
    lwz r3, lbl_8087EFE8
    lwz r4, 0xc(r27)
    bl fn_800CFDA0
    stw r3, 0xa8(r31)
    mr r3, r31
    mr r4, r30
    bl fn_800CA7D4
    lwz r3, lbl_8087EFE8
    lwz r0, 0x34a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004AFAC_00004E90
    mr r3, r31
    mr r4, r28
    mr r5, r29
    bl fn_800C97F8
    b lbl_fn_8004AFAC_00004E9C
lbl_fn_8004AFAC_00004E90:
    mr r3, r31
    mr r4, r28
    bl fn_800C93D4
lbl_fn_8004AFAC_00004E9C:
    li r0, 0x0
    stw r0, 0x4(r27)
    lwz r0, 0x90(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8004AFAC_00004EB8
    li r0, 0x1
    stw r0, 0x4(r27)
lbl_fn_8004AFAC_00004EB8:
    mr r4, r31
    addi r3, r27, 0x8
    bl fn_800CB404
    lwz r3, 0x4(r27)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_8004AFAC_00004ED4:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004B0E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8004B0E4_00004F10
    li r3, 0x0
    b lbl_fn_8004B0E4_00004F48
lbl_fn_8004B0E4_00004F10:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8004B0E4_00004F44
    addi r3, r3, 0x8
    bl fn_800CB4EC
    cmpwi r3, 0x0
    beq lbl_fn_8004B0E4_00004F34
    li r3, 0x1
    b lbl_fn_8004B0E4_00004F48
lbl_fn_8004B0E4_00004F34:
    li r0, 0x2
    stw r0, 0x4(r31)
    li r3, 0x0
    b lbl_fn_8004B0E4_00004F48
lbl_fn_8004B0E4_00004F44:
    li r3, 0x0
lbl_fn_8004B0E4_00004F48:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004B158(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    fmr f31, f1
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x8
    bl fn_800CB504
    fmr f1, f31
    addi r3, r30, 0x8
    li r4, 0x0
    bl fn_800CB5B4
    lfs f1, lbl_80880890
    addi r3, r30, 0x8
    fmr f2, f1
    fmr f3, f1
    bl fn_800CB654
    mr r4, r31
    addi r3, r30, 0x8
    bl fn_800CB518
    lwz r3, lbl_8087EFE8
    lwz r4, 0x8(r30)
    lfs f1, lbl_80880894
    bl fn_800D19FC
    psq_l f31, 0x18(r1), 0, 0
    li r3, 0x1
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004B1EC(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_80709AD0
    blr
}

asm void fn_8004B20C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    bl OSGetTime
    addi r5, r1, 0x8
    bl OSTicksToCalendarTime
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r31)
    stw r3, 0x0(r31)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r31)
    stw r3, 0x8(r31)
    lwz r3, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r31)
    stw r3, 0x10(r31)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x1c(r31)
    stw r3, 0x18(r31)
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x24(r31)
    stw r3, 0x20(r31)
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8004B290(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f5, lbl_80880898
    stw r0, 0x14(r1)
    lfs f4, lbl_8088089C
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f3, lbl_808808A0
    lfs f2, lbl_808808A4
    lfs f1, lbl_808808A8
    lfs f0, lbl_808808AC
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    stfs f5, 0x8(r3)
    stfs f5, 0xc(r3)
    stfs f5, 0x10(r3)
    stfs f4, 0x14(r3)
    stfs f4, 0x18(r3)
    stfs f4, 0x1c(r3)
    stfs f4, 0x20(r3)
    stfs f5, 0x24(r3)
    stfs f4, 0x28(r3)
    stfs f3, 0x2c(r3)
    stfs f3, 0x30(r3)
    stfs f4, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f5, 0x3c(r3)
    stfs f2, 0x40(r3)
    stfs f2, 0x44(r3)
    stfs f5, 0x48(r3)
    stfs f5, 0x4c(r3)
    stfs f1, 0x50(r3)
    stfs f5, 0x54(r3)
    stfs f5, 0xc8(r3)
    stfs f0, 0xcc(r3)
    bl fn_8004B378
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004B338(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8004B338_00005164
    cmpwi r4, 0x0
    ble lbl_fn_8004B338_00005164
    bl dtor_80084684
lbl_fn_8004B338_00005164:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
