#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801F3FF8(void);
extern void fn_801F4E8C(void);
extern void fn_801F64D0(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F7590(void);
extern void fn_801F7DF0(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801FECE0(void);
extern void fn_801FEE08(void);
extern void fn_80211480(void);
extern void fn_804439FC(void);
extern void fn_8044441C(void);
extern void fn_804444E8(void);
extern void fn_80444BE8(void);
extern void fn_80444C50(void);
extern void fn_8044D500(void);
extern void fn_8044D560(void);
extern void fn_8044D678(void);
extern void fn_8044D6AC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804A39EC(void);
extern void fn_804A3A68(void);
extern void fn_804A3C24(void);
extern void fn_804A55FC(void);
extern void fn_804A5824(void);
extern void fn_8057F284(void);
extern void fn_8057F7AC(void);
extern void fn_8057F884(void);
extern void fn_8057F8FC(void);
extern void fn_8057FB24(void);
extern void fn_8057FF3C(void);
extern void fn_80580100(void);
extern void fn_80580268(void);
extern void fn_80580584(void);
extern void fn_80580694(void);
extern void fn_80580D84(void);
extern void fn_80580DB4(void);
extern void fn_80580DE4(void);
extern void fn_80581820(void);
extern void fn_80581FDC(void);
extern void fn_80584754(void);
extern void fn_805847F0(void);
extern void fn_8058480C(void);
extern void fn_80584D7C(void);
extern void fn_80584DDC(void);
extern void fn_80584F48(void);
extern void fn_805895B8(void);
extern void fn_805897D8(void);
extern void fn_8058995C(void);
extern void fn_80589AF8(void);
extern void fn_80589DE4(void);
extern void fn_8058A0F4(void);
extern void fn_8058A3B0(void);
extern void memmove(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80796970[];
extern u8 lbl_80761914[];
extern u8 lbl_80761AB0[];
extern u8 lbl_80796994[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F9D8;
extern u32 lbl_808813D0;
extern u32 lbl_80888110;
extern u32 lbl_80888114;
extern u32 lbl_8088811C;
extern u32 lbl_80888120;
extern u32 lbl_80888124;
extern u32 lbl_80888128;
extern u32 lbl_80888130;
extern u32 lbl_80888134;

/* Function declarations */
void fn_80587B74(void);
void fn_80587C5C(void);
void fn_80587D14(void);
void fn_80587E40(void);
void fn_80588008(void);
void fn_805880F4(void);
void fn_805883DC(void);
void fn_80588680(void);
void fn_80588688(void);
void fn_80588714(void);
void fn_80588868(void);
void fn_80588908(void);
void fn_80588B1C(void);
void fn_80588BE4(void);
void fn_80588E28(void);
void fn_8058910C(void);
void fn_80589274(void);
void fn_805892D0(void);
void fn_80589450(void);

asm void fn_80587B74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x1
    addis r5, r3, 0x2
    stw r0, 0x14(r1)
    li r6, 0x1
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xe4(r3)
    stw r6, 0x5b40(r5)
    stw r0, 0xe8(r3)
    stw r4, 0xe4(r3)
    beq lbl_fn_80587B74_0000004C
    cmpwi r4, 0x4
    beq lbl_fn_80587B74_0000005C
    cmpwi r4, 0x7
    beq lbl_fn_80587B74_0000007C
    b lbl_fn_80587B74_000000D0
lbl_fn_80587B74_0000004C:
    li r0, 0x0
    stw r0, 0x5b40(r5)
    bl fn_8057FB24
    b lbl_fn_80587B74_000000D0
lbl_fn_80587B74_0000005C:
    lwz r4, 0x5bb0(r5)
    li r3, 0x2
    li r0, 0x0
    stw r4, 0x5b04(r5)
    stw r3, 0x5b08(r5)
    stw r0, 0x5b0c(r5)
    stw r3, 0x5b10(r5)
    b lbl_fn_80587B74_000000D0
lbl_fn_80587B74_0000007C:
    addi r3, r3, 0x58
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x58
    bl fn_80470580
    lwz r12, 0x0(r30)
    mr r4, r3
    mr r3, r30
    mr r5, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addis r6, r30, 0x2
    li r0, 0xa
    lwz r5, 0x5bb4(r6)
    lwz r4, 0x5bb8(r6)
    lwz r3, 0x5bc0(r6)
    stw r5, 0x5b04(r6)
    stw r4, 0x5b0c(r6)
    stw r3, 0x5b08(r6)
    stw r0, 0x5b10(r6)
lbl_fn_80587B74_000000D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80587C5C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x5
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bne lbl_fn_80587C5C_0000015C
    lwz r0, 0xdc(r3)
    addis r4, r3, 0x2
    lwz r5, 0x5b24(r4)
    mulli r0, r0, 0x5c
    add r4, r3, r0
    addi r4, r4, 0x3300
    bl fn_80584D7C
    mr r3, r31
    bl fn_80581FDC
    addi r3, r1, 0xc
    li r4, 0x19
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80587C5C_0000018C
lbl_fn_80587C5C_0000015C:
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80587C5C_0000018C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80587D14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_805847F0
    addis r3, r30, 0x2
    li r4, 0x0
    lwz r0, 0x5b04(r3)
    li r5, 0x4
    stw r0, 0x5bb0(r3)
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80587D14_0000026C
    addis r3, r30, 0x2
    lwz r0, 0x5bb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80587D14_00000204
    cmpwi r0, 0x1
    beq lbl_fn_80587D14_00000238
    b lbl_fn_80587D14_000002B4
lbl_fn_80587D14_00000204:
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80587D14_000002B4
lbl_fn_80587D14_00000238:
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80587D14_000002B4
lbl_fn_80587D14_0000026C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80587D14_000002B4
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80587D14_000002B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80587E40(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    mr r29, r3
    bl fn_8058480C
    addis r6, r29, 0x2
    li r4, 0x0
    lwz r3, 0x5b04(r6)
    li r5, 0x4
    lwz r0, 0x5b0c(r6)
    stw r3, 0x5bb4(r6)
    stw r0, 0x5bb8(r6)
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80587E40_00000430
    addis r4, r29, 0x2
    mr r3, r29
    lwz r0, 0x5bb4(r4)
    lwz r4, 0x5bbc(r4)
    mulli r0, r0, 0x24
    add r31, r4, r0
    mr r4, r31
    bl fn_80588008
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80587E40_000003E8
    lwz r3, 0x0(r31)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_80587E40_000003B4
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x18
    lwz r4, 0xd4c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80587E40_00000378
    b lbl_fn_80587E40_0000037C
lbl_fn_80587E40_00000378:
    la r4, lbl_808813D0
lbl_fn_80587E40_0000037C:
    lwz r5, 0x8(r5)
    crclr 6
    bl fn_800DD3FC
    addis r3, r29, 0x2
    lis r5, lbl_80761914@ha
    lwz r4, 0x5b68(r3)
    addi r5, r5, lbl_80761914@l
    addi r3, r5, 0x103
    addi r31, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    addi r5, r1, 0x18
    bl fn_801FEE08
lbl_fn_80587E40_000003B4:
    addi r3, r1, 0x10
    li r4, 0x19
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x8
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80587E40_00000478
lbl_fn_80587E40_000003E8:
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    mr r5, r30
    li r4, 0x1
    li r6, 0x0
    bl fn_80581820
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80587E40_00000478
lbl_fn_80587E40_00000430:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80587E40_00000478
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80587E40_00000478:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80588008(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80588008_000004C4
    li r3, 0x2
    b lbl_fn_80588008_00000564
lbl_fn_80588008_000004C4:
    mr r31, r29
    li r30, 0x0
lbl_fn_80588008_000004CC:
    lwz r3, 0x4(r31)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80588008_00000500
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r4)
    bl fn_804444E8
    lwz r0, 0x10(r31)
    cmpw r0, r3
    ble lbl_fn_80588008_00000500
    li r3, 0xe
    b lbl_fn_80588008_00000564
lbl_fn_80588008_00000500:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_80588008_000004CC
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    lwz r4, 0x0(r29)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    li r30, 0x0
lbl_fn_80588008_00000538:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80588008_00000550
    lwz r3, lbl_8087F4F0
    lwz r5, 0x10(r29)
    bl fn_8044441C
lbl_fn_80588008_00000550:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_80588008_00000538
    li r3, 0x0
lbl_fn_80588008_00000564:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805880F4(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_22
    addis r5, r3, 0x2
    lis r4, lbl_80761914@ha
    lwz r6, 0x5b74(r5)
    addi r26, r4, lbl_80761914@l
    mr r29, r3
    lwz r31, lbl_8087F4F0
    lwz r0, 0x38(r6)
    addi r3, r26, 0x10f
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    lwz r4, 0x5b74(r5)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888114
    mr r4, r3
    mr r3, r24
    bl fn_801FECE0
    addis r5, r29, 0x2
    mr r3, r29
    lwz r6, 0x5bc0(r5)
    li r7, 0xa
    lwz r4, 0x5b74(r5)
    lwz r5, 0x5b0c(r5)
    bl fn_80584754
    lfs f0, lbl_80888110
    addis r27, r29, 0x2
    stfs f0, 0x3c(r1)
    addi r24, r1, 0x18
    li r30, 0x0
    li r28, 0x0
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r3, 0x5b70(r27)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_805880F4_0000062C:
    addi r3, r1, 0x50
    addi r4, r26, 0x115
    addi r5, r30, 0x1
    crclr 6
    bl sprintf
    lwz r25, 0x5b74(r27)
    addi r3, r1, 0x50
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r25
    addi r3, r1, 0x28
    bl fn_801F4E8C
    lfs f6, 0x28(r1)
    add r3, r29, r28
    lfs f5, 0x2c(r1)
    addis r25, r3, 0x2
    lfs f4, 0x30(r1)
    addi r4, r26, 0x122
    lfs f3, 0x34(r1)
    addi r5, r1, 0x3c
    lfs f0, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r3, 0x5b78(r25)
    bl fn_801F6E78
    lwz r3, 0x5b0c(r27)
    lwz r0, 0x5bc0(r27)
    add r3, r30, r3
    cmpw r3, r0
    bge lbl_fn_805880F4_00000840
    mulli r0, r3, 0x24
    lwz r3, 0x5bbc(r27)
    lwzx r3, r3, r0
    bl fn_80211480
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_805880F4_00000840
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x12a
    lwz r5, 0x8(r23)
    bl fn_801F837C
    lwz r4, 0x4(r23)
    mr r3, r31
    bl fn_804444E8
    mr r22, r3
    lwz r3, 0x5b78(r25)
    lfs f1, lbl_80888110
    addi r4, r26, 0x133
    bl fn_801F6C80
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x13d
    lfs f1, lbl_80888110
    bl fn_801F6C80
    lwz r3, 0x5b78(r25)
    mr r5, r22
    addi r4, r26, 0x146
    li r6, 0x0
    bl fn_801F8598
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x14e
    lfs f1, lbl_80888110
    bl fn_801F6C80
    lwz r3, lbl_8087F4F0
    mr r4, r23
    bl fn_80444BE8
    lwz r4, lbl_8087F4F0
    mr r5, r3
    addi r3, r1, 0x18
    bl fn_80444C50
    addi r5, r1, 0x8
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    add r3, r29, r28
    psq_st f1, 0x0(r5), 0, 0
    addis r25, r3, 0x2
    addi r4, r26, 0x155
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x5b78(r25)
    bl fn_801F7590
    cmpwi r22, 0x0
    bne lbl_fn_805880F4_000007D8
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x15c
    lfs f1, lbl_80888110
    bl fn_801F6C80
    lfs f1, lbl_8088811C
    addi r4, r26, 0x164
    lwz r3, 0x5b78(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x16c
    lfs f1, lbl_80888120
    bl fn_801F6C80
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x16c
    lfs f1, lbl_80888120
    bl fn_801F6C80
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x16c
    lfs f1, lbl_80888120
    bl fn_801F6C80
    b lbl_fn_805880F4_00000830
lbl_fn_805880F4_000007D8:
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x15c
    lfs f1, lbl_80888110
    bl fn_801F6C80
    lfs f1, lbl_80888124
    addi r4, r26, 0x164
    lwz r3, 0x5b78(r25)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x16c
    lfs f1, lbl_80888128
    bl fn_801F6C80
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x16c
    lfs f1, lbl_80888128
    bl fn_801F6C80
    lwz r3, 0x5b78(r25)
    addi r4, r26, 0x16c
    lfs f1, lbl_80888128
    bl fn_801F6C80
lbl_fn_805880F4_00000830:
    lwz r3, 0x5b78(r25)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_805880F4_00000840:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmpwi r30, 0xa
    blt lbl_fn_805880F4_0000062C
    addi r11, r1, 0xc0
    bl _restgpr_22
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805883DC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_25
    mr r26, r3
    lwz r29, lbl_8087F4F0
    lwz r3, 0x0(r4)
    mr r27, r4
    bl fn_80211480
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_805883DC_000008AC
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0xc(r4)
    bl fn_804A3C24
lbl_fn_805883DC_000008AC:
    lfs f0, lbl_80888110
    lis r30, lbl_80761914@ha
    stfs f0, 0x1c(r1)
    addi r30, r30, lbl_80761914@l
    addis r31, r26, 0x2
    li r28, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
lbl_fn_805883DC_000008D4:
    addi r3, r1, 0x30
    addi r4, r30, 0x176
    addi r5, r28, 0x1
    crclr 6
    bl sprintf
    lwz r25, 0x5b70(r31)
    addi r3, r1, 0x30
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r25
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addis r3, r26, 0x2
    lfs f3, 0xc(r1)
    addi r4, r30, 0x122
    lfs f2, 0x10(r1)
    addi r5, r1, 0x1c
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    lwz r3, 0x5ba0(r3)
    bl fn_801F6E78
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_805883DC_00000AE0
    addis r3, r26, 0x2
    lwz r3, 0x5ba0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4(r27)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_805883DC_00000AE0
    addis r3, r26, 0x2
    lfs f1, lbl_80888114
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x13d
    bl fn_801F6C80
    addis r3, r26, 0x2
    lwz r5, 0x10(r27)
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x146
    li r6, 0x0
    bl fn_801F8598
    lwz r4, 0x4(r25)
    mr r3, r29
    bl fn_804444E8
    addis r4, r26, 0x2
    mr r5, r3
    lwz r3, 0x5ba0(r4)
    addi r4, r30, 0x181
    li r6, 0x0
    bl fn_801F8598
    addis r3, r26, 0x2
    lfs f1, lbl_80888110
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x14e
    bl fn_801F6C80
    addis r3, r26, 0x2
    lwz r5, 0x8(r25)
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x12a
    bl fn_801F837C
    lwz r4, 0x4(r25)
    mr r3, r29
    bl fn_804444E8
    lwz r0, 0x10(r27)
    cmpw r0, r3
    bgt lbl_fn_805883DC_00000A74
    addis r3, r26, 0x2
    lfs f1, lbl_80888110
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x15c
    bl fn_801F6C80
    lfs f1, lbl_8088811C
    addis r3, r26, 0x2
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x164
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    addis r3, r26, 0x2
    lfs f1, lbl_80888120
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x16c
    bl fn_801F6C80
    addis r3, r26, 0x2
    lfs f1, lbl_80888120
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x16c
    bl fn_801F6C80
    addis r3, r26, 0x2
    lfs f1, lbl_80888120
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x16c
    bl fn_801F6C80
    b lbl_fn_805883DC_00000AE0
lbl_fn_805883DC_00000A74:
    addis r3, r26, 0x2
    lfs f1, lbl_80888110
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x15c
    bl fn_801F6C80
    lfs f1, lbl_80888124
    addis r3, r26, 0x2
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x164
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    addis r3, r26, 0x2
    lfs f1, lbl_80888128
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x16c
    bl fn_801F6C80
    addis r3, r26, 0x2
    lfs f1, lbl_80888128
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x16c
    bl fn_801F6C80
    addis r3, r26, 0x2
    lfs f1, lbl_80888128
    lwz r3, 0x5ba0(r3)
    addi r4, r30, 0x16c
    bl fn_801F6C80
lbl_fn_805883DC_00000AE0:
    addi r28, r28, 0x1
    addi r27, r27, 0x4
    cmpwi r28, 0x3
    addi r26, r26, 0x4
    blt lbl_fn_805883DC_000008D4
    addi r11, r1, 0x90
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80588680(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80588688(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087F9D8
    cmpwi r0, 0x0
    bne lbl_fn_80588688_00000B80
    lis r5, lbl_80761AB0@ha
    lis r3, 0x2
    addi r5, r5, lbl_80761AB0@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x5c38
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80588688_00000B7C
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80588714
lbl_fn_80588688_00000B7C:
    stw r3, lbl_8087F9D8
lbl_fn_80588688_00000B80:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F9D8
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80588714(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r7, r6
    stw r0, 0x24(r1)
    mr r0, r5
    li r5, 0x2
    stw r31, 0x1c(r1)
    mr r6, r0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_8057F284
    lis r3, lbl_80796994@ha
    lis r31, lbl_80761AB0@ha
    addi r3, r3, lbl_80796994@l
    stw r3, 0x0(r28)
    addi r31, r31, lbl_80761AB0@l
    addis r6, r28, 0x2
    li r0, 0x0
    stw r0, 0x5c18(r6)
    mr r3, r28
    addi r4, r31, 0x1
    stw r0, 0x5c1c(r6)
    li r5, 0x0
    stw r0, 0x5c20(r6)
    stw r0, 0x5c24(r6)
    stw r0, 0x5c28(r6)
    stw r0, 0x5c2c(r6)
    stw r0, 0x5c30(r6)
    bl fn_801F3FF8
    addis r5, r28, 0x2
    li r4, 0x1
    stw r3, 0x5b68(r5)
    bl fn_800D246C
    mr r3, r28
    addi r4, r31, 0x2a
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r28, 0x2
    li r4, 0x1
    stw r3, 0x5b6c(r5)
    bl fn_800D246C
    mr r3, r28
    addi r4, r31, 0x52
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r28, 0x2
    li r4, 0x1
    stw r3, 0x5b70(r5)
    bl fn_800D246C
    addi r31, r31, 0x7c
    li r29, 0x0
    li r30, 0x0
lbl_fn_80588714_00000C78:
    mr r3, r28
    mr r4, r31
    bl fn_801F64D0
    addis r5, r30, 0x2
    li r4, 0x1
    addi r0, r5, 0x5b74
    stwx r3, r28, r0
    bl fn_800D246C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0xa
    blt lbl_fn_80588714_00000C78
    lis r4, lbl_80761AB0@ha
    mr r3, r28
    addi r4, r4, lbl_80761AB0@l
    li r5, 0x0
    addi r4, r4, 0xa1
    bl fn_801F3FF8
    addis r5, r28, 0x2
    li r4, 0x1
    stw r3, 0x5b9c(r5)
    bl fn_800D246C
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

asm void fn_80588868(void)
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
    beq lbl_fn_80588868_00000D78
    lwz r0, lbl_8087F9D8
    cmpwi r0, 0x0
    beq lbl_fn_80588868_00000D2C
    li r0, 0x0
    stw r0, lbl_8087F9D8
lbl_fn_80588868_00000D2C:
    addis r4, r3, 0x2
    addic. r4, r4, 0x5c28
    beq lbl_fn_80588868_00000D5C
    beq lbl_fn_80588868_00000D5C
    beq lbl_fn_80588868_00000D5C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80588868_00000D5C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80588868_00000D5C:
    mr r3, r30
    li r4, 0x0
    bl fn_8057F7AC
    cmpwi r31, 0x0
    ble lbl_fn_80588868_00000D78
    mr r3, r30
    bl dtor_80084684
lbl_fn_80588868_00000D78:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80588908(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80588908_00000F8C
    mr r3, r31
    bl fn_8057F884
    cmpwi r3, 0x0
    bne lbl_fn_80588908_00000F8C
    mr r3, r31
    bl fn_8057F8FC
    addi r3, r31, 0x58
    bl fn_8047059C
    mr r28, r3
    addi r3, r31, 0x58
    bl fn_80470580
    lwz r12, 0x0(r31)
    mr r4, r3
    mr r3, r31
    mr r5, r28
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addis r3, r31, 0x2
    lwz r0, 0x5c2c(r3)
    subf r0, r0, r0
    stw r0, 0x5c2c(r3)
    lwz r26, lbl_8087F4F0
    mr r3, r26
    bl fn_8044D560
    mr r28, r3
    addis r30, r31, 0x2
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80588908_00000E80
lbl_fn_80588908_00000E30:
    stw r27, 0x10(r1)
    mr r3, r26
    mr r4, r27
    bl fn_8044D500
    stw r3, 0x14(r1)
    stw r29, 0x1c(r1)
    bl fn_80211480
    lfs f1, lbl_80888130
    mr r4, r3
    mr r3, r31
    bl fn_80584F48
    stw r3, 0x18(r1)
    mr r3, r30
    addi r5, r1, 0x10
    addi r6, r1, 0x8
    lwz r4, 0x5c28(r30)
    addi r3, r3, 0x5c28
    stb r29, 0x8(r1)
    bl fn_8058A3B0
    addi r27, r27, 0x1
lbl_fn_80588908_00000E80:
    cmpw r27, r28
    blt lbl_fn_80588908_00000E30
    addis r3, r31, 0x2
    lfs f1, lbl_80888134
    lwz r3, 0x5b68(r3)
    li r4, 0x1
    lfs f2, lbl_80888130
    li r5, 0x0
    bl fn_804A39EC
    addis r5, r31, 0x2
    li r4, 0x0
    lwz r3, 0x5b68(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b6c(r5)
    bl fn_800D246C
    addis r6, r31, 0x2
    lfs f1, lbl_80888134
    lwz r3, 0x5b6c(r6)
    li r4, 0x1
    fmr f2, f1
    li r5, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5b6c(r6)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b70(r6)
    bl fn_804A39EC
    mr r27, r31
    li r26, 0x0
lbl_fn_80588908_00000F08:
    addis r3, r27, 0x2
    lfs f1, lbl_80888134
    lwz r3, 0x5b74(r3)
    li r4, 0x1
    lfs f2, lbl_80888130
    li r5, 0x0
    bl fn_804A3A68
    addis r3, r27, 0x2
    addi r26, r26, 0x1
    lwz r3, 0x5b74(r3)
    cmpwi r26, 0xa
    addi r27, r27, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_80588908_00000F08
    addis r3, r31, 0x2
    li r4, 0x0
    lwz r3, 0x5b9c(r3)
    bl fn_800D246C
    addis r6, r31, 0x2
    li r0, 0x1
    lwz r5, 0x5b9c(r6)
    li r3, 0x1
    lwz r4, 0xfc(r5)
    rlwinm r4, r4, 0, 4, 2
    stw r4, 0xfc(r5)
    lwz r5, 0x5b9c(r6)
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    stw r0, 0x5c18(r6)
    b lbl_fn_80588908_00000F90
lbl_fn_80588908_00000F8C:
    li r3, 0x0
lbl_fn_80588908_00000F90:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80588B1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xe4(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_80588B1C_00001054
    lis r4, jumptable_80796970@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80796970@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_80588B1C_00001054
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80588B1C_00001054
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_fn_80588B1C_00001054
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_80588B1C_00001054
    bl fn_80589450
    b lbl_fn_80588B1C_00001054
    bl fn_805895B8
    b lbl_fn_80588B1C_00001054
    bl fn_805897D8
    b lbl_fn_80588B1C_00001054
    bl fn_8057FF3C
    b lbl_fn_80588B1C_00001054
    bl fn_80580100
lbl_fn_80588B1C_00001054:
    mr r3, r31
    bl fn_80580268
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80588BE4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    bl fn_80580DE4
    addis r4, r31, 0x2
    lwz r3, 0x5b68(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b6c(r4)
    bl fn_80580D84
    addis r3, r31, 0x2
    mr r30, r31
    lwz r3, 0x5b70(r3)
    li r29, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80588BE4_000010C8:
    addis r3, r30, 0x2
    lwz r3, 0x5b74(r3)
    bl fn_80580DB4
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0xa
    blt lbl_fn_80588BE4_000010C8
    addis r6, r31, 0x2
    lwz r3, 0x5b9c(r6)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xe4(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_80588BE4_00001278
    cmpwi r3, 0x4
    beq lbl_fn_80588BE4_00001134
    cmpwi r3, 0x7
    beq lbl_fn_80588BE4_0000117C
    cmpwi r3, 0x8
    beq lbl_fn_80588BE4_00001230
    cmpwi r3, 0x5
    beq lbl_fn_80588BE4_00001284
    cmpwi r3, 0x6
    beq lbl_fn_80588BE4_00001290
    b lbl_fn_80588BE4_00001298
lbl_fn_80588BE4_00001134:
    lwz r5, 0x5b68(r6)
    lis r4, lbl_80761AB0@ha
    addi r4, r4, lbl_80761AB0@l
    addi r3, r1, 0x60
    lwz r0, 0x38(r5)
    addi r4, r4, 0xc1
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x5c1c(r6)
    crclr 6
    bl sprintf
    addis r4, r31, 0x2
    lwz r3, lbl_8087F580
    lwz r4, 0x5b68(r4)
    addi r5, r1, 0x60
    li r6, 0x0
    bl fn_804A5824
    b lbl_fn_80588BE4_00001298
lbl_fn_80588BE4_0000117C:
    mr r3, r31
    bl fn_80589AF8
    addis r3, r31, 0x2
    lwz r5, 0x5c20(r3)
    lwz r0, 0x5c2c(r3)
    cmpw r5, r0
    bge lbl_fn_80588BE4_000011B0
    lwz r4, 0x5c28(r3)
    slwi r0, r5, 4
    mr r3, r31
    li r5, 0x1
    add r4, r4, r0
    bl fn_80589DE4
lbl_fn_80588BE4_000011B0:
    addis r3, r31, 0x2
    lis r4, lbl_80761AB0@ha
    lwz r5, 0x5c24(r3)
    addi r4, r4, lbl_80761AB0@l
    lwz r0, 0x5c20(r3)
    addi r3, r1, 0x20
    addi r4, r4, 0xd9
    subf r5, r5, r0
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addis r4, r31, 0x2
    addi r3, r1, 0x20
    lwz r30, 0x5b70(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    addis r8, r31, 0x2
    lwz r3, lbl_8087F580
    lwz r4, 0x5c24(r8)
    addi r6, r1, 0x8
    lwz r0, 0x5c20(r8)
    li r5, 0x0
    li r7, 0x0
    subf r0, r4, r0
    slwi r0, r0, 2
    add r4, r8, r0
    lwz r4, 0x5b74(r4)
    bl fn_804A55FC
    b lbl_fn_80588BE4_00001298
lbl_fn_80588BE4_00001230:
    mr r3, r31
    bl fn_80589AF8
    addis r3, r31, 0x2
    lwz r5, 0x5c20(r3)
    lwz r0, 0x5c2c(r3)
    cmpw r5, r0
    bge lbl_fn_80588BE4_00001298
    lwz r4, 0x5c28(r3)
    slwi r0, r5, 4
    mr r3, r31
    li r5, 0x0
    add r30, r4, r0
    mr r4, r30
    bl fn_80589DE4
    mr r3, r31
    mr r4, r30
    bl fn_8058A0F4
    b lbl_fn_80588BE4_00001298
lbl_fn_80588BE4_00001278:
    mr r3, r31
    bl fn_8058995C
    b lbl_fn_80588BE4_00001298
lbl_fn_80588BE4_00001284:
    mr r3, r31
    bl fn_80580584
    b lbl_fn_80588BE4_00001298
lbl_fn_80588BE4_00001290:
    mr r3, r31
    bl fn_80580694
lbl_fn_80588BE4_00001298:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80588E28(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lwz r0, 0xe4(r3)
    cmpwi r4, 0x1
    addis r6, r3, 0x2
    li r5, 0x1
    stw r5, 0x5b40(r6)
    mr r31, r3
    stw r0, 0xe8(r3)
    stw r4, 0xe4(r3)
    beq lbl_fn_80588E28_00001320
    cmpwi r4, 0x4
    beq lbl_fn_80588E28_00001330
    cmpwi r4, 0x7
    beq lbl_fn_80588E28_00001350
    cmpwi r4, 0x5
    beq lbl_fn_80588E28_00001470
    cmpwi r4, 0x6
    beq lbl_fn_80588E28_0000150C
    cmpwi r4, 0x8
    beq lbl_fn_80588E28_00001560
    cmpwi r4, 0x3
    beq lbl_fn_80588E28_00001578
    b lbl_fn_80588E28_00001580
lbl_fn_80588E28_00001320:
    li r0, 0x0
    stw r0, 0x5b40(r6)
    bl fn_8057FB24
    b lbl_fn_80588E28_00001580
lbl_fn_80588E28_00001330:
    lwz r4, 0x5c1c(r6)
    li r3, 0x3
    li r0, 0x0
    stw r4, 0x5b04(r6)
    stw r3, 0x5b08(r6)
    stw r0, 0x5b0c(r6)
    stw r3, 0x5b10(r6)
    b lbl_fn_80588E28_00001580
lbl_fn_80588E28_00001350:
    cmpwi r0, 0x4
    bne lbl_fn_80588E28_000013F0
    lwz r0, 0x5c2c(r6)
    subf r0, r0, r0
    stw r0, 0x5c2c(r6)
    lwz r26, lbl_8087F4F0
    mr r3, r26
    bl fn_8044D560
    mr r28, r3
    addis r30, r31, 0x2
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80588E28_000013D4
lbl_fn_80588E28_00001384:
    stw r27, 0x18(r1)
    mr r3, r26
    mr r4, r27
    bl fn_8044D500
    stw r3, 0x1c(r1)
    stw r29, 0x24(r1)
    bl fn_80211480
    lfs f1, lbl_80888130
    mr r4, r3
    mr r3, r31
    bl fn_80584F48
    stw r3, 0x20(r1)
    mr r3, r30
    addi r5, r1, 0x18
    addi r6, r1, 0x8
    lwz r4, 0x5c28(r30)
    addi r3, r3, 0x5c28
    stb r29, 0x8(r1)
    bl fn_8058A3B0
    addi r27, r27, 0x1
lbl_fn_80588E28_000013D4:
    cmpw r27, r28
    blt lbl_fn_80588E28_00001384
    addis r3, r31, 0x2
    li r0, 0x0
    stw r0, 0x5c20(r3)
    stw r0, 0x5c24(r3)
    stw r0, 0x5b0c(r3)
lbl_fn_80588E28_000013F0:
    addis r6, r31, 0x2
    lwz r5, 0x5c2c(r6)
    cmpwi r5, 0x0
    bne lbl_fn_80588E28_00001450
    addi r3, r1, 0x10
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0xb
    li r6, 0x0
    bl fn_80581820
    li r0, 0x4
    stw r0, 0xe4(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x0(r31)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80588E28_00001580
lbl_fn_80588E28_00001450:
    lwz r4, 0x5c20(r6)
    li r0, 0xa
    lwz r3, 0x5c24(r6)
    stw r4, 0x5b04(r6)
    stw r3, 0x5b0c(r6)
    stw r5, 0x5b08(r6)
    stw r0, 0x5b10(r6)
    b lbl_fn_80588E28_00001580
lbl_fn_80588E28_00001470:
    lwz r5, 0xdc(r3)
    li r0, 0xa
    lwz r4, 0xe0(r3)
    stw r5, 0x5b04(r6)
    stw r4, 0x5b0c(r6)
    stw r0, 0x5b10(r6)
    bl fn_80581FDC
    lwz r0, 0xe8(r31)
    cmpwi r0, 0x4
    bne lbl_fn_80588E28_000014B0
    addis r3, r31, 0x2
    li r0, 0x0
    stw r0, 0x5b04(r3)
    stw r0, 0x5b0c(r3)
    stw r0, 0xdc(r31)
    stw r0, 0xe0(r31)
lbl_fn_80588E28_000014B0:
    lwz r0, 0x32fc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80588E28_00001580
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0xa
    li r6, 0x0
    bl fn_80581820
    li r0, 0x4
    stw r0, 0xe4(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x0(r31)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80588E28_00001580
lbl_fn_80588E28_0000150C:
    lwz r0, 0xdc(r3)
    li r4, 0x0
    stw r4, 0x5b40(r6)
    mulli r0, r0, 0x5c
    stw r5, 0x5b24(r6)
    add r4, r3, r0
    lwz r0, 0x3348(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80588E28_00001548
    lwz r3, lbl_8087F4F0
    lwz r4, 0x3300(r4)
    bl fn_804444E8
    addis r4, r31, 0x2
    stw r3, 0x5b28(r4)
    b lbl_fn_80588E28_0000154C
lbl_fn_80588E28_00001548:
    stw r5, 0x5b28(r6)
lbl_fn_80588E28_0000154C:
    addis r3, r31, 0x2
    lfs f0, lbl_80888134
    lwz r3, 0x5b2c(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_80588E28_00001580
lbl_fn_80588E28_00001560:
    li r0, 0x0
    stw r0, 0x5b40(r6)
    lwz r3, 0x5b9c(r6)
    lfs f0, lbl_80888134
    stfs f0, 0x100(r3)
    b lbl_fn_80588E28_00001580
lbl_fn_80588E28_00001578:
    li r0, 0x0
    stw r0, 0x5b40(r6)
lbl_fn_80588E28_00001580:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8058910C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addis r6, r3, 0x2
    cmpwi r4, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x5c20(r6)
    lwz r5, 0x5c28(r6)
    slwi r0, r0, 4
    add r31, r5, r0
    bne lbl_fn_8058910C_0000160C
    addi r3, r1, 0x14
    li r4, 0x1c
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x8
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F4F0
    lwz r4, 0x8(r31)
    bl fn_8044D6AC
    b lbl_fn_8058910C_000016E8
lbl_fn_8058910C_0000160C:
    cmpwi r4, 0x5
    bne lbl_fn_8058910C_00001668
    lwz r0, 0xdc(r3)
    lwz r5, 0x5b24(r6)
    mulli r0, r0, 0x5c
    add r4, r3, r0
    addi r4, r4, 0x3300
    bl fn_80584D7C
    mr r3, r30
    bl fn_80581FDC
    addi r3, r1, 0x10
    li r4, 0x19
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058910C_000016E8
lbl_fn_8058910C_00001668:
    cmpwi r4, 0x4
    bne lbl_fn_8058910C_000016B8
    mr r4, r6
    li r5, 0x1
    addi r4, r4, 0x5c20
    bl fn_805892D0
    mr r31, r3
    addi r3, r1, 0xc
    li r4, 0x19
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8058910C_000016E8
lbl_fn_8058910C_000016B8:
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8058910C_000016E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80589274(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x11
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bne lbl_fn_80589274_00001748
    addis r4, r3, 0x2
    li r5, 0x0
    addi r4, r4, 0x5c20
    bl fn_805892D0
    stw r3, 0xe8(r31)
    addi r3, r1, 0x8
    li r4, 0x19
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80589274_00001748:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805892D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addis r6, r3, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r5
    lwz r0, 0x0(r4)
    lwz r6, 0x5c28(r6)
    slwi r0, r0, 4
    add r29, r6, r0
    lwz r3, 0x4(r29)
    bl fn_80211480
    lfs f1, lbl_80888130
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    fmr f2, f1
    fmr f3, f1
    bl fn_80584DDC
    cmpwi r28, 0x0
    mr r28, r3
    beq lbl_fn_805892D0_000017D8
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    lwz r4, 0x4(r29)
    bl fn_8044441C
lbl_fn_805892D0_000017D8:
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_8044D678
    addis r4, r30, 0x2
    lwz r3, 0x0(r31)
    lwz r0, 0x5c2c(r4)
    lwz r4, 0x5c28(r4)
    slwi r3, r3, 4
    slwi r0, r0, 4
    add r3, r4, r3
    add r0, r4, r0
    subf r0, r3, r0
    addi r4, r3, 0x10
    srawi r0, r0, 4
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 4
    bl memmove
    addis r3, r30, 0x2
    lwz r0, 0x5c2c(r3)
    subic. r4, r0, 0x1
    stw r4, 0x5c2c(r3)
    beq lbl_fn_805892D0_000018B8
    cmplwi r4, 0xa
    bgt lbl_fn_805892D0_0000187C
    lwz r3, 0x0(r31)
    li r0, 0x9
    cmpwi r3, 0x9
    bge lbl_fn_805892D0_00001850
    mr r0, r3
lbl_fn_805892D0_00001850:
    stw r0, 0x0(r31)
    addis r3, r30, 0x2
    li r0, 0x0
    stw r0, 0x5c24(r3)
    lwz r3, 0x5c2c(r3)
    lwz r0, 0x0(r31)
    cmpw r3, r0
    bgt lbl_fn_805892D0_000018B0
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_805892D0_000018B0
lbl_fn_805892D0_0000187C:
    lwz r3, 0x0(r31)
    addi r0, r3, 0xa
    cmpw r4, r0
    bge lbl_fn_805892D0_00001894
    subi r0, r4, 0xa
    stw r0, 0x0(r31)
lbl_fn_805892D0_00001894:
    addis r3, r30, 0x2
    lwz r0, 0x0(r31)
    lwz r3, 0x5c2c(r3)
    cmpw r3, r0
    bgt lbl_fn_805892D0_000018B0
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_805892D0_000018B0:
    li r3, 0x7
    b lbl_fn_805892D0_000018BC
lbl_fn_805892D0_000018B8:
    li r3, 0x4
lbl_fn_805892D0_000018BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80589450(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_805847F0
    addis r3, r30, 0x2
    li r4, 0x0
    lwz r0, 0x5b04(r3)
    li r5, 0x4
    stw r0, 0x5c1c(r3)
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80589450_000019E4
    addis r3, r30, 0x2
    lwz r0, 0x5c1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80589450_00001948
    cmpwi r0, 0x1
    beq lbl_fn_80589450_0000197C
    cmpwi r0, 0x2
    beq lbl_fn_80589450_000019B0
    b lbl_fn_80589450_00001A2C
lbl_fn_80589450_00001948:
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80589450_00001A2C
lbl_fn_80589450_0000197C:
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80589450_00001A2C
lbl_fn_80589450_000019B0:
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80589450_00001A2C
lbl_fn_80589450_000019E4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80589450_00001A2C
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80589450_00001A2C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
