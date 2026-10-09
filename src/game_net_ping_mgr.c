#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_15(void);
extern void _restgpr_16(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_16(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8009EE30(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_801D082C(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801FEE08(void);
extern void fn_80201E78(void);
extern void fn_80202118(void);
extern void fn_80202A6C(void);
extern void fn_80202D00(void);
extern void fn_8021F094(void);
extern void fn_8021F0D4(void);
extern void fn_80370174(void);
extern void fn_803766E4(void);
extern void fn_804A4930(void);
extern void fn_8050F940(void);
extern void fn_8050FA80(void);
extern void fn_8050FB3C(void);
extern void fn_8050FC8C(void);
extern void fn_8050FD24(void);
extern void fn_8050FD3C(void);
extern void fn_8051125C(void);
extern void fn_805112AC(void);
extern void fn_805113EC(void);
extern void fn_805114D8(void);
extern void fn_805118B8(void);
extern void fn_805119CC(void);
extern void fn_80515F2C(void);
extern void fn_80516008(void);
extern void fn_80516410(void);
extern void fn_80516548(void);
extern void fn_805BA358(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075B6B8[];
extern u8 lbl_8075B758[];
extern u8 lbl_8075B7A4[];
extern u8 lbl_80775A88[];
extern u8 lbl_807933C8[];
extern u8 lbl_807C8FF0[];
extern u8 lbl_807C9070[];

/* Small data declarations */
extern u32 lbl_8087E480;
extern u32 lbl_8087E484;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_808813D0;
extern u32 lbl_808877E4;
extern u32 lbl_808877E8;
extern u32 lbl_808877F8;
extern u32 lbl_808877FC;
extern u32 lbl_80887800;
extern u32 lbl_80887804;
extern u32 lbl_80887808;
extern u32 lbl_8088780C;
extern u32 lbl_80887810;
extern u32 lbl_80887814;
extern u32 lbl_80887818;
extern u32 lbl_8088781C;
extern u32 lbl_80887820;
extern u32 lbl_80887824;
extern u32 lbl_80887828;
extern u32 lbl_8088782C;
extern u32 lbl_80887830;
extern u32 lbl_80887834;
extern u32 lbl_8088783C;
extern u32 lbl_80887840;
extern u32 lbl_80887844;
extern u32 lbl_80887848;
extern u32 lbl_8088784C;
extern u32 lbl_80887850;
extern u32 lbl_80887854;
extern u32 lbl_80887858;
extern u32 lbl_8088785C;
extern u32 lbl_80887860;
extern u32 lbl_80887864;
extern u32 lbl_80887868;
extern u32 lbl_8088786C;
extern u32 lbl_80887870;
extern u32 lbl_80887874;
extern u32 lbl_80887878;
extern u32 lbl_8088787C;
extern u32 lbl_80887880;
extern u32 lbl_80887884;

/* Function declarations */
void fn_8051445C(void);
void fn_805144E8(void);
void fn_80514534(void);
void fn_80514580(void);
void fn_80514724(void);
void fn_80514788(void);
void fn_80514AB0(void);
void fn_80514B3C(void);
void fn_80514B44(void);
void fn_80514C14(void);
void fn_80514C90(void);
void fn_8051531C(void);
void fn_80515958(void);
void fn_805159CC(void);
void fn_80515A3C(void);
void fn_80515ACC(void);
void fn_80515E48(void);

asm void fn_8051445C(void)
{
    nofralloc
    lwz r10, 0x0(r4)
    lwz r9, 0x4(r4)
    lwz r8, 0x8(r4)
    lwz r7, 0xc(r4)
    lwz r6, 0x10(r4)
    lwz r5, 0x14(r4)
    lwz r0, 0x18(r4)
    lfs f9, 0x1c(r4)
    lfs f8, 0x20(r4)
    lfs f7, 0x24(r4)
    lfs f6, 0x28(r4)
    lfs f5, 0x2c(r4)
    lfs f4, 0x30(r4)
    lfs f3, 0x34(r4)
    psq_l f1, 0x38(r4), 0, 0
    lfs f2, 0x40(r4)
    lfs f0, 0x44(r4)
    stw r10, 0x0(r3)
    stw r9, 0x4(r3)
    stw r8, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r0, 0x18(r3)
    stfs f9, 0x1c(r3)
    stfs f8, 0x20(r3)
    stfs f7, 0x24(r3)
    stfs f6, 0x28(r3)
    stfs f5, 0x2c(r3)
    stfs f4, 0x30(r3)
    stfs f3, 0x34(r3)
    psq_st f1, 0x38(r3), 0, 0
    stfs f2, 0x40(r3)
    stfs f0, 0x44(r3)
    blr
}

asm void fn_805144E8(void)
{
    nofralloc
    psq_l f1, 0xc(r4), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x1c(r4), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    psq_l f1, 0x24(r4), 0, 0
    psq_st f1, 0x24(r3), 0, 0
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    lfs f0, 0x8(r4)
    psq_l f1, 0x2c(r4), 0, 0
    psq_l f2, 0x34(r4), 0, 0
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f0, 0x8(r3)
    psq_st f1, 0x2c(r3), 0, 0
    psq_st f2, 0x34(r3), 0, 0
    blr
}

asm void fn_80514534(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    lfs f6, 0x8(r4)
    lfs f5, 0xc(r4)
    lfs f4, 0x10(r4)
    lfs f3, 0x14(r4)
    lfs f0, 0x18(r4)
    psq_l f1, 0x1c(r4), 0, 0
    lfs f2, 0x24(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f6, 0x8(r3)
    stfs f5, 0xc(r3)
    stfs f4, 0x10(r3)
    stfs f3, 0x14(r3)
    stfs f0, 0x18(r3)
    psq_st f1, 0x1c(r3), 0, 0
    stfs f2, 0x24(r3)
    blr
}

asm void fn_80514580(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stfd f28, 0x10(r1)
    psq_st f28, 0x18(r1), 0, 0
    lis r6, lbl_807C8FF0@ha
    lis r4, lbl_807C9070@ha
    lfs f28, lbl_808877E8
    addi r5, r6, lbl_807C8FF0@l
    addi r3, r4, lbl_807C9070@l
    lfs f29, lbl_808877F8
    lfs f13, lbl_808877E4
    lfs f5, lbl_80887820
    lfs f30, lbl_808877FC
    lfs f31, lbl_80887800
    lfs f12, lbl_80887804
    lfs f11, lbl_80887808
    lfs f10, lbl_8088780C
    lfs f9, lbl_80887810
    lfs f8, lbl_80887814
    lfs f7, lbl_80887818
    lfs f6, lbl_8088781C
    lfs f4, lbl_80887824
    lfs f3, lbl_80887828
    lfs f2, lbl_8088782C
    lfs f1, lbl_80887830
    lfs f0, lbl_80887834
    stfs f28, lbl_807C8FF0@l(r6)
    stfs f28, 0x4(r5)
    stfs f28, 0x8(r5)
    stfs f28, 0xc(r5)
    stfs f29, 0x10(r5)
    stfs f29, 0x14(r5)
    stfs f29, 0x18(r5)
    stfs f28, 0x1c(r5)
    stfs f28, 0x20(r5)
    stfs f30, 0x24(r5)
    stfs f31, 0x28(r5)
    stfs f28, 0x2c(r5)
    stfs f13, 0x30(r5)
    stfs f13, 0x34(r5)
    stfs f12, 0x38(r5)
    stfs f28, 0x3c(r5)
    stfs f11, 0x40(r5)
    stfs f10, 0x44(r5)
    stfs f9, 0x48(r5)
    stfs f28, 0x4c(r5)
    stfs f8, 0x50(r5)
    stfs f7, 0x54(r5)
    stfs f6, 0x58(r5)
    stfs f28, 0x5c(r5)
    stfs f5, 0x60(r5)
    stfs f4, 0x64(r5)
    stfs f3, 0x68(r5)
    stfs f28, 0x6c(r5)
    stfs f2, 0x70(r5)
    stfs f5, 0x74(r5)
    stfs f1, 0x78(r5)
    stfs f28, 0x7c(r5)
    stfs f13, lbl_807C9070@l(r4)
    stfs f13, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
    stfs f29, 0x14(r3)
    stfs f29, 0x18(r3)
    stfs f28, 0x1c(r3)
    stfs f28, 0x20(r3)
    stfs f30, 0x24(r3)
    stfs f31, 0x28(r3)
    stfs f28, 0x2c(r3)
    stfs f13, 0x30(r3)
    stfs f13, 0x34(r3)
    stfs f12, 0x38(r3)
    stfs f28, 0x3c(r3)
    stfs f11, 0x40(r3)
    stfs f10, 0x44(r3)
    stfs f9, 0x48(r3)
    stfs f28, 0x4c(r3)
    stfs f8, 0x50(r3)
    stfs f7, 0x54(r3)
    stfs f6, 0x58(r3)
    stfs f28, 0x5c(r3)
    stfs f5, 0x60(r3)
    stfs f4, 0x64(r3)
    stfs f3, 0x68(r3)
    stfs f28, 0x6c(r3)
    stfs f2, 0x70(r3)
    stfs f5, 0x74(r3)
    stfs f1, 0x78(r3)
    stfs f28, 0x7c(r3)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    psq_l f28, 0x18(r1), 0, 0
    lfd f28, 0x10(r1)
    addi r1, r1, 0x50
    blr
}

asm void fn_80514724(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80514724_00000314
    lis r5, lbl_8075B7A4@ha
    li r3, 0x1a0
    addi r5, r5, lbl_8075B7A4@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80514724_00000318
    mr r4, r31
    bl fn_80514788
    b lbl_fn_80514724_00000318
lbl_fn_80514724_00000314:
    li r3, 0x0
lbl_fn_80514724_00000318:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80514788(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_27
    mr r31, r3
    bl fn_8050F940
    lwz r0, 0x98(r31)
    li r4, 0x0
    lfs f4, lbl_80887848
    lis r5, lbl_807933C8@ha
    srwi r0, r0, 31
    lfs f6, lbl_80887840
    cntlzw r0, r0
    lfs f5, lbl_80887844
    srwi r0, r0, 5
    lfs f3, lbl_8088784C
    cntlzw r0, r0
    lfs f0, lbl_80887850
    lis r3, lbl_8075B7A4@ha
    addi r5, r5, lbl_807933C8@l
    addi r3, r3, lbl_8075B7A4@l
    srwi. r0, r0, 5
    stw r5, 0x0(r31)
    addi r30, r3, 0x1
    stw r4, 0xd4(r31)
    stw r4, 0xd8(r31)
    stw r4, 0xe0(r31)
    stw r4, 0xe8(r31)
    stw r4, 0xec(r31)
    stw r4, 0xf0(r31)
    stw r4, 0x11c(r31)
    stw r4, 0x120(r31)
    stw r4, 0x124(r31)
    stw r4, 0x128(r31)
    stw r4, 0x12c(r31)
    stw r4, 0x130(r31)
    stw r4, 0x134(r31)
    stfs f6, 0x140(r31)
    stfs f5, 0x144(r31)
    stfs f4, 0x148(r31)
    stfs f4, 0x14c(r31)
    stfs f3, 0x150(r31)
    stfs f4, 0x154(r31)
    stfs f0, 0x158(r31)
    bne lbl_fn_80514788_000003F0
    lbz r0, 0x98(r31)
    clrlwi r29, r0, 25
    b lbl_fn_80514788_000003F4
lbl_fn_80514788_000003F0:
    lwz r29, 0x9c(r31)
lbl_fn_80514788_000003F4:
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
    li r0, 0xc
    stw r0, 0x4c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80514788_000004B4
    lis r5, lbl_8075B7A4@ha
    li r3, 0x310
    addi r5, r5, lbl_8075B7A4@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801D082C@ha
    li r5, 0x0
    addi r4, r4, fn_801D082C@l
    li r6, 0x40
    li r7, 0xc
    bl fn_80695720
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    stw r3, 0x50(r31)
    beq lbl_fn_80514788_00000480
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80514788_00000480:
    lis r6, lbl_8075B6B8@ha
    lwz r5, 0x50(r31)
    lwz r4, 0x4c(r31)
    mr r3, r31
    addi r6, r6, lbl_8075B6B8@l
    li r7, 0x0
    li r8, 0x0
    bl fn_8050FB3C
    lwz r5, 0x50(r31)
    mr r3, r31
    lwz r4, 0x4c(r31)
    li r6, 0x1
    bl fn_8050FC8C
lbl_fn_80514788_000004B4:
    lis r4, lbl_8075B7A4@ha
    mr r3, r31
    addi r30, r4, lbl_8075B7A4@l
    li r5, 0x1
    addi r4, r30, 0xc
    bl fn_80201E78
    stw r3, 0x11c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x2d
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x120(r31)
    li r4, 0x1
    bl fn_800D246C
    li r27, 0x0
    li r29, 0x0
lbl_fn_80514788_000004FC:
    mr r3, r31
    add r28, r31, r29
    addi r4, r30, 0x50
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xf4(r28)
    li r4, 0x1
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0xa
    blt lbl_fn_80514788_000004FC
    lis r30, lbl_8075B7A4@ha
    mr r3, r31
    addi r30, r30, lbl_8075B7A4@l
    li r5, 0x1
    addi r4, r30, 0x75
    bl fn_80202A6C
    stw r3, 0x124(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r12, 0x5c(r31)
    addi r3, r31, 0x5c
    addi r4, r30, 0x84
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f3, lbl_80887868
    li r0, 0x0
    lfs f0, lbl_8088786C
    addi r4, r1, 0x10
    stfs f3, 0x10(r1)
    addi r11, r1, 0x80
    lfs f7, lbl_80887848
    mr r3, r31
    lfs f8, lbl_80887840
    lfs f2, lbl_80887870
    lfs f10, lbl_80887854
    lfs f9, lbl_80887858
    lfs f6, lbl_8088785C
    lfs f5, lbl_80887860
    lfs f4, lbl_80887864
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0x15c(r31)
    stfs f9, 0x160(r31)
    stfs f8, 0x164(r31)
    stfs f8, 0x168(r31)
    stfs f7, 0x16c(r31)
    stfs f7, 0x170(r31)
    stfs f7, 0x174(r31)
    stfs f8, 0x178(r31)
    stfs f6, 0x17c(r31)
    stfs f5, 0x180(r31)
    stfs f4, 0x184(r31)
    stfs f8, 0x188(r31)
    stfs f7, 0x18c(r31)
    stfs f7, 0x190(r31)
    stfs f7, 0x194(r31)
    stfs f8, 0x198(r31)
    psq_st f1, 0xa4(r31), 0, 0
    stfs f2, 0xac(r31)
    stw r0, 0x138(r31)
    stw r0, 0x13c(r31)
    stfs f10, 0x50(r1)
    stfs f9, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x40(r1)
    stfs f7, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f4, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f2, 0x18(r1)
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80514AB0(void)
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
    beq lbl_fn_80514AB0_000006C4
    addic. r4, r3, 0x12c
    beq lbl_fn_80514AB0_000006A8
    beq lbl_fn_80514AB0_000006A8
    beq lbl_fn_80514AB0_000006A8
    beq lbl_fn_80514AB0_000006A8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80514AB0_000006A8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80514AB0_000006A8:
    mr r3, r30
    li r4, 0x0
    bl fn_8050FA80
    cmpwi r31, 0x0
    ble lbl_fn_80514AB0_000006C4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80514AB0_000006C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80514B3C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80514B44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8075B6B8@ha
    lwz r8, lbl_8088783C
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8075B6B8@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x50(r3)
    lwz r7, 0x4c(r3)
    bl fn_8050FD3C
    lfs f0, lbl_80887874
    li r4, 0x0
    stfs f0, 0x58(r29)
    lwz r3, 0x11c(r29)
    bl fn_800D246C
    lwz r3, 0x120(r29)
    li r4, 0x0
    bl fn_800D246C
    mr r31, r29
    li r30, 0x0
lbl_fn_80514B44_00000744:
    lwz r3, 0xf4(r31)
    li r4, 0x0
    bl fn_800D246C
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xa
    blt lbl_fn_80514B44_00000744
    lwz r3, 0x124(r29)
    li r4, 0x0
    bl fn_800D246C
    li r0, 0x0
    stw r0, 0x80(r29)
    mr r3, r29
    li r4, 0x0
    stw r0, 0x84(r29)
    stw r0, 0x88(r29)
    stw r0, 0x8c(r29)
    stw r0, 0xe8(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80514C14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_80514C14_00000808
    lfs f1, lbl_8087E480
    lfs f2, 0x140(r31)
    lfs f0, lbl_80887878
    fsubs f1, f1, f2
    fmadds f0, f0, f1, f2
    stfs f0, 0x140(r31)
    b lbl_fn_80514C14_00000820
lbl_fn_80514C14_00000808:
    lfs f1, lbl_8087E484
    lfs f2, 0x140(r31)
    lfs f0, lbl_80887878
    fsubs f1, f1, f2
    fmadds f0, f0, f1, f2
    stfs f0, 0x140(r31)
lbl_fn_80514C14_00000820:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80514C90(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    bl _savegpr_25
    mr r30, r3
    li r31, 0x0
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_80514C90_00000888
    lwz r3, 0x48(r30)
    lwz r0, 0x11f8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80514C90_00000888
    li r31, 0x1
lbl_fn_80514C90_00000888:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lfs f8, lbl_80887848
    lis r28, lbl_8075B7A4@ha
    lfs f0, 0x148(r30)
    addi r27, r1, 0x140
    lfs f9, 0x14c(r30)
    addi r28, r28, lbl_8075B7A4@l
    fmuls f10, f0, f8
    lfs f7, 0x144(r30)
    fmuls f9, f9, f8
    lfs f11, 0x140(r30)
    lfs f0, 0x158(r30)
    fmuls f8, f7, f8
    fmuls f12, f0, f11
    lfs f7, 0x154(r30)
    lfs f0, 0x150(r30)
    li r26, 0x0
    fmuls f13, f7, f11
    stfs f12, 0x7c(r1)
    fmuls f0, f0, f11
    stfs f13, 0x78(r1)
    fadds f7, f10, f13
    li r29, 0x0
    stfs f0, 0x74(r1)
    fadds f8, f8, f0
    fadds f0, f9, f12
    stfs f7, 0x90(r1)
    frsp f31, f7
    frsp f30, f8
    stfs f8, 0x8c(r1)
    frsp f29, f0
    stfs f0, 0x94(r1)
    b lbl_fn_80514C90_00000A40
lbl_fn_80514C90_00000920:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r0, 0x50(r30)
    li r5, 0x0
    lwz r12, 0x60(r12)
    li r6, 0x7
    add r25, r0, r29
    lfs f1, lbl_80887848
    mr r4, r25
    mtctr r12
    bctrl
    lwz r3, 0x8(r25)
    cmpwi r3, 0x0
    beq lbl_fn_80514C90_0000095C
    b lbl_fn_80514C90_00000960
lbl_fn_80514C90_0000095C:
    li r3, 0x0
lbl_fn_80514C90_00000960:
    psq_l f1, 0x30(r3), 0, 0
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    lfs f0, 0x16c(r1)
    psq_st f2, 0x8(r27), 0, 0
    fadds f9, f0, f29
    lfs f8, 0x14c(r1)
    psq_st f4, 0x18(r27), 0, 0
    fadds f11, f8, f30
    lfs f7, 0x15c(r1)
    psq_st f1, 0x0(r27), 0, 0
    fadds f10, f7, f31
    psq_st f3, 0x10(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    stfs f11, 0x14c(r1)
    stfs f10, 0x15c(r1)
    stfs f9, 0x16c(r1)
    lwz r3, 0x8(r25)
    stfs f8, 0x68(r1)
    cmpwi r3, 0x0
    stfs f7, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f11, 0x80(r1)
    stfs f10, 0x84(r1)
    stfs f9, 0x88(r1)
    beq lbl_fn_80514C90_000009DC
    b lbl_fn_80514C90_000009E0
lbl_fn_80514C90_000009DC:
    li r3, 0x0
lbl_fn_80514C90_000009E0:
    addi r4, r1, 0x140
    bl fn_8009EE30
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r25
    addi r5, r28, 0x9f
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r25
    addi r5, r28, 0x9f
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r25
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    addi r26, r26, 0x1
    addi r29, r29, 0x40
lbl_fn_80514C90_00000A40:
    lwz r0, 0x4c(r30)
    cmpw r26, r0
    blt lbl_fn_80514C90_00000920
    lfs f0, lbl_80887848
    lis r29, lbl_8075B7A4@ha
    stfs f0, 0xe8(r1)
    addi r29, r29, lbl_8075B7A4@l
    lfs f30, lbl_80887880
    li r25, 0x0
    stfs f0, 0xec(r1)
    lfs f31, lbl_8088787C
    stfs f0, 0xf0(r1)
    stfs f0, 0xf4(r1)
    stfs f0, 0xf8(r1)
    lwz r3, 0xe8(r30)
    lwz r4, 0x50(r30)
    addi r0, r3, 0x5
    slwi r0, r0, 6
    add r28, r4, r0
lbl_fn_80514C90_00000A8C:
    addi r0, r25, 0x5
    lwz r26, 0x50(r30)
    slwi r27, r0, 6
    lwzx r3, r26, r27
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80514C90_00000B68
    lwz r0, 0xe8(r30)
    cmpw r0, r25
    bne lbl_fn_80514C90_00000B5C
    lwzx r3, r26, r27
    bl fn_80202118
    cmpwi r31, 0x0
    stfs f31, 0x100(r3)
    beq lbl_fn_80514C90_00000B68
    lwz r5, 0xd4(r30)
    addi r3, r1, 0x100
    addi r4, r29, 0xa9
    neg r0, r5
    or r0, r0, r5
    srwi r26, r0, 31
    crclr 6
    bl sprintf
    lwz r3, 0x0(r28)
    bl fn_80202118
    mr r27, r3
    addi r3, r1, 0x100
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0xd4
    bl fn_801F4E8C
    lfs f10, 0xd4(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xdc(r1)
    lfs f7, 0xe0(r1)
    lfs f0, 0xe4(r1)
    stfs f10, 0xe8(r1)
    stfs f9, 0xec(r1)
    stfs f8, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stfs f0, 0xf8(r1)
    lwz r3, 0x0(r28)
    bl fn_80202118
    mr r4, r3
    mr r3, r30
    mr r6, r28
    mr r8, r26
    addi r7, r1, 0xe8
    li r5, 0x0
    bl fn_805118B8
    b lbl_fn_80514C90_00000B68
lbl_fn_80514C90_00000B5C:
    lwzx r3, r26, r27
    bl fn_80202118
    stfs f30, 0x100(r3)
lbl_fn_80514C90_00000B68:
    addi r25, r25, 0x1
    cmpwi r25, 0x7
    blt lbl_fn_80514C90_00000A8C
    lwz r4, 0x50(r30)
    lis r3, lbl_8075B7A4@ha
    lfs f7, lbl_80887840
    addi r29, r3, lbl_8075B7A4@l
    lfs f0, lbl_80887848
    addi r28, r4, 0x40
    stfs f7, 0x50(r1)
    mr r3, r30
    mr r4, r28
    addi r6, r1, 0x5c
    stfs f7, 0x54(r1)
    addi r7, r1, 0x50
    addi r8, r29, 0x9f
    stfs f7, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r5, 0x11c(r30)
    bl fn_8051125C
    lfs f7, lbl_80887840
    mr r3, r30
    lfs f0, lbl_80887848
    mr r4, r28
    stfs f7, 0x38(r1)
    addi r6, r1, 0x44
    addi r7, r1, 0x38
    addi r8, r29, 0x9f
    stfs f7, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r5, 0x120(r30)
    bl fn_8051125C
    lfs f7, lbl_80887840
    mr r3, r30
    lfs f0, lbl_80887848
    mr r4, r28
    stfs f7, 0x20(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x20
    addi r8, r29, 0x9f
    stfs f7, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r5, 0x124(r30)
    bl fn_805112AC
    lwz r3, 0x11c(r30)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80514C90_00000E90
    lfs f30, lbl_80887840
    mr r31, r30
    lfs f31, lbl_80887848
    li r25, 0x0
lbl_fn_80514C90_00000C58:
    lwz r3, 0xf4(r31)
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80514C90_00000D10
    addi r3, r1, 0x100
    addi r4, r29, 0xb6
    addi r5, r25, 0x1
    crclr 6
    bl sprintf
    lwz r3, 0x11c(r30)
    bl fn_80202118
    mr r27, r3
    addi r3, r1, 0x100
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0xc0
    bl fn_801F4E8C
    lfs f10, 0xc0(r1)
    lfs f9, 0xc4(r1)
    lfs f8, 0xc8(r1)
    lfs f7, 0xcc(r1)
    lfs f0, 0xd0(r1)
    stfs f10, 0xe8(r1)
    stfs f9, 0xec(r1)
    stfs f8, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stfs f0, 0xf8(r1)
    lwz r3, 0xf4(r31)
    bl fn_80202D00
    addi r4, r29, 0xc2
    addi r5, r1, 0xe8
    bl fn_801F6E78
    stfs f30, 0x8(r1)
    mr r3, r30
    mr r4, r28
    addi r6, r1, 0x14
    stfs f30, 0xc(r1)
    addi r7, r1, 0x8
    addi r8, r29, 0x9f
    stfs f30, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    lwz r5, 0xf4(r31)
    bl fn_805112AC
lbl_fn_80514C90_00000D10:
    addi r25, r25, 0x1
    addi r31, r31, 0x4
    cmpwi r25, 0xa
    blt lbl_fn_80514C90_00000C58
    lwz r26, 0xd4(r30)
    subi r0, r26, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80514C90_00000DDC
    lwz r5, 0xf0(r30)
    lis r4, lbl_8075B7A4@ha
    lwz r0, 0xec(r30)
    addi r4, r4, lbl_8075B7A4@l
    addi r3, r1, 0x100
    subf r25, r5, r0
    addi r4, r4, 0xcd
    addi r5, r25, 0x1
    crclr 6
    bl sprintf
    lwz r3, 0x11c(r30)
    bl fn_80202118
    mr r27, r3
    addi r3, r1, 0x100
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0xac
    bl fn_801F4E8C
    lfs f10, 0xac(r1)
    slwi r0, r25, 2
    lfs f9, 0xb0(r1)
    add r3, r30, r0
    lfs f8, 0xb4(r1)
    lfs f7, 0xb8(r1)
    lfs f0, 0xbc(r1)
    stfs f10, 0xe8(r1)
    stfs f9, 0xec(r1)
    stfs f8, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stfs f0, 0xf8(r1)
    lwz r3, 0xf4(r3)
    bl fn_80202D00
    subfic r4, r26, 0x1
    subi r0, r26, 0x1
    or r0, r4, r0
    mr r6, r28
    mr r4, r3
    mr r3, r30
    addi r7, r1, 0xe8
    srwi r8, r0, 31
    li r5, 0x0
    bl fn_805119CC
lbl_fn_80514C90_00000DDC:
    lwz r3, 0x124(r30)
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80514C90_00000E90
    lis r29, lbl_8075B7A4@ha
    addi r3, r1, 0x100
    addi r29, r29, lbl_8075B7A4@l
    addi r4, r29, 0xdb
    crclr 6
    bl sprintf
    lwz r3, 0x11c(r30)
    bl fn_80202118
    mr r27, r3
    addi r3, r1, 0x100
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x98
    bl fn_801F4E8C
    lfs f10, 0x98(r1)
    lfs f9, 0x9c(r1)
    lfs f8, 0xa0(r1)
    lfs f7, 0xa4(r1)
    lfs f0, 0xa8(r1)
    stfs f10, 0xe8(r1)
    stfs f9, 0xec(r1)
    stfs f8, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stfs f0, 0xf8(r1)
    lwz r3, 0x124(r30)
    bl fn_80202D00
    addi r4, r29, 0xe8
    addi r5, r1, 0xe8
    bl fn_801F6E78
    lwz r3, 0x124(r30)
    bl fn_80202D00
    lfs f1, lbl_80887884
    addi r4, r29, 0xf0
    bl fn_801F6C80
    lwz r3, 0x124(r30)
    bl fn_80202D00
    lwz r4, 0xf0(r30)
    li r6, 0xa
    lwz r5, 0x130(r30)
    bl fn_804A4930
lbl_fn_80514C90_00000E90:
    addi r11, r1, 0x190
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    psq_l f29, 0x198(r1), 0, 0
    lfd f29, 0x190(r1)
    bl _restgpr_25
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_8051531C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x70
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    bl _savegpr_15
    lbz r0, 0x96(r3)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_8051531C_000014D4
    lwz r0, 0x4c(r3)
    li r6, 0x1
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8051531C_00000F3C
lbl_fn_8051531C_00000F0C:
    lwz r4, 0x50(r3)
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8051531C_00000F34
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_8051531C_00000F34
    li r6, 0x0
    b lbl_fn_8051531C_00000F3C
lbl_fn_8051531C_00000F34:
    addi r5, r5, 0x40
    bdnz lbl_fn_8051531C_00000F0C
lbl_fn_8051531C_00000F3C:
    lwz r4, 0x11c(r3)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_8051531C_00000F54
    li r6, 0x0
lbl_fn_8051531C_00000F54:
    lwz r3, 0x120(r3)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_8051531C_00000F6C
    li r6, 0x0
lbl_fn_8051531C_00000F6C:
    li r0, 0x2
    mr r4, r28
    li r5, 0x0
    mtctr r0
lbl_fn_8051531C_00000F7C:
    lwz r3, 0xf4(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_8051531C_00000F94
    li r6, 0x0
lbl_fn_8051531C_00000F94:
    lwz r3, 0xf8(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_8051531C_00000FAC
    li r6, 0x0
lbl_fn_8051531C_00000FAC:
    lwz r3, 0xfc(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_8051531C_00000FC4
    li r6, 0x0
lbl_fn_8051531C_00000FC4:
    lwz r3, 0x100(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_8051531C_00000FDC
    li r6, 0x0
lbl_fn_8051531C_00000FDC:
    lwz r3, 0x104(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_8051531C_00000FF4
    li r6, 0x0
lbl_fn_8051531C_00000FF4:
    addi r4, r4, 0x14
    addi r5, r5, 0x4
    bdnz lbl_fn_8051531C_00000F7C
    cmpwi r6, 0x0
    beq lbl_fn_8051531C_000014D4
    li r16, 0x0
    li r15, 0x0
    b lbl_fn_8051531C_00001038
lbl_fn_8051531C_00001014:
    lfs f1, lbl_80887848
    li r4, 0x1
    lwz r3, 0x50(r28)
    li r5, 0x0
    fmr f2, f1
    lwzx r3, r3, r15
    bl fn_805113EC
    addi r15, r15, 0x40
    addi r16, r16, 0x1
lbl_fn_8051531C_00001038:
    lwz r0, 0x4c(r28)
    cmpw r16, r0
    blt lbl_fn_8051531C_00001014
    lwz r3, 0x11c(r28)
    li r4, 0x1
    lfs f1, lbl_80887848
    li r5, 0x0
    lfs f2, lbl_80887840
    bl fn_805113EC
    lwz r3, 0x120(r28)
    li r4, 0x0
    lfs f1, lbl_80887848
    li r5, 0x0
    lfs f2, lbl_80887840
    bl fn_805113EC
    mr r15, r28
    li r16, 0x0
lbl_fn_8051531C_0000107C:
    lwz r3, 0xf4(r15)
    li r4, 0x0
    lfs f1, lbl_80887848
    li r5, 0x0
    lfs f2, lbl_80887840
    bl fn_805114D8
    addi r16, r16, 0x1
    addi r15, r15, 0x4
    cmpwi r16, 0xa
    blt lbl_fn_8051531C_0000107C
    lwz r3, 0x124(r28)
    li r4, 0x1
    lfs f1, lbl_80887848
    li r5, 0x0
    lfs f2, lbl_80887840
    bl fn_805114D8
    lis r21, lbl_8075B758@ha
    lis r16, lbl_8075B7A4@ha
    lfs f30, lbl_80887848
    addi r21, r21, lbl_8075B758@l
    lfs f31, lbl_80887880
    addi r16, r16, lbl_8075B7A4@l
    li r22, 0x0
lbl_fn_8051531C_000010D8:
    addi r0, r22, 0x5
    lwz r18, 0x50(r28)
    slwi r17, r0, 6
    lwzx r3, r18, r17
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051531C_00001158
    lwz r0, 0x4(r21)
    lwz r3, lbl_8087F1E4
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r20, 0x4(r3)
    cmpwi r20, 0x0
    beq lbl_fn_8051531C_00001114
    b lbl_fn_8051531C_00001118
lbl_fn_8051531C_00001114:
    la r20, lbl_808813D0
lbl_fn_8051531C_00001118:
    lwzx r3, r18, r17
    addi r19, r16, 0xfb
    bl fn_80202118
    mr r15, r3
    mr r3, r19
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r20
    addi r3, r15, 0x58
    bl fn_801FEE08
    lwzx r3, r18, r17
    bl fn_80202118
    stfs f30, 0x104(r3)
    lwzx r3, r18, r17
    bl fn_80202118
    stfs f31, 0x100(r3)
lbl_fn_8051531C_00001158:
    addi r22, r22, 0x1
    addi r21, r21, 0x8
    cmpwi r22, 0x7
    blt lbl_fn_8051531C_000010D8
    lwz r3, 0x120(r28)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051531C_000011B8
    li r3, 0x0
    li r4, 0x2742
    bl fn_80116FC0
    lis r4, lbl_8075B7A4@ha
    mr r17, r3
    addi r4, r4, lbl_8075B7A4@l
    lwz r3, 0x120(r28)
    addi r16, r4, 0x100
    bl fn_80202118
    mr r15, r3
    mr r3, r16
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r17
    addi r3, r15, 0x58
    bl fn_801FEE08
lbl_fn_8051531C_000011B8:
    mr r3, r28
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_8051531C_000011E0
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
lbl_fn_8051531C_000011E0:
    lwz r0, 0xe8(r28)
    lis r3, lbl_8075B758@ha
    lwz r5, 0x130(r28)
    addi r3, r3, lbl_8075B758@l
    slwi r4, r0, 3
    subf r0, r5, r5
    stw r0, 0x130(r28)
    lwzx r29, r3, r4
    bl fn_8021F094
    lis r4, __files@ha
    lis r5, lbl_8075B7A4@ha
    mr r17, r3
    addi r31, r1, 0x14
    addi r20, r5, lbl_8075B7A4@l
    addi r21, r4, __files@l
    li r30, 0x0
    lis r25, 0xcccd
    lis r19, 0x4000
    li r22, 0x0
    lis r24, 0x1555
    lis r26, 0x2aab
    lis r27, lbl_80775A88@ha
    b lbl_fn_8051531C_000014A8
lbl_fn_8051531C_0000123C:
    mr r3, r30
    bl fn_8021F0D4
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_8051531C_000014A4
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r18)
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8051531C_000014A4
    lwz r0, 0xa8(r18)
    cmpwi r0, 0x7
    bge lbl_fn_8051531C_000014A4
    cmpwi r29, 0x0
    blt lbl_fn_8051531C_00001280
    cmpw r0, r29
    bne lbl_fn_8051531C_000014A4
lbl_fn_8051531C_00001280:
    lwz r4, 0x130(r28)
    lwz r3, 0x134(r28)
    cmplw r4, r3
    bge lbl_fn_8051531C_000012AC
    addi r4, r4, 0x1
    lwz r3, 0x12c(r28)
    slwi r0, r4, 2
    stw r4, 0x130(r28)
    add r3, r3, r0
    stw r18, -0x4(r3)
    b lbl_fn_8051531C_000014A4
lbl_fn_8051531C_000012AC:
    subi r0, r19, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_8051531C_000012D0
    addi r4, r20, 0x108
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8051531C_000012D0:
    lwz r3, 0x130(r28)
    addi r4, r28, 0x134
    lwz r23, 0x134(r28)
    subi r0, r19, 0x1
    addi r3, r3, 0x1
    stw r22, 0x14(r1)
    subf r3, r23, r3
    subf r0, r23, r0
    cmplw r3, r0
    stw r22, 0x18(r1)
    stw r22, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r22, 0x24(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_8051531C_00001320
    addi r4, r20, 0x108
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8051531C_00001320:
    addi r0, r24, 0x5555
    cmplw r23, r0
    bge lbl_fn_8051531C_00001368
    addi r4, r23, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_8051531C_0000135C
    addi r3, r1, 0x10
lbl_fn_8051531C_0000135C:
    lwz r0, 0x0(r3)
    add r23, r23, r0
    b lbl_fn_8051531C_000013A4
lbl_fn_8051531C_00001368:
    subi r0, r26, 0x5556
    cmplw r23, r0
    bge lbl_fn_8051531C_000013A0
    addi r3, r23, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8051531C_00001394
    addi r3, r1, 0x10
lbl_fn_8051531C_00001394:
    lwz r0, 0x0(r3)
    add r23, r23, r0
    b lbl_fn_8051531C_000013A4
lbl_fn_8051531C_000013A0:
    subi r23, r19, 0x1
lbl_fn_8051531C_000013A4:
    subi r0, r19, 0x1
    cmplw r23, r0
    ble lbl_fn_8051531C_000013C4
    addi r4, r20, 0x108
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8051531C_000013C4:
    slwi r3, r23, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_8051531C_000013EC
    addi r3, r21, 0xa0
    addi r4, r27, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8051531C_000013EC:
    lwz r0, 0x130(r28)
    lwz r3, 0x18(r1)
    slwi r6, r0, 2
    stw r23, 0x1c(r1)
    addi r4, r3, 0x1
    slwi r5, r3, 2
    add r3, r16, r6
    stw r4, 0x18(r1)
    stwx r18, r5, r3
    lwz r3, 0x130(r28)
    lwz r23, 0x12c(r28)
    slwi r3, r3, 2
    add r3, r23, r3
    mr r4, r23
    subf r3, r23, r3
    srawi r3, r3, 2
    addze r18, r3
    subf r0, r18, r0
    stw r0, 0x24(r1)
    slwi r15, r18, 2
    slwi r0, r0, 2
    mr r5, r15
    add r3, r16, r0
    bl memcpy
    mr r3, r23
    mr r5, r15
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r31, 0x0
    lwz r3, 0x12c(r28)
    add r5, r0, r18
    mr r0, r16
    lwz r6, 0x134(r28)
    lwz r4, 0x1c(r1)
    stw r4, 0x134(r28)
    stw r6, 0x1c(r1)
    stw r0, 0x12c(r28)
    stw r3, 0x14(r1)
    stw r5, 0x130(r28)
    stw r22, 0x18(r1)
    beq lbl_fn_8051531C_000014A4
    cmpwi r3, 0x0
    beq lbl_fn_8051531C_000014A4
    stw r22, 0x18(r1)
    bl dtor_80084684
lbl_fn_8051531C_000014A4:
    addi r30, r30, 0x1
lbl_fn_8051531C_000014A8:
    cmpw r30, r17
    blt lbl_fn_8051531C_0000123C
    mr r3, r28
    bl fn_80516548
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x96(r28)
lbl_fn_8051531C_000014D4:
    addi r11, r1, 0x70
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    bl _restgpr_15
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80515958(void)
{
    nofralloc
    cntlzw r5, r4
    li r8, 0x0
    li r6, 0x0
    b lbl_fn_80515958_00001560
lbl_fn_80515958_0000150C:
    lwz r0, 0x50(r3)
    add r7, r0, r6
    lbz r0, 0x3c(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80515958_00001558
    lwz r7, 0x0(r7)
    cmpwi r7, 0x0
    beq lbl_fn_80515958_00001538
    lwz r0, 0x104(r7)
    rlwimi r0, r4, 23, 8, 8
    stw r0, 0x104(r7)
lbl_fn_80515958_00001538:
    lwz r0, 0x50(r3)
    add r7, r0, r6
    lwz r7, 0x8(r7)
    cmpwi r7, 0x0
    beq lbl_fn_80515958_00001558
    lwz r0, 0x88(r7)
    rlwimi r0, r5, 26, 0, 0
    stw r0, 0x88(r7)
lbl_fn_80515958_00001558:
    addi r6, r6, 0x40
    addi r8, r8, 0x1
lbl_fn_80515958_00001560:
    lwz r0, 0x4c(r3)
    cmpw r8, r0
    blt lbl_fn_80515958_0000150C
    blr
}

asm void fn_805159CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0xec(r3)
    stw r31, 0xf0(r3)
    stw r31, 0xe8(r3)
    bl fn_80515F2C
    lwz r3, 0x138(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805159CC_000015B4
    bl fn_800D2338
    stw r31, 0x138(r30)
lbl_fn_805159CC_000015B4:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x13c(r30)
    stw r3, 0x128(r30)
    stb r0, 0x96(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80515A3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f1, lbl_80887874
    stw r0, 0x14(r1)
    lfs f0, lbl_80887840
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x138(r3)
    stw r31, 0x80(r3)
    cmpwi r0, 0x0
    stw r31, 0xd8(r3)
    stfs f1, 0x58(r3)
    stb r31, 0x95(r3)
    stfs f0, 0x140(r3)
    beq lbl_fn_80515A3C_00001630
    mr r3, r0
    bl fn_800D2338
    stw r31, 0x138(r30)
lbl_fn_80515A3C_00001630:
    lwz r0, 0x128(r30)
    li r3, 0x0
    stw r3, 0x13c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80515A3C_0000164C
    lwz r3, lbl_8087F430
    bl fn_803766E4
lbl_fn_80515A3C_0000164C:
    li r0, 0x0
    stw r0, 0x128(r30)
    stb r0, 0x96(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80515ACC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_16
    lwz r4, 0x138(r3)
    li r16, 0x0
    lfs f0, lbl_80887840
    li r0, 0x1
    cmpwi r4, 0x0
    stw r16, 0xd8(r3)
    mr r28, r3
    stw r16, 0xe0(r3)
    stw r16, 0x80(r3)
    stw r16, 0x84(r3)
    stw r16, 0xd4(r3)
    stfs f0, 0x140(r3)
    stb r0, 0x95(r3)
    stw r16, 0xec(r3)
    stw r16, 0xf0(r3)
    stw r16, 0xe8(r3)
    beq lbl_fn_80515ACC_000016D4
    mr r3, r4
    bl fn_800D2338
    stw r16, 0x138(r28)
lbl_fn_80515ACC_000016D4:
    lwz r0, 0xe8(r28)
    lis r3, lbl_8075B758@ha
    lwz r5, 0x130(r28)
    li r17, 0x0
    slwi r4, r0, 3
    addi r3, r3, lbl_8075B758@l
    subf r0, r5, r5
    stw r17, 0x13c(r28)
    lwzx r29, r3, r4
    stw r0, 0x130(r28)
    bl fn_8021F094
    lis r4, __files@ha
    lis r5, lbl_8075B7A4@ha
    mr r18, r3
    addi r31, r1, 0x14
    addi r21, r5, lbl_8075B7A4@l
    addi r22, r4, __files@l
    li r30, 0x0
    lis r25, 0xcccd
    lis r20, 0x4000
    lis r24, 0x1555
    lis r26, 0x2aab
    lis r27, lbl_80775A88@ha
    b lbl_fn_80515ACC_000019C4
lbl_fn_80515ACC_00001734:
    mr r3, r30
    bl fn_8021F0D4
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_80515ACC_000019C0
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r19)
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80515ACC_000019C0
    lwz r0, 0xa8(r19)
    cmpwi r0, 0x7
    bge lbl_fn_80515ACC_000019C0
    cmpwi r29, 0x0
    blt lbl_fn_80515ACC_00001778
    cmpw r0, r29
    bne lbl_fn_80515ACC_000019C0
lbl_fn_80515ACC_00001778:
    lwz r4, 0x130(r28)
    lwz r3, 0x134(r28)
    cmplw r4, r3
    bge lbl_fn_80515ACC_000017A4
    addi r4, r4, 0x1
    lwz r3, 0x12c(r28)
    slwi r0, r4, 2
    stw r4, 0x130(r28)
    add r3, r3, r0
    stw r19, -0x4(r3)
    b lbl_fn_80515ACC_000019C0
lbl_fn_80515ACC_000017A4:
    subi r0, r20, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_80515ACC_000017C8
    addi r4, r21, 0x108
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80515ACC_000017C8:
    addi r3, r28, 0x134
    stw r17, 0x14(r1)
    subi r0, r20, 0x1
    stw r17, 0x18(r1)
    stw r17, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r17, 0x24(r1)
    lwz r3, 0x130(r28)
    lwz r23, 0x134(r28)
    addi r3, r3, 0x1
    subf r3, r23, r3
    subf r0, r23, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80515ACC_00001818
    addi r4, r21, 0x108
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80515ACC_00001818:
    addi r0, r24, 0x5555
    cmplw r23, r0
    bge lbl_fn_80515ACC_00001860
    addi r4, r23, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80515ACC_00001854
    addi r3, r1, 0x10
lbl_fn_80515ACC_00001854:
    lwz r0, 0x0(r3)
    add r23, r23, r0
    b lbl_fn_80515ACC_0000189C
lbl_fn_80515ACC_00001860:
    subi r0, r26, 0x5556
    cmplw r23, r0
    bge lbl_fn_80515ACC_00001898
    addi r3, r23, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80515ACC_0000188C
    addi r3, r1, 0x10
lbl_fn_80515ACC_0000188C:
    lwz r0, 0x0(r3)
    add r23, r23, r0
    b lbl_fn_80515ACC_0000189C
lbl_fn_80515ACC_00001898:
    subi r23, r20, 0x1
lbl_fn_80515ACC_0000189C:
    subi r0, r20, 0x1
    cmplw r23, r0
    ble lbl_fn_80515ACC_000018BC
    addi r4, r21, 0x108
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80515ACC_000018BC:
    slwi r3, r23, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_80515ACC_000018E4
    addi r3, r22, 0xa0
    addi r4, r27, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80515ACC_000018E4:
    lwz r0, 0x18(r1)
    stw r16, 0x14(r1)
    slwi r3, r0, 2
    stw r23, 0x1c(r1)
    lwz r0, 0x130(r28)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r16, r0
    stwx r19, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x130(r28)
    lwz r19, 0x12c(r28)
    slwi r4, r4, 2
    add r5, r19, r4
    subf r5, r19, r5
    mr r4, r19
    srawi r5, r5, 2
    addze r16, r5
    subf r0, r16, r0
    stw r0, 0x24(r1)
    slwi r23, r16, 2
    slwi r0, r0, 2
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    mr r3, r19
    mr r5, r23
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r31, 0x0
    add r0, r0, r16
    stw r0, 0x18(r1)
    stw r17, 0x130(r28)
    lwz r3, 0x134(r28)
    lwz r0, 0x1c(r1)
    stw r0, 0x134(r28)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x12c(r28)
    stw r0, 0x12c(r28)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x130(r28)
    stw r17, 0x18(r1)
    beq lbl_fn_80515ACC_000019C0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80515ACC_000019C0
    stw r17, 0x18(r1)
    bl dtor_80084684
lbl_fn_80515ACC_000019C0:
    addi r30, r30, 0x1
lbl_fn_80515ACC_000019C4:
    cmpw r30, r18
    blt lbl_fn_80515ACC_00001734
    mr r3, r28
    bl fn_80516548
    addi r11, r1, 0x70
    bl _restgpr_16
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80515E48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80887840
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0xd4(r3)
    stfs f0, 0x58(r3)
    cmpwi r4, 0x0
    stb r0, 0x95(r3)
    beq lbl_fn_80515E48_00001A30
    cmpwi r4, 0x1
    beq lbl_fn_80515E48_00001A38
    cmpwi r4, 0x2
    beq lbl_fn_80515E48_00001A40
    b lbl_fn_80515E48_00001ABC
lbl_fn_80515E48_00001A30:
    bl fn_80516008
    b lbl_fn_80515E48_00001ABC
lbl_fn_80515E48_00001A38:
    bl fn_80516410
    b lbl_fn_80515E48_00001ABC
lbl_fn_80515E48_00001A40:
    lwz r5, 0x138(r3)
    cmpwi r5, 0x0
    bne lbl_fn_80515E48_00001A68
    lwz r4, 0x13c(r3)
    subic. r0, r4, 0x1
    stw r0, 0x13c(r3)
    bgt lbl_fn_80515E48_00001ABC
    li r4, 0x1
    bl fn_80515F2C
    b lbl_fn_80515E48_00001ABC
lbl_fn_80515E48_00001A68:
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80515E48_00001A98
    lwz r0, 0x88(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80515E48_00001A98
    lwz r4, 0x48(r31)
    mr r3, r5
    addi r4, r4, 0x6c
    bl fn_805BA358
    b lbl_fn_80515E48_00001ABC
lbl_fn_80515E48_00001A98:
    lwz r0, 0x88(r5)
    cmpwi r0, 0x4
    bne lbl_fn_80515E48_00001ABC
    mr r3, r5
    bl fn_800D2338
    li r3, 0x0
    li r0, 0xf
    stw r3, 0x138(r31)
    stw r0, 0x13c(r31)
lbl_fn_80515E48_00001ABC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
