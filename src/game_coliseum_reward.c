#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8003E4A4(void);
extern void fn_80041A80(void);
extern void fn_80042108(void);
extern void fn_8004212C(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8006B174(void);
extern void fn_8006B2D8(void);
extern void fn_80079BC8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_8008B964(void);
extern void fn_8008E2DC(void);
extern void fn_800B2180(void);
extern void fn_800BB4FC(void);
extern void fn_800BB8D8(void);
extern void fn_800BBA64(void);
extern void fn_800BBEFC(void);
extern void fn_800BC194(void);
extern void fn_800C1A1C(void);
extern void fn_800C23E8(void);
extern void fn_800C2448(void);
extern void fn_800C2E30(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_801207D4(void);
extern void fn_80185188(void);
extern void fn_80185628(void);
extern void fn_801856A4(void);
extern void fn_803EFCA8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_8047C770(void);
extern void fn_8047C850(void);
extern void fn_804848C4(void);
extern void fn_804923AC(void);
extern void fn_8049248C(void);
extern void fn_8049CDBC(void);
extern void fn_80680770(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80756700[];
extern u8 lbl_80775A88[];
extern u8 lbl_80790290[];
extern u8 lbl_807902AC[];
extern u8 lbl_807902C8[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8088706C;
extern u32 lbl_80887074;
extern u32 lbl_8088708C;
extern u32 lbl_808870A8;
extern u32 lbl_808870AC;
extern u32 lbl_808870B0;
extern u32 lbl_808870B4;
extern u32 lbl_808870B8;
extern u32 lbl_808870BC;

/* Function declarations */
void fn_80494354(void);
void fn_804948D8(void);
void fn_804948F0(void);
void fn_80494964(void);
void fn_804949D4(void);
void fn_80494D78(void);
void fn_8049506C(void);
void fn_80495070(void);
void fn_80495414(void);
void fn_80495418(void);
void fn_80495788(void);

asm void fn_80494354(void)
{
    nofralloc
    stwu r1, -0x740(r1)
    mflr r0
    stw r0, 0x744(r1)
    stmw r27, 0x72c(r1)
    mr r27, r3
    addi r3, r3, 0x50
    bl fn_8047059C
    mr r29, r3
    addi r3, r27, 0x50
    bl fn_80470580
    mr r4, r3
    mr r5, r29
    addi r3, r1, 0xf4
    bl fn_803EFCA8
    lis r29, lbl_80756700@ha
    li r28, 0x0
    addi r29, r29, lbl_80756700@l
    li r30, 0x0
lbl_fn_80494354_00000048:
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    mr r31, r3
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0xf
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0x29
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0xb8
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0x116
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0x11b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0xbf
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0xe8
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0x102
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0x109
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0x120
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000140
    mr r3, r31
    addi r4, r29, 0xf6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80494354_00000154
lbl_fn_80494354_00000140:
    mr r3, r27
    addi r4, r28, 0x4c
    addi r5, r1, 0xf4
    bl fn_8049248C
    b lbl_fn_80494354_00000560
lbl_fn_80494354_00000154:
    mr r3, r31
    addi r4, r29, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80494354_000002B0
    mr r5, r29
    mr r6, r29
    li r3, 0x314
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80494354_00000194
    bl fn_80494964
    mr r28, r3
lbl_fn_80494354_00000194:
    stw r28, 0x8(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0x4
    li r5, 0x20
    bl fn_8068236C
    stb r30, 0x23(r28)
    addi r3, r28, 0x4
    bl fn_800DC6B4
    stw r3, 0x24(r28)
    addi r3, r1, 0x98
    bl fn_8008E2DC
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x98(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x9c(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xa0(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xa4(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xa8(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xac(r1)
    addi r3, r28, 0x28
    addi r4, r1, 0x98
    bl fn_804949D4
    bl fn_8008B964
    bl fn_804923AC
    bl fn_8047C770
    mr r31, r3
    addi r3, r28, 0x4c
    bl fn_8047C770
    mr r4, r31
    bl fn_8047C850
    bl fn_8008B964
    bl fn_804923AC
    bl fn_801856A4
    mr r31, r3
    addi r3, r28, 0x4c
    bl fn_801856A4
    mr r4, r31
    bl fn_80042108
    bl fn_8008B964
    bl fn_804848C4
    mr r4, r3
    addi r3, r1, 0xb0
    bl fn_80185628
    mr r4, r3
    addi r3, r28, 0x4c
    bl fn_80185188
    stw r30, 0x300(r28)
    addi r3, r27, 0x58
    addi r4, r1, 0x8
    stw r30, 0x304(r28)
    bl fn_80494D78
    lwz r28, 0x8(r1)
    b lbl_fn_80494354_00000560
lbl_fn_80494354_000002B0:
    mr r3, r31
    addi r4, r29, 0x127
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80494354_0000033C
    addi r3, r1, 0x80
    bl fn_8008E2DC
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x80(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x84(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x88(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8c(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x90(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x94(r1)
    addi r3, r28, 0x28
    addi r4, r1, 0x80
    bl fn_804949D4
    b lbl_fn_80494354_00000560
lbl_fn_80494354_0000033C:
    mr r3, r31
    addi r4, r29, 0x130
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80494354_000003B8
    addi r3, r1, 0x68
    bl fn_8049506C
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x68(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x6c(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x70(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x78(r1)
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x74(r1)
    addi r3, r28, 0x34
    addi r4, r1, 0x68
    bl fn_80495070
    b lbl_fn_80494354_00000560
lbl_fn_80494354_000003B8:
    mr r3, r31
    addi r4, r29, 0x13e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80494354_000003F0
    cmpwi r28, 0x0
    beq lbl_fn_80494354_00000560
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r27
    bl fn_80041A80
    stw r3, 0x300(r28)
    b lbl_fn_80494354_00000560
lbl_fn_80494354_000003F0:
    mr r3, r31
    addi r4, r29, 0x149
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80494354_0000046C
    cmpwi r28, 0x0
    beq lbl_fn_80494354_00000560
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x48
    bl fn_8003E4A4
    addi r3, r1, 0x3c
    addi r4, r1, 0x48
    bl fn_8006B174
    addi r3, r1, 0x30
    addi r4, r1, 0x3c
    bl fn_8006B2D8
    addi r3, r28, 0x40
    addi r4, r1, 0x30
    bl fn_801207D4
    addi r3, r1, 0x30
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x3c
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x48
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_80494354_00000560
lbl_fn_80494354_0000046C:
    mr r3, r31
    addi r4, r29, 0x152
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80494354_000004B0
    cmpwi r28, 0x0
    beq lbl_fn_80494354_00000560
    mr r3, r27
    addi r5, r1, 0xf4
    li r4, 0x8
    bl fn_8049CDBC
    stw r3, 0x304(r28)
    bl fn_804948D8
    lwz r3, 0x304(r28)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_80494354_00000560
lbl_fn_80494354_000004B0:
    mr r3, r31
    addi r4, r29, 0x15c
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80494354_00000560
    mr r3, r31
    addi r4, r29, 0x162
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80494354_00000560
    cmpwi r28, 0x0
    beq lbl_fn_80494354_00000560
    addi r3, r1, 0x54
    bl fn_80495414
    addi r3, r1, 0xf4
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x24
    bl fn_8003E4A4
    addi r3, r1, 0x18
    addi r4, r1, 0x24
    bl fn_8006B174
    addi r3, r1, 0xc
    addi r4, r1, 0x18
    bl fn_8006B2D8
    addi r3, r1, 0xc
    bl fn_8004212C
    bl fn_800DC6B4
    stw r3, 0x54(r1)
    addi r3, r1, 0xc
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x18
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x24
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x58
    addi r4, r1, 0xf4
    bl fn_804948F0
    addi r3, r28, 0x308
    addi r4, r1, 0x54
    bl fn_80495418
lbl_fn_80494354_00000560:
    addi r3, r1, 0xf4
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80494354_00000048
    lmw r27, 0x72c(r1)
    lwz r0, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x740
    blr
}

asm void fn_804948D8(void)
{
    nofralloc
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beqlr
    addi r3, r3, 0x54
    b fn_800B2180
    blr
}

asm void fn_804948F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x0(r30)
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4(r30)
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r30)
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80494964(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x28(r3)
    stw r31, 0x2c(r3)
    stw r31, 0x30(r3)
    stw r31, 0x34(r3)
    stw r31, 0x38(r3)
    stw r31, 0x3c(r3)
    stw r31, 0x40(r3)
    stw r31, 0x44(r3)
    stw r31, 0x48(r3)
    addi r3, r3, 0x4c
    bl fn_800C1A1C
    stw r31, 0x308(r30)
    mr r3, r30
    stw r31, 0x30c(r30)
    stw r31, 0x310(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804949D4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r0, 0x4(r3)
    lwz r31, 0x8(r3)
    cmplw r0, r31
    bge lbl_fn_804949D4_000006F4
    mulli r0, r0, 0x18
    lwz r5, 0x0(r3)
    add. r5, r5, r0
    beq lbl_fn_804949D4_000006E4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r5)
    psq_l f1, 0xc(r4), 0, 0
    psq_st f1, 0xc(r5), 0, 0
    lfs f2, 0x14(r4)
    stfs f2, 0x14(r5)
lbl_fn_804949D4_000006E4:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_804949D4_00000A04
lbl_fn_804949D4_000006F4:
    lis r3, 0xaab
    li r4, 0x1
    subi r0, r3, 0x5556
    stw r4, 0x1c(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_804949D4_00000734
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804949D4_00000734:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r31, r0
    bge lbl_fn_804949D4_0000076C
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_804949D4_0000078C
lbl_fn_804949D4_0000076C:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r31, r0
    bge lbl_fn_804949D4_0000078C
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_804949D4_0000078C:
    li r4, 0x0
    addi r5, r29, 0x8
    lis r3, 0xaab
    stw r4, 0x20(r1)
    subi r0, r3, 0x5556
    stw r4, 0x24(r1)
    stw r4, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_804949D4_000007F4
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804949D4_000007F4:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r31, r0
    bge lbl_fn_804949D4_00000844
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
    bge lbl_fn_804949D4_00000838
    addi r3, r1, 0x8
lbl_fn_804949D4_00000838:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_804949D4_00000888
lbl_fn_804949D4_00000844:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r31, r0
    bge lbl_fn_804949D4_00000880
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_804949D4_00000874
    addi r3, r1, 0x8
lbl_fn_804949D4_00000874:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_804949D4_00000888
lbl_fn_804949D4_00000880:
    lis r3, 0xaab
    subi r28, r3, 0x5556
lbl_fn_804949D4_00000888:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r28, r0
    ble lbl_fn_804949D4_000008BC
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804949D4_000008BC:
    mulli r3, r28, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_804949D4_000008F0
    lis r3, __files@ha
    lis r4, lbl_80790290@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80790290@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804949D4_000008F0:
    lwz r0, 0x24(r1)
    stw r31, 0x20(r1)
    mulli r3, r0, 0x18
    stw r28, 0x28(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x30(r1)
    mulli r0, r0, 0x18
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_804949D4_00000938
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r30)
    stfs f2, 0x8(r3)
    psq_l f1, 0xc(r30), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    lfs f2, 0x14(r30)
    stfs f2, 0x14(r3)
lbl_fn_804949D4_00000938:
    lwz r3, 0x24(r1)
    lwz r0, 0x30(r1)
    addi r3, r3, 0x1
    stw r3, 0x24(r1)
    mulli r0, r0, 0x18
    lwz r3, 0x20(r1)
    lwz r4, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r4, r4, 0x18
    add r6, r3, r0
    add r5, r7, r4
    b lbl_fn_804949D4_000009AC
lbl_fn_804949D4_00000968:
    subic. r6, r6, 0x18
    subi r5, r5, 0x18
    beq lbl_fn_804949D4_00000994
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f2, 0x14(r5)
    psq_l f1, 0xc(r5), 0, 0
    psq_st f1, 0xc(r6), 0, 0
    stfs f2, 0x14(r6)
lbl_fn_804949D4_00000994:
    lwz r4, 0x30(r1)
    lwz r3, 0x24(r1)
    subi r0, r4, 0x1
    stw r0, 0x30(r1)
    addi r0, r3, 0x1
    stw r0, 0x24(r1)
lbl_fn_804949D4_000009AC:
    cmplw r7, r5
    blt lbl_fn_804949D4_00000968
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x20
    lwz r3, 0x8(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r29)
    stw r3, 0x28(r1)
    lwz r0, 0x20(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r29)
    stw r4, 0x24(r1)
    beq lbl_fn_804949D4_00000A04
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804949D4_00000A04
    stw r4, 0x24(r1)
    bl dtor_80084684
lbl_fn_804949D4_00000A04:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80494D78(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_80494D78_00000A78
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r3, 0x0(r3)
    slwi r0, r0, 2
    lwz r4, 0x0(r4)
    stwx r4, r3, r0
    b lbl_fn_80494D78_00000CF8
lbl_fn_80494D78_00000A78:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_80494D78_00000AB0
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80494D78_00000AB0:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80494D78_00000B18
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80494D78_00000B18:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80494D78_00000B68
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80494D78_00000B5C
    addi r3, r1, 0x10
lbl_fn_80494D78_00000B5C:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80494D78_00000BAC
lbl_fn_80494D78_00000B68:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80494D78_00000BA4
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80494D78_00000B98
    addi r3, r1, 0x10
lbl_fn_80494D78_00000B98:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80494D78_00000BAC
lbl_fn_80494D78_00000BA4:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_80494D78_00000BAC:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80494D78_00000BE0
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80494D78_00000BE0:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80494D78_00000C14
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80494D78_00000C14:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    lwz r4, 0x0(r30)
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_80494D78_00000CF8
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80494D78_00000CF8
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80494D78_00000CF8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8049506C(void)
{
    nofralloc
    blr
}

asm void fn_80495070(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r0, 0x4(r3)
    lwz r31, 0x8(r3)
    cmplw r0, r31
    bge lbl_fn_80495070_00000D90
    mulli r0, r0, 0x14
    lwz r5, 0x0(r3)
    add. r5, r5, r0
    beq lbl_fn_80495070_00000D80
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r5)
lbl_fn_80495070_00000D80:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_80495070_000010A0
lbl_fn_80495070_00000D90:
    lis r3, 0xccd
    li r4, 0x1
    subi r0, r3, 0x3334
    stw r4, 0x1c(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_80495070_00000DD0
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80495070_00000DD0:
    lis r3, 0x444
    addi r0, r3, 0x4444
    cmplw r31, r0
    bge lbl_fn_80495070_00000E08
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_80495070_00000E28
lbl_fn_80495070_00000E08:
    lis r3, 0x889
    subi r0, r3, 0x7778
    cmplw r31, r0
    bge lbl_fn_80495070_00000E28
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_80495070_00000E28:
    li r4, 0x0
    addi r5, r29, 0x8
    lis r3, 0xccd
    stw r4, 0x20(r1)
    subi r0, r3, 0x3334
    stw r4, 0x24(r1)
    stw r4, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_80495070_00000E90
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80495070_00000E90:
    lis r3, 0x444
    addi r0, r3, 0x4444
    cmplw r31, r0
    bge lbl_fn_80495070_00000EE0
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
    bge lbl_fn_80495070_00000ED4
    addi r3, r1, 0x8
lbl_fn_80495070_00000ED4:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80495070_00000F24
lbl_fn_80495070_00000EE0:
    lis r3, 0x889
    subi r0, r3, 0x7778
    cmplw r31, r0
    bge lbl_fn_80495070_00000F1C
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80495070_00000F10
    addi r3, r1, 0x8
lbl_fn_80495070_00000F10:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80495070_00000F24
lbl_fn_80495070_00000F1C:
    lis r3, 0xccd
    subi r28, r3, 0x3334
lbl_fn_80495070_00000F24:
    lis r3, 0xccd
    subi r0, r3, 0x3334
    cmplw r28, r0
    ble lbl_fn_80495070_00000F58
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80495070_00000F58:
    mulli r3, r28, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80495070_00000F8C
    lis r3, __files@ha
    lis r4, lbl_807902AC@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807902AC@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80495070_00000F8C:
    lwz r0, 0x24(r1)
    stw r31, 0x20(r1)
    mulli r3, r0, 0x14
    stw r28, 0x28(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x30(r1)
    mulli r0, r0, 0x14
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_80495070_00000FD4
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r30)
    stfs f2, 0x8(r3)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r30)
    stfs f0, 0x10(r3)
lbl_fn_80495070_00000FD4:
    lwz r3, 0x24(r1)
    lwz r0, 0x30(r1)
    addi r3, r3, 0x1
    stw r3, 0x24(r1)
    mulli r0, r0, 0x14
    lwz r3, 0x20(r1)
    lwz r4, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r4, r4, 0x14
    add r6, r3, r0
    add r5, r7, r4
    b lbl_fn_80495070_00001048
lbl_fn_80495070_00001004:
    subic. r6, r6, 0x14
    subi r5, r5, 0x14
    beq lbl_fn_80495070_00001030
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r6)
lbl_fn_80495070_00001030:
    lwz r4, 0x30(r1)
    lwz r3, 0x24(r1)
    subi r0, r4, 0x1
    stw r0, 0x30(r1)
    addi r0, r3, 0x1
    stw r0, 0x24(r1)
lbl_fn_80495070_00001048:
    cmplw r7, r5
    blt lbl_fn_80495070_00001004
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x20
    lwz r3, 0x8(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r29)
    stw r3, 0x28(r1)
    lwz r0, 0x20(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r29)
    stw r4, 0x24(r1)
    beq lbl_fn_80495070_000010A0
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80495070_000010A0
    stw r4, 0x24(r1)
    bl dtor_80084684
lbl_fn_80495070_000010A0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80495414(void)
{
    nofralloc
    blr
}

asm void fn_80495418(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r0, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r0, r5
    bge lbl_fn_80495418_00001140
    mulli r0, r0, 0x14
    lwz r5, 0x0(r3)
    add. r5, r5, r0
    beq lbl_fn_80495418_00001130
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r5)
lbl_fn_80495418_00001130:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_80495418_00001414
lbl_fn_80495418_00001140:
    lis r3, 0xccd
    subi r0, r3, 0x3334
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_80495418_00001178
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80495418_00001178:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0xccd
    stw r5, 0x14(r1)
    subi r0, r3, 0x3334
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_80495418_000011E0
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80495418_000011E0:
    lis r3, 0x444
    addi r0, r3, 0x4444
    cmplw r31, r0
    bge lbl_fn_80495418_00001230
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
    bge lbl_fn_80495418_00001224
    addi r3, r1, 0x8
lbl_fn_80495418_00001224:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80495418_00001274
lbl_fn_80495418_00001230:
    lis r3, 0x889
    subi r0, r3, 0x7778
    cmplw r31, r0
    bge lbl_fn_80495418_0000126C
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80495418_00001260
    addi r3, r1, 0x8
lbl_fn_80495418_00001260:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80495418_00001274
lbl_fn_80495418_0000126C:
    lis r3, 0xccd
    subi r28, r3, 0x3334
lbl_fn_80495418_00001274:
    lis r3, 0xccd
    subi r0, r3, 0x3334
    cmplw r28, r0
    ble lbl_fn_80495418_000012A8
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80495418_000012A8:
    mulli r3, r28, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80495418_000012DC
    lis r3, __files@ha
    lis r4, lbl_807902C8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807902C8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80495418_000012DC:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    mulli r3, r0, 0x14
    stw r28, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    mulli r0, r0, 0x14
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_80495418_0000132C
    lwz r0, 0x0(r30)
    stw r0, 0x0(r3)
    lfs f0, 0x4(r30)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r30)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r30)
    stfs f0, 0x10(r3)
lbl_fn_80495418_0000132C:
    lwz r4, 0x18(r1)
    li r0, 0x14
    lwz r3, 0x24(r1)
    addi r4, r4, 0x1
    stw r4, 0x18(r1)
    mulli r3, r3, 0x14
    lwz r4, 0x14(r1)
    lwz r5, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r5, r5, 0x14
    add r6, r4, r3
    add r5, r7, r5
    addi r3, r5, 0x13
    subf r3, r7, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    ble lbl_fn_80495418_000013C4
lbl_fn_80495418_00001374:
    subic. r6, r6, 0x14
    subi r5, r5, 0x14
    beq lbl_fn_80495418_000013A8
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lfs f0, 0x4(r5)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r6)
lbl_fn_80495418_000013A8:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_80495418_00001374
lbl_fn_80495418_000013C4:
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x14
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_80495418_00001414
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80495418_00001414
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80495418_00001414:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80495788(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    addi r11, r1, 0x330
    bl _savegpr_23
    lis r5, lbl_80756700@ha
    mr r27, r3
    mr r28, r4
    li r31, 0x0
    addi r25, r5, lbl_80756700@l
    li r26, 0x0
    b lbl_fn_80495788_00001B30
lbl_fn_80495788_00001464:
    lwz r4, 0x58(r27)
    mr r3, r28
    lwzx r4, r4, r26
    addi r4, r4, 0x4
    bl fn_8008937C
    lwz r5, 0x58(r27)
    mr r30, r3
    lfs f1, lbl_8088706C
    addi r4, r25, 0x172
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_80887074
    li r7, 0x0
    lfs f3, lbl_8088708C
    addi r5, r5, 0x58
    bl fn_8008771C
    lwz r5, 0x58(r27)
    mr r3, r30
    lfs f1, lbl_8088706C
    addi r4, r25, 0x17c
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_80887074
    li r7, 0x0
    lfs f3, lbl_8088708C
    addi r5, r5, 0x5c
    bl fn_8008771C
    lwz r5, 0x58(r27)
    mr r3, r30
    lfs f1, lbl_8088706C
    addi r4, r25, 0x186
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_80887074
    li r7, 0x0
    lfs f3, lbl_8088708C
    addi r5, r5, 0x60
    bl fn_8008771C
    lwz r5, 0x58(r27)
    mr r3, r30
    lfs f1, lbl_8088706C
    addi r4, r25, 0x190
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_80887074
    li r7, 0x0
    lfs f3, lbl_8088708C
    addi r5, r5, 0x68
    bl fn_8008771C
    lwz r5, 0x58(r27)
    mr r3, r30
    lfs f1, lbl_8088706C
    addi r4, r25, 0x195
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_80887074
    li r7, 0x0
    lfs f3, lbl_8088708C
    addi r5, r5, 0x6c
    bl fn_8008771C
    lwz r5, 0x58(r27)
    mr r3, r30
    lfs f1, lbl_8088706C
    addi r4, r25, 0x19a
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_80887074
    li r7, 0x0
    lfs f3, lbl_8088708C
    addi r5, r5, 0x70
    bl fn_8008771C
    mr r3, r30
    addi r4, r25, 0x19f
    bl fn_8008937C
    lwz r5, 0x58(r27)
    mr r29, r3
    addi r4, r25, 0x1a3
    li r6, 0x0
    lwzx r5, r5, r26
    li r7, 0x6
    li r8, 0x1
    li r9, 0x0
    addi r5, r5, 0x88
    li r10, 0x0
    bl fn_800874C8
    lwz r5, 0x58(r27)
    mr r3, r29
    lfs f1, lbl_8088706C
    addi r4, r25, 0x1ac
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_808870A8
    li r7, 0x0
    lfs f3, lbl_80887074
    addi r5, r5, 0x8c
    bl fn_8008771C
    lwz r5, 0x58(r27)
    mr r3, r29
    lfs f1, lbl_8088706C
    addi r4, r25, 0x1b6
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_808870A8
    li r7, 0x0
    lfs f3, lbl_80887074
    addi r5, r5, 0x90
    bl fn_8008771C
    lwz r5, 0x58(r27)
    mr r3, r29
    lfs f1, lbl_8088706C
    addi r4, r25, 0x1be
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_80887074
    li r7, 0x0
    lfs f3, lbl_8088708C
    addi r5, r5, 0x94
    bl fn_8008771C
    lwz r5, 0x58(r27)
    mr r3, r29
    lfs f1, lbl_8088706C
    addi r4, r25, 0x1c4
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_80887074
    li r7, 0x0
    lfs f3, lbl_8088708C
    addi r5, r5, 0x98
    bl fn_8008771C
    lwz r5, 0x58(r27)
    mr r3, r29
    lfs f1, lbl_8088706C
    addi r4, r25, 0x1ca
    lwzx r5, r5, r26
    li r6, 0x0
    lfs f2, lbl_80887074
    li r7, 0x0
    lfs f3, lbl_8088708C
    addi r5, r5, 0x9c
    bl fn_8008771C
    lwz r3, 0x58(r27)
    lwzx r3, r3, r26
    lwz r0, 0x1e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80495788_000016C8
    mr r3, r30
    addi r4, r25, 0x1d0
    bl fn_8008937C
    lwz r5, 0x58(r27)
    mr r4, r3
    lwzx r3, r5, r26
    addi r3, r3, 0x1e4
    bl fn_800BB4FC
lbl_fn_80495788_000016C8:
    lwz r3, 0x58(r27)
    lwzx r3, r3, r26
    lwz r0, 0x2ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80495788_00001714
    mr r3, r30
    addi r4, r25, 0x1d7
    bl fn_8008937C
    lwz r5, 0x58(r27)
    mr r4, r3
    lwzx r3, r5, r26
    lwz r0, 0x2ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80495788_00001708
    addi r3, r3, 0x2b0
    b lbl_fn_80495788_00001710
lbl_fn_80495788_00001708:
    lwz r3, lbl_8087EFA8
    addi r3, r3, 0x324
lbl_fn_80495788_00001710:
    bl fn_800BC194
lbl_fn_80495788_00001714:
    lwz r3, 0x58(r27)
    lwzx r24, r3, r26
    lwz r0, 0x22c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80495788_00001740
    mr r3, r30
    addi r4, r25, 0x1e3
    bl fn_8008937C
    mr r4, r3
    addi r3, r24, 0x230
    bl fn_800BB8D8
lbl_fn_80495788_00001740:
    lwz r3, 0x58(r27)
    lwzx r3, r3, r26
    lwz r3, 0x304(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80495788_00001768
    lwz r12, 0x0(r3)
    mr r4, r30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80495788_00001768:
    lwz r3, 0x58(r27)
    lwzx r24, r3, r26
    lwz r0, 0x240(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80495788_00001794
    mr r3, r30
    addi r4, r25, 0x1e8
    bl fn_8008937C
    mr r4, r3
    addi r3, r24, 0x244
    bl fn_800BBA64
lbl_fn_80495788_00001794:
    lwz r3, 0x58(r27)
    lwzx r3, r3, r26
    lwz r0, 0x280(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80495788_000017D4
    addi r3, r1, 0x208
    addi r4, r25, 0x1ed
    bl strcpy
    mr r3, r30
    addi r4, r1, 0x208
    bl fn_8008937C
    lwz r5, 0x58(r27)
    mr r4, r3
    lwzx r3, r5, r26
    addi r3, r3, 0x284
    bl fn_800BBEFC
lbl_fn_80495788_000017D4:
    lwz r3, 0x58(r27)
    lwzx r3, r3, r26
    lwz r4, 0x118(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80495788_000017F0
    addi r0, r3, 0x11c
    b lbl_fn_80495788_000017F4
lbl_fn_80495788_000017F0:
    li r0, 0x0
lbl_fn_80495788_000017F4:
    cmpwi r0, 0x0
    beq lbl_fn_80495788_000018B8
    cmpwi r4, 0x0
    beq lbl_fn_80495788_0000180C
    addi r29, r3, 0x11c
    b lbl_fn_80495788_00001810
lbl_fn_80495788_0000180C:
    li r29, 0x0
lbl_fn_80495788_00001810:
    addi r3, r1, 0x108
    addi r4, r25, 0x1f5
    bl strcpy
    mr r3, r30
    addi r4, r1, 0x108
    bl fn_8008937C
    lfs f1, lbl_80887074
    mr r24, r3
    lfs f2, lbl_808870A8
    addi r4, r25, 0x1fe
    fmr f3, f1
    addi r5, r29, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80887074
    mr r3, r24
    lfs f2, lbl_808870A8
    addi r4, r25, 0x205
    fmr f3, f1
    addi r5, r29, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808870AC
    mr r3, r24
    lfs f2, lbl_808870B0
    addi r4, r25, 0x20c
    lfs f3, lbl_80887074
    addi r5, r29, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808870AC
    mr r3, r24
    lfs f2, lbl_808870B0
    addi r4, r25, 0x215
    lfs f3, lbl_80887074
    addi r5, r29, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
lbl_fn_80495788_000018B8:
    lwz r3, 0x58(r27)
    lwzx r3, r3, r26
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80495788_000018E4
    lwz r0, 0xc0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80495788_000018DC
    b lbl_fn_80495788_000018E8
lbl_fn_80495788_000018DC:
    addi r0, r3, 0xc4
    b lbl_fn_80495788_000018E8
lbl_fn_80495788_000018E4:
    li r0, 0x0
lbl_fn_80495788_000018E8:
    cmpwi r0, 0x0
    beq lbl_fn_80495788_00001A38
    lwz r0, 0xc0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80495788_00001A38
    mr r3, r30
    addi r4, r25, 0x21e
    bl fn_8008937C
    lwz r4, 0x58(r27)
    mr r29, r3
    lwzx r3, r4, r26
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80495788_00001938
    lwz r24, 0xc0(r3)
    cmpwi r24, 0x0
    beq lbl_fn_80495788_00001930
    b lbl_fn_80495788_0000193C
lbl_fn_80495788_00001930:
    addi r24, r3, 0xc4
    b lbl_fn_80495788_0000193C
lbl_fn_80495788_00001938:
    li r24, 0x0
lbl_fn_80495788_0000193C:
    lfs f1, lbl_80887074
    mr r3, r29
    lfs f2, lbl_808870A8
    addi r4, r25, 0x1fe
    fmr f3, f1
    addi r5, r24, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80887074
    mr r3, r29
    lfs f2, lbl_808870A8
    addi r4, r25, 0x205
    fmr f3, f1
    addi r5, r24, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808870B4
    mr r3, r29
    lfs f2, lbl_808870A8
    addi r4, r25, 0x225
    lfs f3, lbl_80887074
    addi r5, r24, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808870B4
    mr r3, r29
    lfs f2, lbl_808870A8
    addi r4, r25, 0x22d
    lfs f3, lbl_80887074
    addi r5, r24, 0x18
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808870B4
    mr r3, r29
    lfs f2, lbl_808870A8
    addi r4, r25, 0x236
    lfs f3, lbl_8088708C
    addi r5, r24, 0x24
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r29
    mr r5, r24
    addi r4, r25, 0x240
    li r6, 0x0
    li r7, 0x6
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r25, 0x24a
    addi r5, r24, 0x48
    li r6, 0x0
    li r7, 0x3e8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
lbl_fn_80495788_00001A38:
    li r23, 0x0
    li r24, 0x0
    b lbl_fn_80495788_00001A9C
lbl_fn_80495788_00001A44:
    lwz r0, 0x28(r3)
    mr r3, r30
    lfs f1, lbl_808870B8
    addi r4, r25, 0x255
    add r29, r0, r24
    lfs f2, lbl_808870BC
    lfs f3, lbl_80887074
    mr r5, r29
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808870B8
    mr r3, r30
    lfs f2, lbl_808870BC
    addi r4, r25, 0x25d
    lfs f3, lbl_80887074
    addi r5, r29, 0xc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    addi r24, r24, 0x18
    addi r23, r23, 0x1
lbl_fn_80495788_00001A9C:
    lwz r3, 0x58(r27)
    lwzx r3, r3, r26
    lwz r0, 0x2c(r3)
    cmplw r23, r0
    blt lbl_fn_80495788_00001A44
    li r23, 0x0
    b lbl_fn_80495788_00001AFC
lbl_fn_80495788_00001AB8:
    mr r5, r23
    addi r3, r1, 0x8
    addi r4, r25, 0x265
    crclr 6
    bl sprintf
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    lwz r5, 0x58(r27)
    mr r24, r3
    mr r4, r23
    lwzx r3, r5, r26
    addi r3, r3, 0x4c
    bl fn_800C2448
    mr r4, r24
    bl fn_80079BC8
    addi r23, r23, 0x1
lbl_fn_80495788_00001AFC:
    lwz r3, 0x58(r27)
    lwzx r3, r3, r26
    addi r3, r3, 0x4c
    bl fn_800C23E8
    cmpw r23, r3
    blt lbl_fn_80495788_00001AB8
    lwz r3, 0x58(r27)
    mr r4, r30
    lwzx r3, r3, r26
    addi r3, r3, 0x4c
    bl fn_800C2E30
    addi r31, r31, 0x1
    addi r26, r26, 0x4
lbl_fn_80495788_00001B30:
    lwz r0, 0x5c(r27)
    cmplw r31, r0
    blt lbl_fn_80495788_00001464
    addi r11, r1, 0x330
    bl _restgpr_23
    lwz r0, 0x334(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}
