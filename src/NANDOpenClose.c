#include "revolution/types.h"

/* External function declarations */
extern void ISFS_Open(void);
extern void ISFS_OpenAsync(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8061BB70(void);
extern void fn_8061BB80(void);
extern void fn_8061FC80(void);
extern void fn_80620B70(void);
extern void fn_806210B0(void);
extern void fn_80621290(void);
extern void nandConvertErrorCode(void);
extern void nandGenerateAbsPath(void);
extern void nandIsInitialized(void);
extern void nandIsPrivatePath(void);
extern void strcpy(void);
extern void strlen(void);

/* External data declarations */
extern u8 lbl_80764800[];

/* Small data declarations */

/* Function declarations */
void fn_8061F480(void);
void nandOpen(void);
void fn_8061F8D0(void);
void fn_8061F960(void);
void fn_8061F9F0(void);
void NANDPrivateOpenAsync(void);
void nandOpenCallback(void);
void fn_8061FB70(void);
void fn_8061FBE0(void);
void fn_8061FC70(void);

asm void fn_8061F480(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stw r31, 0x16c(r1)
    stw r30, 0x168(r1)
    mr r30, r3
    bl strlen
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8061F480_00000030
    li r3, 0x0
    b lbl_fn_8061F480_0000031C
lbl_fn_8061F480_00000030:
    mr r3, r30
    bl fn_80621290
    cmpwi r3, 0x0
    beq lbl_fn_8061F480_0000018C
    lis r3, lbl_80764800@ha
    li r0, 0x8
    addi r3, r3, lbl_80764800@l
    addi r5, r1, 0x54
    subi r4, r3, 0x4
    li r10, 0x0
    mtctr r0
    nop
lbl_fn_8061F480_00000060:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8061F480_00000060
    lhz r0, 0x4(r4)
    sth r0, 0x4(r5)
    li r5, 0x8
    li r0, 0xb
    b lbl_fn_8061F480_00000180
lbl_fn_8061F480_00000088:
    addi r7, r1, 0x120
    addi r6, r1, 0x54
    lbz r8, 0x0(r30)
    mtctr r5
lbl_fn_8061F480_00000098:
    lwz r4, 0x4(r6)
    lwzu r3, 0x8(r6)
    stw r4, 0x4(r7)
    stwu r3, 0x8(r7)
    bdnz lbl_fn_8061F480_00000098
    lhz r3, 0x4(r6)
    addi r9, r1, 0x124
    sth r3, 0x4(r7)
    extsb r4, r8
    li r6, 0x0
    mtctr r0
    nop
lbl_fn_8061F480_000000C8:
    lbz r3, 0x0(r9)
    extsb r3, r3
    cmpw r4, r3
    bne lbl_fn_8061F480_000000E0
    li r3, 0x1
    b lbl_fn_8061F480_00000168
lbl_fn_8061F480_000000E0:
    lbz r3, 0x1(r9)
    extsb r3, r3
    cmpw r4, r3
    bne lbl_fn_8061F480_000000F8
    li r3, 0x1
    b lbl_fn_8061F480_00000168
lbl_fn_8061F480_000000F8:
    lbz r3, 0x2(r9)
    extsb r3, r3
    cmpw r4, r3
    bne lbl_fn_8061F480_00000110
    li r3, 0x1
    b lbl_fn_8061F480_00000168
lbl_fn_8061F480_00000110:
    lbz r3, 0x3(r9)
    extsb r3, r3
    cmpw r4, r3
    bne lbl_fn_8061F480_00000128
    li r3, 0x1
    b lbl_fn_8061F480_00000168
lbl_fn_8061F480_00000128:
    lbz r3, 0x4(r9)
    extsb r3, r3
    cmpw r4, r3
    bne lbl_fn_8061F480_00000140
    li r3, 0x1
    b lbl_fn_8061F480_00000168
lbl_fn_8061F480_00000140:
    lbz r3, 0x5(r9)
    extsb r3, r3
    cmpw r4, r3
    bne lbl_fn_8061F480_00000158
    li r3, 0x1
    b lbl_fn_8061F480_00000168
lbl_fn_8061F480_00000158:
    addi r9, r9, 0x6
    addi r6, r6, 0x5
    bdnz lbl_fn_8061F480_000000C8
    li r3, 0x0
lbl_fn_8061F480_00000168:
    cmpwi r3, 0x0
    bne lbl_fn_8061F480_00000178
    li r3, 0x0
    b lbl_fn_8061F480_0000031C
lbl_fn_8061F480_00000178:
    addi r10, r10, 0x1
    addi r30, r30, 0x1
lbl_fn_8061F480_00000180:
    cmplw r10, r31
    blt lbl_fn_8061F480_00000088
    b lbl_fn_8061F480_00000318
lbl_fn_8061F480_0000018C:
    mr r4, r30
    addi r3, r1, 0x18
    bl strcpy
    addi r3, r1, 0x17
    lbzx r0, r3, r31
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_fn_8061F480_000001BC
    subic. r0, r31, 0x1
    beq lbl_fn_8061F480_000001BC
    li r0, 0x0
    stbx r0, r3, r31
lbl_fn_8061F480_000001BC:
    addi r3, r1, 0x8
    addi r4, r1, 0x18
    bl fn_806210B0
    addi r3, r1, 0x8
    bl strlen
    lis r4, lbl_80764800@ha
    li r0, 0x8
    addi r4, r4, lbl_80764800@l
    addi r10, r1, 0x8
    addi r7, r1, 0x98
    li r11, 0x0
    subi r5, r4, 0x4
    mtctr r0
lbl_fn_8061F480_000001F0:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_8061F480_000001F0
    lhz r0, 0x4(r5)
    li r6, 0x8
    sth r0, 0x4(r7)
    li r0, 0xb
    b lbl_fn_8061F480_00000310
lbl_fn_8061F480_00000218:
    lbz r4, 0x0(r10)
    addi r8, r1, 0xdc
    addi r7, r1, 0x98
    extsb r9, r4
    mtctr r6
    nop
lbl_fn_8061F480_00000230:
    lwz r5, 0x4(r7)
    lwzu r4, 0x8(r7)
    stw r5, 0x4(r8)
    stwu r4, 0x8(r8)
    bdnz lbl_fn_8061F480_00000230
    lhz r4, 0x4(r7)
    addi r7, r1, 0xe0
    sth r4, 0x4(r8)
    li r5, 0x0
    mtctr r0
lbl_fn_8061F480_00000258:
    lbz r4, 0x0(r7)
    extsb r4, r4
    cmpw r9, r4
    bne lbl_fn_8061F480_00000270
    li r4, 0x1
    b lbl_fn_8061F480_000002F8
lbl_fn_8061F480_00000270:
    lbz r4, 0x1(r7)
    extsb r4, r4
    cmpw r9, r4
    bne lbl_fn_8061F480_00000288
    li r4, 0x1
    b lbl_fn_8061F480_000002F8
lbl_fn_8061F480_00000288:
    lbz r4, 0x2(r7)
    extsb r4, r4
    cmpw r9, r4
    bne lbl_fn_8061F480_000002A0
    li r4, 0x1
    b lbl_fn_8061F480_000002F8
lbl_fn_8061F480_000002A0:
    lbz r4, 0x3(r7)
    extsb r4, r4
    cmpw r9, r4
    bne lbl_fn_8061F480_000002B8
    li r4, 0x1
    b lbl_fn_8061F480_000002F8
lbl_fn_8061F480_000002B8:
    lbz r4, 0x4(r7)
    extsb r4, r4
    cmpw r9, r4
    bne lbl_fn_8061F480_000002D0
    li r4, 0x1
    b lbl_fn_8061F480_000002F8
lbl_fn_8061F480_000002D0:
    lbz r4, 0x5(r7)
    extsb r4, r4
    cmpw r9, r4
    bne lbl_fn_8061F480_000002E8
    li r4, 0x1
    b lbl_fn_8061F480_000002F8
lbl_fn_8061F480_000002E8:
    addi r7, r7, 0x6
    addi r5, r5, 0x5
    bdnz lbl_fn_8061F480_00000258
    li r4, 0x0
lbl_fn_8061F480_000002F8:
    cmpwi r4, 0x0
    bne lbl_fn_8061F480_00000308
    li r3, 0x0
    b lbl_fn_8061F480_0000031C
lbl_fn_8061F480_00000308:
    addi r10, r10, 0x1
    addi r11, r11, 0x1
lbl_fn_8061F480_00000310:
    cmplw r11, r3
    blt lbl_fn_8061F480_00000218
lbl_fn_8061F480_00000318:
    li r3, 0x1
lbl_fn_8061F480_0000031C:
    lwz r0, 0x174(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void nandOpen(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r27, r4
    mr r4, r3
    stw r0, 0xc(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r7
    stw r0, 0x10(r1)
    addi r3, r1, 0x8
    li r31, 0x0
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl nandGenerateAbsPath
    cmpwi r30, 0x0
    bne lbl_nandOpen_000003D8
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_nandOpen_000003D8
    li r3, -0x66
    b lbl_nandOpen_00000438
lbl_nandOpen_000003D8:
    cmpwi r27, 0x3
    beq lbl_nandOpen_000003F4
    cmpwi r27, 0x1
    beq lbl_nandOpen_000003FC
    cmpwi r27, 0x2
    beq lbl_nandOpen_00000404
    b lbl_nandOpen_00000408
lbl_nandOpen_000003F4:
    li r31, 0x3
    b lbl_nandOpen_00000408
lbl_nandOpen_000003FC:
    li r31, 0x1
    b lbl_nandOpen_00000408
lbl_nandOpen_00000404:
    li r31, 0x2
lbl_nandOpen_00000408:
    cmpwi r29, 0x0
    beq lbl_nandOpen_0000042C
    lis r5, nandOpenCallback@ha
    mr r4, r31
    mr r6, r28
    addi r3, r1, 0x8
    addi r5, r5, nandOpenCallback@l
    bl ISFS_OpenAsync
    b lbl_nandOpen_00000438
lbl_nandOpen_0000042C:
    mr r4, r31
    addi r3, r1, 0x8
    bl ISFS_Open
lbl_nandOpen_00000438:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8061F8D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061F8D0_00000488
    li r3, -0x80
    b lbl_fn_8061F8D0_000004C0
lbl_fn_8061F8D0_00000488:
    mr r3, r29
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl nandOpen
    cmpwi r3, 0x0
    blt lbl_fn_8061F8D0_000004BC
    stw r3, 0x0(r30)
    li r0, 0x1
    li r3, 0x0
    stb r0, 0x8a(r30)
    b lbl_fn_8061F8D0_000004C0
lbl_fn_8061F8D0_000004BC:
    bl nandConvertErrorCode
lbl_fn_8061F8D0_000004C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061F960(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061F960_00000518
    li r3, -0x80
    b lbl_fn_8061F960_00000550
lbl_fn_8061F960_00000518:
    mr r3, r29
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl nandOpen
    cmpwi r3, 0x0
    blt lbl_fn_8061F960_0000054C
    stw r3, 0x0(r30)
    li r0, 0x1
    li r3, 0x0
    stb r0, 0x8a(r30)
    b lbl_fn_8061F960_00000550
lbl_fn_8061F960_0000054C:
    bl nandConvertErrorCode
lbl_fn_8061F960_00000550:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061F9F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061F9F0_000005AC
    li r3, -0x80
    b lbl_fn_8061F9F0_000005D0
lbl_fn_8061F9F0_000005AC:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r29
    mr r5, r31
    stw r28, 0x8(r31)
    li r6, 0x1
    li r7, 0x0
    bl nandOpen
    bl nandConvertErrorCode
lbl_fn_8061F9F0_000005D0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void NANDPrivateOpenAsync(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_NANDPrivateOpenAsync_0000062C
    li r3, -0x80
    b lbl_NANDPrivateOpenAsync_00000650
lbl_NANDPrivateOpenAsync_0000062C:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r29
    mr r5, r31
    stw r28, 0x8(r31)
    li r6, 0x1
    li r7, 0x1
    bl nandOpen
    bl nandConvertErrorCode
lbl_NANDPrivateOpenAsync_00000650:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void nandOpenCallback(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    blt lbl_nandOpenCallback_000006C0
    lwz r5, 0x8(r4)
    li r6, 0x2
    li r0, 0x1
    stw r3, 0x0(r5)
    li r3, 0x0
    lwz r5, 0x8(r4)
    stb r6, 0x89(r5)
    lwz r5, 0x8(r4)
    stb r0, 0x8a(r5)
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
    b lbl_nandOpenCallback_000006D4
lbl_nandOpenCallback_000006C0:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
lbl_nandOpenCallback_000006D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8061FB70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061FB70_00000718
    li r3, -0x80
    b lbl_fn_8061FB70_00000748
lbl_fn_8061FB70_00000718:
    lbz r0, 0x8a(r31)
    cmplwi r0, 0x1
    beq lbl_fn_8061FB70_0000072C
    li r3, -0x8
    b lbl_fn_8061FB70_00000748
lbl_fn_8061FB70_0000072C:
    lwz r3, 0x0(r31)
    bl fn_8061BB70
    cmpwi r3, 0x0
    bne lbl_fn_8061FB70_00000744
    li r0, 0x2
    stb r0, 0x8a(r31)
lbl_fn_8061FB70_00000744:
    bl nandConvertErrorCode
lbl_fn_8061FB70_00000748:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8061FBE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061FBE0_00000798
    li r3, -0x80
    b lbl_fn_8061FBE0_000007CC
lbl_fn_8061FBE0_00000798:
    lbz r0, 0x8a(r29)
    cmplwi r0, 0x1
    beq lbl_fn_8061FBE0_000007AC
    li r3, -0x8
    b lbl_fn_8061FBE0_000007CC
lbl_fn_8061FBE0_000007AC:
    stw r30, 0x4(r31)
    lis r4, fn_80620B70@ha
    mr r5, r31
    stw r29, 0x8(r31)
    addi r4, r4, fn_80620B70@l
    lwz r3, 0x0(r29)
    bl fn_8061BB80
    bl nandConvertErrorCode
lbl_fn_8061FBE0_000007CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061FC70(void)
{
    nofralloc
    li r8, 0x0
    li r9, 0x1
    b fn_8061FC80
}
