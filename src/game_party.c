#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8005C448(void);
extern void fn_8005E000(void);
extern void fn_8006C7FC(void);
extern void fn_8006C858(void);
extern void fn_8006CABC(void);
extern void fn_80083F50(void);
extern void fn_80084110(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D594C(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);

/* External data declarations */
extern u8 lbl_8073113C[];
extern u8 lbl_80731340[];
extern u8 lbl_807776C8[];
extern u8 lbl_807776F8[];
extern u8 lbl_80777728[];
extern u8 lbl_80777758[];
extern u8 lbl_80777788[];
extern u8 lbl_807777C0[];

/* Small data declarations */
extern u32 lbl_8087D728;
extern u32 lbl_8087D72C;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_80880998;
extern u32 lbl_8088099C;
extern u32 lbl_808809A0;
extern u32 lbl_808809A4;

/* Function declarations */
void fn_8005C594(void);
void fn_8005CAA4(void);
void fn_8005CC98(void);
void fn_8005CE94(void);
void fn_8005D08C(void);
void fn_8005D27C(void);
void fn_8005D464(void);
void fn_8005D664(void);
void fn_8005D84C(void);
void fn_8005DA34(void);
void fn_8005DC2C(void);
void fn_8005DC54(void);
void fn_8005DC74(void);
void fn_8005DC90(void);
void fn_8005DCA0(void);
void fn_8005DCB0(void);
void fn_8005DCB8(void);
void fn_8005DCC8(void);
void fn_8005DD0C(void);
void fn_8005DD1C(void);
void fn_8005DD60(void);
void fn_8005DE30(void);
void fn_8005DED8(void);
void fn_8005DF90(void);
void fn_8005DFC8(void);

asm void fn_8005C594(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_8005C594_000004F8
    addic. r0, r3, 0x4
    beq lbl_fn_8005C594_00000284
    lwz r28, 0x4(r3)
    cmpwi r28, 0x0
    beq lbl_fn_8005C594_00000284
    addic. r0, r28, 0x4
    beq lbl_fn_8005C594_00000158
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_8005C594_00000158
    addic. r0, r29, 0x4
    beq lbl_fn_8005C594_000000CC
    lwz r27, 0x4(r29)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_000000CC
    addic. r0, r27, 0x4
    beq lbl_fn_8005C594_00000090
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_00000090
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8005C594_00000090:
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_000000C4
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_000000C4
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8005C594_000000C4:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_000000CC:
    cmpwi r29, 0x0
    beq lbl_fn_8005C594_00000150
    lwz r26, 0x0(r29)
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_00000150
    addic. r0, r26, 0x4
    beq lbl_fn_8005C594_00000114
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_00000114
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_00000114:
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_00000148
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_00000148
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_00000148:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8005C594_00000150:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005C594_00000158:
    cmpwi r28, 0x0
    beq lbl_fn_8005C594_0000027C
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_8005C594_0000027C
    addic. r0, r29, 0x4
    beq lbl_fn_8005C594_000001F0
    lwz r26, 0x4(r29)
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_000001F0
    addic. r0, r26, 0x4
    beq lbl_fn_8005C594_000001B4
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_000001B4
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_000001B4:
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_000001E8
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_000001E8
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_000001E8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8005C594_000001F0:
    cmpwi r29, 0x0
    beq lbl_fn_8005C594_00000274
    lwz r26, 0x0(r29)
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_00000274
    addic. r0, r26, 0x4
    beq lbl_fn_8005C594_00000238
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_00000238
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_00000238:
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_0000026C
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_0000026C
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_0000026C:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8005C594_00000274:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005C594_0000027C:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8005C594_00000284:
    cmpwi r30, 0x0
    beq lbl_fn_8005C594_000004E8
    lwz r29, 0x0(r30)
    cmpwi r29, 0x0
    beq lbl_fn_8005C594_000004E8
    addic. r0, r29, 0x4
    beq lbl_fn_8005C594_000003BC
    lwz r28, 0x4(r29)
    cmpwi r28, 0x0
    beq lbl_fn_8005C594_000003BC
    addic. r0, r28, 0x4
    beq lbl_fn_8005C594_00000330
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_00000330
    addic. r0, r26, 0x4
    beq lbl_fn_8005C594_000002F4
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_000002F4
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_000002F4:
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_00000328
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_00000328
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_00000328:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8005C594_00000330:
    cmpwi r28, 0x0
    beq lbl_fn_8005C594_000003B4
    lwz r26, 0x0(r28)
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_000003B4
    addic. r0, r26, 0x4
    beq lbl_fn_8005C594_00000378
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_00000378
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_00000378:
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_000003AC
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_000003AC
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_000003AC:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8005C594_000003B4:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8005C594_000003BC:
    cmpwi r29, 0x0
    beq lbl_fn_8005C594_000004E0
    lwz r28, 0x0(r29)
    cmpwi r28, 0x0
    beq lbl_fn_8005C594_000004E0
    addic. r0, r28, 0x4
    beq lbl_fn_8005C594_00000454
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_00000454
    addic. r0, r26, 0x4
    beq lbl_fn_8005C594_00000418
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_00000418
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_00000418:
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_0000044C
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_0000044C
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_0000044C:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8005C594_00000454:
    cmpwi r28, 0x0
    beq lbl_fn_8005C594_000004D8
    lwz r26, 0x0(r28)
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_000004D8
    addic. r0, r26, 0x4
    beq lbl_fn_8005C594_0000049C
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_0000049C
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_0000049C:
    cmpwi r26, 0x0
    beq lbl_fn_8005C594_000004D0
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8005C594_000004D0
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8005C594_000004D0:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8005C594_000004D8:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8005C594_000004E0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005C594_000004E8:
    cmpwi r31, 0x0
    ble lbl_fn_8005C594_000004F8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005C594_000004F8:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005CAA4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x18
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005CAA4_00000580
    lfs f1, 0x14(r28)
    lis r4, lbl_80777758@ha
    lfs f0, 0x10(r28)
    li r0, 0x0
    addi r4, r4, lbl_80777758@l
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f1, 0x14(r3)
lbl_fn_8005CAA4_00000580:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    stw r3, 0x4(r28)
    beq lbl_fn_8005CAA4_000006E0
    addic. r0, r29, 0x4
    beq lbl_fn_8005CAA4_00000634
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005CAA4_00000634
    addic. r0, r30, 0x4
    beq lbl_fn_8005CAA4_000005E8
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CAA4_000005E8
    addic. r0, r31, 0x4
    beq lbl_fn_8005CAA4_000005CC
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CAA4_000005CC:
    cmpwi r31, 0x0
    beq lbl_fn_8005CAA4_000005E0
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CAA4_000005E0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CAA4_000005E8:
    cmpwi r30, 0x0
    beq lbl_fn_8005CAA4_0000062C
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CAA4_0000062C
    addic. r0, r31, 0x4
    beq lbl_fn_8005CAA4_00000610
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CAA4_00000610:
    cmpwi r31, 0x0
    beq lbl_fn_8005CAA4_00000624
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CAA4_00000624:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CAA4_0000062C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005CAA4_00000634:
    cmpwi r29, 0x0
    beq lbl_fn_8005CAA4_000006D8
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005CAA4_000006D8
    addic. r0, r30, 0x4
    beq lbl_fn_8005CAA4_0000068C
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CAA4_0000068C
    addic. r0, r31, 0x4
    beq lbl_fn_8005CAA4_00000670
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CAA4_00000670:
    cmpwi r31, 0x0
    beq lbl_fn_8005CAA4_00000684
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CAA4_00000684:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CAA4_0000068C:
    cmpwi r30, 0x0
    beq lbl_fn_8005CAA4_000006D0
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CAA4_000006D0
    addic. r0, r31, 0x4
    beq lbl_fn_8005CAA4_000006B4
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CAA4_000006B4:
    cmpwi r31, 0x0
    beq lbl_fn_8005CAA4_000006C8
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CAA4_000006C8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CAA4_000006D0:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005CAA4_000006D8:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005CAA4_000006E0:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x4(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005CC98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x18
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005CC98_0000077C
    lfs f1, 0x10(r28)
    lis r4, lbl_80777788@ha
    lfs f0, 0xc(r28)
    li r0, 0x0
    lfs f2, 0x14(r28)
    addi r4, r4, lbl_80777788@l
    fdivs f0, f0, f1
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f2, 0x14(r3)
lbl_fn_8005CC98_0000077C:
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    stw r3, 0x0(r28)
    beq lbl_fn_8005CC98_000008DC
    addic. r0, r29, 0x4
    beq lbl_fn_8005CC98_00000830
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005CC98_00000830
    addic. r0, r30, 0x4
    beq lbl_fn_8005CC98_000007E4
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CC98_000007E4
    addic. r0, r31, 0x4
    beq lbl_fn_8005CC98_000007C8
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CC98_000007C8:
    cmpwi r31, 0x0
    beq lbl_fn_8005CC98_000007DC
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CC98_000007DC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CC98_000007E4:
    cmpwi r30, 0x0
    beq lbl_fn_8005CC98_00000828
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CC98_00000828
    addic. r0, r31, 0x4
    beq lbl_fn_8005CC98_0000080C
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CC98_0000080C:
    cmpwi r31, 0x0
    beq lbl_fn_8005CC98_00000820
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CC98_00000820:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CC98_00000828:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005CC98_00000830:
    cmpwi r29, 0x0
    beq lbl_fn_8005CC98_000008D4
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005CC98_000008D4
    addic. r0, r30, 0x4
    beq lbl_fn_8005CC98_00000888
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CC98_00000888
    addic. r0, r31, 0x4
    beq lbl_fn_8005CC98_0000086C
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CC98_0000086C:
    cmpwi r31, 0x0
    beq lbl_fn_8005CC98_00000880
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CC98_00000880:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CC98_00000888:
    cmpwi r30, 0x0
    beq lbl_fn_8005CC98_000008CC
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CC98_000008CC
    addic. r0, r31, 0x4
    beq lbl_fn_8005CC98_000008B0
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CC98_000008B0:
    cmpwi r31, 0x0
    beq lbl_fn_8005CC98_000008C4
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CC98_000008C4:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CC98_000008CC:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005CC98_000008D4:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005CC98_000008DC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x0(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005CE94(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x18
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005CE94_00000974
    lfs f1, 0x10(r28)
    lis r4, lbl_80777788@ha
    lfs f2, 0x14(r28)
    li r0, 0x0
    fneg f0, f1
    addi r4, r4, lbl_80777788@l
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f2, 0x14(r3)
lbl_fn_8005CE94_00000974:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    stw r3, 0x4(r28)
    beq lbl_fn_8005CE94_00000AD4
    addic. r0, r29, 0x4
    beq lbl_fn_8005CE94_00000A28
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005CE94_00000A28
    addic. r0, r30, 0x4
    beq lbl_fn_8005CE94_000009DC
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CE94_000009DC
    addic. r0, r31, 0x4
    beq lbl_fn_8005CE94_000009C0
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CE94_000009C0:
    cmpwi r31, 0x0
    beq lbl_fn_8005CE94_000009D4
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CE94_000009D4:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CE94_000009DC:
    cmpwi r30, 0x0
    beq lbl_fn_8005CE94_00000A20
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CE94_00000A20
    addic. r0, r31, 0x4
    beq lbl_fn_8005CE94_00000A04
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CE94_00000A04:
    cmpwi r31, 0x0
    beq lbl_fn_8005CE94_00000A18
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CE94_00000A18:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CE94_00000A20:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005CE94_00000A28:
    cmpwi r29, 0x0
    beq lbl_fn_8005CE94_00000ACC
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005CE94_00000ACC
    addic. r0, r30, 0x4
    beq lbl_fn_8005CE94_00000A80
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CE94_00000A80
    addic. r0, r31, 0x4
    beq lbl_fn_8005CE94_00000A64
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CE94_00000A64:
    cmpwi r31, 0x0
    beq lbl_fn_8005CE94_00000A78
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CE94_00000A78:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CE94_00000A80:
    cmpwi r30, 0x0
    beq lbl_fn_8005CE94_00000AC4
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005CE94_00000AC4
    addic. r0, r31, 0x4
    beq lbl_fn_8005CE94_00000AA8
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CE94_00000AA8:
    cmpwi r31, 0x0
    beq lbl_fn_8005CE94_00000ABC
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005CE94_00000ABC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005CE94_00000AC4:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005CE94_00000ACC:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005CE94_00000AD4:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x4(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005D08C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x14
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005D08C_00000B64
    lfs f1, 0xc(r28)
    li r0, 0x0
    lis r4, lbl_807776F8@ha
    lfs f0, lbl_80880998
    stw r0, 0x0(r3)
    addi r4, r4, lbl_807776F8@l
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
lbl_fn_8005D08C_00000B64:
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    stw r3, 0x0(r28)
    beq lbl_fn_8005D08C_00000CC4
    addic. r0, r29, 0x4
    beq lbl_fn_8005D08C_00000C18
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D08C_00000C18
    addic. r0, r30, 0x4
    beq lbl_fn_8005D08C_00000BCC
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D08C_00000BCC
    addic. r0, r31, 0x4
    beq lbl_fn_8005D08C_00000BB0
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D08C_00000BB0:
    cmpwi r31, 0x0
    beq lbl_fn_8005D08C_00000BC4
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D08C_00000BC4:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D08C_00000BCC:
    cmpwi r30, 0x0
    beq lbl_fn_8005D08C_00000C10
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D08C_00000C10
    addic. r0, r31, 0x4
    beq lbl_fn_8005D08C_00000BF4
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D08C_00000BF4:
    cmpwi r31, 0x0
    beq lbl_fn_8005D08C_00000C08
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D08C_00000C08:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D08C_00000C10:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D08C_00000C18:
    cmpwi r29, 0x0
    beq lbl_fn_8005D08C_00000CBC
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D08C_00000CBC
    addic. r0, r30, 0x4
    beq lbl_fn_8005D08C_00000C70
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D08C_00000C70
    addic. r0, r31, 0x4
    beq lbl_fn_8005D08C_00000C54
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D08C_00000C54:
    cmpwi r31, 0x0
    beq lbl_fn_8005D08C_00000C68
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D08C_00000C68:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D08C_00000C70:
    cmpwi r30, 0x0
    beq lbl_fn_8005D08C_00000CB4
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D08C_00000CB4
    addic. r0, r31, 0x4
    beq lbl_fn_8005D08C_00000C98
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D08C_00000C98:
    cmpwi r31, 0x0
    beq lbl_fn_8005D08C_00000CAC
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D08C_00000CAC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D08C_00000CB4:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D08C_00000CBC:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005D08C_00000CC4:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x0(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005D27C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x10
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005D27C_00000D4C
    li r0, 0x0
    stw r0, 0x0(r3)
    lis r4, lbl_80777728@ha
    lfs f0, lbl_80880998
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80777728@l
    stw r4, 0x8(r3)
    stfs f0, 0xc(r3)
lbl_fn_8005D27C_00000D4C:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    stw r3, 0x4(r28)
    beq lbl_fn_8005D27C_00000EAC
    addic. r0, r29, 0x4
    beq lbl_fn_8005D27C_00000E00
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D27C_00000E00
    addic. r0, r30, 0x4
    beq lbl_fn_8005D27C_00000DB4
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D27C_00000DB4
    addic. r0, r31, 0x4
    beq lbl_fn_8005D27C_00000D98
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D27C_00000D98:
    cmpwi r31, 0x0
    beq lbl_fn_8005D27C_00000DAC
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D27C_00000DAC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D27C_00000DB4:
    cmpwi r30, 0x0
    beq lbl_fn_8005D27C_00000DF8
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D27C_00000DF8
    addic. r0, r31, 0x4
    beq lbl_fn_8005D27C_00000DDC
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D27C_00000DDC:
    cmpwi r31, 0x0
    beq lbl_fn_8005D27C_00000DF0
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D27C_00000DF0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D27C_00000DF8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D27C_00000E00:
    cmpwi r29, 0x0
    beq lbl_fn_8005D27C_00000EA4
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D27C_00000EA4
    addic. r0, r30, 0x4
    beq lbl_fn_8005D27C_00000E58
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D27C_00000E58
    addic. r0, r31, 0x4
    beq lbl_fn_8005D27C_00000E3C
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D27C_00000E3C:
    cmpwi r31, 0x0
    beq lbl_fn_8005D27C_00000E50
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D27C_00000E50:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D27C_00000E58:
    cmpwi r30, 0x0
    beq lbl_fn_8005D27C_00000E9C
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D27C_00000E9C
    addic. r0, r31, 0x4
    beq lbl_fn_8005D27C_00000E80
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D27C_00000E80:
    cmpwi r31, 0x0
    beq lbl_fn_8005D27C_00000E94
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D27C_00000E94:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D27C_00000E9C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D27C_00000EA4:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005D27C_00000EAC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x4(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005D464(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x18
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005D464_00000F4C
    lfs f2, 0x10(r28)
    lis r4, lbl_807776C8@ha
    lfs f1, 0xc(r28)
    li r0, 0x0
    lfs f0, lbl_8088099C
    addi r4, r4, lbl_807776C8@l
    stw r0, 0x0(r3)
    fmuls f1, f1, f0
    lfs f0, lbl_80880998
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f2, 0x10(r3)
    stfs f0, 0x14(r3)
lbl_fn_8005D464_00000F4C:
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    stw r3, 0x0(r28)
    beq lbl_fn_8005D464_000010AC
    addic. r0, r29, 0x4
    beq lbl_fn_8005D464_00001000
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D464_00001000
    addic. r0, r30, 0x4
    beq lbl_fn_8005D464_00000FB4
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D464_00000FB4
    addic. r0, r31, 0x4
    beq lbl_fn_8005D464_00000F98
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D464_00000F98:
    cmpwi r31, 0x0
    beq lbl_fn_8005D464_00000FAC
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D464_00000FAC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D464_00000FB4:
    cmpwi r30, 0x0
    beq lbl_fn_8005D464_00000FF8
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D464_00000FF8
    addic. r0, r31, 0x4
    beq lbl_fn_8005D464_00000FDC
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D464_00000FDC:
    cmpwi r31, 0x0
    beq lbl_fn_8005D464_00000FF0
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D464_00000FF0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D464_00000FF8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D464_00001000:
    cmpwi r29, 0x0
    beq lbl_fn_8005D464_000010A4
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D464_000010A4
    addic. r0, r30, 0x4
    beq lbl_fn_8005D464_00001058
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D464_00001058
    addic. r0, r31, 0x4
    beq lbl_fn_8005D464_0000103C
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D464_0000103C:
    cmpwi r31, 0x0
    beq lbl_fn_8005D464_00001050
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D464_00001050:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D464_00001058:
    cmpwi r30, 0x0
    beq lbl_fn_8005D464_0000109C
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D464_0000109C
    addic. r0, r31, 0x4
    beq lbl_fn_8005D464_00001080
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D464_00001080:
    cmpwi r31, 0x0
    beq lbl_fn_8005D464_00001094
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D464_00001094:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D464_0000109C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D464_000010A4:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005D464_000010AC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x0(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005D664(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x10
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005D664_00001134
    lfs f0, 0xc(r28)
    li r0, 0x0
    lis r4, lbl_80777728@ha
    stw r0, 0x0(r3)
    addi r4, r4, lbl_80777728@l
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f0, 0xc(r3)
lbl_fn_8005D664_00001134:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    stw r3, 0x4(r28)
    beq lbl_fn_8005D664_00001294
    addic. r0, r29, 0x4
    beq lbl_fn_8005D664_000011E8
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D664_000011E8
    addic. r0, r30, 0x4
    beq lbl_fn_8005D664_0000119C
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D664_0000119C
    addic. r0, r31, 0x4
    beq lbl_fn_8005D664_00001180
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D664_00001180:
    cmpwi r31, 0x0
    beq lbl_fn_8005D664_00001194
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D664_00001194:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D664_0000119C:
    cmpwi r30, 0x0
    beq lbl_fn_8005D664_000011E0
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D664_000011E0
    addic. r0, r31, 0x4
    beq lbl_fn_8005D664_000011C4
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D664_000011C4:
    cmpwi r31, 0x0
    beq lbl_fn_8005D664_000011D8
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D664_000011D8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D664_000011E0:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D664_000011E8:
    cmpwi r29, 0x0
    beq lbl_fn_8005D664_0000128C
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D664_0000128C
    addic. r0, r30, 0x4
    beq lbl_fn_8005D664_00001240
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D664_00001240
    addic. r0, r31, 0x4
    beq lbl_fn_8005D664_00001224
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D664_00001224:
    cmpwi r31, 0x0
    beq lbl_fn_8005D664_00001238
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D664_00001238:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D664_00001240:
    cmpwi r30, 0x0
    beq lbl_fn_8005D664_00001284
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D664_00001284
    addic. r0, r31, 0x4
    beq lbl_fn_8005D664_00001268
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D664_00001268:
    cmpwi r31, 0x0
    beq lbl_fn_8005D664_0000127C
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D664_0000127C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D664_00001284:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D664_0000128C:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005D664_00001294:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x4(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005D84C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x10
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005D84C_0000131C
    li r0, 0x0
    stw r0, 0x0(r3)
    lis r4, lbl_80777728@ha
    lfs f0, lbl_80880998
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80777728@l
    stw r4, 0x8(r3)
    stfs f0, 0xc(r3)
lbl_fn_8005D84C_0000131C:
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    stw r3, 0x0(r28)
    beq lbl_fn_8005D84C_0000147C
    addic. r0, r29, 0x4
    beq lbl_fn_8005D84C_000013D0
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D84C_000013D0
    addic. r0, r30, 0x4
    beq lbl_fn_8005D84C_00001384
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D84C_00001384
    addic. r0, r31, 0x4
    beq lbl_fn_8005D84C_00001368
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D84C_00001368:
    cmpwi r31, 0x0
    beq lbl_fn_8005D84C_0000137C
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D84C_0000137C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D84C_00001384:
    cmpwi r30, 0x0
    beq lbl_fn_8005D84C_000013C8
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D84C_000013C8
    addic. r0, r31, 0x4
    beq lbl_fn_8005D84C_000013AC
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D84C_000013AC:
    cmpwi r31, 0x0
    beq lbl_fn_8005D84C_000013C0
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D84C_000013C0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D84C_000013C8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D84C_000013D0:
    cmpwi r29, 0x0
    beq lbl_fn_8005D84C_00001474
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005D84C_00001474
    addic. r0, r30, 0x4
    beq lbl_fn_8005D84C_00001428
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D84C_00001428
    addic. r0, r31, 0x4
    beq lbl_fn_8005D84C_0000140C
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D84C_0000140C:
    cmpwi r31, 0x0
    beq lbl_fn_8005D84C_00001420
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D84C_00001420:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D84C_00001428:
    cmpwi r30, 0x0
    beq lbl_fn_8005D84C_0000146C
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005D84C_0000146C
    addic. r0, r31, 0x4
    beq lbl_fn_8005D84C_00001450
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D84C_00001450:
    cmpwi r31, 0x0
    beq lbl_fn_8005D84C_00001464
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005D84C_00001464:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005D84C_0000146C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005D84C_00001474:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005D84C_0000147C:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x0(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005DA34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8073113C@ha
    li r4, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8073113C@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x14
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8005DA34_00001514
    lfs f2, 0x10(r28)
    lis r4, lbl_807776F8@ha
    lfs f1, 0xc(r28)
    li r0, 0x0
    lfs f0, lbl_8088099C
    addi r4, r4, lbl_807776F8@l
    stw r0, 0x0(r3)
    fmuls f0, f1, f0
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f2, 0x10(r3)
lbl_fn_8005DA34_00001514:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    stw r3, 0x4(r28)
    beq lbl_fn_8005DA34_00001674
    addic. r0, r29, 0x4
    beq lbl_fn_8005DA34_000015C8
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005DA34_000015C8
    addic. r0, r30, 0x4
    beq lbl_fn_8005DA34_0000157C
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005DA34_0000157C
    addic. r0, r31, 0x4
    beq lbl_fn_8005DA34_00001560
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005DA34_00001560:
    cmpwi r31, 0x0
    beq lbl_fn_8005DA34_00001574
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005DA34_00001574:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005DA34_0000157C:
    cmpwi r30, 0x0
    beq lbl_fn_8005DA34_000015C0
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005DA34_000015C0
    addic. r0, r31, 0x4
    beq lbl_fn_8005DA34_000015A4
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005DA34_000015A4:
    cmpwi r31, 0x0
    beq lbl_fn_8005DA34_000015B8
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005DA34_000015B8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005DA34_000015C0:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005DA34_000015C8:
    cmpwi r29, 0x0
    beq lbl_fn_8005DA34_0000166C
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8005DA34_0000166C
    addic. r0, r30, 0x4
    beq lbl_fn_8005DA34_00001620
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005DA34_00001620
    addic. r0, r31, 0x4
    beq lbl_fn_8005DA34_00001604
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005DA34_00001604:
    cmpwi r31, 0x0
    beq lbl_fn_8005DA34_00001618
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005DA34_00001618:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005DA34_00001620:
    cmpwi r30, 0x0
    beq lbl_fn_8005DA34_00001664
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8005DA34_00001664
    addic. r0, r31, 0x4
    beq lbl_fn_8005DA34_00001648
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005DA34_00001648:
    cmpwi r31, 0x0
    beq lbl_fn_8005DA34_0000165C
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8005C594
lbl_fn_8005DA34_0000165C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8005DA34_00001664:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005DA34_0000166C:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8005DA34_00001674:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r3, 0x4(r28)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005DC2C(void)
{
    nofralloc
    lfs f3, 0xc(r3)
    lfs f2, 0x10(r3)
    lfs f0, 0x14(r3)
    fmuls f3, f3, f1
    fmuls f2, f2, f1
    fmuls f0, f0, f1
    stfs f3, 0xc(r3)
    stfs f2, 0x10(r3)
    stfs f0, 0x14(r3)
    blr
}

asm void fn_8005DC54(void)
{
    nofralloc
    lfs f0, 0x10(r3)
    fmuls f3, f1, f1
    lfs f2, 0xc(r3)
    fmuls f1, f0, f1
    lfs f0, 0x14(r3)
    fmadds f1, f2, f3, f1
    fadds f1, f0, f1
    blr
}

asm void fn_8005DC74(void)
{
    nofralloc
    lfs f2, 0xc(r3)
    lfs f0, 0x10(r3)
    fmuls f2, f2, f1
    fmuls f0, f0, f1
    stfs f2, 0xc(r3)
    stfs f0, 0x10(r3)
    blr
}

asm void fn_8005DC90(void)
{
    nofralloc
    lfs f2, 0xc(r3)
    lfs f0, 0x10(r3)
    fmadds f1, f2, f1, f0
    blr
}

asm void fn_8005DCA0(void)
{
    nofralloc
    lfs f0, 0xc(r3)
    fmuls f0, f0, f1
    stfs f0, 0xc(r3)
    blr
}

asm void fn_8005DCB0(void)
{
    nofralloc
    lfs f1, 0xc(r3)
    blr
}

asm void fn_8005DCB8(void)
{
    nofralloc
    lfs f0, 0xc(r3)
    fmuls f0, f0, f1
    stfs f0, 0xc(r3)
    blr
}

asm void fn_8005DCC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f2, 0x10(r3)
    lfs f0, 0x14(r3)
    stw r0, 0x14(r1)
    fmadds f1, f2, f1, f0
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8068A850
    frsp f1, f1
    lfs f0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005DD0C(void)
{
    nofralloc
    lfs f0, 0xc(r3)
    fmuls f0, f0, f1
    stfs f0, 0xc(r3)
    blr
}

asm void fn_8005DD1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f2, 0x10(r3)
    lfs f0, 0x14(r3)
    stw r0, 0x14(r1)
    fmadds f1, f2, f1, f0
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005DD60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8087EEB0
    cmpwi r0, 0x0
    bne lbl_fn_8005DD60_00001888
    lis r5, lbl_80731340@ha
    li r3, 0x504
    addi r5, r5, lbl_80731340@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8005DD60_00001884
    lis r4, lbl_807777C0@ha
    li r0, 0x0
    addi r4, r4, lbl_807777C0@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    addi r3, r3, 0x10
    bl fn_800D5738
    addi r3, r31, 0x40
    bl fn_800D5738
    addi r3, r31, 0x70
    bl fn_800D5738
    li r0, 0x12
    stw r0, 0xa0(r31)
    lfs f1, lbl_808809A0
    stfs f1, 0xd0(r31)
    lfs f0, lbl_808809A4
    stfs f1, 0xc8(r31)
    stfs f1, 0xc4(r31)
    stfs f1, 0xc0(r31)
    stfs f1, 0xbc(r31)
    stfs f1, 0xb4(r31)
    stfs f1, 0xb0(r31)
    stfs f1, 0xac(r31)
    stfs f1, 0xa8(r31)
    stfs f0, 0xcc(r31)
    stfs f0, 0xb8(r31)
    stfs f0, 0xa4(r31)
lbl_fn_8005DD60_00001884:
    stw r31, lbl_8087EEB0
lbl_fn_8005DD60_00001888:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005DE30(void)
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
    beq lbl_fn_8005DE30_00001928
    lis r4, lbl_807777C0@ha
    addi r4, r4, lbl_807777C0@l
    stw r4, 0x0(r3)
    bl fn_8006C858
    addi r3, r30, 0x70
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x40
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x10
    li r4, -0x1
    bl fn_800D5808
    addic. r0, r30, 0x4
    beq lbl_fn_8005DE30_00001918
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8005DE30_00001918
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x8(r30)
lbl_fn_8005DE30_00001918:
    cmpwi r31, 0x0
    ble lbl_fn_8005DE30_00001928
    mr r3, r30
    bl dtor_80084684
lbl_fn_8005DE30_00001928:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005DED8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x20
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r1, 0x8
    bl fn_80083F50
    stw r30, 0x8(r29)
    mr r3, r30
    li r4, 0x6
    la r5, lbl_8087D72C
    la r6, lbl_8087D728
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4(r29)
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_80084110
    bl fn_8006C7FC
    lwz r3, lbl_8087EEC8
    mr r4, r31
    bl fn_8006CABC
    lis r31, lbl_80731340@ha
    addi r3, r29, 0x10
    addi r31, r31, lbl_80731340@l
    addi r4, r31, 0x1
    bl fn_800D594C
    addi r3, r29, 0x40
    addi r4, r31, 0x1b
    bl fn_800D594C
    addi r3, r29, 0x70
    addi r4, r31, 0x34
    bl fn_800D594C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005DF90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f6, lbl_808809A0
    mr r7, r6
    stw r0, 0x14(r1)
    li r6, 0x1
    lfs f8, lbl_808809A4
    fmr f7, f6
    stfs f8, 0x8(r1)
    bl fn_8005E000
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005DFC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f6, lbl_808809A0
    mr r7, r6
    stw r0, 0x14(r1)
    li r6, 0x1
    lfs f8, lbl_808809A4
    fmr f7, f6
    stfs f8, 0x8(r1)
    bl fn_8005E000
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
