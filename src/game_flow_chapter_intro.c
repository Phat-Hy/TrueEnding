#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void __register_global_object(void);
extern void _restgpr_14(void);
extern void _restgpr_18(void);
extern void _savegpr_14(void);
extern void _savegpr_18(void);
extern void fn_8003EA3C(void);
extern void fn_8003EFB0(void);
extern void fn_80051C78(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB58C(void);
extern void fn_8014EEC4(void);
extern void fn_8015EB2C(void);
extern void fn_8015EFAC(void);
extern void fn_8016F3D0(void);
extern void fn_80178668(void);
extern void fn_80178864(void);
extern void fn_8017C7F8(void);
extern void fn_80206B9C(void);
extern void fn_8020EF04(void);
extern void fn_80211480(void);
extern void fn_80219E6C(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_803748E0(void);
extern void fn_803750E4(void);
extern void fn_8037D4C0(void);
extern void fn_803BD2B0(void);
extern void fn_803BD49C(void);
extern void fn_803E9608(void);
extern void fn_803EBA54(void);
extern void fn_804439FC(void);
extern void fn_804AE3BC(void);
extern void fn_804B6204(void);
extern void fn_804B671C(void);
extern void fn_804D818C(void);
extern void fn_804DF4BC(void);
extern void fn_804E651C(void);
extern void fn_804EAA88(void);
extern void fn_804FB224(void);
extern void fn_8050128C(void);
extern void fn_80502730(void);
extern void fn_80502874(void);
extern void fn_80506560(void);
extern void fn_805075C8(void);
extern void fn_80507658(void);
extern void fn_805076FC(void);
extern void fn_80507768(void);
extern void fn_8050C1DC(void);
extern void fn_8050C7F4(void);
extern void fn_8050C844(void);
extern void fn_8050DDE0(void);
extern void fn_8050E098(void);
extern void fn_8050EAEC(void);
extern void fn_8054D798(void);
extern void fn_80680CF8(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);

/* External data declarations */
extern u8 lbl_80791018[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8AE8[];
extern u8 lbl_807C8F48[];

/* Small data declarations */
extern u32 lbl_8087E1C4;
extern u32 lbl_8087EE74;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F5A4;
extern u32 lbl_8087F5A8;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887590;
extern u32 lbl_808875D0;

/* Function declarations */
void fn_804E4490(void);
void fn_804E49A8(void);
void fn_804E4A24(void);
void fn_804E4A64(void);
void fn_804E4B48(void);
void fn_804E4C38(void);
void fn_804E4C60(void);
void fn_804E4D74(void);
void fn_804E4DD8(void);
void fn_804E4E78(void);
void fn_804E4EB4(void);
void fn_804E5BC8(void);

asm void fn_804E4490(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    bl fn_804DF4BC
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4490_00000058
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4490_0000004C
    li r0, 0x0
    b lbl_fn_804E4490_00000074
lbl_fn_804E4490_0000004C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E4490_00000074
lbl_fn_804E4490_00000058:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4490_0000006C
    li r3, 0x0
    b lbl_fn_804E4490_00000070
lbl_fn_804E4490_0000006C:
    bl fn_806A8E40
lbl_fn_804E4490_00000070:
    clrlwi r0, r3, 24
lbl_fn_804E4490_00000074:
    lwz r5, 0x5e8(r28)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E4490_000000BC
lbl_fn_804E4490_0000008C:
    lwz r0, 0x5e4(r28)
    add r30, r0, r3
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E4490_000000B4
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804E4490_000000B4
    b lbl_fn_804E4490_000000C0
lbl_fn_804E4490_000000B4:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E4490_0000008C
lbl_fn_804E4490_000000BC:
    li r30, 0x0
lbl_fn_804E4490_000000C0:
    mr r3, r28
    mr r4, r30
    bl fn_804E4B48
    lwz r4, 0x2b88(r28)
    mr r29, r3
    cmpwi r4, 0x0
    beq lbl_fn_804E4490_000000F8
    subi r0, r4, 0x1
    mr r3, r28
    mulli r0, r0, 0xd5c
    add r4, r28, r0
    addi r4, r4, 0x2b8c
    bl fn_804E4B48
    b lbl_fn_804E4490_000000FC
lbl_fn_804E4490_000000F8:
    li r3, -0x1
lbl_fn_804E4490_000000FC:
    cmpw r29, r3
    bne lbl_fn_804E4490_00000114
    lwz r0, 0x540(r28)
    cmpwi r0, 0x2
    beq lbl_fn_804E4490_00000114
    li r29, 0x5
lbl_fn_804E4490_00000114:
    lwz r0, 0x540(r28)
    cmpwi r0, 0x0
    bne lbl_fn_804E4490_00000174
    cmpwi r29, 0x0
    bne lbl_fn_804E4490_00000130
    li r0, 0x0
    b lbl_fn_804E4490_000001CC
lbl_fn_804E4490_00000130:
    lwz r3, 0x2b88(r28)
    cmpwi r3, 0x0
    beq lbl_fn_804E4490_00000158
    subi r0, r3, 0x1
    mr r3, r28
    mulli r0, r0, 0xd5c
    add r4, r28, r0
    addi r4, r4, 0x2b8c
    bl fn_804E4B48
    b lbl_fn_804E4490_0000015C
lbl_fn_804E4490_00000158:
    li r3, -0x1
lbl_fn_804E4490_0000015C:
    cmpwi r3, 0x0
    beq lbl_fn_804E4490_0000016C
    li r0, 0x1
    b lbl_fn_804E4490_000001CC
lbl_fn_804E4490_0000016C:
    li r0, 0x2
    b lbl_fn_804E4490_000001CC
lbl_fn_804E4490_00000174:
    cmpwi r0, 0x1
    bne lbl_fn_804E4490_000001BC
    mr r3, r28
    bl fn_804E4C60
    cmpwi r3, 0x3
    beq lbl_fn_804E4490_000001B4
    mr r3, r28
    bl fn_804E4C60
    lwz r0, 0xd0(r30)
    extrwi r0, r0, 4, 6
    cmplw r0, r3
    bne lbl_fn_804E4490_000001AC
    li r0, 0x0
    b lbl_fn_804E4490_000001CC
lbl_fn_804E4490_000001AC:
    li r0, 0x1
    b lbl_fn_804E4490_000001CC
lbl_fn_804E4490_000001B4:
    li r0, 0x2
    b lbl_fn_804E4490_000001CC
lbl_fn_804E4490_000001BC:
    cntlzw r0, r29
    extrwi r0, r0, 1, 26
    neg r3, r0
    addi r0, r3, 0x4
lbl_fn_804E4490_000001CC:
    lwz r6, lbl_8087F628
    addis r5, r28, 0x1
    mr r3, r28
    mr r4, r30
    stw r0, 0x2b84(r28)
    addi r31, r6, 0x430
    stw r29, -0x6994(r5)
    bl fn_804E4A64
    addis r4, r28, 0x1
    lwz r5, 0x55c(r28)
    stw r3, -0x6990(r4)
    mr r6, r3
    lwz r4, 0x540(r28)
    addi r3, r28, 0x610
    bl fn_805076FC
    addis r4, r28, 0x1
    stw r3, -0x6984(r4)
    lwz r0, 0x7f8(r31)
    add r5, r0, r3
    stw r5, -0x6980(r4)
    addi r3, r28, 0x610
    lwz r4, 0x7f8(r31)
    bl fn_80507658
    addis r4, r28, 0x1
    cmpwi r3, 0x0
    stw r3, -0x6978(r4)
    beq lbl_fn_804E4490_00000258
    lwz r4, -0x6980(r4)
    addi r3, r28, 0x610
    bl fn_805075C8
    addis r4, r28, 0x1
    lwz r0, 0xc(r3)
    stw r0, -0x6974(r4)
    lwz r0, 0x10(r3)
    stw r0, -0x6970(r4)
lbl_fn_804E4490_00000258:
    addis r4, r28, 0x1
    addi r3, r28, 0x610
    lwz r4, -0x6980(r4)
    bl fn_805075C8
    addis r4, r28, 0x1
    stw r3, -0x697c(r4)
    addi r3, r28, 0x610
    lwz r4, -0x6980(r4)
    bl fn_80507768
    addis r5, r28, 0x1
    lwz r4, -0x6980(r5)
    cmpw r4, r3
    ble lbl_fn_804E4490_000002A0
    lwz r0, -0x6984(r5)
    subf r4, r3, r4
    stw r3, -0x6980(r5)
    subf r0, r4, r0
    stw r0, -0x6984(r5)
lbl_fn_804E4490_000002A0:
    addis r3, r28, 0x1
    lwz r4, 0x7f8(r31)
    lwz r0, -0x6984(r3)
    add r0, r4, r0
    stw r0, 0x7f8(r31)
    stw r0, 0xa00(r31)
    lwz r3, lbl_8087F628
    addi r3, r3, 0x430
    bl fn_8050EAEC
    lwz r3, lbl_8087F610
    lwz r3, 0x514(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804E4490_000002E4
    mr r5, r31
    li r4, 0x1
    li r6, 0x9f0
    bl fn_80502874
lbl_fn_804E4490_000002E4:
    lwz r4, 0x540(r28)
    mr r6, r29
    lwz r5, 0x560(r28)
    addi r3, r28, 0x69c
    bl fn_80506560
    addis r4, r28, 0x1
    li r0, 0x1
    stw r3, -0x698c(r4)
    stw r0, -0x6988(r4)
    bl fn_80206B9C
    cmpwi r3, 0x0
    bne lbl_fn_804E4490_00000328
    addis r3, r28, 0x1
    lwz r3, -0x698c(r3)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_804E4490_000003D0
lbl_fn_804E4490_00000328:
    lwz r3, 0x514(r28)
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804E4490_000003D0
    addis r4, r28, 0x1
    addis r3, r3, 0x1
    lwz r4, -0x698c(r4)
    subi r3, r3, 0x61a0
    bl fn_803BD49C
    cmpwi r3, 0xa
    blt lbl_fn_804E4490_000003D0
    addis r3, r28, 0x1
    lwz r4, -0x698c(r3)
    subis r0, r4, 0x1
    cmplwi r0, 0x890d
    beq lbl_fn_804E4490_0000038C
    cmplwi r0, 0x890c
    beq lbl_fn_804E4490_00000398
    cmplwi r0, 0x890b
    beq lbl_fn_804E4490_000003A4
    cmplwi r0, 0x890a
    beq lbl_fn_804E4490_000003B0
    cmplwi r0, 0x8909
    beq lbl_fn_804E4490_000003BC
    b lbl_fn_804E4490_000003C8
lbl_fn_804E4490_0000038C:
    li r0, 0x2b3
    stw r0, -0x698c(r3)
    b lbl_fn_804E4490_000003D0
lbl_fn_804E4490_00000398:
    li r0, 0x28a
    stw r0, -0x698c(r3)
    b lbl_fn_804E4490_000003D0
lbl_fn_804E4490_000003A4:
    li r0, 0x28b
    stw r0, -0x698c(r3)
    b lbl_fn_804E4490_000003D0
lbl_fn_804E4490_000003B0:
    li r0, 0x296
    stw r0, -0x698c(r3)
    b lbl_fn_804E4490_000003D0
lbl_fn_804E4490_000003BC:
    li r0, 0x295
    stw r0, -0x698c(r3)
    b lbl_fn_804E4490_000003D0
lbl_fn_804E4490_000003C8:
    li r0, 0x295
    stw r0, -0x698c(r3)
lbl_fn_804E4490_000003D0:
    li r0, 0x8
    stw r0, 0x354(r28)
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_804E4490_00000460
lbl_fn_804E4490_000003E4:
    lwz r0, lbl_8087F628
    add r5, r28, r3
    addi r7, r7, 0x1
    add r6, r0, r3
    addi r3, r3, 0x34
    lbz r0, 0x274(r6)
    stb r0, 0x358(r5)
    lwz r0, 0x278(r6)
    stw r0, 0x35c(r5)
    lwz r0, 0x27c(r6)
    stw r0, 0x360(r5)
    lwz r0, 0x280(r6)
    stw r0, 0x364(r5)
    lwz r0, 0x288(r6)
    lwz r4, 0x284(r6)
    stw r4, 0x368(r5)
    stw r0, 0x36c(r5)
    lwz r0, 0x290(r6)
    lwz r4, 0x28c(r6)
    stw r4, 0x370(r5)
    stw r0, 0x374(r5)
    lwz r0, 0x298(r6)
    lwz r4, 0x294(r6)
    stw r4, 0x378(r5)
    stw r0, 0x37c(r5)
    lwz r0, 0x2a0(r6)
    lwz r4, 0x29c(r6)
    stw r4, 0x380(r5)
    stw r0, 0x384(r5)
    lwz r0, 0x2a4(r6)
    stw r0, 0x388(r5)
lbl_fn_804E4490_00000460:
    lwz r0, 0x354(r28)
    cmplw r7, r0
    blt lbl_fn_804E4490_000003E4
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1012
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804E4490_000004A8
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E4490_000004A8:
    li r3, 0x0
    li r0, 0xa
    stw r3, lbl_8087F5FC
    addis r3, r28, 0x1
    addi r28, r1, 0xc
    sth r0, 0x8(r1)
    lbz r0, 0xcc(r30)
    stw r0, 0xc(r1)
    lwz r0, -0x698c(r3)
    stw r0, 0x10(r1)
    bl fn_804AE3BC
    mr r6, r28
    li r4, -0x1
    li r5, 0x1012
    li r7, 0x1
    bl fn_8050E098
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804E49A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r4, r3, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, -0x698c(r4)
    cmpwi r3, 0x0
    ble lbl_fn_804E49A8_00000580
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_804E49A8_00000580
    lwz r3, 0x514(r31)
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804E49A8_00000580
    addis r5, r31, 0x1
    addis r3, r3, 0x1
    lwz r4, -0x698c(r5)
    subi r3, r3, 0x61a0
    lwz r5, -0x6988(r5)
    bl fn_803BD2B0
    cmpwi r3, 0x0
    beq lbl_fn_804E49A8_00000580
    lwz r3, 0x514(r31)
    bl fn_80502730
lbl_fn_804E49A8_00000580:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804E4A24(void)
{
    nofralloc
    lwz r4, 0x514(r3)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_804E4A24_000005B4
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804E4A24_000005B4
    li r3, 0x1
lbl_fn_804E4A24_000005B4:
    cmpwi r3, 0x0
    beq lbl_fn_804E4A24_000005C8
    lwz r3, 0x48(r4)
    lwz r3, 0x4(r3)
    blr
lbl_fn_804E4A24_000005C8:
    lis r3, 0x2
    subi r3, r3, 0x69c0
    blr
}

asm void fn_804E4A64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x540(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4A64_00000658
    lwz r0, 0x2b84(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4A64_00000600
    li r3, 0x0
    b lbl_fn_804E4A64_000006A8
lbl_fn_804E4A64_00000600:
    cmpwi r0, 0x1
    bne lbl_fn_804E4A64_00000650
    addis r4, r3, 0x1
    lwz r0, -0x6994(r4)
    cmpwi r0, 0x5
    bne lbl_fn_804E4A64_00000650
    lwz r4, 0x2b88(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804E4A64_0000063C
    subi r0, r4, 0x1
    mulli r0, r0, 0xd5c
    add r4, r3, r0
    addi r4, r4, 0x2b8c
    bl fn_804E4B48
    b lbl_fn_804E4A64_00000640
lbl_fn_804E4A64_0000063C:
    li r3, -0x1
lbl_fn_804E4A64_00000640:
    cmpwi r3, 0x0
    beq lbl_fn_804E4A64_00000650
    li r3, 0x2
    b lbl_fn_804E4A64_000006A8
lbl_fn_804E4A64_00000650:
    li r3, 0x1
    b lbl_fn_804E4A64_000006A8
lbl_fn_804E4A64_00000658:
    cmpwi r0, 0x1
    bne lbl_fn_804E4A64_0000068C
    lwz r0, 0x2b84(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4A64_00000674
    li r3, 0x0
    b lbl_fn_804E4A64_000006A8
lbl_fn_804E4A64_00000674:
    cmpwi r0, 0x1
    bne lbl_fn_804E4A64_00000684
    li r3, 0x2
    b lbl_fn_804E4A64_000006A8
lbl_fn_804E4A64_00000684:
    li r3, 0x1
    b lbl_fn_804E4A64_000006A8
lbl_fn_804E4A64_0000068C:
    lwz r3, 0x2b84(r3)
    li r0, 0x2
    subi r4, r3, 0x3
    subfic r3, r3, 0x3
    nor r3, r4, r3
    srawi r3, r3, 31
    andc r3, r0, r3
lbl_fn_804E4A64_000006A8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804E4B48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804E4B48_00000774
    cmpwi r0, 0x1
    bne lbl_fn_804E4B48_000006FC
    bl fn_804E4C60
    cmpwi r3, 0x3
    beq lbl_fn_804E4B48_00000788
lbl_fn_804E4B48_000006FC:
    lwz r0, 0x2b88(r29)
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E4B48_00000788
lbl_fn_804E4B48_0000071C:
    cmpwi r9, 0x0
    add r6, r29, r3
    ble lbl_fn_804E4B48_0000074C
    subi r0, r9, 0x1
    lwz r5, 0x38e4(r6)
    mulli r0, r0, 0xd5c
    add r4, r29, r0
    lwz r0, 0x38e4(r4)
    cmpw r5, r0
    beq lbl_fn_804E4B48_0000074C
    add r7, r7, r8
    li r8, 0x0
lbl_fn_804E4B48_0000074C:
    lwz r4, 0x2b8c(r6)
    lwz r0, 0x0(r30)
    cmplw r4, r0
    bne lbl_fn_804E4B48_00000760
    mr r31, r7
lbl_fn_804E4B48_00000760:
    addi r8, r8, 0x1
    addi r9, r9, 0x1
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E4B48_0000071C
    b lbl_fn_804E4B48_00000788
lbl_fn_804E4B48_00000774:
    lwz r4, 0x2b80(r3)
    subfic r3, r4, 0x3
    subi r0, r4, 0x3
    or r0, r3, r0
    srwi r31, r0, 31
lbl_fn_804E4B48_00000788:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804E4C38(void)
{
    nofralloc
    lwz r4, 0x2b88(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804E4C38_000007C8
    subi r0, r4, 0x1
    mulli r0, r0, 0xd5c
    add r4, r3, r0
    addi r4, r4, 0x2b8c
    b fn_804E4B48
lbl_fn_804E4C38_000007C8:
    li r3, -0x1
    blr
}

asm void fn_804E4C60(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    lwz r0, 0x540(r3)
    stmw r27, 0x2c(r1)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_804E4C60_000008CC
    cmpwi r0, 0x1
    bne lbl_fn_804E4C60_000008B4
    addi r30, r1, 0x8
    addi r29, r1, 0x14
    mr r31, r30
    li r28, 0x0
lbl_fn_804E4C60_00000808:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xc
    bl memset
    addi r6, r27, 0x2b8c
    li r5, 0x0
    b lbl_fn_804E4C60_00000844
lbl_fn_804E4C60_00000824:
    lwz r3, 0xd0(r6)
    addi r5, r5, 0x1
    lwz r0, 0xdc(r6)
    addi r6, r6, 0xd5c
    rlwinm r4, r3, 12, 26, 29
    lwzx r3, r31, r4
    add r0, r3, r0
    stwx r0, r31, r4
lbl_fn_804E4C60_00000844:
    lwz r0, 0x2b88(r27)
    cmplw r5, r0
    blt lbl_fn_804E4C60_00000824
    addi r28, r28, 0x1
    lwz r0, 0x0(r30)
    cmpwi r28, 0x3
    stw r0, 0x0(r29)
    addi r30, r30, 0x4
    addi r29, r29, 0x4
    blt lbl_fn_804E4C60_00000808
    lwz r0, 0x18(r1)
    li r4, -0x1
    li r3, 0x3
    cmpw r0, r4
    ble lbl_fn_804E4C60_00000888
    li r3, 0x1
    mr r4, r0
lbl_fn_804E4C60_00000888:
    lwz r0, 0x1c(r1)
    cmpw r0, r4
    ble lbl_fn_804E4C60_00000898
    li r3, 0x2
lbl_fn_804E4C60_00000898:
    cmpwi r3, 0x3
    beq lbl_fn_804E4C60_000008CC
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    cmpw r4, r0
    beq lbl_fn_804E4C60_000008CC
    b lbl_fn_804E4C60_000008D0
lbl_fn_804E4C60_000008B4:
    lwz r3, 0x2b80(r3)
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi r3, r0, 5
    addi r3, r3, 0x1
    b lbl_fn_804E4C60_000008D0
lbl_fn_804E4C60_000008CC:
    li r3, 0x3
lbl_fn_804E4C60_000008D0:
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804E4D74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_804E4D74_00000918
    lwz r0, 0xd0(r4)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_804E4D74_00000918
    addis r3, r3, 0x1
    lwz r3, -0x6984(r3)
    b lbl_fn_804E4D74_00000934
lbl_fn_804E4D74_00000918:
    mr r3, r31
    bl fn_804E4A64
    lwz r4, 0x540(r31)
    mr r6, r3
    lwz r5, 0x55c(r31)
    addi r3, r31, 0x610
    bl fn_805076FC
lbl_fn_804E4D74_00000934:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804E4DD8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, lbl_8087F628
    addis r3, r6, 0x1
    lbz r0, -0x3deb(r3)
    cmplwi r0, 0x1
    bne lbl_fn_804E4DD8_0000098C
    lwz r0, -0x3de8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804E4DD8_0000098C
    li r3, 0x0
    b lbl_fn_804E4DD8_000009D0
lbl_fn_804E4DD8_0000098C:
    lwz r3, lbl_8087F5A4
    bl fn_8050C844
    cmpwi r3, 0x0
    bne lbl_fn_804E4DD8_000009A4
    li r3, 0x0
    b lbl_fn_804E4DD8_000009D0
lbl_fn_804E4DD8_000009A4:
    lwz r4, lbl_8087F628
    lwz r3, lbl_8087F5A4
    addi r4, r4, 0x430
    bl fn_8050C1DC
    cmplwi r31, 0x1
    addi r3, r30, 0x4fc
    li r4, 0x25
    bne lbl_fn_804E4DD8_000009C8
    li r4, 0x23
lbl_fn_804E4DD8_000009C8:
    bl fn_804FB224
    li r3, 0x1
lbl_fn_804E4DD8_000009D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804E4E78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8087F5A4
    bl fn_8050C7F4
    addi r3, r31, 0x4fc
    li r4, 0xa
    bl fn_804FB224
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804E4EB4(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xe0
    bl _savegpr_14
    lis r22, lbl_807C6BB8@ha
    mr r15, r3
    addi r22, r22, lbl_807C6BB8@l
    li r17, 0x0
    li r31, 0x0
    lis r29, 0x8000
    lis r25, fn_804D818C@ha
    lis r26, lbl_807C8AE8@ha
    li r27, 0x1
    li r24, 0x2
    li r14, 0x103b
    li r28, 0x0
    li r30, -0x1
    b lbl_fn_804E4EB4_00001714
lbl_fn_804E4EB4_00000A70:
    cmpwi r17, 0x0
    blt lbl_fn_804E4EB4_00000A8C
    cmpw r17, r0
    bge lbl_fn_804E4EB4_00000A8C
    lwz r0, 0x5e4(r15)
    add r23, r0, r31
    b lbl_fn_804E4EB4_00000A90
lbl_fn_804E4EB4_00000A8C:
    li r23, 0x0
lbl_fn_804E4EB4_00000A90:
    lwz r0, 0xd0(r23)
    srwi. r0, r0, 31
    beq lbl_fn_804E4EB4_0000170C
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4EB4_00000AD0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_00000AC4
    li r0, 0x0
    b lbl_fn_804E4EB4_00000AEC
lbl_fn_804E4EB4_00000AC4:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E4EB4_00000AEC
lbl_fn_804E4EB4_00000AD0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_00000AE4
    li r3, 0x0
    b lbl_fn_804E4EB4_00000AE8
lbl_fn_804E4EB4_00000AE4:
    bl fn_806A8E40
lbl_fn_804E4EB4_00000AE8:
    clrlwi r0, r3, 24
lbl_fn_804E4EB4_00000AEC:
    lwz r5, 0x5e8(r15)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E4EB4_00000B34
lbl_fn_804E4EB4_00000B04:
    lwz r0, 0x5e4(r15)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E4EB4_00000B2C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804E4EB4_00000B2C
    b lbl_fn_804E4EB4_00000B38
lbl_fn_804E4EB4_00000B2C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E4EB4_00000B04
lbl_fn_804E4EB4_00000B34:
    li r5, 0x0
lbl_fn_804E4EB4_00000B38:
    cmplw r23, r5
    beq lbl_fn_804E4EB4_00000C4C
    lwz r5, lbl_8087F628
    lwz r4, 0x5e4(r15)
    addis r3, r5, 0x1
    lwz r18, lbl_8087F610
    lbz r0, -0x3deb(r3)
    add r16, r4, r31
    cmpwi r0, 0x0
    bne lbl_fn_804E4EB4_00000B80
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_00000B74
    li r0, 0x0
    b lbl_fn_804E4EB4_00000B9C
lbl_fn_804E4EB4_00000B74:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E4EB4_00000B9C
lbl_fn_804E4EB4_00000B80:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_00000B94
    li r3, 0x0
    b lbl_fn_804E4EB4_00000B98
lbl_fn_804E4EB4_00000B94:
    bl fn_806A8E40
lbl_fn_804E4EB4_00000B98:
    clrlwi r0, r3, 24
lbl_fn_804E4EB4_00000B9C:
    lwz r5, 0x5e8(r18)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E4EB4_00000BE4
lbl_fn_804E4EB4_00000BB4:
    lwz r0, 0x5e4(r18)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E4EB4_00000BDC
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804E4EB4_00000BDC
    b lbl_fn_804E4EB4_00000BE8
lbl_fn_804E4EB4_00000BDC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E4EB4_00000BB4
lbl_fn_804E4EB4_00000BE4:
    li r5, 0x0
lbl_fn_804E4EB4_00000BE8:
    cmpwi r5, 0x0
    beq lbl_fn_804E4EB4_00000C24
    cmpwi r16, 0x0
    beq lbl_fn_804E4EB4_00000C24
    beq lbl_fn_804E4EB4_00000C18
    lbz r0, 0xcc(r16)
    cmplwi r0, 0xff
    beq lbl_fn_804E4EB4_00000C18
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804E4EB4_00000C18
    li r0, 0x1
    b lbl_fn_804E4EB4_00000C1C
lbl_fn_804E4EB4_00000C18:
    li r0, 0x0
lbl_fn_804E4EB4_00000C1C:
    cmpwi r0, 0x0
    bne lbl_fn_804E4EB4_00000C2C
lbl_fn_804E4EB4_00000C24:
    li r0, 0x0
    b lbl_fn_804E4EB4_00000C44
lbl_fn_804E4EB4_00000C2C:
    lbz r0, 0xcc(r16)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_804E4EB4_00000C44:
    cmpwi r0, 0x1
    bne lbl_fn_804E4EB4_0000170C
lbl_fn_804E4EB4_00000C4C:
    lwz r3, 0x0(r23)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804E4EB4_0000170C
    lwz r5, 0xd48(r23)
    cmpwi r5, 0x0
    ble lbl_fn_804E4EB4_0000170C
    lwz r4, lbl_8087F610
    li r16, 0x0
    lwz r0, 0x540(r4)
    cmpwi r0, 0x2
    bne lbl_fn_804E4EB4_00000C88
    lwz r0, 0x5c4(r4)
    b lbl_fn_804E4EB4_00000CA0
lbl_fn_804E4EB4_00000C88:
    lwz r0, 0x5c4(r4)
    lis r4, 0x5555
    addi r4, r4, 0x5556
    mulhw r4, r4, r0
    srwi r0, r4, 31
    add r0, r4, r0
lbl_fn_804E4EB4_00000CA0:
    cmpw r5, r0
    bne lbl_fn_804E4EB4_000011A4
    lwz r0, 0x540(r15)
    cmpwi r0, 0x2
    beq lbl_fn_804E4EB4_00000CD0
    cmpwi r3, 0x0
    beq lbl_fn_804E4EB4_00000CD0
    lwz r0, 0x5a8(r15)
    clrlwi. r0, r0, 24
    bne lbl_fn_804E4EB4_00000CD0
    lwz r0, 0x954(r3)
    stw r0, 0x9f8(r3)
lbl_fn_804E4EB4_00000CD0:
    lbz r0, lbl_8087F5F8
    sth r24, 0x38(r1)
    extsb. r0, r0
    sth r14, 0x3a(r1)
    bne lbl_fn_804E4EB4_00000CF8
    addi r4, r25, fn_804D818C@l
    addi r5, r26, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    stb r27, lbl_8087F5F8
lbl_fn_804E4EB4_00000CF8:
    li r0, 0x5
    stw r28, lbl_8087F5FC
    sth r0, 0x38(r1)
    lbz r0, 0xcc(r23)
    stb r0, 0x3c(r1)
    stb r27, 0x3d(r1)
    lwz r3, 0x0(r23)
    cmpwi r3, 0x0
    bne lbl_fn_804E4EB4_00000D24
    li r0, 0x0
    b lbl_fn_804E4EB4_00000D28
lbl_fn_804E4EB4_00000D24:
    lwz r0, 0x9f8(r3)
lbl_fn_804E4EB4_00000D28:
    stb r0, 0x3e(r1)
    bl fn_804AE3BC
    addi r6, r1, 0x3c
    li r4, -0x1
    li r5, 0x103b
    li r7, 0x1
    bl fn_8050E098
    lwz r3, 0xe4(r23)
    li r18, -0x5
    addi r0, r3, 0x1
    stw r0, 0xe4(r23)
    lwz r19, lbl_8087F610
    lwz r0, 0x564(r19)
    cmpwi r0, 0x0
    blt lbl_fn_804E4EB4_00000D94
    bl OSGetTime
    lwz r6, 0x5bc(r19)
    li r5, 0x0
    lwz r0, 0xf8(r29)
    subfc r4, r6, r4
    lwz r7, 0x5b8(r19)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lwz r0, 0x564(r19)
    subf r0, r4, r0
    b lbl_fn_804E4EB4_00000D98
lbl_fn_804E4EB4_00000D94:
    li r0, -0x1
lbl_fn_804E4EB4_00000D98:
    srwi r0, r0, 31
    xori r0, r0, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804E4EB4_00000DFC
    lwz r0, 0x564(r19)
    cmpwi r0, 0x0
    blt lbl_fn_804E4EB4_00000DE4
    bl OSGetTime
    lwz r6, 0x5bc(r19)
    li r5, 0x0
    lwz r0, 0xf8(r29)
    subfc r4, r6, r4
    lwz r7, 0x5b8(r19)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lwz r0, 0x564(r19)
    subf r0, r4, r0
    b lbl_fn_804E4EB4_00000DE8
lbl_fn_804E4EB4_00000DE4:
    li r0, -0x1
lbl_fn_804E4EB4_00000DE8:
    xori r0, r0, 0x3c
    srawi r3, r0, 1
    rlwinm r0, r0, 0, 26, 29
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804E4EB4_00000DFC:
    cmpwi r0, 0x0
    beq lbl_fn_804E4EB4_00000E08
    li r18, -0xa
lbl_fn_804E4EB4_00000E08:
    lwz r0, 0x50c(r15)
    lwz r4, 0x0(r23)
    cmpwi r0, 0x0
    bne lbl_fn_804E4EB4_00000FB0
    lwz r0, 0x5e8(r15)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E4EB4_00000E5C
lbl_fn_804E4EB4_00000E2C:
    lwz r0, 0x5e4(r15)
    add r20, r0, r3
    lwz r0, 0xd0(r20)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E4EB4_00000E54
    lwz r0, 0x0(r20)
    cmplw r0, r4
    bne lbl_fn_804E4EB4_00000E54
    b lbl_fn_804E4EB4_00000E60
lbl_fn_804E4EB4_00000E54:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E4EB4_00000E2C
lbl_fn_804E4EB4_00000E5C:
    li r20, 0x0
lbl_fn_804E4EB4_00000E60:
    cmpwi r20, 0x0
    beq lbl_fn_804E4EB4_00000FB0
    lwz r0, 0x0(r20)
    cmpwi r0, 0x0
    beq lbl_fn_804E4EB4_00000FB0
    lwz r0, 0xdc(r20)
    addi r3, r20, 0xdc
    lwz r21, 0xdc(r20)
    add r4, r0, r18
    neg r0, r4
    andc r0, r0, r4
    srawi r0, r0, 31
    and r4, r4, r0
    bl fn_8050128C
    lwz r0, 0x540(r15)
    cmpwi r0, 0x2
    beq lbl_fn_804E4EB4_00000FB0
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4EB4_00000ED8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_00000ECC
    li r0, 0x0
    b lbl_fn_804E4EB4_00000EF4
lbl_fn_804E4EB4_00000ECC:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E4EB4_00000EF4
lbl_fn_804E4EB4_00000ED8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_00000EEC
    li r3, 0x0
    b lbl_fn_804E4EB4_00000EF0
lbl_fn_804E4EB4_00000EEC:
    bl fn_806A8E40
lbl_fn_804E4EB4_00000EF0:
    clrlwi r0, r3, 24
lbl_fn_804E4EB4_00000EF4:
    lwz r5, 0x5e8(r15)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E4EB4_00000F3C
lbl_fn_804E4EB4_00000F0C:
    lwz r0, 0x5e4(r15)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E4EB4_00000F34
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804E4EB4_00000F34
    b lbl_fn_804E4EB4_00000F40
lbl_fn_804E4EB4_00000F34:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E4EB4_00000F0C
lbl_fn_804E4EB4_00000F3C:
    li r5, 0x0
lbl_fn_804E4EB4_00000F40:
    cmplw r20, r5
    bne lbl_fn_804E4EB4_00000FB0
    lwz r19, 0xdc(r20)
    cmpw r21, r19
    beq lbl_fn_804E4EB4_00000FB0
    lwz r18, lbl_8087F8A8
    cmpwi r18, 0x0
    beq lbl_fn_804E4EB4_00000FB0
    lwz r4, 0x0(r20)
    addi r3, r1, 0x40
    lwz r12, 0x0(r4)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    stw r28, 0x8(r1)
    mr r3, r18
    addi r6, r1, 0x40
    subf r7, r21, r19
    stw r28, 0xc(r1)
    li r4, 0x8
    la r5, lbl_8087E1C4
    li r8, 0x0
    stw r27, 0x10(r1)
    li r9, 0x1
    li r10, 0x0
    stw r30, 0x14(r1)
    stw r30, 0x18(r1)
    bl fn_8054D798
lbl_fn_804E4EB4_00000FB0:
    lwz r0, 0x540(r15)
    cmpwi r0, 0x2
    bne lbl_fn_804E4EB4_0000124C
    lwz r0, 0x564(r15)
    cmpwi r0, 0x0
    bge lbl_fn_804E4EB4_0000124C
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4EB4_00000FFC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_00000FF0
    li r0, 0x0
    b lbl_fn_804E4EB4_00001018
lbl_fn_804E4EB4_00000FF0:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E4EB4_00001018
lbl_fn_804E4EB4_00000FFC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_00001010
    li r3, 0x0
    b lbl_fn_804E4EB4_00001014
lbl_fn_804E4EB4_00001010:
    bl fn_806A8E40
lbl_fn_804E4EB4_00001014:
    clrlwi r0, r3, 24
lbl_fn_804E4EB4_00001018:
    lwz r5, 0x5e8(r15)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E4EB4_00001060
lbl_fn_804E4EB4_00001030:
    lwz r0, 0x5e4(r15)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E4EB4_00001058
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804E4EB4_00001058
    b lbl_fn_804E4EB4_00001064
lbl_fn_804E4EB4_00001058:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E4EB4_00001030
lbl_fn_804E4EB4_00001060:
    li r5, 0x0
lbl_fn_804E4EB4_00001064:
    cmplw r23, r5
    bne lbl_fn_804E4EB4_0000124C
    lwz r3, 0x0(r23)
    cmpwi r3, 0x0
    beq lbl_fn_804E4EB4_0000124C
    lwz r0, 0x9f8(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_804E4EB4_0000124C
    bl OSGetTime
    lwz r6, 0x5bc(r15)
    li r5, 0x0
    lwz r0, 0xf8(r29)
    subfc r4, r6, r4
    lwz r7, 0x5b8(r15)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lbz r0, lbl_8087F5F8
    addi r18, r4, 0x78
    sth r24, 0x28(r1)
    extsb. r0, r0
    li r0, 0x1002
    sth r0, 0x2a(r1)
    bne lbl_fn_804E4EB4_000010D8
    addi r4, r25, fn_804D818C@l
    addi r5, r26, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    stb r27, lbl_8087F5F8
lbl_fn_804E4EB4_000010D8:
    li r0, 0x6
    stw r28, lbl_8087F5FC
    sth r0, 0x28(r1)
    stw r18, 0x2c(r1)
    bl fn_804AE3BC
    addi r6, r1, 0x2c
    li r4, -0x1
    li r5, 0x1002
    li r7, 0x1
    bl fn_8050E098
    stw r18, 0x564(r15)
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_804E4EB4_00001128
    lfs f1, lbl_808875D0
    li r4, 0x53d
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_804E4EB4_00001128:
    lwz r3, lbl_8087F628
    lwz r4, 0xc2c(r3)
    clrlwi r5, r4, 31
    cmplwi r5, 0x1
    bne lbl_fn_804E4EB4_00001148
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804E4EB4_0000124C
lbl_fn_804E4EB4_00001148:
    cmplwi r5, 0x1
    beq lbl_fn_804E4EB4_00001160
    lwz r0, 0xc2c(r3)
    ori r0, r0, 0x1
    stw r0, 0xc2c(r3)
    b lbl_fn_804E4EB4_00001178
lbl_fn_804E4EB4_00001160:
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804E4EB4_00001178
    lwz r0, 0xc2c(r3)
    ori r0, r0, 0x2
    stw r0, 0xc2c(r3)
lbl_fn_804E4EB4_00001178:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_804E4EB4_0000124C
    lwz r3, lbl_8087F9C0
    li r4, 0x1b0
    stw r27, 0x7c(r3)
    lwz r3, lbl_8087F430
    bl fn_803750E4
    lwz r3, lbl_8087F9C0
    stw r28, 0x7c(r3)
    b lbl_fn_804E4EB4_0000124C
lbl_fn_804E4EB4_000011A4:
    lwz r0, 0x540(r15)
    cmpwi r0, 0x2
    bne lbl_fn_804E4EB4_0000124C
    li r19, 0x0
    li r20, 0x0
    b lbl_fn_804E4EB4_00001240
lbl_fn_804E4EB4_000011BC:
    cmpwi r19, 0x0
    blt lbl_fn_804E4EB4_000011D8
    cmpw r19, r0
    bge lbl_fn_804E4EB4_000011D8
    lwz r0, 0x5e4(r15)
    add r18, r0, r20
    b lbl_fn_804E4EB4_000011DC
lbl_fn_804E4EB4_000011D8:
    li r18, 0x0
lbl_fn_804E4EB4_000011DC:
    lwz r0, 0xd0(r18)
    srwi. r0, r0, 31
    beq lbl_fn_804E4EB4_00001238
    cmplw r18, r23
    beq lbl_fn_804E4EB4_00001238
    lwz r4, 0x0(r18)
    cmpwi r4, 0x0
    beq lbl_fn_804E4EB4_00001238
    lwz r3, 0x0(r23)
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_804E4EB4_00001238
    lwz r3, 0x0(r23)
    lwz r4, 0x0(r18)
    addi r3, r3, 0x5f4
    addi r4, r4, 0x5f4
    bl fn_80051C78
    cmpwi r3, 0x0
    beq lbl_fn_804E4EB4_00001238
    stw r28, 0xd48(r23)
    li r16, 0x1
    b lbl_fn_804E4EB4_0000124C
lbl_fn_804E4EB4_00001238:
    addi r19, r19, 0x1
    addi r20, r20, 0xd5c
lbl_fn_804E4EB4_00001240:
    lwz r0, 0x5e8(r15)
    cmpw r19, r0
    blt lbl_fn_804E4EB4_000011BC
lbl_fn_804E4EB4_0000124C:
    lwz r3, 0xd48(r23)
    subic. r0, r3, 0x1
    stw r0, 0xd48(r23)
    bgt lbl_fn_804E4EB4_0000165C
    lwz r0, 0x5a8(r15)
    clrlwi. r0, r0, 24
    beq lbl_fn_804E4EB4_00001278
    lwz r3, 0x0(r23)
    lwz r0, 0x9f8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804E4EB4_00001418
lbl_fn_804E4EB4_00001278:
    cmpwi r23, 0x0
    li r0, 0x96
    sth r0, 0xd50(r23)
    beq lbl_fn_804E4EB4_000012D0
    lwz r0, 0x0(r23)
    cmpwi r0, 0x0
    beq lbl_fn_804E4EB4_000012D0
    lwz r0, 0xd4c(r23)
    ori r0, r0, 0xc00
    stw r0, 0xd4c(r23)
    lwz r18, 0x0(r23)
    cmpwi r18, 0x0
    beq lbl_fn_804E4EB4_000012D0
    li r3, 0x4fc1
    bl fn_80219E6C
    mr r4, r3
    lwz r3, 0x0(r23)
    mr r7, r18
    li r5, 0x0
    li r6, 0x270f
    li r8, 0x0
    bl fn_80178668
lbl_fn_804E4EB4_000012D0:
    cmpwi r23, 0x0
    beq lbl_fn_804E4EB4_00001344
    lbz r0, lbl_8087F5F8
    sth r24, 0x20(r1)
    extsb. r0, r0
    li r0, 0x103a
    sth r0, 0x22(r1)
    bne lbl_fn_804E4EB4_00001304
    addi r4, r25, fn_804D818C@l
    addi r5, r26, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    stb r27, lbl_8087F5F8
lbl_fn_804E4EB4_00001304:
    li r0, 0x4
    stw r28, lbl_8087F5FC
    sth r0, 0x20(r1)
    lbz r0, 0xcc(r23)
    stb r0, 0x24(r1)
    stb r27, 0x25(r1)
    bl fn_804AE3BC
    addi r6, r1, 0x24
    li r4, -0x1
    li r5, 0x103a
    li r7, 0x1
    bl fn_8050E098
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804E4EB4_00001344:
    li r3, 0x2711
    bl fn_80219E6C
    lwz r0, 0x8c(r1)
    lis r5, lbl_807C6B90@ha
    mr r4, r3
    stw r28, 0x70(r1)
    clrlwi r0, r0, 4
    addi r8, r5, lbl_807C6B90@l
    stw r28, 0x74(r1)
    addi r3, r1, 0x70
    li r7, 0x0
    li r9, 0x0
    stw r28, 0x78(r1)
    li r10, 0x0
    stw r28, 0x7c(r1)
    stw r28, 0x80(r1)
    stw r30, 0x84(r1)
    stw r0, 0x8c(r1)
    stw r30, 0x88(r1)
    lwz r5, 0x0(r23)
    mr r6, r5
    bl fn_8003EA3C
    lwz r3, 0x0(r23)
    li r4, 0xa
    bl fn_8015EFAC
    lwz r4, 0x0(r23)
    mr r3, r15
    mr r6, r16
    li r5, 0x0
    bl fn_804EAA88
    lbz r0, lbl_8087F5F8
    sth r24, 0x30(r1)
    extsb. r0, r0
    sth r14, 0x32(r1)
    bne lbl_fn_804E4EB4_000013E4
    addi r4, r25, fn_804D818C@l
    addi r5, r26, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    stb r27, lbl_8087F5F8
lbl_fn_804E4EB4_000013E4:
    li r0, 0x5
    stw r28, lbl_8087F5FC
    sth r0, 0x30(r1)
    lbz r0, 0xcc(r23)
    stb r0, 0x34(r1)
    stb r28, 0x35(r1)
    bl fn_804AE3BC
    addi r6, r1, 0x34
    li r4, -0x1
    li r5, 0x103b
    li r7, 0x1
    bl fn_8050E098
    b lbl_fn_804E4EB4_0000165C
lbl_fn_804E4EB4_00001418:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4EB4_0000165C
    li r3, 0x2711
    bl fn_80219E6C
    lbz r0, lbl_8087EE74
    mr r16, r3
    lwz r3, 0x6c(r1)
    extsb. r0, r0
    stw r28, 0x50(r1)
    clrlwi r0, r3, 4
    stw r28, 0x54(r1)
    stw r28, 0x58(r1)
    stw r28, 0x5c(r1)
    stw r28, 0x60(r1)
    stw r30, 0x64(r1)
    stw r0, 0x6c(r1)
    stw r30, 0x68(r1)
    bne lbl_fn_804E4EB4_00001490
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8F48@ha
    stw r28, 0x0(r22)
    mr r3, r22
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r28, 0x4(r22)
    stw r28, 0x8(r22)
    stw r27, 0xc(r22)
    bl __register_global_object
    stb r27, lbl_8087EE74
lbl_fn_804E4EB4_00001490:
    stw r28, 0xc(r22)
    lis r5, lbl_807C6B90@ha
    addi r8, r5, lbl_807C6B90@l
    mr r4, r16
    lwz r5, 0x0(r23)
    addi r3, r1, 0x50
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    mr r6, r5
    bl fn_8003EA3C
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804E4EB4_000014F4
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8F48@ha
    stw r28, 0x0(r22)
    mr r3, r22
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r28, 0x4(r22)
    stw r28, 0x8(r22)
    stw r27, 0xc(r22)
    bl __register_global_object
    stb r27, lbl_8087EE74
lbl_fn_804E4EB4_000014F4:
    stw r27, 0xc(r22)
    li r4, 0xa
    lwz r3, 0x0(r23)
    bl fn_8015EFAC
    lwz r3, 0x0(r23)
    li r4, 0x0
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x4
    stw r0, 0x54c(r3)
    lwz r3, 0x0(r23)
    bl fn_8014EEC4
    lwz r3, 0x0(r23)
    li r4, 0x1
    stw r28, 0xd18(r3)
    lwz r3, 0x0(r23)
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r3)
    lwz r3, 0x5e0(r15)
    bl fn_803748E0
    lwz r3, 0x5e0(r15)
    li r4, 0x1f
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r3, 0x5e0(r15)
    li r4, 0x25
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r3, 0x5e0(r15)
    li r4, 0x64
    li r5, 0x7
    li r6, 0x0
    bl fn_80370320
    lwz r3, 0x0(r23)
    li r4, 0x1
    bl fn_8017C7F8
    lwz r3, lbl_8087F4F0
    li r4, 0x72
    li r5, 0x63
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    lwz r3, lbl_8087F4F0
    li r4, 0x70
    li r5, 0x63
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    lwz r3, lbl_8087F610
    lwz r0, 0x50c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4EB4_0000165C
    lwz r3, lbl_8087F628
    lwz r4, 0xc2c(r3)
    rlwinm r5, r4, 0, 27, 27
    cmplwi r5, 0x10
    bne lbl_fn_804E4EB4_00001604
    rlwinm r0, r4, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_804E4EB4_0000165C
lbl_fn_804E4EB4_00001604:
    cmplwi r5, 0x10
    beq lbl_fn_804E4EB4_0000161C
    lwz r0, 0xc2c(r3)
    ori r0, r0, 0x10
    stw r0, 0xc2c(r3)
    b lbl_fn_804E4EB4_00001634
lbl_fn_804E4EB4_0000161C:
    rlwinm r0, r4, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_804E4EB4_00001634
    lwz r0, 0xc2c(r3)
    ori r0, r0, 0x20
    stw r0, 0xc2c(r3)
lbl_fn_804E4EB4_00001634:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_804E4EB4_0000165C
    lwz r3, lbl_8087F9C0
    li r4, 0x1bf
    stw r27, 0x7c(r3)
    lwz r3, lbl_8087F430
    bl fn_803750E4
    lwz r3, lbl_8087F9C0
    stw r28, 0x7c(r3)
lbl_fn_804E4EB4_0000165C:
    lwz r0, 0x5a8(r15)
    clrlwi. r0, r0, 24
    beq lbl_fn_804E4EB4_00001678
    lwz r3, 0x0(r23)
    lwz r0, 0x9f8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804E4EB4_0000170C
lbl_fn_804E4EB4_00001678:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E4EB4_000016AC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_000016A0
    li r0, 0x0
    b lbl_fn_804E4EB4_000016C8
lbl_fn_804E4EB4_000016A0:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E4EB4_000016C8
lbl_fn_804E4EB4_000016AC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E4EB4_000016C0
    li r3, 0x0
    b lbl_fn_804E4EB4_000016C4
lbl_fn_804E4EB4_000016C0:
    bl fn_806A8E40
lbl_fn_804E4EB4_000016C4:
    clrlwi r0, r3, 24
lbl_fn_804E4EB4_000016C8:
    lwz r5, 0x5e8(r15)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E4EB4_0000170C
lbl_fn_804E4EB4_000016E0:
    lwz r0, 0x5e4(r15)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E4EB4_00001704
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    beq lbl_fn_804E4EB4_0000170C
lbl_fn_804E4EB4_00001704:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E4EB4_000016E0
lbl_fn_804E4EB4_0000170C:
    addi r17, r17, 0x1
    addi r31, r31, 0xd5c
lbl_fn_804E4EB4_00001714:
    lwz r0, 0x5e8(r15)
    cmpw r17, r0
    blt lbl_fn_804E4EB4_00000A70
    addi r11, r1, 0xe0
    bl _restgpr_14
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_804E5BC8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_18
    li r29, 0x0
    mr r27, r3
    mr r24, r29
    addi r30, r1, 0x10
    li r26, 0x0
    lis r21, fn_804D818C@ha
    lis r22, lbl_807C8AE8@ha
    li r23, 0x1
    li r19, 0x2
    li r20, 0x103a
    li r25, 0x4
    li r28, -0x1
    b lbl_fn_804E5BC8_0000188C
lbl_fn_804E5BC8_00001780:
    cmpwi r29, 0x0
    blt lbl_fn_804E5BC8_0000179C
    cmpw r29, r0
    bge lbl_fn_804E5BC8_0000179C
    lwz r0, 0x5e4(r27)
    add r31, r0, r26
    b lbl_fn_804E5BC8_000017A0
lbl_fn_804E5BC8_0000179C:
    li r31, 0x0
lbl_fn_804E5BC8_000017A0:
    cmpwi cr1, r31, 0x0
    beq cr1, lbl_fn_804E5BC8_00001884
    lha r3, 0xd50(r31)
    cmpwi r3, 0x0
    ble lbl_fn_804E5BC8_00001884
    subi r0, r3, 0x1
    sth r0, 0xd50(r31)
    extsh. r0, r0
    bne lbl_fn_804E5BC8_00001884
    beq cr1, lbl_fn_804E5BC8_00001804
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804E5BC8_00001804
    lwz r0, 0xd4c(r31)
    rlwinm r0, r0, 0, 22, 19
    stw r0, 0xd4c(r31)
    lwz r18, 0x0(r31)
    cmpwi r18, 0x0
    beq lbl_fn_804E5BC8_00001804
    li r3, 0x4fc1
    bl fn_80219E6C
    mr r4, r3
    lwz r3, 0x0(r31)
    mr r5, r18
    bl fn_80178864
lbl_fn_804E5BC8_00001804:
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E5BC8_00001880
    cmpwi r31, 0x0
    beq lbl_fn_804E5BC8_00001880
    lbz r0, lbl_8087F5F8
    sth r19, 0xc(r1)
    extsb. r0, r0
    sth r20, 0xe(r1)
    bne lbl_fn_804E5BC8_00001844
    addi r4, r21, fn_804D818C@l
    addi r5, r22, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    stb r23, lbl_8087F5F8
lbl_fn_804E5BC8_00001844:
    stw r24, lbl_8087F5FC
    sth r25, 0xc(r1)
    lbz r0, 0xcc(r31)
    stb r0, 0x10(r1)
    stb r24, 0x11(r1)
    bl fn_804AE3BC
    mr r6, r30
    li r4, -0x1
    li r5, 0x103a
    li r7, 0x1
    bl fn_8050E098
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804E5BC8_00001880:
    sth r28, 0xd50(r31)
lbl_fn_804E5BC8_00001884:
    addi r29, r29, 0x1
    addi r26, r26, 0xd5c
lbl_fn_804E5BC8_0000188C:
    lwz r0, 0x5e8(r27)
    cmpw r29, r0
    blt lbl_fn_804E5BC8_00001780
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_000018CC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E5BC8_000018C0
    li r0, 0x0
    b lbl_fn_804E5BC8_000018E8
lbl_fn_804E5BC8_000018C0:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E5BC8_000018E8
lbl_fn_804E5BC8_000018CC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E5BC8_000018E0
    li r3, 0x0
    b lbl_fn_804E5BC8_000018E4
lbl_fn_804E5BC8_000018E0:
    bl fn_806A8E40
lbl_fn_804E5BC8_000018E4:
    clrlwi r0, r3, 24
lbl_fn_804E5BC8_000018E8:
    lwz r5, 0x5e8(r27)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E5BC8_00001930
lbl_fn_804E5BC8_00001900:
    lwz r0, 0x5e4(r27)
    add r30, r0, r3
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E5BC8_00001928
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804E5BC8_00001928
    b lbl_fn_804E5BC8_00001934
lbl_fn_804E5BC8_00001928:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E5BC8_00001900
lbl_fn_804E5BC8_00001930:
    li r30, 0x0
lbl_fn_804E5BC8_00001934:
    cmpwi r30, 0x0
    beq lbl_fn_804E5BC8_00002068
    lwz r0, 0x4fc(r27)
    cmpwi r0, 0x1e
    bne lbl_fn_804E5BC8_000019CC
    lwz r0, 0x50c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_000019CC
    lwz r0, 0x568(r27)
    cmpwi r0, -0x1
    beq lbl_fn_804E5BC8_000019CC
    li r6, 0x0
    li r3, 0x0
    li r0, 0x1
    b lbl_fn_804E5BC8_000019C0
lbl_fn_804E5BC8_00001970:
    cmpwi r6, 0x0
    blt lbl_fn_804E5BC8_0000198C
    cmpw r6, r4
    bge lbl_fn_804E5BC8_0000198C
    lwz r4, 0x5e4(r27)
    add r5, r4, r3
    b lbl_fn_804E5BC8_00001990
lbl_fn_804E5BC8_0000198C:
    li r5, 0x0
lbl_fn_804E5BC8_00001990:
    lwz r4, 0xd0(r5)
    srwi r4, r4, 31
    cmplwi r4, 0x1
    bne lbl_fn_804E5BC8_000019B8
    lwz r5, 0xdc(r5)
    lwz r4, 0x568(r27)
    cmpw r5, r4
    blt lbl_fn_804E5BC8_000019B8
    stw r0, 0x2b80(r27)
    stw r0, 0x50c(r27)
lbl_fn_804E5BC8_000019B8:
    addi r6, r6, 0x1
    addi r3, r3, 0xd5c
lbl_fn_804E5BC8_000019C0:
    lwz r4, 0x5e8(r27)
    cmpw r6, r4
    blt lbl_fn_804E5BC8_00001970
lbl_fn_804E5BC8_000019CC:
    lwz r0, 0x4fc(r27)
    li r29, -0x1
    cmpwi r0, 0x1e
    bne lbl_fn_804E5BC8_00001D58
    lwz r0, 0x50c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_00001D58
    lwz r0, 0x564(r27)
    cmpwi r0, -0x1
    beq lbl_fn_804E5BC8_00001A60
    lwz r0, 0x564(r27)
    cmpwi r0, 0x0
    blt lbl_fn_804E5BC8_00001A34
    bl OSGetTime
    lwz r6, 0x5bc(r27)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x5b8(r27)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lwz r0, 0x564(r27)
    subf r29, r4, r0
    b lbl_fn_804E5BC8_00001A38
lbl_fn_804E5BC8_00001A34:
    li r29, -0x1
lbl_fn_804E5BC8_00001A38:
    cmpwi r29, 0x0
    bgt lbl_fn_804E5BC8_00001A60
    lwz r0, 0xd0(r30)
    li r29, 0x0
    extrwi. r0, r0, 1, 5
    bne lbl_fn_804E5BC8_00001A60
    li r0, 0x1
    stw r0, 0x2b80(r27)
    stw r0, 0x50c(r27)
    stw r0, 0x534(r27)
lbl_fn_804E5BC8_00001A60:
    lwz r0, 0x540(r27)
    cmpwi r0, 0x1
    bne lbl_fn_804E5BC8_00001B28
    addi r3, r1, 0x14
    li r4, 0x0
    li r5, 0xc
    bl memset
    lwz r7, lbl_8087F610
    addi r5, r1, 0x14
    li r8, 0x0
    li r3, 0x0
    b lbl_fn_804E5BC8_00001AF4
lbl_fn_804E5BC8_00001A90:
    cmpwi r8, 0x0
    blt lbl_fn_804E5BC8_00001AB0
    lwz r0, 0x5e8(r7)
    cmpw r8, r0
    bge lbl_fn_804E5BC8_00001AB0
    lwz r0, 0x5e4(r7)
    add r6, r0, r3
    b lbl_fn_804E5BC8_00001AB4
lbl_fn_804E5BC8_00001AB0:
    li r6, 0x0
lbl_fn_804E5BC8_00001AB4:
    lwz r4, 0xd0(r6)
    srwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E5BC8_00001AEC
    lwz r6, 0x0(r6)
    cmpwi r6, 0x0
    beq lbl_fn_804E5BC8_00001AEC
    lwz r0, 0x9f8(r6)
    cmpwi r0, 0x0
    ble lbl_fn_804E5BC8_00001AEC
    rlwinm r6, r4, 12, 26, 29
    lwzx r4, r5, r6
    addi r0, r4, 0x1
    stwx r0, r5, r6
lbl_fn_804E5BC8_00001AEC:
    addi r8, r8, 0x1
    addi r3, r3, 0xd5c
lbl_fn_804E5BC8_00001AF4:
    lwz r0, 0x5e8(r7)
    cmpw r8, r0
    blt lbl_fn_804E5BC8_00001A90
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804E5BC8_00001B18
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_00001D58
lbl_fn_804E5BC8_00001B18:
    li r0, 0x1
    stw r0, 0x2b80(r27)
    stw r0, 0x50c(r27)
    b lbl_fn_804E5BC8_00001D58
lbl_fn_804E5BC8_00001B28:
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_00001BC4
    lwz r5, lbl_8087F610
    li r6, 0x0
    li r7, 0x0
    li r3, 0x0
    lwz r0, 0x5e8(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E5BC8_00001BAC
lbl_fn_804E5BC8_00001B50:
    cmpwi r7, 0x0
    blt lbl_fn_804E5BC8_00001B70
    lwz r0, 0x5e8(r5)
    cmpw r7, r0
    bge lbl_fn_804E5BC8_00001B70
    lwz r0, 0x5e4(r5)
    add r4, r0, r3
    b lbl_fn_804E5BC8_00001B74
lbl_fn_804E5BC8_00001B70:
    li r4, 0x0
lbl_fn_804E5BC8_00001B74:
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E5BC8_00001BA0
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804E5BC8_00001BA0
    lwz r0, 0x9f8(r4)
    cmpwi r0, 0x0
    ble lbl_fn_804E5BC8_00001BA0
    addi r6, r6, 0x1
lbl_fn_804E5BC8_00001BA0:
    addi r7, r7, 0x1
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E5BC8_00001B50
lbl_fn_804E5BC8_00001BAC:
    cmpwi r6, 0x1
    bgt lbl_fn_804E5BC8_00001D58
    li r0, 0x1
    stw r0, 0x2b80(r27)
    stw r0, 0x50c(r27)
    b lbl_fn_804E5BC8_00001D58
lbl_fn_804E5BC8_00001BC4:
    cmpwi r0, 0x2
    bne lbl_fn_804E5BC8_00001D58
    li r30, 0x1
    li r31, 0x1
    li r28, 0x0
    li r26, 0x0
    b lbl_fn_804E5BC8_00001C78
lbl_fn_804E5BC8_00001BE0:
    lwz r0, 0x5e4(r27)
    add r3, r0, r26
    lwz r0, 0xd0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_804E5BC8_00001C70
    cmpwi r3, 0x0
    beq lbl_fn_804E5BC8_00001C18
    lbz r0, 0xcc(r3)
    cmplwi r0, 0xff
    beq lbl_fn_804E5BC8_00001C18
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804E5BC8_00001C18
    li r0, 0x1
    b lbl_fn_804E5BC8_00001C1C
lbl_fn_804E5BC8_00001C18:
    li r0, 0x0
lbl_fn_804E5BC8_00001C1C:
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_00001C70
    lwz r18, 0x0(r3)
    cmpwi r18, 0x0
    beq lbl_fn_804E5BC8_00001C70
    lwz r0, 0x12a8(r18)
    extrwi. r0, r0, 1, 30
    bne lbl_fn_804E5BC8_00001C70
    lwz r0, 0x7e0(r18)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804E5BC8_00001C68
    mr r3, r18
    bl fn_8015EB2C
    cmpwi r3, 0x0
    beq lbl_fn_804E5BC8_00001C68
    lwz r0, 0x9f8(r18)
    cmpwi r0, 0x0
    ble lbl_fn_804E5BC8_00001C70
lbl_fn_804E5BC8_00001C68:
    li r30, 0x0
    b lbl_fn_804E5BC8_00001C84
lbl_fn_804E5BC8_00001C70:
    addi r28, r28, 0x1
    addi r26, r26, 0xd5c
lbl_fn_804E5BC8_00001C78:
    lwz r0, 0x5e8(r27)
    cmpw r28, r0
    blt lbl_fn_804E5BC8_00001BE0
lbl_fn_804E5BC8_00001C84:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804E5BC8_00001C9C
    li r4, 0xfb
    bl fn_80370A78
    b lbl_fn_804E5BC8_00001CA0
lbl_fn_804E5BC8_00001C9C:
    li r3, 0x0
lbl_fn_804E5BC8_00001CA0:
    cmpwi r3, 0x2
    bne lbl_fn_804E5BC8_00001D28
    lwz r0, 0x5f4(r27)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E5BC8_00001D28
lbl_fn_804E5BC8_00001CBC:
    lwz r4, 0x5f0(r27)
    lwzx r5, r4, r3
    cmpwi r5, 0x0
    beq lbl_fn_804E5BC8_00001D20
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804E5BC8_00001D20
    lwz r4, 0x12a4(r5)
    extrwi r0, r4, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_804E5BC8_00001D20
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804E5BC8_00001D18
    extrwi. r0, r4, 1, 16
    bne lbl_fn_804E5BC8_00001D20
    extrwi. r0, r4, 1, 15
    beq lbl_fn_804E5BC8_00001D18
    lwz r0, 0x9f8(r5)
    cmpwi r0, 0x0
    ble lbl_fn_804E5BC8_00001D20
lbl_fn_804E5BC8_00001D18:
    li r31, 0x0
    b lbl_fn_804E5BC8_00001D28
lbl_fn_804E5BC8_00001D20:
    addi r3, r3, 0xb4
    bdnz lbl_fn_804E5BC8_00001CBC
lbl_fn_804E5BC8_00001D28:
    cmpwi r30, 0x0
    beq lbl_fn_804E5BC8_00001D40
    li r0, 0x1
    stw r0, 0x2b80(r27)
    stw r0, 0x50c(r27)
    b lbl_fn_804E5BC8_00001D58
lbl_fn_804E5BC8_00001D40:
    cmpwi r31, 0x0
    beq lbl_fn_804E5BC8_00001D58
    li r3, 0x3
    li r0, 0x1
    stw r3, 0x2b80(r27)
    stw r0, 0x50c(r27)
lbl_fn_804E5BC8_00001D58:
    lwz r0, 0x518(r27)
    cmpwi r0, 0x0
    beq lbl_fn_804E5BC8_00001E34
    lwz r3, lbl_8087F5A8
    mr r4, r29
    bl fn_804B6204
    lwz r0, 0x540(r27)
    cmpwi r0, 0x2
    beq lbl_fn_804E5BC8_00001E34
    lwz r0, 0x50c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_00001E34
    lwz r0, 0x4fc(r27)
    cmpwi r0, 0x1f
    beq lbl_fn_804E5BC8_00001E34
    lwz r7, 0x5e8(r27)
    li r4, 0x0
    li r18, 0x0
    li r8, 0x0
    li r3, 0x0
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_804E5BC8_00001E18
lbl_fn_804E5BC8_00001DB4:
    cmpwi r8, 0x0
    blt lbl_fn_804E5BC8_00001DD0
    cmpw r8, r7
    bge lbl_fn_804E5BC8_00001DD0
    lwz r0, 0x5e4(r27)
    add r6, r0, r3
    b lbl_fn_804E5BC8_00001DD4
lbl_fn_804E5BC8_00001DD0:
    li r6, 0x0
lbl_fn_804E5BC8_00001DD4:
    lwz r5, 0xd0(r6)
    srwi r0, r5, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E5BC8_00001E0C
    extrwi r0, r5, 4, 6
    cmplwi r0, 0x2
    bne lbl_fn_804E5BC8_00001DFC
    lwz r0, 0xdc(r6)
    add r4, r4, r0
    b lbl_fn_804E5BC8_00001E0C
lbl_fn_804E5BC8_00001DFC:
    cmplwi r0, 0x1
    bne lbl_fn_804E5BC8_00001E0C
    lwz r0, 0xdc(r6)
    add r18, r18, r0
lbl_fn_804E5BC8_00001E0C:
    addi r8, r8, 0x1
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E5BC8_00001DB4
lbl_fn_804E5BC8_00001E18:
    lwz r3, lbl_8087F5A8
    li r5, 0x0
    bl fn_804B671C
    lwz r3, lbl_8087F5A8
    mr r4, r18
    li r5, 0x1
    bl fn_804B671C
lbl_fn_804E5BC8_00001E34:
    mr r3, r27
    bl fn_804E4EB4
    mr r3, r27
    bl fn_804E651C
    lwz r0, 0x540(r27)
    cmpwi r0, 0x2
    beq lbl_fn_804E5BC8_00001F10
    lwz r0, 0x50c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_00001F10
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_804E5BC8_00001F10
    bl fn_803EBA54
    cmpwi r3, 0x0
    beq lbl_fn_804E5BC8_00001F10
    addi r3, r27, 0x2b74
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_804E5BC8_00001F10
    bl fn_80680CF8
    lis r4, 0xb60b
    addi r0, r4, 0x60b7
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5a
    subf. r0, r0, r3
    bne lbl_fn_804E5BC8_00001F10
    lwz r19, lbl_8087F498
    bl fn_80680CF8
    lis r4, 0x38e4
    lis r5, lbl_80791018@ha
    subi r0, r4, 0x71c7
    lfs f1, lbl_80887590
    mulhwu r0, r0, r3
    addi r5, r5, lbl_80791018@l
    mr r4, r19
    li r6, 0x0
    li r7, 0x1
    srwi r0, r0, 3
    mulli r0, r0, 0x24
    subf r0, r0, r3
    addi r3, r1, 0x8
    slwi r0, r0, 2
    lwzx r5, r5, r0
    bl fn_803E9608
    addi r3, r27, 0x2b74
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804E5BC8_00001F10:
    lwz r0, 0x4fc(r27)
    cmpwi r0, 0x1e
    bne lbl_fn_804E5BC8_00001F30
    lwz r0, 0x50c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_00001F30
    mr r3, r27
    bl fn_804DF4BC
lbl_fn_804E5BC8_00001F30:
    lwz r0, 0x540(r27)
    cmpwi r0, 0x2
    bne lbl_fn_804E5BC8_00002068
    lwz r0, 0x50c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_00002068
    addis r3, r27, 0x1
    lwz r0, -0x689c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804E5BC8_00002068
    lwz r0, 0x5e8(r27)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E5BC8_00002068
lbl_fn_804E5BC8_00001F6C:
    lwz r0, 0x5e4(r27)
    add r5, r0, r3
    lwz r4, 0xd0(r5)
    srwi. r0, r4, 31
    beq lbl_fn_804E5BC8_00002060
    extrwi r0, r4, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_804E5BC8_00002060
    cmpwi r5, 0x0
    beq lbl_fn_804E5BC8_00001FB0
    lbz r0, 0xcc(r5)
    cmplwi r0, 0xff
    beq lbl_fn_804E5BC8_00001FB0
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804E5BC8_00001FB0
    li r0, 0x1
    b lbl_fn_804E5BC8_00001FB4
lbl_fn_804E5BC8_00001FB0:
    li r0, 0x0
lbl_fn_804E5BC8_00001FB4:
    cmpwi r0, 0x0
    bne lbl_fn_804E5BC8_00002060
    lwz r4, 0x0(r5)
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804E5BC8_00002060
    lwz r3, lbl_8087F628
    lwz r4, 0xc2c(r3)
    rlwinm r5, r4, 0, 29, 29
    cmplwi r5, 0x4
    bne lbl_fn_804E5BC8_00001FF0
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_804E5BC8_00002050
lbl_fn_804E5BC8_00001FF0:
    cmplwi r5, 0x4
    beq lbl_fn_804E5BC8_00002008
    lwz r0, 0xc2c(r3)
    ori r0, r0, 0x4
    stw r0, 0xc2c(r3)
    b lbl_fn_804E5BC8_00002020
lbl_fn_804E5BC8_00002008:
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_804E5BC8_00002020
    lwz r0, 0xc2c(r3)
    ori r0, r0, 0x8
    stw r0, 0xc2c(r3)
lbl_fn_804E5BC8_00002020:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_804E5BC8_00002050
    lwz r3, lbl_8087F9C0
    li r0, 0x1
    li r4, 0x1be
    stw r0, 0x7c(r3)
    lwz r3, lbl_8087F430
    bl fn_803750E4
    lwz r3, lbl_8087F9C0
    li r0, 0x0
    stw r0, 0x7c(r3)
lbl_fn_804E5BC8_00002050:
    addis r3, r27, 0x1
    li r0, 0x0
    stw r0, -0x689c(r3)
    b lbl_fn_804E5BC8_00002068
lbl_fn_804E5BC8_00002060:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E5BC8_00001F6C
lbl_fn_804E5BC8_00002068:
    addi r11, r1, 0x60
    bl _restgpr_18
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
