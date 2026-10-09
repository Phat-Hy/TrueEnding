#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void IOS_Ioctlv(void);
extern void IOS_Open(void);
extern void IPCGetBufferHi(void);
extern void IPCGetBufferLo(void);
extern void IPCSetBufferLo(void);
extern void OSDisableInterrupts(void);
extern void OSGetCurrentThread(void);
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSRegisterVersion(void);
extern void OSReport(const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_8061C8A0(void);

/* External data declarations */
extern u8 lbl_80766840[];
extern u8 lbl_80766940[];
extern u8 lbl_80766A40[];
extern u8 lbl_80766A60[];
extern u8 lbl_80766E60[];
extern u8 lbl_807BC088[];
extern u8 lbl_807BC09C[];
extern u8 lbl_807BC0B8[];
extern u8 lbl_807BC0C4[];
extern u8 lbl_807BC100[];
extern u8 lbl_807BC158[];
extern u8 lbl_807BC258[];
extern u8 lbl_807BC318[];
extern u8 lbl_807BC360[];
extern u8 lbl_807BC388[];
extern u8 lbl_807BC3B8[];
extern u8 lbl_80808080[];
extern u8 lbl_808330E0[];

/* Small data declarations */
extern u32 lbl_8087ED38;
extern u32 lbl_8087ED40;
extern u32 lbl_8087ED48;
extern u32 lbl_808803E0;
extern u32 lbl_808803E4;
extern u32 lbl_80889000;

/* Function declarations */
void fn_80698088(void);
void fn_806981B0(void);
void fn_8069832C(void);
void fn_806984C0(void);
void fn_806985B0(void);
void fn_80698828(void);
void fn_806988A8(void);
void fn_80698A20(void);
void fn_80698A28(void);
void fn_80698A2C(void);
void fn_80698DEC(void);
void fn_80698EF0(void);
void fn_80698F30(void);
void fn_80699020(void);
void fn_80699148(void);
void fn_80699610(void);
void fn_80699888(void);
void fn_80699C74(void);
void fn_80699E24(void);
void fn_80699E2C(void);
void fn_80699E30(void);
void fn_80699EE8(void);
void fn_80699FA0(void);
void fn_8069A03C(void);

asm void fn_80698088(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_808330E0@ha
    addi r31, r31, lbl_808330E0@l
    stw r30, 0x18(r1)
    li r30, 0x0
    cmplw r3, r30
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_80698088_0000003C
    li r3, -0x3
    b lbl_fn_80698088_00000108
lbl_fn_80698088_0000003C:
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_80698088_00000050
    li r3, -0x5
    b lbl_fn_80698088_00000108
lbl_fn_80698088_00000050:
    bl fn_806984C0
    lis r3, lbl_807BC088@ha
    li r4, 0x0
    addi r3, r3, lbl_807BC088@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r29, r3
    bge lbl_fn_80698088_00000088
    cmpwi r3, -0x6
    bne lbl_fn_80698088_00000080
    li r30, -0x8
    b lbl_fn_80698088_000000FC
lbl_fn_80698088_00000080:
    li r30, -0x2
    b lbl_fn_80698088_000000FC
lbl_fn_80698088_00000088:
    lwz r8, lbl_808803E4
    addi r7, r31, 0x40
    addi r4, r31, 0x20
    li r5, 0x20
    li r0, 0x6
    stw r4, 0x40(r31)
    li r4, 0x8
    li r6, 0x2
    stw r5, 0x4(r7)
    li r5, 0x0
    stw r8, 0x8(r7)
    stw r0, 0xc(r7)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bge lbl_fn_80698088_000000CC
    li r30, -0x2
    b lbl_fn_80698088_000000E8
lbl_fn_80698088_000000CC:
    lwz r30, 0x20(r31)
    cmpwi r30, 0x0
    bne lbl_fn_80698088_000000E8
    lwz r4, lbl_808803E4
    mr r3, r28
    li r5, 0x6
    bl memcpy
lbl_fn_80698088_000000E8:
    mr r3, r29
    bl fn_8061C8A0
    cmpwi r3, 0x0
    bge lbl_fn_80698088_000000FC
    li r30, -0x1
lbl_fn_80698088_000000FC:
    addi r3, r31, 0x0
    bl fn_805F3210
    mr r3, r30
lbl_fn_80698088_00000108:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806981B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    bl fn_806984C0
    lis r3, lbl_807BC09C@ha
    li r4, 0x0
    addi r3, r3, lbl_807BC09C@l
    li r5, 0x3
    bl fn_8069832C
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806981B0_00000258
    lwz r4, lbl_808803E4
    li r6, 0x0
    li r3, 0x1
    lbz r5, 0x8(r4)
    rlwinm. r0, r5, 0, 24, 24
    beq lbl_fn_806981B0_000001C0
    clrlwi. r0, r5, 31
    beq lbl_fn_806981B0_000001A0
    slw r27, r3, r6
    b lbl_fn_806981B0_000001C0
lbl_fn_806981B0_000001A0:
    lbz r0, 0x7ca(r4)
    cmplwi r0, 0x1
    beq lbl_fn_806981B0_000001B0
    slw r26, r3, r6
lbl_fn_806981B0_000001B0:
    lbz r0, 0x7ca(r4)
    cmplwi r0, 0x1
    bne lbl_fn_806981B0_000001C0
    slw r25, r3, r6
lbl_fn_806981B0_000001C0:
    lbz r5, 0x924(r4)
    li r6, 0x1
    rlwinm. r0, r5, 0, 24, 24
    beq lbl_fn_806981B0_0000020C
    clrlwi. r0, r5, 31
    beq lbl_fn_806981B0_000001E4
    slw r0, r3, r6
    or r27, r27, r0
    b lbl_fn_806981B0_0000020C
lbl_fn_806981B0_000001E4:
    lbz r0, 0x10e6(r4)
    cmplwi r0, 0x1
    beq lbl_fn_806981B0_000001F8
    slw r0, r3, r6
    or r26, r26, r0
lbl_fn_806981B0_000001F8:
    lbz r0, 0x10e6(r4)
    cmplwi r0, 0x1
    bne lbl_fn_806981B0_0000020C
    slw r0, r3, r6
    or r25, r25, r0
lbl_fn_806981B0_0000020C:
    lbz r5, 0x1240(r4)
    li r6, 0x2
    rlwinm. r0, r5, 0, 24, 24
    beq lbl_fn_806981B0_00000258
    clrlwi. r0, r5, 31
    beq lbl_fn_806981B0_00000230
    slw r0, r3, r6
    or r27, r27, r0
    b lbl_fn_806981B0_00000258
lbl_fn_806981B0_00000230:
    lbz r0, 0x1a02(r4)
    cmplwi r0, 0x1
    beq lbl_fn_806981B0_00000244
    slw r0, r3, r6
    or r26, r26, r0
lbl_fn_806981B0_00000244:
    lbz r0, 0x1a02(r4)
    cmplwi r0, 0x1
    bne lbl_fn_806981B0_00000258
    slw r0, r3, r6
    or r25, r25, r0
lbl_fn_806981B0_00000258:
    lis r3, lbl_808330E0@ha
    addi r3, r3, lbl_808330E0@l
    bl fn_805F3210
    cmpwi r29, 0x0
    beq lbl_fn_806981B0_00000270
    stw r27, 0x0(r29)
lbl_fn_806981B0_00000270:
    cmpwi r30, 0x0
    beq lbl_fn_806981B0_0000027C
    stw r26, 0x0(r30)
lbl_fn_806981B0_0000027C:
    cmpwi r31, 0x0
    beq lbl_fn_806981B0_00000288
    stw r25, 0x0(r31)
lbl_fn_806981B0_00000288:
    addi r11, r1, 0x30
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069832C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_808330E0@ha
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    addi r31, r31, lbl_808330E0@l
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_8069832C_000002E0
    li r3, -0x5
    b lbl_fn_8069832C_00000420
lbl_fn_8069832C_000002E0:
    bl fn_806984C0
    lis r3, lbl_807BC088@ha
    li r4, 0x0
    addi r3, r3, lbl_807BC088@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r29, r3
    bge lbl_fn_8069832C_00000318
    cmpwi r3, -0x6
    bne lbl_fn_8069832C_00000310
    li r30, -0x8
    b lbl_fn_8069832C_00000414
lbl_fn_8069832C_00000310:
    li r30, -0x2
    b lbl_fn_8069832C_00000414
lbl_fn_8069832C_00000318:
    lwz r6, lbl_808803E4
    cmpwi r28, 0x5
    addi r4, r31, 0x40
    addi r3, r31, 0x20
    li r5, 0x1b5c
    li r0, 0x20
    stw r6, 0x40(r31)
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    beq lbl_fn_8069832C_00000364
    bge lbl_fn_8069832C_00000358
    cmpwi r28, 0x3
    beq lbl_fn_8069832C_00000364
    bge lbl_fn_8069832C_000003B8
    b lbl_fn_8069832C_00000400
lbl_fn_8069832C_00000358:
    cmpwi r28, 0x7
    bge lbl_fn_8069832C_00000400
    b lbl_fn_8069832C_000003B8
lbl_fn_8069832C_00000364:
    mr r3, r29
    mr r4, r28
    addi r7, r31, 0x40
    li r5, 0x0
    li r6, 0x2
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bge lbl_fn_8069832C_0000038C
    li r30, -0x2
    b lbl_fn_8069832C_00000400
lbl_fn_8069832C_0000038C:
    lwz r30, 0x20(r31)
    cmpwi r30, 0x0
    bne lbl_fn_8069832C_00000400
    li r0, 0x0
    cmplw r27, r0
    beq lbl_fn_8069832C_00000400
    lwz r4, lbl_808803E4
    mr r3, r27
    li r5, 0x1b5c
    bl memcpy
    b lbl_fn_8069832C_00000400
lbl_fn_8069832C_000003B8:
    li r0, 0x0
    cmplw r27, r0
    beq lbl_fn_8069832C_000003D4
    lwz r3, lbl_808803E4
    mr r4, r27
    li r5, 0x1b5c
    bl memcpy
lbl_fn_8069832C_000003D4:
    mr r3, r29
    mr r4, r28
    addi r7, r31, 0x40
    li r5, 0x1
    li r6, 0x1
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bge lbl_fn_8069832C_000003FC
    li r30, -0x2
    b lbl_fn_8069832C_00000400
lbl_fn_8069832C_000003FC:
    lwz r30, 0x20(r31)
lbl_fn_8069832C_00000400:
    mr r3, r29
    bl fn_8061C8A0
    cmpwi r3, 0x0
    bge lbl_fn_8069832C_00000414
    li r30, -0x1
lbl_fn_8069832C_00000414:
    addi r3, r31, 0x0
    bl fn_805F3210
    mr r3, r30
lbl_fn_8069832C_00000420:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806984C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_808330E0@ha
    addi r31, r31, lbl_808330E0@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_808803E0
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_fn_806984C0_000004FC
    lwz r3, lbl_8087ED38
    bl OSRegisterVersion
    addi r3, r31, 0x0
    bl fn_805F30F0
    bl IPCGetBufferLo
    addi r0, r3, 0x1f
    clrrwi r29, r0, 5
    bl IPCGetBufferHi
    subf r0, r29, r3
    cmplwi r0, 0x1b60
    bge lbl_fn_806984C0_000004B4
    lis r3, lbl_807BC0B8@ha
    lis r5, lbl_807BC0C4@ha
    addi r3, r3, lbl_807BC0B8@l
    li r4, 0x5dc
    addi r5, r5, lbl_807BC0C4@l
    crclr 6
    bl OSPanic
lbl_fn_806984C0_000004B4:
    addi r3, r29, 0x1b60
    bl IPCSetBufferLo
    stw r29, lbl_808803E4
    mr r3, r29
    li r4, 0x0
    li r5, 0x1b60
    bl memset
    addi r3, r31, 0x20
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r31, 0x40
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, lbl_808803E0
    ori r0, r0, 0x1
    stw r0, lbl_808803E0
lbl_fn_806984C0_000004FC:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r3, r31, 0x0
    bl fn_805F3130
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806985B0(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r0, 0x63
    beq lbl_fn_806985B0_00000604
    cmpwi r4, 0x0
    bne lbl_fn_806985B0_00000798
    cmpwi r5, 0x0
    bne lbl_fn_806985B0_00000798
    li r0, 0x4
    li r5, 0x0
    li r4, 0x1
    mtctr r0
lbl_fn_806985B0_00000554:
    and. r0, r3, r4
    beq lbl_fn_806985B0_00000560
    b lbl_fn_806985B0_000005FC
lbl_fn_806985B0_00000560:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_fn_806985B0_00000574
    b lbl_fn_806985B0_000005FC
lbl_fn_806985B0_00000574:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_fn_806985B0_00000588
    b lbl_fn_806985B0_000005FC
lbl_fn_806985B0_00000588:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_fn_806985B0_0000059C
    b lbl_fn_806985B0_000005FC
lbl_fn_806985B0_0000059C:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_fn_806985B0_000005B0
    b lbl_fn_806985B0_000005FC
lbl_fn_806985B0_000005B0:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_fn_806985B0_000005C4
    b lbl_fn_806985B0_000005FC
lbl_fn_806985B0_000005C4:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_fn_806985B0_000005D8
    b lbl_fn_806985B0_000005FC
lbl_fn_806985B0_000005D8:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    and. r0, r3, r4
    beq lbl_fn_806985B0_000005EC
    b lbl_fn_806985B0_000005FC
lbl_fn_806985B0_000005EC:
    slwi r4, r4, 1
    addi r5, r5, 0x1
    bdnz lbl_fn_806985B0_00000554
    li r5, -0x1
lbl_fn_806985B0_000005FC:
    addi r0, r5, 0x14
    b lbl_fn_806985B0_00000798
lbl_fn_806985B0_00000604:
    cmpwi r4, 0x0
    beq lbl_fn_806985B0_000006D4
    cmpwi r5, 0x0
    bne lbl_fn_806985B0_00000798
    li r0, 0x4
    li r5, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_806985B0_00000624:
    and. r0, r4, r3
    beq lbl_fn_806985B0_00000630
    b lbl_fn_806985B0_000006CC
lbl_fn_806985B0_00000630:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_fn_806985B0_00000644
    b lbl_fn_806985B0_000006CC
lbl_fn_806985B0_00000644:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_fn_806985B0_00000658
    b lbl_fn_806985B0_000006CC
lbl_fn_806985B0_00000658:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_fn_806985B0_0000066C
    b lbl_fn_806985B0_000006CC
lbl_fn_806985B0_0000066C:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_fn_806985B0_00000680
    b lbl_fn_806985B0_000006CC
lbl_fn_806985B0_00000680:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_fn_806985B0_00000694
    b lbl_fn_806985B0_000006CC
lbl_fn_806985B0_00000694:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_fn_806985B0_000006A8
    b lbl_fn_806985B0_000006CC
lbl_fn_806985B0_000006A8:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    and. r0, r4, r3
    beq lbl_fn_806985B0_000006BC
    b lbl_fn_806985B0_000006CC
lbl_fn_806985B0_000006BC:
    slwi r3, r3, 1
    addi r5, r5, 0x1
    bdnz lbl_fn_806985B0_00000624
    li r5, -0x1
lbl_fn_806985B0_000006CC:
    addi r0, r5, 0x1e
    b lbl_fn_806985B0_00000798
lbl_fn_806985B0_000006D4:
    cmpwi r5, 0x0
    beq lbl_fn_806985B0_00000798
    li r0, 0x4
    li r4, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_806985B0_000006EC:
    and. r0, r5, r3
    beq lbl_fn_806985B0_000006F8
    b lbl_fn_806985B0_00000794
lbl_fn_806985B0_000006F8:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_fn_806985B0_0000070C
    b lbl_fn_806985B0_00000794
lbl_fn_806985B0_0000070C:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_fn_806985B0_00000720
    b lbl_fn_806985B0_00000794
lbl_fn_806985B0_00000720:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_fn_806985B0_00000734
    b lbl_fn_806985B0_00000794
lbl_fn_806985B0_00000734:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_fn_806985B0_00000748
    b lbl_fn_806985B0_00000794
lbl_fn_806985B0_00000748:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_fn_806985B0_0000075C
    b lbl_fn_806985B0_00000794
lbl_fn_806985B0_0000075C:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_fn_806985B0_00000770
    b lbl_fn_806985B0_00000794
lbl_fn_806985B0_00000770:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    and. r0, r5, r3
    beq lbl_fn_806985B0_00000784
    b lbl_fn_806985B0_00000794
lbl_fn_806985B0_00000784:
    slwi r3, r3, 1
    addi r4, r4, 0x1
    bdnz lbl_fn_806985B0_000006EC
    li r4, -0x1
lbl_fn_806985B0_00000794:
    addi r0, r4, 0x28
lbl_fn_806985B0_00000798:
    mr r3, r0
    blr
}

asm void fn_80698828(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x10
    stw r31, 0x1c(r1)
    li r31, 0x63
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0x8
    bl fn_806981B0
    cmpwi r3, 0x0
    blt lbl_fn_80698828_000007E8
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r5, 0x10(r1)
    bl fn_806985B0
    mr r31, r3
lbl_fn_80698828_000007E8:
    cmpwi r31, 0x0
    bge lbl_fn_80698828_000007F8
    lis r30, 0x8000
    li r31, 0x63
lbl_fn_80698828_000007F8:
    mr r3, r30
    mr r4, r31
    bl fn_806988A8
    subf r3, r31, r3
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806988A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    mr r5, r3
    stw r0, 0x14(r1)
    blt lbl_fn_806988A8_00000840
    li r3, 0x0
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_00000840:
    cmpwi r3, -0x3e
    beq lbl_fn_806988A8_000008EC
    bge lbl_fn_806988A8_000008A4
    cmpwi r3, -0x6f
    beq lbl_fn_806988A8_000008F8
    bge lbl_fn_806988A8_00000884
    cmpwi r3, -0x79
    beq lbl_fn_806988A8_00000904
    bge lbl_fn_806988A8_00000878
    lis r4, 0x8000
    addi r0, r4, 0x1
    cmpw r3, r0
    bge lbl_fn_806988A8_0000096C
    b lbl_fn_806988A8_00000960
lbl_fn_806988A8_00000878:
    cmpwi r3, -0x70
    bge lbl_fn_806988A8_0000092C
    b lbl_fn_806988A8_0000096C
lbl_fn_806988A8_00000884:
    cmpwi r3, -0x4c
    beq lbl_fn_806988A8_0000092C
    bge lbl_fn_806988A8_0000096C
    cmpwi r3, -0x63
    bge lbl_fn_806988A8_0000096C
    cmpwi r3, -0x66
    bge lbl_fn_806988A8_00000954
    b lbl_fn_806988A8_0000096C
lbl_fn_806988A8_000008A4:
    cmpwi r3, -0x27
    beq lbl_fn_806988A8_0000092C
    bge lbl_fn_806988A8_000008C8
    cmpwi r3, -0x2d
    beq lbl_fn_806988A8_000008D4
    bge lbl_fn_806988A8_0000096C
    cmpwi r3, -0x30
    beq lbl_fn_806988A8_0000092C
    b lbl_fn_806988A8_0000096C
lbl_fn_806988A8_000008C8:
    cmpwi r3, -0x1c
    beq lbl_fn_806988A8_000008E0
    b lbl_fn_806988A8_0000096C
lbl_fn_806988A8_000008D4:
    lis r3, 0xffff
    addi r3, r3, 0x3be8
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_000008E0:
    lis r3, 0xffff
    addi r3, r3, 0x3b84
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_000008EC:
    lis r3, 0xffff
    addi r3, r3, 0x3b20
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_000008F8:
    lis r3, 0xffff
    addi r3, r3, 0x3224
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_00000904:
    cmpwi r4, 0x14
    blt lbl_fn_806988A8_00000920
    cmpwi r4, 0x1e
    bge lbl_fn_806988A8_00000920
    lis r3, 0xffff
    addi r3, r3, 0x3738
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_00000920:
    lis r3, 0xffff
    addi r3, r3, 0x38c8
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_0000092C:
    cmpwi r4, 0x14
    blt lbl_fn_806988A8_00000948
    cmpwi r4, 0x1e
    bge lbl_fn_806988A8_00000948
    lis r3, 0xffff
    addi r3, r3, 0x3738
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_00000948:
    lis r3, 0xffff
    addi r3, r3, 0x379c
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_00000954:
    lis r3, 0xffff
    addi r3, r3, 0x34e0
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_00000960:
    lis r3, 0xffff
    addi r3, r3, 0x3c4c
    b lbl_fn_806988A8_00000988
lbl_fn_806988A8_0000096C:
    lis r3, lbl_807BC100@ha
    mr r4, r5
    addi r3, r3, lbl_807BC100@l
    crclr 6
    bl OSReport
    lis r3, 0xffff
    addi r3, r3, 0x3c4c
lbl_fn_806988A8_00000988:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80698A20(void)
{
    nofralloc
    lwz r3, lbl_8087ED40
    blr
}

asm void fn_80698A28(void)
{
    nofralloc
    b fn_80698088
}

asm void fn_80698A2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    cmplw r3, r4
    mr r0, r3
    stw r31, 0xc(r1)
    bne lbl_fn_80698A2C_000009BC
    b lbl_fn_80698A2C_00000D58
lbl_fn_80698A2C_000009BC:
    ble lbl_fn_80698A2C_00000A08
    add r6, r4, r5
    cmplw r3, r6
    bge lbl_fn_80698A2C_00000A08
    clrlwi. r4, r5, 30
    add r7, r3, r5
    srwi r5, r5, 2
    beq lbl_fn_80698A2C_000009EC
    mtctr r4
lbl_fn_80698A2C_000009E0:
    lbzu r3, -0x1(r6)
    stbu r3, -0x1(r7)
    bdnz lbl_fn_80698A2C_000009E0
lbl_fn_80698A2C_000009EC:
    cmpwi r5, 0x0
    beq lbl_fn_80698A2C_00000D54
    mtctr r5
lbl_fn_80698A2C_000009F8:
    lwzu r3, -0x4(r6)
    stwu r3, -0x4(r7)
    bdnz lbl_fn_80698A2C_000009F8
    b lbl_fn_80698A2C_00000D54
lbl_fn_80698A2C_00000A08:
    subi r6, r4, 0x20
    cmplw r3, r6
    ble lbl_fn_80698A2C_00000A1C
    cmplw r3, r4
    blt lbl_fn_80698A2C_00000D10
lbl_fn_80698A2C_00000A1C:
    cmplwi r5, 0x40
    blt lbl_fn_80698A2C_00000D10
    clrlwi. r10, r3, 27
    beq lbl_fn_80698A2C_00000A88
    subfic r10, r10, 0x20
    mr r8, r4
    srwi. r6, r10, 2
    mr r9, r3
    clrlwi r7, r10, 30
    beq lbl_fn_80698A2C_00000A5C
    mtctr r6
lbl_fn_80698A2C_00000A48:
    lwz r6, 0x0(r8)
    addi r8, r8, 0x4
    stw r6, 0x0(r9)
    addi r9, r9, 0x4
    bdnz lbl_fn_80698A2C_00000A48
lbl_fn_80698A2C_00000A5C:
    cmpwi r7, 0x0
    beq lbl_fn_80698A2C_00000A7C
    mtctr r7
lbl_fn_80698A2C_00000A68:
    lbz r6, 0x0(r8)
    addi r8, r8, 0x1
    stb r6, 0x0(r9)
    addi r9, r9, 0x1
    bdnz lbl_fn_80698A2C_00000A68
lbl_fn_80698A2C_00000A7C:
    add r3, r3, r10
    add r4, r4, r10
    subf r5, r10, r5
lbl_fn_80698A2C_00000A88:
    clrlwi r8, r4, 30
    mr r7, r4
    cmpwi r8, 0x2
    mr r6, r3
    clrrwi r31, r5, 5
    srwi r9, r5, 5
    beq lbl_fn_80698A2C_00000BC0
    bge lbl_fn_80698A2C_00000AB8
    cmpwi r8, 0x0
    beq lbl_fn_80698A2C_00000AC4
    bge lbl_fn_80698A2C_00000B1C
    b lbl_fn_80698A2C_00000D04
lbl_fn_80698A2C_00000AB8:
    cmpwi r8, 0x4
    bge lbl_fn_80698A2C_00000D04
    b lbl_fn_80698A2C_00000C64
lbl_fn_80698A2C_00000AC4:
    mtctr r9
lbl_fn_80698A2C_00000AC8:
    dcbz r0, r6
    lwz r12, 0x0(r7)
    lwz r11, 0x4(r7)
    stw r12, 0x0(r6)
    stw r11, 0x4(r6)
    lwz r12, 0x8(r7)
    lwz r11, 0xc(r7)
    stw r12, 0x8(r6)
    stw r11, 0xc(r6)
    lwz r12, 0x10(r7)
    lwz r11, 0x14(r7)
    stw r12, 0x10(r6)
    stw r11, 0x14(r6)
    lwz r12, 0x18(r7)
    lwz r11, 0x1c(r7)
    addi r7, r7, 0x20
    stw r12, 0x18(r6)
    stw r11, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_80698A2C_00000AC8
    b lbl_fn_80698A2C_00000D04
lbl_fn_80698A2C_00000B1C:
    lwz r10, -0x1(r4)
    mtctr r9
    addi r7, r4, 0x3
    slwi r10, r10, 8
lbl_fn_80698A2C_00000B2C:
    dcbz r0, r6
    lwz r12, 0x0(r7)
    lwz r11, 0x4(r7)
    rlwimi r10, r12, 8, 24, 31
    slwi r8, r12, 8
    stw r10, 0x0(r6)
    rlwimi r8, r11, 8, 24, 31
    slwi r9, r11, 8
    lwz r12, 0x8(r7)
    stw r8, 0x4(r6)
    rlwimi r9, r12, 8, 24, 31
    slwi r8, r12, 8
    lwz r11, 0xc(r7)
    stw r9, 0x8(r6)
    rlwimi r8, r11, 8, 24, 31
    slwi r10, r11, 8
    lwz r12, 0x10(r7)
    stw r8, 0xc(r6)
    rlwimi r10, r12, 8, 24, 31
    slwi r8, r12, 8
    lwz r11, 0x14(r7)
    stw r10, 0x10(r6)
    rlwimi r8, r11, 8, 24, 31
    slwi r9, r11, 8
    lwz r12, 0x18(r7)
    stw r8, 0x14(r6)
    rlwimi r9, r12, 8, 24, 31
    slwi r8, r12, 8
    lwz r11, 0x1c(r7)
    addi r7, r7, 0x20
    stw r9, 0x18(r6)
    rlwimi r8, r11, 8, 24, 31
    slwi r10, r11, 8
    stw r8, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_80698A2C_00000B2C
    b lbl_fn_80698A2C_00000D04
lbl_fn_80698A2C_00000BC0:
    lwz r10, -0x2(r4)
    mtctr r9
    addi r7, r4, 0x2
    slwi r10, r10, 16
lbl_fn_80698A2C_00000BD0:
    dcbz r0, r6
    lwz r12, 0x0(r7)
    lwz r11, 0x4(r7)
    rlwimi r10, r12, 16, 16, 31
    slwi r8, r12, 16
    stw r10, 0x0(r6)
    rlwimi r8, r11, 16, 16, 31
    slwi r9, r11, 16
    lwz r12, 0x8(r7)
    stw r8, 0x4(r6)
    rlwimi r9, r12, 16, 16, 31
    slwi r8, r12, 16
    lwz r11, 0xc(r7)
    stw r9, 0x8(r6)
    rlwimi r8, r11, 16, 16, 31
    slwi r10, r11, 16
    lwz r12, 0x10(r7)
    stw r8, 0xc(r6)
    rlwimi r10, r12, 16, 16, 31
    slwi r8, r12, 16
    lwz r11, 0x14(r7)
    stw r10, 0x10(r6)
    rlwimi r8, r11, 16, 16, 31
    slwi r9, r11, 16
    lwz r12, 0x18(r7)
    stw r8, 0x14(r6)
    rlwimi r9, r12, 16, 16, 31
    slwi r8, r12, 16
    lwz r11, 0x1c(r7)
    addi r7, r7, 0x20
    stw r9, 0x18(r6)
    rlwimi r8, r11, 16, 16, 31
    slwi r10, r11, 16
    stw r8, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_80698A2C_00000BD0
    b lbl_fn_80698A2C_00000D04
lbl_fn_80698A2C_00000C64:
    lwz r10, -0x3(r4)
    mtctr r9
    addi r7, r4, 0x1
    slwi r10, r10, 24
lbl_fn_80698A2C_00000C74:
    dcbz r0, r6
    lwz r12, 0x0(r7)
    lwz r11, 0x4(r7)
    rlwimi r10, r12, 24, 8, 31
    slwi r8, r12, 24
    stw r10, 0x0(r6)
    rlwimi r8, r11, 24, 8, 31
    slwi r9, r11, 24
    lwz r12, 0x8(r7)
    stw r8, 0x4(r6)
    rlwimi r9, r12, 24, 8, 31
    slwi r8, r12, 24
    lwz r11, 0xc(r7)
    stw r9, 0x8(r6)
    rlwimi r8, r11, 24, 8, 31
    slwi r10, r11, 24
    lwz r12, 0x10(r7)
    stw r8, 0xc(r6)
    rlwimi r10, r12, 24, 8, 31
    slwi r8, r12, 24
    lwz r11, 0x14(r7)
    stw r10, 0x10(r6)
    rlwimi r8, r11, 24, 8, 31
    slwi r9, r11, 24
    lwz r12, 0x18(r7)
    stw r8, 0x14(r6)
    rlwimi r9, r12, 24, 8, 31
    slwi r8, r12, 24
    lwz r11, 0x1c(r7)
    addi r7, r7, 0x20
    stw r9, 0x18(r6)
    rlwimi r8, r11, 24, 8, 31
    slwi r10, r11, 24
    stw r8, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_80698A2C_00000C74
lbl_fn_80698A2C_00000D04:
    add r3, r3, r31
    add r4, r4, r31
    subf r5, r31, r5
lbl_fn_80698A2C_00000D10:
    srwi. r7, r5, 2
    clrlwi r6, r5, 30
    beq lbl_fn_80698A2C_00000D34
    mtctr r7
lbl_fn_80698A2C_00000D20:
    lwz r5, 0x0(r4)
    addi r4, r4, 0x4
    stw r5, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_fn_80698A2C_00000D20
lbl_fn_80698A2C_00000D34:
    cmpwi r6, 0x0
    beq lbl_fn_80698A2C_00000D54
    mtctr r6
lbl_fn_80698A2C_00000D40:
    lbz r5, 0x0(r4)
    addi r4, r4, 0x1
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_fn_80698A2C_00000D40
lbl_fn_80698A2C_00000D54:
    mr r3, r0
lbl_fn_80698A2C_00000D58:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_80698DEC(void)
{
    nofralloc
    cmpwi r5, 0x0
    mr r9, r3
    beqlr
    cmplwi r5, 0x40
    rlwimi r4, r4, 8, 16, 23
    rlwimi r4, r4, 16, 0, 15
    blt lbl_fn_80698DEC_00000E2C
    clrlwi. r8, r3, 27
    beq lbl_fn_80698DEC_00000DCC
    subfic r8, r8, 0x20
    mr r7, r3
    srwi. r6, r8, 2
    clrlwi r0, r8, 30
    beq lbl_fn_80698DEC_00000DAC
    mtctr r6
lbl_fn_80698DEC_00000DA0:
    stw r4, 0x0(r7)
    addi r7, r7, 0x4
    bdnz lbl_fn_80698DEC_00000DA0
lbl_fn_80698DEC_00000DAC:
    cmpwi r0, 0x0
    beq lbl_fn_80698DEC_00000DC4
    mtctr r0
lbl_fn_80698DEC_00000DB8:
    stb r4, 0x0(r7)
    addi r7, r7, 0x1
    bdnz lbl_fn_80698DEC_00000DB8
lbl_fn_80698DEC_00000DC4:
    add r3, r3, r8
    subf r5, r8, r5
lbl_fn_80698DEC_00000DCC:
    cmpwi r4, 0x0
    mr r6, r3
    clrrwi r7, r5, 5
    srwi r0, r5, 5
    bne lbl_fn_80698DEC_00000DF4
    mtctr r0
lbl_fn_80698DEC_00000DE4:
    dcbz r0, r6
    addi r6, r6, 0x20
    bdnz lbl_fn_80698DEC_00000DE4
    b lbl_fn_80698DEC_00000E24
lbl_fn_80698DEC_00000DF4:
    mtctr r0
lbl_fn_80698DEC_00000DF8:
    dcbz r0, r6
    stw r4, 0x0(r6)
    stw r4, 0x4(r6)
    stw r4, 0x8(r6)
    stw r4, 0xc(r6)
    stw r4, 0x10(r6)
    stw r4, 0x14(r6)
    stw r4, 0x18(r6)
    stw r4, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_80698DEC_00000DF8
lbl_fn_80698DEC_00000E24:
    add r3, r3, r7
    subf r5, r7, r5
lbl_fn_80698DEC_00000E2C:
    srwi. r6, r5, 2
    clrlwi r0, r5, 30
    beq lbl_fn_80698DEC_00000E48
    mtctr r6
lbl_fn_80698DEC_00000E3C:
    stw r4, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_fn_80698DEC_00000E3C
lbl_fn_80698DEC_00000E48:
    cmpwi r0, 0x0
    beq lbl_fn_80698DEC_00000E60
    mtctr r0
lbl_fn_80698DEC_00000E54:
    stb r4, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_fn_80698DEC_00000E54
lbl_fn_80698DEC_00000E60:
    mr r3, r9
    blr
}

asm void fn_80698EF0(void)
{
    nofralloc
    lis r7, 0x6745
    lis r6, 0xefce
    li r0, 0x0
    lis r5, 0x98bb
    lis r4, 0x1032
    addi r7, r7, 0x2301
    subi r6, r6, 0x5477
    subi r5, r5, 0x2302
    addi r4, r4, 0x5476
    stw r7, 0x0(r3)
    stw r6, 0x4(r3)
    stw r5, 0x8(r3)
    stw r4, 0xc(r3)
    stw r0, 0x14(r3)
    stw r0, 0x10(r3)
    blr
}

asm void fn_80698F30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r7, 0x14(r3)
    lwz r0, 0x10(r3)
    addc r6, r7, r5
    clrlwi r7, r7, 26
    addze r0, r0
    stw r6, 0x14(r3)
    subfic r31, r7, 0x40
    cmplw r31, r5
    stw r0, 0x10(r3)
    ble lbl_fn_80698F30_00000F10
    cmpwi r5, 0x0
    beq lbl_fn_80698F30_00000F78
    add r3, r3, r7
    addi r3, r3, 0x18
    bl memcpy
    b lbl_fn_80698F30_00000F78
lbl_fn_80698F30_00000F10:
    add r3, r3, r7
    mr r5, r31
    addi r3, r3, 0x18
    bl memcpy
    mr r3, r28
    bl fn_80699148
    subf r29, r31, r29
    add r30, r30, r31
    srwi r31, r29, 6
    b lbl_fn_80698F30_00000F58
lbl_fn_80698F30_00000F38:
    mr r4, r30
    addi r3, r28, 0x18
    li r5, 0x40
    bl memcpy
    mr r3, r28
    addi r30, r30, 0x40
    bl fn_80699148
    subi r31, r31, 0x1
lbl_fn_80698F30_00000F58:
    cmpwi r31, 0x0
    bgt lbl_fn_80698F30_00000F38
    clrlwi. r29, r29, 26
    beq lbl_fn_80698F30_00000F78
    mr r4, r30
    mr r5, r29
    addi r3, r28, 0x18
    bl memcpy
lbl_fn_80698F30_00000F78:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80699020(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    la r4, lbl_8087ED48
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x10(r3)
    lwz r6, 0x14(r3)
    slwi r29, r0, 3
    slwi r28, r6, 3
    rlwimi r29, r6, 3, 29, 31
    bl fn_80698F30
    lwz r0, 0x14(r30)
    clrlwi r0, r0, 26
    subfic r5, r0, 0x40
    cmplwi r5, 0x8
    bge lbl_fn_80699020_00001010
    add r3, r30, r0
    li r4, 0x0
    addi r3, r3, 0x18
    bl memset
    mr r3, r30
    bl fn_80699148
    li r0, 0x0
    li r5, 0x40
lbl_fn_80699020_00001010:
    cmplwi r5, 0x8
    ble lbl_fn_80699020_0000102C
    add r3, r30, r0
    subi r5, r5, 0x8
    addi r3, r3, 0x18
    li r4, 0x0
    bl memset
lbl_fn_80699020_0000102C:
    rlwinm r5, r28, 8, 8, 15
    rlwinm r4, r28, 24, 16, 23
    rlwinm r3, r29, 8, 8, 15
    rlwinm r0, r29, 24, 16, 23
    rlwimi r5, r28, 24, 0, 7
    rlwimi r4, r28, 8, 24, 31
    or r4, r5, r4
    rlwimi r3, r29, 24, 0, 7
    rlwimi r0, r29, 8, 24, 31
    stw r4, 0x50(r30)
    or r0, r3, r0
    mr r3, r30
    stw r0, 0x54(r30)
    bl fn_80699148
    lwz r0, 0x0(r30)
    stwbrx r0, r0, r31
    addi r0, r31, 0x4
    lwz r3, 0x4(r30)
    stwbrx r3, r0, r0
    addi r0, r31, 0x8
    lwz r3, 0x8(r30)
    stwbrx r3, r0, r0
    addi r0, r31, 0xc
    lwz r3, 0xc(r30)
    stwbrx r3, r0, r0
    mr r3, r30
    li r4, 0x0
    li r5, 0x58
    bl memset
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80699148(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    addi r8, r3, 0x18
    lis r9, lbl_807BC158@ha
    li r10, 0x4
    stw r31, 0x1c(r1)
    mr r4, r8
    addi r9, r9, lbl_807BC158@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x0(r3)
    lwz r5, 0x4(r3)
    lwz r6, 0x8(r3)
    lwz r7, 0xc(r3)
    mtctr r10
lbl_fn_80699148_000010F8:
    lwz r12, 0x0(r9)
    lwbrx r30, r0, r4
    lwbrx r31, r0, r4
    and r11, r5, r6
    andc r10, r7, r5
    addi r4, r4, 0x4
    or r11, r11, r10
    add r11, r0, r11
    add r10, r31, r12
    add r0, r12, r11
    lwz r31, 0x4(r9)
    add r0, r30, r0
    add r10, r11, r10
    srwi r0, r0, 25
    rlwimi r0, r10, 7, 0, 24
    add r0, r5, r0
    lwbrx r30, r0, r4
    lwbrx r12, r0, r4
    and r11, r0, r5
    andc r10, r6, r0
    addi r4, r4, 0x4
    or r11, r11, r10
    add r11, r7, r11
    add r10, r12, r31
    add r7, r31, r11
    lwz r12, 0x8(r9)
    add r7, r30, r7
    add r10, r11, r10
    srwi r7, r7, 20
    rlwimi r7, r10, 12, 0, 19
    add r7, r0, r7
    lwbrx r30, r0, r4
    lwbrx r31, r0, r4
    and r11, r7, r0
    andc r10, r5, r7
    addi r4, r4, 0x4
    or r11, r11, r10
    add r11, r6, r11
    add r10, r31, r12
    add r6, r12, r11
    lwz r31, 0xc(r9)
    add r6, r30, r6
    add r10, r11, r10
    srwi r6, r6, 15
    rlwimi r6, r10, 17, 0, 14
    add r6, r7, r6
    lwbrx r12, r0, r4
    lwbrx r30, r0, r4
    and r11, r6, r7
    andc r10, r0, r6
    addi r9, r9, 0x10
    or r11, r11, r10
    addi r4, r4, 0x4
    add r11, r5, r11
    add r10, r30, r31
    add r5, r31, r11
    add r5, r12, r5
    add r10, r11, r10
    srwi r5, r5, 10
    rlwimi r5, r10, 22, 0, 9
    add r5, r6, r5
    bdnz lbl_fn_80699148_000010F8
    lis r4, lbl_807BC258@ha
    li r10, 0x4
    addi r4, r4, lbl_807BC258@l
    mtctr r10
lbl_fn_80699148_00001200:
    lwz r10, 0x0(r4)
    lwz r31, 0x0(r9)
    slwi r10, r10, 2
    add r10, r8, r10
    lwbrx r30, r0, r10
    lwbrx r29, r0, r10
    and r12, r5, r7
    andc r11, r6, r7
    lwz r10, 0x4(r4)
    or r12, r12, r11
    add r12, r0, r12
    add r11, r29, r31
    slwi r0, r10, 2
    add r10, r31, r12
    add r11, r12, r11
    add r10, r30, r10
    add r12, r8, r0
    srwi r10, r10, 27
    lwz r31, 0x4(r9)
    rlwimi r10, r11, 5, 0, 26
    add r0, r5, r10
    lwbrx r29, r0, r12
    lwbrx r30, r0, r12
    and r12, r0, r6
    andc r11, r5, r6
    lwz r10, 0x8(r4)
    or r12, r12, r11
    add r12, r7, r12
    add r11, r30, r31
    slwi r7, r10, 2
    add r10, r31, r12
    add r11, r12, r11
    add r10, r29, r10
    add r12, r8, r7
    srwi r10, r10, 23
    lwz r31, 0x8(r9)
    rlwimi r10, r11, 9, 0, 22
    add r7, r0, r10
    lwbrx r29, r0, r12
    lwbrx r30, r0, r12
    and r12, r7, r5
    andc r11, r0, r5
    lwz r10, 0xc(r4)
    or r12, r12, r11
    add r12, r6, r12
    add r11, r30, r31
    slwi r6, r10, 2
    add r10, r31, r12
    add r11, r12, r11
    add r10, r29, r10
    add r12, r8, r6
    srwi r10, r10, 18
    lwz r31, 0xc(r9)
    rlwimi r10, r11, 14, 0, 17
    add r6, r7, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    and r11, r6, r0
    andc r10, r7, r0
    addi r9, r9, 0x10
    or r11, r11, r10
    addi r4, r4, 0x10
    add r11, r5, r11
    add r10, r12, r31
    add r5, r31, r11
    add r5, r29, r5
    add r10, r11, r10
    srwi r5, r5, 12
    rlwimi r5, r10, 20, 0, 11
    add r5, r6, r5
    bdnz lbl_fn_80699148_00001200
    li r10, 0x4
    mtctr r10
lbl_fn_80699148_00001324:
    lwz r10, 0x0(r4)
    lwz r31, 0x0(r9)
    slwi r10, r10, 2
    add r10, r8, r10
    lwbrx r29, r0, r10
    lwbrx r12, r0, r10
    xor r10, r7, r5
    xor r11, r10, r6
    lwz r10, 0x4(r4)
    add r30, r0, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r0, r10, 2
    add r10, r29, r11
    lwz r31, 0x4(r9)
    add r11, r30, r12
    add r12, r8, r0
    srwi r10, r10, 28
    rlwimi r10, r11, 4, 0, 27
    add r0, r5, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    xor r10, r6, r0
    xor r11, r10, r5
    lwz r10, 0x8(r4)
    add r30, r7, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r7, r10, 2
    add r10, r29, r11
    lwz r31, 0x8(r9)
    add r11, r30, r12
    add r12, r8, r7
    srwi r10, r10, 21
    rlwimi r10, r11, 11, 0, 20
    add r7, r0, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    xor r10, r5, r7
    xor r11, r10, r0
    lwz r10, 0xc(r4)
    add r30, r6, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r6, r10, 2
    add r10, r29, r11
    add r11, r30, r12
    add r12, r8, r6
    srwi r10, r10, 16
    rlwimi r10, r11, 16, 0, 15
    lwz r11, 0xc(r9)
    add r6, r7, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    xor r10, r0, r6
    xor r10, r10, r7
    addi r9, r9, 0x10
    add r30, r5, r10
    addi r4, r4, 0x10
    add r10, r12, r11
    add r5, r11, r30
    add r5, r29, r5
    add r10, r30, r10
    srwi r5, r5, 9
    rlwimi r5, r10, 23, 0, 8
    add r5, r6, r5
    bdnz lbl_fn_80699148_00001324
    li r10, 0x4
    mtctr r10
lbl_fn_80699148_00001438:
    lwz r10, 0x0(r4)
    lwz r31, 0x0(r9)
    slwi r10, r10, 2
    add r10, r8, r10
    lwbrx r29, r0, r10
    lwbrx r12, r0, r10
    orc r10, r5, r7
    xor r11, r6, r10
    lwz r10, 0x4(r4)
    add r30, r0, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r0, r10, 2
    add r10, r29, r11
    lwz r31, 0x4(r9)
    add r11, r30, r12
    add r12, r8, r0
    srwi r10, r10, 26
    rlwimi r10, r11, 6, 0, 25
    add r0, r5, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    orc r10, r0, r6
    xor r11, r5, r10
    lwz r10, 0x8(r4)
    add r30, r7, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r7, r10, 2
    add r10, r29, r11
    lwz r31, 0x8(r9)
    add r11, r30, r12
    add r12, r8, r7
    srwi r10, r10, 22
    rlwimi r10, r11, 10, 0, 21
    add r7, r0, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    orc r10, r7, r5
    xor r11, r0, r10
    lwz r10, 0xc(r4)
    add r30, r6, r11
    add r12, r12, r31
    add r11, r31, r30
    slwi r6, r10, 2
    add r10, r29, r11
    add r11, r30, r12
    add r12, r8, r6
    srwi r10, r10, 17
    rlwimi r10, r11, 15, 0, 16
    lwz r11, 0xc(r9)
    add r6, r7, r10
    lwbrx r29, r0, r12
    lwbrx r12, r0, r12
    orc r10, r6, r0
    xor r10, r7, r10
    addi r9, r9, 0x10
    add r30, r5, r10
    addi r4, r4, 0x10
    add r10, r12, r11
    add r5, r11, r30
    add r5, r29, r5
    add r10, r30, r10
    srwi r5, r5, 11
    rlwimi r5, r10, 21, 0, 10
    add r5, r6, r5
    bdnz lbl_fn_80699148_00001438
    lwz r9, 0x0(r3)
    lwz r8, 0x4(r3)
    add r9, r9, r0
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    add r5, r8, r5
    add r4, r4, r6
    stw r9, 0x0(r3)
    add r0, r0, r7
    stw r5, 0x4(r3)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_80699610(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lwz r6, 0x100(r3)
    lis r9, lbl_80766A60@ha
    lwz r0, 0x0(r5)
    addi r11, r3, 0x20
    lwz r7, 0x10(r3)
    srwi r12, r6, 24
    lwz r6, 0x4(r5)
    addi r9, r9, lbl_80766A60@l
    lwz r10, 0x14(r3)
    xor r0, r0, r7
    lwz r7, 0x8(r5)
    lwz r8, 0x18(r3)
    xor r6, r6, r10
    lwz r5, 0xc(r5)
    lwz r3, 0x1c(r3)
    xor r7, r7, r8
    xor r5, r5, r3
    b lbl_fn_80699610_000016E8
lbl_fn_80699610_000015E4:
    rlwinm r10, r0, 10, 22, 29
    rlwinm r23, r6, 10, 22, 29
    rlwinm r24, r7, 18, 22, 29
    rlwinm r29, r5, 10, 22, 29
    lwzx r22, r9, r10
    rlwinm r21, r6, 18, 22, 29
    rlwinm r26, r7, 10, 22, 29
    rlwinm r27, r5, 18, 22, 29
    rlwinm r28, r0, 18, 22, 29
    lwzx r23, r9, r23
    lwzx r24, r9, r24
    rlwinm r8, r7, 26, 22, 29
    rlwinm r25, r0, 26, 22, 29
    clrlslwi r31, r7, 24, 2
    lwzx r26, r9, r26
    rlwinm r3, r5, 26, 22, 29
    rotrwi r7, r22, 8
    lwzx r27, r9, r27
    lwzx r22, r9, r3
    clrlslwi r10, r5, 24, 2
    lwzx r28, r9, r28
    clrlslwi r5, r0, 24, 2
    lwzx r20, r9, r8
    rlwinm r30, r6, 26, 22, 29
    lwzx r29, r9, r29
    rotrwi r23, r23, 8
    lwzx r21, r9, r21
    clrlslwi r0, r6, 24, 2
    rotrwi r8, r29, 8
    rotlwi r3, r28, 16
    lwzx r25, r9, r25
    rotlwi r6, r21, 16
    xor r3, r8, r3
    rotlwi r24, r24, 16
    lwzx r29, r9, r30
    xor r30, r23, r24
    xor r21, r7, r6
    rotlwi r20, r20, 8
    rotlwi r28, r25, 8
    lwzx r25, r9, r0
    rotrwi r26, r26, 8
    rotlwi r27, r27, 16
    xor r7, r26, r27
    lwzx r26, r9, r10
    xor r24, r20, r21
    rotlwi r22, r22, 8
    lwzx r23, r9, r5
    xor r5, r22, r30
    xor r10, r28, r7
    rotlwi r6, r29, 8
    xor r7, r6, r3
    lwzx r8, r9, r31
    xor r21, r23, r5
    lwz r6, 0x4(r11)
    lwz r0, 0x0(r11)
    xor r20, r26, r24
    lwz r5, 0x8(r11)
    xor r10, r25, r10
    lwz r3, 0xc(r11)
    xor r8, r8, r7
    xor r7, r10, r5
    xor r0, r20, r0
    xor r6, r21, r6
    xor r5, r8, r3
    addi r11, r11, 0x10
lbl_fn_80699610_000016E8:
    subic. r12, r12, 0x1
    bne lbl_fn_80699610_000015E4
    lis r3, lbl_80766840@ha
    extrwi r8, r6, 8, 8
    addi r3, r3, lbl_80766840@l
    extrwi r9, r7, 8, 16
    srwi r28, r0, 24
    lbzx r8, r3, r8
    clrlwi r12, r5, 24
    lbzx r31, r3, r9
    lbzx r30, r3, r12
    slwi r12, r8, 16
    lbzx r28, r3, r28
    extrwi r8, r7, 8, 8
    rlwimi r30, r31, 8, 16, 23
    lbzx r8, r3, r8
    rlwimi r12, r28, 24, 0, 7
    extrwi r10, r5, 8, 16
    or r30, r30, r12
    clrlwi r29, r0, 24
    lbzx r28, r3, r10
    srwi r9, r6, 24
    lbzx r29, r3, r29
    slwi r12, r8, 16
    lwz r31, 0x0(r11)
    extrwi r10, r0, 8, 16
    rlwimi r29, r28, 8, 16, 23
    extrwi r0, r0, 8, 8
    xor r8, r31, r30
    lbzx r30, r3, r9
    stw r8, 0x0(r4)
    srwi r9, r7, 24
    extrwi r8, r5, 8, 8
    rlwimi r12, r30, 24, 0, 7
    or r30, r29, r12
    clrlwi r31, r6, 24
    lbzx r8, r3, r8
    srwi r5, r5, 24
    lbzx r0, r3, r0
    extrwi r6, r6, 8, 16
    lwz r28, 0x4(r11)
    slwi r8, r8, 16
    lbzx r12, r3, r10
    clrlwi r7, r7, 24
    xor r10, r28, r30
    lbzx r9, r3, r9
    stw r10, 0x4(r4)
    slwi r0, r0, 16
    lbzx r10, r3, r31
    rlwimi r8, r9, 24, 0, 7
    rlwimi r10, r12, 8, 16, 23
    lbzx r5, r3, r5
    lbzx r6, r3, r6
    or r8, r10, r8
    lbzx r3, r3, r7
    rlwimi r0, r5, 24, 0, 7
    lwz r9, 0x8(r11)
    rlwimi r3, r6, 8, 16, 23
    or r0, r3, r0
    xor r5, r9, r8
    stw r5, 0x8(r4)
    lwz r3, 0xc(r11)
    addi r11, r1, 0x40
    xor r0, r3, r0
    stw r0, 0xc(r4)
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80699888(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lwz r6, 0x100(r3)
    addi r11, r3, 0x10
    extrwi. r0, r6, 1, 8
    srwi r12, r6, 24
    rlwinm r0, r6, 12, 20, 27
    add r11, r11, r0
    beq lbl_fn_80699888_00001970
    lis r6, 0x7f7f
    lis r7, lbl_80808080@ha
    addi r6, r6, 0x7f7f
    li r10, 0x1
    addi r0, r7, lbl_80808080@l
    li r30, 0x10
    li r31, 0x2
    b lbl_fn_80699888_00001958
lbl_fn_80699888_00001850:
    add r9, r3, r30
    mtctr r31
lbl_fn_80699888_00001858:
    lwz r8, 0x10(r9)
    and r7, r8, r0
    and r20, r8, r6
    srwi r7, r7, 7
    mulli r7, r7, 0x1b
    slwi r20, r20, 1
    xor r7, r20, r7
    and r20, r7, r0
    srwi r20, r20, 7
    and r21, r7, r6
    mulli r20, r20, 0x1b
    slwi r21, r21, 1
    xor r22, r21, r20
    and r20, r22, r0
    srwi r20, r20, 7
    and r21, r22, r6
    mulli r20, r20, 0x1b
    slwi r21, r21, 1
    xor r21, r8, r21
    xor r21, r21, r20
    rotlwi r20, r21, 8
    xor r20, r22, r20
    xor r21, r21, r20
    rotlwi r20, r21, 8
    xor r7, r7, r20
    xor r21, r21, r7
    rotlwi r7, r21, 8
    xor r7, r8, r7
    xor r21, r21, r7
    stw r21, 0x10(r9)
    lwz r8, 0x14(r9)
    and r7, r8, r0
    and r20, r8, r6
    srwi r7, r7, 7
    mulli r7, r7, 0x1b
    slwi r20, r20, 1
    xor r7, r20, r7
    and r20, r7, r0
    srwi r20, r20, 7
    and r21, r7, r6
    mulli r20, r20, 0x1b
    slwi r21, r21, 1
    xor r22, r21, r20
    and r20, r22, r0
    srwi r20, r20, 7
    and r21, r22, r6
    slwi r21, r21, 1
    mulli r20, r20, 0x1b
    xor r21, r8, r21
    xor r21, r21, r20
    rotlwi r20, r21, 8
    xor r20, r22, r20
    xor r21, r21, r20
    rotlwi r20, r21, 8
    xor r7, r7, r20
    xor r21, r21, r7
    rotlwi r7, r21, 8
    xor r7, r8, r7
    xor r21, r21, r7
    stw r21, 0x14(r9)
    addi r9, r9, 0x8
    bdnz lbl_fn_80699888_00001858
    addi r30, r30, 0x10
    addi r10, r10, 0x1
lbl_fn_80699888_00001958:
    lwz r8, 0x100(r3)
    srwi r7, r8, 24
    cmplw r10, r7
    blt lbl_fn_80699888_00001850
    rlwinm r0, r8, 0, 9, 7
    stw r0, 0x100(r3)
lbl_fn_80699888_00001970:
    lwz r7, 0x0(r5)
    lis r9, lbl_80766E60@ha
    lwz r6, 0x0(r11)
    addi r9, r9, lbl_80766E60@l
    lwz r3, 0x4(r5)
    lwz r0, 0x4(r11)
    xor r6, r7, r6
    lwz r10, 0x8(r5)
    xor r0, r3, r0
    lwz r8, 0x8(r11)
    lwz r3, 0xc(r11)
    subi r11, r11, 0x10
    lwz r7, 0xc(r5)
    xor r5, r10, r8
    xor r7, r7, r3
    b lbl_fn_80699888_00001AB4
lbl_fn_80699888_000019B0:
    rlwinm r10, r6, 10, 22, 29
    rlwinm r23, r0, 10, 22, 29
    rlwinm r24, r6, 18, 22, 29
    rlwinm r28, r7, 10, 22, 29
    lwzx r22, r9, r10
    rlwinm r21, r7, 18, 22, 29
    rlwinm r26, r5, 10, 22, 29
    rlwinm r31, r0, 18, 22, 29
    rlwinm r27, r5, 18, 22, 29
    rlwinm r8, r5, 26, 22, 29
    lwzx r23, r9, r23
    rlwinm r25, r6, 26, 22, 29
    lwzx r24, r9, r24
    rlwinm r3, r7, 26, 22, 29
    lwzx r26, r9, r26
    rlwinm r29, r0, 26, 22, 29
    clrlslwi r10, r0, 24, 2
    clrlslwi r0, r7, 24, 2
    rotrwi r7, r22, 8
    lwzx r31, r9, r31
    lwzx r22, r9, r3
    clrlslwi r5, r5, 24, 2
    lwzx r27, r9, r27
    rotrwi r23, r23, 8
    lwzx r20, r9, r8
    rotlwi r24, r24, 16
    lwzx r28, r9, r28
    clrlslwi r30, r6, 24, 2
    lwzx r21, r9, r21
    rotrwi r26, r26, 8
    rotrwi r8, r28, 8
    lwzx r28, r9, r29
    rotlwi r6, r21, 16
    rotlwi r3, r27, 16
    lwzx r25, r9, r25
    xor r29, r23, r24
    xor r21, r7, r6
    rotlwi r31, r31, 16
    rotlwi r20, r20, 8
    rotlwi r27, r25, 8
    xor r7, r26, r31
    xor r3, r8, r3
    lwzx r26, r9, r10
    xor r24, r20, r21
    lwzx r25, r9, r0
    xor r10, r27, r7
    rotlwi r6, r28, 8
    rotlwi r22, r22, 8
    xor r7, r6, r3
    lwzx r23, r9, r5
    xor r5, r22, r29
    lwzx r8, r9, r30
    xor r21, r23, r5
    lwz r0, 0x4(r11)
    lwz r6, 0x0(r11)
    xor r20, r26, r24
    lwz r5, 0x8(r11)
    xor r10, r25, r10
    lwz r3, 0xc(r11)
    xor r7, r8, r7
    xor r6, r20, r6
    xor r0, r21, r0
    xor r5, r10, r5
    xor r7, r7, r3
    subi r11, r11, 0x10
lbl_fn_80699888_00001AB4:
    subic. r12, r12, 0x1
    bne lbl_fn_80699888_000019B0
    lis r3, lbl_80766940@ha
    srwi r8, r6, 24
    addi r3, r3, lbl_80766940@l
    extrwi r10, r5, 8, 16
    lbzx r8, r3, r8
    extrwi r9, r7, 8, 8
    lbzx r12, r3, r10
    clrlwi r28, r0, 24
    lbzx r10, r3, r9
    slwi r8, r8, 24
    slwi r27, r12, 8
    lbzx r28, r3, r28
    lwz r9, 0x0(r11)
    slwi r12, r10, 16
    xor r27, r28, r27
    clrlwi r30, r7, 24
    xor r10, r9, r8
    srwi r8, r0, 24
    xor r12, r12, r10
    extrwi r9, r7, 8, 16
    xor r12, r27, r12
    clrlwi r27, r5, 24
    lbzx r28, r3, r9
    extrwi r10, r6, 8, 8
    stw r12, 0x0(r4)
    srwi r7, r7, 24
    lbzx r12, r3, r10
    slwi r28, r28, 8
    lbzx r8, r3, r8
    lbzx r27, r3, r27
    slwi r29, r12, 16
    slwi r9, r8, 24
    srwi r8, r5, 24
    lwz r10, 0x4(r11)
    xor r28, r27, r28
    lbzx r8, r3, r8
    extrwi r5, r5, 8, 8
    xor r31, r10, r9
    extrwi r9, r0, 8, 8
    lbzx r12, r3, r9
    extrwi r10, r6, 8, 16
    xor r31, r29, r31
    slwi r9, r8, 24
    xor r8, r28, r31
    lbzx r10, r3, r10
    stw r8, 0x4(r4)
    extrwi r8, r0, 8, 16
    lbzx r0, r3, r7
    clrlwi r7, r6, 24
    lbzx r31, r3, r30
    slwi r30, r10, 8
    lbzx r5, r3, r5
    slwi r12, r12, 16
    lwz r10, 0x8(r11)
    slwi r0, r0, 24
    lbzx r6, r3, r8
    slwi r5, r5, 16
    xor r8, r10, r9
    lbzx r7, r3, r7
    slwi r3, r6, 8
    xor r9, r31, r30
    xor r8, r12, r8
    xor r8, r9, r8
    xor r6, r7, r3
    stw r8, 0x8(r4)
    lwz r3, 0xc(r11)
    addi r11, r1, 0x40
    xor r0, r3, r0
    xor r0, r5, r0
    xor r0, r6, r0
    stw r0, 0xc(r4)
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80699C74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmplwi r5, 0x10
    mr r29, r3
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    beq lbl_fn_80699C74_00001C3C
    cmplwi r5, 0x18
    beq lbl_fn_80699C74_00001C3C
    cmplwi r5, 0x20
    beq lbl_fn_80699C74_00001C3C
    lis r3, lbl_807BC318@ha
    addi r3, r3, lbl_807BC318@l
    crclr 6
    bl OSReport
    b lbl_fn_80699C74_00001D80
lbl_fn_80699C74_00001C3C:
    extrwi r4, r5, 27, 3
    lwz r0, 0x100(r3)
    addi r5, r4, 0x6
    stw r7, 0x104(r3)
    oris r0, r0, 0x80
    mr r4, r6
    rlwimi r0, r5, 24, 0, 7
    li r5, 0x10
    stw r0, 0x100(r3)
    mr r3, r29
    bl memcpy
    addi r31, r29, 0x10
    mr r4, r27
    mr r3, r31
    mr r5, r28
    srwi r30, r28, 2
    bl memcpy
    slwi r0, r30, 2
    lis r9, lbl_80766840@ha
    add r4, r31, r0
    lis r3, lbl_80766A40@ha
    lwz r8, -0x4(r4)
    mr r5, r30
    addi r9, r9, lbl_80766840@l
    addi r3, r3, lbl_80766A40@l
    b lbl_fn_80699C74_00001D64
lbl_fn_80699C74_00001CA4:
    divwu r10, r5, r30
    mullw r0, r10, r30
    subf. r0, r0, r5
    bne lbl_fn_80699C74_00001D00
    clrlwi r7, r8, 24
    extrwi r0, r8, 8, 16
    srwi r11, r8, 24
    extrwi r6, r8, 8, 8
    lbzx r8, r9, r6
    add r6, r3, r10
    lbzx r7, r9, r7
    slwi r10, r8, 24
    lbzx r11, r9, r11
    lbzx r0, r9, r0
    slwi r8, r7, 8
    xor r10, r11, r10
    slwi r7, r0, 16
    lbz r0, -0x1(r6)
    xor r6, r8, r7
    slwi r0, r0, 24
    xor r8, r10, r6
    xor r8, r8, r0
    b lbl_fn_80699C74_00001D48
lbl_fn_80699C74_00001D00:
    cmplwi r30, 0x6
    ble lbl_fn_80699C74_00001D48
    cmplwi r0, 0x4
    bne lbl_fn_80699C74_00001D48
    extrwi r0, r8, 8, 16
    extrwi r7, r8, 8, 8
    clrlwi r6, r8, 24
    lbzx r0, r9, r0
    srwi r8, r8, 24
    lbzx r7, r9, r7
    lbzx r8, r9, r8
    slwi r0, r0, 8
    lbzx r6, r9, r6
    slwi r7, r7, 16
    slwi r8, r8, 24
    xor r0, r6, r0
    xor r0, r7, r0
    xor r8, r8, r0
lbl_fn_80699C74_00001D48:
    subf r0, r30, r5
    addi r5, r5, 0x1
    slwi r0, r0, 2
    lwzx r0, r31, r0
    xor r8, r8, r0
    stw r8, 0x0(r4)
    addi r4, r4, 0x4
lbl_fn_80699C74_00001D64:
    lwz r0, 0x100(r29)
    srwi r6, r0, 24
    addi r0, r6, 0x1
    slwi r0, r0, 2
    cmplw r5, r0
    blt lbl_fn_80699C74_00001CA4
    li r30, 0x1
lbl_fn_80699C74_00001D80:
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80699E24(void)
{
    nofralloc
    la r7, lbl_80889000
    b fn_80699C74
}

asm void fn_80699E2C(void)
{
    nofralloc
    blr
}

asm void fn_80699E30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r7, 0x104(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r30, 0x0(r7)
    mr r29, r6
    li r31, 0x0
    cmpwi r30, 0x0
    bne lbl_fn_80699E30_00001DF4
    lis r3, lbl_807BC360@ha
    addi r3, r3, lbl_807BC360@l
    crclr 6
    bl OSReport
    b lbl_fn_80699E30_00001E44
lbl_fn_80699E30_00001DF4:
    clrlwi. r0, r6, 28
    beq lbl_fn_80699E30_00001E38
    lis r3, lbl_807BC388@ha
    addi r3, r3, lbl_807BC388@l
    crclr 6
    bl OSReport
    b lbl_fn_80699E30_00001E44
    b lbl_fn_80699E30_00001E38
lbl_fn_80699E30_00001E14:
    mr r12, r30
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mtctr r12
    bctrl
    addi r28, r28, 0x10
    addi r27, r27, 0x10
    subi r29, r29, 0x10
lbl_fn_80699E30_00001E38:
    cmpwi r29, 0x0
    bne lbl_fn_80699E30_00001E14
    li r31, 0x1
lbl_fn_80699E30_00001E44:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80699EE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r7, 0x104(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r30, 0x4(r7)
    mr r29, r6
    li r31, 0x0
    cmpwi r30, 0x0
    bne lbl_fn_80699EE8_00001EAC
    lis r3, lbl_807BC3B8@ha
    addi r3, r3, lbl_807BC3B8@l
    crclr 6
    bl OSReport
    b lbl_fn_80699EE8_00001EFC
lbl_fn_80699EE8_00001EAC:
    clrlwi. r0, r6, 28
    beq lbl_fn_80699EE8_00001EF0
    lis r3, lbl_807BC388@ha
    addi r3, r3, lbl_807BC388@l
    crclr 6
    bl OSReport
    b lbl_fn_80699EE8_00001EFC
    b lbl_fn_80699EE8_00001EF0
lbl_fn_80699EE8_00001ECC:
    mr r12, r30
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mtctr r12
    bctrl
    addi r28, r28, 0x10
    addi r27, r27, 0x10
    subi r29, r29, 0x10
lbl_fn_80699EE8_00001EF0:
    cmpwi r29, 0x0
    bne lbl_fn_80699EE8_00001ECC
    li r31, 0x1
lbl_fn_80699EE8_00001EFC:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80699FA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x0(r5)
    stw r0, 0x24(r1)
    lwz r8, 0x4(r5)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r7, 0x8(r5)
    stw r30, 0x18(r1)
    mr r30, r4
    lwz r0, 0x0(r3)
    xor r0, r6, r0
    lwz r6, 0xc(r5)
    stw r0, 0x8(r1)
    addi r5, r1, 0x8
    lwz r0, 0x4(r3)
    xor r0, r8, r0
    stw r0, 0xc(r1)
    lwz r0, 0x8(r3)
    xor r0, r7, r0
    stw r0, 0x10(r1)
    lwz r0, 0xc(r3)
    xor r0, r6, r0
    stw r0, 0x14(r1)
    bl fn_80699610
    lwz r0, 0x0(r30)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r31)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069A03C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0x0(r3)
    mr r27, r4
    lwz r8, 0x0(r5)
    lwz r30, 0x4(r3)
    lwz r7, 0x4(r5)
    lwz r29, 0x8(r3)
    lwz r6, 0x8(r5)
    lwz r28, 0xc(r3)
    lwz r0, 0xc(r5)
    stw r8, 0x0(r3)
    stw r7, 0x4(r3)
    stw r6, 0x8(r3)
    stw r0, 0xc(r3)
    bl fn_80699888
    lwz r0, 0x0(r27)
    addi r11, r1, 0x20
    lwz r4, 0x4(r27)
    xor r5, r0, r31
    lwz r3, 0x8(r27)
    lwz r0, 0xc(r27)
    xor r4, r4, r30
    xor r3, r3, r29
    stw r5, 0x0(r27)
    xor r0, r0, r28
    stw r4, 0x4(r27)
    stw r3, 0x8(r27)
    stw r0, 0xc(r27)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
