#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCalendarTimeToTicks(void);
extern void OSGetTime(void);
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSTicksToCalendarTime(void);
extern void SCGetLanguage(void);
extern void _restgpr_19(void);
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_19(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void fn_805EBFD0(void);
extern void fn_8061F2F0(void);
extern void fn_80621CD0(void);
extern void fn_80624F00(void);
extern void fn_80624F90(void);
extern void fn_80624FD0(void);
extern void fn_806820D4(void);
extern void fn_8068236C(void);
extern void fn_80682544(void);
extern void fn_806826A0(void);
extern void fn_806827C4(void);
extern void fn_80684514(void);
extern void fn_80686A48(void);
extern void fn_80698A28(void);
extern void fn_806A00B8(void);
extern void fn_806A0390(void);
extern void fn_806A0414(void);
extern void fn_806A04D8(void);
extern void fn_806A059C(void);
extern void fn_806A0638(void);
extern void fn_806A06BC(void);
extern void fn_806A0724(void);
extern void fn_806A0784(void);
extern void fn_806A0950(void);
extern void fn_806A0A78(void);
extern void fn_806A0AD8(void);
extern void fn_806A6CA0(void);
extern void fn_806A6E40(void);
extern void fn_806A7110(void);
extern void fn_806A7130(void);
extern void fn_806A72E0(void);
extern void fn_806A7400(void);
extern void fn_806A75C0(void);
extern void fn_806A76B0(void);
extern void fn_806AA690(void);
extern void fn_806AA7E0(void);
extern void fn_806D9380(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B638[];
extern u8 lbl_8076B64C[];
extern u8 lbl_807C1DD8[];
extern u8 lbl_807C26D8[];
extern u8 lbl_807C26F0[];
extern u8 lbl_807C2710[];
extern u8 lbl_808608C0[];
extern u8 lbl_80860C20[];
extern u8 lbl_80860C40[];
extern u8 lbl_80860C44[];
extern u8 lbl_80860C50[];
extern u8 lbl_80860C88[];

/* Small data declarations */

/* Function declarations */
void pad_03_806D158C_text(void);
void fn_806D1590(void);
void fn_806D15E0(void);
void fn_806D1600(void);
void fn_806D1610(void);
void fn_806D1660(void);
void fn_806D1670(void);
void fn_806D1690(void);
void fn_806D16A0(void);
void fn_806D16B0(void);
void fn_806D16C0(void);
void fn_806D16E0(void);
void fn_806D1700(void);
void fn_806D1720(void);
void fn_806D2270(void);
void fn_806D2BD0(void);
void fn_806D2C40(void);
void fn_806D2D80(void);
void fn_806D2F50(void);
void fn_806D3200(void);
void fn_806D3210(void);

asm void pad_03_806D158C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806D1590(void)
{
    nofralloc
    lis r3, lbl_80860C44@ha
    lwz r0, lbl_80860C44@l(r3)
    cmpwi r0, 0x19
    bne lbl_fn_806D1590_00000024
    li r0, 0x1a
    stw r0, lbl_80860C44@l(r3)
    li r3, 0x1
    blr
lbl_fn_806D1590_00000024:
    lwz r0, lbl_80860C44@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D1590_0000003C
    lwz r0, lbl_80860C44@l(r3)
    cmpwi r0, 0x1a
    bne lbl_fn_806D1590_00000044
lbl_fn_806D1590_0000003C:
    li r3, 0x1
    blr
lbl_fn_806D1590_00000044:
    li r3, 0x0
    blr
}

asm void fn_806D15E0(void)
{
    nofralloc
    lis r3, lbl_808608C0@ha
    lwz r3, lbl_808608C0@l(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_806D1600(void)
{
    nofralloc
    lis r3, lbl_808608C0@ha
    lwz r3, lbl_808608C0@l(r3)
    blr
}

asm void fn_806D1610(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808608C0@ha
    addi r31, r31, lbl_808608C0@l
    stw r30, 0x8(r1)
    mr r30, r4
    addi r4, r31, 0x4
    bl strcpy
    mr r3, r30
    addi r4, r31, 0x131
    bl strcpy
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D1660(void)
{
    nofralloc
    blr
}

asm void fn_806D1670(void)
{
    nofralloc
    lis r3, lbl_80860C20@ha
    addi r4, r3, lbl_80860C20@l
    lwz r3, lbl_80860C20@l(r3)
    lwz r4, 0x4(r4)
    blr
}

asm void fn_806D1690(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_806D16A0(void)
{
    nofralloc
    lis r3, lbl_808608C0@ha
    addi r3, r3, lbl_808608C0@l
    lwz r3, 0x1b8(r3)
    blr
}

asm void fn_806D16B0(void)
{
    nofralloc
    lis r3, lbl_80860C50@ha
    addi r3, r3, lbl_80860C50@l
    blr
}

asm void fn_806D16C0(void)
{
    nofralloc
    lis r5, lbl_80860C40@ha
    mr r4, r3
    lwz r5, lbl_80860C40@l(r5)
    li r3, 0xd
    lwz r12, 0x5b14(r5)
    mtctr r12
    bctr
}

asm void fn_806D16E0(void)
{
    nofralloc
    lis r5, lbl_80860C40@ha
    mr r4, r3
    lwz r6, lbl_80860C40@l(r5)
    li r3, 0xd
    li r5, 0x0
    lwz r12, 0x5b18(r6)
    mtctr r12
    bctr
}

asm void fn_806D1700(void)
{
    nofralloc
    lis r5, lbl_80860C40@ha
    li r0, 0x1
    lwz r4, lbl_80860C40@l(r5)
    stw r0, 0x59b8(r4)
    lwz r4, lbl_80860C40@l(r5)
    stw r3, 0x59bc(r4)
    blr
}

asm void fn_806D1720(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x1c0
    bl _savegpr_21
    lis r30, lbl_808608C0@ha
    lis r29, lbl_807C1DD8@ha
    addi r30, r30, lbl_808608C0@l
    mr r22, r3
    lwz r3, 0x380(r30)
    mr r23, r4
    mr r24, r5
    mr r26, r7
    lwz r0, 0x59c8(r3)
    mr r25, r8
    addi r29, r29, lbl_807C1DD8@l
    addi r27, r3, 0x51b2
    cmpwi r0, 0x3
    beq lbl_fn_806D1720_000001F4
    lwz r0, 0x388(r30)
    addi r3, r29, 0x94
    slwi r0, r0, 2
    lwzx r21, r3, r0
    b lbl_fn_806D1720_00000204
lbl_fn_806D1720_000001F4:
    lwz r0, 0x388(r30)
    addi r3, r29, 0x114
    slwi r0, r0, 2
    lwzx r21, r3, r0
lbl_fn_806D1720_00000204:
    mr r5, r21
    addi r4, r29, 0x2c0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r5, 0x380(r30)
    lis r7, fn_806D2270@ha
    mr r3, r21
    li r4, 0x1
    addi r5, r5, 0x41b2
    addi r7, r7, fn_806D2270@l
    li r6, 0x1000
    li r8, 0x0
    bl fn_806A0390
    mr r28, r3
    bl fn_806A0A78
    cmpwi r3, 0x0
    beq lbl_fn_806D1720_00000260
    addi r3, r29, 0x2cc
    addi r5, r29, 0x2e4
    li r4, 0x417
    crclr 6
    bl OSPanic
lbl_fn_806D1720_00000260:
    mr r3, r28
    bl fn_806A0AD8
    cmpwi r3, 0x0
    beq lbl_fn_806D1720_00000284
    addi r3, r29, 0x2cc
    addi r5, r29, 0x308
    li r4, 0x41b
    crclr 6
    bl OSPanic
lbl_fn_806D1720_00000284:
    mr r3, r28
    bl fn_806A0950
    mr r3, r28
    li r4, 0x2
    bl fn_806A0784
    mr r3, r28
    addi r4, r29, 0x330
    addi r5, r29, 0x33c
    bl fn_806A0414
    lwz r3, 0x380(r30)
    lwz r0, 0x59c8(r3)
    cmpwi r0, 0x3
    beq lbl_fn_806D1720_000002D4
    lwz r0, 0x388(r30)
    addi r3, r29, 0x94
    addi r4, r29, 0x348
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl fn_806827C4
    b lbl_fn_806D1720_000002EC
lbl_fn_806D1720_000002D4:
    lwz r0, 0x388(r30)
    addi r3, r29, 0x114
    addi r4, r29, 0x348
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl fn_806827C4
lbl_fn_806D1720_000002EC:
    lis r21, lbl_80860C88@ha
    addi r4, r3, 0x2
    addi r3, r21, lbl_80860C88@l
    bl strcpy
    addi r3, r21, lbl_80860C88@l
    addi r4, r29, 0x34c
    bl fn_806827C4
    li r31, 0x0
    stb r31, 0x0(r3)
    mr r3, r28
    addi r4, r29, 0x350
    addi r5, r21, lbl_80860C88@l
    bl fn_806A0414
    bl fn_805EBFD0
    mr r5, r3
    mr r3, r28
    addi r4, r29, 0x358
    bl fn_806A0414
    bl fn_805EBFD0
    mr r5, r3
    addi r4, r29, 0x368
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    cmpwi r22, 0x0
    beq lbl_fn_806D1720_00000370
    cmpwi r22, 0x1
    beq lbl_fn_806D1720_000003C0
    cmpwi r22, 0x2
    beq lbl_fn_806D1720_000004FC
    cmpwi r22, 0x3
    beq lbl_fn_806D1720_0000060C
    b lbl_fn_806D1720_00000780
lbl_fn_806D1720_00000370:
    addi r21, r29, 0x380
    mr r3, r21
    bl strlen
    mr r4, r3
    mr r3, r21
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x38c
    bl fn_806A04D8
    addi r4, r29, 0x394
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D1720_00000780
lbl_fn_806D1720_000003C0:
    addi r21, r29, 0x3ac
    mr r3, r21
    bl strlen
    mr r4, r3
    mr r3, r21
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x38c
    bl fn_806A04D8
    mr r3, r24
    bl strlen
    mr r4, r3
    mr r3, r24
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x3b4
    bl fn_806A04D8
    addi r4, r29, 0x3bc
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    mr r5, r24
    addi r4, r29, 0x3d0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    mr r6, r25
    mr r5, r26
    addi r3, r1, 0x88
    addi r4, r29, 0x3e0
    crclr 6
    bl sprintf
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x3e8
    bl fn_806A04D8
    mr r6, r25
    mr r5, r26
    addi r4, r29, 0x3f0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    mr r3, r23
    bl fn_80686A48
    slwi r4, r3, 1
    mr r3, r23
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x408
    bl fn_806A04D8
    b lbl_fn_806D1720_00000780
lbl_fn_806D1720_000004FC:
    addi r21, r29, 0x414
    mr r3, r21
    bl strlen
    mr r4, r3
    mr r3, r21
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x38c
    bl fn_806A04D8
    addi r4, r29, 0x41c
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x380(r30)
    addi r21, r3, 0x419e
    mr r3, r21
    bl strlen
    mr r4, r3
    mr r3, r21
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x430
    bl fn_806A04D8
    lwz r5, 0x380(r30)
    addi r4, r29, 0x434
    lis r3, 0x100
    addi r5, r5, 0x419e
    crclr 6
    bl fn_806A76B0
    mr r6, r25
    mr r5, r26
    addi r3, r1, 0x88
    addi r4, r29, 0x3e0
    crclr 6
    bl sprintf
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x3e8
    bl fn_806A04D8
    mr r6, r25
    mr r5, r26
    addi r4, r29, 0x3f0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D1720_00000780
lbl_fn_806D1720_0000060C:
    lwz r3, 0x380(r30)
    lwz r0, 0x41ac(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806D1720_00000684
    mr r6, r25
    mr r5, r26
    addi r3, r1, 0x88
    addi r4, r29, 0x3e0
    crclr 6
    bl sprintf
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x3e8
    bl fn_806A04D8
    mr r6, r25
    mr r5, r26
    addi r4, r29, 0x3f0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
lbl_fn_806D1720_00000684:
    lwz r3, 0x380(r30)
    addi r21, r3, 0x41b0
    mr r3, r21
    bl strlen
    mr r4, r3
    mr r3, r21
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    li r22, 0x0
    stbx r22, r27, r3
    add r6, r3, r27
    mr r5, r27
    mr r3, r28
    addi r4, r29, 0x440
    addi r27, r6, 0x1
    bl fn_806A04D8
    lwz r5, 0x380(r30)
    addi r4, r29, 0x448
    lis r3, 0x100
    addi r5, r5, 0x41b0
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    addi r4, r29, 0x458
    addi r5, r29, 0x18c
    bl fn_806A04D8
    addi r4, r29, 0x460
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r21, r29, 0x46c
    mr r3, r21
    bl strlen
    mr r4, r3
    mr r3, r21
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    stbx r22, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x478
    bl fn_806A04D8
    addi r4, r29, 0x480
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r4, 0x380(r30)
    mr r5, r27
    li r6, 0x800
    lwz r3, 0x41a4(r4)
    lwz r4, 0x41a8(r4)
    bl fn_806A6CA0
    stbx r22, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x494
    bl fn_806A04D8
lbl_fn_806D1720_00000780:
    addi r21, r29, 0x49c
    mr r3, r21
    bl strlen
    mr r4, r3
    mr r3, r21
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    li r22, 0x0
    stbx r22, r27, r3
    add r6, r3, r27
    mr r5, r27
    mr r3, r28
    addi r4, r29, 0x4a4
    addi r27, r6, 0x1
    bl fn_806A04D8
    bl fn_805EBFD0
    mr r21, r3
    bl strlen
    mr r4, r3
    mr r3, r21
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    stbx r22, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x4ac
    bl fn_806A04D8
    addi r3, r1, 0x48
    bl fn_80621CD0
    cmpwi r3, 0x0
    bne lbl_fn_806D1720_00000884
    addi r3, r1, 0x48
    addi r4, r1, 0x10
    bl fn_8061F2F0
    cmpwi r3, 0x0
    bne lbl_fn_806D1720_0000085C
    lhz r0, 0x14(r1)
    cmplwi r0, 0x2
    bne lbl_fn_806D1720_00000840
    addi r3, r1, 0x88
    addi r4, r29, 0x4b4
    li r5, 0x3
    bl fn_8068236C
    b lbl_fn_806D1720_000008A8
lbl_fn_806D1720_00000840:
    addi r3, r1, 0x88
    addi r4, r29, 0x4b8
    extrwi r5, r0, 8, 16
    clrlwi r6, r0, 24
    crclr 6
    bl sprintf
    b lbl_fn_806D1720_000008A8
lbl_fn_806D1720_0000085C:
    mr r5, r3
    addi r4, r29, 0x4c0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r3, r1, 0x88
    addi r4, r29, 0x4dc
    li r5, 0x3
    bl fn_8068236C
    b lbl_fn_806D1720_000008A8
lbl_fn_806D1720_00000884:
    mr r5, r3
    addi r4, r29, 0x4e0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r3, r1, 0x88
    addi r4, r29, 0x4dc
    li r5, 0x3
    bl fn_8068236C
lbl_fn_806D1720_000008A8:
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    li r31, 0x0
    stbx r31, r27, r3
    add r6, r3, r27
    mr r5, r27
    mr r3, r28
    addi r4, r29, 0x500
    addi r27, r6, 0x1
    bl fn_806A04D8
    addi r4, r29, 0x508
    addi r5, r1, 0x88
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r21, r29, 0x518
    mr r3, r21
    bl strlen
    mr r4, r3
    mr r3, r21
    mr r5, r27
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x51c
    bl fn_806A04D8
    addi r3, r1, 0x18
    bl fn_80698A28
    lbz r5, 0x18(r1)
    addi r3, r1, 0x88
    lbz r6, 0x19(r1)
    addi r4, r29, 0x524
    lbz r7, 0x1a(r1)
    lbz r8, 0x1b(r1)
    lbz r9, 0x1c(r1)
    lbz r10, 0x1d(r1)
    crclr 6
    bl sprintf
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x540
    bl fn_806A04D8
    addi r4, r29, 0x548
    addi r5, r1, 0x88
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    bl SCGetLanguage
    clrlwi r5, r3, 24
    addi r3, r1, 0x88
    addi r4, r29, 0x558
    crclr 6
    bl sprintf
    addi r4, r29, 0x560
    addi r5, r1, 0x88
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x56c
    bl fn_806A04D8
    lwz r3, 0x380(r30)
    lwz r0, 0x59c8(r3)
    cmpwi r0, 0x3
    beq lbl_fn_806D1720_00000AC8
    bl OSGetTime
    addi r5, r1, 0x20
    bl OSTicksToCalendarTime
    lis r3, 0x51ec
    lwz r12, 0x34(r1)
    subi r0, r3, 0x7ae1
    lwz r5, 0x30(r1)
    mulhw r0, r0, r12
    lwz r7, 0x2c(r1)
    lwz r8, 0x28(r1)
    addi r3, r1, 0x88
    lwz r9, 0x24(r1)
    addi r4, r29, 0x574
    srawi r0, r0, 5
    lwz r10, 0x20(r1)
    srwi r11, r0, 31
    addi r6, r5, 0x1
    add r0, r0, r11
    mulli r0, r0, 0x64
    subf r5, r0, r12
    crclr 6
    bl sprintf
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    stbx r31, r27, r3
    add r4, r3, r27
    mr r5, r27
    mr r3, r28
    addi r27, r4, 0x1
    addi r4, r29, 0x590
    bl fn_806A04D8
    addi r4, r29, 0x598
    addi r5, r1, 0x88
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
lbl_fn_806D1720_00000AC8:
    lwz r3, 0x380(r30)
    lbz r0, 0x4000(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806D1720_00000B48
    lwz r0, 0x59c8(r3)
    cmpwi r0, 0x3
    beq lbl_fn_806D1720_00000B48
    lbz r5, 0x4004(r3)
    addi r3, r1, 0x88
    addi r4, r29, 0x558
    crclr 6
    bl sprintf
    addi r4, r29, 0x5ac
    addi r5, r1, 0x88
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    li r0, 0x0
    stbx r0, r27, r3
    add r6, r3, r27
    mr r5, r27
    mr r3, r28
    addi r4, r29, 0x5c0
    addi r27, r6, 0x1
    bl fn_806A04D8
lbl_fn_806D1720_00000B48:
    bl fn_80624F90
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_fn_806D1720_00000BD0
    addi r3, r1, 0x8
    bl fn_80624FD0
    cmpwi r3, 0x0
    beq lbl_fn_806D1720_00000BD0
    lwz r6, 0x8(r1)
    mr r5, r21
    addi r3, r1, 0x88
    addi r4, r29, 0x5cc
    crclr 6
    bl sprintf
    addi r4, r29, 0x5d4
    addi r5, r1, 0x88
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    li r0, 0x0
    stbx r0, r27, r3
    add r6, r3, r27
    mr r5, r27
    mr r3, r28
    addi r4, r29, 0x5e4
    addi r27, r6, 0x1
    bl fn_806A04D8
lbl_fn_806D1720_00000BD0:
    bl fn_806AA690
    mr r6, r4
    mr r5, r3
    addi r3, r1, 0x88
    addi r4, r29, 0x5f0
    crclr 6
    bl sprintf
    addi r4, r29, 0x5f8
    addi r5, r1, 0x88
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    li r22, 0x0
    stbx r22, r27, r3
    add r6, r3, r27
    mr r5, r27
    mr r3, r28
    addi r4, r29, 0x604
    addi r27, r6, 0x1
    bl fn_806A04D8
    lwz r3, 0x380(r30)
    lwz r0, 0x59c8(r3)
    cmpwi r0, 0x3
    beq lbl_fn_806D1720_00000CA8
    bl fn_80624F00
    extsb r5, r3
    addi r3, r1, 0x88
    addi r4, r29, 0x558
    crclr 6
    bl sprintf
    addi r4, r29, 0x608
    addi r5, r1, 0x88
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x88
    li r6, 0x800
    bl fn_806A6CA0
    stbx r22, r27, r3
    mr r3, r28
    mr r5, r27
    addi r4, r29, 0x618
    bl fn_806A04D8
lbl_fn_806D1720_00000CA8:
    mr r3, r28
    bl fn_806A059C
    lwz r4, 0x380(r30)
    li r0, 0x0
    stw r3, 0x59c4(r4)
    stw r0, 0x0(r30)
    addi r11, r1, 0x1c0
    bl _restgpr_21
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_806D2270(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x180
    bl _savegpr_19
    lis r26, lbl_808608C0@ha
    lis r25, lbl_807C1DD8@ha
    addi r26, r26, lbl_808608C0@l
    mr r19, r3
    addi r20, r26, 0x0
    li r0, 0x0
    lwz r3, 0x1c8(r20)
    mr r21, r4
    addi r25, r25, lbl_807C1DD8@l
    cmplw r3, r0
    beq lbl_fn_806D2270_00000D3C
    addi r4, r25, 0x198
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x1c8(r20)
    bl fn_806A0638
lbl_fn_806D2270_00000D3C:
    addi r27, r26, 0x0
    mr r5, r19
    stw r21, 0x1c8(r27)
    addi r4, r25, 0x620
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    cmpwi r19, 0x8
    bne lbl_fn_806D2270_00000D80
    mr r5, r19
    addi r4, r25, 0x638
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r0, 0x2
    stw r0, 0x0(r26)
    b lbl_fn_806D2270_0000162C
lbl_fn_806D2270_00000D80:
    cmpwi r19, 0x0
    beq lbl_fn_806D2270_00000DD4
    cmpwi r19, 0xe
    bne lbl_fn_806D2270_00000DA8
    bl fn_806A00B8
    mr r5, r3
    addi r4, r25, 0x650
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
lbl_fn_806D2270_00000DA8:
    mr r5, r19
    addi r4, r25, 0x660
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    addi r3, r26, 0x390
    li r4, -0x4e84
    li r0, 0x1
    stw r4, 0x0(r26)
    stw r0, 0x34(r3)
    b lbl_fn_806D2270_0000162C
lbl_fn_806D2270_00000DD4:
    mr r3, r21
    bl fn_806A0724
    cmpwi r3, 0xc8
    mr r19, r3
    beq lbl_fn_806D2270_00000E48
    mr r5, r19
    addi r4, r25, 0x674
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    subfic r0, r19, -0x59d8
    stw r0, 0x0(r26)
    mr r3, r21
    addi r4, r1, 0x10
    bl fn_806A06BC
    cmpwi r3, 0x0
    ble lbl_fn_806D2270_00000E30
    lwz r5, 0x10(r1)
    addi r4, r25, 0x698
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_0000162C
lbl_fn_806D2270_00000E30:
    lwz r5, 0x10(r1)
    addi r4, r25, 0x69c
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_0000162C
lbl_fn_806D2270_00000E48:
    mr r3, r21
    addi r23, r25, 0x6a8
    addi r4, r1, 0xc
    li r22, 0x0
    bl fn_806A06BC
    cmpwi r3, 0x0
    ble lbl_fn_806D2270_000014FC
    lwz r5, 0xc(r1)
    addi r4, r25, 0x6ac
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r3, 0xc(r1)
    mr r4, r23
    bl fn_806826A0
    addi r29, r1, 0x40
    mr r24, r3
    addi r31, r26, 0x1d0
    addi r30, r26, 0x360
    li r28, 0x0
    li r20, 0x1
    b lbl_fn_806D2270_000014F4
lbl_fn_806D2270_00000EA0:
    addi r3, r25, 0x6b4
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x6b4
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_00000F14
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x6b4
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x6b4
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r5, r3
    mr r6, r29
    addi r4, r25, 0x6c0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_00000F14:
    addi r3, r25, 0x6d0
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x6d0
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_00000F9C
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x6d0
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x6d0
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r24, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl strcpy
    mr r5, r24
    mr r6, r29
    addi r4, r25, 0x6dc
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r22, 0x1
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_00000F9C:
    addi r3, r25, 0x6f0
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x6f0
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_000010A4
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x6f0
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x6f0
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r24, r3
    mr r3, r29
    addi r4, r25, 0x6fc
    addi r5, r1, 0x2c
    addi r6, r1, 0x28
    addi r7, r1, 0x24
    addi r8, r1, 0x20
    addi r9, r1, 0x1c
    addi r10, r1, 0x18
    crclr 6
    bl fn_806820D4
    cmpwi r3, 0x6
    beq lbl_fn_806D2270_00001048
    mr r5, r29
    addi r4, r25, 0x718
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r19, 0x0
    li r21, 0x0
    b lbl_fn_806D2270_00001074
lbl_fn_806D2270_00001048:
    lwz r4, 0x28(r1)
    addi r3, r1, 0x18
    stw r28, 0x30(r1)
    subi r0, r4, 0x1
    stw r0, 0x28(r1)
    stw r28, 0x34(r1)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    bl OSCalendarTimeToTicks
    mr r19, r4
    mr r21, r3
lbl_fn_806D2270_00001074:
    bl OSGetTime
    subfc r0, r4, r19
    stw r0, 0x1c4(r27)
    subfe r0, r3, r21
    mr r5, r24
    stw r0, 0x1c0(r27)
    addi r4, r25, 0x734
    addi r6, r1, 0x40
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_000010A4:
    addi r3, r25, 0x748
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x748
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_00001128
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x748
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x748
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r24, r3
    mr r4, r29
    addi r3, r27, 0x17b
    bl strcpy
    mr r5, r24
    mr r6, r29
    addi r4, r25, 0x754
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_00001128:
    addi r3, r25, 0x768
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x768
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_000011AC
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x768
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x768
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r24, r3
    mr r4, r29
    addi r3, r27, 0x4
    bl strcpy
    mr r5, r24
    mr r6, r29
    addi r4, r25, 0x770
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_000011AC:
    addi r3, r25, 0x780
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x780
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_00001230
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x780
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x780
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r24, r3
    mr r4, r29
    addi r3, r27, 0x131
    bl strcpy
    mr r5, r24
    mr r6, r29
    addi r4, r25, 0x78c
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_00001230:
    addi r3, r25, 0x7a0
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x7a0
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_000012D0
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x7a0
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x7a0
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r24, r3
    mr r3, r29
    addi r4, r25, 0x7a8
    addi r5, r27, 0x1b0
    crclr 6
    bl fn_806820D4
    lwz r7, 0x1b0(r27)
    mr r5, r24
    lwz r8, 0x1b4(r27)
    addi r4, r25, 0x7b0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r0, 0x1b0(r27)
    lwz r3, 0x1b4(r27)
    stw r3, 0x4(r30)
    stw r0, 0x360(r26)
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_000012D0:
    addi r3, r25, 0x7c4
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x7c4
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_00001354
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x7c4
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x7c4
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r24, r3
    mr r4, r29
    addi r3, r31, 0x4
    bl strcpy
    mr r5, r24
    mr r6, r29
    addi r4, r25, 0x7d0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_00001354:
    addi r3, r25, 0x7e4
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x7e4
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_000013D8
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x7e4
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x7e4
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r24, r3
    mr r4, r29
    addi r3, r31, 0x45
    bl strcpy
    mr r5, r24
    mr r6, r29
    addi r4, r25, 0x7f4
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_000013D8:
    addi r3, r25, 0x80c
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x80c
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_00001468
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x80c
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x80c
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r24, r3
    lbz r0, 0x40(r1)
    cmpwi r0, 0x59
    bne lbl_fn_806D2270_00001448
    stw r20, 0x1d0(r26)
    b lbl_fn_806D2270_0000144C
lbl_fn_806D2270_00001448:
    stw r28, 0x1d0(r26)
lbl_fn_806D2270_0000144C:
    mr r5, r24
    addi r4, r25, 0x818
    addi r6, r1, 0x40
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_00001468:
    addi r3, r25, 0x830
    bl strlen
    mr r5, r3
    mr r3, r24
    addi r4, r25, 0x830
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D2270_000014D0
    mr r3, r24
    bl strlen
    mr r21, r3
    addi r3, r25, 0x830
    bl strlen
    subf r21, r3, r21
    addi r3, r25, 0x830
    bl strlen
    mr r4, r21
    add r3, r24, r3
    addi r5, r1, 0x40
    li r6, 0x100
    bl fn_806A6E40
    stbx r28, r29, r3
    mr r4, r29
    addi r3, r26, 0x390
    bl strcpy
    b lbl_fn_806D2270_000014E4
lbl_fn_806D2270_000014D0:
    mr r5, r24
    addi r4, r25, 0x83c
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
lbl_fn_806D2270_000014E4:
    mr r4, r23
    li r3, 0x0
    bl fn_806826A0
    mr r24, r3
lbl_fn_806D2270_000014F4:
    cmplw r24, r28
    bne lbl_fn_806D2270_00000EA0
lbl_fn_806D2270_000014FC:
    cmpwi r22, 0x0
    beq lbl_fn_806D2270_00001608
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xa
    bl fn_80684514
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_fn_806D2270_00001550
    lwz r4, 0x380(r26)
    lwz r0, 0x59c8(r4)
    cmpwi r0, 0x3
    beq lbl_fn_806D2270_00001550
    addi r4, r25, 0x854
    addi r5, r1, 0x8
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r0, -0x4e85
    stw r0, 0x0(r26)
    b lbl_fn_806D2270_0000162C
lbl_fn_806D2270_00001550:
    cmpwi r3, 0x1
    bne lbl_fn_806D2270_0000158C
    lwz r4, 0x380(r26)
    lwz r0, 0x59c8(r4)
    cmpwi r0, 0x3
    bne lbl_fn_806D2270_0000158C
    addi r4, r25, 0x870
    addi r5, r1, 0x8
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lis r3, 0xffff
    addi r0, r3, 0x7f17
    stw r0, 0x0(r26)
    b lbl_fn_806D2270_0000162C
lbl_fn_806D2270_0000158C:
    cmpwi cr6, r3, 0x64
    blt cr6, lbl_fn_806D2270_000015E0
    lwz r3, 0x380(r26)
    lwz r0, 0x59c8(r3)
    cmpwi r0, 0x3
    bne lbl_fn_806D2270_000015C0
    bne cr6, lbl_fn_806D2270_000015C0
    mr r5, r19
    addi r4, r25, 0x890
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D2270_000015E0
lbl_fn_806D2270_000015C0:
    mr r5, r19
    addi r4, r25, 0x8cc
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    subfic r0, r19, -0x4e20
    stw r0, 0x0(r26)
    b lbl_fn_806D2270_0000162C
lbl_fn_806D2270_000015E0:
    cmpwi r19, 0x28
    bne lbl_fn_806D2270_000015F8
    addi r3, r26, 0x0
    li r0, 0x2
    stw r0, 0x1b8(r3)
    b lbl_fn_806D2270_00001624
lbl_fn_806D2270_000015F8:
    addi r3, r26, 0x0
    li r0, 0x1
    stw r0, 0x1b8(r3)
    b lbl_fn_806D2270_00001624
lbl_fn_806D2270_00001608:
    addi r4, r25, 0x8e8
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r0, -0x4e85
    stw r0, 0x0(r26)
    b lbl_fn_806D2270_0000162C
lbl_fn_806D2270_00001624:
    li r0, 0x1
    stw r0, 0x0(r26)
lbl_fn_806D2270_0000162C:
    addi r11, r1, 0x180
    bl _restgpr_19
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_806D2BD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C26D8@ha
    lis r3, 0x100
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807C26D8@l
    stw r31, 0xc(r1)
    crclr 6
    bl fn_806A76B0
    lis r31, lbl_80860C40@ha
    li r3, 0x0
    lwz r4, lbl_80860C40@l(r31)
    li r5, 0x0
    lwz r12, 0x5b18(r4)
    mtctr r12
    bctrl
    lis r3, lbl_80860C44@ha
    li r4, 0x0
    li r0, 0x19
    stw r4, lbl_80860C40@l(r31)
    stw r0, lbl_80860C44@l(r3)
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D2C40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x1b
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    lis r31, lbl_808608C0@ha
    addi r31, r31, lbl_808608C0@l
    lwz r7, 0x380(r31)
    stw r0, 0x59b8(r7)
    beq lbl_fn_806D2C40_0000170C
    lwz r8, 0x380(r31)
    lwz r0, 0x59bc(r8)
    cmpwi r0, -0x3
    bne lbl_fn_806D2C40_0000170C
    lwz r7, 0x59b4(r8)
    cmpwi r7, 0x5
    bge lbl_fn_806D2C40_0000170C
    addi r0, r7, 0x1
    stw r0, 0x59b4(r8)
    stw r4, 0x384(r31)
    b lbl_fn_806D2C40_000017D4
lbl_fn_806D2C40_0000170C:
    lwz r4, 0x380(r31)
    li r0, 0x0
    stw r0, 0x59b4(r4)
    lwz r4, 0x380(r31)
    lwz r0, 0x59bc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806D2C40_00001730
    stw r3, 0x384(r31)
    b lbl_fn_806D2C40_000017D4
lbl_fn_806D2C40_00001730:
    cmpwi r5, 0x1b
    beq lbl_fn_806D2C40_00001748
    cmpwi r0, -0xc
    bne lbl_fn_806D2C40_00001748
    stw r5, 0x384(r31)
    b lbl_fn_806D2C40_000017D4
lbl_fn_806D2C40_00001748:
    cmpwi r6, 0x1b
    beq lbl_fn_806D2C40_00001760
    cmpwi r0, -0x1
    bne lbl_fn_806D2C40_00001760
    stw r6, 0x384(r31)
    b lbl_fn_806D2C40_000017D4
lbl_fn_806D2C40_00001760:
    lis r4, lbl_807C26F0@ha
    mr r5, r0
    addi r4, r4, lbl_807C26F0@l
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r5, 0x380(r31)
    lis r4, lbl_807C26D8@ha
    addi r4, r4, lbl_807C26D8@l
    lis r3, 0x100
    lwz r6, 0x59bc(r5)
    addi r5, r6, 0x4
    subfic r0, r6, -0x4
    nor r0, r5, r0
    srawi r5, r0, 31
    subi r0, r5, 0x7148
    stw r0, 0x0(r31)
    crclr 6
    bl fn_806A76B0
    lwz r4, 0x380(r31)
    li r3, 0x0
    li r5, 0x0
    lwz r12, 0x5b18(r4)
    mtctr r12
    bctrl
    li r3, 0x0
    li r0, 0x19
    stw r3, 0x380(r31)
    stw r0, 0x384(r31)
lbl_fn_806D2C40_000017D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D2D80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r9, lbl_807C2710@ha
    li r0, 0x0
    addi r9, r9, lbl_807C2710@l
    mr r25, r3
    stw r0, 0xc(r9)
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    bl strlen
    cmplwi r3, 0x20
    blt lbl_fn_806D2D80_00001844
    li r3, 0x0
    b lbl_fn_806D2D80_000019AC
lbl_fn_806D2D80_00001844:
    mr r3, r26
    bl strlen
    cmplwi r3, 0x14
    beq lbl_fn_806D2D80_0000185C
    li r3, 0x0
    b lbl_fn_806D2D80_000019AC
lbl_fn_806D2D80_0000185C:
    subi r0, r27, 0x5
    clrlwi. r0, r0, 29
    beq lbl_fn_806D2D80_00001870
    li r3, 0x0
    b lbl_fn_806D2D80_000019AC
lbl_fn_806D2D80_00001870:
    clrlwi. r0, r28, 31
    bne lbl_fn_806D2D80_00001880
    li r3, 0x0
    b lbl_fn_806D2D80_000019AC
lbl_fn_806D2D80_00001880:
    li r0, 0x4
    li r4, 0x0
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_806D2D80_00001894:
    srw r0, r29, r3
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806D2D80_000018A8
    addi r4, r4, 0x1
lbl_fn_806D2D80_000018A8:
    addi r3, r3, 0x1
    srw r0, r29, r3
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806D2D80_000018C0
    addi r4, r4, 0x1
lbl_fn_806D2D80_000018C0:
    addi r3, r3, 0x1
    srw r0, r29, r3
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806D2D80_000018D8
    addi r4, r4, 0x1
lbl_fn_806D2D80_000018D8:
    addi r3, r3, 0x1
    srw r0, r29, r3
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806D2D80_000018F0
    addi r4, r4, 0x1
lbl_fn_806D2D80_000018F0:
    addi r3, r3, 0x1
    srw r0, r29, r3
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806D2D80_00001908
    addi r4, r4, 0x1
lbl_fn_806D2D80_00001908:
    addi r3, r3, 0x1
    srw r0, r29, r3
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806D2D80_00001920
    addi r4, r4, 0x1
lbl_fn_806D2D80_00001920:
    addi r3, r3, 0x1
    srw r0, r29, r3
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806D2D80_00001938
    addi r4, r4, 0x1
lbl_fn_806D2D80_00001938:
    addi r3, r3, 0x1
    srw r0, r29, r3
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_806D2D80_00001950
    addi r4, r4, 0x1
lbl_fn_806D2D80_00001950:
    addi r3, r3, 0x1
    bdnz lbl_fn_806D2D80_00001894
    cmpwi r4, 0x1
    beq lbl_fn_806D2D80_00001968
    li r3, 0x0
    b lbl_fn_806D2D80_000019AC
lbl_fn_806D2D80_00001968:
    lis r31, lbl_807C2710@ha
    mr r4, r25
    addi r31, r31, lbl_807C2710@l
    li r5, 0x20
    addi r3, r31, 0x10
    bl fn_8068236C
    mr r4, r26
    addi r3, r31, 0x30
    li r5, 0x14
    bl memcpy
    li r0, 0x1
    stw r27, 0x44(r31)
    li r3, 0x1
    stw r28, 0x48(r31)
    stw r29, 0x4c(r31)
    stw r30, 0x50(r31)
    stw r0, 0xc(r31)
lbl_fn_806D2D80_000019AC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D2F50(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_24
    lis r8, lbl_8076B638@ha
    lwzu r7, lbl_8076B638@l(r8)
    mr r25, r3
    lis r31, lbl_807C2710@ha
    lwz r6, 0x4(r8)
    cmpwi r4, 0x28
    lwz r5, 0x8(r8)
    mr r26, r4
    lwz r3, 0xc(r8)
    addi r31, r31, lbl_807C2710@l
    lbz r0, 0x10(r8)
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r3, 0x14(r1)
    stb r0, 0x18(r1)
    bgt lbl_fn_806D2F50_00001A34
    addi r4, r31, 0xa0
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806D2F50_00001C5C
lbl_fn_806D2F50_00001A34:
    lis r3, 0xaaab
    subi r28, r4, 0x28
    subi r0, r3, 0x5555
    mulhwu r4, r0, r28
    li r3, 0x8
    mulhwu r0, r0, r28
    srwi r4, r4, 1
    mulli r4, r4, 0x3
    srwi r29, r0, 1
    subf r30, r4, r28
    neg r0, r30
    or r0, r0, r30
    srwi r0, r0, 31
    add r0, r29, r0
    slwi r4, r0, 2
    addi r4, r4, 0x29
    bl fn_806A72E0
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806D2F50_00001A9C
    addi r4, r31, 0xb4
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806D2F50_00001C5C
lbl_fn_806D2F50_00001A9C:
    addi r24, r31, 0x0
    li r5, 0x14
    addi r4, r24, 0x30
    bl memcpy
    mr r3, r25
    mr r5, r28
    addi r4, r27, 0x14
    li r6, 0x2
    bl fn_806D9380
    neg r0, r30
    addi r4, r24, 0x30
    or r0, r0, r30
    li r5, 0x14
    srwi r0, r0, 31
    add r0, r29, r0
    slwi r0, r0, 2
    add r3, r27, r0
    addi r3, r3, 0x14
    bl memcpy
    neg r0, r30
    mr r4, r27
    or r0, r0, r30
    addi r3, r1, 0x1c
    srwi r0, r0, 31
    add r0, r29, r0
    slwi r5, r0, 2
    addi r5, r5, 0x28
    bl fn_806AA7E0
    mr r4, r27
    li r3, 0x8
    li r5, 0x0
    bl fn_806A7400
    li r0, 0x4
    addi r4, r1, 0x1c
    addi r3, r1, 0x8
    li r6, 0x0
    li r5, 0x0
    mtctr r0
lbl_fn_806D2F50_00001B34:
    lbz r8, 0x0(r4)
    addi r11, r1, 0x30
    lbz r7, 0x1(r4)
    addi r9, r6, 0x1
    srawi r0, r8, 4
    clrlwi r8, r8, 28
    lbzx r0, r3, r0
    addi r24, r1, 0x30
    stbux r0, r11, r5
    srawi r0, r7, 4
    lbzx r10, r3, r8
    clrlwi r8, r7, 28
    stb r10, 0x1(r11)
    slwi r7, r9, 1
    addi r10, r1, 0x30
    lbzx r9, r3, r0
    add r10, r10, r7
    lbz r0, 0x2(r4)
    stb r9, 0x0(r10)
    addi r7, r6, 0x2
    lbzx r9, r3, r8
    srawi r8, r0, 4
    clrlwi r12, r0, 28
    stb r9, 0x1(r10)
    slwi r9, r7, 1
    lbzx r27, r3, r8
    add r24, r24, r9
    lbz r7, 0x3(r4)
    addi r0, r6, 0x3
    stb r27, 0x0(r24)
    lbzx r12, r3, r12
    srawi r10, r7, 4
    slwi r11, r0, 1
    addi r29, r1, 0x30
    addi r8, r6, 0x4
    lbz r0, 0x4(r4)
    clrlwi r9, r7, 28
    add r29, r29, r11
    srawi r7, r0, 4
    clrlwi r0, r0, 28
    stb r12, 0x1(r24)
    slwi r8, r8, 1
    lbzx r10, r3, r10
    addi r11, r1, 0x30
    stb r10, 0x0(r29)
    addi r4, r4, 0x5
    lbzx r9, r3, r9
    addi r5, r5, 0xa
    stb r9, 0x1(r29)
    addi r6, r6, 0x5
    lbzx r7, r3, r7
    stbux r7, r11, r8
    lbzx r0, r3, r0
    stb r0, 0x1(r11)
    bdnz lbl_fn_806D2F50_00001B34
    add r3, r26, r25
    li r0, 0x0
    stb r0, 0x58(r1)
    subi r3, r3, 0x28
    addi r4, r1, 0x30
    li r5, 0x28
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_806D2F50_00001C4C
    addi r4, r31, 0xc8
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806D2F50_00001C5C
lbl_fn_806D2F50_00001C4C:
    addi r4, r31, 0x0
    li r3, 0x1
    stw r25, 0x68(r4)
    stw r28, 0x6c(r4)
lbl_fn_806D2F50_00001C5C:
    addi r11, r1, 0x80
    bl _restgpr_24
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806D3200(void)
{
    nofralloc
    blr
}

asm void fn_806D3210(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, -0x1
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    lis r30, lbl_807C2710@ha
    addi r30, r30, lbl_807C2710@l
    stw r29, 0x54(r1)
    addi r31, r30, 0x0
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    lwz r3, 0x0(r30)
    stw r0, 0x8(r31)
    cmpwi r3, 0x1
    beq lbl_fn_806D3210_00002040
    cmpwi r5, 0x0
    bne lbl_fn_806D3210_0000201C
    cmpwi r3, 0x5
    beq lbl_fn_806D3210_00001CE4
    cmpwi r3, 0x7
    beq lbl_fn_806D3210_00001EEC
    b lbl_fn_806D3210_00002040
lbl_fn_806D3210_00001CE4:
    cmpwi r4, 0x20
    bne lbl_fn_806D3210_00001EA8
    lis r10, lbl_8076B64C@ha
    lwzu r9, lbl_8076B64C@l(r10)
    lwz r4, 0x58(r31)
    addi r3, r1, 0x1c
    lwz r8, 0x4(r10)
    li r5, 0x14
    lwz r7, 0x8(r10)
    addi r29, r4, 0x14
    lwz r6, 0xc(r10)
    addi r4, r31, 0x30
    lbz r0, 0x10(r10)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    stb r0, 0x18(r1)
    bl memcpy
    mr r4, r28
    addi r3, r1, 0x30
    li r5, 0x20
    bl memcpy
    mr r3, r29
    addi r4, r1, 0x1c
    li r5, 0x34
    bl fn_806AA7E0
    li r0, 0x4
    addi r3, r1, 0x8
    li r9, 0x0
    li r4, 0x0
    mtctr r0
lbl_fn_806D3210_00001D64:
    lbzx r10, r29, r9
    addi r0, r9, 0x1
    addi r6, r9, 0x2
    addi r7, r9, 0x3
    srawi r11, r10, 4
    lwz r10, 0x58(r31)
    lbzx r11, r3, r11
    addi r8, r9, 0x4
    stbx r11, r10, r4
    add r5, r29, r9
    slwi r0, r0, 1
    slwi r6, r6, 1
    lbzx r11, r29, r9
    slwi r7, r7, 1
    lwz r10, 0x58(r31)
    slwi r8, r8, 1
    clrlwi r11, r11, 28
    addi r9, r9, 0x5
    add r10, r10, r4
    lbzx r11, r3, r11
    stb r11, 0x1(r10)
    addi r4, r4, 0xa
    lbz r11, 0x1(r5)
    lwz r10, 0x58(r31)
    srawi r11, r11, 4
    lbzx r11, r3, r11
    stbx r11, r10, r0
    lbz r11, 0x1(r5)
    lwz r10, 0x58(r31)
    clrlwi r11, r11, 28
    add r10, r10, r0
    lbzx r0, r3, r11
    stb r0, 0x1(r10)
    lbz r0, 0x2(r5)
    lwz r10, 0x58(r31)
    srawi r0, r0, 4
    lbzx r0, r3, r0
    stbx r0, r10, r6
    lbz r10, 0x2(r5)
    lwz r0, 0x58(r31)
    clrlwi r10, r10, 28
    add r6, r0, r6
    lbzx r0, r3, r10
    stb r0, 0x1(r6)
    lbz r0, 0x3(r5)
    lwz r6, 0x58(r31)
    srawi r0, r0, 4
    lbzx r0, r3, r0
    stbx r0, r6, r7
    lbz r6, 0x3(r5)
    lwz r0, 0x58(r31)
    clrlwi r10, r6, 28
    add r6, r0, r7
    lbzx r0, r3, r10
    stb r0, 0x1(r6)
    lbz r0, 0x4(r5)
    lwz r6, 0x58(r31)
    srawi r0, r0, 4
    lbzx r0, r3, r0
    stbx r0, r6, r8
    lbz r5, 0x4(r5)
    lwz r0, 0x58(r31)
    clrlwi r6, r5, 28
    add r5, r0, r8
    lbzx r0, r3, r6
    stb r0, 0x1(r5)
    bdnz lbl_fn_806D3210_00001D64
    addi r3, r30, 0xd8
    li r29, 0x26
    bl strlen
    addi r6, r30, 0x0
    li r5, 0x29
    lwz r0, 0x58(r6)
    subf r4, r3, r0
    addi r3, r6, 0x74
    stb r29, 0x0(r4)
    lwz r4, 0x58(r6)
    bl fn_8068236C
    li r0, 0x6
    stw r0, 0x0(r30)
    b lbl_fn_806D3210_00001EE0
lbl_fn_806D3210_00001EA8:
    mr r5, r29
    addi r4, r30, 0xe0
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3210_00001ED8
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3210_00001ED8:
    li r0, 0x1
    stw r0, 0x0(r30)
lbl_fn_806D3210_00001EE0:
    mr r3, r28
    bl fn_806A75C0
    b lbl_fn_806D3210_00002040
lbl_fn_806D3210_00001EEC:
    addi r3, r30, 0x100
    bl strlen
    mr r5, r3
    mr r3, r28
    addi r4, r30, 0x100
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D3210_00001F50
    mr r5, r28
    addi r4, r30, 0x108
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    bl fn_806A75C0
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3210_00001F44
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3210_00001F44:
    li r0, 0x1
    stw r0, 0x0(r30)
    b lbl_fn_806D3210_00002040
lbl_fn_806D3210_00001F50:
    lwz r3, 0x60(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806D3210_00001F68
    bl fn_806A75C0
    li r0, 0x0
    stw r0, 0x60(r31)
lbl_fn_806D3210_00001F68:
    mr r3, r28
    mr r4, r29
    bl fn_806D2F50
    cmpwi r3, 0x0
    bne lbl_fn_806D3210_00001FAC
    mr r3, r28
    bl fn_806A75C0
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3210_00001FA0
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3210_00001FA0:
    li r0, 0x1
    stw r0, 0x0(r30)
    b lbl_fn_806D3210_00002040
lbl_fn_806D3210_00001FAC:
    addi r3, r30, 0x0
    lwz r12, 0x70(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806D3210_00002004
    mr r3, r28
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806D3210_00002004
    mr r3, r28
    bl fn_806A75C0
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3210_00001FF8
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3210_00001FF8:
    li r0, 0x1
    stw r0, 0x0(r30)
    b lbl_fn_806D3210_00002040
lbl_fn_806D3210_00002004:
    addi r3, r30, 0x0
    li r0, 0x8
    stw r28, 0x60(r3)
    stw r29, 0x64(r3)
    stw r0, 0x0(r30)
    b lbl_fn_806D3210_00002040
lbl_fn_806D3210_0000201C:
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3210_00002038
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3210_00002038:
    li r0, 0x1
    stw r0, 0x0(r30)
lbl_fn_806D3210_00002040:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
