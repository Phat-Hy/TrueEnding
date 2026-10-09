#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void fn_8009EE30(void);
extern void fn_800A08D4(void);
extern void fn_800BFAC8(void);
extern void fn_800D2338(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_801CE148(void);
extern void fn_801CE4CC(void);
extern void fn_801CE518(void);
extern void fn_801CF334(void);
extern void fn_801D3DF4(void);
extern void fn_801D463C(void);
extern void fn_801D6A88(void);
extern void fn_801D7560(void);
extern void fn_801D77A0(void);
extern void fn_801D8040(void);
extern void fn_801D8060(void);
extern void fn_801E714C(void);
extern void fn_801E75F8(void);
extern void fn_801F4728(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_80202118(void);
extern void fn_80202D00(void);
extern void fn_802091E8(void);
extern void fn_8020BCEC(void);
extern void fn_8020BD14(void);
extern void fn_80211480(void);
extern void fn_80219558(void);
extern void fn_804444E8(void);
extern void fn_80444828(void);
extern void fn_8044493C(void);
extern void fn_80444A50(void);
extern void fn_804A4264(void);
extern void fn_804A4280(void);
extern void fn_804A5E40(void);
extern void fn_804A65A0(void);
extern void fn_8050FD24(void);
extern void fn_8051125C(void);
extern void fn_805112AC(void);
extern void fn_80511AE0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8073C454[];
extern u8 lbl_8073C56C[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7D18[];

/* Small data declarations */
extern u32 lbl_8087DA58;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80882A5C;
extern u32 lbl_80882A74;
extern u32 lbl_80882A78;
extern u32 lbl_80882A7C;
extern u32 lbl_80882A84;
extern u32 lbl_80882A88;
extern u32 lbl_80882A8C;
extern u32 lbl_80882A90;
extern u32 lbl_80882A94;
extern u32 lbl_80882A98;
extern u32 lbl_80882A9C;
extern u32 lbl_80882AA0;
extern u32 lbl_80882AA4;
extern u32 lbl_80882AA8;
extern u32 lbl_80882AAC;
extern u32 lbl_80882AB0;
extern u32 lbl_80882AB4;
extern u32 lbl_80882AB8;
extern u32 lbl_80882ABC;
extern u32 lbl_80882AC0;

/* Function declarations */
void fn_801D14D4(void);
void fn_801D156C(void);
void fn_801D162C(void);
void fn_801D19F0(void);

asm void fn_801D14D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C7030@ha
    addi r4, r3, 0x1b84
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807C7030@l
    lfs f0, lbl_80882A5C
    li r6, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    li r5, 0x0
    stfs f2, 0x1b8c(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f0, 0xb28(r3)
    b lbl_fn_801D14D4_00000058
lbl_fn_801D14D4_00000044:
    lwz r0, 0x54(r3)
    addi r6, r6, 0x1
    add r4, r0, r5
    addi r5, r5, 0x54
    stfs f0, 0x50(r4)
lbl_fn_801D14D4_00000058:
    lwz r0, 0x4c(r3)
    cmpw r6, r0
    blt lbl_fn_801D14D4_00000044
    mr r3, r31
    bl fn_801CE518
    lwz r3, 0xb88(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D14D4_00000084
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0xb88(r31)
lbl_fn_801D14D4_00000084:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801D156C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x1e0(r3)
    stw r4, 0x100(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801D156C_000000D0
    lwz r4, 0x48(r3)
    addi r0, r4, 0x1228
    stw r0, 0x104(r3)
    b lbl_fn_801D156C_000000DC
lbl_fn_801D156C_000000D0:
    lwz r4, 0x48(r3)
    addi r0, r4, 0x126c
    stw r0, 0x104(r3)
lbl_fn_801D156C_000000DC:
    mr r3, r31
    bl fn_801CE518
    lfs f0, lbl_80882A5C
    mr r3, r31
    stfs f0, 0xe0(r31)
    lwz r4, 0x104(r31)
    stfs f0, 0xe4(r31)
    bl fn_801CE148
    lwz r0, 0x1e0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801D156C_00000124
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D156C_0000013C
lbl_fn_801D156C_00000124:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x4
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_fn_801D156C_0000013C:
    lfs f0, lbl_80882A5C
    stfs f0, 0xf8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801D162C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    lis r4, lbl_8073C56C@ha
    lfs f31, lbl_80882A5C
    mr r31, r3
    li r26, 0x0
    addi r29, r4, lbl_8073C56C@l
    li r27, 0x0
    b lbl_fn_801D162C_00000224
lbl_fn_801D162C_00000190:
    lwz r0, 0x50(r31)
    add r3, r0, r27
    lha r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801D162C_000001D8
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_0000021C
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_0000021C
    lwz r3, 0x50(r31)
    lwzx r3, r3, r27
    bl fn_80202D00
    fmr f1, f31
    addi r4, r29, 0x307
    bl fn_801F6C80
    b lbl_fn_801D162C_0000021C
lbl_fn_801D162C_000001D8:
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_0000021C
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_0000021C
    lwz r3, 0x50(r31)
    addi r28, r29, 0x307
    lwzx r3, r3, r27
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_0000021C:
    addi r27, r27, 0x40
    addi r26, r26, 0x1
lbl_fn_801D162C_00000224:
    lwz r0, 0x4c(r31)
    cmpw r26, r0
    blt lbl_fn_801D162C_00000190
    lwz r3, 0xacc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000278
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000278
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xacc(r31)
    addi r4, r4, lbl_8073C56C@l
    addi r28, r4, 0x307
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_00000278:
    lwz r3, 0xad0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_000002C0
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_000002C0
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xad0(r31)
    addi r4, r4, lbl_8073C56C@l
    addi r28, r4, 0x307
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_000002C0:
    lwz r3, 0xad4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000308
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000308
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xad4(r31)
    addi r4, r4, lbl_8073C56C@l
    addi r28, r4, 0x307
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_00000308:
    lwz r3, 0xad8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000350
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000350
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xad8(r31)
    addi r4, r4, lbl_8073C56C@l
    addi r28, r4, 0x307
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_00000350:
    lwz r3, 0xadc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000398
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000398
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xadc(r31)
    addi r4, r4, lbl_8073C56C@l
    addi r28, r4, 0x307
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_00000398:
    lwz r3, 0xae0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_000003E0
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_000003E0
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xae0(r31)
    addi r4, r4, lbl_8073C56C@l
    addi r28, r4, 0x307
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_000003E0:
    lwz r3, 0xb0c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000428
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000428
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xb0c(r31)
    addi r4, r4, lbl_8073C56C@l
    addi r28, r4, 0x307
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_00000428:
    lis r3, lbl_8073C56C@ha
    mr r29, r31
    addi r3, r3, lbl_8073C56C@l
    li r26, 0x0
    addi r28, r3, 0x307
lbl_fn_801D162C_0000043C:
    lwz r3, 0x13c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000478
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_00000478
    lwz r3, 0x13c(r29)
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_00000478:
    addi r26, r26, 0x1
    addi r29, r29, 0x48
    cmpwi r26, 0x3
    blt lbl_fn_801D162C_0000043C
    lwz r3, 0xb24(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_000004D0
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D162C_000004D0
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xb24(r31)
    addi r4, r4, lbl_8073C56C@l
    addi r28, r4, 0x307
    bl fn_80202118
    mr r30, r3
    mr r3, r28
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_000004D0:
    lwz r27, 0xb30(r31)
    cmpwi r27, 0x0
    beq lbl_fn_801D162C_000004FC
    lis r3, lbl_8073C56C@ha
    addi r3, r3, lbl_8073C56C@l
    addi r3, r3, 0x307
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r27, 0x58
    bl fn_801FECE0
lbl_fn_801D162C_000004FC:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801D19F0(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    stw r0, 0x2c4(r1)
    addi r11, r1, 0x2a0
    stfd f31, 0x2b0(r1)
    psq_st f31, 0x2b8(r1), 0, 0
    stfd f30, 0x2a0(r1)
    psq_st f30, 0x2a8(r1), 0, 0
    bl _savegpr_14
    lis r4, lbl_807C7030@ha
    addi r14, r1, 0x14c
    addi r4, r4, lbl_807C7030@l
    mr r15, r3
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x154(r1)
    bl fn_801D6A88
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00000584
    lis r3, lbl_807C7D18@ha
    addi r3, r3, lbl_807C7D18@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x154(r1)
lbl_fn_801D19F0_00000584:
    lfs f7, 0x150(r1)
    lis r6, lbl_807C7030@ha
    lfs f9, 0x1b88(r15)
    addi r5, r1, 0x128
    lfs f0, 0x154(r1)
    addi r4, r15, 0x1b84
    fsubs f30, f7, f9
    lfs f10, 0x1b8c(r15)
    lfs f8, 0x14c(r1)
    addi r6, r6, lbl_807C7030@l
    fsubs f31, f0, f10
    lfs f0, lbl_80882A88
    lfs f7, 0x1b84(r15)
    fmuls f11, f30, f0
    fmuls f12, f31, f0
    stfs f30, 0x18(r1)
    fsubs f13, f8, f7
    mr r3, r15
    fadds f8, f11, f9
    fadds f10, f12, f10
    fmuls f9, f13, f0
    stfs f8, 0x12c(r1)
    fmr f2, f10
    stfs f13, 0x14(r1)
    fadds f0, f9, f7
    stfs f2, 0x1b8c(r15)
    stfs f0, 0x128(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    stfs f31, 0x1c(r1)
    stfs f9, 0x8(r1)
    stfs f11, 0xc(r1)
    stfs f12, 0x10(r1)
    stfs f10, 0x130(r1)
    psq_st f1, 0x478(r15), 0, 0
    stfs f2, 0x480(r15)
    bl fn_801D6A88
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00000698
    lwz r3, 0x1ba0(r15)
    subi r0, r3, 0x8
    cmplwi r0, 0x4
    ble lbl_fn_801D19F0_00000684
    cmplwi r3, 0x3
    ble lbl_fn_801D19F0_00000654
    cmpwi r3, 0x4
    blt lbl_fn_801D19F0_00000698
    cmpwi r3, 0x7
    ble lbl_fn_801D19F0_0000066C
    b lbl_fn_801D19F0_00000698
lbl_fn_801D19F0_00000654:
    addi r3, r15, 0xaa8
    lfs f2, 0xab0(r15)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x478(r15), 0, 0
    stfs f2, 0x480(r15)
    b lbl_fn_801D19F0_00000698
lbl_fn_801D19F0_0000066C:
    addi r3, r15, 0xab4
    lfs f2, 0xabc(r15)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x478(r15), 0, 0
    stfs f2, 0x480(r15)
    b lbl_fn_801D19F0_00000698
lbl_fn_801D19F0_00000684:
    addi r3, r15, 0xac0
    lfs f2, 0xac8(r15)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x478(r15), 0, 0
    stfs f2, 0x480(r15)
lbl_fn_801D19F0_00000698:
    lwz r4, 0xacc(r15)
    li r18, 0x0
    lis r27, lbl_8073C454@ha
    lis r28, lbl_8073C56C@ha
    lwz r3, 0x104(r4)
    li r0, -0x1
    lfs f30, lbl_80882A90
    mr r20, r18
    rlwinm r3, r3, 0, 9, 7
    stw r3, 0x104(r4)
    mr r25, r18
    mr r26, r18
    lwz r4, 0xad0(r15)
    mr r23, r18
    addi r27, r27, lbl_8073C454@l
    addi r19, r1, 0x220
    lwz r3, 0x104(r4)
    addi r28, r28, lbl_8073C56C@l
    li r31, 0x0
    li r30, 0x0
    rlwinm r3, r3, 0, 9, 7
    stw r3, 0x104(r4)
    li r29, 0x0
    li r21, 0x1
    lwz r4, 0xad4(r15)
    li r22, 0xb
    li r24, 0x2
    li r14, 0xc
    lwz r3, 0x104(r4)
    rlwinm r3, r3, 0, 9, 7
    stw r3, 0x104(r4)
    lwz r4, 0xad8(r15)
    lwz r3, 0x104(r4)
    rlwinm r3, r3, 0, 9, 7
    stw r3, 0x104(r4)
    lwz r4, 0xadc(r15)
    lwz r3, 0x104(r4)
    rlwinm r3, r3, 0, 9, 7
    stw r3, 0x104(r4)
    lwz r4, 0xae0(r15)
    lwz r3, 0x104(r4)
    rlwinm r3, r3, 0, 9, 7
    stw r3, 0x104(r4)
    stw r0, 0x144(r15)
    stw r0, 0x148(r15)
    stw r0, 0x18c(r15)
    stw r0, 0x190(r15)
    stw r0, 0x1d4(r15)
    stw r0, 0x1d8(r15)
    stw r0, 0xb8c(r15)
    b lbl_fn_801D19F0_00000AEC
lbl_fn_801D19F0_00000764:
    lwz r3, 0x50(r15)
    cmpwi r18, 0x1
    lwz r0, 0x54(r15)
    lfs f31, lbl_80882A78
    add r17, r3, r30
    add r16, r0, r31
    bne lbl_fn_801D19F0_00000850
    stw r20, 0x0(r17)
    lfs f31, lbl_80882A8C
    lwz r0, 0x1f0(r15)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_000007F4
    lwz r3, 0x1ec(r15)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_801D19F0_000007C8
    cmpwi r3, 0x1
    bne lbl_fn_801D19F0_000007D4
    lwz r0, 0xad0(r15)
    stw r0, 0x0(r17)
    lwz r3, 0xad0(r15)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    b lbl_fn_801D19F0_000007EC
lbl_fn_801D19F0_000007C8:
    stw r21, 0x144(r15)
    stw r22, 0x148(r15)
    b lbl_fn_801D19F0_000007EC
lbl_fn_801D19F0_000007D4:
    lwz r0, 0xacc(r15)
    stw r0, 0x0(r17)
    lwz r3, 0xacc(r15)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
lbl_fn_801D19F0_000007EC:
    lwz r16, 0xe8(r15)
    b lbl_fn_801D19F0_000009A4
lbl_fn_801D19F0_000007F4:
    lwz r3, 0x1e8(r15)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_801D19F0_00000828
    cmpwi r3, 0x1
    bne lbl_fn_801D19F0_00000834
    lwz r0, 0xad0(r15)
    stw r0, 0x0(r17)
    lwz r3, 0xad0(r15)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    b lbl_fn_801D19F0_000009A4
lbl_fn_801D19F0_00000828:
    stw r21, 0x144(r15)
    stw r21, 0x148(r15)
    b lbl_fn_801D19F0_000009A4
lbl_fn_801D19F0_00000834:
    lwz r0, 0xacc(r15)
    stw r0, 0x0(r17)
    lwz r3, 0xacc(r15)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    b lbl_fn_801D19F0_000009A4
lbl_fn_801D19F0_00000850:
    cmpwi r18, 0x2
    bne lbl_fn_801D19F0_000008CC
    stw r23, 0x0(r17)
    lfs f31, lbl_80882A8C
    lwz r0, 0x1f0(r15)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_000009A4
    lwz r3, 0x1e8(r15)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_801D19F0_000008A0
    cmpwi r3, 0x1
    bne lbl_fn_801D19F0_000008AC
    lwz r0, 0xad0(r15)
    stw r0, 0x0(r17)
    lwz r3, 0xad0(r15)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    b lbl_fn_801D19F0_000008C4
lbl_fn_801D19F0_000008A0:
    stw r24, 0x144(r15)
    stw r14, 0x148(r15)
    b lbl_fn_801D19F0_000008C4
lbl_fn_801D19F0_000008AC:
    lwz r0, 0xacc(r15)
    stw r0, 0x0(r17)
    lwz r3, 0xacc(r15)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
lbl_fn_801D19F0_000008C4:
    lwz r16, 0xec(r15)
    b lbl_fn_801D19F0_000009A4
lbl_fn_801D19F0_000008CC:
    cmpwi r18, 0x8
    bne lbl_fn_801D19F0_0000092C
    stw r25, 0x0(r17)
    lfs f31, lbl_80882A8C
    lwz r0, 0x1f0(r15)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_0000090C
    lwz r6, 0x1ec(r15)
    mr r3, r15
    mr r4, r17
    addi r5, r15, 0x108
    li r7, 0x8
    li r8, 0xb
    bl fn_801D463C
    lwz r16, 0xe8(r15)
    b lbl_fn_801D19F0_000009A4
lbl_fn_801D19F0_0000090C:
    lwz r6, 0x1e8(r15)
    mr r3, r15
    mr r4, r17
    addi r5, r15, 0x108
    li r7, 0x8
    li r8, 0x1
    bl fn_801D463C
    b lbl_fn_801D19F0_000009A4
lbl_fn_801D19F0_0000092C:
    cmpwi r18, 0x9
    bne lbl_fn_801D19F0_0000096C
    stw r26, 0x0(r17)
    lfs f31, lbl_80882A8C
    lwz r0, 0x1f0(r15)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_000009A4
    lwz r6, 0x1e8(r15)
    mr r3, r15
    mr r4, r17
    addi r5, r15, 0x108
    li r7, 0x9
    li r8, 0xc
    bl fn_801D463C
    lwz r16, 0xec(r15)
    b lbl_fn_801D19F0_000009A4
lbl_fn_801D19F0_0000096C:
    add r3, r27, r29
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_000009A4
    mr r3, r15
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_000009A4
    lwz r3, 0x48(r15)
    lfs f0, 0x458(r3)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_801D19F0_000009A4
    lfs f31, lbl_80882A74
lbl_fn_801D19F0_000009A4:
    lwz r12, 0x0(r15)
    fmr f1, f31
    mr r3, r15
    mr r4, r17
    lwz r12, 0x60(r12)
    mr r5, r16
    li r6, 0x7
    mtctr r12
    bctrl
    lwz r4, 0x8(r17)
    cmpwi r4, 0x0
    bne lbl_fn_801D19F0_000009DC
    li r0, 0x0
    b lbl_fn_801D19F0_000009E0
lbl_fn_801D19F0_000009DC:
    mr r0, r4
lbl_fn_801D19F0_000009E0:
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_00000AA4
    add r3, r27, r29
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_00000AA4
    cmpwi r4, 0x0
    bne lbl_fn_801D19F0_00000A04
    li r4, 0x0
lbl_fn_801D19F0_00000A04:
    lfs f7, 0x5c(r4)
    lfs f0, 0x1b8c(r15)
    lfs f9, 0x4c(r4)
    fadds f0, f7, f0
    lfs f7, 0x1b88(r15)
    lwz r3, 0x8(r17)
    fadds f7, f9, f7
    lfs f10, 0x3c(r4)
    lfs f8, 0x1b84(r15)
    stfs f0, 0x148(r1)
    cmpwi r3, 0x0
    fadds f0, f10, f8
    stfs f7, 0x144(r1)
    stfs f0, 0x140(r1)
    bne lbl_fn_801D19F0_00000A44
    li r3, 0x0
lbl_fn_801D19F0_00000A44:
    psq_l f1, 0x30(r3), 0, 0
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x28(r19), 0, 0
    lfs f0, 0x148(r1)
    psq_st f2, 0x8(r19), 0, 0
    lfs f8, 0x140(r1)
    psq_st f4, 0x18(r19), 0, 0
    lfs f7, 0x144(r1)
    psq_st f1, 0x0(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    stfs f8, 0x22c(r1)
    stfs f7, 0x23c(r1)
    stfs f0, 0x24c(r1)
    lwz r3, 0x8(r17)
    cmpwi r3, 0x0
    bne lbl_fn_801D19F0_00000A9C
    li r3, 0x0
lbl_fn_801D19F0_00000A9C:
    addi r4, r1, 0x220
    bl fn_8009EE30
lbl_fn_801D19F0_00000AA4:
    lwz r12, 0x0(r15)
    mr r3, r15
    mr r4, r17
    addi r5, r28, 0x30f
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r15)
    mr r3, r15
    mr r4, r17
    addi r5, r28, 0x30f
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    addi r18, r18, 0x1
    addi r31, r31, 0x54
    addi r30, r30, 0x40
    addi r29, r29, 0x14
lbl_fn_801D19F0_00000AEC:
    lwz r0, 0x4c(r15)
    cmpw r18, r0
    blt lbl_fn_801D19F0_00000764
    lwz r4, 0xb2c(r15)
    lis r14, lbl_8073C56C@ha
    addi r14, r14, lbl_8073C56C@l
    lwz r0, 0x38(r4)
    addi r3, r14, 0x319
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb2c(r15)
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A94
    mr r4, r3
    mr r3, r16
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0xb2c(r15)
    addi r3, r14, 0x319
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A98
    mr r4, r3
    mr r3, r14
    li r5, 0x1
    bl fn_801FED24
    lwz r0, 0x7c(r15)
    cmpwi r0, 0xb
    bne lbl_fn_801D19F0_00000B84
    lwz r3, 0xb2c(r15)
    lfs f0, lbl_80882A9C
    stfs f0, 0x104(r3)
    lwz r3, 0xb2c(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_801D19F0_00000BB0
lbl_fn_801D19F0_00000B84:
    lwz r3, 0xb2c(r15)
    lfs f0, lbl_80882A84
    stfs f0, 0x104(r3)
    lfs f0, lbl_80882A5C
    lwz r3, 0xb2c(r15)
    lfs f7, 0x100(r3)
    fcmpo cr0, f7, f0
    ble lbl_fn_801D19F0_00000BB0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_801D19F0_00000BB0:
    lwz r4, 0xb30(r15)
    lis r16, lbl_8073C56C@ha
    addi r16, r16, lbl_8073C56C@l
    lwz r0, 0x38(r4)
    addi r3, r16, 0x324
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb30(r15)
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A94
    mr r4, r3
    mr r3, r14
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0xb30(r15)
    addi r3, r16, 0x324
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882AA0
    mr r4, r3
    mr r3, r14
    li r5, 0x1
    bl fn_801FED24
    lwz r14, lbl_8087F4F0
    li r4, 0x0
    mr r3, r14
    bl fn_80444A50
    mr r4, r3
    mr r3, r14
    bl fn_804444E8
    neg r0, r3
    lwz r17, lbl_8087F4F0
    andc r0, r0, r3
    li r4, 0x1
    mr r3, r17
    srwi r14, r0, 31
    bl fn_80444A50
    mr r4, r3
    mr r3, r17
    bl fn_804444E8
    neg r0, r3
    lwz r4, 0xb30(r15)
    andc r0, r0, r3
    cmpwi r14, 0x0
    addi r3, r16, 0x32c
    addi r16, r4, 0x58
    srwi r14, r0, 31
    beq lbl_fn_801D19F0_00000C7C
    lfs f30, lbl_80882A74
    b lbl_fn_801D19F0_00000C80
lbl_fn_801D19F0_00000C7C:
    lfs f30, lbl_80882A5C
lbl_fn_801D19F0_00000C80:
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lis r3, lbl_8073C56C@ha
    lwz r4, 0xb30(r15)
    cmpwi r14, 0x0
    addi r3, r3, lbl_8073C56C@l
    addi r14, r4, 0x58
    addi r3, r3, 0x335
    beq lbl_fn_801D19F0_00000CB8
    lfs f30, lbl_80882A74
    b lbl_fn_801D19F0_00000CBC
lbl_fn_801D19F0_00000CB8:
    lfs f30, lbl_80882A5C
lbl_fn_801D19F0_00000CBC:
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
    lwz r0, 0x7c(r15)
    cmpwi r0, 0xe
    bne lbl_fn_801D19F0_00000CFC
    lwz r3, 0xb30(r15)
    lfs f0, lbl_80882A9C
    stfs f0, 0x104(r3)
    lwz r3, 0xb30(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_801D19F0_00000D28
lbl_fn_801D19F0_00000CFC:
    lwz r3, 0xb30(r15)
    lfs f0, lbl_80882A84
    stfs f0, 0x104(r3)
    lfs f0, lbl_80882A5C
    lwz r3, 0xb30(r15)
    lfs f7, 0x100(r3)
    fcmpo cr0, f7, f0
    ble lbl_fn_801D19F0_00000D28
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_801D19F0_00000D28:
    lfs f7, lbl_80882A74
    lis r18, lbl_8073C56C@ha
    lfs f0, lbl_80882A5C
    addi r18, r18, lbl_8073C56C@l
    stfs f7, 0x110(r1)
    mr r3, r15
    addi r6, r1, 0x11c
    addi r7, r1, 0x110
    stfs f7, 0x114(r1)
    addi r8, r18, 0x30f
    stfs f7, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f0, 0x120(r1)
    stfs f0, 0x124(r1)
    lwz r4, 0x50(r15)
    lwz r5, 0xb0c(r15)
    addi r4, r4, 0xc0
    bl fn_8051125C
    lfs f7, lbl_80882A74
    mr r3, r15
    lfs f0, lbl_80882A5C
    addi r6, r1, 0x104
    stfs f7, 0xf8(r1)
    addi r7, r1, 0xf8
    addi r8, r18, 0x30f
    stfs f7, 0xfc(r1)
    stfs f7, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f0, 0x108(r1)
    stfs f0, 0x10c(r1)
    lwz r4, 0x50(r15)
    lwz r5, 0xb10(r15)
    addi r4, r4, 0xc0
    bl fn_8051125C
    lfs f7, lbl_80882A74
    mr r3, r15
    lfs f0, lbl_80882A5C
    addi r6, r1, 0xec
    stfs f7, 0xe0(r1)
    addi r7, r1, 0xe0
    addi r8, r18, 0x30f
    stfs f7, 0xe4(r1)
    stfs f7, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f0, 0xf0(r1)
    stfs f0, 0xf4(r1)
    lwz r4, 0x50(r15)
    lwz r5, 0xb18(r15)
    addi r4, r4, 0x280
    bl fn_8051125C
    mr r3, r15
    bl fn_801D3DF4
    lwz r3, 0xadc(r15)
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00000FD4
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00000FD4
    mr r3, r15
    bl fn_801D8040
    cmpwi r3, 0x0
    mr r14, r3
    beq lbl_fn_801D19F0_00000FD4
    lwz r3, 0x8(r3)
    bl fn_8020BCEC
    mr r17, r3
    lwz r3, lbl_8087F4F0
    lwz r4, 0x8(r14)
    bl fn_80444828
    mr r14, r3
    bl fn_80211480
    cmpwi r17, 0x0
    mr r16, r3
    beq lbl_fn_801D19F0_00000F18
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00000F18
    lwz r3, lbl_8087F4F0
    mr r4, r14
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801D19F0_00000F18
    lwz r3, 0xadc(r15)
    addi r19, r18, 0x33e
    bl fn_80202118
    mr r14, r3
    mr r3, r19
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r14, 0x58
    addi r5, r17, 0x14
    bl fn_801FEE08
    lwz r3, 0xadc(r15)
    addi r19, r18, 0x348
    bl fn_80202118
    mr r14, r3
    mr r3, r19
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r14, 0x58
    addi r5, r17, 0x14
    bl fn_801FEE08
    lwz r17, 0x8(r16)
    addi r16, r18, 0x355
    lwz r3, 0xadc(r15)
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r17
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xadc(r15)
    addi r16, r18, 0x360
    la r17, lbl_8087DA58
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r17
    addi r3, r14, 0x58
    bl fn_801FEE08
    b lbl_fn_801D19F0_00000FD4
lbl_fn_801D19F0_00000F18:
    lis r16, lbl_8073C56C@ha
    la r17, lbl_8087DA58
    addi r16, r16, lbl_8073C56C@l
    lwz r3, 0xadc(r15)
    addi r19, r17, 0x2
    addi r18, r16, 0x33e
    bl fn_80202118
    mr r14, r3
    mr r3, r18
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xadc(r15)
    mr r18, r19
    addi r17, r16, 0x348
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r18
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xadc(r15)
    addi r17, r16, 0x355
    la r18, lbl_8087DA58
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r18
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xadc(r15)
    addi r16, r16, 0x360
    la r17, lbl_8087DA58
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r17
    addi r3, r14, 0x58
    bl fn_801FEE08
lbl_fn_801D19F0_00000FD4:
    lwz r3, 0xae0(r15)
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00001294
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00001294
    mr r3, r15
    bl fn_801D8060
    cmpwi r3, 0x0
    mr r14, r3
    beq lbl_fn_801D19F0_00001294
    lwz r3, 0x8(r3)
    bl fn_8020BD14
    mr r17, r3
    lwz r3, lbl_8087F4F0
    lwz r4, 0x8(r14)
    bl fn_8044493C
    mr r16, r3
    bl fn_80211480
    lwz r0, 0x8(r14)
    cmpwi r0, 0x1f
    bne lbl_fn_801D19F0_00001100
    li r3, 0x0
    li r4, 0x2740
    bl fn_80116FC0
    lis r16, lbl_8073C56C@ha
    mr r18, r3
    addi r16, r16, lbl_8073C56C@l
    lwz r3, 0xae0(r15)
    addi r17, r16, 0x33e
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r18
    addi r3, r14, 0x58
    bl fn_801FEE08
    li r3, 0x0
    li r4, 0x2740
    bl fn_80116FC0
    mr r18, r3
    lwz r3, 0xae0(r15)
    addi r17, r16, 0x348
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r18
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xae0(r15)
    addi r17, r16, 0x355
    la r18, lbl_8087DA58
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r18
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xae0(r15)
    addi r16, r16, 0x360
    la r17, lbl_8087DA58
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r17
    addi r3, r14, 0x58
    bl fn_801FEE08
    b lbl_fn_801D19F0_00001294
lbl_fn_801D19F0_00001100:
    cmpwi r17, 0x0
    beq lbl_fn_801D19F0_000011D8
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_000011D8
    lwz r3, lbl_8087F4F0
    mr r4, r16
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801D19F0_000011D8
    lis r16, lbl_8073C56C@ha
    lwz r3, 0xae0(r15)
    addi r16, r16, lbl_8073C56C@l
    addi r18, r16, 0x33e
    bl fn_80202118
    mr r14, r3
    mr r3, r18
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r14, 0x58
    addi r5, r17, 0x14
    bl fn_801FEE08
    lwz r3, 0xae0(r15)
    addi r18, r16, 0x348
    bl fn_80202118
    mr r14, r3
    mr r3, r18
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r14, 0x58
    addi r5, r17, 0x14
    bl fn_801FEE08
    lwz r3, 0xae0(r15)
    addi r17, r16, 0x355
    la r18, lbl_8087DA58
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r18
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xae0(r15)
    addi r16, r16, 0x360
    la r17, lbl_8087DA58
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r17
    addi r3, r14, 0x58
    bl fn_801FEE08
    b lbl_fn_801D19F0_00001294
lbl_fn_801D19F0_000011D8:
    lis r16, lbl_8073C56C@ha
    la r17, lbl_8087DA58
    addi r16, r16, lbl_8073C56C@l
    lwz r3, 0xae0(r15)
    addi r19, r17, 0x2
    addi r18, r16, 0x33e
    bl fn_80202118
    mr r14, r3
    mr r3, r18
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xae0(r15)
    mr r18, r19
    addi r17, r16, 0x348
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r18
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xae0(r15)
    addi r17, r16, 0x355
    la r18, lbl_8087DA58
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r18
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, 0xae0(r15)
    addi r16, r16, 0x360
    la r17, lbl_8087DA58
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r17
    addi r3, r14, 0x58
    bl fn_801FEE08
lbl_fn_801D19F0_00001294:
    lis r3, lbl_8073C56C@ha
    lfs f31, lbl_80882A74
    lfs f30, lbl_80882A5C
    addi r14, r15, 0xcf8
    addi r19, r3, lbl_8073C56C@l
    li r17, 0x0
lbl_fn_801D19F0_000012AC:
    mr r16, r14
    li r18, 0x0
lbl_fn_801D19F0_000012B4:
    lwz r4, 0x0(r16)
    cmpwi r4, 0x0
    beq lbl_fn_801D19F0_000013C8
    lwz r0, 0xb8c(r15)
    cmpwi r0, 0x0
    blt lbl_fn_801D19F0_000013AC
    lwz r0, 0x7c(r15)
    cmpwi r0, 0x5
    beq lbl_fn_801D19F0_000012E0
    cmpwi r0, 0x8
    bne lbl_fn_801D19F0_000013AC
lbl_fn_801D19F0_000012E0:
    lwz r0, 0xc(r16)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_0000134C
    lwz r0, 0x104(r4)
    mr r3, r15
    addi r6, r1, 0xd4
    addi r7, r1, 0xc8
    oris r0, r0, 0x80
    stw r0, 0x104(r4)
    addi r8, r19, 0x30f
    lwz r4, 0x4(r16)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    stfs f31, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f31, 0xd0(r1)
    stfs f30, 0xd4(r1)
    stfs f30, 0xd8(r1)
    stfs f30, 0xdc(r1)
    lwz r0, 0xb8c(r15)
    lwz r4, 0x50(r15)
    slwi r0, r0, 6
    lwz r5, 0x0(r16)
    add r4, r4, r0
    bl fn_805112AC
    b lbl_fn_801D19F0_000013C8
lbl_fn_801D19F0_0000134C:
    lwz r0, 0x104(r4)
    mr r3, r15
    addi r6, r1, 0xbc
    addi r7, r1, 0xb0
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    addi r8, r19, 0x30f
    lwz r4, 0x4(r16)
    lwz r0, 0x104(r4)
    oris r0, r0, 0x80
    stw r0, 0x104(r4)
    stfs f31, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f31, 0xb8(r1)
    stfs f30, 0xbc(r1)
    stfs f30, 0xc0(r1)
    stfs f30, 0xc4(r1)
    lwz r0, 0xb8c(r15)
    lwz r4, 0x50(r15)
    slwi r0, r0, 6
    lwz r5, 0x4(r16)
    add r4, r4, r0
    bl fn_805112AC
    b lbl_fn_801D19F0_000013C8
lbl_fn_801D19F0_000013AC:
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r3, 0x4(r16)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
lbl_fn_801D19F0_000013C8:
    addi r18, r18, 0x1
    addi r16, r16, 0x10
    cmpwi r18, 0x8
    blt lbl_fn_801D19F0_000012B4
    addi r17, r17, 0x1
    addi r14, r14, 0x80
    cmpwi r17, 0x8
    blt lbl_fn_801D19F0_000012AC
    lis r3, lbl_8073C56C@ha
    lfs f31, lbl_80882A74
    lfs f30, lbl_80882A5C
    addi r16, r15, 0x10f8
    addi r14, r3, lbl_8073C56C@l
    li r18, 0x0
lbl_fn_801D19F0_00001400:
    mr r17, r16
    li r19, 0x0
lbl_fn_801D19F0_00001408:
    lwz r4, 0x0(r17)
    cmpwi r4, 0x0
    beq lbl_fn_801D19F0_0000155C
    lwz r0, 0xb8c(r15)
    cmpwi r0, 0x0
    blt lbl_fn_801D19F0_00001540
    lwz r0, 0x7c(r15)
    cmpwi r0, 0x5
    beq lbl_fn_801D19F0_00001434
    cmpwi r0, 0x9
    bne lbl_fn_801D19F0_00001540
lbl_fn_801D19F0_00001434:
    lwz r0, 0xc(r17)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_000014E0
    lwz r0, 0x104(r4)
    mr r3, r15
    addi r6, r1, 0xa4
    addi r7, r1, 0x98
    oris r0, r0, 0x80
    stw r0, 0x104(r4)
    addi r8, r14, 0x30f
    lwz r4, 0x4(r17)
    lwz r0, 0x104(r4)
    oris r0, r0, 0x80
    stw r0, 0x104(r4)
    stfs f31, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f31, 0xa0(r1)
    stfs f30, 0xa4(r1)
    stfs f30, 0xa8(r1)
    stfs f30, 0xac(r1)
    lwz r0, 0xb8c(r15)
    lwz r4, 0x50(r15)
    slwi r0, r0, 6
    lwz r5, 0x0(r17)
    add r4, r4, r0
    bl fn_805112AC
    stfs f31, 0x80(r1)
    mr r3, r15
    addi r6, r1, 0x8c
    addi r7, r1, 0x80
    stfs f31, 0x84(r1)
    addi r8, r14, 0x30f
    stfs f31, 0x88(r1)
    stfs f30, 0x8c(r1)
    stfs f30, 0x90(r1)
    stfs f30, 0x94(r1)
    lwz r0, 0xb8c(r15)
    lwz r4, 0x50(r15)
    slwi r0, r0, 6
    lwz r5, 0x4(r17)
    add r4, r4, r0
    bl fn_805112AC
    b lbl_fn_801D19F0_0000155C
lbl_fn_801D19F0_000014E0:
    lwz r0, 0x104(r4)
    mr r3, r15
    addi r6, r1, 0x74
    addi r7, r1, 0x68
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    addi r8, r14, 0x30f
    lwz r4, 0x4(r17)
    lwz r0, 0x104(r4)
    oris r0, r0, 0x80
    stw r0, 0x104(r4)
    stfs f31, 0x68(r1)
    stfs f31, 0x6c(r1)
    stfs f31, 0x70(r1)
    stfs f30, 0x74(r1)
    stfs f30, 0x78(r1)
    stfs f30, 0x7c(r1)
    lwz r0, 0xb8c(r15)
    lwz r4, 0x50(r15)
    slwi r0, r0, 6
    lwz r5, 0x4(r17)
    add r4, r4, r0
    bl fn_805112AC
    b lbl_fn_801D19F0_0000155C
lbl_fn_801D19F0_00001540:
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r3, 0x4(r17)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
lbl_fn_801D19F0_0000155C:
    addi r19, r19, 0x1
    addi r17, r17, 0x10
    cmpwi r19, 0x4
    blt lbl_fn_801D19F0_00001408
    addi r18, r18, 0x1
    addi r16, r16, 0x40
    cmpwi r18, 0x8
    blt lbl_fn_801D19F0_00001400
    mr r3, r15
    bl fn_801CF334
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_0000159C
    mr r3, r15
    bl fn_801CF334
    lwz r16, 0x4c(r3)
    b lbl_fn_801D19F0_000015A0
lbl_fn_801D19F0_0000159C:
    li r16, -0x1
lbl_fn_801D19F0_000015A0:
    mr r3, r15
    bl fn_801CF334
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_000015C0
    mr r3, r15
    bl fn_801CF334
    lwz r19, 0x48(r3)
    b lbl_fn_801D19F0_000015C4
lbl_fn_801D19F0_000015C0:
    li r19, 0x0
lbl_fn_801D19F0_000015C4:
    cmpwi r19, 0x0
    bne lbl_fn_801D19F0_000015E8
    cmpwi r16, 0x0
    bge lbl_fn_801D19F0_000015E8
    lwz r3, lbl_8087F8A0
    lwz r19, 0x48(r3)
    lwz r3, 0x50(r19)
    bl fn_80219558
    mr r16, r3
lbl_fn_801D19F0_000015E8:
    cmpwi r16, 0x0
    blt lbl_fn_801D19F0_00001B1C
    cmpwi r19, 0x0
    li r0, 0x0
    beq lbl_fn_801D19F0_00001624
    lwz r4, 0x48(r19)
    li r3, 0x1
    cmpwi r4, 0x1
    beq lbl_fn_801D19F0_00001618
    cmpwi r4, 0x4
    beq lbl_fn_801D19F0_00001618
    li r3, 0x0
lbl_fn_801D19F0_00001618:
    cmpwi r3, 0x0
    bne lbl_fn_801D19F0_00001624
    li r0, 0x1
lbl_fn_801D19F0_00001624:
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_00001634
    addi r14, r19, 0x7d4
    b lbl_fn_801D19F0_00001644
lbl_fn_801D19F0_00001634:
    mulli r0, r16, 0x43c
    lwz r3, lbl_8087F4F0
    add r3, r3, r0
    addi r14, r3, 0x64ec
lbl_fn_801D19F0_00001644:
    lwz r3, 0xb0c(r15)
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_0000165C
    bl fn_80202118
    mr r18, r3
    b lbl_fn_801D19F0_00001660
lbl_fn_801D19F0_0000165C:
    li r18, 0x0
lbl_fn_801D19F0_00001660:
    cmpwi r18, 0x0
    beq lbl_fn_801D19F0_000016DC
    lfs f0, lbl_80882A5C
    lis r17, lbl_8073C56C@ha
    addi r17, r17, lbl_8073C56C@l
    stfs f0, 0x1cc(r1)
    addi r3, r17, 0x36b
    stfs f0, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    stfs f0, 0x1d8(r1)
    stfs f0, 0x1dc(r1)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r18
    addi r3, r1, 0x158
    bl fn_801F4E8C
    lfs f10, 0x158(r1)
    lfs f9, 0x15c(r1)
    lfs f8, 0x160(r1)
    lfs f7, 0x164(r1)
    lfs f0, 0x168(r1)
    stfs f10, 0x1cc(r1)
    stfs f9, 0x1d0(r1)
    stfs f8, 0x1d4(r1)
    stfs f7, 0x1d8(r1)
    stfs f0, 0x1dc(r1)
    lwz r3, 0xb10(r15)
    bl fn_80202118
    addi r4, r17, 0x324
    addi r5, r1, 0x1cc
    bl fn_801F4728
lbl_fn_801D19F0_000016DC:
    lwz r0, 0x484(r15)
    cmpwi r0, 0x0
    bne lbl_fn_801D19F0_00001830
    lwz r0, 0xa88(r15)
    cmpwi r0, 0x0
    bgt lbl_fn_801D19F0_00001830
    mr r3, r15
    bl fn_801CE4CC
    cmpwi r3, 0x0
    bne lbl_fn_801D19F0_00001830
    cmpwi r19, 0x0
    li r0, 0x0
    beq lbl_fn_801D19F0_00001738
    lwz r4, 0x48(r19)
    li r3, 0x1
    cmpwi r4, 0x1
    beq lbl_fn_801D19F0_0000172C
    cmpwi r4, 0x4
    beq lbl_fn_801D19F0_0000172C
    li r3, 0x0
lbl_fn_801D19F0_0000172C:
    cmpwi r3, 0x0
    bne lbl_fn_801D19F0_00001738
    li r0, 0x1
lbl_fn_801D19F0_00001738:
    cntlzw r0, r0
    lwz r3, 0xb10(r15)
    srwi r17, r0, 5
    bl fn_80202118
    mr r4, r14
    mr r5, r16
    mr r6, r17
    bl fn_80511AE0
    lwz r3, 0xacc(r15)
    bl fn_80202118
    mr r5, r3
    mr r3, r15
    mr r4, r16
    bl fn_801E714C
    mr r3, r16
    bl fn_802091E8
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_801D19F0_000017FC
    lwz r3, 0xb0c(r15)
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_000017FC
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_000017FC
    lis r18, lbl_8073C56C@ha
    lwz r21, 0x8(r19)
    addi r18, r18, lbl_8073C56C@l
    lwz r3, 0xb0c(r15)
    addi r20, r18, 0x377
    bl fn_80202118
    mr r17, r3
    mr r3, r20
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r21
    addi r3, r17, 0x58
    bl fn_801FEE08
    lwz r19, 0x8(r19)
    addi r18, r18, 0x37f
    lwz r3, 0xb0c(r15)
    bl fn_80202118
    mr r17, r3
    mr r3, r18
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r17, 0x58
    bl fn_801FEE08
lbl_fn_801D19F0_000017FC:
    lwz r5, 0x50(r15)
    mr r3, r15
    lwz r0, 0xb10(r15)
    mr r4, r16
    stw r0, 0xc0(r5)
    mr r5, r14
    li r6, 0x0
    lwz r7, 0x50(r15)
    addi r7, r7, 0xc0
    bl fn_801E75F8
    lwz r3, 0x50(r15)
    li r0, 0x0
    stw r0, 0xc0(r3)
lbl_fn_801D19F0_00001830:
    lwz r0, 0x7c(r15)
    li r17, 0x0
    cmpwi r0, 0x5
    beq lbl_fn_801D19F0_00001854
    cmpwi r0, 0x4
    beq lbl_fn_801D19F0_0000185C
    cmpwi r0, 0xe
    beq lbl_fn_801D19F0_0000185C
    b lbl_fn_801D19F0_00001860
lbl_fn_801D19F0_00001854:
    lwz r17, 0xadc(r15)
    b lbl_fn_801D19F0_00001860
lbl_fn_801D19F0_0000185C:
    lwz r17, 0xad8(r15)
lbl_fn_801D19F0_00001860:
    lwz r5, 0xb94(r15)
    li r0, 0x2
    mr r3, r15
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0xb98(r15)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0xb9c(r15)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0xba0(r15)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0xba4(r15)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0xba8(r15)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0xbac(r15)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0xbb0(r15)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    lwz r5, 0xbb4(r15)
    lwz r4, 0x104(r5)
    rlwinm r4, r4, 0, 9, 7
    stw r4, 0x104(r5)
    mtctr r0
lbl_fn_801D19F0_000018FC:
    lwz r4, 0x12f8(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x12fc(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1300(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1304(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1308(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x130c(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1310(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1314(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1318(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x131c(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1320(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1324(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1328(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x132c(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1330(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x1334(r3)
    addi r3, r3, 0x40
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    bdnz lbl_fn_801D19F0_000018FC
    lwz r3, 0x1378(r15)
    cmpwi r17, 0x0
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    beq lbl_fn_801D19F0_00001B1C
    lis r18, lbl_8073C56C@ha
    lfs f30, lbl_80882A74
    lfs f31, lbl_80882A5C
    mr r19, r15
    addi r18, r18, lbl_8073C56C@l
    li r20, 0x0
lbl_fn_801D19F0_00001A34:
    lwz r4, 0xb94(r19)
    mr r3, r15
    addi r6, r1, 0x5c
    addi r7, r1, 0x50
    lwz r0, 0x104(r4)
    addi r8, r18, 0x30f
    oris r0, r0, 0x80
    stw r0, 0x104(r4)
    stfs f30, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f31, 0x5c(r1)
    stfs f31, 0x60(r1)
    stfs f31, 0x64(r1)
    lwz r0, 0xb8c(r15)
    lwz r4, 0x50(r15)
    slwi r0, r0, 6
    lwz r5, 0xb94(r19)
    add r4, r4, r0
    bl fn_805112AC
    lwz r3, 0xad8(r15)
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00001AE8
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00001AE8
    lwz r3, 0xad8(r15)
    bl fn_80202118
    mr r21, r3
    mr r5, r20
    addi r3, r1, 0x1e0
    addi r4, r18, 0x38a
    crclr 6
    bl sprintf
    addi r3, r1, 0x1e0
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r21
    addi r3, r1, 0x1b8
    bl fn_801F4E8C
    lwz r3, 0xb94(r19)
    bl fn_80202D00
    addi r4, r18, 0x396
    addi r5, r1, 0x1b8
    bl fn_801F6E78
lbl_fn_801D19F0_00001AE8:
    addi r20, r20, 0x1
    addi r19, r19, 0x4
    cmpwi r20, 0x9
    blt lbl_fn_801D19F0_00001A34
    lwz r0, 0xb8c(r15)
    mr r3, r15
    lwz r6, 0x50(r15)
    mr r4, r16
    slwi r0, r0, 6
    mr r5, r14
    mr r7, r17
    add r6, r6, r0
    bl fn_801D7560
lbl_fn_801D19F0_00001B1C:
    lwz r3, 0xad8(r15)
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00001BE8
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00001BE8
    lwz r14, lbl_8087F4F0
    li r4, 0x0
    mr r3, r14
    bl fn_80444A50
    mr r4, r3
    mr r3, r14
    bl fn_804444E8
    cmpwi r3, 0x0
    bgt lbl_fn_801D19F0_00001B7C
    lwz r14, lbl_8087F4F0
    li r4, 0x1
    mr r3, r14
    bl fn_80444A50
    mr r4, r3
    mr r3, r14
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801D19F0_00001BB4
lbl_fn_801D19F0_00001B7C:
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xad8(r15)
    addi r4, r4, lbl_8073C56C@l
    addi r16, r4, 0x39f
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    lfs f1, lbl_80882AA4
    mr r4, r3
    addi r3, r14, 0x58
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_801D19F0_00001BE8
lbl_fn_801D19F0_00001BB4:
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xad8(r15)
    addi r4, r4, lbl_8073C56C@l
    addi r16, r4, 0x39f
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    lfs f1, lbl_80882AA8
    mr r4, r3
    addi r3, r14, 0x58
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_801D19F0_00001BE8:
    li r0, 0x5
    mr r4, r15
    mtctr r0
lbl_fn_801D19F0_00001BF4:
    lwz r3, 0xbb8(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbbc(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbc0(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbc4(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbc8(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbcc(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbd0(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbd4(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbd8(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbdc(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbe0(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbe4(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbe8(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbec(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbf0(r4)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    lwz r3, 0xbf4(r4)
    addi r4, r4, 0x40
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    bdnz lbl_fn_801D19F0_00001BF4
    lwz r4, 0x7c(r15)
    lwz r3, 0xb18(r15)
    subi r0, r4, 0x6
    cntlzw r4, r0
    lwz r0, 0x104(r3)
    rlwimi r0, r4, 18, 8, 8
    stw r0, 0x104(r3)
    lwz r4, 0xb8c(r15)
    cmpwi r4, 0x0
    blt lbl_fn_801D19F0_00002040
    lwz r3, 0x7c(r15)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    bgt lbl_fn_801D19F0_00002040
    lfs f7, lbl_80882A74
    lis r14, lbl_8073C56C@ha
    lfs f0, lbl_80882A5C
    addi r14, r14, lbl_8073C56C@l
    stfs f7, 0x38(r1)
    slwi r0, r4, 6
    mr r3, r15
    addi r6, r1, 0x44
    stfs f7, 0x3c(r1)
    addi r7, r1, 0x38
    addi r8, r14, 0x30f
    stfs f7, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r4, 0x50(r15)
    lwz r5, 0xb18(r15)
    add r4, r4, r0
    bl fn_8051125C
    addi r3, r1, 0x198
    addi r4, r14, 0x3ac
    crclr 6
    bl sprintf
    lwz r3, 0x184(r15)
    bl fn_80202118
    mr r16, r3
    addi r3, r1, 0x198
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r16
    addi r3, r1, 0x180
    bl fn_801F4E8C
    lwz r3, 0xb18(r15)
    bl fn_80202118
    addi r4, r14, 0x324
    addi r5, r1, 0x180
    bl fn_801F4728
    lwz r3, 0xb18(r15)
    addi r16, r14, 0x3b6
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    lfs f1, lbl_80882A7C
    mr r4, r3
    addi r3, r14, 0x58
    bl fn_801FECE0
    lwz r3, lbl_8087F1E4
    lwz r17, 0xd14(r3)
    cmpwi r17, 0x0
    beq lbl_fn_801D19F0_00001E04
    b lbl_fn_801D19F0_00001E08
lbl_fn_801D19F0_00001E04:
    la r17, lbl_808813D0
lbl_fn_801D19F0_00001E08:
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xb18(r15)
    addi r4, r4, lbl_8073C56C@l
    addi r16, r4, 0x3c0
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r17
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, lbl_8087F1E4
    lwz r17, 0xd1c(r3)
    cmpwi r17, 0x0
    beq lbl_fn_801D19F0_00001E4C
    b lbl_fn_801D19F0_00001E50
lbl_fn_801D19F0_00001E4C:
    la r17, lbl_808813D0
lbl_fn_801D19F0_00001E50:
    lis r4, lbl_8073C56C@ha
    lwz r3, 0xb18(r15)
    addi r4, r4, lbl_8073C56C@l
    addi r16, r4, 0x3d1
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r17
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r3, lbl_8087F1E4
    lwz r18, 0xd24(r3)
    cmpwi r18, 0x0
    beq lbl_fn_801D19F0_00001E94
    b lbl_fn_801D19F0_00001E98
lbl_fn_801D19F0_00001E94:
    la r18, lbl_808813D0
lbl_fn_801D19F0_00001E98:
    lis r16, lbl_8073C56C@ha
    lwz r3, 0xb18(r15)
    addi r16, r16, lbl_8073C56C@l
    addi r17, r16, 0x3de
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r18
    addi r3, r14, 0x58
    bl fn_801FEE08
    lwz r0, 0x1bb0(r15)
    cmpwi r0, 0x0
    bne lbl_fn_801D19F0_00001F84
    lwz r3, 0xb18(r15)
    addi r17, r16, 0x3ea
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    lfs f1, lbl_80882A74
    mr r4, r3
    addi r3, r14, 0x58
    bl fn_801FECE0
    lwz r3, 0xb18(r15)
    addi r16, r16, 0x3f1
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    addi r3, r14, 0x58
    bl fn_801FECE0
    mr r16, r15
    addi r17, r15, 0xbb8
    li r18, 0x0
    li r14, 0x0
lbl_fn_801D19F0_00001F34:
    lwz r4, lbl_8087F4F0
    mr r3, r15
    lwz r0, 0xb8c(r15)
    mr r5, r17
    addis r4, r4, 0x1
    lwz r6, 0x50(r15)
    add r4, r4, r14
    slwi r0, r0, 6
    lwz r7, 0x150(r16)
    subi r4, r4, 0x2ac0
    add r6, r6, r0
    li r8, -0x1
    bl fn_801D77A0
    addi r18, r18, 0x1
    addi r16, r16, 0x4
    cmpwi r18, 0xa
    addi r17, r17, 0x20
    addi r14, r14, 0x40
    blt lbl_fn_801D19F0_00001F34
    b lbl_fn_801D19F0_00002040
lbl_fn_801D19F0_00001F84:
    lwz r3, 0xb18(r15)
    addi r17, r16, 0x3ea
    bl fn_80202118
    mr r14, r3
    mr r3, r17
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    addi r3, r14, 0x58
    bl fn_801FECE0
    lwz r3, 0xb18(r15)
    addi r16, r16, 0x3f1
    bl fn_80202118
    mr r14, r3
    mr r3, r16
    bl fn_800DC6B4
    lfs f1, lbl_80882A74
    mr r4, r3
    addi r3, r14, 0x58
    bl fn_801FECE0
    mr r14, r15
    mr r16, r15
    addi r17, r15, 0xbb8
    li r18, 0x0
    b lbl_fn_801D19F0_00002034
lbl_fn_801D19F0_00001FE8:
    lwz r6, lbl_8087F4F0
    mr r3, r15
    lwz r4, 0x1bd4(r14)
    mr r5, r17
    lwz r0, 0xb8c(r15)
    addis r7, r6, 0x1
    slwi r4, r4, 6
    lwz r6, 0x50(r15)
    add r4, r7, r4
    slwi r0, r0, 6
    lwz r7, 0x150(r16)
    subi r4, r4, 0x26c0
    lwz r8, 0x1bd8(r14)
    add r6, r6, r0
    bl fn_801D77A0
    addi r14, r14, 0x8
    addi r16, r16, 0x4
    addi r17, r17, 0x20
    addi r18, r18, 0x1
lbl_fn_801D19F0_00002034:
    lwz r0, 0x1bd0(r15)
    cmplw r18, r0
    blt lbl_fn_801D19F0_00001FE8
lbl_fn_801D19F0_00002040:
    lwz r0, 0x1f0(r15)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_00002090
    lwz r3, 0x54(r15)
    lwz r0, 0x3a4(r3)
    addi r14, r3, 0x39c
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_0000207C
    mr r3, r14
    bl fn_800A08D4
    lfs f0, 0x50(r14)
    fcmpo cr0, f0, f1
    bge lbl_fn_801D19F0_0000207C
    li r0, 0x0
    b lbl_fn_801D19F0_00002080
lbl_fn_801D19F0_0000207C:
    li r0, 0x1
lbl_fn_801D19F0_00002080:
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_00002090
    li r0, 0x0
    stw r0, 0x1f0(r15)
lbl_fn_801D19F0_00002090:
    lwz r3, 0xb1c(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb20(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1e0(r15)
    cmpwi r3, 0x0
    bne lbl_fn_801D19F0_000020C8
    lwz r4, 0x48(r15)
    lwz r5, 0x1224(r4)
    b lbl_fn_801D19F0_000020D0
lbl_fn_801D19F0_000020C8:
    lwz r4, 0x48(r15)
    lwz r5, 0x1268(r4)
lbl_fn_801D19F0_000020D0:
    lwz r0, 0x11f0(r4)
    cmplw r0, r15
    bne lbl_fn_801D19F0_000023C4
    lwz r0, 0x11f8(r4)
    cmpwi r0, 0x1
    beq lbl_fn_801D19F0_000023C4
    cmpwi r5, 0x1
    ble lbl_fn_801D19F0_000023C4
    cmpwi r3, 0x0
    bne lbl_fn_801D19F0_0000210C
    lwz r3, 0xb1c(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_801D19F0_0000211C
lbl_fn_801D19F0_0000210C:
    lwz r3, 0xb20(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_801D19F0_0000211C:
    lwz r0, 0xd4(r15)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_0000227C
    lwz r0, 0x7c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_0000213C
    cmpwi r0, 0x4
    bne lbl_fn_801D19F0_0000227C
lbl_fn_801D19F0_0000213C:
    lwz r3, 0xb1c(r15)
    lfs f0, lbl_80882A74
    stfs f0, 0x104(r3)
    lwz r3, 0xb20(r15)
    stfs f0, 0x104(r3)
    lwz r0, 0xf4(r15)
    cmpwi r0, 0x0
    bne lbl_fn_801D19F0_00002290
    lwz r6, 0xd4(r15)
    addi r3, r1, 0x134
    lwz r4, lbl_8087EFB4
    addi r5, r1, 0x2c
    lfs f7, 0x484(r6)
    lfs f0, 0x4a8(r6)
    lfs f9, 0x480(r6)
    fadds f10, f7, f0
    lfs f8, 0x4a4(r6)
    lfs f7, 0x47c(r6)
    lfs f0, 0x4a0(r6)
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f8, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f10, 0x34(r1)
    bl fn_800BFAC8
    lfs f7, 0x134(r1)
    lfs f0, lbl_80882A7C
    fsubs f0, f7, f0
    stfs f0, 0x134(r1)
    lwz r0, 0x1e0(r15)
    cmpwi r0, 0x0
    bne lbl_fn_801D19F0_000021C8
    lfs f0, lbl_80882AAC
    stfs f0, 0x138(r1)
    b lbl_fn_801D19F0_000021D0
lbl_fn_801D19F0_000021C8:
    lfs f0, lbl_80882AB0
    stfs f0, 0x138(r1)
lbl_fn_801D19F0_000021D0:
    lwz r4, 0xb1c(r15)
    lis r14, lbl_8073C56C@ha
    addi r14, r14, lbl_8073C56C@l
    lfs f30, 0x134(r1)
    addi r3, r14, 0x3f9
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r16
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0xb1c(r15)
    addi r3, r14, 0x3f9
    lfs f30, 0x138(r1)
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r16
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0xb20(r15)
    addi r3, r14, 0x3f9
    lfs f30, 0x134(r1)
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r16
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0xb20(r15)
    addi r3, r14, 0x3f9
    lfs f30, 0x138(r1)
    addi r14, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r14
    li r5, 0x1
    bl fn_801FED24
    b lbl_fn_801D19F0_00002290
lbl_fn_801D19F0_0000227C:
    lwz r3, 0xb1c(r15)
    lfs f0, lbl_80882A78
    stfs f0, 0x104(r3)
    lwz r3, 0xb20(r15)
    stfs f0, 0x104(r3)
lbl_fn_801D19F0_00002290:
    lwz r4, 0xb1c(r15)
    lis r14, lbl_8073C56C@ha
    addi r14, r14, lbl_8073C56C@l
    addi r3, r14, 0x404
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0xb1c(r15)
    addi r3, r14, 0x40b
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0xb20(r15)
    addi r3, r14, 0x404
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0xb20(r15)
    addi r3, r14, 0x40b
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lfs f30, 0xf8(r15)
    lfs f0, lbl_80882A5C
    fcmpo cr0, f30, f0
    ble lbl_fn_801D19F0_00002370
    lwz r4, 0xb1c(r15)
    addi r3, r14, 0x40b
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0xb20(r15)
    addi r3, r14, 0x40b
    lfs f30, 0xf8(r15)
    addi r14, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
    b lbl_fn_801D19F0_000023EC
lbl_fn_801D19F0_00002370:
    bge lbl_fn_801D19F0_000023EC
    lwz r4, 0xb1c(r15)
    fneg f30, f30
    addi r3, r14, 0x404
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lfs f0, 0xf8(r15)
    addi r3, r14, 0x404
    lwz r4, 0xb20(r15)
    fneg f30, f0
    addi r14, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
    b lbl_fn_801D19F0_000023EC
lbl_fn_801D19F0_000023C4:
    lwz r3, 0xb1c(r15)
    lfs f7, lbl_80882A5C
    stfs f7, 0x100(r3)
    lfs f0, lbl_80882A74
    lwz r3, 0xb1c(r15)
    stfs f0, 0x104(r3)
    lwz r3, 0xb20(r15)
    stfs f7, 0x100(r3)
    lwz r3, 0xb20(r15)
    stfs f0, 0x104(r3)
lbl_fn_801D19F0_000023EC:
    lwz r0, 0xb84(r15)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_0000280C
    mr r3, r15
    bl fn_801CF334
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_00002418
    mr r3, r15
    bl fn_801CF334
    lwz r14, 0x4c(r3)
    b lbl_fn_801D19F0_0000241C
lbl_fn_801D19F0_00002418:
    li r14, -0x1
lbl_fn_801D19F0_0000241C:
    lwz r3, 0xb84(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x7c(r15)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_801D19F0_0000280C
    lfs f0, lbl_80882A74
    lis r3, lbl_8073C56C@ha
    lfs f9, lbl_80882A5C
    addi r3, r3, lbl_8073C56C@l
    lfs f8, lbl_80882AB4
    addi r4, r3, 0x324
    lfs f7, lbl_80882AB8
    addi r5, r1, 0x16c
    stfs f9, 0x17c(r1)
    stfs f8, 0x16c(r1)
    stfs f7, 0x170(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x174(r1)
    lwz r3, 0xb84(r15)
    bl fn_801F4728
    lwz r0, 0x7c(r15)
    cmpwi r0, 0x3
    bne lbl_fn_801D19F0_00002640
    lwz r3, 0xb50(r15)
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_0000280C
    lwz r0, 0x80(r15)
    cmpw r0, r3
    bge lbl_fn_801D19F0_0000280C
    lwz r3, lbl_8087F580
    bl fn_804A4264
    lfs f0, lbl_80882ABC
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801D19F0_000024C4
    lwz r3, 0xb84(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_801D19F0_000024C4:
    subi r0, r14, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_801D19F0_000024F8
    subi r0, r14, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_801D19F0_00002534
    cmpwi r14, 0x0
    beq lbl_fn_801D19F0_000024F8
    cmpwi r14, 0x6
    beq lbl_fn_801D19F0_000024F8
    cmpwi r14, 0x1
    beq lbl_fn_801D19F0_00002534
    b lbl_fn_801D19F0_0000256C
lbl_fn_801D19F0_000024F8:
    li r3, 0x0
    li r4, 0x191
    bl fn_80116FC0
    lwz r4, 0xb84(r15)
    lis r5, lbl_8073C56C@ha
    addi r5, r5, lbl_8073C56C@l
    mr r14, r3
    addi r3, r5, 0x3d1
    addi r16, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r16
    mr r5, r14
    bl fn_801FEE08
    b lbl_fn_801D19F0_0000256C
lbl_fn_801D19F0_00002534:
    li r3, 0x0
    li r4, 0x193
    bl fn_80116FC0
    lwz r4, 0xb84(r15)
    lis r5, lbl_8073C56C@ha
    addi r5, r5, lbl_8073C56C@l
    mr r14, r3
    addi r3, r5, 0x3d1
    addi r16, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r16
    mr r5, r14
    bl fn_801FEE08
lbl_fn_801D19F0_0000256C:
    li r3, 0x0
    li r4, 0x196
    bl fn_80116FC0
    lwz r4, 0xb84(r15)
    lis r14, lbl_8073C56C@ha
    addi r14, r14, lbl_8073C56C@l
    mr r16, r3
    addi r3, r14, 0x3de
    addi r17, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r17
    mr r5, r16
    bl fn_801FEE08
    lwz r0, 0xb80(r15)
    cmpwi r0, 0x1
    bne lbl_fn_801D19F0_000025F4
    lwz r4, 0xb84(r15)
    addi r3, r14, 0x3ea
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0xb84(r15)
    addi r3, r14, 0x3f1
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A74
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
    b lbl_fn_801D19F0_0000280C
lbl_fn_801D19F0_000025F4:
    cmpwi r0, 0x0
    bne lbl_fn_801D19F0_0000280C
    lwz r4, 0xb84(r15)
    addi r3, r14, 0x3ea
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A74
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0xb84(r15)
    addi r3, r14, 0x3f1
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
    b lbl_fn_801D19F0_0000280C
lbl_fn_801D19F0_00002640:
    cmpwi r0, 0x2
    bne lbl_fn_801D19F0_0000280C
    lwz r0, 0x1e4(r15)
    mulli r0, r0, 0xc
    add r3, r15, r0
    lwz r3, 0xb38(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_0000280C
    lwz r0, 0x80(r15)
    cmpw r0, r3
    bge lbl_fn_801D19F0_0000280C
    lwz r3, lbl_8087F580
    bl fn_804A4264
    lfs f0, lbl_80882ABC
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801D19F0_00002694
    lwz r3, 0xb84(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_801D19F0_00002694:
    subi r0, r14, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_801D19F0_000026C8
    subi r0, r14, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_801D19F0_00002704
    cmpwi r14, 0x0
    beq lbl_fn_801D19F0_000026C8
    cmpwi r14, 0x6
    beq lbl_fn_801D19F0_000026C8
    cmpwi r14, 0x1
    beq lbl_fn_801D19F0_00002704
    b lbl_fn_801D19F0_0000273C
lbl_fn_801D19F0_000026C8:
    li r3, 0x0
    li r4, 0x192
    bl fn_80116FC0
    lwz r4, 0xb84(r15)
    lis r5, lbl_8073C56C@ha
    addi r5, r5, lbl_8073C56C@l
    mr r14, r3
    addi r3, r5, 0x3d1
    addi r16, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r16
    mr r5, r14
    bl fn_801FEE08
    b lbl_fn_801D19F0_0000273C
lbl_fn_801D19F0_00002704:
    li r3, 0x0
    li r4, 0x194
    bl fn_80116FC0
    lwz r4, 0xb84(r15)
    lis r5, lbl_8073C56C@ha
    addi r5, r5, lbl_8073C56C@l
    mr r14, r3
    addi r3, r5, 0x3d1
    addi r16, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r16
    mr r5, r14
    bl fn_801FEE08
lbl_fn_801D19F0_0000273C:
    li r3, 0x0
    li r4, 0x196
    bl fn_80116FC0
    lwz r4, 0xb84(r15)
    lis r14, lbl_8073C56C@ha
    addi r14, r14, lbl_8073C56C@l
    mr r16, r3
    addi r3, r14, 0x3de
    addi r17, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r17
    mr r5, r16
    bl fn_801FEE08
    lwz r0, 0xb7c(r15)
    cmpwi r0, 0x1
    bne lbl_fn_801D19F0_000027C4
    lwz r4, 0xb84(r15)
    addi r3, r14, 0x3ea
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0xb84(r15)
    addi r3, r14, 0x3f1
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A74
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
    b lbl_fn_801D19F0_0000280C
lbl_fn_801D19F0_000027C4:
    cmpwi r0, 0x0
    bne lbl_fn_801D19F0_0000280C
    lwz r4, 0xb84(r15)
    addi r3, r14, 0x3ea
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A74
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    lwz r4, 0xb84(r15)
    addi r3, r14, 0x3f1
    addi r14, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882A5C
    mr r4, r3
    mr r3, r14
    bl fn_801FECE0
lbl_fn_801D19F0_0000280C:
    lwz r0, 0x484(r15)
    cmpwi r0, 0x0
    bne lbl_fn_801D19F0_00002834
    lwz r0, 0xa88(r15)
    cmpwi r0, 0x0
    bgt lbl_fn_801D19F0_00002834
    mr r3, r15
    bl fn_801CE4CC
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_0000283C
lbl_fn_801D19F0_00002834:
    li r0, 0x1
    b lbl_fn_801D19F0_0000284C
lbl_fn_801D19F0_0000283C:
    lwz r3, 0x7c(r15)
    subi r0, r3, 0xd
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_801D19F0_0000284C:
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_00002874
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F580
    lwz r4, 0x86c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801D19F0_0000286C
    b lbl_fn_801D19F0_00002870
lbl_fn_801D19F0_0000286C:
    la r4, lbl_808813D0
lbl_fn_801D19F0_00002870:
    bl fn_804A65A0
lbl_fn_801D19F0_00002874:
    mr r3, r15
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_000028F8
    lwz r3, 0x48(r15)
    lfs f0, lbl_80882A90
    lfs f7, 0x458(r3)
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_801D19F0_000028F8
    mr r3, r15
    bl fn_801CF334
    cmpwi r3, 0x0
    beq lbl_fn_801D19F0_000028F8
    mr r3, r15
    bl fn_801CF334
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D19F0_000028F8
    lwz r3, lbl_8087F580
    bl fn_804A4280
    lfs f7, lbl_80882AC0
    addi r5, r1, 0x20
    lfs f0, lbl_80882A5C
    li r4, 0x10
    fmuls f7, f7, f1
    stfs f0, 0x20(r1)
    lwz r3, lbl_8087F580
    li r6, 0x0
    stfs f0, 0x28(r1)
    fneg f0, f7
    stfs f0, 0x24(r1)
    bl fn_804A5E40
lbl_fn_801D19F0_000028F8:
    addi r11, r1, 0x2a0
    psq_l f31, 0x2b8(r1), 0, 0
    lfd f31, 0x2b0(r1)
    psq_l f30, 0x2a8(r1), 0, 0
    lfd f30, 0x2a0(r1)
    bl _restgpr_14
    lwz r0, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}
