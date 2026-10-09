#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_16(void);
extern void _restgpr_18(void);
extern void _restgpr_26(void);
extern void _savegpr_16(void);
extern void _savegpr_18(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004B0E4(void);
extern void fn_8004B158(void);
extern void fn_8004B1EC(void);
extern void fn_80084320(void);
extern void fn_800CA798(void);
extern void fn_800CAC48(void);
extern void fn_800CB480(void);
extern void fn_800CB6C4(void);
extern void fn_800CB6E4(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_803605EC(void);
extern void fn_8059E284(void);
extern void fn_8059E310(void);
extern void fn_8059E320(void);
extern void fn_8059E358(void);
extern void fn_8059E388(void);
extern void fn_8059E3B8(void);
extern void fn_8059EB20(void);
extern void fn_805A0028(void);
extern void fn_805A01DC(void);
extern void fn_805A0390(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9990(void);
extern void fn_8068B100(void);
extern void fn_80708CF0(void);
extern void fn_80708D30(void);
extern void fn_80708D70(void);
extern void fn_80709AD0(void);
extern void fn_8070AC90(void);
extern void fn_8070ADA0(void);
extern void fn_8070ADE0(void);
extern void fn_8070AE20(void);
extern void fn_8070C9E0(void);
extern void fn_807105D0(void);
extern void fn_807109D0(void);
extern void fn_80711630(void);
extern void fn_807116A0(void);
extern void fn_807116B0(void);
extern void fn_80712DD0(void);
extern void fn_80712E50(void);
extern void fn_80712EC0(void);
extern void fn_80713190(void);
extern void fn_807131A0(void);
extern void fn_807131B0(void);
extern void fn_8071CAE0(void);
extern void fn_8071CB60(void);
extern void fn_80721580(void);
extern void fn_80721700(void);
extern void fn_80721710(void);
extern void fn_807219D0(void);
extern void fn_80721A60(void);
extern void fn_80721B80(void);
extern void fn_80721CA0(void);
extern void fn_80724DF0(void);
extern void fn_80724E90(void);

/* External data declarations */
extern u8 lbl_807626F8[];
extern u8 lbl_80762810[];
extern u8 lbl_80763248[];
extern u8 lbl_8076328C[];
extern u8 lbl_80796FE4[];
extern u8 lbl_80797008[];
extern u8 lbl_80797014[];
extern u8 lbl_80797038[];
extern u8 lbl_80797044[];
extern u8 lbl_80797068[];
extern u8 lbl_807970A4[];
extern u8 lbl_807970C8[];
extern u8 lbl_807970D4[];
extern u8 lbl_807970F8[];
extern u8 lbl_80797104[];
extern u8 lbl_80797128[];
extern u8 lbl_807972B4[];
extern u8 lbl_807972E0[];
extern u8 lbl_807972E8[];
extern u8 lbl_80797318[];
extern u8 lbl_80797330[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E6D0;
extern u32 lbl_8087E6D4;
extern u32 lbl_8087E6D8;
extern u32 lbl_8087F418;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9F0;
extern u32 lbl_80888218;
extern u32 lbl_80888220;
extern u32 lbl_80888224;
extern u32 lbl_80888228;
extern u32 lbl_8088822C;
extern u32 lbl_80888230;
extern u32 lbl_80888234;
extern u32 lbl_80888238;
extern u32 lbl_8088823C;
extern u32 lbl_80888240;

/* Function declarations */
void fn_805A1288(void);
void fn_805A1764(void);
void fn_805A1A64(void);
void fn_805A1C04(void);
void fn_805A1DE8(void);
void fn_805A1E8C(void);
void fn_805A1F30(void);
void fn_805A20A8(void);
void fn_805A21C4(void);
void fn_805A222C(void);
void fn_805A2234(void);
void fn_805A223C(void);
void fn_805A2244(void);
void fn_805A2408(void);
void fn_805A2438(void);
void fn_805A2510(void);

asm void fn_805A1288(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_16
    cmpwi r6, 0x0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r17, r9
    mr r16, r10
    bne lbl_fn_805A1288_00000054
    lis r3, lbl_80762810@ha
    li r4, 0x58e
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x821
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1288_00000054:
    lwz r0, 0x8(r27)
    cmpwi r17, 0x0
    li r31, 0x0
    stw r31, 0xc(r1)
    li r30, 0x0
    stw r0, 0x8(r1)
    beq lbl_fn_805A1288_000000C8
    li r0, 0x0
    stw r0, 0xc(r1)
    mr r31, r17
    mr r4, r17
    addi r3, r1, 0x20
    bl fn_80711630
    cmpwi r16, 0x0
    beq lbl_fn_805A1288_000000B0
    mr r4, r16
    addi r3, r1, 0x20
    addi r5, r1, 0xc
    bl fn_807116B0
    cmpwi r3, 0x0
    bne lbl_fn_805A1288_000000B0
    li r3, 0xb
    b lbl_fn_805A1288_000004C4
lbl_fn_805A1288_000000B0:
    addi r3, r1, 0x20
    bl fn_807116A0
    lwz r4, 0xc(r1)
    addi r5, r1, 0x8
    bl fn_807105D0
    stw r3, 0xc(r1)
lbl_fn_805A1288_000000C8:
    cmpwi r31, 0x0
    bne lbl_fn_805A1288_0000011C
    lwz r4, 0x0(r26)
    mr r3, r24
    bl fn_805A0028
    lwz r0, 0x0(r27)
    cmpwi r16, 0x0
    stw r0, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805A1288_0000011C
    mr r4, r31
    addi r3, r1, 0x18
    bl fn_80711630
    mr r4, r16
    addi r3, r1, 0x18
    addi r5, r1, 0xc
    bl fn_807116B0
    cmpwi r3, 0x0
    bne lbl_fn_805A1288_0000011C
    li r3, 0xb
    b lbl_fn_805A1288_000004C4
lbl_fn_805A1288_0000011C:
    cmpwi r31, 0x0
    bne lbl_fn_805A1288_000001C0
    lwz r17, 0x4(r25)
    cmpwi r17, 0x0
    bne lbl_fn_805A1288_00000138
    li r3, 0x4
    b lbl_fn_805A1288_000004C4
lbl_fn_805A1288_00000138:
    addic. r16, r25, 0x290
    bne lbl_fn_805A1288_00000158
    lis r3, lbl_80762810@ha
    li r4, 0x5c5
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x846
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1288_00000158:
    lwz r3, 0x10(r24)
    mr r5, r16
    lwz r4, 0x0(r26)
    li r6, 0x200
    bl fn_8059E3B8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_805A1288_00000180
    li r3, 0x6
    b lbl_fn_805A1288_000004C4
lbl_fn_805A1288_00000180:
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    mr r16, r3
    mr r3, r17
    bl fn_807109D0
    cmplw r3, r16
    bge lbl_fn_805A1288_000001C0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r3, 0x5
    b lbl_fn_805A1288_000004C4
lbl_fn_805A1288_000001C0:
    lwz r4, 0x30(r24)
    mr r3, r25
    lwz r5, 0x8(r1)
    addi r6, r24, 0x20
    bl fn_80712DD0
    lis r16, lbl_80797128@ha
    lis r17, lbl_80797104@ha
    lis r19, lbl_807970C8@ha
    lis r20, lbl_807970A4@ha
    lis r21, lbl_807970F8@ha
    lis r22, lbl_807970D4@ha
    lis r23, lbl_80762810@ha
    b lbl_fn_805A1288_00000368
lbl_fn_805A1288_000001F4:
    cmpwi r3, 0x1
    bne lbl_fn_805A1288_00000360
    lwz r0, 0x48(r24)
    cmplwi r0, 0x1
    bne lbl_fn_805A1288_00000258
    cmpwi r30, 0x0
    beq lbl_fn_805A1288_00000224
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_805A1288_00000224:
    li r3, 0x4
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A1288_00000250
    lis r3, lbl_80762810@ha
    lwz r6, 0x9c(r25)
    addi r3, r3, lbl_80762810@l
    li r4, 0x5f0
    addi r5, r3, 0x877
    crclr 6
    bl fn_80724E90
lbl_fn_805A1288_00000250:
    li r3, 0x9
    b lbl_fn_805A1288_000004C4
lbl_fn_805A1288_00000258:
    cmpwi r0, 0x0
    bne lbl_fn_805A1288_00000268
    li r18, 0x0
    b lbl_fn_805A1288_000002BC
lbl_fn_805A1288_00000268:
    bne lbl_fn_805A1288_00000280
    addi r3, r16, lbl_80797128@l
    addi r5, r17, lbl_80797104@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1288_00000280:
    lwz r18, 0x4c(r24)
    cmpwi r18, 0x0
    bne lbl_fn_805A1288_000002A0
    addi r3, r19, lbl_807970C8@l
    addi r5, r20, lbl_807970A4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1288_000002A0:
    subic. r18, r18, 0xf0
    bne lbl_fn_805A1288_000002BC
    addi r3, r21, lbl_807970F8@l
    addi r5, r22, lbl_807970D4@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1288_000002BC:
    cmplw r25, r18
    bne lbl_fn_805A1288_00000314
    cmpwi r30, 0x0
    beq lbl_fn_805A1288_000002E0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_805A1288_000002E0:
    li r3, 0x4
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A1288_0000030C
    lis r3, lbl_80762810@ha
    lwz r6, 0x9c(r25)
    addi r3, r3, lbl_80762810@l
    li r4, 0x600
    addi r5, r3, 0x877
    crclr 6
    bl fn_80724E90
lbl_fn_805A1288_0000030C:
    li r3, 0x9
    b lbl_fn_805A1288_000004C4
lbl_fn_805A1288_00000314:
    li r3, 0x4
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A1288_0000033C
    addi r3, r23, lbl_80762810@l
    lwz r6, 0x9c(r18)
    addi r5, r3, 0x8b7
    li r4, 0x609
    crclr 6
    bl fn_80724E90
lbl_fn_805A1288_0000033C:
    mr r3, r18
    li r4, 0x0
    bl fn_80709AD0
    lwz r4, 0x30(r24)
    mr r3, r25
    lwz r5, 0x8(r1)
    addi r6, r24, 0x20
    bl fn_80712DD0
    b lbl_fn_805A1288_00000368
lbl_fn_805A1288_00000360:
    li r3, 0xff
    b lbl_fn_805A1288_000004C4
lbl_fn_805A1288_00000368:
    cmpwi r3, 0x0
    bne lbl_fn_805A1288_000001F4
    cmpwi r25, 0x0
    bne lbl_fn_805A1288_00000390
    lis r3, lbl_80762810@ha
    li r4, 0x716
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x8f2
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1288_00000390:
    cmpwi r26, 0x0
    bne lbl_fn_805A1288_000003B0
    lis r3, lbl_80762810@ha
    li r4, 0x717
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x918
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1288_000003B0:
    lwz r4, 0x10(r26)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lis r3, lbl_807626F8@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_807626F8@l(r3)
    stw r0, 0x2c(r1)
    mr r3, r25
    lfs f0, lbl_80888218
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl fn_8070AC90
    lwz r4, 0x14(r26)
    mr r3, r25
    bl fn_8070ADA0
    lwz r4, 0x18(r26)
    mr r3, r25
    bl fn_8070ADE0
    lwz r4, 0x1c(r26)
    mr r3, r25
    bl fn_8070AE20
    lwz r4, 0xc(r27)
    mr r3, r25
    bl fn_80713190
    lbz r4, 0x10(r27)
    mr r3, r25
    bl fn_807131A0
    lwz r4, 0x34(r24)
    mr r3, r25
    lwz r5, 0x38(r24)
    bl fn_807131B0
    cmpwi r28, 0x0
    beq lbl_fn_805A1288_0000044C
    cmpwi r28, 0x1
    beq lbl_fn_805A1288_00000454
    cmpwi r28, 0x2
    beq lbl_fn_805A1288_0000045C
    b lbl_fn_805A1288_00000468
lbl_fn_805A1288_0000044C:
    li r16, 0x1
    b lbl_fn_805A1288_00000470
lbl_fn_805A1288_00000454:
    li r16, 0x0
    b lbl_fn_805A1288_00000470
lbl_fn_805A1288_0000045C:
    li r16, 0x0
    li r29, 0x0
    b lbl_fn_805A1288_00000470
lbl_fn_805A1288_00000468:
    li r16, 0x0
    li r29, 0x0
lbl_fn_805A1288_00000470:
    cmpwi r31, 0x0
    beq lbl_fn_805A1288_000004A8
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_80711630
    addi r3, r1, 0x10
    bl fn_807116A0
    lwz r5, 0xc(r1)
    mr r4, r3
    mr r3, r25
    mr r6, r16
    mr r7, r29
    bl fn_80712E50
    b lbl_fn_805A1288_000004C0
lbl_fn_805A1288_000004A8:
    lwz r5, 0xc(r1)
    mr r3, r25
    mr r4, r30
    mr r6, r16
    mr r7, r29
    bl fn_80712EC0
lbl_fn_805A1288_000004C0:
    li r3, 0x0
lbl_fn_805A1288_000004C4:
    addi r11, r1, 0x70
    bl _restgpr_16
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_805A1764(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_18
    mr r31, r5
    mr r29, r3
    mr r30, r4
    mr r18, r6
    lhz r5, 0x4(r6)
    mr r19, r7
    lhz r6, 0x6(r6)
    mr r20, r8
    mr r3, r30
    addi r4, r29, 0xc8
    bl fn_8071CAE0
    lis r21, lbl_80797068@ha
    lis r22, lbl_80797044@ha
    lis r24, lbl_80797008@ha
    lis r25, lbl_80796FE4@ha
    lis r26, lbl_80797038@ha
    lis r27, lbl_80797014@ha
    lis r28, lbl_80762810@ha
    b lbl_fn_805A1764_00000678
lbl_fn_805A1764_0000053C:
    cmpwi r3, 0x1
    bne lbl_fn_805A1764_00000670
    lwz r0, 0x70(r29)
    cmplwi r0, 0x1
    bne lbl_fn_805A1764_00000584
    li r3, 0x4
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A1764_0000057C
    lis r3, lbl_80762810@ha
    lwz r6, 0x9c(r30)
    addi r3, r3, lbl_80762810@l
    li r4, 0x670
    addi r5, r3, 0x943
    crclr 6
    bl fn_80724E90
lbl_fn_805A1764_0000057C:
    li r3, 0x9
    b lbl_fn_805A1764_000007C4
lbl_fn_805A1764_00000584:
    cmpwi r0, 0x0
    bne lbl_fn_805A1764_00000594
    li r23, 0x0
    b lbl_fn_805A1764_000005E8
lbl_fn_805A1764_00000594:
    bne lbl_fn_805A1764_000005AC
    addi r3, r21, lbl_80797068@l
    addi r5, r22, lbl_80797044@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1764_000005AC:
    lwz r23, 0x74(r29)
    cmpwi r23, 0x0
    bne lbl_fn_805A1764_000005CC
    addi r3, r24, lbl_80797008@l
    addi r5, r25, lbl_80796FE4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1764_000005CC:
    subic. r23, r23, 0xf0
    bne lbl_fn_805A1764_000005E8
    addi r3, r26, lbl_80797038@l
    addi r5, r27, lbl_80797014@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1764_000005E8:
    cmplw r30, r23
    bne lbl_fn_805A1764_00000624
    li r3, 0x4
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A1764_0000061C
    lis r3, lbl_80762810@ha
    lwz r6, 0x9c(r30)
    addi r3, r3, lbl_80762810@l
    li r4, 0x67c
    addi r5, r3, 0x943
    crclr 6
    bl fn_80724E90
lbl_fn_805A1764_0000061C:
    li r3, 0x9
    b lbl_fn_805A1764_000007C4
lbl_fn_805A1764_00000624:
    li r3, 0x5
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A1764_0000064C
    addi r3, r28, lbl_80762810@l
    lwz r6, 0x9c(r23)
    addi r5, r3, 0x986
    li r4, 0x685
    crclr 6
    bl fn_80724E90
lbl_fn_805A1764_0000064C:
    mr r3, r23
    li r4, 0x0
    bl fn_80709AD0
    lhz r5, 0x4(r18)
    mr r3, r30
    lhz r6, 0x6(r18)
    addi r4, r29, 0xc8
    bl fn_8071CAE0
    b lbl_fn_805A1764_00000678
lbl_fn_805A1764_00000670:
    li r3, 0xff
    b lbl_fn_805A1764_000007C4
lbl_fn_805A1764_00000678:
    cmpwi r3, 0x0
    bne lbl_fn_805A1764_0000053C
    cmpwi r19, 0x0
    beq lbl_fn_805A1764_0000069C
    cmpwi r19, 0x1
    beq lbl_fn_805A1764_000006A4
    cmpwi r19, 0x2
    beq lbl_fn_805A1764_000006B0
    b lbl_fn_805A1764_000006B8
lbl_fn_805A1764_0000069C:
    li r22, 0x1
    b lbl_fn_805A1764_000006C0
lbl_fn_805A1764_000006A4:
    li r22, 0x0
    li r20, 0x0
    b lbl_fn_805A1764_000006C0
lbl_fn_805A1764_000006B0:
    li r22, 0x0
    b lbl_fn_805A1764_000006C0
lbl_fn_805A1764_000006B8:
    li r22, 0x0
    li r20, 0x0
lbl_fn_805A1764_000006C0:
    addic. r21, r30, 0xeb4
    bne lbl_fn_805A1764_000006E0
    lis r3, lbl_80762810@ha
    li r4, 0x6a8
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x846
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1764_000006E0:
    lwz r3, 0x10(r29)
    mr r5, r21
    lwz r4, 0x0(r31)
    li r6, 0x200
    bl fn_8059E3B8
    cmpwi r3, 0x0
    mr r6, r3
    bne lbl_fn_805A1764_00000708
    li r3, 0x6
    b lbl_fn_805A1764_000007C4
lbl_fn_805A1764_00000708:
    mr r3, r30
    mr r4, r22
    mr r5, r20
    bl fn_8071CB60
    cmpwi r3, 0x0
    bne lbl_fn_805A1764_00000728
    li r3, 0xff
    b lbl_fn_805A1764_000007C4
lbl_fn_805A1764_00000728:
    cmpwi r30, 0x0
    bne lbl_fn_805A1764_00000748
    lis r3, lbl_80762810@ha
    li r4, 0x716
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x8f2
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1764_00000748:
    cmpwi r31, 0x0
    bne lbl_fn_805A1764_00000768
    lis r3, lbl_80762810@ha
    li r4, 0x717
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x918
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1764_00000768:
    lwz r4, 0x10(r31)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_807626F8@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_807626F8@l(r3)
    stw r0, 0xc(r1)
    mr r3, r30
    lfs f0, lbl_80888218
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl fn_8070AC90
    lwz r4, 0x14(r31)
    mr r3, r30
    bl fn_8070ADA0
    lwz r4, 0x18(r31)
    mr r3, r30
    bl fn_8070ADE0
    lwz r4, 0x1c(r31)
    mr r3, r30
    bl fn_8070AE20
    li r3, 0x0
lbl_fn_805A1764_000007C4:
    addi r11, r1, 0x50
    bl _restgpr_18
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805A1A64(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r6, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bne lbl_fn_805A1A64_00000828
    lis r3, lbl_80762810@ha
    li r4, 0x6d7
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x821
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1A64_00000828:
    lwz r4, 0x0(r28)
    mr r3, r26
    bl fn_805A0028
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_805A1A64_00000848
    li r3, 0x4
    b lbl_fn_805A1A64_00000964
lbl_fn_805A1A64_00000848:
    cmpwi r30, 0x0
    beq lbl_fn_805A1A64_00000864
    cmpwi r30, 0x1
    beq lbl_fn_805A1A64_0000086C
    cmpwi r30, 0x2
    beq lbl_fn_805A1A64_00000878
    b lbl_fn_805A1A64_00000880
lbl_fn_805A1A64_00000864:
    li r6, 0x1
    b lbl_fn_805A1A64_00000888
lbl_fn_805A1A64_0000086C:
    li r6, 0x0
    li r31, 0x0
    b lbl_fn_805A1A64_00000888
lbl_fn_805A1A64_00000878:
    li r6, 0x0
    b lbl_fn_805A1A64_00000888
lbl_fn_805A1A64_00000880:
    li r6, 0x0
    li r31, 0x0
lbl_fn_805A1A64_00000888:
    lwz r5, 0x0(r29)
    mr r3, r27
    lwz r9, 0x0(r28)
    mr r7, r31
    addi r8, r26, 0x28
    bl fn_80721580
    cmpwi r3, 0x0
    bne lbl_fn_805A1A64_000008B0
    li r3, 0xff
    b lbl_fn_805A1A64_00000964
lbl_fn_805A1A64_000008B0:
    cmpwi r27, 0x0
    bne lbl_fn_805A1A64_000008D0
    lis r3, lbl_80762810@ha
    li r4, 0x716
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x8f2
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1A64_000008D0:
    cmpwi r28, 0x0
    bne lbl_fn_805A1A64_000008F0
    lis r3, lbl_80762810@ha
    li r4, 0x717
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x918
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1A64_000008F0:
    lwz r4, 0x10(r28)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_807626F8@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_807626F8@l(r3)
    stw r0, 0xc(r1)
    mr r3, r27
    lfs f0, lbl_80888218
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl fn_8070AC90
    lwz r4, 0x14(r28)
    mr r3, r27
    bl fn_8070ADA0
    lwz r4, 0x18(r28)
    mr r3, r27
    bl fn_8070ADE0
    lwz r4, 0x1c(r28)
    mr r3, r27
    bl fn_8070AE20
    lwz r4, 0x4(r29)
    mr r3, r27
    bl fn_80721700
    lbz r4, 0x8(r29)
    mr r3, r27
    bl fn_80721710
    li r3, 0x0
lbl_fn_805A1A64_00000964:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805A1C04(void)
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
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A1C04_000009CC
    lis r3, lbl_80762810@ha
    li r4, 0x775
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x2e3
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1C04_000009CC:
    lwz r3, 0x10(r28)
    cmpwi r3, 0x0
    bne lbl_fn_805A1C04_000009E0
    li r3, 0x0
    b lbl_fn_805A1C04_000009E4
lbl_fn_805A1C04_000009E0:
    bl fn_8059E284
lbl_fn_805A1C04_000009E4:
    cmpwi r3, 0x0
    bne lbl_fn_805A1C04_000009F4
    li r3, 0x0
    b lbl_fn_805A1C04_00000B40
lbl_fn_805A1C04_000009F4:
    lwz r3, 0x10(r28)
    bl fn_8059E310
    cmplw r29, r3
    blt lbl_fn_805A1C04_00000A0C
    li r3, 0x0
    b lbl_fn_805A1C04_00000B40
lbl_fn_805A1C04_00000A0C:
    lwz r3, 0x14(r28)
    cmpwi r3, 0x0
    bne lbl_fn_805A1C04_00000A3C
    bne lbl_fn_805A1C04_00000A34
    lis r3, lbl_80762810@ha
    li r4, 0x348
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x364
    crclr 6
    bl fn_80724E90
lbl_fn_805A1C04_00000A34:
    li r0, 0x0
    b lbl_fn_805A1C04_00000A5C
lbl_fn_805A1C04_00000A3C:
    lwz r0, 0x0(r3)
    cmplw r29, r0
    blt lbl_fn_805A1C04_00000A50
    li r0, 0x0
    b lbl_fn_805A1C04_00000A5C
lbl_fn_805A1C04_00000A50:
    slwi r0, r29, 3
    add r3, r3, r0
    lwz r0, 0x4(r3)
lbl_fn_805A1C04_00000A5C:
    cmpwi r0, 0x0
    beq lbl_fn_805A1C04_00000A6C
    li r3, 0x1
    b lbl_fn_805A1C04_00000B40
lbl_fn_805A1C04_00000A6C:
    lwz r3, 0x14(r28)
    cmpwi r3, 0x0
    bne lbl_fn_805A1C04_00000A98
    bne lbl_fn_805A1C04_00000AD4
    lis r3, lbl_80762810@ha
    li r4, 0x362
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x471
    crclr 6
    bl fn_80724E90
    b lbl_fn_805A1C04_00000AD4
lbl_fn_805A1C04_00000A98:
    lwz r8, 0x0(r3)
    cmplw r29, r8
    blt lbl_fn_805A1C04_00000AC4
    lis r3, lbl_80762810@ha
    mr r6, r29
    addi r3, r3, lbl_80762810@l
    li r4, 0x366
    addi r5, r3, 0x4c6
    li r7, 0x0
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1C04_00000AC4:
    lwz r3, 0x14(r28)
    slwi r0, r29, 3
    add r3, r3, r0
    stw r30, 0x4(r3)
lbl_fn_805A1C04_00000AD4:
    lwz r3, 0x14(r28)
    cmpwi r3, 0x0
    bne lbl_fn_805A1C04_00000B00
    bne lbl_fn_805A1C04_00000B3C
    lis r3, lbl_80762810@ha
    li r4, 0x395
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x505
    crclr 6
    bl fn_80724E90
    b lbl_fn_805A1C04_00000B3C
lbl_fn_805A1C04_00000B00:
    lwz r8, 0x0(r3)
    cmplw r29, r8
    blt lbl_fn_805A1C04_00000B2C
    lis r3, lbl_80762810@ha
    mr r6, r29
    addi r3, r3, lbl_80762810@l
    li r4, 0x399
    addi r5, r3, 0x4c6
    li r7, 0x0
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1C04_00000B2C:
    lwz r3, 0x14(r28)
    slwi r0, r29, 3
    add r3, r3, r0
    stw r31, 0x8(r3)
lbl_fn_805A1C04_00000B3C:
    li r3, 0x1
lbl_fn_805A1C04_00000B40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A1DE8(void)
{
    nofralloc
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A1DE8_00000BB0
    li r9, 0x0
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_805A1DE8_00000BA0
lbl_fn_805A1DE8_00000B7C:
    add r8, r8, r7
    lwz r0, 0x4(r8)
    cmplw r4, r0
    bgt lbl_fn_805A1DE8_00000B98
    cmplw r0, r5
    bgt lbl_fn_805A1DE8_00000B98
    stw r6, 0x4(r8)
lbl_fn_805A1DE8_00000B98:
    addi r7, r7, 0x8
    addi r9, r9, 0x1
lbl_fn_805A1DE8_00000BA0:
    lwz r8, 0x18(r3)
    lwz r0, 0x0(r8)
    cmplw r9, r0
    blt lbl_fn_805A1DE8_00000B7C
lbl_fn_805A1DE8_00000BB0:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beqlr
    li r9, 0x0
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_805A1DE8_00000BF0
lbl_fn_805A1DE8_00000BCC:
    add r8, r8, r7
    lwz r0, 0x4(r8)
    cmplw r4, r0
    bgt lbl_fn_805A1DE8_00000BE8
    cmplw r0, r5
    bgt lbl_fn_805A1DE8_00000BE8
    stw r6, 0x4(r8)
lbl_fn_805A1DE8_00000BE8:
    addi r7, r7, 0x8
    addi r9, r9, 0x1
lbl_fn_805A1DE8_00000BF0:
    lwz r8, 0x14(r3)
    lwz r0, 0x0(r8)
    cmplw r9, r0
    blt lbl_fn_805A1DE8_00000BCC
    blr
}

asm void fn_805A1E8C(void)
{
    nofralloc
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A1E8C_00000C54
    li r9, 0x0
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_805A1E8C_00000C44
lbl_fn_805A1E8C_00000C20:
    add r8, r8, r7
    lwz r0, 0x8(r8)
    cmplw r4, r0
    bgt lbl_fn_805A1E8C_00000C3C
    cmplw r0, r5
    bgt lbl_fn_805A1E8C_00000C3C
    stw r6, 0x8(r8)
lbl_fn_805A1E8C_00000C3C:
    addi r7, r7, 0x8
    addi r9, r9, 0x1
lbl_fn_805A1E8C_00000C44:
    lwz r8, 0x18(r3)
    lwz r0, 0x0(r8)
    cmplw r9, r0
    blt lbl_fn_805A1E8C_00000C20
lbl_fn_805A1E8C_00000C54:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beqlr
    li r9, 0x0
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_805A1E8C_00000C94
lbl_fn_805A1E8C_00000C70:
    add r8, r8, r7
    lwz r0, 0x8(r8)
    cmplw r4, r0
    bgt lbl_fn_805A1E8C_00000C8C
    cmplw r0, r5
    bgt lbl_fn_805A1E8C_00000C8C
    stw r6, 0x8(r8)
lbl_fn_805A1E8C_00000C8C:
    addi r7, r7, 0x8
    addi r9, r9, 0x1
lbl_fn_805A1E8C_00000C94:
    lwz r8, 0x14(r3)
    lwz r0, 0x0(r8)
    cmplw r9, r0
    blt lbl_fn_805A1E8C_00000C70
    blr
}

asm void fn_805A1F30(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r6
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    lwz r5, 0x4(r3)
    lwz r3, 0x10(r5)
    cmpwi r3, 0x0
    bne lbl_fn_805A1F30_00000CE8
    li r3, 0x0
    b lbl_fn_805A1F30_00000CEC
lbl_fn_805A1F30_00000CE8:
    bl fn_8059E284
lbl_fn_805A1F30_00000CEC:
    cmpwi r3, 0x0
    bne lbl_fn_805A1F30_00000CFC
    li r3, 0x0
    b lbl_fn_805A1F30_00000E00
lbl_fn_805A1F30_00000CFC:
    lwz r31, 0x4(r28)
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A1F30_00000D24
    lis r3, lbl_80762810@ha
    li r4, 0x2b3
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x2cb
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1F30_00000D24:
    lwz r31, 0x10(r31)
    addi r5, r1, 0x20
    lwz r4, 0xb0(r29)
    mr r3, r31
    bl fn_8059E358
    cmpwi r3, 0x0
    bne lbl_fn_805A1F30_00000D48
    li r3, 0x0
    b lbl_fn_805A1F30_00000E00
lbl_fn_805A1F30_00000D48:
    lwz r4, 0x24(r1)
    mr r3, r31
    addi r5, r1, 0x8
    bl fn_8059E388
    cmpwi r3, 0x0
    bne lbl_fn_805A1F30_00000D68
    li r3, 0x0
    b lbl_fn_805A1F30_00000E00
lbl_fn_805A1F30_00000D68:
    lwz r3, 0x4(r28)
    lwz r4, 0x8(r1)
    bl fn_805A0028
    cmpwi r3, 0x0
    bne lbl_fn_805A1F30_00000D84
    li r3, 0x0
    b lbl_fn_805A1F30_00000E00
lbl_fn_805A1F30_00000D84:
    mr r4, r3
    addi r3, r1, 0x10
    bl fn_80708CF0
    lwz r3, 0x4(r28)
    lwz r4, 0x8(r1)
    bl fn_805A01DC
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_805A1F30_00000DBC
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_80708D30
    li r3, 0x0
    b lbl_fn_805A1F30_00000E00
lbl_fn_805A1F30_00000DBC:
    bne lbl_fn_805A1F30_00000DDC
    lis r3, lbl_807972E0@ha
    lis r5, lbl_807972B4@ha
    addi r3, r3, lbl_807972E0@l
    li r4, 0x32
    addi r5, r5, lbl_807972B4@l
    crclr 6
    bl fn_80724DF0
lbl_fn_805A1F30_00000DDC:
    stw r31, 0x1c(r1)
    mr r4, r30
    addi r3, r1, 0x10
    bl fn_80708D70
    mr r31, r3
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_80708D30
    mr r3, r31
lbl_fn_805A1F30_00000E00:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805A20A8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lwz r11, 0x4(r3)
    stw r0, 0x44(r1)
    stmw r24, 0x20(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    mr r31, r10
    lwz r3, 0x10(r11)
    cmpwi r3, 0x0
    bne lbl_fn_805A20A8_00000E68
    li r3, 0x0
    b lbl_fn_805A20A8_00000E6C
lbl_fn_805A20A8_00000E68:
    bl fn_8059E284
lbl_fn_805A20A8_00000E6C:
    cmpwi r3, 0x0
    bne lbl_fn_805A20A8_00000E7C
    li r3, 0x0
    b lbl_fn_805A20A8_00000F28
lbl_fn_805A20A8_00000E7C:
    lwz r3, 0x4(r24)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A20A8_00000EA4
    lis r3, lbl_80762810@ha
    li r4, 0x2b3
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x2cb
    crclr 6
    bl fn_80724DF0
lbl_fn_805A20A8_00000EA4:
    lwz r3, 0x4(r24)
    mr r4, r31
    bl fn_805A01DC
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_805A20A8_00000EC4
    li r3, 0x0
    b lbl_fn_805A20A8_00000F28
lbl_fn_805A20A8_00000EC4:
    mr r4, r28
    addi r3, r1, 0x8
    bl fn_807219D0
    mr r4, r25
    mr r5, r29
    addi r3, r1, 0x8
    bl fn_80721A60
    cmpwi r3, 0x0
    bne lbl_fn_805A20A8_00000EF0
    li r3, 0x0
    b lbl_fn_805A20A8_00000F28
lbl_fn_805A20A8_00000EF0:
    mr r4, r26
    mr r5, r29
    mr r6, r30
    addi r3, r1, 0x8
    bl fn_80721B80
    cmpwi r3, 0x0
    bne lbl_fn_805A20A8_00000F14
    li r3, 0x0
    b lbl_fn_805A20A8_00000F28
lbl_fn_805A20A8_00000F14:
    lwz r4, 0x0(r26)
    mr r5, r27
    mr r6, r31
    addi r3, r1, 0x8
    bl fn_80721CA0
lbl_fn_805A20A8_00000F28:
    lmw r24, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805A21C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A21C4_00000F80
    lis r3, lbl_80797318@ha
    lis r5, lbl_807972E8@ha
    addi r3, r3, lbl_80797318@l
    li r4, 0xc9
    addi r5, r5, lbl_807972E8@l
    crclr 6
    bl fn_80724DF0
lbl_fn_805A21C4_00000F80:
    lwz r3, 0x10(r30)
    mr r4, r31
    bl fn_8059E320
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A222C(void)
{
    nofralloc
    subi r3, r3, 0xc
    b fn_805A21C4
}

asm void fn_805A2234(void)
{
    nofralloc
    subi r3, r3, 0xc
    b fn_805A0390
}

asm void fn_805A223C(void)
{
    nofralloc
    subi r3, r3, 0xc
    b fn_8059EB20
}

asm void fn_805A2244(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_805A2244_00001164
    lwz r0, lbl_8087F9F0
    cmpwi r0, 0x0
    bne lbl_fn_805A2244_00001164
    lis r5, lbl_8076328C@ha
    li r3, 0x100
    addi r5, r5, lbl_8076328C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805A2244_00001160
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_80797330@ha
    li r0, 0x0
    addi r3, r3, lbl_80797330@l
    stw r3, 0x0(r31)
    lis r3, lbl_807C7030@ha
    lfs f6, lbl_80888224
    stw r0, 0x48(r31)
    addi r3, r3, lbl_807C7030@l
    lfs f7, lbl_80888220
    addi r4, r1, 0x8
    stw r0, 0x4c(r31)
    stfs f6, 0x50(r31)
    stfs f6, 0x54(r31)
    stfs f7, 0x58(r31)
    stb r0, 0x5c(r31)
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x60(r31), 0, 0
    stfs f2, 0x68(r31)
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6c(r31), 0, 0
    stfs f2, 0x74(r31)
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x78(r31), 0, 0
    stfs f2, 0x80(r31)
    lfs f5, 0x70(r31)
    lfs f4, 0x64(r31)
    lfs f3, 0x6c(r31)
    fsubs f5, f5, f4
    lfs f0, 0x60(r31)
    lfs f4, 0x74(r31)
    fsubs f3, f3, f0
    lfs f0, 0x68(r31)
    stfs f5, 0xc(r1)
    fsubs f2, f4, f0
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x84(r31), 0, 0
    stfs f2, 0x8c(r31)
    stfs f6, 0x90(r31)
    stfs f6, 0x94(r31)
    stfs f7, 0x98(r31)
    stb r0, 0x9c(r31)
    lfs f3, lbl_8087E6D0
    stfs f3, 0xa0(r31)
    lfs f0, lbl_8087E6D0
    stfs f0, 0xa4(r31)
    fsubs f0, f0, f3
    lfs f3, lbl_8087E6D0
    stfs f3, 0xa8(r31)
    stfs f0, 0xac(r31)
    stfs f6, 0xb0(r31)
    stfs f6, 0xb4(r31)
    stfs f7, 0xb8(r31)
    stb r0, 0xbc(r31)
    lfs f3, lbl_8087E6D4
    stfs f3, 0xc0(r31)
    lfs f0, lbl_8087E6D4
    stfs f0, 0xc4(r31)
    fsubs f0, f0, f3
    lfs f3, lbl_8087E6D4
    stfs f3, 0xc8(r31)
    stfs f0, 0xcc(r31)
    stfs f6, 0xd0(r31)
    stfs f6, 0xd4(r31)
    stfs f7, 0xd8(r31)
    stb r0, 0xdc(r31)
    lfs f3, lbl_8087E6D8
    stfs f3, 0xe0(r31)
    lfs f0, lbl_8087E6D8
    stfs f0, 0xe4(r31)
    fsubs f0, f0, f3
    lfs f3, lbl_8087E6D8
    stfs f3, 0xe8(r31)
    stfs f0, 0xec(r31)
    stw r0, 0xf0(r31)
    stw r0, 0xf4(r31)
    stw r0, 0xf8(r31)
    stfs f2, 0x10(r1)
    stw r0, 0xfc(r31)
lbl_fn_805A2244_00001160:
    stw r31, lbl_8087F9F0
lbl_fn_805A2244_00001164:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F9F0
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A2408(void)
{
    nofralloc
    cmpwi r3, 0x2
    bne lbl_fn_805A2408_000011A8
    cmpwi r4, 0x21
    beq lbl_fn_805A2408_000011A0
    cmpwi r4, 0x3f
    beq lbl_fn_805A2408_000011A0
    cmpwi r4, 0x3e7
    bne lbl_fn_805A2408_000011A8
lbl_fn_805A2408_000011A0:
    li r3, 0x1
    blr
lbl_fn_805A2408_000011A8:
    li r3, 0x0
    blr
}

asm void fn_805A2438(void)
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
    beq lbl_fn_805A2438_0000126C
    lwz r0, 0xf8(r3)
    lis r4, lbl_80797330@ha
    addi r4, r4, lbl_80797330@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2438_00001248
    lwz r4, 0xf4(r3)
    mr r3, r0
    cmpwi r4, 0x0
    ble lbl_fn_805A2438_00001200
    b lbl_fn_805A2438_00001230
lbl_fn_805A2438_00001200:
    lwz r0, 0x48(r30)
    li r4, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A2438_00001220
    lwz r0, 0xfc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805A2438_00001220
    li r4, 0x1
lbl_fn_805A2438_00001220:
    neg r0, r4
    or r0, r0, r4
    srawi r0, r0, 31
    rlwinm r4, r0, 0, 26, 29
lbl_fn_805A2438_00001230:
    bl fn_8004B1EC
    lwz r3, 0xf8(r30)
    addi r3, r3, 0x8
    bl fn_800CB480
    li r0, 0x0
    stw r0, 0xf8(r30)
lbl_fn_805A2438_00001248:
    li r0, 0x0
    stw r0, lbl_8087F9F0
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_805A2438_0000126C
    mr r3, r30
    bl dtor_80084684
lbl_fn_805A2438_0000126C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A2510(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    lwz r4, 0xf8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805A2510_00001D24
    lwz r0, 0xfc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001410
    mr r3, r4
    bl fn_8004B0E4
    cmpwi r3, 0x0
    bne lbl_fn_805A2510_00001D24
    li r30, 0x0
    stw r30, 0xfc(r31)
    lwz r3, 0xf8(r31)
    li r4, 0x3c
    lfs f1, lbl_80888228
    bl fn_8004B158
    lwz r0, 0x48(r31)
    cmpwi r0, 0x1
    bne lbl_fn_805A2510_000013D0
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_805A2510_000013D0
    lwz r0, 0xf0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001374
    lwz r0, 0x18c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A2510_000013D0
    lwz r4, 0xf4(r31)
    cmpwi r4, 0x0
    ble lbl_fn_805A2510_00001330
    b lbl_fn_805A2510_0000135C
lbl_fn_805A2510_00001330:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x1
    bne lbl_fn_805A2510_0000134C
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A2510_0000134C
    li r30, 0x1
lbl_fn_805A2510_0000134C:
    neg r0, r30
    or r0, r0, r30
    srawi r0, r0, 31
    rlwinm r4, r0, 0, 26, 29
lbl_fn_805A2510_0000135C:
    lwz r3, lbl_8087F418
    li r0, 0x1
    stw r0, 0x18c(r3)
    lfs f1, 0x190(r3)
    bl fn_803605EC
    b lbl_fn_805A2510_000013D0
lbl_fn_805A2510_00001374:
    lwz r0, 0x18c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_000013D0
    lwz r4, 0xf4(r31)
    cmpwi r4, 0x0
    ble lbl_fn_805A2510_00001390
    b lbl_fn_805A2510_000013BC
lbl_fn_805A2510_00001390:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x1
    bne lbl_fn_805A2510_000013AC
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A2510_000013AC
    li r30, 0x1
lbl_fn_805A2510_000013AC:
    neg r0, r30
    or r0, r0, r30
    srawi r0, r0, 31
    rlwinm r4, r0, 0, 26, 29
lbl_fn_805A2510_000013BC:
    lwz r3, lbl_8087F418
    li r0, 0x0
    stw r0, 0x18c(r3)
    lfs f1, 0x188(r3)
    bl fn_803605EC
lbl_fn_805A2510_000013D0:
    lwz r3, 0xf8(r31)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001D24
    lwz r3, 0x8(r3)
    li r4, 0x0
    lfs f1, lbl_80888224
    li r5, 0x0
    bl fn_800CAC48
    lwz r3, 0xf8(r31)
    li r4, 0x1
    lfs f1, lbl_80888224
    li r5, 0x0
    lwz r3, 0x8(r3)
    bl fn_800CAC48
    b lbl_fn_805A2510_00001D24
lbl_fn_805A2510_00001410:
    lbz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_000016CC
    lfs f0, 0x50(r3)
    lfs f5, 0x58(r3)
    lfs f3, lbl_80888224
    fadds f4, f0, f5
    fcmpo cr0, f5, f3
    stfs f4, 0x50(r3)
    cror eq, gt, eq
    bne lbl_fn_805A2510_00001584
    fcmpo cr0, f4, f3
    bge lbl_fn_805A2510_0000145C
    psq_l f1, 0x60(r3), 0, 0
    lfs f2, 0x68(r3)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    stfs f3, 0x50(r3)
    b lbl_fn_805A2510_000016CC
lbl_fn_805A2510_0000145C:
    lfs f0, 0x54(r3)
    fcmpo cr0, f4, f0
    bge lbl_fn_805A2510_00001540
    fdivs f9, f4, f0
    lfs f0, 0x74(r3)
    lfs f8, 0x68(r3)
    addi r6, r1, 0x2c
    lfs f3, 0x70(r3)
    addi r7, r1, 0x20
    fsubs f13, f0, f8
    lfs f7, 0x64(r3)
    lfs f0, 0x6c(r3)
    addi r5, r1, 0x44
    fsubs f12, f3, f7
    lfs f6, 0x60(r3)
    fmuls f10, f13, f9
    lfs f4, 0x80(r3)
    fsubs f11, f0, f6
    lfs f3, 0x7c(r3)
    fmuls f5, f12, f9
    lfs f0, 0x78(r3)
    fmr f2, f10
    stfs f5, 0x30(r1)
    fmuls f9, f11, f9
    addi r4, r1, 0x8
    stfs f2, 0x28(r1)
    frsp f5, f2
    stfs f9, 0x2c(r1)
    fadds f9, f5, f8
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    fsubs f8, f9, f4
    lfs f5, 0x24(r1)
    lfs f4, 0x20(r1)
    fadds f5, f5, f7
    stfs f11, 0x38(r1)
    fadds f4, f4, f6
    fmr f2, f8
    stfs f5, 0xc(r1)
    fsubs f3, f5, f3
    fsubs f0, f4, f0
    stfs f2, 0x8c(r3)
    fmr f2, f9
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x8(r1)
    psq_st f1, 0x84(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f12, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f10, 0x34(r1)
    stfs f9, 0x10(r1)
    stfs f8, 0x4c(r1)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    b lbl_fn_805A2510_000016CC
lbl_fn_805A2510_00001540:
    fcmpo cr0, f5, f3
    cror eq, gt, eq
    bne lbl_fn_805A2510_00001564
    psq_l f1, 0x6c(r3), 0, 0
    lfs f2, 0x74(r3)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    stfs f0, 0x50(r3)
    b lbl_fn_805A2510_00001578
lbl_fn_805A2510_00001564:
    psq_l f1, 0x60(r3), 0, 0
    lfs f2, 0x68(r3)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    stfs f3, 0x50(r3)
lbl_fn_805A2510_00001578:
    li r0, 0x0
    stb r0, 0x5c(r3)
    b lbl_fn_805A2510_000016CC
lbl_fn_805A2510_00001584:
    fcmpo cr0, f4, f3
    bge lbl_fn_805A2510_000015D4
    fcmpo cr0, f5, f3
    cror eq, gt, eq
    bne lbl_fn_805A2510_000015B4
    psq_l f1, 0x6c(r3), 0, 0
    lfs f2, 0x74(r3)
    lfs f0, 0x54(r3)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    stfs f0, 0x50(r3)
    b lbl_fn_805A2510_000015C8
lbl_fn_805A2510_000015B4:
    psq_l f1, 0x60(r3), 0, 0
    lfs f2, 0x68(r3)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    stfs f3, 0x50(r3)
lbl_fn_805A2510_000015C8:
    li r0, 0x0
    stb r0, 0x5c(r3)
    b lbl_fn_805A2510_000016CC
lbl_fn_805A2510_000015D4:
    lfs f0, 0x54(r3)
    fcmpo cr0, f4, f0
    bge lbl_fn_805A2510_000016B8
    fdivs f9, f4, f0
    lfs f0, 0x74(r3)
    lfs f8, 0x68(r3)
    addi r6, r1, 0x5c
    lfs f3, 0x70(r3)
    addi r7, r1, 0x50
    fsubs f13, f0, f8
    lfs f7, 0x64(r3)
    lfs f0, 0x6c(r3)
    addi r5, r1, 0x74
    fsubs f12, f3, f7
    lfs f6, 0x60(r3)
    fmuls f10, f13, f9
    lfs f4, 0x80(r3)
    fsubs f11, f0, f6
    lfs f3, 0x7c(r3)
    fmuls f5, f12, f9
    lfs f0, 0x78(r3)
    fmr f2, f10
    stfs f5, 0x60(r1)
    fmuls f9, f11, f9
    addi r4, r1, 0x14
    stfs f2, 0x58(r1)
    frsp f5, f2
    stfs f9, 0x5c(r1)
    fadds f9, f5, f8
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    fsubs f8, f9, f4
    lfs f5, 0x54(r1)
    lfs f4, 0x50(r1)
    fadds f5, f5, f7
    stfs f11, 0x68(r1)
    fadds f4, f4, f6
    fmr f2, f8
    stfs f5, 0x18(r1)
    fsubs f3, f5, f3
    fsubs f0, f4, f0
    stfs f2, 0x8c(r3)
    fmr f2, f9
    stfs f0, 0x74(r1)
    stfs f3, 0x78(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x14(r1)
    psq_st f1, 0x84(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f12, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f10, 0x64(r1)
    stfs f9, 0x1c(r1)
    stfs f8, 0x7c(r1)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    b lbl_fn_805A2510_000016CC
lbl_fn_805A2510_000016B8:
    psq_l f1, 0x6c(r3), 0, 0
    lfs f2, 0x74(r3)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    stfs f0, 0x50(r3)
lbl_fn_805A2510_000016CC:
    lbz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001800
    lfs f0, 0x90(r3)
    lfs f5, 0x98(r3)
    lfs f4, lbl_80888224
    fadds f0, f0, f5
    fcmpo cr0, f5, f4
    stfs f0, 0x90(r3)
    cror eq, gt, eq
    bne lbl_fn_805A2510_0000177C
    fcmpo cr0, f0, f4
    bge lbl_fn_805A2510_00001710
    lfs f0, 0xa0(r3)
    stfs f0, 0xa8(r3)
    stfs f4, 0x90(r3)
    b lbl_fn_805A2510_00001800
lbl_fn_805A2510_00001710:
    lfs f3, 0x94(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_805A2510_00001748
    fdivs f5, f0, f3
    lfs f3, 0xa4(r3)
    lfs f4, 0xa0(r3)
    lfs f0, 0xa8(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0xa8(r3)
    fsubs f0, f3, f0
    stfs f0, 0xac(r3)
    b lbl_fn_805A2510_00001800
lbl_fn_805A2510_00001748:
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_805A2510_00001764
    lfs f0, 0xa4(r3)
    stfs f0, 0xa8(r3)
    stfs f3, 0x90(r3)
    b lbl_fn_805A2510_00001770
lbl_fn_805A2510_00001764:
    lfs f0, 0xa0(r3)
    stfs f0, 0xa8(r3)
    stfs f4, 0x90(r3)
lbl_fn_805A2510_00001770:
    li r0, 0x0
    stb r0, 0x9c(r3)
    b lbl_fn_805A2510_00001800
lbl_fn_805A2510_0000177C:
    fcmpo cr0, f0, f4
    bge lbl_fn_805A2510_000017BC
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_805A2510_000017A4
    lfs f3, 0xa4(r3)
    lfs f0, 0x94(r3)
    stfs f3, 0xa8(r3)
    stfs f0, 0x90(r3)
    b lbl_fn_805A2510_000017B0
lbl_fn_805A2510_000017A4:
    lfs f0, 0xa0(r3)
    stfs f0, 0xa8(r3)
    stfs f4, 0x90(r3)
lbl_fn_805A2510_000017B0:
    li r0, 0x0
    stb r0, 0x9c(r3)
    b lbl_fn_805A2510_00001800
lbl_fn_805A2510_000017BC:
    lfs f3, 0x94(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_805A2510_000017F4
    fdivs f5, f0, f3
    lfs f3, 0xa4(r3)
    lfs f4, 0xa0(r3)
    lfs f0, 0xa8(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0xa8(r3)
    fsubs f0, f3, f0
    stfs f0, 0xac(r3)
    b lbl_fn_805A2510_00001800
lbl_fn_805A2510_000017F4:
    lfs f0, 0xa4(r3)
    stfs f0, 0xa8(r3)
    stfs f3, 0x90(r3)
lbl_fn_805A2510_00001800:
    lbz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001934
    lfs f0, 0xd0(r3)
    lfs f5, 0xd8(r3)
    lfs f4, lbl_80888224
    fadds f0, f0, f5
    fcmpo cr0, f5, f4
    stfs f0, 0xd0(r3)
    cror eq, gt, eq
    bne lbl_fn_805A2510_000018B0
    fcmpo cr0, f0, f4
    bge lbl_fn_805A2510_00001844
    lfs f0, 0xe0(r3)
    stfs f0, 0xe8(r3)
    stfs f4, 0xd0(r3)
    b lbl_fn_805A2510_00001934
lbl_fn_805A2510_00001844:
    lfs f3, 0xd4(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_805A2510_0000187C
    fdivs f5, f0, f3
    lfs f3, 0xe4(r3)
    lfs f4, 0xe0(r3)
    lfs f0, 0xe8(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0xe8(r3)
    fsubs f0, f3, f0
    stfs f0, 0xec(r3)
    b lbl_fn_805A2510_00001934
lbl_fn_805A2510_0000187C:
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_805A2510_00001898
    lfs f0, 0xe4(r3)
    stfs f0, 0xe8(r3)
    stfs f3, 0xd0(r3)
    b lbl_fn_805A2510_000018A4
lbl_fn_805A2510_00001898:
    lfs f0, 0xe0(r3)
    stfs f0, 0xe8(r3)
    stfs f4, 0xd0(r3)
lbl_fn_805A2510_000018A4:
    li r0, 0x0
    stb r0, 0xdc(r3)
    b lbl_fn_805A2510_00001934
lbl_fn_805A2510_000018B0:
    fcmpo cr0, f0, f4
    bge lbl_fn_805A2510_000018F0
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_805A2510_000018D8
    lfs f3, 0xe4(r3)
    lfs f0, 0xd4(r3)
    stfs f3, 0xe8(r3)
    stfs f0, 0xd0(r3)
    b lbl_fn_805A2510_000018E4
lbl_fn_805A2510_000018D8:
    lfs f0, 0xe0(r3)
    stfs f0, 0xe8(r3)
    stfs f4, 0xd0(r3)
lbl_fn_805A2510_000018E4:
    li r0, 0x0
    stb r0, 0xdc(r3)
    b lbl_fn_805A2510_00001934
lbl_fn_805A2510_000018F0:
    lfs f3, 0xd4(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_805A2510_00001928
    fdivs f5, f0, f3
    lfs f3, 0xe4(r3)
    lfs f4, 0xe0(r3)
    lfs f0, 0xe8(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0xe8(r3)
    fsubs f0, f3, f0
    stfs f0, 0xec(r3)
    b lbl_fn_805A2510_00001934
lbl_fn_805A2510_00001928:
    lfs f0, 0xe4(r3)
    stfs f0, 0xe8(r3)
    stfs f3, 0xd0(r3)
lbl_fn_805A2510_00001934:
    lbz r0, 0xbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001A68
    lfs f0, 0xb0(r3)
    lfs f5, 0xb8(r3)
    lfs f4, lbl_80888224
    fadds f0, f0, f5
    fcmpo cr0, f5, f4
    stfs f0, 0xb0(r3)
    cror eq, gt, eq
    bne lbl_fn_805A2510_000019E4
    fcmpo cr0, f0, f4
    bge lbl_fn_805A2510_00001978
    lfs f0, 0xc0(r3)
    stfs f0, 0xc8(r3)
    stfs f4, 0xb0(r3)
    b lbl_fn_805A2510_00001A68
lbl_fn_805A2510_00001978:
    lfs f3, 0xb4(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_805A2510_000019B0
    fdivs f5, f0, f3
    lfs f3, 0xc4(r3)
    lfs f4, 0xc0(r3)
    lfs f0, 0xc8(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0xc8(r3)
    fsubs f0, f3, f0
    stfs f0, 0xcc(r3)
    b lbl_fn_805A2510_00001A68
lbl_fn_805A2510_000019B0:
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_805A2510_000019CC
    lfs f0, 0xc4(r3)
    stfs f0, 0xc8(r3)
    stfs f3, 0xb0(r3)
    b lbl_fn_805A2510_000019D8
lbl_fn_805A2510_000019CC:
    lfs f0, 0xc0(r3)
    stfs f0, 0xc8(r3)
    stfs f4, 0xb0(r3)
lbl_fn_805A2510_000019D8:
    li r0, 0x0
    stb r0, 0xbc(r3)
    b lbl_fn_805A2510_00001A68
lbl_fn_805A2510_000019E4:
    fcmpo cr0, f0, f4
    bge lbl_fn_805A2510_00001A24
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_805A2510_00001A0C
    lfs f3, 0xc4(r3)
    lfs f0, 0xb4(r3)
    stfs f3, 0xc8(r3)
    stfs f0, 0xb0(r3)
    b lbl_fn_805A2510_00001A18
lbl_fn_805A2510_00001A0C:
    lfs f0, 0xc0(r3)
    stfs f0, 0xc8(r3)
    stfs f4, 0xb0(r3)
lbl_fn_805A2510_00001A18:
    li r0, 0x0
    stb r0, 0xbc(r3)
    b lbl_fn_805A2510_00001A68
lbl_fn_805A2510_00001A24:
    lfs f3, 0xb4(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_805A2510_00001A5C
    fdivs f5, f0, f3
    lfs f3, 0xc4(r3)
    lfs f4, 0xc0(r3)
    lfs f0, 0xc8(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0xc8(r3)
    fsubs f0, f3, f0
    stfs f0, 0xcc(r3)
    b lbl_fn_805A2510_00001A68
lbl_fn_805A2510_00001A5C:
    lfs f0, 0xc4(r3)
    stfs f0, 0xc8(r3)
    stfs f3, 0xb0(r3)
lbl_fn_805A2510_00001A68:
    lwz r4, 0xf8(r3)
    lwzu r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001D18
    mr r3, r4
    addi r4, r31, 0x78
    bl fn_800CB6E4
    lwz r3, 0xf8(r31)
    li r4, 0x1
    lfs f1, 0xa8(r31)
    lwz r3, 0x8(r3)
    bl fn_800CA798
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_805A2510_00001AAC
    lwz r30, 0x48(r3)
    b lbl_fn_805A2510_00001AB0
lbl_fn_805A2510_00001AAC:
    li r30, 0x0
lbl_fn_805A2510_00001AB0:
    cmpwi r30, 0x0
    beq lbl_fn_805A2510_00001D24
    lwz r3, 0xf8(r31)
    addi r3, r3, 0x8
    bl fn_800CB6C4
    lfs f4, 0x8(r3)
    lfs f0, 0x530(r30)
    lfs f3, 0x0(r3)
    fsubs f5, f4, f0
    lfs f0, 0x528(r30)
    lfs f4, 0x4(r3)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r30)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x8c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x90(r1)
    stfs f5, 0x94(r1)
    bl fn_8068B100
    frsp f31, f1
    lfs f0, lbl_80888224
    fcmpo cr0, f31, f0
    ble lbl_fn_805A2510_00001B1C
    addi r3, r1, 0x8c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_805A2510_00001B1C:
    lfs f3, lbl_80888224
    addi r3, r1, 0x98
    lfs f0, lbl_80888220
    li r4, 0x79
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x8c
    addi r4, r1, 0x80
    bl fn_805F9990
    lfs f3, 0xa8(r31)
    lfs f0, lbl_80888224
    fdivs f3, f31, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_805A2510_00001B74
    b lbl_fn_805A2510_00001B78
lbl_fn_805A2510_00001B74:
    fmr f3, f0
lbl_fn_805A2510_00001B78:
    lfs f4, lbl_80888220
    fcmpo cr0, f3, f4
    bge lbl_fn_805A2510_00001BA0
    lfs f3, 0xa8(r31)
    lfs f0, lbl_80888224
    fdivs f4, f31, f3
    fcmpo cr0, f4, f0
    ble lbl_fn_805A2510_00001B9C
    b lbl_fn_805A2510_00001BA0
lbl_fn_805A2510_00001B9C:
    fmr f4, f0
lbl_fn_805A2510_00001BA0:
    lfs f5, lbl_80888220
    lwz r5, 0xf8(r31)
    lfs f0, 0xe8(r31)
    fsubs f4, f5, f4
    lfs f3, 0xc8(r31)
    lwz r0, 0x8(r5)
    fsubs f0, f0, f3
    cmpwi r0, 0x0
    fmadds f31, f4, f0, f3
    beq lbl_fn_805A2510_00001D24
    lwz r0, 0x4c(r31)
    lis r3, lbl_80763248@ha
    addi r3, r3, lbl_80763248@l
    slwi r0, r0, 4
    add r3, r3, r0
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001C88
    lfs f0, lbl_8088822C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805A2510_00001BFC
    b lbl_fn_805A2510_00001C48
lbl_fn_805A2510_00001BFC:
    lfs f0, lbl_80888230
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805A2510_00001C14
    lfs f5, lbl_80888234
    b lbl_fn_805A2510_00001C48
lbl_fn_805A2510_00001C14:
    lfs f0, lbl_80888238
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805A2510_00001C2C
    lfs f5, lbl_8088823C
    b lbl_fn_805A2510_00001C48
lbl_fn_805A2510_00001C2C:
    lfs f0, lbl_8088823C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_805A2510_00001C44
    lfs f5, lbl_80888240
    b lbl_fn_805A2510_00001C48
lbl_fn_805A2510_00001C44:
    lfs f5, lbl_80888224
lbl_fn_805A2510_00001C48:
    lfs f0, lbl_80888220
    li r4, 0x0
    lwz r3, 0x8(r5)
    li r5, 0x3c
    fsubs f30, f0, f5
    fmuls f5, f5, f31
    fmuls f30, f30, f31
    fmr f1, f5
    bl fn_800CAC48
    lwz r3, 0xf8(r31)
    fmr f1, f30
    li r4, 0x1
    li r5, 0x3c
    lwz r3, 0x8(r3)
    bl fn_800CAC48
    b lbl_fn_805A2510_00001D24
lbl_fn_805A2510_00001C88:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001CAC
    fmr f1, f31
    lwz r3, 0x8(r5)
    li r4, 0x0
    li r5, 0x3c
    bl fn_800CAC48
    b lbl_fn_805A2510_00001CC0
lbl_fn_805A2510_00001CAC:
    lwz r3, 0x8(r5)
    li r4, 0x0
    lfs f1, lbl_80888224
    li r5, 0x3c
    bl fn_800CAC48
lbl_fn_805A2510_00001CC0:
    lwz r0, 0x4c(r31)
    lis r3, lbl_80763248@ha
    addi r3, r3, lbl_80763248@l
    slwi r0, r0, 4
    add r3, r3, r0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2510_00001CFC
    lwz r3, 0xf8(r31)
    fmr f1, f31
    li r4, 0x1
    li r5, 0x3c
    lwz r3, 0x8(r3)
    bl fn_800CAC48
    b lbl_fn_805A2510_00001D24
lbl_fn_805A2510_00001CFC:
    lwz r3, 0xf8(r31)
    li r4, 0x1
    lfs f1, lbl_80888224
    li r5, 0x3c
    lwz r3, 0x8(r3)
    bl fn_800CAC48
    b lbl_fn_805A2510_00001D24
lbl_fn_805A2510_00001D18:
    li r0, 0x0
    stw r0, 0x48(r3)
    stw r0, 0xf8(r3)
lbl_fn_805A2510_00001D24:
    lwz r0, 0xf4(r1)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
