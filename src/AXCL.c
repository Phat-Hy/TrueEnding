#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void fn_806077F0(void);
extern void fn_80607890(void);
extern void fn_80607E00(void);
extern void fn_80608610(void);
extern void fn_80608B80(void);
extern void fn_80608BB0(void);
extern void fn_80609FA0(void);
extern void fn_8060A2E0(void);
extern void fn_8060A840(void);
extern void fn_8060B090(void);
extern void fn_80610510(void);
extern void fn_80610550(void);
extern void fn_80610570(void);
extern void fn_80610630(void);
extern void fn_80610640(void);
extern void fn_806106B0(void);

/* External large data symbols */
extern u8 lbl_807AC6A0[];
extern u8 lbl_807AD660[];
extern u8 lbl_807D48C0[];
extern u8 lbl_807D49C0[];
extern u8 lbl_807D52A0[];
extern u8 lbl_807D5720[];
extern u8 lbl_807D5780[];

/* External small data symbols (SDA21) */
extern u16 lbl_8087E850;
extern u16 lbl_8087E852;
extern u16 lbl_8087E854;
extern u16 lbl_8087FF50;
extern u16 lbl_8087FF52;
extern u16 lbl_8087FF54;
extern u16 lbl_8087FF56;
extern u16 lbl_8087FF58;
extern u32 lbl_8087FF5C;
extern u32 lbl_8087FF60;
extern u32 lbl_8087FF68;
extern u32 lbl_8087FF6C;
extern u32 lbl_8087FF70;
extern u32 lbl_8087FF78;
extern u32 lbl_8087FF7C;
extern u32 lbl_8087FF80;
extern u32 lbl_8087FF84;
extern u32 lbl_8087FF88;
extern u32 lbl_8087FF90;
extern u32 lbl_8087FF9C;
extern u32 lbl_8087FFA0;
extern u32 lbl_8087FFA4;
extern u32 lbl_8087FFA8;
extern u32 lbl_8087FFAC;
extern u32 lbl_8087FFB0;

/* Function declarations */
void fn_80609570(void);
void fn_806095C0(void);
void fn_806095D0(void);
void fn_806095E0(void);
void fn_806095F0(void);
void fn_80609600(void);
void fn_80609610(void);
void fn_80609620(void);
void fn_80609640(void);
void fn_80609650(void);
void fn_80609660(void);
void fn_80609670(void);
void fn_806098D0(void);
void fn_80609980(void);
void fn_80609990(void);
void fn_806099F0(void);
void fn_80609A00(void);
void fn_80609A10(void);

asm void fn_80609570(void)
{
    nofralloc
    lis r6, lbl_807D48C0@ha
    lis r4, lbl_807AC6A0@ha
    li r7, 0x0
    lis r3, 0x1
    addi r0, r3, -0x8000
    addi r6, r6, lbl_807D48C0@l
    addi r4, r4, lbl_807AC6A0@l
    li r5, 0x1
    li r3, 0xa
    stw r7, lbl_8087FF68
    stw r7, lbl_8087FF70
    stw r6, lbl_8087FF6C
    stw r5, lbl_8087FF60
    stw r4, lbl_8087FF5C
    sth r3, lbl_8087FF58
    sth r0, lbl_8087FF56
    sth r0, lbl_8087FF54
    sth r0, lbl_8087FF52
    sth r0, lbl_8087FF50
    blr
}

asm void fn_806095C0(void)
{
    nofralloc
    stw r3, lbl_8087FF68
    blr
}

asm void fn_806095D0(void)
{
    nofralloc
    lwz r3, lbl_8087FF68
    blr
}

asm void fn_806095E0(void)
{
    nofralloc
    stw r3, lbl_8087FF60
    blr
}

asm void fn_806095F0(void)
{
    nofralloc
    lhz r3, lbl_8087FF54
    blr
}

asm void fn_80609600(void)
{
    nofralloc
    lhz r3, lbl_8087FF52
    blr
}

asm void fn_80609610(void)
{
    nofralloc
    lhz r3, lbl_8087FF50
    blr
}

asm void fn_80609620(void)
{
    nofralloc
    cmplwi r3, 0x8000
    ble lbl_fn_80609620_000000C0
    lis r3, 0x1
    addi r3, r3, -0x8000
lbl_fn_80609620_000000C0:
    sth r3, lbl_8087FF56
    blr
}

asm void fn_80609640(void)
{
    nofralloc
    sth r3, lbl_8087FF54
    blr
}

asm void fn_80609650(void)
{
    nofralloc
    sth r3, lbl_8087FF52
    blr
}

asm void fn_80609660(void)
{
    nofralloc
    sth r3, lbl_8087FF50
    blr
}

asm void fn_80609670(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807D49C0@ha
    addi r31, r31, lbl_807D49C0@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    bl OSGetTime
    addi r5, r31, 0x0
    stw r3, 0x0(r31)
    stw r4, 0x4(r5)
    bl fn_80607890
    srwi r3, r3, 2
    lwz r0, lbl_8087FF88
    subfic r3, r3, 0x60
    cmplwi r0, 0x1
    mulli r30, r3, 0xed5
    bne lbl_fn_80609670_00000158
    li r3, 0x0
    bl fn_8060A840
    b lbl_fn_80609670_00000160
lbl_fn_80609670_00000158:
    li r3, 0x5f50
    bl fn_8060A840
lbl_fn_80609670_00000160:
    bl fn_80609FA0
    bl fn_80608B80
    lis r4, 0xbabe
    mr r29, r3
    addi r3, r4, 0x80
    bl fn_80610550
lbl_fn_80609670_00000178:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80609670_00000178
    mr r3, r29
    bl fn_80610550
lbl_fn_80609670_0000018C:
    bl fn_80610510
    cmpwi r3, 0x0
    bne lbl_fn_80609670_0000018C
    bl fn_80607E00
    bl OSGetTime
    addi r29, r31, 0x0
    stw r4, 0xc(r29)
    stw r3, 0x8(r29)
    bl fn_80608610
    bl OSGetTime
    stw r4, 0x14(r29)
    stw r3, 0x10(r29)
    bl OSGetTime
    lwz r12, lbl_8087FFA4
    stw r4, 0x1c(r29)
    cmpwi r12, 0x0
    stw r3, 0x18(r29)
    beq lbl_fn_80609670_000001DC
    mtctr r12
    bctrl
lbl_fn_80609670_000001DC:
    bl OSGetTime
    lwz r7, lbl_8087FF80
    addi r8, r31, 0x0
    lwz r0, lbl_8087FF84
    addi r5, r31, 0x40
    slwi r6, r7, 1
    addi r7, r7, 0x12
    add r6, r5, r6
    stw r4, 0x24(r8)
    cmpw r7, r0
    addi r5, r6, 0x168
    addi r4, r6, 0x2d0
    addi r0, r6, 0x438
    stw r3, 0x20(r8)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    blt lbl_fn_80609670_0000022C
    li r7, 0x0
lbl_fn_80609670_0000022C:
    lwz r4, lbl_8087FF7C
    lwz r3, lbl_8087FF80
    cmpw r4, r3
    blt lbl_fn_80609670_0000024C
    addi r0, r3, 0x12
    cmpw r4, r0
    bge lbl_fn_80609670_0000024C
    stw r7, lbl_8087FF7C
lbl_fn_80609670_0000024C:
    lwz r0, lbl_8087FFB0
    addi r29, r31, 0x8e0
    stw r7, lbl_8087FF80
    addi r3, r31, 0x5e0
    mulli r0, r0, 0x180
    addi r5, r1, 0x8
    add r4, r29, r0
    bl fn_80608BB0
    lwz r0, lbl_8087FF88
    lwz r3, lbl_8087FFB0
    cmplwi r0, 0x1
    addi r0, r3, 0x1
    stw r0, lbl_8087FFB0
    bne lbl_fn_80609670_000002A8
    lis r3, 0xaaab
    lwz r4, lbl_8087FFB0
    subi r0, r3, 0x5555
    mulhwu r0, r0, r4
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf r0, r0, r4
    stw r0, lbl_8087FFB0
    b lbl_fn_80609670_000002C8
lbl_fn_80609670_000002A8:
    lwz r0, lbl_8087FFB0
    li r4, 0x180
    clrlwi r0, r0, 31
    stw r0, lbl_8087FFB0
    lwz r0, lbl_8087FFB0
    mulli r0, r0, 0x180
    add r3, r29, r0
    bl fn_806077F0
lbl_fn_80609670_000002C8:
    bl OSGetTime
    addi r29, r31, 0x0
    stw r4, 0x2c(r29)
    stw r3, 0x28(r29)
    bl fn_8060A2E0
    stw r3, 0x30(r29)
    bl fn_8060B090
    cmpwi r3, 0x0
    beq lbl_fn_80609670_00000340
    li r0, 0x7
    mtctr r0
lbl_fn_80609670_000002F4:
    lbz r0, 0x0(r29)
    stb r0, 0x0(r3)
    lbz r0, 0x1(r29)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r29)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r29)
    stb r0, 0x3(r3)
    lbz r0, 0x4(r29)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r29)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r29)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r29)
    addi r29, r29, 0x8
    stb r0, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_80609670_000002F4
lbl_fn_80609670_00000340:
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806098D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087FF9C
    cmpwi r0, 0x1
    beq lbl_fn_806098D0_00000400
    lwz r0, lbl_8087FFA8
    cmplwi r0, 0x1
    bne lbl_fn_806098D0_00000394
    li r0, 0x0
    stw r0, lbl_8087FFA8
    bl fn_80609670
    b lbl_fn_806098D0_000003A8
lbl_fn_806098D0_00000394:
    li r0, 0x2
    lis r3, lbl_807D5720@ha
    stw r0, lbl_8087FFA8
    addi r3, r3, lbl_807D5720@l
    bl fn_806106B0
lbl_fn_806098D0_000003A8:
    lwz r0, lbl_8087FF88
    cmplwi r0, 0x1
    bne lbl_fn_806098D0_00000400
    lwz r0, lbl_8087FFAC
    lis r3, lbl_807D52A0@ha
    addi r3, r3, lbl_807D52A0@l
    li r4, 0x180
    mulli r0, r0, 0x180
    add r3, r3, r0
    bl fn_806077F0
    lwz r4, lbl_8087FFAC
    lis r3, 0xaaab
    subi r3, r3, 0x5555
    lwz r0, lbl_8087FFB0
    addi r4, r4, 0x1
    mulhwu r3, r3, r4
    srwi r3, r3, 1
    mulli r3, r3, 0x3
    subf r4, r3, r4
    cmplw r4, r0
    beq lbl_fn_806098D0_00000400
    stw r4, lbl_8087FFAC
lbl_fn_806098D0_00000400:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80609980(void)
{
    nofralloc
    li r0, 0x1
    stw r0, lbl_8087FFA0
    blr
}

asm void fn_80609990(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087FFA8
    cmplwi r0, 0x2
    bne lbl_fn_80609990_0000045C
    li r0, 0x0
    stw r0, lbl_8087FFA8
    bl fn_80609670
    lwz r12, lbl_8087FF78
    cmpwi r12, 0x0
    beq lbl_fn_80609990_00000464
    mtctr r12
    bctrl
    b lbl_fn_80609990_00000464
lbl_fn_80609990_0000045C:
    li r0, 0x1
    stw r0, lbl_8087FFA8
lbl_fn_80609990_00000464:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806099F0(void)
{
    nofralloc
    li r0, 0x1
    stw r0, lbl_8087FF9C
    la r3, lbl_8087FF90
    b OSWakeupThread
}

asm void fn_80609A00(void)
{
    nofralloc
    blr
}

asm void fn_80609A10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r11, lbl_807D5780@ha
    lis r7, fn_80609980@ha
    stw r0, 0x14(r1)
    lis r6, fn_80609990@ha
    lis r5, fn_806099F0@ha
    lis r4, fn_80609A00@ha
    stw r31, 0xc(r1)
    lis r31, lbl_807D5720@ha
    addi r31, r31, lbl_807D5720@l
    li r12, 0x0
    stw r30, 0x8(r1)
    lis r30, lbl_807AD660@ha
    addi r30, r30, lbl_807AD660@l
    addi r11, r11, lbl_807D5780@l
    lhz r3, lbl_8087E854
    addi r7, r7, fn_80609980@l
    lhz r8, lbl_8087E850
    addi r6, r6, fn_80609990@l
    lhz r0, lbl_8087E852
    addi r5, r5, fn_806099F0@l
    stw r12, 0x4(r31)
    addi r4, r4, fn_80609A00@l
    li r10, 0x40
    li r9, 0xcd2
    stw r12, lbl_8087FFA0
    stw r3, 0x10(r31)
    la r3, lbl_8087FF90
    stw r30, 0xc(r31)
    stw r12, 0x14(r31)
    stw r11, 0x18(r31)
    stw r10, 0x1c(r31)
    stw r9, 0x20(r31)
    sth r8, 0x24(r31)
    sth r0, 0x26(r31)
    stw r7, 0x28(r31)
    stw r6, 0x2c(r31)
    stw r5, 0x30(r31)
    stw r4, 0x34(r31)
    stw r12, lbl_8087FF9C
    bl OSInitThreadQueue
    bl fn_80610630
    cmpwi r3, 0x0
    bne lbl_fn_80609A10_00000558
    bl fn_80610570
lbl_fn_80609A10_00000558:
    lis r3, lbl_807D5720@ha
    addi r3, r3, lbl_807D5720@l
    bl fn_80610640
    nop
lbl_fn_80609A10_00000568:
    lwz r0, lbl_8087FFA0
    cmpwi r0, 0x0
    beq lbl_fn_80609A10_00000568
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
