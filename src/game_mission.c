#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_19(void);
extern void _savegpr_14(void);
extern void _savegpr_19(void);
extern void dtor_80084684(void);
extern void fn_8004CB70(void);
extern void fn_8004CBB0(void);
extern void fn_800502A8(void);
extern void fn_80051A88(void);
extern void fn_80051B70(void);
extern void fn_80051C10(void);
extern void fn_80051CD8(void);
extern void fn_80051E90(void);
extern void fn_800520F0(void);
extern void fn_800523A0(void);
extern void fn_80053254(void);
extern void fn_8005339C(void);
extern void fn_8005361C(void);
extern void fn_80054038(void);
extern void fn_800551BC(void);
extern void fn_8005691C(void);
extern void fn_80056AE8(void);
extern void fn_80059B5C(void);
extern void fn_8005A084(void);
extern void fn_8005A5AC(void);
extern void fn_8005AAD4(void);
extern void fn_8005AD74(void);
extern void fn_8005B05C(void);
extern void fn_80062908(void);
extern void fn_8006297C(void);
extern void fn_800629F0(void);
extern void fn_80472A34(void);
extern void fn_80472C90(void);
extern void fn_80472D64(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_80614790(void);

/* External data declarations */
extern u8 lbl_80777588[];
extern u8 lbl_807775C0[];
extern u8 lbl_807776A0[];
extern u8 lbl_8078FC38[];
extern u8 lbl_8078FC90[];
extern u8 lbl_807C6BC8[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEA0;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880960;
extern u32 lbl_80880964;
extern u32 lbl_80880970;
extern u32 lbl_80880974;
extern u32 lbl_80880978;
extern u32 lbl_80880980;

/* Function declarations */
void fn_80057A64(void);
void fn_80057A68(void);
void fn_80057A78(void);
void fn_80057BE8(void);
void fn_80057C94(void);
void fn_80057D40(void);
void fn_80057DEC(void);
void fn_80057E38(void);
void fn_80057F28(void);
void fn_80058020(void);
void fn_80058078(void);
void fn_800580BC(void);
void fn_80058120(void);
void fn_8005823C(void);
void fn_80058358(void);
void fn_80058474(void);
void fn_800584B4(void);
void fn_800584D8(void);
void fn_8005886C(void);
void fn_800588FC(void);
void fn_80058A1C(void);
void fn_80058B20(void);
void fn_80058B78(void);
void fn_80058BBC(void);
void fn_80058C20(void);
void fn_80058D0C(void);
void fn_80058DF8(void);
void fn_80058EE4(void);
void fn_800591D4(void);
void fn_80059240(void);
void fn_80059264(void);
void fn_800593F4(void);
void fn_80059468(void);
void fn_800594DC(void);
void fn_80059550(void);
void fn_800595D8(void);
void fn_80059660(void);
void fn_80059784(void);
void fn_80059A40(void);

asm void fn_80057A64(void)
{
    nofralloc
    blr
}

asm void fn_80057A68(void)
{
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    blr
}

asm void fn_80057A78(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f4, 0x8(r6)
    stw r0, 0x54(r1)
    addi r3, r1, 0x2c
    lfs f3, 0x8(r5)
    stw r31, 0x4c(r1)
    mr r31, r7
    lfs f0, 0x8(r7)
    fsubs f8, f4, f3
    stw r30, 0x48(r1)
    mr r30, r6
    fsubs f9, f0, f3
    psq_l f1, 0x0(r5), 0, 0
    stw r29, 0x44(r1)
    lfs f2, 0x8(r5)
    mr r29, r5
    stw r28, 0x40(r1)
    lfs f7, 0x4(r6)
    mr r28, r4
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r4)
    lfs f2, 0x8(r6)
    lfs f6, 0x4(r5)
    lfs f4, 0x0(r5)
    addi r5, r1, 0x14
    lfs f5, 0x0(r6)
    fsubs f7, f7, f6
    lfs f3, 0x4(r7)
    lfs f0, 0x0(r7)
    fsubs f5, f5, f4
    psq_st f1, 0xc(r4), 0, 0
    fsubs f3, f3, f6
    psq_l f1, 0x0(r7), 0, 0
    fsubs f0, f0, f4
    stfs f2, 0x14(r4)
    lfs f2, 0x8(r7)
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    addi r4, r1, 0x20
    stfs f5, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f9, 0x28(r1)
    bl fn_805F99B0
    addi r4, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r28, 0x24
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x2c(r28)
    bl fn_805F98D0
    lfs f5, 0x8(r30)
    addi r3, r1, 0x8
    lfs f4, 0x8(r31)
    lfs f3, 0x4(r30)
    lfs f0, 0x4(r31)
    fadds f4, f5, f4
    lfs f7, lbl_80880970
    fadds f6, f3, f0
    lfs f3, 0x0(r30)
    fmuls f8, f7, f4
    lfs f0, 0x0(r31)
    lfs f4, 0x8(r29)
    fadds f5, f3, f0
    fmuls f6, f7, f6
    lfs f3, 0x4(r29)
    fsubs f9, f4, f8
    lfs f0, 0x0(r29)
    fmuls f4, f7, f5
    stfs f6, 0x34(r28)
    fsubs f3, f3, f6
    stfs f4, 0x30(r28)
    fsubs f0, f0, f4
    stfs f8, 0x38(r28)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f9, 0x10(r1)
    bl fn_805F9940
    stfs f1, 0x3c(r28)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80057BE8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    ble lbl_fn_80057BE8_00000218
    mr r3, r27
    addi r4, r24, 0x3c
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_80057BE8_00000218
    addi r30, r24, 0x78
    addi r31, r24, 0x1c
    li r29, 0x0
    li r28, 0x0
lbl_fn_80057BE8_000001D0:
    mr r3, r25
    mr r4, r27
    mr r5, r30
    bl fn_80053254
    cmpwi r3, 0x0
    beq lbl_fn_80057BE8_00000200
    stw r31, 0x34(r25)
    addi r29, r29, 0x1
    cmpw r29, r26
    stw r24, 0x38(r25)
    addi r25, r25, 0x50
    bge lbl_fn_80057BE8_00000210
lbl_fn_80057BE8_00000200:
    addi r28, r28, 0x1
    addi r30, r30, 0x40
    cmpwi r28, 0xc
    blt lbl_fn_80057BE8_000001D0
lbl_fn_80057BE8_00000210:
    mr r3, r29
    b lbl_fn_80057BE8_0000021C
lbl_fn_80057BE8_00000218:
    li r3, 0x0
lbl_fn_80057BE8_0000021C:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80057C94(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    ble lbl_fn_80057C94_000002C4
    mr r3, r27
    addi r4, r24, 0x3c
    bl fn_80051E90
    cmpwi r3, 0x0
    beq lbl_fn_80057C94_000002C4
    addi r30, r24, 0x78
    addi r31, r24, 0x1c
    li r29, 0x0
    li r28, 0x0
lbl_fn_80057C94_0000027C:
    mr r3, r25
    mr r4, r27
    mr r5, r30
    bl fn_80054038
    cmpwi r3, 0x0
    beq lbl_fn_80057C94_000002AC
    stw r31, 0x34(r25)
    addi r29, r29, 0x1
    cmpw r29, r26
    stw r24, 0x38(r25)
    addi r25, r25, 0x50
    bge lbl_fn_80057C94_000002BC
lbl_fn_80057C94_000002AC:
    addi r28, r28, 0x1
    addi r30, r30, 0x40
    cmpwi r28, 0xc
    blt lbl_fn_80057C94_0000027C
lbl_fn_80057C94_000002BC:
    mr r3, r29
    b lbl_fn_80057C94_000002C8
lbl_fn_80057C94_000002C4:
    li r3, 0x0
lbl_fn_80057C94_000002C8:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80057D40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    ble lbl_fn_80057D40_00000370
    mr r3, r27
    addi r4, r24, 0x3c
    bl fn_800520F0
    cmpwi r3, 0x0
    beq lbl_fn_80057D40_00000370
    addi r30, r24, 0x78
    addi r31, r24, 0x1c
    li r29, 0x0
    li r28, 0x0
lbl_fn_80057D40_00000328:
    mr r3, r25
    mr r4, r27
    mr r5, r30
    bl fn_8005691C
    cmpwi r3, 0x0
    beq lbl_fn_80057D40_00000358
    stw r31, 0x34(r25)
    addi r29, r29, 0x1
    cmpw r29, r26
    stw r24, 0x38(r25)
    addi r25, r25, 0x50
    bge lbl_fn_80057D40_00000368
lbl_fn_80057D40_00000358:
    addi r28, r28, 0x1
    addi r30, r30, 0x40
    cmpwi r28, 0xc
    blt lbl_fn_80057D40_00000328
lbl_fn_80057D40_00000368:
    mr r3, r29
    b lbl_fn_80057D40_00000374
lbl_fn_80057D40_00000370:
    li r3, 0x0
lbl_fn_80057D40_00000374:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80057DEC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r7, r3
    lis r6, 0xff01
    stw r0, 0x24(r1)
    addi r5, r7, 0x3c
    lfs f1, lbl_80880960
    addi r4, r1, 0x8
    stfs f1, 0x8(r1)
    subi r6, r6, 0x100
    lwz r3, lbl_8087EEB0
    addi r7, r7, 0x48
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_800629F0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80057E38(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r6, r1, 0x8
    addi r5, r1, 0x20
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lfs f0, 0x64(r3)
    lfs f3, 0x54(r3)
    stfs f3, 0x8(r1)
    lfs f2, 0x74(r3)
    addi r3, r3, 0x3c
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F9940
    lfs f9, 0x1c(r31)
    frsp f0, f1
    lfs f3, lbl_80880964
    lfs f8, 0x28(r1)
    fdivs f10, f3, f9
    lfs f5, 0xc(r31)
    lfs f4, 0x20(r1)
    lfs f3, 0x4(r31)
    lfs f7, 0x24(r1)
    lfs f6, 0x8(r31)
    fdivs f0, f0, f9
    stfs f1, 0x2c(r1)
    fctiwz f0, f0
    fsubs f5, f8, f5
    fsubs f3, f4, f3
    stfd f0, 0x40(r1)
    fsubs f6, f7, f6
    fmuls f4, f5, f10
    lwz r3, 0x44(r1)
    fmuls f5, f3, f10
    addi r0, r3, 0x1
    stw r0, 0x18(r30)
    fctiwz f0, f4
    fctiwz f3, f5
    stfs f5, 0x14(r1)
    stfd f0, 0x38(r1)
    fmuls f0, f6, f10
    stfd f3, 0x30(r1)
    lwz r3, 0x3c(r1)
    lwz r4, 0x34(r1)
    stw r4, 0x10(r30)
    stw r3, 0x14(r30)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    stfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80057F28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807776A0@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, -0x1
    li r5, 0x3
    addi r4, r4, lbl_807776A0@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x0(r3)
    li r4, 0x0
    stw r5, 0x4(r3)
    li r5, 0x14
    stw r6, 0x8(r3)
    stw r6, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    addi r3, r3, 0x28
    bl memset
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_80057F28_0000053C
    mr r4, r30
    bl fn_8004CB70
lbl_fn_80057F28_0000053C:
    lis r3, lbl_807775C0@ha
    addi r31, r30, 0x3c
    addi r3, r3, lbl_807775C0@l
    stw r3, 0x0(r30)
    mr r3, r31
    bl fn_80473E74
    lfs f1, lbl_80880960
    lis r3, lbl_8078FC38@ha
    lfs f0, lbl_80880964
    addi r3, r3, lbl_8078FC38@l
    li r0, 0x0
    stw r3, 0x0(r31)
    mr r3, r30
    stw r0, 0x44(r30)
    stfs f1, 0x74(r30)
    stfs f1, 0x6c(r30)
    stfs f1, 0x68(r30)
    stfs f1, 0x64(r30)
    stfs f1, 0x60(r30)
    stfs f1, 0x58(r30)
    stfs f1, 0x54(r30)
    stfs f1, 0x50(r30)
    stfs f1, 0x4c(r30)
    stfs f0, 0x70(r30)
    stfs f0, 0x5c(r30)
    stfs f0, 0x48(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058020(void)
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
    beq lbl_fn_80058020_000005F8
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_80058020_000005F8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80058020_000005F8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058078(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x3c(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    addi r3, r3, 0x3c
    bctrl
    li r0, 0x0
    stw r0, 0x44(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800580BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800580BC_00000680
    li r3, 0x0
    b lbl_fn_800580BC_000006A8
lbl_fn_800580BC_00000680:
    addi r3, r3, 0x3c
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_800580BC_00000698
    li r3, 0x1
    b lbl_fn_800580BC_000006A8
lbl_fn_800580BC_00000698:
    addi r3, r31, 0x3c
    bl fn_80472A34
    stw r3, 0x44(r31)
    li r3, 0x0
lbl_fn_800580BC_000006A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058120(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r29, r6
    mr r27, r4
    mr r28, r5
    mr r30, r7
    mr r31, r8
    mr r3, r29
    addi r4, r26, 0x78
    bl fn_80051A88
    cmpwi r3, 0x0
    bne lbl_fn_80058120_00000700
    li r3, 0x0
    b lbl_fn_80058120_000007C4
lbl_fn_80058120_00000700:
    lwz r6, 0x44(r26)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r8, r30
    mr r9, r31
    addi r7, r26, 0x48
    bl fn_80059B5C
    cmpwi cr1, r3, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_80058120_000007C4
    cmpwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_fn_80058120_000007A0
    li r6, 0x0
    blt cr1, lbl_fn_80058120_00000754
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r3, r0
    bgt lbl_fn_80058120_00000754
    li r6, 0x1
lbl_fn_80058120_00000754:
    cmpwi r6, 0x0
    beq lbl_fn_80058120_000007A0
    addi r0, r5, 0x7
    mr r4, r27
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_80058120_000007A0
lbl_fn_80058120_00000774:
    stw r26, 0x38(r4)
    addi r7, r7, 0x8
    stw r26, 0x88(r4)
    stw r26, 0xd8(r4)
    stw r26, 0x128(r4)
    stw r26, 0x178(r4)
    stw r26, 0x1c8(r4)
    stw r26, 0x218(r4)
    stw r26, 0x268(r4)
    addi r4, r4, 0x280
    bdnz lbl_fn_80058120_00000774
lbl_fn_80058120_000007A0:
    mulli r4, r7, 0x50
    subf r0, r7, r3
    add r4, r27, r4
    mtctr r0
    cmpw r7, r3
    bge lbl_fn_80058120_000007C4
lbl_fn_80058120_000007B8:
    stw r26, 0x38(r4)
    addi r4, r4, 0x50
    bdnz lbl_fn_80058120_000007B8
lbl_fn_80058120_000007C4:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005823C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r29, r6
    mr r27, r4
    mr r28, r5
    mr r30, r7
    mr r31, r8
    mr r3, r29
    addi r4, r26, 0x78
    bl fn_80051B70
    cmpwi r3, 0x0
    bne lbl_fn_8005823C_0000081C
    li r3, 0x0
    b lbl_fn_8005823C_000008E0
lbl_fn_8005823C_0000081C:
    lwz r6, 0x44(r26)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r8, r30
    mr r9, r31
    addi r7, r26, 0x48
    bl fn_8005A084
    cmpwi cr1, r3, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_8005823C_000008E0
    cmpwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_fn_8005823C_000008BC
    li r6, 0x0
    blt cr1, lbl_fn_8005823C_00000870
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r3, r0
    bgt lbl_fn_8005823C_00000870
    li r6, 0x1
lbl_fn_8005823C_00000870:
    cmpwi r6, 0x0
    beq lbl_fn_8005823C_000008BC
    addi r0, r5, 0x7
    mr r4, r27
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_8005823C_000008BC
lbl_fn_8005823C_00000890:
    stw r26, 0x38(r4)
    addi r7, r7, 0x8
    stw r26, 0x88(r4)
    stw r26, 0xd8(r4)
    stw r26, 0x128(r4)
    stw r26, 0x178(r4)
    stw r26, 0x1c8(r4)
    stw r26, 0x218(r4)
    stw r26, 0x268(r4)
    addi r4, r4, 0x280
    bdnz lbl_fn_8005823C_00000890
lbl_fn_8005823C_000008BC:
    mulli r4, r7, 0x50
    subf r0, r7, r3
    add r4, r27, r4
    mtctr r0
    cmpw r7, r3
    bge lbl_fn_8005823C_000008E0
lbl_fn_8005823C_000008D4:
    stw r26, 0x38(r4)
    addi r4, r4, 0x50
    bdnz lbl_fn_8005823C_000008D4
lbl_fn_8005823C_000008E0:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80058358(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r29, r6
    mr r27, r4
    mr r28, r5
    mr r30, r7
    mr r31, r8
    mr r3, r29
    addi r4, r26, 0x78
    bl fn_80051C10
    cmpwi r3, 0x0
    bne lbl_fn_80058358_00000938
    li r3, 0x0
    b lbl_fn_80058358_000009FC
lbl_fn_80058358_00000938:
    lwz r6, 0x44(r26)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r8, r30
    mr r9, r31
    addi r7, r26, 0x48
    bl fn_8005A5AC
    cmpwi cr1, r3, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_80058358_000009FC
    cmpwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_fn_80058358_000009D8
    li r6, 0x0
    blt cr1, lbl_fn_80058358_0000098C
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r3, r0
    bgt lbl_fn_80058358_0000098C
    li r6, 0x1
lbl_fn_80058358_0000098C:
    cmpwi r6, 0x0
    beq lbl_fn_80058358_000009D8
    addi r0, r5, 0x7
    mr r4, r27
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_80058358_000009D8
lbl_fn_80058358_000009AC:
    stw r26, 0x38(r4)
    addi r7, r7, 0x8
    stw r26, 0x88(r4)
    stw r26, 0xd8(r4)
    stw r26, 0x128(r4)
    stw r26, 0x178(r4)
    stw r26, 0x1c8(r4)
    stw r26, 0x218(r4)
    stw r26, 0x268(r4)
    addi r4, r4, 0x280
    bdnz lbl_fn_80058358_000009AC
lbl_fn_80058358_000009D8:
    mulli r4, r7, 0x50
    subf r0, r7, r3
    add r4, r27, r4
    mtctr r0
    cmpw r7, r3
    bge lbl_fn_80058358_000009FC
lbl_fn_80058358_000009F0:
    stw r26, 0x38(r4)
    addi r4, r4, 0x50
    bdnz lbl_fn_80058358_000009F0
lbl_fn_80058358_000009FC:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80058474(void)
{
    nofralloc
    lwz r0, 0x44(r3)
    mr r11, r3
    mr r10, r4
    mr r9, r5
    cmpwi r0, 0x0
    mr r0, r6
    mr r8, r7
    beqlr
    lwz r3, lbl_8087EEB0
    mr r4, r11
    lfs f1, lbl_80880960
    mr r5, r10
    mr r6, r9
    mr r7, r0
    b fn_80062908
    blr
}

asm void fn_800584B4(void)
{
    nofralloc
    lwz r7, 0x44(r3)
    mr r8, r4
    mr r9, r5
    mr r10, r6
    lwz r7, 0xc(r7)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    b fn_800584D8
}

asm void fn_800584D8(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x110
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    bl _savegpr_14
    lwz r11, 0xc(r7)
    mr r15, r3
    stw r8, 0x8(r1)
    mr r16, r4
    cmpwi r11, 0x0
    mr r14, r5
    stw r9, 0xc(r1)
    mr r17, r6
    mr r18, r7
    stw r10, 0x10(r1)
    beq lbl_fn_800584D8_00000D64
    lwz r0, 0x8(r11)
    cmpwi r0, 0x0
    beq lbl_fn_800584D8_00000D64
    lfs f31, lbl_80880960
    addi r29, r1, 0x90
    addi r28, r1, 0x44
    addi r27, r1, 0x80
    addi r26, r1, 0x50
    addi r25, r1, 0x2c
    addi r24, r1, 0x74
    addi r23, r1, 0x38
    addi r22, r1, 0x14
    addi r21, r1, 0x68
    addi r20, r1, 0x20
    li r19, 0x0
    li r31, 0x0
    lis r30, 0xcc01
    b lbl_fn_800584D8_00000D54
lbl_fn_800584D8_00000B24:
    lwz r0, 0x8(r3)
    mr r3, r29
    psq_l f1, 0x48(r15), 0, 0
    mr r4, r28
    add r6, r0, r31
    lfsx f30, r31, r0
    lfs f13, 0x4(r6)
    mr r5, r28
    lfs f12, 0x8(r6)
    lfs f11, 0xc(r6)
    lfs f10, 0x10(r6)
    lfs f9, 0x14(r6)
    lfs f8, 0x18(r6)
    lfs f7, 0x1c(r6)
    lfs f0, 0x20(r6)
    psq_l f2, 0x50(r15), 0, 0
    psq_l f3, 0x58(r15), 0, 0
    psq_l f4, 0x60(r15), 0, 0
    psq_l f5, 0x68(r15), 0, 0
    psq_l f6, 0x70(r15), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    fmr f2, f12
    lfs f29, 0xbc(r1)
    lfs f27, 0x9c(r1)
    psq_st f4, 0x18(r29), 0, 0
    lfs f28, 0xac(r1)
    stfs f30, 0x80(r1)
    stfs f13, 0x84(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f12, 0x88(r1)
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f8, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f0, 0x70(r1)
    psq_st f3, 0x10(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    stfs f27, 0x5c(r1)
    stfs f28, 0x60(r1)
    stfs f29, 0x64(r1)
    stfs f31, 0x9c(r1)
    stfs f31, 0xac(r1)
    stfs f31, 0xbc(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F93C0
    frsp f7, f29
    lfs f0, 0x4c(r1)
    frsp f9, f28
    lfs f8, 0x48(r1)
    mr r3, r29
    mr r4, r25
    fadds f10, f7, f0
    lfs f0, 0x44(r1)
    frsp f7, f27
    mr r5, r25
    fadds f8, f9, f8
    stfs f10, 0x58(r1)
    fadds f0, f7, f0
    stfs f8, 0x54(r1)
    fmr f2, f10
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    stfs f2, 0x88(r1)
    lfs f2, 0x7c(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    frsp f7, f29
    lfs f0, 0x34(r1)
    frsp f9, f28
    lfs f8, 0x30(r1)
    mr r3, r29
    mr r4, r22
    fadds f10, f7, f0
    lfs f0, 0x2c(r1)
    frsp f7, f27
    mr r5, r22
    fadds f8, f9, f8
    stfs f10, 0x40(r1)
    fadds f0, f7, f0
    stfs f8, 0x3c(r1)
    fmr f2, f10
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r21), 0, 0
    stfs f2, 0x7c(r1)
    lfs f2, 0x70(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    frsp f7, f29
    lfs f0, 0x1c(r1)
    frsp f9, f28
    lfs f8, 0x18(r1)
    li r3, 0xb0
    li r4, 0x0
    fadds f2, f7, f0
    lfs f0, 0x14(r1)
    frsp f7, f27
    li r5, 0x4
    fadds f8, f9, f8
    stfs f2, 0x28(r1)
    fadds f0, f7, f0
    stfs f8, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x70(r1)
    bl fn_80614790
    lfs f0, 0x80(r1)
    addi r19, r19, 0x1
    stfs f0, -0x8000(r30)
    addi r17, r17, 0x3
    lfs f7, 0x84(r1)
    addi r31, r31, 0x44
    stfs f7, -0x8000(r30)
    lfs f8, 0x88(r1)
    stfs f8, -0x8000(r30)
    lfs f9, 0x74(r1)
    stfs f9, -0x8000(r30)
    lfs f9, 0x78(r1)
    stfs f9, -0x8000(r30)
    lfs f9, 0x7c(r1)
    stfs f9, -0x8000(r30)
    lfs f9, 0x68(r1)
    stfs f9, -0x8000(r30)
    lfs f9, 0x6c(r1)
    stfs f9, -0x8000(r30)
    lfs f9, 0x70(r1)
    stfs f9, -0x8000(r30)
    stfs f0, -0x8000(r30)
    stfs f7, -0x8000(r30)
    stfs f8, -0x8000(r30)
lbl_fn_800584D8_00000D54:
    lwz r3, 0xc(r18)
    lwz r0, 0x4(r3)
    cmplw r19, r0
    blt lbl_fn_800584D8_00000B24
lbl_fn_800584D8_00000D64:
    lwz r7, 0x3c(r18)
    cmpwi r7, 0x0
    beq lbl_fn_800584D8_00000D94
    lwz r8, 0x8(r1)
    mr r3, r15
    lwz r9, 0xc(r1)
    mr r4, r16
    lwz r10, 0x10(r1)
    mr r5, r14
    mr r6, r17
    bl fn_800584D8
    mr r17, r3
lbl_fn_800584D8_00000D94:
    lwz r7, 0x38(r18)
    cmpwi r7, 0x0
    beq lbl_fn_800584D8_00000DC4
    lwz r8, 0x8(r1)
    mr r3, r15
    lwz r9, 0xc(r1)
    mr r4, r16
    lwz r10, 0x10(r1)
    mr r5, r14
    mr r6, r17
    bl fn_800584D8
    mr r17, r3
lbl_fn_800584D8_00000DC4:
    psq_l f31, 0x158(r1), 0, 0
    mr r3, r17
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    addi r11, r1, 0x110
    bl _restgpr_14
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8005886C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lfs f4, 0x1c(r4)
    lfs f1, lbl_80880964
    lfs f0, 0x84(r3)
    fdivs f7, f1, f4
    lfs f6, 0x80(r3)
    lfs f3, 0xc(r4)
    lfs f2, 0x78(r3)
    lfs f1, 0x4(r4)
    lfs f5, 0x7c(r3)
    fdivs f0, f0, f4
    lfs f4, 0x8(r4)
    fctiwz f0, f0
    fsubs f3, f6, f3
    fsubs f1, f2, f1
    stfd f0, 0x28(r1)
    fsubs f4, f5, f4
    fmuls f2, f3, f7
    lwz r4, 0x2c(r1)
    fmuls f3, f1, f7
    addi r0, r4, 0x1
    stfs f2, 0x10(r1)
    fctiwz f0, f2
    fctiwz f1, f3
    stfs f3, 0x8(r1)
    stfd f0, 0x20(r1)
    fmuls f0, f4, f7
    stfd f1, 0x18(r1)
    lwz r4, 0x24(r1)
    lwz r5, 0x1c(r1)
    stfs f0, 0xc(r1)
    stw r5, 0x10(r3)
    stw r4, 0x14(r3)
    stw r0, 0x18(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_800588FC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    addi r3, r3, 0x3c
    bl fn_80472C90
    cmpwi r3, 0x0
    beq lbl_fn_800588FC_00000F80
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r31, 0x78
    lfs f2, 0x8(r3)
    mr r5, r4
    stfs f2, 0x80(r31)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0xc(r3)
    addi r3, r31, 0x48
    stfs f0, 0x84(r31)
    bl fn_805F93C0
    lfs f0, 0x70(r31)
    addi r3, r1, 0x20
    lfs f3, 0x60(r31)
    lfs f4, 0x50(r31)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x6c(r31)
    fmr f30, f1
    lfs f3, 0x5c(r31)
    addi r3, r1, 0x14
    lfs f4, 0x4c(r31)
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    lfs f0, 0x68(r31)
    fmr f31, f1
    lfs f3, 0x58(r31)
    addi r3, r1, 0x8
    lfs f4, 0x48(r31)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9940
    stfs f31, 0x30(r1)
    addi r3, r1, 0x2c
    stfs f1, 0x2c(r1)
    stfs f30, 0x34(r1)
    bl fn_805F9940
    lfs f0, 0x84(r31)
    fmuls f0, f0, f1
    stfs f0, 0x84(r31)
    b lbl_fn_800588FC_00000F94
lbl_fn_800588FC_00000F80:
    lfs f0, lbl_80880960
    stfs f0, 0x78(r31)
    stfs f0, 0x7c(r31)
    stfs f0, 0x80(r31)
    stfs f0, 0x84(r31)
lbl_fn_800588FC_00000F94:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80058A1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807776A0@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, -0x1
    li r5, 0x4
    addi r4, r4, lbl_807776A0@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x0(r3)
    li r4, 0x0
    stw r5, 0x4(r3)
    li r5, 0x14
    stw r6, 0x8(r3)
    stw r6, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    addi r3, r3, 0x28
    bl memset
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_80058A1C_00001030
    mr r4, r30
    bl fn_8004CB70
lbl_fn_80058A1C_00001030:
    lis r3, lbl_80777588@ha
    addi r31, r30, 0x3c
    addi r3, r3, lbl_80777588@l
    stw r3, 0x0(r30)
    mr r3, r31
    bl fn_80473E74
    lwz r0, 0x8(r30)
    lis r3, lbl_8078FC90@ha
    lfs f1, lbl_80880960
    addi r3, r3, lbl_8078FC90@l
    lfs f0, lbl_80880964
    ori r0, r0, 0x4
    li r4, 0x0
    stw r3, 0x0(r31)
    mr r3, r30
    stw r4, 0x44(r30)
    stw r0, 0x8(r30)
    stfs f1, 0x74(r30)
    stfs f1, 0x6c(r30)
    stfs f1, 0x68(r30)
    stfs f1, 0x64(r30)
    stfs f1, 0x60(r30)
    stfs f1, 0x58(r30)
    stfs f1, 0x54(r30)
    stfs f1, 0x50(r30)
    stfs f1, 0x4c(r30)
    stfs f0, 0x70(r30)
    stfs f0, 0x5c(r30)
    stfs f0, 0x48(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058B20(void)
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
    beq lbl_fn_80058B20_000010F8
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_80058B20_000010F8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80058B20_000010F8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058B78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x3c(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    addi r3, r3, 0x3c
    bctrl
    li r0, 0x0
    stw r0, 0x44(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058BBC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80058BBC_00001180
    li r3, 0x0
    b lbl_fn_80058BBC_000011A8
lbl_fn_80058BBC_00001180:
    addi r3, r3, 0x3c
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80058BBC_00001198
    li r3, 0x1
    b lbl_fn_80058BBC_000011A8
lbl_fn_80058BBC_00001198:
    addi r3, r31, 0x3c
    bl fn_80472D64
    stw r3, 0x44(r31)
    li r3, 0x0
lbl_fn_80058BBC_000011A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058C20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r4, r5
    mr r5, r6
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x44(r3)
    mr r3, r31
    bl fn_8005AAD4
    cmpwi cr1, r3, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_80058C20_00001290
    cmpwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_fn_80058C20_0000126C
    li r6, 0x0
    blt cr1, lbl_fn_80058C20_00001220
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r3, r0
    bgt lbl_fn_80058C20_00001220
    li r6, 0x1
lbl_fn_80058C20_00001220:
    cmpwi r6, 0x0
    beq lbl_fn_80058C20_0000126C
    addi r0, r5, 0x7
    mr r4, r31
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_80058C20_0000126C
lbl_fn_80058C20_00001240:
    stw r30, 0x38(r4)
    addi r7, r7, 0x8
    stw r30, 0x88(r4)
    stw r30, 0xd8(r4)
    stw r30, 0x128(r4)
    stw r30, 0x178(r4)
    stw r30, 0x1c8(r4)
    stw r30, 0x218(r4)
    stw r30, 0x268(r4)
    addi r4, r4, 0x280
    bdnz lbl_fn_80058C20_00001240
lbl_fn_80058C20_0000126C:
    mulli r4, r7, 0x50
    subf r0, r7, r3
    add r4, r31, r4
    mtctr r0
    cmpw r7, r3
    bge lbl_fn_80058C20_00001290
lbl_fn_80058C20_00001284:
    stw r30, 0x38(r4)
    addi r4, r4, 0x50
    bdnz lbl_fn_80058C20_00001284
lbl_fn_80058C20_00001290:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058D0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r4, r5
    mr r5, r6
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x44(r3)
    mr r3, r31
    bl fn_8005AD74
    cmpwi cr1, r3, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_80058D0C_0000137C
    cmpwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_fn_80058D0C_00001358
    li r6, 0x0
    blt cr1, lbl_fn_80058D0C_0000130C
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r3, r0
    bgt lbl_fn_80058D0C_0000130C
    li r6, 0x1
lbl_fn_80058D0C_0000130C:
    cmpwi r6, 0x0
    beq lbl_fn_80058D0C_00001358
    addi r0, r5, 0x7
    mr r4, r31
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_80058D0C_00001358
lbl_fn_80058D0C_0000132C:
    stw r30, 0x38(r4)
    addi r7, r7, 0x8
    stw r30, 0x88(r4)
    stw r30, 0xd8(r4)
    stw r30, 0x128(r4)
    stw r30, 0x178(r4)
    stw r30, 0x1c8(r4)
    stw r30, 0x218(r4)
    stw r30, 0x268(r4)
    addi r4, r4, 0x280
    bdnz lbl_fn_80058D0C_0000132C
lbl_fn_80058D0C_00001358:
    mulli r4, r7, 0x50
    subf r0, r7, r3
    add r4, r31, r4
    mtctr r0
    cmpw r7, r3
    bge lbl_fn_80058D0C_0000137C
lbl_fn_80058D0C_00001370:
    stw r30, 0x38(r4)
    addi r4, r4, 0x50
    bdnz lbl_fn_80058D0C_00001370
lbl_fn_80058D0C_0000137C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058DF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r4, r5
    mr r5, r6
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x44(r3)
    mr r3, r31
    bl fn_8005B05C
    cmpwi cr1, r3, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_80058DF8_00001468
    cmpwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_fn_80058DF8_00001444
    li r6, 0x0
    blt cr1, lbl_fn_80058DF8_000013F8
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r3, r0
    bgt lbl_fn_80058DF8_000013F8
    li r6, 0x1
lbl_fn_80058DF8_000013F8:
    cmpwi r6, 0x0
    beq lbl_fn_80058DF8_00001444
    addi r0, r5, 0x7
    mr r4, r31
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_80058DF8_00001444
lbl_fn_80058DF8_00001418:
    stw r30, 0x38(r4)
    addi r7, r7, 0x8
    stw r30, 0x88(r4)
    stw r30, 0xd8(r4)
    stw r30, 0x128(r4)
    stw r30, 0x178(r4)
    stw r30, 0x1c8(r4)
    stw r30, 0x218(r4)
    stw r30, 0x268(r4)
    addi r4, r4, 0x280
    bdnz lbl_fn_80058DF8_00001418
lbl_fn_80058DF8_00001444:
    mulli r4, r7, 0x50
    subf r0, r7, r3
    add r4, r31, r4
    mtctr r0
    cmpw r7, r3
    bge lbl_fn_80058DF8_00001468
lbl_fn_80058DF8_0000145C:
    stw r30, 0x38(r4)
    addi r4, r4, 0x50
    bdnz lbl_fn_80058DF8_0000145C
lbl_fn_80058DF8_00001468:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80058EE4(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    stfd f26, 0x100(r1)
    psq_st f26, 0x108(r1), 0, 0
    stfd f25, 0xf0(r1)
    psq_st f25, 0xf8(r1), 0, 0
    stfd f24, 0xe0(r1)
    psq_st f24, 0xe8(r1), 0, 0
    stfd f23, 0xd0(r1)
    psq_st f23, 0xd8(r1), 0, 0
    stfd f22, 0xc0(r1)
    psq_st f22, 0xc8(r1), 0, 0
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80058EE4_000015D8
    stw r3, 0x0(r4)
    addi r6, r1, 0x74
    addi r7, r1, 0x50
    lfs f10, lbl_80880974
    lwz r8, 0x44(r3)
    lwz r5, 0x14(r8)
    lfs f9, 0x8(r8)
    lfs f26, 0x4(r5)
    lfs f24, 0xc(r8)
    lfs f27, 0x8(r5)
    fadds f11, f26, f9
    lfs f25, 0x10(r8)
    lfs f28, 0xc(r5)
    fadds f8, f27, f24
    stfs f11, 0x74(r1)
    fadds f23, f28, f25
    stfs f8, 0x78(r1)
    fmr f2, f23
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lfs f8, 0x4(r4)
    lwz r5, 0x44(r3)
    stfs f9, 0x5c(r1)
    lwz r3, 0x14(r5)
    lfs f31, 0x8(r5)
    lfs f13, 0x10(r3)
    lfs f30, 0xc(r5)
    lfs f12, 0x14(r3)
    fadds f22, f13, f31
    lfs f29, 0x10(r5)
    lfs f11, 0x18(r3)
    fadds f9, f12, f30
    stfs f22, 0x50(r1)
    fadds f2, f11, f29
    stfs f9, 0x54(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x10(r4), 0, 0
    lfs f9, 0x10(r4)
    stfs f24, 0x60(r1)
    fsubs f8, f9, f8
    stfs f25, 0x64(r1)
    fdivs f8, f8, f10
    stfs f26, 0x68(r1)
    stfs f27, 0x6c(r1)
    stfs f28, 0x70(r1)
    stfs f23, 0x7c(r1)
    stfs f31, 0x38(r1)
    fctiwz f8, f8
    stfs f30, 0x3c(r1)
    stfd f8, 0xb0(r1)
    lwz r3, 0xb4(r1)
    stfs f29, 0x40(r1)
    addi r0, r3, 0x1
    stfs f13, 0x44(r1)
    stfs f12, 0x48(r1)
    stfs f11, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x18(r4)
    stfs f10, 0x1c(r4)
    stw r0, 0x20(r4)
    b lbl_fn_80058EE4_00001718
lbl_fn_80058EE4_000015D8:
    lwz r9, 0x44(r3)
    addi r5, r4, 0x4
    lfs f2, 0xc(r4)
    addi r6, r1, 0xa4
    lwz r3, 0x14(r9)
    addi r8, r4, 0x10
    lfs f29, 0x8(r9)
    addi r7, r1, 0x8c
    lfs f30, 0xc(r9)
    lfs f31, 0x10(r9)
    addi r9, r1, 0x98
    lfs f13, 0x4(r3)
    lfs f12, 0x8(r3)
    lfs f11, 0xc(r3)
    fadds f24, f13, f29
    fadds f23, f12, f30
    psq_l f1, 0x0(r5), 0, 0
    fadds f22, f11, f31
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f2, 0xac(r1)
    lfs f10, 0x10(r3)
    lfs f9, 0x14(r3)
    lfs f8, 0x18(r3)
    fadds f27, f10, f29
    lfs f2, 0x18(r4)
    fadds f26, f9, f30
    fadds f25, f8, f31
    stfs f24, 0x8c(r1)
    psq_lu f0, 0x0(r6), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    lfs f1, 0x8(r6)
    stfs f23, 0x90(r1)
    stfs f22, 0x94(r1)
    stfs f2, 0xa0(r1)
    psq_lu f2, 0x0(r7), 0, 0
    stfs f29, 0x20(r1)
    ps_sub f4, f0, f2
    lfs f3, 0x8(r7)
    stfs f30, 0x24(r1)
    fsub f5, f1, f3
    ps_sel f6, f4, f2, f0
    stfs f31, 0x28(r1)
    stfs f13, 0x2c(r1)
    fsel f7, f5, f3, f1
    stfs f12, 0x30(r1)
    stfs f11, 0x34(r1)
    stfs f29, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f10, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f8, 0x1c(r1)
    stfs f27, 0x80(r1)
    stfs f26, 0x84(r1)
    stfs f25, 0x88(r1)
    psq_stu f6, 0x0(r5), 0, 0
    addi r3, r1, 0x80
    psq_lu f0, 0x0(r9), 0, 0
    stfs f7, 0x8(r5)
    psq_lu f2, 0x0(r3), 0, 0
    lfs f1, 0x8(r9)
    ps_sub f4, f0, f2
    lfs f3, 0x8(r3)
    fsub f5, f1, f3
    ps_sel f6, f4, f0, f2
    fsel f7, f5, f1, f3
    psq_stu f6, 0x0(r8), 0, 0
    lfs f10, lbl_80880974
    stfs f7, 0x8(r8)
    lfs f9, 0x10(r4)
    lfs f8, 0x4(r4)
    stfs f10, 0x1c(r4)
    fsubs f8, f9, f8
    fdivs f8, f8, f10
    fctiwz f8, f8
    stfd f8, 0xb0(r1)
    lwz r3, 0xb4(r1)
    addi r0, r3, 0x1
    stw r0, 0x20(r4)
lbl_fn_80058EE4_00001718:
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    psq_l f26, 0x108(r1), 0, 0
    lfd f26, 0x100(r1)
    psq_l f25, 0xf8(r1), 0, 0
    lfd f25, 0xf0(r1)
    psq_l f24, 0xe8(r1), 0, 0
    lfd f24, 0xe0(r1)
    psq_l f23, 0xd8(r1), 0, 0
    lfd f23, 0xd0(r1)
    psq_l f22, 0xc8(r1), 0, 0
    lfd f22, 0xc0(r1)
    addi r1, r1, 0x160
    blr
}

asm void fn_800591D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r4
    mr r11, r5
    stw r0, 0x14(r1)
    mr r10, r6
    mr r8, r7
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r9, 0x44(r3)
    cmpwi r9, 0x0
    beq lbl_fn_800591D4_000017C8
    lwz r0, 0x14(r9)
    cmpwi r0, 0x0
    beq lbl_fn_800591D4_000017C8
    lwz r3, lbl_8087EEB0
    mr r4, r31
    lfs f1, lbl_80880978
    mr r5, r12
    mr r6, r11
    mr r7, r10
    bl fn_8006297C
lbl_fn_800591D4_000017C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80059240(void)
{
    nofralloc
    lwz r7, 0x44(r3)
    mr r8, r4
    mr r9, r5
    mr r10, r6
    lwz r7, 0x14(r7)
    li r4, 0x0
    li r5, 0x30
    li r6, 0x0
    b fn_80059264
}

asm void fn_80059264(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_19
    lwz r11, lbl_8087EFB4
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    mr r31, r10
    addi r3, r11, 0x204
    addi r4, r7, 0x4
    bl fn_800502A8
    cmpwi r3, 0x0
    bne lbl_fn_80059264_00001854
    mr r3, r27
    b lbl_fn_80059264_00001978
lbl_fn_80059264_00001854:
    lwz r22, 0x3c(r28)
    cmpwi r22, 0x0
    beq lbl_fn_80059264_00001930
    li r21, -0x1
    li r20, 0x0
    lis r23, 0xcc01
    b lbl_fn_80059264_00001924
lbl_fn_80059264_00001870:
    cmpwi r30, 0x0
    lwz r19, 0x0(r22)
    beq lbl_fn_80059264_00001894
    lwz r3, 0x0(r19)
    cmpwi r3, 0x0
    beq lbl_fn_80059264_00001890
    lwz r21, 0x8(r3)
    b lbl_fn_80059264_00001894
lbl_fn_80059264_00001890:
    li r21, -0x1
lbl_fn_80059264_00001894:
    li r3, 0xb0
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    lfs f2, 0x10(r19)
    rotlwi r0, r21, 8
    lfs f1, 0xc(r19)
    addi r27, r27, 0x3
    lfs f0, 0x8(r19)
    addi r22, r22, 0x4
    stfs f0, -0x8000(r23)
    addi r20, r20, 0x1
    stfs f1, -0x8000(r23)
    stfs f2, -0x8000(r23)
    stw r0, -0x8000(r23)
    lfs f2, 0x1c(r19)
    lfs f1, 0x18(r19)
    lfs f0, 0x14(r19)
    stfs f0, -0x8000(r23)
    stfs f1, -0x8000(r23)
    stfs f2, -0x8000(r23)
    stw r0, -0x8000(r23)
    lfs f2, 0x28(r19)
    lfs f1, 0x24(r19)
    lfs f0, 0x20(r19)
    stfs f0, -0x8000(r23)
    stfs f1, -0x8000(r23)
    stfs f2, -0x8000(r23)
    stw r0, -0x8000(r23)
    lfs f2, 0x10(r19)
    lfs f1, 0xc(r19)
    lfs f0, 0x8(r19)
    stfs f0, -0x8000(r23)
    stfs f1, -0x8000(r23)
    stfs f2, -0x8000(r23)
    stw r0, -0x8000(r23)
lbl_fn_80059264_00001924:
    lwz r0, 0x0(r28)
    cmpw r20, r0
    blt lbl_fn_80059264_00001870
lbl_fn_80059264_00001930:
    li r19, 0x0
lbl_fn_80059264_00001934:
    lwz r7, 0x1c(r28)
    cmpwi r7, 0x0
    beq lbl_fn_80059264_00001964
    mr r3, r24
    mr r4, r25
    mr r5, r26
    mr r6, r27
    mr r8, r29
    mr r9, r30
    mr r10, r31
    bl fn_80059264
    mr r27, r3
lbl_fn_80059264_00001964:
    addi r19, r19, 0x1
    addi r28, r28, 0x4
    cmpwi r19, 0x8
    blt lbl_fn_80059264_00001934
    mr r3, r27
lbl_fn_80059264_00001978:
    addi r11, r1, 0x40
    bl _restgpr_19
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800593F4(void)
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
    beq lbl_fn_800593F4_000019E8
    beq lbl_fn_800593F4_000019D8
    lis r4, lbl_807776A0@ha
    addi r4, r4, lbl_807776A0@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_800593F4_000019D8
    mr r4, r30
    bl fn_8004CBB0
lbl_fn_800593F4_000019D8:
    cmpwi r31, 0x0
    ble lbl_fn_800593F4_000019E8
    mr r3, r30
    bl dtor_80084684
lbl_fn_800593F4_000019E8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80059468(void)
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
    beq lbl_fn_80059468_00001A5C
    beq lbl_fn_80059468_00001A4C
    lis r4, lbl_807776A0@ha
    addi r4, r4, lbl_807776A0@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_80059468_00001A4C
    mr r4, r30
    bl fn_8004CBB0
lbl_fn_80059468_00001A4C:
    cmpwi r31, 0x0
    ble lbl_fn_80059468_00001A5C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80059468_00001A5C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800594DC(void)
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
    beq lbl_fn_800594DC_00001AD0
    beq lbl_fn_800594DC_00001AC0
    lis r4, lbl_807776A0@ha
    addi r4, r4, lbl_807776A0@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_800594DC_00001AC0
    mr r4, r30
    bl fn_8004CBB0
lbl_fn_800594DC_00001AC0:
    cmpwi r31, 0x0
    ble lbl_fn_800594DC_00001AD0
    mr r3, r30
    bl dtor_80084684
lbl_fn_800594DC_00001AD0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80059550(void)
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
    beq lbl_fn_80059550_00001B58
    addic. r3, r3, 0x3c
    beq lbl_fn_80059550_00001B20
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80059550_00001B20:
    cmpwi r30, 0x0
    beq lbl_fn_80059550_00001B48
    lis r3, lbl_807776A0@ha
    addi r3, r3, lbl_807776A0@l
    stw r3, 0x0(r30)
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_80059550_00001B48
    mr r4, r30
    bl fn_8004CBB0
lbl_fn_80059550_00001B48:
    cmpwi r31, 0x0
    ble lbl_fn_80059550_00001B58
    mr r3, r30
    bl dtor_80084684
lbl_fn_80059550_00001B58:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800595D8(void)
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
    beq lbl_fn_800595D8_00001BE0
    addic. r3, r3, 0x3c
    beq lbl_fn_800595D8_00001BA8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800595D8_00001BA8:
    cmpwi r30, 0x0
    beq lbl_fn_800595D8_00001BD0
    lis r3, lbl_807776A0@ha
    addi r3, r3, lbl_807776A0@l
    stw r3, 0x0(r30)
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_800595D8_00001BD0
    mr r4, r30
    bl fn_8004CBB0
lbl_fn_800595D8_00001BD0:
    cmpwi r31, 0x0
    ble lbl_fn_800595D8_00001BE0
    mr r3, r30
    bl dtor_80084684
lbl_fn_800595D8_00001BE0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80059660(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    fmr f31, f1
    stmw r20, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r20, r5
    mr r21, r6
    mr r22, r7
    mr r23, r9
    mr r24, r10
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80059660_00001C58
    mr r4, r20
    mr r5, r8
    bl fn_800523A0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80059660_00001D08
lbl_fn_80059660_00001C58:
    mr r3, r20
    mr r4, r8
    bl fn_80051A88
    cmpwi r3, 0x0
    bne lbl_fn_80059660_00001C74
    li r3, 0x0
    b lbl_fn_80059660_00001D08
lbl_fn_80059660_00001C74:
    li r28, 0x0
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80059660_00001CF8
lbl_fn_80059660_00001C84:
    lwz r0, 0x8(r21)
    add r26, r0, r29
    lwz r25, 0x40(r26)
    lwz r0, 0x4(r25)
    and. r0, r23, r0
    bne lbl_fn_80059660_00001CF0
    cmpwi r24, 0x0
    blt lbl_fn_80059660_00001CB0
    lwz r0, 0x0(r25)
    cmplw r24, r0
    bne lbl_fn_80059660_00001CF0
lbl_fn_80059660_00001CB0:
    fmr f1, f31
    mr r3, r30
    mr r4, r20
    mr r5, r26
    mr r6, r22
    bl fn_8005339C
    cmpwi r3, 0x0
    beq lbl_fn_80059660_00001CF0
    stw r25, 0x34(r30)
    addi r28, r28, 0x1
    cmpw r28, r31
    stw r26, 0x40(r30)
    blt lbl_fn_80059660_00001CEC
    mr r3, r28
    b lbl_fn_80059660_00001D08
lbl_fn_80059660_00001CEC:
    addi r30, r30, 0x50
lbl_fn_80059660_00001CF0:
    addi r29, r29, 0x44
    addi r27, r27, 0x1
lbl_fn_80059660_00001CF8:
    lwz r0, 0x4(r21)
    cmplw r27, r0
    blt lbl_fn_80059660_00001C84
    mr r3, r28
lbl_fn_80059660_00001D08:
    lfd f31, 0x38(r1)
    lmw r20, 0x8(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80059784(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x8(r6)
    fmr f30, f1
    mr r26, r3
    mr r27, r4
    cmpwi r0, 0x0
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r14, r9
    mr r31, r10
    bne lbl_fn_80059784_00001D8C
    mr r4, r28
    mr r5, r8
    bl fn_8005361C
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80059784_00001FB4
lbl_fn_80059784_00001D8C:
    mr r3, r28
    mr r4, r8
    bl fn_80051B70
    cmpwi r3, 0x0
    bne lbl_fn_80059784_00001DA8
    li r3, 0x0
    b lbl_fn_80059784_00001FB4
lbl_fn_80059784_00001DA8:
    lis r18, lbl_807C6BC8@ha
    lfs f31, lbl_80880980
    addi r18, r18, lbl_807C6BC8@l
    addi r17, r1, 0x14
    addi r19, r1, 0x20
    addi r20, r1, 0x2c
    addi r21, r1, 0x38
    addi r22, r1, 0x48
    addi r23, r1, 0x8
    li r16, 0x0
    li r15, 0x0
    li r25, 0x0
    b lbl_fn_80059784_00001FA4
lbl_fn_80059784_00001DDC:
    lbz r0, lbl_8087EEA0
    lwz r3, 0x8(r29)
    extsb. r0, r0
    add r24, r3, r25
    bne lbl_fn_80059784_00001DF8
    li r0, 0x1
    stb r0, lbl_8087EEA0
lbl_fn_80059784_00001DF8:
    psq_l f1, 0x0(r24), 0, 0
    mr r3, r30
    lfs f2, 0x8(r24)
    mr r4, r17
    stfs f2, 0x1c(r1)
    mr r5, r17
    psq_st f1, 0x0(r17), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r17), 0, 0
    mr r3, r30
    lfs f2, 0x1c(r1)
    mr r4, r19
    psq_st f1, 0x0(r18), 0, 0
    mr r5, r19
    stfs f2, 0x8(r18)
    psq_l f1, 0xc(r24), 0, 0
    lfs f2, 0x14(r24)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r19), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r19), 0, 0
    mr r3, r30
    lfs f2, 0x28(r1)
    mr r4, r20
    psq_st f1, 0xc(r18), 0, 0
    mr r5, r20
    stfs f2, 0x14(r18)
    psq_l f1, 0x18(r24), 0, 0
    lfs f2, 0x20(r24)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r20), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r20), 0, 0
    mr r3, r30
    lfs f2, 0x34(r1)
    mr r4, r21
    psq_st f1, 0x18(r18), 0, 0
    mr r5, r21
    stfs f2, 0x20(r18)
    psq_l f1, 0x30(r24), 0, 0
    lfs f2, 0x38(r24)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r21), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r21), 0, 0
    mr r3, r22
    lfs f2, 0x40(r1)
    mr r4, r23
    psq_st f1, 0x30(r18), 0, 0
    mr r5, r23
    stfs f2, 0x38(r18)
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f6, 0x28(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    stfs f31, 0x54(r1)
    stfs f31, 0x64(r1)
    stfs f31, 0x74(r1)
    psq_l f1, 0x24(r24), 0, 0
    lfs f2, 0x2c(r24)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r23), 0, 0
    bl fn_805F93C0
    mr r3, r23
    mr r4, r23
    bl fn_805F98D0
    psq_l f1, 0x0(r23), 0, 0
    lfs f2, 0x10(r1)
    psq_st f1, 0x24(r18), 0, 0
    stfs f2, 0x2c(r18)
    lfs f0, 0x3c(r24)
    fmuls f0, f0, f30
    stfs f0, 0x3c(r18)
    lwz r0, 0x8(r29)
    add r3, r0, r25
    lwz r24, 0x40(r3)
    lwz r0, 0x4(r24)
    and. r0, r14, r0
    bne lbl_fn_80059784_00001F9C
    cmpwi r31, 0x0
    blt lbl_fn_80059784_00001F68
    lwz r0, 0x0(r24)
    cmplw r31, r0
    bne lbl_fn_80059784_00001F9C
lbl_fn_80059784_00001F68:
    mr r3, r26
    mr r4, r28
    mr r5, r18
    bl fn_80054038
    cmpwi r3, 0x0
    beq lbl_fn_80059784_00001F9C
    addi r16, r16, 0x1
    stw r24, 0x34(r26)
    cmpw r16, r27
    blt lbl_fn_80059784_00001F98
    mr r3, r16
    b lbl_fn_80059784_00001FB4
lbl_fn_80059784_00001F98:
    addi r26, r26, 0x50
lbl_fn_80059784_00001F9C:
    addi r15, r15, 0x1
    addi r25, r25, 0x44
lbl_fn_80059784_00001FA4:
    lwz r0, 0x4(r29)
    cmplw r15, r0
    blt lbl_fn_80059784_00001DDC
    mr r3, r16
lbl_fn_80059784_00001FB4:
    addi r11, r1, 0xc0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    bl _restgpr_14
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80059A40(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    fmr f31, f1
    stmw r21, 0xc(r1)
    mr r21, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r9
    mr r27, r10
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80059A40_00002038
    mr r4, r23
    mr r5, r8
    bl fn_800551BC
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80059A40_000020E0
lbl_fn_80059A40_00002038:
    mr r3, r23
    mr r4, r8
    bl fn_80051C10
    cmpwi r3, 0x0
    bne lbl_fn_80059A40_00002054
    li r3, 0x0
    b lbl_fn_80059A40_000020E0
lbl_fn_80059A40_00002054:
    li r30, 0x0
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_80059A40_000020D0
lbl_fn_80059A40_00002064:
    lwz r0, 0x8(r24)
    add r5, r0, r31
    lwz r28, 0x40(r5)
    lwz r0, 0x4(r28)
    and. r0, r26, r0
    bne lbl_fn_80059A40_000020C8
    cmpwi r27, 0x0
    blt lbl_fn_80059A40_00002090
    lwz r0, 0x0(r28)
    cmplw r27, r0
    bne lbl_fn_80059A40_000020C8
lbl_fn_80059A40_00002090:
    fmr f1, f31
    mr r3, r21
    mr r4, r23
    mr r6, r25
    bl fn_80056AE8
    cmpwi r3, 0x0
    beq lbl_fn_80059A40_000020C8
    addi r30, r30, 0x1
    stw r28, 0x34(r21)
    cmpw r30, r22
    blt lbl_fn_80059A40_000020C4
    mr r3, r30
    b lbl_fn_80059A40_000020E0
lbl_fn_80059A40_000020C4:
    addi r21, r21, 0x50
lbl_fn_80059A40_000020C8:
    addi r31, r31, 0x44
    addi r29, r29, 0x1
lbl_fn_80059A40_000020D0:
    lwz r0, 0x4(r24)
    cmplw r29, r0
    blt lbl_fn_80059A40_00002064
    mr r3, r30
lbl_fn_80059A40_000020E0:
    lfd f31, 0x38(r1)
    lmw r21, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
