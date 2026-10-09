#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000EC88(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E4A4(void);
extern void fn_8004203C(void);
extern void fn_8004212C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_8006AD24(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80089D70(void);
extern void fn_80089EE4(void);
extern void fn_80092814(void);
extern void fn_80092F1C(void);
extern void fn_80092F90(void);
extern void fn_80093014(void);
extern void fn_8009373C(void);
extern void fn_80093D98(void);
extern void fn_80093F58(void);
extern void fn_80094958(void);
extern void fn_80095D44(void);
extern void fn_800973C0(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_801360C4(void);
extern void fn_801360D8(void);
extern void fn_8016E970(void);
extern void fn_8017B1C4(void);
extern void fn_801C3DCC(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_8036823C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80695AD0(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8077A720[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087D9E8;
extern u32 lbl_8087D9EC;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087FA20;
extern u32 lbl_80881964;
extern u32 lbl_80881968;
extern u32 lbl_8088196C;
extern u32 lbl_80881980;
extern u32 lbl_80881994;
extern u32 lbl_8088199C;

/* Function declarations */
void fn_80137B78(void);
void fn_80137E68(void);
void fn_80137FC0(void);
void fn_80138528(void);
void fn_801388B8(void);
void fn_80138A50(void);
void fn_80138D70(void);
void fn_80138E1C(void);

asm void fn_80137B78(void)
{
    nofralloc
    stwu r1, -0x950(r1)
    mflr r0
    stw r0, 0x954(r1)
    stw r31, 0x94c(r1)
    mr r31, r3
    addi r3, r3, 0xb0
    stw r30, 0x948(r1)
    stw r29, 0x944(r1)
    bl fn_80092F90
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80093014
    addi r3, r31, 0x84
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x84
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x308(r1)
    mr r30, r3
    addi r3, r1, 0x318
    stw r0, 0x30c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x310(r1)
    stw r0, 0x314(r1)
    stw r0, 0x938(r1)
    bl memset
    addi r3, r1, 0x918
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x308(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x308
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x308
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x308(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r3, lbl_80737A9C@ha
    addi r30, r3, lbl_80737A9C@l
lbl_fn_80137B78_000000C4:
    addi r3, r1, 0x308
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80137B78_000002C4
    addi r4, r30, 0xda
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137B78_00000158
    addi r29, r30, 0x24
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x208
    bl strcpy
    mr r3, r29
    mr r4, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137B78_00000138
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r31, 0xb0
    addi r4, r1, 0x208
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_80137B78_000002C4
lbl_fn_80137B78_00000138:
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    mr r5, r29
    addi r3, r31, 0xb0
    addi r4, r1, 0x208
    bl fn_80092F1C
    b lbl_fn_80137B78_000002C4
lbl_fn_80137B78_00000158:
    mr r3, r29
    addi r4, r30, 0xe4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137B78_00000210
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80137B78_0000018C
    bl fn_8036823C
    cmpwi r3, 0x0
    beq lbl_fn_80137B78_0000018C
    li r0, 0x1
    b lbl_fn_80137B78_0000019C
lbl_fn_80137B78_0000018C:
    lwz r3, lbl_8087FA20
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80137B78_0000019C:
    cmpwi r0, 0x0
    bne lbl_fn_80137B78_000002C4
    addi r29, r30, 0x24
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x108
    bl strcpy
    mr r3, r29
    mr r4, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137B78_000001F0
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r31, 0xb0
    addi r4, r1, 0x108
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_80137B78_000002C4
lbl_fn_80137B78_000001F0:
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    mr r5, r29
    addi r3, r31, 0xb0
    addi r4, r1, 0x108
    bl fn_80092F1C
    b lbl_fn_80137B78_000002C4
lbl_fn_80137B78_00000210:
    mr r3, r29
    addi r4, r30, 0xf5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137B78_000002C4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80137B78_00000244
    bl fn_8036823C
    cmpwi r3, 0x0
    beq lbl_fn_80137B78_00000244
    li r0, 0x1
    b lbl_fn_80137B78_00000254
lbl_fn_80137B78_00000244:
    lwz r3, lbl_8087FA20
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80137B78_00000254:
    cmpwi r0, 0x0
    beq lbl_fn_80137B78_000002C4
    addi r29, r30, 0x24
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    mr r3, r29
    mr r4, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137B78_000002A8
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r31, 0xb0
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_80137B78_000002C4
lbl_fn_80137B78_000002A8:
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    mr r5, r29
    addi r3, r31, 0xb0
    addi r4, r1, 0x8
    bl fn_80092F1C
lbl_fn_80137B78_000002C4:
    addi r3, r1, 0x308
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80137B78_000000C4
    lwz r0, 0x954(r1)
    lwz r31, 0x94c(r1)
    lwz r30, 0x948(r1)
    lwz r29, 0x944(r1)
    mtlr r0
    addi r1, r1, 0x950
    blr
}

asm void fn_80137E68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    mr r3, r29
    stw r28, 0x10(r1)
    mr r28, r4
    bl fn_8005B9CC
    lis r4, lbl_80737A9C@ha
    mr r30, r3
    addi r31, r4, lbl_80737A9C@l
    b lbl_fn_80137E68_0000040C
lbl_fn_80137E68_0000032C:
    mr r3, r30
    addi r4, r31, 0x16a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137E68_00000350
    lwz r0, 0x4(r28)
    ori r0, r0, 0x400
    stw r0, 0x4(r28)
    b lbl_fn_80137E68_00000400
lbl_fn_80137E68_00000350:
    mr r3, r30
    addi r4, r31, 0x172
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137E68_00000374
    lwz r0, 0x4(r28)
    ori r0, r0, 0x800
    stw r0, 0x4(r28)
    b lbl_fn_80137E68_00000400
lbl_fn_80137E68_00000374:
    mr r3, r30
    addi r4, r31, 0x17a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137E68_00000398
    lwz r0, 0x4(r28)
    ori r0, r0, 0x4
    stw r0, 0x4(r28)
    b lbl_fn_80137E68_00000400
lbl_fn_80137E68_00000398:
    mr r3, r30
    addi r4, r31, 0x188
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137E68_000003BC
    lwz r0, 0x4(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x4(r28)
    b lbl_fn_80137E68_00000400
lbl_fn_80137E68_000003BC:
    mr r3, r30
    addi r4, r31, 0x19a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137E68_000003E0
    lwz r0, 0x4(r28)
    ori r0, r0, 0x8
    stw r0, 0x4(r28)
    b lbl_fn_80137E68_00000400
lbl_fn_80137E68_000003E0:
    mr r3, r30
    addi r4, r31, 0x1aa
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137E68_00000400
    lwz r0, 0x4(r28)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r28)
lbl_fn_80137E68_00000400:
    mr r3, r29
    bl fn_8005B9CC
    mr r30, r3
lbl_fn_80137E68_0000040C:
    cmpwi r30, 0x0
    beq lbl_fn_80137E68_00000428
    mr r4, r30
    addi r3, r31, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137E68_0000032C
lbl_fn_80137E68_00000428:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80137FC0(void)
{
    nofralloc
    stwu r1, -0x920(r1)
    mflr r0
    stw r0, 0x924(r1)
    li r0, 0x918
    stfd f31, 0x910(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x908
    stfd f30, 0x900(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x8f8
    stfd f29, 0x8f0(r1)
    psq_stx f29, r1, r0, 0, 0
    stw r31, 0x8ec(r1)
    mr r31, r3
    addi r3, r3, 0x84
    stw r30, 0x8e8(r1)
    stw r29, 0x8e4(r1)
    stw r28, 0x8e0(r1)
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x84
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x2a0(r1)
    mr r30, r3
    addi r3, r1, 0x2b0
    stw r0, 0x2a4(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x2a8(r1)
    stw r0, 0x2ac(r1)
    stw r0, 0x8d0(r1)
    bl memset
    addi r3, r1, 0x8b0
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x2a0(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x2a0
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x2a0
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x2a0(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r3, lbl_80737A9C@ha
    addi r30, r3, lbl_80737A9C@l
lbl_fn_80137FC0_00000520:
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    mr r28, r3
    addi r4, r30, 0x1be
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_00000570
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x1a0
    bl strcpy
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r5, r3
    addi r3, r31, 0xb0
    addi r4, r1, 0x1a0
    bl fn_8009373C
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_00000570:
    mr r3, r28
    addi r4, r30, 0x1cb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_00000698
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0xa0
    bl strcpy
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f31, 0x38(r1)
    addi r3, r1, 0x2a0
    stfs f30, 0x3c(r1)
    stfs f29, 0x40(r1)
    stfs f1, 0x44(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f31, 0x28(r1)
    addi r3, r1, 0x2a0
    stfs f30, 0x2c(r1)
    stfs f29, 0x30(r1)
    stfs f1, 0x34(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f29, 0x18(r1)
    addi r3, r31, 0xb0
    addi r4, r1, 0xa0
    addi r5, r1, 0x38
    stfs f30, 0x1c(r1)
    addi r6, r1, 0x28
    addi r7, r1, 0x18
    stfs f31, 0x20(r1)
    stfs f1, 0x24(r1)
    bl fn_80094958
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_00000698:
    mr r3, r28
    addi r4, r30, 0x1d9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_000006C8
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0xb0
    li r5, 0x0
    bl fn_80093D98
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_000006C8:
    mr r3, r28
    addi r4, r30, 0x1e7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_000006F8
    addi r3, r1, 0x74
    addi r4, r1, 0x2a0
    bl fn_80089EE4
    addi r3, r31, 0xb0
    addi r4, r1, 0x74
    bl fn_80093F58
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_000006F8:
    mr r3, r28
    addi r4, r30, 0x1f1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_00000774
    lwz r3, 0x50(r31)
    subis r0, r3, 0xa
    cmplwi r0, 0xae73
    beq lbl_fn_80137FC0_00000904
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x5b0(r31)
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x5b4(r31)
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_80684600
    cntlzw r3, r3
    lwz r0, 0x12a4(r31)
    rlwimi r0, r3, 8, 18, 18
    stw r0, 0x12a4(r31)
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_80684600
    lwz r0, 0x12a4(r31)
    rlwimi r0, r3, 12, 19, 19
    stw r0, 0x12a4(r31)
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_00000774:
    mr r3, r28
    addi r4, r30, 0x1fb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_000007BC
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x540(r31)
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x544(r31)
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x548(r31)
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_000007BC:
    mr r3, r28
    addi r4, r30, 0x201
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_000007EC
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80137FC0_00000904
    addi r3, r31, 0xb0
    addi r4, r1, 0x2a0
    bl fn_800973C0
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_000007EC:
    mr r3, r28
    addi r4, r30, 0x207
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_00000880
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    mr r28, r3
    addi r4, r30, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_00000824
    li r3, -0x1
    b lbl_fn_80137FC0_00000834
lbl_fn_80137FC0_00000824:
    mr r4, r28
    addi r3, r31, 0xb0
    li r5, 0x0
    bl fn_80092814
lbl_fn_80137FC0_00000834:
    mr r29, r3
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    mr r28, r3
    addi r4, r30, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_0000085C
    li r3, -0x1
    b lbl_fn_80137FC0_0000086C
lbl_fn_80137FC0_0000085C:
    mr r4, r28
    addi r3, r31, 0xb0
    li r5, 0x0
    bl fn_80092814
lbl_fn_80137FC0_0000086C:
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xb0
    bl fn_80095D44
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_00000880:
    mr r3, r28
    addi r4, r30, 0x219
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_000008A8
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x514(r31)
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_000008A8:
    mr r3, r28
    addi r4, r30, 0x233
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_000008D8
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_80684600
    lwz r0, 0x12a8(r31)
    rlwimi r0, r3, 27, 4, 4
    stw r0, 0x12a8(r31)
    b lbl_fn_80137FC0_00000904
lbl_fn_80137FC0_000008D8:
    mr r3, r28
    addi r4, r30, 0x245
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_00000904
    addi r3, r1, 0x2a0
    bl fn_8005B9CC
    bl fn_80684600
    lwz r0, 0x12a8(r31)
    rlwimi r0, r3, 25, 6, 6
    stw r0, 0x12a8(r31)
lbl_fn_80137FC0_00000904:
    addi r3, r1, 0x2a0
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80137FC0_00000520
    lwz r3, 0x50(r31)
    subis r3, r3, 0xb
    addi r0, r3, 0x518f
    cmplwi r0, 0x1
    bgt lbl_fn_80137FC0_0000096C
    lfs f0, lbl_80881964
    lis r4, lbl_80737A9C@ha
    lis r5, lbl_807C7030@ha
    stfs f0, 0x8(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r3, r1, 0x48
    addi r5, r5, lbl_807C7030@l
    stfs f0, 0xc(r1)
    mr r6, r5
    addi r4, r4, 0x258
    stfs f0, 0x10(r1)
    addi r7, r1, 0x8
    li r8, 0x8
    bl fn_80089D70
    addi r3, r31, 0xb0
    addi r4, r1, 0x48
    bl fn_80093F58
lbl_fn_80137FC0_0000096C:
    li r0, 0x918
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x910(r1)
    li r0, 0x908
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x900(r1)
    li r0, 0x8f8
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x8f0(r1)
    lwz r31, 0x8ec(r1)
    lwz r30, 0x8e8(r1)
    lwz r29, 0x8e4(r1)
    lwz r0, 0x924(r1)
    lwz r28, 0x8e0(r1)
    mtlr r0
    addi r1, r1, 0x920
    blr
}

asm void fn_80138528(void)
{
    nofralloc
    stwu r1, -0x680(r1)
    mflr r0
    stw r0, 0x684(r1)
    stw r31, 0x67c(r1)
    mr r31, r3
    stw r30, 0x678(r1)
    stw r29, 0x674(r1)
    stw r28, 0x670(r1)
    lwz r4, 0x60(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80138528_00000B5C
    lis r30, lbl_80737A9C@ha
    lwz r3, 0x18(r4)
    addi r30, r30, lbl_80737A9C@l
    addi r4, r30, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80138528_00000B5C
    li r0, 0x0
    addi r30, r30, 0x25f
    stw r0, 0x2c(r1)
    mr r3, r30
    addi r29, r1, 0x2c
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl strlen
    mr r28, r3
    mr r3, r29
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r29
    stb r0, 0x18(r1)
    mr r6, r30
    add r7, r30, r28
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x2c(r1)
    lwz r3, 0x60(r31)
    srwi. r0, r0, 31
    lwz r29, 0x18(r3)
    bne lbl_fn_80138528_00000A6C
    lbz r0, 0x2c(r1)
    clrlwi r28, r0, 25
    b lbl_fn_80138528_00000A70
lbl_fn_80138528_00000A6C:
    lwz r28, 0x30(r1)
lbl_fn_80138528_00000A70:
    lbz r0, 0x14(r1)
    mr r3, r29
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r4, r28
    mr r6, r29
    addi r3, r1, 0x2c
    add r7, r29, r0
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_80737A9C@ha
    li r0, 0x0
    addi r3, r3, lbl_80737A9C@l
    stw r0, 0x20(r1)
    addi r29, r3, 0x121
    addi r30, r1, 0x20
    stw r0, 0x24(r1)
    mr r3, r29
    stw r0, 0x28(r1)
    bl strlen
    mr r28, r3
    mr r3, r30
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r28
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x2c
    bl fn_8006AD24
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80138528_00000B1C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80138528_00000B1C:
    lwz r0, 0x2c(r1)
    addi r3, r31, 0x98
    srwi. r0, r0, 31
    bne lbl_fn_80138528_00000B34
    addi r4, r1, 0x2d
    b lbl_fn_80138528_00000B38
lbl_fn_80138528_00000B34:
    lwz r4, 0x34(r1)
lbl_fn_80138528_00000B38:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80138528_00000B5C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80138528_00000B5C:
    addi r3, r31, 0xa4
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80138528_00000D20
    addi r3, r31, 0xa4
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0xa4
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x38(r1)
    mr r29, r3
    addi r3, r1, 0x48
    stw r0, 0x3c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x668(r1)
    bl memset
    addi r3, r1, 0x648
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x38(r1)
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x38
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x38
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x38(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r30, lbl_80737A9C@ha
    addi r30, r30, lbl_80737A9C@l
lbl_fn_80138528_00000C00:
    addi r3, r1, 0x38
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80138528_00000D10
    cmpwi r0, 0x0
    beq lbl_fn_80138528_00000D10
    addi r4, r30, 0x277
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80138528_00000C68
    addi r3, r1, 0x38
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x12ac(r31)
    addi r3, r1, 0x38
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x12b4(r31)
    addi r3, r1, 0x38
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x12b8(r31)
    b lbl_fn_80138528_00000D10
lbl_fn_80138528_00000C68:
    mr r3, r28
    addi r4, r30, 0x285
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80138528_00000C90
    addi r3, r1, 0x38
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x12c0(r31)
    b lbl_fn_80138528_00000D10
lbl_fn_80138528_00000C90:
    mr r3, r28
    addi r4, r30, 0x156
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80138528_00000D10
    addi r5, r30, 0x24
    li r3, 0xc
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80138528_00000CC8
    bl fn_802377B8
lbl_fn_80138528_00000CC8:
    lwz r29, 0x121c(r31)
    cmpwi r29, 0x0
    stw r3, 0x121c(r31)
    beq lbl_fn_80138528_00000CF8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_80138528_00000CF0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80138528_00000CF0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80138528_00000CF8:
    lwz r28, 0x121c(r31)
    addi r3, r1, 0x38
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r28
    bl fn_8023780C
lbl_fn_80138528_00000D10:
    addi r3, r1, 0x38
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80138528_00000C00
lbl_fn_80138528_00000D20:
    lwz r0, 0x684(r1)
    lwz r31, 0x67c(r1)
    lwz r30, 0x678(r1)
    lwz r29, 0x674(r1)
    lwz r28, 0x670(r1)
    mtlr r0
    addi r1, r1, 0x680
    blr
}

asm void fn_801388B8(void)
{
    nofralloc
    stwu r1, -0x740(r1)
    mflr r0
    stw r0, 0x744(r1)
    stw r31, 0x73c(r1)
    stw r30, 0x738(r1)
    stw r29, 0x734(r1)
    mr r29, r3
    addi r3, r1, 0x24
    bl fn_8003E4A4
    lis r4, lbl_80737A9C@ha
    addi r3, r1, 0x6c
    addi r30, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r30, 0x291
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xcc
    addi r4, r1, 0x24
    addi r5, r1, 0x6c
    bl fn_800EC2C4
    addi r3, r1, 0x6c
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x90
    addi r4, r1, 0xcc
    bl fn_800EC654
    b lbl_fn_801388B8_00000E68
lbl_fn_801388B8_00000DAC:
    addi r3, r1, 0x90
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r30, 0x293
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_801388B8_00000E60
    addi r3, r1, 0x90
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x18
    bl fn_8000EC88
    mr r31, r3
    addi r3, r1, 0x18
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0xf8
    addi r4, r4, 0x5
    subi r5, r31, 0x5
    bl fn_8004203C
    addi r3, r1, 0xc
    bl fn_801360C4
lbl_fn_801388B8_00000E14:
    addi r3, r1, 0xf8
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    ble lbl_fn_801388B8_00000E3C
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80138A50
    b lbl_fn_801388B8_00000E14
lbl_fn_801388B8_00000E3C:
    mr r3, r29
    addi r4, r1, 0xc
    bl fn_8017B1C4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_801360D8
    addi r3, r1, 0x18
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_801388B8_00000E60:
    addi r3, r1, 0x90
    bl fn_800ED4E0
lbl_fn_801388B8_00000E68:
    addi r3, r1, 0x30
    addi r4, r1, 0xcc
    bl fn_800EDFE8
    addi r3, r1, 0x90
    addi r4, r1, 0x30
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_801388B8_00000DAC
    addi r3, r1, 0x90
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0xcc
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x24
    li r4, -0x1
    bl dtor_80013D60
    lwz r0, 0x744(r1)
    lwz r31, 0x73c(r1)
    lwz r30, 0x738(r1)
    lwz r29, 0x734(r1)
    mtlr r0
    addi r1, r1, 0x740
    blr
}

asm void fn_80138A50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80138A50_00000F14
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80138A50_00001064
lbl_fn_80138A50_00000F14:
    lwz r0, 0x4(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_80138A50_000011B8
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D9EC
    la r6, lbl_8087D9E8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80138A50_00001054
    lwz r0, 0x0(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80138A50_00000F5C
    mr r4, r0
lbl_fn_80138A50_00000F5C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80138A50_0000104C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80138A50_0000101C
    addi r0, r8, 0x7
    mr r7, r31
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80138A50_0000101C
lbl_fn_80138A50_00000F90:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80138A50_00000F90
lbl_fn_80138A50_0000101C:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80138A50_0000104C
lbl_fn_80138A50_00001034:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80138A50_00001034
lbl_fn_80138A50_0000104C:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_80138A50_00001054:
    li r0, 0x8
    stw r31, 0x8(r28)
    stw r0, 0x4(r28)
    b lbl_fn_80138A50_000011B8
lbl_fn_80138A50_00001064:
    lwz r3, 0x0(r3)
    cmplw r3, r0
    blt lbl_fn_80138A50_000011B8
    slwi r31, r3, 1
    cmplw r0, r31
    bgt lbl_fn_80138A50_000011B8
    slwi r3, r31, 2
    li r4, 0x0
    la r5, lbl_8087D9EC
    la r6, lbl_8087D9E8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80138A50_000011B0
    lwz r0, 0x0(r28)
    mr r4, r31
    cmplw r31, r0
    ble lbl_fn_80138A50_000010B8
    mr r4, r0
lbl_fn_80138A50_000010B8:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80138A50_000011A8
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80138A50_00001178
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80138A50_00001178
lbl_fn_80138A50_000010EC:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80138A50_000010EC
lbl_fn_80138A50_00001178:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80138A50_000011A8
lbl_fn_80138A50_00001190:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80138A50_00001190
lbl_fn_80138A50_000011A8:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_80138A50_000011B0:
    stw r30, 0x8(r28)
    stw r31, 0x4(r28)
lbl_fn_80138A50_000011B8:
    lwz r0, 0x0(r28)
    lwz r3, 0x8(r28)
    slwi r0, r0, 2
    lwz r4, 0x0(r29)
    stwx r4, r3, r0
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80138D70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    cmpwi r5, 0x0
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_80138D70_00001228
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80138D70_0000129C
lbl_fn_80138D70_00001228:
    lfs f3, 0x604(r4)
    addi r5, r1, 0x20
    lfs f5, 0x5f8(r4)
    lfs f0, 0x608(r4)
    fsubs f7, f3, f5
    lfs f6, 0x5fc(r4)
    lfs f4, 0x600(r4)
    fsubs f9, f0, f6
    lfs f3, 0x5f4(r4)
    lfs f0, lbl_80881980
    fsubs f4, f4, f3
    stfs f7, 0x18(r1)
    fmuls f8, f9, f0
    fmuls f7, f7, f0
    stfs f4, 0x14(r1)
    fmuls f0, f4, f0
    fadds f2, f8, f6
    stfs f9, 0x1c(r1)
    fadds f4, f7, f5
    stfs f0, 0x8(r1)
    fadds f0, f0, f3
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_80138D70_0000129C:
    addi r1, r1, 0x30
    blr
}

asm void fn_80138E1C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xa8(r1)
    li r30, 0x0
    stw r29, 0xa4(r1)
    mr r29, r3
    stw r28, 0xa0(r1)
    bne lbl_fn_80138E1C_00001938
    lwz r0, 0x12ac(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80138E1C_000012F8
    cmpwi r0, 0x2
    beq lbl_fn_80138E1C_00001634
    b lbl_fn_80138E1C_000019AC
lbl_fn_80138E1C_000012F8:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_8088199C
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    ble lbl_fn_80138E1C_0000133C
    lfs f31, 0x2e4(r29)
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    bge lbl_fn_80138E1C_0000133C
    lwz r3, 0x12b0(r29)
    addi r0, r3, 0x1
    stw r0, 0x12b0(r29)
lbl_fn_80138E1C_0000133C:
    lwz r3, 0x12b0(r29)
    lwz r0, 0x12b4(r29)
    cmpw r3, r0
    blt lbl_fn_80138E1C_000019AC
    li r0, 0x0
    stw r0, 0x12b0(r29)
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r6, r3, 31
    subf r0, r6, r0
    lis r5, lbl_80737A9C@ha
    rotlwi r0, r0, 2
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    add r8, r0, r6
    li r7, 0x0
    addi r5, r5, 0x24
    mr r6, r5
    addi r28, r8, 0x71
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80138E1C_000013BC
    lfs f1, lbl_80881968
    mr r4, r29
    mr r5, r28
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    bl fn_801C3DCC
    mr r30, r3
lbl_fn_80138E1C_000013BC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80138E1C_0000144C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80138E1C_000013F4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_80138E1C_00001410
lbl_fn_80138E1C_000013F4:
    addi r3, r31, 0x18
    lwz r5, 0x18(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_80138E1C_00001410:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x44
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80138E1C_0000144C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_0000144C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80138E1C_00001600
    cmpwi r0, 0x8
    beq lbl_fn_80138E1C_00001464
    stw r0, 0x564(r29)
lbl_fn_80138E1C_00001464:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80138E1C_00001600
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80138E1C_0000149C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_80138E1C_000014B8
lbl_fn_80138E1C_0000149C:
    addi r3, r31, 0x24
    lwz r5, 0x24(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_80138E1C_000014B8:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80138E1C_000014F4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_000014F4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80138E1C_000015D0
    cmpwi r0, 0x8
    beq lbl_fn_80138E1C_0000150C
    stw r0, 0x564(r29)
lbl_fn_80138E1C_0000150C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80138E1C_000015D0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80138E1C_00001544
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_80138E1C_00001560
lbl_fn_80138E1C_00001544:
    addi r3, r31, 0x30
    lwz r5, 0x30(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_80138E1C_00001560:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x38
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80138E1C_0000159C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_0000159C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80138E1C_000015D0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_000015D0:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80138E1C_00001600
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_00001600:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80138E1C_0000162C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_0000162C:
    li r30, 0x1
    b lbl_fn_80138E1C_000019AC
lbl_fn_80138E1C_00001634:
    lwz r0, 0x12b4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80138E1C_000019AC
    bl fn_80680CF8
    lwz r4, 0x12b4(r29)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf. r0, r0, r3
    bne lbl_fn_80138E1C_000019AC
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r6, r3, 31
    subf r0, r6, r0
    lis r5, lbl_80737A9C@ha
    rotlwi r0, r0, 2
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    add r8, r0, r6
    li r7, 0x0
    addi r5, r5, 0x24
    mr r6, r5
    addi r28, r8, 0x71
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80138E1C_000016C0
    lfs f1, lbl_80881968
    mr r4, r29
    mr r5, r28
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    bl fn_801C3DCC
    mr r30, r3
lbl_fn_80138E1C_000016C0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80138E1C_00001750
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80138E1C_000016F8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x74(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_80138E1C_00001714
lbl_fn_80138E1C_000016F8:
    addi r3, r31, 0x3c
    lwz r5, 0x3c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
lbl_fn_80138E1C_00001714:
    lwz r5, 0x74(r1)
    addi r3, r1, 0x20
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80138E1C_00001750
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_00001750:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80138E1C_00001904
    cmpwi r0, 0x8
    beq lbl_fn_80138E1C_00001768
    stw r0, 0x564(r29)
lbl_fn_80138E1C_00001768:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80138E1C_00001904
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80138E1C_000017A0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x80(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
    b lbl_fn_80138E1C_000017BC
lbl_fn_80138E1C_000017A0:
    addi r3, r31, 0x48
    lwz r5, 0x48(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_80138E1C_000017BC:
    lwz r5, 0x80(r1)
    addi r3, r1, 0x8
    lwz r4, 0x84(r1)
    lwz r0, 0x88(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80138E1C_000017F8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_000017F8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80138E1C_000018D4
    cmpwi r0, 0x8
    beq lbl_fn_80138E1C_00001810
    stw r0, 0x564(r29)
lbl_fn_80138E1C_00001810:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80138E1C_000018D4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80138E1C_00001848
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x8c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    b lbl_fn_80138E1C_00001864
lbl_fn_80138E1C_00001848:
    addi r3, r31, 0x54
    lwz r5, 0x54(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
lbl_fn_80138E1C_00001864:
    lwz r5, 0x8c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80138E1C_000018A0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_000018A0:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80138E1C_000018D4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_000018D4:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80138E1C_00001904
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_00001904:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80138E1C_00001930
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80138E1C_00001930:
    li r30, 0x1
    b lbl_fn_80138E1C_000019AC
lbl_fn_80138E1C_00001938:
    lwz r0, 0x12b8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80138E1C_000019AC
    lwz r0, 0x12bc(r3)
    cmpwi r0, -0x1
    bne lbl_fn_80138E1C_000019AC
    bl fn_80680CF8
    lwz r4, 0x12b8(r29)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf. r0, r0, r3
    bne lbl_fn_80138E1C_000019AC
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    lfs f1, lbl_8088196C
    rotlwi r0, r0, 2
    lfs f2, lbl_80881994
    add r4, r0, r3
    addi r3, r29, 0xb0
    addi r5, r4, 0x71
    stw r5, 0x12bc(r29)
    li r4, 0x3
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r30, 0x1
lbl_fn_80138E1C_000019AC:
    psq_l f31, 0xb8(r1), 0, 0
    mr r3, r30
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
