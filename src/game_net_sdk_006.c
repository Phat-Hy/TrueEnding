#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void IOS_Ioctlv(void);
extern void IOS_Open(void);
extern void OSDisableInterrupts(void);
extern void OSRegisterVersion(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_8061C8A0(void);
extern void fn_8061D080(void);
extern void fn_80698A2C(void);
extern void fn_80698DEC(void);
extern void fn_806A303C(void);
extern void fn_806A3048(void);
extern void fn_806A3050(void);
extern void fn_806A30A0(void);
extern void fn_806A3188(void);
extern void fn_806A31BC(void);
extern void fn_806A32A4(void);
extern void fn_806A3300(void);
extern void fn_806A35D8(void);
extern void fn_806A6570(void);
extern void fn_806A6580(void);
extern void fn_806A65E0(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80767388[];
extern u8 lbl_807BCCE8[];
extern u8 lbl_80834120[];
extern u8 lbl_80837140[];
extern u8 lbl_80837D10[];

/* Small data declarations */
extern u32 lbl_8087EDF0;
extern u32 lbl_80880450;
extern u32 lbl_80880454;

/* Function declarations */
void fn_806A4530(void);
void fn_806A475C(void);
void fn_806A47D4(void);
void fn_806A4914(void);
void fn_806A4BF8(void);
void fn_806A4C5C(void);
void fn_806A4D60(void);
void fn_806A4F3C(void);
void fn_806A5094(void);
void fn_806A515C(void);
void fn_806A5208(void);
void fn_806A54D8(void);
void fn_806A5798(void);
void fn_806A5844(void);
void fn_806A59B0(void);
void fn_806A5AF8(void);
void fn_806A5BC0(void);
void fn_806A5C88(void);
void fn_806A5C8C(void);
void fn_806A5C90(void);
void fn_806A5CA0(void);
void fn_806A5DA0(void);
void fn_806A5DB0(void);
void fn_806A5DC0(void);
void fn_806A5EF0(void);
void fn_806A5F00(void);
void fn_806A6090(void);
void fn_806A6250(void);
void fn_806A64B0(void);
void fn_806A64F0(void);

asm void fn_806A4530(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    mr r26, r4
    mr r25, r3
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    addi r4, r1, 0x8
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A4530_00000214
    cmpwi r30, 0x0
    beq lbl_fn_806A4530_0000005C
    lbz r0, 0x0(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_806A4530_00000054
    bge lbl_fn_806A4530_0000005C
lbl_fn_806A4530_00000054:
    li r24, -0x1c
    b lbl_fn_806A4530_00000208
lbl_fn_806A4530_0000005C:
    cmpwi r28, 0x0
    blt lbl_fn_806A4530_00000070
    ble lbl_fn_806A4530_00000078
    cmpwi r27, 0x0
    bne lbl_fn_806A4530_00000078
lbl_fn_806A4530_00000070:
    li r24, -0x1c
    b lbl_fn_806A4530_00000208
lbl_fn_806A4530_00000078:
    cmpwi r28, 0x0
    li r31, 0x1
    beq lbl_fn_806A4530_00000110
    clrlwi. r0, r27, 27
    li r24, 0x0
    li r4, 0x0
    bne lbl_fn_806A4530_000000B0
    slwi r0, r28, 27
    srwi r3, r28, 31
    subf r0, r3, r0
    rotlwi r0, r0, 5
    add. r0, r0, r3
    bne lbl_fn_806A4530_000000B0
    li r4, 0x1
lbl_fn_806A4530_000000B0:
    cmpwi r4, 0x0
    beq lbl_fn_806A4530_00000104
    li r23, 0x1
    bl fn_806A3048
    cmpwi r3, 0x0
    beq lbl_fn_806A4530_000000F8
    clrlwi r4, r27, 3
    lis r0, 0x1000
    cmplw r4, r0
    li r3, 0x0
    blt lbl_fn_806A4530_000000EC
    lis r0, 0x1800
    cmplw r4, r0
    bge lbl_fn_806A4530_000000EC
    li r3, 0x1
lbl_fn_806A4530_000000EC:
    cmpwi r3, 0x0
    bne lbl_fn_806A4530_000000F8
    li r23, 0x0
lbl_fn_806A4530_000000F8:
    cmpwi r23, 0x0
    beq lbl_fn_806A4530_00000104
    li r24, 0x1
lbl_fn_806A4530_00000104:
    cmpwi r24, 0x0
    bne lbl_fn_806A4530_00000110
    li r31, 0x0
lbl_fn_806A4530_00000110:
    li r3, 0xc
    li r4, 0x60
    bl fn_806A30A0
    cmpwi r31, 0x0
    mr r22, r3
    bne lbl_fn_806A4530_00000140
    addi r0, r28, 0x1f
    li r3, 0xe
    clrrwi r4, r0, 5
    bl fn_806A30A0
    mr r23, r3
    b lbl_fn_806A4530_00000144
lbl_fn_806A4530_00000140:
    mr r23, r27
lbl_fn_806A4530_00000144:
    cmpwi r22, 0x0
    beq lbl_fn_806A4530_00000154
    cmpwi r23, 0x0
    bne lbl_fn_806A4530_0000015C
lbl_fn_806A4530_00000154:
    li r24, -0x31
    b lbl_fn_806A4530_000001DC
lbl_fn_806A4530_0000015C:
    stw r26, 0x20(r22)
    cmpwi r30, 0x0
    addi r24, r22, 0x20
    stw r29, 0x24(r22)
    bne lbl_fn_806A4530_0000017C
    li r0, 0x0
    stw r0, 0x8(r24)
    b lbl_fn_806A4530_00000194
lbl_fn_806A4530_0000017C:
    li r0, 0x1
    mr r4, r30
    stw r0, 0x8(r24)
    addi r3, r24, 0xc
    lbz r5, 0x0(r30)
    bl fn_80698A2C
lbl_fn_806A4530_00000194:
    cmpwi r31, 0x0
    bne lbl_fn_806A4530_000001AC
    mr r3, r23
    mr r4, r27
    mr r5, r28
    bl fn_80698A2C
lbl_fn_806A4530_000001AC:
    stw r23, 0x0(r22)
    li r0, 0x28
    mr r7, r22
    li r4, 0xd
    stw r28, 0x4(r22)
    li r5, 0x2
    li r6, 0x0
    stw r24, 0x8(r22)
    stw r0, 0xc(r22)
    lwz r3, 0x8(r1)
    bl IOS_Ioctlv
    mr r24, r3
lbl_fn_806A4530_000001DC:
    cmpwi r31, 0x0
    bne lbl_fn_806A4530_000001F8
    addi r0, r28, 0x1f
    mr r4, r23
    clrrwi r5, r0, 5
    li r3, 0xe
    bl fn_806A3188
lbl_fn_806A4530_000001F8:
    mr r4, r22
    li r3, 0xc
    li r5, 0x60
    bl fn_806A3188
lbl_fn_806A4530_00000208:
    mr r3, r25
    mr r4, r24
    bl fn_806A32A4
lbl_fn_806A4530_00000214:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806A475C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806A475C_00000288
    lwz r3, 0x8(r1)
    li r4, 0x10
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_8061D080
    mr r30, r3
    mr r4, r31
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A475C_00000288:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A47D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    addi r4, r1, 0x8
    li r27, 0x0
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A47D4_000003C8
    cmpwi r26, 0x0
    bne lbl_fn_806A47D4_000002E4
    li r29, -0x1c
    b lbl_fn_806A47D4_000003BC
lbl_fn_806A47D4_000002E4:
    mr r3, r26
    bl strlen
    addi r0, r3, 0x20
    mr r29, r3
    clrrwi r28, r0, 5
    li r3, 0xc
    mr r4, r28
    bl fn_806A30A0
    mr r31, r3
    bl fn_806A303C
    cmpwi r31, 0x0
    lwz r30, 0x10(r3)
    bne lbl_fn_806A47D4_00000320
    li r29, -0x31
    b lbl_fn_806A47D4_000003BC
lbl_fn_806A47D4_00000320:
    mr r3, r31
    mr r4, r26
    bl strcpy
    lwz r3, 0x8(r1)
    mr r5, r31
    mr r7, r30
    addi r6, r29, 0x1
    li r4, 0x11
    li r8, 0x460
    bl fn_8061D080
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_fn_806A47D4_000003AC
    lwz r3, 0x0(r30)
    addi r0, r30, 0x10
    addi r4, r30, 0x340
    subf r3, r3, r0
    b lbl_fn_806A47D4_00000378
lbl_fn_806A47D4_00000368:
    lwz r0, 0x0(r4)
    add r0, r0, r3
    stw r0, 0x0(r4)
    addi r4, r4, 0x4
lbl_fn_806A47D4_00000378:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806A47D4_00000368
    lwz r0, 0x4(r30)
    mr r27, r30
    add r0, r0, r3
    stw r0, 0x4(r30)
    lwz r0, 0x0(r30)
    add r0, r0, r3
    stw r0, 0x0(r30)
    lwz r0, 0xc(r30)
    add r0, r0, r3
    stw r0, 0xc(r30)
lbl_fn_806A47D4_000003AC:
    mr r4, r31
    mr r5, r28
    li r3, 0xc
    bl fn_806A3188
lbl_fn_806A47D4_000003BC:
    mr r4, r29
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A47D4_000003C8:
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A4914(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    addi r4, r1, 0x8
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A4914_000006B0
    cmpwi r26, 0x0
    bne lbl_fn_806A4914_0000042C
    li r29, 0x0
    b lbl_fn_806A4914_00000438
lbl_fn_806A4914_0000042C:
    mr r3, r25
    bl strlen
    addi r29, r3, 0x1
lbl_fn_806A4914_00000438:
    cmpwi r25, 0x0
    bne lbl_fn_806A4914_00000448
    li r3, 0x0
    b lbl_fn_806A4914_00000454
lbl_fn_806A4914_00000448:
    mr r3, r25
    bl strlen
    addi r3, r3, 0x1
lbl_fn_806A4914_00000454:
    addi r3, r3, 0x1f
    addi r0, r29, 0x1f
    clrrwi r4, r3, 5
    clrrwi r0, r0, 5
    li r3, 0xc
    add r4, r4, r0
    addi r0, r4, 0x5f
    clrrwi r31, r0, 5
    mr r4, r31
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806A4914_00000490
    li r25, -0x31
    b lbl_fn_806A4914_000006A4
lbl_fn_806A4914_00000490:
    li r3, 0xa
    li r4, 0x840
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806A4914_000004C0
    mr r4, r29
    mr r5, r31
    li r3, 0xc
    bl fn_806A3188
    li r25, -0x31
    b lbl_fn_806A4914_000006A4
lbl_fn_806A4914_000004C0:
    cmpwi r25, 0x0
    addi r24, r29, 0x20
    bne lbl_fn_806A4914_000004D4
    li r3, 0x0
    b lbl_fn_806A4914_000004E0
lbl_fn_806A4914_000004D4:
    mr r3, r25
    bl strlen
    addi r3, r3, 0x1
lbl_fn_806A4914_000004E0:
    addi r0, r3, 0x1f
    cmpwi r26, 0x0
    clrrwi r0, r0, 5
    add r23, r24, r0
    bne lbl_fn_806A4914_000004FC
    li r3, 0x0
    b lbl_fn_806A4914_00000508
lbl_fn_806A4914_000004FC:
    mr r3, r25
    bl strlen
    addi r3, r3, 0x1
lbl_fn_806A4914_00000508:
    addi r0, r3, 0x1f
    cmpwi r25, 0x0
    clrrwi r0, r0, 5
    add r22, r23, r0
    beq lbl_fn_806A4914_00000528
    mr r3, r24
    mr r4, r25
    bl strcpy
lbl_fn_806A4914_00000528:
    cmpwi r25, 0x0
    beq lbl_fn_806A4914_00000534
    b lbl_fn_806A4914_00000538
lbl_fn_806A4914_00000534:
    li r24, 0x0
lbl_fn_806A4914_00000538:
    cmpwi r25, 0x0
    stw r24, 0x0(r29)
    bne lbl_fn_806A4914_0000054C
    li r3, 0x0
    b lbl_fn_806A4914_00000554
lbl_fn_806A4914_0000054C:
    mr r3, r25
    bl strlen
lbl_fn_806A4914_00000554:
    cmpwi r26, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_806A4914_0000056C
    mr r3, r23
    mr r4, r26
    bl strcpy
lbl_fn_806A4914_0000056C:
    cmpwi r26, 0x0
    beq lbl_fn_806A4914_00000578
    b lbl_fn_806A4914_0000057C
lbl_fn_806A4914_00000578:
    li r23, 0x0
lbl_fn_806A4914_0000057C:
    cmpwi r26, 0x0
    stw r23, 0x8(r29)
    bne lbl_fn_806A4914_00000590
    li r3, 0x0
    b lbl_fn_806A4914_00000598
lbl_fn_806A4914_00000590:
    mr r3, r26
    bl strlen
lbl_fn_806A4914_00000598:
    cmpwi r27, 0x0
    stw r3, 0xc(r29)
    beq lbl_fn_806A4914_000005B8
    mr r3, r22
    mr r4, r27
    li r5, 0x20
    bl fn_80698A2C
    b lbl_fn_806A4914_000005C8
lbl_fn_806A4914_000005B8:
    mr r3, r22
    li r4, 0x0
    li r5, 0x20
    bl fn_80698DEC
lbl_fn_806A4914_000005C8:
    lwz r0, 0x4(r22)
    cmpwi r0, 0x0
    bne lbl_fn_806A4914_000005DC
    li r0, 0x2
    stw r0, 0x4(r22)
lbl_fn_806A4914_000005DC:
    lwz r0, 0x4(r22)
    cmpwi r0, 0x17
    bne lbl_fn_806A4914_00000608
    li r0, 0x0
    mr r4, r30
    stw r0, 0x0(r28)
    li r25, -0x44
    li r3, 0xa
    li r5, 0x840
    bl fn_806A3188
    b lbl_fn_806A4914_00000694
lbl_fn_806A4914_00000608:
    stw r22, 0x10(r29)
    li r3, 0x20
    li r0, 0x834
    mr r7, r29
    stw r3, 0x14(r29)
    li r4, 0x18
    li r5, 0x3
    li r6, 0x1
    stw r30, 0x18(r29)
    stw r0, 0x1c(r29)
    lwz r3, 0x8(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    mr r25, r3
    blt lbl_fn_806A4914_0000067C
    stw r30, 0x0(r28)
    addi r3, r30, 0x460
    b lbl_fn_806A4914_00000670
lbl_fn_806A4914_00000650:
    stw r3, 0x18(r30)
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806A4914_00000668
    addi r0, r30, 0x20
    stw r0, 0x1c(r30)
lbl_fn_806A4914_00000668:
    lwz r30, 0x1c(r30)
    addi r3, r3, 0x1c
lbl_fn_806A4914_00000670:
    cmpwi r30, 0x0
    bne lbl_fn_806A4914_00000650
    b lbl_fn_806A4914_00000694
lbl_fn_806A4914_0000067C:
    li r0, 0x0
    mr r4, r30
    stw r0, 0x0(r28)
    li r3, 0xa
    li r5, 0x840
    bl fn_806A3188
lbl_fn_806A4914_00000694:
    mr r4, r29
    mr r5, r31
    li r3, 0xc
    bl fn_806A3188
lbl_fn_806A4914_000006A4:
    mr r4, r25
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A4914_000006B0:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806A4BF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    mr r31, r3
    bl fn_806A3050
    cmpwi r3, 0x1
    bne lbl_fn_806A4BF8_0000070C
    cmpwi r30, 0x0
    beq lbl_fn_806A4BF8_0000070C
    mr r4, r30
    li r3, 0xa
    li r5, 0x840
    bl fn_806A3188
lbl_fn_806A4BF8_0000070C:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A4C5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r31, r7
    addi r4, r1, 0x8
    li r3, 0x0
    bl fn_806A31BC
    cmpwi r3, 0x0
    bne lbl_fn_806A4C5C_00000818
    cmpwi r31, 0x0
    blt lbl_fn_806A4C5C_00000778
    cmpwi r31, 0x14
    ble lbl_fn_806A4C5C_00000780
lbl_fn_806A4C5C_00000778:
    li r31, -0x1c
    b lbl_fn_806A4C5C_0000080C
lbl_fn_806A4C5C_00000780:
    li r3, 0xc
    li r4, 0x40
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806A4C5C_000007A0
    li r31, -0x31
    b lbl_fn_806A4C5C_0000080C
lbl_fn_806A4C5C_000007A0:
    stw r26, 0x0(r3)
    cmpwi r29, 0x0
    stw r27, 0x4(r3)
    stw r28, 0x8(r3)
    stw r31, 0xc(r3)
    beq lbl_fn_806A4C5C_000007CC
    mr r4, r29
    mr r5, r31
    addi r3, r3, 0x10
    bl fn_80698A2C
    b lbl_fn_806A4C5C_000007DC
lbl_fn_806A4C5C_000007CC:
    mr r5, r31
    li r4, 0x0
    addi r3, r3, 0x10
    bl fn_80698DEC
lbl_fn_806A4C5C_000007DC:
    lwz r3, 0x8(r1)
    mr r5, r30
    li r4, 0x9
    li r6, 0x24
    li r7, 0x0
    li r8, 0x0
    bl fn_8061D080
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x40
    bl fn_806A3188
lbl_fn_806A4C5C_0000080C:
    mr r4, r31
    li r3, 0x0
    bl fn_806A32A4
lbl_fn_806A4C5C_00000818:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A4D60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r4
    mr r25, r5
    mr r30, r6
    mr r31, r7
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    li r3, 0x0
    bl fn_806A3300
    cmpwi r3, 0x0
    bne lbl_fn_806A4D60_000009F4
    subi r0, r25, 0x1001
    cmplwi r0, 0x1
    bgt lbl_fn_806A4D60_00000880
    li r28, -0x1c
    b lbl_fn_806A4D60_000009E4
lbl_fn_806A4D60_00000880:
    cmpwi r31, 0x0
    li r3, 0x0
    beq lbl_fn_806A4D60_00000898
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bge lbl_fn_806A4D60_0000089C
lbl_fn_806A4D60_00000898:
    li r3, 0x1
lbl_fn_806A4D60_0000089C:
    cmpwi r3, 0x0
    beq lbl_fn_806A4D60_000008AC
    li r3, 0x0
    b lbl_fn_806A4D60_000008B0
lbl_fn_806A4D60_000008AC:
    lwz r3, 0x0(r31)
lbl_fn_806A4D60_000008B0:
    addi r0, r3, 0x7f
    li r3, 0xc
    clrrwi r29, r0, 5
    mr r4, r29
    bl fn_806A30A0
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806A4D60_000008D8
    li r28, -0x31
    b lbl_fn_806A4D60_000009E4
lbl_fn_806A4D60_000008D8:
    stw r26, 0x20(r3)
    addi r5, r3, 0x20
    cmpwi r31, 0x0
    li r4, 0x0
    addi r26, r5, 0x20
    stw r25, 0x24(r3)
    addi r25, r26, 0x20
    beq lbl_fn_806A4D60_00000904
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bge lbl_fn_806A4D60_00000908
lbl_fn_806A4D60_00000904:
    li r4, 0x1
lbl_fn_806A4D60_00000908:
    cmpwi r4, 0x0
    beq lbl_fn_806A4D60_00000918
    li r0, 0x0
    b lbl_fn_806A4D60_0000091C
lbl_fn_806A4D60_00000918:
    lwz r0, 0x0(r31)
lbl_fn_806A4D60_0000091C:
    stw r0, 0x0(r26)
    li r0, 0x8
    cmpwi r31, 0x0
    li r4, 0x0
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stw r25, 0x8(r3)
    beq lbl_fn_806A4D60_00000948
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bge lbl_fn_806A4D60_0000094C
lbl_fn_806A4D60_00000948:
    li r4, 0x1
lbl_fn_806A4D60_0000094C:
    cmpwi r4, 0x0
    beq lbl_fn_806A4D60_0000095C
    li r0, 0x0
    b lbl_fn_806A4D60_00000960
lbl_fn_806A4D60_0000095C:
    lwz r0, 0x0(r31)
lbl_fn_806A4D60_00000960:
    stw r0, 0xc(r3)
    li r0, 0x4
    mr r7, r27
    li r4, 0x1c
    stw r26, 0x10(r3)
    li r5, 0x1
    li r6, 0x2
    stw r0, 0x14(r3)
    lwz r3, 0xc(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_fn_806A4D60_000009D4
    cmpwi r31, 0x0
    beq lbl_fn_806A4D60_000009D4
    lwz r5, 0x0(r26)
    lwz r0, 0x0(r31)
    cmpw r0, r5
    blt lbl_fn_806A4D60_000009CC
    cmpwi r30, 0x0
    beq lbl_fn_806A4D60_000009C0
    mr r3, r30
    mr r4, r25
    bl fn_80698A2C
lbl_fn_806A4D60_000009C0:
    lwz r0, 0x0(r26)
    stw r0, 0x0(r31)
    b lbl_fn_806A4D60_000009D4
lbl_fn_806A4D60_000009CC:
    stw r5, 0x0(r31)
    li r28, -0x1c
lbl_fn_806A4D60_000009D4:
    mr r4, r27
    mr r5, r29
    li r3, 0xc
    bl fn_806A3188
lbl_fn_806A4D60_000009E4:
    lwz r5, 0x8(r1)
    mr r4, r28
    li r3, 0x0
    bl fn_806A35D8
lbl_fn_806A4D60_000009F4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806A4F3C(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x1a0
    stwux r1, r1, r11
    mflr r0
    lis r5, lbl_807BCCE8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    mr r29, r4
    li r4, 0x0
    stw r28, -0x10(r12)
    mr r28, r3
    addi r3, r5, lbl_807BCCE8@l
    bl IOS_Open
    lwz r0, lbl_80880450
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_806A4F3C_00000A6C
    lwz r3, lbl_8087EDF0
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_80880450
lbl_fn_806A4F3C_00000A6C:
    cmpwi r31, 0x0
    bge lbl_fn_806A4F3C_00000A7C
    li r3, -0x1
    b lbl_fn_806A4F3C_00000B40
lbl_fn_806A4F3C_00000A7C:
    mr r3, r29
    li r4, 0x0
    b lbl_fn_806A4F3C_00000A90
lbl_fn_806A4F3C_00000A88:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
lbl_fn_806A4F3C_00000A90:
    cmplwi r4, 0x100
    bge lbl_fn_806A4F3C_00000AA4
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_806A4F3C_00000A88
lbl_fn_806A4F3C_00000AA4:
    subf. r30, r29, r3
    bne lbl_fn_806A4F3C_00000AB4
    li r3, -0x1
    b lbl_fn_806A4F3C_00000B40
lbl_fn_806A4F3C_00000AB4:
    addi r3, r1, 0x80
    li r4, 0x0
    li r5, 0x100
    bl memset
    cmplwi r30, 0x100
    ble lbl_fn_806A4F3C_00000AD0
    li r30, 0x100
lbl_fn_806A4F3C_00000AD0:
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x80
    bl memcpy
    li r10, 0x20
    addi r11, r1, 0x40
    addi r9, r1, 0x20
    addi r8, r1, 0x80
    li r3, -0x1
    li r0, 0x100
    stw r3, 0x40(r1)
    mr r3, r31
    addi r7, r1, 0x60
    li r4, 0x1
    stw r28, 0x20(r1)
    li r5, 0x1
    li r6, 0x2
    stw r11, 0x60(r1)
    stw r10, 0x64(r1)
    stw r9, 0x68(r1)
    stw r10, 0x6c(r1)
    stw r8, 0x70(r1)
    stw r0, 0x74(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl fn_8061C8A0
    lwz r3, 0x60(r1)
    lwz r3, 0x0(r3)
lbl_fn_806A4F3C_00000B40:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r28, -0x10(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A5094(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xc0
    stwux r1, r1, r11
    mflr r0
    lis r5, lbl_807BCCE8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r4
    li r4, 0x0
    stw r29, -0xc(r12)
    mr r29, r3
    addi r3, r5, lbl_807BCCE8@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_fn_806A5094_00000BB4
    li r3, -0x1
    b lbl_fn_806A5094_00000C0C
lbl_fn_806A5094_00000BB4:
    li r9, 0x20
    addi r10, r1, 0x20
    addi r8, r1, 0x60
    addi r0, r1, 0x40
    li r11, -0x1
    stw r29, 0x60(r1)
    addi r7, r1, 0x80
    li r4, 0x2
    stw r30, 0x40(r1)
    li r5, 0x1
    li r6, 0x2
    stw r11, 0x20(r1)
    stw r10, 0x80(r1)
    stw r9, 0x84(r1)
    stw r8, 0x88(r1)
    stw r9, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r9, 0x94(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl fn_8061C8A0
    lwz r3, 0x20(r1)
lbl_fn_806A5094_00000C0C:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A515C(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    lis r4, lbl_807BCCE8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r3
    addi r3, r4, lbl_807BCCE8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_fn_806A515C_00000C74
    li r3, -0x1
    b lbl_fn_806A515C_00000CBC
lbl_fn_806A515C_00000C74:
    li r8, 0x20
    addi r9, r1, 0x20
    addi r0, r1, 0x40
    li r6, -0x1
    stw r6, 0x20(r1)
    addi r7, r1, 0x60
    li r4, 0x3
    li r5, 0x1
    stw r30, 0x40(r1)
    li r6, 0x1
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r0, 0x68(r1)
    stw r8, 0x6c(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl fn_8061C8A0
    lwz r3, 0x20(r1)
lbl_fn_806A515C_00000CBC:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A5208(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x180
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_24
    lis r6, lbl_807BCCE8@ha
    mr r28, r3
    mr r29, r4
    mr r30, r5
    addi r3, r6, lbl_807BCCE8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    li r26, -0x1
    bge lbl_fn_806A5208_00000D2C
    li r3, -0x1
    b lbl_fn_806A5208_00000F8C
lbl_fn_806A5208_00000D2C:
    cmplwi r30, 0x8000
    ble lbl_fn_806A5208_00000D3C
    lis r3, 0x1
    addi r30, r3, -0x8000
lbl_fn_806A5208_00000D3C:
    clrlwi. r0, r29, 27
    beq lbl_fn_806A5208_00000D4C
    subfic r25, r0, 0x20
    b lbl_fn_806A5208_00000D50
lbl_fn_806A5208_00000D4C:
    li r25, 0x0
lbl_fn_806A5208_00000D50:
    addi r3, r1, 0x140
    li r24, 0x0
    li r4, 0x0
    li r5, 0x20
    bl memset
    cmpwi r25, 0x0
    beq lbl_fn_806A5208_00000E18
    cmplw r25, r30
    ble lbl_fn_806A5208_00000D78
    mr r25, r30
lbl_fn_806A5208_00000D78:
    li r8, 0x20
    addi r9, r1, 0x120
    addi r27, r1, 0x140
    addi r0, r1, 0x100
    li r4, -0x1
    stw r28, 0x100(r1)
    mr r3, r31
    addi r7, r1, 0xe0
    stw r4, 0x120(r1)
    li r4, 0x4
    li r5, 0x2
    li r6, 0x1
    stw r9, 0xe0(r1)
    stw r8, 0xe4(r1)
    stw r27, 0xe8(r1)
    stw r25, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r8, 0xf4(r1)
    bl IOS_Ioctlv
    lwz r26, 0x120(r1)
    cmpwi r26, 0x0
    ble lbl_fn_806A5208_00000E08
    mr r24, r26
    mr r3, r29
    mr r4, r27
    mr r5, r26
    bl memcpy
    cmplw r26, r25
    bge lbl_fn_806A5208_00000DFC
    mr r3, r31
    bl fn_8061C8A0
    mr r3, r24
    b lbl_fn_806A5208_00000F8C
lbl_fn_806A5208_00000DFC:
    add r29, r29, r26
    subf r30, r26, r30
    b lbl_fn_806A5208_00000E18
lbl_fn_806A5208_00000E08:
    mr r3, r31
    bl fn_8061C8A0
    mr r3, r26
    b lbl_fn_806A5208_00000F8C
lbl_fn_806A5208_00000E18:
    cmpwi r30, 0x0
    beq lbl_fn_806A5208_00000EC4
    clrrwi. r25, r30, 5
    beq lbl_fn_806A5208_00000EC4
    li r8, 0x20
    addi r9, r1, 0xc0
    addi r0, r1, 0xa0
    li r5, -0x1
    stw r5, 0xc0(r1)
    mr r3, r31
    addi r7, r1, 0x80
    li r4, 0x4
    stw r28, 0xa0(r1)
    li r5, 0x2
    li r6, 0x1
    stw r9, 0x80(r1)
    stw r8, 0x84(r1)
    stw r29, 0x88(r1)
    stw r25, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r8, 0x94(r1)
    bl IOS_Ioctlv
    lwz r26, 0xc0(r1)
    cmpwi r26, 0x0
    ble lbl_fn_806A5208_00000EA4
    cmplw r26, r25
    add r24, r24, r26
    bge lbl_fn_806A5208_00000E98
    mr r3, r31
    bl fn_8061C8A0
    mr r3, r24
    b lbl_fn_806A5208_00000F8C
lbl_fn_806A5208_00000E98:
    add r29, r29, r26
    subf r30, r26, r30
    b lbl_fn_806A5208_00000EC4
lbl_fn_806A5208_00000EA4:
    mr r3, r31
    bl fn_8061C8A0
    cmpwi r24, 0x0
    ble lbl_fn_806A5208_00000EBC
    mr r3, r24
    b lbl_fn_806A5208_00000F8C
lbl_fn_806A5208_00000EBC:
    mr r3, r26
    b lbl_fn_806A5208_00000F8C
lbl_fn_806A5208_00000EC4:
    cmpwi r30, 0x0
    beq lbl_fn_806A5208_00000F74
    clrlwi. r25, r30, 27
    beq lbl_fn_806A5208_00000F74
    addi r3, r1, 0x140
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r8, 0x20
    addi r9, r1, 0x60
    addi r30, r1, 0x140
    addi r0, r1, 0x40
    li r4, -0x1
    stw r28, 0x40(r1)
    mr r3, r31
    addi r7, r1, 0x20
    stw r4, 0x60(r1)
    li r4, 0x4
    li r5, 0x2
    li r6, 0x1
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r30, 0x28(r1)
    stw r25, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r8, 0x34(r1)
    bl IOS_Ioctlv
    lwz r26, 0x60(r1)
    cmpwi r26, 0x0
    ble lbl_fn_806A5208_00000F54
    mr r3, r29
    mr r4, r30
    mr r5, r26
    add r24, r24, r26
    bl memcpy
    b lbl_fn_806A5208_00000F74
lbl_fn_806A5208_00000F54:
    mr r3, r31
    bl fn_8061C8A0
    cmpwi r24, 0x0
    ble lbl_fn_806A5208_00000F6C
    mr r3, r24
    b lbl_fn_806A5208_00000F8C
lbl_fn_806A5208_00000F6C:
    mr r3, r26
    b lbl_fn_806A5208_00000F8C
lbl_fn_806A5208_00000F74:
    cmpwi r24, 0x0
    ble lbl_fn_806A5208_00000F80
    mr r26, r24
lbl_fn_806A5208_00000F80:
    mr r3, r31
    bl fn_8061C8A0
    mr r3, r26
lbl_fn_806A5208_00000F8C:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A54D8(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x180
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_25
    lis r6, lbl_807BCCE8@ha
    mr r28, r3
    mr r29, r4
    mr r30, r5
    addi r3, r6, lbl_807BCCE8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    li r27, -0x1
    bge lbl_fn_806A54D8_00000FFC
    li r3, -0x1
    b lbl_fn_806A54D8_0000124C
lbl_fn_806A54D8_00000FFC:
    clrlwi. r0, r29, 27
    beq lbl_fn_806A54D8_0000100C
    subfic r26, r0, 0x20
    b lbl_fn_806A54D8_00001010
lbl_fn_806A54D8_0000100C:
    li r26, 0x0
lbl_fn_806A54D8_00001010:
    addi r3, r1, 0x140
    li r25, 0x0
    li r4, 0x0
    li r5, 0x20
    bl memset
    cmpwi r26, 0x0
    beq lbl_fn_806A54D8_000010D8
    cmplw r26, r30
    ble lbl_fn_806A54D8_00001038
    mr r26, r30
lbl_fn_806A54D8_00001038:
    mr r4, r29
    mr r5, r26
    addi r3, r1, 0x140
    bl memcpy
    li r9, 0x20
    addi r10, r1, 0x120
    addi r8, r1, 0x100
    addi r0, r1, 0x140
    li r4, -0x1
    stw r28, 0x100(r1)
    mr r3, r31
    addi r7, r1, 0xe0
    stw r4, 0x120(r1)
    li r4, 0x5
    li r5, 0x1
    li r6, 0x2
    stw r10, 0xe0(r1)
    stw r9, 0xe4(r1)
    stw r8, 0xe8(r1)
    stw r9, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r26, 0xf4(r1)
    bl IOS_Ioctlv
    lwz r27, 0x120(r1)
    cmpwi r27, 0x0
    ble lbl_fn_806A54D8_000010C8
    cmplw r27, r26
    mr r25, r27
    bge lbl_fn_806A54D8_000010BC
    mr r3, r31
    bl fn_8061C8A0
    mr r3, r27
    b lbl_fn_806A54D8_0000124C
lbl_fn_806A54D8_000010BC:
    add r29, r29, r27
    subf r30, r27, r30
    b lbl_fn_806A54D8_000010D8
lbl_fn_806A54D8_000010C8:
    mr r3, r31
    bl fn_8061C8A0
    mr r3, r27
    b lbl_fn_806A54D8_0000124C
lbl_fn_806A54D8_000010D8:
    cmpwi r30, 0x0
    beq lbl_fn_806A54D8_00001184
    clrrwi. r26, r30, 5
    beq lbl_fn_806A54D8_00001184
    li r8, 0x20
    addi r9, r1, 0xc0
    addi r0, r1, 0xa0
    li r5, -0x1
    stw r5, 0xc0(r1)
    mr r3, r31
    addi r7, r1, 0x80
    li r4, 0x5
    stw r28, 0xa0(r1)
    li r5, 0x1
    li r6, 0x2
    stw r9, 0x80(r1)
    stw r8, 0x84(r1)
    stw r0, 0x88(r1)
    stw r8, 0x8c(r1)
    stw r29, 0x90(r1)
    stw r26, 0x94(r1)
    bl IOS_Ioctlv
    lwz r27, 0xc0(r1)
    cmpwi r27, 0x0
    ble lbl_fn_806A54D8_00001164
    cmplw r27, r26
    add r25, r25, r27
    bge lbl_fn_806A54D8_00001158
    mr r3, r31
    bl fn_8061C8A0
    mr r3, r25
    b lbl_fn_806A54D8_0000124C
lbl_fn_806A54D8_00001158:
    add r29, r29, r27
    subf r30, r27, r30
    b lbl_fn_806A54D8_00001184
lbl_fn_806A54D8_00001164:
    mr r3, r31
    bl fn_8061C8A0
    cmpwi r25, 0x0
    ble lbl_fn_806A54D8_0000117C
    mr r3, r25
    b lbl_fn_806A54D8_0000124C
lbl_fn_806A54D8_0000117C:
    mr r3, r27
    b lbl_fn_806A54D8_0000124C
lbl_fn_806A54D8_00001184:
    cmpwi r30, 0x0
    beq lbl_fn_806A54D8_00001234
    clrlwi. r26, r30, 27
    beq lbl_fn_806A54D8_00001234
    addi r3, r1, 0x140
    li r4, 0x0
    li r5, 0x20
    bl memset
    mr r4, r29
    mr r5, r26
    addi r3, r1, 0x140
    bl memcpy
    li r9, 0x20
    addi r10, r1, 0x60
    addi r8, r1, 0x40
    addi r0, r1, 0x140
    li r4, -0x1
    stw r28, 0x40(r1)
    mr r3, r31
    addi r7, r1, 0x20
    stw r4, 0x60(r1)
    li r4, 0x5
    li r5, 0x1
    li r6, 0x2
    stw r10, 0x20(r1)
    stw r9, 0x24(r1)
    stw r8, 0x28(r1)
    stw r9, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r26, 0x34(r1)
    bl IOS_Ioctlv
    lwz r27, 0x60(r1)
    cmpwi r27, 0x0
    ble lbl_fn_806A54D8_00001214
    add r25, r25, r27
    b lbl_fn_806A54D8_00001234
lbl_fn_806A54D8_00001214:
    mr r3, r31
    bl fn_8061C8A0
    cmpwi r25, 0x0
    ble lbl_fn_806A54D8_0000122C
    mr r3, r25
    b lbl_fn_806A54D8_0000124C
lbl_fn_806A54D8_0000122C:
    mr r3, r27
    b lbl_fn_806A54D8_0000124C
lbl_fn_806A54D8_00001234:
    cmpwi r25, 0x0
    ble lbl_fn_806A54D8_00001240
    mr r27, r25
lbl_fn_806A54D8_00001240:
    mr r3, r31
    bl fn_8061C8A0
    mr r3, r27
lbl_fn_806A54D8_0000124C:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A5798(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    lis r4, lbl_807BCCE8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r3
    addi r3, r4, lbl_807BCCE8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_fn_806A5798_000012B0
    li r3, -0x1
    b lbl_fn_806A5798_000012F8
lbl_fn_806A5798_000012B0:
    li r8, 0x20
    addi r9, r1, 0x20
    addi r0, r1, 0x40
    li r6, -0x1
    stw r6, 0x20(r1)
    addi r7, r1, 0x60
    li r4, 0x6
    li r5, 0x1
    stw r30, 0x40(r1)
    li r6, 0x1
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r0, 0x68(r1)
    stw r8, 0x6c(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl fn_8061C8A0
    lwz r3, 0x20(r1)
lbl_fn_806A5798_000012F8:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A5844(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_24
    lis r31, lbl_80834120@ha
    lis r8, lbl_807BCCE8@ha
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r31, r31, lbl_80834120@l
    addi r3, r8, lbl_807BCCE8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r29, r3
    bge lbl_fn_806A5844_00001374
    li r3, -0x1
    b lbl_fn_806A5844_00001464
lbl_fn_806A5844_00001374:
    bl OSDisableInterrupts
    lwz r0, lbl_80880454
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_806A5844_000013C8
    addi r3, r31, 0x0
    bl fn_806A5C88
    addi r3, r31, 0x20
    li r4, 0x0
    li r5, 0x1000
    bl memset
    addi r3, r31, 0x1020
    li r4, 0x0
    li r5, 0x1000
    bl memset
    addi r3, r31, 0x2020
    li r4, 0x0
    li r5, 0x1000
    bl memset
    li r0, 0x1
    stw r0, lbl_80880454
lbl_fn_806A5844_000013C8:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r3, r31, 0x0
    bl fn_806A5C8C
    mr r4, r25
    mr r5, r26
    addi r3, r31, 0x20
    bl memcpy
    mr r4, r27
    mr r5, r28
    addi r3, r31, 0x1020
    bl memcpy
    li r10, 0x20
    addi r11, r1, 0x40
    addi r9, r1, 0x20
    addi r8, r31, 0x20
    addi r0, r31, 0x1020
    li r3, -0x1
    stw r3, 0x40(r1)
    mr r3, r29
    addi r7, r1, 0x60
    li r4, 0x7
    stw r24, 0x20(r1)
    li r5, 0x1
    li r6, 0x3
    stw r11, 0x60(r1)
    stw r10, 0x64(r1)
    stw r9, 0x68(r1)
    stw r10, 0x6c(r1)
    stw r8, 0x70(r1)
    stw r26, 0x74(r1)
    stw r0, 0x78(r1)
    stw r28, 0x7c(r1)
    bl IOS_Ioctlv
    addi r3, r31, 0x0
    bl fn_806A5C90
    mr r3, r29
    bl fn_8061C8A0
    lwz r3, 0x40(r1)
lbl_fn_806A5844_00001464:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A59B0(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_26
    lis r31, lbl_80834120@ha
    lis r6, lbl_807BCCE8@ha
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r31, lbl_80834120@l
    addi r3, r6, lbl_807BCCE8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r29, r3
    bge lbl_fn_806A59B0_000014D8
    li r3, -0x1
    b lbl_fn_806A59B0_000015AC
lbl_fn_806A59B0_000014D8:
    bl OSDisableInterrupts
    lwz r0, lbl_80880454
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_806A59B0_0000152C
    addi r3, r31, 0x0
    bl fn_806A5C88
    addi r3, r31, 0x20
    li r4, 0x0
    li r5, 0x1000
    bl memset
    addi r3, r31, 0x1020
    li r4, 0x0
    li r5, 0x1000
    bl memset
    addi r3, r31, 0x2020
    li r4, 0x0
    li r5, 0x1000
    bl memset
    li r0, 0x1
    stw r0, lbl_80880454
lbl_fn_806A59B0_0000152C:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r3, r31, 0x0
    bl fn_806A5C8C
    mr r4, r27
    mr r5, r28
    addi r3, r31, 0x2020
    bl memcpy
    li r9, 0x20
    addi r10, r1, 0x40
    addi r8, r1, 0x20
    addi r0, r31, 0x2020
    li r4, -0x1
    stw r26, 0x20(r1)
    mr r3, r29
    addi r7, r1, 0x60
    stw r4, 0x40(r1)
    li r4, 0xa
    li r5, 0x1
    li r6, 0x2
    stw r10, 0x60(r1)
    stw r9, 0x64(r1)
    stw r8, 0x68(r1)
    stw r9, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r28, 0x74(r1)
    bl IOS_Ioctlv
    addi r3, r31, 0x0
    bl fn_806A5C90
    mr r3, r29
    bl fn_8061C8A0
    lwz r3, 0x40(r1)
lbl_fn_806A59B0_000015AC:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A5AF8(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xc0
    stwux r1, r1, r11
    mflr r0
    lis r5, lbl_807BCCE8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r4
    li r4, 0x0
    stw r29, -0xc(r12)
    mr r29, r3
    addi r3, r5, lbl_807BCCE8@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_fn_806A5AF8_00001618
    li r3, -0x1
    b lbl_fn_806A5AF8_00001670
lbl_fn_806A5AF8_00001618:
    li r9, 0x20
    addi r10, r1, 0x60
    addi r8, r1, 0x40
    addi r0, r1, 0x20
    li r5, -0x1
    stw r29, 0x40(r1)
    addi r7, r1, 0x80
    li r4, 0xd
    stw r5, 0x60(r1)
    li r5, 0x1
    li r6, 0x2
    stw r30, 0x20(r1)
    stw r10, 0x80(r1)
    stw r9, 0x84(r1)
    stw r8, 0x88(r1)
    stw r9, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r9, 0x94(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl fn_8061C8A0
    lwz r3, 0x60(r1)
lbl_fn_806A5AF8_00001670:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A5BC0(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xc0
    stwux r1, r1, r11
    mflr r0
    lis r5, lbl_807BCCE8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r4
    li r4, 0x0
    stw r29, -0xc(r12)
    mr r29, r3
    addi r3, r5, lbl_807BCCE8@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_fn_806A5BC0_000016E0
    li r3, -0x1
    b lbl_fn_806A5BC0_00001738
lbl_fn_806A5BC0_000016E0:
    li r9, 0x20
    addi r10, r1, 0x60
    addi r8, r1, 0x40
    addi r0, r1, 0x20
    li r5, -0x1
    stw r29, 0x40(r1)
    addi r7, r1, 0x80
    li r4, 0xe
    stw r5, 0x60(r1)
    li r5, 0x1
    li r6, 0x2
    stw r30, 0x20(r1)
    stw r10, 0x80(r1)
    stw r9, 0x84(r1)
    stw r8, 0x88(r1)
    stw r9, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r9, 0x94(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl fn_8061C8A0
    lwz r3, 0x60(r1)
lbl_fn_806A5BC0_00001738:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_806A5C88(void)
{
    nofralloc
    b fn_805F30F0
}

asm void fn_806A5C8C(void)
{
    nofralloc
    b fn_805F3130
}

asm void fn_806A5C90(void)
{
    nofralloc
    b fn_805F3210
}

asm void fn_806A5CA0(void)
{
    nofralloc
    mr r9, r3
    b lbl_fn_806A5CA0_00001784
lbl_fn_806A5CA0_00001778:
    stb r4, 0x0(r9)
    addi r9, r9, 0x1
    subi r5, r5, 0x1
lbl_fn_806A5CA0_00001784:
    clrlwi. r0, r9, 30
    beq lbl_fn_806A5CA0_00001794
    cmpwi r5, 0x0
    bne lbl_fn_806A5CA0_00001778
lbl_fn_806A5CA0_00001794:
    slwi r7, r4, 8
    cmplwi r5, 0x3
    or r8, r4, r7
    slwi r6, r4, 24
    slwi r0, r4, 16
    srwi r7, r5, 2
    or r0, r6, r0
    or r8, r8, r0
    ble lbl_fn_806A5CA0_00001810
    srwi. r6, r7, 3
    slwi r0, r7, 2
    neg r0, r0
    mtctr r6
    beq lbl_fn_806A5CA0_000017FC
lbl_fn_806A5CA0_000017CC:
    stw r8, 0x0(r9)
    stw r8, 0x4(r9)
    stw r8, 0x8(r9)
    stw r8, 0xc(r9)
    stw r8, 0x10(r9)
    stw r8, 0x14(r9)
    stw r8, 0x18(r9)
    stw r8, 0x1c(r9)
    addi r9, r9, 0x20
    bdnz lbl_fn_806A5CA0_000017CC
    andi. r7, r7, 0x7
    beq lbl_fn_806A5CA0_0000180C
lbl_fn_806A5CA0_000017FC:
    mtctr r7
lbl_fn_806A5CA0_00001800:
    stw r8, 0x0(r9)
    addi r9, r9, 0x4
    bdnz lbl_fn_806A5CA0_00001800
lbl_fn_806A5CA0_0000180C:
    add r5, r5, r0
lbl_fn_806A5CA0_00001810:
    cmpwi r5, 0x0
    beqlr
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_806A5CA0_00001854
lbl_fn_806A5CA0_00001824:
    stb r4, 0x0(r9)
    stb r4, 0x1(r9)
    stb r4, 0x2(r9)
    stb r4, 0x3(r9)
    stb r4, 0x4(r9)
    stb r4, 0x5(r9)
    stb r4, 0x6(r9)
    stb r4, 0x7(r9)
    addi r9, r9, 0x8
    bdnz lbl_fn_806A5CA0_00001824
    andi. r5, r5, 0x7
    beqlr
lbl_fn_806A5CA0_00001854:
    mtctr r5
lbl_fn_806A5CA0_00001858:
    stb r4, 0x0(r9)
    addi r9, r9, 0x1
    bdnz lbl_fn_806A5CA0_00001858
    blr
}

asm void fn_806A5DA0(void)
{
    nofralloc
    slwi r0, r3, 16
    add r3, r0, r4
    blr
}

asm void fn_806A5DB0(void)
{
    nofralloc
    srwi r0, r3, 16
    sth r0, 0x0(r4)
    sth r3, 0x0(r5)
    blr
}

asm void fn_806A5DC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0xbcc
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80837140@ha
    addi r3, r31, lbl_80837140@l
    bl fn_806A5CA0
    addi r7, r31, lbl_80837140@l
    li r6, 0x0
    stw r6, 0x1b8(r7)
    li r0, 0x18
    mulli r3, r0, 0x38
    stw r6, 0x1f0(r7)
    stw r6, 0x228(r7)
    add r5, r7, r3
    mulli r0, r0, 0x2c
    li r3, 0x0
    stw r6, 0x260(r7)
    stw r6, 0x298(r7)
    add r4, r7, r0
    stw r6, 0x2d0(r7)
    stw r6, 0x308(r7)
    stw r6, 0x340(r7)
    stw r6, 0x378(r7)
    stw r6, 0x3b0(r7)
    stw r6, 0x3e8(r7)
    stw r6, 0x420(r7)
    stw r6, 0x458(r7)
    stw r6, 0x490(r7)
    stw r6, 0x4c8(r7)
    stw r6, 0x500(r7)
    stw r6, 0x538(r7)
    stw r6, 0x570(r7)
    stw r6, 0x5a8(r7)
    stw r6, 0x5e0(r7)
    stw r6, 0x618(r7)
    stw r6, 0x650(r7)
    stw r6, 0x688(r7)
    stw r6, 0x6c0(r7)
    stw r6, 0x1b8(r5)
    stw r6, 0x1f0(r5)
    stw r6, 0x764(r7)
    stw r6, 0x790(r7)
    stw r6, 0x7bc(r7)
    stw r6, 0x7e8(r7)
    stw r6, 0x814(r7)
    stw r6, 0x840(r7)
    stw r6, 0x86c(r7)
    stw r6, 0x898(r7)
    stw r6, 0x8c4(r7)
    stw r6, 0x8f0(r7)
    stw r6, 0x91c(r7)
    stw r6, 0x948(r7)
    stw r6, 0x974(r7)
    stw r6, 0x9a0(r7)
    stw r6, 0x9cc(r7)
    stw r6, 0x9f8(r7)
    stw r6, 0xa24(r7)
    stw r6, 0xa50(r7)
    stw r6, 0xa7c(r7)
    stw r6, 0xaa8(r7)
    stw r6, 0xad4(r7)
    stw r6, 0xb00(r7)
    stw r6, 0xb2c(r7)
    stw r6, 0xb58(r7)
    stw r6, 0x764(r4)
    stw r6, 0x790(r4)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A5EF0(void)
{
    nofralloc
    b fn_806A5F00
}

asm void fn_806A5F00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    rlwinm. r0, r3, 0, 16, 13
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_fn_806A5F00_00001A04
    lis r4, lbl_80837D10@ha
    li r0, 0xa
    addi r4, r4, lbl_80837D10@l
    li r3, 0xa
    stw r0, 0x1c(r4)
    b lbl_fn_806A5F00_00001B44
lbl_fn_806A5F00_00001A04:
    rlwinm r5, r3, 0, 14, 15
    subis r0, r5, 0x3
    cmplwi r0, 0x0
    bne lbl_fn_806A5F00_00001A2C
    lis r4, lbl_80837D10@ha
    li r0, 0xa
    addi r4, r4, lbl_80837D10@l
    li r3, 0xa
    stw r0, 0x1c(r4)
    b lbl_fn_806A5F00_00001B44
lbl_fn_806A5F00_00001A2C:
    rlwinm. r5, r3, 0, 15, 15
    beq lbl_fn_806A5F00_00001A4C
    lis r3, lbl_80837D10@ha
    addi r3, r3, lbl_80837D10@l
    lwz r0, 0x14(r3)
    oris r0, r0, 0x1
    stw r0, 0x14(r3)
    b lbl_fn_806A5F00_00001A60
lbl_fn_806A5F00_00001A4C:
    lis r3, lbl_80837D10@ha
    addi r3, r3, lbl_80837D10@l
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x14(r3)
lbl_fn_806A5F00_00001A60:
    lis r7, lbl_80837D10@ha
    cmpwi r5, 0x0
    lwz r3, lbl_80837D10@l(r7)
    addi r6, r7, lbl_80837D10@l
    li r0, 0x0
    stw r0, 0xc(r6)
    addi r5, r6, 0x48
    ori r3, r3, 0x1
    stw r5, 0x8(r6)
    stw r3, lbl_80837D10@l(r7)
    stw r0, 0x10(r6)
    beq lbl_fn_806A5F00_00001AA0
    lwz r0, 0x14(r6)
    oris r0, r0, 0x1
    stw r0, 0x14(r6)
    b lbl_fn_806A5F00_00001AAC
lbl_fn_806A5F00_00001AA0:
    lwz r0, 0x14(r6)
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x14(r6)
lbl_fn_806A5F00_00001AAC:
    lis r11, lbl_80837D10@ha
    lis r9, fn_806A6090@ha
    addi r11, r11, lbl_80837D10@l
    lis r8, fn_806A6250@ha
    li r10, 0x0
    lis r7, fn_806A64B0@ha
    lis r6, fn_806A64F0@ha
    lis r5, fn_806A6570@ha
    lis r3, fn_806A6580@ha
    addi r9, r9, fn_806A6090@l
    addi r8, r8, fn_806A6250@l
    addi r7, r7, fn_806A64B0@l
    addi r6, r6, fn_806A64F0@l
    addi r5, r5, fn_806A6570@l
    addi r3, r3, fn_806A6580@l
    li r0, 0x1
    stw r4, 0x18(r11)
    addi r31, r11, 0x48
    li r30, 0x0
    stw r10, 0x1c(r11)
    stw r10, 0x20(r11)
    stw r0, 0x3c(r11)
    stw r9, 0x24(r11)
    stw r8, 0x28(r11)
    stw r7, 0x2c(r11)
    stw r6, 0x30(r11)
    stw r5, 0x34(r11)
    stw r3, 0x38(r11)
lbl_fn_806A5F00_00001B1C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x1880
    bl fn_806A5CA0
    addi r30, r30, 0x1
    addi r31, r31, 0x1880
    cmpwi r30, 0x1a
    blt lbl_fn_806A5F00_00001B1C
    bl fn_806A65E0
    li r3, 0x0
lbl_fn_806A5F00_00001B44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A6090(void)
{
    nofralloc
    lbz r5, 0x0(r3)
    lbz r3, 0x1(r3)
    cmplwi r5, 0xa0
    beq lbl_fn_806A6090_00001C00
    bge lbl_fn_806A6090_00001B98
    cmplwi r5, 0x85
    bge lbl_fn_806A6090_00001B8C
    cmplwi r5, 0x80
    beq lbl_fn_806A6090_00001C00
    bge lbl_fn_806A6090_00001BE8
    b lbl_fn_806A6090_00001BC0
lbl_fn_806A6090_00001B8C:
    cmplwi r5, 0x87
    bge lbl_fn_806A6090_00001BE8
    b lbl_fn_806A6090_00001C00
lbl_fn_806A6090_00001B98:
    cmplwi r5, 0xed
    bge lbl_fn_806A6090_00001BB4
    cmplwi r5, 0xeb
    bge lbl_fn_806A6090_00001C00
    cmplwi r5, 0xe0
    bge lbl_fn_806A6090_00001BE8
    b lbl_fn_806A6090_00001BD0
lbl_fn_806A6090_00001BB4:
    cmplwi r5, 0x100
    bge lbl_fn_806A6090_00001BC0
    b lbl_fn_806A6090_00001BE8
lbl_fn_806A6090_00001BC0:
    sth r5, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6090_00001BD0:
    addis r5, r5, 0x1
    li r3, 0x1
    subi r0, r5, 0x140
    sth r0, 0x0(r4)
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6090_00001BE8:
    addi r0, r5, 0x11
    clrlwi r0, r0, 24
    cmplwi r0, 0xa
    ble lbl_fn_806A6090_00001C00
    cmplwi r5, 0xff
    bne lbl_fn_806A6090_00001C14
lbl_fn_806A6090_00001C00:
    li r0, 0x5f
    sth r0, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6090_00001C14:
    cmplwi r3, 0xfd
    blt lbl_fn_806A6090_00001C30
    li r0, 0x5f
    sth r0, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6090_00001C30:
    addi r0, r5, 0x7f
    clrlwi r0, r0, 24
    cmplwi r0, 0x3
    bgt lbl_fn_806A6090_00001C48
    subi r0, r5, 0x81
    b lbl_fn_806A6090_00001CBC
lbl_fn_806A6090_00001C48:
    addi r0, r5, 0x79
    clrlwi r0, r0, 24
    cmplwi r0, 0x18
    bgt lbl_fn_806A6090_00001C60
    subi r0, r5, 0x83
    b lbl_fn_806A6090_00001CBC
lbl_fn_806A6090_00001C60:
    addi r0, r5, 0x20
    clrlwi r0, r0, 24
    cmplwi r0, 0xa
    bgt lbl_fn_806A6090_00001C78
    subi r0, r5, 0xc3
    b lbl_fn_806A6090_00001CBC
lbl_fn_806A6090_00001C78:
    addi r0, r5, 0x13
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_806A6090_00001C90
    subi r0, r5, 0xc5
    b lbl_fn_806A6090_00001CBC
lbl_fn_806A6090_00001C90:
    addi r0, r5, 0x6
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bgt lbl_fn_806A6090_00001CA8
    subi r0, r5, 0xd0
    b lbl_fn_806A6090_00001CBC
lbl_fn_806A6090_00001CA8:
    li r0, 0x5f
    sth r0, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6090_00001CBC:
    subi r3, r3, 0x40
    cmplwi r3, 0xbc
    ble lbl_fn_806A6090_00001CDC
    li r0, 0x5f
    sth r0, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6090_00001CDC:
    mulli r0, r0, 0x17a
    lis r5, lbl_80767388@ha
    slwi r3, r3, 1
    addi r5, r5, lbl_80767388@l
    add r0, r5, r0
    lhzx r0, r3, r0
    sth r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806A6090_00001D14
    li r0, 0x5f
    sth r0, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6090_00001D14:
    li r3, 0x2
    li r4, 0x2
    b fn_806A5DA0
}

asm void fn_806A6250(void)
{
    nofralloc
    lhz r0, 0x0(r3)
    clrlwi r5, r0, 24
    srawi r3, r0, 8
    cmplwi r5, 0x80
    bge lbl_fn_806A6250_00001D54
    clrlwi. r0, r3, 24
    bne lbl_fn_806A6250_00001D54
    li r0, 0x0
    stb r5, 0x0(r4)
    li r3, 0x1
    stb r0, 0x1(r4)
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6250_00001D54:
    clrlslwi r0, r3, 24, 8
    add r0, r0, r5
    clrlwi r9, r0, 16
    cmplwi r9, 0xff61
    blt lbl_fn_806A6250_00001D90
    cmplwi r9, 0xff9f
    bgt lbl_fn_806A6250_00001D90
    subis r3, r9, 0x1
    li r0, 0x0
    addi r3, r3, 0x140
    stb r3, 0x0(r4)
    li r3, 0x1
    stb r0, 0x1(r4)
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6250_00001D90:
    cmplwi r9, 0x5f
    bne lbl_fn_806A6250_00001DAC
    li r0, 0x5f
    stb r0, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6250_00001DAC:
    lis r5, lbl_80767388@ha
    li r6, 0x0
    addi r5, r5, lbl_80767388@l
    li r0, 0x15
    nop
lbl_fn_806A6250_00001DC0:
    mr r8, r5
    li r7, 0x0
    mtctr r0
    nop
lbl_fn_806A6250_00001DD0:
    lhz r3, 0x0(r8)
    cmplw r3, r9
    beq lbl_fn_806A6250_00001E68
    lhz r3, 0x2(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_fn_806A6250_00001E68
    lhz r3, 0x4(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_fn_806A6250_00001E68
    lhz r3, 0x6(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_fn_806A6250_00001E68
    lhz r3, 0x8(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_fn_806A6250_00001E68
    lhz r3, 0xa(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_fn_806A6250_00001E68
    lhz r3, 0xc(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_fn_806A6250_00001E68
    lhz r3, 0xe(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_fn_806A6250_00001E68
    lhz r3, 0x10(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_fn_806A6250_00001E68
    addi r7, r7, 0x1
    addi r8, r8, 0x12
    bdnz lbl_fn_806A6250_00001DD0
lbl_fn_806A6250_00001E68:
    cmpwi r7, 0xbd
    blt lbl_fn_806A6250_00001E80
    addi r6, r6, 0x1
    addi r5, r5, 0x17a
    cmpwi r6, 0x2d
    blt lbl_fn_806A6250_00001DC0
lbl_fn_806A6250_00001E80:
    cmpwi r7, 0xbd
    bne lbl_fn_806A6250_00001E9C
    li r0, 0x5f
    stb r0, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6250_00001E9C:
    cmplwi r6, 0x3
    bgt lbl_fn_806A6250_00001EBC
    addi r3, r6, 0x81
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r5, r0, 16
    b lbl_fn_806A6250_00001F60
lbl_fn_806A6250_00001EBC:
    subi r0, r6, 0x4
    cmplwi r0, 0x18
    bgt lbl_fn_806A6250_00001EE0
    addi r3, r6, 0x83
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r5, r0, 16
    b lbl_fn_806A6250_00001F60
lbl_fn_806A6250_00001EE0:
    subi r0, r6, 0x1d
    cmplwi r0, 0xa
    bgt lbl_fn_806A6250_00001F04
    addi r3, r6, 0xc3
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r5, r0, 16
    b lbl_fn_806A6250_00001F60
lbl_fn_806A6250_00001F04:
    subi r0, r6, 0x28
    cmplwi r0, 0x1
    bgt lbl_fn_806A6250_00001F28
    addi r3, r6, 0xc5
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r5, r0, 16
    b lbl_fn_806A6250_00001F60
lbl_fn_806A6250_00001F28:
    subi r0, r6, 0x2a
    cmplwi r0, 0x2
    bgt lbl_fn_806A6250_00001F4C
    addi r3, r6, 0xd0
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r5, r0, 16
    b lbl_fn_806A6250_00001F60
lbl_fn_806A6250_00001F4C:
    li r0, 0x5f
    stb r0, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_806A5DA0
lbl_fn_806A6250_00001F60:
    extrwi r0, r5, 8, 16
    stb r0, 0x0(r4)
    li r3, 0x2
    stb r5, 0x1(r4)
    li r4, 0x2
    b fn_806A5DA0
}

asm void fn_806A64B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    bl fn_806A6090
    addi r4, r1, 0xa
    addi r5, r1, 0x8
    bl fn_806A5DB0
    lwz r0, 0x14(r1)
    lha r3, 0xa(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A64F0(void)
{
    nofralloc
    cmplwi r4, 0x1
    clrlwi r0, r3, 24
    beq lbl_fn_806A64F0_00001FD8
    cmplwi r4, 0x2
    beq lbl_fn_806A64F0_00002004
    b lbl_fn_806A64F0_00002030
lbl_fn_806A64F0_00001FD8:
    cmplwi r0, 0x81
    li r3, 0x0
    blt lbl_fn_806A64F0_00001FEC
    cmplwi r0, 0x9f
    ble lbl_fn_806A64F0_00001FFC
lbl_fn_806A64F0_00001FEC:
    cmplwi r0, 0xe0
    bltlr
    cmplwi r0, 0xfc
    bgtlr
lbl_fn_806A64F0_00001FFC:
    li r3, 0x1
    blr
lbl_fn_806A64F0_00002004:
    cmplwi r0, 0x40
    li r3, 0x0
    blt lbl_fn_806A64F0_00002018
    cmplwi r0, 0x7e
    ble lbl_fn_806A64F0_00002028
lbl_fn_806A64F0_00002018:
    cmplwi r0, 0x80
    bltlr
    cmplwi r0, 0xfc
    bgtlr
lbl_fn_806A64F0_00002028:
    li r3, 0x1
    blr
lbl_fn_806A64F0_00002030:
    li r3, 0x0
    blr
}
