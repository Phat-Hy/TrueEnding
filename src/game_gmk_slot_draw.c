#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80206B68(void);
extern void fn_80206B70(void);
extern void fn_80206BE4(void);
extern void fn_8020EE58(void);
extern void fn_8020EE60(void);
extern void fn_8020EF80(void);
extern void fn_80211480(void);
extern void fn_802114D8(void);
extern void fn_802114E0(void);
extern void fn_80213B78(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_80444564(void);
extern void fn_80444EFC(void);
extern void fn_804479B8(void);
extern void fn_80448B80(void);

/* External data declarations */
extern u8 jumptable_8078F320[];

/* Small data declarations */
extern u32 lbl_8087DFF0;
extern u32 lbl_8087DFF4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;

/* Function declarations */
void fn_80445F44(void);
void fn_804467F0(void);
void fn_80446F98(void);
void fn_80447740(void);

asm void fn_80445F44(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    subi r0, r5, 0x2711
    cmplwi r0, 0x9
    stmw r19, 0x1c(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r19, r6
    mr r28, r7
    bgt lbl_fn_80445F44_00000760
    lis r3, jumptable_8078F320@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078F320@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    bl fn_80206B68
    mr r31, r3
    li r30, 0x0
    li r23, 0x1
    li r24, 0xa
    b lbl_fn_80445F44_000001E8
lbl_fn_80445F44_00000060:
    mr r3, r30
    bl fn_80206B70
    mr r29, r3
    mr r3, r25
    addi r4, r29, 0xf4
    addi r5, r29, 0x104
    bl fn_80448B80
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000001E4
    mr r3, r29
    bl fn_80206BE4
    lwz r0, lbl_8087F430
    mr r22, r3
    li r19, -0x1
    li r20, -0x1
    cmpwi r0, 0x0
    li r21, -0x1
    beq lbl_fn_80445F44_000000D0
    mr r3, r0
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000000F8
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r19, 0x48(r3)
    lwz r20, 0x4c(r3)
    lwz r21, 0x50(r3)
    b lbl_fn_80445F44_000000F8
lbl_fn_80445F44_000000D0:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000000F8
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445F44_000000F8
    lwz r19, -0x24e8(r3)
    lwz r20, -0x24e4(r3)
    lwz r21, -0x24e0(r3)
lbl_fn_80445F44_000000F8:
    mr r3, r22
    mr r4, r19
    mr r5, r20
    mr r6, r21
    bl fn_80213B78
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000001A0
    lwz r0, 0x78(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80445F44_00000134
    lwz r0, 0x80(r29)
    cmpwi r0, 0x269
    blt lbl_fn_80445F44_00000134
    cmpwi r0, 0x26c
    ble lbl_fn_80445F44_000001A0
lbl_fn_80445F44_00000134:
    mr r3, r29
    bl fn_80206BE4
    mr r4, r3
    mr r3, r25
    bl fn_80444564
    lwz r0, 0x78(r29)
    li r4, 0x2
    cmpwi r0, 0x0
    bne lbl_fn_80445F44_00000170
    lwz r0, 0x80(r29)
    cmpwi r0, 0x1b2
    blt lbl_fn_80445F44_00000170
    cmpwi r0, 0x1cd
    bgt lbl_fn_80445F44_00000170
    li r4, 0x1
lbl_fn_80445F44_00000170:
    cmpw r3, r4
    blt lbl_fn_80445F44_000001A0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000001A0
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80445F44_000001A0
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80445F44_000001E4
lbl_fn_80445F44_000001A0:
    mr r3, r29
    bl fn_80206BE4
    lwz r0, 0x0(r26)
    cmplwi r0, 0x180
    bge lbl_fn_80445F44_000001E4
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r0, r26, r0
    addic. r4, r0, 0x4
    beq lbl_fn_80445F44_000001D8
    stw r3, 0x0(r4)
    sth r23, 0x4(r4)
    sth r24, 0x6(r4)
    stw r29, 0x8(r4)
lbl_fn_80445F44_000001D8:
    lwz r3, 0x0(r26)
    addi r0, r3, 0x1
    stw r0, 0x0(r26)
lbl_fn_80445F44_000001E4:
    addi r30, r30, 0x1
lbl_fn_80445F44_000001E8:
    cmpw r30, r31
    blt lbl_fn_80445F44_00000060
    cmpwi r27, 0x2718
    bne lbl_fn_80445F44_000002D0
    lwz r0, 0x0(r26)
    mr r4, r26
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80445F44_0000022C
lbl_fn_80445F44_00000210:
    lwz r3, 0xc(r4)
    lwz r0, 0x128(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80445F44_00000224
    addi r5, r5, 0x1
lbl_fn_80445F44_00000224:
    addi r4, r4, 0xc
    bdnz lbl_fn_80445F44_00000210
lbl_fn_80445F44_0000022C:
    cmpwi r5, 0x0
    ble lbl_fn_80445F44_000002D0
    addi r7, r26, 0x4
    lis r4, 0x2aab
    b lbl_fn_80445F44_000002B8
lbl_fn_80445F44_00000240:
    lwz r3, 0x8(r7)
    lwz r0, 0x128(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80445F44_000002B4
    addi r0, r26, 0x4
    subi r3, r4, 0x5555
    subf r0, r0, r7
    mulhw r0, r3, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r5, r0, r3
    mulli r0, r5, 0xc
    add r6, r26, r0
    b lbl_fn_80445F44_0000029C
lbl_fn_80445F44_00000278:
    lwz r0, 0x10(r6)
    addi r5, r5, 0x1
    stw r0, 0x4(r6)
    lha r0, 0x14(r6)
    sth r0, 0x8(r6)
    lha r0, 0x16(r6)
    sth r0, 0xa(r6)
    lwz r0, 0x18(r6)
    stwu r0, 0xc(r6)
lbl_fn_80445F44_0000029C:
    lwz r3, 0x0(r26)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80445F44_00000278
    stw r0, 0x0(r26)
    b lbl_fn_80445F44_000002B8
lbl_fn_80445F44_000002B4:
    addi r7, r7, 0xc
lbl_fn_80445F44_000002B8:
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r3, r26, r0
    addi r0, r3, 0x4
    cmplw r7, r0
    bne lbl_fn_80445F44_00000240
lbl_fn_80445F44_000002D0:
    cmpwi r27, 0x2715
    bne lbl_fn_80445F44_00000360
    li r0, 0x0
    stb r0, 0x14(r1)
    addi r3, r26, 0x4
    addi r5, r1, 0x14
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r4, r26, r0
    addi r4, r4, 0x4
    bl fn_804479B8
    lwz r0, 0x0(r26)
    li r5, 0x0
    srwi. r4, r0, 1
    beq lbl_fn_80445F44_00000360
    cmplwi r4, 0x8
    subi r3, r4, 0x8
    ble lbl_fn_80445F44_00000340
    addi r0, r3, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_80445F44_00000340
lbl_fn_80445F44_0000032C:
    lwz r3, 0x0(r26)
    addi r5, r5, 0x8
    subi r0, r3, 0x8
    stw r0, 0x0(r26)
    bdnz lbl_fn_80445F44_0000032C
lbl_fn_80445F44_00000340:
    subf r0, r5, r4
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80445F44_00000360
lbl_fn_80445F44_00000350:
    lwz r3, 0x0(r26)
    subi r0, r3, 0x1
    stw r0, 0x0(r26)
    bdnz lbl_fn_80445F44_00000350
lbl_fn_80445F44_00000360:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000007C8
    li r4, 0xd5
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80445F44_000007C8
    li r0, 0x0
    stb r0, 0x10(r1)
    addi r3, r26, 0x4
    addi r5, r1, 0x10
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r4, r26, r0
    addi r4, r4, 0x4
    bl fn_804479B8
    lwz r0, 0x0(r26)
    srwi. r0, r0, 1
    beq lbl_fn_80445F44_000007C8
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80445F44_000007C8
lbl_fn_80445F44_000003B8:
    mr r5, r26
    li r4, 0x0
    b lbl_fn_80445F44_000003E8
lbl_fn_80445F44_000003C4:
    lwz r0, 0x10(r5)
    addi r4, r4, 0x1
    stw r0, 0x4(r5)
    lha r0, 0x14(r5)
    sth r0, 0x8(r5)
    lha r0, 0x16(r5)
    sth r0, 0xa(r5)
    lwz r0, 0x18(r5)
    stwu r0, 0xc(r5)
lbl_fn_80445F44_000003E8:
    lwz r3, 0x0(r26)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_80445F44_000003C4
    stw r0, 0x0(r26)
    bdnz lbl_fn_80445F44_000003B8
    b lbl_fn_80445F44_000007C8
    bl fn_8020EE58
    mr r30, r3
    li r19, 0x0
    li r29, 0x1
    li r24, 0xa
    b lbl_fn_80445F44_000004C0
lbl_fn_80445F44_0000041C:
    mr r3, r19
    bl fn_8020EE60
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_80445F44_00000438
    li r0, 0x0
    b lbl_fn_80445F44_00000458
lbl_fn_80445F44_00000438:
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445F44_00000454
    cmpwi r0, 0x1
    beq lbl_fn_80445F44_00000454
    li r0, 0x0
    b lbl_fn_80445F44_00000458
lbl_fn_80445F44_00000454:
    li r0, 0x1
lbl_fn_80445F44_00000458:
    cmpwi r0, 0x0
    beq lbl_fn_80445F44_000004BC
    mr r3, r25
    addi r4, r20, 0xc0
    addi r5, r20, 0xd0
    bl fn_80448B80
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000004BC
    mr r3, r20
    bl fn_8020EF80
    lwz r0, 0x0(r26)
    cmplwi r0, 0x180
    bge lbl_fn_80445F44_000004BC
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r0, r26, r0
    addic. r4, r0, 0x4
    beq lbl_fn_80445F44_000004B0
    stw r3, 0x0(r4)
    sth r29, 0x4(r4)
    sth r24, 0x6(r4)
    stw r20, 0x8(r4)
lbl_fn_80445F44_000004B0:
    lwz r3, 0x0(r26)
    addi r0, r3, 0x1
    stw r0, 0x0(r26)
lbl_fn_80445F44_000004BC:
    addi r19, r19, 0x1
lbl_fn_80445F44_000004C0:
    cmpw r19, r30
    blt lbl_fn_80445F44_0000041C
    cmpwi r27, 0x2716
    bne lbl_fn_80445F44_00000558
    li r0, 0x0
    stb r0, 0xc(r1)
    addi r3, r26, 0x4
    addi r5, r1, 0xc
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r4, r26, r0
    addi r4, r4, 0x4
    bl fn_804467F0
    lwz r0, 0x0(r26)
    li r5, 0x0
    srwi. r4, r0, 1
    beq lbl_fn_80445F44_00000558
    cmplwi r4, 0x8
    subi r3, r4, 0x8
    ble lbl_fn_80445F44_00000538
    addi r0, r3, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_80445F44_00000538
lbl_fn_80445F44_00000524:
    lwz r3, 0x0(r26)
    addi r5, r5, 0x8
    subi r0, r3, 0x8
    stw r0, 0x0(r26)
    bdnz lbl_fn_80445F44_00000524
lbl_fn_80445F44_00000538:
    subf r0, r5, r4
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80445F44_00000558
lbl_fn_80445F44_00000548:
    lwz r3, 0x0(r26)
    subi r0, r3, 0x1
    stw r0, 0x0(r26)
    bdnz lbl_fn_80445F44_00000548
lbl_fn_80445F44_00000558:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000007C8
    li r4, 0xd5
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80445F44_000007C8
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r26, 0x4
    addi r5, r1, 0x8
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r4, r26, r0
    addi r4, r4, 0x4
    bl fn_804467F0
    lwz r0, 0x0(r26)
    srwi. r0, r0, 1
    beq lbl_fn_80445F44_000007C8
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80445F44_000007C8
lbl_fn_80445F44_000005B0:
    mr r5, r26
    li r4, 0x0
    b lbl_fn_80445F44_000005E0
lbl_fn_80445F44_000005BC:
    lwz r0, 0x10(r5)
    addi r4, r4, 0x1
    stw r0, 0x4(r5)
    lha r0, 0x14(r5)
    sth r0, 0x8(r5)
    lha r0, 0x16(r5)
    sth r0, 0xa(r5)
    lwz r0, 0x18(r5)
    stwu r0, 0xc(r5)
lbl_fn_80445F44_000005E0:
    lwz r3, 0x0(r26)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_80445F44_000005BC
    stw r0, 0x0(r26)
    bdnz lbl_fn_80445F44_000005B0
    b lbl_fn_80445F44_000007C8
    bl fn_802114D8
    mr r31, r3
    li r29, 0x0
    li r24, 0xa
    b lbl_fn_80445F44_000006D4
lbl_fn_80445F44_00000610:
    mr r3, r29
    bl fn_802114E0
    cmpwi r27, 0x2713
    mr r30, r3
    bne lbl_fn_80445F44_0000063C
    lha r0, 0xbc(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80445F44_000006D0
    cmpwi r0, 0x9
    bne lbl_fn_80445F44_00000664
    b lbl_fn_80445F44_000006D0
lbl_fn_80445F44_0000063C:
    addis r4, r25, 0x1
    lwz r0, -0x24f0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80445F44_000006D0
    lha r0, 0xbc(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80445F44_000006D0
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x7
    bgt lbl_fn_80445F44_000006D0
lbl_fn_80445F44_00000664:
    mr r3, r25
    addi r4, r30, 0xcc
    addi r5, r30, 0xdc
    bl fn_80448B80
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000006D0
    lbz r0, 0xc3(r30)
    li r5, 0x1
    lwz r4, 0x4(r30)
    extsb. r0, r0
    ble lbl_fn_80445F44_00000694
    mr r5, r0
lbl_fn_80445F44_00000694:
    lwz r0, 0x0(r26)
    cmplwi r0, 0x180
    bge lbl_fn_80445F44_000006D0
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r0, r26, r0
    addic. r3, r0, 0x4
    beq lbl_fn_80445F44_000006C4
    stw r4, 0x0(r3)
    sth r5, 0x4(r3)
    sth r24, 0x6(r3)
    stw r30, 0x8(r3)
lbl_fn_80445F44_000006C4:
    lwz r3, 0x0(r26)
    addi r0, r3, 0x1
    stw r0, 0x0(r26)
lbl_fn_80445F44_000006D0:
    addi r29, r29, 0x1
lbl_fn_80445F44_000006D4:
    cmpw r29, r31
    blt lbl_fn_80445F44_00000610
    b lbl_fn_80445F44_000007C8
    mr r3, r27
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_00000758
    li r20, 0x0
    li r29, 0xa
lbl_fn_80445F44_000006F8:
    li r3, 0x0
    bl fn_80444EFC
    extsh r19, r3
    mr r3, r27
    bl fn_80211480
    lwz r0, 0x0(r26)
    cmplwi r0, 0x180
    bge lbl_fn_80445F44_00000748
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r0, r26, r0
    addic. r4, r0, 0x4
    beq lbl_fn_80445F44_0000073C
    stw r27, 0x0(r4)
    sth r19, 0x4(r4)
    sth r29, 0x6(r4)
    stw r3, 0x8(r4)
lbl_fn_80445F44_0000073C:
    lwz r3, 0x0(r26)
    addi r0, r3, 0x1
    stw r0, 0x0(r26)
lbl_fn_80445F44_00000748:
    addi r20, r20, 0x1
    cmpwi r20, 0x5
    blt lbl_fn_80445F44_000006F8
    b lbl_fn_80445F44_000007C8
lbl_fn_80445F44_00000758:
    li r3, 0x0
    b lbl_fn_80445F44_00000898
lbl_fn_80445F44_00000760:
    mr r3, r27
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000007C0
    mr r3, r27
    extsh r19, r19
    bl fn_80211480
    lwz r0, 0x0(r26)
    cmplwi r0, 0x180
    bge lbl_fn_80445F44_000007C8
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r0, r26, r0
    addic. r4, r0, 0x4
    beq lbl_fn_80445F44_000007B0
    stw r27, 0x0(r4)
    li r0, 0xa
    sth r19, 0x4(r4)
    sth r0, 0x6(r4)
    stw r3, 0x8(r4)
lbl_fn_80445F44_000007B0:
    lwz r3, 0x0(r26)
    addi r0, r3, 0x1
    stw r0, 0x0(r26)
    b lbl_fn_80445F44_000007C8
lbl_fn_80445F44_000007C0:
    li r3, 0x0
    b lbl_fn_80445F44_00000898
lbl_fn_80445F44_000007C8:
    subi r0, r27, 0x2711
    cmplwi r0, 0x7
    ble lbl_fn_80445F44_000007DC
    cmpwi r27, 0x271a
    bne lbl_fn_80445F44_00000894
lbl_fn_80445F44_000007DC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_000007F8
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_80445F44_00000814
lbl_fn_80445F44_000007F8:
    addis r3, r25, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445F44_00000894
    lwz r0, -0x24d8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80445F44_00000894
lbl_fn_80445F44_00000814:
    cmpwi r28, 0x0
    bne lbl_fn_80445F44_0000082C
    cmpwi r27, 0x2713
    beq lbl_fn_80445F44_0000082C
    cmpwi r27, 0x2717
    bne lbl_fn_80445F44_00000894
lbl_fn_80445F44_0000082C:
    li r3, 0x143
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_80445F44_00000894
    lbz r0, 0xc3(r3)
    li r6, 0x1
    lwz r5, 0x4(r3)
    extsb. r0, r0
    ble lbl_fn_80445F44_00000854
    mr r6, r0
lbl_fn_80445F44_00000854:
    lwz r0, 0x0(r26)
    cmplwi r0, 0x180
    bge lbl_fn_80445F44_00000894
    lwz r0, 0x0(r26)
    mulli r0, r0, 0xc
    add r0, r26, r0
    addic. r4, r0, 0x4
    beq lbl_fn_80445F44_00000888
    stw r5, 0x0(r4)
    li r0, 0xa
    sth r6, 0x4(r4)
    sth r0, 0x6(r4)
    stw r3, 0x8(r4)
lbl_fn_80445F44_00000888:
    lwz r3, 0x0(r26)
    addi r0, r3, 0x1
    stw r0, 0x0(r26)
lbl_fn_80445F44_00000894:
    li r3, 0x1
lbl_fn_80445F44_00000898:
    lmw r19, 0x1c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804467F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    lis r31, 0x2aab
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r30, r6, 0x6667
    subi r29, r31, 0x5555
lbl_fn_804467F0_000008D8:
    subf r0, r24, r25
    mulhw r0, r29, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_804467F0_00001040
    cmpwi r7, 0x14
    bgt lbl_fn_804467F0_000009F8
    cmplw r24, r25
    beq lbl_fn_804467F0_00001040
    subi r0, r25, 0xc
    b lbl_fn_804467F0_000009EC
lbl_fn_804467F0_0000090C:
    cmplw r24, r25
    mr r5, r24
    beq lbl_fn_804467F0_000009A0
    addi r6, r24, 0xc
    b lbl_fn_804467F0_00000998
lbl_fn_804467F0_00000920:
    lwz r3, 0x8(r6)
    lwz r4, 0x8(r5)
    lwz r8, 0xbc(r3)
    lwz r7, 0xbc(r4)
    cmpw r8, r7
    beq lbl_fn_804467F0_00000950
    xor r3, r8, r7
    srawi r4, r3, 1
    and r3, r3, r8
    subf r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_804467F0_00000988
lbl_fn_804467F0_00000950:
    lwz r7, 0x7c(r4)
    lwz r8, 0x7c(r3)
    cmpw r8, r7
    beq lbl_fn_804467F0_00000978
    xor r3, r7, r8
    srawi r4, r3, 1
    and r3, r3, r7
    subf r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_804467F0_00000988
lbl_fn_804467F0_00000978:
    xor r3, r4, r3
    cntlzw r3, r3
    slw r3, r4, r3
    srwi r3, r3, 31
lbl_fn_804467F0_00000988:
    cmpwi r3, 0x0
    beq lbl_fn_804467F0_00000994
    mr r5, r6
lbl_fn_804467F0_00000994:
    addi r6, r6, 0xc
lbl_fn_804467F0_00000998:
    cmplw r6, r25
    bne lbl_fn_804467F0_00000920
lbl_fn_804467F0_000009A0:
    cmplw r5, r24
    beq lbl_fn_804467F0_000009E8
    lwz r4, 0x0(r5)
    lha r6, 0x4(r5)
    lha r7, 0x6(r5)
    lwz r8, 0x8(r5)
    lwz r3, 0x0(r24)
    stw r3, 0x0(r5)
    lha r3, 0x4(r24)
    sth r3, 0x4(r5)
    lha r3, 0x6(r24)
    sth r3, 0x6(r5)
    lwz r3, 0x8(r24)
    stw r3, 0x8(r5)
    stw r4, 0x0(r24)
    sth r6, 0x4(r24)
    sth r7, 0x6(r24)
    stw r8, 0x8(r24)
lbl_fn_804467F0_000009E8:
    addi r24, r24, 0xc
lbl_fn_804467F0_000009EC:
    cmplw r24, r0
    bne lbl_fn_804467F0_0000090C
    b lbl_fn_804467F0_00001040
lbl_fn_804467F0_000009F8:
    lwz r4, lbl_8087DFF0
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r30, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r3, r24, r0
    blt lbl_fn_804467F0_00000A38
    li r6, -0x4
lbl_fn_804467F0_00000A38:
    mulhw r4, r30, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087DFF0
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r4, r24, r0
    blt lbl_fn_804467F0_00000A84
    li r6, -0x4
    stw r6, lbl_8087DFF0
lbl_fn_804467F0_00000A84:
    subi r27, r25, 0xc
    mr r6, r26
    mr r5, r27
    bl fn_80447740
    lwz r3, 0x8(r27)
    mr r28, r24
    mr r4, r27
    b lbl_fn_804467F0_00000AA8
lbl_fn_804467F0_00000AA4:
    addi r28, r28, 0xc
lbl_fn_804467F0_00000AA8:
    lwz r5, 0x8(r28)
    lwz r0, 0xbc(r3)
    lwz r6, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_804467F0_00000AD4
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000B0C
lbl_fn_804467F0_00000AD4:
    lwz r6, 0x7c(r3)
    lwz r0, 0x7c(r5)
    cmpw r0, r6
    beq lbl_fn_804467F0_00000AFC
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000B0C
lbl_fn_804467F0_00000AFC:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_804467F0_00000B0C:
    cmpwi r0, 0x0
    bne lbl_fn_804467F0_00000AA4
lbl_fn_804467F0_00000B14:
    subi r4, r4, 0xc
    cmplw r28, r4
    beq lbl_fn_804467F0_00000B8C
    lwz r5, 0x8(r4)
    lwz r0, 0xbc(r3)
    lwz r6, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_804467F0_00000B4C
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000B84
lbl_fn_804467F0_00000B4C:
    lwz r6, 0x7c(r3)
    lwz r0, 0x7c(r5)
    cmpw r0, r6
    beq lbl_fn_804467F0_00000B74
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000B84
lbl_fn_804467F0_00000B74:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_804467F0_00000B84:
    cmpwi r0, 0x0
    beq lbl_fn_804467F0_00000B14
lbl_fn_804467F0_00000B8C:
    cmplw r28, r4
    bge lbl_fn_804467F0_00000D10
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_804467F0_00000BE0
lbl_fn_804467F0_00000BDC:
    addi r28, r28, 0xc
lbl_fn_804467F0_00000BE0:
    lwz r5, 0x8(r28)
    lwz r3, 0x8(r27)
    lwz r6, 0xbc(r5)
    lwz r0, 0xbc(r3)
    cmpw r6, r0
    beq lbl_fn_804467F0_00000C10
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000C48
lbl_fn_804467F0_00000C10:
    lwz r6, 0x7c(r3)
    lwz r0, 0x7c(r5)
    cmpw r0, r6
    beq lbl_fn_804467F0_00000C38
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000C48
lbl_fn_804467F0_00000C38:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_804467F0_00000C48:
    cmpwi r0, 0x0
    bne lbl_fn_804467F0_00000BDC
    lwz r6, 0xbc(r3)
lbl_fn_804467F0_00000C54:
    lwz r5, -0x4(r4)
    subi r4, r4, 0xc
    lwz r7, 0xbc(r5)
    cmpw r7, r6
    beq lbl_fn_804467F0_00000C80
    xor r0, r7, r6
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000CB8
lbl_fn_804467F0_00000C80:
    lwz r7, 0x7c(r3)
    lwz r0, 0x7c(r5)
    cmpw r0, r7
    beq lbl_fn_804467F0_00000CA8
    xor r0, r7, r0
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000CB8
lbl_fn_804467F0_00000CA8:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_804467F0_00000CB8:
    cmpwi r0, 0x0
    beq lbl_fn_804467F0_00000C54
    cmplw r28, r4
    bge lbl_fn_804467F0_00000D10
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_804467F0_00000BE0
lbl_fn_804467F0_00000D10:
    cmplw r28, r24
    bne lbl_fn_804467F0_00000FDC
    lwz r3, 0x0(r28)
    subi r4, r25, 0xc
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    lha r0, 0x4(r27)
    sth r0, 0x4(r28)
    lha r0, 0x6(r27)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r27)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r27)
    sth r5, 0x4(r27)
    sth r6, 0x6(r27)
    stw r7, 0x8(r27)
    lwz r3, 0x8(r24)
    lwz r5, -0x4(r25)
    lwz r6, 0xbc(r3)
    lwz r0, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_804467F0_00000D90
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000DC8
lbl_fn_804467F0_00000D90:
    lwz r6, 0x7c(r5)
    lwz r0, 0x7c(r3)
    cmpw r0, r6
    beq lbl_fn_804467F0_00000DB8
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000DC8
lbl_fn_804467F0_00000DB8:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_804467F0_00000DC8:
    cmpwi r0, 0x0
    bne lbl_fn_804467F0_00000E94
    b lbl_fn_804467F0_00000DD8
lbl_fn_804467F0_00000DD4:
    addi r28, r28, 0xc
lbl_fn_804467F0_00000DD8:
    cmplw r28, r25
    beq lbl_fn_804467F0_00000E4C
    lwz r5, 0x8(r28)
    lwz r6, 0xbc(r3)
    lwz r0, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_804467F0_00000E0C
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000E44
lbl_fn_804467F0_00000E0C:
    lwz r6, 0x7c(r5)
    lwz r0, 0x7c(r3)
    cmpw r0, r6
    beq lbl_fn_804467F0_00000E34
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000E44
lbl_fn_804467F0_00000E34:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_804467F0_00000E44:
    cmpwi r0, 0x0
    beq lbl_fn_804467F0_00000DD4
lbl_fn_804467F0_00000E4C:
    cmplw r28, r4
    bge lbl_fn_804467F0_00000E94
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
lbl_fn_804467F0_00000E94:
    cmplw r28, r4
    bge lbl_fn_804467F0_00000FD4
    b lbl_fn_804467F0_00000EA4
lbl_fn_804467F0_00000EA0:
    addi r28, r28, 0xc
lbl_fn_804467F0_00000EA4:
    lwz r3, 0x8(r24)
    lwz r5, 0x8(r28)
    lwz r6, 0xbc(r3)
    lwz r0, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_804467F0_00000ED4
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000F0C
lbl_fn_804467F0_00000ED4:
    lwz r6, 0x7c(r5)
    lwz r0, 0x7c(r3)
    cmpw r0, r6
    beq lbl_fn_804467F0_00000EFC
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000F0C
lbl_fn_804467F0_00000EFC:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_804467F0_00000F0C:
    cmpwi r0, 0x0
    beq lbl_fn_804467F0_00000EA0
    lwz r6, 0xbc(r3)
lbl_fn_804467F0_00000F18:
    lwz r5, -0x4(r4)
    subi r4, r4, 0xc
    lwz r0, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_804467F0_00000F44
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000F7C
lbl_fn_804467F0_00000F44:
    lwz r7, 0x7c(r5)
    lwz r0, 0x7c(r3)
    cmpw r0, r7
    beq lbl_fn_804467F0_00000F6C
    xor r0, r7, r0
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_804467F0_00000F7C
lbl_fn_804467F0_00000F6C:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_804467F0_00000F7C:
    cmpwi r0, 0x0
    bne lbl_fn_804467F0_00000F18
    cmplw r28, r4
    bge lbl_fn_804467F0_00000FD4
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_804467F0_00000EA4
lbl_fn_804467F0_00000FD4:
    mr r24, r28
    b lbl_fn_804467F0_000008D8
lbl_fn_804467F0_00000FDC:
    subf r0, r24, r28
    subi r4, r31, 0x5555
    mulhw r3, r4, r0
    subf r0, r28, r25
    mulhw r0, r4, r0
    srawi r3, r3, 1
    srwi r4, r3, 31
    srawi r0, r0, 1
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_804467F0_00001028
    mr r3, r24
    mr r4, r28
    mr r5, r26
    bl fn_80446F98
    mr r24, r28
    b lbl_fn_804467F0_000008D8
lbl_fn_804467F0_00001028:
    mr r3, r28
    mr r4, r25
    mr r5, r26
    bl fn_80446F98
    mr r25, r28
    b lbl_fn_804467F0_000008D8
lbl_fn_804467F0_00001040:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80446F98(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    lis r31, 0x2aab
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r30, r6, 0x6667
    subi r29, r31, 0x5555
lbl_fn_80446F98_00001080:
    subf r0, r24, r25
    mulhw r0, r29, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_80446F98_000017E8
    cmpwi r7, 0x14
    bgt lbl_fn_80446F98_000011A0
    cmplw r24, r25
    beq lbl_fn_80446F98_000017E8
    subi r0, r25, 0xc
    b lbl_fn_80446F98_00001194
lbl_fn_80446F98_000010B4:
    cmplw r24, r25
    mr r5, r24
    beq lbl_fn_80446F98_00001148
    addi r6, r24, 0xc
    b lbl_fn_80446F98_00001140
lbl_fn_80446F98_000010C8:
    lwz r3, 0x8(r6)
    lwz r4, 0x8(r5)
    lwz r8, 0xbc(r3)
    lwz r7, 0xbc(r4)
    cmpw r8, r7
    beq lbl_fn_80446F98_000010F8
    xor r3, r8, r7
    srawi r4, r3, 1
    and r3, r3, r8
    subf r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_80446F98_00001130
lbl_fn_80446F98_000010F8:
    lwz r7, 0x7c(r4)
    lwz r8, 0x7c(r3)
    cmpw r8, r7
    beq lbl_fn_80446F98_00001120
    xor r3, r7, r8
    srawi r4, r3, 1
    and r3, r3, r7
    subf r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_80446F98_00001130
lbl_fn_80446F98_00001120:
    xor r3, r4, r3
    cntlzw r3, r3
    slw r3, r4, r3
    srwi r3, r3, 31
lbl_fn_80446F98_00001130:
    cmpwi r3, 0x0
    beq lbl_fn_80446F98_0000113C
    mr r5, r6
lbl_fn_80446F98_0000113C:
    addi r6, r6, 0xc
lbl_fn_80446F98_00001140:
    cmplw r6, r25
    bne lbl_fn_80446F98_000010C8
lbl_fn_80446F98_00001148:
    cmplw r5, r24
    beq lbl_fn_80446F98_00001190
    lwz r4, 0x0(r5)
    lha r6, 0x4(r5)
    lha r7, 0x6(r5)
    lwz r8, 0x8(r5)
    lwz r3, 0x0(r24)
    stw r3, 0x0(r5)
    lha r3, 0x4(r24)
    sth r3, 0x4(r5)
    lha r3, 0x6(r24)
    sth r3, 0x6(r5)
    lwz r3, 0x8(r24)
    stw r3, 0x8(r5)
    stw r4, 0x0(r24)
    sth r6, 0x4(r24)
    sth r7, 0x6(r24)
    stw r8, 0x8(r24)
lbl_fn_80446F98_00001190:
    addi r24, r24, 0xc
lbl_fn_80446F98_00001194:
    cmplw r24, r0
    bne lbl_fn_80446F98_000010B4
    b lbl_fn_80446F98_000017E8
lbl_fn_80446F98_000011A0:
    lwz r4, lbl_8087DFF4
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r30, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r3, r24, r0
    blt lbl_fn_80446F98_000011E0
    li r6, -0x4
lbl_fn_80446F98_000011E0:
    mulhw r4, r30, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087DFF4
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r4, r24, r0
    blt lbl_fn_80446F98_0000122C
    li r6, -0x4
    stw r6, lbl_8087DFF4
lbl_fn_80446F98_0000122C:
    subi r27, r25, 0xc
    mr r6, r26
    mr r5, r27
    bl fn_80447740
    lwz r3, 0x8(r27)
    mr r28, r24
    mr r4, r27
    b lbl_fn_80446F98_00001250
lbl_fn_80446F98_0000124C:
    addi r28, r28, 0xc
lbl_fn_80446F98_00001250:
    lwz r5, 0x8(r28)
    lwz r0, 0xbc(r3)
    lwz r6, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_80446F98_0000127C
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_000012B4
lbl_fn_80446F98_0000127C:
    lwz r6, 0x7c(r3)
    lwz r0, 0x7c(r5)
    cmpw r0, r6
    beq lbl_fn_80446F98_000012A4
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_000012B4
lbl_fn_80446F98_000012A4:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80446F98_000012B4:
    cmpwi r0, 0x0
    bne lbl_fn_80446F98_0000124C
lbl_fn_80446F98_000012BC:
    subi r4, r4, 0xc
    cmplw r28, r4
    beq lbl_fn_80446F98_00001334
    lwz r5, 0x8(r4)
    lwz r0, 0xbc(r3)
    lwz r6, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_80446F98_000012F4
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_0000132C
lbl_fn_80446F98_000012F4:
    lwz r6, 0x7c(r3)
    lwz r0, 0x7c(r5)
    cmpw r0, r6
    beq lbl_fn_80446F98_0000131C
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_0000132C
lbl_fn_80446F98_0000131C:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80446F98_0000132C:
    cmpwi r0, 0x0
    beq lbl_fn_80446F98_000012BC
lbl_fn_80446F98_00001334:
    cmplw r28, r4
    bge lbl_fn_80446F98_000014B8
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_80446F98_00001388
lbl_fn_80446F98_00001384:
    addi r28, r28, 0xc
lbl_fn_80446F98_00001388:
    lwz r5, 0x8(r28)
    lwz r3, 0x8(r27)
    lwz r6, 0xbc(r5)
    lwz r0, 0xbc(r3)
    cmpw r6, r0
    beq lbl_fn_80446F98_000013B8
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_000013F0
lbl_fn_80446F98_000013B8:
    lwz r6, 0x7c(r3)
    lwz r0, 0x7c(r5)
    cmpw r0, r6
    beq lbl_fn_80446F98_000013E0
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_000013F0
lbl_fn_80446F98_000013E0:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80446F98_000013F0:
    cmpwi r0, 0x0
    bne lbl_fn_80446F98_00001384
    lwz r6, 0xbc(r3)
lbl_fn_80446F98_000013FC:
    lwz r5, -0x4(r4)
    subi r4, r4, 0xc
    lwz r7, 0xbc(r5)
    cmpw r7, r6
    beq lbl_fn_80446F98_00001428
    xor r0, r7, r6
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_00001460
lbl_fn_80446F98_00001428:
    lwz r7, 0x7c(r3)
    lwz r0, 0x7c(r5)
    cmpw r0, r7
    beq lbl_fn_80446F98_00001450
    xor r0, r7, r0
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_00001460
lbl_fn_80446F98_00001450:
    xor r0, r3, r5
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_fn_80446F98_00001460:
    cmpwi r0, 0x0
    beq lbl_fn_80446F98_000013FC
    cmplw r28, r4
    bge lbl_fn_80446F98_000014B8
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_80446F98_00001388
lbl_fn_80446F98_000014B8:
    cmplw r28, r24
    bne lbl_fn_80446F98_00001784
    lwz r3, 0x0(r28)
    subi r4, r25, 0xc
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    lha r0, 0x4(r27)
    sth r0, 0x4(r28)
    lha r0, 0x6(r27)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r27)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r27)
    sth r5, 0x4(r27)
    sth r6, 0x6(r27)
    stw r7, 0x8(r27)
    lwz r3, 0x8(r24)
    lwz r5, -0x4(r25)
    lwz r6, 0xbc(r3)
    lwz r0, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_80446F98_00001538
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_00001570
lbl_fn_80446F98_00001538:
    lwz r6, 0x7c(r5)
    lwz r0, 0x7c(r3)
    cmpw r0, r6
    beq lbl_fn_80446F98_00001560
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_00001570
lbl_fn_80446F98_00001560:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_80446F98_00001570:
    cmpwi r0, 0x0
    bne lbl_fn_80446F98_0000163C
    b lbl_fn_80446F98_00001580
lbl_fn_80446F98_0000157C:
    addi r28, r28, 0xc
lbl_fn_80446F98_00001580:
    cmplw r28, r25
    beq lbl_fn_80446F98_000015F4
    lwz r5, 0x8(r28)
    lwz r6, 0xbc(r3)
    lwz r0, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_80446F98_000015B4
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_000015EC
lbl_fn_80446F98_000015B4:
    lwz r6, 0x7c(r5)
    lwz r0, 0x7c(r3)
    cmpw r0, r6
    beq lbl_fn_80446F98_000015DC
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_000015EC
lbl_fn_80446F98_000015DC:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_80446F98_000015EC:
    cmpwi r0, 0x0
    beq lbl_fn_80446F98_0000157C
lbl_fn_80446F98_000015F4:
    cmplw r28, r4
    bge lbl_fn_80446F98_0000163C
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
lbl_fn_80446F98_0000163C:
    cmplw r28, r4
    bge lbl_fn_80446F98_0000177C
    b lbl_fn_80446F98_0000164C
lbl_fn_80446F98_00001648:
    addi r28, r28, 0xc
lbl_fn_80446F98_0000164C:
    lwz r3, 0x8(r24)
    lwz r5, 0x8(r28)
    lwz r6, 0xbc(r3)
    lwz r0, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_80446F98_0000167C
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_000016B4
lbl_fn_80446F98_0000167C:
    lwz r6, 0x7c(r5)
    lwz r0, 0x7c(r3)
    cmpw r0, r6
    beq lbl_fn_80446F98_000016A4
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_000016B4
lbl_fn_80446F98_000016A4:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_80446F98_000016B4:
    cmpwi r0, 0x0
    beq lbl_fn_80446F98_00001648
    lwz r6, 0xbc(r3)
lbl_fn_80446F98_000016C0:
    lwz r5, -0x4(r4)
    subi r4, r4, 0xc
    lwz r0, 0xbc(r5)
    cmpw r6, r0
    beq lbl_fn_80446F98_000016EC
    xor r0, r6, r0
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_00001724
lbl_fn_80446F98_000016EC:
    lwz r7, 0x7c(r5)
    lwz r0, 0x7c(r3)
    cmpw r0, r7
    beq lbl_fn_80446F98_00001714
    xor r0, r7, r0
    srawi r5, r0, 1
    and r0, r0, r7
    subf r0, r0, r5
    srwi r0, r0, 31
    b lbl_fn_80446F98_00001724
lbl_fn_80446F98_00001714:
    xor r0, r5, r3
    cntlzw r0, r0
    slw r0, r5, r0
    srwi r0, r0, 31
lbl_fn_80446F98_00001724:
    cmpwi r0, 0x0
    bne lbl_fn_80446F98_000016C0
    cmplw r28, r4
    bge lbl_fn_80446F98_0000177C
    lwz r3, 0x0(r28)
    lha r5, 0x4(r28)
    lha r6, 0x6(r28)
    lwz r7, 0x8(r28)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r28)
    lha r0, 0x4(r4)
    sth r0, 0x4(r28)
    lha r0, 0x6(r4)
    sth r0, 0x6(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    addi r28, r28, 0xc
    stw r3, 0x0(r4)
    sth r5, 0x4(r4)
    sth r6, 0x6(r4)
    stw r7, 0x8(r4)
    b lbl_fn_80446F98_0000164C
lbl_fn_80446F98_0000177C:
    mr r24, r28
    b lbl_fn_80446F98_00001080
lbl_fn_80446F98_00001784:
    subf r0, r24, r28
    subi r4, r31, 0x5555
    mulhw r3, r4, r0
    subf r0, r28, r25
    mulhw r0, r4, r0
    srawi r3, r3, 1
    srwi r4, r3, 31
    srawi r0, r0, 1
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_80446F98_000017D0
    mr r3, r24
    mr r4, r28
    mr r5, r26
    bl fn_80446F98
    mr r24, r28
    b lbl_fn_80446F98_00001080
lbl_fn_80446F98_000017D0:
    mr r3, r28
    mr r4, r25
    mr r5, r26
    bl fn_80446F98
    mr r25, r28
    b lbl_fn_80446F98_00001080
lbl_fn_80446F98_000017E8:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80447740(void)
{
    nofralloc
    lwz r9, 0x8(r5)
    lwz r6, 0x8(r3)
    lwz r8, 0xbc(r9)
    lwz r0, 0xbc(r6)
    cmpw r8, r0
    beq lbl_fn_80447740_0000182C
    xor r0, r8, r0
    srawi r7, r0, 1
    and r0, r0, r8
    subf r0, r0, r7
    srwi r0, r0, 31
    b lbl_fn_80447740_00001864
lbl_fn_80447740_0000182C:
    lwz r8, 0x7c(r6)
    lwz r0, 0x7c(r9)
    cmpw r0, r8
    beq lbl_fn_80447740_00001854
    xor r0, r8, r0
    srawi r7, r0, 1
    and r0, r0, r8
    subf r0, r0, r7
    srwi r0, r0, 31
    b lbl_fn_80447740_00001864
lbl_fn_80447740_00001854:
    xor r0, r6, r9
    cntlzw r0, r0
    slw r0, r6, r0
    srwi r0, r0, 31
lbl_fn_80447740_00001864:
    lwz r11, 0x8(r4)
    cntlzw r0, r0
    lwz r7, 0xbc(r9)
    srwi r0, r0, 5
    lwz r10, 0xbc(r11)
    cmpw r10, r7
    beq lbl_fn_80447740_00001898
    xor r7, r10, r7
    srawi r8, r7, 1
    and r7, r7, r10
    subf r7, r7, r8
    srwi r7, r7, 31
    b lbl_fn_80447740_000018D0
lbl_fn_80447740_00001898:
    lwz r10, 0x7c(r9)
    lwz r7, 0x7c(r11)
    cmpw r7, r10
    beq lbl_fn_80447740_000018C0
    xor r7, r10, r7
    srawi r8, r7, 1
    and r7, r7, r10
    subf r7, r7, r8
    srwi r7, r7, 31
    b lbl_fn_80447740_000018D0
lbl_fn_80447740_000018C0:
    xor r7, r9, r11
    cntlzw r7, r7
    slw r7, r9, r7
    srwi r7, r7, 31
lbl_fn_80447740_000018D0:
    cmpwi r0, 0x0
    cntlzw r7, r7
    srwi r7, r7, 5
    beq lbl_fn_80447740_000018E8
    cmpwi r7, 0x0
    bnelr
lbl_fn_80447740_000018E8:
    cmpwi r0, 0x0
    bne lbl_fn_80447740_0000193C
    cmpwi r7, 0x0
    bne lbl_fn_80447740_0000193C
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lha r6, 0x4(r3)
    lha r0, 0x4(r4)
    sth r0, 0x4(r3)
    lha r7, 0x6(r3)
    lha r0, 0x6(r4)
    sth r0, 0x6(r3)
    lwz r8, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    stw r5, 0x0(r4)
    sth r6, 0x4(r4)
    sth r7, 0x6(r4)
    stw r8, 0x8(r4)
    blr
lbl_fn_80447740_0000193C:
    lwz r7, 0xbc(r6)
    lwz r8, 0xbc(r11)
    cmpw r8, r7
    beq lbl_fn_80447740_00001964
    xor r6, r8, r7
    srawi r7, r6, 1
    and r6, r6, r8
    subf r6, r6, r7
    srwi r6, r6, 31
    b lbl_fn_80447740_0000199C
lbl_fn_80447740_00001964:
    lwz r8, 0x7c(r6)
    lwz r7, 0x7c(r11)
    cmpw r7, r8
    beq lbl_fn_80447740_0000198C
    xor r6, r8, r7
    srawi r7, r6, 1
    and r6, r6, r8
    subf r6, r6, r7
    srwi r6, r6, 31
    b lbl_fn_80447740_0000199C
lbl_fn_80447740_0000198C:
    xor r7, r6, r11
    cntlzw r7, r7
    slw r6, r6, r7
    srwi r6, r6, 31
lbl_fn_80447740_0000199C:
    cmpwi r6, 0x0
    beq lbl_fn_80447740_000019E4
    lwz r7, 0x0(r3)
    lwz r6, 0x0(r4)
    stw r6, 0x0(r3)
    lha r8, 0x4(r3)
    lha r6, 0x4(r4)
    sth r6, 0x4(r3)
    lha r9, 0x6(r3)
    lha r6, 0x6(r4)
    sth r6, 0x6(r3)
    lwz r10, 0x8(r3)
    lwz r6, 0x8(r4)
    stw r6, 0x8(r3)
    stw r7, 0x0(r4)
    sth r8, 0x4(r4)
    sth r9, 0x6(r4)
    stw r10, 0x8(r4)
lbl_fn_80447740_000019E4:
    cmpwi r0, 0x0
    beq lbl_fn_80447740_00001A30
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    lha r6, 0x4(r4)
    lha r0, 0x4(r5)
    sth r0, 0x4(r4)
    lha r7, 0x6(r4)
    lha r0, 0x6(r5)
    sth r0, 0x6(r4)
    lwz r8, 0x8(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    stw r3, 0x0(r5)
    sth r6, 0x4(r5)
    sth r7, 0x6(r5)
    stw r8, 0x8(r5)
    blr
lbl_fn_80447740_00001A30:
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lha r6, 0x4(r3)
    lha r0, 0x4(r5)
    sth r0, 0x4(r3)
    lha r7, 0x6(r3)
    lha r0, 0x6(r5)
    sth r0, 0x6(r3)
    lwz r8, 0x8(r3)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r3)
    stw r4, 0x0(r5)
    sth r6, 0x4(r5)
    sth r7, 0x6(r5)
    stw r8, 0x8(r5)
    blr
}
