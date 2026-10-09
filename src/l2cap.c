#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80627180(void);
extern void fn_806272C0(void);
extern void fn_80627400(void);
extern void fn_806274A0(void);
extern void fn_80627570(void);
extern void fn_80627580(void);
extern void fn_80629650(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_80629870(void);
extern void fn_806298B0(void);
extern void fn_806298D0(void);
extern void fn_80629E20(void);
extern void fn_80629E90(void);
extern void fn_8062FE10(void);
extern void fn_80630124(void);
extern void fn_8063024C(void);
extern void fn_80631F60(void);
extern void fn_80632414(void);
extern void fn_806332A4(void);
extern void fn_8063466C(void);
extern void fn_806357EC(void);
extern void fn_806359BC(void);
extern void fn_80636BA8(void);
extern void fn_80636D40(void);
extern void fn_80637174(void);
extern void fn_80637C5C(void);
extern void fn_806384E4(void);
extern void fn_80638DFC(void);
extern void fn_806392BC(void);
extern void fn_8063C8F4(void);
extern void fn_8063CAE8(void);
extern void fn_8063CB48(void);
extern void fn_8063E468(void);
extern void fn_80649CC0(void);
extern void fn_8067E23C(void);

/* External data declarations */
extern u8 jumptable_807B66C0[];
extern u8 jumptable_807B6780[];
extern u8 jumptable_807B6824[];
extern u8 jumptable_807B68E8[];
extern u8 jumptable_807B6A50[];
extern u8 jumptable_807B6AE4[];
extern u8 jumptable_807B6C78[];
extern u8 jumptable_807B6D04[];
extern u8 jumptable_807B6DC8[];
extern u8 jumptable_807B6E60[];
extern u8 jumptable_807B740C[];
extern u8 lbl_807B5F30[];
extern u8 lbl_807B5FD8[];
extern u8 lbl_807B600C[];
extern u8 lbl_807B6288[];
extern u8 lbl_807B62A8[];
extern u8 lbl_807B62D4[];
extern u8 lbl_807B6300[];
extern u8 lbl_807B632C[];
extern u8 lbl_807B6350[];
extern u8 lbl_807B637C[];
extern u8 lbl_807B63A0[];
extern u8 lbl_807B6500[];
extern u8 lbl_807B6700[];
extern u8 lbl_807B6890[];
extern u8 lbl_807B68B8[];
extern u8 lbl_807B6AC0[];
extern u8 lbl_807B6E38[];
extern u8 lbl_807B6ED0[];
extern u8 lbl_807B6EF8[];
extern u8 lbl_807B6F18[];
extern u8 lbl_807B6F40[];
extern u8 lbl_807B6F68[];
extern u8 lbl_807B6F9C[];
extern u8 lbl_807B6FC4[];
extern u8 lbl_807B70A8[];
extern u8 lbl_807B70F0[];
extern u8 lbl_807B7110[];
extern u8 lbl_807B7130[];
extern u8 lbl_807B7168[];
extern u8 lbl_807B743C[];
extern u8 lbl_807B7450[];
extern u8 lbl_807B7468[];
extern u8 lbl_807B7484[];
extern u8 lbl_807B74A4[];
extern u8 lbl_807B74C4[];
extern u8 lbl_807B74E4[];
extern u8 lbl_807B7528[];
extern u8 lbl_8081FAF0[];
extern u8 lbl_80820018[];
extern u8 lbl_808230E0[];
extern u8 lbl_808238C8[];

/* Small data declarations */
extern u32 lbl_8087EAF8;
extern u32 lbl_8087EB00;
extern u32 lbl_80888890;

/* Function declarations */
void fn_80642174(void);
void fn_80642310(void);
void fn_806423A0(void);
void fn_806425D4(void);
void fn_80642764(void);
void fn_8064281C(void);
void fn_806428EC(void);
void fn_80642990(void);
void fn_80642A34(void);
void fn_80642B58(void);
void fn_80642C20(void);
void fn_80642D20(void);
void fn_80642D3C(void);
void fn_80642D40(void);
void fn_80642D8C(void);
void fn_80643020(void);
void fn_80643190(void);
void fn_806432F8(void);
void fn_8064353C(void);
void fn_80643714(void);
void fn_80643ADC(void);
void fn_80643D38(void);
void fn_80643F1C(void);
void fn_80644078(void);
void fn_8064421C(void);
void fn_80644370(void);
void fn_806445A8(void);
void fn_8064465C(void);
void fn_80644718(void);
void fn_80644788(void);
void fn_806448FC(void);
void fn_80644A04(void);
void fn_80644CD0(void);
void fn_80644E68(void);
void fn_80644F4C(void);
void fn_80644F60(void);
void fn_80645130(void);
void fn_8064519C(void);
void fn_8064521C(void);
void fn_80645288(void);
void fn_80645364(void);
void fn_806453A8(void);
void fn_806454BC(void);
void fn_806457EC(void);
void fn_8064625C(void);
void fn_806462AC(void);
void fn_806463D8(void);
void fn_806464AC(void);
void fn_806465AC(void);
void fn_80646634(void);
void fn_806466C4(void);
void fn_806466D4(void);
void fn_80646798(void);
void fn_80646894(void);
void fn_80646958(void);
void fn_80646A30(void);
void fn_80646AF0(void);
void fn_80646DE8(void);
void fn_806470E0(void);
void fn_80647294(void);
void fn_80647368(void);
void fn_80647428(void);
void fn_80647598(void);
void fn_80647734(void);
void fn_806477D8(void);
void fn_806478E4(void);
void fn_80647A88(void);
void fn_80647AE4(void);
void fn_80647B30(void);
void fn_80647B40(void);
void fn_80647BF8(void);
void fn_80647D40(void);
void fn_80647D80(void);
void fn_80647E90(void);
void fn_80647ED0(void);
void fn_80647F3C(void);
void fn_80648054(void);
void fn_80648124(void);
void fn_806481B4(void);
void fn_8064829C(void);

asm void fn_80642174(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_808230E0@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807B5F30@ha
    addi r31, r31, lbl_807B5F30@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, lbl_808230E0@l(r5)
    cmplwi r0, 0x3
    blt lbl_fn_80642174_0000004C
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x0
    bl fn_80629830
lbl_fn_80642174_0000004C:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80642174_0000007C
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80642174_0000007C
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80642174_0000007C
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80642174_000000A4
lbl_fn_80642174_0000007C:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80642174_0000009C
    mr r5, r29
    addi r4, r31, 0x30
    lis r3, 0x8
    bl fn_80629830
lbl_fn_80642174_0000009C:
    li r3, 0x0
    b lbl_fn_80642174_00000180
lbl_fn_80642174_000000A4:
    andi. r0, r29, 0x101
    cmpwi r0, 0x1
    beq lbl_fn_80642174_000000D8
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80642174_000000D0
    mr r5, r29
    addi r4, r31, 0x58
    lis r3, 0x8
    bl fn_80629830
lbl_fn_80642174_000000D0:
    li r3, 0x0
    b lbl_fn_80642174_00000180
lbl_fn_80642174_000000D8:
    mr r3, r29
    bl fn_80647B40
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_80642174_0000012C
    mr r3, r29
    bl fn_80647AE4
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_80642174_0000012C
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80642174_00000124
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r31, 0x80
    bl fn_80629830
lbl_fn_80642174_00000124:
    li r3, 0x0
    b lbl_fn_80642174_00000180
lbl_fn_80642174_0000012C:
    lwz r4, 0x0(r30)
    li r3, 0x1
    lwz r0, 0x4(r30)
    stw r4, 0x4(r5)
    stw r0, 0x8(r5)
    lwz r4, 0x8(r30)
    lwz r0, 0xc(r30)
    stw r4, 0xc(r5)
    stw r0, 0x10(r5)
    lwz r4, 0x10(r30)
    lwz r0, 0x14(r30)
    stw r4, 0x14(r5)
    stw r0, 0x18(r5)
    lwz r4, 0x18(r30)
    lwz r0, 0x1c(r30)
    stw r4, 0x1c(r5)
    stw r0, 0x20(r5)
    lwz r4, 0x20(r30)
    lwz r0, 0x24(r30)
    stw r4, 0x24(r5)
    stw r0, 0x28(r5)
lbl_fn_80642174_00000180:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80642310(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_808230E0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, lbl_808230E0@l(r4)
    cmplwi r0, 0x3
    blt lbl_fn_80642310_000001D8
    lis r3, 0x8
    lis r4, lbl_807B5FD8@ha
    mr r5, r31
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B5FD8@l
    bl fn_80629830
lbl_fn_80642310_000001D8:
    mr r3, r31
    bl fn_80647B40
    cmpwi r3, 0x0
    beq lbl_fn_80642310_000001F0
    bl fn_80647B30
    b lbl_fn_80642310_00000218
lbl_fn_80642310_000001F0:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80642310_00000218
    lis r3, 0x8
    lis r4, lbl_807B600C@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B600C@l
    bl fn_80629830
lbl_fn_80642310_00000218:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806423A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_808230E0@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807B5F30@ha
    addi r31, r31, lbl_807B5F30@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    lbz r0, lbl_808230E0@l(r5)
    cmplwi r0, 0x3
    blt lbl_fn_806423A0_0000027C
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x110
    bl fn_80629830
lbl_fn_806423A0_0000027C:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806423A0_000002B4
    lis r3, 0x8
    lbz r5, 0x0(r28)
    lbz r6, 0x1(r28)
    addi r3, r3, 0x2
    lbz r7, 0x2(r28)
    addi r4, r31, 0x130
    lbz r8, 0x3(r28)
    lbz r9, 0x4(r28)
    lbz r10, 0x5(r28)
    bl fn_806298D0
lbl_fn_806423A0_000002B4:
    bl fn_80632414
    clrlwi. r0, r3, 24
    bne lbl_fn_806423A0_000002E8
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806423A0_000002E0
    lis r3, 0x8
    addi r4, r31, 0x168
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_806423A0_000002E0:
    li r3, 0x0
    b lbl_fn_806423A0_00000440
lbl_fn_806423A0_000002E8:
    mr r3, r29
    bl fn_80647B40
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806423A0_00000328
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806423A0_00000320
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r31, 0x18c
    bl fn_80629830
lbl_fn_806423A0_00000320:
    li r3, 0x0
    b lbl_fn_806423A0_00000440
lbl_fn_806423A0_00000328:
    mr r3, r28
    bl fn_806465AC
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806423A0_0000038C
    mr r3, r28
    bl fn_806463D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806423A0_00000378
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806423A0_00000370
    lis r3, 0x8
    addi r4, r31, 0x1bc
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_806423A0_00000370:
    li r3, 0x0
    b lbl_fn_806423A0_00000440
lbl_fn_806423A0_00000378:
    bl fn_80647F3C
    clrlwi. r0, r3, 24
    bne lbl_fn_806423A0_0000038C
    li r3, 0x0
    b lbl_fn_806423A0_00000440
lbl_fn_806423A0_0000038C:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x5
    bne lbl_fn_806423A0_000003C0
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806423A0_000003B8
    lis r3, 0x8
    addi r4, r31, 0x1e0
    addi r3, r3, 0x2
    bl fn_80629810
lbl_fn_806423A0_000003B8:
    li r3, 0x0
    b lbl_fn_806423A0_00000440
lbl_fn_806423A0_000003C0:
    mr r3, r29
    bl fn_806477D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806423A0_000003FC
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806423A0_000003F4
    lis r3, 0x8
    addi r4, r31, 0x218
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_806423A0_000003F4:
    li r3, 0x0
    b lbl_fn_806423A0_00000440
lbl_fn_806423A0_000003FC:
    stw r30, 0x30(r3)
    lwz r0, 0x4(r29)
    cmpwi r0, 0x4
    bne lbl_fn_806423A0_00000418
    li r4, 0x14
    li r5, 0x0
    bl fn_80642D40
lbl_fn_806423A0_00000418:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806423A0_0000043C
    lis r3, 0x8
    lhz r5, 0x14(r28)
    addi r3, r3, 0x2
    addi r4, r31, 0x23c
    bl fn_80629830
lbl_fn_806423A0_0000043C:
    lhz r3, 0x14(r28)
lbl_fn_806423A0_00000440:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806425D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r8, lbl_808230E0@ha
    lis r31, lbl_807B5F30@ha
    lbz r0, lbl_808230E0@l(r8)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmplwi r0, 0x3
    mr r29, r6
    mr r30, r7
    addi r31, r31, lbl_807B5F30@l
    blt lbl_fn_806425D4_000004B0
    lis r3, 0x8
    addi r4, r31, 0x26c
    addi r3, r3, 0x2
    bl fn_80629870
lbl_fn_806425D4_000004B0:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806425D4_000004E8
    lis r3, 0x8
    lbz r5, 0x0(r26)
    lbz r6, 0x1(r26)
    addi r3, r3, 0x2
    lbz r7, 0x2(r26)
    addi r4, r31, 0x2a4
    lbz r8, 0x3(r26)
    lbz r9, 0x4(r26)
    lbz r10, 0x5(r26)
    bl fn_806298D0
lbl_fn_806425D4_000004E8:
    mr r3, r26
    bl fn_806465AC
    cmpwi r3, 0x0
    bne lbl_fn_806425D4_00000520
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806425D4_00000518
    lis r3, 0x8
    addi r4, r31, 0x2dc
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_806425D4_00000518:
    li r3, 0x0
    b lbl_fn_806425D4_000005D8
lbl_fn_806425D4_00000520:
    mr r4, r28
    bl fn_80647A88
    cmpwi r3, 0x0
    bne lbl_fn_806425D4_00000558
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806425D4_00000550
    lis r3, 0x8
    addi r4, r31, 0x300
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_806425D4_00000550:
    li r3, 0x0
    b lbl_fn_806425D4_000005D8
lbl_fn_806425D4_00000558:
    lbz r5, 0x36(r3)
    cmplw r5, r27
    beq lbl_fn_806425D4_00000590
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806425D4_00000588
    lis r3, 0x8
    mr r6, r27
    addi r4, r31, 0x324
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_806425D4_00000588:
    li r3, 0x0
    b lbl_fn_806425D4_000005D8
lbl_fn_806425D4_00000590:
    cmpwi r29, 0x0
    bne lbl_fn_806425D4_000005A8
    li r4, 0x15
    li r5, 0x0
    bl fn_80642D40
    b lbl_fn_806425D4_000005D4
lbl_fn_806425D4_000005A8:
    cmplwi r29, 0x1
    sth r29, 0x12(r1)
    sth r30, 0x14(r1)
    bne lbl_fn_806425D4_000005C8
    addi r5, r1, 0x8
    li r4, 0x15
    bl fn_80642D40
    b lbl_fn_806425D4_000005D4
lbl_fn_806425D4_000005C8:
    addi r5, r1, 0x8
    li r4, 0x16
    bl fn_80642D40
lbl_fn_806425D4_000005D4:
    li r3, 0x1
lbl_fn_806425D4_000005D8:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80642764(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808230E0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, lbl_808230E0@l(r5)
    cmplwi r0, 0x3
    blt lbl_fn_80642764_00000634
    lis r3, 0x8
    lis r4, lbl_807B6288@ha
    mr r5, r30
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B6288@l
    bl fn_80629830
lbl_fn_80642764_00000634:
    mr r4, r30
    li r3, 0x0
    bl fn_80647A88
    cmpwi r3, 0x0
    bne lbl_fn_80642764_00000678
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80642764_00000670
    lis r3, 0x8
    lis r4, lbl_807B62A8@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B62A8@l
    bl fn_80629830
lbl_fn_80642764_00000670:
    li r3, 0x0
    b lbl_fn_80642764_00000690
lbl_fn_80642764_00000678:
    li r0, 0x0
    mr r5, r31
    stb r0, 0x24(r31)
    li r4, 0x17
    bl fn_80642D40
    li r3, 0x1
lbl_fn_80642764_00000690:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064281C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808230E0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, lbl_808230E0@l(r5)
    cmplwi r0, 0x3
    blt lbl_fn_8064281C_000006F0
    lis r3, 0x8
    lis r4, lbl_807B62D4@ha
    lhz r6, 0x0(r31)
    mr r5, r30
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B62D4@l
    bl fn_80629850
lbl_fn_8064281C_000006F0:
    mr r4, r30
    li r3, 0x0
    bl fn_80647A88
    cmpwi r3, 0x0
    bne lbl_fn_8064281C_00000734
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064281C_0000072C
    lis r3, 0x8
    lis r4, lbl_807B6300@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B6300@l
    bl fn_80629830
lbl_fn_8064281C_0000072C:
    li r3, 0x0
    b lbl_fn_8064281C_00000760
lbl_fn_8064281C_00000734:
    lhz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8064281C_00000750
    mr r5, r31
    li r4, 0x18
    bl fn_80642D40
    b lbl_fn_8064281C_0000075C
lbl_fn_8064281C_00000750:
    mr r5, r31
    li r4, 0x19
    bl fn_80642D40
lbl_fn_8064281C_0000075C:
    li r3, 0x1
lbl_fn_8064281C_00000760:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806428EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_808230E0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, lbl_808230E0@l(r4)
    cmplwi r0, 0x3
    blt lbl_fn_806428EC_000007B4
    lis r3, 0x8
    lis r4, lbl_807B632C@ha
    mr r5, r31
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B632C@l
    bl fn_80629830
lbl_fn_806428EC_000007B4:
    mr r4, r31
    li r3, 0x0
    bl fn_80647A88
    cmpwi r3, 0x0
    bne lbl_fn_806428EC_000007F8
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806428EC_000007F0
    lis r3, 0x8
    lis r4, lbl_807B6350@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B6350@l
    bl fn_80629830
lbl_fn_806428EC_000007F0:
    li r3, 0x0
    b lbl_fn_806428EC_00000808
lbl_fn_806428EC_000007F8:
    li r4, 0x1a
    li r5, 0x0
    bl fn_80642D40
    li r3, 0x1
lbl_fn_806428EC_00000808:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80642990(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_808230E0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, lbl_808230E0@l(r4)
    cmplwi r0, 0x3
    blt lbl_fn_80642990_00000858
    lis r3, 0x8
    lis r4, lbl_807B637C@ha
    mr r5, r31
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B637C@l
    bl fn_80629830
lbl_fn_80642990_00000858:
    mr r4, r31
    li r3, 0x0
    bl fn_80647A88
    cmpwi r3, 0x0
    bne lbl_fn_80642990_0000089C
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80642990_00000894
    lis r3, 0x8
    lis r4, lbl_807B63A0@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B63A0@l
    bl fn_80629830
lbl_fn_80642990_00000894:
    li r3, 0x0
    b lbl_fn_80642990_000008AC
lbl_fn_80642990_0000089C:
    li r4, 0x1b
    li r5, 0x0
    bl fn_80642D40
    li r3, 0x1
lbl_fn_80642990_000008AC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80642A34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_808230E0@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807B5F30@ha
    addi r31, r31, lbl_807B5F30@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, lbl_808230E0@l(r5)
    cmplwi r0, 0x3
    blt lbl_fn_80642A34_00000914
    lis r3, 0x8
    lhz r6, 0x2(r29)
    mr r5, r28
    addi r4, r31, 0x49c
    addi r3, r3, 0x2
    bl fn_80629850
lbl_fn_80642A34_00000914:
    mr r4, r28
    li r3, 0x0
    bl fn_80647A88
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80642A34_00000960
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80642A34_00000950
    lis r3, 0x8
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r31, 0x4c4
    bl fn_80629830
lbl_fn_80642A34_00000950:
    mr r3, r29
    bl fn_80626D50
    li r3, 0x0
    b lbl_fn_80642A34_000009C4
lbl_fn_80642A34_00000960:
    lhz r4, 0x2(r29)
    lhz r0, 0x3a(r3)
    cmplw r4, r0
    bgt lbl_fn_80642A34_00000998
    mr r5, r29
    li r4, 0x1d
    bl fn_80642D40
    lwz r3, 0x10(r30)
    lbz r3, 0x41(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    addi r3, r3, 0x1
    b lbl_fn_80642A34_000009C4
lbl_fn_80642A34_00000998:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80642A34_000009B8
    lis r3, 0x8
    addi r4, r31, 0x4f0
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_80642A34_000009B8:
    mr r3, r29
    bl fn_80626D50
    li r3, 0x0
lbl_fn_80642A34_000009C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80642B58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80642B58_00000A18
    lis r3, lbl_808230E0@ha
    addi r3, r3, lbl_808230E0@l
    sth r4, 0x7ba(r3)
    b lbl_fn_80642B58_00000A90
lbl_fn_80642B58_00000A18:
    mr r4, r30
    li r3, 0x0
    bl fn_80647A88
    cmpwi r3, 0x0
    bne lbl_fn_80642B58_00000A5C
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80642B58_00000A54
    lis r3, 0x8
    lis r4, lbl_807B6500@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B6500@l
    bl fn_80629830
lbl_fn_80642B58_00000A54:
    li r3, 0x0
    b lbl_fn_80642B58_00000A94
lbl_fn_80642B58_00000A5C:
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80642B58_00000A88
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80642B58_00000A88
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80642B58_00000A88
    sth r31, 0x58(r3)
    b lbl_fn_80642B58_00000A90
lbl_fn_80642B58_00000A88:
    li r3, 0x0
    b lbl_fn_80642B58_00000A94
lbl_fn_80642B58_00000A90:
    li r3, 0x1
lbl_fn_80642B58_00000A94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80642C20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x6
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r4, r30
    la r3, lbl_80888890
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80642C20_00000B18
    mr r3, r30
    bl fn_806465AC
    cmpwi r3, 0x0
    beq lbl_fn_80642C20_00000B10
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80642C20_00000B10
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80642C20_00000B10
    sth r31, 0x58(r3)
    b lbl_fn_80642C20_00000B90
lbl_fn_80642C20_00000B10:
    li r3, 0x0
    b lbl_fn_80642C20_00000B94
lbl_fn_80642C20_00000B18:
    lis r3, lbl_808230E0@ha
    addi r3, r3, lbl_808230E0@l
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80642C20_00000B3C
    lwz r0, 0xc(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80642C20_00000B3C
    sth r31, 0x60(r3)
lbl_fn_80642C20_00000B3C:
    lbzu r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80642C20_00000B58
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80642C20_00000B58
    sth r31, 0x58(r3)
lbl_fn_80642C20_00000B58:
    lbz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80642C20_00000B74
    lwz r0, 0x60(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80642C20_00000B74
    sth r31, 0xb4(r3)
lbl_fn_80642C20_00000B74:
    lbz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80642C20_00000B90
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80642C20_00000B90
    sth r31, 0x110(r3)
lbl_fn_80642C20_00000B90:
    li r3, 0x1
lbl_fn_80642C20_00000B94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80642D20(void)
{
    nofralloc
    cmplwi r3, 0xff
    beq lbl_fn_80642D20_00000BBC
    lis r4, lbl_808230E0@ha
    stb r3, lbl_808230E0@l(r4)
lbl_fn_80642D20_00000BBC:
    lis r3, lbl_808230E0@ha
    lbz r3, lbl_808230E0@l(r3)
    blr
}

asm void fn_80642D3C(void)
{
    nofralloc
    blr
}

asm void fn_80642D40(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cmplwi r0, 0x8
    bgtlr
    lis r6, jumptable_807B66C0@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_807B66C0@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    b fn_80642D8C
    b fn_80643020
    b fn_80643190
    b fn_806432F8
    b fn_8064353C
    b fn_80643714
    b fn_80643ADC
    b fn_80643D38
    b fn_80643F1C
    blr
}

asm void fn_80642D8C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, lbl_808230E0@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_808230E0@l(r6)
    lis r31, jumptable_807B66C0@ha
    lwz r27, 0x18(r7)
    mr r28, r3
    cmplwi r0, 0x4
    lwz r30, 0x8(r7)
    lhz r29, 0x14(r3)
    mr r25, r4
    mr r26, r5
    addi r31, r31, jumptable_807B66C0@l
    blt lbl_fn_80642D8C_00000C74
    lis r3, 0x8
    mr r5, r25
    addi r3, r3, 0x3
    addi r4, r31, 0x24
    bl fn_80629830
lbl_fn_80642D8C_00000C74:
    cmplwi r25, 0x1e
    bgt lbl_fn_80642D8C_00000E94
    lis r3, jumptable_807B6780@ha
    slwi r0, r25, 2
    addi r3, r3, jumptable_807B6780@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80642D8C_00000CB8
    lis r3, 0x8
    lhz r5, 0x14(r28)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl fn_80629830
lbl_fn_80642D8C_00000CB8:
    mr r3, r28
    bl fn_806478E4
    mr r12, r27
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80642D8C_00000E94
    li r0, 0x1
    lwz r5, 0x10(r28)
    stw r0, 0x4(r28)
    lis r7, fn_806445A8@ha
    lwz r4, 0x30(r28)
    addi r3, r5, 0x2a
    lhz r5, 0x28(r5)
    addi r7, r7, fn_806445A8@l
    lhz r4, 0x2(r4)
    li r6, 0x1
    bl fn_80637C5C
    b lbl_fn_80642D8C_00000E94
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80642D8C_00000D30
    lis r3, 0x8
    lhz r5, 0x14(r28)
    lbz r6, 0x6(r26)
    addi r3, r3, 0x2
    addi r4, r31, 0x84
    bl fn_80629850
lbl_fn_80642D8C_00000D30:
    mr r3, r28
    bl fn_806478E4
    mr r12, r30
    mr r3, r29
    lbz r4, 0x6(r26)
    mtctr r12
    bctrl
    b lbl_fn_80642D8C_00000E94
    lwz r3, 0x10(r28)
    lis r7, fn_806445A8@ha
    lwz r4, 0x30(r28)
    addi r7, r7, fn_806445A8@l
    lhz r5, 0x28(r3)
    addi r3, r3, 0x2a
    lhz r4, 0x2(r4)
    li r6, 0x1
    bl fn_80637C5C
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_80642D8C_00000E94
    li r0, 0x1
    stw r0, 0x4(r28)
    b lbl_fn_80642D8C_00000E94
    mr r3, r28
    bl fn_80646894
    li r0, 0x3
    addi r3, r28, 0x18
    stw r0, 0x4(r28)
    li r4, 0x3
    li r5, 0x3c
    bl fn_80629E20
    b lbl_fn_80642D8C_00000E94
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80642D8C_00000DDC
    lis r3, 0x8
    lis r6, 0x1
    lhz r5, 0x14(r28)
    addi r3, r3, 0x2
    addi r4, r31, 0x84
    subi r6, r6, 0x1112
    bl fn_80629850
lbl_fn_80642D8C_00000DDC:
    mr r3, r28
    bl fn_806478E4
    mr r12, r30
    mr r3, r29
    li r4, 0x3
    mtctr r12
    bctrl
    b lbl_fn_80642D8C_00000E94
    li r0, 0x2
    lwz r5, 0x10(r28)
    stw r0, 0x4(r28)
    lis r7, fn_806445A8@ha
    lwz r4, 0x30(r28)
    addi r3, r5, 0x2a
    lhz r5, 0x28(r5)
    addi r7, r7, fn_806445A8@l
    lhz r4, 0x2(r4)
    li r6, 0x0
    bl fn_80637C5C
    b lbl_fn_80642D8C_00000E94
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80642D8C_00000E58
    lis r3, 0x8
    lis r6, 0x1
    lhz r5, 0x14(r28)
    addi r3, r3, 0x2
    addi r4, r31, 0x84
    subi r6, r6, 0x1112
    bl fn_80629850
lbl_fn_80642D8C_00000E58:
    mr r3, r28
    bl fn_806478E4
    lis r3, 0x1
    mr r12, r30
    subi r0, r3, 0x1112
    mr r3, r29
    clrlwi r4, r0, 16
    mtctr r12
    bctrl
    b lbl_fn_80642D8C_00000E94
    mr r3, r26
    bl fn_80626D50
    b lbl_fn_80642D8C_00000E94
    mr r3, r28
    bl fn_806478E4
lbl_fn_80642D8C_00000E94:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80643020(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, lbl_808230E0@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_808230E0@l(r6)
    lis r30, jumptable_807B66C0@ha
    lwz r29, 0x18(r7)
    mr r31, r3
    cmplwi r0, 0x4
    lwz r28, 0x8(r7)
    lhz r27, 0x14(r3)
    mr r25, r4
    mr r26, r5
    addi r30, r30, jumptable_807B66C0@l
    blt lbl_fn_80643020_00000F08
    lis r3, 0x8
    mr r5, r25
    addi r3, r3, 0x3
    addi r4, r30, 0x13c
    bl fn_80629830
lbl_fn_80643020_00000F08:
    subi r0, r25, 0x3
    cmplwi r0, 0x1a
    bgt lbl_fn_80643020_00001004
    lis r3, jumptable_807B6824@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B6824@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643020_00000F50
    lis r3, 0x8
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x40
    bl fn_80629830
lbl_fn_80643020_00000F50:
    mr r3, r31
    bl fn_806478E4
    mr r12, r29
    mr r3, r27
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80643020_00001004
    li r0, 0x3
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x3c
    bl fn_80629E20
    mr r3, r31
    bl fn_80646894
    li r0, 0x0
    stb r0, 0x37(r31)
    b lbl_fn_80643020_00001004
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643020_00000FC4
    lis r3, 0x8
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x84
    li r6, 0x5
    bl fn_80629850
lbl_fn_80643020_00000FC4:
    mr r3, r31
    bl fn_806478E4
    mr r12, r28
    mr r3, r27
    li r4, 0x5
    mtctr r12
    bctrl
    b lbl_fn_80643020_00001004
    mr r3, r26
    bl fn_80626D50
    b lbl_fn_80643020_00001004
    lwz r3, 0x10(r31)
    addi r3, r3, 0x2a
    bl fn_806384E4
    mr r3, r31
    bl fn_806478E4
lbl_fn_80643020_00001004:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80643190(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_808230E0@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, lbl_808230E0@l(r6)
    cmplwi r0, 0x4
    blt lbl_fn_80643190_00001068
    lis r3, 0x8
    lis r4, lbl_807B6890@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B6890@l
    bl fn_80629830
lbl_fn_80643190_00001068:
    subi r0, r30, 0x3
    cmplwi r0, 0x1a
    bgt lbl_fn_80643190_00001168
    lis r3, jumptable_807B68E8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B68E8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x10(r29)
    addi r3, r3, 0x2a
    bl fn_806384E4
    mr r3, r29
    bl fn_806478E4
    b lbl_fn_80643190_00001168
    li r0, 0x4
    addi r3, r29, 0x18
    stw r0, 0x4(r29)
    li r4, 0x3
    li r5, 0x3c
    bl fn_80629E20
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643190_000010E4
    lis r3, 0x8
    lis r4, lbl_807B68B8@ha
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B68B8@l
    bl fn_80629830
lbl_fn_80643190_000010E4:
    lwz r5, 0x30(r29)
    lwz r3, 0x10(r29)
    lwz r12, 0x4(r5)
    addi r3, r3, 0x2a
    lhz r4, 0x14(r29)
    lhz r5, 0x2(r5)
    lbz r6, 0x36(r29)
    mtctr r12
    bctrl
    b lbl_fn_80643190_00001168
    mr r3, r29
    li r4, 0x3
    li r5, 0x0
    bl fn_80646958
    mr r3, r29
    bl fn_806478E4
    b lbl_fn_80643190_00001168
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_80643190_00001168
    mr r3, r29
    bl fn_806478E4
    b lbl_fn_80643190_00001168
    lwz r3, 0x10(r29)
    lbz r4, 0x36(r29)
    lhz r5, 0x14(r29)
    lhz r6, 0x16(r29)
    bl fn_80647368
    lwz r3, 0x10(r29)
    addi r3, r3, 0x2a
    bl fn_806384E4
    mr r3, r29
    bl fn_806478E4
lbl_fn_80643190_00001168:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806432F8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, lbl_808230E0@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_808230E0@l(r6)
    lis r31, jumptable_807B66C0@ha
    lwz r28, 0x18(r7)
    mr r29, r3
    cmplwi r0, 0x4
    lwz r27, 0x8(r7)
    lhz r30, 0x14(r3)
    mr r25, r4
    mr r26, r5
    addi r31, r31, jumptable_807B66C0@l
    blt lbl_fn_806432F8_000011E0
    lis r3, 0x8
    mr r5, r25
    addi r3, r3, 0x3
    addi r4, r31, 0x294
    bl fn_80629830
lbl_fn_806432F8_000011E0:
    subi r0, r25, 0x3
    cmplwi r0, 0x1b
    bgt lbl_fn_806432F8_000013B0
    lis r3, jumptable_807B6A50@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B6A50@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    lis r3, lbl_808230E0@ha
    stw r0, 0x4(r29)
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806432F8_00001230
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl fn_80629830
lbl_fn_806432F8_00001230:
    mr r3, r29
    bl fn_806478E4
    mr r12, r28
    mr r3, r30
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806432F8_000013B0
    lhz r5, 0xe(r26)
    li r0, 0x5
    addi r3, r29, 0x18
    li r4, 0x3
    sth r5, 0x16(r29)
    li r5, 0x1e
    stw r0, 0x4(r29)
    bl fn_80629E20
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806432F8_00001294
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x2bc
    bl fn_80629830
lbl_fn_806432F8_00001294:
    lwz r5, 0x30(r29)
    li r4, 0x0
    lhz r3, 0x14(r29)
    lwz r12, 0x8(r5)
    mtctr r12
    bctrl
    b lbl_fn_806432F8_000013B0
    addi r3, r29, 0x18
    li r4, 0x3
    li r5, 0x78
    bl fn_80629E20
    lwz r3, 0x30(r29)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806432F8_000013B0
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806432F8_000012F0
    lis r3, 0x8
    addi r4, r31, 0x2f4
    addi r3, r3, 0x2
    bl fn_80629810
lbl_fn_806432F8_000012F0:
    lwz r4, 0x30(r29)
    li r3, 0x0
    lwz r12, 0xc(r4)
    mtctr r12
    bctrl
    b lbl_fn_806432F8_000013B0
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806432F8_00001330
    lis r3, 0x8
    lhz r5, 0x14(r29)
    lhz r6, 0xa(r26)
    addi r3, r3, 0x2
    addi r4, r31, 0x318
    bl fn_80629850
lbl_fn_806432F8_00001330:
    mr r3, r29
    bl fn_806478E4
    mr r12, r27
    mr r3, r30
    lhz r4, 0xa(r26)
    mtctr r12
    bctrl
    b lbl_fn_806432F8_000013B0
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806432F8_00001374
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x358
    bl fn_80629830
lbl_fn_806432F8_00001374:
    mr r3, r29
    bl fn_806478E4
    lis r3, 0x1
    mr r12, r27
    subi r0, r3, 0x1112
    mr r3, r30
    clrlwi r4, r0, 16
    mtctr r12
    bctrl
    b lbl_fn_806432F8_000013B0
    mr r3, r29
    bl fn_806478E4
    b lbl_fn_806432F8_000013B0
    mr r3, r26
    bl fn_80626D50
lbl_fn_806432F8_000013B0:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8064353C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r6, lbl_808230E0@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_808230E0@l(r6)
    mr r31, r3
    lwz r30, 0x18(r7)
    mr r27, r4
    cmplwi r0, 0x4
    lhz r29, 0x14(r3)
    mr r28, r5
    blt lbl_fn_8064353C_0000141C
    lis r3, 0x8
    lis r4, lbl_807B6AC0@ha
    mr r5, r27
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B6AC0@l
    bl fn_80629830
lbl_fn_8064353C_0000141C:
    subi r0, r27, 0x3
    cmplwi r0, 0x1b
    bgt lbl_fn_8064353C_00001588
    lis r3, jumptable_807B6AE4@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B6AE4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_8064353C_00001468
    lis r3, 0x8
    lis r4, lbl_807B6700@ha
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B6700@l
    bl fn_80629830
lbl_fn_8064353C_00001468:
    mr r3, r31
    bl fn_806478E4
    mr r12, r30
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8064353C_00001588
    cmpwi r28, 0x0
    beq lbl_fn_8064353C_0000149C
    lhz r4, 0xa(r28)
    cmpwi r4, 0x0
    bne lbl_fn_8064353C_000014C8
lbl_fn_8064353C_0000149C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_80646958
    li r0, 0x5
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x1e
    bl fn_80629E20
    b lbl_fn_8064353C_00001588
lbl_fn_8064353C_000014C8:
    lhz r5, 0xc(r28)
    mr r3, r31
    bl fn_80646958
    addi r3, r31, 0x18
    li r4, 0x3
    li r5, 0x78
    bl fn_80629E20
    b lbl_fn_8064353C_00001588
    lhz r4, 0xa(r28)
    mr r3, r31
    lhz r5, 0xc(r28)
    bl fn_80646958
    mr r3, r31
    bl fn_806478E4
    b lbl_fn_8064353C_00001588
    mr r3, r31
    li r4, 0x2
    li r5, 0x0
    bl fn_80646958
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_8064353C_0000153C
    lis r3, 0x8
    lis r4, lbl_807B6700@ha
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B6700@l
    bl fn_80629830
lbl_fn_8064353C_0000153C:
    mr r3, r31
    bl fn_806478E4
    mr r12, r30
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8064353C_00001588
    mr r3, r28
    bl fn_80626D50
    b lbl_fn_8064353C_00001588
    mr r3, r31
    bl fn_80647294
    li r0, 0x7
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x1e
    bl fn_80629E20
lbl_fn_8064353C_00001588:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80643714(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_808230E0@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_808230E0@l(r6)
    lis r31, jumptable_807B66C0@ha
    lwz r28, 0x18(r7)
    mr r30, r5
    cmplwi r0, 0x4
    lhz r27, 0x14(r3)
    mr r29, r3
    mr r26, r4
    addi r31, r31, jumptable_807B66C0@l
    blt lbl_fn_80643714_000015F8
    lis r3, 0x8
    mr r5, r26
    addi r3, r3, 0x3
    addi r4, r31, 0x494
    bl fn_80629830
lbl_fn_80643714_000015F8:
    subi r0, r26, 0x3
    cmplwi r0, 0x1b
    bgt lbl_fn_80643714_00001950
    lis r3, jumptable_807B6C78@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B6C78@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643714_00001640
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl fn_80629830
lbl_fn_80643714_00001640:
    mr r3, r29
    bl fn_806478E4
    mr r12, r28
    mr r3, r27
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80643714_00001950
    mr r3, r29
    mr r4, r30
    bl fn_80647BF8
    clrlwi. r0, r3, 24
    beq lbl_fn_80643714_000016B4
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643714_00001698
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x4b0
    bl fn_80629830
lbl_fn_80643714_00001698:
    lwz r5, 0x30(r29)
    mr r4, r30
    lhz r3, 0x14(r29)
    lwz r12, 0x10(r5)
    mtctr r12
    bctrl
    b lbl_fn_80643714_00001950
lbl_fn_80643714_000016B4:
    mr r3, r29
    mr r4, r30
    bl fn_80646DE8
    b lbl_fn_80643714_00001950
    mr r3, r29
    mr r4, r30
    bl fn_80647D40
    lbz r0, 0x34(r29)
    ori r3, r0, 0x2
    clrlwi. r0, r3, 31
    stb r3, 0x34(r29)
    beq lbl_fn_80643714_00001700
    li r0, 0x6
    addi r3, r29, 0x18
    stw r0, 0x4(r29)
    bl fn_80629E90
    mr r3, r29
    li r4, 0x0
    bl fn_80644078
lbl_fn_80643714_00001700:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643714_00001724
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x4e0
    bl fn_80629830
lbl_fn_80643714_00001724:
    lwz r5, 0x30(r29)
    mr r4, r30
    lhz r3, 0x14(r29)
    lwz r12, 0x14(r5)
    mtctr r12
    bctrl
    b lbl_fn_80643714_00001950
    addi r3, r29, 0x18
    bl fn_80629E90
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643714_00001770
    lis r3, 0x8
    lhz r5, 0x14(r29)
    lhz r6, 0x0(r30)
    addi r3, r3, 0x2
    addi r4, r31, 0x510
    bl fn_80629850
lbl_fn_80643714_00001770:
    lwz r5, 0x30(r29)
    mr r4, r30
    lhz r3, 0x14(r29)
    lwz r12, 0x14(r5)
    mtctr r12
    bctrl
    b lbl_fn_80643714_00001950
    addi r3, r29, 0x18
    li r4, 0x3
    li r5, 0x1e
    bl fn_80629E20
    li r0, 0x8
    lis r3, lbl_808230E0@ha
    stw r0, 0x4(r29)
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643714_000017C8
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x54c
    bl fn_80629830
lbl_fn_80643714_000017C8:
    lwz r5, 0x30(r29)
    li r4, 0x1
    lhz r3, 0x14(r29)
    lwz r12, 0x18(r5)
    mtctr r12
    bctrl
    b lbl_fn_80643714_00001950
    mr r3, r29
    mr r4, r30
    bl fn_80647D80
    mr r3, r29
    mr r4, r30
    bl fn_80646AF0
    addi r3, r29, 0x18
    li r4, 0x3
    li r5, 0x1e
    bl fn_80629E20
    b lbl_fn_80643714_00001950
    mr r3, r29
    mr r4, r30
    bl fn_80647E90
    lbz r0, 0x34(r29)
    ori r3, r0, 0x1
    rlwinm. r0, r3, 0, 30, 30
    stb r3, 0x34(r29)
    beq lbl_fn_80643714_0000184C
    li r0, 0x6
    addi r3, r29, 0x18
    stw r0, 0x4(r29)
    bl fn_80629E90
    mr r3, r29
    li r4, 0x0
    bl fn_80644078
lbl_fn_80643714_0000184C:
    mr r3, r29
    mr r4, r30
    bl fn_80646DE8
    b lbl_fn_80643714_00001950
    mr r3, r29
    mr r4, r30
    bl fn_80646DE8
    addi r3, r29, 0x18
    li r4, 0x3
    li r5, 0x1e
    bl fn_80629E20
    b lbl_fn_80643714_00001950
    mr r3, r29
    bl fn_80647294
    li r0, 0x7
    addi r3, r29, 0x18
    stw r0, 0x4(r29)
    li r4, 0x3
    li r5, 0x1e
    bl fn_80629E20
    b lbl_fn_80643714_00001950
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643714_000018C4
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x58c
    bl fn_80629830
lbl_fn_80643714_000018C4:
    lwz r5, 0x30(r29)
    mr r4, r30
    lhz r3, 0x14(r29)
    lwz r12, 0x24(r5)
    mtctr r12
    bctrl
    b lbl_fn_80643714_00001950
    lbz r0, 0x34(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_80643714_000018FC
    mr r4, r30
    addi r3, r29, 0x70
    bl fn_80627180
    b lbl_fn_80643714_00001950
lbl_fn_80643714_000018FC:
    mr r3, r30
    bl fn_80626D50
    b lbl_fn_80643714_00001950
    mr r3, r29
    bl fn_80647294
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643714_00001934
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl fn_80629830
lbl_fn_80643714_00001934:
    mr r3, r29
    bl fn_806478E4
    mr r12, r28
    mr r3, r27
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_80643714_00001950:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80643ADC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_808230E0@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_808230E0@l(r6)
    lis r30, jumptable_807B66C0@ha
    lwz r29, 0x18(r7)
    mr r31, r3
    cmplwi r0, 0x4
    lhz r28, 0x14(r3)
    mr r26, r4
    mr r27, r5
    addi r30, r30, jumptable_807B66C0@l
    blt lbl_fn_80643ADC_000019C0
    lis r3, 0x8
    mr r5, r26
    addi r3, r3, 0x3
    addi r4, r30, 0x628
    bl fn_80629830
lbl_fn_80643ADC_000019C0:
    subi r0, r26, 0x3
    cmplwi r0, 0x1a
    bgt lbl_fn_80643ADC_00001BAC
    lis r3, jumptable_807B6D04@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B6D04@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643ADC_00001A08
    lis r3, 0x8
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x40
    bl fn_80629830
lbl_fn_80643ADC_00001A08:
    mr r3, r31
    bl fn_806478E4
    mr r12, r29
    mr r3, r28
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80643ADC_00001BAC
    lwz r3, 0x30(r31)
    lwz r12, 0x20(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80643ADC_00001BAC
    lwz r3, 0x10(r31)
    addi r3, r3, 0x2a
    mtctr r12
    bctrl
    b lbl_fn_80643ADC_00001BAC
    lwz r28, 0x4(r31)
    li r3, 0x5
    lbz r29, 0x34(r31)
    li r0, 0x0
    stw r3, 0x4(r31)
    addi r3, r31, 0x18
    li r4, 0x3
    li r5, 0x1e
    stb r0, 0x34(r31)
    bl fn_80629E20
    mr r3, r31
    mr r4, r27
    bl fn_80647BF8
    clrlwi. r0, r3, 24
    beq lbl_fn_80643ADC_00001AA4
    lwz r5, 0x30(r31)
    mr r4, r27
    lhz r3, 0x14(r31)
    lwz r12, 0x10(r5)
    mtctr r12
    bctrl
    b lbl_fn_80643ADC_00001BAC
lbl_fn_80643ADC_00001AA4:
    addi r3, r31, 0x18
    bl fn_80629E90
    stw r28, 0x4(r31)
    mr r3, r31
    mr r4, r27
    stb r29, 0x34(r31)
    bl fn_80646DE8
    b lbl_fn_80643ADC_00001BAC
    li r0, 0x8
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x1e
    bl fn_80629E20
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643ADC_00001B00
    lis r3, 0x8
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x54c
    bl fn_80629830
lbl_fn_80643ADC_00001B00:
    lwz r5, 0x30(r31)
    li r4, 0x1
    lhz r3, 0x14(r31)
    lwz r12, 0x18(r5)
    mtctr r12
    bctrl
    b lbl_fn_80643ADC_00001BAC
    lwz r5, 0x30(r31)
    mr r4, r27
    lhz r3, 0x14(r31)
    lwz r12, 0x24(r5)
    mtctr r12
    bctrl
    b lbl_fn_80643ADC_00001BAC
    mr r3, r31
    bl fn_80647294
    li r0, 0x7
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x1e
    bl fn_80629E20
    b lbl_fn_80643ADC_00001BAC
    lhz r0, 0x14(r31)
    mr r3, r31
    mr r4, r27
    sth r0, 0x0(r27)
    bl fn_80644078
    b lbl_fn_80643ADC_00001BAC
    mr r3, r31
    mr r4, r27
    bl fn_80647D80
    mr r3, r31
    mr r4, r27
    bl fn_80646AF0
    li r3, 0x5
    li r0, 0x0
    stw r3, 0x4(r31)
    addi r3, r31, 0x18
    li r4, 0x3
    li r5, 0x1e
    stb r0, 0x34(r31)
    bl fn_80629E20
lbl_fn_80643ADC_00001BAC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80643D38(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, lbl_808230E0@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_808230E0@l(r6)
    lis r31, jumptable_807B66C0@ha
    lwz r30, 0x1c(r7)
    mr r25, r3
    cmplwi r0, 0x4
    lwz r28, 0x18(r7)
    lhz r29, 0x14(r3)
    mr r26, r4
    mr r27, r5
    addi r31, r31, jumptable_807B66C0@l
    blt lbl_fn_80643D38_00001C20
    lis r3, 0x8
    mr r5, r26
    addi r3, r3, 0x3
    addi r4, r31, 0x6b0
    bl fn_80629830
lbl_fn_80643D38_00001C20:
    subi r0, r26, 0x3
    cmplwi r0, 0x1b
    bgt lbl_fn_80643D38_00001D90
    lis r3, jumptable_807B6DC8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B6DC8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643D38_00001C68
    lis r3, 0x8
    lhz r5, 0x14(r25)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl fn_80629830
lbl_fn_80643D38_00001C68:
    mr r3, r25
    bl fn_806478E4
    mr r12, r28
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80643D38_00001D90
    mr r3, r25
    bl fn_806478E4
    cmpwi r30, 0x0
    beq lbl_fn_80643D38_00001D90
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643D38_00001CBC
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x6d8
    bl fn_80629830
lbl_fn_80643D38_00001CBC:
    mr r12, r30
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80643D38_00001D90
    lwz r3, 0x10(r25)
    lbz r4, 0x36(r25)
    lhz r5, 0x14(r25)
    lhz r6, 0x16(r25)
    bl fn_80647368
    mr r3, r25
    bl fn_806478E4
    cmpwi r30, 0x0
    beq lbl_fn_80643D38_00001D90
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643D38_00001D1C
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x6d8
    bl fn_80629830
lbl_fn_80643D38_00001D1C:
    mr r12, r30
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80643D38_00001D90
    mr r3, r25
    bl fn_806478E4
    cmpwi r30, 0x0
    beq lbl_fn_80643D38_00001D90
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643D38_00001D68
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x6d8
    bl fn_80629830
lbl_fn_80643D38_00001D68:
    lis r3, 0x1
    mr r12, r30
    subi r0, r3, 0x1112
    mr r3, r29
    clrlwi r4, r0, 16
    mtctr r12
    bctrl
    b lbl_fn_80643D38_00001D90
    mr r3, r27
    bl fn_80626D50
lbl_fn_80643D38_00001D90:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80643F1C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r6, lbl_808230E0@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_808230E0@l(r6)
    mr r27, r3
    lwz r31, 0x18(r7)
    mr r28, r4
    cmplwi r0, 0x4
    lhz r30, 0x14(r3)
    mr r29, r5
    blt lbl_fn_80643F1C_00001DFC
    lis r3, 0x8
    lis r4, lbl_807B6E38@ha
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B6E38@l
    bl fn_80629830
lbl_fn_80643F1C_00001DFC:
    subi r0, r28, 0x3
    cmplwi r0, 0x1b
    bgt lbl_fn_80643F1C_00001EEC
    lis r3, jumptable_807B6E60@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B6E60@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643F1C_00001E48
    lis r3, 0x8
    lis r4, lbl_807B6700@ha
    lhz r5, 0x14(r27)
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B6700@l
    bl fn_80629830
lbl_fn_80643F1C_00001E48:
    mr r3, r27
    bl fn_806478E4
    mr r12, r31
    mr r3, r30
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80643F1C_00001EEC
    lwz r3, 0x10(r27)
    lbz r4, 0x36(r27)
    lhz r5, 0x14(r27)
    lhz r6, 0x16(r27)
    bl fn_80647368
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80643F1C_00001EA4
    lis r3, 0x8
    lis r4, lbl_807B6700@ha
    lhz r5, 0x14(r27)
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B6700@l
    bl fn_80629830
lbl_fn_80643F1C_00001EA4:
    mr r3, r27
    bl fn_806478E4
    mr r12, r31
    mr r3, r30
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80643F1C_00001EEC
    lwz r3, 0x10(r27)
    lbz r4, 0x36(r27)
    lhz r5, 0x14(r27)
    lhz r6, 0x16(r27)
    bl fn_80647368
    mr r3, r27
    bl fn_806478E4
    b lbl_fn_80643F1C_00001EEC
    mr r3, r29
    bl fn_80626D50
lbl_fn_80643F1C_00001EEC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80644078(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    beq lbl_fn_80644078_00001F4C
    lhz r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80644078_00001F4C
    addi r3, r3, 0x70
    bl fn_80627180
    addi r3, r27, 0x70
    bl fn_80627400
    mr r28, r3
    b lbl_fn_80644078_00001F60
lbl_fn_80644078_00001F4C:
    cmpwi r4, 0x0
    bne lbl_fn_80644078_00001F60
    addi r3, r3, 0x70
    bl fn_80627400
    mr r28, r3
lbl_fn_80644078_00001F60:
    lis r31, lbl_8081FAF0@ha
    lis r30, lbl_807B6ED0@ha
    addi r31, r31, lbl_8081FAF0@l
    lis r29, lbl_808230E0@ha
    b lbl_fn_80644078_00002088
lbl_fn_80644078_00001F74:
    lhz r5, 0x4(r28)
    cmplwi r5, 0x9
    bge lbl_fn_80644078_00001FB0
    lbz r0, lbl_808230E0@l(r29)
    cmplwi r0, 0x1
    blt lbl_fn_80644078_00001F98
    addi r4, r30, lbl_807B6ED0@l
    lis r3, 0x8
    bl fn_80629830
lbl_fn_80644078_00001F98:
    mr r3, r28
    bl fn_80626D50
    addi r3, r27, 0x70
    bl fn_80627400
    mr r28, r3
    b lbl_fn_80644078_00002088
lbl_fn_80644078_00001FB0:
    subi r0, r5, 0x8
    sth r0, 0x4(r28)
    clrlwi r0, r0, 16
    add r5, r28, r0
    lhz r4, 0x2(r28)
    addi r3, r5, 0xa
    addi r0, r4, 0x4
    sth r0, 0x2(r28)
    lwz r4, 0x10(r27)
    lhz r0, 0x28(r4)
    ori r0, r0, 0x2000
    stb r0, 0x8(r5)
    lwz r4, 0x10(r27)
    lhz r0, 0x28(r4)
    ori r0, r0, 0x2000
    srawi r0, r0, 8
    stb r0, 0x9(r5)
    lhz r0, 0x7c(r31)
    lhz r4, 0x2(r28)
    cmplw r4, r0
    ble lbl_fn_80644078_0000201C
    stb r0, 0x0(r3)
    lhz r0, 0x7c(r31)
    srawi r0, r0, 8
    stb r0, 0x1(r3)
    addi r3, r3, 0x2
    b lbl_fn_80644078_00002030
lbl_fn_80644078_0000201C:
    stb r4, 0x0(r3)
    lhz r0, 0x2(r28)
    srawi r0, r0, 8
    stb r0, 0x1(r3)
    addi r3, r3, 0x2
lbl_fn_80644078_00002030:
    lhz r6, 0x2(r28)
    mr r5, r28
    li r4, 0x0
    subi r0, r6, 0x4
    stb r0, 0x0(r3)
    lhz r6, 0x2(r28)
    subi r0, r6, 0x4
    srawi r0, r0, 8
    stb r0, 0x1(r3)
    lhz r0, 0x16(r27)
    stb r0, 0x2(r3)
    lhz r0, 0x16(r27)
    srawi r0, r0, 8
    stb r0, 0x3(r3)
    lhz r3, 0x2(r28)
    addi r0, r3, 0x4
    sth r0, 0x2(r28)
    lwz r3, 0x10(r27)
    bl fn_80644A04
    addi r3, r27, 0x70
    bl fn_80627400
    mr r28, r3
lbl_fn_80644078_00002088:
    cmpwi r28, 0x0
    bne lbl_fn_80644078_00001F74
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064421C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8064421C_000021E0
    mr r3, r29
    bl fn_806465AC
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8064421C_0000216C
    mr r3, r29
    bl fn_806463D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8064421C_00002134
    mr r3, r30
    mr r4, r29
    li r5, 0x14
    bl fn_8063CB48
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064421C_000021E0
    lis r4, lbl_807B6EF8@ha
    lis r3, 0x8
    addi r4, r4, lbl_807B6EF8@l
    bl fn_80629810
    b lbl_fn_8064421C_000021E0
lbl_fn_8064421C_00002134:
    bl fn_806466C4
    mr r0, r3
    stb r3, 0x30(r31)
    mr r3, r30
    mr r4, r29
    clrlwi r5, r0, 24
    bl fn_8063CAE8
    li r0, 0x3
    addi r3, r31, 0x10
    stw r0, 0x4(r31)
    li r4, 0x2
    li r5, 0x3c
    bl fn_80629E20
    b lbl_fn_8064421C_000021E0
lbl_fn_8064421C_0000216C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8064421C_00002180
    cmpwi r0, 0x1
    bne lbl_fn_8064421C_0000219C
lbl_fn_8064421C_00002180:
    lbz r5, 0x30(r31)
    mr r3, r30
    mr r4, r29
    bl fn_8063CAE8
    li r0, 0x3
    stw r0, 0x4(r31)
    b lbl_fn_8064421C_000021E0
lbl_fn_8064421C_0000219C:
    cmpwi r0, 0x5
    bne lbl_fn_8064421C_000021B8
    mr r3, r30
    mr r4, r29
    li r5, 0x15
    bl fn_8063CB48
    b lbl_fn_8064421C_000021E0
lbl_fn_8064421C_000021B8:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064421C_000021D8
    lis r4, lbl_807B6F18@ha
    lis r3, 0x8
    addi r4, r4, lbl_807B6F18@l
    bl fn_80629810
lbl_fn_8064421C_000021D8:
    mr r3, r30
    bl fn_80626D50
lbl_fn_8064421C_000021E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80644370(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    li r5, 0x6
    stw r29, 0x24(r1)
    mr r29, r4
    mr r4, r30
    stw r28, 0x20(r1)
    mr r28, r3
    stb r3, 0xe(r1)
    addi r3, r1, 0x8
    bl memcpy
    addi r3, r1, 0x8
    bl fn_806465AC
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80644370_00002288
    mr r3, r29
    bl fn_80638DFC
    clrlwi. r0, r3, 24
    bne lbl_fn_80644370_00002280
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80644370_00002280
    lis r3, 0x8
    lis r4, lbl_807B6F40@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B6F40@l
    bl fn_80629810
lbl_fn_80644370_00002280:
    li r3, 0x0
    b lbl_fn_80644370_00002414
lbl_fn_80644370_00002288:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x3
    beq lbl_fn_80644370_000022D4
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80644370_000022B8
    lis r4, lbl_807B6F68@ha
    mr r6, r28
    lis r3, 0x8
    addi r4, r4, lbl_807B6F68@l
    bl fn_80629850
lbl_fn_80644370_000022B8:
    cmpwi r28, 0x0
    beq lbl_fn_80644370_000022CC
    lhz r3, 0x28(r31)
    mr r4, r28
    bl fn_8064465C
lbl_fn_80644370_000022CC:
    li r3, 0x0
    b lbl_fn_80644370_00002414
lbl_fn_80644370_000022D4:
    sth r29, 0x28(r3)
    lbz r0, 0xe(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80644370_000023B8
    li r0, 0x4
    stw r0, 0x4(r3)
    mr r3, r30
    bl fn_80631F60
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_80644370_0000231C
    lbz r7, 0x30(r31)
    addi r4, r5, 0x22
    mr r6, r29
    addi r3, r1, 0x8
    addi r5, r5, 0x35
    bl fn_8062FE10
    b lbl_fn_80644370_00002334
lbl_fn_80644370_0000231C:
    lbz r7, 0x30(r31)
    mr r6, r29
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_8062FE10
lbl_fn_80644370_00002334:
    li r3, 0x0
    bl fn_806462AC
    addi r3, r31, 0x10
    bl fn_80629E90
    lwz r30, 0x8(r31)
    b lbl_fn_80644370_00002360
lbl_fn_80644370_0000234C:
    mr r3, r30
    addi r5, r1, 0x8
    li r4, 0x0
    bl fn_80642D40
    lwz r30, 0x8(r30)
lbl_fn_80644370_00002360:
    cmpwi r30, 0x0
    bne lbl_fn_80644370_0000234C
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80644370_00002398
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_80647428
    addi r3, r31, 0x10
    li r4, 0x2
    li r5, 0x1e
    bl fn_80629E20
    b lbl_fn_80644370_00002410
lbl_fn_80644370_00002398:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80644370_00002410
    addi r3, r31, 0x10
    li r4, 0x2
    li r5, 0x3c
    bl fn_80629E20
    b lbl_fn_80644370_00002410
lbl_fn_80644370_000023B8:
    cmplwi r0, 0x9
    bne lbl_fn_80644370_000023E4
    bl fn_806481B4
    clrlwi. r0, r3, 24
    beq lbl_fn_80644370_000023E4
    li r0, 0x1
    lis r3, 0x1
    stw r0, 0x4(r31)
    subi r0, r3, 0x1
    sth r0, 0x28(r31)
    b lbl_fn_80644370_00002410
lbl_fn_80644370_000023E4:
    lwz r3, 0x8(r31)
    b lbl_fn_80644370_00002400
lbl_fn_80644370_000023EC:
    lwz r30, 0x8(r3)
    addi r5, r1, 0x8
    li r4, 0x1
    bl fn_80642D40
    mr r3, r30
lbl_fn_80644370_00002400:
    cmpwi r3, 0x0
    bne lbl_fn_80644370_000023EC
    mr r3, r31
    bl fn_806464AC
lbl_fn_80644370_00002410:
    li r3, 0x1
lbl_fn_80644370_00002414:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806445A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r5
    mr r4, r31
    stb r5, 0xe(r1)
    li r5, 0x6
    bl memcpy
    mr r3, r31
    bl fn_806465AC
    cmpwi r3, 0x0
    bne lbl_fn_806445A8_0000249C
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806445A8_000024D0
    lis r3, 0x8
    lis r4, lbl_807B6F9C@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B6F9C@l
    bl fn_80629810
    b lbl_fn_806445A8_000024D0
lbl_fn_806445A8_0000249C:
    cntlzw r0, r30
    lwz r3, 0x8(r3)
    extrwi r0, r0, 1, 26
    neg r31, r0
    b lbl_fn_806445A8_000024C8
lbl_fn_806445A8_000024B0:
    addi r0, r31, 0x8
    lwz r30, 0x8(r3)
    clrlwi r4, r0, 24
    addi r5, r1, 0x8
    bl fn_80642D40
    mr r3, r30
lbl_fn_806445A8_000024C8:
    cmpwi r3, 0x0
    bne lbl_fn_806445A8_000024B0
lbl_fn_806445A8_000024D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064465C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x1
    stw r29, 0x14(r1)
    stb r4, 0x8(r1)
    bl fn_80646634
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8064465C_00002520
    li r30, 0x0
    b lbl_fn_8064465C_00002570
lbl_fn_8064465C_00002520:
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lbz r0, 0x27bf(r4)
    cmplwi r0, 0xe
    beq lbl_fn_8064465C_0000253C
    lbz r0, 0x8(r1)
    stb r0, 0x27bf(r4)
lbl_fn_8064465C_0000253C:
    lwz r3, 0x8(r3)
    b lbl_fn_8064465C_00002558
lbl_fn_8064465C_00002544:
    lwz r29, 0x8(r3)
    addi r5, r1, 0x8
    li r4, 0x3
    bl fn_80642D40
    mr r3, r29
lbl_fn_8064465C_00002558:
    cmpwi r3, 0x0
    bne lbl_fn_8064465C_00002544
    addi r3, r31, 0x2a
    bl fn_80636D40
    mr r3, r31
    bl fn_806464AC
lbl_fn_8064465C_00002570:
    li r3, 0x1
    bl fn_80648124
    cmpwi r3, 0x0
    beq lbl_fn_8064465C_00002584
    bl fn_80647F3C
lbl_fn_8064465C_00002584:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80644718(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80646634
    cmpwi r3, 0x0
    bne lbl_fn_80644718_000025C8
    li r3, 0x0
    b lbl_fn_80644718_00002600
lbl_fn_80644718_000025C8:
    lwz r31, 0x8(r3)
    b lbl_fn_80644718_000025F4
lbl_fn_80644718_000025D0:
    lwz r3, 0x30(r31)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80644718_000025F0
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    bl fn_80642D40
lbl_fn_80644718_000025F0:
    lwz r31, 0x8(r31)
lbl_fn_80644718_000025F4:
    cmpwi r31, 0x0
    bne lbl_fn_80644718_000025D0
    li r3, 0x1
lbl_fn_80644718_00002600:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80644788(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80644788_00002650
    cmpwi r0, 0x3
    beq lbl_fn_80644788_00002650
    cmpwi r0, 0x1
    beq lbl_fn_80644788_00002650
    cmpwi r0, 0x5
    bne lbl_fn_80644788_0000267C
lbl_fn_80644788_00002650:
    lwz r3, 0x8(r3)
    b lbl_fn_80644788_0000266C
lbl_fn_80644788_00002658:
    lwz r31, 0x8(r3)
    li r4, 0x3
    li r5, 0x0
    bl fn_80642D40
    mr r3, r31
lbl_fn_80644788_0000266C:
    cmpwi r3, 0x0
    bne lbl_fn_80644788_00002658
    mr r3, r30
    bl fn_806464AC
lbl_fn_80644788_0000267C:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x4
    bne lbl_fn_80644788_00002770
    lwz r12, 0x54(r30)
    cmpwi r12, 0x0
    beq lbl_fn_80644788_000026F0
    li r0, 0x0
    li r3, 0x2
    stw r0, 0x54(r30)
    mtctr r12
    bctrl
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80644788_000026CC
    lis r3, 0x8
    lis r4, lbl_807B6FC4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B6FC4@l
    bl fn_80629810
lbl_fn_80644788_000026CC:
    lwz r3, 0x8(r30)
    b lbl_fn_80644788_000026E8
lbl_fn_80644788_000026D4:
    lwz r31, 0x8(r3)
    li r4, 0x3
    li r5, 0x0
    bl fn_80642D40
    mr r3, r31
lbl_fn_80644788_000026E8:
    cmpwi r3, 0x0
    bne lbl_fn_80644788_000026D4
lbl_fn_80644788_000026F0:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80644788_00002760
    lhz r3, 0x28(r30)
    li r4, 0x13
    bl fn_806392BC
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_80644788_00002724
    li r0, 0x5
    li r3, 0x1e
    stw r0, 0x4(r30)
    b lbl_fn_80644788_00002744
lbl_fn_80644788_00002724:
    cmpwi r0, 0x0
    bne lbl_fn_80644788_00002740
    li r0, 0x5
    lis r3, 0x1
    stw r0, 0x4(r30)
    subi r3, r3, 0x1
    b lbl_fn_80644788_00002744
lbl_fn_80644788_00002740:
    li r3, 0x1
lbl_fn_80644788_00002744:
    clrlwi r5, r3, 16
    cmplwi r5, 0xffff
    beq lbl_fn_80644788_00002770
    addi r3, r30, 0x10
    li r4, 0x2
    bl fn_80629E20
    b lbl_fn_80644788_00002770
lbl_fn_80644788_00002760:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_80644A04
lbl_fn_80644788_00002770:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806448FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8081FAF0@ha
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8081FAF0@l
    mr r0, r4
    lhz r7, 0x2(r4)
    lhz r5, 0x7e(r6)
    cmplw r7, r5
    bgt lbl_fn_806448FC_000027EC
    lhz r4, 0x36(r3)
    lis r6, lbl_808230E0@ha
    lhz r5, 0x38(r3)
    addi r6, r6, lbl_808230E0@l
    subi r7, r4, 0x1
    li r4, 0x2100
    addi r5, r5, 0x1
    sth r7, 0x36(r3)
    sth r5, 0x38(r3)
    mr r3, r0
    lhz r5, 0x4(r6)
    subi r0, r5, 0x1
    sth r0, 0x4(r6)
    bl fn_80629650
    b lbl_fn_806448FC_0000287C
lbl_fn_806448FC_000027EC:
    lhz r8, 0x7c(r6)
    lis r5, lbl_808230E0@ha
    addi r5, r5, lbl_808230E0@l
    add r6, r7, r8
    lhz r7, 0x4(r5)
    subi r5, r6, 0x5
    divw r5, r5, r8
    clrlwi r8, r5, 16
    cmplw r8, r7
    ble lbl_fn_806448FC_00002824
    sth r7, 0x6(r4)
    li r5, 0x1
    mr r8, r7
    stb r5, 0x40(r3)
lbl_fn_806448FC_00002824:
    lhz r6, 0x36(r3)
    clrlwi r5, r8, 16
    cmplw r5, r6
    ble lbl_fn_806448FC_00002844
    sth r6, 0x6(r4)
    li r4, 0x1
    mr r8, r6
    stb r4, 0x40(r3)
lbl_fn_806448FC_00002844:
    lis r6, lbl_808230E0@ha
    li r4, 0x2100
    addi r6, r6, lbl_808230E0@l
    lhz r5, 0x4(r6)
    subf r5, r8, r5
    sth r5, 0x4(r6)
    lhz r6, 0x36(r3)
    lhz r5, 0x38(r3)
    subf r6, r8, r6
    add r5, r5, r8
    sth r6, 0x36(r3)
    sth r5, 0x38(r3)
    mr r3, r0
    bl fn_80629650
lbl_fn_806448FC_0000287C:
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80644A04(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r5, 0x0
    lis r31, lbl_807B6EF8@ha
    mr r29, r3
    mr r30, r5
    addi r31, r31, lbl_807B6EF8@l
    beq lbl_fn_80644A04_000029AC
    lhz r4, 0x4c(r3)
    lhz r0, 0x3a(r3)
    cmplw r4, r0
    blt lbl_fn_80644A04_0000295C
    lbz r0, 0x41(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80644A04_0000295C
    lwz r26, 0x8(r3)
    lis r28, 0x8
    lis r27, lbl_808230E0@ha
    b lbl_fn_80644A04_0000294C
lbl_fn_80644A04_000028E8:
    lbz r0, lbl_808230E0@l(r27)
    cmplwi r0, 0x2
    blt lbl_fn_80644A04_00002904
    lhz r5, 0x14(r26)
    addi r3, r28, 0x1
    addi r4, r31, 0xe4
    bl fn_80629830
lbl_fn_80644A04_00002904:
    lwz r3, 0x30(r26)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80644A04_00002948
    lbz r0, lbl_808230E0@l(r27)
    cmplwi r0, 0x3
    blt lbl_fn_80644A04_00002930
    lhz r5, 0x14(r26)
    addi r3, r28, 0x2
    addi r4, r31, 0x110
    bl fn_80629830
lbl_fn_80644A04_00002930:
    lwz r5, 0x30(r26)
    li r4, 0x1
    lhz r3, 0x14(r26)
    lwz r12, 0x28(r5)
    mtctr r12
    bctrl
lbl_fn_80644A04_00002948:
    lwz r26, 0x8(r26)
lbl_fn_80644A04_0000294C:
    cmpwi r26, 0x0
    bne lbl_fn_80644A04_000028E8
    li r0, 0x1
    stb r0, 0x41(r29)
lbl_fn_80644A04_0000295C:
    lhz r3, 0x4c(r29)
    lhz r0, 0x3e(r29)
    cmplw r3, r0
    bgt lbl_fn_80644A04_00002984
    li r0, 0x0
    mr r4, r30
    sth r0, 0x6(r30)
    addi r3, r29, 0x44
    bl fn_80627180
    b lbl_fn_80644A04_000029AC
lbl_fn_80644A04_00002984:
    mr r3, r30
    bl fn_80626D50
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80644A04_000029AC
    lis r3, 0x8
    addi r4, r31, 0x150
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_80644A04_000029AC:
    lbz r0, 0x40(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80644A04_00002B44
    addi r3, r29, 0x2a
    addi r4, r1, 0x8
    bl fn_806359BC
    clrlwi. r0, r3, 24
    bne lbl_fn_80644A04_00002A10
    lbz r0, 0x8(r1)
    cmplwi r0, 0x3
    bne lbl_fn_80644A04_00002A10
    lhz r0, 0x4c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80644A04_00002A10
    li r0, 0x0
    addi r4, r29, 0x2a
    stb r0, 0x14(r1)
    addi r5, r1, 0xc
    li r3, 0x80
    bl fn_806357EC
    addi r3, r29, 0x10
    li r4, 0x2
    li r5, 0x1
    bl fn_80629E20
    b lbl_fn_80644A04_00002B44
lbl_fn_80644A04_00002A10:
    lis r28, lbl_808230E0@ha
    addi r28, r28, lbl_808230E0@l
    b lbl_fn_80644A04_00002A68
lbl_fn_80644A04_00002A1C:
    lwz r3, 0x44(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80644A04_00002A80
    lhz r0, 0x6(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80644A04_00002A80
    lbz r0, 0x40(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80644A04_00002B44
    addi r3, r29, 0x44
    bl fn_80627400
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80644A04_00002A80
    mr r3, r29
    mr r4, r30
    bl fn_806448FC
    clrlwi. r0, r3, 24
    beq lbl_fn_80644A04_00002A80
lbl_fn_80644A04_00002A68:
    lhz r0, 0x4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80644A04_00002A80
    lhz r0, 0x36(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80644A04_00002A1C
lbl_fn_80644A04_00002A80:
    lbz r0, 0x40(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80644A04_00002B44
    lhz r0, 0x4c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80644A04_00002AB4
    lhz r0, 0x36(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80644A04_00002AB4
    addi r3, r29, 0x10
    li r4, 0x2
    li r5, 0x2
    bl fn_80629E20
lbl_fn_80644A04_00002AB4:
    lbz r0, 0x41(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80644A04_00002B44
    lhz r3, 0x4c(r29)
    lhz r0, 0x3c(r29)
    cmplw r3, r0
    bgt lbl_fn_80644A04_00002B44
    li r0, 0x0
    lwz r27, 0x8(r29)
    stb r0, 0x41(r29)
    lis r30, 0x8
    lis r28, lbl_808230E0@ha
    b lbl_fn_80644A04_00002B3C
lbl_fn_80644A04_00002AE8:
    lwz r3, 0x30(r27)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80644A04_00002B38
    lbz r0, lbl_808230E0@l(r28)
    cmplwi r0, 0x3
    blt lbl_fn_80644A04_00002B14
    lhz r5, 0x14(r27)
    addi r3, r30, 0x2
    addi r4, r31, 0x170
    bl fn_80629830
lbl_fn_80644A04_00002B14:
    lwz r5, 0x30(r27)
    li r4, 0x0
    lhz r3, 0x14(r27)
    lwz r12, 0x28(r5)
    mtctr r12
    bctrl
    lbz r0, 0x41(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80644A04_00002B44
lbl_fn_80644A04_00002B38:
    lwz r27, 0x8(r27)
lbl_fn_80644A04_00002B3C:
    cmpwi r27, 0x0
    bne lbl_fn_80644A04_00002AE8
lbl_fn_80644A04_00002B44:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80644CD0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r3, lbl_808230E0@ha
    li r26, 0x0
    addi r3, r3, lbl_808230E0@l
    lhz r4, 0x7b8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80644CD0_00002CDC
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80644CD0_00002BA4
    lbz r0, 0x62(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80644CD0_00002BA4
    li r26, 0x1
lbl_fn_80644CD0_00002BA4:
    lbz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80644CD0_00002BC0
    lbz r0, 0xbe(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80644CD0_00002BC0
    addi r26, r26, 0x1
lbl_fn_80644CD0_00002BC0:
    lbz r0, 0xc0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80644CD0_00002BDC
    lbz r0, 0x11a(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80644CD0_00002BDC
    addi r26, r26, 0x1
lbl_fn_80644CD0_00002BDC:
    lbz r0, 0x11c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80644CD0_00002BF8
    lbz r0, 0x176(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80644CD0_00002BF8
    addi r26, r26, 0x1
lbl_fn_80644CD0_00002BF8:
    lis r30, lbl_808230E0@ha
    li r29, 0x0
    addi r3, r30, lbl_808230E0@l
    li r31, 0x3
    lhz r0, 0x2(r3)
    addi r28, r3, 0x8
    lis r24, 0x8
    lis r25, lbl_807B70A8@ha
    divw r3, r0, r4
    lis r23, 0x51ec
    addi r0, r3, 0x1
    clrlwi r27, r0, 16
lbl_fn_80644CD0_00002C28:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80644CD0_00002CCC
    cmpwi r26, 0x0
    beq lbl_fn_80644CD0_00002C48
    lbz r0, 0x5a(r28)
    cmplwi r0, 0x1
    bne lbl_fn_80644CD0_00002C54
lbl_fn_80644CD0_00002C48:
    sth r27, 0x34(r28)
    sth r27, 0x36(r28)
    b lbl_fn_80644CD0_00002C5C
lbl_fn_80644CD0_00002C54:
    sth r31, 0x34(r28)
    sth r31, 0x36(r28)
lbl_fn_80644CD0_00002C5C:
    lhz r0, 0x34(r28)
    subi r3, r23, 0x7ae1
    mulli r0, r0, 0x78
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    clrlwi r4, r0, 16
    sth r0, 0x3a(r28)
    subfc r0, r4, r31
    subfe r3, r0, r0
    subi r0, r4, 0x3
    and r3, r0, r3
    sth r3, 0x3c(r28)
    addi r0, r4, 0x2
    sth r0, 0x3e(r28)
    lbz r0, lbl_808230E0@l(r30)
    cmplwi r0, 0x5
    blt lbl_fn_80644CD0_00002CCC
    lbz r6, 0x5a(r28)
    addi r3, r24, 0x4
    lhz r7, 0x36(r28)
    addi r4, r25, lbl_807B70A8@l
    lhz r8, 0x3a(r28)
    clrlwi r5, r29, 16
    lhz r9, 0x3c(r28)
    lhz r10, 0x3e(r28)
    bl fn_806298D0
lbl_fn_80644CD0_00002CCC:
    addi r29, r29, 0x1
    addi r28, r28, 0x5c
    cmplwi r29, 0x4
    blt lbl_fn_80644CD0_00002C28
lbl_fn_80644CD0_00002CDC:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80644E68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r28, lbl_808230E0@ha
    lbz r31, 0x0(r3)
    addi r29, r3, 0x1
    li r30, 0x0
    addi r28, r28, lbl_808230E0@l
    li r27, 0x0
    b lbl_fn_80644E68_00002DB4
lbl_fn_80644E68_00002D24:
    lbz r3, 0x1(r29)
    lbz r0, 0x3(r29)
    slwi r4, r3, 8
    lbz r5, 0x0(r29)
    lbz r3, 0x2(r29)
    slwi r0, r0, 8
    add r4, r5, r4
    addi r29, r29, 0x4
    add r0, r3, r0
    clrlwi r3, r4, 16
    clrlwi r26, r0, 16
    bl fn_80646634
    cmpwi r3, 0x0
    beq lbl_fn_80644E68_00002DB0
    lhz r0, 0x36(r3)
    add r0, r0, r26
    sth r0, 0x36(r3)
    clrlwi r0, r0, 16
    lhz r4, 0x34(r3)
    cmplw r0, r4
    ble lbl_fn_80644E68_00002D7C
    sth r4, 0x36(r3)
lbl_fn_80644E68_00002D7C:
    lhz r0, 0x38(r3)
    cmplw r0, r26
    ble lbl_fn_80644E68_00002D94
    subf r0, r26, r0
    sth r0, 0x38(r3)
    b lbl_fn_80644E68_00002D98
lbl_fn_80644E68_00002D94:
    sth r27, 0x38(r3)
lbl_fn_80644E68_00002D98:
    lhz r0, 0x4(r28)
    li r4, 0x0
    li r5, 0x0
    add r0, r0, r26
    sth r0, 0x4(r28)
    bl fn_80644A04
lbl_fn_80644E68_00002DB0:
    addi r30, r30, 0x1
lbl_fn_80644E68_00002DB4:
    clrlwi r0, r30, 24
    cmplw r0, r31
    blt lbl_fn_80644E68_00002D24
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80644F4C(void)
{
    nofralloc
    lis r4, lbl_808230E0@ha
    addi r4, r4, lbl_808230E0@l
    sth r3, 0x2(r4)
    sth r3, 0x4(r4)
    blr
}

asm void fn_80644F60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lhz r0, 0x4(r3)
    li r6, 0x0
    sth r6, 0x6(r3)
    lis r24, lbl_808230E0@ha
    add r7, r3, r0
    mr r28, r3
    lbz r3, 0x9(r7)
    addi r25, r24, lbl_808230E0@l
    lbz r0, 0xb(r7)
    slwi r4, r3, 8
    lbz r5, 0x8(r7)
    lbz r3, 0xa(r7)
    slwi r0, r0, 8
    add r4, r5, r4
    add r0, r3, r0
    stw r6, 0x7bc(r25)
    clrlwi r31, r0, 16
    extrwi r27, r4, 2, 18
    clrlwi r3, r4, 20
    bl fn_80646634
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80644F60_00002E64
    mr r3, r28
    b lbl_fn_80644F60_00002FA4
lbl_fn_80644F60_00002E64:
    cmplwi r27, 0x2
    bne lbl_fn_80644F60_00002EB8
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80644F60_00002EA0
    lbz r0, lbl_808230E0@l(r24)
    cmplwi r0, 0x2
    blt lbl_fn_80644F60_00002E98
    lis r3, 0x8
    lis r4, lbl_807B70F0@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B70F0@l
    bl fn_80629810
lbl_fn_80644F60_00002E98:
    lwz r3, 0x50(r26)
    bl fn_80626D50
lbl_fn_80644F60_00002EA0:
    lis r3, lbl_808230E0@ha
    stw r28, 0x50(r26)
    addi r3, r3, lbl_808230E0@l
    mr r30, r28
    stw r26, 0x7bc(r3)
    b lbl_fn_80644F60_00002F90
lbl_fn_80644F60_00002EB8:
    lwz r30, 0x50(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80644F60_00002F8C
    lhz r0, 0x4(r30)
    add r27, r30, r0
    lbz r0, 0xb(r27)
    lbz r4, 0xa(r27)
    slwi r0, r0, 8
    add r0, r4, r0
    clrlwi r29, r0, 16
    add r0, r29, r31
    cmpwi r0, 0x69f
    bgt lbl_fn_80644F60_00002F54
    stw r3, 0x7bc(r25)
    lhz r3, 0x2(r28)
    cmplwi r3, 0x4
    ble lbl_fn_80644F60_00002F38
    lhz r4, 0x4(r30)
    subi r5, r3, 0x4
    lhz r0, 0x4(r28)
    add r6, r30, r4
    lhz r3, 0x2(r30)
    add r4, r28, r0
    add r3, r6, r3
    addi r3, r3, 0x8
    addi r4, r4, 0xc
    bl memcpy
    lhz r3, 0x2(r30)
    lhz r0, 0x2(r28)
    add r3, r0, r3
    subi r0, r3, 0x4
    sth r0, 0x2(r30)
lbl_fn_80644F60_00002F38:
    mr r3, r28
    bl fn_80626D50
    add r29, r29, r31
    stb r29, 0xa(r27)
    extrwi r0, r29, 8, 16
    stb r0, 0xb(r27)
    b lbl_fn_80644F60_00002F90
lbl_fn_80644F60_00002F54:
    lbz r0, lbl_808230E0@l(r24)
    cmplwi r0, 0x2
    blt lbl_fn_80644F60_00002F74
    lis r3, 0x8
    lis r4, lbl_807B7110@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7110@l
    bl fn_80629810
lbl_fn_80644F60_00002F74:
    lwz r3, 0x50(r26)
    bl fn_80626D50
    li r0, 0x0
    li r30, 0x0
    stw r0, 0x50(r26)
    b lbl_fn_80644F60_00002F90
lbl_fn_80644F60_00002F8C:
    li r30, 0x0
lbl_fn_80644F60_00002F90:
    cmpwi r30, 0x0
    bne lbl_fn_80644F60_00002FA0
    mr r3, r28
    bl fn_80626D50
lbl_fn_80644F60_00002FA0:
    mr r3, r30
lbl_fn_80644F60_00002FA4:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80645130(void)
{
    nofralloc
    lis r3, lbl_808230E0@ha
    addi r3, r3, lbl_808230E0@l
    lwz r6, 0x7bc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80645130_00002FDC
    lwz r4, 0x50(r6)
    cmpwi r4, 0x0
    bne lbl_fn_80645130_00002FE4
lbl_fn_80645130_00002FDC:
    li r3, 0x1
    blr
lbl_fn_80645130_00002FE4:
    lhz r0, 0x4(r4)
    lhz r3, 0x2(r4)
    add r5, r4, r0
    lbz r4, 0xd(r5)
    subi r0, r3, 0x8
    lbz r5, 0xc(r5)
    slwi r3, r4, 8
    add r3, r5, r3
    clrlwi r3, r3, 16
    cmpw r3, r0
    ble lbl_fn_80645130_00003018
    li r3, 0x0
    blr
lbl_fn_80645130_00003018:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x50(r6)
    blr
}

asm void fn_8064519C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_806465AC
    cmpwi r3, 0x0
    beq lbl_fn_8064519C_00003050
    stb r30, 0x30(r3)
lbl_fn_8064519C_00003050:
    lis r3, lbl_808230E0@ha
    li r30, 0x0
    addi r3, r3, lbl_808230E0@l
    addi r31, r3, 0x8
lbl_fn_8064519C_00003060:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064519C_00003080
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8064519C_00003080
    mr r3, r31
    bl fn_80648054
lbl_fn_8064519C_00003080:
    addi r30, r30, 0x1
    addi r31, r31, 0x5c
    cmpwi r30, 0x4
    blt lbl_fn_8064519C_00003060
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064521C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_808230E0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_808230E0@l
    stw r31, 0xc(r1)
    addi r31, r3, 0x8
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_8064521C_000030CC:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064521C_000030EC
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8064521C_000030EC
    mr r3, r31
    bl fn_80648054
lbl_fn_8064521C_000030EC:
    addi r30, r30, 0x1
    addi r31, r31, 0x5c
    cmpwi r30, 0x4
    blt lbl_fn_8064521C_000030CC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80645288(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r0, 0x4(r3)
    add r3, r3, r0
    lbz r0, 0x9(r3)
    lbz r3, 0x8(r3)
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r31, r0, 20
    mr r3, r31
    bl fn_80646634
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80645288_00003194
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80645288_00003188
    lis r3, 0x8
    lis r4, lbl_807B7130@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7130@l
    bl fn_80629830
lbl_fn_80645288_00003188:
    mr r3, r29
    bl fn_80626D50
    b lbl_fn_80645288_000031D4
lbl_fn_80645288_00003194:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80645288_000031CC
    li r31, 0x0
    mr r4, r29
    sth r31, 0x6(r29)
    addi r3, r3, 0x44
    bl fn_806272C0
    stb r31, 0x40(r30)
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_80644A04
    b lbl_fn_80645288_000031D4
lbl_fn_80645288_000031CC:
    mr r3, r29
    bl fn_80626D50
lbl_fn_80645288_000031D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80645364(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806465AC
    cmpwi r3, 0x0
    beq lbl_fn_80645364_00003224
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80645364_00003224
    li r4, 0x2
    li r5, 0x78
    addi r3, r3, 0x10
    bl fn_80629E20
lbl_fn_80645364_00003224:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806453A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x7e8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808230E0@ha
    addi r3, r31, lbl_808230E0@l
    bl memset
    li r4, 0x1
    li r0, 0x2
    mulli r3, r4, 0x7c
    addi r11, r31, lbl_808230E0@l
    li r7, 0x3
    li r4, 0x4
    add r8, r11, r3
    addi r5, r11, 0x178
    mulli r6, r7, 0x7c
    li r7, 0x6
    addi r10, r8, 0x178
    stw r10, 0x180(r11)
    mulli r9, r0, 0x7c
    li r0, 0x5
    add r6, r11, r6
    add r8, r11, r9
    addi r6, r6, 0x178
    mulli r3, r4, 0x7c
    li r4, 0x7
    addi r8, r8, 0x178
    stw r8, 0x1fc(r11)
    add r8, r11, r3
    mulli r9, r0, 0x7c
    stw r6, 0x278(r11)
    addi r10, r8, 0x178
    stw r10, 0x2f4(r11)
    li r0, 0x8
    mulli r6, r7, 0x7c
    add r8, r11, r9
    li r7, 0x9
    addi r8, r8, 0x178
    mulli r3, r4, 0x7c
    add r6, r11, r6
    stw r8, 0x370(r11)
    addi r4, r11, 0x5d4
    addi r6, r6, 0x178
    add r8, r11, r3
    mulli r9, r0, 0x7c
    stw r6, 0x3ec(r11)
    addi r10, r8, 0x178
    stw r10, 0x468(r11)
    li r3, 0x0
    mulli r6, r7, 0x7c
    add r8, r11, r9
    li r0, 0x2
    addi r8, r8, 0x178
    add r6, r11, r6
    stw r8, 0x4e4(r11)
    addi r6, r6, 0x178
    stw r6, 0x560(r11)
    stw r5, 0x7b0(r11)
    stw r4, 0x7b4(r11)
    stb r3, 0x1(r11)
    sth r0, 0x7ba(r11)
    stb r3, lbl_808230E0@l(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806454BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lhz r0, 0x4(r3)
    lis r30, lbl_807B7168@ha
    mr r27, r3
    li r28, 0x0
    add r31, r3, r0
    addi r30, r30, lbl_807B7168@l
    lbz r0, 0x9(r31)
    lbz r3, 0x8(r31)
    slwi r0, r0, 8
    add r0, r3, r0
    extrwi r5, r0, 2, 18
    cmplwi r5, 0x2
    clrlwi r26, r0, 20
    beq lbl_fn_806454BC_000033C0
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806454BC_000033B4
    lis r3, 0x8
    addi r4, r30, 0x0
    addi r3, r3, 0x1
    bl fn_80629830
lbl_fn_806454BC_000033B4:
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_806454BC_00003660
lbl_fn_806454BC_000033C0:
    mr r3, r26
    bl fn_80646634
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806454BC_000034A0
    lbz r3, 0xf(r31)
    lhz r0, 0x6(r27)
    lbz r4, 0xe(r31)
    slwi r3, r3, 8
    cmpwi r0, 0x0
    lbz r28, 0x10(r31)
    add r0, r4, r3
    clrlwi r24, r0, 16
    bne lbl_fn_806454BC_00003494
    cmplwi r24, 0x1
    bne lbl_fn_806454BC_00003494
    cmplwi r28, 0xa
    beq lbl_fn_806454BC_00003410
    cmplwi r28, 0x2
    bne lbl_fn_806454BC_00003494
lbl_fn_806454BC_00003410:
    mr r3, r26
    bl fn_80638DFC
    clrlwi. r0, r3, 24
    bne lbl_fn_806454BC_00003494
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806454BC_00003458
    addi r3, r3, lbl_808230E0@l
    lis r4, 0x8
    lhz r9, 0x7c8(r3)
    addi r3, r4, 0x1
    lhz r6, 0x6(r27)
    mr r5, r26
    mr r7, r24
    mr r8, r28
    addi r4, r30, 0x24
    bl fn_806298B0
lbl_fn_806454BC_00003458:
    li r0, 0x2
    lis r28, lbl_808230E0@ha
    addi r28, r28, lbl_808230E0@l
    sth r0, 0x6(r27)
    mr r4, r27
    addi r3, r28, 0x7c0
    bl fn_80627180
    lhz r0, 0x7c8(r28)
    cmplwi r0, 0x1
    bne lbl_fn_806454BC_00003660
    addi r3, r28, 0x7cc
    li r4, 0x4
    li r5, 0x1
    bl fn_80629E20
    b lbl_fn_806454BC_00003660
lbl_fn_806454BC_00003494:
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_806454BC_00003660
lbl_fn_806454BC_000034A0:
    lhz r4, 0x4(r27)
    lbz r5, 0xb(r31)
    addi r0, r4, 0x4
    lbz r6, 0xa(r31)
    slwi r4, r5, 8
    sth r0, 0x4(r27)
    add r0, r6, r4
    clrlwi r25, r0, 16
    lbz r0, 0xf(r31)
    lbz r4, 0xe(r31)
    slwi r0, r0, 8
    lbz r5, 0xd(r31)
    add r0, r4, r0
    lbz r4, 0xc(r31)
    clrlwi r26, r0, 16
    slwi r0, r5, 8
    add r0, r4, r0
    cmplwi r26, 0x2
    clrlwi r24, r0, 16
    ble lbl_fn_806454BC_00003534
    mr r4, r26
    bl fn_80647A88
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_806454BC_00003534
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806454BC_00003528
    lis r3, 0x8
    mr r5, r26
    addi r3, r3, 0x1
    addi r4, r30, 0x78
    bl fn_80629830
lbl_fn_806454BC_00003528:
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_806454BC_00003660
lbl_fn_806454BC_00003534:
    cmplwi r25, 0x4
    blt lbl_fn_806454BC_00003554
    lhz r3, 0x4(r27)
    subi r4, r25, 0x4
    sth r4, 0x2(r27)
    addi r0, r3, 0x4
    sth r0, 0x4(r27)
    b lbl_fn_806454BC_00003580
lbl_fn_806454BC_00003554:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806454BC_00003574
    lis r3, 0x8
    addi r4, r30, 0x90
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_806454BC_00003574:
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_806454BC_00003660
lbl_fn_806454BC_00003580:
    clrlwi r6, r4, 16
    cmplw r24, r6
    beq lbl_fn_806454BC_000035BC
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806454BC_000035B0
    lis r3, 0x8
    mr r5, r24
    addi r4, r30, 0xb4
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_806454BC_000035B0:
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_806454BC_00003660
lbl_fn_806454BC_000035BC:
    cmplwi r26, 0x1
    bne lbl_fn_806454BC_000035E0
    mr r3, r29
    mr r5, r24
    addi r4, r31, 0x10
    bl fn_806457EC
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_806454BC_00003660
lbl_fn_806454BC_000035E0:
    cmplwi r26, 0x2
    bne lbl_fn_806454BC_0000363C
    clrlwi r3, r0, 16
    lbz r4, 0x11(r31)
    lbz r5, 0x10(r31)
    addi r3, r3, 0x2
    subi r0, r6, 0x2
    slwi r4, r4, 8
    sth r3, 0x4(r27)
    lis r3, lbl_808230E0@ha
    add r4, r5, r4
    sth r0, 0x2(r27)
    clrlwi r5, r4, 16
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x5
    blt lbl_fn_806454BC_00003630
    lis r3, 0x8
    addi r4, r30, 0xe0
    addi r3, r3, 0x4
    bl fn_80629830
lbl_fn_806454BC_00003630:
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_806454BC_00003660
lbl_fn_806454BC_0000363C:
    cmpwi r28, 0x0
    bne lbl_fn_806454BC_00003650
    mr r3, r27
    bl fn_80626D50
    b lbl_fn_806454BC_00003660
lbl_fn_806454BC_00003650:
    mr r3, r28
    mr r5, r27
    li r4, 0x13
    bl fn_80642D40
lbl_fn_806454BC_00003660:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806457EC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    add r22, r4, r5
    lis r23, lbl_807B7168@ha
    lis r30, lbl_8081FAF0@ha
    mr r21, r4
    li r31, 0x0
    mr r15, r3
    mr r14, r5
    addi r23, r23, lbl_807B7168@l
    addi r30, r30, lbl_8081FAF0@l
    subi r24, r22, 0x4
    li r28, 0x1
    lis r29, 0x8
    lis r27, lbl_808230E0@ha
    lis r26, jumptable_807B740C@ha
lbl_fn_806457EC_000036C4:
    cmplw r21, r24
    mr r16, r21
    bgt lbl_fn_806457EC_000040D0
    lbz r0, 0x3(r21)
    lbz r3, 0x2(r21)
    slwi r0, r0, 8
    lbz r7, 0x0(r21)
    add r0, r3, r0
    lbz r25, 0x1(r21)
    clrlwi r17, r0, 16
    add r3, r21, r17
    addi r21, r3, 0x4
    cmplw r21, r22
    ble lbl_fn_806457EC_00003728
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806457EC_000040D0
    lis r3, 0x8
    mr r5, r14
    mr r6, r17
    addi r4, r23, 0x100
    addi r3, r3, 0x1
    bl fn_80629870
    b lbl_fn_806457EC_000040D0
lbl_fn_806457EC_00003728:
    cmplwi r7, 0xb
    bgt lbl_fn_806457EC_00004094
    addi r3, r26, jumptable_807B740C@l
    slwi r0, r7, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0x5(r16)
    lbz r3, 0x4(r16)
    addi r16, r16, 0x6
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r17, r0, 16
    cmplwi r17, 0x1
    bne lbl_fn_806457EC_00003798
    lbz r3, 0x1(r16)
    lbz r0, lbl_808230E0@l(r27)
    lbz r4, 0x0(r16)
    slwi r3, r3, 8
    cmplwi r0, 0x2
    addi r16, r16, 0x2
    add r0, r4, r3
    clrlwi r6, r0, 16
    blt lbl_fn_806457EC_00003798
    lhz r5, 0x28(r15)
    addi r3, r29, 0x1
    addi r4, r23, 0x134
    bl fn_80629850
lbl_fn_806457EC_00003798:
    cmplwi r17, 0x2
    bne lbl_fn_806457EC_000036C4
    lbz r4, 0x1(r16)
    lbz r3, 0x3(r16)
    lbz r0, lbl_808230E0@l(r27)
    slwi r5, r4, 8
    lbz r6, 0x0(r16)
    slwi r3, r3, 8
    lbz r4, 0x2(r16)
    cmplwi r0, 0x2
    add r5, r6, r5
    add r0, r4, r3
    clrlwi r17, r5, 16
    clrlwi r16, r0, 16
    blt lbl_fn_806457EC_000037E8
    mr r5, r16
    mr r6, r17
    addi r3, r29, 0x1
    addi r4, r23, 0x158
    bl fn_80629850
lbl_fn_806457EC_000037E8:
    mr r3, r15
    mr r4, r16
    bl fn_80647A88
    cmpwi r3, 0x0
    beq lbl_fn_806457EC_000036C4
    lhz r0, 0x16(r3)
    cmplw r0, r17
    bne lbl_fn_806457EC_000036C4
    li r4, 0x3
    li r5, 0x0
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
    lbz r0, 0x5(r16)
    lbz r3, 0x4(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x10(r1)
    clrlwi r3, r0, 16
    lbz r0, 0x7(r16)
    lbz r4, 0x6(r16)
    slwi r0, r0, 8
    add r0, r4, r0
    clrlwi r17, r0, 16
    bl fn_80647B40
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_806457EC_00003888
    lbz r0, lbl_808230E0@l(r27)
    cmplwi r0, 0x2
    blt lbl_fn_806457EC_00003870
    lhz r5, 0x10(r1)
    addi r3, r29, 0x1
    addi r4, r23, 0x188
    bl fn_80629830
lbl_fn_806457EC_00003870:
    mr r3, r15
    mr r4, r17
    mr r5, r25
    li r6, 0x2
    bl fn_80646A30
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00003888:
    mr r3, r15
    bl fn_806477D8
    cmpwi r3, 0x0
    bne lbl_fn_806457EC_000038C8
    lbz r0, lbl_808230E0@l(r27)
    cmplwi r0, 0x1
    blt lbl_fn_806457EC_000038B0
    addi r4, r23, 0x1b4
    lis r3, 0x8
    bl fn_80629810
lbl_fn_806457EC_000038B0:
    mr r3, r15
    mr r4, r17
    mr r5, r25
    li r6, 0x4
    bl fn_80646A30
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_000038C8:
    stb r25, 0x36(r3)
    addi r5, r1, 0x8
    li r4, 0xa
    stw r16, 0x30(r3)
    sth r17, 0x16(r3)
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
    lbz r0, 0x5(r16)
    mr r3, r15
    lbz r4, 0x4(r16)
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0x16(r1)
    lbz r0, 0x9(r16)
    lbz r4, 0x8(r16)
    slwi r0, r0, 8
    lbz r5, 0x7(r16)
    add r0, r4, r0
    lbz r6, 0x6(r16)
    slwi r4, r5, 8
    sth r0, 0x12(r1)
    add r0, r6, r4
    clrlwi r17, r0, 16
    lbz r0, 0xb(r16)
    mr r4, r17
    lbz r5, 0xa(r16)
    slwi r0, r0, 8
    add r0, r5, r0
    sth r0, 0x14(r1)
    bl fn_80647A88
    cmpwi r3, 0x0
    bne lbl_fn_806457EC_0000396C
    lbz r0, lbl_808230E0@l(r27)
    cmplwi r0, 0x2
    blt lbl_fn_806457EC_000036C4
    lhz r6, 0x16(r1)
    mr r5, r17
    addi r3, r29, 0x1
    addi r4, r23, 0x1d4
    bl fn_80629850
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_0000396C:
    lbz r5, 0x35(r3)
    cmplw r5, r25
    beq lbl_fn_806457EC_00003998
    lbz r0, lbl_808230E0@l(r27)
    cmplwi r0, 0x2
    blt lbl_fn_806457EC_000036C4
    mr r6, r25
    addi r3, r29, 0x1
    addi r4, r23, 0x204
    bl fn_80629850
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00003998:
    lhz r0, 0x12(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806457EC_000039B4
    addi r5, r1, 0x8
    li r4, 0xb
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_000039B4:
    cmplwi r0, 0x1
    bne lbl_fn_806457EC_000039CC
    addi r5, r1, 0x8
    li r4, 0xc
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_000039CC:
    addi r5, r1, 0x8
    li r4, 0xd
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
    lbz r0, 0x7(r16)
    li r19, 0x0
    lbz r4, 0x5(r16)
    li r18, 0x0
    lbz r3, 0x6(r16)
    slwi r0, r0, 8
    lbz r5, 0x4(r16)
    slwi r4, r4, 8
    add r0, r3, r0
    addi r16, r16, 0x8
    add r3, r5, r4
    sth r0, 0x50(r1)
    mr r20, r16
    stb r19, 0x3c(r1)
    clrlwi r4, r3, 16
    stb r19, 0x1e(r1)
    stb r19, 0x1a(r1)
    stb r19, 0x38(r1)
    b lbl_fn_806457EC_00003C24
lbl_fn_806457EC_00003A28:
    lbz r5, 0x0(r16)
    lbz r3, 0x1(r16)
    addi r16, r16, 0x2
    clrlwi r0, r5, 25
    cmpwi r0, 0x3
    beq lbl_fn_806457EC_00003AA0
    bge lbl_fn_806457EC_00003A54
    cmpwi r0, 0x1
    beq lbl_fn_806457EC_00003A60
    bge lbl_fn_806457EC_00003A80
    b lbl_fn_806457EC_00003BF8
lbl_fn_806457EC_00003A54:
    cmpwi r0, 0x5
    bge lbl_fn_806457EC_00003BF8
    b lbl_fn_806457EC_00003B98
lbl_fn_806457EC_00003A60:
    stb r28, 0x1a(r1)
    lbz r0, 0x1(r16)
    lbz r3, 0x0(r16)
    addi r16, r16, 0x2
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x1c(r1)
    b lbl_fn_806457EC_00003C24
lbl_fn_806457EC_00003A80:
    stb r28, 0x38(r1)
    lbz r0, 0x1(r16)
    lbz r3, 0x0(r16)
    addi r16, r16, 0x2
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x3a(r1)
    b lbl_fn_806457EC_00003C24
lbl_fn_806457EC_00003AA0:
    stb r28, 0x1e(r1)
    lbz r0, 0x0(r16)
    stb r0, 0x20(r1)
    lbz r0, 0x1(r16)
    stb r0, 0x21(r1)
    lbz r3, 0x5(r16)
    lbz r5, 0x4(r16)
    lbz r0, 0x3(r16)
    slwi r6, r3, 24
    lbz r3, 0x2(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x24(r1)
    lbz r3, 0x9(r16)
    lbz r5, 0x8(r16)
    lbz r0, 0x7(r16)
    slwi r6, r3, 24
    lbz r3, 0x6(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x28(r1)
    lbz r3, 0xd(r16)
    lbz r5, 0xc(r16)
    lbz r0, 0xb(r16)
    slwi r6, r3, 24
    lbz r3, 0xa(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x2c(r1)
    lbz r3, 0x11(r16)
    lbz r5, 0x10(r16)
    lbz r0, 0xf(r16)
    slwi r6, r3, 24
    lbz r3, 0xe(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x30(r1)
    lbz r3, 0x15(r16)
    lbz r5, 0x14(r16)
    lbz r0, 0x13(r16)
    slwi r6, r3, 24
    lbz r3, 0x12(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    addi r16, r16, 0x16
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x34(r1)
    b lbl_fn_806457EC_00003C24
lbl_fn_806457EC_00003B98:
    stb r28, 0x3c(r1)
    lbz r0, 0x0(r16)
    stb r0, 0x3e(r1)
    lbz r0, 0x1(r16)
    stb r0, 0x3f(r1)
    lbz r0, 0x2(r16)
    stb r0, 0x40(r1)
    lbz r0, 0x4(r16)
    lbz r3, 0x3(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x42(r1)
    lbz r0, 0x6(r16)
    lbz r3, 0x5(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x44(r1)
    lbz r0, 0x8(r16)
    lbz r3, 0x7(r16)
    addi r16, r16, 0x9
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x46(r1)
    b lbl_fn_806457EC_00003C24
lbl_fn_806457EC_00003BF8:
    addi r6, r3, 0x2
    cmpw r6, r17
    bgt lbl_fn_806457EC_00003C20
    rlwinm. r0, r5, 0, 24, 24
    add r16, r16, r3
    bne lbl_fn_806457EC_00003C24
    add r0, r18, r6
    li r19, 0x1
    clrlwi r18, r0, 16
    b lbl_fn_806457EC_00003C24
lbl_fn_806457EC_00003C20:
    mr r16, r21
lbl_fn_806457EC_00003C24:
    cmplw r16, r21
    blt lbl_fn_806457EC_00003A28
    mr r3, r15
    bl fn_80647A88
    cmpwi r3, 0x0
    beq lbl_fn_806457EC_00003C70
    cmpwi r19, 0x0
    stb r25, 0x36(r3)
    beq lbl_fn_806457EC_00003C60
    subi r0, r17, 0x4
    mr r4, r20
    mr r6, r18
    clrlwi r5, r0, 16
    bl fn_806470E0
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00003C60:
    addi r5, r1, 0x18
    li r4, 0xe
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00003C70:
    mr r3, r15
    mr r5, r25
    li r4, 0x2
    li r6, 0x0
    li r7, 0x0
    bl fn_80646798
    b lbl_fn_806457EC_000036C4
    lbz r0, 0x7(r16)
    lbz r3, 0x6(r16)
    slwi r0, r0, 8
    lbz r4, 0x5(r16)
    add r0, r3, r0
    lbz r5, 0x4(r16)
    slwi r3, r4, 8
    sth r0, 0x50(r1)
    add r0, r5, r3
    clrlwi r17, r0, 16
    lbz r0, 0x9(r16)
    lbz r3, 0x8(r16)
    addi r16, r16, 0xa
    slwi r0, r0, 8
    add r0, r3, r0
    stb r31, 0x1e(r1)
    sth r0, 0x18(r1)
    stb r31, 0x1a(r1)
    stb r31, 0x38(r1)
    stb r31, 0x3c(r1)
    b lbl_fn_806457EC_00003EA8
lbl_fn_806457EC_00003CE0:
    lbz r0, 0x0(r16)
    addi r16, r16, 0x2
    clrlwi r0, r0, 25
    cmpwi r0, 0x3
    beq lbl_fn_806457EC_00003D54
    bge lbl_fn_806457EC_00003D08
    cmpwi r0, 0x1
    beq lbl_fn_806457EC_00003D14
    bge lbl_fn_806457EC_00003D34
    b lbl_fn_806457EC_00003EA8
lbl_fn_806457EC_00003D08:
    cmpwi r0, 0x5
    bge lbl_fn_806457EC_00003EA8
    b lbl_fn_806457EC_00003E4C
lbl_fn_806457EC_00003D14:
    stb r28, 0x1a(r1)
    lbz r0, 0x1(r16)
    lbz r3, 0x0(r16)
    addi r16, r16, 0x2
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x1c(r1)
    b lbl_fn_806457EC_00003EA8
lbl_fn_806457EC_00003D34:
    stb r28, 0x38(r1)
    lbz r0, 0x1(r16)
    lbz r3, 0x0(r16)
    addi r16, r16, 0x2
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x3a(r1)
    b lbl_fn_806457EC_00003EA8
lbl_fn_806457EC_00003D54:
    stb r28, 0x1e(r1)
    lbz r0, 0x0(r16)
    stb r0, 0x20(r1)
    lbz r0, 0x1(r16)
    stb r0, 0x21(r1)
    lbz r3, 0x5(r16)
    lbz r4, 0x4(r16)
    lbz r0, 0x3(r16)
    slwi r5, r3, 24
    lbz r3, 0x2(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x24(r1)
    lbz r3, 0x9(r16)
    lbz r4, 0x8(r16)
    lbz r0, 0x7(r16)
    slwi r5, r3, 24
    lbz r3, 0x6(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x28(r1)
    lbz r3, 0xd(r16)
    lbz r4, 0xc(r16)
    lbz r0, 0xb(r16)
    slwi r5, r3, 24
    lbz r3, 0xa(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x2c(r1)
    lbz r3, 0x11(r16)
    lbz r4, 0x10(r16)
    lbz r0, 0xf(r16)
    slwi r5, r3, 24
    lbz r3, 0xe(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x30(r1)
    lbz r3, 0x15(r16)
    lbz r4, 0x14(r16)
    lbz r0, 0x13(r16)
    slwi r5, r3, 24
    lbz r3, 0x12(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    addi r16, r16, 0x16
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x34(r1)
    b lbl_fn_806457EC_00003EA8
lbl_fn_806457EC_00003E4C:
    stb r28, 0x3c(r1)
    lbz r0, 0x0(r16)
    stb r0, 0x3e(r1)
    lbz r0, 0x1(r16)
    stb r0, 0x3f(r1)
    lbz r0, 0x2(r16)
    stb r0, 0x40(r1)
    lbz r0, 0x4(r16)
    lbz r3, 0x3(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x42(r1)
    lbz r0, 0x6(r16)
    lbz r3, 0x5(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x44(r1)
    lbz r0, 0x8(r16)
    lbz r3, 0x7(r16)
    addi r16, r16, 0x9
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x46(r1)
lbl_fn_806457EC_00003EA8:
    cmplw r16, r21
    blt lbl_fn_806457EC_00003CE0
    mr r3, r15
    mr r4, r17
    bl fn_80647A88
    cmpwi r3, 0x0
    beq lbl_fn_806457EC_00003F1C
    lbz r5, 0x35(r3)
    cmplw r5, r25
    beq lbl_fn_806457EC_00003EF0
    lbz r0, lbl_808230E0@l(r27)
    cmplwi r0, 0x2
    blt lbl_fn_806457EC_000036C4
    mr r6, r25
    addi r3, r29, 0x1
    addi r4, r23, 0x230
    bl fn_80629850
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00003EF0:
    lhz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806457EC_00003F0C
    addi r5, r1, 0x18
    li r4, 0xf
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00003F0C:
    addi r5, r1, 0x18
    li r4, 0x10
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00003F1C:
    lbz r0, lbl_808230E0@l(r27)
    cmplwi r0, 0x2
    blt lbl_fn_806457EC_000036C4
    mr r5, r17
    addi r3, r29, 0x1
    addi r4, r23, 0x25c
    bl fn_80629830
    b lbl_fn_806457EC_000036C4
    lbz r4, 0x5(r16)
    mr r3, r15
    lbz r0, 0x7(r16)
    slwi r5, r4, 8
    lbz r6, 0x4(r16)
    lbz r4, 0x6(r16)
    slwi r0, r0, 8
    add r5, r6, r5
    add r0, r4, r0
    clrlwi r16, r5, 16
    mr r4, r16
    clrlwi r17, r0, 16
    bl fn_80647A88
    cmpwi r3, 0x0
    beq lbl_fn_806457EC_00003F98
    lhz r0, 0x16(r3)
    cmplw r0, r17
    bne lbl_fn_806457EC_000036C4
    stb r25, 0x36(r3)
    addi r5, r1, 0x8
    li r4, 0x11
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00003F98:
    mr r3, r15
    mr r4, r25
    mr r5, r16
    mr r6, r17
    bl fn_80647368
    b lbl_fn_806457EC_000036C4
    lbz r4, 0x5(r16)
    mr r3, r15
    lbz r0, 0x7(r16)
    slwi r5, r4, 8
    lbz r6, 0x4(r16)
    lbz r4, 0x6(r16)
    slwi r0, r0, 8
    add r5, r6, r5
    add r0, r4, r0
    clrlwi r16, r5, 16
    clrlwi r4, r0, 16
    bl fn_80647A88
    cmpwi r3, 0x0
    beq lbl_fn_806457EC_000036C4
    lhz r0, 0x16(r3)
    cmplw r0, r16
    bne lbl_fn_806457EC_000036C4
    lbz r0, 0x35(r3)
    cmplw r0, r25
    bne lbl_fn_806457EC_000036C4
    addi r5, r1, 0x8
    li r4, 0x12
    bl fn_80642D40
    b lbl_fn_806457EC_000036C4
    lhz r3, 0x7e(r30)
    subi r0, r3, 0xc
    cmpw r17, r0
    bge lbl_fn_806457EC_00004038
    mr r3, r15
    mr r4, r25
    mr r6, r17
    addi r5, r16, 0x4
    bl fn_80647598
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00004038:
    mr r3, r15
    mr r4, r25
    li r5, 0x0
    li r6, 0x0
    bl fn_80647598
    b lbl_fn_806457EC_000036C4
    lwz r12, 0x54(r15)
    cmpwi r12, 0x0
    beq lbl_fn_806457EC_000036C4
    stw r31, 0x54(r15)
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806457EC_000036C4
    lbz r0, 0x5(r16)
    mr r3, r15
    lbz r5, 0x4(r16)
    mr r4, r25
    slwi r0, r0, 8
    add r0, r5, r0
    clrlwi r5, r0, 16
    bl fn_80647734
    b lbl_fn_806457EC_000036C4
lbl_fn_806457EC_00004094:
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806457EC_000040B8
    lis r3, 0x8
    mr r5, r7
    addi r3, r3, 0x1
    addi r4, r23, 0x288
    bl fn_80629830
lbl_fn_806457EC_000040B8:
    mr r3, r15
    mr r5, r25
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80646798
lbl_fn_806457EC_000040D0:
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8064625C(void)
{
    nofralloc
    lhz r0, 0x14(r3)
    cmpwi r0, 0x4
    beq lbl_fn_8064625C_0000412C
    bge lbl_fn_8064625C_00004108
    cmpwi r0, 0x2
    beq lbl_fn_8064625C_00004114
    bge lbl_fn_8064625C_0000411C
    blr
lbl_fn_8064625C_00004108:
    cmpwi r0, 0x49
    beqlr
    blr
lbl_fn_8064625C_00004114:
    lwz r3, 0x10(r3)
    b fn_80644788
lbl_fn_8064625C_0000411C:
    lwz r3, 0x10(r3)
    li r4, 0x1e
    li r5, 0x0
    b fn_80642D40
lbl_fn_8064625C_0000412C:
    li r3, 0x1
    b fn_806462AC
    blr
}

asm void fn_806462AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_808230E0@ha
    mr r27, r3
    addi r4, r31, lbl_808230E0@l
    lhz r0, 0x7c8(r4)
    addi r28, r4, 0x7c0
    cmpwi r0, 0x0
    beq lbl_fn_806462AC_0000424C
    cmpwi r3, 0x0
    bne lbl_fn_806462AC_0000419C
    addi r3, r4, 0x7cc
    bl fn_80629E90
    lbz r0, lbl_808230E0@l(r31)
    cmplwi r0, 0x2
    blt lbl_fn_806462AC_000041BC
    lis r3, 0x8
    lis r4, lbl_807B743C@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B743C@l
    bl fn_80629810
    b lbl_fn_806462AC_000041BC
lbl_fn_806462AC_0000419C:
    lbz r0, lbl_808230E0@l(r31)
    cmplwi r0, 0x2
    blt lbl_fn_806462AC_000041BC
    lis r3, 0x8
    lis r4, lbl_807B7450@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7450@l
    bl fn_80629810
lbl_fn_806462AC_000041BC:
    mr r3, r28
    bl fn_80627570
    lis r4, 0x1
    mr r30, r3
    subi r31, r4, 0x1
    b lbl_fn_806462AC_00004220
lbl_fn_806462AC_000041D4:
    mr r3, r30
    bl fn_80627580
    cmpwi r27, 0x0
    mr r29, r3
    beq lbl_fn_806462AC_00004204
    lhz r3, 0x6(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806462AC_00004204
    subi r3, r3, 0x1
    clrlwi. r0, r3, 16
    sth r3, 0x6(r30)
    bne lbl_fn_806462AC_0000421C
lbl_fn_806462AC_00004204:
    mr r3, r28
    mr r4, r30
    bl fn_806274A0
    sth r31, 0x6(r30)
    mr r3, r30
    bl fn_806454BC
lbl_fn_806462AC_0000421C:
    mr r30, r29
lbl_fn_806462AC_00004220:
    cmpwi r30, 0x0
    bne lbl_fn_806462AC_000041D4
    lhz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806462AC_0000424C
    lis r3, lbl_808230E0@ha
    li r4, 0x4
    addi r3, r3, lbl_808230E0@l
    li r5, 0x1
    addi r3, r3, 0x7cc
    bl fn_80629E20
lbl_fn_806462AC_0000424C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806463D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_808230E0@ha
    stw r0, 0x14(r1)
    li r0, 0x4
    addi r4, r4, lbl_808230E0@l
    stw r31, 0xc(r1)
    addi r31, r4, 0x8
    stw r30, 0x8(r1)
    mr r30, r3
    mtctr r0
lbl_fn_806463D8_00004290:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806463D8_00004314
    mr r3, r31
    li r4, 0x0
    li r5, 0x5c
    bl memset
    li r0, 0x1
    mr r4, r30
    stb r0, 0x0(r31)
    addi r3, r31, 0x2a
    li r5, 0x6
    bl memcpy
    li r5, 0x0
    lis r3, 0x1
    stw r5, 0x4(r31)
    subi r0, r3, 0x1
    lis r4, lbl_808230E0@ha
    sth r0, 0x28(r31)
    addi r4, r4, lbl_808230E0@l
    stw r5, 0x50(r31)
    sth r0, 0x32(r31)
    stw r31, 0x20(r31)
    sth r5, 0x38(r31)
    lhz r0, 0x7ba(r4)
    sth r0, 0x58(r31)
    stb r5, 0x31(r31)
    lhz r3, 0x7b8(r4)
    addi r0, r3, 0x1
    sth r0, 0x7b8(r4)
    bl fn_80644CD0
    mr r3, r31
    b lbl_fn_806463D8_00004320
lbl_fn_806463D8_00004314:
    addi r31, r31, 0x5c
    bdnz lbl_fn_806463D8_00004290
    li r3, 0x0
lbl_fn_806463D8_00004320:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806464AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stb r31, 0x0(r3)
    addi r3, r3, 0x10
    bl fn_80629E90
    lwz r3, 0x50(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806464AC_00004374
    bl fn_80626D50
    stw r31, 0x50(r30)
lbl_fn_806464AC_00004374:
    addi r3, r30, 0x2a
    bl fn_80636BA8
    lwz r3, 0x8(r30)
    b lbl_fn_806464AC_0000438C
lbl_fn_806464AC_00004384:
    bl fn_806478E4
    lwz r3, 0x8(r30)
lbl_fn_806464AC_0000438C:
    cmpwi r3, 0x0
    bne lbl_fn_806464AC_00004384
    lwz r3, 0x4(r30)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_806464AC_000043BC
    addi r3, r30, 0x2a
    bl fn_80630124
    b lbl_fn_806464AC_000043BC
lbl_fn_806464AC_000043B0:
    addi r3, r30, 0x44
    bl fn_80627400
    bl fn_80626D50
lbl_fn_806464AC_000043BC:
    lwz r0, 0x44(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806464AC_000043B0
    lis r4, lbl_808230E0@ha
    addi r4, r4, lbl_808230E0@l
    lhz r3, 0x7b8(r4)
    cmplwi r3, 0x1
    blt lbl_fn_806464AC_000043E4
    subi r0, r3, 0x1
    sth r0, 0x7b8(r4)
lbl_fn_806464AC_000043E4:
    lis r4, lbl_808230E0@ha
    lhz r0, 0x38(r30)
    addi r4, r4, lbl_808230E0@l
    lhz r3, 0x4(r4)
    add r0, r3, r0
    sth r0, 0x4(r4)
    bl fn_80644CD0
    lwz r12, 0x54(r30)
    cmpwi r12, 0x0
    beq lbl_fn_806464AC_00004420
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x54(r30)
    mtctr r12
    bctrl
lbl_fn_806464AC_00004420:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806465AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_808230E0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_808230E0@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_806465AC_00004464:
    lbz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806465AC_00004490
    mr r4, r29
    addi r3, r30, 0x2a
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806465AC_00004490
    mr r3, r30
    b lbl_fn_806465AC_000044A4
lbl_fn_806465AC_00004490:
    addi r31, r31, 0x1
    addi r30, r30, 0x5c
    cmpwi r31, 0x4
    blt lbl_fn_806465AC_00004464
    li r3, 0x0
lbl_fn_806465AC_000044A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80646634(void)
{
    nofralloc
    lis r4, lbl_808230E0@ha
    addi r4, r4, lbl_808230E0@l
    lbzu r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646634_000044E8
    lhz r0, 0x28(r4)
    cmplw r0, r3
    bne lbl_fn_80646634_000044E8
    mr r3, r4
    blr
lbl_fn_80646634_000044E8:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646634_00004508
    lhz r0, 0x28(r4)
    cmplw r0, r3
    bne lbl_fn_80646634_00004508
    mr r3, r4
    blr
lbl_fn_80646634_00004508:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646634_00004528
    lhz r0, 0x28(r4)
    cmplw r0, r3
    bne lbl_fn_80646634_00004528
    mr r3, r4
    blr
lbl_fn_80646634_00004528:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646634_00004548
    lhz r0, 0x28(r4)
    cmplw r0, r3
    bne lbl_fn_80646634_00004548
    mr r3, r4
    blr
lbl_fn_80646634_00004548:
    li r3, 0x0
    blr
}

asm void fn_806466C4(void)
{
    nofralloc
    lis r3, lbl_808230E0@ha
    addi r3, r3, lbl_808230E0@l
    lbz r3, 0x1(r3)
    blr
}

asm void fn_806466D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_806466D4_000045A4
    li r3, 0x0
    b lbl_fn_806466D4_00004604
lbl_fn_806466D4_000045A4:
    li r8, 0x0
    ori r5, r28, 0x2000
    sth r8, 0x4(r3)
    addi r0, r29, 0xc
    srawi r7, r5, 8
    addi r9, r29, 0x8
    sth r0, 0x2(r3)
    srawi r6, r9, 8
    addi r10, r29, 0x4
    li r4, 0x1
    stb r5, 0x8(r3)
    srawi r5, r10, 8
    extrwi r0, r29, 8, 16
    stb r7, 0x9(r3)
    stb r9, 0xa(r3)
    stb r6, 0xb(r3)
    stb r10, 0xc(r3)
    stb r5, 0xd(r3)
    stb r4, 0xe(r3)
    stb r8, 0xf(r3)
    stb r30, 0x10(r3)
    stb r31, 0x11(r3)
    stb r29, 0x12(r3)
    stb r0, 0x13(r3)
lbl_fn_806466D4_00004604:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80646798(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmplwi r4, 0x1
    mr r27, r3
    mr r28, r4
    mr r29, r6
    mr r30, r7
    bne lbl_fn_80646798_00004658
    li r31, 0x2
    b lbl_fn_80646798_0000466C
lbl_fn_80646798_00004658:
    subi r6, r4, 0x2
    subfic r0, r4, 0x2
    nor r0, r6, r0
    srawi r0, r0, 31
    rlwinm r31, r0, 0, 29, 29
lbl_fn_80646798_0000466C:
    addi r0, r31, 0x2
    lhz r3, 0x28(r3)
    mr r6, r5
    li r5, 0x1
    clrlwi r4, r0, 16
    bl fn_806466D4
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_80646798_000046B8
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80646798_00004708
    lis r3, 0x8
    lis r4, lbl_807B7468@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7468@l
    bl fn_80629810
    b lbl_fn_80646798_00004708
lbl_fn_80646798_000046B8:
    clrlwi r0, r31, 16
    stb r28, 0x14(r3)
    extrwi r4, r28, 8, 16
    addi r6, r3, 0x16
    cmplwi r0, 0x2
    stb r4, 0x15(r3)
    blt lbl_fn_80646798_000046E4
    stb r29, 0x0(r6)
    extrwi r0, r29, 8, 16
    stb r0, 0x1(r6)
    addi r6, r6, 0x2
lbl_fn_80646798_000046E4:
    clrlwi r0, r31, 16
    cmplwi r0, 0x4
    blt lbl_fn_80646798_000046FC
    stb r30, 0x0(r6)
    extrwi r0, r30, 8, 16
    stb r0, 0x1(r6)
lbl_fn_80646798_000046FC:
    mr r3, r27
    li r4, 0x0
    bl fn_80644A04
lbl_fn_80646798_00004708:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80646894(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x4
    li r5, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r7, 0x10(r3)
    lbz r6, 0x31(r7)
    addi r0, r6, 0x1
    stb r0, 0x31(r7)
    clrlwi r6, r0, 24
    stb r0, 0x35(r3)
    lwz r3, 0x10(r3)
    lhz r3, 0x28(r3)
    bl fn_806466D4
    cmpwi r3, 0x0
    bne lbl_fn_80646894_00004790
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80646894_000047D0
    lis r3, 0x8
    lis r4, lbl_807B7484@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7484@l
    bl fn_80629810
    b lbl_fn_80646894_000047D0
lbl_fn_80646894_00004790:
    lwz r6, 0x30(r31)
    mr r5, r3
    li r4, 0x0
    lhz r0, 0x2(r6)
    stb r0, 0x14(r3)
    lwz r6, 0x30(r31)
    lhz r0, 0x2(r6)
    srawi r0, r0, 8
    stb r0, 0x15(r3)
    lhz r0, 0x14(r31)
    stb r0, 0x16(r3)
    lhz r0, 0x14(r31)
    srawi r0, r0, 8
    stb r0, 0x17(r3)
    lwz r3, 0x10(r31)
    bl fn_80644A04
lbl_fn_80646894_000047D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80646958(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x3
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x10(r3)
    lhz r3, 0x28(r6)
    lbz r6, 0x36(r29)
    bl fn_806466D4
    cmpwi r3, 0x0
    bne lbl_fn_80646958_00004850
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80646958_000048A0
    lis r3, 0x8
    lis r4, lbl_807B7484@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7484@l
    bl fn_80629810
    b lbl_fn_80646958_000048A0
lbl_fn_80646958_00004850:
    lhz r6, 0x14(r29)
    extrwi r0, r31, 8, 16
    mr r5, r3
    li r4, 0x0
    stb r6, 0x14(r3)
    lhz r6, 0x14(r29)
    srawi r6, r6, 8
    stb r6, 0x15(r3)
    lhz r6, 0x16(r29)
    stb r6, 0x16(r3)
    lhz r6, 0x16(r29)
    srawi r6, r6, 8
    stb r6, 0x17(r3)
    srawi r6, r30, 8
    stb r30, 0x18(r3)
    stb r6, 0x19(r3)
    stb r31, 0x1a(r3)
    stb r0, 0x1b(r3)
    lwz r3, 0x10(r29)
    bl fn_80644A04
lbl_fn_80646958_000048A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80646A30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    mr r6, r5
    li r5, 0x3
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r3, 0x28(r3)
    bl fn_806466D4
    cmpwi r3, 0x0
    bne lbl_fn_80646A30_00004924
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80646A30_00004960
    lis r3, 0x8
    lis r4, lbl_807B7484@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7484@l
    bl fn_80629810
    b lbl_fn_80646A30_00004960
lbl_fn_80646A30_00004924:
    li r7, 0x0
    srawi r6, r30, 8
    stb r7, 0x14(r3)
    extrwi r0, r31, 8, 16
    mr r5, r3
    li r4, 0x0
    stb r7, 0x15(r3)
    stb r30, 0x16(r3)
    stb r6, 0x17(r3)
    stb r31, 0x18(r3)
    stb r0, 0x19(r3)
    stb r7, 0x1a(r3)
    stb r7, 0x1b(r3)
    mr r3, r29
    bl fn_80644A04
lbl_fn_80646A30_00004960:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80646AF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x10(r3)
    lbz r5, 0x31(r6)
    addi r0, r5, 0x1
    stb r0, 0x31(r6)
    stb r0, 0x35(r3)
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646AF0_000049C0
    li r7, 0x4
lbl_fn_80646AF0_000049C0:
    lbz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646AF0_000049D4
    addi r0, r7, 0x4
    clrlwi r7, r0, 16
lbl_fn_80646AF0_000049D4:
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646AF0_000049E8
    addi r0, r7, 0x18
    clrlwi r7, r0, 16
lbl_fn_80646AF0_000049E8:
    lbz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646AF0_000049FC
    addi r0, r7, 0xb
    clrlwi r7, r0, 16
lbl_fn_80646AF0_000049FC:
    lwz r3, 0x10(r3)
    addi r0, r7, 0x4
    lbz r6, 0x35(r30)
    clrlwi r4, r0, 16
    lhz r3, 0x28(r3)
    li r5, 0x4
    bl fn_806466D4
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_80646AF0_00004A4C
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80646AF0_00004C5C
    lis r3, 0x8
    lis r4, lbl_807B7484@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7484@l
    bl fn_80629810
    b lbl_fn_80646AF0_00004C5C
lbl_fn_80646AF0_00004A4C:
    lhz r6, 0x16(r30)
    li r0, 0x0
    addi r4, r3, 0x18
    stb r6, 0x14(r3)
    lhz r6, 0x16(r30)
    srawi r6, r6, 8
    stb r6, 0x15(r3)
    stb r0, 0x16(r3)
    stb r0, 0x17(r3)
    lbz r0, 0x2(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80646AF0_00004AA4
    li r3, 0x1
    li r0, 0x2
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lhz r0, 0x4(r31)
    stb r0, 0x2(r4)
    lhz r0, 0x4(r31)
    srawi r0, r0, 8
    stb r0, 0x3(r4)
    addi r4, r4, 0x4
lbl_fn_80646AF0_00004AA4:
    lbz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80646AF0_00004AD4
    li r0, 0x2
    stb r0, 0x0(r4)
    stb r0, 0x1(r4)
    lhz r0, 0x22(r31)
    stb r0, 0x2(r4)
    lhz r0, 0x22(r31)
    srawi r0, r0, 8
    stb r0, 0x3(r4)
    addi r4, r4, 0x4
lbl_fn_80646AF0_00004AD4:
    lbz r0, 0x6(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80646AF0_00004BE0
    li r3, 0x3
    li r0, 0x16
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lbz r0, 0x8(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x9(r31)
    stb r0, 0x3(r4)
    lwz r0, 0xc(r31)
    stb r0, 0x4(r4)
    lwz r0, 0xc(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x5(r4)
    lwz r0, 0xc(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x6(r4)
    lwz r0, 0xc(r31)
    srwi r0, r0, 24
    stb r0, 0x7(r4)
    lwz r0, 0x10(r31)
    stb r0, 0x8(r4)
    lwz r0, 0x10(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x9(r4)
    lwz r0, 0x10(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0xa(r4)
    lwz r0, 0x10(r31)
    srwi r0, r0, 24
    stb r0, 0xb(r4)
    lwz r0, 0x14(r31)
    stb r0, 0xc(r4)
    lwz r0, 0x14(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0xd(r4)
    lwz r0, 0x14(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0xe(r4)
    lwz r0, 0x14(r31)
    srwi r0, r0, 24
    stb r0, 0xf(r4)
    lwz r0, 0x18(r31)
    stb r0, 0x10(r4)
    lwz r0, 0x18(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x11(r4)
    lwz r0, 0x18(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x12(r4)
    lwz r0, 0x18(r31)
    srwi r0, r0, 24
    stb r0, 0x13(r4)
    lwz r0, 0x1c(r31)
    stb r0, 0x14(r4)
    lwz r0, 0x1c(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x15(r4)
    lwz r0, 0x1c(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x16(r4)
    lwz r0, 0x1c(r31)
    srwi r0, r0, 24
    stb r0, 0x17(r4)
    addi r4, r4, 0x18
lbl_fn_80646AF0_00004BE0:
    lbz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80646AF0_00004C50
    li r3, 0x4
    li r0, 0x9
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lbz r0, 0x26(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x27(r31)
    stb r0, 0x3(r4)
    lbz r0, 0x28(r31)
    stb r0, 0x4(r4)
    lhz r0, 0x2a(r31)
    stb r0, 0x5(r4)
    lhz r0, 0x2a(r31)
    srawi r0, r0, 8
    stb r0, 0x6(r4)
    lhz r0, 0x2c(r31)
    stb r0, 0x7(r4)
    lhz r0, 0x2c(r31)
    srawi r0, r0, 8
    stb r0, 0x8(r4)
    lhz r0, 0x2e(r31)
    stb r0, 0x9(r4)
    lhz r0, 0x2e(r31)
    srawi r0, r0, 8
    stb r0, 0xa(r4)
lbl_fn_80646AF0_00004C50:
    lwz r3, 0x10(r30)
    li r4, 0x0
    bl fn_80644A04
lbl_fn_80646AF0_00004C5C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80646DE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646DE8_00004CA4
    li r5, 0x4
lbl_fn_80646DE8_00004CA4:
    lbz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646DE8_00004CB8
    addi r0, r5, 0x4
    clrlwi r5, r0, 16
lbl_fn_80646DE8_00004CB8:
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646DE8_00004CCC
    addi r0, r5, 0x18
    clrlwi r5, r0, 16
lbl_fn_80646DE8_00004CCC:
    lbz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80646DE8_00004CE0
    addi r0, r5, 0xb
    clrlwi r5, r0, 16
lbl_fn_80646DE8_00004CE0:
    lwz r3, 0x10(r3)
    addi r0, r5, 0x6
    lbz r6, 0x36(r30)
    clrlwi r4, r0, 16
    lhz r3, 0x28(r3)
    li r5, 0x5
    bl fn_806466D4
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_80646DE8_00004D30
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80646DE8_00004F54
    lis r3, 0x8
    lis r4, lbl_807B7484@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7484@l
    bl fn_80629810
    b lbl_fn_80646DE8_00004F54
lbl_fn_80646DE8_00004D30:
    lhz r6, 0x16(r30)
    li r0, 0x0
    addi r4, r3, 0x1a
    stb r6, 0x14(r3)
    lhz r6, 0x16(r30)
    srawi r6, r6, 8
    stb r6, 0x15(r3)
    stb r0, 0x16(r3)
    stb r0, 0x17(r3)
    lhz r0, 0x0(r31)
    stb r0, 0x18(r3)
    lhz r0, 0x0(r31)
    srawi r0, r0, 8
    stb r0, 0x19(r3)
    lbz r0, 0x2(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80646DE8_00004D9C
    li r3, 0x1
    li r0, 0x2
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lhz r0, 0x4(r31)
    stb r0, 0x2(r4)
    lhz r0, 0x4(r31)
    srawi r0, r0, 8
    stb r0, 0x3(r4)
    addi r4, r4, 0x4
lbl_fn_80646DE8_00004D9C:
    lbz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80646DE8_00004DCC
    li r0, 0x2
    stb r0, 0x0(r4)
    stb r0, 0x1(r4)
    lhz r0, 0x22(r31)
    stb r0, 0x2(r4)
    lhz r0, 0x22(r31)
    srawi r0, r0, 8
    stb r0, 0x3(r4)
    addi r4, r4, 0x4
lbl_fn_80646DE8_00004DCC:
    lbz r0, 0x6(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80646DE8_00004ED8
    li r3, 0x3
    li r0, 0x16
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lbz r0, 0x8(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x9(r31)
    stb r0, 0x3(r4)
    lwz r0, 0xc(r31)
    stb r0, 0x4(r4)
    lwz r0, 0xc(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x5(r4)
    lwz r0, 0xc(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x6(r4)
    lwz r0, 0xc(r31)
    srwi r0, r0, 24
    stb r0, 0x7(r4)
    lwz r0, 0x10(r31)
    stb r0, 0x8(r4)
    lwz r0, 0x10(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x9(r4)
    lwz r0, 0x10(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0xa(r4)
    lwz r0, 0x10(r31)
    srwi r0, r0, 24
    stb r0, 0xb(r4)
    lwz r0, 0x14(r31)
    stb r0, 0xc(r4)
    lwz r0, 0x14(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0xd(r4)
    lwz r0, 0x14(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0xe(r4)
    lwz r0, 0x14(r31)
    srwi r0, r0, 24
    stb r0, 0xf(r4)
    lwz r0, 0x18(r31)
    stb r0, 0x10(r4)
    lwz r0, 0x18(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x11(r4)
    lwz r0, 0x18(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x12(r4)
    lwz r0, 0x18(r31)
    srwi r0, r0, 24
    stb r0, 0x13(r4)
    lwz r0, 0x1c(r31)
    stb r0, 0x14(r4)
    lwz r0, 0x1c(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x15(r4)
    lwz r0, 0x1c(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x16(r4)
    lwz r0, 0x1c(r31)
    srwi r0, r0, 24
    stb r0, 0x17(r4)
    addi r4, r4, 0x18
lbl_fn_80646DE8_00004ED8:
    lbz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80646DE8_00004F48
    li r3, 0x4
    li r0, 0x9
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lbz r0, 0x26(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x27(r31)
    stb r0, 0x3(r4)
    lbz r0, 0x28(r31)
    stb r0, 0x4(r4)
    lhz r0, 0x2a(r31)
    stb r0, 0x5(r4)
    lhz r0, 0x2a(r31)
    srawi r0, r0, 8
    stb r0, 0x6(r4)
    lhz r0, 0x2c(r31)
    stb r0, 0x7(r4)
    lhz r0, 0x2c(r31)
    srawi r0, r0, 8
    stb r0, 0x8(r4)
    lhz r0, 0x2e(r31)
    stb r0, 0x9(r4)
    lhz r0, 0x2e(r31)
    srawi r0, r0, 8
    stb r0, 0xa(r4)
lbl_fn_80646DE8_00004F48:
    lwz r3, 0x10(r30)
    li r4, 0x0
    bl fn_80644A04
lbl_fn_80646DE8_00004F54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806470E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r24, r6
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806470E0_00004FCC
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806470E0_00005108
    lis r3, 0x8
    lis r4, lbl_807B74A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B74A4@l
    bl fn_80629810
    b lbl_fn_806470E0_00005108
lbl_fn_806470E0_00004FCC:
    li r7, 0x0
    addi r30, r3, 0xa
    sth r7, 0x4(r3)
    addi r8, r24, 0xa
    li r5, 0x1
    li r4, 0x5
    lwz r6, 0x10(r25)
    addi r9, r24, 0x6
    li r0, 0x3
    mr r29, r30
    lhz r6, 0x28(r6)
    add r28, r26, r27
    ori r6, r6, 0x2000
    stb r6, 0x8(r3)
    lwz r6, 0x10(r25)
    lhz r6, 0x28(r6)
    ori r6, r6, 0x2000
    srawi r6, r6, 8
    stb r6, 0x9(r3)
    srawi r6, r8, 8
    srawi r3, r9, 8
    stb r8, 0x2(r30)
    stb r6, 0x3(r30)
    stb r5, 0x4(r30)
    stb r7, 0x5(r30)
    stb r4, 0x6(r30)
    lbz r4, 0x36(r25)
    stb r4, 0x7(r30)
    stb r9, 0x8(r30)
    stb r3, 0x9(r30)
    lhz r3, 0x16(r25)
    stb r3, 0xa(r30)
    lhz r3, 0x16(r25)
    srawi r3, r3, 8
    stb r3, 0xb(r30)
    stb r7, 0xc(r30)
    stb r7, 0xd(r30)
    stb r0, 0xe(r30)
    stb r7, 0xf(r30)
    addi r30, r30, 0x10
    b lbl_fn_806470E0_000050D0
lbl_fn_806470E0_00005070:
    lbz r4, 0x0(r26)
    lbz r3, 0x1(r26)
    clrlwi r0, r4, 25
    cmpwi r0, 0x4
    bge lbl_fn_806470E0_0000509C
    cmpwi r0, 0x1
    bge lbl_fn_806470E0_00005090
    b lbl_fn_806470E0_0000509C
lbl_fn_806470E0_00005090:
    add r3, r3, r26
    addi r26, r3, 0x2
    b lbl_fn_806470E0_000050D0
lbl_fn_806470E0_0000509C:
    addi r24, r3, 0x2
    cmpw r24, r27
    bgt lbl_fn_806470E0_000050CC
    rlwinm. r0, r4, 0, 24, 24
    bne lbl_fn_806470E0_000050C4
    mr r3, r30
    mr r4, r26
    mr r5, r24
    bl memcpy
    add r30, r30, r24
lbl_fn_806470E0_000050C4:
    add r26, r26, r24
    b lbl_fn_806470E0_000050D0
lbl_fn_806470E0_000050CC:
    mr r26, r28
lbl_fn_806470E0_000050D0:
    cmplw r26, r28
    blt lbl_fn_806470E0_00005070
    subf r3, r29, r30
    mr r4, r25
    subi r3, r3, 0x2
    mr r5, r31
    stb r3, 0x0(r29)
    extrwi r0, r3, 8, 16
    clrlwi r3, r3, 16
    stb r0, 0x1(r29)
    addi r0, r3, 0x4
    sth r0, 0x2(r31)
    lwz r3, 0x10(r25)
    bl fn_80644A04
lbl_fn_806470E0_00005108:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80647294(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x4
    li r5, 0x6
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r7, 0x10(r3)
    lbz r6, 0x31(r7)
    addi r0, r6, 0x1
    stb r0, 0x31(r7)
    clrlwi r6, r0, 24
    stb r0, 0x35(r3)
    lwz r3, 0x10(r3)
    lhz r3, 0x28(r3)
    bl fn_806466D4
    cmpwi r3, 0x0
    bne lbl_fn_80647294_00005190
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80647294_000051E0
    lis r3, 0x8
    lis r4, lbl_807B7484@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7484@l
    bl fn_80629810
    b lbl_fn_80647294_000051E0
lbl_fn_80647294_00005190:
    lhz r5, 0x16(r31)
    li r0, 0x0
    mr r4, r3
    stb r5, 0x14(r3)
    lhz r5, 0x16(r31)
    srawi r5, r5, 8
    stb r5, 0x15(r3)
    lhz r5, 0x14(r31)
    stb r5, 0x16(r3)
    lhz r5, 0x14(r31)
    srawi r5, r5, 8
    stb r5, 0x17(r3)
    sth r0, 0x6(r3)
    lwz r3, 0x10(r31)
    addi r3, r3, 0x44
    bl fn_80627180
    lwz r3, 0x10(r31)
    li r4, 0x0
    li r5, 0x0
    bl fn_80644A04
lbl_fn_80647294_000051E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80647368(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    mr r6, r4
    li r4, 0x4
    stw r30, 0x18(r1)
    mr r30, r5
    li r5, 0x7
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r3, 0x28(r3)
    bl fn_806466D4
    cmpwi r3, 0x0
    bne lbl_fn_80647368_0000525C
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80647368_00005298
    lis r3, 0x8
    lis r4, lbl_807B7484@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7484@l
    bl fn_80629810
    b lbl_fn_80647368_00005298
lbl_fn_80647368_0000525C:
    stb r30, 0x14(r3)
    srawi r4, r30, 8
    extrwi r5, r31, 8, 16
    li r0, 0x0
    stb r4, 0x15(r3)
    mr r4, r3
    stb r31, 0x16(r3)
    stb r5, 0x17(r3)
    sth r0, 0x6(r3)
    addi r3, r29, 0x44
    bl fn_80627180
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_80644A04
lbl_fn_80647368_00005298:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80647428(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    mr r4, r31
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r5, 0x31(r3)
    lhz r3, 0x28(r3)
    addi r0, r5, 0x1
    li r5, 0x8
    stb r0, 0x31(r29)
    clrlwi r6, r0, 24
    bl fn_806466D4
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_80647428_0000532C
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80647428_00005408
    lis r3, 0x8
    lis r4, lbl_807B74C4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B74C4@l
    bl fn_80629810
    b lbl_fn_80647428_00005408
lbl_fn_80647428_0000532C:
    cmpwi cr1, r31, 0x0
    addi r7, r3, 0x14
    beq cr1, lbl_fn_80647428_000053FC
    li r8, 0x0
    ble cr1, lbl_fn_80647428_000053FC
    cmpwi r31, 0x8
    subi r4, r31, 0x8
    ble lbl_fn_80647428_000053D4
    li r6, 0x0
    blt cr1, lbl_fn_80647428_00005368
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r31, r0
    bgt lbl_fn_80647428_00005368
    li r6, 0x1
lbl_fn_80647428_00005368:
    cmpwi r6, 0x0
    beq lbl_fn_80647428_000053D4
    addi r0, r4, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_80647428_000053D4
lbl_fn_80647428_00005384:
    lbzx r0, r30, r8
    add r3, r30, r8
    addi r8, r8, 0x8
    stb r0, 0x0(r7)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r7)
    lbz r0, 0x2(r3)
    stb r0, 0x2(r7)
    lbz r0, 0x3(r3)
    stb r0, 0x3(r7)
    lbz r0, 0x4(r3)
    stb r0, 0x4(r7)
    lbz r0, 0x5(r3)
    stb r0, 0x5(r7)
    lbz r0, 0x6(r3)
    stb r0, 0x6(r7)
    lbz r0, 0x7(r3)
    stb r0, 0x7(r7)
    addi r7, r7, 0x8
    bdnz lbl_fn_80647428_00005384
lbl_fn_80647428_000053D4:
    subf r0, r8, r31
    add r3, r30, r8
    mtctr r0
    cmpw r8, r31
    bge lbl_fn_80647428_000053FC
lbl_fn_80647428_000053E8:
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
    bdnz lbl_fn_80647428_000053E8
lbl_fn_80647428_000053FC:
    mr r3, r29
    li r4, 0x0
    bl fn_80644A04
lbl_fn_80647428_00005408:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80647598(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_8081FAF0@ha
    mr r8, r4
    stw r0, 0x24(r1)
    addi r7, r7, lbl_8081FAF0@l
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r0, 0x7e(r7)
    cmplwi r0, 0x294
    bge lbl_fn_80647598_00005468
    lhz r4, 0x7c(r7)
    b lbl_fn_80647598_0000546C
lbl_fn_80647598_00005468:
    li r4, 0x294
lbl_fn_80647598_0000546C:
    subi r0, r4, 0xc
    clrlwi r0, r0, 16
    cmplw r6, r0
    ble lbl_fn_80647598_00005480
    li r31, 0x0
lbl_fn_80647598_00005480:
    lhz r3, 0x28(r3)
    mr r4, r31
    mr r6, r8
    li r5, 0x9
    bl fn_806466D4
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_80647598_000054C8
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80647598_000055A4
    lis r3, 0x8
    lis r4, lbl_807B7484@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7484@l
    bl fn_80629810
    b lbl_fn_80647598_000055A4
lbl_fn_80647598_000054C8:
    cmpwi cr1, r31, 0x0
    addi r7, r3, 0x14
    beq cr1, lbl_fn_80647598_00005598
    li r8, 0x0
    ble cr1, lbl_fn_80647598_00005598
    cmpwi r31, 0x8
    subi r4, r31, 0x8
    ble lbl_fn_80647598_00005570
    li r6, 0x0
    blt cr1, lbl_fn_80647598_00005504
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r31, r0
    bgt lbl_fn_80647598_00005504
    li r6, 0x1
lbl_fn_80647598_00005504:
    cmpwi r6, 0x0
    beq lbl_fn_80647598_00005570
    addi r0, r4, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_80647598_00005570
lbl_fn_80647598_00005520:
    lbzx r0, r30, r8
    add r3, r30, r8
    addi r8, r8, 0x8
    stb r0, 0x0(r7)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r7)
    lbz r0, 0x2(r3)
    stb r0, 0x2(r7)
    lbz r0, 0x3(r3)
    stb r0, 0x3(r7)
    lbz r0, 0x4(r3)
    stb r0, 0x4(r7)
    lbz r0, 0x5(r3)
    stb r0, 0x5(r7)
    lbz r0, 0x6(r3)
    stb r0, 0x6(r7)
    lbz r0, 0x7(r3)
    stb r0, 0x7(r7)
    addi r7, r7, 0x8
    bdnz lbl_fn_80647598_00005520
lbl_fn_80647598_00005570:
    subf r0, r8, r31
    add r3, r30, r8
    mtctr r0
    cmpw r8, r31
    bge lbl_fn_80647598_00005598
lbl_fn_80647598_00005584:
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
    bdnz lbl_fn_80647598_00005584
lbl_fn_80647598_00005598:
    mr r3, r29
    li r4, 0x0
    bl fn_80644A04
lbl_fn_80647598_000055A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80647734(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r4
    li r4, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    li r5, 0xb
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r3, 0x28(r3)
    bl fn_806466D4
    cmpwi r3, 0x0
    bne lbl_fn_80647734_00005620
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80647734_0000564C
    lis r3, 0x8
    lis r4, lbl_807B7484@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7484@l
    bl fn_80629810
    b lbl_fn_80647734_0000564C
lbl_fn_80647734_00005620:
    stb r31, 0x14(r3)
    extrwi r4, r31, 8, 16
    li r6, 0x1
    li r0, 0x0
    stb r4, 0x15(r3)
    mr r5, r3
    li r4, 0x0
    stb r6, 0x16(r3)
    stb r0, 0x17(r3)
    mr r3, r30
    bl fn_80644A04
lbl_fn_80647734_0000564C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806477D8(void)
{
    nofralloc
    lis r7, lbl_808230E0@ha
    addi r7, r7, lbl_808230E0@l
    lwz r8, 0x7b0(r7)
    cmpwi r8, 0x0
    bne lbl_fn_806477D8_00005680
    li r3, 0x0
    blr
lbl_fn_806477D8_00005680:
    addi r0, r7, 0x178
    lis r4, 0x8421
    subf r0, r0, r8
    lwz r6, 0x8(r8)
    addi r4, r4, 0x843
    li r5, 0x1
    mulhw r4, r4, r0
    stw r6, 0x7b0(r7)
    stb r5, 0x0(r8)
    add r0, r4, r0
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    clrlwi r4, r0, 16
    addi r0, r4, 0x40
    sth r0, 0x14(r8)
    stw r3, 0x10(r8)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806477D8_000056E8
    stw r8, 0xc(r3)
    li r0, 0x0
    stw r8, 0x8(r3)
    stw r0, 0x8(r8)
    stw r0, 0xc(r8)
    b lbl_fn_806477D8_00005704
lbl_fn_806477D8_000056E8:
    li r0, 0x0
    stw r0, 0x8(r8)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r8)
    lwz r4, 0xc(r3)
    stw r8, 0x8(r4)
    stw r8, 0xc(r3)
lbl_fn_806477D8_00005704:
    lis r3, 0x1
    li r6, 0x2a0
    subi r0, r3, 0x1
    li r5, 0x1
    sth r0, 0x3c(r8)
    li r4, 0x0
    li r0, -0x1
    mr r3, r8
    sth r6, 0x3a(r8)
    sth r6, 0x38(r8)
    stb r5, 0x59(r8)
    stb r5, 0x41(r8)
    stw r4, 0x5c(r8)
    stw r4, 0x44(r8)
    stw r4, 0x60(r8)
    stw r4, 0x48(r8)
    stw r4, 0x64(r8)
    stw r4, 0x4c(r8)
    stw r0, 0x68(r8)
    stw r0, 0x50(r8)
    stw r0, 0x6c(r8)
    stw r0, 0x54(r8)
    stb r4, 0x34(r8)
    stw r4, 0x4(r8)
    stb r5, 0x37(r8)
    stw r8, 0x28(r8)
    blr
}

asm void fn_806478E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x0(r3)
    lwz r31, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806478E4_000058FC
    li r0, 0x0
    stb r0, 0x0(r3)
    addi r3, r3, 0x18
    bl fn_80629E90
    b lbl_fn_806478E4_000057B8
lbl_fn_806478E4_000057AC:
    addi r3, r30, 0x70
    bl fn_80627400
    bl fn_80626D50
lbl_fn_806478E4_000057B8:
    lwz r0, 0x70(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806478E4_000057AC
    li r4, 0x0
    stw r4, 0x10(r30)
    lwz r0, 0x8(r31)
    cmplw r0, r30
    bne lbl_fn_806478E4_000057F0
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    stw r3, 0x8(r31)
    beq lbl_fn_806478E4_00005824
    stw r4, 0xc(r3)
    b lbl_fn_806478E4_00005824
lbl_fn_806478E4_000057F0:
    lwz r0, 0xc(r31)
    cmplw r0, r30
    bne lbl_fn_806478E4_0000580C
    lwz r3, 0xc(r30)
    stw r3, 0xc(r31)
    stw r4, 0x8(r3)
    b lbl_fn_806478E4_00005824
lbl_fn_806478E4_0000580C:
    lwz r0, 0x8(r30)
    lwz r3, 0xc(r30)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r30)
    lwz r3, 0x8(r30)
    stw r0, 0xc(r3)
lbl_fn_806478E4_00005824:
    lis r4, lbl_808230E0@ha
    addi r4, r4, lbl_808230E0@l
    lwz r0, 0x7b0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806478E4_00005850
    stw r30, 0x7b0(r4)
    li r0, 0x0
    stw r30, 0x7b4(r4)
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
    b lbl_fn_806478E4_0000586C
lbl_fn_806478E4_00005850:
    li r0, 0x0
    stw r0, 0x8(r30)
    lwz r0, 0x7b4(r4)
    stw r0, 0xc(r30)
    lwz r3, 0x7b4(r4)
    stw r30, 0x8(r3)
    stw r30, 0x7b4(r4)
lbl_fn_806478E4_0000586C:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806478E4_000058FC
    lwz r0, 0x4(r31)
    cmpwi r0, 0x4
    bne lbl_fn_806478E4_000058FC
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806478E4_000058FC
    lhz r3, 0x58(r31)
    cmpwi r3, 0x0
    bne lbl_fn_806478E4_000058E4
    lhz r3, 0x28(r31)
    li r4, 0x13
    bl fn_806392BC
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_806478E4_000058C4
    li r0, 0x5
    li r3, 0x1e
    stw r0, 0x4(r31)
    b lbl_fn_806478E4_000058E4
lbl_fn_806478E4_000058C4:
    cmpwi r0, 0x0
    bne lbl_fn_806478E4_000058E0
    li r0, 0x5
    lis r3, 0x1
    stw r0, 0x4(r31)
    subi r3, r3, 0x1
    b lbl_fn_806478E4_000058E4
lbl_fn_806478E4_000058E0:
    li r3, 0x1
lbl_fn_806478E4_000058E4:
    clrlwi r5, r3, 16
    cmplwi r5, 0xffff
    beq lbl_fn_806478E4_000058FC
    addi r3, r31, 0x10
    li r4, 0x2
    bl fn_80629E20
lbl_fn_806478E4_000058FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80647A88(void)
{
    nofralloc
    cmplwi r4, 0x40
    li r5, 0x0
    blt lbl_fn_80647A88_00005968
    subi r0, r4, 0x40
    lis r4, lbl_808230E0@ha
    clrlwi r0, r0, 16
    mulli r0, r0, 0x7c
    addi r4, r4, lbl_808230E0@l
    add r4, r4, r0
    lbz r0, 0x178(r4)
    addi r5, r4, 0x178
    cmpwi r0, 0x0
    bne lbl_fn_80647A88_00005950
    li r5, 0x0
    b lbl_fn_80647A88_00005968
lbl_fn_80647A88_00005950:
    cmpwi r3, 0x0
    beq lbl_fn_80647A88_00005968
    lwz r0, 0x10(r5)
    cmplw r3, r0
    beq lbl_fn_80647A88_00005968
    li r5, 0x0
lbl_fn_80647A88_00005968:
    mr r3, r5
    blr
}

asm void fn_80647AE4(void)
{
    nofralloc
    lis r4, lbl_808230E0@ha
    li r0, 0x8
    addi r4, r4, lbl_808230E0@l
    li r5, 0x0
    addi r4, r4, 0x650
    mtctr r0
lbl_fn_80647AE4_00005988:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80647AE4_000059A8
    li r0, 0x1
    stb r0, 0x0(r4)
    sth r3, 0x2(r4)
    mr r3, r4
    blr
lbl_fn_80647AE4_000059A8:
    addi r5, r5, 0x1
    addi r4, r4, 0x2c
    bdnz lbl_fn_80647AE4_00005988
    li r3, 0x0
    blr
}

asm void fn_80647B30(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    sth r0, 0x2(r3)
    blr
}

asm void fn_80647B40(void)
{
    nofralloc
    lis r4, lbl_808230E0@ha
    li r0, 0x2
    addi r4, r4, lbl_808230E0@l
    li r5, 0x0
    addi r4, r4, 0x650
    mtctr r0
lbl_fn_80647B40_000059E4:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80647B40_00005A04
    lhz r0, 0x2(r4)
    cmplw r0, r3
    bne lbl_fn_80647B40_00005A04
    mr r3, r4
    blr
lbl_fn_80647B40_00005A04:
    lbzu r0, 0x2c(r4)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80647B40_00005A28
    lhz r0, 0x2(r4)
    cmplw r0, r3
    bne lbl_fn_80647B40_00005A28
    mr r3, r4
    blr
lbl_fn_80647B40_00005A28:
    lbzu r0, 0x2c(r4)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80647B40_00005A4C
    lhz r0, 0x2(r4)
    cmplw r0, r3
    bne lbl_fn_80647B40_00005A4C
    mr r3, r4
    blr
lbl_fn_80647B40_00005A4C:
    lbzu r0, 0x2c(r4)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80647B40_00005A70
    lhz r0, 0x2(r4)
    cmplw r0, r3
    bne lbl_fn_80647B40_00005A70
    mr r3, r4
    blr
lbl_fn_80647B40_00005A70:
    addi r5, r5, 0x1
    addi r4, r4, 0x2c
    bdnz lbl_fn_80647B40_000059E4
    li r3, 0x0
    blr
}

asm void fn_80647BF8(void)
{
    nofralloc
    lbz r0, 0x2(r4)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80647BF8_00005AD0
    lhz r0, 0x4(r4)
    cmplwi r0, 0x30
    blt lbl_fn_80647BF8_00005AC4
    cmplwi r0, 0x69b
    sth r0, 0x3a(r3)
    ble lbl_fn_80647BF8_00005AD0
    li r0, 0x69b
    sth r0, 0x4(r4)
    sth r0, 0x3a(r3)
    b lbl_fn_80647BF8_00005AD0
lbl_fn_80647BF8_00005AC4:
    li r0, 0x30
    li r6, 0x0
    sth r0, 0x4(r4)
lbl_fn_80647BF8_00005AD0:
    lbz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80647BF8_00005AF8
    lhz r0, 0x22(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80647BF8_00005AF8
    lis r5, 0x1
    li r8, 0x0
    subi r0, r5, 0x1
    sth r0, 0x22(r4)
lbl_fn_80647BF8_00005AF8:
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80647BF8_00005B50
    lbz r0, 0x9(r4)
    cmplwi r0, 0x2
    bgt lbl_fn_80647BF8_00005B44
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    b lbl_fn_80647BF8_00005B50
lbl_fn_80647BF8_00005B44:
    li r0, 0x1
    li r7, 0x0
    stb r0, 0x9(r4)
lbl_fn_80647BF8_00005B50:
    cmpwi r6, 0x0
    li r3, 0x0
    li r0, 0x0
    beq lbl_fn_80647BF8_00005B74
    cmpwi r8, 0x0
    beq lbl_fn_80647BF8_00005B74
    cmpwi r7, 0x0
    beq lbl_fn_80647BF8_00005B74
    li r0, 0x1
lbl_fn_80647BF8_00005B74:
    cmpwi r0, 0x0
    beq lbl_fn_80647BF8_00005B80
    li r3, 0x1
lbl_fn_80647BF8_00005B80:
    cmpwi r3, 0x0
    bnelr
    li r0, 0x1
    cmpwi r6, 0x0
    sth r0, 0x0(r4)
    beq lbl_fn_80647BF8_00005BA0
    li r0, 0x0
    stb r0, 0x2(r4)
lbl_fn_80647BF8_00005BA0:
    cmpwi r8, 0x0
    beq lbl_fn_80647BF8_00005BB0
    li r0, 0x0
    stb r0, 0x20(r4)
lbl_fn_80647BF8_00005BB0:
    cmpwi r7, 0x0
    beq lbl_fn_80647BF8_00005BC0
    li r0, 0x0
    stb r0, 0x6(r4)
lbl_fn_80647BF8_00005BC0:
    li r0, 0x0
    stb r0, 0x24(r4)
    blr
}

asm void fn_80647D40(void)
{
    nofralloc
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    blr
}

asm void fn_80647D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80647D80_00005C48
    lhz r0, 0x4(r4)
    cmplwi r0, 0x69b
    sth r0, 0x38(r3)
    ble lbl_fn_80647D80_00005C48
    li r0, 0x69b
    sth r0, 0x4(r4)
    sth r0, 0x38(r3)
lbl_fn_80647D80_00005C48:
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80647D80_00005C84
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
lbl_fn_80647D80_00005C84:
    lbz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80647D80_00005D04
    lhz r0, 0x22(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80647D80_00005D04
    sth r0, 0x3c(r3)
    lwz r31, 0x10(r3)
    lhz r3, 0x22(r4)
    lhz r0, 0x32(r31)
    cmplw r3, r0
    bge lbl_fn_80647D80_00005D04
    sth r3, 0x32(r31)
    lhz r0, 0x22(r4)
    cmplwi r0, 0x4ff
    bgt lbl_fn_80647D80_00005D04
    clrlslwi r3, r0, 16, 3
    lis r4, 0x6666
    addi r0, r3, 0x3
    addi r4, r4, 0x6667
    li r3, 0x2
    mulhw r0, r4, r0
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    clrlwi r30, r0, 16
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80647D80_00005D04
    lhz r4, 0x28(r31)
    mr r5, r30
    bl fn_8063E468
lbl_fn_80647D80_00005D04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80647E90(void)
{
    nofralloc
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    blr
}

asm void fn_80647ED0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_808230E0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_808230E0@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    addi r30, r3, 0x8
lbl_fn_80647ED0_00005D80:
    lbz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80647ED0_00005DA0
    lhz r3, 0x28(r30)
    cmplwi r3, 0xffff
    beq lbl_fn_80647ED0_00005DA0
    li r4, 0xff
    bl fn_8064465C
lbl_fn_80647ED0_00005DA0:
    addi r31, r31, 0x1
    addi r30, r30, 0x5c
    cmpwi r31, 0x4
    blt lbl_fn_80647ED0_00005D80
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80647F3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    li r0, 0x3
    lis r26, lbl_808230E0@ha
    addi r4, r26, lbl_808230E0@l
    lis r30, lbl_80820018@ha
    stw r0, 0x4(r3)
    mr r31, r3
    addi r24, r4, 0x8
    addi r30, r30, lbl_80820018@l
    li r25, 0x0
    lis r28, 0x8
    lis r29, lbl_807B74E4@ha
lbl_fn_80647F3C_00005E08:
    cmplw r24, r31
    beq lbl_fn_80647F3C_00005EB0
    lbz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80647F3C_00005EB0
    lbz r0, 0x30(r24)
    cmplwi r0, 0x1
    bne lbl_fn_80647F3C_00005EB0
    addi r3, r24, 0x2a
    bl fn_80637174
    lbz r0, lbl_808230E0@l(r26)
    mr r27, r3
    cmplwi r0, 0x3
    blt lbl_fn_80647F3C_00005E60
    clrlwi r0, r27, 24
    addi r3, r28, 0x2
    cmplwi r0, 0x1
    addi r4, r29, lbl_807B74E4@l
    la r5, lbl_8087EB00
    bne lbl_fn_80647F3C_00005E5C
    la r5, lbl_8087EAF8
lbl_fn_80647F3C_00005E5C:
    bl fn_80629830
lbl_fn_80647F3C_00005E60:
    clrlwi r0, r27, 24
    cmplwi r0, 0x1
    beq lbl_fn_80647F3C_00005EB0
    lbz r0, 0x640(r30)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_fn_80647F3C_00005EB0
    li r3, 0x2
    li r0, 0x0
    stw r3, 0x4(r31)
    addi r3, r24, 0x2a
    li r4, 0x0
    li r5, 0x0
    stb r0, 0x30(r31)
    bl fn_8063024C
    addi r3, r31, 0x10
    li r4, 0x2
    li r5, 0xa
    bl fn_80629E20
    li r3, 0x1
    b lbl_fn_80647F3C_00005EC8
lbl_fn_80647F3C_00005EB0:
    addi r25, r25, 0x1
    addi r24, r24, 0x5c
    cmpwi r25, 0x4
    blt lbl_fn_80647F3C_00005E08
    mr r3, r31
    bl fn_80648054
lbl_fn_80647F3C_00005EC8:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80648054(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_806332A4
    lbz r4, 0x0(r3)
    li r0, 0x3
    addi r3, r30, 0x2a
    stw r0, 0x4(r30)
    extrwi r31, r4, 1, 26
    bl fn_8063466C
    cmpwi r3, 0x0
    beq lbl_fn_80648054_00005F30
    lhz r0, 0x0(r3)
    lbz r5, 0xb(r3)
    lbz r6, 0xd(r3)
    ori r7, r0, 0x8000
    b lbl_fn_80648054_00005F3C
lbl_fn_80648054_00005F30:
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
lbl_fn_80648054_00005F3C:
    mr r8, r31
    addi r3, r30, 0x2a
    li r4, 0x18
    bl fn_8063C8F4
    clrlwi. r0, r3, 24
    bne lbl_fn_80648054_00005F84
    lis r3, lbl_808230E0@ha
    lbz r0, lbl_808230E0@l(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80648054_00005F74
    lis r4, lbl_807B7528@ha
    lis r3, 0x8
    addi r4, r4, lbl_807B7528@l
    bl fn_80629810
lbl_fn_80648054_00005F74:
    mr r3, r30
    bl fn_806464AC
    li r3, 0x0
    b lbl_fn_80648054_00005F98
lbl_fn_80648054_00005F84:
    addi r3, r30, 0x10
    li r4, 0x2
    li r5, 0x3c
    bl fn_80629E20
    li r3, 0x1
lbl_fn_80648054_00005F98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80648124(void)
{
    nofralloc
    lis r4, lbl_808230E0@ha
    addi r4, r4, lbl_808230E0@l
    lbzu r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80648124_00005FD8
    lwz r0, 0x4(r4)
    cmpw r0, r3
    bne lbl_fn_80648124_00005FD8
    mr r3, r4
    blr
lbl_fn_80648124_00005FD8:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80648124_00005FF8
    lwz r0, 0x4(r4)
    cmpw r0, r3
    bne lbl_fn_80648124_00005FF8
    mr r3, r4
    blr
lbl_fn_80648124_00005FF8:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80648124_00006018
    lwz r0, 0x4(r4)
    cmpw r0, r3
    bne lbl_fn_80648124_00006018
    mr r3, r4
    blr
lbl_fn_80648124_00006018:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80648124_00006038
    lwz r0, 0x4(r4)
    cmpw r0, r3
    bne lbl_fn_80648124_00006038
    mr r3, r4
    blr
lbl_fn_80648124_00006038:
    li r3, 0x0
    blr
}

asm void fn_806481B4(void)
{
    nofralloc
    lis r4, lbl_808230E0@ha
    li r0, 0x2
    addi r4, r4, lbl_808230E0@l
    li r3, 0x0
    addi r5, r4, 0x8
    li r6, 0x0
    mtctr r0
lbl_fn_806481B4_0000605C:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806481B4_000060B8
    lwz r4, 0x8(r5)
    cmpwi r4, 0x0
    beq lbl_fn_806481B4_00006080
    lwz r0, 0x4(r5)
    cmpwi r0, 0x5
    bne lbl_fn_806481B4_00006088
lbl_fn_806481B4_00006080:
    li r3, 0x1
    blr
lbl_fn_806481B4_00006088:
    lwz r0, 0xc(r5)
    cmplw r4, r0
    bne lbl_fn_806481B4_000060B8
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806481B4_000060B8
    lwz r4, 0x4(r4)
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_806481B4_000060B8
    li r3, 0x1
    blr
lbl_fn_806481B4_000060B8:
    lbz r0, 0x5c(r5)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_806481B4_00006118
    lwz r4, 0x64(r5)
    cmpwi r4, 0x0
    beq lbl_fn_806481B4_000060E0
    lwz r0, 0x60(r5)
    cmpwi r0, 0x5
    bne lbl_fn_806481B4_000060E8
lbl_fn_806481B4_000060E0:
    li r3, 0x1
    blr
lbl_fn_806481B4_000060E8:
    lwz r0, 0x68(r5)
    cmplw r4, r0
    bne lbl_fn_806481B4_00006118
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806481B4_00006118
    lwz r4, 0x4(r4)
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_806481B4_00006118
    li r3, 0x1
    blr
lbl_fn_806481B4_00006118:
    addi r6, r6, 0x1
    addi r5, r5, 0xb8
    bdnz lbl_fn_806481B4_0000605C
    blr
}

asm void fn_8064829C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x418
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808238C8@ha
    addi r3, r31, lbl_808238C8@l
    bl memset
    addi r3, r31, lbl_808238C8@l
    li r4, 0x1
    li r0, 0x5
    stb r4, 0x65(r3)
    stb r0, 0x414(r3)
    bl fn_80649CC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
