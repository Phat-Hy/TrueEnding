#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_8004FF58(void);
extern void fn_8006FEBC(void);
extern void fn_80072914(void);
extern void fn_800761A8(void);
extern void fn_800763C0(void);
extern void fn_80076760(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80088AF4(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800BDB40(void);
extern void fn_800BDB58(void);
extern void fn_800BFAC8(void);
extern void fn_800C169C(void);
extern void fn_800C2448(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800D69A8(void);
extern void fn_800D6A84(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614790(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80617340(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80618350(void);
extern void fn_80618400(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80731838[];
extern u8 lbl_80731850[];
extern u8 lbl_80777D08[];
extern u8 lbl_807C6C08[];
extern u8 lbl_807C6DB4[];

/* Small data declarations */
extern u32 lbl_8087D740;
extern u32 lbl_8087D744;
extern u32 lbl_8087D748;
extern u32 lbl_8087D74C;
extern u32 lbl_8087D750;
extern u32 lbl_8087D754;
extern u32 lbl_8087D758;
extern u32 lbl_8087D75C;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880AD0;
extern u32 lbl_80880AD4;
extern u32 lbl_80880AD8;
extern u32 lbl_80880ADC;
extern u32 lbl_80880AE0;
extern u32 lbl_80880AE4;
extern u32 lbl_80880AE8;
extern u32 lbl_80880AEC;
extern u32 lbl_80880AF0;
extern u32 lbl_80880AF4;
extern u32 lbl_80880AF8;

/* Function declarations */
void fn_80077058(void);
void fn_8007708C(void);
void fn_80077160(void);
void fn_80077418(void);
void fn_8007741C(void);
void fn_800774D4(void);
void fn_80077534(void);
void fn_80077548(void);
void fn_8007786C(void);
void fn_80078938(void);

asm void fn_80077058(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C6C08@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807C6C08@l
    bl fn_800D69A8
    lis r3, lbl_807C6DB4@ha
    addi r3, r3, lbl_807C6DB4@l
    bl fn_800D6A84
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8007708C(void)
{
    nofralloc
    li r0, 0x2
    mr r6, r4
    li r8, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8007708C_00000048:
    lbz r0, 0x0(r4)
    slw r7, r3, r8
    and r0, r7, r0
    cmpw r7, r0
    bne lbl_fn_8007708C_00000070
    lhz r0, 0xa(r6)
    cmplw r5, r0
    bne lbl_fn_8007708C_00000070
    li r3, 0x1
    blr
lbl_fn_8007708C_00000070:
    addi r8, r8, 0x1
    lbz r0, 0x0(r4)
    slw r7, r3, r8
    and r0, r7, r0
    cmpw r7, r0
    bne lbl_fn_8007708C_0000009C
    lhz r0, 0xc(r6)
    cmplw r5, r0
    bne lbl_fn_8007708C_0000009C
    li r3, 0x1
    blr
lbl_fn_8007708C_0000009C:
    addi r8, r8, 0x1
    lbz r0, 0x0(r4)
    slw r7, r3, r8
    and r0, r7, r0
    cmpw r7, r0
    bne lbl_fn_8007708C_000000C8
    lhz r0, 0xe(r6)
    cmplw r5, r0
    bne lbl_fn_8007708C_000000C8
    li r3, 0x1
    blr
lbl_fn_8007708C_000000C8:
    addi r8, r8, 0x1
    lbz r0, 0x0(r4)
    slw r7, r3, r8
    and r0, r7, r0
    cmpw r7, r0
    bne lbl_fn_8007708C_000000F4
    lhz r0, 0x10(r6)
    cmplw r5, r0
    bne lbl_fn_8007708C_000000F4
    li r3, 0x1
    blr
lbl_fn_8007708C_000000F4:
    addi r6, r6, 0x8
    addi r8, r8, 0x1
    bdnz lbl_fn_8007708C_00000048
    li r3, 0x0
    blr
}

asm void fn_80077160(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x240
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stfd f30, 0x240(r1)
    psq_st f30, 0x248(r1), 0, 0
    bl _savegpr_24
    fmr f0, f1
    li r29, 0x0
    psq_l f1, 0x0(r6), 0, 0
    lis r7, lbl_80777D08@ha
    lfs f2, 0x8(r6)
    addi r7, r7, lbl_80777D08@l
    stw r7, 0x0(r3)
    lis r7, fn_800D5738@ha
    lis r6, fn_800D5808@ha
    mr r24, r5
    stw r4, 0x4(r3)
    addi r4, r7, fn_800D5738@l
    addi r5, r6, fn_800D5808@l
    mr r31, r3
    psq_st f1, 0x8(r3), 0, 0
    li r6, 0x30
    li r7, 0x6
    stfs f2, 0x10(r3)
    stfs f0, 0x14(r3)
    stw r29, 0x18(r3)
    stw r29, 0x1c(r3)
    addi r3, r3, 0x20
    bl fn_806958E0
    stw r29, 0x140(r31)
    li r28, 0x0
    li r27, 0x0
    lis r29, lbl_80731850@ha
lbl_fn_80077160_00000198:
    addi r3, r1, 0x118
    addi r4, r29, lbl_80731850@l
    addi r5, r28, 0x1
    crclr 6
    bl sprintf
    add r3, r31, r27
    addi r4, r1, 0x118
    addi r3, r3, 0x20
    bl fn_800D5908
    addi r28, r28, 0x1
    addi r27, r27, 0x30
    cmpwi r28, 0x6
    blt lbl_fn_80077160_00000198
    lwz r3, 0x1c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80077160_000001E4
    beq lbl_fn_80077160_000001E4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80077160_000001E4:
    cmpwi r24, 0x0
    stw r24, 0x18(r31)
    beq lbl_fn_80077160_0000022C
    mulli r3, r24, 0x1c
    li r4, 0x6
    la r5, lbl_8087D75C
    la r6, lbl_8087D758
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80077418@ha
    mr r7, r24
    addi r4, r4, fn_80077418@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    stw r3, 0x1c(r31)
    b lbl_fn_80077160_00000234
lbl_fn_80077160_0000022C:
    li r0, 0x0
    stw r0, 0x1c(r31)
lbl_fn_80077160_00000234:
    lwz r0, 0x140(r31)
    lis r4, lbl_80731850@ha
    lwz r3, lbl_8087EFA8
    addi r4, r4, lbl_80731850@l
    cmpwi r0, 0x0
    lwz r3, 0x4c(r3)
    addi r4, r4, 0x20
    bne lbl_fn_80077160_00000274
    cmpwi r3, 0x0
    beq lbl_fn_80077160_00000274
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80077160_00000274
    bl fn_8008937C
    stw r3, 0x140(r31)
    b lbl_fn_80077160_00000278
lbl_fn_80077160_00000274:
    li r3, 0x0
lbl_fn_80077160_00000278:
    lis r30, lbl_80731850@ha
    lfs f30, lbl_80880AD0
    lfs f31, lbl_80880AD4
    mr r26, r3
    addi r30, r30, lbl_80731850@l
    li r25, 0x0
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80077160_00000388
lbl_fn_80077160_0000029C:
    lwz r0, 0x1c(r31)
    mr r5, r25
    stfs f31, 0x8(r1)
    addi r3, r1, 0x18
    add r28, r0, r27
    addi r4, r30, 0x2a
    stfs f30, 0x8(r28)
    stfs f30, 0x4(r28)
    stwx r29, r27, r0
    stfs f31, 0xc(r28)
    stfs f31, 0x10(r28)
    stfs f31, 0x14(r28)
    stfs f31, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r28)
    crclr 6
    bl sprintf
    mr r3, r26
    addi r4, r1, 0x18
    bl fn_8008937C
    mr r24, r3
    mr r5, r28
    addi r4, r30, 0x33
    li r6, 0x0
    li r7, 0x6
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80880AD0
    mr r3, r24
    lfs f2, lbl_80880AD8
    addi r4, r30, 0x38
    lfs f3, lbl_80880ADC
    addi r5, r28, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880AE0
    mr r3, r24
    lfs f2, lbl_80880AE4
    addi r4, r30, 0x3d
    lfs f3, lbl_80880AE8
    addi r5, r28, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880AD0
    mr r3, r24
    lfs f2, lbl_80880AD4
    addi r4, r30, 0x46
    lfs f3, lbl_80880AE8
    addi r5, r28, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    addi r27, r27, 0x1c
    addi r25, r25, 0x1
lbl_fn_80077160_00000388:
    lwz r0, 0x18(r31)
    cmplw r25, r0
    blt lbl_fn_80077160_0000029C
    psq_l f31, 0x258(r1), 0, 0
    mr r3, r31
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    addi r11, r1, 0x240
    bl _restgpr_24
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_80077418(void)
{
    nofralloc
    blr
}

asm void fn_8007741C(void)
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
    beq lbl_fn_8007741C_00000460
    addic. r0, r3, 0x140
    beq lbl_fn_8007741C_0000040C
    lwz r4, 0x140(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8007741C_0000040C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8007741C_0000040C
    bl fn_800897D8
lbl_fn_8007741C_0000040C:
    lis r4, fn_800D5808@ha
    addi r3, r30, 0x20
    addi r4, r4, fn_800D5808@l
    li r5, 0x30
    li r6, 0x6
    bl fn_806959D8
    addic. r0, r30, 0x18
    beq lbl_fn_8007741C_00000450
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007741C_00000444
    beq lbl_fn_8007741C_00000444
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8007741C_00000444:
    li r0, 0x0
    stw r0, 0x1c(r30)
    stw r0, 0x18(r30)
lbl_fn_8007741C_00000450:
    cmpwi r31, 0x0
    ble lbl_fn_8007741C_00000460
    mr r3, r30
    bl dtor_80084684
lbl_fn_8007741C_00000460:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800774D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x20
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
lbl_fn_800774D4_000004A0:
    mr r3, r31
    bl fn_800D59B8
    addi r29, r29, 0x1
    or r30, r30, r3
    cmpwi r29, 0x6
    addi r31, r31, 0x30
    blt lbl_fn_800774D4_000004A0
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80077534(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087EFB4
    lfs f1, lbl_80880AD0
    li r5, 0xc
    b fn_800BDB58
}

asm void fn_80077548(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0xb8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_800BDB40
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80077548_000005B8
    lwz r3, 0x2fc(r31)
    li r4, 0x0
    bl fn_800C2448
    lfs f0, 0x1c(r3)
    addi r4, r1, 0x44
    lfs f3, 0x18(r3)
    fneg f9, f0
    lfs f0, 0x14(r3)
    fneg f10, f3
    lfs f7, lbl_80880AEC
    fneg f11, f0
    lfs f3, 0x110(r31)
    frsp f6, f10
    lfs f0, 0x10c(r31)
    frsp f5, f11
    lfs f4, 0x114(r31)
    frsp f8, f9
    stfs f11, 0x60(r1)
    fmuls f6, f6, f7
    stfs f10, 0x64(r1)
    fmuls f5, f5, f7
    fmuls f8, f8, f7
    stfs f9, 0x68(r1)
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f5, 0x38(r1)
    fadds f2, f4, f8
    stfs f3, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x8(r30), 0, 0
    stfs f2, 0x10(r30)
lbl_fn_80077548_000005B8:
    psq_l f1, 0x8(r30), 0, 0
    addi r4, r1, 0x50
    lfs f2, 0x10(r30)
    addi r3, r31, 0x204
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x14(r30)
    stfs f0, 0x5c(r1)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_80077548_000007F4
    lfs f5, 0x5c(r1)
    addi r31, r1, 0x88
    lfs f4, 0x58(r1)
    addi r5, r1, 0x2c
    lfs f3, 0x54(r1)
    addi r7, r1, 0x14
    fsubs f6, f4, f5
    lfs f0, 0x50(r1)
    fsubs f7, f3, f5
    addi r6, r1, 0x94
    fsubs f8, f0, f5
    stfs f5, 0x20(r1)
    fadds f4, f4, f5
    stfs f8, 0x2c(r1)
    fadds f3, f3, f5
    lwz r3, lbl_8087EFB4
    fadds f0, f0, f5
    stfs f7, 0x30(r1)
    fmr f2, f6
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x14(r1)
    mr r4, r31
    stfs f2, 0x90(r1)
    fmr f2, f4
    stfs f3, 0x18(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f5, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f6, 0x34(r1)
    stfs f5, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f4, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x9c(r1)
    bl fn_800C169C
    lfs f0, lbl_80880AD4
    fmr f31, f1
    fcmpu cr0, f0, f1
    beq lbl_fn_80077548_000007F4
    mr r4, r31
    addi r3, r1, 0x70
    bl fn_8006FEBC
    lwz r6, lbl_8087EEE0
    lis r3, 0x4330
    lfs f5, 0x70(r1)
    lis r5, lbl_80731838@ha
    lwz r4, 0x3c(r6)
    lfs f4, 0x7c(r1)
    lwz r0, 0x40(r6)
    xoris r4, r4, 0x8000
    lfs f3, 0x74(r1)
    fsubs f5, f5, f4
    lfs f0, 0x80(r1)
    xoris r0, r0, 0x8000
    stw r4, 0xa4(r1)
    fsubs f4, f3, f0
    lfd f3, lbl_80731838@l(r5)
    stw r3, 0xa0(r1)
    lfs f6, 0x70(r1)
    fmuls f8, f5, f4
    lfd f0, 0xa0(r1)
    lfs f4, lbl_8087D740
    stw r0, 0xac(r1)
    fsubs f5, f0, f3
    fcmpo cr0, f6, f4
    stw r3, 0xa8(r1)
    lfd f0, 0xa8(r1)
    fsubs f9, f0, f3
    bge lbl_fn_80077548_00000704
    b lbl_fn_80077548_00000714
lbl_fn_80077548_00000704:
    fcmpo cr0, f6, f5
    ble lbl_fn_80077548_00000710
    fmr f6, f5
lbl_fn_80077548_00000710:
    fmr f4, f6
lbl_fn_80077548_00000714:
    lfs f0, 0x74(r1)
    lfs f3, lbl_8087D744
    stfs f4, 0x70(r1)
    fcmpo cr0, f0, f3
    bge lbl_fn_80077548_0000072C
    b lbl_fn_80077548_0000073C
lbl_fn_80077548_0000072C:
    fcmpo cr0, f0, f9
    ble lbl_fn_80077548_00000738
    fmr f0, f9
lbl_fn_80077548_00000738:
    fmr f3, f0
lbl_fn_80077548_0000073C:
    lfs f0, 0x7c(r1)
    lfs f4, lbl_8087D748
    stfs f3, 0x74(r1)
    fcmpo cr0, f0, f4
    bge lbl_fn_80077548_00000754
    b lbl_fn_80077548_00000768
lbl_fn_80077548_00000754:
    fcmpo cr0, f0, f5
    ble lbl_fn_80077548_00000760
    b lbl_fn_80077548_00000764
lbl_fn_80077548_00000760:
    fmr f5, f0
lbl_fn_80077548_00000764:
    fmr f4, f5
lbl_fn_80077548_00000768:
    lfs f0, 0x80(r1)
    lfs f7, lbl_8087D74C
    stfs f4, 0x7c(r1)
    fcmpo cr0, f0, f7
    bge lbl_fn_80077548_00000780
    b lbl_fn_80077548_00000794
lbl_fn_80077548_00000780:
    fcmpo cr0, f0, f9
    ble lbl_fn_80077548_0000078C
    b lbl_fn_80077548_00000790
lbl_fn_80077548_0000078C:
    fmr f9, f0
lbl_fn_80077548_00000790:
    fmr f7, f9
lbl_fn_80077548_00000794:
    frsp f0, f7
    lfs f3, 0x74(r1)
    lfs f6, 0x70(r1)
    lfs f5, 0x7c(r1)
    fsubs f4, f3, f0
    lfs f0, lbl_80880AD4
    fsubs f5, f6, f5
    lfs f1, lbl_8087D750
    fsubs f3, f0, f31
    stfs f7, 0x80(r1)
    fmuls f4, f5, f4
    fdivs f4, f4, f8
    fsubs f0, f0, f4
    fsubs f0, f3, f0
    fcmpo cr0, f0, f1
    bge lbl_fn_80077548_000007D8
    b lbl_fn_80077548_000007EC
lbl_fn_80077548_000007D8:
    lfs f1, lbl_8087D754
    fcmpo cr0, f0, f1
    ble lbl_fn_80077548_000007E8
    b lbl_fn_80077548_000007EC
lbl_fn_80077548_000007E8:
    fmr f1, f0
lbl_fn_80077548_000007EC:
    mr r3, r30
    bl fn_80078938
lbl_fn_80077548_000007F4:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8007786C(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x210
    bl _savegpr_23
    lfs f0, lbl_80880AD4
    mr r28, r3
    lfs f4, 0x0(r6)
    mr r29, r4
    lfs f3, lbl_80880AD0
    mr r30, r5
    fcmpo cr0, f4, f0
    stfs f3, 0x50(r1)
    mr r31, r6
    addi r24, r1, 0x50
    stfs f0, 0x54(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000864
    li r27, 0xff
    b lbl_fn_8007786C_0000088C
lbl_fn_8007786C_00000864:
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000878
    li r3, 0x0
    b lbl_fn_8007786C_00000888
lbl_fn_8007786C_00000878:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000888:
    mr r27, r3
lbl_fn_8007786C_0000088C:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_000008A8
    li r26, 0xff
    b lbl_fn_8007786C_000008D4
lbl_fn_8007786C_000008A8:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_000008C0
    li r3, 0x0
    b lbl_fn_8007786C_000008D0
lbl_fn_8007786C_000008C0:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_000008D0:
    mr r26, r3
lbl_fn_8007786C_000008D4:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_000008F0
    li r25, 0xff
    b lbl_fn_8007786C_0000091C
lbl_fn_8007786C_000008F0:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000908
    li r3, 0x0
    b lbl_fn_8007786C_00000918
lbl_fn_8007786C_00000908:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000918:
    mr r25, r3
lbl_fn_8007786C_0000091C:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000938
    li r3, 0xff
    b lbl_fn_8007786C_00000960
lbl_fn_8007786C_00000938:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000950
    li r3, 0x0
    b lbl_fn_8007786C_00000960
lbl_fn_8007786C_00000950:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000960:
    lfs f4, 0x0(r31)
    slwi r4, r26, 8
    lfs f0, lbl_80880AD4
    slwi r3, r3, 24
    slwi r0, r27, 16
    addi r5, r1, 0xf8
    lfs f3, lbl_80880AD0
    fcmpo cr0, f4, f0
    psq_l f1, 0x0(r28), 0, 0
    or r4, r25, r4
    psq_st f1, 0x0(r5), 0, 0
    or r0, r3, r0
    psq_l f1, 0x0(r24), 0, 0
    lfs f2, 0x8(r28)
    or r0, r4, r0
    stfs f2, 0x100(r1)
    addi r24, r1, 0x48
    stw r0, 0x104(r1)
    psq_st f1, 0x10(r5), 0, 0
    stfs f3, 0x48(r1)
    stfs f3, 0x4c(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_000009C4
    li r27, 0xff
    b lbl_fn_8007786C_000009EC
lbl_fn_8007786C_000009C4:
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8007786C_000009D8
    li r3, 0x0
    b lbl_fn_8007786C_000009E8
lbl_fn_8007786C_000009D8:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_000009E8:
    mr r27, r3
lbl_fn_8007786C_000009EC:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000A08
    li r26, 0xff
    b lbl_fn_8007786C_00000A34
lbl_fn_8007786C_00000A08:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000A20
    li r3, 0x0
    b lbl_fn_8007786C_00000A30
lbl_fn_8007786C_00000A20:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000A30:
    mr r26, r3
lbl_fn_8007786C_00000A34:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000A50
    li r25, 0xff
    b lbl_fn_8007786C_00000A7C
lbl_fn_8007786C_00000A50:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000A68
    li r3, 0x0
    b lbl_fn_8007786C_00000A78
lbl_fn_8007786C_00000A68:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000A78:
    mr r25, r3
lbl_fn_8007786C_00000A7C:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000A98
    li r3, 0xff
    b lbl_fn_8007786C_00000AC0
lbl_fn_8007786C_00000A98:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000AB0
    li r3, 0x0
    b lbl_fn_8007786C_00000AC0
lbl_fn_8007786C_00000AB0:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000AC0:
    lfs f5, 0x4(r28)
    slwi r4, r26, 8
    lfs f3, 0x4(r29)
    addi r6, r1, 0xe8
    lfs f4, 0x0(r28)
    slwi r3, r3, 24
    fadds f7, f5, f3
    lfs f0, 0x0(r29)
    lfs f3, lbl_80880AD4
    slwi r0, r27, 16
    fadds f8, f4, f0
    lfs f4, 0x0(r31)
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f3
    lfs f6, 0x8(r28)
    addi r5, r1, 0x110
    lfs f5, 0x8(r29)
    or r4, r25, r4
    or r0, r3, r0
    fadds f2, f6, f5
    or r0, r4, r0
    stfs f8, 0xe8(r1)
    stfs f7, 0xec(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    addi r24, r1, 0x40
    stfs f2, 0xf0(r1)
    stfs f2, 0x118(r1)
    stw r0, 0x11c(r1)
    psq_st f1, 0x10(r5), 0, 0
    stfs f3, 0x40(r1)
    stfs f0, 0x44(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000B54
    li r27, 0xff
    b lbl_fn_8007786C_00000B7C
lbl_fn_8007786C_00000B54:
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000B68
    li r3, 0x0
    b lbl_fn_8007786C_00000B78
lbl_fn_8007786C_00000B68:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000B78:
    mr r27, r3
lbl_fn_8007786C_00000B7C:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000B98
    li r26, 0xff
    b lbl_fn_8007786C_00000BC4
lbl_fn_8007786C_00000B98:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000BB0
    li r3, 0x0
    b lbl_fn_8007786C_00000BC0
lbl_fn_8007786C_00000BB0:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000BC0:
    mr r26, r3
lbl_fn_8007786C_00000BC4:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000BE0
    li r25, 0xff
    b lbl_fn_8007786C_00000C0C
lbl_fn_8007786C_00000BE0:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000BF8
    li r3, 0x0
    b lbl_fn_8007786C_00000C08
lbl_fn_8007786C_00000BF8:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000C08:
    mr r25, r3
lbl_fn_8007786C_00000C0C:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000C28
    li r3, 0xff
    b lbl_fn_8007786C_00000C50
lbl_fn_8007786C_00000C28:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000C40
    li r3, 0x0
    b lbl_fn_8007786C_00000C50
lbl_fn_8007786C_00000C40:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000C50:
    lfs f5, 0x4(r28)
    slwi r4, r26, 8
    lfs f0, 0x4(r29)
    addi r6, r1, 0xdc
    lfs f4, 0x0(r28)
    slwi r3, r3, 24
    fadds f7, f5, f0
    lfs f3, 0x0(r29)
    lfs f0, 0x4(r30)
    slwi r0, r27, 16
    fadds f8, f4, f3
    lfs f3, 0x0(r30)
    fadds f9, f7, f0
    lfs f0, lbl_80880AD4
    fadds f10, f8, f3
    lfs f4, 0x0(r31)
    lfs f6, 0x8(r28)
    addi r5, r1, 0x128
    lfs f5, 0x8(r29)
    fcmpo cr0, f4, f0
    lfs f3, 0x8(r30)
    or r4, r25, r4
    fadds f5, f6, f5
    or r0, r3, r0
    or r0, r4, r0
    stfs f10, 0xdc(r1)
    addi r23, r1, 0x38
    fadds f2, f5, f3
    stfs f9, 0xe0(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    stfs f8, 0xd0(r1)
    stfs f7, 0xd4(r1)
    stfs f5, 0xd8(r1)
    stfs f2, 0xe4(r1)
    stfs f2, 0x130(r1)
    stw r0, 0x134(r1)
    psq_st f1, 0x10(r5), 0, 0
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000D04
    li r27, 0xff
    b lbl_fn_8007786C_00000D30
lbl_fn_8007786C_00000D04:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000D1C
    li r3, 0x0
    b lbl_fn_8007786C_00000D2C
lbl_fn_8007786C_00000D1C:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000D2C:
    mr r27, r3
lbl_fn_8007786C_00000D30:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000D4C
    li r26, 0xff
    b lbl_fn_8007786C_00000D78
lbl_fn_8007786C_00000D4C:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000D64
    li r3, 0x0
    b lbl_fn_8007786C_00000D74
lbl_fn_8007786C_00000D64:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000D74:
    mr r26, r3
lbl_fn_8007786C_00000D78:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000D94
    li r25, 0xff
    b lbl_fn_8007786C_00000DC0
lbl_fn_8007786C_00000D94:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000DAC
    li r3, 0x0
    b lbl_fn_8007786C_00000DBC
lbl_fn_8007786C_00000DAC:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000DBC:
    mr r25, r3
lbl_fn_8007786C_00000DC0:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000DDC
    li r3, 0xff
    b lbl_fn_8007786C_00000E04
lbl_fn_8007786C_00000DDC:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000DF4
    li r3, 0x0
    b lbl_fn_8007786C_00000E04
lbl_fn_8007786C_00000DF4:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000E04:
    lfs f5, 0x4(r28)
    slwi r4, r26, 8
    lfs f3, 0x4(r30)
    addi r6, r1, 0xc4
    lfs f4, 0x0(r28)
    slwi r3, r3, 24
    fadds f7, f5, f3
    lfs f0, 0x0(r30)
    lfs f3, lbl_80880AD4
    slwi r0, r27, 16
    fadds f8, f4, f0
    lfs f4, 0x0(r31)
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f3
    lfs f6, 0x8(r28)
    addi r5, r1, 0x140
    lfs f5, 0x8(r30)
    or r4, r25, r4
    or r0, r3, r0
    fadds f2, f6, f5
    or r0, r4, r0
    stfs f8, 0xc4(r1)
    stfs f7, 0xc8(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    addi r23, r1, 0x30
    stfs f2, 0xcc(r1)
    stfs f2, 0x148(r1)
    stw r0, 0x14c(r1)
    psq_st f1, 0x10(r5), 0, 0
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000E98
    li r27, 0xff
    b lbl_fn_8007786C_00000EC0
lbl_fn_8007786C_00000E98:
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000EAC
    li r3, 0x0
    b lbl_fn_8007786C_00000EBC
lbl_fn_8007786C_00000EAC:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000EBC:
    mr r27, r3
lbl_fn_8007786C_00000EC0:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000EDC
    li r26, 0xff
    b lbl_fn_8007786C_00000F08
lbl_fn_8007786C_00000EDC:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000EF4
    li r3, 0x0
    b lbl_fn_8007786C_00000F04
lbl_fn_8007786C_00000EF4:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000F04:
    mr r26, r3
lbl_fn_8007786C_00000F08:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000F24
    li r25, 0xff
    b lbl_fn_8007786C_00000F50
lbl_fn_8007786C_00000F24:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000F3C
    li r3, 0x0
    b lbl_fn_8007786C_00000F4C
lbl_fn_8007786C_00000F3C:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000F4C:
    mr r25, r3
lbl_fn_8007786C_00000F50:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00000F6C
    li r3, 0xff
    b lbl_fn_8007786C_00000F94
lbl_fn_8007786C_00000F6C:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00000F84
    li r3, 0x0
    b lbl_fn_8007786C_00000F94
lbl_fn_8007786C_00000F84:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00000F94:
    lfs f5, 0x4(r28)
    slwi r4, r26, 8
    lfs f3, 0x4(r29)
    addi r6, r1, 0xb8
    lfs f4, 0x0(r28)
    slwi r3, r3, 24
    fsubs f6, f5, f3
    lfs f0, 0x0(r29)
    lfs f3, 0x4(r30)
    slwi r0, r27, 16
    fsubs f7, f4, f0
    lfs f4, 0x8(r28)
    fadds f8, f6, f3
    lfs f3, 0x8(r29)
    lfs f0, 0x0(r30)
    addi r5, r1, 0x158
    fsubs f5, f4, f3
    lfs f3, lbl_80880AD0
    fadds f9, f7, f0
    lfs f0, 0x8(r30)
    stfs f8, 0xbc(r1)
    or r4, r25, r4
    fadds f2, f5, f0
    or r0, r3, r0
    stfs f9, 0xb8(r1)
    or r0, r4, r0
    lfs f4, 0x0(r31)
    lfs f0, lbl_80880AD4
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    psq_l f1, 0x0(r23), 0, 0
    addi r23, r1, 0x28
    stfs f7, 0xac(r1)
    stfs f6, 0xb0(r1)
    stfs f5, 0xb4(r1)
    stfs f2, 0xc0(r1)
    stfs f2, 0x160(r1)
    stw r0, 0x164(r1)
    psq_st f1, 0x10(r5), 0, 0
    stfs f3, 0x28(r1)
    stfs f3, 0x2c(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_0000104C
    li r27, 0xff
    b lbl_fn_8007786C_00001074
lbl_fn_8007786C_0000104C:
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8007786C_00001060
    li r3, 0x0
    b lbl_fn_8007786C_00001070
lbl_fn_8007786C_00001060:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001070:
    mr r27, r3
lbl_fn_8007786C_00001074:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00001090
    li r26, 0xff
    b lbl_fn_8007786C_000010BC
lbl_fn_8007786C_00001090:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_000010A8
    li r3, 0x0
    b lbl_fn_8007786C_000010B8
lbl_fn_8007786C_000010A8:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_000010B8:
    mr r26, r3
lbl_fn_8007786C_000010BC:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_000010D8
    li r25, 0xff
    b lbl_fn_8007786C_00001104
lbl_fn_8007786C_000010D8:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_000010F0
    li r3, 0x0
    b lbl_fn_8007786C_00001100
lbl_fn_8007786C_000010F0:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001100:
    mr r25, r3
lbl_fn_8007786C_00001104:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00001120
    li r3, 0xff
    b lbl_fn_8007786C_00001148
lbl_fn_8007786C_00001120:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00001138
    li r3, 0x0
    b lbl_fn_8007786C_00001148
lbl_fn_8007786C_00001138:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001148:
    lfs f5, 0x4(r28)
    slwi r4, r26, 8
    lfs f3, 0x4(r29)
    addi r6, r1, 0xa0
    lfs f4, 0x0(r28)
    slwi r3, r3, 24
    fsubs f7, f5, f3
    lfs f0, 0x0(r29)
    lfs f3, lbl_80880AD4
    slwi r0, r27, 16
    fsubs f8, f4, f0
    lfs f4, 0x0(r31)
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f3
    lfs f6, 0x8(r28)
    addi r5, r1, 0x170
    lfs f5, 0x8(r29)
    or r4, r25, r4
    or r0, r3, r0
    fsubs f2, f6, f5
    or r0, r4, r0
    stfs f8, 0xa0(r1)
    stfs f7, 0xa4(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    addi r23, r1, 0x20
    stfs f2, 0xa8(r1)
    stfs f2, 0x178(r1)
    stw r0, 0x17c(r1)
    psq_st f1, 0x10(r5), 0, 0
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_000011DC
    li r27, 0xff
    b lbl_fn_8007786C_00001204
lbl_fn_8007786C_000011DC:
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_000011F0
    li r3, 0x0
    b lbl_fn_8007786C_00001200
lbl_fn_8007786C_000011F0:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001200:
    mr r27, r3
lbl_fn_8007786C_00001204:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00001220
    li r26, 0xff
    b lbl_fn_8007786C_0000124C
lbl_fn_8007786C_00001220:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00001238
    li r3, 0x0
    b lbl_fn_8007786C_00001248
lbl_fn_8007786C_00001238:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001248:
    mr r26, r3
lbl_fn_8007786C_0000124C:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00001268
    li r25, 0xff
    b lbl_fn_8007786C_00001294
lbl_fn_8007786C_00001268:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00001280
    li r3, 0x0
    b lbl_fn_8007786C_00001290
lbl_fn_8007786C_00001280:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001290:
    mr r25, r3
lbl_fn_8007786C_00001294:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_000012B0
    li r3, 0xff
    b lbl_fn_8007786C_000012D8
lbl_fn_8007786C_000012B0:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_000012C8
    li r3, 0x0
    b lbl_fn_8007786C_000012D8
lbl_fn_8007786C_000012C8:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_000012D8:
    lfs f5, 0x4(r28)
    slwi r4, r26, 8
    lfs f0, 0x4(r29)
    addi r6, r1, 0x94
    lfs f4, 0x0(r28)
    slwi r3, r3, 24
    fsubs f7, f5, f0
    lfs f3, 0x0(r29)
    lfs f0, 0x4(r30)
    slwi r0, r27, 16
    fsubs f8, f4, f3
    lfs f3, 0x0(r30)
    fsubs f9, f7, f0
    lfs f0, lbl_80880AD4
    fsubs f10, f8, f3
    lfs f4, 0x0(r31)
    lfs f6, 0x8(r28)
    addi r5, r1, 0x188
    lfs f5, 0x8(r29)
    fcmpo cr0, f4, f0
    lfs f3, 0x8(r30)
    or r4, r25, r4
    fsubs f5, f6, f5
    or r0, r3, r0
    or r0, r4, r0
    stfs f10, 0x94(r1)
    addi r24, r1, 0x18
    fsubs f2, f5, f3
    stfs f9, 0x98(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    stfs f8, 0x88(r1)
    stfs f7, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f2, 0x9c(r1)
    stfs f2, 0x190(r1)
    stw r0, 0x194(r1)
    psq_st f1, 0x10(r5), 0, 0
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_0000138C
    li r27, 0xff
    b lbl_fn_8007786C_000013B8
lbl_fn_8007786C_0000138C:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_000013A4
    li r3, 0x0
    b lbl_fn_8007786C_000013B4
lbl_fn_8007786C_000013A4:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_000013B4:
    mr r27, r3
lbl_fn_8007786C_000013B8:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_000013D4
    li r26, 0xff
    b lbl_fn_8007786C_00001400
lbl_fn_8007786C_000013D4:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_000013EC
    li r3, 0x0
    b lbl_fn_8007786C_000013FC
lbl_fn_8007786C_000013EC:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_000013FC:
    mr r26, r3
lbl_fn_8007786C_00001400:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_0000141C
    li r25, 0xff
    b lbl_fn_8007786C_00001448
lbl_fn_8007786C_0000141C:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00001434
    li r3, 0x0
    b lbl_fn_8007786C_00001444
lbl_fn_8007786C_00001434:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001444:
    mr r25, r3
lbl_fn_8007786C_00001448:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00001464
    li r3, 0xff
    b lbl_fn_8007786C_0000148C
lbl_fn_8007786C_00001464:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_0000147C
    li r3, 0x0
    b lbl_fn_8007786C_0000148C
lbl_fn_8007786C_0000147C:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_0000148C:
    lfs f5, 0x4(r28)
    slwi r4, r26, 8
    lfs f3, 0x4(r30)
    addi r6, r1, 0x7c
    lfs f4, 0x0(r28)
    slwi r3, r3, 24
    fsubs f7, f5, f3
    lfs f0, 0x0(r30)
    lfs f3, lbl_80880AD4
    slwi r0, r27, 16
    fsubs f8, f4, f0
    lfs f4, 0x0(r31)
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f3
    lfs f6, 0x8(r28)
    addi r5, r1, 0x1a0
    lfs f5, 0x8(r30)
    or r4, r25, r4
    or r0, r3, r0
    fsubs f2, f6, f5
    or r0, r4, r0
    stfs f8, 0x7c(r1)
    addi r23, r1, 0x10
    stfs f7, 0x80(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    stfs f2, 0x84(r1)
    stfs f2, 0x1a8(r1)
    stw r0, 0x1ac(r1)
    psq_st f1, 0x10(r5), 0, 0
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_00001520
    li r25, 0xff
    b lbl_fn_8007786C_00001548
lbl_fn_8007786C_00001520:
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00001534
    li r3, 0x0
    b lbl_fn_8007786C_00001544
lbl_fn_8007786C_00001534:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001544:
    mr r25, r3
lbl_fn_8007786C_00001548:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00001564
    li r27, 0xff
    b lbl_fn_8007786C_00001590
lbl_fn_8007786C_00001564:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_0000157C
    li r3, 0x0
    b lbl_fn_8007786C_0000158C
lbl_fn_8007786C_0000157C:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_0000158C:
    mr r27, r3
lbl_fn_8007786C_00001590:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_000015AC
    li r26, 0xff
    b lbl_fn_8007786C_000015D8
lbl_fn_8007786C_000015AC:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_000015C4
    li r3, 0x0
    b lbl_fn_8007786C_000015D4
lbl_fn_8007786C_000015C4:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_000015D4:
    mr r26, r3
lbl_fn_8007786C_000015D8:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_000015F4
    li r3, 0xff
    b lbl_fn_8007786C_0000161C
lbl_fn_8007786C_000015F4:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_0000160C
    li r3, 0x0
    b lbl_fn_8007786C_0000161C
lbl_fn_8007786C_0000160C:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_0000161C:
    lfs f5, 0x4(r28)
    slwi r4, r27, 8
    lfs f3, 0x4(r29)
    addi r6, r1, 0x70
    lfs f4, 0x0(r28)
    slwi r3, r3, 24
    fadds f6, f5, f3
    lfs f0, 0x0(r29)
    lfs f3, 0x4(r30)
    slwi r0, r25, 16
    fadds f7, f4, f0
    lfs f4, 0x8(r28)
    fsubs f8, f6, f3
    lfs f3, 0x8(r29)
    lfs f0, 0x0(r30)
    addi r5, r1, 0x1b8
    fadds f5, f4, f3
    lfs f3, lbl_80880AD0
    fsubs f9, f7, f0
    lfs f0, 0x8(r30)
    stfs f8, 0x74(r1)
    or r4, r26, r4
    fsubs f2, f5, f0
    or r0, r3, r0
    stfs f9, 0x70(r1)
    or r0, r4, r0
    lfs f4, 0x0(r31)
    lfs f0, lbl_80880AD4
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    psq_l f1, 0x0(r23), 0, 0
    addi r23, r1, 0x8
    stfs f7, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f2, 0x78(r1)
    stfs f2, 0x1c0(r1)
    stw r0, 0x1c4(r1)
    psq_st f1, 0x10(r5), 0, 0
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    cror eq, gt, eq
    bne lbl_fn_8007786C_000016D4
    li r26, 0xff
    b lbl_fn_8007786C_000016FC
lbl_fn_8007786C_000016D4:
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_8007786C_000016E8
    li r3, 0x0
    b lbl_fn_8007786C_000016F8
lbl_fn_8007786C_000016E8:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_000016F8:
    mr r26, r3
lbl_fn_8007786C_000016FC:
    lfs f4, 0x4(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00001718
    li r27, 0xff
    b lbl_fn_8007786C_00001744
lbl_fn_8007786C_00001718:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00001730
    li r3, 0x0
    b lbl_fn_8007786C_00001740
lbl_fn_8007786C_00001730:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001740:
    mr r27, r3
lbl_fn_8007786C_00001744:
    lfs f4, 0x8(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_00001760
    li r30, 0xff
    b lbl_fn_8007786C_0000178C
lbl_fn_8007786C_00001760:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_00001778
    li r3, 0x0
    b lbl_fn_8007786C_00001788
lbl_fn_8007786C_00001778:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_00001788:
    mr r30, r3
lbl_fn_8007786C_0000178C:
    lfs f4, 0xc(r31)
    lfs f0, lbl_80880AD4
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8007786C_000017A8
    li r3, 0xff
    b lbl_fn_8007786C_000017D0
lbl_fn_8007786C_000017A8:
    lfs f0, lbl_80880AD0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8007786C_000017C0
    li r3, 0x0
    b lbl_fn_8007786C_000017D0
lbl_fn_8007786C_000017C0:
    lfs f3, lbl_80880AF8
    lfs f0, lbl_80880AF4
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_8007786C_000017D0:
    lfs f5, 0x4(r28)
    slwi r4, r27, 8
    lfs f4, 0x4(r29)
    addi r5, r1, 0x58
    lfs f3, 0x0(r28)
    slwi r3, r3, 24
    fadds f6, f5, f4
    lfs f0, 0x0(r29)
    lfs f5, 0x8(r28)
    slwi r0, r26, 16
    fadds f0, f3, f0
    lfs f4, 0x8(r29)
    fadds f2, f5, f4
    or r0, r3, r0
    or r4, r30, r4
    stfs f6, 0x5c(r1)
    or r0, r4, r0
    addi r6, r1, 0x1d0
    stfs f0, 0x58(r1)
    li r3, 0xa0
    li r4, 0x0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0xa
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    stfs f2, 0x60(r1)
    stfs f2, 0x1d8(r1)
    stw r0, 0x1dc(r1)
    psq_st f1, 0x10(r6), 0, 0
    bl fn_80614790
    li r0, 0x5
    addi r4, r1, 0xf8
    lis r3, 0xcc01
    mtctr r0
lbl_fn_8007786C_00001858:
    lfs f0, 0x0(r4)
    stfs f0, -0x8000(r3)
    lfs f0, 0x4(r4)
    stfs f0, -0x8000(r3)
    lfs f0, 0x8(r4)
    stfs f0, -0x8000(r3)
    lwz r0, 0xc(r4)
    lfs f0, 0x10(r4)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r3)
    lfs f3, 0x14(r4)
    stfs f0, -0x8000(r3)
    lfs f0, 0x18(r4)
    stfs f3, -0x8000(r3)
    lwz r0, 0x24(r4)
    stfs f0, -0x8000(r3)
    lfs f0, 0x1c(r4)
    rotlwi r0, r0, 8
    stfs f0, -0x8000(r3)
    lfs f0, 0x20(r4)
    stfs f0, -0x8000(r3)
    lfs f0, 0x28(r4)
    stw r0, -0x8000(r3)
    lfs f3, 0x2c(r4)
    addi r4, r4, 0x30
    stfs f0, -0x8000(r3)
    stfs f3, -0x8000(r3)
    bdnz lbl_fn_8007786C_00001858
    addi r11, r1, 0x210
    bl _restgpr_23
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80078938(void)
{
    nofralloc
    stwu r1, -0x300(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x304(r1)
    stfd f31, 0x2f0(r1)
    psq_st f31, 0x2f8(r1), 0, 0
    stfd f30, 0x2e0(r1)
    psq_st f30, 0x2e8(r1), 0, 0
    stfd f29, 0x2d0(r1)
    psq_st f29, 0x2d8(r1), 0, 0
    fmr f29, f1
    stfd f28, 0x2c0(r1)
    psq_st f28, 0x2c8(r1), 0, 0
    stfd f27, 0x2b0(r1)
    psq_st f27, 0x2b8(r1), 0, 0
    stfd f26, 0x2a0(r1)
    psq_st f26, 0x2a8(r1), 0, 0
    stfd f25, 0x290(r1)
    psq_st f25, 0x298(r1), 0, 0
    stfd f24, 0x280(r1)
    psq_st f24, 0x288(r1), 0, 0
    stfd f23, 0x270(r1)
    psq_st f23, 0x278(r1), 0, 0
    stfd f22, 0x260(r1)
    psq_st f22, 0x268(r1), 0, 0
    stw r31, 0x25c(r1)
    mr r31, r3
    stw r30, 0x258(r1)
    stw r29, 0x254(r1)
    stw r28, 0x250(r1)
    lwz r30, lbl_8087EFB4
    lwz r3, 0x2fc(r30)
    bl fn_800C2448
    lfs f0, 0x1c(r3)
    addi r4, r1, 0x20
    lfs f3, 0x18(r3)
    li r10, -0x1
    fneg f10, f0
    lfs f0, 0x14(r3)
    fneg f11, f3
    lfs f3, lbl_80880AD0
    fneg f12, f0
    lfs f8, lbl_80880AEC
    frsp f9, f10
    lfs f5, 0x114(r30)
    frsp f7, f11
    lfs f4, 0x110(r30)
    frsp f6, f12
    lfs f0, 0x10c(r30)
    fmuls f9, f9, f8
    lfs f22, lbl_80880AF0
    fmuls f7, f7, f8
    stfs f12, 0x1a0(r1)
    fmuls f6, f6, f8
    li r0, -0x1
    fadds f5, f5, f9
    stfs f11, 0x1a4(r1)
    fadds f4, f4, f7
    fadds f8, f0, f6
    stfs f5, 0x19c(r1)
    stfs f8, 0x194(r1)
    stfs f4, 0x198(r1)
    lfs f0, 0x164(r30)
    lfs f11, 0x160(r30)
    lfs f12, 0x15c(r30)
    fmuls f26, f0, f22
    lfs f13, 0x174(r30)
    fmuls f25, f11, f22
    lfs f28, 0x16c(r30)
    fmuls f24, f12, f22
    lfs f27, 0x170(r30)
    fmuls f30, f13, f22
    stfs f10, 0x1a8(r1)
    fmuls f10, f27, f22
    fmuls f31, f28, f22
    stfs f6, 0x134(r1)
    stfs f7, 0x138(r1)
    stfs f9, 0x13c(r1)
    stfs f12, 0x188(r1)
    stfs f11, 0x18c(r1)
    stfs f0, 0x190(r1)
    stfs f28, 0x17c(r1)
    stfs f27, 0x180(r1)
    stfs f13, 0x184(r1)
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f24, 0x104(r1)
    stfs f25, 0x108(r1)
    stfs f26, 0x10c(r1)
    stfs f31, 0x110(r1)
    stfs f10, 0x114(r1)
    stfs f30, 0x118(r1)
    fadds f7, f4, f10
    lfs f0, lbl_80880AD4
    fadds f6, f5, f30
    addi r5, r1, 0x128
    fadds f9, f8, f31
    addi r3, r1, 0x1e0
    fsubs f12, f7, f25
    stfs f0, 0x18(r1)
    fsubs f13, f5, f30
    addi r8, r1, 0xf8
    fsubs f11, f6, f26
    stfs f12, 0x12c(r1)
    fsubs f12, f4, f10
    stfs f3, 0x1c(r1)
    fsubs f27, f8, f31
    addi r7, r1, 0x18
    fsubs f4, f9, f24
    addi r6, r1, 0x1f8
    stfs f4, 0x128(r1)
    fadds f5, f7, f25
    fadds f8, f9, f24
    addi r9, r1, 0x10
    psq_l f1, 0x0(r5), 0, 0
    fadds f4, f6, f26
    fmr f2, f11
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    fsubs f28, f13, f26
    stfs f2, 0x1e8(r1)
    fmr f2, f4
    fsubs f23, f12, f25
    addi r4, r1, 0x210
    fsubs f22, f27, f24
    stfs f8, 0xf8(r1)
    addi r5, r1, 0xc8
    stfs f5, 0xfc(r1)
    psq_st f1, 0x10(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f9, 0x11c(r1)
    stfs f7, 0x120(r1)
    stfs f6, 0x124(r1)
    stfs f11, 0x130(r1)
    stw r0, 0x1ec(r1)
    stfs f24, 0xd4(r1)
    stfs f25, 0xd8(r1)
    stfs f26, 0xdc(r1)
    stfs f31, 0xe0(r1)
    stfs f10, 0xe4(r1)
    stfs f30, 0xe8(r1)
    stfs f9, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f6, 0xf4(r1)
    stfs f4, 0x100(r1)
    stfs f2, 0x200(r1)
    stw r10, 0x204(r1)
    psq_st f1, 0x10(r6), 0, 0
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f24, 0xa4(r1)
    stfs f25, 0xa8(r1)
    stfs f26, 0xac(r1)
    stfs f31, 0xb0(r1)
    stfs f10, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f27, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f13, 0xc4(r1)
    stfs f22, 0xc8(r1)
    stfs f23, 0xcc(r1)
    stfs f28, 0xd0(r1)
    fadds f4, f12, f25
    psq_l f1, 0x0(r5), 0, 0
    fadds f5, f27, f24
    psq_st f1, 0x0(r4), 0, 0
    fadds f3, f13, f26
    psq_l f1, 0x0(r9), 0, 0
    fmr f2, f28
    stfs f5, 0x98(r1)
    addi r7, r1, 0x98
    addi r6, r1, 0x8
    stfs f2, 0x218(r1)
    fmr f2, f3
    stfs f4, 0x9c(r1)
    addi r5, r1, 0x228
    li r3, 0x1
    psq_st f1, 0x10(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stw r10, 0x21c(r1)
    stfs f24, 0x74(r1)
    stfs f25, 0x78(r1)
    stfs f26, 0x7c(r1)
    stfs f31, 0x80(r1)
    stfs f10, 0x84(r1)
    stfs f30, 0x88(r1)
    stfs f27, 0x8c(r1)
    stfs f12, 0x90(r1)
    stfs f13, 0x94(r1)
    stfs f3, 0xa0(r1)
    stfs f2, 0x230(r1)
    stw r10, 0x234(r1)
    psq_st f1, 0x10(r5), 0, 0
    bl fn_80615D20
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    li r5, 0x0
    mr r3, r29
    bl fn_80076760
    mr r3, r29
    li r4, 0x9
    li r5, 0x7
    bl fn_80076760
    mr r3, r29
    li r4, 0xa
    li r5, 0x0
    bl fn_80076760
    lwz r3, lbl_8087EEE0
    li r4, 0x1
    bl fn_80072914
    lfs f3, lbl_80880AD0
    addi r3, r1, 0x1b0
    lfs f0, lbl_80880AD4
    li r4, 0x0
    stfs f3, 0x1dc(r1)
    stfs f3, 0x1d4(r1)
    stfs f3, 0x1d0(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1c0(r1)
    stfs f3, 0x1bc(r1)
    stfs f3, 0x1b8(r1)
    stfs f3, 0x1b4(r1)
    stfs f0, 0x1d8(r1)
    stfs f0, 0x1c4(r1)
    stfs f0, 0x1b0(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    mr r4, r30
    addi r3, r1, 0x170
    addi r5, r1, 0x194
    bl fn_800BFAC8
    lfs f2, lbl_80880AD0
    lis r4, 0x4330
    lwz r3, lbl_8087EEE0
    lis r5, lbl_80731838@ha
    stfs f2, 0x178(r1)
    addi r7, r1, 0x68
    lfs f4, lbl_80880AD4
    addi r6, r1, 0x17c
    lwz r0, 0x3c(r3)
    stw r4, 0x240(r1)
    xoris r0, r0, 0x8000
    lwz r8, 0x40(r3)
    stw r0, 0x244(r1)
    xoris r0, r8, 0x8000
    lfd f8, lbl_80731838@l(r5)
    lfd f0, 0x240(r1)
    addi r8, r1, 0x5c
    stw r0, 0x24c(r1)
    addi r5, r1, 0x188
    fsubs f31, f0, f8
    lfs f6, lbl_80880AF4
    stw r4, 0x248(r1)
    lfs f0, 0x170(r1)
    lfd f7, 0x248(r1)
    fmuls f5, f6, f31
    lfs f3, 0x174(r1)
    fsubs f30, f7, f8
    stfs f2, 0x68(r1)
    fsubs f7, f0, f5
    stfs f4, 0x6c(r1)
    fmuls f0, f6, f30
    psq_l f1, 0x0(r7), 0, 0
    stfs f4, 0x5c(r1)
    fsubs f3, f3, f0
    stfs f2, 0x60(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f5, 0x164(r1)
    stfs f0, 0x168(r1)
    stfs f4, 0x16c(r1)
    stfs f7, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f2, 0x160(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x184(r1)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x190(r1)
    bl fn_800761A8
    lfs f27, lbl_80880AF4
    li r28, 0x0
    lfs f28, lbl_80880AD0
    li r29, 0x0
    b lbl_fn_80078938_00001F64
lbl_fn_80078938_00001E50:
    lwz r0, 0x1c(r31)
    lwzx r3, r29, r0
    add r30, r0, r29
    cmpwi r3, 0x0
    beq lbl_fn_80078938_00001F5C
    subi r0, r3, 0x1
    lwz r3, lbl_8087EEE0
    mulli r0, r0, 0x30
    li r4, 0x0
    add r5, r31, r0
    addi r5, r5, 0x20
    bl fn_800763C0
    fdivs f0, f30, f31
    lfs f5, 0x4(r30)
    lfs f3, 0x180(r1)
    addi r3, r1, 0x50
    lfs f4, 0x184(r1)
    addi r4, r1, 0x14c
    fmuls f6, f4, f5
    lfs f4, 0x190(r1)
    fmuls f7, f3, f5
    lfs f3, 0x17c(r1)
    stfs f6, 0x154(r1)
    addi r5, r1, 0x140
    fmuls f3, f3, f5
    lfs f8, 0x18c(r1)
    fmuls f5, f7, f0
    lfs f7, 0x188(r1)
    stfs f3, 0x14c(r1)
    fmuls f3, f27, f31
    stfs f5, 0x150(r1)
    fmuls f0, f27, f30
    lfs f6, 0x160(r1)
    addi r6, r1, 0x28
    lfs f9, 0x4(r30)
    lfs f5, 0x15c(r1)
    fmuls f10, f4, f9
    lfs f4, 0x158(r1)
    fmuls f8, f8, f9
    stfs f3, 0x44(r1)
    fmuls f7, f7, f9
    stfs f8, 0x144(r1)
    stfs f7, 0x140(r1)
    stfs f10, 0x148(r1)
    lfs f9, 0x14(r30)
    lfs f8, 0x10(r30)
    lfs f7, 0xc(r30)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f29, 0x34(r1)
    lfs f7, 0x8(r30)
    stfs f0, 0x48(r1)
    fmuls f5, f5, f7
    fmuls f4, f4, f7
    stfs f28, 0x4c(r1)
    fmuls f6, f6, f7
    fadds f0, f0, f5
    stfs f5, 0x3c(r1)
    fadds f3, f3, f4
    fadds f7, f28, f6
    stfs f4, 0x38(r1)
    stfs f6, 0x40(r1)
    stfs f3, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f7, 0x58(r1)
    bl fn_8007786C
lbl_fn_80078938_00001F5C:
    addi r29, r29, 0x1c
    addi r28, r28, 0x1
lbl_fn_80078938_00001F64:
    lwz r0, 0x18(r31)
    cmplw r28, r0
    blt lbl_fn_80078938_00001E50
    lwz r0, 0x304(r1)
    psq_l f31, 0x2f8(r1), 0, 0
    lfd f31, 0x2f0(r1)
    psq_l f30, 0x2e8(r1), 0, 0
    lfd f30, 0x2e0(r1)
    psq_l f29, 0x2d8(r1), 0, 0
    lfd f29, 0x2d0(r1)
    psq_l f28, 0x2c8(r1), 0, 0
    lfd f28, 0x2c0(r1)
    psq_l f27, 0x2b8(r1), 0, 0
    lfd f27, 0x2b0(r1)
    psq_l f26, 0x2a8(r1), 0, 0
    lfd f26, 0x2a0(r1)
    psq_l f25, 0x298(r1), 0, 0
    lfd f25, 0x290(r1)
    psq_l f24, 0x288(r1), 0, 0
    lfd f24, 0x280(r1)
    psq_l f23, 0x278(r1), 0, 0
    lfd f23, 0x270(r1)
    psq_l f22, 0x268(r1), 0, 0
    lfd f22, 0x260(r1)
    lwz r31, 0x25c(r1)
    lwz r30, 0x258(r1)
    lwz r29, 0x254(r1)
    lwz r28, 0x250(r1)
    mtlr r0
    addi r1, r1, 0x300
    blr
}
