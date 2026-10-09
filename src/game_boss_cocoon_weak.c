#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8006A9A4(void);
extern void fn_8006B174(void);
extern void fn_8006BBCC(void);
extern void fn_8006BC64(void);
extern void fn_8006C300(void);
extern void fn_8006C3F0(void);
extern void fn_8006D008(void);
extern void fn_800827E0(void);
extern void fn_800838AC(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_800897D8(void);
extern void fn_800A4460(void);
extern void fn_800A55D4(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_801FECE0(void);
extern void fn_8046C1C8(void);
extern void fn_8046C2D4(void);
extern void fn_8046CBB0(void);
extern void fn_8046CBBC(void);
extern void fn_8046EBC4(void);
extern void fn_8046F5CC(void);
extern void fn_804702BC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473EFC(void);
extern void fn_80473F88(void);
extern void fn_80473FCC(void);
extern void fn_805F9EF0(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_806825B4(void);
extern void fn_806827C4(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075561C[];
extern u8 lbl_8078FB70[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087E050;
extern u32 lbl_8087E054;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF68;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F518;
extern u32 lbl_80886EC0;
extern u32 lbl_80886EC4;
extern u32 lbl_80886EC8;
extern u32 lbl_80886ECC;
extern u32 lbl_80886ED0;
extern u32 lbl_80886ED4;

/* Function declarations */
void fn_8046D19C(void);
void fn_8046D1C4(void);
void fn_8046D1CC(void);
void fn_8046D1EC(void);
void fn_8046D7D8(void);
void fn_8046D84C(void);
void fn_8046D9B0(void);
void fn_8046DBF8(void);
void fn_8046DC5C(void);
void fn_8046DD20(void);
void fn_8046DD5C(void);
void fn_8046DD60(void);
void fn_8046E058(void);
void fn_8046E410(void);
void fn_8046E55C(void);
void fn_8046E890(void);

asm void fn_8046D19C(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    slwi r0, r4, 4
    add r3, r3, r0
    lwz r0, 0x4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8046D19C_00000020
    addi r3, r3, 0x5
    blr
lbl_fn_8046D19C_00000020:
    lwz r3, 0xc(r3)
    blr
}

asm void fn_8046D1C4(void)
{
    nofralloc
    addi r3, r3, 0x4010
    blr
}

asm void fn_8046D1CC(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8046D1CC_00000044
    addi r0, r3, 0x1
    b lbl_fn_8046D1CC_00000048
lbl_fn_8046D1CC_00000044:
    lwz r0, 0x8(r3)
lbl_fn_8046D1CC_00000048:
    add r3, r0, r4
    blr
}

asm void fn_8046D1EC(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    lbz r0, 0x0(r4)
    stmw r26, 0x168(r1)
    mr r29, r3
    cmpwi r0, 0x2f
    bne lbl_fn_8046D1EC_00000078
    addi r30, r4, 0x1
    b lbl_fn_8046D1EC_0000007C
lbl_fn_8046D1EC_00000078:
    mr r30, r4
lbl_fn_8046D1EC_0000007C:
    lwz r26, lbl_8087F518
    cmpwi r26, 0x0
    beq lbl_fn_8046D1EC_000000A4
    lwz r0, 0x400c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8046D1EC_000000A4
    mr r3, r29
    mr r4, r30
    bl strcpy
    b lbl_fn_8046D1EC_00000628
lbl_fn_8046D1EC_000000A4:
    mr r3, r30
    li r4, 0x2e
    bl fn_806825B4
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8046D1EC_000000CC
    mr r3, r29
    mr r4, r30
    bl strcpy
    b lbl_fn_8046D1EC_00000628
lbl_fn_8046D1EC_000000CC:
    cmpwi r26, 0x0
    beq lbl_fn_8046D1EC_00000214
    lwz r3, lbl_8087F518
    lwz r0, 0x4008(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8046D1EC_00000214
    li r0, 0x0
    stw r0, 0x30(r1)
    mr r3, r30
    addi r28, r1, 0x30
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r28
    stb r0, 0x10(r1)
    mr r6, r30
    add r7, r30, r27
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x48
    bl fn_8006B174
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046D1EC_00000154
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_8046D1EC_00000154:
    addi r3, r1, 0x54
    bl fn_8006BBCC
    lwz r4, lbl_8087F518
    lis r6, 0x1
    addi r3, r1, 0x54
    addi r5, r31, 0x1
    addi r4, r4, 0x3f08
    addi r6, r6, 0x1
    bl fn_8006C3F0
    lwz r0, 0x48(r1)
    addi r3, r1, 0x54
    srwi. r0, r0, 31
    bne lbl_fn_8046D1EC_00000190
    addi r4, r1, 0x49
    b lbl_fn_8046D1EC_00000194
lbl_fn_8046D1EC_00000190:
    lwz r4, 0x50(r1)
lbl_fn_8046D1EC_00000194:
    li r5, 0x0
    bl fn_8006C300
    cmpwi r3, 0x0
    blt lbl_fn_8046D1EC_000001F4
    lwz r4, 0x5c(r1)
    slwi r0, r3, 4
    mr r3, r29
    add r4, r4, r0
    lwz r0, 0x4(r4)
    srwi. r0, r0, 31
    bne lbl_fn_8046D1EC_000001C8
    addi r4, r4, 0x5
    b lbl_fn_8046D1EC_000001CC
lbl_fn_8046D1EC_000001C8:
    lwz r4, 0xc(r4)
lbl_fn_8046D1EC_000001CC:
    bl strcpy
    addi r3, r1, 0x54
    li r4, -0x1
    bl fn_8006BC64
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046D1EC_00000628
    lwz r3, 0x50(r1)
    bl dtor_80084684
    b lbl_fn_8046D1EC_00000628
lbl_fn_8046D1EC_000001F4:
    addi r3, r1, 0x54
    li r4, -0x1
    bl fn_8006BC64
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046D1EC_00000214
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_8046D1EC_00000214:
    lwz r3, lbl_8087F518
    cmpwi r3, 0x0
    beq lbl_fn_8046D1EC_000003B8
    lwz r0, 0x4010(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8046D1EC_00000238
    lbz r0, 0x4010(r3)
    clrlwi r0, r0, 25
    b lbl_fn_8046D1EC_0000023C
lbl_fn_8046D1EC_00000238:
    lwz r0, 0x4014(r3)
lbl_fn_8046D1EC_0000023C:
    cmpwi r0, 0x0
    beq lbl_fn_8046D1EC_000003B8
    mr r4, r30
    addi r3, r1, 0x68
    bl strcpy
    lis r28, lbl_8075561C@ha
    addi r3, r1, 0x68
    addi r28, r28, lbl_8075561C@l
    addi r4, r28, 0x144
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8046D1EC_00000278
    addi r4, r28, 0x149
    li r5, 0x4
    bl fn_8068236C
lbl_fn_8046D1EC_00000278:
    lwz r4, lbl_8087F518
    lis r5, lbl_8075561C@ha
    addi r3, r1, 0x24
    addi r4, r4, 0x4010
    addi r5, r5, lbl_8075561C@l
    bl fn_8006D008
    addi r3, r1, 0x3c
    addi r4, r1, 0x24
    addi r5, r1, 0x68
    bl fn_8006D008
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046D1EC_000002B4
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_8046D1EC_000002B4:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046D1EC_000002C8
    addi r27, r1, 0x3d
    b lbl_fn_8046D1EC_000002CC
lbl_fn_8046D1EC_000002C8:
    lwz r27, 0x44(r1)
lbl_fn_8046D1EC_000002CC:
    li r0, 0x0
    stw r0, 0x18(r1)
    mr r3, r27
    addi r28, r1, 0x18
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r26, r3
    mr r3, r28
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r28
    stb r0, 0xc(r1)
    mr r6, r27
    add r7, r27, r26
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r3, r28
    bl fn_8006A9A4
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046D1EC_00000338
    addi r3, r1, 0x19
    b lbl_fn_8046D1EC_0000033C
lbl_fn_8046D1EC_00000338:
    lwz r3, 0x20(r1)
lbl_fn_8046D1EC_0000033C:
    bl fn_805F9EF0
    lwz r0, 0x18(r1)
    subfic r4, r3, -0x1
    addi r3, r3, 0x1
    srwi. r0, r0, 31
    or r0, r4, r3
    srwi r28, r0, 31
    beq lbl_fn_8046D1EC_00000364
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8046D1EC_00000364:
    cmpwi r28, 0x0
    beq lbl_fn_8046D1EC_000003A4
    lwz r0, 0x3c(r1)
    mr r3, r29
    srwi. r0, r0, 31
    bne lbl_fn_8046D1EC_00000384
    addi r4, r1, 0x3d
    b lbl_fn_8046D1EC_00000388
lbl_fn_8046D1EC_00000384:
    lwz r4, 0x44(r1)
lbl_fn_8046D1EC_00000388:
    bl strcpy
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046D1EC_00000628
    lwz r3, 0x44(r1)
    bl dtor_80084684
    b lbl_fn_8046D1EC_00000628
lbl_fn_8046D1EC_000003A4:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046D1EC_000003B8
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_8046D1EC_000003B8:
    lis r28, lbl_8075561C@ha
    addi r3, r31, 0x1
    addi r28, r28, lbl_8075561C@l
    li r26, 0x0
    addi r4, r28, 0x2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_000003E0
    addi r26, r28, 0x8
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_000003E0:
    addi r3, r31, 0x1
    addi r4, r28, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_000003FC
    addi r26, r28, 0x1c
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_000003FC:
    addi r3, r31, 0x1
    addi r4, r28, 0x2a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_00000418
    addi r26, r28, 0x31
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_00000418:
    addi r3, r31, 0x1
    addi r4, r28, 0x3e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_00000434
    addi r26, r28, 0x42
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_00000434:
    addi r3, r31, 0x1
    addi r4, r28, 0x4c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_00000450
    addi r26, r28, 0x50
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_00000450:
    addi r3, r31, 0x1
    addi r4, r28, 0x5a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_0000046C
    addi r26, r28, 0x64
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_0000046C:
    addi r3, r31, 0x1
    addi r4, r28, 0x77
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8046D1EC_00000494
    addi r3, r31, 0x1
    addi r4, r28, 0x7c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_000004A4
lbl_fn_8046D1EC_00000494:
    lis r3, lbl_8075561C@ha
    addi r3, r3, lbl_8075561C@l
    addi r26, r3, 0x80
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_000004A4:
    addi r3, r31, 0x1
    addi r4, r28, 0x90
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_000004C0
    addi r26, r28, 0x99
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_000004C0:
    addi r3, r31, 0x1
    addi r4, r28, 0xa8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_000004DC
    addi r26, r28, 0xb0
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_000004DC:
    addi r3, r31, 0x1
    addi r4, r28, 0xbe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_000004F8
    addi r26, r28, 0xc2
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_000004F8:
    addi r3, r31, 0x1
    addi r4, r28, 0xd0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_00000514
    addi r26, r28, 0xd7
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_00000514:
    addi r3, r31, 0x1
    addi r4, r28, 0xe4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_00000530
    addi r26, r28, 0xe9
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_00000530:
    addi r3, r31, 0x1
    addi r4, r28, 0xf4
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8046D1EC_00000558
    addi r3, r31, 0x1
    addi r4, r28, 0xf8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_00000568
lbl_fn_8046D1EC_00000558:
    lis r3, lbl_8075561C@ha
    addi r3, r3, lbl_8075561C@l
    addi r26, r3, 0xfc
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_00000568:
    addi r3, r31, 0x1
    addi r4, r28, 0x106
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_00000584
    addi r26, r28, 0x10a
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_00000584:
    addi r3, r31, 0x1
    addi r4, r28, 0x11a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_000005A0
    addi r26, r28, 0x11e
    b lbl_fn_8046D1EC_000005B8
lbl_fn_8046D1EC_000005A0:
    addi r3, r31, 0x1
    addi r4, r28, 0x13b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8046D1EC_000005B8
    addi r26, r28, 0x12c
lbl_fn_8046D1EC_000005B8:
    cmpwi r26, 0x0
    beq lbl_fn_8046D1EC_0000061C
    mr r3, r30
    li r4, 0x2f
    bl fn_806825B4
    mr r27, r3
    mr r3, r30
    li r4, 0x5c
    bl fn_806825B4
    cmplw r27, r3
    bge lbl_fn_8046D1EC_000005E8
    mr r27, r3
lbl_fn_8046D1EC_000005E8:
    lis r4, lbl_8075561C@ha
    cmpwi r27, 0x0
    addi r4, r4, lbl_8075561C@l
    mr r3, r29
    mr r5, r26
    addi r4, r4, 0x14e
    beq lbl_fn_8046D1EC_0000060C
    addi r6, r27, 0x1
    b lbl_fn_8046D1EC_00000610
lbl_fn_8046D1EC_0000060C:
    mr r6, r30
lbl_fn_8046D1EC_00000610:
    crclr 6
    bl sprintf
    b lbl_fn_8046D1EC_00000628
lbl_fn_8046D1EC_0000061C:
    mr r3, r29
    mr r4, r30
    bl strcpy
lbl_fn_8046D1EC_00000628:
    lmw r26, 0x168(r1)
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_8046D7D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F518
    cmpwi r0, 0x0
    bne lbl_fn_8046D7D8_00000698
    cmpwi r3, 0x0
    beq lbl_fn_8046D7D8_00000698
    lis r5, lbl_8075561C@ha
    li r3, 0x4048
    addi r5, r5, lbl_8075561C@l
    li r4, 0x1
    addi r5, r5, 0x153
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8046D7D8_00000694
    mr r4, r31
    bl fn_8046D84C
lbl_fn_8046D7D8_00000694:
    stw r3, lbl_8087F518
lbl_fn_8046D7D8_00000698:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F518
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046D84C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800D1D3C
    lis r3, lbl_8078FB70@ha
    lis r31, lbl_8075561C@ha
    li r5, 0x0
    addi r6, r29, 0x3ed0
    li r0, 0x1
    addi r3, r3, lbl_8078FB70@l
    li r4, 0x3c
    addi r31, r31, lbl_8075561C@l
    stw r3, 0x0(r29)
    mr r3, r31
    stw r5, 0x48(r29)
    stw r5, 0x3ecc(r29)
    stw r6, 0x4(r6)
    stw r6, 0x0(r6)
    stw r5, 0x3ed8(r29)
    stw r5, 0x3edc(r29)
    stw r5, 0x3ee0(r29)
    stw r5, 0x3ee4(r29)
    stw r4, 0x3ee8(r29)
    stw r5, 0x3eec(r29)
    stw r5, 0x3ef0(r29)
    stw r0, 0x3ef4(r29)
    stw r0, 0x3ef8(r29)
    stw r5, 0x3efc(r29)
    stw r5, 0x3f00(r29)
    stw r5, 0x3f04(r29)
    bl strlen
    mr r30, r3
    addi r3, r29, 0x3efc
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r6, r31
    stb r0, 0x8(r1)
    addi r3, r29, 0x3efc
    add r7, r31, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r31, r31, 0x154
    addi r0, r29, 0x3f08
    cmplw r31, r0
    beq lbl_fn_8046D84C_0000079C
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r29, 0x3f08
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8046D84C_0000079C:
    li r4, 0x0
    addi r5, r29, 0x4024
    addi r6, r29, 0x4030
    addi r7, r29, 0x403c
    li r0, 0x1
    stw r4, 0x4008(r29)
    mr r3, r29
    stw r0, 0x400c(r29)
    stw r4, 0x4010(r29)
    stw r4, 0x4014(r29)
    stw r4, 0x4018(r29)
    stw r4, 0x401c(r29)
    stw r4, 0x4020(r29)
    stw r5, 0x4(r5)
    stw r5, 0x0(r5)
    stw r4, 0x402c(r29)
    stw r6, 0x4(r6)
    stw r6, 0x0(r6)
    stw r4, 0x4038(r29)
    stw r7, 0x4(r7)
    stw r7, 0x0(r7)
    bl fn_8046CBB0
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046D9B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_8046D9B0_00000A44
    lis r4, lbl_8078FB70@ha
    addi r4, r4, lbl_8078FB70@l
    stw r4, 0x0(r3)
    bl fn_8046CBBC
    addic. r29, r30, 0x4038
    li r0, 0x0
    stw r0, lbl_8087F518
    beq lbl_fn_8046D9B0_000008AC
    beq lbl_fn_8046D9B0_000008AC
    beq lbl_fn_8046D9B0_000008AC
    lwz r27, 0x8(r29)
    addi r28, r29, 0x4
    cmplw r27, r28
    beq lbl_fn_8046D9B0_000008AC
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r27)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r3)
    b lbl_fn_8046D9B0_000008A4
lbl_fn_8046D9B0_0000088C:
    mr r3, r27
    lwz r27, 0x4(r27)
    bl dtor_80084684
    lwz r3, 0x0(r29)
    subi r0, r3, 0x1
    stw r0, 0x0(r29)
lbl_fn_8046D9B0_000008A4:
    cmplw r27, r28
    bne lbl_fn_8046D9B0_0000088C
lbl_fn_8046D9B0_000008AC:
    addic. r29, r30, 0x402c
    beq lbl_fn_8046D9B0_0000090C
    beq lbl_fn_8046D9B0_0000090C
    beq lbl_fn_8046D9B0_0000090C
    lwz r28, 0x8(r29)
    addi r27, r29, 0x4
    cmplw r28, r27
    beq lbl_fn_8046D9B0_0000090C
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r28)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r3)
    b lbl_fn_8046D9B0_00000904
lbl_fn_8046D9B0_000008EC:
    mr r3, r28
    lwz r28, 0x4(r28)
    bl dtor_80084684
    lwz r3, 0x0(r29)
    subi r0, r3, 0x1
    stw r0, 0x0(r29)
lbl_fn_8046D9B0_00000904:
    cmplw r28, r27
    bne lbl_fn_8046D9B0_000008EC
lbl_fn_8046D9B0_0000090C:
    addic. r29, r30, 0x4020
    beq lbl_fn_8046D9B0_0000096C
    beq lbl_fn_8046D9B0_0000096C
    beq lbl_fn_8046D9B0_0000096C
    lwz r28, 0x8(r29)
    addi r27, r29, 0x4
    cmplw r28, r27
    beq lbl_fn_8046D9B0_0000096C
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r28)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r3)
    b lbl_fn_8046D9B0_00000964
lbl_fn_8046D9B0_0000094C:
    mr r3, r28
    lwz r28, 0x4(r28)
    bl dtor_80084684
    lwz r3, 0x0(r29)
    subi r0, r3, 0x1
    stw r0, 0x0(r29)
lbl_fn_8046D9B0_00000964:
    cmplw r28, r27
    bne lbl_fn_8046D9B0_0000094C
lbl_fn_8046D9B0_0000096C:
    addic. r0, r30, 0x401c
    beq lbl_fn_8046D9B0_00000990
    lwz r4, 0x401c(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8046D9B0_00000990
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8046D9B0_00000990
    bl fn_800897D8
lbl_fn_8046D9B0_00000990:
    addic. r0, r30, 0x4010
    beq lbl_fn_8046D9B0_000009AC
    lwz r0, 0x4010(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8046D9B0_000009AC
    lwz r3, 0x4018(r30)
    bl dtor_80084684
lbl_fn_8046D9B0_000009AC:
    addic. r0, r30, 0x3efc
    beq lbl_fn_8046D9B0_000009C8
    lwz r0, 0x3efc(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8046D9B0_000009C8
    lwz r3, 0x3f04(r30)
    bl dtor_80084684
lbl_fn_8046D9B0_000009C8:
    addic. r29, r30, 0x3ecc
    beq lbl_fn_8046D9B0_00000A28
    beq lbl_fn_8046D9B0_00000A28
    beq lbl_fn_8046D9B0_00000A28
    lwz r28, 0x8(r29)
    addi r27, r29, 0x4
    cmplw r28, r27
    beq lbl_fn_8046D9B0_00000A28
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r28)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r3)
    b lbl_fn_8046D9B0_00000A20
lbl_fn_8046D9B0_00000A08:
    mr r3, r28
    lwz r28, 0x4(r28)
    bl dtor_80084684
    lwz r3, 0x0(r29)
    subi r0, r3, 0x1
    stw r0, 0x0(r29)
lbl_fn_8046D9B0_00000A20:
    cmplw r28, r27
    bne lbl_fn_8046D9B0_00000A08
lbl_fn_8046D9B0_00000A28:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8046D9B0_00000A44
    mr r3, r30
    bl dtor_80084684
lbl_fn_8046D9B0_00000A44:
    mr r3, r30
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046DBF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r5
    mr r3, r30
    bl strcpy
    lis r31, lbl_8075561C@ha
    mr r3, r30
    addi r31, r31, lbl_8075561C@l
    addi r4, r31, 0x144
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8046DBF8_00000AA8
    addi r4, r31, 0x149
    li r5, 0x4
    bl fn_8068236C
lbl_fn_8046DBF8_00000AA8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046DC5C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r5
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    mr r4, r31
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80473FCC
    addi r3, r1, 0x8
    bl fn_8047059C
    stw r3, 0x0(r30)
    bl fn_800827E0
    lis r6, lbl_8075561C@ha
    lwz r4, 0x0(r30)
    addi r6, r6, lbl_8075561C@l
    li r5, 0x2
    addi r6, r6, 0x153
    li r8, 0x0
    mr r7, r6
    bl fn_800838AC
    mr r30, r3
    addi r3, r1, 0x8
    bl fn_8047059C
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl memcpy
    addi r3, r1, 0x8
    bl fn_80473F88
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80473E8C
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046DD20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    beq lbl_fn_8046DD20_00000BAC
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
lbl_fn_8046DD20_00000BAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046DD5C(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_8046DD60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r28, r3
    bl fn_8046C1C8
    lwz r27, 0x3ed4(r28)
    addi r29, r28, 0x3ed0
    cmplw r27, r29
    beq lbl_fn_8046DD60_00000D48
    addi r31, r28, 0x403c
    b lbl_fn_8046DD60_00000D40
lbl_fn_8046DD60_00000BF4:
    lwz r26, 0x8(r27)
    lbz r0, 0x4(r26)
    cmpwi r0, 0x2
    bne lbl_fn_8046DD60_00000C18
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8046DD60_00000C18:
    lwz r3, 0x4040(r28)
    b lbl_fn_8046DD60_00000C38
lbl_fn_8046DD60_00000C20:
    lwz r0, 0xc(r3)
    cmplw r0, r26
    bne lbl_fn_8046DD60_00000C34
    li r0, 0x1
    b lbl_fn_8046DD60_00000C44
lbl_fn_8046DD60_00000C34:
    lwz r3, 0x4(r3)
lbl_fn_8046DD60_00000C38:
    cmplw r3, r31
    bne lbl_fn_8046DD60_00000C20
    li r0, 0x0
lbl_fn_8046DD60_00000C44:
    cmpwi r0, 0x0
    bne lbl_fn_8046DD60_00000CD4
    lbz r3, 0x4(r26)
    cmpwi r3, 0x3
    beq lbl_fn_8046DD60_00000C64
    lbz r3, 0x4(r26)
    cmpwi r3, 0x4
    bne lbl_fn_8046DD60_00000CD4
lbl_fn_8046DD60_00000C64:
    lwz r0, 0x4c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8046DD60_00000C94
    cmpwi r26, 0x0
    beq lbl_fn_8046DD60_00000CA0
    lwz r12, 0x0(r26)
    mr r3, r26
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8046DD60_00000CA0
lbl_fn_8046DD60_00000C94:
    mr r3, r28
    mr r4, r26
    bl fn_8046F5CC
lbl_fn_8046DD60_00000CA0:
    lwz r4, 0x0(r27)
    mr r3, r27
    lwz r26, 0x4(r27)
    stw r26, 0x4(r4)
    lwz r4, 0x4(r27)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r4)
    bl dtor_80084684
    lwz r3, 0x3ecc(r28)
    mr r27, r26
    subi r0, r3, 0x1
    stw r0, 0x3ecc(r28)
    b lbl_fn_8046DD60_00000D40
lbl_fn_8046DD60_00000CD4:
    cmpwi r0, 0x0
    bne lbl_fn_8046DD60_00000D3C
    lbz r0, 0x4(r26)
    cmpwi r0, 0x5
    bne lbl_fn_8046DD60_00000D3C
    cmpwi r26, 0x0
    beq lbl_fn_8046DD60_00000D08
    lwz r12, 0x0(r26)
    mr r3, r26
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8046DD60_00000D08:
    lwz r4, 0x0(r27)
    mr r3, r27
    lwz r26, 0x4(r27)
    stw r26, 0x4(r4)
    lwz r4, 0x4(r27)
    lwz r0, 0x0(r27)
    stw r0, 0x0(r4)
    bl dtor_80084684
    lwz r3, 0x3ecc(r28)
    mr r27, r26
    subi r0, r3, 0x1
    stw r0, 0x3ecc(r28)
    b lbl_fn_8046DD60_00000D40
lbl_fn_8046DD60_00000D3C:
    lwz r27, 0x4(r27)
lbl_fn_8046DD60_00000D40:
    cmplw r27, r29
    bne lbl_fn_8046DD60_00000BF4
lbl_fn_8046DD60_00000D48:
    lwz r30, 0x4040(r28)
    addi r31, r28, 0x403c
    li r29, 0x0
    b lbl_fn_8046DD60_00000EA0
lbl_fn_8046DD60_00000D58:
    lwz r26, 0x8(r30)
    li r27, 0x0
    addi r3, r26, 0x10
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8046DD60_00000D84
    addi r3, r26, 0x10
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8046DD60_00000D84
    li r27, 0x1
lbl_fn_8046DD60_00000D84:
    cmpwi r27, 0x0
    beq lbl_fn_8046DD60_00000DE4
    lwz r4, 0x8(r30)
    mr r3, r28
    lwz r5, 0xc(r30)
    addi r6, r30, 0x10
    lwz r7, 0x50(r30)
    bl fn_8046C2D4
    lwz r4, 0x0(r30)
    mr r3, r30
    lwz r26, 0x4(r30)
    stw r26, 0x4(r4)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r4)
    bl dtor_80084684
    lwz r3, 0x4038(r28)
    addi r29, r29, 0x1
    cmpwi r29, 0x30
    mr r30, r26
    subi r0, r3, 0x1
    stw r0, 0x4038(r28)
    bgt lbl_fn_8046DD60_00000EA8
    b lbl_fn_8046DD60_00000EA0
lbl_fn_8046DD60_00000DE4:
    lwz r3, 0xc(r30)
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8046DD60_00000E9C
    lwz r5, 0x48(r3)
    addi r0, r28, 0x3ed0
    lwz r3, 0x3ed4(r28)
    b lbl_fn_8046DD60_00000E08
lbl_fn_8046DD60_00000E04:
    lwz r3, 0x4(r3)
lbl_fn_8046DD60_00000E08:
    cmplw r3, r0
    beq lbl_fn_8046DD60_00000E20
    lwz r4, 0x8(r3)
    lwz r4, 0x48(r4)
    cmplw r5, r4
    bne lbl_fn_8046DD60_00000E04
lbl_fn_8046DD60_00000E20:
    lwz r4, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    bl dtor_80084684
    lwz r3, 0x3ecc(r28)
    subi r0, r3, 0x1
    stw r0, 0x3ecc(r28)
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8046DD60_00000E68
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8046DD60_00000E68:
    lwz r4, 0x0(r30)
    mr r3, r30
    lwz r26, 0x4(r30)
    stw r26, 0x4(r4)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r4)
    bl dtor_80084684
    lwz r3, 0x4038(r28)
    mr r30, r26
    subi r0, r3, 0x1
    stw r0, 0x4038(r28)
    b lbl_fn_8046DD60_00000EA0
lbl_fn_8046DD60_00000E9C:
    lwz r30, 0x4(r30)
lbl_fn_8046DD60_00000EA0:
    cmplw r30, r31
    bne lbl_fn_8046DD60_00000D58
lbl_fn_8046DD60_00000EA8:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046E058(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r4, 0x3ee0(r3)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_fn_8046E058_00001104
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8046E058_00001104
    lwz r0, 0x3ef4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8046E058_00000F24
    li r5, 0x0
    stw r5, 0x3ee4(r3)
    lfs f0, lbl_80886EC0
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x3ee0(r3)
    stfs f0, 0x100(r4)
    stw r5, 0x3eec(r3)
    stw r5, 0x3ef0(r3)
lbl_fn_8046E058_00000F24:
    lwz r0, 0x3ee4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8046E058_0000107C
    lwz r4, 0x3ee0(r3)
    lfs f0, lbl_80886EC4
    stfs f0, 0x104(r4)
    lwz r4, 0x3ee8(r3)
    subic. r0, r4, 0x1
    stw r0, 0x3ee8(r3)
    bge lbl_fn_8046E058_00000F78
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8046E058_00000F78
    li r4, 0x0
    li r5, 0x4
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_8046E058_00000F78
    lwz r3, 0x3ee0(r31)
    lfs f0, lbl_80886EC8
    stfs f0, 0x104(r3)
lbl_fn_8046E058_00000F78:
    lwz r4, 0x3ee4(r31)
    lwz r3, 0x3ee0(r31)
    subi r0, r4, 0x1
    stw r0, 0x3ee4(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8046E058_00001104
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_8046E058_00000FB0
    bl fn_800A4460
    cmpwi r3, 0x0
    bne lbl_fn_8046E058_00001104
lbl_fn_8046E058_00000FB0:
    lwz r4, 0x3ee0(r31)
    li r0, 0x13
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    lwz r3, 0x3ee0(r31)
    stw r0, 0x108(r3)
    lwz r3, lbl_8087EEE0
    cmpwi r3, 0x0
    beq lbl_fn_8046E058_00001104
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8046E058_00001030
    lwz r4, 0x3ee0(r31)
    lis r29, lbl_8075561C@ha
    addi r29, r29, lbl_8075561C@l
    addi r3, r29, 0x15a
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886EC0
    mr r4, r3
    mr r3, r30
    bl fn_801FECE0
    lwz r4, 0x3ee0(r31)
    addi r3, r29, 0x15f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886EC0
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    b lbl_fn_8046E058_00001104
lbl_fn_8046E058_00001030:
    lwz r4, 0x3ee0(r31)
    lis r29, lbl_8075561C@ha
    addi r29, r29, lbl_8075561C@l
    addi r3, r29, 0x15a
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886ECC
    mr r4, r3
    mr r3, r30
    bl fn_801FECE0
    lwz r4, 0x3ee0(r31)
    addi r3, r29, 0x15f
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886ED0
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    b lbl_fn_8046E058_00001104
lbl_fn_8046E058_0000107C:
    lwz r6, 0x3ee0(r3)
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8046E058_00001104
    lfs f1, 0x100(r6)
    lfs f0, lbl_80886EC8
    fcmpo cr0, f1, f0
    blt lbl_fn_8046E058_000010B0
    lfs f0, lbl_80886ED4
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8046E058_000010DC
lbl_fn_8046E058_000010B0:
    lwz r5, 0x38(r6)
    li r4, 0x3c
    lfs f0, lbl_80886EC0
    li r0, 0x0
    ori r5, r5, 0x4
    stw r5, 0x38(r6)
    lwz r5, 0x3ee0(r3)
    stfs f0, 0x100(r5)
    stw r4, 0x3ee8(r3)
    stw r0, 0x3eec(r3)
    stw r0, 0x3ef0(r3)
lbl_fn_8046E058_000010DC:
    lwz r4, 0x3ee0(r31)
    lis r3, lbl_8075561C@ha
    addi r3, r3, lbl_8075561C@l
    addi r3, r3, 0x164
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886EC0
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
lbl_fn_8046E058_00001104:
    li r29, 0x0
    b lbl_fn_8046E058_00001118
lbl_fn_8046E058_0000110C:
    stw r29, 0x3edc(r31)
    mr r3, r31
    bl fn_8046E410
lbl_fn_8046E058_00001118:
    lwz r0, 0x3edc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8046E058_0000110C
    lwz r30, 0x4028(r31)
    addi r28, r31, 0x4024
    b lbl_fn_8046E058_00001250
lbl_fn_8046E058_00001130:
    lwz r27, 0x8(r30)
    lwz r0, 0x2c(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_8046E058_00001244
    lwz r5, 0x4040(r31)
    addi r4, r31, 0x403c
    li r6, 0x0
    b lbl_fn_8046E058_00001168
lbl_fn_8046E058_00001150:
    lwz r0, 0x8(r5)
    cmplw r0, r27
    bne lbl_fn_8046E058_00001164
    li r6, 0x1
    b lbl_fn_8046E058_00001170
lbl_fn_8046E058_00001164:
    lwz r5, 0x4(r5)
lbl_fn_8046E058_00001168:
    cmplw r5, r4
    bne lbl_fn_8046E058_00001150
lbl_fn_8046E058_00001170:
    cmpwi r6, 0x0
    bne lbl_fn_8046E058_00001234
    lwz r0, 0x74(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8046E058_000011F4
    lwz r4, 0x0(r30)
    lwz r29, 0x4(r30)
    stw r29, 0x4(r4)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r4)
    bl dtor_80084684
    lwz r3, 0x4020(r31)
    cmpwi r27, 0x0
    mr r30, r29
    subi r0, r3, 0x1
    stw r0, 0x4020(r31)
    beq lbl_fn_8046E058_00001250
    addic. r3, r27, 0x1c
    beq lbl_fn_8046E058_000011C8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8046E058_000011C8:
    addic. r3, r27, 0x10
    beq lbl_fn_8046E058_000011D8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8046E058_000011D8:
    addic. r3, r27, 0x8
    beq lbl_fn_8046E058_000011E8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8046E058_000011E8:
    mr r3, r27
    bl dtor_80084684
    b lbl_fn_8046E058_00001250
lbl_fn_8046E058_000011F4:
    addi r3, r27, 0x10
    li r29, 0x0
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8046E058_0000121C
    addi r3, r27, 0x10
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8046E058_0000121C
    li r29, 0x1
lbl_fn_8046E058_0000121C:
    cmpwi r29, 0x0
    beq lbl_fn_8046E058_0000122C
    addi r3, r27, 0x10
    bl fn_80473F88
lbl_fn_8046E058_0000122C:
    lwz r30, 0x4(r30)
    b lbl_fn_8046E058_00001250
lbl_fn_8046E058_00001234:
    mr r3, r27
    bl fn_804702BC
    lwz r30, 0x4(r30)
    b lbl_fn_8046E058_00001250
lbl_fn_8046E058_00001244:
    mr r3, r27
    bl fn_804702BC
    lwz r30, 0x4(r30)
lbl_fn_8046E058_00001250:
    cmplw r30, r28
    mr r3, r30
    bne lbl_fn_8046E058_00001130
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046E410(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r31, r3
    lwz r4, 0x48(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8046E410_000013AC
    subi r27, r4, 0x1
    addi r29, r3, 0x4c
    slwi r0, r27, 2
    mr r30, r31
    add r3, r3, r0
    li r26, 0x0
    addi r28, r3, 0x4c
    b lbl_fn_8046E410_00001308
lbl_fn_8046E410_000012B4:
    lwz r3, 0x4c(r30)
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8046E410_000012FC
    lwz r4, 0x0(r28)
    cmpwi r3, 0x0
    lwz r0, 0x0(r29)
    stw r0, 0x0(r28)
    stw r4, 0x0(r29)
    beq lbl_fn_8046E410_000012F0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8046E410_000012F0:
    subi r28, r28, 0x4
    subi r27, r27, 0x1
    b lbl_fn_8046E410_00001308
lbl_fn_8046E410_000012FC:
    addi r30, r30, 0x4
    addi r29, r29, 0x4
    addi r26, r26, 0x1
lbl_fn_8046E410_00001308:
    cmplw r26, r27
    blt lbl_fn_8046E410_000012B4
    lwz r3, 0x48(r31)
    subi r0, r3, 0x1
    cmplw r27, r0
    bge lbl_fn_8046E410_00001388
    addi r3, r27, 0x1
    lwz r0, 0x48(r31)
    slwi r3, r3, 2
    srawi r3, r3, 2
    slwi r0, r0, 2
    addze r4, r3
    srawi r0, r0, 2
    addze r3, r0
    slwi r0, r4, 2
    subf r6, r4, r3
    add r3, r31, r0
    b lbl_fn_8046E410_0000136C
lbl_fn_8046E410_00001350:
    add r0, r4, r6
    cmplw r0, r5
    bgt lbl_fn_8046E410_0000137C
    lwz r0, 0x50(r3)
    addi r4, r4, 0x1
    stw r0, 0x4c(r3)
    addi r3, r3, 0x4
lbl_fn_8046E410_0000136C:
    lwz r5, 0x48(r31)
    subi r0, r5, 0x1
    cmplw r4, r0
    blt lbl_fn_8046E410_00001350
lbl_fn_8046E410_0000137C:
    lwz r0, 0x48(r31)
    subf r0, r6, r0
    stw r0, 0x48(r31)
lbl_fn_8046E410_00001388:
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r31, 0x4c
    addi r5, r1, 0x8
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r4, r31, r0
    addi r4, r4, 0x4c
    bl fn_8046E55C
lbl_fn_8046E410_000013AC:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8046E55C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
lbl_fn_8046E55C_000013E4:
    subf r0, r26, r27
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_8046E55C_000016E0
    cmpwi r7, 0x14
    bgt lbl_fn_8046E55C_00001474
    cmplw r26, r27
    beq lbl_fn_8046E55C_000016E0
    subi r0, r27, 0x4
    b lbl_fn_8046E55C_00001468
lbl_fn_8046E55C_00001410:
    cmplw r26, r27
    mr r5, r26
    beq lbl_fn_8046E55C_0000144C
    addi r6, r26, 0x4
    b lbl_fn_8046E55C_00001444
lbl_fn_8046E55C_00001424:
    lwz r4, 0x0(r6)
    lwz r3, 0x0(r5)
    lwz r4, 0x48(r4)
    lwz r3, 0x48(r3)
    cmplw r4, r3
    bge lbl_fn_8046E55C_00001440
    mr r5, r6
lbl_fn_8046E55C_00001440:
    addi r6, r6, 0x4
lbl_fn_8046E55C_00001444:
    cmplw r6, r27
    bne lbl_fn_8046E55C_00001424
lbl_fn_8046E55C_0000144C:
    cmplw r5, r26
    beq lbl_fn_8046E55C_00001464
    lwz r4, 0x0(r5)
    lwz r3, 0x0(r26)
    stw r3, 0x0(r5)
    stw r4, 0x0(r26)
lbl_fn_8046E55C_00001464:
    addi r26, r26, 0x4
lbl_fn_8046E55C_00001468:
    cmplw r26, r0
    bne lbl_fn_8046E55C_00001410
    b lbl_fn_8046E55C_000016E0
lbl_fn_8046E55C_00001474:
    lwz r4, lbl_8087E050
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    slwi r0, r0, 2
    add r3, r26, r0
    blt lbl_fn_8046E55C_000014B4
    li r6, -0x4
lbl_fn_8046E55C_000014B4:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E050
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    slwi r0, r0, 2
    add r4, r26, r0
    blt lbl_fn_8046E55C_00001500
    li r6, -0x4
    stw r6, lbl_8087E050
lbl_fn_8046E55C_00001500:
    subi r29, r27, 0x4
    mr r6, r28
    mr r5, r29
    bl fn_8046EBC4
    lwz r3, 0x0(r29)
    mr r30, r26
    mr r5, r29
    lwz r4, 0x48(r3)
    b lbl_fn_8046E55C_00001528
lbl_fn_8046E55C_00001524:
    addi r30, r30, 0x4
lbl_fn_8046E55C_00001528:
    lwz r3, 0x0(r30)
    lwz r0, 0x48(r3)
    cmplw r0, r4
    blt lbl_fn_8046E55C_00001524
lbl_fn_8046E55C_00001538:
    subi r5, r5, 0x4
    cmplw r30, r5
    beq lbl_fn_8046E55C_00001554
    lwz r3, 0x0(r5)
    lwz r0, 0x48(r3)
    cmplw r0, r4
    bge lbl_fn_8046E55C_00001538
lbl_fn_8046E55C_00001554:
    cmplw r30, r5
    bge lbl_fn_8046E55C_000015C0
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_8046E55C_00001578
lbl_fn_8046E55C_00001574:
    addi r30, r30, 0x4
lbl_fn_8046E55C_00001578:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lwz r4, 0x48(r4)
    lwz r0, 0x48(r3)
    cmplw r0, r4
    blt lbl_fn_8046E55C_00001574
lbl_fn_8046E55C_00001590:
    lwzu r3, -0x4(r5)
    lwz r0, 0x48(r3)
    cmplw r0, r4
    bge lbl_fn_8046E55C_00001590
    cmplw r30, r5
    bge lbl_fn_8046E55C_000015C0
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_8046E55C_00001578
lbl_fn_8046E55C_000015C0:
    cmplw r30, r26
    bne lbl_fn_8046E55C_00001690
    lwz r3, 0x0(r30)
    subi r5, r27, 0x4
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    lwz r4, -0x4(r27)
    lwz r3, 0x0(r26)
    lwz r0, 0x48(r4)
    lwz r4, 0x48(r3)
    cmplw r4, r0
    blt lbl_fn_8046E55C_00001630
    b lbl_fn_8046E55C_00001600
lbl_fn_8046E55C_000015FC:
    addi r30, r30, 0x4
lbl_fn_8046E55C_00001600:
    cmplw r30, r27
    beq lbl_fn_8046E55C_00001618
    lwz r3, 0x0(r30)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    bge lbl_fn_8046E55C_000015FC
lbl_fn_8046E55C_00001618:
    cmplw r30, r5
    bge lbl_fn_8046E55C_00001630
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    stw r3, 0x0(r5)
lbl_fn_8046E55C_00001630:
    cmplw r30, r5
    bge lbl_fn_8046E55C_00001688
    b lbl_fn_8046E55C_00001640
lbl_fn_8046E55C_0000163C:
    addi r30, r30, 0x4
lbl_fn_8046E55C_00001640:
    lwz r4, 0x0(r26)
    lwz r3, 0x0(r30)
    lwz r4, 0x48(r4)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    bge lbl_fn_8046E55C_0000163C
lbl_fn_8046E55C_00001658:
    lwzu r3, -0x4(r5)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    blt lbl_fn_8046E55C_00001658
    cmplw r30, r5
    bge lbl_fn_8046E55C_00001688
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_8046E55C_00001640
lbl_fn_8046E55C_00001688:
    mr r26, r30
    b lbl_fn_8046E55C_000013E4
lbl_fn_8046E55C_00001690:
    subf r3, r26, r30
    subf r0, r30, r27
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_8046E55C_000016C8
    mr r3, r26
    mr r4, r30
    mr r5, r28
    bl fn_8046E890
    mr r26, r30
    b lbl_fn_8046E55C_000013E4
lbl_fn_8046E55C_000016C8:
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl fn_8046E890
    mr r27, r30
    b lbl_fn_8046E55C_000013E4
lbl_fn_8046E55C_000016E0:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046E890(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
lbl_fn_8046E890_00001718:
    subf r0, r26, r27
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_8046E890_00001A14
    cmpwi r7, 0x14
    bgt lbl_fn_8046E890_000017A8
    cmplw r26, r27
    beq lbl_fn_8046E890_00001A14
    subi r0, r27, 0x4
    b lbl_fn_8046E890_0000179C
lbl_fn_8046E890_00001744:
    cmplw r26, r27
    mr r5, r26
    beq lbl_fn_8046E890_00001780
    addi r6, r26, 0x4
    b lbl_fn_8046E890_00001778
lbl_fn_8046E890_00001758:
    lwz r4, 0x0(r6)
    lwz r3, 0x0(r5)
    lwz r4, 0x48(r4)
    lwz r3, 0x48(r3)
    cmplw r4, r3
    bge lbl_fn_8046E890_00001774
    mr r5, r6
lbl_fn_8046E890_00001774:
    addi r6, r6, 0x4
lbl_fn_8046E890_00001778:
    cmplw r6, r27
    bne lbl_fn_8046E890_00001758
lbl_fn_8046E890_00001780:
    cmplw r5, r26
    beq lbl_fn_8046E890_00001798
    lwz r4, 0x0(r5)
    lwz r3, 0x0(r26)
    stw r3, 0x0(r5)
    stw r4, 0x0(r26)
lbl_fn_8046E890_00001798:
    addi r26, r26, 0x4
lbl_fn_8046E890_0000179C:
    cmplw r26, r0
    bne lbl_fn_8046E890_00001744
    b lbl_fn_8046E890_00001A14
lbl_fn_8046E890_000017A8:
    lwz r4, lbl_8087E054
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    slwi r0, r0, 2
    add r3, r26, r0
    blt lbl_fn_8046E890_000017E8
    li r6, -0x4
lbl_fn_8046E890_000017E8:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E054
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    slwi r0, r0, 2
    add r4, r26, r0
    blt lbl_fn_8046E890_00001834
    li r6, -0x4
    stw r6, lbl_8087E054
lbl_fn_8046E890_00001834:
    subi r29, r27, 0x4
    mr r6, r28
    mr r5, r29
    bl fn_8046EBC4
    lwz r3, 0x0(r29)
    mr r30, r26
    mr r5, r29
    lwz r4, 0x48(r3)
    b lbl_fn_8046E890_0000185C
lbl_fn_8046E890_00001858:
    addi r30, r30, 0x4
lbl_fn_8046E890_0000185C:
    lwz r3, 0x0(r30)
    lwz r0, 0x48(r3)
    cmplw r0, r4
    blt lbl_fn_8046E890_00001858
lbl_fn_8046E890_0000186C:
    subi r5, r5, 0x4
    cmplw r30, r5
    beq lbl_fn_8046E890_00001888
    lwz r3, 0x0(r5)
    lwz r0, 0x48(r3)
    cmplw r0, r4
    bge lbl_fn_8046E890_0000186C
lbl_fn_8046E890_00001888:
    cmplw r30, r5
    bge lbl_fn_8046E890_000018F4
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_8046E890_000018AC
lbl_fn_8046E890_000018A8:
    addi r30, r30, 0x4
lbl_fn_8046E890_000018AC:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lwz r4, 0x48(r4)
    lwz r0, 0x48(r3)
    cmplw r0, r4
    blt lbl_fn_8046E890_000018A8
lbl_fn_8046E890_000018C4:
    lwzu r3, -0x4(r5)
    lwz r0, 0x48(r3)
    cmplw r0, r4
    bge lbl_fn_8046E890_000018C4
    cmplw r30, r5
    bge lbl_fn_8046E890_000018F4
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_8046E890_000018AC
lbl_fn_8046E890_000018F4:
    cmplw r30, r26
    bne lbl_fn_8046E890_000019C4
    lwz r3, 0x0(r30)
    subi r5, r27, 0x4
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    lwz r4, -0x4(r27)
    lwz r3, 0x0(r26)
    lwz r0, 0x48(r4)
    lwz r4, 0x48(r3)
    cmplw r4, r0
    blt lbl_fn_8046E890_00001964
    b lbl_fn_8046E890_00001934
lbl_fn_8046E890_00001930:
    addi r30, r30, 0x4
lbl_fn_8046E890_00001934:
    cmplw r30, r27
    beq lbl_fn_8046E890_0000194C
    lwz r3, 0x0(r30)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    bge lbl_fn_8046E890_00001930
lbl_fn_8046E890_0000194C:
    cmplw r30, r5
    bge lbl_fn_8046E890_00001964
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    stw r3, 0x0(r5)
lbl_fn_8046E890_00001964:
    cmplw r30, r5
    bge lbl_fn_8046E890_000019BC
    b lbl_fn_8046E890_00001974
lbl_fn_8046E890_00001970:
    addi r30, r30, 0x4
lbl_fn_8046E890_00001974:
    lwz r4, 0x0(r26)
    lwz r3, 0x0(r30)
    lwz r4, 0x48(r4)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    bge lbl_fn_8046E890_00001970
lbl_fn_8046E890_0000198C:
    lwzu r3, -0x4(r5)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    blt lbl_fn_8046E890_0000198C
    cmplw r30, r5
    bge lbl_fn_8046E890_000019BC
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r5)
    b lbl_fn_8046E890_00001974
lbl_fn_8046E890_000019BC:
    mr r26, r30
    b lbl_fn_8046E890_00001718
lbl_fn_8046E890_000019C4:
    subf r3, r26, r30
    subf r0, r30, r27
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_8046E890_000019FC
    mr r3, r26
    mr r4, r30
    mr r5, r28
    bl fn_8046E890
    mr r26, r30
    b lbl_fn_8046E890_00001718
lbl_fn_8046E890_000019FC:
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl fn_8046E890
    mr r27, r30
    b lbl_fn_8046E890_00001718
lbl_fn_8046E890_00001A14:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
