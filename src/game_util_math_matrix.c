#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800D0240(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_80117228(void);
extern void fn_801F3FF8(void);
extern void fn_801F4E8C(void);
extern void fn_801F64D0(void);
extern void fn_801FECE0(void);
extern void fn_801FEE08(void);
extern void fn_8036E89C(void);
extern void fn_803E627C(void);
extern void fn_803E63D0(void);
extern void fn_803E644C(void);
extern void fn_803E64F0(void);
extern void fn_803E656C(void);
extern void fn_803E65F8(void);
extern void fn_8044441C(void);
extern void fn_804444E8(void);
extern void fn_8044D490(void);
extern void fn_8044D678(void);
extern void fn_80470364(void);
extern void fn_80470528(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_804A39EC(void);
extern void fn_804A3A68(void);
extern void fn_804A436C(void);
extern void fn_804A4494(void);
extern void fn_804A53D4(void);
extern void fn_80580B54(void);
extern void fn_80581678(void);
extern void fn_80581820(void);
extern void fn_80581968(void);
extern void fn_80581FDC(void);
extern void fn_80624AB0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8076105C[];
extern u8 lbl_807612E4[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807967A8[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_808813D0;
extern u32 lbl_80888098;
extern u32 lbl_8088809C;
extern u32 lbl_808880A0;
extern u32 lbl_808880A4;
extern u32 lbl_808880A8;
extern u32 lbl_808880AC;
extern u32 lbl_808880B0;
extern u32 lbl_808880B4;
extern u32 lbl_808880B8;
extern u32 lbl_808880C0;
extern u32 lbl_808880C4;
extern u32 lbl_808880C8;
extern u32 lbl_808880CC;
extern u32 lbl_808880D0;

/* Function declarations */
void fn_8057EAF4(void);
void fn_8057EF44(void);
void fn_8057F0FC(void);
void fn_8057F158(void);
void fn_8057F19C(void);
void fn_8057F1B8(void);
void fn_8057F284(void);
void fn_8057F7AC(void);
void fn_8057F884(void);
void fn_8057F8FC(void);
void fn_8057FB24(void);
void fn_8057FB6C(void);
void fn_8057FC28(void);
void fn_8057FD00(void);
void fn_8057FDE4(void);
void fn_8057FDE8(void);
void fn_8057FF3C(void);
void fn_80580100(void);
void fn_80580268(void);
void fn_80580370(void);

asm void fn_8057EAF4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8076105C@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_8076105C@l
    addi r4, r4, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8057EAF4_00000058
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8057EAF4_00000058
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x0(r28)
    mr r30, r3
    b lbl_fn_8057EAF4_0000005C
lbl_fn_8057EAF4_00000058:
    li r30, 0x0
lbl_fn_8057EAF4_0000005C:
    lis r31, lbl_8076105C@ha
    mr r3, r30
    addi r31, r31, lbl_8076105C@l
    addi r4, r31, 0xb
    bl fn_8008937C
    mr r29, r3
    addi r4, r31, 0x16
    addi r5, r28, 0x28
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r31, 0x21
    addi r5, r28, 0x2c
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r31, 0x2a
    addi r5, r28, 0x30
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r31, 0x38
    addi r5, r28, 0x34
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x46
    bl fn_8008937C
    lfs f1, lbl_808880A4
    mr r29, r3
    lfs f2, lbl_80888098
    addi r4, r31, 0x4d
    lfs f3, lbl_808880A8
    addi r5, r28, 0x48
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808880A4
    mr r3, r29
    lfs f2, lbl_808880AC
    addi r4, r31, 0x5b
    lfs f3, lbl_808880A8
    addi r5, r28, 0x4c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808880B0
    mr r3, r29
    lfs f2, lbl_808880B4
    addi r4, r31, 0x6a
    lfs f3, lbl_808880A8
    addi r5, r28, 0x44
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808880B0
    mr r3, r29
    lfs f2, lbl_808880B4
    addi r4, r31, 0x74
    lfs f3, lbl_808880A8
    addi r5, r28, 0x40
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80888098
    mr r3, r29
    lfs f2, lbl_808880B8
    addi r4, r31, 0x84
    fmr f3, f1
    addi r5, r28, 0x54
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x8d
    bl fn_8008937C
    mr r29, r3
    addi r4, r31, 0x96
    addi r5, r28, 0x58
    li r6, 0x0
    li r7, 0x4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r31, 0xa3
    addi r5, r28, 0x5c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r31, 0xaf
    addi r5, r28, 0x60
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r31, 0xbe
    addi r5, r28, 0x64
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0xce
    bl fn_8008937C
    mr r29, r3
    addi r4, r31, 0xd6
    addi r5, r28, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r31, 0xe1
    addi r5, r28, 0x7c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r31, 0xee
    addi r5, r28, 0x80
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r31, 0xfc
    addi r5, r28, 0x84
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x10f
    bl fn_8008937C
    mr r29, r3
    addi r4, r31, 0x115
    addi r5, r28, 0x94
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808880A4
    mr r3, r29
    lfs f2, lbl_80888098
    addi r4, r31, 0x11f
    lfs f3, lbl_808880A8
    addi r5, r28, 0x98
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808880A4
    mr r3, r29
    lfs f2, lbl_80888098
    addi r4, r31, 0x12a
    lfs f3, lbl_808880A8
    addi r5, r28, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808880A4
    mr r3, r29
    lfs f2, lbl_80888098
    addi r4, r31, 0x134
    lfs f3, lbl_808880A8
    addi r5, r28, 0xa0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x141
    addi r5, r28, 0x20
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x149
    addi r5, r28, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x96
    addi r5, r28, 0x18
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x159
    addi r5, r28, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x162
    addi r5, r28, 0x1c
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x170
    addi r5, r28, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x17c
    addi r5, r28, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x186
    addi r5, r28, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057EF44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x8
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    stw r29, 0x24(r3)
    stw r29, 0x28(r3)
    stw r29, 0x2c(r3)
    stw r29, 0x30(r3)
    stw r29, 0x34(r3)
    addi r3, r3, 0x38
    bl memset
    lfs f2, lbl_80888098
    li r31, 0x1
    lfs f1, lbl_8088809C
    li r0, 0x10
    lfs f0, lbl_808880A0
    li r30, 0x2
    stfs f2, 0x40(r28)
    addi r3, r28, 0x68
    li r4, 0x0
    li r5, 0x10
    stfs f2, 0x44(r28)
    stfs f1, 0x48(r28)
    stfs f2, 0x4c(r28)
    stfs f0, 0x54(r28)
    stw r0, 0x50(r28)
    stw r30, 0x58(r28)
    stw r31, 0x5c(r28)
    stw r31, 0x60(r28)
    stw r31, 0x64(r28)
    bl memset
    stw r31, 0x78(r28)
    addi r3, r28, 0x88
    li r4, 0x0
    li r5, 0xc
    stw r31, 0x7c(r28)
    stw r31, 0x80(r28)
    stw r29, 0x84(r28)
    bl memset
    lfs f0, lbl_80888098
    stw r31, 0x94(r28)
    stfs f0, 0x98(r28)
    stfs f0, 0x9c(r28)
    stfs f0, 0xa0(r28)
    bl fn_80624AB0
    clrlwi. r0, r3, 24
    bne lbl_fn_8057EF44_00000530
    stw r30, 0x94(r28)
    b lbl_fn_8057EF44_00000544
lbl_fn_8057EF44_00000530:
    cmplwi r0, 0x2
    bne lbl_fn_8057EF44_00000540
    stw r29, 0x94(r28)
    b lbl_fn_8057EF44_00000544
lbl_fn_8057EF44_00000540:
    stw r31, 0x94(r28)
lbl_fn_8057EF44_00000544:
    lwz r3, lbl_8087EFE8
    lfs f1, 0x98(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8057EF44_000005CC
    li r4, 0x0
    li r5, 0x0
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    lfs f1, 0x9c(r28)
    li r5, 0x0
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    lfs f1, 0xa0(r28)
    li r5, 0x0
    bl fn_800D0240
    lwz r0, 0x94(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8057EF44_000005A0
    cmpwi r0, 0x2
    beq lbl_fn_8057EF44_000005B0
    b lbl_fn_8057EF44_000005C0
lbl_fn_8057EF44_000005A0:
    lwz r3, lbl_8087EFE8
    li r0, 0x2
    stw r0, 0x2a10(r3)
    b lbl_fn_8057EF44_000005CC
lbl_fn_8057EF44_000005B0:
    lwz r3, lbl_8087EFE8
    li r0, 0x3
    stw r0, 0x2a10(r3)
    b lbl_fn_8057EF44_000005CC
lbl_fn_8057EF44_000005C0:
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x2a10(r3)
lbl_fn_8057EF44_000005CC:
    li r0, 0x0
    stw r0, 0xa4(r28)
    lwz r3, lbl_8087EFA8
    cmpwi r3, 0x0
    beq lbl_fn_8057EF44_000005E8
    li r0, 0xa
    stw r0, 0x34(r3)
lbl_fn_8057EF44_000005E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057F0FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80624AB0
    clrlwi. r0, r3, 24
    bne lbl_fn_8057F0FC_00000634
    li r0, 0x2
    stw r0, 0x94(r31)
    b lbl_fn_8057F0FC_00000650
lbl_fn_8057F0FC_00000634:
    cmplwi r0, 0x2
    bne lbl_fn_8057F0FC_00000648
    li r0, 0x0
    stw r0, 0x94(r31)
    b lbl_fn_8057F0FC_00000650
lbl_fn_8057F0FC_00000648:
    li r0, 0x1
    stw r0, 0x94(r31)
lbl_fn_8057F0FC_00000650:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057F158(void)
{
    nofralloc
    cmpwi r4, 0x2
    stw r4, 0x94(r3)
    bne lbl_fn_8057F158_00000680
    lwz r3, lbl_8087EFE8
    li r0, 0x3
    stw r0, 0x2a10(r3)
    blr
lbl_fn_8057F158_00000680:
    cmpwi r4, 0x0
    bne lbl_fn_8057F158_00000698
    lwz r3, lbl_8087EFE8
    li r0, 0x2
    stw r0, 0x2a10(r3)
    blr
lbl_fn_8057F158_00000698:
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x2a10(r3)
    blr
}

asm void fn_8057F19C(void)
{
    nofralloc
    stw r4, 0xa4(r3)
    lwz r3, lbl_8087EFA8
    cmpwi r3, 0x0
    beqlr
    addi r0, r4, 0xa
    stw r0, 0x34(r3)
    blr
}

asm void fn_8057F1B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f1, 0x4(r4)
    stw r0, 0x14(r1)
    lwz r0, 0x0(r4)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f2, 0x8(r4)
    lfs f0, 0xc(r4)
    stw r0, 0x94(r3)
    stfs f1, 0x98(r3)
    stfs f2, 0x9c(r3)
    stfs f0, 0xa0(r3)
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8057F1B8_0000077C
    li r4, 0x0
    li r5, 0x0
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    lfs f1, 0x9c(r31)
    li r5, 0x0
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    lfs f1, 0xa0(r31)
    li r5, 0x0
    bl fn_800D0240
    lwz r0, 0x94(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8057F1B8_00000750
    cmpwi r0, 0x2
    beq lbl_fn_8057F1B8_00000760
    b lbl_fn_8057F1B8_00000770
lbl_fn_8057F1B8_00000750:
    lwz r3, lbl_8087EFE8
    li r0, 0x2
    stw r0, 0x2a10(r3)
    b lbl_fn_8057F1B8_0000077C
lbl_fn_8057F1B8_00000760:
    lwz r3, lbl_8087EFE8
    li r0, 0x3
    stw r0, 0x2a10(r3)
    b lbl_fn_8057F1B8_0000077C
lbl_fn_8057F1B8_00000770:
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x2a10(r3)
lbl_fn_8057F1B8_0000077C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057F284(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x130
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    bl _savegpr_24
    mr r29, r3
    mr r25, r4
    mr r24, r5
    mr r30, r6
    mr r31, r7
    bl fn_800D1D3C
    lis r3, lbl_807967A8@ha
    addi r27, r29, 0x58
    addi r3, r3, lbl_807967A8@l
    stw r3, 0x0(r29)
    mr r3, r27
    stw r25, 0x48(r29)
    stw r24, 0x4c(r29)
    stw r30, 0x50(r29)
    stw r31, 0x54(r29)
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r26, 0x0
    addi r3, r3, lbl_8078FBB0@l
    li r0, -0x1
    stw r3, 0x0(r27)
    addi r25, r29, 0xfc
    lfs f31, lbl_808880C0
    addi r24, r29, 0x32fc
    stw r26, 0x60(r29)
    li r28, 0x64
    li r27, 0x1
    stw r26, 0x64(r29)
    stw r26, 0x6c(r29)
    stw r26, 0x78(r29)
    stw r0, 0x7c(r29)
    stw r26, 0x84(r29)
    stw r26, 0x8c(r29)
    stw r26, 0xdc(r29)
    stw r26, 0xe0(r29)
    stw r26, 0xe4(r29)
    stw r26, 0xec(r29)
    stw r26, 0xf0(r29)
    stw r26, 0xf8(r29)
lbl_fn_8057F284_00000848:
    stw r26, 0x0(r25)
    addi r3, r25, 0x8
    li r4, 0x0
    li r5, 0x40
    stw r26, 0x4(r25)
    bl memset
    stfs f31, 0x48(r25)
    stw r26, 0x4c(r25)
    stw r28, 0x50(r25)
    stw r27, 0x54(r25)
    stw r26, 0x5c(r25)
    stw r27, 0x60(r25)
    addi r25, r25, 0x64
    cmplw r25, r24
    blt lbl_fn_8057F284_00000848
    addis r26, r29, 0x2
    li r27, 0x0
    stw r27, 0x32fc(r29)
    addi r25, r29, 0x3300
    addi r26, r26, 0x5b00
lbl_fn_8057F284_00000898:
    stw r27, 0x0(r25)
    addi r3, r25, 0x8
    li r4, 0x0
    li r5, 0x40
    stw r27, 0x4(r25)
    bl memset
    addi r25, r25, 0x5c
    cmplw r25, r26
    blt lbl_fn_8057F284_00000898
    addis r3, r29, 0x2
    li r27, 0x0
    li r28, 0x1
    lis r4, lbl_807612E4@ha
    stw r27, 0x5b04(r3)
    addi r4, r4, lbl_807612E4@l
    li r5, 0x0
    li r6, 0x0
    stw r27, 0x5b08(r3)
    li r7, 0x1
    stw r27, 0x5b0c(r3)
    stw r27, 0x5b10(r3)
    stw r27, 0x5b14(r3)
    stw r27, 0x5b18(r3)
    stw r27, 0x5b1c(r3)
    stw r27, 0x5b20(r3)
    stw r27, 0x5b24(r3)
    stw r27, 0x5b28(r3)
    stw r27, 0x5b30(r3)
    stw r27, 0x5b34(r3)
    stw r27, 0x5b38(r3)
    stw r27, 0x5b3c(r3)
    stw r28, 0x5b40(r3)
    stw r27, 0x5b44(r3)
    stw r27, 0x5b48(r3)
    stw r27, 0x5b4c(r3)
    stw r27, 0x5b50(r3)
    stw r27, 0x5b54(r3)
    stw r27, 0x5b58(r3)
    stw r27, 0x5b5c(r3)
    stw r27, 0x5b60(r3)
    stw r27, 0x5b64(r3)
    addi r3, r3, 0x5b44
    bl fn_80470364
    addis r3, r29, 0x2
    lwz r0, 0x54(r29)
    lwz r5, 0x5b34(r3)
    li r4, 0x6
    cmpwi r0, 0x0
    stw r4, 0x5b00(r3)
    subf r0, r5, r5
    stw r27, 0xf8(r29)
    stw r27, 0x32fc(r29)
    stw r0, 0x5b34(r3)
    ble lbl_fn_8057F284_00000998
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8057F284_00000998
    lwz r0, 0x2638(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8057F284_00000998
    mr r4, r31
    bl fn_803E627C
    addis r3, r29, 0x2
    stw r28, 0x5b3c(r3)
lbl_fn_8057F284_00000998:
    lis r31, lbl_807612E4@ha
    mr r3, r29
    addi r31, r31, lbl_807612E4@l
    addi r4, r31, 0x11
    bl fn_801F64D0
    stw r3, 0x68(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x20
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x70(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x3c
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x74(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x58
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x80(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x75
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x90(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x9e
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x94(r29)
    li r4, 0x1
    bl fn_800D246C
    addi r25, r31, 0xc7
    li r24, 0x0
    li r26, 0x0
lbl_fn_8057F284_00000A50:
    mr r3, r29
    mr r4, r25
    bl fn_801F64D0
    add r5, r29, r26
    li r4, 0x1
    stw r3, 0x98(r5)
    bl fn_800D246C
    addi r24, r24, 0x1
    addi r26, r26, 0x4
    cmpwi r24, 0x2
    blt lbl_fn_8057F284_00000A50
    lis r31, lbl_807612E4@ha
    mr r3, r29
    addi r31, r31, lbl_807612E4@l
    li r5, 0x0
    addi r4, r31, 0xf1
    bl fn_801F3FF8
    stw r3, 0xa8(r29)
    li r4, 0x1
    bl fn_800D246C
    addi r25, r31, 0x11b
    li r24, 0x0
    li r26, 0x0
lbl_fn_8057F284_00000AAC:
    mr r3, r29
    mr r4, r25
    bl fn_801F64D0
    add r5, r29, r26
    li r4, 0x1
    stw r3, 0xac(r5)
    bl fn_800D246C
    addi r24, r24, 0x1
    addi r26, r26, 0x4
    cmpwi r24, 0xa
    blt lbl_fn_8057F284_00000AAC
    lis r31, lbl_807612E4@ha
    mr r3, r29
    addi r31, r31, lbl_807612E4@l
    li r5, 0x0
    addi r4, r31, 0x140
    bl fn_801F3FF8
    stw r3, 0xd4(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x168
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xd8(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x18f
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r29, 0x2
    li r4, 0x1
    stw r3, 0x5b2c(r5)
    bl fn_800D246C
    addis r3, r29, 0x2
    addi r4, r31, 0x1b5
    lwz r0, 0x5b48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8057F284_00000B70
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8057F284_00000B70
    addi r3, r3, 0x10
    bl fn_8008937C
    addis r4, r29, 0x2
    mr r25, r3
    stw r3, 0x5b48(r4)
    b lbl_fn_8057F284_00000B74
lbl_fn_8057F284_00000B70:
    li r25, 0x0
lbl_fn_8057F284_00000B74:
    lis r31, lbl_807612E4@ha
    addis r5, r29, 0x2
    addi r31, r31, lbl_807612E4@l
    mr r3, r25
    addi r4, r31, 0x1bf
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0x5b50
    bl fn_80087994
    addis r5, r29, 0x2
    mr r3, r25
    addi r4, r31, 0x1cf
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0x5b54
    bl fn_80087994
    addis r5, r29, 0x2
    mr r3, r25
    addi r4, r31, 0x1de
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0x5b58
    bl fn_80087994
    addis r5, r29, 0x2
    lis r6, 0xf
    addi r7, r6, 0x423f
    mr r3, r25
    addi r4, r31, 0x1f0
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    addi r5, r5, 0x5b4c
    bl fn_800874C8
    lwz r5, 0x4c(r29)
    cmpwi r5, 0x2
    bne lbl_fn_8057F284_00000C2C
    cmpwi r30, 0x2
    bne lbl_fn_8057F284_00000C2C
    lwz r12, 0x58(r29)
    addi r3, r29, 0x58
    addi r4, r31, 0x1fc
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_8057F284_00000C94
lbl_fn_8057F284_00000C2C:
    cmpwi r5, 0x0
    bne lbl_fn_8057F284_00000C5C
    lwz r0, 0x50(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8057F284_00000C5C
    lis r4, lbl_807612E4@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807612E4@l
    addi r4, r4, 0x219
    crclr 6
    bl sprintf
    b lbl_fn_8057F284_00000C7C
lbl_fn_8057F284_00000C5C:
    lis r4, lbl_807612E4@ha
    lwz r6, 0x50(r29)
    addi r4, r4, lbl_807612E4@l
    addi r3, r1, 0x8
    addi r4, r4, 0x236
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
lbl_fn_8057F284_00000C7C:
    lwz r12, 0x58(r29)
    addi r3, r29, 0x58
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8057F284_00000C94:
    psq_l f31, 0x138(r1), 0, 0
    mr r3, r29
    lfd f31, 0x130(r1)
    addi r11, r1, 0x130
    bl _restgpr_24
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8057F7AC(void)
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
    beq lbl_fn_8057F7AC_00000D74
    addis r3, r3, 0x2
    addic. r0, r3, 0x5b48
    beq lbl_fn_8057F7AC_00000D04
    lwz r4, 0x5b48(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8057F7AC_00000D04
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8057F7AC_00000D04
    bl fn_800897D8
lbl_fn_8057F7AC_00000D04:
    addis r3, r30, 0x2
    addic. r0, r3, 0x5b44
    beq lbl_fn_8057F7AC_00000D18
    addi r3, r3, 0x5b44
    bl fn_80470528
lbl_fn_8057F7AC_00000D18:
    addis r4, r30, 0x2
    addic. r4, r4, 0x5b30
    beq lbl_fn_8057F7AC_00000D48
    beq lbl_fn_8057F7AC_00000D48
    beq lbl_fn_8057F7AC_00000D48
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8057F7AC_00000D48
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8057F7AC_00000D48:
    addic. r3, r30, 0x58
    beq lbl_fn_8057F7AC_00000D58
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8057F7AC_00000D58:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8057F7AC_00000D74
    mr r3, r30
    bl dtor_80084684
lbl_fn_8057F7AC_00000D74:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057F884(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8057F884_00000DB8
    li r3, 0x1
    b lbl_fn_8057F884_00000DF4
lbl_fn_8057F884_00000DB8:
    addi r3, r31, 0x58
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8057F884_00000DD0
    li r3, 0x1
    b lbl_fn_8057F884_00000DF4
lbl_fn_8057F884_00000DD0:
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8057F884_00000DF0
    bl fn_803E644C
    cmpwi r3, 0x0
    beq lbl_fn_8057F884_00000DF0
    li r3, 0x1
    b lbl_fn_8057F884_00000DF4
lbl_fn_8057F884_00000DF0:
    li r3, 0x0
lbl_fn_8057F884_00000DF4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057F8FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addis r3, r3, 0x2
    addi r3, r3, 0x5b44
    bl fn_80470528
    lwz r0, 0x54(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8057F8FC_00000E78
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8057F8FC_00000EA8
    addis r4, r29, 0x2
    lwz r0, 0x5b3c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8057F8FC_00000EA8
    bl fn_803E64F0
    b lbl_fn_8057F8FC_00000EA8
lbl_fn_8057F8FC_00000E78:
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    li r4, 0x1e
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8057F8FC_00000EA8:
    lwz r3, 0x74(r29)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C8
    bl fn_804A39EC
    lwz r3, 0x80(r29)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C8
    bl fn_804A39EC
    lwz r3, 0x70(r29)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C0
    bl fn_804A39EC
    lwz r3, 0x68(r29)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C0
    bl fn_804A3A68
    lwz r3, 0x90(r29)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C0
    bl fn_804A39EC
    lwz r3, 0x94(r29)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C0
    bl fn_804A39EC
    mr r31, r29
    li r30, 0x0
lbl_fn_8057F8FC_00000F40:
    lwz r3, 0x98(r31)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C0
    bl fn_804A3A68
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x2
    blt lbl_fn_8057F8FC_00000F40
    lwz r3, 0xd4(r29)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C0
    bl fn_804A39EC
    lwz r3, 0xd8(r29)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C0
    bl fn_804A39EC
    lfs f1, lbl_808880C4
    addis r3, r29, 0x2
    lwz r3, 0x5b2c(r3)
    li r4, 0x1
    fmr f2, f1
    li r5, 0x0
    bl fn_804A39EC
    lfs f1, lbl_808880C4
    li r4, 0x1
    lwz r3, 0xa8(r29)
    li r5, 0x0
    fmr f2, f1
    bl fn_804A39EC
    mr r31, r29
    li r30, 0x0
lbl_fn_8057F8FC_00000FD4:
    lwz r3, 0xac(r31)
    li r4, 0x1
    lfs f1, lbl_808880C4
    li r5, 0x0
    lfs f2, lbl_808880C0
    bl fn_804A3A68
    lwz r3, 0xac(r31)
    addi r30, r30, 0x1
    cmpwi r30, 0xa
    addi r31, r31, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_8057F8FC_00000FD4
    mr r3, r29
    bl fn_80580370
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057FB24(void)
{
    nofralloc
    li r0, 0x2
    stw r0, 0xf4(r3)
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0xf4(r3)
    stw r0, 0xf0(r3)
    lwz r4, lbl_8087F490
    cmpwi r4, 0x0
    beqlr
    addis r3, r3, 0x2
    lwz r0, 0x5b3c(r3)
    cmpwi r0, 0x0
    beqlr
    mr r3, r4
    b fn_803E65F8
    blr
}

asm void fn_8057FB6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8057FB6C_000010C0
    li r0, 0x1
    stw r0, 0xec(r3)
    lwz r4, lbl_8087F490
    cmpwi r4, 0x0
    beq lbl_fn_8057FB6C_00001124
    addis r3, r3, 0x2
    lwz r0, 0x5b3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8057FB6C_00001124
    mr r3, r4
    bl fn_803E656C
    b lbl_fn_8057FB6C_00001124
lbl_fn_8057FB6C_000010C0:
    cmpwi r0, 0x1
    bne lbl_fn_8057FB6C_00001124
    lwz r4, lbl_8087F490
    cmpwi r4, 0x0
    beq lbl_fn_8057FB6C_000010F0
    lwz r0, 0x2638(r4)
    cmpwi r0, 0x2
    beq lbl_fn_8057FB6C_000010F0
    addis r4, r3, 0x2
    lwz r0, 0x5b3c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8057FB6C_00001124
lbl_fn_8057FB6C_000010F0:
    li r0, 0x2
    stw r0, 0xec(r3)
    li r4, 0x4
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    li r4, 0x1e
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8057FB6C_00001124:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057FC28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8057FC28_00001184
    li r0, 0x1
    stw r0, 0xf4(r3)
    lwz r4, lbl_8087F490
    cmpwi r4, 0x0
    beq lbl_fn_8057FC28_000011F8
    addis r3, r3, 0x2
    lwz r0, 0x5b3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8057FC28_000011F8
    mr r3, r4
    bl fn_803E65F8
    b lbl_fn_8057FC28_000011F8
lbl_fn_8057FC28_00001184:
    cmpwi r0, 0x1
    bne lbl_fn_8057FC28_000011C0
    lwz r4, lbl_8087F490
    cmpwi r4, 0x0
    beq lbl_fn_8057FC28_000011B4
    lwz r0, 0x2638(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8057FC28_000011B4
    addis r4, r3, 0x2
    lwz r0, 0x5b3c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8057FC28_000011F8
lbl_fn_8057FC28_000011B4:
    li r0, 0x2
    stw r0, 0xf4(r3)
    b lbl_fn_8057FC28_000011F8
lbl_fn_8057FC28_000011C0:
    addi r3, r3, 0x58
    bl fn_80473F88
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8057FC28_000011E8
    addis r4, r31, 0x2
    lwz r0, 0x5b3c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8057FC28_000011E8
    bl fn_803E63D0
lbl_fn_8057FC28_000011E8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8057FC28_000011F8
    bl fn_8036E89C
lbl_fn_8057FC28_000011F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057FD00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x78(r3)
    lwz r31, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_8057FD00_0000125C
    lwz r3, 0x74(r3)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    bne lbl_fn_8057FD00_0000125C
    li r4, 0x0
lbl_fn_8057FD00_0000125C:
    cmpwi r4, 0x0
    beq lbl_fn_8057FD00_000012D8
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8057FD00_00001294
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8057FD00_000012D8
lbl_fn_8057FD00_00001294:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r4, 0x7c(r30)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80581820
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r4, 0xe8(r30)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8057FD00_000012D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057FDE4(void)
{
    nofralloc
    blr
}

asm void fn_8057FDE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addis r4, r3, 0x2
    li r5, 0x2
    stw r0, 0x24(r1)
    li r6, 0x1
    li r7, 0x3
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x8c(r3)
    mr r3, r4
    stw r5, 0x5b08(r4)
    addi r3, r3, 0x5b04
    lwz r5, 0x5b10(r4)
    stw r0, 0x5b04(r4)
    li r4, 0x2
    bl fn_804A436C
    addis r3, r30, 0x2
    li r4, 0x0
    lwz r0, 0x5b04(r3)
    li r5, 0x4
    stw r0, 0x8c(r30)
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8057FDE8_000013D4
    lwz r0, 0x8c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8057FDE8_0000138C
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r4, 0x88(r30)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    b lbl_fn_8057FDE8_000013BC
lbl_fn_8057FDE8_0000138C:
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r4, 0xe8(r30)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8057FDE8_000013BC:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80581968
    b lbl_fn_8057FDE8_00001430
lbl_fn_8057FDE8_000013D4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8057FDE8_00001430
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r4, 0xe8(r30)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80581968
lbl_fn_8057FDE8_00001430:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057FF3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, 0x1
    li r8, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addis r3, r3, 0x2
    mr r4, r3
    lwz r5, 0x5b08(r3)
    lwz r6, 0x5b10(r3)
    addi r3, r3, 0x5b04
    addi r4, r4, 0x5b0c
    bl fn_804A4494
    addis r6, r30, 0x2
    li r4, 0x0
    lwz r3, 0x5b04(r6)
    li r5, 0x4
    lwz r0, 0x5b0c(r6)
    stw r3, 0xdc(r30)
    stw r0, 0xe0(r30)
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8057FF3C_000015AC
    lwz r0, 0x32fc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8057FF3C_000014DC
    addi r3, r1, 0x14
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8057FF3C_000015F4
lbl_fn_8057FF3C_000014DC:
    lwz r0, 0xdc(r30)
    lwz r3, lbl_8087F4F0
    mulli r0, r0, 0x5c
    add r31, r30, r0
    lwz r0, 0x3348(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8057FF3C_00001510
    lwz r4, 0x3300(r31)
    bl fn_804444E8
    cmpwi r3, 0x0
    bgt lbl_fn_8057FF3C_00001510
    li r31, 0xa
    b lbl_fn_8057FF3C_00001528
lbl_fn_8057FF3C_00001510:
    lwz r4, 0x3350(r31)
    li r0, 0x3
    neg r3, r4
    or r3, r3, r4
    srawi r3, r3, 31
    andc r31, r0, r3
lbl_fn_8057FF3C_00001528:
    cmpwi r31, 0x0
    bne lbl_fn_8057FF3C_00001564
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x6
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8057FF3C_000015F4
lbl_fn_8057FF3C_00001564:
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r30
    mr r5, r31
    li r4, 0x1
    li r6, 0x0
    bl fn_80581820
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8057FF3C_000015F4
lbl_fn_8057FF3C_000015AC:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8057FF3C_000015F4
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8057FF3C_000015F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80580100(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_80580B54
    lwz r31, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80580100_00001714
    lwz r0, 0xdc(r30)
    addis r5, r30, 0x2
    lwz r3, lbl_8087F4F0
    lis r4, 0xf
    mulli r7, r0, 0x5c
    lwz r5, 0x5b24(r5)
    addi r0, r4, 0x423f
    lwz r6, 0x6000(r3)
    add r7, r30, r7
    lwz r4, 0x3304(r7)
    mullw r31, r4, r5
    add r4, r31, r6
    cmpw r4, r0
    blt lbl_fn_80580100_000016AC
    mr r3, r30
    li r4, 0x1
    li r5, 0x5
    li r6, 0x0
    bl fn_80581968
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x3
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80580100_0000175C
lbl_fn_80580100_000016AC:
    lwz r0, 0x3348(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80580100_000016C4
    lwz r4, 0x3300(r7)
    bl fn_8044441C
    b lbl_fn_80580100_000016CC
lbl_fn_80580100_000016C4:
    lwz r4, 0x334c(r7)
    bl fn_8044D490
lbl_fn_80580100_000016CC:
    lwz r3, lbl_8087F4F0
    mr r4, r31
    bl fn_8044D678
    mr r3, r30
    bl fn_80581FDC
    addi r3, r1, 0xc
    li r4, 0x19
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80580100_0000175C
lbl_fn_80580100_00001714:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80580100_0000175C
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80580100_0000175C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80580268(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    bl fn_80580370
    lwz r3, 0x74(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80580268_000017BC
    lwz r0, 0x78(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80580268_000017B4
    lfs f0, lbl_808880CC
    stfs f0, 0x104(r3)
    b lbl_fn_80580268_000017BC
lbl_fn_80580268_000017B4:
    lfs f0, lbl_808880C8
    stfs f0, 0x104(r3)
lbl_fn_80580268_000017BC:
    lwz r3, 0x80(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80580268_0000185C
    lwz r0, 0x84(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80580268_00001854
    lfs f0, lbl_808880CC
    stfs f0, 0x104(r3)
    lwz r3, 0x80(r30)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80580268_0000185C
    lwz r5, 0x8c(r30)
    lis r4, lbl_807612E4@ha
    addi r4, r4, lbl_807612E4@l
    addi r3, r1, 0x20
    addi r4, r4, 0x257
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r31, 0x80(r30)
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
    b lbl_fn_80580268_0000185C
lbl_fn_80580268_00001854:
    lfs f0, lbl_808880C8
    stfs f0, 0x104(r3)
lbl_fn_80580268_0000185C:
    mr r3, r30
    bl fn_80581678
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80580370(void)
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
    lwz r4, 0x70(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0xe4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80580370_000018D0
    cmpwi r0, 0x1
    beq lbl_fn_80580370_000018D0
    lwz r4, 0x70(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
lbl_fn_80580370_000018D0:
    lwz r4, 0x68(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80580370_00001904
    lwz r5, 0x68(r3)
    li r0, 0x0
    lwz r4, 0x38(r5)
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    stw r0, 0x6c(r3)
lbl_fn_80580370_00001904:
    lwz r3, 0x60(r3)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0x1d1
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r30, 0x4(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80580370_00001928
    b lbl_fn_80580370_0000192C
lbl_fn_80580370_00001928:
    la r30, lbl_808813D0
lbl_fn_80580370_0000192C:
    lwz r4, 0x70(r31)
    lis r3, lbl_807612E4@ha
    addi r3, r3, lbl_807612E4@l
    addi r3, r3, 0x266
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801FEE08
    lwz r3, 0x64(r31)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0x1d1
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r29, 0x4(r3)
    cmpwi r29, 0x0
    beq lbl_fn_80580370_00001978
    b lbl_fn_80580370_0000197C
lbl_fn_80580370_00001978:
    la r29, lbl_808813D0
lbl_fn_80580370_0000197C:
    lwz r4, 0x70(r31)
    lis r30, lbl_807612E4@ha
    addi r30, r30, lbl_807612E4@l
    addi r3, r30, 0x26c
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80580370_000019DC
    cmpwi r3, 0x1
    beq lbl_fn_80580370_00001A00
    cmpwi r3, 0x2
    beq lbl_fn_80580370_00001A24
    cmpwi r3, 0x3
    beq lbl_fn_80580370_00001A48
    b lbl_fn_80580370_00001A68
lbl_fn_80580370_000019DC:
    lwz r4, 0x70(r31)
    addi r3, r30, 0x275
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808880C4
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    b lbl_fn_80580370_00001A68
lbl_fn_80580370_00001A00:
    lwz r4, 0x70(r31)
    addi r3, r30, 0x275
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808880C0
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    b lbl_fn_80580370_00001A68
lbl_fn_80580370_00001A24:
    lwz r4, 0x70(r31)
    addi r3, r30, 0x275
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808880D0
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    b lbl_fn_80580370_00001A68
lbl_fn_80580370_00001A48:
    lwz r4, 0x70(r31)
    addi r3, r30, 0x275
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808880CC
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
lbl_fn_80580370_00001A68:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
