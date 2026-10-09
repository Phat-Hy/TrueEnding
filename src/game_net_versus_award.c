#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void fn_80061824(void);
extern void fn_80061AE4(void);
extern void fn_8006EF48(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801F4998(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_8020924C(void);
extern void fn_804A3C24(void);
extern void fn_804A53D4(void);
extern void fn_804A5D34(void);
extern void fn_804BC628(void);
extern void fn_804C0A40(void);
extern void fn_804C2994(void);
extern void fn_804EA538(void);
extern void fn_804EA5E0(void);
extern void fn_804EB1B0(void);
extern void fn_804EB270(void);
extern void fn_804EB874(void);
extern void fn_804FA7CC(void);
extern void fn_804FA890(void);
extern void fn_804FC014(void);
extern void fn_805075C8(void);
extern void fn_8050BA6C(void);
extern void fn_80680CF8(void);
extern void fn_80686AF0(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern void fn_806B1250(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80758848[];
extern u8 lbl_807588DC[];
extern u8 lbl_80790D74[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_808873F8;
extern u32 lbl_80887400;
extern u32 lbl_80887404;
extern u32 lbl_8088740C;
extern u32 lbl_80887418;
extern u32 lbl_8088741C;
extern u32 lbl_8088742C;
extern u32 lbl_80887438;
extern u32 lbl_8088743C;
extern u32 lbl_80887440;
extern u32 lbl_80887444;
extern u32 lbl_80887448;
extern u32 lbl_8088744C;
extern u32 lbl_80887450;
extern u32 lbl_80887454;
extern u32 lbl_80887458;
extern u32 lbl_8088745C;
extern u32 lbl_80887460;
extern u32 lbl_80887464;
extern u32 lbl_80887468;

/* Function declarations */
void fn_804C0F88(void);
void fn_804C134C(void);
void fn_804C1370(void);
void fn_804C1634(void);
void fn_804C18A8(void);
void fn_804C2260(void);
void fn_804C2268(void);
void fn_804C23E4(void);
void fn_804C28A0(void);

asm void fn_804C0F88(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    stw r30, 0x218(r1)
    stw r29, 0x214(r1)
    mr r29, r3
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    lwz r4, lbl_8087F588
    neg r0, r3
    or r3, r0, r3
    lwz r0, 0x4c(r4)
    srwi r31, r3, 31
    cmpwi r0, 0x0
    bne lbl_fn_804C0F88_00000380
    lwz r3, lbl_8087F628
    li r30, 0x0
    addis r3, r3, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804C0F88_00000074
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804EB270
    cmpwi r3, 0x1
    bne lbl_fn_804C0F88_00000138
    li r30, 0x1
    b lbl_fn_804C0F88_00000138
lbl_fn_804C0F88_00000074:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r3, lbl_8087F610
    addi r4, r1, 0x8
    bl fn_804EB270
    cmpwi r3, 0x0
    beq lbl_fn_804C0F88_00000138
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C0F88_000000C0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C0F88_000000B8
    li r3, 0x1
    b lbl_fn_804C0F88_000000D8
lbl_fn_804C0F88_000000B8:
    bl fn_806B0DE0
    b lbl_fn_804C0F88_000000D8
lbl_fn_804C0F88_000000C0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C0F88_000000D4
    li r3, 0x1
    b lbl_fn_804C0F88_000000D8
lbl_fn_804C0F88_000000D4:
    bl fn_806A8E70
lbl_fn_804C0F88_000000D8:
    cmpwi r3, 0x1
    ble lbl_fn_804C0F88_00000138
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C0F88_00000110
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C0F88_00000108
    li r3, 0x1
    b lbl_fn_804C0F88_00000128
lbl_fn_804C0F88_00000108:
    bl fn_806B0DE0
    b lbl_fn_804C0F88_00000128
lbl_fn_804C0F88_00000110:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C0F88_00000124
    li r3, 0x1
    b lbl_fn_804C0F88_00000128
lbl_fn_804C0F88_00000124:
    bl fn_806A8E70
lbl_fn_804C0F88_00000128:
    lwz r0, 0x8(r1)
    cmpw r0, r3
    bne lbl_fn_804C0F88_00000138
    li r30, 0x1
lbl_fn_804C0F88_00000138:
    lwz r0, 0xdd0(r29)
    cmpwi r0, 0x78
    blt lbl_fn_804C0F88_00000154
    lwz r3, lbl_8087F59C
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804C0F88_00000334
lbl_fn_804C0F88_00000154:
    cmplwi r30, 0x1
    bne lbl_fn_804C0F88_000002FC
    cmpwi r31, 0x0
    beq lbl_fn_804C0F88_000001F0
    lwz r0, 0xdb0(r29)
    cmpwi r0, 0x0
    ble lbl_fn_804C0F88_000001A8
    lwz r5, lbl_8087F86C
    li r4, 0x0
    lwz r3, lbl_8087F580
    lwz r5, 0x6dc(r5)
    cmpwi r5, 0x0
    beq lbl_fn_804C0F88_0000018C
    b lbl_fn_804C0F88_00000190
lbl_fn_804C0F88_0000018C:
    la r5, lbl_808813D0
lbl_fn_804C0F88_00000190:
    lis r6, lbl_80790D74@ha
    addi r6, r6, lbl_80790D74@l
    addi r6, r6, 0x18
    mr r7, r6
    bl fn_804A5D34
    b lbl_fn_804C0F88_00000358
lbl_fn_804C0F88_000001A8:
    lwz r5, lbl_8087F86C
    li r4, 0x0
    lwz r3, lbl_8087F580
    lwz r5, 0x6a4(r5)
    cmpwi r5, 0x0
    beq lbl_fn_804C0F88_000001C4
    b lbl_fn_804C0F88_000001C8
lbl_fn_804C0F88_000001C4:
    la r5, lbl_808813D0
lbl_fn_804C0F88_000001C8:
    lis r6, lbl_80790D74@ha
    addi r6, r6, lbl_80790D74@l
    addi r6, r6, 0x18
    mr r7, r6
    bl fn_804A5D34
    lwz r3, 0x64(r29)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804C0F88_00000358
lbl_fn_804C0F88_000001F0:
    lwz r3, lbl_8087F610
    bl fn_804FC014
    cmpwi r3, 0x0
    beq lbl_fn_804C0F88_00000238
    lwz r5, lbl_8087F86C
    li r4, 0x0
    lwz r3, lbl_8087F580
    lwz r5, 0x6dc(r5)
    cmpwi r5, 0x0
    beq lbl_fn_804C0F88_0000021C
    b lbl_fn_804C0F88_00000220
lbl_fn_804C0F88_0000021C:
    la r5, lbl_808813D0
lbl_fn_804C0F88_00000220:
    lis r6, lbl_80790D74@ha
    addi r6, r6, lbl_80790D74@l
    addi r6, r6, 0x18
    mr r7, r6
    bl fn_804A5D34
    b lbl_fn_804C0F88_00000358
lbl_fn_804C0F88_00000238:
    li r0, 0x40
    addi r4, r1, 0xc
    li r3, 0x0
    mtctr r0
lbl_fn_804C0F88_00000248:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_fn_804C0F88_00000248
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C0F88_00000288
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C0F88_0000027C
    li r0, 0x0
    b lbl_fn_804C0F88_0000028C
lbl_fn_804C0F88_0000027C:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804C0F88_0000028C
lbl_fn_804C0F88_00000288:
    li r0, 0x0
lbl_fn_804C0F88_0000028C:
    lwz r3, lbl_8087F628
    clrlwi r4, r0, 24
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_804C0F88_00000358
    lwz r4, lbl_8087F86C
    addi r3, r1, 0x10
    lwz r4, 0x6ac(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804C0F88_000002C8
    b lbl_fn_804C0F88_000002CC
lbl_fn_804C0F88_000002C8:
    la r4, lbl_808813D0
lbl_fn_804C0F88_000002CC:
    addi r5, r5, 0x10
    crclr 6
    bl fn_800DD3FC
    lis r4, lbl_80790D74@ha
    lwz r3, lbl_8087F580
    addi r4, r4, lbl_80790D74@l
    addi r5, r1, 0x10
    addi r6, r4, 0x18
    li r4, 0x0
    mr r7, r6
    bl fn_804A5D34
    b lbl_fn_804C0F88_00000358
lbl_fn_804C0F88_000002FC:
    lwz r5, lbl_8087F86C
    li r4, 0x0
    lwz r3, lbl_8087F580
    lwz r5, 0x69c(r5)
    cmpwi r5, 0x0
    beq lbl_fn_804C0F88_00000318
    b lbl_fn_804C0F88_0000031C
lbl_fn_804C0F88_00000318:
    la r5, lbl_808813D0
lbl_fn_804C0F88_0000031C:
    lis r6, lbl_80790D74@ha
    addi r6, r6, lbl_80790D74@l
    addi r6, r6, 0x18
    mr r7, r6
    bl fn_804A5D34
    b lbl_fn_804C0F88_00000358
lbl_fn_804C0F88_00000334:
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F580
    lwz r4, 0x754(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804C0F88_0000034C
    b lbl_fn_804C0F88_00000350
lbl_fn_804C0F88_0000034C:
    la r4, lbl_808813D0
lbl_fn_804C0F88_00000350:
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_804C0F88_00000358:
    cmpwi r31, 0x0
    bne lbl_fn_804C0F88_00000388
    lwz r3, 0xdd0(r29)
    addi r0, r3, 0x1
    stw r0, 0xdd0(r29)
    cmpwi r0, 0xf0
    ble lbl_fn_804C0F88_00000388
    li r0, 0x0
    stw r0, 0xdd0(r29)
    b lbl_fn_804C0F88_00000388
lbl_fn_804C0F88_00000380:
    li r0, 0x0
    stw r0, 0xdd0(r29)
lbl_fn_804C0F88_00000388:
    mr r3, r29
    bl fn_804C0A40
    mr r3, r29
    bl fn_804C1634
    lwz r3, 0x64(r29)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_804C134C(void)
{
    nofralloc
    lwz r0, 0x270(r3)
    cmplw r4, r0
    blt lbl_fn_804C134C_000003D8
    li r3, 0x0
    blr
lbl_fn_804C134C_000003D8:
    mulli r0, r4, 0x34
    add r3, r3, r0
    addi r3, r3, 0x274
    blr
}

asm void fn_804C1370(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    bl _savegpr_23
    lfs f0, lbl_808873F8
    li r0, 0x0
    stfs f0, 0x30(r1)
    mr r29, r3
    li r31, 0x0
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r4, 0x6c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x70(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F610
    lwz r0, 0x540(r4)
    cmpwi r0, 0x2
    beq lbl_fn_804C1370_000004A8
    lwz r30, 0x74(r3)
    b lbl_fn_804C1370_000004AC
lbl_fn_804C1370_000004A8:
    lwz r30, 0x78(r3)
lbl_fn_804C1370_000004AC:
    lwz r0, 0x38(r30)
    lis r3, lbl_807588DC@ha
    addi r26, r3, lbl_807588DC@l
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r30)
    addi r3, r26, 0x324
    lwz r4, 0x70(r29)
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088741C
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FEDBC
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    beq lbl_fn_804C1370_00000684
    lfs f1, 0x100(r30)
    lfs f0, lbl_80887438
    fcmpo cr0, f1, f0
    blt lbl_fn_804C1370_00000684
    lwz r5, 0xdb4(r29)
    addi r3, r1, 0x48
    addi r4, r26, 0x391
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    addi r6, r1, 0x30
    lfs f3, 0x20(r1)
    li r4, 0x0
    lfs f2, lbl_8088743C
    li r5, 0x0
    lfs f1, lbl_80887440
    lfs f0, lbl_80887444
    stfs f4, 0x30(r1)
    lwz r3, lbl_8087F580
    stfs f3, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    lwz r7, 0xd88(r29)
    subi r0, r7, 0x7
    cntlzw r0, r0
    srwi r7, r0, 5
    bl fn_804A53D4
    lfs f30, lbl_80887448
    mr r24, r29
    lfs f31, lbl_8088744C
    li r23, 0x0
    lis r28, 0xff89
lbl_fn_804C1370_00000590:
    lwz r0, 0xdd4(r24)
    cmpwi r0, -0x1
    beq lbl_fn_804C1370_00000668
    addi r3, r1, 0x48
    addi r4, r26, 0x391
    addi r5, r23, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f1, 0x8(r1)
    subi r27, r28, 0x7778
    lfs f0, 0xc(r1)
    fadds f1, f1, f30
    lfs f4, 0x10(r1)
    fadds f0, f0, f31
    lfs f3, 0x14(r1)
    lfs f2, 0x18(r1)
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f2, 0x40(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r0, 0xe14(r24)
    cmpwi r0, 0x0
    beq lbl_fn_804C1370_0000060C
    li r27, -0x1
lbl_fn_804C1370_0000060C:
    lwz r3, lbl_8087F610
    lwz r25, lbl_8087EEB0
    lwz r4, 0x540(r3)
    lwz r5, 0xdd4(r24)
    bl fn_804FA7CC
    lfs f6, lbl_808873F8
    mr r4, r3
    lfs f4, lbl_80887450
    mr r3, r25
    fmr f7, f6
    lfs f1, 0x30(r1)
    fmr f5, f4
    lfs f2, 0x34(r1)
    fmr f8, f6
    lfs f3, lbl_80887444
    mr r5, r27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    addi r31, r31, 0x1
lbl_fn_804C1370_00000668:
    addi r23, r23, 0x1
    addi r24, r24, 0x4
    cmpwi r23, 0x10
    blt lbl_fn_804C1370_00000590
    mr r3, r29
    mr r4, r31
    bl fn_804C28A0
lbl_fn_804C1370_00000684:
    addi r11, r1, 0xb0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    bl _restgpr_23
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_804C1634(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x90
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    stfd f25, 0x90(r1)
    psq_st f25, 0x98(r1), 0, 0
    bl _savegpr_25
    lfs f0, lbl_808873F8
    lis r4, lbl_80758848@ha
    lis r30, lbl_807588DC@ha
    stfs f0, 0x40(r1)
    lfs f28, lbl_80887454
    mr r27, r3
    stfs f0, 0x44(r1)
    addi r26, r3, 0xac
    lfs f27, lbl_80887458
    addi r30, r30, lbl_807588DC@l
    stfs f0, 0x48(r1)
    li r25, 0x0
    lfs f26, lbl_8088745C
    lis r29, 0x4330
    stfs f0, 0x4c(r1)
    li r31, 0x0
    lfd f30, lbl_80758848@l(r4)
    stfs f0, 0x50(r1)
    lfs f31, lbl_80887460
    lfs f25, lbl_80887438
lbl_fn_804C1634_00000748:
    lwz r0, 0xa0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_804C1634_000008BC
    lwz r3, 0xa4(r27)
    stw r29, 0x58(r1)
    addi r3, r3, 0x1
    xoris r0, r3, 0x8000
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    stw r3, 0xa4(r27)
    fsubs f0, f0, f30
    fcmpo cr0, f0, f31
    bge lbl_fn_804C1634_00000784
    lfs f29, lbl_808873F8
    b lbl_fn_804C1634_0000079C
lbl_fn_804C1634_00000784:
    stw r0, 0x64(r1)
    stw r29, 0x60(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f30
    fsubs f0, f0, f31
    fmuls f29, f27, f0
lbl_fn_804C1634_0000079C:
    lwz r0, 0xa8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804C1634_000007F0
    lwz r28, 0x8c(r27)
    addi r3, r30, 0x3a2
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x2c
    bl fn_801F4E8C
    lfs f4, 0x2c(r1)
    lfs f3, 0x30(r1)
    lfs f2, 0x34(r1)
    lfs f1, 0x38(r1)
    lfs f0, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
    b lbl_fn_804C1634_00000834
lbl_fn_804C1634_000007F0:
    lwz r28, 0x90(r27)
    addi r3, r30, 0x3a2
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x18
    bl fn_801F4E8C
    lfs f4, 0x18(r1)
    lfs f3, 0x1c(r1)
    lfs f2, 0x20(r1)
    lfs f1, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f4, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
lbl_fn_804C1634_00000834:
    lfs f0, 0x40(r1)
    mr r4, r26
    lfs f7, lbl_80887400
    li r5, -0x1
    fadds f1, f0, f25
    lfs f2, 0x44(r1)
    fmr f8, f7
    lfs f3, lbl_80887444
    stfs f1, 0x40(r1)
    li r6, 0x1
    fnmsubs f0, f26, f28, f1
    lfs f4, lbl_80887464
    fsubs f1, f1, f29
    lfs f5, lbl_80887468
    stfs f0, 0x8(r1)
    li r7, 0x1
    stfs f26, 0xc(r1)
    li r8, 0x0
    lfs f6, lbl_808873F8
    li r9, 0x1
    stfs f28, 0x10(r1)
    lis r10, 0xff00
    lwz r3, lbl_8087EEB0
    bl fn_80061AE4
    lwz r3, lbl_8087EEC8
    mr r4, r26
    lfs f1, lbl_80887450
    li r5, 0x1
    lfs f2, lbl_808873F8
    li r6, 0x1
    bl fn_8006EF48
    fcmpo cr0, f29, f1
    ble lbl_fn_804C1634_000008BC
    stw r31, 0xa4(r27)
lbl_fn_804C1634_000008BC:
    addi r25, r25, 0x1
    addi r26, r26, 0x22c
    cmpwi r25, 0x6
    addi r27, r27, 0x22c
    blt lbl_fn_804C1634_00000748
    addi r11, r1, 0x90
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    psq_l f25, 0x98(r1), 0, 0
    lfd f25, 0x90(r1)
    bl _restgpr_25
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_804C18A8(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    stfd f27, 0xf0(r1)
    psq_st f27, 0xf8(r1), 0, 0
    bl _savegpr_14
    lwz r4, lbl_8087F628
    mr r15, r3
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C18A8_00000994
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C18A8_00000988
    li r0, 0x0
    b lbl_fn_804C18A8_00000998
lbl_fn_804C18A8_00000988:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804C18A8_00000998
lbl_fn_804C18A8_00000994:
    li r0, 0x0
lbl_fn_804C18A8_00000998:
    lwz r3, lbl_8087F628
    clrlwi r4, r0, 24
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    li r0, 0x10
    mr r22, r3
    addi r4, r1, 0xc
    li r3, 0x0
    mtctr r0
lbl_fn_804C18A8_000009C4:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_fn_804C18A8_000009C4
    lwz r6, lbl_8087F59C
    lis r4, lbl_80758848@ha
    lis r3, lbl_807588DC@ha
    lis r5, lbl_80790D74@ha
    lwz r20, 0xc4(r6)
    mr r18, r15
    lfs f28, lbl_80887400
    addi r30, r3, lbl_807588DC@l
    lfs f29, lbl_80887404
    addi r27, r5, lbl_80790D74@l
    lfs f30, lbl_808873F8
    li r17, 0x0
    lfd f31, lbl_80758848@l(r4)
    li r31, 0x0
    li r23, 0x1
    li r24, 0x0
    li r26, 0x2
    lis r29, 0x4330
    lis r14, 0xff01
lbl_fn_804C18A8_00000A1C:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C18A8_00000A4C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C18A8_00000A44
    li r3, 0x1
    b lbl_fn_804C18A8_00000A64
lbl_fn_804C18A8_00000A44:
    bl fn_806B0DE0
    b lbl_fn_804C18A8_00000A64
lbl_fn_804C18A8_00000A4C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C18A8_00000A60
    li r3, 0x1
    b lbl_fn_804C18A8_00000A64
lbl_fn_804C18A8_00000A60:
    bl fn_806A8E70
lbl_fn_804C18A8_00000A64:
    cmpw r17, r3
    blt lbl_fn_804C18A8_00000B48
    stw r23, 0x98(r18)
    stw r24, 0x9c(r18)
    stw r24, 0xa0(r18)
    stw r24, 0xa4(r18)
    lwz r16, 0x88(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000AA4
    mr r3, r16
    li r4, 0x0
    bl fn_800D246C
    stfs f28, 0x104(r16)
    lwz r0, 0xfc(r16)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r16)
lbl_fn_804C18A8_00000AA4:
    lwz r16, 0x80(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000AC4
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
lbl_fn_804C18A8_00000AC4:
    lwz r16, 0x84(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000AE4
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
lbl_fn_804C18A8_00000AE4:
    lwz r16, 0x8c(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000B04
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
lbl_fn_804C18A8_00000B04:
    lwz r16, 0x90(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000B24
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
lbl_fn_804C18A8_00000B24:
    lwz r16, 0x94(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00001284
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
    b lbl_fn_804C18A8_00001284
lbl_fn_804C18A8_00000B48:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C18A8_00000B60
    li r16, 0x0
    b lbl_fn_804C18A8_00000B80
lbl_fn_804C18A8_00000B60:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r17
    ble lbl_fn_804C18A8_00000B7C
    lwz r3, 0x8(r1)
    lbzx r16, r3, r17
    b lbl_fn_804C18A8_00000B80
lbl_fn_804C18A8_00000B7C:
    li r16, 0xff
lbl_fn_804C18A8_00000B80:
    lwz r3, lbl_8087F628
    mr r4, r16
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r4, lbl_8087F610
    mr r25, r3
    li r3, 0x0
    lwz r0, 0x5e8(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804C18A8_00000BE4
lbl_fn_804C18A8_00000BB4:
    lwz r0, 0x5e4(r4)
    add r21, r0, r3
    lwz r0, 0xd0(r21)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C18A8_00000BDC
    lbz r0, 0xcc(r21)
    cmplw r16, r0
    bne lbl_fn_804C18A8_00000BDC
    b lbl_fn_804C18A8_00000BE8
lbl_fn_804C18A8_00000BDC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804C18A8_00000BB4
lbl_fn_804C18A8_00000BE4:
    li r21, 0x0
lbl_fn_804C18A8_00000BE8:
    cmpwi r25, 0x0
    addi r3, r4, 0x610
    beq lbl_fn_804C18A8_00000BFC
    lwz r4, 0x30(r25)
    b lbl_fn_804C18A8_00000C00
lbl_fn_804C18A8_00000BFC:
    li r4, 0x0
lbl_fn_804C18A8_00000C00:
    bl fn_805075C8
    cmpwi r21, 0x0
    bne lbl_fn_804C18A8_00000CE0
    stw r23, 0x98(r18)
    stw r24, 0x9c(r18)
    lwz r16, 0x88(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000C3C
    mr r3, r16
    li r4, 0x0
    bl fn_800D246C
    stfs f28, 0x104(r16)
    lwz r0, 0xfc(r16)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r16)
lbl_fn_804C18A8_00000C3C:
    lwz r16, 0x80(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000C5C
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
lbl_fn_804C18A8_00000C5C:
    lwz r16, 0x84(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000C7C
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
lbl_fn_804C18A8_00000C7C:
    lwz r16, 0x8c(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000C9C
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
lbl_fn_804C18A8_00000C9C:
    lwz r16, 0x90(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000CBC
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
lbl_fn_804C18A8_00000CBC:
    lwz r16, 0x94(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00001284
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f30, 0x100(r16)
    b lbl_fn_804C18A8_00001284
lbl_fn_804C18A8_00000CE0:
    subi r0, r20, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_804C18A8_00000CF4
    stw r26, 0x9c(r18)
    b lbl_fn_804C18A8_00000D00
lbl_fn_804C18A8_00000CF4:
    lwz r0, 0xd0(r21)
    extrwi r0, r0, 4, 6
    stw r0, 0x9c(r18)
lbl_fn_804C18A8_00000D00:
    stw r24, 0x98(r18)
    lwz r3, lbl_8087F610
    lwz r0, 0xd0(r21)
    lwz r19, 0xb0(r21)
    lwz r4, 0x540(r3)
    extrwi r16, r0, 4, 22
    bl fn_804EA5E0
    cmpw r16, r3
    blt lbl_fn_804C18A8_00000D34
    lwz r3, lbl_8087F610
    lwz r4, 0x540(r3)
    bl fn_804EA5E0
    mr r16, r3
lbl_fn_804C18A8_00000D34:
    lwz r0, 0xd0(r21)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    bne lbl_fn_804C18A8_00000DB8
    lwz r0, 0xd88(r15)
    stw r17, 0xe60(r15)
    cmpwi r0, 0x4
    lwz r19, 0xe6c(r15)
    lwz r16, 0xe5c(r15)
    bne lbl_fn_804C18A8_00000E48
    add r4, r15, r31
    addi r3, r30, 0x2f1
    lwz r4, 0x80(r4)
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r21
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0xe60(r15)
    addi r3, r30, 0x302
    mulli r0, r0, 0x22c
    add r4, r15, r0
    lwz r4, 0x80(r4)
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r21
    li r5, 0x4
    bl fn_801FED24
    b lbl_fn_804C18A8_00000E48
lbl_fn_804C18A8_00000DB8:
    lwz r4, 0x80(r18)
    addi r3, r30, 0x2f1
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088740C
    mr r4, r3
    mr r3, r21
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x80(r18)
    addi r3, r30, 0x302
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088740C
    mr r4, r3
    mr r3, r21
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x80(r18)
    addi r3, r30, 0x2d0
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r21
    li r5, 0x0
    bl fn_801FEDBC
    lwz r4, 0x80(r18)
    addi r3, r30, 0x2db
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r21
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_804C18A8_00000E48:
    addi r3, r25, 0x10
    addi r4, r27, 0x18
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_804C18A8_00000F1C
    lwz r3, lbl_8087F86C
    lwz r16, 0x6b4(r3)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00000E70
    b lbl_fn_804C18A8_00000E74
lbl_fn_804C18A8_00000E70:
    la r16, lbl_808813D0
lbl_fn_804C18A8_00000E74:
    lwz r4, 0x80(r18)
    addi r3, r30, 0x3af
    addi r19, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r19
    mr r5, r16
    bl fn_801FEE08
    lwz r4, 0x80(r18)
    addi r16, r27, 0x18
    addi r3, r30, 0x3bd
    addi r19, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r19
    mr r5, r16
    bl fn_801FEE08
    lwz r4, 0x80(r18)
    addi r3, r30, 0x3ce
    addi r19, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r19
    mr r5, r16
    bl fn_801FEE08
    lwz r4, 0x80(r18)
    addi r3, r30, 0x2c2
    addi r19, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r19
    mr r5, r16
    bl fn_801FEE08
    lwz r4, 0x84(r18)
    addi r3, r30, 0x3df
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r16
    bl fn_801FECE0
    b lbl_fn_804C18A8_000010CC
lbl_fn_804C18A8_00000F1C:
    lwz r4, 0x80(r18)
    addi r3, r30, 0x3af
    addi r21, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    addi r5, r25, 0x10
    bl fn_801FEE08
    addis r3, r19, 0xb
    subi r3, r3, 0x51a0
    bl fn_8020924C
    cmpwi r19, -0x1
    mr r28, r3
    bne lbl_fn_804C18A8_00000F7C
    lwz r4, lbl_8087F86C
    addi r3, r1, 0x10
    lwz r4, 0x19c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804C18A8_00000F6C
    b lbl_fn_804C18A8_00000F70
lbl_fn_804C18A8_00000F6C:
    la r4, lbl_808813D0
lbl_fn_804C18A8_00000F70:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804C18A8_00000FC0
lbl_fn_804C18A8_00000F7C:
    cmpwi r19, 0x0
    blt lbl_fn_804C18A8_00000FA0
    cmpwi r19, 0x1a
    bge lbl_fn_804C18A8_00000FA0
    lwz r4, 0x4(r28)
    addi r3, r1, 0x10
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804C18A8_00000FC0
lbl_fn_804C18A8_00000FA0:
    cmpwi r28, 0x0
    addi r3, r1, 0x10
    beq lbl_fn_804C18A8_00000FB4
    lwz r4, 0x4(r28)
    b lbl_fn_804C18A8_00000FB8
lbl_fn_804C18A8_00000FB4:
    addi r4, r27, 0x18
lbl_fn_804C18A8_00000FB8:
    crclr 6
    bl fn_800DD3FC
lbl_fn_804C18A8_00000FC0:
    lwz r4, 0x80(r18)
    addi r3, r30, 0x3bd
    addi r19, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r19
    addi r5, r1, 0x10
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    lwz r4, 0x30(r25)
    bl fn_804FA890
    lwz r4, 0x80(r18)
    mr r21, r3
    addi r3, r30, 0x3ce
    addi r19, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r19
    mr r5, r21
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    mr r5, r16
    lwz r4, 0x540(r3)
    bl fn_804FA7CC
    lwz r4, 0x80(r18)
    mr r16, r3
    addi r3, r30, 0x2c2
    addi r19, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r19
    mr r5, r16
    bl fn_801FEE08
    cmpwi r28, 0x0
    beq lbl_fn_804C18A8_00001054
    lwz r16, 0x2c(r28)
    b lbl_fn_804C18A8_00001058
lbl_fn_804C18A8_00001054:
    li r16, 0x0
lbl_fn_804C18A8_00001058:
    lwz r4, 0x84(r18)
    addi r3, r30, 0x3df
    addi r19, r4, 0x58
    bl fn_800DC6B4
    xoris r0, r16, 0x8000
    stw r0, 0x94(r1)
    mr r4, r3
    mr r3, r19
    stw r29, 0x90(r1)
    lfd f0, 0x90(r1)
    fsubs f1, f0, f31
    bl fn_801FECE0
    cntlzw r0, r16
    lwz r4, 0x84(r18)
    extrwi r0, r0, 1, 26
    addi r3, r30, 0x3ec
    neg r0, r0
    addi r16, r4, 0x58
    clrlwi r19, r0, 24
    bl fn_800DC6B4
    xoris r0, r19, 0x8000
    stw r0, 0x9c(r1)
    mr r4, r3
    mr r3, r16
    stw r29, 0x98(r1)
    li r5, 0x0
    lfd f0, 0x98(r1)
    fsubs f1, f0, f31
    bl fn_801FEDBC
lbl_fn_804C18A8_000010CC:
    cmplw r25, r22
    bne lbl_fn_804C18A8_00001120
    lwz r4, 0x80(r18)
    addi r3, r30, 0x389
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088742C
    mr r4, r3
    mr r3, r16
    li r5, 0x3
    bl fn_801FEDBC
    lwz r4, 0x80(r18)
    addi r3, r30, 0x3f4
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088742C
    mr r4, r3
    mr r3, r16
    li r5, 0x3
    bl fn_801FEDBC
    b lbl_fn_804C18A8_00001168
lbl_fn_804C18A8_00001120:
    lwz r4, 0x80(r18)
    addi r3, r30, 0x389
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887418
    mr r4, r3
    mr r3, r16
    li r5, 0x3
    bl fn_801FEDBC
    lwz r4, 0x80(r18)
    addi r3, r30, 0x3f4
    addi r16, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887418
    mr r4, r3
    mr r3, r16
    li r5, 0x3
    bl fn_801FEDBC
lbl_fn_804C18A8_00001168:
    subi r0, r20, 0x1
    lwz r4, 0x84(r18)
    cntlzw r0, r0
    addi r3, r30, 0x3fc
    addi r19, r4, 0x58
    srwi r16, r0, 5
    bl fn_800DC6B4
    xoris r0, r16, 0x8000
    stw r0, 0x9c(r1)
    mr r4, r3
    mr r3, r19
    stw r29, 0x98(r1)
    lfd f0, 0x98(r1)
    fsubs f1, f0, f31
    bl fn_801FECE0
    cmpwi r20, 0x1
    bne lbl_fn_804C18A8_000011DC
    lwz r0, 0x9c(r18)
    li r5, -0x1
    cmpwi r0, 0x2
    bne lbl_fn_804C18A8_000011C4
    subi r5, r14, 0x6901
    b lbl_fn_804C18A8_000011D0
lbl_fn_804C18A8_000011C4:
    cmpwi r0, 0x1
    bne lbl_fn_804C18A8_000011D0
    lis r5, 0xffff
lbl_fn_804C18A8_000011D0:
    lwz r3, 0x84(r18)
    addi r4, r30, 0x405
    bl fn_801F4998
lbl_fn_804C18A8_000011DC:
    lwz r16, 0x80(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00001204
    mr r3, r16
    li r4, 0x0
    bl fn_800D246C
    stfs f28, 0x104(r16)
    lwz r0, 0xfc(r16)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r16)
lbl_fn_804C18A8_00001204:
    lwz r16, 0x84(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_0000122C
    mr r3, r16
    li r4, 0x0
    bl fn_800D246C
    stfs f28, 0x104(r16)
    lwz r0, 0xfc(r16)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r16)
lbl_fn_804C18A8_0000122C:
    lwz r16, 0x94(r18)
    cmpwi r16, 0x0
    beq lbl_fn_804C18A8_00001254
    mr r3, r16
    li r4, 0x0
    bl fn_800D246C
    stfs f28, 0x104(r16)
    lwz r0, 0xfc(r16)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r16)
lbl_fn_804C18A8_00001254:
    lwz r3, 0x80(r18)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lwz r16, 0x88(r18)
    cmpwi r16, 0x0
    lfs f27, 0xa0(r16)
    beq lbl_fn_804C18A8_00001284
    mr r3, r16
    li r4, 0x1
    bl fn_800D246C
    stfs f29, 0x104(r16)
    stfs f27, 0x100(r16)
lbl_fn_804C18A8_00001284:
    addi r17, r17, 0x1
    addi r31, r31, 0x22c
    cmpwi r17, 0x6
    addi r18, r18, 0x22c
    blt lbl_fn_804C18A8_00000A1C
    addi r11, r1, 0xf0
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    psq_l f27, 0xf8(r1), 0, 0
    lfd f27, 0xf0(r1)
    bl _restgpr_14
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_804C2260(void)
{
    nofralloc
    stw r4, 0xdcc(r3)
    blr
}

asm void fn_804C2268(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lis r31, lbl_807588DC@ha
    mr r29, r3
    mr r30, r4
    lwz r3, 0x50(r3)
    addi r31, r31, lbl_807588DC@l
    li r6, 0x0
    mr r5, r30
    addi r4, r31, 0x410
    bl fn_801F4CB4
    lwz r4, 0x50(r29)
    addi r3, r31, 0x41e
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887418
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FEDBC
    xoris r3, r30, 0x8000
    subfic r0, r30, 0x1e
    addc r0, r0, r3
    lwz r4, 0x50(r29)
    subfe r0, r0, r0
    li r26, 0xff
    addi r3, r31, 0x41e
    addi r25, r4, 0x58
    andc r27, r26, r0
    bl fn_800DC6B4
    xoris r0, r27, 0x8000
    lis r28, 0x4330
    lis r27, lbl_80758848@ha
    stw r0, 0xc(r1)
    lfd f1, lbl_80758848@l(r27)
    mr r4, r3
    stw r28, 0x8(r1)
    mr r3, r25
    li r5, 0x2
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    xoris r3, r30, 0x8000
    subfic r0, r30, 0x1e
    addc r0, r0, r3
    lwz r4, 0x50(r29)
    subfe r0, r0, r0
    addi r3, r31, 0x41e
    addi r25, r4, 0x58
    andc r26, r26, r0
    bl fn_800DC6B4
    xoris r0, r26, 0x8000
    stw r0, 0x14(r1)
    mr r4, r3
    lfd f1, lbl_80758848@l(r27)
    stw r28, 0x10(r1)
    mr r3, r25
    li r5, 0x3
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    lwz r0, 0xd88(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804C2268_00001444
    lwz r26, 0x50(r29)
    cmpwi r26, 0x0
    beq lbl_fn_804C2268_00001444
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    cmpwi r30, 0x0
    li r0, 0x1
    bne lbl_fn_804C2268_00001414
    li r0, -0x1
lbl_fn_804C2268_00001414:
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80758848@ha
    stw r3, 0x14(r1)
    lfd f1, lbl_80758848@l(r4)
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804C2268_00001444:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804C23E4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r29, r3
    li r31, 0x0
    li r26, 0x0
    mr r27, r29
    li r30, -0x1
    li r28, 0x0
lbl_fn_804C23E4_00001484:
    lwz r3, lbl_8087F610
    lwz r4, 0x540(r3)
    bl fn_804EA5E0
    cmpw r26, r3
    bge lbl_fn_804C23E4_000014A0
    stw r26, 0xdd4(r27)
    b lbl_fn_804C23E4_000014A4
lbl_fn_804C23E4_000014A0:
    stw r30, 0xdd4(r27)
lbl_fn_804C23E4_000014A4:
    addi r26, r26, 0x1
    stw r28, 0xe14(r27)
    cmplwi r26, 0x10
    addi r27, r27, 0x4
    blt lbl_fn_804C23E4_00001484
    li r30, 0x0
    li r28, 0x1
    b lbl_fn_804C23E4_00001598
lbl_fn_804C23E4_000014C4:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C23E4_000014DC
    li r5, 0x0
    b lbl_fn_804C23E4_000014FC
lbl_fn_804C23E4_000014DC:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r30
    ble lbl_fn_804C23E4_000014F8
    lwz r3, 0x8(r1)
    lbzx r5, r3, r30
    b lbl_fn_804C23E4_000014FC
lbl_fn_804C23E4_000014F8:
    li r5, 0xff
lbl_fn_804C23E4_000014FC:
    lwz r3, lbl_8087F610
    li r4, 0x0
    lwz r0, 0x5e8(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804C23E4_00001544
lbl_fn_804C23E4_00001514:
    lwz r0, 0x5e4(r3)
    add r6, r0, r4
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C23E4_0000153C
    lbz r0, 0xcc(r6)
    cmplw r5, r0
    bne lbl_fn_804C23E4_0000153C
    b lbl_fn_804C23E4_00001548
lbl_fn_804C23E4_0000153C:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804C23E4_00001514
lbl_fn_804C23E4_00001544:
    li r6, 0x0
lbl_fn_804C23E4_00001548:
    cmpwi r6, 0x0
    beq lbl_fn_804C23E4_00001594
    lwz r5, 0xd0(r6)
    srwi r0, r5, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C23E4_00001594
    lwz r4, lbl_8087F610
    extrwi r27, r5, 4, 22
    lwz r4, 0x540(r4)
    bl fn_804EA5E0
    cmplw r27, r3
    beq lbl_fn_804C23E4_00001594
    slwi r0, r27, 2
    add r3, r29, r0
    lwz r0, 0xe14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C23E4_00001594
    stw r28, 0xe14(r3)
    addi r31, r31, 0x1
lbl_fn_804C23E4_00001594:
    addi r30, r30, 0x1
lbl_fn_804C23E4_00001598:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C23E4_000015C8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C23E4_000015C0
    li r3, 0x1
    b lbl_fn_804C23E4_000015E0
lbl_fn_804C23E4_000015C0:
    bl fn_806B0DE0
    b lbl_fn_804C23E4_000015E0
lbl_fn_804C23E4_000015C8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C23E4_000015DC
    li r3, 0x1
    b lbl_fn_804C23E4_000015E0
lbl_fn_804C23E4_000015DC:
    bl fn_806A8E70
lbl_fn_804C23E4_000015E0:
    cmpw r30, r3
    blt lbl_fn_804C23E4_000014C4
    cmpwi r31, 0x0
    bgt lbl_fn_804C23E4_00001638
    li r0, 0x2
    mr r4, r29
    li r3, 0x1
    mtctr r0
lbl_fn_804C23E4_00001600:
    stw r3, 0xe14(r4)
    stw r3, 0xe18(r4)
    stw r3, 0xe1c(r4)
    stw r3, 0xe20(r4)
    stw r3, 0xe24(r4)
    stw r3, 0xe28(r4)
    stw r3, 0xe2c(r4)
    stw r3, 0xe30(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_804C23E4_00001600
    lwz r3, lbl_8087F610
    lwz r4, 0x540(r3)
    bl fn_804EA5E0
    mr r31, r3
lbl_fn_804C23E4_00001638:
    cmpwi r31, 0x1
    bne lbl_fn_804C23E4_000016C0
    li r0, 0x10
    li r3, 0x1
    stw r3, 0xe54(r29)
    mr r4, r29
    li r3, 0x0
    mtctr r0
lbl_fn_804C23E4_00001658:
    lwz r0, 0xe14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804C23E4_000016B0
    lwz r27, lbl_8087F610
    slwi r0, r3, 2
    add r31, r29, r0
    mr r3, r27
    bl fn_804EB1B0
    lwz r4, 0xdd4(r31)
    mr r5, r3
    mr r3, r27
    bl fn_804EA538
    lwz r30, 0xdd4(r31)
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0xd0(r3)
    rlwimi r0, r30, 2, 26, 29
    stw r0, 0xd0(r3)
    mr r3, r29
    lwz r4, 0xdd4(r31)
    bl fn_804C2994
    b lbl_fn_804C23E4_00001904
lbl_fn_804C23E4_000016B0:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_804C23E4_00001658
    b lbl_fn_804C23E4_00001904
lbl_fn_804C23E4_000016C0:
    li r0, 0x3c
    stw r0, 0xe54(r29)
    li r30, 0x0
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_804C23E4_0000183C
    bl fn_80680CF8
    divw r4, r3, r31
    li r0, 0x2
    mr r5, r29
    li r6, 0x0
    mullw r4, r4, r31
    subf r3, r4, r3
    mtctr r0
lbl_fn_804C23E4_000016FC:
    lwz r0, 0xe14(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804C23E4_0000171C
    cmpwi r3, 0x0
    bgt lbl_fn_804C23E4_00001718
    mr r30, r6
    b lbl_fn_804C23E4_00001824
lbl_fn_804C23E4_00001718:
    subi r3, r3, 0x1
lbl_fn_804C23E4_0000171C:
    lwz r0, 0xe18(r5)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804C23E4_00001740
    cmpwi r3, 0x0
    bgt lbl_fn_804C23E4_0000173C
    mr r30, r6
    b lbl_fn_804C23E4_00001824
lbl_fn_804C23E4_0000173C:
    subi r3, r3, 0x1
lbl_fn_804C23E4_00001740:
    lwz r0, 0xe1c(r5)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804C23E4_00001764
    cmpwi r3, 0x0
    bgt lbl_fn_804C23E4_00001760
    mr r30, r6
    b lbl_fn_804C23E4_00001824
lbl_fn_804C23E4_00001760:
    subi r3, r3, 0x1
lbl_fn_804C23E4_00001764:
    lwz r0, 0xe20(r5)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804C23E4_00001788
    cmpwi r3, 0x0
    bgt lbl_fn_804C23E4_00001784
    mr r30, r6
    b lbl_fn_804C23E4_00001824
lbl_fn_804C23E4_00001784:
    subi r3, r3, 0x1
lbl_fn_804C23E4_00001788:
    lwz r0, 0xe24(r5)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804C23E4_000017AC
    cmpwi r3, 0x0
    bgt lbl_fn_804C23E4_000017A8
    mr r30, r6
    b lbl_fn_804C23E4_00001824
lbl_fn_804C23E4_000017A8:
    subi r3, r3, 0x1
lbl_fn_804C23E4_000017AC:
    lwz r0, 0xe28(r5)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804C23E4_000017D0
    cmpwi r3, 0x0
    bgt lbl_fn_804C23E4_000017CC
    mr r30, r6
    b lbl_fn_804C23E4_00001824
lbl_fn_804C23E4_000017CC:
    subi r3, r3, 0x1
lbl_fn_804C23E4_000017D0:
    lwz r0, 0xe2c(r5)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804C23E4_000017F4
    cmpwi r3, 0x0
    bgt lbl_fn_804C23E4_000017F0
    mr r30, r6
    b lbl_fn_804C23E4_00001824
lbl_fn_804C23E4_000017F0:
    subi r3, r3, 0x1
lbl_fn_804C23E4_000017F4:
    lwz r0, 0xe30(r5)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804C23E4_00001818
    cmpwi r3, 0x0
    bgt lbl_fn_804C23E4_00001814
    mr r30, r6
    b lbl_fn_804C23E4_00001824
lbl_fn_804C23E4_00001814:
    subi r3, r3, 0x1
lbl_fn_804C23E4_00001818:
    addi r5, r5, 0x20
    addi r6, r6, 0x1
    bdnz lbl_fn_804C23E4_000016FC
lbl_fn_804C23E4_00001824:
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0xd0(r3)
    rlwimi r0, r30, 2, 26, 29
    stw r0, 0xd0(r3)
    b lbl_fn_804C23E4_000018D4
lbl_fn_804C23E4_0000183C:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804C23E4_00001870
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804C23E4_00001864
    li r0, 0x0
    b lbl_fn_804C23E4_00001874
lbl_fn_804C23E4_00001864:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804C23E4_00001874
lbl_fn_804C23E4_00001870:
    li r0, 0x0
lbl_fn_804C23E4_00001874:
    lwz r6, lbl_8087F610
    clrlwi r4, r0, 24
    li r3, 0x0
    lwz r0, 0x5e8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804C23E4_000018C0
lbl_fn_804C23E4_00001890:
    lwz r0, 0x5e4(r6)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804C23E4_000018B8
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804C23E4_000018B8
    b lbl_fn_804C23E4_000018C4
lbl_fn_804C23E4_000018B8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804C23E4_00001890
lbl_fn_804C23E4_000018C0:
    li r5, 0x0
lbl_fn_804C23E4_000018C4:
    cmpwi r5, 0x0
    beq lbl_fn_804C23E4_000018D4
    lwz r0, 0xd0(r5)
    extrwi r30, r0, 4, 26
lbl_fn_804C23E4_000018D4:
    lwz r27, lbl_8087F610
    slwi r0, r30, 2
    add r30, r29, r0
    mr r3, r27
    bl fn_804EB1B0
    lwz r4, 0xdd4(r30)
    mr r5, r3
    mr r3, r27
    bl fn_804EA538
    lwz r4, 0xdd4(r30)
    mr r3, r29
    bl fn_804C2994
lbl_fn_804C23E4_00001904:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804C28A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0xd88(r3)
    cmpwi r0, 0x7
    bne lbl_fn_804C28A0_000019F8
    lwz r6, 0xdb4(r3)
    mr r7, r6
lbl_fn_804C28A0_00001940:
    addi r5, r6, 0x1
    divw r0, r5, r4
    mullw r0, r0, r4
    subf r6, r0, r5
    stw r6, 0xdb4(r3)
    slwi r0, r6, 2
    add r5, r3, r0
    lwz r0, 0xe14(r5)
    cmpwi r0, 0x0
    bne lbl_fn_804C28A0_00001970
    cmpw r7, r6
    bne lbl_fn_804C28A0_00001940
lbl_fn_804C28A0_00001970:
    lwz r0, 0xe54(r3)
    lwz r4, 0xdcc(r3)
    cmpw r0, r4
    bgt lbl_fn_804C28A0_000019D8
    lwz r4, lbl_8087F610
    lwz r0, 0x55c(r4)
    stw r0, 0xdb4(r3)
    mr r3, r31
    slwi r0, r0, 2
    add r4, r31, r0
    lwz r4, 0xdd4(r4)
    bl fn_804C2994
    li r3, 0x1
    li r0, 0x9
    stw r3, 0xda4(r31)
    addi r3, r1, 0xc
    li r4, 0x1
    stw r0, 0xd90(r31)
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x8
    bl fn_804BC628
    b lbl_fn_804C28A0_000019F8
lbl_fn_804C28A0_000019D8:
    addi r0, r4, 0x1
    stw r0, 0xdcc(r3)
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804C28A0_000019F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
