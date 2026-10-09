#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80014798(void);
extern void fn_8006AA20(void);
extern void fn_8006AD24(void);
extern void fn_8006BA30(void);
extern void fn_8006BD78(void);
extern void fn_8006F684(void);
extern void fn_800763C0(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D58A4(void);
extern void fn_800D5908(void);
extern void fn_800D594C(void);
extern void fn_800D59B8(void);
extern void fn_800DC978(void);
extern void fn_8046F544(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80473FCC(void);
extern void fn_805F93C0(void);
extern void fn_805F9EF0(void);
extern void fn_805FA710(void);
extern void fn_805FA770(void);
extern void fn_80614790(void);
extern void fn_806823B0(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80686A48(void);
extern void fn_8068A918(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073148C[];
extern u8 lbl_80731528[];
extern u8 lbl_80731530[];
extern u8 lbl_80731538[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D730;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F518;
extern u32 lbl_80880A38;
extern u32 lbl_80880A3C;
extern u32 lbl_80880A40;
extern u32 lbl_80880A44;
extern u32 lbl_80880A48;
extern u32 lbl_80880A4C;
extern u32 lbl_80880A50;

/* Function declarations */
void fn_8006C300(void);
void fn_8006C3F0(void);
void fn_8006C6A0(void);
void fn_8006C7FC(void);
void fn_8006C858(void);
void fn_8006C8F8(void);
void fn_8006CA14(void);
void fn_8006CA20(void);
void fn_8006CA80(void);
void fn_8006CABC(void);
void fn_8006D008(void);
void fn_8006D0C8(void);
void fn_8006D3F8(void);
void fn_8006D54C(void);
void fn_8006D680(void);
void fn_8006D7B0(void);

asm void fn_8006C300(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x224(r1)
    stmw r26, 0x208(r1)
    mr r26, r3
    mr r27, r5
    li r29, -0x1
    beq lbl_fn_8006C300_0000003C
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x8
    bl fn_800DC978
    addi r30, r1, 0x8
    b lbl_fn_8006C300_00000040
lbl_fn_8006C300_0000003C:
    mr r30, r4
lbl_fn_8006C300_00000040:
    li r28, 0x0
    li r31, 0x0
    b lbl_fn_8006C300_000000CC
lbl_fn_8006C300_0000004C:
    cmpwi r27, 0x0
    beq lbl_fn_8006C300_0000008C
    lwz r0, 0x8(r26)
    addi r3, r1, 0x108
    add r4, r0, r31
    lwz r0, 0x4(r4)
    srwi. r0, r0, 31
    bne lbl_fn_8006C300_00000074
    addi r4, r4, 0x5
    b lbl_fn_8006C300_00000078
lbl_fn_8006C300_00000074:
    lwz r4, 0xc(r4)
lbl_fn_8006C300_00000078:
    bl strcpy
    addi r3, r1, 0x108
    bl fn_800DC978
    addi r3, r1, 0x108
    b lbl_fn_8006C300_000000AC
lbl_fn_8006C300_0000008C:
    lwz r0, 0x8(r26)
    add r3, r0, r31
    lwz r0, 0x4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8006C300_000000A8
    addi r3, r3, 0x5
    b lbl_fn_8006C300_000000AC
lbl_fn_8006C300_000000A8:
    lwz r3, 0xc(r3)
lbl_fn_8006C300_000000AC:
    mr r4, r30
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8006C300_000000C4
    mr r29, r28
    b lbl_fn_8006C300_000000D8
lbl_fn_8006C300_000000C4:
    addi r28, r28, 0x1
    addi r31, r31, 0x10
lbl_fn_8006C300_000000CC:
    lwz r0, 0x4(r26)
    cmpw r28, r0
    blt lbl_fn_8006C300_0000004C
lbl_fn_8006C300_000000D8:
    mr r3, r29
    lmw r26, 0x208(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_8006C3F0(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stmw r17, 0x134(r1)
    li r27, 0x0
    mr r23, r4
    mr r22, r3
    mr r24, r5
    mr r25, r6
    mr r3, r23
    addi r26, r1, 0x8
    stw r27, 0x8(r1)
    bl fn_805F9EF0
    cmpwi r3, 0x0
    blt lbl_fn_8006C3F0_00000364
    addi r4, r1, 0x18
    bl fn_805FA710
    cmpwi r3, 0x0
    beq lbl_fn_8006C3F0_00000364
    lis r19, lbl_8073148C@ha
    rlwinm r29, r25, 0, 15, 15
    clrlwi r28, r25, 31
    li r31, 0x0
    addi r20, r19, lbl_8073148C@l
    li r30, 0x1
    li r21, 0x2
lbl_fn_8006C3F0_00000158:
    addi r3, r1, 0x18
    addi r4, r1, 0xc
    bl fn_805FA770
    cmpwi r3, 0x0
    bne lbl_fn_8006C3F0_00000218
    cmpwi r28, 0x0
    beq lbl_fn_8006C3F0_00000364
    lis r19, lbl_8073148C@ha
    lwz r17, 0x8(r1)
    addi r18, r19, lbl_8073148C@l
    b lbl_fn_8006C3F0_0000020C
lbl_fn_8006C3F0_00000184:
    lbz r0, 0x0(r23)
    cmpwi r0, 0x2f
    beq lbl_fn_8006C3F0_000001A0
    addi r3, r1, 0x28
    addi r4, r18, 0x32
    bl strcpy
    b lbl_fn_8006C3F0_000001AC
lbl_fn_8006C3F0_000001A0:
    addi r3, r1, 0x28
    addi r4, r19, lbl_8073148C@l
    bl strcpy
lbl_fn_8006C3F0_000001AC:
    mr r4, r23
    addi r3, r1, 0x28
    bl fn_806823B0
    mr r3, r23
    bl strlen
    add r3, r23, r3
    lbz r0, -0x1(r3)
    cmpwi r0, 0x2f
    beq lbl_fn_8006C3F0_000001DC
    addi r3, r1, 0x28
    addi r4, r18, 0x32
    bl fn_806823B0
lbl_fn_8006C3F0_000001DC:
    lwz r4, 0xc(r17)
    addi r3, r1, 0x28
    bl fn_806823B0
    mr r3, r22
    mr r5, r24
    mr r6, r25
    addi r4, r1, 0x28
    bl fn_8006C3F0
    add r27, r27, r3
    mr r3, r17
    lwz r17, 0x0(r17)
    bl dtor_80084684
lbl_fn_8006C3F0_0000020C:
    cmpwi r17, 0x0
    bne lbl_fn_8006C3F0_00000184
    b lbl_fn_8006C3F0_00000364
lbl_fn_8006C3F0_00000218:
    lwz r17, 0x14(r1)
    addi r4, r20, 0x34
    mr r3, r17
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8006C3F0_00000158
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8006C3F0_000002D0
    cmpwi r29, 0x0
    beq lbl_fn_8006C3F0_00000260
    mr r3, r22
    mr r5, r23
    mr r6, r17
    addi r4, r20, 0x39
    crclr 6
    bl fn_8006BD78
    b lbl_fn_8006C3F0_00000270
lbl_fn_8006C3F0_00000260:
    mr r3, r22
    mr r4, r17
    crclr 6
    bl fn_8006BD78
lbl_fn_8006C3F0_00000270:
    lwz r3, 0x4(r22)
    cmpwi r28, 0x0
    lwz r4, 0x8(r22)
    addi r27, r27, 0x1
    subi r0, r3, 0x1
    slwi r0, r0, 4
    stwx r30, r4, r0
    beq lbl_fn_8006C3F0_00000158
    addi r5, r19, lbl_8073148C@l
    li r3, 0x10
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    stw r3, 0x0(r26)
    beq lbl_fn_8006C3F0_00000364
    lwz r26, 0x0(r26)
    addi r4, r1, 0xc
    li r5, 0xc
    stw r31, 0x0(r26)
    addi r3, r26, 0x4
    bl memcpy
    b lbl_fn_8006C3F0_00000158
lbl_fn_8006C3F0_000002D0:
    cmpwi r24, 0x0
    beq lbl_fn_8006C3F0_00000314
    mr r3, r24
    addi r4, r20, 0x3f
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8006C3F0_00000314
    mr r3, r17
    bl strlen
    add r18, r17, r3
    mr r3, r24
    bl strlen
    mr r4, r24
    subf r3, r3, r18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8006C3F0_00000158
lbl_fn_8006C3F0_00000314:
    cmpwi r29, 0x0
    beq lbl_fn_8006C3F0_00000338
    mr r3, r22
    mr r5, r23
    mr r6, r17
    addi r4, r20, 0x39
    crclr 6
    bl fn_8006BD78
    b lbl_fn_8006C3F0_00000348
lbl_fn_8006C3F0_00000338:
    mr r3, r22
    mr r4, r17
    crclr 6
    bl fn_8006BD78
lbl_fn_8006C3F0_00000348:
    lwz r3, 0x4(r22)
    addi r27, r27, 0x1
    lwz r4, 0x8(r22)
    subi r0, r3, 0x1
    slwi r0, r0, 4
    stwx r21, r4, r0
    b lbl_fn_8006C3F0_00000158
lbl_fn_8006C3F0_00000364:
    lwz r3, lbl_8087F518
    cmpwi r3, 0x0
    beq lbl_fn_8006C3F0_00000388
    mr r4, r22
    mr r5, r23
    mr r6, r24
    mr r7, r25
    bl fn_8046F544
    add r27, r27, r3
lbl_fn_8006C3F0_00000388:
    mr r3, r27
    lmw r17, 0x134(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8006C6A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x1
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bne lbl_fn_8006C6A0_00000494
    bl fn_8006BA30
    cmpwi r3, 0x0
    bne lbl_fn_8006C6A0_00000434
    cmpwi r29, 0x0
    bne lbl_fn_8006C6A0_00000410
    lis r4, lbl_80731538@ha
    cmpwi r31, 0x0
    addi r4, r4, lbl_80731538@l
    mr r3, r27
    addi r5, r28, 0x1
    addi r6, r30, 0x1
    addi r7, r4, 0x22
    beq lbl_fn_8006C6A0_00000404
    addi r7, r4, 0x1c
lbl_fn_8006C6A0_00000404:
    crclr 6
    bl sprintf
    b lbl_fn_8006C6A0_000004E8
lbl_fn_8006C6A0_00000410:
    lis r4, lbl_80731538@ha
    mr r3, r27
    addi r4, r4, lbl_80731538@l
    addi r5, r28, 0x1
    addi r4, r4, 0x23
    addi r6, r30, 0x1
    crclr 6
    bl sprintf
    b lbl_fn_8006C6A0_000004E8
lbl_fn_8006C6A0_00000434:
    cmpwi r29, 0x0
    bne lbl_fn_8006C6A0_00000470
    lis r8, lbl_80731538@ha
    cmpwi r31, 0x0
    addi r8, r8, lbl_80731538@l
    mr r3, r27
    addi r4, r8, 0x3f
    addi r5, r28, 0x1
    addi r6, r30, 0x1
    addi r7, r8, 0x22
    beq lbl_fn_8006C6A0_00000464
    addi r7, r8, 0x1c
lbl_fn_8006C6A0_00000464:
    crclr 6
    bl sprintf
    b lbl_fn_8006C6A0_000004E8
lbl_fn_8006C6A0_00000470:
    lis r4, lbl_80731538@ha
    mr r3, r27
    addi r4, r4, lbl_80731538@l
    addi r5, r28, 0x1
    addi r4, r4, 0x5b
    addi r6, r30, 0x1
    crclr 6
    bl sprintf
    b lbl_fn_8006C6A0_000004E8
lbl_fn_8006C6A0_00000494:
    cmpwi r5, 0x0
    bne lbl_fn_8006C6A0_000004CC
    lis r8, lbl_80731538@ha
    cmpwi r7, 0x0
    addi r8, r8, lbl_80731538@l
    addi r5, r28, 0x1
    addi r4, r8, 0x77
    addi r6, r6, 0x1
    addi r7, r8, 0x22
    beq lbl_fn_8006C6A0_000004C0
    addi r7, r8, 0x1c
lbl_fn_8006C6A0_000004C0:
    crclr 6
    bl sprintf
    b lbl_fn_8006C6A0_000004E8
lbl_fn_8006C6A0_000004CC:
    lis r4, lbl_80731538@ha
    addi r5, r28, 0x1
    addi r4, r4, lbl_80731538@l
    addi r4, r4, 0x90
    crclr 6
    addi r6, r6, 0x1
    bl sprintf
lbl_fn_8006C6A0_000004E8:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8006C7FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087EEC8
    cmpwi r0, 0x0
    bne lbl_fn_8006C7FC_00000548
    lis r3, lbl_80731538@ha
    lis r6, 0x3
    addi r3, r3, lbl_80731538@l
    li r4, 0x6
    addi r5, r3, 0x22
    li r7, 0x0
    addi r3, r6, 0x4aa4
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8006C7FC_00000544
    bl fn_8006C8F8
lbl_fn_8006C7FC_00000544:
    stw r3, lbl_8087EEC8
lbl_fn_8006C7FC_00000548:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006C858(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8087EEC8
    cmpwi r31, 0x0
    beq lbl_fn_8006C858_000005E4
    beq lbl_fn_8006C858_000005DC
    addis r3, r31, 0x3
    addic. r3, r3, 0x3260
    beq lbl_fn_8006C858_0000058C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8006C858_0000058C:
    lis r4, fn_80014798@ha
    addi r3, r31, 0x10a0
    addi r4, r4, fn_80014798@l
    li r5, 0x8
    li r6, 0x38
    bl fn_806959D8
    lis r4, fn_8006CA20@ha
    addi r3, r31, 0xa80
    addi r4, r4, fn_8006CA20@l
    li r5, 0x1c
    li r6, 0x38
    bl fn_806959D8
    lis r4, fn_800D5808@ha
    mr r3, r31
    addi r4, r4, fn_800D5808@l
    li r5, 0x30
    li r6, 0x38
    bl fn_806959D8
    mr r3, r31
    bl dtor_80084684
lbl_fn_8006C858_000005DC:
    li r0, 0x0
    stw r0, lbl_8087EEC8
lbl_fn_8006C858_000005E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006C8F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    stw r0, 0x14(r1)
    li r6, 0x30
    addi r4, r4, fn_800D5738@l
    addi r5, r5, fn_800D5808@l
    stw r31, 0xc(r1)
    li r7, 0x38
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_806958E0
    lis r4, fn_8006CA14@ha
    lis r5, fn_8006CA20@ha
    addi r3, r30, 0xa80
    li r6, 0x1c
    addi r4, r4, fn_8006CA14@l
    addi r5, r5, fn_8006CA20@l
    li r7, 0x38
    bl fn_806958E0
    lis r4, fn_8006CA80@ha
    lis r5, fn_80014798@ha
    addi r3, r30, 0x10a0
    li r6, 0x8
    addi r4, r4, fn_8006CA80@l
    addi r5, r5, fn_80014798@l
    li r7, 0x38
    bl fn_806958E0
    addis r31, r30, 0x3
    addi r31, r31, 0x3260
    mr r3, r31
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    addis r6, r30, 0x3
    lfs f1, lbl_80880A38
    li r0, 0x0
    lfs f0, lbl_80880A3C
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r31)
    addi r3, r30, 0x3260
    li r4, 0x0
    lis r5, 0x1
    stw r0, 0x3298(r6)
    stw r0, 0x329c(r6)
    stw r0, 0x32a0(r6)
    stfs f1, 0x3294(r6)
    stfs f1, 0x328c(r6)
    stfs f1, 0x3288(r6)
    stfs f1, 0x3284(r6)
    stfs f1, 0x3280(r6)
    stfs f1, 0x3278(r6)
    stfs f1, 0x3274(r6)
    stfs f1, 0x3270(r6)
    stfs f1, 0x326c(r6)
    stfs f0, 0x3290(r6)
    stfs f0, 0x327c(r6)
    stfs f0, 0x3268(r6)
    bl memset
    addis r3, r30, 0x1
    li r4, 0x0
    lis r5, 0x2
    addi r3, r3, 0x3260
    bl memset
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006CA14(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x18(r3)
    blr
}

asm void fn_8006CA20(void)
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
    beq lbl_fn_8006CA20_00000764
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8006CA20_00000754
    bl fn_80084C24
lbl_fn_8006CA20_00000754:
    cmpwi r31, 0x0
    ble lbl_fn_8006CA20_00000764
    mr r3, r30
    bl dtor_80084684
lbl_fn_8006CA20_00000764:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006CA80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80473E74
    lis r4, lbl_8078FBB0@ha
    mr r3, r31
    addi r4, r4, lbl_8078FBB0@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006CABC(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stmw r14, 0xe8(r1)
    li r28, 0x0
    lis r29, lbl_80731538@ha
    lis r31, lbl_8078FBB0@ha
    addi r29, r29, lbl_80731538@l
    lbz r30, 0x14(r1)
    stw r0, 0xe0(r1)
    mr r15, r3
    mr r16, r4
    addi r23, r1, 0x79
    addi r22, r1, 0x91
    addi r21, r1, 0x61
    addi r26, r29, 0xb9
    addi r25, r1, 0x54
    addi r31, r31, lbl_8078FBB0@l
    li r19, 0x0
    stw r28, 0x90(r1)
    stw r28, 0x94(r1)
    stw r28, 0x98(r1)
lbl_fn_8006CABC_00000818:
    mr r14, r15
    li r18, 0x0
lbl_fn_8006CABC_00000820:
    lwz r0, 0xe0(r1)
    li r17, 0x0
    add r20, r14, r0
lbl_fn_8006CABC_0000082C:
    mr r4, r18
    mr r5, r19
    mr r6, r17
    addi r3, r1, 0xa0
    li r7, 0x0
    bl fn_8006C6A0
    mr r4, r16
    addi r3, r1, 0x84
    addi r5, r29, 0xa9
    bl fn_8006D008
    addi r3, r1, 0x78
    addi r4, r1, 0x84
    addi r5, r1, 0xa0
    bl fn_8006D008
    lwz r0, 0x90(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8006CABC_00000894
    lwz r4, 0x78(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8006CABC_00000894
    lwz r3, 0x7c(r1)
    lwz r0, 0x80(r1)
    stw r4, 0x90(r1)
    stw r3, 0x94(r1)
    stw r0, 0x98(r1)
    b lbl_fn_8006CABC_000008EC
lbl_fn_8006CABC_00000894:
    cmpwi r3, 0x0
    beq lbl_fn_8006CABC_000008A4
    lwz r5, 0x94(r1)
    b lbl_fn_8006CABC_000008AC
lbl_fn_8006CABC_000008A4:
    lbz r0, 0x90(r1)
    clrlwi r5, r0, 25
lbl_fn_8006CABC_000008AC:
    lwz r0, 0x78(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006CABC_000008C8
    lbz r0, 0x78(r1)
    mr r6, r23
    clrlwi r4, r0, 25
    b lbl_fn_8006CABC_000008D0
lbl_fn_8006CABC_000008C8:
    lwz r6, 0x80(r1)
    lwz r4, 0x7c(r1)
lbl_fn_8006CABC_000008D0:
    lbz r0, 0x34(r1)
    add r7, r6, r4
    stb r0, 0x30(r1)
    addi r3, r1, 0x90
    addi r8, r1, 0x30
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8006CABC_000008EC:
    lwz r0, 0x78(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006CABC_00000900
    lwz r3, 0x80(r1)
    bl dtor_80084684
lbl_fn_8006CABC_00000900:
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006CABC_00000914
    lwz r3, 0x8c(r1)
    bl dtor_80084684
lbl_fn_8006CABC_00000914:
    lwz r3, lbl_8087F518
    cmpwi r3, 0x0
    beq lbl_fn_8006CABC_000009CC
    lwz r0, 0x400c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8006CABC_000009CC
    lwz r0, 0x90(r1)
    addi r27, r29, 0xab
    srwi. r0, r0, 31
    bne lbl_fn_8006CABC_00000948
    lbz r0, 0x90(r1)
    clrlwi r24, r0, 25
    b lbl_fn_8006CABC_0000094C
lbl_fn_8006CABC_00000948:
    lwz r24, 0x94(r1)
lbl_fn_8006CABC_0000094C:
    lbz r0, 0x2c(r1)
    mr r3, r27
    stb r0, 0x28(r1)
    bl strlen
    mr r0, r3
    mr r5, r24
    mr r6, r27
    addi r3, r1, 0x90
    add r7, r27, r0
    addi r8, r1, 0x28
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x90(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006CABC_00000994
    lbz r0, 0x90(r1)
    clrlwi r24, r0, 25
    b lbl_fn_8006CABC_00000998
lbl_fn_8006CABC_00000994:
    lwz r24, 0x94(r1)
lbl_fn_8006CABC_00000998:
    lbz r0, 0x24(r1)
    addi r3, r1, 0xa0
    stb r0, 0x20(r1)
    bl strlen
    addi r6, r1, 0xa0
    mr r0, r3
    mr r7, r6
    mr r4, r24
    addi r3, r1, 0x90
    addi r8, r1, 0x20
    add r7, r7, r0
    li r5, 0x0
    bl fn_80013F78
lbl_fn_8006CABC_000009CC:
    lwz r0, 0x90(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006CABC_000009E0
    mr r3, r22
    b lbl_fn_8006CABC_000009E4
lbl_fn_8006CABC_000009E0:
    lwz r3, 0x98(r1)
lbl_fn_8006CABC_000009E4:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_8006CABC_00000BD4
    lwz r0, 0x90(r1)
    mr r3, r20
    srwi. r0, r0, 31
    bne lbl_fn_8006CABC_00000A08
    mr r4, r22
    b lbl_fn_8006CABC_00000A0C
lbl_fn_8006CABC_00000A08:
    lwz r4, 0x98(r1)
lbl_fn_8006CABC_00000A0C:
    bl fn_800D594C
    lwz r3, lbl_8087F518
    cmpwi r3, 0x0
    beq lbl_fn_8006CABC_00000AF8
    lwz r0, 0x400c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8006CABC_00000AF8
    mr r4, r16
    addi r3, r1, 0x6c
    addi r5, r29, 0xa9
    bl fn_8006D008
    addi r3, r1, 0x60
    addi r4, r1, 0x6c
    addi r5, r1, 0xa0
    bl fn_8006D008
    lwz r0, 0x90(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8006CABC_00000A78
    lwz r4, 0x60(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8006CABC_00000A78
    lwz r3, 0x64(r1)
    lwz r0, 0x68(r1)
    stw r4, 0x90(r1)
    stw r3, 0x94(r1)
    stw r0, 0x98(r1)
    b lbl_fn_8006CABC_00000AD0
lbl_fn_8006CABC_00000A78:
    cmpwi r3, 0x0
    beq lbl_fn_8006CABC_00000A88
    lwz r5, 0x94(r1)
    b lbl_fn_8006CABC_00000A90
lbl_fn_8006CABC_00000A88:
    lbz r0, 0x90(r1)
    clrlwi r5, r0, 25
lbl_fn_8006CABC_00000A90:
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006CABC_00000AAC
    lbz r0, 0x60(r1)
    mr r6, r21
    clrlwi r4, r0, 25
    b lbl_fn_8006CABC_00000AB4
lbl_fn_8006CABC_00000AAC:
    lwz r6, 0x68(r1)
    lwz r4, 0x64(r1)
lbl_fn_8006CABC_00000AB4:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r3, r1, 0x90
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8006CABC_00000AD0:
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006CABC_00000AE4
    lwz r3, 0x68(r1)
    bl dtor_80084684
lbl_fn_8006CABC_00000AE4:
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006CABC_00000AF8
    lwz r3, 0x74(r1)
    bl dtor_80084684
lbl_fn_8006CABC_00000AF8:
    stw r28, 0x54(r1)
    mr r3, r26
    stw r28, 0x58(r1)
    stw r28, 0x5c(r1)
    bl strlen
    mr r24, r3
    mr r3, r25
    mr r4, r24
    bl fn_80013DC4
    stb r30, 0x10(r1)
    mr r3, r25
    mr r6, r26
    add r7, r26, r24
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r25
    addi r3, r1, 0x90
    bl fn_8006AD24
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006CABC_00000B5C
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_8006CABC_00000B5C:
    addi r3, r1, 0x40
    bl fn_80473E74
    lwz r0, 0x90(r1)
    addi r3, r1, 0x40
    stw r31, 0x40(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006CABC_00000B80
    mr r4, r22
    b lbl_fn_8006CABC_00000B84
lbl_fn_8006CABC_00000B80:
    lwz r4, 0x98(r1)
lbl_fn_8006CABC_00000B84:
    bl fn_80473FCC
    addi r3, r1, 0x40
    bl fn_8047059C
    mr r24, r3
    addi r3, r1, 0x40
    bl fn_80470580
    mr r7, r3
    mr r3, r15
    mr r4, r18
    mr r5, r19
    mr r6, r17
    mr r8, r24
    bl fn_8006D54C
    addi r3, r1, 0x40
    li r4, 0x0
    bl fn_80473E8C
    addi r17, r17, 0x1
    addi r20, r20, 0x30
    cmpwi r17, 0x4
    blt lbl_fn_8006CABC_0000082C
lbl_fn_8006CABC_00000BD4:
    addi r18, r18, 0x1
    addi r14, r14, 0x180
    cmpwi r18, 0x7
    blt lbl_fn_8006CABC_00000820
    addi r19, r19, 0x1
    lwz r3, 0xe0(r1)
    cmpwi r19, 0x2
    addi r3, r3, 0xc0
    stw r3, 0xe0(r1)
    blt lbl_fn_8006CABC_00000818
    lis r5, lbl_80731538@ha
    mr r4, r16
    addi r5, r5, lbl_80731538@l
    addi r3, r1, 0x48
    addi r5, r5, 0xa9
    bl fn_8006D008
    lwz r0, 0x48(r1)
    lwz r14, lbl_8087D730
    srwi. r0, r0, 31
    bne lbl_fn_8006CABC_00000C30
    lbz r0, 0x48(r1)
    clrlwi r16, r0, 25
    b lbl_fn_8006CABC_00000C34
lbl_fn_8006CABC_00000C30:
    lwz r16, 0x4c(r1)
lbl_fn_8006CABC_00000C34:
    lbz r0, 0x8(r1)
    mr r3, r14
    stb r0, 0xc(r1)
    bl strlen
    mr r0, r3
    mr r4, r16
    mr r6, r14
    addi r3, r1, 0x48
    add r7, r14, r0
    addi r8, r1, 0xc
    li r5, 0x0
    bl fn_80013F78
    addi r3, r1, 0x38
    bl fn_80473E74
    lwz r0, 0x48(r1)
    lis r3, lbl_8078FBB0@ha
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x38(r1)
    srwi. r0, r0, 31
    addi r3, r1, 0x38
    bne lbl_fn_8006CABC_00000C90
    addi r4, r1, 0x49
    b lbl_fn_8006CABC_00000C94
lbl_fn_8006CABC_00000C90:
    lwz r4, 0x50(r1)
lbl_fn_8006CABC_00000C94:
    bl fn_80473FCC
    addi r3, r1, 0x38
    bl fn_8047059C
    mr r14, r3
    addi r3, r1, 0x38
    bl fn_80470580
    mr r4, r3
    mr r3, r15
    mr r5, r14
    bl fn_8006F684
    addi r3, r1, 0x38
    li r4, 0x0
    bl fn_80473E8C
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006CABC_00000CDC
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_8006CABC_00000CDC:
    lwz r0, 0x90(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006CABC_00000CF0
    lwz r3, 0x98(r1)
    bl dtor_80084684
lbl_fn_8006CABC_00000CF0:
    lmw r14, 0xe8(r1)
    li r3, 0x1
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8006D008(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stmw r27, 0x1c(r1)
    mr r28, r5
    mr r27, r3
    mr r30, r4
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r28
    bl strlen
    lwz r0, 0x0(r30)
    mr r31, r3
    srwi. r0, r0, 31
    bne lbl_fn_8006D008_00000D5C
    lbz r0, 0x0(r30)
    addi r29, r30, 0x1
    clrlwi r30, r0, 25
    b lbl_fn_8006D008_00000D64
lbl_fn_8006D008_00000D5C:
    lwz r29, 0x8(r30)
    lwz r30, 0x4(r30)
lbl_fn_8006D008_00000D64:
    mr r3, r27
    add r4, r30, r31
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r27
    stb r0, 0x10(r1)
    mr r6, r29
    add r7, r29, r30
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lbz r0, 0xc(r1)
    mr r4, r30
    stb r0, 0x8(r1)
    mr r6, r28
    add r7, r28, r31
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8006D0C8(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    addis r5, r3, 0x3
    stw r0, 0xe4(r1)
    stmw r14, 0x98(r1)
    lwz r0, 0x3298(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8006D0C8_000010E4
    li r0, 0x1
    stw r0, 0x329c(r5)
    lis r4, lbl_80731538@ha
    li r20, 0x0
    stw r20, 0x3298(r5)
    addi r4, r4, lbl_80731538@l
    addi r0, r3, 0x180
    lbz r21, 0x2c(r1)
    stw r3, 0x88(r1)
    addi r14, r3, 0x10e0
    lbz r22, 0x24(r1)
    addi r31, r1, 0x3d
    stw r20, 0x3c(r1)
    addi r19, r4, 0xab
    lbz r23, 0x1c(r1)
    addi r18, r4, 0xbd
    stw r20, 0x40(r1)
    addi r17, r4, 0xb9
    lbz r24, 0x14(r1)
    addi r16, r1, 0x30
    stw r20, 0x44(r1)
    li r27, 0x0
    lbz r25, 0xc(r1)
    stw r0, 0x8c(r1)
lbl_fn_8006D0C8_00000E48:
    lwz r3, 0x8c(r1)
    addi r28, r14, 0x8
    li r26, 0x1
    addi r30, r3, 0x30
    lwz r3, 0x88(r1)
    addi r29, r3, 0x1c
lbl_fn_8006D0C8_00000E60:
    mr r3, r30
    bl fn_800D58A4
    lwz r3, 0xb78(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8006D0C8_00000E78
    bl fn_80084C24
lbl_fn_8006D0C8_00000E78:
    stw r20, 0xb78(r29)
    mr r5, r27
    mr r6, r26
    addi r3, r1, 0x48
    li r4, 0x1
    li r7, 0x0
    bl fn_8006C6A0
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006D0C8_00000EAC
    lbz r0, 0x3c(r1)
    clrlwi r15, r0, 25
    b lbl_fn_8006D0C8_00000EB0
lbl_fn_8006D0C8_00000EAC:
    lwz r15, 0x40(r1)
lbl_fn_8006D0C8_00000EB0:
    stb r21, 0x28(r1)
    mr r3, r19
    bl strlen
    mr r0, r3
    mr r5, r15
    mr r6, r19
    addi r3, r1, 0x3c
    add r7, r19, r0
    addi r8, r1, 0x28
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006D0C8_00000EF4
    lbz r0, 0x3c(r1)
    clrlwi r15, r0, 25
    b lbl_fn_8006D0C8_00000EF8
lbl_fn_8006D0C8_00000EF4:
    lwz r15, 0x40(r1)
lbl_fn_8006D0C8_00000EF8:
    stb r22, 0x20(r1)
    addi r3, r1, 0x48
    bl strlen
    addi r6, r1, 0x48
    mr r0, r3
    mr r7, r6
    mr r4, r15
    addi r3, r1, 0x3c
    addi r8, r1, 0x20
    add r7, r7, r0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006D0C8_00000F3C
    mr r3, r31
    b lbl_fn_8006D0C8_00000F40
lbl_fn_8006D0C8_00000F3C:
    lwz r3, 0x44(r1)
lbl_fn_8006D0C8_00000F40:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_8006D0C8_000010A8
    lwz r0, 0x3c(r1)
    mr r3, r30
    srwi. r0, r0, 31
    bne lbl_fn_8006D0C8_00000F64
    mr r4, r31
    b lbl_fn_8006D0C8_00000F68
lbl_fn_8006D0C8_00000F64:
    lwz r4, 0x44(r1)
lbl_fn_8006D0C8_00000F68:
    bl fn_800D5908
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006D0C8_00000F84
    lbz r0, 0x3c(r1)
    clrlwi r15, r0, 25
    b lbl_fn_8006D0C8_00000F88
lbl_fn_8006D0C8_00000F84:
    lwz r15, 0x40(r1)
lbl_fn_8006D0C8_00000F88:
    stb r23, 0x18(r1)
    mr r3, r18
    bl strlen
    mr r0, r3
    mr r5, r15
    mr r6, r18
    addi r3, r1, 0x3c
    add r7, r18, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006D0C8_00000FCC
    lbz r0, 0x3c(r1)
    clrlwi r15, r0, 25
    b lbl_fn_8006D0C8_00000FD0
lbl_fn_8006D0C8_00000FCC:
    lwz r15, 0x40(r1)
lbl_fn_8006D0C8_00000FD0:
    stb r24, 0x10(r1)
    addi r3, r1, 0x48
    bl strlen
    addi r6, r1, 0x48
    mr r0, r3
    mr r7, r6
    mr r4, r15
    addi r3, r1, 0x3c
    addi r8, r1, 0x10
    add r7, r7, r0
    li r5, 0x0
    bl fn_80013F78
    stw r20, 0x30(r1)
    mr r3, r17
    stw r20, 0x34(r1)
    stw r20, 0x38(r1)
    bl strlen
    mr r15, r3
    mr r3, r16
    mr r4, r15
    bl fn_80013DC4
    stb r25, 0x8(r1)
    mr r3, r16
    mr r6, r17
    add r7, r17, r15
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r16
    addi r3, r1, 0x3c
    bl fn_8006AD24
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006D0C8_00001064
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_8006D0C8_00001064:
    lwz r0, 0x3c(r1)
    mr r3, r28
    srwi. r0, r0, 31
    bne lbl_fn_8006D0C8_0000107C
    mr r4, r31
    b lbl_fn_8006D0C8_00001080
lbl_fn_8006D0C8_0000107C:
    lwz r4, 0x44(r1)
lbl_fn_8006D0C8_00001080:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r26, r26, 0x1
    addi r29, r29, 0x1c
    cmpwi r26, 0x4
    addi r28, r28, 0x8
    addi r30, r30, 0x30
    blt lbl_fn_8006D0C8_00000E60
lbl_fn_8006D0C8_000010A8:
    lwz r3, 0x88(r1)
    addi r27, r27, 0x1
    cmpwi r27, 0x2
    addi r14, r14, 0x20
    addi r3, r3, 0x70
    stw r3, 0x88(r1)
    lwz r3, 0x8c(r1)
    addi r3, r3, 0xc0
    stw r3, 0x8c(r1)
    blt lbl_fn_8006D0C8_00000E48
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006D0C8_000010E4
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_8006D0C8_000010E4:
    lmw r14, 0x98(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8006D3F8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    addis r4, r3, 0x3
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    lwz r0, 0x329c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8006D3F8_00001124
    li r3, 0x0
    b lbl_fn_8006D3F8_00001238
lbl_fn_8006D3F8_00001124:
    addi r27, r3, 0x10e0
    addi r28, r3, 0x180
    mr r29, r27
    li r26, 0x0
lbl_fn_8006D3F8_00001134:
    addi r30, r28, 0x30
    addi r31, r29, 0x8
    li r25, 0x1
lbl_fn_8006D3F8_00001140:
    mr r3, r30
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_8006D3F8_00001158
    li r3, 0x1
    b lbl_fn_8006D3F8_00001238
lbl_fn_8006D3F8_00001158:
    mr r3, r31
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8006D3F8_00001170
    li r3, 0x1
    b lbl_fn_8006D3F8_00001238
lbl_fn_8006D3F8_00001170:
    addi r25, r25, 0x1
    addi r31, r31, 0x8
    cmpwi r25, 0x4
    addi r30, r30, 0x30
    blt lbl_fn_8006D3F8_00001140
    addi r26, r26, 0x1
    addi r29, r29, 0x20
    cmpwi r26, 0x2
    addi r28, r28, 0xc0
    blt lbl_fn_8006D3F8_00001134
    mr r30, r24
    li r25, 0x0
lbl_fn_8006D3F8_000011A0:
    addi r29, r30, 0x1c
    addi r28, r27, 0x8
    li r26, 0x1
lbl_fn_8006D3F8_000011AC:
    lwz r0, 0xb78(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8006D3F8_00001200
    mr r3, r28
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8006D3F8_00001200
    mr r3, r28
    bl fn_8047059C
    mr r31, r3
    mr r3, r28
    bl fn_80470580
    mr r7, r3
    mr r3, r24
    mr r5, r25
    mr r6, r26
    mr r8, r31
    li r4, 0x1
    bl fn_8006D54C
    mr r3, r28
    bl fn_80473F88
lbl_fn_8006D3F8_00001200:
    addi r26, r26, 0x1
    addi r28, r28, 0x8
    cmpwi r26, 0x4
    addi r29, r29, 0x1c
    blt lbl_fn_8006D3F8_000011AC
    addi r25, r25, 0x1
    addi r27, r27, 0x20
    cmpwi r25, 0x2
    addi r30, r30, 0x70
    blt lbl_fn_8006D3F8_000011A0
    addis r3, r24, 0x3
    li r0, 0x0
    stw r0, 0x329c(r3)
    li r3, 0x0
lbl_fn_8006D3F8_00001238:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8006D54C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mulli r12, r4, 0xe0
    lhz r8, 0x2(r7)
    stw r0, 0x24(r1)
    lis r10, lbl_80731530@ha
    lha r0, 0x4(r7)
    lis r11, lbl_80731528@ha
    stw r31, 0x1c(r1)
    lis r31, 0x4330
    xoris r9, r0, 0x8000
    lha r4, 0x6(r7)
    stw r8, 0xc(r1)
    mulli r5, r5, 0x70
    lha r0, 0x8(r7)
    xoris r8, r4, 0x8000
    stw r31, 0x8(r1)
    add r3, r3, r12
    lfd f4, lbl_80731530@l(r10)
    lfd f5, 0x8(r1)
    xoris r0, r0, 0x8000
    stw r31, 0x10(r1)
    lis r4, lbl_80731538@ha
    lfs f3, lbl_80880A40
    add r3, r3, r5
    stw r9, 0x14(r1)
    addi r4, r4, lbl_80731538@l
    addi r5, r4, 0x22
    lfd f6, lbl_80731528@l(r11)
    lfd f0, 0x10(r1)
    li r4, 0x6
    stw r8, 0xc(r1)
    fsubs f2, f0, f4
    stw r0, 0x14(r1)
    mulli r0, r6, 0x1c
    lfd f0, 0x8(r1)
    mr r6, r5
    fdivs f2, f2, f3
    stw r30, 0x18(r1)
    add r31, r3, r0
    lhz r0, 0x0(r7)
    mr r30, r7
    sth r0, 0xa90(r31)
    fsubs f1, f0, f4
    lfd f0, 0x10(r1)
    mulli r3, r0, 0xe
    li r7, 0x0
    fsubs f0, f0, f4
    fsubs f4, f5, f6
    fdivs f1, f1, f3
    stfs f4, 0xa84(r31)
    stfs f2, 0xa88(r31)
    stfs f1, 0xa8c(r31)
    fdivs f0, f0, f3
    stfs f0, 0xa94(r31)
    bl fn_800846FC
    stw r3, 0xa98(r31)
    addi r4, r30, 0xa
    lhz r0, 0xa90(r31)
    mulli r5, r0, 0xe
    bl memcpy
    lwz r4, 0xa98(r31)
    li r3, 0x1
    lhz r0, 0x0(r4)
    sth r0, 0xa80(r31)
    lhz r4, 0xa90(r31)
    lwz r5, 0xa98(r31)
    subi r0, r4, 0x1
    mulli r0, r0, 0xe
    lhzx r0, r5, r0
    sth r0, 0xa82(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8006D680(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r11, 0x0
    lfs f0, lbl_80880A44
    li r12, 0x0
    stw r31, 0x1c(r1)
    fcmpo cr0, f1, f0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    cror eq, lt, eq
    bne lbl_fn_8006D680_000013B0
    li r12, 0x1
lbl_fn_8006D680_000013B0:
    mulli r9, r12, 0x70
    stw r5, 0xc(r6)
    li r8, 0x1
    li r0, 0x4
    b lbl_fn_8006D680_0000148C
lbl_fn_8006D680_000013C4:
    li r31, 0x0
    li r10, 0x0
    mtctr r0
lbl_fn_8006D680_000013D0:
    cmplwi r31, 0x1
    blt lbl_fn_8006D680_000013DC
    stw r8, 0xc(r6)
lbl_fn_8006D680_000013DC:
    lwz r5, 0xc(r6)
    mulli r5, r5, 0xe0
    add r5, r3, r5
    add r5, r5, r9
    add r7, r5, r10
    lwz r30, 0xa98(r7)
    cmpwi r30, 0x0
    beq lbl_fn_8006D680_0000147C
    lhz r5, 0xa82(r7)
    cmplw r4, r5
    bgt lbl_fn_8006D680_00001470
    lhz r29, 0xa90(r7)
    cmpwi r29, 0x0
    beq lbl_fn_8006D680_00001470
    li r7, 0x0
    b lbl_fn_8006D680_00001460
lbl_fn_8006D680_0000141C:
    add r5, r7, r29
    srawi r28, r5, 1
    mulli r5, r28, 0xe
    lhzx r5, r30, r5
    cmplw r4, r5
    bne lbl_fn_8006D680_00001448
    stw r31, 0x0(r6)
    li r11, 0x1
    stw r28, 0x4(r6)
    stw r12, 0x8(r6)
    b lbl_fn_8006D680_00001468
lbl_fn_8006D680_00001448:
    cmplw r5, r4
    bge lbl_fn_8006D680_00001454
    addi r7, r28, 0x1
lbl_fn_8006D680_00001454:
    cmplw r5, r4
    blt lbl_fn_8006D680_00001460
    subi r29, r28, 0x1
lbl_fn_8006D680_00001460:
    cmpw r7, r29
    ble lbl_fn_8006D680_0000141C
lbl_fn_8006D680_00001468:
    cmpwi r11, 0x0
    bne lbl_fn_8006D680_0000147C
lbl_fn_8006D680_00001470:
    addi r10, r10, 0x1c
    addi r31, r31, 0x1
    bdnz lbl_fn_8006D680_000013D0
lbl_fn_8006D680_0000147C:
    cmpwi r11, 0x0
    bne lbl_fn_8006D680_00001494
    subi r9, r9, 0x70
    subi r12, r12, 0x1
lbl_fn_8006D680_0000148C:
    cmpwi r12, 0x0
    bge lbl_fn_8006D680_000013C4
lbl_fn_8006D680_00001494:
    lwz r31, 0x1c(r1)
    mr r3, r11
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_8006D7B0(void)
{
    nofralloc
    stwu r1, -0x4a0(r1)
    mflr r0
    stw r0, 0x4a4(r1)
    addi r11, r1, 0x380
    stfd f31, 0x490(r1)
    psq_st f31, 0x498(r1), 0, 0
    stfd f30, 0x480(r1)
    psq_st f30, 0x488(r1), 0, 0
    stfd f29, 0x470(r1)
    psq_st f29, 0x478(r1), 0, 0
    stfd f28, 0x460(r1)
    psq_st f28, 0x468(r1), 0, 0
    stfd f27, 0x450(r1)
    psq_st f27, 0x458(r1), 0, 0
    stfd f26, 0x440(r1)
    psq_st f26, 0x448(r1), 0, 0
    stfd f25, 0x430(r1)
    psq_st f25, 0x438(r1), 0, 0
    stfd f24, 0x420(r1)
    psq_st f24, 0x428(r1), 0, 0
    stfd f23, 0x410(r1)
    psq_st f23, 0x418(r1), 0, 0
    stfd f22, 0x400(r1)
    psq_st f22, 0x408(r1), 0, 0
    stfd f21, 0x3f0(r1)
    psq_st f21, 0x3f8(r1), 0, 0
    stfd f20, 0x3e0(r1)
    psq_st f20, 0x3e8(r1), 0, 0
    stfd f19, 0x3d0(r1)
    psq_st f19, 0x3d8(r1), 0, 0
    stfd f18, 0x3c0(r1)
    psq_st f18, 0x3c8(r1), 0, 0
    stfd f17, 0x3b0(r1)
    psq_st f17, 0x3b8(r1), 0, 0
    stfd f16, 0x3a0(r1)
    psq_st f16, 0x3a8(r1), 0, 0
    stfd f15, 0x390(r1)
    psq_st f15, 0x398(r1), 0, 0
    stfd f14, 0x380(r1)
    psq_st f14, 0x388(r1), 0, 0
    bl _savegpr_14
    fmr f15, f3
    lis r0, 0x4330
    fmr f22, f6
    stfs f1, 0x8(r1)
    mr r29, r3
    fmr f23, f7
    stfs f2, 0xc(r1)
    mr r30, r7
    mr r31, r9
    mr r3, r5
    stw r5, 0x14(r1)
    stfs f4, 0x10(r1)
    stw r0, 0x2e8(r1)
    stfs f5, 0x20(r1)
    stw r6, 0x18(r1)
    stw r0, 0x2f0(r1)
    stw r8, 0x1c(r1)
    bl fn_80686A48
    rlwinm r0, r30, 0, 30, 30
    stw r3, 0x330(r1)
    cmplwi r0, 0x2
    li r17, 0x0
    li r16, 0x0
    li r3, 0x0
    beq lbl_fn_8006D7B0_000015D0
    rlwinm r0, r30, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8006D7B0_000015D0
    rlwinm r0, r30, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8006D7B0_000015D4
lbl_fn_8006D7B0_000015D0:
    li r3, 0x1
lbl_fn_8006D7B0_000015D4:
    lfs f0, lbl_80880A40
    neg r0, r3
    stfd f0, 0x300(r1)
    or r0, r0, r3
    lfs f0, lbl_80880A48
    lis r3, lbl_80731530@ha
    stfd f0, 0x308(r1)
    srwi r4, r0, 31
    lfs f0, lbl_80880A4C
    addi r0, r4, 0x1
    stfd f0, 0x310(r1)
    addi r25, r1, 0x15c
    lfs f0, lbl_80880A50
    addi r24, r1, 0x2b8
    stw r0, 0x334(r1)
    li r0, 0x0
    lfs f18, lbl_80880A38
    addi r23, r1, 0x144
    lfs f21, lbl_80880A3C
    addi r22, r1, 0x2c4
    lfd f14, lbl_80731530@l(r3)
    addi r21, r1, 0x12c
    stfd f0, 0x318(r1)
    addi r20, r1, 0x2d0
    addi r19, r1, 0x114
    addi r18, r1, 0x2dc
    stw r0, 0x32c(r1)
    addi r14, r1, 0x1cc
    addi r26, r1, 0x1b4
    lis r28, 0xcc01
    b lbl_fn_8006D7B0_00002980
lbl_fn_8006D7B0_00001650:
    li r0, 0x0
    lfs f31, lbl_80880A38
    stw r0, 0x328(r1)
    b lbl_fn_8006D7B0_00002964
lbl_fn_8006D7B0_00001660:
    lwz r0, 0x328(r1)
    fmr f1, f15
    lwz r3, 0x14(r1)
    addi r6, r1, 0x2a8
    slwi r0, r0, 1
    lwz r5, 0x1c(r1)
    lhzx r0, r3, r0
    sth r0, 0x324(r1)
    mr r3, r29
    mr r4, r0
    bl fn_8006D680
    cmpwi r3, 0x0
    beq lbl_fn_8006D7B0_0000294C
    lwz r0, 0x2b4(r1)
    lwz r3, 0x2b0(r1)
    mulli r4, r0, 0x180
    lwz r0, 0x2a8(r1)
    mulli r5, r3, 0xc0
    add r4, r29, r4
    mulli r3, r0, 0x30
    add r0, r5, r4
    add r0, r3, r0
    cmplw r16, r0
    beq lbl_fn_8006D7B0_000016C8
    cmpwi r17, 0x0
    bgt lbl_fn_8006D7B0_000016D0
lbl_fn_8006D7B0_000016C8:
    cmpwi r17, 0x40
    blt lbl_fn_8006D7B0_000018D4
lbl_fn_8006D7B0_000016D0:
    rlwinm r0, r30, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8006D7B0_000017E8
    lwz r3, lbl_8087EEE0
    mr r5, r16
    li r4, 0x0
    bl fn_800763C0
    clrlslwi r5, r17, 18, 2
    li r3, 0x80
    li r4, 0x0
    bl fn_80614790
    mr r3, r29
    mtctr r17
    cmpwi r17, 0x0
    ble lbl_fn_8006D7B0_000018D0
lbl_fn_8006D7B0_0000170C:
    lfs f0, 0x1268(r3)
    lfs f3, 0x1264(r3)
    lfs f4, 0x1260(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x126c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1274(r3)
    lfs f3, 0x1270(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x1288(r3)
    lfs f3, 0x1284(r3)
    lfs f4, 0x1280(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x128c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1294(r3)
    lfs f3, 0x1290(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12a8(r3)
    lfs f3, 0x12a4(r3)
    lfs f4, 0x12a0(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12ac(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12b4(r3)
    lfs f3, 0x12b0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12c8(r3)
    lfs f3, 0x12c4(r3)
    lfs f4, 0x12c0(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12cc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12d4(r3)
    lfs f3, 0x12d0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    addi r3, r3, 0x80
    bdnz lbl_fn_8006D7B0_0000170C
    b lbl_fn_8006D7B0_000018D0
lbl_fn_8006D7B0_000017E8:
    lwz r3, lbl_8087EEE0
    mr r5, r16
    li r4, 0x0
    bl fn_800763C0
    clrlslwi r5, r17, 18, 2
    li r3, 0x80
    li r4, 0x0
    bl fn_80614790
    mr r3, r29
    mtctr r17
    cmpwi r17, 0x0
    ble lbl_fn_8006D7B0_000018D0
lbl_fn_8006D7B0_00001818:
    lfs f0, 0x1264(r3)
    lfs f3, 0x1260(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x126c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1274(r3)
    lfs f3, 0x1270(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x1284(r3)
    lfs f3, 0x1280(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x128c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1294(r3)
    lfs f3, 0x1290(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12a4(r3)
    lfs f3, 0x12a0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12ac(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12b4(r3)
    lfs f3, 0x12b0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12c4(r3)
    lfs f3, 0x12c0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12cc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12d4(r3)
    lfs f3, 0x12d0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    addi r3, r3, 0x80
    bdnz lbl_fn_8006D7B0_00001818
lbl_fn_8006D7B0_000018D0:
    li r17, 0x0
lbl_fn_8006D7B0_000018D4:
    lwz r3, 0x2b4(r1)
    lwz r0, 0x2b0(r1)
    mulli r6, r3, 0xe0
    lwz r5, 0x2ac(r1)
    lwz r4, 0x2a8(r1)
    lfs f3, 0x10(r1)
    mulli r7, r0, 0x70
    lfd f0, 0x310(r1)
    add r8, r29, r6
    mulli r6, r4, 0x1c
    add r7, r8, r7
    add r7, r7, r6
    lfs f4, 0xa94(r7)
    mulli r5, r5, 0xe
    lwz r6, 0xa98(r7)
    lfs f5, 0xa8c(r7)
    fmadds f1, f4, f3, f0
    add r5, r6, r5
    lha r7, 0x8(r5)
    mulli r3, r3, 0x180
    lha r6, 0xc(r5)
    xoris r7, r7, 0x8000
    stw r7, 0x2ec(r1)
    xoris r6, r6, 0x8000
    lha r8, 0xa(r5)
    lfd f0, 0x2e8(r1)
    mulli r0, r0, 0xc0
    lha r7, 0x2(r5)
    xoris r8, r8, 0x8000
    stw r6, 0x2ec(r1)
    fsubs f6, f0, f14
    xoris r7, r7, 0x8000
    lfd f0, 0x2e8(r1)
    lha r6, 0x4(r5)
    stw r8, 0x2f4(r1)
    fsubs f3, f0, f14
    lfd f0, 0x300(r1)
    xoris r6, r6, 0x8000
    lfd f4, 0x2f0(r1)
    stw r7, 0x2ec(r1)
    fdivs f8, f6, f0
    lha r5, 0x6(r5)
    add r7, r29, r3
    lfd f0, 0x2e8(r1)
    mulli r3, r4, 0x30
    xoris r5, r5, 0x8000
    fsubs f6, f0, f14
    lfd f0, 0x300(r1)
    stw r6, 0x2f4(r1)
    fsubs f7, f4, f14
    fdivs f9, f3, f0
    add r0, r0, r7
    stw r5, 0x2ec(r1)
    add r16, r3, r0
    lfd f3, 0x2f0(r1)
    lfd f0, 0x2e8(r1)
    fsubs f4, f3, f14
    fsubs f3, f0, f14
    lfd f0, 0x300(r1)
    fdivs f19, f4, f0
    fdivs f7, f7, f0
    fdivs f20, f6, f0
    fdivs f3, f3, f0
    lfd f0, 0x308(r1)
    fmuls f16, f0, f8
    fmuls f30, f0, f7
    fmuls f0, f0, f9
    fadds f29, f20, f3
    fadds f28, f19, f5
    stfs f0, 0x2f8(r1)
    bl fn_8068A918
    clrlwi r0, r30, 31
    frsp f4, f1
    cmplwi r0, 0x1
    bne lbl_fn_8006D7B0_00001A0C
    fmadds f31, f16, f15, f31
    lfs f3, lbl_80880A38
    b lbl_fn_8006D7B0_00001A40
lbl_fn_8006D7B0_00001A0C:
    lhz r0, 0x324(r1)
    cmplwi r0, 0xff
    bge lbl_fn_8006D7B0_00001A30
    fsubs f0, f21, f30
    fmuls f3, f0, f15
    lfd f0, 0x318(r1)
    fmuls f3, f0, f3
    fmuls f3, f0, f3
    b lbl_fn_8006D7B0_00001A40
lbl_fn_8006D7B0_00001A30:
    fsubs f0, f21, f30
    fmuls f3, f0, f15
    lfd f0, 0x318(r1)
    fmuls f3, f0, f3
lbl_fn_8006D7B0_00001A40:
    lhz r0, 0x324(r1)
    cmplwi r0, 0x2015
    li r0, 0x0
    stw r0, 0x320(r1)
    bne lbl_fn_8006D7B0_00001AAC
    lwz r3, 0x328(r1)
    lwz r0, 0x330(r1)
    addi r5, r3, 0x1
    subf r3, r5, r0
    lwz r0, 0x14(r1)
    slwi r4, r5, 1
    add r4, r0, r4
    mtctr r3
    lwz r0, 0x330(r1)
    cmplw r5, r0
    bge lbl_fn_8006D7B0_00001AAC
lbl_fn_8006D7B0_00001A80:
    lhz r3, 0x0(r4)
    lhz r0, 0x324(r1)
    cmplw r0, r3
    bne lbl_fn_8006D7B0_00001AAC
    lwz r3, 0x320(r1)
    fadds f30, f30, f30
    addi r4, r4, 0x2
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    stw r3, 0x320(r1)
    bdnz lbl_fn_8006D7B0_00001A80
lbl_fn_8006D7B0_00001AAC:
    lfs f0, 0xc(r1)
    fnmsubs f31, f15, f18, f31
    rlwinm r0, r30, 0, 30, 30
    fadds f26, f0, f4
    lfs f0, 0x10(r1)
    fadds f3, f3, f31
    cmplwi r0, 0x2
    fadds f24, f26, f0
    lfs f0, 0x8(r1)
    fadds f27, f3, f0
    fmadds f25, f30, f15, f27
    bne lbl_fn_8006D7B0_00001D38
    lwz r0, 0x32c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8006D7B0_00001D38
    fadds f3, f27, f22
    addi r4, r1, 0x29c
    fadds f0, f26, f23
    addis r3, r29, 0x3
    stfs f3, 0x290(r1)
    fmr f2, f18
    stfs f0, 0x294(r1)
    addi r6, r1, 0x290
    mr r5, r4
    addi r3, r3, 0x3268
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0x298(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x2a4(r1)
    bl fn_805F93C0
    fadds f3, f25, f22
    lfs f2, 0x2a4(r1)
    fadds f0, f26, f23
    addi r3, r1, 0x29c
    stfs f3, 0x278(r1)
    addi r4, r1, 0x284
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x278
    stfs f2, 0x2c0(r1)
    fmr f2, f18
    addis r3, r29, 0x3
    mr r5, r4
    stfs f0, 0x27c(r1)
    addi r3, r3, 0x3268
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0x280(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x28c(r1)
    bl fn_805F93C0
    fadds f3, f25, f22
    lfs f2, 0x28c(r1)
    fadds f0, f24, f23
    addi r3, r1, 0x284
    stfs f3, 0x260(r1)
    addi r4, r1, 0x26c
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x260
    stfs f2, 0x2cc(r1)
    fmr f2, f18
    addis r3, r29, 0x3
    mr r5, r4
    stfs f0, 0x264(r1)
    addi r3, r3, 0x3268
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0x268(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x274(r1)
    bl fn_805F93C0
    fadds f3, f27, f22
    lfs f2, 0x274(r1)
    fadds f0, f24, f23
    addi r3, r1, 0x26c
    stfs f3, 0x248(r1)
    addi r4, r1, 0x254
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x248
    stfs f2, 0x2d8(r1)
    fmr f2, f18
    addis r3, r29, 0x3
    mr r5, r4
    stfs f0, 0x24c(r1)
    addi r3, r3, 0x3268
    psq_st f1, 0x0(r20), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0x250(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x25c(r1)
    bl fn_805F93C0
    slwi r0, r17, 7
    addi r3, r1, 0x254
    psq_l f1, 0x0(r3), 0, 0
    add r3, r29, r0
    lfs f2, 0x25c(r1)
    addi r5, r3, 0x1260
    psq_st f1, 0x0(r18), 0, 0
    addi r4, r1, 0x238
    psq_l f1, 0x0(r24), 0, 0
    addi r6, r3, 0x1280
    stfs f2, 0x2e4(r1)
    addi r7, r3, 0x12a0
    lfs f2, 0x2c0(r1)
    addi r3, r3, 0x12c0
    psq_st f1, 0x0(r5), 0, 0
    addi r17, r17, 0x1
    stfs f2, 0x8(r5)
    stfs f20, 0x238(r1)
    stfs f19, 0x23c(r1)
    stw r31, 0xc(r5)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    stfs f18, 0x240(r1)
    stfs f18, 0x244(r1)
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0x228
    psq_st f2, 0x18(r5), 0, 0
    lfs f2, 0x2cc(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    stfs f29, 0x228(r1)
    stfs f19, 0x22c(r1)
    stw r31, 0xc(r6)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    psq_l f1, 0x0(r20), 0, 0
    stfs f21, 0x230(r1)
    stfs f18, 0x234(r1)
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0x218
    psq_st f2, 0x18(r6), 0, 0
    lfs f2, 0x2d8(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    stfs f29, 0x218(r1)
    stfs f28, 0x21c(r1)
    stw r31, 0xc(r7)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r7), 0, 0
    psq_l f1, 0x0(r18), 0, 0
    stfs f21, 0x220(r1)
    stfs f21, 0x224(r1)
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0x208
    psq_st f2, 0x18(r7), 0, 0
    lfs f2, 0x2e4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stfs f20, 0x208(r1)
    stfs f28, 0x20c(r1)
    stw r31, 0xc(r3)
    psq_l f1, 0x0(r4), 0, 0
    stfs f18, 0x210(r1)
    stfs f21, 0x214(r1)
    psq_st f1, 0x10(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    b lbl_fn_8006D7B0_000028FC
lbl_fn_8006D7B0_00001D38:
    rlwinm r0, r30, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8006D7B0_000021E8
    lwz r0, 0x32c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8006D7B0_000021E8
    addis r27, r29, 0x3
    li r15, 0x0
lbl_fn_8006D7B0_00001D58:
    cmpwi r17, 0x40
    blt lbl_fn_8006D7B0_00001F64
    rlwinm r0, r30, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8006D7B0_00001E78
    lwz r3, lbl_8087EEE0
    mr r5, r16
    li r4, 0x0
    bl fn_800763C0
    clrlslwi r5, r17, 18, 2
    li r3, 0x80
    li r4, 0x0
    bl fn_80614790
    mr r3, r29
    mtctr r17
    cmpwi r17, 0x0
    ble lbl_fn_8006D7B0_00001F60
lbl_fn_8006D7B0_00001D9C:
    lfs f0, 0x1268(r3)
    lfs f3, 0x1264(r3)
    lfs f4, 0x1260(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x126c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1274(r3)
    lfs f3, 0x1270(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x1288(r3)
    lfs f3, 0x1284(r3)
    lfs f4, 0x1280(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x128c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1294(r3)
    lfs f3, 0x1290(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12a8(r3)
    lfs f3, 0x12a4(r3)
    lfs f4, 0x12a0(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12ac(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12b4(r3)
    lfs f3, 0x12b0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12c8(r3)
    lfs f3, 0x12c4(r3)
    lfs f4, 0x12c0(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12cc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12d4(r3)
    lfs f3, 0x12d0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    addi r3, r3, 0x80
    bdnz lbl_fn_8006D7B0_00001D9C
    b lbl_fn_8006D7B0_00001F60
lbl_fn_8006D7B0_00001E78:
    lwz r3, lbl_8087EEE0
    mr r5, r16
    li r4, 0x0
    bl fn_800763C0
    clrlslwi r5, r17, 18, 2
    li r3, 0x80
    li r4, 0x0
    bl fn_80614790
    mr r3, r29
    mtctr r17
    cmpwi r17, 0x0
    ble lbl_fn_8006D7B0_00001F60
lbl_fn_8006D7B0_00001EA8:
    lfs f0, 0x1264(r3)
    lfs f3, 0x1260(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x126c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1274(r3)
    lfs f3, 0x1270(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x1284(r3)
    lfs f3, 0x1280(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x128c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1294(r3)
    lfs f3, 0x1290(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12a4(r3)
    lfs f3, 0x12a0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12ac(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12b4(r3)
    lfs f3, 0x12b0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12c4(r3)
    lfs f3, 0x12c0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12cc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12d4(r3)
    lfs f3, 0x12d0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    addi r3, r3, 0x80
    bdnz lbl_fn_8006D7B0_00001EA8
lbl_fn_8006D7B0_00001F60:
    li r17, 0x0
lbl_fn_8006D7B0_00001F64:
    cmpwi r15, 0x0
    bne lbl_fn_8006D7B0_00001F74
    fneg f17, f22
    b lbl_fn_8006D7B0_00001F88
lbl_fn_8006D7B0_00001F74:
    cmpwi r15, 0x1
    bne lbl_fn_8006D7B0_00001F84
    fmr f17, f22
    b lbl_fn_8006D7B0_00001F88
lbl_fn_8006D7B0_00001F84:
    lfs f17, lbl_80880A38
lbl_fn_8006D7B0_00001F88:
    cmpwi r15, 0x2
    bne lbl_fn_8006D7B0_00001F98
    fneg f16, f23
    b lbl_fn_8006D7B0_00001FAC
lbl_fn_8006D7B0_00001F98:
    cmpwi r15, 0x3
    bne lbl_fn_8006D7B0_00001FA8
    fmr f16, f23
    b lbl_fn_8006D7B0_00001FAC
lbl_fn_8006D7B0_00001FA8:
    lfs f16, lbl_80880A38
lbl_fn_8006D7B0_00001FAC:
    fadds f3, f27, f17
    addi r4, r1, 0x1fc
    fadds f0, f26, f16
    addi r6, r1, 0x1f0
    stfs f3, 0x1f0(r1)
    fmr f2, f18
    stfs f0, 0x1f4(r1)
    mr r5, r4
    addi r3, r27, 0x3268
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0x1f8(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x204(r1)
    bl fn_805F93C0
    fadds f3, f25, f17
    lfs f2, 0x204(r1)
    fadds f0, f26, f16
    addi r3, r1, 0x1fc
    stfs f3, 0x1d8(r1)
    addi r4, r1, 0x1e4
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x1d8
    stfs f2, 0x2c0(r1)
    fmr f2, f18
    mr r5, r4
    addi r3, r27, 0x3268
    stfs f0, 0x1dc(r1)
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0x1e0(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1ec(r1)
    bl fn_805F93C0
    fadds f3, f25, f17
    lfs f2, 0x1ec(r1)
    fadds f0, f24, f16
    addi r3, r1, 0x1e4
    stfs f3, 0x1c0(r1)
    addi r6, r1, 0x1c0
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r14
    stfs f2, 0x2cc(r1)
    fmr f2, f18
    mr r5, r14
    addi r3, r27, 0x3268
    stfs f0, 0x1c4(r1)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f18, 0x1c8(r1)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x1d4(r1)
    bl fn_805F93C0
    fadds f3, f27, f17
    lfs f2, 0x1d4(r1)
    fadds f0, f24, f16
    stfs f2, 0x2d8(r1)
    fmr f2, f18
    psq_l f1, 0x0(r14), 0, 0
    stfs f3, 0x1a8(r1)
    addi r6, r1, 0x1a8
    mr r4, r26
    mr r5, r26
    stfs f0, 0x1ac(r1)
    addi r3, r27, 0x3268
    psq_st f1, 0x0(r20), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f18, 0x1b0(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x1bc(r1)
    bl fn_805F93C0
    slwi r0, r17, 7
    psq_l f1, 0x0(r26), 0, 0
    add r4, r29, r0
    lfs f2, 0x1bc(r1)
    psq_st f1, 0x0(r18), 0, 0
    addi r6, r4, 0x1260
    psq_l f1, 0x0(r24), 0, 0
    addi r15, r15, 0x1
    stfs f2, 0x2e4(r1)
    addi r5, r1, 0x198
    lfs f2, 0x2c0(r1)
    addi r7, r4, 0x1280
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r4, 0x12a0
    addi r4, r4, 0x12c0
    cmpwi r15, 0x4
    stfs f2, 0x8(r6)
    addi r17, r17, 0x1
    stfs f20, 0x198(r1)
    stfs f19, 0x19c(r1)
    stw r31, 0xc(r6)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    stfs f18, 0x1a0(r1)
    stfs f18, 0x1a4(r1)
    psq_l f2, 0x8(r5), 0, 0
    addi r5, r1, 0x188
    psq_st f2, 0x18(r6), 0, 0
    lfs f2, 0x2cc(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    stfs f29, 0x188(r1)
    stfs f19, 0x18c(r1)
    stw r31, 0xc(r7)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r7), 0, 0
    psq_l f1, 0x0(r20), 0, 0
    stfs f21, 0x190(r1)
    stfs f18, 0x194(r1)
    psq_l f2, 0x8(r5), 0, 0
    addi r5, r1, 0x178
    psq_st f2, 0x18(r7), 0, 0
    lfs f2, 0x2d8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stfs f29, 0x178(r1)
    stfs f28, 0x17c(r1)
    stw r31, 0xc(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_l f1, 0x0(r18), 0, 0
    stfs f21, 0x180(r1)
    stfs f21, 0x184(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    addi r3, r1, 0x168
    lfs f2, 0x2e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    stfs f20, 0x168(r1)
    stfs f28, 0x16c(r1)
    stw r31, 0xc(r4)
    psq_l f1, 0x0(r3), 0, 0
    stfs f18, 0x170(r1)
    stfs f21, 0x174(r1)
    psq_st f1, 0x10(r4), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x18(r4), 0, 0
    blt lbl_fn_8006D7B0_00001D58
    b lbl_fn_8006D7B0_000028FC
lbl_fn_8006D7B0_000021E8:
    rlwinm r0, r30, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8006D7B0_000026CC
    lwz r0, 0x32c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8006D7B0_000026CC
    addis r27, r29, 0x3
    li r15, 0x0
lbl_fn_8006D7B0_00002208:
    cmpwi r17, 0x40
    blt lbl_fn_8006D7B0_00002414
    rlwinm r0, r30, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8006D7B0_00002328
    lwz r3, lbl_8087EEE0
    mr r5, r16
    li r4, 0x0
    bl fn_800763C0
    clrlslwi r5, r17, 18, 2
    li r3, 0x80
    li r4, 0x0
    bl fn_80614790
    mr r3, r29
    mtctr r17
    cmpwi r17, 0x0
    ble lbl_fn_8006D7B0_00002410
lbl_fn_8006D7B0_0000224C:
    lfs f0, 0x1268(r3)
    lfs f3, 0x1264(r3)
    lfs f4, 0x1260(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x126c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1274(r3)
    lfs f3, 0x1270(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x1288(r3)
    lfs f3, 0x1284(r3)
    lfs f4, 0x1280(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x128c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1294(r3)
    lfs f3, 0x1290(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12a8(r3)
    lfs f3, 0x12a4(r3)
    lfs f4, 0x12a0(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12ac(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12b4(r3)
    lfs f3, 0x12b0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12c8(r3)
    lfs f3, 0x12c4(r3)
    lfs f4, 0x12c0(r3)
    stfs f4, -0x8000(r28)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12cc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12d4(r3)
    lfs f3, 0x12d0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    addi r3, r3, 0x80
    bdnz lbl_fn_8006D7B0_0000224C
    b lbl_fn_8006D7B0_00002410
lbl_fn_8006D7B0_00002328:
    lwz r3, lbl_8087EEE0
    mr r5, r16
    li r4, 0x0
    bl fn_800763C0
    clrlslwi r5, r17, 18, 2
    li r3, 0x80
    li r4, 0x0
    bl fn_80614790
    mr r3, r29
    mtctr r17
    cmpwi r17, 0x0
    ble lbl_fn_8006D7B0_00002410
lbl_fn_8006D7B0_00002358:
    lfs f0, 0x1264(r3)
    lfs f3, 0x1260(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x126c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1274(r3)
    lfs f3, 0x1270(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x1284(r3)
    lfs f3, 0x1280(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x128c(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x1294(r3)
    lfs f3, 0x1290(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12a4(r3)
    lfs f3, 0x12a0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12ac(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12b4(r3)
    lfs f3, 0x12b0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lfs f0, 0x12c4(r3)
    lfs f3, 0x12c0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    lwz r0, 0x12cc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lfs f0, 0x12d4(r3)
    lfs f3, 0x12d0(r3)
    stfs f3, -0x8000(r28)
    stfs f0, -0x8000(r28)
    addi r3, r3, 0x80
    bdnz lbl_fn_8006D7B0_00002358
lbl_fn_8006D7B0_00002410:
    li r17, 0x0
lbl_fn_8006D7B0_00002414:
    cmpwi r15, 0x3
    bge lbl_fn_8006D7B0_00002424
    fneg f16, f22
    b lbl_fn_8006D7B0_00002438
lbl_fn_8006D7B0_00002424:
    cmpwi r15, 0x5
    blt lbl_fn_8006D7B0_00002434
    fmr f16, f22
    b lbl_fn_8006D7B0_00002438
lbl_fn_8006D7B0_00002434:
    lfs f16, lbl_80880A38
lbl_fn_8006D7B0_00002438:
    cmplwi r15, 0x5
    li r3, 0x0
    bgt lbl_fn_8006D7B0_00002458
    li r0, 0x1
    slw r0, r0, r15
    andi. r0, r0, 0x29
    beq lbl_fn_8006D7B0_00002458
    li r3, 0x1
lbl_fn_8006D7B0_00002458:
    cmpwi r3, 0x0
    beq lbl_fn_8006D7B0_00002468
    fneg f17, f23
    b lbl_fn_8006D7B0_000024A0
lbl_fn_8006D7B0_00002468:
    subi r4, r15, 0x2
    li r3, 0x0
    cmplwi r4, 0x5
    bgt lbl_fn_8006D7B0_0000248C
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0x25
    beq lbl_fn_8006D7B0_0000248C
    li r3, 0x1
lbl_fn_8006D7B0_0000248C:
    cmpwi r3, 0x0
    beq lbl_fn_8006D7B0_0000249C
    fmr f17, f23
    b lbl_fn_8006D7B0_000024A0
lbl_fn_8006D7B0_0000249C:
    lfs f17, lbl_80880A38
lbl_fn_8006D7B0_000024A0:
    fadds f3, f27, f16
    addi r6, r1, 0x150
    fadds f0, f26, f17
    stfs f18, 0x158(r1)
    fmr f2, f18
    mr r4, r25
    stfs f3, 0x150(r1)
    mr r5, r25
    addi r3, r27, 0x3268
    stfs f0, 0x154(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x164(r1)
    bl fn_805F93C0
    fadds f3, f25, f16
    lfs f2, 0x164(r1)
    fadds f0, f26, f17
    stfs f2, 0x2c0(r1)
    fmr f2, f18
    psq_l f1, 0x0(r25), 0, 0
    stfs f3, 0x138(r1)
    addi r6, r1, 0x138
    mr r4, r23
    mr r5, r23
    stfs f0, 0x13c(r1)
    addi r3, r27, 0x3268
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f18, 0x140(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x14c(r1)
    bl fn_805F93C0
    fadds f3, f25, f16
    lfs f2, 0x14c(r1)
    fadds f0, f24, f17
    stfs f2, 0x2cc(r1)
    fmr f2, f18
    psq_l f1, 0x0(r23), 0, 0
    stfs f3, 0x120(r1)
    addi r6, r1, 0x120
    mr r4, r21
    mr r5, r21
    stfs f0, 0x124(r1)
    addi r3, r27, 0x3268
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f18, 0x128(r1)
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x134(r1)
    bl fn_805F93C0
    fadds f3, f27, f16
    lfs f2, 0x134(r1)
    fadds f0, f24, f17
    stfs f2, 0x2d8(r1)
    fmr f2, f18
    psq_l f1, 0x0(r21), 0, 0
    stfs f3, 0x108(r1)
    addi r6, r1, 0x108
    mr r4, r19
    mr r5, r19
    stfs f0, 0x10c(r1)
    addi r3, r27, 0x3268
    psq_st f1, 0x0(r20), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f18, 0x110(r1)
    psq_st f1, 0x0(r19), 0, 0
    stfs f2, 0x11c(r1)
    bl fn_805F93C0
    slwi r0, r17, 7
    psq_l f1, 0x0(r19), 0, 0
    add r4, r29, r0
    lfs f2, 0x11c(r1)
    psq_st f1, 0x0(r18), 0, 0
    addi r6, r4, 0x1260
    psq_l f1, 0x0(r24), 0, 0
    addi r15, r15, 0x1
    stfs f2, 0x2e4(r1)
    addi r5, r1, 0xf8
    lfs f2, 0x2c0(r1)
    addi r7, r4, 0x1280
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r4, 0x12a0
    addi r4, r4, 0x12c0
    cmpwi r15, 0x8
    stfs f2, 0x8(r6)
    addi r17, r17, 0x1
    stfs f20, 0xf8(r1)
    stfs f19, 0xfc(r1)
    stw r31, 0xc(r6)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    stfs f18, 0x100(r1)
    stfs f18, 0x104(r1)
    psq_l f2, 0x8(r5), 0, 0
    addi r5, r1, 0xe8
    psq_st f2, 0x18(r6), 0, 0
    lfs f2, 0x2cc(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    stfs f29, 0xe8(r1)
    stfs f19, 0xec(r1)
    stw r31, 0xc(r7)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r7), 0, 0
    psq_l f1, 0x0(r20), 0, 0
    stfs f21, 0xf0(r1)
    stfs f18, 0xf4(r1)
    psq_l f2, 0x8(r5), 0, 0
    addi r5, r1, 0xd8
    psq_st f2, 0x18(r7), 0, 0
    lfs f2, 0x2d8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stfs f29, 0xd8(r1)
    stfs f28, 0xdc(r1)
    stw r31, 0xc(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_l f1, 0x0(r18), 0, 0
    stfs f21, 0xe0(r1)
    stfs f21, 0xe4(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    addi r3, r1, 0xc8
    lfs f2, 0x2e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    stfs f20, 0xc8(r1)
    stfs f28, 0xcc(r1)
    stw r31, 0xc(r4)
    psq_l f1, 0x0(r3), 0, 0
    stfs f18, 0xd0(r1)
    stfs f21, 0xd4(r1)
    psq_st f1, 0x10(r4), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x18(r4), 0, 0
    blt lbl_fn_8006D7B0_00002208
    b lbl_fn_8006D7B0_000028FC
lbl_fn_8006D7B0_000026CC:
    stfs f27, 0xb0(r1)
    fmr f2, f18
    addi r4, r1, 0xbc
    addi r6, r1, 0xb0
    stfs f26, 0xb4(r1)
    addis r3, r29, 0x3
    mr r5, r4
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0xb8(r1)
    addi r3, r3, 0x3268
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F93C0
    lfs f2, 0xc4(r1)
    addi r3, r1, 0xbc
    stfs f2, 0x2c0(r1)
    fmr f2, f18
    psq_l f1, 0x0(r3), 0, 0
    addis r6, r29, 0x3
    addi r4, r1, 0xa4
    stfs f25, 0x98(r1)
    addi r3, r6, 0x3268
    stfs f26, 0x9c(r1)
    addi r6, r1, 0x98
    mr r5, r4
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0xa0(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F93C0
    lfs f2, 0xac(r1)
    addi r3, r1, 0xa4
    stfs f2, 0x2cc(r1)
    fmr f2, f18
    psq_l f1, 0x0(r3), 0, 0
    addis r6, r29, 0x3
    addi r4, r1, 0x8c
    stfs f25, 0x80(r1)
    addi r3, r6, 0x3268
    stfs f24, 0x84(r1)
    addi r6, r1, 0x80
    mr r5, r4
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0x88(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F93C0
    lfs f2, 0x94(r1)
    addi r3, r1, 0x8c
    stfs f2, 0x2d8(r1)
    fmr f2, f18
    psq_l f1, 0x0(r3), 0, 0
    addis r6, r29, 0x3
    addi r4, r1, 0x74
    stfs f27, 0x68(r1)
    addi r3, r6, 0x3268
    stfs f24, 0x6c(r1)
    addi r6, r1, 0x68
    mr r5, r4
    psq_st f1, 0x0(r20), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    stfs f18, 0x70(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F93C0
    slwi r0, r17, 7
    addi r3, r1, 0x74
    add r4, r29, r0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x7c(r1)
    addi r6, r4, 0x1260
    psq_st f1, 0x0(r18), 0, 0
    addi r5, r1, 0x58
    psq_l f1, 0x0(r24), 0, 0
    addi r7, r4, 0x1280
    stfs f2, 0x2e4(r1)
    addi r3, r4, 0x12a0
    lfs f2, 0x2c0(r1)
    addi r4, r4, 0x12c0
    psq_st f1, 0x0(r6), 0, 0
    addi r17, r17, 0x1
    lwz r0, 0x18(r1)
    stfs f2, 0x8(r6)
    stfs f20, 0x58(r1)
    stfs f19, 0x5c(r1)
    stw r0, 0xc(r6)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    stfs f18, 0x60(r1)
    stfs f18, 0x64(r1)
    psq_l f2, 0x8(r5), 0, 0
    addi r5, r1, 0x48
    psq_st f2, 0x18(r6), 0, 0
    lfs f2, 0x2cc(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    stfs f29, 0x48(r1)
    stfs f19, 0x4c(r1)
    stw r0, 0xc(r7)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r7), 0, 0
    psq_l f1, 0x0(r20), 0, 0
    stfs f21, 0x50(r1)
    stfs f18, 0x54(r1)
    psq_l f2, 0x8(r5), 0, 0
    addi r5, r1, 0x38
    psq_st f2, 0x18(r7), 0, 0
    lfs f2, 0x2d8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stfs f29, 0x38(r1)
    stfs f28, 0x3c(r1)
    stw r0, 0xc(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_l f1, 0x0(r18), 0, 0
    stfs f21, 0x40(r1)
    stfs f21, 0x44(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    addi r3, r1, 0x28
    lfs f2, 0x2e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    stfs f20, 0x28(r1)
    stfs f28, 0x2c(r1)
    stw r0, 0xc(r4)
    psq_l f1, 0x0(r3), 0, 0
    stfs f18, 0x30(r1)
    stfs f21, 0x34(r1)
    psq_st f1, 0x10(r4), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x18(r4), 0, 0
lbl_fn_8006D7B0_000028FC:
    clrlwi r0, r30, 31
    cmplwi r0, 0x1
    bne lbl_fn_8006D7B0_00002918
    fmadds f31, f30, f15, f31
    lfs f0, 0x2f8(r1)
    fmadds f31, f0, f15, f31
    b lbl_fn_8006D7B0_00002934
lbl_fn_8006D7B0_00002918:
    lhz r0, 0x324(r1)
    cmplwi r0, 0xff
    bge lbl_fn_8006D7B0_00002930
    lfd f0, 0x318(r1)
    fmadds f31, f0, f15, f31
    b lbl_fn_8006D7B0_00002934
lbl_fn_8006D7B0_00002930:
    fadds f31, f31, f15
lbl_fn_8006D7B0_00002934:
    lwz r3, 0x328(r1)
    fnmsubs f31, f15, f18, f31
    lwz r0, 0x320(r1)
    add r3, r3, r0
    stw r3, 0x328(r1)
    b lbl_fn_8006D7B0_00002950
lbl_fn_8006D7B0_0000294C:
    fadds f31, f31, f15
lbl_fn_8006D7B0_00002950:
    lfs f0, 0x20(r1)
    lwz r3, 0x328(r1)
    fadds f31, f31, f0
    addi r3, r3, 0x1
    stw r3, 0x328(r1)
lbl_fn_8006D7B0_00002964:
    lwz r3, 0x328(r1)
    lwz r0, 0x330(r1)
    cmplw r3, r0
    blt lbl_fn_8006D7B0_00001660
    lwz r3, 0x32c(r1)
    addi r3, r3, 0x1
    stw r3, 0x32c(r1)
lbl_fn_8006D7B0_00002980:
    lwz r3, 0x32c(r1)
    lwz r0, 0x334(r1)
    cmpw r3, r0
    blt lbl_fn_8006D7B0_00001650
    cmpwi r16, 0x0
    beq lbl_fn_8006D7B0_00002BA0
    cmpwi r17, 0x0
    ble lbl_fn_8006D7B0_00002BA0
    rlwinm r0, r30, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8006D7B0_00002AB8
    lwz r3, lbl_8087EEE0
    mr r5, r16
    li r4, 0x0
    bl fn_800763C0
    clrlslwi r5, r17, 18, 2
    li r3, 0x80
    li r4, 0x0
    bl fn_80614790
    lis r3, 0xcc01
    mtctr r17
    cmpwi r17, 0x0
    ble lbl_fn_8006D7B0_00002BA0
lbl_fn_8006D7B0_000029DC:
    lfs f0, 0x1268(r29)
    lfs f3, 0x1264(r29)
    lfs f4, 0x1260(r29)
    stfs f4, -0x8000(r3)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lwz r0, 0x126c(r29)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r3)
    lfs f0, 0x1274(r29)
    lfs f3, 0x1270(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lfs f0, 0x1288(r29)
    lfs f3, 0x1284(r29)
    lfs f4, 0x1280(r29)
    stfs f4, -0x8000(r3)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lwz r0, 0x128c(r29)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r3)
    lfs f0, 0x1294(r29)
    lfs f3, 0x1290(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lfs f0, 0x12a8(r29)
    lfs f3, 0x12a4(r29)
    lfs f4, 0x12a0(r29)
    stfs f4, -0x8000(r3)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lwz r0, 0x12ac(r29)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r3)
    lfs f0, 0x12b4(r29)
    lfs f3, 0x12b0(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lfs f0, 0x12c8(r29)
    lfs f3, 0x12c4(r29)
    lfs f4, 0x12c0(r29)
    stfs f4, -0x8000(r3)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lwz r0, 0x12cc(r29)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r3)
    lfs f0, 0x12d4(r29)
    lfs f3, 0x12d0(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    addi r29, r29, 0x80
    bdnz lbl_fn_8006D7B0_000029DC
    b lbl_fn_8006D7B0_00002BA0
lbl_fn_8006D7B0_00002AB8:
    lwz r3, lbl_8087EEE0
    mr r5, r16
    li r4, 0x0
    bl fn_800763C0
    clrlslwi r5, r17, 18, 2
    li r3, 0x80
    li r4, 0x0
    bl fn_80614790
    lis r3, 0xcc01
    mtctr r17
    cmpwi r17, 0x0
    ble lbl_fn_8006D7B0_00002BA0
lbl_fn_8006D7B0_00002AE8:
    lfs f0, 0x1264(r29)
    lfs f3, 0x1260(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lwz r0, 0x126c(r29)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r3)
    lfs f0, 0x1274(r29)
    lfs f3, 0x1270(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lfs f0, 0x1284(r29)
    lfs f3, 0x1280(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lwz r0, 0x128c(r29)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r3)
    lfs f0, 0x1294(r29)
    lfs f3, 0x1290(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lfs f0, 0x12a4(r29)
    lfs f3, 0x12a0(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lwz r0, 0x12ac(r29)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r3)
    lfs f0, 0x12b4(r29)
    lfs f3, 0x12b0(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lfs f0, 0x12c4(r29)
    lfs f3, 0x12c0(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    lwz r0, 0x12cc(r29)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r3)
    lfs f0, 0x12d4(r29)
    lfs f3, 0x12d0(r29)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    addi r29, r29, 0x80
    bdnz lbl_fn_8006D7B0_00002AE8
lbl_fn_8006D7B0_00002BA0:
    addi r11, r1, 0x380
    psq_l f31, 0x498(r1), 0, 0
    lfd f31, 0x490(r1)
    psq_l f30, 0x488(r1), 0, 0
    lfd f30, 0x480(r1)
    psq_l f29, 0x478(r1), 0, 0
    lfd f29, 0x470(r1)
    psq_l f28, 0x468(r1), 0, 0
    lfd f28, 0x460(r1)
    psq_l f27, 0x458(r1), 0, 0
    lfd f27, 0x450(r1)
    psq_l f26, 0x448(r1), 0, 0
    lfd f26, 0x440(r1)
    psq_l f25, 0x438(r1), 0, 0
    lfd f25, 0x430(r1)
    psq_l f24, 0x428(r1), 0, 0
    lfd f24, 0x420(r1)
    psq_l f23, 0x418(r1), 0, 0
    lfd f23, 0x410(r1)
    psq_l f22, 0x408(r1), 0, 0
    lfd f22, 0x400(r1)
    psq_l f21, 0x3f8(r1), 0, 0
    lfd f21, 0x3f0(r1)
    psq_l f20, 0x3e8(r1), 0, 0
    lfd f20, 0x3e0(r1)
    psq_l f19, 0x3d8(r1), 0, 0
    lfd f19, 0x3d0(r1)
    psq_l f18, 0x3c8(r1), 0, 0
    lfd f18, 0x3c0(r1)
    psq_l f17, 0x3b8(r1), 0, 0
    lfd f17, 0x3b0(r1)
    psq_l f16, 0x3a8(r1), 0, 0
    lfd f16, 0x3a0(r1)
    psq_l f15, 0x398(r1), 0, 0
    lfd f15, 0x390(r1)
    psq_l f14, 0x388(r1), 0, 0
    lfd f14, 0x380(r1)
    bl _restgpr_14
    lwz r0, 0x4a4(r1)
    mtlr r0
    addi r1, r1, 0x4a0
    blr
}
