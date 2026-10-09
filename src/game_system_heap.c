#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006F72C(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A6BD4(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D58A4(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801EC158(void);
extern void fn_801EC6C0(void);
extern void fn_801EC784(void);
extern void fn_801F04FC(void);
extern void fn_801F0544(void);
extern void fn_801FE99C(void);
extern void fn_80686A48(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8073E57C[];
extern u8 lbl_80782D50[];
extern u8 lbl_80782D80[];

/* Small data declarations */
extern u32 lbl_8087DB00;
extern u32 lbl_8087DB04;
extern u32 lbl_80882CA0;
extern u32 lbl_80882CA4;

/* Function declarations */
void fn_801F8FE4(void);
void fn_801F90E0(void);
void fn_801F91DC(void);
void fn_801F9474(void);
void fn_801F9488(void);
void fn_801F94F4(void);
void fn_801F97A8(void);
void fn_801F9860(void);
void fn_801F9E6C(void);
void fn_801F9E70(void);

asm void fn_801F8FE4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stfd f31, 0x28(r1)
    fmr f31, f1
    stw r31, 0x24(r1)
    mr r31, r3
    mr r3, r4
    stb r0, 0x8(r1)
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r31
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r31)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F8FE4_000000AC
lbl_fn_801F8FE4_00000060:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F8FE4_000000A0
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F8FE4_000000A0
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F8FE4_000000A0
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r31, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F8FE4_000000E4
lbl_fn_801F8FE4_000000A0:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F8FE4_00000060
lbl_fn_801F8FE4_000000AC:
    lwz r0, 0x58(r31)
    mulli r0, r0, 0xc
    add r0, r31, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F8FE4_000000D8
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F8FE4_000000D8:
    lwz r3, 0x58(r31)
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_801F8FE4_000000E4:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F90E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x1
    stfd f31, 0x28(r1)
    fmr f31, f1
    stw r31, 0x24(r1)
    mr r31, r3
    mr r3, r4
    stb r0, 0x8(r1)
    stb r5, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r31
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r31)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F90E0_000001A8
lbl_fn_801F90E0_0000015C:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F90E0_0000019C
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F90E0_0000019C
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F90E0_0000019C
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r31, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F90E0_000001E0
lbl_fn_801F90E0_0000019C:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F90E0_0000015C
lbl_fn_801F90E0_000001A8:
    lwz r0, 0x58(r31)
    mulli r0, r0, 0xc
    add r0, r31, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F90E0_000001D4
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F90E0_000001D4:
    lwz r3, 0x58(r31)
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_801F90E0_000001E0:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F91DC(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x284(r1)
    stw r31, 0x27c(r1)
    mr r31, r3
    stw r30, 0x278(r1)
    mr r30, r5
    stw r29, 0x274(r1)
    mr r29, r4
    ble lbl_fn_801F91DC_00000240
    lis r4, lbl_80782D50@ha
    mr r5, r6
    addi r3, r1, 0x30
    addi r4, r4, lbl_80782D50@l
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801F91DC_0000027C
lbl_fn_801F91DC_00000240:
    bge lbl_fn_801F91DC_00000264
    lis r4, lbl_80782D50@ha
    addi r3, r1, 0x30
    addi r4, r4, lbl_80782D50@l
    neg r5, r6
    addi r4, r4, 0xe
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801F91DC_0000027C
lbl_fn_801F91DC_00000264:
    lis r4, lbl_80782D50@ha
    addi r3, r1, 0x30
    addi r4, r4, lbl_80782D50@l
    addi r4, r4, 0x1e
    crclr 6
    bl fn_800DD3FC
lbl_fn_801F91DC_0000027C:
    mr r5, r30
    addi r3, r1, 0x70
    addi r4, r1, 0x30
    crclr 6
    bl fn_800DD3FC
    li r0, 0x0
    stw r0, 0x24(r1)
    mr r3, r29
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_800DC6B4
    lwz r0, 0x24(r1)
    stw r3, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F91DC_000002C4
    lbz r0, 0x24(r1)
    clrlwi r30, r0, 25
    b lbl_fn_801F91DC_000002C8
lbl_fn_801F91DC_000002C4:
    lwz r30, 0x28(r1)
lbl_fn_801F91DC_000002C8:
    lbz r0, 0x8(r1)
    addi r3, r1, 0x70
    stb r0, 0xc(r1)
    bl fn_80686A48
    addi r6, r1, 0x70
    slwi r0, r3, 1
    mr r7, r6
    mr r5, r30
    addi r3, r1, 0x24
    addi r8, r1, 0xc
    add r7, r7, r0
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, 0xbc(r31)
    mr r4, r31
    lwz r5, 0x20(r1)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F91DC_000003C4
lbl_fn_801F91DC_00000318:
    lwz r0, 0xc0(r4)
    cmplw r5, r0
    bne lbl_fn_801F91DC_000003B8
    slwi r0, r3, 4
    add r3, r31, r0
    lwzu r0, 0xc4(r3)
    srwi. r5, r0, 31
    bne lbl_fn_801F91DC_0000035C
    lwz r4, 0x24(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801F91DC_0000035C
    lwz r0, 0x28(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x8(r3)
    b lbl_fn_801F91DC_00000458
lbl_fn_801F91DC_0000035C:
    cmpwi r5, 0x0
    beq lbl_fn_801F91DC_0000036C
    lwz r5, 0x4(r3)
    b lbl_fn_801F91DC_00000374
lbl_fn_801F91DC_0000036C:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_801F91DC_00000374:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F91DC_00000390
    lbz r0, 0x24(r1)
    addi r6, r1, 0x26
    clrlwi r0, r0, 25
    b lbl_fn_801F91DC_00000398
lbl_fn_801F91DC_00000390:
    lwz r6, 0x2c(r1)
    lwz r0, 0x28(r1)
lbl_fn_801F91DC_00000398:
    lbz r4, 0x1c(r1)
    slwi r0, r0, 1
    stb r4, 0x18(r1)
    add r7, r6, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801F91DC_00000458
lbl_fn_801F91DC_000003B8:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_801F91DC_00000318
lbl_fn_801F91DC_000003C4:
    lwz r0, 0xbc(r31)
    slwi r0, r0, 4
    add r0, r31, r0
    addic. r30, r0, 0xc0
    beq lbl_fn_801F91DC_0000044C
    lwz r0, 0x20(r1)
    stw r0, 0x0(r30)
    lwz r3, 0x24(r1)
    srwi. r0, r3, 31
    bne lbl_fn_801F91DC_00000404
    lwz r0, 0x28(r1)
    stw r3, 0x4(r30)
    stw r0, 0x8(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0xc(r30)
    b lbl_fn_801F91DC_0000044C
lbl_fn_801F91DC_00000404:
    li r0, 0x0
    stw r0, 0x4(r30)
    addi r3, r30, 0x4
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
    lwz r4, 0x28(r1)
    bl fn_800DBF68
    lwz r0, 0x28(r1)
    addi r3, r30, 0x4
    lbz r4, 0x14(r1)
    addi r8, r1, 0x10
    stb r4, 0x10(r1)
    slwi r0, r0, 1
    lwz r6, 0x2c(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F91DC_0000044C:
    lwz r3, 0xbc(r31)
    addi r0, r3, 0x1
    stw r0, 0xbc(r31)
lbl_fn_801F91DC_00000458:
    addic. r0, r1, 0x24
    beq lbl_fn_801F91DC_00000474
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F91DC_00000474
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_801F91DC_00000474:
    lwz r0, 0x284(r1)
    lwz r31, 0x27c(r1)
    lwz r30, 0x278(r1)
    lwz r29, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_801F9474(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_801F9488(void)
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
    beq lbl_fn_801F9488_000004F4
    addic. r0, r3, 0x4
    beq lbl_fn_801F9488_000004E4
    lwz r0, 0x4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801F9488_000004E4
    lwz r3, 0xc(r3)
    bl dtor_80084684
lbl_fn_801F9488_000004E4:
    cmpwi r31, 0x0
    ble lbl_fn_801F9488_000004F4
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F9488_000004F4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F94F4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r30, r3
    mr r31, r5
    bl fn_801EC158
    addi r5, r30, 0x138
    addi r6, r30, 0x150
    lis r4, lbl_80782D80@ha
    li r3, 0x0
    addi r4, r4, lbl_80782D80@l
    cmplw r5, r6
    stw r4, 0x0(r30)
    stw r3, 0x12c(r30)
    stw r3, 0x130(r30)
    stw r3, 0x134(r30)
    bge lbl_fn_801F94F4_00000580
    addi r0, r6, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801F94F4_00000580
lbl_fn_801F94F4_00000570:
    stw r3, 0x0(r5)
    stw r3, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_801F94F4_00000570
lbl_fn_801F94F4_00000580:
    addi r4, r30, 0x16c
    addi r5, r30, 0x184
    cmplw r4, r5
    li r3, 0x0
    stw r3, 0x160(r30)
    stw r3, 0x164(r30)
    stw r3, 0x168(r30)
    bge lbl_fn_801F94F4_000005C4
    addi r0, r5, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801F94F4_000005C4
lbl_fn_801F94F4_000005B4:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_801F94F4_000005B4
lbl_fn_801F94F4_000005C4:
    addi r3, r30, 0x194
    bl fn_800D5738
    addi r3, r30, 0x1c4
    bl fn_800D5738
    addi r5, r30, 0x1f8
    addi r3, r30, 0x204
    cmplw r5, r3
    li r4, 0x0
    stw r4, 0x1f4(r30)
    bge lbl_fn_801F94F4_0000060C
    addi r0, r3, 0x3
    subf r0, r5, r0
    srwi r0, r0, 2
    mtctr r0
    bge lbl_fn_801F94F4_0000060C
lbl_fn_801F94F4_00000600:
    stw r4, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_fn_801F94F4_00000600
lbl_fn_801F94F4_0000060C:
    addi r5, r30, 0x208
    addi r3, r30, 0x214
    cmplw r5, r3
    li r4, 0x0
    stw r4, 0x204(r30)
    bge lbl_fn_801F94F4_00000644
    addi r0, r3, 0x3
    subf r0, r5, r0
    srwi r0, r0, 2
    mtctr r0
    bge lbl_fn_801F94F4_00000644
lbl_fn_801F94F4_00000638:
    stw r4, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_fn_801F94F4_00000638
lbl_fn_801F94F4_00000644:
    li r0, 0x0
    lis r4, lbl_8073E57C@ha
    sth r0, 0x8(r30)
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, lbl_8073E57C@l
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_800DC6B4
    stw r3, 0x12c(r30)
    addi r3, r30, 0x130
    lfs f1, lbl_80882CA0
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882CA0
    addi r3, r30, 0x138
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882CA4
    addi r3, r30, 0x140
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882CA4
    addi r3, r30, 0x148
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    li r29, 0x0
    li r28, 0x0
    li r27, 0x0
lbl_fn_801F94F4_000006CC:
    add r3, r30, r28
    li r4, 0x0
    addi r3, r3, 0x130
    bl fn_801F0544
    addi r29, r29, 0x1
    add r3, r30, r27
    cmpwi r29, 0x4
    stfs f1, 0x150(r3)
    addi r28, r28, 0x8
    addi r27, r27, 0x4
    blt lbl_fn_801F94F4_000006CC
    lis r4, lbl_8073E57C@ha
    mr r5, r31
    addi r4, r4, lbl_8073E57C@l
    addi r3, r1, 0x8
    addi r4, r4, 0x8
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_800DC6B4
    stw r3, 0x160(r30)
    addi r3, r30, 0x164
    lfs f1, lbl_80882CA0
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882CA0
    addi r3, r30, 0x16c
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882CA4
    addi r3, r30, 0x174
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    lfs f1, lbl_80882CA4
    addi r3, r30, 0x17c
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    li r29, 0x0
    li r31, 0x0
    li r28, 0x0
lbl_fn_801F94F4_0000077C:
    add r3, r30, r31
    li r4, 0x0
    addi r3, r3, 0x164
    bl fn_801F0544
    addi r29, r29, 0x1
    add r3, r30, r28
    cmpwi r29, 0x4
    stfs f1, 0x184(r3)
    addi r31, r31, 0x8
    addi r28, r28, 0x4
    blt lbl_fn_801F94F4_0000077C
    addi r11, r1, 0x40
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801F97A8(void)
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
    beq lbl_fn_801F97A8_00000860
    lis r4, lbl_80782D80@ha
    addi r4, r4, lbl_80782D80@l
    stw r4, 0x0(r3)
    addi r3, r3, 0x194
    bl fn_800D58A4
    addi r3, r30, 0x1c4
    bl fn_800D58A4
    lwz r3, 0xfc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801F97A8_0000082C
    addi r3, r3, 0x10
    addi r4, r30, 0x12c
    bl fn_801FE99C
    lwz r3, 0xfc(r30)
    addi r4, r30, 0x160
    addi r3, r3, 0x10
    bl fn_801FE99C
lbl_fn_801F97A8_0000082C:
    addi r3, r30, 0x1c4
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x194
    li r4, -0x1
    bl fn_800D5808
    mr r3, r30
    li r4, 0x0
    bl fn_801EC6C0
    cmpwi r31, 0x0
    ble lbl_fn_801F97A8_00000860
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F97A8_00000860:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F9860(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl fn_801EC784
    lwz r28, 0xfc(r31)
    cmpwi r28, 0x0
    beq lbl_fn_801F9860_00000E68
    lwz r0, 0x30(r28)
    cmpwi r0, 0x0
    beq lbl_fn_801F9860_000008C4
    lwz r0, 0x2c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801F9860_00000A14
lbl_fn_801F9860_000008C4:
    lwz r0, 0x2c(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_801F9860_00000B68
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DB04
    la r6, lbl_8087DB00
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x30(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_801F9860_00000A04
    lwz r0, 0x28(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801F9860_0000090C
    mr r4, r0
lbl_fn_801F9860_0000090C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801F9860_000009FC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801F9860_000009CC
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801F9860_000009CC
lbl_fn_801F9860_00000940:
    lwz r8, 0x30(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801F9860_00000940
lbl_fn_801F9860_000009CC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801F9860_000009FC
lbl_fn_801F9860_000009E4:
    lwz r3, 0x30(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801F9860_000009E4
lbl_fn_801F9860_000009FC:
    lwz r3, 0x30(r28)
    bl fn_80084C24
lbl_fn_801F9860_00000A04:
    stw r30, 0x30(r28)
    li r0, 0x8
    stw r0, 0x2c(r28)
    b lbl_fn_801F9860_00000B68
lbl_fn_801F9860_00000A14:
    lwz r3, 0x28(r28)
    cmplw r3, r0
    blt lbl_fn_801F9860_00000B68
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_801F9860_00000B68
    slwi r3, r30, 2
    li r4, 0x0
    la r5, lbl_8087DB04
    la r6, lbl_8087DB00
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x30(r28)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801F9860_00000B60
    lwz r0, 0x28(r28)
    mr r4, r30
    cmplw r30, r0
    ble lbl_fn_801F9860_00000A68
    mr r4, r0
lbl_fn_801F9860_00000A68:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801F9860_00000B58
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801F9860_00000B28
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801F9860_00000B28
lbl_fn_801F9860_00000A9C:
    lwz r8, 0x30(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x30(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801F9860_00000A9C
lbl_fn_801F9860_00000B28:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801F9860_00000B58
lbl_fn_801F9860_00000B40:
    lwz r3, 0x30(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801F9860_00000B40
lbl_fn_801F9860_00000B58:
    lwz r3, 0x30(r28)
    bl fn_80084C24
lbl_fn_801F9860_00000B60:
    stw r29, 0x30(r28)
    stw r30, 0x2c(r28)
lbl_fn_801F9860_00000B68:
    lwz r0, 0x28(r28)
    addi r4, r31, 0x12c
    lwz r3, 0x30(r28)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x28(r28)
    addi r0, r3, 0x1
    stw r0, 0x28(r28)
    lwz r30, 0xfc(r31)
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801F9860_00000BA4
    lwz r0, 0x2c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801F9860_00000CF4
lbl_fn_801F9860_00000BA4:
    lwz r0, 0x2c(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801F9860_00000E48
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DB04
    la r6, lbl_8087DB00
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x30(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801F9860_00000CE4
    lwz r0, 0x28(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801F9860_00000BEC
    mr r4, r0
lbl_fn_801F9860_00000BEC:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801F9860_00000CDC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801F9860_00000CAC
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801F9860_00000CAC
lbl_fn_801F9860_00000C20:
    lwz r8, 0x30(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801F9860_00000C20
lbl_fn_801F9860_00000CAC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801F9860_00000CDC
lbl_fn_801F9860_00000CC4:
    lwz r3, 0x30(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801F9860_00000CC4
lbl_fn_801F9860_00000CDC:
    lwz r3, 0x30(r30)
    bl fn_80084C24
lbl_fn_801F9860_00000CE4:
    stw r29, 0x30(r30)
    li r0, 0x8
    stw r0, 0x2c(r30)
    b lbl_fn_801F9860_00000E48
lbl_fn_801F9860_00000CF4:
    lwz r3, 0x28(r30)
    cmplw r3, r0
    blt lbl_fn_801F9860_00000E48
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_801F9860_00000E48
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087DB04
    la r6, lbl_8087DB00
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x30(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801F9860_00000E40
    lwz r0, 0x28(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_801F9860_00000D48
    mr r4, r0
lbl_fn_801F9860_00000D48:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801F9860_00000E38
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801F9860_00000E08
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801F9860_00000E08
lbl_fn_801F9860_00000D7C:
    lwz r8, 0x30(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x30(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801F9860_00000D7C
lbl_fn_801F9860_00000E08:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801F9860_00000E38
lbl_fn_801F9860_00000E20:
    lwz r3, 0x30(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801F9860_00000E20
lbl_fn_801F9860_00000E38:
    lwz r3, 0x30(r30)
    bl fn_80084C24
lbl_fn_801F9860_00000E40:
    stw r28, 0x30(r30)
    stw r29, 0x2c(r30)
lbl_fn_801F9860_00000E48:
    lwz r0, 0x28(r30)
    addi r4, r31, 0x160
    lwz r3, 0x30(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x28(r30)
    addi r0, r3, 0x1
    stw r0, 0x28(r30)
lbl_fn_801F9860_00000E68:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F9E6C(void)
{
    nofralloc
    blr
}

asm void fn_801F9E70(void)
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
    lfs f0, 0x150(r3)
    stfs f0, 0x0(r4)
    lfs f0, 0x154(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x158(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0x15c(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x184(r3)
    stfs f0, 0x0(r5)
    lfs f0, 0x188(r3)
    stfs f0, 0x4(r5)
    lfs f0, 0x18c(r3)
    stfs f0, 0x8(r5)
    lfs f0, 0x190(r3)
    stfs f0, 0xc(r5)
    lwz r3, 0x1f4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801F9E70_00000F08
    lfs f1, 0x0(r4)
    bl fn_800A6BD4
    stfs f1, 0x0(r30)
lbl_fn_801F9E70_00000F08:
    lwz r3, 0x1f8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801F9E70_00000F20
    lfs f1, 0x4(r30)
    bl fn_800A6BD4
    stfs f1, 0x4(r30)
lbl_fn_801F9E70_00000F20:
    lwz r3, 0x1fc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801F9E70_00000F38
    lfs f1, 0x8(r30)
    bl fn_800A6BD4
    stfs f1, 0x8(r30)
lbl_fn_801F9E70_00000F38:
    lwz r3, 0x200(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801F9E70_00000F50
    lfs f1, 0xc(r30)
    bl fn_800A6BD4
    stfs f1, 0xc(r30)
lbl_fn_801F9E70_00000F50:
    lwz r3, 0x204(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801F9E70_00000F68
    lfs f1, 0x0(r31)
    bl fn_800A6BD4
    stfs f1, 0x0(r31)
lbl_fn_801F9E70_00000F68:
    lwz r3, 0x208(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801F9E70_00000F80
    lfs f1, 0x4(r31)
    bl fn_800A6BD4
    stfs f1, 0x4(r31)
lbl_fn_801F9E70_00000F80:
    lwz r3, 0x20c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801F9E70_00000F98
    lfs f1, 0x8(r31)
    bl fn_800A6BD4
    stfs f1, 0x8(r31)
lbl_fn_801F9E70_00000F98:
    lwz r3, 0x210(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801F9E70_00000FB0
    lfs f1, 0xc(r31)
    bl fn_800A6BD4
    stfs f1, 0xc(r31)
lbl_fn_801F9E70_00000FB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
