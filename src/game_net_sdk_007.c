#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void OSRegisterVersion(void);
extern void OSReport(const char* msg, ...);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805EE150(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_80619920(void);
extern void fn_806199D0(void);
extern void fn_80619A00(void);
extern void fn_80619AB0(void);
extern void fn_806A475C(void);
extern void fn_806A5CA0(void);
extern void fn_806A5DC0(void);
extern void fn_806A5EF0(void);
extern void fn_806A8F40(void);
extern void fn_806A8FA0(void);
extern void fn_806A8FB0(void);
extern void fn_806A8FC0(void);
extern void fn_806A8FD0(void);
extern void fn_806A8FE0(void);
extern void fn_806A8FF0(void);
extern void fn_806A9000(void);
extern void fn_806A97B0(void);
extern void fn_806A9CA0(void);
extern void fn_806AA690(void);
extern void fn_806CF030(void);
extern void fn_806D08E0(void);
extern void fn_806D7A70(void);
extern void fn_806D8060(void);
extern void fn_806EA850(void);
extern void fn_806EA8A0(void);
extern void fn_806EA920(void);
extern void fn_806EAAD0(void);
extern void fn_806EAC00(void);
extern void fn_806EEDC0(void);
extern void fn_806EF470(void);
extern void fn_806EF5B0(void);
extern void fn_806EF930(void);
extern void fn_806F3EE0(void);
extern void fn_806F3F40(void);
extern void fn_806F3FB0(void);
extern void fn_806F41E0(void);
extern void fn_806F41F0(void);
extern void fn_806F4240(void);
extern void fn_806FEC90(void);
extern void fn_806FF920(void);
extern void fn_806FFA10(void);
extern void fn_806FFBE0(void);
extern void fn_806FFDD0(void);
extern void fn_806FFEA0(void);
extern void fn_806FFEB0(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 jumptable_807BCD40[];
extern u8 jumptable_807BD0D0[];
extern u8 lbl_8076B600[];
extern u8 lbl_8076B604[];
extern u8 lbl_807BCD3C[];
extern u8 lbl_807BCDA8[];
extern u8 lbl_807BCE4C[];
extern u8 lbl_807BCE58[];
extern u8 lbl_807BCEB0[];
extern u8 lbl_807BD030[];
extern u8 lbl_807BD040[];
extern u8 lbl_807BD054[];
extern u8 lbl_807BD078[];
extern u8 lbl_807BD08C[];
extern u8 lbl_807BD0A0[];
extern u8 lbl_807BD0B4[];
extern u8 lbl_807BD150[];
extern u8 lbl_807C5B70[];
extern u8 lbl_8085FA60[];
extern u8 lbl_8085FA78[];
extern u8 lbl_8085FAE0[];
extern u8 lbl_8085FD10[];
extern u8 lbl_8085FF18[];
extern u8 lbl_8085FF1C[];
extern u8 lbl_8085FF20[];
extern u8 lbl_8085FF24[];
extern u8 lbl_8085FF28[];
extern u8 lbl_8085FF2C[];
extern u8 lbl_8085FF30[];
extern u8 lbl_8085FF38[];
extern u8 lbl_8085FF3C[];
extern u8 lbl_8085FF40[];
extern u8 lbl_80862150[];

/* Small data declarations */
extern u32 lbl_80880458;
extern u32 lbl_80880460;
extern u32 lbl_80880464;
extern u32 lbl_80880468;
extern u32 lbl_8088046C;
extern u32 lbl_80880470;
extern u32 lbl_80880474;
extern u32 lbl_80880478;
extern u32 lbl_8088047C;
extern u32 lbl_80880480;
extern u32 lbl_80880484;

/* Function declarations */
void pad_03_806A6568_text(void);
void fn_806A6570(void);
void fn_806A6580(void);
void fn_806A6590(void);
void fn_806A65A0(void);
void fn_806A65E0(void);
void fn_806A65F0(void);
void fn_806A6600(void);
void fn_806A66D0(void);
void fn_806A6740(void);
void fn_806A6760(void);
void fn_806A68F0(void);
void fn_806A6A80(void);
void fn_806A6A90(void);
void fn_806A6BA0(void);
void fn_806A6C90(void);
void fn_806A6CA0(void);
void fn_806A6E40(void);
void fn_806A7020(void);
void fn_806A70E0(void);
void fn_806A7110(void);
void fn_806A7130(void);
void fn_806A7150(void);
void fn_806A7250(void);
void fn_806A72B0(void);
void fn_806A72C0(void);
void fn_806A72E0(void);
void fn_806A7370(void);
void fn_806A7400(void);
void fn_806A7420(void);
void fn_806A74C0(void);
void fn_806A75C0(void);
void fn_806A75F0(void);
void fn_806A76A0(void);
void fn_806A76B0(void);
void fn_806A7A00(void);
void fn_806A7A50(void);
void fn_806A7B10(void);
void fn_806A7B50(void);
void fn_806A7C90(void);
void fn_806A7CC0(void);
void fn_806A7D40(void);
void fn_806A7FB0(void);
void fn_806A8030(void);
void fn_806A8160(void);
void fn_806A8200(void);
void fn_806A8270(void);
void fn_806A8280(void);
void fn_806A8290(void);

asm void pad_03_806A6568_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806A6570(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_806A6580(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_806A6590(void)
{
    nofralloc
    neg r0, r3
    or r0, r0, r3
    srawi r3, r0, 31
    blr
}

asm void fn_806A65A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_806A5EF0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_806A65A0_0000005C
    bl fn_806A65F0
lbl_fn_806A65A0_0000005C:
    mr r3, r31
    bl fn_806A6590
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A65E0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, lbl_80880458
    blr
}

asm void fn_806A65F0(void)
{
    nofralloc
    blr
}

asm void fn_806A6600(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_80880464
    cmpwi r0, 0x0
    bne lbl_fn_806A6600_000000D4
    lis r3, lbl_8085FA60@ha
    addi r3, r3, lbl_8085FA60@l
    bl fn_805F30F0
    li r0, 0x1
    stw r0, lbl_80880464
lbl_fn_806A6600_000000D4:
    lwz r0, lbl_80880464
    cmpwi r0, 0x0
    beq lbl_fn_806A6600_000000EC
    lis r3, lbl_8085FA60@ha
    addi r3, r3, lbl_8085FA60@l
    bl fn_805F3130
lbl_fn_806A6600_000000EC:
    lwz r0, lbl_80880460
    cmpwi r0, 0x0
    bne lbl_fn_806A6600_00000130
    mr r3, r30
    mr r4, r31
    bl fn_806A6760
    li r3, 0x0
    li r4, 0x0
    bl fn_806A5DC0
    li r3, 0x0
    li r4, 0x0
    bl fn_806A65A0
    bl fn_806A6A90
    li r3, 0x0
    bl fn_806A6A80
    li r0, 0x1
    stw r0, lbl_80880460
lbl_fn_806A6600_00000130:
    lwz r0, lbl_80880464
    cmpwi r0, 0x0
    beq lbl_fn_806A6600_00000148
    lis r3, lbl_8085FA60@ha
    addi r3, r3, lbl_8085FA60@l
    bl fn_805F3210
lbl_fn_806A6600_00000148:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A66D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_80880464
    cmpwi r0, 0x0
    beq lbl_fn_806A66D0_0000018C
    lis r3, lbl_8085FA60@ha
    addi r3, r3, lbl_8085FA60@l
    bl fn_805F3130
lbl_fn_806A66D0_0000018C:
    lwz r0, lbl_80880460
    cmpwi r0, 0x0
    beq lbl_fn_806A66D0_000001A4
    bl fn_806A68F0
    li r0, 0x0
    stw r0, lbl_80880460
lbl_fn_806A66D0_000001A4:
    lwz r0, lbl_80880464
    cmpwi r0, 0x0
    beq lbl_fn_806A66D0_000001BC
    lis r3, lbl_8085FA60@ha
    addi r3, r3, lbl_8085FA60@l
    bl fn_805F3210
lbl_fn_806A66D0_000001BC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A6740(void)
{
    nofralloc
    lwz r3, lbl_80880460
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_806A6760(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    srwi r29, r4, 14
    beq lbl_fn_806A6760_0000023C
    cmpwi r4, 0x0
    beq lbl_fn_806A6760_0000023C
    lwz r0, lbl_80880470
    cmpwi r0, 0x0
    bne lbl_fn_806A6760_0000023C
    li r5, 0x0
    bl fn_80619920
    stw r3, lbl_80880470
lbl_fn_806A6760_0000023C:
    cmplwi r29, 0x1a
    li r4, 0x1a
    bgt lbl_fn_806A6760_0000024C
    mr r4, r29
lbl_fn_806A6760_0000024C:
    lwz r0, lbl_80880478
    stw r4, lbl_80880468
    cmpwi r0, 0x0
    bne lbl_fn_806A6760_00000280
    lwz r3, lbl_80880470
    cmpwi r3, 0x0
    bne lbl_fn_806A6760_00000270
    li r3, 0x0
    b lbl_fn_806A6760_0000027C
lbl_fn_806A6760_00000270:
    mulli r4, r4, 0x140
    li r5, 0x20
    bl fn_80619A00
lbl_fn_806A6760_0000027C:
    stw r3, lbl_80880478
lbl_fn_806A6760_00000280:
    lwz r0, lbl_80880468
    cmpwi r0, 0x0
    beq lbl_fn_806A6760_0000029C
    lwz r29, lbl_80880478
    cmpwi r29, 0x0
    beq lbl_fn_806A6760_0000029C
    b lbl_fn_806A6760_000002A0
lbl_fn_806A6760_0000029C:
    li r29, 0x0
lbl_fn_806A6760_000002A0:
    mulli r0, r0, 0x140
    li r31, 0x0
    add r30, r29, r0
    b lbl_fn_806A6760_000002DC
lbl_fn_806A6760_000002B0:
    mr r3, r29
    li r4, 0x0
    li r5, 0x140
    bl fn_806A5CA0
    addic. r0, r29, 0x1c
    beq lbl_fn_806A6760_000002D8
    stw r31, 0x1c(r29)
    stw r31, 0x20(r29)
    stw r31, 0x24(r29)
    stw r31, 0x28(r29)
lbl_fn_806A6760_000002D8:
    addi r29, r29, 0x140
lbl_fn_806A6760_000002DC:
    cmplw r29, r30
    bne lbl_fn_806A6760_000002B0
    lwz r0, lbl_80880474
    lwz r30, lbl_80880468
    cmpwi r0, 0x0
    bne lbl_fn_806A6760_00000340
    lis r29, lbl_8085FA78@ha
    li r31, 0x0
    addi r29, r29, lbl_8085FA78@l
    b lbl_fn_806A6760_00000330
lbl_fn_806A6760_00000304:
    lwz r3, lbl_80880470
    cmpwi r3, 0x0
    bne lbl_fn_806A6760_00000318
    li r3, 0x0
    b lbl_fn_806A6760_00000324
lbl_fn_806A6760_00000318:
    li r4, 0xa0
    li r5, 0x20
    bl fn_80619A00
lbl_fn_806A6760_00000324:
    stw r3, 0x0(r29)
    addi r29, r29, 0x4
    addi r31, r31, 0x1
lbl_fn_806A6760_00000330:
    cmplw r31, r30
    blt lbl_fn_806A6760_00000304
    li r0, 0x1
    stw r0, lbl_80880474
lbl_fn_806A6760_00000340:
    bl fn_806A6BA0
    li r4, 0x0
    li r3, 0x2
    li r0, 0x8
    stw r4, lbl_8088046C
    stw r3, lbl_80880484
    stw r0, lbl_80880480
    bl fn_806A6C90
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A68F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r27, lbl_80880478
    cmpwi cr1, r27, 0x0
    beq cr1, lbl_fn_806A68F0_00000480
    lwz r0, lbl_80880468
    cmpwi r0, 0x0
    beq lbl_fn_806A68F0_000003BC
    beq cr1, lbl_fn_806A68F0_000003BC
    b lbl_fn_806A68F0_000003C0
lbl_fn_806A68F0_000003BC:
    li r27, 0x0
lbl_fn_806A68F0_000003C0:
    cmpwi r27, 0x0
    beq lbl_fn_806A68F0_00000464
    mulli r0, r0, 0x140
    li r31, 0x0
    add r30, r27, r0
    b lbl_fn_806A68F0_0000045C
lbl_fn_806A68F0_000003D8:
    cmpwi r27, 0x0
    beq lbl_fn_806A68F0_00000458
    addic. r29, r27, 0x1c
    lwz r28, 0x0(r29)
    beq lbl_fn_806A68F0_0000043C
    lwz r4, 0x8(r29)
    cmpwi r4, 0x0
    beq lbl_fn_806A68F0_00000408
    cmpwi r28, 0x0
    beq lbl_fn_806A68F0_00000408
    mr r3, r28
    bl fn_80619AB0
lbl_fn_806A68F0_00000408:
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    beq lbl_fn_806A68F0_00000424
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_806A68F0_00000424
    bl fn_80619AB0
lbl_fn_806A68F0_00000424:
    cmpwi r29, 0x0
    beq lbl_fn_806A68F0_0000043C
    stw r31, 0x0(r29)
    stw r31, 0x4(r29)
    stw r31, 0x8(r29)
    stw r31, 0xc(r29)
lbl_fn_806A68F0_0000043C:
    lwz r0, lbl_80880470
    cmplw r28, r0
    beq lbl_fn_806A68F0_00000458
    cmpwi r28, 0x0
    beq lbl_fn_806A68F0_00000458
    mr r3, r28
    bl fn_806199D0
lbl_fn_806A68F0_00000458:
    addi r27, r27, 0x140
lbl_fn_806A68F0_0000045C:
    cmplw r27, r30
    bne lbl_fn_806A68F0_000003D8
lbl_fn_806A68F0_00000464:
    lwz r3, lbl_80880470
    lwz r4, lbl_80880478
    cmpwi r3, 0x0
    beq lbl_fn_806A68F0_00000478
    bl fn_80619AB0
lbl_fn_806A68F0_00000478:
    li r0, 0x0
    stw r0, lbl_80880478
lbl_fn_806A68F0_00000480:
    lwz r0, lbl_80880474
    lwz r29, lbl_80880468
    cmpwi r0, 0x0
    beq lbl_fn_806A68F0_000004DC
    lis r28, lbl_8085FA78@ha
    li r30, 0x0
    addi r28, r28, lbl_8085FA78@l
    li r31, 0x0
    b lbl_fn_806A68F0_000004CC
lbl_fn_806A68F0_000004A4:
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_806A68F0_000004C4
    lwz r3, lbl_80880470
    cmpwi r3, 0x0
    beq lbl_fn_806A68F0_000004C0
    bl fn_80619AB0
lbl_fn_806A68F0_000004C0:
    stw r31, 0x0(r28)
lbl_fn_806A68F0_000004C4:
    addi r28, r28, 0x4
    addi r30, r30, 0x1
lbl_fn_806A68F0_000004CC:
    cmplw r30, r29
    blt lbl_fn_806A68F0_000004A4
    li r0, 0x0
    stw r0, lbl_80880474
lbl_fn_806A68F0_000004DC:
    lwz r3, lbl_80880470
    cmpwi r3, 0x0
    beq lbl_fn_806A68F0_000004F4
    bl fn_806199D0
    li r0, 0x0
    stw r0, lbl_80880470
lbl_fn_806A68F0_000004F4:
    li r0, 0x0
    stw r0, lbl_80880468
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A6A80(void)
{
    nofralloc
    mr r0, r3
    lwz r3, lbl_8088047C
    stw r0, lbl_8088047C
    blr
}

asm void fn_806A6A90(void)
{
    nofralloc
    lis r3, lbl_8085FAE0@ha
    li r0, 0x0
    sthu r0, lbl_8085FAE0@l(r3)
    stb r0, 0x10(r3)
    sth r0, 0x12(r3)
    stb r0, 0x22(r3)
    sth r0, 0x24(r3)
    stb r0, 0x34(r3)
    sth r0, 0x36(r3)
    stb r0, 0x46(r3)
    sth r0, 0x48(r3)
    stb r0, 0x58(r3)
    sth r0, 0x5a(r3)
    stb r0, 0x6a(r3)
    sth r0, 0x6c(r3)
    stb r0, 0x7c(r3)
    sth r0, 0x7e(r3)
    stb r0, 0x8e(r3)
    sth r0, 0x90(r3)
    stb r0, 0xa0(r3)
    sth r0, 0xa2(r3)
    stb r0, 0xb2(r3)
    sth r0, 0xb4(r3)
    stb r0, 0xc4(r3)
    sth r0, 0xc6(r3)
    stb r0, 0xd6(r3)
    sth r0, 0xd8(r3)
    stb r0, 0xe8(r3)
    sth r0, 0xea(r3)
    stb r0, 0xfa(r3)
    sth r0, 0xfc(r3)
    stb r0, 0x10c(r3)
    sth r0, 0x10e(r3)
    stb r0, 0x11e(r3)
    sth r0, 0x120(r3)
    stb r0, 0x130(r3)
    sth r0, 0x132(r3)
    stb r0, 0x142(r3)
    sth r0, 0x144(r3)
    stb r0, 0x154(r3)
    sth r0, 0x156(r3)
    stb r0, 0x166(r3)
    sth r0, 0x168(r3)
    stb r0, 0x178(r3)
    sth r0, 0x17a(r3)
    stb r0, 0x18a(r3)
    sth r0, 0x18c(r3)
    stb r0, 0x19c(r3)
    sth r0, 0x19e(r3)
    stb r0, 0x1ae(r3)
    sth r0, 0x1b0(r3)
    stb r0, 0x1c0(r3)
    sth r0, 0x1c2(r3)
    stb r0, 0x1d2(r3)
    sth r0, 0x1d4(r3)
    stb r0, 0x1e4(r3)
    sth r0, 0x1e6(r3)
    stb r0, 0x1f6(r3)
    sth r0, 0x1f8(r3)
    stb r0, 0x208(r3)
    sth r0, 0x20a(r3)
    stb r0, 0x21a(r3)
    sth r0, 0x21c(r3)
    stb r0, 0x22c(r3)
    blr
}

asm void fn_806A6BA0(void)
{
    nofralloc
    lis r4, lbl_8085FD10@ha
    li r0, 0x3
    addi r4, r4, lbl_8085FD10@l
    li r3, 0x0
    mtctr r0
lbl_fn_806A6BA0_0000064C:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    stw r3, 0x20(r4)
    stw r3, 0x24(r4)
    stw r3, 0x28(r4)
    stw r3, 0x2c(r4)
    stw r3, 0x30(r4)
    stw r3, 0x34(r4)
    stw r3, 0x38(r4)
    stw r3, 0x3c(r4)
    stw r3, 0x40(r4)
    stw r3, 0x44(r4)
    stw r3, 0x48(r4)
    stw r3, 0x4c(r4)
    stw r3, 0x50(r4)
    stw r3, 0x54(r4)
    stw r3, 0x58(r4)
    stw r3, 0x5c(r4)
    stw r3, 0x60(r4)
    stw r3, 0x64(r4)
    stw r3, 0x68(r4)
    stw r3, 0x6c(r4)
    stw r3, 0x70(r4)
    stw r3, 0x74(r4)
    stw r3, 0x78(r4)
    stw r3, 0x7c(r4)
    stw r3, 0x80(r4)
    stw r3, 0x84(r4)
    stw r3, 0x88(r4)
    stw r3, 0x8c(r4)
    stw r3, 0x90(r4)
    stw r3, 0x94(r4)
    stw r3, 0x98(r4)
    stw r3, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_806A6BA0_0000064C
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r0, 0x4(r4)
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    stw r0, 0x10(r4)
    stw r0, 0x14(r4)
    stw r0, 0x18(r4)
    stw r0, 0x1c(r4)
    stw r0, 0x20(r4)
    stw r0, 0x24(r4)
    blr
}

asm void fn_806A6C90(void)
{
    nofralloc
    blr
}

asm void fn_806A6CA0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    lis r7, 0xaaab
    cmpwi r5, 0x0
    subi r28, r7, 0x5555
    mr r23, r5
    mulhwu r7, r28, r4
    srwi r0, r7, 1
    extlwi r7, r7, 30, 1
    mulli r0, r0, 0x3
    subf r5, r0, r4
    neg r0, r5
    or r0, r0, r5
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 29, 29
    add r0, r7, r0
    bne lbl_fn_806A6CA0_00000790
    mr r3, r0
    b lbl_fn_806A6CA0_000008B4
lbl_fn_806A6CA0_00000790:
    cmplw r6, r0
    bge lbl_fn_806A6CA0_000007A0
    li r3, -0x1
    b lbl_fn_806A6CA0_000008B4
lbl_fn_806A6CA0_000007A0:
    mr r26, r3
    mr r24, r23
    add r25, r3, r4
    lis r30, lbl_807BCD3C@ha
    li r31, 0x2a
    b lbl_fn_806A6CA0_000008A8
lbl_fn_806A6CA0_000007B8:
    subf r5, r26, r25
    li r29, 0x3
    slwi r3, r5, 3
    mulhwu r0, r28, r3
    cmpwi r5, 0x3
    srwi r4, r0, 2
    mulli r0, r4, 0x6
    subf r3, r0, r3
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    add r27, r4, r0
    bge lbl_fn_806A6CA0_000007F0
    mr r29, r5
lbl_fn_806A6CA0_000007F0:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x3
    bl memset
    mr r4, r26
    mr r5, r29
    addi r3, r1, 0x8
    bl fn_806A9CA0
    lbz r0, 0x8(r1)
    cmplwi r27, 0x2
    lwz r3, lbl_807BCD3C@l(r30)
    srawi r0, r0, 2
    lbzx r0, r3, r0
    stb r0, 0x0(r24)
    blt lbl_fn_806A6CA0_0000084C
    lbz r0, 0x9(r1)
    lbz r3, 0x8(r1)
    srawi r0, r0, 4
    lwz r4, lbl_807BCD3C@l(r30)
    rlwimi r0, r3, 4, 26, 27
    lbzx r0, r4, r0
    stb r0, 0x1(r24)
    b lbl_fn_806A6CA0_00000850
lbl_fn_806A6CA0_0000084C:
    stb r31, 0x1(r24)
lbl_fn_806A6CA0_00000850:
    cmplwi r27, 0x3
    blt lbl_fn_806A6CA0_00000878
    lbz r0, 0xa(r1)
    lbz r3, 0x9(r1)
    srawi r0, r0, 6
    lwz r4, lbl_807BCD3C@l(r30)
    rlwimi r0, r3, 2, 26, 29
    lbzx r0, r4, r0
    stb r0, 0x2(r24)
    b lbl_fn_806A6CA0_0000087C
lbl_fn_806A6CA0_00000878:
    stb r31, 0x2(r24)
lbl_fn_806A6CA0_0000087C:
    cmplwi r27, 0x4
    blt lbl_fn_806A6CA0_0000089C
    lbz r0, 0xa(r1)
    lwz r3, lbl_807BCD3C@l(r30)
    clrlwi r0, r0, 26
    lbzx r0, r3, r0
    stb r0, 0x3(r24)
    b lbl_fn_806A6CA0_000008A0
lbl_fn_806A6CA0_0000089C:
    stb r31, 0x3(r24)
lbl_fn_806A6CA0_000008A0:
    add r26, r26, r29
    addi r24, r24, 0x4
lbl_fn_806A6CA0_000008A8:
    cmplw r26, r25
    bne lbl_fn_806A6CA0_000007B8
    subf r3, r23, r24
lbl_fn_806A6CA0_000008B4:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_806A6E40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    clrlwi. r0, r4, 30
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_fn_806A6E40_000008F8
    li r3, -0x1
    b lbl_fn_806A6E40_00000A9C
lbl_fn_806A6E40_000008F8:
    mr r8, r3
    li r7, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806A6E40_00000928
    nop
lbl_fn_806A6E40_00000910:
    lbz r0, 0x0(r8)
    cmpwi r0, 0x2a
    beq lbl_fn_806A6E40_00000920
    addi r7, r7, 0x6
lbl_fn_806A6E40_00000920:
    addi r8, r8, 0x1
    bdnz lbl_fn_806A6E40_00000910
lbl_fn_806A6E40_00000928:
    cmpwi r5, 0x0
    srawi r0, r7, 3
    addze r7, r0
    bne lbl_fn_806A6E40_00000940
    mr r3, r7
    b lbl_fn_806A6E40_00000A9C
lbl_fn_806A6E40_00000940:
    cmplw r6, r7
    bge lbl_fn_806A6E40_00000950
    li r3, -0x1
    b lbl_fn_806A6E40_00000A9C
lbl_fn_806A6E40_00000950:
    cmpwi r4, 0x0
    bne lbl_fn_806A6E40_00000960
    li r3, 0x0
    b lbl_fn_806A6E40_00000A9C
lbl_fn_806A6E40_00000960:
    mr r4, r5
    addi r10, r1, 0x8
    li r11, 0x0
    li r12, 0x3f
    li r31, 0x3e
    li r0, 0x4
lbl_fn_806A6E40_00000978:
    li r9, 0x0
    mtctr r0
lbl_fn_806A6E40_00000980:
    lbzx r8, r3, r9
    extsb r6, r8
    cmpwi r6, 0x3a
    bge lbl_fn_806A6E40_000009B4
    cmpwi r6, 0x2e
    beq lbl_fn_806A6E40_00000A00
    bge lbl_fn_806A6E40_000009A8
    cmpwi r6, 0x2d
    bge lbl_fn_806A6E40_00000A08
    b lbl_fn_806A6E40_00000A10
lbl_fn_806A6E40_000009A8:
    cmpwi r6, 0x30
    bge lbl_fn_806A6E40_000009F4
    b lbl_fn_806A6E40_00000A10
lbl_fn_806A6E40_000009B4:
    cmpwi r6, 0x61
    bge lbl_fn_806A6E40_000009D0
    cmpwi r6, 0x5b
    bge lbl_fn_806A6E40_00000A10
    cmpwi r6, 0x41
    bge lbl_fn_806A6E40_000009DC
    b lbl_fn_806A6E40_00000A10
lbl_fn_806A6E40_000009D0:
    cmpwi r6, 0x7b
    bge lbl_fn_806A6E40_00000A10
    b lbl_fn_806A6E40_000009E8
lbl_fn_806A6E40_000009DC:
    subi r6, r8, 0x41
    stbx r6, r10, r9
    b lbl_fn_806A6E40_00000A14
lbl_fn_806A6E40_000009E8:
    subi r6, r8, 0x47
    stbx r6, r10, r9
    b lbl_fn_806A6E40_00000A14
lbl_fn_806A6E40_000009F4:
    addi r6, r8, 0x4
    stbx r6, r10, r9
    b lbl_fn_806A6E40_00000A14
lbl_fn_806A6E40_00000A00:
    stbx r31, r10, r9
    b lbl_fn_806A6E40_00000A14
lbl_fn_806A6E40_00000A08:
    stbx r12, r10, r9
    b lbl_fn_806A6E40_00000A14
lbl_fn_806A6E40_00000A10:
    stbx r11, r10, r9
lbl_fn_806A6E40_00000A14:
    addi r9, r9, 0x1
    bdnz lbl_fn_806A6E40_00000980
    lbz r8, 0x9(r1)
    addi r6, r4, 0x1
    lbz r9, 0x8(r1)
    subf r29, r5, r6
    extsb r8, r8
    addi r3, r3, 0x4
    extsb r6, r9
    cmpw r29, r7
    slwi r9, r6, 2
    srawi r6, r8, 4
    or r6, r9, r6
    stb r6, 0x0(r4)
    bge lbl_fn_806A6E40_00000A98
    lbz r30, 0xa(r1)
    addi r6, r4, 0x2
    subf r29, r5, r6
    slwi r9, r8, 4
    extsb r8, r30
    srawi r6, r8, 2
    cmpw r29, r7
    or r6, r9, r6
    stb r6, 0x1(r4)
    bge lbl_fn_806A6E40_00000A98
    lbz r6, 0xb(r1)
    slwi r8, r8, 6
    or r6, r8, r6
    stb r6, 0x2(r4)
    addi r4, r4, 0x3
    subf r29, r5, r4
    cmpw r29, r7
    blt lbl_fn_806A6E40_00000978
lbl_fn_806A6E40_00000A98:
    mr r3, r29
lbl_fn_806A6E40_00000A9C:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_806A7020(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_806A7020_00000ACC
    lis r5, lbl_8085FF1C@ha
    lwz r0, lbl_8085FF1C@l(r5)
    stw r0, 0x0(r3)
lbl_fn_806A7020_00000ACC:
    cmpwi r4, 0x0
    beq lbl_fn_806A7020_00000B64
    lis r3, lbl_8085FF18@ha
    lwz r0, lbl_8085FF18@l(r3)
    cmplwi r0, 0x19
    bgt lbl_fn_806A7020_00000B5C
    lis r3, jumptable_807BCD40@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BCD40@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x6
    stw r0, 0x0(r4)
    b lbl_fn_806A7020_00000B64
    li r0, 0x3
    stw r0, 0x0(r4)
    b lbl_fn_806A7020_00000B64
    li r0, 0x4
    stw r0, 0x0(r4)
    b lbl_fn_806A7020_00000B64
    li r0, 0x5
    stw r0, 0x0(r4)
    b lbl_fn_806A7020_00000B64
    li r0, 0x8
    stw r0, 0x0(r4)
    b lbl_fn_806A7020_00000B64
    li r0, 0x1
    stw r0, 0x0(r4)
    b lbl_fn_806A7020_00000B64
    li r0, 0x2
    stw r0, 0x0(r4)
    b lbl_fn_806A7020_00000B64
    li r0, 0x7
    stw r0, 0x0(r4)
    b lbl_fn_806A7020_00000B64
lbl_fn_806A7020_00000B5C:
    li r0, 0x0
    stw r0, 0x0(r4)
lbl_fn_806A7020_00000B64:
    lis r3, lbl_8085FF18@ha
    lwz r3, lbl_8085FF18@l(r3)
    blr
}

asm void fn_806A70E0(void)
{
    nofralloc
    lis r4, lbl_8085FF18@ha
    lwz r0, lbl_8085FF18@l(r4)
    cmpwi r0, 0x9
    beqlr
    lis r3, lbl_8085FF1C@ha
    li r0, 0x0
    stw r0, lbl_8085FF18@l(r4)
    stw r0, lbl_8085FF1C@l(r3)
    blr
}

asm void fn_806A7110(void)
{
    nofralloc
    lis r3, lbl_8085FF18@ha
    lwz r3, lbl_8085FF18@l(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_806A7130(void)
{
    nofralloc
    lis r6, lbl_8085FF18@ha
    lwz r0, lbl_8085FF18@l(r6)
    cmpwi r0, 0x9
    beqlr
    lis r5, lbl_8085FF1C@ha
    stw r3, lbl_8085FF18@l(r6)
    stw r4, lbl_8085FF1C@l(r5)
    blr
}

asm void fn_806A7150(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r31, lbl_807BCDA8@ha
    mr r26, r3
    addi r31, r31, lbl_807BCDA8@l
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    addi r3, r31, 0x0
    bl OSRegisterVersion
    mr r3, r29
    mr r4, r30
    bl fn_806A72C0
    mr r3, r26
    bl fn_806D08E0
    cmpwi r3, 0x0
    bne lbl_fn_806A7150_00000C54
    addi r4, r31, 0x48
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, -0x1
    b lbl_fn_806A7150_00000CD0
lbl_fn_806A7150_00000C54:
    lis r7, lbl_8085FF20@ha
    lis r3, fn_806A7420@ha
    lis r4, fn_806A75C0@ha
    lis r5, fn_806A74C0@ha
    lis r6, fn_806A75F0@ha
    stw r28, lbl_8085FF20@l(r7)
    addi r3, r3, fn_806A7420@l
    addi r4, r4, fn_806A75C0@l
    addi r5, r5, fn_806A74C0@l
    addi r6, r6, fn_806A75F0@l
    bl fn_806D7A70
    lis r3, lbl_80862150@ha
    mr r4, r27
    addi r3, r3, lbl_80862150@l
    bl strcpy
    cmpwi r26, 0x0
    bne lbl_fn_806A7150_00000CAC
    lis r3, lbl_807C5B70@ha
    addi r4, r31, 0x70
    addi r3, r3, lbl_807C5B70@l
    bl strcpy
    b lbl_fn_806A7150_00000CBC
lbl_fn_806A7150_00000CAC:
    lis r3, lbl_807C5B70@ha
    addi r4, r31, 0x84
    addi r3, r3, lbl_807C5B70@l
    bl strcpy
lbl_fn_806A7150_00000CBC:
    lis r3, lbl_8085FF24@ha
    li r0, 0x1
    stw r0, lbl_8085FF24@l(r3)
    bl fn_806AA690
    li r3, 0x0
lbl_fn_806A7150_00000CD0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A7250(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, fn_806A7420@ha
    lis r4, fn_806A75C0@ha
    lis r5, fn_806A74C0@ha
    lis r6, fn_806A75F0@ha
    stw r0, 0x14(r1)
    addi r3, r3, fn_806A7420@l
    addi r4, r4, fn_806A75C0@l
    addi r5, r5, fn_806A74C0@l
    addi r6, r6, fn_806A75F0@l
    bl fn_806D7A70
    lis r3, lbl_807BCE4C@ha
    addi r3, r3, lbl_807BCE4C@l
    bl fn_806D8060
    bl fn_806CF030
    lis r3, lbl_8085FF24@ha
    li r0, 0x0
    stw r0, lbl_8085FF24@l(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A72B0(void)
{
    nofralloc
    lis r3, lbl_8085FF20@ha
    lwz r3, lbl_8085FF20@l(r3)
    blr
}

asm void fn_806A72C0(void)
{
    nofralloc
    lis r6, lbl_8085FF28@ha
    lis r5, lbl_8085FF2C@ha
    stw r3, lbl_8085FF28@l(r6)
    stw r4, lbl_8085FF2C@l(r5)
    blr
}

asm void fn_806A72E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8085FF28@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r12, lbl_8085FF28@l(r5)
    li r5, 0x20
    mtctr r12
    addi r4, r4, 0x20
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806A72E0_00000DD4
    lis r4, lbl_807BCE58@ha
    mr r5, r31
    addi r4, r4, lbl_807BCE58@l
    addi r6, r31, 0x20
    li r3, 0x8
    li r7, 0x20
    crclr 6
    bl fn_806A76B0
    li r5, 0x0
    b lbl_fn_806A72E0_00000DE8
lbl_fn_806A72E0_00000DD4:
    lis r4, 0x4457
    addi r5, r3, 0x20
    addi r0, r4, 0x434d
    stw r0, 0x0(r3)
    stw r31, 0x4(r3)
lbl_fn_806A72E0_00000DE8:
    lwz r31, 0xc(r1)
    mr r3, r5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A7370(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8085FF28@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r12, lbl_8085FF28@l(r6)
    mtctr r12
    addi r4, r4, 0x20
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806A7370_00000E68
    lis r4, lbl_807BCE58@ha
    mr r5, r30
    mr r7, r31
    addi r6, r30, 0x20
    addi r4, r4, lbl_807BCE58@l
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806A7370_00000E7C
lbl_fn_806A7370_00000E68:
    lis r4, 0x4457
    addi r0, r4, 0x434d
    stw r0, 0x0(r3)
    stw r30, 0x4(r3)
    addi r3, r3, 0x20
lbl_fn_806A7370_00000E7C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A7400(void)
{
    nofralloc
    cmpwi r4, 0x0
    beqlr
    lis r6, lbl_8085FF2C@ha
    lwz r12, lbl_8085FF2C@l(r6)
    mtctr r12
    subi r4, r4, 0x20
    bctr
    blr
}

asm void fn_806A7420(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8085FF28@ha
    li r5, 0x20
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x20
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x9
    lwz r12, lbl_8085FF28@l(r4)
    mr r4, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806A7420_00000F20
    lis r4, lbl_807BCE58@ha
    mr r5, r30
    mr r6, r31
    li r3, 0x8
    addi r4, r4, lbl_807BCE58@l
    li r7, 0x20
    crclr 6
    bl fn_806A76B0
    li r5, 0x0
    b lbl_fn_806A7420_00000F34
lbl_fn_806A7420_00000F20:
    lis r4, 0x4457
    addi r5, r3, 0x20
    addi r0, r4, 0x434d
    stw r0, 0x0(r3)
    stw r30, 0x4(r3)
lbl_fn_806A7420_00000F34:
    lwz r31, 0xc(r1)
    mr r3, r5
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A74C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_8085FF28@ha
    mr r27, r3
    lwz r12, lbl_8085FF28@l(r5)
    addi r30, r4, 0x20
    mr r28, r4
    li r3, 0x9
    mr r4, r30
    li r5, 0x20
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806A74C0_00000FC4
    lis r4, lbl_807BCE58@ha
    mr r5, r28
    mr r6, r30
    li r3, 0x8
    addi r4, r4, lbl_807BCE58@l
    li r7, 0x20
    crclr 6
    bl fn_806A76B0
    li r31, 0x0
    b lbl_fn_806A74C0_00000FD8
lbl_fn_806A74C0_00000FC4:
    lis r4, 0x4457
    addi r31, r3, 0x20
    addi r0, r4, 0x434d
    stw r0, 0x0(r3)
    stw r28, 0x4(r3)
lbl_fn_806A74C0_00000FD8:
    cmpwi r31, 0x0
    bne lbl_fn_806A74C0_00000FE8
    li r31, 0x0
    b lbl_fn_806A74C0_00001038
lbl_fn_806A74C0_00000FE8:
    cmpwi r27, 0x0
    beq lbl_fn_806A74C0_00001038
    lwz r30, -0x1c(r27)
    subi r29, r27, 0x20
    mr r3, r31
    mr r4, r27
    cmplw r30, r28
    mr r5, r30
    ble lbl_fn_806A74C0_00001010
    mr r5, r28
lbl_fn_806A74C0_00001010:
    bl fn_806A9CA0
    cmpwi r27, 0x0
    beq lbl_fn_806A74C0_00001038
    lis r3, lbl_8085FF2C@ha
    mr r4, r29
    lwz r12, lbl_8085FF2C@l(r3)
    mr r5, r30
    li r3, 0x9
    mtctr r12
    bctrl
lbl_fn_806A74C0_00001038:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A75C0(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lis r5, lbl_8085FF2C@ha
    subi r4, r3, 0x20
    lwz r12, lbl_8085FF2C@l(r5)
    li r3, 0x9
    li r5, 0x0
    mtctr r12
    bctr
    blr
}

asm void fn_806A75F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8085FF28@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r4, 0x20
    stw r30, 0x18(r1)
    mr r30, r4
    mr r4, r31
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x9
    lwz r12, lbl_8085FF28@l(r5)
    mr r5, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_806A75F0_000010F8
    lis r4, lbl_807BCE58@ha
    mr r5, r30
    mr r6, r31
    mr r7, r29
    addi r4, r4, lbl_807BCE58@l
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r5, 0x0
    b lbl_fn_806A75F0_0000110C
lbl_fn_806A75F0_000010F8:
    lis r4, 0x4457
    addi r5, r3, 0x20
    addi r0, r4, 0x434d
    stw r0, 0x0(r3)
    stw r30, 0x4(r3)
lbl_fn_806A75F0_0000110C:
    lwz r31, 0x1c(r1)
    mr r3, r5
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A76A0(void)
{
    nofralloc
    lis r4, lbl_8085FF30@ha
    stw r3, lbl_8085FF30@l(r4)
    blr
}

asm void fn_806A76B0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r4
    bne cr1, lbl_fn_806A76B0_00001180
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_806A76B0_00001180:
    lis r11, lbl_8085FF30@ha
    lis r12, lbl_807BCEB0@ha
    lwz r0, lbl_8085FF30@l(r11)
    addi r12, r12, lbl_807BCEB0@l
    stw r3, 0x8(r1)
    and. r0, r3, r0
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    beq lbl_fn_806A76B0_00001480
    cmpwi r3, 0x400
    beq lbl_fn_806A76B0_00001390
    bge lbl_fn_806A76B0_00001250
    cmpwi r3, 0x20
    beq lbl_fn_806A76B0_00001340
    bge lbl_fn_806A76B0_00001220
    cmpwi r3, 0x4
    beq lbl_fn_806A76B0_00001310
    bge lbl_fn_806A76B0_00001208
    cmpwi r3, 0x1
    beq lbl_fn_806A76B0_000012F0
    bge lbl_fn_806A76B0_000011FC
    lis r4, 0x8000
    addi r0, r4, 0x1
    cmpw r3, r0
    bge lbl_fn_806A76B0_00001450
    b lbl_fn_806A76B0_00001440
lbl_fn_806A76B0_000011FC:
    cmpwi r3, 0x3
    bge lbl_fn_806A76B0_00001450
    b lbl_fn_806A76B0_00001300
lbl_fn_806A76B0_00001208:
    cmpwi r3, 0x10
    beq lbl_fn_806A76B0_00001330
    bge lbl_fn_806A76B0_00001450
    cmpwi r3, 0x8
    beq lbl_fn_806A76B0_00001320
    b lbl_fn_806A76B0_00001450
lbl_fn_806A76B0_00001220:
    cmpwi r3, 0x100
    beq lbl_fn_806A76B0_00001370
    bge lbl_fn_806A76B0_00001244
    cmpwi r3, 0x80
    beq lbl_fn_806A76B0_00001360
    bge lbl_fn_806A76B0_00001450
    cmpwi r3, 0x40
    beq lbl_fn_806A76B0_00001350
    b lbl_fn_806A76B0_00001450
lbl_fn_806A76B0_00001244:
    cmpwi r3, 0x200
    beq lbl_fn_806A76B0_00001380
    b lbl_fn_806A76B0_00001450
lbl_fn_806A76B0_00001250:
    lis r0, 0x200
    cmpw r3, r0
    beq lbl_fn_806A76B0_000013F0
    bge lbl_fn_806A76B0_000012B0
    lis r0, 0x2
    cmpw r3, r0
    beq lbl_fn_806A76B0_000013C0
    bge lbl_fn_806A76B0_00001290
    lis r4, 0x1
    cmpw r3, r4
    beq lbl_fn_806A76B0_000013B0
    bge lbl_fn_806A76B0_00001450
    addi r0, r4, -0x8000
    cmpw r3, r0
    beq lbl_fn_806A76B0_000013A0
    b lbl_fn_806A76B0_00001450
lbl_fn_806A76B0_00001290:
    lis r0, 0x100
    cmpw r3, r0
    beq lbl_fn_806A76B0_000013E0
    bge lbl_fn_806A76B0_00001450
    lis r0, 0x4
    cmpw r3, r0
    beq lbl_fn_806A76B0_000013D0
    b lbl_fn_806A76B0_00001450
lbl_fn_806A76B0_000012B0:
    lis r0, 0x1000
    cmpw r3, r0
    beq lbl_fn_806A76B0_00001420
    bge lbl_fn_806A76B0_000012E0
    lis r0, 0x800
    cmpw r3, r0
    beq lbl_fn_806A76B0_00001410
    bge lbl_fn_806A76B0_00001450
    lis r0, 0x400
    cmpw r3, r0
    beq lbl_fn_806A76B0_00001400
    b lbl_fn_806A76B0_00001450
lbl_fn_806A76B0_000012E0:
    lis r0, 0x2000
    cmpw r3, r0
    beq lbl_fn_806A76B0_00001430
    b lbl_fn_806A76B0_00001450
lbl_fn_806A76B0_000012F0:
    addi r3, r12, 0x0
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001300:
    addi r3, r12, 0x10
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001310:
    addi r3, r12, 0x20
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001320:
    addi r3, r12, 0x30
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001330:
    addi r3, r12, 0x40
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001340:
    addi r3, r12, 0x50
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001350:
    addi r3, r12, 0x60
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001360:
    addi r3, r12, 0x70
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001370:
    addi r3, r12, 0x80
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001380:
    addi r3, r12, 0x90
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001390:
    addi r3, r12, 0xa0
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_000013A0:
    addi r3, r12, 0xb0
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_000013B0:
    addi r3, r12, 0xc0
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_000013C0:
    addi r3, r12, 0xd0
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_000013D0:
    addi r3, r12, 0xe0
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_000013E0:
    addi r3, r12, 0xf4
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_000013F0:
    addi r3, r12, 0x104
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001400:
    addi r3, r12, 0x114
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001410:
    addi r3, r12, 0x124
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001420:
    addi r3, r12, 0x134
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001430:
    addi r3, r12, 0x144
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001440:
    addi r3, r12, 0x15c
    crclr 6
    bl OSReport
    b lbl_fn_806A76B0_0000145C
lbl_fn_806A76B0_00001450:
    addi r3, r12, 0x16c
    crclr 6
    bl OSReport
lbl_fn_806A76B0_0000145C:
    addi r5, r1, 0x88
    addi r0, r1, 0x8
    lis r3, 0x200
    stw r3, 0x68(r1)
    addi r4, r1, 0x68
    stw r5, 0x6c(r1)
    mr r3, r31
    stw r0, 0x70(r1)
    bl fn_805EE150
lbl_fn_806A76B0_00001480:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806A7A00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807BD030@ha
    li r3, 0x4
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807BD030@l
    crclr 6
    bl fn_806A76B0
    bl fn_806F3EE0
    lis r5, lbl_8085FF3C@ha
    li r3, 0x1
    lwz r4, lbl_8085FF3C@l(r5)
    addi r0, r4, 0x1
    stw r0, lbl_8085FF3C@l(r5)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A7A50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807BD040@ha
    li r3, 0x4
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807BD040@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    crclr 6
    bl fn_806A76B0
    lis r31, lbl_8085FF3C@ha
    lwz r0, lbl_8085FF3C@l(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_806A7A50_00001528
    li r3, 0x1
    b lbl_fn_806A7A50_00001590
lbl_fn_806A7A50_00001528:
    bl fn_806F3F40
    lwz r0, lbl_8085FF3C@l(r31)
    subic. r0, r0, 0x1
    stw r0, lbl_8085FF3C@l(r31)
    bne lbl_fn_806A7A50_0000158C
    lis r3, lbl_8085FF38@ha
    lwz r30, lbl_8085FF38@l(r3)
    b lbl_fn_806A7A50_00001578
lbl_fn_806A7A50_00001548:
    mr r31, r30
    lwz r30, 0x1c(r30)
    lwz r4, 0x14(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806A7A50_00001568
    li r3, 0x6
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806A7A50_00001568:
    mr r4, r31
    li r3, 0x6
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806A7A50_00001578:
    cmpwi r30, 0x0
    bne lbl_fn_806A7A50_00001548
    lis r3, lbl_8085FF38@ha
    li r0, 0x0
    stw r0, lbl_8085FF38@l(r3)
lbl_fn_806A7A50_0000158C:
    li r3, 0x1
lbl_fn_806A7A50_00001590:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A7B10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806A7B10_000015C8
    li r3, 0x0
    b lbl_fn_806A7B10_000015D0
lbl_fn_806A7B10_000015C8:
    bl fn_806F41E0
    li r3, 0x1
lbl_fn_806A7B10_000015D0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A7B50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r4
    lis r4, lbl_807BD054@ha
    mr r27, r5
    lwz r30, 0x4(r7)
    lwz r29, 0x10(r7)
    mr r28, r6
    mr r31, r7
    mr r5, r26
    addi r4, r4, lbl_807BD054@l
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    cmpwi r30, 0x0
    beq lbl_fn_806A7B50_000016AC
    cmpwi r26, 0x0
    bne lbl_fn_806A7B50_0000165C
    mr r12, r30
    mr r3, r27
    mr r4, r28
    mr r5, r26
    lwz r6, 0x0(r31)
    mtctr r12
    bctrl
    b lbl_fn_806A7B50_000016C0
lbl_fn_806A7B50_0000165C:
    cmpwi r26, 0x12
    bne lbl_fn_806A7B50_00001684
    mr r12, r30
    mr r5, r26
    lwz r6, 0x0(r31)
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806A7B50_000016C0
lbl_fn_806A7B50_00001684:
    mr r3, r26
    bl fn_806A8030
    mr r12, r30
    mr r5, r26
    lwz r6, 0x0(r31)
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806A7B50_000016C0
lbl_fn_806A7B50_000016AC:
    lis r4, lbl_807BD078@ha
    li r3, 0x4
    addi r4, r4, lbl_807BD078@l
    crclr 6
    bl fn_806A76B0
lbl_fn_806A7B50_000016C0:
    cmpwi r26, 0x0
    bne lbl_fn_806A7B50_000016D0
    cmpwi r29, 0x1
    bne lbl_fn_806A7B50_000016F8
lbl_fn_806A7B50_000016D0:
    cmpwi r31, 0x0
    beq lbl_fn_806A7B50_000016F4
    lwz r4, 0x14(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806A7B50_000016F4
    li r3, 0x6
    li r5, 0x0
    bl fn_806A7400
    b lbl_fn_806A7B50_000016F8
lbl_fn_806A7B50_000016F4:
    li r29, 0x1
lbl_fn_806A7B50_000016F8:
    mr r3, r31
    bl fn_806A8160
    neg r0, r29
    addi r11, r1, 0x20
    or r0, r0, r29
    srwi r3, r0, 31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A7C90(void)
{
    nofralloc
    lwz r12, 0x8(r9)
    cmpwi r12, 0x0
    beqlr
    mr r3, r4
    mr r4, r5
    mr r5, r6
    mr r6, r7
    mr r7, r8
    lwz r8, 0x0(r9)
    mtctr r12
    bctr
    blr
}

asm void fn_806A7CC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r9, lbl_807BD0A0@ha
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    addi r4, r9, lbl_807BD0A0@l
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r7, r29
    mr r8, r30
    mr r9, r31
    li r6, 0x0
    bl fn_806A7D40
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A7D40(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_24
    lis r10, lbl_807BD0A0@ha
    mr r27, r3
    mr r28, r4
    mr r26, r5
    mr r29, r6
    mr r24, r7
    mr r30, r8
    mr r31, r9
    addi r4, r10, lbl_807BD0A0@l
    li r25, 0x0
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806A7D40_00001834
    li r3, -0x1
    b lbl_fn_806A7D40_00001A24
lbl_fn_806A7D40_00001834:
    stw r31, 0x10(r1)
    li r3, 0x6
    li r4, 0x20
    stw r30, 0x14(r1)
    stw r24, 0x18(r1)
    stw r26, 0x20(r1)
    bl fn_806A72E0
    cmpwi r3, 0x0
    bne lbl_fn_806A7D40_00001860
    li r26, 0x0
    b lbl_fn_806A7D40_000018BC
lbl_fn_806A7D40_00001860:
    mr r4, r31
    stw r4, 0x0(r3)
    mr r5, r30
    li r0, 0x0
    stw r5, 0x4(r3)
    mr r5, r24
    lis r4, lbl_8085FF38@ha
    stw r5, 0x8(r3)
    lwz r5, 0x1c(r1)
    stw r5, 0xc(r3)
    mr r5, r26
    stw r5, 0x10(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x14(r3)
    lwz r0, lbl_8085FF38@l(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806A7D40_000018B0
    stw r3, lbl_8085FF38@l(r4)
    mr r26, r3
    b lbl_fn_806A7D40_000018BC
lbl_fn_806A7D40_000018B0:
    stw r0, 0x1c(r3)
    mr r26, r3
    stw r3, lbl_8085FF38@l(r4)
lbl_fn_806A7D40_000018BC:
    cmpwi r26, 0x0
    bne lbl_fn_806A7D40_00001904
    li r3, -0x5
    bl fn_806A8030
    lis r4, lbl_807BD08C@ha
    li r3, 0x4
    addi r4, r4, lbl_807BD08C@l
    crclr 6
    bl fn_806A76B0
    mr r12, r30
    mr r6, r31
    li r3, 0x0
    li r4, 0x0
    li r5, -0x5
    mtctr r12
    bctrl
    li r3, -0x5
    b lbl_fn_806A7D40_00001A24
lbl_fn_806A7D40_00001904:
    cmpwi r28, 0x0
    ble lbl_fn_806A7D40_00001970
    mr r4, r28
    li r3, 0x6
    bl fn_806A72E0
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_806A7D40_0000196C
    li r3, -0x5
    bl fn_806A8030
    lis r4, lbl_807BD08C@ha
    li r3, 0x4
    addi r4, r4, lbl_807BD08C@l
    crclr 6
    bl fn_806A76B0
    mr r12, r30
    mr r6, r31
    li r3, 0x0
    li r4, 0x0
    li r5, -0x5
    mtctr r12
    bctrl
    mr r3, r26
    bl fn_806A8160
    li r3, -0x5
    b lbl_fn_806A7D40_00001A24
lbl_fn_806A7D40_0000196C:
    stw r3, 0x14(r26)
lbl_fn_806A7D40_00001970:
    cmpwi r24, 0x0
    lis r10, fn_806A7C90@ha
    addi r10, r10, fn_806A7C90@l
    bne lbl_fn_806A7D40_00001984
    li r10, 0x0
lbl_fn_806A7D40_00001984:
    lis r3, fn_806A7B50@ha
    cmpwi r29, 0x0
    addi r3, r3, fn_806A7B50@l
    stw r3, 0x8(r1)
    mr r3, r27
    mr r5, r25
    stw r26, 0xc(r1)
    mr r6, r28
    li r4, 0x0
    bne lbl_fn_806A7D40_000019B4
    li r7, 0x0
    b lbl_fn_806A7D40_000019B8
lbl_fn_806A7D40_000019B4:
    lwz r7, 0x0(r29)
lbl_fn_806A7D40_000019B8:
    li r8, 0x0
    li r9, 0x0
    bl fn_806F3FB0
    cmpwi r3, 0x0
    mr r25, r3
    bge lbl_fn_806A7D40_00001A10
    bl fn_806A8030
    mr r12, r30
    mr r5, r25
    mr r6, r31
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
    lwz r4, 0x14(r26)
    cmpwi r4, 0x0
    beq lbl_fn_806A7D40_00001A08
    li r3, 0x6
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806A7D40_00001A08:
    mr r3, r26
    bl fn_806A8160
lbl_fn_806A7D40_00001A10:
    stw r25, 0x18(r26)
    mr r3, r25
    li r4, 0x1
    bl fn_806F4240
    mr r3, r25
lbl_fn_806A7D40_00001A24:
    addi r11, r1, 0x50
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806A7FB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_806F41F0
    lis r3, lbl_8085FF38@ha
    lwz r31, lbl_8085FF38@l(r3)
    b lbl_fn_806A7FB0_00001A74
lbl_fn_806A7FB0_00001A70:
    lwz r31, 0x1c(r31)
lbl_fn_806A7FB0_00001A74:
    cmpwi r31, 0x0
    beq lbl_fn_806A7FB0_00001A88
    lwz r0, 0x18(r31)
    cmpw r0, r30
    bne lbl_fn_806A7FB0_00001A70
lbl_fn_806A7FB0_00001A88:
    cmpwi r31, 0x0
    beq lbl_fn_806A7FB0_00001AB0
    lwz r4, 0x14(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806A7FB0_00001AA8
    li r3, 0x6
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806A7FB0_00001AA8:
    mr r3, r31
    bl fn_806A8160
lbl_fn_806A7FB0_00001AB0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A8030(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    lis r4, 0xffff
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    subi r31, r4, 0x7ed0
    stw r30, 0x18(r1)
    li r30, 0x7
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_806A8030_00001B00
    li r3, 0x0
    b lbl_fn_806A8030_00001BD4
lbl_fn_806A8030_00001B00:
    lis r4, lbl_807BD0B4@ha
    mr r5, r29
    addi r4, r4, lbl_807BD0B4@l
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
    addi r0, r29, 0x7
    cmplwi r0, 0x1b
    bgt lbl_fn_806A8030_00001BC4
    lis r3, jumptable_807BD0D0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BD0D0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    subi r31, r31, 0x320
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x32a
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x348
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x334
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x33e
    b lbl_fn_806A8030_00001BC4
    li r30, 0x9
    subi r31, r31, 0x1
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x348
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x352
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x1e
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x32
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x14
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x35c
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x366
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x370
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x37a
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x384
    b lbl_fn_806A8030_00001BC4
    subi r31, r31, 0x38e
lbl_fn_806A8030_00001BC4:
    mr r3, r30
    mr r4, r31
    bl fn_806A7130
    mr r3, r29
lbl_fn_806A8030_00001BD4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806A8160(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8085FF38@ha
    stw r30, 0x8(r1)
    lwz r4, lbl_8085FF38@l(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806A8160_00001C7C
    cmplw r4, r3
    bne lbl_fn_806A8160_00001C3C
    lwz r30, 0x1c(r4)
    li r3, 0x6
    li r5, 0x0
    bl fn_806A7400
    stw r30, lbl_8085FF38@l(r31)
    b lbl_fn_806A8160_00001C7C
lbl_fn_806A8160_00001C3C:
    mr r5, r4
    b lbl_fn_806A8160_00001C70
    nop
lbl_fn_806A8160_00001C48:
    cmplw r4, r3
    beq lbl_fn_806A8160_00001C58
    mr r5, r4
    b lbl_fn_806A8160_00001C70
lbl_fn_806A8160_00001C58:
    lwz r0, 0x1c(r4)
    li r3, 0x6
    stw r0, 0x1c(r5)
    li r5, 0x0
    bl fn_806A7400
    b lbl_fn_806A8160_00001C7C
lbl_fn_806A8160_00001C70:
    lwz r4, 0x1c(r5)
    cmpwi r4, 0x0
    bne lbl_fn_806A8160_00001C48
lbl_fn_806A8160_00001C7C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A8200(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x5
    li r4, 0x210
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_806A72E0
    lis r31, lbl_8085FF40@ha
    li r4, 0x0
    stw r3, lbl_8085FF40@l(r31)
    li r5, 0x210
    bl memset
    lwz r3, lbl_8085FF40@l(r31)
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x0(r3)
    lwz r3, lbl_8085FF40@l(r31)
    stw r0, 0x174(r3)
    bl OSGetTime
    lwz r5, lbl_8085FF40@l(r31)
    stw r4, 0x20c(r5)
    stw r3, 0x208(r5)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806A8270(void)
{
    nofralloc
    lis r4, lbl_8085FF40@ha
    lwz r4, lbl_8085FF40@l(r4)
    stw r3, 0x200(r4)
    blr
}

asm void fn_806A8280(void)
{
    nofralloc
    lis r4, lbl_8085FF40@ha
    lwz r4, lbl_8085FF40@l(r4)
    stw r3, 0x204(r4)
    blr
}

asm void fn_806A8290(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    lis r31, lbl_8085FF40@ha
    addi r31, r31, lbl_8085FF40@l
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806A8290_00002804
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    ble lbl_fn_806A8290_00001DD0
    lwz r3, 0x4(r31)
    lwz r3, 0x0(r3)
    bl fn_806EA8A0
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x8
    bge lbl_fn_806A8290_00001DD0
    lwz r4, 0x8(r31)
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_806A8290_00001DD0
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806A8290_00001DC8
    bl fn_806FFDD0
    lwz r3, 0x8(r31)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806A8290_00001DC8
    li r0, 0x0
    stw r0, 0x4(r3)
    li r4, 0x1
    li r5, 0x2b67
    lwz r3, 0x8(r31)
    li r6, 0x2b67
    lwz r3, 0x0(r3)
    bl fn_806FFBE0
lbl_fn_806A8290_00001DC8:
    li r3, 0x0
    bl fn_806EF5B0
lbl_fn_806A8290_00001DD0:
    lwz r6, 0x0(r31)
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806A8290_00001DFC
    cmpwi r0, 0x1
    beq lbl_fn_806A8290_00001FDC
    cmpwi r0, 0x3
    beq lbl_fn_806A8290_00002570
    cmpwi r0, 0x4
    beq lbl_fn_806A8290_0000271C
    b lbl_fn_806A8290_00002804
lbl_fn_806A8290_00001DFC:
    bl fn_806A475C
    lwz r4, 0x0(r31)
    stw r3, 0x170(r4)
    lwz r3, 0x0(r31)
    lwz r3, 0x170(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806A8290_00001F20
    li r4, 0x0
    li r5, 0x0
    bl fn_806EEDC0
    lis r4, lbl_807BD150@ha
    mr r5, r3
    addi r4, r4, lbl_807BD150@l
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x0(r31)
    li r25, 0x1
    stw r25, 0x0(r3)
    lwz r3, 0x0(r31)
    lwz r3, 0x170(r3)
    bl fn_806A9000
    lwz r3, 0x0(r31)
    lis r7, fn_806A8FB0@ha
    lis r6, fn_806A8FC0@ha
    lis r5, fn_806A8FD0@ha
    addi r8, r3, 0x8
    stw r8, 0x8(r31)
    lis r4, fn_806A8FE0@ha
    lis r3, fn_806A8FF0@ha
    stw r25, 0x4(r8)
    addi r7, r7, fn_806A8FB0@l
    lis r9, lbl_8076B604@ha
    lis r8, lbl_8076B600@ha
    stw r7, 0x8(r1)
    addi r6, r6, fn_806A8FC0@l
    lwz r26, lbl_8076B604@l(r9)
    lis r10, fn_806A8FA0@ha
    stw r6, 0xc(r1)
    addi r5, r5, fn_806A8FD0@l
    lwz r27, lbl_8076B600@l(r8)
    addi r4, r4, fn_806A8FE0@l
    stw r5, 0x10(r1)
    addi r3, r3, fn_806A8FF0@l
    li r24, 0x0
    mr r6, r27
    stw r4, 0x14(r1)
    mr r7, r26
    addi r10, r10, fn_806A8FA0@l
    li r4, 0x0
    stw r3, 0x18(r1)
    li r3, 0x0
    li r5, 0x2b67
    li r8, 0x0
    stw r24, 0x1c(r1)
    li r9, 0x0
    bl fn_806EF470
    lis r10, fn_806A8F40@ha
    stw r24, 0x8(r1)
    mr r3, r27
    mr r4, r27
    mr r5, r26
    addi r10, r10, fn_806A8F40@l
    li r6, 0x0
    li r7, 0xa
    li r8, 0x1
    li r9, 0x1
    bl fn_806FF920
    lwz r4, 0x8(r31)
    stw r3, 0x0(r4)
    lwz r3, 0x8(r31)
    stw r25, 0x8(r3)
    b lbl_fn_806A8290_00002804
lbl_fn_806A8290_00001F20:
    bl OSGetTime
    lis r5, 0x8000
    lwz r8, 0x0(r31)
    lwz r0, 0xf8(r5)
    lis r5, 0x1062
    addi r6, r5, 0x4dd3
    lwz r7, 0x20c(r8)
    srwi r5, r0, 2
    li r0, 0x2710
    mulhwu r5, r6, r5
    subfc r7, r7, r4
    lwz r6, 0x208(r8)
    subfe r6, r6, r3
    srwi r4, r5, 6
    mulhwu r3, r4, r0
    mulli r4, r4, 0x2710
    subfc r0, r7, r4
    subfe r0, r6, r3
    subfe r0, r4, r4
    neg. r0, r0
    beq lbl_fn_806A8290_00002804
    lwz r12, 0x1fc(r8)
    li r3, 0x6
    mtctr r12
    bctrl
    li r3, 0x0
    bl fn_806EF930
    lwz r3, 0x8(r31)
    lwz r3, 0x0(r3)
    bl fn_806FFA10
    li r24, 0x0
    stw r24, 0x8(r31)
    lwz r3, 0x4(r31)
    lwz r3, 0x0(r3)
    bl fn_806EAC00
    lwz r3, 0x4(r31)
    lwz r3, 0x0(r3)
    bl fn_806EA850
    lwz r4, 0x0(r31)
    stw r24, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806A8290_00002804
    li r3, 0x5
    li r5, 0x0
    bl fn_806A7400
    stw r24, 0x0(r31)
    b lbl_fn_806A8290_00002804
lbl_fn_806A8290_00001FDC:
    lwz r3, 0x8(r31)
    lwz r3, 0x0(r3)
    bl fn_806FFEB0
    lwz r4, 0x0(r31)
    lwz r26, 0x178(r4)
    cmpw r3, r26
    blt lbl_fn_806A8290_00002804
    lwz r3, 0x8(r31)
    li r0, 0x0
    li r24, 0x0
    li r25, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_806A8290_00002038
lbl_fn_806A8290_00002010:
    lwz r3, 0x8(r31)
    mr r4, r24
    lwz r3, 0x0(r3)
    bl fn_806FFEA0
    bl fn_806FEC90
    lwz r0, 0x8(r31)
    addi r24, r24, 0x1
    add r4, r0, r25
    addi r25, r25, 0x4
    stw r3, 0xc(r4)
lbl_fn_806A8290_00002038:
    cmpw r24, r26
    blt lbl_fn_806A8290_00002010
    lwz r3, 0x8(r31)
    subic. r5, r26, 0x1
    addi r27, r3, 0xc
    ble lbl_fn_806A8290_000024B4
    srwi r0, r5, 31
    lwz r6, 0x0(r27)
    add r0, r0, r5
    addi r7, r27, 0x4
    extlwi r4, r0, 30, 1
    li r30, 0x0
    lwzx r0, r27, r4
    li r3, 0x0
    stw r0, 0x0(r27)
    stwx r6, r27, r4
    mtctr r5
    cmpwi r5, 0x1
    blt lbl_fn_806A8290_000020B4
    nop
lbl_fn_806A8290_00002088:
    lwz r4, 0x0(r7)
    lwz r0, 0x0(r27)
    cmplw r4, r0
    bge lbl_fn_806A8290_000020AC
    addi r3, r3, 0x4
    addi r30, r30, 0x1
    lwzx r0, r27, r3
    stw r0, 0x0(r7)
    stwx r4, r27, r3
lbl_fn_806A8290_000020AC:
    addi r7, r7, 0x4
    bdnz lbl_fn_806A8290_00002088
lbl_fn_806A8290_000020B4:
    slwi r24, r30, 2
    lwz r3, 0x0(r27)
    lwzx r0, r27, r24
    subic. r5, r30, 0x1
    stw r0, 0x0(r27)
    stwx r3, r27, r24
    ble lbl_fn_806A8290_000022A4
    srwi r0, r5, 31
    lwz r6, 0x0(r27)
    add r0, r0, r5
    addi r7, r27, 0x4
    extlwi r4, r0, 30, 1
    li r29, 0x0
    lwzx r0, r27, r4
    li r3, 0x0
    stw r0, 0x0(r27)
    stwx r6, r27, r4
    mtctr r5
    cmpwi r5, 0x1
    blt lbl_fn_806A8290_00002134
    nop
lbl_fn_806A8290_00002108:
    lwz r4, 0x0(r7)
    lwz r0, 0x0(r27)
    cmplw r4, r0
    bge lbl_fn_806A8290_0000212C
    addi r3, r3, 0x4
    addi r29, r29, 0x1
    lwzx r0, r27, r3
    stw r0, 0x0(r7)
    stwx r4, r27, r3
lbl_fn_806A8290_0000212C:
    addi r7, r7, 0x4
    bdnz lbl_fn_806A8290_00002108
lbl_fn_806A8290_00002134:
    slwi r25, r29, 2
    lwz r3, 0x0(r27)
    lwzx r0, r27, r25
    subic. r5, r29, 0x1
    stw r0, 0x0(r27)
    stwx r3, r27, r25
    ble lbl_fn_806A8290_000021E8
    srwi r0, r5, 31
    lwz r6, 0x0(r27)
    add r0, r0, r5
    addi r7, r27, 0x4
    extlwi r4, r0, 30, 1
    li r28, 0x0
    lwzx r0, r27, r4
    li r3, 0x0
    stw r0, 0x0(r27)
    stwx r6, r27, r4
    mtctr r5
    cmpwi r5, 0x1
    blt lbl_fn_806A8290_000021B4
    nop
lbl_fn_806A8290_00002188:
    lwz r4, 0x0(r7)
    lwz r0, 0x0(r27)
    cmplw r4, r0
    bge lbl_fn_806A8290_000021AC
    addi r3, r3, 0x4
    addi r28, r28, 0x1
    lwzx r0, r27, r3
    stw r0, 0x0(r7)
    stwx r4, r27, r3
lbl_fn_806A8290_000021AC:
    addi r7, r7, 0x4
    bdnz lbl_fn_806A8290_00002188
lbl_fn_806A8290_000021B4:
    slwi r6, r28, 2
    lwz r7, 0x0(r27)
    lwzx r0, r27, r6
    mr r3, r27
    stw r0, 0x0(r27)
    subi r5, r28, 0x1
    li r4, 0x0
    stwx r7, r27, r6
    bl fn_806A97B0
    mr r3, r27
    addi r4, r28, 0x1
    subi r5, r29, 0x1
    bl fn_806A97B0
lbl_fn_806A8290_000021E8:
    addi r28, r29, 0x1
    subi r7, r30, 0x1
    cmpw r28, r7
    bge lbl_fn_806A8290_000022A4
    add r3, r30, r29
    add r6, r27, r25
    srwi r0, r3, 31
    lwz r9, 0x4(r6)
    add r3, r0, r3
    addi r8, r29, 0x2
    extlwi r5, r3, 30, 1
    addi r0, r7, 0x1
    lwzx r4, r27, r5
    slwi r3, r8, 2
    stw r4, 0x4(r6)
    add r4, r27, r3
    subf r0, r8, r0
    slwi r3, r28, 2
    stwx r9, r27, r5
    mtctr r0
    cmpw r8, r7
    bgt lbl_fn_806A8290_0000226C
lbl_fn_806A8290_00002240:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r6)
    cmplw r5, r0
    bge lbl_fn_806A8290_00002264
    addi r3, r3, 0x4
    addi r28, r28, 0x1
    lwzx r0, r27, r3
    stw r0, 0x0(r4)
    stwx r5, r27, r3
lbl_fn_806A8290_00002264:
    addi r4, r4, 0x4
    bdnz lbl_fn_806A8290_00002240
lbl_fn_806A8290_0000226C:
    add r5, r27, r25
    slwi r6, r28, 2
    lwz r7, 0x4(r5)
    mr r3, r27
    lwzx r0, r27, r6
    addi r4, r29, 0x1
    stw r0, 0x4(r5)
    subi r5, r28, 0x1
    stwx r7, r27, r6
    bl fn_806A97B0
    mr r3, r27
    addi r4, r28, 0x1
    subi r5, r30, 0x1
    bl fn_806A97B0
lbl_fn_806A8290_000022A4:
    addi r29, r30, 0x1
    subi r7, r26, 0x1
    cmpw r29, r7
    bge lbl_fn_806A8290_000024B4
    add r3, r26, r30
    add r6, r27, r24
    srwi r0, r3, 31
    lwz r9, 0x4(r6)
    add r3, r0, r3
    addi r8, r30, 0x2
    extlwi r5, r3, 30, 1
    addi r0, r7, 0x1
    lwzx r4, r27, r5
    slwi r3, r8, 2
    stw r4, 0x4(r6)
    add r4, r27, r3
    subf r0, r8, r0
    slwi r3, r29, 2
    stwx r9, r27, r5
    mtctr r0
    cmpw r8, r7
    bgt lbl_fn_806A8290_0000232C
    nop
lbl_fn_806A8290_00002300:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r6)
    cmplw r5, r0
    bge lbl_fn_806A8290_00002324
    addi r3, r3, 0x4
    addi r29, r29, 0x1
    lwzx r0, r27, r3
    stw r0, 0x0(r4)
    stwx r5, r27, r3
lbl_fn_806A8290_00002324:
    addi r4, r4, 0x4
    bdnz lbl_fn_806A8290_00002300
lbl_fn_806A8290_0000232C:
    add r7, r27, r24
    slwi r24, r29, 2
    lwz r3, 0x4(r7)
    addi r28, r30, 0x1
    lwzx r0, r27, r24
    subi r6, r29, 0x1
    stw r0, 0x4(r7)
    cmpw r28, r6
    stwx r3, r27, r24
    bge lbl_fn_806A8290_000023F8
    add r4, r29, r30
    lwz r9, 0x4(r7)
    srwi r3, r4, 31
    addi r8, r30, 0x2
    add r4, r3, r4
    addi r0, r6, 0x1
    extlwi r5, r4, 30, 1
    slwi r3, r8, 2
    lwzx r4, r27, r5
    subf r0, r8, r0
    stw r4, 0x4(r7)
    add r4, r27, r3
    slwi r3, r28, 2
    stwx r9, r27, r5
    mtctr r0
    cmpw r8, r6
    bgt lbl_fn_806A8290_000023C4
lbl_fn_806A8290_00002398:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r7)
    cmplw r5, r0
    bge lbl_fn_806A8290_000023BC
    addi r3, r3, 0x4
    addi r28, r28, 0x1
    lwzx r0, r27, r3
    stw r0, 0x0(r4)
    stwx r5, r27, r3
lbl_fn_806A8290_000023BC:
    addi r4, r4, 0x4
    bdnz lbl_fn_806A8290_00002398
lbl_fn_806A8290_000023C4:
    slwi r6, r28, 2
    lwz r8, 0x4(r7)
    lwzx r0, r27, r6
    mr r3, r27
    stw r0, 0x4(r7)
    addi r4, r30, 0x1
    subi r5, r28, 0x1
    stwx r8, r27, r6
    bl fn_806A97B0
    mr r3, r27
    addi r4, r28, 0x1
    subi r5, r29, 0x1
    bl fn_806A97B0
lbl_fn_806A8290_000023F8:
    addi r28, r29, 0x1
    subi r7, r26, 0x1
    cmpw r28, r7
    bge lbl_fn_806A8290_000024B4
    add r3, r26, r29
    add r6, r27, r24
    srwi r0, r3, 31
    lwz r9, 0x4(r6)
    add r3, r0, r3
    addi r8, r29, 0x2
    extlwi r5, r3, 30, 1
    addi r0, r7, 0x1
    lwzx r4, r27, r5
    slwi r3, r8, 2
    stw r4, 0x4(r6)
    add r4, r27, r3
    subf r0, r8, r0
    slwi r3, r28, 2
    stwx r9, r27, r5
    mtctr r0
    cmpw r8, r7
    bgt lbl_fn_806A8290_0000247C
lbl_fn_806A8290_00002450:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r6)
    cmplw r5, r0
    bge lbl_fn_806A8290_00002474
    addi r3, r3, 0x4
    addi r28, r28, 0x1
    lwzx r0, r27, r3
    stw r0, 0x0(r4)
    stwx r5, r27, r3
lbl_fn_806A8290_00002474:
    addi r4, r4, 0x4
    bdnz lbl_fn_806A8290_00002450
lbl_fn_806A8290_0000247C:
    add r5, r27, r24
    slwi r6, r28, 2
    lwz r7, 0x4(r5)
    mr r3, r27
    lwzx r0, r27, r6
    addi r4, r29, 0x1
    stw r0, 0x4(r5)
    subi r5, r28, 0x1
    stwx r7, r27, r6
    bl fn_806A97B0
    mr r3, r27
    addi r4, r28, 0x1
    subi r5, r26, 0x1
    bl fn_806A97B0
lbl_fn_806A8290_000024B4:
    lwz r3, 0x8(r31)
    lwz r4, 0x0(r31)
    lwz r3, 0xc(r3)
    lwz r0, 0x170(r4)
    cmplw r3, r0
    beq lbl_fn_806A8290_00002804
    li r0, 0x5
    stw r0, 0x0(r4)
    li r4, 0x0
    lwz r25, 0x4(r31)
    mr r5, r25
    b lbl_fn_806A8290_000024F0
    nop
lbl_fn_806A8290_000024E8:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
lbl_fn_806A8290_000024F0:
    lwz r0, 0x14(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806A8290_00002504
    cmpwi r4, 0x10
    blt lbl_fn_806A8290_000024E8
lbl_fn_806A8290_00002504:
    cmpwi r4, 0x10
    bge lbl_fn_806A8290_00002534
    stw r4, 0x94(r25)
    slwi r6, r4, 3
    li r5, 0x0
    lwz r0, 0x4(r31)
    add r4, r0, r6
    stw r5, 0x18(r4)
    lwz r25, 0x4(r31)
    add r4, r25, r6
    addi r24, r4, 0x14
    b lbl_fn_806A8290_00002538
lbl_fn_806A8290_00002534:
    li r24, 0x0
lbl_fn_806A8290_00002538:
    li r4, 0x3039
    li r5, 0x0
    bl fn_806EEDC0
    lwz r6, 0x4(r31)
    mr r5, r3
    mr r4, r24
    addi r9, r25, 0x4
    lwz r3, 0x0(r6)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x2710
    li r10, 0x0
    bl fn_806EA920
    b lbl_fn_806A8290_00002804
lbl_fn_806A8290_00002570:
    lwz r5, 0x174(r6)
    cmpwi r5, -0x1
    beq lbl_fn_806A8290_00002804
    lwz r3, 0x178(r6)
    lwz r7, 0x4(r31)
    subic. r24, r3, 0x1
    addi r4, r7, 0x14
    slwi r0, r24, 2
    add r3, r7, r0
    mtctr r24
    ble lbl_fn_806A8290_00002698
    nop
lbl_fn_806A8290_000025A0:
    lwz r0, 0x174(r6)
    cmpw r24, r0
    beq lbl_fn_806A8290_0000268C
    lwz r0, 0x94(r3)
    cmpwi r0, -0x1
    bne lbl_fn_806A8290_000025C0
    li r0, 0x0
    b lbl_fn_806A8290_000025C8
lbl_fn_806A8290_000025C0:
    slwi r0, r0, 3
    add r0, r4, r0
lbl_fn_806A8290_000025C8:
    cmpwi r0, 0x0
    bne lbl_fn_806A8290_0000268C
    cmpw r24, r5
    ble lbl_fn_806A8290_00002698
    li r0, 0x6
    stw r0, 0x0(r6)
    slwi r0, r24, 3
    li r5, 0x0
    lwz r3, 0x0(r31)
    lwz r26, 0x4(r31)
    add r3, r3, r0
    lwz r3, 0x17c(r3)
    mr r4, r26
    b lbl_fn_806A8290_00002608
lbl_fn_806A8290_00002600:
    addi r4, r4, 0x8
    addi r5, r5, 0x1
lbl_fn_806A8290_00002608:
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806A8290_0000261C
    cmpwi r5, 0x10
    blt lbl_fn_806A8290_00002600
lbl_fn_806A8290_0000261C:
    cmpwi r5, 0x10
    bge lbl_fn_806A8290_00002650
    slwi r0, r24, 2
    slwi r6, r5, 3
    add r4, r26, r0
    stw r5, 0x94(r4)
    lwz r0, 0x4(r31)
    add r4, r0, r6
    stw r24, 0x18(r4)
    lwz r26, 0x4(r31)
    add r4, r26, r6
    addi r25, r4, 0x14
    b lbl_fn_806A8290_00002654
lbl_fn_806A8290_00002650:
    li r25, 0x0
lbl_fn_806A8290_00002654:
    li r4, 0x3039
    li r5, 0x0
    bl fn_806EEDC0
    lwz r6, 0x4(r31)
    mr r5, r3
    mr r4, r25
    addi r9, r26, 0x4
    lwz r3, 0x0(r6)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x2710
    li r10, 0x0
    bl fn_806EA920
    b lbl_fn_806A8290_00002698
lbl_fn_806A8290_0000268C:
    subi r3, r3, 0x4
    subi r24, r24, 0x1
    bdnz lbl_fn_806A8290_000025A0
lbl_fn_806A8290_00002698:
    cmpwi r24, 0x0
    bne lbl_fn_806A8290_00002804
    lwz r3, 0x0(r31)
    li r4, 0x7
    li r0, 0x1
    stw r4, 0x0(r3)
    lwz r3, 0x0(r31)
    stw r0, 0x12c(r3)
    lwz r5, 0x4(r31)
    lwz r3, 0x0(r31)
    lwz r0, 0x94(r5)
    addi r4, r3, 0x12c
    cmpwi r0, -0x1
    bne lbl_fn_806A8290_000026D8
    li r3, 0x0
    b lbl_fn_806A8290_000026E4
lbl_fn_806A8290_000026D8:
    slwi r0, r0, 3
    add r3, r5, r0
    addi r3, r3, 0x14
lbl_fn_806A8290_000026E4:
    lwz r3, 0x0(r3)
    li r5, 0x44
    li r6, 0x1
    bl fn_806EAAD0
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x8
    bne lbl_fn_806A8290_00002804
    lwz r12, 0x204(r3)
    li r3, 0x44
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806A8290_00002804
lbl_fn_806A8290_0000271C:
    lwz r4, 0x178(r6)
    addi r3, r6, 0x8
    li r5, 0x1
    subi r0, r4, 0x1
    mtctr r0
    cmpwi r4, 0x1
    ble lbl_fn_806A8290_00002750
lbl_fn_806A8290_00002738:
    lwz r0, 0x180(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806A8290_00002750
    addi r3, r3, 0x8
    addi r5, r5, 0x1
    bdnz lbl_fn_806A8290_00002738
lbl_fn_806A8290_00002750:
    lwz r0, 0x178(r6)
    cmpw r5, r0
    bne lbl_fn_806A8290_00002804
    li r0, 0x2
    stw r0, 0x12c(r6)
    li r25, 0x1
    li r24, 0x4
    b lbl_fn_806A8290_000027D8
lbl_fn_806A8290_00002770:
    lwz r5, 0x4(r31)
    addi r4, r3, 0x12c
    add r3, r5, r24
    lwz r0, 0x94(r3)
    cmpwi r0, -0x1
    bne lbl_fn_806A8290_00002790
    li r3, 0x0
    b lbl_fn_806A8290_0000279C
lbl_fn_806A8290_00002790:
    slwi r0, r0, 3
    add r3, r5, r0
    addi r3, r3, 0x14
lbl_fn_806A8290_0000279C:
    lwz r3, 0x0(r3)
    li r5, 0x44
    li r6, 0x1
    bl fn_806EAAD0
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x8
    bne lbl_fn_806A8290_000027D0
    lwz r12, 0x204(r3)
    mr r4, r25
    li r3, 0x44
    mtctr r12
    bctrl
lbl_fn_806A8290_000027D0:
    addi r24, r24, 0x4
    addi r25, r25, 0x1
lbl_fn_806A8290_000027D8:
    lwz r3, 0x0(r31)
    lwz r0, 0x178(r3)
    cmpw r25, r0
    blt lbl_fn_806A8290_00002770
    li r0, 0x8
    stw r0, 0x0(r3)
    li r3, 0x0
    lwz r4, 0x0(r31)
    lwz r12, 0x1fc(r4)
    mtctr r12
    bctrl
lbl_fn_806A8290_00002804:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
