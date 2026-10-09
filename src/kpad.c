#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSReport(const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void OSSleepThread(void);
extern void SCCheckStatus(void);
extern void __OSGetSystemTime(void);
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_806056C0(void);
extern void fn_806242D0(void);
extern void fn_80624C60(void);
extern void fn_80624D30(void);
extern void fn_8062F160(void);
extern void fn_806317D8(void);
extern void fn_8065D0E0(void);
extern void fn_8065D3E0(void);
extern void fn_8065EEA0(void);
extern void fn_8065F8D0(void);
extern void fn_80665F80(void);
extern void fn_8066A060(void);
extern void fn_8066E8F0(void);
extern void fn_80671A60(void);
extern void fn_80673CB0(void);
extern void fn_80673D10(void);
extern void fn_80673D70(void);
extern void fn_80673DD0(void);
extern void fn_80673E20(void);
extern void fn_80673EA0(void);
extern void fn_8067E23C(void);

/* External data declarations */
extern u8 lbl_807B93B0[];
extern u8 lbl_807B93C4[];
extern u8 lbl_807B93D8[];
extern u8 lbl_807B940C[];
extern u8 lbl_807B9460[];
extern u8 lbl_80829DF0[];
extern u8 lbl_8082AE00[];

/* Small data declarations */
extern u32 lbl_80880258;
extern u32 lbl_80880260;
extern u32 lbl_80880264;
extern u32 lbl_8088026B;
extern u32 lbl_8088026C;
extern u32 lbl_80880271;
extern u32 lbl_80880272;
extern u32 lbl_808889D0;
extern u32 lbl_808889D4;
extern u32 lbl_808889D6;

/* Function declarations */
void fn_806604A0(void);
void fn_806605C0(void);
void fn_80660A50(void);
void fn_80660A80(void);
void fn_80660B60(void);
void fn_80660B90(void);
void fn_80660C50(void);
void fn_80660C90(void);
void fn_80660CF0(void);
void fn_80660D80(void);
void fn_80660E10(void);
void fn_80660EA0(void);
void fn_80660F00(void);
void fn_80660F50(void);
void fn_80661010(void);
void fn_80661080(void);
void fn_806610E0(void);
void fn_80661300(void);
void fn_806613D0(void);
void fn_80661410(void);
void fn_80661450(void);
void fn_80661640(void);
void fn_806616F0(void);
void fn_80661790(void);
void fn_806618F0(void);
void fn_80661A10(void);
void fn_80661B10(void);
void fn_80661B60(void);
void fn_80663160(void);
void fn_806631A0(void);
void fn_806631F0(void);
void fn_80663330(void);
void fn_806633C0(void);
void fn_806635D0(void);
void fn_80663610(void);
void fn_80663660(void);

asm void fn_806604A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    li r28, -0x1
    lbz r3, 0x56(r3)
    bl fn_80673CB0
    lis r4, lbl_807B93B0@ha
    mr r30, r3
    mr r3, r29
    li r5, 0x10
    addi r4, r4, lbl_807B93B0@l
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806604A0_00000078
    lis r3, lbl_80829DF0@ha
    li r28, 0x3
    addi r3, r3, lbl_80829DF0@l
    lwz r3, 0xc(r3)
    lwz r0, 0x91c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806604A0_000000D0
    mr r3, r30
    bl fn_806317D8
    li r3, -0x1
    b lbl_fn_806604A0_00000100
lbl_fn_806604A0_00000078:
    li r29, 0x0
    la r31, lbl_80880264
lbl_fn_806604A0_00000080:
    mr r3, r29
    mr r4, r30
    bl fn_80673EA0
    cmpwi r3, 0x0
    beq lbl_fn_806604A0_000000A8
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806604A0_000000A8
    mr r28, r29
    b lbl_fn_806604A0_000000D0
lbl_fn_806604A0_000000A8:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806604A0_000000C0
    cmpwi r28, 0x0
    bge lbl_fn_806604A0_000000C0
    mr r28, r29
lbl_fn_806604A0_000000C0:
    addi r29, r29, 0x1
    addi r31, r31, 0x1
    cmpwi r29, 0x4
    blt lbl_fn_806604A0_00000080
lbl_fn_806604A0_000000D0:
    mr r3, r28
    mr r4, r30
    bl fn_80673EA0
    cmpwi r3, 0x0
    bne lbl_fn_806604A0_000000F0
    mr r3, r28
    mr r4, r30
    bl fn_80673E20
lbl_fn_806604A0_000000F0:
    la r3, lbl_80880264
    li r0, 0x1
    stbx r0, r3, r28
    mr r3, r28
lbl_fn_806604A0_00000100:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806605C0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    stw r28, 0xa0(r1)
    lbz r28, 0x56(r3)
    beq lbl_fn_806605C0_000003A0
    bl fn_806604A0
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_fn_806605C0_00000590
    lis r4, lbl_8082AE00@ha
    addi r4, r4, lbl_8082AE00@l
    stbx r3, r4, r28
    bl fn_8065EEA0
    lis r5, lbl_80829DF0@ha
    lis r4, lbl_807B93C4@ha
    slwi r0, r29, 2
    mr r3, r31
    addi r5, r5, lbl_80829DF0@l
    addi r4, r4, lbl_807B93C4@l
    lwzx r30, r5, r0
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806605C0_000001A8
    li r0, 0x0
    stb r0, 0x905(r30)
    stw r0, 0x8fc(r30)
    b lbl_fn_806605C0_000001F4
lbl_fn_806605C0_000001A8:
    lis r4, lbl_807B93B0@ha
    mr r3, r31
    addi r4, r4, lbl_807B93B0@l
    li r5, 0x10
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806605C0_000001E4
    bl fn_8066E8F0
    cmpwi r3, 0x0
    beq lbl_fn_806605C0_000001E4
    li r0, 0x3
    stb r0, 0x905(r30)
    li r0, 0xc
    stw r0, 0x8fc(r30)
    b lbl_fn_806605C0_000001F4
lbl_fn_806605C0_000001E4:
    li r0, 0xfb
    stb r0, 0x905(r30)
    li r0, 0x0
    stw r0, 0x8fc(r30)
lbl_fn_806605C0_000001F4:
    stb r28, 0x907(r30)
    li r10, 0x1
    lis r6, fn_8065F8D0@ha
    li r9, 0x0
    stw r10, 0x91c(r30)
    li r4, 0x64
    addi r6, r6, fn_8065F8D0@l
    li r8, 0x1770
    stw r9, 0x900(r30)
    li r7, 0x17
    li r0, 0x6
    addi r3, r1, 0x14
    stb r4, 0xb7b(r30)
    addi r4, r1, 0xc
    li r5, 0x4
    stb r9, 0xb7e(r30)
    stb r9, 0xb85(r30)
    lbz r9, 0x905(r30)
    stb r9, 0xb88(r30)
    stw r8, 0xc(r1)
    sth r10, 0x8(r1)
    stw r7, 0x10(r1)
    sth r0, 0x2a(r1)
    stw r6, 0x3c(r1)
    bl memcpy
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    lhz r0, 0x8(r1)
    addi r31, r30, 0xb2c
    sth r0, 0x30(r1)
    lwz r12, 0xc(r1)
    lwz r11, 0x10(r1)
    lwz r10, 0x14(r1)
    lwz r9, 0x18(r1)
    lwz r8, 0x1c(r1)
    lwz r7, 0x20(r1)
    lwz r6, 0x24(r1)
    lwz r5, 0x28(r1)
    lwz r4, 0x30(r1)
    lwz r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r31, 0x2c(r1)
    stw r12, 0x34(r1)
    stw r11, 0x40(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r31, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r12, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r30)
    lbz r0, 0x161(r30)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_806605C0_00000304
    lwz r0, 0x168(r30)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_806605C0_00000304:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_806605C0_00000324
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_fn_806605C0_00000398
lbl_fn_806605C0_00000324:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x40
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
lbl_fn_806605C0_00000398:
    bl fn_806056C0
    b lbl_fn_806605C0_00000590
lbl_fn_806605C0_000003A0:
    lis r3, lbl_8082AE00@ha
    li r4, -0x1
    addi r3, r3, lbl_8082AE00@l
    lbzx r31, r3, r28
    extsb r31, r31
    stbx r4, r3, r28
    cmpwi r31, -0x1
    beq lbl_fn_806605C0_00000590
    lis r3, lbl_80829DF0@ha
    slwi r0, r31, 2
    addi r3, r3, lbl_80829DF0@l
    lwzx r30, r3, r0
    stw r4, 0x900(r30)
    lwz r12, 0x8e0(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806605C0_000003F4
    mr r3, r31
    li r4, -0x1
    mtctr r12
    bctrl
    b lbl_fn_806605C0_000004C8
lbl_fn_806605C0_000003F4:
    lwz r12, 0xb9c(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806605C0_000004C8
    mr r3, r31
    li r4, -0x1
    mtctr r12
    bctrl
    b lbl_fn_806605C0_000004C8
lbl_fn_806605C0_00000414:
    lwz r12, 0x9c(r1)
    cmpwi r12, 0x0
    beq lbl_fn_806605C0_00000430
    mr r3, r31
    li r4, -0x1
    mtctr r12
    bctrl
lbl_fn_806605C0_00000430:
    bl OSDisableInterrupts
    mr r28, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r30)
    lbz r0, 0x161(r30)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_806605C0_0000045C
    lwz r0, 0x168(r30)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_806605C0_0000045C:
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    bne lbl_fn_806605C0_00000474
    mr r3, r28
    bl OSRestoreInterrupts
    b lbl_fn_806605C0_000004C8
lbl_fn_806605C0_00000474:
    lbz r0, 0x160(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x160(r30)
    mr r3, r28
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x160(r30)
    bl OSRestoreInterrupts
lbl_fn_806605C0_000004C8:
    bl OSDisableInterrupts
    lbz r4, 0x160(r30)
    lbz r0, 0x161(r30)
    subf r0, r4, r0
    extsb. r28, r0
    bge lbl_fn_806605C0_000004EC
    lwz r0, 0x168(r30)
    add r0, r28, r0
    extsb r28, r0
lbl_fn_806605C0_000004EC:
    bl OSRestoreInterrupts
    cmpwi r28, 0x0
    bne lbl_fn_806605C0_00000500
    li r0, 0x0
    b lbl_fn_806605C0_00000534
lbl_fn_806605C0_00000500:
    bl OSDisableInterrupts
    lbz r0, 0x160(r30)
    mr r28, r3
    lwz r4, 0x164(r30)
    addi r3, r1, 0x70
    extsb r0, r0
    li r5, 0x30
    mulli r0, r0, 0x30
    add r4, r4, r0
    bl memcpy
    mr r3, r28
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806605C0_00000534:
    cmpwi r0, 0x0
    bne lbl_fn_806605C0_00000414
    lwz r4, 0x8f0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_806605C0_00000554
    lwz r5, 0x8f8(r30)
    mr r3, r31
    bl fn_80661790
lbl_fn_806605C0_00000554:
    lwz r28, 0x920(r30)
    mr r3, r31
    bl fn_8065EEA0
    cmpwi r28, 0x0
    la r3, lbl_80880264
    li r0, 0x0
    stbx r0, r3, r31
    beq lbl_fn_806605C0_00000590
    lwz r12, 0x8e8(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806605C0_00000590
    mr r3, r31
    li r4, -0x1
    mtctr r12
    bctrl
lbl_fn_806605C0_00000590:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80660A50(void)
{
    nofralloc
    cmplwi r3, 0x10
    bgtlr
    lis r5, lbl_8082AE00@ha
    addi r5, r5, lbl_8082AE00@l
    lbzx r3, r5, r3
    cmplwi r3, 0x4
    bgelr
    b fn_8066A060
    blr
}

asm void fn_80660A80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80829DF0@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwzx r30, r6, r0
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    beq lbl_fn_80660A80_00000694
    cmpwi r29, 0x0
    beq lbl_fn_80660A80_00000630
    cmplwi r29, 0x1
    beq lbl_fn_80660A80_00000664
    b lbl_fn_80660A80_00000694
lbl_fn_80660A80_00000630:
    lha r4, 0x874(r30)
    lha r0, 0x87a(r30)
    subf r0, r4, r0
    sth r0, 0x0(r31)
    lha r4, 0x876(r30)
    lha r0, 0x87c(r30)
    subf r0, r4, r0
    sth r0, 0x2(r31)
    lha r4, 0x878(r30)
    lha r0, 0x87e(r30)
    subf r0, r4, r0
    sth r0, 0x4(r31)
    b lbl_fn_80660A80_00000694
lbl_fn_80660A80_00000664:
    lha r4, 0x890(r30)
    lha r0, 0x896(r30)
    subf r0, r4, r0
    sth r0, 0x0(r31)
    lha r4, 0x892(r30)
    lha r0, 0x898(r30)
    subf r0, r4, r0
    sth r0, 0x2(r31)
    lha r4, 0x894(r30)
    lha r0, 0x89a(r30)
    subf r0, r4, r0
    sth r0, 0x4(r31)
lbl_fn_80660A80_00000694:
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80660B60(void)
{
    nofralloc
    lis r5, lbl_80829DF0@ha
    cmpwi r4, -0x1
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    lwzx r3, r5, r0
    beqlr
    lbz r3, 0x907(r3)
    b fn_8062F160
    blr
}

asm void fn_80660B90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80829DF0@ha
    addi r31, r31, lbl_80829DF0@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    slwi r29, r3, 2
    stw r28, 0x10(r1)
    mr r28, r3
    lwzx r30, r31, r29
    bl OSDisableInterrupts
    lwz r30, 0x900(r30)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    beq lbl_fn_80660B90_00000790
    mr r3, r28
    li r4, 0x0
    bl fn_80673E20
    lwzx r31, r31, r29
    bl OSDisableInterrupts
    lwz r30, 0x900(r31)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    beq lbl_fn_80660B90_00000790
    bl OSDisableInterrupts
    lbz r0, 0xb7e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80660B90_00000770
    bl OSRestoreInterrupts
    b lbl_fn_80660B90_00000790
lbl_fn_80660B90_00000770:
    li r0, 0x1
    stb r0, 0xb7e(r31)
    bl OSRestoreInterrupts
    lis r5, fn_80660B60@ha
    mr r3, r28
    addi r5, r5, fn_80660B60@l
    li r4, 0x0
    bl fn_80661450
lbl_fn_80660B90_00000790:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80660C50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    stb r31, lbl_80880272
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80660C90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    mr r30, r3
    bl __OSGetSystemTime
    stw r4, 0xaec(r31)
    stw r3, 0xae8(r31)
    mr r3, r30
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80660CF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    cmpwi r30, 0x0
    beq lbl_fn_80660CF0_0000088C
    lbz r0, 0x905(r31)
    stw r0, 0x0(r30)
lbl_fn_80660CF0_0000088C:
    lwz r30, 0x900(r31)
    cmpwi r30, -0x1
    beq lbl_fn_80660CF0_000008BC
    lbz r0, 0x905(r31)
    cmplwi r0, 0xfd
    bne lbl_fn_80660CF0_000008AC
    li r30, -0x1
    b lbl_fn_80660CF0_000008BC
lbl_fn_80660CF0_000008AC:
    lwz r0, 0x920(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80660CF0_000008BC
    li r30, -0x2
lbl_fn_80660CF0_000008BC:
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80660D80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80829DF0@ha
    slwi r3, r3, 2
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, lbl_80880258
    lwzx r31, r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_80660D80_00000938
    lis r3, lbl_807B93D8@ha
    addi r3, r3, lbl_807B93D8@l
    crclr 6
    bl OSReport
    lis r3, lbl_807B940C@ha
    addi r3, r3, lbl_807B940C@l
    crclr 6
    bl OSReport
lbl_fn_80660D80_00000938:
    bl OSDisableInterrupts
    lwz r30, 0x8ec(r31)
    stw r29, 0x8ec(r31)
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

asm void fn_80660E10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80829DF0@ha
    slwi r3, r3, 2
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, lbl_80880258
    lwzx r31, r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_80660E10_000009C8
    lis r3, lbl_807B93D8@ha
    addi r3, r3, lbl_807B93D8@l
    crclr 6
    bl OSReport
    lis r3, lbl_807B9460@ha
    addi r3, r3, lbl_807B9460@l
    crclr 6
    bl OSReport
lbl_fn_80660E10_000009C8:
    bl OSDisableInterrupts
    lwz r30, 0x8e8(r31)
    stw r29, 0x8e8(r31)
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

asm void fn_80660EA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80829DF0@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    lwz r30, 0x8e4(r31)
    stw r29, 0x8e4(r31)
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

asm void fn_80660F00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lwz r31, 0x8fc(r31)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80660F50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    mr r27, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    lwz r29, 0x920(r31)
    lwz r30, 0x900(r31)
    lwz r28, 0x8fc(r31)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    bne lbl_fn_80660F50_00000AFC
    li r3, -0x1
    b lbl_fn_80660F50_00000B58
lbl_fn_80660F50_00000AFC:
    cmpwi r29, 0x0
    bne lbl_fn_80660F50_00000B0C
    li r3, -0x2
    b lbl_fn_80660F50_00000B58
lbl_fn_80660F50_00000B0C:
    cmplw r28, r27
    bne lbl_fn_80660F50_00000B1C
    li r3, 0x0
    b lbl_fn_80660F50_00000B58
lbl_fn_80660F50_00000B1C:
    lbz r5, 0xb86(r31)
    mr r4, r27
    addi r3, r31, 0x160
    li r6, 0x0
    bl fn_80665F80
    cmpwi r3, 0x0
    beq lbl_fn_80660F50_00000B54
    bl OSDisableInterrupts
    stw r27, 0x8fc(r31)
    li r0, 0x0
    stb r0, 0xba7(r31)
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80660F50_00000B58
lbl_fn_80660F50_00000B54:
    li r3, -0x2
lbl_fn_80660F50_00000B58:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80661010(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, fn_8065D0E0@ha
    stw r0, 0x14(r1)
    addi r5, r5, fn_8065D0E0@l
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806610E0
    cmpwi r3, -0x2
    bne lbl_fn_80661010_00000B9C
    b lbl_fn_80661010_00000BC0
lbl_fn_80661010_00000B9C:
    lis r3, lbl_80829DF0@ha
    slwi r0, r31, 2
    addi r3, r3, lbl_80829DF0@l
    lwzx r3, r3, r0
    addi r3, r3, 0x928
    bl OSSleepThread
    la r3, lbl_80880260
    lbzx r3, r3, r31
    extsb r3, r3
lbl_fn_80661010_00000BC0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80661080(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    stw r31, 0xc(r1)
    lwzx r31, r5, r0
    lwz r12, 0xb80(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80661080_00000C14
    mtctr r12
    bctrl
lbl_fn_80661080_00000C14:
    li r0, 0x0
    stw r0, 0xb80(r31)
    stb r0, 0xb84(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806610E0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_25
    lis r6, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    mr r28, r3
    lwzx r30, r6, r0
    mr r31, r4
    mr r29, r5
    bl OSDisableInterrupts
    lwz r27, 0x920(r30)
    lwz r26, 0x900(r30)
    lbz r25, 0xb84(r30)
    bl OSRestoreInterrupts
    cmpwi r26, -0x1
    beq lbl_fn_806610E0_00000E20
    cmpwi r27, 0x0
    beq lbl_fn_806610E0_00000C9C
    cmpwi r25, 0x0
    beq lbl_fn_806610E0_00000CA4
lbl_fn_806610E0_00000C9C:
    li r26, -0x2
    b lbl_fn_806610E0_00000E20
lbl_fn_806610E0_00000CA4:
    bl OSDisableInterrupts
    li r27, 0x1
    stb r27, 0xb84(r30)
    stw r29, 0xb80(r30)
    bl OSRestoreInterrupts
    sth r27, 0x22(r1)
    li r0, 0x0
    li r12, 0x15
    lwz r9, 0x10(r1)
    stb r0, 0xc(r1)
    lis r11, fn_80661080@ha
    addi r11, r11, fn_80661080@l
    lwz r8, 0x14(r1)
    lwz r10, 0xc(r1)
    lwz r7, 0x18(r1)
    lwz r6, 0x1c(r1)
    lwz r5, 0x20(r1)
    lwz r4, 0x24(r1)
    lwz r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r12, 0x8(r1)
    stw r11, 0x34(r1)
    stw r31, 0x30(r1)
    stw r12, 0x38(r1)
    stw r10, 0x3c(r1)
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r31, 0x60(r1)
    stw r11, 0x64(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r30)
    lbz r0, 0x161(r30)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_806610E0_00000D5C
    lwz r0, 0x168(r30)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_806610E0_00000D5C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_806610E0_00000D80
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806610E0_00000DF8
lbl_fn_806610E0_00000D80:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x38
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806610E0_00000DF8:
    cmpwi r0, 0x0
    beq lbl_fn_806610E0_00000E08
    li r26, 0x0
    b lbl_fn_806610E0_00000E20
lbl_fn_806610E0_00000E08:
    li r26, -0x2
    bl OSDisableInterrupts
    li r0, 0x0
    stb r0, 0xb84(r30)
    stw r0, 0xb80(r30)
    bl OSRestoreInterrupts
lbl_fn_806610E0_00000E20:
    cmpwi r26, 0x0
    beq lbl_fn_806610E0_00000E44
    cmpwi r29, 0x0
    beq lbl_fn_806610E0_00000E44
    mr r12, r29
    mr r3, r28
    mr r4, r26
    mtctr r12
    bctrl
lbl_fn_806610E0_00000E44:
    addi r11, r1, 0x90
    mr r3, r26
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80661300(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    lwz r0, 0x900(r31)
    cmpwi r0, -0x1
    bne lbl_fn_80661300_00000EA0
    bl OSRestoreInterrupts
    b lbl_fn_80661300_00000F14
lbl_fn_80661300_00000EA0:
    lwz r0, lbl_8088026C
    cmpwi r0, 0x0
    bne lbl_fn_80661300_00000EC8
    cmpwi r30, 0x0
    bne lbl_fn_80661300_00000EC0
    lwz r0, 0x918(r31)
    cmpwi r0, 0x1
    beq lbl_fn_80661300_00000EC8
lbl_fn_80661300_00000EC0:
    bl OSRestoreInterrupts
    b lbl_fn_80661300_00000F14
lbl_fn_80661300_00000EC8:
    cmpwi r30, 0x0
    bne lbl_fn_80661300_00000EDC
    lwz r0, 0x918(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80661300_00000EF0
lbl_fn_80661300_00000EDC:
    cmplwi r30, 0x1
    bne lbl_fn_80661300_00000EF8
    lwz r0, 0x918(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80661300_00000EF8
lbl_fn_80661300_00000EF0:
    bl OSRestoreInterrupts
    b lbl_fn_80661300_00000F14
lbl_fn_80661300_00000EF8:
    neg r4, r30
    li r0, 0x1
    or r4, r4, r30
    srwi r4, r4, 31
    stw r4, 0x918(r31)
    stw r0, 0x914(r31)
    bl OSRestoreInterrupts
lbl_fn_80661300_00000F14:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806613D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    stw r31, lbl_8088026C
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80661410(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r31, lbl_8088026C
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80661450(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lis r6, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    mr r28, r3
    lwzx r30, r6, r0
    mr r26, r4
    mr r29, r5
    bl OSDisableInterrupts
    lwz r31, 0x900(r30)
    lwz r27, 0x920(r30)
    bl OSRestoreInterrupts
    cmpwi r31, -0x1
    beq lbl_fn_80661450_00001158
    cmpwi r27, 0x0
    bne lbl_fn_80661450_00001008
    li r31, -0x2
    b lbl_fn_80661450_00001158
lbl_fn_80661450_00001008:
    clrlslwi r0, r26, 28, 4
    stb r0, 0xc(r1)
    li r0, 0x1
    li r12, 0x11
    sth r0, 0x22(r1)
    lwz r11, 0xc(r1)
    lwz r10, 0x10(r1)
    lwz r9, 0x14(r1)
    lwz r8, 0x18(r1)
    lwz r7, 0x1c(r1)
    lwz r6, 0x20(r1)
    lwz r5, 0x24(r1)
    lwz r4, 0x28(r1)
    lwz r3, 0x2c(r1)
    lwz r0, 0x30(r1)
    stw r12, 0x8(r1)
    stw r29, 0x34(r1)
    stw r12, 0x38(r1)
    stw r11, 0x3c(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r29, 0x64(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r30)
    lbz r0, 0x161(r30)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661450_000010A8
    lwz r0, 0x168(r30)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661450_000010A8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r30)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661450_000010CC
    mr r3, r31
    bl OSRestoreInterrupts
    li r4, 0x0
    b lbl_fn_80661450_00001144
lbl_fn_80661450_000010CC:
    lbz r0, 0x161(r30)
    li r4, 0x0
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r30)
    addi r4, r1, 0x38
    lwz r3, 0x164(r30)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r30)
    mr r3, r31
    lwz r4, 0x168(r30)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r30)
    bl OSRestoreInterrupts
    li r4, 0x1
lbl_fn_80661450_00001144:
    neg r3, r4
    li r0, -0x2
    or r3, r3, r4
    srawi r3, r3, 31
    andc r31, r0, r3
lbl_fn_80661450_00001158:
    cmpwi r31, 0x0
    beq lbl_fn_80661450_0000117C
    cmpwi r29, 0x0
    beq lbl_fn_80661450_0000117C
    mr r12, r29
    mr r3, r28
    mr r4, r31
    mtctr r12
    bctrl
lbl_fn_80661450_0000117C:
    addi r11, r1, 0x80
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80661640(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl SCCheckStatus
    cmpwi r3, 0x0
    beq lbl_fn_80661640_000011D0
    li r3, 0x0
    b lbl_fn_80661640_00001230
lbl_fn_80661640_000011D0:
    bl OSDisableInterrupts
    lwz r4, lbl_8088026C
    lbz r30, lbl_8088026B
    neg r0, r4
    or r0, r0, r4
    srwi r31, r0, 31
    bl OSRestoreInterrupts
    mr r3, r30
    bl fn_80624D30
    clrlwi r30, r3, 31
    mr r3, r31
    bl fn_80624C60
    and. r30, r30, r3
    beq lbl_fn_80661640_00001214
    mr r3, r29
    bl fn_806242D0
    b lbl_fn_80661640_0000122C
lbl_fn_80661640_00001214:
    cmpwi r29, 0x0
    beq lbl_fn_80661640_0000122C
    mr r12, r29
    li r3, 0x2
    mtctr r12
    bctrl
lbl_fn_80661640_0000122C:
    mr r3, r30
lbl_fn_80661640_00001230:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806616F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80829DF0@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r5, r5, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwzx r31, r5, r0
    bl OSDisableInterrupts
    lbz r0, 0x90c(r31)
    mr r30, r3
    lwz r3, 0x8fc(r31)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    mulli r0, r0, 0x60
    add r4, r31, r0
    addi r31, r4, 0xa0
    bl fn_8065D3E0
    lbz r0, 0x29(r31)
    mr r5, r3
    extsb. r0, r0
    beq lbl_fn_806616F0_000012B8
    li r5, 0x2a
lbl_fn_806616F0_000012B8:
    mr r3, r29
    mr r4, r31
    bl memcpy
    mr r3, r30
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80661790(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    mr r26, r4
    lwzx r29, r6, r0
    mr r27, r5
    bl OSDisableInterrupts
    lwz r0, 0x900(r29)
    mr r28, r3
    li r30, -0x4
    cmpwi r0, -0x1
    bne lbl_fn_80661790_00001338
    li r30, -0x1
lbl_fn_80661790_00001338:
    lwz r3, 0x8fc(r29)
    bl fn_8065D3E0
    cmpwi r26, 0x0
    mr r31, r3
    beq lbl_fn_80661790_00001428
    mullw r5, r31, r27
    mr r3, r26
    li r4, 0x0
    bl memset
    cmplwi r27, 0x0
    mr r3, r27
    li r4, 0x0
    ble lbl_fn_80661790_0000141C
    srwi. r0, r27, 3
    mtctr r0
    beq lbl_fn_80661790_00001404
lbl_fn_80661790_00001378:
    mullw r0, r4, r31
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    addi r4, r4, 0x1
    stb r30, 0x29(r3)
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    mullw r0, r4, r31
    stb r30, 0x29(r3)
    addi r4, r4, 0x1
    add r3, r26, r0
    stb r30, 0x29(r3)
    bdnz lbl_fn_80661790_00001378
    andi. r3, r27, 0x7
    beq lbl_fn_80661790_0000141C
lbl_fn_80661790_00001404:
    mtctr r3
lbl_fn_80661790_00001408:
    mullw r0, r4, r31
    addi r4, r4, 0x1
    add r3, r26, r0
    stb r30, 0x29(r3)
    bdnz lbl_fn_80661790_00001408
lbl_fn_80661790_0000141C:
    li r0, -0x1
    stw r0, 0x8f4(r29)
    stw r27, 0x8f8(r29)
lbl_fn_80661790_00001428:
    stw r26, 0x8f0(r29)
    mr r3, r28
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806618F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lbz r0, 0x90c(r31)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    mulli r0, r0, 0x60
    add r6, r31, r0
    lhz r4, 0xa0(r6)
    clrlwi r0, r4, 30
    cmpwi r0, 0x3
    bne lbl_fn_806618F0_000014A0
    rlwinm r0, r4, 0, 31, 29
    sth r0, 0xa0(r6)
lbl_fn_806618F0_000014A0:
    lhz r4, 0xa0(r6)
    rlwinm r0, r4, 0, 28, 29
    cmpwi r0, 0xc
    bne lbl_fn_806618F0_000014B8
    rlwinm r0, r4, 0, 30, 28
    sth r0, 0xa0(r6)
lbl_fn_806618F0_000014B8:
    lwz r4, 0x8fc(r31)
    subi r0, r4, 0x6
    cmplwi r0, 0x2
    ble lbl_fn_806618F0_000014E0
    cmplwi r4, 0xb
    beq lbl_fn_806618F0_000014E0
    cmplwi r4, 0xf
    beq lbl_fn_806618F0_000014E0
    cmplwi r4, 0x11
    bne lbl_fn_806618F0_00001514
lbl_fn_806618F0_000014E0:
    lhz r5, 0xca(r6)
    andi. r4, r5, 0x8002
    addis r0, r4, 0x0
    cmplwi r0, 0x8002
    bne lbl_fn_806618F0_000014FC
    clrlwi r0, r5, 17
    sth r0, 0xca(r6)
lbl_fn_806618F0_000014FC:
    lhz r4, 0xca(r6)
    andi. r0, r4, 0x4001
    cmpwi r0, 0x4001
    bne lbl_fn_806618F0_00001514
    rlwinm r0, r4, 0, 18, 16
    sth r0, 0xca(r6)
lbl_fn_806618F0_00001514:
    lwz r0, 0x8fc(r31)
    cmplwi r0, 0xa
    bne lbl_fn_806618F0_00001554
    lhz r5, 0xca(r6)
    andi. r4, r5, 0x8002
    addis r0, r4, 0x0
    cmplwi r0, 0x8002
    bne lbl_fn_806618F0_0000153C
    clrlwi r0, r5, 17
    sth r0, 0xca(r6)
lbl_fn_806618F0_0000153C:
    lhz r4, 0xca(r6)
    andi. r0, r4, 0x4001
    cmpwi r0, 0x4001
    bne lbl_fn_806618F0_00001554
    rlwinm r0, r4, 0, 18, 16
    sth r0, 0xca(r6)
lbl_fn_806618F0_00001554:
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80661A10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lbz r0, 0x90c(r31)
    mr r30, r3
    lwz r3, 0x8fc(r31)
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    mulli r0, r0, 0x60
    add r4, r31, r0
    addi r28, r4, 0xa0
    bl fn_8065D3E0
    lwz r0, 0x8f0(r31)
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_80661A10_00001620
    lwz r4, 0x8f4(r31)
    addi r4, r4, 0x1
    stw r4, 0x8f4(r31)
    lwz r0, 0x8f8(r31)
    cmplw r4, r0
    blt lbl_fn_80661A10_000015F8
    li r0, 0x0
    stw r0, 0x8f4(r31)
lbl_fn_80661A10_000015F8:
    lwz r4, 0x8f4(r31)
    lbz r0, 0x29(r28)
    mullw r3, r4, r3
    lwz r4, 0x8f0(r31)
    extsb. r0, r0
    add r3, r4, r3
    beq lbl_fn_80661A10_00001618
    li r5, 0x2a
lbl_fn_80661A10_00001618:
    mr r4, r28
    bl memcpy
lbl_fn_80661A10_00001620:
    lwz r12, 0x8ec(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80661A10_00001638
    mr r3, r29
    mtctr r12
    bctrl
lbl_fn_80661A10_00001638:
    lhz r4, 0xb7c(r31)
    mr r3, r30
    addi r0, r4, 0x1
    sth r0, 0xb7c(r31)
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80661B10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lwz r31, 0x83c(r31)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80661B60(void)
{
    nofralloc
    stwu r1, -0x600(r1)
    mflr r0
    stw r0, 0x604(r1)
    addi r11, r1, 0x600
    bl _savegpr_25
    lis r6, lbl_80829DF0@ha
    lwz r9, lbl_808889D0
    lhz r8, lbl_808889D4
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    lbz r7, lbl_808889D6
    stw r9, 0x2c(r1)
    mr r27, r3
    lwzx r31, r6, r0
    mr r25, r4
    sth r8, 0x30(r1)
    mr r28, r5
    stb r7, 0x32(r1)
    bl OSDisableInterrupts
    lwz r29, 0x83c(r31)
    lwz r26, 0x900(r31)
    lwz r30, 0x920(r31)
    bl OSRestoreInterrupts
    cmpwi r26, -0x1
    beq lbl_fn_80661B60_00002C84
    cmpwi r30, 0x0
    bne lbl_fn_80661B60_00001734
    li r26, -0x2
    b lbl_fn_80661B60_00002C84
lbl_fn_80661B60_00001734:
    cmpwi r25, 0x0
    bne lbl_fn_80661B60_00001E50
    cmpwi r29, 0x0
    bne lbl_fn_80661B60_0000174C
    li r26, 0x0
    b lbl_fn_80661B60_00002C84
lbl_fn_80661B60_0000174C:
    bl OSDisableInterrupts
    mr r29, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r30, r0
    bge lbl_fn_80661B60_00001778
    lwz r0, 0x168(r31)
    add r0, r30, r0
    extsb r30, r0
lbl_fn_80661B60_00001778:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    addi r4, r30, 0x5
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_fn_80661B60_00001E40
    li r0, 0x1
    sth r0, 0x592(r1)
    li r0, 0x4
    li r27, 0x19
    stb r0, 0x57c(r1)
    li r12, 0x0
    lwz r10, 0x580(r1)
    lwz r11, 0x57c(r1)
    lwz r9, 0x584(r1)
    lwz r8, 0x588(r1)
    lwz r7, 0x58c(r1)
    lwz r6, 0x590(r1)
    lwz r5, 0x594(r1)
    lwz r4, 0x598(r1)
    lwz r3, 0x59c(r1)
    lwz r0, 0x5a0(r1)
    stw r27, 0x578(r1)
    stw r12, 0x5a4(r1)
    stw r27, 0x5a8(r1)
    stw r11, 0x5ac(r1)
    stw r10, 0x5b0(r1)
    stw r9, 0x5b4(r1)
    stw r8, 0x5b8(r1)
    stw r7, 0x5bc(r1)
    stw r6, 0x5c0(r1)
    stw r5, 0x5c4(r1)
    stw r4, 0x5c8(r1)
    stw r3, 0x5cc(r1)
    stw r0, 0x5d0(r1)
    stw r12, 0x5d4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_00001834
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_00001834:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_00001854
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_000018C8
lbl_fn_80661B60_00001854:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x5a8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_000018C8:
    lis r3, 0x4a2
    li r9, 0x1
    addi r8, r3, 0x1
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r9, 0x12(r1)
    addi r3, r1, 0x54c
    addi r4, r1, 0x28
    li r5, 0x4
    stw r8, 0x28(r1)
    stb r9, 0x11(r1)
    stw r7, 0x548(r1)
    sth r6, 0x562(r1)
    stw r0, 0x574(r1)
    bl memcpy
    addi r3, r1, 0x550
    addi r4, r1, 0x11
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x551
    addi r4, r1, 0x12
    li r5, 0x1
    bl memcpy
    lwz r27, 0x548(r1)
    lwz r12, 0x54c(r1)
    lwz r11, 0x550(r1)
    lwz r10, 0x554(r1)
    lwz r9, 0x558(r1)
    lwz r8, 0x55c(r1)
    lwz r7, 0x560(r1)
    lwz r6, 0x564(r1)
    lwz r5, 0x568(r1)
    lwz r4, 0x56c(r1)
    lwz r3, 0x570(r1)
    lwz r0, 0x574(r1)
    stw r27, 0x518(r1)
    stw r12, 0x51c(r1)
    stw r11, 0x520(r1)
    stw r10, 0x524(r1)
    stw r9, 0x528(r1)
    stw r8, 0x52c(r1)
    stw r7, 0x530(r1)
    stw r6, 0x534(r1)
    stw r5, 0x538(r1)
    stw r4, 0x53c(r1)
    stw r3, 0x540(r1)
    stw r0, 0x544(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_000019B4
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_000019B4:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_000019D4
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00001A48
lbl_fn_80661B60_000019D4:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x518
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_00001A48:
    lis r3, 0x4a2
    li r9, 0x0
    addi r8, r3, 0x9
    li r7, 0x1
    li r6, 0x16
    li r0, 0x15
    stb r9, 0x10(r1)
    addi r3, r1, 0x4ec
    addi r4, r1, 0x24
    li r5, 0x4
    stw r8, 0x24(r1)
    stb r7, 0xf(r1)
    stw r6, 0x4e8(r1)
    sth r0, 0x502(r1)
    stw r9, 0x514(r1)
    bl memcpy
    addi r3, r1, 0x4f0
    addi r4, r1, 0xf
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x4f1
    addi r4, r1, 0x10
    li r5, 0x1
    bl memcpy
    lwz r27, 0x4e8(r1)
    lwz r12, 0x4ec(r1)
    lwz r11, 0x4f0(r1)
    lwz r10, 0x4f4(r1)
    lwz r9, 0x4f8(r1)
    lwz r8, 0x4fc(r1)
    lwz r7, 0x500(r1)
    lwz r6, 0x504(r1)
    lwz r5, 0x508(r1)
    lwz r4, 0x50c(r1)
    lwz r3, 0x510(r1)
    lwz r0, 0x514(r1)
    stw r27, 0x4b8(r1)
    stw r12, 0x4bc(r1)
    stw r11, 0x4c0(r1)
    stw r10, 0x4c4(r1)
    stw r9, 0x4c8(r1)
    stw r8, 0x4cc(r1)
    stw r7, 0x4d0(r1)
    stw r6, 0x4d4(r1)
    stw r5, 0x4d8(r1)
    stw r4, 0x4dc(r1)
    stw r3, 0x4e0(r1)
    stw r0, 0x4e4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_00001B34
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_00001B34:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_00001B54
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00001BC8
lbl_fn_80661B60_00001B54:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x4b8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_00001BC8:
    li r12, 0x0
    stb r12, 0x45c(r1)
    li r0, 0x1
    li r27, 0x14
    sth r0, 0x472(r1)
    lwz r11, 0x45c(r1)
    lwz r10, 0x460(r1)
    lwz r9, 0x464(r1)
    lwz r8, 0x468(r1)
    lwz r7, 0x46c(r1)
    lwz r6, 0x470(r1)
    lwz r5, 0x474(r1)
    lwz r4, 0x478(r1)
    lwz r3, 0x47c(r1)
    lwz r0, 0x480(r1)
    stw r27, 0x458(r1)
    stw r12, 0x484(r1)
    stw r27, 0x488(r1)
    stw r11, 0x48c(r1)
    stw r10, 0x490(r1)
    stw r9, 0x494(r1)
    stw r8, 0x498(r1)
    stw r7, 0x49c(r1)
    stw r6, 0x4a0(r1)
    stw r5, 0x4a4(r1)
    stw r4, 0x4a8(r1)
    stw r3, 0x4ac(r1)
    stw r0, 0x4b0(r1)
    stw r12, 0x4b4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_00001C68
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_00001C68:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_00001C88
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00001CFC
lbl_fn_80661B60_00001C88:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x488
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_00001CFC:
    li r11, 0x0
    stb r11, 0x3fc(r1)
    li r0, 0x1
    li r12, 0x15
    sth r0, 0x412(r1)
    lwz r10, 0x3fc(r1)
    lwz r9, 0x400(r1)
    lwz r8, 0x404(r1)
    lwz r7, 0x408(r1)
    lwz r6, 0x40c(r1)
    lwz r5, 0x410(r1)
    lwz r4, 0x414(r1)
    lwz r3, 0x418(r1)
    lwz r0, 0x41c(r1)
    stw r12, 0x3f8(r1)
    stw r28, 0x424(r1)
    stw r11, 0x420(r1)
    stw r12, 0x428(r1)
    stw r10, 0x42c(r1)
    stw r9, 0x430(r1)
    stw r8, 0x434(r1)
    stw r7, 0x438(r1)
    stw r6, 0x43c(r1)
    stw r5, 0x440(r1)
    stw r4, 0x444(r1)
    stw r3, 0x448(r1)
    stw r0, 0x44c(r1)
    stw r11, 0x450(r1)
    stw r28, 0x454(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_00001D9C
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_00001D9C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_00001DBC
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00001E30
lbl_fn_80661B60_00001DBC:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x428
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_00001E30:
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80661B60_00002CA4
lbl_fn_80661B60_00001E40:
    mr r3, r29
    li r26, -0x2
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00002C84
lbl_fn_80661B60_00001E50:
    cmplwi r25, 0x1
    beq lbl_fn_80661B60_00001E7C
    cmplwi r25, 0x5
    beq lbl_fn_80661B60_00001E7C
    cmplwi r25, 0x2
    beq lbl_fn_80661B60_00002840
    cmplwi r25, 0x3
    beq lbl_fn_80661B60_00002994
    cmplwi r25, 0x4
    beq lbl_fn_80661B60_00002AE8
    b lbl_fn_80661B60_00002C84
lbl_fn_80661B60_00001E7C:
    bl OSDisableInterrupts
    mr r29, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r30, r0
    bge lbl_fn_80661B60_00001EA8
    lwz r0, 0x168(r31)
    add r0, r30, r0
    extsb r30, r0
lbl_fn_80661B60_00001EA8:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    addi r4, r30, 0x7
    subi r0, r3, 0x1
    cmplw r4, r0
    bgt lbl_fn_80661B60_00002830
    li r0, 0x1
    sth r0, 0x3b2(r1)
    li r0, 0x4
    li r27, 0x14
    stb r0, 0x39c(r1)
    li r12, 0x0
    lwz r10, 0x3a0(r1)
    lwz r11, 0x39c(r1)
    lwz r9, 0x3a4(r1)
    lwz r8, 0x3a8(r1)
    lwz r7, 0x3ac(r1)
    lwz r6, 0x3b0(r1)
    lwz r5, 0x3b4(r1)
    lwz r4, 0x3b8(r1)
    lwz r3, 0x3bc(r1)
    lwz r0, 0x3c0(r1)
    stw r27, 0x398(r1)
    stw r12, 0x3c4(r1)
    stw r27, 0x3c8(r1)
    stw r11, 0x3cc(r1)
    stw r10, 0x3d0(r1)
    stw r9, 0x3d4(r1)
    stw r8, 0x3d8(r1)
    stw r7, 0x3dc(r1)
    stw r6, 0x3e0(r1)
    stw r5, 0x3e4(r1)
    stw r4, 0x3e8(r1)
    stw r3, 0x3ec(r1)
    stw r0, 0x3f0(r1)
    stw r12, 0x3f4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_00001F64
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_00001F64:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_00001F84
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00001FF8
lbl_fn_80661B60_00001F84:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x3c8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_00001FF8:
    li r0, 0x1
    sth r0, 0x352(r1)
    li r0, 0x4
    li r27, 0x19
    stb r0, 0x33c(r1)
    li r12, 0x0
    lwz r10, 0x340(r1)
    lwz r11, 0x33c(r1)
    lwz r9, 0x344(r1)
    lwz r8, 0x348(r1)
    lwz r7, 0x34c(r1)
    lwz r6, 0x350(r1)
    lwz r5, 0x354(r1)
    lwz r4, 0x358(r1)
    lwz r3, 0x35c(r1)
    lwz r0, 0x360(r1)
    stw r27, 0x338(r1)
    stw r12, 0x364(r1)
    stw r27, 0x368(r1)
    stw r11, 0x36c(r1)
    stw r10, 0x370(r1)
    stw r9, 0x374(r1)
    stw r8, 0x378(r1)
    stw r7, 0x37c(r1)
    stw r6, 0x380(r1)
    stw r5, 0x384(r1)
    stw r4, 0x388(r1)
    stw r3, 0x38c(r1)
    stw r0, 0x390(r1)
    stw r12, 0x394(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_0000209C
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_0000209C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_000020BC
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00002130
lbl_fn_80661B60_000020BC:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x368
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_00002130:
    lis r3, 0x4a2
    li r9, 0x1
    addi r8, r3, 0x9
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r9, 0xe(r1)
    addi r3, r1, 0x30c
    addi r4, r1, 0x20
    li r5, 0x4
    stw r8, 0x20(r1)
    stb r9, 0xd(r1)
    stw r7, 0x308(r1)
    sth r6, 0x322(r1)
    stw r0, 0x334(r1)
    bl memcpy
    addi r3, r1, 0x310
    addi r4, r1, 0xd
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x311
    addi r4, r1, 0xe
    li r5, 0x1
    bl memcpy
    lwz r27, 0x308(r1)
    lwz r12, 0x30c(r1)
    lwz r11, 0x310(r1)
    lwz r10, 0x314(r1)
    lwz r9, 0x318(r1)
    lwz r8, 0x31c(r1)
    lwz r7, 0x320(r1)
    lwz r6, 0x324(r1)
    lwz r5, 0x328(r1)
    lwz r4, 0x32c(r1)
    lwz r3, 0x330(r1)
    lwz r0, 0x334(r1)
    stw r27, 0x2d8(r1)
    stw r12, 0x2dc(r1)
    stw r11, 0x2e0(r1)
    stw r10, 0x2e4(r1)
    stw r9, 0x2e8(r1)
    stw r8, 0x2ec(r1)
    stw r7, 0x2f0(r1)
    stw r6, 0x2f4(r1)
    stw r5, 0x2f8(r1)
    stw r4, 0x2fc(r1)
    stw r3, 0x300(r1)
    stw r0, 0x304(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_0000221C
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_0000221C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_0000223C
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_000022B0
lbl_fn_80661B60_0000223C:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x2d8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_000022B0:
    lis r3, 0x4a2
    li r4, 0x80
    addi r5, r3, 0x1
    li r8, 0x1
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r4, 0xc(r1)
    addi r3, r1, 0x2ac
    addi r4, r1, 0x1c
    stw r5, 0x1c(r1)
    li r5, 0x4
    stb r8, 0xb(r1)
    stw r7, 0x2a8(r1)
    sth r6, 0x2c2(r1)
    stw r0, 0x2d4(r1)
    bl memcpy
    addi r3, r1, 0x2b0
    addi r4, r1, 0xb
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x2b1
    addi r4, r1, 0xc
    li r5, 0x1
    bl memcpy
    lwz r27, 0x2a8(r1)
    lwz r12, 0x2ac(r1)
    lwz r11, 0x2b0(r1)
    lwz r10, 0x2b4(r1)
    lwz r9, 0x2b8(r1)
    lwz r8, 0x2bc(r1)
    lwz r7, 0x2c0(r1)
    lwz r6, 0x2c4(r1)
    lwz r5, 0x2c8(r1)
    lwz r4, 0x2cc(r1)
    lwz r3, 0x2d0(r1)
    lwz r0, 0x2d4(r1)
    stw r27, 0x278(r1)
    stw r12, 0x27c(r1)
    stw r11, 0x280(r1)
    stw r10, 0x284(r1)
    stw r9, 0x288(r1)
    stw r8, 0x28c(r1)
    stw r7, 0x290(r1)
    stw r6, 0x294(r1)
    stw r5, 0x298(r1)
    stw r4, 0x29c(r1)
    stw r3, 0x2a0(r1)
    stw r0, 0x2a4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_000023A0
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_000023A0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_000023C0
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00002434
lbl_fn_80661B60_000023C0:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x278
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_00002434:
    lbz r4, lbl_8088026B
    lis r3, 0x4a2
    addi r5, r3, 0x1
    li r8, 0x7
    li r7, 0x16
    li r6, 0x15
    li r0, 0x0
    stb r4, 0x30(r1)
    addi r3, r1, 0x21c
    addi r4, r1, 0x18
    stw r5, 0x18(r1)
    li r5, 0x4
    stb r8, 0xa(r1)
    stw r7, 0x218(r1)
    sth r6, 0x232(r1)
    stw r0, 0x244(r1)
    bl memcpy
    addi r3, r1, 0x220
    addi r4, r1, 0xa
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x221
    addi r4, r1, 0x2c
    li r5, 0x7
    bl memcpy
    lwz r27, 0x218(r1)
    lwz r12, 0x21c(r1)
    lwz r11, 0x220(r1)
    lwz r10, 0x224(r1)
    lwz r9, 0x228(r1)
    lwz r8, 0x22c(r1)
    lwz r7, 0x230(r1)
    lwz r6, 0x234(r1)
    lwz r5, 0x238(r1)
    lwz r4, 0x23c(r1)
    lwz r3, 0x240(r1)
    lwz r0, 0x244(r1)
    stw r27, 0x248(r1)
    stw r12, 0x24c(r1)
    stw r11, 0x250(r1)
    stw r10, 0x254(r1)
    stw r9, 0x258(r1)
    stw r8, 0x25c(r1)
    stw r7, 0x260(r1)
    stw r6, 0x264(r1)
    stw r5, 0x268(r1)
    stw r4, 0x26c(r1)
    stw r3, 0x270(r1)
    stw r0, 0x274(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_00002524
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_00002524:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_00002544
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_000025B8
lbl_fn_80661B60_00002544:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x248
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_000025B8:
    li r12, 0x0
    stb r12, 0x1bc(r1)
    li r0, 0x1
    li r27, 0x19
    sth r0, 0x1d2(r1)
    lwz r11, 0x1bc(r1)
    lwz r10, 0x1c0(r1)
    lwz r9, 0x1c4(r1)
    lwz r8, 0x1c8(r1)
    lwz r7, 0x1cc(r1)
    lwz r6, 0x1d0(r1)
    lwz r5, 0x1d4(r1)
    lwz r4, 0x1d8(r1)
    lwz r3, 0x1dc(r1)
    lwz r0, 0x1e0(r1)
    stw r27, 0x1b8(r1)
    stw r12, 0x1e4(r1)
    stw r27, 0x1e8(r1)
    stw r11, 0x1ec(r1)
    stw r10, 0x1f0(r1)
    stw r9, 0x1f4(r1)
    stw r8, 0x1f8(r1)
    stw r7, 0x1fc(r1)
    stw r6, 0x200(r1)
    stw r5, 0x204(r1)
    stw r4, 0x208(r1)
    stw r3, 0x20c(r1)
    stw r0, 0x210(r1)
    stw r12, 0x214(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_00002658
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_00002658:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_00002678
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_000026EC
lbl_fn_80661B60_00002678:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x1e8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_000026EC:
    li r11, 0x0
    stb r11, 0x15c(r1)
    li r0, 0x1
    li r12, 0x15
    sth r0, 0x172(r1)
    lwz r10, 0x15c(r1)
    lwz r9, 0x160(r1)
    lwz r8, 0x164(r1)
    lwz r7, 0x168(r1)
    lwz r6, 0x16c(r1)
    lwz r5, 0x170(r1)
    lwz r4, 0x174(r1)
    lwz r3, 0x178(r1)
    lwz r0, 0x17c(r1)
    stw r12, 0x158(r1)
    stw r28, 0x184(r1)
    stw r11, 0x180(r1)
    stw r12, 0x188(r1)
    stw r10, 0x18c(r1)
    stw r9, 0x190(r1)
    stw r8, 0x194(r1)
    stw r7, 0x198(r1)
    stw r6, 0x19c(r1)
    stw r5, 0x1a0(r1)
    stw r4, 0x1a4(r1)
    stw r3, 0x1a8(r1)
    stw r0, 0x1ac(r1)
    stw r11, 0x1b0(r1)
    stw r28, 0x1b4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r27, r0
    bge lbl_fn_80661B60_0000278C
    lwz r0, 0x168(r31)
    add r0, r27, r0
    extsb r27, r0
lbl_fn_80661B60_0000278C:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r27
    bne lbl_fn_80661B60_000027AC
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00002820
lbl_fn_80661B60_000027AC:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x188
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
lbl_fn_80661B60_00002820:
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80661B60_00002CA4
lbl_fn_80661B60_00002830:
    mr r3, r29
    li r26, -0x2
    bl OSRestoreInterrupts
    b lbl_fn_80661B60_00002C84
lbl_fn_80661B60_00002840:
    li r0, 0x1
    sth r0, 0x112(r1)
    li r0, 0x4
    li r12, 0x19
    stb r0, 0xfc(r1)
    lwz r10, 0x100(r1)
    lwz r11, 0xfc(r1)
    lwz r9, 0x104(r1)
    lwz r8, 0x108(r1)
    lwz r7, 0x10c(r1)
    lwz r6, 0x110(r1)
    lwz r5, 0x114(r1)
    lwz r4, 0x118(r1)
    lwz r3, 0x11c(r1)
    lwz r0, 0x120(r1)
    stw r12, 0xf8(r1)
    stw r28, 0x124(r1)
    stw r12, 0x128(r1)
    stw r11, 0x12c(r1)
    stw r10, 0x130(r1)
    stw r9, 0x134(r1)
    stw r8, 0x138(r1)
    stw r7, 0x13c(r1)
    stw r6, 0x140(r1)
    stw r5, 0x144(r1)
    stw r4, 0x148(r1)
    stw r3, 0x14c(r1)
    stw r0, 0x150(r1)
    stw r28, 0x154(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_80661B60_000028E0
    lwz r0, 0x168(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_80661B60_000028E0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_80661B60_00002904
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_80661B60_0000297C
lbl_fn_80661B60_00002904:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x128
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_80661B60_0000297C:
    cmpwi r0, 0x0
    bne lbl_fn_80661B60_0000298C
    li r26, -0x2
    b lbl_fn_80661B60_00002C84
lbl_fn_80661B60_0000298C:
    li r3, 0x0
    b lbl_fn_80661B60_00002CA4
lbl_fn_80661B60_00002994:
    li r0, 0x1
    sth r0, 0xb2(r1)
    li r0, 0x0
    li r12, 0x19
    stb r0, 0x9c(r1)
    lwz r10, 0xa0(r1)
    lwz r11, 0x9c(r1)
    lwz r9, 0xa4(r1)
    lwz r8, 0xa8(r1)
    lwz r7, 0xac(r1)
    lwz r6, 0xb0(r1)
    lwz r5, 0xb4(r1)
    lwz r4, 0xb8(r1)
    lwz r3, 0xbc(r1)
    lwz r0, 0xc0(r1)
    stw r12, 0x98(r1)
    stw r28, 0xc4(r1)
    stw r12, 0xc8(r1)
    stw r11, 0xcc(r1)
    stw r10, 0xd0(r1)
    stw r9, 0xd4(r1)
    stw r8, 0xd8(r1)
    stw r7, 0xdc(r1)
    stw r6, 0xe0(r1)
    stw r5, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r3, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r28, 0xf4(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_80661B60_00002A34
    lwz r0, 0x168(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_80661B60_00002A34:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_80661B60_00002A58
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_80661B60_00002AD0
lbl_fn_80661B60_00002A58:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0xc8
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_80661B60_00002AD0:
    cmpwi r0, 0x0
    bne lbl_fn_80661B60_00002AE0
    li r26, -0x2
    b lbl_fn_80661B60_00002C84
lbl_fn_80661B60_00002AE0:
    li r3, 0x0
    b lbl_fn_80661B60_00002CA4
lbl_fn_80661B60_00002AE8:
    lis r3, 0x4a2
    li r7, 0x1
    addi r5, r3, 0x8
    li r6, 0x16
    li r0, 0x15
    stw r5, 0x14(r1)
    addi r3, r1, 0x6c
    addi r4, r1, 0x14
    stb r7, 0x9(r1)
    li r5, 0x4
    stb r7, 0x8(r1)
    stw r6, 0x68(r1)
    sth r0, 0x82(r1)
    stw r28, 0x94(r1)
    bl memcpy
    addi r3, r1, 0x70
    addi r4, r1, 0x8
    li r5, 0x1
    bl memcpy
    addi r3, r1, 0x71
    addi r4, r1, 0x9
    li r5, 0x1
    bl memcpy
    lwz r29, 0x68(r1)
    lwz r12, 0x6c(r1)
    lwz r11, 0x70(r1)
    lwz r10, 0x74(r1)
    lwz r9, 0x78(r1)
    lwz r8, 0x7c(r1)
    lwz r7, 0x80(r1)
    lwz r6, 0x84(r1)
    lwz r5, 0x88(r1)
    lwz r4, 0x8c(r1)
    lwz r3, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r29, 0x38(r1)
    stw r12, 0x3c(r1)
    stw r11, 0x40(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_80661B60_00002BD0
    lwz r0, 0x168(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_80661B60_00002BD0:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_80661B60_00002BF4
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_80661B60_00002C6C
lbl_fn_80661B60_00002BF4:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x38
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_80661B60_00002C6C:
    cmpwi r0, 0x0
    bne lbl_fn_80661B60_00002C7C
    li r26, -0x2
    b lbl_fn_80661B60_00002C84
lbl_fn_80661B60_00002C7C:
    li r3, 0x0
    b lbl_fn_80661B60_00002CA4
lbl_fn_80661B60_00002C84:
    cmpwi r28, 0x0
    beq lbl_fn_80661B60_00002CA0
    mr r12, r28
    mr r3, r27
    mr r4, r26
    mtctr r12
    bctrl
lbl_fn_80661B60_00002CA0:
    mr r3, r26
lbl_fn_80661B60_00002CA4:
    addi r11, r1, 0x600
    bl _restgpr_25
    lwz r0, 0x604(r1)
    mtlr r0
    addi r1, r1, 0x600
    blr
}

asm void fn_80663160(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lbz r31, lbl_8088026B
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806631A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    cmpwi r31, 0x0
    mr r0, r31
    bne lbl_fn_806631A0_00002D28
    li r0, 0x0
lbl_fn_806631A0_00002D28:
    cmplwi r31, 0x7f
    blt lbl_fn_806631A0_00002D34
    li r0, 0x7f
lbl_fn_806631A0_00002D34:
    stb r0, lbl_8088026B
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806631F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lis r27, lbl_80829DF0@ha
    slwi r25, r3, 2
    addi r27, r27, lbl_80829DF0@l
    lwzx r30, r27, r25
    bl OSDisableInterrupts
    lbz r29, 0x911(r30)
    mr r31, r3
    lbz r28, 0x905(r30)
    bl fn_80671A60
    mr r26, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r30)
    lbz r0, 0x161(r30)
    subf r0, r4, r0
    extsb. r24, r0
    bge lbl_fn_806631F0_00002DB0
    lwz r0, 0x168(r30)
    add r0, r24, r0
    extsb r24, r0
lbl_fn_806631F0_00002DB0:
    bl OSRestoreInterrupts
    lwzx r23, r27, r25
    bl OSDisableInterrupts
    lwz r22, 0x900(r23)
    lbz r23, 0x907(r23)
    bl OSRestoreInterrupts
    cmpwi r22, -0x1
    beq lbl_fn_806631F0_00002DD8
    extsb r3, r23
    bl fn_80673D10
lbl_fn_806631F0_00002DD8:
    lwzx r22, r27, r25
    bl OSDisableInterrupts
    lwz r23, 0x900(r22)
    lbz r22, 0x907(r22)
    bl OSRestoreInterrupts
    cmpwi r23, -0x1
    bne lbl_fn_806631F0_00002DFC
    li r27, 0x0
    b lbl_fn_806631F0_00002E08
lbl_fn_806631F0_00002DFC:
    extsb r3, r22
    bl fn_80673D70
    mr r27, r3
lbl_fn_806631F0_00002E08:
    lbz r22, 0x913(r30)
    bl fn_80673DD0
    mr r30, r3
    mr r3, r31
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    bne lbl_fn_806631F0_00002E64
    clrlwi r0, r27, 16
    cmplwi r0, 0x3
    bgt lbl_fn_806631F0_00002E64
    clrlwi r4, r26, 24
    cmplwi r4, 0xa
    beq lbl_fn_806631F0_00002E64
    clrlslwi r3, r30, 24, 1
    addi r0, r3, 0x2
    cmpw r4, r0
    bge lbl_fn_806631F0_00002E64
    cmplwi r28, 0xff
    beq lbl_fn_806631F0_00002E64
    cmpwi r24, 0x15
    bge lbl_fn_806631F0_00002E64
    cmplwi r22, 0x1
    blt lbl_fn_806631F0_00002E6C
lbl_fn_806631F0_00002E64:
    li r3, 0x1
    b lbl_fn_806631F0_00002E70
lbl_fn_806631F0_00002E6C:
    li r3, 0x0
lbl_fn_806631F0_00002E70:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80663330(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0x24(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lwz r30, 0x900(r31)
    lwz r31, 0x920(r31)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    beq lbl_fn_80663330_00002EEC
    cmpwi r31, 0x0
    beq lbl_fn_80663330_00002EEC
    mr r3, r29
    bl fn_806631F0
    cmpwi r3, 0x0
    beq lbl_fn_80663330_00002EF4
lbl_fn_80663330_00002EEC:
    li r3, 0x0
    b lbl_fn_80663330_00002EF8
lbl_fn_80663330_00002EF4:
    li r3, 0x1
lbl_fn_80663330_00002EF8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806633C0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lis r6, lbl_80829DF0@ha
    slwi r0, r3, 2
    addi r6, r6, lbl_80829DF0@l
    mr r26, r3
    lwzx r31, r6, r0
    mr r27, r4
    mr r28, r5
    bl OSDisableInterrupts
    lwz r30, 0x900(r31)
    lwz r29, 0x920(r31)
    bl OSRestoreInterrupts
    cmpwi r30, -0x1
    bne lbl_fn_806633C0_00002F70
    li r3, -0x1
    b lbl_fn_806633C0_00003118
lbl_fn_806633C0_00002F70:
    cmpwi r29, 0x0
    bne lbl_fn_806633C0_00002F80
    li r3, -0x2
    b lbl_fn_806633C0_00003118
lbl_fn_806633C0_00002F80:
    mr r3, r26
    bl fn_806631F0
    cmpwi r3, 0x0
    beq lbl_fn_806633C0_00002F98
    li r3, -0x2
    b lbl_fn_806633C0_00003118
lbl_fn_806633C0_00002F98:
    clrlslwi r6, r28, 27, 3
    li r3, 0x18
    li r7, 0x15
    li r0, 0x0
    stw r3, 0x8(r1)
    mr r4, r27
    mr r5, r28
    addi r3, r1, 0xd
    sth r7, 0x22(r1)
    stb r6, 0xc(r1)
    stw r0, 0x34(r1)
    bl memcpy
    lwz r30, 0x8(r1)
    lwz r12, 0xc(r1)
    lwz r11, 0x10(r1)
    lwz r10, 0x14(r1)
    lwz r9, 0x18(r1)
    lwz r8, 0x1c(r1)
    lwz r7, 0x20(r1)
    lwz r6, 0x24(r1)
    lwz r5, 0x28(r1)
    lwz r4, 0x2c(r1)
    lwz r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r30, 0x38(r1)
    stw r12, 0x3c(r1)
    stw r11, 0x40(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lbz r4, 0x160(r31)
    lbz r0, 0x161(r31)
    subf r0, r4, r0
    extsb. r29, r0
    bge lbl_fn_806633C0_00003054
    lwz r0, 0x168(r31)
    add r0, r29, r0
    extsb r29, r0
lbl_fn_806633C0_00003054:
    bl OSRestoreInterrupts
    lwz r3, 0x168(r31)
    subi r0, r3, 0x1
    cmplw r0, r29
    bne lbl_fn_806633C0_00003078
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_fn_806633C0_000030F0
lbl_fn_806633C0_00003078:
    lbz r0, 0x161(r31)
    li r4, 0x0
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memset
    lbz r0, 0x161(r31)
    addi r4, r1, 0x38
    lwz r3, 0x164(r31)
    li r5, 0x30
    extsb r0, r0
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl memcpy
    lbz r0, 0x161(r31)
    mr r3, r30
    lwz r4, 0x168(r31)
    extsb r6, r0
    subi r4, r4, 0x1
    subf r5, r4, r6
    addi r0, r6, 0x1
    subf r4, r6, r4
    nor r4, r5, r4
    srawi r4, r4, 31
    andc r0, r0, r4
    stb r0, 0x161(r31)
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_fn_806633C0_000030F0:
    cmpwi r0, 0x0
    bne lbl_fn_806633C0_00003100
    li r3, -0x2
    b lbl_fn_806633C0_00003118
lbl_fn_806633C0_00003100:
    bl OSDisableInterrupts
    lbz r4, 0x913(r31)
    addi r0, r4, 0x1
    stb r0, 0x913(r31)
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_fn_806633C0_00003118:
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806635D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lbz r31, lbl_80880271
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80663610(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80829DF0@ha
    stw r0, 0x14(r1)
    slwi r0, r3, 2
    addi r4, r4, lbl_80829DF0@l
    stw r31, 0xc(r1)
    lwzx r31, r4, r0
    bl OSDisableInterrupts
    lwz r31, 0x838(r31)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80663660(void)
{
    nofralloc
    lis r4, lbl_80829DF0@ha
    slwi r3, r3, 2
    addi r4, r4, lbl_80829DF0@l
    li r0, 0x0
    lwzx r4, r4, r3
    lbz r3, 0x910(r4)
    stb r3, 0x90f(r4)
    stb r0, 0xba6(r4)
    lbz r3, 0x910(r4)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stw r0, 0x838(r4)
    blr
}
