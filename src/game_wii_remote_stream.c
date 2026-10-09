#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_8001256C(void);
extern void fn_800125C8(void);
extern void fn_80012638(void);
extern void fn_8001268C(void);
extern void fn_8001271C(void);
extern void fn_8001282C(void);
extern void fn_800128FC(void);
extern void fn_8001296C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80069BF4(void);
extern void fn_8006B174(void);
extern void fn_80084C24(void);
extern void fn_8008B130(void);
extern void fn_800928B0(void);
extern void fn_8009290C(void);
extern void fn_800937E8(void);
extern void fn_80093C20(void);
extern void fn_80093D28(void);
extern void fn_80093D98(void);
extern void fn_80093F1C(void);
extern void fn_800948F0(void);
extern void fn_80094958(void);
extern void fn_80094B6C(void);
extern void fn_80097750(void);
extern void fn_8011EE58(void);
extern void fn_8048B3B8(void);
extern void fn_8048BD04(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_80538B1C(void);
extern void fn_80538FD8(void);
extern void fn_8067E23C(void);
extern void fn_80682428(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80794B18[];
extern u8 lbl_8075E850[];
extern u8 lbl_8075E858[];
extern u8 lbl_8075EB60[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F540;
extern u32 lbl_80887E30;
extern u32 lbl_80887E34;
extern u32 lbl_80887E3C;
extern u32 lbl_80887E54;
extern u32 lbl_80887E5C;
extern u32 lbl_80887E68;

/* Function declarations */
void fn_80557ABC(void);
void fn_80557E04(void);
void fn_80557F88(void);
void fn_805588F0(void);
void fn_80559020(void);
void fn_8055936C(void);
void fn_805594A4(void);

asm void fn_80557ABC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    beq lbl_fn_80557ABC_0000003C
    cmpwi r5, 0x2
    beq lbl_fn_80557ABC_00000144
    cmpwi r5, 0x3
    beq lbl_fn_80557ABC_000001A8
    b lbl_fn_80557ABC_00000324
lbl_fn_80557ABC_0000003C:
    mr r3, r30
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80557ABC_00000088
lbl_fn_80557ABC_00000068:
    lwz r0, 0x164(r3)
    add r31, r0, r4
    lwz r0, 0x14(r31)
    cmpw r5, r0
    bne lbl_fn_80557ABC_00000080
    b lbl_fn_80557ABC_0000008C
lbl_fn_80557ABC_00000080:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80557ABC_00000068
lbl_fn_80557ABC_00000088:
    li r31, 0x0
lbl_fn_80557ABC_0000008C:
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    ble lbl_fn_80557ABC_000000C4
    lwz r0, 0x30(r30)
    lwz r3, lbl_8087F540
    cmpwi r0, 0x7
    ble lbl_fn_80557ABC_000000B4
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x38
    b lbl_fn_80557ABC_000000B8
lbl_fn_80557ABC_000000B4:
    li r4, 0x0
lbl_fn_80557ABC_000000B8:
    lwz r4, 0x4(r4)
    bl fn_8048B3B8
    stw r3, 0x13c(r31)
lbl_fn_80557ABC_000000C4:
    lbz r0, 0x146(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80557ABC_000000E0
    lwz r3, 0x10(r30)
    lwz r0, 0x14(r30)
    subf. r0, r3, r0
    bne lbl_fn_80557ABC_00000324
lbl_fn_80557ABC_000000E0:
    li r0, 0x0
    stw r0, 0x118(r31)
    stw r0, 0x11c(r31)
    lwz r3, 0x120(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80557ABC_0000010C
    beq lbl_fn_80557ABC_00000104
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80557ABC_00000104:
    li r0, 0x0
    stw r0, 0x120(r31)
lbl_fn_80557ABC_0000010C:
    li r0, 0x0
    stw r0, 0x124(r31)
    stw r0, 0x128(r31)
    lwz r3, 0x12c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80557ABC_00000138
    beq lbl_fn_80557ABC_00000130
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80557ABC_00000130:
    li r0, 0x0
    stw r0, 0x12c(r31)
lbl_fn_80557ABC_00000138:
    li r0, 0x0
    stb r0, 0x146(r31)
    b lbl_fn_80557ABC_00000324
lbl_fn_80557ABC_00000144:
    mr r3, r30
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80557ABC_00000190
lbl_fn_80557ABC_00000170:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_80557ABC_00000188
    b lbl_fn_80557ABC_00000194
lbl_fn_80557ABC_00000188:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80557ABC_00000170
lbl_fn_80557ABC_00000190:
    li r6, 0x0
lbl_fn_80557ABC_00000194:
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x1
    blt lbl_fn_80557ABC_000001A8
    li r0, 0x1
    stb r0, 0x146(r6)
lbl_fn_80557ABC_000001A8:
    mr r3, r30
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r6, 0x10(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80557ABC_000001F0
lbl_fn_80557ABC_000001D4:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    beq lbl_fn_80557ABC_000001F0
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80557ABC_000001D4
lbl_fn_80557ABC_000001F0:
    lwz r0, 0x30(r30)
    cmpwi r0, 0x8
    ble lbl_fn_80557ABC_00000208
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x40
    b lbl_fn_80557ABC_0000020C
lbl_fn_80557ABC_00000208:
    li r4, 0x0
lbl_fn_80557ABC_0000020C:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80557ABC_00000324
    lwz r0, 0x168(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80557ABC_0000024C
lbl_fn_80557ABC_0000022C:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_80557ABC_00000244
    b lbl_fn_80557ABC_00000250
lbl_fn_80557ABC_00000244:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80557ABC_0000022C
lbl_fn_80557ABC_0000024C:
    li r5, 0x0
lbl_fn_80557ABC_00000250:
    lwz r0, 0x168(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80557ABC_00000284
lbl_fn_80557ABC_00000264:
    lwz r0, 0x164(r3)
    add r29, r0, r4
    lwz r0, 0x14(r29)
    cmpw r6, r0
    bne lbl_fn_80557ABC_0000027C
    b lbl_fn_80557ABC_00000288
lbl_fn_80557ABC_0000027C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80557ABC_00000264
lbl_fn_80557ABC_00000284:
    li r29, 0x0
lbl_fn_80557ABC_00000288:
    mr r3, r5
    bl fn_8001296C
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80557ABC_000002A4
    li r3, 0x0
    b lbl_fn_80557ABC_00000328
lbl_fn_80557ABC_000002A4:
    lwz r0, 0x30(r30)
    lwz r31, 0x16c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80557ABC_000002BC
    lwz r4, 0x2c(r30)
    b lbl_fn_80557ABC_000002C0
lbl_fn_80557ABC_000002BC:
    li r4, 0x0
lbl_fn_80557ABC_000002C0:
    lwz r4, 0x4(r4)
    li r5, 0x0
    bl fn_800928B0
    lwz r4, 0x48(r31)
    slwi r30, r3, 2
    mr r3, r28
    lwzx r4, r4, r30
    lwz r4, 0x10(r4)
    bl fn_800948F0
    lfs f0, lbl_80887E34
    lis r5, lbl_807C7030@ha
    stfs f0, 0x8(r1)
    addi r5, r5, lbl_807C7030@l
    mr r3, r28
    addi r7, r1, 0x8
    stfs f0, 0xc(r1)
    mr r6, r5
    li r8, 0x0
    stfs f0, 0x10(r1)
    lwz r4, 0x48(r31)
    lwzx r4, r4, r30
    lwz r4, 0x10(r4)
    bl fn_80093F1C
    li r0, 0x1
    stb r0, 0x146(r29)
lbl_fn_80557ABC_00000324:
    li r3, 0x0
lbl_fn_80557ABC_00000328:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80557E04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r5
    ble lbl_fn_80557E04_00000398
    cmpwi r4, 0x0
    beq lbl_fn_80557E04_00000398
    cmpwi r4, 0x1
    beq lbl_fn_80557E04_000003D0
    cmpwi r4, 0x4
    beq lbl_fn_80557E04_000003F4
    cmpwi r4, 0x5
    beq lbl_fn_80557E04_0000042C
    cmpwi r4, 0x6
    beq lbl_fn_80557E04_00000478
    b lbl_fn_80557E04_000004B0
lbl_fn_80557E04_00000398:
    lis r31, lbl_8075EB60@ha
    mr r3, r30
    addi r31, r31, lbl_8075EB60@l
    addi r4, r31, 0x29
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80557E04_000003C8
    mr r3, r30
    addi r4, r31, 0x30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557E04_000003D0
lbl_fn_80557E04_000003C8:
    li r3, 0x1
    b lbl_fn_80557E04_000004B4
lbl_fn_80557E04_000003D0:
    lis r4, lbl_8075EB60@ha
    mr r3, r30
    addi r4, r4, lbl_8075EB60@l
    addi r4, r4, 0x29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557E04_000003F4
    li r3, 0x1
    b lbl_fn_80557E04_000004B4
lbl_fn_80557E04_000003F4:
    lis r31, lbl_8075EB60@ha
    mr r3, r30
    addi r31, r31, lbl_8075EB60@l
    addi r4, r31, 0x30
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80557E04_00000424
    mr r3, r30
    addi r4, r31, 0x37
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557E04_0000042C
lbl_fn_80557E04_00000424:
    li r3, 0x1
    b lbl_fn_80557E04_000004B4
lbl_fn_80557E04_0000042C:
    lis r31, lbl_8075EB60@ha
    mr r3, r30
    addi r31, r31, lbl_8075EB60@l
    addi r4, r31, 0x44
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80557E04_00000470
    mr r3, r30
    addi r4, r31, 0x4c
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80557E04_00000470
    mr r3, r30
    addi r4, r31, 0x53
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557E04_00000478
lbl_fn_80557E04_00000470:
    li r3, 0x1
    b lbl_fn_80557E04_000004B4
lbl_fn_80557E04_00000478:
    lis r31, lbl_8075EB60@ha
    mr r3, r30
    addi r31, r31, lbl_8075EB60@l
    addi r4, r31, 0x44
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80557E04_000004A8
    mr r3, r30
    addi r4, r31, 0x30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557E04_000004B0
lbl_fn_80557E04_000004A8:
    li r3, 0x1
    b lbl_fn_80557E04_000004B4
lbl_fn_80557E04_000004B0:
    li r3, 0x0
lbl_fn_80557E04_000004B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80557F88(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stmw r16, 0xb0(r1)
    mr r25, r3
    mr r3, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    bl fn_800128FC
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80557F88_00000E20
    addi r3, r3, 0xb0
    bl fn_8008B130
    li r0, 0x0
    stw r0, 0x94(r1)
    mr r24, r3
    addi r30, r1, 0x94
    stw r0, 0x98(r1)
    stw r0, 0x9c(r1)
    bl strlen
    mr r23, r3
    mr r3, r30
    mr r4, r23
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r24
    add r7, r24, r23
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0xa0
    bl fn_8006B174
    lwz r0, 0x94(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80557F88_0000057C
    lwz r3, 0x9c(r1)
    bl dtor_80084684
lbl_fn_80557F88_0000057C:
    addi r3, r1, 0x88
    addi r4, r1, 0xa0
    li r5, 0x0
    li r6, 0x5
    bl fn_80069BF4
    lwz r0, 0xa0(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80557F88_000005C0
    lwz r4, 0x88(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80557F88_000005C0
    lwz r3, 0x8c(r1)
    lwz r0, 0x90(r1)
    stw r4, 0xa0(r1)
    stw r3, 0xa4(r1)
    stw r0, 0xa8(r1)
    b lbl_fn_80557F88_00000618
lbl_fn_80557F88_000005C0:
    cmpwi r3, 0x0
    beq lbl_fn_80557F88_000005D0
    lwz r5, 0xa4(r1)
    b lbl_fn_80557F88_000005D8
lbl_fn_80557F88_000005D0:
    lbz r0, 0xa0(r1)
    clrlwi r5, r0, 25
lbl_fn_80557F88_000005D8:
    lwz r0, 0x88(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_000005F4
    lbz r0, 0x88(r1)
    addi r6, r1, 0x89
    clrlwi r4, r0, 25
    b lbl_fn_80557F88_000005FC
lbl_fn_80557F88_000005F4:
    lwz r6, 0x90(r1)
    lwz r4, 0x8c(r1)
lbl_fn_80557F88_000005FC:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0xa0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80557F88_00000618:
    lwz r0, 0x88(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80557F88_0000062C
    lwz r3, 0x90(r1)
    bl dtor_80084684
lbl_fn_80557F88_0000062C:
    lis r3, lbl_8075EB60@ha
    li r30, -0x1
    addi r3, r3, lbl_8075EB60@l
    addi r23, r3, 0xb4
    mr r3, r23
    bl strlen
    lwz r0, 0xa0(r1)
    mr r24, r3
    stw r3, 0x7c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_00000664
    lbz r0, 0xa0(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80557F88_00000668
lbl_fn_80557F88_00000664:
    lwz r4, 0xa4(r1)
lbl_fn_80557F88_00000668:
    lwz r0, 0xa0(r1)
    stw r4, 0x78(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_00000688
    lbz r0, 0xa0(r1)
    addi r3, r1, 0xa1
    clrlwi r0, r0, 25
    b lbl_fn_80557F88_00000690
lbl_fn_80557F88_00000688:
    lwz r3, 0xa8(r1)
    lwz r0, 0xa4(r1)
lbl_fn_80557F88_00000690:
    cmplw r4, r0
    stw r0, 0x80(r1)
    addi r4, r1, 0x80
    bge lbl_fn_80557F88_000006A4
    addi r4, r1, 0x78
lbl_fn_80557F88_000006A4:
    lwz r0, 0x0(r4)
    mr r4, r23
    stw r0, 0x84(r1)
    addi r5, r1, 0x84
    cmplw r24, r0
    bge lbl_fn_80557F88_000006C0
    addi r5, r1, 0x7c
lbl_fn_80557F88_000006C0:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_000006F4
    lwz r0, 0x84(r1)
    cmplw r0, r24
    bge lbl_fn_80557F88_000006E4
    li r3, -0x1
    b lbl_fn_80557F88_000006F4
lbl_fn_80557F88_000006E4:
    bne lbl_fn_80557F88_000006F0
    li r3, 0x0
    b lbl_fn_80557F88_000006F4
lbl_fn_80557F88_000006F0:
    li r3, 0x1
lbl_fn_80557F88_000006F4:
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000704
    li r30, 0x0
    b lbl_fn_80557F88_00000BF8
lbl_fn_80557F88_00000704:
    lis r3, lbl_8075EB60@ha
    addi r3, r3, lbl_8075EB60@l
    addi r23, r3, 0xba
    mr r3, r23
    bl strlen
    lwz r0, 0xa0(r1)
    mr r24, r3
    stw r3, 0x6c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_00000738
    lbz r0, 0xa0(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80557F88_0000073C
lbl_fn_80557F88_00000738:
    lwz r4, 0xa4(r1)
lbl_fn_80557F88_0000073C:
    lwz r0, 0xa0(r1)
    stw r4, 0x68(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_0000075C
    lbz r0, 0xa0(r1)
    addi r3, r1, 0xa1
    clrlwi r0, r0, 25
    b lbl_fn_80557F88_00000764
lbl_fn_80557F88_0000075C:
    lwz r3, 0xa8(r1)
    lwz r0, 0xa4(r1)
lbl_fn_80557F88_00000764:
    cmplw r4, r0
    stw r0, 0x70(r1)
    addi r4, r1, 0x70
    bge lbl_fn_80557F88_00000778
    addi r4, r1, 0x68
lbl_fn_80557F88_00000778:
    lwz r0, 0x0(r4)
    mr r4, r23
    stw r0, 0x74(r1)
    addi r5, r1, 0x74
    cmplw r24, r0
    bge lbl_fn_80557F88_00000794
    addi r5, r1, 0x6c
lbl_fn_80557F88_00000794:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_000007C8
    lwz r0, 0x74(r1)
    cmplw r0, r24
    bge lbl_fn_80557F88_000007B8
    li r3, -0x1
    b lbl_fn_80557F88_000007C8
lbl_fn_80557F88_000007B8:
    bne lbl_fn_80557F88_000007C4
    li r3, 0x0
    b lbl_fn_80557F88_000007C8
lbl_fn_80557F88_000007C4:
    li r3, 0x1
lbl_fn_80557F88_000007C8:
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_000007D8
    li r30, 0x1
    b lbl_fn_80557F88_00000BF8
lbl_fn_80557F88_000007D8:
    lis r3, lbl_8075EB60@ha
    addi r3, r3, lbl_8075EB60@l
    addi r23, r3, 0xc0
    mr r3, r23
    bl strlen
    lwz r0, 0xa0(r1)
    mr r24, r3
    stw r3, 0x5c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_0000080C
    lbz r0, 0xa0(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80557F88_00000810
lbl_fn_80557F88_0000080C:
    lwz r4, 0xa4(r1)
lbl_fn_80557F88_00000810:
    lwz r0, 0xa0(r1)
    stw r4, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_00000830
    lbz r0, 0xa0(r1)
    addi r3, r1, 0xa1
    clrlwi r0, r0, 25
    b lbl_fn_80557F88_00000838
lbl_fn_80557F88_00000830:
    lwz r3, 0xa8(r1)
    lwz r0, 0xa4(r1)
lbl_fn_80557F88_00000838:
    cmplw r4, r0
    stw r0, 0x60(r1)
    addi r4, r1, 0x60
    bge lbl_fn_80557F88_0000084C
    addi r4, r1, 0x58
lbl_fn_80557F88_0000084C:
    lwz r0, 0x0(r4)
    mr r4, r23
    stw r0, 0x64(r1)
    addi r5, r1, 0x64
    cmplw r24, r0
    bge lbl_fn_80557F88_00000868
    addi r5, r1, 0x5c
lbl_fn_80557F88_00000868:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_0000089C
    lwz r0, 0x64(r1)
    cmplw r0, r24
    bge lbl_fn_80557F88_0000088C
    li r3, -0x1
    b lbl_fn_80557F88_0000089C
lbl_fn_80557F88_0000088C:
    bne lbl_fn_80557F88_00000898
    li r3, 0x0
    b lbl_fn_80557F88_0000089C
lbl_fn_80557F88_00000898:
    li r3, 0x1
lbl_fn_80557F88_0000089C:
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_000008AC
    li r30, 0x2
    b lbl_fn_80557F88_00000BF8
lbl_fn_80557F88_000008AC:
    lis r3, lbl_8075EB60@ha
    addi r3, r3, lbl_8075EB60@l
    addi r23, r3, 0xc6
    mr r3, r23
    bl strlen
    lwz r0, 0xa0(r1)
    mr r24, r3
    stw r3, 0x4c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_000008E0
    lbz r0, 0xa0(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80557F88_000008E4
lbl_fn_80557F88_000008E0:
    lwz r4, 0xa4(r1)
lbl_fn_80557F88_000008E4:
    lwz r0, 0xa0(r1)
    stw r4, 0x48(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_00000904
    lbz r0, 0xa0(r1)
    addi r3, r1, 0xa1
    clrlwi r0, r0, 25
    b lbl_fn_80557F88_0000090C
lbl_fn_80557F88_00000904:
    lwz r3, 0xa8(r1)
    lwz r0, 0xa4(r1)
lbl_fn_80557F88_0000090C:
    cmplw r4, r0
    stw r0, 0x50(r1)
    addi r4, r1, 0x50
    bge lbl_fn_80557F88_00000920
    addi r4, r1, 0x48
lbl_fn_80557F88_00000920:
    lwz r0, 0x0(r4)
    mr r4, r23
    stw r0, 0x54(r1)
    addi r5, r1, 0x54
    cmplw r24, r0
    bge lbl_fn_80557F88_0000093C
    addi r5, r1, 0x4c
lbl_fn_80557F88_0000093C:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000970
    lwz r0, 0x54(r1)
    cmplw r0, r24
    bge lbl_fn_80557F88_00000960
    li r3, -0x1
    b lbl_fn_80557F88_00000970
lbl_fn_80557F88_00000960:
    bne lbl_fn_80557F88_0000096C
    li r3, 0x0
    b lbl_fn_80557F88_00000970
lbl_fn_80557F88_0000096C:
    li r3, 0x1
lbl_fn_80557F88_00000970:
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000980
    li r30, 0x3
    b lbl_fn_80557F88_00000BF8
lbl_fn_80557F88_00000980:
    lis r3, lbl_8075EB60@ha
    addi r3, r3, lbl_8075EB60@l
    addi r23, r3, 0xcc
    mr r3, r23
    bl strlen
    lwz r0, 0xa0(r1)
    mr r24, r3
    stw r3, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_000009B4
    lbz r0, 0xa0(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80557F88_000009B8
lbl_fn_80557F88_000009B4:
    lwz r4, 0xa4(r1)
lbl_fn_80557F88_000009B8:
    lwz r0, 0xa0(r1)
    stw r4, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_000009D8
    lbz r0, 0xa0(r1)
    addi r3, r1, 0xa1
    clrlwi r0, r0, 25
    b lbl_fn_80557F88_000009E0
lbl_fn_80557F88_000009D8:
    lwz r3, 0xa8(r1)
    lwz r0, 0xa4(r1)
lbl_fn_80557F88_000009E0:
    cmplw r4, r0
    stw r0, 0x40(r1)
    addi r4, r1, 0x40
    bge lbl_fn_80557F88_000009F4
    addi r4, r1, 0x38
lbl_fn_80557F88_000009F4:
    lwz r0, 0x0(r4)
    mr r4, r23
    stw r0, 0x44(r1)
    addi r5, r1, 0x44
    cmplw r24, r0
    bge lbl_fn_80557F88_00000A10
    addi r5, r1, 0x3c
lbl_fn_80557F88_00000A10:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000A44
    lwz r0, 0x44(r1)
    cmplw r0, r24
    bge lbl_fn_80557F88_00000A34
    li r3, -0x1
    b lbl_fn_80557F88_00000A44
lbl_fn_80557F88_00000A34:
    bne lbl_fn_80557F88_00000A40
    li r3, 0x0
    b lbl_fn_80557F88_00000A44
lbl_fn_80557F88_00000A40:
    li r3, 0x1
lbl_fn_80557F88_00000A44:
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000A54
    li r30, 0x4
    b lbl_fn_80557F88_00000BF8
lbl_fn_80557F88_00000A54:
    lis r3, lbl_8075EB60@ha
    addi r3, r3, lbl_8075EB60@l
    addi r23, r3, 0xd2
    mr r3, r23
    bl strlen
    lwz r0, 0xa0(r1)
    mr r24, r3
    stw r3, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_00000A88
    lbz r0, 0xa0(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80557F88_00000A8C
lbl_fn_80557F88_00000A88:
    lwz r4, 0xa4(r1)
lbl_fn_80557F88_00000A8C:
    lwz r0, 0xa0(r1)
    stw r4, 0x28(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_00000AAC
    lbz r0, 0xa0(r1)
    addi r3, r1, 0xa1
    clrlwi r0, r0, 25
    b lbl_fn_80557F88_00000AB4
lbl_fn_80557F88_00000AAC:
    lwz r3, 0xa8(r1)
    lwz r0, 0xa4(r1)
lbl_fn_80557F88_00000AB4:
    cmplw r4, r0
    stw r0, 0x30(r1)
    addi r4, r1, 0x30
    bge lbl_fn_80557F88_00000AC8
    addi r4, r1, 0x28
lbl_fn_80557F88_00000AC8:
    lwz r0, 0x0(r4)
    mr r4, r23
    stw r0, 0x34(r1)
    addi r5, r1, 0x34
    cmplw r24, r0
    bge lbl_fn_80557F88_00000AE4
    addi r5, r1, 0x2c
lbl_fn_80557F88_00000AE4:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000B18
    lwz r0, 0x34(r1)
    cmplw r0, r24
    bge lbl_fn_80557F88_00000B08
    li r3, -0x1
    b lbl_fn_80557F88_00000B18
lbl_fn_80557F88_00000B08:
    bne lbl_fn_80557F88_00000B14
    li r3, 0x0
    b lbl_fn_80557F88_00000B18
lbl_fn_80557F88_00000B14:
    li r3, 0x1
lbl_fn_80557F88_00000B18:
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000B28
    li r30, 0x5
    b lbl_fn_80557F88_00000BF8
lbl_fn_80557F88_00000B28:
    lis r3, lbl_8075EB60@ha
    addi r3, r3, lbl_8075EB60@l
    addi r23, r3, 0xd8
    mr r3, r23
    bl strlen
    lwz r0, 0xa0(r1)
    mr r24, r3
    stw r3, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_00000B5C
    lbz r0, 0xa0(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80557F88_00000B60
lbl_fn_80557F88_00000B5C:
    lwz r4, 0xa4(r1)
lbl_fn_80557F88_00000B60:
    lwz r0, 0xa0(r1)
    stw r4, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80557F88_00000B80
    lbz r0, 0xa0(r1)
    addi r3, r1, 0xa1
    clrlwi r0, r0, 25
    b lbl_fn_80557F88_00000B88
lbl_fn_80557F88_00000B80:
    lwz r3, 0xa8(r1)
    lwz r0, 0xa4(r1)
lbl_fn_80557F88_00000B88:
    cmplw r4, r0
    stw r0, 0x20(r1)
    addi r4, r1, 0x20
    bge lbl_fn_80557F88_00000B9C
    addi r4, r1, 0x18
lbl_fn_80557F88_00000B9C:
    lwz r0, 0x0(r4)
    mr r4, r23
    stw r0, 0x24(r1)
    addi r5, r1, 0x24
    cmplw r24, r0
    bge lbl_fn_80557F88_00000BB8
    addi r5, r1, 0x1c
lbl_fn_80557F88_00000BB8:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000BEC
    lwz r0, 0x24(r1)
    cmplw r0, r24
    bge lbl_fn_80557F88_00000BDC
    li r3, -0x1
    b lbl_fn_80557F88_00000BEC
lbl_fn_80557F88_00000BDC:
    bne lbl_fn_80557F88_00000BE8
    li r3, 0x0
    b lbl_fn_80557F88_00000BEC
lbl_fn_80557F88_00000BE8:
    li r3, 0x1
lbl_fn_80557F88_00000BEC:
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000BF8
    li r30, 0x6
lbl_fn_80557F88_00000BF8:
    lis r3, lbl_8075EB60@ha
    addi r23, r31, 0x434
    li r21, 0x0
    li r20, 0x0
    addi r24, r3, lbl_8075EB60@l
    li r19, 0x0
    li r18, 0x0
    li r17, 0x0
    li r31, 0x0
    b lbl_fn_80557F88_00000E00
lbl_fn_80557F88_00000C20:
    add r22, r23, r31
    lwz r3, 0x4(r22)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r26, 0x0
    mr r16, r3
    beq lbl_fn_80557F88_00000C58
    mr r3, r25
    mr r4, r30
    mr r5, r16
    bl fn_80557E04
    mr r21, r3
lbl_fn_80557F88_00000C58:
    cmpwi r27, 0x0
    beq lbl_fn_80557F88_00000CCC
    cmpwi r30, 0x0
    beq lbl_fn_80557F88_00000C7C
    cmpwi r30, 0x2
    beq lbl_fn_80557F88_00000C98
    cmpwi r30, 0x6
    beq lbl_fn_80557F88_00000C98
    b lbl_fn_80557F88_00000CC8
lbl_fn_80557F88_00000C7C:
    mr r3, r16
    addi r4, r24, 0x5a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000C98
    li r20, 0x1
    b lbl_fn_80557F88_00000CCC
lbl_fn_80557F88_00000C98:
    mr r3, r16
    addi r4, r24, 0x5a
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80557F88_00000CC0
    mr r3, r16
    addi r4, r24, 0x64
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000CC8
lbl_fn_80557F88_00000CC0:
    li r20, 0x1
    b lbl_fn_80557F88_00000CCC
lbl_fn_80557F88_00000CC8:
    li r20, 0x0
lbl_fn_80557F88_00000CCC:
    cmpwi r28, 0x0
    beq lbl_fn_80557F88_00000D54
    cmplwi r30, 0x1
    ble lbl_fn_80557F88_00000CF0
    cmpwi r30, 0x3
    beq lbl_fn_80557F88_00000CF0
    cmpwi r30, 0x5
    beq lbl_fn_80557F88_00000D20
    b lbl_fn_80557F88_00000D50
lbl_fn_80557F88_00000CF0:
    mr r3, r16
    addi r4, r24, 0x6e
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80557F88_00000D18
    mr r3, r16
    addi r4, r24, 0x7c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000D20
lbl_fn_80557F88_00000D18:
    li r19, 0x1
    b lbl_fn_80557F88_00000D54
lbl_fn_80557F88_00000D20:
    mr r3, r16
    addi r4, r24, 0x8a
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80557F88_00000D48
    mr r3, r16
    addi r4, r24, 0x98
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000D50
lbl_fn_80557F88_00000D48:
    li r19, 0x1
    b lbl_fn_80557F88_00000D54
lbl_fn_80557F88_00000D50:
    li r19, 0x0
lbl_fn_80557F88_00000D54:
    cmpwi r29, 0x0
    beq lbl_fn_80557F88_00000DA4
    subi r0, r30, 0x5
    cmplwi r0, 0x1
    ble lbl_fn_80557F88_00000D70
    cmpwi r30, 0x2
    bne lbl_fn_80557F88_00000DA0
lbl_fn_80557F88_00000D70:
    mr r3, r16
    addi r4, r24, 0xa6
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80557F88_00000D98
    mr r3, r16
    addi r4, r24, 0xad
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80557F88_00000DA0
lbl_fn_80557F88_00000D98:
    li r18, 0x1
    b lbl_fn_80557F88_00000DA4
lbl_fn_80557F88_00000DA0:
    li r18, 0x0
lbl_fn_80557F88_00000DA4:
    cmpwi r21, 0x0
    bne lbl_fn_80557F88_00000DC4
    cmpwi r20, 0x0
    bne lbl_fn_80557F88_00000DC4
    cmpwi r19, 0x0
    bne lbl_fn_80557F88_00000DC4
    cmpwi r18, 0x0
    beq lbl_fn_80557F88_00000DE0
lbl_fn_80557F88_00000DC4:
    lwz r3, 0x4(r22)
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    b lbl_fn_80557F88_00000DF8
lbl_fn_80557F88_00000DE0:
    lwz r3, 0x4(r22)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_80557F88_00000DF8:
    addi r17, r17, 0x1
    addi r31, r31, 0x4
lbl_fn_80557F88_00000E00:
    lwz r0, 0x0(r23)
    cmpw r17, r0
    blt lbl_fn_80557F88_00000C20
    lwz r0, 0xa0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80557F88_00000E20
    lwz r3, 0xa8(r1)
    bl dtor_80084684
lbl_fn_80557F88_00000E20:
    lmw r16, 0xb0(r1)
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_805588F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    beq lbl_fn_805588F0_00000E7C
    cmpwi r5, 0x5
    beq lbl_fn_805588F0_00001320
    cmpwi r5, 0x3
    beq lbl_fn_805588F0_000013C0
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_00000E7C:
    mr r3, r31
    bl fn_805381A4
    mr r29, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805588F0_00000EC8
lbl_fn_805588F0_00000EA8:
    lwz r0, 0x164(r3)
    add r7, r0, r4
    lwz r0, 0x14(r7)
    cmpw r5, r0
    bne lbl_fn_805588F0_00000EC0
    b lbl_fn_805588F0_00000ECC
lbl_fn_805588F0_00000EC0:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805588F0_00000EA8
lbl_fn_805588F0_00000EC8:
    li r7, 0x0
lbl_fn_805588F0_00000ECC:
    lwz r4, 0x30(r31)
    cmpwi r4, 0x0
    ble lbl_fn_805588F0_00000EE0
    lwz r3, 0x2c(r31)
    b lbl_fn_805588F0_00000EE4
lbl_fn_805588F0_00000EE0:
    li r3, 0x0
lbl_fn_805588F0_00000EE4:
    lwz r0, 0x4(r3)
    cmplwi r0, 0xa
    bgt lbl_fn_805588F0_00001538
    lis r3, jumptable_80794B18@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80794B18@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r4, 0x1
    mr r3, r7
    ble lbl_fn_805588F0_00000F20
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_805588F0_00000F24
lbl_fn_805588F0_00000F20:
    li r4, 0x0
lbl_fn_805588F0_00000F24:
    lwz r4, 0x4(r4)
    bl fn_8001256C
    b lbl_fn_805588F0_00001538
    cmpwi r4, 0x1
    mr r3, r7
    ble lbl_fn_805588F0_00000F48
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_805588F0_00000F4C
lbl_fn_805588F0_00000F48:
    li r4, 0x0
lbl_fn_805588F0_00000F4C:
    lwz r4, 0x4(r4)
    bl fn_800125C8
    b lbl_fn_805588F0_00001538
    cmpwi r4, 0x1
    ble lbl_fn_805588F0_00000F6C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_805588F0_00000F70
lbl_fn_805588F0_00000F6C:
    li r3, 0x0
lbl_fn_805588F0_00000F70:
    cmpwi r4, 0x1
    lha r4, 0x6(r3)
    mr r3, r7
    ble lbl_fn_805588F0_00000F8C
    lwz r5, 0x2c(r31)
    addi r5, r5, 0x8
    b lbl_fn_805588F0_00000F90
lbl_fn_805588F0_00000F8C:
    li r5, 0x0
lbl_fn_805588F0_00000F90:
    lha r5, 0x4(r5)
    bl fn_8001282C
    b lbl_fn_805588F0_00001538
    cmpwi r7, 0x0
    beq lbl_fn_805588F0_00000FB4
    mr r3, r7
    bl fn_800128FC
    mr r30, r3
    b lbl_fn_805588F0_00000FB8
lbl_fn_805588F0_00000FB4:
    li r30, 0x0
lbl_fn_805588F0_00000FB8:
    cmpwi r30, 0x0
    beq lbl_fn_805588F0_00001538
    lwz r3, 0x10(r31)
    lwz r0, 0x14(r31)
    subf. r7, r3, r0
    ble lbl_fn_805588F0_00001538
    lwz r0, 0x30(r31)
    cmpwi r0, 0x4
    ble lbl_fn_805588F0_00000FE8
    lwz r3, 0x2c(r31)
    addi r6, r3, 0x20
    b lbl_fn_805588F0_00000FEC
lbl_fn_805588F0_00000FE8:
    li r6, 0x0
lbl_fn_805588F0_00000FEC:
    lwz r3, 0x18(r31)
    lis r4, 0x4330
    lis r5, lbl_8075E850@ha
    lwz r0, 0x1c(r31)
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r3, r0, 0x8000
    xoris r0, r7, 0x8000
    stw r4, 0x8(r1)
    lfd f3, lbl_8075E850@l(r5)
    lfd f0, 0x8(r1)
    stw r3, 0x14(r1)
    fsubs f4, f0, f3
    lfs f0, lbl_80887E34
    stw r4, 0x10(r1)
    lfs f1, 0x4(r6)
    lfd f2, 0x10(r1)
    fcmpo cr0, f4, f0
    stw r0, 0x1c(r1)
    fsubs f5, f2, f3
    stw r4, 0x18(r1)
    lfd f2, 0x18(r1)
    fsubs f31, f2, f3
    cror eq, gt, eq
    beq lbl_fn_805588F0_0000105C
    fcmpo cr0, f5, f0
    cror eq, gt, eq
    bne lbl_fn_805588F0_00001084
lbl_fn_805588F0_0000105C:
    lfs f2, lbl_80887E34
    fcmpo cr0, f31, f2
    cror eq, gt, eq
    bne lbl_fn_805588F0_00001084
    fmr f3, f31
    addi r3, r30, 0x1188
    bl fn_8011EE58
    li r0, 0x1
    stb r0, 0x1200(r30)
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_00001084:
    fabs f2, f4
    lfs f0, lbl_80887E3C
    frsp f2, f2
    fcmpo cr0, f2, f0
    bge lbl_fn_805588F0_000010A8
    fabs f2, f5
    frsp f2, f2
    fcmpo cr0, f2, f0
    blt lbl_fn_805588F0_000010B4
lbl_fn_805588F0_000010A8:
    lfs f3, lbl_80887E30
    fcmpu cr0, f3, f31
    bne lbl_fn_805588F0_000010E8
lbl_fn_805588F0_000010B4:
    fmr f3, f31
    lfs f2, lbl_80887E34
    lfs f4, lbl_80887E5C
    addi r3, r30, 0x1188
    lfs f5, lbl_80887E54
    bl fn_8011EE58
    lfs f0, lbl_80887E34
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_805588F0_00001538
    li r0, 0x1
    stb r0, 0x1200(r30)
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_000010E8:
    fmr f4, f3
    lfs f2, lbl_80887E34
    fmr f5, f3
    addi r3, r30, 0x1188
    bl fn_8011EE58
    b lbl_fn_805588F0_00001538
    cmpwi r4, 0x1
    ble lbl_fn_805588F0_00001114
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_805588F0_00001118
lbl_fn_805588F0_00001114:
    li r3, 0x0
lbl_fn_805588F0_00001118:
    cmpwi r4, 0x2
    lwz r4, 0x4(r3)
    mr r3, r7
    ble lbl_fn_805588F0_00001134
    lwz r5, 0x2c(r31)
    addi r5, r5, 0x10
    b lbl_fn_805588F0_00001138
lbl_fn_805588F0_00001134:
    li r5, 0x0
lbl_fn_805588F0_00001138:
    lwz r5, 0x4(r5)
    bl fn_8001268C
    b lbl_fn_805588F0_00001538
    cmpwi r4, 0x1
    mr r3, r7
    ble lbl_fn_805588F0_0000115C
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_805588F0_00001160
lbl_fn_805588F0_0000115C:
    li r4, 0x0
lbl_fn_805588F0_00001160:
    lwz r4, 0x4(r4)
    bl fn_80012638
    b lbl_fn_805588F0_00001538
    cmpwi r4, 0x1
    ble lbl_fn_805588F0_00001180
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_805588F0_00001184
lbl_fn_805588F0_00001180:
    li r3, 0x0
lbl_fn_805588F0_00001184:
    cmpwi r4, 0x2
    lwz r29, 0x4(r3)
    ble lbl_fn_805588F0_0000119C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_805588F0_000011A0
lbl_fn_805588F0_0000119C:
    li r3, 0x0
lbl_fn_805588F0_000011A0:
    lwz r30, 0x4(r3)
    mr r3, r7
    bl fn_8001296C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_805588F0_00001538
    mr r4, r29
    bl fn_80093D28
    stw r3, 0x38(r31)
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_800937E8
    b lbl_fn_805588F0_00001538
    cmpwi r4, 0x1
    mr r3, r7
    ble lbl_fn_805588F0_000011F0
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_805588F0_000011F4
lbl_fn_805588F0_000011F0:
    li r4, 0x0
lbl_fn_805588F0_000011F4:
    lwz r4, 0x4(r4)
    bl fn_8001271C
    b lbl_fn_805588F0_00001538
    mr r3, r7
    bl fn_800128FC
    cmpwi r3, 0x0
    beq lbl_fn_805588F0_00001538
    lwz r0, 0x30(r31)
    cmpwi r0, 0x1
    ble lbl_fn_805588F0_00001228
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_805588F0_0000122C
lbl_fn_805588F0_00001228:
    li r4, 0x0
lbl_fn_805588F0_0000122C:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805588F0_00001248
    lwz r0, 0x6a0(r3)
    ori r0, r0, 0x10
    stw r0, 0x6a0(r3)
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_00001248:
    lwz r0, 0x6a0(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x6a0(r3)
    b lbl_fn_805588F0_00001538
    mr r3, r7
    bl fn_800128FC
    cmpwi r3, 0x0
    beq lbl_fn_805588F0_00001538
    lwz r0, 0x30(r31)
    cmpwi r0, 0x1
    ble lbl_fn_805588F0_00001280
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_805588F0_00001284
lbl_fn_805588F0_00001280:
    li r4, 0x0
lbl_fn_805588F0_00001284:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805588F0_000012A0
    lwz r4, 0xf98(r3)
    subi r0, r4, 0x1
    stw r0, 0xf94(r3)
    b lbl_fn_805588F0_000012A8
lbl_fn_805588F0_000012A0:
    li r0, 0x0
    stw r0, 0xf94(r3)
lbl_fn_805588F0_000012A8:
    lwz r0, 0x12a4(r3)
    oris r0, r0, 0x80
    stw r0, 0x12a4(r3)
    b lbl_fn_805588F0_00001538
    cmpwi r4, 0x1
    ble lbl_fn_805588F0_000012CC
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_805588F0_000012D0
lbl_fn_805588F0_000012CC:
    li r3, 0x0
lbl_fn_805588F0_000012D0:
    cmpwi r4, 0x2
    lwz r5, 0x4(r3)
    ble lbl_fn_805588F0_000012E8
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x10
    b lbl_fn_805588F0_000012EC
lbl_fn_805588F0_000012E8:
    li r3, 0x0
lbl_fn_805588F0_000012EC:
    cmpwi r4, 0x3
    lwz r6, 0x4(r3)
    mr r3, r30
    mr r4, r7
    ble lbl_fn_805588F0_0000130C
    lwz r7, 0x2c(r31)
    addi r7, r7, 0x18
    b lbl_fn_805588F0_00001310
lbl_fn_805588F0_0000130C:
    li r7, 0x0
lbl_fn_805588F0_00001310:
    lwz r7, 0x4(r7)
    li r8, 0x0
    bl fn_80557F88
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_00001320:
    mr r3, r31
    bl fn_805381A4
    mr r30, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r6, 0x10(r30)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805588F0_0000136C
lbl_fn_805588F0_0000134C:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_805588F0_00001364
    b lbl_fn_805588F0_00001370
lbl_fn_805588F0_00001364:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805588F0_0000134C
lbl_fn_805588F0_0000136C:
    li r5, 0x0
lbl_fn_805588F0_00001370:
    lwz r4, 0x30(r31)
    cmpwi r4, 0x0
    ble lbl_fn_805588F0_00001384
    lwz r3, 0x2c(r31)
    b lbl_fn_805588F0_00001388
lbl_fn_805588F0_00001384:
    li r3, 0x0
lbl_fn_805588F0_00001388:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_fn_805588F0_00001538
    cmpwi r4, 0x1
    mr r3, r5
    ble lbl_fn_805588F0_000013AC
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_805588F0_000013B0
lbl_fn_805588F0_000013AC:
    li r4, 0x0
lbl_fn_805588F0_000013B0:
    lwz r4, 0x4(r4)
    li r5, 0x1
    bl fn_8001268C
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_000013C0:
    mr r3, r31
    bl fn_805381A4
    mr r30, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r6, 0x10(r30)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805588F0_0000140C
lbl_fn_805588F0_000013EC:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_805588F0_00001404
    b lbl_fn_805588F0_00001410
lbl_fn_805588F0_00001404:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805588F0_000013EC
lbl_fn_805588F0_0000140C:
    li r5, 0x0
lbl_fn_805588F0_00001410:
    lwz r4, 0x30(r31)
    cmpwi r4, 0x0
    ble lbl_fn_805588F0_00001424
    lwz r3, 0x2c(r31)
    b lbl_fn_805588F0_00001428
lbl_fn_805588F0_00001424:
    li r3, 0x0
lbl_fn_805588F0_00001428:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x3
    bne lbl_fn_805588F0_00001470
    cmpwi r5, 0x0
    beq lbl_fn_805588F0_00001448
    mr r3, r5
    bl fn_800128FC
    b lbl_fn_805588F0_0000144C
lbl_fn_805588F0_00001448:
    li r3, 0x0
lbl_fn_805588F0_0000144C:
    cmpwi r3, 0x0
    beq lbl_fn_805588F0_00001538
    lwz r4, 0x10(r31)
    lwz r0, 0x14(r31)
    subf. r0, r4, r0
    ble lbl_fn_805588F0_00001538
    li r0, 0x0
    stb r0, 0x1200(r3)
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_00001470:
    cmpwi r0, 0x6
    bne lbl_fn_805588F0_000014D4
    cmpwi r4, 0x1
    ble lbl_fn_805588F0_0000148C
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_805588F0_00001490
lbl_fn_805588F0_0000148C:
    li r3, 0x0
lbl_fn_805588F0_00001490:
    lwz r29, 0x4(r3)
    mr r3, r5
    lwz r30, 0x38(r31)
    bl fn_8001296C
    cmpwi r3, 0x0
    beq lbl_fn_805588F0_00001538
    cmpwi r30, -0x1
    bne lbl_fn_805588F0_000014BC
    mr r4, r29
    bl fn_80093C20
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_000014BC:
    neg r0, r30
    mr r4, r29
    or r0, r0, r30
    srwi r5, r0, 31
    bl fn_800937E8
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_000014D4:
    cmpwi r0, 0x9
    bne lbl_fn_805588F0_00001538
    mr r3, r5
    bl fn_800128FC
    cmpwi r3, 0x0
    beq lbl_fn_805588F0_00001538
    lwz r0, 0x30(r31)
    cmpwi r0, 0x1
    ble lbl_fn_805588F0_00001504
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_805588F0_00001508
lbl_fn_805588F0_00001504:
    li r4, 0x0
lbl_fn_805588F0_00001508:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805588F0_00001520
    li r0, 0x0
    stw r0, 0xf94(r3)
    b lbl_fn_805588F0_00001538
lbl_fn_805588F0_00001520:
    lwz r4, 0xf98(r3)
    subi r0, r4, 0x1
    stw r0, 0xf94(r3)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x12a4(r3)
lbl_fn_805588F0_00001538:
    psq_l f31, 0x38(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80559020(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    lis r0, 0x4330
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r4
    mr r3, r31
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_805381A4
    mr r29, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x168(r3)
    mr r30, r3
    lwz r6, 0x10(r29)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80559020_000015E4
lbl_fn_80559020_000015C4:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_80559020_000015DC
    b lbl_fn_80559020_000015E8
lbl_fn_80559020_000015DC:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80559020_000015C4
lbl_fn_80559020_000015E4:
    li r5, 0x0
lbl_fn_80559020_000015E8:
    lwz r4, 0x30(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80559020_000015FC
    lwz r3, 0x2c(r31)
    b lbl_fn_80559020_00001600
lbl_fn_80559020_000015FC:
    li r3, 0x0
lbl_fn_80559020_00001600:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80559020_00001618
    cmpwi r0, 0x9
    beq lbl_fn_80559020_0000176C
    b lbl_fn_80559020_00001888
lbl_fn_80559020_00001618:
    cmpwi r5, 0x0
    beq lbl_fn_80559020_00001630
    mr r3, r5
    bl fn_800128FC
    mr r30, r3
    b lbl_fn_80559020_00001634
lbl_fn_80559020_00001630:
    li r30, 0x0
lbl_fn_80559020_00001634:
    cmpwi r30, 0x0
    beq lbl_fn_80559020_00001888
    lwz r3, 0x10(r31)
    lwz r0, 0x14(r31)
    subf. r7, r3, r0
    bne lbl_fn_80559020_00001888
    lwz r0, 0x30(r31)
    cmpwi r0, 0x4
    ble lbl_fn_80559020_00001664
    lwz r3, 0x2c(r31)
    addi r6, r3, 0x20
    b lbl_fn_80559020_00001668
lbl_fn_80559020_00001664:
    li r6, 0x0
lbl_fn_80559020_00001668:
    lwz r4, 0x18(r31)
    lis r5, lbl_8075E850@ha
    lwz r3, 0x1c(r31)
    xoris r0, r7, 0x8000
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    xoris r3, r3, 0x8000
    lfd f6, lbl_8075E850@l(r5)
    lfd f0, 0x8(r1)
    stw r3, 0x14(r1)
    fsubs f4, f0, f6
    lfs f0, lbl_80887E34
    stw r0, 0xc(r1)
    lfd f3, 0x10(r1)
    lfd f2, 0x8(r1)
    fcmpo cr0, f4, f0
    fsubs f5, f3, f6
    lfs f1, 0x4(r6)
    fsubs f31, f2, f6
    cror eq, gt, eq
    beq lbl_fn_80559020_000016C8
    fcmpo cr0, f5, f0
    cror eq, gt, eq
    bne lbl_fn_80559020_000016F0
lbl_fn_80559020_000016C8:
    lfs f2, lbl_80887E34
    fcmpo cr0, f31, f2
    cror eq, gt, eq
    bne lbl_fn_80559020_000016F0
    fmr f3, f31
    addi r3, r30, 0x1188
    bl fn_8011EE58
    li r0, 0x1
    stb r0, 0x1200(r30)
    b lbl_fn_80559020_00001888
lbl_fn_80559020_000016F0:
    fabs f2, f4
    lfs f0, lbl_80887E3C
    frsp f2, f2
    fcmpo cr0, f2, f0
    bge lbl_fn_80559020_00001714
    fabs f2, f5
    frsp f2, f2
    fcmpo cr0, f2, f0
    blt lbl_fn_80559020_00001720
lbl_fn_80559020_00001714:
    lfs f3, lbl_80887E30
    fcmpu cr0, f3, f31
    bne lbl_fn_80559020_00001754
lbl_fn_80559020_00001720:
    fmr f2, f31
    lfs f3, lbl_80887E30
    lfs f4, lbl_80887E5C
    addi r3, r30, 0x1188
    lfs f5, lbl_80887E54
    bl fn_8011EE58
    lfs f0, lbl_80887E34
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_80559020_00001888
    li r0, 0x1
    stb r0, 0x1200(r30)
    b lbl_fn_80559020_00001888
lbl_fn_80559020_00001754:
    fmr f4, f3
    lfs f2, lbl_80887E34
    fmr f5, f3
    addi r3, r30, 0x1188
    bl fn_8011EE58
    b lbl_fn_80559020_00001888
lbl_fn_80559020_0000176C:
    cmpwi r4, 0x1
    ble lbl_fn_80559020_00001780
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x8
    b lbl_fn_80559020_00001784
lbl_fn_80559020_00001780:
    li r3, 0x0
lbl_fn_80559020_00001784:
    cmpwi r5, 0x0
    lwz r29, 0x4(r3)
    beq lbl_fn_80559020_0000179C
    mr r3, r5
    bl fn_800128FC
    b lbl_fn_80559020_000017A0
lbl_fn_80559020_0000179C:
    li r3, 0x0
lbl_fn_80559020_000017A0:
    cmpwi r3, 0x0
    beq lbl_fn_80559020_00001888
    lwz r4, 0xf98(r3)
    lis r5, lbl_8075E850@ha
    lwz r0, 0xf94(r3)
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_8075E850@l(r5)
    stw r0, 0xc(r1)
    lfd f1, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f4, f1, f2
    fsubs f0, f0, f2
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80559020_000017E8
    fmr f0, f4
lbl_fn_80559020_000017E8:
    lfs f2, lbl_80887E30
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80559020_000017FC
    b lbl_fn_80559020_00001800
lbl_fn_80559020_000017FC:
    fmr f2, f0
lbl_fn_80559020_00001800:
    lwz r0, 0x14(r31)
    lis r4, lbl_8075E850@ha
    lfd f1, lbl_8075E850@l(r4)
    cmpwi r29, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f3, 0x198(r30)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fsubs f1, f0, f3
    beq lbl_fn_80559020_00001838
    fdivs f0, f2, f1
    fsubs f1, f2, f0
    b lbl_fn_80559020_00001844
lbl_fn_80559020_00001838:
    fsubs f0, f4, f2
    fdivs f0, f0, f1
    fadds f1, f2, f0
lbl_fn_80559020_00001844:
    lfs f0, lbl_80887E34
    fsubs f0, f4, f0
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_80559020_0000185C
    b lbl_fn_80559020_00001860
lbl_fn_80559020_0000185C:
    fmr f0, f1
lbl_fn_80559020_00001860:
    lfs f1, lbl_80887E30
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80559020_00001874
    b lbl_fn_80559020_00001878
lbl_fn_80559020_00001874:
    fmr f1, f0
lbl_fn_80559020_00001878:
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0xf94(r3)
lbl_fn_80559020_00001888:
    psq_l f31, 0x38(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8055936C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    beq lbl_fn_8055936C_000018DC
    cmpwi r5, 0x6
    beq lbl_fn_8055936C_000019C0
    b lbl_fn_8055936C_000019CC
lbl_fn_8055936C_000018DC:
    mr r3, r30
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r6, 0x10(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055936C_00001928
lbl_fn_8055936C_00001908:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_8055936C_00001920
    b lbl_fn_8055936C_0000192C
lbl_fn_8055936C_00001920:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055936C_00001908
lbl_fn_8055936C_00001928:
    li r5, 0x0
lbl_fn_8055936C_0000192C:
    mr r3, r5
    bl fn_8001296C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8055936C_000019CC
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x0
    bl fn_80538B1C
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    addi r4, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    lwz r0, 0x30(r30)
    cmpwi r0, 0x3
    ble lbl_fn_8055936C_00001980
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x18
    b lbl_fn_8055936C_00001984
lbl_fn_8055936C_00001980:
    li r3, 0x0
lbl_fn_8055936C_00001984:
    cmpwi r0, 0x4
    lfs f2, 0x4(r3)
    ble lbl_fn_8055936C_0000199C
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x20
    b lbl_fn_8055936C_000019A0
lbl_fn_8055936C_0000199C:
    li r3, 0x0
lbl_fn_8055936C_000019A0:
    lwz r5, 0x10(r30)
    addi r4, r1, 0x14
    lwz r0, 0x14(r30)
    lfs f1, 0x4(r3)
    mr r3, r31
    subf r5, r5, r0
    bl fn_80097750
    b lbl_fn_8055936C_000019CC
lbl_fn_8055936C_000019C0:
    mr r3, r30
    li r4, 0x0
    bl fn_80538FD8
lbl_fn_8055936C_000019CC:
    lwz r31, 0x2c(r1)
    li r3, 0x0
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805594A4(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    bl _savegpr_21
    lis r0, 0x4330
    mr r22, r4
    stw r0, 0x98(r1)
    mr r3, r22
    stw r0, 0xa0(r1)
    bl fn_805381CC
    mr r3, r22
    bl fn_805381A4
    mr r23, r3
    mr r3, r22
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r23)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805594A4_00001A70
lbl_fn_805594A4_00001A50:
    lwz r0, 0x164(r3)
    add r25, r0, r4
    lwz r0, 0x14(r25)
    cmpw r5, r0
    bne lbl_fn_805594A4_00001A68
    b lbl_fn_805594A4_00001A74
lbl_fn_805594A4_00001A68:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805594A4_00001A50
lbl_fn_805594A4_00001A70:
    li r25, 0x0
lbl_fn_805594A4_00001A74:
    lwz r26, 0x10(r22)
    mr r3, r25
    lwz r0, 0x14(r22)
    lwz r29, 0x18(r22)
    lwz r28, 0x1c(r22)
    subf r27, r26, r0
    bl fn_8001296C
    lwz r0, 0x30(r22)
    mr r23, r3
    lwz r24, 0x16c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_805594A4_00001AAC
    lwz r4, 0x2c(r22)
    b lbl_fn_805594A4_00001AB0
lbl_fn_805594A4_00001AAC:
    li r4, 0x0
lbl_fn_805594A4_00001AB0:
    lwz r4, 0x4(r4)
    bl fn_8009290C
    cmpwi r3, 0x0
    mr r31, r3
    blt lbl_fn_805594A4_00002048
    lwz r0, 0x30(r22)
    cmpwi r0, 0x1
    ble lbl_fn_805594A4_00001ADC
    lwz r4, 0x2c(r22)
    addi r4, r4, 0x8
    b lbl_fn_805594A4_00001AE0
lbl_fn_805594A4_00001ADC:
    li r4, 0x0
lbl_fn_805594A4_00001AE0:
    slwi r0, r3, 2
    lwz r21, 0x4(r4)
    add r30, r24, r0
    mr r3, r23
    lwz r4, 0x50(r30)
    mr r5, r21
    bl fn_80093D98
    cmpwi r21, 0x0
    beq lbl_fn_805594A4_00002048
    lwz r0, 0x30(r22)
    cmpwi r0, 0x2
    ble lbl_fn_805594A4_00001B1C
    lwz r3, 0x2c(r22)
    addi r3, r3, 0x10
    b lbl_fn_805594A4_00001B20
lbl_fn_805594A4_00001B1C:
    li r3, 0x0
lbl_fn_805594A4_00001B20:
    lfs f0, 0x4(r3)
    cmpwi r0, 0x3
    stfs f0, 0x94(r1)
    ble lbl_fn_805594A4_00001B3C
    lwz r3, 0x2c(r22)
    addi r3, r3, 0x18
    b lbl_fn_805594A4_00001B40
lbl_fn_805594A4_00001B3C:
    li r3, 0x0
lbl_fn_805594A4_00001B40:
    lfs f0, 0x4(r3)
    cmpwi r0, 0x4
    stfs f0, 0x88(r1)
    ble lbl_fn_805594A4_00001B5C
    lwz r3, 0x2c(r22)
    addi r3, r3, 0x20
    b lbl_fn_805594A4_00001B60
lbl_fn_805594A4_00001B5C:
    li r3, 0x0
lbl_fn_805594A4_00001B60:
    lfs f0, 0x4(r3)
    cmpwi r0, 0x5
    stfs f0, 0x8c(r1)
    ble lbl_fn_805594A4_00001B7C
    lwz r3, 0x2c(r22)
    addi r3, r3, 0x28
    b lbl_fn_805594A4_00001B80
lbl_fn_805594A4_00001B7C:
    li r3, 0x0
lbl_fn_805594A4_00001B80:
    lwz r0, 0x170(r25)
    slwi r24, r31, 4
    lfs f0, 0x4(r3)
    mr r3, r22
    add r4, r0, r24
    stfs f0, 0x90(r1)
    lfsx f3, r24, r0
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    stfs f3, 0x78(r1)
    stfs f2, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f0, 0x84(r1)
    bl fn_805381CC
    lfs f31, 0x198(r3)
    mr r3, r23
    lwz r4, 0x50(r30)
    bl fn_80094B6C
    lwz r0, 0x18(r3)
    lis r31, lbl_8075E858@ha
    stw r0, 0x10(r1)
    mr r3, r23
    lfd f5, lbl_8075E858@l(r31)
    lbz r4, 0x10(r1)
    stw r4, 0x9c(r1)
    lbz r0, 0x11(r1)
    lfd f0, 0x98(r1)
    stw r0, 0xa4(r1)
    fsubs f3, f0, f5
    lbz r4, 0x12(r1)
    lfd f0, 0xa0(r1)
    lbz r0, 0x13(r1)
    stw r4, 0x9c(r1)
    fsubs f2, f0, f5
    lfs f4, lbl_80887E68
    stw r0, 0xa4(r1)
    lfd f1, 0x98(r1)
    fdivs f3, f3, f4
    lfd f0, 0xa0(r1)
    stfs f3, 0x68(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x6c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x70(r1)
    fdivs f0, f0, f4
    stfs f0, 0x74(r1)
    lwz r4, 0x50(r30)
    bl fn_80094B6C
    lwz r0, 0x1c(r3)
    mr r3, r23
    stw r0, 0xc(r1)
    lfd f5, lbl_8075E858@l(r31)
    lbz r4, 0xc(r1)
    stw r4, 0x9c(r1)
    lbz r0, 0xd(r1)
    lfd f0, 0x98(r1)
    stw r0, 0xa4(r1)
    fsubs f3, f0, f5
    lbz r4, 0xe(r1)
    lfd f0, 0xa0(r1)
    lbz r0, 0xf(r1)
    stw r4, 0x9c(r1)
    fsubs f2, f0, f5
    lfs f4, lbl_80887E68
    stw r0, 0xa4(r1)
    lfd f1, 0x98(r1)
    fdivs f3, f3, f4
    lfd f0, 0xa0(r1)
    stfs f3, 0x58(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x5c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x60(r1)
    fdivs f0, f0, f4
    stfs f0, 0x64(r1)
    lwz r4, 0x50(r30)
    bl fn_80094B6C
    lwz r3, 0x20(r3)
    add r0, r26, r29
    stw r3, 0x8(r1)
    xoris r0, r0, 0x8000
    lfd f7, lbl_8075E858@l(r31)
    lis r26, lbl_8075E850@ha
    lbz r4, 0x8(r1)
    stw r4, 0x9c(r1)
    lbz r3, 0x9(r1)
    lfd f0, 0x98(r1)
    stw r3, 0xa4(r1)
    fsubs f1, f0, f7
    lbz r4, 0xa(r1)
    lfd f0, 0xa0(r1)
    lbz r3, 0xb(r1)
    stw r4, 0x9c(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80887E68
    lfd f3, 0x98(r1)
    stw r3, 0xa4(r1)
    fdivs f5, f1, f6
    lfd f1, lbl_8075E850@l(r26)
    lfd f2, 0xa0(r1)
    stw r0, 0x9c(r1)
    lfs f30, lbl_80887E34
    lfd f0, 0x98(r1)
    fsubs f3, f3, f7
    stfs f5, 0x48(r1)
    fsubs f2, f2, f7
    fdivs f4, f4, f6
    stfs f4, 0x4c(r1)
    fdivs f3, f3, f6
    stfs f3, 0x50(r1)
    fdivs f2, f2, f6
    stfs f2, 0x54(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_805594A4_00001E6C
    cmpwi r29, 0x1
    blt lbl_fn_805594A4_00001E6C
    lwz r21, 0x18(r22)
    mr r3, r22
    lwz r31, 0x10(r22)
    bl fn_805381CC
    add r0, r31, r21
    lfd f1, lbl_8075E850@l(r26)
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfs f2, 0x198(r3)
    lfd f0, 0xa0(r1)
    lwz r4, lbl_8087F540
    fsubs f0, f0, f1
    lfs f1, 0xb4(r4)
    fsubs f2, f0, f2
    fcmpo cr0, f2, f1
    bge lbl_fn_805594A4_00001DB0
    lfs f2, lbl_80887E30
lbl_fn_805594A4_00001DB0:
    lfs f0, lbl_80887E30
    fcmpo cr0, f2, f0
    ble lbl_fn_805594A4_00001DDC
    xoris r0, r29, 0x8000
    stw r0, 0x9c(r1)
    lis r3, lbl_8075E850@ha
    lfd f1, lbl_8075E850@l(r3)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    fsubs f30, f30, f0
lbl_fn_805594A4_00001DDC:
    fmr f1, f30
    lwz r3, lbl_8087F540
    lwz r4, 0x140(r25)
    bl fn_8048BD04
    lfs f0, lbl_80887E34
    fcmpu cr0, f0, f1
    bne lbl_fn_805594A4_00001E1C
    lfs f3, 0x94(r1)
    lfs f2, 0x88(r1)
    lfs f1, 0x8c(r1)
    lfs f0, 0x90(r1)
    stfs f3, 0x74(r1)
    stfs f2, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
    b lbl_fn_805594A4_00001E6C
lbl_fn_805594A4_00001E1C:
    lfs f2, 0x94(r1)
    lfs f7, 0x84(r1)
    lfs f0, 0x88(r1)
    fsubs f2, f2, f7
    lfs f6, 0x78(r1)
    lfs f3, 0x8c(r1)
    fsubs f5, f0, f6
    lfs f4, 0x7c(r1)
    fmadds f7, f1, f2, f7
    fsubs f3, f3, f4
    lfs f0, 0x90(r1)
    lfs f2, 0x80(r1)
    fmadds f5, f1, f5, f6
    stfs f7, 0x74(r1)
    fsubs f0, f0, f2
    fmadds f3, f1, f3, f4
    stfs f5, 0x68(r1)
    fmadds f0, f1, f0, f2
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
lbl_fn_805594A4_00001E6C:
    subf r0, r28, r27
    lis r3, lbl_8075E850@ha
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfd f1, lbl_8075E850@l(r3)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_805594A4_00002030
    cmpwi r28, 0x1
    blt lbl_fn_805594A4_00002030
    lwz r4, 0x30(r22)
    cmpwi r4, 0x6
    ble lbl_fn_805594A4_00001EB4
    lwz r3, 0x2c(r22)
    addi r3, r3, 0x30
    b lbl_fn_805594A4_00001EB8
lbl_fn_805594A4_00001EB4:
    li r3, 0x0
lbl_fn_805594A4_00001EB8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805594A4_00001EFC
    lwz r0, 0x170(r25)
    add r3, r0, r24
    lfsx f3, r24, r0
    lfs f2, 0x4(r3)
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
lbl_fn_805594A4_00001EFC:
    cmpwi r4, 0x7
    ble lbl_fn_805594A4_00001F10
    lwz r3, 0x2c(r22)
    addi r3, r3, 0x38
    b lbl_fn_805594A4_00001F14
lbl_fn_805594A4_00001F10:
    li r3, 0x0
lbl_fn_805594A4_00001F14:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805594A4_00001F58
    lwz r0, 0x158(r25)
    add r3, r0, r24
    lfsx f3, r24, r0
    lfs f2, 0x4(r3)
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
lbl_fn_805594A4_00001F58:
    xoris r0, r27, 0x8000
    stw r0, 0x9c(r1)
    lis r3, lbl_8075E850@ha
    lfd f11, lbl_8075E850@l(r3)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f11
    fcmpu cr0, f31, f0
    bne lbl_fn_805594A4_00001F9C
    lfs f3, 0x44(r1)
    lfs f2, 0x38(r1)
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f3, 0x74(r1)
    stfs f2, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
    b lbl_fn_805594A4_00002030
lbl_fn_805594A4_00001F9C:
    xoris r0, r28, 0x8000
    stw r0, 0xa4(r1)
    lfs f2, 0x44(r1)
    lfd f0, 0xa0(r1)
    lfs f10, 0x74(r1)
    stw r0, 0x9c(r1)
    fsubs f1, f0, f11
    fsubs f2, f2, f10
    lfs f7, 0x38(r1)
    lfd f0, 0x98(r1)
    stw r0, 0xa4(r1)
    fdivs f9, f2, f1
    lfs f8, 0x68(r1)
    lfd f3, 0xa0(r1)
    stw r0, 0x9c(r1)
    lfs f4, 0x3c(r1)
    lfs f5, 0x6c(r1)
    fsubs f6, f0, f11
    lfd f0, 0x98(r1)
    fsubs f7, f7, f8
    lfs f1, 0x40(r1)
    lfs f2, 0x70(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f11
    fadds f9, f10, f9
    fsubs f1, f1, f2
    fsubs f0, f0, f11
    stfs f9, 0x74(r1)
    fdivs f3, f4, f3
    fdivs f6, f7, f6
    fdivs f0, f1, f0
    fadds f4, f8, f6
    fadds f3, f5, f3
    fadds f0, f2, f0
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
lbl_fn_805594A4_00002030:
    lwz r4, 0x50(r30)
    mr r3, r23
    addi r5, r1, 0x68
    addi r6, r1, 0x48
    addi r7, r1, 0x58
    bl fn_80094958
lbl_fn_805594A4_00002048:
    psq_l f31, 0xf8(r1), 0, 0
    li r3, 0x0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    addi r11, r1, 0xe0
    bl _restgpr_21
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}
