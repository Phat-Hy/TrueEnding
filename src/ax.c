#include "revolution/types.h"
#include "revolution/os.h"

/* External runtime functions */
extern void _savegpr_27(void);
extern void _restgpr_27(void);
extern void OSRegisterVersion(const char*);

/* External AX/DSP functions */
extern void fn_80609570(void);
extern void fn_80609B00(u32);
extern void fn_8060A120(void);
extern void fn_8060AB60(void);
extern void fn_8060ABA0(void);

/* External large data symbols */
extern u8 lbl_807D1630[];
extern u8 lbl_807D16B0[];
extern u8 lbl_807D1740[];
extern u8 lbl_807D2940[];
extern u8 lbl_807D3B40[];

/* External small data symbols (SDA21) */
extern const char* lbl_8087E848;
extern u32 lbl_8087FEF8;
extern u32 lbl_8087FF00;
extern u32 lbl_8087FF08;
extern u32 lbl_8087FF0C;
extern u32 lbl_8087FF10;
extern u32 lbl_8087FF2C;
extern u32 lbl_8087FF30;
extern u32 lbl_8087FF34;
extern u32 lbl_8087FF38;
extern u32 lbl_8087FF3C;
extern u32 lbl_8087FF40;
extern u32 lbl_8087FF44;
extern u32 lbl_8087FF48;
extern u32 lbl_8087FF4C;

/* Function declarations */
void fn_80607D70(void);
void fn_80607DD0(void);
void fn_80607DE0(void);
void fn_80607E00(void);
void fn_80607EB0(void);
void fn_80607F60(void);
void fn_80607F80(void);
void fn_80607F90(void);
void fn_80608020(void);
void fn_806080A0(void);
void fn_80608230(void);
void fn_806082D0(void);
void fn_806083F0(void);
void fn_80608430(void);
void fn_80608450(void);
void fn_80608470(void);
void fn_80608490(void);
void fn_806084B0(void);
void fn_806084D0(void);
void fn_80608510(void);
void fn_80608530(void);
void fn_80608550(void);
void fn_80608570(void);
void fn_80608590(void);
void fn_806085B0(void);
void fn_806085F0(void);

asm void fn_80607D70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087FEF8
    cmpwi r0, 0x0
    bne lbl_fn_80607D70_00000044
    lwz r3, lbl_8087E848
    bl OSRegisterVersion
    bl fn_80607EB0
    bl fn_8060ABA0
    bl fn_8060A120
    bl fn_806082D0
    bl fn_80609570
    li r3, 0x0
    bl fn_80609B00
    li r0, 0x1
    stw r0, lbl_8087FEF8
lbl_fn_80607D70_00000044:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80607DD0(void)
{
    nofralloc
    lwz r3, lbl_8087FEF8
    blr
}

asm void fn_80607DE0(void)
{
    nofralloc
    lis r4, lbl_807D1630@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_807D1630@l
    lwzx r3, r4, r0
    blr
}

asm void fn_80607E00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r29, lbl_8087FF00
    cmpwi r29, 0x0
    beq lbl_fn_80607E00_000000BC
    lwz r0, 0x8(r29)
    stw r0, lbl_8087FF00
lbl_fn_80607E00_000000BC:
    lis r30, lbl_807D1630@ha
    li r31, 0x0
    b lbl_fn_80607E00_00000118
lbl_fn_80607E00_000000C8:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80607E00_00000104
    lwz r12, 0x10(r29)
    cmpwi r12, 0x0
    beq lbl_fn_80607E00_000000EC
    mr r3, r29
    mtctr r12
    bctrl
lbl_fn_80607E00_000000EC:
    mr r3, r29
    bl fn_80607F90
    lwz r0, lbl_807D1630@l(r30)
    stw r0, 0x0(r29)
    stw r29, lbl_807D1630@l(r30)
    stw r31, 0xc(r29)
lbl_fn_80607E00_00000104:
    lwz r29, lbl_8087FF00
    cmpwi r29, 0x0
    beq lbl_fn_80607E00_00000118
    lwz r0, 0x8(r29)
    stw r0, lbl_8087FF00
lbl_fn_80607E00_00000118:
    cmpwi r29, 0x0
    bne lbl_fn_80607E00_000000C8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80607EB0(void)
{
    nofralloc
    lis r4, lbl_807D16B0@ha
    lis r5, lbl_807D1630@ha
    li r3, 0x0
    li r0, 0x2
    stw r3, lbl_8087FF00
    addi r4, r4, lbl_807D16B0@l
    addi r5, r5, lbl_807D1630@l
    mtctr r0
lbl_fn_80607EB0_00000160:
    stw r3, 0x0(r4)
    stw r3, 0x0(r5)
    stw r3, 0x4(r4)
    stw r3, 0x4(r5)
    stw r3, 0x8(r4)
    stw r3, 0x8(r5)
    stw r3, 0xc(r4)
    stw r3, 0xc(r5)
    stw r3, 0x10(r4)
    stw r3, 0x10(r5)
    stw r3, 0x14(r4)
    stw r3, 0x14(r5)
    stw r3, 0x18(r4)
    stw r3, 0x18(r5)
    stw r3, 0x1c(r4)
    stw r3, 0x1c(r5)
    stw r3, 0x20(r4)
    stw r3, 0x20(r5)
    stw r3, 0x24(r4)
    stw r3, 0x24(r5)
    stw r3, 0x28(r4)
    stw r3, 0x28(r5)
    stw r3, 0x2c(r4)
    stw r3, 0x2c(r5)
    stw r3, 0x30(r4)
    stw r3, 0x30(r5)
    stw r3, 0x34(r4)
    stw r3, 0x34(r5)
    stw r3, 0x38(r4)
    stw r3, 0x38(r5)
    stw r3, 0x3c(r4)
    addi r4, r4, 0x40
    stw r3, 0x3c(r5)
    addi r5, r5, 0x40
    bdnz lbl_fn_80607EB0_00000160
    blr
}

asm void fn_80607F60(void)
{
    nofralloc
    lis r5, lbl_807D1630@ha
    li r0, 0x0
    lwz r4, lbl_807D1630@l(r5)
    stw r4, 0x0(r3)
    stw r3, lbl_807D1630@l(r5)
    stw r0, 0xc(r3)
    blr
}

asm void fn_80607F80(void)
{
    nofralloc
    lwz r0, lbl_8087FF00
    stw r0, 0x8(r3)
    stw r3, lbl_8087FF00
    blr
}

asm void fn_80607F90(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    lis r5, lbl_807D1630@ha
    lis r4, lbl_807D16B0@ha
    slwi r6, r0, 2
    addi r5, r5, lbl_807D1630@l
    addi r4, r4, lbl_807D16B0@l
    lwzx r0, r5, r6
    lwzx r7, r4, r6
    cmplw r0, r7
    bne lbl_fn_80607F90_00000258
    li r0, 0x0
    stwx r0, r4, r6
    stwx r0, r5, r6
    blr
lbl_fn_80607F90_00000258:
    cmplw r3, r0
    bne lbl_fn_80607F90_00000274
    lwz r3, 0x0(r3)
    li r0, 0x0
    stwx r3, r5, r6
    stw r0, 0x4(r3)
    blr
lbl_fn_80607F90_00000274:
    cmplw r3, r7
    bne lbl_fn_80607F90_00000290
    lwz r3, 0x4(r3)
    li r0, 0x0
    stwx r3, r4, r6
    stw r0, 0x0(r3)
    blr
lbl_fn_80607F90_00000290:
    lwz r4, 0x4(r3)
    lwz r3, 0x0(r3)
    stw r3, 0x0(r4)
    stw r4, 0x4(r3)
    blr
}

asm void fn_80608020(void)
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
    mr r3, r30
    bl fn_80607F90
    lhz r0, 0x38(r30)
    cmplwi r0, 0x1
    bne lbl_fn_80608020_000002EC
    li r0, 0x1
    stw r0, 0x20(r30)
lbl_fn_80608020_000002EC:
    mr r3, r30
    bl fn_8060AB60
    lis r5, lbl_807D1630@ha
    li r0, 0x0
    lwz r4, lbl_807D1630@l(r5)
    mr r3, r31
    stw r4, 0x0(r30)
    stw r30, lbl_807D1630@l(r5)
    stw r0, 0xc(r30)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806080A0(void)
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
    bl OSDisableInterrupts
    lis r4, lbl_807D1630@ha
    mr r31, r3
    lwz r30, lbl_807D1630@l(r4)
    cmpwi r30, 0x0
    beq lbl_fn_806080A0_00000370
    lwz r0, 0x0(r30)
    stw r0, lbl_807D1630@l(r4)
lbl_fn_806080A0_00000370:
    cmpwi r30, 0x0
    bne lbl_fn_806080A0_00000430
    lis r3, lbl_807D1630@ha
    lis r4, lbl_807D16B0@ha
    addi r3, r3, lbl_807D1630@l
    subi r0, r27, 0x1
    addi r4, r4, lbl_807D16B0@l
    addi r5, r3, 0x4
    li r3, 0x0
    addi r6, r4, 0x4
    mtctr r0
    cmplwi r27, 0x1
    ble lbl_fn_806080A0_00000430
    nop
lbl_fn_806080A0_000003A8:
    lwz r0, 0x0(r5)
    li r30, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_806080A0_000003EC
    lwz r7, 0x0(r6)
    cmplw r0, r7
    bne lbl_fn_806080A0_000003D4
    stw r3, 0x0(r6)
    mr r30, r0
    stw r3, 0x0(r5)
    b lbl_fn_806080A0_000003EC
lbl_fn_806080A0_000003D4:
    cmpwi r7, 0x0
    beq lbl_fn_806080A0_000003EC
    lwz r4, 0x4(r7)
    mr r30, r7
    stw r4, 0x0(r6)
    stw r3, 0x0(r4)
lbl_fn_806080A0_000003EC:
    cmpwi r30, 0x0
    beq lbl_fn_806080A0_00000424
    lhz r0, 0x38(r30)
    cmplwi r0, 0x1
    bne lbl_fn_806080A0_00000408
    li r0, 0x1
    stw r0, 0x20(r30)
lbl_fn_806080A0_00000408:
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806080A0_00000430
    mr r3, r30
    mtctr r12
    bctrl
    b lbl_fn_806080A0_00000430
lbl_fn_806080A0_00000424:
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    bdnz lbl_fn_806080A0_000003A8
lbl_fn_806080A0_00000430:
    cmpwi r30, 0x0
    beq lbl_fn_806080A0_00000490
    lis r4, lbl_807D1630@ha
    slwi r5, r27, 2
    addi r4, r4, lbl_807D1630@l
    li r0, 0x0
    lwzx r3, r4, r5
    stw r3, 0x0(r30)
    cmpwi r3, 0x0
    stw r0, 0x4(r30)
    beq lbl_fn_806080A0_0000046C
    lwzx r3, r4, r5
    stw r30, 0x4(r3)
    stwx r30, r4, r5
    b lbl_fn_806080A0_0000047C
lbl_fn_806080A0_0000046C:
    lis r3, lbl_807D16B0@ha
    stwx r30, r4, r5
    addi r3, r3, lbl_807D16B0@l
    stwx r30, r3, r5
lbl_fn_806080A0_0000047C:
    stw r27, 0xc(r30)
    mr r3, r30
    stw r28, 0x10(r30)
    stw r29, 0x14(r30)
    bl fn_8060AB60
lbl_fn_806080A0_00000490:
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80608230(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    mr r31, r3
    mr r3, r29
    bl fn_80607F90
    lis r4, lbl_807D1630@ha
    slwi r5, r30, 2
    addi r4, r4, lbl_807D1630@l
    li r0, 0x0
    lwzx r3, r4, r5
    stw r3, 0x0(r29)
    cmpwi r3, 0x0
    stw r0, 0x4(r29)
    beq lbl_fn_80608230_00000524
    lwzx r3, r4, r5
    stw r29, 0x4(r3)
    stwx r29, r4, r5
    b lbl_fn_80608230_00000534
lbl_fn_80608230_00000524:
    lis r3, lbl_807D16B0@ha
    stwx r29, r4, r5
    addi r3, r3, lbl_807D16B0@l
    stwx r29, r3, r5
lbl_fn_80608230_00000534:
    stw r30, 0xc(r29)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806082D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_807D1740@ha
    li r5, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_807D1740@l
    li r0, 0x20
    li r4, 0x1
    li r3, 0x2
    stw r5, lbl_8087FF40
    addi r7, r6, 0x0
    addi r8, r6, 0x1200
    stw r5, lbl_8087FF3C
    addi r6, r6, 0x2400
    stw r5, lbl_8087FF38
    stw r5, lbl_8087FF34
    stw r5, lbl_8087FF30
    stw r5, lbl_8087FF2C
    stw r5, lbl_8087FF10
    stw r4, lbl_8087FF0C
    stw r3, lbl_8087FF08
    mtctr r0
lbl_fn_806082D0_000005B8:
    stw r5, 0x0(r7)
    stw r5, 0x0(r8)
    stw r5, 0x0(r6)
    stw r5, 0x4(r7)
    stw r5, 0x4(r8)
    stw r5, 0x4(r6)
    stw r5, 0x8(r7)
    stw r5, 0x8(r8)
    stw r5, 0x8(r6)
    stw r5, 0xc(r7)
    stw r5, 0xc(r8)
    stw r5, 0xc(r6)
    stw r5, 0x10(r7)
    stw r5, 0x10(r8)
    stw r5, 0x10(r6)
    stw r5, 0x14(r7)
    stw r5, 0x14(r8)
    stw r5, 0x14(r6)
    stw r5, 0x18(r7)
    stw r5, 0x18(r8)
    stw r5, 0x18(r6)
    stw r5, 0x1c(r7)
    stw r5, 0x1c(r8)
    stw r5, 0x1c(r6)
    stw r5, 0x20(r7)
    addi r7, r7, 0x24
    stw r5, 0x20(r8)
    addi r8, r8, 0x24
    stw r5, 0x20(r6)
    addi r6, r6, 0x24
    bdnz lbl_fn_806082D0_000005B8
    la r3, lbl_8087FF4C
    li r4, 0x0
    li r5, 0x3
    bl memset
    la r3, lbl_8087FF48
    li r4, 0x0
    li r5, 0x3
    bl memset
    la r3, lbl_8087FF44
    li r4, 0x0
    li r5, 0x3
    bl memset
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806083F0(void)
{
    nofralloc
    lwz r0, lbl_8087FF40
    cmpwi r0, 0x0
    beq lbl_fn_806083F0_000006A8
    lwz r0, lbl_8087FF10
    lis r4, lbl_807D1740@ha
    addi r4, r4, lbl_807D1740@l
    mulli r0, r0, 0x600
    add r0, r4, r0
    stw r0, 0x0(r3)
    blr
lbl_fn_806083F0_000006A8:
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_80608430(void)
{
    nofralloc
    lwz r0, lbl_8087FF0C
    lis r4, lbl_807D1740@ha
    addi r4, r4, lbl_807D1740@l
    mulli r0, r0, 0x600
    add r0, r4, r0
    stw r0, 0x0(r3)
    blr
}

asm void fn_80608450(void)
{
    nofralloc
    lwz r0, lbl_8087FF10
    lis r4, lbl_807D1740@ha
    addi r4, r4, lbl_807D1740@l
    mulli r0, r0, 0x600
    add r4, r4, r0
    addi r0, r4, 0x480
    stw r0, 0x0(r3)
    blr
}

asm void fn_80608470(void)
{
    nofralloc
    lwz r0, lbl_8087FF0C
    lis r4, lbl_807D1740@ha
    addi r4, r4, lbl_807D1740@l
    mulli r0, r0, 0x600
    add r4, r4, r0
    addi r0, r4, 0x180
    stw r0, 0x0(r3)
    blr
}

asm void fn_80608490(void)
{
    nofralloc
    lwz r0, lbl_8087FF0C
    lis r4, lbl_807D1740@ha
    addi r4, r4, lbl_807D1740@l
    mulli r0, r0, 0x600
    add r4, r4, r0
    addi r0, r4, 0x300
    stw r0, 0x0(r3)
    blr
}

asm void fn_806084B0(void)
{
    nofralloc
    lwz r0, lbl_8087FF0C
    lis r4, lbl_807D1740@ha
    addi r4, r4, lbl_807D1740@l
    mulli r0, r0, 0x600
    add r4, r4, r0
    addi r0, r4, 0x480
    stw r0, 0x0(r3)
    blr
}

asm void fn_806084D0(void)
{
    nofralloc
    lwz r0, lbl_8087FF3C
    cmpwi r0, 0x0
    beq lbl_fn_806084D0_00000788
    lwz r0, lbl_8087FF10
    lis r4, lbl_807D2940@ha
    addi r4, r4, lbl_807D2940@l
    mulli r0, r0, 0x600
    add r0, r4, r0
    stw r0, 0x0(r3)
    blr
lbl_fn_806084D0_00000788:
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_80608510(void)
{
    nofralloc
    lwz r0, lbl_8087FF0C
    lis r4, lbl_807D2940@ha
    addi r4, r4, lbl_807D2940@l
    mulli r0, r0, 0x600
    add r0, r4, r0
    stw r0, 0x0(r3)
    blr
}

asm void fn_80608530(void)
{
    nofralloc
    lwz r0, lbl_8087FF10
    lis r4, lbl_807D2940@ha
    addi r4, r4, lbl_807D2940@l
    mulli r0, r0, 0x600
    add r4, r4, r0
    addi r0, r4, 0x480
    stw r0, 0x0(r3)
    blr
}

asm void fn_80608550(void)
{
    nofralloc
    lwz r0, lbl_8087FF0C
    lis r4, lbl_807D2940@ha
    addi r4, r4, lbl_807D2940@l
    mulli r0, r0, 0x600
    add r4, r4, r0
    addi r0, r4, 0x180
    stw r0, 0x0(r3)
    blr
}

asm void fn_80608570(void)
{
    nofralloc
    lwz r0, lbl_8087FF0C
    lis r4, lbl_807D2940@ha
    addi r4, r4, lbl_807D2940@l
    mulli r0, r0, 0x600
    add r4, r4, r0
    addi r0, r4, 0x300
    stw r0, 0x0(r3)
    blr
}

asm void fn_80608590(void)
{
    nofralloc
    lwz r0, lbl_8087FF0C
    lis r4, lbl_807D2940@ha
    addi r4, r4, lbl_807D2940@l
    mulli r0, r0, 0x600
    add r4, r4, r0
    addi r0, r4, 0x480
    stw r0, 0x0(r3)
    blr
}

asm void fn_806085B0(void)
{
    nofralloc
    lwz r0, lbl_8087FF38
    cmpwi r0, 0x0
    beq lbl_fn_806085B0_00000868
    lwz r0, lbl_8087FF10
    lis r4, lbl_807D3B40@ha
    addi r4, r4, lbl_807D3B40@l
    mulli r0, r0, 0x480
    add r0, r4, r0
    stw r0, 0x0(r3)
    blr
lbl_fn_806085B0_00000868:
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_806085F0(void)
{
    nofralloc
    lwz r0, lbl_8087FF0C
    lis r4, lbl_807D3B40@ha
    addi r4, r4, lbl_807D3B40@l
    mulli r0, r0, 0x480
    add r0, r4, r0
    stw r0, 0x0(r3)
    blr
}
