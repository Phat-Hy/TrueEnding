#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_20(void);
extern void _savegpr_17(void);
extern void _savegpr_20(void);
extern void dtor_80084684(void);
extern void fn_8004B290(void);
extern void fn_8004B378(void);
extern void fn_8004D388(void);
extern void fn_8004ECC0(void);
extern void fn_8004ED34(void);
extern void fn_8006A250(void);
extern void fn_8006EF48(void);
extern void fn_80076FF8(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_8008937C(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D2338(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_80117914(void);
extern void fn_80119ECC(void);
extern void fn_8012AFE8(void);
extern void fn_801F4E8C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80370320(void);
extern void fn_80370F8C(void);
extern void fn_80377298(void);
extern void fn_80389838(void);
extern void fn_803903E0(void);
extern void fn_80392C94(void);
extern void fn_80392CE0(void);
extern void fn_803B2FBC(void);
extern void fn_803B3270(void);
extern void fn_803B8144(void);
extern void fn_803B8758(void);
extern void fn_803B87A8(void);
extern void fn_803BE854(void);
extern void fn_804A2F98(void);
extern void fn_804A2FBC(void);
extern void fn_804A313C(void);
extern void fn_804A4300(void);
extern void fn_804A5B9C(void);
extern void fn_80572B70(void);
extern void fn_805BDCC0(void);
extern void fn_805BF414(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8074DDF8[];
extern u8 lbl_8074DEC0[];
extern u8 lbl_8074DF88[];
extern u8 lbl_8074DF98[];

/* Small data declarations */
extern u32 lbl_8087DCCC;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F06C;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F434;
extern u32 lbl_8087F460;
extern u32 lbl_8087F580;
extern u32 lbl_8087F9AC;
extern u32 lbl_808813D0;
extern u32 lbl_808857FC;
extern u32 lbl_80885800;
extern u32 lbl_80885818;
extern u32 lbl_8088581C;
extern u32 lbl_80885820;
extern u32 lbl_80885824;
extern u32 lbl_80885828;
extern u32 lbl_8088582C;
extern u32 lbl_80885830;
extern u32 lbl_80885834;
extern u32 lbl_80885838;
extern u32 lbl_8088583C;
extern u32 lbl_80885840;
extern u32 lbl_80885844;
extern u32 lbl_80885848;
extern u32 lbl_8088584C;
extern u32 lbl_80885850;
extern u32 lbl_80885854;
extern u32 lbl_80885858;
extern u32 lbl_8088585C;
extern u32 lbl_80885860;
extern u32 lbl_80885864;
extern u32 lbl_80885868;
extern u32 lbl_8088586C;
extern u32 lbl_80885870;
extern u32 lbl_80885874;

/* Function declarations */
void fn_803775DC(void);
void fn_803780F8(void);
void fn_80378474(void);
void fn_80378610(void);
void fn_8037865C(void);
void fn_803786F0(void);
void fn_803786FC(void);
void fn_80378CAC(void);
void fn_80378CCC(void);
void fn_80378D34(void);

asm void fn_803775DC(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    bl _savegpr_20
    lwz r4, lbl_8087F580
    lis r31, lbl_8074DDF8@ha
    mr r29, r3
    cmpwi r4, 0x0
    addi r31, r31, lbl_8074DDF8@l
    beq lbl_fn_803775DC_0000003C
    li r0, 0x0
    stw r0, 0x9c(r4)
lbl_fn_803775DC_0000003C:
    lwz r5, 0x28c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_803775DC_00000128
    lwz r4, 0x4c(r5)
    lwz r0, 0x54(r5)
    cmpw r4, r0
    blt lbl_fn_803775DC_00000AFC
    lwz r0, 0x78(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x80(r3)
    cmplwi r0, 0x1
    ble lbl_fn_803775DC_0000008C
    cmpwi r0, 0x2
    beq lbl_fn_803775DC_000000AC
    cmpwi r0, 0x3
    beq lbl_fn_803775DC_000000CC
    cmpwi r0, 0x4
    beq lbl_fn_803775DC_000000EC
    b lbl_fn_803775DC_0000011C
lbl_fn_803775DC_0000008C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_0000011C
    lwz r5, lbl_8087F460
    li r4, 0x0
    li r6, 0x0
    bl fn_80370F8C
    b lbl_fn_803775DC_0000011C
lbl_fn_803775DC_000000AC:
    lwz r3, lbl_8087F430
    bl fn_800D2338
    lis r4, lbl_8074DEC0@ha
    lwz r3, lbl_8087F9AC
    addi r4, r4, lbl_8074DEC0@l
    addi r4, r4, 0x6b
    bl fn_80572B70
    b lbl_fn_803775DC_0000011C
lbl_fn_803775DC_000000CC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_0000011C
    lwz r5, lbl_8087F460
    li r4, 0x1
    li r6, 0x0
    bl fn_80370F8C
    b lbl_fn_803775DC_0000011C
lbl_fn_803775DC_000000EC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_0000011C
    li r4, 0x1b
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r3, lbl_8087F430
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    bl fn_80370F8C
lbl_fn_803775DC_0000011C:
    mr r3, r29
    bl fn_800D2338
    b lbl_fn_803775DC_00000AFC
lbl_fn_803775DC_00000128:
    lwz r4, 0x288(r3)
    lwz r5, lbl_8087F0A8
    addi r0, r4, 0x1
    lwz r4, 0x48(r3)
    stw r0, 0x288(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x50(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803775DC_00000170
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_803775DC_00000170:
    lwz r0, 0x70(r3)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_803775DC_00000308
    lwz r4, 0x288(r3)
    lwz r0, 0x5a4(r5)
    cmpw r4, r0
    ble lbl_fn_803775DC_000002B4
    lwz r4, 0x50(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803775DC_00000200
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r3, 0x50(r3)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803775DC_000002B4
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_803775DC_000001F8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_000002B4
lbl_fn_803775DC_000001F8:
    li r30, 0x1
    b lbl_fn_803775DC_000002B4
lbl_fn_803775DC_00000200:
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r3, 0x48(r3)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803775DC_000002B4
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_803775DC_00000260
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_000002B4
lbl_fn_803775DC_00000260:
    lwz r3, 0x70(r29)
    li r0, 0x1
    stw r3, 0x74(r29)
    stw r0, 0x70(r29)
    b lbl_fn_803775DC_0000027C
    beq lbl_fn_803775DC_00000298
    b lbl_fn_803775DC_000002B4
lbl_fn_803775DC_0000027C:
    lwz r3, 0x48(r29)
    lfs f0, lbl_808857FC
    stfs f0, 0x104(r3)
    lfs f0, lbl_80885818
    lwz r3, 0x48(r29)
    stfs f0, 0x100(r3)
    b lbl_fn_803775DC_000002B4
lbl_fn_803775DC_00000298:
    lwz r0, lbl_8087F06C
    cmpwi r0, 0x0
    bne lbl_fn_803775DC_000002B4
    lwz r4, 0x64(r29)
    mr r3, r29
    li r5, 0x0
    bl fn_80117914
lbl_fn_803775DC_000002B4:
    lwz r4, 0x4c(r29)
    lis r28, lbl_8074DEC0@ha
    addi r28, r28, lbl_8074DEC0@l
    addi r3, r28, 0x71
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088581C
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r29)
    addi r3, r28, 0x71
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088581C
    mr r4, r3
    mr r3, r27
    li r5, 0x1
    bl fn_801FED24
    b lbl_fn_803775DC_000007F0
lbl_fn_803775DC_00000308:
    cmpwi r0, 0x1
    bne lbl_fn_803775DC_00000518
    lwz r6, 0x48(r3)
    li r4, 0x0
    li r5, 0x1a
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    lwz r3, 0x4c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EF70
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_803775DC_00000360
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_00000398
lbl_fn_803775DC_00000360:
    lwz r3, 0x78(r29)
    subic. r0, r3, 0x1
    stw r0, 0x78(r29)
    bge lbl_fn_803775DC_0000037C
    lwz r3, 0x7c(r29)
    subi r0, r3, 0x1
    stw r0, 0x78(r29)
lbl_fn_803775DC_0000037C:
    addi r3, r1, 0x20
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803775DC_000007F0
lbl_fn_803775DC_00000398:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_803775DC_000003C8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_00000404
lbl_fn_803775DC_000003C8:
    lwz r3, 0x78(r29)
    lwz r0, 0x7c(r29)
    addi r3, r3, 0x1
    stw r3, 0x78(r29)
    cmpw r3, r0
    blt lbl_fn_803775DC_000003E8
    li r0, 0x0
    stw r0, 0x78(r29)
lbl_fn_803775DC_000003E8:
    addi r3, r1, 0x1c
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803775DC_000007F0
lbl_fn_803775DC_00000404:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_000007F0
    lwz r0, 0x78(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803775DC_0000043C
    cmpwi r0, 0x3
    bne lbl_fn_803775DC_00000494
lbl_fn_803775DC_0000043C:
    lwz r3, 0x64(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_00000478
    lwz r0, 0xd60(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803775DC_00000468
    li r4, 0x0
    bl fn_803B8758
    li r0, 0x1
    stw r0, 0x68(r29)
    b lbl_fn_803775DC_00000470
lbl_fn_803775DC_00000468:
    li r4, 0x0
    bl fn_803B3270
lbl_fn_803775DC_00000470:
    li r0, 0x3
    stw r0, 0x70(r29)
lbl_fn_803775DC_00000478:
    addi r3, r1, 0x18
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803775DC_00000AFC
lbl_fn_803775DC_00000494:
    cmpwi r0, 0x1
    bne lbl_fn_803775DC_000004F8
    lwz r3, 0x70(r29)
    li r0, 0x2
    stw r3, 0x74(r29)
    stw r0, 0x70(r29)
    b lbl_fn_803775DC_000004C0
    b lbl_fn_803775DC_000004DC
    stfs f0, 0x104(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_803775DC_000004DC
lbl_fn_803775DC_000004C0:
    lwz r0, lbl_8087F06C
    cmpwi r0, 0x0
    bne lbl_fn_803775DC_000004DC
    lwz r4, 0x64(r29)
    mr r3, r29
    li r5, 0x0
    bl fn_80117914
lbl_fn_803775DC_000004DC:
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803775DC_00000AFC
lbl_fn_803775DC_000004F8:
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r30, 0x1
    b lbl_fn_803775DC_000007F0
lbl_fn_803775DC_00000518:
    cmpwi r0, 0x2
    bne lbl_fn_803775DC_000005A4
    lwz r3, lbl_8087F06C
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_000007F0
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_803775DC_00000594
    bl fn_800D2338
    lwz r3, 0x70(r29)
    li r0, 0x1
    stw r3, 0x74(r29)
    stw r0, 0x70(r29)
    b lbl_fn_803775DC_00000558
    beq lbl_fn_803775DC_00000574
    b lbl_fn_803775DC_000007F0
lbl_fn_803775DC_00000558:
    lwz r3, 0x48(r29)
    lfs f0, lbl_808857FC
    stfs f0, 0x104(r3)
    lfs f0, lbl_80885818
    lwz r3, 0x48(r29)
    stfs f0, 0x100(r3)
    b lbl_fn_803775DC_000007F0
lbl_fn_803775DC_00000574:
    lwz r0, lbl_8087F06C
    cmpwi r0, 0x0
    bne lbl_fn_803775DC_000007F0
    lwz r4, 0x64(r29)
    mr r3, r29
    li r5, 0x0
    bl fn_80117914
    b lbl_fn_803775DC_000007F0
lbl_fn_803775DC_00000594:
    cmpwi r0, 0x8
    bne lbl_fn_803775DC_000007F0
    li r30, 0x1
    b lbl_fn_803775DC_000007F0
lbl_fn_803775DC_000005A4:
    cmpwi r0, 0x3
    bne lbl_fn_803775DC_00000760
    lwz r0, 0x68(r3)
    li r22, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803775DC_000005F8
    lwz r3, 0x64(r3)
    bl fn_803B87A8
    cmpwi r3, 0x0
    bne lbl_fn_803775DC_000006B4
    lwz r3, 0x64(r29)
    lwz r0, 0xc84(r3)
    cmpwi r0, 0x7
    bne lbl_fn_803775DC_000005E4
    li r22, 0x1
    b lbl_fn_803775DC_000006B4
lbl_fn_803775DC_000005E4:
    li r0, 0x0
    stw r0, 0x68(r29)
    li r4, 0x0
    bl fn_803B3270
    b lbl_fn_803775DC_000006B4
lbl_fn_803775DC_000005F8:
    lwz r3, 0x64(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_000006B4
    addis r3, r3, 0x1
    lwz r3, 0x4f60(r3)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803775DC_000006B4
    bl fn_803B8144
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_0000062C
    li r22, 0x1
    b lbl_fn_803775DC_000006B4
lbl_fn_803775DC_0000062C:
    lwz r3, 0x64(r29)
    li r4, 0x0
    bl fn_803B2FBC
    lwz r3, lbl_8087F460
    bl fn_803BE854
    cmpwi r3, 0x0
    beq lbl_fn_803775DC_000006B0
    lwz r22, lbl_8087F460
    cmpwi r22, 0x0
    beq lbl_fn_803775DC_000006A8
    beq lbl_fn_803775DC_000006A0
    addis r3, r22, 0x1
    subic. r0, r3, 0x61a0
    beq lbl_fn_803775DC_0000067C
    lis r4, fn_80119ECC@ha
    subi r3, r3, 0x4fdc
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    bl fn_806959D8
lbl_fn_803775DC_0000067C:
    addic. r3, r22, 0x539c
    beq lbl_fn_803775DC_00000698
    lis r4, fn_8012AFE8@ha
    li r5, 0x240
    addi r4, r4, fn_8012AFE8@l
    li r6, 0x7
    bl fn_806959D8
lbl_fn_803775DC_00000698:
    mr r3, r22
    bl dtor_80084684
lbl_fn_803775DC_000006A0:
    li r0, 0x0
    stw r0, lbl_8087F460
lbl_fn_803775DC_000006A8:
    li r22, 0x1
    b lbl_fn_803775DC_000006B4
lbl_fn_803775DC_000006B0:
    li r30, 0x1
lbl_fn_803775DC_000006B4:
    cmpwi r22, 0x0
    beq lbl_fn_803775DC_000007F0
    li r3, 0x0
    li r0, 0x1
    stw r3, lbl_8087DCCC
    stw r0, lbl_8087F434
    lwz r4, 0x64(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803775DC_000006E0
    stw r3, 0xd60(r4)
    stw r3, 0xc84(r4)
lbl_fn_803775DC_000006E0:
    mr r3, r29
    bl fn_80377298
    lwz r3, lbl_8087F580
    bl fn_804A2F98
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F580
    lwz r4, 0x8dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803775DC_00000708
    b lbl_fn_803775DC_0000070C
lbl_fn_803775DC_00000708:
    la r4, lbl_808813D0
lbl_fn_803775DC_0000070C:
    bl fn_804A4300
    lwz r3, 0x70(r29)
    li r0, 0x4
    stw r3, 0x74(r29)
    stw r0, 0x70(r29)
    b lbl_fn_803775DC_00000744
    stfs f0, 0x104(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_803775DC_00000744
    bne lbl_fn_803775DC_00000744
    lwz r4, 0x64(r29)
    mr r3, r29
    li r5, 0x0
    bl fn_80117914
lbl_fn_803775DC_00000744:
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803775DC_000007F0
lbl_fn_803775DC_00000760:
    cmpwi r0, 0x4
    bne lbl_fn_803775DC_000007F0
    lwz r3, lbl_8087F580
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803775DC_000007F0
    bl fn_804A313C
    lwz r3, lbl_8087F580
    bl fn_804A2FBC
    lwz r3, 0x70(r29)
    li r0, 0x1
    stw r3, 0x74(r29)
    stw r0, 0x70(r29)
    b lbl_fn_803775DC_000007A0
    beq lbl_fn_803775DC_000007BC
    b lbl_fn_803775DC_000007D8
lbl_fn_803775DC_000007A0:
    lwz r3, 0x48(r29)
    lfs f0, lbl_808857FC
    stfs f0, 0x104(r3)
    lfs f0, lbl_80885818
    lwz r3, 0x48(r29)
    stfs f0, 0x100(r3)
    b lbl_fn_803775DC_000007D8
lbl_fn_803775DC_000007BC:
    lwz r0, lbl_8087F06C
    cmpwi r0, 0x0
    bne lbl_fn_803775DC_000007D8
    lwz r4, 0x64(r29)
    mr r3, r29
    li r5, 0x0
    bl fn_80117914
lbl_fn_803775DC_000007D8:
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803775DC_000007F0:
    lis r28, lbl_8074DEC0@ha
    addi r26, r31, 0x18
    addi r25, r31, 0x38
    addi r24, r31, 0x0
    addi r23, r31, 0x58
    addi r22, r31, 0x70
    addi r31, r31, 0x80
    addi r28, r28, lbl_8074DEC0@l
    li r21, 0x0
lbl_fn_803775DC_00000814:
    lwz r0, 0x6c(r29)
    lwz r4, 0x0(r26)
    cmpwi r0, 0x0
    beq lbl_fn_803775DC_00000878
    cmpwi r0, 0x1
    beq lbl_fn_803775DC_00000854
    cmpwi r0, 0x2
    beq lbl_fn_803775DC_0000085C
    cmpwi r0, 0x3
    beq lbl_fn_803775DC_00000864
    cmpwi r0, 0x4
    beq lbl_fn_803775DC_0000086C
    cmpwi r0, 0x5
    beq lbl_fn_803775DC_00000874
    b lbl_fn_803775DC_00000878
    b lbl_fn_803775DC_00000878
lbl_fn_803775DC_00000854:
    lwz r4, 0x0(r25)
    b lbl_fn_803775DC_00000878
lbl_fn_803775DC_0000085C:
    lwz r4, 0x0(r24)
    b lbl_fn_803775DC_00000878
lbl_fn_803775DC_00000864:
    lwz r4, 0x0(r23)
    b lbl_fn_803775DC_00000878
lbl_fn_803775DC_0000086C:
    lwz r4, 0x0(r22)
    b lbl_fn_803775DC_00000878
lbl_fn_803775DC_00000874:
    lwz r4, 0x0(r31)
lbl_fn_803775DC_00000878:
    li r3, 0x0
    bl fn_80116FC0
    mr r20, r3
    lwz r3, lbl_8087EEC8
    lfs f1, lbl_80885820
    mr r4, r20
    lfs f2, lbl_808857FC
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    fmr f31, f1
    mr r5, r21
    addi r3, r1, 0x38
    addi r4, r28, 0x7c
    crclr 6
    bl sprintf
    lwz r4, 0x48(r29)
    addi r3, r1, 0x38
    addi r27, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    mr r5, r21
    addi r3, r1, 0x38
    addi r4, r28, 0x87
    crclr 6
    bl sprintf
    lwz r4, 0x48(r29)
    addi r3, r1, 0x38
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r20
    bl fn_801FEE08
    addi r21, r21, 0x1
    addi r25, r25, 0x4
    cmpwi r21, 0x5
    addi r24, r24, 0x4
    addi r23, r23, 0x4
    addi r22, r22, 0x4
    addi r31, r31, 0x4
    addi r26, r26, 0x4
    blt lbl_fn_803775DC_00000814
    lwz r0, 0x78(r29)
    li r31, 0x0
    slwi r0, r0, 2
    add r3, r29, r0
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803775DC_00000970
    cmpwi r0, 0x1
    beq lbl_fn_803775DC_00000978
    cmpwi r0, 0x2
    beq lbl_fn_803775DC_00000980
    cmpwi r0, 0x3
    beq lbl_fn_803775DC_00000988
    cmpwi r0, 0x4
    beq lbl_fn_803775DC_00000990
    b lbl_fn_803775DC_00000994
lbl_fn_803775DC_00000970:
    li r31, 0x0
    b lbl_fn_803775DC_00000994
lbl_fn_803775DC_00000978:
    li r31, 0x1
    b lbl_fn_803775DC_00000994
lbl_fn_803775DC_00000980:
    li r31, 0x2
    b lbl_fn_803775DC_00000994
lbl_fn_803775DC_00000988:
    li r31, 0x3
    b lbl_fn_803775DC_00000994
lbl_fn_803775DC_00000990:
    li r31, 0x0
lbl_fn_803775DC_00000994:
    lis r28, lbl_8074DEC0@ha
    mr r5, r31
    addi r28, r28, lbl_8074DEC0@l
    addi r3, r1, 0x38
    addi r4, r28, 0x8f
    crclr 6
    bl sprintf
    lwz r27, 0x48(r29)
    addi r3, r1, 0x38
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x24
    bl fn_801F4E8C
    lwz r4, 0x4c(r29)
    addi r3, r28, 0x71
    lfs f31, 0x24(r1)
    addi r27, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r29)
    addi r3, r28, 0x71
    lfs f31, 0x28(r1)
    addi r27, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r27
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x4c(r29)
    addi r3, r28, 0x71
    lfs f31, 0x34(r1)
    addi r27, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r27
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x4c(r29)
    addi r3, r28, 0xa0
    lfs f31, 0x2c(r1)
    addi r27, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    lwz r4, 0x4c(r29)
    addi r3, r28, 0xa6
    lfs f31, 0x30(r1)
    addi r27, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    beq lbl_fn_803775DC_00000ABC
    mr r5, r31
    addi r3, r1, 0x38
    addi r4, r28, 0xac
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F580
    addi r5, r1, 0x38
    lwz r4, 0x48(r29)
    bl fn_804A5B9C
lbl_fn_803775DC_00000ABC:
    cmpwi r30, 0x0
    beq lbl_fn_803775DC_00000AFC
    lwz r3, lbl_8087F430
    li r4, 0x1e
    li r5, 0x0
    lis r6, 0xff00
    lwz r3, 0x20(r3)
    bl fn_8006A250
    stw r3, 0x28c(r29)
    li r4, 0x2
    li r0, 0x1
    stw r4, 0x5c(r3)
    lwz r3, 0x28c(r29)
    stw r0, 0x48(r3)
    lwz r3, 0x28c(r29)
    stw r0, 0x68(r3)
lbl_fn_803775DC_00000AFC:
    addi r11, r1, 0xb0
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    bl _restgpr_20
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803780F8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lwz r0, 0x70(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803780F8_00000B6C
    lwz r4, 0x48(r31)
    lis r3, lbl_8074DEC0@ha
    addi r3, r3, lbl_8074DEC0@l
    addi r3, r3, 0xbc
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885800
    mr r4, r3
    mr r3, r30
    bl fn_801FECE0
    b lbl_fn_803780F8_00000B94
lbl_fn_803780F8_00000B6C:
    lwz r4, 0x48(r31)
    lis r3, lbl_8074DEC0@ha
    addi r3, r3, lbl_8074DEC0@l
    addi r3, r3, 0xbc
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808857FC
    mr r4, r3
    mr r3, r30
    bl fn_801FECE0
lbl_fn_803780F8_00000B94:
    lfs f11, lbl_808857FC
    addi r4, r1, 0x2c
    lfs f10, lbl_80885824
    addi r5, r1, 0x20
    lfs f2, 0xa4(r31)
    addi r6, r1, 0x14
    stfs f2, 0x34(r1)
    addi r7, r1, 0x8
    lfs f2, 0xb0(r31)
    addi r3, r31, 0x94
    stfs f2, 0x28(r1)
    fmr f2, f11
    psq_l f1, 0x9c(r31), 0, 0
    lfs f9, lbl_80885828
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0xa8(r31), 0, 0
    stfs f2, 0x34(r1)
    fmr f2, f9
    lfs f0, lbl_8088582C
    stfs f2, 0x28(r1)
    lfs f2, 0x34(r1)
    stfs f2, 0xa4(r31)
    lfs f2, 0x28(r1)
    stfs f11, 0x14(r1)
    stfs f10, 0x18(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f11, 0x8(r1)
    stfs f10, 0xc(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x9c(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f11, 0x1c(r1)
    stfs f9, 0x10(r1)
    psq_st f1, 0xa8(r31), 0, 0
    stfs f2, 0xb0(r31)
    stfs f0, 0xe4(r31)
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    lwz r0, 0x94(r31)
    stw r0, 0x104(r3)
    lwz r0, 0x98(r31)
    stw r0, 0x108(r3)
    lfs f2, 0xa4(r31)
    psq_l f1, 0x9c(r31), 0, 0
    psq_st f1, 0x10c(r3), 0, 0
    stfs f2, 0x114(r3)
    lfs f2, 0xb0(r31)
    psq_l f1, 0xa8(r31), 0, 0
    psq_st f1, 0x118(r3), 0, 0
    stfs f2, 0x120(r3)
    lfs f2, 0xbc(r31)
    psq_l f1, 0xb4(r31), 0, 0
    psq_st f1, 0x124(r3), 0, 0
    stfs f2, 0x12c(r3)
    lfs f2, 0xc8(r31)
    psq_l f1, 0xc0(r31), 0, 0
    psq_st f1, 0x130(r3), 0, 0
    stfs f2, 0x138(r3)
    lfs f0, 0xcc(r31)
    stfs f0, 0x13c(r3)
    lfs f0, 0xd0(r31)
    stfs f0, 0x140(r3)
    lfs f0, 0xd4(r31)
    stfs f0, 0x144(r3)
    lfs f0, 0xd8(r31)
    stfs f0, 0x148(r3)
    lfs f0, 0xdc(r31)
    stfs f0, 0x14c(r3)
    lfs f0, 0xe0(r31)
    stfs f0, 0x150(r3)
    lfs f0, 0xe4(r31)
    stfs f0, 0x154(r3)
    lfs f0, 0xe8(r31)
    stfs f0, 0x158(r3)
    psq_l f2, 0xf4(r31), 0, 0
    psq_l f3, 0xfc(r31), 0, 0
    psq_l f4, 0x104(r31), 0, 0
    psq_l f5, 0x10c(r31), 0, 0
    psq_l f6, 0x114(r31), 0, 0
    psq_l f1, 0xec(r31), 0, 0
    psq_st f1, 0x15c(r3), 0, 0
    psq_st f2, 0x164(r3), 0, 0
    psq_st f3, 0x16c(r3), 0, 0
    psq_st f4, 0x174(r3), 0, 0
    psq_st f5, 0x17c(r3), 0, 0
    psq_st f6, 0x184(r3), 0, 0
    psq_l f2, 0x124(r31), 0, 0
    psq_l f3, 0x12c(r31), 0, 0
    psq_l f4, 0x134(r31), 0, 0
    psq_l f5, 0x13c(r31), 0, 0
    psq_l f6, 0x144(r31), 0, 0
    psq_l f7, 0x14c(r31), 0, 0
    psq_l f8, 0x154(r31), 0, 0
    psq_l f1, 0x11c(r31), 0, 0
    psq_st f1, 0x18c(r3), 0, 0
    psq_st f2, 0x194(r3), 0, 0
    psq_st f3, 0x19c(r3), 0, 0
    psq_st f4, 0x1a4(r3), 0, 0
    psq_st f5, 0x1ac(r3), 0, 0
    psq_st f6, 0x1b4(r3), 0, 0
    psq_st f7, 0x1bc(r3), 0, 0
    psq_st f8, 0x1c4(r3), 0, 0
    lfs f0, 0x15c(r31)
    addi r4, r3, 0x204
    stfs f0, 0x1cc(r3)
    addi r5, r31, 0x194
    addi r7, r4, 0x94
    addi r0, r4, 0xf4
    lfs f0, 0x160(r31)
    addi r6, r5, 0x94
    stfs f0, 0x1d0(r3)
    psq_l f2, 0x16c(r31), 0, 0
    psq_l f3, 0x174(r31), 0, 0
    psq_l f4, 0x17c(r31), 0, 0
    psq_l f5, 0x184(r31), 0, 0
    psq_l f6, 0x18c(r31), 0, 0
    psq_l f1, 0x164(r31), 0, 0
    psq_st f1, 0x1d4(r3), 0, 0
    psq_st f2, 0x1dc(r3), 0, 0
    psq_st f3, 0x1e4(r3), 0, 0
    psq_st f4, 0x1ec(r3), 0, 0
    psq_st f5, 0x1f4(r3), 0, 0
    psq_st f6, 0x1fc(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    lwz r3, 0x1c4(r31)
    stw r3, 0x30(r4)
    lfs f0, 0x1c8(r31)
    stfs f0, 0x34(r4)
    lfs f0, 0x1cc(r31)
    stfs f0, 0x38(r4)
    lfs f2, 0x1d8(r31)
    psq_l f1, 0x3c(r5), 0, 0
    psq_st f1, 0x3c(r4), 0, 0
    stfs f2, 0x44(r4)
    lfs f0, 0x1dc(r31)
    stfs f0, 0x48(r4)
    lfs f2, 0x1e8(r31)
    psq_l f1, 0x4c(r5), 0, 0
    psq_st f1, 0x4c(r4), 0, 0
    stfs f2, 0x54(r4)
    lfs f0, 0x1ec(r31)
    stfs f0, 0x58(r4)
    lfs f2, 0x1f8(r31)
    psq_l f1, 0x5c(r5), 0, 0
    psq_st f1, 0x5c(r4), 0, 0
    stfs f2, 0x64(r4)
    lfs f0, 0x1fc(r31)
    stfs f0, 0x68(r4)
    lfs f2, 0x208(r31)
    psq_l f1, 0x6c(r5), 0, 0
    psq_st f1, 0x6c(r4), 0, 0
    stfs f2, 0x74(r4)
    lfs f0, 0x20c(r31)
    stfs f0, 0x78(r4)
    lfs f2, 0x218(r31)
    psq_l f1, 0x7c(r5), 0, 0
    psq_st f1, 0x7c(r4), 0, 0
    stfs f2, 0x84(r4)
    lfs f2, 0x224(r31)
    psq_l f1, 0x88(r5), 0, 0
    psq_st f1, 0x88(r4), 0, 0
    stfs f2, 0x90(r4)
lbl_fn_803780F8_00000E58:
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    lfs f0, 0xc(r6)
    addi r6, r6, 0x10
    stfs f0, 0xc(r7)
    addi r7, r7, 0x10
    cmplw r7, r0
    blt lbl_fn_803780F8_00000E58
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80378474(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r31, 0x0(r3)
    addi r3, r3, 0x8
    bl fn_8004B290
    lfs f0, lbl_80885830
    stw r31, 0x1fc(r29)
    stw r31, 0x214(r29)
    stfs f0, 0x308(r29)
    stfs f0, 0x30c(r29)
    stfs f0, 0x310(r29)
    stfs f0, 0x314(r29)
    stfs f0, 0x318(r29)
    stfs f0, 0x31c(r29)
    stw r31, 0x35c(r29)
    stw r31, 0x360(r29)
    stw r31, 0x368(r29)
    stw r31, 0x394(r29)
    stw r31, 0x3a8(r29)
    stfs f0, 0x3ac(r29)
    stfs f0, 0x3b0(r29)
    stw r31, 0x3b4(r29)
    stw r31, 0x2f8(r29)
    stw r31, 0x3a4(r29)
    lwz r3, lbl_8087EEE0
    bl fn_80076FF8
    lwz r0, 0x1fc(r29)
    lis r4, lbl_8074DF98@ha
    lfs f4, lbl_80885834
    addi r4, r4, lbl_8074DF98@l
    lfs f3, lbl_80885838
    cmpwi r0, 0x0
    lfs f2, lbl_8088583C
    lfs f0, lbl_80885840
    stfs f1, 0x5c(r29)
    stfs f4, 0x204(r29)
    stfs f3, 0x200(r29)
    stfs f2, 0x208(r29)
    stfs f0, 0x20c(r29)
    bne lbl_fn_80378474_00000F78
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80378474_00000F78
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1fc(r29)
    mr r30, r3
    b lbl_fn_80378474_00000F7C
lbl_fn_80378474_00000F78:
    li r30, 0x0
lbl_fn_80378474_00000F7C:
    lis r31, lbl_8074DF98@ha
    lfs f1, lbl_80885830
    addi r31, r31, lbl_8074DF98@l
    lfs f2, lbl_80885844
    lfs f3, lbl_80885848
    mr r3, r30
    addi r4, r31, 0xd
    addi r5, r29, 0x200
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885830
    mr r3, r30
    lfs f2, lbl_80885848
    addi r4, r31, 0x14
    lfs f3, lbl_8088584C
    addi r5, r29, 0x208
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885830
    mr r3, r30
    lfs f2, lbl_80885850
    addi r4, r31, 0x20
    lfs f3, lbl_80885848
    addi r5, r29, 0x20c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885830
    mr r3, r30
    lfs f2, lbl_80885854
    addi r4, r31, 0x28
    lfs f3, lbl_80885848
    addi r5, r29, 0x204
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80378610(void)
{
    nofralloc
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x2fc(r3), 0, 0
    lfs f2, 0x8(r6)
    lfs f3, 0x300(r3)
    lfs f0, 0x20c(r3)
    stw r4, 0x4(r3)
    fadds f0, f3, f0
    stw r5, 0x210(r3)
    stfs f2, 0x304(r3)
    stfs f0, 0x300(r3)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x310(r3)
    psq_st f1, 0x308(r3), 0, 0
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    stfs f2, 0x31c(r3)
    psq_st f1, 0x314(r3), 0, 0
    blr
}

asm void fn_8037865C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lfs f2, 0x8(r5)
    lwz r0, 0x214(r3)
    addi r8, r1, 0xc
    psq_l f1, 0x0(r5), 0, 0
    addi r9, r1, 0x18
    psq_st f1, 0x0(r8), 0, 0
    cmplwi r0, 0x7
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x14(r1)
    lfs f2, 0x8(r6)
    stw r4, 0x8(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x20(r1)
    stw r7, 0x24(r1)
    bge lbl_fn_8037865C_0000110C
    lwz r0, 0x214(r3)
    addi r5, r3, 0x214
    slwi r0, r0, 5
    add r0, r5, r0
    addic. r3, r0, 0x4
    beq lbl_fn_8037865C_00001100
    stw r4, 0x0(r3)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x14(r1)
    stfs f2, 0xc(r3)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    lfs f2, 0x20(r1)
    stfs f2, 0x18(r3)
    stw r7, 0x1c(r3)
lbl_fn_8037865C_00001100:
    lwz r3, 0x0(r5)
    addi r0, r3, 0x1
    stw r0, 0x0(r5)
lbl_fn_8037865C_0000110C:
    addi r1, r1, 0x30
    blr
}

asm void fn_803786F0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x214(r3)
    blr
}

asm void fn_803786FC(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x154(r1)
    li r0, 0x1
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    mr r31, r4
    stw r30, 0x138(r1)
    mr r30, r3
    stw r29, 0x134(r1)
    stw r28, 0x130(r1)
    lwz r6, 0x4(r3)
    stw r0, 0x0(r3)
    subi r0, r6, 0x2
    lfs f31, 0x204(r3)
    cmplwi r0, 0x1
    stw r5, 0x3b4(r3)
    ble lbl_fn_803786FC_000013E4
    cmpwi r6, 0x0
    beq lbl_fn_803786FC_00001194
    cmpwi r6, 0x1
    beq lbl_fn_803786FC_000012C4
    cmpwi r6, 0x5
    beq lbl_fn_803786FC_00001560
    cmpwi r6, 0x6
    beq lbl_fn_803786FC_000015A8
    b lbl_fn_803786FC_000015EC
lbl_fn_803786FC_00001194:
    psq_l f1, 0x308(r3), 0, 0
    addi r29, r1, 0x44
    lfs f2, 0x310(r3)
    stfs f2, 0x4c(r1)
    lfs f5, lbl_80885858
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, lbl_80885830
    lfs f4, 0x20c(r3)
    lfs f3, 0x48(r1)
    fadds f4, f5, f4
    fadds f3, f3, f4
    stfs f3, 0x48(r1)
    lfs f3, 0x200(r3)
    stfs f3, 0x58(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x120(r1)
    mulhw r5, r5, r3
    lis r4, lbl_8074DF88@ha
    lfd f6, lbl_8074DF88@l(r4)
    lfs f3, lbl_8088585C
    li r4, 0x79
    lfs f0, 0x318(r30)
    srawi r0, r5, 8
    fadds f0, f3, f0
    srwi r5, r0, 31
    lfs f5, lbl_80885844
    add r0, r0, r5
    lfs f4, lbl_80885860
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0xf0
    xoris r0, r0, 0x8000
    stw r0, 0x124(r1)
    lfd f3, 0x120(r1)
    fsubs f3, f3, f6
    fdivs f3, f3, f5
    fnmsubs f1, f4, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0xf0
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x50(r1)
    mr r5, r29
    lfs f0, 0x44(r1)
    addi r4, r1, 0x38
    lfs f5, 0x54(r1)
    addi r6, r1, 0x50
    fadds f6, f3, f0
    lfs f4, 0x48(r1)
    lfs f3, 0x58(r1)
    lis r7, 0x8000
    lfs f0, 0x4c(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x50(r1)
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f4, 0x54(r1)
    li r9, 0x0
    stfs f0, 0x58(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_803786FC_000015EC
    addi r4, r1, 0x38
    lfs f2, 0x40(r1)
    addi r3, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    b lbl_fn_803786FC_000015EC
lbl_fn_803786FC_000012C4:
    lwz r4, 0x210(r3)
    addi r29, r1, 0x44
    lfs f0, lbl_80885830
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f4, 0x48(r1)
    lfs f3, 0x20c(r3)
    fadds f3, f4, f3
    stfs f3, 0x48(r1)
    lfs f3, 0x200(r3)
    stfs f3, 0x58(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x120(r1)
    mulhw r5, r5, r3
    lis r4, lbl_8074DF88@ha
    lfd f5, lbl_8074DF88@l(r4)
    lfs f3, lbl_80885844
    li r4, 0x79
    lfs f0, lbl_80885864
    srawi r0, r5, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0xc0
    xoris r0, r0, 0x8000
    stw r0, 0x124(r1)
    lfd f4, 0x120(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmuls f1, f0, f3
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0xc0
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x50(r1)
    mr r5, r29
    lfs f0, 0x44(r1)
    addi r4, r1, 0x38
    lfs f5, 0x54(r1)
    addi r6, r1, 0x50
    fadds f6, f3, f0
    lfs f4, 0x48(r1)
    lfs f3, 0x58(r1)
    lis r7, 0x8000
    lfs f0, 0x4c(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x50(r1)
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f4, 0x54(r1)
    li r9, 0x0
    stfs f0, 0x58(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_803786FC_000015EC
    addi r4, r1, 0x38
    lfs f2, 0x40(r1)
    addi r3, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    b lbl_fn_803786FC_000015EC
lbl_fn_803786FC_000013E4:
    lwz r3, 0x35c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803786FC_00001530
    li r4, 0x0
    bl fn_805BDCC0
    psq_l f1, 0x308(r30), 0, 0
    mr r28, r3
    lfs f2, 0x310(r30)
    addi r5, r1, 0x44
    stfs f2, 0x4c(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    psq_st f1, 0x0(r5), 0, 0
    lfs f1, 0x318(r30)
    bl fn_805F8E70
    lfs f1, lbl_80885830
    mr r3, r28
    addi r29, r1, 0x90
    addi r4, r1, 0x20
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x28(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    lfs f3, 0x44(r1)
    addi r5, r1, 0x50
    lfs f0, 0x2c(r1)
    addi r3, r1, 0x60
    lfs f5, 0x48(r1)
    li r4, 0x79
    fadds f6, f3, f0
    lfs f4, 0x30(r1)
    lfs f3, 0x4c(r1)
    lfs f0, 0x34(r1)
    fadds f4, f5, f4
    stfs f6, 0x44(r1)
    fadds f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x4c(r1)
    psq_l f1, 0x308(r30), 0, 0
    lfs f2, 0x310(r30)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f1, 0x318(r30)
    bl fn_805F8E70
    lfs f1, lbl_80885830
    mr r3, r28
    addi r29, r1, 0x60
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x10(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f3, 0x50(r1)
    lfs f0, 0x14(r1)
    lfs f5, 0x54(r1)
    fadds f6, f3, f0
    lfs f4, 0x18(r1)
    lfs f3, 0x58(r1)
    lfs f0, 0x1c(r1)
    fadds f4, f5, f4
    stfs f6, 0x50(r1)
    fadds f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x58(r1)
    b lbl_fn_803786FC_000015EC
lbl_fn_803786FC_00001530:
    lwz r3, lbl_8087EFB4
    addi r4, r1, 0x44
    addi r5, r1, 0x50
    psq_l f1, 0x118(r3), 0, 0
    lfs f2, 0x120(r3)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x10c(r3), 0, 0
    lfs f2, 0x114(r3)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r5), 0, 0
    b lbl_fn_803786FC_000015EC
lbl_fn_803786FC_00001560:
    lwz r5, lbl_8087EFB4
    addi r6, r1, 0x44
    addi r7, r1, 0x50
    lwz r4, lbl_8087F0A8
    psq_l f1, 0x118(r5), 0, 0
    lfs f2, 0x120(r5)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x10c(r5), 0, 0
    lfs f2, 0x114(r5)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r7), 0, 0
    lwz r4, 0xd0(r4)
    subi r0, r4, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x394(r3)
    b lbl_fn_803786FC_000015EC
lbl_fn_803786FC_000015A8:
    lwz r5, lbl_8087EFB4
    addi r6, r1, 0x44
    addi r7, r1, 0x50
    lwz r4, lbl_8087F0A8
    psq_l f1, 0x118(r5), 0, 0
    lfs f2, 0x120(r5)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x10c(r5), 0, 0
    lfs f2, 0x114(r5)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r7), 0, 0
    lwz r4, 0xd0(r4)
    subi r0, r4, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x394(r3)
lbl_fn_803786FC_000015EC:
    stw r31, 0x354(r30)
    addi r4, r1, 0x50
    addi r29, r1, 0x44
    addi r3, r30, 0x8
    stw r31, 0x350(r30)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x334(r30)
    psq_st f1, 0x32c(r30), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x4c(r1)
    stfs f2, 0x34c(r30)
    psq_st f1, 0x344(r30), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x4c(r1)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x18(r30)
    psq_st f1, 0x10(r30), 0, 0
    stfs f31, 0x58(r30)
    bl fn_8004B378
    lwz r0, 0x394(r30)
    li r3, 0x0
    stw r3, 0x358(r30)
    cmpwi r0, 0x0
    stw r3, 0x364(r30)
    beq lbl_fn_803786FC_0000168C
    lwz r3, 0x368(r30)
    addi r4, r30, 0x36c
    bl fn_80392C94
    lwz r3, 0x368(r30)
    li r4, 0x6
    bl fn_80389838
    lwz r3, 0x368(r30)
    mr r4, r29
    lfs f1, lbl_80885868
    li r5, 0x1
    bl fn_803903E0
lbl_fn_803786FC_0000168C:
    lfs f0, lbl_80885848
    li r0, 0x0
    stw r0, 0x398(r30)
    stfs f0, 0x3a0(r30)
    stw r0, 0x2f8(r30)
    stw r0, 0x3a4(r30)
    stw r0, 0x3a8(r30)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r28, 0x130(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80378CAC(void)
{
    nofralloc
    lwz r0, 0x394(r3)
    mr r4, r3
    cmpwi r0, 0x0
    beqlr
    lwz r3, 0x368(r3)
    addi r4, r4, 0x36c
    b fn_80392C94
    blr
}

asm void fn_80378CCC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80885830
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x394(r3)
    stw r31, 0x0(r3)
    cmpwi r0, 0x0
    stw r31, 0x35c(r3)
    stw r31, 0x360(r3)
    stfs f0, 0x3ac(r3)
    stfs f0, 0x3b0(r3)
    beq lbl_fn_80378CCC_00001740
    lwz r3, 0x368(r3)
    addi r4, r30, 0x36c
    bl fn_80392CE0
    stw r31, 0x394(r30)
lbl_fn_80378CCC_00001740:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80378D34(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x170
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    bl _savegpr_17
    lfs f2, 0x8(r4)
    addi r10, r1, 0xd4
    li r0, 0x0
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x114(r1)
    lis r7, 0x8000
    mr r17, r4
    mr r30, r5
    stw r0, 0x118(r1)
    addi r11, r1, 0xc8
    mr r29, r3
    mr r31, r6
    stw r0, 0x11c(r1)
    mr r5, r10
    mr r6, r11
    addi r4, r1, 0xe0
    stw r0, 0x120(r1)
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0xdc(r1)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0xd0(r1)
    lwz r3, lbl_8087EE98
    psq_st f1, 0x0(r11), 0, 0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80378D34_0000183C
    lfs f3, 0xec(r1)
    addi r3, r1, 0x8c
    lfs f0, 0x110(r1)
    lfs f5, 0xe8(r1)
    fadds f2, f3, f0
    lfs f4, 0x10c(r1)
    lfs f3, 0xe4(r1)
    lfs f0, 0x108(r1)
    fadds f4, f5, f4
    stfs f2, 0x94(r1)
    fadds f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
lbl_fn_80378D34_0000183C:
    lfs f3, 0x8(r17)
    addi r3, r1, 0x80
    lfs f0, 0x8(r29)
    lfs f5, 0x4(r17)
    fsubs f6, f3, f0
    lfs f4, 0x4(r29)
    lfs f0, 0x0(r29)
    lfs f3, 0x0(r17)
    fsubs f4, f5, f4
    stfs f6, 0x88(r1)
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    bl fn_805F9940
    lfs f0, lbl_8088586C
    addi r27, r1, 0xbc
    lfs f2, 0x8(r17)
    addi r26, r1, 0x68
    fmuls f31, f1, f0
    psq_l f1, 0x0(r17), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    addi r25, r1, 0x5c
    lfs f29, lbl_80885830
    addi r23, r1, 0x74
    stfs f2, 0xc4(r1)
    addi r24, r1, 0xa4
    lfs f30, lbl_8088583C
    addi r21, r1, 0x50
    addi r22, r1, 0xb0
    addi r19, r1, 0x44
    addi r20, r1, 0x98
    li r18, 0x0
    li r17, 0x1
    lis r28, 0x8000
lbl_fn_80378D34_000018C4:
    lfs f3, 0x8(r29)
    mr r3, r26
    lfs f0, 0xc4(r1)
    mr r4, r26
    lfs f5, 0x4(r29)
    fsubs f2, f3, f0
    lfs f4, 0xc0(r1)
    lfs f3, 0x0(r29)
    lfs f0, 0xbc(r1)
    fsubs f4, f5, f4
    stfs f2, 0x64(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    lfs f0, 0x70(r1)
    mr r5, r22
    lfs f3, 0x6c(r1)
    addi r4, r1, 0xe0
    fmuls f8, f0, f31
    lfs f0, 0x68(r1)
    fmuls f4, f3, f31
    lfs f7, 0xc4(r1)
    fmuls f0, f0, f31
    lfs f5, 0xc0(r1)
    fmr f2, f8
    stfs f0, 0x74(r1)
    lfs f3, 0xbc(r1)
    addi r6, r1, 0x38
    stfs f4, 0x78(r1)
    addi r7, r28, 0x8
    psq_l f1, 0x0(r23), 0, 0
    frsp f6, f2
    psq_st f1, 0x0(r24), 0, 0
    li r8, 0x0
    lwz r3, lbl_8087EE98
    li r9, 0x0
    lfs f4, 0xa8(r1)
    lfs f0, 0xa4(r1)
    fadds f6, f7, f6
    fadds f4, f5, f4
    stfs f2, 0xac(r1)
    fadds f0, f3, f0
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f2, 0xb8(r1)
    fmr f2, f29
    psq_l f1, 0x0(r21), 0, 0
    stfs f29, 0x44(r1)
    stfs f29, 0x48(r1)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    lfs f1, lbl_80885870
    stfs f8, 0x7c(r1)
    stfs f6, 0x58(r1)
    stfs f29, 0x4c(r1)
    stfs f2, 0xa0(r1)
    stfs f29, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f29, 0x40(r1)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80378D34_00001A00
    lfs f3, 0xb4(r1)
    addi r18, r18, 0x1
    lfs f0, 0xf4(r1)
    lfs f4, 0xf0(r1)
    fadds f3, f3, f0
    lfs f0, 0xf8(r1)
    stfs f4, 0xbc(r1)
    fmuls f3, f3, f30
    stfs f0, 0xc4(r1)
    stfs f3, 0xc0(r1)
    b lbl_fn_80378D34_00001A10
lbl_fn_80378D34_00001A00:
    psq_l f1, 0x0(r22), 0, 0
    lfs f2, 0xb8(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0xc4(r1)
lbl_fn_80378D34_00001A10:
    addi r17, r17, 0x1
    cmpwi r17, 0x4
    ble lbl_fn_80378D34_000018C4
    addi r3, r1, 0xbc
    lfs f2, 0xc4(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r18, 0x0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    ble lbl_fn_80378D34_00001AF8
    cmpwi r31, 0x0
    beq lbl_fn_80378D34_00001AF8
    frsp f7, f2
    lfs f6, 0x8(r30)
    lfs f5, 0x4(r29)
    addi r3, r1, 0x2c
    lfs f4, 0x4(r30)
    lfs f3, 0x0(r29)
    lfs f0, 0x0(r30)
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f4, 0x30(r1)
    bl fn_805F9920
    lfs f0, lbl_80885874
    fcmpo cr0, f1, f0
    ble lbl_fn_80378D34_00001AF8
    lfs f3, 0x4(r29)
    addi r3, r1, 0x20
    lfs f5, 0x4(r30)
    lfs f0, 0x8(r29)
    fsubs f7, f3, f5
    lfs f6, 0x8(r30)
    lfs f4, 0x0(r29)
    fsubs f9, f0, f6
    lfs f3, 0x0(r30)
    lfs f0, lbl_8088586C
    fsubs f4, f4, f3
    stfs f7, 0x18(r1)
    fmuls f8, f9, f0
    fmuls f7, f7, f0
    stfs f4, 0x14(r1)
    fmuls f0, f4, f0
    fadds f2, f8, f6
    stfs f9, 0x1c(r1)
    fadds f4, f7, f5
    stfs f0, 0x8(r1)
    fadds f0, f0, f3
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
lbl_fn_80378D34_00001AF8:
    addi r11, r1, 0x170
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    bl _restgpr_17
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}
