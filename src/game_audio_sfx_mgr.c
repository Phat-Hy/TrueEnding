#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80062C8C(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80097E80(void);
extern void fn_800C344C(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_8012D8B8(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80148990(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8015AC48(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_8016F3D0(void);
extern void fn_80178A6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80312EF8(void);
extern void fn_803132D0(void);
extern void fn_803C11A4(void);
extern void fn_803C1560(void);
extern void fn_803CD958(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_805A3C58(void);
extern void fn_805A3D00(void);
extern void fn_805A3D6C(void);
extern void fn_805A4984(void);
extern void fn_805A4F20(void);
extern void fn_805A5224(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80788378[];
extern u8 lbl_807490AC[];
extern u8 lbl_80749250[];
extern u8 lbl_80749264[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807883D0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884C5C;
extern u32 lbl_80884C64;
extern u32 lbl_80884C9C;
extern u32 lbl_80884CA0;
extern u32 lbl_80884CA4;
extern u32 lbl_80884CA8;
extern u32 lbl_80884CAC;
extern u32 lbl_80884CB0;
extern u32 lbl_80884CB4;
extern u32 lbl_80884CB8;
extern u32 lbl_80884CBC;
extern u32 lbl_80884CC0;

/* Function declarations */
void fn_8030FEAC(void);
void fn_8030FFF0(void);
void fn_80310084(void);
void fn_80310098(void);
void fn_80310314(void);
void fn_80310330(void);
void fn_80310458(void);
void fn_803104D4(void);
void fn_80310C64(void);
void fn_80310EF8(void);
void fn_80311090(void);
void fn_80311130(void);
void fn_803111AC(void);
void fn_8031131C(void);
void fn_80311364(void);

asm void fn_8030FEAC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f1
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r4, lbl_8087F8A0
    lwz r30, 0x48(r4)
    b lbl_fn_8030FEAC_0000009C
lbl_fn_8030FEAC_00000038:
    mr r3, r29
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_8030FEAC_00000098
    lfs f1, 0x530(r30)
    addi r3, r1, 0x14
    lfs f0, 0x530(r29)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r29)
    lfs f1, 0x528(r30)
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_8030FEAC_00000098
    addi r31, r31, 0x1
lbl_fn_8030FEAC_00000098:
    lwz r30, 0x14ac(r30)
lbl_fn_8030FEAC_0000009C:
    cmpwi r30, 0x0
    bne lbl_fn_8030FEAC_00000038
    lwz r3, lbl_8087F408
    lwz r30, 0x48(r3)
    b lbl_fn_8030FEAC_00000114
lbl_fn_8030FEAC_000000B0:
    mr r3, r29
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_8030FEAC_00000110
    lfs f1, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x530(r29)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r29)
    lfs f1, 0x528(r30)
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_8030FEAC_00000110
    addi r31, r31, 0x1
lbl_fn_8030FEAC_00000110:
    lwz r30, 0x14ac(r30)
lbl_fn_8030FEAC_00000114:
    cmpwi r30, 0x0
    bne lbl_fn_8030FEAC_000000B0
    psq_l f31, 0x38(r1), 0, 0
    mr r3, r31
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8030FFF0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    bl fn_80232B7C
    lfs f0, lbl_80884C5C
    li r3, -0x1
    lfs f1, lbl_80884C64
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x158c
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80310084(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087F3C0
    li r5, 0x1
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80310098(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_27
    lis r6, lbl_807490AC@ha
    lwz r5, 0x58(r3)
    addi r6, r6, lbl_807490AC@l
    mr r27, r3
    mr r28, r4
    addi r3, r1, 0x8
    addi r4, r6, 0x13c
    crclr 6
    bl sprintf
    lwz r0, 0x54(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80310098_0000025C
    cmpwi r28, 0x0
    beq lbl_fn_80310098_0000025C
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80310098_0000025C
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0x54(r27)
    mr r29, r3
    b lbl_fn_80310098_00000260
lbl_fn_80310098_0000025C:
    li r29, 0x0
lbl_fn_80310098_00000260:
    mr r3, r27
    mr r4, r29
    bl fn_805A5224
    lis r30, lbl_807490AC@ha
    lfs f1, lbl_80884C5C
    addi r30, r30, lbl_807490AC@l
    lfs f2, lbl_80884C9C
    lfs f3, lbl_80884C64
    mr r3, r29
    addi r4, r30, 0x7c
    addi r5, r27, 0x14e4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884C5C
    mr r3, r29
    lfs f2, lbl_80884C9C
    addi r4, r30, 0x87
    lfs f3, lbl_80884C64
    addi r5, r27, 0x14e8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0x94
    addi r5, r27, 0x1570
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0xa7
    addi r5, r27, 0x1574
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0xb6
    addi r5, r27, 0x1578
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0xc5
    addi r5, r27, 0x157c
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x153
    bl fn_8008937C
    lis r31, 0x2
    mr r28, r3
    addi r4, r30, 0x15e
    addi r5, r27, 0x14ec
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x166
    addi r5, r27, 0x14f4
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x16f
    bl fn_8008937C
    mr r28, r3
    addi r4, r30, 0x15e
    addi r5, r27, 0x14fc
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x166
    addi r5, r27, 0x1504
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x17a
    bl fn_8008937C
    addi r4, r30, 0x15e
    addi r5, r27, 0x150c
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x184
    bl fn_8008937C
    addi r4, r30, 0x15e
    addi r5, r27, 0x151c
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    addi r11, r1, 0x120
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80310314(void)
{
    nofralloc
    slwi r0, r4, 2
    la r4, lbl_80884CA0
    lwzx r4, r4, r0
    li r6, 0x0
    lfs f1, lbl_80884CA4
    li r7, -0x1
    b fn_800C344C
}

asm void fn_80310330(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stw r31, 0x20c(r1)
    mr r31, r5
    stw r30, 0x208(r1)
    mr r30, r3
    bl fn_805A3C58
    lis r3, lbl_807883D0@ha
    lfs f1, lbl_80884CA8
    addi r3, r3, lbl_807883D0@l
    stw r3, 0x0(r30)
    lfs f0, lbl_80884CAC
    li r7, 0x0
    lfs f2, 0x14(r31)
    li r6, 0x1
    li r0, -0x1
    stfs f2, 0x14d8(r30)
    mr r3, r30
    addi r4, r1, 0x108
    stfs f1, 0x14d4(r30)
    addi r5, r31, 0x2c
    stfs f1, 0x14dc(r30)
    stfs f0, 0x14e0(r30)
    stw r7, 0x14e4(r30)
    stw r7, 0x14ec(r30)
    stw r7, 0x14f0(r30)
    stw r7, 0x14f4(r30)
    stw r7, 0x14f8(r30)
    stfs f1, 0x14fc(r30)
    stfs f1, 0x1500(r30)
    stfs f1, 0x1504(r30)
    stfs f1, 0x1508(r30)
    stw r7, 0x150c(r30)
    stw r7, 0x1510(r30)
    stw r7, 0x1514(r30)
    stw r7, 0x1518(r30)
    stw r7, 0x151c(r30)
    stw r6, 0x15a0(r30)
    stw r7, 0x15a4(r30)
    stw r7, 0x15a8(r30)
    stw r7, 0x15ac(r30)
    stw r0, 0x15b0(r30)
    stw r7, 0x15b4(r30)
    stw r7, 0x15b8(r30)
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_80310330_00000560
    lis r4, lbl_80749264@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80749264@l
    addi r5, r1, 0x108
    crclr 6
    bl sprintf
    b lbl_fn_80310330_00000578
lbl_fn_80310330_00000560:
    lis r4, lbl_80749264@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80749264@l
    addi r4, r4, 0x1c
    crclr 6
    bl sprintf
lbl_fn_80310330_00000578:
    lwz r12, 0x14b4(r30)
    addi r3, r30, 0x14b4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r30
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80310458(void)
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
    beq lbl_fn_80310458_0000060C
    addic. r0, r3, 0x1510
    beq lbl_fn_80310458_000005F0
    lwz r3, 0x1518(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80310458_000005F0
    beq lbl_fn_80310458_000005F0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80310458_000005F0:
    mr r3, r30
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r31, 0x0
    ble lbl_fn_80310458_0000060C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80310458_0000060C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803104D4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_24
    mr r25, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_803104D4_00000654
    li r3, 0x0
    b lbl_fn_803104D4_00000DA0
lbl_fn_803104D4_00000654:
    lwz r3, 0x1438(r25)
    cmpwi r3, 0x0
    beq lbl_fn_803104D4_00000678
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803104D4_00000678
    li r3, 0x0
    b lbl_fn_803104D4_00000DA0
lbl_fn_803104D4_00000678:
    addi r3, r25, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803104D4_00000690
    li r3, 0x0
    b lbl_fn_803104D4_00000DA0
lbl_fn_803104D4_00000690:
    addi r3, r25, 0x14b4
    bl fn_8047059C
    mr r26, r3
    addi r3, r25, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_80310C64
    lwz r3, 0x1438(r25)
    cmpwi r3, 0x0
    beq lbl_fn_803104D4_000006D8
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r25)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803104D4_000006D8:
    addi r3, r25, 0x14b4
    bl fn_8047059C
    mr r26, r3
    addi r3, r25, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_80310C64
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803104D4_00000724
    lwz r28, 0x10d8(r3)
    b lbl_fn_803104D4_00000728
lbl_fn_803104D4_00000724:
    li r28, 0x0
lbl_fn_803104D4_00000728:
    cmpwi r28, 0x0
    beq lbl_fn_803104D4_00000940
    lwz r7, 0xd04(r25)
    mr r3, r28
    lfs f1, lbl_80884CB0
    addi r4, r25, 0x528
    li r5, 0x0
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    cmpwi r3, 0x0
    ble lbl_fn_803104D4_00000940
    lwz r0, 0x151c(r25)
    subi r4, r3, 0x1
    mulli r4, r4, 0x30
    lwz r5, 0x9c(r28)
    slwi r0, r0, 2
    lwz r30, 0x74(r28)
    add r0, r25, r0
    addic. r6, r0, 0x1520
    add r0, r5, r4
    beq lbl_fn_803104D4_00000784
    stw r0, 0x0(r6)
lbl_fn_803104D4_00000784:
    lwz r4, 0x151c(r25)
    subi r0, r3, 0x1
    slwi r29, r0, 3
    li r31, 0x1
    addi r0, r4, 0x1
    stw r0, 0x151c(r25)
    b lbl_fn_803104D4_00000800
lbl_fn_803104D4_000007A0:
    lwz r0, 0x151c(r25)
    cmplwi r0, 0x20
    bge lbl_fn_803104D4_00000808
    lwz r0, 0xa4(r28)
    subi r4, r31, 0x1
    add r3, r0, r29
    bl fn_803CD958
    clrlwi r0, r3, 16
    cmpw r31, r0
    bne lbl_fn_803104D4_000007FC
    lwz r0, 0x151c(r25)
    subi r3, r31, 0x1
    mulli r3, r3, 0x30
    lwz r4, 0x9c(r28)
    slwi r0, r0, 2
    add r0, r25, r0
    addic. r5, r0, 0x1520
    add r0, r4, r3
    beq lbl_fn_803104D4_000007F0
    stw r0, 0x0(r5)
lbl_fn_803104D4_000007F0:
    lwz r3, 0x151c(r25)
    addi r0, r3, 0x1
    stw r0, 0x151c(r25)
lbl_fn_803104D4_000007FC:
    addi r31, r31, 0x1
lbl_fn_803104D4_00000800:
    cmpw r31, r30
    ble lbl_fn_803104D4_000007A0
lbl_fn_803104D4_00000808:
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r29, r25
    li r31, 0x0
    b lbl_fn_803104D4_000008E0
lbl_fn_803104D4_0000081C:
    lwz r27, 0x1520(r29)
    li r26, 0x1
    b lbl_fn_803104D4_000008D0
lbl_fn_803104D4_00000828:
    lwz r0, 0x8(r1)
    cmplwi r0, 0x20
    bge lbl_fn_803104D4_000008D8
    subi r0, r26, 0x1
    lwz r3, 0x9c(r28)
    mulli r0, r0, 0x30
    lwz r5, 0x151c(r25)
    mr r4, r25
    li r6, 0x0
    add r24, r3, r0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_803104D4_00000878
lbl_fn_803104D4_0000085C:
    lwz r0, 0x1520(r4)
    cmplw r0, r24
    bne lbl_fn_803104D4_00000870
    li r6, 0x1
    b lbl_fn_803104D4_00000878
lbl_fn_803104D4_00000870:
    addi r4, r4, 0x4
    bdnz lbl_fn_803104D4_0000085C
lbl_fn_803104D4_00000878:
    cmpwi r6, 0x0
    bne lbl_fn_803104D4_000008CC
    lwz r3, 0x10(r27)
    subi r4, r26, 0x1
    lwz r5, 0xa4(r28)
    subi r0, r3, 0x1
    slwi r0, r0, 3
    add r3, r5, r0
    bl fn_803CD958
    clrlwi r0, r3, 16
    cmpw r26, r0
    bne lbl_fn_803104D4_000008CC
    lwz r0, 0x8(r1)
    addi r3, r1, 0xc
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_803104D4_000008C0
    stw r24, 0x0(r3)
lbl_fn_803104D4_000008C0:
    lwz r3, 0x8(r1)
    addi r0, r3, 0x1
    stw r0, 0x8(r1)
lbl_fn_803104D4_000008CC:
    addi r26, r26, 0x1
lbl_fn_803104D4_000008D0:
    cmpw r26, r30
    blt lbl_fn_803104D4_00000828
lbl_fn_803104D4_000008D8:
    addi r29, r29, 0x4
    addi r31, r31, 0x1
lbl_fn_803104D4_000008E0:
    lwz r0, 0x151c(r25)
    cmplw r31, r0
    blt lbl_fn_803104D4_0000081C
    addi r4, r1, 0xc
    li r5, 0x0
    b lbl_fn_803104D4_00000934
lbl_fn_803104D4_000008F8:
    lwz r0, 0x151c(r25)
    cmplwi r0, 0x20
    bge lbl_fn_803104D4_00000940
    lwz r0, 0x151c(r25)
    slwi r0, r0, 2
    add r0, r25, r0
    addic. r3, r0, 0x1520
    beq lbl_fn_803104D4_00000920
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
lbl_fn_803104D4_00000920:
    lwz r3, 0x151c(r25)
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    addi r0, r3, 0x1
    stw r0, 0x151c(r25)
lbl_fn_803104D4_00000934:
    lwz r0, 0x8(r1)
    cmplw r5, r0
    blt lbl_fn_803104D4_000008F8
lbl_fn_803104D4_00000940:
    lwz r4, 0x7ec(r25)
    li r26, 0x0
    lwz r0, 0x14a8(r25)
    mr r3, r25
    ori r4, r4, 0x1c0
    stw r26, 0x1454(r25)
    oris r4, r4, 0x1
    rlwinm r0, r0, 0, 6, 4
    ori r4, r4, 0xc010
    stw r0, 0x14a8(r25)
    oris r0, r4, 0x200
    stw r0, 0x7ec(r25)
    lwz r12, 0x0(r25)
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x624(r25)
    cmpwi r0, 0x0
    beq lbl_fn_803104D4_00000D9C
    lwz r3, 0x1518(r25)
    stw r26, 0x1510(r25)
    cmpwi r3, 0x0
    stw r26, 0x1514(r25)
    beq lbl_fn_803104D4_000009B4
    beq lbl_fn_803104D4_000009AC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803104D4_000009AC:
    li r0, 0x0
    stw r0, 0x1518(r25)
lbl_fn_803104D4_000009B4:
    li r28, 0x0
    li r26, 0x0
    lis r31, fn_80148990@ha
    li r30, 0x8
    b lbl_fn_803104D4_00000D64
lbl_fn_803104D4_000009C8:
    lwz r0, 0x1518(r25)
    lwz r3, 0x62c(r25)
    cmpwi r0, 0x0
    add r29, r3, r26
    beq lbl_fn_803104D4_000009E8
    lwz r0, 0x1514(r25)
    cmpwi r0, 0x0
    bne lbl_fn_803104D4_00000B80
lbl_fn_803104D4_000009E8:
    lwz r0, 0x1514(r25)
    cmplwi r0, 0x8
    bgt lbl_fn_803104D4_00000D24
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x1518(r25)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_803104D4_00000B74
    lwz r0, 0x1510(r25)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_803104D4_00000A44
    mr r5, r0
lbl_fn_803104D4_00000A44:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_803104D4_00000B60
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_803104D4_00000B28
lbl_fn_803104D4_00000A5C:
    lwz r0, 0x1518(r25)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r25)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r25)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r25)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_803104D4_00000A5C
    andi. r5, r5, 0x3
    beq lbl_fn_803104D4_00000B60
lbl_fn_803104D4_00000B28:
    mtctr r5
lbl_fn_803104D4_00000B2C:
    lwz r0, 0x1518(r25)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_803104D4_00000B2C
lbl_fn_803104D4_00000B60:
    lwz r3, 0x1518(r25)
    cmpwi r3, 0x0
    beq lbl_fn_803104D4_00000B74
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803104D4_00000B74:
    stw r24, 0x1518(r25)
    stw r30, 0x1514(r25)
    b lbl_fn_803104D4_00000D24
lbl_fn_803104D4_00000B80:
    lwz r3, 0x1510(r25)
    cmplw r3, r0
    blt lbl_fn_803104D4_00000D24
    slwi r27, r3, 1
    cmplw r0, r27
    bgt lbl_fn_803104D4_00000D24
    mulli r3, r27, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r27
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x1518(r25)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_803104D4_00000D1C
    lwz r0, 0x1510(r25)
    mr r5, r27
    cmplw r27, r0
    ble lbl_fn_803104D4_00000BEC
    mr r5, r0
lbl_fn_803104D4_00000BEC:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_803104D4_00000D08
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_803104D4_00000CD0
lbl_fn_803104D4_00000C04:
    lwz r0, 0x1518(r25)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r25)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r25)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r25)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_803104D4_00000C04
    andi. r5, r5, 0x3
    beq lbl_fn_803104D4_00000D08
lbl_fn_803104D4_00000CD0:
    mtctr r5
lbl_fn_803104D4_00000CD4:
    lwz r0, 0x1518(r25)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_803104D4_00000CD4
lbl_fn_803104D4_00000D08:
    lwz r3, 0x1518(r25)
    cmpwi r3, 0x0
    beq lbl_fn_803104D4_00000D1C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803104D4_00000D1C:
    stw r24, 0x1518(r25)
    stw r27, 0x1514(r25)
lbl_fn_803104D4_00000D24:
    lwz r0, 0x1510(r25)
    addi r28, r28, 0x1
    lwz r4, 0x1518(r25)
    addi r26, r26, 0x14
    mulli r3, r0, 0x14
    lwz r0, 0x0(r29)
    stwux r0, r3, r4
    lfs f2, 0xc(r29)
    psq_l f1, 0x4(r29), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lfs f0, 0x10(r29)
    stfs f0, 0x10(r3)
    lwz r3, 0x1510(r25)
    addi r0, r3, 0x1
    stw r0, 0x1510(r25)
lbl_fn_803104D4_00000D64:
    lwz r0, 0x624(r25)
    cmplw r28, r0
    blt lbl_fn_803104D4_000009C8
    lwz r3, 0x62c(r25)
    li r0, 0x0
    stw r0, 0x624(r25)
    cmpwi r3, 0x0
    stw r0, 0x628(r25)
    beq lbl_fn_803104D4_00000D9C
    beq lbl_fn_803104D4_00000D94
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803104D4_00000D94:
    li r0, 0x0
    stw r0, 0x62c(r25)
lbl_fn_803104D4_00000D9C:
    li r3, 0x1
lbl_fn_803104D4_00000DA0:
    addi r11, r1, 0xb0
    bl _restgpr_24
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80310C64(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r31, 0x64c(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x648(r1)
    mr r30, r5
    li r5, 0x400
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r1, 0x18
    stw r6, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_80749264@ha
    addi r31, r31, lbl_80749264@l
lbl_fn_80310C64_00000E58:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0x48
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000E88
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14ec(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000E88:
    mr r3, r30
    addi r4, r31, 0x50
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000EB0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f0(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000EB0:
    mr r3, r30
    addi r4, r31, 0x5e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000ED8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f4(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000ED8:
    mr r3, r30
    addi r4, r31, 0x6f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000F00
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f8(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000F00:
    mr r3, r30
    addi r4, r31, 0x82
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000F28
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14fc(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000F28:
    mr r3, r30
    addi r4, r31, 0x8f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000F50
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1500(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000F50:
    mr r3, r30
    addi r4, r31, 0x9e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000F78
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1504(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000F78:
    mr r3, r30
    addi r4, r31, 0xab
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000FA0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1508(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000FA0:
    mr r3, r30
    addi r4, r31, 0xb9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000FD4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x15a0(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000FD4:
    mr r3, r30
    addi r4, r31, 0xc8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000FFC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x15ac(r29)
    b lbl_fn_80310C64_00001020
lbl_fn_80310C64_00000FFC:
    mr r3, r30
    addi r4, r31, 0xcf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00001020
    mr r3, r29
    addi r4, r29, 0x15b0
    addi r5, r1, 0x8
    bl fn_805A4984
lbl_fn_80310C64_00001020:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80310C64_00000E58
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80310EF8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    bl fn_80312EF8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80310EF8_000010A4
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_80310EF8_000010A4
    mr r3, r31
    bl fn_80145334
lbl_fn_80310EF8_000010A4:
    lfs f2, 0x530(r31)
    lis r3, lbl_80749264@ha
    addi r3, r3, lbl_80749264@l
    addi r5, r1, 0x8
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r3, 0xdf
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f2, 0x10(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80310EF8_000010E0
    li r5, 0x0
    b lbl_fn_80310EF8_000010EC
lbl_fn_80310EF8_000010E0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80310EF8_000010EC:
    cmpwi r5, 0x0
    beq lbl_fn_80310EF8_00001120
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x2c
    lfs f0, 0xc(r5)
    addi r4, r1, 0x8
    stfs f0, 0x2c(r1)
    lfs f2, 0x2c(r5)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
lbl_fn_80310EF8_00001120:
    lfs f5, 0xc(r1)
    addi r5, r1, 0x38
    lfs f4, 0x5a8(r31)
    addi r3, r1, 0x20
    lfs f3, 0x8(r1)
    addi r4, r1, 0x14
    fadds f4, f5, f4
    lfs f0, 0x5a4(r31)
    lfs f5, 0x5b0(r31)
    fadds f0, f3, f0
    stfs f4, 0x3c(r1)
    lfs f3, 0x10(r1)
    stfs f0, 0x38(r1)
    lfs f0, 0x5ac(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x614(r31), 0, 0
    fadds f6, f3, f0
    lfs f3, lbl_80884CB4
    lfs f4, 0x618(r31)
    lfs f0, 0x5b4(r31)
    fmr f2, f6
    fadds f4, f4, f5
    stfs f5, 0x620(r31)
    fnmsubs f3, f3, f5, f0
    stfs f4, 0x618(r31)
    psq_l f1, 0x614(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x24(r1)
    stfs f2, 0x61c(r31)
    frsp f2, f2
    fadds f0, f0, f3
    stfs f2, 0x1c(r1)
    stfs f2, 0x28(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r31)
    lfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f5, 0x60c(r31)
    lwz r31, 0x4c(r1)
    lwz r0, 0x54(r1)
    stfs f6, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80311090(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80149A30
    lwz r0, 0x15b8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80311090_00001268
    mr r31, r29
    li r30, 0x0
    b lbl_fn_80311090_0000125C
lbl_fn_80311090_0000121C:
    lwz r6, 0x1520(r31)
    cmpwi r30, 0x0
    lwz r3, lbl_8087EEB0
    li r4, 0x10
    lfs f1, 0x4(r6)
    li r5, -0x100
    lfs f2, 0x8(r6)
    lfs f3, 0xc(r6)
    lfs f4, lbl_80884CA8
    lfs f5, 0x14(r6)
    lfs f6, lbl_80884CB8
    bne lbl_fn_80311090_00001250
    li r5, -0x5600
lbl_fn_80311090_00001250:
    bl fn_80062C8C
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_80311090_0000125C:
    lwz r0, 0x151c(r29)
    cmplw r30, r0
    blt lbl_fn_80311090_0000121C
lbl_fn_80311090_00001268:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80311130(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80311130_000012A0
    cmpwi r0, 0x8
    beq lbl_fn_80311130_000012A0
    cmpwi r0, 0xa
    bne lbl_fn_80311130_000012A8
lbl_fn_80311130_000012A0:
    li r3, 0x0
    blr
lbl_fn_80311130_000012A8:
    lwz r3, 0x8(r4)
    lwz r0, 0xac(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    beq lbl_fn_80311130_000012D0
    lwz r0, 0x44(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80311130_000012D0
    li r3, 0x0
    blr
lbl_fn_80311130_000012D0:
    lfs f2, 0x10(r4)
    li r3, 0x1
    lfs f3, lbl_80884CA8
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    blr
}

asm void fn_803111AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x15ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803111AC_00001354
    lwz r5, 0x14e4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_803111AC_00001338
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_803111AC_00001354
lbl_fn_803111AC_00001338:
    lwz r0, 0x80(r4)
    srwi. r0, r0, 31
    bne lbl_fn_803111AC_00001354
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803111AC_00001438
lbl_fn_803111AC_00001354:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xb
    beq lbl_fn_803111AC_00001368
    cmpwi r0, 0xd
    bne lbl_fn_803111AC_00001374
lbl_fn_803111AC_00001368:
    li r0, 0x1
    stw r0, 0x15a4(r3)
    b lbl_fn_803111AC_00001438
lbl_fn_803111AC_00001374:
    lwz r7, 0x14e4(r3)
    cmpwi r7, 0x0
    beq lbl_fn_803111AC_00001410
    lwz r8, 0x38(r7)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r8, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803111AC_000013AC
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_803111AC_000013AC
    li r6, 0x1
lbl_fn_803111AC_000013AC:
    cmpwi r6, 0x0
    beq lbl_fn_803111AC_000013C8
    lwz r0, 0x7e0(r7)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803111AC_000013C8
    li r4, 0x1
lbl_fn_803111AC_000013C8:
    cmpwi r4, 0x0
    beq lbl_fn_803111AC_000013FC
    lwz r0, 0x55c(r7)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803111AC_000013F0
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_803111AC_000013F0
    li r4, 0x1
lbl_fn_803111AC_000013F0:
    cmpwi r4, 0x0
    bne lbl_fn_803111AC_000013FC
    li r5, 0x1
lbl_fn_803111AC_000013FC:
    cmpwi r5, 0x0
    beq lbl_fn_803111AC_00001418
    lwz r0, 0x15a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803111AC_00001418
lbl_fn_803111AC_00001410:
    li r4, 0x8
    b lbl_fn_803111AC_0000141C
lbl_fn_803111AC_00001418:
    li r4, 0xd
lbl_fn_803111AC_0000141C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r0, 0x15a4(r31)
lbl_fn_803111AC_00001438:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803111AC_0000145C
    addi r3, r31, 0x7d4
    bl fn_8012D8B8
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r31)
lbl_fn_803111AC_0000145C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031131C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8016E970
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xa
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80311364(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_24
    lwz r5, 0x14cc(r3)
    li r6, 0x0
    subi r0, r4, 0x6
    stw r6, 0x14bc(r3)
    clrlwi r5, r5, 4
    mr r27, r3
    oris r5, r5, 0x800
    cmplwi r0, 0x7
    stw r6, 0x14c0(r3)
    stw r6, 0x14c4(r3)
    stw r6, 0x14c8(r3)
    stw r5, 0x14cc(r3)
    stw r6, 0x14d0(r3)
    stw r4, 0x58c(r3)
    bgt lbl_fn_80311364_00001CEC
    lis r4, jumptable_80788378@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80788378@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    oris r0, r5, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_80311364_00001CEC
    li r4, 0x1
    bl fn_8016E4C4
    lwz r0, 0x5c0(r27)
    mr r3, r27
    ori r0, r0, 0x1
    stw r0, 0x5c0(r27)
    lwz r12, 0x0(r27)
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lfs f1, lbl_80884CA4
    mr r3, r27
    li r4, 0x2d
    li r5, 0x0
    fmr f2, f1
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r27)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r27)
    b lbl_fn_80311364_00001CEC
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lfs f1, lbl_80884CB0
    mr r3, r27
    lfs f2, lbl_80884CA8
    li r4, 0x2d
    li r5, 0x0
    li r6, 0x0
    bl fn_805A4F20
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lwz r3, 0x14e4(r27)
    stfs f1, 0x2e4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80311364_00001670
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_80311364_000015FC
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_80311364_000015FC
    li r4, 0x1
lbl_fn_80311364_000015FC:
    cmpwi r4, 0x0
    beq lbl_fn_80311364_00001618
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80311364_00001618
    li r0, 0x1
lbl_fn_80311364_00001618:
    cmpwi r0, 0x0
    beq lbl_fn_80311364_0000164C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80311364_00001640
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80311364_00001640
    li r4, 0x1
lbl_fn_80311364_00001640:
    cmpwi r4, 0x0
    bne lbl_fn_80311364_0000164C
    li r5, 0x1
lbl_fn_80311364_0000164C:
    cmpwi r5, 0x0
    beq lbl_fn_80311364_00001668
    li r4, -0x1
    bl fn_8015AC48
    li r0, 0x0
    stw r0, 0x14e4(r27)
    b lbl_fn_80311364_00001670
lbl_fn_80311364_00001668:
    mr r3, r27
    bl fn_803132D0
lbl_fn_80311364_00001670:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80311364_000016A4
    lwz r0, 0x54c(r27)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_80311364_000016A4
    li r0, 0x0
    stw r0, 0xd18(r27)
lbl_fn_80311364_000016A4:
    lwz r0, 0x624(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80311364_00001AC4
    lwz r3, 0x1518(r27)
    li r0, 0x0
    stw r0, 0x1510(r27)
    cmpwi r3, 0x0
    stw r0, 0x1514(r27)
    beq lbl_fn_80311364_000016DC
    beq lbl_fn_80311364_000016D4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80311364_000016D4:
    li r0, 0x0
    stw r0, 0x1518(r27)
lbl_fn_80311364_000016DC:
    li r28, 0x0
    li r26, 0x0
    lis r31, fn_80148990@ha
    li r30, 0x8
    b lbl_fn_80311364_00001A8C
lbl_fn_80311364_000016F0:
    lwz r0, 0x1518(r27)
    lwz r3, 0x62c(r27)
    cmpwi r0, 0x0
    add r29, r3, r26
    beq lbl_fn_80311364_00001710
    lwz r0, 0x1514(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80311364_000018A8
lbl_fn_80311364_00001710:
    lwz r0, 0x1514(r27)
    cmplwi r0, 0x8
    bgt lbl_fn_80311364_00001A4C
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x1518(r27)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_80311364_0000189C
    lwz r0, 0x1510(r27)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80311364_0000176C
    mr r5, r0
lbl_fn_80311364_0000176C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80311364_00001888
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80311364_00001850
lbl_fn_80311364_00001784:
    lwz r0, 0x1518(r27)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80311364_00001784
    andi. r5, r5, 0x3
    beq lbl_fn_80311364_00001888
lbl_fn_80311364_00001850:
    mtctr r5
lbl_fn_80311364_00001854:
    lwz r0, 0x1518(r27)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80311364_00001854
lbl_fn_80311364_00001888:
    lwz r3, 0x1518(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80311364_0000189C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80311364_0000189C:
    stw r25, 0x1518(r27)
    stw r30, 0x1514(r27)
    b lbl_fn_80311364_00001A4C
lbl_fn_80311364_000018A8:
    lwz r3, 0x1510(r27)
    cmplw r3, r0
    blt lbl_fn_80311364_00001A4C
    slwi r25, r3, 1
    cmplw r0, r25
    bgt lbl_fn_80311364_00001A4C
    mulli r3, r25, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r25
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x1518(r27)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_80311364_00001A44
    lwz r0, 0x1510(r27)
    mr r5, r25
    cmplw r25, r0
    ble lbl_fn_80311364_00001914
    mr r5, r0
lbl_fn_80311364_00001914:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80311364_00001A30
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80311364_000019F8
lbl_fn_80311364_0000192C:
    lwz r0, 0x1518(r27)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x1518(r27)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80311364_0000192C
    andi. r5, r5, 0x3
    beq lbl_fn_80311364_00001A30
lbl_fn_80311364_000019F8:
    mtctr r5
lbl_fn_80311364_000019FC:
    lwz r0, 0x1518(r27)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80311364_000019FC
lbl_fn_80311364_00001A30:
    lwz r3, 0x1518(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80311364_00001A44
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80311364_00001A44:
    stw r24, 0x1518(r27)
    stw r25, 0x1514(r27)
lbl_fn_80311364_00001A4C:
    lwz r0, 0x1510(r27)
    addi r28, r28, 0x1
    lwz r4, 0x1518(r27)
    addi r26, r26, 0x14
    mulli r3, r0, 0x14
    lwz r0, 0x0(r29)
    stwux r0, r3, r4
    lfs f2, 0xc(r29)
    psq_l f1, 0x4(r29), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lfs f0, 0x10(r29)
    stfs f0, 0x10(r3)
    lwz r3, 0x1510(r27)
    addi r0, r3, 0x1
    stw r0, 0x1510(r27)
lbl_fn_80311364_00001A8C:
    lwz r0, 0x624(r27)
    cmplw r28, r0
    blt lbl_fn_80311364_000016F0
    lwz r3, 0x62c(r27)
    li r0, 0x0
    stw r0, 0x624(r27)
    cmpwi r3, 0x0
    stw r0, 0x628(r27)
    beq lbl_fn_80311364_00001AC4
    beq lbl_fn_80311364_00001ABC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80311364_00001ABC:
    li r0, 0x0
    stw r0, 0x62c(r27)
lbl_fn_80311364_00001AC4:
    lwz r0, 0x14cc(r27)
    li r3, 0x0
    stw r3, 0x15a4(r27)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r27)
    b lbl_fn_80311364_00001CEC
    oris r0, r5, 0x4000
    stw r0, 0x14cc(r3)
    lwz r5, 0x484(r3)
    li r4, 0x0
    lfs f1, lbl_80884CA8
    li r6, 0x1
    lfs f2, lbl_80884CBC
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x18(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80749250@ha
    lfd f4, lbl_80749250@l(r4)
    lfs f0, lbl_80884CC0
    li r4, 0x0
    srawi r0, r5, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r27, 0xb0
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f3, 0x18(r1)
    fsubs f3, f3, f4
    fdivs f31, f3, f0
    bl fn_80097D7C
    fmuls f0, f1, f31
    addi r3, r27, 0xb0
    li r4, 0x1
    stfs f0, 0x2e4(r27)
    bl fn_80097E80
    b lbl_fn_80311364_00001CEC
    bl fn_80178A6C
    lwz r25, 0x151c(r27)
    cmpwi r25, 0x0
    beq lbl_fn_80311364_00001BF4
    lwz r0, 0x15a0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80311364_00001BF4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80311364_00001BA8
    lwz r24, 0x10d8(r3)
    b lbl_fn_80311364_00001BAC
lbl_fn_80311364_00001BA8:
    li r24, 0x0
lbl_fn_80311364_00001BAC:
    cmpwi r24, 0x0
    beq lbl_fn_80311364_00001BF4
    bl fn_80680CF8
    divwu r0, r3, r25
    mr r4, r24
    mullw r0, r0, r25
    subf r0, r0, r3
    addi r3, r1, 0x8
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r5, 0x1520(r5)
    lwz r5, 0x10(r5)
    bl fn_803C11A4
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r27), 0, 0
    stfs f2, 0x530(r27)
lbl_fn_80311364_00001BF4:
    lwz r0, 0x14cc(r27)
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r27)
    b lbl_fn_80311364_00001CEC
    lfs f1, lbl_80884CA4
    li r4, 0x13f
    lfs f2, lbl_80884CA8
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r27)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r27)
    b lbl_fn_80311364_00001CEC
    lfs f1, lbl_80884CA4
    li r4, 0x140
    lfs f2, lbl_80884CA8
    li r5, 0x1
    li r6, 0x1
    bl fn_805A4F20
    lwz r3, 0x14e4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80311364_00001CB8
    lfs f1, lbl_80884CA8
    addi r3, r3, 0xb0
    lfs f2, lbl_80884CBC
    li r4, 0x0
    li r5, 0x1d8
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14e4(r27)
    lwz r4, 0xf80(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80311364_00001CB8
    lwz r0, 0x15ac(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80311364_00001C9C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80311364_00001CB8
lbl_fn_80311364_00001C9C:
    li r0, 0x1
    stb r0, 0x18(r4)
    lwz r3, 0x15a0(r27)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0x19(r4)
lbl_fn_80311364_00001CB8:
    lwz r0, 0x14cc(r27)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r27)
    b lbl_fn_80311364_00001CEC
    lfs f1, lbl_80884CA4
    li r4, 0x141
    lfs f2, lbl_80884CA8
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r27)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r27)
lbl_fn_80311364_00001CEC:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
