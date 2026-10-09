#include "revolution/types.h"

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8061A880(void);
extern void fn_8061A980(void);
extern void fn_8061AD30(void);
extern void fn_8061AE90(void);
extern void fn_8061AFD0(void);
extern void fn_8061B0B0(void);
extern void fn_8061B180(void);
extern void fn_8061B290(void);
extern void fn_8061B4D0(void);
extern void fn_8061B5D0(void);
extern void fn_8061B860(void);
extern void fn_8061B930(void);
extern void fn_8061B940(void);
extern void fn_8061B9D0(void);
extern void fn_8061B9F0(void);
extern void fn_8061BAA0(void);
extern void fn_8061BAC0(void);
extern void fn_8061F480(void);
extern void fn_806210B0(void);
extern void fn_806212F0(void);
extern void fn_80621D30(void);
extern void fn_806823B0(void);
extern void fn_80682428(void);
extern void nandConvertErrorCode(void);
extern void nandGenerateAbsPath(void);
extern void nandIsInitialized(void);
extern void nandIsPrivatePath(void);
extern void sprintf(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087E8D8;
extern u32 lbl_8087E8DC;

/* Function declarations */
void fn_8061E130(void);
void fn_8061E270(void);
void fn_8061E2F0(void);
void fn_8061E370(void);
void fn_8061E3F0(void);
void fn_8061E470(void);
void fn_8061E520(void);
void fn_8061E5C0(void);
void fn_8061E6A0(void);
void fn_8061E760(void);
void fn_8061E7D0(void);
void fn_8061E850(void);
void fn_8061E8C0(void);
void fn_8061E940(void);
void fn_8061E9E0(void);
void fn_8061EA90(void);
void fn_8061EBE0(void);
void fn_8061EC60(void);
void fn_8061ECE0(void);
void fn_8061ED60(void);
void fn_8061EF10(void);
void fn_8061EF90(void);
void fn_8061F020(void);
void fn_8061F080(void);
void fn_8061F110(void);
void fn_8061F270(void);
void fn_8061F2F0(void);
void fn_8061F360(void);
void fn_8061F3D0(void);
void fn_8061F460(void);
void fn_8061F470(void);

asm void fn_8061E130(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    li r0, 0x0
    stw r0, 0x18(r1)
    mr r26, r3
    mr r27, r4
    stw r0, 0x1c(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r7
    stw r0, 0x20(r1)
    mr r31, r8
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8061F480
    cmpwi r3, 0x0
    bne lbl_fn_8061E130_00000090
    li r3, -0x65
    b lbl_fn_8061E130_00000128
lbl_fn_8061E130_00000090:
    mr r4, r26
    addi r3, r1, 0x18
    bl nandGenerateAbsPath
    cmpwi r31, 0x0
    bne lbl_fn_8061E130_000000BC
    addi r3, r1, 0x18
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_fn_8061E130_000000BC
    li r3, -0x66
    b lbl_fn_8061E130_00000128
lbl_fn_8061E130_000000BC:
    rlwinm. r0, r27, 0, 27, 27
    bne lbl_fn_8061E130_000000CC
    li r3, -0x65
    b lbl_fn_8061E130_00000128
lbl_fn_8061E130_000000CC:
    mr r3, r27
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_8061F080
    cmpwi r30, 0x0
    beq lbl_fn_8061E130_00000110
    lis r8, fn_80621D30@ha
    lwz r5, 0x10(r1)
    lwz r6, 0xc(r1)
    mr r4, r28
    lwz r7, 0x8(r1)
    mr r9, r29
    addi r3, r1, 0x18
    addi r8, r8, fn_80621D30@l
    bl fn_8061B5D0
    b lbl_fn_8061E130_00000128
lbl_fn_8061E130_00000110:
    lwz r5, 0x10(r1)
    mr r4, r28
    lwz r6, 0xc(r1)
    addi r3, r1, 0x18
    lwz r7, 0x8(r1)
    bl fn_8061B4D0
lbl_fn_8061E130_00000128:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8061E270(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_fn_8061E270_00000194
    mr r3, r29
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_8061E130
    bl nandConvertErrorCode
    b lbl_fn_8061E270_00000198
lbl_fn_8061E270_00000194:
    li r3, -0x80
lbl_fn_8061E270_00000198:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061E2F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_fn_8061E2F0_00000214
    mr r3, r29
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_8061E130
    bl nandConvertErrorCode
    b lbl_fn_8061E2F0_00000218
lbl_fn_8061E2F0_00000214:
    li r3, -0x80
lbl_fn_8061E2F0_00000218:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061E370(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E370_0000027C
    li r3, -0x80
    b lbl_fn_8061E370_000002A0
lbl_fn_8061E370_0000027C:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x0
    bl fn_8061E130
    bl nandConvertErrorCode
lbl_fn_8061E370_000002A0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061E3F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E3F0_000002FC
    li r3, -0x80
    b lbl_fn_8061E3F0_00000320
lbl_fn_8061E3F0_000002FC:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x1
    bl fn_8061E130
    bl nandConvertErrorCode
lbl_fn_8061E3F0_00000320:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061E470(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E470_00000368
    li r3, -0x80
    b lbl_fn_8061E470_000003DC
lbl_fn_8061E470_00000368:
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r4, r31
    addi r3, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_fn_8061E470_000003D0
    li r3, -0x66
    b lbl_fn_8061E470_000003D8
lbl_fn_8061E470_000003D0:
    addi r3, r1, 0x8
    bl fn_8061AFD0
lbl_fn_8061E470_000003D8:
    bl nandConvertErrorCode
lbl_fn_8061E470_000003DC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8061E520(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E520_00000418
    li r3, -0x80
    b lbl_fn_8061E520_00000474
lbl_fn_8061E520_00000418:
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r4, r31
    addi r3, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl fn_8061AFD0
    bl nandConvertErrorCode
lbl_fn_8061E520_00000474:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8061E5C0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E5C0_000004C8
    li r3, -0x80
    b lbl_fn_8061E5C0_0000054C
lbl_fn_8061E5C0_000004C8:
    stw r30, 0x4(r31)
    li r0, 0x0
    mr r4, r29
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_fn_8061E5C0_00000534
    li r3, -0x66
    b lbl_fn_8061E5C0_00000548
lbl_fn_8061E5C0_00000534:
    lis r4, fn_80621D30@ha
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, fn_80621D30@l
    bl fn_8061B0B0
lbl_fn_8061E5C0_00000548:
    bl nandConvertErrorCode
lbl_fn_8061E5C0_0000054C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8061E6A0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E6A0_000005A8
    li r3, -0x80
    b lbl_fn_8061E6A0_00000614
lbl_fn_8061E6A0_000005A8:
    stw r30, 0x4(r31)
    li r0, 0x0
    mr r4, r29
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl nandGenerateAbsPath
    lis r4, fn_80621D30@ha
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, fn_80621D30@l
    bl fn_8061B0B0
    bl nandConvertErrorCode
lbl_fn_8061E6A0_00000614:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8061E760(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_fn_8061E760_00000678
    lwz r3, 0x0(r29)
    mr r4, r30
    mr r5, r31
    bl fn_8061B9D0
    bl nandConvertErrorCode
    b lbl_fn_8061E760_0000067C
lbl_fn_8061E760_00000678:
    li r3, -0x80
lbl_fn_8061E760_0000067C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061E7D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E7D0_000006DC
    li r3, -0x80
    b lbl_fn_8061E7D0_00000700
lbl_fn_8061E7D0_000006DC:
    stw r30, 0x4(r31)
    lis r6, fn_80621D30@ha
    mr r4, r28
    mr r5, r29
    lwz r3, 0x0(r27)
    mr r7, r31
    addi r6, r6, fn_80621D30@l
    bl fn_8061B9F0
    bl nandConvertErrorCode
lbl_fn_8061E7D0_00000700:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061E850(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_fn_8061E850_00000768
    lwz r3, 0x0(r29)
    mr r4, r30
    mr r5, r31
    bl fn_8061BAA0
    bl nandConvertErrorCode
    b lbl_fn_8061E850_0000076C
lbl_fn_8061E850_00000768:
    li r3, -0x80
lbl_fn_8061E850_0000076C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061E8C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E8C0_000007CC
    li r3, -0x80
    b lbl_fn_8061E8C0_000007F0
lbl_fn_8061E8C0_000007CC:
    stw r30, 0x4(r31)
    lis r6, fn_80621D30@ha
    mr r4, r28
    mr r5, r29
    lwz r3, 0x0(r27)
    mr r7, r31
    addi r6, r6, fn_80621D30@l
    bl fn_8061BAC0
    bl nandConvertErrorCode
lbl_fn_8061E8C0_000007F0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061E940(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E940_00000848
    li r3, -0x80
    b lbl_fn_8061E940_0000088C
lbl_fn_8061E940_00000848:
    cmpwi r31, 0x0
    lwz r3, 0x0(r29)
    li r5, -0x1
    beq lbl_fn_8061E940_0000086C
    cmpwi r31, 0x1
    beq lbl_fn_8061E940_00000874
    cmpwi r31, 0x2
    beq lbl_fn_8061E940_0000087C
    b lbl_fn_8061E940_00000880
lbl_fn_8061E940_0000086C:
    li r5, 0x0
    b lbl_fn_8061E940_00000880
lbl_fn_8061E940_00000874:
    li r5, 0x1
    b lbl_fn_8061E940_00000880
lbl_fn_8061E940_0000087C:
    li r5, 0x2
lbl_fn_8061E940_00000880:
    mr r4, r30
    bl fn_8061B930
    bl nandConvertErrorCode
lbl_fn_8061E940_0000088C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061E9E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061E9E0_000008EC
    li r3, -0x80
    b lbl_fn_8061E9E0_00000940
lbl_fn_8061E9E0_000008EC:
    stw r30, 0x4(r31)
    cmpwi r29, 0x0
    li r5, -0x1
    lwz r3, 0x0(r27)
    beq lbl_fn_8061E9E0_00000914
    cmpwi r29, 0x1
    beq lbl_fn_8061E9E0_0000091C
    cmpwi r29, 0x2
    beq lbl_fn_8061E9E0_00000924
    b lbl_fn_8061E9E0_00000928
lbl_fn_8061E9E0_00000914:
    li r5, 0x0
    b lbl_fn_8061E9E0_00000928
lbl_fn_8061E9E0_0000091C:
    li r5, 0x1
    b lbl_fn_8061E9E0_00000928
lbl_fn_8061E9E0_00000924:
    li r5, 0x2
lbl_fn_8061E9E0_00000928:
    lis r6, fn_80621D30@ha
    mr r4, r28
    mr r7, r31
    addi r6, r6, fn_80621D30@l
    bl fn_8061B940
    bl nandConvertErrorCode
lbl_fn_8061E9E0_00000940:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061EA90(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    li r0, 0x0
    stw r0, 0x18(r1)
    mr r26, r3
    mr r27, r4
    stw r0, 0x1c(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r7
    stw r0, 0x20(r1)
    mr r31, r8
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    bl fn_8061F480
    cmpwi r3, 0x0
    bne lbl_fn_8061EA90_000009E4
    li r3, -0x65
    b lbl_fn_8061EA90_00000A8C
lbl_fn_8061EA90_000009E4:
    mr r4, r26
    addi r3, r1, 0x18
    bl nandGenerateAbsPath
    cmpwi r31, 0x0
    bne lbl_fn_8061EA90_00000A10
    addi r3, r1, 0x18
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_fn_8061EA90_00000A10
    li r3, -0x66
    b lbl_fn_8061EA90_00000A8C
lbl_fn_8061EA90_00000A10:
    rlwinm. r0, r27, 0, 27, 27
    bne lbl_fn_8061EA90_00000A20
    li r3, -0x65
    b lbl_fn_8061EA90_00000A8C
lbl_fn_8061EA90_00000A20:
    li r0, 0x0
    stw r0, 0x10(r1)
    mr r3, r27
    addi r4, r1, 0x10
    stw r0, 0xc(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_8061F080
    cmpwi r30, 0x0
    beq lbl_fn_8061EA90_00000A74
    lis r8, fn_80621D30@ha
    lwz r5, 0x10(r1)
    lwz r6, 0xc(r1)
    mr r4, r28
    lwz r7, 0x8(r1)
    mr r9, r29
    addi r3, r1, 0x18
    addi r8, r8, fn_80621D30@l
    bl fn_8061A980
    b lbl_fn_8061EA90_00000A8C
lbl_fn_8061EA90_00000A74:
    lwz r5, 0x10(r1)
    mr r4, r28
    lwz r6, 0xc(r1)
    addi r3, r1, 0x18
    lwz r7, 0x8(r1)
    bl fn_8061A880
lbl_fn_8061EA90_00000A8C:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8061EBE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_fn_8061EBE0_00000B04
    mr r3, r29
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_8061EA90
    bl nandConvertErrorCode
    b lbl_fn_8061EBE0_00000B08
lbl_fn_8061EBE0_00000B04:
    li r3, -0x80
lbl_fn_8061EBE0_00000B08:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061EC60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061EC60_00000B6C
    li r3, -0x80
    b lbl_fn_8061EC60_00000B90
lbl_fn_8061EC60_00000B6C:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x0
    bl fn_8061EA90
    bl nandConvertErrorCode
lbl_fn_8061EC60_00000B90:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061ECE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061ECE0_00000BEC
    li r3, -0x80
    b lbl_fn_8061ECE0_00000C10
lbl_fn_8061ECE0_00000BEC:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x1
    bl fn_8061EA90
    bl nandConvertErrorCode
lbl_fn_8061ECE0_00000C10:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061ED60(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    li r0, 0x0
    stw r31, 0xac(r1)
    mr r31, r7
    stw r30, 0xa8(r1)
    mr r30, r6
    stw r29, 0xa4(r1)
    mr r29, r5
    stw r28, 0xa0(r1)
    mr r28, r4
    mr r4, r3
    addi r3, r1, 0x58
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r0, 0x94(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stb r0, 0x14(r1)
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    addi r4, r1, 0x58
    bl fn_806210B0
    mr r4, r28
    addi r3, r1, 0x18
    bl nandGenerateAbsPath
    addi r3, r1, 0x18
    la r4, lbl_8087E8D8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8061ED60_00000D40
    addi r3, r1, 0x18
    addi r5, r1, 0x8
    la r4, lbl_8087E8DC
    crclr 6
    bl sprintf
    b lbl_fn_8061ED60_00000D58
lbl_fn_8061ED60_00000D40:
    addi r3, r1, 0x18
    la r4, lbl_8087E8D8
    bl fn_806823B0
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    bl fn_806823B0
lbl_fn_8061ED60_00000D58:
    cmpwi r31, 0x0
    bne lbl_fn_8061ED60_00000D88
    addi r3, r1, 0x58
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    bne lbl_fn_8061ED60_00000D80
    addi r3, r1, 0x18
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_fn_8061ED60_00000D88
lbl_fn_8061ED60_00000D80:
    li r3, -0x66
    b lbl_fn_8061ED60_00000DB8
lbl_fn_8061ED60_00000D88:
    cmpwi r30, 0x0
    beq lbl_fn_8061ED60_00000DAC
    lis r5, fn_80621D30@ha
    mr r6, r29
    addi r3, r1, 0x58
    addi r4, r1, 0x18
    addi r5, r5, fn_80621D30@l
    bl fn_8061B290
    b lbl_fn_8061ED60_00000DB8
lbl_fn_8061ED60_00000DAC:
    addi r3, r1, 0x58
    addi r4, r1, 0x18
    bl fn_8061B180
lbl_fn_8061ED60_00000DB8:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8061EF10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061EF10_00000E20
    li r3, -0x80
    b lbl_fn_8061EF10_00000E40
lbl_fn_8061EF10_00000E20:
    stw r30, 0x4(r31)
    mr r3, r28
    mr r4, r29
    mr r5, r31
    li r6, 0x1
    li r7, 0x0
    bl fn_8061ED60
    bl nandConvertErrorCode
lbl_fn_8061EF10_00000E40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061EF90(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x60
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    stw r30, -0x8(r12)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061EF90_00000E9C
    li r3, -0x80
    b lbl_fn_8061EF90_00000ECC
lbl_fn_8061EF90_00000E9C:
    lwz r3, 0x0(r30)
    addi r4, r1, 0x20
    bl fn_8061B860
    cmpwi r3, 0x0
    bne lbl_fn_8061EF90_00000EC8
    cmpwi r31, 0x0
    beq lbl_fn_8061EF90_00000EC8
    lwz r0, 0x20(r1)
    stw r0, 0x0(r31)
    b lbl_fn_8061EF90_00000EC8
    stw r0, 0x0(r0)
lbl_fn_8061EF90_00000EC8:
    bl nandConvertErrorCode
lbl_fn_8061EF90_00000ECC:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_8061F020(void)
{
    nofralloc
    clrlwi. r0, r4, 31
    li r7, 0x0
    beq lbl_fn_8061F020_00000F00
    ori r7, r7, 0x10
lbl_fn_8061F020_00000F00:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_fn_8061F020_00000F0C
    ori r7, r7, 0x20
lbl_fn_8061F020_00000F0C:
    clrlwi. r0, r5, 31
    beq lbl_fn_8061F020_00000F18
    ori r7, r7, 0x4
lbl_fn_8061F020_00000F18:
    rlwinm. r0, r5, 0, 30, 30
    beq lbl_fn_8061F020_00000F24
    ori r7, r7, 0x8
lbl_fn_8061F020_00000F24:
    clrlwi. r0, r6, 31
    beq lbl_fn_8061F020_00000F30
    ori r7, r7, 0x1
lbl_fn_8061F020_00000F30:
    rlwinm. r0, r6, 0, 30, 30
    beq lbl_fn_8061F020_00000F3C
    ori r7, r7, 0x2
lbl_fn_8061F020_00000F3C:
    stb r7, 0x0(r3)
    blr
}

asm void fn_8061F080(void)
{
    nofralloc
    rlwinm. r0, r3, 0, 27, 27
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r0, 0x0(r5)
    stw r0, 0x0(r6)
    beq lbl_fn_8061F080_00000F74
    lwz r0, 0x0(r4)
    ori r0, r0, 0x1
    stw r0, 0x0(r4)
lbl_fn_8061F080_00000F74:
    rlwinm. r0, r3, 0, 26, 26
    beq lbl_fn_8061F080_00000F88
    lwz r0, 0x0(r4)
    ori r0, r0, 0x2
    stw r0, 0x0(r4)
lbl_fn_8061F080_00000F88:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_8061F080_00000F9C
    lwz r0, 0x0(r5)
    ori r0, r0, 0x1
    stw r0, 0x0(r5)
lbl_fn_8061F080_00000F9C:
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_fn_8061F080_00000FB0
    lwz r0, 0x0(r5)
    ori r0, r0, 0x2
    stw r0, 0x0(r5)
lbl_fn_8061F080_00000FB0:
    clrlwi. r0, r3, 31
    beq lbl_fn_8061F080_00000FC4
    lwz r0, 0x0(r6)
    ori r0, r0, 0x1
    stw r0, 0x0(r6)
lbl_fn_8061F080_00000FC4:
    rlwinm. r0, r3, 0, 30, 30
    beqlr
    lwz r0, 0x0(r6)
    ori r0, r0, 0x2
    stw r0, 0x0(r6)
    blr
}

asm void fn_8061F110(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    li r0, 0x0
    stw r31, 0x6c(r1)
    mr r31, r7
    stw r30, 0x68(r1)
    mr r30, r6
    stw r29, 0x64(r1)
    mr r29, r5
    stw r28, 0x60(r1)
    mr r28, r4
    mr r4, r3
    addi r3, r1, 0x20
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    bl nandGenerateAbsPath
    cmpwi r31, 0x0
    bne lbl_fn_8061F110_0000107C
    addi r3, r1, 0x20
    bl fn_806212F0
    cmpwi r3, 0x0
    beq lbl_fn_8061F110_0000107C
    li r3, -0x66
    b lbl_fn_8061F110_00001114
lbl_fn_8061F110_0000107C:
    cmpwi r30, 0x0
    beq lbl_fn_8061F110_000010B4
    lis r10, fn_8061F270@ha
    stw r29, 0x8(r1)
    mr r4, r28
    addi r3, r1, 0x20
    addi r5, r28, 0x4
    addi r6, r29, 0x20
    addi r7, r29, 0x24
    addi r8, r29, 0x28
    addi r9, r29, 0x2c
    addi r10, r10, fn_8061F270@l
    bl fn_8061AE90
    b lbl_fn_8061F110_00001114
lbl_fn_8061F110_000010B4:
    li r0, 0x0
    stw r0, 0x1c(r1)
    mr r4, r28
    addi r3, r1, 0x20
    stw r0, 0x18(r1)
    addi r5, r28, 0x4
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    stw r0, 0x14(r1)
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    stw r0, 0x10(r1)
    bl fn_8061AD30
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8061F110_00001110
    lwz r4, 0x18(r1)
    addi r3, r28, 0x7
    lwz r5, 0x14(r1)
    lwz r6, 0x10(r1)
    bl fn_8061F020
    lwz r0, 0x1c(r1)
    stb r0, 0x6(r28)
lbl_fn_8061F110_00001110:
    mr r3, r31
lbl_fn_8061F110_00001114:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8061F270(void)
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
    bne lbl_fn_8061F270_00001184
    lwz r3, 0x14(r4)
    lwz r0, 0x20(r4)
    stb r0, 0x6(r3)
    addi r3, r3, 0x7
    lwz r4, 0x24(r4)
    lwz r5, 0x28(r31)
    lwz r6, 0x2c(r31)
    bl fn_8061F020
lbl_fn_8061F270_00001184:
    mr r3, r30
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8061F2F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_fn_8061F2F0_00001208
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8061F110
    bl nandConvertErrorCode
    b lbl_fn_8061F2F0_0000120C
lbl_fn_8061F2F0_00001208:
    li r3, -0x80
lbl_fn_8061F2F0_0000120C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8061F360(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_fn_8061F360_00001278
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl fn_8061F110
    bl nandConvertErrorCode
    b lbl_fn_8061F360_0000127C
lbl_fn_8061F360_00001278:
    li r3, -0x80
lbl_fn_8061F360_0000127C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8061F3D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061F3D0_000012E0
    li r3, -0x80
    b lbl_fn_8061F3D0_00001304
lbl_fn_8061F3D0_000012E0:
    stw r30, 0x4(r31)
    mr r3, r28
    mr r4, r29
    mr r5, r31
    stw r29, 0x14(r31)
    li r6, 0x1
    li r7, 0x1
    bl fn_8061F110
    bl nandConvertErrorCode
lbl_fn_8061F3D0_00001304:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061F460(void)
{
    nofralloc
    stw r4, 0x0(r3)
    blr
}

asm void fn_8061F470(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}
