#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000DD0C(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_80012C88(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_8001336C(void);
extern void fn_800133B0(void);
extern void fn_80013404(void);
extern void fn_80057A64(void);
extern void fn_80057A68(void);
extern void fn_80092814(void);
extern void fn_800F7260(void);
extern void fn_800F7FF0(void);
extern void fn_801125F8(void);
extern void fn_8016EB48(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_80682428(void);

/* External data declarations */
extern u8 lbl_80737200[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F430;
extern u32 lbl_8087F540;
extern u32 lbl_808818A8;
extern u32 lbl_808818AC;
extern u32 lbl_808818B0;
extern u32 lbl_808818B4;
extern u32 lbl_808818B8;
extern u32 lbl_808818BC;
extern u32 lbl_808818C0;
extern u32 lbl_808818C4;
extern u32 lbl_808818C8;
extern u32 lbl_808818CC;
extern u32 lbl_808818D0;
extern u32 lbl_808818D4;
extern u32 lbl_808818D8;
extern u32 lbl_808818DC;
extern u32 lbl_808818E0;
extern u32 lbl_808818E4;
extern u32 lbl_808818E8;
extern u32 lbl_808818EC;
extern u32 lbl_808818F0;
extern u32 lbl_808818F4;

/* Function declarations */
void fn_80129144(void);
void fn_80129670(void);
void fn_8012980C(void);
void fn_801298AC(void);
void fn_801298EC(void);
void fn_80129930(void);
void fn_80129954(void);
void fn_80129978(void);
void fn_80129A48(void);
void fn_80129A6C(void);
void fn_8012A190(void);
void fn_8012A1B8(void);
void fn_8012A1C0(void);
void fn_8012A1E0(void);
void fn_8012A218(void);
void fn_8012A288(void);

asm void fn_80129144(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80129144_00000028
    lwz r5, 0x10d8(r4)
    b lbl_fn_80129144_00000040
lbl_fn_80129144_00000028:
    lwz r4, lbl_8087F540
    cmpwi r4, 0x0
    beq lbl_fn_80129144_0000003C
    lwz r5, 0x1a6c(r4)
    b lbl_fn_80129144_00000040
lbl_fn_80129144_0000003C:
    li r5, 0x0
lbl_fn_80129144_00000040:
    lwz r4, 0x44(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_80129144_00000174
    cmpwi r4, 0x1
    beq lbl_fn_80129144_00000074
    cmpwi r4, 0x3
    beq lbl_fn_80129144_000000D0
    cmpwi r4, 0x4
    beq lbl_fn_80129144_00000174
    cmpwi r4, 0x5
    beq lbl_fn_80129144_00000360
    b lbl_fn_80129144_000003BC
lbl_fn_80129144_00000074:
    lwz r0, 0x8(r3)
    addi r4, r1, 0x2c
    psq_l f1, 0x10(r3), 0, 0
    psq_st f1, 0x4c(r3), 0, 0
    lfs f2, 0x18(r3)
    stw r0, 0x0(r3)
    lwz r5, 0xa4(r3)
    stfs f2, 0x54(r3)
    lfs f5, 0x50(r3)
    lfs f0, 0x530(r5)
    lfs f4, 0x52c(r5)
    fsubs f2, f2, f0
    lfs f0, 0x528(r5)
    lfs f3, 0x4c(r3)
    fsubs f4, f5, f4
    stfs f2, 0x34(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x58(r3), 0, 0
    stfs f2, 0x60(r3)
    b lbl_fn_80129144_00000508
lbl_fn_80129144_000000D0:
    lwz r0, 0x8(r3)
    li r7, 0x0
    stw r0, 0x0(r3)
    li r8, 0x0
    lwz r6, 0x20(r3)
    lwz r0, 0x78(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80129144_0000011C
lbl_fn_80129144_000000F4:
    lwz r4, 0x7c(r5)
    lwzx r0, r4, r8
    cmpw r6, r0
    bne lbl_fn_80129144_00000110
    mulli r0, r7, 0x28
    add r4, r4, r0
    b lbl_fn_80129144_00000120
lbl_fn_80129144_00000110:
    addi r8, r8, 0x28
    addi r7, r7, 0x1
    bdnz lbl_fn_80129144_000000F4
lbl_fn_80129144_0000011C:
    li r4, 0x0
lbl_fn_80129144_00000120:
    psq_l f1, 0x4(r4), 0, 0
    addi r5, r1, 0x20
    lfs f2, 0xc(r4)
    stfs f2, 0x54(r3)
    lwz r4, 0xa4(r3)
    psq_st f1, 0x4c(r3), 0, 0
    lfs f0, 0x530(r4)
    lfs f5, 0x50(r3)
    fsubs f2, f2, f0
    lfs f4, 0x52c(r4)
    lfs f0, 0x528(r4)
    lfs f3, 0x4c(r3)
    fsubs f4, f5, f4
    stfs f2, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x58(r3), 0, 0
    stfs f2, 0x60(r3)
    b lbl_fn_80129144_00000508
lbl_fn_80129144_00000174:
    lwz r8, 0xa4(r3)
    lwz r5, 0xd0c(r8)
    cmpwi r5, 0x0
    ble lbl_fn_80129144_000002E8
    lwz r4, 0x24(r3)
    lwz r0, 0xd0c(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80129144_000002E8
    cmpw r5, r0
    beq lbl_fn_80129144_000002E8
    psq_l f1, 0x528(r8), 0, 0
    lis r4, lbl_807C7030@ha
    lfs f2, 0x530(r8)
    addi r4, r4, lbl_807C7030@l
    stfs f2, 0x54(r3)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x4c(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r3)
    psq_st f1, 0x58(r3), 0, 0
    lwz r3, 0x38(r8)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80129144_000001F0
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_80129144_000001F0
    li r7, 0x1
lbl_fn_80129144_000001F0:
    cmpwi r7, 0x0
    beq lbl_fn_80129144_0000020C
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80129144_0000020C
    li r6, 0x1
lbl_fn_80129144_0000020C:
    cmpwi r6, 0x0
    beq lbl_fn_80129144_00000240
    lwz r0, 0x55c(r8)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80129144_00000234
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_80129144_00000234
    li r3, 0x1
lbl_fn_80129144_00000234:
    cmpwi r3, 0x0
    bne lbl_fn_80129144_00000240
    li r5, 0x1
lbl_fn_80129144_00000240:
    cmpwi r5, 0x0
    beq lbl_fn_80129144_0000025C
    mr r3, r8
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80129144_0000025C:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80129144_00000344
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80129144_00000344
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80129144_00000344
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80129144_000002A0
    lwz r3, 0x10d8(r3)
    b lbl_fn_80129144_000002B8
lbl_fn_80129144_000002A0:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80129144_000002B4
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80129144_000002B8
lbl_fn_80129144_000002B4:
    li r3, 0x0
lbl_fn_80129144_000002B8:
    cmpwi r3, 0x0
    beq lbl_fn_80129144_00000344
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80129144_00000344
    li r0, 0x0
    stw r0, 0x3c(r3)
    b lbl_fn_80129144_00000344
lbl_fn_80129144_000002E8:
    lwz r0, 0x8(r3)
    addi r4, r1, 0x14
    stw r0, 0x0(r3)
    lwz r5, 0x24(r3)
    lwz r6, 0xa4(r3)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x54(r3)
    psq_st f1, 0x4c(r3), 0, 0
    lfs f0, 0x530(r6)
    lfs f5, 0x50(r3)
    fsubs f2, f2, f0
    lfs f4, 0x52c(r6)
    lfs f0, 0x528(r6)
    lfs f3, 0x4c(r3)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x58(r3), 0, 0
    stfs f2, 0x60(r3)
lbl_fn_80129144_00000344:
    lwz r0, 0x44(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80129144_00000508
    lwz r0, 0x48(r31)
    ori r0, r0, 0x20
    stw r0, 0x48(r31)
    b lbl_fn_80129144_00000508
lbl_fn_80129144_00000360:
    lwz r0, 0x8(r3)
    addi r4, r1, 0x8
    psq_l f1, 0x30(r3), 0, 0
    psq_st f1, 0x4c(r3), 0, 0
    lfs f2, 0x38(r3)
    stw r0, 0x0(r3)
    lwz r5, 0xa4(r3)
    stfs f2, 0x54(r3)
    lfs f5, 0x50(r3)
    lfs f0, 0x530(r5)
    lfs f4, 0x52c(r5)
    fsubs f2, f2, f0
    lfs f0, 0x528(r5)
    lfs f3, 0x4c(r3)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x58(r3), 0, 0
    stfs f2, 0x60(r3)
    b lbl_fn_80129144_00000508
lbl_fn_80129144_000003BC:
    lwz r8, 0xa4(r3)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r8), 0, 0
    li r6, 0x0
    lfs f2, 0x530(r8)
    li r7, 0x0
    stfs f2, 0x54(r3)
    psq_st f1, 0x4c(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r3)
    psq_st f1, 0x58(r3), 0, 0
    lwz r3, 0x38(r8)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80129144_00000414
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_80129144_00000414
    li r7, 0x1
lbl_fn_80129144_00000414:
    cmpwi r7, 0x0
    beq lbl_fn_80129144_00000430
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80129144_00000430
    li r6, 0x1
lbl_fn_80129144_00000430:
    cmpwi r6, 0x0
    beq lbl_fn_80129144_00000464
    lwz r0, 0x55c(r8)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80129144_00000458
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_80129144_00000458
    li r3, 0x1
lbl_fn_80129144_00000458:
    cmpwi r3, 0x0
    bne lbl_fn_80129144_00000464
    li r5, 0x1
lbl_fn_80129144_00000464:
    cmpwi r5, 0x0
    beq lbl_fn_80129144_00000480
    mr r3, r8
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80129144_00000480:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80129144_00000508
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80129144_00000508
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80129144_00000508
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80129144_000004C4
    lwz r3, 0x10d8(r3)
    b lbl_fn_80129144_000004DC
lbl_fn_80129144_000004C4:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80129144_000004D8
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80129144_000004DC
lbl_fn_80129144_000004D8:
    li r3, 0x0
lbl_fn_80129144_000004DC:
    cmpwi r3, 0x0
    beq lbl_fn_80129144_00000508
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80129144_00000508
    li r0, 0x0
    stw r0, 0x3c(r3)
lbl_fn_80129144_00000508:
    lwz r3, 0x44(r31)
    li r0, 0x0
    stw r3, 0x40(r31)
    stw r0, 0x94(r31)
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80129670(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r7, lbl_8087F430
    cmpwi r7, 0x0
    beq lbl_fn_80129670_00000544
    lwz r7, 0x10d8(r7)
    b lbl_fn_80129670_0000055C
lbl_fn_80129670_00000544:
    lwz r7, lbl_8087F540
    cmpwi r7, 0x0
    beq lbl_fn_80129670_00000558
    lwz r7, 0x1a6c(r7)
    b lbl_fn_80129670_0000055C
lbl_fn_80129670_00000558:
    li r7, 0x0
lbl_fn_80129670_0000055C:
    cmpwi r5, 0x0
    ble lbl_fn_80129670_00000604
    cmpwi r6, 0x0
    ble lbl_fn_80129670_00000604
    cmpw r5, r6
    beq lbl_fn_80129670_00000604
    subi r4, r5, 0x1
    subi r0, r6, 0x1
    mulli r6, r4, 0x30
    lwz r5, 0x9c(r7)
    addi r4, r1, 0x14
    add r5, r5, r6
    psq_l f1, 0x4(r5), 0, 0
    mulli r8, r0, 0x30
    lfs f2, 0xc(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x9c(r7)
    lfs f4, 0x4(r3)
    add r5, r0, r8
    lfs f0, 0x0(r3)
    lfs f3, 0xc(r5)
    lfs f5, 0x8(r5)
    fsubs f2, f3, f2
    lfs f3, 0x4(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0x14(r3)
    stfs f0, 0x14(r1)
    stfs f4, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    lwz r0, 0x9c(r7)
    stfs f2, 0x1c(r1)
    add r4, r0, r6
    lfs f0, 0x14(r4)
    stfs f0, 0x18(r3)
    lwz r0, 0x9c(r7)
    add r4, r0, r8
    lfs f0, 0x14(r4)
    stfs f0, 0x1c(r3)
    b lbl_fn_80129670_000006C0
lbl_fn_80129670_00000604:
    cmpwi r6, 0x0
    ble lbl_fn_80129670_00000690
    lwz r5, 0xa4(r4)
    subi r0, r6, 0x1
    mulli r6, r0, 0x30
    addi r4, r1, 0x8
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x9c(r7)
    lfs f4, 0x4(r3)
    add r5, r0, r6
    lfs f0, 0x0(r3)
    lfs f3, 0xc(r5)
    lfs f5, 0x8(r5)
    fsubs f2, f3, f2
    lfs f3, 0x4(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0x14(r3)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    lwz r0, 0x9c(r7)
    stfs f2, 0x10(r1)
    add r4, r0, r6
    lfs f0, 0x14(r4)
    stfs f0, 0x18(r3)
    lwz r0, 0x9c(r7)
    add r4, r0, r6
    lfs f0, 0x14(r4)
    stfs f0, 0x1c(r3)
    b lbl_fn_80129670_000006C0
lbl_fn_80129670_00000690:
    psq_l f1, 0x70(r4), 0, 0
    lfs f2, 0x78(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x7c(r4), 0, 0
    lfs f2, 0x84(r4)
    stfs f2, 0x14(r3)
    psq_st f1, 0xc(r3), 0, 0
    lfs f0, 0x88(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x8c(r4)
    stfs f0, 0x1c(r3)
lbl_fn_80129670_000006C0:
    addi r1, r1, 0x20
    blr
}

asm void fn_8012980C(void)
{
    nofralloc
    lfs f3, lbl_808818A8
    li r4, 0x0
    lfs f0, lbl_808818B4
    li r0, 0x1
    lfs f2, lbl_808818AC
    lfs f1, lbl_808818B0
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f3, 0xc(r3)
    stfs f3, 0x10(r3)
    stfs f3, 0x14(r3)
    stfs f3, 0x18(r3)
    stfs f3, 0x1c(r3)
    stfs f3, 0x20(r3)
    stfs f2, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f3, 0x2c(r3)
    stw r4, 0x30(r3)
    stb r4, 0x34(r3)
    stb r4, 0x35(r3)
    sth r0, 0x36(r3)
    stfs f0, 0x38(r3)
    stw r4, 0x4c(r3)
    stw r4, 0x50(r3)
    stfs f3, 0x54(r3)
    stfs f3, 0x58(r3)
    stfs f3, 0x5c(r3)
    stfs f0, 0x78(r3)
    stfs f3, 0x3c(r3)
    stfs f3, 0x40(r3)
    stfs f3, 0x44(r3)
    stfs f3, 0x48(r3)
    stfs f3, 0x60(r3)
    stfs f3, 0x64(r3)
    stfs f3, 0x68(r3)
    stfs f3, 0x6c(r3)
    stfs f3, 0x70(r3)
    stfs f3, 0x74(r3)
    blr
}

asm void fn_801298AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801298AC_00000790
    cmpwi r4, 0x0
    ble lbl_fn_801298AC_00000790
    bl dtor_80084684
lbl_fn_801298AC_00000790:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801298EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80737200@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    addi r3, r4, 0xb0
    addi r4, r5, lbl_80737200@l
    li r5, 0x0
    bl fn_80092814
    stw r3, 0x30(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80129930(void)
{
    nofralloc
    fmr f0, f1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    li r0, 0x2
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    stw r0, 0x4(r3)
    stfs f0, 0x38(r3)
    blr
}

asm void fn_80129954(void)
{
    nofralloc
    fmr f0, f1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    li r0, 0x3
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    stw r0, 0x4(r3)
    stfs f0, 0x38(r3)
    blr
}

asm void fn_80129978(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80129978_000008BC
    mr r4, r5
    mr r3, r30
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80129978_0000088C
    li r3, 0x0
    b lbl_fn_80129978_00000898
lbl_fn_80129978_0000088C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_80129978_00000898:
    psq_l f1, 0x0(r31), 0, 0
    li r0, 0x1
    lfs f2, 0x8(r31)
    stw r3, 0x8(r29)
    psq_st f1, 0xc(r29), 0, 0
    stfs f2, 0x14(r29)
    stw r0, 0x4(r29)
    stfs f31, 0x38(r29)
    b lbl_fn_80129978_000008E0
lbl_fn_80129978_000008BC:
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r4, 0x8
    lfs f2, 0x8(r6)
    li r0, 0x1
    stw r4, 0x8(r3)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    stw r0, 0x4(r3)
    stfs f31, 0x38(r3)
lbl_fn_80129978_000008E0:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80129A48(void)
{
    nofralloc
    lfs f0, lbl_808818A8
    li r0, 0x0
    stw r0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stw r0, 0x4(r3)
    stfs f1, 0x38(r3)
    blr
}

asm void fn_80129A6C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x170
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    bl _savegpr_25
    lfs f1, lbl_808818A8
    mr r31, r3
    addi r3, r1, 0xf4
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    addi r3, r1, 0xe8
    addi r4, r31, 0x24
    bl fn_8001047C
    lha r0, 0x36(r31)
    lfs f0, lbl_808818A8
    cmpwi r0, 0x0
    stfs f0, 0x3c(r31)
    stfs f0, 0x40(r31)
    stfs f0, 0x44(r31)
    stfs f0, 0x48(r31)
    beq lbl_fn_80129A6C_000009A4
    cmpwi r0, 0x1
    beq lbl_fn_80129A6C_000009B0
    cmpwi r0, 0x2
    beq lbl_fn_80129A6C_000009C0
    cmpwi r0, 0x3
    beq lbl_fn_80129A6C_000009E4
    b lbl_fn_80129A6C_00000A04
lbl_fn_80129A6C_000009A4:
    lfs f0, lbl_808818B8
    stfs f0, 0x3c(r31)
    b lbl_fn_80129A6C_00000A04
lbl_fn_80129A6C_000009B0:
    lfs f0, lbl_808818BC
    stfs f0, 0x3c(r31)
    stfs f0, 0x40(r31)
    b lbl_fn_80129A6C_00000A04
lbl_fn_80129A6C_000009C0:
    lfs f2, lbl_808818C0
    addi r3, r1, 0xe8
    lfs f0, lbl_808818C4
    stfs f2, 0x3c(r31)
    lfs f1, lbl_808818C8
    stfs f2, 0x40(r31)
    stfs f0, 0x44(r31)
    bl fn_8012A190
    b lbl_fn_80129A6C_00000A04
lbl_fn_80129A6C_000009E4:
    lfs f2, lbl_808818CC
    addi r3, r1, 0xe8
    lfs f0, lbl_808818D0
    stfs f2, 0x3c(r31)
    lfs f1, lbl_808818D4
    stfs f2, 0x40(r31)
    stfs f0, 0x44(r31)
    bl fn_8012A190
lbl_fn_80129A6C_00000A04:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80129A6C_00000A80
    addi r3, r1, 0xf4
    addi r4, r31, 0xc
    bl fn_8000D124
    lfs f1, 0xf8(r1)
    bl fn_80013404
    lfs f2, 0x28(r31)
    fcmpo cr0, f1, f2
    ble lbl_fn_80129A6C_00000A4C
    lfs f1, 0xf8(r1)
    lfs f0, lbl_808818A8
    fcmpo cr0, f1, f0
    ble lbl_fn_80129A6C_00000A44
    b lbl_fn_80129A6C_00000A48
lbl_fn_80129A6C_00000A44:
    fneg f2, f2
lbl_fn_80129A6C_00000A48:
    stfs f2, 0xf8(r1)
lbl_fn_80129A6C_00000A4C:
    lfs f1, 0xf4(r1)
    bl fn_80013404
    lfs f2, 0x24(r31)
    fcmpo cr0, f1, f2
    ble lbl_fn_80129A6C_00000C28
    lfs f1, 0xf4(r1)
    lfs f0, lbl_808818A8
    fcmpo cr0, f1, f0
    ble lbl_fn_80129A6C_00000A74
    b lbl_fn_80129A6C_00000A78
lbl_fn_80129A6C_00000A74:
    fneg f2, f2
lbl_fn_80129A6C_00000A78:
    stfs f2, 0xf4(r1)
    b lbl_fn_80129A6C_00000C28
lbl_fn_80129A6C_00000A80:
    cmpwi r0, 0x0
    beq lbl_fn_80129A6C_00000C28
    addi r3, r1, 0xdc
    addi r4, r31, 0xc
    bl fn_8001047C
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80129A6C_00000AC0
    lwz r4, 0x8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80129A6C_00000AC0
    addi r3, r1, 0x7c
    bl fn_8000D0F8
    addi r3, r1, 0xdc
    addi r4, r1, 0x7c
    bl fn_80012C88
lbl_fn_80129A6C_00000AC0:
    addi r3, r1, 0xd0
    bl fn_80057A64
    lwz r27, 0x30(r31)
    cmpwi r27, 0x0
    bge lbl_fn_80129A6C_00000AEC
    lwz r3, 0x0(r31)
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0xf4
    bl fn_8000D124
    b lbl_fn_80129A6C_00000B6C
lbl_fn_80129A6C_00000AEC:
    lwz r3, 0x0(r31)
    bl fn_8000DD0C
    mr r4, r27
    bl fn_8012A1C0
    mr r4, r3
    addi r3, r1, 0x64
    bl fn_8000D0F8
    addi r3, r1, 0x70
    addi r4, r1, 0xdc
    addi r5, r1, 0x64
    bl fn_80013338
    addi r3, r1, 0xd0
    addi r4, r1, 0x70
    bl fn_8000D124
    addi r3, r1, 0xd0
    bl fn_8012A1E0
    cmpwi r3, 0x0
    beq lbl_fn_80129A6C_00000B4C
    lwz r3, 0x0(r31)
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0xf4
    bl fn_8000D124
    b lbl_fn_80129A6C_00000B6C
lbl_fn_80129A6C_00000B4C:
    addi r3, r1, 0xd0
    bl fn_800F7FF0
    addi r3, r1, 0x58
    addi r4, r1, 0xd0
    bl fn_80011034
    addi r3, r1, 0xf4
    addi r4, r1, 0x58
    bl fn_8000D124
lbl_fn_80129A6C_00000B6C:
    lis r29, fn_800133B0@ha
    addi r3, r1, 0xf4
    addi r4, r29, fn_800133B0@l
    bl fn_8012A218
    lwz r3, 0x0(r31)
    bl fn_8012A1B8
    lfs f1, 0x4(r3)
    addi r3, r1, 0xf4
    lfs f0, 0xf8(r1)
    addi r4, r29, fn_800133B0@l
    fsubs f0, f0, f1
    stfs f0, 0xf8(r1)
    bl fn_8012A218
    lfs f1, lbl_808818D8
    addi r3, r1, 0xf4
    bl fn_8012A190
    lfs f1, 0xf4(r1)
    lfs f0, lbl_808818A8
    fcmpo cr0, f1, f0
    ble lbl_fn_80129A6C_00000BC8
    lfs f0, lbl_808818DC
    fmuls f0, f1, f0
    stfs f0, 0xf4(r1)
lbl_fn_80129A6C_00000BC8:
    lfs f1, 0xf8(r1)
    bl fn_80013404
    lfs f2, 0xec(r1)
    fcmpo cr0, f1, f2
    ble lbl_fn_80129A6C_00000BF8
    lfs f1, 0xf8(r1)
    lfs f0, lbl_808818A8
    fcmpo cr0, f1, f0
    ble lbl_fn_80129A6C_00000BF0
    b lbl_fn_80129A6C_00000BF4
lbl_fn_80129A6C_00000BF0:
    fneg f2, f2
lbl_fn_80129A6C_00000BF4:
    stfs f2, 0xf8(r1)
lbl_fn_80129A6C_00000BF8:
    lfs f1, 0xf4(r1)
    bl fn_80013404
    lfs f2, 0xe8(r1)
    fcmpo cr0, f1, f2
    ble lbl_fn_80129A6C_00000C28
    lfs f1, 0xf4(r1)
    lfs f0, lbl_808818A8
    fcmpo cr0, f1, f0
    ble lbl_fn_80129A6C_00000C20
    b lbl_fn_80129A6C_00000C24
lbl_fn_80129A6C_00000C20:
    fneg f2, f2
lbl_fn_80129A6C_00000C24:
    stfs f2, 0xf4(r1)
lbl_fn_80129A6C_00000C28:
    lfs f1, 0x38(r31)
    addi r3, r1, 0x4c
    addi r4, r31, 0x18
    addi r5, r1, 0xf4
    bl fn_800F7260
    addi r3, r31, 0x18
    addi r4, r1, 0x4c
    bl fn_8000D124
    lwz r0, 0x4(r31)
    li r3, 0x0
    stb r3, 0x34(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80129A6C_00000C68
    li r0, 0x1
    stb r0, 0x34(r31)
    b lbl_fn_80129A6C_00000C98
lbl_fn_80129A6C_00000C68:
    lfs f1, 0x18(r31)
    bl fn_80013404
    lfs f0, lbl_808818E0
    fcmpo cr0, f1, f0
    bgt lbl_fn_80129A6C_00000C90
    lfs f1, 0x1c(r31)
    bl fn_80013404
    lfs f0, lbl_808818E0
    fcmpo cr0, f1, f0
    ble lbl_fn_80129A6C_00000C98
lbl_fn_80129A6C_00000C90:
    li r0, 0x1
    stb r0, 0x34(r31)
lbl_fn_80129A6C_00000C98:
    lfs f1, lbl_808818E8
    bl fn_801125F8
    fmr f31, f1
    lfs f1, lbl_808818E4
    bl fn_801125F8
    fmr f2, f31
    lfs f3, lbl_808818A8
    addi r3, r1, 0xc4
    bl fn_8000D114
    lfs f1, lbl_808818F0
    bl fn_801125F8
    fmr f31, f1
    lfs f1, lbl_808818EC
    bl fn_801125F8
    fmr f2, f31
    lfs f3, lbl_808818A8
    addi r3, r1, 0xb8
    bl fn_8000D114
    addi r3, r1, 0x100
    bl fn_80057A64
    addi r3, r1, 0x10c
    bl fn_80057A64
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80129A6C_00000D18
    addi r3, r1, 0x100
    addi r4, r31, 0x54
    bl fn_8000D124
    addi r3, r1, 0x10c
    addi r4, r31, 0x54
    bl fn_8000D124
    b lbl_fn_80129A6C_00000F9C
lbl_fn_80129A6C_00000D18:
    cmpwi r0, 0x0
    beq lbl_fn_80129A6C_00000F74
    addi r3, r1, 0xac
    addi r4, r31, 0x54
    bl fn_8001047C
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80129A6C_00000D58
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80129A6C_00000D58
    addi r3, r1, 0x40
    bl fn_8000D0F8
    addi r3, r1, 0xac
    addi r4, r1, 0x40
    bl fn_80012C88
lbl_fn_80129A6C_00000D58:
    lwz r3, 0x0(r31)
    bl fn_8000DD0C
    lis r4, lbl_80737200@ha
    li r5, 0x0
    addi r29, r4, lbl_80737200@l
    addi r4, r29, 0x5
    bl fn_80092814
    stw r3, 0x8(r1)
    lwz r3, 0x0(r31)
    bl fn_8000DD0C
    addi r4, r29, 0xb
    li r5, 0x0
    bl fn_80092814
    stw r3, 0xc(r1)
    addi r27, r1, 0x8
    addi r28, r1, 0x100
    li r25, 0x0
    lis r30, fn_800133B0@ha
lbl_fn_80129A6C_00000DA0:
    addi r3, r1, 0xa0
    bl fn_80057A64
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    bge lbl_fn_80129A6C_00000DCC
    lwz r3, 0x0(r31)
    bl fn_8012A1B8
    mr r4, r3
    mr r3, r28
    bl fn_8000D124
    b lbl_fn_80129A6C_00000E4C
lbl_fn_80129A6C_00000DCC:
    lwz r3, 0x0(r31)
    bl fn_8000DD0C
    mr r4, r26
    bl fn_8012A1C0
    mr r4, r3
    addi r3, r1, 0x28
    bl fn_8000D0F8
    addi r3, r1, 0x34
    addi r4, r1, 0xac
    addi r5, r1, 0x28
    bl fn_80013338
    addi r3, r1, 0xa0
    addi r4, r1, 0x34
    bl fn_8000D124
    addi r3, r1, 0xa0
    bl fn_8012A1E0
    cmpwi r3, 0x0
    beq lbl_fn_80129A6C_00000E2C
    lwz r3, 0x0(r31)
    bl fn_8012A1B8
    mr r4, r3
    mr r3, r28
    bl fn_8000D124
    b lbl_fn_80129A6C_00000E4C
lbl_fn_80129A6C_00000E2C:
    addi r3, r1, 0xa0
    bl fn_800F7FF0
    addi r3, r1, 0x1c
    addi r4, r1, 0xa0
    bl fn_80011034
    mr r3, r28
    addi r4, r1, 0x1c
    bl fn_8000D124
lbl_fn_80129A6C_00000E4C:
    mr r3, r28
    addi r4, r30, fn_800133B0@l
    bl fn_8012A218
    lfs f1, lbl_808818A8
    addi r3, r1, 0x94
    lfs f3, lbl_808818E4
    fmr f2, f1
    bl fn_8000D114
    lwz r3, 0x0(r31)
    bl fn_8000DD0C
    addi r4, r29, 0x11
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x118
    bl fn_8001336C
    addi r3, r1, 0x94
    addi r4, r1, 0x118
    bl fn_80011410
    addi r3, r1, 0x88
    addi r4, r1, 0x94
    bl fn_80011034
    addi r3, r1, 0x88
    addi r4, r30, fn_800133B0@l
    bl fn_8012A218
    lfs f1, 0x4(r28)
    mr r3, r28
    lfs f0, 0x8c(r1)
    addi r4, r30, fn_800133B0@l
    fsubs f0, f1, f0
    stfs f0, 0x4(r28)
    bl fn_8012A218
    lfs f1, lbl_808818F4
    mr r3, r28
    bl fn_8012A190
    lfs f1, 0xbc(r1)
    lfs f0, 0x4(r28)
    fcmpo cr0, f1, f0
    ble lbl_fn_80129A6C_00000EE8
    b lbl_fn_80129A6C_00000EEC
lbl_fn_80129A6C_00000EE8:
    fmr f1, f0
lbl_fn_80129A6C_00000EEC:
    lfs f2, 0xc8(r1)
    fcmpo cr0, f2, f1
    bge lbl_fn_80129A6C_00000EFC
    b lbl_fn_80129A6C_00000F14
lbl_fn_80129A6C_00000EFC:
    lfs f2, 0xbc(r1)
    lfs f0, 0x4(r28)
    fcmpo cr0, f2, f0
    ble lbl_fn_80129A6C_00000F10
    b lbl_fn_80129A6C_00000F14
lbl_fn_80129A6C_00000F10:
    fmr f2, f0
lbl_fn_80129A6C_00000F14:
    stfs f2, 0x4(r28)
    lfs f1, 0xb8(r1)
    lfs f0, 0x0(r28)
    fcmpo cr0, f1, f0
    ble lbl_fn_80129A6C_00000F2C
    b lbl_fn_80129A6C_00000F30
lbl_fn_80129A6C_00000F2C:
    fmr f1, f0
lbl_fn_80129A6C_00000F30:
    lfs f2, 0xc4(r1)
    fcmpo cr0, f2, f1
    bge lbl_fn_80129A6C_00000F40
    b lbl_fn_80129A6C_00000F58
lbl_fn_80129A6C_00000F40:
    lfs f2, 0xb8(r1)
    lfs f0, 0x0(r28)
    fcmpo cr0, f2, f0
    ble lbl_fn_80129A6C_00000F54
    b lbl_fn_80129A6C_00000F58
lbl_fn_80129A6C_00000F54:
    fmr f2, f0
lbl_fn_80129A6C_00000F58:
    addi r25, r25, 0x1
    stfs f2, 0x0(r28)
    cmpwi r25, 0x2
    addi r27, r27, 0x4
    addi r28, r28, 0xc
    blt lbl_fn_80129A6C_00000DA0
    b lbl_fn_80129A6C_00000F9C
lbl_fn_80129A6C_00000F74:
    lfs f1, lbl_808818A8
    addi r3, r1, 0x100
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
    lfs f1, lbl_808818A8
    addi r3, r1, 0x10c
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
lbl_fn_80129A6C_00000F9C:
    li r0, 0x0
    stb r0, 0x35(r31)
    lfs f31, lbl_808818E0
    mr r27, r31
    addi r29, r1, 0x100
    addi r28, r31, 0x60
    li r25, 0x0
    li r30, 0x1
lbl_fn_80129A6C_00000FBC:
    lfs f1, 0x78(r31)
    mr r4, r28
    mr r5, r29
    addi r3, r1, 0x10
    bl fn_800F7260
    mr r3, r28
    addi r4, r1, 0x10
    bl fn_8000D124
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80129A6C_00000FF0
    stb r30, 0x35(r31)
    b lbl_fn_80129A6C_00001014
lbl_fn_80129A6C_00000FF0:
    lfs f1, 0x60(r27)
    bl fn_80013404
    fcmpo cr0, f1, f31
    bgt lbl_fn_80129A6C_00001010
    lfs f1, 0x64(r27)
    bl fn_80013404
    fcmpo cr0, f1, f31
    ble lbl_fn_80129A6C_00001014
lbl_fn_80129A6C_00001010:
    stb r30, 0x35(r31)
lbl_fn_80129A6C_00001014:
    addi r25, r25, 0x1
    addi r28, r28, 0xc
    cmpwi r25, 0x2
    addi r27, r27, 0xc
    addi r29, r29, 0xc
    blt lbl_fn_80129A6C_00000FBC
    addi r11, r1, 0x170
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    bl _restgpr_25
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_8012A190(void)
{
    nofralloc
    lfs f3, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f0, 0x8(r3)
    fmuls f3, f3, f1
    fmuls f2, f2, f1
    fmuls f0, f0, f1
    stfs f3, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_8012A1B8(void)
{
    nofralloc
    addi r3, r3, 0x534
    blr
}

asm void fn_8012A1C0(void)
{
    nofralloc
    cmpwi r4, 0x0
    bge lbl_fn_8012A1C0_0000108C
    li r3, 0x0
    blr
lbl_fn_8012A1C0_0000108C:
    mulli r0, r4, 0x30
    lwz r3, 0x3c(r3)
    add r3, r3, r0
    blr
}

asm void fn_8012A1E0(void)
{
    nofralloc
    lfs f1, lbl_808818A8
    li r0, 0x0
    lfs f0, 0x0(r3)
    fcmpu cr0, f1, f0
    bne lbl_fn_8012A1E0_000010CC
    lfs f0, 0x4(r3)
    fcmpu cr0, f1, f0
    bne lbl_fn_8012A1E0_000010CC
    lfs f0, 0x8(r3)
    fcmpu cr0, f1, f0
    bne lbl_fn_8012A1E0_000010CC
    li r0, 0x1
lbl_fn_8012A1E0_000010CC:
    mr r3, r0
    blr
}

asm void fn_8012A218(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r12, r31
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f1, 0x0(r3)
    mtctr r12
    bctrl
    mr r12, r31
    stfs f1, 0x0(r30)
    lfs f1, 0x4(r30)
    mtctr r12
    bctrl
    mr r12, r31
    stfs f1, 0x4(r30)
    lfs f1, 0x8(r30)
    mtctr r12
    bctrl
    stfs f1, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8012A288(void)
{
    nofralloc
    stwu r1, -0x6b0(r1)
    mflr r0
    stw r0, 0x6b4(r1)
    addi r11, r1, 0x6b0
    bl _savegpr_26
    lbz r0, 0x34(r3)
    mr r30, r3
    mr r31, r4
    mr r26, r5
    cmpwi r0, 0x0
    beq lbl_fn_8012A288_00001770
    lwz r28, 0x10(r5)
    lis r29, lbl_80737200@ha
    addi r29, r29, lbl_80737200@l
    mr r3, r28
    addi r4, r29, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8012A288_00001330
    psq_l f1, 0x0(r31), 0, 0
    addi r29, r1, 0x668
    psq_l f2, 0x8(r31), 0, 0
    addi r3, r1, 0x488
    psq_l f3, 0x10(r31), 0, 0
    li r4, 0x79
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lfs f7, 0x18(r30)
    lfs f0, 0x3c(r30)
    fneg f7, f7
    fmuls f1, f7, f0
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x488
    addi r5, r1, 0x458
    bl fn_805F89F0
    addi r3, r1, 0x458
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8012A288_0000128C
    lfs f7, 0x20(r30)
    addi r3, r1, 0x428
    lfs f0, 0x3c(r30)
    li r4, 0x7a
    fmuls f1, f7, f0
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x428
    addi r5, r1, 0x3f8
    bl fn_805F89F0
    addi r3, r1, 0x3f8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8012A288_0000128C:
    addi r5, r1, 0x668
    lfs f0, lbl_808818A8
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0x548
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x79
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    lfs f8, 0x2c(r31)
    psq_st f2, 0x8(r31), 0, 0
    lfs f10, 0xc(r31)
    psq_st f4, 0x18(r31), 0, 0
    lfs f9, 0x1c(r31)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    stfs f0, 0xc(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x2c(r31)
    lfs f7, 0x1c(r30)
    lfs f0, 0x3c(r30)
    stfs f10, 0x2c(r1)
    fmuls f1, f7, f0
    stfs f9, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x548
    bl fn_805F89F0
    lfs f8, 0x2c(r1)
    li r3, 0x1
    lfs f7, 0x30(r1)
    lfs f0, 0x34(r1)
    stfs f8, 0xc(r31)
    stfs f7, 0x1c(r31)
    stfs f0, 0x2c(r31)
    b lbl_fn_8012A288_00001A74
lbl_fn_8012A288_00001330:
    lha r27, 0x36(r30)
    cmpwi r27, 0x1
    blt lbl_fn_8012A288_000014F0
    mr r3, r28
    mr r4, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8012A288_000014F0
    psq_l f1, 0x0(r31), 0, 0
    addi r29, r1, 0x638
    psq_l f2, 0x8(r31), 0, 0
    addi r3, r1, 0x3c8
    psq_l f3, 0x10(r31), 0, 0
    li r4, 0x79
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lfs f7, 0x18(r30)
    lfs f0, 0x40(r30)
    fneg f7, f7
    fmuls f1, f7, f0
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x3c8
    addi r5, r1, 0x398
    bl fn_805F89F0
    addi r3, r1, 0x398
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8012A288_0000144C
    lfs f7, 0x20(r30)
    addi r3, r1, 0x368
    lfs f0, 0x40(r30)
    li r4, 0x7a
    fmuls f1, f7, f0
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x368
    addi r5, r1, 0x338
    bl fn_805F89F0
    addi r3, r1, 0x338
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8012A288_0000144C:
    addi r5, r1, 0x638
    lfs f0, lbl_808818A8
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0x518
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x79
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    lfs f8, 0x2c(r31)
    psq_st f2, 0x8(r31), 0, 0
    lfs f10, 0xc(r31)
    psq_st f4, 0x18(r31), 0, 0
    lfs f9, 0x1c(r31)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    stfs f0, 0xc(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x2c(r31)
    lfs f7, 0x1c(r30)
    lfs f0, 0x40(r30)
    stfs f10, 0x20(r1)
    fmuls f1, f7, f0
    stfs f9, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x518
    bl fn_805F89F0
    lfs f8, 0x20(r1)
    li r3, 0x1
    lfs f7, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f8, 0xc(r31)
    stfs f7, 0x1c(r31)
    stfs f0, 0x2c(r31)
    b lbl_fn_8012A288_00001A74
lbl_fn_8012A288_000014F0:
    cmpwi r27, 0x2
    blt lbl_fn_8012A288_00001630
    lis r4, lbl_80737200@ha
    mr r3, r28
    addi r4, r4, lbl_80737200@l
    addi r4, r4, 0x16
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8012A288_00001630
    psq_l f1, 0x0(r31), 0, 0
    addi r29, r1, 0x608
    psq_l f2, 0x8(r31), 0, 0
    addi r3, r1, 0x308
    psq_l f3, 0x10(r31), 0, 0
    li r4, 0x79
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lfs f7, 0x18(r30)
    lfs f0, 0x44(r30)
    fneg f7, f7
    fmuls f1, f7, f0
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x308
    addi r5, r1, 0x2d8
    bl fn_805F89F0
    addi r5, r1, 0x2d8
    lfs f0, lbl_808818A8
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0x4e8
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x79
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    lfs f10, 0xc(r31)
    psq_st f4, 0x18(r31), 0, 0
    lfs f9, 0x1c(r31)
    psq_st f6, 0x28(r31), 0, 0
    lfs f8, 0x2c(r31)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    stfs f0, 0xc(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x2c(r31)
    lfs f7, 0x1c(r30)
    lfs f0, 0x44(r30)
    stfs f10, 0x14(r1)
    fmuls f1, f7, f0
    stfs f9, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x4e8
    bl fn_805F89F0
    lfs f8, 0x14(r1)
    li r3, 0x1
    lfs f7, 0x18(r1)
    lfs f0, 0x1c(r1)
    stfs f8, 0xc(r31)
    stfs f7, 0x1c(r31)
    stfs f0, 0x2c(r31)
    b lbl_fn_8012A288_00001A74
lbl_fn_8012A288_00001630:
    cmpwi r27, 0x3
    blt lbl_fn_8012A288_00001770
    lis r4, lbl_80737200@ha
    mr r3, r28
    addi r4, r4, lbl_80737200@l
    addi r4, r4, 0x1d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8012A288_00001770
    psq_l f1, 0x0(r31), 0, 0
    addi r29, r1, 0x5d8
    psq_l f2, 0x8(r31), 0, 0
    addi r3, r1, 0x2a8
    psq_l f3, 0x10(r31), 0, 0
    li r4, 0x79
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lfs f7, 0x18(r30)
    lfs f0, 0x48(r30)
    fneg f7, f7
    fmuls f1, f7, f0
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x2a8
    addi r5, r1, 0x278
    bl fn_805F89F0
    addi r5, r1, 0x278
    lfs f0, lbl_808818A8
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0x4b8
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x79
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    lfs f10, 0xc(r31)
    psq_st f4, 0x18(r31), 0, 0
    lfs f9, 0x1c(r31)
    psq_st f6, 0x28(r31), 0, 0
    lfs f8, 0x2c(r31)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    stfs f0, 0xc(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x2c(r31)
    lfs f7, 0x1c(r30)
    lfs f0, 0x48(r30)
    stfs f10, 0x8(r1)
    fmuls f1, f7, f0
    stfs f9, 0xc(r1)
    stfs f8, 0x10(r1)
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x4b8
    bl fn_805F89F0
    lfs f8, 0x8(r1)
    li r3, 0x1
    lfs f7, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f8, 0xc(r31)
    stfs f7, 0x1c(r31)
    stfs f0, 0x2c(r31)
    b lbl_fn_8012A288_00001A74
lbl_fn_8012A288_00001770:
    lbz r0, 0x35(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8012A288_00001A70
    lwz r27, 0x10(r26)
    lis r29, lbl_80737200@ha
    addi r29, r29, lbl_80737200@l
    mr r3, r27
    addi r4, r29, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8012A288_000018FC
    psq_l f1, 0x0(r31), 0, 0
    addi r29, r1, 0x5a8
    psq_l f2, 0x8(r31), 0, 0
    addi r3, r1, 0x248
    psq_l f3, 0x10(r31), 0, 0
    li r4, 0x78
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lfs f1, 0x60(r30)
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x248
    addi r5, r1, 0x218
    bl fn_805F89F0
    addi r3, r1, 0x218
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8012A288_00001884
    lfs f1, 0x68(r30)
    addi r3, r1, 0x1e8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1e8
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    addi r3, r1, 0x1b8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8012A288_00001884:
    lfs f1, 0x64(r30)
    addi r3, r1, 0x188
    li r4, 0x79
    bl fn_805F8E70
    addi r3, r1, 0x5a8
    addi r4, r1, 0x188
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r4, r1, 0x158
    addi r5, r1, 0x5a8
    psq_l f1, 0x0(r4), 0, 0
    li r3, 0x1
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    b lbl_fn_8012A288_00001A74
lbl_fn_8012A288_000018FC:
    mr r3, r27
    addi r4, r29, 0xb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8012A288_00001A70
    psq_l f1, 0x0(r31), 0, 0
    addi r29, r1, 0x578
    psq_l f2, 0x8(r31), 0, 0
    addi r3, r1, 0x128
    psq_l f3, 0x10(r31), 0, 0
    li r4, 0x78
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lfs f1, 0x6c(r30)
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x128
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8012A288_000019F8
    lfs f1, 0x74(r30)
    addi r3, r1, 0xc8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xc8
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8012A288_000019F8:
    lfs f1, 0x70(r30)
    addi r3, r1, 0x68
    li r4, 0x79
    bl fn_805F8E70
    addi r3, r1, 0x578
    addi r4, r1, 0x68
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r4, r1, 0x38
    addi r5, r1, 0x578
    psq_l f1, 0x0(r4), 0, 0
    li r3, 0x1
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    b lbl_fn_8012A288_00001A74
lbl_fn_8012A288_00001A70:
    li r3, 0x0
lbl_fn_8012A288_00001A74:
    addi r11, r1, 0x6b0
    bl _restgpr_26
    lwz r0, 0x6b4(r1)
    mtlr r0
    addi r1, r1, 0x6b0
    blr
}
