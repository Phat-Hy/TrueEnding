#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_800A5D14(void);
extern void fn_800A5D6C(void);
extern void fn_800A5E00(void);
extern void fn_800A686C(void);
extern void fn_800A68D4(void);
extern void fn_800A6F7C(void);
extern void fn_800A6F88(void);
extern void fn_800A6FF0(void);
extern void fn_800DC288(void);
extern void fn_8020ED84(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073F7D0[];
extern u8 lbl_8073F890[];
extern u8 lbl_8073F940[];
extern u8 lbl_8073F968[];
extern u8 lbl_8073F970[];
extern u8 lbl_8073F984[];
extern u8 lbl_8073F9A8[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80783078[];
extern u8 lbl_80783090[];
extern u8 lbl_807C7F98[];
extern u8 lbl_807C7FA8[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087D720;
extern u32 lbl_8087DB38;
extern u32 lbl_8087DB3C;
extern u32 lbl_8087F200;
extern u32 lbl_8087F208;
extern u32 lbl_8087F20C;
extern u32 lbl_8087F210;
extern u32 lbl_8087F214;
extern u32 lbl_8087F218;
extern u32 lbl_8087F518;
extern u32 lbl_80882EA0;
extern u32 lbl_80882EA4;
extern u32 lbl_80882EA8;
extern u32 lbl_80882EAC;
extern u32 lbl_80882EB0;
extern u32 lbl_80882ED8;
extern u32 lbl_80882EDC;

/* Function declarations */
void fn_8020EFEC(void);
void fn_8020F064(void);
void fn_8020F0AC(void);
void fn_8020F130(void);
void fn_8020F190(void);
void fn_8020F1D0(void);
void fn_8020F248(void);
void fn_8020F710(void);
void fn_8020F71C(void);
void fn_8020F75C(void);
void fn_8020F7D0(void);
void fn_8020F84C(void);
void fn_8020FB6C(void);
void fn_8020FBC4(void);
void fn_8020FC8C(void);
void fn_8020FCE8(void);
void fn_8020FD30(void);
void fn_8020FDEC(void);
void fn_8021021C(void);
void fn_80210220(void);
void fn_80210244(void);

asm void fn_8020EFEC(void)
{
    nofralloc
    subis r4, r3, 0x3
    lis r3, 0x1062
    subi r7, r4, 0xd40
    addi r0, r3, 0x4dd3
    lis r4, 0x6666
    mulhw r6, r0, r7
    lis r3, 0x431c
    addi r4, r4, 0x6667
    subi r0, r3, 0x217d
    srawi r3, r6, 6
    srwi r5, r3, 31
    add r8, r3, r5
    mulhw r3, r4, r8
    srawi r5, r3, 2
    srawi r3, r6, 6
    mulhw r0, r0, r7
    srwi r6, r5, 31
    srwi r4, r3, 31
    add r5, r5, r6
    add r4, r3, r4
    srawi r0, r0, 18
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r4, r4, 0x3e8
    mulli r3, r5, 0xa
    subf r4, r4, r7
    mulli r0, r0, 0x3e8
    subf r3, r3, r8
    add r4, r4, r0
    b fn_8020ED84
}

asm void fn_8020F064(void)
{
    nofralloc
    lis r5, lbl_8073F7D0@ha
    li r0, 0xb
    addi r5, r5, lbl_8073F7D0@l
    li r6, 0x0
    mtctr r0
lbl_fn_8020F064_0000008C:
    lbz r4, 0x0(r5)
    lbz r0, 0x0(r3)
    extsb r4, r4
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_8020F064_000000AC
    mr r3, r6
    blr
lbl_fn_8020F064_000000AC:
    addi r5, r5, 0x1
    addi r6, r6, 0x1
    bdnz lbl_fn_8020F064_0000008C
    li r3, -0x1
    blr
}

asm void fn_8020F0AC(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_8020F0AC_000000D0
    li r3, 0x0
    blr
lbl_fn_8020F0AC_000000D0:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_8020F0AC_00000110
    cmpwi r4, 0x2
    beq lbl_fn_8020F0AC_00000110
    cmpwi r4, 0x6
    beq lbl_fn_8020F0AC_00000110
    cmpwi r4, 0x4
    beq lbl_fn_8020F0AC_00000110
    cmpwi r4, 0x3
    beq lbl_fn_8020F0AC_0000012C
    cmpwi r4, 0x1
    beq lbl_fn_8020F0AC_0000012C
    cmpwi r4, 0x5
    beq lbl_fn_8020F0AC_0000012C
    b lbl_fn_8020F0AC_0000013C
lbl_fn_8020F0AC_00000110:
    lwz r0, 0xa8(r3)
    cmpwi r0, 0x9
    beq lbl_fn_8020F0AC_0000013C
    cmpwi r0, 0xa
    beq lbl_fn_8020F0AC_0000013C
    li r5, 0x1
    b lbl_fn_8020F0AC_0000013C
lbl_fn_8020F0AC_0000012C:
    lwz r0, 0xa8(r3)
    cmpwi r0, 0x8
    beq lbl_fn_8020F0AC_0000013C
    li r5, 0x1
lbl_fn_8020F0AC_0000013C:
    mr r3, r5
    blr
}

asm void fn_8020F130(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_8087F200
    extsb. r0, r0
    bne lbl_fn_8020F130_0000018C
    lis r6, lbl_807C7FA8@ha
    li r0, 0x0
    addi r3, r6, lbl_807C7FA8@l
    lis r4, fn_8020F1D0@ha
    lis r5, lbl_807C7F98@ha
    stw r0, lbl_807C7FA8@l(r6)
    addi r4, r4, fn_8020F1D0@l
    stw r0, 0x4(r3)
    addi r5, r5, lbl_807C7F98@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F200
lbl_fn_8020F130_0000018C:
    lwz r0, 0x14(r1)
    lis r3, lbl_807C7FA8@ha
    addi r3, r3, lbl_807C7FA8@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020F190(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8020F190_000001CC
    cmpwi r4, 0x0
    ble lbl_fn_8020F190_000001CC
    bl dtor_80084684
lbl_fn_8020F190_000001CC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020F1D0(void)
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
    beq lbl_fn_8020F1D0_00000240
    beq lbl_fn_8020F1D0_00000230
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8020F1D0_00000224
    lis r4, fn_8020F190@ha
    addi r4, r4, fn_8020F190@l
    bl fn_80695A50
lbl_fn_8020F1D0_00000224:
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
lbl_fn_8020F1D0_00000230:
    cmpwi r31, 0x0
    ble lbl_fn_8020F1D0_00000240
    mr r3, r30
    bl dtor_80084684
lbl_fn_8020F1D0_00000240:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020F248(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    stw r0, 0x6d4(r1)
    addi r11, r1, 0x6d0
    bl _savegpr_22
    mr r24, r3
    li r23, 0x0
    stw r23, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, lbl_80882EA0
    li r5, 0x0
    bl fn_8006BA8C
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_8020F248_0000070C
    lis r3, lbl_807772D0@ha
    stw r23, 0x74(r1)
    addi r3, r3, lbl_807772D0@l
    li r4, 0x0
    stw r3, 0x70(r1)
    addi r3, r1, 0x80
    li r5, 0x400
    stw r23, 0x78(r1)
    stw r23, 0x7c(r1)
    stw r23, 0x6a0(r1)
    bl memset
    addi r3, r1, 0x680
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x70
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x70(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r12, 0x70(r1)
    mr r4, r25
    addi r3, r1, 0x70
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    li r22, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8020F248_00000330
lbl_fn_8020F248_00000310:
    addi r3, r1, 0x70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_8020F248_00000330
    cmpwi r0, 0x23
    beq lbl_fn_8020F248_00000330
    addi r22, r22, 0x1
lbl_fn_8020F248_00000330:
    addi r3, r1, 0x70
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020F248_00000310
    lwz r3, 0x4(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8020F248_00000358
    lis r4, fn_8020F190@ha
    addi r4, r4, fn_8020F190@l
    bl fn_80695A50
lbl_fn_8020F248_00000358:
    cmpwi r22, 0x0
    stw r22, 0x0(r24)
    beq lbl_fn_8020F248_000003A4
    mulli r3, r22, 0x60
    li r4, 0x4
    la r5, lbl_8087DB3C
    la r6, lbl_8087DB38
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8020F710@ha
    lis r5, fn_8020F190@ha
    mr r7, r22
    li r6, 0x60
    addi r4, r4, fn_8020F710@l
    addi r5, r5, fn_8020F190@l
    bl fn_80695720
    stw r3, 0x4(r24)
    b lbl_fn_8020F248_000003AC
lbl_fn_8020F248_000003A4:
    li r0, 0x0
    stw r0, 0x4(r24)
lbl_fn_8020F248_000003AC:
    li r0, 0x0
    stb r0, 0x14(r1)
    lwz r12, 0x70(r1)
    mr r4, r25
    addi r3, r1, 0x70
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    li r23, 0x0
    mtctr r12
    bctrl
    lis r27, lbl_8073F890@ha
    addi r26, r1, 0x14
    mr r30, r23
    li r29, 0x3
    addi r28, r27, lbl_8073F890@l
    li r31, 0x2
    b lbl_fn_8020F248_000006F0
lbl_fn_8020F248_000003F0:
    addi r3, r1, 0x70
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_8020F248_000006F0
    cmpwi r0, 0x23
    beq lbl_fn_8020F248_000006F0
    bl fn_80684600
    stw r3, 0x10(r1)
    addi r3, r1, 0x70
    bl fn_8005B3CC
    addi r3, r1, 0x70
    bl fn_8005B3CC
    cmplw r3, r26
    mr r22, r3
    beq lbl_fn_8020F248_00000448
    bl strlen
    mr r5, r3
    mr r3, r26
    mr r4, r22
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020F248_00000448:
    addi r3, r1, 0x70
    bl fn_8005B3CC
    mr r22, r3
    addi r4, r27, lbl_8073F890@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020F248_0000046C
    li r0, 0x1
    b lbl_fn_8020F248_000004A4
lbl_fn_8020F248_0000046C:
    mr r3, r22
    addi r4, r28, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020F248_00000488
    li r0, 0x2
    b lbl_fn_8020F248_000004A4
lbl_fn_8020F248_00000488:
    mr r3, r22
    addi r4, r28, 0xf
    bl fn_80682428
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    andc r0, r29, r0
lbl_fn_8020F248_000004A4:
    stw r0, 0x54(r1)
    addi r3, r1, 0x70
    bl fn_8005B3CC
    mr r22, r3
    addi r4, r27, lbl_8073F890@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020F248_000004CC
    li r0, 0x1
    b lbl_fn_8020F248_00000504
lbl_fn_8020F248_000004CC:
    mr r3, r22
    addi r4, r28, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020F248_000004E8
    li r0, 0x2
    b lbl_fn_8020F248_00000504
lbl_fn_8020F248_000004E8:
    mr r3, r22
    addi r4, r28, 0xf
    bl fn_80682428
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    andc r0, r29, r0
lbl_fn_8020F248_00000504:
    stw r0, 0x58(r1)
    addi r3, r1, 0x70
    stw r30, 0x5c(r1)
    bl fn_8005B3CC
    bl fn_80684600
    neg r4, r3
    lwz r0, 0x5c(r1)
    or r4, r4, r3
    addi r3, r1, 0x70
    srwi r4, r4, 31
    or r0, r0, r4
    stw r0, 0x5c(r1)
    bl fn_8005B3CC
    bl fn_80684600
    neg r4, r3
    lwz r0, 0x5c(r1)
    or r4, r4, r3
    addi r3, r1, 0x70
    srawi r4, r4, 31
    rlwinm r4, r4, 0, 30, 30
    or r0, r0, r4
    stw r0, 0x5c(r1)
    bl fn_8005B3CC
    bl fn_80684600
    neg r4, r3
    lwz r0, 0x5c(r1)
    or r4, r4, r3
    addi r3, r1, 0x70
    srawi r4, r4, 31
    rlwinm r4, r4, 0, 29, 29
    or r0, r0, r4
    stw r0, 0x5c(r1)
    bl fn_8005B3CC
    bl fn_80684600
    neg r4, r3
    lwz r0, 0x5c(r1)
    or r4, r4, r3
    addi r3, r1, 0x70
    srawi r4, r4, 31
    rlwinm r4, r4, 0, 28, 28
    or r0, r0, r4
    stw r0, 0x5c(r1)
    bl fn_8005B3CC
    mr r22, r3
    addi r4, r28, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020F248_000005CC
    li r0, 0x1
    b lbl_fn_8020F248_000005E8
lbl_fn_8020F248_000005CC:
    mr r3, r22
    addi r4, r28, 0x12
    bl fn_80682428
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    andc r0, r31, r0
lbl_fn_8020F248_000005E8:
    stw r0, 0x60(r1)
    addi r3, r1, 0x70
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x64(r1)
    addi r3, r1, 0x70
    bl fn_8005B3CC
    addi r4, r28, 0x16
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020F248_0000061C
    lfs f1, lbl_80882EA4
    b lbl_fn_8020F248_00000624
lbl_fn_8020F248_0000061C:
    addi r3, r1, 0x80
    bl fn_800DC288
lbl_fn_8020F248_00000624:
    stfs f1, 0x68(r1)
    addi r3, r1, 0x70
    bl fn_8005B3CC
    addi r4, r28, 0x16
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020F248_00000648
    lfs f1, lbl_80882EA4
    b lbl_fn_8020F248_00000650
lbl_fn_8020F248_00000648:
    addi r3, r1, 0x80
    bl fn_800DC288
lbl_fn_8020F248_00000650:
    stfs f1, 0x6c(r1)
    addi r3, r1, 0x70
    bl fn_8005B3CC
    bl fn_80684600
    neg r4, r3
    lwz r0, 0x5c(r1)
    or r4, r4, r3
    lwz r3, 0x10(r1)
    srawi r4, r4, 31
    rlwinm r4, r4, 0, 27, 27
    or r0, r0, r4
    stw r0, 0x5c(r1)
    lwz r0, 0x4(r24)
    add r22, r0, r23
    addi r0, r22, 0x4
    stw r3, 0x0(r22)
    cmplw r26, r0
    beq lbl_fn_8020F248_000006B4
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r22, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8020F248_000006B4:
    lwz r0, 0x54(r1)
    addi r23, r23, 0x60
    stw r0, 0x44(r22)
    lwz r0, 0x58(r1)
    stw r0, 0x48(r22)
    lwz r0, 0x5c(r1)
    stw r0, 0x4c(r22)
    lwz r0, 0x60(r1)
    stw r0, 0x50(r22)
    lfs f0, 0x64(r1)
    stfs f0, 0x54(r22)
    lfs f0, 0x68(r1)
    stfs f0, 0x58(r22)
    lfs f0, 0x6c(r1)
    stfs f0, 0x5c(r22)
lbl_fn_8020F248_000006F0:
    addi r3, r1, 0x70
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020F248_000003F0
    mr r3, r25
    li r4, 0x0
    bl fn_8006BB6C
lbl_fn_8020F248_0000070C:
    addi r11, r1, 0x6d0
    bl _restgpr_22
    lwz r0, 0x6d4(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}

asm void fn_8020F710(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x4(r3)
    blr
}

asm void fn_8020F71C(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8020F71C_00000768
lbl_fn_8020F71C_00000744:
    lwz r0, 0x4(r3)
    add r6, r0, r5
    lwzx r0, r5, r0
    cmpw r4, r0
    bne lbl_fn_8020F71C_00000760
    mr r3, r6
    blr
lbl_fn_8020F71C_00000760:
    addi r5, r5, 0x60
    bdnz lbl_fn_8020F71C_00000744
lbl_fn_8020F71C_00000768:
    li r3, 0x0
    blr
}

asm void fn_8020F75C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    li r28, 0x0
    li r31, 0x0
    lwz r30, 0x0(r3)
    b lbl_fn_8020F75C_000007C4
lbl_fn_8020F75C_00000798:
    lwz r0, 0x4(r26)
    mr r3, r27
    add r29, r0, r31
    addi r4, r29, 0x4
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8020F75C_000007BC
    lwz r3, 0x0(r29)
    b lbl_fn_8020F75C_000007D0
lbl_fn_8020F75C_000007BC:
    addi r28, r28, 0x1
    addi r31, r31, 0x60
lbl_fn_8020F75C_000007C4:
    cmpw r28, r30
    blt lbl_fn_8020F75C_00000798
    li r3, -0x1
lbl_fn_8020F75C_000007D0:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8020F7D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lis r4, lbl_8073F940@ha
    mr r3, r30
    addi r4, r4, lbl_8073F940@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020F7D0_0000082C
    mr r3, r31
    bl fn_800A68D4
    lwz r0, 0x18(r31)
    stw r0, 0x4(r3)
    b lbl_fn_8020F7D0_00000848
lbl_fn_8020F7D0_0000082C:
    mr r3, r31
    bl fn_800A686C
    mr r31, r3
    mr r3, r30
    bl fn_800DC288
    stfs f1, 0x4(r31)
    mr r3, r31
lbl_fn_8020F7D0_00000848:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020F84C(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    lwz r4, lbl_80882EA8
    li r6, 0x20
    stw r0, 0x674(r1)
    addi r5, r1, 0x8
    stw r31, 0x66c(r1)
    stw r30, 0x668(r1)
    li r30, 0x0
    stw r29, 0x664(r1)
    stw r30, 0x8(r1)
    lwz r3, lbl_8087F518
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    mr r31, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x28(r1)
    lwz r29, 0x8(r1)
    addi r3, r1, 0x38
    stw r30, 0x2c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r30, 0x30(r1)
    stw r30, 0x34(r1)
    stw r30, 0x658(r1)
    bl memset
    addi r3, r1, 0x638
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x28(r1)
    mr r4, r31
    mr r5, r29
    addi r3, r1, 0x28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x28(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    addi r3, r1, 0xc
    li r29, 0x0
    bl fn_800A5D14
    lwz r0, lbl_8087F208
    lis r3, lbl_80783090@ha
    addi r3, r3, lbl_80783090@l
    stw r3, 0xc(r1)
    cmpwi r0, 0x0
    stw r30, 0x24(r1)
    bne lbl_fn_8020F84C_00000B4C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    lis r4, lbl_8073F940@ha
    addi r4, r4, lbl_8073F940@l
    addi r4, r4, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020F84C_00000960
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
lbl_fn_8020F84C_00000960:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    lis r30, lbl_8073F940@ha
    addi r30, r30, lbl_8073F940@l
    b lbl_fn_8020F84C_00000990
lbl_fn_8020F84C_00000974:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r30, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8020F84C_00000990
    addi r29, r29, 0x1
lbl_fn_8020F84C_00000990:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020F84C_00000974
    lis r3, lbl_8073F940@ha
    li r4, 0x3
    addi r3, r3, lbl_8073F940@l
    li r7, 0x0
    addi r5, r3, 0xe
    mulli r8, r29, 0x4c
    mr r6, r5
    addi r3, r8, 0x10
    bl fn_800846FC
    lis r4, fn_8020FD30@ha
    lis r5, fn_8020FBC4@ha
    mr r7, r29
    li r6, 0x4c
    addi r4, r4, fn_8020FD30@l
    addi r5, r5, fn_8020FBC4@l
    bl fn_80695720
    stw r3, lbl_8087F208
    mr r4, r31
    lwz r12, 0x28(r1)
    addi r3, r1, 0x28
    stw r29, lbl_8087F20C
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x28
    bl fn_8005B5F8
    li r29, 0x0
    b lbl_fn_8020F84C_00000B3C
lbl_fn_8020F84C_00000A14:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r30, r3
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8020F84C_00000B3C
    lwz r0, lbl_8087F208
    mr r3, r30
    add r30, r0, r29
    bl fn_80684600
    stw r3, 0x0(r30)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r0, r30, 0x48
    stw r0, 0x24(r1)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_800A5E00
    addi r3, r30, 0x44
    addi r4, r1, 0xc
    bl fn_800A6FF0
    addi r0, r30, 0xc
    stw r0, 0x24(r1)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_800A5E00
    addi r3, r30, 0x8
    addi r4, r1, 0xc
    bl fn_800A6FF0
    addi r0, r30, 0x18
    stw r0, 0x24(r1)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_800A5E00
    addi r3, r30, 0x14
    addi r4, r1, 0xc
    bl fn_800A6FF0
    addi r0, r30, 0x24
    stw r0, 0x24(r1)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_800A5E00
    addi r3, r30, 0x20
    addi r4, r1, 0xc
    bl fn_800A6FF0
    addi r0, r30, 0x30
    stw r0, 0x24(r1)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_800A5E00
    addi r3, r30, 0x2c
    addi r4, r1, 0xc
    bl fn_800A6FF0
    addi r0, r30, 0x3c
    stw r0, 0x24(r1)
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_800A5E00
    addi r3, r30, 0x38
    addi r4, r1, 0xc
    bl fn_800A6FF0
    addi r29, r29, 0x4c
lbl_fn_8020F84C_00000B3C:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020F84C_00000A14
lbl_fn_8020F84C_00000B4C:
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
    addi r3, r1, 0xc
    li r4, 0x0
    bl fn_800A5D6C
    lwz r0, 0x674(r1)
    lwz r31, 0x66c(r1)
    lwz r30, 0x668(r1)
    lwz r29, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_8020FB6C(void)
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
    beq lbl_fn_8020FB6C_00000BBC
    li r4, 0x0
    bl fn_800A5D6C
    cmpwi r31, 0x0
    ble lbl_fn_8020FB6C_00000BBC
    mr r3, r30
    bl dtor_80084684
lbl_fn_8020FB6C_00000BBC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020FBC4(void)
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
    beq lbl_fn_8020FBC4_00000C84
    addic. r3, r3, 0x40
    beq lbl_fn_8020FBC4_00000C10
    addi r3, r3, 0x4
    li r4, -0x1
    bl fn_800A6F88
lbl_fn_8020FBC4_00000C10:
    addic. r3, r30, 0x34
    beq lbl_fn_8020FBC4_00000C24
    addi r3, r3, 0x4
    li r4, -0x1
    bl fn_800A6F88
lbl_fn_8020FBC4_00000C24:
    addic. r3, r30, 0x28
    beq lbl_fn_8020FBC4_00000C38
    addi r3, r3, 0x4
    li r4, -0x1
    bl fn_800A6F88
lbl_fn_8020FBC4_00000C38:
    addic. r3, r30, 0x1c
    beq lbl_fn_8020FBC4_00000C4C
    addi r3, r3, 0x4
    li r4, -0x1
    bl fn_800A6F88
lbl_fn_8020FBC4_00000C4C:
    addic. r3, r30, 0x10
    beq lbl_fn_8020FBC4_00000C60
    addi r3, r3, 0x4
    li r4, -0x1
    bl fn_800A6F88
lbl_fn_8020FBC4_00000C60:
    addic. r3, r30, 0x4
    beq lbl_fn_8020FBC4_00000C74
    addi r3, r3, 0x4
    li r4, -0x1
    bl fn_800A6F88
lbl_fn_8020FBC4_00000C74:
    cmpwi r31, 0x0
    ble lbl_fn_8020FBC4_00000C84
    mr r3, r30
    bl dtor_80084684
lbl_fn_8020FBC4_00000C84:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020FC8C(void)
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
    beq lbl_fn_8020FC8C_00000CE0
    li r4, -0x1
    addi r3, r3, 0x4
    bl fn_800A6F88
    cmpwi r31, 0x0
    ble lbl_fn_8020FC8C_00000CE0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8020FC8C_00000CE0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020FCE8(void)
{
    nofralloc
    lwz r5, lbl_8087F208
    li r6, 0x0
    lwz r0, lbl_8087F20C
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8020FCE8_00000D3C
lbl_fn_8020FCE8_00000D18:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_8020FCE8_00000D30
    mulli r0, r6, 0x4c
    add r3, r5, r0
    blr
lbl_fn_8020FCE8_00000D30:
    addi r4, r4, 0x4c
    addi r6, r6, 0x1
    bdnz lbl_fn_8020FCE8_00000D18
lbl_fn_8020FCE8_00000D3C:
    li r3, 0x0
    blr
}

asm void fn_8020FD30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    lis r31, lbl_80783078@ha
    addi r31, r31, lbl_80783078@l
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    stw r31, 0x4(r3)
    addi r3, r3, 0x8
    bl fn_800A6F7C
    lfs f0, lbl_80882EAC
    addi r3, r30, 0x14
    stfs f0, 0xc(r30)
    stw r31, 0x10(r30)
    bl fn_800A6F7C
    lfs f0, lbl_80882EAC
    addi r3, r30, 0x20
    stfs f0, 0x18(r30)
    stw r31, 0x1c(r30)
    bl fn_800A6F7C
    lfs f0, lbl_80882EAC
    addi r3, r30, 0x2c
    stfs f0, 0x24(r30)
    stw r31, 0x28(r30)
    bl fn_800A6F7C
    lfs f0, lbl_80882EAC
    addi r3, r30, 0x38
    stfs f0, 0x30(r30)
    stw r31, 0x34(r30)
    bl fn_800A6F7C
    lfs f0, lbl_80882EAC
    addi r3, r30, 0x44
    stfs f0, 0x3c(r30)
    stw r31, 0x40(r30)
    bl fn_800A6F7C
    lfs f0, lbl_80882EAC
    mr r3, r30
    stfs f0, 0x48(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020FDEC(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F210
    cmpwi r0, 0x0
    bne lbl_fn_8020FDEC_00001218
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882EB0
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r30, r3
    mr r4, r30
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_8020FDEC_00000ED0
lbl_fn_8020FDEC_00000EB0:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8020FDEC_00000ED0
    lwz r3, lbl_8087F214
    addi r0, r3, 0x1
    stw r0, lbl_8087F214
lbl_fn_8020FDEC_00000ED0:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020FDEC_00000EB0
    lwz r31, lbl_8087F214
    lis r5, lbl_8073F968@ha
    addi r5, r5, lbl_8073F968@l
    li r4, 0x3
    mulli r3, r31, 0x6c
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8021021C@ha
    mr r7, r31
    addi r4, r4, fn_8021021C@l
    li r5, 0x0
    li r6, 0x6c
    bl fn_80695720
    stw r3, lbl_8087F210
    mr r4, r30
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r31, 0x0
    b lbl_fn_8020FDEC_000011FC
lbl_fn_8020FDEC_00000F44:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8020FDEC_000011FC
    lwz r0, lbl_8087F210
    li r4, 0x0
    li r5, 0x6c
    add r3, r0, r31
    bl memset
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r4, lbl_8087F210
    stwx r3, r4, r31
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x4(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x8(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0xc(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x10(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x14(r4)
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x18(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x1c(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x20(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x24(r4)
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x28(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x2c(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x30(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x34(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x38(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x3c(r4)
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x40(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x44(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x48(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x4c(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x50(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x54(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x58(r4)
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F210
    add r4, r0, r31
    stw r3, 0x5c(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x60(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    addi r3, r1, 0xc
    add r4, r0, r31
    stfs f1, 0x64(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F210
    add r3, r0, r31
    addi r31, r31, 0x6c
    stfs f1, 0x68(r3)
lbl_fn_8020FDEC_000011FC:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020FDEC_00000F44
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
lbl_fn_8020FDEC_00001218:
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8021021C(void)
{
    nofralloc
    blr
}

asm void fn_80210220(void)
{
    nofralloc
    lwz r0, lbl_8087F214
    cmpw r3, r0
    bge lbl_fn_80210220_00001250
    mulli r0, r3, 0x6c
    lwz r3, lbl_8087F210
    add r3, r3, r0
    blr
lbl_fn_80210220_00001250:
    lwz r3, lbl_8087F210
    blr
}

asm void fn_80210244(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    addi r11, r1, 0x670
    bl _savegpr_22
    lis r3, lbl_807772D0@ha
    li r27, 0x0
    addi r3, r3, lbl_807772D0@l
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    li r4, 0x0
    stw r27, 0x10(r1)
    li r5, 0x400
    stw r27, 0x14(r1)
    stw r27, 0x18(r1)
    stw r27, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F218
    cmpwi r0, 0x0
    bne lbl_fn_80210244_00001AC0
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882ED8
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r31, r3
    mr r4, r31
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    lis r5, lbl_8073F9A8@ha
    li r3, 0x434
    addi r5, r5, lbl_8073F9A8@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80210244_00001670
    addi r6, r3, 0x8
    addi r0, r3, 0x100
    stw r27, 0x0(r3)
    cmplw r6, r0
    stw r27, 0x4(r3)
    bge lbl_fn_80210244_000013FC
    addi r5, r3, 0xc0
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_80210244_00001354
    li r4, 0x1
lbl_fn_80210244_00001354:
    cmpwi r4, 0x0
    beq lbl_fn_80210244_00001360
    li r0, 0x1
lbl_fn_80210244_00001360:
    cmpwi r0, 0x0
    beq lbl_fn_80210244_000013CC
    addi r0, r5, 0x3f
    li r4, 0x0
    subf r0, r6, r0
    srwi r0, r0, 6
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_80210244_000013CC
lbl_fn_80210244_00001384:
    stw r4, 0x0(r6)
    stw r4, 0x4(r6)
    stw r4, 0x8(r6)
    stw r4, 0xc(r6)
    stw r4, 0x10(r6)
    stw r4, 0x14(r6)
    stw r4, 0x18(r6)
    stw r4, 0x1c(r6)
    stw r4, 0x20(r6)
    stw r4, 0x24(r6)
    stw r4, 0x28(r6)
    stw r4, 0x2c(r6)
    stw r4, 0x30(r6)
    stw r4, 0x34(r6)
    stw r4, 0x38(r6)
    stw r4, 0x3c(r6)
    addi r6, r6, 0x40
    bdnz lbl_fn_80210244_00001384
lbl_fn_80210244_000013CC:
    addi r4, r3, 0x100
    li r5, 0x0
    addi r0, r4, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r6, r4
    bge lbl_fn_80210244_000013FC
lbl_fn_80210244_000013EC:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_80210244_000013EC
lbl_fn_80210244_000013FC:
    lfs f0, lbl_80882EDC
    li r5, 0xa
    stfs f0, 0x128(r3)
    li r0, -0x1
    addi r8, r3, 0x140
    addi r4, r3, 0x2b4
    stfs f0, 0x12c(r3)
    cmplw r8, r4
    li r6, 0x0
    stfs f0, 0x130(r3)
    stw r5, 0x100(r3)
    stw r5, 0x104(r3)
    stw r5, 0x108(r3)
    stw r5, 0x10c(r3)
    stw r5, 0x110(r3)
    stw r5, 0x114(r3)
    stw r5, 0x118(r3)
    stw r5, 0x11c(r3)
    stw r5, 0x120(r3)
    stw r5, 0x124(r3)
    stw r0, 0x134(r3)
    stw r0, 0x138(r3)
    stw r6, 0x13c(r3)
    bge lbl_fn_80210244_00001554
    addi r0, r3, 0x140
    addi r6, r3, 0x254
    cmplw r0, r4
    li r4, 0x0
    li r0, 0x0
    bgt lbl_fn_80210244_00001478
    li r4, 0x1
lbl_fn_80210244_00001478:
    cmpwi r4, 0x0
    beq lbl_fn_80210244_00001484
    li r0, 0x1
lbl_fn_80210244_00001484:
    cmpwi r0, 0x0
    beq lbl_fn_80210244_00001518
    addi r4, r6, 0x5f
    li r0, 0x60
    subf r4, r8, r4
    li r5, -0x1
    divwu r4, r4, r0
    li r0, 0x0
    mtctr r4
    cmplw r8, r6
    bge lbl_fn_80210244_00001518
lbl_fn_80210244_000014B0:
    stw r5, 0x0(r8)
    stw r5, 0x4(r8)
    stw r0, 0x8(r8)
    stw r5, 0xc(r8)
    stw r5, 0x10(r8)
    stw r0, 0x14(r8)
    stw r5, 0x18(r8)
    stw r5, 0x1c(r8)
    stw r0, 0x20(r8)
    stw r5, 0x24(r8)
    stw r5, 0x28(r8)
    stw r0, 0x2c(r8)
    stw r5, 0x30(r8)
    stw r5, 0x34(r8)
    stw r0, 0x38(r8)
    stw r5, 0x3c(r8)
    stw r5, 0x40(r8)
    stw r0, 0x44(r8)
    stw r5, 0x48(r8)
    stw r5, 0x4c(r8)
    stw r0, 0x50(r8)
    stw r5, 0x54(r8)
    stw r5, 0x58(r8)
    stw r0, 0x5c(r8)
    addi r8, r8, 0x60
    bdnz lbl_fn_80210244_000014B0
lbl_fn_80210244_00001518:
    addi r5, r3, 0x2b4
    li r0, 0xc
    addi r4, r5, 0xb
    li r7, -0x1
    subf r4, r8, r4
    li r6, 0x0
    divwu r4, r4, r0
    mtctr r4
    cmplw r8, r5
    bge lbl_fn_80210244_00001554
lbl_fn_80210244_00001540:
    stw r7, 0x0(r8)
    stw r7, 0x4(r8)
    stw r6, 0x8(r8)
    addi r8, r8, 0xc
    bdnz lbl_fn_80210244_00001540
lbl_fn_80210244_00001554:
    li r0, -0x1
    stw r0, 0x2b4(r3)
    addi r8, r3, 0x2c0
    addi r4, r3, 0x434
    stw r0, 0x2b8(r3)
    li r0, 0x0
    cmplw r8, r4
    stw r0, 0x2bc(r3)
    bge lbl_fn_80210244_00001670
    addi r0, r3, 0x2c0
    addi r6, r3, 0x3d4
    cmplw r0, r4
    li r4, 0x0
    li r0, 0x0
    bgt lbl_fn_80210244_00001594
    li r4, 0x1
lbl_fn_80210244_00001594:
    cmpwi r4, 0x0
    beq lbl_fn_80210244_000015A0
    li r0, 0x1
lbl_fn_80210244_000015A0:
    cmpwi r0, 0x0
    beq lbl_fn_80210244_00001634
    addi r4, r6, 0x5f
    li r0, 0x60
    subf r4, r8, r4
    li r5, -0x1
    divwu r4, r4, r0
    li r0, 0x0
    mtctr r4
    cmplw r8, r6
    bge lbl_fn_80210244_00001634
lbl_fn_80210244_000015CC:
    stw r5, 0x0(r8)
    stw r5, 0x4(r8)
    stw r0, 0x8(r8)
    stw r5, 0xc(r8)
    stw r5, 0x10(r8)
    stw r0, 0x14(r8)
    stw r5, 0x18(r8)
    stw r5, 0x1c(r8)
    stw r0, 0x20(r8)
    stw r5, 0x24(r8)
    stw r5, 0x28(r8)
    stw r0, 0x2c(r8)
    stw r5, 0x30(r8)
    stw r5, 0x34(r8)
    stw r0, 0x38(r8)
    stw r5, 0x3c(r8)
    stw r5, 0x40(r8)
    stw r0, 0x44(r8)
    stw r5, 0x48(r8)
    stw r5, 0x4c(r8)
    stw r0, 0x50(r8)
    stw r5, 0x54(r8)
    stw r5, 0x58(r8)
    stw r0, 0x5c(r8)
    addi r8, r8, 0x60
    bdnz lbl_fn_80210244_000015CC
lbl_fn_80210244_00001634:
    addi r5, r3, 0x434
    li r0, 0xc
    addi r4, r5, 0xb
    li r7, -0x1
    subf r4, r8, r4
    li r6, 0x0
    divwu r4, r4, r0
    mtctr r4
    cmplw r8, r5
    bge lbl_fn_80210244_00001670
lbl_fn_80210244_0000165C:
    stw r7, 0x0(r8)
    stw r7, 0x4(r8)
    stw r6, 0x8(r8)
    addi r8, r8, 0xc
    bdnz lbl_fn_80210244_0000165C
lbl_fn_80210244_00001670:
    lis r4, lbl_8073F9A8@ha
    stw r3, lbl_8087F218
    lis r30, lbl_8073F984@ha
    lis r28, lbl_8073F970@ha
    addi r29, r4, lbl_8073F9A8@l
    b lbl_fn_80210244_00001AA4
lbl_fn_80210244_00001688:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80210244_00001AA4
    cmpwi r0, 0x23
    beq lbl_fn_80210244_00001AA4
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80210244_00001AA4
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r25, r3
    addi r4, r29, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80210244_00001770
    li r25, 0x0
    li r26, 0x0
    b lbl_fn_80210244_0000175C
lbl_fn_80210244_000016E0:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80210244_0000175C
    cmpwi r0, 0x23
    beq lbl_fn_80210244_0000175C
    addi r4, r29, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80210244_00001AA4
    addi r3, r1, 0x1c
    bl fn_80684600
    mr r27, r3
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r27, 0x0
    ble lbl_fn_80210244_0000175C
    cmpwi r3, 0x0
    ble lbl_fn_80210244_0000175C
    lwz r4, lbl_8087F218
    addi r25, r25, 0x1
    cmpwi r25, 0x20
    stwx r27, r4, r26
    lwz r0, lbl_8087F218
    add r4, r0, r26
    addi r26, r26, 0x8
    stw r3, 0x4(r4)
    bge lbl_fn_80210244_00001AA4
lbl_fn_80210244_0000175C:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80210244_000016E0
    b lbl_fn_80210244_00001AA4
lbl_fn_80210244_00001770:
    mr r3, r25
    addi r4, r29, 0x10
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80210244_0000180C
    b lbl_fn_80210244_000017F8
lbl_fn_80210244_00001788:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80210244_000017F8
    cmpwi r0, 0x23
    beq lbl_fn_80210244_000017F8
    addi r4, r29, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80210244_00001AA4
    addi r3, r1, 0x1c
    bl fn_80684600
    mr r27, r3
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r27, 0x0
    blt lbl_fn_80210244_000017F8
    cmpwi r27, 0xa
    bge lbl_fn_80210244_000017F8
    cmpwi r3, 0x0
    blt lbl_fn_80210244_000017F8
    lwz r4, lbl_8087F218
    slwi r0, r27, 2
    add r4, r4, r0
    stw r3, 0x100(r4)
lbl_fn_80210244_000017F8:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80210244_00001788
    b lbl_fn_80210244_00001AA4
lbl_fn_80210244_0000180C:
    mr r3, r25
    addi r4, r29, 0x19
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80210244_000018C0
    li r25, 0x0
    b lbl_fn_80210244_000018AC
lbl_fn_80210244_00001828:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80210244_000018AC
    cmpwi r0, 0x23
    beq lbl_fn_80210244_000018AC
    addi r4, r29, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80210244_00001AA4
    cmpwi r25, 0x0
    bne lbl_fn_80210244_00001874
    addi r3, r1, 0x1c
    bl fn_800DC288
    lwz r3, lbl_8087F218
    stfs f1, 0x128(r3)
    b lbl_fn_80210244_000018A8
lbl_fn_80210244_00001874:
    cmpwi r25, 0x1
    bne lbl_fn_80210244_00001890
    addi r3, r1, 0x1c
    bl fn_800DC288
    lwz r3, lbl_8087F218
    stfs f1, 0x12c(r3)
    b lbl_fn_80210244_000018A8
lbl_fn_80210244_00001890:
    cmpwi r25, 0x2
    bne lbl_fn_80210244_000018A8
    addi r3, r1, 0x1c
    bl fn_800DC288
    lwz r3, lbl_8087F218
    stfs f1, 0x130(r3)
lbl_fn_80210244_000018A8:
    addi r25, r25, 0x1
lbl_fn_80210244_000018AC:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80210244_00001828
    b lbl_fn_80210244_00001AA4
lbl_fn_80210244_000018C0:
    mr r3, r25
    addi r4, r29, 0x26
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80210244_000019B4
    li r24, 0x0
    li r26, 0x0
    b lbl_fn_80210244_000019A0
lbl_fn_80210244_000018E0:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r25, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80210244_000019A0
    cmpwi r0, 0x23
    beq lbl_fn_80210244_000019A0
    cmpwi r0, 0x0
    beq lbl_fn_80210244_000019A0
    addi r4, r29, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80210244_00001AA4
    addi r27, r28, lbl_8073F970@l
    li r23, -0x1
    li r22, 0x0
lbl_fn_80210244_00001928:
    lwz r4, 0x0(r27)
    mr r3, r25
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80210244_00001948
    mr r23, r22
    b lbl_fn_80210244_00001958
lbl_fn_80210244_00001948:
    addi r22, r22, 0x1
    addi r27, r27, 0x4
    cmpwi r22, 0x5
    blt lbl_fn_80210244_00001928
lbl_fn_80210244_00001958:
    lwz r0, lbl_8087F218
    addi r3, r25, 0x2
    add r4, r0, r26
    stw r23, 0x134(r4)
    bl fn_80684600
    lwz r0, lbl_8087F218
    add r4, r0, r26
    stw r3, 0x138(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F218
    addi r24, r24, 0x1
    cmpwi r24, 0x20
    add r4, r0, r26
    addi r26, r26, 0xc
    stw r3, 0x13c(r4)
    bge lbl_fn_80210244_00001AA4
lbl_fn_80210244_000019A0:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80210244_000018E0
    b lbl_fn_80210244_00001AA4
lbl_fn_80210244_000019B4:
    mr r3, r25
    addi r4, r29, 0x30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80210244_00001AA4
    li r22, 0x0
    li r27, 0x0
    b lbl_fn_80210244_00001A94
lbl_fn_80210244_000019D4:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r25, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80210244_00001A94
    cmpwi r0, 0x23
    beq lbl_fn_80210244_00001A94
    cmpwi r0, 0x0
    beq lbl_fn_80210244_00001A94
    addi r4, r29, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80210244_00001AA4
    addi r26, r30, lbl_8073F984@l
    li r23, -0x1
    li r24, 0x0
lbl_fn_80210244_00001A1C:
    lwz r4, 0x0(r26)
    mr r3, r25
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80210244_00001A3C
    mr r23, r24
    b lbl_fn_80210244_00001A4C
lbl_fn_80210244_00001A3C:
    addi r24, r24, 0x1
    addi r26, r26, 0x4
    cmpwi r24, 0x3
    blt lbl_fn_80210244_00001A1C
lbl_fn_80210244_00001A4C:
    lwz r0, lbl_8087F218
    addi r3, r25, 0x2
    add r4, r0, r27
    stw r23, 0x2b4(r4)
    bl fn_80684600
    lwz r0, lbl_8087F218
    add r4, r0, r27
    stw r3, 0x2b8(r4)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F218
    addi r22, r22, 0x1
    cmpwi r22, 0x20
    add r4, r0, r27
    addi r27, r27, 0xc
    stw r3, 0x2bc(r4)
    bge lbl_fn_80210244_00001AA4
lbl_fn_80210244_00001A94:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80210244_000019D4
lbl_fn_80210244_00001AA4:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80210244_00001688
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
lbl_fn_80210244_00001AC0:
    addi r11, r1, 0x670
    bl _restgpr_22
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}
