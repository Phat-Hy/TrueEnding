#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void fn_800183E0(void);
extern void fn_800185B4(void);
extern void fn_80018608(void);
extern void fn_8003E918(void);
extern void fn_800A55D4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_8012D180(void);
extern void fn_8014DEE4(void);
extern void fn_80160170(void);
extern void fn_80160324(void);
extern void fn_8016F3D0(void);
extern void fn_801781B0(void);
extern void fn_80178864(void);
extern void fn_8017ABD4(void);
extern void fn_8017AC08(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8021A77C(void);
extern void fn_8021A888(void);
extern void fn_803750E4(void);
extern void fn_803E4A20(void);
extern void fn_803E5C60(void);
extern void fn_8059A268(void);
extern void fn_805A6D24(void);
extern void fn_805A70D8(void);
extern void fn_805AB82C(void);
extern void fn_805ADC24(void);
extern void fn_805ADDD8(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 jumptable_80797618[];
extern u8 jumptable_80797644[];
extern u8 jumptable_80797680[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808882F4;
extern u32 lbl_808882F8;
extern u32 lbl_8088831C;
extern u32 lbl_80888328;
extern u32 lbl_8088832C;
extern u32 lbl_80888330;
extern u32 lbl_80888334;
extern u32 lbl_80888338;
extern u32 lbl_8088833C;
extern u32 lbl_80888340;
extern u32 lbl_80888344;

/* Function declarations */
void fn_805A96C4(void);
void fn_805A96D4(void);
void fn_805A96D8(void);
void fn_805AA018(void);
void fn_805AA394(void);
void fn_805AA4CC(void);
void fn_805AA4E8(void);
void fn_805AA738(void);
void fn_805AA828(void);
void fn_805AA830(void);
void fn_805AA950(void);

asm void fn_805A96C4(void)
{
    nofralloc
    mulli r0, r4, 0x2c
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_805A96D4(void)
{
    nofralloc
    blr
}

asm void fn_805A96D8(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x160
    bl _savegpr_25
    slwi r0, r5, 2
    stw r5, 0xa0(r3)
    add r5, r3, r0
    mr r25, r3
    stw r4, 0x54(r3)
    mr r26, r4
    lwz r31, 0xa8(r5)
    cmpwi r31, 0x0
    beq lbl_fn_805A96D8_00000090
    lwz r0, 0x64(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A96D8_00000060
    stw r4, 0x58(r3)
    b lbl_fn_805A96D8_00000090
lbl_fn_805A96D8_00000060:
    mr r3, r31
    bl fn_8021A77C
    cmpwi r3, 0x0
    bne lbl_fn_805A96D8_00000080
    mr r3, r31
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_0000008C
lbl_fn_805A96D8_00000080:
    lwz r0, 0xd1c(r26)
    stw r0, 0x58(r25)
    b lbl_fn_805A96D8_00000090
lbl_fn_805A96D8_0000008C:
    stw r26, 0x58(r25)
lbl_fn_805A96D8_00000090:
    mr r3, r26
    bl fn_80160324
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_000000B0
    lwz r0, 0xf7c(r26)
    stw r0, 0x60(r25)
    lwz r0, 0x638(r26)
    stw r0, 0x64(r25)
lbl_fn_805A96D8_000000B0:
    mr r3, r26
    bl fn_8017AC08
    stw r3, 0x68(r25)
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_00000140
    mr r4, r26
    li r5, 0x0
    bl fn_800185B4
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_00000140
    lwz r3, lbl_8087EE68
    mr r4, r26
    li r5, 0x0
    bl fn_800185B4
    lwz r0, 0x4(r3)
    stw r0, 0x70(r25)
    lwz r0, 0x8(r3)
    stw r0, 0x74(r25)
    lwz r0, 0xc(r3)
    stw r0, 0x78(r25)
    psq_l f1, 0x10(r3), 0, 0
    lfs f2, 0x18(r3)
    stfs f2, 0x84(r25)
    psq_st f1, 0x7c(r25), 0, 0
    psq_l f1, 0x1c(r3), 0, 0
    lfs f2, 0x24(r3)
    stfs f2, 0x90(r25)
    psq_st f1, 0x88(r25), 0, 0
    lwz r0, 0x28(r3)
    stw r0, 0x94(r25)
    lwz r0, 0x2c(r3)
    stw r0, 0x98(r25)
    lwz r0, 0x30(r3)
    stw r0, 0x9c(r25)
    b lbl_fn_805A96D8_00000148
lbl_fn_805A96D8_00000140:
    addi r3, r25, 0x6c
    bl fn_8003E918
lbl_fn_805A96D8_00000148:
    li r0, 0x1
    lwz r30, 0x54(r25)
    stw r0, 0xe8(r25)
    lwz r29, 0x58(r25)
    lwz r3, 0x50(r30)
    bl fn_80219558
    lwz r0, 0xa0(r25)
    li r27, 0x0
    slwi r0, r0, 2
    add r4, r25, r0
    lwz r28, 0xb8(r4)
    cmpwi r28, 0x6
    bge lbl_fn_805A96D8_000003A4
    cmplwi r3, 0xa
    bgt lbl_fn_805A96D8_00000388
    lis r4, jumptable_80797618@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_80797618@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r28, 0x4
    bne lbl_fn_805A96D8_00000388
    lwz r3, 0x5c(r31)
    addi r27, r3, 0x1e
    b lbl_fn_805A96D8_00000388
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805A96D8_00000228
    cmpwi r28, 0x5
    bne lbl_fn_805A96D8_00000228
    lfs f0, lbl_808882F4
    li r3, 0x0
    lfs f2, 0x530(r30)
    li r4, 0xb
    psq_l f1, 0x528(r30), 0, 0
    addi r6, r26, 0x147c
    li r0, 0x96
    stfs f0, 0x4c(r1)
    addi r5, r1, 0x4c
    stfs f0, 0x50(r1)
    sth r4, 0x40(r1)
    sth r3, 0x42(r1)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    stw r3, 0x58(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x54(r1)
    sth r4, 0x1470(r26)
    sth r3, 0x1472(r26)
    stw r3, 0x1474(r26)
    stw r0, 0x1478(r26)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1484(r26)
    stw r3, 0x1488(r26)
    b lbl_fn_805A96D8_00000388
lbl_fn_805A96D8_00000228:
    mr r3, r30
    bl fn_80160324
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_00000250
    cmpwi r31, 0x0
    beq lbl_fn_805A96D8_00000250
    mr r3, r30
    mr r4, r31
    mr r5, r29
    bl fn_80160170
lbl_fn_805A96D8_00000250:
    mr r3, r25
    mr r4, r30
    mr r5, r31
    bl fn_805ADC24
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_00000388
    mr r4, r30
    bl fn_803E5C60
    b lbl_fn_805A96D8_00000388
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805A96D8_0000028C
    cmpwi r28, 0x5
    beq lbl_fn_805A96D8_00000388
lbl_fn_805A96D8_0000028C:
    cmpwi r28, 0x4
    bne lbl_fn_805A96D8_00000298
    mr r29, r30
lbl_fn_805A96D8_00000298:
    mr r3, r30
    bl fn_80160324
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_000002C0
    cmpwi r31, 0x0
    beq lbl_fn_805A96D8_000002C0
    mr r3, r30
    mr r4, r31
    mr r5, r29
    bl fn_80160170
lbl_fn_805A96D8_000002C0:
    mr r3, r25
    mr r4, r30
    mr r5, r31
    bl fn_805ADC24
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_00000388
    mr r4, r30
    bl fn_803E5C60
    b lbl_fn_805A96D8_00000388
    cmpwi r28, 0x4
    bne lbl_fn_805A96D8_00000350
    lfs f2, lbl_808882F4
    li r4, 0x0
    stfs f2, 0x30(r1)
    li r5, 0x7
    lwz r0, 0x4(r31)
    addi r7, r1, 0x30
    stfs f2, 0x34(r1)
    addi r6, r26, 0x147c
    li r3, 0x96
    psq_l f1, 0x0(r7), 0, 0
    sth r5, 0x24(r1)
    sth r4, 0x26(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stfs f2, 0x38(r1)
    stw r0, 0x3c(r1)
    sth r5, 0x1470(r26)
    sth r4, 0x1472(r26)
    stw r4, 0x1474(r26)
    stw r3, 0x1478(r26)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1484(r26)
    stw r0, 0x1488(r26)
    b lbl_fn_805A96D8_00000388
lbl_fn_805A96D8_00000350:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805A96D8_00000364
    cmpwi r28, 0x5
    beq lbl_fn_805A96D8_00000388
lbl_fn_805A96D8_00000364:
    mr r3, r25
    mr r4, r30
    mr r5, r31
    bl fn_805ADC24
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_00000388
    mr r4, r30
    bl fn_803E5C60
lbl_fn_805A96D8_00000388:
    lwz r3, lbl_8087EE68
    mr r4, r30
    mr r5, r29
    mr r6, r31
    mr r7, r27
    bl fn_800183E0
    b lbl_fn_805A96D8_000004BC
lbl_fn_805A96D8_000003A4:
    subi r3, r28, 0x6
    cmplwi r3, 0x1
    bgt lbl_fn_805A96D8_00000420
    lwz r3, lbl_8087EE68
    mr r4, r30
    li r5, 0x0
    bl fn_80018608
    lfs f2, lbl_808882F4
    li r4, 0x0
    stfs f2, 0x14(r1)
    li r5, 0x7
    lwz r0, 0x4(r31)
    addi r7, r1, 0x14
    stfs f2, 0x18(r1)
    addi r6, r26, 0x147c
    li r3, 0x96
    psq_l f1, 0x0(r7), 0, 0
    sth r5, 0x8(r1)
    sth r4, 0xa(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stfs f2, 0x1c(r1)
    stw r0, 0x20(r1)
    sth r5, 0x1470(r26)
    sth r4, 0x1472(r26)
    stw r4, 0x1474(r26)
    stw r3, 0x1478(r26)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1484(r26)
    stw r0, 0x1488(r26)
    b lbl_fn_805A96D8_000004BC
lbl_fn_805A96D8_00000420:
    cmpwi r3, 0x2
    bne lbl_fn_805A96D8_00000474
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_00000444
    mr r4, r30
    li r5, 0x0
    bl fn_800185B4
    b lbl_fn_805A96D8_00000448
lbl_fn_805A96D8_00000444:
    li r3, 0x0
lbl_fn_805A96D8_00000448:
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_000004BC
    lwz r3, 0x28(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_000004BC
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4fbd
    bne lbl_fn_805A96D8_000004BC
    li r0, 0x0
    stw r0, 0xe8(r25)
    b lbl_fn_805A96D8_000004BC
lbl_fn_805A96D8_00000474:
    cmpwi r3, 0x3
    bne lbl_fn_805A96D8_00000498
    lwz r3, lbl_8087EE68
    mr r4, r30
    mr r5, r29
    mr r6, r31
    li r7, 0x0
    bl fn_800183E0
    b lbl_fn_805A96D8_000004BC
lbl_fn_805A96D8_00000498:
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_805A96D8_000004BC
    lwz r3, lbl_8087EE68
    mr r4, r30
    mr r5, r29
    mr r6, r31
    li r7, 0x0
    bl fn_800183E0
lbl_fn_805A96D8_000004BC:
    cmpwi r31, 0x0
    beq lbl_fn_805A96D8_0000093C
    lwz r0, 0xe8(r25)
    cmpwi r0, 0x0
    beq lbl_fn_805A96D8_000004E0
    mr r3, r25
    mr r4, r30
    mr r5, r28
    bl fn_805AA018
lbl_fn_805A96D8_000004E0:
    addi r3, r30, 0x7d4
    bl fn_8012D180
    lwz r3, 0x70(r31)
    cmpwi r3, 0x0
    ble lbl_fn_805A96D8_0000057C
    bl fn_80219E6C
    lbz r0, 0x2(r3)
    cmpwi r0, 0x7
    bne lbl_fn_805A96D8_0000093C
    lfs f3, lbl_808882F4
    li r4, 0x0
    lfs f2, 0x530(r26)
    li r0, 0x1
    psq_l f1, 0x528(r26), 0, 0
    addi r6, r25, 0x15dc
    lfs f0, lbl_8088832C
    li r3, 0x2
    stfs f3, 0x114(r1)
    addi r5, r1, 0x114
    stfs f3, 0x118(r1)
    stb r4, 0x125(r1)
    stw r3, 0x128(r1)
    stw r4, 0x12c(r1)
    stw r4, 0x130(r1)
    stw r0, 0x110(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x11c(r1)
    stfs f0, 0x120(r1)
    stb r0, 0x124(r1)
    stw r0, 0x15d8(r25)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x15e4(r25)
    stfs f0, 0x15e8(r25)
    stb r0, 0x15ec(r25)
    stb r4, 0x15ed(r25)
    stw r3, 0x15f0(r25)
    stw r4, 0x15f4(r25)
    stw r4, 0x15f8(r25)
    b lbl_fn_805A96D8_0000093C
lbl_fn_805A96D8_0000057C:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805A96D8_00000724
    lwz r3, 0x4(r31)
    subi r0, r3, 0x179a
    cmplwi r0, 0x2
    ble lbl_fn_805A96D8_00000634
    cmpwi r3, 0x1788
    beq lbl_fn_805A96D8_000005BC
    cmpwi r3, 0x1791
    beq lbl_fn_805A96D8_000005BC
    cmpwi r3, 0x4fbb
    beq lbl_fn_805A96D8_000006AC
    cmpwi r3, 0x1789
    beq lbl_fn_805A96D8_000006AC
    b lbl_fn_805A96D8_0000093C
lbl_fn_805A96D8_000005BC:
    lfs f3, lbl_808882F4
    li r4, 0x0
    lfs f2, 0x530(r26)
    li r0, 0x1
    lfs f0, 0x58(r31)
    addi r5, r1, 0xf0
    psq_l f1, 0x528(r26), 0, 0
    li r3, 0x2
    addi r6, r25, 0x15dc
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stb r4, 0x101(r1)
    stw r3, 0x104(r1)
    stw r4, 0x108(r1)
    stw r4, 0x10c(r1)
    stw r0, 0xec(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stb r0, 0x100(r1)
    stw r0, 0x15d8(r25)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x15e4(r25)
    stfs f0, 0x15e8(r25)
    stb r0, 0x15ec(r25)
    stb r4, 0x15ed(r25)
    stw r3, 0x15f0(r25)
    stw r4, 0x15f4(r25)
    stw r4, 0x15f8(r25)
    b lbl_fn_805A96D8_0000093C
lbl_fn_805A96D8_00000634:
    lfs f3, lbl_808882F4
    li r0, 0x1
    lfs f2, 0x530(r26)
    li r4, 0x0
    lfs f0, 0x58(r31)
    addi r5, r1, 0xcc
    psq_l f1, 0x528(r26), 0, 0
    li r3, 0x2
    addi r6, r25, 0x15dc
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stw r3, 0xe0(r1)
    stw r4, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r0, 0xc8(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stb r0, 0xdc(r1)
    stb r0, 0xdd(r1)
    stw r0, 0x15d8(r25)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x15e4(r25)
    stfs f0, 0x15e8(r25)
    stb r0, 0x15ec(r25)
    stb r0, 0x15ed(r25)
    stw r3, 0x15f0(r25)
    stw r4, 0x15f4(r25)
    stw r4, 0x15f8(r25)
    b lbl_fn_805A96D8_0000093C
lbl_fn_805A96D8_000006AC:
    lfs f3, lbl_808882F4
    li r4, 0x0
    lfs f2, 0x530(r26)
    li r0, 0x1
    lfs f0, 0x58(r31)
    addi r5, r1, 0xa8
    psq_l f1, 0x528(r26), 0, 0
    li r3, 0x2
    addi r6, r25, 0x15dc
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stb r4, 0xb9(r1)
    stw r3, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r0, 0xa4(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stb r0, 0xb8(r1)
    stw r0, 0x15d8(r25)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x15e4(r25)
    stfs f0, 0x15e8(r25)
    stb r0, 0x15ec(r25)
    stb r4, 0x15ed(r25)
    stw r3, 0x15f0(r25)
    stw r4, 0x15f4(r25)
    stw r4, 0x15f8(r25)
    b lbl_fn_805A96D8_0000093C
lbl_fn_805A96D8_00000724:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x4fbb
    beq lbl_fn_805A96D8_00000738
    cmpwi r0, 0x1789
    bne lbl_fn_805A96D8_000007B0
lbl_fn_805A96D8_00000738:
    lfs f3, lbl_808882F4
    li r4, 0x0
    lfs f2, 0x530(r26)
    li r0, 0x1
    lfs f0, 0x58(r31)
    addi r5, r1, 0x84
    psq_l f1, 0x528(r26), 0, 0
    li r3, 0x2
    addi r6, r25, 0x15dc
    stfs f3, 0x84(r1)
    stfs f3, 0x88(r1)
    stb r4, 0x95(r1)
    stw r3, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r0, 0x80(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8c(r1)
    stfs f0, 0x90(r1)
    stb r0, 0x94(r1)
    stw r0, 0x15d8(r25)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x15e4(r25)
    stfs f0, 0x15e8(r25)
    stb r0, 0x15ec(r25)
    stb r4, 0x15ed(r25)
    stw r3, 0x15f0(r25)
    stw r4, 0x15f4(r25)
    stw r4, 0x15f8(r25)
    b lbl_fn_805A96D8_0000093C
lbl_fn_805A96D8_000007B0:
    mr r3, r31
    bl fn_8021A888
    cmpwi r3, 0x0
    bne lbl_fn_805A96D8_000007D4
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1788
    beq lbl_fn_805A96D8_000007D4
    cmpwi r0, 0x1791
    bne lbl_fn_805A96D8_0000093C
lbl_fn_805A96D8_000007D4:
    lwz r0, 0x48(r26)
    cmpwi r0, 0x2
    beq lbl_fn_805A96D8_0000093C
    lwz r3, lbl_8087F408
    li r7, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_000007F8
    lwz r8, 0x48(r3)
    b lbl_fn_805A96D8_000008B4
lbl_fn_805A96D8_000007F8:
    li r8, 0x0
    b lbl_fn_805A96D8_000008B4
lbl_fn_805A96D8_00000800:
    lwz r6, 0x38(r8)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_805A96D8_0000082C
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_805A96D8_0000082C
    li r3, 0x1
lbl_fn_805A96D8_0000082C:
    cmpwi r3, 0x0
    beq lbl_fn_805A96D8_00000848
    lwz r3, 0x7e0(r8)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_805A96D8_00000848
    li r0, 0x1
lbl_fn_805A96D8_00000848:
    cmpwi r0, 0x0
    beq lbl_fn_805A96D8_0000087C
    lwz r0, 0x55c(r8)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805A96D8_00000870
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_805A96D8_00000870
    li r3, 0x1
lbl_fn_805A96D8_00000870:
    cmpwi r3, 0x0
    bne lbl_fn_805A96D8_0000087C
    li r4, 0x1
lbl_fn_805A96D8_0000087C:
    cmpwi r4, 0x0
    beq lbl_fn_805A96D8_000008B0
    lwz r0, 0x54c(r8)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_805A96D8_000008B0
    lwz r0, 0xd18(r8)
    cmpwi r0, 0x0
    beq lbl_fn_805A96D8_000008B0
    lwz r0, 0x146c(r8)
    cmpwi r0, 0x29
    beq lbl_fn_805A96D8_000008B0
    addi r7, r7, 0x1
lbl_fn_805A96D8_000008B0:
    lwz r8, 0x14ac(r8)
lbl_fn_805A96D8_000008B4:
    cmpwi r8, 0x0
    bne lbl_fn_805A96D8_00000800
    cmpwi r7, 0x0
    ble lbl_fn_805A96D8_0000093C
    lis r5, lbl_807C7030@ha
    lfs f0, lbl_808882F4
    addi r5, r5, lbl_807C7030@l
    li r4, 0x0
    lfs f2, 0x8(r5)
    li r3, 0x2
    psq_l f1, 0x0(r5), 0, 0
    addi r6, r25, 0x15dc
    li r0, 0x1
    stfs f0, 0x60(r1)
    addi r5, r1, 0x60
    stfs f0, 0x64(r1)
    stb r4, 0x71(r1)
    stw r3, 0x74(r1)
    stw r4, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r3, 0x5c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x68(r1)
    stfs f0, 0x6c(r1)
    stb r0, 0x70(r1)
    stw r3, 0x15d8(r25)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x15e4(r25)
    stfs f0, 0x15e8(r25)
    stb r0, 0x15ec(r25)
    stb r4, 0x15ed(r25)
    stw r3, 0x15f0(r25)
    stw r4, 0x15f4(r25)
    stw r4, 0x15f8(r25)
lbl_fn_805A96D8_0000093C:
    addi r11, r1, 0x160
    bl _restgpr_25
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_805AA018(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r5
    lwz r3, 0x50(r4)
    bl fn_80219558
    cmplwi r3, 0xe
    bgt lbl_fn_805AA018_00000C4C
    lis r4, jumptable_80797644@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_80797644@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    subi r0, r30, 0x3
    cmplwi r0, 0x2
    bgt lbl_fn_805AA018_000009B4
    mr r3, r31
    li r4, 0x2390
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_000009B4:
    cmpwi r30, 0x9
    bne lbl_fn_805AA018_000009EC
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    mr r3, r31
    subf r0, r4, r0
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r4, r0
    addi r4, r4, 0x27e6
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_000009EC:
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 22
    beq lbl_fn_805AA018_00000A08
    mr r3, r31
    li r4, 0x27e9
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000A08:
    mr r3, r31
    li r4, 0x238f
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
    cmpwi r30, 0x4
    bne lbl_fn_805AA018_00000A30
    mr r3, r31
    li r4, 0x2392
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000A30:
    cmpwi r30, 0x9
    bne lbl_fn_805AA018_00000A68
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    mr r3, r31
    subf r0, r4, r0
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r4, r0
    addi r4, r4, 0x27e6
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000A68:
    mr r3, r31
    li r4, 0x238d
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
    subi r0, r30, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_805AA018_00000A94
    mr r3, r31
    li r4, 0x2390
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000A94:
    cmpwi r30, 0x9
    bne lbl_fn_805AA018_00000ACC
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    mr r3, r31
    subf r0, r4, r0
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r4, r0
    addi r4, r4, 0x27e6
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000ACC:
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 22
    beq lbl_fn_805AA018_00000AE8
    mr r3, r31
    li r4, 0x27e9
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000AE8:
    mr r3, r31
    li r4, 0x238f
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
    cmpwi r30, 0x4
    bne lbl_fn_805AA018_00000B10
    mr r3, r31
    li r4, 0x2329
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000B10:
    cmpwi r30, 0x9
    bne lbl_fn_805AA018_00000B48
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    mr r3, r31
    subf r0, r4, r0
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r4, r0
    addi r4, r4, 0x27e6
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000B48:
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 22
    beq lbl_fn_805AA018_00000B64
    mr r3, r31
    li r4, 0x27e9
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000B64:
    mr r3, r31
    li r4, 0x238f
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
    cmpwi r30, 0x9
    bne lbl_fn_805AA018_00000BAC
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    mr r3, r31
    subf r0, r4, r0
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r4, r0
    addi r4, r4, 0x27e6
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000BAC:
    mr r3, r31
    li r4, 0x238d
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
    cmpwi r30, 0x9
    bne lbl_fn_805AA018_00000BF4
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    mr r3, r31
    subf r0, r4, r0
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r4, r0
    addi r4, r4, 0x27e6
    bl fn_8017ABD4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000BF4:
    cmpwi r30, 0xb
    bne lbl_fn_805AA018_00000C20
    mr r3, r31
    li r4, 0x238e
    bl fn_8017ABD4
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000C20:
    cmpwi r30, 0xa
    bne lbl_fn_805AA018_00000CB0
    mr r3, r31
    li r4, 0x238d
    bl fn_8017ABD4
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000C4C:
    lwz r3, 0x5c(r31)
    lbz r0, 0x122(r3)
    cmpwi r0, 0x4
    bne lbl_fn_805AA018_00000CB0
    cmpwi r30, 0xb
    bne lbl_fn_805AA018_00000C88
    mr r3, r31
    li r4, 0x238e
    bl fn_8017ABD4
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_805AA018_00000CB0
lbl_fn_805AA018_00000C88:
    cmpwi r30, 0xa
    bne lbl_fn_805AA018_00000CB0
    mr r3, r31
    li r4, 0x238d
    bl fn_8017ABD4
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_805AA018_00000CB0:
    addi r3, r31, 0x7d4
    bl fn_8012D180
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805AA394(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r3, r30
    bl fn_8017AC08
    mr r31, r3
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmplwi r3, 0xe
    bgt lbl_fn_805AA394_00000DEC
    lis r4, jumptable_80797680@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_80797680@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r31, 0x238f
    bne lbl_fn_805AA394_00000D2C
    li r3, 0x2
    b lbl_fn_805AA394_00000DF0
lbl_fn_805AA394_00000D2C:
    subi r0, r31, 0x27e5
    li r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_805AA394_00000DF0
    li r3, 0x3
    b lbl_fn_805AA394_00000DF0
    cmpwi r31, 0x2392
    bne lbl_fn_805AA394_00000D54
    li r3, 0x2
    b lbl_fn_805AA394_00000DF0
lbl_fn_805AA394_00000D54:
    subi r0, r31, 0x27e5
    li r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_805AA394_00000DF0
    li r3, 0x3
    b lbl_fn_805AA394_00000DF0
    cmpwi r31, 0x2390
    bne lbl_fn_805AA394_00000D7C
    li r3, 0x2
    b lbl_fn_805AA394_00000DF0
lbl_fn_805AA394_00000D7C:
    subi r0, r31, 0x27e5
    li r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_805AA394_00000DF0
    li r3, 0x3
    b lbl_fn_805AA394_00000DF0
    cmpwi r31, 0x2329
    bne lbl_fn_805AA394_00000DA4
    li r3, 0x2
    b lbl_fn_805AA394_00000DF0
lbl_fn_805AA394_00000DA4:
    subi r0, r31, 0x27e5
    li r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_805AA394_00000DF0
    li r3, 0x3
    b lbl_fn_805AA394_00000DF0
    li r3, 0x1
    b lbl_fn_805AA394_00000DF0
    cmpwi r31, 0x238e
    bne lbl_fn_805AA394_00000DD4
    li r3, 0x2
    b lbl_fn_805AA394_00000DF0
lbl_fn_805AA394_00000DD4:
    subi r0, r31, 0x27e5
    li r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_805AA394_00000DF0
    li r3, 0x3
    b lbl_fn_805AA394_00000DF0
lbl_fn_805AA394_00000DEC:
    li r3, 0x1
lbl_fn_805AA394_00000DF0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805AA4CC(void)
{
    nofralloc
    lwz r3, 0xc(r4)
    lwz r0, 0x12a8(r3)
    mr r5, r3
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x12a8(r3)
    lwz r4, 0x4(r4)
    b fn_80178864
}

asm void fn_805AA4E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805AA4E8_0000105C
    li r4, 0x0
    li r5, 0x1
    stw r5, 0xa70(r3)
    addi r6, r3, 0x159c
    lwz r0, 0x15d8(r3)
    stw r4, 0xa74(r3)
    cmpwi r0, 0x1
    stw r4, 0xa7c(r3)
    stw r4, 0xa84(r3)
    stw r4, 0x158c(r3)
    stw r4, 0x1598(r3)
    stw r5, 0x15a8(r3)
    lwz r5, lbl_8087F430
    addi r5, r5, 0x910
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x15a4(r3)
    psq_st f1, 0x0(r6), 0, 0
    stw r4, 0x15ac(r3)
    stw r4, 0xec(r3)
    bne lbl_fn_805AA4E8_00000ECC
    lwz r0, 0xa78(r3)
    cmpwi r0, 0x4
    beq lbl_fn_805AA4E8_00000EB0
    li r4, 0x4
    bl fn_805AB82C
lbl_fn_805AA4E8_00000EB0:
    li r0, 0x4
    stw r0, 0xa78(r31)
    addi r3, r31, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    b lbl_fn_805AA4E8_00000EF8
lbl_fn_805AA4E8_00000ECC:
    lwz r0, 0xa78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805AA4E8_00000EE0
    li r4, 0x0
    bl fn_805AB82C
lbl_fn_805AA4E8_00000EE0:
    li r0, 0x0
    stw r0, 0xa78(r31)
    addi r3, r31, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_805AA4E8_00000EF8:
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    b lbl_fn_805AA4E8_00000F10
lbl_fn_805AA4E8_00000F04:
    addi r3, r30, 0x7d4
    bl fn_8012D180
    lwz r30, 0x14ac(r30)
lbl_fn_805AA4E8_00000F10:
    cmpwi r30, 0x0
    bne lbl_fn_805AA4E8_00000F04
    lwz r3, 0x158c(r31)
    cmpwi r3, 0x0
    blt lbl_fn_805AA4E8_00000F54
    lwz r0, 0xa88(r31)
    cmpw r3, r0
    bge lbl_fn_805AA4E8_00000F54
    mulli r0, r3, 0x2c
    add r3, r31, r0
    lwz r0, 0xa8c(r3)
    stw r0, 0x48(r31)
    lwz r0, 0xa90(r3)
    stw r0, 0x4c(r31)
    lwz r0, 0xa94(r3)
    stw r0, 0x50(r31)
    b lbl_fn_805AA4E8_00000F68
lbl_fn_805AA4E8_00000F54:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r31)
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
lbl_fn_805AA4E8_00000F68:
    mr r3, r31
    li r4, 0x0
    bl fn_805ADDD8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_805AA4E8_00000F94
    li r4, 0xbb
    bl fn_803750E4
    lwz r3, lbl_8087F430
    li r4, 0xbc
    bl fn_803750E4
lbl_fn_805AA4E8_00000F94:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55D4
    cmpwi r3, 0x0
    bne lbl_fn_805AA4E8_00001054
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55D4
    cmpwi r3, 0x0
    bne lbl_fn_805AA4E8_00001054
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55D4
    cmpwi r3, 0x0
    bne lbl_fn_805AA4E8_00001054
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55D4
    cmpwi r3, 0x0
    bne lbl_fn_805AA4E8_00001054
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55D4
    cmpwi r3, 0x0
    bne lbl_fn_805AA4E8_00001054
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55D4
    cmpwi r3, 0x0
    bne lbl_fn_805AA4E8_00001054
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55D4
    cmpwi r3, 0x0
    bne lbl_fn_805AA4E8_00001054
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_805AA4E8_0000105C
lbl_fn_805AA4E8_00001054:
    li r0, 0x1
    stw r0, 0xa74(r31)
lbl_fn_805AA4E8_0000105C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805AA738(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805AA738_0000114C
    lwz r0, 0xa78(r3)
    li r4, 0x0
    stw r4, 0xa70(r3)
    cmpwi r0, 0x6
    beq lbl_fn_805AA738_000010B4
    li r4, 0x6
    bl fn_805AB82C
lbl_fn_805AA738_000010B4:
    li r0, 0x6
    stw r0, 0xa78(r30)
    addi r3, r30, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lfs f1, lbl_808882F4
    li r31, 0x0
    li r0, 0x2
    lfs f0, lbl_8088831C
    stw r0, 0x48(r30)
    addi r3, r30, 0x16c0
    li r4, 0xf
    li r5, 0x0
    stw r31, 0x4c(r30)
    stw r31, 0x50(r30)
    stw r31, 0x15d8(r30)
    stfs f1, 0x15dc(r30)
    stfs f1, 0x15e0(r30)
    stfs f1, 0x15e4(r30)
    stfs f0, 0x15e8(r30)
    stb r31, 0x15ec(r30)
    stb r31, 0x15ed(r30)
    stw r0, 0x15f0(r30)
    stw r31, 0x15f4(r30)
    stw r31, 0x15f8(r30)
    bl fn_800CB5C8
    stw r31, 0x15cc(r30)
    lwz r3, 0x15bc(r30)
    stw r31, 0x15d0(r30)
    lfs f0, lbl_808882F4
    stfs f0, 0x50(r3)
    lwz r3, 0x15c0(r30)
    stfs f0, 0x50(r3)
    lwz r3, 0x15c4(r30)
    stfs f0, 0x50(r3)
    lwz r3, 0x15c8(r30)
    stfs f0, 0x50(r3)
lbl_fn_805AA738_0000114C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805AA828(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805AA830(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f3, 0x15a4(r3)
    lfs f0, 0x8(r4)
    lfs f2, 0x159c(r3)
    addi r3, r1, 0x8
    lfs f1, 0x0(r4)
    fsubs f3, f3, f0
    lfs f0, lbl_808882F4
    fsubs f1, f2, f1
    stfs f3, 0x10(r1)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F9920
    lfs f0, lbl_80888330
    fcmpo cr0, f1, f0
    ble lbl_fn_805AA830_00001238
    lfs f2, 0x8(r1)
    addi r3, r1, 0x8
    lfs f3, lbl_80888334
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80888330
    fcmpo cr0, f1, f0
    bge lbl_fn_805AA830_00001244
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x8(r1)
    lfs f3, lbl_80888328
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    b lbl_fn_805AA830_00001244
lbl_fn_805AA830_00001238:
    lwz r3, 0x15a8(r30)
    subi r0, r3, 0x1
    stw r0, 0x15a8(r30)
lbl_fn_805AA830_00001244:
    lfs f1, 0x0(r31)
    lfs f0, 0x8(r1)
    lfs f2, 0x4(r31)
    fadds f0, f1, f0
    lfs f1, 0x8(r31)
    stfs f0, 0x0(r31)
    lfs f0, 0xc(r1)
    fadds f0, f2, f0
    stfs f0, 0x4(r31)
    lfs f0, 0x10(r1)
    fadds f0, f1, f0
    stfs f0, 0x8(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805AA950(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x140
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    bl _savegpr_21
    lwz r0, 0xa78(r3)
    mr r28, r3
    mr r29, r4
    mr r22, r5
    cmpwi r0, 0x0
    mr r21, r7
    beq lbl_fn_805AA950_000012D4
    cmpwi r0, 0x4
    bne lbl_fn_805AA950_0000169C
lbl_fn_805AA950_000012D4:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805AA950_00001AC8
    cmpwi r6, 0x0
    beq lbl_fn_805AA950_00001AC8
    lwz r3, lbl_8087F490
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805AA950_00001AC8
    lwz r5, lbl_8087F8A0
    li r7, 0x0
    li r0, 0x2
    stw r0, 0x94(r1)
    lfs f0, lbl_80888338
    mr r3, r7
    stw r7, 0x98(r1)
    addi r8, r1, 0x88
    lwz r9, 0x48(r5)
    li r12, 0x0
    stw r7, 0x9c(r1)
    li r6, 0x1
    lfs f4, lbl_8088833C
    lwz r11, lbl_8087F9E8
    b lbl_fn_805AA950_00001404
lbl_fn_805AA950_00001338:
    cmplwi r12, 0x20
    blt lbl_fn_805AA950_00001348
    li r5, 0x0
    b lbl_fn_805AA950_00001350
lbl_fn_805AA950_00001348:
    add r5, r11, r3
    addi r5, r5, 0x48
lbl_fn_805AA950_00001350:
    lwz r10, 0x8(r5)
    cmpwi r10, 0x0
    beq lbl_fn_805AA950_0000137C
    lwz r10, 0xd0c(r10)
    cmpwi r10, 0x0
    ble lbl_fn_805AA950_0000137C
    lwz r0, 0xd0c(r9)
    cmpwi r0, 0x0
    ble lbl_fn_805AA950_0000137C
    cmpw r10, r0
    bne lbl_fn_805AA950_000013FC
lbl_fn_805AA950_0000137C:
    psq_l f1, 0x10(r5), 0, 0
    lfs f2, 0x18(r5)
    lfs f3, 0x8(r4)
    psq_st f1, 0x0(r8), 0, 0
    fsubs f8, f3, f2
    lfs f5, 0x5c(r5)
    lfs f3, 0x28(r5)
    lfs f7, 0x0(r4)
    fmuls f9, f5, f3
    lfs f6, 0x88(r1)
    fmuls f3, f8, f8
    lfs f5, 0x8c(r1)
    fsubs f7, f7, f6
    lfs f6, 0x4(r4)
    fsubs f5, f6, f5
    stfs f2, 0x90(r1)
    fcmpo cr0, f9, f4
    fmadds f6, f7, f7, f3
    stfs f7, 0x40(r1)
    stfs f5, 0x44(r1)
    stfs f8, 0x48(r1)
    cror eq, gt, eq
    bne lbl_fn_805AA950_000013FC
    fmuls f3, f9, f9
    fcmpo cr0, f6, f3
    bge lbl_fn_805AA950_000013FC
    fcmpo cr0, f6, f0
    bge lbl_fn_805AA950_000013FC
    fmr f0, f6
    stw r7, 0x98(r1)
    stw r6, 0x94(r1)
    stw r5, 0x9c(r1)
lbl_fn_805AA950_000013FC:
    addi r12, r12, 0x1
    addi r3, r3, 0x140
lbl_fn_805AA950_00001404:
    cmplwi r12, 0x20
    bge lbl_fn_805AA950_00001418
    add r5, r11, r3
    addi r0, r5, 0x48
    b lbl_fn_805AA950_0000141C
lbl_fn_805AA950_00001418:
    li r0, 0x0
lbl_fn_805AA950_0000141C:
    cmpwi r0, 0x0
    bne lbl_fn_805AA950_00001338
    lwz r3, lbl_8087F408
    addi r5, r1, 0x7c
    lfs f4, lbl_80888340
    li r0, 0x0
    lwz r6, 0x48(r3)
    b lbl_fn_805AA950_000014EC
lbl_fn_805AA950_0000143C:
    lwz r3, 0x38(r6)
    rlwinm r3, r3, 0, 29, 29
    cmplwi r3, 0x4
    beq lbl_fn_805AA950_000014E8
    lwz r3, 0x7e0(r6)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_805AA950_000014E8
    lwz r3, 0x54c(r6)
    rlwinm r3, r3, 0, 18, 18
    cmplwi r3, 0x2000
    beq lbl_fn_805AA950_000014E8
    lwz r3, 0x146c(r6)
    cmpwi r3, 0x29
    beq lbl_fn_805AA950_000014E8
    psq_l f1, 0x528(r6), 0, 0
    lfs f2, 0x530(r6)
    lfs f3, 0x8(r4)
    lfs f6, 0x5b0(r6)
    fsubs f8, f3, f2
    psq_st f1, 0x0(r5), 0, 0
    fmuls f10, f4, f6
    lfs f5, 0x0(r4)
    lfs f3, 0x7c(r1)
    lfs f7, 0x4(r4)
    fsubs f9, f5, f3
    lfs f6, 0x80(r1)
    fmuls f5, f8, f8
    stfs f2, 0x84(r1)
    fsubs f6, f7, f6
    fmuls f3, f10, f10
    fmadds f5, f9, f9, f5
    stfs f9, 0x34(r1)
    stfs f6, 0x38(r1)
    fcmpo cr0, f5, f3
    stfs f8, 0x3c(r1)
    bge lbl_fn_805AA950_000014E8
    fcmpo cr0, f5, f0
    bge lbl_fn_805AA950_000014E8
    fmr f0, f5
    stw r0, 0x9c(r1)
    stw r0, 0x94(r1)
    stw r6, 0x98(r1)
lbl_fn_805AA950_000014E8:
    lwz r6, 0x14ac(r6)
lbl_fn_805AA950_000014EC:
    cmpwi r6, 0x0
    bne lbl_fn_805AA950_0000143C
    lwz r0, 0x94(r1)
    cmpwi r0, 0x2
    beq lbl_fn_805AA950_00001AC8
    cmpwi r0, 0x0
    beq lbl_fn_805AA950_00001AC8
    lwz r21, 0x9c(r1)
    lwz r31, 0x4(r21)
    mr r3, r21
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_805AA950_00001524
    addi r31, r21, 0x80
lbl_fn_805AA950_00001524:
    cmpwi r31, 0x0
    beq lbl_fn_805AA950_00001608
    lwz r0, 0x4(r31)
    cmpwi r0, 0x13
    beq lbl_fn_805AA950_0000159C
    bge lbl_fn_805AA950_0000156C
    cmpwi r0, 0xa
    beq lbl_fn_805AA950_00001590
    bge lbl_fn_805AA950_00001554
    cmpwi r0, 0x7
    beq lbl_fn_805AA950_00001590
    b lbl_fn_805AA950_0000159C
lbl_fn_805AA950_00001554:
    cmpwi r0, 0xd
    beq lbl_fn_805AA950_00001590
    blt lbl_fn_805AA950_0000159C
    cmpwi r0, 0x10
    bge lbl_fn_805AA950_00001590
    b lbl_fn_805AA950_0000159C
lbl_fn_805AA950_0000156C:
    cmpwi r0, 0x6d8
    beq lbl_fn_805AA950_00001590
    bge lbl_fn_805AA950_00001584
    cmpwi r0, 0x15
    bge lbl_fn_805AA950_0000159C
    b lbl_fn_805AA950_00001590
lbl_fn_805AA950_00001584:
    cmpwi r0, 0x4ef8
    beq lbl_fn_805AA950_00001590
    b lbl_fn_805AA950_0000159C
lbl_fn_805AA950_00001590:
    li r3, 0x7531
    bl fn_80219E6C
    mr r31, r3
lbl_fn_805AA950_0000159C:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x4ef9
    bne lbl_fn_805AA950_000015B4
    li r3, 0x7532
    bl fn_80219E6C
    mr r31, r3
lbl_fn_805AA950_000015B4:
    lwz r3, 0x4(r31)
    subi r0, r3, 0x4eec
    cmplwi r0, 0x1
    bgt lbl_fn_805AA950_000015EC
    lwz r3, 0x9c(r1)
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805AA950_000015EC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_805AA950_000015EC
    li r3, 0xbbf
    bl fn_80219E6C
    mr r31, r3
lbl_fn_805AA950_000015EC:
    lbz r0, 0x2(r31)
    extsb r0, r0
    cmpwi r0, 0x4
    beq lbl_fn_805AA950_00001604
    cmpwi r0, 0x0
    bne lbl_fn_805AA950_00001608
lbl_fn_805AA950_00001604:
    li r31, 0x0
lbl_fn_805AA950_00001608:
    cmpwi r31, 0x0
    beq lbl_fn_805AA950_00001AC8
    lwz r22, 0x4(r21)
    mr r3, r21
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_805AA950_00001628
    addi r22, r21, 0x80
lbl_fn_805AA950_00001628:
    cmpwi r22, 0x0
    beq lbl_fn_805AA950_0000164C
    lwz r3, 0x4(r22)
    subi r0, r3, 0x4ef8
    cmplwi r0, 0x1
    bgt lbl_fn_805AA950_0000164C
    li r3, 0x7530
    bl fn_80219E6C
    mr r22, r3
lbl_fn_805AA950_0000164C:
    lwz r3, 0x4(r22)
    subi r0, r3, 0x4eec
    cmplwi r0, 0x1
    bgt lbl_fn_805AA950_00001680
    lwz r3, 0x8(r21)
    cmpwi r3, 0x0
    beq lbl_fn_805AA950_00001680
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_805AA950_00001680
    li r3, 0xbbf
    bl fn_80219E6C
    mr r22, r3
lbl_fn_805AA950_00001680:
    lwz r3, lbl_8087F490
    mr r4, r31
    mr r5, r22
    bl fn_803E4A20
    li r0, 0x1
    stb r0, 0x15d4(r28)
    b lbl_fn_805AA950_00001AC8
lbl_fn_805AA950_0000169C:
    cmpwi r0, 0x1
    bne lbl_fn_805AA950_00001AC8
    lwz r4, 0xa80(r3)
    cmpwi r4, 0x0
    ble lbl_fn_805AA950_000016B8
    subi r0, r4, 0x1
    stw r0, 0xa80(r3)
lbl_fn_805AA950_000016B8:
    lwz r5, 0x48(r3)
    lwz r4, 0x4c(r3)
    lwz r0, 0x50(r3)
    mr r3, r22
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r0, 0x78(r1)
    bl fn_805F9920
    lfs f0, lbl_808882F4
    fcmpo cr0, f1, f0
    ble lbl_fn_805AA950_000016F0
    lwz r0, 0xa80(r28)
    cmpwi r0, 0x0
    ble lbl_fn_805AA950_000016F8
lbl_fn_805AA950_000016F0:
    cmpwi r21, 0x0
    beq lbl_fn_805AA950_00001AC8
lbl_fn_805AA950_000016F8:
    psq_l f1, 0x0(r22), 0, 0
    addi r25, r1, 0x64
    lfs f2, 0x8(r22)
    mr r3, r25
    stfs f2, 0x6c(r1)
    psq_st f1, 0x0(r25), 0, 0
    bl fn_805F9920
    lfs f0, lbl_80888344
    fcmpo cr0, f1, f0
    bge lbl_fn_805AA950_0000174C
    lfs f4, 0x64(r1)
    lfs f5, lbl_808882F4
    lfs f3, 0x68(r1)
    lfs f0, 0x6c(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x64(r1)
    stfs f3, 0x68(r1)
    stfs f0, 0x6c(r1)
    b lbl_fn_805AA950_00001758
lbl_fn_805AA950_0000174C:
    mr r3, r25
    mr r4, r25
    bl fn_805F98D0
lbl_fn_805AA950_00001758:
    lwz r5, lbl_8087F430
    addi r3, r1, 0xe0
    li r4, 0x79
    lfs f0, 0x90c(r5)
    fneg f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x64
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x64
    lfs f2, 0x6c(r1)
    addi r3, r1, 0x28
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x30(r1)
    bl fn_805A6D24
    cmpwi r3, 0x8
    mr r25, r3
    beq lbl_fn_805AA950_00001AC8
    lwz r4, 0x70(r1)
    cmpwi r4, 0x2
    bne lbl_fn_805AA950_00001984
    addi r3, r1, 0xc0
    li r4, 0x0
    li r5, 0x20
    bl memset
    lfs f0, lbl_80888338
    lis r23, lbl_807C7030@ha
    stfs f0, 0xa0(r1)
    addi r24, r1, 0x1c
    lfs f31, lbl_808882F4
    addi r23, r23, lbl_807C7030@l
    stfs f0, 0xa4(r1)
    addi r22, r1, 0x58
    addi r26, r1, 0xc0
    addi r31, r1, 0xa0
    stfs f0, 0xa8(r1)
    li r30, 0x0
    li r27, 0x0
    stfs f0, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    b lbl_fn_805AA950_00001924
lbl_fn_805AA950_00001810:
    add r21, r28, r27
    lwzu r3, 0xa8c(r21)
    cmpwi r3, 0x2
    beq lbl_fn_805AA950_0000191C
    lwz r0, 0xa78(r28)
    cmpwi r0, 0x1
    bne lbl_fn_805AA950_0000184C
    cmpwi r3, 0x0
    bne lbl_fn_805AA950_0000184C
    lwz r3, 0x54(r28)
    li r5, 0x1
    lwz r4, 0x4(r21)
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_805AA950_0000191C
lbl_fn_805AA950_0000184C:
    lwz r0, 0x0(r21)
    cmpwi r0, 0x0
    bne lbl_fn_805AA950_00001868
    lwz r4, 0x4(r21)
    mr r3, r24
    bl fn_801781B0
    b lbl_fn_805AA950_00001898
lbl_fn_805AA950_00001868:
    cmpwi r0, 0x1
    bne lbl_fn_805AA950_00001888
    lwz r3, 0x8(r21)
    psq_l f1, 0x10(r3), 0, 0
    lfs f2, 0x18(r3)
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r24), 0, 0
    b lbl_fn_805AA950_00001898
lbl_fn_805AA950_00001888:
    psq_l f1, 0x0(r23), 0, 0
    lfs f2, 0x8(r23)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x24(r1)
lbl_fn_805AA950_00001898:
    lfs f4, 0x8(r24)
    lfs f0, 0x8(r29)
    lfs f3, 0x0(r24)
    fsubs f5, f4, f0
    lfs f0, 0x0(r29)
    lfs f4, 0x4(r24)
    fsubs f6, f3, f0
    lfs f3, 0x4(r29)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x58(r1)
    fmadds f30, f6, f6, f0
    stfs f3, 0x5c(r1)
    stfs f5, 0x60(r1)
    fcmpo cr0, f30, f31
    ble lbl_fn_805AA950_000018E4
    addi r3, r1, 0x58
    mr r4, r3
    bl fn_805F98D0
lbl_fn_805AA950_000018E4:
    lfs f2, 0x60(r1)
    addi r3, r1, 0x10
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x18(r1)
    bl fn_805A6D24
    cmpwi r3, 0x8
    beq lbl_fn_805AA950_0000191C
    slwi r0, r3, 2
    lfsx f0, r31, r0
    fcmpo cr0, f30, f0
    bge lbl_fn_805AA950_0000191C
    stwx r21, r26, r0
    stfsx f30, r31, r0
lbl_fn_805AA950_0000191C:
    addi r30, r30, 0x1
    addi r27, r27, 0x2c
lbl_fn_805AA950_00001924:
    lwz r0, 0xa88(r28)
    cmplw r30, r0
    blt lbl_fn_805AA950_00001810
    slwi r0, r25, 2
    addi r3, r1, 0xc0
    lwzx r6, r3, r0
    cmpwi r6, 0x0
    beq lbl_fn_805AA950_00001AC8
    lwz r3, 0x0(r6)
    li r0, 0xa
    stw r3, 0x48(r28)
    addi r3, r1, 0xc
    lfs f1, lbl_808882F8
    li r4, 0x8
    lwz r5, 0x4(r6)
    stw r5, 0x4c(r28)
    lwz r5, 0x8(r6)
    stw r5, 0x50(r28)
    stw r0, 0xa80(r28)
    bl fn_805A70D8
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805AA950_00001AC8
lbl_fn_805AA950_00001984:
    lwz r0, 0xa88(r28)
    addi r21, r28, 0xa8c
    lwz r5, 0x74(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805AA950_00001AC8
lbl_fn_805AA950_0000199C:
    lwz r0, 0x0(r21)
    cmpwi r0, 0x0
    bne lbl_fn_805AA950_000019C4
    cmpwi r4, 0x0
    bne lbl_fn_805AA950_000019C4
    lwz r0, 0x4(r21)
    subf r0, r0, r5
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_805AA950_000019E0
lbl_fn_805AA950_000019C4:
    cmpwi r0, 0x1
    bne lbl_fn_805AA950_000019DC
    cmpwi r4, 0x1
    bne lbl_fn_805AA950_000019DC
    li r0, 0x1
    b lbl_fn_805AA950_000019E0
lbl_fn_805AA950_000019DC:
    li r0, 0x0
lbl_fn_805AA950_000019E0:
    cmpwi r0, 0x0
    beq lbl_fn_805AA950_00001AC0
    addi r0, r3, 0x1
    cmpwi r3, 0x0
    slwi r4, r0, 29
    stw r3, 0x4c(r1)
    srwi r5, r0, 31
    li r0, 0x7
    subf r4, r5, r4
    rotlwi r4, r4, 3
    add r4, r4, r5
    stw r4, 0x50(r1)
    ble lbl_fn_805AA950_00001A18
    subi r0, r3, 0x1
lbl_fn_805AA950_00001A18:
    stw r0, 0x54(r1)
    addi r22, r1, 0x4c
    li r24, 0x0
lbl_fn_805AA950_00001A24:
    lwz r0, 0x0(r22)
    slwi r0, r0, 2
    add r3, r21, r0
    lwz r23, 0xc(r3)
    cmpwi r23, 0x0
    beq lbl_fn_805AA950_00001AAC
    lwz r0, 0xa78(r28)
    cmpwi r0, 0x1
    bne lbl_fn_805AA950_00001A6C
    lwz r0, 0x0(r23)
    cmpwi r0, 0x0
    bne lbl_fn_805AA950_00001A6C
    lwz r3, 0x54(r28)
    li r5, 0x1
    lwz r4, 0x4(r23)
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_805AA950_00001AAC
lbl_fn_805AA950_00001A6C:
    lwz r3, 0x0(r23)
    li r0, 0xa
    stw r3, 0x48(r28)
    addi r3, r1, 0x8
    lfs f1, lbl_808882F8
    li r4, 0x8
    lwz r5, 0x4(r23)
    stw r5, 0x4c(r28)
    lwz r5, 0x8(r23)
    stw r5, 0x50(r28)
    stw r0, 0xa80(r28)
    bl fn_805A70D8
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805AA950_00001AC8
lbl_fn_805AA950_00001AAC:
    addi r24, r24, 0x1
    addi r22, r22, 0x4
    cmpwi r24, 0x3
    blt lbl_fn_805AA950_00001A24
    b lbl_fn_805AA950_00001AC8
lbl_fn_805AA950_00001AC0:
    addi r21, r21, 0x2c
    bdnz lbl_fn_805AA950_0000199C
lbl_fn_805AA950_00001AC8:
    addi r11, r1, 0x140
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    bl _restgpr_21
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
