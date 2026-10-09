#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void fn_800A5920(void);
extern void fn_800A59F0(void);
extern void fn_800A5AA4(void);
extern void fn_800DD3FC(void);
extern void fn_80232B7C(void);
extern void fn_80239798(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370174(void);
extern void fn_8037D4C0(void);
extern void fn_804AC83C(void);
extern void fn_804ACD10(void);
extern void fn_804ACE68(void);
extern void fn_804AD1EC(void);
extern void fn_804AE3BC(void);
extern void fn_804BA350(void);
extern void fn_804D818C(void);
extern void fn_805075C8(void);
extern void fn_8050A5F0(void);
extern void fn_8050C0B8(void);
extern void fn_8050C12C(void);
extern void fn_8050C16C(void);
extern void fn_8050C7F4(void);
extern void fn_8050DDE0(void);
extern void fn_8050E098(void);
extern void fn_80624D40(void);
extern void fn_80698828(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 lbl_807C8AE8[];

/* Small data declarations */
extern u32 lbl_8087E1C4;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F448;
extern u32 lbl_8087F588;
extern u32 lbl_8087F5A4;
extern u32 lbl_8087F5B8;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_80887570;
extern u32 lbl_80887574;
extern u32 lbl_80887590;
extern u32 lbl_808875B0;
extern u32 lbl_808875B4;
extern u32 lbl_808875C0;
extern u32 lbl_808875C4;
extern u32 lbl_808875C8;
extern u32 lbl_808875D0;
extern u32 lbl_808875D8;
extern u32 lbl_80887650;
extern u32 lbl_80887654;
extern u32 lbl_80887658;
extern u32 lbl_8088765C;
extern u32 lbl_80887660;
extern u32 lbl_80887664;
extern u32 lbl_80887668;
extern u32 lbl_8088766C;
extern u32 lbl_80887670;
extern u32 lbl_80887674;

/* Function declarations */
void fn_804FA7CC(void);
void fn_804FA890(void);
void fn_804FA8EC(void);
void fn_804FA94C(void);
void fn_804FAA80(void);
void fn_804FAB44(void);
void fn_804FAD4C(void);
void fn_804FAF4C(void);
void fn_804FB224(void);
void fn_804FB474(void);
void fn_804FB534(void);
void fn_804FB554(void);
void fn_804FB624(void);
void fn_804FB66C(void);
void fn_804FB678(void);
void fn_804FB96C(void);
void fn_804FC014(void);
void fn_804FC0D8(void);

asm void fn_804FA7CC(void)
{
    nofralloc
    cmplwi r4, 0x1
    bgt lbl_fn_804FA7CC_0000005C
    cmpwi r5, 0x0
    blt lbl_fn_804FA7CC_0000003C
    cmpwi r5, 0x9
    bge lbl_fn_804FA7CC_0000003C
    addi r0, r5, 0x2b
    lwz r3, lbl_8087F86C
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x0
    bnelr
    la r3, lbl_808813D0
    blr
lbl_fn_804FA7CC_0000003C:
    cmpwi r5, 0x9
    bne lbl_fn_804FA7CC_000000B8
    lwz r3, lbl_8087F86C
    lwz r3, 0x19c(r3)
    cmpwi r3, 0x0
    bnelr
    la r3, lbl_808813D0
    blr
lbl_fn_804FA7CC_0000005C:
    cmpwi r4, 0x2
    bne lbl_fn_804FA7CC_000000B8
    cmpwi r5, 0x0
    blt lbl_fn_804FA7CC_00000098
    cmpwi r5, 0x5
    bge lbl_fn_804FA7CC_00000098
    addi r0, r5, 0x38
    lwz r3, lbl_8087F86C
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x0
    bnelr
    la r3, lbl_808813D0
    blr
lbl_fn_804FA7CC_00000098:
    cmpwi r5, 0x5
    bne lbl_fn_804FA7CC_000000B8
    lwz r3, lbl_8087F86C
    lwz r3, 0x19c(r3)
    cmpwi r3, 0x0
    bnelr
    la r3, lbl_808813D0
    blr
lbl_fn_804FA7CC_000000B8:
    la r3, lbl_8087E1C4
    addi r3, r3, 0x24e
    blr
}

asm void fn_804FA890(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x610
    stw r0, 0x14(r1)
    bl fn_805075C8
    cmpwi r3, 0x0
    beq lbl_fn_804FA890_00000108
    lwz r0, 0x0(r3)
    lwz r3, lbl_8087F86C
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804FA890_00000100
    b lbl_fn_804FA890_00000110
lbl_fn_804FA890_00000100:
    la r3, lbl_808813D0
    b lbl_fn_804FA890_00000110
lbl_fn_804FA890_00000108:
    la r3, lbl_8087E1C4
    addi r3, r3, 0x24e
lbl_fn_804FA890_00000110:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FA8EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x610
    stw r0, 0x14(r1)
    bl fn_805075C8
    cmpwi r3, 0x0
    beq lbl_fn_804FA8EC_00000168
    lwz r3, 0x0(r3)
    lwz r4, lbl_8087F86C
    addi r0, r3, 0x15
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804FA8EC_00000160
    b lbl_fn_804FA8EC_00000170
lbl_fn_804FA8EC_00000160:
    la r3, lbl_808813D0
    b lbl_fn_804FA8EC_00000170
lbl_fn_804FA8EC_00000168:
    la r3, lbl_8087E1C4
    addi r3, r3, 0x24e
lbl_fn_804FA8EC_00000170:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FA94C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x2
    li r3, 0x1039
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lbz r0, lbl_8087F5F8
    sth r6, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804FA94C_000001E0
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804FA94C_000001E0:
    lwz r4, lbl_8087F628
    li r31, 0x0
    li r0, 0x3
    stw r31, lbl_8087F5FC
    addis r3, r4, 0x1
    addi r30, r1, 0xc
    sth r0, 0x8(r1)
    stb r28, 0xc(r1)
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FA94C_00000228
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FA94C_0000021C
    b lbl_fn_804FA94C_0000022C
lbl_fn_804FA94C_0000021C:
    bl fn_806B1250
    clrlwi r31, r3, 24
    b lbl_fn_804FA94C_0000022C
lbl_fn_804FA94C_00000228:
    li r31, 0x0
lbl_fn_804FA94C_0000022C:
    bl fn_804AE3BC
    mr r6, r30
    clrlwi r4, r31, 24
    li r5, 0x1039
    li r7, 0x1
    bl fn_8050E098
    cmplwi r29, 0x1
    bne lbl_fn_804FA94C_00000294
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FA94C_00000280
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FA94C_00000274
    li r31, 0x0
    b lbl_fn_804FA94C_00000284
lbl_fn_804FA94C_00000274:
    bl fn_806B1250
    clrlwi r31, r3, 24
    b lbl_fn_804FA94C_00000284
lbl_fn_804FA94C_00000280:
    li r31, 0x0
lbl_fn_804FA94C_00000284:
    bl fn_804AE3BC
    clrlwi r4, r31, 24
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804FA94C_00000294:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804FAA80(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r6, 0x2
    li r3, 0x1008
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    lbz r0, lbl_8087F5F8
    sth r6, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804FAA80_00000310
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804FAA80_00000310:
    li r3, 0x0
    li r0, 0x22
    stw r3, lbl_8087F5FC
    addi r31, r1, 0xc
    sth r0, 0x8(r1)
    lwz r0, 0xd0(r30)
    stw r0, 0x28(r1)
    bl fn_804AE3BC
    mr r6, r31
    li r4, -0x1
    li r5, 0x1008
    li r7, 0x1
    bl fn_8050E098
    cmplwi r29, 0x1
    bne lbl_fn_804FAA80_0000035C
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804FAA80_0000035C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804FAB44(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r8, 0x2
    li r3, 0x1036
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    lbz r0, lbl_8087F5F8
    sth r8, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804FAB44_000003D4
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804FAB44_000003D4:
    li r4, 0x0
    li r0, 0x4
    stw r4, lbl_8087F5FC
    cmpwi r29, 0x0
    addi r31, r1, 0xc
    sth r0, 0x8(r1)
    lbz r3, 0xd52(r28)
    addi r0, r3, 0x1
    stb r0, 0xd52(r28)
    stb r3, 0xc(r1)
    stb r27, 0xd(r1)
    beq lbl_fn_804FAB44_000004C8
    lwz r5, lbl_8087F628
    addis r3, r5, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FAB44_00000434
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FAB44_00000428
    b lbl_fn_804FAB44_00000438
lbl_fn_804FAB44_00000428:
    bl fn_806B1250
    clrlwi r4, r3, 24
    b lbl_fn_804FAB44_00000438
lbl_fn_804FAB44_00000434:
    li r4, 0x0
lbl_fn_804FAB44_00000438:
    lwz r7, lbl_8087F610
    li r0, 0x20
    lbz r5, 0xc(r1)
    li r3, 0x0
    mr r6, r7
    mtctr r0
lbl_fn_804FAB44_00000450:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    bne lbl_fn_804FAB44_0000046C
    mulli r0, r3, 0x18
    add r3, r7, r0
    addi r6, r3, 0x48
    b lbl_fn_804FAB44_0000047C
lbl_fn_804FAB44_0000046C:
    addi r6, r6, 0x18
    addi r3, r3, 0x1
    bdnz lbl_fn_804FAB44_00000450
    li r6, 0x0
lbl_fn_804FAB44_0000047C:
    cmpwi r6, 0x0
    bne lbl_fn_804FAB44_0000048C
    li r3, 0x0
    b lbl_fn_804FAB44_000004B0
lbl_fn_804FAB44_0000048C:
    li r0, 0x1
    stw r0, 0x0(r6)
    li r3, 0x0
    stw r3, 0x4(r6)
    li r0, 0x96
    li r3, 0x1
    stb r4, 0x14(r6)
    stw r0, 0x8(r6)
    stb r5, 0x15(r6)
lbl_fn_804FAB44_000004B0:
    cmpwi r3, 0x0
    bne lbl_fn_804FAB44_000004C0
    li r3, 0x0
    b lbl_fn_804FAB44_0000056C
lbl_fn_804FAB44_000004C0:
    lbz r0, 0xc(r1)
    stw r0, 0x0(r29)
lbl_fn_804FAB44_000004C8:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FAB44_000004FC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FAB44_000004F0
    li r29, 0x0
    b lbl_fn_804FAB44_00000500
lbl_fn_804FAB44_000004F0:
    bl fn_806B1250
    clrlwi r29, r3, 24
    b lbl_fn_804FAB44_00000500
lbl_fn_804FAB44_000004FC:
    li r29, 0x0
lbl_fn_804FAB44_00000500:
    bl fn_804AE3BC
    mr r6, r31
    clrlwi r4, r29, 24
    li r5, 0x1036
    li r7, 0x1
    bl fn_8050E098
    cmplwi r30, 0x1
    bne lbl_fn_804FAB44_00000568
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FAB44_00000554
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FAB44_00000548
    li r29, 0x0
    b lbl_fn_804FAB44_00000558
lbl_fn_804FAB44_00000548:
    bl fn_806B1250
    clrlwi r29, r3, 24
    b lbl_fn_804FAB44_00000558
lbl_fn_804FAB44_00000554:
    li r29, 0x0
lbl_fn_804FAB44_00000558:
    bl fn_804AE3BC
    clrlwi r4, r29, 24
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804FAB44_00000568:
    li r3, 0x1
lbl_fn_804FAB44_0000056C:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804FAD4C(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    stw r31, 0x41c(r1)
    stw r30, 0x418(r1)
    mr r30, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804FAD4C_00000768
    lwz r0, lbl_8087F588
    cmpwi r0, 0x0
    bne lbl_fn_804FAD4C_000005B4
    b lbl_fn_804FAD4C_00000768
lbl_fn_804FAD4C_000005B4:
    beq lbl_fn_804FAD4C_00000768
    cmpwi r4, -0x1
    li r31, 0x0
    beq lbl_fn_804FAD4C_000005E8
    lwz r3, lbl_8087F86C
    slwi r0, r4, 3
    add r3, r3, r0
    lwz r31, 0x4c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804FAD4C_000005E0
    b lbl_fn_804FAD4C_000006FC
lbl_fn_804FAD4C_000005E0:
    la r31, lbl_808813D0
    b lbl_fn_804FAD4C_000006FC
lbl_fn_804FAD4C_000005E8:
    bl fn_80624D40
    cmpwi r3, 0x0
    beq lbl_fn_804FAD4C_00000610
    lwz r3, lbl_8087F86C
    lwz r31, 0x4b4(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804FAD4C_00000608
    b lbl_fn_804FAD4C_000006FC
lbl_fn_804FAD4C_00000608:
    la r31, lbl_808813D0
    b lbl_fn_804FAD4C_000006FC
lbl_fn_804FAD4C_00000610:
    lwz r3, lbl_8087F628
    bl fn_8050C16C
    cmpwi r3, 0x0
    beq lbl_fn_804FAD4C_00000678
    lwz r3, lbl_8087F628
    lwz r4, lbl_8087F1E4
    addis r3, r3, 0x1
    lwz r0, -0x413c(r3)
    stw r0, 0x10(r1)
    lwz r31, 0xbb4(r4)
    cmpwi r31, 0x0
    beq lbl_fn_804FAD4C_00000644
    b lbl_fn_804FAD4C_00000648
lbl_fn_804FAD4C_00000644:
    la r31, lbl_808813D0
lbl_fn_804FAD4C_00000648:
    mr r3, r30
    addi r4, r1, 0x10
    li r5, 0x0
    bl fn_804FAF4C
    lwz r5, 0x10(r1)
    mr r6, r3
    mr r4, r31
    addi r3, r1, 0x18
    crclr 6
    bl fn_800DD3FC
    addi r31, r1, 0x18
    b lbl_fn_804FAD4C_000006FC
lbl_fn_804FAD4C_00000678:
    lwz r3, lbl_8087F628
    addis r4, r3, 0x1
    lwz r0, -0x4180(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804FAD4C_000006FC
    addi r4, r1, 0xc
    bl fn_8050C12C
    stw r3, 0x8(r1)
    mr r3, r30
    lwz r5, 0xc(r1)
    addi r4, r1, 0x8
    bl fn_804FAF4C
    lwz r5, 0x8(r1)
    mr r6, r3
    cmpwi r5, 0x2710
    blt lbl_fn_804FAD4C_000006E0
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x18
    lwz r4, 0xbb4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804FAD4C_000006D0
    b lbl_fn_804FAD4C_000006D4
lbl_fn_804FAD4C_000006D0:
    la r4, lbl_808813D0
lbl_fn_804FAD4C_000006D4:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804FAD4C_000006F8
lbl_fn_804FAD4C_000006E0:
    la r4, lbl_8087E1C4
    mr r5, r6
    addi r3, r1, 0x18
    addi r4, r4, 0x266
    crclr 6
    bl fn_800DD3FC
lbl_fn_804FAD4C_000006F8:
    addi r31, r1, 0x18
lbl_fn_804FAD4C_000006FC:
    cmpwi r31, 0x0
    bne lbl_fn_804FAD4C_0000071C
    lwz r3, lbl_8087F86C
    lwz r31, 0x51c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804FAD4C_00000718
    b lbl_fn_804FAD4C_0000071C
lbl_fn_804FAD4C_00000718:
    la r31, lbl_808813D0
lbl_fn_804FAD4C_0000071C:
    cmpwi r31, 0x0
    beq lbl_fn_804FAD4C_00000754
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887590
    li r5, 0x2
    bl fn_804AC83C
    lwz r3, lbl_8087F588
    bl fn_804ACE68
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r3, lbl_8087F588
    mr r4, r31
    bl fn_804AD1EC
lbl_fn_804FAD4C_00000754:
    lwz r3, lbl_8087F5A4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804FAD4C_00000768
    bl fn_8050C7F4
lbl_fn_804FAD4C_00000768:
    lwz r0, 0x424(r1)
    lwz r31, 0x41c(r1)
    lwz r30, 0x418(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_804FAF4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r27, r4
    mr r28, r5
    li r29, 0x0
    lwz r3, lbl_8087F628
    bl fn_8050C0B8
    addis r4, r30, 0x1
    li r0, -0x1
    stw r0, -0x68b0(r4)
    mr r31, r3
    lwz r0, 0x0(r27)
    cmpwi r0, 0x2710
    bge lbl_fn_804FAF4C_00000828
    cmpwi r0, 0x5
    bne lbl_fn_804FAF4C_000007E0
    mr r3, r28
    bl fn_80698828
    neg r0, r3
    stw r0, 0x0(r27)
    b lbl_fn_804FAF4C_00000824
lbl_fn_804FAF4C_000007E0:
    cmpwi r0, 0x7
    bne lbl_fn_804FAF4C_000007F4
    li r0, 0x8b
    stw r0, -0x68b0(r4)
    b lbl_fn_804FAF4C_00000824
lbl_fn_804FAF4C_000007F4:
    cmpwi r0, 0xf
    bne lbl_fn_804FAF4C_00000808
    li r0, 0xa1
    stw r0, -0x68b0(r4)
    b lbl_fn_804FAF4C_00000824
lbl_fn_804FAF4C_00000808:
    cmpwi r0, 0xd
    bne lbl_fn_804FAF4C_0000081C
    li r0, 0xa2
    stw r0, -0x68b0(r4)
    b lbl_fn_804FAF4C_00000824
lbl_fn_804FAF4C_0000081C:
    li r0, 0x99
    stw r0, -0x68b0(r4)
lbl_fn_804FAF4C_00000824:
    li r29, 0x1
lbl_fn_804FAF4C_00000828:
    lwz r4, 0x0(r27)
    cmpwi r4, 0x7149
    beq lbl_fn_804FAF4C_00000954
    bge lbl_fn_804FAF4C_00000890
    cmpwi r4, 0x5208
    bge lbl_fn_804FAF4C_00000868
    cmpwi r4, 0x4e85
    beq lbl_fn_804FAF4C_00000924
    bge lbl_fn_804FAF4C_00000858
    cmpwi r4, 0x4e84
    bge lbl_fn_804FAF4C_00000964
    b lbl_fn_804FAF4C_000009F8
lbl_fn_804FAF4C_00000858:
    cmpwi r4, 0x4e8e
    beq lbl_fn_804FAF4C_00000934
    bge lbl_fn_804FAF4C_00000914
    b lbl_fn_804FAF4C_00000904
lbl_fn_804FAF4C_00000868:
    cmpwi r4, 0x6590
    bge lbl_fn_804FAF4C_00000884
    cmpwi r4, 0x5dc0
    bge lbl_fn_804FAF4C_000009B4
    cmpwi r4, 0x59d8
    bge lbl_fn_804FAF4C_00000924
    b lbl_fn_804FAF4C_000009F8
lbl_fn_804FAF4C_00000884:
    cmpwi r4, 0x7148
    bge lbl_fn_804FAF4C_00000944
    b lbl_fn_804FAF4C_000009F8
lbl_fn_804FAF4C_00000890:
    lis r3, 0x1
    addi r0, r3, 0x3a2e
    cmpw r4, r0
    beq lbl_fn_804FAF4C_00000974
    bge lbl_fn_804FAF4C_000008E0
    subi r0, r3, 0x3cb0
    cmpw r4, r0
    bge lbl_fn_804FAF4C_000008C4
    cmpwi r4, 0x7d00
    bge lbl_fn_804FAF4C_000009F8
    cmpwi r4, 0x7918
    bge lbl_fn_804FAF4C_000009E8
    b lbl_fn_804FAF4C_000009F8
lbl_fn_804FAF4C_000008C4:
    addi r0, r3, 0x1170
    cmpw r4, r0
    bge lbl_fn_804FAF4C_000009B4
    subi r0, r3, 0x15a0
    cmpw r4, r0
    bge lbl_fn_804FAF4C_000009A4
    b lbl_fn_804FAF4C_00000964
lbl_fn_804FAF4C_000008E0:
    addi r0, r3, 0x3a30
    cmpw r4, r0
    beq lbl_fn_804FAF4C_00000994
    blt lbl_fn_804FAF4C_00000984
    lis r3, 0x2
    subi r0, r3, 0x7960
    cmpw r4, r0
    bge lbl_fn_804FAF4C_000009F8
    b lbl_fn_804FAF4C_000009B4
lbl_fn_804FAF4C_00000904:
    addis r3, r30, 0x1
    li r0, 0x90
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_00000914:
    addis r3, r30, 0x1
    li r0, 0x90
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_00000924:
    addis r3, r30, 0x1
    li r0, 0x91
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_00000934:
    addis r3, r30, 0x1
    li r0, 0x92
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_00000944:
    addis r3, r30, 0x1
    li r0, 0x93
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_00000954:
    addis r3, r30, 0x1
    li r0, 0x94
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_00000964:
    addis r3, r30, 0x1
    li r0, 0x95
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_00000974:
    addis r3, r30, 0x1
    li r0, 0x96
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_00000984:
    addis r3, r30, 0x1
    li r0, 0x97
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_00000994:
    addis r3, r30, 0x1
    li r0, 0x98
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_000009A4:
    addis r3, r30, 0x1
    li r0, 0x99
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_000009B4:
    cmpwi r31, 0x4
    addis r3, r30, 0x1
    li r0, 0x99
    stw r0, -0x68b0(r3)
    bne lbl_fn_804FAF4C_000009D4
    li r0, 0x9c
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_000009D4:
    cmpwi r31, 0x1
    bgt lbl_fn_804FAF4C_00000A0C
    li r0, 0x9a
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_000009E8:
    addis r3, r30, 0x1
    li r0, 0x99
    stw r0, -0x68b0(r3)
    b lbl_fn_804FAF4C_00000A0C
lbl_fn_804FAF4C_000009F8:
    cmpwi r29, 0x0
    bne lbl_fn_804FAF4C_00000A0C
    addis r3, r30, 0x1
    li r0, 0x99
    stw r0, -0x68b0(r3)
lbl_fn_804FAF4C_00000A0C:
    addis r3, r30, 0x1
    lwz r0, -0x68b0(r3)
    cmpwi r0, -0x1
    bne lbl_fn_804FAF4C_00000A24
    la r3, lbl_8087E1C4
    b lbl_fn_804FAF4C_00000A44
lbl_fn_804FAF4C_00000A24:
    lwz r3, lbl_8087F86C
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804FAF4C_00000A40
    b lbl_fn_804FAF4C_00000A44
lbl_fn_804FAF4C_00000A40:
    la r3, lbl_808813D0
lbl_fn_804FAF4C_00000A44:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804FB224(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0xc
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_804FB224_00000C48
    lwz r0, 0x4(r3)
    cmpwi r0, 0xc
    beq lbl_fn_804FB224_00000C48
    lwz r3, lbl_8087F610
    li r4, -0x1
    li r0, 0xe2d
    li r31, 0x0
    stw r4, 0x504(r3)
    lwz r3, lbl_8087F610
    sth r0, 0x508(r3)
    lwz r3, lbl_8087F610
    sth r31, 0x50a(r3)
    lwz r4, lbl_8087F628
    lwz r30, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FB224_00000AE8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FB224_00000ADC
    b lbl_fn_804FB224_00000B04
lbl_fn_804FB224_00000ADC:
    bl fn_806B0E30
    clrlwi r31, r3, 24
    b lbl_fn_804FB224_00000B04
lbl_fn_804FB224_00000AE8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FB224_00000AF8
    b lbl_fn_804FB224_00000B00
lbl_fn_804FB224_00000AF8:
    bl fn_806A8E40
    mr r31, r3
lbl_fn_804FB224_00000B00:
    clrlwi r31, r31, 24
lbl_fn_804FB224_00000B04:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FB224_00000B38
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FB224_00000B2C
    li r0, 0x0
    b lbl_fn_804FB224_00000B3C
lbl_fn_804FB224_00000B2C:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804FB224_00000B3C
lbl_fn_804FB224_00000B38:
    li r0, 0x0
lbl_fn_804FB224_00000B3C:
    clrlwi r3, r31, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804FB224_00000BE4
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FB224_00000B80
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FB224_00000B74
    li r0, 0x0
    b lbl_fn_804FB224_00000B84
lbl_fn_804FB224_00000B74:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804FB224_00000B84
lbl_fn_804FB224_00000B80:
    li r0, 0x0
lbl_fn_804FB224_00000B84:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804FB224_00000BCC
lbl_fn_804FB224_00000B9C:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804FB224_00000BC4
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804FB224_00000BC4
    b lbl_fn_804FB224_00000BD0
lbl_fn_804FB224_00000BC4:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804FB224_00000B9C
lbl_fn_804FB224_00000BCC:
    li r5, 0x0
lbl_fn_804FB224_00000BD0:
    cmpwi r5, 0x0
    beq lbl_fn_804FB224_00000BE4
    lwz r0, 0xd0(r5)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0xd0(r5)
lbl_fn_804FB224_00000BE4:
    lwz r3, lbl_8087F610
    li r4, 0x12c
    li r0, 0x0
    addis r3, r3, 0x1
    stw r4, -0x68a4(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r0, -0x6610(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r0, -0x660f(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r0, -0x660e(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r0, -0x660d(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r0, -0x6664(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r0, -0x6663(r3)
    lwz r3, lbl_8087F628
    bl fn_8050A5F0
lbl_fn_804FB224_00000C48:
    cmpwi r29, 0xb
    bne lbl_fn_804FB224_00000C74
    lwz r5, 0x4(r28)
    lwz r3, lbl_8087F610
    subi r4, r5, 0xb
    subfic r0, r5, 0xb
    or r0, r4, r0
    addis r3, r3, 0x1
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 26, 29
    stw r0, -0x6614(r3)
lbl_fn_804FB224_00000C74:
    lwz r0, 0x4(r28)
    cmpw r0, r29
    beq lbl_fn_804FB224_00000C84
    stw r29, 0x4(r28)
lbl_fn_804FB224_00000C84:
    stw r29, 0x0(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804FB474(void)
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
    lwz r6, lbl_8087F628
    lwz r0, 0x25c(r6)
    cmpwi r0, 0x1
    bne lbl_fn_804FB474_00000CFC
    lwz r3, lbl_8087F5B8
    cmpwi r3, 0x0
    beq lbl_fn_804FB474_00000CFC
    lwz r0, 0x88(r3)
    cmpwi r0, 0x8
    bne lbl_fn_804FB474_00000CFC
    li r4, 0x9
    bl fn_804BA350
lbl_fn_804FB474_00000CFC:
    cmpwi r30, -0x2
    addis r3, r29, 0x1
    li r0, -0x1
    stw r0, -0x68b0(r3)
    bne lbl_fn_804FB474_00000D1C
    mr r3, r29
    li r4, -0x1
    bl fn_804FAD4C
lbl_fn_804FB474_00000D1C:
    addis r3, r29, 0x1
    lwz r3, -0x68b0(r3)
    subi r0, r3, 0xa1
    cmplwi r0, 0x1
    bgt lbl_fn_804FB474_00000D34
    li r31, 0x9
lbl_fn_804FB474_00000D34:
    addi r3, r29, 0x4fc
    li r4, 0x2b
    bl fn_804FB224
    addis r3, r29, 0x1
    stw r30, -0x68ac(r3)
    stw r31, -0x68a8(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804FB534(void)
{
    nofralloc
    lwz r4, lbl_8087F628
    lwz r0, 0xc8(r4)
    cmpwi r0, 0x8
    bltlr
    addis r3, r3, 0x1
    li r0, 0x1
    stw r0, -0x6894(r3)
    blr
}

asm void fn_804FB554(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r4, r3, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, -0x6610(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804FB554_00000DE4
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A5920
    cmpwi r3, 0x0
    bne lbl_fn_804FB554_00000DD8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A59F0
    cmpwi r3, 0x0
    beq lbl_fn_804FB554_00000DE4
lbl_fn_804FB554_00000DD8:
    addis r3, r31, 0x1
    li r0, 0x1
    stb r0, -0x6610(r3)
lbl_fn_804FB554_00000DE4:
    addis r3, r31, 0x1
    lbz r0, -0x660f(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FB554_00000E14
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A59F0
    cmpwi r3, 0x0
    beq lbl_fn_804FB554_00000E14
    addis r3, r31, 0x1
    li r0, 0x1
    stb r0, -0x660f(r3)
lbl_fn_804FB554_00000E14:
    addis r3, r31, 0x1
    lbz r0, -0x660e(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FB554_00000E44
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A5AA4
    cmpwi r3, 0x0
    beq lbl_fn_804FB554_00000E44
    addis r3, r31, 0x1
    li r0, 0x1
    stb r0, -0x660e(r3)
lbl_fn_804FB554_00000E44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FB624(void)
{
    nofralloc
    cmpwi r4, -0x1
    bne lbl_fn_804FB624_00000E78
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_804FB624_00000E74
    lwz r4, 0x540(r3)
    b lbl_fn_804FB624_00000E78
lbl_fn_804FB624_00000E74:
    li r4, 0x0
lbl_fn_804FB624_00000E78:
    cmpwi r4, 0x2
    bne lbl_fn_804FB624_00000E88
    li r3, 0x7
    b lbl_fn_804FB624_00000E98
lbl_fn_804FB624_00000E88:
    cmpwi r4, 0x1
    li r3, 0x6
    bne lbl_fn_804FB624_00000E98
    li r3, 0x8
lbl_fn_804FB624_00000E98:
    subi r3, r3, 0x2
    blr
}

asm void fn_804FB66C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x5a4(r3)
    blr
}

asm void fn_804FB678(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lfs f7, lbl_80887570
    li r5, 0x0
    lfs f8, lbl_80887590
    addi r6, r1, 0x78
    stfs f8, 0x78(r1)
    addi r4, r1, 0xa4
    addi r8, r1, 0x68
    addi r7, r1, 0xb4
    stw r0, 0x104(r1)
    addi r10, r1, 0x58
    addi r9, r1, 0xc4
    addi r12, r1, 0x48
    stw r31, 0xfc(r1)
    addi r11, r1, 0xd4
    li r0, 0x1
    lfs f6, lbl_808875B0
    stfs f7, 0x7c(r1)
    mr r31, r3
    lfs f0, lbl_80887574
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f7, 0x80(r1)
    stfs f7, 0x84(r1)
    psq_l f2, 0x8(r6), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f7, 0x70(r1)
    stfs f7, 0x74(r1)
    psq_l f2, 0x8(r8), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    stfs f7, 0x58(r1)
    stfs f7, 0x5c(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    psq_l f2, 0x8(r10), 0, 0
    stfs f7, 0x48(r1)
    stfs f7, 0x4c(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f7, 0x50(r1)
    stfs f7, 0x54(r1)
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stw r30, 0xf8(r1)
    stw r5, 0xe4(r1)
    stw r5, 0xe8(r1)
    stfs f8, 0xec(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_st f2, 0x8(r11), 0, 0
    stw r0, 0xa0(r1)
    stfs f6, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f6, 0xb8(r1)
    stfs f0, 0xbc(r1)
    lwz r30, lbl_8087EFA8
    addis r8, r3, 0x1
    lfs f5, lbl_808875B4
    mr r12, r8
    stw r0, 0x324(r30)
    addi r6, r1, 0x94
    psq_l f1, 0x0(r4), 0, 0
    addi r10, r1, 0x88
    psq_st f1, 0x328(r30), 0, 0
    subi r12, r12, 0x6878
    psq_l f2, 0x8(r4), 0, 0
    mr r4, r8
    psq_st f2, 0x330(r30), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f7, 0xc0(r1)
    lfs f4, lbl_808875C0
    psq_st f1, 0x338(r30), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f0, 0xc4(r1)
    lfs f3, lbl_808875C4
    stfs f0, 0xc8(r1)
    lfs f0, lbl_808875C8
    psq_st f2, 0x340(r30), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f6, 0xcc(r1)
    stfs f7, 0xd0(r1)
    psq_st f1, 0x348(r30), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f7, 0xd4(r1)
    stfs f7, 0xd8(r1)
    psq_st f2, 0x350(r30), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f7, 0xdc(r1)
    stfs f7, 0xe0(r1)
    psq_st f1, 0x358(r30), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    psq_st f2, 0x360(r30), 0, 0
    fmr f2, f7
    stw r5, 0x368(r30)
    stw r5, 0x36c(r30)
    stfs f8, 0x370(r30)
    lwz r7, lbl_8087EFA8
    stfs f7, 0x94(r1)
    stw r5, 0xd4(r7)
    lwz r7, lbl_8087EFA8
    stfs f4, 0x98(r1)
    stw r5, 0x54(r7)
    psq_l f1, 0x0(r6), 0, 0
    lwz r5, lbl_8087EFA8
    stfs f7, 0x88(r1)
    stfs f5, 0x3c(r5)
    stfs f5, 0x40(r5)
    stfs f5, 0x44(r5)
    stfs f8, 0x48(r5)
    stfs f2, -0x687c(r8)
    fmr f2, f3
    subi r8, r8, 0x6884
    stfs f4, 0x8c(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0x8(r12)
    stfs f0, -0x683c(r4)
    lwz r0, lbl_8087F3C0
    stfs f5, 0x38(r1)
    cmpwi r0, 0x0
    stfs f5, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x9c(r1)
    stfs f3, 0x90(r1)
    bne lbl_fn_804FB678_000010DC
    li r4, 0x240
    li r5, 0x480
    li r6, 0x8
    li r7, 0x180
    bl fn_80239798
lbl_fn_804FB678_000010DC:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80887570
    addis r4, r31, 0x1
    lfs f1, lbl_80887590
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r5, 0x0
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x6698
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_804FB678_00001188
    lfs f1, lbl_808875D0
    li r4, 0x548
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_804FB678_00001188:
    lwz r0, 0x104(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_804FB96C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x540(r3)
    stw r31, 0xc(r1)
    mr r31, r4
    cmpwi r0, 0x2
    bne lbl_fn_804FB96C_000012E8
    lwz r3, 0x5e0(r3)
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_804FB96C_000011DC
    li r3, 0x0
    b lbl_fn_804FB96C_00001834
lbl_fn_804FB96C_000011DC:
    lwz r0, 0x880(r31)
    li r3, 0x1
    cmpwi r0, 0x2710
    bgt lbl_fn_804FB96C_000011F0
    li r3, 0x0
lbl_fn_804FB96C_000011F0:
    cmpwi r3, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_0000120C
    lfs f1, 0x7fc(r31)
    lfs f0, lbl_80887650
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_00001210
lbl_fn_804FB96C_0000120C:
    li r0, 0x1
lbl_fn_804FB96C_00001210:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_0000122C
    lfs f1, 0x800(r31)
    lfs f0, lbl_80887654
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_00001230
lbl_fn_804FB96C_0000122C:
    li r0, 0x1
lbl_fn_804FB96C_00001230:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_0000124C
    lfs f1, 0x804(r31)
    lfs f0, lbl_80887650
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_00001250
lbl_fn_804FB96C_0000124C:
    li r0, 0x1
lbl_fn_804FB96C_00001250:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_0000126C
    lfs f1, 0x808(r31)
    lfs f0, lbl_80887658
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_00001270
lbl_fn_804FB96C_0000126C:
    li r0, 0x1
lbl_fn_804FB96C_00001270:
    cmpwi r0, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001288
    lwz r0, 0x890(r31)
    cmpwi r0, 0xc8
    ble lbl_fn_804FB96C_0000128C
lbl_fn_804FB96C_00001288:
    li r3, 0x1
lbl_fn_804FB96C_0000128C:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000012A4
    lwz r0, 0x830(r31)
    cmpwi r0, 0x1
    ble lbl_fn_804FB96C_000012A8
lbl_fn_804FB96C_000012A4:
    li r3, 0x1
lbl_fn_804FB96C_000012A8:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000012C0
    lwz r0, 0x894(r31)
    cmpwi r0, 0x5
    ble lbl_fn_804FB96C_000012C4
lbl_fn_804FB96C_000012C0:
    li r3, 0x1
lbl_fn_804FB96C_000012C4:
    cmpwi r3, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_000012E0
    lfs f1, 0x984(r31)
    lfs f0, lbl_8088765C
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_000013F4
lbl_fn_804FB96C_000012E0:
    li r0, 0x1
    b lbl_fn_804FB96C_000013F4
lbl_fn_804FB96C_000012E8:
    cmpwi r0, 0x1
    bne lbl_fn_804FB96C_00001308
    lwz r0, 0x880(r4)
    li r3, 0x1
    cmpwi r0, 0x157c
    bgt lbl_fn_804FB96C_0000131C
    li r3, 0x0
    b lbl_fn_804FB96C_0000131C
lbl_fn_804FB96C_00001308:
    lwz r0, 0x880(r4)
    li r3, 0x1
    cmpwi r0, 0xfa0
    bgt lbl_fn_804FB96C_0000131C
    li r3, 0x0
lbl_fn_804FB96C_0000131C:
    cmpwi r3, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_00001338
    lfs f1, 0x7fc(r4)
    lfs f0, lbl_80887650
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_0000133C
lbl_fn_804FB96C_00001338:
    li r0, 0x1
lbl_fn_804FB96C_0000133C:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_00001358
    lfs f1, 0x800(r4)
    lfs f0, lbl_80887660
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_0000135C
lbl_fn_804FB96C_00001358:
    li r0, 0x1
lbl_fn_804FB96C_0000135C:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_00001378
    lfs f1, 0x804(r4)
    lfs f0, lbl_80887664
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_0000137C
lbl_fn_804FB96C_00001378:
    li r0, 0x1
lbl_fn_804FB96C_0000137C:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_00001398
    lfs f1, 0x808(r4)
    lfs f0, lbl_80887658
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_0000139C
lbl_fn_804FB96C_00001398:
    li r0, 0x1
lbl_fn_804FB96C_0000139C:
    cmpwi r0, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000013B4
    lwz r0, 0x890(r4)
    cmpwi r0, 0xfa
    ble lbl_fn_804FB96C_000013B8
lbl_fn_804FB96C_000013B4:
    li r3, 0x1
lbl_fn_804FB96C_000013B8:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000013D0
    lwz r0, 0x830(r4)
    cmpwi r0, 0x3
    ble lbl_fn_804FB96C_000013D4
lbl_fn_804FB96C_000013D0:
    li r3, 0x1
lbl_fn_804FB96C_000013D4:
    cmpwi r3, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_000013F0
    lfs f1, 0x984(r4)
    lfs f0, lbl_808875D8
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_000013F4
lbl_fn_804FB96C_000013F0:
    li r0, 0x1
lbl_fn_804FB96C_000013F4:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_00001410
    lfs f1, 0x8e4(r31)
    lfs f0, lbl_80887668
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_00001414
lbl_fn_804FB96C_00001410:
    li r0, 0x1
lbl_fn_804FB96C_00001414:
    cmpwi r0, 0x0
    li r3, 0x1
    bne lbl_fn_804FB96C_0000143C
    lfs f1, 0x568(r31)
    lfs f0, lbl_8088766C
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    bne lbl_fn_804FB96C_0000143C
    li r3, 0x0
lbl_fn_804FB96C_0000143C:
    cmpwi r3, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_00001458
    lfs f1, 0x814(r31)
    lfs f0, lbl_80887670
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_0000145C
lbl_fn_804FB96C_00001458:
    li r0, 0x1
lbl_fn_804FB96C_0000145C:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_00001478
    lfs f1, 0x888(r31)
    lfs f0, lbl_80887674
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_0000147C
lbl_fn_804FB96C_00001478:
    li r0, 0x1
lbl_fn_804FB96C_0000147C:
    cmpwi r0, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001498
    lwz r0, 0x898(r31)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_804FB96C_0000149C
lbl_fn_804FB96C_00001498:
    li r3, 0x1
lbl_fn_804FB96C_0000149C:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000014B8
    lwz r0, 0x898(r31)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_804FB96C_000014BC
lbl_fn_804FB96C_000014B8:
    li r3, 0x1
lbl_fn_804FB96C_000014BC:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000014D8
    lwz r0, 0x898(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_804FB96C_000014DC
lbl_fn_804FB96C_000014D8:
    li r3, 0x1
lbl_fn_804FB96C_000014DC:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000014F8
    lwz r0, 0x898(r31)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_804FB96C_000014FC
lbl_fn_804FB96C_000014F8:
    li r3, 0x1
lbl_fn_804FB96C_000014FC:
    cmpwi r3, 0x0
    li r4, 0x0
    bne lbl_fn_804FB96C_0000151C
    lwz r0, 0x898(r31)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_804FB96C_00001520
lbl_fn_804FB96C_0000151C:
    li r4, 0x1
lbl_fn_804FB96C_00001520:
    cmpwi r4, 0x0
    li r4, 0x0
    bne lbl_fn_804FB96C_00001540
    lwz r0, 0x898(r31)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_804FB96C_00001544
lbl_fn_804FB96C_00001540:
    li r4, 0x1
lbl_fn_804FB96C_00001544:
    cmpwi r4, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001560
    lwz r0, 0x7ec(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804FB96C_00001564
lbl_fn_804FB96C_00001560:
    li r3, 0x1
lbl_fn_804FB96C_00001564:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001580
    lwz r0, 0x7ec(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_804FB96C_00001584
lbl_fn_804FB96C_00001580:
    li r3, 0x1
lbl_fn_804FB96C_00001584:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000015A0
    lwz r0, 0x7ec(r31)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_804FB96C_000015A4
lbl_fn_804FB96C_000015A0:
    li r3, 0x1
lbl_fn_804FB96C_000015A4:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000015C0
    lwz r0, 0x7ec(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804FB96C_000015C4
lbl_fn_804FB96C_000015C0:
    li r3, 0x1
lbl_fn_804FB96C_000015C4:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_000015E0
    lwz r0, 0x7ec(r31)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_804FB96C_000015E4
lbl_fn_804FB96C_000015E0:
    li r3, 0x1
lbl_fn_804FB96C_000015E4:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001600
    lwz r0, 0x7ec(r31)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_804FB96C_00001604
lbl_fn_804FB96C_00001600:
    li r3, 0x1
lbl_fn_804FB96C_00001604:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001620
    lwz r0, 0x7ec(r31)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_804FB96C_00001624
lbl_fn_804FB96C_00001620:
    li r3, 0x1
lbl_fn_804FB96C_00001624:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001640
    lwz r0, 0x7ec(r31)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_804FB96C_00001644
lbl_fn_804FB96C_00001640:
    li r3, 0x1
lbl_fn_804FB96C_00001644:
    cmpwi r3, 0x0
    li r4, 0x0
    bne lbl_fn_804FB96C_00001664
    lwz r0, 0x7ec(r31)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_804FB96C_00001668
lbl_fn_804FB96C_00001664:
    li r4, 0x1
lbl_fn_804FB96C_00001668:
    cmpwi r4, 0x0
    li r4, 0x0
    bne lbl_fn_804FB96C_00001688
    lwz r0, 0x7ec(r31)
    rlwinm r3, r0, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_804FB96C_0000168C
lbl_fn_804FB96C_00001688:
    li r4, 0x1
lbl_fn_804FB96C_0000168C:
    cmpwi r4, 0x0
    li r4, 0x0
    bne lbl_fn_804FB96C_000016AC
    lwz r0, 0x7ec(r31)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_804FB96C_000016B0
lbl_fn_804FB96C_000016AC:
    li r4, 0x1
lbl_fn_804FB96C_000016B0:
    cmpwi r4, 0x0
    li r4, 0x0
    bne lbl_fn_804FB96C_000016D0
    lwz r0, 0x7ec(r31)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_804FB96C_000016D4
lbl_fn_804FB96C_000016D0:
    li r4, 0x1
lbl_fn_804FB96C_000016D4:
    cmpwi r4, 0x0
    li r4, 0x0
    bne lbl_fn_804FB96C_000016F4
    lwz r0, 0x7ec(r31)
    rlwinm r3, r0, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_804FB96C_000016F8
lbl_fn_804FB96C_000016F4:
    li r4, 0x1
lbl_fn_804FB96C_000016F8:
    cmpwi r4, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001714
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_804FB96C_00001718
lbl_fn_804FB96C_00001714:
    li r3, 0x1
lbl_fn_804FB96C_00001718:
    cmpwi r3, 0x0
    li r4, 0x0
    bne lbl_fn_804FB96C_00001738
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_804FB96C_0000173C
lbl_fn_804FB96C_00001738:
    li r4, 0x1
lbl_fn_804FB96C_0000173C:
    cmpwi r4, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001758
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_804FB96C_0000175C
lbl_fn_804FB96C_00001758:
    li r3, 0x1
lbl_fn_804FB96C_0000175C:
    cmpwi r3, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001774
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 30
    beq lbl_fn_804FB96C_00001778
lbl_fn_804FB96C_00001774:
    li r3, 0x1
lbl_fn_804FB96C_00001778:
    cmpwi r3, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_00001794
    lfs f1, 0x988(r31)
    lfs f0, lbl_80887574
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_00001798
lbl_fn_804FB96C_00001794:
    li r0, 0x1
lbl_fn_804FB96C_00001798:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_000017B4
    lfs f1, 0x98c(r31)
    lfs f0, lbl_80887574
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_000017B8
lbl_fn_804FB96C_000017B4:
    li r0, 0x1
lbl_fn_804FB96C_000017B8:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_000017D4
    lfs f1, 0x990(r31)
    lfs f0, lbl_80887574
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_000017D8
lbl_fn_804FB96C_000017D4:
    li r0, 0x1
lbl_fn_804FB96C_000017D8:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_000017F4
    lfs f1, 0x994(r31)
    lfs f0, lbl_80887574
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_000017F8
lbl_fn_804FB96C_000017F4:
    li r0, 0x1
lbl_fn_804FB96C_000017F8:
    cmpwi r0, 0x0
    li r0, 0x0
    bne lbl_fn_804FB96C_00001814
    lfs f1, 0x998(r31)
    lfs f0, lbl_80887574
    fcmpo cr0, f1, f0
    ble lbl_fn_804FB96C_00001818
lbl_fn_804FB96C_00001814:
    li r0, 0x1
lbl_fn_804FB96C_00001818:
    cmpwi r0, 0x0
    li r3, 0x0
    bne lbl_fn_804FB96C_00001830
    lwz r0, 0x99c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_804FB96C_00001834
lbl_fn_804FB96C_00001830:
    li r3, 0x1
lbl_fn_804FB96C_00001834:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FC014(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FC014_00001890
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FC014_00001884
    li r0, 0x0
    b lbl_fn_804FC014_00001894
lbl_fn_804FC014_00001884:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804FC014_00001894
lbl_fn_804FC014_00001890:
    li r0, 0x0
lbl_fn_804FC014_00001894:
    lwz r5, 0x5e8(r31)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804FC014_000018DC
lbl_fn_804FC014_000018AC:
    lwz r0, 0x5e4(r31)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804FC014_000018D4
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804FC014_000018D4
    b lbl_fn_804FC014_000018E0
lbl_fn_804FC014_000018D4:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804FC014_000018AC
lbl_fn_804FC014_000018DC:
    li r5, 0x0
lbl_fn_804FC014_000018E0:
    cmpwi r5, 0x0
    beq lbl_fn_804FC014_000018F4
    lwz r0, 0xd0(r5)
    extrwi r3, r0, 1, 30
    b lbl_fn_804FC014_000018F8
lbl_fn_804FC014_000018F4:
    li r3, 0x0
lbl_fn_804FC014_000018F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FC0D8(void)
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
    lwz r5, lbl_8087F628
    addis r3, r5, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FC0D8_00001960
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FC0D8_00001954
    li r29, 0x0
    b lbl_fn_804FC0D8_0000197C
lbl_fn_804FC0D8_00001954:
    bl fn_806B0E30
    clrlwi r29, r3, 24
    b lbl_fn_804FC0D8_0000197C
lbl_fn_804FC0D8_00001960:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FC0D8_00001974
    li r3, 0x0
    b lbl_fn_804FC0D8_00001978
lbl_fn_804FC0D8_00001974:
    bl fn_806A8E40
lbl_fn_804FC0D8_00001978:
    clrlwi r29, r3, 24
lbl_fn_804FC0D8_0000197C:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FC0D8_000019B0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FC0D8_000019A4
    li r0, 0x0
    b lbl_fn_804FC0D8_000019B4
lbl_fn_804FC0D8_000019A4:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804FC0D8_000019B4
lbl_fn_804FC0D8_000019B0:
    li r0, 0x0
lbl_fn_804FC0D8_000019B4:
    clrlwi r3, r29, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804FC0D8_00001A5C
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FC0D8_000019F8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804FC0D8_000019EC
    li r0, 0x0
    b lbl_fn_804FC0D8_000019FC
lbl_fn_804FC0D8_000019EC:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804FC0D8_000019FC
lbl_fn_804FC0D8_000019F8:
    li r0, 0x0
lbl_fn_804FC0D8_000019FC:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804FC0D8_00001A44
lbl_fn_804FC0D8_00001A14:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804FC0D8_00001A3C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804FC0D8_00001A3C
    b lbl_fn_804FC0D8_00001A48
lbl_fn_804FC0D8_00001A3C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804FC0D8_00001A14
lbl_fn_804FC0D8_00001A44:
    li r5, 0x0
lbl_fn_804FC0D8_00001A48:
    cmpwi r5, 0x0
    beq lbl_fn_804FC0D8_00001A5C
    lwz r0, 0xd0(r5)
    rlwimi r0, r31, 1, 30, 30
    stw r0, 0xd0(r5)
lbl_fn_804FC0D8_00001A5C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
