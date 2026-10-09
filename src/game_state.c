#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8001A444(void);
extern void fn_8001AD80(void);
extern void fn_8001ADE8(void);
extern void fn_8001AEBC(void);
extern void fn_8001AEDC(void);
extern void fn_8001B4A4(void);
extern void fn_8001B4CC(void);
extern void fn_8001B508(void);
extern void fn_8001B5B4(void);
extern void fn_8001B634(void);
extern void fn_8001BA88(void);
extern void fn_8001BE00(void);
extern void fn_8001BE90(void);
extern void fn_8001BEB0(void);
extern void fn_8001BF58(void);
extern void fn_8001BF64(void);
extern void fn_8001C01C(void);
extern void fn_8003D298(void);
extern void fn_8003D3F8(void);
extern void fn_8003D6E8(void);
extern void fn_8003DBA4(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_8072FF60[];
extern u8 lbl_8072FF70[];
extern u8 lbl_807307A0[];
extern u8 lbl_807C68C0[];
extern u8 lbl_807C6A40[];
extern u8 lbl_807C6B30[];

/* Small data declarations */
extern u32 lbl_80880798;
extern u32 lbl_8088079C;
extern u32 lbl_808807A0;
extern u32 lbl_808807A4;
extern u32 lbl_808807A8;
extern u32 lbl_808807B8;

/* Function declarations */
void fn_80034F54(void);
void fn_80035030(void);
void fn_800351E4(void);
void fn_80035274(void);
void fn_800352E8(void);
void fn_80035440(void);
void fn_800354C4(void);
void fn_800355FC(void);
void fn_8003574C(void);
void fn_800357BC(void);
void fn_80035914(void);
void fn_80035998(void);
void fn_80035AD0(void);
void fn_80035C20(void);
void fn_80035C94(void);
void fn_80035D04(void);
void fn_80035D18(void);
void fn_80035D2C(void);
void fn_80035EB4(void);
void fn_80035EE4(void);
void fn_80035FD0(void);
void fn_80036048(void);
void fn_80036148(void);
void fn_800361C0(void);
void fn_800362C0(void);
void fn_80036580(void);
void fn_80036600(void);
void fn_80036688(void);
void fn_80036788(void);
void fn_80036A08(void);
void fn_80036A88(void);
void fn_80036AA8(void);
void fn_80036B20(void);
void fn_80036B34(void);
void fn_80036BE8(void);
void fn_80036C94(void);
void fn_80036CC4(void);
void fn_80036CF8(void);
void fn_80036E3C(void);
void fn_80036F8C(void);
void fn_80036FCC(void);
void fn_800370D4(void);
void fn_800371E0(void);
void fn_80037220(void);
void fn_80037364(void);
void fn_800374E0(void);
void fn_80037520(void);
void fn_80037664(void);
void fn_800377AC(void);
void fn_80037854(void);
void fn_80037944(void);
void fn_80037AB0(void);
void fn_80037C38(void);
void fn_80037D20(void);
void fn_80037FDC(void);
void fn_8003806C(void);
void fn_8003818C(void);
void fn_80038338(void);
void fn_800384DC(void);
void fn_80038674(void);
void fn_800386C0(void);
void fn_80038750(void);
void fn_800388C4(void);
void fn_80038924(void);
void fn_80038A30(void);
void fn_80038B0C(void);
void fn_80038C18(void);
void fn_80038CA8(void);
void fn_80038D90(void);
void fn_80038DF8(void);
void fn_80038ED4(void);
void fn_80039040(void);
void fn_800391E0(void);
void fn_800392C8(void);
void fn_80039594(void);
void fn_80039624(void);
void fn_8003975C(void);
void fn_80039908(void);

asm void fn_80034F54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80034F54_000000A0
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80034F54_00000060
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80034F54_00000060:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80034F54_000000A4
lbl_fn_80034F54_000000A0:
    li r0, -0x1
lbl_fn_80034F54_000000A4:
    cmpwi r0, 0x7
    bne lbl_fn_80034F54_000000C0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80034F54_000000C4
lbl_fn_80034F54_000000C0:
    li r3, -0x1
lbl_fn_80034F54_000000C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80035030(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, lbl_807C6A40@ha
    addi r4, r30, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_80035030_0000011C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80035030_00000278
lbl_fn_80035030_0000011C:
    cmpwi r3, 0x1
    bne lbl_fn_80035030_00000134
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80035030_00000278
lbl_fn_80035030_00000134:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80035030_0000019C
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80035030_00000194
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x7
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_80035030_000001D4
lbl_fn_80035030_00000194:
    li r0, -0x1
    b lbl_fn_80035030_000001D4
lbl_fn_80035030_0000019C:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_80035030_000001D4:
    cmpwi r0, 0x9
    bne lbl_fn_80035030_000001F0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80035030_00000278
lbl_fn_80035030_000001F0:
    cmpwi r0, 0x6
    bne lbl_fn_80035030_00000258
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_80035030_00000218
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80035030_00000278
lbl_fn_80035030_00000218:
    cmpwi r3, 0x6
    bne lbl_fn_80035030_00000234
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80035030_00000278
lbl_fn_80035030_00000234:
    cmpwi r3, 0x4
    bne lbl_fn_80035030_00000250
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80035030_00000278
lbl_fn_80035030_00000250:
    li r3, -0x1
    b lbl_fn_80035030_00000278
lbl_fn_80035030_00000258:
    cmpwi r0, 0x1
    bne lbl_fn_80035030_00000274
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80035030_00000278
lbl_fn_80035030_00000274:
    li r3, -0x1
lbl_fn_80035030_00000278:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800351E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800351E4_000002B8
    li r0, -0x1
    b lbl_fn_800351E4_000002C4
lbl_fn_800351E4_000002B8:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800351E4_000002C4:
    cmpwi r0, 0x1
    bne lbl_fn_800351E4_0000030C
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800351E4_00000310
lbl_fn_800351E4_0000030C:
    li r3, -0x1
lbl_fn_800351E4_00000310:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80035274(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x4b
    li r4, 0x64
    stw r0, 0x14(r1)
    li r3, 0xa
    li r0, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    stw r5, 0x18(r31)
    stw r5, 0x1c(r31)
    stw r4, 0x20(r31)
    stw r3, 0x24(r31)
    stw r0, 0x28(r31)
    bl fn_8001B4A4
    stw r3, 0x2c(r31)
    li r4, 0x12c
    li r0, 0x1
    li r3, 0x1
    stw r4, 0x30(r31)
    stw r0, lbl_807C6A40@l(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800352E8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    stw r29, 0x34(r1)
    addi r31, r30, 0x180
    li r29, -0x1
    lwz r3, 0x18(r31)
    lwz r0, 0x1c(r31)
    cmpw r3, r0
    bge lbl_fn_800352E8_000003E0
    addi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x18(r31)
    stw r0, 0x180(r30)
    b lbl_fn_800352E8_000004CC
lbl_fn_800352E8_000003E0:
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r31)
    cmpw r3, r0
    blt lbl_fn_800352E8_000004CC
    lwz r3, 0x0(r30)
    lwz r4, 0x270(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800352E8_0000040C
    cmpwi r4, 0x0
    bne lbl_fn_800352E8_00000414
lbl_fn_800352E8_0000040C:
    li r4, 0x0
    b lbl_fn_800352E8_00000424
lbl_fn_800352E8_00000414:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
lbl_fn_800352E8_00000424:
    addi r3, r30, 0x180
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bge lbl_fn_800352E8_000004CC
    lwz r9, 0x270(r30)
    lwz r8, 0x24(r3)
    cmpwi r9, 0x0
    beq lbl_fn_800352E8_000004AC
    cmpwi r8, 0x0
    beq lbl_fn_800352E8_0000047C
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x12
    stw r8, 0xc(r1)
    stw r9, 0x8(r1)
    bl fn_8001AEDC
    b lbl_fn_800352E8_000004AC
lbl_fn_800352E8_0000047C:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x12
    stw r0, 0x1c(r1)
    stw r9, 0x18(r1)
    bl fn_8001AEDC
lbl_fn_800352E8_000004AC:
    li r0, 0x1
    stw r0, 0x180(r30)
    li r29, 0x6
    li r3, 0x50
    bl fn_8001B4CC
    addi r3, r30, 0x180
    li r0, 0x0
    stw r0, 0x18(r3)
lbl_fn_800352E8_000004CC:
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80035440(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    li r31, -0x1
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80035440_00000558
    lis r7, lbl_807C6A40@ha
    li r8, 0x0
    addi r3, r7, lbl_807C6A40@l
    li r0, 0x1
    stw r8, 0x18(r3)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, lbl_807C6A40@l(r7)
    addi r7, r1, 0x14
    li r31, 0x1
    li r3, 0x0
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
lbl_fn_80035440_00000558:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800354C4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    stw r29, 0x34(r1)
    li r29, -0x1
    lwz r3, 0x0(r30)
    lwz r4, 0x270(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800354C4_000005AC
    cmpwi r4, 0x0
    bne lbl_fn_800354C4_000005B4
lbl_fn_800354C4_000005AC:
    li r4, 0x0
    b lbl_fn_800354C4_000005C4
lbl_fn_800354C4_000005B4:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
lbl_fn_800354C4_000005C4:
    addi r31, r30, 0x180
    lwz r3, 0x20(r31)
    addi r0, r3, 0x14
    cmpw r4, r0
    bge lbl_fn_800354C4_00000644
    addi r3, r30, 0x0
    lwz r4, 0x18(r31)
    lwz r0, 0x8(r3)
    addi r3, r4, 0x1
    stw r3, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800354C4_00000688
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r0, 0x1c(r1)
    stw r31, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r30)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x433
    bl fn_8001B508
    stw r31, 0x180(r30)
    li r29, 0xb
    b lbl_fn_800354C4_00000688
lbl_fn_800354C4_00000644:
    lwz r0, 0x24(r31)
    li r8, 0x0
    li r3, 0x1
    stw r3, 0x180(r30)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r8, 0x14(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x13
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r3, 0x2c(r31)
    li r29, 0x3
    bl fn_8001B4CC
lbl_fn_800354C4_00000688:
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800355FC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x0(r30)
    lwz r4, 0x270(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800355FC_000006DC
    cmpwi r4, 0x0
    bne lbl_fn_800355FC_000006E4
lbl_fn_800355FC_000006DC:
    li r3, 0x0
    b lbl_fn_800355FC_000006F4
lbl_fn_800355FC_000006E4:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x38(r1)
    lwz r3, 0x3c(r1)
lbl_fn_800355FC_000006F4:
    addi r31, r30, 0x180
    lwz r0, 0x20(r31)
    cmpw r3, r0
    bge lbl_fn_800355FC_00000798
    lwz r9, 0x270(r30)
    lwz r3, 0x18(r31)
    cmpwi r9, 0x0
    lwz r8, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x18(r31)
    beq lbl_fn_800355FC_00000788
    cmpwi r8, 0x0
    beq lbl_fn_800355FC_00000758
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0x12
    stw r8, 0x1c(r1)
    stw r9, 0x18(r1)
    bl fn_8001AEDC
    b lbl_fn_800355FC_00000788
lbl_fn_800355FC_00000758:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r3, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x12
    stw r0, 0x2c(r1)
    stw r9, 0x28(r1)
    bl fn_8001AEDC
lbl_fn_800355FC_00000788:
    li r0, 0x1
    stw r0, 0x180(r30)
    li r30, 0x6
    b lbl_fn_800355FC_000007DC
lbl_fn_800355FC_00000798:
    lwz r0, 0x24(r31)
    li r8, 0x0
    li r3, 0x1
    stw r3, 0x180(r30)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r8, 0x14(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x13
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r3, 0x2c(r31)
    li r30, 0x3
    bl fn_8001B4CC
lbl_fn_800355FC_000007DC:
    mr r3, r30
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8003574C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x4b
    li r3, 0x0
    stw r0, 0x14(r1)
    li r0, 0xa
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    stw r4, 0x18(r31)
    stw r3, 0x1c(r31)
    stw r4, 0x20(r31)
    stw r0, 0x24(r31)
    stw r3, 0x28(r31)
    bl fn_8001B4A4
    stw r3, 0x2c(r31)
    li r4, 0x12c
    li r0, 0x1
    li r3, 0x1
    stw r4, 0x30(r31)
    stw r0, lbl_807C6A40@l(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800357BC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    stw r29, 0x34(r1)
    addi r31, r30, 0x180
    li r29, -0x1
    lwz r3, 0x18(r31)
    lwz r0, 0x1c(r31)
    cmpw r3, r0
    bge lbl_fn_800357BC_000008B4
    addi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x18(r31)
    stw r0, 0x180(r30)
    b lbl_fn_800357BC_000009A0
lbl_fn_800357BC_000008B4:
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r31)
    cmpw r3, r0
    blt lbl_fn_800357BC_000009A0
    lwz r3, 0x0(r30)
    lwz r4, 0x270(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800357BC_000008E0
    cmpwi r4, 0x0
    bne lbl_fn_800357BC_000008E8
lbl_fn_800357BC_000008E0:
    li r4, 0x0
    b lbl_fn_800357BC_000008F8
lbl_fn_800357BC_000008E8:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
lbl_fn_800357BC_000008F8:
    addi r3, r30, 0x180
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bge lbl_fn_800357BC_000009A0
    lwz r9, 0x270(r30)
    lwz r8, 0x24(r3)
    cmpwi r9, 0x0
    beq lbl_fn_800357BC_00000980
    cmpwi r8, 0x0
    beq lbl_fn_800357BC_00000950
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x12
    stw r8, 0xc(r1)
    stw r9, 0x8(r1)
    bl fn_8001AEDC
    b lbl_fn_800357BC_00000980
lbl_fn_800357BC_00000950:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x12
    stw r0, 0x1c(r1)
    stw r9, 0x18(r1)
    bl fn_8001AEDC
lbl_fn_800357BC_00000980:
    li r0, 0x1
    stw r0, 0x180(r30)
    li r29, 0x6
    li r3, 0x32
    bl fn_8001B4CC
    addi r3, r30, 0x180
    li r0, 0x0
    stw r0, 0x18(r3)
lbl_fn_800357BC_000009A0:
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80035914(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    li r31, -0x1
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80035914_00000A2C
    lis r7, lbl_807C6A40@ha
    li r8, 0x0
    addi r3, r7, lbl_807C6A40@l
    li r0, 0x1
    stw r8, 0x18(r3)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, lbl_807C6A40@l(r7)
    addi r7, r1, 0x14
    li r31, 0x1
    li r3, 0x0
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
lbl_fn_80035914_00000A2C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80035998(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    stw r29, 0x34(r1)
    li r29, -0x1
    lwz r3, 0x0(r30)
    lwz r4, 0x270(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80035998_00000A80
    cmpwi r4, 0x0
    bne lbl_fn_80035998_00000A88
lbl_fn_80035998_00000A80:
    li r4, 0x0
    b lbl_fn_80035998_00000A98
lbl_fn_80035998_00000A88:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
lbl_fn_80035998_00000A98:
    addi r31, r30, 0x180
    lwz r3, 0x20(r31)
    addi r0, r3, 0x14
    cmpw r4, r0
    bge lbl_fn_80035998_00000B18
    addi r3, r30, 0x0
    lwz r4, 0x18(r31)
    lwz r0, 0x8(r3)
    addi r3, r4, 0x1
    stw r3, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80035998_00000B5C
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r0, 0x1c(r1)
    stw r31, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r30)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x433
    bl fn_8001B508
    stw r31, 0x180(r30)
    li r29, 0xb
    b lbl_fn_80035998_00000B5C
lbl_fn_80035998_00000B18:
    lwz r0, 0x24(r31)
    li r8, 0x0
    li r3, 0x1
    stw r3, 0x180(r30)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r8, 0x14(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x13
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r3, 0x2c(r31)
    li r29, 0x3
    bl fn_8001B4CC
lbl_fn_80035998_00000B5C:
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80035AD0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x0(r30)
    lwz r4, 0x270(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80035AD0_00000BB0
    cmpwi r4, 0x0
    bne lbl_fn_80035AD0_00000BB8
lbl_fn_80035AD0_00000BB0:
    li r3, 0x0
    b lbl_fn_80035AD0_00000BC8
lbl_fn_80035AD0_00000BB8:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x38(r1)
    lwz r3, 0x3c(r1)
lbl_fn_80035AD0_00000BC8:
    addi r31, r30, 0x180
    lwz r0, 0x20(r31)
    cmpw r3, r0
    bge lbl_fn_80035AD0_00000C6C
    lwz r9, 0x270(r30)
    lwz r3, 0x18(r31)
    cmpwi r9, 0x0
    lwz r8, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x18(r31)
    beq lbl_fn_80035AD0_00000C5C
    cmpwi r8, 0x0
    beq lbl_fn_80035AD0_00000C2C
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0x12
    stw r8, 0x1c(r1)
    stw r9, 0x18(r1)
    bl fn_8001AEDC
    b lbl_fn_80035AD0_00000C5C
lbl_fn_80035AD0_00000C2C:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r3, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x12
    stw r0, 0x2c(r1)
    stw r9, 0x28(r1)
    bl fn_8001AEDC
lbl_fn_80035AD0_00000C5C:
    li r0, 0x1
    stw r0, 0x180(r30)
    li r30, 0x6
    b lbl_fn_80035AD0_00000CB0
lbl_fn_80035AD0_00000C6C:
    lwz r0, 0x24(r31)
    li r8, 0x0
    li r3, 0x1
    stw r3, 0x180(r30)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r8, 0x14(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x13
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r3, 0x2c(r31)
    li r30, 0x3
    bl fn_8001B4CC
lbl_fn_80035AD0_00000CB0:
    mr r3, r30
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80035C20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    lis r10, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    li r8, 0x0
    addi r4, r4, lbl_807C68C0@l
    li r9, 0x1
    lwz r0, 0x80(r4)
    addi r3, r10, lbl_807C6A40@l
    lwz r4, 0x7c(r4)
    addi r5, r1, 0xc
    stw r4, 0x18(r3)
    addi r4, r1, 0x8
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r9, 0x1c(r3)
    li r3, 0x0
    stw r9, lbl_807C6A40@l(r10)
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r1)
    li r3, 0x3
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80035C94(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C6B30@ha
    li r9, 0x0
    stw r0, 0x24(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r31, 0x1c(r1)
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r8, 0x18(r4)
    addi r4, r1, 0x8
    lwz r0, lbl_807C6B30@l(r3)
    li r3, 0xd
    stw r9, 0x14(r1)
    stw r9, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80035D04(void)
{
    nofralloc
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    blr
}

asm void fn_80035D18(void)
{
    nofralloc
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    blr
}

asm void fn_80035D2C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    bl fn_80680CF8
    lis r5, 0x5555
    lis r4, lbl_807C6A40@ha
    addi r5, r5, 0x5556
    li r0, 0x1
    mulhw r6, r5, r3
    stw r0, lbl_807C6A40@l(r4)
    addi r5, r4, lbl_807C6A40@l
    srwi r0, r6, 31
    add r0, r6, r0
    mulli r0, r0, 0x3
    subf r3, r0, r3
    addi r0, r3, 0x1
    stw r0, 0x18(r5)
    cmpwi r0, 0x1
    bne lbl_fn_80035D2C_00000E6C
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    li r0, 0xa
    lwz r9, 0x7c(r3)
    addi r4, r1, 0x38
    stw r9, 0x1c(r5)
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    stw r8, 0x44(r1)
    li r3, 0xc
    stw r8, 0x40(r1)
    stw r0, 0x3c(r1)
    stw r9, 0x38(r1)
    bl fn_8001AEDC
    li r3, 0x3
    b lbl_fn_80035D2C_00000F50
lbl_fn_80035D2C_00000E6C:
    cmpwi r0, 0x2
    bne lbl_fn_80035D2C_00000EBC
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    li r0, 0xa
    lwz r9, 0x80(r3)
    addi r4, r1, 0x28
    stw r9, 0x1c(r5)
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    stw r8, 0x34(r1)
    li r3, 0xc
    stw r8, 0x30(r1)
    stw r0, 0x2c(r1)
    stw r9, 0x28(r1)
    bl fn_8001AEDC
    li r3, 0x3
    b lbl_fn_80035D2C_00000F50
lbl_fn_80035D2C_00000EBC:
    cmpwi r0, 0x3
    bne lbl_fn_80035D2C_00000F0C
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    li r0, 0xa
    lwz r9, 0x84(r3)
    addi r4, r1, 0x18
    stw r9, 0x1c(r5)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x24(r1)
    li r3, 0xc
    stw r8, 0x20(r1)
    stw r0, 0x1c(r1)
    stw r9, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x3
    b lbl_fn_80035D2C_00000F50
lbl_fn_80035D2C_00000F0C:
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    li r0, 0xa
    lwz r9, 0x88(r3)
    addi r4, r1, 0x8
    stw r9, 0x1c(r5)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0x14(r1)
    li r3, 0xc
    stw r8, 0x10(r1)
    stw r0, 0xc(r1)
    stw r9, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x3
lbl_fn_80035D2C_00000F50:
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80035EB4(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80035EB4_00000F88
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    blr
lbl_fn_80035EB4_00000F88:
    li r3, -0x1
    blr
}

asm void fn_80035EE4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    addi r3, r1, 0x18
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    addi r5, r31, lbl_807C68C0@l
    stw r30, 0x28(r1)
    psq_l f1, 0x10(r5), 0, 0
    lfs f2, 0x18(r5)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x20(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, lbl_807C68C0@l(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80035EE4_00001028
    lwz r3, lbl_807C68C0@l(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80035EE4_00001028
    mr r8, r30
lbl_fn_80035EE4_00001028:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x1
    stw r0, 0x10(r1)
    stw r8, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80035FD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80035FD0_000010E0
    li r8, 0x0
    li r0, 0x5a
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80035FD0_000010E4
lbl_fn_80035FD0_000010E0:
    li r3, -0x1
lbl_fn_80035FD0_000010E4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80036048(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    addi r4, r31, lbl_807C68C0@l
    stw r30, 0x28(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80036048_000011D8
    lfs f2, 0x18(r4)
    addi r3, r1, 0x18
    psq_l f1, 0x10(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x20(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, lbl_807C68C0@l(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80036048_00001198
    lwz r3, lbl_807C68C0@l(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80036048_00001198
    mr r8, r30
lbl_fn_80036048_00001198:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x1
    stw r0, 0x10(r1)
    stw r8, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    b lbl_fn_80036048_000011DC
lbl_fn_80036048_000011D8:
    li r3, -0x1
lbl_fn_80036048_000011DC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80036148(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80680CF8
    lis r4, 0xe5f3
    lis r7, lbl_807C6A40@ha
    addi r4, r4, 0x6cb1
    li r0, 0x1
    mulhw r8, r4, r3
    addi r6, r7, lbl_807C6A40@l
    li r5, 0x64
    stw r5, 0x20(r6)
    li r4, 0xc8
    stw r4, 0x1c(r6)
    add r8, r8, r3
    li r4, 0xf
    srawi r5, r8, 9
    stw r4, 0x24(r6)
    srwi r8, r5, 31
    add r4, r5, r8
    stw r0, lbl_807C6A40@l(r7)
    mulli r4, r4, 0x23a
    subf r4, r4, r3
    li r3, 0x1
    addi r0, r4, 0x1e
    stw r0, 0x18(r6)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800361C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    addi r4, r31, lbl_807C68C0@l
    stw r30, 0x28(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800361C0_00001350
    lfs f2, 0x18(r4)
    addi r3, r1, 0x18
    psq_l f1, 0x10(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x20(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, lbl_807C68C0@l(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_800361C0_00001310
    lwz r3, lbl_807C68C0@l(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_800361C0_00001310
    mr r8, r30
lbl_fn_800361C0_00001310:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x1
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    b lbl_fn_800361C0_00001354
lbl_fn_800361C0_00001350:
    li r3, -0x1
lbl_fn_800361C0_00001354:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800362C0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x68(r1)
    addi r5, r31, 0x180
    lwz r3, 0x18(r5)
    lwz r0, 0x1c(r5)
    cmpw r3, r0
    bge lbl_fn_800362C0_00001474
    addi r4, r31, 0x0
    addi r3, r3, 0x1
    lwz r6, 0x8(r4)
    li r0, 0x1
    stw r3, 0x18(r5)
    cmpwi r6, 0x0
    stw r0, 0x180(r31)
    beq lbl_fn_800362C0_0000146C
    lfs f2, 0x18(r4)
    addi r3, r1, 0x54
    psq_l f1, 0x10(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, 0x0(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_800362C0_00001438
    lwz r3, 0x0(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_800362C0_00001438
    mr r8, r30
lbl_fn_800362C0_00001438:
    li r0, 0x0
    stw r0, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    stw r0, 0x40(r1)
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    li r3, 0x1
    stw r0, 0x3c(r1)
    stw r8, 0x38(r1)
    bl fn_8001AEDC
    li r3, 0x3
    b lbl_fn_800362C0_00001614
lbl_fn_800362C0_0000146C:
    li r3, -0x1
    b lbl_fn_800362C0_00001614
lbl_fn_800362C0_00001474:
    lwz r3, 0x0(r31)
    lwz r4, 0x270(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800362C0_0000148C
    cmpwi r4, 0x0
    bne lbl_fn_800362C0_00001494
lbl_fn_800362C0_0000148C:
    li r3, 0x0
    b lbl_fn_800362C0_000014A4
lbl_fn_800362C0_00001494:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x60(r1)
    lwz r3, 0x64(r1)
lbl_fn_800362C0_000014A4:
    addi r5, r31, 0x180
    lwz r0, 0x20(r5)
    cmpw r3, r0
    bge lbl_fn_800362C0_0000153C
    lwz r9, 0x270(r31)
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r5)
    cmpwi r9, 0x0
    lwz r8, 0x24(r5)
    stw r0, 0x180(r31)
    beq lbl_fn_800362C0_00001534
    cmpwi r8, 0x0
    beq lbl_fn_800362C0_00001508
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x3
    stw r8, 0x1c(r1)
    stw r9, 0x18(r1)
    bl fn_8001AEDC
    b lbl_fn_800362C0_00001534
lbl_fn_800362C0_00001508:
    li r0, 0x1e
    stw r3, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r3, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x3
    stw r0, 0x2c(r1)
    stw r9, 0x28(r1)
    bl fn_8001AEDC
lbl_fn_800362C0_00001534:
    li r3, 0x6
    b lbl_fn_800362C0_00001614
lbl_fn_800362C0_0000153C:
    addi r4, r31, 0x0
    lwz r3, 0x18(r5)
    lwz r6, 0x8(r4)
    li r0, 0x1
    subi r3, r3, 0x5a
    stw r3, 0x18(r5)
    cmpwi r6, 0x0
    stw r0, 0x180(r31)
    beq lbl_fn_800362C0_00001610
    lfs f2, 0x18(r4)
    addi r3, r1, 0x48
    psq_l f1, 0x10(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x50(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, 0x0(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_800362C0_000015DC
    lwz r3, 0x0(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_800362C0_000015DC
    mr r8, r30
lbl_fn_800362C0_000015DC:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x1
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x3
    b lbl_fn_800362C0_00001614
lbl_fn_800362C0_00001610:
    li r3, -0x1
lbl_fn_800362C0_00001614:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80036580(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80036580_00001698
    lis r3, lbl_807307A0@ha
    li r0, 0x0
    addi r3, r3, lbl_807307A0@l
    stw r0, 0x14(r1)
    addi r8, r3, 0x43b
    addi r4, r1, 0x8
    stw r0, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r0, 0xc(r1)
    li r3, 0x14
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80036580_0000169C
lbl_fn_80036580_00001698:
    li r3, -0x1
lbl_fn_80036580_0000169C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80036600(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80680CF8
    lis r4, 0xe5f3
    lis r9, lbl_807C6A40@ha
    addi r4, r4, 0x6cb1
    li r0, 0x1
    mulhw r5, r4, r3
    addi r8, r9, lbl_807C6A40@l
    li r4, 0xc8
    stw r4, 0x1c(r8)
    li r7, 0x64
    li r6, 0xf
    add r4, r5, r3
    li r5, 0x0
    srawi r10, r4, 9
    stw r7, 0x20(r8)
    srwi r11, r10, 31
    li r4, 0x12c
    add r7, r10, r11
    stw r5, 0x28(r8)
    mulli r7, r7, 0x23a
    stw r6, 0x24(r8)
    subf r5, r7, r3
    stw r4, 0x2c(r8)
    addi r5, r5, 0x1e
    li r3, 0x1
    stw r5, 0x18(r8)
    stw r0, lbl_807C6A40@l(r9)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80036688(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    addi r4, r31, lbl_807C68C0@l
    stw r30, 0x28(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80036688_00001818
    lfs f2, 0x18(r4)
    addi r3, r1, 0x18
    psq_l f1, 0x10(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x20(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, lbl_807C68C0@l(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80036688_000017D8
    lwz r3, lbl_807C68C0@l(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80036688_000017D8
    mr r8, r30
lbl_fn_80036688_000017D8:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x1
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    b lbl_fn_80036688_0000181C
lbl_fn_80036688_00001818:
    li r3, -0x1
lbl_fn_80036688_0000181C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80036788(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x58(r1)
    addi r5, r31, 0x180
    lwz r3, 0x18(r5)
    lwz r0, 0x1c(r5)
    cmpw r3, r0
    bge lbl_fn_80036788_0000193C
    addi r4, r31, 0x0
    addi r3, r3, 0x1
    lwz r6, 0x8(r4)
    li r0, 0x1
    stw r3, 0x18(r5)
    cmpwi r6, 0x0
    stw r0, 0x180(r31)
    beq lbl_fn_80036788_00001934
    lfs f2, 0x18(r4)
    addi r3, r1, 0x44
    psq_l f1, 0x10(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, 0x0(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80036788_00001900
    lwz r3, 0x0(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80036788_00001900
    mr r8, r30
lbl_fn_80036788_00001900:
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x1
    stw r0, 0x2c(r1)
    stw r8, 0x28(r1)
    bl fn_8001AEDC
    li r3, 0x3
    b lbl_fn_80036788_00001A9C
lbl_fn_80036788_00001934:
    li r3, -0x1
    b lbl_fn_80036788_00001A9C
lbl_fn_80036788_0000193C:
    lwz r3, 0x0(r31)
    lwz r4, 0x270(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80036788_00001954
    cmpwi r4, 0x0
    bne lbl_fn_80036788_0000195C
lbl_fn_80036788_00001954:
    li r3, 0x0
    b lbl_fn_80036788_0000196C
lbl_fn_80036788_0000195C:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x50(r1)
    lwz r3, 0x54(r1)
lbl_fn_80036788_0000196C:
    addi r5, r31, 0x180
    lwz r0, 0x20(r5)
    cmpw r3, r0
    bge lbl_fn_80036788_000019C4
    lwz r8, 0x24(r5)
    li r9, 0x0
    lwz r0, 0x270(r31)
    li r3, 0x1
    stw r9, 0x18(r5)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x180(r31)
    addi r7, r1, 0x24
    li r3, 0xd
    stw r9, 0x24(r1)
    stw r9, 0x20(r1)
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x6
    b lbl_fn_80036788_00001A9C
lbl_fn_80036788_000019C4:
    addi r4, r31, 0x0
    lwz r3, 0x18(r5)
    lwz r6, 0x8(r4)
    li r0, 0x1
    subi r3, r3, 0x5a
    stw r3, 0x18(r5)
    cmpwi r6, 0x0
    stw r0, 0x180(r31)
    beq lbl_fn_80036788_00001A98
    lfs f2, 0x18(r4)
    addi r3, r1, 0x38
    psq_l f1, 0x10(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, 0x0(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80036788_00001A64
    lwz r3, 0x0(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80036788_00001A64
    mr r8, r30
lbl_fn_80036788_00001A64:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x1
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x3
    b lbl_fn_80036788_00001A9C
lbl_fn_80036788_00001A98:
    li r3, -0x1
lbl_fn_80036788_00001A9C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80036A08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    li r0, 0x1
    addi r4, r3, lbl_807C6A40@l
    stw r0, lbl_807C6A40@l(r3)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    addi r3, r3, 0x1
    stw r3, 0x28(r4)
    cmpw r3, r0
    bge lbl_fn_80036A08_00001AF0
    li r3, -0x1
    b lbl_fn_80036A08_00001B24
lbl_fn_80036A08_00001AF0:
    li r8, 0x0
    li r0, 0x5
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x1
lbl_fn_80036A08_00001B24:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80036A88(void)
{
    nofralloc
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0x0
    stw r5, 0x18(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
}

asm void fn_80036AA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x12
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    stw r30, 0x18(r1)
    lwz r30, 0x18(r4)
    bl fn_8001AEBC
    li r0, 0x0
    stw r3, 0x8(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x14(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0xd
    stw r0, 0x10(r1)
    stw r30, 0xc(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80036B20(void)
{
    nofralloc
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    blr
}

asm void fn_80036B34(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x0(r31)
    lwz r4, 0x270(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80036B34_00001C10
    cmpwi r4, 0x0
    bne lbl_fn_80036B34_00001C18
lbl_fn_80036B34_00001C10:
    li r4, 0x0
    b lbl_fn_80036B34_00001C28
lbl_fn_80036B34_00001C18:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80036B34_00001C28:
    addi r3, r31, 0x180
    lwz r0, 0x1c(r3)
    cmpw r4, r0
    bge lbl_fn_80036B34_00001C7C
    lwz r8, 0x18(r3)
    li r3, 0x0
    lwz r0, 0x270(r31)
    addi r4, r1, 0x8
    stw r3, 0x14(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r3, 0x10(r1)
    li r3, 0xd
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x6
    b lbl_fn_80036B34_00001C80
lbl_fn_80036B34_00001C7C:
    li r3, -0x1
lbl_fn_80036B34_00001C80:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80036BE8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lwz r4, lbl_807C68C0@l(r3)
    cmpwi r4, 0x0
    bne lbl_fn_80036BE8_00001CBC
    li r4, 0x0
    b lbl_fn_80036BE8_00001CD0
lbl_fn_80036BE8_00001CBC:
    li r3, 0x2
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80036BE8_00001CD0:
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x20(r3)
    cmpw r4, r0
    ble lbl_fn_80036BE8_00001D28
    li r3, 0x0
    li r8, 0xa
    li r0, 0x2
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r3, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0xc
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x3
    b lbl_fn_80036BE8_00001D2C
lbl_fn_80036BE8_00001D28:
    li r3, -0x1
lbl_fn_80036BE8_00001D2C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80036C94(void)
{
    nofralloc
    lis r7, lbl_807C6A40@ha
    li r0, 0x1
    addi r6, r7, lbl_807C6A40@l
    li r3, 0x1e
    li r5, 0x64
    li r4, 0x190
    stw r3, 0x18(r6)
    li r3, 0x3
    stw r5, 0x1c(r6)
    stw r4, 0x20(r6)
    stw r0, lbl_807C6A40@l(r7)
    blr
}

asm void fn_80036CC4(void)
{
    nofralloc
    lis r6, lbl_807C6A40@ha
    li r0, 0x1
    addi r5, r6, lbl_807C6A40@l
    li r7, 0x0
    li r4, 0x64
    stw r7, 0x18(r5)
    li r3, 0x1
    stw r7, 0x1c(r5)
    stw r4, 0x20(r5)
    stw r7, 0x24(r5)
    stw r0, 0x28(r5)
    stw r0, lbl_807C6A40@l(r6)
    blr
}

asm void fn_80036CF8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, -0x1
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lis r29, lbl_807C68C0@ha
    addi r29, r29, lbl_807C68C0@l
    addi r30, r29, 0x180
    lwz r3, 0x18(r30)
    lwz r0, 0x1c(r30)
    cmpw r3, r0
    bge lbl_fn_80036CF8_00001DF0
    addi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x18(r30)
    stw r0, 0x180(r29)
    b lbl_fn_80036CF8_00001EC8
lbl_fn_80036CF8_00001DF0:
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r30)
    cmpw r3, r0
    blt lbl_fn_80036CF8_00001EC8
    lwz r3, 0x0(r29)
    lwz r4, 0x270(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80036CF8_00001E1C
    cmpwi r4, 0x0
    bne lbl_fn_80036CF8_00001E24
lbl_fn_80036CF8_00001E1C:
    li r3, 0x0
    b lbl_fn_80036CF8_00001E34
lbl_fn_80036CF8_00001E24:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_80036CF8_00001E34:
    addi r30, r29, 0x180
    lwz r0, 0x20(r30)
    cmpw r3, r0
    bge lbl_fn_80036CF8_00001EC8
    li r31, 0x0
    li r0, 0x2
    stw r31, 0x18(r30)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r31, 0x14(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r31, 0x10(r1)
    stw r31, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80036CF8_00001EA4
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x444
    bl fn_8001B508
    li r0, 0x1
    stw r0, 0x24(r30)
    b lbl_fn_80036CF8_00001EBC
lbl_fn_80036CF8_00001EA4:
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x44c
    bl fn_8001B508
    stw r31, 0x24(r30)
lbl_fn_80036CF8_00001EBC:
    li r0, 0x1
    stw r0, 0x180(r29)
    li r31, 0xb
lbl_fn_80036CF8_00001EC8:
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80036E3C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lis r29, lbl_807C68C0@ha
    addi r29, r29, lbl_807C68C0@l
    lwz r3, 0x0(r29)
    lwz r4, 0x270(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80036E3C_00001F20
    cmpwi r4, 0x0
    bne lbl_fn_80036E3C_00001F28
lbl_fn_80036E3C_00001F20:
    li r3, 0x0
    b lbl_fn_80036E3C_00001F38
lbl_fn_80036E3C_00001F28:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r3, 0x2c(r1)
lbl_fn_80036E3C_00001F38:
    addi r30, r29, 0x180
    lwz r0, 0x20(r30)
    cmpw r3, r0
    bge lbl_fn_80036E3C_00001FE0
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r30)
    cmpw r3, r0
    blt lbl_fn_80036E3C_00001FE0
    li r31, 0x0
    li r0, 0x2
    stw r31, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r31, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r31, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80036E3C_00001FB8
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x444
    bl fn_8001B508
    li r0, 0x1
    stw r0, 0x24(r30)
    b lbl_fn_80036E3C_00001FD0
lbl_fn_80036E3C_00001FB8:
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x44c
    bl fn_8001B508
    stw r31, 0x24(r30)
lbl_fn_80036E3C_00001FD0:
    li r0, 0x1
    stw r0, 0x180(r29)
    li r3, 0xb
    b lbl_fn_80036E3C_0000201C
lbl_fn_80036E3C_00001FE0:
    li r8, 0x0
    li r0, 0x2
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r29)
    li r3, 0x1
lbl_fn_80036E3C_0000201C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80036F8C(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    lis r7, lbl_807C6A40@ha
    addi r3, r3, lbl_807C68C0@l
    li r0, 0x1
    addi r6, r7, lbl_807C6A40@l
    lwz r5, 0x80(r3)
    li r8, 0x0
    lwz r4, 0x7c(r3)
    stw r8, 0x18(r6)
    li r3, 0x1
    stw r8, 0x1c(r6)
    stw r5, 0x20(r6)
    stw r8, 0x24(r6)
    stw r4, 0x28(r6)
    stw r0, lbl_807C6A40@l(r7)
    blr
}

asm void fn_80036FCC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    stw r29, 0x24(r1)
    addi r31, r30, 0x180
    li r29, -0x1
    lwz r3, 0x18(r31)
    lwz r0, 0x1c(r31)
    cmpw r3, r0
    bge lbl_fn_80036FCC_000020C4
    addi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x18(r31)
    stw r0, 0x180(r30)
    b lbl_fn_80036FCC_00002160
lbl_fn_80036FCC_000020C4:
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r31)
    cmpw r3, r0
    bgt lbl_fn_80036FCC_00002160
    lwz r3, 0x0(r30)
    lwz r4, 0x270(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80036FCC_000020F0
    cmpwi r4, 0x0
    bne lbl_fn_80036FCC_000020F8
lbl_fn_80036FCC_000020F0:
    li r3, 0x0
    b lbl_fn_80036FCC_00002108
lbl_fn_80036FCC_000020F8:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_80036FCC_00002108:
    addi r4, r30, 0x180
    lwz r0, 0x20(r4)
    cmpw r3, r0
    bge lbl_fn_80036FCC_00002160
    lis r3, lbl_807307A0@ha
    li r0, 0x0
    addi r3, r3, lbl_807307A0@l
    stw r0, 0x18(r4)
    addi r8, r3, 0x444
    addi r4, r1, 0x8
    stw r0, 0x14(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r0, 0x10(r1)
    li r3, 0x14
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r30)
    li r29, 0xb
lbl_fn_80036FCC_00002160:
    lwz r31, 0x2c(r1)
    mr r3, r29
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800370D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x0(r30)
    lwz r4, 0x270(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800370D4_000021B4
    cmpwi r4, 0x0
    bne lbl_fn_800370D4_000021BC
lbl_fn_800370D4_000021B4:
    li r3, 0x0
    b lbl_fn_800370D4_000021CC
lbl_fn_800370D4_000021BC:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r3, 0x2c(r1)
lbl_fn_800370D4_000021CC:
    addi r31, r30, 0x180
    lwz r0, 0x20(r31)
    cmpw r3, r0
    bge lbl_fn_800370D4_00002238
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r31)
    cmpw r3, r0
    bgt lbl_fn_800370D4_00002238
    lis r3, lbl_807307A0@ha
    li r0, 0x0
    addi r3, r3, lbl_807307A0@l
    stw r0, 0x24(r1)
    addi r8, r3, 0x444
    addi r4, r1, 0x18
    stw r0, 0x20(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r0, 0x1c(r1)
    li r3, 0x14
    stw r8, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r30)
    li r3, 0xb
    b lbl_fn_800370D4_00002274
lbl_fn_800370D4_00002238:
    li r8, 0x0
    li r0, 0x2
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r30)
    li r3, 0x1
lbl_fn_800370D4_00002274:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800371E0(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    lis r7, lbl_807C6A40@ha
    addi r3, r3, lbl_807C68C0@l
    li r0, 0x1
    addi r6, r7, lbl_807C6A40@l
    lwz r5, 0x80(r3)
    li r8, 0x0
    lwz r4, 0x7c(r3)
    stw r8, 0x18(r6)
    li r3, 0x1
    stw r8, 0x1c(r6)
    stw r5, 0x20(r6)
    stw r8, 0x24(r6)
    stw r4, 0x28(r6)
    stw r0, lbl_807C6A40@l(r7)
    blr
}

asm void fn_80037220(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, -0x1
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lis r29, lbl_807C68C0@ha
    addi r29, r29, lbl_807C68C0@l
    addi r30, r29, 0x180
    lwz r3, 0x18(r30)
    lwz r0, 0x1c(r30)
    cmpw r3, r0
    bge lbl_fn_80037220_00002318
    addi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x18(r30)
    stw r0, 0x180(r29)
    b lbl_fn_80037220_000023F0
lbl_fn_80037220_00002318:
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r30)
    cmpw r3, r0
    bgt lbl_fn_80037220_000023F0
    lwz r3, 0x0(r29)
    lwz r4, 0x270(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80037220_00002344
    cmpwi r4, 0x0
    bne lbl_fn_80037220_0000234C
lbl_fn_80037220_00002344:
    li r3, 0x0
    b lbl_fn_80037220_0000235C
lbl_fn_80037220_0000234C:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_80037220_0000235C:
    addi r30, r29, 0x180
    lwz r0, 0x20(r30)
    cmpw r3, r0
    bge lbl_fn_80037220_000023F0
    li r31, 0x0
    li r0, 0x2
    stw r31, 0x18(r30)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r31, 0x14(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r31, 0x10(r1)
    stw r31, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80037220_000023CC
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x444
    bl fn_8001B508
    li r0, 0x1
    stw r0, 0x24(r30)
    b lbl_fn_80037220_000023E4
lbl_fn_80037220_000023CC:
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x44c
    bl fn_8001B508
    stw r31, 0x24(r30)
lbl_fn_80037220_000023E4:
    li r0, 0x1
    stw r0, 0x180(r29)
    li r31, 0xb
lbl_fn_80037220_000023F0:
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80037364(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lis r29, lbl_807C68C0@ha
    addi r29, r29, lbl_807C68C0@l
    lwz r3, 0x0(r29)
    lwz r4, 0x270(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80037364_00002448
    cmpwi r4, 0x0
    bne lbl_fn_80037364_00002450
lbl_fn_80037364_00002448:
    li r3, 0x0
    b lbl_fn_80037364_00002460
lbl_fn_80037364_00002450:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x38(r1)
    lwz r3, 0x3c(r1)
lbl_fn_80037364_00002460:
    addi r30, r29, 0x180
    lwz r0, 0x20(r30)
    cmpw r3, r0
    bge lbl_fn_80037364_00002508
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r30)
    cmpw r3, r0
    bgt lbl_fn_80037364_00002508
    li r31, 0x0
    li r0, 0x2
    stw r31, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r31, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x0
    stw r31, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80037364_000024E0
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x444
    bl fn_8001B508
    li r0, 0x1
    stw r0, 0x24(r30)
    b lbl_fn_80037364_000024F8
lbl_fn_80037364_000024E0:
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x44c
    bl fn_8001B508
    stw r31, 0x24(r30)
lbl_fn_80037364_000024F8:
    li r0, 0x1
    stw r0, 0x180(r29)
    li r3, 0xb
    b lbl_fn_80037364_00002570
lbl_fn_80037364_00002508:
    li r31, 0x0
    li r0, 0x2
    stw r31, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r31, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r31, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0xa
    stw r31, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r31, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x13
    stw r31, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r29)
    li r3, 0x1
lbl_fn_80037364_00002570:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800374E0(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    lis r7, lbl_807C6A40@ha
    addi r3, r3, lbl_807C68C0@l
    li r0, 0x1
    addi r6, r7, lbl_807C6A40@l
    lwz r5, 0x80(r3)
    li r8, 0x0
    lwz r4, 0x7c(r3)
    stw r8, 0x18(r6)
    li r3, 0x1
    stw r8, 0x1c(r6)
    stw r5, 0x20(r6)
    stw r8, 0x24(r6)
    stw r4, 0x28(r6)
    stw r0, lbl_807C6A40@l(r7)
    blr
}

asm void fn_80037520(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, -0x1
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lis r29, lbl_807C68C0@ha
    addi r29, r29, lbl_807C68C0@l
    addi r30, r29, 0x180
    lwz r3, 0x18(r30)
    lwz r0, 0x1c(r30)
    cmpw r3, r0
    bge lbl_fn_80037520_00002618
    addi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x18(r30)
    stw r0, 0x180(r29)
    b lbl_fn_80037520_000026F0
lbl_fn_80037520_00002618:
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r30)
    cmpw r3, r0
    blt lbl_fn_80037520_000026F0
    lwz r3, 0x0(r29)
    lwz r4, 0x270(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80037520_00002644
    cmpwi r4, 0x0
    bne lbl_fn_80037520_0000264C
lbl_fn_80037520_00002644:
    li r3, 0x0
    b lbl_fn_80037520_0000265C
lbl_fn_80037520_0000264C:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_80037520_0000265C:
    addi r30, r29, 0x180
    lwz r0, 0x20(r30)
    cmpw r3, r0
    bge lbl_fn_80037520_000026F0
    li r31, 0x0
    li r0, 0x2
    stw r31, 0x18(r30)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r31, 0x14(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r31, 0x10(r1)
    stw r31, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80037520_000026CC
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x444
    bl fn_8001B508
    li r0, 0x1
    stw r0, 0x24(r30)
    b lbl_fn_80037520_000026E4
lbl_fn_80037520_000026CC:
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r29)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x44c
    bl fn_8001B508
    stw r31, 0x24(r30)
lbl_fn_80037520_000026E4:
    li r0, 0x1
    stw r0, 0x180(r29)
    li r31, 0xb
lbl_fn_80037520_000026F0:
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80037664(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x0(r30)
    lwz r4, 0x270(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80037664_00002744
    cmpwi r4, 0x0
    bne lbl_fn_80037664_0000274C
lbl_fn_80037664_00002744:
    li r3, 0x0
    b lbl_fn_80037664_0000275C
lbl_fn_80037664_0000274C:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r3, 0x2c(r1)
lbl_fn_80037664_0000275C:
    addi r31, r30, 0x180
    lwz r0, 0x20(r31)
    cmpw r3, r0
    bge lbl_fn_80037664_000027D8
    li r3, 0x2
    bl fn_8001A444
    lwz r0, 0x28(r31)
    cmpw r3, r0
    blt lbl_fn_80037664_000027D8
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80037664_000027AC
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r30)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x444
    bl fn_8001B508
    li r0, 0x1
    stw r0, 0x24(r31)
    b lbl_fn_80037664_000027C8
lbl_fn_80037664_000027AC:
    lis r3, lbl_807307A0@ha
    lwz r4, 0x270(r30)
    addi r3, r3, lbl_807307A0@l
    addi r3, r3, 0x44c
    bl fn_8001B508
    li r0, 0x0
    stw r0, 0x24(r31)
lbl_fn_80037664_000027C8:
    li r0, 0x1
    stw r0, 0x180(r30)
    li r3, 0xb
    b lbl_fn_80037664_00002840
lbl_fn_80037664_000027D8:
    li r31, 0x0
    li r0, 0x2
    stw r31, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r31, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r31, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0xa
    stw r31, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r31, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x13
    stw r31, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r30)
    li r3, 0x1
lbl_fn_80037664_00002840:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800377AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x24(r1)
    lis r0, 0x4330
    lfd f2, lbl_8072FF60@l(r3)
    lis r8, lbl_807C6A40@ha
    stw r31, 0x1c(r1)
    addi r5, r6, lbl_807C68C0@l
    li r31, 0x1
    lfs f0, lbl_808807B8
    lwz r4, 0x30(r5)
    addi r7, r8, lbl_807C6A40@l
    stw r0, 0x8(r1)
    li r3, 0xf0
    xoris r0, r4, 0x8000
    lwz r4, 0x7c(r5)
    stw r0, 0xc(r1)
    li r0, 0x64
    lfd f1, 0x8(r1)
    stw r3, 0x18(r7)
    fsubs f1, f1, f2
    lwz r3, lbl_807C68C0@l(r6)
    stw r0, 0x28(r7)
    fmuls f0, f0, f1
    stw r4, 0x24(r7)
    stw r31, lbl_807C6A40@l(r8)
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x1c(r7)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_800377AC_000028E8
    li r31, 0x7
lbl_fn_800377AC_000028E8:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80037854(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80037854_00002934
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80037854_00002938
lbl_fn_80037854_00002934:
    li r0, -0x1
lbl_fn_80037854_00002938:
    cmpwi r0, 0x6
    bne lbl_fn_80037854_000029DC
    bl fn_800384DC
    cmpwi r3, 0xc
    bne lbl_fn_80037854_00002960
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0xc
    b lbl_fn_80037854_000029E0
lbl_fn_80037854_00002960:
    cmpwi r3, 0xd
    bne lbl_fn_80037854_0000297C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0xd
    b lbl_fn_80037854_000029E0
lbl_fn_80037854_0000297C:
    cmpwi r3, 0x1
    bne lbl_fn_80037854_00002998
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80037854_000029E0
lbl_fn_80037854_00002998:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_80037854_000029B8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80037854_000029E0
lbl_fn_80037854_000029B8:
    cmpwi r3, 0x4
    bne lbl_fn_80037854_000029D4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80037854_000029E0
lbl_fn_80037854_000029D4:
    li r3, -0x1
    b lbl_fn_80037854_000029E0
lbl_fn_80037854_000029DC:
    li r3, -0x1
lbl_fn_80037854_000029E0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80037944(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x44(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    xoris r0, r4, 0x8000
    lfs f2, 0x1c(r5)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80037944_00002A80
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x4
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80037944_00002B08
lbl_fn_80037944_00002A80:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80037944_00002B04
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80037944_00002AC4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80037944_00002AC4:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80037944_00002B08
lbl_fn_80037944_00002B04:
    li r0, -0x1
lbl_fn_80037944_00002B08:
    cmpwi r0, 0x5
    bne lbl_fn_80037944_00002B24
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80037944_00002B44
lbl_fn_80037944_00002B24:
    cmpwi r0, 0x7
    bne lbl_fn_80037944_00002B40
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80037944_00002B44
lbl_fn_80037944_00002B40:
    li r3, -0x1
lbl_fn_80037944_00002B44:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80037AB0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    bl fn_800384DC
    cmpwi r3, 0xc
    bne lbl_fn_80037AB0_00002B8C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0xc
    b lbl_fn_80037AB0_00002CD0
lbl_fn_80037AB0_00002B8C:
    cmpwi r3, 0xd
    bne lbl_fn_80037AB0_00002BA8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0xd
    b lbl_fn_80037AB0_00002CD0
lbl_fn_80037AB0_00002BA8:
    cmpwi r3, 0x1
    bne lbl_fn_80037AB0_00002BC4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80037AB0_00002CD0
lbl_fn_80037AB0_00002BC4:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x18(r1)
    slwi r0, r4, 1
    lfd f1, lbl_8072FF60@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80037AB0_00002C14
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80037AB0_00002C64
lbl_fn_80037AB0_00002C14:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80037AB0_00002C60
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r0, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x5
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x8
    stw r31, lbl_807C6A40@l(r3)
    b lbl_fn_80037AB0_00002C64
lbl_fn_80037AB0_00002C60:
    li r0, -0x1
lbl_fn_80037AB0_00002C64:
    cmpwi r0, 0x6
    bne lbl_fn_80037AB0_00002CB0
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_80037AB0_00002C8C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80037AB0_00002CD0
lbl_fn_80037AB0_00002C8C:
    cmpwi r3, 0x6
    bne lbl_fn_80037AB0_00002CA8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80037AB0_00002CD0
lbl_fn_80037AB0_00002CA8:
    li r3, -0x1
    b lbl_fn_80037AB0_00002CD0
lbl_fn_80037AB0_00002CB0:
    cmpwi r0, 0x8
    bne lbl_fn_80037AB0_00002CCC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80037AB0_00002CD0
lbl_fn_80037AB0_00002CCC:
    li r3, -0x1
lbl_fn_80037AB0_00002CD0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80037C38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80037C38_00002D90
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80037C38_00002D44
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80037C38_00002D44:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80037C38_00002D94
lbl_fn_80037C38_00002D90:
    li r0, -0x1
lbl_fn_80037C38_00002D94:
    cmpwi r0, 0x5
    bne lbl_fn_80037C38_00002DB0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80037C38_00002DB4
lbl_fn_80037C38_00002DB0:
    li r3, -0x1
lbl_fn_80037C38_00002DB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80037D20(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    bl fn_800384DC
    cmpwi r3, 0x1
    bne lbl_fn_80037D20_00002E00
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80037D20_00003070
lbl_fn_80037D20_00002E00:
    cmpwi r3, 0xc
    bne lbl_fn_80037D20_00002E1C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0xc
    b lbl_fn_80037D20_00003070
lbl_fn_80037D20_00002E1C:
    cmpwi r3, 0xd
    bne lbl_fn_80037D20_00002E38
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0xd
    b lbl_fn_80037D20_00003070
lbl_fn_80037D20_00002E38:
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80037D20_00002EA8
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80037D20_00002EA0
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r8, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x4
    stw r8, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80037D20_00002EE4
lbl_fn_80037D20_00002EA0:
    li r0, -0x1
    b lbl_fn_80037D20_00002EE4
lbl_fn_80037D20_00002EA8:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_80037D20_00002EE4:
    cmpwi r0, 0x5
    bne lbl_fn_80037D20_00002F00
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80037D20_00003070
lbl_fn_80037D20_00002F00:
    cmpwi r0, 0x1
    bne lbl_fn_80037D20_00002F1C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80037D20_00003070
lbl_fn_80037D20_00002F1C:
    lis r5, lbl_807C68C0@ha
    lis r31, lbl_807C6A40@ha
    addi r30, r5, lbl_807C68C0@l
    addi r3, r31, lbl_807C6A40@l
    lwz r4, 0xc(r30)
    lwz r0, 0x18(r3)
    cmpw r4, r0
    bge lbl_fn_80037D20_00002FB4
    lwz r4, 0x30(r30)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80037D20_00002FAC
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x4
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_80037D20_00003070
lbl_fn_80037D20_00002FAC:
    li r3, -0x1
    b lbl_fn_80037D20_00003070
lbl_fn_80037D20_00002FB4:
    lwz r4, 0x34(r30)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80037D20_0000306C
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80037D20_00003014
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_80037D20_00003014
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_80037D20_00003018
lbl_fn_80037D20_00003014:
    li r0, 0x0
lbl_fn_80037D20_00003018:
    cmpwi r0, 0x0
    beq lbl_fn_80037D20_0000306C
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x14(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x8
    stw r8, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0xc(r1)
    li r3, 0x2
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80037D20_00003070
lbl_fn_80037D20_0000306C:
    li r3, -0x1
lbl_fn_80037D20_00003070:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80037FDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80037FDC_000030B0
    li r0, -0x1
    b lbl_fn_80037FDC_000030BC
lbl_fn_80037FDC_000030B0:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80037FDC_000030BC:
    cmpwi r0, 0x1
    bne lbl_fn_80037FDC_00003104
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80037FDC_00003108
lbl_fn_80037FDC_00003104:
    li r3, -0x1
lbl_fn_80037FDC_00003108:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003806C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003806C_00003140
    li r0, -0x1
    b lbl_fn_8003806C_0000314C
lbl_fn_8003806C_00003140:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003806C_0000314C:
    cmpwi r0, 0x1
    bne lbl_fn_8003806C_0000315C
    li r3, -0x1
    b lbl_fn_8003806C_00003228
lbl_fn_8003806C_0000315C:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8003806C_00003224
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003806C_0000321C
    bl fn_800384DC
    cmpwi r3, 0x1
    bne lbl_fn_8003806C_000031A0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003806C_00003228
lbl_fn_8003806C_000031A0:
    cmpwi r3, 0xd
    bne lbl_fn_8003806C_000031BC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0xd
    b lbl_fn_8003806C_00003228
lbl_fn_8003806C_000031BC:
    cmpwi r3, 0xc
    bne lbl_fn_8003806C_000031D8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0xc
    b lbl_fn_8003806C_00003228
lbl_fn_8003806C_000031D8:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8003806C_000031F8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8003806C_00003228
lbl_fn_8003806C_000031F8:
    cmpwi r3, 0x4
    bne lbl_fn_8003806C_00003214
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003806C_00003228
lbl_fn_8003806C_00003214:
    li r3, -0x1
    b lbl_fn_8003806C_00003228
lbl_fn_8003806C_0000321C:
    li r3, -0x1
    b lbl_fn_8003806C_00003228
lbl_fn_8003806C_00003224:
    li r3, -0x1
lbl_fn_8003806C_00003228:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8003818C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    stw r0, 0x54(r1)
    addi r4, r5, lbl_807C68C0@l
    stw r31, 0x4c(r1)
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    stw r30, 0x48(r1)
    lwz r4, 0x58(r4)
    lwz r0, 0x28(r3)
    cmpw r4, r0
    blt lbl_fn_8003818C_000032A8
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x0
    stw r0, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_8003818C_000033CC
lbl_fn_8003818C_000032A8:
    lwz r30, lbl_807C68C0@l(r5)
    mr r3, r30
    bl fn_8001BF64
    cmpwi r3, 0x0
    ble lbl_fn_8003818C_000032EC
    mr r3, r30
    bl fn_8001BF58
    cmpwi r3, 0x0
    beq lbl_fn_8003818C_000032DC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0xa
    b lbl_fn_8003818C_000032F0
lbl_fn_8003818C_000032DC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
    b lbl_fn_8003818C_000032F0
lbl_fn_8003818C_000032EC:
    li r0, -0x1
lbl_fn_8003818C_000032F0:
    cmpwi r0, 0x1
    bne lbl_fn_8003818C_00003390
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1e
    blt lbl_fn_8003818C_00003388
    lwz r4, 0x30(r5)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8003818C_00003380
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x5
    stw r0, 0x1c(r1)
    stw r31, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8003818C_000033CC
lbl_fn_8003818C_00003380:
    li r3, -0x1
    b lbl_fn_8003818C_000033CC
lbl_fn_8003818C_00003388:
    li r3, -0x1
    b lbl_fn_8003818C_000033CC
lbl_fn_8003818C_00003390:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
lbl_fn_8003818C_000033CC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80038338(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    lis r31, lbl_807C68C0@ha
    stw r30, 0x38(r1)
    lwz r3, lbl_807C68C0@l(r31)
    bl fn_8001C01C
    cmpwi r3, 0x0
    beq lbl_fn_80038338_00003534
    addi r3, r31, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r31)
    lwz r3, 0x28(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80038338_00003428
    cmpwi r4, 0x0
    bne lbl_fn_80038338_00003430
lbl_fn_80038338_00003428:
    li r4, 0x0
    b lbl_fn_80038338_00003440
lbl_fn_80038338_00003430:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
lbl_fn_80038338_00003440:
    lis r3, lbl_807C6A40@ha
    addi r3, r3, lbl_807C6A40@l
    lwz r0, 0x1c(r3)
    cmpw r4, r0
    bge lbl_fn_80038338_0000352C
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x2c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80038338_00003524
    lwz r3, 0x54(r5)
    lwz r4, 0x50(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80038338_000034C4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80038338_000034C4:
    lis r3, 0x5555
    li r6, 0x0
    addi r0, r3, 0x5556
    stw r6, 0x24(r1)
    mulhw r5, r0, r31
    lis r3, lbl_807C68C0@ha
    stw r6, 0x20(r1)
    addi r4, r1, 0x18
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x20(r3)
    srwi r3, r5, 31
    stw r0, 0x18(r1)
    add r0, r5, r3
    addi r5, r1, 0x1c
    stw r0, 0x1c(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0x4
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80038338_00003570
lbl_fn_80038338_00003524:
    li r3, -0x1
    b lbl_fn_80038338_00003570
lbl_fn_80038338_0000352C:
    li r3, -0x1
    b lbl_fn_80038338_00003570
lbl_fn_80038338_00003534:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
lbl_fn_80038338_00003570:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800384DC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C6A40@ha
    addi r4, r30, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_800384DC_000035C8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_800384DC_00003708
lbl_fn_800384DC_000035C8:
    cmpwi r3, 0x1
    bne lbl_fn_800384DC_0000360C
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0xf
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0xc
    b lbl_fn_800384DC_00003708
lbl_fn_800384DC_0000360C:
    lis r30, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001C01C
    cmpwi r3, 0x0
    beq lbl_fn_800384DC_00003704
    addi r31, r30, lbl_807C68C0@l
    lwz r3, 0x28(r31)
    bl fn_8001BE90
    cmpwi r3, 0x0
    beq lbl_fn_800384DC_000036BC
    lwz r3, 0x28(r31)
    lwz r4, lbl_807C68C0@l(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800384DC_0000364C
    cmpwi r4, 0x0
    bne lbl_fn_800384DC_00003654
lbl_fn_800384DC_0000364C:
    li r5, 0x0
    b lbl_fn_800384DC_00003664
lbl_fn_800384DC_00003654:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r5, 0x2c(r1)
lbl_fn_800384DC_00003664:
    lis r3, lbl_807C6A40@ha
    lis r4, 0x4330
    addi r3, r3, lbl_807C6A40@l
    lis r6, lbl_8072FF60@ha
    lwz r0, 0x1c(r3)
    xoris r5, r5, 0x8000
    lis r3, lbl_8072FF70@ha
    stw r4, 0x30(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r6)
    stw r0, 0x34(r1)
    lfd f0, lbl_8072FF70@l(r3)
    lfd f1, 0x30(r1)
    stw r5, 0x2c(r1)
    fsub f1, f1, f3
    stw r4, 0x28(r1)
    lfd f2, 0x28(r1)
    fmul f0, f0, f1
    fsub f1, f2, f3
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_800384DC_00003704
lbl_fn_800384DC_000036BC:
    lis r31, lbl_807C6A40@ha
    li r8, 0x0
    addi r3, r31, lbl_807C6A40@l
    stw r8, 0x14(r1)
    lwz r0, 0x1c(r3)
    addi r4, r1, 0x8
    stw r8, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0xc(r1)
    li r3, 0x11
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0xd
    b lbl_fn_800384DC_00003708
lbl_fn_800384DC_00003704:
    li r3, -0x1
lbl_fn_800384DC_00003708:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80038674(void)
{
    nofralloc
    lis r4, lbl_807C68C0@ha
    lis r9, lbl_807C6A40@ha
    addi r4, r4, lbl_807C68C0@l
    li r0, 0x1
    addi r8, r9, lbl_807C6A40@l
    lwz r7, 0x7c(r4)
    li r10, 0x0
    lwz r6, 0x80(r4)
    lwz r5, 0x84(r4)
    li r3, 0x1
    lwz r4, 0x88(r4)
    stw r10, 0x18(r8)
    stw r7, 0x1c(r8)
    stw r6, 0x20(r8)
    stw r5, 0x24(r8)
    stw r4, 0x28(r8)
    stw r10, 0x3c(r8)
    stw r0, lbl_807C6A40@l(r9)
    blr
}

asm void fn_800386C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800386C0_00003794
    li r0, -0x1
    b lbl_fn_800386C0_000037A0
lbl_fn_800386C0_00003794:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800386C0_000037A0:
    cmpwi r0, 0x1
    bne lbl_fn_800386C0_000037E8
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800386C0_000037EC
lbl_fn_800386C0_000037E8:
    li r3, -0x1
lbl_fn_800386C0_000037EC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80038750(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80038750_00003830
    li r0, -0x1
    b lbl_fn_80038750_0000383C
lbl_fn_80038750_00003830:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80038750_0000383C:
    cmpwi r0, 0x1
    bne lbl_fn_80038750_0000384C
    li r3, -0x1
    b lbl_fn_80038750_00003954
lbl_fn_80038750_0000384C:
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80038750_00003880
    lis r3, lbl_807C68C0@ha
    li r0, 0x1
    lwz r4, lbl_807C68C0@l(r3)
    li r3, -0x1
    stw r4, 0xe0(r31)
    stw r0, lbl_807C6A40@l(r30)
    stw r0, 0x18(r31)
    b lbl_fn_80038750_00003954
lbl_fn_80038750_00003880:
    cmpwi r0, 0x1
    bne lbl_fn_80038750_00003908
    lwz r3, 0xe0(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80038750_000038F0
    lwz r29, 0xe0(r31)
    li r3, 0x0
    lwz r0, 0x1c(r31)
    addi r4, r1, 0x8
    stw r3, 0x14(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r3, 0x10(r1)
    li r3, 0x9
    stw r0, 0xc(r1)
    stw r29, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C68C0@ha
    li r4, 0x1
    addi r3, r3, lbl_807C68C0@l
    li r0, 0x2
    stw r29, 0x28(r3)
    li r3, -0x1
    stw r4, lbl_807C6A40@l(r30)
    stw r0, 0x18(r31)
    b lbl_fn_80038750_00003954
lbl_fn_80038750_000038F0:
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x18(r31)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r30)
    b lbl_fn_80038750_00003954
lbl_fn_80038750_00003908:
    cmpwi r0, 0x2
    bne lbl_fn_80038750_00003950
    lwz r3, 0xe0(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80038750_00003938
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    li r3, -0x1
    b lbl_fn_80038750_00003954
lbl_fn_80038750_00003938:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r31)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r30)
    b lbl_fn_80038750_00003954
lbl_fn_80038750_00003950:
    li r3, -0x1
lbl_fn_80038750_00003954:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800388C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r6, 0x3c
    li r0, 0x64
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r6, 0x24(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r0, 0x28(r4)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_800388C4_000039B8
    li r31, 0x7
lbl_fn_800388C4_000039B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80038924(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0xc(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80038924_000039FC
    li r0, -0x1
    b lbl_fn_80038924_00003A08
lbl_fn_80038924_000039FC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80038924_00003A08:
    cmpwi r0, 0x1
    bne lbl_fn_80038924_00003A18
    li r3, -0x1
    b lbl_fn_80038924_00003AC8
lbl_fn_80038924_00003A18:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80038924_00003AC4
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80038924_00003ABC
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80038924_00003A68
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80038924_00003AC8
lbl_fn_80038924_00003A68:
    cmpwi r3, 0xa
    bne lbl_fn_80038924_00003A80
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80038924_00003AC8
lbl_fn_80038924_00003A80:
    bl fn_8003D6E8
    cmpwi r3, 0x4
    bne lbl_fn_80038924_00003A9C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_80038924_00003AC8
lbl_fn_80038924_00003A9C:
    cmpwi r3, 0x5
    bne lbl_fn_80038924_00003AB4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_80038924_00003AC8
lbl_fn_80038924_00003AB4:
    li r3, -0x1
    b lbl_fn_80038924_00003AC8
lbl_fn_80038924_00003ABC:
    li r3, -0x1
    b lbl_fn_80038924_00003AC8
lbl_fn_80038924_00003AC4:
    li r3, -0x1
lbl_fn_80038924_00003AC8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80038A30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80038A30_00003B7C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80038A30_00003B3C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80038A30_00003B3C:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80038A30_00003B80
lbl_fn_80038A30_00003B7C:
    li r0, -0x1
lbl_fn_80038A30_00003B80:
    cmpwi r0, 0x7
    bne lbl_fn_80038A30_00003B9C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80038A30_00003BA0
lbl_fn_80038A30_00003B9C:
    li r3, -0x1
lbl_fn_80038A30_00003BA0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80038B0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_80038B0C_00003BF4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80038B0C_00003CB0
lbl_fn_80038B0C_00003BF4:
    cmpwi r3, 0x1
    bne lbl_fn_80038B0C_00003C0C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80038B0C_00003CB0
lbl_fn_80038B0C_00003C0C:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80038B0C_00003C5C
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
    b lbl_fn_80038B0C_00003C60
lbl_fn_80038B0C_00003C5C:
    li r0, -0x1
lbl_fn_80038B0C_00003C60:
    cmpwi r0, 0x1
    bne lbl_fn_80038B0C_00003CAC
    bl fn_8003D6E8
    cmpwi r3, 0x5
    bne lbl_fn_80038B0C_00003C88
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80038B0C_00003CB0
lbl_fn_80038B0C_00003C88:
    cmpwi r3, 0x4
    bne lbl_fn_80038B0C_00003CA4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80038B0C_00003CB0
lbl_fn_80038B0C_00003CA4:
    li r3, -0x1
    b lbl_fn_80038B0C_00003CB0
lbl_fn_80038B0C_00003CAC:
    li r3, -0x1
lbl_fn_80038B0C_00003CB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80038C18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80038C18_00003CEC
    li r0, -0x1
    b lbl_fn_80038C18_00003CF8
lbl_fn_80038C18_00003CEC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80038C18_00003CF8:
    cmpwi r0, 0x1
    bne lbl_fn_80038C18_00003D40
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80038C18_00003D44
lbl_fn_80038C18_00003D40:
    li r3, -0x1
lbl_fn_80038C18_00003D44:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80038CA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80038CA8_00003DBC
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0xf
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0xc
    b lbl_fn_80038CA8_00003E28
lbl_fn_80038CA8_00003DBC:
    cmpwi r3, 0xa
    bne lbl_fn_80038CA8_00003DD4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80038CA8_00003E28
lbl_fn_80038CA8_00003DD4:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80038CA8_00003E24
    bl fn_8003D6E8
    cmpwi r3, 0x4
    bne lbl_fn_80038CA8_00003E04
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_80038CA8_00003E28
lbl_fn_80038CA8_00003E04:
    cmpwi r3, 0x5
    bne lbl_fn_80038CA8_00003E1C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_80038CA8_00003E28
lbl_fn_80038CA8_00003E1C:
    li r3, -0x1
    b lbl_fn_80038CA8_00003E28
lbl_fn_80038CA8_00003E24:
    li r3, -0x1
lbl_fn_80038CA8_00003E28:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80038D90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r5, r6, lbl_807C6A40@l
    li r7, 0x5a
    li r4, 0x3c
    stw r31, 0xc(r1)
    li r0, 0x64
    li r31, 0x1
    stw r7, 0x18(r5)
    lwz r3, lbl_807C68C0@l(r3)
    stw r4, 0x24(r5)
    stw r0, 0x28(r5)
    stw r31, lbl_807C6A40@l(r6)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80038D90_00003E8C
    li r31, 0x7
lbl_fn_80038D90_00003E8C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80038DF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807C68C0@l
    stw r31, 0xc(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80038DF8_00003EDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80038DF8_00003EE0
lbl_fn_80038DF8_00003EDC:
    li r0, -0x1
lbl_fn_80038DF8_00003EE0:
    cmpwi r0, 0x6
    bne lbl_fn_80038DF8_00003F68
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_80038DF8_00003F14
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80038DF8_00003F6C
lbl_fn_80038DF8_00003F14:
    cmpwi r3, 0x1
    bne lbl_fn_80038DF8_00003F2C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80038DF8_00003F6C
lbl_fn_80038DF8_00003F2C:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_80038DF8_00003F48
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_80038DF8_00003F6C
lbl_fn_80038DF8_00003F48:
    cmpwi r3, 0x4
    bne lbl_fn_80038DF8_00003F60
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_80038DF8_00003F6C
lbl_fn_80038DF8_00003F60:
    li r3, -0x1
    b lbl_fn_80038DF8_00003F6C
lbl_fn_80038DF8_00003F68:
    li r3, -0x1
lbl_fn_80038DF8_00003F6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80038ED4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x44(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    xoris r0, r4, 0x8000
    lfs f2, 0x1c(r5)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80038ED4_00004010
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x4
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80038ED4_00004098
lbl_fn_80038ED4_00004010:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80038ED4_00004094
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80038ED4_00004054
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80038ED4_00004054:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80038ED4_00004098
lbl_fn_80038ED4_00004094:
    li r0, -0x1
lbl_fn_80038ED4_00004098:
    cmpwi r0, 0x5
    bne lbl_fn_80038ED4_000040B4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80038ED4_000040D4
lbl_fn_80038ED4_000040B4:
    cmpwi r0, 0x7
    bne lbl_fn_80038ED4_000040D0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80038ED4_000040D4
lbl_fn_80038ED4_000040D0:
    li r3, -0x1
lbl_fn_80038ED4_000040D4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80039040(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C6A40@ha
    addi r4, r30, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_80039040_0000412C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80039040_00004274
lbl_fn_80039040_0000412C:
    cmpwi r3, 0x1
    bne lbl_fn_80039040_00004170
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0xf
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0xc
    b lbl_fn_80039040_00004274
lbl_fn_80039040_00004170:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    slwi r0, r4, 1
    lfd f1, lbl_8072FF60@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80039040_000041BC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_80039040_00004208
lbl_fn_80039040_000041BC:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80039040_00004204
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r0, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x5
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x8
    b lbl_fn_80039040_00004208
lbl_fn_80039040_00004204:
    li r0, -0x1
lbl_fn_80039040_00004208:
    cmpwi r0, 0x6
    bne lbl_fn_80039040_00004254
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_80039040_00004230
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80039040_00004274
lbl_fn_80039040_00004230:
    cmpwi r3, 0x6
    bne lbl_fn_80039040_0000424C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80039040_00004274
lbl_fn_80039040_0000424C:
    li r3, -0x1
    b lbl_fn_80039040_00004274
lbl_fn_80039040_00004254:
    cmpwi r0, 0x8
    bne lbl_fn_80039040_00004270
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80039040_00004274
lbl_fn_80039040_00004270:
    li r3, -0x1
lbl_fn_80039040_00004274:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800391E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800391E0_00004338
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800391E0_000042EC
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800391E0_000042EC:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_800391E0_0000433C
lbl_fn_800391E0_00004338:
    li r0, -0x1
lbl_fn_800391E0_0000433C:
    cmpwi r0, 0x5
    bne lbl_fn_800391E0_00004358
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_800391E0_0000435C
lbl_fn_800391E0_00004358:
    li r3, -0x1
lbl_fn_800391E0_0000435C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800392C8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    stw r30, 0x68(r1)
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_800392C8_000043E0
    li r0, 0x0
    stw r0, 0x54(r1)
    addi r4, r1, 0x48
    addi r5, r1, 0x4c
    stw r0, 0x50(r1)
    addi r6, r1, 0x50
    addi r7, r1, 0x54
    li r3, 0xf
    stw r0, 0x4c(r1)
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0xc
    b lbl_fn_800392C8_00004628
lbl_fn_800392C8_000043E0:
    cmpwi r3, 0xa
    bne lbl_fn_800392C8_000043F8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_800392C8_00004628
lbl_fn_800392C8_000043F8:
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_800392C8_00004464
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800392C8_0000445C
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r8, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x4
    stw r8, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x5
    b lbl_fn_800392C8_0000449C
lbl_fn_800392C8_0000445C:
    li r0, -0x1
    b lbl_fn_800392C8_0000449C
lbl_fn_800392C8_00004464:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
lbl_fn_800392C8_0000449C:
    cmpwi r0, 0x5
    bne lbl_fn_800392C8_000044B8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_800392C8_00004628
lbl_fn_800392C8_000044B8:
    cmpwi r0, 0x1
    bne lbl_fn_800392C8_000044D4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800392C8_00004628
lbl_fn_800392C8_000044D4:
    lis r5, lbl_807C68C0@ha
    lis r31, lbl_807C6A40@ha
    addi r30, r5, lbl_807C68C0@l
    addi r3, r31, lbl_807C6A40@l
    lwz r4, 0xc(r30)
    lwz r0, 0x18(r3)
    cmpw r4, r0
    bge lbl_fn_800392C8_0000456C
    lwz r4, 0x30(r30)
    lis r0, 0x4330
    stw r0, 0x58(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x5c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_800392C8_00004564
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x4
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_800392C8_00004628
lbl_fn_800392C8_00004564:
    li r3, -0x1
    b lbl_fn_800392C8_00004628
lbl_fn_800392C8_0000456C:
    lwz r4, 0x34(r30)
    lis r0, 0x4330
    stw r0, 0x58(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x5c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_800392C8_00004624
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800392C8_000045CC
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_800392C8_000045CC
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_800392C8_000045D0
lbl_fn_800392C8_000045CC:
    li r0, 0x0
lbl_fn_800392C8_000045D0:
    cmpwi r0, 0x0
    beq lbl_fn_800392C8_00004624
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x14(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x8
    stw r8, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0xc(r1)
    li r3, 0x2
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800392C8_00004628
lbl_fn_800392C8_00004624:
    li r3, -0x1
lbl_fn_800392C8_00004628:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80039594(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80039594_00004668
    li r0, -0x1
    b lbl_fn_80039594_00004674
lbl_fn_80039594_00004668:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80039594_00004674:
    cmpwi r0, 0x1
    bne lbl_fn_80039594_000046BC
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80039594_000046C0
lbl_fn_80039594_000046BC:
    li r3, -0x1
lbl_fn_80039594_000046C0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80039624(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x1c(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80039624_000046FC
    li r0, -0x1
    b lbl_fn_80039624_00004708
lbl_fn_80039624_000046FC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80039624_00004708:
    cmpwi r0, 0x1
    bne lbl_fn_80039624_00004718
    li r3, -0x1
    b lbl_fn_80039624_000047F4
lbl_fn_80039624_00004718:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80039624_000047F0
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80039624_000047E8
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80039624_00004794
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0xf
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0xc
    b lbl_fn_80039624_000047F4
lbl_fn_80039624_00004794:
    cmpwi r3, 0xa
    bne lbl_fn_80039624_000047AC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80039624_000047F4
lbl_fn_80039624_000047AC:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_80039624_000047C8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_80039624_000047F4
lbl_fn_80039624_000047C8:
    cmpwi r3, 0x4
    bne lbl_fn_80039624_000047E0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_80039624_000047F4
lbl_fn_80039624_000047E0:
    li r3, -0x1
    b lbl_fn_80039624_000047F4
lbl_fn_80039624_000047E8:
    li r3, -0x1
    b lbl_fn_80039624_000047F4
lbl_fn_80039624_000047F0:
    li r3, -0x1
lbl_fn_80039624_000047F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003975C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    stw r0, 0x54(r1)
    addi r4, r5, lbl_807C68C0@l
    stw r31, 0x4c(r1)
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    stw r30, 0x48(r1)
    lwz r4, 0x58(r4)
    lwz r0, 0x28(r3)
    cmpw r4, r0
    blt lbl_fn_8003975C_00004878
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x0
    stw r0, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_8003975C_0000499C
lbl_fn_8003975C_00004878:
    lwz r30, lbl_807C68C0@l(r5)
    mr r3, r30
    bl fn_8001BF64
    cmpwi r3, 0x0
    ble lbl_fn_8003975C_000048BC
    mr r3, r30
    bl fn_8001BF58
    cmpwi r3, 0x0
    beq lbl_fn_8003975C_000048AC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0xa
    b lbl_fn_8003975C_000048C0
lbl_fn_8003975C_000048AC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
    b lbl_fn_8003975C_000048C0
lbl_fn_8003975C_000048BC:
    li r0, -0x1
lbl_fn_8003975C_000048C0:
    cmpwi r0, 0x1
    bne lbl_fn_8003975C_00004960
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1e
    blt lbl_fn_8003975C_00004958
    lwz r4, 0x30(r5)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8003975C_00004950
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x5
    stw r0, 0x1c(r1)
    stw r31, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8003975C_0000499C
lbl_fn_8003975C_00004950:
    li r3, -0x1
    b lbl_fn_8003975C_0000499C
lbl_fn_8003975C_00004958:
    li r3, -0x1
    b lbl_fn_8003975C_0000499C
lbl_fn_8003975C_00004960:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
lbl_fn_8003975C_0000499C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80039908(void)
{
    nofralloc
    lis r5, lbl_807C68C0@ha
    lis r9, lbl_807C6A40@ha
    addi r5, r5, lbl_807C68C0@l
    li r0, 0x1
    addi r8, r9, lbl_807C6A40@l
    lwz r10, 0x7c(r5)
    lwz r7, 0x80(r5)
    li r4, 0x0
    lwz r6, 0x84(r5)
    li r3, 0x1
    lwz r5, 0x88(r5)
    stw r10, 0x1c(r8)
    stw r7, 0x20(r8)
    stw r6, 0x24(r8)
    stw r5, 0x28(r8)
    stw r4, 0x3c(r8)
    stw r0, lbl_807C6A40@l(r9)
    blr
}
