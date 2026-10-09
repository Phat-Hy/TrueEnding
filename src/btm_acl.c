#include "revolution/types.h"

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_806298D0(void);
extern void fn_80629E20(void);
extern void fn_80629E90(void);
extern void fn_806332A4(void);
extern void fn_8063374C(void);
extern void fn_80633B80(void);
extern void fn_8063466C(void);
extern void fn_806349F0(void);
extern void fn_806357EC(void);
extern void fn_806359BC(void);
extern void fn_80635AEC(void);
extern void fn_80637174(void);
extern void fn_8063C9D4(void);
extern void fn_8063D068(void);
extern void fn_8063D174(void);
extern void fn_8063D378(void);
extern void fn_8063D3F4(void);
extern void fn_8063D470(void);
extern void fn_8063DA6C(void);
extern void fn_8063DB1C(void);
extern void fn_8063DBB0(void);
extern void fn_8063E568(void);
extern void fn_8063E7B0(void);
extern void fn_8063E82C(void);
extern void fn_8064465C(void);
extern void fn_8067E23C(void);
extern void fn_8068236C(void);

/* External data declarations */
extern u8 lbl_807B3FB0[];
extern u8 lbl_807B3FF0[];
extern u8 lbl_807B4010[];
extern u8 lbl_807B4190[];
extern u8 lbl_807B41CC[];
extern u8 lbl_807B4234[];
extern u8 lbl_807B425C[];
extern u8 lbl_807B4290[];
extern u8 lbl_807B42CC[];
extern u8 lbl_807B42FC[];
extern u8 lbl_8081FAF0[];
extern u8 lbl_80820018[];

/* Small data declarations */
extern u32 lbl_8087EAD8;

/* Function declarations */
void fn_8062FE10(void);
void fn_80630124(void);
void fn_806301E8(void);
void fn_8063024C(void);
void fn_80630468(void);
void fn_806305D8(void);
void fn_806307C8(void);
void fn_806307D8(void);
void fn_806308DC(void);
void fn_80630968(void);
void fn_80630B94(void);
void fn_80630BA4(void);
void fn_80630C7C(void);
void fn_80630CD8(void);
void fn_80630CE8(void);
void fn_80630D84(void);
void fn_80630E20(void);
void fn_80631014(void);
void fn_80631070(void);
void fn_80631210(void);
void fn_80631254(void);
void fn_8063132C(void);
void fn_80631468(void);
void fn_806315A4(void);
void fn_806316C0(void);
void fn_806317D8(void);
void fn_80631894(void);
void fn_80631AB4(void);
void fn_80631C3C(void);
void fn_80631CE8(void);
void fn_80631D88(void);
void fn_80631EA8(void);
void fn_80631F60(void);
void fn_80631FE8(void);
void fn_80632180(void);
void fn_80632220(void);
void fn_806322D0(void);
void fn_8063236C(void);

asm void fn_8062FE10(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r8, lbl_80820018@ha
    mr r30, r3
    addi r8, r8, lbl_80820018@l
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r29, r8, 0x34
    li r31, 0x0
lbl_fn_8062FE10_00000038:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8062FE10_00000060
    mr r4, r30
    addi r3, r29, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8062FE10_00000060
    b lbl_fn_8062FE10_00000074
lbl_fn_8062FE10_00000060:
    addi r31, r31, 0x1
    addi r29, r29, 0x11c
    cmplwi r31, 0x4
    blt lbl_fn_8062FE10_00000038
    li r29, 0x0
lbl_fn_8062FE10_00000074:
    cmpwi r29, 0x0
    beq lbl_fn_8062FE10_000000C8
    sth r27, 0x0(r29)
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    stb r28, 0x11a(r29)
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8062FE10_000002FC
    lis r3, 0xd
    lis r4, lbl_807B3FB0@ha
    lbz r5, 0x0(r30)
    addi r3, r3, 0x3
    lbz r6, 0x1(r30)
    addi r4, r4, lbl_807B3FB0@l
    lbz r7, 0x2(r30)
    lbz r8, 0x3(r30)
    lbz r9, 0x4(r30)
    lbz r10, 0x5(r30)
    bl fn_806298D0
    b lbl_fn_8062FE10_000002FC
lbl_fn_8062FE10_000000C8:
    lis r3, lbl_80820018@ha
    li r0, 0x4
    addi r3, r3, lbl_80820018@l
    li r4, 0x0
    addi r31, r3, 0x34
    mtctr r0
lbl_fn_8062FE10_000000E0:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8062FE10_000002F0
    li r3, 0x1
    li r0, 0x0
    stb r3, 0x119(r31)
    clrlwi r3, r4, 24
    sth r27, 0x0(r31)
    stb r28, 0x11a(r31)
    sth r0, 0x4(r31)
    bl fn_80635AEC
    mr r4, r30
    addi r3, r31, 0x8
    li r5, 0x6
    bl memcpy
    cmpwi r25, 0x0
    beq lbl_fn_8062FE10_00000134
    mr r4, r25
    addi r3, r31, 0xe
    li r5, 0x3
    bl memcpy
lbl_fn_8062FE10_00000134:
    cmpwi r26, 0x0
    beq lbl_fn_8062FE10_0000014C
    mr r4, r26
    addi r3, r31, 0x11
    li r5, 0xf8
    bl memcpy
lbl_fn_8062FE10_0000014C:
    lhz r3, 0x0(r31)
    bl fn_8063D470
    lhz r3, 0x0(r31)
    bl fn_8063D3F4
    mr r3, r27
    bl fn_80631EA8
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_8062FE10_000002E4
    li r0, 0x8
    li r6, 0x0
    mtctr r0
lbl_fn_8062FE10_0000017C:
    clrlwi r0, r6, 24
    add r4, r3, r0
    lbz r0, 0x77(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8062FE10_000002DC
    addi r4, r5, 0x77
    addi r3, r31, 0x110
    li r5, 0x8
    bl memcpy
    lis r3, lbl_80820018@ha
    li r0, -0x3307
    addi r3, r3, lbl_80820018@l
    lhz r5, 0x654(r3)
    lbz r3, 0x636(r3)
    andi. r4, r5, 0xcc18
    cmplwi r3, 0x3
    and r30, r4, r0
    blt lbl_fn_8062FE10_000001D0
    andi. r0, r5, 0x3306
    or r0, r4, r0
    clrlwi r30, r0, 16
lbl_fn_8062FE10_000001D0:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8062FE10_000001FC
    lis r3, 0xd
    lis r4, lbl_807B3FF0@ha
    addi r3, r3, 0x3
    clrlwi r5, r30, 16
    addi r4, r4, lbl_807B3FF0@l
    bl fn_80629830
lbl_fn_8062FE10_000001FC:
    lhz r3, 0x0(r31)
    clrlwi r4, r30, 16
    bl fn_8063D068
    clrlwi. r0, r3, 24
    beq lbl_fn_8062FE10_00000214
    sth r30, 0x2(r31)
lbl_fn_8062FE10_00000214:
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lhz r0, 0x4c4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8062FE10_00000234
    addi r3, r31, 0x8
    addi r4, r4, 0x4c4
    bl fn_806305D8
lbl_fn_8062FE10_00000234:
    lis r3, lbl_80820018@ha
    li r29, 0x0
    addi r3, r3, lbl_80820018@l
    lhz r28, 0x4c6(r3)
    addi r30, r3, 0x34
lbl_fn_8062FE10_00000248:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8062FE10_00000270
    addi r3, r30, 0x8
    addi r4, r31, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8062FE10_00000270
    b lbl_fn_8062FE10_00000284
lbl_fn_8062FE10_00000270:
    addi r29, r29, 0x1
    addi r30, r30, 0x11c
    cmplwi r29, 0x4
    blt lbl_fn_8062FE10_00000248
    li r30, 0x0
lbl_fn_8062FE10_00000284:
    cmpwi r30, 0x0
    beq lbl_fn_8062FE10_000002A8
    sth r28, 0x10e(r30)
    lbz r0, 0x11a(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8062FE10_000002A8
    lhz r3, 0x0(r30)
    mr r4, r28
    bl fn_8063E568
lbl_fn_8062FE10_000002A8:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r12, 0x4c8(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8062FE10_000002FC
    addi r3, r31, 0x8
    addi r4, r31, 0xe
    addi r5, r31, 0x11
    addi r6, r31, 0x110
    li r7, 0x1
    mtctr r12
    bctrl
    b lbl_fn_8062FE10_000002FC
lbl_fn_8062FE10_000002DC:
    addi r6, r6, 0x1
    bdnz lbl_fn_8062FE10_0000017C
lbl_fn_8062FE10_000002E4:
    lhz r3, 0x0(r31)
    bl fn_8063D378
    b lbl_fn_8062FE10_000002FC
lbl_fn_8062FE10_000002F0:
    addi r4, r4, 0x1
    addi r31, r31, 0x11c
    bdnz lbl_fn_8062FE10_000000E0
lbl_fn_8062FE10_000002FC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80630124(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_80630124_00000340:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80630124_00000368
    mr r4, r29
    addi r3, r30, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80630124_00000368
    b lbl_fn_80630124_0000037C
lbl_fn_80630124_00000368:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_fn_80630124_00000340
    li r30, 0x0
lbl_fn_80630124_0000037C:
    cmpwi r30, 0x0
    beq lbl_fn_80630124_000003BC
    li r0, 0x0
    lis r3, lbl_80820018@ha
    stb r0, 0x119(r30)
    addi r3, r3, lbl_80820018@l
    lwz r12, 0x4c8(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80630124_000003BC
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    mtctr r12
    bctrl
lbl_fn_80630124_000003BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806301E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80820018@l
    stw r31, 0xc(r1)
    addi r31, r3, 0x34
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_806301E8_000003FC:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806301E8_00000414
    lhz r3, 0x0(r31)
    li r4, 0x3
    bl fn_8064465C
lbl_fn_806301E8_00000414:
    addi r30, r30, 0x1
    addi r31, r31, 0x11c
    cmplwi r30, 0x4
    blt lbl_fn_806301E8_000003FC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063024C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r6, lbl_80820018@ha
    mr r28, r3
    addi r6, r6, lbl_80820018@l
    mr r29, r4
    lbz r0, 0x640(r6)
    mr r30, r5
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_fn_8063024C_00000478
    li r3, 0x4
    b lbl_fn_8063024C_00000640
lbl_fn_8063024C_00000478:
    addi r31, r6, 0x34
    li r27, 0x0
lbl_fn_8063024C_00000480:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063024C_000004A8
    mr r4, r28
    addi r3, r31, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8063024C_000004A8
    b lbl_fn_8063024C_000004BC
lbl_fn_8063024C_000004A8:
    addi r27, r27, 0x1
    addi r31, r31, 0x11c
    cmplwi r27, 0x4
    blt lbl_fn_8063024C_00000480
    li r31, 0x0
lbl_fn_8063024C_000004BC:
    cmpwi r31, 0x0
    bne lbl_fn_8063024C_000004CC
    li r3, 0x7
    b lbl_fn_8063024C_00000640
lbl_fn_8063024C_000004CC:
    lbz r0, 0x11a(r31)
    cmplw r0, r29
    bne lbl_fn_8063024C_000004E0
    li r3, 0x0
    b lbl_fn_8063024C_00000640
lbl_fn_8063024C_000004E0:
    mr r3, r28
    bl fn_80637174
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_8063024C_000004FC
    li r3, 0x3
    b lbl_fn_8063024C_00000640
lbl_fn_8063024C_000004FC:
    lbz r0, 0x11b(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063024C_00000538
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x5
    blt lbl_fn_8063024C_00000530
    lis r3, 0xd
    lis r4, lbl_807B4010@ha
    addi r3, r3, 0x4
    addi r4, r4, lbl_807B4010@l
    bl fn_80629810
lbl_fn_8063024C_00000530:
    li r3, 0x2
    b lbl_fn_8063024C_00000640
lbl_fn_8063024C_00000538:
    lis r3, lbl_80820018@ha
    li r4, 0x0
    addi r3, r3, lbl_80820018@l
    li r5, 0x8
    addi r3, r3, 0x624
    bl memset
    addi r3, r31, 0x8
    addi r4, r1, 0x8
    bl fn_806359BC
    clrlwi. r0, r3, 24
    beq lbl_fn_8063024C_00000568
    b lbl_fn_8063024C_00000640
lbl_fn_8063024C_00000568:
    lbz r3, 0x8(r1)
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_8063024C_000005B4
    li r0, 0x0
    addi r4, r31, 0x8
    stb r0, 0x14(r1)
    addi r5, r1, 0xc
    li r3, 0x80
    bl fn_806357EC
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_fn_8063024C_000005A8
    li r3, 0x6
    b lbl_fn_8063024C_00000640
lbl_fn_8063024C_000005A8:
    li r0, 0x1
    stb r0, 0x11b(r31)
    b lbl_fn_8063024C_0000061C
lbl_fn_8063024C_000005B4:
    mr r3, r28
    bl fn_80631F60
    cmpwi r3, 0x0
    beq lbl_fn_8063024C_000005F8
    lbz r0, 0x76(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_8063024C_000005F8
    lhz r3, 0x0(r31)
    li r4, 0x0
    bl fn_8063D174
    clrlwi. r0, r3, 24
    bne lbl_fn_8063024C_000005EC
    li r3, 0x3
    b lbl_fn_8063024C_00000640
lbl_fn_8063024C_000005EC:
    li r0, 0x2
    stb r0, 0x11b(r31)
    b lbl_fn_8063024C_0000061C
lbl_fn_8063024C_000005F8:
    mr r3, r28
    mr r4, r29
    bl fn_8063DA6C
    clrlwi. r0, r3, 24
    bne lbl_fn_8063024C_00000614
    li r3, 0x3
    b lbl_fn_8063024C_00000640
lbl_fn_8063024C_00000614:
    li r0, 0x5
    stb r0, 0x11b(r31)
lbl_fn_8063024C_0000061C:
    lis r31, lbl_80820018@ha
    mr r4, r28
    addi r31, r31, lbl_80820018@l
    li r5, 0x6
    addi r3, r31, 0x626
    bl memcpy
    stb r29, 0x625(r31)
    li r3, 0x1
    stw r30, 0x62c(r31)
lbl_fn_8063024C_00000640:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80630468(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    li r6, 0x0
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x14d(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80630468_00000694
    lhz r0, 0x34(r4)
    cmplw r0, r3
    beq lbl_fn_80630468_000006EC
lbl_fn_80630468_00000694:
    lbz r0, 0x269(r4)
    li r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80630468_000006B0
    lhz r0, 0x150(r4)
    cmplw r0, r3
    beq lbl_fn_80630468_000006EC
lbl_fn_80630468_000006B0:
    lbz r0, 0x385(r4)
    li r6, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_80630468_000006CC
    lhz r0, 0x26c(r4)
    cmplw r0, r3
    beq lbl_fn_80630468_000006EC
lbl_fn_80630468_000006CC:
    lbz r0, 0x4a1(r4)
    li r6, 0x3
    cmpwi r0, 0x0
    beq lbl_fn_80630468_000006E8
    lhz r0, 0x388(r4)
    cmplw r0, r3
    beq lbl_fn_80630468_000006EC
lbl_fn_80630468_000006E8:
    li r6, 0x4
lbl_fn_80630468_000006EC:
    cmplwi r6, 0x4
    bge lbl_fn_80630468_000007AC
    mulli r0, r6, 0x11c
    lis r30, lbl_80820018@ha
    addi r30, r30, lbl_80820018@l
    add r29, r30, r0
    b lbl_fn_80630468_0000070C
    b lbl_fn_80630468_000007AC
lbl_fn_80630468_0000070C:
    lbz r0, 0x14f(r29)
    cmplwi r0, 0x2
    bne lbl_fn_80630468_00000780
    cmpwi r5, 0x0
    beq lbl_fn_80630468_0000072C
    li r0, 0x0
    stb r0, 0x14f(r29)
    b lbl_fn_80630468_00000734
lbl_fn_80630468_0000072C:
    li r0, 0x3
    stb r0, 0x14f(r29)
lbl_fn_80630468_00000734:
    lbz r0, 0x14e(r29)
    addi r3, r29, 0x3c
    cntlzw r0, r0
    extrwi r4, r0, 8, 19
    bl fn_8063DA6C
    clrlwi. r0, r3, 24
    bne lbl_fn_80630468_000007AC
    li r30, 0x0
    lis r31, lbl_80820018@ha
    stb r30, 0x14f(r29)
    addi r31, r31, lbl_80820018@l
    lwz r12, 0x62c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80630468_000007AC
    addi r3, r31, 0x624
    mtctr r12
    bctrl
    stw r30, 0x62c(r31)
    b lbl_fn_80630468_000007AC
lbl_fn_80630468_00000780:
    cmplwi r0, 0x4
    bne lbl_fn_80630468_000007AC
    li r31, 0x0
    stb r31, 0x14f(r29)
    lwz r12, 0x62c(r30)
    cmpwi r12, 0x0
    beq lbl_fn_80630468_000007AC
    addi r3, r30, 0x624
    mtctr r12
    bctrl
    stw r31, 0x62c(r30)
lbl_fn_80630468_000007AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806305D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_807B3FB0@ha
    addi r30, r30, lbl_807B3FB0@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_806332A4
    lhz r4, 0x0(r29)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_fn_806305D8_00000920
    clrlwi. r0, r4, 31
    beq lbl_fn_806305D8_00000848
    lbz r0, 0x0(r3)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_fn_806305D8_00000848
    rlwinm r5, r4, 0, 16, 30
    lis r3, lbl_80820018@ha
    sth r5, 0x0(r29)
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806305D8_00000848
    lis r3, 0xd
    addi r4, r30, 0xbc
    addi r3, r3, 0x2
    bl fn_80629830
lbl_fn_806305D8_00000848:
    lhz r3, 0x0(r29)
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_fn_806305D8_00000890
    lbz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 25, 25
    bne lbl_fn_806305D8_00000890
    rlwinm r5, r3, 0, 31, 29
    lis r3, lbl_80820018@ha
    sth r5, 0x0(r29)
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806305D8_00000890
    lis r3, 0xd
    addi r4, r30, 0xf8
    addi r3, r3, 0x2
    clrlwi r5, r5, 16
    bl fn_80629830
lbl_fn_806305D8_00000890:
    lhz r3, 0x0(r29)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_806305D8_000008D8
    lbz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_fn_806305D8_000008D8
    rlwinm r5, r3, 0, 30, 28
    lis r3, lbl_80820018@ha
    sth r5, 0x0(r29)
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806305D8_000008D8
    lis r3, 0xd
    addi r4, r30, 0x130
    addi r3, r3, 0x2
    clrlwi r5, r5, 16
    bl fn_80629830
lbl_fn_806305D8_000008D8:
    lhz r3, 0x0(r29)
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_fn_806305D8_00000920
    lbz r0, 0x1(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_806305D8_00000920
    rlwinm r5, r3, 0, 29, 27
    lis r3, lbl_80820018@ha
    sth r5, 0x0(r29)
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_fn_806305D8_00000920
    lis r3, 0xd
    addi r4, r30, 0x170
    addi r3, r3, 0x2
    clrlwi r5, r5, 16
    bl fn_80629830
lbl_fn_806305D8_00000920:
    lis r3, lbl_80820018@ha
    li r30, 0x0
    addi r3, r3, lbl_80820018@l
    addi r31, r3, 0x34
lbl_fn_806305D8_00000930:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806305D8_00000958
    mr r4, r28
    addi r3, r31, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806305D8_00000958
    b lbl_fn_806305D8_0000096C
lbl_fn_806305D8_00000958:
    addi r30, r30, 0x1
    addi r31, r31, 0x11c
    cmplwi r30, 0x4
    blt lbl_fn_806305D8_00000930
    li r31, 0x0
lbl_fn_806305D8_0000096C:
    cmpwi r31, 0x0
    beq lbl_fn_806305D8_00000994
    lhz r3, 0x0(r31)
    lhz r4, 0x0(r29)
    bl fn_8063DB1C
    clrlwi. r0, r3, 24
    li r3, 0x3
    beq lbl_fn_806305D8_00000998
    li r3, 0x1
    b lbl_fn_806305D8_00000998
lbl_fn_806305D8_00000994:
    li r3, 0x7
lbl_fn_806305D8_00000998:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806307C8(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    sth r3, 0x4c4(r4)
    blr
}

asm void fn_806307D8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    addi r29, r31, 0x34
    stw r28, 0x20(r1)
    mr r28, r3
    addi r3, r31, 0x5ac
    lwz r30, 0x5c4(r31)
    bl fn_80629E90
    li r3, 0x0
    cmpwi r30, 0x0
    stw r3, 0x5c4(r31)
    beq lbl_fn_806307D8_00000AAC
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    stb r0, 0x9(r1)
    bne lbl_fn_806307D8_00000A94
    stb r3, 0x8(r1)
    li r0, 0x4
    li r7, 0x0
    lbz r4, 0x2(r28)
    lbz r3, 0x4(r28)
    slwi r5, r4, 8
    lbz r6, 0x1(r28)
    lbz r4, 0x3(r28)
    slwi r3, r3, 8
    add r5, r6, r5
    add r3, r4, r3
    sth r3, 0x10(r1)
    clrlwi r3, r5, 16
    mtctr r0
lbl_fn_806307D8_00000A58:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806307D8_00000A84
    lhz r0, 0x0(r29)
    cmplw r3, r0
    bne lbl_fn_806307D8_00000A84
    addi r3, r1, 0xa
    addi r4, r29, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_fn_806307D8_00000A9C
lbl_fn_806307D8_00000A84:
    addi r7, r7, 0x1
    addi r29, r29, 0x11c
    bdnz lbl_fn_806307D8_00000A58
    b lbl_fn_806307D8_00000A9C
lbl_fn_806307D8_00000A94:
    li r0, 0xa
    stb r0, 0x8(r1)
lbl_fn_806307D8_00000A9C:
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_fn_806307D8_00000AAC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806308DC(void)
{
    nofralloc
    lbz r0, 0x0(r3)
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    cmpwi r0, 0x0
    addi r6, r4, 0x34
    bnelr
    lbz r4, 0x2(r3)
    li r0, 0x4
    lbz r5, 0x1(r3)
    slwi r4, r4, 8
    add r4, r5, r4
    clrlwi r4, r4, 16
    mtctr r0
lbl_fn_806308DC_00000B00:
    lbz r0, 0x119(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806308DC_00000B4C
    lhz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_806308DC_00000B4C
    lbz r0, 0x3(r3)
    stb r0, 0x118(r6)
    lbz r0, 0x5(r3)
    lbz r4, 0x4(r3)
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0x10a(r6)
    lbz r0, 0x7(r3)
    lbz r3, 0x6(r3)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x10c(r6)
    blr
lbl_fn_806308DC_00000B4C:
    addi r6, r6, 0x11c
    bdnz lbl_fn_806308DC_00000B00
    blr
}

asm void fn_80630968(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    addi r31, r4, 0x34
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80630968_00000D64
    lbz r4, 0x2(r3)
    li r0, 0x4
    lbz r5, 0x1(r3)
    slwi r4, r4, 8
    add r4, r5, r4
    clrlwi r4, r4, 16
    mtctr r0
lbl_fn_80630968_00000BA8:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80630968_00000D5C
    lhz r0, 0x0(r31)
    cmplw r0, r4
    bne lbl_fn_80630968_00000D5C
    lbz r0, 0x3(r3)
    stb r0, 0x110(r31)
    lbz r0, 0x4(r3)
    stb r0, 0x111(r31)
    lbz r0, 0x5(r3)
    stb r0, 0x112(r31)
    lbz r0, 0x6(r3)
    stb r0, 0x113(r31)
    lbz r0, 0x7(r3)
    stb r0, 0x114(r31)
    lbz r0, 0x8(r3)
    stb r0, 0x115(r31)
    lbz r0, 0x9(r3)
    stb r0, 0x116(r31)
    lbz r0, 0xa(r3)
    mr r3, r4
    stb r0, 0x117(r31)
    bl fn_80631EA8
    cmpwi r3, 0x0
    beq lbl_fn_80630968_00000C20
    addi r4, r31, 0x110
    li r5, 0x8
    addi r3, r3, 0x77
    bl memcpy
lbl_fn_80630968_00000C20:
    lis r3, lbl_80820018@ha
    li r0, -0x3307
    addi r3, r3, lbl_80820018@l
    lhz r5, 0x654(r3)
    lbz r3, 0x636(r3)
    andi. r4, r5, 0xcc18
    cmplwi r3, 0x3
    and r30, r4, r0
    blt lbl_fn_80630968_00000C50
    andi. r0, r5, 0x3306
    or r0, r4, r0
    clrlwi r30, r0, 16
lbl_fn_80630968_00000C50:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80630968_00000C7C
    lis r3, 0xd
    lis r4, lbl_807B3FF0@ha
    addi r3, r3, 0x3
    clrlwi r5, r30, 16
    addi r4, r4, lbl_807B3FF0@l
    bl fn_80629830
lbl_fn_80630968_00000C7C:
    lhz r3, 0x0(r31)
    clrlwi r4, r30, 16
    bl fn_8063D068
    clrlwi. r0, r3, 24
    beq lbl_fn_80630968_00000C94
    sth r30, 0x2(r31)
lbl_fn_80630968_00000C94:
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lhz r0, 0x4c4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80630968_00000CB4
    addi r3, r31, 0x8
    addi r4, r4, 0x4c4
    bl fn_806305D8
lbl_fn_80630968_00000CB4:
    lis r3, lbl_80820018@ha
    li r30, 0x0
    addi r3, r3, lbl_80820018@l
    lhz r28, 0x4c6(r3)
    addi r29, r3, 0x34
lbl_fn_80630968_00000CC8:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80630968_00000CF0
    addi r3, r29, 0x8
    addi r4, r31, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80630968_00000CF0
    b lbl_fn_80630968_00000D04
lbl_fn_80630968_00000CF0:
    addi r30, r30, 0x1
    addi r29, r29, 0x11c
    cmplwi r30, 0x4
    blt lbl_fn_80630968_00000CC8
    li r29, 0x0
lbl_fn_80630968_00000D04:
    cmpwi r29, 0x0
    beq lbl_fn_80630968_00000D28
    sth r28, 0x10e(r29)
    lbz r0, 0x11a(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80630968_00000D28
    lhz r3, 0x0(r29)
    mr r4, r28
    bl fn_8063E568
lbl_fn_80630968_00000D28:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r12, 0x4c8(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80630968_00000D64
    addi r3, r31, 0x8
    addi r4, r31, 0xe
    addi r5, r31, 0x11
    addi r6, r31, 0x110
    li r7, 0x1
    mtctr r12
    bctrl
    b lbl_fn_80630968_00000D64
lbl_fn_80630968_00000D5C:
    addi r31, r31, 0x11c
    bdnz lbl_fn_80630968_00000BA8
lbl_fn_80630968_00000D64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80630B94(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    sth r3, 0x4c6(r4)
    blr
}

asm void fn_80630BA4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x3
    blt lbl_fn_80630BA4_00000DF0
    lis r3, 0xd
    lis r4, lbl_807B4190@ha
    lbz r5, 0x0(r29)
    addi r3, r3, 0x2
    lbz r6, 0x1(r29)
    addi r4, r4, lbl_807B4190@l
    lbz r7, 0x2(r29)
    lbz r8, 0x3(r29)
    lbz r9, 0x4(r29)
    lbz r10, 0x5(r29)
    bl fn_806298D0
lbl_fn_80630BA4_00000DF0:
    lis r3, lbl_80820018@ha
    li r31, 0x0
    addi r3, r3, lbl_80820018@l
    addi r30, r3, 0x34
lbl_fn_80630BA4_00000E00:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80630BA4_00000E28
    mr r4, r29
    addi r3, r30, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80630BA4_00000E28
    b lbl_fn_80630BA4_00000E3C
lbl_fn_80630BA4_00000E28:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_fn_80630BA4_00000E00
    li r30, 0x0
lbl_fn_80630BA4_00000E3C:
    cmpwi r30, 0x0
    beq lbl_fn_80630BA4_00000E4C
    li r3, 0x1
    b lbl_fn_80630BA4_00000E50
lbl_fn_80630BA4_00000E4C:
    li r3, 0x0
lbl_fn_80630BA4_00000E50:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80630C7C(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    li r3, 0x0
    addi r4, r4, lbl_80820018@l
    lbz r0, 0x14d(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80630C7C_00000E88
    li r3, 0x1
lbl_fn_80630C7C_00000E88:
    lbz r0, 0x269(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80630C7C_00000E9C
    addi r0, r3, 0x1
    clrlwi r3, r0, 16
lbl_fn_80630C7C_00000E9C:
    lbz r0, 0x385(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80630C7C_00000EB0
    addi r0, r3, 0x1
    clrlwi r3, r0, 16
lbl_fn_80630C7C_00000EB0:
    lbz r0, 0x4a1(r4)
    cmpwi r0, 0x0
    beqlr
    addi r0, r3, 0x1
    clrlwi r3, r0, 16
    blr
}

asm void fn_80630CD8(void)
{
    nofralloc
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r3, 0x27bf(r3)
    blr
}

asm void fn_80630CE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_80630CE8_00000F04:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80630CE8_00000F2C
    mr r4, r29
    addi r3, r30, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80630CE8_00000F2C
    b lbl_fn_80630CE8_00000F40
lbl_fn_80630CE8_00000F2C:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_fn_80630CE8_00000F04
    li r30, 0x0
lbl_fn_80630CE8_00000F40:
    cmpwi r30, 0x0
    beq lbl_fn_80630CE8_00000F50
    lhz r3, 0x0(r30)
    b lbl_fn_80630CE8_00000F58
lbl_fn_80630CE8_00000F50:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_80630CE8_00000F58:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80630D84(void)
{
    nofralloc
    lis r5, lbl_80820018@ha
    li r6, 0x0
    addi r5, r5, lbl_80820018@l
    lbz r0, 0x14d(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80630D84_00000F98
    lhz r0, 0x34(r5)
    cmplw r0, r3
    beq lbl_fn_80630D84_00000FF0
lbl_fn_80630D84_00000F98:
    lbz r0, 0x269(r5)
    li r6, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80630D84_00000FB4
    lhz r0, 0x150(r5)
    cmplw r0, r3
    beq lbl_fn_80630D84_00000FF0
lbl_fn_80630D84_00000FB4:
    lbz r0, 0x385(r5)
    li r6, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_80630D84_00000FD0
    lhz r0, 0x26c(r5)
    cmplw r0, r3
    beq lbl_fn_80630D84_00000FF0
lbl_fn_80630D84_00000FD0:
    lbz r0, 0x4a1(r5)
    li r6, 0x3
    cmpwi r0, 0x0
    beq lbl_fn_80630D84_00000FEC
    lhz r0, 0x388(r5)
    cmplw r0, r3
    beq lbl_fn_80630D84_00000FF0
lbl_fn_80630D84_00000FEC:
    li r6, 0x4
lbl_fn_80630D84_00000FF0:
    cmplwi r6, 0x4
    bgelr
    mulli r0, r6, 0x11c
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    add r3, r3, r0
    sth r4, 0x3a(r3)
    blr
}

asm void fn_80630E20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r4, 0x0
    mr r25, r3
    mr r26, r4
    mr r28, r5
    beq lbl_fn_80630E20_00001040
    mr r27, r26
    b lbl_fn_80630E20_0000104C
lbl_fn_80630E20_00001040:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    addi r27, r3, 0x27b4
lbl_fn_80630E20_0000104C:
    lis r3, lbl_80820018@ha
    li r30, 0x0
    addi r3, r3, lbl_80820018@l
    addi r29, r3, 0x34
lbl_fn_80630E20_0000105C:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80630E20_00001084
    mr r4, r27
    addi r3, r29, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80630E20_00001084
    b lbl_fn_80630E20_00001098
lbl_fn_80630E20_00001084:
    addi r30, r30, 0x1
    addi r29, r29, 0x11c
    cmplwi r30, 0x4
    blt lbl_fn_80630E20_0000105C
    li r29, 0x0
lbl_fn_80630E20_00001098:
    lis r3, lbl_80820018@ha
    cmpwi r29, 0x0
    addi r3, r3, lbl_80820018@l
    addi r31, r3, 0x624
    beq lbl_fn_80630E20_000011EC
    cmpwi r25, 0x0
    stb r25, 0x0(r31)
    bne lbl_fn_80630E20_000010D0
    stb r28, 0x1(r31)
    mr r4, r27
    addi r3, r31, 0x2
    li r5, 0x6
    bl memcpy
    stb r28, 0x11a(r29)
lbl_fn_80630E20_000010D0:
    cmpwi r26, 0x0
    beq lbl_fn_80630E20_0000114C
    lis r3, lbl_80820018@ha
    lhz r30, 0x10e(r29)
    addi r3, r3, lbl_80820018@l
    li r28, 0x0
    addi r27, r3, 0x34
lbl_fn_80630E20_000010EC:
    lbz r0, 0x119(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80630E20_00001114
    addi r3, r27, 0x8
    addi r4, r29, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80630E20_00001114
    b lbl_fn_80630E20_00001128
lbl_fn_80630E20_00001114:
    addi r28, r28, 0x1
    addi r27, r27, 0x11c
    cmplwi r28, 0x4
    blt lbl_fn_80630E20_000010EC
    li r27, 0x0
lbl_fn_80630E20_00001128:
    cmpwi r27, 0x0
    beq lbl_fn_80630E20_0000114C
    sth r30, 0x10e(r27)
    lbz r0, 0x11a(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80630E20_0000114C
    lhz r3, 0x0(r27)
    mr r4, r30
    bl fn_8063E568
lbl_fn_80630E20_0000114C:
    lbz r0, 0x11b(r29)
    cmplwi r0, 0x3
    bne lbl_fn_80630E20_00001178
    lhz r3, 0x0(r29)
    li r4, 0x1
    bl fn_8063D174
    clrlwi. r0, r3, 24
    beq lbl_fn_80630E20_00001178
    li r0, 0x4
    stb r0, 0x11b(r29)
    b lbl_fn_80630E20_000011EC
lbl_fn_80630E20_00001178:
    cmpwi r29, 0x0
    beq lbl_fn_80630E20_00001194
    lbz r0, 0x11b(r29)
    cmplwi r0, 0x5
    bne lbl_fn_80630E20_00001194
    li r0, 0x0
    stb r0, 0x11b(r29)
lbl_fn_80630E20_00001194:
    lis r30, lbl_80820018@ha
    addi r30, r30, lbl_80820018@l
    lwz r12, 0x62c(r30)
    cmpwi r12, 0x0
    beq lbl_fn_80630E20_000011BC
    mr r3, r31
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x62c(r30)
lbl_fn_80630E20_000011BC:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80630E20_000011EC
    lis r3, 0xd
    lis r4, lbl_807B41CC@ha
    lbz r5, 0x1(r31)
    addi r3, r3, 0x3
    lbz r6, 0x0(r31)
    addi r4, r4, lbl_807B41CC@l
    bl fn_80629850
lbl_fn_80630E20_000011EC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80631014(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x10(r3)
    cmplwi r0, 0x4
    bne lbl_fn_80631014_00001250
    lis r4, lbl_80820018@ha
    li r3, 0xa
    addi r4, r4, lbl_80820018@l
    li r0, 0x0
    lwz r12, 0x5c4(r4)
    stb r3, 0x8(r1)
    cmpwi r12, 0x0
    sth r0, 0x10(r1)
    stw r0, 0x5c4(r4)
    beq lbl_fn_80631014_00001250
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_fn_80631014_00001250:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80631070(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r4, lbl_80820018@ha
    mr r27, r3
    addi r4, r4, lbl_80820018@l
    li r30, 0x0
    addi r29, r4, 0x34
lbl_fn_80631070_00001288:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80631070_000012B0
    mr r4, r27
    addi r3, r29, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80631070_000012B0
    b lbl_fn_80631070_000012C4
lbl_fn_80631070_000012B0:
    addi r30, r30, 0x1
    addi r29, r29, 0x11c
    cmplwi r30, 0x4
    blt lbl_fn_80631070_00001288
    li r29, 0x0
lbl_fn_80631070_000012C4:
    cmpwi r29, 0x0
    li r28, 0x0
    li r31, 0x0
    beq lbl_fn_80631070_000012DC
    lhz r28, 0x2(r29)
    b lbl_fn_80631070_00001300
lbl_fn_80631070_000012DC:
    lis r30, lbl_80820018@ha
    mr r4, r27
    addi r30, r30, lbl_80820018@l
    li r5, 0x6
    addi r3, r30, 0x630
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80631070_00001300
    lhz r28, 0x654(r30)
lbl_fn_80631070_00001300:
    cmpwi r28, 0x0
    beq lbl_fn_80631070_000013C4
    rlwinm. r0, r28, 0, 18, 18
    bne lbl_fn_80631070_00001318
    li r31, 0x3fd
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_00001318:
    rlwinm. r0, r28, 0, 19, 19
    bne lbl_fn_80631070_00001328
    li r31, 0x2a7
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_00001328:
    rlwinm. r0, r28, 0, 22, 22
    bne lbl_fn_80631070_00001338
    li r31, 0x228
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_00001338:
    rlwinm. r0, r28, 0, 16, 16
    beq lbl_fn_80631070_00001348
    li r31, 0x153
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_00001348:
    rlwinm. r0, r28, 0, 23, 23
    bne lbl_fn_80631070_00001358
    li r31, 0x16f
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_00001358:
    rlwinm. r0, r28, 0, 17, 17
    beq lbl_fn_80631070_00001368
    li r31, 0xe0
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_00001368:
    rlwinm. r0, r28, 0, 20, 20
    beq lbl_fn_80631070_00001378
    li r31, 0xb7
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_00001378:
    rlwinm. r0, r28, 0, 21, 21
    beq lbl_fn_80631070_00001388
    li r31, 0x79
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_00001388:
    rlwinm. r0, r28, 0, 29, 29
    bne lbl_fn_80631070_00001398
    li r31, 0x53
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_00001398:
    rlwinm. r0, r28, 0, 30, 30
    bne lbl_fn_80631070_000013A8
    li r31, 0x36
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_000013A8:
    rlwinm. r0, r28, 0, 27, 27
    beq lbl_fn_80631070_000013B8
    li r31, 0x1b
    b lbl_fn_80631070_000013C4
lbl_fn_80631070_000013B8:
    rlwinm. r0, r28, 0, 28, 28
    beq lbl_fn_80631070_000013C4
    li r31, 0x11
lbl_fn_80631070_000013C4:
    cmplwi r31, 0x3fd
    bne lbl_fn_80631070_000013E4
    lis r3, lbl_8081FAF0@ha
    addi r3, r3, lbl_8081FAF0@l
    lhz r0, 0x7c(r3)
    cmplwi r0, 0x3f9
    bne lbl_fn_80631070_000013E4
    li r31, 0x3f9
lbl_fn_80631070_000013E4:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80631210(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_80631210_0000141C
    lis r3, lbl_80820018@ha
    li r0, 0x0
    addi r3, r3, lbl_80820018@l
    stw r0, 0x4c8(r3)
    b lbl_fn_80631210_0000143C
lbl_fn_80631210_0000141C:
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lwz r0, 0x4c8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80631210_00001438
    li r3, 0x2
    blr
lbl_fn_80631210_00001438:
    stw r3, 0x4c8(r4)
lbl_fn_80631210_0000143C:
    li r3, 0x0
    blr
}

asm void fn_80631254(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lis r31, lbl_80820018@ha
    mr r27, r3
    addi r31, r31, lbl_80820018@l
    mr r28, r4
    lwz r30, 0x618(r31)
    mr r29, r5
    addi r3, r31, 0x600
    bl fn_80629E90
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x618(r31)
    beq lbl_fn_80631254_00001504
    cmpwi r29, 0x0
    stb r27, 0x22(r1)
    sth r28, 0x20(r1)
    beq lbl_fn_80631254_000014C8
    lbz r0, 0x0(r29)
    stb r0, 0x8(r1)
    lbz r0, 0x1(r29)
    stb r0, 0x9(r1)
    lwz r0, 0x4(r29)
    stw r0, 0xc(r1)
    lwz r0, 0xc(r29)
    stw r0, 0x14(r1)
    lwz r0, 0x10(r29)
    stw r0, 0x18(r1)
    lwz r0, 0x14(r29)
    stw r0, 0x1c(r1)
lbl_fn_80631254_000014C8:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x5
    blt lbl_fn_80631254_000014F4
    lis r3, 0xd
    lis r4, lbl_807B4234@ha
    lwz r5, 0x14(r29)
    addi r3, r3, 0x4
    addi r4, r4, lbl_807B4234@l
    bl fn_80629830
lbl_fn_80631254_000014F4:
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_fn_80631254_00001504:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8063132C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80820018@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x27c0(r5)
    cmplwi r0, 0x3
    blt lbl_fn_8063132C_00001580
    lis r3, 0xd
    lis r4, lbl_807B425C@ha
    lbz r5, 0x0(r28)
    addi r3, r3, 0x2
    lbz r6, 0x1(r28)
    addi r4, r4, lbl_807B425C@l
    lbz r7, 0x2(r28)
    lbz r8, 0x3(r28)
    lbz r9, 0x4(r28)
    lbz r10, 0x5(r28)
    bl fn_806298D0
lbl_fn_8063132C_00001580:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r0, 0x5e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063132C_0000159C
    li r3, 0x2
    b lbl_fn_8063132C_00001638
lbl_fn_8063132C_0000159C:
    addi r30, r3, 0x34
    li r31, 0x0
lbl_fn_8063132C_000015A4:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8063132C_000015CC
    mr r4, r28
    addi r3, r30, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8063132C_000015CC
    b lbl_fn_8063132C_000015E0
lbl_fn_8063132C_000015CC:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_fn_8063132C_000015A4
    li r30, 0x0
lbl_fn_8063132C_000015E0:
    cmpwi r30, 0x0
    beq lbl_fn_8063132C_00001634
    lis r31, lbl_80820018@ha
    li r4, 0x9
    addi r31, r31, lbl_80820018@l
    li r5, 0x3
    addi r3, r31, 0x5c8
    bl fn_80629E20
    stw r29, 0x5e0(r31)
    lhz r3, 0x0(r30)
    bl fn_8063E82C
    clrlwi. r0, r3, 24
    bne lbl_fn_8063132C_0000162C
    li r0, 0x0
    addi r3, r31, 0x5c8
    stw r0, 0x5e0(r31)
    bl fn_80629E90
    li r3, 0x3
    b lbl_fn_8063132C_00001638
lbl_fn_8063132C_0000162C:
    li r3, 0x1
    b lbl_fn_8063132C_00001638
lbl_fn_8063132C_00001634:
    li r3, 0x7
lbl_fn_8063132C_00001638:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80631468(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80820018@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x27c0(r5)
    cmplwi r0, 0x3
    blt lbl_fn_80631468_000016BC
    lis r3, 0xd
    lis r4, lbl_807B4290@ha
    lbz r5, 0x0(r28)
    addi r3, r3, 0x2
    lbz r6, 0x1(r28)
    addi r4, r4, lbl_807B4290@l
    lbz r7, 0x2(r28)
    lbz r8, 0x3(r28)
    lbz r9, 0x4(r28)
    lbz r10, 0x5(r28)
    bl fn_806298D0
lbl_fn_80631468_000016BC:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r0, 0x5fc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80631468_000016D8
    li r3, 0x2
    b lbl_fn_80631468_00001774
lbl_fn_80631468_000016D8:
    addi r30, r3, 0x34
    li r31, 0x0
lbl_fn_80631468_000016E0:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80631468_00001708
    mr r4, r28
    addi r3, r30, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80631468_00001708
    b lbl_fn_80631468_0000171C
lbl_fn_80631468_00001708:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_fn_80631468_000016E0
    li r30, 0x0
lbl_fn_80631468_0000171C:
    cmpwi r30, 0x0
    beq lbl_fn_80631468_00001770
    lis r31, lbl_80820018@ha
    li r4, 0x9
    addi r31, r31, lbl_80820018@l
    li r5, 0x3
    addi r3, r31, 0x5e4
    bl fn_80629E20
    stw r29, 0x5fc(r31)
    lhz r3, 0x0(r30)
    bl fn_8063E7B0
    clrlwi. r0, r3, 24
    bne lbl_fn_80631468_00001768
    addi r3, r31, 0x5e4
    bl fn_80629E90
    li r0, 0x0
    li r3, 0x3
    stw r0, 0x5fc(r31)
    b lbl_fn_80631468_00001774
lbl_fn_80631468_00001768:
    li r3, 0x1
    b lbl_fn_80631468_00001774
lbl_fn_80631468_00001770:
    li r3, 0x7
lbl_fn_80631468_00001774:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806315A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    addi r29, r31, 0x34
    stw r28, 0x20(r1)
    mr r28, r3
    addi r3, r31, 0x5c8
    lwz r30, 0x5e0(r31)
    bl fn_80629E90
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x5e0(r31)
    beq lbl_fn_806315A4_00001890
    lbz r6, 0x0(r28)
    cmpwi r6, 0x0
    stb r6, 0x9(r1)
    bne lbl_fn_806315A4_00001878
    stb r0, 0x8(r1)
    lbz r0, 0x27c0(r31)
    lbz r3, 0x2(r28)
    lbz r4, 0x1(r28)
    cmplwi r0, 0x4
    lbz r5, 0x3(r28)
    slwi r0, r3, 8
    add r0, r4, r0
    stb r5, 0xa(r1)
    clrlwi r31, r0, 16
    blt lbl_fn_806315A4_00001830
    lis r3, 0xd
    lis r4, lbl_807B42CC@ha
    addi r3, r3, 0x3
    extsb r5, r5
    addi r4, r4, lbl_807B42CC@l
    bl fn_80629850
lbl_fn_806315A4_00001830:
    li r0, 0x4
    li r3, 0x0
    mtctr r0
lbl_fn_806315A4_0000183C:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806315A4_00001868
    lhz r0, 0x0(r29)
    cmplw r31, r0
    bne lbl_fn_806315A4_00001868
    addi r3, r1, 0xb
    addi r4, r29, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_fn_806315A4_00001880
lbl_fn_806315A4_00001868:
    addi r3, r3, 0x1
    addi r29, r29, 0x11c
    bdnz lbl_fn_806315A4_0000183C
    b lbl_fn_806315A4_00001880
lbl_fn_806315A4_00001878:
    li r0, 0xa
    stb r0, 0x8(r1)
lbl_fn_806315A4_00001880:
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_fn_806315A4_00001890:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806316C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    addi r29, r31, 0x34
    stw r28, 0x20(r1)
    mr r28, r3
    addi r3, r31, 0x5c8
    lwz r30, 0x5fc(r31)
    bl fn_80629E90
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x5fc(r31)
    beq lbl_fn_806316C0_000019A8
    lbz r6, 0x0(r28)
    cmpwi r6, 0x0
    stb r6, 0x9(r1)
    bne lbl_fn_806316C0_00001990
    stb r0, 0x8(r1)
    lbz r0, 0x27c0(r31)
    lbz r3, 0x2(r28)
    lbz r4, 0x1(r28)
    cmplwi r0, 0x4
    lbz r5, 0x3(r28)
    slwi r0, r3, 8
    add r0, r4, r0
    stb r5, 0xa(r1)
    clrlwi r31, r0, 16
    blt lbl_fn_806316C0_00001948
    lis r3, 0xd
    lis r4, lbl_807B42FC@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B42FC@l
    bl fn_80629850
lbl_fn_806316C0_00001948:
    li r0, 0x4
    li r3, 0x0
    mtctr r0
lbl_fn_806316C0_00001954:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806316C0_00001980
    lhz r0, 0x0(r29)
    cmplw r31, r0
    bne lbl_fn_806316C0_00001980
    addi r3, r1, 0xb
    addi r4, r29, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_fn_806316C0_00001998
lbl_fn_806316C0_00001980:
    addi r3, r3, 0x1
    addi r29, r29, 0x11c
    bdnz lbl_fn_806316C0_00001954
    b lbl_fn_806316C0_00001998
lbl_fn_806316C0_00001990:
    li r0, 0xa
    stb r0, 0x8(r1)
lbl_fn_806316C0_00001998:
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_fn_806316C0_000019A8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806317D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_806317D8_000019F4:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806317D8_00001A1C
    mr r4, r29
    addi r3, r30, 0x8
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806317D8_00001A1C
    b lbl_fn_806317D8_00001A30
lbl_fn_806317D8_00001A1C:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_fn_806317D8_000019F4
    li r30, 0x0
lbl_fn_806317D8_00001A30:
    cmpwi r30, 0x0
    beq lbl_fn_806317D8_00001A40
    lhz r3, 0x0(r30)
    b lbl_fn_806317D8_00001A48
lbl_fn_806317D8_00001A40:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_806317D8_00001A48:
    clrlwi r3, r3, 16
    li r4, 0x13
    bl fn_8063C9D4
    clrlwi. r0, r3, 24
    bne lbl_fn_806317D8_00001A64
    li r3, 0x3
    b lbl_fn_806317D8_00001A68
lbl_fn_806317D8_00001A64:
    li r3, 0x0
lbl_fn_806317D8_00001A68:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80631894(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    lis r4, lbl_80820018@ha
    cmpwi r3, 0x0
    addi r31, r4, lbl_80820018@l
    lis r30, lbl_807B3FB0@ha
    addi r30, r30, lbl_807B3FB0@l
    addi r28, r31, 0x34
    beq lbl_fn_80631894_00001B78
    li r29, 0x0
    lis r26, 0xd
    li r24, -0x3307
lbl_fn_80631894_00001AC0:
    lbz r0, 0x119(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80631894_00001B64
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x5
    blt lbl_fn_80631894_00001AE8
    lhz r5, 0x0(r28)
    addi r3, r26, 0x4
    addi r4, r30, 0x38c
    bl fn_80629830
lbl_fn_80631894_00001AE8:
    lhz r0, 0x2(r28)
    li r5, 0x18
    sth r0, 0x4(r28)
    lbz r3, 0x636(r31)
    cmplwi r3, 0x3
    blt lbl_fn_80631894_00001B08
    ori r0, r5, 0x3300
    clrlwi r5, r0, 16
lbl_fn_80631894_00001B08:
    lhz r4, 0x654(r31)
    cmplwi cr1, r3, 0x3
    and r0, r5, r4
    andi. r3, r0, 0xcc18
    and r25, r3, r24
    blt cr1, lbl_fn_80631894_00001B30
    or r0, r5, r4
    andi. r0, r0, 0x3306
    or r0, r3, r0
    clrlwi r25, r0, 16
lbl_fn_80631894_00001B30:
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x4
    blt lbl_fn_80631894_00001B4C
    addi r3, r26, 0x3
    addi r4, r30, 0x40
    clrlwi r5, r25, 16
    bl fn_80629830
lbl_fn_80631894_00001B4C:
    lhz r3, 0x0(r28)
    clrlwi r4, r25, 16
    bl fn_8063D068
    clrlwi. r0, r3, 24
    beq lbl_fn_80631894_00001B64
    sth r25, 0x2(r28)
lbl_fn_80631894_00001B64:
    addi r29, r29, 0x1
    addi r28, r28, 0x11c
    cmplwi r29, 0x4
    blt lbl_fn_80631894_00001AC0
    b lbl_fn_80631894_00001C8C
lbl_fn_80631894_00001B78:
    li r29, 0x0
    lis r24, 0xd
    li r25, 0x0
    li r27, -0x3307
lbl_fn_80631894_00001B88:
    lbz r0, 0x119(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80631894_00001C7C
    lhz r0, 0x4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80631894_00001C7C
    addi r3, r28, 0x8
    addi r4, r1, 0x8
    bl fn_806359BC
    clrlwi. r0, r3, 24
    bne lbl_fn_80631894_00001C7C
    lbz r0, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_fn_80631894_00001BF4
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x5
    blt lbl_fn_80631894_00001BDC
    lhz r5, 0x0(r28)
    addi r3, r24, 0x4
    addi r4, r30, 0x3bc
    bl fn_80629830
lbl_fn_80631894_00001BDC:
    stb r25, 0x14(r1)
    addi r4, r28, 0x8
    addi r5, r1, 0xc
    li r3, 0x80
    bl fn_806357EC
    b lbl_fn_80631894_00001C7C
lbl_fn_80631894_00001BF4:
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x5
    blt lbl_fn_80631894_00001C14
    lhz r5, 0x0(r28)
    addi r3, r24, 0x4
    lhz r6, 0x2(r28)
    addi r4, r30, 0x3ec
    bl fn_80629850
lbl_fn_80631894_00001C14:
    lhz r4, 0x4(r28)
    lhz r5, 0x654(r31)
    lbz r0, 0x636(r31)
    and r3, r4, r5
    andi. r3, r3, 0xcc18
    cmplwi r0, 0x3
    and r26, r3, r27
    blt lbl_fn_80631894_00001C44
    or r0, r4, r5
    andi. r0, r0, 0x3306
    or r0, r3, r0
    clrlwi r26, r0, 16
lbl_fn_80631894_00001C44:
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x4
    blt lbl_fn_80631894_00001C60
    addi r3, r24, 0x3
    addi r4, r30, 0x40
    clrlwi r5, r26, 16
    bl fn_80629830
lbl_fn_80631894_00001C60:
    lhz r3, 0x0(r28)
    clrlwi r4, r26, 16
    bl fn_8063D068
    clrlwi. r0, r3, 24
    beq lbl_fn_80631894_00001C78
    sth r26, 0x2(r28)
lbl_fn_80631894_00001C78:
    sth r25, 0x4(r28)
lbl_fn_80631894_00001C7C:
    addi r29, r29, 0x1
    addi r28, r28, 0x11c
    cmplwi r29, 0x4
    blt lbl_fn_80631894_00001B88
lbl_fn_80631894_00001C8C:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80631AB4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r9, lbl_80820018@ha
    mr r24, r3
    addi r9, r9, lbl_80820018@l
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    addi r30, r9, 0x1f30
    li r31, 0x0
lbl_fn_80631AB4_00001CE0:
    lbz r0, 0x76(r30)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631AB4_00001D08
    mr r4, r24
    addi r3, r30, 0x1c
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80631AB4_00001D08
    b lbl_fn_80631AB4_00001D1C
lbl_fn_80631AB4_00001D08:
    addi r31, r31, 0x1
    addi r30, r30, 0x88
    cmpwi r31, 0x10
    blt lbl_fn_80631AB4_00001CE0
    li r30, 0x0
lbl_fn_80631AB4_00001D1C:
    cmpwi r30, 0x0
    bne lbl_fn_80631AB4_00001D40
    mr r3, r24
    bl fn_80631D88
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80631AB4_00001D58
    li r3, 0x0
    b lbl_fn_80631AB4_00001E14
lbl_fn_80631AB4_00001D40:
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lwz r3, 0x1974(r4)
    stw r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0x1974(r4)
lbl_fn_80631AB4_00001D58:
    cmpwi r25, 0x0
    beq lbl_fn_80631AB4_00001D70
    mr r4, r25
    addi r3, r30, 0x22
    li r5, 0x3
    bl memcpy
lbl_fn_80631AB4_00001D70:
    addi r3, r30, 0x35
    li r4, 0x0
    li r5, 0x41
    bl memset
    cmpwi r26, 0x0
    beq lbl_fn_80631AB4_00001DB0
    lbz r0, 0x0(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80631AB4_00001DB0
    lbz r0, 0x76(r30)
    mr r4, r26
    addi r3, r30, 0x35
    li r5, 0x40
    ori r0, r0, 0x8
    stb r0, 0x76(r30)
    bl fn_8068236C
lbl_fn_80631AB4_00001DB0:
    cmpwi r27, 0x0
    beq lbl_fn_80631AB4_00001DCC
    mr r4, r27
    addi r3, r30, 0x77
    li r5, 0x8
    bl memcpy
    b lbl_fn_80631AB4_00001DDC
lbl_fn_80631AB4_00001DCC:
    addi r3, r30, 0x77
    li r4, 0x0
    li r5, 0x8
    bl memset
lbl_fn_80631AB4_00001DDC:
    lwz r0, 0x0(r28)
    cmpwi r29, 0x0
    stw r0, 0x10(r30)
    lwz r0, 0x4(r28)
    stw r0, 0x14(r30)
    beq lbl_fn_80631AB4_00001E10
    lbz r0, 0x76(r30)
    mr r4, r29
    addi r3, r30, 0x25
    li r5, 0x10
    ori r0, r0, 0x10
    stb r0, 0x76(r30)
    bl memcpy
lbl_fn_80631AB4_00001E10:
    li r3, 0x1
lbl_fn_80631AB4_00001E14:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80631C3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x1f30
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_80631C3C_00001E58:
    lbz r0, 0x76(r30)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631C3C_00001E80
    mr r4, r29
    addi r3, r30, 0x1c
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80631C3C_00001E80
    b lbl_fn_80631C3C_00001E94
lbl_fn_80631C3C_00001E80:
    addi r31, r31, 0x1
    addi r30, r30, 0x88
    cmpwi r31, 0x10
    blt lbl_fn_80631C3C_00001E58
    li r30, 0x0
lbl_fn_80631C3C_00001E94:
    cmpwi r30, 0x0
    bne lbl_fn_80631C3C_00001EA4
    li r3, 0x0
    b lbl_fn_80631C3C_00001EBC
lbl_fn_80631C3C_00001EA4:
    li r0, 0x0
    mr r3, r29
    stb r0, 0x76(r30)
    li r4, 0x0
    bl fn_8063374C
    li r3, 0x1
lbl_fn_80631C3C_00001EBC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80631CE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x1f30
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_fn_80631CE8_00001F0C:
    lbz r0, 0x76(r30)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631CE8_00001F34
    mr r4, r28
    addi r3, r30, 0x1c
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80631CE8_00001F34
    b lbl_fn_80631CE8_00001F48
lbl_fn_80631CE8_00001F34:
    addi r31, r31, 0x1
    addi r30, r30, 0x88
    cmpwi r31, 0x10
    blt lbl_fn_80631CE8_00001F0C
    li r30, 0x0
lbl_fn_80631CE8_00001F48:
    cmpwi r30, 0x0
    beq lbl_fn_80631CE8_00001F54
    addi r29, r30, 0x35
lbl_fn_80631CE8_00001F54:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80631D88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x14(r1)
    li r0, 0x10
    addi r4, r4, lbl_80820018@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x0
    mtctr r0
lbl_fn_80631D88_00001FA8:
    lbz r0, 0x1fa6(r4)
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_fn_80631D88_00001FCC
    mulli r0, r3, 0x88
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    add r3, r3, r0
    addi r31, r3, 0x1f30
    b lbl_fn_80631D88_00001FD8
lbl_fn_80631D88_00001FCC:
    addi r4, r4, 0x88
    addi r3, r3, 0x1
    bdnz lbl_fn_80631D88_00001FA8
lbl_fn_80631D88_00001FD8:
    cmpwi r31, 0x0
    bne lbl_fn_80631D88_00001FE8
    bl fn_80631FE8
    mr r31, r3
lbl_fn_80631D88_00001FE8:
    mr r3, r31
    li r4, 0x0
    li r5, 0x88
    bl memset
    li r3, 0x80
    li r0, 0x0
    stb r3, 0x76(r31)
    mr r3, r30
    stb r0, 0x85(r31)
    bl fn_8063466C
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80631D88_00002030
    addi r3, r31, 0x22
    addi r4, r4, 0x8
    li r5, 0x3
    bl memcpy
    b lbl_fn_80631D88_00002048
lbl_fn_80631D88_00002030:
    lis r4, lbl_80820018@ha
    addi r3, r31, 0x22
    addi r4, r4, lbl_80820018@l
    li r5, 0x3
    addi r4, r4, 0x27ba
    bl memcpy
lbl_fn_80631D88_00002048:
    mr r4, r30
    addi r3, r31, 0x1c
    li r5, 0x6
    bl memcpy
    mr r3, r30
    bl fn_80630CE8
    sth r3, 0x18(r31)
    lis r5, lbl_80820018@ha
    addi r5, r5, lbl_80820018@l
    mr r3, r31
    lwz r4, 0x1974(r5)
    stw r4, 0xc(r31)
    addi r0, r4, 0x1
    stw r0, 0x1974(r5)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80631EA8(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    li r0, 0x4
    addi r4, r4, lbl_80820018@l
    li r5, 0x0
    addi r4, r4, 0x1f30
    mtctr r0
lbl_fn_80631EA8_000020B0:
    lbz r0, 0x76(r4)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631EA8_000020D0
    lhz r0, 0x18(r4)
    cmplw r0, r3
    bne lbl_fn_80631EA8_000020D0
    mr r3, r4
    blr
lbl_fn_80631EA8_000020D0:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631EA8_000020F4
    lhz r0, 0x18(r4)
    cmplw r0, r3
    bne lbl_fn_80631EA8_000020F4
    mr r3, r4
    blr
lbl_fn_80631EA8_000020F4:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631EA8_00002118
    lhz r0, 0x18(r4)
    cmplw r0, r3
    bne lbl_fn_80631EA8_00002118
    mr r3, r4
    blr
lbl_fn_80631EA8_00002118:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631EA8_0000213C
    lhz r0, 0x18(r4)
    cmplw r0, r3
    bne lbl_fn_80631EA8_0000213C
    mr r3, r4
    blr
lbl_fn_80631EA8_0000213C:
    addi r5, r5, 0x3
    addi r4, r4, 0x88
    bdnz lbl_fn_80631EA8_000020B0
    li r3, 0x0
    blr
}

asm void fn_80631F60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0x1c(r1)
    addi r31, r4, 0x1f30
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_80631F60_0000217C:
    lbz r0, 0x76(r31)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631F60_000021A8
    mr r4, r29
    addi r3, r31, 0x1c
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80631F60_000021A8
    mr r3, r31
    b lbl_fn_80631F60_000021BC
lbl_fn_80631F60_000021A8:
    addi r30, r30, 0x1
    addi r31, r31, 0x88
    cmpwi r30, 0x10
    blt lbl_fn_80631F60_0000217C
    li r3, 0x0
lbl_fn_80631F60_000021BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80631FE8(void)
{
    nofralloc
    lis r3, lbl_80820018@ha
    li r0, 0x4
    addi r3, r3, lbl_80820018@l
    li r6, -0x1
    addi r5, r3, 0x1f30
    li r7, 0x0
    mr r3, r5
    mtctr r0
lbl_fn_80631FE8_000021F8:
    lbz r4, 0x76(r5)
    rlwinm. r0, r4, 0, 24, 24
    beq lbl_fn_80631FE8_00002220
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_fn_80631FE8_00002220
    lwz r0, 0xc(r5)
    cmplw r0, r6
    bge lbl_fn_80631FE8_00002220
    mr r3, r5
    mr r6, r0
lbl_fn_80631FE8_00002220:
    lbz r4, 0xfe(r5)
    addi r5, r5, 0x88
    rlwinm. r0, r4, 0, 24, 24
    beq lbl_fn_80631FE8_0000224C
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_fn_80631FE8_0000224C
    lwz r0, 0xc(r5)
    cmplw r0, r6
    bge lbl_fn_80631FE8_0000224C
    mr r3, r5
    mr r6, r0
lbl_fn_80631FE8_0000224C:
    lbz r4, 0xfe(r5)
    addi r5, r5, 0x88
    rlwinm. r0, r4, 0, 24, 24
    beq lbl_fn_80631FE8_00002278
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_fn_80631FE8_00002278
    lwz r0, 0xc(r5)
    cmplw r0, r6
    bge lbl_fn_80631FE8_00002278
    mr r3, r5
    mr r6, r0
lbl_fn_80631FE8_00002278:
    lbz r4, 0xfe(r5)
    addi r5, r5, 0x88
    rlwinm. r0, r4, 0, 24, 24
    beq lbl_fn_80631FE8_000022A4
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_fn_80631FE8_000022A4
    lwz r0, 0xc(r5)
    cmplw r0, r6
    bge lbl_fn_80631FE8_000022A4
    mr r3, r5
    mr r6, r0
lbl_fn_80631FE8_000022A4:
    addi r7, r7, 0x3
    addi r5, r5, 0x88
    bdnz lbl_fn_80631FE8_000021F8
    addis r0, r6, 0x1
    cmplwi r0, 0xffff
    bnelr
    lis r4, lbl_80820018@ha
    li r0, 0x4
    addi r4, r4, lbl_80820018@l
    li r5, 0x0
    addi r4, r4, 0x1f30
    mtctr r0
lbl_fn_80631FE8_000022D4:
    lbz r0, 0x76(r4)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631FE8_000022F4
    lwz r0, 0xc(r4)
    cmplw r0, r6
    bge lbl_fn_80631FE8_000022F4
    mr r3, r4
    mr r6, r0
lbl_fn_80631FE8_000022F4:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631FE8_00002318
    lwz r0, 0xc(r4)
    cmplw r0, r6
    bge lbl_fn_80631FE8_00002318
    mr r3, r4
    mr r6, r0
lbl_fn_80631FE8_00002318:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631FE8_0000233C
    lwz r0, 0xc(r4)
    cmplw r0, r6
    bge lbl_fn_80631FE8_0000233C
    mr r3, r4
    mr r6, r0
lbl_fn_80631FE8_0000233C:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80631FE8_00002360
    lwz r0, 0xc(r4)
    cmplw r0, r6
    bge lbl_fn_80631FE8_00002360
    mr r3, r4
    mr r6, r0
lbl_fn_80631FE8_00002360:
    addi r5, r5, 0x3
    addi r4, r4, 0x88
    bdnz lbl_fn_80631FE8_000022D4
    blr
}

asm void fn_80632180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r4, lbl_8087EAD8
    li r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    addi r3, r31, 0x648
    bl memcpy
    lis r3, 0x1
    li r7, 0xff
    subi r9, r3, 0x33e8
    li r12, 0x1
    li r3, 0x1400
    li r11, 0x2
    li r10, 0x4
    li r8, 0x3f
    li r6, 0x0
    li r0, 0x5
    sth r3, 0x64c(r31)
    addi r3, r31, 0x574
    li r4, 0x1
    li r5, 0x4
    stw r12, 0x584(r31)
    stw r11, 0x5a0(r31)
    stw r10, 0x5bc(r31)
    sth r9, 0x654(r31)
    sth r8, 0x656(r31)
    stb r7, 0x27bd(r31)
    stb r7, 0x27be(r31)
    stb r6, 0x64e(r31)
    stb r0, 0x64f(r31)
    bl fn_80629E20
    bl fn_8063DBB0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80632220(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0xc
    stb r0, 0x8(r1)
    bl fn_806349F0
    bl fn_80633B80
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r12, 0x5a8(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80632220_00002458
    li r0, 0x0
    stw r0, 0x5a8(r3)
    beq lbl_fn_80632220_00002458
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_80632220_00002458:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r12, 0x5c4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80632220_00002484
    li r0, 0x0
    stw r0, 0x5c4(r3)
    beq lbl_fn_80632220_00002484
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_fn_80632220_00002484:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r12, 0x5e0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80632220_000024B0
    li r0, 0x0
    stw r0, 0x5e0(r3)
    beq lbl_fn_80632220_000024B0
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_fn_80632220_000024B0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806322D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806322D0_000024F4
    cmplw r0, r3
    bne lbl_fn_806322D0_00002544
lbl_fn_806322D0_000024F4:
    bl fn_806301E8
    bl fn_80632220
    lis r31, lbl_80820018@ha
    li r6, 0x0
    addi r31, r31, lbl_80820018@l
    li r0, 0x5
    stw r30, 0x58c(r31)
    addi r3, r31, 0x574
    li r4, 0x1
    li r5, 0x4
    stb r6, 0x64e(r31)
    stb r0, 0x64f(r31)
    bl fn_80629E20
    bl fn_8063DBB0
    lwz r12, 0x568(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806322D0_00002544
    li r3, 0x1
    mtctr r12
    bctrl
lbl_fn_806322D0_00002544:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063236C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8063236C_0000259C
    cmplw r0, r3
    beq lbl_fn_8063236C_0000259C
    lwz r0, 0x620(r4)
    cmplw r0, r3
    bne lbl_fn_8063236C_000025EC
lbl_fn_8063236C_0000259C:
    bl fn_806301E8
    bl fn_80632220
    lis r31, lbl_80820018@ha
    li r6, 0x0
    addi r31, r31, lbl_80820018@l
    li r0, 0x5
    stw r30, 0x620(r31)
    addi r3, r31, 0x574
    li r4, 0x1
    li r5, 0x4
    stb r6, 0x64e(r31)
    stb r0, 0x64f(r31)
    bl fn_80629E20
    bl fn_8063DBB0
    lwz r12, 0x568(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8063236C_000025EC
    li r3, 0x1
    mtctr r12
    bctrl
lbl_fn_8063236C_000025EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
