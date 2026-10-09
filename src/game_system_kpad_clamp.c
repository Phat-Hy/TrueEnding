#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A8(void);
extern void fn_8000D430(void);
extern void fn_8000DD0C(void);
extern void fn_8001047C(void);
extern void fn_800109E0(void);
extern void fn_80011410(void);
extern void fn_800133B0(void);
extern void fn_80013410(void);
extern void fn_80043D58(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_80057A68(void);
extern void fn_80097C08(void);
extern void fn_80097E80(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5B4(void);
extern void fn_800CB5C8(void);
extern void fn_800CFA28(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800E0AA8(void);
extern void fn_800EC204(void);
extern void fn_800EFE3C(void);
extern void fn_800F52F0(void);
extern void fn_800F72CC(void);
extern void fn_800F7F90(void);
extern void fn_800F7FA0(void);
extern void fn_800F80A8(void);
extern void fn_801011B8(void);
extern void fn_8010129C(void);
extern void fn_8010AB34(void);
extern void fn_8010F6FC(void);
extern void fn_80129A48(void);
extern void fn_80129A6C(void);
extern void fn_8012A1B8(void);
extern void fn_8012D8B8(void);
extern void fn_801370B8(void);
extern void fn_80139F24(void);
extern void fn_80139F3C(void);
extern void fn_8013A13C(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_8013C3A8(void);
extern void fn_8013C554(void);
extern void fn_801404F8(void);
extern void fn_801479D8(void);
extern void fn_80148B38(void);
extern void fn_8014DEE4(void);
extern void fn_80151210(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_801750FC(void);
extern void fn_80178A6C(void);
extern void fn_801C0738(void);
extern void fn_801FECE0(void);
extern void fn_8021A984(void);
extern void fn_802328DC(void);
extern void fn_8023A60C(void);
extern void fn_8023A614(void);
extern void fn_80244674(void);
extern void fn_80244CAC(void);
extern void fn_80244FC0(void);
extern void fn_80267B20(void);
extern void fn_802A4170(void);
extern void fn_802A4184(void);
extern void fn_802F0990(void);
extern void fn_80316E38(void);
extern void fn_80317034(void);
extern void fn_80318F90(void);
extern void fn_80356FFC(void);
extern void fn_80357F38(void);
extern void fn_8036635C(void);
extern void fn_80366D40(void);
extern void fn_80366DA4(void);
extern void fn_80366DAC(void);
extern void fn_80366DF8(void);
extern void fn_80366E00(void);
extern void fn_80366E08(void);
extern void fn_8036B438(void);
extern void fn_8036E428(void);
extern void fn_8036EE04(void);
extern void fn_80371664(void);
extern void fn_80376324(void);
extern void fn_80378610(void);
extern void fn_8037865C(void);
extern void fn_803786F0(void);
extern void fn_803786FC(void);
extern void fn_80378CCC(void);
extern void fn_803792F0(void);
extern void fn_8037C690(void);
extern void fn_8037D49C(void);
extern void fn_8037F744(void);
extern void fn_803B57B0(void);
extern void fn_803B6C88(void);
extern void fn_803E4478(void);
extern void fn_803E4950(void);
extern void fn_803EE514(void);
extern void fn_803EE560(void);
extern void fn_8044D028(void);
extern void fn_804786F8(void);
extern void fn_804A2FBC(void);
extern void fn_804DA3F8(void);
extern void fn_8054E520(void);
extern void fn_8056BD38(void);
extern void fn_8056D8CC(void);
extern void fn_8056F5B8(void);
extern void fn_80570258(void);
extern void fn_805704B0(void);
extern void fn_80570A18(void);
extern void fn_80570A44(void);
extern void fn_8059C330(void);
extern void fn_8059D17C(void);
extern void fn_8059D26C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);

/* External data declarations */
extern u8 lbl_8074DA10[];
extern u8 lbl_8074DBE8[];
extern u8 lbl_8074DBF8[];
extern u8 lbl_8074DC1C[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE78;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F448;
extern u32 lbl_8087F488;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80885708;
extern u32 lbl_8088570C;
extern u32 lbl_8088571C;
extern u32 lbl_8088572C;
extern u32 lbl_80885748;
extern u32 lbl_8088574C;
extern u32 lbl_80885760;
extern u32 lbl_8088579C;
extern u32 lbl_808857B4;
extern u32 lbl_808857CC;
extern u32 lbl_808857D0;
extern u32 lbl_808857D4;
extern u32 lbl_808857D8;
extern u32 lbl_808857DC;
extern u32 lbl_808857E0;
extern u32 lbl_808857E4;
extern u32 lbl_808857E8;
extern u32 lbl_808857EC;

/* Function declarations */
void fn_80372574(void);
void fn_8037257C(void);
void fn_80372754(void);
void fn_803727D4(void);
void fn_803727DC(void);
void fn_803729B4(void);
void fn_80373084(void);
void fn_8037308C(void);
void fn_80373094(void);
void fn_8037309C(void);
void fn_80373100(void);
void fn_80373108(void);
void fn_80373118(void);
void fn_80373148(void);
void fn_80373164(void);
void fn_803731E8(void);
void fn_803737C0(void);
void fn_80373AE8(void);

asm void fn_80372574(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_8037257C(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    lfs f7, lbl_8088570C
    stw r0, 0x1a4(r1)
    lfs f1, 0x4(r4)
    stw r31, 0x19c(r1)
    addi r31, r1, 0x128
    lfs f0, lbl_80885708
    fcmpu cr0, f7, f1
    stw r30, 0x198(r1)
    mr r30, r4
    stw r29, 0x194(r1)
    mr r29, r3
    stfs f7, 0x154(r1)
    stfs f7, 0x14c(r1)
    stfs f7, 0x148(r1)
    stfs f7, 0x144(r1)
    stfs f7, 0x140(r1)
    stfs f7, 0x138(r1)
    stfs f7, 0x134(r1)
    stfs f7, 0x130(r1)
    stfs f7, 0x12c(r1)
    stfs f0, 0x150(r1)
    stfs f0, 0x13c(r1)
    stfs f0, 0x128(r1)
    beq lbl_fn_8037257C_000000C0
    addi r3, r1, 0x38
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x38
    addi r5, r1, 0x8
    bl fn_805F89F0
    addi r3, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8037257C_000000C0:
    lfs f0, lbl_8088570C
    lfs f1, 0x0(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8037257C_00000120
    addi r3, r1, 0x98
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x98
    addi r5, r1, 0x68
    bl fn_805F89F0
    addi r3, r1, 0x68
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8037257C_00000120:
    lfs f0, lbl_8088570C
    lfs f1, 0x8(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8037257C_00000180
    addi r3, r1, 0xf8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xf8
    addi r5, r1, 0xc8
    bl fn_805F89F0
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8037257C_00000180:
    mr r3, r29
    mr r4, r31
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80372754(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f1, 0x0(r4)
    stw r0, 0x74(r1)
    lfs f2, 0x4(r4)
    stw r31, 0x6c(r1)
    mr r31, r3
    lfs f3, 0x8(r4)
    addi r3, r1, 0x8
    bl fn_805F9160
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803727D4(void)
{
    nofralloc
    addi r3, r3, 0x540
    blr
}

asm void fn_803727DC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r4, 0x5590(r3)
    stw r0, 0x54e4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803727DC_000002A8
    mr r3, r4
    li r4, 0x0
    bl fn_80570A18
    lwz r3, 0x5590(r31)
    li r4, 0x0
    bl fn_80570A44
lbl_fn_803727DC_000002A8:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803727DC_000002C0
    lwz r3, 0x558c(r31)
    bl fn_8056BD38
lbl_fn_803727DC_000002C0:
    lwz r7, lbl_8087EFA8
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r3, 0x244(r7)
    lwz r6, 0x248(r7)
    lfs f3, 0x24c(r7)
    lfs f2, 0x250(r7)
    lwz r5, 0x254(r7)
    lwz r4, 0x258(r7)
    lfs f1, 0x25c(r7)
    lfs f0, 0x260(r7)
    stw r3, 0xc(r1)
    stw r0, 0x240(r7)
    stw r3, 0x244(r7)
    stw r6, 0x248(r7)
    stfs f3, 0x24c(r7)
    stfs f2, 0x250(r7)
    stw r5, 0x254(r7)
    stw r4, 0x258(r7)
    stfs f1, 0x25c(r7)
    stfs f0, 0x260(r7)
    lwz r3, lbl_8087F0A8
    stw r6, 0x10(r1)
    lwz r0, 0xd0(r3)
    stfs f3, 0x14(r1)
    cmpwi r0, 0x1
    stfs f2, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bne lbl_fn_803727DC_00000350
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    bl fn_800D246C
    b lbl_fn_803727DC_00000360
lbl_fn_803727DC_00000350:
    lwz r3, lbl_8087F8A0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803727DC_00000360:
    lwz r3, lbl_8087F428
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x10d8(r31)
    bl fn_800D246C
    lwz r3, lbl_8087F580
    bl fn_804A2FBC
    lwz r3, lbl_8087F4F0
    bl fn_8044D028
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    lwz r0, -0x20d0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803727DC_000003C0
    li r0, 0x0
    stw r0, -0x20d0(r3)
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    stw r0, -0x2040(r3)
lbl_fn_803727DC_000003C0:
    lwz r3, lbl_8087F490
    lwz r0, 0xd8c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803727DC_0000042C
    lwz r0, 0x1420(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803727DC_0000042C
    addi r3, r31, 0x6c
    bl fn_8037F744
    lwz r0, 0x56f4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803727DC_00000424
    lwz r0, 0x5718(r31)
    mr r3, r31
    slwi r0, r0, 2
    add r4, r31, r0
    lwz r4, 0x56f8(r4)
    bl fn_80376324
    lwz r4, 0x5718(r31)
    lwz r3, 0x56f4(r31)
    addi r0, r4, 0x1
    clrlwi r4, r0, 29
    stw r4, 0x5718(r31)
    subi r0, r3, 0x1
    stw r0, 0x56f4(r31)
lbl_fn_803727DC_00000424:
    lwz r3, lbl_8087F490
    bl fn_803E4478
lbl_fn_803727DC_0000042C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803729B4(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x1f0
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    stfd f28, 0x1f0(r1)
    psq_st f28, 0x1f8(r1), 0, 0
    bl _savegpr_26
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r4
    beq lbl_fn_803729B4_00000AD8
    bl fn_8013A194
    bl fn_801011B8
    bl fn_80356FFC
    li r4, 0x0
    bl fn_8059C330
    bl fn_800F7FA0
    li r4, 0x1
    bl fn_800D246C
    bl fn_800F7FA0
    li r4, 0x1
    bl fn_80373084
    bl fn_800F7FA0
    li r4, 0x0
    bl fn_8023A60C
    bl fn_800F7FA0
    li r4, 0x2
    bl fn_8023A60C
    bl fn_800F7FA0
    li r4, 0x3
    bl fn_8023A60C
    bl fn_800F7FA0
    li r4, 0x5
    bl fn_8023A60C
    lis r4, 0x2
    lwz r3, 0x10d8(r30)
    subi r4, r4, 0x7969
    bl fn_800EC204
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_803729B4_00000504
    addi r3, r3, 0x4
    b lbl_fn_803729B4_0000050C
lbl_fn_803729B4_00000504:
    mr r3, r31
    bl fn_8013C38C
lbl_fn_803729B4_0000050C:
    mr r4, r3
    addi r3, r1, 0x80
    bl fn_8001047C
    addi r3, r1, 0x74
    bl fn_80057A64
    cmpwi r28, 0x0
    beq lbl_fn_803729B4_00000540
    lfs f1, lbl_8088570C
    addi r3, r1, 0x74
    lfs f2, 0x14(r28)
    fmr f3, f1
    bl fn_80057A68
    b lbl_fn_803729B4_0000060C
lbl_fn_803729B4_00000540:
    mr r3, r31
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0x74
    bl fn_8000D124
    lfs f29, lbl_808857D0
    li r29, 0x0
    lfs f28, lbl_8088579C
    lis r28, 0x8000
lbl_fn_803729B4_00000564:
    addi r3, r1, 0x68
    addi r4, r1, 0x80
    bl fn_8001047C
    lfs f0, 0x6c(r1)
    addi r3, r1, 0x5c
    lfs f1, lbl_8088570C
    fadds f0, f0, f29
    lfs f3, lbl_80885708
    fmr f2, f1
    stfs f0, 0x6c(r1)
    bl fn_8000D114
    lfs f1, 0x78(r1)
    addi r3, r1, 0xf8
    bl fn_8013A13C
    addi r3, r1, 0x5c
    addi r4, r1, 0xf8
    bl fn_80011410
    lfs f1, lbl_8088574C
    addi r3, r1, 0x20
    addi r4, r1, 0x5c
    bl fn_800F72CC
    addi r3, r1, 0x50
    addi r4, r1, 0x68
    addi r5, r1, 0x20
    bl fn_80013410
    bl fn_801404F8
    addi r5, r1, 0x68
    addi r6, r1, 0x50
    addi r7, r28, 0x8
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803729B4_0000060C
    lfs f0, 0x78(r1)
    fadds f1, f28, f0
    bl fn_800133B0
    addi r29, r29, 0x1
    stfs f1, 0x78(r1)
    cmpwi r29, 0x4
    blt lbl_fn_803729B4_00000564
lbl_fn_803729B4_0000060C:
    addi r3, r1, 0x44
    bl fn_802A4170
    bl fn_800F7F90
    bl fn_8037308C
    addi r28, r3, 0x8
    li r29, 0x0
    b lbl_fn_803729B4_0000065C
lbl_fn_803729B4_00000628:
    mr r3, r28
    mr r4, r29
    bl fn_80373108
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803729B4_00000658
    mr r3, r28
    mr r4, r29
    bl fn_80373108
    mr r4, r3
    addi r3, r1, 0x44
    bl fn_80244FC0
lbl_fn_803729B4_00000658:
    addi r29, r29, 0x1
lbl_fn_803729B4_0000065C:
    mr r3, r28
    bl fn_80372574
    cmplw r29, r3
    blt lbl_fn_803729B4_00000628
    addi r3, r30, 0xd18
    bl fn_803786F0
    lis r3, lbl_8074DBF8@ha
    lfs f29, lbl_808857CC
    lfd f28, lbl_8074DBF8@l(r3)
    li r27, 0x0
    lfs f30, lbl_8088572C
    lis r29, 0x4330
    lfs f31, lbl_808857DC
    b lbl_fn_803729B4_000009B4
lbl_fn_803729B4_00000694:
    mr r4, r27
    addi r3, r1, 0x44
    bl fn_802A4184
    lwz r26, 0x0(r3)
    mr r3, r26
    bl fn_800F52F0
    bl fn_8012D8B8
    mr r3, r26
    bl fn_80178A6C
    mr r3, r26
    bl fn_8013C3A8
    cmpwi r3, 0x0
    beq lbl_fn_803729B4_000006D0
    mr r3, r26
    bl fn_801539E0
lbl_fn_803729B4_000006D0:
    mr r3, r26
    bl fn_801479D8
    cmpwi r3, 0x0
    beq lbl_fn_803729B4_000006EC
    mr r3, r26
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_803729B4_000006EC:
    mr r3, r26
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_803729B4_00000724
    mr r3, r26
    bl fn_80318F90
    cmpwi r3, 0x0
    beq lbl_fn_803729B4_00000724
    mr r3, r26
    bl fn_80318F90
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
lbl_fn_803729B4_00000724:
    mr r3, r26
    bl fn_80373094
    lfs f1, lbl_80885708
    bl fn_80129A48
    mr r3, r26
    bl fn_80373094
    bl fn_80129A6C
    mr r3, r26
    bl fn_801750FC
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    cmpwi r27, 0x0
    bne lbl_fn_803729B4_00000790
    mr r3, r26
    bl fn_8000DD0C
    lfs f1, lbl_80885708
    li r4, 0x0
    lfs f2, lbl_808857B4
    li r5, 0x177
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_803729B4_000007C8
lbl_fn_803729B4_00000790:
    mr r3, r26
    li r4, 0x0
    bl fn_801370B8
    mr r28, r3
    mr r3, r26
    bl fn_8000DD0C
    lfs f1, lbl_80885708
    mr r5, r28
    lfs f2, lbl_808857B4
    li r4, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_803729B4_000007C8:
    mr r3, r26
    bl fn_8000DD0C
    li r4, 0x1
    bl fn_80139F24
    mr r3, r26
    bl fn_8000DD0C
    lfs f1, lbl_80885708
    li r4, 0x0
    bl fn_8013C554
    mr r3, r26
    bl fn_8000DD0C
    lfs f1, lbl_80885708
    li r4, 0x0
    bl fn_80139F3C
    addi r3, r1, 0x38
    bl fn_80057A64
    cmpwi r27, 0x0
    bne lbl_fn_803729B4_00000828
    lfs f1, lbl_8088570C
    addi r3, r1, 0x38
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
    b lbl_fn_803729B4_000008B8
lbl_fn_803729B4_00000828:
    clrlwi r0, r27, 31
    cmplwi r0, 0x1
    bne lbl_fn_803729B4_00000874
    cmplwi r27, 0x2
    ble lbl_fn_803729B4_00000844
    lfs f3, lbl_808857D4
    b lbl_fn_803729B4_00000848
lbl_fn_803729B4_00000844:
    lfs f3, lbl_808857D8
lbl_fn_803729B4_00000848:
    subi r0, r27, 0x1
    stw r29, 0x1d0(r1)
    srwi r0, r0, 1
    lfs f2, lbl_8088570C
    stw r0, 0x1d4(r1)
    addi r3, r1, 0x38
    lfd f0, 0x1d0(r1)
    fsubs f0, f0, f28
    fmadds f1, f29, f0, f30
    bl fn_80057A68
    b lbl_fn_803729B4_000008B8
lbl_fn_803729B4_00000874:
    cmpwi r0, 0x0
    bne lbl_fn_803729B4_000008B8
    cmplwi r27, 0x2
    ble lbl_fn_803729B4_0000088C
    lfs f3, lbl_808857D4
    b lbl_fn_803729B4_00000890
lbl_fn_803729B4_0000088C:
    lfs f3, lbl_808857D8
lbl_fn_803729B4_00000890:
    subi r0, r27, 0x1
    stw r29, 0x1d0(r1)
    srwi r0, r0, 1
    lfs f2, lbl_8088570C
    stw r0, 0x1d4(r1)
    addi r3, r1, 0x38
    lfd f0, 0x1d0(r1)
    fsubs f0, f0, f28
    fnmsubs f1, f29, f0, f31
    bl fn_80057A68
lbl_fn_803729B4_000008B8:
    addi r3, r1, 0xc8
    addi r4, r1, 0x74
    bl fn_800109E0
    addi r3, r1, 0x14
    addi r4, r1, 0x38
    addi r5, r1, 0xc8
    bl fn_8010F6FC
    addi r3, r1, 0x2c
    addi r4, r1, 0x80
    addi r5, r1, 0x14
    bl fn_80013410
    addi r3, r1, 0x150
    addi r4, r1, 0x2c
    bl fn_800F80A8
    addi r3, r1, 0x150
    addi r4, r1, 0x74
    bl fn_8037257C
    mr r3, r26
    bl fn_803727D4
    mr r4, r3
    addi r3, r1, 0x150
    bl fn_80372754
    mr r3, r26
    bl fn_8000DD0C
    addi r4, r1, 0x150
    bl fn_80316E38
    mr r3, r26
    bl fn_8000DD0C
    li r4, 0x1
    bl fn_80097E80
    addi r3, r1, 0x8c
    li r4, 0x0
    bl fn_80317034
    mr r3, r26
    bl fn_8000DD0C
    addi r4, r1, 0x8c
    bl fn_8000D430
    addi r3, r1, 0x8c
    li r4, -0x1
    bl fn_8000D3A8
    lfs f1, lbl_8088572C
    mr r3, r26
    bl fn_80148B38
    mr r3, r26
    bl fn_8000DD0C
    lfs f1, lbl_8088570C
    li r4, 0x0
    bl fn_80357F38
    mr r3, r26
    bl fn_80244CAC
    mr r3, r26
    addi r4, r1, 0x2c
    bl fn_8036B438
    mr r3, r26
    addi r4, r1, 0x74
    bl fn_801C0738
    mr r4, r26
    addi r3, r30, 0xd18
    addi r5, r1, 0x80
    addi r6, r1, 0x74
    li r7, 0x0
    bl fn_8037865C
    addi r27, r27, 0x1
lbl_fn_803729B4_000009B4:
    addi r3, r1, 0x44
    bl fn_800E0AA8
    cmplw r27, r3
    blt lbl_fn_803729B4_00000694
    addi r3, r30, 0x56dc
    bl fn_804786F8
    mr r4, r3
    addi r3, r30, 0xd18
    li r5, 0x0
    bl fn_8037C690
    lfs f1, lbl_8088570C
    addi r3, r1, 0x8
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    mr r6, r3
    mr r5, r31
    addi r3, r30, 0xd18
    li r4, 0x6
    bl fn_80378610
    addi r3, r30, 0xd18
    li r4, 0x0
    bl fn_803786FC
    addi r3, r30, 0xd18
    bl fn_803792F0
    li r0, 0xa
    stw r0, 0x54e4(r30)
    bl fn_80151210
    bl fn_8036E428
    li r4, 0x1
    bl fn_803B57B0
    bl fn_80151210
    bl fn_8036EE04
    li r4, 0x1
    bl fn_803B6C88
    bl fn_8013A194
    bl fn_80371664
    bl fn_8036635C
    bl fn_8054E520
    bl fn_802F0990
    li r4, 0x0
    bl fn_80366DF8
    bl fn_802F0990
    bl fn_80373100
    mr r4, r3
    addi r3, r1, 0x180
    bl fn_8037309C
    li r30, 0x0
    stw r30, 0x1c8(r1)
    bl fn_802F0990
    addi r4, r1, 0x180
    bl fn_80366D40
    bl fn_802F0990
    lfs f1, lbl_80885708
    bl fn_80366E00
    bl fn_802F0990
    bl fn_80366DA4
    mr r4, r3
    addi r3, r1, 0x128
    bl fn_80366E08
    stw r30, 0x128(r1)
    addi r3, r1, 0xa0
    addi r4, r1, 0x128
    bl fn_80366E08
    mr r30, r3
    bl fn_802F0990
    mr r4, r30
    bl fn_80366DAC
    bl fn_800F7F90
    bl fn_804DA3F8
    addi r3, r1, 0x44
    li r4, -0x1
    bl fn_80244674
lbl_fn_803729B4_00000AD8:
    addi r11, r1, 0x1f0
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    psq_l f28, 0x1f8(r1), 0, 0
    lfd f28, 0x1f0(r1)
    bl _restgpr_26
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_80373084(void)
{
    nofralloc
    stw r4, 0xe8(r3)
    blr
}

asm void fn_8037308C(void)
{
    nofralloc
    addi r3, r3, 0x2b80
    blr
}

asm void fn_80373094(void)
{
    nofralloc
    addi r3, r3, 0x10d8
    blr
}

asm void fn_8037309C(void)
{
    nofralloc
    psq_l f1, 0x4(r4), 0, 0
    psq_l f2, 0xc(r4), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    psq_st f2, 0xc(r3), 0, 0
    psq_l f2, 0x1c(r4), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x24(r4), 0, 0
    psq_st f2, 0x1c(r3), 0, 0
    psq_l f2, 0x2c(r4), 0, 0
    psq_st f1, 0x24(r3), 0, 0
    lwz r6, 0x0(r4)
    psq_st f2, 0x2c(r3), 0, 0
    psq_l f1, 0x34(r4), 0, 0
    psq_l f2, 0x3c(r4), 0, 0
    lwz r5, 0x44(r4)
    lwz r0, 0x48(r4)
    lfs f0, 0x4c(r4)
    stw r6, 0x0(r3)
    psq_st f1, 0x34(r3), 0, 0
    psq_st f2, 0x3c(r3), 0, 0
    stw r5, 0x44(r3)
    stw r0, 0x48(r3)
    stfs f0, 0x4c(r3)
    blr
}

asm void fn_80373100(void)
{
    nofralloc
    addi r3, r3, 0x324
    blr
}

asm void fn_80373108(void)
{
    nofralloc
    mulli r0, r4, 0xd5c
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_80373118(void)
{
    nofralloc
    lwz r5, 0x5624(r3)
    lwz r4, 0x58(r5)
    addi r0, r4, 0x1
    stw r0, 0x58(r5)
    lwz r5, 0x5620(r3)
    lwz r4, 0x58(r5)
    addi r0, r4, 0x1
    stw r0, 0x58(r5)
    lwz r4, 0x5760(r3)
    addi r0, r4, 0x1
    stw r0, 0x5760(r3)
    blr
}

asm void fn_80373148(void)
{
    nofralloc
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80373148_00000BE8
    lwz r3, 0x64(r3)
    blr
lbl_fn_80373148_00000BE8:
    li r3, 0x0
    blr
}

asm void fn_80373164(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0x56d4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80373164_00000C2C
    cmplw r0, r4
    bne lbl_fn_80373164_00000C2C
    cmpwi r6, 0x0
    beq lbl_fn_80373164_00000C6C
    lfs f0, 0x10c8(r3)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    subi r0, r4, 0x1e
    stw r0, 0x1070(r3)
    b lbl_fn_80373164_00000C6C
lbl_fn_80373164_00000C2C:
    lwz r0, 0x5594(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80373164_00000C6C
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80373164_00000C6C
    lwz r0, 0xf28(r3)
    cmplw r0, r4
    bne lbl_fn_80373164_00000C6C
    lwz r0, 0x5598(r3)
    addi r4, r3, 0x1014
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x101c(r3)
    stw r0, 0x5614(r3)
lbl_fn_80373164_00000C6C:
    addi r1, r1, 0x10
    blr
}

asm void fn_803731E8(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    li r4, 0x7
    li r6, 0x58
    stw r0, 0x104(r1)
    li r5, 0xf
    li r0, 0x5a
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    stw r30, 0xb8(r1)
    mr r30, r3
    stw r29, 0xb4(r1)
    stw r4, 0x54e4(r3)
    li r4, 0x0
    stw r6, 0x5598(r3)
    stw r5, 0x55a4(r3)
    stw r0, 0x559c(r3)
    lwz r3, 0x5590(r3)
    bl fn_8056F5B8
    lwz r0, 0x5594(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803731E8_00000D10
    lfs f0, lbl_8088570C
    addi r3, r30, 0xd18
    stfs f0, 0xc(r1)
    addi r6, r1, 0xc
    lwz r5, lbl_8087F8A0
    li r4, 0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    lwz r5, 0x48(r5)
    bl fn_80378610
lbl_fn_803731E8_00000D10:
    li r31, 0x1
    stw r31, 0x10ac(r30)
    lwz r6, 0xf28(r30)
    li r0, 0x1e
    lwz r4, lbl_8087F8A0
    addi r3, r30, 0xd18
    lwz r4, 0x48(r4)
    subf r5, r6, r4
    subf r4, r4, r6
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r4, r0, r4
    bl fn_803786FC
    lwz r3, lbl_8087F048
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F8A0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F408
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F890
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F428
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EE68
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x10d8(r30)
    bl fn_800D246C
    lwz r3, lbl_8087F4A0
    bl fn_803EE514
    lwz r3, lbl_8087F048
    bl fn_8010129C
    lwz r3, lbl_8087F488
    li r4, 0x1
    lfs f0, lbl_8088570C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r5, 0xb08(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb0c(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb10(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb14(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb18(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0xb18(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb20(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0xb20(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb1c(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb24(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb24(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb28(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb28(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb2c(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb2c(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb30(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0xb30(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0xb34(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r3, 0xb34(r3)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087F3C0
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    stw r31, 0xe8(r3)
    lwz r3, lbl_8087F3C0
    bl fn_8023A60C
    lwz r3, lbl_8087F3C0
    li r4, 0x2
    bl fn_8023A60C
    lwz r3, lbl_8087F3C0
    li r4, 0x3
    bl fn_8023A60C
    lwz r3, lbl_8087F3C0
    li r4, 0x5
    bl fn_8023A60C
    lwz r0, 0x5598(r30)
    lwz r3, 0x5590(r30)
    neg r4, r0
    bl fn_80570258
    lwz r4, 0x5598(r30)
    li r5, 0x1
    lwz r0, 0x559c(r30)
    li r6, 0x0
    lwz r3, 0x5590(r30)
    subf r4, r4, r0
    bl fn_8056D8CC
    addi r3, r30, 0xd18
    bl fn_803792F0
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    li r5, 0x1
    li r6, 0x2
    li r7, 0xa
    bl fn_800CFA28
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803731E8_00000F80
    lfs f3, 0x94(r3)
    li r4, 0xa
    lfs f0, lbl_80885748
    fmuls f1, f0, f3
    bl fn_8037D49C
lbl_fn_803731E8_00000F80:
    lis r4, lbl_8074DA10@ha
    lfs f1, lbl_80885708
    addi r4, r4, lbl_8074DA10@l
    addi r3, r1, 0x8
    lwz r4, 0x4(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r30, 0x55a8
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EE78
    cmpwi r3, 0x0
    beq lbl_fn_803731E8_00000FCC
    li r4, 0x2
    bl fn_80043D58
lbl_fn_803731E8_00000FCC:
    lwz r3, lbl_8087EFA8
    li r5, 0x1
    addi r9, r1, 0x5c
    addi r8, r1, 0x6c
    stw r5, 0x240(r3)
    addi r7, r1, 0x7c
    addi r6, r1, 0x8c
    addi r31, r30, 0x55c8
    lwz r29, lbl_8087EFA8
    addi r12, r30, 0x55d8
    addi r11, r30, 0x55e8
    addi r10, r30, 0x55f8
    psq_l f1, 0x328(r29), 0, 0
    psq_l f2, 0x330(r29), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x338(r29), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x340(r29), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x348(r29), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x350(r29), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x358(r29), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x360(r29), 0, 0
    lwz r4, 0x368(r29)
    psq_st f1, 0x0(r6), 0, 0
    lwz r3, 0x324(r29)
    psq_st f2, 0x8(r6), 0, 0
    lwz r0, 0x36c(r29)
    lfs f0, 0x370(r29)
    psq_l f1, 0x0(r9), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f2, 0x8(r12), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r11), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stw r4, 0x9c(r1)
    stw r3, 0x55c4(r30)
    psq_st f1, 0x0(r10), 0, 0
    psq_st f2, 0x8(r10), 0, 0
    stw r4, 0x5608(r30)
    stfs f0, 0x5610(r30)
    li r3, 0x14
    lfs f28, lbl_80885708
    stw r0, 0x560c(r30)
    psq_l f1, 0x0(r9), 0, 0
    lwz r10, lbl_8087EFA8
    psq_l f2, 0x8(r9), 0, 0
    stw r5, 0x324(r10)
    lfs f4, lbl_8088571C
    psq_st f1, 0x328(r10), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f2, 0x330(r10), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f1, 0x338(r10), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f2, 0x340(r10), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f1, 0x348(r10), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x350(r10), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x358(r10), 0, 0
    lfs f3, lbl_808857E0
    psq_st f2, 0x360(r10), 0, 0
    lfs f0, lbl_808857E4
    stw r4, 0x368(r10)
    stw r5, 0x36c(r10)
    stfs f28, 0x370(r10)
    lwz r4, lbl_8087EFA8
    stw r5, 0x58(r1)
    lfs f5, 0x3a4(r4)
    stfs f5, 0x55c0(r30)
    lwz r4, lbl_8087EFA8
    stw r5, 0xa0(r1)
    stfs f28, 0x3a4(r4)
    lfs f5, 0x6f0(r30)
    lwz r4, 0x520(r30)
    fmuls f5, f5, f4
    lfs f7, 0x6f4(r30)
    lfs f29, 0x6fc(r30)
    cmpwi r4, 0x1
    fmuls f4, f7, f3
    lfs f6, 0x6f8(r30)
    fmuls f3, f6, f0
    lfs f30, 0x700(r30)
    lfs f31, 0x704(r30)
    lfs f13, 0x708(r30)
    lfs f12, 0x70c(r30)
    lfs f11, 0x710(r30)
    lfs f10, 0x714(r30)
    lfs f9, 0x718(r30)
    lfs f8, 0x71c(r30)
    lfs f7, 0x720(r30)
    lfs f6, 0x724(r30)
    lwz r0, 0x728(r30)
    stfs f28, 0xa4(r1)
    stw r3, 0x55a0(r30)
    stfs f29, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f11, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f6, 0x4c(r1)
    stw r0, 0x50(r1)
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    beq lbl_fn_803731E8_00001210
    cmpwi r4, 0x4
    beq lbl_fn_803731E8_00001210
    lfs f0, lbl_80885760
    stw r5, 0x520(r30)
    stfs f5, 0x52c(r30)
    stfs f4, 0x530(r30)
    stfs f3, 0x534(r30)
    stfs f29, 0x538(r30)
    stfs f30, 0x53c(r30)
    stfs f31, 0x540(r30)
    stfs f13, 0x544(r30)
    stfs f12, 0x548(r30)
    stfs f11, 0x54c(r30)
    stfs f10, 0x550(r30)
    stfs f9, 0x554(r30)
    stfs f8, 0x558(r30)
    stfs f7, 0x55c(r30)
    stfs f6, 0x560(r30)
    stw r0, 0x564(r30)
    stfs f0, 0x528(r30)
    stfs f28, 0x524(r30)
lbl_fn_803731E8_00001210:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_803737C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x3c
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r4, 0x54e4(r3)
    stw r0, 0x5598(r3)
    stw r4, 0x5594(r3)
    stw r4, 0x55b0(r3)
    stw r4, 0x55b4(r3)
    addi r3, r3, 0xd18
    bl fn_80378CCC
    lwz r3, lbl_8087F048
    li r4, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F8A0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F408
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F890
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F428
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EE68
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x10d8(r30)
    bl fn_800D246C
    lwz r3, lbl_8087F4A0
    bl fn_803EE560
    lwz r4, lbl_8087F488
    lis r3, lbl_8074DC1C@ha
    addi r3, r3, lbl_8074DC1C@l
    lfs f0, lbl_8088570C
    lwz r0, 0x38(r4)
    addi r3, r3, 0x15d
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r31, lbl_8087F490
    lwz r4, 0xb08(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb08(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb0c(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb0c(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb10(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb10(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb14(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb14(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb18(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb18(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb1c(r31)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb1c(r31)
    stfs f0, 0x100(r4)
    lwz r4, 0xb1c(r31)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885708
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r3, 0xb20(r31)
    lfs f0, lbl_8088570C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb20(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb24(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb24(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb28(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb28(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb2c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb2c(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb30(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb30(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb34(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb34(r31)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087F490
    bl fn_803E4950
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    li r5, 0x0
    li r6, 0x2
    li r7, 0x1e
    bl fn_800CFA28
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803737C0_000014A8
    lfs f1, 0xe0(r3)
    li r4, 0x1e
    bl fn_8037D49C
lbl_fn_803737C0_000014A8:
    lwz r3, 0x5590(r30)
    li r4, 0x0
    bl fn_80570A18
    lwz r3, lbl_8087F9E8
    li r4, 0x1
    bl fn_8059D26C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803737C0_000014D8
    lwz r3, lbl_8087F048
    bl fn_8010AB34
lbl_fn_803737C0_000014D8:
    lwz r7, lbl_8087EFA8
    addi r3, r30, 0x55c8
    lwz r0, 0x55c4(r30)
    addi r4, r30, 0x55d8
    stw r0, 0x324(r7)
    addi r5, r30, 0x55e8
    addi r6, r30, 0x55f8
    psq_l f2, 0x8(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x328(r7), 0, 0
    psq_st f2, 0x330(r7), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x338(r7), 0, 0
    psq_st f2, 0x340(r7), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x348(r7), 0, 0
    psq_st f2, 0x350(r7), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x358(r7), 0, 0
    psq_st f2, 0x360(r7), 0, 0
    lwz r0, 0x5608(r30)
    stw r0, 0x368(r7)
    lwz r0, 0x560c(r30)
    stw r0, 0x36c(r7)
    lfs f0, 0x5610(r30)
    stfs f0, 0x370(r7)
    lwz r3, lbl_8087EFA8
    lfs f0, 0x55c0(r30)
    stfs f0, 0x3a4(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80373AE8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lis r0, 0x4330
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    lwz r5, 0x5598(r3)
    stw r0, 0x60(r1)
    cmpwi r5, 0x0
    stw r0, 0x68(r1)
    ble lbl_fn_80373AE8_0000196C
    lwz r0, 0x559c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80373AE8_000016C0
    lwz r4, 0x55a0(r3)
    cmpwi r4, 0x0
    ble lbl_fn_80373AE8_00001618
    subic. r0, r4, 0x1
    lfs f1, lbl_80885708
    stfs f1, 0x524(r3)
    stw r0, 0x55a0(r3)
    stfs f1, 0x10b8(r3)
    bgt lbl_fn_80373AE8_0000160C
    lis r4, lbl_8074DA10@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_8074DA10@l
    li r5, 0x0
    lwz r4, 0x8(r4)
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lfs f1, lbl_808857B4
    addi r3, r31, 0x55a8
    li r4, 0x5
    bl fn_800CB5B4
lbl_fn_80373AE8_0000160C:
    lwz r0, 0x106c(r31)
    stw r0, 0x1068(r31)
    b lbl_fn_80373AE8_000016B4
lbl_fn_80373AE8_00001618:
    lwz r3, 0x5590(r3)
    subf r4, r5, r0
    li r5, 0x1
    li r6, 0x0
    bl fn_8056D8CC
    li r30, 0x0
lbl_fn_80373AE8_00001630:
    lwz r3, lbl_8087F3C0
    li r4, 0x1
    bl fn_8023A614
    addi r30, r30, 0x1
    cmpwi r30, 0x3
    blt lbl_fn_80373AE8_00001630
    lwz r3, 0x559c(r31)
    subic. r0, r3, 0x3
    stw r0, 0x559c(r31)
    bgt lbl_fn_80373AE8_0000167C
    lwz r3, lbl_8087EFA8
    li r4, 0x0
    lfs f1, lbl_80885708
    li r0, 0x18
    stw r4, 0x240(r3)
    addi r3, r31, 0x55a8
    li r4, 0x1e
    stw r0, 0x55a0(r31)
    bl fn_800CB5B4
lbl_fn_80373AE8_0000167C:
    lwz r3, 0x559c(r31)
    lis r4, lbl_8074DBE8@ha
    lwz r0, 0x106c(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x64(r1)
    lfd f4, lbl_8074DBE8@l(r4)
    lfd f3, 0x60(r1)
    lfs f0, lbl_808857E8
    fsubs f3, f3, f4
    stw r0, 0x1068(r31)
    fdivs f0, f3, f0
    stfs f0, 0x10b8(r31)
    fmuls f0, f0, f0
    stfs f0, 0x524(r31)
lbl_fn_80373AE8_000016B4:
    addi r3, r31, 0xd18
    bl fn_803792F0
    b lbl_fn_80373AE8_000019EC
lbl_fn_80373AE8_000016C0:
    lwz r4, 0x55a0(r3)
    cmpwi r4, 0x0
    ble lbl_fn_80373AE8_00001854
    subi r6, r4, 0x1
    stw r6, 0x55a0(r3)
    addi r8, r1, 0x14
    addi r5, r1, 0x24
    lwz r9, lbl_8087EFA8
    addi r4, r1, 0x34
    cmpwi r6, 0x10
    addi r7, r1, 0x44
    psq_l f1, 0x328(r9), 0, 0
    psq_l f2, 0x330(r9), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x338(r9), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x340(r9), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x348(r9), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x350(r9), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r5, 0x324(r9)
    psq_st f2, 0x8(r4), 0, 0
    psq_l f1, 0x358(r9), 0, 0
    psq_l f2, 0x360(r9), 0, 0
    lwz r4, 0x368(r9)
    lwz r0, 0x36c(r9)
    lfs f0, 0x370(r9)
    stw r5, 0x10(r1)
    lfs f5, lbl_808857EC
    psq_st f1, 0x0(r7), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    ble lbl_fn_80373AE8_00001780
    subfic r0, r6, 0x18
    lis r4, lbl_8074DBE8@ha
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f4, lbl_8074DBE8@l(r4)
    lfd f3, 0x68(r1)
    lfs f0, lbl_80885708
    fsubs f3, f3, f4
    fmadds f0, f5, f3, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_80373AE8_000017D4
lbl_fn_80373AE8_00001780:
    cmpwi r6, 0x8
    ble lbl_fn_80373AE8_000017B4
    subi r0, r6, 0x8
    lis r4, lbl_8074DBE8@ha
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfd f4, lbl_8074DBE8@l(r4)
    lfd f3, 0x60(r1)
    lfs f0, lbl_80885708
    fsubs f3, f3, f4
    fmadds f0, f5, f3, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_80373AE8_000017D4
lbl_fn_80373AE8_000017B4:
    xoris r0, r6, 0x8000
    stw r0, 0x6c(r1)
    lis r4, lbl_8074DBE8@ha
    lfd f3, lbl_8074DBE8@l(r4)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f3
    fmuls f0, f0, f5
    stfs f0, 0x5c(r1)
lbl_fn_80373AE8_000017D4:
    lwz r8, lbl_8087EFA8
    addi r4, r1, 0x14
    lwz r0, 0x10(r1)
    addi r5, r1, 0x24
    stw r0, 0x324(r8)
    addi r6, r1, 0x34
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r1, 0x44
    psq_st f1, 0x328(r8), 0, 0
    addi r3, r3, 0xd18
    psq_l f2, 0x8(r4), 0, 0
    psq_st f2, 0x330(r8), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x338(r8), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x340(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x348(r8), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f2, 0x350(r8), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x358(r8), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f2, 0x360(r8), 0, 0
    lwz r0, 0x54(r1)
    stw r0, 0x368(r8)
    lwz r0, 0x58(r1)
    stw r0, 0x36c(r8)
    lfs f0, 0x5c(r1)
    stfs f0, 0x370(r8)
    bl fn_803792F0
    b lbl_fn_80373AE8_000019EC
lbl_fn_80373AE8_00001854:
    lwz r0, 0x1068(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80373AE8_00001960
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x5598(r31)
    li r5, 0x1
    lwz r0, 0x559c(r31)
    li r6, 0x1
    subi r4, r3, 0x1
    stw r4, 0x5598(r31)
    lwz r3, 0x5590(r31)
    subf r4, r4, r0
    bl fn_8056D8CC
    lwz r3, 0x5614(r31)
    lwz r0, 0x5598(r31)
    cmpw r3, r0
    bne lbl_fn_80373AE8_000018E0
    lwz r3, 0x55b4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80373AE8_000018E0
    lwz r3, 0xb0(r3)
    bl fn_800EFE3C
    cmpwi r3, 0x0
    beq lbl_fn_80373AE8_000018E0
    lfs f1, lbl_80885708
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80373AE8_000018E0:
    lwz r0, 0x5598(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80373AE8_00001960
    lwz r4, 0x5624(r31)
    li r9, 0x0
    lis r3, 0x100
    li r8, -0x1
    stw r9, 0x4c(r4)
    subi r7, r3, 0x1
    li r0, 0xe
    addi r3, r31, 0x55a8
    lwz r6, 0x5624(r31)
    li r4, 0x1e
    li r5, 0x0
    stw r9, 0x58(r6)
    lwz r6, 0x5624(r31)
    stw r9, 0x5c(r6)
    lwz r6, 0x5624(r31)
    stw r8, 0x6c(r6)
    lwz r6, 0x5624(r31)
    stw r7, 0x70(r6)
    stw r0, 0x563c(r31)
    stw r9, 0x55ac(r31)
    bl fn_800CB5C8
    lwz r3, 0x55b4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80373AE8_00001960
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_80373AE8_00001960
    li r0, 0x1
    stw r0, 0x940(r31)
lbl_fn_80373AE8_00001960:
    addi r3, r31, 0xd18
    bl fn_803792F0
    b lbl_fn_80373AE8_000019EC
lbl_fn_80373AE8_0000196C:
    lwz r0, 0x55ac(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80373AE8_000019D8
    lwz r4, 0x5624(r3)
    li r0, 0x1
    stw r0, 0x55ac(r3)
    stw r0, 0x48(r4)
    lwz r3, 0x5590(r3)
    bl fn_805704B0
    li r3, 0x3c
    bl fn_802328DC
    lwz r3, lbl_8087F9E8
    bl fn_8059D17C
    li r3, 0x0
    bl fn_802328DC
    lwz r3, lbl_8087EE78
    cmpwi r3, 0x0
    beq lbl_fn_80373AE8_000019BC
    li r4, 0x3
    bl fn_80043D58
lbl_fn_80373AE8_000019BC:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    li r4, 0x1
    stw r0, 0xe8(r3)
    lwz r3, lbl_8087F3C0
    bl fn_800D246C
    b lbl_fn_80373AE8_000019E4
lbl_fn_80373AE8_000019D8:
    lwz r3, lbl_8087F3C0
    li r4, 0x5
    bl fn_8023A614
lbl_fn_80373AE8_000019E4:
    addi r3, r31, 0xd18
    bl fn_803792F0
lbl_fn_80373AE8_000019EC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
