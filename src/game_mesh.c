#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004B290(void);
extern void fn_8005B9CC(void);
extern void fn_80079044(void);
extern void fn_800790D0(void);
extern void fn_80079BC8(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087BB4(void);
extern void fn_80087E9C(void);
extern void fn_8008826C(void);
extern void fn_80088AF4(void);
extern void fn_8008937C(void);
extern void fn_800B2E2C(void);
extern void fn_800B3A94(void);
extern void fn_800B66A4(void);
extern void fn_800B675C(void);
extern void fn_800B68BC(void);
extern void fn_800B6BEC(void);
extern void fn_800B95C4(void);
extern void fn_800BD94C(void);
extern void fn_800C1A1C(void);
extern void fn_800C2448(void);
extern void fn_800C2E30(void);
extern void fn_800D5738(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_805F98D0(void);
extern void fn_806052C0(void);
extern void fn_80615E00(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806249F0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_80732F00[];
extern u8 lbl_807336B0[];
extern u8 lbl_80778F90[];
extern u8 lbl_80778FD0[];
extern u8 lbl_80779010[];
extern u8 lbl_80779048[];
extern u8 lbl_8077906C[];
extern u8 lbl_8077927C[];
extern u8 lbl_80779298[];
extern u8 lbl_807792A8[];
extern u8 lbl_807792B4[];

/* Small data declarations */
extern u32 lbl_8087D81C;
extern u32 lbl_8087D8F8;
extern u32 lbl_8087D8FC;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFB8;
extern u32 lbl_80880FB8;
extern u32 lbl_80880FBC;
extern u32 lbl_80880FC8;
extern u32 lbl_80880FD8;
extern u32 lbl_80880FE4;
extern u32 lbl_80880FF0;
extern u32 lbl_80880FF8;
extern u32 lbl_80881010;
extern u32 lbl_8088101C;
extern u32 lbl_80881028;
extern u32 lbl_80881030;
extern u32 lbl_80881044;
extern u32 lbl_80881054;
extern u32 lbl_80881058;
extern u32 lbl_8088105C;
extern u32 lbl_80881060;
extern u32 lbl_80881064;
extern u32 lbl_80881088;
extern u32 lbl_8088108C;
extern u32 lbl_80881090;
extern u32 lbl_80881094;
extern u32 lbl_80881098;
extern u32 lbl_8088109C;
extern u32 lbl_808810A0;
extern u32 lbl_808810A4;
extern u32 lbl_808810A8;
extern u32 lbl_808810AC;

/* Function declarations */
void fn_800BB4FC(void);
void fn_800BB6C0(void);
void fn_800BB8D8(void);
void fn_800BB994(void);
void fn_800BBA64(void);
void fn_800BBBB0(void);
void fn_800BBD90(void);
void fn_800BBEFC(void);
void fn_800BBFE8(void);
void fn_800BC194(void);
void fn_800BC2E0(void);
void fn_800BC328(void);
void fn_800BC438(void);
void fn_800BC468(void);
void fn_800BC618(void);
void fn_800BC798(void);
void fn_800BC874(void);

asm void fn_800BB4FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80732F00@ha
    addi r31, r31, lbl_80732F00@l
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r31, 0x32d
    stw r29, 0x14(r1)
    mr r29, r3
    mr r5, r29
    mr r3, r30
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x8
    addi r5, r29, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x336
    addi r5, r29, 0x18
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x33c
    addi r5, r29, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881060
    mr r3, r30
    lfs f2, lbl_80881044
    addi r4, r31, 0x349
    lfs f3, lbl_8088101C
    addi r5, r29, 0x38
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80880FBC
    addi r4, r31, 0x353
    lfs f3, lbl_8088101C
    addi r5, r29, 0x28
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    lfs f1, lbl_80881064
    mr r3, r30
    lfs f2, lbl_80881010
    addi r4, r31, 0x35a
    lfs f3, lbl_8088101C
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881064
    mr r3, r30
    lfs f2, lbl_80881010
    addi r4, r31, 0x365
    lfs f3, lbl_8088101C
    addi r5, r29, 0x20
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x371
    addi r5, r29, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80880FF8
    addi r4, r31, 0x37b
    lfs f3, lbl_8088101C
    addi r5, r29, 0x44
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881064
    mr r3, r30
    lfs f2, lbl_80881010
    addi r4, r31, 0x382
    lfs f3, lbl_8088101C
    addi r5, r29, 0x24
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x38e
    addi r5, r29, 0xc
    li r6, 0x0
    li r7, 0x40
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BB6C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r25, r4
    mr r24, r3
    mr r3, r25
    bl fn_8005B9CC
    lis r27, lbl_80732F00@ha
    addi r28, r27, lbl_80732F00@l
    addi r4, r28, 0x741
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    stw r0, 0x0(r24)
    beq lbl_fn_800BB6C0_000003C8
    mr r3, r25
    bl fn_8005B9CC
    mr r26, r3
    li r29, 0x0
    li r30, 0x1
    li r31, 0x2
lbl_fn_800BB6C0_0000021C:
    mr r4, r26
    addi r3, r28, 0x744
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB6C0_00000264
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x28(r24)
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2c(r24)
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x30(r24)
    b lbl_fn_800BB6C0_000003B4
lbl_fn_800BB6C0_00000264:
    mr r4, r26
    addi r3, r28, 0x74a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB6C0_000002B0
    stw r29, 0x10(r24)
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x38(r24)
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3c(r24)
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x40(r24)
    b lbl_fn_800BB6C0_000003B4
lbl_fn_800BB6C0_000002B0:
    mr r4, r26
    addi r3, r28, 0x74e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB6C0_000002FC
    stw r30, 0x10(r24)
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x38(r24)
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3c(r24)
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x40(r24)
    b lbl_fn_800BB6C0_000003B4
lbl_fn_800BB6C0_000002FC:
    mr r4, r26
    addi r3, r28, 0x752
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB6C0_00000334
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1c(r24)
    mr r3, r25
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x20(r24)
    b lbl_fn_800BB6C0_000003B4
lbl_fn_800BB6C0_00000334:
    mr r4, r26
    addi r3, r28, 0x757
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB6C0_000003A8
    mr r3, r25
    bl fn_8005B9CC
    mr r26, r3
    addi r3, r28, 0x75c
    mr r4, r26
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB6C0_00000370
    stw r29, 0x18(r24)
    b lbl_fn_800BB6C0_000003B4
lbl_fn_800BB6C0_00000370:
    mr r4, r26
    addi r3, r28, 0x762
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB6C0_0000038C
    stw r30, 0x18(r24)
    b lbl_fn_800BB6C0_000003B4
lbl_fn_800BB6C0_0000038C:
    mr r4, r26
    addi r3, r28, 0x76c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB6C0_000003B4
    stw r31, 0x18(r24)
    b lbl_fn_800BB6C0_000003B4
lbl_fn_800BB6C0_000003A8:
    mr r3, r25
    bl fn_8005B9CC
    mr r26, r3
lbl_fn_800BB6C0_000003B4:
    mr r4, r26
    addi r3, r27, lbl_80732F00@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB6C0_0000021C
lbl_fn_800BB6C0_000003C8:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800BB8D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80732F00@ha
    addi r31, r31, lbl_80732F00@l
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r31, 0x25b
    stw r29, 0x14(r1)
    mr r29, r3
    mr r5, r29
    mr r3, r30
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x8
    addi r5, r29, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80880FD8
    addi r4, r31, 0x56e
    lfs f3, lbl_8088101C
    addi r5, r29, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80881064
    mr r3, r30
    lfs f2, lbl_80881010
    addi r4, r31, 0x573
    lfs f3, lbl_8088101C
    addi r5, r29, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BB994(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r4
    mr r27, r3
    mr r3, r28
    bl fn_8005B9CC
    lis r30, lbl_80732F00@ha
    addi r31, r30, lbl_80732F00@l
    addi r4, r31, 0x741
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    stw r0, 0x0(r27)
    beq lbl_fn_800BB994_00000554
    mr r3, r28
    bl fn_8005B9CC
    mr r29, r3
lbl_fn_800BB994_000004E4:
    mr r4, r29
    addi r3, r31, 0x773
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB994_0000050C
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r27)
    b lbl_fn_800BB994_00000540
lbl_fn_800BB994_0000050C:
    mr r4, r29
    addi r3, r31, 0x778
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB994_00000534
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r27)
    b lbl_fn_800BB994_00000540
lbl_fn_800BB994_00000534:
    mr r3, r28
    bl fn_8005B9CC
    mr r29, r3
lbl_fn_800BB994_00000540:
    mr r4, r29
    addi r3, r30, lbl_80732F00@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BB994_000004E4
lbl_fn_800BB994_00000554:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BBA64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80732F00@ha
    addi r31, r31, lbl_80732F00@l
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r31, 0x25b
    stw r29, 0x14(r1)
    mr r29, r3
    mr r5, r29
    mr r3, r30
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x8
    addi r5, r29, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80881064
    mr r3, r30
    lfs f2, lbl_80881010
    addi r4, r31, 0x573
    lfs f3, lbl_8088101C
    addi r5, r29, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80881010
    addi r4, r31, 0x2a1
    lfs f3, lbl_8088101C
    addi r5, r29, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80881010
    addi r4, r31, 0x57d
    lfs f3, lbl_80881054
    addi r5, r29, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80881028
    addi r4, r31, 0x584
    lfs f3, lbl_80881054
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80880FBC
    mr r3, r30
    lfs f2, lbl_80881028
    addi r4, r31, 0x58d
    lfs f3, lbl_80881054
    addi r5, r29, 0x24
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80880FBC
    addi r4, r31, 0x592
    lfs f3, lbl_80881054
    addi r5, r29, 0x2c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BBBB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r4
    mr r27, r3
    mr r3, r28
    bl fn_8005B9CC
    lis r30, lbl_80732F00@ha
    addi r31, r30, lbl_80732F00@l
    addi r4, r31, 0x741
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    stw r0, 0x0(r27)
    beq lbl_fn_800BBBB0_00000880
    mr r3, r28
    bl fn_8005B9CC
    mr r29, r3
lbl_fn_800BBBB0_00000700:
    mr r4, r29
    addi r3, r31, 0x773
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BBBB0_00000728
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r27)
    b lbl_fn_800BBBB0_0000086C
lbl_fn_800BBBB0_00000728:
    mr r4, r29
    addi r3, r31, 0x77d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BBBB0_00000760
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x14(r27)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x18(r27)
    b lbl_fn_800BBBB0_0000086C
lbl_fn_800BBBB0_00000760:
    mr r4, r29
    addi r3, r31, 0x783
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BBBB0_00000798
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r27)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10(r27)
    b lbl_fn_800BBBB0_0000086C
lbl_fn_800BBBB0_00000798:
    mr r4, r29
    addi r3, r31, 0x74a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BBBB0_000007D0
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1c(r27)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x20(r27)
    b lbl_fn_800BBBB0_0000086C
lbl_fn_800BBBB0_000007D0:
    mr r4, r29
    addi r3, r31, 0x752
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BBBB0_00000808
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x24(r27)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x28(r27)
    b lbl_fn_800BBBB0_0000086C
lbl_fn_800BBBB0_00000808:
    mr r4, r29
    addi r3, r31, 0x78a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BBBB0_00000860
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2c(r27)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x30(r27)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x34(r27)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x38(r27)
    b lbl_fn_800BBBB0_0000086C
lbl_fn_800BBBB0_00000860:
    mr r3, r28
    bl fn_8005B9CC
    mr r29, r3
lbl_fn_800BBBB0_0000086C:
    mr r4, r29
    addi r3, r30, lbl_80732F00@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BBBB0_00000700
lbl_fn_800BBBB0_00000880:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BBD90(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    mr r3, r29
    bl fn_8005B9CC
    lis r30, lbl_80732F00@ha
    addi r30, r30, lbl_80732F00@l
    addi r4, r30, 0x741
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BBD90_000009C8
    li r31, 0x1
    stw r31, 0x0(r28)
    mr r3, r29
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r28)
    mr r3, r29
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r29
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    mr r3, r29
    bl fn_8005B9CC
    bl fn_800DC288
    frsp f4, f31
    lfs f5, lbl_80880FBC
    frsp f3, f30
    stfs f31, 0x18(r1)
    frsp f0, f1
    mr r3, r29
    stfs f30, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f4, 0xc(r28)
    stfs f3, 0x10(r28)
    stfs f0, 0x14(r28)
    stfs f5, 0x18(r28)
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    mr r3, r29
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r29
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f30, 0x8(r1)
    frsp f2, f1
    addi r4, r1, 0x8
    mr r3, r29
    stfs f31, 0xc(r1)
    stfs f1, 0x10(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x1c(r28), 0, 0
    stfs f2, 0x24(r28)
    bl fn_8005B9CC
    addi r4, r30, 0x78f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BBD90_000009D0
    stw r31, 0x4(r28)
    b lbl_fn_800BBD90_000009D0
lbl_fn_800BBD90_000009C8:
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_fn_800BBD90_000009D0:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800BBEFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80732F00@ha
    addi r31, r31, lbl_80732F00@l
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r31, 0x5a9
    stw r29, 0x14(r1)
    mr r29, r3
    mr r5, r29
    mr r3, r30
    bl fn_80087994
    lfs f1, lbl_80880FE4
    mr r3, r30
    lfs f2, lbl_80880FBC
    addi r4, r31, 0x5b8
    lfs f3, lbl_8088101C
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80880FF0
    addi r4, r31, 0x5c2
    lfs f3, lbl_80880FD8
    addi r5, r29, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80880FBC
    addi r4, r31, 0x563
    lfs f3, lbl_8088101C
    addi r5, r29, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    mr r3, r30
    addi r4, r31, 0x5d0
    addi r5, r29, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BBFE8(void)
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
    mr r3, r30
    bl fn_8005B9CC
    lis r31, lbl_80732F00@ha
    addi r31, r31, lbl_80732F00@l
    addi r4, r31, 0x741
    bl fn_80682428
    cntlzw r0, r3
    mr r3, r30
    srwi r0, r0, 5
    stw r0, 0x0(r29)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x14(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x18(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1c(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x20(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x24(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x28(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2c(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x30(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x34(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x38(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3c(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x40(r29)
    mr r3, r30
    bl fn_8005B9CC
    addi r4, r31, 0x741
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    stw r0, 0x48(r29)
    beq lbl_fn_800BBFE8_00000C58
    li r0, 0x1
    stw r0, 0x0(r29)
lbl_fn_800BBFE8_00000C58:
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4c(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC12C
    li r0, 0x0
    stw r0, 0x44(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BC194(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80732F00@ha
    addi r31, r31, lbl_80732F00@l
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r31, 0x25b
    stw r29, 0x14(r1)
    mr r29, r3
    mr r5, r29
    mr r3, r30
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x2d2
    addi r5, r29, 0x44
    li r6, -0xa
    li r7, 0xa
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80881058
    addi r4, r31, 0x2db
    lfs f3, lbl_8088101C
    addi r5, r29, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80881058
    addi r4, r31, 0x2e1
    lfs f3, lbl_8088101C
    addi r5, r29, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80881058
    addi r4, r31, 0x2e7
    lfs f3, lbl_8088101C
    addi r5, r29, 0x24
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    lfs f1, lbl_8088105C
    mr r3, r30
    lfs f2, lbl_80880FC8
    addi r4, r31, 0x2ed
    lfs f3, lbl_8088101C
    addi r5, r29, 0x34
    li r6, 0x0
    li r7, 0x0
    bl fn_8008826C
    mr r3, r30
    addi r4, r31, 0x2f3
    addi r5, r29, 0x48
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80880FB8
    mr r3, r30
    lfs f2, lbl_80881058
    addi r4, r31, 0x2fe
    lfs f3, lbl_8088101C
    addi r5, r29, 0x4c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BC2E0(void)
{
    nofralloc
    lfs f0, lbl_80880FBC
    li r0, 0x0
    lfs f2, lbl_80880FB8
    lfs f1, lbl_80881030
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f2, 0x8(r3)
    stfs f1, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    blr
}

asm void fn_800BC328(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r26, r4
    mr r25, r3
    mr r3, r26
    bl fn_8005B9CC
    lis r30, lbl_80732F00@ha
    addi r31, r30, lbl_80732F00@l
    addi r4, r31, 0x741
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    stw r0, 0x4(r25)
    beq lbl_fn_800BC328_00000F28
    mr r3, r26
    bl fn_8005B9CC
    mr r28, r3
lbl_fn_800BC328_00000E78:
    mr r4, r28
    addi r3, r31, 0x793
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BC328_00000EA0
    mr r3, r26
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2c(r25)
    b lbl_fn_800BC328_00000F14
lbl_fn_800BC328_00000EA0:
    mr r4, r28
    addi r3, r31, 0x797
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BC328_00000EC8
    mr r3, r26
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r25)
    b lbl_fn_800BC328_00000F14
lbl_fn_800BC328_00000EC8:
    mr r4, r28
    addi r3, r31, 0x7a0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BC328_00000F08
    mr r29, r25
    li r27, 0x0
lbl_fn_800BC328_00000EE4:
    mr r3, r26
    bl fn_8005B9CC
    bl fn_800DC288
    addi r27, r27, 0x1
    stfs f1, 0xc(r29)
    cmpwi r27, 0x8
    addi r29, r29, 0x4
    blt lbl_fn_800BC328_00000EE4
    b lbl_fn_800BC328_00000F14
lbl_fn_800BC328_00000F08:
    mr r3, r26
    bl fn_8005B9CC
    mr r28, r3
lbl_fn_800BC328_00000F14:
    mr r4, r28
    addi r3, r30, lbl_80732F00@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800BC328_00000E78
lbl_fn_800BC328_00000F28:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800BC438(void)
{
    nofralloc
    lwz r5, 0x8(r3)
    lwz r0, 0x4(r3)
    cmpwi r5, 0x0
    clrlwi r4, r0, 26
    rlwimi r4, r5, 2, 3, 25
    stw r4, 0x0(r3)
    beqlr
    lwz r0, 0x44(r5)
    slwi r0, r0, 28
    or r0, r4, r0
    stw r0, 0x0(r3)
    blr
}

asm void fn_800BC468(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x1
    li r6, 0x0
    stw r0, 0x24(r1)
    li r7, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x100
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x1
    bl fn_80615E00
    lwz r0, 0x550(r30)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_800BC468_00000FE0
    bl fn_800827E0
    lis r7, lbl_807336B0@ha
    mr r4, r30
    addi r7, r7, lbl_807336B0@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    b lbl_fn_800BC468_00000FE4
lbl_fn_800BC468_00000FE0:
    mr r3, r0
lbl_fn_800BC468_00000FE4:
    li r0, 0x80
    mr r31, r3
    li r7, 0x0
    mtctr r0
lbl_fn_800BC468_00000FF4:
    subi r4, r7, 0x80
    lwz r0, lbl_8087D8F8
    slwi r10, r4, 2
    lwz r5, lbl_8087D8F8
    cmpw r10, r0
    extlwi r8, r7, 27, 2
    clrlwi r9, r7, 29
    bge lbl_fn_800BC468_00001018
    b lbl_fn_800BC468_00001030
lbl_fn_800BC468_00001018:
    lwz r0, lbl_8087D8FC
    lwz r4, lbl_8087D8FC
    cmpw r10, r0
    ble lbl_fn_800BC468_0000102C
    mr r10, r4
lbl_fn_800BC468_0000102C:
    mr r5, r10
lbl_fn_800BC468_00001030:
    add r0, r3, r8
    subi r4, r7, 0x7f
    add r6, r9, r0
    stbx r5, r9, r0
    addi r7, r7, 0x1
    slwi r10, r4, 2
    stb r5, 0x8(r6)
    extlwi r8, r7, 27, 2
    clrlwi r9, r7, 29
    stb r5, 0x10(r6)
    stb r5, 0x18(r6)
    lwz r0, lbl_8087D8F8
    lwz r5, lbl_8087D8F8
    cmpw r10, r0
    bge lbl_fn_800BC468_00001070
    b lbl_fn_800BC468_00001088
lbl_fn_800BC468_00001070:
    lwz r0, lbl_8087D8FC
    lwz r4, lbl_8087D8FC
    cmpw r10, r0
    ble lbl_fn_800BC468_00001084
    mr r10, r4
lbl_fn_800BC468_00001084:
    mr r5, r10
lbl_fn_800BC468_00001088:
    add r0, r3, r8
    addi r7, r7, 0x1
    add r6, r9, r0
    stbx r5, r9, r0
    stb r5, 0x8(r6)
    stb r5, 0x10(r6)
    stb r5, 0x18(r6)
    bdnz lbl_fn_800BC468_00000FF4
    mr r3, r29
    mr r4, r31
    li r5, 0x100
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x1
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80881088
    mr r3, r29
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    mr r3, r31
    mr r4, r30
    bl DCFlushRange
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BC618(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r3, 0x100
    li r4, 0x100
    li r5, 0x3
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    lwz r28, 0x52c(r29)
    mr r27, r3
    cmpwi r28, 0x0
    bne lbl_fn_800BC618_00001190
    bl fn_800827E0
    lis r7, lbl_807336B0@ha
    mr r4, r27
    addi r7, r7, lbl_807336B0@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    mr r28, r3
lbl_fn_800BC618_00001190:
    lis r6, 0x1
    li r8, 0x0
    addi r0, r6, -0x8000
    subi r7, r6, 0x1
    mtctr r0
lbl_fn_800BC618_000011A4:
    add. r0, r8, r31
    bge lbl_fn_800BC618_000011B0
    li r0, 0x0
lbl_fn_800BC618_000011B0:
    cmpw r0, r7
    ble lbl_fn_800BC618_000011BC
    subi r0, r6, 0x1
lbl_fn_800BC618_000011BC:
    clrlslwi r5, r0, 30, 2
    rlwinm r3, r0, 8, 16, 21
    rlwinm r4, r0, 26, 22, 27
    extrwi r0, r0, 2, 22
    add r3, r5, r3
    add r0, r4, r0
    add r0, r3, r0
    slwi r0, r0, 1
    sthx r8, r28, r0
    addi r8, r8, 0x1
    add. r0, r8, r31
    bge lbl_fn_800BC618_000011F0
    li r0, 0x0
lbl_fn_800BC618_000011F0:
    cmpw r0, r7
    ble lbl_fn_800BC618_000011FC
    subi r0, r6, 0x1
lbl_fn_800BC618_000011FC:
    clrlslwi r5, r0, 30, 2
    rlwinm r3, r0, 8, 16, 21
    rlwinm r4, r0, 26, 22, 27
    extrwi r0, r0, 2, 22
    add r3, r5, r3
    add r0, r4, r0
    add r0, r3, r0
    slwi r0, r0, 1
    sthx r8, r28, r0
    addi r8, r8, 0x1
    bdnz lbl_fn_800BC618_000011A4
    mr r3, r30
    mr r4, r28
    li r5, 0x100
    li r6, 0x100
    li r7, 0x3
    li r8, 0x0
    li r9, 0x1
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80881088
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    mr r3, r28
    mr r4, r27
    bl DCFlushRange
    stw r28, 0x52c(r29)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800BC798(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800B95C4
    bl fn_806249F0
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_800BC798_00001320
    bl fn_806052C0
    cmplwi r3, 0x1
    bne lbl_fn_800BC798_00001320
    lwz r3, lbl_8087EFA8
    li r7, 0x6
    li r6, 0x8
    li r5, 0xa
    stw r7, 0x3b0(r3)
    li r4, 0x10
    li r0, 0x0
    lwz r3, lbl_8087EFA8
    stw r6, 0x3b4(r3)
    lwz r3, lbl_8087EFA8
    stw r5, 0x3b8(r3)
    lwz r3, lbl_8087EFA8
    stw r4, 0x3bc(r3)
    lwz r3, lbl_8087EFA8
    stw r5, 0x3c0(r3)
    lwz r3, lbl_8087EFA8
    stw r6, 0x3c4(r3)
    lwz r3, lbl_8087EFA8
    stw r7, 0x3c8(r3)
    lwz r3, lbl_8087EFA8
    stw r0, 0x3ac(r3)
    b lbl_fn_800BC798_0000132C
lbl_fn_800BC798_00001320:
    lwz r3, lbl_8087EFA8
    li r0, 0x1
    stw r0, 0x3ac(r3)
lbl_fn_800BC798_0000132C:
    lwz r0, lbl_8087EFB4
    cmpwi r0, 0x0
    bne lbl_fn_800BC798_00001368
    lis r5, lbl_807336B0@ha
    lis r3, 0x5
    addi r5, r5, lbl_807336B0@l
    li r4, 0x6
    mr r6, r5
    addi r3, r3, 0x4968
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC798_00001364
    bl fn_800BC874
lbl_fn_800BC798_00001364:
    stw r3, lbl_8087EFB4
lbl_fn_800BC798_00001368:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800BC874(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    lfs f0, lbl_80881088
    li r4, 0x0
    stw r0, 0x184(r1)
    li r5, 0x0
    stw r31, 0x17c(r1)
    stw r30, 0x178(r1)
    li r30, 0x0
    stw r29, 0x174(r1)
    mr r29, r3
    stw r28, 0x170(r1)
    stw r30, 0xf0(r3)
    stw r30, 0xf4(r3)
    stw r30, 0xf8(r3)
    stfs f0, 0xfc(r3)
    stfs f0, 0x100(r3)
    addi r3, r3, 0x104
    bl fn_8004B290
    li r0, -0x1
    stw r0, 0x2f8(r29)
    addi r3, r29, 0x318
    li r4, 0x0
    stw r30, 0x300(r29)
    li r5, 0x0
    stw r30, 0x314(r29)
    bl fn_8004B290
    stw r30, 0x52c(r29)
    addi r3, r29, 0x558
    li r4, 0x0
    li r5, 0x0
    stw r30, 0x550(r29)
    stw r30, 0x554(r29)
    bl fn_8004B290
    addi r3, r29, 0x74c
    bl fn_800D5738
    lfs f3, lbl_80881094
    addi r3, r29, 0x8b0
    lfs f5, lbl_8088108C
    addi r4, r1, 0xc8
    lfs f4, lbl_80881090
    li r5, 0x0
    lfs f0, lbl_80881098
    stfs f5, 0x898(r29)
    stfs f4, 0x89c(r29)
    stfs f3, 0x8a0(r29)
    stfs f3, 0x8a4(r29)
    stfs f3, 0x8a8(r29)
    stfs f0, 0x8ac(r29)
    stw r30, 0x890(r29)
    stw r30, 0x894(r29)
    stw r30, 0xc8(r1)
    bl fn_800BD94C
    addic. r3, r1, 0xc8
    beq lbl_fn_800BC874_00001488
    lwz r4, 0xc8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800BC874_00001488
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800BC874_00001480
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800BC874_00001480:
    li r0, 0x0
    stw r0, 0xc8(r1)
lbl_fn_800BC874_00001488:
    li r0, 0x0
    stw r0, 0xb4(r1)
    addi r3, r29, 0x8c8
    addi r4, r1, 0xb4
    li r5, 0x0
    bl fn_800BD94C
    addic. r3, r1, 0xb4
    beq lbl_fn_800BC874_000014DC
    lwz r4, 0xb4(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800BC874_000014DC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800BC874_000014D4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800BC874_000014D4:
    li r0, 0x0
    stw r0, 0xb4(r1)
lbl_fn_800BC874_000014DC:
    li r0, 0x0
    stw r0, 0xa0(r1)
    addi r3, r29, 0x8e0
    addi r4, r1, 0xa0
    li r5, 0x0
    bl fn_800BD94C
    addic. r3, r1, 0xa0
    beq lbl_fn_800BC874_00001530
    lwz r4, 0xa0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800BC874_00001530
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800BC874_00001528
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800BC874_00001528:
    li r0, 0x0
    stw r0, 0xa0(r1)
lbl_fn_800BC874_00001530:
    li r0, 0x0
    stw r0, 0x8c(r1)
    addi r3, r29, 0x8f8
    addi r4, r1, 0x8c
    li r5, 0x0
    bl fn_800BD94C
    addic. r3, r1, 0x8c
    beq lbl_fn_800BC874_00001584
    lwz r4, 0x8c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800BC874_00001584
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800BC874_0000157C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800BC874_0000157C:
    li r0, 0x0
    stw r0, 0x8c(r1)
lbl_fn_800BC874_00001584:
    addis r4, r29, 0x1
    li r6, 0x0
    addis r3, r4, 0x5
    stw r6, 0x910(r29)
    subi r8, r3, 0x3ffc
    lfs f0, lbl_80881098
    stw r6, 0x958(r29)
    subi r7, r4, 0x76a0
    li r5, 0x0
    subi r8, r8, 0x76a4
    stw r6, -0x76a4(r4)
    la r4, lbl_8087D81C
    stw r6, 0x20(r1)
    stw r6, 0x24(r1)
    stw r6, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r6, 0x34(r1)
    stw r6, 0x38(r1)
    stw r6, 0x3c(r1)
lbl_fn_800BC874_000015D4:
    stw r6, 0x4(r7)
    cmpwi r6, 0x0
    stw r6, 0x8(r7)
    stw r6, 0xc(r7)
    stw r6, 0x10(r7)
    stw r6, 0x14(r7)
    stw r6, 0x18(r7)
    stw r6, 0x1c(r7)
    stw r6, 0x20(r7)
    stfs f0, 0x24(r7)
    stfs f0, 0x28(r7)
    stfs f0, 0x2c(r7)
    stfs f0, 0x30(r7)
    stw r6, 0x34(r7)
    stw r4, 0x38(r7)
    stw r6, 0x3c(r7)
    stw r5, 0x40(r7)
    stw r5, 0x44(r7)
    stw r5, 0x48(r7)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stw r6, 0x0(r7)
    beq lbl_fn_800BC874_0000164C
    lwz r0, 0x44(r6)
    lwz r3, 0x0(r7)
    slwi r0, r0, 28
    or r0, r3, r0
    stw r0, 0x0(r7)
lbl_fn_800BC874_0000164C:
    addi r7, r7, 0x4c
    cmplw r7, r8
    blt lbl_fn_800BC874_000015D4
    addis r6, r29, 0x5
    li r0, 0x0
    stw r0, 0x4960(r6)
    addi r3, r29, 0x50
    li r4, 0x0
    li r5, 0x50
    stw r0, 0x4964(r6)
    bl memset
    addi r3, r29, 0xa0
    li r4, 0x0
    li r5, 0x50
    bl memset
    mr r3, r29
    li r4, 0x0
    li r5, 0x50
    bl memset
    lis r5, lbl_807336B0@ha
    li r3, 0x2b4
    addi r5, r5, lbl_807336B0@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r0, r3
    beq lbl_fn_800BC874_000016C8
    bl fn_800C1A1C
    mr r0, r3
lbl_fn_800BC874_000016C8:
    stw r0, lbl_8087EFB8
    addi r3, r1, 0x120
    stw r0, 0x2fc(r29)
    bl fn_80079044
    lfs f3, lbl_8088109C
    addi r30, r1, 0x6c
    lfs f0, lbl_808810A0
    addi r5, r1, 0x60
    stfs f3, 0x60(r1)
    mr r3, r30
    lfs f2, lbl_808810A4
    mr r4, r30
    stfs f0, 0x64(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x74(r1)
    bl fn_805F98D0
    lfs f0, lbl_80881098
    mr r4, r30
    stfs f0, 0x50(r1)
    addi r3, r1, 0x120
    addi r5, r1, 0x50
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    bl fn_800790D0
    lwz r30, 0x2fc(r29)
    addi r4, r1, 0x128
    lfs f2, 0x130(r1)
    addi r8, r1, 0xe4
    lwz r9, 0x5c(r30)
    addi r3, r1, 0x134
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r1, 0xf0
    lwz r0, 0x60(r30)
    psq_st f1, 0x0(r8), 0, 0
    lwz r6, 0x120(r1)
    cmplw r9, r0
    stfs f2, 0xec(r1)
    lwz r5, 0x124(r1)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x13c(r1)
    lwz r4, 0x140(r1)
    lfs f9, 0x144(r1)
    lfs f8, 0x148(r1)
    lfs f7, 0x14c(r1)
    lfs f6, 0x150(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x158(r1)
    lfs f3, 0x15c(r1)
    lfs f0, 0x160(r1)
    stw r6, 0xdc(r1)
    stw r5, 0xe0(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xf8(r1)
    stw r4, 0xfc(r1)
    stfs f9, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f7, 0x108(r1)
    stfs f6, 0x10c(r1)
    stfs f5, 0x110(r1)
    stfs f4, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    bge lbl_fn_800BC874_0000183C
    mulli r0, r9, 0x44
    lwz r3, 0x58(r30)
    add. r3, r3, r0
    beq lbl_fn_800BC874_0000182C
    stw r6, 0x0(r3)
    psq_l f1, 0x0(r8), 0, 0
    stw r5, 0x4(r3)
    lfs f2, 0xec(r1)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0xf8(r1)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r4, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f8, 0x28(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
lbl_fn_800BC874_0000182C:
    lwz r3, 0x5c(r30)
    addi r0, r3, 0x1
    stw r0, 0x5c(r30)
    b lbl_fn_800BC874_00001C08
lbl_fn_800BC874_0000183C:
    li r0, 0x1
    stw r0, 0x1c(r1)
    lis r3, 0x3c4
    lwz r31, 0x60(r30)
    subi r0, r3, 0x3c3d
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_800BC874_00001880
    lis r4, lbl_807336B0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807336B0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800BC874_00001880:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r31, r0
    bge lbl_fn_800BC874_000018B8
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_800BC874_000018D8
lbl_fn_800BC874_000018B8:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r31, r0
    bge lbl_fn_800BC874_000018D8
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_800BC874_000018D8:
    lwz r4, 0x5c(r30)
    li r6, 0x0
    lwz r5, 0x60(r30)
    addi r7, r30, 0x60
    addi r0, r4, 0x1
    lis r3, 0x3c4
    subf r4, r5, r0
    stw r4, 0x8(r1)
    subi r0, r3, 0x3c3d
    lwz r31, 0x60(r30)
    stw r6, 0x78(r1)
    subf r0, r31, r0
    cmplw r4, r0
    stw r6, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r7, 0x84(r1)
    stw r6, 0x88(r1)
    ble lbl_fn_800BC874_00001944
    lis r4, lbl_807336B0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807336B0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800BC874_00001944:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r31, r0
    bge lbl_fn_800BC874_00001994
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_800BC874_00001988
    addi r3, r1, 0x8
lbl_fn_800BC874_00001988:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_800BC874_000019D8
lbl_fn_800BC874_00001994:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r31, r0
    bge lbl_fn_800BC874_000019D0
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_800BC874_000019C4
    addi r3, r1, 0x8
lbl_fn_800BC874_000019C4:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_800BC874_000019D8
lbl_fn_800BC874_000019D0:
    lis r3, 0x3c4
    subi r28, r3, 0x3c3d
lbl_fn_800BC874_000019D8:
    lis r3, 0x3c4
    subi r0, r3, 0x3c3d
    cmplw r28, r0
    ble lbl_fn_800BC874_00001A0C
    lis r4, lbl_807336B0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807336B0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800BC874_00001A0C:
    mulli r3, r28, 0x44
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_800BC874_00001A40
    lis r3, __files@ha
    lis r4, lbl_8077927C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077927C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800BC874_00001A40:
    lwz r5, 0x5c(r30)
    addi r7, r1, 0xe4
    lwz r0, 0x7c(r1)
    addi r6, r1, 0xf0
    mulli r4, r5, 0x44
    stw r31, 0x78(r1)
    stw r28, 0x80(r1)
    mulli r3, r0, 0x44
    add r0, r31, r4
    stw r5, 0x88(r1)
    add. r3, r3, r0
    beq lbl_fn_800BC874_00001AE8
    lwz r0, 0xdc(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xe0(r1)
    stw r0, 0x4(r3)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    lfs f2, 0xec(r1)
    stfs f2, 0x10(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    lfs f2, 0xf8(r1)
    stfs f2, 0x1c(r3)
    lwz r0, 0xfc(r1)
    stw r0, 0x20(r3)
    lfs f0, 0x100(r1)
    stfs f0, 0x24(r3)
    lfs f0, 0x104(r1)
    stfs f0, 0x28(r3)
    lfs f0, 0x108(r1)
    stfs f0, 0x2c(r3)
    lfs f0, 0x10c(r1)
    stfs f0, 0x30(r3)
    lfs f0, 0x110(r1)
    stfs f0, 0x34(r3)
    lfs f0, 0x114(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0x118(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0x11c(r1)
    stfs f0, 0x40(r3)
lbl_fn_800BC874_00001AE8:
    lwz r3, 0x5c(r30)
    lwz r0, 0x88(r1)
    lwz r5, 0x7c(r1)
    mulli r4, r3, 0x44
    lwz r7, 0x58(r30)
    addi r5, r5, 0x1
    stw r5, 0x7c(r1)
    mulli r0, r0, 0x44
    lwz r3, 0x78(r1)
    add r5, r7, r4
    add r6, r3, r0
    b lbl_fn_800BC874_00001BB4
lbl_fn_800BC874_00001B18:
    subic. r6, r6, 0x44
    subi r5, r5, 0x44
    beq lbl_fn_800BC874_00001B9C
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r6)
    lfs f0, 0x24(r5)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r5)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r5)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r5)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r5)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r5)
    stfs f0, 0x38(r6)
    lfs f0, 0x3c(r5)
    stfs f0, 0x3c(r6)
    lfs f0, 0x40(r5)
    stfs f0, 0x40(r6)
lbl_fn_800BC874_00001B9C:
    lwz r4, 0x88(r1)
    lwz r3, 0x7c(r1)
    subi r0, r4, 0x1
    stw r0, 0x88(r1)
    addi r0, r3, 0x1
    stw r0, 0x7c(r1)
lbl_fn_800BC874_00001BB4:
    cmplw r7, r5
    blt lbl_fn_800BC874_00001B18
    li r5, 0x0
    stw r5, 0x5c(r30)
    addic. r0, r1, 0x78
    lwz r0, 0x7c(r1)
    lwz r6, 0x60(r30)
    lwz r3, 0x80(r1)
    stw r3, 0x60(r30)
    lwz r4, 0x78(r1)
    lwz r3, 0x58(r30)
    stw r6, 0x80(r1)
    stw r4, 0x58(r30)
    stw r3, 0x78(r1)
    stw r0, 0x5c(r30)
    stw r5, 0x7c(r1)
    beq lbl_fn_800BC874_00001C08
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00001C08
    stw r5, 0x7c(r1)
    bl dtor_80084684
lbl_fn_800BC874_00001C08:
    lwz r3, lbl_8087EFA8
    lis r30, lbl_807336B0@ha
    addi r30, r30, lbl_807336B0@l
    lwz r3, 0x4c(r3)
    addi r4, r30, 0x15
    bl fn_8008937C
    mr r4, r3
    lwz r3, 0x2fc(r29)
    bl fn_800C2E30
    lwz r3, lbl_8087EFA8
    addi r4, r30, 0x20
    lwz r3, 0x4c(r3)
    bl fn_8008937C
    lwz r5, 0x2fc(r29)
    mr r28, r3
    addi r4, r30, 0x24
    li r6, 0x0
    addi r5, r5, 0x3c
    li r7, 0x6
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x2d
    lfs f2, lbl_808810A8
    addi r5, r5, 0x40
    lfs f3, lbl_80881098
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x37
    lfs f2, lbl_808810A8
    addi r5, r5, 0x44
    lfs f3, lbl_80881098
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x3f
    lfs f2, lbl_80881098
    addi r5, r5, 0x48
    lfs f3, lbl_808810AC
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x45
    lfs f2, lbl_80881098
    addi r5, r5, 0x4c
    lfs f3, lbl_808810AC
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x4b
    lfs f2, lbl_80881098
    addi r5, r5, 0x50
    lfs f3, lbl_808810AC
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r3, lbl_8087EFA8
    addi r4, r30, 0x51
    lwz r3, 0x4c(r3)
    bl fn_8008937C
    mr r28, r3
    lwz r3, 0x2fc(r29)
    li r4, 0x0
    bl fn_800C2448
    mr r4, r28
    bl fn_80079BC8
    lwz r3, lbl_8087EFA8
    addi r4, r30, 0x5a
    lwz r3, 0x4c(r3)
    bl fn_8008937C
    lwz r5, 0x2fc(r29)
    mr r28, r3
    lfs f1, lbl_80881088
    addi r4, r30, 0x62
    lfs f2, lbl_80881098
    addi r5, r5, 0xc
    lfs f3, lbl_808810AC
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x6c
    lfs f2, lbl_80881098
    addi r5, r5, 0x10
    lfs f3, lbl_808810AC
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x76
    lfs f2, lbl_80881098
    addi r5, r5, 0x14
    lfs f3, lbl_808810AC
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x80
    lfs f2, lbl_80881098
    addi r5, r5, 0x1c
    lfs f3, lbl_808810AC
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x85
    lfs f2, lbl_80881098
    addi r5, r5, 0x20
    lfs f3, lbl_808810AC
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x2fc(r29)
    mr r3, r28
    lfs f1, lbl_80881088
    addi r4, r30, 0x8a
    lfs f2, lbl_80881098
    addi r5, r5, 0x24
    lfs f3, lbl_808810AC
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r5, r30
    mr r6, r30
    li r3, 0x14
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00001EA0
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r5, lbl_807792B4@ha
    lis r4, lbl_80779010@ha
    addi r5, r5, lbl_807792B4@l
    stw r5, 0x8(r3)
    li r0, -0x1
    addi r4, r4, lbl_80779010@l
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r4, 0x0(r3)
lbl_fn_800BC874_00001EA0:
    lis r5, lbl_807336B0@ha
    stw r3, 0x8(r29)
    addi r5, r5, lbl_807336B0@l
    li r3, 0x500
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00001ECC
    bl fn_800B6BEC
lbl_fn_800BC874_00001ECC:
    lis r5, lbl_807336B0@ha
    stw r3, 0xc(r29)
    addi r5, r5, lbl_807336B0@l
    li r3, 0x30
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00001EF8
    bl fn_800B3A94
lbl_fn_800BC874_00001EF8:
    lis r5, lbl_807336B0@ha
    stw r3, 0x0(r29)
    addi r5, r5, lbl_807336B0@l
    li r3, 0x8c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00001F24
    bl fn_800B68BC
lbl_fn_800BC874_00001F24:
    lis r30, lbl_807336B0@ha
    li r0, 0x0
    addi r5, r30, lbl_807336B0@l
    stw r3, 0x10(r29)
    mr r6, r5
    li r3, 0x14
    stw r0, 0x14(r29)
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00001F80
    li r0, 0x1
    stw r0, 0x4(r3)
    addi r5, r30, lbl_807336B0@l
    lis r4, lbl_80779048@ha
    addi r0, r5, 0x8f
    stw r0, 0x8(r3)
    li r0, -0x1
    addi r4, r4, lbl_80779048@l
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r4, 0x0(r3)
lbl_fn_800BC874_00001F80:
    lis r30, lbl_807336B0@ha
    stw r3, 0x4(r29)
    addi r5, r30, lbl_807336B0@l
    li r3, 0x5c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00001FE0
    li r5, 0x1
    stw r5, 0x4(r3)
    addi r6, r30, lbl_807336B0@l
    lis r4, lbl_8077906C@ha
    addi r0, r6, 0x99
    stw r0, 0x8(r3)
    li r0, -0x1
    addi r4, r4, lbl_8077906C@l
    stw r0, 0xc(r3)
    li r0, 0x0
    stw r5, 0x10(r3)
    stw r4, 0x0(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
lbl_fn_800BC874_00001FE0:
    lis r30, lbl_807336B0@ha
    stw r3, 0x28(r29)
    addi r5, r30, lbl_807336B0@l
    li r3, 0x5c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00002044
    li r6, 0x1
    stw r6, 0x4(r3)
    addi r5, r30, lbl_807336B0@l
    lis r4, lbl_8077906C@ha
    addi r0, r5, 0xa4
    stw r0, 0x8(r3)
    li r0, 0x9
    li r5, -0x1
    stw r0, 0xc(r3)
    addi r4, r4, lbl_8077906C@l
    li r0, 0x0
    stw r5, 0x10(r3)
    stw r4, 0x0(r3)
    stw r6, 0x14(r3)
    stw r0, 0x18(r3)
lbl_fn_800BC874_00002044:
    lis r5, lbl_807336B0@ha
    stw r3, 0x18(r29)
    addi r5, r5, lbl_807336B0@l
    li r3, 0x5c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_000020A4
    li r6, 0x1
    stw r6, 0x4(r3)
    lis r5, lbl_807792A8@ha
    lis r4, lbl_80778FD0@ha
    addi r5, r5, lbl_807792A8@l
    stw r5, 0x8(r3)
    li r5, -0x1
    li r0, 0x0
    stw r5, 0xc(r3)
    addi r4, r4, lbl_80778FD0@l
    stw r5, 0x10(r3)
    stw r6, 0x14(r3)
    stw r0, 0x18(r3)
    stw r4, 0x0(r3)
lbl_fn_800BC874_000020A4:
    lis r30, lbl_807336B0@ha
    stw r3, 0x1c(r29)
    addi r5, r30, lbl_807336B0@l
    li r3, 0x5c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00002108
    li r0, 0x1
    stw r0, 0x4(r3)
    addi r5, r30, lbl_807336B0@l
    lis r4, lbl_8077906C@ha
    addi r0, r5, 0xae
    stw r0, 0x8(r3)
    li r0, 0xa
    li r5, -0x1
    stw r0, 0xc(r3)
    addi r4, r4, lbl_8077906C@l
    li r0, 0x0
    stw r5, 0x10(r3)
    stw r4, 0x0(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
lbl_fn_800BC874_00002108:
    lis r5, lbl_807336B0@ha
    stw r3, 0x20(r29)
    addi r5, r5, lbl_807336B0@l
    li r3, 0x5c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00002134
    bl fn_800B66A4
lbl_fn_800BC874_00002134:
    lis r30, lbl_807336B0@ha
    stw r3, 0x24(r29)
    addi r5, r30, lbl_807336B0@l
    li r3, 0x5c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00002194
    li r0, 0x1
    stw r0, 0x4(r3)
    addi r5, r30, lbl_807336B0@l
    lis r4, lbl_8077906C@ha
    addi r0, r5, 0xb7
    stw r0, 0x8(r3)
    li r5, -0x1
    addi r4, r4, lbl_8077906C@l
    stw r5, 0xc(r3)
    li r0, 0x0
    stw r5, 0x10(r3)
    stw r4, 0x0(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
lbl_fn_800BC874_00002194:
    lis r30, lbl_807336B0@ha
    stw r3, 0x2c(r29)
    addi r5, r30, lbl_807336B0@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_000021E8
    li r0, 0x1
    stw r0, 0x4(r3)
    addi r5, r30, lbl_807336B0@l
    lis r4, lbl_80779048@ha
    addi r0, r5, 0xbe
    stw r0, 0x8(r3)
    li r0, -0x1
    addi r4, r4, lbl_80779048@l
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r4, 0x0(r3)
lbl_fn_800BC874_000021E8:
    lis r30, lbl_807336B0@ha
    stw r3, 0x30(r29)
    addi r5, r30, lbl_807336B0@l
    li r3, 0x5c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00002248
    li r0, 0x1
    stw r0, 0x4(r3)
    addi r5, r30, lbl_807336B0@l
    lis r4, lbl_8077906C@ha
    addi r0, r5, 0xc8
    stw r0, 0x8(r3)
    li r5, -0x1
    addi r4, r4, lbl_8077906C@l
    stw r5, 0xc(r3)
    li r0, 0x0
    stw r5, 0x10(r3)
    stw r4, 0x0(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
lbl_fn_800BC874_00002248:
    lis r5, lbl_807336B0@ha
    stw r3, 0x34(r29)
    addi r5, r5, lbl_807336B0@l
    li r3, 0x1c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00002274
    bl fn_800B675C
lbl_fn_800BC874_00002274:
    lis r5, lbl_807336B0@ha
    stw r3, 0x38(r29)
    addi r5, r5, lbl_807336B0@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_000022A0
    bl fn_800B2E2C
lbl_fn_800BC874_000022A0:
    lis r30, lbl_807336B0@ha
    stw r3, 0x3c(r29)
    addi r5, r30, lbl_807336B0@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_000022F4
    li r0, 0x1
    stw r0, 0x4(r3)
    addi r5, r30, lbl_807336B0@l
    lis r4, lbl_80779048@ha
    addi r0, r5, 0xd1
    stw r0, 0x8(r3)
    li r0, -0x1
    addi r4, r4, lbl_80779048@l
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r4, 0x0(r3)
lbl_fn_800BC874_000022F4:
    lis r5, lbl_807336B0@ha
    stw r3, 0x48(r29)
    addi r5, r5, lbl_807336B0@l
    li r3, 0x5c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00002354
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r5, lbl_80779298@ha
    lis r4, lbl_80778F90@ha
    addi r5, r5, lbl_80779298@l
    stw r5, 0x8(r3)
    li r5, -0x1
    li r0, 0x0
    stw r5, 0xc(r3)
    addi r4, r4, lbl_80778F90@l
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r4, 0x0(r3)
lbl_fn_800BC874_00002354:
    lis r5, lbl_807336B0@ha
    stw r3, 0x40(r29)
    addi r5, r5, lbl_807336B0@l
    li r3, 0x1c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_00002380
    bl fn_800B675C
lbl_fn_800BC874_00002380:
    lis r30, lbl_807336B0@ha
    stw r3, 0x44(r29)
    addi r5, r30, lbl_807336B0@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_000023D4
    li r0, 0x1
    stw r0, 0x4(r3)
    addi r5, r30, lbl_807336B0@l
    lis r4, lbl_80779048@ha
    addi r0, r5, 0xdb
    stw r0, 0x8(r3)
    li r0, -0x1
    addi r4, r4, lbl_80779048@l
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r4, 0x0(r3)
lbl_fn_800BC874_000023D4:
    stw r3, 0x4c(r29)
    lis r3, lbl_807336B0@ha
    addi r3, r3, lbl_807336B0@l
    lwz r5, lbl_8087EFA8
    addi r4, r3, 0xe1
    lwz r3, 0x4c(r5)
    bl fn_8008937C
    mr r28, r3
    mr r30, r29
    li r31, 0x0
lbl_fn_800BC874_000023FC:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800BC874_0000241C
    lwz r12, 0x0(r3)
    mr r4, r28
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_800BC874_0000241C:
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmpwi r31, 0x14
    blt lbl_fn_800BC874_000023FC
    lwz r31, 0x17c(r1)
    mr r3, r29
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    lwz r28, 0x170(r1)
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}
