#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800EF3EC(void);
extern void fn_801334CC(void);
extern void fn_801F3FF8(void);
extern void fn_801F64D0(void);
extern void fn_801F6C2C(void);
extern void fn_801F6C80(void);
extern void fn_801F6D7C(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801FED24(void);
extern void fn_80207C34(void);
extern void fn_802375C4(void);
extern void fn_802376D0(void);
extern void fn_8023772C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80370174(void);
extern void fn_803E5E64(void);
extern void fn_804439FC(void);
extern void fn_80444020(void);
extern void fn_80444CF8(void);
extern void fn_80473E8C(void);
extern void fn_80473F18(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80735440[];
extern u8 lbl_80735448[];
extern u8 lbl_80735460[];
extern u8 lbl_80779CA8[];

/* Small data declarations */
extern u32 lbl_8087D968;
extern u32 lbl_8087D970;
extern u32 lbl_8087F030;
extern u32 lbl_8087F034;
extern u32 lbl_8087F038;
extern u32 lbl_8087F040;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F528;
extern u32 lbl_808813B8;
extern u32 lbl_808813BC;
extern u32 lbl_808813C0;
extern u32 lbl_808813C4;
extern u32 lbl_808813C8;
extern u32 lbl_808813CC;

/* Function declarations */
void fn_800EF7A0(void);
void fn_800EF7F8(void);
void fn_800EF8DC(void);
void fn_800EF91C(void);
void fn_800EFA18(void);
void fn_800EFB78(void);
void fn_800EFBC4(void);
void fn_800EFC64(void);
void fn_800EFD04(void);
void fn_800EFDA0(void);
void fn_800EFE3C(void);
void fn_800EFEA0(void);
void fn_800EFF04(void);
void fn_800EFF68(void);
void fn_800EFFD8(void);
void fn_800F015C(void);
void fn_800F01BC(void);
void fn_800F03C4(void);
void fn_800F0BC0(void);
void fn_800F0D14(void);

asm void fn_800EF7A0(void)
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
    beq lbl_fn_800EF7A0_0000003C
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_800EF7A0_0000003C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800EF7A0_0000003C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EF7F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_800EF7F8_0000011C
    addic. r3, r3, 0x3c
    beq lbl_fn_800EF7F8_00000090
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800EF7F8_00000090:
    addic. r3, r29, 0x34
    beq lbl_fn_800EF7F8_000000A0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800EF7F8_000000A0:
    addic. r31, r29, 0x28
    beq lbl_fn_800EF7F8_000000C0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_800EF7F8_000000C0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800EF7F8_000000C0:
    addi r3, r29, 0x1c
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x10
    beq lbl_fn_800EF7F8_000000EC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_800EF7F8_000000EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800EF7F8_000000EC:
    addic. r31, r29, 0x4
    beq lbl_fn_800EF7F8_0000010C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_800EF7F8_0000010C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800EF7F8_0000010C:
    cmpwi r30, 0x0
    ble lbl_fn_800EF7F8_0000011C
    mr r3, r29
    bl dtor_80084684
lbl_fn_800EF7F8_0000011C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800EF8DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F030
    cmpwi r3, 0x0
    beq lbl_fn_800EF8DC_0000016C
    lis r4, fn_800EF7F8@ha
    addi r4, r4, fn_800EF7F8@l
    bl fn_80695A50
    li r0, 0x0
    stw r0, lbl_8087F030
    stw r0, lbl_8087F034
lbl_fn_800EF8DC_0000016C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EF91C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    b lbl_fn_800EF91C_0000024C
lbl_fn_800EF91C_000001A0:
    lwz r0, lbl_8087F030
    add r29, r0, r31
    addi r3, r29, 0x4
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800EF91C_000001C0
    li r0, 0x1
    b lbl_fn_800EF91C_00000234
lbl_fn_800EF91C_000001C0:
    addi r3, r29, 0x10
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800EF91C_000001D8
    li r0, 0x1
    b lbl_fn_800EF91C_00000234
lbl_fn_800EF91C_000001D8:
    addi r3, r29, 0x1c
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800EF91C_000001F0
    li r0, 0x1
    b lbl_fn_800EF91C_00000234
lbl_fn_800EF91C_000001F0:
    addi r3, r29, 0x28
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800EF91C_00000208
    li r0, 0x1
    b lbl_fn_800EF91C_00000234
lbl_fn_800EF91C_00000208:
    addi r3, r29, 0x34
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_800EF91C_00000220
    li r0, 0x1
    b lbl_fn_800EF91C_00000234
lbl_fn_800EF91C_00000220:
    addi r3, r29, 0x3c
    bl fn_80473F50
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800EF91C_00000234:
    cmpwi r0, 0x0
    beq lbl_fn_800EF91C_00000244
    li r3, 0x1
    b lbl_fn_800EF91C_0000025C
lbl_fn_800EF91C_00000244:
    addi r31, r31, 0x48
    addi r30, r30, 0x1
lbl_fn_800EF91C_0000024C:
    lwz r0, lbl_8087F034
    cmplw r30, r0
    blt lbl_fn_800EF91C_000001A0
    li r3, 0x0
lbl_fn_800EF91C_0000025C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800EFA18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r5, lbl_8087D968
    cmpw r5, r3
    bne lbl_fn_800EFA18_000002AC
    lwz r0, lbl_8087F038
    cmpw r0, r4
    beq lbl_fn_800EFA18_000003B8
lbl_fn_800EFA18_000002AC:
    cmpw r5, r3
    bne lbl_fn_800EFA18_000002BC
    cmpwi r5, 0x1
    beq lbl_fn_800EFA18_000003B8
lbl_fn_800EFA18_000002BC:
    stw r3, lbl_8087D968
    li r29, 0x0
    li r30, 0x0
    li r31, 0x0
    stw r4, lbl_8087F038
    b lbl_fn_800EFA18_000003AC
lbl_fn_800EFA18_000002D4:
    lwz r0, lbl_8087D968
    lwz r3, lbl_8087F030
    cmpwi r0, 0x1
    add r28, r3, r30
    bne lbl_fn_800EFA18_0000033C
    lwz r3, 0x0(r28)
    lwz r0, 0x124(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800EFA18_000003A4
    lwz r0, 0x44(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800EFA18_000003A4
    stw r31, 0x44(r28)
    addi r3, r28, 0x4
    bl fn_8023781C
    addi r3, r28, 0x10
    bl fn_8023781C
    addi r3, r28, 0x1c
    bl fn_8023772C
    addi r3, r28, 0x28
    bl fn_8023781C
    addi r3, r28, 0x34
    bl fn_80473F88
    addi r3, r28, 0x3c
    bl fn_80473F88
    b lbl_fn_800EFA18_000003A4
lbl_fn_800EFA18_0000033C:
    lwz r4, lbl_8087F038
    cmpwi r4, 0xff
    bge lbl_fn_800EFA18_0000039C
    lwz r3, 0x0(r28)
    bl fn_80207C34
    cmpwi r3, 0x0
    bne lbl_fn_800EFA18_0000039C
    lwz r0, 0x44(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800EFA18_000003A4
    stw r31, 0x44(r28)
    addi r3, r28, 0x4
    bl fn_8023781C
    addi r3, r28, 0x10
    bl fn_8023781C
    addi r3, r28, 0x1c
    bl fn_8023772C
    addi r3, r28, 0x28
    bl fn_8023781C
    addi r3, r28, 0x34
    bl fn_80473F88
    addi r3, r28, 0x3c
    bl fn_80473F88
    b lbl_fn_800EFA18_000003A4
lbl_fn_800EFA18_0000039C:
    mr r3, r28
    bl fn_800EF3EC
lbl_fn_800EFA18_000003A4:
    addi r30, r30, 0x48
    addi r29, r29, 0x1
lbl_fn_800EFA18_000003AC:
    lwz r0, lbl_8087F034
    cmplw r29, r0
    blt lbl_fn_800EFA18_000002D4
lbl_fn_800EFA18_000003B8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800EFB78(void)
{
    nofralloc
    lwz r6, lbl_8087F030
    li r7, 0x0
    lwz r0, lbl_8087F034
    mr r5, r6
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800EFB78_0000041C
lbl_fn_800EFB78_000003F4:
    lwz r4, 0x0(r5)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_800EFB78_00000410
    mulli r0, r7, 0x48
    add r3, r6, r0
    blr
lbl_fn_800EFB78_00000410:
    addi r5, r5, 0x48
    addi r7, r7, 0x1
    bdnz lbl_fn_800EFB78_000003F4
lbl_fn_800EFB78_0000041C:
    li r3, 0x0
    blr
}

asm void fn_800EFBC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r7, lbl_8087F030
    lwz r0, lbl_8087F034
    mr r6, r7
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800EFBC4_00000478
lbl_fn_800EFBC4_00000450:
    lwz r4, 0x0(r6)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_800EFBC4_0000046C
    mulli r0, r5, 0x48
    add r31, r7, r0
    b lbl_fn_800EFBC4_0000047C
lbl_fn_800EFBC4_0000046C:
    addi r6, r6, 0x48
    addi r5, r5, 0x1
    bdnz lbl_fn_800EFBC4_00000450
lbl_fn_800EFBC4_00000478:
    li r31, 0x0
lbl_fn_800EFBC4_0000047C:
    cmpwi r31, 0x0
    beq lbl_fn_800EFBC4_000004AC
    addi r3, r31, 0x4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800EFBC4_000004AC
    addi r3, r31, 0x8
    bl fn_80473F18
    cmpwi r3, 0x0
    beq lbl_fn_800EFBC4_000004AC
    addi r3, r31, 0x4
    b lbl_fn_800EFBC4_000004B0
lbl_fn_800EFBC4_000004AC:
    li r3, 0x0
lbl_fn_800EFBC4_000004B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EFC64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r7, lbl_8087F030
    lwz r0, lbl_8087F034
    mr r6, r7
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800EFC64_00000518
lbl_fn_800EFC64_000004F0:
    lwz r4, 0x0(r6)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_800EFC64_0000050C
    mulli r0, r5, 0x48
    add r31, r7, r0
    b lbl_fn_800EFC64_0000051C
lbl_fn_800EFC64_0000050C:
    addi r6, r6, 0x48
    addi r5, r5, 0x1
    bdnz lbl_fn_800EFC64_000004F0
lbl_fn_800EFC64_00000518:
    li r31, 0x0
lbl_fn_800EFC64_0000051C:
    cmpwi r31, 0x0
    beq lbl_fn_800EFC64_0000054C
    addi r3, r31, 0x10
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800EFC64_0000054C
    addi r3, r31, 0x14
    bl fn_80473F18
    cmpwi r3, 0x0
    beq lbl_fn_800EFC64_0000054C
    addi r3, r31, 0x10
    b lbl_fn_800EFC64_00000550
lbl_fn_800EFC64_0000054C:
    li r3, 0x0
lbl_fn_800EFC64_00000550:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EFD04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r7, lbl_8087F030
    lwz r0, lbl_8087F034
    mr r6, r7
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800EFD04_000005B8
lbl_fn_800EFD04_00000590:
    lwz r4, 0x0(r6)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_800EFD04_000005AC
    mulli r0, r5, 0x48
    add r31, r7, r0
    b lbl_fn_800EFD04_000005BC
lbl_fn_800EFD04_000005AC:
    addi r6, r6, 0x48
    addi r5, r5, 0x1
    bdnz lbl_fn_800EFD04_00000590
lbl_fn_800EFD04_000005B8:
    li r31, 0x0
lbl_fn_800EFD04_000005BC:
    cmpwi r31, 0x0
    beq lbl_fn_800EFD04_000005E8
    addi r3, r31, 0x1c
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_800EFD04_000005E8
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800EFD04_000005E8
    addi r3, r31, 0x1c
    b lbl_fn_800EFD04_000005EC
lbl_fn_800EFD04_000005E8:
    li r3, 0x0
lbl_fn_800EFD04_000005EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EFDA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r7, lbl_8087F030
    lwz r0, lbl_8087F034
    mr r6, r7
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800EFDA0_00000654
lbl_fn_800EFDA0_0000062C:
    lwz r4, 0x0(r6)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_800EFDA0_00000648
    mulli r0, r5, 0x48
    add r31, r7, r0
    b lbl_fn_800EFDA0_00000658
lbl_fn_800EFDA0_00000648:
    addi r6, r6, 0x48
    addi r5, r5, 0x1
    bdnz lbl_fn_800EFDA0_0000062C
lbl_fn_800EFDA0_00000654:
    li r31, 0x0
lbl_fn_800EFDA0_00000658:
    cmpwi r31, 0x0
    beq lbl_fn_800EFDA0_00000684
    addi r3, r31, 0x28
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800EFDA0_00000684
    lwz r0, 0x28(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800EFDA0_00000684
    addi r3, r31, 0x28
    b lbl_fn_800EFDA0_00000688
lbl_fn_800EFDA0_00000684:
    li r3, 0x0
lbl_fn_800EFDA0_00000688:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EFE3C(void)
{
    nofralloc
    lwz r7, lbl_8087F030
    li r5, 0x0
    lwz r0, lbl_8087F034
    mr r6, r7
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800EFE3C_000006E0
lbl_fn_800EFE3C_000006B8:
    lwz r4, 0x0(r6)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_800EFE3C_000006D4
    mulli r0, r5, 0x48
    add r3, r7, r0
    b lbl_fn_800EFE3C_000006E4
lbl_fn_800EFE3C_000006D4:
    addi r6, r6, 0x48
    addi r5, r5, 0x1
    bdnz lbl_fn_800EFE3C_000006B8
lbl_fn_800EFE3C_000006E0:
    li r3, 0x0
lbl_fn_800EFE3C_000006E4:
    cmpwi r3, 0x0
    beq lbl_fn_800EFE3C_000006F8
    lwz r3, 0x0(r3)
    addi r3, r3, 0x84
    blr
lbl_fn_800EFE3C_000006F8:
    li r3, 0x0
    blr
}

asm void fn_800EFEA0(void)
{
    nofralloc
    lwz r7, lbl_8087F030
    li r5, 0x0
    lwz r0, lbl_8087F034
    mr r6, r7
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800EFEA0_00000744
lbl_fn_800EFEA0_0000071C:
    lwz r4, 0x0(r6)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_800EFEA0_00000738
    mulli r0, r5, 0x48
    add r3, r7, r0
    b lbl_fn_800EFEA0_00000748
lbl_fn_800EFEA0_00000738:
    addi r6, r6, 0x48
    addi r5, r5, 0x1
    bdnz lbl_fn_800EFEA0_0000071C
lbl_fn_800EFEA0_00000744:
    li r3, 0x0
lbl_fn_800EFEA0_00000748:
    cmpwi r3, 0x0
    beq lbl_fn_800EFEA0_0000075C
    lwz r3, 0x0(r3)
    addi r3, r3, 0xa4
    blr
lbl_fn_800EFEA0_0000075C:
    li r3, 0x0
    blr
}

asm void fn_800EFF04(void)
{
    nofralloc
    lwz r7, lbl_8087F030
    li r5, 0x0
    lwz r0, lbl_8087F034
    mr r6, r7
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800EFF04_000007A8
lbl_fn_800EFF04_00000780:
    lwz r4, 0x0(r6)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_800EFF04_0000079C
    mulli r0, r5, 0x48
    add r3, r7, r0
    b lbl_fn_800EFF04_000007AC
lbl_fn_800EFF04_0000079C:
    addi r6, r6, 0x48
    addi r5, r5, 0x1
    bdnz lbl_fn_800EFF04_00000780
lbl_fn_800EFF04_000007A8:
    li r3, 0x0
lbl_fn_800EFF04_000007AC:
    cmpwi r3, 0x0
    beq lbl_fn_800EFF04_000007C0
    lwz r3, 0x0(r3)
    addi r3, r3, 0xc4
    blr
lbl_fn_800EFF04_000007C0:
    li r3, 0x0
    blr
}

asm void fn_800EFF68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800EFF68_00000820
    lwz r0, lbl_8087F040
    cmpwi r0, 0x0
    bne lbl_fn_800EFF68_00000820
    lis r5, lbl_80735460@ha
    li r3, 0x188
    addi r5, r5, lbl_80735460@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800EFF68_0000081C
    mr r4, r31
    bl fn_800EFFD8
lbl_fn_800EFF68_0000081C:
    stw r3, lbl_8087F040
lbl_fn_800EFF68_00000820:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F040
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EFFD8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r31, r3
    bl fn_800D1D3C
    lfs f0, lbl_808813B8
    lis r3, lbl_80779CA8@ha
    li r0, 0x0
    lis r30, lbl_80735460@ha
    addi r3, r3, lbl_80779CA8@l
    stw r3, 0x0(r31)
    addi r30, r30, lbl_80735460@l
    li r5, 0x0
    stw r0, 0x48(r31)
    mr r3, r31
    addi r4, r30, 0x1
    stw r0, 0xe0(r31)
    stw r0, 0xe4(r31)
    stw r0, 0xe8(r31)
    stfs f0, 0x15c(r31)
    stw r0, 0x170(r31)
    bl fn_801F3FF8
    stw r3, 0x50(r31)
    li r4, 0x1
    bl fn_800D246C
    addi r29, r30, 0x25
    addi r28, r30, 0x48
    addi r27, r30, 0x6d
    addi r30, r30, 0x94
    li r25, 0x0
    li r26, 0x0
lbl_fn_800EFFD8_000008BC:
    mr r3, r31
    mr r4, r29
    bl fn_801F64D0
    add r5, r31, r26
    li r4, 0x1
    stw r3, 0x54(r5)
    bl fn_800D246C
    mr r3, r31
    mr r4, r28
    bl fn_801F64D0
    add r5, r31, r26
    li r4, 0x1
    stw r3, 0x70(r5)
    bl fn_800D246C
    mr r3, r31
    mr r4, r27
    bl fn_801F64D0
    add r5, r31, r26
    li r4, 0x1
    stw r3, 0x8c(r5)
    bl fn_800D246C
    mr r3, r31
    mr r4, r30
    bl fn_801F64D0
    add r5, r31, r26
    li r4, 0x1
    stw r3, 0xa8(r5)
    bl fn_800D246C
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmplwi r25, 0x7
    blt lbl_fn_800EFFD8_000008BC
    lis r30, lbl_80735460@ha
    mr r3, r31
    addi r30, r30, lbl_80735460@l
    addi r4, r30, 0xbd
    bl fn_801F64D0
    stw r3, 0x17c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xe1
    bl fn_801F64D0
    stw r3, 0x180(r31)
    li r4, 0x1
    bl fn_800D246C
    addi r3, r31, 0xc4
    li r4, 0x0
    li r5, 0x1c
    bl memset
    li r5, 0x0
    li r4, -0x1
    li r0, 0x1
    stw r5, 0xe8(r31)
    addi r11, r1, 0x30
    mr r3, r31
    stw r4, 0x164(r31)
    stw r5, 0x168(r31)
    stw r0, 0x16c(r31)
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800F015C(void)
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
    beq lbl_fn_800F015C_00000A00
    li r0, 0x0
    stw r0, lbl_8087F040
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_800F015C_00000A00
    mr r3, r30
    bl dtor_80084684
lbl_fn_800F015C_00000A00:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800F01BC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_26
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r27, r3
    stw r0, 0x10(r1)
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_800F01BC_00000C00
    lwz r0, 0x38(r27)
    li r4, 0x0
    lwz r3, 0x50(r27)
    ori r0, r0, 0x4
    stw r0, 0x38(r27)
    bl fn_800D246C
    lwz r4, 0x50(r27)
    lis r3, lbl_80735440@ha
    lis r30, lbl_80735460@ha
    lfd f31, lbl_80735440@l(r3)
    lwz r0, 0xfc(r4)
    mr r29, r27
    addi r30, r30, lbl_80735460@l
    li r28, 0x0
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    li r31, 0x0
    li r26, 0x1
    lwz r3, 0x50(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_800F01BC_00000AAC:
    stw r28, 0xc(r1)
    addi r4, r30, 0x107
    lwz r3, 0x54(r29)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f31
    bl fn_801F6C80
    lwz r3, 0x54(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x54(r29)
    addi r4, r30, 0x107
    stw r28, 0x14(r1)
    stb r31, 0x4d(r3)
    lfd f0, 0x10(r1)
    lwz r3, 0x54(r29)
    fsubs f1, f0, f31
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x70(r29)
    bl fn_801F6C80
    lwz r3, 0x70(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x70(r29)
    addi r4, r30, 0x107
    stw r28, 0xc(r1)
    stb r26, 0x4d(r3)
    lfd f0, 0x8(r1)
    lwz r3, 0x70(r29)
    fsubs f1, f0, f31
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x8c(r29)
    bl fn_801F6C80
    lwz r3, 0x8c(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x8c(r29)
    addi r4, r30, 0x107
    stw r28, 0x14(r1)
    stb r31, 0x4d(r3)
    lfd f0, 0x10(r1)
    lwz r3, 0x8c(r29)
    fsubs f1, f0, f31
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xa8(r29)
    bl fn_801F6C80
    lwz r3, 0xa8(r29)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xa8(r29)
    addi r28, r28, 0x1
    cmplwi r28, 0x7
    addi r29, r29, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_800F01BC_00000AAC
    lwz r3, 0x17c(r27)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x17c(r27)
    li r28, 0x0
    li r4, 0x0
    stb r28, 0x4d(r3)
    lwz r3, 0x17c(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x180(r27)
    bl fn_800D246C
    lwz r4, 0x180(r27)
    li r0, 0x1
    li r3, 0x1
    stb r0, 0x4d(r4)
    lwz r4, 0x180(r27)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    stw r28, 0x170(r27)
    b lbl_fn_800F01BC_00000C04
lbl_fn_800F01BC_00000C00:
    li r3, 0x0
lbl_fn_800F01BC_00000C04:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800F03C4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x20
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    bl _savegpr_27
    lwz r4, 0x50(r3)
    mr r29, r3
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x17c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x180(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x70(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x8c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xa8(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x74(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x90(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xac(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x78(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x94(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb0(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x60(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x7c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x98(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb4(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x64(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x80(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x9c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb8(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x68(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x84(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xa0(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xbc(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x6c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x88(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xa4(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xc0(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_800F03C4_00000E78
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x8
    beq lbl_fn_800F03C4_000013F8
    cmpwi r0, 0x1
    beq lbl_fn_800F03C4_000013F8
    cmpwi r0, 0xd
    beq lbl_fn_800F03C4_000013F8
    cmpwi r0, 0x7
    beq lbl_fn_800F03C4_000013F8
    cmpwi r0, 0xe
    bne lbl_fn_800F03C4_00000E78
    b lbl_fn_800F03C4_000013F8
lbl_fn_800F03C4_00000E78:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F03C4_00000E98
    cmpwi r0, 0x1
    beq lbl_fn_800F03C4_00000FD8
    cmpwi r0, 0x2
    beq lbl_fn_800F03C4_00001254
    b lbl_fn_800F03C4_000013F8
lbl_fn_800F03C4_00000E98:
    lwz r4, 0x50(r3)
    lfs f0, lbl_808813BC
    stfs f0, 0x104(r4)
    lwz r4, 0x50(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x50(r3)
    lfs f1, 0xa0(r4)
    lfs f0, 0x100(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F03C4_00000EEC
    lfs f0, lbl_808813B8
    li r4, 0x1
    li r0, 0x12c
    stw r4, 0x48(r3)
    stw r0, 0xe4(r3)
    stfs f0, 0x15c(r3)
lbl_fn_800F03C4_00000EEC:
    lfs f30, lbl_808813BC
    mr r28, r29
    li r31, 0x0
    b lbl_fn_800F03C4_00000F68
lbl_fn_800F03C4_00000EFC:
    lwz r0, 0xc4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800F03C4_00000F10
    lwz r27, 0x70(r28)
    b lbl_fn_800F03C4_00000F14
lbl_fn_800F03C4_00000F10:
    li r27, 0x0
lbl_fn_800F03C4_00000F14:
    lwz r30, 0x54(r28)
    stfs f30, 0x54(r30)
    mr r3, r30
    bl fn_801F6C2C
    lfs f0, 0x50(r30)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F03C4_00000F54
    cmpwi r27, 0x0
    beq lbl_fn_800F03C4_00000F54
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
    b lbl_fn_800F03C4_00000F60
lbl_fn_800F03C4_00000F54:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r30)
lbl_fn_800F03C4_00000F60:
    addi r28, r28, 0x4
    addi r31, r31, 0x1
lbl_fn_800F03C4_00000F68:
    lwz r0, 0xe8(r29)
    cmplw r31, r0
    blt lbl_fn_800F03C4_00000EFC
    lwz r0, 0x160(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800F03C4_000013F8
    lwz r30, 0x17c(r29)
    lwz r29, 0x180(r29)
    lfs f0, lbl_808813BC
    mr r3, r30
    stfs f0, 0x54(r30)
    bl fn_801F6C2C
    lfs f0, 0x50(r30)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F03C4_00000FC8
    cmpwi r29, 0x0
    beq lbl_fn_800F03C4_00000FC8
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
    b lbl_fn_800F03C4_000013F8
lbl_fn_800F03C4_00000FC8:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r30)
    b lbl_fn_800F03C4_000013F8
lbl_fn_800F03C4_00000FD8:
    lwz r4, 0x50(r3)
    mr r31, r29
    lfs f30, lbl_808813BC
    li r30, 0x0
    stfs f30, 0x104(r4)
    lwz r3, 0x50(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_800F03C4_000010C8
lbl_fn_800F03C4_00001000:
    lwz r0, 0xc4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800F03C4_00001014
    lwz r27, 0x70(r31)
    b lbl_fn_800F03C4_00001018
lbl_fn_800F03C4_00001014:
    li r27, 0x0
lbl_fn_800F03C4_00001018:
    lwz r28, 0x54(r31)
    stfs f30, 0x54(r28)
    mr r3, r28
    bl fn_801F6C2C
    lfs f0, 0x50(r28)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F03C4_00001058
    cmpwi r27, 0x0
    beq lbl_fn_800F03C4_00001058
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
    b lbl_fn_800F03C4_00001064
lbl_fn_800F03C4_00001058:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800F03C4_00001064:
    lwz r0, 0xc4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800F03C4_000010C0
    lwz r28, 0x8c(r31)
    lwz r27, 0xa8(r31)
    mr r3, r28
    stfs f30, 0x54(r28)
    bl fn_801F6C2C
    lfs f0, 0x50(r28)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F03C4_000010B4
    cmpwi r27, 0x0
    beq lbl_fn_800F03C4_000010B4
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
    b lbl_fn_800F03C4_000010C0
lbl_fn_800F03C4_000010B4:
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
lbl_fn_800F03C4_000010C0:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_800F03C4_000010C8:
    lwz r0, 0xe8(r29)
    cmplw r30, r0
    blt lbl_fn_800F03C4_00001000
    lwz r0, 0x160(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800F03C4_00001174
    lwz r27, 0x17c(r29)
    lwz r28, 0x180(r29)
    lfs f0, lbl_808813BC
    mr r3, r27
    stfs f0, 0x54(r27)
    bl fn_801F6C2C
    lfs f0, 0x50(r27)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F03C4_00001128
    cmpwi r28, 0x0
    beq lbl_fn_800F03C4_00001128
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
    b lbl_fn_800F03C4_00001134
lbl_fn_800F03C4_00001128:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800F03C4_00001134:
    lwz r4, 0x164(r29)
    cmpwi r4, 0x0
    blt lbl_fn_800F03C4_00001174
    lwz r0, 0xe4(r29)
    cmpwi r0, 0x10e
    bge lbl_fn_800F03C4_00001174
    lwz r3, lbl_8087F490
    lwz r5, 0x168(r29)
    lwz r6, 0x16c(r29)
    bl fn_803E5E64
    li r4, -0x1
    li r3, 0x0
    li r0, 0x1
    stw r4, 0x164(r29)
    stw r3, 0x168(r29)
    stw r0, 0x16c(r29)
lbl_fn_800F03C4_00001174:
    lfs f1, lbl_808813BC
    lfs f0, 0x15c(r29)
    lfs f2, lbl_808813C0
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_800F03C4_00001190
    b lbl_fn_800F03C4_00001194
lbl_fn_800F03C4_00001190:
    fmr f2, f0
lbl_fn_800F03C4_00001194:
    lwz r3, 0xe4(r29)
    stfs f2, 0x15c(r29)
    subic. r0, r3, 0x1
    stw r0, 0xe4(r29)
    bge lbl_fn_800F03C4_000013F8
    lwz r3, lbl_8087F430
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x9
    beq lbl_fn_800F03C4_000013F8
    cmpwi r0, 0xa
    beq lbl_fn_800F03C4_000013F8
    lwz r0, 0x4c(r29)
    cmpwi r0, 0x1
    beq lbl_fn_800F03C4_0000122C
    li r0, 0x2
    stw r0, 0x48(r29)
    lwz r3, 0x50(r29)
    mr r27, r29
    lfs f30, lbl_808813C4
    li r28, 0x0
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    lfs f31, lbl_808813BC
    lwz r3, 0x50(r29)
    stfs f30, 0x104(r3)
    b lbl_fn_800F03C4_00001220
lbl_fn_800F03C4_000011FC:
    lwz r3, 0x54(r27)
    bl fn_801F6C2C
    fsubs f0, f1, f31
    lwz r3, 0x54(r27)
    addi r28, r28, 0x1
    stfs f0, 0x50(r3)
    lwz r3, 0x54(r27)
    addi r27, r27, 0x4
    stfs f30, 0x54(r3)
lbl_fn_800F03C4_00001220:
    lwz r0, 0xe0(r29)
    cmplw r28, r0
    blt lbl_fn_800F03C4_000011FC
lbl_fn_800F03C4_0000122C:
    lwz r3, 0x17c(r29)
    bl fn_801F6C2C
    lfs f0, lbl_808813BC
    lwz r3, 0x17c(r29)
    fsubs f1, f1, f0
    lfs f0, lbl_808813C4
    stfs f1, 0x50(r3)
    lwz r3, 0x17c(r29)
    stfs f0, 0x54(r3)
    b lbl_fn_800F03C4_000013F8
lbl_fn_800F03C4_00001254:
    lwz r4, 0x50(r3)
    mr r31, r29
    lfs f31, lbl_808813C4
    li r30, 0x0
    stfs f31, 0x104(r4)
    lwz r3, 0x50(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_800F03C4_00001344
lbl_fn_800F03C4_0000127C:
    lwz r0, 0xc4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800F03C4_00001290
    lwz r28, 0x70(r31)
    b lbl_fn_800F03C4_00001294
lbl_fn_800F03C4_00001290:
    li r28, 0x0
lbl_fn_800F03C4_00001294:
    lwz r27, 0x54(r31)
    stfs f31, 0x54(r27)
    mr r3, r27
    bl fn_801F6C2C
    lfs f0, 0x50(r27)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F03C4_000012D4
    cmpwi r28, 0x0
    beq lbl_fn_800F03C4_000012D4
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
    b lbl_fn_800F03C4_000012E0
lbl_fn_800F03C4_000012D4:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800F03C4_000012E0:
    lwz r0, 0xc4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800F03C4_0000133C
    lwz r27, 0x8c(r31)
    lwz r28, 0xa8(r31)
    mr r3, r27
    stfs f31, 0x54(r27)
    bl fn_801F6C2C
    lfs f0, 0x50(r27)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F03C4_00001330
    cmpwi r28, 0x0
    beq lbl_fn_800F03C4_00001330
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
    b lbl_fn_800F03C4_0000133C
lbl_fn_800F03C4_00001330:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800F03C4_0000133C:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_800F03C4_00001344:
    lwz r0, 0xe8(r29)
    cmplw r30, r0
    blt lbl_fn_800F03C4_0000127C
    lwz r0, 0x160(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800F03C4_000013B0
    lwz r27, 0x17c(r29)
    lwz r28, 0x180(r29)
    lfs f0, lbl_808813C4
    mr r3, r27
    stfs f0, 0x54(r27)
    bl fn_801F6C2C
    lfs f0, 0x50(r27)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F03C4_000013A4
    cmpwi r28, 0x0
    beq lbl_fn_800F03C4_000013A4
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
    b lbl_fn_800F03C4_000013B0
lbl_fn_800F03C4_000013A4:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
lbl_fn_800F03C4_000013B0:
    lwz r3, 0x50(r29)
    lfs f0, lbl_808813B8
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_800F03C4_000013F8
    lwz r0, 0x38(r29)
    li r4, 0x3
    li r3, 0x0
    stw r4, 0x48(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    stfs f0, 0x15c(r29)
    stw r3, 0x160(r29)
    beq lbl_fn_800F03C4_000013F8
    lwz r0, 0x38(r29)
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
lbl_fn_800F03C4_000013F8:
    addi r11, r1, 0x20
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800F0BC0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x40
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    bl _savegpr_25
    lfs f1, 0x15c(r3)
    lis r5, lbl_80735448@ha
    lfs f0, lbl_808813C0
    lis r4, lbl_80735460@ha
    mr r25, r3
    lfd f31, lbl_80735448@l(r5)
    fdivs f30, f1, f0
    mr r28, r25
    addi r29, r3, 0xec
    addi r31, r4, lbl_80735460@l
    li r27, 0x0
    lis r30, 0x4330
    b lbl_fn_800F0BC0_00001538
lbl_fn_800F0BC0_00001480:
    lwz r3, 0x4(r29)
    lwz r0, 0x0(r29)
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lwz r3, 0x54(r28)
    stw r30, 0x8(r1)
    lfs f0, 0xc(r29)
    cmpwi r3, 0x0
    lfd f1, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f3, f1, f31
    lfs f1, 0x8(r29)
    stw r30, 0x10(r1)
    fsubs f0, f0, f1
    lfd f2, 0x10(r1)
    fsubs f2, f2, f31
    fmadds f29, f30, f0, f1
    fsubs f0, f3, f2
    fmadds f0, f30, f0, f2
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r26, 0x1c(r1)
    beq lbl_fn_800F0BC0_00001500
    mr r5, r26
    addi r4, r31, 0x10c
    li r6, 0x0
    bl fn_801F8598
    fmr f1, f29
    lwz r3, 0x54(r28)
    addi r4, r31, 0x113
    bl fn_801F6C80
lbl_fn_800F0BC0_00001500:
    lwz r3, 0x70(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800F0BC0_0000152C
    mr r5, r26
    addi r4, r31, 0x10c
    li r6, 0x0
    bl fn_801F8598
    fmr f1, f29
    lwz r3, 0x70(r28)
    addi r4, r31, 0x113
    bl fn_801F6C80
lbl_fn_800F0BC0_0000152C:
    addi r29, r29, 0x10
    addi r28, r28, 0x4
    addi r27, r27, 0x1
lbl_fn_800F0BC0_00001538:
    lwz r0, 0xe8(r25)
    cmplw r27, r0
    blt lbl_fn_800F0BC0_00001480
    addi r11, r1, 0x40
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800F0D14(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x180
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stfd f29, 0x180(r1)
    psq_st f29, 0x188(r1), 0, 0
    bl _savegpr_21
    lwz r6, lbl_8087F528
    lis r7, 0x4330
    li r0, 0x0
    lis r5, lbl_80735460@ha
    stw r0, 0x48(r6)
    addi r5, r5, lbl_80735460@l
    lfs f1, lbl_808813BC
    mr r21, r4
    addi r4, r5, 0x11b
    stw r7, 0x140(r1)
    mr r23, r3
    li r5, 0x0
    stw r0, 0xe8(r3)
    addi r3, r1, 0x10
    li r6, -0x1
    stw r7, 0x148(r1)
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x38(r23)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_800F0D14_0000160C
    lwz r0, 0x38(r23)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r23)
lbl_fn_800F0D14_0000160C:
    li r0, 0x0
    stw r0, 0x48(r23)
    lwz r6, 0x50(r23)
    addi r3, r23, 0xc4
    lfs f1, lbl_808813B8
    li r4, 0x0
    lwz r0, 0x38(r6)
    li r5, 0x1c
    lfs f0, lbl_808813BC
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    lwz r6, 0x50(r23)
    stfs f1, 0x100(r6)
    lwz r6, 0x50(r23)
    stfs f0, 0x104(r6)
    bl memset
    cmpwi r21, 0x1
    stw r21, 0x4c(r23)
    lfs f29, lbl_808813B8
    lfs f30, lbl_808813C8
    bne lbl_fn_800F0D14_00001668
    lfs f29, lbl_808813CC
    fmr f30, f29
lbl_fn_800F0D14_00001668:
    lwz r4, 0x50(r23)
    lis r3, lbl_80735460@ha
    addi r22, r3, lbl_80735460@l
    addi r3, r22, 0x128
    addi r24, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r24
    li r5, 0x4
    bl fn_801FED24
    mr r21, r23
    li r24, 0x0
lbl_fn_800F0D14_0000169C:
    fmr f1, f30
    lwz r3, 0x54(r21)
    addi r4, r22, 0x128
    li r5, 0x4
    bl fn_801F6D7C
    fmr f1, f30
    lwz r3, 0x70(r21)
    addi r4, r22, 0x128
    li r5, 0x4
    bl fn_801F6D7C
    fmr f1, f30
    lwz r3, 0x8c(r21)
    addi r4, r22, 0x128
    li r5, 0x4
    bl fn_801F6D7C
    addi r24, r24, 0x1
    addi r21, r21, 0x4
    cmplwi r24, 0x7
    blt lbl_fn_800F0D14_0000169C
    lwz r29, lbl_8087F4F0
    lis r3, lbl_80735448@ha
    lwzu r0, 0x601c(r29)
    lis r22, lbl_80735460@ha
    lfs f29, lbl_808813B8
    mr r28, r23
    lfd f31, lbl_80735448@l(r3)
    mr r27, r29
    stw r0, 0xe0(r23)
    addi r22, r22, lbl_80735460@l
    lfs f30, lbl_808813BC
    li r26, 0x0
    li r30, 0x1
    li r31, 0x0
    b lbl_fn_800F0D14_000018FC
lbl_fn_800F0D14_00001724:
    lwz r3, 0x54(r28)
    stfs f29, 0x50(r3)
    lwz r3, 0x70(r28)
    stfs f29, 0x50(r3)
    lwz r0, 0x90(r27)
    cmpwi r0, 0x0
    ble lbl_fn_800F0D14_00001754
    lwz r3, 0x8c(r28)
    stfs f29, 0x50(r3)
    lwz r3, 0xa8(r28)
    stfs f29, 0x50(r3)
    stw r30, 0xc4(r28)
lbl_fn_800F0D14_00001754:
    lwz r0, 0x90(r27)
    lwz r24, 0x4(r27)
    cmpwi r0, 0x0
    lwz r3, 0x84(r27)
    lwz r0, 0x88(r27)
    addi r21, r24, 0x7d4
    add r25, r3, r0
    ble lbl_fn_800F0D14_000017E8
    lwz r4, 0xa0(r21)
    mr r3, r21
    subi r4, r4, 0x1
    bl fn_801334CC
    lwz r0, 0x90(r27)
    cmpwi r0, 0x1
    bne lbl_fn_800F0D14_000017D4
    lwz r4, 0x1ac(r21)
    xoris r0, r3, 0x8000
    stw r0, 0x14c(r1)
    subf r4, r25, r4
    add r0, r3, r4
    lfd f0, 0x148(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    fsubs f0, f0, f31
    lfd f1, 0x140(r1)
    stfs f30, 0x3c(r1)
    fsubs f1, f1, f31
    stw r4, 0x30(r1)
    fdivs f0, f1, f0
    stw r31, 0x34(r1)
    stfs f0, 0x38(r1)
    b lbl_fn_800F0D14_00001874
lbl_fn_800F0D14_000017D4:
    stw r3, 0x30(r1)
    stw r31, 0x34(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    b lbl_fn_800F0D14_00001874
lbl_fn_800F0D14_000017E8:
    lwz r4, 0xa0(r21)
    cmpwi r4, 0x63
    blt lbl_fn_800F0D14_00001808
    stw r31, 0x30(r1)
    stw r31, 0x34(r1)
    stfs f29, 0x38(r1)
    stfs f29, 0x3c(r1)
    b lbl_fn_800F0D14_00001874
lbl_fn_800F0D14_00001808:
    mr r3, r21
    bl fn_801334CC
    lwz r5, 0x1ac(r21)
    xoris r4, r3, 0x8000
    stw r4, 0x14c(r1)
    subf r0, r25, r5
    subf r6, r5, r3
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    lfd f0, 0x148(r1)
    add r0, r25, r6
    lfd f1, 0x140(r1)
    xoris r3, r5, 0x8000
    stw r4, 0x14c(r1)
    fsubs f2, f0, f31
    fsubs f3, f1, f31
    stw r3, 0x144(r1)
    lfd f0, 0x148(r1)
    lfd f1, 0x140(r1)
    fdivs f2, f3, f2
    stw r0, 0x30(r1)
    stw r6, 0x34(r1)
    stfs f2, 0x38(r1)
    fsubs f1, f1, f31
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    stfs f0, 0x3c(r1)
lbl_fn_800F0D14_00001874:
    lwz r0, 0xe8(r23)
    slwi r0, r0, 4
    add r0, r23, r0
    addic. r3, r0, 0xec
    beq lbl_fn_800F0D14_000018A8
    lwz r0, 0x30(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x34(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x38(r1)
    stw r0, 0x8(r3)
    lwz r0, 0x3c(r1)
    stw r0, 0xc(r3)
lbl_fn_800F0D14_000018A8:
    lwz r3, 0xe8(r23)
    addi r4, r22, 0x133
    addi r0, r3, 0x1
    stw r0, 0xe8(r23)
    lwz r5, 0x60(r24)
    lwz r3, 0x54(r28)
    lwz r5, 0x8(r5)
    bl fn_801F837C
    lwz r5, 0x60(r24)
    addi r4, r22, 0x133
    lwz r3, 0x70(r28)
    lwz r5, 0x8(r5)
    bl fn_801F837C
    lwz r5, 0x60(r24)
    addi r4, r22, 0x138
    lwz r3, 0x70(r28)
    lwz r5, 0x8(r5)
    bl fn_801F837C
    addi r28, r28, 0x4
    addi r27, r27, 0x90
    addi r26, r26, 0x1
lbl_fn_800F0D14_000018FC:
    lwz r0, 0x0(r29)
    cmplw r26, r0
    blt lbl_fn_800F0D14_00001724
    stw r0, 0x144(r1)
    lis r4, lbl_80735440@ha
    lis r3, lbl_80735460@ha
    li r24, 0x0
    lfd f1, lbl_80735440@l(r4)
    addi r26, r3, lbl_80735460@l
    lfd f0, 0x140(r1)
    addi r4, r26, 0x107
    stw r24, 0x160(r23)
    fsubs f29, f0, f1
    lwz r3, 0x17c(r23)
    lfs f0, lbl_808813B8
    stfs f0, 0x50(r3)
    fmr f1, f29
    lwz r3, 0x17c(r23)
    bl fn_801F6C80
    lwz r3, 0x17c(r23)
    addi r4, r26, 0x141
    la r5, lbl_8087D970
    bl fn_801F837C
    lwz r3, 0x17c(r23)
    addi r4, r26, 0x148
    la r5, lbl_8087D970
    bl fn_801F837C
    lwz r3, 0x180(r23)
    fmr f1, f29
    lfs f0, lbl_808813B8
    addi r4, r26, 0x107
    stfs f0, 0x50(r3)
    lwz r3, 0x180(r23)
    bl fn_801F6C80
    lwz r3, 0x180(r23)
    addi r4, r26, 0x141
    la r5, lbl_8087D970
    bl fn_801F837C
    lwz r3, 0x180(r23)
    addi r4, r26, 0x148
    la r5, lbl_8087D970
    bl fn_801F837C
    li r0, -0x1
    li r25, 0x1
    stw r24, 0x168(r23)
    mr r21, r23
    addi r24, r1, 0x14
    li r22, 0x0
    stw r0, 0x164(r23)
    li r27, 0x0
    stw r25, 0x16c(r23)
    b lbl_fn_800F0D14_00001AA8
lbl_fn_800F0D14_000019CC:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_800F0D14_00001AA0
    stw r25, 0x14(r1)
    addi r9, r1, 0x1c
    addi r10, r1, 0x18
    li r5, 0x1
    stw r24, 0x8(r1)
    li r6, -0x1
    li r7, 0x0
    li r8, 0x0
    lwz r4, 0x174(r21)
    bl fn_80444020
    cmpwi r3, 0x0
    beq lbl_fn_800F0D14_00001AA0
    mr r5, r27
    addi r3, r1, 0x20
    addi r4, r26, 0x14f
    crclr 6
    bl sprintf
    addi r3, r1, 0xc0
    li r4, 0x0
    li r5, 0x80
    bl memset
    lwz r4, 0x1c(r1)
    addi r3, r1, 0xc0
    lwz r5, 0x18(r1)
    lwz r6, 0x14(r1)
    bl fn_80444CF8
    lwz r3, 0x17c(r23)
    addi r4, r1, 0x20
    addi r5, r1, 0xc0
    bl fn_801F837C
    lwz r3, 0x180(r23)
    addi r4, r1, 0x20
    addi r5, r1, 0xc0
    bl fn_801F837C
    cmpwi r22, 0x1
    blt lbl_fn_800F0D14_00001A84
    lwz r0, 0x1c(r1)
    stw r0, 0x164(r23)
    lwz r0, 0x18(r1)
    stw r0, 0x168(r23)
    lwz r0, 0x14(r1)
    stw r0, 0x16c(r23)
    b lbl_fn_800F0D14_00001A98
lbl_fn_800F0D14_00001A84:
    lwz r3, lbl_8087F490
    lwz r4, 0x1c(r1)
    lwz r5, 0x18(r1)
    lwz r6, 0x14(r1)
    bl fn_803E5E64
lbl_fn_800F0D14_00001A98:
    stw r25, 0x160(r23)
    addi r22, r22, 0x1
lbl_fn_800F0D14_00001AA0:
    addi r21, r21, 0x4
    addi r27, r27, 0x1
lbl_fn_800F0D14_00001AA8:
    lwz r0, 0x170(r23)
    cmplw r27, r0
    blt lbl_fn_800F0D14_000019CC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800F0D14_00001B50
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_800F0D14_00001B50
    lwz r0, 0x170(r23)
    cmplwi r0, 0x1
    bne lbl_fn_800F0D14_00001B50
    lwz r3, lbl_8087F4F0
    li r4, 0x143
    li r5, 0x5
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    addi r3, r1, 0x40
    li r4, 0x0
    li r5, 0x80
    bl memset
    addi r3, r1, 0x40
    li r4, 0x143
    li r5, 0x5
    li r6, 0x1
    bl fn_80444CF8
    lis r24, lbl_80735460@ha
    lwz r3, 0x17c(r23)
    addi r24, r24, lbl_80735460@l
    addi r5, r1, 0x40
    addi r4, r24, 0x148
    bl fn_801F837C
    lwz r3, 0x180(r23)
    addi r4, r24, 0x148
    addi r5, r1, 0x40
    bl fn_801F837C
    addi r22, r22, 0x1
lbl_fn_800F0D14_00001B50:
    lis r4, lbl_80735460@ha
    cmpwi r22, 0x2
    addi r4, r4, lbl_80735460@l
    lwz r3, 0x17c(r23)
    addi r4, r4, 0x158
    blt lbl_fn_800F0D14_00001B70
    lfs f1, lbl_808813BC
    b lbl_fn_800F0D14_00001B74
lbl_fn_800F0D14_00001B70:
    lfs f1, lbl_808813B8
lbl_fn_800F0D14_00001B74:
    bl fn_801F6C80
    lis r4, lbl_80735460@ha
    cmpwi r22, 0x2
    addi r4, r4, lbl_80735460@l
    lwz r3, 0x180(r23)
    addi r4, r4, 0x158
    blt lbl_fn_800F0D14_00001B98
    lfs f1, lbl_808813BC
    b lbl_fn_800F0D14_00001B9C
lbl_fn_800F0D14_00001B98:
    lfs f1, lbl_808813B8
lbl_fn_800F0D14_00001B9C:
    bl fn_801F6C80
    li r0, 0x0
    stw r0, 0x170(r23)
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    psq_l f29, 0x188(r1), 0, 0
    lfd f29, 0x180(r1)
    addi r11, r1, 0x180
    bl _restgpr_21
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
