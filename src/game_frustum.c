#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void fn_8008B140(void);
extern void fn_800902C0(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800D58A4(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800EF91C(void);
extern void fn_80103600(void);
extern void fn_80103E60(void);
extern void fn_80103FD4(void);
extern void fn_801055A8(void);
extern void fn_80107584(void);
extern void fn_801081D8(void);
extern void fn_80109F7C(void);
extern void fn_8010A868(void);
extern void fn_8010ACCC(void);
extern void fn_8010AEF4(void);
extern void fn_8010C3E4(void);
extern void fn_80154488(void);
extern void fn_801656A4(void);
extern void fn_8016E484(void);
extern void fn_8016F368(void);
extern void fn_8016F3D0(void);
extern void fn_801F3FF8(void);
extern void fn_8020BD78(void);
extern void fn_80219558(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_8023772C(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8036554C(void);
extern void fn_80370174(void);
extern void fn_80375184(void);
extern void fn_803761BC(void);
extern void fn_8059AFDC(void);
extern void fn_8059B0F4(void);
extern void fn_8059B1B8(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80695B00(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80735988[];
extern u8 lbl_80735A48[];
extern u8 lbl_80735A94[];
extern u8 lbl_80735DD0[];
extern u8 lbl_80736040[];
extern u8 lbl_80779D98[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808813D4;
extern u32 lbl_808813D8;
extern u32 lbl_808813DC;
extern u32 lbl_808813E0;
extern u32 lbl_808813E4;
extern u32 lbl_808813E8;
extern u32 lbl_808813EC;
extern u32 lbl_808813F0;
extern u32 lbl_808813F4;
extern u32 lbl_808813F8;
extern u32 lbl_808813FC;
extern u32 lbl_80881400;
extern u32 lbl_80881404;
extern u32 lbl_80881408;
extern u32 lbl_8088140C;
extern u32 lbl_80881410;
extern u32 lbl_80881414;
extern u32 lbl_80881418;
extern u32 lbl_8088141C;
extern u32 lbl_80881420;
extern u32 lbl_80881424;
extern u32 lbl_80881428;
extern u32 lbl_8088142C;
extern u32 lbl_80881430;
extern u32 lbl_80881434;
extern u32 lbl_80881438;
extern u32 lbl_8088143C;
extern u32 lbl_80881440;
extern u32 lbl_80881444;
extern u32 lbl_80881448;
extern u32 lbl_8088144C;
extern u32 lbl_80881450;
extern u32 lbl_80881454;
extern u32 lbl_80881458;
extern u32 lbl_8088145C;
extern u32 lbl_80881460;
extern u32 lbl_80881468;
extern u32 lbl_8088146C;
extern u32 lbl_80881470;
extern u32 lbl_80881474;
extern u32 lbl_80881478;
extern u32 lbl_80881484;
extern u32 lbl_8088148C;
extern u32 lbl_80881494;
extern u32 lbl_808814B8;
extern u32 lbl_808814BC;
extern u32 lbl_808814C0;
extern u32 lbl_808814C4;
extern u32 lbl_808814C8;

/* Function declarations */
void fn_800F2BB8(void);
void fn_800F2BE4(void);
void fn_800F2C9C(void);
void fn_800F3170(void);
void fn_800F3490(void);
void fn_800F39A4(void);
void fn_800F3B4C(void);
void fn_800F3D28(void);
void fn_800F3EF4(void);

asm void fn_800F2BB8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800F2BE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_800F2BE4_00000060
    lis r3, lbl_80779D98@ha
    addi r3, r3, lbl_80779D98@l
    stw r3, 0x0(r4)
    b lbl_fn_800F2BE4_000000CC
lbl_fn_800F2BE4_00000060:
    cmpwi r5, 0x0
    bne lbl_fn_800F2BE4_00000094
    cmpwi r4, 0x0
    beq lbl_fn_800F2BE4_000000CC
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_800F2BE4_000000CC
lbl_fn_800F2BE4_00000094:
    cmpwi r5, 0x1
    beq lbl_fn_800F2BE4_000000CC
    lwz r5, 0x0(r4)
    lis r3, lbl_80779D98@ha
    lwz r4, lbl_80779D98@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800F2BE4_000000C4
    stw r30, 0x0(r31)
    b lbl_fn_800F2BE4_000000CC
lbl_fn_800F2BE4_000000C4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_800F2BE4_000000CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800F2C9C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    addis r5, r3, 0x4
    stw r0, 0x124(r1)
    stmw r26, 0x108(r1)
    mr r31, r3
    lwz r0, -0x1c6c(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800F2C9C_000005A4
    lis r4, lbl_80736040@ha
    addis r28, r3, 0x3
    li r0, 0x1
    stw r0, -0x1c6c(r5)
    addi r30, r4, lbl_80736040@l
    li r27, 0x0
    addi r28, r28, 0x63f0
lbl_fn_800F2C9C_00000124:
    mr r29, r28
    li r26, 0x0
lbl_fn_800F2C9C_0000012C:
    cmpwi r27, 0x0
    bne lbl_fn_800F2C9C_0000014C
    mr r5, r26
    addi r3, r1, 0x8
    addi r4, r30, 0x37
    crclr 6
    bl sprintf
    b lbl_fn_800F2C9C_0000017C
lbl_fn_800F2C9C_0000014C:
    cmpwi r27, 0x1
    bne lbl_fn_800F2C9C_0000016C
    mr r5, r26
    addi r3, r1, 0x8
    addi r4, r30, 0x52
    crclr 6
    bl sprintf
    b lbl_fn_800F2C9C_0000017C
lbl_fn_800F2C9C_0000016C:
    addi r3, r1, 0x8
    addi r4, r30, 0x6d
    crclr 6
    bl sprintf
lbl_fn_800F2C9C_0000017C:
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_80237654
    addi r26, r26, 0x1
    addi r29, r29, 0xc
    cmpwi r26, 0x7
    blt lbl_fn_800F2C9C_0000012C
    addi r27, r27, 0x1
    addi r28, r28, 0x54
    cmpwi r27, 0x3
    blt lbl_fn_800F2C9C_00000124
    addis r29, r31, 0x3
    lis r30, lbl_80736040@ha
    addi r28, r29, 0x6558
    li r26, 0x0
    addi r30, r30, lbl_80736040@l
    addi r29, r29, 0x651c
lbl_fn_800F2C9C_000001C0:
    mr r5, r26
    addi r3, r1, 0x8
    addi r4, r30, 0x84
    crclr 6
    bl sprintf
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_80237654
    mr r5, r26
    addi r3, r1, 0x8
    addi r4, r30, 0xa3
    crclr 6
    bl sprintf
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_80237654
    addi r26, r26, 0x1
    addi r28, r28, 0xc
    cmpwi r26, 0x5
    addi r29, r29, 0xc
    blt lbl_fn_800F2C9C_000001C0
    addis r30, r31, 0x3
    lis r29, lbl_80735A94@ha
    addi r29, r29, lbl_80735A94@l
    li r26, 0x0
    addi r30, r30, 0x6594
lbl_fn_800F2C9C_00000228:
    lwz r4, 0x0(r29)
    mr r3, r30
    bl fn_80237654
    addi r26, r26, 0x1
    addi r30, r30, 0xc
    cmpwi r26, 0x3
    addi r29, r29, 0x4
    blt lbl_fn_800F2C9C_00000228
    addis r3, r31, 0x3
    lwz r4, lbl_80881474
    addi r3, r3, 0x65b8
    bl fn_8023780C
    lis r30, lbl_80736040@ha
    addis r3, r31, 0x3
    addi r30, r30, lbl_80736040@l
    addi r4, r30, 0xc2
    addi r3, r3, 0x65c4
    bl fn_8023780C
    addis r3, r31, 0x3
    lwz r4, lbl_808813E0
    addi r3, r3, 0x63c0
    bl fn_8023780C
    addis r3, r31, 0x3
    lwz r4, lbl_808813E4
    addi r3, r3, 0x63cc
    bl fn_8023780C
    addis r3, r31, 0x3
    lwz r4, lbl_808813E8
    addi r3, r3, 0x63d8
    bl fn_8023780C
    addis r3, r31, 0x3
    lwz r4, lbl_808813EC
    addi r3, r3, 0x63e4
    bl fn_8023780C
    addis r3, r31, 0x1
    lwz r4, lbl_808813DC
    subi r3, r3, 0x3484
    bl fn_800D5908
    addis r3, r31, 0x3
    lwz r4, lbl_808813F0
    addi r3, r3, 0x64ec
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_8088140C
    subi r3, r3, 0x750c
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0xd0
    subi r3, r3, 0x7500
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881410
    subi r3, r3, 0x74f4
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881414
    subi r3, r3, 0x74e8
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881418
    subi r3, r3, 0x74dc
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0xde
    subi r3, r3, 0x74d0
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_8088141C
    subi r3, r3, 0x74c4
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0xec
    subi r3, r3, 0x74b8
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881420
    subi r3, r3, 0x74ac
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0xfa
    subi r3, r3, 0x74a0
    bl fn_8023780C
    lwz r28, lbl_80881424
    addis r3, r31, 0x4
    subi r3, r3, 0x7494
    mr r4, r28
    bl fn_8023780C
    lwz r29, lbl_80881428
    addis r3, r31, 0x4
    subi r3, r3, 0x7488
    mr r4, r29
    bl fn_8023780C
    lwz r27, lbl_8088142C
    addis r3, r31, 0x4
    subi r3, r3, 0x747c
    mr r4, r27
    bl fn_8023780C
    addis r3, r31, 0x4
    mr r4, r28
    subi r3, r3, 0x7470
    bl fn_8023780C
    addis r3, r31, 0x4
    mr r4, r29
    subi r3, r3, 0x7464
    bl fn_8023780C
    addis r3, r31, 0x4
    mr r4, r27
    subi r3, r3, 0x7458
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881434
    subi r3, r3, 0x744c
    bl fn_8023780C
    lwz r27, lbl_80881438
    addis r3, r31, 0x4
    subi r3, r3, 0x7440
    mr r4, r27
    bl fn_8023780C
    addis r3, r31, 0x4
    mr r4, r27
    subi r3, r3, 0x7434
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_8088143C
    subi r3, r3, 0x7428
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881440
    subi r3, r3, 0x741c
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881444
    subi r3, r3, 0x7410
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881448
    subi r3, r3, 0x7404
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_8088144C
    subi r3, r3, 0x73f8
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881450
    subi r3, r3, 0x73e0
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881454
    subi r3, r3, 0x73d4
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881458
    subi r3, r3, 0x73c8
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_8088145C
    subi r3, r3, 0x73bc
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881430
    subi r3, r3, 0x760c
    bl fn_80237654
    addis r3, r31, 0x4
    lwz r4, lbl_80881460
    subi r3, r3, 0x73b0
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0x108
    subi r3, r3, 0x73a4
    bl fn_8023780C
    addis r3, r31, 0x4
    lwz r4, lbl_80881468
    subi r3, r3, 0x7398
    bl fn_8023780C
    addis r3, r31, 0x3
    lwz r4, lbl_8088146C
    addi r3, r3, 0x65d0
    bl fn_8023780C
    addis r3, r31, 0x3
    lwz r4, lbl_80881470
    addi r3, r3, 0x65dc
    bl fn_8023780C
    addis r29, r31, 0x3
    lis r30, lbl_80735A48@ha
    addi r30, r30, lbl_80735A48@l
    li r26, 0x0
    addi r29, r29, 0x65e8
lbl_fn_800F2C9C_00000514:
    lwz r4, 0x0(r30)
    mr r3, r29
    bl fn_8023780C
    addi r26, r26, 0x1
    addi r29, r29, 0xc
    cmpwi r26, 0x7
    addi r30, r30, 0x4
    blt lbl_fn_800F2C9C_00000514
    lis r30, lbl_80736040@ha
    addis r3, r31, 0x4
    addi r30, r30, lbl_80736040@l
    addi r4, r30, 0x115
    subi r3, r3, 0x1cb8
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0x123
    subi r3, r3, 0x1cac
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0x131
    subi r3, r3, 0x1ca0
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0x13f
    subi r3, r3, 0x1c94
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0x14d
    subi r3, r3, 0x1c88
    bl fn_8023780C
    addis r3, r31, 0x4
    addi r4, r30, 0x15b
    subi r3, r3, 0x1c7c
    bl fn_8023780C
    lwz r3, lbl_8087F9E8
    bl fn_8059AFDC
lbl_fn_800F2C9C_000005A4:
    lmw r26, 0x108(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_800F3170(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addis r4, r3, 0x4
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    lwz r0, -0x1c6c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800F3170_000008C4
    addis r29, r3, 0x3
    li r0, 0x0
    stw r0, -0x1c6c(r4)
    li r28, 0x0
    addi r29, r29, 0x63f0
lbl_fn_800F3170_000005F0:
    mr r30, r29
    li r27, 0x0
lbl_fn_800F3170_000005F8:
    mr r3, r30
    bl fn_8023772C
    addi r27, r27, 0x1
    addi r30, r30, 0xc
    cmpwi r27, 0x7
    blt lbl_fn_800F3170_000005F8
    addi r28, r28, 0x1
    addi r29, r29, 0x54
    cmpwi r28, 0x3
    blt lbl_fn_800F3170_000005F0
    addis r29, r31, 0x3
    li r27, 0x0
    addi r30, r29, 0x6558
    addi r29, r29, 0x651c
lbl_fn_800F3170_00000630:
    mr r3, r29
    bl fn_8023772C
    mr r3, r30
    bl fn_8023772C
    addi r27, r27, 0x1
    addi r30, r30, 0xc
    cmpwi r27, 0x5
    addi r29, r29, 0xc
    blt lbl_fn_800F3170_00000630
    addis r29, r31, 0x3
    li r27, 0x0
    addi r29, r29, 0x6594
lbl_fn_800F3170_00000660:
    mr r3, r29
    bl fn_8023772C
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmpwi r27, 0x3
    blt lbl_fn_800F3170_00000660
    addis r3, r31, 0x3
    addi r3, r3, 0x65b8
    bl fn_8023781C
    addis r3, r31, 0x3
    addi r3, r3, 0x65c4
    bl fn_8023781C
    addis r3, r31, 0x3
    addi r3, r3, 0x63c0
    bl fn_8023781C
    addis r3, r31, 0x3
    addi r3, r3, 0x63cc
    bl fn_8023781C
    addis r3, r31, 0x3
    addi r3, r3, 0x63d8
    bl fn_8023781C
    addis r3, r31, 0x3
    addi r3, r3, 0x63e4
    bl fn_8023781C
    addis r3, r31, 0x1
    subi r3, r3, 0x3484
    bl fn_800D58A4
    addis r3, r31, 0x3
    addi r3, r3, 0x64ec
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x750c
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x7500
    bl fn_8023781C
    addis r29, r31, 0x4
    li r27, 0x0
    subi r29, r29, 0x74f4
lbl_fn_800F3170_000006FC:
    mr r3, r29
    bl fn_8023781C
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmpwi r27, 0x3
    blt lbl_fn_800F3170_000006FC
    addis r3, r31, 0x4
    subi r3, r3, 0x74d0
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x74c4
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x74b8
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x74ac
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x74a0
    bl fn_8023781C
    addis r30, r31, 0x4
    li r27, 0x0
    subi r29, r30, 0x7470
    subi r30, r30, 0x7494
lbl_fn_800F3170_00000760:
    mr r3, r30
    bl fn_8023781C
    mr r3, r29
    bl fn_8023781C
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmpwi r27, 0x3
    addi r30, r30, 0xc
    blt lbl_fn_800F3170_00000760
    addis r3, r31, 0x4
    subi r3, r3, 0x744c
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x741c
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x7410
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x7404
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x7440
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x7434
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x7428
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x73f8
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x73e0
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x73d4
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x73c8
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x73bc
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x760c
    bl fn_8023772C
    addis r3, r31, 0x4
    subi r3, r3, 0x73b0
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x73a4
    bl fn_8023781C
    addis r3, r31, 0x4
    subi r3, r3, 0x7398
    bl fn_8023781C
    addis r3, r31, 0x3
    addi r3, r3, 0x65d0
    bl fn_8023781C
    addis r3, r31, 0x3
    addi r3, r3, 0x65dc
    bl fn_8023781C
    addis r30, r31, 0x3
    li r27, 0x0
    addi r30, r30, 0x65e8
lbl_fn_800F3170_00000868:
    mr r3, r30
    bl fn_8023781C
    addi r27, r27, 0x1
    addi r30, r30, 0xc
    cmpwi r27, 0x7
    blt lbl_fn_800F3170_00000868
    addis r31, r31, 0x4
    li r27, 0x0
    subi r31, r31, 0x1cb8
lbl_fn_800F3170_0000088C:
    mr r30, r31
    li r28, 0x0
lbl_fn_800F3170_00000894:
    mr r3, r30
    bl fn_8023781C
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmpwi r28, 0x3
    blt lbl_fn_800F3170_00000894
    addi r27, r27, 0x1
    addi r31, r31, 0x24
    cmpwi r27, 0x2
    blt lbl_fn_800F3170_0000088C
    lwz r3, lbl_8087F9E8
    bl fn_8059B0F4
lbl_fn_800F3170_000008C4:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800F3490(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r31, r3
    li r28, 0x0
    bl fn_800EF91C
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000900
    li r28, 0x1
lbl_fn_800F3490_00000900:
    addis r29, r31, 0x3
    li r27, 0x0
    addi r29, r29, 0x63f0
lbl_fn_800F3490_0000090C:
    mr r30, r29
    li r26, 0x0
lbl_fn_800F3490_00000914:
    mr r3, r30
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000928
    li r28, 0x1
lbl_fn_800F3490_00000928:
    addi r26, r26, 0x1
    addi r30, r30, 0xc
    cmpwi r26, 0x7
    blt lbl_fn_800F3490_00000914
    addi r27, r27, 0x1
    addi r29, r29, 0x54
    cmpwi r27, 0x3
    blt lbl_fn_800F3490_0000090C
    addis r29, r31, 0x3
    li r26, 0x0
    addi r30, r29, 0x6558
    addi r29, r29, 0x651c
lbl_fn_800F3490_00000958:
    mr r3, r29
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_0000096C
    li r28, 0x1
lbl_fn_800F3490_0000096C:
    mr r3, r30
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000980
    li r28, 0x1
lbl_fn_800F3490_00000980:
    addi r26, r26, 0x1
    addi r30, r30, 0xc
    cmpwi r26, 0x5
    addi r29, r29, 0xc
    blt lbl_fn_800F3490_00000958
    addis r29, r31, 0x3
    li r26, 0x0
    addi r29, r29, 0x6594
lbl_fn_800F3490_000009A0:
    mr r3, r29
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_000009B4
    li r28, 0x1
lbl_fn_800F3490_000009B4:
    addi r26, r26, 0x1
    addi r29, r29, 0xc
    cmpwi r26, 0x3
    blt lbl_fn_800F3490_000009A0
    addis r3, r31, 0x3
    addi r3, r3, 0x65b8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_000009EC
    addis r3, r31, 0x3
    addi r3, r3, 0x65c4
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_000009F0
lbl_fn_800F3490_000009EC:
    li r28, 0x1
lbl_fn_800F3490_000009F0:
    addis r3, r31, 0x3
    addi r3, r3, 0x63c0
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000A08
    li r28, 0x1
lbl_fn_800F3490_00000A08:
    addis r3, r31, 0x3
    addi r3, r3, 0x63cc
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000A20
    li r28, 0x1
lbl_fn_800F3490_00000A20:
    addis r3, r31, 0x3
    addi r3, r3, 0x63d8
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000A38
    li r28, 0x1
lbl_fn_800F3490_00000A38:
    addis r3, r31, 0x3
    addi r3, r3, 0x63e4
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000A50
    li r28, 0x1
lbl_fn_800F3490_00000A50:
    addis r3, r31, 0x1
    subi r3, r3, 0x3484
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000A68
    li r28, 0x1
lbl_fn_800F3490_00000A68:
    addis r3, r31, 0x3
    addi r3, r3, 0x64ec
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000A80
    li r28, 0x1
lbl_fn_800F3490_00000A80:
    addis r3, r31, 0x4
    subi r3, r3, 0x750c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000AA8
    addis r3, r31, 0x4
    subi r3, r3, 0x7500
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000AAC
lbl_fn_800F3490_00000AA8:
    li r28, 0x1
lbl_fn_800F3490_00000AAC:
    addis r29, r31, 0x4
    li r26, 0x0
    subi r29, r29, 0x74f4
lbl_fn_800F3490_00000AB8:
    mr r3, r29
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000ACC
    li r28, 0x1
lbl_fn_800F3490_00000ACC:
    addi r26, r26, 0x1
    addi r29, r29, 0xc
    cmpwi r26, 0x3
    blt lbl_fn_800F3490_00000AB8
    addis r3, r31, 0x4
    subi r3, r3, 0x74d0
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000AF4
    li r28, 0x1
lbl_fn_800F3490_00000AF4:
    addis r3, r31, 0x4
    subi r3, r3, 0x74c4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000B1C
    addis r3, r31, 0x4
    subi r3, r3, 0x74ac
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000B20
lbl_fn_800F3490_00000B1C:
    li r28, 0x1
lbl_fn_800F3490_00000B20:
    addis r3, r31, 0x4
    subi r3, r3, 0x74b8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000B48
    addis r3, r31, 0x4
    subi r3, r3, 0x74a0
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000B4C
lbl_fn_800F3490_00000B48:
    li r28, 0x1
lbl_fn_800F3490_00000B4C:
    addis r30, r31, 0x4
    li r26, 0x0
    subi r29, r30, 0x7470
    subi r30, r30, 0x7494
lbl_fn_800F3490_00000B5C:
    mr r3, r30
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000B7C
    mr r3, r29
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000B80
lbl_fn_800F3490_00000B7C:
    li r28, 0x1
lbl_fn_800F3490_00000B80:
    addi r26, r26, 0x1
    addi r29, r29, 0xc
    cmpwi r26, 0x3
    addi r30, r30, 0xc
    blt lbl_fn_800F3490_00000B5C
    addis r3, r31, 0x4
    subi r3, r3, 0x744c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x7440
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x7434
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x7428
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x741c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x7410
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x7404
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x73f8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x73e0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x73d4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x73c8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_800F3490_00000C84
    addis r3, r31, 0x4
    subi r3, r3, 0x73bc
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000C88
lbl_fn_800F3490_00000C84:
    li r28, 0x1
lbl_fn_800F3490_00000C88:
    addis r3, r31, 0x4
    subi r3, r3, 0x760c
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000CA0
    li r28, 0x1
lbl_fn_800F3490_00000CA0:
    addis r3, r31, 0x4
    subi r3, r3, 0x73b0
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000CB8
    li r28, 0x1
lbl_fn_800F3490_00000CB8:
    addis r3, r31, 0x4
    subi r3, r3, 0x73a4
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000CD0
    li r28, 0x1
lbl_fn_800F3490_00000CD0:
    addis r3, r31, 0x4
    subi r3, r3, 0x7398
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000CE8
    li r28, 0x1
lbl_fn_800F3490_00000CE8:
    addis r3, r31, 0x3
    addi r3, r3, 0x65d0
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000D00
    li r28, 0x1
lbl_fn_800F3490_00000D00:
    addis r3, r31, 0x3
    addi r3, r3, 0x65dc
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000D18
    li r28, 0x1
lbl_fn_800F3490_00000D18:
    addis r30, r31, 0x3
    li r26, 0x0
    addi r30, r30, 0x65e8
lbl_fn_800F3490_00000D24:
    mr r3, r30
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000D38
    li r28, 0x1
lbl_fn_800F3490_00000D38:
    addi r26, r26, 0x1
    addi r30, r30, 0xc
    cmpwi r26, 0x7
    blt lbl_fn_800F3490_00000D24
    addis r30, r31, 0x1
    li r26, 0x0
    subi r30, r30, 0x45ac
lbl_fn_800F3490_00000D54:
    mr r3, r30
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000D68
    li r28, 0x1
lbl_fn_800F3490_00000D68:
    addi r26, r26, 0x1
    addi r30, r30, 0x21c
    cmplwi r26, 0x8
    blt lbl_fn_800F3490_00000D54
    addis r31, r31, 0x4
    li r26, 0x0
    subi r31, r31, 0x1cb8
lbl_fn_800F3490_00000D84:
    mr r30, r31
    li r27, 0x0
lbl_fn_800F3490_00000D8C:
    mr r3, r30
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000DA0
    li r28, 0x1
lbl_fn_800F3490_00000DA0:
    addi r27, r27, 0x1
    addi r30, r30, 0xc
    cmpwi r27, 0x3
    blt lbl_fn_800F3490_00000D8C
    addi r26, r26, 0x1
    addi r31, r31, 0x24
    cmpwi r26, 0x2
    blt lbl_fn_800F3490_00000D84
    lwz r3, lbl_8087F9E8
    bl fn_8059B1B8
    cmpwi r3, 0x0
    beq lbl_fn_800F3490_00000DD4
    li r28, 0x1
lbl_fn_800F3490_00000DD4:
    mr r3, r28
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800F39A4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lwz r4, lbl_808813F4
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r3
    addis r3, r3, 0x4
    subi r3, r3, 0x7688
    bl fn_80237654
    addis r3, r28, 0x4
    lwz r4, lbl_808813F8
    subi r3, r3, 0x767c
    bl fn_80237654
    addis r3, r28, 0x4
    lwz r4, lbl_808813FC
    subi r3, r3, 0x7658
    bl fn_80237654
    addis r3, r28, 0x4
    lwz r4, lbl_80881400
    subi r3, r3, 0x764c
    bl fn_80237654
    addis r3, r28, 0x4
    lwz r4, lbl_80881404
    subi r3, r3, 0x7670
    bl fn_80237654
    addis r3, r28, 0x4
    lwz r4, lbl_80881408
    subi r3, r3, 0x7664
    bl fn_80237654
    lis r31, lbl_80736040@ha
    addis r3, r28, 0x4
    addi r31, r31, lbl_80736040@l
    addi r4, r31, 0x169
    subi r3, r3, 0x763c
    bl fn_800D5908
    lwz r4, lbl_808813D4
    mr r3, r28
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r28, 0x1
    li r4, 0x1
    stw r3, -0x34d0(r5)
    bl fn_800D246C
    lwz r4, lbl_808813D8
    mr r3, r28
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r28, 0x1
    li r4, 0x1
    stw r3, -0x34a0(r5)
    bl fn_800D246C
    mr r3, r28
    addi r4, r31, 0x182
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r28, 0x4
    li r4, 0x1
    stw r3, -0x1d0c(r5)
    bl fn_800D246C
    addis r31, r28, 0x3
    lis r30, lbl_80735988@ha
    addi r30, r30, lbl_80735988@l
    li r29, 0x0
    addi r31, r31, 0x64f8
lbl_fn_800F39A4_00000EF8:
    lwz r4, 0x0(r30)
    mr r3, r31
    bl fn_8023780C
    addi r29, r29, 0x1
    addi r31, r31, 0xc
    cmpwi r29, 0x3
    addi r30, r30, 0x4
    blt lbl_fn_800F39A4_00000EF8
    lis r4, lbl_80736040@ha
    addis r3, r28, 0x4
    addi r31, r4, lbl_80736040@l
    addi r4, r31, 0x19c
    subi r3, r3, 0x73ec
    bl fn_8023780C
    addis r30, r28, 0x3
    li r29, 0x0
    addi r30, r30, 0x663c
lbl_fn_800F39A4_00000F3C:
    mr r3, r29
    bl fn_8020BD78
    mr r5, r3
    addi r3, r1, 0x8
    addi r4, r31, 0x1b2
    crclr 6
    bl sprintf
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8023780C
    addi r29, r29, 0x1
    addi r30, r30, 0xc
    cmplwi r29, 0x1f
    blt lbl_fn_800F39A4_00000F3C
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_800F3B4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    addis r3, r3, 0x4
    stw r29, 0x14(r1)
    li r29, 0x0
    subi r3, r3, 0x7688
    stw r28, 0x10(r1)
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_800F3B4C_00000FE4
    addis r3, r30, 0x4
    subi r3, r3, 0x767c
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3B4C_00000FE8
lbl_fn_800F3B4C_00000FE4:
    li r29, 0x1
lbl_fn_800F3B4C_00000FE8:
    cmpwi r29, 0x0
    bne lbl_fn_800F3B4C_00001028
    addis r3, r30, 0x4
    li r29, 0x0
    subi r3, r3, 0x7658
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_800F3B4C_0000101C
    addis r3, r30, 0x4
    subi r3, r3, 0x764c
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3B4C_00001020
lbl_fn_800F3B4C_0000101C:
    li r29, 0x1
lbl_fn_800F3B4C_00001020:
    cmpwi r29, 0x0
    beq lbl_fn_800F3B4C_0000102C
lbl_fn_800F3B4C_00001028:
    li r31, 0x1
lbl_fn_800F3B4C_0000102C:
    addis r3, r30, 0x4
    li r29, 0x0
    subi r3, r3, 0x7670
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_800F3B4C_00001058
    addis r3, r30, 0x4
    subi r3, r3, 0x7664
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3B4C_0000105C
lbl_fn_800F3B4C_00001058:
    li r29, 0x1
lbl_fn_800F3B4C_0000105C:
    cmpwi r29, 0x0
    beq lbl_fn_800F3B4C_00001068
    li r31, 0x1
lbl_fn_800F3B4C_00001068:
    addis r3, r30, 0x4
    subi r3, r3, 0x763c
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_800F3B4C_00001080
    li r31, 0x1
lbl_fn_800F3B4C_00001080:
    addis r3, r30, 0x1
    lwz r3, -0x34d0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800F3B4C_0000109C
    li r31, 0x1
lbl_fn_800F3B4C_0000109C:
    addis r3, r30, 0x1
    lwz r3, -0x34a0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800F3B4C_000010B8
    li r31, 0x1
lbl_fn_800F3B4C_000010B8:
    addis r3, r30, 0x4
    lwz r3, -0x1d0c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800F3B4C_000010D4
    li r31, 0x1
lbl_fn_800F3B4C_000010D4:
    addis r29, r30, 0x3
    li r28, 0x0
    addi r29, r29, 0x64f8
lbl_fn_800F3B4C_000010E0:
    mr r3, r29
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3B4C_000010F4
    li r31, 0x1
lbl_fn_800F3B4C_000010F4:
    addi r28, r28, 0x1
    addi r29, r29, 0xc
    cmpwi r28, 0x3
    blt lbl_fn_800F3B4C_000010E0
    addis r3, r30, 0x4
    subi r3, r3, 0x73ec
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3B4C_0000111C
    li r31, 0x1
lbl_fn_800F3B4C_0000111C:
    addis r29, r30, 0x3
    li r28, 0x0
    addi r29, r29, 0x663c
lbl_fn_800F3B4C_00001128:
    mr r3, r29
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_800F3B4C_0000113C
    li r31, 0x1
lbl_fn_800F3B4C_0000113C:
    addi r28, r28, 0x1
    addi r29, r29, 0xc
    cmplwi r28, 0x1f
    blt lbl_fn_800F3B4C_00001128
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

asm void fn_800F3D28(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_23
    mr r31, r3
    addi r24, r3, 0x150
    mr r23, r31
    li r27, 0x0
lbl_fn_800F3D28_0000119C:
    lwz r0, 0x154(r23)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_800F3D28_000011CC
    lwz r12, 0x0(r24)
    mr r3, r24
    li r4, 0x0
    li r5, 0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_800F3D28_000011CC:
    addi r27, r27, 0x1
    addi r24, r24, 0xa0
    cmplwi r27, 0x100
    addi r23, r23, 0xa0
    blt lbl_fn_800F3D28_0000119C
    addis r24, r31, 0x1
    mr r23, r31
    li r27, 0x0
    subi r24, r24, 0x5eb0
lbl_fn_800F3D28_000011F0:
    addis r3, r23, 0x1
    lwz r0, -0x5eac(r3)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_800F3D28_00001224
    lwz r12, 0x0(r24)
    mr r3, r24
    li r4, 0x0
    li r5, 0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_800F3D28_00001224:
    addi r27, r27, 0x1
    addi r24, r24, 0xc8
    cmplwi r27, 0x20
    addi r23, r23, 0xc8
    blt lbl_fn_800F3D28_000011F0
    li r26, 0x0
    addis r24, r31, 0x1
    addis r23, r31, 0x4
    lfs f31, lbl_80881494
    mr r25, r31
    mr r27, r26
    mr r29, r26
    addis r28, r31, 0x3
    li r30, 0x0
    subi r23, r23, 0x6e20
    subi r24, r24, 0x3410
lbl_fn_800F3D28_00001264:
    addis r4, r25, 0x1
    mr r3, r24
    stw r27, -0x3410(r4)
    stb r27, -0x2ae3(r4)
    stfs f31, -0x31c8(r4)
    stb r27, -0x2ae2(r4)
    stb r27, -0x2ae1(r4)
    bl fn_801081D8
    mr r3, r23
    li r4, 0x0
    li r5, 0x120
    bl memset
    add r3, r28, r30
    addi r26, r26, 0x1
    stw r29, 0x6828(r3)
    cmpwi r26, 0x48
    addi r25, r25, 0x934
    addi r24, r24, 0x934
    sth r29, 0x682e(r3)
    addi r23, r23, 0x120
    addi r30, r30, 0x78
    sth r29, 0x682c(r3)
    blt lbl_fn_800F3D28_00001264
    addis r5, r31, 0x3
    addis r4, r31, 0x1
    li r0, 0x0
    addis r3, r31, 0x4
    stw r0, 0x63b0(r5)
    stw r0, -0x3454(r4)
    stw r0, -0x1cec(r3)
    stw r0, -0x4398(r4)
    stw r0, -0x45b0(r4)
    stw r0, -0x417c(r4)
    stw r0, -0x4394(r4)
    stw r0, -0x3f60(r4)
    stw r0, -0x4178(r4)
    stw r0, -0x3d44(r4)
    stw r0, -0x3f5c(r4)
    stw r0, -0x3b28(r4)
    stw r0, -0x3d40(r4)
    stw r0, -0x390c(r4)
    stw r0, -0x3b24(r4)
    stw r0, -0x36f0(r4)
    stw r0, -0x3908(r4)
    stw r0, -0x34d4(r4)
    stw r0, -0x36ec(r4)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800F3EF4(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x120
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stfd f26, 0x120(r1)
    psq_st f26, 0x128(r1), 0, 0
    bl _savegpr_22
    lwz r0, lbl_8087F8A0
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_000026F0
    lwz r0, lbl_8087F408
    cmpwi r0, 0x0
    bne lbl_fn_800F3EF4_000013A0
    b lbl_fn_800F3EF4_000026F0
lbl_fn_800F3EF4_000013A0:
    li r4, 0x0
    stw r4, 0x48(r3)
    li r0, 0x3
    mr r5, r31
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    mtctr r0
lbl_fn_800F3EF4_000013BC:
    addis r3, r5, 0x3
    addi r5, r5, 0x20
    stw r4, 0x6290(r3)
    stw r4, 0x6294(r3)
    stw r4, 0x6298(r3)
    stw r4, 0x629c(r3)
    stw r4, 0x62a0(r3)
    stw r4, 0x62a4(r3)
    stw r4, 0x62a8(r3)
    stw r4, 0x62ac(r3)
    addis r3, r5, 0x3
    addi r5, r5, 0x20
    stw r4, 0x6290(r3)
    stw r4, 0x6294(r3)
    stw r4, 0x6298(r3)
    stw r4, 0x629c(r3)
    stw r4, 0x62a0(r3)
    stw r4, 0x62a4(r3)
    stw r4, 0x62a8(r3)
    stw r4, 0x62ac(r3)
    addis r3, r5, 0x3
    addi r5, r5, 0x20
    stw r4, 0x6290(r3)
    stw r4, 0x6294(r3)
    stw r4, 0x6298(r3)
    stw r4, 0x629c(r3)
    stw r4, 0x62a0(r3)
    stw r4, 0x62a4(r3)
    stw r4, 0x62a8(r3)
    stw r4, 0x62ac(r3)
    bdnz lbl_fn_800F3EF4_000013BC
    lwz r4, lbl_8087F408
    lis r3, lbl_80735DD0@ha
    addi r3, r3, lbl_80735DD0@l
    lfs f26, lbl_808814BC
    lwz r28, 0x48(r4)
    li r22, 0x1
    lwz r29, 0x58(r3)
    li r23, 0x96
    li r24, 0x0
    b lbl_fn_800F3EF4_00001814
lbl_fn_800F3EF4_00001460:
    lwz r6, 0x38(r28)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F3EF4_0000148C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F3EF4_0000148C
    li r5, 0x1
lbl_fn_800F3EF4_0000148C:
    cmpwi r5, 0x0
    beq lbl_fn_800F3EF4_000014A8
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F3EF4_000014A8
    li r3, 0x1
lbl_fn_800F3EF4_000014A8:
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_000014DC
    lwz r0, 0x55c(r28)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F3EF4_000014D0
    lwz r0, 0x560(r28)
    cmpwi r0, 0x1c
    bne lbl_fn_800F3EF4_000014D0
    li r3, 0x1
lbl_fn_800F3EF4_000014D0:
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_000014DC
    li r4, 0x1
lbl_fn_800F3EF4_000014DC:
    cmpwi r4, 0x0
    beq lbl_fn_800F3EF4_00001810
    lwz r0, 0x54c(r28)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F3EF4_00001810
    lwz r3, lbl_8087F8A0
    li r27, 0x0
    lfs f27, lbl_808814B8
    li r26, 0x0
    lwz r25, 0x48(r3)
    b lbl_fn_800F3EF4_00001648
lbl_fn_800F3EF4_0000150C:
    lwz r6, 0x38(r25)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F3EF4_00001538
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F3EF4_00001538
    li r5, 0x1
lbl_fn_800F3EF4_00001538:
    cmpwi r5, 0x0
    beq lbl_fn_800F3EF4_00001554
    lwz r0, 0x7e0(r25)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F3EF4_00001554
    li r3, 0x1
lbl_fn_800F3EF4_00001554:
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00001588
    lwz r0, 0x55c(r25)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F3EF4_0000157C
    lwz r0, 0x560(r25)
    cmpwi r0, 0x1c
    bne lbl_fn_800F3EF4_0000157C
    li r3, 0x1
lbl_fn_800F3EF4_0000157C:
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_00001588
    li r4, 0x1
lbl_fn_800F3EF4_00001588:
    cmpwi r4, 0x0
    beq lbl_fn_800F3EF4_00001644
    lwz r0, 0x54c(r25)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F3EF4_00001644
    lfs f7, 0x530(r25)
    cmpwi r27, 0x0
    lfs f0, 0x530(r28)
    lfs f9, 0x52c(r25)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r28)
    lfs f7, 0x528(r25)
    lfs f0, 0x528(r28)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xd0(r1)
    stfs f0, 0xcc(r1)
    stfs f10, 0xd4(r1)
    bne lbl_fn_800F3EF4_00001624
    mr r3, r28
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_00001620
    lwz r0, 0x48(r31)
    cmplwi r0, 0x40
    bge lbl_fn_800F3EF4_00001620
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x4c
    beq lbl_fn_800F3EF4_00001614
    stw r28, 0x0(r3)
lbl_fn_800F3EF4_00001614:
    lwz r3, 0x48(r31)
    addi r0, r3, 0x1
    stw r0, 0x48(r31)
lbl_fn_800F3EF4_00001620:
    li r27, 0x1
lbl_fn_800F3EF4_00001624:
    addi r3, r1, 0xcc
    bl fn_805F9920
    fcmpo cr0, f1, f27
    bge lbl_fn_800F3EF4_00001644
    addi r3, r1, 0xcc
    bl fn_805F9920
    mr r26, r25
    fmr f27, f1
lbl_fn_800F3EF4_00001644:
    lwz r25, 0x14ac(r25)
lbl_fn_800F3EF4_00001648:
    cmpwi r25, 0x0
    bne lbl_fn_800F3EF4_0000150C
    cmpwi r28, 0x0
    bne lbl_fn_800F3EF4_00001660
    li r4, -0x1
    b lbl_fn_800F3EF4_000016A0
lbl_fn_800F3EF4_00001660:
    addis r3, r31, 0x3
    mr r5, r31
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800F3EF4_0000169C
lbl_fn_800F3EF4_0000167C:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r28
    bne lbl_fn_800F3EF4_00001690
    b lbl_fn_800F3EF4_000016A0
lbl_fn_800F3EF4_00001690:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_800F3EF4_0000167C
lbl_fn_800F3EF4_0000169C:
    li r4, -0x1
lbl_fn_800F3EF4_000016A0:
    cmpwi r4, 0x0
    blt lbl_fn_800F3EF4_000016B8
    mulli r3, r4, 0x934
    addis r3, r3, 0x1
    subi r0, r3, 0x340c
    stwx r26, r31, r0
lbl_fn_800F3EF4_000016B8:
    mr r3, r31
    mr r4, r28
    bl fn_80103E60
    mr r3, r31
    mr r4, r28
    bl fn_80103600
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x7
    beq lbl_fn_800F3EF4_00001808
    cmpwi r28, 0x0
    bne lbl_fn_800F3EF4_000016EC
    li r4, -0x1
    b lbl_fn_800F3EF4_0000172C
lbl_fn_800F3EF4_000016EC:
    addis r3, r31, 0x3
    mr r5, r31
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800F3EF4_00001728
lbl_fn_800F3EF4_00001708:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r28
    bne lbl_fn_800F3EF4_0000171C
    b lbl_fn_800F3EF4_0000172C
lbl_fn_800F3EF4_0000171C:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_800F3EF4_00001708
lbl_fn_800F3EF4_00001728:
    li r4, -0x1
lbl_fn_800F3EF4_0000172C:
    lwz r0, 0x12a4(r30)
    mulli r3, r4, 0x934
    addis r4, r31, 0x1
    srwi. r0, r0, 31
    add r25, r4, r3
    beq lbl_fn_800F3EF4_00001804
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_800F3EF4_00001808
    lwz r0, -0x2c0c(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_800F3EF4_00001808
    lbz r0, -0x2ae4(r25)
    cmpwi r0, 0x0
    bne lbl_fn_800F3EF4_00001808
    lwz r3, -0x3410(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0xc4(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00001808
    stb r22, -0x2ae4(r25)
    addi r3, r1, 0x90
    lfs f7, 0x530(r28)
    lfs f0, 0x530(r30)
    lfs f9, 0x52c(r28)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r30)
    lfs f7, 0x528(r28)
    lfs f0, 0x528(r30)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x94(r1)
    stfs f0, 0x90(r1)
    stfs f10, 0x98(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f26
    bge lbl_fn_800F3EF4_00001808
    stw r23, -0x2c0c(r25)
    li r4, 0x96
    lwz r3, -0x3410(r25)
    bl fn_801656A4
    lfs f1, lbl_80881494
    mr r4, r29
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_800F3EF4_00001808
lbl_fn_800F3EF4_00001804:
    stb r24, -0x2ae4(r25)
lbl_fn_800F3EF4_00001808:
    mr r3, r28
    bl fn_80154488
lbl_fn_800F3EF4_00001810:
    lwz r28, 0x14ac(r28)
lbl_fn_800F3EF4_00001814:
    cmpwi r28, 0x0
    bne lbl_fn_800F3EF4_00001460
    lwz r3, lbl_8087F890
    lfs f26, lbl_808814C0
    lwz r25, 0x48(r3)
    b lbl_fn_800F3EF4_00001940
lbl_fn_800F3EF4_0000182C:
    lwz r6, 0x38(r25)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F3EF4_00001858
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F3EF4_00001858
    li r5, 0x1
lbl_fn_800F3EF4_00001858:
    cmpwi r5, 0x0
    beq lbl_fn_800F3EF4_00001874
    lwz r0, 0x7e0(r25)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F3EF4_00001874
    li r3, 0x1
lbl_fn_800F3EF4_00001874:
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_000018A8
    lwz r0, 0x55c(r25)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F3EF4_0000189C
    lwz r0, 0x560(r25)
    cmpwi r0, 0x1c
    bne lbl_fn_800F3EF4_0000189C
    li r3, 0x1
lbl_fn_800F3EF4_0000189C:
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_000018A8
    li r4, 0x1
lbl_fn_800F3EF4_000018A8:
    cmpwi r4, 0x0
    beq lbl_fn_800F3EF4_0000193C
    lwz r0, 0x54c(r25)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F3EF4_0000193C
    lfs f7, 0x530(r30)
    addi r3, r1, 0xc0
    lfs f0, 0x530(r25)
    lfs f9, 0x52c(r30)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r25)
    lfs f7, 0x528(r30)
    lfs f0, 0x528(r25)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xc4(r1)
    stfs f0, 0xc0(r1)
    stfs f10, 0xc8(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f26
    bge lbl_fn_800F3EF4_0000193C
    lwz r0, 0x1428(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_0000193C
    lwz r0, 0x48(r31)
    cmplwi r0, 0x40
    bge lbl_fn_800F3EF4_0000193C
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x4c
    beq lbl_fn_800F3EF4_00001930
    stw r25, 0x0(r3)
lbl_fn_800F3EF4_00001930:
    lwz r3, 0x48(r31)
    addi r0, r3, 0x1
    stw r0, 0x48(r31)
lbl_fn_800F3EF4_0000193C:
    lwz r25, 0x1424(r25)
lbl_fn_800F3EF4_00001940:
    cmpwi r25, 0x0
    bne lbl_fn_800F3EF4_0000182C
    lwz r3, lbl_8087F428
    bl fn_8036554C
    lfs f26, lbl_808814C0
    mr r25, r3
    lfs f30, lbl_808814C8
    lfs f29, lbl_80881484
    lfs f28, lbl_8088148C
    lfs f27, lbl_808814C4
    b lbl_fn_800F3EF4_0000204C
lbl_fn_800F3EF4_0000196C:
    lwz r6, 0x38(r25)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F3EF4_00001998
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F3EF4_00001998
    li r5, 0x1
lbl_fn_800F3EF4_00001998:
    cmpwi r5, 0x0
    beq lbl_fn_800F3EF4_000019B4
    lwz r0, 0x7e0(r25)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F3EF4_000019B4
    li r3, 0x1
lbl_fn_800F3EF4_000019B4:
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_000019E8
    lwz r0, 0x55c(r25)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F3EF4_000019DC
    lwz r0, 0x560(r25)
    cmpwi r0, 0x1c
    bne lbl_fn_800F3EF4_000019DC
    li r3, 0x1
lbl_fn_800F3EF4_000019DC:
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_000019E8
    li r4, 0x1
lbl_fn_800F3EF4_000019E8:
    cmpwi r4, 0x0
    beq lbl_fn_800F3EF4_00002048
    lwz r0, 0x54c(r25)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F3EF4_00002048
    lfs f7, 0x530(r30)
    addi r3, r1, 0xb4
    lfs f0, 0x530(r25)
    li r26, 0x0
    lfs f9, 0x52c(r30)
    li r27, 0x0
    fsubs f10, f7, f0
    lfs f8, 0x52c(r25)
    lfs f7, 0x528(r30)
    lfs f0, 0x528(r25)
    fsubs f8, f9, f8
    lfs f31, lbl_808814B8
    fsubs f0, f7, f0
    stfs f8, 0xb8(r1)
    stfs f0, 0xb4(r1)
    stfs f10, 0xbc(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f26
    bge lbl_fn_800F3EF4_00001ABC
    mr r3, r25
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00001A88
    lwz r0, 0x7e0(r30)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_800F3EF4_00001A88
    lwz r3, lbl_8087F0A8
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_00001AB8
lbl_fn_800F3EF4_00001A88:
    lwz r0, 0x48(r31)
    cmplwi r0, 0x40
    bge lbl_fn_800F3EF4_00001AB8
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x4c
    beq lbl_fn_800F3EF4_00001AAC
    stw r25, 0x0(r3)
lbl_fn_800F3EF4_00001AAC:
    lwz r3, 0x48(r31)
    addi r0, r3, 0x1
    stw r0, 0x48(r31)
lbl_fn_800F3EF4_00001AB8:
    li r26, 0x1
lbl_fn_800F3EF4_00001ABC:
    lwz r3, lbl_8087F408
    lwz r28, 0x48(r3)
    b lbl_fn_800F3EF4_00001BE0
lbl_fn_800F3EF4_00001AC8:
    lwz r6, 0x38(r28)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F3EF4_00001AF4
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F3EF4_00001AF4
    li r5, 0x1
lbl_fn_800F3EF4_00001AF4:
    cmpwi r5, 0x0
    beq lbl_fn_800F3EF4_00001B10
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F3EF4_00001B10
    li r3, 0x1
lbl_fn_800F3EF4_00001B10:
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00001B44
    lwz r0, 0x55c(r28)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F3EF4_00001B38
    lwz r0, 0x560(r28)
    cmpwi r0, 0x1c
    bne lbl_fn_800F3EF4_00001B38
    li r3, 0x1
lbl_fn_800F3EF4_00001B38:
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_00001B44
    li r4, 0x1
lbl_fn_800F3EF4_00001B44:
    cmpwi r4, 0x0
    beq lbl_fn_800F3EF4_00001BDC
    lwz r0, 0x54c(r28)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F3EF4_00001BDC
    lwz r4, 0x48(r25)
    mr r3, r28
    bl fn_8016F368
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_00001BDC
    lfs f7, 0x530(r25)
    cmpwi r26, 0x0
    lfs f0, 0x530(r28)
    lfs f9, 0x52c(r25)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r28)
    lfs f7, 0x528(r25)
    lfs f0, 0x528(r28)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xac(r1)
    stfs f0, 0xa8(r1)
    stfs f10, 0xb0(r1)
    bne lbl_fn_800F3EF4_00001BBC
    addi r3, r1, 0xa8
    bl fn_805F9940
    fcmpo cr0, f1, f26
    bge lbl_fn_800F3EF4_00001BBC
    li r26, 0x1
lbl_fn_800F3EF4_00001BBC:
    addi r3, r1, 0xa8
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_800F3EF4_00001BDC
    addi r3, r1, 0xa8
    bl fn_805F9920
    mr r27, r28
    fmr f31, f1
lbl_fn_800F3EF4_00001BDC:
    lwz r28, 0x14ac(r28)
lbl_fn_800F3EF4_00001BE0:
    cmpwi r28, 0x0
    bne lbl_fn_800F3EF4_00001AC8
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r26, r3
    b lbl_fn_800F3EF4_00001CF4
lbl_fn_800F3EF4_00001BF8:
    lwz r6, 0x38(r26)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F3EF4_00001C24
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F3EF4_00001C24
    li r5, 0x1
lbl_fn_800F3EF4_00001C24:
    cmpwi r5, 0x0
    beq lbl_fn_800F3EF4_00001C40
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F3EF4_00001C40
    li r3, 0x1
lbl_fn_800F3EF4_00001C40:
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00001C74
    lwz r0, 0x55c(r26)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F3EF4_00001C68
    lwz r0, 0x560(r26)
    cmpwi r0, 0x1c
    bne lbl_fn_800F3EF4_00001C68
    li r3, 0x1
lbl_fn_800F3EF4_00001C68:
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_00001C74
    li r4, 0x1
lbl_fn_800F3EF4_00001C74:
    cmpwi r4, 0x0
    beq lbl_fn_800F3EF4_00001CF0
    lwz r0, 0x54c(r26)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F3EF4_00001CF0
    lwz r4, 0x48(r25)
    mr r3, r26
    bl fn_8016F368
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_00001CF0
    lfs f7, 0x530(r25)
    addi r3, r1, 0x9c
    lfs f0, 0x530(r26)
    lfs f9, 0x52c(r25)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r26)
    lfs f7, 0x528(r25)
    lfs f0, 0x528(r26)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xa0(r1)
    stfs f0, 0x9c(r1)
    stfs f10, 0xa4(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_800F3EF4_00001CF0
    addi r3, r1, 0x9c
    bl fn_805F9920
    mr r27, r26
    fmr f31, f1
lbl_fn_800F3EF4_00001CF0:
    lwz r26, 0x14ac(r26)
lbl_fn_800F3EF4_00001CF4:
    cmpwi r26, 0x0
    bne lbl_fn_800F3EF4_00001BF8
    cmpwi r25, 0x0
    bne lbl_fn_800F3EF4_00001D0C
    li r4, -0x1
    b lbl_fn_800F3EF4_00001D4C
lbl_fn_800F3EF4_00001D0C:
    addis r3, r31, 0x3
    mr r5, r31
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800F3EF4_00001D48
lbl_fn_800F3EF4_00001D28:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r25
    bne lbl_fn_800F3EF4_00001D3C
    b lbl_fn_800F3EF4_00001D4C
lbl_fn_800F3EF4_00001D3C:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_800F3EF4_00001D28
lbl_fn_800F3EF4_00001D48:
    li r4, -0x1
lbl_fn_800F3EF4_00001D4C:
    cmpwi r4, 0x0
    blt lbl_fn_800F3EF4_00001D64
    mulli r3, r4, 0x934
    addis r3, r3, 0x1
    subi r0, r3, 0x340c
    stwx r27, r31, r0
lbl_fn_800F3EF4_00001D64:
    mr r3, r31
    mr r4, r25
    bl fn_80103E60
    mr r3, r31
    mr r4, r25
    bl fn_80103600
    lwz r3, lbl_8087F0A8
    lwz r0, 0x98(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_00002034
    mr r3, r25
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00002024
    lwz r3, lbl_8087F430
    li r26, 0x0
    li r27, 0x0
    li r28, 0x0
    bl fn_803761BC
    lwz r4, 0x7e0(r25)
    cntlzw r0, r3
    srwi r29, r0, 5
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800F3EF4_00001DE4
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_800F3EF4_00001DE4
    rlwinm r3, r4, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_800F3EF4_00001DE8
lbl_fn_800F3EF4_00001DE4:
    li r29, 0x1
lbl_fn_800F3EF4_00001DE8:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_00001DFC
    li r29, 0x1
lbl_fn_800F3EF4_00001DFC:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00001E10
    lwz r22, 0x48(r3)
    b lbl_fn_800F3EF4_00001E14
lbl_fn_800F3EF4_00001E10:
    li r22, 0x0
lbl_fn_800F3EF4_00001E14:
    cmpwi r22, 0x0
    beq lbl_fn_800F3EF4_00001EC0
    lwz r6, 0x38(r22)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F3EF4_00001E48
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F3EF4_00001E48
    li r5, 0x1
lbl_fn_800F3EF4_00001E48:
    cmpwi r5, 0x0
    beq lbl_fn_800F3EF4_00001E64
    lwz r0, 0x7e0(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F3EF4_00001E64
    li r3, 0x1
lbl_fn_800F3EF4_00001E64:
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00001E98
    lwz r0, 0x55c(r22)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F3EF4_00001E8C
    lwz r0, 0x560(r22)
    cmpwi r0, 0x1c
    bne lbl_fn_800F3EF4_00001E8C
    li r3, 0x1
lbl_fn_800F3EF4_00001E8C:
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_00001E98
    li r4, 0x1
lbl_fn_800F3EF4_00001E98:
    cmpwi r4, 0x0
    beq lbl_fn_800F3EF4_00001EC0
    mr r3, r25
    mr r4, r22
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00001EC0
    lwz r0, 0x12a4(r22)
    extrwi r26, r0, 1, 3
lbl_fn_800F3EF4_00001EC0:
    lwz r3, lbl_8087EE68
    lwz r0, 0x7d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_00001EE0
    lwz r3, 0xe0(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r27, r0, 31
lbl_fn_800F3EF4_00001EE0:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_00001FBC
    lwz r4, lbl_8087F048
    lwz r3, 0x50(r25)
    addis r4, r4, 0x4
    lfs f31, -0x75fc(r4)
    bl fn_80219558
    cmpwi r3, 0x2
    beq lbl_fn_800F3EF4_00001F20
    cmpwi r3, 0x3
    beq lbl_fn_800F3EF4_00001F54
    cmpwi r3, 0x6
    beq lbl_fn_800F3EF4_00001F88
    b lbl_fn_800F3EF4_00001FBC
lbl_fn_800F3EF4_00001F20:
    lhz r0, 0xd38(r25)
    extrwi. r0, r0, 1, 19
    beq lbl_fn_800F3EF4_00001F40
    fcmpo cr0, f31, f27
    cror eq, gt, eq
    mfcr r28
    extrwi r28, r28, 1, 2
    b lbl_fn_800F3EF4_00001FBC
lbl_fn_800F3EF4_00001F40:
    fcmpo cr0, f31, f30
    cror eq, gt, eq
    mfcr r28
    extrwi r28, r28, 1, 2
    b lbl_fn_800F3EF4_00001FBC
lbl_fn_800F3EF4_00001F54:
    lhz r0, 0xd38(r25)
    extrwi. r0, r0, 1, 19
    beq lbl_fn_800F3EF4_00001F74
    fcmpo cr0, f31, f30
    cror eq, gt, eq
    mfcr r28
    extrwi r28, r28, 1, 2
    b lbl_fn_800F3EF4_00001FBC
lbl_fn_800F3EF4_00001F74:
    fcmpo cr0, f31, f28
    cror eq, gt, eq
    mfcr r28
    extrwi r28, r28, 1, 2
    b lbl_fn_800F3EF4_00001FBC
lbl_fn_800F3EF4_00001F88:
    lhz r0, 0xd38(r25)
    li r27, 0x0
    extrwi. r0, r0, 1, 19
    beq lbl_fn_800F3EF4_00001FAC
    fcmpo cr0, f31, f29
    cror eq, gt, eq
    mfcr r28
    extrwi r28, r28, 1, 2
    b lbl_fn_800F3EF4_00001FBC
lbl_fn_800F3EF4_00001FAC:
    fcmpo cr0, f31, f30
    cror eq, gt, eq
    mfcr r28
    extrwi r28, r28, 1, 2
lbl_fn_800F3EF4_00001FBC:
    cmpwi r29, 0x0
    beq lbl_fn_800F3EF4_00001FD4
    lhz r0, 0xd38(r25)
    rlwinm r0, r0, 0, 20, 18
    sth r0, 0xd38(r25)
    b lbl_fn_800F3EF4_00002000
lbl_fn_800F3EF4_00001FD4:
    cmpwi r26, 0x0
    li r3, 0x0
    bne lbl_fn_800F3EF4_00001FF4
    cmpwi r27, 0x0
    bne lbl_fn_800F3EF4_00001FF4
    cmpwi r28, 0x0
    bne lbl_fn_800F3EF4_00001FF4
    li r3, 0x1
lbl_fn_800F3EF4_00001FF4:
    lhz r0, 0xd38(r25)
    rlwimi r0, r3, 12, 19, 19
    sth r0, 0xd38(r25)
lbl_fn_800F3EF4_00002000:
    lwz r3, lbl_8087F430
    li r4, 0x389
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_800F3EF4_00002040
    lhz r0, 0xd38(r25)
    ori r0, r0, 0x1000
    sth r0, 0xd38(r25)
    b lbl_fn_800F3EF4_00002040
lbl_fn_800F3EF4_00002024:
    lhz r0, 0xd38(r25)
    rlwinm r0, r0, 0, 20, 18
    sth r0, 0xd38(r25)
    b lbl_fn_800F3EF4_00002040
lbl_fn_800F3EF4_00002034:
    lhz r0, 0xd38(r25)
    rlwinm r0, r0, 0, 20, 18
    sth r0, 0xd38(r25)
lbl_fn_800F3EF4_00002040:
    mr r3, r25
    bl fn_80154488
lbl_fn_800F3EF4_00002048:
    lwz r25, 0x14ac(r25)
lbl_fn_800F3EF4_0000204C:
    cmpwi r25, 0x0
    bne lbl_fn_800F3EF4_0000196C
    lwz r4, lbl_8087F8A0
    mr r3, r31
    lwz r4, 0x48(r4)
    bl fn_80103E60
    lwz r3, lbl_8087F8A0
    lwz r4, 0x48(r3)
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x2
    bne lbl_fn_800F3EF4_0000208C
    mr r3, r31
    bl fn_80103600
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    bl fn_80154488
lbl_fn_800F3EF4_0000208C:
    mr r23, r31
    addi r24, r31, 0x150
    li r22, 0x0
lbl_fn_800F3EF4_00002098:
    lwz r0, 0x154(r23)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_800F3EF4_000020B8
    lwz r0, 0x154(r23)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x154(r23)
lbl_fn_800F3EF4_000020B8:
    lwz r0, 0x154(r23)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_800F3EF4_000020E0
    lwz r12, 0x0(r24)
    mr r3, r24
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_800F3EF4_000020E0:
    addi r22, r22, 0x1
    addi r24, r24, 0xa0
    cmplwi r22, 0x100
    addi r23, r23, 0xa0
    blt lbl_fn_800F3EF4_00002098
    addis r24, r31, 0x1
    mr r23, r31
    li r22, 0x0
    subi r24, r24, 0x5eb0
lbl_fn_800F3EF4_00002104:
    addis r3, r23, 0x1
    lwz r0, -0x5eac(r3)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_800F3EF4_00002130
    lwz r12, 0x0(r24)
    mr r3, r24
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_800F3EF4_00002130:
    addi r22, r22, 0x1
    addi r24, r24, 0xc8
    cmplwi r22, 0x20
    addi r23, r23, 0xc8
    blt lbl_fn_800F3EF4_00002104
    addis r7, r31, 0x1
    mr r4, r7
    subi r7, r7, 0x3450
    b lbl_fn_800F3EF4_000021BC
lbl_fn_800F3EF4_00002154:
    lwz r3, 0x4(r7)
    subic. r0, r3, 0x1
    stw r0, 0x4(r7)
    bgt lbl_fn_800F3EF4_000021B8
    addis r5, r31, 0x1
    subi r0, r5, 0x3450
    subf r0, r0, r7
    srawi r0, r0, 3
    addze r6, r0
    slwi r0, r6, 3
    add r8, r31, r0
    b lbl_fn_800F3EF4_000021A0
lbl_fn_800F3EF4_00002184:
    addis r3, r8, 0x1
    addi r8, r8, 0x8
    lfs f0, -0x3448(r3)
    addi r6, r6, 0x1
    stfs f0, -0x3450(r3)
    lwz r0, -0x3444(r3)
    stw r0, -0x344c(r3)
lbl_fn_800F3EF4_000021A0:
    lwz r3, -0x3454(r5)
    subi r0, r3, 0x1
    cmplw r6, r0
    blt lbl_fn_800F3EF4_00002184
    stw r0, -0x3454(r5)
    b lbl_fn_800F3EF4_000021BC
lbl_fn_800F3EF4_000021B8:
    addi r7, r7, 0x8
lbl_fn_800F3EF4_000021BC:
    lwz r0, -0x3454(r4)
    slwi r0, r0, 3
    add r3, r4, r0
    subi r0, r3, 0x3450
    cmplw r7, r0
    bne lbl_fn_800F3EF4_00002154
    mr r3, r31
    bl fn_80103FD4
    mr r3, r31
    li r4, 0x0
    bl fn_801055A8
    mr r3, r31
    bl fn_80109F7C
    lwz r3, lbl_8087F430
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_0000232C
    lwz r3, lbl_8087F408
    lwz r4, 0x48(r3)
    b lbl_fn_800F3EF4_000022AC
lbl_fn_800F3EF4_0000220C:
    lwz r7, 0x38(r4)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F3EF4_00002238
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F3EF4_00002238
    li r6, 0x1
lbl_fn_800F3EF4_00002238:
    cmpwi r6, 0x0
    beq lbl_fn_800F3EF4_00002254
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F3EF4_00002254
    li r3, 0x1
lbl_fn_800F3EF4_00002254:
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00002288
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F3EF4_0000227C
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_800F3EF4_0000227C
    li r3, 0x1
lbl_fn_800F3EF4_0000227C:
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_00002288
    li r5, 0x1
lbl_fn_800F3EF4_00002288:
    cmpwi r5, 0x0
    beq lbl_fn_800F3EF4_000022A8
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F3EF4_000022A8
    li r0, 0x1
    b lbl_fn_800F3EF4_000022B8
lbl_fn_800F3EF4_000022A8:
    lwz r4, 0x14ac(r4)
lbl_fn_800F3EF4_000022AC:
    cmpwi r4, 0x0
    bne lbl_fn_800F3EF4_0000220C
    li r0, 0x0
lbl_fn_800F3EF4_000022B8:
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_0000232C
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800F3EF4_000022E0
    addis r3, r31, 0x4
    lfs f8, -0x75c4(r3)
    b lbl_fn_800F3EF4_000022E4
lbl_fn_800F3EF4_000022E0:
    lfs f8, lbl_80881494
lbl_fn_800F3EF4_000022E4:
    addis r3, r31, 0x4
    lfs f9, lbl_80881478
    lfs f7, -0x75f0(r3)
    lfs f0, -0x75fc(r3)
    fnmsubs f0, f7, f8, f0
    fcmpo cr0, f0, f9
    ble lbl_fn_800F3EF4_00002324
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_00002310
    lfs f8, -0x75c4(r3)
    b lbl_fn_800F3EF4_00002314
lbl_fn_800F3EF4_00002310:
    lfs f8, lbl_80881494
lbl_fn_800F3EF4_00002314:
    addis r3, r31, 0x4
    lfs f7, -0x75f0(r3)
    lfs f0, -0x75fc(r3)
    fnmsubs f9, f7, f8, f0
lbl_fn_800F3EF4_00002324:
    addis r3, r31, 0x4
    stfs f9, -0x75fc(r3)
lbl_fn_800F3EF4_0000232C:
    mr r3, r31
    bl fn_8010ACCC
    mr r3, r31
    bl fn_8010AEF4
    mr r3, r31
    bl fn_8010C3E4
    mr r3, r31
    bl fn_80107584
    mr r3, r31
    bl fn_8010A868
    addis r3, r31, 0x4
    li r0, 0x0
    subi r6, r3, 0x732c
    stw r6, 0x30(r1)
    stw r0, 0x34(r1)
    stw r6, 0x10(r1)
    stw r0, 0x14(r1)
    stw r6, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r0, 0x24(r1)
    stw r6, 0x50(r1)
    stw r0, 0x54(r1)
    stw r6, 0x58(r1)
    stw r0, 0x5c(r1)
    b lbl_fn_800F3EF4_0000249C
lbl_fn_800F3EF4_00002394:
    lwz r7, 0x58(r1)
    lwz r8, 0x5c(r1)
    lwz r0, 0x504(r7)
    add r0, r0, r8
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r5, r7, r0
    lwz r4, 0x28(r5)
    addi r0, r4, 0x1
    stw r0, 0x28(r5)
    lwz r0, 0x504(r7)
    add r0, r0, r8
    clrlwi r0, r0, 27
    mulli r0, r0, 0x28
    add r4, r7, r0
    lwz r0, 0x28(r4)
    cmpwi r0, 0x3c
    blt lbl_fn_800F3EF4_00002490
    lwz r8, 0x5c(r1)
    addis r7, r31, 0x4
    lwz r0, 0x58(r1)
    subi r7, r7, 0x732c
    stw r0, 0x40(r1)
    stw r8, 0x44(r1)
    b lbl_fn_800F3EF4_00002460
lbl_fn_800F3EF4_000023F8:
    lwz r0, 0x504(r7)
    add r5, r0, r8
    addi r8, r8, 0x1
    addi r0, r5, 0x1
    clrlwi r4, r0, 27
    clrlwi r0, r5, 27
    mulli r5, r4, 0x28
    mulli r4, r0, 0x28
    add r5, r7, r5
    lwz r0, 0x4(r5)
    add r4, r7, r4
    stw r0, 0x4(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    lfs f2, 0x14(r5)
    psq_l f1, 0xc(r5), 0, 0
    psq_st f1, 0xc(r4), 0, 0
    stfs f2, 0x14(r4)
    lfs f2, 0x20(r5)
    psq_l f1, 0x18(r5), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    lfs f0, 0x24(r5)
    stfs f0, 0x24(r4)
    lwz r0, 0x28(r5)
    stw r0, 0x28(r4)
lbl_fn_800F3EF4_00002460:
    lwz r4, 0x0(r7)
    subi r5, r4, 0x1
    cmplw r8, r5
    blt lbl_fn_800F3EF4_000023F8
    lwz r4, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r5, 0x0(r7)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    b lbl_fn_800F3EF4_0000249C
lbl_fn_800F3EF4_00002490:
    lwz r4, 0x5c(r1)
    addi r0, r4, 0x1
    stw r0, 0x5c(r1)
lbl_fn_800F3EF4_0000249C:
    lwz r4, -0x732c(r3)
    lwz r0, 0x5c(r1)
    stw r6, 0x28(r1)
    cmplw r0, r4
    stw r4, 0x2c(r1)
    stw r6, 0x38(r1)
    stw r4, 0x3c(r1)
    bne lbl_fn_800F3EF4_00002394
    li r25, 0x0
    addi r30, r1, 0xd8
    mr r24, r25
    li r26, 0x0
    mr r28, r25
    mr r27, r25
lbl_fn_800F3EF4_000024D4:
    add r9, r31, r26
    addis r6, r9, 0x1
    lwz r7, -0x4398(r6)
    cmpwi r7, 0x0
    beq lbl_fn_800F3EF4_0000257C
    lwz r8, 0x38(r7)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r8, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F3EF4_00002514
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F3EF4_00002514
    li r5, 0x1
lbl_fn_800F3EF4_00002514:
    cmpwi r5, 0x0
    beq lbl_fn_800F3EF4_00002530
    lwz r0, 0x7e0(r7)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F3EF4_00002530
    li r3, 0x1
lbl_fn_800F3EF4_00002530:
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_00002564
    lwz r0, 0x55c(r7)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F3EF4_00002558
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_800F3EF4_00002558
    li r3, 0x1
lbl_fn_800F3EF4_00002558:
    cmpwi r3, 0x0
    bne lbl_fn_800F3EF4_00002564
    li r4, 0x1
lbl_fn_800F3EF4_00002564:
    cmpwi r4, 0x0
    bne lbl_fn_800F3EF4_0000257C
    add r3, r31, r26
    stw r24, -0x4398(r6)
    addis r3, r3, 0x1
    stw r24, -0x45b0(r3)
lbl_fn_800F3EF4_0000257C:
    addis r3, r9, 0x1
    lwz r0, -0x45b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F3EF4_000026E0
    lwz r22, -0x4398(r6)
    cmpwi r22, 0x0
    beq lbl_fn_800F3EF4_000026E0
    addis r0, r31, 0x1
    psq_l f2, 0xc0(r22), 0, 0
    add r29, r0, r26
    psq_l f3, 0xc8(r22), 0, 0
    psq_l f4, 0xd0(r22), 0, 0
    subi r4, r29, 0x45a4
    psq_l f5, 0xd8(r22), 0, 0
    addi r3, r1, 0x6c
    psq_l f6, 0xe0(r22), 0, 0
    psq_l f1, 0xb8(r22), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    lfs f8, 0xe0(r22)
    lfs f7, 0xd0(r22)
    lfs f0, 0xc0(r22)
    stfs f0, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f8, 0x74(r1)
    bl fn_805F9940
    lfs f8, 0xdc(r22)
    fmr f30, f1
    lfs f7, 0xcc(r22)
    addi r3, r1, 0x78
    lfs f0, 0xbc(r22)
    stfs f0, 0x78(r1)
    stfs f7, 0x7c(r1)
    stfs f8, 0x80(r1)
    bl fn_805F9940
    lfs f8, 0xd8(r22)
    fmr f31, f1
    lfs f7, 0xc8(r22)
    addi r3, r1, 0x84
    lfs f0, 0xb8(r22)
    stfs f0, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f8, 0x8c(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x60(r1)
    frsp f0, f30
    stfs f31, 0x64(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x68(r1)
    ble lbl_fn_800F3EF4_0000265C
    b lbl_fn_800F3EF4_00002660
lbl_fn_800F3EF4_0000265C:
    fmr f7, f0
lbl_fn_800F3EF4_00002660:
    lfs f8, 0x60(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_800F3EF4_00002670
    b lbl_fn_800F3EF4_00002688
lbl_fn_800F3EF4_00002670:
    lfs f8, 0x64(r1)
    lfs f0, 0x68(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_800F3EF4_00002684
    b lbl_fn_800F3EF4_00002688
lbl_fn_800F3EF4_00002684:
    fmr f8, f0
lbl_fn_800F3EF4_00002688:
    stfs f8, -0x4558(r29)
    addis r0, r31, 0x1
    add r3, r0, r26
    addi r5, r1, 0xd8
    stw r28, 0xd8(r1)
    subi r3, r3, 0x45ac
    li r4, 0x0
    bl fn_800902C0
    cmpwi r30, 0x0
    beq lbl_fn_800F3EF4_000026E0
    lwz r3, 0xd8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800F3EF4_000026E0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800F3EF4_000026DC
    addi r3, r30, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800F3EF4_000026DC:
    stw r27, 0xd8(r1)
lbl_fn_800F3EF4_000026E0:
    addi r25, r25, 0x1
    addi r26, r26, 0x21c
    cmplwi r25, 0x8
    blt lbl_fn_800F3EF4_000024D4
lbl_fn_800F3EF4_000026F0:
    addi r11, r1, 0x120
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    psq_l f26, 0x128(r1), 0, 0
    lfd f26, 0x120(r1)
    bl _restgpr_22
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}
