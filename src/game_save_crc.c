#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801F3FF8(void);
extern void fn_801F465C(void);
extern void fn_801F8914(void);
extern void fn_801F8928(void);
extern void fn_801FEB9C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FED70(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_801FEEFC(void);
extern void fn_80686A48(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_8073E508[];
extern u8 lbl_80782CB0[];
extern u8 lbl_80782D50[];

/* Small data declarations */
extern u32 lbl_8087F138;
extern u32 lbl_8087F148;
extern u32 lbl_80882C90;
extern u32 lbl_80882C94;
extern u32 lbl_80882C98;

/* Function declarations */
void fn_801F5BC8(void);
void fn_801F5E9C(void);
void fn_801F60B8(void);
void fn_801F6350(void);
void fn_801F6450(void);
void fn_801F6464(void);
void fn_801F64D0(void);
void fn_801F66A4(void);
void fn_801F683C(void);
void fn_801F68A0(void);
void fn_801F693C(void);
void fn_801F69A8(void);
void fn_801F6A38(void);
void fn_801F6A98(void);
void fn_801F6C10(void);
void fn_801F6C2C(void);
void fn_801F6C38(void);
void fn_801F6C80(void);
void fn_801F6D7C(void);
void fn_801F6E78(void);
void fn_801F72D4(void);

asm void fn_801F5BC8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r6, 0x3
    lfs f1, lbl_80882C98
    stw r0, 0x54(r1)
    li r0, 0x1
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    mr r3, r30
    lfs f0, 0x0(r5)
    stb r6, 0x20(r1)
    fmuls f31, f1, f0
    stb r0, 0x21(r1)
    bl fn_800DC6B4
    lbz r4, 0x21(r1)
    mr r7, r29
    lbz r0, 0x20(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x24(r1)
    extsb r5, r0
    stfs f31, 0x28(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F5BC8_000000CC
lbl_fn_801F5BC8_00000080:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F5BC8_000000C0
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F5BC8_000000C0
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F5BC8_000000C0
    mulli r0, r6, 0xc
    lwz r4, 0x28(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F5BC8_00000104
lbl_fn_801F5BC8_000000C0:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F5BC8_00000080
lbl_fn_801F5BC8_000000CC:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F5BC8_000000F8
    lwz r0, 0x20(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r3)
lbl_fn_801F5BC8_000000F8:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F5BC8_00000104:
    lfs f1, lbl_80882C98
    li r3, 0x3
    lfs f0, 0x4(r31)
    li r0, 0x2
    stb r3, 0x14(r1)
    mr r3, r30
    fmuls f31, f1, f0
    stb r0, 0x15(r1)
    bl fn_800DC6B4
    lbz r4, 0x15(r1)
    mr r7, r29
    lbz r0, 0x14(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x18(r1)
    extsb r5, r0
    stfs f31, 0x1c(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F5BC8_000001A4
lbl_fn_801F5BC8_00000158:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F5BC8_00000198
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F5BC8_00000198
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F5BC8_00000198
    mulli r0, r6, 0xc
    lwz r4, 0x1c(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F5BC8_000001DC
lbl_fn_801F5BC8_00000198:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F5BC8_00000158
lbl_fn_801F5BC8_000001A4:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F5BC8_000001D0
    lwz r0, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r3)
lbl_fn_801F5BC8_000001D0:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F5BC8_000001DC:
    lfs f1, lbl_80882C98
    li r0, 0x3
    lfs f0, 0x8(r31)
    mr r3, r30
    stb r0, 0x8(r1)
    fmuls f31, f1, f0
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r29
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F5BC8_00000278
lbl_fn_801F5BC8_0000022C:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F5BC8_0000026C
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F5BC8_0000026C
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F5BC8_0000026C
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F5BC8_000002B0
lbl_fn_801F5BC8_0000026C:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F5BC8_0000022C
lbl_fn_801F5BC8_00000278:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F5BC8_000002A4
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F5BC8_000002A4:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F5BC8_000002B0:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801F5E9C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    mr r3, r4
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r5
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_800DC6B4
    lwz r0, 0x24(r1)
    stw r3, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F5E9C_00000328
    lbz r0, 0x24(r1)
    clrlwi r30, r0, 25
    b lbl_fn_801F5E9C_0000032C
lbl_fn_801F5E9C_00000328:
    lwz r30, 0x28(r1)
lbl_fn_801F5E9C_0000032C:
    lbz r0, 0x1c(r1)
    mr r3, r29
    stb r0, 0x18(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r30
    mr r6, r29
    addi r3, r1, 0x24
    addi r8, r1, 0x18
    add r7, r29, r0
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, 0x35c(r31)
    mr r4, r31
    lwz r5, 0x20(r1)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F5E9C_00000424
lbl_fn_801F5E9C_00000378:
    lwz r0, 0x360(r4)
    cmplw r5, r0
    bne lbl_fn_801F5E9C_00000418
    slwi r0, r3, 4
    add r3, r31, r0
    lwzu r0, 0x364(r3)
    srwi. r5, r0, 31
    bne lbl_fn_801F5E9C_000003BC
    lwz r4, 0x24(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801F5E9C_000003BC
    lwz r0, 0x28(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x8(r3)
    b lbl_fn_801F5E9C_000004B8
lbl_fn_801F5E9C_000003BC:
    cmpwi r5, 0x0
    beq lbl_fn_801F5E9C_000003CC
    lwz r5, 0x4(r3)
    b lbl_fn_801F5E9C_000003D4
lbl_fn_801F5E9C_000003CC:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_801F5E9C_000003D4:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F5E9C_000003F0
    lbz r0, 0x24(r1)
    addi r6, r1, 0x26
    clrlwi r0, r0, 25
    b lbl_fn_801F5E9C_000003F8
lbl_fn_801F5E9C_000003F0:
    lwz r6, 0x2c(r1)
    lwz r0, 0x28(r1)
lbl_fn_801F5E9C_000003F8:
    lbz r4, 0x8(r1)
    slwi r0, r0, 1
    stb r4, 0xc(r1)
    add r7, r6, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801F5E9C_000004B8
lbl_fn_801F5E9C_00000418:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_801F5E9C_00000378
lbl_fn_801F5E9C_00000424:
    lwz r0, 0x35c(r31)
    slwi r0, r0, 4
    add r0, r31, r0
    addic. r30, r0, 0x360
    beq lbl_fn_801F5E9C_000004AC
    lwz r0, 0x20(r1)
    stw r0, 0x0(r30)
    lwz r3, 0x24(r1)
    srwi. r0, r3, 31
    bne lbl_fn_801F5E9C_00000464
    lwz r0, 0x28(r1)
    stw r3, 0x4(r30)
    stw r0, 0x8(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0xc(r30)
    b lbl_fn_801F5E9C_000004AC
lbl_fn_801F5E9C_00000464:
    li r0, 0x0
    stw r0, 0x4(r30)
    addi r3, r30, 0x4
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
    lwz r4, 0x28(r1)
    bl fn_800DBF68
    lwz r0, 0x28(r1)
    addi r3, r30, 0x4
    lbz r4, 0x10(r1)
    addi r8, r1, 0x14
    stb r4, 0x14(r1)
    slwi r0, r0, 1
    lwz r6, 0x2c(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F5E9C_000004AC:
    lwz r3, 0x35c(r31)
    addi r0, r3, 0x1
    stw r0, 0x35c(r31)
lbl_fn_801F5E9C_000004B8:
    addic. r0, r1, 0x24
    beq lbl_fn_801F5E9C_000004D4
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F5E9C_000004D4
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_801F5E9C_000004D4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801F60B8(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x284(r1)
    stw r31, 0x27c(r1)
    mr r31, r3
    stw r30, 0x278(r1)
    mr r30, r5
    stw r29, 0x274(r1)
    mr r29, r4
    ble lbl_fn_801F60B8_00000538
    lis r4, lbl_80782D50@ha
    mr r5, r6
    addi r3, r1, 0x30
    addi r4, r4, lbl_80782D50@l
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801F60B8_00000574
lbl_fn_801F60B8_00000538:
    bge lbl_fn_801F60B8_0000055C
    lis r4, lbl_80782D50@ha
    addi r3, r1, 0x30
    addi r4, r4, lbl_80782D50@l
    neg r5, r6
    addi r4, r4, 0xe
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801F60B8_00000574
lbl_fn_801F60B8_0000055C:
    lis r4, lbl_80782D50@ha
    addi r3, r1, 0x30
    addi r4, r4, lbl_80782D50@l
    addi r4, r4, 0x1e
    crclr 6
    bl fn_800DD3FC
lbl_fn_801F60B8_00000574:
    mr r5, r30
    addi r3, r1, 0x70
    addi r4, r1, 0x30
    crclr 6
    bl fn_800DD3FC
    li r0, 0x0
    stw r0, 0x24(r1)
    mr r3, r29
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_800DC6B4
    lwz r0, 0x24(r1)
    stw r3, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F60B8_000005BC
    lbz r0, 0x24(r1)
    clrlwi r30, r0, 25
    b lbl_fn_801F60B8_000005C0
lbl_fn_801F60B8_000005BC:
    lwz r30, 0x28(r1)
lbl_fn_801F60B8_000005C0:
    lbz r0, 0x8(r1)
    addi r3, r1, 0x70
    stb r0, 0xc(r1)
    bl fn_80686A48
    addi r6, r1, 0x70
    slwi r0, r3, 1
    mr r7, r6
    mr r5, r30
    addi r3, r1, 0x24
    addi r8, r1, 0xc
    add r7, r7, r0
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, 0x35c(r31)
    mr r4, r31
    lwz r5, 0x20(r1)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F60B8_000006BC
lbl_fn_801F60B8_00000610:
    lwz r0, 0x360(r4)
    cmplw r5, r0
    bne lbl_fn_801F60B8_000006B0
    slwi r0, r3, 4
    add r3, r31, r0
    lwzu r0, 0x364(r3)
    srwi. r5, r0, 31
    bne lbl_fn_801F60B8_00000654
    lwz r4, 0x24(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801F60B8_00000654
    lwz r0, 0x28(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x8(r3)
    b lbl_fn_801F60B8_00000750
lbl_fn_801F60B8_00000654:
    cmpwi r5, 0x0
    beq lbl_fn_801F60B8_00000664
    lwz r5, 0x4(r3)
    b lbl_fn_801F60B8_0000066C
lbl_fn_801F60B8_00000664:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_801F60B8_0000066C:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F60B8_00000688
    lbz r0, 0x24(r1)
    addi r6, r1, 0x26
    clrlwi r0, r0, 25
    b lbl_fn_801F60B8_00000690
lbl_fn_801F60B8_00000688:
    lwz r6, 0x2c(r1)
    lwz r0, 0x28(r1)
lbl_fn_801F60B8_00000690:
    lbz r4, 0x1c(r1)
    slwi r0, r0, 1
    stb r4, 0x18(r1)
    add r7, r6, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801F60B8_00000750
lbl_fn_801F60B8_000006B0:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_801F60B8_00000610
lbl_fn_801F60B8_000006BC:
    lwz r0, 0x35c(r31)
    slwi r0, r0, 4
    add r0, r31, r0
    addic. r30, r0, 0x360
    beq lbl_fn_801F60B8_00000744
    lwz r0, 0x20(r1)
    stw r0, 0x0(r30)
    lwz r3, 0x24(r1)
    srwi. r0, r3, 31
    bne lbl_fn_801F60B8_000006FC
    lwz r0, 0x28(r1)
    stw r3, 0x4(r30)
    stw r0, 0x8(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0xc(r30)
    b lbl_fn_801F60B8_00000744
lbl_fn_801F60B8_000006FC:
    li r0, 0x0
    stw r0, 0x4(r30)
    addi r3, r30, 0x4
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
    lwz r4, 0x28(r1)
    bl fn_800DBF68
    lwz r0, 0x28(r1)
    addi r3, r30, 0x4
    lbz r4, 0x14(r1)
    addi r8, r1, 0x10
    stb r4, 0x10(r1)
    slwi r0, r0, 1
    lwz r6, 0x2c(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F60B8_00000744:
    lwz r3, 0x35c(r31)
    addi r0, r3, 0x1
    stw r0, 0x35c(r31)
lbl_fn_801F60B8_00000750:
    addic. r0, r1, 0x24
    beq lbl_fn_801F60B8_0000076C
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F60B8_0000076C
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_801F60B8_0000076C:
    lwz r0, 0x284(r1)
    lwz r31, 0x27c(r1)
    lwz r30, 0x278(r1)
    lwz r29, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_801F6350(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x5
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r3, r4
    stw r30, 0x18(r1)
    mr r30, r5
    stb r6, 0x8(r1)
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r31
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r31)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stw r30, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F6350_00000838
lbl_fn_801F6350_000007EC:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F6350_0000082C
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F6350_0000082C
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F6350_0000082C
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r31, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F6350_00000870
lbl_fn_801F6350_0000082C:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F6350_000007EC
lbl_fn_801F6350_00000838:
    lwz r0, 0x58(r31)
    mulli r0, r0, 0xc
    add r0, r31, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F6350_00000864
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F6350_00000864:
    lwz r3, 0x58(r31)
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_801F6350_00000870:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F6450(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_801F6464(void)
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
    beq lbl_fn_801F6464_000008EC
    addic. r0, r3, 0x4
    beq lbl_fn_801F6464_000008DC
    lwz r0, 0x4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801F6464_000008DC
    lwz r3, 0xc(r3)
    bl dtor_80084684
lbl_fn_801F6464_000008DC:
    cmpwi r31, 0x0
    ble lbl_fn_801F6464_000008EC
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F6464_000008EC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F64D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    beq lbl_fn_801F64D0_00000AB8
    lis r30, lbl_8073E508@ha
    li r3, 0x260
    addi r5, r30, lbl_8073E508@l
    li r4, 0x8
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_801F64D0_00000AB0
    mr r4, r28
    bl fn_800D1D3C
    lis r3, lbl_80782CB0@ha
    addi r3, r3, lbl_80782CB0@l
    stw r3, 0x0(r31)
    lwz r0, lbl_8087F148
    cmpwi r0, 0x0
    bne lbl_fn_801F64D0_000009A8
    addi r5, r30, lbl_8073E508@l
    li r3, 0xc04
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801F64D0_000009A4
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_801F64D0_000009A4:
    stw r3, lbl_8087F148
lbl_fn_801F64D0_000009A8:
    lwz r30, lbl_8087F148
    mr r3, r29
    bl fn_800DC6B4
    lwz r0, 0x0(r30)
    mr r5, r30
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F64D0_00000A00
lbl_fn_801F64D0_000009CC:
    lwz r0, 0x4(r5)
    cmplw r3, r0
    bne lbl_fn_801F64D0_000009F4
    mulli r0, r4, 0xc
    add r4, r30, r0
    lwz r3, 0xc(r4)
    addi r0, r3, 0x1
    stw r0, 0xc(r4)
    lwz r4, 0x8(r4)
    b lbl_fn_801F64D0_00000A60
lbl_fn_801F64D0_000009F4:
    addi r5, r5, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_801F64D0_000009CC
lbl_fn_801F64D0_00000A00:
    stw r3, 0x8(r1)
    mr r4, r29
    lwz r3, 0x24(r28)
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xc(r1)
    li r4, 0x1
    bl fn_800D246C
    lwz r0, 0x0(r30)
    li r3, 0x1
    stw r3, 0x10(r1)
    mulli r0, r0, 0xc
    add r0, r30, r0
    addic. r4, r0, 0x4
    beq lbl_fn_801F64D0_00000A50
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    stw r3, 0x8(r4)
lbl_fn_801F64D0_00000A50:
    lwz r3, 0x0(r30)
    lwz r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x0(r30)
lbl_fn_801F64D0_00000A60:
    stw r4, 0x48(r31)
    li r6, 0x1
    lis r4, fn_801F8914@ha
    lis r5, fn_801F8928@ha
    stb r6, 0x4c(r31)
    li r0, 0x0
    lfs f1, lbl_80882C90
    addi r3, r31, 0x1e0
    stb r6, 0x4d(r31)
    addi r4, r4, fn_801F8914@l
    lfs f0, lbl_80882C94
    addi r5, r5, fn_801F8928@l
    stb r6, 0x4e(r31)
    li r6, 0x10
    li r7, 0x8
    stfs f1, 0x50(r31)
    stfs f0, 0x54(r31)
    stw r0, 0x58(r31)
    stw r0, 0x1dc(r31)
    bl fn_806958E0
lbl_fn_801F64D0_00000AB0:
    mr r3, r31
    b lbl_fn_801F64D0_00000ABC
lbl_fn_801F64D0_00000AB8:
    li r3, 0x0
lbl_fn_801F64D0_00000ABC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F66A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    beq lbl_fn_801F66A4_00000C50
    lis r4, lbl_80782CB0@ha
    addi r4, r4, lbl_80782CB0@l
    stw r4, 0x0(r3)
    lwz r0, lbl_8087F148
    cmpwi r0, 0x0
    bne lbl_fn_801F66A4_00000B50
    lis r5, lbl_8073E508@ha
    li r3, 0xc04
    addi r5, r5, lbl_8073E508@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801F66A4_00000B4C
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_801F66A4_00000B4C:
    stw r3, lbl_8087F148
lbl_fn_801F66A4_00000B50:
    lwz r31, lbl_8087F148
    li r4, 0x0
    lwz r3, 0x48(r29)
    lwz r0, 0x0(r31)
    mr r5, r31
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F66A4_00000C08
lbl_fn_801F66A4_00000B70:
    lwz r0, 0x8(r5)
    cmplw r0, r3
    bne lbl_fn_801F66A4_00000BFC
    mulli r0, r4, 0xc
    add r4, r31, r0
    addi r28, r4, 0x4
    lwz r4, 0xc(r4)
    subic. r0, r4, 0x1
    stw r0, 0x8(r28)
    bgt lbl_fn_801F66A4_00000C08
    bl fn_800D2338
    addi r0, r31, 0x4
    lis r3, 0x2aab
    subf r0, r0, r28
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r4, r0, r3
    mulli r0, r4, 0xc
    add r5, r31, r0
    b lbl_fn_801F66A4_00000BE4
lbl_fn_801F66A4_00000BC8:
    lwz r0, 0x10(r5)
    addi r4, r4, 0x1
    stw r0, 0x4(r5)
    lwz r0, 0x14(r5)
    stw r0, 0x8(r5)
    lwz r0, 0x18(r5)
    stwu r0, 0xc(r5)
lbl_fn_801F66A4_00000BE4:
    lwz r3, 0x0(r31)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_801F66A4_00000BC8
    stw r0, 0x0(r31)
    b lbl_fn_801F66A4_00000C08
lbl_fn_801F66A4_00000BFC:
    addi r5, r5, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_801F66A4_00000B70
lbl_fn_801F66A4_00000C08:
    addic. r3, r29, 0x1dc
    beq lbl_fn_801F66A4_00000C2C
    beq lbl_fn_801F66A4_00000C2C
    lis r4, fn_801F8928@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_801F8928@l
    li r5, 0x10
    li r6, 0x8
    bl fn_806959D8
lbl_fn_801F66A4_00000C2C:
    cmpwi r29, 0x0
    beq lbl_fn_801F66A4_00000C40
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_801F66A4_00000C40:
    cmpwi r30, 0x0
    ble lbl_fn_801F66A4_00000C50
    mr r3, r29
    bl dtor_80084684
lbl_fn_801F66A4_00000C50:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F683C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801F683C_00000CC0
    mr r3, r4
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    li r3, 0x1
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_801F683C_00000CC4
lbl_fn_801F683C_00000CC0:
    li r3, 0x0
lbl_fn_801F683C_00000CC4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F68A0(void)
{
    nofralloc
    lbz r0, 0x4e(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beqlr
    lbz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beqlr
    lfs f1, 0x50(r3)
    lfs f0, 0x54(r3)
    lwz r4, 0x48(r3)
    fadds f0, f1, f0
    stfs f0, 0x50(r3)
    lfs f1, 0xa0(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_801F68A0_00000D3C
    lbz r0, 0x4d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F68A0_00000D38
    fsubs f0, f0, f1
    stfs f0, 0x50(r3)
    b lbl_fn_801F68A0_00000D3C
lbl_fn_801F68A0_00000D38:
    stfs f1, 0x50(r3)
lbl_fn_801F68A0_00000D3C:
    lfs f1, 0x50(r3)
    lfs f0, lbl_80882C90
    fcmpo cr0, f1, f0
    bgelr
    lbz r0, 0x4d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F68A0_00000D6C
    lwz r4, 0x48(r3)
    lfs f0, 0xa0(r4)
    fadds f0, f1, f0
    stfs f0, 0x50(r3)
    blr
lbl_fn_801F68A0_00000D6C:
    stfs f0, 0x50(r3)
    blr
}

asm void fn_801F693C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4e(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F693C_00000DCC
    lwz r4, lbl_8087F138
    cmpwi r4, 0x0
    beq lbl_fn_801F693C_00000DA4
    stw r3, 0x1ac(r4)
lbl_fn_801F693C_00000DA4:
    mr r3, r31
    bl fn_801F6A98
    lwz r3, 0x48(r31)
    li r4, 0x1
    bl fn_801F465C
    lwz r3, lbl_8087F138
    cmpwi r3, 0x0
    beq lbl_fn_801F693C_00000DCC
    li r0, 0x0
    stw r0, 0x1ac(r3)
lbl_fn_801F693C_00000DCC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F69A8(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beqlr
    lbz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beqlr
    lfs f1, 0x50(r3)
    lfs f0, 0x54(r3)
    lwz r4, 0x48(r3)
    fadds f0, f1, f0
    stfs f0, 0x50(r3)
    lfs f1, 0xa0(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_801F69A8_00000E38
    lbz r0, 0x4d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F69A8_00000E34
    fsubs f0, f0, f1
    stfs f0, 0x50(r3)
    b lbl_fn_801F69A8_00000E38
lbl_fn_801F69A8_00000E34:
    stfs f1, 0x50(r3)
lbl_fn_801F69A8_00000E38:
    lfs f1, 0x50(r3)
    lfs f0, lbl_80882C90
    fcmpo cr0, f1, f0
    bgelr
    lbz r0, 0x4d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F69A8_00000E68
    lwz r4, 0x48(r3)
    lfs f0, 0xa0(r4)
    fadds f0, f1, f0
    stfs f0, 0x50(r3)
    blr
lbl_fn_801F69A8_00000E68:
    stfs f0, 0x50(r3)
    blr
}

asm void fn_801F6A38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F138
    cmpwi r4, 0x0
    beq lbl_fn_801F6A38_00000E94
    stw r3, 0x1ac(r4)
lbl_fn_801F6A38_00000E94:
    mr r3, r31
    bl fn_801F6A98
    lwz r3, 0x48(r31)
    li r4, 0x1
    bl fn_801F465C
    lwz r3, lbl_8087F138
    cmpwi r3, 0x0
    beq lbl_fn_801F6A38_00000EBC
    li r0, 0x0
    stw r0, 0x1ac(r3)
lbl_fn_801F6A38_00000EBC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F6A98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    addi r29, r3, 0x5c
    stw r28, 0x10(r1)
    lwz r4, 0x48(r3)
    lfs f0, 0x50(r3)
    stfs f0, 0x100(r4)
    b lbl_fn_801F6A98_00000FCC
lbl_fn_801F6A98_00000F08:
    lbz r0, 0x0(r29)
    extsb. r0, r0
    beq lbl_fn_801F6A98_00000F38
    cmpwi r0, 0x1
    beq lbl_fn_801F6A98_00000F50
    cmpwi r0, 0x2
    beq lbl_fn_801F6A98_00000F70
    cmpwi r0, 0x3
    beq lbl_fn_801F6A98_00000F90
    cmpwi r0, 0x5
    beq lbl_fn_801F6A98_00000FB0
    b lbl_fn_801F6A98_00000FC4
lbl_fn_801F6A98_00000F38:
    lwz r3, 0x48(r31)
    lfs f1, 0x8(r29)
    lwz r4, 0x4(r29)
    addi r3, r3, 0x58
    bl fn_801FECE0
    b lbl_fn_801F6A98_00000FC4
lbl_fn_801F6A98_00000F50:
    lwz r3, 0x48(r31)
    lbz r5, 0x1(r29)
    lfs f1, 0x8(r29)
    addi r3, r3, 0x58
    lwz r4, 0x4(r29)
    extsb r5, r5
    bl fn_801FED24
    b lbl_fn_801F6A98_00000FC4
lbl_fn_801F6A98_00000F70:
    lwz r3, 0x48(r31)
    lbz r5, 0x1(r29)
    lfs f1, 0x8(r29)
    addi r3, r3, 0x58
    lwz r4, 0x4(r29)
    extsb r5, r5
    bl fn_801FED70
    b lbl_fn_801F6A98_00000FC4
lbl_fn_801F6A98_00000F90:
    lwz r3, 0x48(r31)
    lbz r5, 0x1(r29)
    lfs f1, 0x8(r29)
    addi r3, r3, 0x58
    lwz r4, 0x4(r29)
    extsb r5, r5
    bl fn_801FEDBC
    b lbl_fn_801F6A98_00000FC4
lbl_fn_801F6A98_00000FB0:
    lwz r3, 0x48(r31)
    lwz r4, 0x4(r29)
    lwz r5, 0x8(r29)
    addi r3, r3, 0x58
    bl fn_801FEEFC
lbl_fn_801F6A98_00000FC4:
    addi r29, r29, 0xc
    addi r30, r30, 0x1
lbl_fn_801F6A98_00000FCC:
    lwz r0, 0x58(r31)
    cmplw r30, r0
    blt lbl_fn_801F6A98_00000F08
    mr r29, r31
    addi r30, r31, 0x1e0
    li r28, 0x0
    b lbl_fn_801F6A98_0000101C
lbl_fn_801F6A98_00000FE8:
    lwz r0, 0x4(r30)
    lwz r3, 0x48(r31)
    srwi. r0, r0, 31
    lwz r4, 0x1e0(r29)
    addi r3, r3, 0x58
    bne lbl_fn_801F6A98_00001008
    addi r5, r30, 0x6
    b lbl_fn_801F6A98_0000100C
lbl_fn_801F6A98_00001008:
    lwz r5, 0xc(r30)
lbl_fn_801F6A98_0000100C:
    bl fn_801FEE08
    addi r30, r30, 0x10
    addi r29, r29, 0x10
    addi r28, r28, 0x1
lbl_fn_801F6A98_0000101C:
    lwz r0, 0x1dc(r31)
    cmplw r28, r0
    blt lbl_fn_801F6A98_00000FE8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F6C10(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801F6C10_0000105C
    addi r3, r3, 0x48
    blr
lbl_fn_801F6C10_0000105C:
    li r3, 0x0
    blr
}

asm void fn_801F6C2C(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    lfs f1, 0xa0(r3)
    blr
}

asm void fn_801F6C38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_801F6A98
    lwz r3, 0x48(r30)
    mr r4, r31
    addi r3, r3, 0x58
    bl fn_801FEB9C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F6C80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stfd f31, 0x28(r1)
    fmr f31, f1
    stw r31, 0x24(r1)
    mr r31, r3
    mr r3, r4
    stb r0, 0x8(r1)
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r31
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r31)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F6C80_00001164
lbl_fn_801F6C80_00001118:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F6C80_00001158
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F6C80_00001158
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F6C80_00001158
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r31, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F6C80_0000119C
lbl_fn_801F6C80_00001158:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F6C80_00001118
lbl_fn_801F6C80_00001164:
    lwz r0, 0x58(r31)
    mulli r0, r0, 0xc
    add r0, r31, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F6C80_00001190
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F6C80_00001190:
    lwz r3, 0x58(r31)
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_801F6C80_0000119C:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F6D7C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x1
    stfd f31, 0x28(r1)
    fmr f31, f1
    stw r31, 0x24(r1)
    mr r31, r3
    mr r3, r4
    stb r0, 0x8(r1)
    stb r5, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r31
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r31)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F6D7C_00001260
lbl_fn_801F6D7C_00001214:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F6D7C_00001254
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F6D7C_00001254
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F6D7C_00001254
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r31, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F6D7C_00001298
lbl_fn_801F6D7C_00001254:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F6D7C_00001214
lbl_fn_801F6D7C_00001260:
    lwz r0, 0x58(r31)
    mulli r0, r0, 0xc
    add r0, r31, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F6D7C_0000128C
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F6D7C_0000128C:
    lwz r3, 0x58(r31)
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_801F6D7C_00001298:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F6E78(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r6, 0x1
    stw r0, 0x74(r1)
    li r0, 0x0
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    mr r3, r30
    stb r6, 0x38(r1)
    lfs f31, 0x0(r5)
    stb r0, 0x39(r1)
    bl fn_800DC6B4
    lbz r4, 0x39(r1)
    mr r7, r29
    lbz r0, 0x38(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x3c(r1)
    extsb r5, r0
    stfs f31, 0x40(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F6E78_00001374
lbl_fn_801F6E78_00001328:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F6E78_00001368
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F6E78_00001368
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F6E78_00001368
    mulli r0, r6, 0xc
    lwz r4, 0x40(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F6E78_000013AC
lbl_fn_801F6E78_00001368:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F6E78_00001328
lbl_fn_801F6E78_00001374:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F6E78_000013A0
    lwz r0, 0x38(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x40(r1)
    stw r0, 0x8(r3)
lbl_fn_801F6E78_000013A0:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F6E78_000013AC:
    li r0, 0x1
    stb r0, 0x2c(r1)
    lfs f31, 0x4(r31)
    mr r3, r30
    stb r0, 0x2d(r1)
    bl fn_800DC6B4
    lbz r4, 0x2d(r1)
    mr r7, r29
    lbz r0, 0x2c(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x30(r1)
    extsb r5, r0
    stfs f31, 0x34(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F6E78_00001440
lbl_fn_801F6E78_000013F4:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F6E78_00001434
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F6E78_00001434
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F6E78_00001434
    mulli r0, r6, 0xc
    lwz r4, 0x34(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F6E78_00001478
lbl_fn_801F6E78_00001434:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F6E78_000013F4
lbl_fn_801F6E78_00001440:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F6E78_0000146C
    lwz r0, 0x2c(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x30(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r3)
lbl_fn_801F6E78_0000146C:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F6E78_00001478:
    li r3, 0x1
    li r0, 0x2
    stb r3, 0x20(r1)
    mr r3, r30
    lfs f31, 0x8(r31)
    stb r0, 0x21(r1)
    bl fn_800DC6B4
    lbz r4, 0x21(r1)
    mr r7, r29
    lbz r0, 0x20(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x24(r1)
    extsb r5, r0
    stfs f31, 0x28(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F6E78_00001510
lbl_fn_801F6E78_000014C4:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F6E78_00001504
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F6E78_00001504
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F6E78_00001504
    mulli r0, r6, 0xc
    lwz r4, 0x28(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F6E78_00001548
lbl_fn_801F6E78_00001504:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F6E78_000014C4
lbl_fn_801F6E78_00001510:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F6E78_0000153C
    lwz r0, 0x20(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r3)
lbl_fn_801F6E78_0000153C:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F6E78_00001548:
    li r3, 0x1
    li r0, 0x3
    stb r3, 0x14(r1)
    mr r3, r30
    lfs f31, 0xc(r31)
    stb r0, 0x15(r1)
    bl fn_800DC6B4
    lbz r4, 0x15(r1)
    mr r7, r29
    lbz r0, 0x14(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x18(r1)
    extsb r5, r0
    stfs f31, 0x1c(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F6E78_000015E0
lbl_fn_801F6E78_00001594:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F6E78_000015D4
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F6E78_000015D4
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F6E78_000015D4
    mulli r0, r6, 0xc
    lwz r4, 0x1c(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F6E78_00001618
lbl_fn_801F6E78_000015D4:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F6E78_00001594
lbl_fn_801F6E78_000015E0:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F6E78_0000160C
    lwz r0, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r3)
lbl_fn_801F6E78_0000160C:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F6E78_00001618:
    li r3, 0x1
    li r0, 0x4
    stb r3, 0x8(r1)
    mr r3, r30
    lfs f31, 0x10(r31)
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r29
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F6E78_000016B0
lbl_fn_801F6E78_00001664:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F6E78_000016A4
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F6E78_000016A4
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F6E78_000016A4
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F6E78_000016E8
lbl_fn_801F6E78_000016A4:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F6E78_00001664
lbl_fn_801F6E78_000016B0:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F6E78_000016DC
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F6E78_000016DC:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F6E78_000016E8:
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

asm void fn_801F72D4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r6, 0x1
    stw r0, 0x54(r1)
    li r0, 0x0
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    mr r3, r30
    stb r6, 0x20(r1)
    lfs f31, 0x0(r5)
    stb r0, 0x21(r1)
    bl fn_800DC6B4
    lbz r4, 0x21(r1)
    mr r7, r29
    lbz r0, 0x20(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x24(r1)
    extsb r5, r0
    stfs f31, 0x28(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F72D4_000017D0
lbl_fn_801F72D4_00001784:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F72D4_000017C4
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F72D4_000017C4
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F72D4_000017C4
    mulli r0, r6, 0xc
    lwz r4, 0x28(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F72D4_00001808
lbl_fn_801F72D4_000017C4:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F72D4_00001784
lbl_fn_801F72D4_000017D0:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F72D4_000017FC
    lwz r0, 0x20(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r3)
lbl_fn_801F72D4_000017FC:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F72D4_00001808:
    li r0, 0x1
    stb r0, 0x14(r1)
    lfs f31, 0x4(r31)
    mr r3, r30
    stb r0, 0x15(r1)
    bl fn_800DC6B4
    lbz r4, 0x15(r1)
    mr r7, r29
    lbz r0, 0x14(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x18(r1)
    extsb r5, r0
    stfs f31, 0x1c(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F72D4_0000189C
lbl_fn_801F72D4_00001850:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F72D4_00001890
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F72D4_00001890
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F72D4_00001890
    mulli r0, r6, 0xc
    lwz r4, 0x1c(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F72D4_000018D4
lbl_fn_801F72D4_00001890:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F72D4_00001850
lbl_fn_801F72D4_0000189C:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F72D4_000018C8
    lwz r0, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r3)
lbl_fn_801F72D4_000018C8:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F72D4_000018D4:
    li r3, 0x1
    li r0, 0x4
    stb r3, 0x8(r1)
    mr r3, r30
    lfs f31, 0x10(r31)
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r29
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F72D4_0000196C
lbl_fn_801F72D4_00001920:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F72D4_00001960
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F72D4_00001960
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F72D4_00001960
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F72D4_000019A4
lbl_fn_801F72D4_00001960:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F72D4_00001920
lbl_fn_801F72D4_0000196C:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F72D4_00001998
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F72D4_00001998:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F72D4_000019A4:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
