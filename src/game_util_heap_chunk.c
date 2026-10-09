#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_15(void);
extern void _restgpr_20(void);
extern void _savegpr_15(void);
extern void _savegpr_20(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DBF68(void);
extern void fn_800DC12C(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_801F3FF8(void);
extern void fn_801F4728(void);
extern void fn_801F48C8(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801F64D0(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F7590(void);
extern void fn_801F7DF0(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801FECE0(void);
extern void fn_801FEE08(void);
extern void fn_80206B14(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_80206D18(void);
extern void fn_8020924C(void);
extern void fn_8020ED84(void);
extern void fn_8020EF04(void);
extern void fn_8020EF4C(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_80217D9C(void);
extern void fn_80219544(void);
extern void fn_804444E8(void);
extern void fn_80444564(void);
extern void fn_80444BE8(void);
extern void fn_80444C48(void);
extern void fn_80444C50(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804A39EC(void);
extern void fn_804A3A68(void);
extern void fn_804A55FC(void);
extern void fn_804A5824(void);
extern void fn_8057F284(void);
extern void fn_8057F7AC(void);
extern void fn_8057F884(void);
extern void fn_8057F8FC(void);
extern void fn_80580268(void);
extern void fn_805807A8(void);
extern void fn_80580B54(void);
extern void fn_80580D84(void);
extern void fn_80580DB4(void);
extern void fn_80580DE4(void);
extern void fn_8058100C(void);
extern void fn_805811E0(void);
extern void fn_80581574(void);
extern void fn_80581820(void);
extern void fn_80581FDC(void);
extern void fn_805846C4(void);
extern void fn_80584754(void);
extern void fn_805847F0(void);
extern void fn_8058480C(void);
extern void fn_80584830(void);
extern void fn_805849EC(void);
extern void fn_80584D7C(void);
extern void fn_80587D14(void);
extern void fn_80587E40(void);
extern void fn_805880F4(void);
extern void fn_805883DC(void);
extern void fn_8067CE80(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80761670[];
extern u8 lbl_807616DC[];
extern u8 lbl_80761914[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807968D0[];
extern u8 lbl_807968E8[];
extern u8 lbl_80796950[];

/* Small data declarations */
extern u32 lbl_8087D720;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F9D0;
extern u32 lbl_808813D0;
extern u32 lbl_808880F0;
extern u32 lbl_808880F4;
extern u32 lbl_808880FC;
extern u32 lbl_80888100;
extern u32 lbl_80888104;
extern u32 lbl_80888108;
extern u32 lbl_8088810C;
extern u32 lbl_80888110;
extern u32 lbl_80888114;
extern u32 lbl_80888118;

/* Function declarations */
void fn_80585C70(void);
void fn_80585D0C(void);
void fn_80585E84(void);
void fn_80585FD8(void);
void fn_805860F4(void);
void fn_80586220(void);
void fn_80586624(void);
void fn_805866F8(void);
void fn_80586DAC(void);
void fn_80586DB4(void);
void fn_80586E40(void);
void fn_80586FD0(void);
void fn_80587070(void);
void fn_80587250(void);
void fn_805873BC(void);
void fn_80587628(void);

asm void fn_80585C70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x5
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bne lbl_fn_80585C70_00000074
    lwz r0, 0xdc(r3)
    addis r4, r3, 0x2
    lwz r5, 0x5b24(r4)
    mulli r0, r0, 0x5c
    add r4, r3, r0
    addi r4, r4, 0x3300
    bl fn_80584D7C
    mr r3, r31
    bl fn_80581FDC
    addi r3, r1, 0x8
    li r4, 0x19
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80585C70_00000088
lbl_fn_80585C70_00000074:
    lwz r12, 0x0(r3)
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80585C70_00000088:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80585D0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_805847F0
    addis r3, r30, 0x2
    li r4, 0x0
    lwz r0, 0x5b04(r3)
    li r5, 0x4
    stw r0, 0x5c8c(r3)
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80585D0C_000001B4
    lwz r0, 0x4c(r30)
    addis r3, r30, 0x2
    lwz r3, 0x5c8c(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80585D0C_000000FC
    addi r3, r3, 0x1
lbl_fn_80585D0C_000000FC:
    cmpwi r3, 0x0
    beq lbl_fn_80585D0C_00000118
    cmpwi r3, 0x1
    beq lbl_fn_80585D0C_0000014C
    cmpwi r3, 0x2
    beq lbl_fn_80585D0C_00000180
    b lbl_fn_80585D0C_000001FC
lbl_fn_80585D0C_00000118:
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80585D0C_000001FC
lbl_fn_80585D0C_0000014C:
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80585D0C_000001FC
lbl_fn_80585D0C_00000180:
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80585D0C_000001FC
lbl_fn_80585D0C_000001B4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80585D0C_000001FC
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80585D0C_000001FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80585E84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_8058480C
    addis r6, r30, 0x2
    li r4, 0x0
    lwz r3, 0x5b04(r6)
    li r5, 0x4
    lwz r0, 0x5b0c(r6)
    stw r3, 0x5c90(r6)
    stw r0, 0x5c94(r6)
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80585E84_00000308
    addis r4, r30, 0x2
    mr r3, r30
    lwz r0, 0x5c90(r4)
    mulli r0, r0, 0x64
    add r4, r30, r0
    addi r4, r4, 0xfc
    bl fn_80584830
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80585E84_000002C0
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x8
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80585E84_00000350
lbl_fn_80585E84_000002C0:
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r30
    mr r5, r31
    li r4, 0x1
    li r6, 0x0
    bl fn_80581820
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80585E84_00000350
lbl_fn_80585E84_00000308:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80585E84_00000350
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80585E84_00000350:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80585FD8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_80580B54
    lwz r31, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80585FD8_00000424
    addis r4, r30, 0x2
    mr r3, r30
    lwz r0, 0x5c90(r4)
    lwz r5, 0x5b24(r4)
    mulli r0, r0, 0x64
    add r4, r30, r0
    addi r4, r4, 0xfc
    bl fn_805849EC
    addi r3, r30, 0x58
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x58
    bl fn_80470580
    lwz r12, 0x0(r30)
    mr r4, r3
    mr r3, r30
    mr r5, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0xc
    li r4, 0x19
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80585FD8_0000046C
lbl_fn_80585FD8_00000424:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80585FD8_0000046C
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80585FD8_0000046C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805860F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xe8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_805860F4_000004C0
    addis r3, r3, 0x2
    lwz r3, 0x5b68(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_805860F4_00000598
lbl_fn_805860F4_000004C0:
    cmpwi r0, 0x7
    bne lbl_fn_805860F4_0000050C
    bl fn_80586220
    lwz r0, 0xf8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805860F4_00000598
    addis r3, r30, 0x2
    lwz r3, 0x5c90(r3)
    cmpw r3, r0
    bge lbl_fn_805860F4_00000598
    mulli r0, r3, 0x64
    mr r3, r30
    add r31, r30, r0
    lwz r4, 0xfc(r31)
    bl fn_80586624
    lwz r4, 0xfc(r31)
    mr r3, r30
    bl fn_8058100C
    b lbl_fn_805860F4_00000598
lbl_fn_805860F4_0000050C:
    cmpwi r0, 0x5
    bne lbl_fn_805860F4_0000051C
    bl fn_805807A8
    b lbl_fn_805860F4_00000598
lbl_fn_805860F4_0000051C:
    cmpwi r0, 0x6
    bne lbl_fn_805860F4_00000598
    bl fn_805807A8
    lwz r0, 0x32fc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805860F4_00000570
    lwz r3, 0xdc(r30)
    cmpw r3, r0
    bge lbl_fn_805860F4_00000570
    mulli r0, r3, 0x5c
    mr r3, r30
    add r31, r30, r0
    lwz r4, 0x3300(r31)
    bl fn_8058100C
    lwz r4, 0x3300(r31)
    mr r3, r30
    bl fn_805811E0
    lwz r4, 0x3300(r31)
    mr r3, r30
    lwz r5, 0x3348(r31)
    bl fn_80581574
lbl_fn_805860F4_00000570:
    lwz r7, 0xe0(r30)
    mr r3, r30
    lwz r6, 0xdc(r30)
    li r8, 0x1
    lwz r4, 0xa8(r30)
    subf r0, r7, r6
    slwi r0, r0, 2
    add r5, r30, r0
    lwz r5, 0xac(r5)
    bl fn_805846C4
lbl_fn_805860F4_00000598:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80586220(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x100
    bl _savegpr_15
    lwz r5, 0xa8(r3)
    lis r15, lbl_807616DC@ha
    addi r15, r15, lbl_807616DC@l
    lwz r17, lbl_8087F4F0
    lwz r0, 0x38(r5)
    mr r31, r3
    addi r4, r15, 0x132
    li r6, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0xd4(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, lbl_8087F4F0
    lwz r3, 0xd4(r3)
    lwz r5, 0x6000(r5)
    bl fn_801F4CB4
    addis r3, r31, 0x2
    lwz r0, 0xf8(r31)
    lwz r3, 0x5c90(r3)
    cmpw r3, r0
    bge lbl_fn_80586220_00000648
    mulli r0, r3, 0x64
    mr r3, r17
    add r4, r31, r0
    lwz r4, 0xfc(r4)
    bl fn_80444564
    mr r5, r3
    lwz r3, 0xd4(r31)
    addi r4, r15, 0x13a
    li r6, 0x0
    bl fn_801F4CB4
lbl_fn_80586220_00000648:
    addis r5, r31, 0x2
    lwz r6, 0xf8(r31)
    lwz r4, 0xa8(r31)
    mr r3, r31
    lwz r5, 0x5b0c(r5)
    li r7, 0xa
    bl fn_80584754
    lfs f0, lbl_808880F0
    lis r3, lbl_807616DC@ha
    lis r28, lbl_807968D0@ha
    li r16, 0x0
    stfs f0, 0x58(r1)
    mr r27, r16
    addi r19, r1, 0x3a
    addi r25, r3, lbl_807616DC@l
    stfs f0, 0x5c(r1)
    addi r23, r1, 0x38
    addi r29, r28, lbl_807968D0@l
    addi r22, r1, 0x28
    stfs f0, 0x60(r1)
    addis r26, r31, 0x2
    li r30, 0x0
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
lbl_fn_80586220_000006A8:
    addi r3, r1, 0x70
    addi r4, r25, 0x142
    addi r5, r16, 0x1
    crclr 6
    bl sprintf
    lwz r15, 0xa8(r31)
    addi r3, r1, 0x70
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r15
    addi r3, r1, 0x44
    bl fn_801F4E8C
    lfs f6, 0x44(r1)
    add r18, r31, r30
    lfs f5, 0x48(r1)
    addi r4, r25, 0x14f
    lfs f4, 0x4c(r1)
    addi r5, r1, 0x58
    lfs f3, 0x50(r1)
    lfs f0, 0x54(r1)
    stfs f6, 0x58(r1)
    stfs f5, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    lwz r3, 0xac(r18)
    bl fn_801F6E78
    lwz r3, 0x5b0c(r26)
    lwz r0, 0xf8(r31)
    add r3, r16, r3
    cmpw r3, r0
    bge lbl_fn_80586220_0000098C
    mulli r0, r3, 0x64
    add r21, r31, r0
    lwzu r3, 0xfc(r21)
    bl fn_80211480
    lwz r0, 0x54(r21)
    mr r15, r3
    cmpwi r0, 0x0
    beq lbl_fn_80586220_00000860
    lwz r24, 0x8(r3)
    stw r27, 0x38(r1)
    mr r3, r24
    stw r27, 0x3c(r1)
    stw r27, 0x40(r1)
    bl fn_80686A48
    mr r20, r3
    mr r3, r23
    mr r4, r20
    bl fn_800DBF68
    lbz r3, 0x14(r1)
    slwi r0, r20, 1
    stb r3, 0x10(r1)
    mr r3, r23
    mr r6, r24
    add r7, r24, r0
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lhz r0, 0x8(r21)
    cmpwi r0, 0x0
    beq lbl_fn_80586220_000007F4
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80586220_000007BC
    lbz r0, 0x38(r1)
    clrlwi r20, r0, 25
    b lbl_fn_80586220_000007C0
lbl_fn_80586220_000007BC:
    lwz r20, 0x3c(r1)
lbl_fn_80586220_000007C0:
    lbz r0, 0xc(r1)
    addi r3, r21, 0x8
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r20
    add r5, r21, r0
    addi r3, r1, 0x38
    addi r7, r5, 0x8
    addi r6, r21, 0x8
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_80586220_000007F4:
    lwz r0, 0x38(r1)
    addi r4, r25, 0x157
    lwz r3, 0xac(r18)
    srwi. r0, r0, 31
    bne lbl_fn_80586220_00000810
    mr r5, r19
    b lbl_fn_80586220_00000814
lbl_fn_80586220_00000810:
    lwz r5, 0x40(r1)
lbl_fn_80586220_00000814:
    bl fn_801F837C
    lwz r4, 0x0(r21)
    mr r3, r17
    bl fn_80444564
    mr r5, r3
    lwz r3, 0xac(r18)
    addi r4, r25, 0x160
    li r6, 0x0
    bl fn_801F8598
    lwz r3, lbl_8087F4F0
    mr r4, r15
    bl fn_80444BE8
    lwz r0, 0x38(r1)
    mr r20, r3
    srwi. r0, r0, 31
    beq lbl_fn_80586220_000008D4
    lwz r3, 0x40(r1)
    bl dtor_80084684
    b lbl_fn_80586220_000008D4
lbl_fn_80586220_00000860:
    lwz r3, 0x0(r21)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_80586220_000008A8
    lwz r3, 0xb8(r3)
    addi r4, r25, 0x157
    lwz r0, lbl_8087F1E4
    addi r5, r3, 0xeb
    lwz r3, 0xac(r18)
    slwi r5, r5, 3
    add r5, r0, r5
    lwz r5, 0x4(r5)
    cmpwi r5, 0x0
    beq lbl_fn_80586220_0000089C
    b lbl_fn_80586220_000008A0
lbl_fn_80586220_0000089C:
    la r5, lbl_808813D0
lbl_fn_80586220_000008A0:
    bl fn_801F837C
    b lbl_fn_80586220_000008B8
lbl_fn_80586220_000008A8:
    lwz r3, 0xac(r18)
    addi r4, r25, 0x157
    addi r5, r28, lbl_807968D0@l
    bl fn_801F837C
lbl_fn_80586220_000008B8:
    lwz r3, 0xac(r18)
    addi r4, r25, 0x160
    addi r5, r29, 0xe
    bl fn_801F837C
    lwz r3, lbl_8087F4F0
    bl fn_80444C48
    mr r20, r3
lbl_fn_80586220_000008D4:
    lwz r0, 0x60(r21)
    cmpwi r0, 0x0
    beq lbl_fn_80586220_000008FC
    lfs f1, lbl_808880FC
    addi r4, r25, 0x164
    lwz r3, 0xac(r18)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    b lbl_fn_80586220_00000914
lbl_fn_80586220_000008FC:
    lfs f1, lbl_80888100
    addi r4, r25, 0x164
    lwz r3, 0xac(r18)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
lbl_fn_80586220_00000914:
    lwz r3, 0xac(r18)
    addi r4, r25, 0x16c
    lfs f1, lbl_808880F0
    bl fn_801F6C80
    lwz r3, 0xac(r18)
    addi r4, r25, 0x176
    lfs f1, lbl_808880F4
    bl fn_801F6C80
    lwz r3, 0xac(r18)
    addi r4, r25, 0x180
    lwz r5, 0x4(r21)
    li r6, 0x0
    bl fn_801F8598
    lwz r4, lbl_8087F4F0
    mr r5, r20
    addi r3, r1, 0x28
    bl fn_80444C50
    addi r5, r1, 0x18
    psq_l f1, 0x0(r22), 0, 0
    psq_l f2, 0x8(r22), 0, 0
    add r15, r31, r30
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r25, 0x186
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0xac(r15)
    bl fn_801F7590
    lwz r3, 0xac(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_80586220_0000098C:
    addi r16, r16, 0x1
    addi r30, r30, 0x4
    cmpwi r16, 0xa
    blt lbl_fn_80586220_000006A8
    addi r11, r1, 0x100
    bl _restgpr_15
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80586624(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r4
    mr r27, r3
    mr r3, r28
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_80586624_00000A74
    lha r0, 0xbc(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80586624_000009F8
    cmpwi r0, 0x3
    beq lbl_fn_80586624_000009F8
    cmpwi r0, 0x6
    bne lbl_fn_80586624_00000A74
lbl_fn_80586624_000009F8:
    addis r4, r27, 0x2
    mr r3, r27
    lwz r7, 0x5b6c(r4)
    mr r4, r28
    li r5, 0x0
    li r6, 0x0
    lwz r0, 0x38(r7)
    li r30, 0x1
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r7)
    bl fn_805866F8
    lwz r3, lbl_8087F430
    lwz r3, 0x10d0(r3)
    bl fn_80217D9C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80586624_00000A74
    li r29, 0x1
lbl_fn_80586624_00000A40:
    add r3, r31, r29
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80586624_00000A68
    mr r6, r30
    mr r3, r27
    mr r4, r28
    mr r5, r29
    addi r30, r30, 0x1
    bl fn_805866F8
lbl_fn_80586624_00000A68:
    addi r29, r29, 0x1
    cmplwi r29, 0x7
    blt lbl_fn_80586624_00000A40
lbl_fn_80586624_00000A74:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805866F8(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x130
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    bl _savegpr_20
    lfs f0, lbl_808880F0
    lis r0, 0x4330
    lis r30, lbl_80761670@ha
    mr r23, r5
    mr r20, r3
    stw r0, 0xc8(r1)
    mr r21, r4
    mr r22, r6
    stw r0, 0xd0(r1)
    mr r3, r23
    addi r30, r30, lbl_80761670@l
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    bl fn_80219544
    bl fn_8020924C
    addis r5, r20, 0x2
    slwi r0, r22, 2
    add r4, r5, r0
    lwz r27, 0x5b6c(r5)
    lwz r26, 0x5b70(r4)
    lis r31, lbl_807616DC@ha
    lwz r6, lbl_8087F4F0
    mr r24, r3
    lwz r0, 0x38(r26)
    slwi r3, r23, 6
    addis r4, r6, 0x1
    addi r31, r31, lbl_807616DC@l
    add r3, r4, r3
    rlwinm r0, r0, 0, 30, 28
    subi r28, r3, 0x7d70
    stw r0, 0x38(r26)
    addi r3, r1, 0x88
    addi r4, r31, 0x142
    addi r5, r22, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x88
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r27
    addi r3, r1, 0x48
    bl fn_801F4E8C
    lfs f6, 0x48(r1)
    mr r3, r26
    lfs f5, 0x4c(r1)
    addi r4, r31, 0x14f
    lfs f4, 0x50(r1)
    addi r5, r1, 0x70
    lfs f3, 0x54(r1)
    lfs f0, 0x58(r1)
    stfs f6, 0x70(r1)
    stfs f5, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f0, 0x80(r1)
    bl fn_801F4728
    lwz r29, 0x8(r24)
    addi r3, r31, 0x18d
    addi r25, r26, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r29
    bl fn_801FEE08
    lwz r3, 0x2c(r24)
    cmpwi r3, 0x0
    ble lbl_fn_805866F8_00000C9C
    subi r0, r3, 0x1
    lfd f8, 0x30(r30)
    slwi r3, r0, 30
    lfs f5, lbl_80888108
    srwi r4, r0, 31
    srawi r0, r0, 2
    subf r3, r4, r3
    lfs f6, lbl_80888104
    addze r6, r0
    addi r29, r1, 0x38
    rotlwi r0, r3, 2
    addi r5, r1, 0x18
    add r3, r0, r4
    xoris r4, r3, 0x8000
    stw r4, 0xcc(r1)
    xoris r0, r6, 0x8000
    addi r3, r3, 0x1
    stw r0, 0xd4(r1)
    addi r0, r6, 0x1
    lfd f4, 0xc8(r1)
    xoris r6, r3, 0x8000
    lfd f0, 0xd0(r1)
    xoris r0, r0, 0x8000
    stw r6, 0xcc(r1)
    fsubs f7, f4, f8
    fsubs f3, f0, f8
    mr r3, r26
    stw r0, 0xd4(r1)
    addi r4, r31, 0x192
    fmuls f4, f5, f3
    lfd f0, 0xd0(r1)
    lfd f3, 0xc8(r1)
    fsubs f0, f0, f8
    stfs f4, 0x3c(r1)
    fsubs f3, f3, f8
    fmuls f4, f6, f7
    fmuls f0, f5, f0
    fmuls f3, f6, f3
    stfs f4, 0x38(r1)
    psq_l f1, 0x0(r29), 0, 0
    stfs f3, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_l f2, 0x8(r29), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    addi r5, r1, 0x8
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    mr r3, r26
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r31, 0x199
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
lbl_fn_805866F8_00000C9C:
    addi r3, r1, 0x28
    li r29, 0x0
    li r25, 0x0
    li r24, 0x0
    li r4, 0x0
    li r5, 0xc
    bl memset
    mr r3, r21
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805866F8_00000E40
    mr r3, r21
    bl fn_80206C50
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805866F8_00000D48
    lwz r5, 0x78(r3)
    mr r4, r23
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r5, r0, 5
    bl fn_80206D18
    cmpwi r3, 0x0
    beq lbl_fn_805866F8_00000D48
    lis r3, lbl_807616DC@ha
    addi r3, r3, lbl_807616DC@l
    addi r3, r3, 0x1a5
    bl fn_800DC6B4
    lfs f1, lbl_808880F0
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    lwz r3, 0x78(r31)
    subi r0, r3, 0x1
    cntlzw r0, r0
    rlwinm r0, r0, 30, 2, 28
    add r4, r28, r0
    lwz r4, 0x20(r4)
    bl fn_80206B14
    mr r29, r3
    mr r25, r31
    li r24, 0x1
    b lbl_fn_805866F8_00000D68
lbl_fn_805866F8_00000D48:
    lis r3, lbl_807616DC@ha
    addi r3, r3, lbl_807616DC@l
    addi r3, r3, 0x1a5
    bl fn_800DC6B4
    lfs f1, lbl_808880F4
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
lbl_fn_805866F8_00000D68:
    cmpwi r29, 0x0
    beq lbl_fn_805866F8_00000DD0
    cmpwi r25, 0x0
    beq lbl_fn_805866F8_00000DD0
    lfs f3, 0x0(r29)
    li r0, 0x0
    lfs f0, 0x0(r25)
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f3, 0xd8(r1)
    stfd f0, 0xe0(r1)
    lwz r4, 0xdc(r1)
    lwz r3, 0xe4(r1)
    subf r3, r4, r3
    stw r3, 0x28(r1)
    lfs f3, 0x4(r29)
    lfs f0, 0x4(r25)
    fctiwz f3, f3
    fctiwz f0, f0
    stw r0, 0x30(r1)
    stfd f3, 0xe8(r1)
    stfd f0, 0xf0(r1)
    lwz r3, 0xec(r1)
    lwz r0, 0xf4(r1)
    subf r0, r3, r0
    stw r0, 0x2c(r1)
lbl_fn_805866F8_00000DD0:
    lis r23, lbl_807616DC@ha
    addi r27, r27, 0x58
    addi r28, r30, 0x14
    addi r21, r30, 0x0
    addi r23, r23, lbl_807616DC@l
    li r29, 0x0
lbl_fn_805866F8_00000DE8:
    mr r5, r29
    addi r3, r1, 0x88
    addi r4, r23, 0x1af
    crclr 6
    bl sprintf
    lwz r0, 0x0(r28)
    li r3, 0x0
    slwi r0, r0, 2
    lwzx r4, r21, r0
    bl fn_80116FC0
    mr r25, r3
    addi r3, r1, 0x88
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r25
    bl fn_801FEE08
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_805866F8_00000DE8
    b lbl_fn_805866F8_00001044
lbl_fn_805866F8_00000E40:
    mr r3, r21
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_805866F8_00001024
    lis r3, lbl_807616DC@ha
    addi r3, r3, lbl_807616DC@l
    addi r3, r3, 0x1a5
    bl fn_800DC6B4
    lfs f1, lbl_808880F0
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    mr r3, r21
    bl fn_8020EFEC
    lfs f31, lbl_808880F0
    cmpwi r3, 0x0
    fmr f30, f31
    beq lbl_fn_805866F8_00000F44
    lwz r23, 0x78(r3)
    mr r25, r3
    li r24, 0x1
    slwi r0, r23, 3
    mr r3, r23
    lwzx r28, r28, r0
    mr r4, r28
    bl fn_8020ED84
    mr r29, r3
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_805866F8_00000F44
    cmpwi r28, 0x3e8
    blt lbl_fn_805866F8_00000F44
    mr r4, r28
    li r3, 0x0
    bl fn_8020ED84
    lis r4, 0x1062
    mr r31, r3
    addi r0, r4, 0x4dd3
    li r3, 0x0
    mulhw r0, r0, r28
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r28
    bl fn_8020ED84
    cmpwi r31, 0x0
    beq lbl_fn_805866F8_00000F20
    cmpwi r3, 0x0
    beq lbl_fn_805866F8_00000F20
    lfs f5, 0x8(r31)
    lfs f4, 0x8(r3)
    lfs f3, 0xc(r31)
    lfs f0, 0xc(r3)
    fsubs f31, f5, f4
    fsubs f30, f3, f0
lbl_fn_805866F8_00000F20:
    cmpwi r23, 0x0
    bne lbl_fn_805866F8_00000F38
    lfs f0, lbl_8088810C
    fmuls f31, f31, f0
    fmuls f30, f30, f0
    b lbl_fn_805866F8_00000F44
lbl_fn_805866F8_00000F38:
    lfs f0, lbl_80888108
    fmuls f31, f31, f0
    fmuls f30, f30, f0
lbl_fn_805866F8_00000F44:
    cmpwi r29, 0x0
    beq lbl_fn_805866F8_00000FB4
    cmpwi r25, 0x0
    beq lbl_fn_805866F8_00000FB4
    lfs f3, 0x8(r29)
    li r0, 0x0
    lfs f0, 0x8(r25)
    fadds f3, f3, f31
    fctiwz f0, f0
    fctiwz f3, f3
    stfd f0, 0xe8(r1)
    stfd f3, 0xf0(r1)
    lwz r3, 0xec(r1)
    lwz r4, 0xf4(r1)
    subf r3, r4, r3
    stw r3, 0x28(r1)
    lfs f3, 0xc(r29)
    lfs f0, 0xc(r25)
    fadds f3, f3, f30
    fctiwz f0, f0
    stw r0, 0x30(r1)
    fctiwz f3, f3
    stfd f0, 0xd8(r1)
    stfd f3, 0xe0(r1)
    lwz r0, 0xdc(r1)
    lwz r3, 0xe4(r1)
    subf r0, r3, r0
    stw r0, 0x2c(r1)
lbl_fn_805866F8_00000FB4:
    lis r23, lbl_807616DC@ha
    addi r27, r27, 0x58
    addi r28, r30, 0x20
    addi r21, r30, 0x0
    addi r23, r23, lbl_807616DC@l
    li r29, 0x0
lbl_fn_805866F8_00000FCC:
    mr r5, r29
    addi r3, r1, 0x88
    addi r4, r23, 0x1af
    crclr 6
    bl sprintf
    lwz r0, 0x0(r28)
    li r3, 0x0
    slwi r0, r0, 2
    lwzx r4, r21, r0
    bl fn_80116FC0
    mr r25, r3
    addi r3, r1, 0x88
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r25
    bl fn_801FEE08
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_805866F8_00000FCC
    b lbl_fn_805866F8_00001044
lbl_fn_805866F8_00001024:
    lis r3, lbl_807616DC@ha
    addi r3, r3, lbl_807616DC@l
    addi r3, r3, 0x1a5
    bl fn_800DC6B4
    lfs f1, lbl_808880F0
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
lbl_fn_805866F8_00001044:
    cmpwi r24, 0x0
    beq lbl_fn_805866F8_00001114
    mulli r0, r22, 0xc
    lis r21, lbl_807616DC@ha
    addi r22, r1, 0x28
    addi r21, r21, lbl_807616DC@l
    add r20, r20, r0
    li r23, 0x0
lbl_fn_805866F8_00001064:
    lwz r3, 0x0(r22)
    cmpwi r3, 0x0
    ble lbl_fn_805866F8_0000107C
    addis r4, r20, 0x2
    lwz r24, 0x5b8c(r4)
    b lbl_fn_805866F8_00001094
lbl_fn_805866F8_0000107C:
    bge lbl_fn_805866F8_0000108C
    addis r4, r20, 0x2
    lwz r24, 0x5be0(r4)
    b lbl_fn_805866F8_00001094
lbl_fn_805866F8_0000108C:
    addis r4, r20, 0x2
    lwz r24, 0x5c34(r4)
lbl_fn_805866F8_00001094:
    cmpwi r24, 0x0
    beq lbl_fn_805866F8_00001100
    bl fn_8067CE80
    mr r25, r3
    mr r5, r23
    addi r3, r1, 0x88
    addi r4, r21, 0x1b9
    crclr 6
    bl sprintf
    addi r3, r1, 0x88
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x5c
    bl fn_801F4E8C
    lwz r0, 0x38(r24)
    mr r3, r24
    addi r4, r21, 0x14f
    addi r5, r1, 0x5c
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r24)
    bl fn_801F6E78
    mr r3, r24
    mr r5, r25
    addi r4, r21, 0x1c8
    li r6, 0x0
    bl fn_801F8598
lbl_fn_805866F8_00001100:
    addi r23, r23, 0x1
    addi r20, r20, 0x4
    cmpwi r23, 0x3
    addi r22, r22, 0x4
    blt lbl_fn_805866F8_00001064
lbl_fn_805866F8_00001114:
    addi r11, r1, 0x130
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    bl _restgpr_20
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80586DAC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80586DB4(void)
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
    lwz r0, lbl_8087F9D0
    cmpwi r0, 0x0
    bne lbl_fn_80586DB4_000011B0
    lis r5, lbl_80761914@ha
    lis r3, 0x2
    addi r5, r5, lbl_80761914@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x5bc8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80586DB4_000011AC
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80586E40
lbl_fn_80586DB4_000011AC:
    stw r3, lbl_8087F9D0
lbl_fn_80586DB4_000011B0:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F9D0
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80586E40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r7, r6
    stw r0, 0x24(r1)
    mr r0, r5
    li r5, 0x2
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r6, r0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl fn_8057F284
    lis r3, lbl_807968E8@ha
    lis r30, lbl_80761914@ha
    addi r3, r3, lbl_807968E8@l
    stw r3, 0x0(r31)
    addi r30, r30, lbl_80761914@l
    addis r6, r31, 0x2
    li r0, 0x0
    stw r0, 0x5bac(r6)
    mr r3, r31
    addi r4, r30, 0x1
    stw r0, 0x5bb0(r6)
    li r5, 0x0
    stw r0, 0x5bb4(r6)
    stw r0, 0x5bb8(r6)
    stw r0, 0x5bbc(r6)
    stw r0, 0x5bc0(r6)
    stw r0, 0x5bc4(r6)
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b6c(r5)
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x27
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b70(r5)
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x4c
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b68(r5)
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x68
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b74(r5)
    bl fn_800D246C
    addi r30, r30, 0x92
    li r28, 0x0
    li r29, 0x0
lbl_fn_80586E40_000012C8:
    mr r3, r31
    mr r4, r30
    bl fn_801F64D0
    addis r5, r29, 0x2
    li r4, 0x1
    addi r0, r5, 0x5b78
    stwx r3, r31, r0
    bl fn_800D246C
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0xa
    blt lbl_fn_80586E40_000012C8
    lis r3, lbl_80761914@ha
    li r28, 0x0
    addi r3, r3, lbl_80761914@l
    li r29, 0x0
    addi r30, r3, 0x92
lbl_fn_80586E40_0000130C:
    mr r3, r31
    mr r4, r30
    bl fn_801F64D0
    addis r5, r29, 0x2
    li r4, 0x1
    addi r0, r5, 0x5ba0
    stwx r3, r31, r0
    bl fn_800D246C
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_80586E40_0000130C
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80586FD0(void)
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
    beq lbl_fn_80586FD0_000013E4
    lwz r0, lbl_8087F9D0
    cmpwi r0, 0x0
    beq lbl_fn_80586FD0_00001398
    li r0, 0x0
    stw r0, lbl_8087F9D0
lbl_fn_80586FD0_00001398:
    addis r4, r3, 0x2
    addic. r4, r4, 0x5bbc
    beq lbl_fn_80586FD0_000013C8
    beq lbl_fn_80586FD0_000013C8
    beq lbl_fn_80586FD0_000013C8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80586FD0_000013C8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80586FD0_000013C8:
    mr r3, r30
    li r4, 0x0
    bl fn_8057F7AC
    cmpwi r31, 0x0
    ble lbl_fn_80586FD0_000013E4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80586FD0_000013E4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80587070(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80587070_000015BC
    mr r3, r31
    bl fn_8057F884
    cmpwi r3, 0x0
    bne lbl_fn_80587070_000015BC
    mr r3, r31
    bl fn_8057F8FC
    addi r3, r31, 0x58
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x58
    bl fn_80470580
    lwz r12, 0x0(r31)
    mr r4, r3
    mr r3, r31
    mr r5, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addis r3, r31, 0x2
    lfs f1, lbl_80888110
    lwz r3, 0x5b6c(r3)
    li r4, 0x1
    lfs f2, lbl_80888114
    li r5, 0x0
    bl fn_804A39EC
    addis r5, r31, 0x2
    li r4, 0x0
    lwz r3, 0x5b6c(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b70(r5)
    bl fn_800D246C
    addis r5, r31, 0x2
    li r4, 0x0
    lwz r3, 0x5b70(r5)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5b70(r5)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b68(r5)
    bl fn_800D246C
    addis r6, r31, 0x2
    lfs f1, lbl_80888110
    lwz r3, 0x5b68(r6)
    li r4, 0x1
    lfs f0, lbl_80888118
    fmr f2, f1
    lwz r0, 0xfc(r3)
    li r5, 0x0
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5b68(r6)
    stfs f0, 0x104(r3)
    lwz r3, 0x5b74(r6)
    bl fn_804A39EC
    mr r29, r31
    li r30, 0x0
lbl_fn_80587070_00001520:
    addis r3, r29, 0x2
    lfs f1, lbl_80888110
    lwz r3, 0x5b78(r3)
    li r4, 0x1
    lfs f2, lbl_80888114
    li r5, 0x0
    bl fn_804A3A68
    addis r3, r29, 0x2
    addi r30, r30, 0x1
    lwz r3, 0x5b78(r3)
    cmpwi r30, 0xa
    addi r29, r29, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_80587070_00001520
    mr r29, r31
    li r28, 0x0
    li r30, 0x0
lbl_fn_80587070_0000156C:
    addis r3, r29, 0x2
    li r4, 0x0
    lwz r3, 0x5ba0(r3)
    bl fn_800D246C
    addis r4, r29, 0x2
    addi r28, r28, 0x1
    lwz r3, 0x5ba0(r4)
    cmpwi r28, 0x3
    addi r29, r29, 0x4
    stb r30, 0x4d(r3)
    lwz r3, 0x5ba0(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_80587070_0000156C
    addis r3, r31, 0x2
    li r0, 0x1
    stw r0, 0x5bac(r3)
    li r3, 0x1
    b lbl_fn_80587070_000015C0
lbl_fn_80587070_000015BC:
    li r3, 0x0
lbl_fn_80587070_000015C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80587250(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0xe4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80587250_00001638
    cmpwi r0, 0x1
    beq lbl_fn_80587250_0000164C
    cmpwi r0, 0x2
    beq lbl_fn_80587250_00001660
    cmpwi r0, 0x3
    beq lbl_fn_80587250_00001674
    cmpwi r0, 0x4
    beq lbl_fn_80587250_00001688
    cmpwi r0, 0x7
    beq lbl_fn_80587250_00001690
    cmpwi r0, 0x8
    beq lbl_fn_80587250_00001698
    b lbl_fn_80587250_000016FC
lbl_fn_80587250_00001638:
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_80587250_000016FC
lbl_fn_80587250_0000164C:
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80587250_000016FC
lbl_fn_80587250_00001660:
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_fn_80587250_000016FC
lbl_fn_80587250_00001674:
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_80587250_000016FC
lbl_fn_80587250_00001688:
    bl fn_80587D14
    b lbl_fn_80587250_000016FC
lbl_fn_80587250_00001690:
    bl fn_80587E40
    b lbl_fn_80587250_000016FC
lbl_fn_80587250_00001698:
    lwz r31, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_80587250_000016CC
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80587250_000016FC
lbl_fn_80587250_000016CC:
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80587250_000016FC:
    lwz r0, 0xe4(r30)
    cmpwi r0, 0x8
    bne lbl_fn_80587250_0000171C
    addis r3, r30, 0x2
    lfs f0, lbl_80888114
    lwz r3, 0x5b68(r3)
    stfs f0, 0x104(r3)
    b lbl_fn_80587250_0000172C
lbl_fn_80587250_0000171C:
    addis r3, r30, 0x2
    lfs f0, lbl_80888118
    lwz r3, 0x5b68(r3)
    stfs f0, 0x104(r3)
lbl_fn_80587250_0000172C:
    mr r3, r30
    bl fn_80580268
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805873BC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    bl fn_80580DE4
    addis r4, r31, 0x2
    lwz r3, 0x5b6c(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5b70(r4)
    bl fn_80580D84
    addis r3, r31, 0x2
    mr r30, r31
    lwz r3, 0x5b74(r3)
    li r29, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_805873BC_000017A4:
    addis r3, r30, 0x2
    lwz r3, 0x5b78(r3)
    bl fn_80580DB4
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0xa
    blt lbl_fn_805873BC_000017A4
    mr r30, r31
    li r29, 0x0
lbl_fn_805873BC_000017C8:
    addis r3, r30, 0x2
    lwz r3, 0x5ba0(r3)
    bl fn_80580DB4
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_805873BC_000017C8
    lwz r0, 0xe4(r31)
    cmpwi r0, 0x4
    beq lbl_fn_805873BC_0000180C
    cmpwi r0, 0x7
    beq lbl_fn_805873BC_00001858
    cmpwi r0, 0x8
    beq lbl_fn_805873BC_00001914
    cmpwi r0, 0x2
    beq lbl_fn_805873BC_00001948
    b lbl_fn_805873BC_0000199C
lbl_fn_805873BC_0000180C:
    addis r6, r31, 0x2
    lis r4, lbl_80761914@ha
    lwz r5, 0x5b6c(r6)
    addi r4, r4, lbl_80761914@l
    addi r3, r1, 0x60
    lwz r0, 0x38(r5)
    addi r4, r4, 0xb4
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x5bb0(r6)
    crclr 6
    bl sprintf
    addis r4, r31, 0x2
    lwz r3, lbl_8087F580
    lwz r4, 0x5b6c(r4)
    addi r5, r1, 0x60
    li r6, 0x0
    bl fn_804A5824
    b lbl_fn_805873BC_0000199C
lbl_fn_805873BC_00001858:
    mr r3, r31
    bl fn_805880F4
    addis r3, r31, 0x2
    lwz r4, 0x5bb4(r3)
    lwz r0, 0x5bc0(r3)
    cmpw r4, r0
    bge lbl_fn_805873BC_00001888
    mulli r0, r4, 0x24
    lwz r4, 0x5bbc(r3)
    mr r3, r31
    add r4, r4, r0
    bl fn_805883DC
lbl_fn_805873BC_00001888:
    addis r3, r31, 0x2
    lwz r0, 0x5bc0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805873BC_0000199C
    lwz r4, 0x5bb8(r3)
    lis r6, lbl_80761914@ha
    lwz r0, 0x5bb4(r3)
    addi r6, r6, lbl_80761914@l
    addi r3, r1, 0x20
    subf r5, r4, r0
    addi r4, r6, 0xcc
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addis r4, r31, 0x2
    addi r3, r1, 0x20
    lwz r30, 0x5b74(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    addis r8, r31, 0x2
    lwz r3, lbl_8087F580
    lwz r4, 0x5bb8(r8)
    addi r6, r1, 0x8
    lwz r0, 0x5bb4(r8)
    li r5, 0x0
    li r7, 0x0
    subf r0, r4, r0
    slwi r0, r0, 2
    add r4, r8, r0
    lwz r4, 0x5b78(r4)
    bl fn_804A55FC
    b lbl_fn_805873BC_0000199C
lbl_fn_805873BC_00001914:
    mr r3, r31
    bl fn_805880F4
    addis r3, r31, 0x2
    lwz r4, 0x5bb4(r3)
    lwz r0, 0x5bc0(r3)
    cmpw r4, r0
    bge lbl_fn_805873BC_0000199C
    mulli r0, r4, 0x24
    lwz r4, 0x5bbc(r3)
    mr r3, r31
    add r4, r4, r0
    bl fn_805883DC
    b lbl_fn_805873BC_0000199C
lbl_fn_805873BC_00001948:
    lwz r0, 0xe8(r31)
    cmpwi r0, 0x4
    bne lbl_fn_805873BC_0000196C
    addis r3, r31, 0x2
    lwz r3, 0x5b6c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_805873BC_0000199C
lbl_fn_805873BC_0000196C:
    mr r3, r31
    bl fn_805880F4
    addis r3, r31, 0x2
    lwz r4, 0x5bb4(r3)
    lwz r0, 0x5bc0(r3)
    cmpw r4, r0
    bge lbl_fn_805873BC_0000199C
    mulli r0, r4, 0x24
    lwz r4, 0x5bbc(r3)
    mr r3, r31
    add r4, r4, r0
    bl fn_805883DC
lbl_fn_805873BC_0000199C:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80587628(void)
{
    nofralloc
    stwu r1, -0x6c0(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    addis r7, r3, 0x2
    stw r0, 0x6c4(r1)
    addi r6, r6, lbl_807772D0@l
    stmw r18, 0x688(r1)
    mr r20, r3
    mr r19, r4
    mr r18, r5
    li r22, 0x0
    addi r3, r1, 0x5c
    li r4, 0x0
    li r5, 0x400
    lwz r0, 0x5bc0(r7)
    subf r0, r0, r0
    stw r0, 0x5bc0(r7)
    stw r6, 0x4c(r1)
    stw r22, 0x50(r1)
    stw r22, 0x54(r1)
    stw r22, 0x58(r1)
    stw r22, 0x67c(r1)
    bl memset
    addi r3, r1, 0x65c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x4c
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x4c(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r12, 0x4c(r1)
    mr r4, r19
    mr r5, r18
    addi r3, r1, 0x4c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_80761914@ha
    lis r3, __files@ha
    addi r21, r1, 0x14
    lis r29, 0xcccd
    addi r23, r4, lbl_80761914@l
    addi r26, r3, __files@l
    li r24, 0x1
    lis r25, 0x71c
    lis r28, 0x25f
    lis r30, 0x4be
    lis r31, lbl_80796950@ha
    li r19, 0x24
lbl_fn_80587628_00001A88:
    addi r3, r1, 0x4c
    bl fn_8005B3CC
    mr r18, r3
    addi r4, r23, 0xda
    li r5, 0x1
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_80587628_00001EE0
    mr r3, r18
    addi r4, r23, 0xdc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80587628_00001AD0
    addi r3, r1, 0x4c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x60(r20)
    b lbl_fn_80587628_00001EE0
lbl_fn_80587628_00001AD0:
    mr r3, r18
    addi r4, r23, 0xe6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80587628_00001AF8
    addi r3, r1, 0x4c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x64(r20)
    b lbl_fn_80587628_00001EE0
lbl_fn_80587628_00001AF8:
    mr r3, r18
    bl fn_800DC12C
    stw r3, 0x28(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_80587628_00001EE0
    addi r18, r1, 0x28
    li r27, 0x0
lbl_fn_80587628_00001B18:
    addi r3, r1, 0x4c
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x4(r18)
    addi r3, r1, 0x4c
    bl fn_8005B3CC
    bl fn_800DC12C
    addi r27, r27, 0x1
    stw r3, 0x10(r18)
    cmpwi r27, 0x3
    addi r18, r18, 0x4
    blt lbl_fn_80587628_00001B18
    lwz r3, lbl_8087F4F0
    lwz r4, 0x28(r1)
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_80587628_00001B64
    stw r24, 0x44(r1)
    b lbl_fn_80587628_00001B68
lbl_fn_80587628_00001B64:
    stw r22, 0x44(r1)
lbl_fn_80587628_00001B68:
    lwz r0, 0x44(r1)
    stw r22, 0x48(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80587628_00001B7C
    stw r24, 0x48(r1)
lbl_fn_80587628_00001B7C:
    addi r18, r1, 0x28
    li r27, 0x0
lbl_fn_80587628_00001B84:
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r18)
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_80587628_00001BA0
    stw r24, 0x48(r1)
    b lbl_fn_80587628_00001BB0
lbl_fn_80587628_00001BA0:
    addi r27, r27, 0x1
    addi r18, r18, 0x4
    cmpwi r27, 0x3
    blt lbl_fn_80587628_00001B84
lbl_fn_80587628_00001BB0:
    addis r5, r20, 0x2
    lwz r4, 0x5bc0(r5)
    lwz r3, 0x5bc4(r5)
    cmplw r4, r3
    bge lbl_fn_80587628_00001C28
    addi r3, r4, 0x1
    stw r3, 0x5bc0(r5)
    subi r0, r3, 0x1
    lwz r6, 0x5bbc(r5)
    mulli r3, r0, 0x24
    lwz r0, 0x28(r1)
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    add r6, r6, r3
    lwz r3, 0x34(r1)
    stw r0, 0x0(r6)
    lwz r0, 0x38(r1)
    stw r5, 0x4(r6)
    lwz r5, 0x3c(r1)
    stw r4, 0x8(r6)
    lwz r4, 0x40(r1)
    stw r3, 0xc(r6)
    lwz r3, 0x44(r1)
    stw r0, 0x10(r6)
    lwz r0, 0x48(r1)
    stw r5, 0x14(r6)
    stw r4, 0x18(r6)
    stw r3, 0x1c(r6)
    stw r0, 0x20(r6)
    b lbl_fn_80587628_00001EE0
lbl_fn_80587628_00001C28:
    addi r0, r25, 0x71c7
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_80587628_00001C4C
    addi r4, r23, 0xef
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80587628_00001C4C:
    addis r4, r20, 0x2
    stw r22, 0x14(r1)
    addi r3, r4, 0x5bc4
    addi r0, r25, 0x71c7
    stw r22, 0x18(r1)
    stw r22, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r22, 0x24(r1)
    lwz r3, 0x5bc0(r4)
    lwz r27, 0x5bc4(r4)
    addi r3, r3, 0x1
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80587628_00001CA0
    addi r4, r23, 0xef
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80587628_00001CA0:
    subi r0, r28, 0x2f69
    cmplw r27, r0
    bge lbl_fn_80587628_00001CE8
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80587628_00001CDC
    addi r3, r1, 0x10
lbl_fn_80587628_00001CDC:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_80587628_00001D24
lbl_fn_80587628_00001CE8:
    subi r0, r30, 0x5ed2
    cmplw r27, r0
    bge lbl_fn_80587628_00001D20
    addi r3, r27, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80587628_00001D14
    addi r3, r1, 0x10
lbl_fn_80587628_00001D14:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_80587628_00001D24
lbl_fn_80587628_00001D20:
    addi r18, r25, 0x71c7
lbl_fn_80587628_00001D24:
    addi r0, r25, 0x71c7
    cmplw r18, r0
    ble lbl_fn_80587628_00001D44
    addi r4, r23, 0xef
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80587628_00001D44:
    mulli r3, r18, 0x24
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80587628_00001D6C
    addi r3, r26, 0xa0
    addi r4, r31, lbl_80796950@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80587628_00001D6C:
    lwz r0, 0x18(r1)
    addis r3, r20, 0x2
    stw r27, 0x14(r1)
    mulli r9, r0, 0x24
    lwz r5, 0x28(r1)
    stw r18, 0x1c(r1)
    lwz r4, 0x2c(r1)
    lwz r0, 0x5bc0(r3)
    stw r0, 0x24(r1)
    mulli r6, r0, 0x24
    lwz r0, 0x30(r1)
    lwz r8, 0x34(r1)
    lwz r7, 0x38(r1)
    add r6, r27, r6
    add r9, r9, r6
    lwz r6, 0x3c(r1)
    stw r5, 0x0(r9)
    lwz r5, 0x40(r1)
    stw r4, 0x4(r9)
    lwz r4, 0x44(r1)
    stw r0, 0x8(r9)
    lwz r0, 0x48(r1)
    stw r8, 0xc(r9)
    stw r7, 0x10(r9)
    stw r6, 0x14(r9)
    stw r5, 0x18(r9)
    stw r4, 0x1c(r9)
    stw r0, 0x20(r9)
    lwz r4, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r4, r4, 0x1
    stw r4, 0x18(r1)
    mulli r0, r0, 0x24
    lwz r4, 0x14(r1)
    lwz r5, 0x5bc0(r3)
    lwz r6, 0x5bbc(r3)
    mulli r5, r5, 0x24
    add r3, r4, r0
    add r4, r6, r5
    addi r0, r4, 0x23
    subf r0, r6, r0
    divwu r0, r0, r19
    mtctr r0
    cmplw r4, r6
    ble lbl_fn_80587628_00001E90
lbl_fn_80587628_00001E20:
    subic. r3, r3, 0x24
    subi r4, r4, 0x24
    beq lbl_fn_80587628_00001E74
    lwz r0, 0x4(r4)
    lwz r5, 0x0(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0xc(r4)
    lwz r5, 0x8(r4)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, 0x14(r4)
    lwz r5, 0x10(r4)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, 0x1c(r4)
    lwz r5, 0x18(r4)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, 0x20(r4)
    stw r0, 0x20(r3)
lbl_fn_80587628_00001E74:
    lwz r6, 0x24(r1)
    lwz r5, 0x18(r1)
    subi r0, r6, 0x1
    stw r0, 0x24(r1)
    addi r0, r5, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_80587628_00001E20
lbl_fn_80587628_00001E90:
    addis r3, r20, 0x2
    cmpwi r21, 0x0
    stw r22, 0x5bc0(r3)
    lwz r4, 0x5bc4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x5bc4(r3)
    stw r4, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r4, 0x5bbc(r3)
    stw r0, 0x5bbc(r3)
    stw r4, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x5bc0(r3)
    stw r22, 0x18(r1)
    beq lbl_fn_80587628_00001EE0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80587628_00001EE0
    stw r22, 0x18(r1)
    bl dtor_80084684
lbl_fn_80587628_00001EE0:
    addi r3, r1, 0x4c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80587628_00001A88
    lmw r18, 0x688(r1)
    lwz r0, 0x6c4(r1)
    mtlr r0
    addi r1, r1, 0x6c0
    blr
}
