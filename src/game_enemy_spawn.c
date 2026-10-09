#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void fn_80092814(void);
extern void fn_800D246C(void);
extern void fn_80101524(void);
extern void fn_801067D0(void);
extern void fn_80107F20(void);
extern void fn_80107FC8(void);
extern void fn_80108F38(void);
extern void fn_8012DD70(void);
extern void fn_8015EFAC(void);
extern void fn_8016624C(void);
extern void fn_80166544(void);
extern void fn_80166760(void);
extern void fn_8016676C(void);
extern void fn_80166A54(void);
extern void fn_80166D3C(void);
extern void fn_80167038(void);
extern void fn_80167344(void);
extern void fn_80167640(void);
extern void fn_8016794C(void);
extern void fn_80167C34(void);
extern void fn_80167F1C(void);
extern void fn_80168048(void);
extern void fn_80168170(void);
extern void fn_80168190(void);
extern void fn_801684A0(void);
extern void fn_80168788(void);
extern void fn_801687D8(void);
extern void fn_80168E04(void);
extern void fn_80168E60(void);
extern void fn_80168E80(void);
extern void fn_80168EC0(void);
extern void fn_80168F3C(void);
extern void fn_80168F5C(void);
extern void fn_80168F94(void);
extern void fn_801781B0(void);

/* External data declarations */
extern u8 lbl_80737380[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_80881900;
extern u32 lbl_8088190C;
extern u32 lbl_80881910;
extern u32 lbl_80881940;
extern u32 lbl_80881944;

/* Function declarations */
void fn_8012F3D8(void);
void fn_8012F440(void);

asm void fn_8012F3D8(void)
{
    nofralloc
    lwz r4, 0x2f0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8012F3D8_00000018
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_8012F3D8_00000020
lbl_fn_8012F3D8_00000018:
    li r3, 0x0
    blr
lbl_fn_8012F3D8_00000020:
    lfs f1, 0x42c(r3)
    lfs f0, lbl_80881900
    fcmpo cr0, f1, f0
    bge lbl_fn_8012F3D8_00000038
    li r3, 0x0
    blr
lbl_fn_8012F3D8_00000038:
    lfs f0, lbl_80881944
    fcmpo cr0, f1, f0
    bge lbl_fn_8012F3D8_0000004C
    li r3, 0x1
    blr
lbl_fn_8012F3D8_0000004C:
    lfs f0, lbl_80881940
    fcmpo cr0, f1, f0
    bge lbl_fn_8012F3D8_00000060
    li r3, 0x2
    blr
lbl_fn_8012F3D8_00000060:
    li r3, 0x3
    blr
}

asm void fn_8012F440(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_21
    cmpwi r7, 0x0
    lwz r30, 0xc(r3)
    mr r21, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r8
    mr r26, r9
    mr r27, r10
    ble lbl_fn_8012F440_00000210
    lwz r5, 0x10(r3)
    rlwinm r8, r30, 0, 28, 26
    li r0, 0x4
    stw r8, 0xc(r3)
    rlwinm r7, r5, 0, 28, 26
    mr r10, r21
    stw r7, 0x10(r3)
    li r8, 0x0
    li r5, 0x0
    li r7, 0x1
    mtctr r0
lbl_fn_8012F440_000000D0:
    slw r11, r7, r8
    rlwinm r0, r11, 0, 27, 27
    cmplw r11, r0
    bne lbl_fn_8012F440_000000E4
    stw r5, 0x24c(r10)
lbl_fn_8012F440_000000E4:
    addi r8, r8, 0x1
    slw r11, r7, r8
    rlwinm r0, r11, 0, 27, 27
    cmplw r11, r0
    bne lbl_fn_8012F440_000000FC
    stw r5, 0x250(r10)
lbl_fn_8012F440_000000FC:
    addi r8, r8, 0x1
    slw r11, r7, r8
    rlwinm r0, r11, 0, 27, 27
    cmplw r11, r0
    bne lbl_fn_8012F440_00000114
    stw r5, 0x254(r10)
lbl_fn_8012F440_00000114:
    addi r8, r8, 0x1
    slw r11, r7, r8
    rlwinm r0, r11, 0, 27, 27
    cmplw r11, r0
    bne lbl_fn_8012F440_0000012C
    stw r5, 0x258(r10)
lbl_fn_8012F440_0000012C:
    addi r8, r8, 0x1
    slw r11, r7, r8
    rlwinm r0, r11, 0, 27, 27
    cmplw r11, r0
    bne lbl_fn_8012F440_00000144
    stw r5, 0x25c(r10)
lbl_fn_8012F440_00000144:
    addi r8, r8, 0x1
    slw r11, r7, r8
    rlwinm r0, r11, 0, 27, 27
    cmplw r11, r0
    bne lbl_fn_8012F440_0000015C
    stw r5, 0x260(r10)
lbl_fn_8012F440_0000015C:
    addi r8, r8, 0x1
    slw r11, r7, r8
    rlwinm r0, r11, 0, 27, 27
    cmplw r11, r0
    bne lbl_fn_8012F440_00000174
    stw r5, 0x264(r10)
lbl_fn_8012F440_00000174:
    addi r8, r8, 0x1
    slw r11, r7, r8
    rlwinm r0, r11, 0, 27, 27
    cmplw r11, r0
    bne lbl_fn_8012F440_0000018C
    stw r5, 0x268(r10)
lbl_fn_8012F440_0000018C:
    addi r10, r10, 0x20
    addi r8, r8, 0x1
    bdnz lbl_fn_8012F440_000000D0
    lwz r7, 0x2f0(r3)
    cmpwi r7, 0x0
    beq lbl_fn_8012F440_00000210
    lwz r5, 0xc(r3)
    li r8, 0x0
    lwz r0, 0x10(r3)
    li r10, 0x0
    rlwinm r5, r5, 0, 12, 10
    stw r5, 0xc(r3)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r3)
    b lbl_fn_8012F440_00000204
lbl_fn_8012F440_000001C8:
    add r5, r7, r10
    lwz r5, 0x654(r5)
    lwz r5, 0x274(r5)
    lwz r0, 0xf0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000001FC
    lwz r5, 0xc(r3)
    lwz r0, 0x10(r3)
    oris r5, r5, 0x10
    stw r5, 0xc(r3)
    oris r0, r0, 0x10
    stw r0, 0x10(r3)
    b lbl_fn_8012F440_00000210
lbl_fn_8012F440_000001FC:
    addi r10, r10, 0x4
    addi r8, r8, 0x1
lbl_fn_8012F440_00000204:
    lwz r0, 0x650(r7)
    cmplw r8, r0
    blt lbl_fn_8012F440_000001C8
lbl_fn_8012F440_00000210:
    cmpwi r6, 0x0
    beq lbl_fn_8012F440_00000548
    cmpwi r9, 0x0
    bne lbl_fn_8012F440_0000022C
    lwz r0, 0x10(r3)
    and. r0, r0, r4
    bne lbl_fn_8012F440_000003A4
lbl_fn_8012F440_0000022C:
    lwz r6, 0xc(r3)
    nor r9, r4, r4
    lwz r5, 0x10(r3)
    li r0, 0x4
    and r7, r6, r9
    stw r7, 0xc(r3)
    and r6, r5, r9
    mr r8, r21
    stw r6, 0x10(r3)
    li r7, 0x0
    li r5, 0x0
    li r6, 0x1
    mtctr r0
lbl_fn_8012F440_00000260:
    slw r9, r6, r7
    and r0, r9, r4
    cmplw r9, r0
    bne lbl_fn_8012F440_00000274
    stw r5, 0x24c(r8)
lbl_fn_8012F440_00000274:
    addi r7, r7, 0x1
    slw r9, r6, r7
    and r0, r9, r4
    cmplw r9, r0
    bne lbl_fn_8012F440_0000028C
    stw r5, 0x250(r8)
lbl_fn_8012F440_0000028C:
    addi r7, r7, 0x1
    slw r9, r6, r7
    and r0, r9, r4
    cmplw r9, r0
    bne lbl_fn_8012F440_000002A4
    stw r5, 0x254(r8)
lbl_fn_8012F440_000002A4:
    addi r7, r7, 0x1
    slw r9, r6, r7
    and r0, r9, r4
    cmplw r9, r0
    bne lbl_fn_8012F440_000002BC
    stw r5, 0x258(r8)
lbl_fn_8012F440_000002BC:
    addi r7, r7, 0x1
    slw r9, r6, r7
    and r0, r9, r4
    cmplw r9, r0
    bne lbl_fn_8012F440_000002D4
    stw r5, 0x25c(r8)
lbl_fn_8012F440_000002D4:
    addi r7, r7, 0x1
    slw r9, r6, r7
    and r0, r9, r4
    cmplw r9, r0
    bne lbl_fn_8012F440_000002EC
    stw r5, 0x260(r8)
lbl_fn_8012F440_000002EC:
    addi r7, r7, 0x1
    slw r9, r6, r7
    and r0, r9, r4
    cmplw r9, r0
    bne lbl_fn_8012F440_00000304
    stw r5, 0x264(r8)
lbl_fn_8012F440_00000304:
    addi r7, r7, 0x1
    slw r9, r6, r7
    and r0, r9, r4
    cmplw r9, r0
    bne lbl_fn_8012F440_0000031C
    stw r5, 0x268(r8)
lbl_fn_8012F440_0000031C:
    addi r8, r8, 0x20
    addi r7, r7, 0x1
    bdnz lbl_fn_8012F440_00000260
    lwz r5, 0x2f0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8012F440_00000568
    lwz r4, 0xc(r3)
    li r6, 0x0
    lwz r0, 0x10(r3)
    li r7, 0x0
    rlwinm r4, r4, 0, 12, 10
    stw r4, 0xc(r3)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r3)
    b lbl_fn_8012F440_00000394
lbl_fn_8012F440_00000358:
    add r4, r5, r7
    lwz r4, 0x654(r4)
    lwz r4, 0x274(r4)
    lwz r0, 0xf0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_0000038C
    lwz r4, 0xc(r3)
    lwz r0, 0x10(r3)
    oris r4, r4, 0x10
    stw r4, 0xc(r3)
    oris r0, r0, 0x10
    stw r0, 0x10(r3)
    b lbl_fn_8012F440_00000568
lbl_fn_8012F440_0000038C:
    addi r7, r7, 0x4
    addi r6, r6, 0x1
lbl_fn_8012F440_00000394:
    lwz r0, 0x650(r5)
    cmplw r6, r0
    blt lbl_fn_8012F440_00000358
    b lbl_fn_8012F440_00000568
lbl_fn_8012F440_000003A4:
    li r5, 0x0
    li r9, 0x0
    li r10, 0x1
    li r0, 0x4
lbl_fn_8012F440_000003B4:
    slw r12, r10, r5
    and r6, r12, r4
    cmplw r12, r6
    bne lbl_fn_8012F440_00000538
    lwz r8, 0x10(r3)
    and r6, r12, r8
    cmplw r12, r6
    beq lbl_fn_8012F440_00000538
    lwz r7, 0xc(r3)
    nor r11, r12, r12
    and r6, r8, r11
    mr r8, r21
    and r7, r7, r11
    stw r7, 0xc(r3)
    li r7, 0x0
    stw r6, 0x10(r3)
    mtctr r0
lbl_fn_8012F440_000003F8:
    slw r11, r10, r7
    and r6, r11, r12
    cmplw r11, r6
    bne lbl_fn_8012F440_0000040C
    stw r9, 0x24c(r8)
lbl_fn_8012F440_0000040C:
    addi r7, r7, 0x1
    slw r11, r10, r7
    and r6, r11, r12
    cmplw r11, r6
    bne lbl_fn_8012F440_00000424
    stw r9, 0x250(r8)
lbl_fn_8012F440_00000424:
    addi r7, r7, 0x1
    slw r11, r10, r7
    and r6, r11, r12
    cmplw r11, r6
    bne lbl_fn_8012F440_0000043C
    stw r9, 0x254(r8)
lbl_fn_8012F440_0000043C:
    addi r7, r7, 0x1
    slw r11, r10, r7
    and r6, r11, r12
    cmplw r11, r6
    bne lbl_fn_8012F440_00000454
    stw r9, 0x258(r8)
lbl_fn_8012F440_00000454:
    addi r7, r7, 0x1
    slw r11, r10, r7
    and r6, r11, r12
    cmplw r11, r6
    bne lbl_fn_8012F440_0000046C
    stw r9, 0x25c(r8)
lbl_fn_8012F440_0000046C:
    addi r7, r7, 0x1
    slw r11, r10, r7
    and r6, r11, r12
    cmplw r11, r6
    bne lbl_fn_8012F440_00000484
    stw r9, 0x260(r8)
lbl_fn_8012F440_00000484:
    addi r7, r7, 0x1
    slw r11, r10, r7
    and r6, r11, r12
    cmplw r11, r6
    bne lbl_fn_8012F440_0000049C
    stw r9, 0x264(r8)
lbl_fn_8012F440_0000049C:
    addi r7, r7, 0x1
    slw r11, r10, r7
    and r6, r11, r12
    cmplw r11, r6
    bne lbl_fn_8012F440_000004B4
    stw r9, 0x268(r8)
lbl_fn_8012F440_000004B4:
    addi r8, r8, 0x20
    addi r7, r7, 0x1
    bdnz lbl_fn_8012F440_000003F8
    lwz r8, 0x2f0(r3)
    cmpwi r8, 0x0
    beq lbl_fn_8012F440_00000538
    lwz r7, 0xc(r3)
    li r11, 0x0
    lwz r6, 0x10(r3)
    li r12, 0x0
    rlwinm r7, r7, 0, 12, 10
    stw r7, 0xc(r3)
    rlwinm r6, r6, 0, 12, 10
    stw r6, 0x10(r3)
    b lbl_fn_8012F440_0000052C
lbl_fn_8012F440_000004F0:
    add r6, r8, r12
    lwz r6, 0x654(r6)
    lwz r6, 0x274(r6)
    lwz r6, 0xf0(r6)
    cmpwi r6, 0x0
    beq lbl_fn_8012F440_00000524
    lwz r7, 0xc(r3)
    lwz r6, 0x10(r3)
    oris r7, r7, 0x10
    stw r7, 0xc(r3)
    oris r6, r6, 0x10
    stw r6, 0x10(r3)
    b lbl_fn_8012F440_00000538
lbl_fn_8012F440_00000524:
    addi r12, r12, 0x4
    addi r11, r11, 0x1
lbl_fn_8012F440_0000052C:
    lwz r6, 0x650(r8)
    cmplw r11, r6
    blt lbl_fn_8012F440_000004F0
lbl_fn_8012F440_00000538:
    addi r5, r5, 0x1
    cmpwi r5, 0x20
    blt lbl_fn_8012F440_000003B4
    b lbl_fn_8012F440_00000568
lbl_fn_8012F440_00000548:
    lwz r0, 0xc(r3)
    cmpwi r9, 0x0
    or r0, r0, r4
    stw r0, 0xc(r3)
    beq lbl_fn_8012F440_00000568
    lwz r0, 0x10(r3)
    or r0, r0, r4
    stw r0, 0x10(r3)
lbl_fn_8012F440_00000568:
    rlwinm r31, r30, 0, 26, 26
    lwz r4, 0x18(r3)
    lwz r0, 0x240(r3)
    cmplwi r31, 0x20
    li r29, 0x0
    or r28, r4, r0
    bne lbl_fn_8012F440_000005E4
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8012F440_000005E4
    lwz r3, 0x2f0(r3)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x2f0(r21)
    li r0, 0x0
    stw r0, 0x58c(r3)
    lwz r3, 0x2f0(r21)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012F440_000005C8
    li r4, 0x2d
    bl fn_8015EFAC
    b lbl_fn_8012F440_000005D0
lbl_fn_8012F440_000005C8:
    li r4, 0xf
    bl fn_8015EFAC
lbl_fn_8012F440_000005D0:
    lwz r3, 0x300(r21)
    cmpwi r3, 0x0
    ble lbl_fn_8012F440_000005E4
    subi r0, r3, 0x1
    stw r0, 0x300(r21)
lbl_fn_8012F440_000005E4:
    cmplwi r31, 0x20
    beq lbl_fn_8012F440_0000060C
    lwz r3, 0xc(r21)
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8012F440_0000060C
    rlwinm r0, r3, 0, 27, 25
    stw r0, 0xc(r21)
    mr r3, r21
    bl fn_8012DD70
lbl_fn_8012F440_0000060C:
    clrlwi r3, r30, 31
    cmplwi r3, 0x1
    bne lbl_fn_8012F440_00000634
    lwz r0, 0xc(r21)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8012F440_00000634
    lwz r3, 0x2f0(r21)
    bl fn_80168048
    b lbl_fn_8012F440_000009F0
lbl_fn_8012F440_00000634:
    cmplwi r3, 0x1
    beq lbl_fn_8012F440_000009F0
    lwz r3, 0xc(r21)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_8012F440_000009F0
    clrlwi. r0, r28, 31
    bne lbl_fn_8012F440_0000087C
    lwz r4, 0x2f0(r21)
    lwz r0, 0x12a4(r4)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_8012F440_0000087C
    cmpwi r25, 0x0
    beq lbl_fn_8012F440_0000076C
    cmpwi r26, 0x0
    ori r0, r3, 0x1
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_0000068C
    lwz r0, 0x10(r21)
    ori r0, r0, 0x1
    stw r0, 0x10(r21)
lbl_fn_8012F440_0000068C:
    li r0, 0x4
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_000006A0:
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_000006B4
    stw r3, 0x24c(r5)
lbl_fn_8012F440_000006B4:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_000006CC
    stw r3, 0x250(r5)
lbl_fn_8012F440_000006CC:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_000006E4
    stw r3, 0x254(r5)
lbl_fn_8012F440_000006E4:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_000006FC
    stw r3, 0x258(r5)
lbl_fn_8012F440_000006FC:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_00000714
    stw r3, 0x25c(r5)
lbl_fn_8012F440_00000714:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_0000072C
    stw r3, 0x260(r5)
lbl_fn_8012F440_0000072C:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_00000744
    stw r3, 0x264(r5)
lbl_fn_8012F440_00000744:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_0000075C
    stw r3, 0x268(r5)
lbl_fn_8012F440_0000075C:
    addi r5, r5, 0x20
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_000006A0
    b lbl_fn_8012F440_00000844
lbl_fn_8012F440_0000076C:
    cmpwi r26, 0x0
    ori r0, r3, 0x1
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_00000788
    lwz r0, 0x10(r21)
    ori r0, r0, 0x1
    stw r0, 0x10(r21)
lbl_fn_8012F440_00000788:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_0000079C:
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_000007C0
    cmpwi r23, 0x0
    li r0, 0x384
    ble lbl_fn_8012F440_000007BC
    mr r0, r23
lbl_fn_8012F440_000007BC:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_000007C0:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_000007E8
    cmpwi r23, 0x0
    li r0, 0x384
    ble lbl_fn_8012F440_000007E4
    mr r0, r23
lbl_fn_8012F440_000007E4:
    stw r0, 0x250(r5)
lbl_fn_8012F440_000007E8:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_00000810
    cmpwi r23, 0x0
    li r0, 0x384
    ble lbl_fn_8012F440_0000080C
    mr r0, r23
lbl_fn_8012F440_0000080C:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00000810:
    addi r4, r4, 0x1
    slw r6, r3, r4
    clrlwi r0, r6, 31
    cmplw r6, r0
    bne lbl_fn_8012F440_00000838
    cmpwi r23, 0x0
    li r0, 0x384
    ble lbl_fn_8012F440_00000834
    mr r0, r23
lbl_fn_8012F440_00000834:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00000838:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_0000079C
lbl_fn_8012F440_00000844:
    lwz r3, 0x2f0(r21)
    bl fn_80167F1C
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00000874
    lwz r29, lbl_8087F048
    addi r3, r1, 0xe0
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r29
    addi r4, r1, 0xe0
    li r5, 0x1
    bl fn_80108F38
lbl_fn_8012F440_00000874:
    li r29, 0x1
    b lbl_fn_8012F440_000009F0
lbl_fn_8012F440_0000087C:
    lwz r4, 0xc(r21)
    li r0, 0x4
    lwz r3, 0x10(r21)
    mr r6, r21
    clrrwi r4, r4, 1
    stw r4, 0xc(r21)
    clrrwi r3, r3, 1
    li r5, 0x0
    stw r3, 0x10(r21)
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_000008AC:
    slw r7, r4, r5
    clrlwi r0, r7, 31
    cmplw r7, r0
    bne lbl_fn_8012F440_000008C0
    stw r3, 0x24c(r6)
lbl_fn_8012F440_000008C0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    clrlwi r0, r7, 31
    cmplw r7, r0
    bne lbl_fn_8012F440_000008D8
    stw r3, 0x250(r6)
lbl_fn_8012F440_000008D8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    clrlwi r0, r7, 31
    cmplw r7, r0
    bne lbl_fn_8012F440_000008F0
    stw r3, 0x254(r6)
lbl_fn_8012F440_000008F0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    clrlwi r0, r7, 31
    cmplw r7, r0
    bne lbl_fn_8012F440_00000908
    stw r3, 0x258(r6)
lbl_fn_8012F440_00000908:
    addi r5, r5, 0x1
    slw r7, r4, r5
    clrlwi r0, r7, 31
    cmplw r7, r0
    bne lbl_fn_8012F440_00000920
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00000920:
    addi r5, r5, 0x1
    slw r7, r4, r5
    clrlwi r0, r7, 31
    cmplw r7, r0
    bne lbl_fn_8012F440_00000938
    stw r3, 0x260(r6)
lbl_fn_8012F440_00000938:
    addi r5, r5, 0x1
    slw r7, r4, r5
    clrlwi r0, r7, 31
    cmplw r7, r0
    bne lbl_fn_8012F440_00000950
    stw r3, 0x264(r6)
lbl_fn_8012F440_00000950:
    addi r5, r5, 0x1
    slw r7, r4, r5
    clrlwi r0, r7, 31
    cmplw r7, r0
    bne lbl_fn_8012F440_00000968
    stw r3, 0x268(r6)
lbl_fn_8012F440_00000968:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_000008AC
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_000009EC
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000009E0
lbl_fn_8012F440_000009A4:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000009D8
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000009EC
lbl_fn_8012F440_000009D8:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_000009E0:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_000009A4
lbl_fn_8012F440_000009EC:
    li r29, -0x1
lbl_fn_8012F440_000009F0:
    rlwinm r4, r30, 0, 9, 9
    subis r0, r4, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00000A20
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00000A20
    lwz r3, 0x2f0(r21)
    bl fn_80168190
    b lbl_fn_8012F440_00000CCC
lbl_fn_8012F440_00000A20:
    subis r0, r4, 0x40
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00000CCC
    lwz r4, 0xc(r21)
    rlwinm r3, r4, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00000CCC
    rlwinm r0, r28, 0, 9, 9
    rlwimi. r0, r28, 0, 31, 31
    bne lbl_fn_8012F440_00000B5C
    cmpwi r26, 0x0
    oris r0, r4, 0x40
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_00000A68
    lwz r0, 0x10(r21)
    oris r0, r0, 0x40
    stw r0, 0x10(r21)
lbl_fn_8012F440_00000A68:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_00000A7C:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 9, 9
    cmplw r6, r0
    bne lbl_fn_8012F440_00000AA0
    cmpwi r23, 0x0
    li r0, 0x384
    ble lbl_fn_8012F440_00000A9C
    mr r0, r23
lbl_fn_8012F440_00000A9C:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_00000AA0:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 9, 9
    cmplw r6, r0
    bne lbl_fn_8012F440_00000AC8
    cmpwi r23, 0x0
    li r0, 0x384
    ble lbl_fn_8012F440_00000AC4
    mr r0, r23
lbl_fn_8012F440_00000AC4:
    stw r0, 0x250(r5)
lbl_fn_8012F440_00000AC8:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 9, 9
    cmplw r6, r0
    bne lbl_fn_8012F440_00000AF0
    cmpwi r23, 0x0
    li r0, 0x384
    ble lbl_fn_8012F440_00000AEC
    mr r0, r23
lbl_fn_8012F440_00000AEC:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00000AF0:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 9, 9
    cmplw r6, r0
    bne lbl_fn_8012F440_00000B18
    cmpwi r23, 0x0
    li r0, 0x384
    ble lbl_fn_8012F440_00000B14
    mr r0, r23
lbl_fn_8012F440_00000B14:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00000B18:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_00000A7C
    lwz r3, 0x2f0(r21)
    bl fn_80168170
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00000B54
    lwz r29, lbl_8087F048
    addi r3, r1, 0xd4
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r29
    addi r4, r1, 0xd4
    lis r5, 0x40
    bl fn_80108F38
lbl_fn_8012F440_00000B54:
    li r29, 0x1
    b lbl_fn_8012F440_00000CCC
lbl_fn_8012F440_00000B5C:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 10, 8
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 10, 8
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00000B88:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 9, 9
    cmplw r7, r0
    bne lbl_fn_8012F440_00000B9C
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00000B9C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 9, 9
    cmplw r7, r0
    bne lbl_fn_8012F440_00000BB4
    stw r3, 0x250(r6)
lbl_fn_8012F440_00000BB4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 9, 9
    cmplw r7, r0
    bne lbl_fn_8012F440_00000BCC
    stw r3, 0x254(r6)
lbl_fn_8012F440_00000BCC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 9, 9
    cmplw r7, r0
    bne lbl_fn_8012F440_00000BE4
    stw r3, 0x258(r6)
lbl_fn_8012F440_00000BE4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 9, 9
    cmplw r7, r0
    bne lbl_fn_8012F440_00000BFC
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00000BFC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 9, 9
    cmplw r7, r0
    bne lbl_fn_8012F440_00000C14
    stw r3, 0x260(r6)
lbl_fn_8012F440_00000C14:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 9, 9
    cmplw r7, r0
    bne lbl_fn_8012F440_00000C2C
    stw r3, 0x264(r6)
lbl_fn_8012F440_00000C2C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 9, 9
    cmplw r7, r0
    bne lbl_fn_8012F440_00000C44
    stw r3, 0x268(r6)
lbl_fn_8012F440_00000C44:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00000B88
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00000CC8
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00000CBC
lbl_fn_8012F440_00000C80:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00000CB4
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00000CC8
lbl_fn_8012F440_00000CB4:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00000CBC:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00000C80
lbl_fn_8012F440_00000CC8:
    li r29, -0x1
lbl_fn_8012F440_00000CCC:
    rlwinm r3, r30, 0, 16, 16
    cmplwi r3, 0x8000
    bne lbl_fn_8012F440_00000CF4
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    beq lbl_fn_8012F440_00000CF4
    lwz r3, 0x2f0(r21)
    bl fn_801687D8
    b lbl_fn_8012F440_00000F98
lbl_fn_8012F440_00000CF4:
    cmplwi r3, 0x8000
    beq lbl_fn_8012F440_00000F98
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8012F440_00000F98
    rlwinm. r0, r28, 0, 16, 16
    bne lbl_fn_8012F440_00000E28
    cmpwi r26, 0x0
    ori r0, r4, 0x8000
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_00000D30
    lwz r0, 0x10(r21)
    ori r0, r0, 0x8000
    stw r0, 0x10(r21)
lbl_fn_8012F440_00000D30:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_00000D44:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 16, 16
    cmplw r6, r0
    bne lbl_fn_8012F440_00000D68
    cmpwi r23, 0x0
    li r0, 0x12c
    ble lbl_fn_8012F440_00000D64
    mr r0, r23
lbl_fn_8012F440_00000D64:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_00000D68:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 16, 16
    cmplw r6, r0
    bne lbl_fn_8012F440_00000D90
    cmpwi r23, 0x0
    li r0, 0x12c
    ble lbl_fn_8012F440_00000D8C
    mr r0, r23
lbl_fn_8012F440_00000D8C:
    stw r0, 0x250(r5)
lbl_fn_8012F440_00000D90:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 16, 16
    cmplw r6, r0
    bne lbl_fn_8012F440_00000DB8
    cmpwi r23, 0x0
    li r0, 0x12c
    ble lbl_fn_8012F440_00000DB4
    mr r0, r23
lbl_fn_8012F440_00000DB4:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00000DB8:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 16, 16
    cmplw r6, r0
    bne lbl_fn_8012F440_00000DE0
    cmpwi r23, 0x0
    li r0, 0x12c
    ble lbl_fn_8012F440_00000DDC
    mr r0, r23
lbl_fn_8012F440_00000DDC:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00000DE0:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_00000D44
    lwz r3, 0x2f0(r21)
    bl fn_80168788
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00000E20
    lwz r29, lbl_8087F048
    addi r3, r1, 0xc8
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    lis r5, 0x1
    mr r3, r29
    addi r4, r1, 0xc8
    addi r5, r5, -0x8000
    bl fn_80108F38
lbl_fn_8012F440_00000E20:
    li r29, 0x1
    b lbl_fn_8012F440_00000F98
lbl_fn_8012F440_00000E28:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 17, 15
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 17, 15
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00000E54:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 16, 16
    cmplw r7, r0
    bne lbl_fn_8012F440_00000E68
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00000E68:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 16, 16
    cmplw r7, r0
    bne lbl_fn_8012F440_00000E80
    stw r3, 0x250(r6)
lbl_fn_8012F440_00000E80:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 16, 16
    cmplw r7, r0
    bne lbl_fn_8012F440_00000E98
    stw r3, 0x254(r6)
lbl_fn_8012F440_00000E98:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 16, 16
    cmplw r7, r0
    bne lbl_fn_8012F440_00000EB0
    stw r3, 0x258(r6)
lbl_fn_8012F440_00000EB0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 16, 16
    cmplw r7, r0
    bne lbl_fn_8012F440_00000EC8
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00000EC8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 16, 16
    cmplw r7, r0
    bne lbl_fn_8012F440_00000EE0
    stw r3, 0x260(r6)
lbl_fn_8012F440_00000EE0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 16, 16
    cmplw r7, r0
    bne lbl_fn_8012F440_00000EF8
    stw r3, 0x264(r6)
lbl_fn_8012F440_00000EF8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 16, 16
    cmplw r7, r0
    bne lbl_fn_8012F440_00000F10
    stw r3, 0x268(r6)
lbl_fn_8012F440_00000F10:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00000E54
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00000F94
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00000F88
lbl_fn_8012F440_00000F4C:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00000F80
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00000F94
lbl_fn_8012F440_00000F80:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00000F88:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00000F4C
lbl_fn_8012F440_00000F94:
    li r29, -0x1
lbl_fn_8012F440_00000F98:
    rlwinm r3, r30, 0, 23, 23
    cmplwi r3, 0x100
    bne lbl_fn_8012F440_00000FC0
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8012F440_00000FC0
    lwz r3, 0x2f0(r21)
    bl fn_80167038
    b lbl_fn_8012F440_000011E8
lbl_fn_8012F440_00000FC0:
    cmplwi r3, 0x100
    beq lbl_fn_8012F440_000011E8
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8012F440_000011E8
    rlwinm. r0, r28, 0, 23, 23
    bne lbl_fn_8012F440_00001074
    rlwinm r0, r4, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8012F440_00001074
    rlwinm r3, r4, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00001074
    rlwinm r0, r4, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_8012F440_00001074
    lwz r3, 0x2f0(r21)
    lwz r0, 0x48(r3)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8012F440_00001074
    cmpwi r0, 0x2
    bne lbl_fn_8012F440_00001030
    li r4, 0x0
    bl fn_80166D3C
    li r29, 0x1
    b lbl_fn_8012F440_00001048
lbl_fn_8012F440_00001030:
    beq cr1, lbl_fn_8012F440_0000103C
    cmpwi r0, 0x3
    bne lbl_fn_8012F440_00001048
lbl_fn_8012F440_0000103C:
    li r4, 0x1
    bl fn_80166D3C
    li r29, 0x1
lbl_fn_8012F440_00001048:
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_000011E8
    lwz r31, lbl_8087F048
    addi r3, r1, 0xbc
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r31
    addi r4, r1, 0xbc
    li r5, 0x100
    bl fn_80108F38
    b lbl_fn_8012F440_000011E8
lbl_fn_8012F440_00001074:
    lwz r4, 0xc(r21)
    li r0, 0x4
    lwz r3, 0x10(r21)
    mr r6, r21
    rlwinm r4, r4, 0, 24, 22
    stw r4, 0xc(r21)
    rlwinm r3, r3, 0, 24, 22
    li r5, 0x0
    stw r3, 0x10(r21)
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_000010A4:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 23, 23
    cmplw r7, r0
    bne lbl_fn_8012F440_000010B8
    stw r3, 0x24c(r6)
lbl_fn_8012F440_000010B8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 23, 23
    cmplw r7, r0
    bne lbl_fn_8012F440_000010D0
    stw r3, 0x250(r6)
lbl_fn_8012F440_000010D0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 23, 23
    cmplw r7, r0
    bne lbl_fn_8012F440_000010E8
    stw r3, 0x254(r6)
lbl_fn_8012F440_000010E8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 23, 23
    cmplw r7, r0
    bne lbl_fn_8012F440_00001100
    stw r3, 0x258(r6)
lbl_fn_8012F440_00001100:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 23, 23
    cmplw r7, r0
    bne lbl_fn_8012F440_00001118
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00001118:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 23, 23
    cmplw r7, r0
    bne lbl_fn_8012F440_00001130
    stw r3, 0x260(r6)
lbl_fn_8012F440_00001130:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 23, 23
    cmplw r7, r0
    bne lbl_fn_8012F440_00001148
    stw r3, 0x264(r6)
lbl_fn_8012F440_00001148:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 23, 23
    cmplw r7, r0
    bne lbl_fn_8012F440_00001160
    stw r3, 0x268(r6)
lbl_fn_8012F440_00001160:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_000010A4
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_000011E4
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000011D8
lbl_fn_8012F440_0000119C:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000011D0
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000011E4
lbl_fn_8012F440_000011D0:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_000011D8:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_0000119C
lbl_fn_8012F440_000011E4:
    li r29, -0x1
lbl_fn_8012F440_000011E8:
    rlwinm r3, r30, 0, 25, 25
    cmplwi r3, 0x40
    bne lbl_fn_8012F440_00001210
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8012F440_00001210
    lwz r3, 0x2f0(r21)
    bl fn_80166544
    b lbl_fn_8012F440_000013F0
lbl_fn_8012F440_00001210:
    cmplwi r3, 0x40
    beq lbl_fn_8012F440_000013F0
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8012F440_000013F0
    rlwinm. r0, r28, 0, 25, 25
    bne lbl_fn_8012F440_00001280
    cmpwi r25, 0x0
    beq lbl_fn_8012F440_00001248
    lwz r3, 0x2f0(r21)
    li r4, 0x1
    bl fn_8016624C
    b lbl_fn_8012F440_00001250
lbl_fn_8012F440_00001248:
    lwz r3, 0x2f0(r21)
    bl fn_80166760
lbl_fn_8012F440_00001250:
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00001278
    lwz r25, lbl_8087F048
    addi r3, r1, 0xb0
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r25
    addi r4, r1, 0xb0
    li r5, 0x40
    bl fn_80108F38
lbl_fn_8012F440_00001278:
    li r29, 0x1
    b lbl_fn_8012F440_000013F0
lbl_fn_8012F440_00001280:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 26, 24
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 26, 24
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_000012AC:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 25, 25
    cmplw r7, r0
    bne lbl_fn_8012F440_000012C0
    stw r3, 0x24c(r6)
lbl_fn_8012F440_000012C0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 25, 25
    cmplw r7, r0
    bne lbl_fn_8012F440_000012D8
    stw r3, 0x250(r6)
lbl_fn_8012F440_000012D8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 25, 25
    cmplw r7, r0
    bne lbl_fn_8012F440_000012F0
    stw r3, 0x254(r6)
lbl_fn_8012F440_000012F0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 25, 25
    cmplw r7, r0
    bne lbl_fn_8012F440_00001308
    stw r3, 0x258(r6)
lbl_fn_8012F440_00001308:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 25, 25
    cmplw r7, r0
    bne lbl_fn_8012F440_00001320
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00001320:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 25, 25
    cmplw r7, r0
    bne lbl_fn_8012F440_00001338
    stw r3, 0x260(r6)
lbl_fn_8012F440_00001338:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 25, 25
    cmplw r7, r0
    bne lbl_fn_8012F440_00001350
    stw r3, 0x264(r6)
lbl_fn_8012F440_00001350:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 25, 25
    cmplw r7, r0
    bne lbl_fn_8012F440_00001368
    stw r3, 0x268(r6)
lbl_fn_8012F440_00001368:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_000012AC
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_000013EC
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000013E0
lbl_fn_8012F440_000013A4:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000013D8
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000013EC
lbl_fn_8012F440_000013D8:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_000013E0:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_000013A4
lbl_fn_8012F440_000013EC:
    li r29, -0x1
lbl_fn_8012F440_000013F0:
    rlwinm r31, r30, 0, 24, 24
    cmplwi r31, 0x80
    bne lbl_fn_8012F440_00001418
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_8012F440_00001418
    lwz r3, 0x2f0(r21)
    bl fn_80166A54
    b lbl_fn_8012F440_0000170C
lbl_fn_8012F440_00001418:
    cmpwi r24, 0x0
    bne lbl_fn_8012F440_0000170C
    rlwinm r0, r22, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_8012F440_0000170C
    rlwinm. r0, r28, 0, 24, 24
    bne lbl_fn_8012F440_00001598
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8012F440_00001598
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8012F440_00001598
    rlwinm r0, r4, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8012F440_00001598
    rlwinm r3, r4, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00001598
    rlwinm r0, r4, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_8012F440_00001598
    cmpwi r26, 0x0
    ori r0, r4, 0x80
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_00001494
    lwz r0, 0x10(r21)
    ori r0, r0, 0x80
    stw r0, 0x10(r21)
lbl_fn_8012F440_00001494:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_000014A8:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 24, 24
    cmplw r6, r0
    bne lbl_fn_8012F440_000014CC
    cmpwi r23, 0x0
    li r0, 0x96
    ble lbl_fn_8012F440_000014C8
    mr r0, r23
lbl_fn_8012F440_000014C8:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_000014CC:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 24, 24
    cmplw r6, r0
    bne lbl_fn_8012F440_000014F4
    cmpwi r23, 0x0
    li r0, 0x96
    ble lbl_fn_8012F440_000014F0
    mr r0, r23
lbl_fn_8012F440_000014F0:
    stw r0, 0x250(r5)
lbl_fn_8012F440_000014F4:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 24, 24
    cmplw r6, r0
    bne lbl_fn_8012F440_0000151C
    cmpwi r23, 0x0
    li r0, 0x96
    ble lbl_fn_8012F440_00001518
    mr r0, r23
lbl_fn_8012F440_00001518:
    stw r0, 0x254(r5)
lbl_fn_8012F440_0000151C:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 24, 24
    cmplw r6, r0
    bne lbl_fn_8012F440_00001544
    cmpwi r23, 0x0
    li r0, 0x96
    ble lbl_fn_8012F440_00001540
    mr r0, r23
lbl_fn_8012F440_00001540:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00001544:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_000014A8
    cmplwi r31, 0x80
    beq lbl_fn_8012F440_00001560
    lwz r3, 0x2f0(r21)
    bl fn_8016676C
lbl_fn_8012F440_00001560:
    cmplwi r31, 0x80
    beq lbl_fn_8012F440_00001590
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00001590
    lwz r22, lbl_8087F048
    addi r3, r1, 0xa4
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0xa4
    li r5, 0x80
    bl fn_80108F38
lbl_fn_8012F440_00001590:
    li r29, 0x1
    b lbl_fn_8012F440_0000170C
lbl_fn_8012F440_00001598:
    lwz r4, 0xc(r21)
    li r0, 0x4
    lwz r3, 0x10(r21)
    mr r6, r21
    rlwinm r4, r4, 0, 25, 23
    stw r4, 0xc(r21)
    rlwinm r3, r3, 0, 25, 23
    li r5, 0x0
    stw r3, 0x10(r21)
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_000015C8:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 24, 24
    cmplw r7, r0
    bne lbl_fn_8012F440_000015DC
    stw r3, 0x24c(r6)
lbl_fn_8012F440_000015DC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 24, 24
    cmplw r7, r0
    bne lbl_fn_8012F440_000015F4
    stw r3, 0x250(r6)
lbl_fn_8012F440_000015F4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 24, 24
    cmplw r7, r0
    bne lbl_fn_8012F440_0000160C
    stw r3, 0x254(r6)
lbl_fn_8012F440_0000160C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 24, 24
    cmplw r7, r0
    bne lbl_fn_8012F440_00001624
    stw r3, 0x258(r6)
lbl_fn_8012F440_00001624:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 24, 24
    cmplw r7, r0
    bne lbl_fn_8012F440_0000163C
    stw r3, 0x25c(r6)
lbl_fn_8012F440_0000163C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 24, 24
    cmplw r7, r0
    bne lbl_fn_8012F440_00001654
    stw r3, 0x260(r6)
lbl_fn_8012F440_00001654:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 24, 24
    cmplw r7, r0
    bne lbl_fn_8012F440_0000166C
    stw r3, 0x264(r6)
lbl_fn_8012F440_0000166C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 24, 24
    cmplw r7, r0
    bne lbl_fn_8012F440_00001684
    stw r3, 0x268(r6)
lbl_fn_8012F440_00001684:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_000015C8
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00001708
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000016FC
lbl_fn_8012F440_000016C0:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000016F4
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00001708
lbl_fn_8012F440_000016F4:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_000016FC:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_000016C0
lbl_fn_8012F440_00001708:
    li r29, -0x1
lbl_fn_8012F440_0000170C:
    rlwinm r4, r30, 0, 15, 15
    subis r0, r4, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_0000173C
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_0000173C
    lwz r3, 0x2f0(r21)
    bl fn_80167640
    b lbl_fn_8012F440_0000197C
lbl_fn_8012F440_0000173C:
    subis r0, r4, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_0000197C
    lwz r4, 0xc(r21)
    rlwinm r3, r4, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_0000197C
    rlwinm. r0, r28, 0, 15, 15
    bne lbl_fn_8012F440_00001808
    rlwinm r0, r4, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8012F440_00001808
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8012F440_00001808
    rlwinm r0, r4, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8012F440_00001808
    rlwinm r0, r4, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_8012F440_00001808
    rlwinm r0, r4, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_8012F440_00001808
    lwz r3, 0x2f0(r21)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8012F440_000017C0
    li r4, 0x0
    bl fn_80167344
    li r29, 0x1
    b lbl_fn_8012F440_000017DC
lbl_fn_8012F440_000017C0:
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000017D0
    cmpwi r0, 0x3
    bne lbl_fn_8012F440_000017DC
lbl_fn_8012F440_000017D0:
    li r4, 0x1
    bl fn_80167344
    li r29, 0x1
lbl_fn_8012F440_000017DC:
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_0000197C
    lwz r22, lbl_8087F048
    addi r3, r1, 0x98
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x98
    lis r5, 0x1
    bl fn_80108F38
    b lbl_fn_8012F440_0000197C
lbl_fn_8012F440_00001808:
    lwz r4, 0xc(r21)
    li r0, 0x4
    lwz r3, 0x10(r21)
    mr r6, r21
    rlwinm r4, r4, 0, 16, 14
    stw r4, 0xc(r21)
    rlwinm r3, r3, 0, 16, 14
    li r5, 0x0
    stw r3, 0x10(r21)
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00001838:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 15, 15
    cmplw r7, r0
    bne lbl_fn_8012F440_0000184C
    stw r3, 0x24c(r6)
lbl_fn_8012F440_0000184C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 15, 15
    cmplw r7, r0
    bne lbl_fn_8012F440_00001864
    stw r3, 0x250(r6)
lbl_fn_8012F440_00001864:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 15, 15
    cmplw r7, r0
    bne lbl_fn_8012F440_0000187C
    stw r3, 0x254(r6)
lbl_fn_8012F440_0000187C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 15, 15
    cmplw r7, r0
    bne lbl_fn_8012F440_00001894
    stw r3, 0x258(r6)
lbl_fn_8012F440_00001894:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 15, 15
    cmplw r7, r0
    bne lbl_fn_8012F440_000018AC
    stw r3, 0x25c(r6)
lbl_fn_8012F440_000018AC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 15, 15
    cmplw r7, r0
    bne lbl_fn_8012F440_000018C4
    stw r3, 0x260(r6)
lbl_fn_8012F440_000018C4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 15, 15
    cmplw r7, r0
    bne lbl_fn_8012F440_000018DC
    stw r3, 0x264(r6)
lbl_fn_8012F440_000018DC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 15, 15
    cmplw r7, r0
    bne lbl_fn_8012F440_000018F4
    stw r3, 0x268(r6)
lbl_fn_8012F440_000018F4:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00001838
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00001978
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_0000196C
lbl_fn_8012F440_00001930:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00001964
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00001978
lbl_fn_8012F440_00001964:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_0000196C:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00001930
lbl_fn_8012F440_00001978:
    li r29, -0x1
lbl_fn_8012F440_0000197C:
    rlwinm r3, r30, 0, 27, 27
    cmplwi r3, 0x10
    bne lbl_fn_8012F440_000019BC
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_8012F440_000019BC
    lwz r3, 0x2f0(r21)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8012F440_00001B84
    lwz r0, 0x560(r3)
    cmpwi r0, 0x6a
    bne lbl_fn_8012F440_00001B84
    bl fn_80167C34
    b lbl_fn_8012F440_00001B84
lbl_fn_8012F440_000019BC:
    cmplwi r3, 0x10
    beq lbl_fn_8012F440_00001B84
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8012F440_00001B84
    rlwinm. r0, r28, 0, 27, 27
    bne lbl_fn_8012F440_00001A14
    lwz r3, 0x2f0(r21)
    bl fn_8016794C
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00001A0C
    lwz r22, lbl_8087F048
    addi r3, r1, 0x8c
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x8c
    li r5, 0x10
    bl fn_80108F38
lbl_fn_8012F440_00001A0C:
    li r29, 0x1
    b lbl_fn_8012F440_00001B84
lbl_fn_8012F440_00001A14:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 28, 26
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 28, 26
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00001A40:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 27, 27
    cmplw r7, r0
    bne lbl_fn_8012F440_00001A54
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00001A54:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 27, 27
    cmplw r7, r0
    bne lbl_fn_8012F440_00001A6C
    stw r3, 0x250(r6)
lbl_fn_8012F440_00001A6C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 27, 27
    cmplw r7, r0
    bne lbl_fn_8012F440_00001A84
    stw r3, 0x254(r6)
lbl_fn_8012F440_00001A84:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 27, 27
    cmplw r7, r0
    bne lbl_fn_8012F440_00001A9C
    stw r3, 0x258(r6)
lbl_fn_8012F440_00001A9C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 27, 27
    cmplw r7, r0
    bne lbl_fn_8012F440_00001AB4
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00001AB4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 27, 27
    cmplw r7, r0
    bne lbl_fn_8012F440_00001ACC
    stw r3, 0x260(r6)
lbl_fn_8012F440_00001ACC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 27, 27
    cmplw r7, r0
    bne lbl_fn_8012F440_00001AE4
    stw r3, 0x264(r6)
lbl_fn_8012F440_00001AE4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 27, 27
    cmplw r7, r0
    bne lbl_fn_8012F440_00001AFC
    stw r3, 0x268(r6)
lbl_fn_8012F440_00001AFC:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00001A40
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00001B80
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00001B74
lbl_fn_8012F440_00001B38:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00001B6C
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00001B80
lbl_fn_8012F440_00001B6C:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00001B74:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00001B38
lbl_fn_8012F440_00001B80:
    li r29, -0x1
lbl_fn_8012F440_00001B84:
    rlwinm r3, r30, 0, 17, 17
    cmplwi r3, 0x4000
    bne lbl_fn_8012F440_00001BAC
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8012F440_00001BAC
    lwz r3, 0x2f0(r21)
    bl fn_801684A0
    b lbl_fn_8012F440_00001DB0
lbl_fn_8012F440_00001BAC:
    cmplwi r3, 0x4000
    beq lbl_fn_8012F440_00001DB0
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_8012F440_00001DB0
    rlwinm. r0, r28, 0, 17, 17
    bne lbl_fn_8012F440_00001C3C
    rlwinm r0, r4, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8012F440_00001C3C
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8012F440_00001C3C
    rlwinm r3, r4, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00001C3C
    rlwinm r0, r4, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_8012F440_00001C3C
    rlwinm r0, r4, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_8012F440_00001C3C
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00001C34
    lwz r22, lbl_8087F048
    addi r3, r1, 0x80
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x80
    li r5, 0x4000
    bl fn_80108F38
lbl_fn_8012F440_00001C34:
    li r29, 0x1
    b lbl_fn_8012F440_00001DB0
lbl_fn_8012F440_00001C3C:
    lwz r4, 0xc(r21)
    li r0, 0x4
    lwz r3, 0x10(r21)
    mr r6, r21
    rlwinm r4, r4, 0, 18, 16
    stw r4, 0xc(r21)
    rlwinm r3, r3, 0, 18, 16
    li r5, 0x0
    stw r3, 0x10(r21)
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00001C6C:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 17, 17
    cmplw r7, r0
    bne lbl_fn_8012F440_00001C80
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00001C80:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 17, 17
    cmplw r7, r0
    bne lbl_fn_8012F440_00001C98
    stw r3, 0x250(r6)
lbl_fn_8012F440_00001C98:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 17, 17
    cmplw r7, r0
    bne lbl_fn_8012F440_00001CB0
    stw r3, 0x254(r6)
lbl_fn_8012F440_00001CB0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 17, 17
    cmplw r7, r0
    bne lbl_fn_8012F440_00001CC8
    stw r3, 0x258(r6)
lbl_fn_8012F440_00001CC8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 17, 17
    cmplw r7, r0
    bne lbl_fn_8012F440_00001CE0
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00001CE0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 17, 17
    cmplw r7, r0
    bne lbl_fn_8012F440_00001CF8
    stw r3, 0x260(r6)
lbl_fn_8012F440_00001CF8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 17, 17
    cmplw r7, r0
    bne lbl_fn_8012F440_00001D10
    stw r3, 0x264(r6)
lbl_fn_8012F440_00001D10:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 17, 17
    cmplw r7, r0
    bne lbl_fn_8012F440_00001D28
    stw r3, 0x268(r6)
lbl_fn_8012F440_00001D28:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00001C6C
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00001DAC
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00001DA0
lbl_fn_8012F440_00001D64:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00001D98
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00001DAC
lbl_fn_8012F440_00001D98:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00001DA0:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00001D64
lbl_fn_8012F440_00001DAC:
    li r29, -0x1
lbl_fn_8012F440_00001DB0:
    rlwinm r4, r30, 0, 14, 14
    subis r0, r4, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00001DD4
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00001F74
lbl_fn_8012F440_00001DD4:
    subis r0, r4, 0x2
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00001F74
    lwz r4, 0xc(r21)
    rlwinm r3, r4, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00001F74
    rlwinm. r0, r28, 0, 14, 14
    bne lbl_fn_8012F440_00001E04
    li r29, 0x1
    b lbl_fn_8012F440_00001F74
lbl_fn_8012F440_00001E04:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 15, 13
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 15, 13
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00001E30:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 14, 14
    cmplw r7, r0
    bne lbl_fn_8012F440_00001E44
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00001E44:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 14, 14
    cmplw r7, r0
    bne lbl_fn_8012F440_00001E5C
    stw r3, 0x250(r6)
lbl_fn_8012F440_00001E5C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 14, 14
    cmplw r7, r0
    bne lbl_fn_8012F440_00001E74
    stw r3, 0x254(r6)
lbl_fn_8012F440_00001E74:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 14, 14
    cmplw r7, r0
    bne lbl_fn_8012F440_00001E8C
    stw r3, 0x258(r6)
lbl_fn_8012F440_00001E8C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 14, 14
    cmplw r7, r0
    bne lbl_fn_8012F440_00001EA4
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00001EA4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 14, 14
    cmplw r7, r0
    bne lbl_fn_8012F440_00001EBC
    stw r3, 0x260(r6)
lbl_fn_8012F440_00001EBC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 14, 14
    cmplw r7, r0
    bne lbl_fn_8012F440_00001ED4
    stw r3, 0x264(r6)
lbl_fn_8012F440_00001ED4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 14, 14
    cmplw r7, r0
    bne lbl_fn_8012F440_00001EEC
    stw r3, 0x268(r6)
lbl_fn_8012F440_00001EEC:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00001E30
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00001F70
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00001F64
lbl_fn_8012F440_00001F28:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00001F5C
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00001F70
lbl_fn_8012F440_00001F5C:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00001F64:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00001F28
lbl_fn_8012F440_00001F70:
    li r29, -0x1
lbl_fn_8012F440_00001F74:
    rlwinm r3, r30, 0, 29, 29
    cmplwi r3, 0x4
    bne lbl_fn_8012F440_00001F9C
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8012F440_00001F9C
    lwz r3, 0x2f0(r21)
    bl fn_80168E60
    b lbl_fn_8012F440_0000223C
lbl_fn_8012F440_00001F9C:
    cmplwi r3, 0x4
    beq lbl_fn_8012F440_0000223C
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8012F440_0000223C
    rlwinm. r0, r28, 0, 29, 29
    bne lbl_fn_8012F440_000020CC
    cmpwi r26, 0x0
    ori r0, r4, 0x4
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_00001FD8
    lwz r0, 0x10(r21)
    ori r0, r0, 0x4
    stw r0, 0x10(r21)
lbl_fn_8012F440_00001FD8:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_00001FEC:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 29, 29
    cmplw r6, r0
    bne lbl_fn_8012F440_00002010
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_0000200C
    mr r0, r23
lbl_fn_8012F440_0000200C:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_00002010:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 29, 29
    cmplw r6, r0
    bne lbl_fn_8012F440_00002038
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002034
    mr r0, r23
lbl_fn_8012F440_00002034:
    stw r0, 0x250(r5)
lbl_fn_8012F440_00002038:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 29, 29
    cmplw r6, r0
    bne lbl_fn_8012F440_00002060
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_0000205C
    mr r0, r23
lbl_fn_8012F440_0000205C:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00002060:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 29, 29
    cmplw r6, r0
    bne lbl_fn_8012F440_00002088
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002084
    mr r0, r23
lbl_fn_8012F440_00002084:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00002088:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_00001FEC
    lwz r3, 0x2f0(r21)
    bl fn_80168E04
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_000020C4
    lwz r22, lbl_8087F048
    addi r3, r1, 0x74
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x74
    li r5, 0x4
    bl fn_80108F38
lbl_fn_8012F440_000020C4:
    li r29, 0x1
    b lbl_fn_8012F440_0000223C
lbl_fn_8012F440_000020CC:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 30, 28
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 30, 28
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_000020F8:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 29, 29
    cmplw r7, r0
    bne lbl_fn_8012F440_0000210C
    stw r3, 0x24c(r6)
lbl_fn_8012F440_0000210C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 29, 29
    cmplw r7, r0
    bne lbl_fn_8012F440_00002124
    stw r3, 0x250(r6)
lbl_fn_8012F440_00002124:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 29, 29
    cmplw r7, r0
    bne lbl_fn_8012F440_0000213C
    stw r3, 0x254(r6)
lbl_fn_8012F440_0000213C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 29, 29
    cmplw r7, r0
    bne lbl_fn_8012F440_00002154
    stw r3, 0x258(r6)
lbl_fn_8012F440_00002154:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 29, 29
    cmplw r7, r0
    bne lbl_fn_8012F440_0000216C
    stw r3, 0x25c(r6)
lbl_fn_8012F440_0000216C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 29, 29
    cmplw r7, r0
    bne lbl_fn_8012F440_00002184
    stw r3, 0x260(r6)
lbl_fn_8012F440_00002184:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 29, 29
    cmplw r7, r0
    bne lbl_fn_8012F440_0000219C
    stw r3, 0x264(r6)
lbl_fn_8012F440_0000219C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 29, 29
    cmplw r7, r0
    bne lbl_fn_8012F440_000021B4
    stw r3, 0x268(r6)
lbl_fn_8012F440_000021B4:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_000020F8
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00002238
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_0000222C
lbl_fn_8012F440_000021F0:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00002224
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00002238
lbl_fn_8012F440_00002224:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_0000222C:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_000021F0
lbl_fn_8012F440_00002238:
    li r29, -0x1
lbl_fn_8012F440_0000223C:
    rlwinm r3, r30, 0, 30, 30
    cmplwi r3, 0x2
    bne lbl_fn_8012F440_00002264
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8012F440_00002264
    lwz r3, 0x2f0(r21)
    bl fn_80168E60
    b lbl_fn_8012F440_00002504
lbl_fn_8012F440_00002264:
    cmplwi r3, 0x2
    beq lbl_fn_8012F440_00002504
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8012F440_00002504
    rlwinm. r0, r28, 0, 30, 30
    bne lbl_fn_8012F440_00002394
    cmpwi r26, 0x0
    ori r0, r4, 0x2
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_000022A0
    lwz r0, 0x10(r21)
    ori r0, r0, 0x2
    stw r0, 0x10(r21)
lbl_fn_8012F440_000022A0:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_000022B4:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 30, 30
    cmplw r6, r0
    bne lbl_fn_8012F440_000022D8
    cmpwi r23, 0x0
    li r0, 0x1c2
    ble lbl_fn_8012F440_000022D4
    mr r0, r23
lbl_fn_8012F440_000022D4:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_000022D8:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 30, 30
    cmplw r6, r0
    bne lbl_fn_8012F440_00002300
    cmpwi r23, 0x0
    li r0, 0x1c2
    ble lbl_fn_8012F440_000022FC
    mr r0, r23
lbl_fn_8012F440_000022FC:
    stw r0, 0x250(r5)
lbl_fn_8012F440_00002300:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 30, 30
    cmplw r6, r0
    bne lbl_fn_8012F440_00002328
    cmpwi r23, 0x0
    li r0, 0x1c2
    ble lbl_fn_8012F440_00002324
    mr r0, r23
lbl_fn_8012F440_00002324:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00002328:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 30, 30
    cmplw r6, r0
    bne lbl_fn_8012F440_00002350
    cmpwi r23, 0x0
    li r0, 0x1c2
    ble lbl_fn_8012F440_0000234C
    mr r0, r23
lbl_fn_8012F440_0000234C:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00002350:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_000022B4
    lwz r3, 0x2f0(r21)
    bl fn_80168E80
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_0000238C
    lwz r22, lbl_8087F048
    addi r3, r1, 0x68
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x68
    li r5, 0x2
    bl fn_80108F38
lbl_fn_8012F440_0000238C:
    li r29, 0x1
    b lbl_fn_8012F440_00002504
lbl_fn_8012F440_00002394:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 31, 29
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 31, 29
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_000023C0:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 30, 30
    cmplw r7, r0
    bne lbl_fn_8012F440_000023D4
    stw r3, 0x24c(r6)
lbl_fn_8012F440_000023D4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 30, 30
    cmplw r7, r0
    bne lbl_fn_8012F440_000023EC
    stw r3, 0x250(r6)
lbl_fn_8012F440_000023EC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 30, 30
    cmplw r7, r0
    bne lbl_fn_8012F440_00002404
    stw r3, 0x254(r6)
lbl_fn_8012F440_00002404:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 30, 30
    cmplw r7, r0
    bne lbl_fn_8012F440_0000241C
    stw r3, 0x258(r6)
lbl_fn_8012F440_0000241C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 30, 30
    cmplw r7, r0
    bne lbl_fn_8012F440_00002434
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00002434:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 30, 30
    cmplw r7, r0
    bne lbl_fn_8012F440_0000244C
    stw r3, 0x260(r6)
lbl_fn_8012F440_0000244C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 30, 30
    cmplw r7, r0
    bne lbl_fn_8012F440_00002464
    stw r3, 0x264(r6)
lbl_fn_8012F440_00002464:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 30, 30
    cmplw r7, r0
    bne lbl_fn_8012F440_0000247C
    stw r3, 0x268(r6)
lbl_fn_8012F440_0000247C:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_000023C0
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00002500
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000024F4
lbl_fn_8012F440_000024B8:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000024EC
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00002500
lbl_fn_8012F440_000024EC:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_000024F4:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_000024B8
lbl_fn_8012F440_00002500:
    li r29, -0x1
lbl_fn_8012F440_00002504:
    rlwinm r3, r30, 0, 28, 28
    cmplwi r3, 0x8
    bne lbl_fn_8012F440_00002520
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8012F440_000027D4
lbl_fn_8012F440_00002520:
    cmplwi r3, 0x8
    beq lbl_fn_8012F440_000027D4
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8012F440_000027D4
    rlwinm. r0, r28, 0, 28, 28
    bne lbl_fn_8012F440_00002664
    cmpwi r26, 0x0
    ori r0, r4, 0x8
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_0000255C
    lwz r0, 0x10(r21)
    ori r0, r0, 0x8
    stw r0, 0x10(r21)
lbl_fn_8012F440_0000255C:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_00002570:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 28, 28
    cmplw r6, r0
    bne lbl_fn_8012F440_00002594
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002590
    mr r0, r23
lbl_fn_8012F440_00002590:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_00002594:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 28, 28
    cmplw r6, r0
    bne lbl_fn_8012F440_000025BC
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_000025B8
    mr r0, r23
lbl_fn_8012F440_000025B8:
    stw r0, 0x250(r5)
lbl_fn_8012F440_000025BC:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 28, 28
    cmplw r6, r0
    bne lbl_fn_8012F440_000025E4
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_000025E0
    mr r0, r23
lbl_fn_8012F440_000025E0:
    stw r0, 0x254(r5)
lbl_fn_8012F440_000025E4:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 28, 28
    cmplw r6, r0
    bne lbl_fn_8012F440_0000260C
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002608
    mr r0, r23
lbl_fn_8012F440_00002608:
    stw r0, 0x258(r5)
lbl_fn_8012F440_0000260C:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_00002570
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_0000265C
    rlwinm r0, r30, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8012F440_0000263C
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8012F440_0000265C
lbl_fn_8012F440_0000263C:
    lwz r22, lbl_8087F048
    addi r3, r1, 0x5c
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x5c
    li r5, 0x8
    bl fn_80108F38
lbl_fn_8012F440_0000265C:
    li r29, 0x1
    b lbl_fn_8012F440_000027D4
lbl_fn_8012F440_00002664:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 29, 27
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 29, 27
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00002690:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 28, 28
    cmplw r7, r0
    bne lbl_fn_8012F440_000026A4
    stw r3, 0x24c(r6)
lbl_fn_8012F440_000026A4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 28, 28
    cmplw r7, r0
    bne lbl_fn_8012F440_000026BC
    stw r3, 0x250(r6)
lbl_fn_8012F440_000026BC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 28, 28
    cmplw r7, r0
    bne lbl_fn_8012F440_000026D4
    stw r3, 0x254(r6)
lbl_fn_8012F440_000026D4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 28, 28
    cmplw r7, r0
    bne lbl_fn_8012F440_000026EC
    stw r3, 0x258(r6)
lbl_fn_8012F440_000026EC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 28, 28
    cmplw r7, r0
    bne lbl_fn_8012F440_00002704
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00002704:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 28, 28
    cmplw r7, r0
    bne lbl_fn_8012F440_0000271C
    stw r3, 0x260(r6)
lbl_fn_8012F440_0000271C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 28, 28
    cmplw r7, r0
    bne lbl_fn_8012F440_00002734
    stw r3, 0x264(r6)
lbl_fn_8012F440_00002734:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 28, 28
    cmplw r7, r0
    bne lbl_fn_8012F440_0000274C
    stw r3, 0x268(r6)
lbl_fn_8012F440_0000274C:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00002690
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_000027D0
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000027C4
lbl_fn_8012F440_00002788:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000027BC
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000027D0
lbl_fn_8012F440_000027BC:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_000027C4:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00002788
lbl_fn_8012F440_000027D0:
    li r29, -0x1
lbl_fn_8012F440_000027D4:
    rlwinm r3, r30, 0, 22, 22
    cmplwi r3, 0x200
    bne lbl_fn_8012F440_000027F0
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8012F440_00002A88
lbl_fn_8012F440_000027F0:
    cmplwi r3, 0x200
    beq lbl_fn_8012F440_00002A88
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8012F440_00002A88
    andi. r0, r28, 0x208
    bne lbl_fn_8012F440_00002918
    cmpwi r26, 0x0
    ori r0, r4, 0x200
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_0000282C
    lwz r0, 0x10(r21)
    ori r0, r0, 0x200
    stw r0, 0x10(r21)
lbl_fn_8012F440_0000282C:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_00002840:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 22, 22
    cmplw r6, r0
    bne lbl_fn_8012F440_00002864
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002860
    mr r0, r23
lbl_fn_8012F440_00002860:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_00002864:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 22, 22
    cmplw r6, r0
    bne lbl_fn_8012F440_0000288C
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002888
    mr r0, r23
lbl_fn_8012F440_00002888:
    stw r0, 0x250(r5)
lbl_fn_8012F440_0000288C:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 22, 22
    cmplw r6, r0
    bne lbl_fn_8012F440_000028B4
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_000028B0
    mr r0, r23
lbl_fn_8012F440_000028B0:
    stw r0, 0x254(r5)
lbl_fn_8012F440_000028B4:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 22, 22
    cmplw r6, r0
    bne lbl_fn_8012F440_000028DC
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_000028D8
    mr r0, r23
lbl_fn_8012F440_000028D8:
    stw r0, 0x258(r5)
lbl_fn_8012F440_000028DC:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_00002840
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00002910
    lwz r22, lbl_8087F048
    addi r3, r1, 0x50
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x50
    li r5, 0x200
    bl fn_80108F38
lbl_fn_8012F440_00002910:
    li r29, 0x1
    b lbl_fn_8012F440_00002A88
lbl_fn_8012F440_00002918:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 23, 21
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 23, 21
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00002944:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 22, 22
    cmplw r7, r0
    bne lbl_fn_8012F440_00002958
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00002958:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 22, 22
    cmplw r7, r0
    bne lbl_fn_8012F440_00002970
    stw r3, 0x250(r6)
lbl_fn_8012F440_00002970:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 22, 22
    cmplw r7, r0
    bne lbl_fn_8012F440_00002988
    stw r3, 0x254(r6)
lbl_fn_8012F440_00002988:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 22, 22
    cmplw r7, r0
    bne lbl_fn_8012F440_000029A0
    stw r3, 0x258(r6)
lbl_fn_8012F440_000029A0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 22, 22
    cmplw r7, r0
    bne lbl_fn_8012F440_000029B8
    stw r3, 0x25c(r6)
lbl_fn_8012F440_000029B8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 22, 22
    cmplw r7, r0
    bne lbl_fn_8012F440_000029D0
    stw r3, 0x260(r6)
lbl_fn_8012F440_000029D0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 22, 22
    cmplw r7, r0
    bne lbl_fn_8012F440_000029E8
    stw r3, 0x264(r6)
lbl_fn_8012F440_000029E8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 22, 22
    cmplw r7, r0
    bne lbl_fn_8012F440_00002A00
    stw r3, 0x268(r6)
lbl_fn_8012F440_00002A00:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00002944
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00002A84
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00002A78
lbl_fn_8012F440_00002A3C:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00002A70
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00002A84
lbl_fn_8012F440_00002A70:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00002A78:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00002A3C
lbl_fn_8012F440_00002A84:
    li r29, -0x1
lbl_fn_8012F440_00002A88:
    rlwinm r4, r30, 0, 12, 12
    subis r0, r4, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00002AB8
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00002AB8
    lwz r3, 0x2f0(r21)
    bl fn_80168F3C
    b lbl_fn_8012F440_00002D68
lbl_fn_8012F440_00002AB8:
    subis r0, r4, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00002D68
    lwz r4, 0xc(r21)
    rlwinm r3, r4, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00002D68
    rlwinm. r0, r28, 0, 12, 12
    bne lbl_fn_8012F440_00002BF4
    lwz r4, 0x2f0(r21)
    lwz r3, lbl_8087F048
    addi r5, r4, 0xb0
    bl fn_801067D0
    lwz r0, 0xc(r21)
    cmpwi r26, 0x0
    oris r0, r0, 0x8
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_00002B10
    lwz r0, 0x10(r21)
    oris r0, r0, 0x8
    stw r0, 0x10(r21)
lbl_fn_8012F440_00002B10:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_00002B24:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 12, 12
    cmplw r6, r0
    bne lbl_fn_8012F440_00002B48
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002B44
    mr r0, r23
lbl_fn_8012F440_00002B44:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_00002B48:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 12, 12
    cmplw r6, r0
    bne lbl_fn_8012F440_00002B70
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002B6C
    mr r0, r23
lbl_fn_8012F440_00002B6C:
    stw r0, 0x250(r5)
lbl_fn_8012F440_00002B70:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 12, 12
    cmplw r6, r0
    bne lbl_fn_8012F440_00002B98
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002B94
    mr r0, r23
lbl_fn_8012F440_00002B94:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00002B98:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 12, 12
    cmplw r6, r0
    bne lbl_fn_8012F440_00002BC0
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00002BBC
    mr r0, r23
lbl_fn_8012F440_00002BBC:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00002BC0:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_00002B24
    lwz r3, 0x2f0(r21)
    bl fn_80168EC0
    cmpwi r26, 0x0
    beq lbl_fn_8012F440_00002BE8
    lfs f0, lbl_8088190C
    stfs f0, 0x428(r21)
    b lbl_fn_8012F440_00002D68
lbl_fn_8012F440_00002BE8:
    lfs f0, lbl_80881910
    stfs f0, 0x428(r21)
    b lbl_fn_8012F440_00002D68
lbl_fn_8012F440_00002BF4:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 13, 11
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 13, 11
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00002C20:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 12, 12
    cmplw r7, r0
    bne lbl_fn_8012F440_00002C34
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00002C34:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 12, 12
    cmplw r7, r0
    bne lbl_fn_8012F440_00002C4C
    stw r3, 0x250(r6)
lbl_fn_8012F440_00002C4C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 12, 12
    cmplw r7, r0
    bne lbl_fn_8012F440_00002C64
    stw r3, 0x254(r6)
lbl_fn_8012F440_00002C64:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 12, 12
    cmplw r7, r0
    bne lbl_fn_8012F440_00002C7C
    stw r3, 0x258(r6)
lbl_fn_8012F440_00002C7C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 12, 12
    cmplw r7, r0
    bne lbl_fn_8012F440_00002C94
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00002C94:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 12, 12
    cmplw r7, r0
    bne lbl_fn_8012F440_00002CAC
    stw r3, 0x260(r6)
lbl_fn_8012F440_00002CAC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 12, 12
    cmplw r7, r0
    bne lbl_fn_8012F440_00002CC4
    stw r3, 0x264(r6)
lbl_fn_8012F440_00002CC4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 12, 12
    cmplw r7, r0
    bne lbl_fn_8012F440_00002CDC
    stw r3, 0x268(r6)
lbl_fn_8012F440_00002CDC:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00002C20
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00002D60
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00002D54
lbl_fn_8012F440_00002D18:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00002D4C
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00002D60
lbl_fn_8012F440_00002D4C:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00002D54:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00002D18
lbl_fn_8012F440_00002D60:
    lfs f0, lbl_80881900
    stfs f0, 0x428(r21)
lbl_fn_8012F440_00002D68:
    rlwinm r4, r30, 0, 13, 13
    subis r0, r4, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00002D8C
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00003064
lbl_fn_8012F440_00002D8C:
    subis r0, r4, 0x4
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00003064
    lwz r4, 0xc(r21)
    rlwinm r3, r4, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00003064
    rlwinm. r0, r28, 0, 13, 13
    bne lbl_fn_8012F440_00002EF4
    lwz r4, 0x2f0(r21)
    lwz r3, lbl_8087F048
    addi r5, r4, 0xb0
    bl fn_801067D0
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00002DEC
    lwz r22, lbl_8087F048
    addi r3, r1, 0x44
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x44
    lis r5, 0x4
    bl fn_80108F38
lbl_fn_8012F440_00002DEC:
    lwz r0, 0xc(r21)
    cmpwi r26, 0x0
    oris r0, r0, 0x4
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_00002E0C
    lwz r0, 0x10(r21)
    oris r0, r0, 0x4
    stw r0, 0x10(r21)
lbl_fn_8012F440_00002E0C:
    li r0, 0x4
    mr r6, r21
    li r5, 0x0
    li r3, -0x1
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00002E24:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002E38
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00002E38:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002E50
    stw r3, 0x250(r6)
lbl_fn_8012F440_00002E50:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002E68
    stw r3, 0x254(r6)
lbl_fn_8012F440_00002E68:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002E80
    stw r3, 0x258(r6)
lbl_fn_8012F440_00002E80:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002E98
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00002E98:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002EB0
    stw r3, 0x260(r6)
lbl_fn_8012F440_00002EB0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002EC8
    stw r3, 0x264(r6)
lbl_fn_8012F440_00002EC8:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002EE0
    stw r3, 0x268(r6)
lbl_fn_8012F440_00002EE0:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00002E24
    li r29, 0x1
    b lbl_fn_8012F440_00003064
lbl_fn_8012F440_00002EF4:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 14, 12
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 14, 12
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00002F20:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002F34
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00002F34:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002F4C
    stw r3, 0x250(r6)
lbl_fn_8012F440_00002F4C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002F64
    stw r3, 0x254(r6)
lbl_fn_8012F440_00002F64:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002F7C
    stw r3, 0x258(r6)
lbl_fn_8012F440_00002F7C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002F94
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00002F94:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002FAC
    stw r3, 0x260(r6)
lbl_fn_8012F440_00002FAC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002FC4
    stw r3, 0x264(r6)
lbl_fn_8012F440_00002FC4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 13, 13
    cmplw r7, r0
    bne lbl_fn_8012F440_00002FDC
    stw r3, 0x268(r6)
lbl_fn_8012F440_00002FDC:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00002F20
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00003060
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00003054
lbl_fn_8012F440_00003018:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_0000304C
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00003060
lbl_fn_8012F440_0000304C:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00003054:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00003018
lbl_fn_8012F440_00003060:
    li r29, -0x1
lbl_fn_8012F440_00003064:
    rlwinm r3, r30, 0, 21, 21
    cmplwi r3, 0x400
    bne lbl_fn_8012F440_0000308C
    lwz r0, 0xc(r21)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8012F440_0000308C
    lwz r3, 0x2f0(r21)
    bl fn_80168F94
    b lbl_fn_8012F440_00003350
lbl_fn_8012F440_0000308C:
    cmplwi r3, 0x400
    beq lbl_fn_8012F440_00003350
    lwz r4, 0xc(r21)
    rlwinm r0, r4, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_8012F440_00003350
    rlwinm. r0, r28, 0, 21, 21
    bne lbl_fn_8012F440_000031E0
    cmpwi r26, 0x0
    ori r0, r4, 0x400
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_000030C8
    lwz r0, 0x10(r21)
    ori r0, r0, 0x400
    stw r0, 0x10(r21)
lbl_fn_8012F440_000030C8:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_000030DC:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 21, 21
    cmplw r6, r0
    bne lbl_fn_8012F440_00003100
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_000030FC
    mr r0, r23
lbl_fn_8012F440_000030FC:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_00003100:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 21, 21
    cmplw r6, r0
    bne lbl_fn_8012F440_00003128
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00003124
    mr r0, r23
lbl_fn_8012F440_00003124:
    stw r0, 0x250(r5)
lbl_fn_8012F440_00003128:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 21, 21
    cmplw r6, r0
    bne lbl_fn_8012F440_00003150
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_0000314C
    mr r0, r23
lbl_fn_8012F440_0000314C:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00003150:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 21, 21
    cmplw r6, r0
    bne lbl_fn_8012F440_00003178
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00003174
    mr r0, r23
lbl_fn_8012F440_00003174:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00003178:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_000030DC
    lwz r3, 0x2f0(r21)
    bl fn_80168F5C
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_000031D8
    rlwinm r3, r30, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_000031B8
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_000031D8
lbl_fn_8012F440_000031B8:
    lwz r22, lbl_8087F048
    addi r3, r1, 0x38
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x38
    li r5, 0x400
    bl fn_80108F38
lbl_fn_8012F440_000031D8:
    li r29, 0x1
    b lbl_fn_8012F440_00003350
lbl_fn_8012F440_000031E0:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 22, 20
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 22, 20
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_0000320C:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 21, 21
    cmplw r7, r0
    bne lbl_fn_8012F440_00003220
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00003220:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 21, 21
    cmplw r7, r0
    bne lbl_fn_8012F440_00003238
    stw r3, 0x250(r6)
lbl_fn_8012F440_00003238:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 21, 21
    cmplw r7, r0
    bne lbl_fn_8012F440_00003250
    stw r3, 0x254(r6)
lbl_fn_8012F440_00003250:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 21, 21
    cmplw r7, r0
    bne lbl_fn_8012F440_00003268
    stw r3, 0x258(r6)
lbl_fn_8012F440_00003268:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 21, 21
    cmplw r7, r0
    bne lbl_fn_8012F440_00003280
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00003280:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 21, 21
    cmplw r7, r0
    bne lbl_fn_8012F440_00003298
    stw r3, 0x260(r6)
lbl_fn_8012F440_00003298:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 21, 21
    cmplw r7, r0
    bne lbl_fn_8012F440_000032B0
    stw r3, 0x264(r6)
lbl_fn_8012F440_000032B0:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 21, 21
    cmplw r7, r0
    bne lbl_fn_8012F440_000032C8
    stw r3, 0x268(r6)
lbl_fn_8012F440_000032C8:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_0000320C
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_0000334C
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00003340
lbl_fn_8012F440_00003304:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00003338
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_0000334C
lbl_fn_8012F440_00003338:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00003340:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00003304
lbl_fn_8012F440_0000334C:
    li r29, -0x1
lbl_fn_8012F440_00003350:
    rlwinm r31, r30, 0, 7, 7
    subis r0, r31, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00003374
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00003614
lbl_fn_8012F440_00003374:
    subis r0, r31, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00003614
    lwz r4, 0xc(r21)
    rlwinm r3, r4, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00003614
    rlwinm. r0, r28, 0, 7, 7
    bne lbl_fn_8012F440_000034A4
    cmpwi r26, 0x0
    oris r0, r4, 0x100
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_000033B8
    lwz r0, 0x10(r21)
    oris r0, r0, 0x100
    stw r0, 0x10(r21)
lbl_fn_8012F440_000033B8:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_000033CC:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 7, 7
    cmplw r6, r0
    bne lbl_fn_8012F440_000033F0
    cmpwi r23, 0x0
    li r0, 0xf0
    ble lbl_fn_8012F440_000033EC
    mr r0, r23
lbl_fn_8012F440_000033EC:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_000033F0:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 7, 7
    cmplw r6, r0
    bne lbl_fn_8012F440_00003418
    cmpwi r23, 0x0
    li r0, 0xf0
    ble lbl_fn_8012F440_00003414
    mr r0, r23
lbl_fn_8012F440_00003414:
    stw r0, 0x250(r5)
lbl_fn_8012F440_00003418:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 7, 7
    cmplw r6, r0
    bne lbl_fn_8012F440_00003440
    cmpwi r23, 0x0
    li r0, 0xf0
    ble lbl_fn_8012F440_0000343C
    mr r0, r23
lbl_fn_8012F440_0000343C:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00003440:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 7, 7
    cmplw r6, r0
    bne lbl_fn_8012F440_00003468
    cmpwi r23, 0x0
    li r0, 0xf0
    ble lbl_fn_8012F440_00003464
    mr r0, r23
lbl_fn_8012F440_00003464:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00003468:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_000033CC
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_0000349C
    lwz r22, lbl_8087F048
    addi r3, r1, 0x2c
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x2c
    lis r5, 0x100
    bl fn_80108F38
lbl_fn_8012F440_0000349C:
    li r29, 0x1
    b lbl_fn_8012F440_00003614
lbl_fn_8012F440_000034A4:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 8, 6
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 8, 6
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_000034D0:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 7, 7
    cmplw r7, r0
    bne lbl_fn_8012F440_000034E4
    stw r3, 0x24c(r6)
lbl_fn_8012F440_000034E4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 7, 7
    cmplw r7, r0
    bne lbl_fn_8012F440_000034FC
    stw r3, 0x250(r6)
lbl_fn_8012F440_000034FC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 7, 7
    cmplw r7, r0
    bne lbl_fn_8012F440_00003514
    stw r3, 0x254(r6)
lbl_fn_8012F440_00003514:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 7, 7
    cmplw r7, r0
    bne lbl_fn_8012F440_0000352C
    stw r3, 0x258(r6)
lbl_fn_8012F440_0000352C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 7, 7
    cmplw r7, r0
    bne lbl_fn_8012F440_00003544
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00003544:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 7, 7
    cmplw r7, r0
    bne lbl_fn_8012F440_0000355C
    stw r3, 0x260(r6)
lbl_fn_8012F440_0000355C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 7, 7
    cmplw r7, r0
    bne lbl_fn_8012F440_00003574
    stw r3, 0x264(r6)
lbl_fn_8012F440_00003574:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 7, 7
    cmplw r7, r0
    bne lbl_fn_8012F440_0000358C
    stw r3, 0x268(r6)
lbl_fn_8012F440_0000358C:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_000034D0
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00003610
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00003604
lbl_fn_8012F440_000035C8:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000035FC
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00003610
lbl_fn_8012F440_000035FC:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00003604:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_000035C8
lbl_fn_8012F440_00003610:
    li r29, -0x1
lbl_fn_8012F440_00003614:
    rlwinm r4, r30, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00003638
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_000038FC
lbl_fn_8012F440_00003638:
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_000038FC
    lwz r4, 0xc(r21)
    rlwinm r3, r4, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_000038FC
    rlwinm r0, r28, 0, 8, 8
    rlwimi. r0, r28, 0, 28, 28
    bne lbl_fn_8012F440_0000378C
    cmpwi r26, 0x0
    oris r0, r4, 0x80
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_00003680
    lwz r0, 0x10(r21)
    oris r0, r0, 0x80
    stw r0, 0x10(r21)
lbl_fn_8012F440_00003680:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_00003694:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 8, 8
    cmplw r6, r0
    bne lbl_fn_8012F440_000036B8
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_000036B4
    mr r0, r23
lbl_fn_8012F440_000036B4:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_000036B8:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 8, 8
    cmplw r6, r0
    bne lbl_fn_8012F440_000036E0
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_000036DC
    mr r0, r23
lbl_fn_8012F440_000036DC:
    stw r0, 0x250(r5)
lbl_fn_8012F440_000036E0:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 8, 8
    cmplw r6, r0
    bne lbl_fn_8012F440_00003708
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_00003704
    mr r0, r23
lbl_fn_8012F440_00003704:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00003708:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 8, 8
    cmplw r6, r0
    bne lbl_fn_8012F440_00003730
    cmpwi r23, 0x0
    li r0, 0x258
    ble lbl_fn_8012F440_0000372C
    mr r0, r23
lbl_fn_8012F440_0000372C:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00003730:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_00003694
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00003784
    subis r0, r31, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00003764
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00003784
lbl_fn_8012F440_00003764:
    lwz r22, lbl_8087F048
    addi r3, r1, 0x20
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x20
    lis r5, 0x80
    bl fn_80108F38
lbl_fn_8012F440_00003784:
    li r29, 0x1
    b lbl_fn_8012F440_000038FC
lbl_fn_8012F440_0000378C:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 9, 7
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 9, 7
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_000037B8:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 8, 8
    cmplw r7, r0
    bne lbl_fn_8012F440_000037CC
    stw r3, 0x24c(r6)
lbl_fn_8012F440_000037CC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 8, 8
    cmplw r7, r0
    bne lbl_fn_8012F440_000037E4
    stw r3, 0x250(r6)
lbl_fn_8012F440_000037E4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 8, 8
    cmplw r7, r0
    bne lbl_fn_8012F440_000037FC
    stw r3, 0x254(r6)
lbl_fn_8012F440_000037FC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 8, 8
    cmplw r7, r0
    bne lbl_fn_8012F440_00003814
    stw r3, 0x258(r6)
lbl_fn_8012F440_00003814:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 8, 8
    cmplw r7, r0
    bne lbl_fn_8012F440_0000382C
    stw r3, 0x25c(r6)
lbl_fn_8012F440_0000382C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 8, 8
    cmplw r7, r0
    bne lbl_fn_8012F440_00003844
    stw r3, 0x260(r6)
lbl_fn_8012F440_00003844:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 8, 8
    cmplw r7, r0
    bne lbl_fn_8012F440_0000385C
    stw r3, 0x264(r6)
lbl_fn_8012F440_0000385C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 8, 8
    cmplw r7, r0
    bne lbl_fn_8012F440_00003874
    stw r3, 0x268(r6)
lbl_fn_8012F440_00003874:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_000037B8
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_000038F8
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000038EC
lbl_fn_8012F440_000038B0:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_000038E4
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_000038F8
lbl_fn_8012F440_000038E4:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_000038EC:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_000038B0
lbl_fn_8012F440_000038F8:
    li r29, -0x1
lbl_fn_8012F440_000038FC:
    rlwinm r4, r30, 0, 6, 6
    subis r0, r4, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_0000393C
    lwz r0, 0xc(r21)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_0000393C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8012F440_00003C14
    lwz r4, 0x2f0(r21)
    addi r4, r4, 0xb0
    bl fn_80107FC8
    b lbl_fn_8012F440_00003C14
lbl_fn_8012F440_0000393C:
    subis r0, r4, 0x200
    cmplwi r0, 0x0
    beq lbl_fn_8012F440_00003C14
    lwz r4, 0xc(r21)
    rlwinm r3, r4, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_8012F440_00003C14
    rlwinm. r0, r28, 0, 6, 6
    bne lbl_fn_8012F440_00003AA4
    lwz r24, lbl_8087F048
    cmpwi r24, 0x0
    beq lbl_fn_8012F440_00003998
    lwz r3, 0x2f0(r21)
    lwz r12, 0x0(r3)
    addi r22, r3, 0xb0
    lwz r12, 0x90(r12)
    mtctr r12
    bctrl
    mr r3, r24
    mr r4, r22
    mr r5, r22
    bl fn_80107F20
lbl_fn_8012F440_00003998:
    lwz r0, 0xc(r21)
    cmpwi r26, 0x0
    oris r0, r0, 0x200
    stw r0, 0xc(r21)
    beq lbl_fn_8012F440_000039B8
    lwz r0, 0x10(r21)
    oris r0, r0, 0x200
    stw r0, 0x10(r21)
lbl_fn_8012F440_000039B8:
    li r0, 0x8
    mr r5, r21
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_8012F440_000039CC:
    slw r6, r3, r4
    rlwinm r0, r6, 0, 6, 6
    cmplw r6, r0
    bne lbl_fn_8012F440_000039F0
    cmpwi r23, 0x0
    li r0, 0xf0
    ble lbl_fn_8012F440_000039EC
    mr r0, r23
lbl_fn_8012F440_000039EC:
    stw r0, 0x24c(r5)
lbl_fn_8012F440_000039F0:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 6, 6
    cmplw r6, r0
    bne lbl_fn_8012F440_00003A18
    cmpwi r23, 0x0
    li r0, 0xf0
    ble lbl_fn_8012F440_00003A14
    mr r0, r23
lbl_fn_8012F440_00003A14:
    stw r0, 0x250(r5)
lbl_fn_8012F440_00003A18:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 6, 6
    cmplw r6, r0
    bne lbl_fn_8012F440_00003A40
    cmpwi r23, 0x0
    li r0, 0xf0
    ble lbl_fn_8012F440_00003A3C
    mr r0, r23
lbl_fn_8012F440_00003A3C:
    stw r0, 0x254(r5)
lbl_fn_8012F440_00003A40:
    addi r4, r4, 0x1
    slw r6, r3, r4
    rlwinm r0, r6, 0, 6, 6
    cmplw r6, r0
    bne lbl_fn_8012F440_00003A68
    cmpwi r23, 0x0
    li r0, 0xf0
    ble lbl_fn_8012F440_00003A64
    mr r0, r23
lbl_fn_8012F440_00003A64:
    stw r0, 0x258(r5)
lbl_fn_8012F440_00003A68:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_8012F440_000039CC
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00003A9C
    lwz r22, lbl_8087F048
    addi r3, r1, 0x14
    lwz r4, 0x2f0(r21)
    bl fn_801781B0
    mr r3, r22
    addi r4, r1, 0x14
    lis r5, 0x200
    bl fn_80108F38
lbl_fn_8012F440_00003A9C:
    li r29, 0x1
    b lbl_fn_8012F440_00003C14
lbl_fn_8012F440_00003AA4:
    lwz r3, 0x10(r21)
    rlwinm r5, r4, 0, 7, 5
    li r0, 0x4
    stw r5, 0xc(r21)
    rlwinm r4, r3, 0, 7, 5
    mr r6, r21
    stw r4, 0x10(r21)
    li r5, 0x0
    li r3, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_8012F440_00003AD0:
    slw r7, r4, r5
    rlwinm r0, r7, 0, 6, 6
    cmplw r7, r0
    bne lbl_fn_8012F440_00003AE4
    stw r3, 0x24c(r6)
lbl_fn_8012F440_00003AE4:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 6, 6
    cmplw r7, r0
    bne lbl_fn_8012F440_00003AFC
    stw r3, 0x250(r6)
lbl_fn_8012F440_00003AFC:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 6, 6
    cmplw r7, r0
    bne lbl_fn_8012F440_00003B14
    stw r3, 0x254(r6)
lbl_fn_8012F440_00003B14:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 6, 6
    cmplw r7, r0
    bne lbl_fn_8012F440_00003B2C
    stw r3, 0x258(r6)
lbl_fn_8012F440_00003B2C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 6, 6
    cmplw r7, r0
    bne lbl_fn_8012F440_00003B44
    stw r3, 0x25c(r6)
lbl_fn_8012F440_00003B44:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 6, 6
    cmplw r7, r0
    bne lbl_fn_8012F440_00003B5C
    stw r3, 0x260(r6)
lbl_fn_8012F440_00003B5C:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 6, 6
    cmplw r7, r0
    bne lbl_fn_8012F440_00003B74
    stw r3, 0x264(r6)
lbl_fn_8012F440_00003B74:
    addi r5, r5, 0x1
    slw r7, r4, r5
    rlwinm r0, r7, 0, 6, 6
    cmplw r7, r0
    bne lbl_fn_8012F440_00003B8C
    stw r3, 0x268(r6)
lbl_fn_8012F440_00003B8C:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012F440_00003AD0
    lwz r4, 0x2f0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8012F440_00003C10
    lwz r3, 0xc(r21)
    li r5, 0x0
    lwz r0, 0x10(r21)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r21)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00003C04
lbl_fn_8012F440_00003BC8:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00003BFC
    lwz r3, 0xc(r21)
    lwz r0, 0x10(r21)
    oris r3, r3, 0x10
    stw r3, 0xc(r21)
    oris r0, r0, 0x10
    stw r0, 0x10(r21)
    b lbl_fn_8012F440_00003C10
lbl_fn_8012F440_00003BFC:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012F440_00003C04:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012F440_00003BC8
lbl_fn_8012F440_00003C10:
    li r29, -0x1
lbl_fn_8012F440_00003C14:
    lwz r3, 0x2f0(r21)
    cmpwi r3, 0x0
    beq lbl_fn_8012F440_00003D18
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8012F440_00003D18
    cmpwi r27, 0x0
    beq lbl_fn_8012F440_00003D18
    addi r22, r3, 0xb0
    lis r4, lbl_80737380@ha
    mr r3, r22
    li r5, 0x0
    addi r4, r4, lbl_80737380@l
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8012F440_00003C5C
    li r5, 0x0
    b lbl_fn_8012F440_00003C68
lbl_fn_8012F440_00003C5C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r22)
    add r5, r3, r0
lbl_fn_8012F440_00003C68:
    cmpwi r5, 0x0
    bne lbl_fn_8012F440_00003CAC
    lwz r3, 0x2f0(r21)
    lis r4, lbl_80737380@ha
    addi r4, r4, lbl_80737380@l
    li r5, 0x0
    addi r22, r3, 0xb0
    mr r3, r22
    addi r4, r4, 0x7
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8012F440_00003CA0
    li r5, 0x0
    b lbl_fn_8012F440_00003CAC
lbl_fn_8012F440_00003CA0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r22)
    add r5, r3, r0
lbl_fn_8012F440_00003CAC:
    cmpwi r5, 0x0
    beq lbl_fn_8012F440_00003CE4
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f3, 0xc(r5)
    addi r3, r1, 0xec
    lfs f2, 0x2c(r5)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf4(r1)
    b lbl_fn_8012F440_00003CFC
lbl_fn_8012F440_00003CE4:
    lwz r4, 0x2f0(r21)
    addi r3, r1, 0xec
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8012F440_00003CFC:
    lwz r8, 0x2f0(r21)
    mr r6, r30
    lwz r3, lbl_8087F048
    addi r4, r1, 0xec
    lwz r7, 0xc(r21)
    addi r5, r8, 0x534
    bl fn_80101524
lbl_fn_8012F440_00003D18:
    addi r11, r1, 0x130
    mr r3, r29
    bl _restgpr_21
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
