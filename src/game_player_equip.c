#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_80041C0C(void);
extern void fn_80042740(void);
extern void fn_800846FC(void);
extern void fn_800928B0(void);
extern void fn_80097D7C(void);
extern void fn_800A555C(void);
extern void fn_800A5584(void);
extern void fn_800A55AC(void);
extern void fn_800A55D4(void);
extern void fn_800A58D0(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6B0(void);
extern void fn_800CB6E4(void);
extern void fn_800DC6B4(void);
extern void fn_800EF73C(void);
extern void fn_8011FFF8(void);
extern void fn_8017C974(void);
extern void fn_8018412C(void);
extern void fn_80184548(void);
extern void fn_80218218(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804741C0(void);
extern void fn_804768B4(void);
extern void fn_80476CE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80682544(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80737128[];
extern u8 lbl_80737130[];
extern u8 lbl_80737138[];
extern u8 lbl_8078FEA0[];

/* Small data declarations */
extern u32 lbl_8087D9B0;
extern u32 lbl_8087D9B4;
extern u32 lbl_8087D9B8;
extern u32 lbl_8087D9BC;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F078;
extern u32 lbl_8087F07C;
extern u32 lbl_8087F080;
extern u32 lbl_8087F0A0;
extern u32 lbl_8087F2A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9F8;
extern u32 lbl_808817F8;
extern u32 lbl_808817FC;
extern u32 lbl_80881800;
extern u32 lbl_80881804;
extern u32 lbl_80881808;
extern u32 lbl_8088180C;
extern u32 lbl_80881810;

/* Function declarations */
void fn_80120D24(void);
void fn_80120D34(void);
void fn_80120D44(void);
void fn_80120E38(void);
void fn_80120E48(void);
void fn_80120F4C(void);
void fn_80120F5C(void);
void fn_80120FF0(void);
void fn_80121048(void);
void fn_801210B4(void);
void fn_801210C4(void);
void fn_80121114(void);
void fn_8012111C(void);
void fn_8012133C(void);
void fn_80121E14(void);
void fn_80121EB0(void);
void fn_80121F00(void);
void fn_80121F08(void);
void fn_80121FD4(void);
void fn_801220A0(void);
void fn_8012216C(void);
void fn_80122238(void);
void fn_80122280(void);
void fn_80122288(void);

asm void fn_80120D24(void)
{
    nofralloc
    mulli r0, r4, 0xc
    lwz r3, 0x8(r3)
    add r3, r3, r0
    blr
}

asm void fn_80120D34(void)
{
    nofralloc
    mulli r0, r4, 0xc
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_80120D44(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    mr r26, r4
    beq lbl_fn_80120D44_00000080
    mulli r3, r4, 0xc
    mr r4, r5
    la r5, lbl_8087D9BC
    la r6, lbl_8087D9B8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    mr r7, r26
    li r6, 0xc
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    bl fn_80695720
    mr r30, r3
    b lbl_fn_80120D44_00000084
lbl_fn_80120D44_00000080:
    li r30, 0x0
lbl_fn_80120D44_00000084:
    lwz r0, 0x8(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80120D44_000000F4
    lwz r0, 0x0(r25)
    mr r31, r26
    cmplw r26, r0
    ble lbl_fn_80120D44_000000A4
    mr r31, r0
lbl_fn_80120D44_000000A4:
    mr r28, r30
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80120D44_000000DC
lbl_fn_80120D44_000000B4:
    lwz r0, 0x8(r25)
    addi r3, r28, 0x4
    add r4, r0, r29
    lwzx r0, r29, r0
    stw r0, 0x0(r28)
    addi r4, r4, 0x4
    bl fn_804741C0
    addi r29, r29, 0xc
    addi r28, r28, 0xc
    addi r27, r27, 0x1
lbl_fn_80120D44_000000DC:
    cmplw r27, r31
    blt lbl_fn_80120D44_000000B4
    lis r4, fn_800EF73C@ha
    lwz r3, 0x8(r25)
    addi r4, r4, fn_800EF73C@l
    bl fn_80695A50
lbl_fn_80120D44_000000F4:
    stw r30, 0x8(r25)
    stw r26, 0x0(r25)
    stw r26, 0x4(r25)
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80120E38(void)
{
    nofralloc
    mulli r0, r4, 0xc
    lwz r3, 0x8(r3)
    add r3, r3, r0
    blr
}

asm void fn_80120E48(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r4
    beq lbl_fn_80120E48_00000184
    slwi r3, r4, 5
    mr r4, r5
    la r5, lbl_8087D9B4
    la r6, lbl_8087D9B0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80042740@ha
    lis r5, fn_80041C0C@ha
    mr r7, r25
    li r6, 0x20
    addi r4, r4, fn_80042740@l
    addi r5, r5, fn_80041C0C@l
    bl fn_80695720
    mr r29, r3
    b lbl_fn_80120E48_00000188
lbl_fn_80120E48_00000184:
    li r29, 0x0
lbl_fn_80120E48_00000188:
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80120E48_00000208
    lwz r0, 0x0(r24)
    mr r31, r25
    cmplw r25, r0
    ble lbl_fn_80120E48_000001A8
    mr r31, r0
lbl_fn_80120E48_000001A8:
    mr r27, r29
    li r26, 0x0
    li r28, 0x0
    b lbl_fn_80120E48_000001F0
lbl_fn_80120E48_000001B8:
    lwz r0, 0x8(r24)
    add r30, r0, r28
    cmplw r30, r27
    beq lbl_fn_80120E48_000001E4
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r3, r27
    mr r4, r30
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80120E48_000001E4:
    addi r28, r28, 0x20
    addi r27, r27, 0x20
    addi r26, r26, 0x1
lbl_fn_80120E48_000001F0:
    cmplw r26, r31
    blt lbl_fn_80120E48_000001B8
    lis r4, fn_80041C0C@ha
    lwz r3, 0x8(r24)
    addi r4, r4, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_80120E48_00000208:
    stw r29, 0x8(r24)
    stw r25, 0x0(r24)
    stw r25, 0x4(r24)
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80120F4C(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    slwi r0, r4, 5
    add r3, r3, r0
    blr
}

asm void fn_80120F5C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r3, 0x14
    stw r29, 0x14(r1)
    mr r29, r3
    stw r31, 0x0(r3)
    stw r31, 0xc(r3)
    stb r0, 0x10(r3)
    stb r0, 0x11(r3)
    stb r0, 0x12(r3)
    mr r3, r30
    bl fn_80473E74
    lis r4, lbl_8078FEA0@ha
    lis r3, fn_8011FFF8@ha
    addi r4, r4, lbl_8078FEA0@l
    stw r4, 0x0(r30)
    addi r3, r3, fn_8011FFF8@l
    stw r3, 0x8(r30)
    addi r3, r29, 0x28
    stw r31, 0x20(r29)
    stw r31, 0x24(r29)
    bl fn_800CB360
    stw r31, 0x2c(r29)
    mr r3, r29
    stw r31, 0x30(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80120FF0(void)
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
    beq lbl_fn_80120FF0_00000308
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_80120FF0_00000308
    mr r3, r30
    bl dtor_80084684
lbl_fn_80120FF0_00000308:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80121048(void)
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
    beq lbl_fn_80121048_00000374
    li r4, -0x1
    addi r3, r3, 0x28
    bl fn_800CB3A0
    addic. r3, r30, 0x14
    beq lbl_fn_80121048_00000364
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80121048_00000364:
    cmpwi r31, 0x0
    ble lbl_fn_80121048_00000374
    mr r3, r30
    bl dtor_80084684
lbl_fn_80121048_00000374:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801210B4(void)
{
    nofralloc
    lwzu r12, 0x14(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

asm void fn_801210C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x14
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_801210C4_000003D8
    addi r3, r31, 0x14
    bl fn_80476CE4
    stw r3, 0x20(r31)
    li r3, 0x0
    b lbl_fn_801210C4_000003DC
lbl_fn_801210C4_000003D8:
    li r3, 0x1
lbl_fn_801210C4_000003DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80121114(void)
{
    nofralloc
    stw r4, 0x0(r3)
    blr
}

asm void fn_8012111C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lbz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012111C_000005FC
    lwz r4, 0x0(r3)
    li r0, 0x0
    addi r30, r4, 0xb0
    lwz r4, 0x3fc(r4)
    cmpwi r4, 0x1
    stw r0, 0x8(r3)
    ble lbl_fn_8012111C_00000474
    mr r5, r30
    lfs f1, lbl_808817F8
    li r6, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8012111C_00000474
lbl_fn_8012111C_00000454:
    lfs f0, 0x24c(r5)
    fcmpo cr0, f0, f1
    ble lbl_fn_8012111C_00000468
    fmr f1, f0
    stw r6, 0x8(r3)
lbl_fn_8012111C_00000468:
    addi r5, r5, 0x30
    addi r6, r6, 0x1
    bdnz lbl_fn_8012111C_00000454
lbl_fn_8012111C_00000474:
    lwz r0, 0x8(r3)
    lwz r5, 0x4(r3)
    mulli r0, r0, 0x30
    add r4, r30, r0
    lwz r29, 0x22c(r4)
    cmpw r29, r5
    beq lbl_fn_8012111C_000004E0
    lwz r4, 0x24(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8012111C_000004B8
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8012111C_000004B0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8012111C_000004B0:
    li r0, 0x0
    stw r0, 0x24(r31)
lbl_fn_8012111C_000004B8:
    lwz r0, 0x28(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8012111C_000004DC
    addi r3, r31, 0x28
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    li r0, 0x0
    stw r0, 0x2c(r31)
lbl_fn_8012111C_000004DC:
    stw r29, 0x4(r31)
lbl_fn_8012111C_000004E0:
    lwz r3, 0x0(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012111C_00000504
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8012111C_00000504
    li r0, 0x0
    stw r0, 0x34c8(r3)
lbl_fn_8012111C_00000504:
    lwz r0, 0x8(r31)
    mulli r0, r0, 0x30
    add r3, r30, r0
    lwz r3, 0x230(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8012111C_0000059C
    bl fn_804768B4
    lwz r0, 0x30(r31)
    mr r30, r3
    cmplw r0, r3
    bne lbl_fn_8012111C_00000548
    lwz r0, 0x4(r31)
    cmpwi r0, 0x58
    beq lbl_fn_8012111C_00000548
    lbz r0, 0x12(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8012111C_0000059C
lbl_fn_8012111C_00000548:
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r3, r31
    addi r5, r1, 0x8
    lwz r4, 0x20(r31)
    bl fn_8012133C
    lwz r4, lbl_8087F2A8
    cmpwi r4, 0x0
    beq lbl_fn_8012111C_00000584
    cmpwi r3, 0x0
    bne lbl_fn_8012111C_00000584
    lwz r4, 0x54(r4)
    mr r3, r31
    addi r5, r1, 0x8
    bl fn_8012133C
lbl_fn_8012111C_00000584:
    stw r30, 0x30(r31)
    lwz r3, 0x8(r1)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x12(r31)
lbl_fn_8012111C_0000059C:
    lwz r3, 0x0(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012111C_000005C0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8012111C_000005C0
    li r0, 0x1
    stw r0, 0x34c8(r3)
lbl_fn_8012111C_000005C0:
    lwz r0, 0x28(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8012111C_000005FC
    lwz r5, 0x2c(r31)
    cmpwi r5, 0x0
    beq lbl_fn_8012111C_000005FC
    lfs f0, 0x2c(r5)
    addi r3, r31, 0x28
    lfs f1, 0x1c(r5)
    addi r4, r1, 0xc
    lfs f2, 0xc(r5)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_800CB6E4
lbl_fn_8012111C_000005FC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8012133C(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x190
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    stfd f28, 0x1f0(r1)
    psq_st f28, 0x1f8(r1), 0, 0
    stfd f27, 0x1e0(r1)
    psq_st f27, 0x1e8(r1), 0, 0
    stfd f26, 0x1d0(r1)
    psq_st f26, 0x1d8(r1), 0, 0
    stfd f25, 0x1c0(r1)
    psq_st f25, 0x1c8(r1), 0, 0
    stfd f24, 0x1b0(r1)
    psq_st f24, 0x1b8(r1), 0, 0
    stfd f23, 0x1a0(r1)
    psq_st f23, 0x1a8(r1), 0, 0
    stfd f22, 0x190(r1)
    psq_st f22, 0x198(r1), 0, 0
    bl _savegpr_14
    cmpwi r4, 0x0
    lis r0, 0x4330
    stw r0, 0x118(r1)
    mr r15, r3
    mr r16, r4
    mr r17, r5
    stw r0, 0x120(r1)
    beq lbl_fn_8012133C_000006A8
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8012133C_000006B0
lbl_fn_8012133C_000006A8:
    li r3, 0x0
    b lbl_fn_8012133C_00001088
lbl_fn_8012133C_000006B0:
    lwz r0, 0x8(r3)
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x30
    addi r23, r3, 0xb0
    add r3, r23, r0
    lwz r3, 0x230(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8012133C_000006D8
    li r3, 0x0
    b lbl_fn_8012133C_00001088
lbl_fn_8012133C_000006D8:
    bl fn_804768B4
    stw r3, 0x130(r1)
    lwz r3, 0x4(r15)
    bl fn_80218218
    bl fn_800DC6B4
    lwz r4, 0x8(r15)
    stw r3, 0x134(r1)
    mr r3, r23
    mulli r0, r4, 0x30
    add r5, r23, r0
    lfs f24, 0x234(r5)
    bl fn_80097D7C
    lwz r0, 0x8(r15)
    fmr f25, f1
    lwz r3, lbl_8087EFA8
    mulli r0, r0, 0x30
    lwz r4, 0x4(r15)
    lfs f3, 0x3a4(r3)
    cmpwi r4, 0x58
    add r3, r23, r0
    lfs f0, 0x238(r3)
    lbz r14, 0x244(r3)
    fmuls f23, f0, f3
    bne lbl_fn_8012133C_00000768
    lfs f0, lbl_808817F8
    fcmpo cr0, f23, f0
    bge lbl_fn_8012133C_00000750
    fabs f0, f23
    frsp f23, f0
    fsubs f24, f24, f23
lbl_fn_8012133C_00000750:
    lfs f0, lbl_808817FC
    fcmpo cr0, f23, f0
    cror eq, lt, eq
    bne lbl_fn_8012133C_00000780
    li r3, 0x0
    b lbl_fn_8012133C_00001088
lbl_fn_8012133C_00000768:
    lfs f0, lbl_808817F8
    fcmpo cr0, f23, f0
    cror eq, lt, eq
    bne lbl_fn_8012133C_00000780
    li r3, 0x0
    b lbl_fn_8012133C_00001088
lbl_fn_8012133C_00000780:
    lwz r3, lbl_8087F430
    li r22, 0x0
    li r21, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8012133C_000007DC
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8012133C_000007DC
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r4, 0x48(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x2
    ble lbl_fn_8012133C_000007C8
    cmpwi r4, 0x1
    bne lbl_fn_8012133C_000007DC
    li r22, 0x1
    b lbl_fn_8012133C_000007DC
lbl_fn_8012133C_000007C8:
    lwz r0, 0x4c(r3)
    li r22, 0x2
    cmpwi r0, 0x12
    bne lbl_fn_8012133C_000007DC
    li r21, 0x1
lbl_fn_8012133C_000007DC:
    lis r4, lbl_80737128@ha
    lis r3, lbl_80737130@ha
    li r18, 0x0
    lis r30, lbl_80737138@ha
    lfs f28, lbl_808817F8
    mr r29, r18
    stw r18, 0x138(r1)
    addi r26, r1, 0x60
    lfs f29, lbl_80881804
    addi r30, r30, lbl_80737138@l
    stw r18, 0x13c(r1)
    addi r25, r1, 0x6c
    lfs f31, lbl_80881810
    li r20, 0x0
    lfs f30, lbl_8088180C
    li r31, 0x0
    stw r18, 0x140(r1)
    li r27, -0x1
    lfd f22, lbl_80737130@l(r3)
    li r28, 0x1
    stw r18, 0x144(r1)
    lfd f27, lbl_80737128@l(r4)
    lfs f26, lbl_80881800
    b lbl_fn_8012133C_00001078
lbl_fn_8012133C_0000083C:
    lwz r0, 0x8(r16)
    add r24, r0, r31
    lwzx r0, r31, r0
    cmpwi r0, 0x0
    bne lbl_fn_8012133C_00000864
    lwz r3, 0x4(r24)
    lwz r0, 0x130(r1)
    cmplw r0, r3
    bne lbl_fn_8012133C_00001070
    b lbl_fn_8012133C_00000874
lbl_fn_8012133C_00000864:
    lwz r3, 0x4(r24)
    lwz r0, 0x134(r1)
    cmplw r0, r3
    bne lbl_fn_8012133C_00001070
lbl_fn_8012133C_00000874:
    stw r28, 0x0(r17)
    lwz r0, 0x10(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8012133C_00000894
    cmpwi r22, 0x0
    beq lbl_fn_8012133C_00000894
    cmpw r0, r22
    bne lbl_fn_8012133C_00001070
lbl_fn_8012133C_00000894:
    lwz r3, 0x8(r24)
    xoris r0, r3, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f27
    fsubs f0, f24, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f26
    blt lbl_fn_8012133C_00000940
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f27
    fcmpo cr0, f24, f0
    bge lbl_fn_8012133C_000008F8
    stw r0, 0x11c(r1)
    fadds f3, f24, f23
    lfd f0, 0x118(r1)
    fsubs f0, f0, f27
    fcmpo cr0, f3, f0
    ble lbl_fn_8012133C_000008F8
    cmpwi r14, 0x0
    beq lbl_fn_8012133C_00000940
    fcmpo cr0, f3, f25
    blt lbl_fn_8012133C_00000940
lbl_fn_8012133C_000008F8:
    fcmpo cr0, f24, f28
    cror eq, gt, eq
    bne lbl_fn_8012133C_00001070
    fsubs f0, f24, f23
    fcmpo cr0, f0, f28
    bge lbl_fn_8012133C_00001070
    xoris r0, r3, 0x8000
    stw r0, 0x124(r1)
    fadds f3, f25, f0
    lfd f0, 0x120(r1)
    fsubs f0, f0, f27
    fcmpo cr0, f3, f0
    blt lbl_fn_8012133C_00000940
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f27
    fcmpo cr0, f0, f24
    bge lbl_fn_8012133C_00001070
lbl_fn_8012133C_00000940:
    lwz r3, 0xc(r24)
    cmpwi r3, 0x4
    beq lbl_fn_8012133C_00000D34
    bge lbl_fn_8012133C_00000968
    cmpwi r3, 0x1
    beq lbl_fn_8012133C_000009A8
    bge lbl_fn_8012133C_00000ACC
    cmpwi r3, 0x0
    bge lbl_fn_8012133C_00000978
    b lbl_fn_8012133C_00001070
lbl_fn_8012133C_00000968:
    cmpwi r3, 0x7
    beq lbl_fn_8012133C_00001024
    bge lbl_fn_8012133C_00001070
    b lbl_fn_8012133C_00000E04
lbl_fn_8012133C_00000978:
    lwz r0, 0x2c(r24)
    addi r8, r24, 0x14
    lwz r4, 0x2c(r16)
    slwi r0, r0, 5
    lwz r3, lbl_8087F0A0
    lwz r5, 0x0(r15)
    add r4, r4, r0
    lwz r6, 0x24(r24)
    lwz r7, 0x28(r24)
    bl fn_8018412C
    li r18, 0x1
    b lbl_fn_8012133C_00001070
lbl_fn_8012133C_000009A8:
    lwz r4, 0x4(r15)
    mr r3, r15
    bl fn_80232B7C
    lwz r0, 0x24(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8012133C_00000A38
    lwz r4, 0x28(r24)
    mr r3, r23
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_8012133C_000009E0
    li r7, 0x0
    b lbl_fn_8012133C_000009EC
lbl_fn_8012133C_000009E0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r7, r3, r0
lbl_fn_8012133C_000009EC:
    cmpwi r7, 0x0
    beq lbl_fn_8012133C_00000AC4
    lwz r0, 0x2c(r24)
    addi r8, r24, 0x14
    lwz r9, 0x14(r16)
    li r5, -0x1
    mulli r4, r0, 0xc
    lwz r3, lbl_8087F3C0
    lwz r0, 0x138(r1)
    li r6, 0x5
    stw r0, 0x8(r1)
    li r10, 0x0
    stw r27, 0xc(r1)
    add r4, r9, r4
    li r9, 0x0
    stw r28, 0x10(r1)
    lfs f1, 0x20(r24)
    bl fn_8023A680
    b lbl_fn_8012133C_00000AC4
lbl_fn_8012133C_00000A38:
    lwz r4, 0x0(r15)
    addi r9, r1, 0x9c
    lfs f0, 0x1c(r24)
    addi r8, r1, 0xa8
    lfs f3, 0x530(r4)
    li r5, -0x1
    lfs f5, 0x52c(r4)
    li r6, 0x0
    fadds f6, f3, f0
    lfs f4, 0x18(r24)
    lfs f3, 0x528(r4)
    li r7, 0x0
    lfs f0, 0x14(r24)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0xac(r1)
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    stfs f0, 0xa8(r1)
    stfs f6, 0xb0(r1)
    psq_l f1, 0x534(r4), 0, 0
    lfs f2, 0x53c(r4)
    mr r4, r9
    stfs f2, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x2c(r24)
    lwz r11, 0x14(r16)
    mulli r4, r0, 0xc
    lwz r0, 0x13c(r1)
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    add r4, r11, r4
    stw r28, 0x10(r1)
    lfs f1, 0x20(r24)
    bl fn_8023A680
lbl_fn_8012133C_00000AC4:
    li r18, 0x1
    b lbl_fn_8012133C_00001070
lbl_fn_8012133C_00000ACC:
    cmpwi r3, 0x3
    bne lbl_fn_8012133C_00000AE0
    lwz r0, 0x24(r15)
    cmpwi r0, 0x0
    bne lbl_fn_8012133C_00001070
lbl_fn_8012133C_00000AE0:
    cmpwi r3, 0x3
    bne lbl_fn_8012133C_00000AF4
    lwz r3, lbl_8087F3C0
    li r0, 0x2
    stw r0, 0xb8(r3)
lbl_fn_8012133C_00000AF4:
    lwz r3, 0x30(r24)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_8012133C_00000B10
    lwz r3, lbl_8087F3C0
    stw r28, 0xc4(r3)
    b lbl_fn_8012133C_00000B2C
lbl_fn_8012133C_00000B10:
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8012133C_00000B2C
    lwz r3, lbl_8087F3C0
    stw r28, 0xc4(r3)
    lwz r3, lbl_8087F3C0
    stw r28, 0xc8(r3)
lbl_fn_8012133C_00000B2C:
    lwz r0, 0x2c(r24)
    lwz r3, 0x20(r16)
    mulli r0, r0, 0xc
    lwz r4, 0x4(r15)
    add r3, r3, r0
    bl fn_80232B7C
    lwz r0, 0x24(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8012133C_00000BFC
    stfs f28, 0x90(r1)
    stfs f28, 0x94(r1)
    stfs f28, 0x98(r1)
    lwz r4, 0x28(r24)
    lwz r0, lbl_8087F080
    cmplw r4, r0
    bne lbl_fn_8012133C_00000B74
    li r0, 0x0
    b lbl_fn_8012133C_00000B78
lbl_fn_8012133C_00000B74:
    li r0, -0x1
lbl_fn_8012133C_00000B78:
    cmpwi r0, 0x0
    bne lbl_fn_8012133C_00000BA0
    lwz r3, 0x0(r15)
    lwz r3, 0x648(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8012133C_00000B98
    addi r5, r3, 0x10
    b lbl_fn_8012133C_00000BA8
lbl_fn_8012133C_00000B98:
    li r5, 0x0
    b lbl_fn_8012133C_00000BA8
lbl_fn_8012133C_00000BA0:
    lwz r3, 0x0(r15)
    addi r5, r3, 0xb0
lbl_fn_8012133C_00000BA8:
    cmpwi r5, 0x0
    beq lbl_fn_8012133C_00000CC4
    lwz r0, 0x2c(r24)
    addi r7, r24, 0x14
    lfs f1, 0x20(r24)
    addi r8, r1, 0x90
    lwz r4, 0x20(r16)
    mulli r0, r0, 0xc
    lwz r3, lbl_8087F3C0
    addi r9, r1, 0x38
    stfs f29, 0x38(r1)
    li r6, 0x0
    add r4, r4, r0
    stfs f29, 0x3c(r1)
    li r10, -0x1
    stfs f29, 0x40(r1)
    stfs f29, 0x44(r1)
    stw r27, 0x8(r1)
    stw r28, 0xc(r1)
    bl fn_8023A8B4
    b lbl_fn_8012133C_00000CC4
lbl_fn_8012133C_00000BFC:
    lwz r5, 0x0(r15)
    addi r3, r1, 0xe8
    li r4, 0x79
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    psq_l f1, 0x14(r24), 0, 0
    mr r4, r26
    lfs f2, 0x1c(r24)
    mr r5, r26
    stfs f2, 0x68(r1)
    addi r3, r1, 0xe8
    psq_st f1, 0x0(r26), 0, 0
    bl fn_805F93C0
    lwz r4, 0x0(r15)
    addi r8, r1, 0x78
    lfs f0, 0x68(r1)
    addi r7, r1, 0x84
    lfs f3, 0x530(r4)
    addi r9, r1, 0x28
    lfs f5, 0x52c(r4)
    li r5, 0x0
    fadds f6, f3, f0
    lfs f4, 0x64(r1)
    lfs f3, 0x528(r4)
    li r6, 0x0
    lfs f0, 0x60(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x8c(r1)
    lwz r3, lbl_8087F3C0
    li r10, -0x1
    stfs f4, 0x88(r1)
    stfs f0, 0x84(r1)
    psq_l f1, 0x534(r4), 0, 0
    lfs f2, 0x53c(r4)
    mr r4, r8
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x2c(r24)
    lfs f1, 0x20(r24)
    lwz r4, 0x20(r16)
    mulli r0, r0, 0xc
    stfs f29, 0x28(r1)
    add r4, r4, r0
    stfs f29, 0x2c(r1)
    stfs f29, 0x30(r1)
    stfs f29, 0x34(r1)
    stw r27, 0x8(r1)
    stw r28, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_8012133C_00000CC4:
    lwz r3, 0x30(r24)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_8012133C_00000CE4
    lwz r3, lbl_8087F3C0
    lwz r0, 0x140(r1)
    stw r0, 0xc4(r3)
    b lbl_fn_8012133C_00000D00
lbl_fn_8012133C_00000CE4:
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8012133C_00000D00
    lwz r3, lbl_8087F3C0
    stw r29, 0xc4(r3)
    lwz r3, lbl_8087F3C0
    stw r29, 0xc8(r3)
lbl_fn_8012133C_00000D00:
    lwz r0, 0xc(r24)
    cmpwi r0, 0x3
    bne lbl_fn_8012133C_00000D2C
    lwz r3, lbl_8087F3C0
    lwz r0, 0x144(r1)
    stw r0, 0xb8(r3)
    lwz r0, 0x2c(r24)
    lwz r3, 0x20(r16)
    mulli r0, r0, 0xc
    add r0, r3, r0
    stw r0, 0x24(r15)
lbl_fn_8012133C_00000D2C:
    li r18, 0x1
    b lbl_fn_8012133C_00001070
lbl_fn_8012133C_00000D34:
    lbz r0, 0x11(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8012133C_00000DFC
    lwz r5, 0x0(r15)
    lfs f1, lbl_80881804
    lwz r0, 0x55c(r5)
    cmpwi r0, 0x8
    beq lbl_fn_8012133C_00000DA8
    lwz r3, 0x48(r5)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_8012133C_00000D70
    cmpwi r3, 0x4
    beq lbl_fn_8012133C_00000D70
    li r0, 0x0
lbl_fn_8012133C_00000D70:
    cmpwi r0, 0x0
    beq lbl_fn_8012133C_00000D80
    lfs f1, lbl_808817F8
    b lbl_fn_8012133C_00000DA8
lbl_fn_8012133C_00000D80:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x3
    beq lbl_fn_8012133C_00000DA4
    cmpwi r0, 0x2
    bne lbl_fn_8012133C_00000DA8
    lwz r0, 0x12a4(r5)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_8012133C_00000DA8
lbl_fn_8012133C_00000DA4:
    lfs f1, lbl_80881808
lbl_fn_8012133C_00000DA8:
    lfs f0, 0x20(r24)
    fmuls f1, f1, f0
    fcmpo cr0, f1, f30
    ble lbl_fn_8012133C_00000DFC
    fcmpo cr0, f23, f31
    cror eq, lt, eq
    bne lbl_fn_8012133C_00000DFC
    lwz r7, 0x28(r24)
    li r9, 0x1
    lwz r0, lbl_8087F07C
    cmplw r7, r0
    bne lbl_fn_8012133C_00000DDC
    li r9, 0x2
lbl_fn_8012133C_00000DDC:
    lwz r0, 0x2c(r24)
    addi r8, r24, 0x14
    lwz r4, 0x2c(r16)
    slwi r0, r0, 5
    lwz r3, lbl_8087F0A0
    lwz r6, 0x24(r24)
    add r4, r4, r0
    bl fn_80184548
lbl_fn_8012133C_00000DFC:
    li r18, 0x1
    b lbl_fn_8012133C_00001070
lbl_fn_8012133C_00000E04:
    lbz r0, 0x11(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8012133C_00001070
    cmpwi r3, 0x6
    bne lbl_fn_8012133C_00000E24
    lwz r0, 0x28(r15)
    cmpwi r0, 0x0
    bne lbl_fn_8012133C_00001070
lbl_fn_8012133C_00000E24:
    addi r3, r1, 0x20
    li r19, 0x0
    bl fn_800CB360
    fcmpo cr0, f23, f31
    cror eq, lt, eq
    bne lbl_fn_8012133C_00000FD0
    lwz r0, 0x2c(r24)
    cmpwi r21, 0x0
    lwz r3, 0x2c(r16)
    slwi r0, r0, 5
    add r18, r3, r0
    beq lbl_fn_8012133C_00000EA4
    lwz r0, 0x4(r15)
    cmpwi r0, 0x55
    blt lbl_fn_8012133C_00000EA4
    cmpwi r0, 0x5a
    bgt lbl_fn_8012133C_00000EA4
    mr r3, r18
    addi r4, r30, 0x14
    li r5, 0xc
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8012133C_00000E88
    addi r18, r30, 0x21
    b lbl_fn_8012133C_00000EA4
lbl_fn_8012133C_00000E88:
    mr r3, r18
    addi r4, r30, 0x3b
    li r5, 0xc
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8012133C_00000EA4
    addi r18, r30, 0x2e
lbl_fn_8012133C_00000EA4:
    lwz r0, 0x24(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8012133C_00000F34
    lwz r4, 0x28(r24)
    mr r3, r23
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_8012133C_00000ED0
    li r19, 0x0
    b lbl_fn_8012133C_00000EDC
lbl_fn_8012133C_00000ED0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r19, r3, r0
lbl_fn_8012133C_00000EDC:
    cmpwi r19, 0x0
    beq lbl_fn_8012133C_00000FD0
    lfs f0, 0x2c(r19)
    mr r4, r18
    lfs f3, 0x1c(r19)
    addi r3, r1, 0x1c
    lfs f4, 0xc(r19)
    addi r5, r1, 0x54
    stfs f4, 0x54(r1)
    li r6, 0x0
    li r7, -0x1
    stfs f3, 0x58(r1)
    stfs f0, 0x5c(r1)
    lfs f1, 0x20(r24)
    bl fn_800C344C
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    bl fn_800CB440
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8012133C_00000FD0
lbl_fn_8012133C_00000F34:
    lwz r5, 0x0(r15)
    addi r3, r1, 0xb8
    li r4, 0x79
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    psq_l f1, 0x14(r24), 0, 0
    mr r4, r25
    lfs f2, 0x1c(r24)
    mr r5, r25
    stfs f2, 0x74(r1)
    addi r3, r1, 0xb8
    psq_st f1, 0x0(r25), 0, 0
    bl fn_805F93C0
    lwz r7, 0x0(r15)
    mr r4, r18
    lfs f0, 0x74(r1)
    addi r3, r1, 0x18
    lfs f3, 0x530(r7)
    addi r5, r1, 0x48
    lfs f5, 0x52c(r7)
    li r6, 0x0
    fadds f6, f3, f0
    lfs f3, 0x528(r7)
    lfs f4, 0x70(r1)
    li r7, -0x1
    lfs f0, 0x6c(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x50(r1)
    stfs f4, 0x4c(r1)
    stfs f0, 0x48(r1)
    lfs f1, 0x20(r24)
    bl fn_800C344C
    addi r3, r1, 0x20
    addi r4, r1, 0x18
    bl fn_800CB440
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8012133C_00000FD0:
    lwz r0, 0x30(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8012133C_00000FF4
    stw r0, 0x124(r1)
    addi r3, r1, 0x20
    li r4, 0x1
    lfd f0, 0x120(r1)
    fsubs f1, f0, f22
    bl fn_800CB6B0
lbl_fn_8012133C_00000FF4:
    lwz r0, 0xc(r24)
    cmpwi r0, 0x6
    bne lbl_fn_8012133C_00001010
    addi r3, r15, 0x28
    addi r4, r1, 0x20
    bl fn_800CB440
    stw r19, 0x2c(r15)
lbl_fn_8012133C_00001010:
    addi r3, r1, 0x20
    li r18, 0x1
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8012133C_00001070
lbl_fn_8012133C_00001024:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8012133C_0000106C
    lfs f0, 0x1c(r24)
    lwz r0, 0x96c(r4)
    fctiwz f0, f0
    lfs f3, 0x18(r24)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    stfd f0, 0x128(r1)
    xor r0, r0, r3
    subf r0, r3, r0
    lfs f0, 0x14(r24)
    lwz r3, 0x12c(r1)
    stw r0, 0x96c(r4)
    stw r3, 0x970(r4)
    stfs f0, 0x974(r4)
    stfs f3, 0x978(r4)
lbl_fn_8012133C_0000106C:
    li r18, 0x1
lbl_fn_8012133C_00001070:
    addi r20, r20, 0x1
    addi r31, r31, 0x34
lbl_fn_8012133C_00001078:
    lwz r0, 0x0(r16)
    cmplw r20, r0
    blt lbl_fn_8012133C_0000083C
    mr r3, r18
lbl_fn_8012133C_00001088:
    addi r11, r1, 0x190
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    psq_l f28, 0x1f8(r1), 0, 0
    lfd f28, 0x1f0(r1)
    psq_l f27, 0x1e8(r1), 0, 0
    lfd f27, 0x1e0(r1)
    psq_l f26, 0x1d8(r1), 0, 0
    lfd f26, 0x1d0(r1)
    psq_l f25, 0x1c8(r1), 0, 0
    lfd f25, 0x1c0(r1)
    psq_l f24, 0x1b8(r1), 0, 0
    lfd f24, 0x1b0(r1)
    psq_l f23, 0x1a8(r1), 0, 0
    lfd f23, 0x1a0(r1)
    psq_l f22, 0x198(r1), 0, 0
    lfd f22, 0x190(r1)
    bl _restgpr_14
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_80121E14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x24(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80121E14_00001140
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80121E14_00001138
    cntlzw r0, r31
    lwz r5, 0x4(r30)
    mr r4, r6
    srwi r6, r0, 5
    bl fn_80239DAC
lbl_fn_80121E14_00001138:
    li r0, 0x0
    stw r0, 0x24(r30)
lbl_fn_80121E14_00001140:
    lwz r0, 0x28(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80121E14_00001174
    neg r3, r31
    li r0, 0xf
    or r4, r3, r31
    li r5, 0x0
    srawi r4, r4, 31
    addi r3, r30, 0x28
    andc r4, r0, r4
    bl fn_800CB5C8
    li r0, 0x0
    stw r0, 0x2c(r30)
lbl_fn_80121E14_00001174:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80121EB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80737138@ha
    addi r31, r31, lbl_80737138@l
    addi r3, r31, 0xa1
    bl fn_800DC6B4
    stw r3, lbl_8087F078
    addi r3, r31, 0xaa
    bl fn_800DC6B4
    stw r3, lbl_8087F07C
    addi r3, r31, 0xb4
    bl fn_800DC6B4
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    stw r3, lbl_8087F080
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80121F00(void)
{
    nofralloc
    lwz r3, lbl_8087F430
    blr
}

asm void fn_80121F08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x21
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80121F08_00001278
    cmpwi r4, 0x0
    beq lbl_fn_80121F08_00001280
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80121F08_0000126C
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80121F08_0000126C
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80121F08_0000126C
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80121F08_0000126C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80121F08_0000124C
    lwz r3, 0x48(r3)
    b lbl_fn_80121F08_00001250
lbl_fn_80121F08_0000124C:
    li r3, 0x0
lbl_fn_80121F08_00001250:
    cmpwi r3, 0x0
    beq lbl_fn_80121F08_0000126C
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80121F08_00001270
lbl_fn_80121F08_0000126C:
    li r0, 0x0
lbl_fn_80121F08_00001270:
    cmpwi r0, 0x0
    beq lbl_fn_80121F08_00001280
lbl_fn_80121F08_00001278:
    li r3, 0x0
    b lbl_fn_80121F08_0000129C
lbl_fn_80121F08_00001280:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A555C
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_80121F08_0000129C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80121FD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x21
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80121FD4_00001344
    cmpwi r4, 0x0
    beq lbl_fn_80121FD4_0000134C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80121FD4_00001338
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80121FD4_00001338
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80121FD4_00001338
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80121FD4_00001338
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80121FD4_00001318
    lwz r3, 0x48(r3)
    b lbl_fn_80121FD4_0000131C
lbl_fn_80121FD4_00001318:
    li r3, 0x0
lbl_fn_80121FD4_0000131C:
    cmpwi r3, 0x0
    beq lbl_fn_80121FD4_00001338
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80121FD4_0000133C
lbl_fn_80121FD4_00001338:
    li r0, 0x0
lbl_fn_80121FD4_0000133C:
    cmpwi r0, 0x0
    beq lbl_fn_80121FD4_0000134C
lbl_fn_80121FD4_00001344:
    li r3, 0x0
    b lbl_fn_80121FD4_00001368
lbl_fn_80121FD4_0000134C:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55AC
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_80121FD4_00001368:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801220A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x21
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801220A0_00001410
    cmpwi r4, 0x0
    beq lbl_fn_801220A0_00001418
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801220A0_00001404
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801220A0_00001404
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801220A0_00001404
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801220A0_00001404
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801220A0_000013E4
    lwz r3, 0x48(r3)
    b lbl_fn_801220A0_000013E8
lbl_fn_801220A0_000013E4:
    li r3, 0x0
lbl_fn_801220A0_000013E8:
    cmpwi r3, 0x0
    beq lbl_fn_801220A0_00001404
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801220A0_00001408
lbl_fn_801220A0_00001404:
    li r0, 0x0
lbl_fn_801220A0_00001408:
    cmpwi r0, 0x0
    beq lbl_fn_801220A0_00001418
lbl_fn_801220A0_00001410:
    li r3, 0x0
    b lbl_fn_801220A0_00001434
lbl_fn_801220A0_00001418:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A5584
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_801220A0_00001434:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8012216C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x21
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8012216C_000014DC
    cmpwi r4, 0x0
    beq lbl_fn_8012216C_000014E4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012216C_000014D0
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012216C_000014D0
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012216C_000014D0
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012216C_000014D0
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012216C_000014B0
    lwz r3, 0x48(r3)
    b lbl_fn_8012216C_000014B4
lbl_fn_8012216C_000014B0:
    li r3, 0x0
lbl_fn_8012216C_000014B4:
    cmpwi r3, 0x0
    beq lbl_fn_8012216C_000014D0
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012216C_000014D4
lbl_fn_8012216C_000014D0:
    li r0, 0x0
lbl_fn_8012216C_000014D4:
    cmpwi r0, 0x0
    beq lbl_fn_8012216C_000014E4
lbl_fn_8012216C_000014DC:
    li r3, 0x0
    b lbl_fn_8012216C_00001500
lbl_fn_8012216C_000014E4:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8012216C_00001500:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80122238(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087EF70
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80122238_0000153C
    li r3, 0xf
    b lbl_fn_80122238_0000154C
lbl_fn_80122238_0000153C:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_80122238_0000154C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80122280(void)
{
    nofralloc
    addi r3, r3, 0x24
    blr
}

asm void fn_80122288(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80122288_00001598
    li r4, 0xd0
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80122288_00001598
    li r31, 0x0
lbl_fn_80122288_00001598:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
