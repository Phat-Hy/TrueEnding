#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80627180(void);
extern void fn_80627400(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_8063450C(void);
extern void fn_8063472C(void);
extern void fn_806347E4(void);
extern void fn_8063A778(void);
extern void fn_80642310(void);
extern void fn_806425D4(void);
extern void fn_80642764(void);
extern void fn_8064281C(void);
extern void fn_806428EC(void);
extern void fn_80642990(void);
extern void fn_8067E23C(void);
extern void fn_80682544(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807B57BC[];
extern u8 jumptable_807B58E8[];
extern u8 jumptable_807B590C[];
extern u8 jumptable_807B5974[];
extern u8 jumptable_807B5998[];
extern u8 jumptable_807B59BC[];
extern u8 lbl_80764F70[];
extern u8 lbl_807B5620[];
extern u8 lbl_807B5664[];
extern u8 lbl_807B5690[];
extern u8 lbl_807B56B8[];
extern u8 lbl_807B56F0[];
extern u8 lbl_807B5868[];
extern u8 lbl_807B58AC[];
extern u8 lbl_807B5930[];
extern u8 lbl_808227E0[];

/* Small data declarations */
extern u32 lbl_8087EAF0;

/* Function declarations */
void fn_8063B644(void);
void fn_8063B7D0(void);
void fn_8063B9AC(void);
void fn_8063BAE8(void);
void fn_8063BCD4(void);
void fn_8063BECC(void);
void fn_8063BFDC(void);
void fn_8063C110(void);
void fn_8063C2E8(void);
void fn_8063C2F4(void);
void fn_8063C300(void);
void fn_8063C518(void);
void fn_8063C6CC(void);
void fn_8063C72C(void);
void fn_8063C7D4(void);
void fn_8063C834(void);
void fn_8063C8F4(void);
void fn_8063C9D4(void);
void fn_8063CA5C(void);
void fn_8063CAE8(void);
void fn_8063CB48(void);
void fn_8063CBA4(void);
void fn_8063CD44(void);
void fn_8063CDE4(void);
void fn_8063CFC8(void);
void fn_8063D068(void);
void fn_8063D0F8(void);
void fn_8063D174(void);
void fn_8063D200(void);
void fn_8063D2D8(void);
void fn_8063D378(void);
void fn_8063D3F4(void);
void fn_8063D470(void);
void fn_8063D4EC(void);
void fn_8063D5E8(void);
void fn_8063D6D0(void);
void fn_8063D730(void);
void fn_8063D7E4(void);
void fn_8063D8B0(void);
void fn_8063D934(void);
void fn_8063D9E8(void);
void fn_8063DA6C(void);
void fn_8063DB1C(void);
void fn_8063DBB0(void);
void fn_8063DC0C(void);
void fn_8063DDC8(void);
void fn_8063DE3C(void);
void fn_8063DE9C(void);
void fn_8063E05C(void);
void fn_8063E10C(void);
void fn_8063E24C(void);
void fn_8063E284(void);
void fn_8063E2B4(void);
void fn_8063E2F8(void);
void fn_8063E33C(void);
void fn_8063E3B0(void);
void fn_8063E424(void);
void fn_8063E468(void);
void fn_8063E4AC(void);
void fn_8063E568(void);
void fn_8063E5FC(void);
void fn_8063E66C(void);
void fn_8063E6CC(void);
void fn_8063E728(void);
void fn_8063E750(void);
void fn_8063E7B0(void);
void fn_8063E82C(void);
void fn_8063E8A4(void);
void fn_8063ECC4(void);
void fn_8063ECF4(void);
void fn_8063ED24(void);
void fn_8063ED54(void);

asm void fn_8063B644(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r7, lbl_808227E0@ha
    mr r26, r3
    addi r7, r7, lbl_808227E0@l
    mr r31, r4
    mr r27, r5
    mr r28, r6
    addi r29, r7, 0xac
    li r30, 0x0
lbl_fn_8063B644_00000034:
    lbz r0, 0x0(r29)
    cmplwi r0, 0x1
    bne lbl_fn_8063B644_00000070
    lhz r0, 0x10(r29)
    cmplw r0, r27
    bne lbl_fn_8063B644_00000070
    lbz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8063B644_00000080
    mr r3, r26
    addi r4, r29, 0x9
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_8063B644_00000080
lbl_fn_8063B644_00000070:
    addi r30, r30, 0x1
    addi r29, r29, 0x60
    cmplwi r30, 0x8
    blt lbl_fn_8063B644_00000034
lbl_fn_8063B644_00000080:
    clrlwi r0, r30, 16
    cmplwi r0, 0x8
    bne lbl_fn_8063B644_00000108
    lis r3, lbl_808227E0@ha
    addi r3, r3, lbl_808227E0@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8063B644_000000B0
    lis r3, 0xe
    la r4, lbl_8087EAF0
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_8063B644_000000B0:
    lis r3, lbl_808227E0@ha
    addi r3, r3, lbl_808227E0@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8063B644_000000D8
    lis r3, 0xe
    lis r4, lbl_807B5620@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B5620@l
    bl fn_80629810
lbl_fn_8063B644_000000D8:
    lis r3, lbl_808227E0@ha
    addi r3, r3, lbl_808227E0@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8063B644_000000FC
    lis r3, 0xe
    la r4, lbl_8087EAF0
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_8063B644_000000FC:
    mr r3, r31
    bl fn_806428EC
    b lbl_fn_8063B644_00000174
lbl_fn_8063B644_00000108:
    li r0, 0x3
    mr r4, r26
    stb r0, 0x0(r29)
    addi r3, r29, 0x9
    li r5, 0x6
    bl memcpy
    sth r31, 0x6(r29)
    mr r3, r26
    mr r4, r28
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    bl fn_806425D4
    lis r3, lbl_808227E0@ha
    addi r3, r3, lbl_808227E0@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8063B644_00000168
    lis r3, 0xe
    lis r4, lbl_807B5664@ha
    lhz r5, 0x6(r29)
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B5664@l
    bl fn_80629830
lbl_fn_8063B644_00000168:
    mr r3, r31
    addi r4, r29, 0x24
    bl fn_80642764
lbl_fn_8063B644_00000174:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063B7D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808227E0@ha
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r5, r5, lbl_808227E0@l
    stw r31, 0xc(r1)
    addi r31, r5, 0xac
    li r5, 0x0
    stw r30, 0x8(r1)
    mtctr r0
lbl_fn_8063B7D0_000001B8:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063B7D0_000001D4
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063B7D0_000001D4
    b lbl_fn_8063B7D0_00000244
lbl_fn_8063B7D0_000001D4:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063B7D0_000001F4
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063B7D0_000001F4
    b lbl_fn_8063B7D0_00000244
lbl_fn_8063B7D0_000001F4:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063B7D0_00000214
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063B7D0_00000214
    b lbl_fn_8063B7D0_00000244
lbl_fn_8063B7D0_00000214:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063B7D0_00000234
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063B7D0_00000234
    b lbl_fn_8063B7D0_00000244
lbl_fn_8063B7D0_00000234:
    addi r5, r5, 0x1
    addi r31, r31, 0x60
    bdnz lbl_fn_8063B7D0_000001B8
    li r31, 0x0
lbl_fn_8063B7D0_00000244:
    cmpwi r31, 0x0
    beq lbl_fn_8063B7D0_00000350
    cmpwi r4, 0x0
    bne lbl_fn_8063B7D0_00000274
    lbz r0, 0x0(r31)
    cmplwi r0, 0x2
    bne lbl_fn_8063B7D0_00000274
    li r0, 0x3
    addi r4, r31, 0x24
    stb r0, 0x0(r31)
    bl fn_80642764
    b lbl_fn_8063B7D0_00000350
lbl_fn_8063B7D0_00000274:
    lwz r12, 0x20(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8063B7D0_00000290
    lhz r3, 0x4(r31)
    li r4, 0x101
    mtctr r12
    bctrl
lbl_fn_8063B7D0_00000290:
    lhz r30, 0x10(r31)
    b lbl_fn_8063B7D0_000002A4
lbl_fn_8063B7D0_00000298:
    addi r3, r31, 0x14
    bl fn_80627400
    bl fn_80626D50
lbl_fn_8063B7D0_000002A4:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8063B7D0_00000298
    lis r3, lbl_808227E0@ha
    li r4, 0x0
    addi r3, r3, lbl_808227E0@l
    li r0, 0x2
    stb r4, 0x0(r31)
    addi r4, r3, 0xac
    li r3, 0x0
    mtctr r0
lbl_fn_8063B7D0_000002D0:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8063B7D0_000002E8
    lhz r0, 0x10(r4)
    cmplw r0, r30
    beq lbl_fn_8063B7D0_00000350
lbl_fn_8063B7D0_000002E8:
    lbz r0, 0x60(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063B7D0_00000304
    lhz r0, 0x70(r4)
    cmplw r0, r30
    beq lbl_fn_8063B7D0_00000350
lbl_fn_8063B7D0_00000304:
    lbz r0, 0xc0(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063B7D0_00000320
    lhz r0, 0xd0(r4)
    cmplw r0, r30
    beq lbl_fn_8063B7D0_00000350
lbl_fn_8063B7D0_00000320:
    lbz r0, 0x120(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063B7D0_0000033C
    lhz r0, 0x130(r4)
    cmplw r0, r30
    beq lbl_fn_8063B7D0_00000350
lbl_fn_8063B7D0_0000033C:
    addi r3, r3, 0x1
    addi r4, r4, 0x180
    bdnz lbl_fn_8063B7D0_000002D0
    mr r3, r30
    bl fn_80642310
lbl_fn_8063B7D0_00000350:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063B9AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808227E0@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r5, r5, lbl_808227E0@l
    stw r31, 0xc(r1)
    addi r31, r5, 0xac
    mtctr r0
lbl_fn_8063B9AC_00000390:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063B9AC_000003AC
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063B9AC_000003AC
    b lbl_fn_8063B9AC_0000041C
lbl_fn_8063B9AC_000003AC:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063B9AC_000003CC
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063B9AC_000003CC
    b lbl_fn_8063B9AC_0000041C
lbl_fn_8063B9AC_000003CC:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063B9AC_000003EC
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063B9AC_000003EC
    b lbl_fn_8063B9AC_0000041C
lbl_fn_8063B9AC_000003EC:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063B9AC_0000040C
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063B9AC_0000040C
    b lbl_fn_8063B9AC_0000041C
lbl_fn_8063B9AC_0000040C:
    addi r6, r6, 0x1
    addi r31, r31, 0x60
    bdnz lbl_fn_8063B9AC_00000390
    li r31, 0x0
lbl_fn_8063B9AC_0000041C:
    cmpwi r31, 0x0
    beq lbl_fn_8063B9AC_00000490
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8063B9AC_0000043C
    lhz r0, 0x4(r4)
    cmplwi r0, 0x69b
    ble lbl_fn_8063B9AC_00000448
lbl_fn_8063B9AC_0000043C:
    li r0, 0x69b
    sth r0, 0x12(r31)
    b lbl_fn_8063B9AC_0000044C
lbl_fn_8063B9AC_00000448:
    sth r0, 0x12(r31)
lbl_fn_8063B9AC_0000044C:
    li r0, 0x0
    stb r0, 0x20(r4)
    stb r0, 0x2(r4)
    sth r0, 0x0(r4)
    bl fn_8064281C
    lbz r0, 0x1(r31)
    ori r3, r0, 0x2
    rlwinm. r0, r3, 0, 29, 29
    stb r3, 0x1(r31)
    beq lbl_fn_8063B9AC_00000490
    li r0, 0x4
    li r4, 0x100
    stb r0, 0x0(r31)
    lwz r12, 0x20(r31)
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
lbl_fn_8063B9AC_00000490:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063BAE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808227E0@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r5, r5, lbl_808227E0@l
    stw r31, 0xc(r1)
    addi r31, r5, 0xac
    stw r30, 0x8(r1)
    mtctr r0
lbl_fn_8063BAE8_000004D0:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063BAE8_000004EC
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063BAE8_000004EC
    b lbl_fn_8063BAE8_0000055C
lbl_fn_8063BAE8_000004EC:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BAE8_0000050C
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063BAE8_0000050C
    b lbl_fn_8063BAE8_0000055C
lbl_fn_8063BAE8_0000050C:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BAE8_0000052C
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063BAE8_0000052C
    b lbl_fn_8063BAE8_0000055C
lbl_fn_8063BAE8_0000052C:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BAE8_0000054C
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063BAE8_0000054C
    b lbl_fn_8063BAE8_0000055C
lbl_fn_8063BAE8_0000054C:
    addi r6, r6, 0x1
    addi r31, r31, 0x60
    bdnz lbl_fn_8063BAE8_000004D0
    li r31, 0x0
lbl_fn_8063BAE8_0000055C:
    cmpwi r31, 0x0
    beq lbl_fn_8063BAE8_00000678
    lhz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8063BAE8_000005A4
    lbz r0, 0x1(r31)
    ori r3, r0, 0x4
    rlwinm. r0, r3, 0, 30, 30
    stb r3, 0x1(r31)
    beq lbl_fn_8063BAE8_00000678
    li r0, 0x4
    li r4, 0x100
    stb r0, 0x0(r31)
    lwz r12, 0x20(r31)
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
    b lbl_fn_8063BAE8_00000678
lbl_fn_8063BAE8_000005A4:
    lwz r12, 0x20(r31)
    li r4, 0x101
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
    lhz r30, 0x10(r31)
    b lbl_fn_8063BAE8_000005CC
lbl_fn_8063BAE8_000005C0:
    addi r3, r31, 0x14
    bl fn_80627400
    bl fn_80626D50
lbl_fn_8063BAE8_000005CC:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8063BAE8_000005C0
    lis r3, lbl_808227E0@ha
    li r4, 0x0
    addi r3, r3, lbl_808227E0@l
    li r0, 0x2
    stb r4, 0x0(r31)
    addi r4, r3, 0xac
    li r3, 0x0
    mtctr r0
lbl_fn_8063BAE8_000005F8:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8063BAE8_00000610
    lhz r0, 0x10(r4)
    cmplw r0, r30
    beq lbl_fn_8063BAE8_00000678
lbl_fn_8063BAE8_00000610:
    lbz r0, 0x60(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BAE8_0000062C
    lhz r0, 0x70(r4)
    cmplw r0, r30
    beq lbl_fn_8063BAE8_00000678
lbl_fn_8063BAE8_0000062C:
    lbz r0, 0xc0(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BAE8_00000648
    lhz r0, 0xd0(r4)
    cmplw r0, r30
    beq lbl_fn_8063BAE8_00000678
lbl_fn_8063BAE8_00000648:
    lbz r0, 0x120(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BAE8_00000664
    lhz r0, 0x130(r4)
    cmplw r0, r30
    beq lbl_fn_8063BAE8_00000678
lbl_fn_8063BAE8_00000664:
    addi r3, r3, 0x1
    addi r4, r4, 0x180
    bdnz lbl_fn_8063BAE8_000005F8
    mr r3, r30
    bl fn_80642310
lbl_fn_8063BAE8_00000678:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063BCD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_808227E0@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_808227E0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x28(r5)
    cmplwi r0, 0x4
    blt lbl_fn_8063BCD4_000006DC
    lis r3, 0xe
    lis r4, lbl_807B5690@ha
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B5690@l
    bl fn_80629830
lbl_fn_8063BCD4_000006DC:
    lis r3, lbl_808227E0@ha
    li r0, 0x2
    addi r3, r3, lbl_808227E0@l
    li r4, 0x0
    addi r31, r3, 0xac
    mtctr r0
lbl_fn_8063BCD4_000006F4:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063BCD4_00000710
    lhz r0, 0x6(r31)
    cmplw r0, r29
    bne lbl_fn_8063BCD4_00000710
    b lbl_fn_8063BCD4_00000780
lbl_fn_8063BCD4_00000710:
    lbzu r0, 0x60(r31)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BCD4_00000730
    lhz r0, 0x6(r31)
    cmplw r0, r29
    bne lbl_fn_8063BCD4_00000730
    b lbl_fn_8063BCD4_00000780
lbl_fn_8063BCD4_00000730:
    lbzu r0, 0x60(r31)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BCD4_00000750
    lhz r0, 0x6(r31)
    cmplw r0, r29
    bne lbl_fn_8063BCD4_00000750
    b lbl_fn_8063BCD4_00000780
lbl_fn_8063BCD4_00000750:
    lbzu r0, 0x60(r31)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BCD4_00000770
    lhz r0, 0x6(r31)
    cmplw r0, r29
    bne lbl_fn_8063BCD4_00000770
    b lbl_fn_8063BCD4_00000780
lbl_fn_8063BCD4_00000770:
    addi r4, r4, 0x1
    addi r31, r31, 0x60
    bdnz lbl_fn_8063BCD4_000006F4
    li r31, 0x0
lbl_fn_8063BCD4_00000780:
    cmpwi r31, 0x0
    beq lbl_fn_8063BCD4_0000086C
    cmpwi r30, 0x0
    beq lbl_fn_8063BCD4_00000798
    mr r3, r29
    bl fn_80642990
lbl_fn_8063BCD4_00000798:
    lwz r12, 0x20(r31)
    li r4, 0x101
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
    lhz r30, 0x10(r31)
    b lbl_fn_8063BCD4_000007C0
lbl_fn_8063BCD4_000007B4:
    addi r3, r31, 0x14
    bl fn_80627400
    bl fn_80626D50
lbl_fn_8063BCD4_000007C0:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8063BCD4_000007B4
    lis r3, lbl_808227E0@ha
    li r4, 0x0
    addi r3, r3, lbl_808227E0@l
    li r0, 0x2
    stb r4, 0x0(r31)
    addi r4, r3, 0xac
    li r3, 0x0
    mtctr r0
lbl_fn_8063BCD4_000007EC:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8063BCD4_00000804
    lhz r0, 0x10(r4)
    cmplw r0, r30
    beq lbl_fn_8063BCD4_0000086C
lbl_fn_8063BCD4_00000804:
    lbz r0, 0x60(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BCD4_00000820
    lhz r0, 0x70(r4)
    cmplw r0, r30
    beq lbl_fn_8063BCD4_0000086C
lbl_fn_8063BCD4_00000820:
    lbz r0, 0xc0(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BCD4_0000083C
    lhz r0, 0xd0(r4)
    cmplw r0, r30
    beq lbl_fn_8063BCD4_0000086C
lbl_fn_8063BCD4_0000083C:
    lbz r0, 0x120(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BCD4_00000858
    lhz r0, 0x130(r4)
    cmplw r0, r30
    beq lbl_fn_8063BCD4_0000086C
lbl_fn_8063BCD4_00000858:
    addi r3, r3, 0x1
    addi r4, r4, 0x180
    bdnz lbl_fn_8063BCD4_000007EC
    mr r3, r30
    bl fn_80642310
lbl_fn_8063BCD4_0000086C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063BECC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808227E0@ha
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r5, r5, lbl_808227E0@l
    stw r31, 0xc(r1)
    addi r31, r5, 0xac
    li r5, 0x0
    mtctr r0
lbl_fn_8063BECC_000008B0:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063BECC_000008CC
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063BECC_000008CC
    b lbl_fn_8063BECC_0000093C
lbl_fn_8063BECC_000008CC:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BECC_000008EC
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063BECC_000008EC
    b lbl_fn_8063BECC_0000093C
lbl_fn_8063BECC_000008EC:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BECC_0000090C
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063BECC_0000090C
    b lbl_fn_8063BECC_0000093C
lbl_fn_8063BECC_0000090C:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BECC_0000092C
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_fn_8063BECC_0000092C
    b lbl_fn_8063BECC_0000093C
lbl_fn_8063BECC_0000092C:
    addi r5, r5, 0x1
    addi r31, r31, 0x60
    bdnz lbl_fn_8063BECC_000008B0
    li r31, 0x0
lbl_fn_8063BECC_0000093C:
    cmpwi r31, 0x0
    bne lbl_fn_8063BECC_00000950
    mr r3, r4
    bl fn_80626D50
    b lbl_fn_8063BECC_00000984
lbl_fn_8063BECC_00000950:
    lbz r0, 0x0(r31)
    cmplwi r0, 0x4
    bne lbl_fn_8063BECC_0000097C
    addi r3, r31, 0x14
    bl fn_80627180
    lwz r12, 0x20(r31)
    li r4, 0x102
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
    b lbl_fn_8063BECC_00000984
lbl_fn_8063BECC_0000097C:
    mr r3, r4
    bl fn_80626D50
lbl_fn_8063BECC_00000984:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063BFDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808227E0@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_808227E0@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x28(r5)
    cmplwi r0, 0x4
    blt lbl_fn_8063BFDC_000009E4
    lis r3, 0xe
    lis r4, lbl_807B56B8@ha
    mr r5, r31
    mr r6, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B56B8@l
    bl fn_80629850
lbl_fn_8063BFDC_000009E4:
    lis r3, lbl_808227E0@ha
    li r0, 0x2
    addi r3, r3, lbl_808227E0@l
    li r4, 0x0
    addi r3, r3, 0xac
    mtctr r0
lbl_fn_8063BFDC_000009FC:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063BFDC_00000A18
    lhz r0, 0x6(r3)
    cmplw r0, r30
    bne lbl_fn_8063BFDC_00000A18
    b lbl_fn_8063BFDC_00000A88
lbl_fn_8063BFDC_00000A18:
    lbzu r0, 0x60(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BFDC_00000A38
    lhz r0, 0x6(r3)
    cmplw r0, r30
    bne lbl_fn_8063BFDC_00000A38
    b lbl_fn_8063BFDC_00000A88
lbl_fn_8063BFDC_00000A38:
    lbzu r0, 0x60(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BFDC_00000A58
    lhz r0, 0x6(r3)
    cmplw r0, r30
    bne lbl_fn_8063BFDC_00000A58
    b lbl_fn_8063BFDC_00000A88
lbl_fn_8063BFDC_00000A58:
    lbzu r0, 0x60(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063BFDC_00000A78
    lhz r0, 0x6(r3)
    cmplw r0, r30
    bne lbl_fn_8063BFDC_00000A78
    b lbl_fn_8063BFDC_00000A88
lbl_fn_8063BFDC_00000A78:
    addi r4, r4, 0x1
    addi r3, r3, 0x60
    bdnz lbl_fn_8063BFDC_000009FC
    li r3, 0x0
lbl_fn_8063BFDC_00000A88:
    cmpwi r3, 0x0
    beq lbl_fn_8063BFDC_00000AB4
    neg r0, r31
    lwz r12, 0x20(r3)
    or r0, r0, r31
    lhz r3, 0x4(r3)
    srawi r4, r0, 31
    addi r0, r4, 0x104
    clrlwi r4, r0, 16
    mtctr r12
    bctrl
lbl_fn_8063BFDC_00000AB4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063C110(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_807B56F0@ha
    cmplwi r3, 0x2
    stw r0, 0x24(r1)
    addi r7, r7, lbl_807B56F0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    bge lbl_fn_8063C110_00000C8C
    lis r8, lbl_808227E0@ha
    clrlslwi r0, r3, 16, 4
    addi r8, r8, lbl_808227E0@l
    add r31, r8, r0
    lbz r0, 0xf(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063C110_00000C8C
    lhz r0, 0xc(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8063C110_00000B84
    bge lbl_fn_8063C110_00000B2C
    cmpwi r0, 0x2
    bge lbl_fn_8063C110_00000B38
    b lbl_fn_8063C110_00000C5C
lbl_fn_8063C110_00000B2C:
    cmpwi r0, 0x5
    bge lbl_fn_8063C110_00000C5C
    b lbl_fn_8063C110_00000BD0
lbl_fn_8063C110_00000B38:
    lbz r6, 0x1(r4)
    li r3, 0x114
    lbz r0, 0x28(r8)
    addi r30, r1, 0x8
    stb r6, 0xa(r1)
    cmplwi r0, 0x4
    lbz r0, 0x0(r4)
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r0, r0
    andc r0, r3, r0
    sth r0, 0x8(r1)
    blt lbl_fn_8063C110_00000C5C
    lis r3, 0xe
    addi r4, r7, 0x0
    addi r3, r3, 0x3
    clrlwi r5, r0, 16
    bl fn_80629850
    b lbl_fn_8063C110_00000C5C
lbl_fn_8063C110_00000B84:
    lhz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8063C110_00000BB0
    lbz r0, 0x28(r8)
    cmplwi r0, 0x4
    blt lbl_fn_8063C110_00000C5C
    lis r3, 0xe
    addi r4, r7, 0x3c
    addi r3, r3, 0x3
    bl fn_80629830
    b lbl_fn_8063C110_00000C5C
lbl_fn_8063C110_00000BB0:
    lbz r0, 0x28(r8)
    cmplwi r0, 0x4
    blt lbl_fn_8063C110_00000C5C
    lis r3, 0xe
    addi r4, r7, 0x70
    addi r3, r3, 0x3
    bl fn_80629810
    b lbl_fn_8063C110_00000C5C
lbl_fn_8063C110_00000BD0:
    lhz r0, 0x0(r4)
    clrlwi r0, r0, 24
    cmplwi r0, 0x8
    bgt lbl_fn_8063C110_00000C30
    lis r3, jumptable_807B57BC@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B57BC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r5, 0x0
    b lbl_fn_8063C110_00000C34
    li r5, 0x10b
    b lbl_fn_8063C110_00000C34
    li r5, 0x103
    b lbl_fn_8063C110_00000C34
    li r5, 0x109
    b lbl_fn_8063C110_00000C34
    li r5, 0x10c
    b lbl_fn_8063C110_00000C34
    li r5, 0x10d
    b lbl_fn_8063C110_00000C34
    li r5, 0x115
    b lbl_fn_8063C110_00000C34
lbl_fn_8063C110_00000C30:
    li r5, 0x114
lbl_fn_8063C110_00000C34:
    lis r3, lbl_808227E0@ha
    sth r5, 0x0(r4)
    addi r3, r3, lbl_808227E0@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8063C110_00000C5C
    lis r3, 0xe
    addi r4, r7, 0x98
    addi r3, r3, 0x3
    bl fn_80629830
lbl_fn_8063C110_00000C5C:
    lwz r12, 0x4(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8063C110_00000C78
    mr r4, r30
    lhz r3, 0xc(r31)
    mtctr r12
    bctrl
lbl_fn_8063C110_00000C78:
    cmpwi r31, 0x0
    beq lbl_fn_8063C110_00000C8C
    li r0, 0x0
    stw r0, 0x4(r31)
    stb r0, 0xf(r31)
lbl_fn_8063C110_00000C8C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063C2E8(void)
{
    nofralloc
    mr r4, r3
    li r3, 0x0
    b fn_8063C110
}

asm void fn_8063C2F4(void)
{
    nofralloc
    mr r4, r3
    li r3, 0x1
    b fn_8063C110
}

asm void fn_8063C300(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_808227E0@ha
    addi r31, r31, lbl_808227E0@l
    stw r30, 0x18(r1)
    addi r30, r31, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x7e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063C300_00000EB8
    lhz r5, 0x0(r3)
    cmpwi r5, 0x0
    bne lbl_fn_8063C300_00000E08
    lbz r0, 0x28(r31)
    cmplwi r0, 0x4
    blt lbl_fn_8063C300_00000D20
    lis r3, 0xe
    lis r4, lbl_807B5868@ha
    addi r6, r29, 0x4
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B5868@l
    bl fn_80629850
lbl_fn_8063C300_00000D20:
    addi r3, r30, 0x8
    bl strlen
    mr r5, r3
    addi r3, r30, 0x8
    addi r4, r29, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8063C300_00000D60
    lwz r4, 0x30(r31)
    addi r3, r30, 0x2
    li r5, 0x6
    addi r4, r4, 0x2
    bl memcpy
    li r0, 0x0
    sth r0, 0x0(r30)
    b lbl_fn_8063C300_00000E90
lbl_fn_8063C300_00000D60:
    lwz r3, 0x30(r31)
    bl fn_806347E4
    cmpwi r3, 0x0
    stw r3, 0x30(r31)
    beq lbl_fn_8063C300_00000DFC
    lis r4, fn_8063C300@ha
    addi r3, r3, 0x2
    addi r4, r4, fn_8063C300@l
    bl fn_8063450C
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_fn_8063C300_00000EB8
    lhz r0, 0x0(r29)
    clrlwi r0, r0, 24
    cmplwi r0, 0x8
    bgt lbl_fn_8063C300_00000DF0
    lis r3, jumptable_807B590C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B590C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_fn_8063C300_00000DF4
    li r0, 0x10b
    b lbl_fn_8063C300_00000DF4
    li r0, 0x103
    b lbl_fn_8063C300_00000DF4
    li r0, 0x109
    b lbl_fn_8063C300_00000DF4
    li r0, 0x10c
    b lbl_fn_8063C300_00000DF4
    li r0, 0x10d
    b lbl_fn_8063C300_00000DF4
    li r0, 0x115
    b lbl_fn_8063C300_00000DF4
lbl_fn_8063C300_00000DF0:
    li r0, 0x114
lbl_fn_8063C300_00000DF4:
    sth r0, 0x0(r30)
    b lbl_fn_8063C300_00000E90
lbl_fn_8063C300_00000DFC:
    li r0, 0x102
    sth r0, 0x0(r30)
    b lbl_fn_8063C300_00000E90
lbl_fn_8063C300_00000E08:
    lbz r0, 0x28(r31)
    cmplwi r0, 0x4
    blt lbl_fn_8063C300_00000E28
    lis r3, 0xe
    lis r4, lbl_807B58AC@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B58AC@l
    bl fn_80629830
lbl_fn_8063C300_00000E28:
    lhz r0, 0x0(r29)
    clrlwi r0, r0, 24
    cmplwi r0, 0x8
    bgt lbl_fn_8063C300_00000E88
    lis r3, jumptable_807B58E8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B58E8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_fn_8063C300_00000E8C
    li r0, 0x10b
    b lbl_fn_8063C300_00000E8C
    li r0, 0x103
    b lbl_fn_8063C300_00000E8C
    li r0, 0x109
    b lbl_fn_8063C300_00000E8C
    li r0, 0x10c
    b lbl_fn_8063C300_00000E8C
    li r0, 0x10d
    b lbl_fn_8063C300_00000E8C
    li r0, 0x115
    b lbl_fn_8063C300_00000E8C
lbl_fn_8063C300_00000E88:
    li r0, 0x114
lbl_fn_8063C300_00000E8C:
    sth r0, 0x0(r30)
lbl_fn_8063C300_00000E90:
    lwz r12, 0x2c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8063C300_00000EAC
    mr r4, r30
    li r3, 0x5
    mtctr r12
    bctrl
lbl_fn_8063C300_00000EAC:
    li r0, 0x0
    stb r0, 0x7e(r31)
    stw r0, 0x2c(r31)
lbl_fn_8063C300_00000EB8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063C518(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_808227E0@ha
    addi r31, r31, lbl_808227E0@l
    stw r30, 0x18(r1)
    addi r30, r31, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x7e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063C518_0000106C
    lbz r0, 0x28(r31)
    cmplwi r0, 0x4
    blt lbl_fn_8063C518_00000F30
    lis r3, 0xe
    lis r4, lbl_807B5930@ha
    lbz r5, 0x0(r29)
    addi r3, r3, 0x3
    lbz r6, 0x1(r29)
    addi r4, r4, lbl_807B5930@l
    bl fn_80629850
lbl_fn_8063C518_00000F30:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8063C518_00000FE4
    li r0, 0x111
    sth r0, 0x0(r30)
    bl fn_8063472C
    cmpwi r3, 0x0
    stw r3, 0x30(r31)
    beq lbl_fn_8063C518_00000FD8
    lis r4, fn_8063C300@ha
    addi r3, r3, 0x2
    addi r4, r4, fn_8063C300@l
    bl fn_8063450C
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_fn_8063C518_0000106C
    lbz r0, 0x0(r29)
    cmplwi r0, 0x8
    bgt lbl_fn_8063C518_00000FCC
    lis r3, jumptable_807B5998@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B5998@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_fn_8063C518_00000FD0
    li r0, 0x10b
    b lbl_fn_8063C518_00000FD0
    li r0, 0x103
    b lbl_fn_8063C518_00000FD0
    li r0, 0x109
    b lbl_fn_8063C518_00000FD0
    li r0, 0x10c
    b lbl_fn_8063C518_00000FD0
    li r0, 0x10d
    b lbl_fn_8063C518_00000FD0
    li r0, 0x115
    b lbl_fn_8063C518_00000FD0
lbl_fn_8063C518_00000FCC:
    li r0, 0x114
lbl_fn_8063C518_00000FD0:
    sth r0, 0x0(r30)
    b lbl_fn_8063C518_00001044
lbl_fn_8063C518_00000FD8:
    li r0, 0x102
    sth r0, 0x0(r30)
    b lbl_fn_8063C518_00001044
lbl_fn_8063C518_00000FE4:
    cmplwi r0, 0x8
    bgt lbl_fn_8063C518_0000103C
    lis r3, jumptable_807B5974@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B5974@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_fn_8063C518_00001040
    li r0, 0x10b
    b lbl_fn_8063C518_00001040
    li r0, 0x103
    b lbl_fn_8063C518_00001040
    li r0, 0x109
    b lbl_fn_8063C518_00001040
    li r0, 0x10c
    b lbl_fn_8063C518_00001040
    li r0, 0x10d
    b lbl_fn_8063C518_00001040
    li r0, 0x115
    b lbl_fn_8063C518_00001040
lbl_fn_8063C518_0000103C:
    li r0, 0x114
lbl_fn_8063C518_00001040:
    sth r0, 0x0(r30)
lbl_fn_8063C518_00001044:
    lwz r12, 0x2c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8063C518_00001060
    mr r4, r30
    li r3, 0x5
    mtctr r12
    bctrl
lbl_fn_8063C518_00001060:
    li r0, 0x0
    stb r0, 0x7e(r31)
    stw r0, 0x2c(r31)
lbl_fn_8063C518_0000106C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063C6CC(void)
{
    nofralloc
    cmplwi r3, 0x8
    bgt lbl_fn_8063C6CC_000010E0
    lis r4, jumptable_807B59BC@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_807B59BC@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r3, 0x0
    blr
    li r3, 0x10b
    blr
    li r3, 0x103
    blr
    li r3, 0x109
    blr
    li r3, 0x10c
    blr
    li r3, 0x10d
    blr
    li r3, 0x115
    blr
lbl_fn_8063C6CC_000010E0:
    li r3, 0x114
    blr
}

asm void fn_8063C72C(void)
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
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063C72C_00001124
    li r3, 0x0
    b lbl_fn_8063C72C_00001174
lbl_fn_8063C72C_00001124:
    li r0, 0x8
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x1
    li r0, 0x4
    li r6, 0x5
    sth r5, 0x4(r3)
    lbz r5, 0x2(r29)
    stb r4, 0x8(r3)
    lbz r4, 0x1(r29)
    stb r0, 0x9(r3)
    lbz r0, 0x0(r29)
    stb r6, 0xa(r3)
    stb r5, 0xb(r3)
    stb r4, 0xc(r3)
    stb r0, 0xd(r3)
    stb r30, 0xe(r3)
    stb r31, 0xf(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063C72C_00001174:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063C7D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063C7D4_000011B4
    li r3, 0x0
    b lbl_fn_8063C7D4_000011E0
lbl_fn_8063C7D4_000011B4:
    li r0, 0x3
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x2
    li r0, 0x4
    sth r5, 0x4(r3)
    stb r4, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063C7D4_000011E0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063C834(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063C834_00001230
    li r3, 0x0
    b lbl_fn_8063C834_00001298
lbl_fn_8063C834_00001230:
    li r0, 0xc
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x3
    li r0, 0x4
    li r8, 0x9
    sth r5, 0x4(r3)
    srawi r7, r27, 8
    extrwi r6, r28, 8, 16
    lbz r5, 0x2(r29)
    stb r4, 0x8(r3)
    lbz r4, 0x1(r29)
    stb r0, 0x9(r3)
    lbz r0, 0x0(r29)
    stb r8, 0xa(r3)
    stb r27, 0xb(r3)
    stb r7, 0xc(r3)
    stb r28, 0xd(r3)
    stb r6, 0xe(r3)
    stb r5, 0xf(r3)
    stb r4, 0x10(r3)
    stb r0, 0x11(r3)
    stb r30, 0x12(r3)
    stb r31, 0x13(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063C834_00001298:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063C8F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063C8F4_000012F4
    li r3, 0x0
    b lbl_fn_8063C8F4_00001378
lbl_fn_8063C8F4_000012F4:
    li r4, 0x10
    li r0, 0x0
    sth r4, 0x2(r3)
    li r7, 0x5
    li r6, 0x4
    li r5, 0xd
    sth r0, 0x4(r3)
    srawi r4, r27, 8
    extrwi r0, r30, 8, 16
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    lbz r5, 0x5(r26)
    stb r5, 0xb(r3)
    lbz r5, 0x4(r26)
    stb r5, 0xc(r3)
    lbz r5, 0x3(r26)
    stb r5, 0xd(r3)
    lbz r5, 0x2(r26)
    stb r5, 0xe(r3)
    lbz r5, 0x1(r26)
    stb r5, 0xf(r3)
    lbz r5, 0x0(r26)
    stb r5, 0x10(r3)
    stb r27, 0x11(r3)
    stb r4, 0x12(r3)
    stb r28, 0x13(r3)
    stb r29, 0x14(r3)
    stb r30, 0x15(r3)
    stb r0, 0x16(r3)
    stb r31, 0x17(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063C8F4_00001378:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063C9D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063C9D4_000013C4
    li r3, 0x0
    b lbl_fn_8063C9D4_00001400
lbl_fn_8063C9D4_000013C4:
    li r7, 0x6
    li r6, 0x0
    sth r7, 0x2(r3)
    li r5, 0x4
    li r4, 0x3
    extrwi r0, r30, 8, 16
    sth r6, 0x4(r3)
    stb r7, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r30, 0xb(r3)
    stb r0, 0xc(r3)
    stb r31, 0xd(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063C9D4_00001400:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063CA5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063CA5C_0000144C
    li r3, 0x0
    b lbl_fn_8063CA5C_0000148C
lbl_fn_8063CA5C_0000144C:
    li r7, 0x7
    li r6, 0x0
    sth r7, 0x2(r3)
    li r5, 0x4
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    sth r6, 0x4(r3)
    stb r7, 0x8(r3)
    stb r5, 0x9(r3)
    stb r5, 0xa(r3)
    stb r30, 0xb(r3)
    stb r4, 0xc(r3)
    stb r31, 0xd(r3)
    stb r0, 0xe(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063CA5C_0000148C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063CAE8(void)
{
    nofralloc
    li r9, 0xa
    li r8, 0x0
    li r7, 0x9
    li r6, 0x4
    li r0, 0x7
    sth r9, 0x2(r3)
    sth r8, 0x4(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r4)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    stb r5, 0x11(r3)
    b fn_8063A778
}

asm void fn_8063CB48(void)
{
    nofralloc
    li r8, 0xa
    li r7, 0x0
    li r6, 0x4
    li r0, 0x7
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r8, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r4)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    stb r5, 0x11(r3)
    b fn_8063A778
}

asm void fn_8063CBA4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r30, r3
    mr r31, r4
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063CBA4_00001594
    li r3, 0x0
    b lbl_fn_8063CBA4_000016E8
lbl_fn_8063CBA4_00001594:
    li r0, 0x19
    li r4, 0x0
    sth r0, 0x2(r3)
    li r0, 0xb
    li r6, 0x4
    li r5, 0x16
    sth r4, 0x4(r3)
    subfic r24, r4, 0xf
    li r25, 0x1
    li r27, 0x2
    stb r0, 0x8(r3)
    subfic r26, r25, 0xf
    subfic r28, r27, 0xf
    li r4, 0x3
    stb r6, 0x9(r3)
    subfic r29, r4, 0xf
    li r9, 0x5
    subfic r10, r6, 0xf
    stb r5, 0xa(r3)
    subfic r8, r9, 0xf
    li r7, 0x6
    li r5, 0x7
    lbz r4, 0x5(r30)
    subfic r6, r7, 0xf
    li r23, 0x8
    li r25, 0x9
    stb r4, 0xb(r3)
    subfic r4, r5, 0xf
    li r27, 0xa
    li r11, 0xc
    lbz r5, 0x4(r30)
    li r9, 0xd
    li r7, 0xe
    stb r5, 0xc(r3)
    li r5, 0xf
    lbz r12, 0x3(r30)
    stb r12, 0xd(r3)
    lbz r12, 0x2(r30)
    stb r12, 0xe(r3)
    lbz r12, 0x1(r30)
    stb r12, 0xf(r3)
    lbz r12, 0x0(r30)
    stb r12, 0x10(r3)
    lbzx r12, r31, r24
    subfic r24, r23, 0xf
    stb r12, 0x11(r3)
    lbzx r12, r31, r26
    subfic r26, r25, 0xf
    stb r12, 0x12(r3)
    lbzx r12, r31, r28
    subfic r28, r27, 0xf
    stb r12, 0x13(r3)
    lbzx r12, r31, r29
    subfic r29, r0, 0xf
    stb r12, 0x14(r3)
    lbzx r0, r31, r10
    subfic r10, r11, 0xf
    stb r0, 0x15(r3)
    lbzx r0, r31, r8
    subfic r8, r9, 0xf
    stb r0, 0x16(r3)
    lbzx r0, r31, r6
    subfic r6, r7, 0xf
    stb r0, 0x17(r3)
    lbzx r0, r31, r4
    subfic r4, r5, 0xf
    stb r0, 0x18(r3)
    lbzx r12, r31, r24
    stb r12, 0x19(r3)
    lbzx r12, r31, r26
    stb r12, 0x1a(r3)
    lbzx r12, r31, r28
    stb r12, 0x1b(r3)
    lbzx r12, r31, r29
    stb r12, 0x1c(r3)
    lbzx r0, r31, r10
    stb r0, 0x1d(r3)
    lbzx r0, r31, r8
    stb r0, 0x1e(r3)
    lbzx r0, r31, r6
    stb r0, 0x1f(r3)
    lbzx r0, r31, r4
    stb r0, 0x20(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063CBA4_000016E8:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8063CD44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063CD44_0000172C
    li r3, 0x0
    b lbl_fn_8063CD44_0000178C
lbl_fn_8063CD44_0000172C:
    li r0, 0x9
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0xc
    li r4, 0x4
    li r0, 0x6
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r31)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r31)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r31)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r31)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r31)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r31)
    stb r0, 0x10(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063CD44_0000178C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063CDE4(void)
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
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063CDE4_000017DC
    li r3, 0x0
    b lbl_fn_8063CDE4_00001968
lbl_fn_8063CDE4_000017DC:
    li r0, 0x1a
    li r4, 0x0
    sth r0, 0x2(r3)
    li r7, 0xd
    li r6, 0x4
    li r0, 0x17
    sth r4, 0x4(r3)
    cmpwi cr1, r30, 0x0
    addi r4, r3, 0x12
    li r5, 0x0
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r29)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r29)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r29)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r29)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r29)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r29)
    stb r0, 0x10(r3)
    stb r30, 0x11(r3)
    ble cr1, lbl_fn_8063CDE4_00001904
    cmpwi r30, 0x8
    subi r7, r30, 0x8
    ble lbl_fn_8063CDE4_000018DC
    li r8, 0x0
    blt cr1, lbl_fn_8063CDE4_00001870
    lis r6, 0x8000
    subi r0, r6, 0x2
    cmpw r30, r0
    bgt lbl_fn_8063CDE4_00001870
    li r8, 0x1
lbl_fn_8063CDE4_00001870:
    cmpwi r8, 0x0
    beq lbl_fn_8063CDE4_000018DC
    addi r0, r7, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r7, 0x0
    ble lbl_fn_8063CDE4_000018DC
lbl_fn_8063CDE4_0000188C:
    lbz r0, 0x0(r31)
    addi r5, r5, 0x8
    stb r0, 0x0(r4)
    lbz r0, 0x1(r31)
    stb r0, 0x1(r4)
    lbz r0, 0x2(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x3(r31)
    stb r0, 0x3(r4)
    lbz r0, 0x4(r31)
    stb r0, 0x4(r4)
    lbz r0, 0x5(r31)
    stb r0, 0x5(r4)
    lbz r0, 0x6(r31)
    stb r0, 0x6(r4)
    lbz r0, 0x7(r31)
    addi r31, r31, 0x8
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_8063CDE4_0000188C
lbl_fn_8063CDE4_000018DC:
    subf r0, r5, r30
    mtctr r0
    cmpw r5, r30
    bge lbl_fn_8063CDE4_00001904
lbl_fn_8063CDE4_000018EC:
    lbz r0, 0x0(r31)
    addi r5, r5, 0x1
    addi r31, r31, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_fn_8063CDE4_000018EC
lbl_fn_8063CDE4_00001904:
    cmpwi r5, 0x10
    subfic r5, r5, 0x10
    li r6, 0x0
    bge lbl_fn_8063CDE4_00001960
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_8063CDE4_00001950
lbl_fn_8063CDE4_00001920:
    stb r6, 0x0(r4)
    stb r6, 0x1(r4)
    stb r6, 0x2(r4)
    stb r6, 0x3(r4)
    stb r6, 0x4(r4)
    stb r6, 0x5(r4)
    stb r6, 0x6(r4)
    stb r6, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_8063CDE4_00001920
    andi. r5, r5, 0x7
    beq lbl_fn_8063CDE4_00001960
lbl_fn_8063CDE4_00001950:
    mtctr r5
lbl_fn_8063CDE4_00001954:
    stb r6, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_fn_8063CDE4_00001954
lbl_fn_8063CDE4_00001960:
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063CDE4_00001968:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063CFC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063CFC8_000019B0
    li r3, 0x0
    b lbl_fn_8063CFC8_00001A10
lbl_fn_8063CFC8_000019B0:
    li r0, 0x9
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0xe
    li r4, 0x4
    li r0, 0x6
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r31)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r31)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r31)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r31)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r31)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r31)
    stb r0, 0x10(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063CFC8_00001A10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063D068(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D068_00001A58
    li r3, 0x0
    b lbl_fn_8063D068_00001A9C
lbl_fn_8063D068_00001A58:
    li r4, 0x7
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0xf
    li r5, 0x4
    srawi r4, r30, 8
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r5, 0xa(r3)
    stb r30, 0xb(r3)
    stb r4, 0xc(r3)
    stb r31, 0xd(r3)
    stb r0, 0xe(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D068_00001A9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063D0F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D0F8_00001AE0
    li r3, 0x0
    b lbl_fn_8063D0F8_00001B1C
lbl_fn_8063D0F8_00001AE0:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x11
    li r5, 0x4
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D0F8_00001B1C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063D174(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D174_00001B64
    li r3, 0x0
    b lbl_fn_8063D174_00001BA4
lbl_fn_8063D174_00001B64:
    li r4, 0x6
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x13
    li r5, 0x4
    li r4, 0x3
    sth r0, 0x4(r3)
    extrwi r0, r30, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r30, 0xb(r3)
    stb r0, 0xc(r3)
    stb r31, 0xd(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D174_00001BA4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063D200(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D200_00001C00
    li r3, 0x0
    b lbl_fn_8063D200_00001C74
lbl_fn_8063D200_00001C00:
    li r4, 0xd
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x19
    li r5, 0x4
    li r4, 0xa
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    lbz r4, 0x5(r28)
    stb r4, 0xb(r3)
    lbz r4, 0x4(r28)
    stb r4, 0xc(r3)
    lbz r4, 0x3(r28)
    stb r4, 0xd(r3)
    lbz r4, 0x2(r28)
    stb r4, 0xe(r3)
    lbz r4, 0x1(r28)
    stb r4, 0xf(r3)
    lbz r4, 0x0(r28)
    stb r4, 0x10(r3)
    stb r29, 0x11(r3)
    stb r30, 0x12(r3)
    stb r31, 0x13(r3)
    stb r0, 0x14(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D200_00001C74:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063D2D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D2D8_00001CC0
    li r3, 0x0
    b lbl_fn_8063D2D8_00001D20
lbl_fn_8063D2D8_00001CC0:
    li r0, 0x9
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0x1a
    li r4, 0x4
    li r0, 0x6
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r31)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r31)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r31)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r31)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r31)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r31)
    stb r0, 0x10(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D2D8_00001D20:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063D378(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D378_00001D60
    li r3, 0x0
    b lbl_fn_8063D378_00001D9C
lbl_fn_8063D378_00001D60:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x1b
    li r5, 0x4
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D378_00001D9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063D3F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D3F4_00001DDC
    li r3, 0x0
    b lbl_fn_8063D3F4_00001E18
lbl_fn_8063D3F4_00001DDC:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x1d
    li r5, 0x4
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D3F4_00001E18:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063D470(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D470_00001E58
    li r3, 0x0
    b lbl_fn_8063D470_00001E94
lbl_fn_8063D470_00001E58:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x1f
    li r5, 0x4
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D470_00001E94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063D4EC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D4EC_00001EF0
    li r3, 0x0
    b lbl_fn_8063D4EC_00001F8C
lbl_fn_8063D4EC_00001EF0:
    li r0, 0x14
    srawi r12, r25, 8
    sth r0, 0x2(r3)
    li r0, 0x0
    li r6, 0x28
    li r4, 0x4
    sth r0, 0x4(r3)
    li r0, 0x11
    extrwi r11, r26, 8, 16
    extrwi r10, r26, 8, 8
    stb r6, 0x8(r3)
    srwi r9, r26, 24
    extrwi r8, r27, 8, 16
    extrwi r7, r27, 8, 8
    stb r4, 0x9(r3)
    srawi r5, r28, 8
    srwi r6, r27, 24
    srawi r4, r29, 8
    stb r0, 0xa(r3)
    extrwi r0, r31, 8, 16
    stb r25, 0xb(r3)
    stb r12, 0xc(r3)
    stb r26, 0xd(r3)
    stb r11, 0xe(r3)
    stb r10, 0xf(r3)
    stb r9, 0x10(r3)
    stb r27, 0x11(r3)
    stb r8, 0x12(r3)
    stb r7, 0x13(r3)
    stb r6, 0x14(r3)
    stb r28, 0x15(r3)
    stb r5, 0x16(r3)
    stb r29, 0x17(r3)
    stb r4, 0x18(r3)
    stb r30, 0x19(r3)
    stb r31, 0x1a(r3)
    stb r0, 0x1b(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D4EC_00001F8C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8063D5E8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    li r26, 0x18
    li r12, 0x0
    li r11, 0x29
    li r0, 0x4
    li r25, 0x15
    sth r26, 0x2(r3)
    extrwi r26, r5, 8, 16
    extrwi r27, r5, 8, 8
    sth r12, 0x4(r3)
    srwi r28, r5, 24
    extrwi r29, r6, 8, 16
    extrwi r30, r6, 8, 8
    stb r11, 0x8(r3)
    srwi r31, r6, 24
    srawi r12, r7, 8
    extrwi r11, r8, 8, 16
    stb r0, 0x9(r3)
    extrwi r0, r10, 8, 16
    stb r25, 0xa(r3)
    lbz r25, 0x5(r4)
    stb r25, 0xb(r3)
    lbz r25, 0x4(r4)
    stb r25, 0xc(r3)
    lbz r25, 0x3(r4)
    stb r25, 0xd(r3)
    lbz r25, 0x2(r4)
    stb r25, 0xe(r3)
    lbz r25, 0x1(r4)
    stb r25, 0xf(r3)
    lbz r4, 0x0(r4)
    stb r4, 0x10(r3)
    stb r5, 0x11(r3)
    stb r26, 0x12(r3)
    stb r27, 0x13(r3)
    stb r28, 0x14(r3)
    stb r6, 0x15(r3)
    stb r29, 0x16(r3)
    stb r30, 0x17(r3)
    stb r31, 0x18(r3)
    stb r7, 0x19(r3)
    stb r12, 0x1a(r3)
    stb r8, 0x1b(r3)
    stb r11, 0x1c(r3)
    stb r9, 0x1d(r3)
    stb r10, 0x1e(r3)
    stb r0, 0x1f(r3)
    bl fn_8063A778
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8063D6D0(void)
{
    nofralloc
    li r9, 0xa
    li r8, 0x0
    li r7, 0x2a
    li r6, 0x4
    li r0, 0x7
    sth r9, 0x2(r3)
    sth r8, 0x4(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r4)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    stb r5, 0x11(r3)
    b fn_8063A778
}

asm void fn_8063D730(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_8063D730_00002130
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D730_00002130
    li r3, 0x0
    b lbl_fn_8063D730_00002184
lbl_fn_8063D730_00002130:
    li r0, 0x9
    srawi r5, r29, 8
    sth r0, 0x2(r3)
    li r0, 0x0
    li r8, 0x1
    li r7, 0x8
    sth r0, 0x4(r3)
    li r6, 0x6
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r8, 0x8(r3)
    stb r7, 0x9(r3)
    stb r6, 0xa(r3)
    stb r29, 0xb(r3)
    stb r5, 0xc(r3)
    stb r30, 0xd(r3)
    stb r4, 0xe(r3)
    stb r31, 0xf(r3)
    stb r0, 0x10(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D730_00002184:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063D7E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bne lbl_fn_8063D7E4_000021E8
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D7E4_000021E8
    li r3, 0x0
    b lbl_fn_8063D7E4_00002254
lbl_fn_8063D7E4_000021E8:
    li r0, 0xd
    srawi r7, r27, 8
    sth r0, 0x2(r3)
    li r4, 0x0
    srawi r6, r28, 8
    li r0, 0x3
    sth r4, 0x4(r3)
    srawi r5, r29, 8
    li r9, 0x8
    li r8, 0xa
    stb r0, 0x8(r3)
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r9, 0x9(r3)
    stb r8, 0xa(r3)
    stb r27, 0xb(r3)
    stb r7, 0xc(r3)
    stb r28, 0xd(r3)
    stb r6, 0xe(r3)
    stb r29, 0xf(r3)
    stb r5, 0x10(r3)
    stb r30, 0x11(r3)
    stb r4, 0x12(r3)
    stb r31, 0x13(r3)
    stb r0, 0x14(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D7E4_00002254:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063D8B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_fn_8063D8B0_000022A0
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D8B0_000022A0
    li r3, 0x0
    b lbl_fn_8063D8B0_000022DC
lbl_fn_8063D8B0_000022A0:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x4
    li r5, 0x8
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D8B0_000022DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063D934(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_8063D934_00002334
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D934_00002334
    li r3, 0x0
    b lbl_fn_8063D934_00002388
lbl_fn_8063D934_00002334:
    li r0, 0x9
    srawi r5, r29, 8
    sth r0, 0x2(r3)
    li r0, 0x0
    li r8, 0x5
    li r7, 0x8
    sth r0, 0x4(r3)
    li r6, 0x6
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r8, 0x8(r3)
    stb r7, 0x9(r3)
    stb r6, 0xa(r3)
    stb r29, 0xb(r3)
    stb r5, 0xc(r3)
    stb r30, 0xd(r3)
    stb r4, 0xe(r3)
    stb r31, 0xf(r3)
    stb r0, 0x10(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D934_00002388:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063D9E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_fn_8063D9E8_000023D8
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063D9E8_000023D8
    li r3, 0x0
    b lbl_fn_8063D9E8_00002414
lbl_fn_8063D9E8_000023D8:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x6
    li r5, 0x8
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063D9E8_00002414:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063DA6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063DA6C_0000245C
    li r3, 0x0
    b lbl_fn_8063DA6C_000024C0
lbl_fn_8063DA6C_0000245C:
    li r0, 0xa
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0xb
    li r4, 0x8
    li r0, 0x7
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r30)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r30)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r30)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r30)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r30)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r30)
    stb r0, 0x10(r3)
    stb r31, 0x11(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063DA6C_000024C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063DB1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063DB1C_0000250C
    li r3, 0x0
    b lbl_fn_8063DB1C_00002554
lbl_fn_8063DB1C_0000250C:
    li r4, 0x7
    li r0, 0x0
    sth r4, 0x2(r3)
    li r7, 0xd
    li r6, 0x8
    li r5, 0x4
    sth r0, 0x4(r3)
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    stb r30, 0xb(r3)
    stb r4, 0xc(r3)
    stb r31, 0xd(r3)
    stb r0, 0xe(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063DB1C_00002554:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063DBB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063DBB0_00002590
    li r3, 0x0
    b lbl_fn_8063DBB0_000025B8
lbl_fn_8063DBB0_00002590:
    li r5, 0x3
    li r4, 0x0
    sth r5, 0x2(r3)
    li r0, 0xc
    sth r4, 0x4(r3)
    stb r5, 0x8(r3)
    stb r0, 0x9(r3)
    stb r4, 0xa(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063DBB0_000025B8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063DC0C(void)
{
    nofralloc
    li r0, 0x0
    li r9, 0x5
    li r8, 0xc
    sth r0, 0x4(r3)
    cmpwi r4, 0x0
    mr r0, r6
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    beq lbl_fn_8063DC0C_0000276C
    addi r8, r7, 0x5
    addi r9, r7, 0x2
    sth r8, 0x2(r3)
    cmplwi r5, 0x1
    addi r8, r3, 0xd
    stb r9, 0xa(r3)
    stb r4, 0xb(r3)
    stb r5, 0xc(r3)
    bne lbl_fn_8063DC0C_00002654
    lbz r4, 0x2(r6)
    subi r0, r7, 0x6
    clrlwi r7, r0, 24
    stb r4, 0x0(r8)
    addi r0, r6, 0x6
    lbz r4, 0x1(r6)
    stb r4, 0x1(r8)
    lbz r4, 0x0(r6)
    stb r4, 0x2(r8)
    lbz r4, 0x5(r6)
    stb r4, 0x3(r8)
    lbz r4, 0x4(r6)
    stb r4, 0x4(r8)
    lbz r4, 0x3(r6)
    stb r4, 0x5(r8)
    addi r8, r8, 0x6
    b lbl_fn_8063DC0C_0000269C
lbl_fn_8063DC0C_00002654:
    cmplwi r5, 0x2
    bne lbl_fn_8063DC0C_0000269C
    lbz r4, 0x5(r6)
    subi r0, r7, 0x6
    clrlwi r7, r0, 24
    stb r4, 0x0(r8)
    addi r0, r6, 0x6
    lbz r4, 0x4(r6)
    stb r4, 0x1(r8)
    lbz r4, 0x3(r6)
    stb r4, 0x2(r8)
    lbz r4, 0x2(r6)
    stb r4, 0x3(r8)
    lbz r4, 0x1(r6)
    stb r4, 0x4(r8)
    lbz r4, 0x0(r6)
    stb r4, 0x5(r8)
    addi r8, r8, 0x6
lbl_fn_8063DC0C_0000269C:
    cmpwi cr1, r7, 0x0
    beq cr1, lbl_fn_8063DC0C_00002780
    li r9, 0x0
    ble cr1, lbl_fn_8063DC0C_00002780
    cmpwi r7, 0x8
    subi r5, r7, 0x8
    ble lbl_fn_8063DC0C_00002740
    li r6, 0x0
    blt cr1, lbl_fn_8063DC0C_000026D4
    lis r4, 0x8000
    subi r4, r4, 0x2
    cmpw r7, r4
    bgt lbl_fn_8063DC0C_000026D4
    li r6, 0x1
lbl_fn_8063DC0C_000026D4:
    cmpwi r6, 0x0
    beq lbl_fn_8063DC0C_00002740
    addi r4, r5, 0x7
    srwi r4, r4, 3
    mtctr r4
    cmpwi r5, 0x0
    ble lbl_fn_8063DC0C_00002740
lbl_fn_8063DC0C_000026F0:
    lbzx r4, r9, r0
    add r5, r0, r9
    addi r9, r9, 0x8
    stb r4, 0x0(r8)
    lbz r4, 0x1(r5)
    stb r4, 0x1(r8)
    lbz r4, 0x2(r5)
    stb r4, 0x2(r8)
    lbz r4, 0x3(r5)
    stb r4, 0x3(r8)
    lbz r4, 0x4(r5)
    stb r4, 0x4(r8)
    lbz r4, 0x5(r5)
    stb r4, 0x5(r8)
    lbz r4, 0x6(r5)
    stb r4, 0x6(r8)
    lbz r4, 0x7(r5)
    stb r4, 0x7(r8)
    addi r8, r8, 0x8
    bdnz lbl_fn_8063DC0C_000026F0
lbl_fn_8063DC0C_00002740:
    subf r4, r9, r7
    add r5, r0, r9
    mtctr r4
    cmpw r9, r7
    bge lbl_fn_8063DC0C_00002780
lbl_fn_8063DC0C_00002754:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r8)
    addi r8, r8, 0x1
    bdnz lbl_fn_8063DC0C_00002754
    b lbl_fn_8063DC0C_00002780
lbl_fn_8063DC0C_0000276C:
    li r5, 0x4
    li r0, 0x1
    sth r5, 0x2(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
lbl_fn_8063DC0C_00002780:
    b fn_8063A778
}

asm void fn_8063DDC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063DDC8_000027B0
    li r3, 0x0
    b lbl_fn_8063DDC8_000027E4
lbl_fn_8063DDC8_000027B0:
    li r0, 0x4
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0xa
    li r4, 0xc
    li r0, 0x1
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    stb r31, 0xb(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063DDC8_000027E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063DE3C(void)
{
    nofralloc
    li r9, 0xa
    li r8, 0x0
    li r7, 0xd
    li r6, 0xc
    li r0, 0x7
    sth r9, 0x2(r3)
    sth r8, 0x4(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r4)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    stb r5, 0x11(r3)
    b fn_8063A778
}

asm void fn_8063DE9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mulli r7, r4, 0x16
    li r0, 0x0
    li r9, 0x11
    sth r0, 0x4(r3)
    li r8, 0xc
    addi r10, r7, 0x4
    clrlwi r7, r10, 16
    cmplwi r4, 0xb
    subi r0, r7, 0x3
    sth r10, 0x2(r3)
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    stb r0, 0xa(r3)
    ble lbl_fn_8063DE9C_000028A8
    li r4, 0xb
lbl_fn_8063DE9C_000028A8:
    stb r4, 0xb(r3)
    addi r7, r3, 0xc
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8063DE9C_000029FC
lbl_fn_8063DE9C_000028BC:
    lbz r0, 0x5(r5)
    li r22, 0x0
    subfic r23, r22, 0xf
    li r24, 0x1
    stb r0, 0x0(r7)
    subfic r25, r24, 0xf
    li r26, 0x2
    li r28, 0x3
    lbz r0, 0x4(r5)
    subfic r27, r26, 0xf
    subfic r29, r28, 0xf
    li r30, 0x4
    stb r0, 0x1(r7)
    subfic r31, r30, 0xf
    li r12, 0x5
    li r10, 0x6
    lbz r0, 0x3(r5)
    subfic r11, r12, 0xf
    subfic r9, r10, 0xf
    li r8, 0x7
    stb r0, 0x2(r7)
    subfic r4, r8, 0xf
    li r22, 0x8
    li r24, 0x9
    lbz r0, 0x2(r5)
    li r26, 0xa
    li r28, 0xb
    li r30, 0xc
    stb r0, 0x3(r7)
    li r12, 0xd
    li r10, 0xe
    li r8, 0xf
    lbz r0, 0x1(r5)
    stb r0, 0x4(r7)
    lbz r0, 0x0(r5)
    addi r5, r5, 0x6
    stb r0, 0x5(r7)
    lbzx r0, r6, r23
    subfic r23, r22, 0xf
    stb r0, 0x6(r7)
    lbzx r0, r6, r25
    subfic r25, r24, 0xf
    stb r0, 0x7(r7)
    lbzx r0, r6, r27
    subfic r27, r26, 0xf
    stb r0, 0x8(r7)
    lbzx r0, r6, r29
    subfic r29, r28, 0xf
    stb r0, 0x9(r7)
    lbzx r0, r6, r31
    subfic r31, r30, 0xf
    stb r0, 0xa(r7)
    lbzx r0, r6, r11
    subfic r11, r12, 0xf
    stb r0, 0xb(r7)
    lbzx r0, r6, r9
    subfic r9, r10, 0xf
    stb r0, 0xc(r7)
    lbzx r0, r6, r4
    subfic r4, r8, 0xf
    stb r0, 0xd(r7)
    lbzx r0, r6, r23
    stb r0, 0xe(r7)
    lbzx r0, r6, r25
    stb r0, 0xf(r7)
    lbzx r0, r6, r27
    stb r0, 0x10(r7)
    lbzx r0, r6, r29
    stb r0, 0x11(r7)
    lbzx r0, r6, r31
    stb r0, 0x12(r7)
    lbzx r0, r6, r11
    stb r0, 0x13(r7)
    lbzx r0, r6, r9
    stb r0, 0x14(r7)
    lbzx r0, r6, r4
    addi r6, r6, 0x10
    stb r0, 0x15(r7)
    addi r7, r7, 0x16
    bdnz lbl_fn_8063DE9C_000028BC
lbl_fn_8063DE9C_000029FC:
    bl fn_8063A778
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8063E05C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E05C_00002A4C
    li r3, 0x0
    b lbl_fn_8063E05C_00002AB0
lbl_fn_8063E05C_00002A4C:
    li r0, 0xa
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0x12
    li r4, 0xc
    li r0, 0x7
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r30)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r30)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r30)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r30)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r30)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r30)
    stb r0, 0x10(r3)
    stb r31, 0x11(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E05C_00002AB0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E10C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    mr r3, r30
    bl strlen
    addi r0, r3, 0x1
    li r6, 0xfb
    clrlwi r7, r0, 16
    li r5, 0x0
    li r4, 0x13
    li r3, 0xc
    li r0, 0xf8
    sth r6, 0x2(r31)
    cmpwi cr1, r7, 0x0
    addi r6, r31, 0xb
    sth r5, 0x4(r31)
    li r8, 0x0
    stb r4, 0x8(r31)
    stb r3, 0x9(r31)
    stb r0, 0xa(r31)
    ble cr1, lbl_fn_8063E10C_00002BE8
    cmpwi r7, 0x8
    subi r4, r7, 0x8
    ble lbl_fn_8063E10C_00002BC0
    li r5, 0x0
    blt cr1, lbl_fn_8063E10C_00002B54
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r7, r0
    bgt lbl_fn_8063E10C_00002B54
    li r5, 0x1
lbl_fn_8063E10C_00002B54:
    cmpwi r5, 0x0
    beq lbl_fn_8063E10C_00002BC0
    addi r0, r4, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_8063E10C_00002BC0
lbl_fn_8063E10C_00002B70:
    lbzx r0, r30, r8
    add r3, r30, r8
    addi r8, r8, 0x8
    stb r0, 0x0(r6)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r6)
    lbz r0, 0x2(r3)
    stb r0, 0x2(r6)
    lbz r0, 0x3(r3)
    stb r0, 0x3(r6)
    lbz r0, 0x4(r3)
    stb r0, 0x4(r6)
    lbz r0, 0x5(r3)
    stb r0, 0x5(r6)
    lbz r0, 0x6(r3)
    stb r0, 0x6(r6)
    lbz r0, 0x7(r3)
    stb r0, 0x7(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_8063E10C_00002B70
lbl_fn_8063E10C_00002BC0:
    subf r0, r8, r7
    add r3, r30, r8
    mtctr r0
    cmpw r8, r7
    bge lbl_fn_8063E10C_00002BE8
lbl_fn_8063E10C_00002BD4:
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
    bdnz lbl_fn_8063E10C_00002BD4
lbl_fn_8063E10C_00002BE8:
    mr r3, r31
    bl fn_8063A778
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E24C(void)
{
    nofralloc
    extrwi r0, r4, 8, 16
    li r9, 0x5
    li r8, 0x0
    li r7, 0x18
    li r6, 0xc
    li r5, 0x2
    sth r9, 0x2(r3)
    sth r8, 0x4(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    stb r4, 0xb(r3)
    stb r0, 0xc(r3)
    b fn_8063A778
}

asm void fn_8063E284(void)
{
    nofralloc
    li r8, 0x4
    li r7, 0x0
    li r6, 0x1a
    li r5, 0xc
    li r0, 0x1
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    b fn_8063A778
}

asm void fn_8063E2B4(void)
{
    nofralloc
    extrwi r6, r4, 8, 16
    extrwi r0, r5, 8, 16
    li r11, 0x7
    li r10, 0x0
    li r9, 0x1c
    li r8, 0xc
    li r7, 0x4
    sth r11, 0x2(r3)
    sth r10, 0x4(r3)
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    stb r7, 0xa(r3)
    stb r4, 0xb(r3)
    stb r6, 0xc(r3)
    stb r5, 0xd(r3)
    stb r0, 0xe(r3)
    b fn_8063A778
}

asm void fn_8063E2F8(void)
{
    nofralloc
    extrwi r6, r4, 8, 16
    extrwi r0, r5, 8, 16
    li r11, 0x7
    li r10, 0x0
    li r9, 0x1e
    li r8, 0xc
    li r7, 0x4
    sth r11, 0x2(r3)
    sth r10, 0x4(r3)
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    stb r7, 0xa(r3)
    stb r4, 0xb(r3)
    stb r6, 0xc(r3)
    stb r5, 0xd(r3)
    stb r0, 0xe(r3)
    b fn_8063A778
}

asm void fn_8063E33C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E33C_00002D24
    li r3, 0x0
    b lbl_fn_8063E33C_00002D58
lbl_fn_8063E33C_00002D24:
    li r0, 0x4
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0x20
    li r4, 0xc
    li r0, 0x1
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    stb r31, 0xb(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E33C_00002D58:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E3B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E3B0_00002D98
    li r3, 0x0
    b lbl_fn_8063E3B0_00002DCC
lbl_fn_8063E3B0_00002D98:
    li r0, 0x4
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0x22
    li r4, 0xc
    li r0, 0x1
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    stb r31, 0xb(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E3B0_00002DCC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E424(void)
{
    nofralloc
    li r8, 0x6
    li r7, 0x0
    li r6, 0x24
    li r5, 0xc
    li r0, 0x3
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x0(r4)
    stb r0, 0xd(r3)
    b fn_8063A778
}

asm void fn_8063E468(void)
{
    nofralloc
    extrwi r6, r4, 8, 16
    extrwi r0, r5, 8, 16
    li r11, 0x7
    li r10, 0x0
    li r9, 0x28
    li r8, 0xc
    li r7, 0x4
    sth r11, 0x2(r3)
    sth r10, 0x4(r3)
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    stb r7, 0xa(r3)
    stb r4, 0xb(r3)
    stb r6, 0xc(r3)
    stb r5, 0xd(r3)
    stb r0, 0xe(r3)
    b fn_8063A778
}

asm void fn_8063E4AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E4AC_00002EAC
    li r3, 0x0
    b lbl_fn_8063E4AC_00002F04
lbl_fn_8063E4AC_00002EAC:
    li r0, 0xa
    srawi r5, r28, 8
    sth r0, 0x2(r3)
    li r0, 0x0
    li r8, 0x33
    li r7, 0xc
    sth r0, 0x4(r3)
    li r6, 0x7
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r8, 0x8(r3)
    stb r7, 0x9(r3)
    stb r6, 0xa(r3)
    stb r28, 0xb(r3)
    stb r5, 0xc(r3)
    stb r29, 0xd(r3)
    stb r30, 0xe(r3)
    stb r4, 0xf(r3)
    stb r31, 0x10(r3)
    stb r0, 0x11(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E4AC_00002F04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063E568(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E568_00002F58
    li r3, 0x0
    b lbl_fn_8063E568_00002FA0
lbl_fn_8063E568_00002F58:
    li r4, 0x7
    li r0, 0x0
    sth r4, 0x2(r3)
    li r7, 0x37
    li r6, 0xc
    li r5, 0x4
    sth r0, 0x4(r3)
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    stb r30, 0xb(r3)
    stb r4, 0xc(r3)
    stb r31, 0xd(r3)
    stb r0, 0xe(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E568_00002FA0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E5FC(void)
{
    nofralloc
    clrlslwi r0, r4, 24, 2
    li r9, 0x0
    subf r6, r4, r0
    li r8, 0x3a
    addi r10, r6, 0x4
    li r7, 0xc
    clrlwi r6, r10, 16
    sth r10, 0x2(r3)
    subi r0, r6, 0x3
    addi r6, r3, 0xc
    sth r9, 0x4(r3)
    stb r8, 0x8(r3)
    stb r7, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8063E5FC_00003024
lbl_fn_8063E5FC_00003000:
    lbz r0, 0x2(r5)
    stb r0, 0x0(r6)
    lbz r0, 0x1(r5)
    stb r0, 0x1(r6)
    lbz r0, 0x0(r5)
    addi r5, r5, 0x3
    stb r0, 0x2(r6)
    addi r6, r6, 0x3
    bdnz lbl_fn_8063E5FC_00003000
lbl_fn_8063E5FC_00003024:
    b fn_8063A778
}

asm void fn_8063E66C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E66C_0000304C
    li r3, 0x0
    b lbl_fn_8063E66C_00003078
lbl_fn_8063E66C_0000304C:
    li r0, 0x3
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x1
    li r0, 0x10
    sth r5, 0x4(r3)
    stb r4, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E66C_00003078:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E6CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E6CC_000030AC
    li r3, 0x0
    b lbl_fn_8063E6CC_000030D4
lbl_fn_8063E6CC_000030AC:
    li r5, 0x3
    li r4, 0x0
    sth r5, 0x2(r3)
    li r0, 0x10
    sth r4, 0x4(r3)
    stb r5, 0x8(r3)
    stb r0, 0x9(r3)
    stb r4, 0xa(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E6CC_000030D4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E728(void)
{
    nofralloc
    li r5, 0x0
    li r6, 0x3
    li r4, 0x5
    li r0, 0x10
    sth r6, 0x2(r3)
    sth r5, 0x4(r3)
    stb r4, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    b fn_8063A778
}

asm void fn_8063E750(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E750_00003130
    li r3, 0x0
    b lbl_fn_8063E750_0000315C
lbl_fn_8063E750_00003130:
    li r0, 0x3
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x9
    li r0, 0x10
    sth r5, 0x4(r3)
    stb r4, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E750_0000315C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E7B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E7B0_00003198
    li r3, 0x0
    b lbl_fn_8063E7B0_000031D4
lbl_fn_8063E7B0_00003198:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x3
    li r5, 0x14
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E7B0_000031D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E82C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E82C_00003214
    li r3, 0x0
    b lbl_fn_8063E82C_0000324C
lbl_fn_8063E82C_00003214:
    li r7, 0x5
    li r6, 0x0
    sth r7, 0x2(r3)
    li r5, 0x14
    li r4, 0x2
    extrwi r0, r31, 8, 16
    sth r6, 0x4(r3)
    stb r7, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E82C_0000324C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063E8A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    li r3, 0x2
    stw r29, 0x24(r1)
    lis r29, lbl_80764F70@ha
    lbzu r12, lbl_80764F70@l(r29)
    lbz r11, 0x1(r29)
    lbz r10, 0x2(r29)
    lbz r9, 0x3(r29)
    lbz r8, 0x4(r29)
    lbz r7, 0x5(r29)
    lbz r6, 0x6(r29)
    lbz r5, 0x7(r29)
    lbz r4, 0x8(r29)
    lbz r0, 0x9(r29)
    stb r12, 0x8(r1)
    stb r11, 0x9(r1)
    stb r10, 0xa(r1)
    stb r9, 0xb(r1)
    stb r8, 0xc(r1)
    stb r7, 0xd(r1)
    stb r6, 0xe(r1)
    stb r5, 0xf(r1)
    stb r4, 0x10(r1)
    stb r0, 0x11(r1)
    bl fn_80626C60
    cmpwi r3, 0x0
    bne lbl_fn_8063E8A4_000032EC
    li r3, 0x0
    b lbl_fn_8063E8A4_00003664
lbl_fn_8063E8A4_000032EC:
    li r4, 0xd
    li r0, 0x0
    sth r4, 0x2(r3)
    li r5, 0x3f
    li r4, 0xc
    cmplw r30, r31
    sth r0, 0x4(r3)
    li r0, 0xa
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    bgt lbl_fn_8063E8A4_0000360C
    cmplwi r31, 0x4e
    bgt lbl_fn_8063E8A4_0000360C
    cmpw cr1, r30, r31
    bgt cr1, lbl_fn_8063E8A4_0000360C
    subf r11, r30, r31
    subi r7, r31, 0x8
    addi r12, r11, 0x1
    cmpwi r12, 0x8
    ble lbl_fn_8063E8A4_000035BC
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bgt cr1, lbl_fn_8063E8A4_0000336C
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r31, r0
    bgt lbl_fn_8063E8A4_0000336C
    li r10, 0x1
lbl_fn_8063E8A4_0000336C:
    cmpwi r10, 0x0
    beq lbl_fn_8063E8A4_00003388
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r30, r0
    bgt lbl_fn_8063E8A4_00003388
    li r9, 0x1
lbl_fn_8063E8A4_00003388:
    cmpwi r9, 0x0
    beq lbl_fn_8063E8A4_000033A0
    addis r0, r30, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_8063E8A4_000033A0
    li r8, 0x1
lbl_fn_8063E8A4_000033A0:
    cmpwi r8, 0x0
    beq lbl_fn_8063E8A4_000033DC
    neg r0, r30
    clrrwi r8, r31, 31
    clrrwi r0, r0, 31
    li r4, 0x1
    cmpw r8, r0
    bne lbl_fn_8063E8A4_000033D0
    clrrwi r0, r11, 31
    cmpw r8, r0
    beq lbl_fn_8063E8A4_000033D0
    li r4, 0x0
lbl_fn_8063E8A4_000033D0:
    cmpwi r4, 0x0
    beq lbl_fn_8063E8A4_000033DC
    li r6, 0x1
lbl_fn_8063E8A4_000033DC:
    cmpwi r6, 0x0
    beq lbl_fn_8063E8A4_00003408
    clrrwi. r0, r11, 31
    li r4, 0x1
    bne lbl_fn_8063E8A4_000033FC
    clrrwi. r0, r12, 31
    beq lbl_fn_8063E8A4_000033FC
    li r4, 0x0
lbl_fn_8063E8A4_000033FC:
    cmpwi r4, 0x0
    beq lbl_fn_8063E8A4_00003408
    li r5, 0x1
lbl_fn_8063E8A4_00003408:
    cmpwi r5, 0x0
    beq lbl_fn_8063E8A4_000035BC
    addi r5, r7, 0x8
    srawi r0, r30, 3
    subf r5, r30, r5
    addi r4, r1, 0x8
    addze r6, r0
    li r0, 0x1
    srwi r5, r5, 3
    add r6, r4, r6
    mtctr r5
    cmpw r30, r7
    bgt lbl_fn_8063E8A4_000035BC
lbl_fn_8063E8A4_0000343C:
    slwi r5, r30, 29
    srwi r8, r30, 31
    subf r5, r8, r5
    lbz r10, 0x0(r6)
    rotlwi r5, r5, 3
    addi r7, r30, 0x1
    add r5, r5, r8
    addi r9, r30, 0x2
    slw r5, r0, r5
    addi r8, r30, 0x3
    andc r11, r10, r5
    srwi r10, r7, 31
    stb r11, 0x0(r6)
    slwi r5, r7, 29
    srawi r11, r7, 3
    addi r7, r30, 0x4
    subf r5, r10, r5
    addi r6, r6, 0x1
    addze r29, r11
    rotlwi r5, r5, 3
    lbzx r12, r4, r29
    add r10, r5, r10
    slw r11, r0, r10
    slwi r5, r9, 29
    srwi r10, r9, 31
    srawi r9, r9, 3
    andc r11, r12, r11
    subf r5, r10, r5
    stbx r11, r4, r29
    addze r29, r9
    addi r9, r30, 0x5
    rotlwi r5, r5, 3
    lbzx r12, r4, r29
    add r5, r5, r10
    srawi r10, r8, 3
    slw r11, r0, r5
    andc r12, r12, r11
    slwi r5, r8, 29
    srwi r8, r8, 31
    stbx r12, r4, r29
    subf r5, r8, r5
    addze r11, r10
    rotlwi r5, r5, 3
    lbzx r10, r4, r11
    add r8, r5, r8
    srawi r5, r7, 3
    slw r8, r0, r8
    andc r10, r10, r8
    addze r29, r5
    stbx r10, r4, r11
    slwi r5, r7, 29
    srwi r8, r7, 31
    srawi r7, r9, 3
    subf r5, r8, r5
    lbzx r11, r4, r29
    rotlwi r5, r5, 3
    addze r12, r7
    add r5, r5, r8
    addi r8, r30, 0x6
    slw r10, r0, r5
    slwi r5, r9, 29
    srwi r9, r9, 31
    andc r10, r11, r10
    stbx r10, r4, r29
    subf r5, r9, r5
    rotlwi r7, r5, 3
    add r9, r7, r9
    srawi r5, r8, 3
    addze r11, r5
    addi r7, r30, 0x7
    lbzx r10, r4, r12
    slw r9, r0, r9
    slwi r5, r8, 29
    addi r30, r30, 0x8
    andc r10, r10, r9
    srwi r9, r8, 31
    stbx r10, r4, r12
    subf r5, r9, r5
    rotlwi r5, r5, 3
    srawi r8, r7, 3
    add r5, r5, r9
    lbzx r10, r4, r11
    slw r9, r0, r5
    slwi r5, r7, 29
    srwi r7, r7, 31
    andc r9, r10, r9
    subf r5, r7, r5
    stbx r9, r4, r11
    addze r9, r8
    rotlwi r5, r5, 3
    lbzx r8, r4, r9
    add r5, r5, r7
    slw r5, r0, r5
    andc r5, r8, r5
    stbx r5, r4, r9
    bdnz lbl_fn_8063E8A4_0000343C
lbl_fn_8063E8A4_000035BC:
    addi r0, r31, 0x1
    addi r7, r1, 0x8
    subf r0, r30, r0
    li r5, 0x1
    mtctr r0
    cmpw r30, r31
    bgt lbl_fn_8063E8A4_0000360C
lbl_fn_8063E8A4_000035D8:
    slwi r0, r30, 29
    srwi r4, r30, 31
    srawi r6, r30, 3
    addi r30, r30, 0x1
    subf r0, r4, r0
    addze r8, r6
    rotlwi r0, r0, 3
    lbzx r6, r7, r8
    add r0, r0, r4
    slw r0, r5, r0
    andc r0, r6, r0
    stbx r0, r7, r8
    bdnz lbl_fn_8063E8A4_000035D8
lbl_fn_8063E8A4_0000360C:
    lbz r0, 0x8(r1)
    stb r0, 0xb(r3)
    lbz r0, 0x9(r1)
    stb r0, 0xc(r3)
    lbz r0, 0xa(r1)
    stb r0, 0xd(r3)
    lbz r0, 0xb(r1)
    stb r0, 0xe(r3)
    lbz r0, 0xc(r1)
    stb r0, 0xf(r3)
    lbz r0, 0xd(r1)
    stb r0, 0x10(r3)
    lbz r0, 0xe(r1)
    stb r0, 0x11(r3)
    lbz r0, 0xf(r1)
    stb r0, 0x12(r3)
    lbz r0, 0x10(r1)
    stb r0, 0x13(r3)
    lbz r0, 0x11(r1)
    stb r0, 0x14(r3)
    bl fn_8063A778
    li r3, 0x1
lbl_fn_8063E8A4_00003664:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8063ECC4(void)
{
    nofralloc
    li r8, 0x4
    li r7, 0x0
    li r6, 0x43
    li r5, 0xc
    li r0, 0x1
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    b fn_8063A778
}

asm void fn_8063ECF4(void)
{
    nofralloc
    li r8, 0x4
    li r7, 0x0
    li r6, 0x45
    li r5, 0xc
    li r0, 0x1
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    b fn_8063A778
}

asm void fn_8063ED24(void)
{
    nofralloc
    li r8, 0x4
    li r7, 0x0
    li r6, 0x47
    li r5, 0xc
    li r0, 0x1
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    b fn_8063A778
}

asm void fn_8063ED54(void)
{
    nofralloc
    ori r8, r4, 0xfc00
    addi r7, r5, 0x3
    srawi r0, r8, 8
    li r4, 0x0
    cmpwi cr1, r5, 0x0
    sth r7, 0x2(r3)
    addi r9, r3, 0xb
    li r10, 0x0
    sth r4, 0x4(r3)
    stb r8, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    ble cr1, lbl_fn_8063ED54_00003800
    cmpwi r5, 0x8
    subi r7, r5, 0x8
    ble lbl_fn_8063ED54_000037D8
    li r8, 0x0
    blt cr1, lbl_fn_8063ED54_0000376C
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r5, r0
    bgt lbl_fn_8063ED54_0000376C
    li r8, 0x1
lbl_fn_8063ED54_0000376C:
    cmpwi r8, 0x0
    beq lbl_fn_8063ED54_000037D8
    addi r0, r7, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r7, 0x0
    ble lbl_fn_8063ED54_000037D8
lbl_fn_8063ED54_00003788:
    lbzx r0, r6, r10
    add r4, r6, r10
    addi r10, r10, 0x8
    stb r0, 0x0(r9)
    lbz r0, 0x1(r4)
    stb r0, 0x1(r9)
    lbz r0, 0x2(r4)
    stb r0, 0x2(r9)
    lbz r0, 0x3(r4)
    stb r0, 0x3(r9)
    lbz r0, 0x4(r4)
    stb r0, 0x4(r9)
    lbz r0, 0x5(r4)
    stb r0, 0x5(r9)
    lbz r0, 0x6(r4)
    stb r0, 0x6(r9)
    lbz r0, 0x7(r4)
    stb r0, 0x7(r9)
    addi r9, r9, 0x8
    bdnz lbl_fn_8063ED54_00003788
lbl_fn_8063ED54_000037D8:
    subf r0, r10, r5
    add r4, r6, r10
    mtctr r0
    cmpw r10, r5
    bge lbl_fn_8063ED54_00003800
lbl_fn_8063ED54_000037EC:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r9)
    addi r9, r9, 0x1
    bdnz lbl_fn_8063ED54_000037EC
lbl_fn_8063ED54_00003800:
    b fn_8063A778
}
