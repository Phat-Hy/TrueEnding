#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8006F2F0(void);
extern void fn_8006F420(void);
extern void fn_800DC97C(void);
extern void fn_8016F3D0(void);
extern void fn_804AE3BC(void);
extern void fn_804D818C(void);
extern void fn_804FB224(void);
extern void fn_8050128C(void);
extern void fn_80502874(void);
extern void fn_80509CB0(void);
extern void fn_80509DA4(void);
extern void fn_8050BA6C(void);
extern void fn_8050E098(void);
extern void fn_8050EAEC(void);
extern void fn_8050F468(void);
extern void fn_8050F474(void);
extern void fn_8050F5AC(void);
extern void fn_8050F668(void);
extern void fn_8050F728(void);
extern void fn_8050F738(void);
extern void fn_8050F768(void);
extern void fn_8050F85C(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_80686AF0(void);
extern void fn_806A8E40(void);
extern void fn_806A8E70(void);
extern void fn_806ABE70(void);
extern void fn_806ABEE0(void);
extern void fn_806B0DE0(void);
extern void fn_806B0E30(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807596F0[];
extern u8 lbl_80759748[];
extern u8 lbl_80759BD4[];
extern u8 lbl_80759C80[];
extern u8 lbl_80759E48[];
extern u8 lbl_80791190[];
extern u8 lbl_807911A8[];
extern u8 lbl_807C8AE8[];

/* Small data declarations */
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_80887588;
extern u32 lbl_808875F8;

/* Function declarations */
void fn_804DBC84(void);
void fn_804DBD0C(void);
void fn_804DBE28(void);
void fn_804DBECC(void);
void fn_804DC118(void);
void fn_804DC35C(void);
void fn_804DC378(void);
void fn_804DC454(void);
void fn_804DC688(void);
void fn_804DC7C4(void);
void fn_804DC810(void);
void fn_804DC85C(void);
void fn_804DCA50(void);
void fn_804DCA58(void);
void fn_804DD15C(void);
void fn_804DD1AC(void);
void fn_804DD284(void);
void fn_804DD298(void);
void fn_804DD340(void);
void fn_804DD3F4(void);
void fn_804DD578(void);

asm void fn_804DBC84(void)
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
    beq lbl_fn_804DBC84_0000006C
    addic. r0, r3, 0x10
    beq lbl_fn_804DBC84_00000040
    lwz r0, 0x10(r3)
    srwi. r0, r0, 31
    beq lbl_fn_804DBC84_00000040
    lwz r3, 0x18(r3)
    bl dtor_80084684
lbl_fn_804DBC84_00000040:
    cmpwi r30, 0x0
    beq lbl_fn_804DBC84_0000005C
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_804DBC84_0000005C
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_804DBC84_0000005C:
    cmpwi r31, 0x0
    ble lbl_fn_804DBC84_0000006C
    mr r3, r30
    bl dtor_80084684
lbl_fn_804DBC84_0000006C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804DBD0C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r4
    beq lbl_fn_804DBD0C_000000B0
    cmpwi r4, 0x2
    bne lbl_fn_804DBD0C_0000015C
lbl_fn_804DBD0C_000000B0:
    li r26, 0x0
    li r31, 0x0
    mr r29, r26
    li r28, 0xff
    li r30, -0x1
    b lbl_fn_804DBD0C_00000110
lbl_fn_804DBD0C_000000C8:
    lwz r0, 0x5e4(r24)
    li r4, 0x0
    add r27, r0, r31
    stb r28, 0xcc(r27)
    addi r3, r27, 0xdc
    bl fn_8050128C
    stw r29, 0xd0(r27)
    addi r26, r26, 0x1
    addi r31, r31, 0xd5c
    stw r29, 0xb0(r27)
    stw r29, 0xd48(r27)
    sth r30, 0xd50(r27)
    stw r29, 0xd4c(r27)
    stb r29, 0xd53(r27)
    stw r30, 0xd54(r27)
    stw r29, 0xd58(r27)
    stw r29, 0xd8(r27)
    stw r29, 0xd4(r27)
lbl_fn_804DBD0C_00000110:
    lwz r0, 0x5e8(r24)
    cmpw r26, r0
    blt lbl_fn_804DBD0C_000000C8
    addis r3, r24, 0x1
    li r4, 0x0
    li r5, 0x8
    subi r3, r3, 0x667c
    bl memset
    addis r3, r24, 0x1
    li r4, 0x0
    li r5, 0x8
    subi r3, r3, 0x6674
    bl memset
    lwz r0, 0x4fc(r24)
    cmpwi r0, 0xa
    ble lbl_fn_804DBD0C_0000015C
    addi r3, r24, 0x4fc
    li r4, 0xa
    bl fn_804FB224
lbl_fn_804DBD0C_0000015C:
    cmpwi r25, 0x3
    bne lbl_fn_804DBD0C_00000170
    lwz r3, lbl_8087F628
    bl fn_80509DA4
    b lbl_fn_804DBD0C_00000190
lbl_fn_804DBD0C_00000170:
    cmpwi r25, 0x0
    beq lbl_fn_804DBD0C_00000180
    cmpwi r25, 0x1
    bne lbl_fn_804DBD0C_0000018C
lbl_fn_804DBD0C_00000180:
    lwz r3, lbl_8087F628
    bl fn_80509CB0
    b lbl_fn_804DBD0C_00000190
lbl_fn_804DBD0C_0000018C:
    li r3, 0x1
lbl_fn_804DBD0C_00000190:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804DBE28(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r4
    lis r30, lbl_80759E48@ha
    mr r29, r5
    li r27, 0x0
    mr r28, r26
    addi r30, r30, lbl_80759E48@l
    li r31, 0x0
lbl_fn_804DBE28_000001D0:
    cmpwi r27, 0x5
    bne lbl_fn_804DBE28_000001E8
    mr r3, r28
    bl strlen
    add r3, r28, r3
    b lbl_fn_804DBE28_00000204
lbl_fn_804DBE28_000001E8:
    mr r3, r26
    addi r4, r30, 0x19d
    bl fn_806827C4
    cmpwi r3, 0x0
    bne lbl_fn_804DBE28_00000204
    li r3, 0x0
    b lbl_fn_804DBE28_00000234
lbl_fn_804DBE28_00000204:
    cmplw r26, r3
    bne lbl_fn_804DBE28_00000214
    stw r31, 0x0(r29)
    b lbl_fn_804DBE28_00000218
lbl_fn_804DBE28_00000214:
    stw r26, 0x0(r29)
lbl_fn_804DBE28_00000218:
    addi r27, r27, 0x1
    stb r31, 0x0(r3)
    cmpwi r27, 0x6
    addi r26, r3, 0x1
    addi r29, r29, 0x4
    blt lbl_fn_804DBE28_000001D0
    li r3, 0x1
lbl_fn_804DBE28_00000234:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804DBECC(void)
{
    nofralloc
    stwu r1, -0xa20(r1)
    mflr r0
    stw r0, 0xa24(r1)
    li r0, 0x30
    stw r31, 0xa1c(r1)
    mr r31, r6
    addi r6, r1, 0x44
    stw r30, 0xa18(r1)
    mr r30, r5
    stw r29, 0xa14(r1)
    mr r29, r3
    lwz r8, lbl_8087F628
    lwz r9, 0x430(r8)
    addi r5, r8, 0x46c
    lwz r3, 0x434(r8)
    stw r3, 0xc(r1)
    stw r9, 0x8(r1)
    lwz r9, 0x438(r8)
    lwz r3, 0x43c(r8)
    stw r3, 0x14(r1)
    stw r9, 0x10(r1)
    lwz r9, 0x440(r8)
    lwz r3, 0x444(r8)
    stw r3, 0x1c(r1)
    stw r9, 0x18(r1)
    lwz r9, 0x448(r8)
    lwz r3, 0x44c(r8)
    stw r3, 0x24(r1)
    stw r9, 0x20(r1)
    lwz r9, 0x450(r8)
    lwz r3, 0x454(r8)
    stw r3, 0x2c(r1)
    stw r9, 0x28(r1)
    lwz r9, 0x458(r8)
    lwz r3, 0x45c(r8)
    stw r3, 0x34(r1)
    stw r9, 0x30(r1)
    lwz r9, 0x460(r8)
    lwz r3, 0x464(r8)
    stw r3, 0x3c(r1)
    stw r9, 0x38(r1)
    lwz r9, 0x468(r8)
    lwz r3, 0x46c(r8)
    stw r3, 0x44(r1)
    stw r9, 0x40(r1)
    mtctr r0
lbl_fn_804DBECC_00000300:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804DBECC_00000300
    lwz r9, 0x5f0(r8)
    li r0, 0x80
    lwz r3, 0x5f4(r8)
    addi r6, r1, 0x1f4
    stw r3, 0x1cc(r1)
    addi r5, r8, 0x61c
    stw r9, 0x1c8(r1)
    lwz r9, 0x5f8(r8)
    lwz r3, 0x5fc(r8)
    stw r3, 0x1d4(r1)
    stw r9, 0x1d0(r1)
    lwz r9, 0x600(r8)
    lwz r3, 0x604(r8)
    stw r3, 0x1dc(r1)
    stw r9, 0x1d8(r1)
    lwz r9, 0x608(r8)
    lwz r3, 0x60c(r8)
    stw r3, 0x1e4(r1)
    stw r9, 0x1e0(r1)
    lwz r3, 0x610(r8)
    stw r3, 0x1e8(r1)
    lwz r3, 0x614(r8)
    stw r3, 0x1ec(r1)
    lwz r3, 0x618(r8)
    stw r3, 0x1f0(r1)
    lwz r3, 0x61c(r8)
    stw r3, 0x1f4(r1)
    mtctr r0
lbl_fn_804DBECC_00000384:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804DBECC_00000384
    li r0, 0x40
    addi r6, r1, 0x5f4
    addi r5, r8, 0xa1c
    mtctr r0
lbl_fn_804DBECC_000003A8:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804DBECC_000003A8
    li r0, 0x3c
    addi r6, r1, 0x7f4
    addi r5, r8, 0xc1c
    mtctr r0
lbl_fn_804DBECC_000003CC:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804DBECC_000003CC
    lwz r0, 0xe00(r8)
    mr r6, r7
    stw r0, 0x9d8(r1)
    mr r5, r30
    addi r3, r1, 0x8
    lwz r7, 0xe04(r8)
    lwz r0, 0xe08(r8)
    stw r0, 0x9e0(r1)
    stw r7, 0x9dc(r1)
    lwz r7, 0xe0c(r8)
    lwz r0, 0xe10(r8)
    stw r0, 0x9e8(r1)
    stw r7, 0x9e4(r1)
    lwz r7, 0xe14(r8)
    lwz r0, 0xe18(r8)
    stw r0, 0x9f0(r1)
    stw r7, 0x9ec(r1)
    lwz r7, 0xe1c(r8)
    lwz r0, 0xe20(r8)
    stw r0, 0x9f8(r1)
    stw r7, 0x9f4(r1)
    lwz r0, 0xe28(r8)
    lwz r7, 0xe2c(r8)
    stw r7, 0xa04(r1)
    stw r0, 0xa00(r1)
    lwz r0, 0xe30(r8)
    stw r0, 0xa08(r1)
    lwz r0, 0xe34(r8)
    stw r0, 0xa0c(r1)
    bl fn_8050F85C
    cmpwi r3, 0x0
    beq lbl_fn_804DBECC_00000474
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_804DBE28
    b lbl_fn_804DBECC_00000478
lbl_fn_804DBECC_00000474:
    li r3, 0x0
lbl_fn_804DBECC_00000478:
    lwz r0, 0xa24(r1)
    lwz r31, 0xa1c(r1)
    lwz r30, 0xa18(r1)
    lwz r29, 0xa14(r1)
    mtlr r0
    addi r1, r1, 0xa20
    blr
}

asm void fn_804DC118(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r5, r1, 0x28
    addi r6, r1, 0x10
    addi r7, r1, 0x8
    stw r31, 0x13c(r1)
    stw r30, 0x138(r1)
    stw r29, 0x134(r1)
    stw r28, 0x130(r1)
    mr r28, r3
    bl fn_804DBECC
    cmpwi r3, 0x0
    bne lbl_fn_804DC118_000004D4
    li r3, -0x1
    b lbl_fn_804DC118_000006B8
lbl_fn_804DC118_000004D4:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_804DC118_000004E8
    li r3, -0x1
    b lbl_fn_804DC118_000006B8
lbl_fn_804DC118_000004E8:
    lwz r4, 0x540(r28)
    cmplwi r4, 0x2
    ble lbl_fn_804DC118_000004FC
    li r29, 0x0
    b lbl_fn_804DC118_00000548
lbl_fn_804DC118_000004FC:
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804DC118_00000510
    li r4, -0x1
lbl_fn_804DC118_00000510:
    cmpwi r4, 0x3
    blt lbl_fn_804DC118_00000520
    li r29, 0x0
    b lbl_fn_804DC118_00000548
lbl_fn_804DC118_00000520:
    cmpwi r4, 0x0
    bge lbl_fn_804DC118_00000538
    lis r3, lbl_80759E48@ha
    addi r3, r3, lbl_80759E48@l
    addi r29, r3, 0x19b
    b lbl_fn_804DC118_00000548
lbl_fn_804DC118_00000538:
    lis r3, lbl_807911A8@ha
    slwi r0, r4, 2
    addi r3, r3, lbl_807911A8@l
    lwzx r29, r3, r0
lbl_fn_804DC118_00000548:
    lwz r28, 0x14(r1)
    lis r30, lbl_80759E48@ha
    addi r30, r30, lbl_80759E48@l
    mr r3, r28
    addi r4, r30, 0x19b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804DC118_0000057C
    mr r3, r29
    addi r4, r30, 0x19b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804DC118_00000584
lbl_fn_804DC118_0000057C:
    li r3, -0x1
    b lbl_fn_804DC118_000006B8
lbl_fn_804DC118_00000584:
    lis r30, lbl_807911A8@ha
    mr r3, r28
    addi r31, r30, lbl_807911A8@l
    lwz r4, 0x8(r31)
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804DC118_000005BC
    mr r3, r28
    mr r4, r29
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804DC118_00000620
    li r3, -0x1
    b lbl_fn_804DC118_000006B8
lbl_fn_804DC118_000005BC:
    lwz r30, lbl_807911A8@l(r30)
    mr r3, r28
    mr r4, r30
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804DC118_000005E8
    lwz r4, 0x4(r31)
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804DC118_00000620
lbl_fn_804DC118_000005E8:
    mr r3, r29
    mr r4, r30
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804DC118_00000620
    lis r4, lbl_807911A8@ha
    mr r3, r29
    addi r4, r4, lbl_807911A8@l
    lwz r4, 0x4(r4)
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804DC118_00000620
    li r3, -0x1
    b lbl_fn_804DC118_000006B8
lbl_fn_804DC118_00000620:
    lis r31, lbl_80791190@ha
    lwz r29, 0x10(r1)
    addi r31, r31, lbl_80791190@l
    lwz r4, 0x4(r31)
    mr r3, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804DC118_00000648
    li r3, 0x1
    b lbl_fn_804DC118_000006B8
lbl_fn_804DC118_00000648:
    lwz r4, 0x8(r31)
    mr r3, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804DC118_00000664
    li r3, 0x2
    b lbl_fn_804DC118_000006B8
lbl_fn_804DC118_00000664:
    lwz r4, 0xc(r31)
    mr r3, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804DC118_00000680
    li r3, 0x3
    b lbl_fn_804DC118_000006B8
lbl_fn_804DC118_00000680:
    lwz r4, 0x10(r31)
    mr r3, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804DC118_0000069C
    li r3, 0x4
    b lbl_fn_804DC118_000006B8
lbl_fn_804DC118_0000069C:
    lwz r4, 0x14(r31)
    mr r3, r29
    bl fn_80682428
    cmpwi r3, 0x0
    li r3, 0x5
    beq lbl_fn_804DC118_000006B8
    li r3, -0x1
lbl_fn_804DC118_000006B8:
    lwz r0, 0x144(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r28, 0x130(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_804DC35C(void)
{
    nofralloc
    lwz r5, lbl_8087F628
    li r4, 0x2
    lbz r0, 0x90(r5)
    cmplwi r0, 0x1
    bne lbl_fn_804DC35C_000006F0
    li r4, 0x1
lbl_fn_804DC35C_000006F0:
    b fn_804DC454
}

asm void fn_804DC378(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    mr r31, r4
    stw r30, 0x128(r1)
    mr r30, r3
    lwz r5, lbl_8087F628
    lbz r0, 0x90(r5)
    cmpwi r0, 0x0
    bne lbl_fn_804DC378_00000728
    li r3, 0x0
    b lbl_fn_804DC378_000007B8
lbl_fn_804DC378_00000728:
    addi r3, r1, 0x20
    bl fn_806ABEE0
    mr r3, r30
    addi r4, r1, 0x20
    addi r5, r1, 0x8
    bl fn_804DBE28
    cmpwi r3, 0x0
    bne lbl_fn_804DC378_00000750
    li r3, 0x0
    b lbl_fn_804DC378_000007B8
lbl_fn_804DC378_00000750:
    cmpwi r31, 0x1
    bne lbl_fn_804DC378_00000784
    lis r4, lbl_80791190@ha
    lwz r3, 0x8(r1)
    addi r4, r4, lbl_80791190@l
    lwz r4, 0x4(r4)
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804DC378_000007B4
    mr r3, r30
    li r4, 0x1
    bl fn_804DC454
    b lbl_fn_804DC378_000007B4
lbl_fn_804DC378_00000784:
    cmpwi r31, 0x5
    bne lbl_fn_804DC378_000007B4
    lis r4, lbl_80791190@ha
    lwz r3, 0x8(r1)
    addi r4, r4, lbl_80791190@l
    lwz r4, 0x14(r4)
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804DC378_000007B4
    mr r3, r30
    li r4, 0x5
    bl fn_804DC454
lbl_fn_804DC378_000007B4:
    li r3, 0x1
lbl_fn_804DC378_000007B8:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_804DC454(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stw r31, 0x17c(r1)
    stw r30, 0x178(r1)
    stw r29, 0x174(r1)
    lwz r0, 0x4fc(r3)
    cmpwi r0, -0x1
    bne lbl_fn_804DC454_000007FC
    li r3, 0x0
    b lbl_fn_804DC454_000009E8
lbl_fn_804DC454_000007FC:
    cmpwi r4, 0x0
    blt lbl_fn_804DC454_0000080C
    cmplwi r4, 0x6
    blt lbl_fn_804DC454_00000814
lbl_fn_804DC454_0000080C:
    li r31, 0x0
    b lbl_fn_804DC454_00000824
lbl_fn_804DC454_00000814:
    lis r5, lbl_80791190@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_80791190@l
    lwzx r31, r5, r0
lbl_fn_804DC454_00000824:
    lwz r4, 0x540(r3)
    cmplwi r4, 0x2
    ble lbl_fn_804DC454_00000838
    li r30, 0x0
    b lbl_fn_804DC454_00000884
lbl_fn_804DC454_00000838:
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804DC454_0000084C
    li r4, -0x1
lbl_fn_804DC454_0000084C:
    cmpwi r4, 0x3
    blt lbl_fn_804DC454_0000085C
    li r30, 0x0
    b lbl_fn_804DC454_00000884
lbl_fn_804DC454_0000085C:
    cmpwi r4, 0x0
    bge lbl_fn_804DC454_00000874
    lis r3, lbl_80759E48@ha
    addi r3, r3, lbl_80759E48@l
    addi r30, r3, 0x19b
    b lbl_fn_804DC454_00000884
lbl_fn_804DC454_00000874:
    lis r3, lbl_807911A8@ha
    slwi r0, r4, 2
    addi r3, r3, lbl_807911A8@l
    lwzx r30, r3, r0
lbl_fn_804DC454_00000884:
    lwz r5, lbl_8087F628
    addi r4, r1, 0x50
    lwz r3, lbl_8087EEC8
    li r6, 0x11
    addi r29, r5, 0x430
    addi r5, r29, 0x1c0
    bl fn_8006F420
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DC454_000008D0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DC454_000008C8
    li r3, 0x1
    b lbl_fn_804DC454_000008E8
lbl_fn_804DC454_000008C8:
    bl fn_806B0DE0
    b lbl_fn_804DC454_000008E8
lbl_fn_804DC454_000008D0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DC454_000008E4
    li r3, 0x1
    b lbl_fn_804DC454_000008E8
lbl_fn_804DC454_000008E4:
    bl fn_806A8E70
lbl_fn_804DC454_000008E8:
    addi r4, r1, 0x10
    li r5, 0xa
    bl fn_800DC97C
    addi r4, r1, 0x8
    li r3, 0x6
    li r5, 0xa
    bl fn_800DC97C
    mr r4, r29
    addi r3, r1, 0x24
    bl fn_8050F468
    mr r4, r29
    addi r3, r1, 0x18
    bl fn_8050F468
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DC454_00000934
    lbz r0, 0x18(r1)
    clrlwi r6, r0, 25
    b lbl_fn_804DC454_00000938
lbl_fn_804DC454_00000934:
    lwz r6, 0x1c(r1)
lbl_fn_804DC454_00000938:
    lwz r0, 0x24(r1)
    addi r4, r1, 0x30
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    bne lbl_fn_804DC454_00000954
    addi r5, r1, 0x26
    b lbl_fn_804DC454_00000958
lbl_fn_804DC454_00000954:
    lwz r5, 0x2c(r1)
lbl_fn_804DC454_00000958:
    slwi r6, r6, 1
    bl fn_8006F420
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DC454_00000974
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_804DC454_00000974:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DC454_00000988
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_804DC454_00000988:
    cmpwi r30, 0x0
    beq lbl_fn_804DC454_00000994
    b lbl_fn_804DC454_000009A0
lbl_fn_804DC454_00000994:
    lis r3, lbl_80759E48@ha
    addi r3, r3, lbl_80759E48@l
    addi r30, r3, 0x19f
lbl_fn_804DC454_000009A0:
    lis r5, lbl_80759E48@ha
    cmpwi r31, 0x0
    addi r5, r5, lbl_80759E48@l
    addi r3, r1, 0x68
    addi r4, r5, 0x1a0
    beq lbl_fn_804DC454_000009C0
    mr r5, r31
    b lbl_fn_804DC454_000009C4
lbl_fn_804DC454_000009C0:
    addi r5, r5, 0x19f
lbl_fn_804DC454_000009C4:
    mr r6, r30
    addi r7, r1, 0x50
    addi r8, r1, 0x10
    addi r9, r1, 0x8
    addi r10, r1, 0x30
    crclr 6
    bl sprintf
    addi r3, r1, 0x68
    bl fn_806ABE70
lbl_fn_804DC454_000009E8:
    lwz r0, 0x184(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_804DC688(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stw r31, 0x15c(r1)
    lwz r0, 0x4fc(r3)
    cmpwi r0, -0x1
    bne lbl_fn_804DC688_00000A28
    li r3, 0x0
    b lbl_fn_804DC688_00000B2C
lbl_fn_804DC688_00000A28:
    addis r3, r3, 0x1
    lwz r4, lbl_8087F628
    lwz r0, -0x68b0(r3)
    addi r31, r4, 0x430
    cmpwi r0, 0x8b
    beq lbl_fn_804DC688_00000A58
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x40
    addi r5, r31, 0x1c0
    li r6, 0x11
    bl fn_8006F420
    b lbl_fn_804DC688_00000A60
lbl_fn_804DC688_00000A58:
    li r0, 0x0
    stb r0, 0x40(r1)
lbl_fn_804DC688_00000A60:
    mr r4, r31
    addi r3, r1, 0x14
    bl fn_8050F468
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_8050F468
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DC688_00000A90
    lbz r0, 0x8(r1)
    clrlwi r6, r0, 25
    b lbl_fn_804DC688_00000A94
lbl_fn_804DC688_00000A90:
    lwz r6, 0xc(r1)
lbl_fn_804DC688_00000A94:
    lwz r0, 0x14(r1)
    addi r4, r1, 0x20
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    bne lbl_fn_804DC688_00000AB0
    addi r5, r1, 0x16
    b lbl_fn_804DC688_00000AB4
lbl_fn_804DC688_00000AB0:
    lwz r5, 0x1c(r1)
lbl_fn_804DC688_00000AB4:
    slwi r6, r6, 1
    bl fn_8006F420
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DC688_00000AD0
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_804DC688_00000AD0:
    lwz r0, 0x14(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DC688_00000AE4
    lwz r3, 0x1c(r1)
    bl dtor_80084684
lbl_fn_804DC688_00000AE4:
    lis r4, lbl_80759E48@ha
    lis r3, lbl_80791190@ha
    addi r4, r4, lbl_80759E48@l
    lwz r5, lbl_80791190@l(r3)
    addi r8, r4, 0x19f
    addi r3, r1, 0x58
    addi r6, r4, 0x19b
    addi r4, r4, 0x1a0
    mr r9, r8
    addi r7, r1, 0x40
    addi r10, r1, 0x20
    crclr 6
    bl sprintf
    addi r3, r1, 0x58
    bl fn_806ABE70
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_804DC688_00000B2C:
    lwz r0, 0x164(r1)
    lwz r31, 0x15c(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_804DC7C4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x124(r1)
    addi r5, r1, 0x20
    addi r6, r1, 0x8
    bl fn_804DBECC
    cmpwi r3, 0x0
    beq lbl_fn_804DC7C4_00000B70
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    bne lbl_fn_804DC7C4_00000B78
lbl_fn_804DC7C4_00000B70:
    li r3, 0x0
    b lbl_fn_804DC7C4_00000B7C
lbl_fn_804DC7C4_00000B78:
    bl fn_80684600
lbl_fn_804DC7C4_00000B7C:
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_804DC810(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x124(r1)
    addi r5, r1, 0x20
    addi r6, r1, 0x8
    bl fn_804DBECC
    cmpwi r3, 0x0
    beq lbl_fn_804DC810_00000BBC
    lwz r3, 0x18(r1)
    cmpwi r3, 0x0
    bne lbl_fn_804DC810_00000BC4
lbl_fn_804DC810_00000BBC:
    li r3, 0x0
    b lbl_fn_804DC810_00000BC8
lbl_fn_804DC810_00000BC4:
    bl fn_80684600
lbl_fn_804DC810_00000BC8:
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_804DC85C(void)
{
    nofralloc
    stwu r1, -0x490(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x494(r1)
    stmw r25, 0x474(r1)
    mr r27, r3
    li r29, 0x0
    lwz r5, lbl_8087F628
    addi r31, r5, 0x430
    mr r3, r31
    bl fn_8050F5AC
    mr r28, r3
    addi r30, r1, 0xe
    b lbl_fn_804DC85C_00000D7C
lbl_fn_804DC85C_00000C10:
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x70
    addi r6, r1, 0x28
    li r7, 0x0
    bl fn_804DBECC
    cmpwi r3, 0x0
    beq lbl_fn_804DC85C_00000C3C
    lwz r0, 0x3c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_804DC85C_00000C44
lbl_fn_804DC85C_00000C3C:
    li r0, 0x0
    b lbl_fn_804DC85C_00000CFC
lbl_fn_804DC85C_00000C44:
    lwz r3, lbl_8087F628
    mr r4, r28
    addi r3, r3, 0x430
    bl fn_8050F768
    mr r26, r3
    mr r25, r4
    mr r6, r25
    addi r3, r1, 0xc
    mr r5, r26
    bl fn_8050F474
    mr r6, r25
    mr r5, r26
    addi r3, r1, 0x18
    bl fn_8050F474
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DC85C_00000C94
    lbz r0, 0x18(r1)
    clrlwi r6, r0, 25
    b lbl_fn_804DC85C_00000C98
lbl_fn_804DC85C_00000C94:
    lwz r6, 0x1c(r1)
lbl_fn_804DC85C_00000C98:
    lwz r0, 0xc(r1)
    addi r4, r1, 0x40
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    bne lbl_fn_804DC85C_00000CB4
    mr r5, r30
    b lbl_fn_804DC85C_00000CB8
lbl_fn_804DC85C_00000CB4:
    lwz r5, 0x14(r1)
lbl_fn_804DC85C_00000CB8:
    slwi r6, r6, 1
    bl fn_8006F420
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DC85C_00000CD4
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_804DC85C_00000CD4:
    lwz r0, 0xc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DC85C_00000CE8
    lwz r3, 0x14(r1)
    bl dtor_80084684
lbl_fn_804DC85C_00000CE8:
    lwz r4, 0x3c(r1)
    addi r3, r1, 0x40
    bl fn_80682428
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_804DC85C_00000CFC:
    cmplwi r0, 0x1
    bne lbl_fn_804DC85C_00000D6C
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x170
    addi r6, r1, 0x58
    addi r7, r1, 0x8
    bl fn_804DBECC
    cmpwi r3, 0x0
    beq lbl_fn_804DC85C_00000D6C
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x270
    lwz r5, 0x60(r1)
    li r6, 0x100
    bl fn_8006F2F0
    mr r3, r31
    mr r4, r28
    bl fn_8050F728
    mr r4, r3
    addi r3, r1, 0x270
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_804DC85C_00000D6C
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x270
    bl fn_8050F738
    li r29, 0x1
lbl_fn_804DC85C_00000D6C:
    mr r3, r31
    li r4, 0x0
    bl fn_8050F668
    mr r28, r3
lbl_fn_804DC85C_00000D7C:
    cmpwi r28, -0x1
    bne lbl_fn_804DC85C_00000C10
    cmpwi r29, 0x0
    beq lbl_fn_804DC85C_00000DB8
    lwz r3, lbl_8087F628
    addi r3, r3, 0x430
    bl fn_8050EAEC
    lwz r3, lbl_8087F610
    lwz r3, 0x514(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804DC85C_00000DB8
    mr r5, r31
    li r4, 0x1
    li r6, 0x9f0
    bl fn_80502874
lbl_fn_804DC85C_00000DB8:
    lmw r25, 0x474(r1)
    lwz r0, 0x494(r1)
    mtlr r0
    addi r1, r1, 0x490
    blr
}

asm void fn_804DCA50(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_804DCA58(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    bl _savegpr_14
    lwz r4, lbl_8087F628
    mr r15, r3
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DCA58_00000E38
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DCA58_00000E2C
    li r3, 0x1
    b lbl_fn_804DCA58_00000E30
lbl_fn_804DCA58_00000E2C:
    bl fn_806B0DE0
lbl_fn_804DCA58_00000E30:
    mr r25, r3
    b lbl_fn_804DCA58_00000E54
lbl_fn_804DCA58_00000E38:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DCA58_00000E4C
    li r3, 0x1
    b lbl_fn_804DCA58_00000E50
lbl_fn_804DCA58_00000E4C:
    bl fn_806A8E70
lbl_fn_804DCA58_00000E50:
    mr r25, r3
lbl_fn_804DCA58_00000E54:
    lwz r0, 0x540(r15)
    cmpwi r0, 0x2
    beq lbl_fn_804DCA58_00000E74
    cmpwi r0, 0x1
    beq lbl_fn_804DCA58_00000E7C
    cmpwi r0, 0x0
    beq lbl_fn_804DCA58_00000E84
    b lbl_fn_804DCA58_00000E88
lbl_fn_804DCA58_00000E74:
    li r23, 0x7
    b lbl_fn_804DCA58_00000E88
lbl_fn_804DCA58_00000E7C:
    li r23, 0x8
    b lbl_fn_804DCA58_00000E88
lbl_fn_804DCA58_00000E84:
    li r23, 0x6
lbl_fn_804DCA58_00000E88:
    lwz r0, 0x5a4(r15)
    subf r23, r25, r23
    cmpw r23, r0
    ble lbl_fn_804DCA58_00000E9C
    mr r23, r0
lbl_fn_804DCA58_00000E9C:
    addis r3, r15, 0x1
    li r4, 0x0
    li r5, 0x8
    subi r3, r3, 0x667c
    bl memset
    addis r3, r15, 0x1
    li r4, 0xff
    li r5, 0x8
    subi r3, r3, 0x6674
    bl memset
    addis r3, r15, 0x1
    li r4, 0x0
    li r5, 0x8
    subi r3, r3, 0x666c
    bl memset
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1034
    sth r4, 0x24(r1)
    extsb. r0, r0
    sth r3, 0x26(r1)
    bne lbl_fn_804DCA58_00000F14
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804DCA58_00000F14:
    cmpwi r23, 0x0
    li r16, 0x0
    li r0, 0x12
    stw r16, lbl_8087F5FC
    addi r14, r1, 0x28
    li r22, 0x0
    sth r0, 0x24(r1)
    li r21, 0x0
    ble lbl_fn_804DCA58_00001468
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0xc
    bl memset
    lwz r7, lbl_8087F610
    addi r4, r1, 0x18
    li r6, 0x0
    b lbl_fn_804DCA58_00000FA4
lbl_fn_804DCA58_00000F58:
    cmpwi r6, 0x0
    blt lbl_fn_804DCA58_00000F78
    lwz r0, 0x5e8(r7)
    cmpw r6, r0
    bge lbl_fn_804DCA58_00000F78
    lwz r0, 0x5e4(r7)
    add r3, r0, r16
    b lbl_fn_804DCA58_00000F7C
lbl_fn_804DCA58_00000F78:
    li r3, 0x0
lbl_fn_804DCA58_00000F7C:
    lwz r3, 0xd0(r3)
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DCA58_00000F9C
    rlwinm r5, r3, 12, 26, 29
    lwzx r3, r4, r5
    addi r0, r3, 0x1
    stwx r0, r4, r5
lbl_fn_804DCA58_00000F9C:
    addi r6, r6, 0x1
    addi r16, r16, 0xd5c
lbl_fn_804DCA58_00000FA4:
    lwz r0, 0x5e8(r7)
    cmpw r6, r0
    blt lbl_fn_804DCA58_00000F58
    lis r3, lbl_80759748@ha
    lfs f30, lbl_808875F8
    lfd f29, lbl_80759748@l(r3)
    addi r29, r1, 0x10
    lfs f31, lbl_80887588
    li r20, 0x0
    li r28, 0x2
    li r27, 0x1
    lis r26, 0x4330
    li r30, 0x2
    li r31, 0x2
    b lbl_fn_804DCA58_00001460
lbl_fn_804DCA58_00000FE0:
    lwz r0, 0x20(r1)
    lwz r3, 0x1c(r1)
    cmpw r3, r0
    bge lbl_fn_804DCA58_00000FF8
    li r19, 0x1
    b lbl_fn_804DCA58_0000103C
lbl_fn_804DCA58_00000FF8:
    ble lbl_fn_804DCA58_00001004
    li r19, 0x0
    b lbl_fn_804DCA58_0000103C
lbl_fn_804DCA58_00001004:
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x3c(r1)
    stw r26, 0x38(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f29
    fdivs f0, f0, f30
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r3, 0x44(r1)
    neg r0, r3
    or r0, r0, r3
    srwi r19, r0, 31
lbl_fn_804DCA58_0000103C:
    lwz r0, 0x540(r15)
    cmpwi r0, 0x1
    bne lbl_fn_804DCA58_00001100
    cmplwi r19, 0x1
    bne lbl_fn_804DCA58_00001070
    lwz r4, 0x1c(r1)
    add r24, r15, r20
    addis r3, r24, 0x1
    li r18, 0x2
    addi r0, r4, 0x1
    stw r0, 0x1c(r1)
    stb r27, -0x666c(r3)
    b lbl_fn_804DCA58_0000108C
lbl_fn_804DCA58_00001070:
    lwz r4, 0x20(r1)
    add r24, r15, r20
    addis r3, r24, 0x1
    li r18, 0x1
    addi r0, r4, 0x1
    stw r0, 0x20(r1)
    stb r28, -0x666c(r3)
lbl_fn_804DCA58_0000108C:
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    lbz r0, -0x3deb(r3)
    cmplwi r0, 0x1
    bne lbl_fn_804DCA58_00001110
    lwz r0, -0x3de8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804DCA58_00001110
    lwz r0, 0x5e8(r15)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DCA58_000010F0
lbl_fn_804DCA58_000010C0:
    lwz r0, 0x5e4(r15)
    add r4, r0, r3
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DCA58_000010E8
    lbz r0, 0xcc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804DCA58_000010E8
    b lbl_fn_804DCA58_000010F4
lbl_fn_804DCA58_000010E8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DCA58_000010C0
lbl_fn_804DCA58_000010F0:
    li r4, 0x0
lbl_fn_804DCA58_000010F4:
    lwz r0, 0xd0(r4)
    extrwi r18, r0, 4, 6
    b lbl_fn_804DCA58_00001110
lbl_fn_804DCA58_00001100:
    add r24, r15, r20
    li r18, 0x2
    addis r3, r24, 0x1
    stb r18, -0x666c(r3)
lbl_fn_804DCA58_00001110:
    li r17, 0x0
    li r16, 0x0
    b lbl_fn_804DCA58_0000129C
lbl_fn_804DCA58_0000111C:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DCA58_00001134
    li r0, 0x0
    b lbl_fn_804DCA58_00001154
lbl_fn_804DCA58_00001134:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r16
    ble lbl_fn_804DCA58_00001150
    lwz r3, 0x8(r1)
    lbzx r0, r3, r16
    b lbl_fn_804DCA58_00001154
lbl_fn_804DCA58_00001150:
    li r0, 0xff
lbl_fn_804DCA58_00001154:
    lwz r4, 0x5e8(r15)
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_804DCA58_00001198
lbl_fn_804DCA58_00001168:
    lwz r4, 0x5e4(r15)
    add r5, r4, r3
    lwz r4, 0xd0(r5)
    srwi r4, r4, 31
    cmplwi r4, 0x1
    bne lbl_fn_804DCA58_00001190
    lbz r4, 0xcc(r5)
    cmplw r0, r4
    bne lbl_fn_804DCA58_00001190
    b lbl_fn_804DCA58_0000119C
lbl_fn_804DCA58_00001190:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DCA58_00001168
lbl_fn_804DCA58_00001198:
    li r5, 0x0
lbl_fn_804DCA58_0000119C:
    cmpwi r5, 0x0
    beq lbl_fn_804DCA58_00001298
    lwz r3, 0xd0(r5)
    extrwi r3, r3, 4, 6
    cmplw r3, r18
    bne lbl_fn_804DCA58_00001298
    li r5, 0x0
    li r6, 0x0
    mtctr r30
lbl_fn_804DCA58_000011C0:
    addis r3, r6, 0x1
    subi r3, r3, 0x667c
    lbzx r4, r15, r3
    rlwinm. r3, r4, 0, 24, 27
    beq lbl_fn_804DCA58_000011E8
    clrlwi r3, r4, 28
    cmplw r3, r0
    bne lbl_fn_804DCA58_000011E8
    li r5, 0x1
    b lbl_fn_804DCA58_00001274
lbl_fn_804DCA58_000011E8:
    addi r6, r6, 0x1
    addis r3, r6, 0x1
    subi r3, r3, 0x667c
    lbzx r4, r15, r3
    rlwinm. r3, r4, 0, 24, 27
    beq lbl_fn_804DCA58_00001214
    clrlwi r3, r4, 28
    cmplw r3, r0
    bne lbl_fn_804DCA58_00001214
    li r5, 0x1
    b lbl_fn_804DCA58_00001274
lbl_fn_804DCA58_00001214:
    addi r6, r6, 0x1
    addis r3, r6, 0x1
    subi r3, r3, 0x667c
    lbzx r4, r15, r3
    rlwinm. r3, r4, 0, 24, 27
    beq lbl_fn_804DCA58_00001240
    clrlwi r3, r4, 28
    cmplw r3, r0
    bne lbl_fn_804DCA58_00001240
    li r5, 0x1
    b lbl_fn_804DCA58_00001274
lbl_fn_804DCA58_00001240:
    addi r6, r6, 0x1
    addis r3, r6, 0x1
    subi r3, r3, 0x667c
    lbzx r4, r15, r3
    rlwinm. r3, r4, 0, 24, 27
    beq lbl_fn_804DCA58_0000126C
    clrlwi r3, r4, 28
    cmplw r3, r0
    bne lbl_fn_804DCA58_0000126C
    li r5, 0x1
    b lbl_fn_804DCA58_00001274
lbl_fn_804DCA58_0000126C:
    addi r6, r6, 0x1
    bdnz lbl_fn_804DCA58_000011C0
lbl_fn_804DCA58_00001274:
    cmpwi r5, 0x0
    bne lbl_fn_804DCA58_00001298
    addi r4, r20, 0x1
    addis r3, r24, 0x1
    slwi r4, r4, 4
    li r17, 0x1
    or r0, r4, r0
    stb r0, -0x667c(r3)
    b lbl_fn_804DCA58_000012A4
lbl_fn_804DCA58_00001298:
    addi r16, r16, 0x1
lbl_fn_804DCA58_0000129C:
    cmpw r16, r25
    blt lbl_fn_804DCA58_0000111C
lbl_fn_804DCA58_000012A4:
    cmpwi r17, 0x0
    bne lbl_fn_804DCA58_000013F8
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r3, 0x0
lbl_fn_804DCA58_000012C0:
    addis r4, r3, 0x1
    subi r0, r4, 0x667c
    lbzx r4, r15, r0
    rlwinm. r0, r4, 0, 24, 27
    beq lbl_fn_804DCA58_0000133C
    lwz r5, 0x5e8(r15)
    clrlwi r0, r4, 28
    li r4, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DCA58_0000131C
lbl_fn_804DCA58_000012EC:
    lwz r5, 0x5e4(r15)
    add r6, r5, r4
    lwz r5, 0xd0(r6)
    srwi r5, r5, 31
    cmplwi r5, 0x1
    bne lbl_fn_804DCA58_00001314
    lbz r5, 0xcc(r6)
    cmplw r0, r5
    bne lbl_fn_804DCA58_00001314
    b lbl_fn_804DCA58_00001320
lbl_fn_804DCA58_00001314:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804DCA58_000012EC
lbl_fn_804DCA58_0000131C:
    li r6, 0x0
lbl_fn_804DCA58_00001320:
    lwz r4, 0xd0(r6)
    extrwi r4, r4, 4, 6
    cmplw r4, r18
    bne lbl_fn_804DCA58_0000133C
    lbzx r4, r29, r0
    addi r4, r4, 0x1
    stbx r4, r29, r0
lbl_fn_804DCA58_0000133C:
    addi r3, r3, 0x1
    cmpwi r3, 0x8
    blt lbl_fn_804DCA58_000012C0
    addi r3, r1, 0x10
    li r4, 0xff
    li r5, -0x1
    li r6, 0x0
    mtctr r31
lbl_fn_804DCA58_0000135C:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804DCA58_00001378
    cmpw r4, r0
    ble lbl_fn_804DCA58_00001378
    mr r4, r0
    mr r5, r6
lbl_fn_804DCA58_00001378:
    lbz r0, 0x1(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804DCA58_00001398
    cmpw r4, r0
    ble lbl_fn_804DCA58_00001398
    mr r4, r0
    mr r5, r6
lbl_fn_804DCA58_00001398:
    lbz r0, 0x2(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804DCA58_000013B8
    cmpw r4, r0
    ble lbl_fn_804DCA58_000013B8
    mr r4, r0
    mr r5, r6
lbl_fn_804DCA58_000013B8:
    lbz r0, 0x3(r3)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804DCA58_000013D8
    cmpw r4, r0
    ble lbl_fn_804DCA58_000013D8
    mr r4, r0
    mr r5, r6
lbl_fn_804DCA58_000013D8:
    addi r3, r3, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_804DCA58_0000135C
    addi r0, r20, 0x1
    addis r3, r24, 0x1
    slwi r0, r0, 4
    or r0, r0, r5
    stb r0, -0x667c(r3)
lbl_fn_804DCA58_000013F8:
    lwz r0, 0x540(r15)
    li r5, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_804DCA58_00001434
    cmplwi r19, 0x1
    bne lbl_fn_804DCA58_00001424
    cmpwi r22, 0x0
    bne lbl_fn_804DCA58_00001434
    li r5, 0x1
    addi r22, r22, 0x1
    b lbl_fn_804DCA58_00001434
lbl_fn_804DCA58_00001424:
    cmpwi r21, 0x0
    bne lbl_fn_804DCA58_00001434
    li r5, 0x1
    addi r21, r21, 0x1
lbl_fn_804DCA58_00001434:
    lwz r0, 0x5b0(r15)
    cmpwi r0, 0x0
    bne lbl_fn_804DCA58_00001444
    li r5, 0x0
lbl_fn_804DCA58_00001444:
    addis r4, r24, 0x1
    mr r3, r15
    lbz r4, -0x667c(r4)
    bl fn_804DD578
    addis r4, r24, 0x1
    addi r20, r20, 0x1
    stb r3, -0x6674(r4)
lbl_fn_804DCA58_00001460:
    cmpw r20, r23
    blt lbl_fn_804DCA58_00000FE0
lbl_fn_804DCA58_00001468:
    addis r4, r15, 0x1
    mr r3, r14
    li r5, 0x8
    subi r4, r4, 0x667c
    bl memcpy
    addis r4, r15, 0x1
    addi r3, r14, 0x8
    li r5, 0x8
    subi r4, r4, 0x6674
    bl memcpy
    bl fn_804AE3BC
    mr r6, r14
    li r4, -0x1
    li r5, 0x1034
    li r7, 0x1
    bl fn_8050E098
    addi r11, r1, 0x90
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    bl _restgpr_14
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_804DD15C(void)
{
    nofralloc
    lwz r0, 0x5e8(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DD15C_00001520
lbl_fn_804DD15C_000014EC:
    lwz r0, 0x5e4(r3)
    add r6, r0, r5
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DD15C_00001518
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804DD15C_00001518
    mr r3, r6
    blr
lbl_fn_804DD15C_00001518:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804DD15C_000014EC
lbl_fn_804DD15C_00001520:
    li r3, 0x0
    blr
}

asm void fn_804DD1AC(void)
{
    nofralloc
    lwz r0, 0x5e8(r3)
    clrlwi r6, r4, 28
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DD1AC_00001570
lbl_fn_804DD1AC_00001540:
    lwz r0, 0x5e4(r3)
    add r7, r0, r5
    lwz r0, 0xd0(r7)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DD1AC_00001568
    lbz r0, 0xcc(r7)
    cmplw r6, r0
    bne lbl_fn_804DD1AC_00001568
    b lbl_fn_804DD1AC_00001574
lbl_fn_804DD1AC_00001568:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804DD1AC_00001540
lbl_fn_804DD1AC_00001570:
    li r7, 0x0
lbl_fn_804DD1AC_00001574:
    lwz r0, 0x540(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804DD1AC_000015F8
    lwz r5, lbl_8087F628
    addis r5, r5, 0x1
    lbz r0, -0x3deb(r5)
    cmplwi r0, 0x1
    bne lbl_fn_804DD1AC_000015DC
    lwz r0, -0x3de8(r5)
    cmpwi r0, 0x1
    bne lbl_fn_804DD1AC_000015DC
    li r0, 0x8
    li r6, 0x0
    mtctr r0
lbl_fn_804DD1AC_000015AC:
    addis r5, r6, 0x1
    subi r0, r5, 0x667c
    lbzx r0, r3, r0
    cmpw r4, r0
    bne lbl_fn_804DD1AC_000015D0
    addis r0, r3, 0x1
    add r3, r0, r6
    lbz r3, -0x666c(r3)
    blr
lbl_fn_804DD1AC_000015D0:
    addi r6, r6, 0x1
    bdnz lbl_fn_804DD1AC_000015AC
    b lbl_fn_804DD1AC_000015F8
lbl_fn_804DD1AC_000015DC:
    lwz r0, 0xd0(r7)
    li r3, 0x1
    extrwi r0, r0, 4, 6
    cmplwi r0, 0x1
    bnelr
    li r3, 0x2
    blr
lbl_fn_804DD1AC_000015F8:
    li r3, 0x2
    blr
}

asm void fn_804DD284(void)
{
    nofralloc
    cmpwi r4, 0x2
    li r3, 0xc
    bnelr
    li r3, 0x15
    blr
}

asm void fn_804DD298(void)
{
    nofralloc
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804DD298_00001630
    lis r6, lbl_80759C80@ha
    li r0, 0x7
    addi r6, r6, lbl_80759C80@l
    b lbl_fn_804DD298_0000163C
lbl_fn_804DD298_00001630:
    lis r6, lbl_80759BD4@ha
    li r0, 0x15
    addi r6, r6, lbl_80759BD4@l
lbl_fn_804DD298_0000163C:
    mr r4, r6
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DD298_00001694
lbl_fn_804DD298_00001658:
    cmplwi r7, 0x1
    bne lbl_fn_804DD298_00001674
    slwi r0, r9, 2
    li r8, 0x1
    lwzx r0, r6, r0
    stw r0, 0x0(r5)
    b lbl_fn_804DD298_00001694
lbl_fn_804DD298_00001674:
    lwz r3, 0x0(r5)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_804DD298_00001688
    li r7, 0x1
lbl_fn_804DD298_00001688:
    addi r4, r4, 0x4
    addi r9, r9, 0x1
    bdnz lbl_fn_804DD298_00001658
lbl_fn_804DD298_00001694:
    cmpwi r8, 0x0
    bnelr
    cmpwi r7, 0x0
    beq lbl_fn_804DD298_000016B0
    li r0, -0x1
    stw r0, 0x0(r5)
    blr
lbl_fn_804DD298_000016B0:
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
    blr
}

asm void fn_804DD340(void)
{
    nofralloc
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804DD340_000016D8
    lis r7, lbl_80759C80@ha
    li r6, 0x7
    addi r7, r7, lbl_80759C80@l
    b lbl_fn_804DD340_000016E4
lbl_fn_804DD340_000016D8:
    lis r7, lbl_80759BD4@ha
    li r6, 0x15
    addi r7, r7, lbl_80759BD4@l
lbl_fn_804DD340_000016E4:
    subic. r10, r6, 0x1
    li r8, 0x0
    li r9, 0x0
    slwi r3, r10, 2
    addi r0, r10, 0x1
    add r4, r7, r3
    mtctr r0
    blt lbl_fn_804DD340_00001740
lbl_fn_804DD340_00001704:
    cmplwi r8, 0x1
    bne lbl_fn_804DD340_00001720
    slwi r0, r10, 2
    li r9, 0x1
    lwzx r0, r7, r0
    stw r0, 0x0(r5)
    b lbl_fn_804DD340_00001740
lbl_fn_804DD340_00001720:
    lwz r3, 0x0(r5)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_804DD340_00001734
    li r8, 0x1
lbl_fn_804DD340_00001734:
    subi r4, r4, 0x4
    subi r10, r10, 0x1
    bdnz lbl_fn_804DD340_00001704
lbl_fn_804DD340_00001740:
    cmpwi r9, 0x0
    bnelr
    cmpwi r8, 0x0
    beq lbl_fn_804DD340_0000175C
    li r0, -0x1
    stw r0, 0x0(r5)
    blr
lbl_fn_804DD340_0000175C:
    slwi r0, r6, 2
    add r3, r7, r0
    lwz r0, -0x4(r3)
    stw r0, 0x0(r5)
    blr
}

asm void fn_804DD3F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DD3F4_000017B8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DD3F4_000017AC
    li r0, 0x0
    b lbl_fn_804DD3F4_000017D4
lbl_fn_804DD3F4_000017AC:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DD3F4_000017D4
lbl_fn_804DD3F4_000017B8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DD3F4_000017CC
    li r3, 0x0
    b lbl_fn_804DD3F4_000017D0
lbl_fn_804DD3F4_000017CC:
    bl fn_806A8E40
lbl_fn_804DD3F4_000017D0:
    clrlwi r0, r3, 24
lbl_fn_804DD3F4_000017D4:
    lwz r5, 0x5e8(r31)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DD3F4_0000181C
lbl_fn_804DD3F4_000017EC:
    lwz r0, 0x5e4(r31)
    add r28, r0, r3
    lwz r0, 0xd0(r28)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DD3F4_00001814
    lbz r0, 0xcc(r28)
    cmplw r4, r0
    bne lbl_fn_804DD3F4_00001814
    b lbl_fn_804DD3F4_00001820
lbl_fn_804DD3F4_00001814:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DD3F4_000017EC
lbl_fn_804DD3F4_0000181C:
    li r28, 0x0
lbl_fn_804DD3F4_00001820:
    cmpwi r28, 0x0
    beq lbl_fn_804DD3F4_00001834
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_804DD3F4_0000183C
lbl_fn_804DD3F4_00001834:
    li r3, 0x0
    b lbl_fn_804DD3F4_000018E0
lbl_fn_804DD3F4_0000183C:
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_804DD3F4_000018D0
lbl_fn_804DD3F4_00001848:
    lwz r0, 0x5e4(r31)
    add r30, r0, r29
    lwz r0, 0xd0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_804DD3F4_000018C8
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_804DD3F4_000018C8
    cmpwi r30, 0x0
    beq lbl_fn_804DD3F4_0000188C
    lbz r0, 0xcc(r30)
    cmplwi r0, 0xff
    beq lbl_fn_804DD3F4_0000188C
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804DD3F4_0000188C
    li r0, 0x1
    b lbl_fn_804DD3F4_00001890
lbl_fn_804DD3F4_0000188C:
    li r0, 0x0
lbl_fn_804DD3F4_00001890:
    cmpwi r0, 0x0
    beq lbl_fn_804DD3F4_000018C8
    lwz r4, 0x0(r28)
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_804DD3F4_000018C8
    lwz r0, 0xb0(r30)
    cmpwi r0, 0xc
    beq lbl_fn_804DD3F4_000018C0
    cmpwi r0, 0x15
    bne lbl_fn_804DD3F4_000018C8
lbl_fn_804DD3F4_000018C0:
    lwz r3, 0x0(r30)
    b lbl_fn_804DD3F4_000018E0
lbl_fn_804DD3F4_000018C8:
    addi r29, r29, 0xd5c
    addi r27, r27, 0x1
lbl_fn_804DD3F4_000018D0:
    lwz r0, 0x5e8(r31)
    cmplw r27, r0
    blt lbl_fn_804DD3F4_00001848
    li r3, 0x0
lbl_fn_804DD3F4_000018E0:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804DD578(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lwz r6, 0x5e8(r3)
    lis r0, 0x4330
    lis r31, lbl_807596F0@ha
    mr r26, r5
    mr r27, r3
    stw r0, 0x60(r1)
    addi r31, r31, lbl_807596F0@l
    clrlwi r7, r4, 28
    stw r0, 0x68(r1)
    li r5, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804DD578_0000196C
lbl_fn_804DD578_0000193C:
    lwz r0, 0x5e4(r3)
    add r30, r0, r5
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DD578_00001964
    lbz r0, 0xcc(r30)
    cmplw r7, r0
    bne lbl_fn_804DD578_00001964
    b lbl_fn_804DD578_00001970
lbl_fn_804DD578_00001964:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804DD578_0000193C
lbl_fn_804DD578_0000196C:
    li r30, 0x0
lbl_fn_804DD578_00001970:
    cmpwi r30, 0x0
    bne lbl_fn_804DD578_00001980
    li r3, -0x1
    b lbl_fn_804DD578_00001D34
lbl_fn_804DD578_00001980:
    lwz r0, 0xd0(r30)
    extrwi r0, r0, 4, 6
    cmpwi r0, 0x1
    beq lbl_fn_804DD578_000019A0
    cmpwi r0, 0x2
    beq lbl_fn_804DD578_000019A0
    li r3, -0x1
    b lbl_fn_804DD578_00001D34
lbl_fn_804DD578_000019A0:
    rlwinm. r29, r4, 0, 24, 27
    beq lbl_fn_804DD578_000019B0
    mr r3, r27
    bl fn_804DD1AC
lbl_fn_804DD578_000019B0:
    cmpwi r26, 0x0
    bne lbl_fn_804DD578_00001CD0
    cmpwi r29, 0x0
    beq lbl_fn_804DD578_00001A3C
    lwz r0, 0x540(r27)
    cmpwi r0, 0x2
    bne lbl_fn_804DD578_00001A04
    lbz r3, 0x5b4(r27)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_804DD578_000019E4
    addi r27, r31, 0x5b0
    li r28, 0x3
    b lbl_fn_804DD578_00001A5C
lbl_fn_804DD578_000019E4:
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_fn_804DD578_000019F8
    addi r27, r31, 0x5c0
    li r28, 0x4
    b lbl_fn_804DD578_00001A5C
lbl_fn_804DD578_000019F8:
    addi r27, r31, 0x590
    li r28, 0x7
    b lbl_fn_804DD578_00001A5C
lbl_fn_804DD578_00001A04:
    lbz r3, 0x5b4(r27)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_804DD578_00001A1C
    addi r27, r31, 0x538
    li r28, 0xf
    b lbl_fn_804DD578_00001A5C
lbl_fn_804DD578_00001A1C:
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_fn_804DD578_00001A30
    addi r27, r31, 0x578
    li r28, 0x6
    b lbl_fn_804DD578_00001A5C
lbl_fn_804DD578_00001A30:
    addi r27, r31, 0x4e4
    li r28, 0x15
    b lbl_fn_804DD578_00001A5C
lbl_fn_804DD578_00001A3C:
    lwz r0, 0x540(r27)
    cmpwi r0, 0x2
    bne lbl_fn_804DD578_00001A54
    addi r27, r31, 0x590
    li r28, 0x7
    b lbl_fn_804DD578_00001A5C
lbl_fn_804DD578_00001A54:
    addi r27, r31, 0x4e4
    li r28, 0x15
lbl_fn_804DD578_00001A5C:
    cmpwi r28, 0x0
    li r3, 0x0
    ble lbl_fn_804DD578_00001BBC
    lwz r11, lbl_8087F610
    mr r5, r27
    addi r4, r1, 0x8
    li r10, 0x0
    lwz r0, 0x5e8(r11)
    li r6, 0x2
    b lbl_fn_804DD578_00001BB4
lbl_fn_804DD578_00001A84:
    cmpwi r0, 0x0
    stw r10, 0x0(r4)
    li r12, 0x0
    li r7, 0x0
    ble lbl_fn_804DD578_00001AFC
    mtctr r0
    ble lbl_fn_804DD578_00001AFC
lbl_fn_804DD578_00001AA0:
    cmpwi r12, 0x0
    blt lbl_fn_804DD578_00001AC0
    lwz r8, 0x5e8(r11)
    cmpw r12, r8
    bge lbl_fn_804DD578_00001AC0
    lwz r8, 0x5e4(r11)
    add r9, r8, r7
    b lbl_fn_804DD578_00001AC4
lbl_fn_804DD578_00001AC0:
    li r9, 0x0
lbl_fn_804DD578_00001AC4:
    lwz r8, 0xd0(r9)
    srwi r8, r8, 31
    cmplwi r8, 0x1
    bne lbl_fn_804DD578_00001AF0
    lwz r9, 0xb0(r9)
    lwz r8, 0x0(r5)
    cmpw r9, r8
    bne lbl_fn_804DD578_00001AF0
    lwz r8, 0x0(r4)
    addi r8, r8, 0x1
    stw r8, 0x0(r4)
lbl_fn_804DD578_00001AF0:
    addi r12, r12, 0x1
    addi r7, r7, 0xd5c
    bdnz lbl_fn_804DD578_00001AA0
lbl_fn_804DD578_00001AFC:
    li r9, 0x0
    mtctr r6
lbl_fn_804DD578_00001B04:
    addis r7, r9, 0x1
    lwz r8, 0x0(r5)
    subi r7, r7, 0x6674
    lbzx r7, r11, r7
    cmpw r8, r7
    bne lbl_fn_804DD578_00001B28
    lwz r7, 0x0(r4)
    addi r7, r7, 0x1
    stw r7, 0x0(r4)
lbl_fn_804DD578_00001B28:
    addi r9, r9, 0x1
    lwz r8, 0x0(r5)
    addis r7, r9, 0x1
    subi r7, r7, 0x6674
    lbzx r7, r11, r7
    cmpw r8, r7
    bne lbl_fn_804DD578_00001B50
    lwz r7, 0x0(r4)
    addi r7, r7, 0x1
    stw r7, 0x0(r4)
lbl_fn_804DD578_00001B50:
    addi r9, r9, 0x1
    lwz r8, 0x0(r5)
    addis r7, r9, 0x1
    subi r7, r7, 0x6674
    lbzx r7, r11, r7
    cmpw r8, r7
    bne lbl_fn_804DD578_00001B78
    lwz r7, 0x0(r4)
    addi r7, r7, 0x1
    stw r7, 0x0(r4)
lbl_fn_804DD578_00001B78:
    addi r9, r9, 0x1
    lwz r8, 0x0(r5)
    addis r7, r9, 0x1
    subi r7, r7, 0x6674
    lbzx r7, r11, r7
    cmpw r8, r7
    bne lbl_fn_804DD578_00001BA0
    lwz r7, 0x0(r4)
    addi r7, r7, 0x1
    stw r7, 0x0(r4)
lbl_fn_804DD578_00001BA0:
    addi r9, r9, 0x1
    bdnz lbl_fn_804DD578_00001B04
    addi r4, r4, 0x4
    addi r5, r5, 0x4
    addi r3, r3, 0x1
lbl_fn_804DD578_00001BB4:
    cmpw r3, r28
    blt lbl_fn_804DD578_00001A84
lbl_fn_804DD578_00001BBC:
    addi r3, r1, 0x8
    li r26, 0x0
    mtctr r28
    cmpwi r28, 0x0
    ble lbl_fn_804DD578_00001BE8
lbl_fn_804DD578_00001BD0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DD578_00001BE0
    addi r26, r26, 0x1
lbl_fn_804DD578_00001BE0:
    addi r3, r3, 0x4
    bdnz lbl_fn_804DD578_00001BD0
lbl_fn_804DD578_00001BE8:
    cmpwi r26, 0x0
    beq lbl_fn_804DD578_00001C7C
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x64(r1)
    xoris r0, r26, 0x8000
    lfd f3, 0x58(r31)
    lfd f0, 0x60(r1)
    addi r6, r1, 0x8
    lfs f1, lbl_808875F8
    li r4, 0x0
    fsubs f2, f0, f3
    stw r0, 0x6c(r1)
    li r3, 0x0
    lfd f0, 0x68(r1)
    fdivs f1, f2, f1
    fsubs f0, f0, f3
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r5, 0x74(r1)
    mtctr r28
    cmpwi r28, 0x0
    ble lbl_fn_804DD578_00001CC8
lbl_fn_804DD578_00001C48:
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_fn_804DD578_00001C6C
    cmpw r5, r4
    bne lbl_fn_804DD578_00001C68
    slwi r0, r3, 2
    lwzx r3, r27, r0
    b lbl_fn_804DD578_00001D28
lbl_fn_804DD578_00001C68:
    addi r4, r4, 0x1
lbl_fn_804DD578_00001C6C:
    addi r6, r6, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_804DD578_00001C48
    b lbl_fn_804DD578_00001CC8
lbl_fn_804DD578_00001C7C:
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x64(r1)
    xoris r0, r28, 0x8000
    lfd f3, 0x58(r31)
    lfd f0, 0x60(r1)
    lfs f1, lbl_808875F8
    fsubs f2, f0, f3
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fdivs f1, f2, f1
    fsubs f0, f0, f3
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r0, 0x74(r1)
    slwi r0, r0, 2
    lwzx r3, r27, r0
    b lbl_fn_804DD578_00001D28
lbl_fn_804DD578_00001CC8:
    li r3, -0x1
    b lbl_fn_804DD578_00001D28
lbl_fn_804DD578_00001CD0:
    lwz r0, 0x540(r27)
    cmpwi r0, 0x2
    bne lbl_fn_804DD578_00001CE4
    li r3, 0x15
    b lbl_fn_804DD578_00001D28
lbl_fn_804DD578_00001CE4:
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x64(r1)
    lfd f2, 0x58(r31)
    li r3, 0xc
    lfd f0, 0x60(r1)
    lfs f1, lbl_808875F8
    fsubs f2, f0, f2
    lfs f0, lbl_80887588
    fdivs f1, f2, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r0, 0x74(r1)
    cmpwi r0, 0x0
    bne lbl_fn_804DD578_00001D28
    li r3, 0x15
lbl_fn_804DD578_00001D28:
    cmpwi r29, 0x0
    bne lbl_fn_804DD578_00001D34
    stw r3, 0xb0(r30)
lbl_fn_804DD578_00001D34:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
