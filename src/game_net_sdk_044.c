#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _restgpr_23(void);
extern void _savegpr_18(void);
extern void _savegpr_23(void);
extern void fn_8067E23C(void);
extern void fn_806809C0(void);
extern void fn_806A420C(void);
extern void fn_806A4260(void);
extern void fn_806A4264(void);
extern void fn_806A426C(void);
extern void fn_806A4270(void);
extern void fn_806D57A0(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5930(void);
extern void fn_806D5BE0(void);
extern void fn_806D7AE0(void);
extern void fn_806D7B30(void);
extern void fn_806D7CF0(void);
extern void fn_806D7DA0(void);
extern void fn_806D7E70(void);
extern void fn_806D7EE0(void);
extern void fn_806D7F20(void);
extern void fn_806D8060(void);
extern void fn_806D8650(void);
extern void fn_806D86F0(void);
extern void fn_806D8850(void);
extern void fn_806D8F30(void);
extern void fn_806D8FC0(void);
extern void fn_806D8FE0(void);
extern void fn_806F7560(void);
extern void fn_806FD420(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807C5CE0[];
extern u8 lbl_807C5CE8[];
extern u8 lbl_807C5CF0[];
extern u8 lbl_807C5D00[];
extern u8 lbl_807C5D10[];
extern u8 lbl_80860DD0[];
extern u8 lbl_80860DD8[];
extern u8 lbl_80862350[];
extern u8 lbl_80862590[];
extern u8 lbl_808627AC[];
extern u8 lbl_808627D8[];
extern u8 lbl_808627E0[];
extern u8 lbl_808627E4[];
extern u8 lbl_808627F8[];

/* Small data declarations */

/* Function declarations */
void fn_806FAEF0(void);
void fn_806FAF80(void);
void fn_806FB010(void);
void fn_806FB0B0(void);
void fn_806FB1A0(void);
void fn_806FB290(void);
void fn_806FB380(void);
void fn_806FB470(void);
void fn_806FB560(void);
void fn_806FB650(void);
void fn_806FB750(void);
void fn_806FBAE0(void);
void fn_806FBAF0(void);
void fn_806FBDB0(void);
void fn_806FBE00(void);
void fn_806FC030(void);
void fn_806FC170(void);
void fn_806FC4B0(void);
void fn_806FC5D0(void);
void fn_806FC900(void);
void fn_806FC9C0(void);

asm void fn_806FAEF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r6, 0x8(r1)
    bne lbl_fn_806FAEF0_00000030
    lis r3, lbl_80862350@ha
    lwz r30, lbl_80862350@l(r3)
lbl_fn_806FAEF0_00000030:
    cmpwi r30, 0x0
    bne lbl_fn_806FAEF0_00000040
    addi r3, r1, 0x8
    b lbl_fn_806FAEF0_00000074
lbl_fn_806FAEF0_00000040:
    mr r12, r5
    mr r4, r31
    addi r5, r1, 0x8
    lwz r3, 0xc(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806FAEF0_00000074
    lwz r3, 0xc(r30)
    mr r4, r31
    addi r6, r1, 0x8
    li r5, 0x0
    bl fn_806F7560
lbl_fn_806FAEF0_00000074:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    lwz r3, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FAF80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stfd f1, 0x8(r1)
    bne lbl_fn_806FAF80_000000C0
    lis r3, lbl_80862350@ha
    lwz r30, lbl_80862350@l(r3)
lbl_fn_806FAF80_000000C0:
    cmpwi r30, 0x0
    bne lbl_fn_806FAF80_000000D0
    addi r3, r1, 0x8
    b lbl_fn_806FAF80_00000104
lbl_fn_806FAF80_000000D0:
    mr r12, r5
    mr r4, r31
    addi r5, r1, 0x8
    lwz r3, 0xc(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806FAF80_00000104
    lwz r3, 0xc(r30)
    mr r4, r31
    addi r6, r1, 0x8
    li r5, 0x1
    bl fn_806F7560
lbl_fn_806FAF80_00000104:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    lfd f1, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FB010(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_806FB010_00000154
    lis r3, lbl_80862350@ha
    lwz r29, lbl_80862350@l(r3)
lbl_fn_806FB010_00000154:
    cmpwi r29, 0x0
    bne lbl_fn_806FB010_00000164
    mr r3, r31
    b lbl_fn_806FB010_00000198
lbl_fn_806FB010_00000164:
    mr r12, r5
    mr r4, r30
    mr r5, r31
    lwz r3, 0xc(r29)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806FB010_00000198
    lwz r3, 0xc(r29)
    mr r4, r30
    mr r6, r31
    li r5, 0x2
    bl fn_806F7560
lbl_fn_806FB010_00000198:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FB0B0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    bne lbl_fn_806FB0B0_000001FC
    lis r3, lbl_80862350@ha
    lwz r3, lbl_80862350@l(r3)
lbl_fn_806FB0B0_000001FC:
    cmpwi r3, 0x0
    bne lbl_fn_806FB0B0_00000208
    b lbl_fn_806FB0B0_00000218
lbl_fn_806FB0B0_00000208:
    lwz r3, 0x20(r3)
    mr r4, r7
    bl fn_806D5900
    lwz r7, 0x0(r3)
lbl_fn_806FB0B0_00000218:
    lis r4, lbl_807C5CE0@ha
    mr r6, r7
    mr r5, r29
    addi r3, r1, 0x10
    addi r4, r4, lbl_807C5CE0@l
    crclr 6
    bl sprintf
    cmpwi r28, 0x0
    stw r31, 0x8(r1)
    bne lbl_fn_806FB0B0_00000248
    lis r3, lbl_80862350@ha
    lwz r28, lbl_80862350@l(r3)
lbl_fn_806FB0B0_00000248:
    cmpwi r28, 0x0
    bne lbl_fn_806FB0B0_00000258
    addi r3, r1, 0x8
    b lbl_fn_806FB0B0_0000028C
lbl_fn_806FB0B0_00000258:
    mr r12, r30
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    lwz r3, 0xc(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806FB0B0_0000028C
    lwz r3, 0xc(r28)
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    li r5, 0x0
    bl fn_806F7560
lbl_fn_806FB0B0_0000028C:
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x64(r1)
    lwz r3, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806FB1A0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x74(r1)
    stfd f31, 0x68(r1)
    fmr f31, f1
    stw r31, 0x64(r1)
    mr r31, r5
    stw r30, 0x60(r1)
    mr r30, r4
    stw r29, 0x5c(r1)
    mr r29, r3
    bne lbl_fn_806FB1A0_000002EC
    lis r3, lbl_80862350@ha
    lwz r3, lbl_80862350@l(r3)
lbl_fn_806FB1A0_000002EC:
    cmpwi r3, 0x0
    bne lbl_fn_806FB1A0_000002F8
    b lbl_fn_806FB1A0_00000308
lbl_fn_806FB1A0_000002F8:
    lwz r3, 0x20(r3)
    mr r4, r6
    bl fn_806D5900
    lwz r6, 0x0(r3)
lbl_fn_806FB1A0_00000308:
    lis r4, lbl_807C5CE0@ha
    mr r5, r30
    addi r3, r1, 0x10
    addi r4, r4, lbl_807C5CE0@l
    crclr 6
    bl sprintf
    cmpwi r29, 0x0
    stfd f31, 0x8(r1)
    bne lbl_fn_806FB1A0_00000334
    lis r3, lbl_80862350@ha
    lwz r29, lbl_80862350@l(r3)
lbl_fn_806FB1A0_00000334:
    cmpwi r29, 0x0
    bne lbl_fn_806FB1A0_00000344
    addi r3, r1, 0x8
    b lbl_fn_806FB1A0_00000378
lbl_fn_806FB1A0_00000344:
    mr r12, r31
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    lwz r3, 0xc(r29)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806FB1A0_00000378
    lwz r3, 0xc(r29)
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    li r5, 0x1
    bl fn_806F7560
lbl_fn_806FB1A0_00000378:
    lfd f31, 0x68(r1)
    lwz r31, 0x64(r1)
    lwz r30, 0x60(r1)
    lwz r29, 0x5c(r1)
    lwz r0, 0x74(r1)
    lfd f1, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806FB290(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    bne lbl_fn_806FB290_000003DC
    lis r3, lbl_80862350@ha
    lwz r3, lbl_80862350@l(r3)
lbl_fn_806FB290_000003DC:
    cmpwi r3, 0x0
    bne lbl_fn_806FB290_000003E8
    b lbl_fn_806FB290_000003F8
lbl_fn_806FB290_000003E8:
    lwz r3, 0x20(r3)
    mr r4, r7
    bl fn_806D5900
    lwz r7, 0x0(r3)
lbl_fn_806FB290_000003F8:
    lis r4, lbl_807C5CE0@ha
    mr r6, r7
    mr r5, r29
    addi r3, r1, 0x8
    addi r4, r4, lbl_807C5CE0@l
    crclr 6
    bl sprintf
    cmpwi r28, 0x0
    bne lbl_fn_806FB290_00000424
    lis r3, lbl_80862350@ha
    lwz r28, lbl_80862350@l(r3)
lbl_fn_806FB290_00000424:
    cmpwi r28, 0x0
    bne lbl_fn_806FB290_00000434
    mr r3, r31
    b lbl_fn_806FB290_00000468
lbl_fn_806FB290_00000434:
    mr r12, r30
    mr r5, r31
    addi r4, r1, 0x8
    lwz r3, 0xc(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806FB290_00000468
    lwz r3, 0xc(r28)
    mr r6, r31
    addi r4, r1, 0x8
    li r5, 0x2
    bl fn_806F7560
lbl_fn_806FB290_00000468:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806FB380(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    bne lbl_fn_806FB380_000004CC
    lis r3, lbl_80862350@ha
    lwz r3, lbl_80862350@l(r3)
lbl_fn_806FB380_000004CC:
    cmpwi r3, 0x0
    bne lbl_fn_806FB380_000004D8
    b lbl_fn_806FB380_000004E8
lbl_fn_806FB380_000004D8:
    lwz r3, 0x1c(r3)
    mr r4, r7
    bl fn_806D5900
    lwz r7, 0x0(r3)
lbl_fn_806FB380_000004E8:
    lis r4, lbl_807C5CE8@ha
    mr r6, r7
    mr r5, r29
    addi r3, r1, 0x10
    addi r4, r4, lbl_807C5CE8@l
    crclr 6
    bl sprintf
    cmpwi r28, 0x0
    stw r31, 0x8(r1)
    bne lbl_fn_806FB380_00000518
    lis r3, lbl_80862350@ha
    lwz r28, lbl_80862350@l(r3)
lbl_fn_806FB380_00000518:
    cmpwi r28, 0x0
    bne lbl_fn_806FB380_00000528
    addi r3, r1, 0x8
    b lbl_fn_806FB380_0000055C
lbl_fn_806FB380_00000528:
    mr r12, r30
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    lwz r3, 0xc(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806FB380_0000055C
    lwz r3, 0xc(r28)
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    li r5, 0x0
    bl fn_806F7560
lbl_fn_806FB380_0000055C:
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x64(r1)
    lwz r3, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806FB470(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x74(r1)
    stfd f31, 0x68(r1)
    fmr f31, f1
    stw r31, 0x64(r1)
    mr r31, r5
    stw r30, 0x60(r1)
    mr r30, r4
    stw r29, 0x5c(r1)
    mr r29, r3
    bne lbl_fn_806FB470_000005BC
    lis r3, lbl_80862350@ha
    lwz r3, lbl_80862350@l(r3)
lbl_fn_806FB470_000005BC:
    cmpwi r3, 0x0
    bne lbl_fn_806FB470_000005C8
    b lbl_fn_806FB470_000005D8
lbl_fn_806FB470_000005C8:
    lwz r3, 0x1c(r3)
    mr r4, r6
    bl fn_806D5900
    lwz r6, 0x0(r3)
lbl_fn_806FB470_000005D8:
    lis r4, lbl_807C5CE8@ha
    mr r5, r30
    addi r3, r1, 0x10
    addi r4, r4, lbl_807C5CE8@l
    crclr 6
    bl sprintf
    cmpwi r29, 0x0
    stfd f31, 0x8(r1)
    bne lbl_fn_806FB470_00000604
    lis r3, lbl_80862350@ha
    lwz r29, lbl_80862350@l(r3)
lbl_fn_806FB470_00000604:
    cmpwi r29, 0x0
    bne lbl_fn_806FB470_00000614
    addi r3, r1, 0x8
    b lbl_fn_806FB470_00000648
lbl_fn_806FB470_00000614:
    mr r12, r31
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    lwz r3, 0xc(r29)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806FB470_00000648
    lwz r3, 0xc(r29)
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    li r5, 0x1
    bl fn_806F7560
lbl_fn_806FB470_00000648:
    lfd f31, 0x68(r1)
    lwz r31, 0x64(r1)
    lwz r30, 0x60(r1)
    lwz r29, 0x5c(r1)
    lwz r0, 0x74(r1)
    lfd f1, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806FB560(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    bne lbl_fn_806FB560_000006AC
    lis r3, lbl_80862350@ha
    lwz r3, lbl_80862350@l(r3)
lbl_fn_806FB560_000006AC:
    cmpwi r3, 0x0
    bne lbl_fn_806FB560_000006B8
    b lbl_fn_806FB560_000006C8
lbl_fn_806FB560_000006B8:
    lwz r3, 0x1c(r3)
    mr r4, r7
    bl fn_806D5900
    lwz r7, 0x0(r3)
lbl_fn_806FB560_000006C8:
    lis r4, lbl_807C5CE8@ha
    mr r6, r7
    mr r5, r29
    addi r3, r1, 0x8
    addi r4, r4, lbl_807C5CE8@l
    crclr 6
    bl sprintf
    cmpwi r28, 0x0
    bne lbl_fn_806FB560_000006F4
    lis r3, lbl_80862350@ha
    lwz r28, lbl_80862350@l(r3)
lbl_fn_806FB560_000006F4:
    cmpwi r28, 0x0
    bne lbl_fn_806FB560_00000704
    mr r3, r31
    b lbl_fn_806FB560_00000738
lbl_fn_806FB560_00000704:
    mr r12, r30
    mr r5, r31
    addi r4, r1, 0x8
    lwz r3, 0xc(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806FB560_00000738
    lwz r3, 0xc(r28)
    mr r6, r31
    addi r4, r1, 0x8
    li r5, 0x2
    bl fn_806F7560
lbl_fn_806FB560_00000738:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806FB650(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C5CF0@ha
    addi r31, r31, lbl_807C5CF0@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_fn_806FB650_00000794
    mr r30, r5
    b lbl_fn_806FB650_000007B4
lbl_fn_806FB650_00000794:
    lis r6, lbl_808627D8@ha
    lis r5, lbl_808627AC@ha
    lwz r0, lbl_808627D8@l(r6)
    addi r5, r5, lbl_808627AC@l
    xori r0, r0, 0x1
    stw r0, lbl_808627D8@l(r6)
    mulli r0, r0, 0x16
    add r30, r5, r0
lbl_fn_806FB650_000007B4:
    cmpwi r3, 0x0
    beq lbl_fn_806FB650_00000810
    cmpwi r4, 0x0
    beq lbl_fn_806FB650_000007EC
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_806A420C
    mr r5, r3
    mr r3, r30
    mr r6, r29
    addi r4, r31, 0x0
    crclr 6
    bl sprintf
    b lbl_fn_806FB650_00000838
lbl_fn_806FB650_000007EC:
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_806A420C
    mr r5, r3
    mr r3, r30
    addi r4, r31, 0x8
    crclr 6
    bl sprintf
    b lbl_fn_806FB650_00000838
lbl_fn_806FB650_00000810:
    cmpwi r4, 0x0
    beq lbl_fn_806FB650_00000830
    mr r3, r30
    mr r5, r29
    addi r4, r31, 0xc
    crclr 6
    bl sprintf
    b lbl_fn_806FB650_00000838
lbl_fn_806FB650_00000830:
    li r0, 0x0
    stb r0, 0x0(r30)
lbl_fn_806FB650_00000838:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FB750(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_18
    lis r25, lbl_80862590@ha
    li r0, 0x8
    addi r25, r25, lbl_80862590@l
    stw r0, 0xc(r1)
    lwz r0, 0x200(r25)
    mr r23, r3
    mr r24, r4
    cmpwi r0, 0x0
    beq lbl_fn_806FB750_000008E8
    lwz r0, 0x204(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806FB750_000008E8
    lwz r0, 0x208(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806FB750_000008E8
    lwz r0, 0x20c(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806FB750_000008E8
    lwz r0, 0x210(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806FB750_000008E8
    lwz r0, 0x214(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806FB750_000008E8
    lwz r0, 0x218(r25)
    cmpwi r0, 0x0
    beq lbl_fn_806FB750_000008E8
    li r3, 0x0
    b lbl_fn_806FB750_00000BD0
lbl_fn_806FB750_000008E8:
    cmpwi r3, -0x1
    beq lbl_fn_806FB750_00000BCC
    addi r27, r25, 0x0
    lis r30, 0x7f00
    li r28, 0x1
    li r29, 0x0
    lis r26, lbl_807C5D00@ha
    li r31, 0x8
    b lbl_fn_806FB750_00000BBC
lbl_fn_806FB750_0000090C:
    mr r3, r23
    addi r4, r25, 0x0
    addi r7, r1, 0x18
    addi r8, r1, 0xc
    li r5, 0x200
    li r6, 0x0
    bl fn_806D7CF0
    cmpwi r3, -0x1
    mr r22, r3
    bne lbl_fn_806FB750_00000940
    mr r3, r23
    bl fn_806D7F20
    b lbl_fn_806FB750_00000BCC
lbl_fn_806FB750_00000940:
    addi r3, r25, 0x0
    addi r4, r26, lbl_807C5D00@l
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806FB750_00000960
    li r3, 0x1
    b lbl_fn_806FB750_00000BD0
lbl_fn_806FB750_00000960:
    cmpwi r22, 0x15
    lbz r0, 0x7(r27)
    bge lbl_fn_806FB750_00000974
    li r3, 0x1
    b lbl_fn_806FB750_00000BD0
lbl_fn_806FB750_00000974:
    cmplwi r0, 0x2
    bne lbl_fn_806FB750_00000A20
    mr r4, r27
    addi r3, r1, 0x20
    li r5, 0x15
    bl memcpy
    lbz r0, 0x2c(r1)
    cmpwi r0, 0x1
    beq lbl_fn_806FB750_000009AC
    cmpwi r0, 0x2
    beq lbl_fn_806FB750_000009D0
    cmpwi r0, 0x3
    beq lbl_fn_806FB750_000009F8
    b lbl_fn_806FB750_00000BB4
lbl_fn_806FB750_000009AC:
    stw r28, 0x200(r25)
    lhz r3, 0x1a(r1)
    bl fn_806A4264
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl fn_806FB650
    b lbl_fn_806FB750_00000BB4
lbl_fn_806FB750_000009D0:
    stw r29, 0x80(r24)
    stw r28, 0x204(r25)
    lhz r3, 0x1a(r1)
    bl fn_806A4264
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl fn_806FB650
    b lbl_fn_806FB750_00000BB4
lbl_fn_806FB750_000009F8:
    stw r29, 0x84(r24)
    stw r28, 0x208(r25)
    lhz r3, 0x1a(r1)
    bl fn_806A4264
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl fn_806FB650
    b lbl_fn_806FB750_00000BB4
lbl_fn_806FB750_00000A20:
    cmplwi r0, 0xb
    bne lbl_fn_806FB750_00000BB4
    mr r4, r27
    addi r3, r1, 0x20
    li r5, 0x15
    bl memcpy
    lwz r3, 0x28(r1)
    bl fn_806A4260
    cmpwi r3, 0x0
    stw r3, 0x28(r1)
    beq lbl_fn_806FB750_00000A68
    cmpwi r3, 0x3
    beq lbl_fn_806FB750_00000A70
    cmpwi r3, 0x1
    beq lbl_fn_806FB750_00000A78
    cmpwi r3, 0x2
    beq lbl_fn_806FB750_00000A80
    b lbl_fn_806FB750_00000A84
lbl_fn_806FB750_00000A68:
    stw r28, 0x20c(r25)
    b lbl_fn_806FB750_00000A84
lbl_fn_806FB750_00000A70:
    stw r28, 0x210(r25)
    b lbl_fn_806FB750_00000A84
lbl_fn_806FB750_00000A78:
    stw r28, 0x214(r25)
    b lbl_fn_806FB750_00000A84
lbl_fn_806FB750_00000A80:
    stw r28, 0x218(r25)
lbl_fn_806FB750_00000A84:
    li r21, 0x0
    bl fn_806D86F0
    cmpwi r3, 0x0
    mr r22, r3
    bne lbl_fn_806FB750_00000AA0
    li r18, 0x0
    b lbl_fn_806FB750_00000AEC
lbl_fn_806FB750_00000AA0:
    li r20, 0x0
lbl_fn_806FB750_00000AA4:
    lwz r3, 0xc(r22)
    lwzx r19, r3, r20
    cmpwi r19, 0x0
    beq lbl_fn_806FB750_00000AE8
    lwz r18, 0x0(r19)
    addi r3, r30, 0x1
    bl fn_806A426C
    cmplw r18, r3
    beq lbl_fn_806FB750_00000AE0
    mr r21, r18
    mr r3, r19
    bl fn_806D8850
    cmpwi r3, 0x0
    beq lbl_fn_806FB750_00000AE0
    b lbl_fn_806FB750_00000AEC
lbl_fn_806FB750_00000AE0:
    addi r20, r20, 0x4
    b lbl_fn_806FB750_00000AA4
lbl_fn_806FB750_00000AE8:
    mr r18, r21
lbl_fn_806FB750_00000AEC:
    lwz r0, 0x28(r1)
    mr r3, r23
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    slwi r0, r0, 4
    add r6, r24, r0
    stw r18, 0x94(r6)
    stw r31, 0x8(r1)
    bl fn_806D7E70
    cmpwi r3, -0x1
    bne lbl_fn_806FB750_00000B20
    li r3, 0x0
    b lbl_fn_806FB750_00000B24
lbl_fn_806FB750_00000B20:
    lhz r3, 0x12(r1)
lbl_fn_806FB750_00000B24:
    bl fn_806A4264
    lwz r0, 0x28(r1)
    slwi r0, r0, 4
    add r4, r24, r0
    sth r3, 0x98(r4)
    lwz r0, 0x28(r1)
    lwz r4, 0x2f(r1)
    slwi r0, r0, 4
    add r3, r24, r0
    stw r4, 0x9c(r3)
    lhz r3, 0x33(r1)
    bl fn_806A4264
    lwz r0, 0x28(r1)
    slwi r0, r0, 4
    add r4, r24, r0
    sth r3, 0xa0(r4)
    lhz r3, 0x1a(r1)
    bl fn_806A4264
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl fn_806FB650
    lwz r0, 0x28(r1)
    slwi r0, r0, 4
    add r0, r24, r0
    addic. r21, r0, 0x94
    beq lbl_fn_806FB750_00000BB4
    lwz r3, 0x0(r21)
    li r5, 0x0
    lhz r4, 0x4(r21)
    bl fn_806FB650
    lwz r3, 0x8(r21)
    li r5, 0x0
    lhz r4, 0xc(r21)
    bl fn_806FB650
lbl_fn_806FB750_00000BB4:
    cmpwi r23, -0x1
    beq lbl_fn_806FB750_00000BCC
lbl_fn_806FB750_00000BBC:
    mr r3, r23
    bl fn_806D8650
    cmpwi r3, 0x0
    bne lbl_fn_806FB750_0000090C
lbl_fn_806FB750_00000BCC:
    li r3, 0x1
lbl_fn_806FB750_00000BD0:
    addi r11, r1, 0xb0
    bl _restgpr_18
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_806FBAE0(void)
{
    nofralloc
    b fn_806FB750
}

asm void fn_806FBAF0(void)
{
    nofralloc
    lwz r6, 0x9c(r3)
    li r5, 0x6
    li r4, 0x4
    li r0, 0x1
    cmpwi r6, 0x0
    stw r5, 0x8c(r3)
    stw r4, 0x88(r3)
    stw r0, 0xd4(r3)
    beq lbl_fn_806FBAF0_00000C3C
    lwz r0, 0xac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806FBAF0_00000C3C
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806FBAF0_00000C44
lbl_fn_806FBAF0_00000C3C:
    li r3, 0x0
    blr
lbl_fn_806FBAF0_00000C44:
    lwz r5, 0x84(r3)
    cmpwi r5, 0x0
    bne lbl_fn_806FBAF0_00000C74
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806FBAF0_00000C74
    lwz r0, 0x94(r3)
    cmplw r6, r0
    bne lbl_fn_806FBAF0_00000C74
    li r0, 0x0
    stw r0, 0x8c(r3)
    b lbl_fn_806FBAF0_00000DF0
lbl_fn_806FBAF0_00000C74:
    lwz r0, 0x94(r3)
    cmplw r6, r0
    bne lbl_fn_806FBAF0_00000C8C
    li r0, 0x1
    stw r0, 0x8c(r3)
    b lbl_fn_806FBAF0_00000DF0
lbl_fn_806FBAF0_00000C8C:
    lwz r6, 0x80(r3)
    cmpwi r6, 0x0
    bne lbl_fn_806FBAF0_00000CD4
    cmpwi r5, 0x0
    bne lbl_fn_806FBAF0_00000CD4
    lhz r4, 0xb0(r3)
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    srawi r4, r0, 31
    xor r0, r4, r0
    subf r0, r4, r0
    cmpwi r0, 0x1
    blt lbl_fn_806FBAF0_00000CD4
    li r4, 0x5
    li r0, 0x0
    stw r4, 0x8c(r3)
    stw r0, 0x88(r3)
    b lbl_fn_806FBAF0_00000DF0
lbl_fn_806FBAF0_00000CD4:
    cmpwi r6, 0x0
    beq lbl_fn_806FBAF0_00000D18
    cmpwi r5, 0x0
    bne lbl_fn_806FBAF0_00000D18
    lhz r4, 0xb0(r3)
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    srawi r4, r0, 31
    xor r0, r4, r0
    subf r0, r4, r0
    cmpwi r0, 0x1
    blt lbl_fn_806FBAF0_00000D18
    li r4, 0x5
    li r0, 0x2
    stw r4, 0x8c(r3)
    stw r0, 0x88(r3)
    b lbl_fn_806FBAF0_00000DF0
lbl_fn_806FBAF0_00000D18:
    cmpwi r6, 0x0
    bne lbl_fn_806FBAF0_00000D5C
    cmpwi r5, 0x0
    beq lbl_fn_806FBAF0_00000D5C
    lhz r4, 0xb0(r3)
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    srawi r4, r0, 31
    xor r0, r4, r0
    subf r0, r4, r0
    cmpwi r0, 0x1
    blt lbl_fn_806FBAF0_00000D5C
    li r4, 0x5
    li r0, 0x3
    stw r4, 0x8c(r3)
    stw r0, 0x88(r3)
    b lbl_fn_806FBAF0_00000DF0
lbl_fn_806FBAF0_00000D5C:
    cmpwi r6, 0x0
    beq lbl_fn_806FBAF0_00000DA0
    cmpwi r5, 0x0
    beq lbl_fn_806FBAF0_00000DA0
    lhz r4, 0xb0(r3)
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    srawi r4, r0, 31
    xor r0, r4, r0
    subf r0, r4, r0
    cmpwi r0, 0x1
    blt lbl_fn_806FBAF0_00000DA0
    li r4, 0x5
    li r0, 0x1
    stw r4, 0x8c(r3)
    stw r0, 0x88(r3)
    b lbl_fn_806FBAF0_00000DF0
lbl_fn_806FBAF0_00000DA0:
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_fn_806FBAF0_00000DB4
    li r0, 0x4
    stw r0, 0x8c(r3)
    b lbl_fn_806FBAF0_00000DF0
lbl_fn_806FBAF0_00000DB4:
    cmpwi r6, 0x0
    beq lbl_fn_806FBAF0_00000DCC
    bne cr1, lbl_fn_806FBAF0_00000DCC
    li r0, 0x3
    stw r0, 0x8c(r3)
    b lbl_fn_806FBAF0_00000DF0
lbl_fn_806FBAF0_00000DCC:
    cmpwi r6, 0x0
    bne lbl_fn_806FBAF0_00000DE8
    cmpwi r5, 0x0
    bne lbl_fn_806FBAF0_00000DE8
    li r0, 0x2
    stw r0, 0x8c(r3)
    b lbl_fn_806FBAF0_00000DF0
lbl_fn_806FBAF0_00000DE8:
    li r0, 0x6
    stw r0, 0x8c(r3)
lbl_fn_806FBAF0_00000DF0:
    lhz r6, 0x98(r3)
    lhz r5, 0xa0(r3)
    cmplw r5, r6
    bne lbl_fn_806FBAF0_00000E2C
    lhz r4, 0xb0(r3)
    lhz r0, 0xa8(r3)
    cmplw r4, r0
    bne lbl_fn_806FBAF0_00000E2C
    lhz r4, 0xc0(r3)
    lhz r0, 0xb8(r3)
    cmplw r4, r0
    bne lbl_fn_806FBAF0_00000E2C
    li r0, 0x1
    stw r0, 0x90(r3)
    b lbl_fn_806FBAF0_00000E98
lbl_fn_806FBAF0_00000E2C:
    lhz r4, 0xb0(r3)
    cmplw r5, r4
    bne lbl_fn_806FBAF0_00000E50
    lhz r0, 0xc0(r3)
    cmplw r4, r0
    bne lbl_fn_806FBAF0_00000E50
    li r0, 0x2
    stw r0, 0x90(r3)
    b lbl_fn_806FBAF0_00000E98
lbl_fn_806FBAF0_00000E50:
    cmplw r5, r6
    bne lbl_fn_806FBAF0_00000E74
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_806FBAF0_00000E74
    li r0, 0x4
    stw r0, 0x90(r3)
    b lbl_fn_806FBAF0_00000E98
lbl_fn_806FBAF0_00000E74:
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_806FBAF0_00000E90
    li r0, 0x3
    stw r0, 0x90(r3)
    b lbl_fn_806FBAF0_00000E98
lbl_fn_806FBAF0_00000E90:
    li r0, 0x0
    stw r0, 0x90(r3)
lbl_fn_806FBAF0_00000E98:
    lhz r4, 0xd0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806FBAF0_00000EB8
    lhz r0, 0xa0(r3)
    cmplw r0, r4
    beq lbl_fn_806FBAF0_00000EB8
    li r0, 0x0
    stw r0, 0xd4(r3)
lbl_fn_806FBAF0_00000EB8:
    li r3, 0x1
    blr
}

asm void fn_806FBDB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808627E0@ha
    lwz r3, lbl_808627E0@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806FBDB0_00000EF4
    bl fn_806D58F0
    lwz r3, lbl_808627E0@l(r31)
    bl fn_806D5850
    li r0, 0x0
    stw r0, lbl_808627E0@l(r31)
lbl_fn_806FBDB0_00000EF4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806FBE00(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    lis r31, lbl_808627E0@ha
    addi r31, r31, lbl_808627E0@l
    stw r30, 0x78(r1)
    mr r30, r3
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r4
    stw r4, 0x44(r3)
    stw r5, 0x48(r3)
    beq lbl_fn_806FBE00_00000F5C
    mr r4, r6
    li r5, 0x8
    addi r3, r3, 0x4c
    bl memcpy
lbl_fn_806FBE00_00000F5C:
    subi r0, r28, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_806FBE00_00001010
    lwz r12, 0x10(r30)
    li r0, 0x5
    stw r0, 0x1c(r30)
    addi r5, r30, 0x4c
    lwz r3, 0x44(r30)
    lwz r4, 0x48(r30)
    lwz r6, 0x14(r30)
    mtctr r12
    bctrl
    lwz r0, 0x0(r31)
    lwz r29, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806FBE00_00000FA4
    li r29, 0x0
    b lbl_fn_806FBE00_00000FE4
lbl_fn_806FBE00_00000FA4:
    li r30, 0x0
    b lbl_fn_806FBE00_00000FD0
lbl_fn_806FBE00_00000FAC:
    lwz r3, 0x0(r31)
    mr r4, r30
    bl fn_806D5900
    lwz r0, 0x4(r3)
    cmpw r0, r29
    bne lbl_fn_806FBE00_00000FCC
    mr r29, r3
    b lbl_fn_806FBE00_00000FE4
lbl_fn_806FBE00_00000FCC:
    addi r30, r30, 0x1
lbl_fn_806FBE00_00000FD0:
    lwz r3, 0x0(r31)
    bl fn_806D58F0
    cmpw r30, r3
    blt lbl_fn_806FBE00_00000FAC
    li r29, 0x0
lbl_fn_806FBE00_00000FE4:
    cmpwi r29, 0x0
    beq lbl_fn_806FBE00_0000111C
    lwz r3, 0x18(r29)
    cmpwi r3, -0x1
    beq lbl_fn_806FBE00_00001004
    bl fn_806D7B30
    li r0, -0x1
    stw r0, 0x18(r29)
lbl_fn_806FBE00_00001004:
    li r0, 0x6
    stw r0, 0x1c(r29)
    b lbl_fn_806FBE00_0000111C
lbl_fn_806FBE00_00001010:
    lis r4, lbl_807C5D00@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    bl memcpy
    li r3, 0x4
    li r0, 0xd
    stb r3, 0x1e(r1)
    stb r0, 0x1f(r1)
    lwz r3, 0x4(r30)
    bl fn_806A426C
    stw r3, 0x20(r1)
    lis r3, lbl_807C5D10@ha
    lwz r4, lbl_807C5D10@l(r3)
    lis r29, lbl_80860DD8@ha
    lwz r0, 0x8(r30)
    addi r3, r29, lbl_80860DD8@l
    stb r0, 0x25(r1)
    lwz r0, 0x14(r31)
    lwz r5, 0x44(r30)
    cntlzw r5, r5
    stw r4, 0x27(r1)
    extrwi r4, r5, 8, 19
    stb r4, 0x26(r1)
    stw r0, 0x2b(r1)
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_806FBE00_00001090
    addi r3, r1, 0x2f
    addi r4, r29, lbl_80860DD8@l
    li r5, 0x32
    bl memcpy
lbl_fn_806FBE00_00001090:
    lwz r0, 0x4(r31)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806A420C
    lwz r28, 0x18(r30)
    li r0, 0x2
    lwz r29, 0x4(r31)
    li r3, 0x6cfd
    stb r0, 0x11(r1)
    bl fn_806A4270
    sth r3, 0x12(r1)
    mr r3, r28
    addi r4, r1, 0x18
    addi r7, r1, 0x10
    stw r29, 0x14(r1)
    li r5, 0x49
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    li r0, 0x7
    stw r0, 0x1c(r30)
    bl fn_806D8F30
    lwz r12, 0x10(r30)
    addi r3, r3, 0x1f4
    li r4, 0x0
    li r0, 0x4
    stw r3, 0x38(r30)
    addi r5, r30, 0x4c
    lwz r3, 0x44(r30)
    stw r4, 0x30(r30)
    lwz r4, 0x48(r30)
    stw r0, 0x34(r30)
    lwz r6, 0x14(r30)
    mtctr r12
    bctrl
lbl_fn_806FBE00_0000111C:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806FC030(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r4, lbl_807C5D00@ha
    li r5, 0x6
    stw r0, 0x84(r1)
    addi r4, r4, lbl_807C5D00@l
    stw r31, 0x7c(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    bl memcpy
    li r3, 0x4
    li r0, 0xf
    stb r3, 0x1e(r1)
    stb r0, 0x1f(r1)
    lwz r3, 0x4(r31)
    bl fn_806A426C
    lis r30, lbl_808627F8@ha
    stw r3, 0x20(r1)
    lwz r0, lbl_808627F8@l(r30)
    lwz r3, 0x8(r31)
    cmpwi r0, 0x0
    stb r3, 0x24(r1)
    bne lbl_fn_806FC030_000011C0
    bl fn_806D8F30
    bl fn_806D8FC0
    lis r4, 0x8000
    li r3, 0x1
    subi r4, r4, 0x1
    bl fn_806D8FE0
    stw r3, lbl_808627F8@l(r30)
lbl_fn_806FC030_000011C0:
    lis r30, lbl_808627E4@ha
    lis r4, lbl_808627F8@ha
    lwz r4, lbl_808627F8@l(r4)
    addi r3, r1, 0x8
    lwz r0, lbl_808627E4@l(r30)
    stw r4, 0x26(r1)
    stw r0, 0x8(r1)
    bl fn_806A420C
    lwz r29, 0x18(r31)
    li r0, 0x2
    lwz r30, lbl_808627E4@l(r30)
    li r3, 0x6cfd
    stb r0, 0x11(r1)
    bl fn_806A4270
    sth r3, 0x12(r1)
    mr r3, r29
    addi r4, r1, 0x18
    addi r7, r1, 0x10
    stw r30, 0x14(r1)
    li r5, 0x12
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806FC030_00001240
    bl fn_806D8F30
    addi r3, r3, 0x2710
    li r0, 0xc
    stw r3, 0x38(r31)
    stw r0, 0x34(r31)
    b lbl_fn_806FC030_0000125C
lbl_fn_806FC030_00001240:
    bl fn_806D8F30
    addi r4, r3, 0x1f4
    li r3, 0xa
    li r0, 0x0
    stw r4, 0x38(r31)
    stw r3, 0x34(r31)
    stw r0, 0x1c(r31)
lbl_fn_806FC030_0000125C:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806FC170(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_23
    lis r31, lbl_808627E0@ha
    lis r4, lbl_807C5D00@ha
    addi r30, r1, 0x48
    mr r28, r3
    mr r3, r30
    addi r31, r31, lbl_808627E0@l
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    bl memcpy
    li r3, 0x4
    li r0, 0x0
    stb r3, 0x4e(r1)
    stb r0, 0x4f(r1)
    lwz r3, 0x4(r28)
    bl fn_806A426C
    stw r3, 0x50(r1)
    li r29, 0x0
    lwz r0, 0x8(r28)
    stb r0, 0x55(r1)
    lwz r4, 0x0(r28)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r0, r0, 31
    stb r0, 0x56(r1)
    bl fn_806D86F0
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_806FC170_00001310
    li r23, 0x0
    b lbl_fn_806FC170_00001360
lbl_fn_806FC170_00001310:
    li r25, 0x0
    lis r26, 0x7f00
lbl_fn_806FC170_00001318:
    lwz r3, 0xc(r27)
    lwzx r24, r3, r25
    cmpwi r24, 0x0
    beq lbl_fn_806FC170_0000135C
    lwz r23, 0x0(r24)
    addi r3, r26, 0x1
    bl fn_806A426C
    cmplw r23, r3
    beq lbl_fn_806FC170_00001354
    mr r29, r23
    mr r3, r24
    bl fn_806D8850
    cmpwi r3, 0x0
    beq lbl_fn_806FC170_00001354
    b lbl_fn_806FC170_00001360
lbl_fn_806FC170_00001354:
    addi r25, r25, 0x4
    b lbl_fn_806FC170_00001318
lbl_fn_806FC170_0000135C:
    mr r23, r29
lbl_fn_806FC170_00001360:
    mr r3, r23
    bl fn_806A4260
    li r26, 0x0
    srwi r4, r3, 24
    extrwi r5, r3, 8, 8
    extrwi r0, r3, 8, 16
    stb r3, 0x5a(r1)
    lis r27, lbl_80860DD8@ha
    addi r3, r1, 0x5d
    stb r4, 0x57(r1)
    addi r4, r27, lbl_80860DD8@l
    stb r5, 0x58(r1)
    stb r0, 0x59(r1)
    stb r26, 0x5b(r1)
    stb r26, 0x5c(r1)
    bl strcpy
    addi r3, r27, lbl_80860DD8@l
    bl strlen
    lbz r0, 0x56(r1)
    addi r29, r3, 0x16
    cmpwi r0, 0x0
    beq lbl_fn_806FC170_00001414
    lwz r0, 0x20(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806FC170_00001414
    lwz r0, 0x4(r31)
    addi r3, r1, 0x18
    stb r26, 0x54(r1)
    stw r0, 0x18(r1)
    bl fn_806A420C
    lwz r26, 0x0(r28)
    li r0, 0x2
    lwz r27, 0x4(r31)
    li r3, 0x6cfd
    stb r0, 0x41(r1)
    bl fn_806A4270
    sth r3, 0x42(r1)
    mr r3, r26
    mr r4, r30
    mr r5, r29
    stw r27, 0x44(r1)
    addi r7, r1, 0x40
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
lbl_fn_806FC170_00001414:
    lwz r0, 0x24(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806FC170_00001474
    lwz r0, 0x4(r31)
    li r3, 0x1
    stb r3, 0x54(r1)
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl fn_806A420C
    lwz r26, 0x18(r28)
    li r0, 0x2
    lwz r27, 0x4(r31)
    li r3, 0x6cfd
    stb r0, 0x39(r1)
    bl fn_806A4270
    sth r3, 0x3a(r1)
    mr r3, r26
    mr r4, r30
    mr r5, r29
    stw r27, 0x3c(r1)
    addi r7, r1, 0x38
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
lbl_fn_806FC170_00001474:
    lbz r0, 0x56(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806FC170_00001488
    lwz r3, 0x0(r28)
    b lbl_fn_806FC170_0000148C
lbl_fn_806FC170_00001488:
    lwz r3, 0x18(r28)
lbl_fn_806FC170_0000148C:
    li r0, 0x8
    stw r0, 0x8(r1)
    addi r4, r1, 0x30
    addi r5, r1, 0x8
    bl fn_806D7E70
    cmpwi r3, -0x1
    bne lbl_fn_806FC170_000014B0
    li r3, 0x0
    b lbl_fn_806FC170_000014B4
lbl_fn_806FC170_000014B0:
    lhz r3, 0x32(r1)
lbl_fn_806FC170_000014B4:
    bl fn_806A4264
    extrwi r0, r3, 8, 16
    stb r0, 0x5b(r1)
    stb r3, 0x5c(r1)
    lwz r0, 0x28(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806FC170_00001520
    lwz r0, 0x8(r31)
    li r27, 0x2
    stb r27, 0x54(r1)
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl fn_806A420C
    lwz r26, 0x18(r28)
    li r3, 0x6cfd
    lwz r25, 0x8(r31)
    stb r27, 0x29(r1)
    bl fn_806A4270
    sth r3, 0x2a(r1)
    mr r3, r26
    mr r4, r30
    mr r5, r29
    stw r25, 0x2c(r1)
    addi r7, r1, 0x28
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
lbl_fn_806FC170_00001520:
    lwz r0, 0x2c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806FC170_00001580
    lwz r0, 0xc(r31)
    li r3, 0x3
    stb r3, 0x54(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl fn_806A420C
    lwz r25, 0x18(r28)
    li r0, 0x2
    lwz r26, 0xc(r31)
    li r3, 0x6cfd
    stb r0, 0x21(r1)
    bl fn_806A4270
    sth r3, 0x22(r1)
    mr r3, r25
    mr r4, r30
    mr r5, r29
    stw r26, 0x24(r1)
    addi r7, r1, 0x20
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
lbl_fn_806FC170_00001580:
    li r0, 0x2
    stw r0, 0x1c(r28)
    bl fn_806D8F30
    addi r3, r3, 0x1f4
    li r0, 0xa
    stw r3, 0x38(r28)
    addi r11, r1, 0xd0
    stw r0, 0x34(r28)
    bl _restgpr_23
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_806FC4B0(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    cmpwi r3, -0x1
    stw r0, 0xf4(r1)
    stw r31, 0xec(r1)
    lis r31, lbl_808627E0@ha
    addi r31, r31, lbl_808627E0@l
    stw r30, 0xe8(r1)
    lis r30, lbl_807C5D00@ha
    addi r30, r30, lbl_807C5D00@l
    stw r29, 0xe4(r1)
    li r29, 0x1
    stw r28, 0xe0(r1)
    mr r28, r3
    beq lbl_fn_806FC4B0_000016B8
    bl fn_806D8F30
    lwz r0, 0xf8(r31)
    subf r0, r0, r3
    cmplwi r0, 0x2710
    bge lbl_fn_806FC4B0_00001620
    mr r3, r28
    addi r4, r31, 0x20
    bl fn_806FBAE0
    b lbl_fn_806FC4B0_00001624
lbl_fn_806FC4B0_00001620:
    li r3, 0x0
lbl_fn_806FC4B0_00001624:
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806FC4B0_000016B8
    addi r3, r31, 0x20
    bl fn_806FBAF0
    addi r4, r31, 0x20
    li r0, 0x1b
    addi r6, r1, 0x4
    subi r5, r4, 0x4
    mtctr r0
    nop
lbl_fn_806FC4B0_00001650:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_806FC4B0_00001650
    lwz r12, 0xfc(r31)
    addi r4, r1, 0x8
    mtctr r12
    bctrl
    lwz r3, 0x8(r30)
    addi r5, r31, 0x20
    lwz r4, 0x8c(r5)
    lwz r0, 0x90(r5)
    cmpwi r3, -0x1
    stw r4, 0x10(r30)
    stw r0, 0x14(r31)
    beq lbl_fn_806FC4B0_000016A0
    bl fn_806D7B30
    li r0, -0x1
    stw r0, 0x8(r30)
lbl_fn_806FC4B0_000016A0:
    lwz r3, 0xc(r30)
    cmpwi r3, -0x1
    beq lbl_fn_806FC4B0_000016B8
    bl fn_806D7B30
    li r0, -0x1
    stw r0, 0xc(r30)
lbl_fn_806FC4B0_000016B8:
    lwz r31, 0xec(r1)
    mr r3, r29
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_806FC5D0(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x150
    bl _savegpr_23
    lis r9, lbl_80860DD0@ha
    lis r30, lbl_807C5D00@ha
    lwz r0, lbl_80860DD0@l(r9)
    lis r31, lbl_808627E0@ha
    mr r24, r3
    mr r25, r4
    cmpwi r0, 0x1
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    addi r30, r30, lbl_807C5D00@l
    addi r31, r31, lbl_808627E0@l
    beq lbl_fn_806FC5D0_00001734
    li r3, 0x2
    b lbl_fn_806FC5D0_000019F0
lbl_fn_806FC5D0_00001734:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FC5D0_000017AC
    lwz r23, 0x100(r31)
    addi r7, r30, 0x14
    cmpwi r23, 0x0
    bne lbl_fn_806FC5D0_00001770
    lis r6, lbl_80860DD8@ha
    addi r3, r1, 0x8
    addi r5, r30, 0x30
    li r4, 0x40
    addi r6, r6, lbl_80860DD8@l
    crclr 6
    bl fn_806809C0
    addi r23, r1, 0x8
lbl_fn_806FC5D0_00001770:
    mr r3, r23
    bl fn_806D7EE0
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_806FC5D0_000017A8
    mr r3, r23
    bl fn_806D8060
    cmpwi r3, 0x0
    bne lbl_fn_806FC5D0_0000179C
    li r3, 0x0
    b lbl_fn_806FC5D0_000017A8
lbl_fn_806FC5D0_0000179C:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
lbl_fn_806FC5D0_000017A8:
    stw r3, 0x4(r31)
lbl_fn_806FC5D0_000017AC:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FC5D0_00001824
    lwz r23, 0x104(r31)
    addi r7, r30, 0x38
    cmpwi r23, 0x0
    bne lbl_fn_806FC5D0_000017E8
    lis r6, lbl_80860DD8@ha
    addi r3, r1, 0x48
    addi r5, r30, 0x30
    li r4, 0x40
    addi r6, r6, lbl_80860DD8@l
    crclr 6
    bl fn_806809C0
    addi r23, r1, 0x48
lbl_fn_806FC5D0_000017E8:
    mr r3, r23
    bl fn_806D7EE0
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_806FC5D0_00001820
    mr r3, r23
    bl fn_806D8060
    cmpwi r3, 0x0
    bne lbl_fn_806FC5D0_00001814
    li r3, 0x0
    b lbl_fn_806FC5D0_00001820
lbl_fn_806FC5D0_00001814:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
lbl_fn_806FC5D0_00001820:
    stw r3, 0x8(r31)
lbl_fn_806FC5D0_00001824:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FC5D0_0000189C
    lwz r23, 0x108(r31)
    addi r7, r30, 0x54
    cmpwi r23, 0x0
    bne lbl_fn_806FC5D0_00001860
    lis r6, lbl_80860DD8@ha
    addi r3, r1, 0x88
    addi r5, r30, 0x30
    li r4, 0x40
    addi r6, r6, lbl_80860DD8@l
    crclr 6
    bl fn_806809C0
    addi r23, r1, 0x88
lbl_fn_806FC5D0_00001860:
    mr r3, r23
    bl fn_806D7EE0
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_806FC5D0_00001898
    mr r3, r23
    bl fn_806D8060
    cmpwi r3, 0x0
    bne lbl_fn_806FC5D0_0000188C
    li r3, 0x0
    b lbl_fn_806FC5D0_00001898
lbl_fn_806FC5D0_0000188C:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
lbl_fn_806FC5D0_00001898:
    stw r3, 0xc(r31)
lbl_fn_806FC5D0_0000189C:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806FC5D0_000018C0
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806FC5D0_000018C0
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FC5D0_000018C8
lbl_fn_806FC5D0_000018C0:
    li r0, 0x0
    b lbl_fn_806FC5D0_000018CC
lbl_fn_806FC5D0_000018C8:
    li r0, 0x1
lbl_fn_806FC5D0_000018CC:
    cmpwi r0, 0x0
    bne lbl_fn_806FC5D0_000018DC
    li r3, 0x3
    b lbl_fn_806FC5D0_000019F0
lbl_fn_806FC5D0_000018DC:
    addi r3, r1, 0xc8
    li r4, 0x0
    li r5, 0x54
    bl memset
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FC5D0_0000190C
    li r3, 0x54
    li r4, 0x4
    li r5, 0x0
    bl fn_806D57A0
    stw r3, 0x0(r31)
lbl_fn_806FC5D0_0000190C:
    lwz r3, 0x0(r31)
    addi r4, r1, 0xc8
    bl fn_806D5930
    lwz r3, 0x0(r31)
    bl fn_806D58F0
    mr r4, r3
    lwz r3, 0x0(r31)
    subi r4, r4, 0x1
    bl fn_806D5900
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_806FC5D0_00001944
    li r3, 0x1
    b lbl_fn_806FC5D0_000019F0
lbl_fn_806FC5D0_00001944:
    li r3, 0x2
    li r4, 0x2
    li r5, 0x11
    bl fn_806D7AE0
    cmpwi r3, -0x1
    stw r3, 0x18(r23)
    bne lbl_fn_806FC5D0_000019A8
    li r24, 0x0
    b lbl_fn_806FC5D0_00001990
lbl_fn_806FC5D0_00001968:
    lwz r3, 0x0(r31)
    mr r4, r24
    bl fn_806D5900
    cmplw r23, r3
    bne lbl_fn_806FC5D0_0000198C
    lwz r3, 0x0(r31)
    mr r4, r24
    bl fn_806D5BE0
    b lbl_fn_806FC5D0_000019A0
lbl_fn_806FC5D0_0000198C:
    addi r24, r24, 0x1
lbl_fn_806FC5D0_00001990:
    lwz r3, 0x0(r31)
    bl fn_806D58F0
    cmpw r24, r3
    blt lbl_fn_806FC5D0_00001968
lbl_fn_806FC5D0_000019A0:
    li r3, 0x2
    b lbl_fn_806FC5D0_000019F0
lbl_fn_806FC5D0_000019A8:
    stw r24, 0x0(r23)
    li r4, 0x0
    li r0, 0x5
    mr r3, r23
    stw r26, 0x8(r23)
    stw r25, 0x4(r23)
    stw r27, 0xc(r23)
    stw r28, 0x10(r23)
    stw r29, 0x14(r23)
    stb r4, 0x42(r23)
    stb r4, 0x43(r23)
    stw r4, 0x3c(r23)
    sth r4, 0x40(r23)
    stw r0, 0x44(r23)
    stw r4, 0x30(r23)
    stw r4, 0x34(r23)
    bl fn_806FC030
    li r3, 0x0
lbl_fn_806FC5D0_000019F0:
    addi r11, r1, 0x150
    bl _restgpr_23
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_806FC900(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_808627E0@ha
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_808627E0@l(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806FC900_00001A44
    li r31, 0x0
    b lbl_fn_806FC900_00001A84
lbl_fn_806FC900_00001A44:
    li r30, 0x0
    b lbl_fn_806FC900_00001A70
lbl_fn_806FC900_00001A4C:
    lwz r3, lbl_808627E0@l(r31)
    mr r4, r30
    bl fn_806D5900
    lwz r0, 0x4(r3)
    cmpw r0, r29
    bne lbl_fn_806FC900_00001A6C
    mr r31, r3
    b lbl_fn_806FC900_00001A84
lbl_fn_806FC900_00001A6C:
    addi r30, r30, 0x1
lbl_fn_806FC900_00001A70:
    lwz r3, lbl_808627E0@l(r31)
    bl fn_806D58F0
    cmpw r30, r3
    blt lbl_fn_806FC900_00001A4C
    li r31, 0x0
lbl_fn_806FC900_00001A84:
    cmpwi r31, 0x0
    beq lbl_fn_806FC900_00001AAC
    lwz r3, 0x18(r31)
    cmpwi r3, -0x1
    beq lbl_fn_806FC900_00001AA4
    bl fn_806D7B30
    li r0, -0x1
    stw r0, 0x18(r31)
lbl_fn_806FC900_00001AA4:
    li r0, 0x6
    stw r0, 0x1c(r31)
lbl_fn_806FC900_00001AAC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806FC9C0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x134(r1)
    li r0, 0x8
    stw r31, 0x12c(r1)
    lis r31, lbl_808627E0@ha
    addi r31, r31, lbl_808627E0@l
    stw r30, 0x128(r1)
    mr r30, r3
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_806FC9C0_000020C4
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_806FC9C0_00001BB4
    li r29, 0x0
    b lbl_fn_806FC9C0_00001B44
lbl_fn_806FC9C0_00001B1C:
    lwz r3, 0x0(r31)
    mr r4, r29
    bl fn_806D5900
    cmplw r30, r3
    bne lbl_fn_806FC9C0_00001B40
    lwz r3, 0x0(r31)
    mr r4, r29
    bl fn_806D5BE0
    b lbl_fn_806FC9C0_000020C4
lbl_fn_806FC9C0_00001B40:
    addi r29, r29, 0x1
lbl_fn_806FC9C0_00001B44:
    lwz r3, 0x0(r31)
    bl fn_806D58F0
    cmpw r29, r3
    blt lbl_fn_806FC9C0_00001B1C
    b lbl_fn_806FC9C0_000020C4
    b lbl_fn_806FC9C0_00001BB4
lbl_fn_806FC9C0_00001B5C:
    bl fn_806D8650
    cmpwi r3, 0x0
    beq lbl_fn_806FC9C0_00001BC0
    lwz r3, 0x18(r30)
    addi r4, r31, 0x110
    addi r7, r1, 0x30
    addi r8, r1, 0x14
    li r5, 0x200
    li r6, 0x0
    bl fn_806D7CF0
    cmpwi r3, -0x1
    bne lbl_fn_806FC9C0_00001B98
    lwz r3, 0x18(r30)
    bl fn_806D7F20
    b lbl_fn_806FC9C0_00001BC0
lbl_fn_806FC9C0_00001B98:
    mr r4, r3
    addi r3, r31, 0x110
    addi r5, r1, 0x30
    bl fn_806FD420
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_806FC9C0_00001BC0
lbl_fn_806FC9C0_00001BB4:
    lwz r3, 0x18(r30)
    cmpwi r3, -0x1
    bne lbl_fn_806FC9C0_00001B5C
lbl_fn_806FC9C0_00001BC0:
    lwz r0, 0x1c(r30)
    cmplwi r0, 0x2
    ble lbl_fn_806FC9C0_00001BD4
    cmpwi r0, 0x4
    bne lbl_fn_806FC9C0_00001D40
lbl_fn_806FC9C0_00001BD4:
    bl fn_806D8F30
    lwz r0, 0x38(r30)
    cmplw r3, r0
    ble lbl_fn_806FC9C0_00001D40
    lwz r3, 0x30(r30)
    lwz r0, 0x34(r30)
    cmpw r3, r0
    ble lbl_fn_806FC9C0_00001C30
    lwz r0, 0x1c(r30)
    cmplwi r0, 0x2
    bgt lbl_fn_806FC9C0_00001C18
    mr r3, r30
    li r4, 0x2
    li r5, -0x1
    li r6, 0x0
    bl fn_806FBE00
    b lbl_fn_806FC9C0_00001D40
lbl_fn_806FC9C0_00001C18:
    mr r3, r30
    li r4, 0x3
    li r5, -0x1
    li r6, 0x0
    bl fn_806FBE00
    b lbl_fn_806FC9C0_00001D40
lbl_fn_806FC9C0_00001C30:
    lwz r4, 0x1c(r30)
    addi r0, r3, 0x1
    stw r0, 0x30(r30)
    cmplwi r4, 0x1
    bgt lbl_fn_806FC9C0_00001C50
    mr r3, r30
    bl fn_806FC030
    b lbl_fn_806FC9C0_00001D40
lbl_fn_806FC9C0_00001C50:
    cmpwi r4, 0x2
    bne lbl_fn_806FC9C0_00001C64
    mr r3, r30
    bl fn_806FC170
    b lbl_fn_806FC9C0_00001D40
lbl_fn_806FC9C0_00001C64:
    lis r4, lbl_807C5D00@ha
    addi r3, r1, 0xd0
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    bl memcpy
    li r3, 0x4
    li r0, 0x7
    stb r3, 0xd6(r1)
    stb r0, 0xd7(r1)
    lwz r3, 0x4(r30)
    bl fn_806A426C
    stw r3, 0xd8(r1)
    lwz r0, 0x3c(r30)
    stw r0, 0xdc(r1)
    lhz r3, 0x40(r30)
    bl fn_806A4270
    sth r3, 0xe0(r1)
    li r3, 0x0
    lbz r0, 0x42(r30)
    stb r0, 0xe2(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806FC9C0_00001CCC
    lbz r0, 0x43(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806FC9C0_00001CCC
    li r3, 0x1
lbl_fn_806FC9C0_00001CCC:
    stb r3, 0xe3(r1)
    addi r3, r1, 0x10
    lwz r0, 0x3c(r30)
    stw r0, 0x10(r1)
    bl fn_806A420C
    lwz r28, 0x0(r30)
    lhz r3, 0x40(r30)
    cmpwi r28, -0x1
    lwz r29, 0x3c(r30)
    beq lbl_fn_806FC9C0_00001CF8
    b lbl_fn_806FC9C0_00001CFC
lbl_fn_806FC9C0_00001CF8:
    lwz r28, 0x18(r30)
lbl_fn_806FC9C0_00001CFC:
    li r0, 0x2
    stb r0, 0x29(r1)
    bl fn_806A4270
    sth r3, 0x2a(r1)
    mr r3, r28
    addi r4, r1, 0xd0
    addi r7, r1, 0x28
    stw r29, 0x2c(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    bl fn_806D8F30
    addi r3, r3, 0x2bc
    li r0, 0x7
    stw r3, 0x38(r30)
    stw r0, 0x34(r30)
lbl_fn_806FC9C0_00001D40:
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x3
    bne lbl_fn_806FC9C0_00001D70
    bl fn_806D8F30
    lwz r0, 0x38(r30)
    cmplw r3, r0
    ble lbl_fn_806FC9C0_00001D70
    mr r3, r30
    li r4, 0x1
    li r5, -0x1
    li r6, 0x0
    bl fn_806FBE00
lbl_fn_806FC9C0_00001D70:
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x4
    bne lbl_fn_806FC9C0_00001EA4
    bl fn_806D8F30
    lwz r0, 0x38(r30)
    cmplw r3, r0
    ble lbl_fn_806FC9C0_00001EA4
    lwz r3, 0x30(r30)
    lwz r0, 0x34(r30)
    cmpw r3, r0
    ble lbl_fn_806FC9C0_00001DB4
    mr r3, r30
    li r4, 0x3
    li r5, -0x1
    li r6, 0x0
    bl fn_806FBE00
    b lbl_fn_806FC9C0_00001EA4
lbl_fn_806FC9C0_00001DB4:
    addi r0, r3, 0x1
    lis r4, lbl_807C5D00@ha
    stw r0, 0x30(r30)
    addi r3, r1, 0x84
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    bl memcpy
    li r3, 0x4
    li r0, 0x7
    stb r3, 0x8a(r1)
    stb r0, 0x8b(r1)
    lwz r3, 0x4(r30)
    bl fn_806A426C
    stw r3, 0x8c(r1)
    lwz r0, 0x3c(r30)
    stw r0, 0x90(r1)
    lhz r3, 0x40(r30)
    bl fn_806A4270
    sth r3, 0x94(r1)
    li r3, 0x0
    lbz r0, 0x42(r30)
    stb r0, 0x96(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806FC9C0_00001E24
    lbz r0, 0x43(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806FC9C0_00001E24
    li r3, 0x1
lbl_fn_806FC9C0_00001E24:
    stb r3, 0x97(r1)
    addi r3, r1, 0xc
    lwz r0, 0x3c(r30)
    stw r0, 0xc(r1)
    bl fn_806A420C
    lwz r28, 0x0(r30)
    lhz r3, 0x40(r30)
    cmpwi r28, -0x1
    lwz r29, 0x3c(r30)
    beq lbl_fn_806FC9C0_00001E50
    b lbl_fn_806FC9C0_00001E54
lbl_fn_806FC9C0_00001E50:
    lwz r28, 0x18(r30)
lbl_fn_806FC9C0_00001E54:
    li r0, 0x2
    stb r0, 0x21(r1)
    bl fn_806A4270
    sth r3, 0x22(r1)
    mr r3, r28
    addi r4, r1, 0x84
    addi r7, r1, 0x20
    stw r29, 0x24(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    bl fn_806D8F30
    addi r3, r3, 0x2bc
    li r0, 0x7
    stw r3, 0x38(r30)
    stw r0, 0x34(r30)
    bl fn_806D8F30
    addi r0, r3, 0x2bc
    stw r0, 0x38(r30)
lbl_fn_806FC9C0_00001EA4:
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x7
    bne lbl_fn_806FC9C0_00001FC0
    bl fn_806D8F30
    lwz r0, 0x38(r30)
    cmplw r3, r0
    ble lbl_fn_806FC9C0_00001FC0
    lwz r3, 0x30(r30)
    lwz r0, 0x34(r30)
    cmpw r3, r0
    ble lbl_fn_806FC9C0_00001EDC
    li r0, 0x5
    stw r0, 0x1c(r30)
    b lbl_fn_806FC9C0_00001FC0
lbl_fn_806FC9C0_00001EDC:
    lis r4, lbl_807C5D00@ha
    addi r3, r1, 0x38
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    bl memcpy
    li r3, 0x4
    li r0, 0xd
    stb r3, 0x3e(r1)
    stb r0, 0x3f(r1)
    lwz r3, 0x4(r30)
    bl fn_806A426C
    stw r3, 0x40(r1)
    lis r3, lbl_807C5D10@ha
    lwz r4, lbl_807C5D10@l(r3)
    lis r29, lbl_80860DD8@ha
    lwz r0, 0x8(r30)
    addi r3, r29, lbl_80860DD8@l
    stb r0, 0x45(r1)
    lwz r0, 0x14(r31)
    lwz r5, 0x44(r30)
    cntlzw r5, r5
    stw r4, 0x47(r1)
    extrwi r4, r5, 8, 19
    stb r4, 0x46(r1)
    stw r0, 0x4b(r1)
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_806FC9C0_00001F5C
    addi r3, r1, 0x4f
    addi r4, r29, lbl_80860DD8@l
    li r5, 0x32
    bl memcpy
lbl_fn_806FC9C0_00001F5C:
    lwz r0, 0x4(r31)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806A420C
    lwz r28, 0x18(r30)
    li r0, 0x2
    lwz r29, 0x4(r31)
    li r3, 0x6cfd
    stb r0, 0x19(r1)
    bl fn_806A4270
    sth r3, 0x1a(r1)
    mr r3, r28
    addi r4, r1, 0x38
    addi r7, r1, 0x18
    stw r29, 0x1c(r1)
    li r5, 0x49
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    lwz r3, 0x30(r30)
    addi r0, r3, 0x1
    stw r0, 0x30(r30)
    bl fn_806D8F30
    addi r0, r3, 0x1f4
    stw r0, 0x38(r30)
lbl_fn_806FC9C0_00001FC0:
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x5
    beq lbl_fn_806FC9C0_00001FD4
    cmpwi r0, 0x8
    bne lbl_fn_806FC9C0_00002078
lbl_fn_806FC9C0_00001FD4:
    lbz r0, 0x43(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806FC9C0_00001FE4
    bl fn_806D8F30
lbl_fn_806FC9C0_00001FE4:
    lwz r0, 0x0(r30)
    cmpwi r0, -0x1
    bne lbl_fn_806FC9C0_00001FF8
    li r0, -0x1
    stw r0, 0x18(r30)
lbl_fn_806FC9C0_00001FF8:
    lwz r0, 0x0(r31)
    lwz r29, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806FC9C0_00002010
    li r28, 0x0
    b lbl_fn_806FC9C0_00002050
lbl_fn_806FC9C0_00002010:
    li r28, 0x0
    b lbl_fn_806FC9C0_0000203C
lbl_fn_806FC9C0_00002018:
    lwz r3, 0x0(r31)
    mr r4, r28
    bl fn_806D5900
    lwz r0, 0x4(r3)
    cmpw r0, r29
    bne lbl_fn_806FC9C0_00002038
    mr r28, r3
    b lbl_fn_806FC9C0_00002050
lbl_fn_806FC9C0_00002038:
    addi r28, r28, 0x1
lbl_fn_806FC9C0_0000203C:
    lwz r3, 0x0(r31)
    bl fn_806D58F0
    cmpw r28, r3
    blt lbl_fn_806FC9C0_00002018
    li r28, 0x0
lbl_fn_806FC9C0_00002050:
    cmpwi r28, 0x0
    beq lbl_fn_806FC9C0_00002078
    lwz r3, 0x18(r28)
    cmpwi r3, -0x1
    beq lbl_fn_806FC9C0_00002070
    bl fn_806D7B30
    li r0, -0x1
    stw r0, 0x18(r28)
lbl_fn_806FC9C0_00002070:
    li r0, 0x6
    stw r0, 0x1c(r28)
lbl_fn_806FC9C0_00002078:
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_806FC9C0_000020C4
    li r28, 0x0
    b lbl_fn_806FC9C0_000020B4
lbl_fn_806FC9C0_0000208C:
    lwz r3, 0x0(r31)
    mr r4, r28
    bl fn_806D5900
    cmplw r30, r3
    bne lbl_fn_806FC9C0_000020B0
    lwz r3, 0x0(r31)
    mr r4, r28
    bl fn_806D5BE0
    b lbl_fn_806FC9C0_000020C4
lbl_fn_806FC9C0_000020B0:
    addi r28, r28, 0x1
lbl_fn_806FC9C0_000020B4:
    lwz r3, 0x0(r31)
    bl fn_806D58F0
    cmpw r28, r3
    blt lbl_fn_806FC9C0_0000208C
lbl_fn_806FC9C0_000020C4:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
