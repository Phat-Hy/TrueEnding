#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCreateThread(void);
extern void OSDisableInterrupts(void);
extern void OSGetTick(void);
extern void OSInitThreadQueue(void);
extern void OSJoinThread(void);
extern void OSRegisterVersion(void);
extern void OSRestoreInterrupts(void);
extern void OSResumeThread(void);
extern void SCCheckStatus(void);
extern void SCInit(void);
extern void __register_global_object(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805F2670(void);
extern void fn_805F26D0(void);
extern void fn_805F27A0(void);
extern void fn_805F2880(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_8060B080(void);
extern void fn_80624AB0(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80703F90(void);
extern void fn_80704080(void);
extern void fn_807041B0(void);
extern void fn_807042D0(void);
extern void fn_807046B0(void);
extern void fn_80704720(void);
extern void fn_80704780(void);
extern void fn_807080C0(void);
extern void fn_807081E0(void);
extern void fn_807081F0(void);
extern void fn_807082B0(void);
extern void fn_80708980(void);
extern void fn_80709700(void);
extern void fn_80709AB0(void);
extern void fn_8070AB60(void);
extern void fn_8070AB70(void);
extern void fn_8070AB80(void);
extern void fn_8070AB90(void);
extern void fn_8070B4B0(void);
extern void fn_8070B590(void);
extern void fn_8070B5A0(void);
extern void fn_8070B640(void);
extern void fn_8070B7C0(void);
extern void fn_8070EE90(void);
extern void fn_8070EFE0(void);
extern void fn_80710940(void);
extern void fn_807109E0(void);
extern void fn_807109F0(void);
extern void fn_80711390(void);
extern void fn_80711440(void);
extern void fn_807114E0(void);
extern void fn_80711770(void);
extern void fn_80717A40(void);
extern void fn_8071A9B0(void);
extern void fn_8071C5E0(void);
extern void fn_8071D220(void);
extern void fn_8071D260(void);
extern void fn_8071D860(void);
extern void fn_8071DA10(void);
extern void fn_8071DA30(void);
extern void fn_8071DAB0(void);
extern void fn_8071DB80(void);
extern void fn_807204D0(void);
extern void fn_807205C0(void);
extern void fn_807205D0(void);
extern void fn_80720680(void);
extern void fn_807209C0(void);
extern void fn_80720A70(void);
extern void fn_807210F0(void);
extern void fn_80721120(void);
extern void fn_80725170(void);
extern void fn_80725200(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);

/* External data declarations */
extern u8 lbl_807C6380[];
extern u8 lbl_807C63E0[];
extern u8 lbl_808632D0[];
extern u8 lbl_808638E0[];
extern u8 lbl_808638F0[];
extern u8 lbl_80863C20[];
extern u8 lbl_80879200[];
extern u8 lbl_80879210[];
extern u8 lbl_8087D5C0[];

/* Small data declarations */
extern u32 lbl_8087EE28;
extern u32 lbl_808804E8;
extern u32 lbl_808804EC;
extern u32 lbl_808804F0;
extern u32 lbl_808804F8;

/* Function declarations */
void pad_03_80717E94_text(void);
void fn_80717EA0(void);
void fn_80717EC0(void);
void fn_807180A0(void);
void fn_80718130(void);
void fn_807181C0(void);
void fn_807181D0(void);
void fn_807182B0(void);
void fn_80718320(void);
void fn_807183D0(void);
void fn_80718470(void);
void fn_807184D0(void);
void fn_807184F0(void);
void fn_80718540(void);
void fn_807186F0(void);
void fn_80718770(void);
void fn_80718780(void);
void fn_807187D0(void);
void fn_80718890(void);
void fn_80718900(void);
void fn_80718A30(void);
void fn_80718B30(void);
void fn_80718C40(void);
void fn_80718D00(void);
void fn_80718D70(void);
void fn_80718DD0(void);
void fn_80718ED0(void);
void fn_80718F50(void);
void fn_80718FA0(void);
void fn_80719090(void);
void fn_80719110(void);
void fn_80719120(void);
void fn_80719230(void);
void fn_807194F0(void);
void fn_807196C0(void);
void fn_80719710(void);
void fn_80719750(void);
void fn_80719790(void);
void fn_807198E0(void);
void fn_80719AA0(void);
void fn_80719B90(void);
void fn_80719BF0(void);
void fn_80719C50(void);
void fn_80719D50(void);

asm void pad_03_80717E94_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_80717EA0(void)
{
    nofralloc
    lis r3, lbl_808632D0@ha
    lis r4, fn_80717A40@ha
    addi r3, r3, lbl_808632D0@l
    li r5, 0xc
    addi r4, r4, fn_80717A40@l
    li r6, 0x80
    b fn_806959D8
}

asm void fn_80717EC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r3, 0x98(r31)
    lwz r0, 0x50(r31)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_80717EC0_00000074
    li r29, 0x7f
    b lbl_fn_80717EC0_0000007C
lbl_fn_80717EC0_00000074:
    srawi r0, r3, 31
    andc r29, r3, r0
lbl_fn_80717EC0_0000007C:
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80717EC0_00000110
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_80717EC0_000001EC
    b lbl_fn_80717EC0_00000110
lbl_fn_80717EC0_000000A0:
    lwz r0, 0x10(r30)
    subic. r3, r0, 0x100
    bne lbl_fn_80717EC0_000000C0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_80717EC0_000001EC
lbl_fn_80717EC0_000000C0:
    lbz r4, 0x98(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_fn_80717EC0_000000DC
    li r0, 0x7f
    b lbl_fn_80717EC0_000000E4
lbl_fn_80717EC0_000000DC:
    srawi r0, r4, 31
    andc r0, r4, r0
lbl_fn_80717EC0_000000E4:
    cmpw r29, r0
    bge lbl_fn_80717EC0_00000100
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_80717EC0_000001EC
lbl_fn_80717EC0_00000100:
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80717EC0_00000110:
    lwz r3, 0x0(r30)
    lwz r0, 0x24(r30)
    cmpw r3, r0
    bge lbl_fn_80717EC0_000000A0
    addi r0, r30, 0x4
    stw r0, 0xc(r1)
    mr r3, r30
    addi r4, r1, 0xc
    addi r5, r31, 0xf8
    bl fn_807252A0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r3, 0x10(r30)
    addi r0, r30, 0x10
    b lbl_fn_80717EC0_000001A8
    nop
lbl_fn_80717EC0_00000154:
    lbz r5, -0x68(r3)
    lwz r4, -0xb0(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_fn_80717EC0_00000170
    li r6, 0x7f
    b lbl_fn_80717EC0_00000178
lbl_fn_80717EC0_00000170:
    srawi r4, r5, 31
    andc r6, r5, r4
lbl_fn_80717EC0_00000178:
    lbz r5, 0x98(r31)
    lwz r4, 0x50(r31)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_fn_80717EC0_00000194
    li r4, 0x7f
    b lbl_fn_80717EC0_0000019C
lbl_fn_80717EC0_00000194:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_fn_80717EC0_0000019C:
    cmpw r4, r6
    blt lbl_fn_80717EC0_000001B0
    lwz r3, 0x0(r3)
lbl_fn_80717EC0_000001A8:
    cmplw r3, r0
    bne lbl_fn_80717EC0_00000154
lbl_fn_80717EC0_000001B0:
    stw r3, 0x8(r1)
    addi r3, r30, 0xc
    addi r4, r1, 0x8
    addi r5, r31, 0x100
    bl fn_807252A0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r31
    mr r4, r30
    bl fn_8070AB80
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
lbl_fn_80717EC0_000001EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807180A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    addi r3, r30, 0xc
    addi r4, r31, 0x100
    bl fn_807252D0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    mr r3, r30
    addi r4, r31, 0xf8
    bl fn_807252D0
    mr r3, r31
    mr r4, r30
    bl fn_8070AB90
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80718130(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r0, 0x28(r30)
    cmpw r31, r0
    ble lbl_fn_80718130_000002D4
    b lbl_fn_80718130_000002DC
lbl_fn_80718130_000002D4:
    srawi r0, r31, 31
    andc r0, r31, r0
lbl_fn_80718130_000002DC:
    stw r0, 0x24(r30)
    b lbl_fn_80718130_000002F8
lbl_fn_80718130_000002E4:
    lwz r3, 0x10(r30)
    lwzu r12, -0x100(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80718130_000002F8:
    lwz r3, 0x0(r30)
    lwz r0, 0x24(r30)
    cmpw r3, r0
    bgt lbl_fn_80718130_000002E4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807181C0(void)
{
    nofralloc
    stw r4, 0x28(r3)
    blr
}

asm void fn_807181D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r3, 0x24(r30)
    cmpwi r3, 0x0
    bne lbl_fn_807181D0_00000384
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_807181D0_00000400
lbl_fn_807181D0_00000384:
    lwz r0, 0x0(r30)
    cmpw r0, r3
    blt lbl_fn_807181D0_000003F0
    lwz r0, 0x10(r30)
    subic. r4, r0, 0x100
    bne lbl_fn_807181D0_000003B0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_807181D0_00000400
lbl_fn_807181D0_000003B0:
    lbz r3, 0x98(r4)
    lwz r0, 0x50(r4)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_807181D0_000003CC
    li r0, 0x7f
    b lbl_fn_807181D0_000003D4
lbl_fn_807181D0_000003CC:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_807181D0_000003D4:
    cmpw r31, r0
    bge lbl_fn_807181D0_000003F0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_807181D0_00000400
lbl_fn_807181D0_000003F0:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
lbl_fn_807181D0_00000400:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807182B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    stw r30, 0x8(r31)
    addi r0, r30, 0x1c
    addi r3, r30, 0x18
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    addi r5, r31, 0x18
    bl fn_807252A0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80718320(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80718320_000004D4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_80718320_0000051C
lbl_fn_80718320_000004D4:
    lwz r5, 0x1c(r31)
    addi r3, r31, 0x18
    stw r5, 0x8(r1)
    addi r4, r1, 0x8
    subi r31, r5, 0x18
    bl fn_80725200
    mr r3, r31
    mr r4, r30
    bl fn_807109E0
    mr r3, r30
    mr r4, r31
    bl fn_8070AB60
    mr r3, r31
    bl fn_80710940
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r31
lbl_fn_80718320_0000051C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807183D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    bne lbl_fn_807183D0_00000584
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_807183D0_000005C0
lbl_fn_807183D0_00000584:
    mr r3, r31
    mr r4, r30
    bl fn_807109F0
    mr r3, r30
    mr r4, r31
    bl fn_8070AB70
    addi r0, r29, 0x1c
    stw r0, 0x8(r1)
    addi r3, r29, 0x18
    addi r4, r1, 0x8
    addi r5, r31, 0x18
    bl fn_807252A0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_807183D0_000005C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80718470(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r7, r6
    li r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80718470_00000614
    b lbl_fn_80718470_00000628
lbl_fn_80718470_00000614:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80718470_00000624
    bl fn_80709AB0
lbl_fn_80718470_00000624:
    li r3, 0x0
lbl_fn_80718470_00000628:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807184D0(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    mr r7, r6
    li r6, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

asm void fn_807184F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, 0x1
    lis r6, lbl_80863C20@ha
    stw r0, 0x24(r1)
    li r0, 0x4000
    addi r5, r5, 0x55e0
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    stw r4, 0x10(r1)
    addi r4, r6, lbl_80863C20@l
    stw r0, 0xc(r1)
    stw r0, 0x14(r1)
    bl fn_80718540
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80718540(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lbz r0, lbl_808804E8
    mr r26, r3
    mr r27, r4
    cmpwi r0, 0x0
    bne lbl_fn_80718540_00000840
    li r0, 0x1
    stb r0, lbl_808804E8
    lwz r3, lbl_8087EE28
    bl OSRegisterVersion
    bl fn_80703F90
    bl fn_80704080
    bl SCInit
lbl_fn_80718540_000006F0:
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_fn_80718540_000006F0
    bl fn_80624AB0
    clrlwi. r0, r3, 24
    beq lbl_fn_80718540_0000071C
    cmpwi r0, 0x1
    beq lbl_fn_80718540_0000072C
    cmpwi r0, 0x2
    beq lbl_fn_80718540_0000073C
    b lbl_fn_80718540_0000074C
lbl_fn_80718540_0000071C:
    bl fn_80703F90
    li r4, 0x3
    bl fn_80704780
    b lbl_fn_80718540_00000758
lbl_fn_80718540_0000072C:
    bl fn_80703F90
    li r4, 0x0
    bl fn_80704780
    b lbl_fn_80718540_00000758
lbl_fn_80718540_0000073C:
    bl fn_80703F90
    li r4, 0x2
    bl fn_80704780
    b lbl_fn_80718540_00000758
lbl_fn_80718540_0000074C:
    bl fn_80703F90
    li r4, 0x0
    bl fn_80704780
lbl_fn_80718540_00000758:
    bl fn_80711390
    bl fn_80711440
    lwz r3, 0xc(r26)
    lwz r0, 0x4(r26)
    add r30, r27, r3
    mr r29, r30
    add r30, r30, r0
    bl fn_8060B080
    stw r3, lbl_808804EC
    mr r28, r30
    bl fn_807080C0
    lwz r4, lbl_808804EC
    bl fn_807081E0
    add r30, r30, r3
    bl fn_807080C0
    lwz r4, lbl_808804EC
    bl fn_807081E0
    mr r31, r3
    bl fn_807080C0
    mr r4, r28
    mr r5, r31
    bl fn_807081F0
    mr r28, r30
    bl fn_807204D0
    lwz r4, lbl_808804EC
    bl fn_807205C0
    add r30, r30, r3
    bl fn_807204D0
    lwz r4, lbl_808804EC
    bl fn_807205C0
    mr r31, r3
    bl fn_807204D0
    mr r4, r28
    mr r5, r31
    bl fn_807205D0
    bl fn_8070B4B0
    lwz r4, lbl_808804EC
    bl fn_8070B590
    bl fn_8070B4B0
    lwz r4, lbl_808804EC
    bl fn_8070B590
    mr r31, r3
    bl fn_8070B4B0
    mr r4, r30
    mr r5, r31
    bl fn_8070B5A0
    bl fn_80711770
    lis r3, lbl_808638F0@ha
    lwz r4, 0x8(r26)
    lwz r6, 0xc(r26)
    mr r5, r27
    addi r3, r3, lbl_808638F0@l
    bl fn_8071DAB0
    bl fn_807187D0
    lwz r4, 0x0(r26)
    mr r5, r29
    lwz r6, 0x4(r26)
    bl fn_80718900
lbl_fn_80718540_00000840:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807186F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_808804E8
    cmpwi r0, 0x0
    beq lbl_fn_807186F0_000008C0
    bl fn_807187D0
    bl fn_80718A30
    bl fn_8071D260
    bl fn_8071D860
    lis r3, lbl_808638F0@ha
    addi r3, r3, lbl_808638F0@l
    bl fn_8071DB80
    bl fn_80711390
    bl fn_807114E0
    bl fn_8070B4B0
    bl fn_8070B640
    bl fn_807204D0
    bl fn_80720680
    bl fn_807080C0
    bl fn_807082B0
    bl fn_80703F90
    bl fn_807041B0
    li r0, 0x0
    stb r0, lbl_808804E8
lbl_fn_807186F0_000008C0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80718770(void)
{
    nofralloc
    lbz r3, lbl_808804E8
    blr
}

asm void fn_80718780(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808638F0@ha
    addi r3, r31, lbl_808638F0@l
    bl fn_8071DA10
    lis r4, fn_8071DA30@ha
    lis r5, lbl_808638E0@ha
    addi r3, r31, lbl_808638F0@l
    addi r4, r4, fn_8071DA30@l
    addi r5, r5, lbl_808638E0@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807187D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, lbl_808804F0
    extsb. r0, r0
    bne lbl_fn_807187D0_000009D8
    lis r31, lbl_80879210@ha
    li r0, 0x0
    addi r31, r31, lbl_80879210@l
    li r5, 0x4
    addi r7, r31, 0x37c
    stw r0, 0x350(r31)
    addi r6, r31, 0x388
    addi r3, r31, 0x320
    stw r0, 0x36c(r31)
    addi r4, r31, 0x340
    stw r0, 0x370(r31)
    stw r0, 0x378(r31)
    stw r7, 0x37c(r31)
    stw r7, 0x380(r31)
    stw r0, 0x384(r31)
    stw r6, 0x388(r31)
    stw r6, 0x38c(r31)
    stb r0, 0x394(r31)
    stb r0, 0x395(r31)
    bl fn_805F2670
    addi r3, r31, 0x318
    bl OSInitThreadQueue
    addi r3, r31, 0x354
    bl fn_805F30F0
    lis r4, fn_80718890@ha
    lis r5, lbl_80879200@ha
    mr r3, r31
    addi r4, r4, fn_80718890@l
    addi r5, r5, lbl_80879200@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804F0
lbl_fn_807187D0_000009D8:
    lwz r31, 0xc(r1)
    lis r3, lbl_80879210@ha
    lwz r0, 0x14(r1)
    addi r3, r3, lbl_80879210@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80718890(void)
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
    beq lbl_fn_80718890_00000A50
    addic. r3, r3, 0x384
    beq lbl_fn_80718890_00000A30
    li r4, 0x0
    bl fn_80725170
lbl_fn_80718890_00000A30:
    addic. r3, r30, 0x378
    beq lbl_fn_80718890_00000A40
    li r4, 0x0
    bl fn_80725170
lbl_fn_80718890_00000A40:
    cmpwi r31, 0x0
    ble lbl_fn_80718890_00000A50
    mr r3, r30
    bl dtor_80084684
lbl_fn_80718890_00000A50:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80718900(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lbz r0, 0x394(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r0, 0x0
    mr r29, r6
    beq lbl_fn_80718900_00000AA4
    li r3, 0x1
    b lbl_fn_80718900_00000B80
lbl_fn_80718900_00000AA4:
    li r31, 0x1
    stb r31, 0x394(r3)
    stw r5, 0x350(r3)
    lbz r0, lbl_808804F0
    extsb. r0, r0
    bne lbl_fn_80718900_00000B38
    lis r30, lbl_80879210@ha
    li r0, 0x0
    addi r30, r30, lbl_80879210@l
    li r5, 0x4
    addi r6, r30, 0x37c
    stw r0, 0x350(r30)
    addi r7, r30, 0x388
    addi r3, r30, 0x320
    stw r0, 0x36c(r30)
    addi r4, r30, 0x340
    stw r0, 0x370(r30)
    stw r0, 0x378(r30)
    stw r6, 0x37c(r30)
    stw r6, 0x380(r30)
    stw r0, 0x384(r30)
    stw r7, 0x388(r30)
    stw r7, 0x38c(r30)
    stb r0, 0x394(r30)
    stb r0, 0x395(r30)
    bl fn_805F2670
    addi r3, r30, 0x318
    bl OSInitThreadQueue
    addi r3, r30, 0x354
    bl fn_805F30F0
    lis r4, fn_80718890@ha
    lis r5, lbl_80879200@ha
    mr r3, r30
    addi r4, r4, fn_80718890@l
    addi r5, r5, lbl_80879200@l
    bl __register_global_object
    stb r31, lbl_808804F0
lbl_fn_80718900_00000B38:
    lis r4, fn_80718C40@ha
    lis r5, lbl_80879210@ha
    mr r3, r26
    mr r7, r29
    mr r8, r27
    addi r4, r4, fn_80718C40@l
    addi r5, r5, lbl_80879210@l
    add r6, r28, r29
    li r9, 0x0
    bl OSCreateThread
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80718900_00000B74
    mr r3, r26
    bl OSResumeThread
lbl_fn_80718900_00000B74:
    neg r0, r31
    or r0, r0, r31
    srwi r3, r0, 31
lbl_fn_80718900_00000B80:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80718A30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x394(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80718A30_00000C78
    lbz r0, lbl_808804F0
    extsb. r0, r0
    bne lbl_fn_80718A30_00000C4C
    lis r31, lbl_80879210@ha
    li r0, 0x0
    addi r31, r31, lbl_80879210@l
    li r5, 0x4
    addi r6, r31, 0x37c
    stw r0, 0x350(r31)
    addi r7, r31, 0x388
    addi r3, r31, 0x320
    stw r0, 0x36c(r31)
    addi r4, r31, 0x340
    stw r0, 0x370(r31)
    stw r0, 0x378(r31)
    stw r6, 0x37c(r31)
    stw r6, 0x380(r31)
    stw r0, 0x384(r31)
    stw r7, 0x388(r31)
    stw r7, 0x38c(r31)
    stb r0, 0x394(r31)
    stb r0, 0x395(r31)
    bl fn_805F2670
    addi r3, r31, 0x318
    bl OSInitThreadQueue
    addi r3, r31, 0x354
    bl fn_805F30F0
    lis r4, fn_80718890@ha
    lis r5, lbl_80879200@ha
    mr r3, r31
    addi r4, r4, fn_80718890@l
    addi r5, r5, lbl_80879200@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804F0
lbl_fn_80718A30_00000C4C:
    lis r3, lbl_80879210@ha
    li r4, 0x2
    addi r3, r3, lbl_80879210@l
    li r5, 0x1
    addi r3, r3, 0x320
    bl fn_805F2880
    mr r3, r30
    li r4, 0x0
    bl OSJoinThread
    li r0, 0x0
    stb r0, 0x394(r30)
lbl_fn_80718A30_00000C78:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80718B30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lbz r0, lbl_808804F0
    extsb. r0, r0
    bne lbl_fn_80718B30_00000D3C
    lis r30, lbl_80879210@ha
    li r0, 0x0
    addi r30, r30, lbl_80879210@l
    li r5, 0x4
    addi r6, r30, 0x37c
    stw r0, 0x350(r30)
    addi r7, r30, 0x388
    addi r3, r30, 0x320
    stw r0, 0x36c(r30)
    addi r4, r30, 0x340
    stw r0, 0x370(r30)
    stw r0, 0x378(r30)
    stw r6, 0x37c(r30)
    stw r6, 0x380(r30)
    stw r0, 0x384(r30)
    stw r7, 0x388(r30)
    stw r7, 0x38c(r30)
    stb r0, 0x394(r30)
    stb r0, 0x395(r30)
    bl fn_805F2670
    addi r3, r30, 0x318
    bl OSInitThreadQueue
    addi r3, r30, 0x354
    bl fn_805F30F0
    lis r4, fn_80718890@ha
    lis r5, lbl_80879200@ha
    mr r3, r30
    addi r4, r4, fn_80718890@l
    addi r5, r5, lbl_80879200@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804F0
lbl_fn_80718B30_00000D3C:
    lis r30, lbl_80879210@ha
    addi r30, r30, lbl_80879210@l
    lbz r0, 0x395(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80718B30_00000D60
    addi r3, r30, 0x320
    li r4, 0x1
    li r5, 0x0
    bl fn_805F26D0
lbl_fn_80718B30_00000D60:
    lwzu r31, 0x388(r30)
    b lbl_fn_80718B30_00000D80
lbl_fn_80718B30_00000D68:
    mr r3, r31
    lwz r31, 0x0(r31)
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80718B30_00000D80:
    cmplw r31, r30
    bne lbl_fn_80718B30_00000D68
    bl fn_807204D0
    bl fn_80720A70
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80718C40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80703F90
    lis r5, fn_80718B30@ha
    addi r4, r29, 0x36c
    addi r5, r5, fn_80718B30@l
    bl fn_807046B0
lbl_fn_80718C40_00000DDC:
    addi r3, r29, 0x320
    addi r4, r1, 0x8
    li r5, 0x1
    bl fn_805F27A0
    lwz r0, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_fn_80718C40_00000E04
    mr r3, r29
    bl fn_80718DD0
    b lbl_fn_80718C40_00000DDC
lbl_fn_80718C40_00000E04:
    cmplwi r0, 0x2
    bne lbl_fn_80718C40_00000DDC
    lwz r31, 0x388(r29)
    addi r30, r29, 0x388
    b lbl_fn_80718C40_00000E30
lbl_fn_80718C40_00000E18:
    mr r3, r31
    lwz r31, 0x0(r31)
    lwz r12, 0x8(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_80718C40_00000E30:
    cmplw r31, r30
    bne lbl_fn_80718C40_00000E18
    bl fn_80703F90
    addi r4, r29, 0x36c
    bl fn_80704720
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80718D00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x354
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r31
    bl fn_805F3130
    addi r0, r29, 0x388
    stw r0, 0x8(r1)
    mr r5, r30
    addi r3, r29, 0x384
    addi r4, r1, 0x8
    bl fn_807252A0
    mr r3, r31
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80718D70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x354
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r31
    bl fn_805F3130
    mr r4, r30
    addi r3, r29, 0x384
    bl fn_807252D0
    mr r3, r31
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80718DD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    addi r28, r3, 0x354
    mr r27, r3
    mr r3, r28
    bl fn_805F3130
    lwz r31, 0x37c(r27)
    addi r30, r27, 0x37c
    b lbl_fn_80718DD0_00000F84
lbl_fn_80718DD0_00000F6C:
    mr r3, r31
    lwz r31, 0x0(r31)
    lwz r12, 0x8(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80718DD0_00000F84:
    cmplw r31, r30
    bne lbl_fn_80718DD0_00000F6C
    bl OSGetTick
    mr r29, r3
    bl fn_807080C0
    bl fn_80708980
    bl fn_80703F90
    bl fn_807042D0
    lwz r30, 0x388(r27)
    addi r31, r27, 0x388
    b lbl_fn_80718DD0_00000FC8
lbl_fn_80718DD0_00000FB0:
    mr r3, r30
    lwz r30, 0x0(r30)
    lwz r12, 0x8(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80718DD0_00000FC8:
    cmplw r30, r31
    bne lbl_fn_80718DD0_00000FB0
    bl fn_8070B4B0
    bl fn_8070B7C0
    bl fn_807210F0
    bl fn_807204D0
    bl fn_807209C0
    bl OSGetTick
    subf r0, r29, r3
    lwz r30, 0x37c(r27)
    stw r0, 0x390(r27)
    addi r31, r27, 0x37c
    b lbl_fn_80718DD0_00001014
lbl_fn_80718DD0_00000FFC:
    mr r3, r30
    lwz r30, 0x0(r30)
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80718DD0_00001014:
    cmplw r30, r31
    bne lbl_fn_80718DD0_00000FFC
    mr r3, r28
    bl fn_805F3210
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80718ED0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r6, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    beq lbl_fn_80718ED0_000010A4
    bl OSDisableInterrupts
    divwu r4, r29, r30
    li r0, 0x0
    mr r31, r3
    stw r28, 0x0(r27)
    addi r3, r27, 0x14
    stw r29, 0x4(r27)
    stw r4, 0x8(r27)
    li r4, 0x0
    li r5, 0x4
    stw r30, 0xc(r27)
    stw r0, 0x10(r27)
    bl memset
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_80718ED0_000010A4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80718F50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    li r0, 0x0
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    stw r0, 0xc(r31)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80718FA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r4, 0xc(r31)
    lwz r0, 0x10(r31)
    cmpw r0, r4
    blt lbl_fn_80718FA0_00001140
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80718FA0_000011E0
lbl_fn_80718FA0_00001140:
    addi r0, r4, 0x7
    li r8, 0x0
    clrrwi r4, r0, 3
    srawi r4, r4, 3
    li r0, 0x8
    addze r7, r4
    b lbl_fn_80718FA0_000011D0
lbl_fn_80718FA0_0000115C:
    add r6, r31, r8
    lbz r5, 0x14(r6)
    cmplwi r5, 0xff
    beq lbl_fn_80718FA0_000011CC
    li r9, 0x1
    li r10, 0x0
    mtctr r0
    nop
lbl_fn_80718FA0_0000117C:
    and. r4, r5, r9
    bne lbl_fn_80718FA0_000011C0
    lbz r4, 0x14(r6)
    slwi r0, r8, 3
    add r0, r10, r0
    or r4, r4, r9
    stb r4, 0x14(r6)
    lwz r4, 0x8(r31)
    lwz r5, 0x10(r31)
    mullw r4, r4, r0
    lwz r0, 0x0(r31)
    addi r5, r5, 0x1
    stw r5, 0x10(r31)
    add r31, r4, r0
    bl OSRestoreInterrupts
    mr r3, r31
    b lbl_fn_80718FA0_000011E0
lbl_fn_80718FA0_000011C0:
    clrlslwi r9, r9, 25, 1
    addi r10, r10, 0x1
    bdnz lbl_fn_80718FA0_0000117C
lbl_fn_80718FA0_000011CC:
    addi r8, r8, 0x1
lbl_fn_80718FA0_000011D0:
    cmpw r8, r7
    blt lbl_fn_80718FA0_0000115C
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_fn_80718FA0_000011E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80719090(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r5, 0x0(r30)
    li r4, 0x1
    lwz r0, 0x8(r30)
    subf r5, r5, r31
    divwu r5, r5, r0
    srwi r0, r5, 3
    add r6, r30, r0
    clrlwi r0, r5, 29
    lbz r5, 0x14(r6)
    slw r0, r4, r0
    andc r0, r5, r0
    stb r0, 0x14(r6)
    lwz r4, 0x10(r30)
    subi r0, r4, 0x1
    stw r0, 0x10(r30)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80719110(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_80719120(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x4(r3)
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lbzu r3, 0x8(r5)
    lwz r4, 0x4(r5)
    bl fn_80721120
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80719120_000012D0
    cmpwi r0, 0x1
    beq lbl_fn_80719120_000012D8
    cmpwi r0, 0x0
    beq lbl_fn_80719120_000012E0
    b lbl_fn_80719120_000012E8
lbl_fn_80719120_000012D0:
    li r0, 0x3
    b lbl_fn_80719120_000012EC
lbl_fn_80719120_000012D8:
    li r0, 0x1
    b lbl_fn_80719120_000012EC
lbl_fn_80719120_000012E0:
    li r0, 0x2
    b lbl_fn_80719120_000012EC
lbl_fn_80719120_000012E8:
    li r0, 0x3
lbl_fn_80719120_000012EC:
    stw r0, 0x0(r31)
    lbz r4, 0x1(r3)
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    stb r0, 0x4(r31)
    lbz r0, 0x2(r3)
    stw r0, 0x8(r31)
    lbz r4, 0x3(r3)
    lhz r0, 0x4(r3)
    slwi r4, r4, 16
    add r0, r4, r0
    stw r0, 0xc(r31)
    lhz r0, 0x6(r3)
    sth r0, 0x10(r31)
    lwz r0, 0x8(r3)
    stw r0, 0x14(r31)
    lwz r0, 0xc(r3)
    stw r0, 0x18(r31)
    lwz r0, 0x10(r3)
    stw r0, 0x1c(r31)
    lwz r0, 0x14(r3)
    stw r0, 0x20(r31)
    lwz r0, 0x18(r3)
    stw r0, 0x24(r31)
    lwz r0, 0x1c(r3)
    stw r0, 0x28(r31)
    lwz r0, 0x20(r3)
    stw r0, 0x2c(r31)
    lwz r0, 0x24(r3)
    stw r0, 0x30(r31)
    lwz r0, 0x28(r3)
    stw r0, 0x34(r31)
    lwz r0, 0x2c(r3)
    stw r0, 0x38(r31)
    lwz r0, 0x30(r3)
    li r3, 0x1
    stw r0, 0x3c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80719230(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x4(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r5
    addi r5, r6, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0x10(r6)
    lwz r4, 0x14(r6)
    bl fn_80721120
    lbz r0, 0x0(r3)
    cmpw r30, r0
    blt lbl_fn_80719230_000013E8
    li r3, 0x0
    b lbl_fn_80719230_00001640
lbl_fn_80719230_000013E8:
    lbz r0, 0x1(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80719230_00001400
    cmpwi r0, 0x1
    beq lbl_fn_80719230_00001520
    b lbl_fn_80719230_0000163C
lbl_fn_80719230_00001400:
    slwi r0, r30, 3
    lwz r4, 0x4(r29)
    add r6, r3, r0
    addi r5, r4, 0x8
    lbz r3, 0x4(r6)
    lwz r4, 0x8(r6)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80719230_0000142C
    li r3, 0x0
    b lbl_fn_80719230_00001640
lbl_fn_80719230_0000142C:
    li r4, 0x7f
    li r0, 0x40
    stb r4, 0x0(r31)
    li r5, 0x20
    stb r0, 0x1(r31)
    lbz r0, 0x0(r3)
    stw r0, 0x4(r31)
    cmpwi r0, 0x20
    bgt lbl_fn_80719230_00001454
    mr r5, r0
lbl_fn_80719230_00001454:
    cmpwi cr1, r5, 0x0
    li r8, 0x0
    ble cr1, lbl_fn_80719230_0000163C
    cmpwi r5, 0x8
    subi r6, r5, 0x8
    ble lbl_fn_80719230_000014F4
    li r7, 0x0
    blt cr1, lbl_fn_80719230_00001488
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r5, r0
    bgt lbl_fn_80719230_00001488
    li r7, 0x1
lbl_fn_80719230_00001488:
    cmpwi r7, 0x0
    beq lbl_fn_80719230_000014F4
    addi r0, r6, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80719230_000014F4
lbl_fn_80719230_000014A4:
    add r4, r3, r8
    add r6, r31, r8
    lbz r0, 0x1(r4)
    addi r8, r8, 0x8
    stb r0, 0x8(r6)
    lbz r0, 0x2(r4)
    stb r0, 0x9(r6)
    lbz r0, 0x3(r4)
    stb r0, 0xa(r6)
    lbz r0, 0x4(r4)
    stb r0, 0xb(r6)
    lbz r0, 0x5(r4)
    stb r0, 0xc(r6)
    lbz r0, 0x6(r4)
    stb r0, 0xd(r6)
    lbz r0, 0x7(r4)
    stb r0, 0xe(r6)
    lbz r0, 0x8(r4)
    stb r0, 0xf(r6)
    bdnz lbl_fn_80719230_000014A4
lbl_fn_80719230_000014F4:
    subf r0, r8, r5
    mtctr r0
    cmpw r8, r5
    bge lbl_fn_80719230_0000163C
lbl_fn_80719230_00001504:
    add r5, r3, r8
    add r4, r31, r8
    lbz r0, 0x1(r5)
    addi r8, r8, 0x1
    stb r0, 0x8(r4)
    bdnz lbl_fn_80719230_00001504
    b lbl_fn_80719230_0000163C
lbl_fn_80719230_00001520:
    slwi r0, r30, 3
    lwz r4, 0x4(r29)
    add r6, r3, r0
    addi r5, r4, 0x8
    lbz r3, 0x4(r6)
    lwz r4, 0x8(r6)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80719230_0000154C
    li r3, 0x0
    b lbl_fn_80719230_00001640
lbl_fn_80719230_0000154C:
    lbz r0, 0x0(r3)
    li r5, 0x20
    stb r0, 0x0(r31)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r31)
    lbz r0, 0x8(r3)
    stw r0, 0x4(r31)
    cmpwi r0, 0x20
    bgt lbl_fn_80719230_00001574
    mr r5, r0
lbl_fn_80719230_00001574:
    cmpwi cr1, r5, 0x0
    li r8, 0x0
    ble cr1, lbl_fn_80719230_0000163C
    cmpwi r5, 0x8
    subi r6, r5, 0x8
    ble lbl_fn_80719230_00001614
    li r7, 0x0
    blt cr1, lbl_fn_80719230_000015A8
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r5, r0
    bgt lbl_fn_80719230_000015A8
    li r7, 0x1
lbl_fn_80719230_000015A8:
    cmpwi r7, 0x0
    beq lbl_fn_80719230_00001614
    addi r0, r6, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80719230_00001614
lbl_fn_80719230_000015C4:
    add r4, r3, r8
    add r6, r31, r8
    lbz r0, 0x9(r4)
    addi r8, r8, 0x8
    stb r0, 0x8(r6)
    lbz r0, 0xa(r4)
    stb r0, 0x9(r6)
    lbz r0, 0xb(r4)
    stb r0, 0xa(r6)
    lbz r0, 0xc(r4)
    stb r0, 0xb(r6)
    lbz r0, 0xd(r4)
    stb r0, 0xc(r6)
    lbz r0, 0xe(r4)
    stb r0, 0xd(r6)
    lbz r0, 0xf(r4)
    stb r0, 0xe(r6)
    lbz r0, 0x10(r4)
    stb r0, 0xf(r6)
    bdnz lbl_fn_80719230_000015C4
lbl_fn_80719230_00001614:
    subf r0, r8, r5
    mtctr r0
    cmpw r8, r5
    bge lbl_fn_80719230_0000163C
lbl_fn_80719230_00001624:
    add r5, r3, r8
    add r4, r31, r8
    lbz r0, 0x9(r5)
    addi r8, r8, 0x1
    stb r0, 0x8(r4)
    bdnz lbl_fn_80719230_00001624
lbl_fn_80719230_0000163C:
    li r3, 0x1
lbl_fn_80719230_00001640:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807194F0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x78(r1)
    mr r30, r3
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r5
    li r5, 0x0
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x0(r30)
    addi r0, r1, 0x27
    clrrwi r29, r0, 5
    li r5, 0x40
    lwz r12, 0x0(r3)
    mr r4, r29
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplwi r3, 0x40
    beq lbl_fn_807194F0_000016D4
    li r3, 0x0
    b lbl_fn_807194F0_00001800
lbl_fn_807194F0_000016D4:
    lwz r3, 0x0(r29)
    subis r0, r3, 0x5253
    cmplwi r0, 0x544d
    beq lbl_fn_807194F0_000016EC
    li r0, 0x0
    b lbl_fn_807194F0_00001718
lbl_fn_807194F0_000016EC:
    lhz r4, 0x6(r29)
    cmplwi r4, 0x100
    bge lbl_fn_807194F0_00001700
    li r0, 0x0
    b lbl_fn_807194F0_00001718
lbl_fn_807194F0_00001700:
    subfic r0, r4, 0x100
    li r3, 0x100
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_807194F0_00001718:
    cmpwi r0, 0x0
    bne lbl_fn_807194F0_00001728
    li r3, 0x0
    b lbl_fn_807194F0_00001800
lbl_fn_807194F0_00001728:
    lwz r0, 0x18(r29)
    cmplw r0, r28
    ble lbl_fn_807194F0_0000173C
    li r3, 0x0
    b lbl_fn_807194F0_00001800
lbl_fn_807194F0_0000173C:
    lwz r3, 0x0(r30)
    li r4, 0x0
    lwz r6, 0x10(r29)
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r0, 0x14(r29)
    lwz r12, 0x44(r12)
    add r29, r6, r0
    mtctr r12
    bctrl
    lwz r3, 0x0(r30)
    mr r4, r31
    mr r5, r29
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r3, r29
    beq lbl_fn_807194F0_00001790
    li r3, 0x0
    b lbl_fn_807194F0_00001800
lbl_fn_807194F0_00001790:
    lwz r3, 0x0(r31)
    subis r0, r3, 0x5253
    cmplwi r0, 0x544d
    beq lbl_fn_807194F0_000017A8
    li r0, 0x0
    b lbl_fn_807194F0_000017D4
lbl_fn_807194F0_000017A8:
    lhz r4, 0x6(r31)
    cmplwi r4, 0x100
    bge lbl_fn_807194F0_000017BC
    li r0, 0x0
    b lbl_fn_807194F0_000017D4
lbl_fn_807194F0_000017BC:
    subfic r0, r4, 0x100
    li r3, 0x100
    orc r3, r3, r4
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_807194F0_000017D4:
    cmpwi r0, 0x0
    beq lbl_fn_807194F0_000017FC
    stw r31, 0x4(r30)
    lwz r0, 0x10(r31)
    add r3, r0, r31
    stw r3, 0x8(r30)
    addi r5, r3, 0x8
    lbz r3, 0x8(r3)
    lwz r4, 0x4(r5)
    bl fn_80721120
lbl_fn_807194F0_000017FC:
    li r3, 0x1
lbl_fn_807194F0_00001800:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_807196C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_807196C0_0000184C
    li r3, 0x0
    b lbl_fn_807196C0_00001864
lbl_fn_807196C0_0000184C:
    lwz r4, 0x8(r3)
    lbz r3, 0x18(r4)
    addi r5, r4, 0x8
    lwz r4, 0x1c(r4)
    bl fn_80721120
    lbz r3, 0x0(r3)
lbl_fn_807196C0_00001864:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80719710(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80719710_0000189C
    li r3, 0x0
    b lbl_fn_80719710_000018A8
lbl_fn_80719710_0000189C:
    addi r3, r3, 0x4
    bl fn_80719120
    li r3, 0x1
lbl_fn_80719710_000018A8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80719750(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80719750_000018DC
    li r3, 0x0
    b lbl_fn_80719750_000018E8
lbl_fn_80719750_000018DC:
    addi r3, r3, 0x4
    bl fn_80719230
    li r3, 0x1
lbl_fn_80719750_000018E8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80719790(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x4(r3)
    stw r31, 0x1c(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_80719790_0000193C
    li r3, 0x0
    b lbl_fn_80719790_00001A28
lbl_fn_80719790_0000193C:
    lwz r5, 0x8(r3)
    lbzu r3, 0x8(r5)
    lwz r4, 0x4(r5)
    bl fn_80721120
    lbz r0, 0x0(r3)
    cmplwi r0, 0x2
    bne lbl_fn_80719790_00001A24
    lwz r4, 0x8(r28)
    lbz r3, 0x18(r4)
    addi r5, r4, 0x8
    lwz r4, 0x1c(r4)
    bl fn_80721120
    lbz r0, 0x0(r3)
    cmpw r29, r0
    bge lbl_fn_80719790_00001A24
    slwi r0, r29, 3
    lwz r4, 0x8(r28)
    add r6, r3, r0
    addi r5, r4, 0x8
    lbz r3, 0x4(r6)
    lwz r4, 0x8(r6)
    bl fn_80721120
    mr r4, r3
    lwz r5, 0x8(r28)
    lbz r3, 0x0(r3)
    lwz r4, 0x4(r4)
    addi r5, r5, 0x8
    bl fn_80721120
    lwz r4, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r30)
    stw r4, 0x0(r30)
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r30)
    stw r4, 0x8(r30)
    lwz r4, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r30)
    stw r4, 0x10(r30)
    lwz r4, 0x18(r3)
    lwz r0, 0x1c(r3)
    stw r0, 0x1c(r30)
    stw r4, 0x18(r30)
    lhz r0, 0x20(r3)
    sth r0, 0x20(r30)
    lhz r0, 0x22(r3)
    sth r0, 0x22(r30)
    lhz r0, 0x24(r3)
    sth r0, 0x24(r30)
    lhz r0, 0x26(r3)
    sth r0, 0x26(r30)
    lhz r0, 0x28(r3)
    sth r0, 0x0(r31)
    lhz r0, 0x2a(r3)
    sth r0, 0x2(r31)
    lhz r0, 0x2c(r3)
    sth r0, 0x4(r31)
lbl_fn_80719790_00001A24:
    li r3, 0x1
lbl_fn_80719790_00001A28:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807198E0(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x60
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r7
    stw r30, -0x8(r12)
    mr r30, r5
    stw r29, -0xc(r12)
    mr r29, r4
    stw r28, -0x10(r12)
    mr r28, r3
    lwz r8, 0x4(r3)
    neg r0, r8
    or r0, r0, r8
    srwi. r0, r0, 31
    bne lbl_fn_807198E0_00001AA0
    li r3, 0x0
    b lbl_fn_807198E0_00001BDC
lbl_fn_807198E0_00001AA0:
    beq lbl_fn_807198E0_00001AAC
    lwz r4, 0x18(r8)
    b lbl_fn_807198E0_00001AB0
lbl_fn_807198E0_00001AAC:
    li r4, 0x0
lbl_fn_807198E0_00001AB0:
    mullw r0, r6, r7
    lwz r3, 0x0(r3)
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    slwi r0, r0, 2
    add r4, r4, r0
    addi r4, r4, 0x8
    mtctr r12
    bctrl
    lwz r3, 0x0(r28)
    addi r4, r1, 0x20
    li r5, 0x20
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplwi r3, 0x20
    beq lbl_fn_807198E0_00001B04
    li r3, 0x0
    b lbl_fn_807198E0_00001BDC
lbl_fn_807198E0_00001B04:
    cmpwi r31, 0x0
    addi r6, r1, 0x20
    li r3, 0x0
    li r4, 0x0
    ble lbl_fn_807198E0_00001BD8
    srwi. r0, r31, 2
    mtctr r0
    beq lbl_fn_807198E0_00001BB0
lbl_fn_807198E0_00001B24:
    lhzx r5, r6, r3
    addi r0, r4, 0x1
    sthx r5, r29, r4
    slwi r0, r0, 1
    addi r3, r3, 0x4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r0, r4, 0x3
    addi r4, r4, 0x2
    lhzx r5, r6, r3
    slwi r0, r0, 1
    sthx r5, r29, r4
    addi r3, r3, 0x4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r0, r4, 0x3
    addi r4, r4, 0x2
    lhzx r5, r6, r3
    slwi r0, r0, 1
    sthx r5, r29, r4
    addi r3, r3, 0x4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r0, r4, 0x3
    addi r4, r4, 0x2
    lhzx r5, r6, r3
    slwi r0, r0, 1
    sthx r5, r29, r4
    addi r3, r3, 0x4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r4, r4, 0x2
    bdnz lbl_fn_807198E0_00001B24
    andi. r31, r31, 0x3
    beq lbl_fn_807198E0_00001BD8
lbl_fn_807198E0_00001BB0:
    mtctr r31
lbl_fn_807198E0_00001BB4:
    lhzx r5, r6, r3
    addi r0, r4, 0x1
    sthx r5, r29, r4
    slwi r0, r0, 1
    addi r3, r3, 0x4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r4, r4, 0x2
    bdnz lbl_fn_807198E0_00001BB4
lbl_fn_807198E0_00001BD8:
    li r3, 0x1
lbl_fn_807198E0_00001BDC:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r28, -0x10(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_80719AA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80709700
    lis r6, lbl_807C6380@ha
    li r31, 0x0
    addi r6, r6, lbl_807C6380@l
    lis r8, lbl_807C63E0@ha
    addi r9, r30, 0x178
    lis r4, fn_8071C5E0@ha
    addi r0, r6, 0x24
    addi r8, r8, lbl_807C63E0@l
    lis r5, fn_80719BF0@ha
    stw r6, 0x0(r30)
    addi r3, r30, 0x184
    addi r4, r4, fn_8071C5E0@l
    stw r31, 0xb4(r30)
    addi r5, r5, fn_80719BF0@l
    li r6, 0x34
    li r7, 0x20
    stw r31, 0xb8(r30)
    stw r0, 0xbc(r30)
    stb r31, 0x100(r30)
    stb r31, 0x101(r30)
    stw r31, 0x158(r30)
    stw r31, 0x15c(r30)
    stb r31, 0x160(r30)
    stw r8, 0x154(r30)
    stw r31, 0x164(r30)
    stw r31, 0x168(r30)
    stw r31, 0x170(r30)
    stw r31, 0x174(r30)
    stw r9, 0x178(r30)
    stw r9, 0x17c(r30)
    stw r31, 0x180(r30)
    bl fn_806958E0
    stw r31, 0x808(r30)
    lbz r0, lbl_808804F8
    cmpwi r0, 0x0
    bne lbl_fn_80719AA0_00001CCC
    lis r3, lbl_8087D5C0@ha
    addi r3, r3, lbl_8087D5C0@l
    bl fn_805F30F0
    li r0, 0x1
    stb r0, lbl_808804F8
lbl_fn_80719AA0_00001CCC:
    addi r3, r30, 0x180
    addi r4, r30, 0x184
    li r5, 0x680
    li r6, 0x34
    bl fn_8070EE90
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80719B90(void)
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
    beq lbl_fn_80719B90_00001D38
    li r4, 0x0
    bl fn_8071D220
    cmpwi r31, 0x0
    ble lbl_fn_80719B90_00001D38
    mr r3, r30
    bl dtor_80084684
lbl_fn_80719B90_00001D38:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80719BF0(void)
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
    beq lbl_fn_80719BF0_00001D98
    li r4, 0x0
    bl fn_8071D220
    cmpwi r31, 0x0
    ble lbl_fn_80719BF0_00001D98
    mr r3, r30
    bl dtor_80084684
lbl_fn_80719BF0_00001D98:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80719C50(void)
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
    beq lbl_fn_80719C50_00001E9C
    lis r12, lbl_807C6380@ha
    addi r12, r12, lbl_807C6380@l
    stw r12, 0x0(r3)
    addi r0, r12, 0x24
    stw r0, 0xbc(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x100(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80719C50_00001E2C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80719C50_00001E54
lbl_fn_80719C50_00001E2C:
    li r31, 0x0
    stw r31, 0x804(r29)
    addi r3, r29, 0x180
    addi r4, r29, 0x184
    li r5, 0x680
    bl fn_8070EFE0
    stb r31, 0x100(r29)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80719C50_00001E54:
    lis r4, fn_80719BF0@ha
    addi r3, r29, 0x184
    addi r4, r4, fn_80719BF0@l
    li r5, 0x34
    li r6, 0x20
    bl fn_806959D8
    addic. r3, r29, 0x174
    beq lbl_fn_80719C50_00001E7C
    li r4, 0x0
    bl fn_80725170
lbl_fn_80719C50_00001E7C:
    addic. r3, r29, 0x154
    beq lbl_fn_80719C50_00001E8C
    li r4, 0x0
    bl fn_8071D220
lbl_fn_80719C50_00001E8C:
    cmpwi r30, 0x0
    ble lbl_fn_80719C50_00001E9C
    mr r3, r29
    bl dtor_80084684
lbl_fn_80719C50_00001E9C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80719D50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    mr r30, r4
    mr r28, r5
    mr r27, r6
    mr r26, r7
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x100(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80719D50_00001F60
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x100(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80719D50_00001F38
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80719D50_00001F60
lbl_fn_80719D50_00001F38:
    li r29, 0x0
    stw r29, 0x804(r31)
    addi r3, r31, 0x180
    addi r4, r31, 0x184
    li r5, 0x680
    bl fn_8070EFE0
    stb r29, 0x100(r31)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80719D50_00001F60:
    mr r3, r31
    bl fn_8071A9B0
    cmpwi r28, 0x10
    li r0, 0x10
    bgt lbl_fn_80719D50_00001F78
    mr r0, r28
lbl_fn_80719D50_00001F78:
    stw r0, 0x810(r31)
    mr r4, r31
    li r5, 0x0
    li r0, 0x1
    b lbl_fn_80719D50_00001FAC
lbl_fn_80719D50_00001F8C:
    clrlwi. r3, r27, 31
    beq lbl_fn_80719D50_00001FA0
    cmpwi r5, 0x8
    bge lbl_fn_80719D50_00001FB4
    stb r0, 0xb58(r4)
lbl_fn_80719D50_00001FA0:
    srwi r27, r27, 1
    addi r4, r4, 0x38
    addi r5, r5, 0x1
lbl_fn_80719D50_00001FAC:
    cmpwi r27, 0x0
    bne lbl_fn_80719D50_00001F8C
lbl_fn_80719D50_00001FB4:
    cmpwi r5, 0x8
    li r0, 0x8
    bgt lbl_fn_80719D50_00001FC4
    mr r0, r5
lbl_fn_80719D50_00001FC4:
    cmpwi r0, 0x0
    stw r0, 0x80c(r31)
    bne lbl_fn_80719D50_00001FE4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x2
    b lbl_fn_80719D50_000020BC
lbl_fn_80719D50_00001FE4:
    stw r26, 0x814(r31)
    stw r30, 0x804(r31)
    bl OSDisableInterrupts
    lwz r0, 0x810(r31)
    mr r30, r3
    cmpwi r0, 0x0
    ble lbl_fn_80719D50_0000209C
    mr r28, r31
    li r27, 0x0
    b lbl_fn_80719D50_00002060
lbl_fn_80719D50_0000200C:
    lwz r3, 0x804(r31)
    bl fn_80718FA0
    cmpwi r3, 0x0
    bne lbl_fn_80719D50_00002054
    mr r26, r31
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_80719D50_00002044
lbl_fn_80719D50_0000202C:
    lwz r3, 0x804(r31)
    lwz r4, 0x818(r26)
    bl fn_80719090
    stw r29, 0x818(r26)
    addi r26, r26, 0x34
    addi r28, r28, 0x1
lbl_fn_80719D50_00002044:
    cmpw r28, r27
    blt lbl_fn_80719D50_0000202C
    li r0, 0x0
    b lbl_fn_80719D50_00002070
lbl_fn_80719D50_00002054:
    stw r3, 0x818(r28)
    addi r28, r28, 0x34
    addi r27, r27, 0x1
lbl_fn_80719D50_00002060:
    lwz r0, 0x810(r31)
    cmpw r27, r0
    blt lbl_fn_80719D50_0000200C
    li r0, 0x1
lbl_fn_80719D50_00002070:
    cmpwi r0, 0x0
    bne lbl_fn_80719D50_00002094
    mr r3, r30
    bl OSRestoreInterrupts
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
    b lbl_fn_80719D50_000020BC
lbl_fn_80719D50_00002094:
    li r0, 0x1
    stb r0, 0x10f(r31)
lbl_fn_80719D50_0000209C:
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
    stb r0, 0x100(r31)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
lbl_fn_80719D50_000020BC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
