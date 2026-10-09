#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_8006A250(void);
extern void fn_8006EF48(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_8009EE30(void);
extern void fn_800A4450(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800A58D0(void);
extern void fn_800CB3A0(void);
extern void fn_800CFBA0(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_80117914(void);
extern void fn_80119ECC(void);
extern void fn_8012AFE8(void);
extern void fn_801346C8(void);
extern void fn_801D082C(void);
extern void fn_801F3FF8(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F837C(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80202118(void);
extern void fn_80202A6C(void);
extern void fn_80202D00(void);
extern void fn_8021AF50(void);
extern void fn_8021F09C(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370F8C(void);
extern void fn_803743AC(void);
extern void fn_803754F0(void);
extern void fn_80376324(void);
extern void fn_803766E4(void);
extern void fn_8037D4C0(void);
extern void fn_803B27F8(void);
extern void fn_803B2FBC(void);
extern void fn_803B3270(void);
extern void fn_803B57B0(void);
extern void fn_803B6C88(void);
extern void fn_803B8144(void);
extern void fn_803B8758(void);
extern void fn_803B87A8(void);
extern void fn_803BE854(void);
extern void fn_803CCC70(void);
extern void fn_804A4300(void);
extern void fn_804A436C(void);
extern void fn_804A5824(void);
extern void fn_804A5E40(void);
extern void fn_804A62C8(void);
extern void fn_8050F940(void);
extern void fn_8050FA80(void);
extern void fn_8050FB3C(void);
extern void fn_8050FC8C(void);
extern void fn_8050FD3C(void);
extern void fn_80510D68(void);
extern void fn_80510E98(void);
extern void fn_8051125C(void);
extern void fn_805112AC(void);
extern void fn_805113EC(void);
extern void fn_805114D8(void);
extern void fn_805115D4(void);
extern void fn_8052C9C8(void);
extern void fn_8052CA70(void);
extern void fn_8052DEF0(void);
extern void fn_80572B70(void);
extern void fn_805AA738(void);
extern void fn_805B9F54(void);
extern void fn_80695720(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80793720[];
extern u8 lbl_8075CED4[];
extern u8 lbl_8075D0F4[];
extern u8 lbl_8075D110[];
extern u8 lbl_8075D170[];
extern u8 lbl_8075D17C[];
extern u8 lbl_8075D188[];
extern u8 lbl_8075D1A0[];
extern u8 lbl_80793740[];
extern u8 lbl_807937C8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C9110[];

/* Small data declarations */
extern u32 lbl_8087DCC8;
extern u32 lbl_8087DCCC;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F06C;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F434;
extern u32 lbl_8087F448;
extern u32 lbl_8087F460;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9AC;
extern u32 lbl_8087F9F8;
extern u32 lbl_808813D0;
extern u32 lbl_80887A60;
extern u32 lbl_80887A68;
extern u32 lbl_80887A6C;
extern u32 lbl_80887A7C;
extern u32 lbl_80887A80;
extern u32 lbl_80887A84;
extern u32 lbl_80887A88;
extern u32 lbl_80887A8C;
extern u32 lbl_80887A90;
extern u32 lbl_80887A94;
extern u32 lbl_80887A98;
extern u32 lbl_80887A9C;
extern u32 lbl_80887AA0;
extern u32 lbl_80887AA4;
extern u32 lbl_80887AA8;

/* Function declarations */
void fn_805282AC(void);
void fn_805282BC(void);
void fn_805282D0(void);
void fn_80528314(void);
void fn_80528458(void);
void fn_80528578(void);
void fn_80528698(void);
void fn_805288C0(void);
void fn_805289AC(void);
void fn_80528A94(void);
void fn_80528BF4(void);
void fn_80528DFC(void);
void fn_80528ED8(void);
void fn_80528FEC(void);
void fn_805290FC(void);
void fn_8052911C(void);
void fn_80529180(void);
void fn_80529374(void);
void fn_805293CC(void);
void fn_805294E8(void);
void fn_805294FC(void);
void fn_80529528(void);
void fn_80529B48(void);
void fn_80529B4C(void);
void fn_80529C14(void);
void fn_80529C74(void);

asm void fn_805282AC(void)
{
    nofralloc
    mulli r0, r4, 0x43c
    add r3, r3, r0
    addi r3, r3, 0x64ec
    blr
}

asm void fn_805282BC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    bnelr
    la r3, lbl_808813D0
    blr
}

asm void fn_805282D0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    slwi r0, r0, 4
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_805282D0_00000058
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
lbl_fn_805282D0_00000058:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_80528314(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r29, r6
    mr r26, r4
    mr r3, r5
    mr r31, r7
    mr r27, r8
    mr r28, r9
    mr r4, r29
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_80528314_00000194
    lis r30, lbl_8075CED4@ha
    lwz r5, 0x0(r31)
    addi r30, r30, lbl_8075CED4@l
    addi r3, r1, 0x18
    addi r4, r30, 0x144
    crclr 6
    bl sprintf
    addi r3, r1, 0x18
    bl fn_800DC6B4
    lfs f1, lbl_80887A68
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    lwz r5, 0x0(r31)
    addi r3, r1, 0x18
    addi r4, r30, 0x16d
    crclr 6
    bl sprintf
    mr r3, r29
    bl fn_8021AF50
    lwz r29, 0xc(r3)
    mr r30, r3
    cmpwi r29, 0x0
    beq lbl_fn_80528314_0000010C
    b lbl_fn_80528314_00000110
lbl_fn_80528314_0000010C:
    la r29, lbl_808813D0
lbl_fn_80528314_00000110:
    addi r3, r1, 0x18
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r29
    addi r3, r26, 0x58
    bl fn_801FEE08
    lwz r5, 0x14(r30)
    lwz r0, 0x0(r31)
    cmpwi r5, 0x0
    stw r0, 0x8(r1)
    beq lbl_fn_80528314_00000140
    b lbl_fn_80528314_00000144
lbl_fn_80528314_00000140:
    la r5, lbl_808813D0
lbl_fn_80528314_00000144:
    lwz r0, 0x8(r27)
    li r3, 0x0
    stw r5, 0x14(r1)
    slwi r0, r0, 4
    add r0, r27, r0
    stw r3, 0x10(r1)
    addic. r4, r0, 0xc
    stw r28, 0xc(r1)
    beq lbl_fn_80528314_0000017C
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    stw r28, 0x4(r4)
    stw r3, 0x8(r4)
    stw r5, 0xc(r4)
lbl_fn_80528314_0000017C:
    lwz r3, 0x8(r27)
    addi r0, r3, 0x1
    stw r0, 0x8(r27)
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_80528314_00000194:
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80528458(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r3, r1, 0x18
    stw r31, 0x4c(r1)
    lis r31, lbl_8075CED4@ha
    addi r31, r31, lbl_8075CED4@l
    stw r30, 0x48(r1)
    mr r30, r6
    stw r29, 0x44(r1)
    mr r29, r5
    stw r28, 0x40(r1)
    mr r28, r4
    addi r4, r31, 0x144
    lwz r5, 0x0(r5)
    crclr 6
    bl sprintf
    addi r3, r1, 0x18
    bl fn_800DC6B4
    lfs f1, lbl_80887A68
    mr r4, r3
    addi r3, r28, 0x58
    bl fn_801FECE0
    lwz r5, 0x0(r29)
    addi r3, r1, 0x18
    addi r4, r31, 0x16d
    crclr 6
    bl sprintf
    li r3, 0x1
    li r4, 0x135
    bl fn_80116FC0
    mr r31, r3
    addi r3, r1, 0x18
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r31
    addi r3, r28, 0x58
    bl fn_801FEE08
    lwz r0, 0x0(r29)
    li r3, 0x1
    stw r0, 0x8(r1)
    li r4, 0x13d
    bl fn_80116FC0
    lwz r0, 0x8(r30)
    li r5, 0x0
    li r4, -0x1
    stw r3, 0x14(r1)
    slwi r0, r0, 4
    add r0, r30, r0
    stw r5, 0x10(r1)
    addic. r6, r0, 0xc
    stw r4, 0xc(r1)
    beq lbl_fn_80528458_00000294
    lwz r0, 0x8(r1)
    stw r0, 0x0(r6)
    stw r4, 0x4(r6)
    stw r5, 0x8(r6)
    stw r3, 0xc(r6)
lbl_fn_80528458_00000294:
    lwz r3, 0x8(r30)
    addi r0, r3, 0x1
    stw r0, 0x8(r30)
    lwz r3, 0x0(r29)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80528578(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r3, r1, 0x18
    stw r31, 0x4c(r1)
    lis r31, lbl_8075CED4@ha
    addi r31, r31, lbl_8075CED4@l
    stw r30, 0x48(r1)
    mr r30, r6
    stw r29, 0x44(r1)
    mr r29, r5
    stw r28, 0x40(r1)
    mr r28, r4
    addi r4, r31, 0x144
    lwz r5, 0x0(r5)
    crclr 6
    bl sprintf
    addi r3, r1, 0x18
    bl fn_800DC6B4
    lfs f1, lbl_80887A68
    mr r4, r3
    addi r3, r28, 0x58
    bl fn_801FECE0
    lwz r5, 0x0(r29)
    addi r3, r1, 0x18
    addi r4, r31, 0x16d
    crclr 6
    bl sprintf
    li r3, 0x1
    li r4, 0x136
    bl fn_80116FC0
    mr r31, r3
    addi r3, r1, 0x18
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r31
    addi r3, r28, 0x58
    bl fn_801FEE08
    lwz r0, 0x0(r29)
    li r3, 0x1
    stw r0, 0x8(r1)
    li r4, 0x13e
    bl fn_80116FC0
    lwz r0, 0x8(r30)
    li r5, 0x0
    li r4, -0x1
    stw r3, 0x14(r1)
    slwi r0, r0, 4
    add r0, r30, r0
    stw r5, 0x10(r1)
    addic. r6, r0, 0xc
    stw r4, 0xc(r1)
    beq lbl_fn_80528578_000003B4
    lwz r0, 0x8(r1)
    stw r0, 0x0(r6)
    stw r4, 0x4(r6)
    stw r5, 0x8(r6)
    stw r3, 0xc(r6)
lbl_fn_80528578_000003B4:
    lwz r3, 0x8(r30)
    addi r0, r3, 0x1
    stw r0, 0x8(r30)
    lwz r3, 0x0(r29)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80528698(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x1
    li r5, 0x11
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    lwz r29, lbl_8087EF70
    lwz r31, 0x118(r3)
    lwz r0, 0x11c(r3)
    stw r31, 0x80(r3)
    stw r0, 0x84(r3)
    bl fn_80510E98
    lwz r0, 0x80(r30)
    stw r0, 0x118(r30)
    cmpw r0, r31
    beq lbl_fn_80528698_000004B8
    mr r3, r29
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80528698_00000468
    mr r3, r29
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80528698_00000478
lbl_fn_80528698_00000468:
    lfs f0, lbl_80887A6C
    stfs f0, 0x5d4(r30)
    stfs f0, 0x110(r30)
    b lbl_fn_80528698_000005F8
lbl_fn_80528698_00000478:
    mr r3, r29
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80528698_000004A8
    mr r3, r29
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80528698_000005F8
lbl_fn_80528698_000004A8:
    lfs f0, lbl_80887A68
    stfs f0, 0x5d4(r30)
    stfs f0, 0x110(r30)
    b lbl_fn_80528698_000005F8
lbl_fn_80528698_000004B8:
    mr r3, r29
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80528698_00000598
    mr r3, r29
    li r4, 0x0
    li r5, 0xb
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80528698_00000530
    lwz r4, 0x118(r30)
    lwz r3, 0x84(r30)
    addi r4, r4, 0x1
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x118(r30)
    cmpw r0, r31
    beq lbl_fn_80528698_000005F8
    addi r3, r1, 0x10
    li r4, 0x11
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80887A68
    stfs f0, 0x5d4(r30)
    stfs f0, 0x110(r30)
    b lbl_fn_80528698_000005F8
lbl_fn_80528698_00000530:
    mr r3, r29
    li r4, 0x0
    li r5, 0xa
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80528698_000005F8
    lwz r4, 0x84(r30)
    lwz r0, 0x118(r30)
    add r3, r4, r0
    subi r3, r3, 0x1
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    stw r0, 0x118(r30)
    cmpw r0, r31
    beq lbl_fn_80528698_000005F8
    addi r3, r1, 0xc
    li r4, 0x11
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80887A6C
    stfs f0, 0x5d4(r30)
    stfs f0, 0x110(r30)
    b lbl_fn_80528698_000005F8
lbl_fn_80528698_00000598:
    mr r3, r29
    li r4, 0x0
    li r5, 0x6
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80528698_000005F8
    lwz r4, 0x118(r30)
    lwz r3, 0x84(r30)
    addi r4, r4, 0x1
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x118(r30)
    cmpw r0, r31
    beq lbl_fn_80528698_000005F8
    addi r3, r1, 0x8
    li r4, 0x11
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80887A68
    stfs f0, 0x5d4(r30)
    stfs f0, 0x110(r30)
lbl_fn_80528698_000005F8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805288C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x7c(r3)
    stw r0, 0x114(r3)
    stw r4, 0x7c(r3)
    beq lbl_fn_805288C0_0000064C
    cmpwi r4, 0x2
    beq lbl_fn_805288C0_00000660
    b lbl_fn_805288C0_000006E8
lbl_fn_805288C0_0000064C:
    cmpwi r0, 0x0
    bne lbl_fn_805288C0_000006E8
    li r0, 0x0
    stw r0, 0x5d8(r3)
    b lbl_fn_805288C0_000006E8
lbl_fn_805288C0_00000660:
    lwz r4, 0x118(r3)
    lwz r0, 0x5d8(r3)
    mulli r4, r4, 0xac
    slwi r0, r0, 4
    add r3, r3, r4
    add r3, r3, r0
    lwz r3, 0x130(r3)
    bl fn_8021F09C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805288C0_000006DC
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805288C0_000006C4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_805288C0_000006B4
    bl fn_803766E4
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r31)
    bl fn_80376324
lbl_fn_805288C0_000006B4:
    mr r3, r30
    li r4, 0x1
    bl fn_805288C0
    b lbl_fn_805288C0_000006E8
lbl_fn_805288C0_000006C4:
    lwz r4, 0x0(r31)
    mr r3, r30
    li r5, 0x0
    bl fn_805B9F54
    stw r3, 0x5dc(r30)
    b lbl_fn_805288C0_000006E8
lbl_fn_805288C0_000006DC:
    mr r3, r30
    li r4, 0x1
    bl fn_805288C0
lbl_fn_805288C0_000006E8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805289AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_80528698
    lwz r31, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_805289AC_00000760
    lwz r3, 0x48(r30)
    li r4, 0x0
    bl fn_8052DEF0
    addi r3, r1, 0x10
    li r4, 0x8
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805289AC_000007D0
lbl_fn_805289AC_00000760:
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_805289AC_000007D0
    lwz r0, 0x118(r30)
    mulli r0, r0, 0xac
    add r3, r30, r0
    lwz r0, 0x128(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805289AC_000007AC
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805289AC_000007D0
lbl_fn_805289AC_000007AC:
    mr r3, r30
    li r4, 0x1
    bl fn_805288C0
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_805289AC_000007D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80528A94(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0x118(r3)
    lwz r30, lbl_8087EF70
    mulli r0, r0, 0xac
    lwz r5, 0x5d8(r3)
    stw r5, 0x80(r3)
    li r5, 0x3
    add r6, r3, r0
    lwz r0, 0x128(r6)
    stw r0, 0x84(r3)
    bl fn_80510D68
    lwz r3, 0x118(r29)
    lwz r0, 0x80(r29)
    mulli r3, r3, 0xac
    stw r0, 0x5d8(r29)
    slwi r0, r0, 4
    add r3, r29, r3
    addi r3, r3, 0x120
    add r3, r3, r0
    lwz r3, 0x10(r3)
    bl fn_8021F09C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80528A94_00000890
    lis r6, lbl_807C7030@ha
    addi r5, r1, 0x14
    addi r6, r6, lbl_807C7030@l
    lwz r3, lbl_8087F580
    psq_l f1, 0x0(r6), 0, 0
    li r4, 0x8
    lfs f2, 0x8(r6)
    li r6, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_804A5E40
lbl_fn_80528A94_00000890:
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80528A94_000008F0
    cmpwi r31, 0x0
    beq lbl_fn_80528A94_000008D8
    mr r3, r29
    li r4, 0x2
    bl fn_805288C0
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80528A94_000008F0
lbl_fn_80528A94_000008D8:
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80528A94_000008F0:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80528A94_0000092C
    mr r3, r29
    li r4, 0x0
    bl fn_805288C0
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80528A94_0000092C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80528BF4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    bl _savegpr_23
    lwz r4, 0x118(r3)
    mr r29, r3
    lwz r3, 0x11c(r3)
    subic. r31, r4, 0x1
    bge lbl_fn_80528BF4_00000984
    subi r31, r3, 0x1
lbl_fn_80528BF4_00000984:
    addi r30, r4, 0x1
    cmpw r30, r3
    blt lbl_fn_80528BF4_00000994
    li r30, 0x0
lbl_fn_80528BF4_00000994:
    lis r3, lbl_8075CED4@ha
    lfs f30, lbl_80887A60
    lfs f31, lbl_80887A68
    mr r24, r29
    addi r28, r3, lbl_8075CED4@l
    li r23, 0x0
    b lbl_fn_80528BF4_00000B1C
lbl_fn_80528BF4_000009B0:
    lwz r0, 0x118(r29)
    cmpw r23, r0
    bne lbl_fn_80528BF4_000009C4
    li r0, 0x4
    b lbl_fn_80528BF4_00000A08
lbl_fn_80528BF4_000009C4:
    cmpw r23, r30
    bne lbl_fn_80528BF4_000009D4
    li r0, 0x3
    b lbl_fn_80528BF4_00000A08
lbl_fn_80528BF4_000009D4:
    cmpw r23, r31
    bne lbl_fn_80528BF4_000009E4
    li r0, 0x5
    b lbl_fn_80528BF4_00000A08
lbl_fn_80528BF4_000009E4:
    lwz r3, 0xd4(r24)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xd8(r24)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    b lbl_fn_80528BF4_00000B14
lbl_fn_80528BF4_00000A08:
    lwz r3, 0x50(r29)
    slwi r0, r0, 6
    stfs f30, 0x4c(r1)
    add r25, r3, r0
    stfs f30, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f30, 0x5c(r1)
    lwz r3, 0xd4(r24)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80528BF4_00000A88
    lwz r3, 0xd4(r24)
    addi r26, r28, 0x177
    bl fn_80202118
    mr r27, r3
    mr r3, r26
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x38
    bl fn_801F4E8C
    lfs f4, 0x38(r1)
    lfs f3, 0x3c(r1)
    lfs f2, 0x40(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f3, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f0, 0x5c(r1)
lbl_fn_80528BF4_00000A88:
    lwz r3, 0xd8(r24)
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80528BF4_00000AAC
    lwz r3, 0xd8(r24)
    bl fn_80202D00
    addi r4, r28, 0x184
    addi r5, r1, 0x4c
    bl fn_801F6E78
lbl_fn_80528BF4_00000AAC:
    stfs f31, 0x20(r1)
    mr r3, r29
    mr r4, r25
    addi r6, r1, 0x2c
    stfs f31, 0x24(r1)
    addi r7, r1, 0x20
    addi r8, r28, 0x87
    stfs f31, 0x28(r1)
    stfs f30, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f30, 0x34(r1)
    lwz r5, 0xd4(r24)
    bl fn_8051125C
    stfs f31, 0x8(r1)
    mr r3, r29
    mr r4, r25
    addi r6, r1, 0x14
    stfs f31, 0xc(r1)
    addi r7, r1, 0x8
    addi r8, r28, 0x87
    stfs f31, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f30, 0x1c(r1)
    lwz r5, 0xd8(r24)
    bl fn_805112AC
lbl_fn_80528BF4_00000B14:
    addi r24, r24, 0x8
    addi r23, r23, 0x1
lbl_fn_80528BF4_00000B1C:
    lwz r0, 0x11c(r29)
    cmpw r23, r0
    blt lbl_fn_80528BF4_000009B0
    addi r11, r1, 0x90
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    bl _restgpr_23
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80528DFC(void)
{
    nofralloc
    cntlzw r5, r4
    li r8, 0x0
    li r6, 0x0
    b lbl_fn_80528DFC_00000BB4
lbl_fn_80528DFC_00000B60:
    lwz r0, 0x50(r3)
    add r7, r0, r6
    lbz r0, 0x3c(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80528DFC_00000BAC
    lwz r7, 0x0(r7)
    cmpwi r7, 0x0
    beq lbl_fn_80528DFC_00000B8C
    lwz r0, 0x104(r7)
    rlwimi r0, r4, 23, 8, 8
    stw r0, 0x104(r7)
lbl_fn_80528DFC_00000B8C:
    lwz r0, 0x50(r3)
    add r7, r0, r6
    lwz r7, 0x8(r7)
    cmpwi r7, 0x0
    beq lbl_fn_80528DFC_00000BAC
    lwz r0, 0x88(r7)
    rlwimi r0, r5, 26, 0, 0
    stw r0, 0x88(r7)
lbl_fn_80528DFC_00000BAC:
    addi r6, r6, 0x40
    addi r8, r8, 0x1
lbl_fn_80528DFC_00000BB4:
    lwz r0, 0x4c(r3)
    cmpw r8, r0
    blt lbl_fn_80528DFC_00000B60
    li r0, 0x7
    mr r6, r3
    li r7, 0x0
    mtctr r0
lbl_fn_80528DFC_00000BD0:
    lwz r0, 0x118(r3)
    mr r8, r4
    cmplw r7, r0
    bne lbl_fn_80528DFC_00000BEC
    cmpwi r4, 0x0
    bne lbl_fn_80528DFC_00000BEC
    li r8, 0x1
lbl_fn_80528DFC_00000BEC:
    lwz r0, 0x11c(r3)
    cmplw r7, r0
    blt lbl_fn_80528DFC_00000BFC
    li r8, 0x0
lbl_fn_80528DFC_00000BFC:
    lwz r5, 0xd4(r6)
    addi r7, r7, 0x1
    lwz r0, 0x104(r5)
    rlwimi r0, r8, 23, 8, 8
    stw r0, 0x104(r5)
    lwz r5, 0xd8(r6)
    addi r6, r6, 0x8
    lwz r0, 0x104(r5)
    rlwimi r0, r8, 23, 8, 8
    stw r0, 0x104(r5)
    bdnz lbl_fn_80528DFC_00000BD0
    blr
}

asm void fn_80528ED8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    lwz r0, 0x98(r29)
    srwi. r0, r0, 31
    bne lbl_fn_80528ED8_00000C60
    addi r4, r29, 0x99
    b lbl_fn_80528ED8_00000C64
lbl_fn_80528ED8_00000C60:
    lwz r4, 0xa0(r29)
lbl_fn_80528ED8_00000C64:
    bl fn_8008937C
    lis r31, lbl_8075CED4@ha
    lfs f1, lbl_80887A7C
    addi r31, r31, lbl_8075CED4@l
    lfs f2, lbl_80887A80
    lfs f3, lbl_80887A68
    mr r30, r3
    addi r4, r31, 0x18c
    addi r5, r29, 0x5f0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887A7C
    mr r3, r30
    lfs f2, lbl_80887A80
    addi r4, r31, 0x197
    lfs f3, lbl_80887A68
    addi r5, r29, 0xa4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887A7C
    mr r3, r30
    lfs f2, lbl_80887A80
    addi r4, r31, 0x1a1
    lfs f3, lbl_80887A68
    addi r5, r29, 0xb0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887A7C
    mr r3, r30
    lfs f2, lbl_80887A80
    addi r4, r31, 0x1ab
    lfs f3, lbl_80887A68
    addi r5, r29, 0xbc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887A7C
    mr r3, r30
    lfs f2, lbl_80887A80
    addi r4, r31, 0x1b6
    lfs f3, lbl_80887A68
    addi r5, r29, 0xc8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80528FEC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lis r4, lbl_8075CED4@ha
    lfs f31, lbl_80887A60
    addi r4, r4, lbl_8075CED4@l
    mr r27, r3
    addi r30, r4, 0x1be
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_80528FEC_00000DC8
lbl_fn_80528FEC_00000D7C:
    lwz r3, 0x50(r27)
    lwzx r3, r3, r29
    cmpwi r3, 0x0
    beq lbl_fn_80528FEC_00000DC0
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80528FEC_00000DC0
    lwz r3, 0x50(r27)
    lwzx r3, r3, r29
    bl fn_80202118
    mr r31, r3
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_80528FEC_00000DC0:
    addi r29, r29, 0x40
    addi r28, r28, 0x1
lbl_fn_80528FEC_00000DC8:
    lwz r0, 0x4c(r27)
    cmpw r28, r0
    blt lbl_fn_80528FEC_00000D7C
    lis r3, lbl_8075CED4@ha
    li r28, 0x0
    addi r3, r3, lbl_8075CED4@l
    addi r30, r3, 0x1be
lbl_fn_80528FEC_00000DE4:
    lwz r3, 0xd4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80528FEC_00000E20
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80528FEC_00000E20
    lwz r3, 0xd4(r27)
    bl fn_80202118
    mr r31, r3
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_80528FEC_00000E20:
    addi r28, r28, 0x1
    addi r27, r27, 0x8
    cmpwi r28, 0x7
    blt lbl_fn_80528FEC_00000DE4
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805290FC(void)
{
    nofralloc
    lis r4, lbl_807C9110@ha
    lfs f1, lbl_80887A84
    addi r3, r4, lbl_807C9110@l
    lfs f0, lbl_80887A60
    stfs f1, lbl_807C9110@l(r4)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_8052911C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8052911C_00000EBC
    lis r5, lbl_8075D1A0@ha
    li r3, 0x1d8
    addi r5, r5, lbl_8075D1A0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8052911C_00000EC0
    mr r4, r31
    bl fn_80529180
    b lbl_fn_8052911C_00000EC0
lbl_fn_8052911C_00000EBC:
    li r3, 0x0
lbl_fn_8052911C_00000EC0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80529180(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r31, r3
    bl fn_8050F940
    lwz r0, 0x98(r31)
    li r4, 0x0
    lis r5, lbl_80793740@ha
    lis r3, lbl_8075D1A0@ha
    srwi. r0, r0, 31
    stw r4, 0x194(r31)
    li r0, 0x1
    addi r5, r5, lbl_80793740@l
    addi r3, r3, lbl_8075D1A0@l
    stw r5, 0x0(r31)
    addi r30, r3, 0x1
    stw r4, 0x1c0(r31)
    stw r4, 0x1c8(r31)
    stw r0, 0x1cc(r31)
    stw r4, 0x1d0(r31)
    bne lbl_fn_80529180_00000F38
    lbz r0, 0x98(r31)
    clrlwi r29, r0, 25
    b lbl_fn_80529180_00000F3C
lbl_fn_80529180_00000F38:
    lwz r29, 0x9c(r31)
lbl_fn_80529180_00000F3C:
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r5, r29
    mr r6, r30
    addi r3, r31, 0x98
    add r7, r30, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    li r0, 0x1
    li r3, 0x0
    cmpwi r0, 0x0
    stw r3, 0x7c(r31)
    stw r0, 0x4c(r31)
    stw r0, 0x1bc(r31)
    ble lbl_fn_80529180_00001008
    lis r5, lbl_8075D1A0@ha
    li r3, 0x50
    addi r5, r5, lbl_8075D1A0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801D082C@ha
    li r5, 0x0
    addi r4, r4, fn_801D082C@l
    li r6, 0x40
    li r7, 0x1
    bl fn_80695720
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    stw r3, 0x50(r31)
    beq lbl_fn_80529180_00000FD4
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80529180_00000FD4:
    lis r6, lbl_8075D0F4@ha
    lwz r4, 0x4c(r31)
    lwz r5, 0x50(r31)
    mr r3, r31
    addi r6, r6, lbl_8075D0F4@l
    li r7, 0x0
    li r8, 0x0
    bl fn_8050FB3C
    lwz r4, 0x4c(r31)
    mr r3, r31
    lwz r5, 0x50(r31)
    li r6, 0x0
    bl fn_8050FC8C
lbl_fn_80529180_00001008:
    lis r28, lbl_8075D110@ha
    lis r30, lbl_8075D1A0@ha
    addi r28, r28, lbl_8075D110@l
    li r26, 0x0
    addi r30, r30, lbl_8075D1A0@l
    li r29, 0x0
lbl_fn_80529180_00001020:
    mr r3, r31
    add r27, r31, r29
    addi r4, r30, 0xb
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xe4(r27)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x2c
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xe8(r27)
    li r4, 0x1
    bl fn_800D246C
    stw r26, 0xd4(r27)
    addi r26, r26, 0x1
    lwz r0, 0x0(r28)
    cmpwi r26, 0x8
    stw r0, 0xd8(r27)
    addi r29, r29, 0x18
    lwz r3, 0x4(r28)
    stw r3, 0xdc(r27)
    lwz r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r0, 0xe0(r27)
    blt lbl_fn_80529180_00001020
    lis r4, lbl_8075D1A0@ha
    mr r3, r31
    addi r4, r4, lbl_8075D1A0@l
    li r5, 0x0
    addi r4, r4, 0x53
    bl fn_801F3FF8
    stw r3, 0x1b8(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80529374(void)
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
    beq lbl_fn_80529374_00001104
    li r4, 0x0
    bl fn_8050FA80
    cmpwi r31, 0x0
    ble lbl_fn_80529374_00001104
    mr r3, r30
    bl dtor_80084684
lbl_fn_80529374_00001104:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805293CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8075D0F4@ha
    lwz r8, lbl_80887A88
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8075D0F4@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x50(r3)
    lwz r7, 0x4c(r3)
    bl fn_8050FD3C
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    li r0, 0x8
    stw r3, 0x80(r29)
    li r30, 0x0
    li r31, 0x0
    stw r0, 0x84(r29)
    stw r3, 0x88(r29)
    stw r0, 0x8c(r29)
    b lbl_fn_805293CC_000011B4
lbl_fn_805293CC_00001190:
    lfs f1, lbl_80887A8C
    li r4, 0x1
    lwz r3, 0x50(r29)
    li r5, 0x0
    fmr f2, f1
    lwzx r3, r3, r31
    bl fn_805113EC
    addi r31, r31, 0x40
    addi r30, r30, 0x1
lbl_fn_805293CC_000011B4:
    lwz r0, 0x4c(r29)
    cmpw r30, r0
    blt lbl_fn_805293CC_00001190
    mr r31, r29
    li r30, 0x0
lbl_fn_805293CC_000011C8:
    lfs f1, lbl_80887A8C
    li r4, 0x0
    lwz r3, 0xe4(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    lwz r3, 0xe8(r31)
    li r4, 0x0
    lfs f1, lbl_80887A8C
    li r5, 0x1
    lfs f2, lbl_80887A90
    bl fn_805114D8
    addi r30, r30, 0x1
    addi r31, r31, 0x18
    cmpwi r30, 0x8
    blt lbl_fn_805293CC_000011C8
    lwz r3, 0x1b8(r29)
    li r4, 0x0
    lfs f1, lbl_80887A8C
    li r5, 0x0
    lfs f2, lbl_80887A94
    bl fn_805115D4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805294E8(void)
{
    nofralloc
    lwz r3, 0x7c(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_805294FC(void)
{
    nofralloc
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805294FC_0000126C
    lwz r3, 0x1b8(r3)
    lfs f0, lbl_80887A98
    stfs f0, 0x104(r3)
    blr
lbl_fn_805294FC_0000126C:
    lwz r3, 0x1b8(r3)
    lfs f0, lbl_80887A94
    stfs f0, 0x104(r3)
    blr
}

asm void fn_80529528(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    addi r11, r1, 0x300
    stfd f31, 0x320(r1)
    psq_st f31, 0x328(r1), 0, 0
    stfd f30, 0x310(r1)
    psq_st f30, 0x318(r1), 0, 0
    stfd f29, 0x300(r1)
    psq_st f29, 0x308(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0x4c(r3)
    mr r26, r3
    cmpwi r0, 0x0
    ble lbl_fn_80529528_0000186C
    lis r25, lbl_8075D1A0@ha
    li r28, 0x0
    addi r25, r25, lbl_8075D1A0@l
    li r27, 0x0
    b lbl_fn_80529528_00001354
lbl_fn_80529528_000012CC:
    lwz r0, 0x50(r26)
    add r4, r0, r27
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80529528_000012E4
    b lbl_fn_80529528_000012E8
lbl_fn_80529528_000012E4:
    li r3, 0x0
lbl_fn_80529528_000012E8:
    addi r4, r4, 0xc
    bl fn_8009EE30
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r0, 0x50(r26)
    addi r5, r25, 0x70
    lwz r12, 0x58(r12)
    add r4, r0, r27
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r0, 0x50(r26)
    addi r5, r25, 0x70
    lwz r12, 0x54(r12)
    add r4, r0, r27
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r0, 0x50(r26)
    lwz r12, 0x5c(r12)
    add r4, r0, r27
    mtctr r12
    bctrl
    addi r27, r27, 0x40
    addi r28, r28, 0x1
lbl_fn_80529528_00001354:
    lwz r0, 0x4c(r26)
    cmpw r28, r0
    blt lbl_fn_80529528_000012CC
    lis r3, lbl_8075D188@ha
    lis r4, lbl_8075D1A0@ha
    lfs f29, lbl_80887A90
    mr r29, r26
    lfs f30, lbl_80887A8C
    addi r30, r4, lbl_8075D1A0@l
    lfd f31, lbl_8075D188@l(r3)
    li r28, 0x0
    lis r31, 0x4330
    b lbl_fn_80529528_000015A8
lbl_fn_80529528_00001388:
    lwz r27, 0x198(r29)
    mr r3, r26
    addi r6, r1, 0x2c
    addi r7, r1, 0x20
    stfs f29, 0x20(r1)
    addi r8, r30, 0x70
    stfs f29, 0x24(r1)
    stfs f29, 0x28(r1)
    stfs f30, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f30, 0x34(r1)
    lwz r4, 0x50(r26)
    lwz r5, 0x10(r27)
    bl fn_805112AC
    stfs f29, 0x8(r1)
    mr r3, r26
    addi r6, r1, 0x14
    addi r7, r1, 0x8
    stfs f29, 0xc(r1)
    addi r8, r30, 0x70
    stfs f29, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f30, 0x1c(r1)
    lwz r4, 0x50(r26)
    lwz r5, 0x14(r27)
    bl fn_805112AC
    lwz r0, 0x0(r27)
    cmpwi r0, 0x7
    bne lbl_fn_80529528_00001414
    addi r3, r1, 0x90
    addi r4, r30, 0x7a
    crclr 6
    bl sprintf
    b lbl_fn_80529528_00001428
lbl_fn_80529528_00001414:
    mr r5, r28
    addi r3, r1, 0x90
    addi r4, r30, 0x86
    crclr 6
    bl sprintf
lbl_fn_80529528_00001428:
    lwz r3, 0x50(r26)
    lwz r3, 0x0(r3)
    bl fn_80202118
    mr r25, r3
    addi r3, r1, 0x90
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r25
    addi r3, r1, 0x38
    bl fn_801F4E8C
    lwz r3, 0x10(r27)
    bl fn_80202D00
    addi r4, r30, 0x94
    addi r5, r1, 0x38
    bl fn_801F6E78
    lwz r3, 0x10(r27)
    bl fn_80202D00
    lwz r0, 0x4(r27)
    addi r4, r30, 0x9e
    stw r31, 0x2d0(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x2d4(r1)
    lfd f0, 0x2d0(r1)
    fsubs f1, f0, f31
    bl fn_801F6C80
    lwz r4, 0x8(r27)
    li r3, 0x0
    bl fn_80116FC0
    mr r25, r3
    lwz r3, 0x10(r27)
    bl fn_80202D00
    mr r5, r25
    addi r4, r30, 0xa4
    bl fn_801F837C
    lwz r4, 0x8(r27)
    li r3, 0x0
    bl fn_80116FC0
    mr r25, r3
    lwz r3, 0x10(r27)
    bl fn_80202D00
    mr r5, r25
    addi r4, r30, 0xaa
    bl fn_801F837C
    lwz r4, 0xc(r27)
    li r3, 0x0
    bl fn_80116FC0
    mr r25, r3
    lwz r3, 0x10(r27)
    bl fn_80202D00
    mr r5, r25
    addi r4, r30, 0xb3
    bl fn_801F837C
    lwz r3, 0x14(r27)
    bl fn_80202D00
    addi r4, r30, 0x94
    addi r5, r1, 0x38
    bl fn_801F6E78
    lwz r4, 0x8(r27)
    li r3, 0x0
    bl fn_80116FC0
    mr r25, r3
    lwz r3, 0x14(r27)
    bl fn_80202D00
    mr r5, r25
    addi r4, r30, 0xa4
    bl fn_801F837C
    lwz r3, 0x14(r27)
    bl fn_80202D00
    lwz r0, 0x4(r27)
    addi r4, r30, 0x9e
    stw r31, 0x2d8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x2dc(r1)
    lfd f0, 0x2d8(r1)
    fsubs f1, f0, f31
    bl fn_801F6C80
    lwz r0, 0x80(r26)
    cmplw r28, r0
    bne lbl_fn_80529528_00001584
    lwz r3, 0x10(r27)
    bl fn_80202D00
    stfs f30, 0x50(r3)
    lwz r3, 0x14(r27)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    b lbl_fn_80529528_000015A0
lbl_fn_80529528_00001584:
    lwz r3, 0x10(r27)
    bl fn_80202D00
    stfs f29, 0x50(r3)
    lwz r3, 0x14(r27)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
lbl_fn_80529528_000015A0:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_80529528_000015A8:
    lwz r0, 0x194(r26)
    cmplw r28, r0
    blt lbl_fn_80529528_00001388
    lwz r3, 0x50(r26)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80529528_00001664
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80529528_00001664
    lwz r3, 0x50(r26)
    lwz r3, 0x0(r3)
    bl fn_80202118
    lwz r6, lbl_8087F430
    lis r5, 0x8889
    lis r4, lbl_807937C8@ha
    mr r25, r3
    lwz r0, 0x5744(r6)
    subi r5, r5, 0x7777
    addi r3, r1, 0xd0
    addi r4, r4, lbl_807937C8@l
    mulhwu r0, r5, r0
    srwi r7, r0, 4
    mulhwu r0, r5, r7
    srwi r8, r0, 5
    mulhwu r5, r5, r8
    mulli r0, r8, 0x3c
    srwi r5, r5, 5
    mulli r6, r5, 0x3c
    subf r7, r0, r7
    subf r6, r6, r8
    crclr 6
    bl fn_800DD3FC
    lis r27, lbl_8075D1A0@ha
    addi r27, r27, lbl_8075D1A0@l
    addi r3, r27, 0xbd
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r25, 0x58
    addi r5, r1, 0xd0
    bl fn_801FEE08
    lwz r5, lbl_8087F4F0
    mr r3, r25
    addi r4, r27, 0xc9
    li r6, 0x0
    lwz r5, 0x6000(r5)
    bl fn_801F4CB4
lbl_fn_80529528_00001664:
    lwz r3, lbl_8087F430
    bl fn_803754F0
    cmpwi r3, 0x0
    beq lbl_fn_80529528_00001710
    li r3, 0x0
    li r4, 0x2767
    bl fn_80116FC0
    lwz r4, 0x1b8(r26)
    lis r5, lbl_8075D1A0@ha
    addi r5, r5, lbl_8075D1A0@l
    mr r25, r3
    addi r3, r5, 0xd2
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r25
    bl fn_801FEE08
    lwz r0, 0x1cc(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80529528_000016C0
    lfs f29, lbl_80887A90
    b lbl_fn_80529528_000016C4
lbl_fn_80529528_000016C0:
    lfs f29, lbl_80887A9C
lbl_fn_80529528_000016C4:
    lwz r4, 0x1b8(r26)
    lis r27, lbl_8075D1A0@ha
    addi r27, r27, lbl_8075D1A0@l
    addi r3, r27, 0xe0
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    lwz r4, 0x1b8(r26)
    addi r3, r27, 0xeb
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887A90
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    b lbl_fn_80529528_00001830
lbl_fn_80529528_00001710:
    li r3, 0x0
    li r4, 0x2764
    bl fn_80116FC0
    lwz r4, 0x1b8(r26)
    lis r27, lbl_8075D1A0@ha
    addi r27, r27, lbl_8075D1A0@l
    mr r25, r3
    addi r3, r27, 0xd2
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r25
    bl fn_801FEE08
    lwz r3, lbl_8087F430
    li r4, 0x394
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80529528_000017A0
    lwz r4, 0x1b8(r26)
    addi r3, r27, 0xe0
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887A9C
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    lwz r4, 0x1b8(r26)
    addi r3, r27, 0xeb
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887A9C
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    b lbl_fn_80529528_00001830
lbl_fn_80529528_000017A0:
    lwz r0, 0x1cc(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80529528_000017B4
    lfs f29, lbl_80887A90
    b lbl_fn_80529528_000017B8
lbl_fn_80529528_000017B4:
    lfs f29, lbl_80887A9C
lbl_fn_80529528_000017B8:
    lwz r4, 0x1b8(r26)
    lis r27, lbl_8075D1A0@ha
    addi r27, r27, lbl_8075D1A0@l
    addi r3, r27, 0xe0
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    lwz r0, lbl_8087DCCC
    cmpwi r0, 0x0
    beq lbl_fn_80529528_00001810
    lwz r4, 0x1b8(r26)
    addi r3, r27, 0xeb
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887A90
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    b lbl_fn_80529528_00001830
lbl_fn_80529528_00001810:
    lwz r4, 0x1b8(r26)
    addi r3, r27, 0xeb
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887A9C
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
lbl_fn_80529528_00001830:
    lwz r0, 0x7c(r26)
    cmpwi r0, 0x1
    bne lbl_fn_80529528_0000186C
    lis r4, lbl_8075D1A0@ha
    lwz r5, 0x1bc(r26)
    addi r4, r4, lbl_8075D1A0@l
    addi r3, r1, 0x50
    addi r4, r4, 0xfc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F580
    addi r5, r1, 0x50
    lwz r4, 0x1b8(r26)
    li r6, 0x0
    bl fn_804A5824
lbl_fn_80529528_0000186C:
    addi r11, r1, 0x300
    psq_l f31, 0x328(r1), 0, 0
    lfd f31, 0x320(r1)
    psq_l f30, 0x318(r1), 0, 0
    lfd f30, 0x310(r1)
    psq_l f29, 0x308(r1), 0, 0
    lfd f29, 0x300(r1)
    bl _restgpr_25
    lwz r0, 0x334(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_80529B48(void)
{
    nofralloc
    blr
}

asm void fn_80529B4C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1c8(r29)
    li r31, 0x0
    li r0, 0x1
    stw r31, 0x7c(r29)
    cmpwi r3, 0x0
    stw r31, 0x80(r29)
    stw r0, 0x1bc(r29)
    stw r31, 0x1c0(r29)
    stw r0, 0x1cc(r29)
    beq lbl_fn_80529B4C_000018FC
    bl fn_800D2338
    stw r31, 0x1c8(r29)
lbl_fn_80529B4C_000018FC:
    lis r3, lbl_8075D1A0@ha
    addi r31, r1, 0x8
    addi r3, r3, lbl_8075D1A0@l
    addi r30, r3, 0x114
    cmplw r30, r31
    beq lbl_fn_80529B4C_00001930
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r3, r31
    mr r4, r30
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80529B4C_00001930:
    li r31, 0x0
    stw r31, 0x48(r1)
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_803B27F8
    stw r3, 0x1c8(r29)
    stw r31, 0xd64(r3)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80529C14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x1c8(r3)
    stw r31, 0x7c(r3)
    cmpwi r4, 0x0
    stw r31, 0x80(r3)
    stw r0, 0x1bc(r3)
    stw r31, 0x1c0(r3)
    beq lbl_fn_80529C14_000019B0
    mr r3, r4
    bl fn_800D2338
    stw r31, 0x1c8(r30)
lbl_fn_80529C14_000019B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80529C74(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    lwz r4, 0x1c8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80529C74_00002398
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80529C74_00001A10
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001A10:
    lwz r3, lbl_8087F430
    bl fn_803754F0
    cmpwi r3, 0x0
    lis r29, lbl_8075D170@ha
    addi r29, r29, lbl_8075D170@l
    beq lbl_fn_80529C74_00001A30
    lis r29, lbl_8075D17C@ha
    addi r29, r29, lbl_8075D17C@l
lbl_fn_80529C74_00001A30:
    lwz r0, 0x7c(r30)
    cmpwi r0, 0x4
    bne lbl_fn_80529C74_00001B9C
    lwz r3, 0x1c0(r30)
    addi r0, r3, 0x1
    stw r0, 0x1c0(r30)
    cmpwi r0, 0x3c
    ble lbl_fn_80529C74_00002398
    lwz r0, 0x1bc(r30)
    slwi r0, r0, 2
    lwzx r0, r29, r0
    cmplwi r0, 0x1
    ble lbl_fn_80529C74_00001A78
    cmpwi r0, 0x2
    beq lbl_fn_80529C74_00001AB4
    cmpwi r0, 0x3
    beq lbl_fn_80529C74_00001AD4
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001A78:
    lwz r3, 0x48(r30)
    bl fn_8052CA70
    lwz r3, lbl_8087F430
    li r4, 0x0
    lwz r5, lbl_8087F460
    li r6, 0x0
    bl fn_80370F8C
    lwz r3, lbl_8087F430
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00002398
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001AB4:
    lwz r3, lbl_8087F430
    bl fn_800D2338
    lis r4, lbl_8075D1A0@ha
    lwz r3, lbl_8087F9AC
    addi r4, r4, lbl_8075D1A0@l
    addi r4, r4, 0x116
    bl fn_80572B70
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001AD4:
    lwz r3, 0x48(r30)
    bl fn_8052CA70
    lwz r3, lbl_8087F430
    li r4, 0x1b
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r3, lbl_8087F430
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00001B0C
    lis r4, 0xf
    addi r4, r4, 0x423f
    bl fn_803CCC70
lbl_fn_80529C74_00001B0C:
    lwz r3, lbl_8087F490
    li r4, 0x1
    lwz r3, 0x263c(r3)
    bl fn_803B57B0
    lwz r3, lbl_8087F490
    li r4, 0x1
    lwz r3, 0x2640(r3)
    bl fn_803B6C88
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00001B74
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80529C74_00001B74
    bl fn_805AA738
    lwz r3, lbl_8087F430
    bl fn_803743AC
lbl_fn_80529C74_00001B74:
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00002398
    lfs f1, lbl_80887A90
    li r4, 0x0
    li r5, 0x5a
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001B9C:
    cmpwi r0, 0x5
    bne lbl_fn_80529C74_00001DF8
    lwz r0, 0x1bc(r30)
    li r31, 0x0
    li r28, 0x0
    slwi r0, r0, 2
    lwzx r0, r29, r0
    cmpwi r0, 0x0
    bne lbl_fn_80529C74_00001CD0
    lwz r0, 0x1d0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80529C74_00001C10
    lwz r3, 0x1c8(r30)
    bl fn_803B87A8
    cmpwi r3, 0x0
    bne lbl_fn_80529C74_00001D20
    lwz r3, 0x1c8(r30)
    lwz r0, 0xc84(r3)
    cmpwi r0, 0x7
    bne lbl_fn_80529C74_00001BFC
    li r0, 0x0
    stw r0, 0x1d0(r30)
    li r28, 0x1
    b lbl_fn_80529C74_00001D20
lbl_fn_80529C74_00001BFC:
    li r0, 0x0
    stw r0, 0x1d0(r30)
    li r4, 0x0
    bl fn_803B3270
    b lbl_fn_80529C74_00001D20
lbl_fn_80529C74_00001C10:
    lwz r3, 0x1c8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00001D20
    addis r3, r3, 0x1
    lwz r3, 0x4f60(r3)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80529C74_00001D20
    bl fn_803B8144
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00001C44
    li r28, 0x1
    b lbl_fn_80529C74_00001D20
lbl_fn_80529C74_00001C44:
    lwz r3, 0x1c8(r30)
    li r4, 0x0
    bl fn_803B2FBC
    lwz r3, lbl_8087F460
    bl fn_803BE854
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00001CC8
    lwz r29, lbl_8087F460
    cmpwi r29, 0x0
    beq lbl_fn_80529C74_00001CC0
    beq lbl_fn_80529C74_00001CB8
    addis r3, r29, 0x1
    subic. r0, r3, 0x61a0
    beq lbl_fn_80529C74_00001C94
    lis r4, fn_80119ECC@ha
    subi r3, r3, 0x4fdc
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    bl fn_806959D8
lbl_fn_80529C74_00001C94:
    addic. r3, r29, 0x539c
    beq lbl_fn_80529C74_00001CB0
    lis r4, fn_8012AFE8@ha
    li r5, 0x240
    addi r4, r4, fn_8012AFE8@l
    li r6, 0x7
    bl fn_806959D8
lbl_fn_80529C74_00001CB0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80529C74_00001CB8:
    li r0, 0x0
    stw r0, lbl_8087F460
lbl_fn_80529C74_00001CC0:
    li r28, 0x1
    b lbl_fn_80529C74_00001D20
lbl_fn_80529C74_00001CC8:
    li r31, 0x1
    b lbl_fn_80529C74_00001D20
lbl_fn_80529C74_00001CD0:
    lwz r3, lbl_8087F06C
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00001D20
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_80529C74_00001CF8
    bl fn_800D2338
    li r0, 0x1
    stw r0, 0x7c(r30)
    b lbl_fn_80529C74_00001D20
lbl_fn_80529C74_00001CF8:
    cmpwi r0, 0x8
    bne lbl_fn_80529C74_00001D20
    bl fn_800D2338
    addi r3, r1, 0x38
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800CB3A0
    li r31, 0x1
lbl_fn_80529C74_00001D20:
    cmpwi r31, 0x0
    beq lbl_fn_80529C74_00001D88
    li r0, 0x4
    stw r0, 0x7c(r30)
    li r4, 0x0
    li r5, 0x0
    lwz r3, lbl_8087F430
    li r6, 0x0
    lwz r3, 0x20(r3)
    bl fn_8006A250
    li r7, 0x1
    stw r7, 0x68(r3)
    li r6, 0x0
    li r5, 0x2d
    stw r6, 0x4c(r3)
    li r4, 0x1e
    lis r0, 0xff00
    lfs f0, lbl_80887AA0
    stw r6, 0x58(r3)
    stw r5, 0x54(r3)
    stw r4, 0x5c(r3)
    stw r6, 0x6c(r3)
    stw r0, 0x70(r3)
    stfs f0, 0x74(r3)
    stw r7, 0x48(r3)
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001D88:
    cmpwi r28, 0x0
    beq lbl_fn_80529C74_00002398
    li r3, 0x0
    li r0, 0x1
    stw r3, lbl_8087DCCC
    stw r0, lbl_8087F434
    lwz r4, 0x1c8(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80529C74_00001DB4
    stw r3, 0xd60(r4)
    stw r3, 0xc84(r4)
lbl_fn_80529C74_00001DB4:
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F580
    lwz r4, 0x8dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80529C74_00001DCC
    b lbl_fn_80529C74_00001DD0
lbl_fn_80529C74_00001DCC:
    la r4, lbl_808813D0
lbl_fn_80529C74_00001DD0:
    bl fn_804A4300
    li r0, 0x6
    stw r0, 0x7c(r30)
    addi r3, r1, 0x34
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x34
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001DF8:
    cmpwi r0, 0x2
    bne lbl_fn_80529C74_00001F3C
    lwz r3, lbl_8087F580
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80529C74_00001F18
    lwz r0, 0x1bc(r30)
    slwi r0, r0, 2
    lwzx r0, r29, r0
    cmpwi r0, 0x0
    bne lbl_fn_80529C74_00001EA0
    lwz r3, 0x1c8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00001E7C
    lwz r0, 0xd60(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80529C74_00001E50
    li r4, 0x0
    bl fn_803B8758
    li r0, 0x1
    stw r0, 0x1d0(r30)
    b lbl_fn_80529C74_00001E58
lbl_fn_80529C74_00001E50:
    li r4, 0x0
    bl fn_803B3270
lbl_fn_80529C74_00001E58:
    li r0, 0x5
    stw r0, 0x7c(r30)
    addi r3, r1, 0x30
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001E7C:
    li r0, 0x1
    stw r0, 0x7c(r30)
    addi r3, r1, 0x2c
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001EA0:
    li r0, 0x4
    stw r0, 0x7c(r30)
    addi r3, r1, 0x28
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F430
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    lwz r3, 0x20(r3)
    bl fn_8006A250
    li r7, 0x1
    stw r7, 0x68(r3)
    li r6, 0x0
    li r5, 0x2d
    stw r6, 0x4c(r3)
    li r4, 0x14
    lis r0, 0xff00
    lfs f0, lbl_80887AA0
    stw r6, 0x58(r3)
    stw r5, 0x54(r3)
    stw r4, 0x5c(r3)
    stw r6, 0x6c(r3)
    stw r0, 0x70(r3)
    stfs f0, 0x74(r3)
    stw r7, 0x48(r3)
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001F18:
    li r0, 0x1
    stw r0, 0x7c(r30)
    addi r3, r1, 0x24
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001F3C:
    cmpwi r0, 0x1
    bne lbl_fn_80529C74_0000210C
    addi r3, r30, 0x1bc
    li r4, 0x3
    li r5, 0x3
    li r6, 0x1
    li r7, 0x3
    bl fn_804A436C
    lwz r31, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_000020D0
    lwz r0, 0x1bc(r30)
    slwi r0, r0, 2
    lwzx r0, r29, r0
    cmpwi r0, 0x0
    beq lbl_fn_80529C74_00001FA8
    cmpwi r0, 0x1
    beq lbl_fn_80529C74_0000201C
    cmpwi r0, 0x2
    beq lbl_fn_80529C74_00002080
    cmpwi r0, 0x3
    beq lbl_fn_80529C74_0000209C
    b lbl_fn_80529C74_000020B4
lbl_fn_80529C74_00001FA8:
    lwz r3, lbl_8087F430
    li r4, 0x394
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00001FD8
    addi r3, r1, 0x20
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00001FD8:
    lwz r0, lbl_8087DCCC
    cmpwi r0, 0x0
    beq lbl_fn_80529C74_00002000
    lwz r3, lbl_8087F580
    li r4, 0x2
    li r5, 0x0
    bl fn_804A62C8
    li r0, 0x2
    stw r0, 0x7c(r30)
    b lbl_fn_80529C74_000020B4
lbl_fn_80529C74_00002000:
    addi r3, r1, 0x1c
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_0000201C:
    lwz r0, 0x1cc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80529C74_0000203C
    lwz r3, lbl_8087F430
    li r4, 0x394
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00002058
lbl_fn_80529C74_0000203C:
    addi r3, r1, 0x18
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00002058:
    li r0, 0x5
    stw r0, 0x7c(r30)
    lwz r0, lbl_8087F06C
    cmpwi r0, 0x0
    bne lbl_fn_80529C74_000020B4
    lwz r4, 0x1c8(r30)
    mr r3, r30
    li r5, 0x0
    bl fn_80117914
    b lbl_fn_80529C74_000020B4
lbl_fn_80529C74_00002080:
    lwz r3, lbl_8087F580
    li r4, 0x1
    li r5, 0x0
    bl fn_804A62C8
    li r0, 0x2
    stw r0, 0x7c(r30)
    b lbl_fn_80529C74_000020B4
lbl_fn_80529C74_0000209C:
    lwz r3, lbl_8087F580
    li r4, 0xa
    li r5, 0x0
    bl fn_804A62C8
    li r0, 0x2
    stw r0, 0x7c(r30)
lbl_fn_80529C74_000020B4:
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_000020D0:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00002398
    li r0, 0x0
    stw r0, 0x7c(r30)
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_0000210C:
    cmpwi r0, 0x6
    bne lbl_fn_80529C74_00002148
    lwz r3, lbl_8087F580
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80529C74_00002398
    li r0, 0x1
    stw r0, 0x7c(r30)
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00002148:
    cmpwi r0, 0x0
    bne lbl_fn_80529C74_00002398
    mr r3, r30
    li r4, 0x1
    li r5, 0x3
    bl fn_80510D68
    lwz r3, 0x50(r30)
    lwz r3, 0x0(r3)
    bl fn_80202118
    lis r4, lbl_8075D1A0@ha
    mr r31, r3
    addi r4, r4, lbl_8075D1A0@l
    addi r3, r3, 0x58
    addi r4, r4, 0x11c
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x3c
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x3c(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_80887AA4
    bne lbl_fn_80529C74_000021B4
    addi r4, r1, 0x3e
    b lbl_fn_80529C74_000021B8
lbl_fn_80529C74_000021B4:
    lwz r4, 0x44(r1)
lbl_fn_80529C74_000021B8:
    lfs f2, lbl_80887A8C
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x3c(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_80529C74_000021E0
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_80529C74_000021E0:
    lis r3, lbl_8075D1A0@ha
    addi r3, r3, lbl_8075D1A0@l
    addi r3, r3, 0x12d
    bl fn_800DC6B4
    lfs f0, lbl_80887AA8
    mr r4, r3
    addi r3, r31, 0x58
    li r5, 0x0
    fadds f1, f0, f31
    bl fn_801FED24
    lwz r29, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r29
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00002378
    lwz r0, 0x80(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r3, 0x198(r3)
    lwz r0, 0x0(r3)
    cmplwi r0, 0x7
    bgt lbl_fn_80529C74_0000235C
    lis r3, jumptable_80793720@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80793720@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x48(r30)
    li r4, 0x4
    bl fn_8052DEF0
    b lbl_fn_80529C74_0000235C
    lwz r3, 0x48(r30)
    li r4, 0x5
    bl fn_8052DEF0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_0000235C
    li r4, 0x1
    li r5, 0x1
    li r6, 0x20
    li r7, 0x1e
    bl fn_800CFBA0
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    li r5, 0x1
    li r6, 0x20
    li r7, 0xf
    bl fn_800CFBA0
    b lbl_fn_80529C74_0000235C
    lwz r3, 0x48(r30)
    li r4, 0x7
    bl fn_8052DEF0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_0000235C
    li r4, 0x1
    li r5, 0x1
    li r6, 0x20
    li r7, 0x1e
    bl fn_800CFBA0
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    li r5, 0x1
    li r6, 0x20
    li r7, 0xf
    bl fn_800CFBA0
    b lbl_fn_80529C74_0000235C
    lwz r3, 0x48(r30)
    li r4, 0x2
    bl fn_8052DEF0
    b lbl_fn_80529C74_0000235C
    lwz r3, 0x48(r30)
    li r4, 0x1
    bl fn_8052DEF0
    b lbl_fn_80529C74_0000235C
    lwz r3, 0x48(r30)
    li r4, 0x6
    bl fn_8052DEF0
    b lbl_fn_80529C74_0000235C
    lwz r3, 0x48(r30)
    li r4, 0x8
    bl fn_8052DEF0
    b lbl_fn_80529C74_0000235C
    li r3, 0x1
    li r0, 0x2
    stw r3, 0x7c(r30)
    stw r0, 0x1bc(r30)
    lwz r0, lbl_8087DCC8
    stw r0, 0x1cc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80529C74_0000235C
    stw r3, 0x1bc(r30)
lbl_fn_80529C74_0000235C:
    addi r3, r1, 0x8
    li r4, 0x6
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80529C74_00002398
lbl_fn_80529C74_00002378:
    mr r3, r29
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80529C74_00002398
    lwz r3, 0x48(r30)
    bl fn_8052C9C8
lbl_fn_80529C74_00002398:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
