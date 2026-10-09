#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_16(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80087E9C(void);
extern void fn_80088FAC(void);
extern void fn_8008937C(void);
extern void fn_8009EE30(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_8011745C(void);
extern void fn_801D082C(void);
extern void fn_801F3FF8(void);
extern void fn_801F4728(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F7590(void);
extern void fn_801F791C(void);
extern void fn_801F7DF0(void);
extern void fn_801F837C(void);
extern void fn_801FECE0(void);
extern void fn_801FEE08(void);
extern void fn_80201E78(void);
extern void fn_80202118(void);
extern void fn_80202A6C(void);
extern void fn_80202D00(void);
extern void fn_8021F094(void);
extern void fn_8021F0D4(void);
extern void fn_80370174(void);
extern void fn_80376324(void);
extern void fn_803766E4(void);
extern void fn_804A4264(void);
extern void fn_804A436C(void);
extern void fn_804A4494(void);
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
extern void fn_805115D4(void);
extern void fn_805118B8(void);
extern void fn_805119CC(void);
extern void fn_80517B40(void);
extern void fn_8051B168(void);
extern void fn_8052DEF0(void);
extern void fn_805B9F54(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075B758[];
extern u8 lbl_8075B7A4[];
extern u8 lbl_8075BAD0[];
extern u8 lbl_8075BB80[];
extern u8 lbl_80775A88[];
extern u8 lbl_80793450[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C90F0[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F430;
extern u32 lbl_8087F580;
extern u32 lbl_80887840;
extern u32 lbl_80887848;
extern u32 lbl_80887874;
extern u32 lbl_80887888;
extern u32 lbl_8088788C;
extern u32 lbl_80887890;
extern u32 lbl_80887894;
extern u32 lbl_80887898;
extern u32 lbl_8088789C;
extern u32 lbl_808878A0;
extern u32 lbl_808878A4;
extern u32 lbl_808878A8;
extern u32 lbl_808878AC;
extern u32 lbl_808878B4;
extern u32 lbl_808878B8;
extern u32 lbl_808878BC;
extern u32 lbl_808878C0;
extern u32 lbl_808878C4;
extern u32 lbl_808878C8;
extern u32 lbl_808878CC;
extern u32 lbl_808878D0;
extern u32 lbl_808878D4;
extern u32 lbl_808878D8;

/* Function declarations */
void fn_80515F2C(void);
void fn_80516008(void);
void fn_80516410(void);
void fn_80516548(void);
void fn_80516740(void);
void fn_80516908(void);
void fn_805169FC(void);
void fn_80516A60(void);
void fn_80516CA8(void);
void fn_80516D30(void);
void fn_80516D38(void);
void fn_80516DFC(void);
void fn_80516E0C(void);
void fn_80517660(void);

asm void fn_80515F2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0xd4(r3)
    beq lbl_fn_80515F2C_00000034
    cmpwi r4, 0x1
    beq lbl_fn_80515F2C_0000003C
    cmpwi r4, 0x2
    beq lbl_fn_80515F2C_00000044
    b lbl_fn_80515F2C_000000C8
lbl_fn_80515F2C_00000034:
    bl fn_80516548
    b lbl_fn_80515F2C_000000C8
lbl_fn_80515F2C_0000003C:
    bl fn_80516548
    b lbl_fn_80515F2C_000000C8
lbl_fn_80515F2C_00000044:
    bl fn_80516548
    lwz r4, 0xec(r31)
    lwz r0, 0x130(r31)
    cmpw r4, r0
    bge lbl_fn_80515F2C_000000C8
    lwz r3, 0x12c(r31)
    slwi r0, r4, 2
    lwzx r3, r3, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80515F2C_000000B4
    li r0, 0x1
    stw r0, 0x128(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80515F2C_000000A4
    bl fn_803766E4
    lwz r0, 0xec(r31)
    lwz r4, 0x12c(r31)
    slwi r0, r0, 2
    lwz r3, lbl_8087F430
    lwzx r4, r4, r0
    lwz r4, 0x0(r4)
    bl fn_80376324
lbl_fn_80515F2C_000000A4:
    mr r3, r31
    li r4, 0x1
    bl fn_80515F2C
    b lbl_fn_80515F2C_000000C8
lbl_fn_80515F2C_000000B4:
    lwz r4, 0x0(r3)
    mr r3, r31
    li r5, 0x0
    bl fn_805B9F54
    stw r3, 0x138(r31)
lbl_fn_80515F2C_000000C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80516008(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_16
    lwz r16, 0xe8(r3)
    mr r31, r3
    li r4, 0x7
    li r5, 0x7
    li r6, 0x1
    li r7, 0x4
    addi r3, r3, 0xe8
    bl fn_804A436C
    lwz r0, 0xe8(r31)
    cmpw r16, r0
    beq lbl_fn_80516008_0000041C
    lis r3, lbl_8075B758@ha
    lwz r5, 0x130(r31)
    slwi r4, r0, 3
    li r20, 0x0
    addi r3, r3, lbl_8075B758@l
    subf r0, r5, r5
    stw r20, 0xf0(r31)
    lwzx r19, r3, r4
    stw r20, 0xec(r31)
    stw r0, 0x130(r31)
    bl fn_8021F094
    lis r4, __files@ha
    lis r5, lbl_8075B7A4@ha
    mr r21, r3
    addi r17, r1, 0x20
    addi r24, r5, lbl_8075B7A4@l
    addi r25, r4, __files@l
    li r18, 0x0
    lis r28, 0xcccd
    lis r23, 0x4000
    lis r27, 0x1555
    lis r29, 0x2aab
    lis r30, lbl_80775A88@ha
    b lbl_fn_80516008_0000040C
lbl_fn_80516008_0000017C:
    mr r3, r18
    bl fn_8021F0D4
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_80516008_00000408
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r22)
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80516008_00000408
    lwz r0, 0xa8(r22)
    cmpwi r0, 0x7
    bge lbl_fn_80516008_00000408
    cmpwi r19, 0x0
    blt lbl_fn_80516008_000001C0
    cmpw r0, r19
    bne lbl_fn_80516008_00000408
lbl_fn_80516008_000001C0:
    lwz r4, 0x130(r31)
    lwz r3, 0x134(r31)
    cmplw r4, r3
    bge lbl_fn_80516008_000001EC
    addi r4, r4, 0x1
    lwz r3, 0x12c(r31)
    slwi r0, r4, 2
    stw r4, 0x130(r31)
    add r3, r3, r0
    stw r22, -0x4(r3)
    b lbl_fn_80516008_00000408
lbl_fn_80516008_000001EC:
    subi r0, r23, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_80516008_00000210
    addi r4, r24, 0x108
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80516008_00000210:
    addi r3, r31, 0x134
    stw r20, 0x20(r1)
    subi r0, r23, 0x1
    stw r20, 0x24(r1)
    stw r20, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r20, 0x30(r1)
    lwz r3, 0x130(r31)
    lwz r26, 0x134(r31)
    addi r3, r3, 0x1
    subf r3, r26, r3
    subf r0, r26, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_80516008_00000260
    addi r4, r24, 0x108
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80516008_00000260:
    addi r0, r27, 0x5555
    cmplw r26, r0
    bge lbl_fn_80516008_000002A8
    addi r4, r26, 0x1
    subi r5, r28, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80516008_0000029C
    addi r3, r1, 0x8
lbl_fn_80516008_0000029C:
    lwz r0, 0x0(r3)
    add r16, r26, r0
    b lbl_fn_80516008_000002E4
lbl_fn_80516008_000002A8:
    subi r0, r29, 0x5556
    cmplw r26, r0
    bge lbl_fn_80516008_000002E0
    addi r3, r26, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80516008_000002D4
    addi r3, r1, 0x8
lbl_fn_80516008_000002D4:
    lwz r0, 0x0(r3)
    add r16, r26, r0
    b lbl_fn_80516008_000002E4
lbl_fn_80516008_000002E0:
    subi r16, r23, 0x1
lbl_fn_80516008_000002E4:
    subi r0, r23, 0x1
    cmplw r16, r0
    ble lbl_fn_80516008_00000304
    addi r4, r24, 0x108
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80516008_00000304:
    slwi r3, r16, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80516008_0000032C
    addi r3, r25, 0xa0
    addi r4, r30, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80516008_0000032C:
    lwz r0, 0x24(r1)
    stw r26, 0x20(r1)
    slwi r3, r0, 2
    stw r16, 0x28(r1)
    lwz r0, 0x130(r31)
    stw r0, 0x30(r1)
    slwi r0, r0, 2
    add r0, r26, r0
    stwx r22, r3, r0
    lwz r3, 0x24(r1)
    lwz r0, 0x30(r1)
    addi r3, r3, 0x1
    stw r3, 0x24(r1)
    lwz r3, 0x20(r1)
    lwz r4, 0x130(r31)
    lwz r16, 0x12c(r31)
    slwi r4, r4, 2
    add r5, r16, r4
    subf r5, r16, r5
    mr r4, r16
    srawi r5, r5, 2
    addze r22, r5
    subf r0, r22, r0
    stw r0, 0x30(r1)
    slwi r26, r22, 2
    slwi r0, r0, 2
    mr r5, r26
    add r3, r3, r0
    bl memcpy
    mr r3, r16
    mr r5, r26
    li r4, 0x0
    bl memset
    lwz r0, 0x24(r1)
    cmpwi r17, 0x0
    add r0, r0, r22
    stw r0, 0x24(r1)
    stw r20, 0x130(r31)
    lwz r3, 0x134(r31)
    lwz r0, 0x28(r1)
    stw r0, 0x134(r31)
    stw r3, 0x28(r1)
    lwz r0, 0x20(r1)
    lwz r3, 0x12c(r31)
    stw r0, 0x12c(r31)
    stw r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x130(r31)
    stw r20, 0x24(r1)
    beq lbl_fn_80516008_00000408
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80516008_00000408
    stw r20, 0x24(r1)
    bl dtor_80084684
lbl_fn_80516008_00000408:
    addi r18, r18, 0x1
lbl_fn_80516008_0000040C:
    cmpw r18, r21
    blt lbl_fn_80516008_0000017C
    mr r3, r31
    bl fn_80516548
lbl_fn_80516008_0000041C:
    lwz r16, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    mr r3, r16
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80516008_00000468
    addi r3, r1, 0x1c
    li r4, 0x8
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x48(r31)
    li r4, 0x0
    bl fn_8052DEF0
    lfs f0, lbl_80887874
    stfs f0, 0x58(r31)
    b lbl_fn_80516008_000004CC
lbl_fn_80516008_00000468:
    mr r3, r16
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80516008_000004CC
    lwz r0, 0x130(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80516008_000004A8
    addi r3, r1, 0x18
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80516008_000004CC
lbl_fn_80516008_000004A8:
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    bl fn_80515F2C
lbl_fn_80516008_000004CC:
    addi r11, r1, 0x80
    bl _restgpr_16
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80516410(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    addi r4, r3, 0xf0
    li r6, 0xa
    stw r0, 0x34(r1)
    li r7, 0x1
    li r8, 0x3
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r31, lbl_8087EF70
    lwz r30, 0xec(r3)
    lwz r5, 0x130(r3)
    addi r3, r3, 0xec
    bl fn_804A4494
    lwz r0, 0xec(r29)
    cmpw r30, r0
    beq lbl_fn_80516410_00000538
    mr r3, r29
    bl fn_80516548
lbl_fn_80516410_00000538:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80516410_00000578
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0x0
    bl fn_80515F2C
    b lbl_fn_80516410_00000600
lbl_fn_80516410_00000578:
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80516410_00000600
    lwz r3, 0xec(r29)
    lwz r0, 0x130(r29)
    cmpw r3, r0
    bge lbl_fn_80516410_00000600
    lwz r4, 0x12c(r29)
    slwi r0, r3, 2
    lwz r3, lbl_8087F430
    lwzx r4, r4, r0
    lwz r4, 0x0(r4)
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80516410_000005E8
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0x2
    bl fn_80515F2C
    b lbl_fn_80516410_00000600
lbl_fn_80516410_000005E8:
    addi r3, r1, 0x8
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80516410_00000600:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80516548(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x50
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    bl _savegpr_24
    lis r4, lbl_8075B7A4@ha
    mr r31, r3
    lfs f29, lbl_80887888
    mr r29, r31
    lfs f30, lbl_80887848
    addi r30, r4, lbl_8075B7A4@l
    lfs f31, lbl_80887840
    li r28, 0x0
lbl_fn_80516548_00000668:
    lwz r3, 0xf4(r29)
    bl fn_80202D00
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80516548_000007A4
    lwz r3, 0xf0(r31)
    li r26, 0x0
    lwz r0, 0x130(r31)
    add r25, r3, r28
    cmpw r25, r0
    bge lbl_fn_80516548_00000794
    lwz r3, 0x12c(r31)
    slwi r0, r25, 2
    lwzx r24, r3, r0
    cmpwi r24, 0x0
    beq lbl_fn_80516548_00000794
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r24)
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80516548_00000794
    mr r3, r27
    addi r4, r30, 0x11c
    addi r5, r24, 0x28
    bl fn_801F837C
    lwz r0, 0x4(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80516548_00000714
    stfs f29, 0x18(r1)
    mr r3, r27
    addi r4, r30, 0x121
    addi r5, r1, 0x18
    stfs f30, 0x1c(r1)
    stfs f31, 0x20(r1)
    stfs f31, 0x24(r1)
    bl fn_801F7590
    lfs f1, lbl_8088788C
    mr r3, r27
    lfs f2, lbl_80887890
    addi r4, r30, 0x12c
    lfs f3, lbl_80887894
    bl fn_801F7DF0
    b lbl_fn_80516548_0000074C
lbl_fn_80516548_00000714:
    stfs f30, 0x8(r1)
    mr r3, r27
    addi r4, r30, 0x121
    addi r5, r1, 0x8
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f31, 0x14(r1)
    bl fn_801F7590
    lfs f1, lbl_80887898
    mr r3, r27
    lfs f2, lbl_8088789C
    addi r4, r30, 0x12c
    lfs f3, lbl_808878A0
    bl fn_801F7DF0
lbl_fn_80516548_0000074C:
    lwz r0, 0xd4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80516548_0000077C
    lwz r0, 0xec(r31)
    cmpw r25, r0
    bne lbl_fn_80516548_0000077C
    lfs f1, lbl_80887894
    mr r3, r27
    addi r4, r30, 0x134
    li r5, 0x0
    bl fn_801F791C
    b lbl_fn_80516548_00000790
lbl_fn_80516548_0000077C:
    lfs f1, lbl_80887848
    mr r3, r27
    addi r4, r30, 0x134
    li r5, 0x0
    bl fn_801F791C
lbl_fn_80516548_00000790:
    li r26, 0x1
lbl_fn_80516548_00000794:
    lwz r3, 0xf4(r29)
    lwz r0, 0x104(r3)
    rlwimi r0, r26, 23, 8, 8
    stw r0, 0x104(r3)
lbl_fn_80516548_000007A4:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0xa
    blt lbl_fn_80516548_00000668
    lwz r0, 0x130(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80516548_000007D4
    lwz r3, 0x120(r31)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    b lbl_fn_80516548_000007E4
lbl_fn_80516548_000007D4:
    lwz r3, 0x120(r31)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
lbl_fn_80516548_000007E4:
    addi r11, r1, 0x50
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    bl _restgpr_24
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80516740(void)
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
    bne lbl_fn_80516740_00000848
    addi r4, r29, 0x99
    b lbl_fn_80516740_0000084C
lbl_fn_80516740_00000848:
    lwz r4, 0xa0(r29)
lbl_fn_80516740_0000084C:
    bl fn_8008937C
    lis r31, lbl_8075B7A4@ha
    lfs f1, lbl_808878A4
    addi r31, r31, lbl_8075B7A4@l
    lfs f2, lbl_808878A8
    lfs f3, lbl_80887840
    mr r30, r3
    addi r4, r31, 0x13c
    addi r5, r29, 0x144
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887848
    mr r3, r30
    lfs f2, lbl_80887840
    addi r4, r31, 0x147
    lfs f3, lbl_808878AC
    addi r5, r29, 0x15c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_80887848
    mr r3, r30
    lfs f2, lbl_80887840
    addi r4, r31, 0x150
    lfs f3, lbl_808878AC
    addi r5, r29, 0x16c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_80887848
    mr r3, r30
    lfs f2, lbl_80887840
    addi r4, r31, 0x15f
    lfs f3, lbl_808878AC
    addi r5, r29, 0x17c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_80887848
    mr r3, r30
    lfs f2, lbl_80887840
    addi r4, r31, 0x164
    lfs f3, lbl_808878AC
    addi r5, r29, 0x18c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_808878A4
    mr r3, r30
    lfs f2, lbl_808878A8
    addi r4, r31, 0x16f
    lfs f3, lbl_80887840
    addi r5, r29, 0x150
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808878A4
    mr r3, r30
    lfs f2, lbl_808878A8
    addi r4, r31, 0x17a
    lfs f3, lbl_80887840
    addi r5, r29, 0xa4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808878A4
    mr r3, r30
    lfs f2, lbl_808878A8
    addi r4, r31, 0x184
    lfs f3, lbl_80887840
    addi r5, r29, 0xb0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808878A4
    mr r3, r30
    lfs f2, lbl_808878A8
    addi r4, r31, 0x18e
    lfs f3, lbl_80887840
    addi r5, r29, 0xbc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808878A4
    mr r3, r30
    lfs f2, lbl_808878A8
    addi r4, r31, 0x199
    lfs f3, lbl_80887840
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

asm void fn_80516908(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lis r4, lbl_8075B7A4@ha
    lfs f31, lbl_80887848
    addi r4, r4, lbl_8075B7A4@l
    mr r27, r3
    addi r30, r4, 0x1a1
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_80516908_00000A64
lbl_fn_80516908_00000A18:
    lwz r3, 0x50(r27)
    lwzx r3, r3, r29
    cmpwi r3, 0x0
    beq lbl_fn_80516908_00000A5C
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80516908_00000A5C
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
lbl_fn_80516908_00000A5C:
    addi r29, r29, 0x40
    addi r28, r28, 0x1
lbl_fn_80516908_00000A64:
    lwz r0, 0x4c(r27)
    cmpw r28, r0
    blt lbl_fn_80516908_00000A18
    lwz r3, 0x11c(r27)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80516908_00000AB0
    lis r4, lbl_8075B7A4@ha
    lwz r3, 0x11c(r27)
    addi r4, r4, lbl_8075B7A4@l
    addi r30, r4, 0x1a1
    bl fn_80202118
    mr r31, r3
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_80516908_00000AB0:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805169FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805169FC_00000B1C
    lis r5, lbl_8075BB80@ha
    li r3, 0x138
    addi r5, r5, lbl_8075BB80@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805169FC_00000B20
    mr r4, r31
    bl fn_80516A60
    b lbl_fn_805169FC_00000B20
lbl_fn_805169FC_00000B1C:
    li r3, 0x0
lbl_fn_805169FC_00000B20:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80516A60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r31, r3
    bl fn_8050F940
    lwz r0, 0x98(r31)
    li r4, 0x0
    lfs f0, lbl_808878B8
    lis r5, lbl_80793450@ha
    lis r3, lbl_8075BB80@ha
    srwi. r0, r0, 31
    addi r5, r5, lbl_80793450@l
    stw r5, 0x0(r31)
    addi r3, r3, lbl_8075BB80@l
    stw r4, 0xd4(r31)
    addi r30, r3, 0x1
    stw r4, 0xd8(r31)
    stw r4, 0xdc(r31)
    stw r4, 0xe0(r31)
    stw r4, 0xec(r31)
    stw r4, 0x11c(r31)
    stw r4, 0x120(r31)
    stw r4, 0x124(r31)
    stfs f0, 0x128(r31)
    stfs f0, 0x12c(r31)
    stfs f0, 0x130(r31)
    bne lbl_fn_80516A60_00000BB4
    lbz r0, 0x98(r31)
    clrlwi r29, r0, 25
    b lbl_fn_80516A60_00000BB8
lbl_fn_80516A60_00000BB4:
    lwz r29, 0x9c(r31)
lbl_fn_80516A60_00000BB8:
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
    li r3, 0x0
    cmpwi r0, 0x0
    stw r3, 0xe4(r31)
    stw r3, 0xe8(r31)
    stw r0, 0x4c(r31)
    ble lbl_fn_80516A60_00000C84
    lis r5, lbl_8075BB80@ha
    li r3, 0x310
    addi r5, r5, lbl_8075BB80@l
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
    beq lbl_fn_80516A60_00000C50
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80516A60_00000C50:
    lis r6, lbl_8075BAD0@ha
    lwz r4, 0x4c(r31)
    lwz r5, 0x50(r31)
    mr r3, r31
    addi r6, r6, lbl_8075BAD0@l
    li r7, 0x0
    li r8, 0x0
    bl fn_8050FB3C
    lwz r4, 0x4c(r31)
    mr r3, r31
    lwz r5, 0x50(r31)
    li r6, 0x1
    bl fn_8050FC8C
lbl_fn_80516A60_00000C84:
    lwz r12, 0x5c(r31)
    lis r4, lbl_8075BB80@ha
    addi r30, r4, lbl_8075BB80@l
    addi r3, r31, 0x5c
    lwz r12, 0xc(r12)
    addi r4, r30, 0xc
    mtctr r12
    bctrl
    lwz r0, 0xd8(r31)
    mr r3, r31
    addi r4, r30, 0x27
    li r5, 0x1
    subf r0, r0, r0
    stw r0, 0xd8(r31)
    bl fn_80201E78
    stw r3, 0x11c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x48
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x120(r31)
    li r4, 0x1
    bl fn_800D246C
    li r27, 0x0
    li r29, 0x0
lbl_fn_80516A60_00000CF0:
    mr r3, r31
    add r28, r31, r29
    addi r4, r30, 0x6b
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xf4(r28)
    li r4, 0x1
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0xa
    blt lbl_fn_80516A60_00000CF0
    lis r30, lbl_8075BB80@ha
    mr r3, r31
    addi r30, r30, lbl_8075BB80@l
    li r5, 0x1
    addi r4, r30, 0x87
    bl fn_80202A6C
    stw r3, 0x124(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x96
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xf0(r31)
    li r4, 0x1
    bl fn_800D246C
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80516CA8(void)
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
    beq lbl_fn_80516CA8_00000DE8
    addic. r4, r3, 0xd4
    beq lbl_fn_80516CA8_00000DCC
    beq lbl_fn_80516CA8_00000DCC
    beq lbl_fn_80516CA8_00000DCC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80516CA8_00000DCC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80516CA8_00000DCC:
    mr r3, r30
    li r4, 0x0
    bl fn_8050FA80
    cmpwi r31, 0x0
    ble lbl_fn_80516CA8_00000DE8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80516CA8_00000DE8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80516D30(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80516D38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8075BAD0@ha
    lwz r8, lbl_808878B4
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8075BAD0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x50(r3)
    lwz r7, 0x4c(r3)
    bl fn_8050FD3C
    li r5, 0x0
    li r0, 0x7
    stw r5, 0x80(r29)
    li r4, 0x0
    lwz r3, 0x11c(r29)
    stw r0, 0x84(r29)
    stw r5, 0x88(r29)
    stw r0, 0x8c(r29)
    stw r5, 0xe4(r29)
    stw r5, 0xe8(r29)
    bl fn_800D246C
    lwz r3, 0x120(r29)
    li r4, 0x0
    bl fn_800D246C
    mr r31, r29
    li r30, 0x0
lbl_fn_80516D38_00000E80:
    lwz r3, 0xf4(r31)
    li r4, 0x0
    bl fn_800D246C
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xa
    blt lbl_fn_80516D38_00000E80
    lwz r3, 0x124(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xf0(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80516DFC(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctr
}

asm void fn_80516E0C(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    bl _savegpr_25
    mr r30, r3
    li r31, 0x0
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_80516E0C_00000F2C
    lwz r3, 0x48(r30)
    lwz r0, 0x11f8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80516E0C_00000F2C
    li r31, 0x1
lbl_fn_80516E0C_00000F2C:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r4, 0x48(r30)
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    lwz r0, 0x464(r4)
    cmpwi r0, 0x8
    bne lbl_fn_80516E0C_00000F64
    lis r3, lbl_807C90F0@ha
    addi r3, r3, lbl_807C90F0@l
lbl_fn_80516E0C_00000F64:
    addi r4, r1, 0xa4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lis r27, lbl_8075BB80@ha
    lfs f2, 0x8(r3)
    addi r3, r1, 0x8c
    lfs f7, 0xa8(r1)
    addi r28, r1, 0x158
    lfs f9, 0x12c(r30)
    addi r27, r27, lbl_8075BB80@l
    lfs f10, 0x130(r30)
    li r26, 0x0
    fsubs f30, f7, f9
    lfs f0, lbl_808878C0
    lfs f8, 0xa4(r1)
    fsubs f31, f2, f10
    lfs f7, 0x128(r30)
    li r29, 0x0
    fmuls f11, f30, f0
    stfs f2, 0xac(r1)
    fsubs f13, f8, f7
    fmuls f12, f31, f0
    stfs f30, 0x18(r1)
    fadds f8, f11, f9
    fmuls f9, f13, f0
    stfs f13, 0x14(r1)
    fadds f2, f12, f10
    stfs f8, 0x90(r1)
    fadds f0, f9, f7
    stfs f31, 0x1c(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x8(r1)
    stfs f11, 0xc(r1)
    stfs f12, 0x10(r1)
    stfs f2, 0x94(r1)
    psq_st f1, 0x128(r30), 0, 0
    stfs f2, 0x130(r30)
    b lbl_fn_80516E0C_00001148
lbl_fn_80516E0C_00001000:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r0, 0x50(r30)
    li r5, 0x0
    lwz r12, 0x60(r12)
    li r6, 0x7
    add r25, r0, r29
    lfs f1, lbl_808878B8
    mr r4, r25
    mtctr r12
    bctrl
    lwz r3, 0x8(r25)
    cmpwi r3, 0x0
    beq lbl_fn_80516E0C_00001040
    mr r0, r3
    b lbl_fn_80516E0C_00001044
lbl_fn_80516E0C_00001040:
    li r0, 0x0
lbl_fn_80516E0C_00001044:
    cmpwi r0, 0x0
    beq lbl_fn_80516E0C_000010F0
    cmpwi r3, 0x0
    beq lbl_fn_80516E0C_00001058
    b lbl_fn_80516E0C_0000105C
lbl_fn_80516E0C_00001058:
    li r3, 0x0
lbl_fn_80516E0C_0000105C:
    psq_l f1, 0x30(r3), 0, 0
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    lfs f9, 0x184(r1)
    psq_st f4, 0x18(r28), 0, 0
    lfs f11, 0x164(r1)
    lfs f10, 0x174(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    lfs f8, 0x130(r30)
    lfs f7, 0x12c(r30)
    lfs f0, 0x128(r30)
    fadds f8, f9, f8
    fadds f7, f10, f7
    stfs f11, 0x80(r1)
    fadds f0, f11, f0
    stfs f7, 0x174(r1)
    stfs f0, 0x164(r1)
    stfs f8, 0x184(r1)
    lwz r3, 0x8(r25)
    stfs f10, 0x84(r1)
    cmpwi r3, 0x0
    stfs f9, 0x88(r1)
    stfs f0, 0x98(r1)
    stfs f7, 0x9c(r1)
    stfs f8, 0xa0(r1)
    beq lbl_fn_80516E0C_000010E4
    b lbl_fn_80516E0C_000010E8
lbl_fn_80516E0C_000010E4:
    li r3, 0x0
lbl_fn_80516E0C_000010E8:
    addi r4, r1, 0x158
    bl fn_8009EE30
lbl_fn_80516E0C_000010F0:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r25
    addi r5, r27, 0xb2
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r25
    addi r5, r27, 0xb2
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
lbl_fn_80516E0C_00001148:
    lwz r0, 0x4c(r30)
    cmpw r26, r0
    blt lbl_fn_80516E0C_00001000
    lfs f0, lbl_808878B8
    lis r29, lbl_8075BB80@ha
    stfs f0, 0x100(r1)
    addi r29, r29, lbl_8075BB80@l
    lfs f30, lbl_808878C8
    li r26, 0x0
    stfs f0, 0x104(r1)
    lfs f31, lbl_808878C4
    stfs f0, 0x108(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0x110(r1)
    lwz r3, 0xe0(r30)
    lwz r4, 0x50(r30)
    addi r0, r3, 0x5
    slwi r0, r0, 6
    add r25, r4, r0
lbl_fn_80516E0C_00001194:
    addi r0, r26, 0x5
    lwz r27, 0x50(r30)
    slwi r28, r0, 6
    lwzx r3, r27, r28
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80516E0C_00001270
    lwz r0, 0xe0(r30)
    cmpw r0, r26
    bne lbl_fn_80516E0C_00001264
    lwzx r3, r27, r28
    bl fn_80202118
    cmpwi r31, 0x0
    stfs f31, 0x100(r3)
    beq lbl_fn_80516E0C_00001270
    lwz r5, 0x7c(r30)
    addi r3, r1, 0x118
    addi r4, r29, 0xbc
    neg r0, r5
    or r0, r0, r5
    srwi r28, r0, 31
    crclr 6
    bl sprintf
    lwz r3, 0x0(r25)
    bl fn_80202118
    mr r27, r3
    addi r3, r1, 0x118
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0xec
    bl fn_801F4E8C
    lfs f10, 0xec(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xf4(r1)
    lfs f7, 0xf8(r1)
    lfs f0, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f9, 0x104(r1)
    stfs f8, 0x108(r1)
    stfs f7, 0x10c(r1)
    stfs f0, 0x110(r1)
    lwz r3, 0x0(r25)
    bl fn_80202118
    mr r4, r3
    mr r3, r30
    mr r6, r25
    mr r8, r28
    addi r7, r1, 0x100
    li r5, 0x0
    bl fn_805118B8
    b lbl_fn_80516E0C_00001270
lbl_fn_80516E0C_00001264:
    lwzx r3, r27, r28
    bl fn_80202118
    stfs f30, 0x100(r3)
lbl_fn_80516E0C_00001270:
    addi r26, r26, 0x1
    cmpwi r26, 0x7
    blt lbl_fn_80516E0C_00001194
    lfs f7, lbl_808878BC
    lis r3, lbl_8075BB80@ha
    lfs f0, lbl_808878B8
    addi r29, r3, lbl_8075BB80@l
    stfs f7, 0x68(r1)
    mr r3, r30
    addi r6, r1, 0x74
    addi r7, r1, 0x68
    stfs f7, 0x6c(r1)
    addi r8, r29, 0xb2
    stfs f7, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    lwz r4, 0x50(r30)
    lwz r5, 0x11c(r30)
    addi r4, r4, 0x40
    bl fn_8051125C
    lfs f7, lbl_808878BC
    mr r3, r30
    lfs f0, lbl_808878B8
    addi r6, r1, 0x5c
    stfs f7, 0x50(r1)
    addi r7, r1, 0x50
    addi r8, r29, 0xb2
    stfs f7, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r4, 0x50(r30)
    lwz r5, 0x120(r30)
    addi r4, r4, 0x40
    bl fn_8051125C
    lfs f7, lbl_808878BC
    mr r3, r30
    lfs f0, lbl_808878B8
    addi r6, r1, 0x44
    stfs f7, 0x38(r1)
    addi r7, r1, 0x38
    addi r8, r29, 0xb2
    stfs f7, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r4, 0x50(r30)
    lwz r5, 0x124(r30)
    addi r4, r4, 0x40
    bl fn_805112AC
    lwz r3, 0x11c(r30)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80516E0C_00001594
    lfs f30, lbl_808878BC
    mr r28, r30
    lfs f31, lbl_808878B8
    li r25, 0x0
lbl_fn_80516E0C_00001364:
    lwz r3, 0xf4(r28)
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80516E0C_00001420
    addi r3, r1, 0x118
    addi r4, r29, 0xc9
    addi r5, r25, 0x1
    crclr 6
    bl sprintf
    lwz r3, 0x11c(r30)
    bl fn_80202118
    mr r27, r3
    addi r3, r1, 0x118
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0xd8
    bl fn_801F4E8C
    lfs f10, 0xd8(r1)
    lfs f9, 0xdc(r1)
    lfs f8, 0xe0(r1)
    lfs f7, 0xe4(r1)
    lfs f0, 0xe8(r1)
    stfs f10, 0x100(r1)
    stfs f9, 0x104(r1)
    stfs f8, 0x108(r1)
    stfs f7, 0x10c(r1)
    stfs f0, 0x110(r1)
    lwz r3, 0xf4(r28)
    bl fn_80202D00
    addi r4, r29, 0xd5
    addi r5, r1, 0x100
    bl fn_801F6E78
    stfs f30, 0x20(r1)
    mr r3, r30
    addi r6, r1, 0x2c
    addi r7, r1, 0x20
    stfs f30, 0x24(r1)
    addi r8, r29, 0xb2
    stfs f30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    lwz r4, 0x50(r30)
    lwz r5, 0xf4(r28)
    addi r4, r4, 0x40
    bl fn_805112AC
lbl_fn_80516E0C_00001420:
    addi r25, r25, 0x1
    addi r28, r28, 0x4
    cmpwi r25, 0xa
    blt lbl_fn_80516E0C_00001364
    lwz r0, 0x7c(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80516E0C_000014E0
    lwz r5, 0xe8(r30)
    lis r4, lbl_8075BB80@ha
    lwz r0, 0xe4(r30)
    addi r4, r4, lbl_8075BB80@l
    addi r3, r1, 0x118
    subf r25, r5, r0
    addi r4, r4, 0xe0
    addi r5, r25, 0x1
    crclr 6
    bl sprintf
    lwz r3, 0x11c(r30)
    bl fn_80202118
    mr r27, r3
    addi r3, r1, 0x118
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0xc4
    bl fn_801F4E8C
    lfs f10, 0xc4(r1)
    slwi r0, r25, 2
    lfs f9, 0xc8(r1)
    add r3, r30, r0
    lfs f8, 0xcc(r1)
    lfs f7, 0xd0(r1)
    lfs f0, 0xd4(r1)
    stfs f10, 0x100(r1)
    stfs f9, 0x104(r1)
    stfs f8, 0x108(r1)
    stfs f7, 0x10c(r1)
    stfs f0, 0x110(r1)
    lwz r3, 0xf4(r3)
    bl fn_80202D00
    lwz r5, 0x50(r30)
    mr r4, r3
    mr r3, r30
    addi r7, r1, 0x100
    addi r6, r5, 0x40
    li r5, 0x0
    li r8, 0x0
    bl fn_805119CC
lbl_fn_80516E0C_000014E0:
    lwz r3, 0x124(r30)
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_80516E0C_00001594
    lis r29, lbl_8075BB80@ha
    addi r3, r1, 0x118
    addi r29, r29, lbl_8075BB80@l
    addi r4, r29, 0xee
    crclr 6
    bl sprintf
    lwz r3, 0x11c(r30)
    bl fn_80202118
    mr r27, r3
    addi r3, r1, 0x118
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0xb0
    bl fn_801F4E8C
    lfs f10, 0xb0(r1)
    lfs f9, 0xb4(r1)
    lfs f8, 0xb8(r1)
    lfs f7, 0xbc(r1)
    lfs f0, 0xc0(r1)
    stfs f10, 0x100(r1)
    stfs f9, 0x104(r1)
    stfs f8, 0x108(r1)
    stfs f7, 0x10c(r1)
    stfs f0, 0x110(r1)
    lwz r3, 0x124(r30)
    bl fn_80202D00
    addi r4, r29, 0xfb
    addi r5, r1, 0x100
    bl fn_801F6E78
    lwz r3, 0x124(r30)
    bl fn_80202D00
    lfs f1, lbl_808878CC
    addi r4, r29, 0x103
    bl fn_801F6C80
    lwz r3, 0x124(r30)
    bl fn_80202D00
    lwz r4, 0xe8(r30)
    li r6, 0xa
    lwz r5, 0xd8(r30)
    bl fn_804A4930
lbl_fn_80516E0C_00001594:
    lwz r3, 0xf0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80516E0C_0000170C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r0, 0x7c(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80516E0C_0000170C
    lwz r3, lbl_8087F580
    bl fn_804A4264
    lfs f0, lbl_808878D0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80516E0C_0000170C
    lwz r3, 0xf0(r30)
    lis r29, lbl_8075BB80@ha
    addi r29, r29, lbl_8075BB80@l
    lfs f8, lbl_808878D4
    lwz r0, 0x38(r3)
    addi r4, r29, 0xfb
    lfs f7, lbl_808878D8
    addi r5, r1, 0x100
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lfs f0, lbl_808878BC
    stfs f8, 0x100(r1)
    stfs f7, 0x104(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0x108(r1)
    lwz r3, 0xf0(r30)
    bl fn_801F4728
    li r3, 0x0
    li r4, 0x196
    bl fn_80116FC0
    lwz r4, 0xf0(r30)
    mr r27, r3
    addi r3, r29, 0x10e
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r27
    bl fn_801FEE08
    li r3, 0x0
    li r4, 0x197
    bl fn_80116FC0
    lwz r4, 0xf0(r30)
    mr r27, r3
    addi r3, r29, 0x11b
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r27
    bl fn_801FEE08
    lwz r0, 0xec(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80516E0C_000016C4
    lwz r4, 0xf0(r30)
    addi r3, r29, 0x127
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808878BC
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    lwz r4, 0xf0(r30)
    addi r3, r29, 0x12e
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808878B8
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    b lbl_fn_80516E0C_0000170C
lbl_fn_80516E0C_000016C4:
    cmpwi r0, 0x1
    bne lbl_fn_80516E0C_0000170C
    lwz r4, 0xf0(r30)
    addi r3, r29, 0x127
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808878B8
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    lwz r4, 0xf0(r30)
    addi r3, r29, 0x12e
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808878BC
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
lbl_fn_80516E0C_0000170C:
    addi r11, r1, 0x1b0
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    bl _restgpr_25
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_80517660(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_24
    lbz r0, 0x96(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80517660_00001A4C
    lwz r0, 0x4c(r3)
    li r6, 0x1
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80517660_000017B0
lbl_fn_80517660_00001780:
    lwz r4, 0x50(r3)
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_80517660_000017A8
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80517660_000017A8
    li r6, 0x0
    b lbl_fn_80517660_000017B0
lbl_fn_80517660_000017A8:
    addi r5, r5, 0x40
    bdnz lbl_fn_80517660_00001780
lbl_fn_80517660_000017B0:
    lwz r4, 0x11c(r3)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80517660_000017C8
    li r6, 0x0
lbl_fn_80517660_000017C8:
    lwz r3, 0x120(r3)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80517660_000017E0
    li r6, 0x0
lbl_fn_80517660_000017E0:
    li r0, 0x2
    mr r4, r31
    li r5, 0x0
    mtctr r0
lbl_fn_80517660_000017F0:
    lwz r3, 0xf4(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80517660_00001808
    li r6, 0x0
lbl_fn_80517660_00001808:
    lwz r3, 0xf8(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80517660_00001820
    li r6, 0x0
lbl_fn_80517660_00001820:
    lwz r3, 0xfc(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80517660_00001838
    li r6, 0x0
lbl_fn_80517660_00001838:
    lwz r3, 0x100(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80517660_00001850
    li r6, 0x0
lbl_fn_80517660_00001850:
    lwz r3, 0x104(r4)
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80517660_00001868
    li r6, 0x0
lbl_fn_80517660_00001868:
    addi r4, r4, 0x14
    addi r5, r5, 0x4
    bdnz lbl_fn_80517660_000017F0
    cmpwi r6, 0x0
    beq lbl_fn_80517660_00001A4C
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_80517660_000018AC
lbl_fn_80517660_00001888:
    lwz r3, 0x50(r31)
    li r4, 0x1
    lfs f1, lbl_808878B8
    li r5, 0x0
    lwzx r3, r3, r25
    lfs f2, lbl_808878BC
    bl fn_805113EC
    addi r25, r25, 0x40
    addi r26, r26, 0x1
lbl_fn_80517660_000018AC:
    lwz r0, 0x4c(r31)
    cmpw r26, r0
    blt lbl_fn_80517660_00001888
    lwz r3, 0x11c(r31)
    li r4, 0x1
    lfs f1, lbl_808878B8
    li r5, 0x0
    lfs f2, lbl_808878BC
    bl fn_805113EC
    lwz r3, 0x120(r31)
    li r4, 0x0
    lfs f1, lbl_808878B8
    li r5, 0x0
    lfs f2, lbl_808878BC
    bl fn_805113EC
    mr r25, r31
    li r26, 0x0
lbl_fn_80517660_000018F0:
    lwz r3, 0xf4(r25)
    li r4, 0x0
    lfs f1, lbl_808878B8
    li r5, 0x0
    lfs f2, lbl_808878BC
    bl fn_805114D8
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0xa
    blt lbl_fn_80517660_000018F0
    lwz r3, 0x124(r31)
    li r4, 0x1
    lfs f1, lbl_808878B8
    li r5, 0x0
    lfs f2, lbl_808878BC
    bl fn_805114D8
    lwz r3, 0xf0(r31)
    li r4, 0x1
    lfs f1, lbl_808878B8
    li r5, 0x0
    lfs f2, lbl_808878BC
    bl fn_805115D4
    lis r29, lbl_8075BB80@ha
    lfs f30, lbl_808878B8
    lfs f31, lbl_808878C8
    addi r29, r29, lbl_8075BB80@l
    li r24, 0x0
lbl_fn_80517660_0000195C:
    addi r0, r24, 0x5
    lwz r27, 0x50(r31)
    slwi r28, r0, 6
    lwzx r3, r27, r28
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80517660_000019C4
    mr r3, r24
    bl fn_8011745C
    mr r25, r3
    lwzx r3, r27, r28
    addi r26, r29, 0x136
    bl fn_80202118
    mr r30, r3
    mr r3, r26
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r25
    addi r3, r30, 0x58
    bl fn_801FEE08
    lwzx r3, r27, r28
    bl fn_80202118
    stfs f30, 0x104(r3)
    lwzx r3, r27, r28
    bl fn_80202118
    stfs f31, 0x100(r3)
lbl_fn_80517660_000019C4:
    addi r24, r24, 0x1
    cmpwi r24, 0x7
    blt lbl_fn_80517660_0000195C
    lwz r3, 0x120(r31)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80517660_00001A20
    li r3, 0x0
    li r4, 0x2741
    bl fn_80116FC0
    lis r4, lbl_8075BB80@ha
    mr r26, r3
    addi r4, r4, lbl_8075BB80@l
    lwz r3, 0x120(r31)
    addi r25, r4, 0x13b
    bl fn_80202118
    mr r30, r3
    mr r3, r25
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r26
    addi r3, r30, 0x58
    bl fn_801FEE08
lbl_fn_80517660_00001A20:
    mr r3, r31
    bl fn_80517B40
    mr r3, r31
    bl fn_8051B168
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x96(r31)
lbl_fn_80517660_00001A4C:
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
