#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void IOS_Ioctlv(void);
extern void IOS_Open(void);
extern void OSGetCurrentThread(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805F3210(void);
extern void fn_8061C8A0(void);
extern void fn_806954D4(void);
extern void fn_806954E0(void);
extern void fn_806954EC(void);
extern void fn_8069832C(void);
extern void fn_806984C0(void);

/* External data declarations */
extern u8 fragmentinfo_80832F50[];
extern u8 jumptable_807BBF58[];
extern u8 jumptable_807BBF9C[];
extern u8 lbl_807667EC[];
extern u8 lbl_807BBFE0[];
extern u8 lbl_807BBFFC[];
extern u8 lbl_807BC058[];
extern u8 lbl_807BC070[];
extern u8 lbl_807BC088[];
extern u8 lbl_808330E0[];
extern u8 lbl_80833100[];

/* Small data declarations */
extern u32 lbl_808803E4;

/* Function declarations */
void __register_fragment(void);
void __unregister_fragment(void);
void fn_8069665C(void);
void fn_806966F4(void);
void fn_806968A4(void);
void fn_80696A54(void);
void fn_80696FA8(void);
void fn_806974B4(void);
void fn_8069766C(void);
void fn_806976AC(void);
void fn_806977B0(void);
void fn_80697BB8(void);
void fn_80697CFC(void);
void fn_80697D28(void);
void fn_80697D34(void);
void fn_80697E2C(void);
void fn_80697F84(void);

asm void __register_fragment(void)
{
    nofralloc
    lis r5, fragmentinfo_80832F50@ha
    li r0, 0x20
    addi r5, r5, fragmentinfo_80832F50@l
    li r6, 0x0
    mtctr r0
lbl___register_fragment_00000014:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bne lbl___register_fragment_00000038
    stw r3, 0x0(r5)
    li r0, 0x1
    mr r3, r6
    stw r4, 0x4(r5)
    stw r0, 0x8(r5)
    blr
lbl___register_fragment_00000038:
    addi r6, r6, 0x1
    addi r5, r5, 0xc
    bdnz lbl___register_fragment_00000014
    li r3, -0x1
    blr
}

asm void __unregister_fragment(void)
{
    nofralloc
    cmplwi r3, 0x1f
    bgtlr
    mulli r4, r3, 0xc
    lis r3, fragmentinfo_80832F50@ha
    li r0, 0x0
    addi r3, r3, fragmentinfo_80832F50@l
    stwux r0, r3, r4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8069665C(void)
{
    nofralloc
    lis r6, fragmentinfo_80832F50@ha
    li r0, 0x20
    addi r6, r6, fragmentinfo_80832F50@l
    mtctr r0
lbl_fn_8069665C_00000084:
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8069665C_000000FC
    lwz r7, 0x0(r6)
lbl_fn_8069665C_00000094:
    lwz r0, 0xc(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8069665C_000000FC
    lwz r5, 0x8(r7)
    cmplw r3, r5
    blt lbl_fn_8069665C_000000F4
    add r0, r5, r0
    cmplw r3, r0
    bge lbl_fn_8069665C_000000F4
    lwz r3, 0x0(r7)
    li r0, 0x0
    stw r3, 0x0(r4)
    li r3, 0x1
    lwz r5, 0x4(r7)
    stw r5, 0x4(r4)
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    stw r0, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x4(r6)
    stw r0, 0x18(r4)
    lwz r0, 0x8(r6)
    stw r0, 0x1c(r4)
    blr
lbl_fn_8069665C_000000F4:
    addi r7, r7, 0x10
    b lbl_fn_8069665C_00000094
lbl_fn_8069665C_000000FC:
    addi r6, r6, 0xc
    bdnz lbl_fn_8069665C_00000084
    li r3, 0x0
    blr
}

asm void fn_806966F4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r0, 0x0(r4)
    stw r0, 0x8(r4)
    addi r4, r1, 0x8
    bl fn_8069665C
    cmpwi r3, 0x0
    beq lbl_fn_806966F4_000002A4
    lwz r0, 0x10(r1)
    lis r3, 0x2aab
    stw r0, 0xc(r31)
    subi r3, r3, 0x5555
    li r7, 0x0
    lwz r0, 0x18(r1)
    stw r0, 0x10(r31)
    lwz r0, 0x20(r1)
    stw r0, 0x14(r31)
    lwz r5, 0x8(r1)
    lwz r0, 0xc(r1)
    lwz r4, 0x10(r1)
    subf r0, r5, r0
    mulhw r3, r3, r0
    subf r0, r4, r30
    srawi r3, r3, 1
    srwi r4, r3, 31
    add r9, r3, r4
lbl_fn_806966F4_0000018C:
    cmpw r7, r9
    bgt lbl_fn_806966F4_000002A4
    add r4, r7, r9
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r8, r3, 1
    mulli r3, r8, 0xc
    lwzx r4, r5, r3
    add r6, r5, r3
    cmplw r0, r4
    bge lbl_fn_806966F4_000001C0
    subi r9, r8, 0x1
    b lbl_fn_806966F4_0000018C
lbl_fn_806966F4_000001C0:
    lwz r3, 0x4(r6)
    clrlwi r3, r3, 1
    add r3, r4, r3
    cmplw r0, r3
    ble lbl_fn_806966F4_000001DC
    addi r7, r8, 0x1
    b lbl_fn_806966F4_0000018C
lbl_fn_806966F4_000001DC:
    lwz r3, 0x10(r1)
    add r3, r3, r4
    stw r3, 0x4(r31)
    lwz r3, 0x4(r6)
    srwi. r3, r3, 31
    beq lbl_fn_806966F4_000001FC
    addi r5, r6, 0x8
    b lbl_fn_806966F4_00000208
lbl_fn_806966F4_000001FC:
    lwz r4, 0x18(r1)
    lwz r3, 0x8(r6)
    add r5, r4, r3
lbl_fn_806966F4_00000208:
    stw r5, 0x0(r31)
    lhz r3, 0x0(r5)
    lwz r4, 0x0(r6)
    extrwi. r3, r3, 1, 28
    subf r0, r4, r0
    beq lbl_fn_806966F4_00000268
    addi r6, r5, 0x4
    b lbl_fn_806966F4_00000258
lbl_fn_806966F4_00000228:
    lhz r3, 0x4(r6)
    cmplw r4, r0
    slwi r3, r3, 2
    add r3, r4, r3
    bgt lbl_fn_806966F4_00000254
    cmplw r3, r0
    blt lbl_fn_806966F4_00000254
    lhz r0, 0x6(r6)
    add r0, r5, r0
    stw r0, 0x8(r31)
    b lbl_fn_806966F4_000002A4
lbl_fn_806966F4_00000254:
    addi r6, r6, 0x8
lbl_fn_806966F4_00000258:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    bne lbl_fn_806966F4_00000228
    b lbl_fn_806966F4_000002A4
lbl_fn_806966F4_00000268:
    addi r4, r5, 0x2
    b lbl_fn_806966F4_00000298
lbl_fn_806966F4_00000270:
    cmplw r3, r0
    bgt lbl_fn_806966F4_00000294
    lhz r3, 0x2(r4)
    cmplw r3, r0
    blt lbl_fn_806966F4_00000294
    lhz r0, 0x4(r4)
    add r0, r5, r0
    stw r0, 0x8(r31)
    b lbl_fn_806966F4_000002A4
lbl_fn_806966F4_00000294:
    addi r4, r4, 0x6
lbl_fn_806966F4_00000298:
    lhz r3, 0x0(r4)
    cmpwi r3, 0x0
    bne lbl_fn_806966F4_00000270
lbl_fn_806966F4_000002A4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806968A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
lbl_fn_806968A4_000002D4:
    lwz r4, 0x8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806968A4_000002EC
    lbz r5, 0x0(r4)
    rlwinm. r0, r5, 0, 24, 24
    beq lbl_fn_806968A4_0000035C
lbl_fn_806968A4_000002EC:
    lwz r3, 0x0(r31)
    lwz r4, 0x18(r31)
    lhz r3, 0x0(r3)
    lwz r30, 0x0(r4)
    srawi. r0, r3, 11
    beq lbl_fn_806968A4_00000314
    rlwinm r0, r3, 29, 24, 28
    subf r3, r0, r30
    lwz r0, -0x4(r3)
    stw r0, 0x20(r31)
lbl_fn_806968A4_00000314:
    lwz r3, 0x4(r30)
    mr r4, r31
    bl fn_806966F4
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806968A4_00000330
    bl fn_806954D4
lbl_fn_806968A4_00000330:
    stw r30, 0x18(r31)
    lwz r3, 0x0(r31)
    lhz r0, 0x0(r3)
    extrwi. r0, r0, 1, 27
    beq lbl_fn_806968A4_00000348
    lwz r30, 0x20(r31)
lbl_fn_806968A4_00000348:
    lwz r0, 0x8(r31)
    stw r30, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806968A4_000002D4
    b lbl_fn_806968A4_00000428
lbl_fn_806968A4_0000035C:
    cmplwi r5, 0x10
    bgt lbl_fn_806968A4_00000424
    lis r3, jumptable_807BBF58@ha
    slwi r0, r5, 2
    addi r3, r3, jumptable_807BBF58@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r0, r4, 0x8
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0x8
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0x10
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0x14
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0x8
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0x10
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    addi r0, r4, 0x4
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
    lhz r0, 0x2(r4)
    slwi r0, r0, 2
    add r3, r0, r4
    addi r0, r3, 0xc
    stw r0, 0x8(r31)
    b lbl_fn_806968A4_00000428
lbl_fn_806968A4_00000424:
    bl fn_806954D4
lbl_fn_806968A4_00000428:
    lwz r4, 0x8(r31)
    lbz r0, 0x0(r4)
    clrlwi r3, r0, 25
    cmplwi r3, 0x1
    bne lbl_fn_806968A4_00000454
    lwz r3, 0x0(r31)
    lhz r0, 0x2(r4)
    add r3, r3, r0
    stw r3, 0x8(r31)
    lbz r0, 0x0(r3)
    clrlwi r3, r0, 25
lbl_fn_806968A4_00000454:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80696A54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r5, 0x0(r4)
    lwz r6, 0x284(r3)
    lhz r0, 0x0(r5)
    lwz r7, 0x0(r6)
    extrwi. r5, r0, 1, 30
    extrwi r12, r0, 5, 21
    beq lbl_fn_80696A54_000004A8
    slwi r0, r12, 4
    subf r8, r0, r7
    b lbl_fn_80696A54_000004B0
lbl_fn_80696A54_000004A8:
    slwi r0, r12, 3
    subf r8, r0, r7
lbl_fn_80696A54_000004B0:
    cmpwi r5, 0x0
    beq lbl_fn_80696A54_000006CC
    subfic r5, r12, 0x20
    li r6, 0x0
    cmpwi r5, 0x20
    li r9, 0x0
    bge lbl_fn_80696A54_0000082C
    cmpwi r12, 0x8
    ble lbl_fn_80696A54_00000684
    cmpwi r5, 0x21
    li r10, 0x0
    li r11, 0x0
    li r0, 0x0
    bge lbl_fn_80696A54_000004EC
    li r0, 0x1
lbl_fn_80696A54_000004EC:
    cmpwi r0, 0x0
    beq lbl_fn_80696A54_00000504
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_80696A54_00000504
    li r11, 0x1
lbl_fn_80696A54_00000504:
    cmpwi r11, 0x0
    beq lbl_fn_80696A54_00000534
    neg r0, r5
    li r11, 0x1
    clrrwi. r0, r0, 31
    bne lbl_fn_80696A54_00000528
    clrrwi. r0, r12, 31
    beq lbl_fn_80696A54_00000528
    li r11, 0x0
lbl_fn_80696A54_00000528:
    cmpwi r11, 0x0
    beq lbl_fn_80696A54_00000534
    li r10, 0x1
lbl_fn_80696A54_00000534:
    cmpwi r10, 0x0
    beq lbl_fn_80696A54_00000684
    subfic r0, r5, 0x1f
    slwi r10, r5, 4
    srwi r0, r0, 3
    add r29, r3, r10
    mtctr r0
    cmpwi r5, 0x18
    bge lbl_fn_80696A54_00000684
lbl_fn_80696A54_00000558:
    add r11, r8, r9
    addi r0, r6, 0x1
    lfs f0, 0x8(r11)
    slwi r10, r0, 4
    stfs f0, 0x8(r29)
    add r28, r8, r10
    addi r0, r6, 0x2
    addi r10, r6, 0x6
    lfs f0, 0xc(r11)
    slwi r31, r0, 4
    stfs f0, 0xc(r29)
    addi r0, r6, 0x3
    slwi r30, r0, 4
    slwi r10, r10, 4
    lfdx f0, r8, r9
    addi r0, r6, 0x4
    stfd f0, 0x0(r29)
    slwi r12, r0, 4
    addi r0, r6, 0x5
    add r31, r8, r31
    lfs f0, 0x8(r28)
    slwi r11, r0, 4
    stfs f0, 0x18(r29)
    addi r0, r6, 0x7
    slwi r0, r0, 4
    add r30, r8, r30
    lfs f0, 0xc(r28)
    add r12, r8, r12
    stfs f0, 0x1c(r29)
    add r11, r8, r11
    add r10, r8, r10
    add r27, r8, r0
    lfd f0, 0x0(r28)
    addi r6, r6, 0x8
    stfd f0, 0x10(r29)
    addi r9, r9, 0x80
    addi r5, r5, 0x8
    lfs f0, 0x8(r31)
    stfs f0, 0x28(r29)
    lfs f0, 0xc(r31)
    stfs f0, 0x2c(r29)
    lfd f0, 0x0(r31)
    stfd f0, 0x20(r29)
    lfs f0, 0x8(r30)
    stfs f0, 0x38(r29)
    lfs f0, 0xc(r30)
    stfs f0, 0x3c(r29)
    lfd f0, 0x0(r30)
    stfd f0, 0x30(r29)
    lfs f0, 0x8(r12)
    stfs f0, 0x48(r29)
    lfs f0, 0xc(r12)
    stfs f0, 0x4c(r29)
    lfd f0, 0x0(r12)
    stfd f0, 0x40(r29)
    lfs f0, 0x8(r11)
    stfs f0, 0x58(r29)
    lfs f0, 0xc(r11)
    stfs f0, 0x5c(r29)
    lfd f0, 0x0(r11)
    stfd f0, 0x50(r29)
    lfs f0, 0x8(r10)
    stfs f0, 0x68(r29)
    lfs f0, 0xc(r10)
    stfs f0, 0x6c(r29)
    lfd f0, 0x0(r10)
    stfd f0, 0x60(r29)
    lfs f0, 0x8(r27)
    stfs f0, 0x78(r29)
    lfs f0, 0xc(r27)
    stfs f0, 0x7c(r29)
    lfdx f0, r8, r0
    stfd f0, 0x70(r29)
    addi r29, r29, 0x80
    bdnz lbl_fn_80696A54_00000558
lbl_fn_80696A54_00000684:
    slwi r9, r6, 4
    slwi r6, r5, 4
    subfic r0, r5, 0x20
    add r9, r8, r9
    add r6, r3, r6
    mtctr r0
    cmpwi r5, 0x20
    bge lbl_fn_80696A54_0000082C
lbl_fn_80696A54_000006A4:
    lfs f0, 0x8(r9)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r9)
    stfs f0, 0xc(r6)
    lfd f0, 0x0(r9)
    addi r9, r9, 0x10
    stfd f0, 0x0(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_80696A54_000006A4
    b lbl_fn_80696A54_0000082C
lbl_fn_80696A54_000006CC:
    subfic r5, r12, 0x20
    li r6, 0x0
    cmpwi r5, 0x20
    li r9, 0x0
    bge lbl_fn_80696A54_0000082C
    cmpwi r12, 0x8
    ble lbl_fn_80696A54_000007F8
    cmpwi r5, 0x21
    li r10, 0x0
    li r11, 0x0
    li r0, 0x0
    bge lbl_fn_80696A54_00000700
    li r0, 0x1
lbl_fn_80696A54_00000700:
    cmpwi r0, 0x0
    beq lbl_fn_80696A54_00000718
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_80696A54_00000718
    li r11, 0x1
lbl_fn_80696A54_00000718:
    cmpwi r11, 0x0
    beq lbl_fn_80696A54_00000748
    neg r0, r5
    li r11, 0x1
    clrrwi. r0, r0, 31
    bne lbl_fn_80696A54_0000073C
    clrrwi. r0, r12, 31
    beq lbl_fn_80696A54_0000073C
    li r11, 0x0
lbl_fn_80696A54_0000073C:
    cmpwi r11, 0x0
    beq lbl_fn_80696A54_00000748
    li r10, 0x1
lbl_fn_80696A54_00000748:
    cmpwi r10, 0x0
    beq lbl_fn_80696A54_000007F8
    subfic r0, r5, 0x1f
    slwi r10, r5, 4
    srwi r0, r0, 3
    add r31, r3, r10
    mtctr r0
    cmpwi r5, 0x18
    bge lbl_fn_80696A54_000007F8
lbl_fn_80696A54_0000076C:
    lfdx f0, r8, r9
    addi r0, r6, 0x1
    stfd f0, 0x0(r31)
    slwi r10, r0, 3
    addi r0, r6, 0x2
    addi r30, r6, 0x3
    lfdx f0, r8, r10
    addi r12, r6, 0x4
    stfd f0, 0x10(r31)
    slwi r0, r0, 3
    addi r11, r6, 0x5
    addi r10, r6, 0x6
    lfdx f0, r8, r0
    addi r0, r6, 0x7
    stfd f0, 0x20(r31)
    slwi r30, r30, 3
    slwi r12, r12, 3
    slwi r11, r11, 3
    lfdx f0, r8, r30
    slwi r10, r10, 3
    stfd f0, 0x30(r31)
    slwi r0, r0, 3
    addi r6, r6, 0x8
    addi r9, r9, 0x40
    lfdx f0, r8, r12
    addi r5, r5, 0x8
    stfd f0, 0x40(r31)
    lfdx f0, r8, r11
    stfd f0, 0x50(r31)
    lfdx f0, r8, r10
    stfd f0, 0x60(r31)
    lfdx f0, r8, r0
    stfd f0, 0x70(r31)
    addi r31, r31, 0x80
    bdnz lbl_fn_80696A54_0000076C
lbl_fn_80696A54_000007F8:
    slwi r9, r6, 3
    slwi r6, r5, 4
    subfic r0, r5, 0x20
    add r9, r8, r9
    add r6, r3, r6
    mtctr r0
    cmpwi r5, 0x20
    bge lbl_fn_80696A54_0000082C
lbl_fn_80696A54_00000818:
    lfd f0, 0x0(r9)
    addi r9, r9, 0x8
    stfd f0, 0x0(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_80696A54_00000818
lbl_fn_80696A54_0000082C:
    lwz r4, 0x0(r4)
    li r6, 0x0
    li r9, 0x0
    lhz r0, 0x0(r4)
    srawi r11, r0, 11
    subfic r5, r11, 0x20
    cmpwi r5, 0x20
    slwi r0, r11, 2
    subf r8, r0, r8
    bge lbl_fn_80696A54_000009A0
    cmpwi r11, 0x8
    ble lbl_fn_80696A54_0000096C
    cmpwi r5, 0x21
    li r4, 0x0
    li r10, 0x0
    li r0, 0x0
    bge lbl_fn_80696A54_00000874
    li r0, 0x1
lbl_fn_80696A54_00000874:
    cmpwi r0, 0x0
    beq lbl_fn_80696A54_0000088C
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_80696A54_0000088C
    li r10, 0x1
lbl_fn_80696A54_0000088C:
    cmpwi r10, 0x0
    beq lbl_fn_80696A54_000008BC
    neg r0, r5
    li r10, 0x1
    clrrwi. r0, r0, 31
    bne lbl_fn_80696A54_000008B0
    clrrwi. r0, r11, 31
    beq lbl_fn_80696A54_000008B0
    li r10, 0x0
lbl_fn_80696A54_000008B0:
    cmpwi r10, 0x0
    beq lbl_fn_80696A54_000008BC
    li r4, 0x1
lbl_fn_80696A54_000008BC:
    cmpwi r4, 0x0
    beq lbl_fn_80696A54_0000096C
    subfic r0, r5, 0x1f
    slwi r4, r5, 2
    srwi r0, r0, 3
    add r4, r3, r4
    mtctr r0
    cmpwi r5, 0x18
    bge lbl_fn_80696A54_0000096C
lbl_fn_80696A54_000008E0:
    lwzx r10, r8, r9
    addi r31, r6, 0x3
    addi r0, r6, 0x1
    stw r10, 0x200(r4)
    slwi r10, r0, 2
    addi r12, r6, 0x4
    lwzx r10, r8, r10
    addi r0, r6, 0x2
    stw r10, 0x204(r4)
    slwi r0, r0, 2
    addi r11, r6, 0x5
    addi r10, r6, 0x6
    lwzx r30, r8, r0
    addi r0, r6, 0x7
    stw r30, 0x208(r4)
    slwi r31, r31, 2
    slwi r12, r12, 2
    slwi r11, r11, 2
    lwzx r31, r8, r31
    slwi r10, r10, 2
    stw r31, 0x20c(r4)
    slwi r0, r0, 2
    addi r6, r6, 0x8
    addi r9, r9, 0x20
    lwzx r12, r8, r12
    addi r5, r5, 0x8
    stw r12, 0x210(r4)
    lwzx r11, r8, r11
    stw r11, 0x214(r4)
    lwzx r10, r8, r10
    stw r10, 0x218(r4)
    lwzx r0, r8, r0
    stw r0, 0x21c(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_80696A54_000008E0
lbl_fn_80696A54_0000096C:
    slwi r6, r6, 2
    slwi r4, r5, 2
    subfic r0, r5, 0x20
    add r6, r8, r6
    add r4, r3, r4
    mtctr r0
    cmpwi r5, 0x20
    bge lbl_fn_80696A54_000009A0
lbl_fn_80696A54_0000098C:
    lwz r0, 0x0(r6)
    addi r6, r6, 0x4
    stw r0, 0x200(r4)
    addi r4, r4, 0x4
    bdnz lbl_fn_80696A54_0000098C
lbl_fn_80696A54_000009A0:
    stw r7, 0x284(r3)
    addi r11, r1, 0x20
    lwz r3, 0x4(r7)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80696FA8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lis r31, jumptable_807BBF9C@ha
    li r25, 0x0
lbl_fn_80696FA8_000009E4:
    lwz r30, 0x8(r27)
    cmpwi r30, 0x0
    bne lbl_fn_80696FA8_00000A38
    mr r3, r26
    mr r4, r27
    bl fn_80696A54
    mr r4, r27
    bl fn_806966F4
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80696FA8_00000A14
    bl fn_806954D4
lbl_fn_80696FA8_00000A14:
    lwz r3, 0x0(r27)
    lhz r0, 0x0(r3)
    extrwi. r0, r0, 1, 27
    beq lbl_fn_80696FA8_00000A2C
    lwz r0, 0x27c(r26)
    b lbl_fn_80696FA8_00000A30
lbl_fn_80696FA8_00000A2C:
    lwz r0, 0x284(r26)
lbl_fn_80696FA8_00000A30:
    stw r0, 0x288(r26)
    b lbl_fn_80696FA8_000009E4
lbl_fn_80696FA8_00000A38:
    lbz r29, 0x0(r30)
    clrlwi r0, r29, 25
    cmplwi r0, 0x10
    bgt lbl_fn_80696FA8_00000EA4
    addi r3, r31, jumptable_807BBF9C@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x0(r27)
    lhz r0, 0x2(r30)
    add r0, r3, r0
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lwz r3, 0x288(r26)
    li r4, -0x1
    lha r0, 0x2(r30)
    lwz r12, 0x4(r30)
    add r3, r3, r0
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0x8
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_fn_80696FA8_00000AC0
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r0, 0x200(r3)
    extsb r0, r0
    b lbl_fn_80696FA8_00000ACC
lbl_fn_80696FA8_00000AC0:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lbzx r0, r3, r0
lbl_fn_80696FA8_00000ACC:
    extsb. r0, r0
    beq lbl_fn_80696FA8_00000AF0
    lwz r3, 0x288(r26)
    li r4, -0x1
    lha r0, 0x4(r30)
    lwz r12, 0x8(r30)
    add r3, r3, r0
    mtctr r12
    bctrl
lbl_fn_80696FA8_00000AF0:
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_fn_80696FA8_00000B20
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_fn_80696FA8_00000B2C
lbl_fn_80696FA8_00000B20:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r3, r3, r0
lbl_fn_80696FA8_00000B2C:
    lwz r12, 0x4(r30)
    li r4, -0x1
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0x8
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lhz r23, 0x4(r30)
    lhz r24, 0x6(r30)
    lwz r4, 0x288(r26)
    mullw r0, r24, r23
    lha r3, 0x2(r30)
    add r22, r4, r3
    add r22, r22, r0
    b lbl_fn_80696FA8_00000B88
lbl_fn_80696FA8_00000B6C:
    lwz r12, 0x8(r30)
    subf r22, r24, r22
    mr r3, r22
    li r4, -0x1
    mtctr r12
    bctrl
    subi r23, r23, 0x1
lbl_fn_80696FA8_00000B88:
    cmpwi r23, 0x0
    bgt lbl_fn_80696FA8_00000B6C
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_fn_80696FA8_00000BC0
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_fn_80696FA8_00000BCC
lbl_fn_80696FA8_00000BC0:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r3, r3, r0
lbl_fn_80696FA8_00000BCC:
    lwz r0, 0x4(r30)
    li r4, 0x0
    lwz r12, 0x8(r30)
    add r3, r3, r0
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_fn_80696FA8_00000C14
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_fn_80696FA8_00000C20
lbl_fn_80696FA8_00000C14:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r3, r3, r0
lbl_fn_80696FA8_00000C20:
    lwz r0, 0x4(r30)
    li r4, -0x1
    lwz r12, 0x8(r30)
    add r3, r3, r0
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lbz r4, 0x1(r30)
    extrwi. r0, r4, 1, 25
    beq lbl_fn_80696FA8_00000C68
    lha r0, 0x4(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r5, 0x200(r3)
    b lbl_fn_80696FA8_00000C74
lbl_fn_80696FA8_00000C68:
    lwz r3, 0x288(r26)
    lha r0, 0x4(r30)
    lwzx r5, r3, r0
lbl_fn_80696FA8_00000C74:
    extrwi. r0, r4, 1, 24
    beq lbl_fn_80696FA8_00000C94
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r0, 0x200(r3)
    extsh r0, r0
    b lbl_fn_80696FA8_00000CA0
lbl_fn_80696FA8_00000C94:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lhax r0, r3, r0
lbl_fn_80696FA8_00000CA0:
    cmpwi r0, 0x0
    beq lbl_fn_80696FA8_00000CC0
    lwz r0, 0x8(r30)
    li r4, 0x0
    lwz r12, 0xc(r30)
    add r3, r5, r0
    mtctr r12
    bctrl
lbl_fn_80696FA8_00000CC0:
    lwz r3, 0x8(r27)
    addi r0, r3, 0x10
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_fn_80696FA8_00000CF0
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r24, 0x200(r3)
    b lbl_fn_80696FA8_00000CFC
lbl_fn_80696FA8_00000CF0:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r24, r3, r0
lbl_fn_80696FA8_00000CFC:
    lwz r23, 0x8(r30)
    lwz r22, 0xc(r30)
    lwz r3, 0x4(r30)
    mullw r0, r22, r23
    add r24, r24, r3
    add r24, r24, r0
    b lbl_fn_80696FA8_00000D34
lbl_fn_80696FA8_00000D18:
    lwz r12, 0x10(r30)
    subf r24, r22, r24
    mr r3, r24
    li r4, -0x1
    mtctr r12
    bctrl
    subi r23, r23, 0x1
lbl_fn_80696FA8_00000D34:
    cmpwi r23, 0x0
    bgt lbl_fn_80696FA8_00000D18
    lwz r3, 0x8(r27)
    addi r0, r3, 0x14
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_fn_80696FA8_00000D6C
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_fn_80696FA8_00000D78
lbl_fn_80696FA8_00000D6C:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r3, r3, r0
lbl_fn_80696FA8_00000D78:
    lwz r12, 0x4(r30)
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0x8
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lbz r4, 0x1(r30)
    extrwi. r0, r4, 1, 25
    beq lbl_fn_80696FA8_00000DB4
    lha r0, 0x4(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_fn_80696FA8_00000DC0
lbl_fn_80696FA8_00000DB4:
    lwz r3, 0x288(r26)
    lha r0, 0x4(r30)
    lwzx r3, r3, r0
lbl_fn_80696FA8_00000DC0:
    extrwi. r0, r4, 1, 24
    beq lbl_fn_80696FA8_00000DE0
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r0, 0x200(r4)
    extsb r0, r0
    b lbl_fn_80696FA8_00000DEC
lbl_fn_80696FA8_00000DE0:
    lwz r4, 0x288(r26)
    lha r0, 0x2(r30)
    lbzx r0, r4, r0
lbl_fn_80696FA8_00000DEC:
    extsb. r0, r0
    beq lbl_fn_80696FA8_00000E00
    lwz r12, 0x8(r30)
    mtctr r12
    bctrl
lbl_fn_80696FA8_00000E00:
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    cmplw r28, r30
    beq lbl_fn_80696FA8_00000EB8
    addi r0, r30, 0xc
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    cmplw r28, r30
    beq lbl_fn_80696FA8_00000EB8
    addi r0, r30, 0x10
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    add r3, r3, r0
    lwz r12, 0x8(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80696FA8_00000E74
    lwz r3, 0x0(r3)
    lwz r0, 0x298(r26)
    cmplw r0, r3
    bne lbl_fn_80696FA8_00000E68
    stw r12, 0x29c(r26)
    b lbl_fn_80696FA8_00000E74
lbl_fn_80696FA8_00000E68:
    li r4, -0x1
    mtctr r12
    bctrl
lbl_fn_80696FA8_00000E74:
    lwz r3, 0x8(r27)
    addi r0, r3, 0x4
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
    cmplw r28, r30
    beq lbl_fn_80696FA8_00000EB8
    lhz r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r0, r30
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_fn_80696FA8_00000EA8
lbl_fn_80696FA8_00000EA4:
    bl fn_806954D4
lbl_fn_80696FA8_00000EA8:
    rlwinm. r0, r29, 0, 24, 24
    beq lbl_fn_80696FA8_000009E4
    stw r25, 0x8(r27)
    b lbl_fn_80696FA8_000009E4
lbl_fn_80696FA8_00000EB8:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806974B4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r31, r1
    lwz r30, 0x14(r3)
    stw r1, 0x34(r1)
    bl fn_806954E0
    b lbl_fn_806974B4_00001064
    lwz r29, 0x24(r31)
    mr r27, r30
    li r28, 0x0
    b lbl_fn_806974B4_00000F28
lbl_fn_806974B4_00000F00:
    lwz r4, 0xc(r27)
    mr r3, r29
    addi r5, r31, 0x10
    bl fn_806954EC
    extsb. r0, r3
    beq lbl_fn_806974B4_00000F20
    li r0, 0x1
    b lbl_fn_806974B4_00000F38
lbl_fn_806974B4_00000F20:
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_fn_806974B4_00000F28:
    lhz r0, 0x2(r30)
    cmpw r28, r0
    blt lbl_fn_806974B4_00000F00
    li r0, 0x0
lbl_fn_806974B4_00000F38:
    cmpwi r0, 0x0
    beq lbl_fn_806974B4_00000F50
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_806974B4_00000F50:
    lis r28, lbl_807667EC@ha
    mr r27, r30
    addi r28, r28, lbl_807667EC@l
    li r29, 0x0
    b lbl_fn_806974B4_00000F8C
lbl_fn_806974B4_00000F64:
    lwz r4, 0xc(r27)
    mr r3, r28
    addi r5, r31, 0xc
    bl fn_806954EC
    extsb. r0, r3
    beq lbl_fn_806974B4_00000F84
    li r0, 0x1
    b lbl_fn_806974B4_00000F9C
lbl_fn_806974B4_00000F84:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_fn_806974B4_00000F8C:
    lhz r0, 0x2(r30)
    cmpw r29, r0
    blt lbl_fn_806974B4_00000F64
    li r0, 0x0
lbl_fn_806974B4_00000F9C:
    cmpwi r0, 0x0
    beq lbl_fn_806974B4_00000FCC
    lis r4, lbl_807BBFE0@ha
    lis r3, lbl_807667EC@ha
    addi r4, r4, lbl_807BBFE0@l
    lis r5, fn_8069766C@ha
    addi r3, r3, lbl_807667EC@l
    stw r4, 0x18(r31)
    addi r3, r3, 0x11
    addi r4, r31, 0x18
    addi r5, r5, fn_8069766C@l
    bl fn_80697BB8
lbl_fn_806974B4_00000FCC:
    lis r3, lbl_807667EC@ha
    mr r27, r30
    addi r3, r3, lbl_807667EC@l
    li r29, 0x0
    addi r28, r3, 0x37
    b lbl_fn_806974B4_0000100C
lbl_fn_806974B4_00000FE4:
    lwz r4, 0xc(r27)
    mr r3, r28
    addi r5, r31, 0x8
    bl fn_806954EC
    extsb. r0, r3
    beq lbl_fn_806974B4_00001004
    li r0, 0x1
    b lbl_fn_806974B4_0000101C
lbl_fn_806974B4_00001004:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_fn_806974B4_0000100C:
    lhz r0, 0x2(r30)
    cmpw r29, r0
    blt lbl_fn_806974B4_00000FE4
    li r0, 0x0
lbl_fn_806974B4_0000101C:
    cmpwi r0, 0x0
    beq lbl_fn_806974B4_0000104C
    lis r4, lbl_807BBFE0@ha
    lis r3, lbl_807667EC@ha
    addi r4, r4, lbl_807BBFE0@l
    lis r5, fn_8069766C@ha
    addi r3, r3, lbl_807667EC@l
    stw r4, 0x14(r31)
    addi r3, r3, 0x11
    addi r4, r31, 0x14
    addi r5, r5, fn_8069766C@l
    bl fn_80697BB8
lbl_fn_806974B4_0000104C:
    addi r3, r31, 0x20
    bl fn_80697CFC
    nop
    lwz r0, 0x0(r1)
    lwz r1, 0x34(r31)
    stw r0, 0x0(r1)
lbl_fn_806974B4_00001064:
    bl fn_806954D4
    mr r10, r31
    lmw r27, 0x3c(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8069766C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8069766C_000010AC
    cmpwi r4, 0x0
    ble lbl_fn_8069766C_000010AC
    bl dtor_80084684
lbl_fn_8069766C_000010AC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806976AC(void)
{
    nofralloc
    mr r8, r5
    mr r2, r4
    lwz r0, 0x280(r3)
    mtcrf 255, r0
    lmw r13, 0x234(r3)
    addi r7, r3, 0xe8
    psq_lx f14, r0, r7, 0, 0
    lfd f14, 0xe0(r3)
    addi r7, r3, 0xf8
    psq_lx f15, r0, r7, 0, 0
    lfd f15, 0xf0(r3)
    addi r7, r3, 0x108
    psq_lx f16, r0, r7, 0, 0
    lfd f16, 0x100(r3)
    addi r7, r3, 0x118
    psq_lx f17, r0, r7, 0, 0
    lfd f17, 0x110(r3)
    addi r7, r3, 0x128
    psq_lx f18, r0, r7, 0, 0
    lfd f18, 0x120(r3)
    addi r7, r3, 0x138
    psq_lx f19, r0, r7, 0, 0
    lfd f19, 0x130(r3)
    addi r7, r3, 0x148
    psq_lx f20, r0, r7, 0, 0
    lfd f20, 0x140(r3)
    addi r7, r3, 0x158
    psq_lx f21, r0, r7, 0, 0
    lfd f21, 0x150(r3)
    addi r7, r3, 0x168
    psq_lx f22, r0, r7, 0, 0
    lfd f22, 0x160(r3)
    addi r7, r3, 0x178
    psq_lx f23, r0, r7, 0, 0
    lfd f23, 0x170(r3)
    addi r7, r3, 0x188
    psq_lx f24, r0, r7, 0, 0
    lfd f24, 0x180(r3)
    addi r7, r3, 0x198
    psq_lx f25, r0, r7, 0, 0
    lfd f25, 0x190(r3)
    addi r7, r3, 0x1a8
    psq_lx f26, r0, r7, 0, 0
    lfd f26, 0x1a0(r3)
    addi r7, r3, 0x1b8
    psq_lx f27, r0, r7, 0, 0
    lfd f27, 0x1b0(r3)
    addi r7, r3, 0x1c8
    psq_lx f28, r0, r7, 0, 0
    lfd f28, 0x1c0(r3)
    addi r7, r3, 0x1d8
    psq_lx f29, r0, r7, 0, 0
    lfd f29, 0x1d0(r3)
    addi r7, r3, 0x1e8
    psq_lx f30, r0, r7, 0, 0
    lfd f30, 0x1e0(r3)
    addi r7, r3, 0x1f8
    psq_lx f31, r0, r7, 0, 0
    lfd f31, 0x1f0(r3)
    mtlr r8
    lwz r1, 0x28c(r3)
    lwz r3, 0x284(r3)
    lwz r3, 0x0(r3)
    stw r3, 0x0(r1)
    blr
}

asm void fn_806977B0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r4, r1, 0x10
    stmw r27, 0x5c(r1)
    mr r30, r3
    lwz r3, 0x290(r3)
    bl fn_806966F4
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806977B0_000011F8
    bl fn_806954D4
lbl_fn_806977B0_000011F8:
    lwz r3, 0x10(r1)
    lhz r0, 0x0(r3)
    extrwi. r0, r0, 1, 27
    beq lbl_fn_806977B0_00001210
    lwz r8, 0x27c(r30)
    b lbl_fn_806977B0_00001214
lbl_fn_806977B0_00001210:
    lwz r8, 0x284(r30)
lbl_fn_806977B0_00001214:
    lwz r0, 0x294(r30)
    stw r8, 0x288(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806977B0_000012F0
    lwz r5, 0x18(r1)
    lwz r7, 0x10(r1)
    lwz r6, 0x14(r1)
    cmpwi r5, 0x0
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    lwz r0, 0x284(r30)
    stw r0, 0x40(r1)
    stw r8, 0x44(r1)
    lwz r0, 0x27c(r30)
    stw r0, 0x48(r1)
    bne lbl_fn_806977B0_00001278
    li r3, 0x0
    b lbl_fn_806977B0_00001280
lbl_fn_806977B0_00001278:
    lbz r0, 0x0(r5)
    clrlwi r3, r0, 25
lbl_fn_806977B0_00001280:
    clrlwi r3, r3, 24
    subi r0, r3, 0x2
    cmplwi r0, 0xa
    ble lbl_fn_806977B0_000012B4
    subi r0, r3, 0xf
    cmplwi r0, 0x1
    ble lbl_fn_806977B0_000012B4
    cmpwi r3, 0xd
    beq lbl_fn_806977B0_000012C0
    cmpwi r3, 0x0
    beq lbl_fn_806977B0_000012B4
    bl fn_806954D4
    b lbl_fn_806977B0_000012C0
lbl_fn_806977B0_000012B4:
    addi r3, r1, 0x28
    bl fn_806968A4
    b lbl_fn_806977B0_00001280
lbl_fn_806977B0_000012C0:
    lwz r3, 0x30(r1)
    li r0, 0x0
    lwz r4, 0x44(r1)
    lha r3, 0x2(r3)
    add r4, r4, r3
    lwz r3, 0x4(r4)
    stw r3, 0x294(r30)
    lwz r3, 0x0(r4)
    stw r3, 0x298(r30)
    stw r0, 0x29c(r30)
    stw r4, 0x2a0(r30)
    b lbl_fn_806977B0_000012F8
lbl_fn_806977B0_000012F0:
    li r0, 0x0
    stw r0, 0x2a0(r30)
lbl_fn_806977B0_000012F8:
    lwz r5, 0x18(r1)
    lwz r7, 0x10(r1)
    lwz r6, 0x14(r1)
    cmpwi r5, 0x0
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    lwz r0, 0x284(r30)
    stw r0, 0x40(r1)
    lwz r0, 0x288(r30)
    stw r0, 0x44(r1)
    lwz r0, 0x27c(r30)
    stw r0, 0x48(r1)
    bne lbl_fn_806977B0_00001350
    li r27, 0x0
    b lbl_fn_806977B0_00001358
lbl_fn_806977B0_00001350:
    lbz r0, 0x0(r5)
    clrlwi r27, r0, 25
lbl_fn_806977B0_00001358:
    clrlwi r3, r27, 24
    subi r0, r3, 0x2
    cmplwi r0, 0x9
    ble lbl_fn_806977B0_00001484
    cmpwi r3, 0x10
    beq lbl_fn_806977B0_00001394
    cmpwi r3, 0xc
    beq lbl_fn_806977B0_000013B4
    cmpwi r3, 0xf
    beq lbl_fn_806977B0_000013D4
    cmpwi r3, 0x0
    beq lbl_fn_806977B0_00001484
    cmpwi r3, 0xd
    beq lbl_fn_806977B0_00001484
    b lbl_fn_806977B0_0000147C
lbl_fn_806977B0_00001394:
    lwz r4, 0x30(r1)
    addi r5, r1, 0xc
    lwz r3, 0x294(r30)
    lwz r4, 0x4(r4)
    bl fn_806954EC
    extsb. r0, r3
    bne lbl_fn_806977B0_00001494
    b lbl_fn_806977B0_00001484
lbl_fn_806977B0_000013B4:
    lwz r4, 0x30(r1)
    addi r5, r1, 0xc
    lwz r3, 0x294(r30)
    lwz r4, 0x4(r4)
    bl fn_806954EC
    extsb. r0, r3
    bne lbl_fn_806977B0_00001494
    b lbl_fn_806977B0_00001484
lbl_fn_806977B0_000013D4:
    lwz r29, 0x30(r1)
    li r28, 0x0
    lwz r31, 0x294(r30)
    mr r27, r29
    b lbl_fn_806977B0_00001410
lbl_fn_806977B0_000013E8:
    lwz r4, 0xc(r27)
    mr r3, r31
    addi r5, r1, 0x8
    bl fn_806954EC
    extsb. r0, r3
    beq lbl_fn_806977B0_00001408
    li r0, 0x1
    b lbl_fn_806977B0_00001420
lbl_fn_806977B0_00001408:
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_fn_806977B0_00001410:
    lhz r0, 0x2(r29)
    cmpw r28, r0
    blt lbl_fn_806977B0_000013E8
    li r0, 0x0
lbl_fn_806977B0_00001420:
    cmpwi r0, 0x0
    bne lbl_fn_806977B0_00001484
    lwz r28, 0x30(r1)
    mr r3, r30
    addi r4, r1, 0x10
    mr r5, r28
    bl fn_80696FA8
    lwz r5, 0x288(r30)
    mr r3, r30
    lwz r4, 0x8(r28)
    lwz r0, 0x298(r30)
    stwux r0, r4, r5
    lwz r0, 0x294(r30)
    stw r0, 0x4(r4)
    lwz r0, 0x29c(r30)
    stw r0, 0x8(r4)
    stw r28, 0x14(r4)
    lwz r5, 0x14(r1)
    lwz r0, 0x4(r28)
    lwz r4, 0x24(r1)
    add r5, r5, r0
    bl fn_806976AC
    b lbl_fn_806977B0_00001484
lbl_fn_806977B0_0000147C:
    bl fn_806954D4
    b lbl_fn_806977B0_00001494
lbl_fn_806977B0_00001484:
    addi r3, r1, 0x28
    bl fn_806968A4
    mr r27, r3
    b lbl_fn_806977B0_00001358
lbl_fn_806977B0_00001494:
    clrlwi r0, r27, 24
    cmplwi r0, 0x10
    bne lbl_fn_806977B0_00001530
    lwz r31, 0x30(r1)
    mr r3, r30
    addi r4, r1, 0x10
    mr r5, r31
    bl fn_80696FA8
    lwz r4, 0x288(r30)
    lwz r3, 0xc(r31)
    lwz r0, 0x298(r30)
    stwux r0, r4, r3
    lwz r0, 0x294(r30)
    stw r0, 0x4(r4)
    lwz r0, 0x29c(r30)
    stw r0, 0x8(r4)
    lwz r3, 0x294(r30)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2a
    bne lbl_fn_806977B0_00001504
    addi r0, r4, 0x10
    stw r0, 0xc(r4)
    lwz r3, 0x298(r30)
    lwz r0, 0xc(r1)
    lwz r3, 0x0(r3)
    add r0, r3, r0
    stw r0, 0x10(r4)
    b lbl_fn_806977B0_00001514
lbl_fn_806977B0_00001504:
    lwz r3, 0x298(r30)
    lwz r0, 0xc(r1)
    add r0, r3, r0
    stw r0, 0xc(r4)
lbl_fn_806977B0_00001514:
    lwz r5, 0x14(r1)
    mr r3, r30
    lwz r0, 0x8(r31)
    lwz r4, 0x24(r1)
    add r5, r5, r0
    bl fn_806976AC
    b lbl_fn_806977B0_000015BC
lbl_fn_806977B0_00001530:
    lwz r31, 0x30(r1)
    mr r3, r30
    addi r4, r1, 0x10
    mr r5, r31
    bl fn_80696FA8
    lwz r4, 0x288(r30)
    lha r3, 0xa(r31)
    lwz r0, 0x298(r30)
    stwux r0, r4, r3
    lwz r0, 0x294(r30)
    stw r0, 0x4(r4)
    lwz r0, 0x29c(r30)
    stw r0, 0x8(r4)
    lwz r3, 0x294(r30)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2a
    bne lbl_fn_806977B0_00001594
    addi r0, r4, 0x10
    stw r0, 0xc(r4)
    lwz r3, 0x298(r30)
    lwz r0, 0xc(r1)
    lwz r3, 0x0(r3)
    add r0, r3, r0
    stw r0, 0x10(r4)
    b lbl_fn_806977B0_000015A4
lbl_fn_806977B0_00001594:
    lwz r3, 0x298(r30)
    lwz r0, 0xc(r1)
    add r0, r3, r0
    stw r0, 0xc(r4)
lbl_fn_806977B0_000015A4:
    lwz r5, 0x14(r1)
    mr r3, r30
    lhz r0, 0x8(r31)
    lwz r4, 0x24(r1)
    add r5, r5, r0
    bl fn_806976AC
lbl_fn_806977B0_000015BC:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80697BB8(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    stw r0, 0x2c4(r1)
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stmw r13, 0x24c(r1)
    stfd f14, 0xf8(r1)
    addi r3, r1, 0x100
    psq_stx f14, r0, r3, 0, 0
    stfd f15, 0x108(r1)
    addi r3, r1, 0x110
    psq_stx f15, r0, r3, 0, 0
    stfd f16, 0x118(r1)
    addi r3, r1, 0x120
    psq_stx f16, r0, r3, 0, 0
    stfd f17, 0x128(r1)
    addi r3, r1, 0x130
    psq_stx f17, r0, r3, 0, 0
    stfd f18, 0x138(r1)
    addi r3, r1, 0x140
    psq_stx f18, r0, r3, 0, 0
    stfd f19, 0x148(r1)
    addi r3, r1, 0x150
    psq_stx f19, r0, r3, 0, 0
    stfd f20, 0x158(r1)
    addi r3, r1, 0x160
    psq_stx f20, r0, r3, 0, 0
    stfd f21, 0x168(r1)
    addi r3, r1, 0x170
    psq_stx f21, r0, r3, 0, 0
    stfd f22, 0x178(r1)
    addi r3, r1, 0x180
    psq_stx f22, r0, r3, 0, 0
    stfd f23, 0x188(r1)
    addi r3, r1, 0x190
    psq_stx f23, r0, r3, 0, 0
    stfd f24, 0x198(r1)
    addi r3, r1, 0x1a0
    psq_stx f24, r0, r3, 0, 0
    stfd f25, 0x1a8(r1)
    addi r3, r1, 0x1b0
    psq_stx f25, r0, r3, 0, 0
    stfd f26, 0x1b8(r1)
    addi r3, r1, 0x1c0
    psq_stx f26, r0, r3, 0, 0
    stfd f27, 0x1c8(r1)
    addi r3, r1, 0x1d0
    psq_stx f27, r0, r3, 0, 0
    stfd f28, 0x1d8(r1)
    addi r3, r1, 0x1e0
    psq_stx f28, r0, r3, 0, 0
    stfd f29, 0x1e8(r1)
    addi r3, r1, 0x1f0
    psq_stx f29, r0, r3, 0, 0
    stfd f30, 0x1f8(r1)
    addi r3, r1, 0x200
    psq_stx f30, r0, r3, 0, 0
    stfd f31, 0x208(r1)
    addi r3, r1, 0x210
    psq_stx f31, r0, r3, 0, 0
    mfcr r3
    stw r3, 0x298(r1)
    lwz r3, 0x0(r1)
    lwz r4, 0x4(r3)
    stw r3, 0x29c(r1)
    stw r3, 0x2a4(r1)
    stw r4, 0x2a8(r1)
    lwz r3, 0x8(r1)
    stw r3, 0x2ac(r1)
    lwz r3, 0xc(r1)
    stw r3, 0x2b0(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x2b4(r1)
    addi r3, r1, 0x18
    bl fn_806977B0
    nop
    lwz r0, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}

asm void fn_80697CFC(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r12, 0x8(r3)
    cmpwi r12, 0x0
    beqlr
    mr r3, r0
    li r4, -0x1
    mtctr r12
    bctr
    blr
}

asm void fn_80697D28(void)
{
    nofralloc
    lis r3, lbl_807BBFFC@ha
    addi r3, r3, lbl_807BBFFC@l
    blr
}

asm void fn_80697D34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    cmplw r3, r31
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80697D34_0000177C
    li r3, -0x3
    b lbl_fn_80697D34_00001828
lbl_fn_80697D34_0000177C:
    bl fn_806984C0
    lis r3, lbl_807BC058@ha
    li r4, 0x0
    addi r3, r3, lbl_807BC058@l
    li r5, 0x3
    bl fn_8069832C
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80697D34_00001818
    lis r3, lbl_80833100@ha
    lwz r30, lbl_808803E4
    addi r3, r3, lbl_80833100@l
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80697D34_000017C0
    cmpwi r0, 0x3
    blt lbl_fn_80697D34_000017C8
lbl_fn_80697D34_000017C0:
    li r31, -0x7
    b lbl_fn_80697D34_00001818
lbl_fn_80697D34_000017C8:
    mulli r0, r0, 0x91c
    add r4, r30, r0
    lbz r0, 0x8(r4)
    clrlwi. r0, r0, 31
    beq lbl_fn_80697D34_000017F8
    li r0, 0x2
    addi r3, r29, 0x2
    stb r0, 0x0(r29)
    addi r4, r4, 0x7c8
    li r5, 0x4
    bl memcpy
    b lbl_fn_80697D34_00001810
lbl_fn_80697D34_000017F8:
    li r0, 0x1
    addi r3, r29, 0x2
    stb r0, 0x0(r29)
    addi r4, r4, 0x7c8
    li r5, 0x15c
    bl memcpy
lbl_fn_80697D34_00001810:
    lbz r0, 0x6(r30)
    stb r0, 0x1(r29)
lbl_fn_80697D34_00001818:
    lis r3, lbl_808330E0@ha
    addi r3, r3, lbl_808330E0@l
    bl fn_805F3210
    mr r3, r31
lbl_fn_80697D34_00001828:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80697E2C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    cmplw r3, r30
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bne lbl_fn_80697E2C_00001878
    li r3, -0x3
    b lbl_fn_80697E2C_0000197C
lbl_fn_80697E2C_00001878:
    bl fn_806984C0
    lis r3, lbl_807BC070@ha
    li r4, 0x0
    addi r3, r3, lbl_807BC070@l
    li r5, 0x3
    bl fn_8069832C
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80697E2C_0000196C
    lis r3, lbl_80833100@ha
    lwz r29, lbl_808803E4
    addi r3, r3, lbl_80833100@l
    lwz r28, 0x4(r3)
    cmpwi r28, 0x0
    blt lbl_fn_80697E2C_000018BC
    cmpwi r28, 0x3
    blt lbl_fn_80697E2C_000018C4
lbl_fn_80697E2C_000018BC:
    li r30, -0x7
    b lbl_fn_80697E2C_0000196C
lbl_fn_80697E2C_000018C4:
    mulli r0, r28, 0x91c
    addi r3, r31, 0x1c
    li r5, 0xc
    add r4, r29, r0
    addi r4, r4, 0x20
    bl memcpy
    mulli r0, r28, 0x91c
    add r4, r29, r0
    lbz r0, 0x8(r4)
    rlwinm. r0, r0, 0, 29, 30
    beq lbl_fn_80697E2C_0000190C
    li r0, 0x1
    addi r3, r31, 0x8
    stw r0, 0x0(r31)
    addi r4, r4, 0xc
    li r5, 0x14
    bl memcpy
    b lbl_fn_80697E2C_00001924
lbl_fn_80697E2C_0000190C:
    li r0, 0x0
    addi r3, r31, 0x8
    stw r0, 0x0(r31)
    addi r4, r4, 0xc
    li r5, 0x14
    bl memcpy
lbl_fn_80697E2C_00001924:
    mulli r0, r28, 0x91c
    add r4, r29, r0
    lbz r0, 0x8(r4)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_80697E2C_00001954
    li r0, 0x1
    addi r3, r31, 0x28
    stw r0, 0x4(r31)
    addi r4, r4, 0x2c
    li r5, 0x79c
    bl memcpy
    b lbl_fn_80697E2C_0000196C
lbl_fn_80697E2C_00001954:
    li r0, 0x0
    addi r3, r31, 0x28
    stw r0, 0x4(r31)
    li r4, 0x0
    li r5, 0x79c
    bl memset
lbl_fn_80697E2C_0000196C:
    lis r3, lbl_808330E0@ha
    addi r3, r3, lbl_808330E0@l
    bl fn_805F3210
    mr r3, r30
lbl_fn_80697E2C_0000197C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80697F84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_808330E0@ha
    addi r30, r30, lbl_808330E0@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    bne lbl_fn_80697F84_000019D4
    li r3, -0x5
    b lbl_fn_80697F84_00001A80
lbl_fn_80697F84_000019D4:
    bl fn_806984C0
    lis r3, lbl_807BC088@ha
    li r4, 0x0
    addi r3, r3, lbl_807BC088@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r28, r3
    bge lbl_fn_80697F84_00001A0C
    cmpwi r3, -0x6
    bne lbl_fn_80697F84_00001A04
    li r29, -0x8
    b lbl_fn_80697F84_00001A74
lbl_fn_80697F84_00001A04:
    li r29, -0x2
    b lbl_fn_80697F84_00001A74
lbl_fn_80697F84_00001A0C:
    addi r31, r30, 0x20
    addi r7, r30, 0x40
    li r0, 0x20
    stw r31, 0x40(r30)
    li r4, 0x7
    li r5, 0x0
    stw r0, 0x4(r7)
    li r6, 0x1
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bge lbl_fn_80697F84_00001A40
    li r29, -0x2
    b lbl_fn_80697F84_00001A60
lbl_fn_80697F84_00001A40:
    lwz r29, 0x20(r30)
    cmpwi r29, 0x0
    bne lbl_fn_80697F84_00001A60
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    blt lbl_fn_80697F84_00001A5C
    b lbl_fn_80697F84_00001A60
lbl_fn_80697F84_00001A5C:
    li r29, -0x1
lbl_fn_80697F84_00001A60:
    mr r3, r28
    bl fn_8061C8A0
    cmpwi r3, 0x0
    bge lbl_fn_80697F84_00001A74
    li r29, -0x1
lbl_fn_80697F84_00001A74:
    addi r3, r30, 0x0
    bl fn_805F3210
    mr r3, r29
lbl_fn_80697F84_00001A80:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
