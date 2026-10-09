#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8004A1D4(void);
extern void fn_8006A204(void);
extern void fn_8006A900(void);
extern void fn_800A4228(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800E2FE0(void);
extern void fn_800EFB78(void);
extern void fn_8011BF3C(void);
extern void fn_80154344(void);
extern void fn_80155DAC(void);
extern void fn_8015EB2C(void);
extern void fn_8016D0A0(void);
extern void fn_80175AEC(void);
extern void fn_8017C974(void);
extern void fn_80219558(void);
extern void fn_8036554C(void);
extern void fn_8036EA6C(void);
extern void fn_8036EE0C(void);
extern void fn_80370320(void);
extern void fn_80378610(void);
extern void fn_803786FC(void);
extern void fn_80378CCC(void);
extern void fn_8037C690(void);
extern void fn_8037F744(void);
extern void fn_803CB044(void);
extern void fn_803CB474(void);
extern void fn_803CB618(void);
extern void fn_803CB820(void);
extern void fn_803CE070(void);
extern void fn_803E598C(void);
extern void fn_804786F8(void);
extern void fn_80481654(void);
extern void fn_80481668(void);
extern void fn_8048169C(void);
extern void fn_804A0580(void);
extern void fn_8052C10C(void);
extern void fn_8056B3D8(void);
extern void fn_8056BD38(void);
extern void fn_80570A18(void);
extern void fn_80570A44(void);
extern void fn_80584FE8(void);
extern void fn_80586DB4(void);
extern void fn_80588688(void);
extern void fn_8058ABF8(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8074DBE8[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EF68;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F480;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F508;
extern u32 lbl_8087F540;
extern u32 lbl_8087F610;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C8;
extern u32 lbl_8087F9D0;
extern u32 lbl_8087F9D8;
extern u32 lbl_8087F9E0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80885708;
extern u32 lbl_8088570C;
extern u32 lbl_80885728;
extern u32 lbl_80885750;
extern u32 lbl_80885798;
extern u32 lbl_8088579C;
extern u32 lbl_808857A0;
extern u32 lbl_808857A4;
extern u32 lbl_808857A8;
extern u32 lbl_808857AC;
extern u32 lbl_808857B0;
extern u32 lbl_808857B4;
extern u32 lbl_808857B8;
extern u32 lbl_808857BC;
extern u32 lbl_808857C0;

/* Function declarations */
void fn_8036CFA4(void);
void fn_8036D2D0(void);
void fn_8036DAA8(void);
void fn_8036DAF4(void);
void fn_8036DB24(void);
void fn_8036DB3C(void);
void fn_8036DBC0(void);
void fn_8036DDD4(void);
void fn_8036E098(void);
void fn_8036E170(void);
void fn_8036E428(void);
void fn_8036E430(void);
void fn_8036E494(void);
void fn_8036E624(void);
void fn_8036E6D4(void);
void fn_8036E89C(void);

asm void fn_8036CFA4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    stw r28, 0xf0(r1)
    lwz r0, 0x5664(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036CFA4_00000044
    addi r3, r3, 0x6c
    bl fn_8037F744
lbl_fn_8036CFA4_00000044:
    lwz r3, 0x868(r31)
    li r28, 0x0
    subi r0, r3, 0x8
    cmplwi r0, 0x1
    ble lbl_fn_8036CFA4_00000080
    subi r0, r3, 0x5
    cmplwi r0, 0x1
    ble lbl_fn_8036CFA4_00000098
    cmpwi r3, 0x0
    beq lbl_fn_8036CFA4_00000080
    cmpwi r3, 0x2
    beq lbl_fn_8036CFA4_00000080
    cmpwi r3, 0x7
    beq lbl_fn_8036CFA4_000002BC
    b lbl_fn_8036CFA4_000002CC
lbl_fn_8036CFA4_00000080:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x290(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036CFA4_000002CC
    li r28, 0x1
    b lbl_fn_8036CFA4_000002CC
lbl_fn_8036CFA4_00000098:
    lfs f3, 0x88(r31)
    addi r30, r1, 0x5c
    lfs f0, 0x7c(r31)
    addi r5, r1, 0x50
    lfs f5, 0x84(r31)
    mr r3, r30
    fsubs f2, f3, f0
    lfs f4, 0x78(r31)
    lfs f3, 0x80(r31)
    mr r4, r30
    lfs f0, 0x74(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r29, r1, 0x68
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80885798
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8036CFA4_00000134
    lfs f3, 0x68(r1)
    lfs f0, lbl_8088570C
    fcmpo cr0, f3, f0
    ble lbl_fn_8036CFA4_00000128
    lfs f0, lbl_8088579C
    b lbl_fn_8036CFA4_0000012C
lbl_fn_8036CFA4_00000128:
    lfs f0, lbl_808857A0
lbl_fn_8036CFA4_0000012C:
    stfs f0, 0x48(r1)
    b lbl_fn_8036CFA4_00000148
lbl_fn_8036CFA4_00000134:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8036CFA4_00000148:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088570C
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_80885708
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885798
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8036CFA4_00000264
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088570C
    fcmpo cr0, f3, f0
    ble lbl_fn_8036CFA4_00000254
    lfs f0, lbl_8088579C
    b lbl_fn_8036CFA4_00000258
lbl_fn_8036CFA4_00000254:
    lfs f0, lbl_808857A0
lbl_fn_8036CFA4_00000258:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8036CFA4_00000278
lbl_fn_8036CFA4_00000264:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8036CFA4_00000278:
    addi r3, r1, 0x44
    lfs f2, lbl_8088570C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, lbl_808857A4
    lfs f3, 0x68(r1)
    stfs f2, 0x4c(r1)
    fcmpo cr0, f3, f0
    stfs f2, 0x70(r1)
    cror eq, gt, eq
    beq lbl_fn_8036CFA4_000002B4
    lwz r3, 0x868(r31)
    lwz r0, 0x86c(r31)
    cmpw r3, r0
    bne lbl_fn_8036CFA4_000002CC
lbl_fn_8036CFA4_000002B4:
    li r28, 0x1
    b lbl_fn_8036CFA4_000002CC
lbl_fn_8036CFA4_000002BC:
    lwz r0, 0x86c(r31)
    cmpw r3, r0
    bne lbl_fn_8036CFA4_000002CC
    li r28, 0x1
lbl_fn_8036CFA4_000002CC:
    lwz r0, 0x56d4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8036CFA4_000002DC
    li r28, 0x0
lbl_fn_8036CFA4_000002DC:
    lwz r3, lbl_8087F8A0
    cntlzw r0, r28
    lwz r6, 0x10d8(r31)
    srwi r4, r0, 5
    lwz r5, 0x48(r3)
    lwz r3, 0x64(r6)
    addi r5, r5, 0x528
    bl fn_804A0580
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8036D2D0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    lwz r5, 0x56d4(r3)
    mr r30, r3
    cmpwi r5, 0x0
    beq lbl_fn_8036D2D0_0000050C
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036D2D0_00000490
    lwz r4, 0xd1c(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_8036D2D0_00000490
    lwz r3, 0x50(r5)
    bl fn_80219558
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8036D2D0_000003B8
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_000003AC
    cmpwi r3, 0x4
    beq lbl_fn_8036D2D0_00000424
    cmpwi r3, 0x6
    beq lbl_fn_8036D2D0_00000424
    cmpwi r3, 0x1
    beq lbl_fn_8036D2D0_00000450
    cmpwi r3, 0x5
    beq lbl_fn_8036D2D0_00000450
    b lbl_fn_8036D2D0_00000498
lbl_fn_8036D2D0_000003AC:
    lwz r3, 0x56d4(r30)
    bl fn_800E2FE0
    b lbl_fn_8036D2D0_00000498
lbl_fn_8036D2D0_000003B8:
    lwz r3, 0x56d4(r30)
    bl fn_800E2FE0
    lwz r0, 0x1070(r30)
    cmpwi r0, 0x3d
    blt lbl_fn_8036D2D0_000003DC
    lwz r3, lbl_8087F408
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036D2D0_000003DC:
    lwz r3, 0x56d4(r30)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8036D2D0_00000404
    lwz r0, 0x560(r3)
    cmpwi r0, 0xe
    bne lbl_fn_8036D2D0_00000404
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8036D2D0_00000498
lbl_fn_8036D2D0_00000404:
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8036D2D0_00000418
    addi r3, r30, 0xd18
    bl fn_80378CCC
lbl_fn_8036D2D0_00000418:
    li r0, 0x0
    stw r0, 0x56d4(r30)
    b lbl_fn_8036D2D0_00000498
lbl_fn_8036D2D0_00000424:
    lwz r3, 0x56d4(r30)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8036D2D0_00000498
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1e
    beq lbl_fn_8036D2D0_00000448
    cmpwi r0, 0x1f
    bne lbl_fn_8036D2D0_00000498
lbl_fn_8036D2D0_00000448:
    bl fn_800E2FE0
    b lbl_fn_8036D2D0_00000498
lbl_fn_8036D2D0_00000450:
    lwz r3, 0x56d4(r30)
    bl fn_800E2FE0
    lwz r3, 0x56d4(r30)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8036D2D0_0000047C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1e
    beq lbl_fn_8036D2D0_00000498
    cmpwi r0, 0x1f
    beq lbl_fn_8036D2D0_00000498
lbl_fn_8036D2D0_0000047C:
    addi r3, r30, 0xd18
    bl fn_80378CCC
    li r0, 0x0
    stw r0, 0x56d4(r30)
    b lbl_fn_8036D2D0_00000498
lbl_fn_8036D2D0_00000490:
    li r0, 0x0
    stw r0, 0x56d4(r3)
lbl_fn_8036D2D0_00000498:
    lwz r0, 0x56d4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8036D2D0_00000AEC
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F408
    bl fn_800D246C
    lwz r5, lbl_8087F408
    li r0, 0x0
    li r4, 0x0
    lwz r3, 0x38(r5)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r5)
    lwz r5, lbl_8087F890
    lwz r3, 0x38(r5)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r5)
    lwz r3, lbl_8087F9E8
    stw r0, 0x2928(r3)
    lwz r3, 0x10d8(r30)
    lwz r3, 0x134(r3)
    bl fn_800D246C
    b lbl_fn_8036D2D0_00000AEC
lbl_fn_8036D2D0_0000050C:
    lwz r4, 0x56d0(r3)
    subic. r0, r4, 0x1
    stw r0, 0x56d0(r3)
    bgt lbl_fn_8036D2D0_00000AEC
    lwz r31, 0x56d8(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8036D2D0_00000AEC
    lwz r3, 0x50(r31)
    bl fn_80219558
    subi r0, r3, 0x4
    mr r27, r3
    cmplwi r0, 0x2
    ble lbl_fn_8036D2D0_000007E4
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8036D2D0_00000688
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_00000560
    cmpwi r3, 0x1
    beq lbl_fn_8036D2D0_000007E4
    b lbl_fn_8036D2D0_00000A34
lbl_fn_8036D2D0_00000560:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8036D2D0_00000A34
    lwz r0, 0x560(r31)
    cmpwi r0, 0x84
    bne lbl_fn_8036D2D0_00000A34
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8036D2D0_00000A34
    lwz r3, 0x638(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_00000A34
    lwz r3, 0xb0(r3)
    bl fn_800EFB78
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8036D2D0_00000A34
    addi r3, r3, 0x34
    bl fn_804786F8
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_00000A34
    mr r5, r31
    addi r3, r30, 0xd18
    addi r6, r31, 0x528
    li r4, 0x2
    bl fn_80378610
    addi r3, r29, 0x3c
    bl fn_804786F8
    mr r28, r3
    addi r3, r29, 0x34
    bl fn_804786F8
    mr r4, r3
    mr r5, r28
    addi r3, r30, 0xd18
    bl fn_8037C690
    addi r3, r30, 0xd18
    li r4, 0x0
    bl fn_803786FC
    lfs f0, 0x2e4(r31)
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0x1070(r30)
    lwz r0, 0xd1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8036D2D0_00000640
    addi r3, r1, 0x14
    addi r4, r31, 0xc58
    li r5, 0x2
    bl fn_8011BF3C
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x1014
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x101c(r30)
lbl_fn_8036D2D0_00000640:
    li r0, 0x1
    stw r0, 0x10cc(r30)
    li r4, 0x1
    stw r31, 0x56d4(r30)
    lwz r3, lbl_8087F8A0
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F408
    bl fn_800D246C
    lwz r3, lbl_8087F408
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8036D2D0_00000A34
lbl_fn_8036D2D0_00000688:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8036D2D0_00000A34
    lwz r0, 0x560(r31)
    cmpwi r0, 0xe
    bne lbl_fn_8036D2D0_00000A34
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8036D2D0_00000A34
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808857A8
    fcmpo cr0, f3, f0
    bge lbl_fn_8036D2D0_00000A34
    lwz r3, 0x638(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_00000A34
    lwz r3, 0xb0(r3)
    bl fn_800EFB78
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8036D2D0_00000A34
    addi r3, r3, 0x34
    bl fn_804786F8
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_00000A34
    mr r5, r31
    addi r3, r30, 0xd18
    addi r6, r31, 0x528
    li r4, 0x3
    bl fn_80378610
    addi r3, r29, 0x3c
    bl fn_804786F8
    mr r28, r3
    addi r3, r29, 0x34
    bl fn_804786F8
    mr r4, r3
    mr r5, r28
    addi r3, r30, 0xd18
    bl fn_8037C690
    addi r3, r30, 0xd18
    li r4, 0x0
    bl fn_803786FC
    lfs f0, 0x2e4(r31)
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0x1070(r30)
    lwz r4, 0xf80(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8036D2D0_0000077C
    lwz r12, 0x0(r4)
    addi r3, r1, 0x8
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x1014
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x101c(r30)
lbl_fn_8036D2D0_0000077C:
    lwz r3, 0xd1c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_0000079C
    lwz r12, 0x0(r3)
    lwz r12, 0xdc(r12)
    mtctr r12
    bctrl
    stfs f1, 0x10c4(r30)
lbl_fn_8036D2D0_0000079C:
    li r0, 0x1
    stw r0, 0x10cc(r30)
    li r4, 0x1
    stw r31, 0x56d4(r30)
    lwz r3, lbl_8087F8A0
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F408
    bl fn_800D246C
    lwz r3, lbl_8087F408
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8036D2D0_00000A34
lbl_fn_8036D2D0_000007E4:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8036D2D0_00000A34
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1e
    bne lbl_fn_8036D2D0_00000A34
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8036D2D0_00000A34
    lwz r3, lbl_8087F0A8
    lfs f3, lbl_808857A8
    lfs f0, 0x2bc(r3)
    lfs f4, 0x2e4(r31)
    fadds f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_8036D2D0_00000A34
    lwz r3, 0x638(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_00000A34
    lwz r3, 0xb0(r3)
    bl fn_800EFB78
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8036D2D0_00000A34
    addi r3, r3, 0x34
    bl fn_804786F8
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_00000A34
    mr r5, r31
    addi r3, r30, 0xd18
    addi r6, r31, 0x528
    li r4, 0x2
    bl fn_80378610
    addi r3, r28, 0x3c
    bl fn_804786F8
    mr r29, r3
    addi r3, r28, 0x34
    bl fn_804786F8
    mr r4, r3
    mr r5, r29
    addi r3, r30, 0xd18
    bl fn_8037C690
    addi r3, r30, 0xd18
    li r4, 0x0
    bl fn_803786FC
    lfs f0, 0x2e4(r31)
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0x1070(r30)
    lwz r4, 0xd1c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8036D2D0_00000968
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8036D2D0_00000968
    lwz r12, 0x0(r4)
    addi r3, r1, 0x38
    lfs f1, 0x538(r31)
    lwz r12, 0xd0(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r30, 0x1014
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r28, 0x3c
    stfs f2, 0x101c(r30)
    bl fn_804786F8
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_000009D4
    lwz r3, 0xd1c(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xd4(r12)
    mtctr r12
    bctrl
    stfs f1, 0x10c4(r30)
    addi r3, r1, 0x2c
    lwz r4, 0xd1c(r31)
    lfs f3, 0x530(r31)
    lfs f0, 0x530(r4)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x528(r31)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F9940
    lfs f0, lbl_808857AC
    fmuls f0, f0, f1
    stfs f0, 0x10c8(r30)
    b lbl_fn_8036D2D0_000009D4
lbl_fn_8036D2D0_00000968:
    addi r4, r31, 0xf6c
    lfs f2, 0xf74(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r30, 0x1014
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r28, 0x3c
    stfs f2, 0x101c(r30)
    bl fn_804786F8
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_000009D4
    lfs f3, 0x530(r31)
    addi r3, r1, 0x20
    lfs f0, 0xf74(r31)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0xf70(r31)
    lfs f3, 0x528(r31)
    lfs f0, 0xf6c(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9940
    lfs f0, lbl_808857AC
    fmuls f0, f0, f1
    stfs f0, 0x10c8(r30)
lbl_fn_8036D2D0_000009D4:
    cmpwi r27, 0x1
    beq lbl_fn_8036D2D0_000009E4
    cmpwi r27, 0x5
    bne lbl_fn_8036D2D0_000009F0
lbl_fn_8036D2D0_000009E4:
    li r0, 0x0
    stw r0, 0x10cc(r30)
    b lbl_fn_8036D2D0_000009F8
lbl_fn_8036D2D0_000009F0:
    li r0, 0x1
    stw r0, 0x10cc(r30)
lbl_fn_8036D2D0_000009F8:
    stw r31, 0x56d4(r30)
    li r4, 0x1
    lwz r3, lbl_8087F8A0
    bl fn_800D246C
    cmpwi r27, 0x4
    beq lbl_fn_8036D2D0_00000A18
    cmpwi r27, 0x6
    bne lbl_fn_8036D2D0_00000A28
lbl_fn_8036D2D0_00000A18:
    lwz r3, lbl_8087F8A0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036D2D0_00000A28:
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8036D2D0_00000A34:
    lwz r4, 0x56d4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8036D2D0_00000AE4
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_00000A60
    lwz r6, 0x638(r4)
    li r4, 0x2
    li r5, 0x0
    lwz r6, 0x4(r6)
    bl fn_803E598C
lbl_fn_8036D2D0_00000A60:
    lwz r3, lbl_8087F890
    li r31, 0x1
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F9E8
    stw r31, 0x2928(r3)
    lwz r3, 0x10d8(r30)
    lwz r3, 0x134(r3)
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    lwz r27, 0x48(r3)
    cmpwi r27, 0x0
    beq lbl_fn_8036D2D0_00000AE4
    lwz r0, 0x12a4(r27)
    li r3, 0x0
    srwi. r0, r0, 31
    beq lbl_fn_8036D2D0_00000ABC
    lwz r0, 0xc48(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8036D2D0_00000ABC
    mr r3, r31
lbl_fn_8036D2D0_00000ABC:
    cmpwi r3, 0x0
    beq lbl_fn_8036D2D0_00000ACC
    mr r3, r27
    bl fn_80154344
lbl_fn_8036D2D0_00000ACC:
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8036D2D0_00000AE4
    mr r3, r27
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8036D2D0_00000AE4:
    li r0, 0x0
    stw r0, 0x56d8(r30)
lbl_fn_8036D2D0_00000AEC:
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8036DAA8(void)
{
    nofralloc
    lwz r0, 0x56d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8036DAA8_00000B28
    lwz r0, 0x56d4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8036DAA8_00000B28
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036DAA8_00000B30
lbl_fn_8036DAA8_00000B28:
    li r3, 0x0
    blr
lbl_fn_8036DAA8_00000B30:
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036DAA8_00000B44
    li r3, 0x0
    blr
lbl_fn_8036DAA8_00000B44:
    stw r4, 0x56d8(r3)
    li r3, 0x1
    blr
}

asm void fn_8036DAF4(void)
{
    nofralloc
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8036DAF4_00000B64
    li r3, 0x0
    blr
lbl_fn_8036DAF4_00000B64:
    lwz r0, 0x12a4(r5)
    srwi. r0, r0, 31
    beq lbl_fn_8036DAF4_00000B78
    li r3, 0x0
    blr
lbl_fn_8036DAF4_00000B78:
    b fn_803CB044
    blr
}

asm void fn_8036DB24(void)
{
    nofralloc
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036DB24_00000B90
    b fn_803CB474
lbl_fn_8036DB24_00000B90:
    li r3, 0x0
    blr
}

asm void fn_8036DB3C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8036DB3C_00000BC8
    li r3, 0x0
    b lbl_fn_8036DB3C_00000C04
lbl_fn_8036DB3C_00000BC8:
    mr r5, r6
    addi r4, r1, 0x8
    bl fn_803CB618
    cmpwi r3, 0x0
    beq lbl_fn_8036DB3C_00000C00
    lwz r0, 0x40(r1)
    addi r4, r1, 0x20
    stw r0, 0x0(r31)
    li r3, 0x1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_8036DB3C_00000C04
lbl_fn_8036DB3C_00000C00:
    li r3, 0x0
lbl_fn_8036DB3C_00000C04:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8036DBC0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r3
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8036DBC0_00000C64
    li r3, 0x0
    b lbl_fn_8036DBC0_00000E04
lbl_fn_8036DBC0_00000C64:
    mr r3, r0
    bl fn_803CB820
    cmpwi r3, 0x0
    beq lbl_fn_8036DBC0_00000C7C
    li r3, 0x1
    b lbl_fn_8036DBC0_00000E04
lbl_fn_8036DBC0_00000C7C:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8036DBC0_00000C90
    li r3, 0x0
    b lbl_fn_8036DBC0_00000E04
lbl_fn_8036DBC0_00000C90:
    mr r3, r30
    bl fn_805F9920
    lwz r3, 0x48(r31)
    li r4, 0x0
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_8036DBC0_00000CB8
    cmpwi r3, 0x4
    beq lbl_fn_8036DBC0_00000CB8
    li r0, 0x0
lbl_fn_8036DBC0_00000CB8:
    cmpwi r0, 0x0
    beq lbl_fn_8036DBC0_00000CD8
    lwz r3, 0x5744(r29)
    lwz r0, 0x80(r31)
    add r0, r3, r0
    clrlwi. r0, r0, 30
    bne lbl_fn_8036DBC0_00000CD8
    li r4, 0x1
lbl_fn_8036DBC0_00000CD8:
    cmpwi r4, 0x0
    beq lbl_fn_8036DBC0_00000CE8
    lfs f0, lbl_808857B4
    b lbl_fn_8036DBC0_00000CEC
lbl_fn_8036DBC0_00000CE8:
    lfs f0, lbl_808857B0
lbl_fn_8036DBC0_00000CEC:
    fcmpo cr0, f1, f0
    ble lbl_fn_8036DBC0_00000E00
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_8036DBC0_00000E00
    lwz r3, lbl_8087F4A0
    lfs f31, lbl_808857B8
    lwz r30, 0x48(r3)
    b lbl_fn_8036DBC0_00000DF8
lbl_fn_8036DBC0_00000D10:
    lwz r3, 0x50(r30)
    subi r0, r3, 0x1e
    cmplwi r0, 0x1
    bgt lbl_fn_8036DBC0_00000DF4
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036DBC0_00000DF4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8036DBC0_00000DF4
    lfs f1, 0x74(r30)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f3, 0x70(r30)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x6c(r30)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fmr f30, f1
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
    fcmpo cr0, f30, f31
    bge lbl_fn_8036DBC0_00000DF4
    lfs f0, lbl_8088570C
    li r5, 0x0
    li r0, 0x3
    stw r5, 0x1c(r1)
    mr r3, r30
    addi r4, r1, 0x18
    stw r5, 0x20(r1)
    stw r5, 0x24(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stw r0, 0x18(r1)
    stw r31, 0x28(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x0
    bl fn_8016D0A0
    li r3, 0x1
    b lbl_fn_8036DBC0_00000E04
lbl_fn_8036DBC0_00000DF4:
    lwz r30, 0x5c(r30)
lbl_fn_8036DBC0_00000DF8:
    cmpwi r30, 0x0
    bne lbl_fn_8036DBC0_00000D10
lbl_fn_8036DBC0_00000E00:
    li r3, 0x0
lbl_fn_8036DBC0_00000E04:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8036DDD4(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lfs f1, lbl_8088570C
    li r4, 0x79
    stw r0, 0xc4(r1)
    addi r3, r1, 0x20
    lfs f0, lbl_80885708
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    lwz r5, lbl_8087F8A0
    lwz r31, 0x48(r5)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lwz r3, lbl_8087F428
    bl fn_8036554C
    lis r4, lbl_8074DBE8@ha
    lfs f28, lbl_80885708
    lfd f27, lbl_8074DBE8@l(r4)
    mr r30, r3
    lfs f30, lbl_808857BC
    lis r29, 0x4330
    lfs f31, lbl_808857B4
    b lbl_fn_8036DDD4_000010A0
lbl_fn_8036DDD4_00000ED8:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036DDD4_0000109C
    lwz r0, 0xf50(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8036DDD4_0000109C
    mr r3, r30
    bl fn_80175AEC
    cmpwi r3, 0x0
    bne lbl_fn_8036DDD4_0000109C
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8036DDD4_00000F24
    mr r3, r30
    bl fn_8015EB2C
    cmpwi r3, 0x0
    beq lbl_fn_8036DDD4_0000109C
lbl_fn_8036DDD4_00000F24:
    lwz r0, 0x7e0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8036DDD4_00001004
    lwz r0, 0x940(r30)
    stw r29, 0x50(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0x7d8(r30)
    stw r0, 0x54(r1)
    lfd f1, 0x50(r1)
    fsubs f1, f1, f27
    fdivs f0, f0, f1
    fcmpo cr0, f0, f28
    blt lbl_fn_8036DDD4_00001004
    lwz r0, 0x7f0(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8036DDD4_00001004
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xf4(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8036DDD4_0000109C
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036DDD4_00000FAC
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8036DDD4_00000FAC
    li r5, 0x1
lbl_fn_8036DDD4_00000FAC:
    cmpwi r5, 0x0
    beq lbl_fn_8036DDD4_00000FC8
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8036DDD4_00000FC8
    li r3, 0x1
lbl_fn_8036DDD4_00000FC8:
    cmpwi r3, 0x0
    beq lbl_fn_8036DDD4_00000FFC
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8036DDD4_00000FF0
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_8036DDD4_00000FF0
    li r3, 0x1
lbl_fn_8036DDD4_00000FF0:
    cmpwi r3, 0x0
    bne lbl_fn_8036DDD4_00000FFC
    li r4, 0x1
lbl_fn_8036DDD4_00000FFC:
    cmpwi r4, 0x0
    beq lbl_fn_8036DDD4_0000109C
lbl_fn_8036DDD4_00001004:
    lfs f1, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r30)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fmr f29, f1
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
    lwz r3, lbl_8087F0A8
    lfs f0, lbl_80885728
    lwz r0, 0x320(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036DDD4_00001064
    fmuls f0, f0, f30
lbl_fn_8036DDD4_00001064:
    fmuls f0, f0, f0
    li r28, 0x0
    fcmpo cr0, f29, f0
    bge lbl_fn_8036DDD4_0000108C
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_805F9990
    fcmpo cr0, f1, f31
    ble lbl_fn_8036DDD4_0000108C
    li r28, 0x1
lbl_fn_8036DDD4_0000108C:
    cmpwi r28, 0x0
    beq lbl_fn_8036DDD4_0000109C
    mr r3, r30
    b lbl_fn_8036DDD4_000010AC
lbl_fn_8036DDD4_0000109C:
    lwz r30, 0x14ac(r30)
lbl_fn_8036DDD4_000010A0:
    cmpwi r30, 0x0
    bne lbl_fn_8036DDD4_00000ED8
    li r3, 0x0
lbl_fn_8036DDD4_000010AC:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8036E098(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r6, 0x1160(r3)
    li r4, 0x79
    stw r0, 0x64(r1)
    addi r3, r1, 0x18
    subi r0, r6, 0x1
    lfs f1, lbl_8088570C
    stw r31, 0x5c(r1)
    cntlzw r0, r0
    lfs f0, lbl_80885708
    stw r30, 0x58(r1)
    srwi r30, r0, 5
    stw r29, 0x54(r1)
    lwz r5, lbl_8087F8A0
    lwz r31, 0x48(r5)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    lwz r3, lbl_8087F4A0
    lwz r29, 0x48(r3)
    b lbl_fn_8036E098_000011A4
lbl_fn_8036E098_00001164:
    lwz r0, 0xe8(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8036E098_000011A0
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r6, r30
    addi r4, r31, 0x528
    lwz r12, 0x48(r12)
    addi r5, r1, 0x8
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8036E098_000011A0
    mr r3, r29
    b lbl_fn_8036E098_000011B0
lbl_fn_8036E098_000011A0:
    lwz r29, 0x5c(r29)
lbl_fn_8036E098_000011A4:
    cmpwi r29, 0x0
    bne lbl_fn_8036E098_00001164
    li r3, 0x0
lbl_fn_8036E098_000011B0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8036E170(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036E170_000012AC
    cmpwi r0, 0xe
    beq lbl_fn_8036E170_000012AC
    cmpwi r0, 0x3
    beq lbl_fn_8036E170_00001208
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001208:
    lwz r4, lbl_8087F9C8
    cmpwi r4, 0x0
    beq lbl_fn_8036E170_0000122C
    addis r4, r4, 0x2
    lwz r0, 0x5b40(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8036E170_0000122C
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_0000122C:
    lwz r4, lbl_8087F9E0
    cmpwi r4, 0x0
    beq lbl_fn_8036E170_00001250
    addis r4, r4, 0x2
    lwz r0, 0x5b40(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8036E170_00001250
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001250:
    lwz r4, lbl_8087F9D0
    cmpwi r4, 0x0
    beq lbl_fn_8036E170_00001274
    addis r4, r4, 0x2
    lwz r0, 0x5b40(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8036E170_00001274
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001274:
    lwz r4, lbl_8087F9D8
    cmpwi r4, 0x0
    beq lbl_fn_8036E170_00001298
    addis r4, r4, 0x2
    lwz r0, 0x5b40(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8036E170_00001298
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001298:
    lwz r0, lbl_8087F508
    cmpwi r0, 0x0
    beq lbl_fn_8036E170_000012AC
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_000012AC:
    lwz r3, 0x5620(r3)
    lwz r6, 0x48(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8036E170_000012E4
    lwz r4, 0x58(r3)
    lwz r0, 0x54(r3)
    lwz r5, 0x4c(r3)
    add r0, r4, r0
    xor r0, r5, r0
    srawi r4, r0, 1
    and r0, r0, r5
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8036E170_000012E8
lbl_fn_8036E170_000012E4:
    li r0, 0x1
lbl_fn_8036E170_000012E8:
    cmpwi r0, 0x0
    bne lbl_fn_8036E170_000012F8
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_000012F8:
    cmpwi r3, 0x0
    beq lbl_fn_8036E170_0000131C
    cmpwi r6, 0x0
    beq lbl_fn_8036E170_0000131C
    bl fn_8006A204
    cmpwi r3, 0x0
    bne lbl_fn_8036E170_0000131C
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_0000131C:
    lwz r3, lbl_8087F540
    bl fn_80481668
    cmpwi r3, 0x0
    beq lbl_fn_8036E170_00001334
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001334:
    lwz r0, 0x1294(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8036E170_0000134C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8036E170_00001354
lbl_fn_8036E170_0000134C:
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001354:
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036E170_00001378
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036E170_00001378
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001378:
    lwz r0, 0x56d4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8036E170_00001390
    lwz r0, 0x56d8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8036E170_00001398
lbl_fn_8036E170_00001390:
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001398:
    lwz r0, 0x54e4(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8036E170_00001418
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    mr r3, r30
    bl fn_8017C974
    cmpwi r3, 0x0
    bne lbl_fn_8036E170_000013C8
    lwz r0, 0x5760(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8036E170_000013D0
lbl_fn_8036E170_000013C8:
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_000013D0:
    lfs f1, 0x568(r30)
    lfs f0, lbl_808857C0
    fcmpo cr0, f1, f0
    bge lbl_fn_8036E170_000013E8
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_000013E8:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x1
    beq lbl_fn_8036E170_00001418
    cmpwi r0, 0x6
    bne lbl_fn_8036E170_00001410
    lwz r0, 0x560(r30)
    cmpwi r0, 0x4
    beq lbl_fn_8036E170_00001418
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001410:
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001418:
    lwz r3, 0x10d8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8036E170_00001444
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036E170_00001444
    lwz r0, 0xe8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8036E170_00001444
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001444:
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_8036E170_00001468
    addi r4, r1, 0x8
    bl fn_800A4228
    cmpwi r3, 0x0
    beq lbl_fn_8036E170_00001468
    li r3, 0x0
    b lbl_fn_8036E170_0000146C
lbl_fn_8036E170_00001468:
    li r3, 0x1
lbl_fn_8036E170_0000146C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8036E428(void)
{
    nofralloc
    lwz r3, 0x263c(r3)
    blr
}

asm void fn_8036E430(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x12
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x5624(r3)
    stw r0, 0x78(r6)
    lwz r3, 0x5624(r3)
    bl fn_8006A900
    li r0, 0x1
    stw r0, 0x5684(r29)
    stw r30, 0x5688(r29)
    stw r31, 0x568c(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8036E494(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, 0x2
    li r8, -0x1
    stw r0, 0x34(r1)
    subi r6, r4, 0x7960
    lis r7, 0xff00
    lfs f0, lbl_80885750
    stw r31, 0x2c(r1)
    li r0, 0x1
    mr r31, r3
    stw r30, 0x28(r1)
    li r30, 0x0
    lwz r5, 0x5624(r3)
    stw r30, 0x4c(r5)
    li r5, 0xf
    lwz r4, 0x5624(r3)
    stw r8, 0x6c(r4)
    lwz r4, 0x5624(r3)
    stw r7, 0x70(r4)
    lwz r4, 0x5624(r3)
    stw r30, 0x58(r4)
    lwz r4, 0x5624(r3)
    stw r6, 0x5c(r4)
    lwz r4, 0x5624(r3)
    stw r5, 0x54(r4)
    lwz r4, 0x5624(r3)
    stfs f0, 0x74(r4)
    lwz r4, 0x5624(r3)
    stw r0, 0x48(r4)
    lwz r3, 0x5590(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8036E494_00001590
    li r4, 0x1
    bl fn_80570A18
    lwz r3, 0x5590(r31)
    li r4, 0x1
    bl fn_80570A44
    stw r30, 0x5594(r31)
    stw r30, 0x55a4(r31)
lbl_fn_8036E494_00001590:
    lwz r3, 0x558c(r31)
    bl fn_8056B3D8
    li r0, -0x1
    li r3, 0x0
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    lwz r0, 0x5688(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8036E494_000015C4
    stw r0, 0x8(r1)
lbl_fn_8036E494_000015C4:
    lwz r0, 0x568c(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8036E494_00001604
    lwz r3, 0x8(r1)
    cmpwi r3, 0x2
    beq lbl_fn_8036E494_000015F0
    cmpwi r3, 0x5
    beq lbl_fn_8036E494_000015F8
    cmpwi r3, 0x4
    beq lbl_fn_8036E494_00001600
    b lbl_fn_8036E494_00001604
lbl_fn_8036E494_000015F0:
    stw r0, 0xc(r1)
    b lbl_fn_8036E494_00001604
lbl_fn_8036E494_000015F8:
    stw r0, 0x10(r1)
    b lbl_fn_8036E494_00001604
lbl_fn_8036E494_00001600:
    stw r0, 0x18(r1)
lbl_fn_8036E494_00001604:
    mr r3, r31
    li r4, 0x1
    bl fn_8036EA6C
    lwz r3, 0x567c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8036E494_00001634
    lwz r0, 0x38(r3)
    addi r4, r1, 0x8
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x567c(r31)
    bl fn_8052C10C
lbl_fn_8036E494_00001634:
    lwz r3, lbl_8087EFE8
    li r31, 0x1
    li r4, 0x8
    stw r31, 0x34b4(r3)
    lwz r3, lbl_8087EE90
    bl fn_8004A1D4
    lwz r4, lbl_8087F418
    li r0, 0x4
    lwz r3, 0x6c(r4)
    stw r3, 0x70(r4)
    stw r0, 0x6c(r4)
    lwz r3, lbl_8087F3C0
    stw r31, 0xd0(r3)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8036E624(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x5590(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036E624_000016B8
    mr r3, r0
    li r4, 0x0
    bl fn_80570A18
    lwz r3, 0x5590(r31)
    li r4, 0x0
    bl fn_80570A44
lbl_fn_8036E624_000016B8:
    lwz r3, 0x558c(r31)
    bl fn_8056BD38
    mr r3, r31
    bl fn_8036EE0C
    lwz r3, 0x567c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8036E624_000016E0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036E624_000016E0:
    lwz r3, lbl_8087EFE8
    li r31, 0x0
    stw r31, 0x34b4(r3)
    lwz r3, lbl_8087EE90
    lwz r4, 0x8c0(r3)
    bl fn_8004A1D4
    lwz r4, lbl_8087F418
    li r0, 0x1
    lwz r3, 0x6c(r4)
    stw r3, 0x70(r4)
    stw r0, 0x6c(r4)
    lwz r3, lbl_8087F480
    bl fn_803CE070
    lwz r3, lbl_8087F3C0
    stw r31, 0xd0(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036E6D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8036E6D4_0000177C
    mr r3, r0
    li r4, 0x394
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_8036E6D4_0000177C:
    mr r3, r28
    li r4, 0x3
    bl fn_8036EA6C
    cmpwi r29, 0x0
    beq lbl_fn_8036E6D4_000017AC
    cmpwi r29, 0x1
    beq lbl_fn_8036E6D4_000017C4
    cmpwi r29, 0x4
    beq lbl_fn_8036E6D4_000017DC
    cmpwi r29, 0x2
    beq lbl_fn_8036E6D4_000017F4
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_000017AC:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80584FE8
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_000017C4:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80584FE8
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_000017DC:
    mr r3, r28
    mr r5, r30
    mr r6, r31
    li r4, 0x4
    bl fn_80584FE8
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_000017F4:
    cmpwi r30, 0x0
    bne lbl_fn_8036E6D4_00001810
    mr r3, r28
    mr r4, r30
    mr r5, r31
    bl fn_80588688
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_00001810:
    cmpwi r30, 0x1
    bne lbl_fn_8036E6D4_00001830
    mr r3, r28
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    bl fn_8058ABF8
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_00001830:
    cmpwi r30, 0x2
    bne lbl_fn_8036E6D4_0000184C
    mr r3, r28
    mr r4, r30
    mr r5, r31
    bl fn_80586DB4
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_0000184C:
    cmpwi r30, 0x3
    bne lbl_fn_8036E6D4_0000186C
    mr r3, r28
    mr r4, r30
    mr r5, r31
    li r6, 0x1
    bl fn_8058ABF8
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_0000186C:
    cmpwi r30, 0x4
    bne lbl_fn_8036E6D4_0000188C
    mr r3, r28
    mr r4, r30
    mr r5, r31
    li r6, 0x2
    bl fn_8058ABF8
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_0000188C:
    cmpwi r30, 0x5
    bne lbl_fn_8036E6D4_000018AC
    mr r3, r28
    mr r4, r30
    mr r5, r31
    li r6, 0x3
    bl fn_8058ABF8
    b lbl_fn_8036E6D4_000018BC
lbl_fn_8036E6D4_000018AC:
    mr r3, r28
    mr r4, r30
    mr r5, r31
    bl fn_80588688
lbl_fn_8036E6D4_000018BC:
    lwz r3, lbl_8087F540
    bl fn_80481654
    cmpwi r3, 0x0
    beq lbl_fn_8036E6D4_000018D8
    lwz r3, lbl_8087F540
    li r4, 0x1
    bl fn_8048169C
lbl_fn_8036E6D4_000018D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8036E89C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8036E89C_0000192C
    mr r3, r0
    li r4, 0x394
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
lbl_fn_8036E89C_0000192C:
    mr r3, r31
    bl fn_8036EE0C
    lwz r3, lbl_8087F9C8
    cmpwi r3, 0x0
    beq lbl_fn_8036E89C_00001944
    bl fn_800D2338
lbl_fn_8036E89C_00001944:
    lwz r3, lbl_8087F9E0
    cmpwi r3, 0x0
    beq lbl_fn_8036E89C_00001954
    bl fn_800D2338
lbl_fn_8036E89C_00001954:
    lwz r3, lbl_8087F9D0
    cmpwi r3, 0x0
    beq lbl_fn_8036E89C_00001964
    bl fn_800D2338
lbl_fn_8036E89C_00001964:
    lwz r3, lbl_8087F9D8
    cmpwi r3, 0x0
    beq lbl_fn_8036E89C_00001974
    bl fn_800D2338
lbl_fn_8036E89C_00001974:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
