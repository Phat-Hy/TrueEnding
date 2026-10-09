#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005E3E4(void);
extern void fn_8006144C(void);
extern void fn_8006F72C(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800DBF68(void);
extern void fn_801EC158(void);
extern void fn_801EC6C0(void);
extern void fn_801ED928(void);
extern void fn_801EDC78(void);
extern void fn_801F2398(void);
extern void fn_801F3EF4(void);
extern void fn_801F94F4(void);
extern void fn_801FF1B8(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_8073CDC8[];
extern u8 lbl_80782AA0[];
extern u8 lbl_80782AD8[];

/* Small data declarations */
extern u32 lbl_8087DAE0;
extern u32 lbl_8087DAE4;
extern u32 lbl_8087EEB0;
extern u32 lbl_80882C00;
extern u32 lbl_80882C10;
extern u32 lbl_80882C14;
extern u32 lbl_80882C18;
extern u32 lbl_80882C1C;
extern u32 lbl_80882C20;
extern u32 lbl_80882C28;
extern u32 lbl_80882C30;
extern u32 lbl_80882C34;
extern u32 lbl_80882C38;
extern u32 lbl_80882C3C;

/* Function declarations */
void fn_801EF36C(void);
void fn_801EF7E0(void);
void fn_801EF894(void);
void fn_801EF944(void);
void fn_801EF9B4(void);
void fn_801EFA38(void);
void fn_801EFA78(void);
void fn_801EFAB8(void);
void fn_801EFB00(void);
void fn_801EFB4C(void);
void fn_801EFB90(void);
void fn_801EFBE8(void);
void fn_801F0364(void);
void fn_801F03AC(void);
void fn_801F04FC(void);
void fn_801F0544(void);
void fn_801F0670(void);
void fn_801F0758(void);
void fn_801F0AC0(void);
void fn_801F0B04(void);
void fn_801F0B5C(void);

asm void fn_801EF36C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_801EF36C_00000058
    cmpwi r4, 0x1
    beq lbl_fn_801EF36C_00000084
    cmpwi r4, 0x2
    beq lbl_fn_801EF36C_000000B0
    cmpwi r4, 0x3
    beq lbl_fn_801EF36C_000000DC
    cmpwi r4, 0x4
    beq lbl_fn_801EF36C_00000108
    cmpwi r4, 0x5
    beq lbl_fn_801EF36C_00000134
    b lbl_fn_801EF36C_0000015C
lbl_fn_801EF36C_00000058:
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    add. r3, r4, r0
    beq lbl_fn_801EF36C_00000070
    mr r4, r28
    bl fn_801F94F4
lbl_fn_801EF36C_00000070:
    lwz r4, 0x98(r28)
    mr r29, r3
    addi r0, r4, 0x214
    stw r0, 0x98(r28)
    b lbl_fn_801EF36C_0000015C
lbl_fn_801EF36C_00000084:
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    add. r3, r4, r0
    beq lbl_fn_801EF36C_0000009C
    mr r4, r28
    bl fn_801F2398
lbl_fn_801EF36C_0000009C:
    lwz r4, 0x98(r28)
    mr r29, r3
    addi r0, r4, 0x14c
    stw r0, 0x98(r28)
    b lbl_fn_801EF36C_0000015C
lbl_fn_801EF36C_000000B0:
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    add. r3, r4, r0
    beq lbl_fn_801EF36C_000000C8
    mr r4, r28
    bl fn_801EFB4C
lbl_fn_801EF36C_000000C8:
    lwz r4, 0x98(r28)
    mr r29, r3
    addi r0, r4, 0x12c
    stw r0, 0x98(r28)
    b lbl_fn_801EF36C_0000015C
lbl_fn_801EF36C_000000DC:
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    add. r3, r4, r0
    beq lbl_fn_801EF36C_000000F4
    mr r4, r28
    bl fn_801FF1B8
lbl_fn_801EF36C_000000F4:
    lwz r4, 0x98(r28)
    mr r29, r3
    addi r0, r4, 0x140
    stw r0, 0x98(r28)
    b lbl_fn_801EF36C_0000015C
lbl_fn_801EF36C_00000108:
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    add. r3, r4, r0
    beq lbl_fn_801EF36C_00000120
    mr r4, r28
    bl fn_801F0AC0
lbl_fn_801EF36C_00000120:
    lwz r4, 0x98(r28)
    mr r29, r3
    addi r0, r4, 0x12c
    stw r0, 0x98(r28)
    b lbl_fn_801EF36C_0000015C
lbl_fn_801EF36C_00000134:
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    add. r3, r4, r0
    beq lbl_fn_801EF36C_0000014C
    mr r4, r28
    bl fn_801F3EF4
lbl_fn_801EF36C_0000014C:
    lwz r4, 0x98(r28)
    mr r29, r3
    addi r0, r4, 0x134
    stw r0, 0x98(r28)
lbl_fn_801EF36C_0000015C:
    cmpwi r29, 0x0
    beq lbl_fn_801EF36C_00000450
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_801EF36C_00000190
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801EF36C_000002E0
lbl_fn_801EF36C_00000190:
    lwz r0, 0x8(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_801EF36C_00000434
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAE4
    la r6, lbl_8087DAE0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0xc(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EF36C_000002D0
    lwz r0, 0x4(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EF36C_000001D8
    mr r4, r0
lbl_fn_801EF36C_000001D8:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EF36C_000002C8
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EF36C_00000298
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EF36C_00000298
lbl_fn_801EF36C_0000020C:
    lwz r8, 0xc(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EF36C_0000020C
lbl_fn_801EF36C_00000298:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EF36C_000002C8
lbl_fn_801EF36C_000002B0:
    lwz r3, 0xc(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EF36C_000002B0
lbl_fn_801EF36C_000002C8:
    lwz r3, 0xc(r28)
    bl fn_80084C24
lbl_fn_801EF36C_000002D0:
    li r0, 0x8
    stw r30, 0xc(r28)
    stw r0, 0x8(r28)
    b lbl_fn_801EF36C_00000434
lbl_fn_801EF36C_000002E0:
    lwz r3, 0x4(r28)
    cmplw r3, r0
    blt lbl_fn_801EF36C_00000434
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_801EF36C_00000434
    slwi r3, r30, 2
    li r4, 0x0
    la r5, lbl_8087DAE4
    la r6, lbl_8087DAE0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0xc(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EF36C_0000042C
    lwz r0, 0x4(r28)
    mr r4, r30
    cmplw r30, r0
    ble lbl_fn_801EF36C_00000334
    mr r4, r0
lbl_fn_801EF36C_00000334:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EF36C_00000424
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EF36C_000003F4
    addi r0, r8, 0x7
    mr r7, r31
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EF36C_000003F4
lbl_fn_801EF36C_00000368:
    lwz r8, 0xc(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0xc(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EF36C_00000368
lbl_fn_801EF36C_000003F4:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EF36C_00000424
lbl_fn_801EF36C_0000040C:
    lwz r3, 0xc(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EF36C_0000040C
lbl_fn_801EF36C_00000424:
    lwz r3, 0xc(r28)
    bl fn_80084C24
lbl_fn_801EF36C_0000042C:
    stw r31, 0xc(r28)
    stw r30, 0x8(r28)
lbl_fn_801EF36C_00000434:
    lwz r0, 0x4(r28)
    lwz r3, 0xc(r28)
    slwi r0, r0, 2
    stwx r29, r3, r0
    lwz r3, 0x4(r28)
    addi r0, r3, 0x1
    stw r0, 0x4(r28)
lbl_fn_801EF36C_00000450:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EF7E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_801EF7E0_000004C0
lbl_fn_801EF7E0_0000049C:
    lwz r3, 0xc(r29)
    li r4, -0x1
    lwzx r3, r3, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_fn_801EF7E0_000004C0:
    lwz r0, 0x4(r29)
    cmplw r30, r0
    blt lbl_fn_801EF7E0_0000049C
    lwz r3, 0xc(r29)
    li r31, 0x0
    stw r31, 0x4(r29)
    cmpwi r3, 0x0
    stw r31, 0x8(r29)
    beq lbl_fn_801EF7E0_000004EC
    bl fn_80084C24
    stw r31, 0xc(r29)
lbl_fn_801EF7E0_000004EC:
    lwz r3, 0x94(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801EF7E0_000004FC
    bl fn_80084C24
lbl_fn_801EF7E0_000004FC:
    li r0, 0x0
    stw r0, 0x94(r29)
    stw r0, 0x90(r29)
    stw r0, 0x98(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EF894(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_801EF894_00000574
lbl_fn_801EF894_00000554:
    lwz r0, 0x8c(r28)
    li r4, 0x0
    add r31, r0, r30
    addi r3, r31, 0x4
    bl fn_801F0544
    stfs f1, 0xc(r31)
    addi r30, r30, 0x10
    addi r29, r29, 0x1
lbl_fn_801EF894_00000574:
    lwz r0, 0x88(r28)
    cmplw r29, r0
    blt lbl_fn_801EF894_00000554
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_801EF894_000005AC
lbl_fn_801EF894_0000058C:
    lwz r3, 0xc(r28)
    lwzx r3, r3, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_fn_801EF894_000005AC:
    lwz r0, 0x4(r28)
    cmplw r29, r0
    blt lbl_fn_801EF894_0000058C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EF944(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_801EF944_00000620
lbl_fn_801EF944_00000600:
    lwz r3, 0xc(r29)
    lwzx r3, r3, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_fn_801EF944_00000620:
    lwz r0, 0x4(r29)
    cmplw r30, r0
    blt lbl_fn_801EF944_00000600
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EF9B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_801EF9B4_000006A0
lbl_fn_801EF9B4_00000670:
    lwz r3, 0xc(r29)
    lwzx r3, r3, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_801EF9B4_00000698
    li r3, 0x1
    b lbl_fn_801EF9B4_000006B0
lbl_fn_801EF9B4_00000698:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_fn_801EF9B4_000006A0:
    lwz r0, 0x4(r29)
    cmplw r30, r0
    blt lbl_fn_801EF9B4_00000670
    li r3, 0x0
lbl_fn_801EF9B4_000006B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EFA38(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801EFA38_00000704
lbl_fn_801EFA38_000006E0:
    lwz r6, 0xc(r3)
    lwzx r6, r6, r5
    lhz r0, 0xa(r6)
    cmplw r4, r0
    bne lbl_fn_801EFA38_000006FC
    mr r3, r6
    blr
lbl_fn_801EFA38_000006FC:
    addi r5, r5, 0x4
    bdnz lbl_fn_801EFA38_000006E0
lbl_fn_801EFA38_00000704:
    li r3, 0x0
    blr
}

asm void fn_801EFA78(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801EFA78_00000744
lbl_fn_801EFA78_00000720:
    lwz r6, 0xc(r3)
    lwzx r6, r6, r5
    lwz r0, 0x4(r6)
    cmplw r4, r0
    bne lbl_fn_801EFA78_0000073C
    mr r3, r6
    blr
lbl_fn_801EFA78_0000073C:
    addi r5, r5, 0x4
    bdnz lbl_fn_801EFA78_00000720
lbl_fn_801EFA78_00000744:
    li r3, 0x0
    blr
}

asm void fn_801EFAB8(void)
{
    nofralloc
    addi r6, r3, 0xc
    addi r4, r3, 0xc
    cmplw r6, r4
    li r5, 0x0
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    bgelr
    addi r0, r4, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    bgelr
lbl_fn_801EFAB8_00000780:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_801EFAB8_00000780
    blr
}

asm void fn_801EFB00(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r4, 0x0
    lfs f0, lbl_80882C00
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801EFB00_000007D8
lbl_fn_801EFB00_000007AC:
    lwz r5, 0xc(r3)
    lwzx r5, r5, r4
    lhz r0, 0x8(r5)
    cmplwi r0, 0x5
    beq lbl_fn_801EFB00_000007D0
    lfs f1, 0x18(r5)
    fcmpo cr0, f0, f1
    bge lbl_fn_801EFB00_000007D0
    fmr f0, f1
lbl_fn_801EFB00_000007D0:
    addi r4, r4, 0x4
    bdnz lbl_fn_801EFB00_000007AC
lbl_fn_801EFB00_000007D8:
    stfs f0, 0x58(r3)
    blr
}

asm void fn_801EFB4C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801EC158
    lis r3, lbl_80782AA0@ha
    li r0, 0x2
    addi r3, r3, lbl_80782AA0@l
    stw r3, 0x0(r31)
    mr r3, r31
    sth r0, 0x8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EFB90(void)
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
    beq lbl_fn_801EFB90_00000860
    li r4, 0x0
    bl fn_801EC6C0
    cmpwi r31, 0x0
    ble lbl_fn_801EFB90_00000860
    mr r3, r30
    bl dtor_80084684
lbl_fn_801EFB90_00000860:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EFBE8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_27
    mr r31, r3
    bl fn_801EDC78
    cmpwi r3, 0x0
    beq lbl_fn_801EFBE8_00000FE0
    lfs f0, lbl_80882C10
    li r30, 0x0
    stfs f0, 0x50(r1)
    mr r3, r31
    addi r4, r1, 0x50
    addi r5, r1, 0x28
    stfs f0, 0x54(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x38
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x10(r1)
    stw r30, 0x14(r1)
    bl fn_801ED928
    lfs f3, 0x34(r1)
    lfs f5, lbl_80882C10
    fcmpo cr0, f3, f5
    cror eq, lt, eq
    beq lbl_fn_801EFBE8_00000FE0
    lfs f1, 0x4c(r1)
    lfs f2, 0x28(r1)
    fmuls f1, f1, f3
    lfs f0, lbl_80882C1C
    lfs f4, 0x40(r1)
    fcmpo cr0, f2, f0
    lfs f3, 0x44(r1)
    lfs f0, 0x48(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f1, 0x24(r1)
    cror eq, gt, eq
    bne lbl_fn_801EFBE8_00000930
    li r30, 0xff
    b lbl_fn_801EFBE8_00000954
lbl_fn_801EFBE8_00000930:
    fcmpo cr0, f2, f5
    cror eq, lt, eq
    bne lbl_fn_801EFBE8_00000940
    b lbl_fn_801EFBE8_00000954
lbl_fn_801EFBE8_00000940:
    lfs f1, lbl_80882C18
    lfs f0, lbl_80882C14
    fmadds f1, f1, f2, f0
    bl fn_80695D84
    mr r30, r3
lbl_fn_801EFBE8_00000954:
    lfs f2, 0x2c(r1)
    lfs f0, lbl_80882C1C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801EFBE8_00000970
    li r29, 0xff
    b lbl_fn_801EFBE8_0000099C
lbl_fn_801EFBE8_00000970:
    lfs f0, lbl_80882C10
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801EFBE8_00000988
    li r3, 0x0
    b lbl_fn_801EFBE8_00000998
lbl_fn_801EFBE8_00000988:
    lfs f1, lbl_80882C18
    lfs f0, lbl_80882C14
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801EFBE8_00000998:
    mr r29, r3
lbl_fn_801EFBE8_0000099C:
    lfs f2, 0x30(r1)
    lfs f0, lbl_80882C1C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801EFBE8_000009B8
    li r28, 0xff
    b lbl_fn_801EFBE8_000009E4
lbl_fn_801EFBE8_000009B8:
    lfs f0, lbl_80882C10
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801EFBE8_000009D0
    li r3, 0x0
    b lbl_fn_801EFBE8_000009E0
lbl_fn_801EFBE8_000009D0:
    lfs f1, lbl_80882C18
    lfs f0, lbl_80882C14
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801EFBE8_000009E0:
    mr r28, r3
lbl_fn_801EFBE8_000009E4:
    lfs f2, 0x34(r1)
    lfs f0, lbl_80882C1C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801EFBE8_00000A00
    li r3, 0xff
    b lbl_fn_801EFBE8_00000A28
lbl_fn_801EFBE8_00000A00:
    lfs f0, lbl_80882C10
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801EFBE8_00000A18
    li r3, 0x0
    b lbl_fn_801EFBE8_00000A28
lbl_fn_801EFBE8_00000A18:
    lfs f1, lbl_80882C18
    lfs f0, lbl_80882C14
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801EFBE8_00000A28:
    lfs f2, 0x18(r1)
    slwi r3, r3, 24
    lfs f0, lbl_80882C1C
    slwi r0, r30, 16
    or r3, r3, r0
    slwi r0, r29, 8
    fcmpo cr0, f2, f0
    or r0, r0, r3
    or r27, r28, r0
    cror eq, gt, eq
    bne lbl_fn_801EFBE8_00000A5C
    li r28, 0xff
    b lbl_fn_801EFBE8_00000A88
lbl_fn_801EFBE8_00000A5C:
    lfs f0, lbl_80882C10
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801EFBE8_00000A74
    li r3, 0x0
    b lbl_fn_801EFBE8_00000A84
lbl_fn_801EFBE8_00000A74:
    lfs f1, lbl_80882C18
    lfs f0, lbl_80882C14
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801EFBE8_00000A84:
    mr r28, r3
lbl_fn_801EFBE8_00000A88:
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80882C1C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801EFBE8_00000AA4
    li r29, 0xff
    b lbl_fn_801EFBE8_00000AD0
lbl_fn_801EFBE8_00000AA4:
    lfs f0, lbl_80882C10
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801EFBE8_00000ABC
    li r3, 0x0
    b lbl_fn_801EFBE8_00000ACC
lbl_fn_801EFBE8_00000ABC:
    lfs f1, lbl_80882C18
    lfs f0, lbl_80882C14
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801EFBE8_00000ACC:
    mr r29, r3
lbl_fn_801EFBE8_00000AD0:
    lfs f2, 0x20(r1)
    lfs f0, lbl_80882C1C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801EFBE8_00000AEC
    li r30, 0xff
    b lbl_fn_801EFBE8_00000B18
lbl_fn_801EFBE8_00000AEC:
    lfs f0, lbl_80882C10
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801EFBE8_00000B04
    li r3, 0x0
    b lbl_fn_801EFBE8_00000B14
lbl_fn_801EFBE8_00000B04:
    lfs f1, lbl_80882C18
    lfs f0, lbl_80882C14
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801EFBE8_00000B14:
    mr r30, r3
lbl_fn_801EFBE8_00000B18:
    lfs f2, 0x24(r1)
    lfs f0, lbl_80882C1C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801EFBE8_00000B34
    li r3, 0xff
    b lbl_fn_801EFBE8_00000B5C
lbl_fn_801EFBE8_00000B34:
    lfs f0, lbl_80882C10
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801EFBE8_00000B4C
    li r3, 0x0
    b lbl_fn_801EFBE8_00000B5C
lbl_fn_801EFBE8_00000B4C:
    lfs f1, lbl_80882C18
    lfs f0, lbl_80882C14
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801EFBE8_00000B5C:
    lwz r4, lbl_8087EEB0
    slwi r0, r28, 16
    lfs f8, lbl_80882C1C
    slwi r3, r3, 24
    stfs f8, 0x8(r1)
    or r3, r3, r0
    lfs f6, lbl_80882C10
    slwi r0, r29, 8
    addi r28, r4, 0x10
    lfs f1, 0x50(r1)
    or r0, r0, r3
    mr r3, r4
    mr r4, r27
    fmr f7, f6
    lfs f2, 0x54(r1)
    mr r5, r28
    lfs f3, 0x60(r1)
    or r27, r30, r0
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    li r7, 0x1
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lhz r0, 0xe(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801EFBE8_00000C1C
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f1, 0x50(r1)
    lfs f0, 0x38(r1)
    fmr f7, f6
    lfs f4, 0x54(r1)
    lfs f2, 0x3c(r1)
    fadds f1, f1, f0
    lfs f3, lbl_80882C20
    lfs f0, 0x60(r1)
    fadds f2, f4, f2
    lwz r3, lbl_8087EEB0
    fadds f3, f3, f0
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    b lbl_fn_801EFBE8_00000FE0
lbl_fn_801EFBE8_00000C1C:
    cmplwi r0, 0x2
    bne lbl_fn_801EFBE8_00000D58
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f3, 0x50(r1)
    lfs f1, 0x38(r1)
    fmr f7, f6
    lfs f2, lbl_80882C20
    lfs f0, 0x60(r1)
    fadds f1, f3, f1
    lwz r3, lbl_8087EEB0
    fadds f3, f2, f0
    lfs f2, 0x54(r1)
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f3, 0x54(r1)
    lfs f2, 0x3c(r1)
    fmr f7, f6
    lfs f1, lbl_80882C20
    lfs f0, 0x60(r1)
    fadds f2, f3, f2
    lwz r3, lbl_8087EEB0
    fadds f3, f1, f0
    lfs f1, 0x50(r1)
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f3, 0x50(r1)
    lfs f1, 0x38(r1)
    fmr f7, f6
    lfs f2, lbl_80882C20
    lfs f0, 0x60(r1)
    fsubs f1, f3, f1
    lwz r3, lbl_8087EEB0
    fadds f3, f2, f0
    lfs f2, 0x54(r1)
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f3, 0x54(r1)
    lfs f2, 0x3c(r1)
    fmr f7, f6
    lfs f1, lbl_80882C20
    lfs f0, 0x60(r1)
    fsubs f2, f3, f2
    lwz r3, lbl_8087EEB0
    fadds f3, f1, f0
    lfs f1, 0x50(r1)
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    b lbl_fn_801EFBE8_00000FE0
lbl_fn_801EFBE8_00000D58:
    cmplwi r0, 0x3
    bne lbl_fn_801EFBE8_00000FE0
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f3, 0x50(r1)
    lfs f1, 0x38(r1)
    fmr f7, f6
    lfs f2, lbl_80882C20
    lfs f0, 0x60(r1)
    fadds f1, f3, f1
    lwz r3, lbl_8087EEB0
    fadds f3, f2, f0
    lfs f2, 0x54(r1)
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f3, 0x54(r1)
    lfs f2, 0x3c(r1)
    fmr f7, f6
    lfs f1, lbl_80882C20
    lfs f0, 0x60(r1)
    fadds f2, f3, f2
    lwz r3, lbl_8087EEB0
    fadds f3, f1, f0
    lfs f1, 0x50(r1)
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f3, 0x50(r1)
    lfs f1, 0x38(r1)
    fmr f7, f6
    lfs f2, lbl_80882C20
    lfs f0, 0x60(r1)
    fsubs f1, f3, f1
    lwz r3, lbl_8087EEB0
    fadds f3, f2, f0
    lfs f2, 0x54(r1)
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f3, 0x54(r1)
    lfs f2, 0x3c(r1)
    fmr f7, f6
    lfs f1, lbl_80882C20
    lfs f0, 0x60(r1)
    fsubs f2, f3, f2
    lwz r3, lbl_8087EEB0
    fadds f3, f1, f0
    lfs f1, 0x50(r1)
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f1, 0x50(r1)
    lfs f0, 0x38(r1)
    fmr f7, f6
    lfs f4, 0x54(r1)
    lfs f2, 0x3c(r1)
    fadds f1, f1, f0
    lfs f3, lbl_80882C20
    lfs f0, 0x60(r1)
    fadds f2, f4, f2
    lwz r3, lbl_8087EEB0
    fadds f3, f3, f0
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f1, 0x50(r1)
    lfs f0, 0x38(r1)
    fmr f7, f6
    lfs f4, 0x54(r1)
    lfs f2, 0x3c(r1)
    fadds f1, f1, f0
    lfs f3, lbl_80882C20
    lfs f0, 0x60(r1)
    fsubs f2, f4, f2
    lwz r3, lbl_8087EEB0
    fadds f3, f3, f0
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f1, 0x50(r1)
    lfs f0, 0x38(r1)
    fmr f7, f6
    lfs f4, 0x54(r1)
    lfs f2, 0x3c(r1)
    fsubs f1, f1, f0
    lfs f3, lbl_80882C20
    lfs f0, 0x60(r1)
    fsubs f2, f4, f2
    lwz r3, lbl_8087EEB0
    fadds f3, f3, f0
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
    lfs f8, lbl_80882C1C
    mr r4, r27
    stfs f8, 0x8(r1)
    mr r5, r28
    lfs f6, lbl_80882C10
    li r7, 0x1
    lfs f1, 0x50(r1)
    lfs f0, 0x38(r1)
    fmr f7, f6
    lfs f4, 0x54(r1)
    lfs f2, 0x3c(r1)
    fsubs f1, f1, f0
    lfs f3, lbl_80882C20
    lfs f0, 0x60(r1)
    fadds f2, f4, f2
    lwz r3, lbl_8087EEB0
    fadds f3, f3, f0
    lfs f4, 0x58(r1)
    lfs f5, 0x5c(r1)
    lwz r6, 0x14(r1)
    bl fn_8005E3E4
lbl_fn_801EFBE8_00000FE0:
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801F0364(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r8, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    blelr
lbl_fn_801F0364_00001010:
    lwz r7, 0x0(r3)
    lwzx r0, r7, r6
    cmpw r4, r0
    bne lbl_fn_801F0364_00001030
    slwi r0, r8, 3
    add r3, r7, r0
    stw r5, 0x4(r3)
    blr
lbl_fn_801F0364_00001030:
    addi r6, r6, 0x8
    addi r8, r8, 0x1
    bdnz lbl_fn_801F0364_00001010
    blr
}

asm void fn_801F03AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lwz r5, 0x4(r3)
    cmpwi cr1, r5, 0x0
    bne cr1, lbl_fn_801F03AC_00001058
    li r3, 0x0
    b lbl_fn_801F03AC_00001188
lbl_fn_801F03AC_00001058:
    cmpwi r5, 0x1
    ble lbl_fn_801F03AC_00001070
    lwz r6, 0x0(r3)
    lwz r0, 0x0(r6)
    cmpw r4, r0
    bgt lbl_fn_801F03AC_0000107C
lbl_fn_801F03AC_00001070:
    lwz r3, 0x0(r3)
    lwz r3, 0x4(r3)
    b lbl_fn_801F03AC_00001188
lbl_fn_801F03AC_0000107C:
    mr r8, r6
    li r7, 0x0
    li r9, 0x0
    li r3, 0x0
    mtctr r5
    ble cr1, lbl_fn_801F03AC_000010B8
lbl_fn_801F03AC_00001094:
    lwzx r0, r6, r3
    mr r7, r8
    add r8, r6, r3
    cmpw r4, r0
    bgt lbl_fn_801F03AC_000010B0
    li r9, 0x1
    b lbl_fn_801F03AC_000010B8
lbl_fn_801F03AC_000010B0:
    addi r3, r3, 0x8
    bdnz lbl_fn_801F03AC_00001094
lbl_fn_801F03AC_000010B8:
    cmpwi r9, 0x0
    bne lbl_fn_801F03AC_000010C8
    lwz r3, 0x4(r8)
    b lbl_fn_801F03AC_00001188
lbl_fn_801F03AC_000010C8:
    cmpwi r7, 0x0
    li r3, 0x0
    beq lbl_fn_801F03AC_000010E4
    cmpwi r8, 0x0
    bne lbl_fn_801F03AC_000010E4
    lwz r3, 0x4(r7)
    b lbl_fn_801F03AC_00001188
lbl_fn_801F03AC_000010E4:
    cmpwi r7, 0x0
    bne lbl_fn_801F03AC_000010FC
    cmpwi r8, 0x0
    beq lbl_fn_801F03AC_000010FC
    lwz r3, 0x4(r8)
    b lbl_fn_801F03AC_00001188
lbl_fn_801F03AC_000010FC:
    cmpwi r7, 0x0
    beq lbl_fn_801F03AC_00001188
    cmpwi r8, 0x0
    beq lbl_fn_801F03AC_00001188
    lwz r6, 0x0(r7)
    lis r3, 0x4330
    lwz r0, 0x0(r8)
    lis r5, lbl_8073CDC8@ha
    subf r4, r6, r4
    stw r3, 0x8(r1)
    xoris r4, r4, 0x8000
    subf r0, r6, r0
    stw r4, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_8073CDC8@l(r5)
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    lwz r4, 0x4(r7)
    stw r3, 0x10(r1)
    lwz r0, 0x4(r8)
    lfd f0, 0x10(r1)
    subf r0, r4, r0
    stw r3, 0x18(r1)
    fsubs f0, f0, f2
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    fdivs f1, f1, f0
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    add r3, r4, r0
lbl_fn_801F03AC_00001188:
    addi r1, r1, 0x30
    blr
}

asm void fn_801F04FC(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r7, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    blelr
lbl_fn_801F04FC_000011A8:
    lwz r6, 0x0(r3)
    lwzx r0, r6, r5
    cmpw r4, r0
    bne lbl_fn_801F04FC_000011C8
    slwi r0, r7, 3
    add r3, r6, r0
    stfs f1, 0x4(r3)
    blr
lbl_fn_801F04FC_000011C8:
    addi r5, r5, 0x8
    addi r7, r7, 0x1
    bdnz lbl_fn_801F04FC_000011A8
    blr
}

asm void fn_801F0544(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r5, 0x4(r3)
    cmpwi cr1, r5, 0x0
    bne cr1, lbl_fn_801F0544_000011F0
    lfs f1, lbl_80882C28
    b lbl_fn_801F0544_000012FC
lbl_fn_801F0544_000011F0:
    cmpwi r5, 0x1
    ble lbl_fn_801F0544_00001208
    lwz r6, 0x0(r3)
    lwz r0, 0x0(r6)
    cmpw r4, r0
    bgt lbl_fn_801F0544_00001214
lbl_fn_801F0544_00001208:
    lwz r3, 0x0(r3)
    lfs f1, 0x4(r3)
    b lbl_fn_801F0544_000012FC
lbl_fn_801F0544_00001214:
    mr r8, r6
    li r7, 0x0
    li r9, 0x0
    li r3, 0x0
    mtctr r5
    ble cr1, lbl_fn_801F0544_00001250
lbl_fn_801F0544_0000122C:
    lwzx r0, r6, r3
    mr r7, r8
    add r8, r6, r3
    cmpw r4, r0
    bgt lbl_fn_801F0544_00001248
    li r9, 0x1
    b lbl_fn_801F0544_00001250
lbl_fn_801F0544_00001248:
    addi r3, r3, 0x8
    bdnz lbl_fn_801F0544_0000122C
lbl_fn_801F0544_00001250:
    cmpwi r9, 0x0
    bne lbl_fn_801F0544_00001260
    lfs f1, 0x4(r8)
    b lbl_fn_801F0544_000012FC
lbl_fn_801F0544_00001260:
    cmpwi r7, 0x0
    lfs f1, lbl_80882C28
    beq lbl_fn_801F0544_0000127C
    cmpwi r8, 0x0
    bne lbl_fn_801F0544_0000127C
    lfs f1, 0x4(r7)
    b lbl_fn_801F0544_000012FC
lbl_fn_801F0544_0000127C:
    cmpwi r7, 0x0
    bne lbl_fn_801F0544_00001294
    cmpwi r8, 0x0
    beq lbl_fn_801F0544_00001294
    lfs f1, 0x4(r8)
    b lbl_fn_801F0544_000012FC
lbl_fn_801F0544_00001294:
    cmpwi r7, 0x0
    beq lbl_fn_801F0544_000012FC
    cmpwi r8, 0x0
    beq lbl_fn_801F0544_000012FC
    lwz r6, 0x0(r7)
    lis r3, 0x4330
    lwz r0, 0x0(r8)
    lis r5, lbl_8073CDC8@ha
    subf r4, r6, r4
    stw r3, 0x8(r1)
    subf r0, r6, r0
    lfd f4, lbl_8073CDC8@l(r5)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0x4(r8)
    lfd f1, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f3, f1, f4
    lfs f1, 0x4(r7)
    stw r3, 0x10(r1)
    fsubs f0, f0, f1
    lfd f2, 0x10(r1)
    fsubs f2, f2, f4
    fdivs f2, f3, f2
    fmadds f1, f2, f0, f1
lbl_fn_801F0544_000012FC:
    addi r1, r1, 0x20
    blr
}

asm void fn_801F0670(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r8, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    lwz r0, 0x4(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801F0670_000013DC
lbl_fn_801F0670_00001328:
    lwz r7, 0x0(r3)
    lwzx r0, r7, r6
    cmpw r4, r0
    bne lbl_fn_801F0670_000013D0
    slwi r0, r8, 4
    add r3, r7, r0
    lwzu r0, 0x4(r3)
    srwi. r6, r0, 31
    bne lbl_fn_801F0670_00001370
    lwz r4, 0x0(r5)
    srwi. r0, r4, 31
    bne lbl_fn_801F0670_00001370
    lwz r0, 0x4(r5)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r3)
    b lbl_fn_801F0670_000013DC
lbl_fn_801F0670_00001370:
    cmpwi r6, 0x0
    beq lbl_fn_801F0670_00001380
    lwz r7, 0x4(r3)
    b lbl_fn_801F0670_00001388
lbl_fn_801F0670_00001380:
    lbz r0, 0x0(r3)
    clrlwi r7, r0, 25
lbl_fn_801F0670_00001388:
    lwz r0, 0x0(r5)
    srwi. r0, r0, 31
    bne lbl_fn_801F0670_000013A4
    lbz r0, 0x0(r5)
    addi r6, r5, 0x2
    clrlwi r0, r0, 25
    b lbl_fn_801F0670_000013AC
lbl_fn_801F0670_000013A4:
    lwz r6, 0x8(r5)
    lwz r0, 0x4(r5)
lbl_fn_801F0670_000013AC:
    lbz r4, 0xc(r1)
    slwi r0, r0, 1
    stb r4, 0x8(r1)
    mr r5, r7
    add r7, r6, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801F0670_000013DC
lbl_fn_801F0670_000013D0:
    addi r6, r6, 0x10
    addi r8, r8, 0x1
    bdnz lbl_fn_801F0670_00001328
lbl_fn_801F0670_000013DC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F0758(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r6, 0x4(r4)
    cmpwi cr1, r6, 0x0
    bne cr1, lbl_fn_801F0758_00001424
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_801F0758_0000173C
lbl_fn_801F0758_00001424:
    cmpwi r6, 0x1
    ble lbl_fn_801F0758_0000143C
    lwz r7, 0x0(r4)
    lwz r0, 0x0(r7)
    cmpw r5, r0
    bgt lbl_fn_801F0758_000014B0
lbl_fn_801F0758_0000143C:
    lwz r31, 0x0(r4)
    lwz r4, 0x4(r31)
    srwi. r0, r4, 31
    bne lbl_fn_801F0758_00001464
    lwz r0, 0x8(r31)
    stw r0, 0x4(r3)
    stw r4, 0x0(r3)
    lwz r0, 0xc(r31)
    stw r0, 0x8(r3)
    b lbl_fn_801F0758_0000173C
lbl_fn_801F0758_00001464:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r30
    lwz r4, 0x8(r31)
    bl fn_800DBF68
    lbz r0, 0x2c(r1)
    mr r3, r30
    stb r0, 0x28(r1)
    addi r8, r1, 0x28
    li r4, 0x0
    li r5, 0x0
    lwz r0, 0x8(r31)
    lwz r6, 0xc(r31)
    slwi r0, r0, 1
    add r7, r6, r0
    bl fn_8006F72C
    b lbl_fn_801F0758_0000173C
lbl_fn_801F0758_000014B0:
    mr r31, r7
    li r8, 0x0
    li r9, 0x0
    li r4, 0x0
    mtctr r6
    ble cr1, lbl_fn_801F0758_000014EC
lbl_fn_801F0758_000014C8:
    lwzx r0, r7, r4
    mr r8, r31
    add r31, r7, r4
    cmpw r5, r0
    bgt lbl_fn_801F0758_000014E4
    li r9, 0x1
    b lbl_fn_801F0758_000014EC
lbl_fn_801F0758_000014E4:
    addi r4, r4, 0x10
    bdnz lbl_fn_801F0758_000014C8
lbl_fn_801F0758_000014EC:
    cmpwi r9, 0x0
    bne lbl_fn_801F0758_00001564
    lwz r4, 0x4(r31)
    srwi. r0, r4, 31
    bne lbl_fn_801F0758_00001518
    lwz r0, 0x8(r31)
    stw r0, 0x4(r3)
    stw r4, 0x0(r3)
    lwz r0, 0xc(r31)
    stw r0, 0x8(r3)
    b lbl_fn_801F0758_0000173C
lbl_fn_801F0758_00001518:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r30
    lwz r4, 0x8(r31)
    bl fn_800DBF68
    lbz r0, 0x24(r1)
    mr r3, r30
    stb r0, 0x20(r1)
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    lwz r0, 0x8(r31)
    lwz r6, 0xc(r31)
    slwi r0, r0, 1
    add r7, r6, r0
    bl fn_8006F72C
    b lbl_fn_801F0758_0000173C
lbl_fn_801F0758_00001564:
    li r3, 0x0
    stw r3, 0x30(r1)
    lbz r0, 0x30(r1)
    stw r3, 0x34(r1)
    clrrwi r0, r0, 7
    stw r3, 0x38(r1)
    sth r3, 0x32(r1)
    stb r0, 0x30(r1)
    b lbl_fn_801F0758_00001590
    sth r3, 0x0(r3)
    stw r3, 0x34(r1)
lbl_fn_801F0758_00001590:
    cmpwi r8, 0x0
    beq lbl_fn_801F0758_00001628
    lwz r0, 0x30(r1)
    srwi. r4, r0, 31
    bne lbl_fn_801F0758_000015C8
    lwz r3, 0x4(r8)
    srwi. r0, r3, 31
    bne lbl_fn_801F0758_000015C8
    lwz r0, 0x8(r8)
    stw r0, 0x34(r1)
    stw r3, 0x30(r1)
    lwz r0, 0xc(r8)
    stw r0, 0x38(r1)
    b lbl_fn_801F0758_000016BC
lbl_fn_801F0758_000015C8:
    cmpwi r4, 0x0
    beq lbl_fn_801F0758_000015D8
    lwz r5, 0x34(r1)
    b lbl_fn_801F0758_000015E0
lbl_fn_801F0758_000015D8:
    lbz r0, 0x30(r1)
    clrlwi r5, r0, 25
lbl_fn_801F0758_000015E0:
    lwz r0, 0x4(r8)
    srwi. r0, r0, 31
    bne lbl_fn_801F0758_000015FC
    lbz r0, 0x4(r8)
    addi r6, r8, 0x6
    clrlwi r0, r0, 25
    b lbl_fn_801F0758_00001604
lbl_fn_801F0758_000015FC:
    lwz r6, 0xc(r8)
    lwz r0, 0x8(r8)
lbl_fn_801F0758_00001604:
    lbz r3, 0x10(r1)
    slwi r0, r0, 1
    stb r3, 0x14(r1)
    addi r3, r1, 0x30
    add r7, r6, r0
    addi r8, r1, 0x14
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801F0758_000016BC
lbl_fn_801F0758_00001628:
    cmpwi r31, 0x0
    beq lbl_fn_801F0758_000016BC
    lwz r0, 0x30(r1)
    srwi. r4, r0, 31
    bne lbl_fn_801F0758_00001660
    lwz r3, 0x4(r31)
    srwi. r0, r3, 31
    bne lbl_fn_801F0758_00001660
    lwz r0, 0x8(r31)
    stw r0, 0x34(r1)
    stw r3, 0x30(r1)
    lwz r0, 0xc(r31)
    stw r0, 0x38(r1)
    b lbl_fn_801F0758_000016BC
lbl_fn_801F0758_00001660:
    cmpwi r4, 0x0
    beq lbl_fn_801F0758_00001670
    lwz r5, 0x34(r1)
    b lbl_fn_801F0758_00001678
lbl_fn_801F0758_00001670:
    lbz r0, 0x30(r1)
    clrlwi r5, r0, 25
lbl_fn_801F0758_00001678:
    lwz r0, 0x4(r31)
    srwi. r0, r0, 31
    bne lbl_fn_801F0758_00001694
    lbz r0, 0x4(r31)
    addi r6, r31, 0x6
    clrlwi r0, r0, 25
    b lbl_fn_801F0758_0000169C
lbl_fn_801F0758_00001694:
    lwz r6, 0xc(r31)
    lwz r0, 0x8(r31)
lbl_fn_801F0758_0000169C:
    lbz r3, 0x18(r1)
    slwi r0, r0, 1
    stb r3, 0x1c(r1)
    addi r3, r1, 0x30
    add r7, r6, r0
    addi r8, r1, 0x1c
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_801F0758_000016BC:
    lwz r3, 0x30(r1)
    srwi. r0, r3, 31
    bne lbl_fn_801F0758_000016E0
    lwz r0, 0x34(r1)
    stw r0, 0x4(r30)
    stw r3, 0x0(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x8(r30)
    b lbl_fn_801F0758_00001728
lbl_fn_801F0758_000016E0:
    li r0, 0x0
    stw r0, 0x0(r30)
    mr r3, r30
    stw r0, 0x4(r30)
    stw r0, 0x8(r30)
    lwz r4, 0x34(r1)
    bl fn_800DBF68
    lwz r0, 0x34(r1)
    mr r3, r30
    lbz r4, 0xc(r1)
    addi r8, r1, 0x8
    stb r4, 0x8(r1)
    slwi r0, r0, 1
    lwz r6, 0x38(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F0758_00001728:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F0758_0000173C
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_801F0758_0000173C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801F0AC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801EC158
    lis r3, lbl_80782AD8@ha
    li r0, 0x4
    addi r3, r3, lbl_80782AD8@l
    stw r3, 0x0(r31)
    mr r3, r31
    sth r0, 0x8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F0B04(void)
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
    beq lbl_fn_801F0B04_000017D4
    li r4, 0x0
    bl fn_801EC6C0
    cmpwi r31, 0x0
    ble lbl_fn_801F0B04_000017D4
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F0B04_000017D4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F0B5C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    bl fn_801EDC78
    cmpwi r3, 0x0
    beq lbl_fn_801F0B5C_000019D8
    lfs f0, lbl_80882C30
    li r29, 0x0
    stfs f0, 0x38(r1)
    mr r3, r30
    addi r4, r1, 0x38
    addi r5, r1, 0x10
    stfs f0, 0x3c(r1)
    addi r6, r1, 0x8
    addi r7, r1, 0x20
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x8(r1)
    stw r29, 0xc(r1)
    bl fn_801ED928
    lfs f2, 0x10(r1)
    lfs f0, lbl_80882C3C
    lfs f31, 0x38(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f2, f0
    lfs f30, 0x3c(r1)
    lfs f0, 0x44(r1)
    fadds f29, f31, f1
    fadds f28, f30, f0
    cror eq, gt, eq
    bne lbl_fn_801F0B5C_000018A8
    li r29, 0xff
    b lbl_fn_801F0B5C_000018D0
lbl_fn_801F0B5C_000018A8:
    lfs f0, lbl_80882C30
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F0B5C_000018BC
    b lbl_fn_801F0B5C_000018D0
lbl_fn_801F0B5C_000018BC:
    lfs f1, lbl_80882C38
    lfs f0, lbl_80882C34
    fmadds f1, f1, f2, f0
    bl fn_80695D84
    mr r29, r3
lbl_fn_801F0B5C_000018D0:
    lfs f2, 0x14(r1)
    lfs f0, lbl_80882C3C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801F0B5C_000018EC
    li r30, 0xff
    b lbl_fn_801F0B5C_00001918
lbl_fn_801F0B5C_000018EC:
    lfs f0, lbl_80882C30
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F0B5C_00001904
    li r3, 0x0
    b lbl_fn_801F0B5C_00001914
lbl_fn_801F0B5C_00001904:
    lfs f1, lbl_80882C38
    lfs f0, lbl_80882C34
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F0B5C_00001914:
    mr r30, r3
lbl_fn_801F0B5C_00001918:
    lfs f2, 0x18(r1)
    lfs f0, lbl_80882C3C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801F0B5C_00001934
    li r31, 0xff
    b lbl_fn_801F0B5C_00001960
lbl_fn_801F0B5C_00001934:
    lfs f0, lbl_80882C30
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F0B5C_0000194C
    li r3, 0x0
    b lbl_fn_801F0B5C_0000195C
lbl_fn_801F0B5C_0000194C:
    lfs f1, lbl_80882C38
    lfs f0, lbl_80882C34
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F0B5C_0000195C:
    mr r31, r3
lbl_fn_801F0B5C_00001960:
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80882C3C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_801F0B5C_0000197C
    li r3, 0xff
    b lbl_fn_801F0B5C_000019A4
lbl_fn_801F0B5C_0000197C:
    lfs f0, lbl_80882C30
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_801F0B5C_00001994
    li r3, 0x0
    b lbl_fn_801F0B5C_000019A4
lbl_fn_801F0B5C_00001994:
    lfs f1, lbl_80882C38
    lfs f0, lbl_80882C34
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_801F0B5C_000019A4:
    slwi r4, r30, 8
    fmr f1, f31
    fmr f2, f30
    slwi r3, r3, 24
    slwi r0, r29, 16
    fmr f3, f29
    or r0, r3, r0
    or r4, r31, r4
    fmr f4, f28
    lwz r3, lbl_8087EEB0
    lfs f5, 0x48(r1)
    or r4, r4, r0
    bl fn_8006144C
lbl_fn_801F0B5C_000019D8:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    lfd f28, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
