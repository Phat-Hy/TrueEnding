#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_15(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8000D8C0(void);
extern void fn_8000D9E8(void);
extern void fn_8000D9F0(void);
extern void fn_8000DB1C(void);
extern void fn_8000DB24(void);
extern void fn_8000DD04(void);
extern void fn_8000DD0C(void);
extern void fn_8000DD14(void);
extern void fn_8000DD98(void);
extern void fn_8000DDA0(void);
extern void fn_8000DE3C(void);
extern void fn_8000DE44(void);
extern void fn_800697D8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008B140(void);
extern void fn_80092814(void);
extern void fn_800929C0(void);
extern void fn_8009373C(void);
extern void fn_80093E90(void);
extern void fn_80094420(void);
extern void fn_80097A20(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800D1D3C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_8011EDE0(void);
extern void fn_80129A48(void);
extern void fn_8012AC40(void);
extern void fn_801446F0(void);
extern void fn_80144710(void);
extern void fn_80148B38(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_8014F4FC(void);
extern void fn_8014FAD0(void);
extern void fn_80150178(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_80164DCC(void);
extern void fn_8016E4C4(void);
extern void fn_8016E5F0(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_801750FC(void);
extern void fn_801765D8(void);
extern void fn_80176ACC(void);
extern void fn_80176DFC(void);
extern void fn_80178208(void);
extern void fn_8017A33C(void);
extern void fn_8017AC44(void);
extern void fn_8047FF70(void);
extern void fn_805393A8(void);
extern void fn_8053A2EC(void);
extern void fn_80564060(void);
extern void fn_80566014(void);
extern void fn_8067E23C(void);
extern void fn_80680770(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8072F924[];
extern u8 lbl_807759B0[];
extern u8 lbl_80775A88[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D6CC;
extern u32 lbl_8087D6D0;
extern u32 lbl_8087D6DC;
extern u32 lbl_8087D6E0;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F540;
extern u32 lbl_80880668;
extern u32 lbl_8088066C;
extern u32 lbl_80880674;
extern u32 lbl_80880678;
extern u32 lbl_8088067C;

/* Function declarations */
void fn_8000E18C(void);
void fn_8000E474(void);
void fn_8000E5D0(void);
void fn_8000E6B0(void);
void fn_8000E7B8(void);
void fn_8000E820(void);
void fn_8000EB84(void);
void fn_8000EB8C(void);
void fn_8000EC88(void);
void fn_8000ECA8(void);
void fn_8000ECC8(void);
void fn_8000EDA8(void);
void fn_8000EE8C(void);
void fn_8000F1EC(void);
void fn_8000FAE4(void);
void fn_8000FAE8(void);

asm void fn_8000E18C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_8000E18C_00000054
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r3, 0x0(r3)
    slwi r0, r0, 2
    lwz r4, 0x0(r4)
    stwx r4, r3, r0
    b lbl_fn_8000E18C_000002C8
lbl_fn_8000E18C_00000054:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_8000E18C_00000088
    lis r3, __files@ha
    lis r4, lbl_8072F924@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8072F924@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000E18C_00000088:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_8000E18C_000000EC
    lis r3, __files@ha
    lis r4, lbl_8072F924@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8072F924@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000E18C_000000EC:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8000E18C_0000013C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_8000E18C_00000130
    addi r3, r1, 0x10
lbl_fn_8000E18C_00000130:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8000E18C_00000180
lbl_fn_8000E18C_0000013C:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8000E18C_00000178
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8000E18C_0000016C
    addi r3, r1, 0x10
lbl_fn_8000E18C_0000016C:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8000E18C_00000180
lbl_fn_8000E18C_00000178:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_8000E18C_00000180:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8000E18C_000001B0
    lis r3, __files@ha
    lis r4, lbl_8072F924@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8072F924@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000E18C_000001B0:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8000E18C_000001E4
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000E18C_000001E4:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    lwz r4, 0x0(r30)
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_8000E18C_000002C8
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8000E18C_000002C8
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_8000E18C_000002C8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8000E474(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lwz r7, 0x18(r3)
    li r0, 0x1
    mr r29, r5
    mr r28, r6
    rlwinm r7, r7, 0, 7, 5
    stw r7, 0x18(r3)
    mr r30, r4
    mr r27, r3
    stw r0, 0x20(r3)
    mr r3, r29
    mr r4, r28
    bl fn_8000D8C0
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_8000E474_00000358
    bl fn_8000DB1C
    lis r6, lbl_807C7030@ha
    lfs f1, lbl_80880668
    mr r4, r29
    mr r5, r28
    addi r6, r6, lbl_807C7030@l
    bl fn_8047FF70
    mr r4, r3
lbl_fn_8000E474_00000358:
    cmpwi r4, 0x0
    bne lbl_fn_8000E474_0000036C
    li r0, 0x0
    stw r0, 0x20(r27)
    b lbl_fn_8000E474_0000042C
lbl_fn_8000E474_0000036C:
    mr r3, r30
    bl fn_8000DDA0
    stw r3, 0x1c(r27)
    bl fn_8000DE3C
    bl fn_8000DD0C
    bl fn_8000DD04
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8000E474_0000042C
    mr r31, r30
    li r29, 0x0
    b lbl_fn_8000E474_00000420
lbl_fn_8000E474_0000039C:
    lwz r3, 0x50(r31)
    bl fn_800DC6B4
    mr r28, r3
    lwz r3, 0x1c(r27)
    bl fn_8000DE3C
    bl fn_8000DD0C
    mr r4, r28
    bl fn_800929C0
    bl fn_8000DD98
    stw r3, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl fn_8000DD14
    addi r3, r27, 0x158
    addi r4, r1, 0x10
    bl fn_8000DE44
    addi r3, r27, 0x170
    addi r4, r1, 0x10
    bl fn_8000DE44
    lwz r3, 0x1c(r27)
    bl fn_8000DE3C
    bl fn_8000DD0C
    mr r4, r28
    bl fn_80093E90
    stw r3, 0xc(r1)
    addi r3, r27, 0x164
    addi r4, r1, 0xc
    bl fn_8000E18C
    addi r3, r27, 0x17c
    addi r4, r1, 0xc
    bl fn_8000E18C
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_8000E474_00000420:
    lwz r0, 0x30(r30)
    cmpw r29, r0
    blt lbl_fn_8000E474_0000039C
lbl_fn_8000E474_0000042C:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8000E5D0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    mr r6, r5
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r3
    lwz r0, lbl_8087F4A0
    cmpwi r0, 0x0
    bne lbl_fn_8000E5D0_00000474
    li r0, 0x0
    stw r0, 0x20(r3)
    b lbl_fn_8000E5D0_00000510
lbl_fn_8000E5D0_00000474:
    lwz r8, 0x18(r3)
    li r7, 0x2
    li r0, 0x0
    stw r7, 0x20(r3)
    oris r8, r8, 0x200
    stw r8, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r7, lbl_8087F4A0
    lwz r7, 0x48(r7)
    b lbl_fn_8000E5D0_000004C0
lbl_fn_8000E5D0_0000049C:
    lwz r0, 0x48(r7)
    cmpw r4, r0
    bne lbl_fn_8000E5D0_000004BC
    lwz r0, 0x4c(r7)
    cmpw r5, r0
    bne lbl_fn_8000E5D0_000004BC
    stw r7, 0x1c(r3)
    b lbl_fn_8000E5D0_000004C8
lbl_fn_8000E5D0_000004BC:
    lwz r7, 0x5c(r7)
lbl_fn_8000E5D0_000004C0:
    cmpwi r7, 0x0
    bne lbl_fn_8000E5D0_0000049C
lbl_fn_8000E5D0_000004C8:
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8000E5D0_00000510
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_8000E5D0_00000508
    lis r7, lbl_8072F924@ha
    mr r5, r4
    addi r7, r7, lbl_8072F924@l
    addi r3, r1, 0x8
    addi r4, r7, 0x14
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_8000E5D0_00000508:
    li r0, 0x0
    stw r0, 0x20(r31)
lbl_fn_8000E5D0_00000510:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8000E6B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0xf8(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8000E6B0_0000057C
lbl_fn_8000E6B0_0000055C:
    lwz r0, 0xf4(r4)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    cmpw r5, r0
    bne lbl_fn_8000E6B0_00000574
    b lbl_fn_8000E6B0_00000580
lbl_fn_8000E6B0_00000574:
    addi r6, r6, 0x28
    bdnz lbl_fn_8000E6B0_0000055C
lbl_fn_8000E6B0_0000057C:
    li r8, 0x0
lbl_fn_8000E6B0_00000580:
    cmpwi r8, 0x0
    bne lbl_fn_8000E6B0_00000594
    li r0, 0x0
    stw r0, 0x20(r3)
    b lbl_fn_8000E6B0_0000060C
lbl_fn_8000E6B0_00000594:
    lwz r6, 0x18(r3)
    li r0, 0x3
    stw r0, 0x20(r3)
    li r4, 0x4
    rlwinm r6, r6, 0, 7, 5
    la r5, lbl_8087D6D0
    stw r6, 0x18(r3)
    li r3, 0xc0
    la r6, lbl_8087D6CC
    li r7, 0x0
    lwz r30, 0x24(r8)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8000E6B0_00000608
    mr r4, r29
    bl fn_800D1D3C
    lis r3, lbl_807759B0@ha
    li r0, 0x0
    addi r3, r3, lbl_807759B0@l
    stw r3, 0x0(r31)
    stw r30, 0x48(r31)
    stw r29, 0x50(r31)
    stw r0, 0x54(r31)
    stb r0, 0xb8(r31)
    stb r0, 0xb9(r31)
    lwz r0, 0x4c(r31)
    oris r0, r0, 0x8000
    stw r0, 0x4c(r31)
lbl_fn_8000E6B0_00000608:
    stw r31, 0x1c(r28)
lbl_fn_8000E6B0_0000060C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8000E7B8(void)
{
    nofralloc
    lwz r0, 0x108(r4)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8000E7B8_00000660
lbl_fn_8000E7B8_00000640:
    lwz r0, 0x104(r4)
    add r7, r0, r6
    lwz r0, 0x14(r7)
    cmpw r5, r0
    bne lbl_fn_8000E7B8_00000658
    b lbl_fn_8000E7B8_00000664
lbl_fn_8000E7B8_00000658:
    addi r6, r6, 0x48
    bdnz lbl_fn_8000E7B8_00000640
lbl_fn_8000E7B8_00000660:
    li r7, 0x0
lbl_fn_8000E7B8_00000664:
    cmpwi r7, 0x0
    bne lbl_fn_8000E7B8_00000678
    li r0, 0x0
    stw r0, 0x20(r3)
    blr
lbl_fn_8000E7B8_00000678:
    lwz r4, 0x18(r3)
    li r0, 0x4
    stw r0, 0x20(r3)
    rlwinm r4, r4, 0, 7, 5
    stw r4, 0x18(r3)
    stw r7, 0x1c(r3)
    blr
}

asm void fn_8000E820(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r25, 0x64(r1)
    mr r30, r3
    bl fn_8000EB84
    mr r31, r3
    addi r3, r30, 0x8
    bl fn_8000EC88
    cmpwi r3, 0x0
    beq lbl_fn_8000E820_000006DC
    lis r29, lbl_8072F924@ha
    addi r3, r30, 0x8
    addi r29, r29, lbl_8072F924@l
    addi r4, r29, 0x39
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8000E820_000006E8
lbl_fn_8000E820_000006DC:
    li r0, 0x6
    stw r0, 0x20(r30)
    b lbl_fn_8000E820_000009E4
lbl_fn_8000E820_000006E8:
    addi r3, r30, 0x8
    addi r4, r29, 0x40
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8000E820_000007D4
    li r0, 0x7
    stw r0, 0x20(r30)
    bl fn_8000D9E8
    bl fn_8000D9F0
    mr r4, r3
    mr r3, r31
    bl fn_8000DDA0
    stw r3, 0x1c(r30)
    bl fn_8000DE3C
    bl fn_8000DD0C
    bl fn_8000DD04
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8000E820_000009E4
    mr r29, r31
    li r28, 0x0
    b lbl_fn_8000E820_000007C4
lbl_fn_8000E820_00000740:
    lwz r3, 0x50(r29)
    bl fn_800DC6B4
    mr r27, r3
    lwz r3, 0x1c(r30)
    bl fn_8000DE3C
    bl fn_8000DD0C
    mr r4, r27
    bl fn_800929C0
    bl fn_8000DD98
    stw r3, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl fn_8000DD14
    addi r3, r30, 0x158
    addi r4, r1, 0x10
    bl fn_8000DE44
    addi r3, r30, 0x170
    addi r4, r1, 0x10
    bl fn_8000DE44
    lwz r3, 0x1c(r30)
    bl fn_8000DE3C
    bl fn_8000DD0C
    mr r4, r27
    bl fn_80093E90
    stw r3, 0xc(r1)
    addi r3, r30, 0x164
    addi r4, r1, 0xc
    bl fn_8000E18C
    addi r3, r30, 0x17c
    addi r4, r1, 0xc
    bl fn_8000E18C
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_8000E820_000007C4:
    lwz r0, 0x30(r31)
    cmpw r28, r0
    blt lbl_fn_8000E820_00000740
    b lbl_fn_8000E820_000009E4
lbl_fn_8000E820_000007D4:
    addi r3, r30, 0x8
    li r4, 0x1
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    addi r3, r30, 0x8
    li r4, 0x0
    extsb r29, r0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    addi r3, r1, 0x40
    li r4, 0x0
    li r5, 0x20
    extsb r0, r0
    slwi r0, r0, 8
    or r0, r0, r29
    clrlwi r27, r0, 16
    bl memset
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r26, r1, 0x40
    li r28, 0x0
    li r25, 0x2
    li r29, 0x0
    b lbl_fn_8000E820_000008D4
lbl_fn_8000E820_0000083C:
    mr r4, r25
    addi r3, r30, 0x8
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x30
    blt lbl_fn_8000E820_00000890
    mr r4, r25
    addi r3, r30, 0x8
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x39
    bgt lbl_fn_8000E820_00000890
    mr r4, r25
    addi r3, r30, 0x8
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    stbx r0, r26, r28
    addi r28, r28, 0x1
    b lbl_fn_8000E820_000008D0
lbl_fn_8000E820_00000890:
    mr r4, r25
    addi r3, r30, 0x8
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2e
    bne lbl_fn_8000E820_000008B8
    stbx r29, r26, r28
    addi r26, r1, 0x20
    li r28, 0x0
    b lbl_fn_8000E820_000008D0
lbl_fn_8000E820_000008B8:
    mr r4, r25
    addi r3, r30, 0x8
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x5f
    bne lbl_fn_8000E820_000009E4
lbl_fn_8000E820_000008D0:
    addi r25, r25, 0x1
lbl_fn_8000E820_000008D4:
    addi r3, r30, 0x8
    bl fn_8000EC88
    cmpw r25, r3
    blt lbl_fn_8000E820_0000083C
    li r0, 0x0
    stbx r0, r26, r28
    addi r3, r1, 0x40
    bl fn_80684600
    mr r25, r3
    addi r3, r1, 0x20
    bl fn_80684600
    cmpwi r27, 0x656d
    mr r5, r3
    beq lbl_fn_8000E820_00000940
    cmpwi r27, 0x6672
    beq lbl_fn_8000E820_00000958
    cmpwi r27, 0x6e70
    beq lbl_fn_8000E820_00000970
    cmpwi r27, 0x6576
    beq lbl_fn_8000E820_00000988
    cmpwi r27, 0x676d
    beq lbl_fn_8000E820_000009A0
    cmpwi r27, 0x6d64
    beq lbl_fn_8000E820_000009B0
    cmpwi r27, 0x646d
    beq lbl_fn_8000E820_000009C4
    b lbl_fn_8000E820_000009D4
lbl_fn_8000E820_00000940:
    mr r3, r30
    mr r4, r31
    mr r6, r25
    li r5, 0x2
    bl fn_8000DB24
    b lbl_fn_8000E820_000009D4
lbl_fn_8000E820_00000958:
    mr r3, r30
    mr r4, r31
    mr r6, r25
    li r5, 0x3
    bl fn_8000DB24
    b lbl_fn_8000E820_000009D4
lbl_fn_8000E820_00000970:
    mr r3, r30
    mr r4, r31
    mr r6, r25
    li r5, 0x1
    bl fn_8000DB24
    b lbl_fn_8000E820_000009D4
lbl_fn_8000E820_00000988:
    mr r3, r30
    mr r4, r31
    mr r6, r25
    li r5, 0x4
    bl fn_8000E474
    b lbl_fn_8000E820_000009D4
lbl_fn_8000E820_000009A0:
    mr r3, r30
    mr r4, r25
    bl fn_8000E5D0
    b lbl_fn_8000E820_000009D4
lbl_fn_8000E820_000009B0:
    mr r3, r30
    mr r4, r31
    mr r5, r25
    bl fn_8000E6B0
    b lbl_fn_8000E820_000009D4
lbl_fn_8000E820_000009C4:
    mr r3, r30
    mr r4, r31
    mr r5, r25
    bl fn_8000E7B8
lbl_fn_8000E820_000009D4:
    li r0, 0x0
    stw r0, 0xb8(r30)
    stw r0, 0xbc(r30)
    stw r0, 0xc0(r30)
lbl_fn_8000E820_000009E4:
    lmw r25, 0x64(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8000EB84(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8000EB8C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    mr r3, r30
    bl strlen
    stw r3, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    bne lbl_fn_8000EB8C_00000A48
    lbz r0, 0x0(r29)
    clrlwi r4, r0, 25
    b lbl_fn_8000EB8C_00000A4C
lbl_fn_8000EB8C_00000A48:
    lwz r4, 0x4(r29)
lbl_fn_8000EB8C_00000A4C:
    stw r4, 0x8(r1)
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    bne lbl_fn_8000EB8C_00000A6C
    lbz r0, 0x0(r29)
    addi r3, r29, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_8000EB8C_00000A74
lbl_fn_8000EB8C_00000A6C:
    lwz r3, 0x8(r29)
    lwz r0, 0x4(r29)
lbl_fn_8000EB8C_00000A74:
    cmplw r4, r0
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    bge lbl_fn_8000EB8C_00000A88
    addi r4, r1, 0x8
lbl_fn_8000EB8C_00000A88:
    lwz r0, 0x0(r4)
    mr r4, r30
    stw r0, 0x14(r1)
    addi r5, r1, 0x14
    cmplw r31, r0
    bge lbl_fn_8000EB8C_00000AA4
    addi r5, r1, 0xc
lbl_fn_8000EB8C_00000AA4:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8000EB8C_00000AD8
    lwz r0, 0x14(r1)
    cmplw r0, r31
    bge lbl_fn_8000EB8C_00000AC8
    li r3, -0x1
    b lbl_fn_8000EB8C_00000AD8
lbl_fn_8000EB8C_00000AC8:
    bne lbl_fn_8000EB8C_00000AD4
    li r3, 0x0
    b lbl_fn_8000EB8C_00000AD8
lbl_fn_8000EB8C_00000AD4:
    li r3, 0x1
lbl_fn_8000EB8C_00000AD8:
    cntlzw r0, r3
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    srwi r3, r0, 5
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8000EC88(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8000EC88_00000B14
    lbz r0, 0x0(r3)
    clrlwi r3, r0, 25
    blr
lbl_fn_8000EC88_00000B14:
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8000ECA8(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8000ECA8_00000B30
    addi r0, r3, 0x1
    b lbl_fn_8000ECA8_00000B34
lbl_fn_8000ECA8_00000B30:
    lwz r0, 0x8(r3)
lbl_fn_8000ECA8_00000B34:
    add r3, r0, r4
    blr
}

asm void fn_8000ECC8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, 0x4(r3)
    lwz r5, 0x20(r3)
    lwz r0, 0x98(r4)
    cmpwi r5, 0x7
    extrwi r0, r0, 1, 5
    beq lbl_fn_8000ECC8_00000B84
    cmpwi r5, 0x1
    beq lbl_fn_8000ECC8_00000B84
    cmpwi r5, 0x3
    beq lbl_fn_8000ECC8_00000BDC
    b lbl_fn_8000ECC8_00000BF4
lbl_fn_8000ECC8_00000B84:
    cmpwi r0, 0x0
    beq lbl_fn_8000ECC8_00000BF4
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_8000ECC8_00000BBC
lbl_fn_8000ECC8_00000B98:
    lwz r0, 0xac(r29)
    lwz r3, 0x1c(r29)
    add r5, r0, r31
    lwzx r4, r31, r0
    lwz r3, 0x48(r3)
    lwz r5, 0x4(r5)
    bl fn_8014F4FC
    addi r30, r30, 0x1
    addi r31, r31, 0x8
lbl_fn_8000ECC8_00000BBC:
    lwz r0, 0xb0(r29)
    cmpw r30, r0
    blt lbl_fn_8000ECC8_00000B98
    lwz r3, 0x1c(r29)
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x1c(r29)
    b lbl_fn_8000ECC8_00000BF4
lbl_fn_8000ECC8_00000BDC:
    cmpwi r0, 0x0
    beq lbl_fn_8000ECC8_00000BF4
    lwz r3, 0x1c(r3)
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x1c(r29)
lbl_fn_8000ECC8_00000BF4:
    li r0, 0x0
    stw r0, 0x1c(r29)
    stw r0, 0x20(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8000EDA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x20(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x6
    bne lbl_fn_8000EDA8_00000C44
    li r3, 0x1
    b lbl_fn_8000EDA8_00000CEC
lbl_fn_8000EDA8_00000C44:
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8000EDA8_00000C58
    li r3, 0x1
    b lbl_fn_8000EDA8_00000CEC
lbl_fn_8000EDA8_00000C58:
    cmpwi r0, 0x7
    beq lbl_fn_8000EDA8_00000C7C
    cmpwi r0, 0x1
    beq lbl_fn_8000EDA8_00000C7C
    cmpwi r0, 0x3
    beq lbl_fn_8000EDA8_00000CC8
    cmpwi r0, 0x4
    beq lbl_fn_8000EDA8_00000CE0
    b lbl_fn_8000EDA8_00000CE8
lbl_fn_8000EDA8_00000C7C:
    lwz r3, 0x48(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8000EDA8_00000C98
    li r3, 0x0
    b lbl_fn_8000EDA8_00000CEC
lbl_fn_8000EDA8_00000C98:
    bl fn_8014FAD0
    cmpwi r3, 0x0
    beq lbl_fn_8000EDA8_00000CAC
    li r3, 0x0
    b lbl_fn_8000EDA8_00000CEC
lbl_fn_8000EDA8_00000CAC:
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    lwz r0, 0xac(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8000EDA8_00000CE8
    li r3, 0x0
    b lbl_fn_8000EDA8_00000CEC
lbl_fn_8000EDA8_00000CC8:
    lwz r3, 0x48(r3)
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8000EDA8_00000CE8
    li r3, 0x0
    b lbl_fn_8000EDA8_00000CEC
lbl_fn_8000EDA8_00000CE0:
    li r3, 0x1
    b lbl_fn_8000EDA8_00000CEC
lbl_fn_8000EDA8_00000CE8:
    li r3, 0x1
lbl_fn_8000EDA8_00000CEC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8000EE8C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_26
    lwz r4, 0x1c(r3)
    mr r30, r3
    cmpwi r4, 0x0
    beq lbl_fn_8000EE8C_00001038
    lwz r0, 0x20(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8000EE8C_00001038
    lwz r0, 0x18(r3)
    extrwi r0, r0, 1, 7
    cmplwi r0, 0x1
    beq lbl_fn_8000EE8C_00001038
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8000EE8C_00000D64
    cmpwi r0, 0x1
    bne lbl_fn_8000EE8C_00000D7C
lbl_fn_8000EE8C_00000D64:
    cmpwi r4, 0x0
    beq lbl_fn_8000EE8C_00000D74
    lwz r31, 0x48(r4)
    b lbl_fn_8000EE8C_00000D80
lbl_fn_8000EE8C_00000D74:
    li r31, 0x0
    b lbl_fn_8000EE8C_00000D80
lbl_fn_8000EE8C_00000D7C:
    li r31, 0x0
lbl_fn_8000EE8C_00000D80:
    cmpwi r31, 0x0
    beq lbl_fn_8000EE8C_00000EF4
    lwz r3, 0x4(r3)
    lwz r0, 0x194(r3)
    cmpwi r0, 0xa
    bne lbl_fn_8000EE8C_00000EF4
    lfs f0, 0x198(r3)
    mr r28, r30
    lfs f30, lbl_80880668
    li r29, 0x0
    fctiwz f0, f0
    li r26, 0x0
    stfd f0, 0x8(r1)
    lwz r27, 0xc(r1)
lbl_fn_8000EE8C_00000DB8:
    lwz r3, 0xb8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8000EE8C_00000DDC
    mr r4, r27
    bl fn_805393A8
    lwz r3, 0xb8(r28)
    bl fn_8053A2EC
    fadds f30, f30, f1
    addi r29, r29, 0x1
lbl_fn_8000EE8C_00000DDC:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x3
    blt lbl_fn_8000EE8C_00000DB8
    cmpwi r29, 0x2
    blt lbl_fn_8000EE8C_00000EF4
    lwz r0, 0x20(r30)
    cmpwi r0, 0x7
    beq lbl_fn_8000EE8C_00000E2C
    cmpwi r0, 0x1
    beq lbl_fn_8000EE8C_00000E2C
    cmpwi r0, 0x2
    beq lbl_fn_8000EE8C_00000E4C
    cmpwi r0, 0x3
    beq lbl_fn_8000EE8C_00000E74
    cmpwi r0, 0x4
    beq lbl_fn_8000EE8C_00000E90
    cmpwi r0, 0x6
    beq lbl_fn_8000EE8C_00000E90
    b lbl_fn_8000EE8C_00000E98
lbl_fn_8000EE8C_00000E2C:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8000EE8C_00000E44
    lwz r3, 0x48(r3)
    addi r3, r3, 0xb0
    b lbl_fn_8000EE8C_00000E9C
lbl_fn_8000EE8C_00000E44:
    li r3, 0x0
    b lbl_fn_8000EE8C_00000E9C
lbl_fn_8000EE8C_00000E4C:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8000EE8C_00000E6C
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_fn_8000EE8C_00000E9C
lbl_fn_8000EE8C_00000E6C:
    li r3, 0x0
    b lbl_fn_8000EE8C_00000E9C
lbl_fn_8000EE8C_00000E74:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8000EE8C_00000E88
    lwz r3, 0x48(r3)
    b lbl_fn_8000EE8C_00000E9C
lbl_fn_8000EE8C_00000E88:
    li r3, 0x0
    b lbl_fn_8000EE8C_00000E9C
lbl_fn_8000EE8C_00000E90:
    li r3, 0x0
    b lbl_fn_8000EE8C_00000E9C
lbl_fn_8000EE8C_00000E98:
    li r3, 0x0
lbl_fn_8000EE8C_00000E9C:
    li r0, 0x3
    stw r0, 0x34c(r3)
    lfs f31, lbl_80880668
    mr r29, r30
    mr r28, r3
    li r26, 0x0
lbl_fn_8000EE8C_00000EB4:
    lwz r3, 0xb8(r29)
    cmpwi r3, 0x0
    bne lbl_fn_8000EE8C_00000EC8
    stfs f31, 0x24c(r28)
    b lbl_fn_8000EE8C_00000EE0
lbl_fn_8000EE8C_00000EC8:
    mr r4, r27
    bl fn_805393A8
    lwz r3, 0xb8(r29)
    bl fn_8053A2EC
    fdivs f0, f1, f30
    stfs f0, 0x24c(r28)
lbl_fn_8000EE8C_00000EE0:
    addi r26, r26, 0x1
    addi r28, r28, 0x30
    cmpwi r26, 0x3
    addi r29, r29, 0x4
    blt lbl_fn_8000EE8C_00000EB4
lbl_fn_8000EE8C_00000EF4:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    bne lbl_fn_8000EE8C_00000F90
    cmpwi r31, 0x0
    beq lbl_fn_8000EE8C_00000F90
    lwz r3, lbl_8087F540
    lwz r0, 0x2384(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8000EE8C_00000F70
    lwz r3, 0x4(r30)
    lwz r0, 0x194(r3)
    cmpwi r0, 0xa
    bne lbl_fn_8000EE8C_00000F4C
    lwz r0, 0x54c(r31)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_8000EE8C_00000F90
    lwz r0, 0x54c(r31)
    oris r0, r0, 0x20
    stw r0, 0x54c(r31)
    b lbl_fn_8000EE8C_00000F90
lbl_fn_8000EE8C_00000F4C:
    lwz r0, 0x54c(r31)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_8000EE8C_00000F90
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x54c(r31)
    b lbl_fn_8000EE8C_00000F90
lbl_fn_8000EE8C_00000F70:
    lwz r0, 0x54c(r31)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_8000EE8C_00000F90
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x54c(r31)
lbl_fn_8000EE8C_00000F90:
    lwz r0, 0x14c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8000EE8C_00001038
    li r31, 0x0
    li r29, 0x0
    b lbl_fn_8000EE8C_00000FCC
lbl_fn_8000EE8C_00000FA8:
    lwz r3, 0x148(r30)
    lwzx r3, r3, r29
    bl fn_80564060
    cmpwi r3, 0x0
    beq lbl_fn_8000EE8C_00000FC4
    li r0, 0x1
    b lbl_fn_8000EE8C_00000FDC
lbl_fn_8000EE8C_00000FC4:
    addi r29, r29, 0x4
    addi r31, r31, 0x1
lbl_fn_8000EE8C_00000FCC:
    lwz r0, 0x14c(r30)
    cmplw r31, r0
    blt lbl_fn_8000EE8C_00000FA8
    li r0, 0x0
lbl_fn_8000EE8C_00000FDC:
    cmpwi r0, 0x0
    bne lbl_fn_8000EE8C_00001038
    lwz r3, 0x1c(r30)
    li r26, 0x0
    li r29, 0x0
    lwz r31, 0x48(r3)
    b lbl_fn_8000EE8C_00001020
lbl_fn_8000EE8C_00000FF8:
    lwz r4, 0x148(r30)
    mr r3, r31
    lwzx r5, r4, r29
    lwz r4, 0x0(r5)
    bl fn_80150178
    lwz r3, 0x148(r30)
    lwzx r3, r3, r29
    bl fn_80566014
    addi r29, r29, 0x4
    addi r26, r26, 0x1
lbl_fn_8000EE8C_00001020:
    lwz r0, 0x14c(r30)
    cmplw r26, r0
    blt lbl_fn_8000EE8C_00000FF8
    lwz r0, 0x14c(r30)
    subf r0, r0, r0
    stw r0, 0x14c(r30)
lbl_fn_8000EE8C_00001038:
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8000F1EC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_15
    lwz r5, 0x18(r3)
    mr r29, r3
    srwi r0, r5, 31
    cmplwi r0, 0x1
    beq lbl_fn_8000F1EC_00001940
    li r6, 0x0
    lis r4, lbl_807C7030@ha
    stw r6, 0xb8(r3)
    addi r4, r4, lbl_807C7030@l
    lwz r0, 0x20(r3)
    stw r6, 0xbc(r3)
    cmpwi r0, 0x7
    stw r6, 0xc0(r3)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xcc(r3)
    psq_st f1, 0xc4(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xe4(r3)
    psq_st f1, 0xdc(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xf0(r3)
    psq_st f1, 0xe8(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xfc(r3)
    psq_st f1, 0xf4(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x108(r3)
    psq_st f1, 0x100(r3), 0, 0
    beq lbl_fn_8000F1EC_00001110
    cmpwi r0, 0x1
    beq lbl_fn_8000F1EC_00001110
    cmpwi r0, 0x2
    beq lbl_fn_8000F1EC_00001904
    b lbl_fn_8000F1EC_00001934
lbl_fn_8000F1EC_00001110:
    lwz r0, 0x18(r3)
    extrwi r0, r0, 1, 7
    cmplwi r0, 0x1
    beq lbl_fn_8000F1EC_00001934
    lwz r5, 0x1c(r3)
    lwz r0, 0x18(r3)
    lwz r4, 0x48(r5)
    lwz r4, 0x55c(r4)
    rlwimi r0, r4, 16, 8, 15
    stw r0, 0x18(r3)
    extrwi r0, r0, 8, 8
    cmplwi r0, 0x6
    bne lbl_fn_8000F1EC_00001150
    lwz r3, 0x48(r5)
    li r4, 0x0
    bl fn_80178208
lbl_fn_8000F1EC_00001150:
    lwz r6, 0x1c(r29)
    li r5, 0x0
    lwz r3, 0x18(r29)
    lwz r4, 0x48(r6)
    lwz r0, 0x38(r4)
    rlwimi r3, r0, 13, 16, 16
    stw r3, 0x18(r29)
    lwz r4, 0x48(r6)
    lwz r0, 0x38(r4)
    rlwimi r3, r0, 14, 17, 17
    stw r3, 0x18(r29)
    lwz r4, 0x48(r6)
    lwz r0, 0x54c(r4)
    extrwi r0, r0, 1, 28
    xori r4, r0, 0x1
    neg r0, r4
    or r0, r0, r4
    rlwimi r3, r0, 14, 18, 18
    stw r3, 0x18(r29)
    lwz r3, 0x48(r6)
    lwz r0, 0x38(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_8000F1EC_000011BC
    lwz r0, 0x5c0(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_8000F1EC_000011BC
    li r5, 0x1
lbl_fn_8000F1EC_000011BC:
    lwz r4, 0x18(r29)
    rlwimi r4, r5, 12, 19, 19
    stw r4, 0x18(r29)
    li r0, 0x0
    lwz r6, 0x1c(r29)
    lwz r7, 0x2c(r29)
    lwz r3, 0x48(r6)
    cmpwi r7, 0x0
    lwz r3, 0x958(r3)
    rlwimi r4, r3, 11, 20, 20
    stw r4, 0x18(r29)
    lwz r3, 0x48(r6)
    lwz r3, 0x12a4(r3)
    extrwi r5, r3, 1, 13
    neg r3, r5
    or r3, r3, r5
    rlwimi r4, r3, 11, 21, 21
    stw r4, 0x18(r29)
    lwz r3, 0x48(r6)
    lbz r5, 0x1230(r3)
    neg r3, r5
    or r3, r3, r5
    rlwimi r4, r3, 10, 22, 22
    stw r4, 0x18(r29)
    lwz r16, 0x48(r6)
    stw r0, 0x24(r29)
    stw r0, 0x28(r29)
    beq lbl_fn_8000F1EC_00001240
    beq lbl_fn_8000F1EC_00001238
    subi r3, r7, 0x10
    bl fn_80084C24
lbl_fn_8000F1EC_00001238:
    li r0, 0x0
    stw r0, 0x2c(r29)
lbl_fn_8000F1EC_00001240:
    lwz r15, 0x188(r16)
    cmpwi r15, 0x0
    beq lbl_fn_8000F1EC_00001288
    mulli r3, r15, 0x2c
    li r4, 0x0
    la r5, lbl_8087D6E0
    la r6, lbl_8087D6DC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8000FAE4@ha
    mr r7, r15
    addi r4, r4, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    mr r17, r3
    b lbl_fn_8000F1EC_0000128C
lbl_fn_8000F1EC_00001288:
    li r17, 0x0
lbl_fn_8000F1EC_0000128C:
    lwz r0, 0x2c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8000F1EC_000013DC
    lwz r0, 0x24(r29)
    mr r4, r15
    cmplw r15, r0
    ble lbl_fn_8000F1EC_000012AC
    mr r4, r0
lbl_fn_8000F1EC_000012AC:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_8000F1EC_000013C8
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_8000F1EC_00001370
lbl_fn_8000F1EC_000012C4:
    lwz r0, 0x2c(r29)
    add r5, r17, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r17, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    add r5, r17, r3
    lwz r0, 0x2c(r29)
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r17, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_8000F1EC_000012C4
    andi. r4, r4, 0x1
    beq lbl_fn_8000F1EC_000013C8
lbl_fn_8000F1EC_00001370:
    mtctr r4
lbl_fn_8000F1EC_00001374:
    lwz r0, 0x2c(r29)
    add r5, r17, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r17, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r5), 0, 0
    stfs f2, 0x28(r5)
    bdnz lbl_fn_8000F1EC_00001374
lbl_fn_8000F1EC_000013C8:
    lwz r3, 0x2c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8000F1EC_000013DC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8000F1EC_000013DC:
    stw r17, 0x2c(r29)
    li r5, 0x0
    li r3, 0x0
    stw r15, 0x24(r29)
    stw r15, 0x28(r29)
    b lbl_fn_8000F1EC_0000144C
lbl_fn_8000F1EC_000013F4:
    lwz r4, 0x190(r16)
    addi r5, r5, 0x1
    lwz r0, 0x2c(r29)
    add r6, r4, r3
    add r4, r0, r3
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
lbl_fn_8000F1EC_0000144C:
    lwz r0, 0x24(r29)
    cmplw r5, r0
    blt lbl_fn_8000F1EC_000013F4
    lwz r5, 0x1c(r29)
    lis r3, __files@ha
    lwz r0, 0x50(r29)
    addi r21, r3, __files@l
    lwz r4, 0x48(r5)
    addi r17, r1, 0x14
    subf r0, r0, r0
    li r30, 0x0
    lwz r4, 0x674(r4)
    li r28, 0x0
    stw r4, 0x30(r29)
    lis r25, 0xcccd
    lis r20, lbl_8072F924@ha
    lis r19, 0x4000
    lwz r3, 0x48(r5)
    li r22, 0x0
    lis r24, 0x1555
    lis r26, 0x2aab
    psq_l f1, 0x528(r3), 0, 0
    lis r27, lbl_80775A88@ha
    lfs f2, 0x530(r3)
    stfs f2, 0x3c(r29)
    psq_st f1, 0x34(r29), 0, 0
    lwz r3, 0x48(r5)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x48(r29)
    psq_st f1, 0x40(r29), 0, 0
    lwz r3, 0x48(r5)
    stw r0, 0x50(r29)
    addi r31, r3, 0x434
    b lbl_fn_8000F1EC_00001720
lbl_fn_8000F1EC_000014D8:
    add r3, r31, r28
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r5, 0x50(r29)
    mr r18, r3
    lwz r4, 0x54(r29)
    cmplw r5, r4
    bge lbl_fn_8000F1EC_00001520
    addi r5, r5, 0x1
    lwz r4, 0x4c(r29)
    slwi r0, r5, 2
    stw r5, 0x50(r29)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_8000F1EC_00001718
lbl_fn_8000F1EC_00001520:
    subi r0, r19, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8000F1EC_00001544
    addi r4, r20, lbl_8072F924@l
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000F1EC_00001544:
    lwz r3, 0x50(r29)
    addi r4, r29, 0x54
    lwz r23, 0x54(r29)
    subi r0, r19, 0x1
    addi r3, r3, 0x1
    stw r22, 0x14(r1)
    subf r3, r23, r3
    subf r0, r23, r0
    cmplw r3, r0
    stw r22, 0x18(r1)
    stw r22, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r22, 0x24(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_8000F1EC_00001594
    addi r4, r20, lbl_8072F924@l
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000F1EC_00001594:
    addi r0, r24, 0x5555
    cmplw r23, r0
    bge lbl_fn_8000F1EC_000015DC
    addi r4, r23, 0x1
    subi r5, r25, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8000F1EC_000015D0
    addi r3, r1, 0x8
lbl_fn_8000F1EC_000015D0:
    lwz r0, 0x0(r3)
    add r16, r23, r0
    b lbl_fn_8000F1EC_00001618
lbl_fn_8000F1EC_000015DC:
    subi r0, r26, 0x5556
    cmplw r23, r0
    bge lbl_fn_8000F1EC_00001614
    addi r3, r23, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8000F1EC_00001608
    addi r3, r1, 0x8
lbl_fn_8000F1EC_00001608:
    lwz r0, 0x0(r3)
    add r16, r23, r0
    b lbl_fn_8000F1EC_00001618
lbl_fn_8000F1EC_00001614:
    subi r16, r19, 0x1
lbl_fn_8000F1EC_00001618:
    subi r0, r19, 0x1
    cmplw r16, r0
    ble lbl_fn_8000F1EC_00001638
    addi r4, r20, lbl_8072F924@l
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000F1EC_00001638:
    slwi r3, r16, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_8000F1EC_00001660
    addi r3, r21, 0xa0
    addi r4, r27, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8000F1EC_00001660:
    lwz r0, 0x50(r29)
    lwz r3, 0x18(r1)
    slwi r6, r0, 2
    stw r16, 0x1c(r1)
    addi r4, r3, 0x1
    slwi r5, r3, 2
    add r3, r23, r6
    stw r4, 0x18(r1)
    stwx r18, r5, r3
    lwz r3, 0x50(r29)
    lwz r16, 0x4c(r29)
    slwi r3, r3, 2
    add r3, r16, r3
    mr r4, r16
    subf r3, r16, r3
    srawi r3, r3, 2
    addze r18, r3
    subf r0, r18, r0
    stw r0, 0x24(r1)
    slwi r15, r18, 2
    slwi r0, r0, 2
    mr r5, r15
    add r3, r23, r0
    bl memcpy
    mr r3, r16
    mr r5, r15
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r17, 0x0
    lwz r3, 0x4c(r29)
    add r5, r0, r18
    mr r0, r23
    lwz r6, 0x54(r29)
    lwz r4, 0x1c(r1)
    stw r4, 0x54(r29)
    stw r6, 0x1c(r1)
    stw r0, 0x4c(r29)
    stw r3, 0x14(r1)
    stw r5, 0x50(r29)
    stw r22, 0x18(r1)
    beq lbl_fn_8000F1EC_00001718
    cmpwi r3, 0x0
    beq lbl_fn_8000F1EC_00001718
    stw r22, 0x18(r1)
    bl dtor_80084684
lbl_fn_8000F1EC_00001718:
    addi r30, r30, 0x1
    addi r28, r28, 0x4
lbl_fn_8000F1EC_00001720:
    lwz r0, 0x0(r31)
    cmpw r30, r0
    blt lbl_fn_8000F1EC_000014D8
    lwz r3, 0x1c(r29)
    li r4, 0x8
    lwz r3, 0x48(r3)
    bl fn_8016E970
    lwz r3, 0x1c(r29)
    li r4, 0x1
    lwz r3, 0x48(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    bl fn_800D246C
    lwz r3, 0x1c(r29)
    li r4, 0x1
    lwz r3, 0x48(r3)
    bl fn_8016E5F0
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x958(r3)
    clrrwi r0, r0, 1
    stw r0, 0x958(r3)
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    bl fn_801446F0
    lwz r3, 0x1c(r29)
    lfs f1, lbl_80880674
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    bl fn_80129A48
    lwz r3, 0x1c(r29)
    li r4, 0x0
    lwz r3, 0x48(r3)
    addi r3, r3, 0x1188
    bl fn_8011EDE0
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_8000F1EC_000017EC
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x12a4(r3)
lbl_fn_8000F1EC_000017EC:
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8000F1EC_0000180C
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
lbl_fn_8000F1EC_0000180C:
    lwz r3, 0x1c(r29)
    li r0, 0x0
    lwz r3, 0x48(r3)
    stw r0, 0xfc0(r3)
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8000F1EC_00001850
    bl fn_801539E0
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8000F1EC_00001850
    lwz r0, 0x674(r3)
    stw r0, 0x30(r29)
lbl_fn_8000F1EC_00001850:
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8000F1EC_00001888
    li r4, 0x0
    bl fn_80155DAC
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8000F1EC_00001888
    lwz r0, 0x674(r3)
    stw r0, 0x30(r29)
lbl_fn_8000F1EC_00001888:
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x139c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8000F1EC_000018A8
    li r4, 0x0
    li r5, 0x1
    bl fn_8017A33C
lbl_fn_8000F1EC_000018A8:
    lwz r3, 0x1c(r29)
    li r4, 0x0
    lwz r3, 0x48(r3)
    bl fn_80164DCC
    lwz r3, 0x1c(r29)
    lwz r3, 0x48(r3)
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8000F1EC_000018D0
    bl fn_801750FC
lbl_fn_8000F1EC_000018D0:
    lwz r3, 0x1c(r29)
    lwz r15, 0x48(r3)
    lwz r0, 0x13fc(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8000F1EC_000018F8
    mr r3, r15
    li r4, 0x0
    bl fn_8017AC44
    lwz r3, 0x13fc(r15)
    bl fn_801765D8
lbl_fn_8000F1EC_000018F8:
    li r0, -0x1
    stw r0, 0x58(r29)
    b lbl_fn_8000F1EC_00001934
lbl_fn_8000F1EC_00001904:
    lwz r4, 0x1c(r3)
    lwz r0, 0x38(r4)
    rlwimi r5, r0, 13, 16, 16
    stw r5, 0x18(r3)
    lwz r0, 0x38(r4)
    rlwimi r5, r0, 14, 17, 17
    stw r5, 0x18(r3)
    lwz r4, 0x9c(r4)
    neg r0, r4
    or r0, r0, r4
    rlwimi r5, r0, 14, 18, 18
    stw r5, 0x18(r3)
lbl_fn_8000F1EC_00001934:
    lwz r0, 0x18(r29)
    oris r0, r0, 0x8000
    stw r0, 0x18(r29)
lbl_fn_8000F1EC_00001940:
    addi r11, r1, 0x70
    bl _restgpr_15
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8000FAE4(void)
{
    nofralloc
    blr
}

asm void fn_8000FAE8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    lwz r4, 0x18(r3)
    srwi. r0, r4, 31
    beq lbl_fn_8000FAE8_00001F68
    lwz r0, 0x20(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8000FAE8_000019B0
    cmpwi r0, 0x1
    beq lbl_fn_8000FAE8_000019B0
    cmpwi r0, 0x2
    beq lbl_fn_8000FAE8_00001F10
    b lbl_fn_8000FAE8_00001F5C
lbl_fn_8000FAE8_000019B0:
    lwz r0, 0x18(r3)
    extrwi r0, r0, 1, 7
    cmplwi r0, 0x1
    beq lbl_fn_8000FAE8_00001F5C
    lwz r0, 0x18(r3)
    lwz r4, 0x1c(r3)
    extrwi r0, r0, 1, 16
    cmplwi r0, 0x1
    lwz r4, 0x48(r4)
    bne lbl_fn_8000FAE8_000019E8
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_8000FAE8_000019F4
lbl_fn_8000FAE8_000019E8:
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
lbl_fn_8000FAE8_000019F4:
    lwz r3, 0x1c(r3)
    lwz r0, 0x18(r31)
    lwz r3, 0x48(r3)
    extrwi r4, r0, 1, 17
    bl fn_800D246C
    lwz r3, 0x1c(r31)
    lwz r0, 0x18(r31)
    lwz r3, 0x48(r3)
    extrwi r4, r0, 1, 18
    bl fn_8016E4C4
    lwz r0, 0x18(r31)
    lwz r3, 0x1c(r31)
    extrwi r0, r0, 1, 19
    cmplwi r0, 0x1
    lwz r3, 0x48(r3)
    bne lbl_fn_8000FAE8_00001A44
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    b lbl_fn_8000FAE8_00001A50
lbl_fn_8000FAE8_00001A44:
    lwz r0, 0x5c0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r3)
lbl_fn_8000FAE8_00001A50:
    lwz r0, 0x18(r31)
    extrwi r0, r0, 1, 20
    cmplwi r0, 0x1
    bne lbl_fn_8000FAE8_00001A78
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    lwz r0, 0x958(r3)
    ori r0, r0, 0x1
    stw r0, 0x958(r3)
    b lbl_fn_8000FAE8_00001A8C
lbl_fn_8000FAE8_00001A78:
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    lwz r0, 0x958(r3)
    clrrwi r0, r0, 1
    stw r0, 0x958(r3)
lbl_fn_8000FAE8_00001A8C:
    lwz r0, 0x18(r31)
    extrwi r0, r0, 1, 21
    cmplwi r0, 0x1
    bne lbl_fn_8000FAE8_00001AB8
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    b lbl_fn_8000FAE8_00001AD4
lbl_fn_8000FAE8_00001AB8:
    lwz r3, 0x1c(r31)
    li r4, 0x0
    lwz r3, 0x48(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_8000FAE8_00001AD4:
    lwz r0, 0x18(r31)
    lwz r3, 0x1c(r31)
    extrwi r4, r0, 1, 22
    subi r0, r4, 0x1
    lwz r3, 0x48(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0x1230(r3)
    lwz r0, 0x18(r31)
    extrwi r4, r0, 8, 8
    cmplwi r4, 0x6
    bne lbl_fn_8000FAE8_00001B2C
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    bl fn_8016E970
    lwz r3, 0x1c(r31)
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    lwz r3, 0x48(r3)
    bl fn_8016EB48
    b lbl_fn_8000FAE8_00001B38
lbl_fn_8000FAE8_00001B2C:
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    bl fn_8016E970
lbl_fn_8000FAE8_00001B38:
    lwz r3, 0x1c(r31)
    li r28, 0x0
    lfs f31, lbl_80880678
    lwz r3, 0x48(r3)
    addi r30, r3, 0xb0
    mr r29, r30
lbl_fn_8000FAE8_00001B50:
    lwz r3, 0x22c(r29)
    subi r0, r3, 0xef
    cmplwi r0, 0x4f
    bgt lbl_fn_8000FAE8_00001B8C
    lwz r5, 0x1c(r31)
    mr r3, r30
    lfs f1, lbl_8088066C
    mr r4, r28
    lwz r5, 0x48(r5)
    li r6, 0x1
    lfs f2, lbl_80880678
    li r7, 0x0
    lwz r5, 0x484(r5)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8000FAE8_00001B8C:
    addi r28, r28, 0x1
    stfs f31, 0x240(r29)
    cmpwi r28, 0x6
    addi r29, r29, 0x30
    blt lbl_fn_8000FAE8_00001B50
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8000FAE8_00001BBC
    cmpwi r0, 0x3
    bne lbl_fn_8000FAE8_00001C00
lbl_fn_8000FAE8_00001BBC:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8000FAE8_00001C00
    lfs f1, lbl_8088066C
    mr r3, r30
    lfs f2, lbl_80880678
    li r4, 0x0
    li r5, 0x2e
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x234(r30)
lbl_fn_8000FAE8_00001C00:
    lfs f1, lbl_80880668
    mr r3, r30
    li r4, 0x4
    bl fn_80097CCC
    lfs f1, lbl_80880668
    mr r3, r30
    li r4, 0x3
    bl fn_80097CCC
    lwz r3, 0x1c(r31)
    li r4, 0x1
    lwz r3, 0x48(r3)
    addi r3, r3, 0x1188
    bl fn_8011EDE0
    mr r3, r30
    addi r4, r31, 0x24
    bl fn_80094420
    lwz r3, 0x1c(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    lwz r3, 0x48(r3)
    bl fn_80176DFC
    li r28, 0xef
lbl_fn_8000FAE8_00001C5C:
    mr r3, r30
    mr r4, r28
    bl fn_80097A20
    addi r28, r28, 0x1
    cmpwi r28, 0x13e
    ble lbl_fn_8000FAE8_00001C5C
    lis r4, lbl_8072F924@ha
    mr r3, r30
    addi r4, r4, lbl_8072F924@l
    li r5, 0x0
    addi r4, r4, 0x48
    bl fn_8009373C
    lwz r0, 0x20(r31)
    cmpwi r0, 0x7
    beq lbl_fn_8000FAE8_00001CA0
    cmpwi r0, 0x1
    bne lbl_fn_8000FAE8_00001CB4
lbl_fn_8000FAE8_00001CA0:
    lwz r3, 0x1c(r31)
    lfs f1, lbl_80880674
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    bl fn_80129A48
lbl_fn_8000FAE8_00001CB4:
    lwz r0, 0x20(r31)
    cmpwi r0, 0x7
    beq lbl_fn_8000FAE8_00001CC8
    cmpwi r0, 0x1
    bne lbl_fn_8000FAE8_00001CDC
lbl_fn_8000FAE8_00001CC8:
    lwz r3, 0x1c(r31)
    lfs f1, lbl_80880674
    lwz r3, 0x48(r3)
    addi r3, r3, 0x10d8
    bl fn_8012AC40
lbl_fn_8000FAE8_00001CDC:
    lwz r3, 0x1c(r31)
    li r0, 0x0
    lfs f0, lbl_80880668
    lwz r3, 0x48(r3)
    stb r0, 0x1200(r3)
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    stw r0, 0x1154(r3)
    stfs f0, 0x1158(r3)
    lwz r4, 0x30(r31)
    cmpwi r4, -0x1
    bne lbl_fn_8000FAE8_00001D20
    lwz r3, 0x1c(r31)
    li r4, 0x0
    lwz r3, 0x48(r3)
    bl fn_8014EEC4
    b lbl_fn_8000FAE8_00001D34
lbl_fn_8000FAE8_00001D20:
    lwz r3, 0x1c(r31)
    li r5, 0x0
    li r6, 0x0
    lwz r3, 0x48(r3)
    bl fn_8014DEE4
lbl_fn_8000FAE8_00001D34:
    lwz r3, 0x4(r31)
    lwz r0, 0x98(r3)
    extrwi. r0, r0, 1, 9
    beq lbl_fn_8000FAE8_00001DE8
    lwz r3, 0x1c(r31)
    lfs f2, 0x3c(r31)
    lwz r3, 0x48(r3)
    psq_l f1, 0x34(r31), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lwz r3, 0x1c(r31)
    lfs f2, 0x48(r31)
    lwz r3, 0x48(r3)
    psq_l f1, 0x40(r31), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    bl fn_80144710
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x24
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    addi r3, r3, 0xb0
    bl fn_8000D430
    addic. r3, r1, 0x24
    beq lbl_fn_8000FAE8_00001DD8
    lwz r4, 0x24(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8000FAE8_00001DD8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8000FAE8_00001DD0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8000FAE8_00001DD0:
    li r0, 0x0
    stw r0, 0x24(r1)
lbl_fn_8000FAE8_00001DD8:
    lwz r3, 0x1c(r31)
    lfs f1, lbl_80880668
    lwz r3, 0x48(r3)
    bl fn_80148B38
lbl_fn_8000FAE8_00001DE8:
    lwz r3, 0x1c(r31)
    li r28, 0x0
    li r30, 0x0
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    ori r0, r0, 0x80
    stw r0, 0x12a4(r3)
    lwz r3, 0x1c(r31)
    lwz r3, 0x48(r3)
    addi r29, r3, 0x434
    b lbl_fn_8000FAE8_00001E3C
lbl_fn_8000FAE8_00001E14:
    add r3, r29, r30
    lwz r4, 0x4c(r31)
    lwz r3, 0x4(r3)
    lwzx r4, r4, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r30, r30, 0x4
lbl_fn_8000FAE8_00001E3C:
    lwz r0, 0x0(r29)
    cmpw r28, r0
    blt lbl_fn_8000FAE8_00001E14
    lwz r3, 0x1c(r31)
    lwz r30, 0x48(r3)
    lwz r0, 0x13fc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8000FAE8_00001EF8
    lwz r3, 0x13fc(r30)
    bl fn_80176ACC
    lwz r3, 0x13fc(r30)
    lis r4, lbl_8072F924@ha
    addi r4, r4, lbl_8072F924@l
    li r5, 0x0
    addi r29, r3, 0xb0
    mr r3, r29
    addi r4, r4, 0x55
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8000FAE8_00001E94
    li r0, 0x0
    b lbl_fn_8000FAE8_00001EA0
lbl_fn_8000FAE8_00001E94:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r0, r3, r0
lbl_fn_8000FAE8_00001EA0:
    cmpwi r0, 0x0
    beq lbl_fn_8000FAE8_00001EAC
    stw r0, 0xf1c(r30)
lbl_fn_8000FAE8_00001EAC:
    lfs f2, lbl_80880668
    addi r4, r1, 0x8
    lfs f0, lbl_8088067C
    lwz r3, lbl_8087F430
    stfs f2, 0x8(r1)
    addi r3, r3, 0x9a8
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f2, 0x8(r3)
    psq_l f1, 0xc(r4), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    stfs f2, 0x10(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f2, 0x18(r3)
lbl_fn_8000FAE8_00001EF8:
    li r0, 0x1
    stb r0, 0x144(r31)
    stb r0, 0x145(r31)
    stb r0, 0x146(r31)
    stb r0, 0x188(r31)
    b lbl_fn_8000FAE8_00001F5C
lbl_fn_8000FAE8_00001F10:
    extrwi r0, r4, 1, 16
    lwz r4, 0x1c(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8000FAE8_00001F30
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_8000FAE8_00001F3C
lbl_fn_8000FAE8_00001F30:
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
lbl_fn_8000FAE8_00001F3C:
    lwz r0, 0x18(r31)
    lwz r3, 0x1c(r3)
    extrwi r4, r0, 1, 17
    bl fn_800D246C
    lwz r0, 0x18(r31)
    lwz r3, 0x1c(r31)
    extrwi r0, r0, 1, 18
    stw r0, 0x9c(r3)
lbl_fn_8000FAE8_00001F5C:
    lwz r0, 0x18(r31)
    clrlwi r0, r0, 1
    stw r0, 0x18(r31)
lbl_fn_8000FAE8_00001F68:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
