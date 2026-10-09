#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_8007FAF0(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_80092954(void);
extern void fn_80095D44(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D59B8(void);
extern void fn_800DC288(void);
extern void fn_800EF73C(void);
extern void fn_80179A34(void);
extern void fn_80179AB4(void);
extern void fn_80208748(void);
extern void fn_80216AFC(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80373148(void);
extern void fn_803EBC44(void);
extern void fn_803EC0A4(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803EDB18(void);
extern void fn_803F11F8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473EFC(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068B100(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80752140[];
extern u8 lbl_8075215C[];
extern u8 lbl_807522F4[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078CC30[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8730[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087D9F0;
extern u32 lbl_8087D9F4;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885FB0;
extern u32 lbl_80885FBC;
extern u32 lbl_80885FC8;
extern u32 lbl_80885FCC;
extern u32 lbl_80885FD0;
extern u32 lbl_80885FD4;
extern u32 lbl_80885FD8;
extern u32 lbl_80885FDC;
extern u32 lbl_80885FE0;
extern u32 lbl_80885FE4;
extern u32 lbl_80885FE8;
extern u32 lbl_80885FEC;
extern u32 lbl_80885FF0;

/* Function declarations */
void fn_803F33A4(void);
void fn_803F3820(void);
void fn_803F3ED0(void);
void fn_803F3FBC(void);
void fn_803F419C(void);
void fn_803F42C8(void);
void fn_803F4674(void);
void fn_803F4698(void);
void fn_803F46DC(void);
void fn_803F46F8(void);
void fn_803F4700(void);
void fn_803F4714(void);
void fn_803F471C(void);
void fn_803F47A0(void);
void fn_803F4894(void);
void fn_803F48E0(void);
void fn_803F4948(void);
void fn_803F4A4C(void);
void fn_803F4B80(void);

asm void fn_803F33A4(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    stmw r23, 0x64c(r1)
    mr r25, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r27, r3
    addi r3, r25, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x14(r1)
    mr r26, r3
    addi r3, r1, 0x24
    stw r0, 0x18(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x644(r1)
    bl memset
    addi r3, r1, 0x624
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x14(r1)
    mr r4, r26
    mr r5, r27
    addi r3, r1, 0x14
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x14
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x14(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r3, lbl_8075215C@ha
    addi r26, r1, 0x24
    li r29, 0x0
    li r28, 0x0
    addi r31, r3, lbl_8075215C@l
    li r27, 0x0
    li r30, 0x1
lbl_fn_803F33A4_000000BC:
    addi r3, r1, 0x14
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r23, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803F33A4_00000458
    addi r4, r31, 0xdd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_00000124
    addi r3, r1, 0x14
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xa50(r25)
    addi r3, r1, 0x14
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xa54(r25)
    addi r3, r1, 0x14
    bl fn_8005B9CC
    addi r4, r31, 0xeb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_00000458
    stw r30, 0xa58(r25)
    b lbl_fn_803F33A4_00000458
lbl_fn_803F33A4_00000124:
    mr r3, r23
    addi r4, r31, 0xf0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_000001DC
    addi r3, r1, 0x14
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xa5c(r25)
    addi r3, r1, 0x14
    bl fn_8005B9CC
    addi r3, r1, 0x14
    bl fn_8005B9CC
    b lbl_fn_803F33A4_000001C4
lbl_fn_803F33A4_0000015C:
    mr r3, r26
    addi r4, r31, 0xfc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_00000180
    lwz r0, 0xa68(r25)
    ori r0, r0, 0x1
    stw r0, 0xa68(r25)
    b lbl_fn_803F33A4_000001C4
lbl_fn_803F33A4_00000180:
    mr r3, r26
    addi r4, r31, 0x10a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_000001A4
    lwz r0, 0xa68(r25)
    ori r0, r0, 0x2
    stw r0, 0xa68(r25)
    b lbl_fn_803F33A4_000001C4
lbl_fn_803F33A4_000001A4:
    mr r3, r26
    addi r4, r31, 0x118
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_000001C4
    lwz r0, 0xa68(r25)
    ori r0, r0, 0x4
    stw r0, 0xa68(r25)
lbl_fn_803F33A4_000001C4:
    addi r3, r1, 0x14
    bl fn_8005B9CC
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_0000015C
    b lbl_fn_803F33A4_00000458
lbl_fn_803F33A4_000001DC:
    mr r3, r23
    addi r4, r31, 0xc4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_0000020C
    lwz r0, 0xa70(r25)
    addi r4, r1, 0x14
    addi r5, r25, 0x28c
    add r3, r0, r29
    bl fn_803EBC44
    addi r29, r29, 0x1c
    b lbl_fn_803F33A4_00000458
lbl_fn_803F33A4_0000020C:
    mr r3, r23
    addi r4, r31, 0xcd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_0000023C
    lwz r0, 0xa78(r25)
    addi r4, r1, 0x14
    addi r5, r25, 0x28c
    add r3, r0, r28
    bl fn_803EC0A4
    addi r28, r28, 0x8
    b lbl_fn_803F33A4_00000458
lbl_fn_803F33A4_0000023C:
    mr r3, r23
    addi r4, r31, 0xd5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_000002F8
    lwz r0, 0xa80(r25)
    addi r3, r1, 0x14
    add r23, r0, r27
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r25, 0x65c
    bl fn_80092954
    cmpwi r3, 0x0
    stw r3, 0x0(r23)
    beq lbl_fn_803F33A4_000002F0
    addi r3, r1, 0x14
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4(r23)
    addi r3, r1, 0x14
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r23)
    addi r3, r1, 0x14
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r23)
    addi r3, r1, 0x14
    bl fn_8005B9CC
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_803F33A4_000002F0
    bl strlen
    cmplwi r3, 0x5
    blt lbl_fn_803F33A4_000002F0
    mr r3, r24
    bl fn_80208748
    stw r3, 0x10(r23)
    addi r3, r24, 0x2
    bl fn_80684600
    stw r3, 0x14(r23)
    lwz r3, 0x0(r23)
    lbz r0, 0x4d(r3)
    extsb r0, r0
    stw r0, 0x18(r23)
lbl_fn_803F33A4_000002F0:
    addi r27, r27, 0x1c
    b lbl_fn_803F33A4_00000458
lbl_fn_803F33A4_000002F8:
    mr r3, r23
    addi r4, r31, 0x123
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_00000334
    addi r3, r1, 0x14
    bl fn_8005B9CC
    bl fn_80684600
    addi r4, r25, 0x28c
    addi r0, r25, 0x65c
    stw r4, 0xa84(r25)
    stw r3, 0xa8c(r25)
    stw r0, 0xa94(r25)
    stw r3, 0xa9c(r25)
    b lbl_fn_803F33A4_00000458
lbl_fn_803F33A4_00000334:
    mr r3, r23
    addi r4, r31, 0x132
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_0000040C
    addi r3, r1, 0x14
    bl fn_8005B9CC
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_80216AFC
    cmpwi r3, 0x0
    beq lbl_fn_803F33A4_00000458
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803F33A4_00000458
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803F33A4_00000458
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r4, 0x10(r1)
    lwz r0, 0x48(r3)
    cmpw r4, r0
    bne lbl_fn_803F33A4_000003F8
    lwz r4, 0xc(r1)
    lwz r0, 0x4c(r3)
    cmpw r4, r0
    bne lbl_fn_803F33A4_000003F8
    lwz r4, 0x8(r1)
    lwz r0, 0x50(r3)
    cmpw r4, r0
    beq lbl_fn_803F33A4_00000458
    b lbl_fn_803F33A4_000003F8
lbl_fn_803F33A4_000003BC:
    addi r3, r1, 0x14
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r23, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803F33A4_000003F8
    addi r4, r31, 0x135
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_803F33A4_00000458
    mr r3, r23
    addi r4, r31, 0x13b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_803F33A4_00000458
lbl_fn_803F33A4_000003F8:
    addi r3, r1, 0x14
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_000003BC
    b lbl_fn_803F33A4_00000458
lbl_fn_803F33A4_0000040C:
    mr r3, r23
    addi r4, r31, 0x13b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_00000458
    b lbl_fn_803F33A4_00000448
lbl_fn_803F33A4_00000424:
    addi r3, r1, 0x14
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803F33A4_00000448
    addi r4, r31, 0x135
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_803F33A4_00000458
lbl_fn_803F33A4_00000448:
    addi r3, r1, 0x14
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_00000424
lbl_fn_803F33A4_00000458:
    addi r3, r1, 0x14
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803F33A4_000000BC
    lmw r23, 0x64c(r1)
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_803F3820(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r4
    bne lbl_fn_803F3820_000004A8
    li r3, 0x0
    b lbl_fn_803F3820_00000B14
lbl_fn_803F3820_000004A8:
    lwz r5, 0x0(r4)
    cmpwi r5, 0x8
    beq lbl_fn_803F3820_000004F0
    bge lbl_fn_803F3820_000004D8
    cmpwi r5, 0x4
    beq lbl_fn_803F3820_00000818
    bge lbl_fn_803F3820_0000092C
    cmpwi r5, 0x2
    bge lbl_fn_803F3820_0000070C
    cmpwi r5, 0x0
    bge lbl_fn_803F3820_000004F0
    b lbl_fn_803F3820_00000A68
lbl_fn_803F3820_000004D8:
    cmpwi r5, 0x3e9
    beq lbl_fn_803F3820_00000A5C
    bge lbl_fn_803F3820_00000A68
    cmpwi r5, 0x3e8
    bge lbl_fn_803F3820_00000A4C
    b lbl_fn_803F3820_00000A68
lbl_fn_803F3820_000004F0:
    stw r5, 0x54(r3)
    li r4, 0x2
    addi r3, r3, 0x65c
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_803F3820_0000054C
    lfs f1, lbl_80885FBC
    addi r3, r30, 0x65c
    lfs f2, lbl_80885FC8
    li r4, 0x0
    li r5, 0x2
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    addi r4, r30, 0x65c
    bl fn_803ED5D0
    mr r3, r30
    addi r4, r30, 0x65c
    li r5, 0x1
    bl fn_803ED0D4
    b lbl_fn_803F3820_000005A0
lbl_fn_803F3820_0000054C:
    addi r3, r30, 0x65c
    li r4, 0x1
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_803F3820_000005A0
    lfs f1, lbl_80885FBC
    addi r3, r30, 0x65c
    lfs f2, lbl_80885FC8
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    addi r4, r30, 0x65c
    bl fn_803ED5D0
    mr r3, r30
    addi r4, r30, 0x65c
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F3820_000005A0:
    lwz r0, 0xa68(r30)
    addi r3, r30, 0x28c
    lfs f1, lbl_80885FBC
    li r4, 0x0
    lfs f2, lbl_80885FC8
    extrwi r6, r0, 1, 29
    li r5, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    addi r4, r30, 0x28c
    bl fn_803ED5D0
    mr r3, r30
    addi r4, r30, 0x28c
    li r5, 0x1
    bl fn_803ED0D4
    lwz r0, 0x20c(r30)
    lfs f0, lbl_80885FB0
    cmpwi r0, 0x0
    stfs f0, 0x4c0(r30)
    beq lbl_fn_803F3820_00000608
    lwz r0, 0xfc(r30)
    ori r0, r0, 0x1
    stw r0, 0xfc(r30)
    b lbl_fn_803F3820_00000614
lbl_fn_803F3820_00000608:
    lwz r0, 0xfc(r30)
    clrrwi r0, r0, 1
    stw r0, 0xfc(r30)
lbl_fn_803F3820_00000614:
    lwz r0, 0x288(r30)
    li r3, 0x0
    lwz r4, 0x184(r30)
    cmpwi r0, 0x0
    clrrwi r0, r4, 1
    stw r0, 0x184(r30)
    beq lbl_fn_803F3820_00000640
    lwz r0, 0x284(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803F3820_00000640
    li r3, 0x1
lbl_fn_803F3820_00000640:
    cmpwi r3, 0x0
    beq lbl_fn_803F3820_00000658
    lwz r0, 0x21c(r30)
    ori r0, r0, 0x1
    stw r0, 0x21c(r30)
    b lbl_fn_803F3820_00000664
lbl_fn_803F3820_00000658:
    lwz r0, 0x21c(r30)
    clrrwi r0, r0, 1
    stw r0, 0x21c(r30)
lbl_fn_803F3820_00000664:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0xa44(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803F3820_000006F4
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80885FB0
    li r3, -0x1
    lfs f1, lbl_80885FBC
    li r0, 0x1
    stfs f0, 0x6c(r1)
    addi r4, r30, 0xa44
    addi r5, r30, 0x65c
    addi r7, r1, 0x60
    stfs f0, 0x70(r1)
    addi r8, r1, 0x6c
    addi r9, r1, 0x78
    li r6, 0x0
    stfs f0, 0x74(r1)
    li r10, -0x1
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_803F3820_000006F4:
    lwz r0, 0x9c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803F3820_00000A68
    li r0, 0x1
    stw r0, 0x9c(r30)
    b lbl_fn_803F3820_00000A68
lbl_fn_803F3820_0000070C:
    lwz r0, 0x21c(r3)
    li r4, 0x0
    stw r5, 0x54(r3)
    clrrwi r0, r0, 1
    stw r4, 0x27c(r3)
    stw r0, 0x21c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F3820_00000760
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F3820_00000760:
    lfs f1, lbl_80885FB0
    addi r3, r30, 0x65c
    lfs f2, lbl_80885FC8
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0xa38(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803F3820_00000A68
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80885FB0
    li r3, -0x1
    lfs f1, lbl_80885FBC
    li r0, 0x1
    stfs f0, 0x44(r1)
    addi r4, r30, 0xa38
    addi r5, r30, 0x65c
    addi r7, r1, 0x38
    stfs f0, 0x48(r1)
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    li r6, 0x0
    stfs f0, 0x4c(r1)
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_803F3820_00000A68
lbl_fn_803F3820_00000818:
    lwz r0, 0x21c(r3)
    li r4, 0x0
    stw r5, 0x54(r3)
    clrrwi r0, r0, 1
    stw r4, 0xa60(r3)
    stw r4, 0x27c(r3)
    stw r0, 0x21c(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F3820_00000870
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F3820_00000870:
    lwz r0, 0xa68(r30)
    addi r3, r30, 0x28c
    lfs f1, lbl_80885FBC
    li r4, 0x0
    lfs f2, lbl_80885FC8
    extrwi r6, r0, 1, 29
    li r5, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0xa2c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803F3820_00000A68
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80885FB0
    li r3, -0x1
    lfs f1, lbl_80885FBC
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0xa2c
    addi r5, r30, 0x28c
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
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
    b lbl_fn_803F3820_00000A68
lbl_fn_803F3820_0000092C:
    lwz r4, 0x21c(r3)
    cmpwi r5, 0x7
    lwz r0, 0xfc(r3)
    clrrwi r4, r4, 1
    stw r5, 0x54(r3)
    clrrwi r0, r0, 1
    stw r4, 0x21c(r3)
    stw r0, 0xfc(r3)
    beq lbl_fn_803F3820_00000958
    lwz r0, 0x210(r3)
    b lbl_fn_803F3820_0000095C
lbl_fn_803F3820_00000958:
    li r0, 0x0
lbl_fn_803F3820_0000095C:
    cmpwi r0, 0x0
    beq lbl_fn_803F3820_00000974
    lwz r0, 0x184(r3)
    ori r0, r0, 0x1
    stw r0, 0x184(r3)
    b lbl_fn_803F3820_00000980
lbl_fn_803F3820_00000974:
    lwz r0, 0x184(r3)
    clrrwi r0, r0, 1
    stw r0, 0x184(r3)
lbl_fn_803F3820_00000980:
    lwz r0, 0xa68(r3)
    li r4, 0x0
    lfs f1, lbl_80885FBC
    li r5, 0x0
    lfs f2, lbl_80885FC8
    extrwi r6, r0, 1, 29
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0x28c
    bl fn_80097C08
    addi r3, r30, 0x28c
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x4c0(r30)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F3820_000009F4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_803ED5D0
lbl_fn_803F3820_000009F4:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F3820_00000A34
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F3820_00000A34:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_803F3820_00000A68
lbl_fn_803F3820_00000A4C:
    li r0, 0x1
    stw r0, 0xa88(r3)
    stw r0, 0xa98(r3)
    b lbl_fn_803F3820_00000A68
lbl_fn_803F3820_00000A5C:
    li r0, 0x0
    stw r0, 0xa88(r3)
    stw r0, 0xa98(r3)
lbl_fn_803F3820_00000A68:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_803F3820_00000AA8
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8730@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8730@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_803F3820_00000AA8:
    lis r28, lbl_807C6BB8@ha
    addi r28, r28, lbl_807C6BB8@l
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803F3820_00000B10
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_803F3820_00000B04
lbl_fn_803F3820_00000AC8:
    lwz r0, 0x0(r28)
    add r3, r0, r29
    lwzx r0, r29, r0
    cmpwi r0, -0x1
    beq lbl_fn_803F3820_00000AE4
    cmpwi r0, 0xb
    bne lbl_fn_803F3820_00000AFC
lbl_fn_803F3820_00000AE4:
    lwz r12, 0x4(r3)
    mr r4, r30
    mr r5, r31
    li r3, 0xb
    mtctr r12
    bctrl
lbl_fn_803F3820_00000AFC:
    addi r27, r27, 0x1
    addi r29, r29, 0x8
lbl_fn_803F3820_00000B04:
    lwz r0, 0x4(r28)
    cmpw r27, r0
    blt lbl_fn_803F3820_00000AC8
lbl_fn_803F3820_00000B10:
    lwz r3, 0x54(r30)
lbl_fn_803F3820_00000B14:
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_803F3ED0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    bne lbl_fn_803F3ED0_00000B48
    li r3, 0x0
    b lbl_fn_803F3ED0_00000C08
lbl_fn_803F3ED0_00000B48:
    lwz r0, 0x288(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803F3ED0_00000B5C
    li r3, 0x0
    b lbl_fn_803F3ED0_00000C08
lbl_fn_803F3ED0_00000B5C:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x41b
    bne lbl_fn_803F3ED0_00000B88
    lwz r5, 0x28(r4)
    cmpwi r5, 0x0
    beq lbl_fn_803F3ED0_00000B88
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    bne lbl_fn_803F3ED0_00000B88
    li r3, 0x0
    b lbl_fn_803F3ED0_00000C08
lbl_fn_803F3ED0_00000B88:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x4
    bge lbl_fn_803F3ED0_00000C04
    lwz r4, 0x0(r4)
    lwz r0, 0x280(r3)
    cmpw r0, r4
    bgt lbl_fn_803F3ED0_00000BB0
    lwz r0, 0x27c(r3)
    subf r0, r4, r0
    stw r0, 0x27c(r3)
lbl_fn_803F3ED0_00000BB0:
    lwz r0, 0x27c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_803F3ED0_00000C04
    lfs f0, lbl_80885FB0
    li r0, 0x0
    li r4, 0x4
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_803F3ED0_00000C08
lbl_fn_803F3ED0_00000C04:
    li r3, 0x0
lbl_fn_803F3ED0_00000C08:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803F3FBC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    addi r4, r1, 0x8
    stw r28, 0x30(r1)
    mr r28, r3
    bl fn_803EC758
    lwz r0, 0xf0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_803F3FBC_00000C7C
    cmpwi r29, 0x0
    beq lbl_fn_803F3FBC_00000C7C
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_803F3FBC_00000C7C
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r28)
    mr r30, r3
    b lbl_fn_803F3FBC_00000C80
lbl_fn_803F3FBC_00000C7C:
    li r30, 0x0
lbl_fn_803F3FBC_00000C80:
    lis r31, lbl_8075215C@ha
    mr r3, r30
    addi r31, r31, lbl_8075215C@l
    addi r5, r28, 0x54
    addi r4, r31, 0x140
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885FCC
    mr r3, r30
    lfs f2, lbl_80885FD0
    addi r4, r31, 0x146
    lfs f3, lbl_80885FD4
    addi r5, r28, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80885FD8
    mr r3, r30
    lfs f2, lbl_80885FDC
    addi r4, r31, 0x14a
    lfs f3, lbl_80885FE0
    addi r5, r28, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80885FCC
    mr r3, r30
    lfs f2, lbl_80885FD0
    addi r4, r31, 0x14e
    lfs f3, lbl_80885FD4
    addi r5, r28, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x152
    addi r5, r28, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x159
    bl fn_8008937C
    lfs f1, lbl_80885FCC
    mr r29, r3
    lfs f2, lbl_80885FD0
    addi r4, r31, 0x169
    lfs f3, lbl_80885FBC
    addi r5, r28, 0x260
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80885FB0
    mr r3, r29
    lfs f2, lbl_80885FD0
    addi r4, r31, 0x170
    lfs f3, lbl_80885FBC
    addi r5, r28, 0x278
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r31, 0x175
    addi r5, r28, 0x27c
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r31, 0x178
    addi r5, r28, 0x280
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r4, r30
    addi r3, r28, 0xb0
    bl fn_803F11F8
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803F419C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    subi r0, r4, 0x2
    cmplwi r0, 0x4
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r4, 0x54(r3)
    ble lbl_fn_803F419C_00000E7C
    cmplwi r4, 0x1
    ble lbl_fn_803F419C_00000E38
    cmpwi r4, 0x8
    beq lbl_fn_803F419C_00000E38
    cmpwi r4, 0x7
    beq lbl_fn_803F419C_00000EC0
    b lbl_fn_803F419C_00000EFC
lbl_fn_803F419C_00000E38:
    lfs f0, lbl_80885FB0
    li r0, 0x0
    stw r4, 0x48(r1)
    mr r3, r31
    addi r4, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F419C_00000EFC
lbl_fn_803F419C_00000E7C:
    lfs f0, lbl_80885FB0
    li r0, 0x0
    li r4, 0x6
    stw r4, 0x28(r1)
    addi r4, r1, 0x28
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F419C_00000EFC
lbl_fn_803F419C_00000EC0:
    lfs f0, lbl_80885FB0
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803F419C_00000EFC:
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803F419C_00000F10
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_803F419C_00000F10:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803F42C8(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    bl _savegpr_27
    lwz r5, lbl_8087F8A0
    lis r0, 0x4330
    stw r0, 0x58(r1)
    mr r29, r3
    cmpwi r5, 0x0
    lfs f31, lbl_80885FE4
    stw r0, 0x60(r1)
    mr r30, r4
    li r31, 0x0
    beq lbl_fn_803F42C8_00001034
    lwz r27, 0x48(r5)
    lis r28, 0x68dc
    b lbl_fn_803F42C8_0000102C
lbl_fn_803F42C8_00000F7C:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803F42C8_00000F98
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x8
    bne lbl_fn_803F42C8_00001028
lbl_fn_803F42C8_00000F98:
    mr r3, r27
    bl fn_80179AB4
    lwz r0, 0x10(r29)
    cmpw r0, r3
    bne lbl_fn_803F42C8_00001028
    mr r3, r27
    bl fn_80179A34
    subi r4, r28, 0x7453
    lwz r0, 0x14(r29)
    mulhw r3, r4, r3
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    cmpw r0, r3
    bne lbl_fn_803F42C8_00001028
    lfs f3, 0x34(r30)
    addi r3, r1, 0x38
    lfs f4, 0x24(r30)
    lfs f5, 0x14(r30)
    lfs f2, 0x530(r27)
    lfs f1, 0x52c(r27)
    lfs f0, 0x528(r27)
    fsubs f2, f3, f2
    fsubs f1, f4, f1
    stfs f5, 0x2c(r1)
    fsubs f0, f5, f0
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f2, 0x40(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803F42C8_00001028
    fmr f31, f1
    mr r31, r27
lbl_fn_803F42C8_00001028:
    lwz r27, 0x14ac(r27)
lbl_fn_803F42C8_0000102C:
    cmpwi r27, 0x0
    bne lbl_fn_803F42C8_00000F7C
lbl_fn_803F42C8_00001034:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_803F42C8_00001104
    lwz r27, 0x48(r3)
    lis r28, 0x68dc
    b lbl_fn_803F42C8_000010FC
lbl_fn_803F42C8_0000104C:
    lwz r0, 0x38(r27)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803F42C8_00001068
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x8
    bne lbl_fn_803F42C8_000010F8
lbl_fn_803F42C8_00001068:
    mr r3, r27
    bl fn_80179AB4
    lwz r0, 0x10(r29)
    cmpw r0, r3
    bne lbl_fn_803F42C8_000010F8
    mr r3, r27
    bl fn_80179A34
    subi r4, r28, 0x7453
    lwz r0, 0x14(r29)
    mulhw r3, r4, r3
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    cmpw r0, r3
    bne lbl_fn_803F42C8_000010F8
    lfs f3, 0x34(r30)
    addi r3, r1, 0x20
    lfs f4, 0x24(r30)
    lfs f5, 0x14(r30)
    lfs f2, 0x530(r27)
    lfs f1, 0x52c(r27)
    lfs f0, 0x528(r27)
    fsubs f2, f3, f2
    fsubs f1, f4, f1
    stfs f5, 0x14(r1)
    fsubs f0, f5, f0
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f2, 0x28(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803F42C8_000010F8
    fmr f31, f1
    mr r31, r27
lbl_fn_803F42C8_000010F8:
    lwz r27, 0x14ac(r27)
lbl_fn_803F42C8_000010FC:
    cmpwi r27, 0x0
    bne lbl_fn_803F42C8_0000104C
lbl_fn_803F42C8_00001104:
    cmpwi r31, 0x0
    lfs f30, lbl_80885FB0
    beq lbl_fn_803F42C8_0000117C
    fmr f1, f31
    bl fn_8068B100
    frsp f1, f1
    lfs f3, 0x5b0(r31)
    lfs f0, 0xc(r29)
    lfs f2, lbl_80885FB0
    fsubs f3, f1, f3
    fcmpo cr0, f0, f2
    ble lbl_fn_803F42C8_0000117C
    fdivs f1, f3, f0
    lfs f0, lbl_80885FBC
    fsubs f0, f0, f1
    fcmpo cr0, f0, f2
    ble lbl_fn_803F42C8_0000114C
    b lbl_fn_803F42C8_00001150
lbl_fn_803F42C8_0000114C:
    fmr f0, f2
lbl_fn_803F42C8_00001150:
    lfs f30, lbl_80885FBC
    fcmpo cr0, f0, f30
    bge lbl_fn_803F42C8_0000117C
    lfs f1, 0xc(r29)
    lfs f0, lbl_80885FB0
    fdivs f1, f3, f1
    fsubs f30, f30, f1
    fcmpo cr0, f30, f0
    ble lbl_fn_803F42C8_00001178
    b lbl_fn_803F42C8_0000117C
lbl_fn_803F42C8_00001178:
    fmr f30, f0
lbl_fn_803F42C8_0000117C:
    lwz r6, 0x0(r29)
    lis r3, lbl_80752140@ha
    lfd f4, lbl_80752140@l(r3)
    lwz r0, 0x18(r6)
    stw r0, 0x10(r1)
    lfs f5, lbl_80885FE8
    lbz r0, 0x10(r1)
    stw r0, 0x5c(r1)
    lbz r3, 0x11(r1)
    lfd f0, 0x58(r1)
    lbz r0, 0x12(r1)
    stw r3, 0x64(r1)
    fsubs f0, f0, f4
    lfs f7, 0x8(r29)
    stw r0, 0x5c(r1)
    lfd f2, 0x60(r1)
    fdivs f3, f0, f5
    lfd f1, 0x58(r1)
    lfs f6, 0x4(r29)
    lfs f0, lbl_80885FEC
    stfs f3, 0x48(r1)
    fsubs f2, f2, f4
    fsubs f1, f1, f4
    fsubs f4, f7, f6
    fdivs f2, f2, f5
    stfs f2, 0x4c(r1)
    fmadds f6, f30, f4, f6
    fmuls f4, f5, f3
    fdivs f1, f1, f5
    stfs f6, 0x54(r1)
    stfs f1, 0x50(r1)
    fmuls f3, f5, f2
    fmuls f2, f5, f1
    fmuls f1, f5, f6
    fctiwz f4, f4
    fctiwz f3, f3
    fctiwz f2, f2
    stfd f4, 0x68(r1)
    fctiwz f1, f1
    stfd f3, 0x70(r1)
    fcmpo cr0, f6, f0
    lwz r5, 0x6c(r1)
    stfd f2, 0x78(r1)
    lwz r4, 0x74(r1)
    stfd f1, 0x80(r1)
    lwz r3, 0x7c(r1)
    lwz r0, 0x84(r1)
    stb r5, 0x8(r1)
    stb r4, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    lbz r0, 0xc(r1)
    stb r0, 0x18(r6)
    lbz r0, 0xd(r1)
    stb r0, 0x19(r6)
    lbz r0, 0xe(r1)
    stb r0, 0x1a(r6)
    lbz r0, 0xf(r1)
    stb r0, 0x1b(r6)
    bge lbl_fn_803F42C8_00001290
    lwz r3, 0x0(r29)
    li r4, 0x3
    bl fn_8007FAF0
    lwz r0, 0x4(r30)
    ori r0, r0, 0x10
    stw r0, 0x4(r30)
    b lbl_fn_803F42C8_000012A8
lbl_fn_803F42C8_00001290:
    lwz r3, 0x0(r29)
    lwz r4, 0x18(r29)
    bl fn_8007FAF0
    lwz r0, 0x4(r30)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x4(r30)
lbl_fn_803F42C8_000012A8:
    addi r11, r1, 0xa0
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803F4674(void)
{
    nofralloc
    lwz r5, 0x290(r3)
    lwz r0, 0x660(r3)
    oris r5, r5, 0x1
    stw r5, 0x290(r3)
    oris r0, r0, 0x1
    stw r4, 0x468(r3)
    stw r0, 0x660(r3)
    stw r4, 0x838(r3)
    blr
}

asm void fn_803F4698(void)
{
    nofralloc
    lwz r4, 0x54(r3)
    cmpwi r4, 0x7
    bne lbl_fn_803F4698_00001308
    li r3, 0x0
    blr
lbl_fn_803F4698_00001308:
    cmpwi r4, 0x4
    li r0, 0x0
    blt lbl_fn_803F4698_00001320
    cmpwi r4, 0x6
    bgt lbl_fn_803F4698_00001320
    li r0, 0x1
lbl_fn_803F4698_00001320:
    cmpwi r0, 0x0
    beq lbl_fn_803F4698_00001330
    addi r3, r3, 0x28c
    blr
lbl_fn_803F4698_00001330:
    addi r3, r3, 0x65c
    blr
}

asm void fn_803F46DC(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    xori r0, r0, 0x4
    srawi r3, r0, 1
    rlwinm r0, r0, 0, 29, 29
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_803F46F8(void)
{
    nofralloc
    lfs f1, 0x25c(r3)
    blr
}

asm void fn_803F4700(void)
{
    nofralloc
    psq_l f1, 0x250(r4), 0, 0
    lfs f2, 0x258(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_803F4714(void)
{
    nofralloc
    addi r3, r3, 0x214
    blr
}

asm void fn_803F471C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803F471C_000013DC
    lis r5, lbl_807522F4@ha
    li r3, 0x6f8
    addi r5, r5, lbl_807522F4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803F471C_000013E0
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_803F47A0
    b lbl_fn_803F471C_000013E0
lbl_fn_803F471C_000013DC:
    li r3, 0x0
lbl_fn_803F471C_000013E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F47A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_803EC568
    lis r4, lbl_8078CC30@ha
    addi r3, r29, 0xf4
    addi r4, r4, lbl_8078CC30@l
    stw r4, 0x0(r29)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r29, 0x4c4
    bl fn_80057F28
    addi r3, r29, 0x54c
    bl fn_80057F28
    lfs f0, lbl_80885FF0
    li r30, 0x0
    li r31, -0x1
    lis r4, fn_803F4894@ha
    lis r5, fn_803F48E0@ha
    stfs f0, 0x5d4(r29)
    addi r3, r29, 0x610
    addi r4, r4, fn_803F4894@l
    stfs f0, 0x5d8(r29)
    addi r5, r5, fn_803F48E0@l
    li r6, 0x30
    li r7, 0x3
    stw r30, 0x5dc(r29)
    stw r30, 0x5e0(r29)
    stw r30, 0x5e4(r29)
    stw r30, 0x5ec(r29)
    stw r30, 0x5f0(r29)
    stw r31, 0x5f4(r29)
    stw r30, 0x608(r29)
    stw r30, 0x60c(r29)
    bl fn_806958E0
    addi r3, r29, 0x6a0
    bl fn_800D5738
    stw r30, 0x6d0(r29)
    mr r3, r29
    stb r30, 0x6d4(r29)
    stw r31, 0x610(r29)
    stw r31, 0x614(r29)
    stw r31, 0x618(r29)
    stw r31, 0x640(r29)
    stw r31, 0x644(r29)
    stw r31, 0x648(r29)
    stw r31, 0x670(r29)
    stw r31, 0x674(r29)
    stw r31, 0x678(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F4894(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    stw r0, 0x14(r1)
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r6, 0xc
    stw r31, 0xc(r1)
    mr r31, r3
    li r7, 0x3
    addi r3, r3, 0xc
    bl fn_806958E0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F48E0(void)
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
    beq lbl_fn_803F48E0_00001588
    lis r4, fn_800EF73C@ha
    li r5, 0xc
    addi r4, r4, fn_800EF73C@l
    li r6, 0x3
    addi r3, r3, 0xc
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_803F48E0_00001588
    mr r3, r30
    bl dtor_80084684
lbl_fn_803F48E0_00001588:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F4948(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803F4948_00001688
    lis r4, lbl_8078CC30@ha
    addi r4, r4, lbl_8078CC30@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_803F4948_000015F4
    mr r4, r29
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_803F4948_000015F4:
    addi r3, r29, 0x6a0
    li r4, -0x1
    bl fn_800D5808
    lis r4, fn_803F48E0@ha
    addi r3, r29, 0x610
    addi r4, r4, fn_803F48E0@l
    li r5, 0x30
    li r6, 0x3
    bl fn_806959D8
    addic. r31, r29, 0x54c
    beq lbl_fn_803F4948_0000163C
    addic. r3, r31, 0x3c
    beq lbl_fn_803F4948_00001630
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F4948_00001630:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_803F4948_0000163C:
    addic. r31, r29, 0x4c4
    beq lbl_fn_803F4948_00001660
    addic. r3, r31, 0x3c
    beq lbl_fn_803F4948_00001654
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F4948_00001654:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_803F4948_00001660:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_803F4948_00001688
    mr r3, r29
    bl dtor_80084684
lbl_fn_803F4948_00001688:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F4A4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_803F4A4C_000017BC
    mr r3, r29
    addi r4, r29, 0xf4
    bl fn_803EDB18
    lwz r0, 0x6c8(r29)
    li r31, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_803F4A4C_0000170C
    addi r3, r29, 0x6a0
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_803F4A4C_00001710
    addi r3, r29, 0x6c0
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_803F4A4C_00001710
lbl_fn_803F4A4C_0000170C:
    li r31, 0x1
lbl_fn_803F4A4C_00001710:
    cmpwi r31, 0x0
    beq lbl_fn_803F4A4C_00001778
    li r3, 0x1fc
    li r4, 0x6
    la r5, lbl_8087D9F4
    la r6, lbl_8087D9F0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803F4A4C_00001754
    li r0, 0x0
    stw r0, 0x0(r3)
    li r4, 0x0
    li r5, 0x0
    addi r3, r3, 0x8
    bl fn_8004B290
lbl_fn_803F4A4C_00001754:
    lwz r30, 0x2fc(r29)
    cmpwi r30, 0x0
    stw r31, 0x2fc(r29)
    beq lbl_fn_803F4A4C_00001778
    addi r3, r30, 0x8
    li r4, -0x1
    bl fn_8004B338
    mr r3, r30
    bl dtor_80084684
lbl_fn_803F4A4C_00001778:
    addi r3, r29, 0x6d4
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803F4A4C_000017B4
    lwz r0, 0x1a4(r29)
    cmpwi r0, 0x0
    bge lbl_fn_803F4A4C_000017B4
    addi r3, r29, 0xf4
    addi r4, r29, 0x6d4
    li r5, 0x0
    bl fn_80092814
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, -0x1
    bl fn_80095D44
lbl_fn_803F4A4C_000017B4:
    li r3, 0x1
    b lbl_fn_803F4A4C_000017C0
lbl_fn_803F4A4C_000017BC:
    li r3, 0x0
lbl_fn_803F4A4C_000017C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F4B80(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F4B80_00001840
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F4B80_00001840:
    addi r3, r31, 0x4c4
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    addi r3, r31, 0x54c
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r0, 0x5dc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4B80_000018CC
    lwz r0, 0x4cc(r31)
    ori r0, r0, 0x1
    stw r0, 0x4cc(r31)
    b lbl_fn_803F4B80_000018D8
lbl_fn_803F4B80_000018CC:
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
lbl_fn_803F4B80_000018D8:
    lwz r3, 0x58(r31)
    lwz r0, 0x554(r31)
    cmpwi r3, 0x0
    clrrwi r0, r0, 1
    stw r0, 0x554(r31)
    bne lbl_fn_803F4B80_0000193C
    li r3, 0x1
    stw r3, 0x54(r31)
    lfs f0, lbl_80885FF0
    li r0, 0x0
    stw r3, 0x48(r1)
    mr r3, r31
    addi r4, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F4B80_000019E0
lbl_fn_803F4B80_0000193C:
    cmpwi r3, 0x1
    bne lbl_fn_803F4B80_00001990
    li r3, 0x3
    stw r3, 0x54(r31)
    lfs f0, lbl_80885FF0
    li r0, 0x0
    stw r3, 0x28(r1)
    mr r3, r31
    addi r4, r1, 0x28
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F4B80_000019E0
lbl_fn_803F4B80_00001990:
    cmpwi r3, 0x2
    bne lbl_fn_803F4B80_000019E0
    li r3, 0x4
    stw r3, 0x54(r31)
    lfs f0, lbl_80885FF0
    li r0, 0x0
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803F4B80_000019E0:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
