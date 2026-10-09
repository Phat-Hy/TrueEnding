#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006AFF8(void);
extern void fn_8006B0C8(void);
extern void fn_8006B2D8(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_8006D008(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_8008B130(void);
extern void fn_80095750(void);
extern void fn_800D8C14(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686A48(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073EFD0[];
extern u8 lbl_8073F210[];
extern u8 lbl_8073F410[];
extern u8 lbl_8073F5C4[];
extern u8 lbl_8073F620[];
extern u8 lbl_8073F678[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_80782FE8[];
extern u8 lbl_80782FF0[];
extern u8 lbl_80783008[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F1C8;
extern u32 lbl_8087F1CC;
extern u32 lbl_8087F1D0;
extern u32 lbl_8087F1D4;
extern u32 lbl_8087F1D8;
extern u32 lbl_8087F1E0;
extern u32 lbl_8087F1E4;
extern u32 lbl_80882E64;

/* Function declarations */
void fn_8020BCEC(void);
void fn_8020BD14(void);
void fn_8020BD3C(void);
void fn_8020BD78(void);
void fn_8020BDAC(void);
void fn_8020BDE0(void);
void fn_8020BE10(void);
void fn_8020BE40(void);
void fn_8020BF20(void);
void fn_8020C000(void);
void fn_8020C028(void);
void fn_8020C07C(void);
void fn_8020C0BC(void);
void fn_8020C4B0(void);
void fn_8020C4C8(void);
void fn_8020C5D4(void);
void fn_8020CC64(void);
void fn_8020D4E8(void);
void fn_8020D548(void);
void fn_8020D560(void);
void fn_8020D5A0(void);
void fn_8020D608(void);

asm void fn_8020BCEC(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8020BCEC_00000010
    cmpwi r3, 0x40
    blt lbl_fn_8020BCEC_00000018
lbl_fn_8020BCEC_00000010:
    li r3, 0x0
    blr
lbl_fn_8020BCEC_00000018:
    mulli r0, r3, 0x54
    lwz r3, lbl_8087F1C8
    add r3, r3, r0
    blr
}

asm void fn_8020BD14(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8020BD14_00000038
    cmpwi r3, 0x20
    blt lbl_fn_8020BD14_00000040
lbl_fn_8020BD14_00000038:
    li r3, 0x0
    blr
lbl_fn_8020BD14_00000040:
    mulli r0, r3, 0x54
    lwz r3, lbl_8087F1CC
    add r3, r3, r0
    blr
}

asm void fn_8020BD3C(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8020BD3C_0000007C
    cmpwi r3, 0x40
    bge lbl_fn_8020BD3C_0000007C
    srawi r0, r3, 2
    lis r3, lbl_8073EFD0@ha
    addze r0, r0
    slwi r0, r0, 2
    addi r3, r3, lbl_8073EFD0@l
    lwzx r3, r3, r0
    blr
lbl_fn_8020BD3C_0000007C:
    lis r3, lbl_8073F210@ha
    addi r3, r3, lbl_8073F210@l
    lwz r3, 0x100(r3)
    blr
}

asm void fn_8020BD78(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8020BD78_000000B0
    cmpwi r3, 0x20
    bge lbl_fn_8020BD78_000000B0
    lis r4, lbl_8073F410@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_8073F410@l
    lwzx r3, r4, r0
    blr
lbl_fn_8020BD78_000000B0:
    lis r3, lbl_8073F410@ha
    addi r3, r3, lbl_8073F410@l
    lwz r3, 0x80(r3)
    blr
}

asm void fn_8020BDAC(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8020BDAC_000000E4
    cmpwi r3, 0x2
    bge lbl_fn_8020BDAC_000000E4
    lis r4, lbl_80782FE8@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_80782FE8@l
    lwzx r3, r4, r0
    blr
lbl_fn_8020BDAC_000000E4:
    lis r3, lbl_8073F410@ha
    addi r3, r3, lbl_8073F410@l
    lwz r3, 0x80(r3)
    blr
}

asm void fn_8020BDE0(void)
{
    nofralloc
    lwz r4, lbl_8087F1D4
    cmpwi r4, 0x0
    beq lbl_fn_8020BDE0_0000011C
    cmpwi r3, 0x0
    blt lbl_fn_8020BDE0_0000011C
    cmpwi r3, 0x40
    bge lbl_fn_8020BDE0_0000011C
    slwi r0, r3, 2
    lwzx r3, r4, r0
    blr
lbl_fn_8020BDE0_0000011C:
    li r3, 0x0
    blr
}

asm void fn_8020BE10(void)
{
    nofralloc
    lwz r4, lbl_8087F1D8
    cmpwi r4, 0x0
    beq lbl_fn_8020BE10_0000014C
    cmpwi r3, 0x0
    blt lbl_fn_8020BE10_0000014C
    cmpwi r3, 0x20
    bge lbl_fn_8020BE10_0000014C
    slwi r0, r3, 2
    lwzx r3, r4, r0
    blr
lbl_fn_8020BE10_0000014C:
    li r3, 0x0
    blr
}

asm void fn_8020BE40(void)
{
    nofralloc
    li r0, 0x8
    lwz r4, lbl_8087F1D4
    li r5, 0x0
    mtctr r0
lbl_fn_8020BE40_00000164:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_8020BE40_00000178
    mr r3, r5
    blr
lbl_fn_8020BE40_00000178:
    lwz r0, 0x4(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BE40_00000190
    mr r3, r5
    blr
lbl_fn_8020BE40_00000190:
    lwz r0, 0x8(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BE40_000001A8
    mr r3, r5
    blr
lbl_fn_8020BE40_000001A8:
    lwz r0, 0xc(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BE40_000001C0
    mr r3, r5
    blr
lbl_fn_8020BE40_000001C0:
    lwz r0, 0x10(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BE40_000001D8
    mr r3, r5
    blr
lbl_fn_8020BE40_000001D8:
    lwz r0, 0x14(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BE40_000001F0
    mr r3, r5
    blr
lbl_fn_8020BE40_000001F0:
    lwz r0, 0x18(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BE40_00000208
    mr r3, r5
    blr
lbl_fn_8020BE40_00000208:
    lwz r0, 0x1c(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BE40_00000220
    mr r3, r5
    blr
lbl_fn_8020BE40_00000220:
    addi r4, r4, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8020BE40_00000164
    li r3, 0x0
    blr
}

asm void fn_8020BF20(void)
{
    nofralloc
    li r0, 0x4
    lwz r4, lbl_8087F1D8
    li r5, 0x0
    mtctr r0
lbl_fn_8020BF20_00000244:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_8020BF20_00000258
    mr r3, r5
    blr
lbl_fn_8020BF20_00000258:
    lwz r0, 0x4(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BF20_00000270
    mr r3, r5
    blr
lbl_fn_8020BF20_00000270:
    lwz r0, 0x8(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BF20_00000288
    mr r3, r5
    blr
lbl_fn_8020BF20_00000288:
    lwz r0, 0xc(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BF20_000002A0
    mr r3, r5
    blr
lbl_fn_8020BF20_000002A0:
    lwz r0, 0x10(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BF20_000002B8
    mr r3, r5
    blr
lbl_fn_8020BF20_000002B8:
    lwz r0, 0x14(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BF20_000002D0
    mr r3, r5
    blr
lbl_fn_8020BF20_000002D0:
    lwz r0, 0x18(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BF20_000002E8
    mr r3, r5
    blr
lbl_fn_8020BF20_000002E8:
    lwz r0, 0x1c(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_8020BF20_00000300
    mr r3, r5
    blr
lbl_fn_8020BF20_00000300:
    addi r4, r4, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8020BF20_00000244
    li r3, 0x1f
    blr
}

asm void fn_8020C000(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8020C000_00000334
    cmpwi r3, 0x7
    bge lbl_fn_8020C000_00000334
    lwz r4, lbl_8087F1D0
    slwi r0, r3, 5
    add r3, r4, r0
    blr
lbl_fn_8020C000_00000334:
    li r3, 0x0
    blr
}

asm void fn_8020C028(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F1E4
    cmpwi r0, 0x0
    bne lbl_fn_8020C028_00000380
    lis r5, lbl_8073F5C4@ha
    li r3, 0x1018
    addi r5, r5, lbl_8073F5C4@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8020C028_0000037C
    bl fn_8020C0BC
lbl_fn_8020C028_0000037C:
    stw r3, lbl_8087F1E4
lbl_fn_8020C028_00000380:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020C07C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8020C07C_000003B8
    cmpwi r4, 0x0
    ble lbl_fn_8020C07C_000003B8
    bl dtor_80084684
lbl_fn_8020C07C_000003B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020C0BC(void)
{
    nofralloc
    stwu r1, -0x18e0(r1)
    mflr r0
    lis r4, fn_8020C4B0@ha
    lis r5, fn_8020C07C@ha
    stw r0, 0x18e4(r1)
    li r6, 0x8
    addi r4, r4, fn_8020C4B0@l
    addi r5, r5, fn_8020C07C@l
    stmw r23, 0x18bc(r1)
    mr r28, r3
    li r7, 0x203
    bl fn_806958E0
    lis r27, lbl_8073F5C4@ha
    li r31, 0x0
    addi r27, r27, lbl_8073F5C4@l
    stw r31, 0xc(r1)
    addi r3, r27, 0x1
    addi r4, r1, 0xc
    li r5, 0x0
    bl fn_8006BA8C
    stw r31, 0x8(r1)
    mr r30, r3
    addi r3, r27, 0x1a
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8006BA8C
    lwz r0, 0xc(r1)
    lis r4, lbl_8077A090@ha
    addi r4, r4, lbl_8077A090@l
    stw r4, 0xc64(r1)
    mr r29, r3
    srwi r26, r0, 1
    stw r31, 0xc68(r1)
    addi r27, r1, 0xc64
    addi r3, r1, 0xc74
    li r4, 0x0
    stw r31, 0xc6c(r1)
    li r5, 0x800
    stw r31, 0xc70(r1)
    stw r31, 0x18b4(r1)
    bl memset
    addi r3, r1, 0x1874
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r26, 0x0
    mr r5, r26
    beq lbl_fn_8020C0BC_00000494
    subi r5, r26, 0x1
lbl_fn_8020C0BC_00000494:
    cmpwi r26, 0x0
    mr r3, r27
    beq lbl_fn_8020C0BC_000004A8
    addi r4, r30, 0x2
    b lbl_fn_8020C0BC_000004AC
lbl_fn_8020C0BC_000004A8:
    mr r4, r30
lbl_fn_8020C0BC_000004AC:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0xc64(r1)
    mr r3, r27
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    lwz r4, 0x8(r1)
    lis r3, lbl_8077A090@ha
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r3, r3, lbl_8077A090@l
    srwi r27, r4, 1
    stw r3, 0x10(r1)
    addi r26, r1, 0x10
    addi r3, r1, 0x20
    li r4, 0x0
    stw r0, 0x18(r1)
    li r5, 0x800
    stw r0, 0x1c(r1)
    stw r0, 0xc60(r1)
    bl memset
    addi r3, r1, 0xc20
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r27, 0x0
    mr r5, r27
    beq lbl_fn_8020C0BC_00000534
    subi r5, r27, 0x1
lbl_fn_8020C0BC_00000534:
    cmpwi r27, 0x0
    mr r3, r26
    beq lbl_fn_8020C0BC_00000548
    addi r4, r29, 0x2
    b lbl_fn_8020C0BC_0000054C
lbl_fn_8020C0BC_00000548:
    mr r4, r29
lbl_fn_8020C0BC_0000054C:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x10(r1)
    mr r3, r26
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    li r24, 0x0
lbl_fn_8020C0BC_0000057C:
    addi r3, r1, 0xc64
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x23
    beq lbl_fn_8020C0BC_000005AC
    cmpwi r0, 0x0
    beq lbl_fn_8020C0BC_000005AC
    addi r3, r1, 0xc64
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r24
    addi r24, r3, 0x1
lbl_fn_8020C0BC_000005AC:
    addi r3, r1, 0xc64
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020C0BC_0000057C
lbl_fn_8020C0BC_000005BC:
    addi r3, r1, 0x10
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x23
    beq lbl_fn_8020C0BC_000005EC
    cmpwi r0, 0x0
    beq lbl_fn_8020C0BC_000005EC
    addi r3, r1, 0x10
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r24
    addi r24, r3, 0x1
lbl_fn_8020C0BC_000005EC:
    addi r3, r1, 0x10
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020C0BC_000005BC
    lis r5, lbl_8073F5C4@ha
    slwi r3, r24, 1
    addi r5, r5, lbl_8073F5C4@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0xc(r1)
    stw r3, lbl_8087F1E0
    srwi. r4, r0, 1
    beq lbl_fn_8020C0BC_00000630
    addi r0, r30, 0x2
    b lbl_fn_8020C0BC_00000634
lbl_fn_8020C0BC_00000630:
    mr r0, r30
lbl_fn_8020C0BC_00000634:
    cmpwi r4, 0x0
    stw r0, 0xc68(r1)
    beq lbl_fn_8020C0BC_00000644
    subi r4, r4, 0x1
lbl_fn_8020C0BC_00000644:
    lwz r0, 0x8(r1)
    li r3, 0x0
    stw r4, 0xc6c(r1)
    srwi. r4, r0, 1
    stw r3, 0xc70(r1)
    beq lbl_fn_8020C0BC_00000664
    addi r0, r29, 0x2
    b lbl_fn_8020C0BC_00000668
lbl_fn_8020C0BC_00000664:
    mr r0, r29
lbl_fn_8020C0BC_00000668:
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_8020C0BC_00000678
    subi r4, r4, 0x1
lbl_fn_8020C0BC_00000678:
    li r0, 0x0
    stw r4, 0x18(r1)
    li r23, 0x0
    li r31, 0x0
    stw r0, 0x1c(r1)
    li r26, 0x0
    lis r27, lbl_80783008@ha
lbl_fn_8020C0BC_00000694:
    addi r3, r1, 0xc64
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x23
    beq lbl_fn_8020C0BC_00000700
    cmpwi r0, 0x0
    beq lbl_fn_8020C0BC_00000700
    addi r3, r1, 0xc64
    bl fn_8005B710
    lwz r0, lbl_8087F1E0
    mr r24, r3
    slwi r25, r31, 1
    addi r4, r27, lbl_80783008@l
    mr r5, r24
    add r3, r0, r25
    crclr 6
    bl fn_800DD3FC
    lwz r0, lbl_8087F1E0
    add r4, r28, r26
    mr r3, r24
    add r0, r0, r25
    stw r0, 0x4(r4)
    bl fn_80686A48
    add r3, r3, r31
    addi r26, r26, 0x8
    addi r31, r3, 0x1
    addi r23, r23, 0x1
lbl_fn_8020C0BC_00000700:
    addi r3, r1, 0xc64
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020C0BC_00000694
    addi r23, r23, 0x1
    lis r27, lbl_80783008@ha
    slwi r26, r23, 3
lbl_fn_8020C0BC_0000071C:
    addi r3, r1, 0x10
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x23
    beq lbl_fn_8020C0BC_00000784
    cmpwi r0, 0x0
    beq lbl_fn_8020C0BC_00000784
    addi r3, r1, 0x10
    bl fn_8005B710
    lwz r0, lbl_8087F1E0
    mr r24, r3
    slwi r25, r31, 1
    addi r4, r27, lbl_80783008@l
    mr r5, r24
    add r3, r0, r25
    crclr 6
    bl fn_800DD3FC
    lwz r0, lbl_8087F1E0
    add r4, r28, r26
    mr r3, r24
    add r0, r0, r25
    stw r0, 0x4(r4)
    bl fn_80686A48
    add r3, r3, r31
    addi r26, r26, 0x8
    addi r31, r3, 0x1
lbl_fn_8020C0BC_00000784:
    addi r3, r1, 0x10
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020C0BC_0000071C
    mr r3, r30
    li r4, 0x0
    bl fn_8006BB6C
    mr r3, r29
    li r4, 0x0
    bl fn_8006BB6C
    mr r3, r28
    lmw r23, 0x18bc(r1)
    lwz r0, 0x18e4(r1)
    mtlr r0
    addi r1, r1, 0x18e0
    blr
}

asm void fn_8020C4B0(void)
{
    nofralloc
    lis r4, lbl_80782FF0@ha
    li r0, 0x0
    addi r4, r4, lbl_80782FF0@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_8020C4C8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    cmpwi r5, 0x0
    mr r25, r4
    mr r26, r5
    beq lbl_fn_8020C4C8_000008D0
    mr r31, r3
    li r28, 0x0
lbl_fn_8020C4C8_00000808:
    mr r30, r25
    mr r29, r26
    li r27, 0x0
    b lbl_fn_8020C4C8_000008B4
lbl_fn_8020C4C8_00000818:
    lbz r0, 0x491(r30)
    extsb r0, r0
    cmpw r28, r0
    bne lbl_fn_8020C4C8_000008A8
    lwz r3, 0x0(r31)
    bl fn_8020BCEC
    cmpwi r3, 0x0
    bne lbl_fn_8020C4C8_00000860
    lfs f3, 0x480(r30)
    li r3, 0x0
    lfs f2, 0x484(r30)
    lfs f1, 0x488(r30)
    lfs f0, 0x48c(r30)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    b lbl_fn_8020C4C8_00000884
lbl_fn_8020C4C8_00000860:
    lfs f3, 0x4(r3)
    lfs f2, 0x8(r3)
    lfs f1, 0xc(r3)
    lfs f0, 0x10(r3)
    stfs f3, 0x8(r1)
    lwz r3, 0x0(r3)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
lbl_fn_8020C4C8_00000884:
    lwz r0, 0x0(r31)
    sth r0, 0x4(r29)
    lfs f0, 0x8(r1)
    sth r3, 0x6(r29)
    lfs f1, 0xc(r1)
    stfs f0, 0x8(r29)
    lfs f0, 0x10(r1)
    stfs f1, 0xc(r29)
    stfs f0, 0x10(r29)
lbl_fn_8020C4C8_000008A8:
    addi r30, r30, 0x54
    addi r29, r29, 0x14
    addi r27, r27, 0x1
lbl_fn_8020C4C8_000008B4:
    lwz r0, 0x10d4(r25)
    cmpw r27, r0
    blt lbl_fn_8020C4C8_00000818
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmpwi r28, 0x8
    blt lbl_fn_8020C4C8_00000808
lbl_fn_8020C4C8_000008D0:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8020C5D4(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    stw r0, 0x694(r1)
    addi r11, r1, 0x680
    stfd f31, 0x680(r1)
    psq_st f31, 0x688(r1), 0, 0
    bl _savegpr_17
    cmpwi r4, 0x0
    li r23, 0x0
    stw r23, 0x10d4(r3)
    mr r31, r3
    mr r18, r4
    mr r17, r5
    stw r23, 0x10d0(r3)
    stw r23, 0x10d8(r3)
    stw r23, 0x10dc(r3)
    beq lbl_fn_8020C5D4_00000F58
    cmpwi r5, 0x0
    bne lbl_fn_8020C5D4_00000938
    b lbl_fn_8020C5D4_00000F58
lbl_fn_8020C5D4_00000938:
    lis r3, lbl_807772D0@ha
    stw r23, 0xc(r1)
    addi r3, r3, lbl_807772D0@l
    li r4, 0x0
    stw r3, 0x8(r1)
    addi r3, r1, 0x18
    li r5, 0x400
    stw r23, 0x10(r1)
    stw r23, 0x14(r1)
    stw r23, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r18
    mr r5, r17
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r24, lbl_8073F678@ha
    lfs f31, lbl_80882E64
    addi r25, r24, lbl_8073F678@l
    li r27, 0x2
    li r26, 0x1
    li r28, -0x1
    lis r29, lbl_8073F620@ha
    li r30, 0x8
lbl_fn_8020C5D4_000009C8:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r17, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8020C5D4_00000F48
    cmpwi r0, 0x0
    beq lbl_fn_8020C5D4_00000F48
    addi r4, r24, lbl_8073F678@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020C5D4_00000A9C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lwz r0, 0x10d0(r31)
    mr r18, r3
    mulli r0, r0, 0x44
    add r17, r31, r0
    cmplw r3, r17
    beq lbl_fn_8020C5D4_00000A34
    bl strlen
    mr r5, r3
    mr r3, r17
    mr r4, r18
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020C5D4_00000A34:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lwz r0, 0x10d0(r31)
    mr r18, r3
    mulli r0, r0, 0x44
    add r17, r31, r0
    addi r17, r17, 0x20
    cmplw r3, r17
    beq lbl_fn_8020C5D4_00000A70
    bl strlen
    mr r5, r3
    mr r3, r17
    mr r4, r18
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020C5D4_00000A70:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, 0x10d0(r31)
    mulli r0, r0, 0x44
    add r4, r31, r0
    stw r3, 0x40(r4)
    lwz r3, 0x10d0(r31)
    addi r0, r3, 0x1
    stw r0, 0x10d0(r31)
    b lbl_fn_8020C5D4_00000F48
lbl_fn_8020C5D4_00000A9C:
    mr r3, r17
    addi r4, r25, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020C5D4_00000CE4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lwz r0, 0x10d4(r31)
    mr r18, r3
    mulli r0, r0, 0x54
    add r4, r31, r0
    addi r17, r4, 0x440
    cmplw r3, r17
    beq lbl_fn_8020C5D4_00000AFC
    bl strlen
    mr r5, r3
    mr r3, r17
    mr r4, r18
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020C5D4_00000AFC:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lwz r0, 0x10d4(r31)
    mr r18, r3
    mulli r0, r0, 0x54
    add r4, r31, r0
    addi r17, r4, 0x460
    cmplw r3, r17
    beq lbl_fn_8020C5D4_00000B38
    bl strlen
    mr r5, r3
    mr r3, r17
    mr r4, r18
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020C5D4_00000B38:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x52
    bne lbl_fn_8020C5D4_00000B64
    lwz r0, 0x10d4(r31)
    mulli r0, r0, 0x54
    add r3, r31, r0
    stb r23, 0x490(r3)
    b lbl_fn_8020C5D4_00000B90
lbl_fn_8020C5D4_00000B64:
    cmpwi r0, 0x47
    bne lbl_fn_8020C5D4_00000B80
    lwz r0, 0x10d4(r31)
    mulli r0, r0, 0x54
    add r3, r31, r0
    stb r26, 0x490(r3)
    b lbl_fn_8020C5D4_00000B90
lbl_fn_8020C5D4_00000B80:
    lwz r0, 0x10d4(r31)
    mulli r0, r0, 0x54
    add r3, r31, r0
    stb r27, 0x490(r3)
lbl_fn_8020C5D4_00000B90:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, 0x10d4(r31)
    addi r3, r1, 0x8
    mulli r0, r0, 0x54
    add r4, r31, r0
    stfs f1, 0x480(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, 0x10d4(r31)
    addi r3, r1, 0x8
    mulli r0, r0, 0x54
    add r4, r31, r0
    stfs f1, 0x484(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, 0x10d4(r31)
    addi r3, r1, 0x8
    mulli r0, r0, 0x54
    add r4, r31, r0
    stfs f1, 0x488(r4)
    lwz r0, 0x10d4(r31)
    mulli r0, r0, 0x54
    add r4, r31, r0
    stfs f31, 0x48c(r4)
    bl fn_8005B3CC
    lwz r0, 0x10d4(r31)
    addi r6, r29, lbl_8073F620@l
    li r7, 0x0
    mulli r0, r0, 0x54
    add r4, r31, r0
    stb r28, 0x491(r4)
    mtctr r30
lbl_fn_8020C5D4_00000C18:
    lwz r4, 0x0(r6)
    lbz r5, 0x0(r3)
    lbz r0, 0x0(r4)
    extsb r4, r5
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_8020C5D4_00000C48
    lwz r0, 0x10d4(r31)
    mulli r0, r0, 0x54
    add r3, r31, r0
    stb r7, 0x491(r3)
    b lbl_fn_8020C5D4_00000C54
lbl_fn_8020C5D4_00000C48:
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_8020C5D4_00000C18
lbl_fn_8020C5D4_00000C54:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, 0x10d4(r31)
    neg r4, r3
    or r4, r4, r3
    addi r3, r1, 0x8
    mulli r0, r0, 0x54
    srwi r5, r4, 31
    add r4, r31, r0
    stb r5, 0x493(r4)
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x31
    bne lbl_fn_8020C5D4_00000CA8
    lwz r0, 0x10d4(r31)
    mulli r0, r0, 0x54
    add r3, r31, r0
    stb r26, 0x492(r3)
    b lbl_fn_8020C5D4_00000CD4
lbl_fn_8020C5D4_00000CA8:
    cmpwi r0, 0x32
    bne lbl_fn_8020C5D4_00000CC4
    lwz r0, 0x10d4(r31)
    mulli r0, r0, 0x54
    add r3, r31, r0
    stb r27, 0x492(r3)
    b lbl_fn_8020C5D4_00000CD4
lbl_fn_8020C5D4_00000CC4:
    lwz r0, 0x10d4(r31)
    mulli r0, r0, 0x54
    add r3, r31, r0
    stb r23, 0x492(r3)
lbl_fn_8020C5D4_00000CD4:
    lwz r3, 0x10d4(r31)
    addi r0, r3, 0x1
    stw r0, 0x10d4(r31)
    b lbl_fn_8020C5D4_00000F48
lbl_fn_8020C5D4_00000CE4:
    mr r3, r17
    addi r4, r25, 0xd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020C5D4_00000E18
    lwz r0, 0x10d8(r31)
    addi r3, r1, 0x8
    mulli r0, r0, 0x64
    add r4, r31, r0
    addi r22, r4, 0xc20
    bl fn_8005B3CC
    cmplw r3, r22
    mr r17, r3
    beq lbl_fn_8020C5D4_00000D34
    bl strlen
    mr r5, r3
    mr r3, r22
    mr r4, r17
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020C5D4_00000D34:
    stw r23, 0x60(r22)
lbl_fn_8020C5D4_00000D38:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lwz r18, 0x10d0(r31)
    mr r19, r3
    mr r17, r31
    li r20, -0x1
    li r21, 0x0
    b lbl_fn_8020C5D4_00000DDC
lbl_fn_8020C5D4_00000D58:
    addi r3, r17, 0x20
    bl strlen
    lbzx r0, r19, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8020C5D4_00000DC4
    add r3, r17, r3
    addi r4, r17, 0x20
    addi r3, r3, 0x20
    mr r5, r19
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_8020C5D4_00000DC0
lbl_fn_8020C5D4_00000D94:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r5)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_8020C5D4_00000DB4
    li r0, 0x0
    b lbl_fn_8020C5D4_00000DC4
lbl_fn_8020C5D4_00000DB4:
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_8020C5D4_00000D94
lbl_fn_8020C5D4_00000DC0:
    li r0, 0x1
lbl_fn_8020C5D4_00000DC4:
    cmpwi r0, 0x0
    beq lbl_fn_8020C5D4_00000DD4
    mr r20, r21
    b lbl_fn_8020C5D4_00000DE4
lbl_fn_8020C5D4_00000DD4:
    addi r17, r17, 0x44
    addi r21, r21, 0x1
lbl_fn_8020C5D4_00000DDC:
    cmpw r21, r18
    blt lbl_fn_8020C5D4_00000D58
lbl_fn_8020C5D4_00000DE4:
    cmpwi r20, 0x0
    blt lbl_fn_8020C5D4_00000E08
    lwz r3, 0x60(r22)
    slwi r0, r3, 2
    addi r4, r3, 0x1
    add r3, r22, r0
    stw r20, 0x20(r3)
    stw r4, 0x60(r22)
    b lbl_fn_8020C5D4_00000D38
lbl_fn_8020C5D4_00000E08:
    lwz r3, 0x10d8(r31)
    addi r0, r3, 0x1
    stw r0, 0x10d8(r31)
    b lbl_fn_8020C5D4_00000F48
lbl_fn_8020C5D4_00000E18:
    mr r3, r17
    addi r4, r25, 0x12
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020C5D4_00000F48
    lwz r0, 0x10dc(r31)
    addi r3, r1, 0x8
    mulli r0, r0, 0x64
    add r4, r31, r0
    addi r19, r4, 0xf40
    bl fn_8005B3CC
    cmplw r3, r19
    mr r17, r3
    beq lbl_fn_8020C5D4_00000E68
    bl strlen
    mr r5, r3
    mr r3, r19
    mr r4, r17
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020C5D4_00000E68:
    stw r23, 0x60(r19)
lbl_fn_8020C5D4_00000E6C:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lwz r17, 0x10d0(r31)
    mr r22, r3
    mr r18, r31
    li r21, -0x1
    li r20, 0x0
    b lbl_fn_8020C5D4_00000F10
lbl_fn_8020C5D4_00000E8C:
    addi r3, r18, 0x20
    bl strlen
    lbzx r0, r22, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8020C5D4_00000EF8
    add r3, r18, r3
    addi r4, r18, 0x20
    addi r3, r3, 0x20
    mr r5, r22
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_8020C5D4_00000EF4
lbl_fn_8020C5D4_00000EC8:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r5)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_8020C5D4_00000EE8
    li r0, 0x0
    b lbl_fn_8020C5D4_00000EF8
lbl_fn_8020C5D4_00000EE8:
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_8020C5D4_00000EC8
lbl_fn_8020C5D4_00000EF4:
    li r0, 0x1
lbl_fn_8020C5D4_00000EF8:
    cmpwi r0, 0x0
    beq lbl_fn_8020C5D4_00000F08
    mr r21, r20
    b lbl_fn_8020C5D4_00000F18
lbl_fn_8020C5D4_00000F08:
    addi r18, r18, 0x44
    addi r20, r20, 0x1
lbl_fn_8020C5D4_00000F10:
    cmpw r20, r17
    blt lbl_fn_8020C5D4_00000E8C
lbl_fn_8020C5D4_00000F18:
    cmpwi r21, 0x0
    blt lbl_fn_8020C5D4_00000F3C
    lwz r3, 0x60(r19)
    slwi r0, r3, 2
    addi r4, r3, 0x1
    add r3, r19, r0
    stw r21, 0x20(r3)
    stw r4, 0x60(r19)
    b lbl_fn_8020C5D4_00000E6C
lbl_fn_8020C5D4_00000F3C:
    lwz r3, 0x10dc(r31)
    addi r0, r3, 0x1
    stw r0, 0x10dc(r31)
lbl_fn_8020C5D4_00000F48:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020C5D4_000009C8
lbl_fn_8020C5D4_00000F58:
    addi r11, r1, 0x680
    psq_l f31, 0x688(r1), 0, 0
    lfd f31, 0x680(r1)
    bl _restgpr_17
    lwz r0, 0x694(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}

asm void fn_8020CC64(void)
{
    nofralloc
    stwu r1, -0x4c40(r1)
    mflr r0
    stw r0, 0x4c44(r1)
    addi r11, r1, 0x4c40
    bl _savegpr_14
    lis r7, fn_8020D4E8@ha
    lis r6, fn_8020D5A0@ha
    mr r15, r3
    mr r28, r4
    mr r27, r5
    addi r4, r7, fn_8020D4E8@l
    addi r5, r6, fn_8020D5A0@l
    addi r3, r1, 0x270
    li r6, 0x24c
    li r7, 0x20
    bl fn_806958E0
    mr r19, r27
    mr r20, r28
    addi r14, r28, 0x440
    addi r16, r1, 0x270
    addi r17, r28, 0x460
    li r18, 0x0
    li r23, 0x0
    b lbl_fn_8020CC64_00001244
lbl_fn_8020CC64_00000FD8:
    addi r21, r1, 0x270
    li r24, 0x0
    li r22, 0x0
lbl_fn_8020CC64_00000FE4:
    mr r3, r14
    bl strlen
    lbzx r0, r21, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8020CC64_0000104C
    add r3, r14, r3
    mr r5, r21
    subf r0, r14, r3
    mr r4, r14
    mtctr r0
    cmplw r14, r3
    beq lbl_fn_8020CC64_00001048
lbl_fn_8020CC64_0000101C:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r5)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_8020CC64_0000103C
    li r0, 0x0
    b lbl_fn_8020CC64_0000104C
lbl_fn_8020CC64_0000103C:
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_8020CC64_0000101C
lbl_fn_8020CC64_00001048:
    li r0, 0x1
lbl_fn_8020CC64_0000104C:
    cmpwi r0, 0x0
    beq lbl_fn_8020CC64_00001064
    mulli r0, r22, 0x24c
    addi r24, r1, 0x270
    add r24, r24, r0
    b lbl_fn_8020CC64_00001074
lbl_fn_8020CC64_00001064:
    addi r22, r22, 0x1
    addi r21, r21, 0x24c
    cmplwi r22, 0x6
    blt lbl_fn_8020CC64_00000FE4
lbl_fn_8020CC64_00001074:
    cmpwi r24, 0x0
    bne lbl_fn_8020CC64_000010AC
    cmplw r14, r16
    mr r24, r16
    addi r16, r16, 0x24c
    addi r18, r18, 0x1
    beq lbl_fn_8020CC64_000010AC
    mr r3, r14
    bl strlen
    mr r5, r3
    mr r3, r24
    mr r4, r14
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020CC64_000010AC:
    lwz r22, 0x248(r24)
    addi r21, r24, 0x20
    li r25, 0x0
    li r26, 0x0
    b lbl_fn_8020CC64_00001148
lbl_fn_8020CC64_000010C0:
    mr r3, r21
    bl strlen
    lbzx r0, r17, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8020CC64_00001128
    add r3, r21, r3
    mr r5, r17
    subf r0, r21, r3
    mr r4, r21
    mtctr r0
    cmplw r21, r3
    beq lbl_fn_8020CC64_00001124
lbl_fn_8020CC64_000010F8:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r5)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_8020CC64_00001118
    li r0, 0x0
    b lbl_fn_8020CC64_00001128
lbl_fn_8020CC64_00001118:
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_8020CC64_000010F8
lbl_fn_8020CC64_00001124:
    li r0, 0x1
lbl_fn_8020CC64_00001128:
    cmpwi r0, 0x0
    beq lbl_fn_8020CC64_00001140
    mulli r0, r26, 0x5c
    add r3, r24, r0
    addi r25, r3, 0x20
    b lbl_fn_8020CC64_00001150
lbl_fn_8020CC64_00001140:
    addi r21, r21, 0x5c
    addi r26, r26, 0x1
lbl_fn_8020CC64_00001148:
    cmpw r26, r22
    blt lbl_fn_8020CC64_000010C0
lbl_fn_8020CC64_00001150:
    cmpwi r25, 0x0
    bne lbl_fn_8020CC64_00001194
    mulli r4, r22, 0x5c
    lwz r3, 0x248(r24)
    addi r0, r3, 0x1
    stw r0, 0x248(r24)
    add r3, r24, r4
    addi r25, r3, 0x20
    cmplw r17, r25
    beq lbl_fn_8020CC64_00001194
    mr r3, r17
    bl strlen
    mr r5, r3
    mr r3, r25
    mr r4, r17
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020CC64_00001194:
    cmpwi r27, 0x0
    beq lbl_fn_8020CC64_000011A8
    lha r3, 0x4(r19)
    cmpwi r3, 0x0
    bge lbl_fn_8020CC64_000011EC
lbl_fn_8020CC64_000011A8:
    lbz r0, 0x490(r20)
    lbz r5, 0x493(r20)
    extsb r4, r0
    slwi r0, r4, 2
    add r3, r25, r0
    stw r5, 0x20(r3)
    slwi r0, r4, 4
    add r3, r25, r0
    lfs f0, 0x480(r20)
    stfs f0, 0x2c(r3)
    lfs f0, 0x484(r20)
    stfs f0, 0x30(r3)
    lfs f0, 0x488(r20)
    stfs f0, 0x34(r3)
    lfs f0, 0x48c(r20)
    stfs f0, 0x38(r3)
    b lbl_fn_8020CC64_00001230
lbl_fn_8020CC64_000011EC:
    lbz r0, 0x490(r20)
    srwi r3, r3, 31
    xori r5, r3, 0x1
    extsb r4, r0
    slwi r0, r4, 2
    add r3, r25, r0
    stw r5, 0x20(r3)
    slwi r0, r4, 4
    add r3, r25, r0
    lfs f0, 0x8(r19)
    stfs f0, 0x2c(r3)
    lfs f0, 0xc(r19)
    stfs f0, 0x30(r3)
    lfs f0, 0x10(r19)
    stfs f0, 0x34(r3)
    lfs f0, 0x14(r19)
    stfs f0, 0x38(r3)
lbl_fn_8020CC64_00001230:
    addi r14, r14, 0x54
    addi r17, r17, 0x54
    addi r19, r19, 0x14
    addi r20, r20, 0x54
    addi r23, r23, 0x1
lbl_fn_8020CC64_00001244:
    lwz r0, 0x10d4(r28)
    cmpw r23, r0
    blt lbl_fn_8020CC64_00000FD8
    lis r3, lbl_8073F678@ha
    addi r25, r1, 0x270
    addi r24, r1, 0x39
    addi r28, r1, 0x74
    addi r31, r3, lbl_8073F678@l
    addi r14, r1, 0x8c
    addi r27, r1, 0x68
    li r17, 0x0
    li r29, 0x0
    b lbl_fn_8020CC64_000017C4
lbl_fn_8020CC64_00001278:
    lwz r0, 0x248(r25)
    mr r3, r25
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8020CC64_000012C0
lbl_fn_8020CC64_0000128C:
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8020CC64_000012B0
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8020CC64_000012B0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8020CC64_000012B8
lbl_fn_8020CC64_000012B0:
    li r0, 0x1
    b lbl_fn_8020CC64_000012C4
lbl_fn_8020CC64_000012B8:
    addi r3, r3, 0x5c
    bdnz lbl_fn_8020CC64_0000128C
lbl_fn_8020CC64_000012C0:
    li r0, 0x0
lbl_fn_8020CC64_000012C4:
    cmpwi r0, 0x0
    beq lbl_fn_8020CC64_000017BC
    mr r3, r15
    bl fn_8008B130
    stw r29, 0x74(r1)
    mr r16, r3
    stw r29, 0x78(r1)
    stw r29, 0x7c(r1)
    bl strlen
    mr r19, r3
    mr r3, r28
    mr r4, r19
    bl fn_80013DC4
    lbz r0, 0x34(r1)
    mr r3, r28
    stb r0, 0x30(r1)
    mr r6, r16
    add r7, r16, r19
    addi r8, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x98
    bl fn_8006B0C8
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_0000133C
    lwz r3, 0x7c(r1)
    bl dtor_80084684
lbl_fn_8020CC64_0000133C:
    stw r29, 0x8c(r1)
    mr r3, r25
    stw r29, 0x90(r1)
    stw r29, 0x94(r1)
    bl strlen
    mr r16, r3
    mr r3, r14
    mr r4, r16
    bl fn_80013DC4
    lbz r0, 0x2c(r1)
    mr r3, r14
    stb r0, 0x28(r1)
    mr r6, r25
    add r7, r25, r16
    addi r8, r1, 0x28
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    stw r29, 0x68(r1)
    mr r3, r25
    stw r29, 0x6c(r1)
    stw r29, 0x70(r1)
    bl strlen
    mr r16, r3
    mr r3, r27
    mr r4, r16
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r27
    stb r0, 0x20(r1)
    mr r6, r25
    add r7, r25, r16
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r27
    addi r3, r1, 0x80
    bl fn_8006B2D8
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_000013EC
    lwz r3, 0x70(r1)
    bl dtor_80084684
lbl_fn_8020CC64_000013EC:
    addi r3, r1, 0x5c
    addi r4, r1, 0x98
    addi r5, r31, 0x1c
    bl fn_8006D008
    addi r3, r1, 0x50
    addi r4, r1, 0x5c
    addi r5, r1, 0x8c
    bl fn_8006AFF8
    lwz r0, 0x8c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8020CC64_0000143C
    lwz r4, 0x50(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8020CC64_0000143C
    lwz r3, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r4, 0x8c(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    b lbl_fn_8020CC64_00001494
lbl_fn_8020CC64_0000143C:
    cmpwi r3, 0x0
    beq lbl_fn_8020CC64_0000144C
    lwz r5, 0x90(r1)
    b lbl_fn_8020CC64_00001454
lbl_fn_8020CC64_0000144C:
    lbz r0, 0x8c(r1)
    clrlwi r5, r0, 25
lbl_fn_8020CC64_00001454:
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8020CC64_00001470
    lbz r0, 0x50(r1)
    addi r6, r1, 0x51
    clrlwi r4, r0, 25
    b lbl_fn_8020CC64_00001478
lbl_fn_8020CC64_00001470:
    lwz r6, 0x58(r1)
    lwz r4, 0x54(r1)
lbl_fn_8020CC64_00001478:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r3, r1, 0x8c
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8020CC64_00001494:
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_000014A8
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_8020CC64_000014A8:
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_000014BC
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_8020CC64_000014BC:
    stw r29, 0xa8(r1)
    addi r22, r1, 0xa8
    lbz r30, 0x14(r1)
    addi r23, r25, 0x20
    stw r29, 0xac(r1)
    addi r21, r1, 0xf0
    addi r20, r25, 0x40
    addi r19, r25, 0x4c
    stw r29, 0xb0(r1)
    li r16, 0x0
    stw r29, 0xb4(r1)
    stw r29, 0xb8(r1)
    stw r29, 0xbc(r1)
    stw r29, 0xc0(r1)
    stw r29, 0xc4(r1)
    stw r29, 0xc8(r1)
    stw r29, 0xcc(r1)
    stw r29, 0xd0(r1)
    stw r29, 0xd4(r1)
    stw r29, 0xd8(r1)
    stw r29, 0xdc(r1)
    stw r29, 0xe0(r1)
    stw r29, 0xe4(r1)
    stw r29, 0xe8(r1)
    stw r29, 0xec(r1)
    b lbl_fn_8020CC64_00001690
lbl_fn_8020CC64_00001524:
    lwz r0, 0x0(r22)
    srwi. r0, r0, 31
    bne lbl_fn_8020CC64_0000153C
    lbz r0, 0x0(r22)
    clrlwi r26, r0, 25
    b lbl_fn_8020CC64_00001540
lbl_fn_8020CC64_0000153C:
    lwz r26, 0x4(r22)
lbl_fn_8020CC64_00001540:
    stb r30, 0x10(r1)
    mr r3, r23
    bl strlen
    mr r0, r3
    mr r3, r22
    mr r5, r26
    mr r6, r23
    add r7, r23, r0
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
    addi r3, r1, 0x44
    addi r4, r1, 0x98
    addi r5, r31, 0x27
    bl fn_8006D008
    mr r5, r22
    addi r3, r1, 0x38
    addi r4, r1, 0x44
    bl fn_8006AFF8
    lwz r0, 0x0(r22)
    srwi. r4, r0, 31
    bne lbl_fn_8020CC64_000015BC
    lwz r3, 0x38(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8020CC64_000015BC
    stw r3, 0x0(r22)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r22)
    lwz r0, 0x40(r1)
    stw r0, 0x8(r22)
    b lbl_fn_8020CC64_00001614
lbl_fn_8020CC64_000015BC:
    cmpwi r4, 0x0
    beq lbl_fn_8020CC64_000015CC
    lwz r5, 0x4(r22)
    b lbl_fn_8020CC64_000015D4
lbl_fn_8020CC64_000015CC:
    lbz r0, 0x0(r22)
    clrlwi r5, r0, 25
lbl_fn_8020CC64_000015D4:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8020CC64_000015F0
    lbz r0, 0x38(r1)
    mr r6, r24
    clrlwi r4, r0, 25
    b lbl_fn_8020CC64_000015F8
lbl_fn_8020CC64_000015F0:
    lwz r6, 0x40(r1)
    lwz r4, 0x3c(r1)
lbl_fn_8020CC64_000015F8:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    mr r3, r22
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8020CC64_00001614:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_00001628
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8020CC64_00001628:
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_0000163C
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_8020CC64_0000163C:
    lwz r0, 0x0(r22)
    srwi. r0, r0, 31
    bne lbl_fn_8020CC64_00001650
    addi r0, r22, 0x1
    b lbl_fn_8020CC64_00001654
lbl_fn_8020CC64_00001650:
    lwz r0, 0x8(r22)
lbl_fn_8020CC64_00001654:
    stw r0, 0x0(r21)
    mr r4, r20
    addi r3, r21, 0x34
    li r5, 0xc
    bl memcpy
    mr r4, r19
    addi r3, r21, 0x4
    li r5, 0x30
    bl memcpy
    addi r23, r23, 0x5c
    addi r22, r22, 0xc
    addi r21, r21, 0x40
    addi r20, r20, 0x5c
    addi r19, r19, 0x5c
    addi r16, r16, 0x1
lbl_fn_8020CC64_00001690:
    lwz r0, 0x248(r25)
    cmpw r16, r0
    blt lbl_fn_8020CC64_00001524
    addi r5, r31, 0x2e
    li r3, 0x38c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_8020CC64_000016E8
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8020CC64_000016D4
    addi r4, r1, 0x8d
    b lbl_fn_8020CC64_000016D8
lbl_fn_8020CC64_000016D4:
    lwz r4, 0x94(r1)
lbl_fn_8020CC64_000016D8:
    lwz r6, 0x248(r25)
    addi r5, r1, 0xf0
    bl fn_800D8C14
    mr r5, r3
lbl_fn_8020CC64_000016E8:
    lwz r0, 0x80(r1)
    mr r3, r15
    srwi. r0, r0, 31
    bne lbl_fn_8020CC64_00001700
    addi r4, r1, 0x81
    b lbl_fn_8020CC64_00001704
lbl_fn_8020CC64_00001700:
    lwz r4, 0x88(r1)
lbl_fn_8020CC64_00001704:
    bl fn_80095750
    lwz r0, 0xe4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_0000171C
    lwz r3, 0xec(r1)
    bl dtor_80084684
lbl_fn_8020CC64_0000171C:
    lwz r0, 0xd8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_00001730
    lwz r3, 0xe0(r1)
    bl dtor_80084684
lbl_fn_8020CC64_00001730:
    lwz r0, 0xcc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_00001744
    lwz r3, 0xd4(r1)
    bl dtor_80084684
lbl_fn_8020CC64_00001744:
    lwz r0, 0xc0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_00001758
    lwz r3, 0xc8(r1)
    bl dtor_80084684
lbl_fn_8020CC64_00001758:
    lwz r0, 0xb4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_0000176C
    lwz r3, 0xbc(r1)
    bl dtor_80084684
lbl_fn_8020CC64_0000176C:
    lwz r0, 0xa8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_00001780
    lwz r3, 0xb0(r1)
    bl dtor_80084684
lbl_fn_8020CC64_00001780:
    lwz r0, 0x80(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_00001794
    lwz r3, 0x88(r1)
    bl dtor_80084684
lbl_fn_8020CC64_00001794:
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_000017A8
    lwz r3, 0x94(r1)
    bl dtor_80084684
lbl_fn_8020CC64_000017A8:
    lwz r0, 0x98(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8020CC64_000017BC
    lwz r3, 0xa0(r1)
    bl dtor_80084684
lbl_fn_8020CC64_000017BC:
    addi r25, r25, 0x24c
    addi r17, r17, 0x1
lbl_fn_8020CC64_000017C4:
    cmplw r17, r18
    blt lbl_fn_8020CC64_00001278
    lis r4, fn_8020D5A0@ha
    addi r3, r1, 0x270
    addi r4, r4, fn_8020D5A0@l
    li r5, 0x24c
    li r6, 0x20
    bl fn_806959D8
    addi r11, r1, 0x4c40
    bl _restgpr_14
    lwz r0, 0x4c44(r1)
    mtlr r0
    addi r1, r1, 0x4c40
    blr
}

asm void fn_8020D4E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8020D548@ha
    lis r5, fn_8020D560@ha
    stw r0, 0x14(r1)
    addi r4, r4, fn_8020D548@l
    addi r5, r5, fn_8020D560@l
    li r6, 0x5c
    stw r31, 0xc(r1)
    li r31, 0x0
    li r7, 0x6
    stw r30, 0x8(r1)
    mr r30, r3
    stb r31, 0x0(r3)
    addi r3, r3, 0x20
    bl fn_806958E0
    stw r31, 0x248(r30)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020D548(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    blr
}

asm void fn_8020D560(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8020D560_0000189C
    cmpwi r4, 0x0
    ble lbl_fn_8020D560_0000189C
    bl dtor_80084684
lbl_fn_8020D560_0000189C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020D5A0(void)
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
    beq lbl_fn_8020D5A0_00001900
    lis r4, fn_8020D560@ha
    li r5, 0x5c
    addi r4, r4, fn_8020D560@l
    li r6, 0x6
    addi r3, r3, 0x20
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_8020D5A0_00001900
    mr r3, r30
    bl dtor_80084684
lbl_fn_8020D5A0_00001900:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020D608(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mr r31, r28
    b lbl_fn_8020D608_0000196C
lbl_fn_8020D608_0000194C:
    mr r3, r31
    bl fn_800DC6B4
    cmplw r3, r29
    bne lbl_fn_8020D608_00001964
    mr r3, r30
    b lbl_fn_8020D608_0000197C
lbl_fn_8020D608_00001964:
    addi r31, r31, 0x44
    addi r30, r30, 0x1
lbl_fn_8020D608_0000196C:
    lwz r0, 0x10d0(r28)
    cmpw r30, r0
    blt lbl_fn_8020D608_0000194C
    li r3, -0x1
lbl_fn_8020D608_0000197C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
