#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_800133B0(void);
extern void fn_80063484(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_8008BBD8(void);
extern void fn_8008CD60(void);
extern void fn_80091CFC(void);
extern void fn_80092814(void);
extern void fn_800928B0(void);
extern void fn_80094F98(void);
extern void fn_800C258C(void);
extern void fn_800D246C(void);
extern void fn_800EAECC(void);
extern void fn_800EB270(void);
extern void fn_800EB49C(void);
extern void fn_800F29D0(void);
extern void fn_800F7FD8(void);
extern void fn_800F8C6C(void);
extern void fn_801125F8(void);
extern void fn_8011C044(void);
extern void fn_80126214(void);
extern void fn_80129978(void);
extern void fn_8012DB04(void);
extern void fn_8013655C(void);
extern void fn_80139F4C(void);
extern void fn_80139F58(void);
extern void fn_8013A258(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_80148B38(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_80158BB4(void);
extern void fn_80158CA4(void);
extern void fn_8015E7A0(void);
extern void fn_8015EB2C(void);
extern void fn_8016D454(void);
extern void fn_8016EB48(void);
extern void fn_8016F67C(void);
extern void fn_80179D44(void);
extern void fn_80219558(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8031F2A4(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_803754C4(void);
extern void fn_803C1560(void);
extern void fn_80568EE4(void);
extern void fn_80568F14(void);
extern void fn_805693D0(void);
extern void fn_80569664(void);
extern void fn_8056A040(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8075FE30[];
extern u8 lbl_807956B8[];
extern u8 lbl_807956C4[];
extern u8 lbl_807956E0[];
extern u8 lbl_807956E8[];
extern u8 lbl_807956F0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C9558[];
extern u8 lbl_807C9560[];

/* Small data declarations */
extern u32 lbl_8087D6E8;
extern u32 lbl_8087D6EC;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F990;
extern u32 lbl_8087F991;
extern u32 lbl_80887F34;
extern u32 lbl_80887F40;
extern u32 lbl_80887F44;
extern u32 lbl_80887F48;
extern u32 lbl_80887F4C;
extern u32 lbl_80887F50;
extern u32 lbl_80887F54;
extern u32 lbl_80887F58;
extern u32 lbl_80887F5C;
extern u32 lbl_80887F60;
extern u32 lbl_80887F64;
extern u32 lbl_80887F68;
extern u32 lbl_80887F6C;
extern u32 lbl_80887F70;
extern u32 lbl_80887F74;
extern u32 lbl_80887F78;
extern u32 lbl_80887F7C;
extern u32 lbl_80887F80;
extern u32 lbl_80887F84;
extern u32 lbl_80887F88;
extern u32 lbl_80887F8C;
extern u32 lbl_80887F90;
extern u32 lbl_80887F94;
extern u32 lbl_80887F98;

/* Function declarations */
void fn_80565F38(void);
void fn_80566014(void);
void fn_805660E0(void);
void fn_8056639C(void);
void fn_805663FC(void);
void fn_8056640C(void);
void fn_8056641C(void);
void fn_80566424(void);
void fn_805664E0(void);
void fn_80566560(void);
void fn_80566B30(void);
void fn_80566B5C(void);
void fn_80566C14(void);
void fn_80566C40(void);
void fn_80566CF8(void);
void fn_80566E94(void);
void fn_80566F04(void);
void fn_80566FB8(void);
void fn_80567428(void);
void fn_80567600(void);

asm void fn_80565F38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x190(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80565F38_000000C4
    lwz r4, 0x40c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80565F38_000000A8
    lwz r0, 0x28(r3)
    oris r0, r0, 0x1
    stw r0, 0x28(r3)
    lwz r31, 0x28c(r4)
    cmpwi r31, 0x0
    bne lbl_fn_80565F38_00000050
    lwz r4, lbl_8087EFB4
    lwz r31, 0x2fc(r4)
lbl_fn_80565F38_00000050:
    cmpwi r31, 0x0
    stw r31, 0x200(r3)
    bne lbl_fn_80565F38_00000068
    lwz r4, lbl_8087EFB4
    lwz r0, 0x2fc(r4)
    b lbl_fn_80565F38_0000006C
lbl_fn_80565F38_00000068:
    mr r0, r31
lbl_fn_80565F38_0000006C:
    cmpwi r0, 0x0
    beq lbl_fn_80565F38_000000BC
    lwz r3, 0x40c(r3)
    cmpwi r31, 0x0
    addi r4, r3, 0xb0
    bne lbl_fn_80565F38_0000008C
    lwz r3, lbl_8087EFB4
    lwz r31, 0x2fc(r3)
lbl_fn_80565F38_0000008C:
    addi r3, r1, 0x8
    bl fn_80094F98
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_800C258C
    stw r3, 0x204(r30)
    b lbl_fn_80565F38_000000BC
lbl_fn_80565F38_000000A8:
    lwz r4, 0x28(r3)
    li r0, 0x0
    stw r0, 0x204(r3)
    rlwinm r0, r4, 0, 16, 14
    stw r0, 0x28(r3)
lbl_fn_80565F38_000000BC:
    addi r3, r30, 0x24
    bl fn_8008CD60
lbl_fn_80565F38_000000C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80566014(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    lwz r4, 0x190(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80566014_00000194
    lwz r3, 0x3fc(r3)
    lwz r29, 0x44(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80566014_00000110
    bl fn_80084C24
lbl_fn_80566014_00000110:
    cmpwi r29, 0x0
    stw r29, 0x3f8(r26)
    beq lbl_fn_80566014_0000013C
    slwi r3, r29, 2
    li r4, 0x6
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x3fc(r26)
    b lbl_fn_80566014_00000144
lbl_fn_80566014_0000013C:
    li r0, 0x0
    stw r0, 0x3fc(r26)
lbl_fn_80566014_00000144:
    lwz r3, 0x40c(r26)
    li r27, 0x0
    li r31, 0x0
    li r30, 0x0
    addi r28, r3, 0xb0
    b lbl_fn_80566014_0000018C
lbl_fn_80566014_0000015C:
    lwz r4, 0x190(r26)
    mr r3, r28
    li r5, 0x0
    lwz r4, 0x48(r4)
    lwzx r4, r4, r30
    lwz r4, 0x14(r4)
    bl fn_800928B0
    lwz r4, 0x3fc(r26)
    addi r30, r30, 0x4
    addi r27, r27, 0x1
    stwx r3, r4, r31
    addi r31, r31, 0x4
lbl_fn_80566014_0000018C:
    cmpw r27, r29
    blt lbl_fn_80566014_0000015C
lbl_fn_80566014_00000194:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805660E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805660E0_00000448
    lwz r3, 0x40c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_000001EC
    lwz r3, 0x50(r3)
    bl fn_80219558
    mr r30, r3
    b lbl_fn_805660E0_000001F0
lbl_fn_805660E0_000001EC:
    li r30, -0x1
lbl_fn_805660E0_000001F0:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_805660E0_00000250
    lwz r3, 0x40c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_00000214
    lbz r0, 0xa05(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805660E0_000002B4
lbl_fn_805660E0_00000214:
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805660E0_0000023C
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_0000023C
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_805660E0_0000023C:
    li r3, 0x0
    li r0, 0x14
    stw r3, 0x1c(r31)
    stw r0, 0x434(r31)
    b lbl_fn_805660E0_00000448
lbl_fn_805660E0_00000250:
    cmplwi r30, 0x6
    bgt lbl_fn_805660E0_00000278
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_00000278
    mulli r0, r30, 0x43c
    add r3, r3, r0
    lbz r0, 0x671d(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805660E0_000002B4
lbl_fn_805660E0_00000278:
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805660E0_000002A0
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_000002A0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_805660E0_000002A0:
    li r3, 0x0
    li r0, 0x14
    stw r3, 0x1c(r31)
    stw r0, 0x434(r31)
    b lbl_fn_805660E0_00000448
lbl_fn_805660E0_000002B4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_000002CC
    bl fn_803754C4
    cmpwi r3, 0x0
    bne lbl_fn_805660E0_000002F8
lbl_fn_805660E0_000002CC:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_00000448
    lwz r3, 0x38(r3)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_805660E0_00000448
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_805660E0_000002F8
    b lbl_fn_805660E0_00000448
lbl_fn_805660E0_000002F8:
    lwz r3, 0x434(r31)
    subic. r0, r3, 0x1
    stw r0, 0x434(r31)
    bgt lbl_fn_805660E0_00000448
    li r0, 0x14
    stw r0, 0x434(r31)
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_805660E0_0000032C
    lwz r3, 0x40c(r31)
    lbz r3, 0xa05(r3)
    subi r29, r3, 0x1
    b lbl_fn_805660E0_00000340
lbl_fn_805660E0_0000032C:
    mulli r0, r30, 0x43c
    lwz r3, lbl_8087F4F0
    add r3, r3, r0
    lbz r3, 0x671d(r3)
    subi r29, r3, 0x1
lbl_fn_805660E0_00000340:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_00000374
    bl fn_803754C4
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_00000374
    lwz r3, lbl_8087F3C0
    li r4, 0x1
    li r0, 0x6
    stw r4, 0xbc(r3)
    lwz r3, lbl_8087F3C0
    stw r0, 0xb8(r3)
    b lbl_fn_805660E0_00000380
lbl_fn_805660E0_00000374:
    lwz r3, lbl_8087F3C0
    li r0, 0x2
    stw r0, 0xb8(r3)
lbl_fn_805660E0_00000380:
    li r30, 0x1
    stw r30, 0x1c(r31)
    mr r4, r31
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_0000040C
    lwz r4, 0x40c(r31)
    lis r7, lbl_807C7030@ha
    lfs f1, lbl_80887F34
    addi r7, r7, lbl_807C7030@l
    stfs f1, 0x10(r1)
    li r6, -0x1
    mulli r0, r29, 0xc
    addis r3, r3, 0x3
    stfs f1, 0x14(r1)
    addi r5, r4, 0xb0
    mr r8, r7
    stfs f1, 0x18(r1)
    add r3, r3, r0
    addi r9, r1, 0x10
    stfs f1, 0x1c(r1)
    addi r4, r3, 0x663c
    li r10, -0x1
    stw r6, 0x8(r1)
    li r6, 0x0
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_805660E0_0000040C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_0000043C
    bl fn_803754C4
    cmpwi r3, 0x0
    beq lbl_fn_805660E0_0000043C
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    stw r0, 0xbc(r3)
    b lbl_fn_805660E0_00000448
lbl_fn_805660E0_0000043C:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_805660E0_00000448:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8056639C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8056639C_000004A0
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8056639C_000004A0
    mr r4, r31
    li r5, 0x0
    bl fn_80239DAC
lbl_fn_8056639C_000004A0:
    li r3, 0x0
    li r0, 0x14
    stw r3, 0x1c(r31)
    stw r0, 0x434(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805663FC(void)
{
    nofralloc
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x28(r3)
    blr
}

asm void fn_8056640C(void)
{
    nofralloc
    lwz r0, 0x28(r3)
    ori r0, r0, 0x4
    stw r0, 0x28(r3)
    blr
}

asm void fn_8056641C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_80566424(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8035B694
    lwz r0, 0x14a8(r31)
    li r6, 0x0
    lfs f5, lbl_80887F40
    lis r7, lbl_807956F0@ha
    lfs f4, lbl_80887F44
    addi r7, r7, lbl_807956F0@l
    lfs f0, lbl_80887F54
    oris r0, r0, 0x8000
    lfs f3, lbl_80887F48
    li r5, 0x2d
    lfs f2, lbl_80887F4C
    li r4, 0xf
    lfs f1, lbl_80887F50
    mr r3, r31
    stw r7, 0x0(r31)
    stfs f5, 0x14b0(r31)
    stfs f5, 0x14b4(r31)
    stfs f5, 0x14b8(r31)
    stw r6, 0x1560(r31)
    stw r6, 0x1564(r31)
    stfs f5, 0x14f8(r31)
    stfs f5, 0x14fc(r31)
    stfs f4, 0x1500(r31)
    stfs f5, 0x1504(r31)
    stfs f5, 0x1508(r31)
    stw r5, 0x150c(r31)
    stw r4, 0x1510(r31)
    stw r6, 0x1514(r31)
    stw r6, 0x1518(r31)
    stfs f3, 0x151c(r31)
    stfs f2, 0x1520(r31)
    stfs f1, 0x1524(r31)
    stfs f4, 0x1528(r31)
    stfs f0, 0x152c(r31)
    stfs f0, 0x1530(r31)
    stw r0, 0x14a8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805664E0(void)
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
    beq lbl_fn_805664E0_0000060C
    addic. r0, r3, 0x1560
    beq lbl_fn_805664E0_000005F0
    lwz r4, 0x1560(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805664E0_000005F0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_805664E0_000005F0
    bl fn_800897D8
lbl_fn_805664E0_000005F0:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_805664E0_0000060C
    mr r3, r30
    bl dtor_80084684
lbl_fn_805664E0_0000060C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80566560(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    stw r31, 0x28c(r1)
    mr r31, r3
    stw r30, 0x288(r1)
    li r30, 0x1
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_80566560_00000654
    li r30, 0x0
lbl_fn_80566560_00000654:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80566560_00000674
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80566560_00000674
    li r30, 0x0
lbl_fn_80566560_00000674:
    cmpwi r30, 0x0
    beq lbl_fn_80566560_00000BDC
    cmpwi r3, 0x0
    beq lbl_fn_80566560_0000069C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80566560_0000069C:
    lis r4, lbl_8075FE30@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_8075FE30@l
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    blt lbl_fn_80566560_00000730
    lwz r0, 0x524(r31)
    cmpwi r0, 0x0
    bge lbl_fn_80566560_000006CC
    li r4, 0x0
    b lbl_fn_80566560_000006D8
lbl_fn_80566560_000006CC:
    mulli r0, r0, 0x30
    lwz r4, 0xec(r31)
    add r4, r4, r0
lbl_fn_80566560_000006D8:
    lfs f0, 0x2c(r4)
    cmpwi r3, 0x0
    lfs f3, 0x1c(r4)
    lfs f4, 0xc(r4)
    stfs f4, 0x248(r1)
    stfs f3, 0x24c(r1)
    stfs f0, 0x250(r1)
    bge lbl_fn_80566560_00000700
    li r3, 0x0
    b lbl_fn_80566560_0000070C
lbl_fn_80566560_00000700:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_80566560_0000070C:
    lfs f4, 0x1c(r3)
    lfs f0, 0x24c(r1)
    lfs f3, 0x2c(r3)
    lfs f5, 0xc(r3)
    fsubs f0, f4, f0
    stfs f5, 0x23c(r1)
    stfs f4, 0x240(r1)
    stfs f3, 0x244(r1)
    stfs f0, 0x14cc(r31)
lbl_fn_80566560_00000730:
    lfs f4, lbl_80887F58
    lis r4, lbl_807956B8@ha
    lfs f3, lbl_80887F5C
    li r3, 0x0
    lfs f0, lbl_80887F60
    stfs f4, 0x56c(r31)
    stfs f3, 0x500(r31)
    stfs f0, 0x508(r31)
    lwzu r9, lbl_807956B8@l(r4)
    lbz r0, lbl_8087F991
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    extsb. r0, r0
    stw r9, 0x200(r1)
    stw r8, 0x204(r1)
    stw r7, 0x208(r1)
    stw r9, 0x78(r1)
    stw r8, 0x7c(r1)
    stw r7, 0x80(r1)
    stw r9, 0x38(r1)
    stw r8, 0x3c(r1)
    stw r7, 0x40(r1)
    stw r9, 0x1c8(r1)
    stw r8, 0x1cc(r1)
    stw r7, 0x1d0(r1)
    stw r9, 0x1bc(r1)
    stw r8, 0x1c0(r1)
    stw r7, 0x1c4(r1)
    stw r9, 0x1b0(r1)
    stw r8, 0x1b4(r1)
    stw r7, 0x1b8(r1)
    stw r9, 0x210(r1)
    stw r8, 0x214(r1)
    stw r7, 0x218(r1)
    stw r31, 0x21c(r1)
    stw r9, 0x28(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r31, 0x34(r1)
    stw r9, 0x220(r1)
    stw r8, 0x224(r1)
    stw r7, 0x228(r1)
    stw r31, 0x22c(r1)
    stw r9, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r31, 0x74(r1)
    stw r9, 0x130(r1)
    stw r8, 0x134(r1)
    stw r7, 0x138(r1)
    stw r31, 0x13c(r1)
    stw r3, 0x268(r1)
    stw r9, 0x1a0(r1)
    stw r8, 0x1a4(r1)
    stw r7, 0x1a8(r1)
    stw r31, 0x1ac(r1)
    bne lbl_fn_80566560_0000086C
    lis r6, lbl_807C9560@ha
    lis r4, fn_80566C14@ha
    lis r3, fn_80566C40@ha
    li r0, 0x1
    addi r3, r3, fn_80566C40@l
    addi r5, r6, lbl_807C9560@l
    addi r4, r4, fn_80566C14@l
    stw r9, 0x140(r1)
    stw r8, 0x144(r1)
    stw r7, 0x148(r1)
    stw r31, 0x14c(r1)
    stw r9, 0x170(r1)
    stw r8, 0x174(r1)
    stw r7, 0x178(r1)
    stw r31, 0x17c(r1)
    stw r9, 0x160(r1)
    stw r8, 0x164(r1)
    stw r7, 0x168(r1)
    stw r31, 0x16c(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C9560@l(r6)
    stb r0, lbl_8087F991
lbl_fn_80566560_0000086C:
    lwz r6, 0x68(r1)
    addi r3, r1, 0x190
    lwz r5, 0x6c(r1)
    lwz r4, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r6, 0x150(r1)
    stw r5, 0x154(r1)
    stw r4, 0x158(r1)
    stw r0, 0x15c(r1)
    stw r6, 0x190(r1)
    stw r5, 0x194(r1)
    stw r4, 0x198(r1)
    stw r0, 0x19c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80566560_000008F0
    addic. r0, r1, 0x26c
    lwz r5, 0x190(r1)
    lwz r4, 0x194(r1)
    lwz r3, 0x198(r1)
    lwz r0, 0x19c(r1)
    stw r5, 0x180(r1)
    stw r4, 0x184(r1)
    stw r3, 0x188(r1)
    stw r0, 0x18c(r1)
    beq lbl_fn_80566560_000008E8
    stw r5, 0x26c(r1)
    stw r4, 0x270(r1)
    stw r3, 0x274(r1)
    stw r0, 0x278(r1)
lbl_fn_80566560_000008E8:
    li r0, 0x1
    b lbl_fn_80566560_000008F4
lbl_fn_80566560_000008F0:
    li r0, 0x0
lbl_fn_80566560_000008F4:
    cmpwi r0, 0x0
    beq lbl_fn_80566560_0000090C
    lis r3, lbl_807C9560@ha
    addi r3, r3, lbl_807C9560@l
    stw r3, 0x268(r1)
    b lbl_fn_80566560_00000914
lbl_fn_80566560_0000090C:
    li r0, 0x0
    stw r0, 0x268(r1)
lbl_fn_80566560_00000914:
    addi r3, r31, 0xb0
    addi r4, r1, 0x268
    bl fn_800F29D0
    addic. r3, r1, 0x268
    beq lbl_fn_80566560_0000095C
    lwz r4, 0x268(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80566560_0000095C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80566560_00000954
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80566560_00000954:
    li r0, 0x0
    stw r0, 0x268(r1)
lbl_fn_80566560_0000095C:
    lis r30, lbl_8075FE30@ha
    addi r3, r31, 0xb0
    addi r30, r30, lbl_8075FE30@l
    addi r4, r30, 0x9
    bl fn_80091CFC
    addi r3, r31, 0xb0
    addi r4, r30, 0xe
    bl fn_80091CFC
    lbz r0, lbl_8087F990
    lis r4, lbl_807956C4@ha
    lwzu r9, lbl_807956C4@l(r4)
    li r3, 0x0
    extsb. r0, r0
    stw r9, 0x1d4(r1)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    stw r8, 0x1d8(r1)
    stw r7, 0x1dc(r1)
    stw r9, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r9, 0x120(r1)
    stw r8, 0x124(r1)
    stw r7, 0x128(r1)
    stw r9, 0x114(r1)
    stw r8, 0x118(r1)
    stw r7, 0x11c(r1)
    stw r9, 0x108(r1)
    stw r8, 0x10c(r1)
    stw r7, 0x110(r1)
    stw r9, 0x1e0(r1)
    stw r8, 0x1e4(r1)
    stw r7, 0x1e8(r1)
    stw r31, 0x1ec(r1)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r7, 0x10(r1)
    stw r31, 0x14(r1)
    stw r9, 0x1f0(r1)
    stw r8, 0x1f4(r1)
    stw r7, 0x1f8(r1)
    stw r31, 0x1fc(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r31, 0x54(r1)
    stw r9, 0x88(r1)
    stw r8, 0x8c(r1)
    stw r7, 0x90(r1)
    stw r31, 0x94(r1)
    stw r3, 0x254(r1)
    stw r9, 0xf8(r1)
    stw r8, 0xfc(r1)
    stw r7, 0x100(r1)
    stw r31, 0x104(r1)
    bne lbl_fn_80566560_00000AA0
    lis r6, lbl_807C9558@ha
    lis r4, fn_80566B30@ha
    lis r3, fn_80566B5C@ha
    li r0, 0x1
    addi r3, r3, fn_80566B5C@l
    addi r5, r6, lbl_807C9558@l
    addi r4, r4, fn_80566B30@l
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stw r7, 0xa0(r1)
    stw r31, 0xa4(r1)
    stw r9, 0xc8(r1)
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r31, 0xd4(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r31, 0xc4(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C9558@l(r6)
    stb r0, lbl_8087F990
lbl_fn_80566560_00000AA0:
    lwz r6, 0x48(r1)
    addi r3, r1, 0xe8
    lwz r5, 0x4c(r1)
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r0, 0xb4(r1)
    stw r6, 0xe8(r1)
    stw r5, 0xec(r1)
    stw r4, 0xf0(r1)
    stw r0, 0xf4(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80566560_00000B24
    addic. r0, r1, 0x258
    lwz r5, 0xe8(r1)
    lwz r4, 0xec(r1)
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r5, 0xd8(r1)
    stw r4, 0xdc(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    beq lbl_fn_80566560_00000B1C
    stw r5, 0x258(r1)
    stw r4, 0x25c(r1)
    stw r3, 0x260(r1)
    stw r0, 0x264(r1)
lbl_fn_80566560_00000B1C:
    li r0, 0x1
    b lbl_fn_80566560_00000B28
lbl_fn_80566560_00000B24:
    li r0, 0x0
lbl_fn_80566560_00000B28:
    cmpwi r0, 0x0
    beq lbl_fn_80566560_00000B40
    lis r3, lbl_807C9558@ha
    addi r3, r3, lbl_807C9558@l
    stw r3, 0x254(r1)
    b lbl_fn_80566560_00000B48
lbl_fn_80566560_00000B40:
    li r0, 0x0
    stw r0, 0x254(r1)
lbl_fn_80566560_00000B48:
    addi r3, r31, 0xb0
    addi r4, r1, 0x254
    bl fn_8031F2A4
    addic. r3, r1, 0x254
    beq lbl_fn_80566560_00000B90
    lwz r4, 0x254(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80566560_00000B90
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80566560_00000B88
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80566560_00000B88:
    li r0, 0x0
    stw r0, 0x254(r1)
lbl_fn_80566560_00000B90:
    lwz r0, 0x7ec(r31)
    addi r4, r1, 0x230
    lfs f3, lbl_80887F64
    addi r5, r31, 0x10fc
    lfs f0, lbl_80887F68
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    stfs f3, 0x230(r1)
    lfs f2, lbl_80887F40
    ori r0, r0, 0xc015
    stfs f0, 0x234(r1)
    oris r0, r0, 0x300
    li r3, 0x1
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x7ec(r31)
    stfs f2, 0x238(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1104(r31)
    b lbl_fn_80566560_00000BE0
lbl_fn_80566560_00000BDC:
    li r3, 0x0
lbl_fn_80566560_00000BE0:
    lwz r0, 0x294(r1)
    lwz r31, 0x28c(r1)
    lwz r30, 0x288(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_80566B30(void)
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

asm void fn_80566B5C(void)
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
    bne lbl_fn_80566B5C_00000C58
    lis r3, lbl_807956E0@ha
    addi r3, r3, lbl_807956E0@l
    stw r3, 0x0(r4)
    b lbl_fn_80566B5C_00000CC4
lbl_fn_80566B5C_00000C58:
    cmpwi r5, 0x0
    bne lbl_fn_80566B5C_00000C8C
    cmpwi r4, 0x0
    beq lbl_fn_80566B5C_00000CC4
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_80566B5C_00000CC4
lbl_fn_80566B5C_00000C8C:
    cmpwi r5, 0x1
    beq lbl_fn_80566B5C_00000CC4
    lwz r5, 0x0(r4)
    lis r3, lbl_807956E0@ha
    lwz r4, lbl_807956E0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80566B5C_00000CBC
    stw r30, 0x0(r31)
    b lbl_fn_80566B5C_00000CC4
lbl_fn_80566B5C_00000CBC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80566B5C_00000CC4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80566C14(void)
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

asm void fn_80566C40(void)
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
    bne lbl_fn_80566C40_00000D3C
    lis r3, lbl_807956E8@ha
    addi r3, r3, lbl_807956E8@l
    stw r3, 0x0(r4)
    b lbl_fn_80566C40_00000DA8
lbl_fn_80566C40_00000D3C:
    cmpwi r5, 0x0
    bne lbl_fn_80566C40_00000D70
    cmpwi r4, 0x0
    beq lbl_fn_80566C40_00000DA8
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_80566C40_00000DA8
lbl_fn_80566C40_00000D70:
    cmpwi r5, 0x1
    beq lbl_fn_80566C40_00000DA8
    lwz r5, 0x0(r4)
    lis r3, lbl_807956E8@ha
    lwz r4, lbl_807956E8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80566C40_00000DA0
    stw r30, 0x0(r31)
    b lbl_fn_80566C40_00000DA8
lbl_fn_80566C40_00000DA0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80566C40_00000DA8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80566CF8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80566CF8_00000DE8
    li r0, 0x4
    stw r0, 0x55c(r3)
lbl_fn_80566CF8_00000DE8:
    lfs f2, 0x530(r3)
    addi r4, r1, 0x20
    psq_l f1, 0x528(r3), 0, 0
    addi r5, r1, 0x14
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x534(r3), 0, 0
    stfs f2, 0x28(r1)
    lfs f2, 0x53c(r3)
    mr r3, r31
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_8014C540
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80566CF8_00000E48
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80566CF8_00000E48
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80566CF8_00000E48:
    mr r3, r31
    bl fn_80566FB8
    lfs f3, 0x14b4(r31)
    lfs f0, lbl_80887F6C
    lfs f4, 0x18(r1)
    fmuls f5, f3, f0
    lfs f0, 0x538(r31)
    lfs f3, lbl_80887F70
    stfs f5, 0x14b4(r31)
    fadds f4, f4, f5
    fsubs f4, f4, f0
    fabs f0, f4
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_80566CF8_00000E8C
    fdivs f0, f4, f0
    fmuls f4, f3, f0
lbl_fn_80566CF8_00000E8C:
    lwz r4, 0xfc0(r31)
    stfs f4, 0x14b4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80566CF8_00000ED0
    lwz r0, 0x12a4(r31)
    lis r5, lbl_8075FE30@ha
    addi r5, r5, lbl_8075FE30@l
    lis r6, lbl_807C7030@ha
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x12a4(r31)
    lfs f1, lbl_80887F74
    addi r3, r31, 0x10d8
    addi r4, r4, 0xb0
    addi r5, r5, 0x9
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    b lbl_fn_80566CF8_00000EDC
lbl_fn_80566CF8_00000ED0:
    lwz r0, 0x12a4(r31)
    oris r0, r0, 0x100
    stw r0, 0x12a4(r31)
lbl_fn_80566CF8_00000EDC:
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80566CF8_00000F04
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_80566CF8_00000F04
    mr r3, r31
    bl fn_80145334
    b lbl_fn_80566CF8_00000F48
lbl_fn_80566CF8_00000F04:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x10c(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    mr r3, r31
    bl fn_80148B38
lbl_fn_80566CF8_00000F48:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80566E94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80149A30
    lwz r3, lbl_8087F0A8
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80566E94_00000FB8
    lfs f1, lbl_80887F78
    li r4, 0x14
    lfs f0, 0x52c(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f2, f1, f0
    lfs f1, 0x528(r31)
    lfs f3, 0x530(r31)
    lfs f4, 0x538(r31)
    lfs f5, lbl_80887F40
    lfs f6, lbl_80887F7C
    lfs f7, lbl_80887F64
    bl fn_80063484
lbl_fn_80566E94_00000FB8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80566F04(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_80151448
    lwz r0, 0x7e0(r30)
    li r3, 0x0
    stw r3, 0x638(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80566F04_00001068
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80566F04_00001024
    lwz r0, 0x560(r30)
    cmpwi r0, 0x17
    beq lbl_fn_80566F04_00001060
    cmpwi r0, 0x3b
    beq lbl_fn_80566F04_00001060
lbl_fn_80566F04_00001024:
    lfs f3, 0x30(r31)
    mr r3, r30
    lfs f2, lbl_80887F80
    addi r4, r1, 0x8
    lfs f1, 0x2c(r31)
    li r5, -0x1
    lfs f0, 0x28(r31)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    li r6, 0x0
    fmuls f0, f0, f2
    stfs f3, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    bl fn_8015E7A0
lbl_fn_80566F04_00001060:
    mr r3, r30
    bl fn_800EB49C
lbl_fn_80566F04_00001068:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80566FB8(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    lwz r4, 0x58c(r3)
    subi r0, r4, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_80566FB8_000014D4
    cmpwi r4, 0x0
    beq lbl_fn_80566FB8_000010C4
    cmpwi r4, 0x1
    beq lbl_fn_80566FB8_000013BC
    cmpwi r4, 0x2
    beq lbl_fn_80566FB8_00001498
    b lbl_fn_80566FB8_000014D8
lbl_fn_80566FB8_000010C4:
    lwz r4, 0x55c(r3)
    cmpwi r4, 0x6
    bne lbl_fn_80566FB8_0000115C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x27
    beq lbl_fn_80566FB8_00001148
    bge lbl_fn_80566FB8_0000111C
    cmpwi r0, 0x14
    bge lbl_fn_80566FB8_00001108
    cmpwi r0, 0x4
    bge lbl_fn_80566FB8_000010FC
    cmpwi r0, 0x2
    bge lbl_fn_80566FB8_00001148
    b lbl_fn_80566FB8_0000115C
lbl_fn_80566FB8_000010FC:
    cmpwi r0, 0x11
    bge lbl_fn_80566FB8_00001148
    b lbl_fn_80566FB8_0000115C
lbl_fn_80566FB8_00001108:
    cmpwi r0, 0x18
    bge lbl_fn_80566FB8_0000115C
    cmpwi r0, 0x16
    bge lbl_fn_80566FB8_00001148
    b lbl_fn_80566FB8_0000115C
lbl_fn_80566FB8_0000111C:
    cmpwi r0, 0x41
    beq lbl_fn_80566FB8_00001148
    bge lbl_fn_80566FB8_0000113C
    cmpwi r0, 0x36
    bge lbl_fn_80566FB8_0000115C
    cmpwi r0, 0x34
    bge lbl_fn_80566FB8_00001148
    b lbl_fn_80566FB8_0000115C
lbl_fn_80566FB8_0000113C:
    cmpwi r0, 0x47
    beq lbl_fn_80566FB8_00001148
    b lbl_fn_80566FB8_0000115C
lbl_fn_80566FB8_00001148:
    li r0, 0x0
    stw r0, 0xf08(r3)
    mr r3, r31
    bl fn_80567600
    b lbl_fn_80566FB8_000014D8
lbl_fn_80566FB8_0000115C:
    cmpwi r4, 0x7
    bne lbl_fn_80566FB8_00001280
    lfs f2, 0x530(r3)
    addi r4, r1, 0x2c
    psq_l f1, 0x528(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_80567600
    lfs f5, 0x2c(r1)
    li r30, 0x1
    lfs f4, 0x528(r31)
    lfs f3, 0x30(r1)
    fsubs f7, f5, f4
    lfs f0, 0x52c(r31)
    lfs f5, 0x34(r1)
    fsubs f6, f3, f0
    lfs f4, 0x530(r31)
    lfs f3, 0x570(r31)
    lfs f0, lbl_80887F58
    fsubs f4, f5, f4
    stfs f7, 0x2c(r1)
    fcmpo cr0, f3, f0
    stfs f6, 0x30(r1)
    stfs f4, 0x34(r1)
    ble lbl_fn_80566FB8_0000126C
    fabs f3, f7
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80566FB8_0000126C
    fabs f3, f6
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80566FB8_0000126C
    fabs f3, f4
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80566FB8_0000126C
    lwz r3, 0xf08(r31)
    addi r0, r3, 0x1
    stw r0, 0xf08(r31)
    cmpwi r0, 0x3
    ble lbl_fn_80566FB8_00001268
    mr r3, r31
    bl fn_8016F67C
    cmpwi r3, 0x0
    beq lbl_fn_80566FB8_0000126C
    lfs f3, lbl_80887F40
    addi r3, r1, 0x68
    lfs f0, lbl_80887F60
    li r4, 0x79
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x20
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
    b lbl_fn_80566FB8_0000126C
lbl_fn_80566FB8_00001268:
    li r30, 0x0
lbl_fn_80566FB8_0000126C:
    cmpwi r30, 0x0
    beq lbl_fn_80566FB8_000014D8
    li r0, 0x0
    stw r0, 0xf08(r31)
    b lbl_fn_80566FB8_000014D8
lbl_fn_80566FB8_00001280:
    lha r0, 0xd3a(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80566FB8_000012A8
    lha r0, 0xd3e(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80566FB8_000012A8
    mr r3, r31
    li r4, 0xc8
    bl fn_800EB270
    b lbl_fn_80566FB8_000014D8
lbl_fn_80566FB8_000012A8:
    lfs f2, 0x530(r3)
    addi r4, r1, 0x14
    psq_l f1, 0x528(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_80567600
    lfs f5, 0x14(r1)
    lfs f4, 0x528(r31)
    lfs f3, 0x18(r1)
    fsubs f7, f5, f4
    lfs f0, 0x52c(r31)
    lfs f5, 0x1c(r1)
    fsubs f6, f3, f0
    lfs f4, 0x530(r31)
    lfs f3, 0x570(r31)
    lfs f0, lbl_80887F58
    fsubs f4, f5, f4
    stfs f7, 0x14(r1)
    fcmpo cr0, f3, f0
    stfs f6, 0x18(r1)
    stfs f4, 0x1c(r1)
    ble lbl_fn_80566FB8_000013B0
    fabs f3, f7
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80566FB8_000013B0
    fabs f3, f6
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80566FB8_000013B0
    fabs f3, f4
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80566FB8_000013B0
    lwz r3, 0xf08(r31)
    addi r0, r3, 0x1
    stw r0, 0xf08(r31)
    cmpwi r0, 0x3
    ble lbl_fn_80566FB8_000014D8
    mr r3, r31
    bl fn_8016F67C
    cmpwi r3, 0x0
    beq lbl_fn_80566FB8_000014D8
    lfs f3, lbl_80887F40
    addi r3, r1, 0x38
    lfs f0, lbl_80887F60
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0xf08(r31)
    b lbl_fn_80566FB8_000014D8
lbl_fn_80566FB8_000013B0:
    li r0, 0x0
    stw r0, 0xf08(r31)
    b lbl_fn_80566FB8_000014D8
lbl_fn_80566FB8_000013BC:
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_80566FB8_00001420
    lwz r3, 0x560(r31)
    li r0, 0x0
    stw r0, 0x58c(r31)
    cmpwi r3, 0x16
    beq lbl_fn_80566FB8_00001420
    cmpwi r3, 0x17
    beq lbl_fn_80566FB8_00001420
    cmpwi r3, 0x47
    beq lbl_fn_80566FB8_00001420
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_80566FB8_00001420
    mr r3, r31
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    bl fn_8016EB48
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80566FB8_00001420
    li r0, 0x4
    stw r0, 0x55c(r31)
lbl_fn_80566FB8_00001420:
    mr r3, r31
    bl fn_80567600
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80566FB8_000014D8
    mr r3, r31
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_80566FB8_000014D8
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80566FB8_000014D8
    mr r3, r31
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x638(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80887F40
    li r9, 0x1e
    lwz r10, 0x594(r31)
    bl fn_800F8C6C
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80566FB8_000014D8
    subf r0, r3, r0
    stw r0, 0x594(r31)
    b lbl_fn_80566FB8_000014D8
lbl_fn_80566FB8_00001498:
    bl fn_8015EB2C
    cmpwi r3, 0x0
    bne lbl_fn_80566FB8_000014B0
    mr r3, r31
    bl fn_80567600
    b lbl_fn_80566FB8_000014D8
lbl_fn_80566FB8_000014B0:
    lwz r4, 0x5c0(r31)
    mr r3, r31
    lwz r0, 0x12a4(r31)
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r31)
    oris r0, r0, 0x200
    stw r0, 0x12a4(r31)
    bl fn_800EAECC
    b lbl_fn_80566FB8_000014D8
lbl_fn_80566FB8_000014D4:
    bl fn_80567600
lbl_fn_80566FB8_000014D8:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80567428(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r5, lbl_8087F430
    mr r29, r3
    mr r30, r4
    addi r27, r4, 0xc64
    lwz r28, 0x10d8(r5)
    cmpwi r28, 0x0
    bne lbl_fn_80567428_00001528
    li r3, 0x0
    b lbl_fn_80567428_000016B0
lbl_fn_80567428_00001528:
    lwz r5, 0xd1c(r4)
    lha r31, 0xd3a(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80567428_00001570
    lfs f1, 0x530(r4)
    addi r3, r1, 0x8
    lfs f0, 0x530(r5)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r5)
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r5)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
lbl_fn_80567428_00001570:
    lwz r0, 0xc58(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80567428_000015A8
    mr r3, r30
    bl fn_80179D44
    lfs f1, lbl_80887F84
    mr r5, r3
    mr r3, r28
    addi r4, r30, 0x528
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0x0(r27)
lbl_fn_80567428_000015A8:
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x1
    blt lbl_fn_80567428_00001680
    lhz r0, 0xd38(r30)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_80567428_00001694
    lha r0, 0xd3a(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80567428_000015E8
    cmpwi r0, 0x1
    beq lbl_fn_80567428_00001624
    cmpwi r0, 0x3
    beq lbl_fn_80567428_00001634
    cmpwi r0, 0x4
    beq lbl_fn_80567428_00001644
    b lbl_fn_80567428_00001694
lbl_fn_80567428_000015E8:
    addi r3, r29, 0xc58
    li r4, 0x3
    bl fn_8011C044
    lwz r0, 0xd14(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_80567428_00001694
    bl fn_80680CF8
    lwz r5, 0x1510(r29)
    lwz r0, 0x150c(r29)
    divw r4, r3, r5
    mullw r4, r4, r5
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0xd14(r29)
    b lbl_fn_80567428_00001694
lbl_fn_80567428_00001624:
    addi r3, r29, 0xc58
    li r4, 0x4
    bl fn_8011C044
    b lbl_fn_80567428_00001694
lbl_fn_80567428_00001634:
    addi r3, r29, 0xc58
    li r4, 0x4
    bl fn_8011C044
    b lbl_fn_80567428_00001694
lbl_fn_80567428_00001644:
    addi r3, r29, 0xc58
    li r4, 0x3
    bl fn_8011C044
    lwz r0, 0xd14(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_80567428_00001694
    bl fn_80680CF8
    lwz r5, 0x1510(r29)
    lwz r0, 0x150c(r29)
    divw r4, r3, r5
    mullw r4, r4, r5
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0xd14(r29)
    b lbl_fn_80567428_00001694
lbl_fn_80567428_00001680:
    addi r3, r29, 0xc58
    li r4, 0x0
    bl fn_8011C044
    li r0, 0x1e
    stw r0, 0xd14(r29)
lbl_fn_80567428_00001694:
    lha r0, 0xd3a(r30)
    cmpw r31, r0
    beq lbl_fn_80567428_000016AC
    lhz r0, 0xd38(r30)
    rlwinm r0, r0, 0, 18, 16
    sth r0, 0xd38(r30)
lbl_fn_80567428_000016AC:
    li r3, 0x1
lbl_fn_80567428_000016B0:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80567600(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    addi r3, r1, 0x30
    addi r4, r31, 0x534
    bl fn_8001047C
    lfs f0, lbl_80887F40
    stfs f0, 0x8(r1)
    lfs f30, lbl_80887F60
    lwz r3, 0x55c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80567600_00001734
    cmpwi r3, 0x5
    beq lbl_fn_80567600_00001734
    cmpwi r3, 0x9
    beq lbl_fn_80567600_00001734
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_80567600_00001744
lbl_fn_80567600_00001734:
    addi r3, r1, 0x30
    addi r4, r31, 0x534
    bl fn_8000D124
    b lbl_fn_80567600_000019C8
lbl_fn_80567600_00001744:
    cmpwi r3, 0x1
    bne lbl_fn_80567600_0000175C
    addi r3, r1, 0x30
    addi r4, r31, 0x534
    bl fn_8000D124
    b lbl_fn_80567600_000019C8
lbl_fn_80567600_0000175C:
    cmpwi r3, 0x4
    bne lbl_fn_80567600_00001914
    stfs f0, 0x8(r1)
    addi r3, r1, 0x30
    addi r4, r31, 0x534
    bl fn_8000D124
    lwz r0, 0xc58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80567600_0000178C
    mr r3, r31
    mr r4, r31
    bl fn_80567428
lbl_fn_80567600_0000178C:
    mr r3, r31
    mr r4, r31
    bl fn_80567428
    lha r0, 0xd3a(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80567600_000017C8
    cmpwi r0, 0x1
    beq lbl_fn_80567600_000017DC
    cmpwi r0, 0x2
    beq lbl_fn_80567600_000017F0
    cmpwi r0, 0x3
    beq lbl_fn_80567600_00001804
    cmpwi r0, 0x4
    beq lbl_fn_80567600_00001818
    b lbl_fn_80567600_00001828
lbl_fn_80567600_000017C8:
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    bl fn_80568EE4
    b lbl_fn_80567600_00001828
lbl_fn_80567600_000017DC:
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    bl fn_80568F14
    b lbl_fn_80567600_00001828
lbl_fn_80567600_000017F0:
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    bl fn_805693D0
    b lbl_fn_80567600_00001828
lbl_fn_80567600_00001804:
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    bl fn_80569664
    b lbl_fn_80567600_00001828
lbl_fn_80567600_00001818:
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    bl fn_8056A040
lbl_fn_80567600_00001828:
    lfs f1, 0x34(r1)
    lfs f0, 0x538(r31)
    fsubs f1, f1, f0
    bl fn_800133B0
    lha r3, 0xd3a(r31)
    fmr f29, f1
    subi r0, r3, 0x3
    clrlwi r0, r0, 16
    cmplwi r0, 0x1
    bgt lbl_fn_80567600_00001880
    lfs f1, lbl_80887F88
    bl fn_801125F8
    fmr f31, f1
    fmr f1, f29
    bl fn_80011220
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_80567600_000019C8
    fmr f1, f29
    mr r3, r31
    bl fn_8016D454
    b lbl_fn_80567600_000019F8
lbl_fn_80567600_00001880:
    cmpwi r3, 0x1
    bne lbl_fn_80567600_000019C8
    lfs f1, lbl_80887F8C
    bl fn_801125F8
    fmr f31, f1
    fmr f1, f29
    bl fn_80011220
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_80567600_000019C8
    lfs f1, lbl_80887F90
    bl fn_801125F8
    fcmpo cr0, f1, f29
    bge lbl_fn_80567600_000018C8
    lfs f1, lbl_80887F90
    bl fn_801125F8
    fmr f31, f1
    b lbl_fn_80567600_000018CC
lbl_fn_80567600_000018C8:
    fmr f31, f29
lbl_fn_80567600_000018CC:
    lfs f1, lbl_80887F94
    bl fn_801125F8
    fcmpo cr0, f1, f31
    ble lbl_fn_80567600_000018E8
    lfs f1, lbl_80887F94
    bl fn_801125F8
    b lbl_fn_80567600_00001908
lbl_fn_80567600_000018E8:
    lfs f1, lbl_80887F90
    bl fn_801125F8
    fcmpo cr0, f1, f29
    bge lbl_fn_80567600_00001904
    lfs f1, lbl_80887F90
    bl fn_801125F8
    b lbl_fn_80567600_00001908
lbl_fn_80567600_00001904:
    fmr f1, f29
lbl_fn_80567600_00001908:
    mr r3, r31
    bl fn_8016D454
    b lbl_fn_80567600_000019F8
lbl_fn_80567600_00001914:
    cmpwi r3, 0x7
    bne lbl_fn_80567600_000019B4
    addi r3, r31, 0x7d4
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_80567600_00001944
    lfs f0, lbl_80887F40
    addi r3, r1, 0x30
    stfs f0, 0x8(r1)
    addi r4, r31, 0x534
    bl fn_8000D124
    b lbl_fn_80567600_000019C8
lbl_fn_80567600_00001944:
    addi r3, r31, 0x1030
    bl fn_80126214
    addi r3, r31, 0x1030
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x24
    bl fn_8001047C
    addi r3, r1, 0x24
    bl fn_8000D3A4
    frsp f2, f1
    lfs f0, lbl_80887F98
    stfs f1, 0x8(r1)
    fcmpo cr0, f2, f0
    ble lbl_fn_80567600_000019A4
    addi r3, r1, 0xc
    addi r4, r1, 0x24
    bl fn_800F7FD8
    addi r3, r1, 0x18
    addi r4, r1, 0xc
    bl fn_80011034
    addi r3, r1, 0x30
    addi r4, r1, 0x18
    bl fn_8000D124
    b lbl_fn_80567600_000019C8
lbl_fn_80567600_000019A4:
    addi r3, r1, 0x30
    addi r4, r31, 0x534
    bl fn_8000D124
    b lbl_fn_80567600_000019C8
lbl_fn_80567600_000019B4:
    cmpwi r3, 0x6
    bne lbl_fn_80567600_000019C8
    mr r3, r31
    bl fn_8013A258
    b lbl_fn_80567600_000019F8
lbl_fn_80567600_000019C8:
    addi r3, r31, 0x7d4
    bl fn_8012DB04
    fmuls f30, f30, f1
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x30
    lwz r12, 0x34(r12)
    li r5, 0x0
    fmr f2, f30
    lfs f1, 0x8(r1)
    mtctr r12
    bctrl
lbl_fn_80567600_000019F8:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
