#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_15(void);
extern void _restgpr_16(void);
extern void _restgpr_21(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_16(void);
extern void _savegpr_21(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80016C10(void);
extern void fn_80017064(void);
extern void fn_80019254(void);
extern void fn_8004ECC0(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_80154654(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80176ACC(void);
extern void fn_80179D44(void);
extern void fn_801F0364(void);
extern void fn_801F03AC(void);
extern void fn_801F04FC(void);
extern void fn_801F0544(void);
extern void fn_801FE89C(void);
extern void fn_801FE91C(void);
extern void fn_801FEA1C(void);
extern void fn_801FEB1C(void);
extern void fn_803C11A4(void);
extern void fn_803C1560(void);
extern void fn_803CD958(void);
extern void fn_803EAC3C(void);
extern void fn_80547C2C(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8073CC68[];
extern u8 lbl_8073CC80[];
extern u8 lbl_8073CD20[];
extern u8 lbl_8073CD38[];
extern u8 lbl_8073CD68[];
extern u8 lbl_80775A88[];
extern u8 lbl_80782A18[];
extern u8 lbl_80782A50[];

/* Small data declarations */
extern u32 lbl_8087DAA8;
extern u32 lbl_8087DAAC;
extern u32 lbl_8087DAB0;
extern u32 lbl_8087DAB4;
extern u32 lbl_8087DAB8;
extern u32 lbl_8087DABC;
extern u32 lbl_8087DAC0;
extern u32 lbl_8087DAC4;
extern u32 lbl_8087DAC8;
extern u32 lbl_8087DACC;
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F130;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F890;
extern u32 lbl_80882B70;
extern u32 lbl_80882BA4;
extern u32 lbl_80882BA8;
extern u32 lbl_80882BAC;
extern u32 lbl_80882BB0;
extern u32 lbl_80882BB4;
extern u32 lbl_80882BB8;
extern u32 lbl_80882BC0;
extern u32 lbl_80882BC4;
extern u32 lbl_80882BC8;
extern u32 lbl_80882BCC;
extern u32 lbl_80882BD0;
extern u32 lbl_80882BD4;
extern u32 lbl_80882BD8;
extern u32 lbl_80882BE0;
extern u32 lbl_80882BE4;
extern u32 lbl_80882BE8;
extern u32 lbl_80882BEC;
extern u32 lbl_80882BF0;
extern u32 lbl_80882BF4;

/* Function declarations */
void fn_801EB188(void);
void fn_801EB7C4(void);
void fn_801EB8C0(void);
void fn_801EB93C(void);
void fn_801EB9B0(void);
void fn_801EBD7C(void);
void fn_801EBD80(void);
void fn_801EBE34(void);
void fn_801EBE38(void);
void fn_801EC154(void);
void fn_801EC158(void);
void fn_801EC6C0(void);
void fn_801EC784(void);

asm void fn_801EB188(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_15
    li r17, 0x0
    lis r4, __files@ha
    lis r5, lbl_8073CC80@ha
    stw r17, 0x5c(r1)
    lwz r30, lbl_8087F130
    mr r28, r3
    stw r17, 0x60(r1)
    addi r19, r5, lbl_8073CC80@l
    addi r20, r4, __files@l
    addi r23, r1, 0x64
    stw r17, 0x64(r1)
    addi r16, r1, 0x68
    li r29, 0x0
    li r27, 0x0
    lis r25, 0xcccd
    lis r18, 0x4000
    lis r21, 0x1555
    lis r22, 0x2aab
    lis r26, lbl_80775A88@ha
    b lbl_fn_801EB188_00000398
lbl_fn_801EB188_00000064:
    lwz r0, 0x1630(r30)
    add r31, r0, r27
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801EB188_00000390
    lfs f3, 0x14(r31)
    addi r3, r1, 0x14
    lfs f0, 0x50(r28)
    lfs f5, 0x10(r31)
    fsubs f6, f3, f0
    lfs f4, 0x4c(r28)
    lfs f3, 0xc(r31)
    lfs f0, 0x48(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9920
    lfs f0, 0x5c(r28)
    fmuls f3, f0, f0
    fcmpo cr0, f1, f3
    cror eq, lt, eq
    mfcr r3
    lwz r0, 0x78(r28)
    extrwi r3, r3, 1, 2
    cmpwi r0, 0x0
    bne lbl_fn_801EB188_00000104
    cmpwi r3, 0x0
    beq lbl_fn_801EB188_00000104
    lfs f0, 0x54(r28)
    fcmpo cr0, f1, f3
    li r3, 0x0
    fmuls f0, f0, f0
    cror eq, lt, eq
    bne lbl_fn_801EB188_00000104
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801EB188_00000104
    li r3, 0x1
lbl_fn_801EB188_00000104:
    cmpwi r3, 0x0
    beq lbl_fn_801EB188_00000390
    lwz r3, 0x60(r1)
    lwz r24, 0x64(r1)
    cmplw r3, r24
    bge lbl_fn_801EB188_00000138
    addi r4, r3, 0x1
    lwz r3, 0x5c(r1)
    slwi r0, r4, 2
    stw r4, 0x60(r1)
    add r3, r3, r0
    stw r31, -0x4(r3)
    b lbl_fn_801EB188_00000390
lbl_fn_801EB188_00000138:
    subi r0, r18, 0x1
    subf r0, r24, r0
    cmplwi r0, 0x1
    bge lbl_fn_801EB188_0000015C
    addi r4, r19, 0x85
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801EB188_0000015C:
    addi r0, r21, 0x5555
    cmplw r24, r0
    bge lbl_fn_801EB188_00000190
    addi r3, r24, 0x1
    subi r4, r25, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_801EB188_000001AC
    b lbl_fn_801EB188_000001AC
    b lbl_fn_801EB188_000001AC
lbl_fn_801EB188_00000190:
    subi r0, r22, 0x5556
    cmplw r24, r0
    bge lbl_fn_801EB188_000001AC
    addi r0, r24, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_801EB188_000001AC:
    lwz r3, 0x60(r1)
    subi r0, r18, 0x1
    lwz r24, 0x64(r1)
    addi r3, r3, 0x1
    stw r17, 0x68(r1)
    subf r3, r24, r3
    subf r0, r24, r0
    cmplw r3, r0
    stw r17, 0x6c(r1)
    stw r17, 0x70(r1)
    stw r23, 0x74(r1)
    stw r17, 0x78(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_801EB188_000001F8
    addi r4, r19, 0x85
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801EB188_000001F8:
    addi r0, r21, 0x5555
    cmplw r24, r0
    bge lbl_fn_801EB188_00000240
    addi r4, r24, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_801EB188_00000234
    addi r3, r1, 0x8
lbl_fn_801EB188_00000234:
    lwz r0, 0x0(r3)
    add r15, r24, r0
    b lbl_fn_801EB188_0000027C
lbl_fn_801EB188_00000240:
    subi r0, r22, 0x5556
    cmplw r24, r0
    bge lbl_fn_801EB188_00000278
    addi r3, r24, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_801EB188_0000026C
    addi r3, r1, 0x8
lbl_fn_801EB188_0000026C:
    lwz r0, 0x0(r3)
    add r15, r24, r0
    b lbl_fn_801EB188_0000027C
lbl_fn_801EB188_00000278:
    subi r15, r18, 0x1
lbl_fn_801EB188_0000027C:
    subi r0, r18, 0x1
    cmplw r15, r0
    ble lbl_fn_801EB188_0000029C
    addi r4, r19, 0x85
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801EB188_0000029C:
    slwi r3, r15, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_801EB188_000002C4
    addi r3, r20, 0xa0
    addi r4, r26, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801EB188_000002C4:
    lwz r0, 0x60(r1)
    lwz r3, 0x6c(r1)
    slwi r4, r0, 2
    stw r24, 0x68(r1)
    slwi r3, r3, 2
    stw r15, 0x70(r1)
    add r4, r24, r4
    stw r0, 0x78(r1)
    stwx r31, r4, r3
    lwz r0, 0x60(r1)
    lwz r4, 0x6c(r1)
    lwz r31, 0x5c(r1)
    slwi r0, r0, 2
    addi r5, r4, 0x1
    stw r5, 0x6c(r1)
    add r3, r31, r0
    lwz r0, 0x78(r1)
    subf r3, r31, r3
    srawi r4, r3, 2
    lwz r3, 0x68(r1)
    addze r24, r4
    subf r0, r24, r0
    stw r0, 0x78(r1)
    slwi r15, r24, 2
    mr r4, r31
    slwi r0, r0, 2
    mr r5, r15
    add r3, r3, r0
    bl memcpy
    mr r3, r31
    mr r5, r15
    li r4, 0x0
    bl memset
    lwz r0, 0x6c(r1)
    cmpwi r16, 0x0
    lwz r6, 0x64(r1)
    lwz r4, 0x70(r1)
    add r5, r0, r24
    lwz r3, 0x5c(r1)
    lwz r0, 0x68(r1)
    stw r4, 0x64(r1)
    stw r6, 0x70(r1)
    stw r0, 0x5c(r1)
    stw r3, 0x68(r1)
    stw r5, 0x60(r1)
    stw r17, 0x6c(r1)
    beq lbl_fn_801EB188_00000390
    cmpwi r3, 0x0
    beq lbl_fn_801EB188_00000390
    stw r17, 0x6c(r1)
    bl dtor_80084684
lbl_fn_801EB188_00000390:
    addi r29, r29, 0x1
    addi r27, r27, 0x34
lbl_fn_801EB188_00000398:
    lwz r0, 0x162c(r30)
    cmpw r29, r0
    blt lbl_fn_801EB188_00000064
    lwz r15, 0x60(r1)
    cmpwi r15, 0x0
    beq lbl_fn_801EB188_000005F8
    bl fn_80680CF8
    divwu r0, r3, r15
    lwz r4, 0x7c(r28)
    lwz r5, 0x5c(r1)
    lwz r4, 0x4(r4)
    mullw r0, r0, r15
    subf r0, r0, r3
    mr r3, r28
    slwi r0, r0, 2
    lwzx r15, r5, r0
    lwz r18, 0x0(r15)
    slwi r17, r18, 5
    lwzx r4, r4, r17
    bl fn_80547C2C
    mr r16, r3
    li r4, 0x1
    bl fn_800D246C
    lwz r5, 0x7c(r28)
    mr r3, r16
    lwz r4, 0xc50(r16)
    lwz r0, 0x4(r5)
    add r5, r0, r17
    lwz r5, 0x4(r5)
    bl fn_80154654
    lwz r3, 0x7c(r28)
    slwi r4, r18, 2
    lwz r0, 0x4(r3)
    add r3, r0, r17
    lfs f0, 0x10(r3)
    stfs f0, 0x568(r16)
    lwz r3, 0x7c(r28)
    lwz r0, 0x4(r3)
    add r3, r0, r17
    lwz r0, 0x14(r3)
    stw r0, 0xd0c(r16)
    stw r18, 0x142c(r16)
    lwz r5, 0x88(r28)
    lwzx r3, r5, r4
    addi r0, r3, 0x1
    stwx r0, r5, r4
    lwz r3, 0x64(r28)
    addi r0, r3, 0x1
    stw r0, 0x64(r28)
    bl fn_80680CF8
    lis r4, 0x4178
    lfs f2, lbl_80882B70
    addi r4, r4, 0x749f
    lis r0, 0x4330
    mulhw r5, r4, r3
    stw r0, 0x80(r1)
    lis r4, lbl_8073CC68@ha
    lfs f5, lbl_80882BA8
    lfd f7, lbl_8073CC68@l(r4)
    addi r6, r1, 0x20
    srawi r0, r5, 8
    lfs f4, lbl_80882BA4
    srwi r4, r0, 31
    lfs f3, lbl_80882BAC
    add r0, r0, r4
    stfs f2, 0x20(r1)
    mulli r0, r0, 0x3e9
    addi r18, r1, 0x38
    stfs f2, 0x28(r1)
    addi r4, r1, 0x50
    lfs f0, lbl_80882BB0
    addi r17, r1, 0x44
    subf r0, r0, r3
    mr r3, r16
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f6, 0x80(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmsubs f3, f4, f5, f3
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x534(r16), 0, 0
    stfs f2, 0x53c(r16)
    lfs f2, 0x14(r15)
    psq_l f1, 0xc(r15), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    lwz r19, lbl_8087EE98
    lfs f3, 0x3c(r1)
    stfs f2, 0x58(r1)
    fadds f0, f3, f0
    stfs f2, 0x4c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r17), 0, 0
    stfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r19
    mr r5, r18
    mr r6, r17
    addi r4, r1, 0x2c
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_801EB188_00000554
    lfs f0, 0x30(r1)
    stfs f0, 0x54(r1)
    b lbl_fn_801EB188_000005A0
lbl_fn_801EB188_00000554:
    lfs f3, 0x3c(r1)
    mr r3, r16
    lfs f0, lbl_80882BB0
    lwz r19, lbl_8087EE98
    fadds f0, f3, f0
    stfs f0, 0x3c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r19
    mr r5, r18
    mr r6, r17
    addi r4, r1, 0x2c
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_801EB188_000005A0
    lfs f0, 0x30(r1)
    stfs f0, 0x54(r1)
lbl_fn_801EB188_000005A0:
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r16
    psq_st f1, 0x528(r16), 0, 0
    stfs f2, 0x530(r16)
    lwz r3, lbl_8087EE68
    bl fn_80017064
    lwz r0, 0xc64(r16)
    mr r3, r16
    stw r0, 0xc60(r16)
    li r4, 0x2
    bl fn_8016E970
    lwz r0, 0x54c(r16)
    mr r3, r16
    lfs f0, lbl_80882BB4
    li r4, 0x0
    ori r0, r0, 0x20
    stw r0, 0x54c(r16)
    stfs f0, 0x56c(r16)
    bl fn_800D246C
    stw r16, 0x30(r15)
lbl_fn_801EB188_000005F8:
    addic. r0, r1, 0x5c
    beq lbl_fn_801EB188_00000624
    beq lbl_fn_801EB188_00000624
    beq lbl_fn_801EB188_00000624
    lwz r3, 0x5c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801EB188_00000624
    lwz r0, 0x60(r1)
    subf r0, r0, r0
    stw r0, 0x60(r1)
    bl dtor_80084684
lbl_fn_801EB188_00000624:
    addi r11, r1, 0xd0
    bl _restgpr_15
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_801EB7C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r5, 0x64(r3)
    lwz r30, lbl_8087F130
    lwz r29, 0x30(r4)
    subi r0, r5, 0x1
    lwz r6, 0x88(r3)
    stw r0, 0x64(r3)
    mr r3, r29
    lwz r0, 0x142c(r29)
    slwi r5, r0, 2
    lwzx r4, r6, r5
    subi r0, r4, 0x1
    stwx r0, r6, r5
    lwz r4, lbl_8087F430
    lwz r31, 0x10d8(r4)
    bl fn_80179D44
    lfs f1, lbl_80882BB8
    mr r5, r3
    mr r3, r31
    addi r4, r29, 0x528
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    li r4, 0x0
    stw r3, 0x4(r28)
    stw r3, 0x8(r28)
    stw r4, 0x30(r28)
    lwz r0, 0x162c(r30)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801EB7C4_000006F0
lbl_fn_801EB7C4_000006D8:
    lwz r0, 0x1630(r30)
    add r0, r0, r4
    cmplw r28, r0
    beq lbl_fn_801EB7C4_000006F0
    addi r4, r4, 0x34
    bdnz lbl_fn_801EB7C4_000006D8
lbl_fn_801EB7C4_000006F0:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801EB7C4_00000704
    mr r4, r29
    bl fn_803EAC3C
lbl_fn_801EB7C4_00000704:
    lwz r0, 0x5c0(r29)
    mr r3, r29
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r29)
    bl fn_800D2338
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EB8C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, lbl_8087F890
    lwz r31, 0x48(r5)
    b lbl_fn_801EB8C0_00000790
lbl_fn_801EB8C0_00000764:
    lwz r0, 0x20(r31)
    cmplw r0, r29
    bne lbl_fn_801EB8C0_0000078C
    cmpwi r30, 0x0
    beq lbl_fn_801EB8C0_00000784
    mr r3, r31
    bl fn_80176ACC
    b lbl_fn_801EB8C0_0000078C
lbl_fn_801EB8C0_00000784:
    mr r3, r31
    bl fn_801765D8
lbl_fn_801EB8C0_0000078C:
    lwz r31, 0x1424(r31)
lbl_fn_801EB8C0_00000790:
    cmpwi r31, 0x0
    bne lbl_fn_801EB8C0_00000764
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EB93C(void)
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
    beq lbl_fn_801EB93C_0000080C
    lis r5, lbl_8073CD38@ha
    li r3, 0x1640
    addi r5, r5, lbl_8073CD38@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801EB93C_00000808
    mr r4, r30
    mr r5, r31
    bl fn_801EB9B0
lbl_fn_801EB93C_00000808:
    stw r3, lbl_8087F130
lbl_fn_801EB93C_0000080C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F130
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EB9B0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    stfd f28, 0xa0(r1)
    psq_st f28, 0xa8(r1), 0, 0
    stfd f27, 0x90(r1)
    psq_st f27, 0x98(r1), 0, 0
    bl _savegpr_16
    mr r19, r3
    mr r16, r5
    bl fn_800D1D3C
    lis r3, lbl_80782A18@ha
    li r0, 0x0
    addi r3, r3, lbl_80782A18@l
    stw r3, 0x0(r19)
    li r25, 0x0
    li r24, -0x1
    stw r0, 0x48(r19)
    stw r0, 0x162c(r19)
    stw r0, 0x1630(r19)
    stw r16, 0x1634(r19)
    stw r0, 0x1638(r19)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801EB9B0_000008AC
    lwz r24, 0x10d0(r3)
lbl_fn_801EB9B0_000008AC:
    lwz r6, 0x1634(r19)
    li r4, 0x0
    lwz r0, 0x0(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801EB9B0_00000930
lbl_fn_801EB9B0_000008C4:
    cmpwi r24, 0x0
    blt lbl_fn_801EB9B0_00000918
    lwz r0, 0x4(r6)
    add r3, r0, r4
    lwz r7, 0x18(r3)
    cmpwi r7, 0x0
    blt lbl_fn_801EB9B0_00000918
    lwz r8, 0x1c(r3)
    cmpwi r8, 0x0
    ble lbl_fn_801EB9B0_00000918
    lwz r3, 0x1634(r19)
    lwz r0, 0x4(r3)
    add r5, r0, r4
    lwz r3, 0x18(r5)
    lwz r0, 0x1c(r5)
    cmpw r3, r0
    bgt lbl_fn_801EB9B0_00000918
    cmpw r24, r7
    blt lbl_fn_801EB9B0_00000928
    cmpw r8, r24
    blt lbl_fn_801EB9B0_00000928
lbl_fn_801EB9B0_00000918:
    lwz r0, 0x4(r6)
    add r3, r0, r4
    lwz r0, 0x8(r3)
    add r25, r25, r0
lbl_fn_801EB9B0_00000928:
    addi r4, r4, 0x20
    bdnz lbl_fn_801EB9B0_000008C4
lbl_fn_801EB9B0_00000930:
    lwz r3, 0x1630(r19)
    cmpwi r3, 0x0
    beq lbl_fn_801EB9B0_00000948
    beq lbl_fn_801EB9B0_00000948
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801EB9B0_00000948:
    cmpwi r25, 0x0
    stw r25, 0x162c(r19)
    beq lbl_fn_801EB9B0_00000990
    mulli r3, r25, 0x34
    li r4, 0x3
    la r5, lbl_8087DAAC
    la r6, lbl_8087DAA8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801EBD7C@ha
    mr r7, r25
    addi r4, r4, fn_801EBD7C@l
    li r5, 0x0
    li r6, 0x34
    bl fn_80695720
    stw r3, 0x1630(r19)
    b lbl_fn_801EB9B0_00000998
lbl_fn_801EB9B0_00000990:
    li r0, 0x0
    stw r0, 0x1630(r19)
lbl_fn_801EB9B0_00000998:
    lis r3, lbl_8073CD20@ha
    lfs f31, lbl_80882BCC
    lfd f27, lbl_8073CD20@l(r3)
    addi r28, r1, 0x2c
    lfs f28, lbl_80882BC4
    addi r27, r1, 0x20
    lfs f29, lbl_80882BC0
    addi r26, r1, 0x14
    lfs f30, lbl_80882BC8
    addi r25, r1, 0x8
    li r23, 0x0
    li r22, 0x0
    li r18, 0x0
    li r29, 0x0
    lis r31, 0x4178
    lis r16, 0x4330
    b lbl_fn_801EB9B0_00000BA0
lbl_fn_801EB9B0_000009DC:
    cmpwi r24, 0x0
    blt lbl_fn_801EB9B0_00000A30
    lwz r0, 0x4(r3)
    add r3, r0, r18
    lwz r5, 0x18(r3)
    cmpwi r5, 0x0
    blt lbl_fn_801EB9B0_00000A30
    lwz r6, 0x1c(r3)
    cmpwi r6, 0x0
    ble lbl_fn_801EB9B0_00000A30
    lwz r3, 0x1634(r19)
    lwz r0, 0x4(r3)
    add r4, r0, r18
    lwz r3, 0x18(r4)
    lwz r0, 0x1c(r4)
    cmpw r3, r0
    bgt lbl_fn_801EB9B0_00000A30
    cmpw r24, r5
    blt lbl_fn_801EB9B0_00000B98
    cmpw r6, r24
    blt lbl_fn_801EB9B0_00000B98
lbl_fn_801EB9B0_00000A30:
    mulli r17, r23, 0x34
    addi r30, r31, 0x749f
    li r21, 0x0
    b lbl_fn_801EB9B0_00000B80
lbl_fn_801EB9B0_00000A40:
    stw r29, 0x2c(r1)
    addi r5, r1, 0x2c
    lwz r3, lbl_8087EE68
    lwz r4, 0x1634(r19)
    lwz r0, 0x4(r4)
    add r4, r0, r18
    lwz r4, 0x14(r4)
    bl fn_80016C10
    cmpwi r28, 0x0
    mr r20, r3
    beq lbl_fn_801EB9B0_00000A9C
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801EB9B0_00000A9C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_801EB9B0_00000A98
    addi r3, r28, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_801EB9B0_00000A98:
    stw r29, 0x2c(r1)
lbl_fn_801EB9B0_00000A9C:
    lwz r3, 0x1630(r19)
    stwx r22, r3, r17
    lwz r0, 0x1630(r19)
    add r3, r0, r17
    stw r20, 0x4(r3)
    lwz r0, 0x1630(r19)
    add r3, r0, r17
    stw r20, 0x8(r3)
    lwz r0, 0x1630(r19)
    add r3, r0, r17
    stw r29, 0x30(r3)
    bl fn_80680CF8
    mulhw r0, r30, r3
    lwz r4, 0x1630(r19)
    stw r16, 0x40(r1)
    fmr f2, f31
    add r6, r4, r17
    stfs f31, 0x20(r1)
    srawi r0, r0, 8
    stfs f31, 0x28(r1)
    srwi r4, r0, 31
    mr r5, r20
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x14
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f28
    fmsubs f0, f29, f0, f30
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x24(r6), 0, 0
    stfs f2, 0x2c(r6)
    lwz r4, lbl_8087F430
    lwz r4, 0x10d8(r4)
    bl fn_803C11A4
    lwz r0, 0x1630(r19)
    addi r23, r23, 0x1
    lfs f2, 0x1c(r1)
    addi r21, r21, 0x1
    add r3, r0, r17
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    fmr f2, f31
    lwz r0, 0x1630(r19)
    stfs f31, 0x8(r1)
    add r3, r0, r17
    addi r17, r17, 0x34
    stfs f31, 0xc(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x18(r3), 0, 0
    stfs f31, 0x10(r1)
    stfs f2, 0x20(r3)
lbl_fn_801EB9B0_00000B80:
    lwz r3, 0x1634(r19)
    lwz r0, 0x4(r3)
    add r3, r0, r18
    lwz r0, 0x8(r3)
    cmplw r21, r0
    blt lbl_fn_801EB9B0_00000A40
lbl_fn_801EB9B0_00000B98:
    addi r22, r22, 0x1
    addi r18, r18, 0x20
lbl_fn_801EB9B0_00000BA0:
    lwz r3, 0x1634(r19)
    lwz r0, 0x0(r3)
    cmplw r22, r0
    blt lbl_fn_801EB9B0_000009DC
    psq_l f31, 0xd8(r1), 0, 0
    mr r3, r19
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    psq_l f28, 0xa8(r1), 0, 0
    lfd f28, 0xa0(r1)
    psq_l f27, 0x98(r1), 0, 0
    lfd f27, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_16
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_801EBD7C(void)
{
    nofralloc
    blr
}

asm void fn_801EBD80(void)
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
    beq lbl_fn_801EBD80_00000C90
    addic. r0, r3, 0x1638
    li r0, 0x0
    stw r0, lbl_8087F130
    beq lbl_fn_801EBD80_00000C48
    lwz r4, 0x1638(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801EBD80_00000C48
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_801EBD80_00000C48
    bl fn_800897D8
lbl_fn_801EBD80_00000C48:
    addic. r0, r30, 0x162c
    beq lbl_fn_801EBD80_00000C74
    lwz r3, 0x1630(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EBD80_00000C68
    beq lbl_fn_801EBD80_00000C68
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801EBD80_00000C68:
    li r0, 0x0
    stw r0, 0x1630(r30)
    stw r0, 0x162c(r30)
lbl_fn_801EBD80_00000C74:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_801EBD80_00000C90
    mr r3, r30
    bl dtor_80084684
lbl_fn_801EBD80_00000C90:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EBE34(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_801EBE38(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_21
    lwz r4, lbl_8087F430
    mr r22, r3
    lwz r24, 0x10d8(r4)
    lwz r0, 0x38(r24)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801EBE38_00000FAC
    addi r31, r1, 0x5c
    addi r30, r1, 0x50
    addi r29, r1, 0x44
    addi r28, r1, 0x2c
    addi r27, r1, 0x20
    addi r26, r1, 0x14
    li r23, 0x0
    li r21, 0x0
    b lbl_fn_801EBE38_00000FA0
lbl_fn_801EBE38_00000D0C:
    lwz r0, 0x1630(r22)
    add r25, r0, r21
    lwz r4, 0x4(r25)
    cmpwi cr1, r4, 0x0
    ble cr1, lbl_fn_801EBE38_00000F98
    lwz r3, 0x30(r25)
    cmpwi r3, 0x0
    bne lbl_fn_801EBE38_00000F88
    lwz r3, 0x8(r25)
    cmpw r4, r3
    beq lbl_fn_801EBE38_00000D44
    ble cr1, lbl_fn_801EBE38_00000D44
    cmpwi r3, 0x0
    bgt lbl_fn_801EBE38_00000E2C
lbl_fn_801EBE38_00000D44:
    lwz r3, 0x1634(r22)
    addi r5, r25, 0xc
    lwz r0, 0x0(r25)
    li r7, 0x0
    lwz r6, 0x4(r3)
    li r8, 0x1
    slwi r0, r0, 5
    lwz r3, lbl_8087EE68
    add r6, r6, r0
    lfs f1, 0x28(r25)
    lwz r6, 0x14(r6)
    lfs f2, lbl_80882BD0
    lfs f3, lbl_80882BD4
    lfs f4, lbl_80882BD8
    bl fn_80019254
    cmpwi r3, 0x0
    stw r3, 0x8(r25)
    beq lbl_fn_801EBE38_00000F98
    lwz r4, 0x4(r25)
    cmpw r4, r3
    beq lbl_fn_801EBE38_00000F98
    subi r0, r4, 0x1
    lwz r5, 0xa4(r24)
    slwi r0, r0, 3
    subi r4, r3, 0x1
    add r3, r5, r0
    bl fn_803CD958
    clrlwi r5, r3, 16
    mr r4, r24
    addi r3, r1, 0x5c
    bl fn_803C11A4
    lfs f2, 0x64(r1)
    mr r3, r30
    psq_l f1, 0x0(r31), 0, 0
    mr r4, r30
    psq_st f1, 0x18(r25), 0, 0
    frsp f3, f2
    stfs f2, 0x20(r25)
    lfs f0, 0x14(r25)
    lfs f5, 0x1c(r25)
    fsubs f2, f3, f0
    lfs f4, 0x10(r25)
    lfs f3, 0x18(r25)
    lfs f0, 0xc(r25)
    fsubs f4, f5, f4
    stfs f2, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x24(r25), 0, 0
    stfs f2, 0x2c(r25)
    b lbl_fn_801EBE38_00000F98
lbl_fn_801EBE38_00000E2C:
    subi r0, r3, 0x1
    lwz r4, 0x9c(r24)
    mulli r0, r0, 0x30
    lfs f5, 0x20(r25)
    lfs f3, 0x14(r25)
    addi r3, r1, 0x38
    lfs f4, 0x1c(r25)
    lfs f0, 0x10(r25)
    add r4, r4, r0
    fsubs f5, f5, f3
    fsubs f4, f4, f0
    lfs f6, 0x14(r4)
    lfs f3, 0x18(r25)
    lfs f0, 0xc(r25)
    fmuls f31, f6, f6
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f5, 0x40(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_801EBE38_00000F24
    lwz r4, 0x4(r25)
    lwz r3, 0x8(r25)
    subi r0, r4, 0x1
    lwz r5, 0xa4(r24)
    slwi r0, r0, 3
    subi r4, r3, 0x1
    add r3, r5, r0
    bl fn_803CD958
    clrlwi r5, r3, 16
    stw r5, 0x4(r25)
    mr r4, r24
    addi r3, r1, 0x2c
    bl fn_803C11A4
    lfs f2, 0x34(r1)
    mr r3, r27
    psq_l f1, 0x0(r28), 0, 0
    mr r4, r27
    psq_st f1, 0x18(r25), 0, 0
    frsp f3, f2
    stfs f2, 0x20(r25)
    lfs f0, 0x14(r25)
    lfs f5, 0x1c(r25)
    fsubs f2, f3, f0
    lfs f4, 0x10(r25)
    lfs f3, 0x18(r25)
    lfs f0, 0xc(r25)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x24(r25), 0, 0
    stfs f2, 0x2c(r25)
    b lbl_fn_801EBE38_00000F98
lbl_fn_801EBE38_00000F24:
    lwz r3, 0x1634(r22)
    lwz r0, 0x0(r25)
    lwz r3, 0x4(r3)
    slwi r0, r0, 5
    lfs f3, 0x24(r25)
    add r3, r3, r0
    lfs f0, 0xc(r25)
    lfs f5, 0x10(r3)
    lfs f4, 0x2c(r25)
    fmuls f6, f3, f5
    lfs f3, 0x28(r25)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    stfs f6, 0x8(r1)
    fadds f0, f0, f6
    stfs f3, 0xc(r1)
    stfs f0, 0xc(r25)
    lfs f0, 0x10(r25)
    stfs f4, 0x10(r1)
    fadds f0, f0, f3
    stfs f0, 0x10(r25)
    lfs f0, 0x14(r25)
    fadds f0, f0, f4
    stfs f0, 0x14(r25)
    b lbl_fn_801EBE38_00000F98
lbl_fn_801EBE38_00000F88:
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0xc(r25), 0, 0
    stfs f2, 0x14(r25)
lbl_fn_801EBE38_00000F98:
    addi r23, r23, 0x1
    addi r21, r21, 0x34
lbl_fn_801EBE38_00000FA0:
    lwz r0, 0x162c(r22)
    cmplw r23, r0
    blt lbl_fn_801EBE38_00000D0C
lbl_fn_801EBE38_00000FAC:
    addi r11, r1, 0xa0
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    bl _restgpr_21
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_801EC154(void)
{
    nofralloc
    blr
}

asm void fn_801EC158(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    addi r8, r3, 0x28
    addi r9, r3, 0x48
    lis r7, lbl_80782A50@ha
    li r6, 0x0
    addi r7, r7, lbl_80782A50@l
    cmplw r8, r9
    stw r7, 0x0(r3)
    mr r30, r3
    mr r31, r5
    stw r6, 0x4(r3)
    sth r5, 0xa(r3)
    sth r6, 0xc(r3)
    sth r6, 0xe(r3)
    stw r6, 0x10(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    bge lbl_fn_801EC158_00001050
    addi r0, r9, 0x7
    subf r0, r8, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801EC158_00001050
lbl_fn_801EC158_00001040:
    stw r6, 0x0(r8)
    stw r6, 0x4(r8)
    addi r8, r8, 0x8
    bdnz lbl_fn_801EC158_00001040
lbl_fn_801EC158_00001050:
    addi r6, r3, 0x68
    addi r7, r3, 0x80
    cmplw r6, r7
    li r5, 0x0
    stw r5, 0x5c(r3)
    stw r5, 0x60(r3)
    stw r5, 0x64(r3)
    bge lbl_fn_801EC158_00001094
    addi r0, r7, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801EC158_00001094
lbl_fn_801EC158_00001084:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_801EC158_00001084
lbl_fn_801EC158_00001094:
    addi r6, r3, 0x9c
    addi r7, r3, 0x9c
    cmplw r6, r7
    li r5, 0x0
    stw r5, 0x90(r3)
    stw r5, 0x94(r3)
    stw r5, 0x98(r3)
    bge lbl_fn_801EC158_000010D8
    addi r0, r7, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801EC158_000010D8
lbl_fn_801EC158_000010C8:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_801EC158_000010C8
lbl_fn_801EC158_000010D8:
    addi r6, r3, 0xac
    addi r7, r3, 0xac
    cmplw r6, r7
    li r5, 0x0
    stw r5, 0xa0(r3)
    stw r5, 0xa4(r3)
    stw r5, 0xa8(r3)
    bge lbl_fn_801EC158_0000111C
    addi r0, r7, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801EC158_0000111C
lbl_fn_801EC158_0000110C:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_801EC158_0000110C
lbl_fn_801EC158_0000111C:
    addi r6, r3, 0xc4
    addi r7, r3, 0xdc
    lfs f0, lbl_80882BE0
    cmplw r6, r7
    li r5, 0x0
    stfs f0, 0xb0(r3)
    stfs f0, 0xb4(r3)
    stw r5, 0xb8(r3)
    stw r5, 0xbc(r3)
    stw r5, 0xc0(r3)
    bge lbl_fn_801EC158_0000116C
    addi r0, r7, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801EC158_0000116C
lbl_fn_801EC158_0000115C:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_801EC158_0000115C
lbl_fn_801EC158_0000116C:
    addi r6, r3, 0xf8
    addi r7, r3, 0xf8
    cmplw r6, r7
    li r5, 0x0
    stw r5, 0xec(r3)
    stw r5, 0xf0(r3)
    stw r5, 0xf4(r3)
    bge lbl_fn_801EC158_000011B0
    addi r0, r7, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801EC158_000011B0
lbl_fn_801EC158_000011A0:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_801EC158_000011A0
lbl_fn_801EC158_000011B0:
    addi r7, r3, 0x108
    addi r5, r3, 0x118
    cmplw r7, r5
    li r6, 0x0
    stw r4, 0xfc(r3)
    stw r6, 0x100(r3)
    stw r6, 0x104(r3)
    bge lbl_fn_801EC158_000011F0
    addi r0, r5, 0x3
    subf r0, r7, r0
    srwi r0, r0, 2
    mtctr r0
    bge lbl_fn_801EC158_000011F0
lbl_fn_801EC158_000011E4:
    stw r6, 0x0(r7)
    addi r7, r7, 0x4
    bdnz lbl_fn_801EC158_000011E4
lbl_fn_801EC158_000011F0:
    addi r6, r3, 0x11c
    addi r4, r3, 0x128
    cmplw r6, r4
    li r5, 0x0
    stw r5, 0x118(r3)
    bge lbl_fn_801EC158_00001228
    addi r0, r4, 0x3
    subf r0, r6, r0
    srwi r0, r0, 2
    mtctr r0
    bge lbl_fn_801EC158_00001228
lbl_fn_801EC158_0000121C:
    stw r5, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC158_0000121C
lbl_fn_801EC158_00001228:
    lfs f1, lbl_80882BE0
    li r0, 0x0
    lfs f0, lbl_80882BE4
    lis r4, lbl_8073CD68@ha
    stw r0, 0x128(r3)
    mr r5, r31
    addi r4, r4, lbl_8073CD68@l
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    addi r3, r1, 0x8
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_800DC6B4
    stw r3, 0x1c(r30)
    addi r3, r30, 0x20
    lfs f1, lbl_80882BE8
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BE8
    addi r3, r30, 0x28
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BEC
    addi r3, r30, 0x30
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BEC
    addi r3, r30, 0x38
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BE0
    addi r3, r30, 0x40
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    mr r28, r30
    addi r27, r30, 0x20
    li r29, 0x0
lbl_fn_801EC158_000012D4:
    mr r3, r27
    li r4, 0x0
    bl fn_801F0544
    addi r29, r29, 0x1
    stfs f1, 0x48(r28)
    cmpwi r29, 0x5
    addi r27, r27, 0x8
    addi r28, r28, 0x4
    blt lbl_fn_801EC158_000012D4
    lis r4, lbl_8073CD68@ha
    mr r5, r31
    addi r4, r4, lbl_8073CD68@l
    addi r3, r1, 0x8
    addi r4, r4, 0x9
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_800DC6B4
    stw r3, 0x5c(r30)
    addi r3, r30, 0x60
    lfs f1, lbl_80882BF0
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BF0
    addi r3, r30, 0x68
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BF0
    addi r3, r30, 0x70
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BF0
    addi r3, r30, 0x78
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    mr r28, r30
    addi r27, r30, 0x60
    li r29, 0x0
lbl_fn_801EC158_0000137C:
    mr r3, r27
    li r4, 0x0
    bl fn_801F0544
    addi r29, r29, 0x1
    stfs f1, 0x80(r28)
    cmpwi r29, 0x4
    addi r27, r27, 0x8
    addi r28, r28, 0x4
    blt lbl_fn_801EC158_0000137C
    lis r3, lbl_8073CD68@ha
    mr r5, r31
    addi r29, r3, lbl_8073CD68@l
    addi r3, r1, 0x8
    addi r4, r29, 0x12
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_800DC6B4
    stw r3, 0x90(r30)
    addi r3, r30, 0x94
    lfs f1, lbl_80882BE0
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    addi r3, r30, 0x94
    li r4, 0x0
    bl fn_801F0544
    stfs f1, 0x9c(r30)
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r29, 0x1b
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_800DC6B4
    stw r3, 0xa0(r30)
    addi r3, r30, 0xa4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    bl fn_801F0364
    addi r3, r30, 0xa4
    li r4, 0x0
    bl fn_801F03AC
    stw r3, 0xac(r30)
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r29, 0x26
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_800DC6B4
    stw r3, 0xb8(r30)
    addi r3, r30, 0xbc
    lfs f1, lbl_80882BF0
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BF0
    addi r3, r30, 0xc4
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BF0
    addi r3, r30, 0xcc
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882BF0
    addi r3, r30, 0xd4
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    mr r27, r30
    addi r28, r30, 0xbc
    li r29, 0x0
lbl_fn_801EC158_000014AC:
    mr r3, r28
    li r4, 0x0
    bl fn_801F0544
    addi r29, r29, 0x1
    stfs f1, 0xdc(r27)
    cmpwi r29, 0x4
    addi r28, r28, 0x8
    addi r27, r27, 0x4
    blt lbl_fn_801EC158_000014AC
    lis r4, lbl_8073CD68@ha
    mr r5, r31
    addi r4, r4, lbl_8073CD68@l
    addi r3, r1, 0x8
    addi r4, r4, 0x33
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_800DC6B4
    stw r3, 0xec(r30)
    addi r3, r30, 0xf0
    lfs f1, lbl_80882BF4
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    addi r3, r30, 0xf0
    li r4, 0x0
    bl fn_801F0544
    stfs f1, 0xf8(r30)
    addi r11, r1, 0x40
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801EC6C0(void)
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
    beq lbl_fn_801EC6C0_000015E0
    lwz r5, 0xfc(r3)
    lis r4, lbl_80782A50@ha
    addi r4, r4, lbl_80782A50@l
    stw r4, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801EC6C0_000015D0
    addi r3, r5, 0x10
    addi r4, r30, 0x1c
    bl fn_801FE91C
    lwz r3, 0xfc(r30)
    addi r4, r30, 0x5c
    addi r3, r3, 0x10
    bl fn_801FEA1C
    lwz r3, 0xfc(r30)
    addi r4, r30, 0x90
    addi r3, r3, 0x10
    bl fn_801FE89C
    lwz r3, 0xfc(r30)
    addi r4, r30, 0xa0
    addi r3, r3, 0x10
    bl fn_801FEB1C
    lwz r3, 0xfc(r30)
    addi r4, r30, 0xb8
    addi r3, r3, 0x10
    bl fn_801FEA1C
    lwz r3, 0xfc(r30)
    addi r4, r30, 0xec
    addi r3, r3, 0x10
    bl fn_801FE89C
lbl_fn_801EC6C0_000015D0:
    cmpwi r31, 0x0
    ble lbl_fn_801EC6C0_000015E0
    mr r3, r30
    bl dtor_80084684
lbl_fn_801EC6C0_000015E0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EC784(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r28, 0xfc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_801EC784_00002764
    lwz r0, 0x24(r28)
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00001640
    lwz r0, 0x20(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801EC784_00001790
lbl_fn_801EC784_00001640:
    lwz r0, 0x20(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_801EC784_000018E4
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DABC
    la r6, lbl_8087DAB8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x24(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00001780
    lwz r0, 0x1c(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EC784_00001688
    mr r4, r0
lbl_fn_801EC784_00001688:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_00001778
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_00001748
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_00001748
lbl_fn_801EC784_000016BC:
    lwz r8, 0x24(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_000016BC
lbl_fn_801EC784_00001748:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_00001778
lbl_fn_801EC784_00001760:
    lwz r3, 0x24(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_00001760
lbl_fn_801EC784_00001778:
    lwz r3, 0x24(r28)
    bl fn_80084C24
lbl_fn_801EC784_00001780:
    stw r30, 0x24(r28)
    li r0, 0x8
    stw r0, 0x20(r28)
    b lbl_fn_801EC784_000018E4
lbl_fn_801EC784_00001790:
    lwz r3, 0x1c(r28)
    cmplw r3, r0
    blt lbl_fn_801EC784_000018E4
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_801EC784_000018E4
    slwi r3, r30, 2
    li r4, 0x0
    la r5, lbl_8087DABC
    la r6, lbl_8087DAB8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x24(r28)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_000018DC
    lwz r0, 0x1c(r28)
    mr r4, r30
    cmplw r30, r0
    ble lbl_fn_801EC784_000017E4
    mr r4, r0
lbl_fn_801EC784_000017E4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_000018D4
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_000018A4
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_000018A4
lbl_fn_801EC784_00001818:
    lwz r8, 0x24(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x24(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_00001818
lbl_fn_801EC784_000018A4:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_000018D4
lbl_fn_801EC784_000018BC:
    lwz r3, 0x24(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_000018BC
lbl_fn_801EC784_000018D4:
    lwz r3, 0x24(r28)
    bl fn_80084C24
lbl_fn_801EC784_000018DC:
    stw r29, 0x24(r28)
    stw r30, 0x20(r28)
lbl_fn_801EC784_000018E4:
    lwz r0, 0x1c(r28)
    addi r4, r31, 0x1c
    lwz r3, 0x24(r28)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x1c(r28)
    addi r0, r3, 0x1
    stw r0, 0x1c(r28)
    lwz r30, 0xfc(r31)
    lwz r0, 0x3c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00001920
    lwz r0, 0x38(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EC784_00001A70
lbl_fn_801EC784_00001920:
    lwz r0, 0x38(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EC784_00001BC4
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAC4
    la r6, lbl_8087DAC0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x3c(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00001A60
    lwz r0, 0x34(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EC784_00001968
    mr r4, r0
lbl_fn_801EC784_00001968:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_00001A58
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_00001A28
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_00001A28
lbl_fn_801EC784_0000199C:
    lwz r8, 0x3c(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_0000199C
lbl_fn_801EC784_00001A28:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_00001A58
lbl_fn_801EC784_00001A40:
    lwz r3, 0x3c(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_00001A40
lbl_fn_801EC784_00001A58:
    lwz r3, 0x3c(r30)
    bl fn_80084C24
lbl_fn_801EC784_00001A60:
    stw r29, 0x3c(r30)
    li r0, 0x8
    stw r0, 0x38(r30)
    b lbl_fn_801EC784_00001BC4
lbl_fn_801EC784_00001A70:
    lwz r3, 0x34(r30)
    cmplw r3, r0
    blt lbl_fn_801EC784_00001BC4
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_801EC784_00001BC4
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087DAC4
    la r6, lbl_8087DAC0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x3c(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00001BBC
    lwz r0, 0x34(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_801EC784_00001AC4
    mr r4, r0
lbl_fn_801EC784_00001AC4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_00001BB4
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_00001B84
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_00001B84
lbl_fn_801EC784_00001AF8:
    lwz r8, 0x3c(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_00001AF8
lbl_fn_801EC784_00001B84:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_00001BB4
lbl_fn_801EC784_00001B9C:
    lwz r3, 0x3c(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_00001B9C
lbl_fn_801EC784_00001BB4:
    lwz r3, 0x3c(r30)
    bl fn_80084C24
lbl_fn_801EC784_00001BBC:
    stw r28, 0x3c(r30)
    stw r29, 0x38(r30)
lbl_fn_801EC784_00001BC4:
    lwz r0, 0x34(r30)
    addi r4, r31, 0x5c
    lwz r3, 0x3c(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x34(r30)
    addi r0, r3, 0x1
    stw r0, 0x34(r30)
    lwz r30, 0xfc(r31)
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00001C00
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EC784_00001D50
lbl_fn_801EC784_00001C00:
    lwz r0, 0x14(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EC784_00001EA4
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00001D40
    lwz r0, 0x10(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EC784_00001C48
    mr r4, r0
lbl_fn_801EC784_00001C48:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_00001D38
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_00001D08
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_00001D08
lbl_fn_801EC784_00001C7C:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_00001C7C
lbl_fn_801EC784_00001D08:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_00001D38
lbl_fn_801EC784_00001D20:
    lwz r3, 0x18(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_00001D20
lbl_fn_801EC784_00001D38:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801EC784_00001D40:
    stw r28, 0x18(r30)
    li r0, 0x8
    stw r0, 0x14(r30)
    b lbl_fn_801EC784_00001EA4
lbl_fn_801EC784_00001D50:
    lwz r3, 0x10(r30)
    cmplw r3, r0
    blt lbl_fn_801EC784_00001EA4
    slwi r28, r3, 1
    cmplw r0, r28
    bgt lbl_fn_801EC784_00001EA4
    slwi r3, r28, 2
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00001E9C
    lwz r0, 0x10(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801EC784_00001DA4
    mr r4, r0
lbl_fn_801EC784_00001DA4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_00001E94
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_00001E64
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_00001E64
lbl_fn_801EC784_00001DD8:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_00001DD8
lbl_fn_801EC784_00001E64:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_00001E94
lbl_fn_801EC784_00001E7C:
    lwz r3, 0x18(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_00001E7C
lbl_fn_801EC784_00001E94:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801EC784_00001E9C:
    stw r29, 0x18(r30)
    stw r28, 0x14(r30)
lbl_fn_801EC784_00001EA4:
    lwz r0, 0x10(r30)
    addi r4, r31, 0x90
    lwz r3, 0x18(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x10(r30)
    addi r0, r3, 0x1
    stw r0, 0x10(r30)
    lwz r30, 0xfc(r31)
    lwz r0, 0x54(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00001EE0
    lwz r0, 0x50(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EC784_00002030
lbl_fn_801EC784_00001EE0:
    lwz r0, 0x50(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EC784_00002184
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DACC
    la r6, lbl_8087DAC8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x54(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00002020
    lwz r0, 0x4c(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EC784_00001F28
    mr r4, r0
lbl_fn_801EC784_00001F28:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_00002018
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_00001FE8
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_00001FE8
lbl_fn_801EC784_00001F5C:
    lwz r8, 0x54(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_00001F5C
lbl_fn_801EC784_00001FE8:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_00002018
lbl_fn_801EC784_00002000:
    lwz r3, 0x54(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_00002000
lbl_fn_801EC784_00002018:
    lwz r3, 0x54(r30)
    bl fn_80084C24
lbl_fn_801EC784_00002020:
    stw r28, 0x54(r30)
    li r0, 0x8
    stw r0, 0x50(r30)
    b lbl_fn_801EC784_00002184
lbl_fn_801EC784_00002030:
    lwz r3, 0x4c(r30)
    cmplw r3, r0
    blt lbl_fn_801EC784_00002184
    slwi r28, r3, 1
    cmplw r0, r28
    bgt lbl_fn_801EC784_00002184
    slwi r3, r28, 2
    li r4, 0x0
    la r5, lbl_8087DACC
    la r6, lbl_8087DAC8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x54(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_0000217C
    lwz r0, 0x4c(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801EC784_00002084
    mr r4, r0
lbl_fn_801EC784_00002084:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_00002174
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_00002144
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_00002144
lbl_fn_801EC784_000020B8:
    lwz r8, 0x54(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_000020B8
lbl_fn_801EC784_00002144:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_00002174
lbl_fn_801EC784_0000215C:
    lwz r3, 0x54(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_0000215C
lbl_fn_801EC784_00002174:
    lwz r3, 0x54(r30)
    bl fn_80084C24
lbl_fn_801EC784_0000217C:
    stw r29, 0x54(r30)
    stw r28, 0x50(r30)
lbl_fn_801EC784_00002184:
    lwz r0, 0x4c(r30)
    addi r4, r31, 0xa0
    lwz r3, 0x54(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x4c(r30)
    addi r0, r3, 0x1
    stw r0, 0x4c(r30)
    lwz r30, 0xfc(r31)
    lwz r0, 0x3c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_000021C0
    lwz r0, 0x38(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EC784_00002310
lbl_fn_801EC784_000021C0:
    lwz r0, 0x38(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EC784_00002464
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAC4
    la r6, lbl_8087DAC0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x3c(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_00002300
    lwz r0, 0x34(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EC784_00002208
    mr r4, r0
lbl_fn_801EC784_00002208:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_000022F8
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_000022C8
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_000022C8
lbl_fn_801EC784_0000223C:
    lwz r8, 0x3c(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_0000223C
lbl_fn_801EC784_000022C8:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_000022F8
lbl_fn_801EC784_000022E0:
    lwz r3, 0x3c(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_000022E0
lbl_fn_801EC784_000022F8:
    lwz r3, 0x3c(r30)
    bl fn_80084C24
lbl_fn_801EC784_00002300:
    stw r28, 0x3c(r30)
    li r0, 0x8
    stw r0, 0x38(r30)
    b lbl_fn_801EC784_00002464
lbl_fn_801EC784_00002310:
    lwz r3, 0x34(r30)
    cmplw r3, r0
    blt lbl_fn_801EC784_00002464
    slwi r28, r3, 1
    cmplw r0, r28
    bgt lbl_fn_801EC784_00002464
    slwi r3, r28, 2
    li r4, 0x0
    la r5, lbl_8087DAC4
    la r6, lbl_8087DAC0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x3c(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_0000245C
    lwz r0, 0x34(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801EC784_00002364
    mr r4, r0
lbl_fn_801EC784_00002364:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_00002454
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_00002424
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_00002424
lbl_fn_801EC784_00002398:
    lwz r8, 0x3c(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_00002398
lbl_fn_801EC784_00002424:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_00002454
lbl_fn_801EC784_0000243C:
    lwz r3, 0x3c(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_0000243C
lbl_fn_801EC784_00002454:
    lwz r3, 0x3c(r30)
    bl fn_80084C24
lbl_fn_801EC784_0000245C:
    stw r29, 0x3c(r30)
    stw r28, 0x38(r30)
lbl_fn_801EC784_00002464:
    lwz r0, 0x34(r30)
    addi r4, r31, 0xb8
    lwz r3, 0x3c(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x34(r30)
    addi r0, r3, 0x1
    stw r0, 0x34(r30)
    lwz r30, 0xfc(r31)
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_000024A0
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EC784_000025F0
lbl_fn_801EC784_000024A0:
    lwz r0, 0x14(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EC784_00002744
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_000025E0
    lwz r0, 0x10(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EC784_000024E8
    mr r4, r0
lbl_fn_801EC784_000024E8:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_000025D8
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_000025A8
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_000025A8
lbl_fn_801EC784_0000251C:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_0000251C
lbl_fn_801EC784_000025A8:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_000025D8
lbl_fn_801EC784_000025C0:
    lwz r3, 0x18(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_000025C0
lbl_fn_801EC784_000025D8:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801EC784_000025E0:
    stw r28, 0x18(r30)
    li r0, 0x8
    stw r0, 0x14(r30)
    b lbl_fn_801EC784_00002744
lbl_fn_801EC784_000025F0:
    lwz r3, 0x10(r30)
    cmplw r3, r0
    blt lbl_fn_801EC784_00002744
    slwi r28, r3, 1
    cmplw r0, r28
    bgt lbl_fn_801EC784_00002744
    slwi r3, r28, 2
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EC784_0000273C
    lwz r0, 0x10(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801EC784_00002644
    mr r4, r0
lbl_fn_801EC784_00002644:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EC784_00002734
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EC784_00002704
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EC784_00002704
lbl_fn_801EC784_00002678:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EC784_00002678
lbl_fn_801EC784_00002704:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EC784_00002734
lbl_fn_801EC784_0000271C:
    lwz r3, 0x18(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EC784_0000271C
lbl_fn_801EC784_00002734:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801EC784_0000273C:
    stw r29, 0x18(r30)
    stw r28, 0x14(r30)
lbl_fn_801EC784_00002744:
    lwz r0, 0x10(r30)
    addi r4, r31, 0xec
    lwz r3, 0x18(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x10(r30)
    addi r0, r3, 0x1
    stw r0, 0x10(r30)
lbl_fn_801EC784_00002764:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
