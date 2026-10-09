#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000EB8C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E4A4(void);
extern void fn_80041C0C(void);
extern void fn_8004203C(void);
extern void fn_8004212C(void);
extern void fn_8004274C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8006AA20(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008BBD8(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA6C(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800EDFE8(void);
extern void fn_800EF73C(void);
extern void fn_8012044C(void);
extern void fn_801206EC(void);
extern void fn_80120700(void);
extern void fn_801207D4(void);
extern void fn_80120D34(void);
extern void fn_80121F00(void);
extern void fn_8017CB2C(void);
extern void fn_80205BE8(void);
extern void fn_80216AFC(void);
extern void fn_802180A8(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_8023780C(void);
extern void fn_80373148(void);
extern void fn_803ED8D8(void);
extern void fn_803ED8F4(void);
extern void fn_803EFCA8(void);
extern void fn_803EFD60(void);
extern void fn_803EFD9C(void);
extern void fn_803EFDA4(void);
extern void fn_803EFDAC(void);
extern void fn_803EFDB4(void);
extern void fn_803EFDD0(void);
extern void fn_803EFDE4(void);
extern void fn_803EFE5C(void);
extern void fn_803EFE64(void);
extern void fn_803F0280(void);
extern void fn_803F0328(void);
extern void fn_803F03D8(void);
extern void fn_803F0488(void);
extern void fn_803F0538(void);
extern void fn_803F05E8(void);
extern void fn_803F05F0(void);
extern void fn_803F05FC(void);
extern void fn_803F0604(void);
extern void fn_803F0614(void);
extern void fn_803F0624(void);
extern void fn_803F0634(void);
extern void fn_803F063C(void);
extern void fn_803F0688(void);
extern void fn_803F069C(void);
extern void fn_803F10AC(void);
extern void fn_804093B4(void);
extern void fn_80435CE4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_8049D5DC(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern void fn_80695B00(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80751F60[];
extern u8 lbl_80752040[];
extern u8 lbl_80752084[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_8078CA60[];
extern u8 lbl_8078CA70[];
extern u8 lbl_8078CA78[];
extern u8 lbl_8078CAB0[];
extern u8 lbl_8078CAE8[];
extern u8 lbl_8078CAF4[];
extern u8 lbl_8078CB00[];
extern u8 lbl_8078CB08[];
extern u8 lbl_8078CB10[];
extern u8 lbl_8078CB18[];
extern u8 lbl_8078CB38[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C8728[];

/* Small data declarations */
extern u32 lbl_8087DEF8;
extern u32 lbl_8087DEFC;
extern u32 lbl_8087DF00;
extern u32 lbl_8087DF04;
extern u32 lbl_8087DF08;
extern u32 lbl_8087DF0C;
extern u32 lbl_8087DF10;
extern u32 lbl_8087DF14;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4A4;
extern u32 lbl_80885F88;
extern u32 lbl_80885F8C;

/* Function declarations */
void fn_803EDF1C(void);
void fn_803EDF20(void);
void fn_803EDF24(void);
void fn_803EDF40(void);
void fn_803EDF5C(void);
void fn_803EDF6C(void);
void fn_803EDF70(void);
void fn_803EDF74(void);
void fn_803EDF7C(void);
void fn_803EDFBC(void);
void fn_803EE024(void);
void fn_803EE124(void);
void fn_803EE1F0(void);
void fn_803EE318(void);
void fn_803EE370(void);
void fn_803EE374(void);
void fn_803EE3F0(void);
void fn_803EE41C(void);
void fn_803EE45C(void);
void fn_803EE514(void);
void fn_803EE560(void);
void fn_803EE5AC(void);
void fn_803EE7FC(void);
void fn_803EEB38(void);
void fn_803EEB78(void);
void fn_803EEC64(void);
void fn_803EED2C(void);
void fn_803EED58(void);
void fn_803EEE10(void);
void fn_803EEE44(void);
void fn_803EEEDC(void);
void fn_803EF3B0(void);
void fn_803EF4DC(void);
void fn_803EF590(void);
void fn_803EF608(void);
void fn_803EF64C(void);
void fn_803EF780(void);

asm void fn_803EDF1C(void)
{
    nofralloc
    blr
}

asm void fn_803EDF20(void)
{
    nofralloc
    blr
}

asm void fn_803EDF24(void)
{
    nofralloc
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    bnelr
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    blr
}

asm void fn_803EDF40(void)
{
    nofralloc
    lwz r4, 0x38(r3)
    lwz r0, 0x38(r3)
    extrwi r4, r4, 1, 29
    stw r4, 0xa0(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_803EDF5C(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctr
}

asm void fn_803EDF6C(void)
{
    nofralloc
    blr
}

asm void fn_803EDF70(void)
{
    nofralloc
    blr
}

asm void fn_803EDF74(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_803EDF7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_803EDF7C_00000088
    cmpwi r4, 0x0
    ble lbl_fn_803EDF7C_00000088
    bl dtor_80084684
lbl_fn_803EDF7C_00000088:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EDFBC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F4A0
    cmpwi r0, 0x0
    bne lbl_fn_803EDFBC_000000F0
    lis r5, lbl_80751F60@ha
    li r3, 0x90
    addi r5, r5, lbl_80751F60@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803EDFBC_000000EC
    mr r4, r31
    bl fn_803EE024
lbl_fn_803EDFBC_000000EC:
    stw r3, lbl_8087F4A0
lbl_fn_803EDFBC_000000F0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F4A0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EE024(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D1D3C
    lis r4, lbl_8078CAB0@ha
    li r5, 0x0
    lis r3, lbl_80751F60@ha
    li r0, 0x2
    addi r4, r4, lbl_8078CAB0@l
    stw r4, 0x0(r31)
    addi r3, r3, lbl_80751F60@l
    stw r5, 0x48(r31)
    addi r4, r3, 0x1
    stw r5, 0x4c(r31)
    stw r0, 0x50(r31)
    stw r5, 0x54(r31)
    stw r5, 0x58(r31)
    stw r5, 0x5c(r31)
    stw r5, 0x60(r31)
    stw r5, 0x64(r31)
    stw r5, 0x68(r31)
    stw r5, 0x6c(r31)
    stw r5, 0x70(r31)
    stw r5, 0x78(r31)
    stw r5, 0x7c(r31)
    stw r5, 0x88(r31)
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803EE024_00000194
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x70(r31)
    b lbl_fn_803EE024_00000198
lbl_fn_803EE024_00000194:
    li r3, 0x0
lbl_fn_803EE024_00000198:
    lwz r0, 0x7c(r31)
    stw r3, 0x74(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803EE024_000001B0
    mr r3, r0
    bl fn_80084C24
lbl_fn_803EE024_000001B0:
    li r0, 0x44
    stw r0, 0x78(r31)
    li r3, 0x110
    li r4, 0x1
    la r5, lbl_8087DEFC
    la r6, lbl_8087DEF8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x7c(r31)
    b lbl_fn_803EE024_000001DC
    stw r0, 0x7c(r31)
lbl_fn_803EE024_000001DC:
    lwz r0, 0x78(r31)
    li r4, 0x0
    lwz r3, 0x7c(r31)
    slwi r5, r0, 2
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EE124(void)
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
    beq lbl_fn_803EE124_000002B8
    addic. r0, r3, 0x78
    li r0, 0x0
    stw r0, lbl_8087F4A0
    beq lbl_fn_803EE124_00000258
    lwz r3, 0x7c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803EE124_0000024C
    bl fn_80084C24
lbl_fn_803EE124_0000024C:
    li r0, 0x0
    stw r0, 0x7c(r30)
    stw r0, 0x78(r30)
lbl_fn_803EE124_00000258:
    addic. r0, r30, 0x70
    beq lbl_fn_803EE124_0000027C
    lwz r4, 0x70(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803EE124_0000027C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803EE124_0000027C
    bl fn_800897D8
lbl_fn_803EE124_0000027C:
    addic. r0, r30, 0x5c
    beq lbl_fn_803EE124_0000029C
    lwz r3, 0x64(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803EE124_0000029C
    lis r4, fn_803EDF7C@ha
    addi r4, r4, fn_803EDF7C@l
    bl fn_80695A50
lbl_fn_803EE124_0000029C:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803EE124_000002B8
    mr r3, r30
    bl dtor_80084684
lbl_fn_803EE124_000002B8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EE1F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x88(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803EE1F0_000003B0
    li r0, 0x1
    lis r4, 0x1
    stw r0, 0x88(r3)
    subi r4, r4, 0x9e8
    li r5, -0x1
    bl fn_80435CE4
    stw r3, 0x80(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x48(r31)
    lwz r4, 0x80(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803EE1F0_00000354
    cmplw r3, r4
    bne lbl_fn_803EE1F0_00000350
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EE1F0_00000344
    stw r0, 0x48(r31)
    b lbl_fn_803EE1F0_00000354
lbl_fn_803EE1F0_00000344:
    li r0, 0x0
    stw r0, 0x48(r31)
    b lbl_fn_803EE1F0_00000354
lbl_fn_803EE1F0_00000350:
    bl fn_803ED8F4
lbl_fn_803EE1F0_00000354:
    mr r3, r31
    li r4, 0x4650
    li r5, -0x1
    bl fn_804093B4
    stw r3, 0x84(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x48(r31)
    lwz r4, 0x84(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803EE1F0_000003E4
    cmplw r3, r4
    bne lbl_fn_803EE1F0_000003A8
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EE1F0_0000039C
    stw r0, 0x48(r31)
    b lbl_fn_803EE1F0_000003E4
lbl_fn_803EE1F0_0000039C:
    li r0, 0x0
    stw r0, 0x48(r31)
    b lbl_fn_803EE1F0_000003E4
lbl_fn_803EE1F0_000003A8:
    bl fn_803ED8F4
    b lbl_fn_803EE1F0_000003E4
lbl_fn_803EE1F0_000003B0:
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_803EE1F0_000003E4
    lwz r4, 0x80(r31)
    li r3, 0x1
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x84(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_803EE1F0_000003E8
lbl_fn_803EE1F0_000003E4:
    li r3, 0x0
lbl_fn_803EE1F0_000003E8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EE318(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EE318_00000440
    lwz r3, 0x68(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803EE318_00000440
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x68(r31)
    stw r0, 0x6c(r31)
lbl_fn_803EE318_00000440:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EE370(void)
{
    nofralloc
    blr
}

asm void fn_803EE374(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r31, 0x48(r3)
    b lbl_fn_803EE374_000004B4
lbl_fn_803EE374_00000478:
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803EE374_000004B0
    cmpwi r30, 0x0
    beq lbl_fn_803EE374_0000049C
    lwz r0, 0x20(r31)
    cmplw r0, r30
    bne lbl_fn_803EE374_000004B0
lbl_fn_803EE374_0000049C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_803EE374_000004B0:
    lwz r31, 0x5c(r31)
lbl_fn_803EE374_000004B4:
    cmpwi r31, 0x0
    bne lbl_fn_803EE374_00000478
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EE3F0(void)
{
    nofralloc
    lwz r6, 0x48(r3)
    lwz r5, 0x4c(r3)
    cmpwi r6, 0x0
    addi r0, r5, 0x1
    stw r0, 0x4c(r3)
    bne lbl_fn_803EE3F0_000004F4
    stw r4, 0x48(r3)
    blr
lbl_fn_803EE3F0_000004F4:
    mr r3, r6
    b fn_803ED8D8
    blr
}

asm void fn_803EE41C(void)
{
    nofralloc
    lwz r5, 0x48(r3)
    cmpwi r5, 0x0
    beqlr
    cmplw r5, r4
    bne lbl_fn_803EE41C_00000534
    lwz r0, 0x5c(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803EE41C_00000528
    stw r0, 0x48(r3)
    blr
lbl_fn_803EE41C_00000528:
    li r0, 0x0
    stw r0, 0x48(r3)
    blr
lbl_fn_803EE41C_00000534:
    mr r3, r5
    b fn_803ED8F4
    blr
}

asm void fn_803EE45C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_fn_803EE45C_00000578
    mr r3, r29
    bl fn_8017CB2C
    cmpwi r3, 0x0
    bne lbl_fn_803EE45C_00000580
lbl_fn_803EE45C_00000578:
    li r3, 0x0
    b lbl_fn_803EE45C_000005DC
lbl_fn_803EE45C_00000580:
    lwz r30, 0x48(r30)
    b lbl_fn_803EE45C_000005D0
lbl_fn_803EE45C_00000588:
    lwz r0, 0x50(r30)
    cmpwi r0, 0x6
    bne lbl_fn_803EE45C_000005CC
    lwz r0, 0x54(r30)
    cmpwi r0, 0x1
    beq lbl_fn_803EE45C_000005CC
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r31, 0x58(r29)
    li r4, 0x9
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    cmpw r31, r3
    bne lbl_fn_803EE45C_000005CC
    li r3, 0x1
    b lbl_fn_803EE45C_000005DC
lbl_fn_803EE45C_000005CC:
    lwz r30, 0x5c(r30)
lbl_fn_803EE45C_000005D0:
    cmpwi r30, 0x0
    bne lbl_fn_803EE45C_00000588
    li r3, 0x0
lbl_fn_803EE45C_000005DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803EE514(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_803EE514_00000628
lbl_fn_803EE514_00000610:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r31, 0x5c(r31)
lbl_fn_803EE514_00000628:
    cmpwi r31, 0x0
    bne lbl_fn_803EE514_00000610
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EE560(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_803EE560_00000674
lbl_fn_803EE560_0000065C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r31, 0x5c(r31)
lbl_fn_803EE560_00000674:
    cmpwi r31, 0x0
    bne lbl_fn_803EE560_0000065C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EE5AC(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stmw r27, 0x18c(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    lwz r0, 0x50(r3)
    cmpw r0, r4
    bne lbl_fn_803EE5AC_000006D4
    lwz r0, 0x54(r3)
    cmpw r0, r5
    bne lbl_fn_803EE5AC_000006D4
    lwz r0, 0x58(r3)
    cmpw r0, r6
    beq lbl_fn_803EE5AC_000008CC
lbl_fn_803EE5AC_000006D4:
    mr r4, r29
    mr r5, r30
    mr r6, r31
    addi r3, r1, 0x50
    bl fn_8049D5DC
    cmpwi r3, 0x0
    beq lbl_fn_803EE5AC_00000714
    lis r4, lbl_80751F60@ha
    addi r3, r1, 0x88
    addi r4, r4, lbl_80751F60@l
    addi r5, r1, 0x50
    addi r4, r4, 0x10
    crclr 6
    bl sprintf
    li r0, 0x1
    b lbl_fn_803EE5AC_00000718
lbl_fn_803EE5AC_00000714:
    li r0, 0x0
lbl_fn_803EE5AC_00000718:
    cmpwi r0, 0x0
    beq lbl_fn_803EE5AC_000008CC
    addi r3, r1, 0x88
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803EE5AC_000008CC
    lwz r3, 0x64(r28)
    li r27, 0x0
    stw r27, 0x5c(r28)
    cmpwi r3, 0x0
    stw r27, 0x60(r28)
    beq lbl_fn_803EE5AC_00000758
    lis r4, fn_803EDF7C@ha
    addi r4, r4, fn_803EDF7C@l
    bl fn_80695A50
    stw r27, 0x64(r28)
lbl_fn_803EE5AC_00000758:
    li r6, 0x0
    stw r6, 0x6c(r28)
    lis r5, lbl_8078CA60@ha
    lbz r0, lbl_8087F4A4
    lwzu r4, lbl_8078CA60@l(r5)
    extsb. r0, r0
    stw r4, 0x34(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r4, 0x40(r1)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    stw r28, 0x4c(r1)
    stw r6, 0x70(r1)
    bne lbl_fn_803EE5AC_000007D0
    lis r6, lbl_807C8728@ha
    lis r4, fn_803EED2C@ha
    lis r3, fn_803EED58@ha
    li r0, 0x1
    addi r3, r3, fn_803EED58@l
    addi r5, r6, lbl_807C8728@l
    addi r4, r4, fn_803EED2C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8728@l(r6)
    stb r0, lbl_8087F4A4
lbl_fn_803EE5AC_000007D0:
    lwz r6, 0x40(r1)
    addi r3, r1, 0x18
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_803EE5AC_00000844
    addic. r0, r1, 0x74
    lwz r5, 0x18(r1)
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_803EE5AC_0000083C
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
lbl_fn_803EE5AC_0000083C:
    li r0, 0x1
    b lbl_fn_803EE5AC_00000848
lbl_fn_803EE5AC_00000844:
    li r0, 0x0
lbl_fn_803EE5AC_00000848:
    cmpwi r0, 0x0
    beq lbl_fn_803EE5AC_00000860
    lis r3, lbl_807C8728@ha
    addi r3, r3, lbl_807C8728@l
    stw r3, 0x70(r1)
    b lbl_fn_803EE5AC_00000868
lbl_fn_803EE5AC_00000860:
    li r0, 0x0
    stw r0, 0x70(r1)
lbl_fn_803EE5AC_00000868:
    mr r3, r28
    addi r4, r1, 0x88
    addi r5, r1, 0x70
    bl fn_803EEB78
    addic. r4, r1, 0x70
    stw r3, 0x68(r28)
    beq lbl_fn_803EE5AC_000008B8
    lwz r3, 0x70(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803EE5AC_000008B8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_803EE5AC_000008B0
    addi r3, r4, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803EE5AC_000008B0:
    li r0, 0x0
    stw r0, 0x70(r1)
lbl_fn_803EE5AC_000008B8:
    li r0, 0x1
    stw r29, 0x50(r28)
    stw r30, 0x54(r28)
    stw r31, 0x58(r28)
    stw r0, 0x6c(r28)
lbl_fn_803EE5AC_000008CC:
    lmw r27, 0x18c(r1)
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_803EE7FC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r0, 0x64(r3)
    mr r25, r3
    mr r30, r4
    cmpwi r0, 0x0
    beq lbl_fn_803EE7FC_00000914
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803EE7FC_00000A3C
lbl_fn_803EE7FC_00000914:
    lwz r0, 0x60(r3)
    li r29, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_803EE7FC_00000B6C
    li r3, 0x270
    li r4, 0x0
    la r5, lbl_8087DF14
    la r6, lbl_8087DF10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803EEB38@ha
    lis r5, fn_803EDF7C@ha
    addi r4, r4, fn_803EEB38@l
    li r6, 0x4c
    addi r5, r5, fn_803EDF7C@l
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x64(r25)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_803EE7FC_00000A30
    lwz r0, 0x5c(r25)
    li r31, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_803EE7FC_0000097C
    mr r31, r0
lbl_fn_803EE7FC_0000097C:
    li r27, 0x0
    li r24, 0x0
    b lbl_fn_803EE7FC_00000A18
lbl_fn_803EE7FC_00000988:
    lwz r3, 0x64(r25)
    add r28, r26, r24
    addi r0, r28, 0x10
    add r23, r3, r24
    lwzx r3, r3, r24
    stwx r3, r26, r24
    addi r22, r23, 0x10
    cmplw r22, r0
    lwz r0, 0x4(r23)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r23)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r23)
    stw r0, 0xc(r28)
    beq lbl_fn_803EE7FC_000009E0
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r4, r22
    addi r3, r28, 0x10
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_803EE7FC_000009E0:
    lfs f2, 0x38(r23)
    addi r27, r27, 0x1
    psq_l f1, 0x30(r23), 0, 0
    addi r24, r24, 0x4c
    psq_st f1, 0x30(r28), 0, 0
    stfs f2, 0x38(r28)
    lfs f0, 0x3c(r23)
    stfs f0, 0x3c(r28)
    lwz r0, 0x40(r23)
    stw r0, 0x40(r28)
    lwz r0, 0x44(r23)
    stw r0, 0x44(r28)
    lwz r0, 0x48(r23)
    stw r0, 0x48(r28)
lbl_fn_803EE7FC_00000A18:
    cmplw r27, r31
    blt lbl_fn_803EE7FC_00000988
    lis r4, fn_803EDF7C@ha
    lwz r3, 0x64(r25)
    addi r4, r4, fn_803EDF7C@l
    bl fn_80695A50
lbl_fn_803EE7FC_00000A30:
    stw r26, 0x64(r25)
    stw r29, 0x60(r25)
    b lbl_fn_803EE7FC_00000B6C
lbl_fn_803EE7FC_00000A3C:
    lwz r3, 0x5c(r3)
    cmplw r3, r0
    blt lbl_fn_803EE7FC_00000B6C
    slwi r27, r3, 1
    cmplw r0, r27
    bgt lbl_fn_803EE7FC_00000B6C
    mulli r3, r27, 0x4c
    li r4, 0x0
    la r5, lbl_8087DF14
    la r6, lbl_8087DF10
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803EEB38@ha
    lis r5, fn_803EDF7C@ha
    mr r7, r27
    li r6, 0x4c
    addi r4, r4, fn_803EEB38@l
    addi r5, r5, fn_803EDF7C@l
    bl fn_80695720
    lwz r0, 0x64(r25)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_803EE7FC_00000B64
    lwz r0, 0x5c(r25)
    mr r31, r27
    cmplw r27, r0
    ble lbl_fn_803EE7FC_00000AB0
    mr r31, r0
lbl_fn_803EE7FC_00000AB0:
    li r29, 0x0
    li r24, 0x0
    b lbl_fn_803EE7FC_00000B4C
lbl_fn_803EE7FC_00000ABC:
    lwz r3, 0x64(r25)
    add r28, r26, r24
    addi r0, r28, 0x10
    add r23, r3, r24
    lwzx r3, r3, r24
    stwx r3, r26, r24
    addi r22, r23, 0x10
    cmplw r22, r0
    lwz r0, 0x4(r23)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r23)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r23)
    stw r0, 0xc(r28)
    beq lbl_fn_803EE7FC_00000B14
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r4, r22
    addi r3, r28, 0x10
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_803EE7FC_00000B14:
    lfs f2, 0x38(r23)
    addi r29, r29, 0x1
    psq_l f1, 0x30(r23), 0, 0
    addi r24, r24, 0x4c
    psq_st f1, 0x30(r28), 0, 0
    stfs f2, 0x38(r28)
    lfs f0, 0x3c(r23)
    stfs f0, 0x3c(r28)
    lwz r0, 0x40(r23)
    stw r0, 0x40(r28)
    lwz r0, 0x44(r23)
    stw r0, 0x44(r28)
    lwz r0, 0x48(r23)
    stw r0, 0x48(r28)
lbl_fn_803EE7FC_00000B4C:
    cmplw r29, r31
    blt lbl_fn_803EE7FC_00000ABC
    lis r4, fn_803EDF7C@ha
    lwz r3, 0x64(r25)
    addi r4, r4, fn_803EDF7C@l
    bl fn_80695A50
lbl_fn_803EE7FC_00000B64:
    stw r26, 0x64(r25)
    stw r27, 0x60(r25)
lbl_fn_803EE7FC_00000B6C:
    lwz r0, 0x5c(r25)
    addi r22, r30, 0x10
    lwz r4, 0x64(r25)
    mulli r3, r0, 0x4c
    lwz r0, 0x0(r30)
    add r24, r4, r3
    stwx r0, r4, r3
    addi r0, r24, 0x10
    cmplw r22, r0
    lwz r0, 0x4(r30)
    stw r0, 0x4(r24)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r24)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r24)
    beq lbl_fn_803EE7FC_00000BC8
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r4, r22
    addi r3, r24, 0x10
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_803EE7FC_00000BC8:
    lfs f2, 0x38(r30)
    addi r11, r1, 0x30
    psq_l f1, 0x30(r30), 0, 0
    psq_st f1, 0x30(r24), 0, 0
    stfs f2, 0x38(r24)
    lfs f0, 0x3c(r30)
    stfs f0, 0x3c(r24)
    lwz r0, 0x40(r30)
    stw r0, 0x40(r24)
    lwz r0, 0x44(r30)
    stw r0, 0x44(r24)
    lwz r0, 0x48(r30)
    stw r0, 0x48(r24)
    lwz r3, 0x5c(r25)
    addi r0, r3, 0x1
    stw r0, 0x5c(r25)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803EEB38(void)
{
    nofralloc
    lfs f1, lbl_80885F88
    li r0, 0x0
    lfs f0, lbl_80885F8C
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stb r0, 0x10(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    blr
}

asm void fn_803EEB78(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    la r6, lbl_8087DF00
    li r7, 0x0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    li r31, 0x0
    li r3, 0x68
    li r4, 0x1
    la r5, lbl_8087DF04
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_803EEB78_00000CEC
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r29)
    cmpwi r6, 0x0
    beq lbl_fn_803EEB78_00000CD0
    stw r6, 0x8(r1)
    addi r3, r29, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_803EEB78_00000CD0:
    mr r3, r30
    mr r4, r27
    mr r5, r28
    addi r6, r1, 0x8
    li r31, 0x1
    bl fn_803EEC64
    mr r30, r3
lbl_fn_803EEB78_00000CEC:
    cmpwi r31, 0x0
    beq lbl_fn_803EEB78_00000D30
    addic. r3, r1, 0x8
    beq lbl_fn_803EEB78_00000D30
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803EEB78_00000D30
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_803EEB78_00000D28
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803EEB78_00000D28:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_803EEB78_00000D30:
    mr r3, r30
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803EEC64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D1D3C
    lis r3, lbl_8078CA78@ha
    addi r31, r28, 0x48
    addi r3, r3, lbl_8078CA78@l
    stw r3, 0x0(r28)
    mr r3, r31
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r31)
    stw r0, 0x50(r28)
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803EEC64_00000DCC
    stw r0, 0x50(r28)
    addi r3, r30, 0x4
    addi r4, r28, 0x54
    li r5, 0x0
    lwz r6, 0x0(r30)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_803EEC64_00000DCC:
    li r0, 0x0
    stw r0, 0x64(r28)
    addi r3, r28, 0x48
    mr r4, r29
    lwz r12, 0x48(r28)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803EED2C(void)
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

asm void fn_803EED58(void)
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
    bne lbl_fn_803EED58_00000E70
    lis r3, lbl_8078CA70@ha
    addi r3, r3, lbl_8078CA70@l
    stw r3, 0x0(r4)
    b lbl_fn_803EED58_00000EDC
lbl_fn_803EED58_00000E70:
    cmpwi r5, 0x0
    bne lbl_fn_803EED58_00000EA4
    cmpwi r4, 0x0
    beq lbl_fn_803EED58_00000EDC
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_803EED58_00000EDC
lbl_fn_803EED58_00000EA4:
    cmpwi r5, 0x1
    beq lbl_fn_803EED58_00000EDC
    lwz r5, 0x0(r4)
    lis r3, lbl_8078CA70@ha
    lwz r4, lbl_8078CA70@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_803EED58_00000ED4
    stw r30, 0x0(r31)
    b lbl_fn_803EED58_00000EDC
lbl_fn_803EED58_00000ED4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_803EED58_00000EDC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EEE10(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    b lbl_fn_803EEE10_00000F18
lbl_fn_803EEE10_00000EFC:
    lwz r0, 0x48(r3)
    cmpw r4, r0
    bne lbl_fn_803EEE10_00000F14
    lwz r0, 0x4c(r3)
    cmpw r5, r0
    beqlr
lbl_fn_803EEE10_00000F14:
    lwz r3, 0x5c(r3)
lbl_fn_803EEE10_00000F18:
    cmpwi r3, 0x0
    bne lbl_fn_803EEE10_00000EFC
    li r3, 0x0
    blr
}

asm void fn_803EEE44(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803EEE44_00000F58
    li r3, 0x0
    b lbl_fn_803EEE44_00000FA4
lbl_fn_803EEE44_00000F58:
    lwz r3, 0x7c(r3)
    slwi r30, r4, 2
    lwzx r0, r3, r30
    cmpwi r0, 0x0
    bne lbl_fn_803EEE44_00000F9C
    lis r6, lbl_80751F60@ha
    mr r5, r4
    addi r6, r6, lbl_80751F60@l
    addi r3, r1, 0x8
    addi r4, r6, 0x2d
    crclr 6
    bl sprintf
    lwz r31, 0x7c(r29)
    addi r4, r1, 0x8
    lwz r3, 0x74(r29)
    bl fn_8008937C
    stwx r3, r31, r30
lbl_fn_803EEE44_00000F9C:
    lwz r3, 0x7c(r29)
    lwzx r3, r3, r30
lbl_fn_803EEE44_00000FA4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803EEEDC(void)
{
    nofralloc
    stwu r1, -0x900(r1)
    mflr r0
    stw r0, 0x904(r1)
    stmw r17, 0x8c4(r1)
    mr r18, r3
    addi r3, r3, 0x48
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803EEEDC_00000FEC
    li r3, 0x0
    b lbl_fn_803EEEDC_00001480
lbl_fn_803EEEDC_00000FEC:
    lwz r0, 0x64(r18)
    cmpwi r0, 0x0
    bne lbl_fn_803EEEDC_00001478
    addi r3, r18, 0x48
    bl fn_8047059C
    mr r20, r3
    addi r3, r18, 0x48
    bl fn_80470580
    mr r19, r3
    mr r5, r20
    mr r4, r19
    addi r3, r1, 0x280
    bl fn_8004203C
    lwz r12, 0x280(r1)
    mr r4, r19
    mr r5, r20
    addi r3, r1, 0x280
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r19, r1, 0x8c
    addi r26, r1, 0x144
    addi r21, r1, 0x10
    addi r22, r1, 0x1c
    lis r27, lbl_8078CB10@ha
    lis r28, lbl_8078CB08@ha
    lis r29, lbl_8078CB00@ha
    lis r30, lbl_8078CAF4@ha
    lis r31, lbl_8078CAE8@ha
    lis r24, lbl_8078CB18@ha
    li r25, 0x0
    lis r23, lbl_8078CB38@ha
    b lbl_fn_803EEEDC_00001458
lbl_fn_803EEEDC_00001070:
    addi r3, r1, 0x280
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_803EEEDC_00001458
    addi r3, r1, 0x280
    bl fn_8005B3CC
    mr r17, r3
    addi r4, r23, lbl_8078CB38@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EEEDC_00001134
    addi r3, r1, 0x280
    bl fn_8005B3CC
    mr r5, r3
    addi r3, r1, 0x180
    addi r4, r24, lbl_8078CB18@l
    crclr 6
    bl sprintf
    stw r25, 0x1c(r1)
    lwz r6, 0x50(r18)
    cmpwi r6, 0x0
    beq lbl_fn_803EEEDC_000010E8
    stw r6, 0x1c(r1)
    addi r3, r18, 0x54
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_803EEEDC_000010E8:
    mr r3, r18
    addi r4, r1, 0x180
    addi r5, r1, 0x1c
    bl fn_803EEB78
    cmpwi r22, 0x0
    beq lbl_fn_803EEEDC_00001458
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803EEEDC_00001458
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_803EEEDC_0000112C
    addi r3, r22, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803EEEDC_0000112C:
    stw r25, 0x1c(r1)
    b lbl_fn_803EEEDC_00001458
lbl_fn_803EEEDC_00001134:
    addi r3, r1, 0x134
    bl fn_803EEB38
    addi r3, r17, 0x2
    bl fn_80684600
    mulli r20, r3, 0x3e8
    addi r3, r17, 0x6
    bl fn_80684600
    add r0, r3, r20
    stw r0, 0x134(r1)
    addi r3, r1, 0x280
    bl fn_8005B3CC
    addi r3, r1, 0x280
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x138(r1)
    addi r3, r1, 0x280
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x13c(r1)
    addi r3, r1, 0x280
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x140(r1)
    addi r3, r1, 0x280
    bl fn_8005B3CC
    cmplw r3, r26
    mr r20, r3
    beq lbl_fn_803EEEDC_000011BC
    bl strlen
    mr r5, r3
    mr r3, r26
    mr r4, r20
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_803EEEDC_000011BC:
    addi r3, r1, 0x280
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x164(r1)
    addi r3, r1, 0x280
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x168(r1)
    addi r3, r1, 0x280
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x16c(r1)
    addi r3, r1, 0x280
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x170(r1)
    addi r3, r1, 0x280
    bl fn_8005B3CC
    bl fn_800DC6B4
    stw r3, 0x174(r1)
    addi r3, r1, 0x280
    bl fn_8005B3CC
    stw r25, 0x10(r1)
    mr r20, r3
    stw r25, 0x14(r1)
    stw r25, 0x18(r1)
    bl strlen
    mr r17, r3
    mr r3, r21
    mr r4, r17
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r21
    stb r0, 0x8(r1)
    mr r6, r20
    add r7, r20, r17
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r1, 0x98
    la r4, lbl_8087DF0C
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    mr r4, r21
    addi r3, r1, 0x30
    addi r5, r1, 0x98
    bl fn_800EC2C4
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x5c
    addi r4, r1, 0x30
    bl fn_800EC654
    b lbl_fn_803EEEDC_0000138C
lbl_fn_803EEEDC_0000129C:
    mr r3, r19
    la r4, lbl_8087DF08
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803EEEDC_000012C0
    lwz r0, 0x178(r1)
    ori r0, r0, 0x1
    stw r0, 0x178(r1)
    b lbl_fn_803EEEDC_00001370
lbl_fn_803EEEDC_000012C0:
    mr r3, r19
    addi r4, r27, lbl_8078CB10@l
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803EEEDC_000012E4
    lwz r0, 0x178(r1)
    ori r0, r0, 0x2
    stw r0, 0x178(r1)
    b lbl_fn_803EEEDC_00001370
lbl_fn_803EEEDC_000012E4:
    mr r3, r19
    addi r4, r28, lbl_8078CB08@l
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803EEEDC_00001308
    lwz r0, 0x178(r1)
    ori r0, r0, 0x4
    stw r0, 0x178(r1)
    b lbl_fn_803EEEDC_00001370
lbl_fn_803EEEDC_00001308:
    mr r3, r19
    addi r4, r29, lbl_8078CB00@l
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803EEEDC_0000132C
    lwz r0, 0x178(r1)
    ori r0, r0, 0x8
    stw r0, 0x178(r1)
    b lbl_fn_803EEEDC_00001370
lbl_fn_803EEEDC_0000132C:
    mr r3, r19
    addi r4, r30, lbl_8078CAF4@l
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803EEEDC_00001350
    lwz r0, 0x178(r1)
    ori r0, r0, 0x10
    stw r0, 0x178(r1)
    b lbl_fn_803EEEDC_00001370
lbl_fn_803EEEDC_00001350:
    mr r3, r19
    addi r4, r31, lbl_8078CAE8@l
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803EEEDC_00001370
    lwz r0, 0x178(r1)
    ori r0, r0, 0x20
    stw r0, 0x178(r1)
lbl_fn_803EEEDC_00001370:
    addi r3, r1, 0xbc
    addi r4, r1, 0x5c
    li r5, 0x0
    bl fn_80205BE8
    addi r3, r1, 0xbc
    li r4, -0x1
    bl fn_800ED42C
lbl_fn_803EEEDC_0000138C:
    addi r3, r1, 0xf8
    addi r4, r1, 0x30
    bl fn_800EDFE8
    lbz r4, 0x124(r1)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_803EEEDC_000013B8
    lbz r0, 0x88(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803EEEDC_000013B8
    li r3, 0x1
lbl_fn_803EEEDC_000013B8:
    cmpwi r3, 0x0
    beq lbl_fn_803EEEDC_000013EC
    lwz r3, 0x11c(r1)
    li r20, 0x0
    lwz r0, 0x80(r1)
    cmplw r3, r0
    bne lbl_fn_803EEEDC_000013FC
    lwz r3, 0x120(r1)
    lwz r0, 0x84(r1)
    cmplw r3, r0
    bne lbl_fn_803EEEDC_000013FC
    li r20, 0x1
    b lbl_fn_803EEEDC_000013FC
lbl_fn_803EEEDC_000013EC:
    lbz r0, 0x88(r1)
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r20, r0, 5
lbl_fn_803EEEDC_000013FC:
    addi r3, r1, 0xf8
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r20, 0x0
    beq lbl_fn_803EEEDC_0000129C
    addi r3, r1, 0x5c
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x280
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x17c(r1)
    addi r3, r18, 0x50
    addi r4, r1, 0x134
    bl fn_803EF3B0
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800EC5BC
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803EEEDC_00001458
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_803EEEDC_00001458:
    addi r3, r1, 0x280
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803EEEDC_00001070
    addi r3, r18, 0x48
    bl fn_80473F88
    li r0, 0x1
    stw r0, 0x64(r18)
lbl_fn_803EEEDC_00001478:
    mr r3, r18
    bl fn_800D3FA4
lbl_fn_803EEEDC_00001480:
    lmw r17, 0x8c4(r1)
    lwz r0, 0x904(r1)
    mtlr r0
    addi r1, r1, 0x900
    blr
}

asm void fn_803EF3B0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803EF3B0_0000158C
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x18(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x1c(r1)
    mr r31, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_803EF3B0_00001530
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r31, 0xc(r3)
lbl_fn_803EF3B0_00001530:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_803EF3B0_00001544
    bl fn_80084C24
lbl_fn_803EF3B0_00001544:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x1c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x18(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x18
    beq lbl_fn_803EF3B0_0000158C
    addic. r3, r3, 0x4
    beq lbl_fn_803EF3B0_0000158C
    beq lbl_fn_803EF3B0_0000158C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803EF3B0_0000158C
    bl fn_806952C4
lbl_fn_803EF3B0_0000158C:
    lwz r5, 0x0(r29)
    mr r4, r30
    addi r3, r29, 0x4
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803EF4DC(void)
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
    beq lbl_fn_803EF4DC_00001654
    addic. r31, r3, 0x50
    beq lbl_fn_803EF4DC_00001628
    beq lbl_fn_803EF4DC_00001628
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803EF4DC_00001628
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_803EF4DC_00001620
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803EF4DC_00001620:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_803EF4DC_00001628:
    addic. r3, r29, 0x48
    beq lbl_fn_803EF4DC_00001638
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803EF4DC_00001638:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_803EF4DC_00001654
    mr r3, r29
    bl dtor_80084684
lbl_fn_803EF4DC_00001654:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803EF590(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80752040@ha
    addi r31, r31, lbl_80752040@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_803EF590_000016C0
lbl_fn_803EF590_000016A0:
    mr r3, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EF590_000016B8
    mr r3, r30
    b lbl_fn_803EF590_000016D0
lbl_fn_803EF590_000016B8:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_803EF590_000016C0:
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_fn_803EF590_000016A0
    li r3, -0x1
lbl_fn_803EF590_000016D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803EF608(void)
{
    nofralloc
    li r5, 0x0
    li r0, 0x1
    li r4, -0x1
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r5, 0x10(r3)
    stw r5, 0x14(r3)
    stw r5, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r5, 0x24(r3)
    stw r4, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    blr
}

asm void fn_803EF64C(void)
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
    beq lbl_fn_803EF64C_00001848
    li r4, 0x0
    bl fn_803F10AC
    addic. r0, r30, 0x20
    beq lbl_fn_803EF64C_00001788
    lwz r3, 0x24(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803EF64C_0000177C
    lis r4, fn_80041C0C@ha
    addi r4, r4, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_803EF64C_0000177C:
    li r0, 0x0
    stw r0, 0x24(r30)
    stw r0, 0x20(r30)
lbl_fn_803EF64C_00001788:
    addic. r0, r30, 0x18
    beq lbl_fn_803EF64C_000017B4
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803EF64C_000017A8
    lis r4, fn_800CB3A0@ha
    addi r4, r4, fn_800CB3A0@l
    bl fn_80695A50
lbl_fn_803EF64C_000017A8:
    li r0, 0x0
    stw r0, 0x1c(r30)
    stw r0, 0x18(r30)
lbl_fn_803EF64C_000017B4:
    addic. r0, r30, 0x10
    beq lbl_fn_803EF64C_000017E0
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803EF64C_000017D4
    lis r4, fn_800EF73C@ha
    addi r4, r4, fn_800EF73C@l
    bl fn_80695A50
lbl_fn_803EF64C_000017D4:
    li r0, 0x0
    stw r0, 0x14(r30)
    stw r0, 0x10(r30)
lbl_fn_803EF64C_000017E0:
    addic. r0, r30, 0x8
    beq lbl_fn_803EF64C_0000180C
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803EF64C_00001800
    lis r4, fn_802375C4@ha
    addi r4, r4, fn_802375C4@l
    bl fn_80695A50
lbl_fn_803EF64C_00001800:
    li r0, 0x0
    stw r0, 0xc(r30)
    stw r0, 0x8(r30)
lbl_fn_803EF64C_0000180C:
    cmpwi r30, 0x0
    beq lbl_fn_803EF64C_00001838
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803EF64C_0000182C
    beq lbl_fn_803EF64C_0000182C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803EF64C_0000182C:
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
lbl_fn_803EF64C_00001838:
    cmpwi r31, 0x0
    ble lbl_fn_803EF64C_00001848
    mr r3, r30
    bl dtor_80084684
lbl_fn_803EF64C_00001848:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EF780(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    stw r0, 0x6d4(r1)
    stmw r25, 0x6b4(r1)
    mr r27, r3
    addi r3, r1, 0x70
    bl fn_803EFCA8
    addi r3, r1, 0x38
    bl fn_801206EC
    addi r3, r1, 0x2c
    bl fn_803EFDD0
    lis r28, lbl_80752084@ha
    li r29, 0x0
    li r30, 0x0
    li r31, 0x0
    addi r26, r28, lbl_80752084@l
lbl_fn_803EF780_000018A4:
    addi r3, r1, 0x70
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r25, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803EF780_00001B14
    addi r4, r28, lbl_80752084@l
    li r5, 0x6
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803EF780_000019E0
    addi r3, r1, 0x48
    bl fn_803EFD60
    addi r3, r1, 0x70
    bl fn_8005B9CC
    bl fn_802180A8
    stw r3, 0x48(r1)
    addi r3, r1, 0x70
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x4c(r1)
    addi r3, r1, 0x70
    bl fn_8005B9CC
    bl fn_803EF590
    cmpwi r3, 0x0
    stw r3, 0x50(r1)
    bne lbl_fn_803EF780_00001918
    addi r29, r29, 0x1
    b lbl_fn_803EF780_00001948
lbl_fn_803EF780_00001918:
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_803EF780_0000192C
    addi r30, r30, 0x1
    b lbl_fn_803EF780_00001948
lbl_fn_803EF780_0000192C:
    cmpwi r3, 0x3
    beq lbl_fn_803EF780_00001944
    cmpwi r3, 0x4
    beq lbl_fn_803EF780_00001944
    cmpwi r3, 0x6
    bne lbl_fn_803EF780_00001948
lbl_fn_803EF780_00001944:
    addi r31, r31, 0x1
lbl_fn_803EF780_00001948:
    addi r3, r1, 0x2c
    bl fn_803EFE5C
    stw r3, 0x54(r1)
    addi r3, r1, 0x70
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8003E4A4
    addi r3, r1, 0x38
    addi r4, r1, 0x20
    bl fn_801207D4
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x70
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x58(r1)
    addi r3, r1, 0x70
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x5c(r1)
    addi r3, r1, 0x70
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x60(r1)
    addi r3, r1, 0x70
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x64(r1)
    addi r3, r1, 0x70
    bl fn_8005B9CC
    bl fn_800DC6B4
    stw r3, 0x68(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x48
    bl fn_803EFE64
    b lbl_fn_803EF780_00001B14
lbl_fn_803EF780_000019E0:
    mr r3, r25
    addi r4, r26, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EF780_00001AC8
    addi r3, r1, 0x70
    bl fn_8005B9CC
    addi r4, r1, 0x1c
    addi r5, r1, 0x18
    addi r6, r1, 0x14
    bl fn_80216AFC
    cmpwi r3, 0x0
    beq lbl_fn_803EF780_00001B14
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803EF780_00001B14
    bl fn_80121F00
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803EF780_00001B14
    bl fn_80121F00
    bl fn_80373148
    mr r25, r3
    bl fn_803EFD9C
    lwz r0, 0x1c(r1)
    cmpw r0, r3
    bne lbl_fn_803EF780_00001AB4
    mr r3, r25
    bl fn_803EFDA4
    lwz r0, 0x18(r1)
    cmpw r0, r3
    bne lbl_fn_803EF780_00001AB4
    mr r3, r25
    bl fn_803EFDAC
    lwz r0, 0x14(r1)
    cmpw r0, r3
    beq lbl_fn_803EF780_00001B14
    b lbl_fn_803EF780_00001AB4
lbl_fn_803EF780_00001A78:
    addi r3, r1, 0x70
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r25, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803EF780_00001AB4
    addi r4, r26, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_803EF780_00001B14
    mr r3, r25
    addi r4, r26, 0x10
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_803EF780_00001B14
lbl_fn_803EF780_00001AB4:
    addi r3, r1, 0x70
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803EF780_00001A78
    b lbl_fn_803EF780_00001B14
lbl_fn_803EF780_00001AC8:
    mr r3, r25
    addi r4, r26, 0x10
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EF780_00001B14
    b lbl_fn_803EF780_00001B04
lbl_fn_803EF780_00001AE0:
    addi r3, r1, 0x70
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803EF780_00001B04
    addi r4, r26, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_803EF780_00001B14
lbl_fn_803EF780_00001B04:
    addi r3, r1, 0x70
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803EF780_00001AE0
lbl_fn_803EF780_00001B14:
    addi r3, r1, 0x70
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803EF780_000018A4
    addi r3, r1, 0x2c
    bl fn_803EFE5C
    lis r26, lbl_80752084@ha
    mr r4, r3
    addi r26, r26, lbl_80752084@l
    mr r3, r27
    addi r6, r26, 0x15
    li r5, 0x3
    bl fn_803F0280
    mr r4, r29
    addi r3, r27, 0x8
    addi r6, r26, 0x15
    li r5, 0x3
    bl fn_803F0328
    mr r4, r30
    addi r3, r27, 0x10
    addi r6, r26, 0x15
    li r5, 0x3
    bl fn_803F03D8
    mr r4, r31
    addi r3, r27, 0x18
    addi r6, r26, 0x15
    li r5, 0x3
    bl fn_803F0488
    mr r4, r31
    addi r3, r27, 0x20
    addi r6, r26, 0x15
    li r5, 0x3
    bl fn_803F0538
    addi r3, r1, 0x2c
    li r28, 0x0
    li r31, 0x0
    li r30, 0x0
    li r29, 0x0
    bl fn_803F05E8
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_803F05F0
    b lbl_fn_803EF780_00001D40
lbl_fn_803EF780_00001BC4:
    addi r3, r1, 0x10
    bl fn_803F05FC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803EF780_00001C20
    addi r3, r1, 0x10
    bl fn_803F05FC
    mr r4, r3
    addi r3, r1, 0x38
    lwz r4, 0xc(r4)
    bl fn_80120D34
    bl fn_8004212C
    mr r26, r3
    mr r4, r31
    addi r3, r27, 0x8
    bl fn_803F0604
    mr r4, r26
    bl fn_80237654
    addi r3, r1, 0x10
    bl fn_803F05FC
    stw r31, 0xc(r3)
    addi r31, r31, 0x1
    b lbl_fn_803EF780_00001D10
lbl_fn_803EF780_00001C20:
    addi r3, r1, 0x10
    bl fn_803F05FC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803EF780_00001C48
    addi r3, r1, 0x10
    bl fn_803F05FC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803EF780_00001C90
lbl_fn_803EF780_00001C48:
    addi r3, r1, 0x10
    bl fn_803F05FC
    mr r4, r3
    addi r3, r1, 0x38
    lwz r4, 0xc(r4)
    bl fn_80120D34
    bl fn_8004212C
    mr r26, r3
    mr r4, r30
    addi r3, r27, 0x10
    bl fn_803F0614
    mr r4, r26
    bl fn_8023780C
    addi r3, r1, 0x10
    bl fn_803F05FC
    stw r30, 0xc(r3)
    addi r30, r30, 0x1
    b lbl_fn_803EF780_00001D10
lbl_fn_803EF780_00001C90:
    addi r3, r1, 0x10
    bl fn_803F05FC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803EF780_00001CCC
    addi r3, r1, 0x10
    bl fn_803F05FC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x4
    beq lbl_fn_803EF780_00001CCC
    addi r3, r1, 0x10
    bl fn_803F05FC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x6
    bne lbl_fn_803EF780_00001D10
lbl_fn_803EF780_00001CCC:
    addi r3, r1, 0x10
    bl fn_803F05FC
    mr r4, r3
    addi r3, r1, 0x38
    lwz r4, 0xc(r4)
    bl fn_80120D34
    bl fn_8004212C
    mr r26, r3
    mr r4, r29
    addi r3, r27, 0x20
    bl fn_8004274C
    mr r4, r26
    bl fn_8012044C
    addi r3, r1, 0x10
    bl fn_803F05FC
    stw r29, 0xc(r3)
    addi r29, r29, 0x1
lbl_fn_803EF780_00001D10:
    addi r3, r1, 0x10
    bl fn_803F0634
    mr r26, r3
    mr r3, r27
    mr r4, r28
    bl fn_803F0624
    mr r4, r26
    bl fn_803F063C
    addi r3, r1, 0x10
    li r4, 0x0
    addi r28, r28, 0x1
    bl fn_803F0688
lbl_fn_803EF780_00001D40:
    addi r3, r1, 0x2c
    bl fn_803F069C
    stw r3, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl fn_803EFDB4
    cmpwi r3, 0x0
    bne lbl_fn_803EF780_00001BC4
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_803EFDE4
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_80120700
    lmw r25, 0x6b4(r1)
    lwz r0, 0x6d4(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}
