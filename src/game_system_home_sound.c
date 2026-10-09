#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DVDSetAutoFatalMessaging(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8004A2CC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80061824(void);
extern void fn_8006A250(void);
extern void fn_8006BA30(void);
extern void fn_8006F2F0(void);
extern void fn_8007192C(void);
extern void fn_80071AFC(void);
extern void fn_80071D60(void);
extern void fn_80075DEC(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80089EE4(void);
extern void fn_8008CD60(void);
extern void fn_80092814(void);
extern void fn_800928B0(void);
extern void fn_80093F58(void);
extern void fn_80097D9C(void);
extern void fn_800A4228(void);
extern void fn_800A555C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CF7DC(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_801F3FF8(void);
extern void fn_801F4E8C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_8037177C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804FB534(void);
extern void fn_805F0E90(void);
extern void fn_805F1B50(void);
extern void fn_805F1D30(void);
extern void fn_805F8980(void);
extern void fn_805F89F0(void);
extern void fn_805F9160(void);
extern void fn_805F95A0(void);
extern void fn_805F9940(void);
extern void fn_805FEB00(void);
extern void fn_805FF120(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614790(void);
extern void fn_80615D20(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806165B0(void);
extern void fn_80617340(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80617E00(void);
extern void fn_80618290(void);
extern void fn_80618350(void);
extern void fn_80618400(void);
extern void fn_80618420(void);
extern void fn_80682428(void);
extern void fn_80695AD0(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074B780[];
extern u8 lbl_8074CCD0[];
extern u8 lbl_8074D8B0[];
extern u8 lbl_8074D8B8[];
extern u8 lbl_8074D8C0[];
extern u8 lbl_80766768[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80789EB0[];
extern u8 lbl_80789EC0[];
extern u8 lbl_80789EC8[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF68;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFC0;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F010;
extern u32 lbl_8087F018;
extern u32 lbl_8087F420;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F530;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_808856CC;
extern u32 lbl_808856D0;
extern u32 lbl_808856D4;
extern u32 lbl_808856D8;
extern u32 lbl_808856DC;
extern u32 lbl_808856E0;
extern u32 lbl_808856E4;
extern u32 lbl_808856E8;
extern u32 lbl_808856EC;
extern u32 lbl_808856F0;
extern u32 lbl_808856F4;
extern u32 lbl_808856F8;

/* Function declarations */
void fn_803637D4(void);
void fn_80363960(void);
void fn_803639A0(void);
void fn_80363C10(void);
void fn_80363C28(void);
void fn_80363CE4(void);
void fn_80363D38(void);
void fn_80363DBC(void);
void fn_803646C4(void);
void fn_80364BE8(void);
void fn_80364DAC(void);
void fn_80364DB4(void);
void fn_80364E7C(void);
void fn_8036503C(void);

asm void fn_803637D4(void)
{
    nofralloc
    stwu r1, -0x680(r1)
    mflr r0
    stw r0, 0x684(r1)
    stw r31, 0x67c(r1)
    stw r30, 0x678(r1)
    stw r29, 0x674(r1)
    mr r29, r3
    addi r3, r3, 0x3ec
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x3ec
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x34(r1)
    mr r31, r3
    addi r3, r1, 0x44
    stw r0, 0x38(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x664(r1)
    bl memset
    addi r3, r1, 0x644
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x34(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x34
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x34
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x34(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_8074B780@ha
    addi r31, r31, lbl_8074B780@l
lbl_fn_803637D4_000000B0:
    addi r3, r1, 0x34
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803637D4_00000160
    addi r4, r31, 0x1e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803637D4_0000010C
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3e0(r29)
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3e4(r29)
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3e8(r29)
    b lbl_fn_803637D4_00000160
lbl_fn_803637D4_0000010C:
    mr r3, r30
    addi r4, r31, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803637D4_00000134
    addi r3, r1, 0x34
    bl fn_8005B9CC
    bl fn_800DC6B4
    stw r3, 0x3d8(r29)
    b lbl_fn_803637D4_00000160
lbl_fn_803637D4_00000134:
    mr r3, r30
    addi r4, r31, 0x33
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803637D4_00000160
    addi r3, r1, 0x8
    addi r4, r1, 0x34
    bl fn_80089EE4
    addi r3, r29, 0x4
    addi r4, r1, 0x8
    bl fn_80093F58
lbl_fn_803637D4_00000160:
    addi r3, r1, 0x34
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803637D4_000000B0
    lwz r0, 0x684(r1)
    lwz r31, 0x67c(r1)
    lwz r30, 0x678(r1)
    lwz r29, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x680
    blr
}

asm void fn_80363960(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x3d4(r3)
    mr r3, r4
    lwz r4, 0x3d8(r31)
    bl fn_800928B0
    stw r3, 0x3d8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803639A0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r3
    lwz r0, 0x3d8(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803639A0_00000410
    lwz r3, 0x3d4(r3)
    bge lbl_fn_803639A0_00000214
    li r4, 0x0
    b lbl_fn_803639A0_00000220
lbl_fn_803639A0_00000214:
    mulli r0, r0, 0x30
    lwz r3, 0x3c(r3)
    add r4, r3, r0
lbl_fn_803639A0_00000220:
    psq_l f1, 0x0(r4), 0, 0
    addi r31, r1, 0xb0
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0x80
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    lfs f1, 0x3e0(r29)
    lfs f2, 0x3e4(r29)
    lfs f3, 0x3e8(r29)
    bl fn_805F9160
    mr r3, r31
    addi r4, r1, 0x80
    addi r5, r1, 0x50
    bl fn_805F89F0
    addi r4, r1, 0x50
    addi r3, r1, 0x14
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0xc(r29), 0, 0
    psq_st f2, 0x14(r29), 0, 0
    psq_st f3, 0x1c(r29), 0, 0
    psq_st f4, 0x24(r29), 0, 0
    psq_st f5, 0x2c(r29), 0, 0
    psq_st f6, 0x34(r29), 0, 0
    lfs f8, 0xd8(r1)
    lfs f7, 0xc8(r1)
    lfs f0, 0xb8(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0xd4(r1)
    fmr f30, f1
    lfs f7, 0xc4(r1)
    addi r3, r1, 0x20
    lfs f0, 0xb4(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0xd0(r1)
    fmr f31, f1
    lfs f7, 0xc0(r1)
    addi r3, r1, 0x2c
    lfs f0, 0xb0(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_803639A0_0000034C
    b lbl_fn_803639A0_00000350
lbl_fn_803639A0_0000034C:
    fmr f7, f0
lbl_fn_803639A0_00000350:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_803639A0_00000360
    b lbl_fn_803639A0_00000378
lbl_fn_803639A0_00000360:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_803639A0_00000374
    b lbl_fn_803639A0_00000378
lbl_fn_803639A0_00000374:
    fmr f8, f0
lbl_fn_803639A0_00000378:
    lwz r0, 0x3dc(r29)
    stfs f8, 0x58(r29)
    extlwi r0, r0, 2, 1
    srawi. r0, r0, 31
    beq lbl_fn_803639A0_000003C0
    lwz r4, 0x3d4(r29)
    addi r3, r29, 0x4
    bl fn_80097D9C
    lis r4, lbl_8074B780@ha
    lwz r30, 0x224(r29)
    addi r4, r4, lbl_8074B780@l
    addi r3, r29, 0x4
    addi r4, r4, 0x3d
    li r31, 0x0
    li r5, 0x0
    bl fn_80092814
    mulli r0, r3, 0x2c
    stwx r31, r30, r0
lbl_fn_803639A0_000003C0:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r3, r29, 0x4
    addi r4, r1, 0x38
    bl fn_8000D430
    addic. r3, r1, 0x38
    beq lbl_fn_803639A0_00000410
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803639A0_00000410
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_803639A0_00000408
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803639A0_00000408:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_803639A0_00000410:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80363C10(void)
{
    nofralloc
    lwz r0, 0x3d8(r3)
    cmpwi r0, 0x0
    bltlr
    addi r3, r3, 0x4
    b fn_8008CD60
    blr
}

asm void fn_80363C28(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl fn_8006BA30
    cmpwi r3, 0x0
    bne lbl_fn_80363C28_00000494
    lwz r3, lbl_8087EEC8
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_8006F2F0
    b lbl_fn_80363C28_000004FC
lbl_fn_80363C28_00000494:
    cmpwi r27, 0x0
    beq lbl_fn_80363C28_000004A4
    cmpwi r28, 0x0
    bne lbl_fn_80363C28_000004AC
lbl_fn_80363C28_000004A4:
    li r3, 0x0
    b lbl_fn_80363C28_000004FC
lbl_fn_80363C28_000004AC:
    mr r3, r28
    li r30, 0x0
    li r31, 0x0
    bl strlen
    subi r0, r29, 0x1
    mtctr r3
    cmplwi r3, 0x0
    ble lbl_fn_80363C28_000004EC
lbl_fn_80363C28_000004CC:
    addi r30, r30, 0x1
    lbz r3, 0x0(r28)
    cmplw r30, r0
    sthx r3, r27, r31
    addi r31, r31, 0x2
    bge lbl_fn_80363C28_000004EC
    addi r28, r28, 0x1
    bdnz lbl_fn_80363C28_000004CC
lbl_fn_80363C28_000004EC:
    slwi r0, r30, 1
    li r3, 0x0
    sthx r3, r27, r0
    addi r3, r30, 0x1
lbl_fn_80363C28_000004FC:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80363CE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F420
    cmpwi r0, 0x0
    bne lbl_fn_80363CE4_00000554
    lis r5, lbl_8074D8C0@ha
    li r3, 0x4c
    addi r5, r5, lbl_8074D8C0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80363CE4_00000550
    bl fn_80363D38
lbl_fn_80363CE4_00000550:
    stw r3, lbl_8087F420
lbl_fn_80363CE4_00000554:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80363D38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    li r3, 0x1
    bl DVDSetAutoFatalMessaging
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80363DBC(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_26
    lwz r0, 0x20(r3)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000ED8
    lwz r5, 0x24(r3)
    cmpwi r5, 0x0
    bne lbl_fn_80363DBC_000006AC
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_000007D4
    lis r31, lbl_8074D8C0@ha
    lwz r3, lbl_8087F530
    addi r31, r31, lbl_8074D8C0@l
    li r5, 0x0
    addi r4, r31, 0x1
    bl fn_801F3FF8
    stw r3, 0x24(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x24(r30)
    li r0, 0x13
    addi r4, r31, 0x1
    li r5, 0x0
    stw r0, 0x108(r3)
    lwz r3, lbl_8087F530
    bl fn_801F3FF8
    stw r3, 0x28(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F530
    addi r4, r31, 0x1e
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x2c(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F530
    addi r4, r31, 0x3b
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x30(r30)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_80363DBC_000007D4
lbl_fn_80363DBC_000006AC:
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_000007D4
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80363DBC_000007D4
    lwz r4, 0x28(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80363DBC_000007D4
    lwz r3, 0x2c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80363DBC_000007D4
    mr r3, r5
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x24(r30)
    lis r3, lbl_8074D8C0@ha
    addi r3, r3, lbl_8074D8C0@l
    lwz r0, 0x38(r4)
    addi r3, r3, 0x59
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x24(r30)
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    lwz r4, 0x24(r30)
    addi r31, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808856CC
    mr r4, r3
    mr r3, r31
    li r5, 0x4
    bl fn_801FED24
    lwz r3, 0x28(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x28(r30)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x28(r30)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x2c(r30)
    bl fn_800D246C
    lwz r3, 0x2c(r30)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x2c(r30)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x30(r30)
    bl fn_800D246C
    lwz r3, 0x30(r30)
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x30(r30)
    lwz r0, 0xfc(r3)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r3)
    stw r4, 0x34(r30)
lbl_fn_80363DBC_000007D4:
    lwz r0, 0x44(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000808
    lwz r3, lbl_8087F530
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000808
    li r4, 0x1
    li r5, 0x0
    lis r6, 0xff00
    bl fn_8006A250
    stw r3, 0x44(r30)
    lfs f0, lbl_808856D0
    stfs f0, 0x74(r3)
lbl_fn_80363DBC_00000808:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000828
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80363DBC_00000828
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_80363DBC_00000828:
    lwz r0, 0x18(r30)
    li r31, 0x0
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000854
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000854
    lwz r0, 0x34(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000858
lbl_fn_80363DBC_00000854:
    li r3, 0x1
lbl_fn_80363DBC_00000858:
    cmpwi r3, 0x0
    bne lbl_fn_80363DBC_000008F0
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80363DBC_000008DC
    lwz r4, lbl_8087F018
    cmpwi r4, 0x0
    beq lbl_fn_80363DBC_000008DC
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000890
    lwz r0, 0x84(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80363DBC_000008DC
lbl_fn_80363DBC_00000890:
    lwz r3, lbl_8087F018
    lwz r0, 0x40c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_000008A4
    li r31, 0x5
lbl_fn_80363DBC_000008A4:
    lwz r0, 0x0(r30)
    lbz r3, 0x5c(r4)
    cmpwi r0, 0x5
    beq lbl_fn_80363DBC_000008DC
    cmpwi r31, 0x0
    bne lbl_fn_80363DBC_000008DC
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_80363DBC_000008DC
    cmpwi r3, 0x1
    beq lbl_fn_80363DBC_000008DC
    cmpwi r3, 0x2
    beq lbl_fn_80363DBC_000008DC
    li r31, 0x6
lbl_fn_80363DBC_000008DC:
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    ble lbl_fn_80363DBC_000008F0
    subi r0, r3, 0x1
    stw r0, 0x10(r30)
lbl_fn_80363DBC_000008F0:
    bl fn_805FEB00
    cmpwi r3, -0x1
    beq lbl_fn_80363DBC_00000918
    cmpwi r3, 0x4
    beq lbl_fn_80363DBC_00000920
    cmpwi r3, 0x6
    beq lbl_fn_80363DBC_00000928
    cmpwi r3, 0xb
    beq lbl_fn_80363DBC_00000930
    b lbl_fn_80363DBC_00000934
lbl_fn_80363DBC_00000918:
    li r31, 0x1
    b lbl_fn_80363DBC_00000934
lbl_fn_80363DBC_00000920:
    li r31, 0x2
    b lbl_fn_80363DBC_00000934
lbl_fn_80363DBC_00000928:
    li r31, 0x3
    b lbl_fn_80363DBC_00000934
lbl_fn_80363DBC_00000930:
    li r31, 0x4
lbl_fn_80363DBC_00000934:
    cmpwi r31, 0x0
    bne lbl_fn_80363DBC_00000988
    lwz r3, 0x0(r30)
    subi r0, r3, 0x1
    cmplwi r0, 0x3
    bgt lbl_fn_80363DBC_0000095C
    bl fn_805FF120
    cmpwi r3, 0x0
    bne lbl_fn_80363DBC_0000095C
    lwz r31, 0x0(r30)
lbl_fn_80363DBC_0000095C:
    lwz r3, 0x0(r30)
    subi r0, r3, 0x5
    cmplwi r0, 0x1
    bgt lbl_fn_80363DBC_00000988
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000988
    lwz r0, 0x84(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80363DBC_00000988
    lwz r31, 0x0(r30)
lbl_fn_80363DBC_00000988:
    cmpwi r31, 0x0
    bne lbl_fn_80363DBC_00000A68
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    ble lbl_fn_80363DBC_000009A8
    subi r0, r3, 0x1
    stw r0, 0x8(r30)
    b lbl_fn_80363DBC_00000BAC
lbl_fn_80363DBC_000009A8:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80363DBC_00000BAC
    cmpwi r0, 0x5
    bne lbl_fn_80363DBC_000009C4
    li r0, 0xf
    stw r0, 0x10(r30)
lbl_fn_80363DBC_000009C4:
    lwz r0, 0x34(r30)
    lwz r3, 0x0(r30)
    cmpwi r0, 0x0
    stw r3, 0x4(r30)
    stw r31, 0x0(r30)
    beq lbl_fn_80363DBC_00000A00
    lwz r3, 0x24(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80363DBC_00000A00
    lfs f0, lbl_808856D4
    li r0, 0x1
    stfs f0, 0x104(r3)
    stw r0, 0x38(r30)
lbl_fn_80363DBC_00000A00:
    lwz r3, 0x44(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000A54
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80363DBC_00000A54
    li r0, 0x0
    stw r0, 0x5c(r3)
    li r4, -0x1
    lwz r3, 0x44(r30)
    li r0, 0x1
    stw r4, 0x50(r3)
    lwz r6, 0x44(r30)
    lwz r5, 0x5c(r6)
    lwz r3, 0x54(r6)
    lwz r4, 0x58(r6)
    add r3, r5, r3
    add r3, r4, r3
    stw r3, 0x4c(r6)
    lwz r3, 0x44(r30)
    stw r0, 0x48(r3)
lbl_fn_80363DBC_00000A54:
    lwz r3, 0x48(r30)
    li r0, 0x0
    stw r0, 0x48(r30)
    bl dtor_80084684
    b lbl_fn_80363DBC_00000BAC
lbl_fn_80363DBC_00000A68:
    lwz r0, 0x0(r30)
    cmpw r0, r31
    beq lbl_fn_80363DBC_00000BAC
    lwz r0, 0x18(r30)
    li r4, 0x3
    stw r31, 0x0(r30)
    li r3, 0x0
    cmpwi r0, 0x0
    stw r4, 0x8(r30)
    bne lbl_fn_80363DBC_00000AA8
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000AA8
    lwz r0, 0x34(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000AAC
lbl_fn_80363DBC_00000AA8:
    li r3, 0x1
lbl_fn_80363DBC_00000AAC:
    cmpwi r3, 0x0
    bne lbl_fn_80363DBC_00000B50
    li r0, 0x0
    lis r27, lbl_80789EB0@ha
    lis r31, lbl_8074CCD0@ha
    stw r0, 0x38(r30)
    addi r27, r27, lbl_80789EB0@l
    li r26, 0x0
    addi r31, r31, lbl_8074CCD0@l
    li r28, 0x0
lbl_fn_80363DBC_00000AD4:
    bl fn_8006BA30
    mulli r4, r3, 0x1f0
    lwz r0, 0x0(r30)
    addi r3, r1, 0x10
    slwi r0, r0, 4
    add r4, r31, r4
    li r5, 0x100
    add r0, r28, r0
    lwzx r4, r4, r0
    bl fn_80363C28
    lwz r4, 0x24(r30)
    lwz r3, 0x0(r27)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0x10
    bl fn_801FEE08
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmpwi r26, 0x4
    addi r28, r28, 0x4
    blt lbl_fn_80363DBC_00000AD4
    lwz r3, 0x24(r30)
    lfs f0, lbl_808856D8
    stfs f0, 0x104(r3)
    lwz r3, 0x24(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_80363DBC_00000B8C
lbl_fn_80363DBC_00000B50:
    lwz r3, 0x44(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000B84
    li r0, 0x7530
    stw r0, 0x5c(r3)
    li r4, 0x1
    lwz r3, 0x44(r30)
    li r0, 0x0
    stw r4, 0x50(r3)
    lwz r3, 0x44(r30)
    stw r0, 0x4c(r3)
    lwz r3, 0x44(r30)
    stw r4, 0x48(r3)
lbl_fn_80363DBC_00000B84:
    mr r3, r30
    bl fn_80364BE8
lbl_fn_80363DBC_00000B8C:
    lwz r3, 0x0(r30)
    subi r0, r3, 0x1
    cmplwi r0, 0x3
    bgt lbl_fn_80363DBC_00000BAC
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000BAC
    bl fn_804FB534
lbl_fn_80363DBC_00000BAC:
    lwz r0, 0x38(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80363DBC_00000BF4
    lwz r4, 0x24(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80363DBC_00000BF4
    lfs f1, 0x100(r4)
    lfs f0, lbl_808856DC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80363DBC_00000BF4
    lwz r3, 0x38(r4)
    li r0, 0x0
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    stw r0, 0x38(r30)
lbl_fn_80363DBC_00000BF4:
    lwz r0, 0x3c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80363DBC_00000C78
    lwz r4, 0x28(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80363DBC_00000C3C
    lfs f1, 0x100(r4)
    lfs f0, lbl_808856DC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80363DBC_00000C3C
    lwz r3, 0x38(r4)
    li r0, 0x0
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    stw r0, 0x3c(r30)
lbl_fn_80363DBC_00000C3C:
    lwz r4, 0x2c(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80363DBC_00000C78
    lfs f1, 0x100(r4)
    lfs f0, lbl_808856DC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80363DBC_00000C78
    lwz r3, 0x38(r4)
    li r0, 0x0
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    stw r0, 0x3c(r30)
lbl_fn_80363DBC_00000C78:
    lwz r5, 0x44(r30)
    cmpwi r5, 0x0
    beq lbl_fn_80363DBC_00000CD8
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80363DBC_00000CD8
    lwz r4, 0x50(r5)
    lis r0, 0x4330
    stw r0, 0x210(r1)
    lis r3, lbl_8074D8B0@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_8074D8B0@l(r3)
    stw r0, 0x214(r1)
    lfs f0, lbl_808856DC
    lfd f1, 0x210(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_80363DBC_00000CD8
    lwz r3, 0x4c(r5)
    lwz r0, 0x54(r5)
    cmpw r3, r0
    blt lbl_fn_80363DBC_00000CD8
    li r0, 0x0
    stw r0, 0x50(r5)
lbl_fn_80363DBC_00000CD8:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000DB4
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80363DBC_00000ED8
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000D10
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80363DBC_00000D10
    li r4, 0x0
    bl fn_800D246C
lbl_fn_80363DBC_00000D10:
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000D3C
    lwz r0, 0x14(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80363DBC_00000D3C
    li r4, 0x0
    li r5, 0x8
    li r6, 0x9
    bl fn_800CF7DC
lbl_fn_80363DBC_00000D3C:
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000D68
    lwz r0, 0x14(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80363DBC_00000D68
    li r4, 0x0
    li r5, 0x8
    li r6, 0x0
    bl fn_8004A2CC
lbl_fn_80363DBC_00000D68:
    lwz r3, lbl_8087F010
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000D98
    lwz r0, 0x8(r3)
    cmpwi r0, 0x5
    bne lbl_fn_80363DBC_00000D98
    lwz r0, 0x14(r30)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80363DBC_00000D98
    li r0, 0x4
    stw r0, 0x8(r3)
lbl_fn_80363DBC_00000D98:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000DA8
    bl fn_8037177C
lbl_fn_80363DBC_00000DA8:
    li r0, 0x0
    stw r0, 0x14(r30)
    b lbl_fn_80363DBC_00000ED8
lbl_fn_80363DBC_00000DB4:
    lwz r0, lbl_8087F610
    li r26, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80363DBC_00000DD8
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    blt lbl_fn_80363DBC_00000DD8
    li r26, 0x0
lbl_fn_80363DBC_00000DD8:
    lwz r27, lbl_8087EF68
    cmpwi r27, 0x0
    beq lbl_fn_80363DBC_00000E18
    mr r3, r27
    addi r4, r1, 0x8
    li r29, 0x1
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80363DBC_00000E0C
    lwz r0, 0x174(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_80363DBC_00000E0C
    li r29, 0x0
lbl_fn_80363DBC_00000E0C:
    cmpwi r29, 0x0
    beq lbl_fn_80363DBC_00000E18
    li r26, 0x0
lbl_fn_80363DBC_00000E18:
    cmpwi r26, 0x0
    beq lbl_fn_80363DBC_00000ED8
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80363DBC_00000ED8
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000E5C
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80363DBC_00000E5C
    li r4, 0x1
    bl fn_800D246C
    lwz r0, 0x14(r30)
    ori r0, r0, 0x1
    stw r0, 0x14(r30)
lbl_fn_80363DBC_00000E5C:
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000E84
    li r4, 0x1
    li r5, 0x8
    li r6, 0x0
    bl fn_800CF7DC
    lwz r0, 0x14(r30)
    ori r0, r0, 0x2
    stw r0, 0x14(r30)
lbl_fn_80363DBC_00000E84:
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000EAC
    li r4, 0x1
    li r5, 0x8
    li r6, 0x0
    bl fn_8004A2CC
    lwz r0, 0x14(r30)
    ori r0, r0, 0x4
    stw r0, 0x14(r30)
lbl_fn_80363DBC_00000EAC:
    lwz r3, lbl_8087F010
    cmpwi r3, 0x0
    beq lbl_fn_80363DBC_00000ED8
    lwz r0, 0x8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80363DBC_00000ED8
    li r0, 0x5
    stw r0, 0x8(r3)
    lwz r0, 0x14(r30)
    ori r0, r0, 0x8
    stw r0, 0x14(r30)
lbl_fn_80363DBC_00000ED8:
    addi r11, r1, 0x230
    bl _restgpr_26
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_803646C4(void)
{
    nofralloc
    stwu r1, -0x400(r1)
    mflr r0
    stw r0, 0x404(r1)
    addi r11, r1, 0x3d0
    stfd f31, 0x3f0(r1)
    psq_st f31, 0x3f8(r1), 0, 0
    stfd f30, 0x3e0(r1)
    psq_st f30, 0x3e8(r1), 0, 0
    stfd f29, 0x3d0(r1)
    psq_st f29, 0x3d8(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0x18(r3)
    mr r26, r3
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_803646C4_00000F48
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803646C4_00000F48
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803646C4_00000F4C
lbl_fn_803646C4_00000F48:
    li r4, 0x1
lbl_fn_803646C4_00000F4C:
    cmpwi r4, 0x0
    bne lbl_fn_803646C4_00001040
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803646C4_000013E4
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803646C4_00000F88
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803646C4_00000F88
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803646C4_000013E4
lbl_fn_803646C4_00000F88:
    lfs f29, lbl_808856E0
    lis r3, lbl_8074D8B8@ha
    lfs f0, lbl_808856E8
    lis r25, lbl_8074CCD0@ha
    lfd f30, lbl_8074D8B8@l(r3)
    addi r25, r25, lbl_8074CCD0@l
    fmuls f31, f0, f29
    li r23, 0x0
    li r22, 0x0
    lis r24, 0x4330
lbl_fn_803646C4_00000FB0:
    bl fn_8006BA30
    mulli r4, r3, 0x1f0
    lwz r0, 0x0(r26)
    addi r3, r1, 0x188
    slwi r0, r0, 4
    add r4, r25, r4
    li r5, 0x100
    add r0, r22, r0
    lwzx r4, r4, r0
    bl fn_80363C28
    stw r23, 0x38c(r1)
    fmr f4, f29
    lfs f6, lbl_808856DC
    fmr f5, f29
    stw r24, 0x388(r1)
    addi r4, r1, 0x188
    lfs f1, lbl_808856E4
    lfd f0, 0x388(r1)
    fmr f7, f6
    fmr f8, f6
    lwz r3, lbl_8087EEB0
    fsubs f0, f0, f30
    lfs f3, lbl_808856EC
    li r5, -0x1
    li r6, 0x1
    fmadds f2, f31, f0, f1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    addi r23, r23, 0x1
    addi r22, r22, 0x4
    cmplwi r23, 0x4
    blt lbl_fn_803646C4_00000FB0
    b lbl_fn_803646C4_000013E4
lbl_fn_803646C4_00001040:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803646C4_000013E4
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803646C4_00001078
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x390(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x394(r1)
    stw r0, 0x398(r1)
    b lbl_fn_803646C4_00001094
lbl_fn_803646C4_00001078:
    lis r5, lbl_80789EC8@ha
    lwzu r4, lbl_80789EC8@l(r5)
    stw r4, 0x390(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x394(r1)
    stw r0, 0x398(r1)
lbl_fn_803646C4_00001094:
    lwz r5, 0x390(r1)
    addi r3, r1, 0x28
    lwz r4, 0x394(r1)
    lwz r0, 0x398(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r0, 0x30(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_803646C4_000013BC
    lfs f2, lbl_808856DC
    lfs f0, lbl_808856D8
    stfs f2, 0x18(r1)
    fcmpo cr0, f2, f0
    lwz r30, lbl_8087EEE0
    stfs f2, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f0, 0x24(r1)
    cror eq, gt, eq
    bne lbl_fn_803646C4_000010EC
    li r27, 0xff
    b lbl_fn_803646C4_00001114
lbl_fn_803646C4_000010EC:
    fcmpo cr0, f2, f2
    cror eq, lt, eq
    bne lbl_fn_803646C4_00001100
    li r3, 0x0
    b lbl_fn_803646C4_00001110
lbl_fn_803646C4_00001100:
    lfs f1, lbl_808856F4
    lfs f0, lbl_808856F0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_803646C4_00001110:
    mr r27, r3
lbl_fn_803646C4_00001114:
    lfs f2, 0x1c(r1)
    lfs f0, lbl_808856D8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_803646C4_00001130
    li r25, 0xff
    b lbl_fn_803646C4_0000115C
lbl_fn_803646C4_00001130:
    lfs f0, lbl_808856DC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_803646C4_00001148
    li r3, 0x0
    b lbl_fn_803646C4_00001158
lbl_fn_803646C4_00001148:
    lfs f1, lbl_808856F4
    lfs f0, lbl_808856F0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_803646C4_00001158:
    mr r25, r3
lbl_fn_803646C4_0000115C:
    lfs f2, 0x20(r1)
    lfs f0, lbl_808856D8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_803646C4_00001178
    li r24, 0xff
    b lbl_fn_803646C4_000011A4
lbl_fn_803646C4_00001178:
    lfs f0, lbl_808856DC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_803646C4_00001190
    li r3, 0x0
    b lbl_fn_803646C4_000011A0
lbl_fn_803646C4_00001190:
    lfs f1, lbl_808856F4
    lfs f0, lbl_808856F0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_803646C4_000011A0:
    mr r24, r3
lbl_fn_803646C4_000011A4:
    lfs f2, 0x24(r1)
    lfs f0, lbl_808856D8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_803646C4_000011C0
    li r3, 0xff
    b lbl_fn_803646C4_000011E8
lbl_fn_803646C4_000011C0:
    lfs f0, lbl_808856DC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_803646C4_000011D8
    li r3, 0x0
    b lbl_fn_803646C4_000011E8
lbl_fn_803646C4_000011D8:
    lfs f1, lbl_808856F4
    lfs f0, lbl_808856F0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_803646C4_000011E8:
    slwi r3, r3, 24
    slwi r0, r27, 16
    or r3, r3, r0
    slwi r0, r25, 8
    or r0, r0, r3
    mr r3, r30
    or r0, r24, r0
    stw r0, 0x48(r30)
    bl fn_8007192C
    mr r3, r30
    bl fn_80075DEC
    lis r3, lbl_8074D8B8@ha
    lis r31, lbl_8074CCD0@ha
    lis r24, lbl_8074D8C0@ha
    lfd f30, lbl_8074D8B8@l(r3)
    lfs f31, lbl_808856D8
    addi r31, r31, lbl_8074CCD0@l
    addi r24, r24, lbl_8074D8C0@l
    li r27, 0x0
    li r29, 0x0
    li r28, 0x32
    lis r25, 0x4330
lbl_fn_803646C4_00001240:
    bl fn_8006BA30
    mulli r4, r3, 0x1f0
    lwz r0, 0x0(r26)
    addi r3, r1, 0x88
    slwi r0, r0, 4
    add r5, r31, r4
    li r22, 0x0
    add r0, r29, r0
    addi r4, r24, 0x64
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    addi r23, r1, 0x88
    b lbl_fn_803646C4_00001384
lbl_fn_803646C4_00001278:
    mr r3, r23
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    bl fn_805F1D30
    lwz r7, 0x48(r26)
    mr r23, r3
    lwz r4, 0x8(r1)
    addi r3, r1, 0x38
    lhz r5, 0x1e(r7)
    li r8, 0x0
    lhz r6, 0x20(r7)
    li r9, 0x0
    lhz r7, 0x18(r7)
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_808856DC
    addi r3, r1, 0x38
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    addi r3, r1, 0x38
    li r4, 0x0
    bl fn_806165B0
    lwz r5, 0x48(r26)
    fmr f3, f31
    stw r25, 0x388(r1)
    addi r3, r1, 0x58
    lhz r4, 0x1e(r5)
    stw r4, 0x38c(r1)
    lhz r0, 0x20(r5)
    lfd f0, 0x388(r1)
    stw r0, 0x3a4(r1)
    fsubs f1, f0, f30
    stw r25, 0x3a0(r1)
    lfd f0, 0x3a0(r1)
    fdivs f1, f31, f1
    fsubs f0, f0, f30
    fdivs f2, f31, f0
    bl fn_805F9160
    addi r3, r1, 0x58
    li r4, 0x1e
    li r5, 0x1
    bl fn_80618420
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r6, 0xc(r1)
    mr r3, r26
    lwz r7, 0x10(r1)
    mr r5, r28
    addi r4, r22, 0x32
    bl fn_80364DB4
    lwz r0, 0x14(r1)
    add r22, r22, r0
lbl_fn_803646C4_00001384:
    lbz r0, 0x0(r23)
    extsb. r0, r0
    bne lbl_fn_803646C4_00001278
    addi r27, r27, 0x1
    addi r28, r28, 0x1e
    cmplwi r27, 0x4
    addi r29, r29, 0x4
    blt lbl_fn_803646C4_00001240
    mr r3, r30
    bl fn_80071AFC
    mr r3, r30
    li r4, 0x1
    bl fn_80071D60
    b lbl_fn_803646C4_000013E4
lbl_fn_803646C4_000013BC:
    lwz r0, 0x34(r26)
    cmpwi r0, 0x0
    beq lbl_fn_803646C4_000013DC
    lwz r3, 0x24(r26)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803646C4_000013E4
lbl_fn_803646C4_000013DC:
    mr r3, r26
    bl fn_80364BE8
lbl_fn_803646C4_000013E4:
    addi r11, r1, 0x3d0
    psq_l f31, 0x3f8(r1), 0, 0
    lfd f31, 0x3f0(r1)
    psq_l f30, 0x3e8(r1), 0, 0
    lfd f30, 0x3e0(r1)
    psq_l f29, 0x3d8(r1), 0, 0
    lfd f29, 0x3d0(r1)
    bl _restgpr_22
    lwz r0, 0x404(r1)
    mtlr r0
    addi r1, r1, 0x400
    blr
}

asm void fn_80364BE8(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    bl fn_805F0E90
    clrlwi r0, r3, 16
    cmplwi r0, 0x1
    bne lbl_fn_80364BE8_0000146C
    lis r5, lbl_8074D8C0@ha
    lis r3, 0x12
    addi r5, r5, lbl_8074D8C0@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0xf00
    li r7, 0x0
    bl fn_800846FC
    mr r0, r3
    lwz r3, 0x48(r31)
    stw r0, 0x48(r31)
    bl dtor_80084684
    b lbl_fn_80364BE8_0000149C
lbl_fn_80364BE8_0000146C:
    lis r5, lbl_8074D8C0@ha
    lis r3, 0x2
    addi r5, r5, lbl_8074D8C0@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x120
    li r7, 0x0
    bl fn_800846FC
    mr r0, r3
    lwz r3, 0x48(r31)
    stw r0, 0x48(r31)
    bl dtor_80084684
lbl_fn_80364BE8_0000149C:
    lwz r3, 0x48(r31)
    bl fn_805F1B50
    lwz r7, lbl_8087EEE0
    lis r4, 0x4330
    lfs f1, lbl_808856DC
    lis r6, lbl_8074D8B0@ha
    lwz r5, 0x40(r7)
    addi r3, r1, 0x38
    lwz r0, 0x3c(r7)
    fmr f3, f1
    xoris r5, r5, 0x8000
    stw r5, 0x7c(r1)
    xoris r0, r0, 0x8000
    lfd f4, lbl_8074D8B0@l(r6)
    stw r4, 0x78(r1)
    fmr f5, f1
    lfs f6, lbl_808856F8
    lfd f0, 0x78(r1)
    stw r0, 0x84(r1)
    fsubs f2, f0, f4
    stw r4, 0x80(r1)
    lfd f0, 0x80(r1)
    fsubs f4, f0, f4
    bl fn_805F95A0
    addi r3, r1, 0x38
    li r4, 0x1
    bl fn_80618290
    addi r3, r1, 0x8
    bl fn_805F8980
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    li r3, 0x1
    li r4, 0x7
    li r5, 0x1
    bl fn_80617E00
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x0
    bl fn_80617D50
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x3
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x3
    li r7, 0x0
    bl fn_80613520
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80364DAC(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_80364DB4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    extsh r31, r4
    extsh r29, r5
    extsh r27, r6
    extsh r25, r7
    lwz r3, 0x48(r3)
    lhz r0, 0x10(r3)
    lhz r9, 0x12(r3)
    li r3, 0x80
    add r8, r31, r0
    add r4, r6, r0
    add r5, r29, r9
    add r0, r7, r9
    extsh r26, r4
    extsh r30, r8
    extsh r28, r5
    extsh r24, r0
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    lis r3, 0xcc01
    li r0, 0x0
    sth r31, -0x8000(r3)
    sth r29, -0x8000(r3)
    sth r0, -0x8000(r3)
    sth r27, -0x8000(r3)
    sth r25, -0x8000(r3)
    sth r30, -0x8000(r3)
    sth r29, -0x8000(r3)
    sth r0, -0x8000(r3)
    sth r26, -0x8000(r3)
    sth r25, -0x8000(r3)
    sth r30, -0x8000(r3)
    sth r28, -0x8000(r3)
    sth r0, -0x8000(r3)
    sth r26, -0x8000(r3)
    sth r24, -0x8000(r3)
    sth r31, -0x8000(r3)
    sth r28, -0x8000(r3)
    sth r0, -0x8000(r3)
    sth r27, -0x8000(r3)
    sth r24, -0x8000(r3)
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80364E7C(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    addi r11, r1, 0x420
    bl _savegpr_26
    lwz r0, 0x34(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80364E7C_00001850
    cmpwi r4, 0x15
    beq lbl_fn_80364E7C_000016E4
    cmpwi r4, 0xc
    beq lbl_fn_80364E7C_000016E4
    cmpwi r4, 0x1e
    bne lbl_fn_80364E7C_000017B0
lbl_fn_80364E7C_000016E4:
    lis r3, lbl_8074CCD0@ha
    lis r28, lbl_80789EC0@ha
    slwi r0, r4, 4
    li r26, 0x0
    addi r3, r3, lbl_8074CCD0@l
    addi r28, r28, lbl_80789EC0@l
    add r29, r3, r0
    li r27, 0x0
lbl_fn_80364E7C_00001704:
    bl fn_8006BA30
    mulli r4, r3, 0x1f0
    add r0, r27, r29
    addi r3, r1, 0x208
    li r5, 0x100
    lwzx r4, r4, r0
    bl fn_80363C28
    lwz r4, 0x2c(r31)
    lwz r3, 0x0(r28)
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    addi r5, r1, 0x208
    bl fn_801FEE08
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x2
    addi r27, r27, 0x4
    blt lbl_fn_80364E7C_00001704
    lwz r4, 0x2c(r31)
    li r0, 0x1
    lfs f1, lbl_808856D8
    mr r3, r31
    stfs f1, 0x104(r4)
    lfs f0, lbl_808856DC
    lwz r4, 0x2c(r31)
    stfs f0, 0x100(r4)
    lwz r5, 0x2c(r31)
    lwz r4, 0x38(r5)
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    lwz r4, 0x30(r31)
    stfs f1, 0x104(r4)
    lwz r4, 0x30(r31)
    stfs f0, 0x100(r4)
    lwz r5, 0x30(r31)
    lwz r4, 0x38(r5)
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    stw r0, 0x40(r31)
    bl fn_8036503C
    b lbl_fn_80364E7C_00001850
lbl_fn_80364E7C_000017B0:
    lis r3, lbl_8074CCD0@ha
    lis r28, lbl_80789EB0@ha
    slwi r0, r4, 4
    li r26, 0x0
    addi r3, r3, lbl_8074CCD0@l
    addi r28, r28, lbl_80789EB0@l
    add r27, r3, r0
    li r29, 0x0
lbl_fn_80364E7C_000017D0:
    bl fn_8006BA30
    mulli r4, r3, 0x1f0
    add r0, r29, r27
    addi r3, r1, 0x8
    li r5, 0x100
    lwzx r4, r4, r0
    bl fn_80363C28
    lwz r4, 0x28(r31)
    lwz r3, 0x0(r28)
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    addi r5, r1, 0x8
    bl fn_801FEE08
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x4
    addi r29, r29, 0x4
    blt lbl_fn_80364E7C_000017D0
    lwz r3, 0x28(r31)
    li r0, 0x0
    lfs f0, lbl_808856D8
    stfs f0, 0x104(r3)
    lfs f0, lbl_808856DC
    lwz r3, 0x28(r31)
    stfs f0, 0x100(r3)
    lwz r4, 0x28(r31)
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    stw r0, 0x40(r31)
lbl_fn_80364E7C_00001850:
    addi r11, r1, 0x420
    bl _restgpr_26
    lwz r0, 0x424(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_8036503C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036503C_00001B28
    lwz r29, 0x2c(r3)
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036503C_00001B28
    lwz r0, 0x40(r3)
    lfs f0, lbl_808856DC
    cmpwi r0, 0x0
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    bne lbl_fn_8036503C_0000191C
    lis r3, lbl_8074D8C0@ha
    addi r3, r3, lbl_8074D8C0@l
    addi r3, r3, 0x68
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x24
    bl fn_801F4E8C
    lfs f4, 0x24(r1)
    lfs f3, 0x28(r1)
    lfs f2, 0x2c(r1)
    lfs f1, 0x30(r1)
    lfs f0, 0x34(r1)
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f2, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f0, 0x48(r1)
    b lbl_fn_8036503C_00001964
lbl_fn_8036503C_0000191C:
    lis r3, lbl_8074D8C0@ha
    addi r3, r3, lbl_8074D8C0@l
    addi r3, r3, 0x76
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x10
    bl fn_801F4E8C
    lfs f4, 0x10(r1)
    lfs f3, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f1, 0x1c(r1)
    lfs f0, 0x20(r1)
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f2, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f0, 0x48(r1)
lbl_fn_8036503C_00001964:
    lwz r4, 0x30(r31)
    lis r30, lbl_8074D8C0@ha
    addi r30, r30, lbl_8074D8C0@l
    lfs f31, 0x38(r1)
    addi r3, r30, 0x84
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x30(r31)
    addi r3, r30, 0x84
    lfs f31, 0x3c(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x30(r31)
    addi r3, r30, 0x84
    lfs f31, 0x48(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x30(r31)
    addi r3, r30, 0x8f
    lfs f31, 0x40(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r4, 0x30(r31)
    addi r3, r30, 0x95
    lfs f31, 0x44(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r29, lbl_8087EF70
    cmpwi r29, 0x0
    beq lbl_fn_8036503C_00001B28
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8036503C_00001A68
    mr r3, r29
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8036503C_00001AB0
lbl_fn_8036503C_00001A68:
    lwz r3, 0x40(r31)
    subic. r3, r3, 0x1
    stw r3, 0x40(r31)
    bge lbl_fn_8036503C_00001A80
    addi r0, r3, 0x2
    stw r0, 0x40(r31)
lbl_fn_8036503C_00001A80:
    lis r4, lbl_8074D8C0@ha
    lfs f1, lbl_808856D8
    addi r4, r4, lbl_8074D8C0@l
    addi r3, r1, 0xc
    addi r4, r4, 0x9b
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8036503C_00001B28
lbl_fn_8036503C_00001AB0:
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8036503C_00001AE0
    mr r3, r29
    li r4, 0x0
    li r5, 0x19
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8036503C_00001B28
lbl_fn_8036503C_00001AE0:
    lwz r3, 0x40(r31)
    addi r3, r3, 0x1
    stw r3, 0x40(r31)
    cmplwi r3, 0x2
    blt lbl_fn_8036503C_00001AFC
    subi r0, r3, 0x2
    stw r0, 0x40(r31)
lbl_fn_8036503C_00001AFC:
    lis r4, lbl_8074D8C0@ha
    lfs f1, lbl_808856D8
    addi r4, r4, lbl_8074D8C0@l
    addi r3, r1, 0x8
    addi r4, r4, 0x9b
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8036503C_00001B28:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
