#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void IOS_Ioctlv(void);
extern void IOS_Open(void);
extern void OSDisableInterrupts(void);
extern void OSGetCurrentThread(void);
extern void OSRegisterVersion(void);
extern void OSRestoreInterrupts(void);
extern void OSSleepTicks(void);
extern void __OSGetSystemTime(void);
extern void __div2i(void);
extern void __va_arg(void);
extern void _restgpr_14(void);
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8061C8A0(void);
extern void fn_8061D080(void);
extern void fn_80697F84(void);
extern void fn_80698A2C(void);
extern void fn_80698DEC(void);
extern void fn_806A1A80(void);
extern void fn_806A1A90(void);
extern void fn_806A1AA0(void);
extern void fn_806A1AB0(void);
extern void fn_806A222C(void);
extern void fn_806A2288(void);
extern void fn_806A4530(void);
extern void fn_806A475C(void);
extern void fn_806A4D60(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807BCAC0[];
extern u8 jumptable_807BCB48[];
extern u8 jumptable_807BCBD0[];
extern u8 lbl_807BCA4C[];
extern u8 lbl_807BCAB0[];
extern u8 lbl_807BCC94[];
extern u8 lbl_808340A0[];
extern u8 lbl_808340C0[];
extern u8 lbl_808340E0[];
extern u8 lbl_808340F8[];

/* Small data declarations */
extern u32 lbl_8087EDD8;
extern u32 lbl_8087EDE0;
extern u32 lbl_8087EDE4;
extern u32 lbl_8087EDE8;
extern u32 lbl_80880428;
extern u32 lbl_8088042C;
extern u32 lbl_80880430;
extern u32 lbl_80880438;
extern u32 lbl_8088043C;
extern u32 lbl_80880440;
extern u32 lbl_80880448;

/* Function declarations */
void fn_806A236C(void);
void fn_806A243C(void);
void fn_806A24DC(void);
void fn_806A257C(void);
void fn_806A264C(void);
void fn_806A2790(void);
void fn_806A295C(void);
void fn_806A2A58(void);
void fn_806A2A64(void);
void fn_806A2E8C(void);
void fn_806A303C(void);
void fn_806A3048(void);
void fn_806A3050(void);
void fn_806A30A0(void);
void fn_806A3188(void);
void fn_806A31BC(void);
void fn_806A32A4(void);
void fn_806A3300(void);
void fn_806A35D8(void);
void fn_806A36BC(void);
void fn_806A37F4(void);
void fn_806A38C8(void);
void fn_806A39B8(void);
void fn_806A3A5C(void);
void fn_806A3B44(void);
void fn_806A3C2C(void);
void fn_806A3D28(void);
void fn_806A3D50(void);
void fn_806A3D74(void);
void fn_806A3D9C(void);
void fn_806A3DC0(void);
void fn_806A3EF0(void);
void fn_806A3FA4(void);
void fn_806A4100(void);
void fn_806A420C(void);
void fn_806A4260(void);
void fn_806A4264(void);
void fn_806A426C(void);
void fn_806A4270(void);
void fn_806A4278(void);

asm void fn_806A236C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_806A236C_0000001C
    li r3, 0x1
    b lbl_fn_806A236C_000000C0
lbl_fn_806A236C_0000001C:
    lwz r0, lbl_8088042C
    cmpwi r0, 0x0
    beq lbl_fn_806A236C_00000078
    bl fn_806A2288
    cmpwi r3, 0x0
    beq lbl_fn_806A236C_0000003C
    li r3, 0x0
    b lbl_fn_806A236C_000000C0
lbl_fn_806A236C_0000003C:
    lwz r0, lbl_80880430
    cmpwi r0, 0x0
    blt lbl_fn_806A236C_00000050
    li r3, 0x1
    b lbl_fn_806A236C_000000C0
lbl_fn_806A236C_00000050:
    lwz r3, lbl_80880428
    cmpwi r3, 0x0
    ble lbl_fn_806A236C_00000070
    subi r0, r3, 0x1
    li r3, 0x0
    stw r3, lbl_8088042C
    stw r0, lbl_80880428
    b lbl_fn_806A236C_000000BC
lbl_fn_806A236C_00000070:
    li r3, 0x1
    b lbl_fn_806A236C_000000C0
lbl_fn_806A236C_00000078:
    lis r5, lbl_808340A0@ha
    lis r3, lbl_807BCA4C@ha
    stw r4, lbl_808340A0@l(r5)
    lis r8, lbl_808340C0@ha
    addi r6, r5, lbl_808340A0@l
    lwz r4, lbl_8087EDD8
    addi r3, r3, lbl_807BCA4C@l
    addi r8, r8, lbl_808340C0@l
    li r5, 0x28
    li r7, 0x20
    li r9, 0x20
    la r10, lbl_80880430
    bl fn_806A222C
    cmpwi r3, 0x0
    blt lbl_fn_806A236C_000000BC
    li r0, 0x1
    stw r0, lbl_8088042C
lbl_fn_806A236C_000000BC:
    li r3, 0x0
lbl_fn_806A236C_000000C0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A243C(void)
{
    nofralloc
    li r0, 0x100
    li r6, 0x0
    mtctr r0
lbl_fn_806A243C_000000DC:
    rlwinm. r0, r6, 0, 24, 24
    slwi r5, r6, 1
    beq lbl_fn_806A243C_000000EC
    xor r5, r5, r4
lbl_fn_806A243C_000000EC:
    rlwinm. r0, r5, 0, 24, 24
    slwi r5, r5, 1
    beq lbl_fn_806A243C_000000FC
    xor r5, r5, r4
lbl_fn_806A243C_000000FC:
    rlwinm. r0, r5, 0, 24, 24
    slwi r5, r5, 1
    beq lbl_fn_806A243C_0000010C
    xor r5, r5, r4
lbl_fn_806A243C_0000010C:
    rlwinm. r0, r5, 0, 24, 24
    slwi r5, r5, 1
    beq lbl_fn_806A243C_0000011C
    xor r5, r5, r4
lbl_fn_806A243C_0000011C:
    rlwinm. r0, r5, 0, 24, 24
    slwi r5, r5, 1
    beq lbl_fn_806A243C_0000012C
    xor r5, r5, r4
lbl_fn_806A243C_0000012C:
    rlwinm. r0, r5, 0, 24, 24
    slwi r5, r5, 1
    beq lbl_fn_806A243C_0000013C
    xor r5, r5, r4
lbl_fn_806A243C_0000013C:
    rlwinm. r0, r5, 0, 24, 24
    slwi r5, r5, 1
    beq lbl_fn_806A243C_0000014C
    xor r5, r5, r4
lbl_fn_806A243C_0000014C:
    rlwinm. r0, r5, 0, 24, 24
    slwi r5, r5, 1
    beq lbl_fn_806A243C_0000015C
    xor r5, r5, r4
lbl_fn_806A243C_0000015C:
    stb r5, 0x0(r3)
    addi r6, r6, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_806A243C_000000DC
    blr
}

asm void fn_806A24DC(void)
{
    nofralloc
    li r0, 0x100
    li r6, 0x0
    mtctr r0
lbl_fn_806A24DC_0000017C:
    clrlwi. r0, r6, 31
    srwi r5, r6, 1
    beq lbl_fn_806A24DC_0000018C
    xor r5, r5, r4
lbl_fn_806A24DC_0000018C:
    clrlwi. r0, r5, 31
    srwi r5, r5, 1
    beq lbl_fn_806A24DC_0000019C
    xor r5, r5, r4
lbl_fn_806A24DC_0000019C:
    clrlwi. r0, r5, 31
    srwi r5, r5, 1
    beq lbl_fn_806A24DC_000001AC
    xor r5, r5, r4
lbl_fn_806A24DC_000001AC:
    clrlwi. r0, r5, 31
    srwi r5, r5, 1
    beq lbl_fn_806A24DC_000001BC
    xor r5, r5, r4
lbl_fn_806A24DC_000001BC:
    clrlwi. r0, r5, 31
    srwi r5, r5, 1
    beq lbl_fn_806A24DC_000001CC
    xor r5, r5, r4
lbl_fn_806A24DC_000001CC:
    clrlwi. r0, r5, 31
    srwi r5, r5, 1
    beq lbl_fn_806A24DC_000001DC
    xor r5, r5, r4
lbl_fn_806A24DC_000001DC:
    clrlwi. r0, r5, 31
    srwi r5, r5, 1
    beq lbl_fn_806A24DC_000001EC
    xor r5, r5, r4
lbl_fn_806A24DC_000001EC:
    clrlwi. r0, r5, 31
    srwi r5, r5, 1
    beq lbl_fn_806A24DC_000001FC
    xor r5, r5, r4
lbl_fn_806A24DC_000001FC:
    stw r5, 0x0(r3)
    addi r3, r3, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_806A24DC_0000017C
    blr
}

asm void fn_806A257C(void)
{
    nofralloc
    cmpwi r5, 0x0
    li r7, 0x0
    li r11, 0x0
    beq lbl_fn_806A257C_000002D8
    cmplwi r5, 0x8
    subi r6, r5, 0x8
    ble lbl_fn_806A257C_000002B0
    addi r0, r6, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r6, 0x0
    ble lbl_fn_806A257C_000002B0
lbl_fn_806A257C_00000240:
    lbz r0, 0x0(r4)
    addi r11, r11, 0x8
    lbz r6, 0x1(r4)
    xor r7, r7, r0
    lbz r0, 0x2(r4)
    clrlwi r7, r7, 24
    lbz r9, 0x3(r4)
    lbzx r7, r3, r7
    lbz r8, 0x4(r4)
    xor r6, r7, r6
    lbz r7, 0x5(r4)
    lbzx r10, r3, r6
    lbz r6, 0x6(r4)
    xor r10, r10, r0
    lbz r0, 0x7(r4)
    lbzx r10, r3, r10
    addi r4, r4, 0x8
    xor r9, r10, r9
    lbzx r9, r3, r9
    xor r8, r9, r8
    lbzx r8, r3, r8
    xor r7, r8, r7
    lbzx r7, r3, r7
    xor r6, r7, r6
    lbzx r6, r3, r6
    xor r0, r6, r0
    lbzx r7, r3, r0
    bdnz lbl_fn_806A257C_00000240
lbl_fn_806A257C_000002B0:
    subf r0, r11, r5
    mtctr r0
    cmplw r11, r5
    bge lbl_fn_806A257C_000002D8
lbl_fn_806A257C_000002C0:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    xor r0, r7, r0
    clrlwi r0, r0, 24
    lbzx r7, r3, r0
    bdnz lbl_fn_806A257C_000002C0
lbl_fn_806A257C_000002D8:
    mr r3, r7
    blr
}

asm void fn_806A264C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    cmpwi r5, 0x0
    li r9, -0x1
    li r6, 0x0
    stw r31, 0xc(r1)
    beq lbl_fn_806A264C_00000414
    cmplwi r5, 0x8
    subi r7, r5, 0x8
    ble lbl_fn_806A264C_000003E4
    addi r0, r7, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_fn_806A264C_000003E4
lbl_fn_806A264C_00000318:
    lbz r7, 0x0(r4)
    srwi r8, r9, 8
    lbz r0, 0x1(r4)
    addi r6, r6, 0x8
    xor r7, r9, r7
    lbz r11, 0x2(r4)
    clrlslwi r7, r7, 24, 2
    lbz r10, 0x3(r4)
    lwzx r7, r3, r7
    lbz r9, 0x4(r4)
    xor r31, r8, r7
    lbz r8, 0x5(r4)
    xor r0, r31, r0
    lbz r7, 0x6(r4)
    clrlslwi r12, r0, 24, 2
    lbz r0, 0x7(r4)
    lwzx r12, r3, r12
    srwi r31, r31, 8
    addi r4, r4, 0x8
    xor r12, r31, r12
    xor r11, r12, r11
    clrlslwi r11, r11, 24, 2
    srwi r12, r12, 8
    lwzx r11, r3, r11
    xor r11, r12, r11
    xor r10, r11, r10
    clrlslwi r10, r10, 24, 2
    srwi r11, r11, 8
    lwzx r10, r3, r10
    xor r10, r11, r10
    xor r9, r10, r9
    clrlslwi r9, r9, 24, 2
    srwi r10, r10, 8
    lwzx r9, r3, r9
    xor r9, r10, r9
    xor r8, r9, r8
    clrlslwi r8, r8, 24, 2
    srwi r9, r9, 8
    lwzx r8, r3, r8
    xor r8, r9, r8
    xor r7, r8, r7
    clrlslwi r7, r7, 24, 2
    srwi r8, r8, 8
    lwzx r7, r3, r7
    xor r7, r8, r7
    xor r0, r7, r0
    clrlslwi r0, r0, 24, 2
    srwi r7, r7, 8
    lwzx r0, r3, r0
    xor r9, r7, r0
    bdnz lbl_fn_806A264C_00000318
lbl_fn_806A264C_000003E4:
    subf r0, r6, r5
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_806A264C_00000414
lbl_fn_806A264C_000003F4:
    lbz r0, 0x0(r4)
    srwi r5, r9, 8
    addi r4, r4, 0x1
    xor r0, r9, r0
    clrlslwi r0, r0, 24, 2
    lwzx r0, r3, r0
    xor r9, r5, r0
    bdnz lbl_fn_806A264C_000003F4
lbl_fn_806A264C_00000414:
    lwz r31, 0xc(r1)
    nor r3, r9, r9
    addi r1, r1, 0x10
    blr
}

asm void fn_806A2790(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    li r31, 0x0
    bl OSDisableInterrupts
    lwz r0, lbl_80880440
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_fn_806A2790_00000468
    lwz r3, lbl_8087EDE0
    bl OSRegisterVersion
    lwz r0, lbl_80880440
    ori r0, r0, 0x1
    stw r0, lbl_80880440
lbl_fn_806A2790_00000468:
    lbz r0, lbl_80880438
    cmpwi r0, 0x0
    beq lbl_fn_806A2790_00000488
    blt lbl_fn_806A2790_00000488
    cmpwi r0, 0x3
    bge lbl_fn_806A2790_00000488
    li r31, -0x7
    b lbl_fn_806A2790_000005B4
lbl_fn_806A2790_00000488:
    cmpwi r27, 0x0
    beq lbl_fn_806A2790_000004A8
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_806A2790_000004A8
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_fn_806A2790_000004B0
lbl_fn_806A2790_000004A8:
    li r31, -0x1c
    b lbl_fn_806A2790_000005B4
lbl_fn_806A2790_000004B0:
    lis r28, lbl_808340E0@ha
    li r4, 0x0
    addi r3, r28, lbl_808340E0@l
    li r5, 0x18
    bl fn_80698DEC
    lwz r12, 0x0(r27)
    addi r29, r28, lbl_808340E0@l
    li r4, 0x0
    li r3, -0x2
    stw r12, lbl_808340E0@l(r28)
    cmpwi r12, 0x0
    li r0, -0x1
    lwz r5, 0x4(r27)
    stw r5, 0x4(r29)
    stw r4, 0x14(r29)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    beq lbl_fn_806A2790_00000588
    li r3, 0xb
    li r4, 0x460
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_806A2790_0000058C
    lwz r4, 0x14(r29)
    lwz r0, lbl_8087EDE4
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    stw r4, 0x14(r29)
    beq lbl_fn_806A2790_0000058C
    clrlwi r4, r3, 3
    lis r0, 0x1000
    cmplw r4, r0
    blt lbl_fn_806A2790_00000544
    lis r0, 0x1800
    cmplw r4, r0
    blt lbl_fn_806A2790_0000058C
lbl_fn_806A2790_00000544:
    cmpwi r3, 0x0
    beq lbl_fn_806A2790_00000580
    lis r6, lbl_808340E0@ha
    addi r6, r6, lbl_808340E0@l
    lwz r12, 0x4(r6)
    cmpwi r12, 0x0
    beq lbl_fn_806A2790_00000580
    lwz r5, 0x14(r6)
    mr r4, r3
    li r3, 0xb
    subi r0, r5, 0x1
    li r5, 0x460
    stw r0, 0x14(r6)
    mtctr r12
    bctrl
lbl_fn_806A2790_00000580:
    li r3, 0x0
    b lbl_fn_806A2790_0000058C
lbl_fn_806A2790_00000588:
    li r3, 0x0
lbl_fn_806A2790_0000058C:
    lis r4, lbl_808340E0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_808340E0@l
    stw r3, 0x10(r4)
    bne lbl_fn_806A2790_000005A4
    li r31, -0x31
lbl_fn_806A2790_000005A4:
    cmpwi r3, 0x0
    beq lbl_fn_806A2790_000005B4
    li r0, 0x1
    stb r0, lbl_80880438
lbl_fn_806A2790_000005B4:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    beq lbl_fn_806A2790_000005C8
    stw r31, 0x30c(r3)
    b lbl_fn_806A2790_000005CC
lbl_fn_806A2790_000005C8:
    stw r31, lbl_8088043C
lbl_fn_806A2790_000005CC:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A295C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    bl OSDisableInterrupts
    lbz r0, lbl_80880438
    mr r30, r3
    cmpwi r0, 0x1
    beq lbl_fn_806A295C_00000640
    bge lbl_fn_806A295C_0000062C
    cmpwi r0, 0x0
    bge lbl_fn_806A295C_00000638
    b lbl_fn_806A295C_000006B0
lbl_fn_806A295C_0000062C:
    cmpwi r0, 0x3
    bge lbl_fn_806A295C_000006B0
    b lbl_fn_806A295C_000006AC
lbl_fn_806A295C_00000638:
    li r31, -0x7
    b lbl_fn_806A295C_000006B0
lbl_fn_806A295C_00000640:
    lis r5, lbl_808340E0@ha
    addi r5, r5, lbl_808340E0@l
    lwz r0, 0x8(r5)
    cmpwi r0, -0x2
    ble lbl_fn_806A295C_0000065C
    li r31, -0xa
    b lbl_fn_806A295C_000006B0
lbl_fn_806A295C_0000065C:
    lwz r3, 0x14(r5)
    cmpwi r3, 0x1
    ble lbl_fn_806A295C_00000670
    li r31, -0x6
    b lbl_fn_806A295C_000006B0
lbl_fn_806A295C_00000670:
    lwz r4, 0x10(r5)
    li r0, 0x0
    stb r0, lbl_80880438
    cmpwi r4, 0x0
    beq lbl_fn_806A295C_000006B0
    lwz r12, 0x4(r5)
    cmpwi r12, 0x0
    beq lbl_fn_806A295C_000006B0
    subi r0, r3, 0x1
    li r3, 0xb
    stw r0, 0x14(r5)
    li r5, 0x460
    mtctr r12
    bctrl
    b lbl_fn_806A295C_000006B0
lbl_fn_806A295C_000006AC:
    li r31, -0x1a
lbl_fn_806A295C_000006B0:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    beq lbl_fn_806A295C_000006C4
    stw r31, 0x30c(r3)
    b lbl_fn_806A295C_000006C8
lbl_fn_806A295C_000006C4:
    stw r31, lbl_8088043C
lbl_fn_806A295C_000006C8:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A2A58(void)
{
    nofralloc
    lis r3, 0x1
    subi r3, r3, 0x15a0
    b fn_806A2A64
}

asm void fn_806A2A64(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    cmpwi r3, 0x0
    mr r14, r3
    li r16, 0x0
    li r17, 0x0
    beq lbl_fn_806A2A64_00000750
    bl __OSGetSystemTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r6, 0xf8(r6)
    addi r7, r5, 0x4dd3
    li r0, 0x0
    srwi r5, r6, 2
    mulhwu r5, r7, r5
    srwi r5, r5, 6
    mullw r5, r14, r5
    addc r16, r5, r4
    adde r17, r0, r3
lbl_fn_806A2A64_00000750:
    lis r3, lbl_808340E0@ha
    li r15, 0x4
    lis r20, 0x8000
    lis r21, 0x1062
    addi r25, r3, lbl_808340E0@l
    li r22, 0x0
    li r23, 0x64
    lis r24, lbl_807BCAB0@ha
    li r19, -0x1
    lis r31, jumptable_807BCAC0@ha
    li r14, 0x2
lbl_fn_806A2A64_0000077C:
    bl OSDisableInterrupts
    lbz r0, lbl_80880438
    mr r26, r3
    cmpwi r0, 0x1
    beq lbl_fn_806A2A64_000007B4
    bge lbl_fn_806A2A64_00000798
    b lbl_fn_806A2A64_000007A4
lbl_fn_806A2A64_00000798:
    cmpwi r0, 0x3
    bge lbl_fn_806A2A64_000007A4
    b lbl_fn_806A2A64_000007AC
lbl_fn_806A2A64_000007A4:
    li r18, -0x27
    b lbl_fn_806A2A64_00000A34
lbl_fn_806A2A64_000007AC:
    li r18, -0x7
    b lbl_fn_806A2A64_00000A34
lbl_fn_806A2A64_000007B4:
    lwz r0, 0x8(r25)
    cmpwi r0, -0x2
    ble lbl_fn_806A2A64_000007C8
    li r18, -0xa
    b lbl_fn_806A2A64_00000A34
lbl_fn_806A2A64_000007C8:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_806A2A64_000007DC
    lis r18, 0x8000
    b lbl_fn_806A2A64_00000A34
lbl_fn_806A2A64_000007DC:
    stw r19, 0x8(r25)
    mr r3, r26
    bl OSRestoreInterrupts
    mullw r26, r22, r23
    addi r27, r21, 0x4dd3
    or r18, r16, r17
    xoris r29, r17, 0x8000
lbl_fn_806A2A64_000007F8:
    bl fn_80697F84
    cmpwi r3, -0x8
    mr r28, r3
    beq lbl_fn_806A2A64_00000810
    cmpwi r3, 0x1
    bne lbl_fn_806A2A64_0000086C
lbl_fn_806A2A64_00000810:
    lwz r0, 0xf8(r20)
    srwi r0, r0, 2
    mulhwu r0, r27, r0
    srwi r3, r0, 6
    mulhwu r0, r3, r23
    mulli r4, r3, 0x64
    add r3, r0, r26
    bl OSSleepTicks
    cmpwi r18, 0x0
    beq lbl_fn_806A2A64_000007F8
    bl __OSGetSystemTime
    xoris r3, r3, 0x8000
    subfc r0, r4, r16
    subfe r3, r3, r29
    subfe r3, r29, r29
    neg. r3, r3
    beq lbl_fn_806A2A64_000007F8
    cmpwi r28, 0x1
    bne lbl_fn_806A2A64_00000864
    li r18, -0x79
    b lbl_fn_806A2A64_000009FC
lbl_fn_806A2A64_00000864:
    lis r18, 0x8000
    b lbl_fn_806A2A64_000009FC
lbl_fn_806A2A64_0000086C:
    cmpwi r3, 0x0
    bge lbl_fn_806A2A64_0000087C
    lis r18, 0x8000
    b lbl_fn_806A2A64_000009FC
lbl_fn_806A2A64_0000087C:
    cmpwi r3, 0x2
    bne lbl_fn_806A2A64_0000088C
    li r18, -0x2d
    b lbl_fn_806A2A64_000009FC
lbl_fn_806A2A64_0000088C:
    mullw r26, r22, r23
    addi r27, r21, 0x4dd3
    or r18, r16, r17
    xoris r28, r17, 0x8000
lbl_fn_806A2A64_0000089C:
    addi r3, r24, lbl_807BCAB0@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, -0x6
    stw r3, 0xc(r25)
    bne lbl_fn_806A2A64_00000900
    lwz r0, 0xf8(r20)
    srwi r0, r0, 2
    mulhwu r0, r27, r0
    srwi r3, r0, 6
    mulhwu r0, r3, r23
    mulli r4, r3, 0x64
    add r3, r0, r26
    bl OSSleepTicks
    cmpwi r18, 0x0
    beq lbl_fn_806A2A64_0000089C
    bl __OSGetSystemTime
    xoris r3, r3, 0x8000
    subfc r0, r4, r16
    subfe r3, r3, r28
    subfe r3, r28, r28
    neg. r3, r3
    beq lbl_fn_806A2A64_0000089C
    lis r18, 0x8000
    b lbl_fn_806A2A64_000009FC
lbl_fn_806A2A64_00000900:
    cmpwi r3, 0x0
    bge lbl_fn_806A2A64_00000910
    lis r18, 0x8000
    b lbl_fn_806A2A64_000009FC
lbl_fn_806A2A64_00000910:
    mullw r28, r22, r23
    li r18, 0x0
    stw r18, 0x8(r1)
    addi r27, r21, 0x4dd3
    or r29, r16, r17
    xoris r30, r17, 0x8000
lbl_fn_806A2A64_00000928:
    addi r3, r1, 0x8
    bl fn_806A1A80
    cmpwi r3, -0x1d
    mr r26, r3
    bne lbl_fn_806A2A64_00000984
    lwz r0, 0xf8(r20)
    srwi r0, r0, 2
    mulhwu r0, r27, r0
    srwi r3, r0, 6
    mulhwu r0, r3, r23
    mulli r4, r3, 0x64
    add r3, r0, r28
    bl OSSleepTicks
    cmpwi r29, 0x0
    beq lbl_fn_806A2A64_00000928
    bl __OSGetSystemTime
    xoris r3, r3, 0x8000
    subfc r0, r4, r16
    subfe r3, r3, r30
    subfe r3, r30, r30
    neg. r3, r3
    beq lbl_fn_806A2A64_00000928
    lis r18, 0x8000
lbl_fn_806A2A64_00000984:
    cmpwi r18, 0x0
    bne lbl_fn_806A2A64_000009D8
    addi r0, r26, 0x21
    lwz r4, 0x8(r1)
    cmplwi r0, 0x21
    li r18, -0x1c
    bgt lbl_fn_806A2A64_000009D8
    addi r3, r31, jumptable_807BCAC0@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r18, 0x0
    b lbl_fn_806A2A64_000009D8
    li r18, -0x30
    b lbl_fn_806A2A64_000009D8
    mr r18, r4
    b lbl_fn_806A2A64_000009D8
    lis r18, 0x8000
    b lbl_fn_806A2A64_000009D8
    li r18, -0x1a
lbl_fn_806A2A64_000009D8:
    cmpwi r18, 0x0
    beq lbl_fn_806A2A64_000009FC
    lwz r3, 0xc(r25)
    bl fn_8061C8A0
    cmpwi r3, 0x0
    bge lbl_fn_806A2A64_000009F8
    lis r18, 0x8000
    b lbl_fn_806A2A64_000009FC
lbl_fn_806A2A64_000009F8:
    stw r19, 0xc(r25)
lbl_fn_806A2A64_000009FC:
    bl OSDisableInterrupts
    cmpwi r18, 0x0
    mr r26, r3
    bne lbl_fn_806A2A64_00000A18
    stb r14, lbl_80880438
    stw r22, 0x8(r25)
    b lbl_fn_806A2A64_00000A34
lbl_fn_806A2A64_00000A18:
    addis r3, r18, 0x8000
    li r0, 0x1
    cmplwi r3, 0x0
    stb r0, lbl_80880438
    beq lbl_fn_806A2A64_00000A34
    li r0, -0x2
    stw r0, 0x8(r25)
lbl_fn_806A2A64_00000A34:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    beq lbl_fn_806A2A64_00000A48
    stw r18, 0x30c(r3)
    b lbl_fn_806A2A64_00000A4C
lbl_fn_806A2A64_00000A48:
    stw r18, lbl_8088043C
lbl_fn_806A2A64_00000A4C:
    mr r3, r26
    bl OSRestoreInterrupts
    cmpwi r18, 0x0
    bne lbl_fn_806A2A64_00000ADC
    or. r0, r16, r17
    beq lbl_fn_806A2A64_00000A74
    bl __OSGetSystemTime
    subfc r4, r4, r16
    subfe r3, r3, r17
    b lbl_fn_806A2A64_00000A7C
lbl_fn_806A2A64_00000A74:
    li r4, 0x0
    mr r3, r4
lbl_fn_806A2A64_00000A7C:
    or. r0, r16, r17
    beq lbl_fn_806A2A64_00000AA8
    xoris r0, r22, 0x8000
    xoris r6, r3, 0x8000
    subfc r5, r4, r22
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    bne lbl_fn_806A2A64_00000AA8
    li r18, -0x4c
    b lbl_fn_806A2A64_00000AD0
lbl_fn_806A2A64_00000AA8:
    lwz r0, 0xf8(r20)
    addi r6, r21, 0x4dd3
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    mr r3, r4
    bl fn_806A36BC
    mr r18, r3
lbl_fn_806A2A64_00000AD0:
    cmpwi r18, 0x0
    beq lbl_fn_806A2A64_00000ADC
    bl fn_806A2E8C
lbl_fn_806A2A64_00000ADC:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    beq lbl_fn_806A2A64_00000AF0
    stw r18, 0x30c(r3)
    b lbl_fn_806A2A64_00000AF4
lbl_fn_806A2A64_00000AF0:
    stw r18, lbl_8088043C
lbl_fn_806A2A64_00000AF4:
    cmpwi r18, -0x70
    bne lbl_fn_806A2A64_00000B04
    subic. r15, r15, 0x1
    bge lbl_fn_806A2A64_0000077C
lbl_fn_806A2A64_00000B04:
    addi r11, r1, 0x60
    mr r3, r18
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806A2E8C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lbz r0, lbl_80880438
    li r4, 0x0
    stw r4, 0x8(r1)
    mr r29, r3
    cmpwi r0, 0x1
    beq lbl_fn_806A2E8C_00000B70
    bge lbl_fn_806A2E8C_00000B5C
    b lbl_fn_806A2E8C_00000B68
lbl_fn_806A2E8C_00000B5C:
    cmpwi r0, 0x3
    bge lbl_fn_806A2E8C_00000B68
    b lbl_fn_806A2E8C_00000B78
lbl_fn_806A2E8C_00000B68:
    li r30, -0x27
    b lbl_fn_806A2E8C_00000C90
lbl_fn_806A2E8C_00000B70:
    li r30, -0x7
    b lbl_fn_806A2E8C_00000C90
lbl_fn_806A2E8C_00000B78:
    lis r31, lbl_808340E0@ha
    addi r31, r31, lbl_808340E0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bge lbl_fn_806A2E8C_00000B94
    li r30, -0xa
    b lbl_fn_806A2E8C_00000C90
lbl_fn_806A2E8C_00000B94:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_806A2E8C_00000BA8
    lis r30, 0x8000
    b lbl_fn_806A2E8C_00000C90
lbl_fn_806A2E8C_00000BA8:
    li r0, -0x1
    mr r3, r29
    stw r0, 0x8(r31)
    bl OSRestoreInterrupts
    addi r3, r1, 0x8
    bl fn_806A1A90
    addi r0, r3, 0x21
    lwz r4, 0x8(r1)
    cmplwi r0, 0x21
    li r30, -0x1c
    bgt lbl_fn_806A2E8C_00000C10
    lis r3, jumptable_807BCB48@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BCB48@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r30, 0x0
    b lbl_fn_806A2E8C_00000C10
    li r30, -0x30
    b lbl_fn_806A2E8C_00000C10
    mr r30, r4
    b lbl_fn_806A2E8C_00000C10
    lis r30, 0x8000
    b lbl_fn_806A2E8C_00000C10
    li r30, -0x1a
lbl_fn_806A2E8C_00000C10:
    cmpwi r30, 0x0
    bne lbl_fn_806A2E8C_00000C40
    lis r31, lbl_808340E0@ha
    addi r31, r31, lbl_808340E0@l
    lwz r3, 0xc(r31)
    bl fn_8061C8A0
    cmpwi r3, 0x0
    bge lbl_fn_806A2E8C_00000C38
    lis r30, 0x8000
    b lbl_fn_806A2E8C_00000C40
lbl_fn_806A2E8C_00000C38:
    li r0, -0x1
    stw r0, 0xc(r31)
lbl_fn_806A2E8C_00000C40:
    bl OSDisableInterrupts
    cmpwi r30, 0x0
    mr r29, r3
    bne lbl_fn_806A2E8C_00000C6C
    lis r3, lbl_808340E0@ha
    li r4, 0x1
    addi r3, r3, lbl_808340E0@l
    li r0, -0x2
    stb r4, lbl_80880438
    stw r0, 0x8(r3)
    b lbl_fn_806A2E8C_00000C90
lbl_fn_806A2E8C_00000C6C:
    addis r0, r30, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_806A2E8C_00000C90
    lis r3, lbl_808340E0@ha
    li r4, 0x2
    addi r3, r3, lbl_808340E0@l
    li r0, 0x0
    stb r4, lbl_80880438
    stw r0, 0x8(r3)
lbl_fn_806A2E8C_00000C90:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    beq lbl_fn_806A2E8C_00000CA4
    stw r30, 0x30c(r3)
    b lbl_fn_806A2E8C_00000CA8
lbl_fn_806A2E8C_00000CA4:
    stw r30, lbl_8088043C
lbl_fn_806A2E8C_00000CA8:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A303C(void)
{
    nofralloc
    lis r3, lbl_808340E0@ha
    addi r3, r3, lbl_808340E0@l
    blr
}

asm void fn_806A3048(void)
{
    nofralloc
    lwz r3, lbl_8087EDE4
    blr
}

asm void fn_806A3050(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    bl OSDisableInterrupts
    lbz r0, lbl_80880438
    cmpwi r0, 0x3
    bge lbl_fn_806A3050_00000D18
    cmpwi r0, 0x1
    bge lbl_fn_806A3050_00000D14
    b lbl_fn_806A3050_00000D18
lbl_fn_806A3050_00000D14:
    li r31, 0x1
lbl_fn_806A3050_00000D18:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A30A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    ble lbl_fn_806A30A0_00000DFC
    lis r31, lbl_808340E0@ha
    lwz r12, lbl_808340E0@l(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806A30A0_00000DFC
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_806A30A0_00000DF4
    addi r6, r31, lbl_808340E0@l
    lwz r0, lbl_8087EDE4
    lwz r5, 0x14(r6)
    cmpwi r0, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14(r6)
    beq lbl_fn_806A30A0_00000DF4
    clrlwi r5, r3, 3
    lis r0, 0x1000
    cmplw r5, r0
    blt lbl_fn_806A30A0_00000DB8
    lis r0, 0x1800
    cmplw r5, r0
    blt lbl_fn_806A30A0_00000DF4
lbl_fn_806A30A0_00000DB8:
    cmpwi r3, 0x0
    beq lbl_fn_806A30A0_00000DF0
    lis r6, lbl_808340E0@ha
    addi r6, r6, lbl_808340E0@l
    lwz r12, 0x4(r6)
    cmpwi r12, 0x0
    beq lbl_fn_806A30A0_00000DF0
    lwz r5, 0x14(r6)
    mr r3, r29
    subi r0, r5, 0x1
    mr r5, r30
    stw r0, 0x14(r6)
    mtctr r12
    bctrl
lbl_fn_806A30A0_00000DF0:
    li r4, 0x0
lbl_fn_806A30A0_00000DF4:
    mr r3, r4
    b lbl_fn_806A30A0_00000E00
lbl_fn_806A30A0_00000DFC:
    li r3, 0x0
lbl_fn_806A30A0_00000E00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A3188(void)
{
    nofralloc
    cmpwi r4, 0x0
    beqlr
    lis r7, lbl_808340E0@ha
    addi r7, r7, lbl_808340E0@l
    lwz r12, 0x4(r7)
    cmpwi r12, 0x0
    beqlr
    lwz r6, 0x14(r7)
    subi r0, r6, 0x1
    stw r0, 0x14(r7)
    mtctr r12
    bctr
    blr
}

asm void fn_806A31BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    bl OSDisableInterrupts
    lbz r0, lbl_80880438
    mr r29, r3
    cmpwi r0, 0x1
    beq lbl_fn_806A31BC_00000EAC
    bge lbl_fn_806A31BC_00000E98
    cmpwi r0, 0x0
    bge lbl_fn_806A31BC_00000EA4
    b lbl_fn_806A31BC_00000EAC
lbl_fn_806A31BC_00000E98:
    cmpwi r0, 0x3
    bge lbl_fn_806A31BC_00000EAC
    b lbl_fn_806A31BC_00000EB4
lbl_fn_806A31BC_00000EA4:
    li r30, -0x27
    b lbl_fn_806A31BC_00000EEC
lbl_fn_806A31BC_00000EAC:
    li r30, -0x1c
    b lbl_fn_806A31BC_00000EEC
lbl_fn_806A31BC_00000EB4:
    lis r31, lbl_808340E0@ha
    addi r31, r31, lbl_808340E0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bge lbl_fn_806A31BC_00000ED0
    li r30, -0xa
    b lbl_fn_806A31BC_00000EEC
lbl_fn_806A31BC_00000ED0:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_806A31BC_00000EE4
    lis r30, 0x8000
    b lbl_fn_806A31BC_00000EEC
lbl_fn_806A31BC_00000EE4:
    lwz r0, 0xc(r31)
    stw r0, 0x0(r28)
lbl_fn_806A31BC_00000EEC:
    cmpwi r30, 0x0
    beq lbl_fn_806A31BC_00000F0C
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    beq lbl_fn_806A31BC_00000F08
    stw r30, 0x30c(r3)
    b lbl_fn_806A31BC_00000F0C
lbl_fn_806A31BC_00000F08:
    stw r30, lbl_8088043C
lbl_fn_806A31BC_00000F0C:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A32A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bl OSDisableInterrupts
    mr r31, r3
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    beq lbl_fn_806A32A4_00000F6C
    stw r30, 0x30c(r3)
    b lbl_fn_806A32A4_00000F70
lbl_fn_806A32A4_00000F6C:
    stw r30, lbl_8088043C
lbl_fn_806A32A4_00000F70:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A3300(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    bl OSDisableInterrupts
    lbz r0, lbl_80880438
    mr r29, r3
    cmpwi r0, 0x1
    beq lbl_fn_806A3300_00000FF0
    bge lbl_fn_806A3300_00000FDC
    cmpwi r0, 0x0
    bge lbl_fn_806A3300_00000FE8
    b lbl_fn_806A3300_00000FF0
lbl_fn_806A3300_00000FDC:
    cmpwi r0, 0x3
    bge lbl_fn_806A3300_00000FF0
    b lbl_fn_806A3300_000011E8
lbl_fn_806A3300_00000FE8:
    li r30, -0x27
    b lbl_fn_806A3300_00001228
lbl_fn_806A3300_00000FF0:
    lis r31, lbl_808340E0@ha
    addi r31, r31, lbl_808340E0@l
    lwz r0, 0x8(r31)
    cmpwi r0, -0x2
    ble lbl_fn_806A3300_0000100C
    li r30, -0xa
    b lbl_fn_806A3300_00001228
lbl_fn_806A3300_0000100C:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_806A3300_00001020
    lis r30, 0x8000
    b lbl_fn_806A3300_00001228
lbl_fn_806A3300_00001020:
    li r0, -0x1
    mr r3, r29
    stw r0, 0x8(r31)
    bl OSRestoreInterrupts
    lis r3, lbl_807BCAB0@ha
    li r4, 0x0
    addi r3, r3, lbl_807BCAB0@l
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, 0xc(r31)
    bge lbl_fn_806A3300_00001078
    bl OSDisableInterrupts
    lwz r0, 0xc(r31)
    mr r29, r3
    cmpwi r0, -0x6
    bne lbl_fn_806A3300_00001070
    li r0, -0x2
    li r30, -0x1a
    stw r0, 0x8(r31)
    b lbl_fn_806A3300_00001228
lbl_fn_806A3300_00001070:
    lis r30, 0x8000
    b lbl_fn_806A3300_00001228
lbl_fn_806A3300_00001078:
    stw r3, 0x0(r27)
    bl fn_806A1AA0
    cmpwi r3, 0x0
    bne lbl_fn_806A3300_0000115C
    bl fn_80697F84
    cmpwi r3, 0x0
    bge lbl_fn_806A3300_000010AC
    cmpwi r3, -0x8
    beq lbl_fn_806A3300_0000110C
    blt lbl_fn_806A3300_0000113C
    cmpwi r3, -0x2
    bge lbl_fn_806A3300_00001124
    b lbl_fn_806A3300_0000113C
lbl_fn_806A3300_000010AC:
    cmpwi r3, 0x6
    bge lbl_fn_806A3300_0000113C
    cmpwi r3, 0x3
    bge lbl_fn_806A3300_000010C0
    b lbl_fn_806A3300_0000113C
lbl_fn_806A3300_000010C0:
    lwz r3, 0xc(r31)
    li r4, 0x1f
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_8061D080
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806A3300_000010F4
    li r0, 0x1
    stw r0, 0x0(r28)
    b lbl_fn_806A3300_00001150
lbl_fn_806A3300_000010F4:
    mr r3, r26
    mr r4, r30
    li r5, 0x1
    bl fn_806A35D8
    mr r30, r3
    b lbl_fn_806A3300_00001150
lbl_fn_806A3300_0000110C:
    mr r3, r26
    li r4, -0x1a
    li r5, 0x1
    bl fn_806A35D8
    mr r30, r3
    b lbl_fn_806A3300_00001150
lbl_fn_806A3300_00001124:
    mr r3, r26
    lis r4, 0x8000
    li r5, 0x1
    bl fn_806A35D8
    mr r30, r3
    b lbl_fn_806A3300_00001150
lbl_fn_806A3300_0000113C:
    mr r3, r26
    li r4, -0x30
    li r5, 0x1
    bl fn_806A35D8
    mr r30, r3
lbl_fn_806A3300_00001150:
    bl OSDisableInterrupts
    mr r29, r3
    b lbl_fn_806A3300_00001228
lbl_fn_806A3300_0000115C:
    addi r0, r3, 0x1d
    cmplwi r0, 0x1c
    bgt lbl_fn_806A3300_00001198
    lis r3, jumptable_807BCBD0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BCBD0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r30, -0x1a
    b lbl_fn_806A3300_0000119C
    li r30, -0x27
    b lbl_fn_806A3300_0000119C
    li r30, -0x30
    b lbl_fn_806A3300_0000119C
lbl_fn_806A3300_00001198:
    lis r30, 0x8000
lbl_fn_806A3300_0000119C:
    lis r3, lbl_808340E0@ha
    addi r3, r3, lbl_808340E0@l
    lwz r3, 0xc(r3)
    bl fn_8061C8A0
    cmpwi r3, 0x0
    bge lbl_fn_806A3300_000011B8
    lis r30, 0x8000
lbl_fn_806A3300_000011B8:
    bl OSDisableInterrupts
    addis r0, r30, 0x8000
    mr r29, r3
    cmplwi r0, 0x0
    beq lbl_fn_806A3300_00001228
    lis r3, lbl_808340E0@ha
    li r4, -0x1
    addi r3, r3, lbl_808340E0@l
    li r0, -0x2
    stw r4, 0xc(r3)
    stw r0, 0x8(r3)
    b lbl_fn_806A3300_00001228
lbl_fn_806A3300_000011E8:
    lis r31, lbl_808340E0@ha
    addi r31, r31, lbl_808340E0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bge lbl_fn_806A3300_00001204
    li r30, -0xa
    b lbl_fn_806A3300_00001228
lbl_fn_806A3300_00001204:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_806A3300_00001218
    lis r30, 0x8000
    b lbl_fn_806A3300_00001228
lbl_fn_806A3300_00001218:
    li r0, 0x0
    stw r0, 0x0(r28)
    lwz r0, 0xc(r31)
    stw r0, 0x0(r27)
lbl_fn_806A3300_00001228:
    cmpwi r30, 0x0
    beq lbl_fn_806A3300_00001248
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    beq lbl_fn_806A3300_00001244
    stw r30, 0x30c(r3)
    b lbl_fn_806A3300_00001248
lbl_fn_806A3300_00001244:
    stw r30, lbl_8088043C
lbl_fn_806A3300_00001248:
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A35D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bne lbl_fn_806A35D8_0000130C
    bl fn_806A1AB0
    cmpwi r3, -0x1
    beq lbl_fn_806A35D8_000012BC
    bge lbl_fn_806A35D8_000012A8
    cmpwi r3, -0x1d
    beq lbl_fn_806A35D8_000012B4
    b lbl_fn_806A35D8_000012BC
lbl_fn_806A35D8_000012A8:
    cmpwi r3, 0x1
    bge lbl_fn_806A35D8_000012BC
    b lbl_fn_806A35D8_000012C0
lbl_fn_806A35D8_000012B4:
    li r30, -0x1a
    b lbl_fn_806A35D8_000012C0
lbl_fn_806A35D8_000012BC:
    lis r30, 0x8000
lbl_fn_806A35D8_000012C0:
    lis r3, lbl_808340E0@ha
    addi r3, r3, lbl_808340E0@l
    lwz r3, 0xc(r3)
    bl fn_8061C8A0
    cmpwi r3, 0x0
    bge lbl_fn_806A35D8_000012DC
    lis r30, 0x8000
lbl_fn_806A35D8_000012DC:
    bl OSDisableInterrupts
    addis r0, r30, 0x8000
    mr r31, r3
    cmplwi r0, 0x0
    beq lbl_fn_806A35D8_00001314
    lis r3, lbl_808340E0@ha
    li r4, -0x1
    addi r3, r3, lbl_808340E0@l
    li r0, -0x2
    stw r4, 0xc(r3)
    stw r0, 0x8(r3)
    b lbl_fn_806A35D8_00001314
lbl_fn_806A35D8_0000130C:
    bl OSDisableInterrupts
    mr r31, r3
lbl_fn_806A35D8_00001314:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    beq lbl_fn_806A35D8_00001328
    stw r30, 0x30c(r3)
    b lbl_fn_806A35D8_0000132C
lbl_fn_806A35D8_00001328:
    stw r30, lbl_8088043C
lbl_fn_806A35D8_0000132C:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A36BC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    cmpwi r3, 0x0
    mr r22, r3
    li r31, 0x0
    li r29, 0x0
    li r30, 0x0
    beq lbl_fn_806A36BC_000013AC
    bl __OSGetSystemTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r6, 0xf8(r6)
    addi r7, r5, 0x4dd3
    li r0, 0x0
    srwi r5, r6, 2
    mulhwu r5, r7, r5
    srwi r5, r5, 6
    mullw r5, r22, r5
    addc r29, r5, r4
    adde r30, r0, r3
lbl_fn_806A36BC_000013AC:
    li r0, 0x0
    li r24, 0xa
    mullw r25, r0, r24
    lis r3, 0x1062
    or r28, r29, r30
    addi r22, r3, 0x4dd3
    li r26, 0x4
    lis r27, 0x1
    lis r23, 0x8000
lbl_fn_806A36BC_000013D0:
    lwz r0, 0xf8(r23)
    srwi r0, r0, 2
    mulhwu r0, r22, r0
    srwi r3, r0, 6
    mulhwu r0, r3, r24
    mulli r4, r3, 0xa
    add r3, r0, r25
    bl OSSleepTicks
    stw r26, 0x8(r1)
    subi r4, r27, 0x2
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    li r5, 0x1003
    bl fn_806A4D60
    cmpwi r3, 0x0
    beq lbl_fn_806A36BC_0000141C
    mr r31, r3
    b lbl_fn_806A36BC_0000146C
lbl_fn_806A36BC_0000141C:
    bne lbl_fn_806A36BC_00001434
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806A36BC_00001434
    mr r31, r0
    b lbl_fn_806A36BC_0000146C
lbl_fn_806A36BC_00001434:
    bl fn_806A475C
    cmpwi r3, 0x0
    bne lbl_fn_806A36BC_0000146C
    cmpwi r28, 0x0
    beq lbl_fn_806A36BC_000013D0
    bl __OSGetSystemTime
    xoris r5, r3, 0x8000
    xoris r0, r30, 0x8000
    subfc r3, r4, r29
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806A36BC_000013D0
    li r31, -0x4c
lbl_fn_806A36BC_0000146C:
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806A37F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    addi r4, r1, 0x8
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A37F4_0000153C
    cmpwi r28, 0x17
    bne lbl_fn_806A37F4_000014D4
    li r31, -0x5
    b lbl_fn_806A37F4_00001530
lbl_fn_806A37F4_000014D4:
    li r3, 0xc
    li r4, 0x20
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806A37F4_000014F4
    li r31, -0x31
    b lbl_fn_806A37F4_00001530
lbl_fn_806A37F4_000014F4:
    stw r28, 0x0(r3)
    mr r5, r30
    li r4, 0xf
    li r6, 0xc
    stw r29, 0x4(r3)
    li r7, 0x0
    li r8, 0x0
    stw r31, 0x8(r3)
    lwz r3, 0x8(r1)
    bl fn_8061D080
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x20
    bl fn_806A3188
lbl_fn_806A37F4_00001530:
    mr r4, r31
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A37F4_0000153C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A38C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, lbl_80880448
    cmpwi r0, 0x0
    bne lbl_fn_806A38C8_000015A0
    lwz r3, lbl_8087EDE8
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_80880448
lbl_fn_806A38C8_000015A0:
    addi r4, r1, 0x8
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A38C8_0000162C
    cmpwi r28, 0x17
    bne lbl_fn_806A38C8_000015C4
    li r30, -0x5
    b lbl_fn_806A38C8_00001620
lbl_fn_806A38C8_000015C4:
    li r3, 0xc
    li r4, 0x20
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806A38C8_000015E4
    li r30, -0x31
    b lbl_fn_806A38C8_00001620
lbl_fn_806A38C8_000015E4:
    stw r28, 0x0(r3)
    mr r5, r31
    li r4, 0xf
    li r6, 0xc
    stw r29, 0x4(r3)
    li r7, 0x0
    li r8, 0x0
    stw r30, 0x8(r3)
    lwz r3, 0x8(r1)
    bl fn_8061D080
    mr r30, r3
    mr r4, r31
    li r3, 0xc
    li r5, 0x20
    bl fn_806A3188
lbl_fn_806A38C8_00001620:
    mr r4, r30
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A38C8_0000162C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A39B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    li r3, 0x0
    stw r30, 0x18(r1)
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A39B8_000016D8
    li r3, 0xc
    li r4, 0x20
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806A39B8_00001698
    li r31, -0x31
    b lbl_fn_806A39B8_000016CC
lbl_fn_806A39B8_00001698:
    stw r31, 0x0(r3)
    mr r5, r30
    li r4, 0x3
    li r6, 0x4
    lwz r3, 0x8(r1)
    li r7, 0x0
    li r8, 0x0
    bl fn_8061D080
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x20
    bl fn_806A3188
lbl_fn_806A39B8_000016CC:
    mr r4, r31
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A39B8_000016D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A3A5C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A3A5C_000017BC
    cmpwi r31, 0x0
    beq lbl_fn_806A3A5C_0000173C
    lbz r0, 0x0(r31)
    cmplwi r0, 0x8
    bgt lbl_fn_806A3A5C_0000173C
    bge lbl_fn_806A3A5C_00001744
lbl_fn_806A3A5C_0000173C:
    li r31, -0x1c
    b lbl_fn_806A3A5C_000017B0
lbl_fn_806A3A5C_00001744:
    li r3, 0xc
    li r4, 0x40
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806A3A5C_00001764
    li r31, -0x31
    b lbl_fn_806A3A5C_000017B0
lbl_fn_806A3A5C_00001764:
    stw r29, 0x0(r3)
    li r0, 0x1
    mr r4, r31
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    lbz r5, 0x0(r31)
    bl fn_80698A2C
    lwz r3, 0x8(r1)
    mr r5, r30
    li r4, 0x2
    li r6, 0x24
    li r7, 0x0
    li r8, 0x0
    bl fn_8061D080
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x40
    bl fn_806A3188
lbl_fn_806A3A5C_000017B0:
    mr r4, r31
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A3A5C_000017BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A3B44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A3B44_000018A4
    cmpwi r31, 0x0
    beq lbl_fn_806A3B44_00001824
    lbz r0, 0x0(r31)
    cmplwi r0, 0x8
    bgt lbl_fn_806A3B44_00001824
    bge lbl_fn_806A3B44_0000182C
lbl_fn_806A3B44_00001824:
    li r31, -0x1c
    b lbl_fn_806A3B44_00001898
lbl_fn_806A3B44_0000182C:
    li r3, 0xc
    li r4, 0x40
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806A3B44_0000184C
    li r31, -0x31
    b lbl_fn_806A3B44_00001898
lbl_fn_806A3B44_0000184C:
    stw r29, 0x0(r3)
    li r0, 0x1
    mr r4, r31
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    lbz r5, 0x0(r31)
    bl fn_80698A2C
    lwz r3, 0x8(r1)
    mr r5, r30
    li r4, 0x4
    li r6, 0x24
    li r7, 0x0
    li r8, 0x0
    bl fn_8061D080
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x40
    bl fn_806A3188
lbl_fn_806A3B44_00001898:
    mr r4, r31
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A3B44_000018A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A3C2C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r28, r3
    mr r27, r4
    addi r4, r1, 0x8
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A3C2C_000019A4
    cmpwi r27, 0x0
    beq lbl_fn_806A3C2C_00001908
    lbz r3, 0x0(r27)
    cmplwi r3, 0x8
    bgt lbl_fn_806A3C2C_00001908
    bge lbl_fn_806A3C2C_00001910
lbl_fn_806A3C2C_00001908:
    li r30, -0x1c
    b lbl_fn_806A3C2C_00001998
lbl_fn_806A3C2C_00001910:
    addi r0, r3, 0x3f
    li r3, 0xc
    clrrwi r31, r0, 5
    mr r4, r31
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806A3C2C_00001938
    li r30, -0x31
    b lbl_fn_806A3C2C_00001998
lbl_fn_806A3C2C_00001938:
    stw r28, 0x0(r3)
    addi r28, r3, 0x20
    mr r4, r27
    lbz r5, 0x0(r27)
    mr r3, r28
    bl fn_80698A2C
    lwz r3, 0x8(r1)
    mr r5, r29
    lbz r8, 0x0(r27)
    mr r7, r28
    li r4, 0x7
    li r6, 0x4
    bl fn_8061D080
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_fn_806A3C2C_00001988
    lbz r5, 0x0(r28)
    mr r3, r27
    mr r4, r28
    bl fn_80698A2C
lbl_fn_806A3C2C_00001988:
    mr r4, r29
    mr r5, r31
    li r3, 0xc
    bl fn_806A3188
lbl_fn_806A3C2C_00001998:
    mr r4, r30
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A3C2C_000019A4:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A3D28(void)
{
    nofralloc
    mr r10, r4
    mr r9, r5
    mr r0, r6
    mr r8, r7
    mr r4, r3
    mr r5, r10
    mr r6, r9
    mr r7, r0
    li r3, 0x0
    b fn_806A4278
}

asm void fn_806A3D50(void)
{
    nofralloc
    mr r8, r4
    mr r0, r5
    mr r7, r6
    mr r4, r3
    mr r5, r8
    mr r6, r0
    li r3, 0x0
    li r8, 0x0
    b fn_806A4278
}

asm void fn_806A3D74(void)
{
    nofralloc
    mr r10, r4
    mr r9, r5
    mr r0, r6
    mr r8, r7
    mr r4, r3
    mr r5, r10
    mr r6, r9
    mr r7, r0
    li r3, 0x0
    b fn_806A4530
}

asm void fn_806A3D9C(void)
{
    nofralloc
    mr r8, r4
    mr r0, r5
    mr r7, r6
    mr r4, r3
    mr r5, r8
    mr r6, r0
    li r3, 0x0
    li r8, 0x0
    b fn_806A4530
}

asm void fn_806A3DC0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r4
    stw r28, 0x80(r1)
    mr r28, r3
    bne cr1, lbl_fn_806A3DC0_00001A9C
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_806A3DC0_00001A9C:
    addi r11, r1, 0x98
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r4, 0xc(r1)
    addi r31, r1, 0x6c
    li r4, 0x1
    stw r3, 0x8(r1)
    mr r3, r31
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x6c(r1)
    stw r11, 0x70(r1)
    stw r0, 0x74(r1)
    bl __va_arg
    lwz r31, 0x0(r3)
    addi r4, r1, 0x68
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A3DC0_00001B64
    li r3, 0xc
    li r4, 0x20
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806A3DC0_00001B1C
    li r31, -0x31
    b lbl_fn_806A3DC0_00001B58
lbl_fn_806A3DC0_00001B1C:
    stw r28, 0x0(r3)
    mr r5, r30
    li r4, 0x5
    li r6, 0xc
    stw r29, 0x4(r3)
    li r7, 0x0
    li r8, 0x0
    stw r31, 0x8(r3)
    lwz r3, 0x68(r1)
    bl fn_8061D080
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x20
    bl fn_806A3188
lbl_fn_806A3DC0_00001B58:
    mr r4, r31
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A3DC0_00001B64:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806A3EF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A3EF0_00001C1C
    li r3, 0xc
    li r4, 0x20
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806A3EF0_00001BD8
    li r31, -0x31
    b lbl_fn_806A3EF0_00001C10
lbl_fn_806A3EF0_00001BD8:
    stw r29, 0x0(r3)
    mr r5, r30
    li r4, 0xe
    li r6, 0x8
    stw r31, 0x4(r3)
    li r7, 0x0
    li r8, 0x0
    lwz r3, 0x8(r1)
    bl fn_8061D080
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x20
    bl fn_806A3188
lbl_fn_806A3EF0_00001C10:
    mr r4, r31
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A3EF0_00001C1C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A3FA4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    stw r5, 0x8(r1)
    mr r31, r3
    mr r26, r4
    addi r4, r1, 0x10
    stw r6, 0xc(r1)
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A3FA4_00001D7C
    cmpwi r31, 0x0
    bne lbl_fn_806A3FA4_00001C80
    li r28, -0x1c
    b lbl_fn_806A3FA4_00001D70
lbl_fn_806A3FA4_00001C80:
    mulli r29, r26, 0xc
    li r3, 0xc
    addi r0, r29, 0x3f
    clrrwi r30, r0, 5
    mr r4, r30
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806A3FA4_00001CAC
    li r28, -0x31
    b lbl_fn_806A3FA4_00001D70
lbl_fn_806A3FA4_00001CAC:
    lwz r7, 0x8(r1)
    li r5, -0x1
    lwz r4, 0xc(r1)
    xoris r0, r5, 0x8000
    xoris r6, r7, 0x8000
    addi r26, r3, 0x20
    subfc r5, r4, r5
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    bne lbl_fn_806A3FA4_00001CE8
    addi r4, r1, 0x8
    li r5, 0x8
    bl fn_80698A2C
    b lbl_fn_806A3FA4_00001D18
lbl_fn_806A3FA4_00001CE8:
    lis r5, 0x8000
    lis r3, 0x1062
    lwz r0, 0xf8(r5)
    addi r6, r3, 0x4dd3
    mr r3, r7
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    stw r4, 0x4(r27)
    stw r3, 0x0(r27)
lbl_fn_806A3FA4_00001D18:
    mr r3, r26
    mr r4, r31
    mr r5, r29
    bl fn_80698A2C
    lwz r3, 0x10(r1)
    mr r5, r27
    mr r7, r26
    mr r8, r29
    li r4, 0xb
    li r6, 0x8
    bl fn_8061D080
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_fn_806A3FA4_00001D60
    mr r3, r31
    mr r4, r26
    mr r5, r29
    bl fn_80698A2C
lbl_fn_806A3FA4_00001D60:
    mr r4, r27
    mr r5, r30
    li r3, 0xc
    bl fn_806A3188
lbl_fn_806A3FA4_00001D70:
    mr r4, r28
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A3FA4_00001D7C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A4100(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    li r3, 0x0
    bl fn_806A3300
    cmpwi r3, 0x0
    bne lbl_fn_806A4100_00001E88
    cmpwi r27, 0x0
    bne lbl_fn_806A4100_00001DD8
    li r30, -0x1c
    b lbl_fn_806A4100_00001E78
lbl_fn_806A4100_00001DD8:
    mr r3, r27
    bl strlen
    addi r0, r3, 0x40
    li r3, 0xc
    clrrwi r31, r0, 5
    mr r4, r31
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806A4100_00001E08
    li r30, -0x31
    b lbl_fn_806A4100_00001E78
lbl_fn_806A4100_00001E08:
    cmpwi r27, 0x0
    addi r30, r3, 0x20
    beq lbl_fn_806A4100_00001E20
    mr r3, r30
    mr r4, r27
    bl strcpy
lbl_fn_806A4100_00001E20:
    mr r3, r27
    bl strlen
    mr r6, r3
    lwz r3, 0xc(r1)
    mr r5, r30
    mr r7, r29
    li r4, 0x15
    li r8, 0x4
    bl fn_8061D080
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_fn_806A4100_00001E68
    cmpwi r28, 0x0
    beq lbl_fn_806A4100_00001E68
    mr r3, r28
    mr r4, r29
    li r5, 0x4
    bl fn_80698A2C
lbl_fn_806A4100_00001E68:
    mr r4, r29
    mr r5, r31
    li r3, 0xc
    bl fn_806A3188
lbl_fn_806A4100_00001E78:
    lwz r5, 0x8(r1)
    mr r4, r30
    li r3, 0x0
    bl fn_806A35D8
lbl_fn_806A4100_00001E88:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A420C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r8, r3
    lis r4, lbl_807BCC94@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807BCC94@l
    lbz r7, 0x2(r8)
    stw r31, 0xc(r1)
    lis r31, lbl_808340F8@ha
    lbz r5, 0x0(r3)
    lbz r6, 0x1(r3)
    addi r3, r31, lbl_808340F8@l
    lbz r8, 0x3(r8)
    crclr 6
    bl sprintf
    addi r3, r31, lbl_808340F8@l
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A4260(void)
{
    nofralloc
    blr
}

asm void fn_806A4264(void)
{
    nofralloc
    clrlwi r3, r3, 16
    blr
}

asm void fn_806A426C(void)
{
    nofralloc
    blr
}

asm void fn_806A4270(void)
{
    nofralloc
    clrlwi r3, r3, 16
    blr
}

asm void fn_806A4278(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lis r9, 0x1
    mr r25, r3
    addi r0, r9, -0x8000
    mr r26, r4
    cmpw r6, r0
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    ble lbl_fn_806A4278_00001F4C
    mr r28, r0
lbl_fn_806A4278_00001F4C:
    mr r3, r25
    addi r4, r1, 0x8
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A4278_000021AC
    cmpwi r30, 0x0
    beq lbl_fn_806A4278_00001F80
    lbz r0, 0x0(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_806A4278_00001F78
    bge lbl_fn_806A4278_00001F80
lbl_fn_806A4278_00001F78:
    li r26, -0x1c
    b lbl_fn_806A4278_000021A0
lbl_fn_806A4278_00001F80:
    cmpwi r28, 0x0
    blt lbl_fn_806A4278_00001F94
    ble lbl_fn_806A4278_00001F9C
    cmpwi r27, 0x0
    bne lbl_fn_806A4278_00001F9C
lbl_fn_806A4278_00001F94:
    li r26, -0x1c
    b lbl_fn_806A4278_000021A0
lbl_fn_806A4278_00001F9C:
    cmpwi r28, 0x0
    li r31, 0x1
    beq lbl_fn_806A4278_00002034
    clrlwi. r0, r27, 27
    li r24, 0x0
    li r4, 0x0
    bne lbl_fn_806A4278_00001FD4
    slwi r0, r28, 27
    srwi r3, r28, 31
    subf r0, r3, r0
    rotlwi r0, r0, 5
    add. r0, r0, r3
    bne lbl_fn_806A4278_00001FD4
    li r4, 0x1
lbl_fn_806A4278_00001FD4:
    cmpwi r4, 0x0
    beq lbl_fn_806A4278_00002028
    li r23, 0x1
    bl fn_806A3048
    cmpwi r3, 0x0
    beq lbl_fn_806A4278_0000201C
    clrlwi r4, r27, 3
    lis r0, 0x1000
    cmplw r4, r0
    li r3, 0x0
    blt lbl_fn_806A4278_00002010
    lis r0, 0x1800
    cmplw r4, r0
    bge lbl_fn_806A4278_00002010
    li r3, 0x1
lbl_fn_806A4278_00002010:
    cmpwi r3, 0x0
    bne lbl_fn_806A4278_0000201C
    li r23, 0x0
lbl_fn_806A4278_0000201C:
    cmpwi r23, 0x0
    beq lbl_fn_806A4278_00002028
    li r24, 0x1
lbl_fn_806A4278_00002028:
    cmpwi r24, 0x0
    bne lbl_fn_806A4278_00002034
    li r31, 0x0
lbl_fn_806A4278_00002034:
    cmpwi r30, 0x0
    bne lbl_fn_806A4278_00002044
    li r3, 0x0
    b lbl_fn_806A4278_00002048
lbl_fn_806A4278_00002044:
    lbz r3, 0x0(r30)
lbl_fn_806A4278_00002048:
    addi r0, r3, 0x5f
    li r3, 0xc
    clrrwi r24, r0, 5
    mr r4, r24
    bl fn_806A30A0
    cmpwi r31, 0x0
    mr r22, r3
    bne lbl_fn_806A4278_0000207C
    addi r0, r28, 0x1f
    li r3, 0xd
    clrrwi r4, r0, 5
    bl fn_806A30A0
    b lbl_fn_806A4278_00002080
lbl_fn_806A4278_0000207C:
    mr r3, r27
lbl_fn_806A4278_00002080:
    cmpwi r22, 0x0
    mr r23, r3
    beq lbl_fn_806A4278_00002094
    cmpwi r3, 0x0
    bne lbl_fn_806A4278_0000209C
lbl_fn_806A4278_00002094:
    li r26, -0x31
    b lbl_fn_806A4278_00002174
lbl_fn_806A4278_0000209C:
    stw r26, 0x20(r22)
    addi r4, r22, 0x20
    li r0, 0x8
    cmpwi r30, 0x0
    stw r29, 0x24(r22)
    addi r21, r4, 0x20
    stw r4, 0x0(r22)
    stw r0, 0x4(r22)
    stw r3, 0x8(r22)
    stw r28, 0xc(r22)
    bne lbl_fn_806A4278_000020F4
    li r0, 0x0
    mr r7, r22
    stw r0, 0x10(r22)
    li r4, 0xc
    li r5, 0x1
    li r6, 0x2
    stw r0, 0x14(r22)
    lwz r3, 0x8(r1)
    bl IOS_Ioctlv
    mr r26, r3
    b lbl_fn_806A4278_00002154
lbl_fn_806A4278_000020F4:
    lbz r5, 0x0(r30)
    mr r3, r21
    mr r4, r30
    bl fn_80698A2C
    stw r21, 0x10(r22)
    mr r7, r22
    li r4, 0xc
    li r5, 0x1
    lbz r0, 0x0(r30)
    li r6, 0x2
    stw r0, 0x14(r22)
    lwz r3, 0x8(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    mr r26, r3
    blt lbl_fn_806A4278_00002154
    lbz r5, 0x0(r30)
    mr r3, r30
    lbz r0, 0x0(r21)
    mr r4, r21
    cmplw r5, r0
    ble lbl_fn_806A4278_00002150
    mr r5, r0
lbl_fn_806A4278_00002150:
    bl fn_80698A2C
lbl_fn_806A4278_00002154:
    cmpwi r26, 0x0
    blt lbl_fn_806A4278_00002174
    cmpwi r31, 0x0
    bne lbl_fn_806A4278_00002174
    mr r3, r27
    mr r4, r23
    mr r5, r28
    bl fn_80698A2C
lbl_fn_806A4278_00002174:
    cmpwi r31, 0x0
    bne lbl_fn_806A4278_00002190
    addi r0, r28, 0x1f
    mr r4, r23
    clrrwi r5, r0, 5
    li r3, 0xd
    bl fn_806A3188
lbl_fn_806A4278_00002190:
    mr r4, r22
    mr r5, r24
    li r3, 0xc
    bl fn_806A3188
lbl_fn_806A4278_000021A0:
    mr r3, r25
    mr r4, r26
    bl fn_806A32A4
lbl_fn_806A4278_000021AC:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
