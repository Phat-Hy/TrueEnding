#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_80079BC8(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_800875F8(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_80087994(void);
extern void fn_80087BB4(void);
extern void fn_80087E9C(void);
extern void fn_80088FAC(void);
extern void fn_8008937C(void);
extern void fn_800C2448(void);
extern void fn_801222D4(void);
extern void fn_80184A64(void);
extern void fn_80184AD4(void);
extern void fn_80184B4C(void);
extern void fn_80184C30(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80738230[];
extern u8 lbl_80738258[];
extern u8 lbl_807382A0[];
extern u8 lbl_807382A8[];

/* Small data declarations */
extern u32 lbl_8087EED0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F0A8;
extern u32 lbl_80881CE4;
extern u32 lbl_80881CE8;
extern u32 lbl_80881CFC;
extern u32 lbl_80881D00;
extern u32 lbl_80881D04;
extern u32 lbl_80881D10;
extern u32 lbl_80881D28;
extern u32 lbl_80881D2C;
extern u32 lbl_80881D30;
extern u32 lbl_80881D3C;
extern u32 lbl_80881D90;
extern u32 lbl_80881D98;
extern u32 lbl_80881DAC;
extern u32 lbl_80881DB0;
extern u32 lbl_80881DB4;
extern u32 lbl_80881DB8;
extern u32 lbl_80881DBC;
extern u32 lbl_80881DC0;
extern u32 lbl_80881DC4;
extern u32 lbl_80881DC8;
extern u32 lbl_80881DCC;
extern u32 lbl_80881DD0;
extern u32 lbl_80881DD4;
extern u32 lbl_80881DD8;
extern u32 lbl_80881DDC;
extern u32 lbl_80881DE0;
extern u32 lbl_80881DE4;
extern u32 lbl_80881DE8;
extern u32 lbl_80881DEC;
extern u32 lbl_80881DF0;
extern u32 lbl_80881DF4;
extern u32 lbl_80881DF8;
extern u32 lbl_80881DFC;
extern u32 lbl_80881E00;
extern u32 lbl_80881E04;
extern u32 lbl_80881E08;
extern u32 lbl_80881E0C;
extern u32 lbl_80881E10;
extern u32 lbl_80881E14;
extern u32 lbl_80881E18;
extern u32 lbl_80881E1C;
extern u32 lbl_80881E20;
extern u32 lbl_80881E24;
extern u32 lbl_80881E28;
extern u32 lbl_80881E2C;
extern u32 lbl_80881E30;
extern u32 lbl_80881E34;
extern u32 lbl_80881E38;
extern u32 lbl_80881E3C;
extern u32 lbl_80881E40;
extern u32 lbl_80881E44;
extern u32 lbl_80881E48;
extern u32 lbl_80881E4C;

/* Function declarations */
void fn_80185628(void);
void fn_801856A4(void);
void fn_801856AC(void);
void fn_801856B4(void);
void fn_801856B8(void);
void fn_80185AD4(void);
void fn_80185B2C(void);
void fn_80186520(void);

asm void fn_80185628(void)
{
    nofralloc
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x8(r3), 0, 0
    lwz r6, 0x0(r4)
    stfs f2, 0x10(r3)
    lwz r5, 0x4(r4)
    psq_l f1, 0x14(r4), 0, 0
    lfs f2, 0x1c(r4)
    lwz r0, 0x20(r4)
    lfs f9, 0x24(r4)
    lfs f8, 0x28(r4)
    lfs f7, 0x2c(r4)
    lfs f6, 0x30(r4)
    lfs f5, 0x34(r4)
    lfs f4, 0x38(r4)
    lfs f3, 0x3c(r4)
    lfs f0, 0x40(r4)
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r0, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f8, 0x28(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
    blr
}

asm void fn_801856A4(void)
{
    nofralloc
    addi r3, r3, 0xc
    blr
}

asm void fn_801856AC(void)
{
    nofralloc
    addi r3, r3, 0x1c
    blr
}

asm void fn_801856B4(void)
{
    nofralloc
    blr
}

asm void fn_801856B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r5, lbl_807382A8@ha
    mr r24, r3
    addi r30, r5, lbl_807382A8@l
    mr r3, r4
    addi r4, r30, 0x14
    bl fn_8008937C
    mr r26, r3
    addi r4, r30, 0x1b
    addi r5, r24, 0xb78
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r26
    addi r4, r30, 0x29
    addi r5, r24, 0xb7c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r26
    addi r4, r30, 0x34
    bl fn_8008937C
    lfs f1, lbl_80881DAC
    mr r31, r3
    lfs f2, lbl_80881DB0
    mr r5, r24
    lfs f3, lbl_80881D2C
    addi r4, r30, 0x39
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80881DAC
    mr r3, r31
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x3f
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80881DAC
    mr r3, r31
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x46
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80881DAC
    mr r3, r31
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x4a
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80881DAC
    mr r3, r31
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x52
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x28
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80881DB4
    mr r3, r31
    lfs f2, lbl_80881DB8
    addi r4, r30, 0x5d
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x34
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    mr r3, r26
    addi r4, r30, 0x6d
    bl fn_8008937C
    lfs f1, lbl_80881DAC
    mr r31, r3
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x39
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x38
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80881DAC
    mr r3, r31
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x3f
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x40
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80881DAC
    mr r3, r31
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x46
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x48
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80881DAC
    mr r3, r31
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x4a
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x54
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80881DAC
    mr r3, r31
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x52
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x60
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80881DB4
    mr r3, r31
    lfs f2, lbl_80881DB8
    addi r4, r30, 0x5d
    lfs f3, lbl_80881D2C
    addi r5, r24, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lis r4, lbl_807382A0@ha
    lwzu r3, lbl_807382A0@l(r4)
    stw r3, 0x8(r1)
    addi r29, r1, 0x8
    lwz r0, 0x4(r4)
    addi r28, r24, 0xa8
    stw r0, 0xc(r1)
    addi r27, r24, 0x35c
    li r25, 0x0
lbl_fn_801856B8_000002D8:
    lwz r4, 0x0(r29)
    mr r3, r26
    bl fn_8008937C
    lfs f1, lbl_80881CFC
    mr r31, r3
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x73
    lfs f3, lbl_80881D10
    addi r5, r28, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_80881CFC
    mr r3, r31
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x7b
    lfs f3, lbl_80881D10
    addi r5, r28, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_80881CFC
    mr r3, r31
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x7e
    lfs f3, lbl_80881D10
    addi r5, r27, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_80881CFC
    mr r3, r31
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x8a
    lfs f3, lbl_80881D10
    addi r5, r27, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    mr r3, r31
    addi r4, r30, 0x91
    bl fn_8008937C
    mr r24, r3
    addi r4, r30, 0x95
    addi r5, r28, 0x3c
    li r6, 0x0
    li r7, 0x6
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r24
    lfs f2, lbl_80881DBC
    addi r4, r30, 0x9e
    lfs f3, lbl_80881D2C
    addi r5, r28, 0x40
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r24
    lfs f2, lbl_80881DBC
    addi r4, r30, 0xa8
    lfs f3, lbl_80881D2C
    addi r5, r28, 0x44
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r24
    lfs f2, lbl_80881D2C
    addi r4, r30, 0xb0
    lfs f3, lbl_80881D10
    addi r5, r28, 0x48
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r24
    lfs f2, lbl_80881D2C
    addi r4, r30, 0xb6
    lfs f3, lbl_80881D10
    addi r5, r28, 0x4c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r24
    lfs f2, lbl_80881D2C
    addi r4, r30, 0xbc
    lfs f3, lbl_80881D10
    addi r5, r28, 0x50
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r31
    addi r4, r30, 0xc2
    bl fn_8008937C
    mr r31, r3
    mr r3, r28
    li r4, 0x0
    bl fn_800C2448
    mr r4, r31
    bl fn_80079BC8
    addi r25, r25, 0x1
    addi r28, r28, 0x568
    cmpwi r25, 0x2
    addi r27, r27, 0x568
    addi r29, r29, 0x4
    blt lbl_fn_801856B8_000002D8
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80185AD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F0A8
    cmpwi r0, 0x0
    bne lbl_fn_80185AD4_000004F4
    lis r5, lbl_807382A8@ha
    li r3, 0x1144
    addi r5, r5, lbl_807382A8@l
    li r4, 0x1
    addi r5, r5, 0x18d
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80185AD4_000004F0
    bl fn_80185B2C
lbl_fn_80185AD4_000004F0:
    stw r3, lbl_8087F0A8
lbl_fn_80185AD4_000004F4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80185B2C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_27
    lis r4, lbl_807382A8@ha
    li r10, 0x0
    addi r4, r4, lbl_807382A8@l
    li r9, 0x1
    addi r27, r4, 0x18e
    addi r0, r3, 0x1b4
    lfs f7, lbl_80881D98
    cmplw r27, r0
    li r8, 0x1e
    lfs f6, lbl_80881DC0
    lfs f5, lbl_80881DC4
    li r7, 0x1c2
    lfs f4, lbl_80881DC8
    li r6, 0x2
    lfs f3, lbl_80881DCC
    li r5, 0xa
    lfs f2, lbl_80881D90
    li r4, 0x4b
    lfs f1, lbl_80881D00
    li r0, -0x5a
    lfs f0, lbl_80881DD0
    mr r31, r3
    stw r10, 0x0(r3)
    stw r10, 0x4(r3)
    stw r10, 0x8(r3)
    stw r9, 0xc(r3)
    stw r9, 0x10(r3)
    stw r10, 0x14(r3)
    stw r9, 0x18(r3)
    stw r10, 0x1c(r3)
    stw r9, 0x20(r3)
    stw r10, 0x24(r3)
    stw r9, 0x28(r3)
    stw r10, 0x2c(r3)
    stw r8, 0x30(r3)
    stw r10, 0x34(r3)
    stw r10, 0x38(r3)
    stw r10, 0x3c(r3)
    stw r9, 0x40(r3)
    stfs f7, 0x44(r3)
    stfs f6, 0x48(r3)
    stw r9, 0x4c(r3)
    stw r8, 0x50(r3)
    stw r10, 0x54(r3)
    stw r10, 0x58(r3)
    stw r10, 0x5c(r3)
    stw r9, 0x60(r3)
    stfs f5, 0x64(r3)
    stw r7, 0x68(r3)
    stw r9, 0x6c(r3)
    stw r6, 0x70(r3)
    stw r10, 0x74(r3)
    stw r10, 0x78(r3)
    stw r9, 0x7c(r3)
    stw r5, 0x80(r3)
    stw r10, 0x84(r3)
    stw r9, 0x88(r3)
    stfs f4, 0x8c(r3)
    stw r9, 0x90(r3)
    stw r10, 0x94(r3)
    stw r9, 0x98(r3)
    stw r4, 0x9c(r3)
    stfs f3, 0xa0(r3)
    stw r0, 0xa4(r3)
    stfs f2, 0xa8(r3)
    stfs f1, 0xac(r3)
    stw r10, 0xb0(r3)
    stw r9, 0xb4(r3)
    stw r9, 0xb8(r3)
    stw r10, 0xbc(r3)
    stfs f0, 0xc0(r3)
    stw r9, 0xc4(r3)
    stw r9, 0xc8(r3)
    stw r10, 0xcc(r3)
    stw r10, 0xd0(r3)
    stw r9, 0xd4(r3)
    stw r10, 0x158(r3)
    stw r10, 0x15c(r3)
    stw r10, 0x160(r3)
    stw r10, 0x164(r3)
    stw r10, 0x168(r3)
    stw r10, 0x16c(r3)
    stw r9, 0x170(r3)
    stw r10, 0x174(r3)
    stw r9, 0x178(r3)
    stw r9, 0x17c(r3)
    stw r9, 0x180(r3)
    stw r10, 0x184(r3)
    stw r9, 0x188(r3)
    stw r10, 0x18c(r3)
    stw r9, 0x190(r3)
    stw r10, 0x194(r3)
    stw r10, 0x198(r3)
    stw r10, 0x1b0(r3)
    beq lbl_fn_80185B2C_000006B8
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r31, 0x1b4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80185B2C_000006B8:
    lis r3, lbl_807382A8@ha
    addi r0, r31, 0x1d4
    addi r3, r3, lbl_807382A8@l
    addi r27, r3, 0x198
    cmplw r27, r0
    beq lbl_fn_80185B2C_000006EC
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r31, 0x1d4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80185B2C_000006EC:
    li r27, 0x0
    stb r27, 0x1f4(r31)
    addi r3, r31, 0x418
    bl fn_80184A64
    addi r3, r31, 0x48c
    bl fn_801222D4
    addi r3, r31, 0x4dc
    bl fn_80184B4C
    addi r3, r31, 0x53c
    bl fn_80184AD4
    li r28, 0x1
    li r6, 0x14
    li r29, 0x5a
    li r30, 0xff
    li r5, 0x12c
    li r4, 0x2e4
    li r0, 0x2d
    stw r27, 0x584(r31)
    addi r3, r31, 0x5bc
    stw r6, 0x588(r31)
    stw r29, 0x58c(r31)
    stw r30, 0x590(r31)
    stw r5, 0x594(r31)
    stw r4, 0x598(r31)
    stw r0, 0x5a4(r31)
    stw r28, 0x5a0(r31)
    stw r27, 0x5a8(r31)
    stw r28, 0x5ac(r31)
    stw r28, 0x5b0(r31)
    stw r28, 0x5b4(r31)
    stw r27, 0x5b8(r31)
    bl fn_80184C30
    lfs f7, lbl_80881CE4
    lis r3, lbl_80738258@ha
    addi r4, r3, lbl_80738258@l
    lfs f1, lbl_80881DD4
    lfs f0, lbl_80881DD8
    li r3, 0x9
    lfs f31, lbl_80881D28
    li r0, 0xa
    lfs f13, lbl_80881DDC
    lfs f12, lbl_80881DE0
    lfs f11, lbl_80881DE4
    lfs f10, lbl_80881DE8
    lfs f8, lbl_80881DEC
    lfs f9, lbl_80881D2C
    lfs f6, lbl_80881D3C
    lfs f5, lbl_80881D90
    stfs f1, 0x248(r31)
    lfs f4, 0x0(r4)
    stfs f0, 0x24c(r31)
    lfs f3, 0x4(r4)
    stw r27, 0x113c(r31)
    lfs f2, 0x8(r4)
    stb r27, 0x1140(r31)
    lfs f1, 0xc(r4)
    stw r28, 0x244(r31)
    lfs f0, 0x10(r4)
    stw r3, 0x250(r31)
    stw r29, 0x254(r31)
    stfs f31, 0x258(r31)
    stw r28, 0x25c(r31)
    stw r27, 0x260(r31)
    stfs f13, 0x264(r31)
    stfs f12, 0x268(r31)
    stfs f11, 0x26c(r31)
    stw r28, 0x270(r31)
    stw r28, 0x274(r31)
    stw r28, 0x278(r31)
    stw r28, 0x27c(r31)
    stw r28, 0x280(r31)
    stw r28, 0x284(r31)
    stw r0, 0x288(r31)
    stw r27, 0x28c(r31)
    stw r27, 0x290(r31)
    stw r27, 0x294(r31)
    stw r27, 0x298(r31)
    stw r27, 0x29c(r31)
    stw r28, 0x2a0(r31)
    stfs f10, 0x2a4(r31)
    stfs f8, 0x2a8(r31)
    stfs f9, 0x2ac(r31)
    stw r27, 0x2b0(r31)
    stfs f7, 0x2b4(r31)
    stfs f6, 0x2b8(r31)
    stfs f7, 0x2bc(r31)
    stw r27, 0x2c0(r31)
    stw r28, 0x2c4(r31)
    stfs f5, 0x2c8(r31)
    stw r27, 0x2d0(r31)
    stw r28, 0x2cc(r31)
    stfs f4, 0x2d4(r31)
    lfs f4, 0x14(r4)
    stfs f3, 0x2d8(r31)
    lfs f3, 0x18(r4)
    stfs f2, 0x2dc(r31)
    lfs f2, 0x1c(r4)
    stfs f1, 0x2e0(r31)
    lfs f1, 0x20(r4)
    stfs f0, 0x2e4(r31)
    lfs f0, 0x24(r4)
    stfs f4, 0x2e8(r31)
    stfs f3, 0x2ec(r31)
    stfs f2, 0x2f0(r31)
    stfs f1, 0x2f4(r31)
    stfs f0, 0x2f8(r31)
    lfs f0, 0x28(r4)
    fcmpo cr0, f9, f9
    stfs f0, 0x2fc(r31)
    li r3, 0x2
    lfs f5, lbl_80881DCC
    li r0, -0x1
    lfs f3, lbl_80881D30
    lfs f8, lbl_80881DC8
    lfs f7, lbl_80881DF0
    lfs f6, lbl_80881D04
    lfs f4, lbl_80881DF4
    lfs f2, lbl_80881DF8
    lfs f1, lbl_80881CFC
    lfs f0, lbl_80881DFC
    stw r27, 0x300(r31)
    stw r28, 0x304(r31)
    stw r28, 0x308(r31)
    stfs f8, 0x30c(r31)
    stfs f7, 0x310(r31)
    stw r28, 0x314(r31)
    stw r28, 0x318(r31)
    stfs f6, 0x31c(r31)
    stw r28, 0x320(r31)
    stfs f5, 0x324(r31)
    stfs f5, 0x328(r31)
    stw r27, 0x32c(r31)
    stw r27, 0x330(r31)
    stw r27, 0x214(r31)
    stw r27, 0x218(r31)
    stw r27, 0x21c(r31)
    stw r27, 0x224(r31)
    stw r28, 0x220(r31)
    stw r28, 0x228(r31)
    stw r28, 0x22c(r31)
    stw r28, 0x230(r31)
    stw r28, 0x234(r31)
    stw r28, 0x238(r31)
    stw r27, 0x23c(r31)
    stw r28, 0x240(r31)
    stfs f4, 0x334(r31)
    stw r28, 0x338(r31)
    stw r27, 0x33c(r31)
    stfs f3, 0x340(r31)
    stfs f2, 0x344(r31)
    stfs f1, 0x348(r31)
    stfs f3, 0x34c(r31)
    stw r3, 0x350(r31)
    stw r28, 0x354(r31)
    stw r28, 0x358(r31)
    stw r28, 0x35c(r31)
    stw r27, 0x360(r31)
    stw r0, 0x364(r31)
    stfs f9, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f9, 0x34(r1)
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000980
    b lbl_fn_80185B2C_000009A4
lbl_fn_80185B2C_00000980:
    fcmpo cr0, f9, f1
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000990
    b lbl_fn_80185B2C_000009A0
lbl_fn_80185B2C_00000990:
    lfs f0, lbl_80881E00
    fmadds f1, f0, f9, f3
    bl fn_80695D84
    mr r27, r3
lbl_fn_80185B2C_000009A0:
    mr r30, r27
lbl_fn_80185B2C_000009A4:
    lfs f2, 0x2c(r1)
    lfs f0, lbl_80881D2C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80185B2C_000009C0
    li r29, 0xff
    b lbl_fn_80185B2C_000009EC
lbl_fn_80185B2C_000009C0:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_000009D8
    li r3, 0x0
    b lbl_fn_80185B2C_000009E8
lbl_fn_80185B2C_000009D8:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_000009E8:
    mr r29, r3
lbl_fn_80185B2C_000009EC:
    lfs f2, 0x30(r1)
    lfs f0, lbl_80881D2C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000A08
    li r28, 0xff
    b lbl_fn_80185B2C_00000A34
lbl_fn_80185B2C_00000A08:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000A20
    li r3, 0x0
    b lbl_fn_80185B2C_00000A30
lbl_fn_80185B2C_00000A20:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000A30:
    mr r28, r3
lbl_fn_80185B2C_00000A34:
    lfs f2, 0x34(r1)
    lfs f0, lbl_80881D2C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000A50
    li r3, 0xff
    b lbl_fn_80185B2C_00000A78
lbl_fn_80185B2C_00000A50:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000A68
    li r3, 0x0
    b lbl_fn_80185B2C_00000A78
lbl_fn_80185B2C_00000A68:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000A78:
    lfs f3, lbl_80881E04
    slwi r3, r3, 24
    lfs f0, lbl_80881D2C
    slwi r0, r30, 16
    or r3, r3, r0
    lfs f2, lbl_80881E08
    slwi r0, r29, 8
    lfs f1, lbl_80881E0C
    or r0, r0, r3
    fcmpo cr0, f3, f0
    or r0, r28, r0
    stw r0, 0x368(r31)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000AC8
    li r30, 0xff
    b lbl_fn_80185B2C_00000AF4
lbl_fn_80185B2C_00000AC8:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000AE0
    li r3, 0x0
    b lbl_fn_80185B2C_00000AF0
lbl_fn_80185B2C_00000AE0:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f3, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000AF0:
    mr r30, r3
lbl_fn_80185B2C_00000AF4:
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80881D2C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000B10
    li r29, 0xff
    b lbl_fn_80185B2C_00000B3C
lbl_fn_80185B2C_00000B10:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000B28
    li r3, 0x0
    b lbl_fn_80185B2C_00000B38
lbl_fn_80185B2C_00000B28:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000B38:
    mr r29, r3
lbl_fn_80185B2C_00000B3C:
    lfs f2, 0x20(r1)
    lfs f0, lbl_80881D2C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000B58
    li r28, 0xff
    b lbl_fn_80185B2C_00000B84
lbl_fn_80185B2C_00000B58:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000B70
    li r3, 0x0
    b lbl_fn_80185B2C_00000B80
lbl_fn_80185B2C_00000B70:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000B80:
    mr r28, r3
lbl_fn_80185B2C_00000B84:
    lfs f2, 0x24(r1)
    lfs f0, lbl_80881D2C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000BA0
    li r3, 0xff
    b lbl_fn_80185B2C_00000BC8
lbl_fn_80185B2C_00000BA0:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000BB8
    li r3, 0x0
    b lbl_fn_80185B2C_00000BC8
lbl_fn_80185B2C_00000BB8:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000BC8:
    lfs f2, lbl_80881E10
    slwi r3, r3, 24
    lfs f0, lbl_80881D2C
    slwi r0, r30, 16
    or r3, r3, r0
    lfs f1, lbl_80881E14
    slwi r0, r29, 8
    fcmpo cr0, f2, f0
    or r0, r0, r3
    stfs f2, 0x8(r1)
    or r0, r28, r0
    stw r0, 0x36c(r31)
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000C14
    li r28, 0xff
    b lbl_fn_80185B2C_00000C40
lbl_fn_80185B2C_00000C14:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000C2C
    li r3, 0x0
    b lbl_fn_80185B2C_00000C3C
lbl_fn_80185B2C_00000C2C:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000C3C:
    mr r28, r3
lbl_fn_80185B2C_00000C40:
    lfs f2, 0xc(r1)
    lfs f0, lbl_80881D2C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000C5C
    li r29, 0xff
    b lbl_fn_80185B2C_00000C88
lbl_fn_80185B2C_00000C5C:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000C74
    li r3, 0x0
    b lbl_fn_80185B2C_00000C84
lbl_fn_80185B2C_00000C74:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000C84:
    mr r29, r3
lbl_fn_80185B2C_00000C88:
    lfs f2, 0x10(r1)
    lfs f0, lbl_80881D2C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000CA4
    li r30, 0xff
    b lbl_fn_80185B2C_00000CD0
lbl_fn_80185B2C_00000CA4:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000CBC
    li r3, 0x0
    b lbl_fn_80185B2C_00000CCC
lbl_fn_80185B2C_00000CBC:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000CCC:
    mr r30, r3
lbl_fn_80185B2C_00000CD0:
    lfs f2, 0x14(r1)
    lfs f0, lbl_80881D2C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80185B2C_00000CEC
    li r3, 0xff
    b lbl_fn_80185B2C_00000D14
lbl_fn_80185B2C_00000CEC:
    lfs f0, lbl_80881CFC
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80185B2C_00000D04
    li r3, 0x0
    b lbl_fn_80185B2C_00000D14
lbl_fn_80185B2C_00000D04:
    lfs f1, lbl_80881E00
    lfs f0, lbl_80881D30
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80185B2C_00000D14:
    slwi r3, r3, 24
    slwi r0, r28, 16
    or r3, r3, r0
    li r4, 0x0
    slwi r0, r29, 8
    li r5, 0x28
    or r3, r0, r3
    or r3, r30, r3
    li r0, 0x28
    li r30, 0x1
    stw r3, 0x370(r31)
    addi r3, r31, 0x37c
    stw r0, 0x374(r31)
    stw r30, 0x378(r31)
    bl memset
    addi r3, r31, 0x3a4
    li r4, 0x0
    li r5, 0x28
    bl memset
    lfs f9, lbl_80881D2C
    li r9, 0x0
    lfs f31, lbl_80881CFC
    li r10, 0x3
    lfs f12, lbl_80881E1C
    li r8, 0xf
    lfs f5, lbl_80881D00
    li r7, 0x1e
    lfs f7, lbl_80881E24
    li r6, 0x2
    lfs f6, lbl_80881D98
    li r5, 0x46
    lfs f3, lbl_80881DF0
    li r4, 0x1388
    lfs f13, lbl_80881E18
    li r0, 0x1f4
    lfs f11, lbl_80881DF8
    mr r3, r31
    lfs f10, lbl_80881D30
    lfs f8, lbl_80881E20
    lfs f4, lbl_80881E28
    lfs f2, lbl_80881E2C
    lfs f1, lbl_80881E30
    lfs f0, lbl_80881E34
    stw r10, 0x3cc(r31)
    stw r9, 0x3d0(r31)
    stw r30, 0x3d4(r31)
    stw r9, 0x3d8(r31)
    stw r30, 0x3dc(r31)
    stw r9, 0x3e0(r31)
    stw r30, 0x3e4(r31)
    stw r30, 0x3e8(r31)
    stw r9, 0x3ec(r31)
    stw r8, 0x3f0(r31)
    stw r9, 0x3f4(r31)
    stw r7, 0x3f8(r31)
    stw r9, 0x3fc(r31)
    stw r9, 0x400(r31)
    stw r6, 0x404(r31)
    stw r30, 0x408(r31)
    stfs f31, 0x40c(r31)
    stfs f13, 0x410(r31)
    stfs f31, 0x414(r31)
    stw r30, 0x454(r31)
    stw r9, 0x458(r31)
    stfs f12, 0x45c(r31)
    stfs f12, 0x460(r31)
    stfs f11, 0x464(r31)
    stfs f10, 0x468(r31)
    stfs f9, 0x46c(r31)
    stw r30, 0x470(r31)
    stw r30, 0x474(r31)
    stw r9, 0x478(r31)
    stw r9, 0x47c(r31)
    stw r30, 0x480(r31)
    stfs f8, 0x484(r31)
    stw r9, 0x488(r31)
    stfs f7, 0xd8(r31)
    stw r9, 0xdc(r31)
    stfs f7, 0xe0(r31)
    stw r9, 0xe4(r31)
    stfs f6, 0xe8(r31)
    stw r9, 0xec(r31)
    stfs f6, 0xf0(r31)
    stw r9, 0xf4(r31)
    stfs f9, 0xf8(r31)
    stw r9, 0xfc(r31)
    stfs f9, 0x100(r31)
    stw r9, 0x104(r31)
    stfs f9, 0x108(r31)
    stw r9, 0x10c(r31)
    stfs f9, 0x110(r31)
    stw r9, 0x114(r31)
    stfs f5, 0x118(r31)
    stw r9, 0x11c(r31)
    stfs f5, 0x120(r31)
    stw r9, 0x124(r31)
    stfs f5, 0x128(r31)
    stw r9, 0x12c(r31)
    stfs f4, 0x130(r31)
    stw r9, 0x134(r31)
    stfs f9, 0x138(r31)
    stw r9, 0x13c(r31)
    stfs f12, 0x140(r31)
    stw r5, 0x144(r31)
    stfs f3, 0x148(r31)
    stw r4, 0x14c(r31)
    stfs f2, 0x150(r31)
    stw r0, 0x154(r31)
    stfs f9, 0x19c(r31)
    stfs f1, 0x1a0(r31)
    stfs f0, 0x1a4(r31)
    stfs f3, 0x1a8(r31)
    stfs f31, 0x1ac(r31)
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80186520(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    lwz r0, 0x0(r3)
    lis r4, lbl_807382A8@ha
    addi r4, r4, lbl_807382A8@l
    mr r31, r3
    cmpwi r0, 0x0
    addi r4, r4, 0x1a7
    bne lbl_fn_80186520_00000F48
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80186520_00000F48
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x0(r31)
    mr r29, r3
    b lbl_fn_80186520_00000F4C
lbl_fn_80186520_00000F48:
    li r29, 0x0
lbl_fn_80186520_00000F4C:
    lis r4, lbl_807382A8@ha
    mr r3, r29
    addi r30, r4, lbl_807382A8@l
    addi r5, r31, 0x4
    addi r4, r30, 0x1ae
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x1bd
    addi r5, r31, 0x184
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x1ca
    bl fn_8008937C
    lfs f1, lbl_80881E38
    mr r26, r3
    lfs f2, lbl_80881E3C
    addi r4, r30, 0x1d6
    lfs f3, lbl_80881D90
    addi r5, r31, 0x19c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881E38
    mr r3, r26
    lfs f2, lbl_80881E3C
    addi r4, r30, 0x1df
    lfs f3, lbl_80881D90
    addi r5, r31, 0x1a0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881D90
    mr r3, r26
    lfs f2, lbl_80881DB8
    addi r4, r30, 0x1e7
    fmr f3, f1
    addi r5, r31, 0x1a4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_80881E38
    mr r3, r26
    lfs f2, lbl_80881E3C
    addi r4, r30, 0x1f3
    lfs f3, lbl_80881D90
    addi r5, r31, 0x1a8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881E38
    mr r3, r26
    lfs f2, lbl_80881E3C
    addi r4, r30, 0x1fd
    lfs f3, lbl_80881D90
    addi r5, r31, 0x1ac
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0x202
    bl fn_8008937C
    mr r26, r3
    addi r4, r30, 0x212
    addi r5, r31, 0xd4
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x21f
    bl fn_8008937C
    lfs f1, lbl_80881CFC
    mr r28, r3
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xcb
    lfs f3, lbl_80881D90
    addi r5, r31, 0xd8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xd4
    addi r5, r31, 0xdc
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xdd
    lfs f3, lbl_80881D90
    addi r5, r31, 0xe0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xea
    addi r5, r31, 0xe4
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xf7
    lfs f3, lbl_80881D90
    addi r5, r31, 0xe8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xfd
    addi r5, r31, 0xec
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x103
    lfs f3, lbl_80881D90
    addi r5, r31, 0xf0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x10a
    addi r5, r31, 0xf4
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x224
    bl fn_8008937C
    lfs f1, lbl_80881CFC
    mr r28, r3
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xcb
    lfs f3, lbl_80881D90
    addi r5, r31, 0xf8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xd4
    addi r5, r31, 0xfc
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xdd
    lfs f3, lbl_80881D90
    addi r5, r31, 0x100
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xea
    addi r5, r31, 0x104
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xf7
    lfs f3, lbl_80881D90
    addi r5, r31, 0x108
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xfd
    addi r5, r31, 0x10c
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x103
    lfs f3, lbl_80881D90
    addi r5, r31, 0x110
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x10a
    addi r5, r31, 0x114
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x22b
    bl fn_8008937C
    lfs f1, lbl_80881CFC
    mr r28, r3
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xcb
    lfs f3, lbl_80881D90
    addi r5, r31, 0x118
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xd4
    addi r5, r31, 0x11c
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xdd
    lfs f3, lbl_80881D90
    addi r5, r31, 0x120
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xea
    addi r5, r31, 0x124
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xf7
    lfs f3, lbl_80881D90
    addi r5, r31, 0x128
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xfd
    addi r5, r31, 0x12c
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x103
    lfs f3, lbl_80881D90
    addi r5, r31, 0x130
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x10a
    addi r5, r31, 0x134
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r26
    addi r4, r30, 0x230
    bl fn_8008937C
    lfs f1, lbl_80881CFC
    mr r28, r3
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xcb
    lfs f3, lbl_80881D90
    addi r5, r31, 0x138
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xd4
    addi r5, r31, 0x13c
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xdd
    lfs f3, lbl_80881D90
    addi r5, r31, 0x140
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xea
    addi r5, r31, 0x144
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0xf7
    lfs f3, lbl_80881D90
    addi r5, r31, 0x148
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0xfd
    addi r5, r31, 0x14c
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x103
    lfs f3, lbl_80881D90
    addi r5, r31, 0x150
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x10a
    addi r5, r31, 0x154
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x239
    bl fn_8008937C
    mr r28, r3
    addi r4, r30, 0x114
    addi r5, r31, 0x584
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x11e
    addi r5, r31, 0x588
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x12c
    addi r5, r31, 0x58c
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x13b
    addi r5, r31, 0x590
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x14c
    addi r5, r31, 0x594
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x15f
    addi r5, r31, 0x598
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x23f
    bl fn_8008937C
    mr r28, r3
    addi r4, r30, 0x170
    addi r5, r31, 0x5a0
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x17d
    addi r5, r31, 0x5a4
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lis r6, 0x2
    mr r3, r29
    subi r7, r6, 0x7960
    addi r4, r30, 0x248
    la r5, lbl_8087EED0
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x256
    addi r5, r31, 0x164
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x264
    bl fn_8008937C
    mr r27, r3
    addi r4, r30, 0x26b
    addi r5, r31, 0x304
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x27e
    addi r5, r31, 0x250
    li r6, 0x0
    li r7, 0x10
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r27
    addi r4, r30, 0x28e
    addi r5, r31, 0x254
    li r6, 0x0
    li r7, 0x3e7
    li r8, 0x5
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x2a5
    lfs f3, lbl_80881D90
    addi r5, r31, 0x258
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881DBC
    addi r4, r30, 0x2b6
    lfs f3, lbl_80881CE4
    addi r5, r31, 0x264
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881DBC
    addi r4, r30, 0x2c0
    lfs f3, lbl_80881CE4
    addi r5, r31, 0x268
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881DB8
    addi r4, r30, 0x2d1
    lfs f3, lbl_80881DC8
    addi r5, r31, 0x26c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    mr r3, r27
    addi r4, r30, 0x2dd
    addi r5, r31, 0x314
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x2e9
    lfs f3, lbl_80881D10
    addi r5, r31, 0x31c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r27
    addi r4, r30, 0x2f5
    addi r5, r31, 0x280
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x307
    addi r5, r31, 0x288
    li r6, 0x0
    li r7, 0x1
    li r8, 0x64
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r27
    addi r4, r30, 0x310
    addi r5, r31, 0x290
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x31f
    addi r5, r31, 0x294
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r27
    addi r4, r30, 0x32f
    addi r5, r31, 0x298
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x33d
    addi r5, r31, 0x29c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x34a
    lfs f3, lbl_80881D10
    addi r5, r31, 0x2a4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881DB8
    addi r4, r30, 0x35e
    lfs f3, lbl_80881D10
    addi r5, r31, 0x2a8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881CE8
    addi r4, r30, 0x371
    lfs f3, lbl_80881D10
    addi r5, r31, 0x2ac
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r27
    addi r4, r30, 0x380
    addi r5, r31, 0x2b0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881CE8
    addi r4, r30, 0x38e
    lfs f3, lbl_80881D10
    addi r5, r31, 0x2b4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881CE8
    addi r4, r30, 0x39e
    lfs f3, lbl_80881D10
    addi r5, r31, 0x2b8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881CE8
    addi r4, r30, 0x3b0
    lfs f3, lbl_80881D10
    addi r5, r31, 0x2bc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r27
    addi r4, r30, 0x3be
    addi r5, r31, 0x2c0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r30, 0x3ce
    addi r5, r31, 0x2c4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x3d9
    lfs f3, lbl_80881D10
    addi r5, r31, 0x2c8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r27
    addi r4, r30, 0x3e9
    bl fn_8008937C
    mr r28, r3
    addi r4, r30, 0x3f7
    addi r5, r31, 0x2d0
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x3fc
    addi r5, r31, 0x2cc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    addi r26, r31, 0x2d4
    li r25, 0x0
lbl_fn_80186520_00001A1C:
    addi r3, r1, 0x8
    addi r4, r30, 0x409
    subi r5, r25, 0x5
    crclr 6
    bl sprintf
    lfs f1, lbl_80881CFC
    mr r3, r28
    lfs f2, lbl_80881CE4
    mr r5, r26
    lfs f3, lbl_80881D10
    addi r4, r1, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmpwi r25, 0xb
    blt lbl_fn_80186520_00001A1C
    lis r4, lbl_807382A8@ha
    mr r3, r27
    addi r30, r4, lbl_807382A8@l
    addi r5, r31, 0x308
    addi r4, r30, 0x40f
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x41d
    lfs f3, lbl_80881D10
    addi r5, r31, 0x30c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x42f
    lfs f3, lbl_80881D10
    addi r5, r31, 0x310
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r27
    addi r4, r30, 0x43f
    addi r5, r31, 0x320
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x449
    lfs f3, lbl_80881D10
    addi r5, r31, 0x324
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r27
    lfs f2, lbl_80881DB0
    addi r4, r30, 0x459
    lfs f3, lbl_80881D10
    addi r5, r31, 0x328
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r27
    addi r4, r30, 0x46c
    addi r5, r31, 0x32c
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x478
    addi r5, r31, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x48b
    addi r5, r31, 0x3c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x49a
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x4a5
    addi r5, r31, 0x214
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x4ad
    addi r5, r31, 0x218
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x4b7
    addi r5, r31, 0x21c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x4c1
    addi r5, r31, 0x224
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x4d2
    addi r5, r31, 0x220
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x4dc
    addi r5, r31, 0x228
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x4eb
    addi r5, r31, 0x22c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x4f4
    addi r5, r31, 0x230
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x500
    addi r5, r31, 0x234
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x507
    addi r5, r31, 0x238
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x50f
    addi r5, r31, 0x23c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x519
    addi r5, r31, 0x240
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r4, r29
    addi r3, r31, 0x5bc
    bl fn_801856B8
    mr r3, r29
    addi r4, r30, 0x520
    addi r5, r31, 0x28
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x530
    addi r5, r31, 0xc4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x539
    addi r5, r31, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x547
    addi r5, r31, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x555
    addi r5, r31, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x568
    addi r5, r31, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x57a
    addi r5, r31, 0x34
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x589
    addi r5, r31, 0x58
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x597
    addi r5, r31, 0x38
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x5a8
    addi r5, r31, 0x18
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x5b0
    addi r5, r31, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x5be
    addi r5, r31, 0x20
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x5c8
    addi r5, r31, 0x54
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x5d8
    addi r5, r31, 0x5c
    li r6, 0x0
    li r7, 0xa
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x5e5
    addi r5, r31, 0x174
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x5f5
    addi r5, r31, 0x70
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x60a
    bl fn_8008937C
    lfs f1, lbl_80881CFC
    mr r25, r3
    lfs f2, lbl_80881DB8
    addi r4, r30, 0x610
    lfs f3, lbl_80881CE4
    addi r5, r31, 0x334
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    mr r3, r25
    addi r4, r30, 0x616
    addi r5, r31, 0x338
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x622
    addi r5, r31, 0x33c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881CFC
    mr r3, r25
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x62c
    lfs f3, lbl_80881D10
    addi r5, r31, 0x340
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r25
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x63d
    lfs f3, lbl_80881D10
    addi r5, r31, 0x344
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r25
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x64f
    lfs f3, lbl_80881D10
    addi r5, r31, 0x348
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r25
    lfs f2, lbl_80881D2C
    addi r4, r30, 0x659
    lfs f3, lbl_80881D10
    addi r5, r31, 0x34c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0x669
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x66e
    addi r5, r31, 0x350
    li r6, 0x0
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x681
    addi r5, r31, 0x354
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x68a
    addi r5, r31, 0x358
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x69a
    addi r5, r31, 0x35c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x6a8
    addi r5, r31, 0x360
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x6b8
    addi r5, r31, 0x364
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800875F8
    mr r3, r25
    addi r4, r30, 0x6c8
    addi r5, r31, 0x368
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800875F8
    mr r3, r25
    addi r4, r30, 0x6d7
    addi r5, r31, 0x36c
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800875F8
    mr r3, r25
    addi r4, r30, 0x6e7
    addi r5, r31, 0x370
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800875F8
    mr r3, r25
    addi r4, r30, 0x6f6
    addi r5, r31, 0x374
    li r6, 0x0
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x706
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x4a5
    addi r5, r31, 0x378
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r28, lbl_80738230@ha
    addi r27, r31, 0x37c
    addi r28, r28, lbl_80738230@l
    addi r26, r31, 0x3a4
    li r24, 0x0
lbl_fn_80186520_000020C8:
    lwz r4, 0x0(r28)
    mr r3, r25
    bl fn_8008937C
    mr r23, r3
    mr r5, r27
    addi r4, r30, 0x715
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r23
    mr r5, r26
    addi r4, r30, 0x71b
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    addi r24, r24, 0x1
    addi r27, r27, 0x4
    cmpwi r24, 0xa
    addi r26, r26, 0x4
    addi r28, r28, 0x4
    blt lbl_fn_80186520_000020C8
    lis r30, lbl_807382A8@ha
    mr r3, r29
    addi r30, r30, lbl_807382A8@l
    addi r4, r30, 0x720
    bl fn_8008937C
    mr r23, r3
    addi r4, r30, 0x72c
    addi r5, r31, 0x3cc
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r23
    addi r4, r30, 0x737
    addi r5, r31, 0x3d0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x741
    addi r5, r31, 0x3d4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x74d
    addi r5, r31, 0x3d8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x757
    addi r5, r31, 0x3dc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x766
    addi r5, r31, 0x3e0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x772
    addi r5, r31, 0x3e4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x77b
    addi r5, r31, 0x3e8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x783
    addi r5, r31, 0x3ec
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x791
    addi r5, r31, 0x3f0
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r23
    addi r4, r30, 0x7a4
    addi r5, r31, 0x3f4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x7ad
    addi r5, r31, 0x3f8
    li r6, 0x0
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r23
    addi r4, r30, 0x7bb
    addi r5, r31, 0x3fc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x7c5
    addi r5, r31, 0x400
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x7cf
    addi r5, r31, 0x404
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r23
    addi r4, r30, 0x7dd
    addi r5, r31, 0x408
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881E40
    mr r3, r23
    lfs f2, lbl_80881E44
    addi r4, r30, 0x7e7
    lfs f3, lbl_80881E48
    addi r5, r31, 0x40c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881E40
    mr r3, r23
    lfs f2, lbl_80881E44
    addi r4, r30, 0x7f8
    lfs f3, lbl_80881E48
    addi r5, r31, 0x410
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881E40
    mr r3, r23
    lfs f2, lbl_80881E44
    addi r4, r30, 0x808
    lfs f3, lbl_80881E48
    addi r5, r31, 0x414
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0x816
    bl fn_8008937C
    mr r23, r3
    addi r4, r30, 0x4a5
    addi r5, r31, 0x454
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x81f
    addi r5, r31, 0x458
    li r6, 0x0
    li r7, 0xa
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80881CFC
    mr r3, r23
    lfs f2, lbl_80881CE4
    addi r4, r30, 0x824
    lfs f3, lbl_80881D90
    addi r5, r31, 0x45c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r23
    lfs f2, lbl_80881CE4
    addi r4, r30, 0x836
    lfs f3, lbl_80881D90
    addi r5, r31, 0x460
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r23
    lfs f2, lbl_80881CE4
    addi r4, r30, 0x847
    lfs f3, lbl_80881D90
    addi r5, r31, 0x464
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r23
    lfs f2, lbl_80881CE4
    addi r4, r30, 0x852
    lfs f3, lbl_80881D90
    addi r5, r31, 0x468
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881CFC
    mr r3, r23
    lfs f2, lbl_80881CE4
    addi r4, r30, 0x862
    lfs f3, lbl_80881D90
    addi r5, r31, 0x46c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0x871
    bl fn_8008937C
    mr r23, r3
    addi r4, r30, 0x874
    addi r5, r31, 0x470
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x881
    addi r5, r31, 0x474
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x890
    addi r5, r31, 0x480
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x89d
    addi r5, r31, 0x478
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r23
    addi r4, r30, 0x8af
    addi r5, r31, 0x47c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881E4C
    mr r3, r23
    lfs f2, lbl_80881DBC
    addi r4, r30, 0x8bd
    lfs f3, lbl_80881D2C
    addi r5, r31, 0x484
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r23
    addi r4, r30, 0x8af
    addi r5, r31, 0x488
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x8c9
    addi r5, r31, 0x4c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x8da
    addi r5, r31, 0x74
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x8ea
    addi r5, r31, 0x168
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x8fa
    addi r5, r31, 0x16c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x911
    addi r5, r31, 0x170
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x91e
    addi r5, r31, 0x178
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x930
    addi r5, r31, 0x17c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x93f
    addi r5, r31, 0x180
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x956
    addi r5, r31, 0x190
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
