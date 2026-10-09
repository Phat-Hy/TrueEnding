#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8005BFCC(void);
extern void fn_8005C1F8(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800DC12C(void);
extern void fn_80204958(void);
extern void fn_80204E54(void);
extern void fn_802085B4(void);
extern void fn_80208BE0(void);
extern void fn_80209300(void);
extern void fn_80209960(void);
extern void fn_8020A90C(void);
extern void fn_8020AFF4(void);
extern void fn_8020B2BC(void);
extern void fn_8020BB0C(void);
extern void fn_8020C028(void);
extern void fn_8020D688(void);
extern void fn_8020DB58(void);
extern void fn_8020DF88(void);
extern void fn_8020F130(void);
extern void fn_8020F248(void);
extern void fn_8020F84C(void);
extern void fn_8020FDEC(void);
extern void fn_80210244(void);
extern void fn_80210ACC(void);
extern void fn_802130BC(void);
extern void fn_8021414C(void);
extern void fn_802144A8(void);
extern void fn_802150F0(void);
extern void fn_80216CD0(void);
extern void fn_80217778(void);
extern void fn_802179FC(void);
extern void fn_80217E18(void);
extern void fn_802189EC(void);
extern void fn_80218BD4(void);
extern void fn_802196D0(void);
extern void fn_8021996C(void);
extern void fn_8021AAB8(void);
extern void fn_8021B060(void);
extern void fn_8021B2F8(void);
extern void fn_8021C3F4(void);
extern void fn_8021CCC4(void);
extern void fn_8021CF8C(void);
extern void fn_8021DBEC(void);
extern void fn_8021E0B0(void);
extern void fn_8021EB04(void);
extern void fn_8021ED08(void);
extern void fn_8021F100(void);
extern void fn_8021F47C(void);
extern void fn_80370174(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_80680770(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073E938[];
extern u8 lbl_8073E9DC[];
extern u8 lbl_8073EA48[];
extern u8 lbl_8073EA68[];
extern u8 lbl_8073EA88[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_80782FB0[];
extern u8 lbl_80782FD0[];

/* Small data declarations */
extern u32 lbl_8087D6E8;
extern u32 lbl_8087D6EC;
extern u32 lbl_8087D708;
extern u32 lbl_8087D720;
extern u32 lbl_8087DB20;
extern u32 lbl_8087F160;
extern u32 lbl_8087F164;
extern u32 lbl_8087F168;
extern u32 lbl_8087F16C;
extern u32 lbl_8087F170;
extern u32 lbl_8087F178;
extern u32 lbl_8087F17C;
extern u32 lbl_8087F180;
extern u32 lbl_8087F184;
extern u32 lbl_8087F188;
extern u32 lbl_8087F18C;
extern u32 lbl_8087F190;
extern u32 lbl_8087F194;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F518;
extern u32 lbl_80882D48;
extern u32 lbl_80882D5C;
extern u32 lbl_80882D60;
extern u32 lbl_80882D68;
extern u32 lbl_80882D70;
extern u32 lbl_80882D78;
extern u32 lbl_80882D80;

/* Function declarations */
void fn_8020685C(void);
void fn_8020689C(void);
void fn_80206B14(void);
void fn_80206B68(void);
void fn_80206B70(void);
void fn_80206B9C(void);
void fn_80206BE4(void);
void fn_80206C50(void);
void fn_80206D18(void);
void fn_80206F44(void);
void fn_80207250(void);
void fn_8020726C(void);
void fn_802072AC(void);
void fn_80207310(void);
void fn_802077F8(void);
void fn_80207808(void);
void fn_8020787C(void);
void fn_802078C4(void);
void fn_80207BEC(void);
void fn_80207C00(void);
void fn_80207C08(void);
void fn_80207C34(void);
void fn_80207CC0(void);
void fn_80207EE8(void);
void fn_80207F34(void);
void fn_80207F80(void);
void fn_8020805C(void);
void fn_80208144(void);

asm void fn_8020685C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8020685C_00000028
    cmpwi r4, 0x0
    ble lbl_fn_8020685C_00000028
    bl dtor_80084684
lbl_fn_8020685C_00000028:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020689C(void)
{
    nofralloc
    stwu r1, -0xc80(r1)
    mflr r0
    stw r0, 0xc84(r1)
    stmw r27, 0xc6c(r1)
    lwz r0, lbl_8087F160
    cmpwi r0, 0x0
    beq lbl_fn_8020689C_000002A4
    li r30, 0x0
    stw r30, 0x8(r1)
    lwz r3, lbl_80882D48
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8006BA8C
    lwz r0, 0x8(r1)
    lis r4, lbl_8077A090@ha
    addi r4, r4, lbl_8077A090@l
    stw r4, 0xc(r1)
    mr r31, r3
    srwi r28, r0, 1
    stw r30, 0x10(r1)
    addi r29, r1, 0xc
    addi r3, r1, 0x1c
    li r4, 0x0
    stw r30, 0x14(r1)
    li r5, 0x800
    stw r30, 0x18(r1)
    stw r30, 0xc5c(r1)
    bl memset
    addi r3, r1, 0xc1c
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r28, 0x0
    mr r5, r28
    beq lbl_fn_8020689C_000000D0
    subi r5, r28, 0x1
lbl_fn_8020689C_000000D0:
    cmpwi r28, 0x0
    mr r3, r29
    beq lbl_fn_8020689C_000000E4
    addi r4, r31, 0x2
    b lbl_fn_8020689C_000000E8
lbl_fn_8020689C_000000E4:
    mr r4, r31
lbl_fn_8020689C_000000E8:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0xc(r1)
    mr r3, r29
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    li r28, 0x0
    b lbl_fn_8020689C_00000168
lbl_fn_8020689C_0000011C:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8020689C_00000168
    cmplwi r0, 0x23
    beq lbl_fn_8020689C_00000168
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r4, r3, r28
    addi r3, r1, 0xc
    addi r28, r4, 0x1
    bl fn_8005B710
    addi r3, r1, 0xc
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r28
    addi r28, r3, 0x1
lbl_fn_8020689C_00000168:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020689C_0000011C
    lis r5, lbl_8073E938@ha
    slwi r3, r28, 1
    addi r5, r5, lbl_8073E938@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F164
    addi r3, r1, 0x1c
    li r30, 0x0
    li r4, 0x0
    li r5, 0x800
    bl memset
    addi r3, r1, 0xc1c
    li r4, 0x0
    li r5, 0x40
    bl memset
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r4, 0x10(r1)
    lwz r12, 0x8(r12)
    lwz r5, 0x14(r1)
    mtctr r12
    bctrl
    li r28, 0x0
    b lbl_fn_8020689C_00000288
lbl_fn_8020689C_000001E0:
    addi r3, r1, 0xc
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8020689C_00000288
    cmplwi r0, 0x23
    beq lbl_fn_8020689C_00000288
    lwz r0, lbl_8087F160
    slwi r29, r30, 1
    addi r3, r1, 0xc
    add r27, r0, r28
    bl fn_8005B710
    lwz r0, lbl_8087F164
    mr r4, r3
    add r3, r0, r29
    bl fn_80686A64
    lwz r0, lbl_8087F164
    add r0, r0, r29
    stw r0, 0x84(r27)
    lwz r0, lbl_8087F164
    add r3, r0, r29
    bl fn_80686A48
    add r4, r3, r30
    addi r3, r1, 0xc
    addi r30, r4, 0x1
    bl fn_8005B710
    slwi r29, r30, 1
    addi r3, r1, 0xc
    bl fn_8005B710
    lwz r0, lbl_8087F164
    mr r4, r3
    add r3, r0, r29
    bl fn_80686A64
    lwz r0, lbl_8087F164
    add r0, r0, r29
    stw r0, 0x88(r27)
    lwz r0, lbl_8087F164
    add r3, r0, r29
    bl fn_80686A48
    add r3, r3, r30
    addi r28, r28, 0x130
    addi r30, r3, 0x1
lbl_fn_8020689C_00000288:
    addi r3, r1, 0xc
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020689C_000001E0
    mr r3, r31
    li r4, 0x0
    bl fn_8006BB6C
lbl_fn_8020689C_000002A4:
    lmw r27, 0xc6c(r1)
    lwz r0, 0xc84(r1)
    mtlr r0
    addi r1, r1, 0xc80
    blr
}

asm void fn_80206B14(void)
{
    nofralloc
    lwz r6, lbl_8087F160
    li r7, 0x0
    lwz r0, lbl_8087F168
    mr r5, r6
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80206B14_00000304
lbl_fn_80206B14_000002D4:
    lwz r0, 0x78(r5)
    cmpw r3, r0
    bne lbl_fn_80206B14_000002F8
    lwz r0, 0x80(r5)
    cmpw r4, r0
    bne lbl_fn_80206B14_000002F8
    mulli r0, r7, 0x130
    add r3, r6, r0
    blr
lbl_fn_80206B14_000002F8:
    addi r5, r5, 0x130
    addi r7, r7, 0x1
    bdnz lbl_fn_80206B14_000002D4
lbl_fn_80206B14_00000304:
    li r3, 0x0
    blr
}

asm void fn_80206B68(void)
{
    nofralloc
    lwz r3, lbl_8087F168
    blr
}

asm void fn_80206B70(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_80206B70_00000328
    lwz r0, lbl_8087F168
    cmpw r3, r0
    blt lbl_fn_80206B70_00000330
lbl_fn_80206B70_00000328:
    li r3, 0x0
    blr
lbl_fn_80206B70_00000330:
    mulli r0, r3, 0x130
    lwz r3, lbl_8087F160
    add r3, r3, r0
    blr
}

asm void fn_80206B9C(void)
{
    nofralloc
    lis r5, 0x14f9
    lis r4, 0x6666
    subi r0, r5, 0x4a77
    mulhw r3, r0, r3
    addi r0, r4, 0x6667
    srawi r3, r3, 13
    srwi r4, r3, 31
    add r4, r3, r4
    mulhw r0, r0, r4
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xa
    subf r3, r0, r4
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80206BE4(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_80206BE4_00000398
    li r3, 0x0
    blr
lbl_fn_80206BE4_00000398:
    lis r4, 0x1062
    lwz r8, 0x80(r3)
    addi r0, r4, 0x4dd3
    lis r5, 0x2
    mulhw r4, r0, r8
    lwz r7, 0x78(r3)
    lis r3, 0xf
    subi r9, r5, 0x7960
    addi r0, r3, 0x4240
    srawi r5, r4, 6
    srawi r3, r4, 6
    srwi r6, r5, 31
    srwi r4, r3, 31
    add r5, r5, r6
    add r3, r3, r4
    mulli r6, r7, 0x3e8
    mulli r4, r5, 0x3e8
    add r9, r9, r6
    subf r4, r4, r8
    mullw r0, r3, r0
    add r9, r9, r4
    add r3, r9, r0
    blr
}

asm void fn_80206C50(void)
{
    nofralloc
    subis r4, r3, 0x2
    lis r3, 0x1062
    addi r8, r4, 0x7960
    lwz r12, lbl_8087F168
    addi r0, r3, 0x4dd3
    lis r4, 0x6666
    mulhw r7, r0, r8
    lis r3, 0x431c
    lwz r0, lbl_8087F160
    addi r4, r4, 0x6667
    subi r3, r3, 0x217d
    mr r11, r0
    srawi r5, r7, 6
    li r10, 0x0
    srwi r6, r5, 31
    add r9, r5, r6
    mulhw r4, r4, r9
    srawi r6, r4, 2
    srawi r4, r7, 6
    mulhw r3, r3, r8
    srwi r7, r6, 31
    srwi r5, r4, 31
    add r6, r6, r7
    add r5, r4, r5
    srawi r3, r3, 18
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r5, r5, 0x3e8
    mulli r6, r6, 0xa
    subf r4, r5, r8
    mulli r3, r3, 0x3e8
    subf r5, r6, r9
    add r4, r4, r3
    mtctr r12
    cmplwi r12, 0x0
    ble lbl_fn_80206C50_000004B4
lbl_fn_80206C50_00000484:
    lwz r3, 0x78(r11)
    cmpw r5, r3
    bne lbl_fn_80206C50_000004A8
    lwz r3, 0x80(r11)
    cmpw r4, r3
    bne lbl_fn_80206C50_000004A8
    mulli r3, r10, 0x130
    add r3, r0, r3
    blr
lbl_fn_80206C50_000004A8:
    addi r11, r11, 0x130
    addi r10, r10, 0x1
    bdnz lbl_fn_80206C50_00000484
lbl_fn_80206C50_000004B4:
    li r3, 0x0
    blr
}

asm void fn_80206D18(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bne lbl_fn_80206D18_000004DC
    li r3, 0x0
    b lbl_fn_80206D18_000006D4
lbl_fn_80206D18_000004DC:
    cmpwi r4, 0x0
    li r31, 0x0
    beq lbl_fn_80206D18_0000051C
    cmpwi r4, 0x3
    beq lbl_fn_80206D18_000005D4
    cmpwi r4, 0x2
    beq lbl_fn_80206D18_000005F8
    cmpwi r4, 0x6
    beq lbl_fn_80206D18_00000624
    cmpwi r4, 0x1
    beq lbl_fn_80206D18_00000650
    cmpwi r4, 0x5
    beq lbl_fn_80206D18_0000067C
    cmpwi r4, 0x4
    beq lbl_fn_80206D18_000006A8
    b lbl_fn_80206D18_000006D0
lbl_fn_80206D18_0000051C:
    lwz r0, 0xbc(r3)
    andi. r0, r0, 0x8001
    beq lbl_fn_80206D18_000006D0
    cmpwi r5, 0x0
    bne lbl_fn_80206D18_000005C0
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80206D18_00000540
    li r31, 0x1
lbl_fn_80206D18_00000540:
    lwz r3, lbl_8087F4F0
    slwi r0, r5, 3
    lwz r5, lbl_8087F168
    addis r3, r3, 0x1
    lwz r4, lbl_8087F160
    add r3, r3, r0
    lwz r3, -0x7d50(r3)
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_80206D18_00000588
lbl_fn_80206D18_00000568:
    lwz r0, 0x78(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80206D18_00000580
    lwz r0, 0x80(r4)
    cmpw r3, r0
    beq lbl_fn_80206D18_00000588
lbl_fn_80206D18_00000580:
    addi r4, r4, 0x130
    bdnz lbl_fn_80206D18_00000568
lbl_fn_80206D18_00000588:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80206D18_000006D0
    li r4, 0x395
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80206D18_000006D0
    lwz r3, lbl_8087F430
    li r4, 0x396
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80206D18_000006D0
    li r31, 0x0
    b lbl_fn_80206D18_000006D0
lbl_fn_80206D18_000005C0:
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80206D18_000006D0
    li r31, 0x1
    b lbl_fn_80206D18_000006D0
lbl_fn_80206D18_000005D4:
    lwz r4, 0xbc(r3)
    rlwinm r0, r4, 0, 12, 12
    rlwimi. r0, r4, 0, 27, 27
    beq lbl_fn_80206D18_000006D0
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80206D18_000006D0
    li r31, 0x1
    b lbl_fn_80206D18_000006D0
lbl_fn_80206D18_000005F8:
    lwz r4, 0xbc(r3)
    rlwinm r0, r4, 0, 13, 13
    rlwimi. r0, r4, 0, 31, 31
    beq lbl_fn_80206D18_000006D0
    cmpwi r5, 0x0
    bne lbl_fn_80206D18_000006D0
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80206D18_000006D0
    li r31, 0x1
    b lbl_fn_80206D18_000006D0
lbl_fn_80206D18_00000624:
    lwz r4, 0xbc(r3)
    rlwinm r0, r4, 0, 10, 10
    rlwimi. r0, r4, 0, 28, 28
    beq lbl_fn_80206D18_000006D0
    cmpwi r5, 0x0
    bne lbl_fn_80206D18_000006D0
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80206D18_000006D0
    li r31, 0x1
    b lbl_fn_80206D18_000006D0
lbl_fn_80206D18_00000650:
    lwz r4, 0xbc(r3)
    rlwinm r0, r4, 0, 14, 14
    rlwimi. r0, r4, 0, 30, 30
    beq lbl_fn_80206D18_000006D0
    cmpwi r5, 0x0
    bne lbl_fn_80206D18_000006D0
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80206D18_000006D0
    li r31, 0x1
    b lbl_fn_80206D18_000006D0
lbl_fn_80206D18_0000067C:
    lwz r4, 0xbc(r3)
    rlwinm r0, r4, 0, 11, 11
    rlwimi. r0, r4, 0, 29, 29
    beq lbl_fn_80206D18_000006D0
    cmpwi r5, 0x0
    bne lbl_fn_80206D18_000006D0
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80206D18_000006D0
    li r31, 0x1
    b lbl_fn_80206D18_000006D0
lbl_fn_80206D18_000006A8:
    lwz r4, 0xbc(r3)
    rlwinm r0, r4, 0, 15, 15
    rlwimi. r0, r4, 0, 30, 30
    beq lbl_fn_80206D18_000006D0
    cmpwi r5, 0x0
    bne lbl_fn_80206D18_000006D0
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80206D18_000006D0
    li r31, 0x1
lbl_fn_80206D18_000006D0:
    mr r3, r31
lbl_fn_80206D18_000006D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80206F44(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    stw r0, 0x694(r1)
    stmw r23, 0x66c(r1)
    lwz r0, lbl_8087F16C
    cmpwi r0, 0x0
    bne lbl_fn_80206F44_000009E0
    li r24, 0x0
    stw r24, 0x8(r1)
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882D5C
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    mr r29, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x30(r1)
    lwz r25, 0x8(r1)
    addi r3, r1, 0x40
    stw r24, 0x34(r1)
    li r4, 0x0
    li r5, 0x400
    stw r24, 0x38(r1)
    stw r24, 0x3c(r1)
    stw r24, 0x660(r1)
    bl memset
    addi r3, r1, 0x640
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x30(r1)
    mr r4, r29
    mr r5, r25
    addi r3, r1, 0x30
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x30
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x30(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    li r23, 0x0
    b lbl_fn_80206F44_000007F0
lbl_fn_80206F44_000007A0:
    addi r3, r1, 0x30
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80206F44_000007F0
    addi r3, r1, 0x30
    bl fn_8005B3CC
    addi r3, r1, 0x30
    bl fn_8005B3CC
    addi r3, r1, 0x30
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_80206F44_000007F0
    addi r3, r1, 0x30
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_80206F44_000007F0
    addi r23, r23, 0x1
lbl_fn_80206F44_000007F0:
    addi r3, r1, 0x30
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80206F44_000007A0
    lis r24, lbl_8073E938@ha
    slwi r3, r23, 5
    addi r5, r24, lbl_8073E938@l
    li r4, 0x3
    mr r6, r5
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80207250@ha
    lis r5, fn_8020726C@ha
    mr r7, r23
    li r6, 0x20
    addi r4, r4, fn_80207250@l
    addi r5, r5, fn_8020726C@l
    bl fn_80695720
    stw r3, lbl_8087F16C
    mr r4, r29
    lwz r12, 0x30(r1)
    addi r3, r1, 0x30
    stw r23, lbl_8087F170
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r26, r24, lbl_8073E938@l
    addi r31, r1, 0x20
    li r30, 0x0
    li r24, -0x1
    li r25, 0x0
    li r28, 0x2
    li r27, 0x1
    b lbl_fn_80206F44_000009C4
lbl_fn_80206F44_00000880:
    addi r3, r1, 0x30
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80206F44_000009C4
    stw r24, 0x10(r1)
    addi r3, r1, 0x30
    stw r25, 0x14(r1)
    stw r25, 0x18(r1)
    stb r25, 0x20(r1)
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_80206F44_00000914
    bl strlen
    cmplwi r3, 0x2
    ble lbl_fn_80206F44_00000914
    mr r3, r23
    addi r4, r26, 0x1
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80206F44_000008E4
    stw r25, 0x10(r1)
    b lbl_fn_80206F44_00000908
lbl_fn_80206F44_000008E4:
    mr r3, r23
    addi r4, r26, 0x4
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80206F44_00000904
    stw r27, 0x10(r1)
    b lbl_fn_80206F44_00000908
lbl_fn_80206F44_00000904:
    stw r28, 0x10(r1)
lbl_fn_80206F44_00000908:
    addi r3, r23, 0x2
    bl fn_80684600
    stw r3, 0x14(r1)
lbl_fn_80206F44_00000914:
    addi r3, r1, 0x30
    bl fn_8005B3CC
    addi r3, r1, 0x30
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    stw r3, 0x18(r1)
    ble lbl_fn_80206F44_000009C4
    addi r3, r1, 0x30
    bl fn_8005B3CC
    cmplw r3, r31
    mr r23, r3
    beq lbl_fn_80206F44_00000960
    bl strlen
    mr r5, r3
    mr r3, r31
    mr r4, r23
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80206F44_00000960:
    addi r3, r1, 0x20
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80206F44_000009C4
    lwz r3, lbl_8087F16C
    lwz r0, 0x10(r1)
    add r23, r3, r30
    stwx r0, r3, r30
    addi r0, r23, 0x10
    cmplw r31, r0
    lwz r0, 0x14(r1)
    stw r0, 0x4(r23)
    lwz r0, 0x18(r1)
    stw r0, 0x8(r23)
    lwz r0, 0x1c(r1)
    stw r0, 0xc(r23)
    beq lbl_fn_80206F44_000009C0
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r23, 0x10
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80206F44_000009C0:
    addi r30, r30, 0x20
lbl_fn_80206F44_000009C4:
    addi r3, r1, 0x30
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80206F44_00000880
    lwz r3, lbl_8087F518
    mr r4, r29
    bl fn_8046DD20
lbl_fn_80206F44_000009E0:
    lmw r23, 0x66c(r1)
    lwz r0, 0x694(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}

asm void fn_80207250(void)
{
    nofralloc
    li r0, 0x0
    li r4, -0x1
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stb r0, 0x10(r3)
    blr
}

asm void fn_8020726C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8020726C_00000A38
    cmpwi r4, 0x0
    ble lbl_fn_8020726C_00000A38
    bl dtor_80084684
lbl_fn_8020726C_00000A38:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802072AC(void)
{
    nofralloc
    lis r5, 0x1062
    lwz r7, lbl_8087F170
    addi r0, r5, 0x4dd3
    lwz r6, lbl_8087F16C
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    subf r4, r0, r4
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_802072AC_00000AAC
lbl_fn_802072AC_00000A84:
    lwz r0, 0x0(r6)
    cmpw r0, r3
    bne lbl_fn_802072AC_00000AA4
    lwz r0, 0x4(r6)
    cmpw r0, r4
    bne lbl_fn_802072AC_00000AA4
    mr r3, r6
    blr
lbl_fn_802072AC_00000AA4:
    addi r6, r6, 0x20
    bdnz lbl_fn_802072AC_00000A84
lbl_fn_802072AC_00000AAC:
    li r3, 0x0
    blr
}

asm void fn_80207310(void)
{
    nofralloc
    stwu r1, -0x6c0(r1)
    mflr r0
    stw r0, 0x6c4(r1)
    stmw r15, 0x67c(r1)
    lwz r0, lbl_8087F178
    cmpwi r0, 0x0
    bne lbl_fn_80207310_00000F88
    lwz r3, lbl_8087F518
    addi r5, r1, 0x14
    lwz r4, lbl_80882D60
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x38(r1)
    mr r29, r3
    lwz r15, 0x14(r1)
    stw r0, 0x3c(r1)
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x668(r1)
    bl memset
    addi r3, r1, 0x648
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x38(r1)
    mr r4, r29
    mr r5, r15
    addi r3, r1, 0x38
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x38
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x38(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    b lbl_fn_80207310_00000B8C
lbl_fn_80207310_00000B64:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_80207310_00000B8C
    cmpwi r0, 0x3b
    beq lbl_fn_80207310_00000B8C
    lwz r3, lbl_8087F17C
    addi r0, r3, 0x1
    stw r0, lbl_8087F17C
lbl_fn_80207310_00000B8C:
    addi r3, r1, 0x38
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80207310_00000B64
    lwz r16, lbl_8087F17C
    lis r15, lbl_8073E9DC@ha
    addi r5, r15, lbl_8073E9DC@l
    li r4, 0x3
    mulli r3, r16, 0xc
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_802077F8@ha
    lis r5, fn_80207808@ha
    mr r7, r16
    li r6, 0xc
    addi r4, r4, fn_802077F8@l
    addi r5, r5, fn_80207808@l
    bl fn_80695720
    stw r3, lbl_8087F178
    mr r4, r29
    lwz r12, 0x38(r1)
    addi r3, r1, 0x38
    lwz r5, 0x14(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, __files@ha
    addi r19, r15, lbl_8073E9DC@l
    addi r20, r3, __files@l
    addi r21, r1, 0x20
    addi r16, r1, 0x24
    addi r31, r1, 0x18
    li r30, 0x0
    li r27, 0x0
    lis r24, 0xcccd
    lis r18, 0x4000
    lis r23, 0x1555
    lis r25, 0x2aab
    lis r26, lbl_80775A88@ha
    b lbl_fn_80207310_00000F6C
lbl_fn_80207310_00000C34:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_80207310_00000F6C
    cmpwi r0, 0x3b
    beq lbl_fn_80207310_00000F6C
    lwz r0, lbl_8087F178
    add r28, r0, r30
    bl fn_800DC12C
    stw r3, 0x0(r28)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    stw r27, 0x18(r1)
    stw r27, 0x1c(r1)
    stw r27, 0x20(r1)
lbl_fn_80207310_00000C74:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_80207310_00000EC8
    bl fn_80684600
    lwz r5, 0x1c(r1)
    mr r17, r3
    lwz r4, 0x20(r1)
    cmplw r5, r4
    bge lbl_fn_80207310_00000CBC
    addi r5, r5, 0x1
    lwz r4, 0x18(r1)
    slwi r0, r5, 2
    stw r5, 0x1c(r1)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_80207310_00000C74
lbl_fn_80207310_00000CBC:
    subi r0, r18, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80207310_00000CE0
    addi r4, r19, 0x1
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80207310_00000CE0:
    lwz r3, 0x1c(r1)
    subi r0, r18, 0x1
    lwz r22, 0x20(r1)
    addi r3, r3, 0x1
    stw r27, 0x24(r1)
    subf r3, r22, r3
    subf r0, r22, r0
    cmplw r3, r0
    stw r27, 0x28(r1)
    stw r27, 0x2c(r1)
    stw r21, 0x30(r1)
    stw r27, 0x34(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_80207310_00000D2C
    addi r4, r19, 0x1
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80207310_00000D2C:
    addi r0, r23, 0x5555
    cmplw r22, r0
    bge lbl_fn_80207310_00000D74
    addi r4, r22, 0x1
    subi r5, r24, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80207310_00000D68
    addi r3, r1, 0x8
lbl_fn_80207310_00000D68:
    lwz r0, 0x0(r3)
    add r15, r22, r0
    b lbl_fn_80207310_00000DB0
lbl_fn_80207310_00000D74:
    subi r0, r25, 0x5556
    cmplw r22, r0
    bge lbl_fn_80207310_00000DAC
    addi r3, r22, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80207310_00000DA0
    addi r3, r1, 0x8
lbl_fn_80207310_00000DA0:
    lwz r0, 0x0(r3)
    add r15, r22, r0
    b lbl_fn_80207310_00000DB0
lbl_fn_80207310_00000DAC:
    subi r15, r18, 0x1
lbl_fn_80207310_00000DB0:
    subi r0, r18, 0x1
    cmplw r15, r0
    ble lbl_fn_80207310_00000DD0
    addi r4, r19, 0x1
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80207310_00000DD0:
    slwi r3, r15, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r22, r3
    bne lbl_fn_80207310_00000DF8
    addi r3, r20, 0xa0
    addi r4, r26, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80207310_00000DF8:
    lwz r5, 0x1c(r1)
    lwz r0, 0x28(r1)
    slwi r4, r5, 2
    stw r22, 0x24(r1)
    slwi r3, r0, 2
    stw r15, 0x2c(r1)
    add r0, r22, r4
    stw r5, 0x34(r1)
    stwx r17, r3, r0
    lwz r0, 0x1c(r1)
    lwz r4, 0x28(r1)
    lwz r22, 0x18(r1)
    slwi r0, r0, 2
    addi r5, r4, 0x1
    stw r5, 0x28(r1)
    add r3, r22, r0
    lwz r0, 0x34(r1)
    subf r3, r22, r3
    srawi r4, r3, 2
    lwz r3, 0x24(r1)
    addze r17, r4
    subf r0, r17, r0
    stw r0, 0x34(r1)
    slwi r15, r17, 2
    mr r4, r22
    slwi r0, r0, 2
    mr r5, r15
    add r3, r3, r0
    bl memcpy
    mr r3, r22
    mr r5, r15
    li r4, 0x0
    bl memset
    lwz r0, 0x28(r1)
    cmpwi r16, 0x0
    lwz r6, 0x20(r1)
    lwz r4, 0x2c(r1)
    add r5, r0, r17
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    stw r4, 0x20(r1)
    stw r6, 0x2c(r1)
    stw r0, 0x18(r1)
    stw r3, 0x24(r1)
    stw r5, 0x1c(r1)
    stw r27, 0x28(r1)
    beq lbl_fn_80207310_00000C74
    cmpwi r3, 0x0
    beq lbl_fn_80207310_00000C74
    stw r27, 0x28(r1)
    bl dtor_80084684
    b lbl_fn_80207310_00000C74
lbl_fn_80207310_00000EC8:
    lwz r3, 0x8(r28)
    lwz r15, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80207310_00000EDC
    bl fn_80084C24
lbl_fn_80207310_00000EDC:
    cmpwi r15, 0x0
    stw r15, 0x4(r28)
    beq lbl_fn_80207310_00000F08
    slwi r3, r15, 2
    li r4, 0x1
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x8(r28)
    b lbl_fn_80207310_00000F0C
lbl_fn_80207310_00000F08:
    stw r27, 0x8(r28)
lbl_fn_80207310_00000F0C:
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_80207310_00000F30
lbl_fn_80207310_00000F18:
    lwz r4, 0x18(r1)
    addi r6, r6, 0x1
    lwz r3, 0x8(r28)
    lwzx r0, r4, r5
    stwx r0, r3, r5
    addi r5, r5, 0x4
lbl_fn_80207310_00000F30:
    lwz r0, 0x1c(r1)
    cmplw r6, r0
    blt lbl_fn_80207310_00000F18
    cmpwi r31, 0x0
    addi r30, r30, 0xc
    beq lbl_fn_80207310_00000F6C
    beq lbl_fn_80207310_00000F6C
    beq lbl_fn_80207310_00000F6C
    lwz r3, 0x18(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80207310_00000F6C
    lwz r0, 0x1c(r1)
    subf r0, r0, r0
    stw r0, 0x1c(r1)
    bl dtor_80084684
lbl_fn_80207310_00000F6C:
    addi r3, r1, 0x38
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80207310_00000C34
    lwz r3, lbl_8087F518
    mr r4, r29
    bl fn_8046DD20
lbl_fn_80207310_00000F88:
    lmw r15, 0x67c(r1)
    lwz r0, 0x6c4(r1)
    mtlr r0
    addi r1, r1, 0x6c0
    blr
}

asm void fn_802077F8(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80207808(void)
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
    beq lbl_fn_80207808_00001004
    addic. r0, r3, 0x4
    beq lbl_fn_80207808_00000FF4
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80207808_00000FE8
    bl fn_80084C24
lbl_fn_80207808_00000FE8:
    li r0, 0x0
    stw r0, 0x8(r30)
    stw r0, 0x4(r30)
lbl_fn_80207808_00000FF4:
    cmpwi r31, 0x0
    ble lbl_fn_80207808_00001004
    mr r3, r30
    bl dtor_80084684
lbl_fn_80207808_00001004:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020787C(void)
{
    nofralloc
    lwz r5, lbl_8087F178
    li r6, 0x0
    lwz r0, lbl_8087F17C
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8020787C_00001060
lbl_fn_8020787C_0000103C:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_8020787C_00001054
    mulli r0, r6, 0xc
    add r3, r5, r0
    blr
lbl_fn_8020787C_00001054:
    addi r4, r4, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_8020787C_0000103C
lbl_fn_8020787C_00001060:
    li r3, 0x0
    blr
}

asm void fn_802078C4(void)
{
    nofralloc
    stwu r1, -0xca0(r1)
    mflr r0
    lwz r4, lbl_80882D68
    li r6, 0x20
    stw r0, 0xca4(r1)
    addi r5, r1, 0x8
    stmw r24, 0xc80(r1)
    li r29, 0x0
    stw r29, 0x8(r1)
    lwz r3, lbl_8087F518
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    mr r25, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x640(r1)
    lwz r30, 0x8(r1)
    addi r3, r1, 0x650
    stw r29, 0x644(r1)
    li r4, 0x0
    li r5, 0x400
    stw r29, 0x648(r1)
    stw r29, 0x64c(r1)
    stw r29, 0xc70(r1)
    bl memset
    addi r3, r1, 0xc50
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x640(r1)
    mr r4, r25
    mr r5, r30
    addi r3, r1, 0x640
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x640
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x640(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    li r26, 0x0
    b lbl_fn_802078C4_00001134
lbl_fn_802078C4_00001114:
    addi r3, r1, 0x640
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_802078C4_00001134
    cmpwi r0, 0x3b
    beq lbl_fn_802078C4_00001134
    addi r26, r26, 0x1
lbl_fn_802078C4_00001134:
    addi r3, r1, 0x640
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802078C4_00001114
    lis r5, lbl_8073EA48@ha
    li r4, 0x1
    addi r5, r5, lbl_8073EA48@l
    li r7, 0x0
    mulli r3, r26, 0x12c
    mr r6, r5
    bl fn_800846FC
    stw r3, lbl_8087F180
    mr r4, r25
    lwz r12, 0x640(r1)
    addi r3, r1, 0x640
    stw r26, lbl_8087F184
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r29, lbl_80782FD0@ha
    lis r31, lbl_80782FB0@ha
    addi r29, r29, lbl_80782FD0@l
    li r27, 0x0
    addi r31, r31, lbl_80782FB0@l
    li r30, 0x0
    b lbl_fn_802078C4_00001360
lbl_fn_802078C4_000011A0:
    addi r3, r1, 0x640
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_802078C4_00001360
    cmpwi r0, 0x3b
    beq lbl_fn_802078C4_00001360
    lwz r0, lbl_8087F180
    add r24, r0, r27
    bl fn_80684600
    stw r3, 0x0(r24)
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r24, 0x4
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r24, 0x24
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r24, 0x44
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r24, 0x64
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r24, 0x84
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r24, 0xa4
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r24, 0xc4
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r24, 0xe4
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r24, 0x104
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x640
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x124(r24)
    addi r3, r24, 0x128
    li r4, 0x0
    li r5, 0x4
    bl memset
    addi r3, r1, 0x640
    bl fn_8005B3CC
    mr r26, r3
    bl strlen
    stw r29, 0xc(r1)
    mr r28, r3
    addi r3, r1, 0x1c
    li r4, 0x0
    stw r30, 0x10(r1)
    li r5, 0x400
    stw r30, 0x14(r1)
    stw r30, 0x18(r1)
    stw r30, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0xc(r1)
    mr r4, r26
    mr r5, r28
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    stw r31, 0xc(r1)
    addi r3, r1, 0xc
    la r4, lbl_8087DB20
    bl fn_8005C1F8
    li r26, 0x0
lbl_fn_802078C4_0000133C:
    addi r3, r1, 0xc
    bl fn_8005BFCC
    bl fn_80684600
    add r4, r24, r26
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    stb r3, 0x128(r4)
    blt lbl_fn_802078C4_0000133C
    addi r27, r27, 0x12c
lbl_fn_802078C4_00001360:
    addi r3, r1, 0x640
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802078C4_000011A0
    lwz r3, lbl_8087F518
    mr r4, r25
    bl fn_8046DD20
    lmw r24, 0xc80(r1)
    lwz r0, 0xca4(r1)
    mtlr r0
    addi r1, r1, 0xca0
    blr
}

asm void fn_80207BEC(void)
{
    nofralloc
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_80207C00(void)
{
    nofralloc
    lwz r3, lbl_8087F184
    blr
}

asm void fn_80207C08(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_80207C08_000013C0
    lwz r0, lbl_8087F184
    cmpw r3, r0
    blt lbl_fn_80207C08_000013C8
lbl_fn_80207C08_000013C0:
    li r3, 0x0
    blr
lbl_fn_80207C08_000013C8:
    mulli r0, r3, 0x12c
    lwz r3, lbl_8087F180
    add r3, r3, r0
    blr
}

asm void fn_80207C34(void)
{
    nofralloc
    lbz r0, 0x128(r3)
    li r5, 0x1
    cmpw r4, r0
    bne lbl_fn_80207C34_000013F0
    li r5, 0x1
    b lbl_fn_80207C34_0000145C
lbl_fn_80207C34_000013F0:
    cmpwi r0, 0x0
    beq lbl_fn_80207C34_000013FC
    li r5, 0x0
lbl_fn_80207C34_000013FC:
    lbz r0, 0x129(r3)
    cmpw r4, r0
    bne lbl_fn_80207C34_00001410
    li r5, 0x1
    b lbl_fn_80207C34_0000145C
lbl_fn_80207C34_00001410:
    cmpwi r0, 0x0
    beq lbl_fn_80207C34_0000141C
    li r5, 0x0
lbl_fn_80207C34_0000141C:
    lbz r0, 0x12a(r3)
    cmpw r4, r0
    bne lbl_fn_80207C34_00001430
    li r5, 0x1
    b lbl_fn_80207C34_0000145C
lbl_fn_80207C34_00001430:
    cmpwi r0, 0x0
    beq lbl_fn_80207C34_0000143C
    li r5, 0x0
lbl_fn_80207C34_0000143C:
    lbz r0, 0x12b(r3)
    cmpw r4, r0
    bne lbl_fn_80207C34_00001450
    li r5, 0x1
    b lbl_fn_80207C34_0000145C
lbl_fn_80207C34_00001450:
    cmpwi r0, 0x0
    beq lbl_fn_80207C34_0000145C
    li r5, 0x0
lbl_fn_80207C34_0000145C:
    mr r3, r5
    blr
}

asm void fn_80207CC0(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F188
    cmpwi r0, 0x0
    bne lbl_fn_80207CC0_0000166C
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882D70
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r28, r3
    mr r4, r28
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_80207CC0_00001568
lbl_fn_80207CC0_0000151C:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r29, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80207CC0_00001568
    cmpwi r0, 0x23
    beq lbl_fn_80207CC0_00001568
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80207CC0_00001568
    mr r3, r29
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_80207CC0_00001568
    lwz r3, lbl_8087F18C
    addi r0, r3, 0x1
    stw r0, lbl_8087F18C
lbl_fn_80207CC0_00001568:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80207CC0_0000151C
    lwz r0, lbl_8087F18C
    lis r31, lbl_8073EA68@ha
    addi r5, r31, lbl_8073EA68@l
    li r4, 0xc
    mulli r3, r0, 0x28
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, lbl_8087F188
    mr r4, r28
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r31, r31, lbl_8073EA68@l
    li r30, 0x0
    b lbl_fn_80207CC0_00001650
lbl_fn_80207CC0_000015C4:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r29, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80207CC0_00001650
    cmpwi r0, 0x23
    beq lbl_fn_80207CC0_00001650
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80207CC0_00001650
    mr r3, r29
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_80207CC0_00001650
    lwz r0, lbl_8087F188
    addi r3, r1, 0x1c
    add r29, r0, r30
    bl fn_80684600
    stw r3, 0x0(r29)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r5, r3
    addi r3, r29, 0x4
    addi r4, r31, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x24(r29)
    addi r30, r30, 0x28
lbl_fn_80207CC0_00001650:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80207CC0_000015C4
    lwz r3, lbl_8087F518
    mr r4, r28
    bl fn_8046DD20
lbl_fn_80207CC0_0000166C:
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80207EE8(void)
{
    nofralloc
    lwz r5, lbl_8087F188
    li r6, 0x0
    lwz r0, lbl_8087F18C
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80207EE8_000016D0
lbl_fn_80207EE8_000016A8:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_80207EE8_000016C4
    mulli r0, r6, 0x28
    add r3, r5, r0
    addi r3, r3, 0x4
    blr
lbl_fn_80207EE8_000016C4:
    addi r4, r4, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_80207EE8_000016A8
lbl_fn_80207EE8_000016D0:
    lwz r3, lbl_80882D78
    blr
}

asm void fn_80207F34(void)
{
    nofralloc
    lwz r5, lbl_8087F188
    li r6, 0x0
    lwz r0, lbl_8087F18C
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80207F34_0000171C
lbl_fn_80207F34_000016F4:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_80207F34_00001710
    mulli r0, r6, 0x28
    add r3, r5, r0
    lwz r3, 0x24(r3)
    blr
lbl_fn_80207F34_00001710:
    addi r4, r4, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_80207F34_000016F4
lbl_fn_80207F34_0000171C:
    li r3, 0x0
    blr
}

asm void fn_80207F80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80208BE0
    bl fn_80209960
    bl fn_80204E54
    bl fn_80206F44
    bl fn_8020DF88
    bl fn_80204958
    bl fn_8020FDEC
    bl fn_80217E18
    bl fn_8021996C
    bl fn_80210ACC
    bl fn_8020AFF4
    bl fn_80216CD0
    bl fn_8020F130
    bl fn_8020F248
    bl fn_80209300
    bl fn_802196D0
    bl fn_80207CC0
    bl fn_80210244
    bl fn_8020F84C
    bl fn_802078C4
    bl fn_8021F47C
    bl fn_8020A90C
    bl fn_8021CCC4
    bl fn_80208144
    bl fn_8021E0B0
    bl fn_8021EB04
    bl fn_8020C028
    bl fn_8021F100
    bl fn_80218BD4
    bl fn_8021414C
    bl fn_8020B2BC
    bl fn_8020BB0C
    bl fn_80207310
    bl fn_8021CF8C
    bl fn_8021DBEC
    bl fn_802179FC
    bl fn_8021AAB8
    bl fn_8021ED08
    bl fn_8020D688
    bl fn_8020DB58
    bl fn_8021B060
    bl fn_8021B2F8
    bl fn_8021C3F4
    bl fn_802150F0
    bl fn_802189EC
    bl fn_80217778
    bl fn_802144A8
    bl fn_802130BC
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020805C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    beq lbl_fn_8020805C_000018D4
    bl strlen
    cmplwi r3, 0x2
    blt lbl_fn_8020805C_000018D4
    cmpwi r28, 0x0
    beq lbl_fn_8020805C_000018D4
    cmpwi r29, 0x0
    beq lbl_fn_8020805C_000018D4
    cmpwi r30, 0x0
    bne lbl_fn_8020805C_00001850
    b lbl_fn_8020805C_000018D4
lbl_fn_8020805C_00001850:
    li r0, 0x7
    stw r0, 0x0(r28)
    li r0, 0x0
    lis r31, lbl_8073EA88@ha
    stw r0, 0x0(r29)
    mr r3, r27
    addi r4, r31, lbl_8073EA88@l
    li r5, 0x2
    stw r0, 0x0(r30)
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8020805C_000018A4
    li r0, 0x2
    stw r0, 0x0(r28)
    addi r3, r27, 0x2
    bl fn_80684600
    stw r3, 0x0(r29)
    addi r3, r27, 0x6
    bl fn_80684600
    stw r3, 0x0(r30)
    b lbl_fn_8020805C_000018D4
lbl_fn_8020805C_000018A4:
    addi r4, r31, lbl_8073EA88@l
    mr r3, r27
    addi r4, r4, 0x3
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8020805C_000018D4
    li r0, 0x1
    stw r0, 0x0(r28)
    addi r3, r27, 0x2
    bl fn_80684600
    stw r3, 0x0(r29)
lbl_fn_8020805C_000018D4:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80208144(void)
{
    nofralloc
    stwu r1, -0x6c0(r1)
    mflr r0
    stw r0, 0x6c4(r1)
    stmw r27, 0x6ac(r1)
    lwz r0, lbl_8087F190
    cmpwi r0, 0x0
    bne lbl_fn_80208144_00001D44
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882D80
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x70(r1)
    mr r27, r3
    lwz r28, 0x8(r1)
    stw r0, 0x74(r1)
    addi r3, r1, 0x80
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x6a0(r1)
    bl memset
    addi r3, r1, 0x680
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x70(r1)
    mr r4, r27
    mr r5, r28
    addi r3, r1, 0x70
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x70
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x70(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    li r28, 0x0
lbl_fn_80208144_00001998:
    addi r3, r1, 0x70
    bl fn_8005B5F8
    addi r28, r28, 0x1
    cmpwi r28, 0x7
    blt lbl_fn_80208144_00001998
    lis r28, lbl_8073EA88@ha
    addi r28, r28, lbl_8073EA88@l
lbl_fn_80208144_000019B4:
    addi r3, r1, 0x70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80208144_00001A34
    cmpwi r0, 0x23
    beq lbl_fn_80208144_00001A34
    addi r4, r28, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80208144_00001A34
    addi r3, r1, 0x70
    bl fn_8005B3CC
    addi r4, r28, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80208144_00001A34
    addi r3, r1, 0x70
    bl fn_8005B3CC
    addi r3, r1, 0x70
    bl fn_8005B3CC
    addi r3, r1, 0x70
    bl fn_8005B3CC
    addi r3, r1, 0x70
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_80208144_00001A34
    lwz r3, lbl_8087F194
    addi r0, r3, 0x1
    stw r0, lbl_8087F194
lbl_fn_80208144_00001A34:
    addi r3, r1, 0x70
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80208144_000019B4
    lwz r3, lbl_8087F194
    lis r29, lbl_8073EA88@ha
    addi r29, r29, lbl_8073EA88@l
    li r4, 0x1
    addi r28, r3, 0x1
    stw r28, lbl_8087F194
    mulli r3, r28, 0x64
    addi r5, r29, 0x6
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_802085B4@ha
    mr r7, r28
    addi r4, r4, fn_802085B4@l
    li r5, 0x0
    li r6, 0x64
    bl fn_80695720
    stw r3, lbl_8087F190
    li r0, 0x0
    mr r28, r3
    addi r4, r29, 0x7
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    crclr 6
    addi r3, r3, 0x14
    bl sprintf
    li r0, 0x14
    stw r0, 0x54(r28)
    li r0, 0x10
    mr r4, r27
    stw r0, 0x58(r28)
    addi r3, r1, 0x70
    lwz r12, 0x70(r1)
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r28, 0x0
lbl_fn_80208144_00001AEC:
    addi r3, r1, 0x70
    bl fn_8005B5F8
    addi r28, r28, 0x1
    cmpwi r28, 0x7
    blt lbl_fn_80208144_00001AEC
    lis r29, lbl_8073EA88@ha
    li r28, 0x64
    addi r29, r29, lbl_8073EA88@l
    li r30, 0x0
    li r31, -0x1
lbl_fn_80208144_00001B14:
    addi r3, r1, 0x70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80208144_00001CC4
    cmpwi r0, 0x23
    beq lbl_fn_80208144_00001CC4
    addi r4, r29, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80208144_00001CC4
    addi r3, r1, 0x70
    bl fn_8005B3CC
    addi r4, r29, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80208144_00001CC4
    stw r30, 0x10(r1)
    addi r3, r1, 0x80
    stw r31, 0x14(r1)
    stw r30, 0x18(r1)
    stw r30, 0x1c(r1)
    stw r30, 0x60(r1)
    stw r30, 0x64(r1)
    stw r30, 0x68(r1)
    stw r30, 0x6c(r1)
    bl fn_80684600
    stw r3, 0xc(r1)
    addi r3, r1, 0x70
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x10(r1)
    addi r3, r1, 0x70
    bl fn_8005B3CC
    addi r4, r1, 0x14
    addi r5, r1, 0x18
    addi r6, r1, 0x1c
    bl fn_8020805C
    addi r3, r1, 0x70
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x20
    li r5, 0x40
    bl fn_8068236C
    addi r3, r1, 0x70
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x60(r1)
    addi r3, r1, 0x70
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, 0x60(r1)
    stw r3, 0x64(r1)
    cmpwi r0, 0x0
    ble lbl_fn_80208144_00001CC4
    lwz r3, lbl_8087F190
    lwz r0, 0xc(r1)
    stwux r0, r3, r28
    addi r28, r28, 0x64
    lwz r0, 0x10(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x14(r1)
    stw r0, 0x8(r3)
    lwz r0, 0x18(r1)
    stw r0, 0xc(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x10(r3)
    lwz r0, 0x24(r1)
    lwz r4, 0x20(r1)
    stw r4, 0x14(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x2c(r1)
    lwz r4, 0x28(r1)
    stw r4, 0x1c(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x34(r1)
    lwz r4, 0x30(r1)
    stw r4, 0x24(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x3c(r1)
    lwz r4, 0x38(r1)
    stw r4, 0x2c(r3)
    stw r0, 0x30(r3)
    lwz r0, 0x44(r1)
    lwz r4, 0x40(r1)
    stw r4, 0x34(r3)
    stw r0, 0x38(r3)
    lwz r0, 0x4c(r1)
    lwz r4, 0x48(r1)
    stw r4, 0x3c(r3)
    stw r0, 0x40(r3)
    lwz r0, 0x54(r1)
    lwz r4, 0x50(r1)
    stw r4, 0x44(r3)
    stw r0, 0x48(r3)
    lwz r0, 0x5c(r1)
    lwz r4, 0x58(r1)
    stw r4, 0x4c(r3)
    stw r0, 0x50(r3)
    lwz r0, 0x60(r1)
    stw r0, 0x54(r3)
    lwz r0, 0x64(r1)
    stw r0, 0x58(r3)
    lwz r0, 0x68(r1)
    stw r0, 0x5c(r3)
    lwz r0, 0x6c(r1)
    stw r0, 0x60(r3)
lbl_fn_80208144_00001CC4:
    addi r3, r1, 0x70
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80208144_00001B14
    lwz r3, lbl_8087F518
    mr r4, r27
    bl fn_8046DD20
    li r5, 0x1
    li r4, 0x64
    b lbl_fn_80208144_00001D38
lbl_fn_80208144_00001CEC:
    lwz r3, lbl_8087F190
    cmpwi r5, 0x1
    add r6, r3, r4
    ble lbl_fn_80208144_00001D0C
    subi r0, r5, 0x1
    mulli r0, r0, 0x64
    add r0, r3, r0
    stw r0, 0x5c(r6)
lbl_fn_80208144_00001D0C:
    lwz r3, lbl_8087F194
    subi r0, r3, 0x1
    cmpw r5, r0
    bge lbl_fn_80208144_00001D30
    addi r0, r5, 0x1
    lwz r3, lbl_8087F190
    mulli r0, r0, 0x64
    add r0, r3, r0
    stw r0, 0x60(r6)
lbl_fn_80208144_00001D30:
    addi r4, r4, 0x64
    addi r5, r5, 0x1
lbl_fn_80208144_00001D38:
    lwz r0, lbl_8087F194
    cmpw r5, r0
    blt lbl_fn_80208144_00001CEC
lbl_fn_80208144_00001D44:
    lmw r27, 0x6ac(r1)
    lwz r0, 0x6c4(r1)
    mtlr r0
    addi r1, r1, 0x6c0
    blr
}
