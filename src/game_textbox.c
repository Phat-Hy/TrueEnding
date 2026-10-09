#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_15(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_15(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void fn_8005DF90(void);
extern void fn_80075DEC(void);
extern void fn_80075F58(void);
extern void fn_800763FC(void);
extern void fn_800A96AC(void);
extern void fn_800ACFC8(void);
extern void fn_800BC2E0(void);
extern void fn_800BFB70(void);
extern void fn_800C0508(void);
extern void fn_800C0D4C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D594C(void);
extern void fn_800D59B8(void);
extern void fn_800D5B58(void);
extern void fn_80473EFC(void);
extern void fn_805F9160(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614190(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615560(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806163C0(void);
extern void fn_806163E0(void);
extern void fn_80616400(void);
extern void fn_806167B0(void);
extern void fn_80616E80(void);
extern void fn_80616EF0(void);
extern void fn_80617030(void);
extern void fn_80617130(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617270(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617460(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80618420(void);
extern void fn_8068AEB0(void);
extern void fn_806958E0(void);

/* External data declarations */
extern u8 lbl_80732C08[];
extern u8 lbl_80732C1C[];
extern u8 lbl_80732C30[];
extern u8 lbl_80732C4C[];
extern u8 lbl_80732C78[];
extern u8 lbl_80732C9C[];
extern u8 lbl_80778DF8[];
extern u8 lbl_80778E38[];
extern u8 lbl_807C7460[];
extern u8 lbl_807C7470[];

/* Small data declarations */
extern u32 lbl_8087D850;
extern u32 lbl_8087D854;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EF98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880DC8;
extern u32 lbl_80880DD0;
extern u32 lbl_80880DD4;
extern u32 lbl_80880DD8;
extern u32 lbl_80880DDC;
extern u32 lbl_80880DE0;
extern u32 lbl_80880DE4;
extern u32 lbl_80880DE8;
extern u32 lbl_80880DEC;
extern u32 lbl_80880DF0;
extern u32 lbl_80880DF4;
extern u32 lbl_80880DF8;
extern u32 lbl_80880DFC;
extern u32 lbl_80880E00;
extern u32 lbl_80880E08;
extern u32 lbl_80880E0C;
extern u32 lbl_80880E10;
extern u32 lbl_80880E14;
extern u32 lbl_80880E18;

/* Function declarations */
void fn_800AD0F0(void);
void fn_800AD340(void);
void fn_800AD484(void);
void fn_800AD648(void);
void fn_800AD834(void);
void fn_800AE568(void);
void fn_800AECD4(void);
void fn_800AEE9C(void);
void fn_800AEF4C(void);

asm void fn_800AD0F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80778DF8@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80778DF8@l
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    stw r4, 0x0(r3)
    addi r3, r3, 0x4
    bl fn_800BC2E0
    addi r3, r31, 0x138
    bl fn_800D5738
    li r0, 0x0
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    stw r0, 0x168(r31)
    addi r3, r31, 0x170
    addi r4, r4, fn_800D5738@l
    stw r0, 0x16c(r31)
    addi r5, r5, fn_800D5808@l
    li r6, 0x30
    li r7, 0x8
    bl fn_806958E0
    addi r3, r31, 0x2f0
    bl fn_800D5738
    addi r3, r31, 0x320
    bl fn_800D5738
    lis r30, lbl_80732C4C@ha
    addi r3, r31, 0x138
    addi r8, r30, lbl_80732C4C@l
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_800D5B58
    lfs f1, lbl_80880DD0
    addi r3, r31, 0x138
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    addi r30, r30, lbl_80732C4C@l
    li r28, 0x0
    li r29, 0x0
lbl_fn_800AD0F0_000000CC:
    add r3, r31, r29
    addi r8, r30, 0xb
    addi r3, r3, 0x170
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_800D5B58
    lfs f1, lbl_80880DD0
    add r3, r31, r29
    addi r3, r3, 0x170
    li r4, 0x1
    fmr f2, f1
    li r5, 0x1
    fmr f3, f1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    addi r28, r28, 0x1
    addi r29, r29, 0x30
    cmpwi r28, 0x8
    blt lbl_fn_800AD0F0_000000CC
    lis r30, lbl_80732C4C@ha
    addi r3, r31, 0x2f0
    addi r30, r30, lbl_80732C4C@l
    li r4, 0x40
    addi r8, r30, 0x14
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_800D5B58
    lfs f1, lbl_80880DD0
    addi r3, r31, 0x2f0
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    addi r3, r31, 0x320
    addi r8, r30, 0x1d
    li r4, 0x40
    li r5, 0x8
    li r6, 0x1
    li r7, 0x1
    bl fn_800D5B58
    lfs f1, lbl_80880DD0
    addi r3, r31, 0x320
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r5, lbl_8087EFA8
    mr r3, r31
    lwz r0, 0x3dc(r5)
    stw r0, 0x4(r31)
    lwz r0, 0x3e0(r5)
    stw r0, 0x8(r31)
    lfs f0, 0x3e4(r5)
    stfs f0, 0xc(r31)
    lwz r4, 0x3e8(r5)
    lwz r0, 0x3ec(r5)
    stw r0, 0x14(r31)
    stw r4, 0x10(r31)
    lwz r4, 0x3f0(r5)
    lwz r0, 0x3f4(r5)
    stw r0, 0x1c(r31)
    stw r4, 0x18(r31)
    lwz r4, 0x3f8(r5)
    lwz r0, 0x3fc(r5)
    stw r0, 0x24(r31)
    stw r4, 0x20(r31)
    lwz r4, 0x400(r5)
    lwz r0, 0x404(r5)
    stw r0, 0x2c(r31)
    stw r4, 0x28(r31)
    lfs f0, 0x408(r5)
    stfs f0, 0x30(r31)
    lfs f0, 0x40c(r5)
    stfs f0, 0x34(r31)
    bl fn_800AD484
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800AD340(void)
{
    nofralloc
    lwz r8, lbl_8087EFA8
    li r0, 0x2
    li r9, 0x0
    mr r6, r3
    addi r7, r8, 0x3dc
    li r10, 0x0
    li r5, 0x0
    mtctr r0
lbl_fn_800AD340_00000270:
    cmpwi r9, 0x0
    li r9, 0x0
    bne lbl_fn_800AD340_00000290
    add r4, r7, r5
    lfs f1, 0x10(r6)
    lfs f0, 0xc(r4)
    fcmpu cr0, f1, f0
    beq lbl_fn_800AD340_00000294
lbl_fn_800AD340_00000290:
    li r9, 0x1
lbl_fn_800AD340_00000294:
    cmpwi r9, 0x0
    li r9, 0x0
    addi r5, r5, 0x4
    bne lbl_fn_800AD340_000002B8
    add r4, r7, r5
    lfs f1, 0x14(r6)
    lfs f0, 0xc(r4)
    fcmpu cr0, f1, f0
    beq lbl_fn_800AD340_000002BC
lbl_fn_800AD340_000002B8:
    li r9, 0x1
lbl_fn_800AD340_000002BC:
    cmpwi r9, 0x0
    li r9, 0x0
    addi r5, r5, 0x4
    bne lbl_fn_800AD340_000002E0
    add r4, r7, r5
    lfs f1, 0x18(r6)
    lfs f0, 0xc(r4)
    fcmpu cr0, f1, f0
    beq lbl_fn_800AD340_000002E4
lbl_fn_800AD340_000002E0:
    li r9, 0x1
lbl_fn_800AD340_000002E4:
    cmpwi r9, 0x0
    li r9, 0x0
    addi r5, r5, 0x4
    bne lbl_fn_800AD340_00000308
    add r4, r7, r5
    lfs f1, 0x1c(r6)
    lfs f0, 0xc(r4)
    fcmpu cr0, f1, f0
    beq lbl_fn_800AD340_0000030C
lbl_fn_800AD340_00000308:
    li r9, 0x1
lbl_fn_800AD340_0000030C:
    addi r5, r5, 0x4
    addi r6, r6, 0x10
    addi r10, r10, 0x3
    bdnz lbl_fn_800AD340_00000270
    cmpwi r9, 0x0
    beqlr
    lwz r0, 0x3dc(r8)
    stw r0, 0x4(r3)
    lwz r0, 0x3e0(r8)
    stw r0, 0x8(r3)
    lfs f0, 0x3e4(r8)
    stfs f0, 0xc(r3)
    lwz r4, 0x3e8(r8)
    lwz r0, 0x3ec(r8)
    stw r0, 0x14(r3)
    stw r4, 0x10(r3)
    lwz r4, 0x3f0(r8)
    lwz r0, 0x3f4(r8)
    stw r0, 0x1c(r3)
    stw r4, 0x18(r3)
    lwz r4, 0x3f8(r8)
    lwz r0, 0x3fc(r8)
    stw r0, 0x24(r3)
    stw r4, 0x20(r3)
    lwz r4, 0x400(r8)
    lwz r0, 0x404(r8)
    stw r0, 0x2c(r3)
    stw r4, 0x28(r3)
    lfs f0, 0x408(r8)
    stfs f0, 0x30(r3)
    lfs f0, 0x40c(r8)
    stfs f0, 0x34(r3)
    b fn_800AD484
    blr
}

asm void fn_800AD484(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x30
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    stfd f27, 0x40(r1)
    psq_st f27, 0x48(r1), 0, 0
    stfd f26, 0x30(r1)
    psq_st f26, 0x38(r1), 0, 0
    bl _savegpr_24
    lis r4, lbl_80732C30@ha
    mr r24, r3
    lwz r27, 0x348(r3)
    mr r30, r24
    lfd f27, lbl_80732C30@l(r4)
    li r26, 0x0
    lfs f28, lbl_80880DD4
    li r29, 0x0
    lfs f29, lbl_80880DD8
    lis r31, 0x4330
    lfs f30, lbl_80880DDC
    lfs f31, lbl_80880DE0
    b lbl_fn_800AD484_000004C8
lbl_fn_800AD484_0000040C:
    add r28, r27, r29
    li r25, 0x0
    b lbl_fn_800AD484_000004A8
lbl_fn_800AD484_00000418:
    xoris r0, r25, 0x8000
    stw r0, 0xc(r1)
    lfs f2, 0x10(r30)
    stw r31, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f27
    fdivs f26, f0, f28
    fmr f1, f26
    bl fn_8068AEB0
    frsp f0, f1
    fcmpo cr0, f0, f29
    ble lbl_fn_800AD484_0000045C
    fmr f1, f26
    lfs f2, 0x10(r30)
    bl fn_8068AEB0
    frsp f0, f1
    b lbl_fn_800AD484_00000460
lbl_fn_800AD484_0000045C:
    fmr f0, f29
lbl_fn_800AD484_00000460:
    fdivs f0, f26, f0
    lfs f1, lbl_8087D850
    fmuls f0, f0, f30
    fcmpo cr0, f0, f1
    bge lbl_fn_800AD484_00000478
    b lbl_fn_800AD484_0000048C
lbl_fn_800AD484_00000478:
    lfs f1, lbl_8087D854
    fcmpo cr0, f0, f1
    ble lbl_fn_800AD484_00000488
    b lbl_fn_800AD484_0000048C
lbl_fn_800AD484_00000488:
    fmr f1, f0
lbl_fn_800AD484_0000048C:
    fmuls f0, f31, f1
    addi r25, r25, 0x1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stb r0, 0x0(r28)
    addi r28, r28, 0x1
lbl_fn_800AD484_000004A8:
    addi r3, r24, 0x320
    bl fn_806163C0
    clrlwi r0, r3, 16
    cmpw r25, r0
    blt lbl_fn_800AD484_00000418
    addi r30, r30, 0x4
    addi r29, r29, 0x40
    addi r26, r26, 0x1
lbl_fn_800AD484_000004C8:
    addi r3, r24, 0x320
    bl fn_806163E0
    clrlwi r0, r3, 16
    cmpw r26, r0
    blt lbl_fn_800AD484_0000040C
    addi r3, r24, 0x320
    bl fn_806163E0
    clrlwi r31, r3, 16
    addi r3, r24, 0x320
    bl fn_806163C0
    clrlwi r30, r3, 16
    addi r3, r24, 0x320
    bl fn_80616400
    mr r4, r3
    mr r3, r27
    mr r5, r30
    mr r6, r31
    bl fn_800C0D4C
    addi r11, r1, 0x30
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    psq_l f27, 0x48(r1), 0, 0
    lfd f27, 0x40(r1)
    psq_l f26, 0x38(r1), 0, 0
    lfd f26, 0x30(r1)
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800AD648(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x1
    li r5, 0x4
    stw r0, 0x54(r1)
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    li r3, 0x0
    bl fn_80613960
    li r3, 0x8
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x8
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    lfs f1, lbl_80880DE4
    addi r4, r1, 0xc
    lfs f0, lbl_80880DE0
    li r3, 0x0
    stfs f1, 0x10(r1)
    fmuls f0, f0, f1
    stfs f1, 0x14(r1)
    fctiwz f0, f0
    stfs f1, 0x18(r1)
    stfd f0, 0x20(r1)
    stfd f0, 0x28(r1)
    lwz r7, 0x24(r1)
    stfd f0, 0x30(r1)
    lwz r6, 0x2c(r1)
    stfd f0, 0x38(r1)
    lwz r5, 0x34(r1)
    lwz r0, 0x3c(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0xc(r1)
    bl fn_806175F0
    li r31, 0x0
lbl_fn_800AD648_00000614:
    lwz r0, 0x16c(r30)
    mr r5, r31
    lwz r3, lbl_8087EEE0
    add r4, r31, r0
    slwi r0, r4, 29
    srwi r4, r4, 31
    subf r0, r4, r0
    rotlwi r0, r0, 3
    add r0, r0, r4
    mulli r0, r0, 0x30
    add r4, r30, r0
    addi r4, r4, 0x170
    bl fn_800763FC
    cmpwi r31, 0x0
    ble lbl_fn_800AD648_0000066C
    mr r3, r31
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl fn_806173E0
    b lbl_fn_800AD648_00000684
lbl_fn_800AD648_0000066C:
    mr r3, r31
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
lbl_fn_800AD648_00000684:
    mr r3, r31
    li r4, 0xc
    bl fn_80617650
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    mr r3, r31
    mr r5, r31
    li r4, 0x0
    li r6, 0xff
    bl fn_80617880
    mr r3, r31
    bl fn_80617220
    addi r31, r31, 0x1
    cmpwi r31, 0x8
    blt lbl_fn_800AD648_00000614
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x1
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    bl fn_80614190
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    bl fn_80614CC0
    li r3, 0x1
    li r4, 0x1
    li r5, 0x28
    li r6, 0x0
    bl fn_80614D30
    lwz r3, 0x160(r30)
    li r4, 0x1
    bl fn_80615560
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800AD834(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x1e0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    bl _savegpr_15
    lwz r4, lbl_8087EFA8
    mr r26, r3
    lwz r0, 0x3e0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800AD834_00001450
    bl fn_80614190
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    bl fn_800C0508
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x2
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    lwz r6, lbl_8087EEE0
    li r29, 0x0
    li r3, 0x0
    li r4, 0x4
    lwz r15, 0x3c(r6)
    li r5, 0x1
    lwz r31, 0x40(r6)
    li r6, 0x3
    bl fn_80617D50
    lfs f1, 0xc(r26)
    srwi r0, r15, 31
    lfs f0, lbl_80880DD0
    add r3, r0, r15
    srwi r0, r31, 31
    fcmpo cr0, f1, f0
    srawi r28, r3, 1
    add r0, r0, r31
    srawi r27, r0, 1
    ble lbl_fn_800AD834_00000914
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617220
    lwz r4, lbl_8087EFB4
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    slwi r6, r28, 1
    slwi r7, r27, 1
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    bl fn_80614190
lbl_fn_800AD834_00000914:
    clrlslwi r5, r28, 17, 1
    clrlslwi r6, r27, 17, 1
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r28, 16
    clrlwi r4, r27, 16
    li r5, 0x1
    li r6, 0x1
    bl fn_80614D30
    lwz r3, lbl_8087EF8C
    mr r4, r28
    mr r5, r27
    li r6, 0x1
    bl fn_800A96AC
    stw r3, 0x100(r1)
    addi r30, r26, 0x38
    mr r4, r3
    clrlwi r5, r28, 16
    mr r3, r30
    clrlwi r6, r27, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880DD0
    mr r3, r30
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, 0x100(r1)
    li r4, 0x1
    bl fn_80615560
    lis r3, lbl_80732C08@ha
    lis r11, lbl_80732C1C@ha
    addi r3, r3, lbl_80732C08@l
    lwzu r10, lbl_80732C1C@l(r11)
    lwz r12, 0x10(r3)
    mr r16, r28
    lwz r17, 0x0(r3)
    li r15, 0x0
    and. r0, r28, r12
    lwz r18, 0x4(r3)
    lwz r19, 0x8(r3)
    lwz r20, 0xc(r3)
    lwz r21, 0x10(r3)
    lwz r22, 0x0(r3)
    lwz r23, 0x4(r3)
    lwz r24, 0x8(r3)
    lwz r25, 0xc(r3)
    lwz r5, 0x0(r11)
    lwz r4, 0x4(r11)
    lwz r3, 0x8(r11)
    lwz r0, 0xc(r11)
    lwz r9, 0x4(r11)
    lwz r8, 0x8(r11)
    lwz r7, 0xc(r11)
    lwz r6, 0x10(r11)
    lwz r11, 0x10(r11)
    stw r17, 0x18(r1)
    stw r18, 0x1c(r1)
    stw r19, 0x20(r1)
    stw r20, 0x24(r1)
    stw r21, 0x28(r1)
    stw r22, 0xa4(r1)
    stw r23, 0xa8(r1)
    stw r24, 0xac(r1)
    stw r25, 0xb0(r1)
    stw r12, 0xb4(r1)
    stw r5, 0xb8(r1)
    stw r4, 0xbc(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    stw r11, 0xc8(r1)
    beq lbl_fn_800AD834_00000A60
    mr r15, r11
    sraw r16, r28, r11
lbl_fn_800AD834_00000A60:
    lwz r0, 0xb0(r1)
    and. r0, r16, r0
    beq lbl_fn_800AD834_00000A78
    lwz r0, 0xc4(r1)
    sraw r16, r16, r0
    or r15, r15, r0
lbl_fn_800AD834_00000A78:
    lwz r0, 0xac(r1)
    and. r0, r16, r0
    beq lbl_fn_800AD834_00000A90
    lwz r0, 0xc0(r1)
    sraw r16, r16, r0
    or r15, r15, r0
lbl_fn_800AD834_00000A90:
    lwz r0, 0xa8(r1)
    and. r0, r16, r0
    beq lbl_fn_800AD834_00000AA8
    lwz r0, 0xbc(r1)
    sraw r16, r16, r0
    or r15, r15, r0
lbl_fn_800AD834_00000AA8:
    lwz r0, 0xa4(r1)
    and. r0, r16, r0
    beq lbl_fn_800AD834_00000AC0
    lwz r0, 0xb8(r1)
    sraw r16, r16, r0
    or r15, r15, r0
lbl_fn_800AD834_00000AC0:
    lwz r3, 0x28(r1)
    mr r12, r27
    lwz r11, 0x18(r1)
    and. r0, r27, r3
    lwz r5, 0x1c(r1)
    lwz r4, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x80(r1)
    li r5, 0x0
    stw r11, 0x7c(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
    stw r3, 0x8c(r1)
    stw r10, 0x90(r1)
    stw r9, 0x94(r1)
    stw r8, 0x98(r1)
    stw r7, 0x9c(r1)
    stw r6, 0xa0(r1)
    beq lbl_fn_800AD834_00000B14
    mr r5, r6
    sraw r12, r27, r6
lbl_fn_800AD834_00000B14:
    lwz r0, 0x88(r1)
    and. r0, r12, r0
    beq lbl_fn_800AD834_00000B2C
    lwz r0, 0x9c(r1)
    sraw r12, r12, r0
    or r5, r5, r0
lbl_fn_800AD834_00000B2C:
    lwz r0, 0x84(r1)
    and. r0, r12, r0
    beq lbl_fn_800AD834_00000B44
    lwz r0, 0x98(r1)
    sraw r12, r12, r0
    or r5, r5, r0
lbl_fn_800AD834_00000B44:
    lwz r0, 0x80(r1)
    and. r0, r12, r0
    beq lbl_fn_800AD834_00000B5C
    lwz r0, 0x94(r1)
    sraw r12, r12, r0
    or r5, r5, r0
lbl_fn_800AD834_00000B5C:
    lwz r0, 0x7c(r1)
    and. r0, r12, r0
    beq lbl_fn_800AD834_00000B74
    lwz r0, 0x90(r1)
    sraw r12, r12, r0
    or r5, r5, r0
lbl_fn_800AD834_00000B74:
    li r0, 0x1
    slw r3, r0, r15
    slw r0, r0, r5
    cmpw r3, r0
    bge lbl_fn_800AD834_00000C40
    lwz r3, 0x28(r1)
    lwz r11, 0x18(r1)
    and. r0, r28, r3
    lwz r5, 0x1c(r1)
    lwz r4, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x58(r1)
    li r5, 0x0
    stw r11, 0x54(r1)
    stw r4, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r3, 0x64(r1)
    stw r10, 0x68(r1)
    stw r9, 0x6c(r1)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r6, 0x78(r1)
    beq lbl_fn_800AD834_00000BD8
    mr r5, r6
    sraw r28, r28, r6
lbl_fn_800AD834_00000BD8:
    lwz r0, 0x60(r1)
    and. r0, r28, r0
    beq lbl_fn_800AD834_00000BF0
    lwz r0, 0x74(r1)
    sraw r28, r28, r0
    or r5, r5, r0
lbl_fn_800AD834_00000BF0:
    lwz r0, 0x5c(r1)
    and. r0, r28, r0
    beq lbl_fn_800AD834_00000C08
    lwz r0, 0x70(r1)
    sraw r28, r28, r0
    or r5, r5, r0
lbl_fn_800AD834_00000C08:
    lwz r0, 0x58(r1)
    and. r0, r28, r0
    beq lbl_fn_800AD834_00000C20
    lwz r0, 0x6c(r1)
    sraw r28, r28, r0
    or r5, r5, r0
lbl_fn_800AD834_00000C20:
    lwz r0, 0x54(r1)
    and. r0, r28, r0
    beq lbl_fn_800AD834_00000C34
    lwz r0, 0x68(r1)
    or r5, r5, r0
lbl_fn_800AD834_00000C34:
    li r0, 0x1
    slw r18, r0, r5
    b lbl_fn_800AD834_00000CF4
lbl_fn_800AD834_00000C40:
    lwz r3, 0x28(r1)
    lwz r11, 0x18(r1)
    and. r0, r27, r3
    lwz r5, 0x1c(r1)
    lwz r4, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x30(r1)
    li r5, 0x0
    stw r11, 0x2c(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    beq lbl_fn_800AD834_00000C90
    mr r5, r6
    sraw r27, r27, r6
lbl_fn_800AD834_00000C90:
    lwz r0, 0x38(r1)
    and. r0, r27, r0
    beq lbl_fn_800AD834_00000CA8
    lwz r0, 0x4c(r1)
    sraw r27, r27, r0
    or r5, r5, r0
lbl_fn_800AD834_00000CA8:
    lwz r0, 0x34(r1)
    and. r0, r27, r0
    beq lbl_fn_800AD834_00000CC0
    lwz r0, 0x48(r1)
    sraw r27, r27, r0
    or r5, r5, r0
lbl_fn_800AD834_00000CC0:
    lwz r0, 0x30(r1)
    and. r0, r27, r0
    beq lbl_fn_800AD834_00000CD8
    lwz r0, 0x44(r1)
    sraw r27, r27, r0
    or r5, r5, r0
lbl_fn_800AD834_00000CD8:
    lwz r0, 0x2c(r1)
    and. r0, r27, r0
    beq lbl_fn_800AD834_00000CEC
    lwz r0, 0x40(r1)
    or r5, r5, r0
lbl_fn_800AD834_00000CEC:
    li r0, 0x1
    slw r18, r0, r5
lbl_fn_800AD834_00000CF4:
    mr r19, r18
    mr r17, r30
    addi r16, r1, 0x100
    b lbl_fn_800AD834_00000EEC
lbl_fn_800AD834_00000D04:
    cmpw r18, r19
    mr r15, r19
    addi r16, r16, 0x4
    addi r17, r17, 0x20
    addi r29, r29, 0x1
    bge lbl_fn_800AD834_00000D20
    mr r15, r18
lbl_fn_800AD834_00000D20:
    bl fn_80614190
    bl fn_806167B0
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617220
    lwz r3, lbl_8087EEE0
    slwi r6, r15, 1
    slwi r7, r19, 1
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    bl fn_80614190
    clrlslwi r5, r15, 17, 1
    clrlslwi r6, r19, 17, 1
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r15, 16
    clrlwi r4, r19, 16
    li r5, 0x28
    li r6, 0x1
    bl fn_80614D30
    addi r3, r26, 0x138
    bl fn_806163C0
    clrlwi r0, r3, 16
    cmpw r0, r15
    blt lbl_fn_800AD834_00000E44
    lwz r3, 0x16c(r26)
    li r4, 0x1
    mulli r0, r3, 0x30
    addi r3, r3, 0x1
    stw r3, 0x16c(r26)
    add r3, r26, r0
    lwz r3, 0x198(r3)
    bl fn_80615560
    lwz r3, 0x16c(r26)
    li r0, 0x8
    cmpwi r3, 0x8
    bge lbl_fn_800AD834_00000E20
    mr r0, r3
lbl_fn_800AD834_00000E20:
    lwz r3, 0x16c(r26)
    stw r0, 0x168(r26)
    slwi r0, r3, 29
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 3
    add r0, r0, r3
    stw r0, 0x16c(r26)
    b lbl_fn_800AD834_00000F00
lbl_fn_800AD834_00000E44:
    lwz r3, lbl_8087EF8C
    mr r4, r15
    mr r5, r19
    li r6, 0x1
    bl fn_800A96AC
    stw r3, 0x0(r16)
    li r4, 0x1
    bl fn_80615560
    lwz r4, 0x0(r16)
    mr r3, r17
    clrlwi r5, r15, 16
    clrlwi r6, r19, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880DD0
    mr r3, r17
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EEE0
    mr r4, r17
    li r5, 0x0
    bl fn_800763FC
    srawi r0, r15, 2
    li r18, 0x1
    cmpwi r0, 0x1
    srawi r19, r19, 2
    blt lbl_fn_800AD834_00000ED8
    mr r18, r0
lbl_fn_800AD834_00000ED8:
    cmpwi r19, 0x1
    li r0, 0x1
    blt lbl_fn_800AD834_00000EE8
    mr r0, r19
lbl_fn_800AD834_00000EE8:
    mr r19, r0
lbl_fn_800AD834_00000EEC:
    addi r3, r26, 0x138
    bl fn_806163C0
    clrlwi r0, r3, 16
    cmpw r18, r0
    bge lbl_fn_800AD834_00000D04
lbl_fn_800AD834_00000F00:
    bl fn_80614190
    bl fn_806167B0
    mr r3, r26
    bl fn_800AD648
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EEE0
    addi r4, r26, 0x320
    li r5, 0x0
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    addi r4, r26, 0x138
    li r5, 0x1
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    lfs f1, lbl_80880DD0
    addi r3, r1, 0x150
    lfs f0, lbl_80880DC8
    li r4, 0x1e
    stfs f1, 0x17c(r1)
    li r5, 0x1
    stfs f1, 0x174(r1)
    stfs f1, 0x170(r1)
    stfs f1, 0x16c(r1)
    stfs f1, 0x168(r1)
    stfs f1, 0x160(r1)
    stfs f1, 0x15c(r1)
    stfs f1, 0x158(r1)
    stfs f1, 0x154(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x150(r1)
    stfs f1, 0x164(r1)
    bl fn_80618420
    li r3, 0x1
    bl fn_80617200
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl fn_80617130
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r15, 0x0
    stw r15, 0x8(r1)
    li r3, 0x0
    li r4, 0x0
    stw r15, 0xc(r1)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80616E80
    lfs f1, lbl_80880DD0
    addi r3, r1, 0xe8
    stfs f1, 0xe8(r1)
    addi r4, r1, 0x14
    stfs f1, 0xec(r1)
    stfs f1, 0xf0(r1)
    lfs f0, 0x30(r26)
    stfs f0, 0xf4(r1)
    stfs f1, 0xf8(r1)
    stfs f1, 0xfc(r1)
    stw r15, 0x14(r1)
    bl fn_800ACFC8
    lwz r0, 0x14(r1)
    addi r4, r1, 0xe8
    li r3, 0x1
    extsb r5, r0
    bl fn_80616EF0
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x40
    li r7, 0x1
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    bl fn_80614190
    li r3, 0x0
    li r4, 0x0
    li r5, 0x40
    li r6, 0x1
    bl fn_80614CC0
    li r3, 0x40
    li r4, 0x1
    li r5, 0x28
    li r6, 0x0
    bl fn_80614D30
    lwz r3, 0x318(r26)
    li r4, 0x1
    bl fn_80615560
    bl fn_80614190
    bl fn_806167B0
    li r3, 0x3
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r4, lbl_8087EFB4
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    addi r4, r26, 0x2f0
    li r5, 0x1
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    addi r4, r26, 0x38
    li r5, 0x2
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x2
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lfs f1, lbl_80880DD0
    addi r3, r1, 0x120
    lfs f0, lbl_80880DC8
    li r4, 0x1e
    stfs f1, 0x14c(r1)
    li r5, 0x1
    stfs f1, 0x144(r1)
    stfs f1, 0x140(r1)
    stfs f1, 0x13c(r1)
    stfs f1, 0x138(r1)
    stfs f1, 0x130(r1)
    stfs f1, 0x12c(r1)
    stfs f1, 0x128(r1)
    stfs f1, 0x124(r1)
    stfs f0, 0x148(r1)
    stfs f1, 0x120(r1)
    stfs f1, 0x134(r1)
    bl fn_80618420
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x2
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    bl fn_80617200
    li r3, 0x0
    li r4, 0x2
    li r5, 0x2
    bl fn_80617130
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    stw r15, 0x8(r1)
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    stw r15, 0xc(r1)
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80616E80
    lfs f1, 0x34(r26)
    addi r3, r1, 0xd0
    lfs f0, lbl_80880DD0
    addi r4, r1, 0x10
    stfs f1, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f0, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stw r15, 0x10(r1)
    bl fn_800ACFC8
    lwz r0, 0x10(r1)
    addi r4, r1, 0xd0
    li r3, 0x1
    extsb r5, r0
    bl fn_80616EF0
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    li r3, 0x0
    li r4, 0x4
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    lwz r3, lbl_8087EFA8
    lwz r0, 0x3dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800AD834_00001450
    lfs f30, lbl_80880DE8
    li r15, 0x0
    lfs f31, lbl_80880DF4
    b lbl_fn_800AD834_00001374
lbl_fn_800AD834_00001340:
    lfs f4, lbl_80880DF0
    fmr f1, f30
    lwz r3, lbl_8087EEB0
    mr r5, r30
    fmr f5, f4
    lfs f2, lbl_80880DEC
    lfs f3, lbl_80880DD0
    li r4, -0x1
    li r6, 0x0
    bl fn_8005DF90
    fadds f30, f30, f31
    addi r30, r30, 0x20
    addi r15, r15, 0x1
lbl_fn_800AD834_00001374:
    cmpw r15, r29
    blt lbl_fn_800AD834_00001340
    xoris r0, r31, 0x8000
    lis r15, 0x4330
    lis r16, lbl_80732C30@ha
    stw r0, 0x184(r1)
    lfd f2, lbl_80732C30@l(r16)
    addi r5, r26, 0x138
    stw r15, 0x180(r1)
    li r4, -0x1
    lfs f4, lbl_80880DF0
    li r6, 0x0
    lfd f1, 0x180(r1)
    lfs f0, lbl_80880DF8
    fmr f5, f4
    fsubs f2, f1, f2
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80880DE8
    lfs f3, lbl_80880DD0
    fsubs f2, f2, f0
    bl fn_8005DF90
    xoris r0, r31, 0x8000
    stw r0, 0x18c(r1)
    lfs f4, lbl_80880DF0
    addi r5, r26, 0x320
    stw r15, 0x188(r1)
    li r4, -0x1
    lfd f2, lbl_80732C30@l(r16)
    fmr f5, f4
    lfd f1, 0x188(r1)
    li r6, 0x0
    lfs f0, lbl_80880DF8
    fsubs f2, f1, f2
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80880DFC
    lfs f3, lbl_80880DD0
    fsubs f2, f2, f0
    bl fn_8005DF90
    xoris r0, r31, 0x8000
    stw r0, 0x194(r1)
    lfd f2, lbl_80732C30@l(r16)
    addi r5, r26, 0x2f0
    stw r15, 0x190(r1)
    li r4, -0x1
    lfs f0, lbl_80880DF8
    li r6, 0x0
    lfd f1, 0x190(r1)
    lwz r3, lbl_8087EEB0
    fsubs f2, f1, f2
    lfs f1, lbl_80880E00
    lfs f3, lbl_80880DD0
    lfs f4, lbl_80880DF0
    fsubs f2, f2, f0
    lfs f5, lbl_80880DE8
    bl fn_8005DF90
lbl_fn_800AD834_00001450:
    addi r11, r1, 0x1e0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    bl _restgpr_15
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_800AE568(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0xd0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stfd f27, 0x120(r1)
    psq_st f27, 0x128(r1), 0, 0
    stfd f26, 0x110(r1)
    psq_st f26, 0x118(r1), 0, 0
    stfd f25, 0x100(r1)
    psq_st f25, 0x108(r1), 0, 0
    stfd f24, 0xf0(r1)
    psq_st f24, 0xf8(r1), 0, 0
    stfd f23, 0xe0(r1)
    psq_st f23, 0xe8(r1), 0, 0
    stfd f22, 0xd0(r1)
    psq_st f22, 0xd8(r1), 0, 0
    bl _savegpr_25
    lbz r0, lbl_8087EF98
    lis r8, 0x4330
    fmr f25, f1
    stw r8, 0x98(r1)
    extsb. r0, r0
    fmr f26, f2
    fmr f24, f3
    stw r8, 0xa0(r1)
    fmr f28, f4
    mr r27, r3
    fmr f27, f5
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bne lbl_fn_800AE568_00001548
    lis r25, lbl_807C7470@ha
    addi r3, r25, lbl_807C7470@l
    bl fn_800D5738
    lis r4, fn_800D5808@ha
    lis r5, lbl_807C7460@ha
    addi r3, r25, lbl_807C7470@l
    addi r4, r4, fn_800D5808@l
    addi r5, r5, lbl_807C7460@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF98
lbl_fn_800AE568_00001548:
    lis r26, lbl_807C7470@ha
    li r25, 0x0
    addi r26, r26, lbl_807C7470@l
    lwz r0, 0x28(r26)
    cmpwi r0, 0x0
    bne lbl_fn_800AE568_00001580
    mr r3, r26
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_800AE568_00001584
    addi r3, r26, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_800AE568_00001584
lbl_fn_800AE568_00001580:
    li r25, 0x1
lbl_fn_800AE568_00001584:
    cmpwi r25, 0x0
    bne lbl_fn_800AE568_000015A0
    lis r3, lbl_807C7470@ha
    lis r4, lbl_80732C9C@ha
    addi r3, r3, lbl_807C7470@l
    addi r4, r4, lbl_80732C9C@l
    bl fn_800D594C
lbl_fn_800AE568_000015A0:
    bl fn_806167B0
    xoris r0, r29, 0x8000
    stw r0, 0x9c(r1)
    xoris r0, r30, 0x8000
    lis r26, lbl_80732C78@ha
    stw r0, 0xa4(r1)
    li r3, 0x4
    lfd f3, lbl_80732C78@l(r26)
    lfd f1, 0x98(r1)
    lfd f0, 0xa0(r1)
    fsubs f2, f1, f3
    lfs f1, lbl_80880E0C
    fsubs f0, f0, f3
    fdivs f22, f1, f2
    fdivs f23, f1, f0
    bl fn_806179E0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x3
    bl fn_80617200
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl fn_80617130
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    li r7, 0x1
    bl fn_80617270
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    bl fn_80617130
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x0
    li r7, 0x2
    bl fn_80617270
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    bl fn_80617130
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x3
    li r4, 0x2
    li r5, 0x1
    li r6, 0x0
    li r7, 0x3
    bl fn_80617270
    fmuls f29, f22, f24
    lfs f24, lbl_80880E18
    fmuls f31, f23, f28
    lfd f28, lbl_80732C78@l(r26)
    lfs f22, lbl_80880E0C
    li r25, 0x0
    lfs f23, lbl_80880E14
    li r26, 0x2
    lfs f30, lbl_80880E10
lbl_fn_800AE568_000016BC:
    addi r0, r25, 0x1
    stfs f30, 0x24(r1)
    xoris r0, r0, 0x8000
    li r6, 0x0
    stw r0, 0x9c(r1)
    li r7, 0x1
    stw r0, 0xa4(r1)
    lfd f1, 0x98(r1)
    lfd f0, 0xa0(r1)
    fsubs f1, f1, f28
    stfs f30, 0x28(r1)
    fsubs f0, f0, f28
    stfs f30, 0x2c(r1)
    fmuls f1, f1, f29
    fmuls f0, f0, f31
    stfs f30, 0x34(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x30(r1)
lbl_fn_800AE568_00001704:
    lfs f0, 0x20(r1)
    addi r4, r1, 0x20
    stfs f0, 0xc(r1)
    li r0, 0x0
    mtctr r26
lbl_fn_800AE568_00001718:
    frsp f0, f0
    lfs f1, 0x0(r4)
    fcmpo cr0, f0, f1
    bge lbl_fn_800AE568_00001730
    mr r3, r4
    b lbl_fn_800AE568_00001734
lbl_fn_800AE568_00001730:
    addi r3, r1, 0xc
lbl_fn_800AE568_00001734:
    lfs f0, 0x0(r3)
    addi r5, r4, 0x4
    stfs f0, 0xc(r1)
    lfs f1, 0x4(r4)
    fcmpo cr0, f0, f1
    bge lbl_fn_800AE568_00001754
    mr r3, r5
    b lbl_fn_800AE568_00001758
lbl_fn_800AE568_00001754:
    addi r3, r1, 0xc
lbl_fn_800AE568_00001758:
    lfs f0, 0x0(r3)
    stfs f0, 0xc(r1)
    lfsu f1, 0x4(r5)
    fcmpo cr0, f0, f1
    bge lbl_fn_800AE568_00001774
    mr r3, r5
    b lbl_fn_800AE568_00001778
lbl_fn_800AE568_00001774:
    addi r3, r1, 0xc
lbl_fn_800AE568_00001778:
    lfs f0, 0x0(r3)
    addi r4, r4, 0xc
    stfs f0, 0xc(r1)
    bdnz lbl_fn_800AE568_00001718
    fcmpo cr0, f0, f22
    cror eq, gt, eq
    beq lbl_fn_800AE568_0000179C
    fcmpo cr0, f0, f23
    bge lbl_fn_800AE568_000017F8
lbl_fn_800AE568_0000179C:
    lfs f5, 0x20(r1)
    cmpwi r7, 0x0
    lfs f3, 0x24(r1)
    li r0, 0x1
    fmuls f4, f5, f24
    lfs f1, 0x28(r1)
    fmuls f2, f3, f24
    lfs f5, 0x2c(r1)
    fmuls f0, f1, f24
    stfs f4, 0x20(r1)
    fmuls f4, f5, f24
    lfs f3, 0x30(r1)
    stfs f2, 0x24(r1)
    fmuls f2, f3, f24
    lfs f1, 0x34(r1)
    stfs f0, 0x28(r1)
    fmuls f0, f1, f24
    stfs f4, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    bne lbl_fn_800AE568_000017F4
    addi r6, r6, 0x1
lbl_fn_800AE568_000017F4:
    li r7, 0x0
lbl_fn_800AE568_000017F8:
    cmpwi r0, 0x0
    bne lbl_fn_800AE568_00001704
    addi r3, r25, 0x1
    addi r4, r1, 0x20
    extsb r5, r6
    bl fn_80616EF0
    addi r25, r25, 0x1
    cmpwi r25, 0x3
    blt lbl_fn_800AE568_000016BC
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x21
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    frsp f1, f27
    lfs f0, lbl_80880E10
    lfs f3, lbl_80880E0C
    addi r3, r1, 0x38
    stfs f0, 0x94(r1)
    fmr f2, f1
    stfs f0, 0x8c(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x78(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x6c(r1)
    stfs f3, 0x90(r1)
    stfs f3, 0x7c(r1)
    stfs f3, 0x68(r1)
    stfs f27, 0x10(r1)
    stfs f27, 0x14(r1)
    stfs f3, 0x18(r1)
    bl fn_805F9160
    lfs f2, lbl_80880E18
    addi r3, r1, 0x68
    lfs f0, lbl_80880E10
    li r4, 0x1e
    fnmsubs f1, f25, f27, f2
    stfs f0, 0x64(r1)
    fnmsubs f0, f26, f27, f2
    li r5, 0x1
    stfs f1, 0x44(r1)
    stfs f0, 0x54(r1)
    bl fn_80618420
    addi r3, r1, 0x38
    li r4, 0x21
    li r5, 0x1
    bl fn_80618420
    lwz r3, lbl_8087EEE0
    mr r4, r27
    li r5, 0x0
    bl fn_800763FC
    lis r4, lbl_807C7470@ha
    lwz r3, lbl_8087EEE0
    addi r4, r4, lbl_807C7470@l
    li r5, 0x1
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    lwz r0, lbl_80880E08
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    li r3, 0x0
    bl fn_806175F0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    bl fn_80617220
    li r3, 0x1
    li r4, 0xc
    bl fn_80617650
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x2
    li r4, 0xc
    bl fn_80617650
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x2
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_80617460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x3
    li r4, 0xc
    bl fn_80617650
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x3
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_80617460
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x4
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EEE0
    mr r6, r29
    mr r7, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    clrlwi r5, r29, 16
    clrlwi r6, r30, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    mr r5, r31
    clrlwi r3, r29, 16
    clrlwi r4, r30, 16
    li r6, 0x0
    bl fn_80614D30
    mr r3, r28
    li r4, 0x0
    bl fn_80615560
    bl fn_80614190
    bl fn_806167B0
    li r3, 0x1
    bl fn_80617220
    li r3, 0x2
    bl fn_80617220
    li r3, 0x3
    bl fn_80617220
    addi r11, r1, 0xd0
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    psq_l f27, 0x128(r1), 0, 0
    lfd f27, 0x120(r1)
    psq_l f26, 0x118(r1), 0, 0
    lfd f26, 0x110(r1)
    psq_l f25, 0x108(r1), 0, 0
    lfd f25, 0x100(r1)
    psq_l f24, 0xf8(r1), 0, 0
    lfd f24, 0xf0(r1)
    psq_l f23, 0xe8(r1), 0, 0
    lfd f23, 0xe0(r1)
    psq_l f22, 0xd8(r1), 0, 0
    lfd f22, 0xd0(r1)
    bl _restgpr_25
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_800AECD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r29, 0x28(r3)
    bl fn_806163E0
    clrlwi r30, r3, 16
    mr r3, r31
    bl fn_806163C0
    clrlwi r6, r3, 16
    li r9, 0x0
    li r8, 0x0
    li r3, 0x0
    lis r5, 0x8000
    b lbl_fn_800AECD4_00001CD8
lbl_fn_800AECD4_00001C2C:
    cmpwi cr1, r6, 0x0
    li r10, 0x0
    ble cr1, lbl_fn_800AECD4_00001CD0
    cmpwi r6, 0x8
    subi r4, r6, 0x8
    ble lbl_fn_800AECD4_00001CA8
    li r7, 0x0
    blt cr1, lbl_fn_800AECD4_00001C5C
    subi r0, r5, 0x2
    cmpw r6, r0
    bgt lbl_fn_800AECD4_00001C5C
    li r7, 0x1
lbl_fn_800AECD4_00001C5C:
    cmpwi r7, 0x0
    beq lbl_fn_800AECD4_00001CA8
    addi r0, r4, 0x7
    add r7, r29, r8
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_800AECD4_00001CA8
lbl_fn_800AECD4_00001C7C:
    stb r3, 0x0(r7)
    addi r10, r10, 0x8
    stb r3, 0x1(r7)
    stb r3, 0x2(r7)
    stb r3, 0x3(r7)
    stb r3, 0x4(r7)
    stb r3, 0x5(r7)
    stb r3, 0x6(r7)
    stb r3, 0x7(r7)
    addi r7, r7, 0x8
    bdnz lbl_fn_800AECD4_00001C7C
lbl_fn_800AECD4_00001CA8:
    add r4, r29, r8
    subf r0, r10, r6
    add r4, r10, r4
    mtctr r0
    cmpw r10, r6
    bge lbl_fn_800AECD4_00001CD0
lbl_fn_800AECD4_00001CC0:
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    addi r10, r10, 0x1
    bdnz lbl_fn_800AECD4_00001CC0
lbl_fn_800AECD4_00001CD0:
    add r8, r8, r6
    addi r9, r9, 0x1
lbl_fn_800AECD4_00001CD8:
    cmpw r9, r30
    blt lbl_fn_800AECD4_00001C2C
    mullw r0, r6, r30
    li r5, 0xff
    mr r3, r31
    add r4, r0, r29
    stb r5, -0x1(r4)
    bl fn_806163E0
    clrlwi r30, r3, 16
    mr r3, r31
    bl fn_806163C0
    clrlwi r29, r3, 16
    mr r3, r31
    bl fn_80616400
    mr r4, r3
    lwz r3, 0x28(r31)
    mr r5, r29
    mr r6, r30
    bl fn_800C0D4C
    mr r3, r31
    bl fn_80616400
    mr r29, r3
    mr r3, r31
    bl fn_806163E0
    clrlwi r30, r3, 16
    mr r3, r31
    bl fn_806163C0
    lwz r4, 0x28(r31)
    clrlwi r5, r3, 16
    mr r3, r31
    mr r6, r30
    mr r7, r29
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880E10
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800AEE9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80778E38@ha
    lfs f0, lbl_80880E10
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80778E38@l
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    addi r3, r3, 0x38
    bl fn_800D5738
    lfs f1, lbl_80880E10
    lis r4, lbl_80732C9C@ha
    lfs f0, lbl_80880E18
    addi r4, r4, lbl_80732C9C@l
    addi r8, r4, 0x16
    stfs f1, 0x68(r31)
    addi r3, r31, 0x38
    li r4, 0x100
    stfs f0, 0x6c(r31)
    li r5, 0x100
    li r6, 0x1
    li r7, 0x1
    stfs f0, 0x70(r31)
    stfs f1, 0x74(r31)
    bl fn_800D5B58
    lfs f1, 0x68(r31)
    addi r3, r31, 0x38
    bl fn_800AECD4
    lwz r4, lbl_8087EFA8
    mr r3, r31
    addi r0, r4, 0x264
    stw r0, 0x4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800AEF4C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800AEF4C_00001E70
    lwz r3, 0x0(r3)
    blr
lbl_fn_800AEF4C_00001E70:
    li r3, 0x0
    blr
}
