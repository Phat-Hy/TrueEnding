#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_800D56C4(void);

/* External data declarations */
extern u8 lbl_807796F0[];
extern u8 lbl_807C75D0[];
extern u8 lbl_807C75D8[];

/* Small data declarations */

/* Function declarations */
void fn_800D3F28(void);
void fn_800D3FA4(void);
void fn_800D4280(void);
void fn_800D4558(void);
void fn_800D498C(void);
void fn_800D4DB8(void);
void fn_800D51EC(void);
void fn_800D5618(void);
void fn_800D5670(void);

asm void fn_800D3F28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_800D3F28_00000048
    beq lbl_fn_800D3F28_00000030
    mr r3, r31
    bl fn_800D56C4
lbl_fn_800D3F28_00000030:
    stw r30, 0x28(r31)
    lwz r0, 0x10(r30)
    lwz r3, 0x14(r30)
    stw r3, 0x34(r31)
    stw r0, 0x30(r31)
    b lbl_fn_800D3F28_00000064
lbl_fn_800D3F28_00000048:
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800D3F28_00000064
    li r0, 0x0
    stw r0, 0x28(r3)
    stw r0, 0x34(r3)
    stw r0, 0x30(r3)
lbl_fn_800D3F28_00000064:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D3FA4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r28, 0x18(r3)
    cmpwi r28, 0x0
    beq lbl_fn_800D3FA4_00000334
    lwz r0, 0x38(r28)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D3FA4_000000C0
    li r3, 0x0
    b lbl_fn_800D3FA4_00000338
lbl_fn_800D3FA4_000000C0:
    lwz r31, 0x18(r28)
    cmpwi r31, 0x0
    beq lbl_fn_800D3FA4_000001F4
    beq lbl_fn_800D3FA4_000000D8
    mr r3, r31
    bl fn_800D56C4
lbl_fn_800D3FA4_000000D8:
    lwz r0, 0x38(r31)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D3FA4_000000F4
    li r3, 0x0
    b lbl_fn_800D3FA4_000001F4
lbl_fn_800D3FA4_000000F4:
    lwz r30, 0x18(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800D3FA4_00000170
    beq lbl_fn_800D3FA4_0000010C
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3FA4_0000010C:
    lwz r0, 0x38(r30)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D3FA4_00000128
    li r3, 0x0
    b lbl_fn_800D3FA4_00000170
lbl_fn_800D3FA4_00000128:
    lwz r29, 0x18(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D3FA4_00000148
    beq lbl_fn_800D3FA4_00000140
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3FA4_00000140:
    mr r3, r29
    bl fn_800D4280
lbl_fn_800D3FA4_00000148:
    cmpwi r3, 0x0
    beq lbl_fn_800D3FA4_00000170
    lwz r29, 0x1c(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D3FA4_00000170
    beq lbl_fn_800D3FA4_00000168
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3FA4_00000168:
    mr r3, r29
    bl fn_800D4280
lbl_fn_800D3FA4_00000170:
    cmpwi r3, 0x0
    beq lbl_fn_800D3FA4_000001F4
    lwz r29, 0x1c(r31)
    cmpwi r29, 0x0
    beq lbl_fn_800D3FA4_000001F4
    beq lbl_fn_800D3FA4_00000190
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3FA4_00000190:
    lwz r0, 0x38(r29)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D3FA4_000001AC
    li r3, 0x0
    b lbl_fn_800D3FA4_000001F4
lbl_fn_800D3FA4_000001AC:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D3FA4_000001CC
    beq lbl_fn_800D3FA4_000001C4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3FA4_000001C4:
    mr r3, r30
    bl fn_800D4280
lbl_fn_800D3FA4_000001CC:
    cmpwi r3, 0x0
    beq lbl_fn_800D3FA4_000001F4
    lwz r29, 0x1c(r29)
    cmpwi r29, 0x0
    beq lbl_fn_800D3FA4_000001F4
    beq lbl_fn_800D3FA4_000001EC
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3FA4_000001EC:
    mr r3, r29
    bl fn_800D4280
lbl_fn_800D3FA4_000001F4:
    cmpwi r3, 0x0
    beq lbl_fn_800D3FA4_00000338
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D3FA4_00000338
    beq lbl_fn_800D3FA4_00000214
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3FA4_00000214:
    lwz r0, 0x38(r29)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D3FA4_00000230
    li r3, 0x0
    b lbl_fn_800D3FA4_00000338
lbl_fn_800D3FA4_00000230:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D3FA4_000002AC
    beq lbl_fn_800D3FA4_00000248
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3FA4_00000248:
    lwz r0, 0x38(r30)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D3FA4_00000264
    li r3, 0x0
    b lbl_fn_800D3FA4_000002AC
lbl_fn_800D3FA4_00000264:
    lwz r31, 0x18(r30)
    cmpwi r31, 0x0
    beq lbl_fn_800D3FA4_00000284
    beq lbl_fn_800D3FA4_0000027C
    mr r3, r31
    bl fn_800D56C4
lbl_fn_800D3FA4_0000027C:
    mr r3, r31
    bl fn_800D4280
lbl_fn_800D3FA4_00000284:
    cmpwi r3, 0x0
    beq lbl_fn_800D3FA4_000002AC
    lwz r30, 0x1c(r30)
    cmpwi r30, 0x0
    beq lbl_fn_800D3FA4_000002AC
    beq lbl_fn_800D3FA4_000002A4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3FA4_000002A4:
    mr r3, r30
    bl fn_800D4280
lbl_fn_800D3FA4_000002AC:
    cmpwi r3, 0x0
    beq lbl_fn_800D3FA4_00000338
    lwz r29, 0x1c(r29)
    cmpwi r29, 0x0
    beq lbl_fn_800D3FA4_00000338
    beq lbl_fn_800D3FA4_000002CC
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3FA4_000002CC:
    lwz r0, 0x38(r29)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D3FA4_000002E8
    li r3, 0x0
    b lbl_fn_800D3FA4_00000338
lbl_fn_800D3FA4_000002E8:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D3FA4_00000308
    beq lbl_fn_800D3FA4_00000300
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D3FA4_00000300:
    mr r3, r30
    bl fn_800D4280
lbl_fn_800D3FA4_00000308:
    cmpwi r3, 0x0
    beq lbl_fn_800D3FA4_00000338
    lwz r29, 0x1c(r29)
    cmpwi r29, 0x0
    beq lbl_fn_800D3FA4_00000338
    beq lbl_fn_800D3FA4_00000328
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D3FA4_00000328:
    mr r3, r29
    bl fn_800D4280
    b lbl_fn_800D3FA4_00000338
lbl_fn_800D3FA4_00000334:
    li r3, 0x1
lbl_fn_800D3FA4_00000338:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D4280(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D4280_00000394
    li r3, 0x0
    b lbl_fn_800D4280_00000610
lbl_fn_800D4280_00000394:
    lwz r31, 0x18(r3)
    cmpwi r31, 0x0
    beq lbl_fn_800D4280_000004CC
    beq lbl_fn_800D4280_000003AC
    mr r3, r31
    bl fn_800D56C4
lbl_fn_800D4280_000003AC:
    lwz r0, 0x38(r31)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D4280_000003C8
    li r3, 0x0
    b lbl_fn_800D4280_000004C8
lbl_fn_800D4280_000003C8:
    lwz r30, 0x18(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800D4280_00000444
    beq lbl_fn_800D4280_000003E0
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4280_000003E0:
    lwz r0, 0x38(r30)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D4280_000003FC
    li r3, 0x0
    b lbl_fn_800D4280_00000444
lbl_fn_800D4280_000003FC:
    lwz r29, 0x18(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D4280_0000041C
    beq lbl_fn_800D4280_00000414
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4280_00000414:
    mr r3, r29
    bl fn_800D4280
lbl_fn_800D4280_0000041C:
    cmpwi r3, 0x0
    beq lbl_fn_800D4280_00000444
    lwz r29, 0x1c(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D4280_00000444
    beq lbl_fn_800D4280_0000043C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4280_0000043C:
    mr r3, r29
    bl fn_800D4280
lbl_fn_800D4280_00000444:
    cmpwi r3, 0x0
    beq lbl_fn_800D4280_000004C8
    lwz r29, 0x1c(r31)
    cmpwi r29, 0x0
    beq lbl_fn_800D4280_000004C8
    beq lbl_fn_800D4280_00000464
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4280_00000464:
    lwz r0, 0x38(r29)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D4280_00000480
    li r3, 0x0
    b lbl_fn_800D4280_000004C8
lbl_fn_800D4280_00000480:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4280_000004A0
    beq lbl_fn_800D4280_00000498
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4280_00000498:
    mr r3, r30
    bl fn_800D4280
lbl_fn_800D4280_000004A0:
    cmpwi r3, 0x0
    beq lbl_fn_800D4280_000004C8
    lwz r29, 0x1c(r29)
    cmpwi r29, 0x0
    beq lbl_fn_800D4280_000004C8
    beq lbl_fn_800D4280_000004C0
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4280_000004C0:
    mr r3, r29
    bl fn_800D4280
lbl_fn_800D4280_000004C8:
    mr r4, r3
lbl_fn_800D4280_000004CC:
    cmpwi r4, 0x0
    beq lbl_fn_800D4280_0000060C
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4280_0000060C
    beq lbl_fn_800D4280_000004EC
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4280_000004EC:
    lwz r0, 0x38(r29)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D4280_00000508
    li r3, 0x0
    b lbl_fn_800D4280_00000608
lbl_fn_800D4280_00000508:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4280_00000584
    beq lbl_fn_800D4280_00000520
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4280_00000520:
    lwz r0, 0x38(r30)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D4280_0000053C
    li r3, 0x0
    b lbl_fn_800D4280_00000584
lbl_fn_800D4280_0000053C:
    lwz r31, 0x18(r30)
    cmpwi r31, 0x0
    beq lbl_fn_800D4280_0000055C
    beq lbl_fn_800D4280_00000554
    mr r3, r31
    bl fn_800D56C4
lbl_fn_800D4280_00000554:
    mr r3, r31
    bl fn_800D4280
lbl_fn_800D4280_0000055C:
    cmpwi r3, 0x0
    beq lbl_fn_800D4280_00000584
    lwz r30, 0x1c(r30)
    cmpwi r30, 0x0
    beq lbl_fn_800D4280_00000584
    beq lbl_fn_800D4280_0000057C
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4280_0000057C:
    mr r3, r30
    bl fn_800D4280
lbl_fn_800D4280_00000584:
    cmpwi r3, 0x0
    beq lbl_fn_800D4280_00000608
    lwz r29, 0x1c(r29)
    cmpwi r29, 0x0
    beq lbl_fn_800D4280_00000608
    beq lbl_fn_800D4280_000005A4
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4280_000005A4:
    lwz r0, 0x38(r29)
    li r3, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800D4280_000005C0
    li r3, 0x0
    b lbl_fn_800D4280_00000608
lbl_fn_800D4280_000005C0:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4280_000005E0
    beq lbl_fn_800D4280_000005D8
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4280_000005D8:
    mr r3, r30
    bl fn_800D4280
lbl_fn_800D4280_000005E0:
    cmpwi r3, 0x0
    beq lbl_fn_800D4280_00000608
    lwz r29, 0x1c(r29)
    cmpwi r29, 0x0
    beq lbl_fn_800D4280_00000608
    beq lbl_fn_800D4280_00000600
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4280_00000600:
    mr r3, r29
    bl fn_800D4280
lbl_fn_800D4280_00000608:
    mr r4, r3
lbl_fn_800D4280_0000060C:
    mr r3, r4
lbl_fn_800D4280_00000610:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D4558(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    lwz r31, 0x18(r3)
    cmpwi r31, 0x0
    beq lbl_fn_800D4558_00000A50
    lwz r30, 0x18(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800D4558_00000848
    beq lbl_fn_800D4558_00000664
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4558_00000664:
    lwz r29, 0x18(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D4558_00000750
    beq lbl_fn_800D4558_0000067C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4558_0000067C:
    lwz r28, 0x18(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800D4558_000006E0
    beq lbl_fn_800D4558_00000694
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4558_00000694:
    lwz r27, 0x18(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D4558_000006B4
    beq lbl_fn_800D4558_000006AC
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4558_000006AC:
    mr r3, r27
    bl fn_800D498C
lbl_fn_800D4558_000006B4:
    lwz r27, 0x1c(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D4558_000006D4
    beq lbl_fn_800D4558_000006CC
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4558_000006CC:
    mr r3, r27
    bl fn_800D498C
lbl_fn_800D4558_000006D4:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D4558_000006E0:
    lwz r27, 0x1c(r29)
    cmpwi r27, 0x0
    beq lbl_fn_800D4558_00000744
    beq lbl_fn_800D4558_000006F8
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4558_000006F8:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4558_00000718
    beq lbl_fn_800D4558_00000710
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4558_00000710:
    mr r3, r28
    bl fn_800D498C
lbl_fn_800D4558_00000718:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4558_00000738
    beq lbl_fn_800D4558_00000730
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4558_00000730:
    mr r3, r28
    bl fn_800D498C
lbl_fn_800D4558_00000738:
    lwz r0, 0x38(r27)
    ori r0, r0, 0x4
    stw r0, 0x38(r27)
lbl_fn_800D4558_00000744:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D4558_00000750:
    lwz r27, 0x1c(r30)
    cmpwi r27, 0x0
    beq lbl_fn_800D4558_0000083C
    beq lbl_fn_800D4558_00000768
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4558_00000768:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4558_000007CC
    beq lbl_fn_800D4558_00000780
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4558_00000780:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4558_000007A0
    beq lbl_fn_800D4558_00000798
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4558_00000798:
    mr r3, r29
    bl fn_800D498C
lbl_fn_800D4558_000007A0:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4558_000007C0
    beq lbl_fn_800D4558_000007B8
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4558_000007B8:
    mr r3, r29
    bl fn_800D498C
lbl_fn_800D4558_000007C0:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D4558_000007CC:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4558_00000830
    beq lbl_fn_800D4558_000007E4
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4558_000007E4:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4558_00000804
    beq lbl_fn_800D4558_000007FC
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4558_000007FC:
    mr r3, r29
    bl fn_800D498C
lbl_fn_800D4558_00000804:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4558_00000824
    beq lbl_fn_800D4558_0000081C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4558_0000081C:
    mr r3, r29
    bl fn_800D498C
lbl_fn_800D4558_00000824:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D4558_00000830:
    lwz r0, 0x38(r27)
    ori r0, r0, 0x4
    stw r0, 0x38(r27)
lbl_fn_800D4558_0000083C:
    lwz r0, 0x38(r30)
    ori r0, r0, 0x4
    stw r0, 0x38(r30)
lbl_fn_800D4558_00000848:
    lwz r27, 0x1c(r31)
    cmpwi r27, 0x0
    beq lbl_fn_800D4558_00000A44
    beq lbl_fn_800D4558_00000860
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4558_00000860:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4558_0000094C
    beq lbl_fn_800D4558_00000878
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4558_00000878:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4558_000008DC
    beq lbl_fn_800D4558_00000890
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4558_00000890:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4558_000008B0
    beq lbl_fn_800D4558_000008A8
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4558_000008A8:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D4558_000008B0:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4558_000008D0
    beq lbl_fn_800D4558_000008C8
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4558_000008C8:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D4558_000008D0:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D4558_000008DC:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4558_00000940
    beq lbl_fn_800D4558_000008F4
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4558_000008F4:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4558_00000914
    beq lbl_fn_800D4558_0000090C
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4558_0000090C:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D4558_00000914:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4558_00000934
    beq lbl_fn_800D4558_0000092C
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4558_0000092C:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D4558_00000934:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D4558_00000940:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D4558_0000094C:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4558_00000A38
    beq lbl_fn_800D4558_00000964
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4558_00000964:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4558_000009C8
    beq lbl_fn_800D4558_0000097C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4558_0000097C:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4558_0000099C
    beq lbl_fn_800D4558_00000994
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4558_00000994:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D4558_0000099C:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4558_000009BC
    beq lbl_fn_800D4558_000009B4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4558_000009B4:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D4558_000009BC:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D4558_000009C8:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4558_00000A2C
    beq lbl_fn_800D4558_000009E0
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4558_000009E0:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4558_00000A00
    beq lbl_fn_800D4558_000009F8
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4558_000009F8:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D4558_00000A00:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4558_00000A20
    beq lbl_fn_800D4558_00000A18
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4558_00000A18:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D4558_00000A20:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D4558_00000A2C:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D4558_00000A38:
    lwz r0, 0x38(r27)
    ori r0, r0, 0x4
    stw r0, 0x38(r27)
lbl_fn_800D4558_00000A44:
    lwz r0, 0x38(r31)
    ori r0, r0, 0x4
    stw r0, 0x38(r31)
lbl_fn_800D4558_00000A50:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D498C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    lwz r30, 0x18(r3)
    cmpwi r30, 0x0
    beq lbl_fn_800D498C_00000C74
    beq lbl_fn_800D498C_00000A90
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D498C_00000A90:
    lwz r29, 0x18(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D498C_00000B7C
    beq lbl_fn_800D498C_00000AA8
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D498C_00000AA8:
    lwz r28, 0x18(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800D498C_00000B0C
    beq lbl_fn_800D498C_00000AC0
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D498C_00000AC0:
    lwz r27, 0x18(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D498C_00000AE0
    beq lbl_fn_800D498C_00000AD8
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D498C_00000AD8:
    mr r3, r27
    bl fn_800D498C
lbl_fn_800D498C_00000AE0:
    lwz r27, 0x1c(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D498C_00000B00
    beq lbl_fn_800D498C_00000AF8
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D498C_00000AF8:
    mr r3, r27
    bl fn_800D498C
lbl_fn_800D498C_00000B00:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D498C_00000B0C:
    lwz r27, 0x1c(r29)
    cmpwi r27, 0x0
    beq lbl_fn_800D498C_00000B70
    beq lbl_fn_800D498C_00000B24
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D498C_00000B24:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D498C_00000B44
    beq lbl_fn_800D498C_00000B3C
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D498C_00000B3C:
    mr r3, r28
    bl fn_800D498C
lbl_fn_800D498C_00000B44:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D498C_00000B64
    beq lbl_fn_800D498C_00000B5C
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D498C_00000B5C:
    mr r3, r28
    bl fn_800D498C
lbl_fn_800D498C_00000B64:
    lwz r0, 0x38(r27)
    ori r0, r0, 0x4
    stw r0, 0x38(r27)
lbl_fn_800D498C_00000B70:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D498C_00000B7C:
    lwz r27, 0x1c(r30)
    cmpwi r27, 0x0
    beq lbl_fn_800D498C_00000C68
    beq lbl_fn_800D498C_00000B94
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D498C_00000B94:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D498C_00000BF8
    beq lbl_fn_800D498C_00000BAC
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D498C_00000BAC:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D498C_00000BCC
    beq lbl_fn_800D498C_00000BC4
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D498C_00000BC4:
    mr r3, r29
    bl fn_800D498C
lbl_fn_800D498C_00000BCC:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D498C_00000BEC
    beq lbl_fn_800D498C_00000BE4
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D498C_00000BE4:
    mr r3, r29
    bl fn_800D498C
lbl_fn_800D498C_00000BEC:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D498C_00000BF8:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D498C_00000C5C
    beq lbl_fn_800D498C_00000C10
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D498C_00000C10:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D498C_00000C30
    beq lbl_fn_800D498C_00000C28
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D498C_00000C28:
    mr r3, r29
    bl fn_800D498C
lbl_fn_800D498C_00000C30:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D498C_00000C50
    beq lbl_fn_800D498C_00000C48
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D498C_00000C48:
    mr r3, r29
    bl fn_800D498C
lbl_fn_800D498C_00000C50:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D498C_00000C5C:
    lwz r0, 0x38(r27)
    ori r0, r0, 0x4
    stw r0, 0x38(r27)
lbl_fn_800D498C_00000C68:
    lwz r0, 0x38(r30)
    ori r0, r0, 0x4
    stw r0, 0x38(r30)
lbl_fn_800D498C_00000C74:
    lwz r27, 0x1c(r31)
    cmpwi r27, 0x0
    beq lbl_fn_800D498C_00000E70
    beq lbl_fn_800D498C_00000C8C
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D498C_00000C8C:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D498C_00000D78
    beq lbl_fn_800D498C_00000CA4
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D498C_00000CA4:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D498C_00000D08
    beq lbl_fn_800D498C_00000CBC
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D498C_00000CBC:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D498C_00000CDC
    beq lbl_fn_800D498C_00000CD4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D498C_00000CD4:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D498C_00000CDC:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D498C_00000CFC
    beq lbl_fn_800D498C_00000CF4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D498C_00000CF4:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D498C_00000CFC:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D498C_00000D08:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D498C_00000D6C
    beq lbl_fn_800D498C_00000D20
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D498C_00000D20:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D498C_00000D40
    beq lbl_fn_800D498C_00000D38
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D498C_00000D38:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D498C_00000D40:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D498C_00000D60
    beq lbl_fn_800D498C_00000D58
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D498C_00000D58:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D498C_00000D60:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D498C_00000D6C:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D498C_00000D78:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D498C_00000E64
    beq lbl_fn_800D498C_00000D90
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D498C_00000D90:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D498C_00000DF4
    beq lbl_fn_800D498C_00000DA8
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D498C_00000DA8:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D498C_00000DC8
    beq lbl_fn_800D498C_00000DC0
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D498C_00000DC0:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D498C_00000DC8:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D498C_00000DE8
    beq lbl_fn_800D498C_00000DE0
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D498C_00000DE0:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D498C_00000DE8:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D498C_00000DF4:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D498C_00000E58
    beq lbl_fn_800D498C_00000E0C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D498C_00000E0C:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D498C_00000E2C
    beq lbl_fn_800D498C_00000E24
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D498C_00000E24:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D498C_00000E2C:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D498C_00000E4C
    beq lbl_fn_800D498C_00000E44
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D498C_00000E44:
    mr r3, r30
    bl fn_800D498C
lbl_fn_800D498C_00000E4C:
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800D498C_00000E58:
    lwz r0, 0x38(r28)
    ori r0, r0, 0x4
    stw r0, 0x38(r28)
lbl_fn_800D498C_00000E64:
    lwz r0, 0x38(r27)
    ori r0, r0, 0x4
    stw r0, 0x38(r27)
lbl_fn_800D498C_00000E70:
    lwz r0, 0x38(r31)
    ori r0, r0, 0x4
    stw r0, 0x38(r31)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D4DB8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    lwz r31, 0x18(r3)
    cmpwi r31, 0x0
    beq lbl_fn_800D4DB8_000012B0
    lwz r30, 0x18(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800D4DB8_000010A8
    beq lbl_fn_800D4DB8_00000EC4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4DB8_00000EC4:
    lwz r29, 0x18(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D4DB8_00000FB0
    beq lbl_fn_800D4DB8_00000EDC
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4DB8_00000EDC:
    lwz r28, 0x18(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800D4DB8_00000F40
    beq lbl_fn_800D4DB8_00000EF4
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4DB8_00000EF4:
    lwz r27, 0x18(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D4DB8_00000F14
    beq lbl_fn_800D4DB8_00000F0C
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4DB8_00000F0C:
    mr r3, r27
    bl fn_800D51EC
lbl_fn_800D4DB8_00000F14:
    lwz r27, 0x1c(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D4DB8_00000F34
    beq lbl_fn_800D4DB8_00000F2C
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4DB8_00000F2C:
    mr r3, r27
    bl fn_800D51EC
lbl_fn_800D4DB8_00000F34:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D4DB8_00000F40:
    lwz r27, 0x1c(r29)
    cmpwi r27, 0x0
    beq lbl_fn_800D4DB8_00000FA4
    beq lbl_fn_800D4DB8_00000F58
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4DB8_00000F58:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4DB8_00000F78
    beq lbl_fn_800D4DB8_00000F70
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4DB8_00000F70:
    mr r3, r28
    bl fn_800D51EC
lbl_fn_800D4DB8_00000F78:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4DB8_00000F98
    beq lbl_fn_800D4DB8_00000F90
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4DB8_00000F90:
    mr r3, r28
    bl fn_800D51EC
lbl_fn_800D4DB8_00000F98:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800D4DB8_00000FA4:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D4DB8_00000FB0:
    lwz r27, 0x1c(r30)
    cmpwi r27, 0x0
    beq lbl_fn_800D4DB8_0000109C
    beq lbl_fn_800D4DB8_00000FC8
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4DB8_00000FC8:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4DB8_0000102C
    beq lbl_fn_800D4DB8_00000FE0
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4DB8_00000FE0:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4DB8_00001000
    beq lbl_fn_800D4DB8_00000FF8
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4DB8_00000FF8:
    mr r3, r29
    bl fn_800D51EC
lbl_fn_800D4DB8_00001000:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4DB8_00001020
    beq lbl_fn_800D4DB8_00001018
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4DB8_00001018:
    mr r3, r29
    bl fn_800D51EC
lbl_fn_800D4DB8_00001020:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D4DB8_0000102C:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4DB8_00001090
    beq lbl_fn_800D4DB8_00001044
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4DB8_00001044:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4DB8_00001064
    beq lbl_fn_800D4DB8_0000105C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4DB8_0000105C:
    mr r3, r29
    bl fn_800D51EC
lbl_fn_800D4DB8_00001064:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4DB8_00001084
    beq lbl_fn_800D4DB8_0000107C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4DB8_0000107C:
    mr r3, r29
    bl fn_800D51EC
lbl_fn_800D4DB8_00001084:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D4DB8_00001090:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800D4DB8_0000109C:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r30)
lbl_fn_800D4DB8_000010A8:
    lwz r27, 0x1c(r31)
    cmpwi r27, 0x0
    beq lbl_fn_800D4DB8_000012A4
    beq lbl_fn_800D4DB8_000010C0
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D4DB8_000010C0:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4DB8_000011AC
    beq lbl_fn_800D4DB8_000010D8
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4DB8_000010D8:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4DB8_0000113C
    beq lbl_fn_800D4DB8_000010F0
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4DB8_000010F0:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4DB8_00001110
    beq lbl_fn_800D4DB8_00001108
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4DB8_00001108:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D4DB8_00001110:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4DB8_00001130
    beq lbl_fn_800D4DB8_00001128
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4DB8_00001128:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D4DB8_00001130:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D4DB8_0000113C:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4DB8_000011A0
    beq lbl_fn_800D4DB8_00001154
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4DB8_00001154:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4DB8_00001174
    beq lbl_fn_800D4DB8_0000116C
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4DB8_0000116C:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D4DB8_00001174:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4DB8_00001194
    beq lbl_fn_800D4DB8_0000118C
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4DB8_0000118C:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D4DB8_00001194:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D4DB8_000011A0:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D4DB8_000011AC:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D4DB8_00001298
    beq lbl_fn_800D4DB8_000011C4
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D4DB8_000011C4:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4DB8_00001228
    beq lbl_fn_800D4DB8_000011DC
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4DB8_000011DC:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4DB8_000011FC
    beq lbl_fn_800D4DB8_000011F4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4DB8_000011F4:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D4DB8_000011FC:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4DB8_0000121C
    beq lbl_fn_800D4DB8_00001214
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4DB8_00001214:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D4DB8_0000121C:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D4DB8_00001228:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D4DB8_0000128C
    beq lbl_fn_800D4DB8_00001240
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D4DB8_00001240:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4DB8_00001260
    beq lbl_fn_800D4DB8_00001258
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4DB8_00001258:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D4DB8_00001260:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D4DB8_00001280
    beq lbl_fn_800D4DB8_00001278
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D4DB8_00001278:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D4DB8_00001280:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D4DB8_0000128C:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D4DB8_00001298:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800D4DB8_000012A4:
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r31)
lbl_fn_800D4DB8_000012B0:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D51EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    lwz r30, 0x18(r3)
    cmpwi r30, 0x0
    beq lbl_fn_800D51EC_000014D4
    beq lbl_fn_800D51EC_000012F0
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D51EC_000012F0:
    lwz r29, 0x18(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800D51EC_000013DC
    beq lbl_fn_800D51EC_00001308
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D51EC_00001308:
    lwz r28, 0x18(r29)
    cmpwi r28, 0x0
    beq lbl_fn_800D51EC_0000136C
    beq lbl_fn_800D51EC_00001320
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D51EC_00001320:
    lwz r27, 0x18(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D51EC_00001340
    beq lbl_fn_800D51EC_00001338
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D51EC_00001338:
    mr r3, r27
    bl fn_800D51EC
lbl_fn_800D51EC_00001340:
    lwz r27, 0x1c(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D51EC_00001360
    beq lbl_fn_800D51EC_00001358
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D51EC_00001358:
    mr r3, r27
    bl fn_800D51EC
lbl_fn_800D51EC_00001360:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D51EC_0000136C:
    lwz r27, 0x1c(r29)
    cmpwi r27, 0x0
    beq lbl_fn_800D51EC_000013D0
    beq lbl_fn_800D51EC_00001384
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D51EC_00001384:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D51EC_000013A4
    beq lbl_fn_800D51EC_0000139C
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D51EC_0000139C:
    mr r3, r28
    bl fn_800D51EC
lbl_fn_800D51EC_000013A4:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D51EC_000013C4
    beq lbl_fn_800D51EC_000013BC
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D51EC_000013BC:
    mr r3, r28
    bl fn_800D51EC
lbl_fn_800D51EC_000013C4:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800D51EC_000013D0:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D51EC_000013DC:
    lwz r27, 0x1c(r30)
    cmpwi r27, 0x0
    beq lbl_fn_800D51EC_000014C8
    beq lbl_fn_800D51EC_000013F4
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D51EC_000013F4:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D51EC_00001458
    beq lbl_fn_800D51EC_0000140C
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D51EC_0000140C:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D51EC_0000142C
    beq lbl_fn_800D51EC_00001424
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D51EC_00001424:
    mr r3, r29
    bl fn_800D51EC
lbl_fn_800D51EC_0000142C:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D51EC_0000144C
    beq lbl_fn_800D51EC_00001444
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D51EC_00001444:
    mr r3, r29
    bl fn_800D51EC
lbl_fn_800D51EC_0000144C:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D51EC_00001458:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D51EC_000014BC
    beq lbl_fn_800D51EC_00001470
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D51EC_00001470:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D51EC_00001490
    beq lbl_fn_800D51EC_00001488
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D51EC_00001488:
    mr r3, r29
    bl fn_800D51EC
lbl_fn_800D51EC_00001490:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D51EC_000014B0
    beq lbl_fn_800D51EC_000014A8
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D51EC_000014A8:
    mr r3, r29
    bl fn_800D51EC
lbl_fn_800D51EC_000014B0:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D51EC_000014BC:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800D51EC_000014C8:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r30)
lbl_fn_800D51EC_000014D4:
    lwz r27, 0x1c(r31)
    cmpwi r27, 0x0
    beq lbl_fn_800D51EC_000016D0
    beq lbl_fn_800D51EC_000014EC
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D51EC_000014EC:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D51EC_000015D8
    beq lbl_fn_800D51EC_00001504
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D51EC_00001504:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D51EC_00001568
    beq lbl_fn_800D51EC_0000151C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D51EC_0000151C:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D51EC_0000153C
    beq lbl_fn_800D51EC_00001534
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D51EC_00001534:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D51EC_0000153C:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D51EC_0000155C
    beq lbl_fn_800D51EC_00001554
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D51EC_00001554:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D51EC_0000155C:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D51EC_00001568:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D51EC_000015CC
    beq lbl_fn_800D51EC_00001580
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D51EC_00001580:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D51EC_000015A0
    beq lbl_fn_800D51EC_00001598
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D51EC_00001598:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D51EC_000015A0:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D51EC_000015C0
    beq lbl_fn_800D51EC_000015B8
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D51EC_000015B8:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D51EC_000015C0:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D51EC_000015CC:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D51EC_000015D8:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D51EC_000016C4
    beq lbl_fn_800D51EC_000015F0
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D51EC_000015F0:
    lwz r29, 0x18(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D51EC_00001654
    beq lbl_fn_800D51EC_00001608
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D51EC_00001608:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D51EC_00001628
    beq lbl_fn_800D51EC_00001620
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D51EC_00001620:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D51EC_00001628:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D51EC_00001648
    beq lbl_fn_800D51EC_00001640
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D51EC_00001640:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D51EC_00001648:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D51EC_00001654:
    lwz r29, 0x1c(r28)
    cmpwi r29, 0x0
    beq lbl_fn_800D51EC_000016B8
    beq lbl_fn_800D51EC_0000166C
    mr r3, r29
    bl fn_800D56C4
lbl_fn_800D51EC_0000166C:
    lwz r30, 0x18(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D51EC_0000168C
    beq lbl_fn_800D51EC_00001684
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D51EC_00001684:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D51EC_0000168C:
    lwz r30, 0x1c(r29)
    cmpwi r30, 0x0
    beq lbl_fn_800D51EC_000016AC
    beq lbl_fn_800D51EC_000016A4
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D51EC_000016A4:
    mr r3, r30
    bl fn_800D51EC
lbl_fn_800D51EC_000016AC:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
lbl_fn_800D51EC_000016B8:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800D51EC_000016C4:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800D51EC_000016D0:
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r31)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D5618(void)
{
    nofralloc
    lis r4, lbl_807796F0@ha
    lis r9, lbl_807C75D8@ha
    addi r4, r4, lbl_807796F0@l
    stw r4, 0x0(r3)
    addi r9, r9, lbl_807C75D8@l
    lis r5, lbl_807C75D0@ha
    lwz r7, 0xc(r9)
    li r6, 0x1
    lwz r8, 0x8(r9)
    addi r4, r5, lbl_807C75D0@l
    addc r7, r7, r6
    li r0, 0x0
    adde r6, r8, r0
    stw r7, 0xc(r9)
    lwz r0, lbl_807C75D0@l(r5)
    stw r6, 0x8(r9)
    lwz r4, 0x4(r4)
    stw r7, 0x14(r3)
    stw r6, 0x10(r3)
    stw r4, 0xc(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_800D5670(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800D5670_00001784
    cmpwi r4, 0x0
    li r0, 0x0
    stw r0, 0x14(r3)
    stw r0, 0x10(r3)
    stw r0, 0xc(r3)
    stw r0, 0x8(r3)
    ble lbl_fn_800D5670_00001784
    bl dtor_80084684
lbl_fn_800D5670_00001784:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
