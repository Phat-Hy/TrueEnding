#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000D760(void);
extern void fn_8000F1EC(void);
extern void fn_8001282C(void);
extern void fn_80014798(void);
extern void fn_80041C0C(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800CB3A0(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_80112784(void);
extern void fn_80117E34(void);
extern void fn_8016E4C4(void);
extern void fn_8016E71C(void);
extern void fn_8020F130(void);
extern void fn_8020F71C(void);
extern void fn_80228FD8(void);
extern void fn_80229240(void);
extern void fn_803663A4(void);
extern void fn_80373148(void);
extern void fn_803B57EC(void);
extern void fn_803CCC84(void);
extern void fn_80473E74(void);
extern void fn_8047F8B0(void);
extern void fn_8047F994(void);
extern void fn_8048169C(void);
extern void fn_804817D4(void);
extern void fn_80482ED8(void);
extern void fn_80483714(void);
extern void fn_80484FBC(void);
extern void fn_8048E904(void);
extern void fn_8048F184(void);
extern void fn_804A0580(void);
extern void fn_80537784(void);
extern void fn_8053D0F8(void);
extern void fn_8053EF74(void);
extern void fn_805406C0(void);
extern void fn_805501E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_8075E148[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80793AD8[];
extern u8 lbl_807943E0[];

/* Small data declarations */
extern u32 lbl_8087E4C8;
extern u32 lbl_8087E4CC;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F128;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80887CA0;
extern u32 lbl_80887CA4;
extern u32 lbl_80887CA8;
extern u32 lbl_80887CAC;

/* Function declarations */
void fn_8053D3E4(void);
void fn_8053D3FC(void);
void fn_8053D410(void);
void fn_8053D428(void);
void fn_8053D440(void);
void fn_8053D458(void);
void fn_8053D470(void);
void fn_8053D488(void);
void fn_8053D4C0(void);
void fn_8053D4D4(void);
void fn_8053D630(void);
void fn_8053D648(void);
void fn_8053D714(void);
void fn_8053D72C(void);
void fn_8053D7F8(void);
void fn_8053D810(void);
void fn_8053D8DC(void);
void fn_8053D8F4(void);
void fn_8053D9E0(void);
void fn_8053D9F8(void);
void fn_8053DAC4(void);
void fn_8053DADC(void);
void fn_8053DBA8(void);
void fn_8053DBC0(void);
void fn_8053DC8C(void);
void fn_8053DCA4(void);
void fn_8053DD70(void);
void fn_8053DD88(void);
void fn_8053DE54(void);
void fn_8053DE6C(void);
void fn_8053E03C(void);
void fn_8053E054(void);
void fn_8053E3A0(void);
void fn_8053E3B4(void);
void fn_8053E4B0(void);
void fn_8053E510(void);
void fn_8053E520(void);
void fn_8053E58C(void);
void fn_8053E65C(void);
void fn_8053E6E4(void);
void fn_8053E870(void);
void fn_8053E8C4(void);
void fn_8053E8CC(void);
void fn_8053E8D4(void);
void fn_8053ED50(void);

asm void fn_8053D3E4(void)
{
    nofralloc
    lis r4, lbl_80793AD8@ha
    li r0, 0x0
    addi r4, r4, lbl_80793AD8@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_8053D3FC(void)
{
    nofralloc
    li r0, 0x0
    sth r0, 0x0(r3)
    stb r0, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

asm void fn_8053D410(void)
{
    nofralloc
    neg r5, r4
    lwz r0, 0x98(r3)
    or r4, r5, r4
    rlwimi r0, r4, 29, 3, 3
    stw r0, 0x98(r3)
    blr
}

asm void fn_8053D428(void)
{
    nofralloc
    neg r5, r4
    lwz r0, 0x98(r3)
    or r4, r5, r4
    rlwimi r0, r4, 28, 4, 4
    stw r0, 0x98(r3)
    blr
}

asm void fn_8053D440(void)
{
    nofralloc
    neg r5, r4
    lwz r0, 0x98(r3)
    or r4, r5, r4
    rlwimi r0, r4, 25, 7, 7
    stw r0, 0x98(r3)
    blr
}

asm void fn_8053D458(void)
{
    nofralloc
    neg r5, r4
    lwz r0, 0x98(r3)
    or r4, r5, r4
    rlwimi r0, r4, 24, 8, 8
    stw r0, 0x98(r3)
    blr
}

asm void fn_8053D470(void)
{
    nofralloc
    neg r5, r4
    lwz r0, 0x98(r3)
    or r4, r5, r4
    rlwimi r0, r4, 23, 9, 9
    stw r0, 0x98(r3)
    blr
}

asm void fn_8053D488(void)
{
    nofralloc
    lfs f1, lbl_80887CA0
    li r4, 0x0
    lfs f0, lbl_80887CA4
    li r0, -0x1
    stw r4, 0x0(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0xc(r3)
    stw r4, 0x14(r3)
    stw r4, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r4, 0x20(r3)
    blr
}

asm void fn_8053D4C0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8053D4D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi cr1, r3, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    mr r26, r4
    beq cr1, lbl_fn_8053D4D4_00000234
    beq cr1, lbl_fn_8053D4D4_00000224
    beq cr1, lbl_fn_8053D4D4_00000210
    lwz r4, 0x0(r25)
    cmpwi cr1, r4, 0x0
    beq cr1, lbl_fn_8053D4D4_000001FC
    lwz r30, 0x4(r25)
    li r31, -0x1
    slwi r3, r30, 3
    subf r0, r30, r30
    stw r0, 0x4(r25)
    add r27, r4, r3
    b lbl_fn_8053D4D4_000001EC
lbl_fn_8053D4D4_00000140:
    subic. r27, r27, 0x8
    beq lbl_fn_8053D4D4_000001E8
    addic. r28, r27, 0x4
    beq lbl_fn_8053D4D4_000001D8
    lwz r29, 0x0(r28)
    cmpwi cr1, r29, 0x0
    beq cr1, lbl_fn_8053D4D4_000001C8
    sync
lbl_fn_8053D4D4_00000160:
    lwarx r3, r0, r29
    subi r3, r3, 0x1
    stwcx. r3, r0, r29
    bne+ lbl_fn_8053D4D4_00000160
    isync
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8053D4D4_000001C8
    lwz r12, 0x8(r29)
    mr r3, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r29
    addi r0, r29, 0x4
    sync
lbl_fn_8053D4D4_0000019C:
    lwarx r4, r0, r0
    subi r4, r4, 0x1
    stwcx. r4, r0, r0
    bne+ lbl_fn_8053D4D4_0000019C
    isync
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_fn_8053D4D4_000001C8
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8053D4D4_000001C8:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053D4D4_000001D8
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053D4D4_000001D8:
    cmpwi cr1, r31, 0x0
    ble cr1, lbl_fn_8053D4D4_000001E8
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053D4D4_000001E8:
    subi r30, r30, 0x1
lbl_fn_8053D4D4_000001EC:
    cmpwi cr1, r30, 0x0
    bne cr1, lbl_fn_8053D4D4_00000140
    lwz r3, 0x0(r25)
    bl dtor_80084684
lbl_fn_8053D4D4_000001FC:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053D4D4_00000210
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053D4D4_00000210:
    li r0, 0x0
    cmpwi cr1, r0, 0x0
    ble cr1, lbl_fn_8053D4D4_00000224
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053D4D4_00000224:
    cmpwi cr1, r26, 0x0
    ble cr1, lbl_fn_8053D4D4_00000234
    mr r3, r25
    bl dtor_80084684
lbl_fn_8053D4D4_00000234:
    mr r3, r25
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8053D630(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053D648(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8053D648_0000030C
    beq lbl_fn_8053D648_000002FC
    beq lbl_fn_8053D648_000002FC
    beq lbl_fn_8053D648_000002FC
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053D648_000002FC
    lwz r30, 0x4(r3)
    mulli r4, r30, 0x1c
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053D648_000002EC
lbl_fn_8053D648_000002C0:
    subic. r31, r31, 0x1c
    beq lbl_fn_8053D648_000002E8
    beq lbl_fn_8053D648_000002E8
    addic. r0, r31, 0x8
    beq lbl_fn_8053D648_000002E8
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053D648_000002E8
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053D648_000002E8:
    subi r30, r30, 0x1
lbl_fn_8053D648_000002EC:
    cmpwi r30, 0x0
    bne lbl_fn_8053D648_000002C0
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053D648_000002FC:
    cmpwi r29, 0x0
    ble lbl_fn_8053D648_0000030C
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053D648_0000030C:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053D714(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053D72C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8053D72C_000003F0
    beq lbl_fn_8053D72C_000003E0
    beq lbl_fn_8053D72C_000003E0
    beq lbl_fn_8053D72C_000003E0
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053D72C_000003E0
    lwz r30, 0x4(r3)
    slwi r4, r30, 5
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053D72C_000003D0
lbl_fn_8053D72C_000003A4:
    subic. r31, r31, 0x20
    beq lbl_fn_8053D72C_000003CC
    beq lbl_fn_8053D72C_000003CC
    addic. r0, r31, 0x8
    beq lbl_fn_8053D72C_000003CC
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053D72C_000003CC
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053D72C_000003CC:
    subi r30, r30, 0x1
lbl_fn_8053D72C_000003D0:
    cmpwi r30, 0x0
    bne lbl_fn_8053D72C_000003A4
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053D72C_000003E0:
    cmpwi r29, 0x0
    ble lbl_fn_8053D72C_000003F0
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053D72C_000003F0:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053D7F8(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053D810(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8053D810_000004D4
    beq lbl_fn_8053D810_000004C4
    beq lbl_fn_8053D810_000004C4
    beq lbl_fn_8053D810_000004C4
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053D810_000004C4
    lwz r30, 0x4(r3)
    slwi r4, r30, 5
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053D810_000004B4
lbl_fn_8053D810_00000488:
    subic. r31, r31, 0x20
    beq lbl_fn_8053D810_000004B0
    beq lbl_fn_8053D810_000004B0
    addic. r0, r31, 0x8
    beq lbl_fn_8053D810_000004B0
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053D810_000004B0
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053D810_000004B0:
    subi r30, r30, 0x1
lbl_fn_8053D810_000004B4:
    cmpwi r30, 0x0
    bne lbl_fn_8053D810_00000488
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053D810_000004C4:
    cmpwi r29, 0x0
    ble lbl_fn_8053D810_000004D4
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053D810_000004D4:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053D8DC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053D8F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8053D8F4_000005D8
    beq lbl_fn_8053D8F4_000005C8
    beq lbl_fn_8053D8F4_000005C8
    beq lbl_fn_8053D8F4_000005C8
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053D8F4_000005C8
    lwz r30, 0x4(r3)
    mulli r4, r30, 0x28
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053D8F4_000005B8
lbl_fn_8053D8F4_0000056C:
    subic. r31, r31, 0x28
    beq lbl_fn_8053D8F4_000005B4
    addic. r0, r31, 0x18
    beq lbl_fn_8053D8F4_00000590
    lwz r0, 0x18(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053D8F4_00000590
    lwz r3, 0x20(r31)
    bl dtor_80084684
lbl_fn_8053D8F4_00000590:
    cmpwi r31, 0x0
    beq lbl_fn_8053D8F4_000005B4
    addic. r0, r31, 0x8
    beq lbl_fn_8053D8F4_000005B4
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053D8F4_000005B4
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053D8F4_000005B4:
    subi r30, r30, 0x1
lbl_fn_8053D8F4_000005B8:
    cmpwi r30, 0x0
    bne lbl_fn_8053D8F4_0000056C
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053D8F4_000005C8:
    cmpwi r29, 0x0
    ble lbl_fn_8053D8F4_000005D8
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053D8F4_000005D8:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053D9E0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053D9F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8053D9F8_000006BC
    beq lbl_fn_8053D9F8_000006AC
    beq lbl_fn_8053D9F8_000006AC
    beq lbl_fn_8053D9F8_000006AC
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053D9F8_000006AC
    lwz r30, 0x4(r3)
    mulli r4, r30, 0x48
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053D9F8_0000069C
lbl_fn_8053D9F8_00000670:
    subic. r31, r31, 0x48
    beq lbl_fn_8053D9F8_00000698
    beq lbl_fn_8053D9F8_00000698
    addic. r0, r31, 0x8
    beq lbl_fn_8053D9F8_00000698
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053D9F8_00000698
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053D9F8_00000698:
    subi r30, r30, 0x1
lbl_fn_8053D9F8_0000069C:
    cmpwi r30, 0x0
    bne lbl_fn_8053D9F8_00000670
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053D9F8_000006AC:
    cmpwi r29, 0x0
    ble lbl_fn_8053D9F8_000006BC
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053D9F8_000006BC:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053DAC4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053DADC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8053DADC_000007A0
    beq lbl_fn_8053DADC_00000790
    beq lbl_fn_8053DADC_00000790
    beq lbl_fn_8053DADC_00000790
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053DADC_00000790
    lwz r30, 0x4(r3)
    mulli r4, r30, 0x18
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053DADC_00000780
lbl_fn_8053DADC_00000754:
    subic. r31, r31, 0x18
    beq lbl_fn_8053DADC_0000077C
    beq lbl_fn_8053DADC_0000077C
    addic. r0, r31, 0x8
    beq lbl_fn_8053DADC_0000077C
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053DADC_0000077C
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053DADC_0000077C:
    subi r30, r30, 0x1
lbl_fn_8053DADC_00000780:
    cmpwi r30, 0x0
    bne lbl_fn_8053DADC_00000754
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053DADC_00000790:
    cmpwi r29, 0x0
    ble lbl_fn_8053DADC_000007A0
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053DADC_000007A0:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053DBA8(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053DBC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8053DBC0_00000884
    beq lbl_fn_8053DBC0_00000874
    beq lbl_fn_8053DBC0_00000874
    beq lbl_fn_8053DBC0_00000874
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053DBC0_00000874
    lwz r30, 0x4(r3)
    mulli r4, r30, 0x1c
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053DBC0_00000864
lbl_fn_8053DBC0_00000838:
    subic. r31, r31, 0x1c
    beq lbl_fn_8053DBC0_00000860
    beq lbl_fn_8053DBC0_00000860
    addic. r0, r31, 0x8
    beq lbl_fn_8053DBC0_00000860
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053DBC0_00000860
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053DBC0_00000860:
    subi r30, r30, 0x1
lbl_fn_8053DBC0_00000864:
    cmpwi r30, 0x0
    bne lbl_fn_8053DBC0_00000838
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053DBC0_00000874:
    cmpwi r29, 0x0
    ble lbl_fn_8053DBC0_00000884
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053DBC0_00000884:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053DC8C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053DCA4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8053DCA4_00000968
    beq lbl_fn_8053DCA4_00000958
    beq lbl_fn_8053DCA4_00000958
    beq lbl_fn_8053DCA4_00000958
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053DCA4_00000958
    lwz r30, 0x4(r3)
    slwi r4, r30, 5
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053DCA4_00000948
lbl_fn_8053DCA4_0000091C:
    subic. r31, r31, 0x20
    beq lbl_fn_8053DCA4_00000944
    beq lbl_fn_8053DCA4_00000944
    addic. r0, r31, 0x8
    beq lbl_fn_8053DCA4_00000944
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053DCA4_00000944
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053DCA4_00000944:
    subi r30, r30, 0x1
lbl_fn_8053DCA4_00000948:
    cmpwi r30, 0x0
    bne lbl_fn_8053DCA4_0000091C
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053DCA4_00000958:
    cmpwi r29, 0x0
    ble lbl_fn_8053DCA4_00000968
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053DCA4_00000968:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053DD70(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053DD88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8053DD88_00000A4C
    beq lbl_fn_8053DD88_00000A3C
    beq lbl_fn_8053DD88_00000A3C
    beq lbl_fn_8053DD88_00000A3C
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053DD88_00000A3C
    lwz r30, 0x4(r3)
    mulli r4, r30, 0x1c
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053DD88_00000A2C
lbl_fn_8053DD88_00000A00:
    subic. r31, r31, 0x1c
    beq lbl_fn_8053DD88_00000A28
    beq lbl_fn_8053DD88_00000A28
    addic. r0, r31, 0x8
    beq lbl_fn_8053DD88_00000A28
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053DD88_00000A28
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053DD88_00000A28:
    subi r30, r30, 0x1
lbl_fn_8053DD88_00000A2C:
    cmpwi r30, 0x0
    bne lbl_fn_8053DD88_00000A00
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053DD88_00000A3C:
    cmpwi r29, 0x0
    ble lbl_fn_8053DD88_00000A4C
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053DD88_00000A4C:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053DE54(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053DE6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r3
    mr r29, r4
    beq lbl_fn_8053DE6C_00000C40
    beq lbl_fn_8053DE6C_00000C30
    beq lbl_fn_8053DE6C_00000C30
    beq lbl_fn_8053DE6C_00000C30
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053DE6C_00000C30
    lwz r30, 0x4(r3)
    mulli r4, r30, 0x84
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053DE6C_00000C20
lbl_fn_8053DE6C_00000AD8:
    subic. r31, r31, 0x84
    beq lbl_fn_8053DE6C_00000C1C
    addic. r27, r31, 0x34
    beq lbl_fn_8053DE6C_00000BAC
    addic. r3, r27, 0x44
    beq lbl_fn_8053DE6C_00000B1C
    beq lbl_fn_8053DE6C_00000B1C
    beq lbl_fn_8053DE6C_00000B1C
    beq lbl_fn_8053DE6C_00000B1C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053DE6C_00000B1C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053DE6C_00000B1C:
    addic. r3, r27, 0x38
    beq lbl_fn_8053DE6C_00000B4C
    beq lbl_fn_8053DE6C_00000B4C
    beq lbl_fn_8053DE6C_00000B4C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053DE6C_00000B4C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053DE6C_00000B4C:
    addic. r3, r27, 0x2c
    beq lbl_fn_8053DE6C_00000B7C
    beq lbl_fn_8053DE6C_00000B7C
    beq lbl_fn_8053DE6C_00000B7C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053DE6C_00000B7C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053DE6C_00000B7C:
    addic. r3, r27, 0x20
    beq lbl_fn_8053DE6C_00000BAC
    beq lbl_fn_8053DE6C_00000BAC
    beq lbl_fn_8053DE6C_00000BAC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053DE6C_00000BAC
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053DE6C_00000BAC:
    addic. r3, r31, 0x28
    beq lbl_fn_8053DE6C_00000BDC
    beq lbl_fn_8053DE6C_00000BDC
    beq lbl_fn_8053DE6C_00000BDC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053DE6C_00000BDC
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053DE6C_00000BDC:
    addic. r0, r31, 0x1c
    beq lbl_fn_8053DE6C_00000BF8
    lwz r0, 0x1c(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053DE6C_00000BF8
    lwz r3, 0x24(r31)
    bl dtor_80084684
lbl_fn_8053DE6C_00000BF8:
    cmpwi r31, 0x0
    beq lbl_fn_8053DE6C_00000C1C
    addic. r0, r31, 0x8
    beq lbl_fn_8053DE6C_00000C1C
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053DE6C_00000C1C
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053DE6C_00000C1C:
    subi r30, r30, 0x1
lbl_fn_8053DE6C_00000C20:
    cmpwi r30, 0x0
    bne lbl_fn_8053DE6C_00000AD8
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053DE6C_00000C30:
    cmpwi r29, 0x0
    ble lbl_fn_8053DE6C_00000C40
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053DE6C_00000C40:
    mr r3, r28
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053E03C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8053E054(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r3
    mr r29, r4
    beq lbl_fn_8053E054_00000FA4
    beq lbl_fn_8053E054_00000F94
    beq lbl_fn_8053E054_00000F94
    beq lbl_fn_8053E054_00000F94
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053E054_00000F94
    lwz r30, 0x4(r3)
    mulli r4, r30, 0x1c0
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_8053E054_00000F84
lbl_fn_8053E054_00000CC0:
    subic. r31, r31, 0x1c0
    beq lbl_fn_8053E054_00000F80
    addic. r3, r31, 0x17c
    beq lbl_fn_8053E054_00000CFC
    beq lbl_fn_8053E054_00000CFC
    beq lbl_fn_8053E054_00000CFC
    beq lbl_fn_8053E054_00000CFC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000CFC
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000CFC:
    addic. r3, r31, 0x170
    beq lbl_fn_8053E054_00000D2C
    beq lbl_fn_8053E054_00000D2C
    beq lbl_fn_8053E054_00000D2C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000D2C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000D2C:
    addic. r3, r31, 0x164
    beq lbl_fn_8053E054_00000D60
    beq lbl_fn_8053E054_00000D60
    beq lbl_fn_8053E054_00000D60
    beq lbl_fn_8053E054_00000D60
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000D60
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000D60:
    addic. r3, r31, 0x158
    beq lbl_fn_8053E054_00000D90
    beq lbl_fn_8053E054_00000D90
    beq lbl_fn_8053E054_00000D90
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000D90
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000D90:
    addic. r3, r31, 0x148
    beq lbl_fn_8053E054_00000DC4
    beq lbl_fn_8053E054_00000DC4
    beq lbl_fn_8053E054_00000DC4
    beq lbl_fn_8053E054_00000DC4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000DC4
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000DC4:
    addic. r0, r31, 0x124
    beq lbl_fn_8053E054_00000DE4
    lwz r3, 0x12c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8053E054_00000DE4
    beq lbl_fn_8053E054_00000DE4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8053E054_00000DE4:
    addic. r0, r31, 0x118
    beq lbl_fn_8053E054_00000E04
    lwz r3, 0x120(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8053E054_00000E04
    beq lbl_fn_8053E054_00000E04
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8053E054_00000E04:
    addic. r3, r31, 0xac
    beq lbl_fn_8053E054_00000E34
    beq lbl_fn_8053E054_00000E34
    beq lbl_fn_8053E054_00000E34
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000E34
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000E34:
    addic. r27, r31, 0x5c
    beq lbl_fn_8053E054_00000F00
    addic. r3, r27, 0x44
    beq lbl_fn_8053E054_00000E70
    beq lbl_fn_8053E054_00000E70
    beq lbl_fn_8053E054_00000E70
    beq lbl_fn_8053E054_00000E70
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000E70
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000E70:
    addic. r3, r27, 0x38
    beq lbl_fn_8053E054_00000EA0
    beq lbl_fn_8053E054_00000EA0
    beq lbl_fn_8053E054_00000EA0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000EA0
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000EA0:
    addic. r3, r27, 0x2c
    beq lbl_fn_8053E054_00000ED0
    beq lbl_fn_8053E054_00000ED0
    beq lbl_fn_8053E054_00000ED0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000ED0
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000ED0:
    addic. r3, r27, 0x20
    beq lbl_fn_8053E054_00000F00
    beq lbl_fn_8053E054_00000F00
    beq lbl_fn_8053E054_00000F00
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000F00
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000F00:
    addic. r27, r31, 0x24
    beq lbl_fn_8053E054_00000F5C
    addic. r3, r27, 0x28
    beq lbl_fn_8053E054_00000F3C
    beq lbl_fn_8053E054_00000F3C
    beq lbl_fn_8053E054_00000F3C
    beq lbl_fn_8053E054_00000F3C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E054_00000F3C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E054_00000F3C:
    cmpwi r27, 0x0
    beq lbl_fn_8053E054_00000F5C
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8053E054_00000F5C
    beq lbl_fn_8053E054_00000F5C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8053E054_00000F5C:
    cmpwi r31, 0x0
    beq lbl_fn_8053E054_00000F80
    addic. r0, r31, 0x8
    beq lbl_fn_8053E054_00000F80
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8053E054_00000F80
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_8053E054_00000F80:
    subi r30, r30, 0x1
lbl_fn_8053E054_00000F84:
    cmpwi r30, 0x0
    bne lbl_fn_8053E054_00000CC0
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8053E054_00000F94:
    cmpwi r29, 0x0
    ble lbl_fn_8053E054_00000FA4
    mr r3, r28
    bl dtor_80084684
lbl_fn_8053E054_00000FA4:
    mr r3, r28
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053E3A0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8053E3B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_8053E3B4_000010B4
    beq lbl_fn_8053E3B4_000010A4
    beq lbl_fn_8053E3B4_000010A4
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8053E3B4_000010A4
    lwz r29, 0x4(r3)
    mulli r4, r29, 0x24
    subf r0, r29, r29
    stw r0, 0x4(r3)
    add r30, r5, r4
    b lbl_fn_8053E3B4_00001094
lbl_fn_8053E3B4_0000101C:
    subic. r30, r30, 0x24
    beq lbl_fn_8053E3B4_00001090
    addic. r31, r30, 0x4
    beq lbl_fn_8053E3B4_00001090
    addic. r3, r31, 0x10
    beq lbl_fn_8053E3B4_00001060
    beq lbl_fn_8053E3B4_00001060
    beq lbl_fn_8053E3B4_00001060
    beq lbl_fn_8053E3B4_00001060
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E3B4_00001060
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E3B4_00001060:
    cmpwi r31, 0x0
    beq lbl_fn_8053E3B4_00001090
    beq lbl_fn_8053E3B4_00001090
    beq lbl_fn_8053E3B4_00001090
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8053E3B4_00001090
    lwz r0, 0x4(r31)
    subf r0, r0, r0
    stw r0, 0x4(r31)
    lwz r3, 0x0(r31)
    bl dtor_80084684
lbl_fn_8053E3B4_00001090:
    subi r29, r29, 0x1
lbl_fn_8053E3B4_00001094:
    cmpwi r29, 0x0
    bne lbl_fn_8053E3B4_0000101C
    lwz r3, 0x0(r27)
    bl dtor_80084684
lbl_fn_8053E3B4_000010A4:
    cmpwi r28, 0x0
    ble lbl_fn_8053E3B4_000010B4
    mr r3, r27
    bl dtor_80084684
lbl_fn_8053E3B4_000010B4:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053E4B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    addi r31, r3, 0x10
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    mr r3, r31
    bl fn_80473E74
    lis r4, lbl_8078FBB0@ha
    mr r3, r30
    addi r4, r4, lbl_8078FBB0@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053E510(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_8053E520(void)
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
    beq lbl_fn_8053E520_0000118C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8053E520_00001170
    bl fn_80084C24
lbl_fn_8053E520_00001170:
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
    ble lbl_fn_8053E520_0000118C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053E520_0000118C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053E58C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r29, 0x4(r3)
    lwz r5, 0x0(r3)
    mulli r4, r29, 0x24
    subf r0, r29, r29
    stw r0, 0x4(r3)
    add r30, r5, r4
    b lbl_fn_8053E58C_00001254
lbl_fn_8053E58C_000011DC:
    subic. r30, r30, 0x24
    beq lbl_fn_8053E58C_00001250
    addic. r31, r30, 0x4
    beq lbl_fn_8053E58C_00001250
    addic. r3, r31, 0x10
    beq lbl_fn_8053E58C_00001220
    beq lbl_fn_8053E58C_00001220
    beq lbl_fn_8053E58C_00001220
    beq lbl_fn_8053E58C_00001220
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E58C_00001220
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8053E58C_00001220:
    cmpwi r31, 0x0
    beq lbl_fn_8053E58C_00001250
    beq lbl_fn_8053E58C_00001250
    beq lbl_fn_8053E58C_00001250
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8053E58C_00001250
    lwz r0, 0x4(r31)
    subf r0, r0, r0
    stw r0, 0x4(r31)
    lwz r3, 0x0(r31)
    bl dtor_80084684
lbl_fn_8053E58C_00001250:
    subi r29, r29, 0x1
lbl_fn_8053E58C_00001254:
    cmpwi r29, 0x0
    bne lbl_fn_8053E58C_000011DC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053E65C(void)
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
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053E65C_000012B0
    mr r3, r0
    bl fn_80084C24
lbl_fn_8053E65C_000012B0:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_8053E65C_000012DC
    mr r4, r31
    slwi r3, r30, 3
    la r5, lbl_8087E4CC
    la r6, lbl_8087E4C8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4(r29)
    b lbl_fn_8053E65C_000012E4
lbl_fn_8053E65C_000012DC:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_8053E65C_000012E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053E6E4(void)
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
    beq lbl_fn_8053E6E4_00001470
    lis r5, lbl_807943E0@ha
    li r4, 0x0
    addi r5, r5, lbl_807943E0@l
    stw r5, 0x0(r3)
    addi r0, r5, 0x1c
    stw r0, 0x48(r3)
    bl fn_805406C0
    addi r3, r30, 0x2a0
    li r4, -0x1
    bl fn_80041C0C
    addi r3, r30, 0x29c
    li r4, -0x1
    bl fn_80117E34
    addi r3, r30, 0x294
    li r4, -0x1
    bl fn_8053E520
    addi r3, r30, 0x1d4
    li r4, -0x1
    bl fn_803663A4
    addi r3, r30, 0x1c4
    li r4, -0x1
    bl fn_80014798
    addi r3, r30, 0x184
    li r4, -0x1
    bl fn_8053E3B4
    lis r4, fn_800CB3A0@ha
    addi r3, r30, 0x174
    addi r4, r4, fn_800CB3A0@l
    li r5, 0x4
    li r6, 0x4
    bl fn_806959D8
    addi r3, r30, 0x164
    li r4, -0x1
    bl fn_8053E054
    addi r3, r30, 0x154
    li r4, -0x1
    bl fn_8053DE6C
    addi r3, r30, 0x144
    li r4, -0x1
    bl fn_8053DD88
    addi r3, r30, 0x134
    li r4, -0x1
    bl fn_8053DCA4
    addi r3, r30, 0x124
    li r4, -0x1
    bl fn_8053DBC0
    addi r3, r30, 0x114
    li r4, -0x1
    bl fn_8053DADC
    addi r3, r30, 0x104
    li r4, -0x1
    bl fn_8053D9F8
    addi r3, r30, 0xf4
    li r4, -0x1
    bl fn_8053D8F4
    addi r3, r30, 0xe4
    li r4, -0x1
    bl fn_8053D810
    addi r3, r30, 0xd4
    li r4, -0x1
    bl fn_8053D72C
    addi r3, r30, 0xc4
    li r4, -0x1
    bl fn_8053D648
    addi r3, r30, 0xb8
    li r4, -0x1
    bl fn_8053D4D4
    addi r3, r30, 0x68
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r30, 0x5c
    li r4, -0x1
    bl fn_8000D760
    addi r3, r30, 0x48
    li r4, 0x0
    bl fn_80537784
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8053E6E4_00001470
    mr r3, r30
    bl dtor_80084684
lbl_fn_8053E6E4_00001470:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053E870(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8075E148@ha
    li r4, 0x4
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8075E148@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2c8
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8053E870_000014CC
    mr r4, r31
    bl fn_8053D0F8
lbl_fn_8053E870_000014CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8053E8C4(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8053E8CC(void)
{
    nofralloc
    stw r4, 0x194(r3)
    blr
}

asm void fn_8053E8D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, lbl_8087F540
    cmpwi r0, 0x0
    beq lbl_fn_8053E8D4_00001940
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8053E8D4_0000153C
    cmpwi r0, 0x3
    bne lbl_fn_8053E8D4_0000171C
lbl_fn_8053E8D4_0000153C:
    lwz r30, 0x190(r3)
    bl fn_8020F130
    mr r4, r30
    bl fn_8020F71C
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8053E8D4_00001674
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8053E8D4_0000156C
    lwz r4, 0x10d8(r4)
    b lbl_fn_8053E8D4_00001584
lbl_fn_8053E8D4_0000156C:
    lwz r4, lbl_8087F540
    lwz r4, 0x1a6c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8053E8D4_00001580
    b lbl_fn_8053E8D4_00001584
lbl_fn_8053E8D4_00001580:
    li r4, 0x0
lbl_fn_8053E8D4_00001584:
    lwz r0, 0x4c(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8053E8D4_000015AC
    lwz r5, lbl_8087F8A0
    cmpwi r5, 0x0
    beq lbl_fn_8053E8D4_000015AC
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_8053E8D4_000015AC:
    lwz r0, 0x4c(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8053E8D4_00001624
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_00001624
    cmpwi r4, 0x0
    beq lbl_fn_8053E8D4_00001614
    lwz r29, 0x48(r3)
    b lbl_fn_8053E8D4_0000160C
lbl_fn_8053E8D4_000015D8:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8053E8D4_00001608
    lwz r3, lbl_8087F430
    li r4, 0x2
    lwz r5, 0x58(r29)
    lwz r3, 0x10d8(r3)
    bl fn_803CCC84
    mr r3, r29
    li r4, 0x0
    bl fn_8016E4C4
lbl_fn_8053E8D4_00001608:
    lwz r29, 0x14ac(r29)
lbl_fn_8053E8D4_0000160C:
    cmpwi r29, 0x0
    bne lbl_fn_8053E8D4_000015D8
lbl_fn_8053E8D4_00001614:
    lwz r3, lbl_8087F408
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8053E8D4_00001624:
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8053E8D4_0000164C
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_0000164C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8053E8D4_0000164C:
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8053E8D4_00001674
    lwz r3, lbl_8087F128
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_00001674
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8053E8D4_00001674:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_00001688
    lwz r29, 0x48(r3)
    b lbl_fn_8053E8D4_000016A4
lbl_fn_8053E8D4_00001688:
    li r29, 0x0
    b lbl_fn_8053E8D4_000016A4
lbl_fn_8053E8D4_00001690:
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8016E71C
    lwz r29, 0x14ac(r29)
lbl_fn_8053E8D4_000016A4:
    cmpwi r29, 0x0
    bne lbl_fn_8053E8D4_00001690
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_000016C0
    lwz r29, 0x48(r3)
    b lbl_fn_8053E8D4_000016DC
lbl_fn_8053E8D4_000016C0:
    li r29, 0x0
    b lbl_fn_8053E8D4_000016DC
lbl_fn_8053E8D4_000016C8:
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8016E71C
    lwz r29, 0x14ac(r29)
lbl_fn_8053E8D4_000016DC:
    cmpwi r29, 0x0
    bne lbl_fn_8053E8D4_000016C8
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_000016F8
    lwz r29, 0x48(r3)
    b lbl_fn_8053E8D4_00001714
lbl_fn_8053E8D4_000016F8:
    li r29, 0x0
    b lbl_fn_8053E8D4_00001714
lbl_fn_8053E8D4_00001700:
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8016E71C
    lwz r29, 0x1424(r29)
lbl_fn_8053E8D4_00001714:
    cmpwi r29, 0x0
    bne lbl_fn_8053E8D4_00001700
lbl_fn_8053E8D4_0000171C:
    mr r3, r31
    li r4, 0x0
    bl fn_805501E0
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_8053E8D4_00001748
lbl_fn_8053E8D4_00001734:
    lwz r0, 0x164(r31)
    add r3, r0, r30
    bl fn_8000F1EC
    addi r29, r29, 0x1
    addi r30, r30, 0x1c0
lbl_fn_8053E8D4_00001748:
    lwz r0, 0x168(r31)
    cmpw r29, r0
    blt lbl_fn_8053E8D4_00001734
    lwz r0, 0x98(r31)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8053E8D4_000017A4
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_8053E8D4_00001798
lbl_fn_8053E8D4_0000176C:
    lwz r0, 0x164(r31)
    add r3, r0, r30
    lwz r0, 0x18(r3)
    extrwi r0, r0, 1, 7
    cmplwi r0, 0x1
    beq lbl_fn_8053E8D4_00001790
    li r4, -0x1
    li r5, 0x0
    bl fn_8001282C
lbl_fn_8053E8D4_00001790:
    addi r29, r29, 0x1
    addi r30, r30, 0x1c0
lbl_fn_8053E8D4_00001798:
    lwz r0, 0x168(r31)
    cmpw r29, r0
    blt lbl_fn_8053E8D4_0000176C
lbl_fn_8053E8D4_000017A4:
    lwz r3, lbl_8087F540
    lwz r3, 0x2400(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_000017E0
    lwz r0, 0x190(r31)
    cmpwi r0, 0x270e
    beq lbl_fn_8053E8D4_000017C8
    cmpwi r0, 0x151b
    bne lbl_fn_8053E8D4_000017E0
lbl_fn_8053E8D4_000017C8:
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F540
    lfs f0, lbl_80887CA0
    lwz r3, 0x2400(r3)
    stfs f0, 0x48(r3)
lbl_fn_8053E8D4_000017E0:
    lwz r0, 0x50(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8053E8D4_000017F4
    cmpwi r0, 0x3
    bne lbl_fn_8053E8D4_00001940
lbl_fn_8053E8D4_000017F4:
    lwz r3, lbl_8087F540
    bl fn_80482ED8
    lwz r3, lbl_8087EFA8
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_0000187C
    li r0, 0x0
    stw r0, 0x36c(r3)
    lfs f0, lbl_80887CA0
    stfs f0, 0x370(r3)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x324(r3)
    stw r0, 0x324(r4)
    psq_l f2, 0x330(r3), 0, 0
    psq_l f1, 0x328(r3), 0, 0
    psq_st f1, 0x328(r4), 0, 0
    psq_st f2, 0x330(r4), 0, 0
    psq_l f2, 0x340(r3), 0, 0
    psq_l f1, 0x338(r3), 0, 0
    psq_st f1, 0x338(r4), 0, 0
    psq_st f2, 0x340(r4), 0, 0
    psq_l f2, 0x350(r3), 0, 0
    psq_l f1, 0x348(r3), 0, 0
    psq_st f1, 0x348(r4), 0, 0
    psq_st f2, 0x350(r4), 0, 0
    psq_l f2, 0x360(r3), 0, 0
    psq_l f1, 0x358(r3), 0, 0
    psq_st f1, 0x358(r4), 0, 0
    psq_st f2, 0x360(r4), 0, 0
    lwz r0, 0x368(r3)
    stw r0, 0x368(r4)
    lwz r0, 0x36c(r3)
    stw r0, 0x36c(r4)
    lfs f0, 0x370(r3)
    stfs f0, 0x370(r4)
lbl_fn_8053E8D4_0000187C:
    lfs f31, lbl_80887CAC
    li r29, 0x0
    lfs f30, lbl_80887CA8
    li r30, 0x0
lbl_fn_8053E8D4_0000188C:
    lwz r0, lbl_8087F540
    add r3, r0, r30
    addi r3, r3, 0xc8
    bl fn_80112784
    lwz r0, 0x98(r31)
    extrwi r0, r0, 1, 4
    cmplwi r0, 0x1
    bne lbl_fn_8053E8D4_000018C0
    lwz r0, lbl_8087F540
    add r3, r0, r30
    stfs f30, 0x2c4(r3)
    stfs f30, 0x118(r3)
    b lbl_fn_8053E8D4_000018D0
lbl_fn_8053E8D4_000018C0:
    lwz r0, lbl_8087F540
    add r3, r0, r30
    stfs f31, 0x2c4(r3)
    stfs f31, 0x118(r3)
lbl_fn_8053E8D4_000018D0:
    addi r29, r29, 0x1
    addi r30, r30, 0x65c
    cmpwi r29, 0x4
    blt lbl_fn_8053E8D4_0000188C
    lwz r3, lbl_8087F540
    li r0, 0x0
    stw r0, 0x1a38(r3)
    lwz r3, 0x280(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_000018FC
    bl fn_80228FD8
lbl_fn_8053E8D4_000018FC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_00001940
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_00001940
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8053E8D4_00001940
    lwz r30, 0x48(r3)
    cmpwi r30, 0x0
    beq lbl_fn_8053E8D4_00001940
    lwz r3, lbl_8087F430
    bl fn_80373148
    addi r5, r30, 0x528
    li r4, 0x1
    bl fn_804A0580
lbl_fn_8053E8D4_00001940:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8053ED50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r4, lbl_8087F540
    cmpwi r4, 0x0
    beq lbl_fn_8053ED50_00001B74
    lwz r4, 0x2400(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8053ED50_000019D8
    lwz r0, 0x190(r3)
    cmpwi r0, 0x151b
    beq lbl_fn_8053ED50_000019D8
    cmpwi r0, 0x151f
    beq lbl_fn_8053ED50_000019D8
    cmpwi r0, 0x151e
    beq lbl_fn_8053ED50_000019D8
    mr r3, r4
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F540
    lfs f0, lbl_80887CA0
    lwz r3, 0x2400(r3)
    stfs f0, 0x48(r3)
lbl_fn_8053ED50_000019D8:
    lwz r0, 0x50(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8053ED50_000019EC
    cmpwi r0, 0x3
    bne lbl_fn_8053ED50_00001AB0
lbl_fn_8053ED50_000019EC:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053ED50_00001A08
    lwz r0, 0x190(r31)
    cmpwi r0, 0x19d
    beq lbl_fn_8053ED50_00001A20
lbl_fn_8053ED50_00001A08:
    lwz r4, 0x98(r31)
    lwz r0, 0x98(r31)
    lwz r3, lbl_8087F540
    extrwi r4, r4, 1, 7
    extrwi r5, r0, 1, 15
    bl fn_80483714
lbl_fn_8053ED50_00001A20:
    li r29, 0x0
    li r30, 0x0
lbl_fn_8053ED50_00001A28:
    lwz r0, lbl_8087F540
    add r3, r0, r30
    addi r3, r3, 0xc8
    bl fn_80112784
    addi r29, r29, 0x1
    addi r30, r30, 0x65c
    cmpwi r29, 0x4
    blt lbl_fn_8053ED50_00001A28
    lwz r3, lbl_8087F540
    li r4, 0x1
    li r5, 0x0
    bl fn_8047F994
    lwz r3, lbl_8087F540
    bl fn_804817D4
    lwz r3, lbl_8087F540
    bl fn_8047F8B0
    lwz r3, 0x1ec(r31)
    bl fn_803B57EC
    lwz r3, lbl_8087F540
    li r0, 0x0
    li r4, 0x0
    stw r0, 0x1aa0(r3)
    lwz r3, lbl_8087F540
    bl fn_8048169C
    lwz r3, lbl_8087F540
    bl fn_8048E904
    lwz r3, lbl_8087F540
    bl fn_80484FBC
    lwz r3, lbl_8087F540
    li r4, 0x0
    bl fn_8048F184
    lwz r3, lbl_8087F540
    li r4, 0x1
    bl fn_8048F184
lbl_fn_8053ED50_00001AB0:
    lwz r3, 0x280(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8053ED50_00001AC0
    bl fn_80229240
lbl_fn_8053ED50_00001AC0:
    li r3, 0x0
    stw r3, 0x1f0(r31)
    lfs f1, lbl_80887CA0
    li r0, -0x1
    stfs f1, 0x200(r31)
    lfs f0, lbl_80887CA4
    stfs f1, 0x1f8(r31)
    stfs f1, 0x1f4(r31)
    stfs f0, 0x1fc(r31)
    stw r3, 0x204(r31)
    stw r3, 0x208(r31)
    stw r0, 0x20c(r31)
    stw r3, 0x210(r31)
    stw r3, 0x214(r31)
    stfs f1, 0x224(r31)
    stfs f1, 0x21c(r31)
    stfs f1, 0x218(r31)
    stfs f0, 0x220(r31)
    stw r3, 0x228(r31)
    stw r3, 0x22c(r31)
    stw r0, 0x230(r31)
    stw r3, 0x234(r31)
    stw r3, 0x238(r31)
    stfs f1, 0x248(r31)
    stfs f1, 0x240(r31)
    stfs f1, 0x23c(r31)
    stfs f0, 0x244(r31)
    stw r3, 0x24c(r31)
    stw r3, 0x250(r31)
    stw r0, 0x254(r31)
    stw r3, 0x258(r31)
    stw r3, 0x25c(r31)
    stfs f1, 0x26c(r31)
    stfs f1, 0x264(r31)
    stfs f1, 0x260(r31)
    stfs f0, 0x268(r31)
    stw r3, 0x270(r31)
    stw r3, 0x274(r31)
    stw r0, 0x278(r31)
    stw r3, 0x27c(r31)
    lwz r0, 0x98(r31)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_8053ED50_00001B74
    mr r3, r31
    bl fn_8053EF74
lbl_fn_8053ED50_00001B74:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
