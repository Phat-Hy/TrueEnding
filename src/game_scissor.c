#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800EFDA0(void);
extern void fn_800EFE3C(void);
extern void fn_800FA4FC(void);
extern void fn_800FAB80(void);
extern void fn_800FBA9C(void);
extern void fn_800FC410(void);
extern void fn_80133EE8(void);
extern void fn_80134134(void);
extern void fn_80148B0C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80736040[];
extern u8 lbl_80779DD8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80881478;
extern u32 lbl_80881494;
extern u32 lbl_808814D4;
extern u32 lbl_808814D8;
extern u32 lbl_808814DC;
extern u32 lbl_808814EC;
extern u32 lbl_80881500;
extern u32 lbl_80881510;
extern u32 lbl_8088151C;

/* Function declarations */
void fn_800F8C6C(void);

asm void fn_800F8C6C(void)
{
    nofralloc
    stwu r1, -0x4f0(r1)
    mflr r0
    stw r0, 0x4f4(r1)
    addi r11, r1, 0x460
    stfd f31, 0x4e0(r1)
    psq_st f31, 0x4e8(r1), 0, 0
    stfd f30, 0x4d0(r1)
    psq_st f30, 0x4d8(r1), 0, 0
    stfd f29, 0x4c0(r1)
    psq_st f29, 0x4c8(r1), 0, 0
    stfd f28, 0x4b0(r1)
    psq_st f28, 0x4b8(r1), 0, 0
    stfd f27, 0x4a0(r1)
    psq_st f27, 0x4a8(r1), 0, 0
    stfd f26, 0x490(r1)
    psq_st f26, 0x498(r1), 0, 0
    stfd f25, 0x480(r1)
    psq_st f25, 0x488(r1), 0, 0
    stfd f24, 0x470(r1)
    psq_st f24, 0x478(r1), 0, 0
    stfd f23, 0x460(r1)
    psq_st f23, 0x468(r1), 0, 0
    bl _savegpr_14
    fmr f27, f1
    cmpwi r7, 0x0
    stw r4, 0x10(r1)
    mr r15, r3
    mr r16, r6
    mr r17, r7
    stw r5, 0x14(r1)
    mr r18, r8
    stw r9, 0x18(r1)
    stw r10, 0x1c(r1)
    bne lbl_fn_800F8C6C_00000090
    li r3, 0x0
    b lbl_fn_800F8C6C_00001820
lbl_fn_800F8C6C_00000090:
    lfs f3, lbl_80881478
    li r22, 0x0
    lfs f0, lbl_80881494
    addi r3, r1, 0x338
    stw r22, 0x1d4(r1)
    li r14, 0x0
    li r4, 0x79
    stw r22, 0x1d8(r1)
    stw r22, 0x1dc(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f0, 0x1d0(r1)
    lfs f0, 0x538(r6)
    fadds f1, f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x1c8
    addi r3, r1, 0x338
    mr r5, r4
    bl fn_805F93C0
    lwz r4, lbl_8087F8A0
    lis r3, __files@ha
    lfs f29, lbl_80881478
    addi r31, r3, __files@l
    lwz r21, 0x48(r4)
    addi r25, r1, 0x1dc
    lfs f28, lbl_80881494
    addi r19, r1, 0x1f4
    lfs f26, lbl_80881510
    lis r24, 0xcccd
    lfs f25, lbl_8088151C
    lis r29, 0x1555
    lis r28, 0x71c
    lis r27, 0xe39
    li r26, 0x0
    li r23, 0xc
    b lbl_fn_800F8C6C_000004DC
lbl_fn_800F8C6C_00000120:
    fmr f1, f27
    mr r3, r15
    mr r4, r16
    mr r5, r21
    mr r6, r17
    mr r7, r18
    bl fn_800FBA9C
    cmpwi r3, 0x0
    mr r20, r3
    blt lbl_fn_800F8C6C_000004D8
    mr r3, r21
    mr r4, r20
    bl fn_80148B0C
    lfs f3, 0x530(r16)
    mr r30, r3
    lfs f0, 0xc(r3)
    lfs f5, 0x52c(r16)
    fsubs f6, f3, f0
    lfs f4, 0x8(r3)
    lfs f0, 0x4(r3)
    addi r3, r1, 0x1bc
    lfs f3, 0x528(r16)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x1c0(r1)
    stfs f0, 0x1bc(r1)
    stfs f6, 0x1c4(r1)
    bl fn_805F9940
    lfs f3, 0x10(r30)
    li r0, 0x0
    lfs f0, 0x1bc(r1)
    fsubs f24, f1, f3
    stfs f29, 0x1c0(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_800F8C6C_000001C4
    fcmpu cr0, f29, f29
    bne lbl_fn_800F8C6C_000001C4
    lfs f0, 0x1c4(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_800F8C6C_000001C4
    li r0, 0x1
lbl_fn_800F8C6C_000001C4:
    cmpwi r0, 0x0
    beq lbl_fn_800F8C6C_000001D0
    stfs f28, 0x1c0(r1)
lbl_fn_800F8C6C_000001D0:
    addi r3, r1, 0x1bc
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x1bc
    addi r4, r1, 0x1c8
    bl fn_805F9990
    fnmsubs f0, f26, f1, f25
    lwz r3, 0x1d8(r1)
    lwz r30, 0x1dc(r1)
    stw r21, 0x150(r1)
    fmuls f24, f24, f0
    cmplw r3, r30
    stw r20, 0x154(r1)
    stfs f24, 0x158(r1)
    bge lbl_fn_800F8C6C_00000230
    addi r4, r3, 0x1
    lwz r3, 0x1d4(r1)
    subi r0, r4, 0x1
    stw r4, 0x1d8(r1)
    mulli r0, r0, 0xc
    stwux r21, r3, r0
    stw r20, 0x4(r3)
    stfs f24, 0x8(r3)
    b lbl_fn_800F8C6C_000004D8
lbl_fn_800F8C6C_00000230:
    addi r0, r29, 0x5555
    subf r0, r30, r0
    cmplwi r0, 0x1
    bge lbl_fn_800F8C6C_0000025C
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r4, r3, 0x21d
    addi r3, r31, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800F8C6C_0000025C:
    addi r0, r28, 0x71c7
    cmplw r30, r0
    bge lbl_fn_800F8C6C_00000290
    addi r3, r30, 0x1
    subi r4, r24, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_800F8C6C_000002AC
    b lbl_fn_800F8C6C_000002AC
    b lbl_fn_800F8C6C_000002AC
lbl_fn_800F8C6C_00000290:
    subi r0, r27, 0x1c72
    cmplw r30, r0
    bge lbl_fn_800F8C6C_000002AC
    addi r0, r30, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_800F8C6C_000002AC:
    lwz r3, 0x1d8(r1)
    addi r0, r29, 0x5555
    lwz r20, 0x1dc(r1)
    addi r3, r3, 0x1
    stw r26, 0x1f4(r1)
    subf r3, r20, r3
    subf r0, r20, r0
    cmplw r3, r0
    stw r26, 0x1f8(r1)
    stw r26, 0x1fc(r1)
    stw r25, 0x200(r1)
    stw r26, 0x204(r1)
    stw r3, 0x4c(r1)
    ble lbl_fn_800F8C6C_00000300
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r4, r3, 0x21d
    addi r3, r31, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800F8C6C_00000300:
    addi r0, r28, 0x71c7
    cmplw r20, r0
    bge lbl_fn_800F8C6C_00000348
    addi r4, r20, 0x1
    subi r5, r24, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x4c(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x44
    srwi r4, r4, 2
    stw r4, 0x44(r1)
    cmplw r4, r0
    bge lbl_fn_800F8C6C_0000033C
    addi r3, r1, 0x4c
lbl_fn_800F8C6C_0000033C:
    lwz r0, 0x0(r3)
    add r20, r20, r0
    b lbl_fn_800F8C6C_00000384
lbl_fn_800F8C6C_00000348:
    subi r0, r27, 0x1c72
    cmplw r20, r0
    bge lbl_fn_800F8C6C_00000380
    addi r3, r20, 0x1
    lwz r0, 0x4c(r1)
    srwi r3, r3, 1
    stw r3, 0x48(r1)
    cmplw r3, r0
    addi r3, r1, 0x48
    bge lbl_fn_800F8C6C_00000374
    addi r3, r1, 0x4c
lbl_fn_800F8C6C_00000374:
    lwz r0, 0x0(r3)
    add r20, r20, r0
    b lbl_fn_800F8C6C_00000384
lbl_fn_800F8C6C_00000380:
    addi r20, r29, 0x5555
lbl_fn_800F8C6C_00000384:
    addi r0, r29, 0x5555
    cmplw r20, r0
    ble lbl_fn_800F8C6C_000003AC
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r4, r3, 0x21d
    addi r3, r31, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800F8C6C_000003AC:
    mulli r3, r20, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_800F8C6C_000003D8
    lis r4, lbl_80779DD8@ha
    addi r3, r31, 0xa0
    addi r4, r4, lbl_80779DD8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800F8C6C_000003D8:
    lwz r6, 0x1d8(r1)
    lwz r0, 0x1f8(r1)
    mulli r4, r6, 0xc
    stw r30, 0x1f4(r1)
    lwz r3, 0x150(r1)
    stw r20, 0x1fc(r1)
    mulli r5, r0, 0xc
    lwz r0, 0x154(r1)
    stw r6, 0x204(r1)
    add r4, r30, r4
    lfs f0, 0x158(r1)
    stwux r3, r4, r5
    stw r0, 0x4(r4)
    stfs f0, 0x8(r4)
    lwz r0, 0x1d8(r1)
    lwz r7, 0x1d4(r1)
    mulli r0, r0, 0xc
    lwz r4, 0x204(r1)
    lwz r6, 0x1f8(r1)
    lwz r5, 0x1f4(r1)
    add r3, r7, r0
    addi r6, r6, 0x1
    addi r0, r3, 0xb
    stw r6, 0x1f8(r1)
    subf r0, r7, r0
    divwu r0, r0, r23
    mulli r4, r4, 0xc
    add r6, r5, r4
    mtctr r0
    cmplw r3, r7
    ble lbl_fn_800F8C6C_00000494
lbl_fn_800F8C6C_00000454:
    subic. r6, r6, 0xc
    subi r3, r3, 0xc
    beq lbl_fn_800F8C6C_00000478
    lwz r0, 0x0(r3)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r6)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r6)
lbl_fn_800F8C6C_00000478:
    lwz r5, 0x204(r1)
    lwz r4, 0x1f8(r1)
    subi r0, r5, 0x1
    stw r0, 0x204(r1)
    addi r0, r4, 0x1
    stw r0, 0x1f8(r1)
    bdnz lbl_fn_800F8C6C_00000454
lbl_fn_800F8C6C_00000494:
    lwz r0, 0x1f8(r1)
    cmpwi r19, 0x0
    lwz r6, 0x1dc(r1)
    lwz r5, 0x1fc(r1)
    lwz r3, 0x1d4(r1)
    lwz r4, 0x1f4(r1)
    stw r5, 0x1dc(r1)
    stw r6, 0x1fc(r1)
    stw r4, 0x1d4(r1)
    stw r3, 0x1f4(r1)
    stw r0, 0x1d8(r1)
    stw r26, 0x1f8(r1)
    beq lbl_fn_800F8C6C_000004D8
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_000004D8
    stw r26, 0x1f8(r1)
    bl dtor_80084684
lbl_fn_800F8C6C_000004D8:
    lwz r21, 0x14ac(r21)
lbl_fn_800F8C6C_000004DC:
    cmpwi r21, 0x0
    bne lbl_fn_800F8C6C_00000120
    lwz r4, lbl_8087F408
    lis r3, __files@ha
    lfs f29, lbl_80881478
    addi r31, r3, __files@l
    lwz r21, 0x48(r4)
    addi r25, r1, 0x1dc
    lfs f28, lbl_80881494
    addi r19, r1, 0x1e0
    lfs f26, lbl_80881510
    lis r24, 0xcccd
    lfs f25, lbl_8088151C
    lis r29, 0x1555
    lis r28, 0x71c
    lis r27, 0xe39
    li r26, 0x0
    li r23, 0xc
    b lbl_fn_800F8C6C_000008D0
lbl_fn_800F8C6C_00000528:
    fmr f1, f27
    mr r3, r15
    mr r4, r16
    mr r5, r21
    mr r6, r17
    mr r7, r18
    bl fn_800FBA9C
    cmpwi r3, 0x0
    mr r20, r3
    blt lbl_fn_800F8C6C_000008CC
    mr r3, r21
    mr r4, r20
    bl fn_80148B0C
    lfs f3, 0x530(r16)
    mr r30, r3
    lfs f0, 0xc(r3)
    lfs f5, 0x52c(r16)
    fsubs f6, f3, f0
    lfs f4, 0x8(r3)
    lfs f0, 0x4(r3)
    addi r3, r1, 0x1b0
    lfs f3, 0x528(r16)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x1b4(r1)
    stfs f0, 0x1b0(r1)
    stfs f6, 0x1b8(r1)
    bl fn_805F9940
    lfs f3, 0x10(r30)
    li r0, 0x0
    lfs f0, 0x1b0(r1)
    fsubs f24, f1, f3
    stfs f29, 0x1b4(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_800F8C6C_000005CC
    fcmpu cr0, f29, f29
    bne lbl_fn_800F8C6C_000005CC
    lfs f0, 0x1b8(r1)
    fcmpu cr0, f29, f0
    bne lbl_fn_800F8C6C_000005CC
    li r0, 0x1
lbl_fn_800F8C6C_000005CC:
    cmpwi r0, 0x0
    beq lbl_fn_800F8C6C_000005D8
    stfs f28, 0x1b4(r1)
lbl_fn_800F8C6C_000005D8:
    addi r3, r1, 0x1b0
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x1b0
    addi r4, r1, 0x1c8
    bl fn_805F9990
    fnmsubs f0, f26, f1, f25
    lwz r3, 0x1d8(r1)
    lwz r30, 0x1dc(r1)
    stw r21, 0x144(r1)
    fmuls f24, f24, f0
    cmplw r3, r30
    stw r20, 0x148(r1)
    stfs f24, 0x14c(r1)
    bge lbl_fn_800F8C6C_00000638
    addi r4, r3, 0x1
    lwz r3, 0x1d4(r1)
    subi r0, r4, 0x1
    stw r4, 0x1d8(r1)
    mulli r0, r0, 0xc
    stwux r21, r3, r0
    stw r20, 0x4(r3)
    stfs f24, 0x8(r3)
    b lbl_fn_800F8C6C_000008CC
lbl_fn_800F8C6C_00000638:
    addi r0, r29, 0x5555
    subf r0, r30, r0
    cmplwi r0, 0x1
    bge lbl_fn_800F8C6C_00000664
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r4, r3, 0x21d
    addi r3, r31, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800F8C6C_00000664:
    addi r0, r28, 0x71c7
    cmplw r30, r0
    bge lbl_fn_800F8C6C_00000698
    addi r3, r30, 0x1
    subi r4, r24, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_800F8C6C_000006B4
    b lbl_fn_800F8C6C_000006B4
    b lbl_fn_800F8C6C_000006B4
lbl_fn_800F8C6C_00000698:
    subi r0, r27, 0x1c72
    cmplw r30, r0
    bge lbl_fn_800F8C6C_000006B4
    addi r0, r30, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_800F8C6C_000006B4:
    lwz r3, 0x1d8(r1)
    addi r0, r29, 0x5555
    lwz r20, 0x1dc(r1)
    addi r3, r3, 0x1
    stw r26, 0x1e0(r1)
    subf r3, r20, r3
    subf r0, r20, r0
    cmplw r3, r0
    stw r26, 0x1e4(r1)
    stw r26, 0x1e8(r1)
    stw r25, 0x1ec(r1)
    stw r26, 0x1f0(r1)
    stw r3, 0x40(r1)
    ble lbl_fn_800F8C6C_00000708
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r4, r3, 0x21d
    addi r3, r31, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800F8C6C_00000708:
    addi r0, r28, 0x71c7
    cmplw r20, r0
    bge lbl_fn_800F8C6C_00000750
    addi r4, r20, 0x1
    subi r5, r24, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x40(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x38
    srwi r4, r4, 2
    stw r4, 0x38(r1)
    cmplw r4, r0
    bge lbl_fn_800F8C6C_00000744
    addi r3, r1, 0x40
lbl_fn_800F8C6C_00000744:
    lwz r0, 0x0(r3)
    add r20, r20, r0
    b lbl_fn_800F8C6C_0000078C
lbl_fn_800F8C6C_00000750:
    subi r0, r27, 0x1c72
    cmplw r20, r0
    bge lbl_fn_800F8C6C_00000788
    addi r3, r20, 0x1
    lwz r0, 0x40(r1)
    srwi r3, r3, 1
    stw r3, 0x3c(r1)
    cmplw r3, r0
    addi r3, r1, 0x3c
    bge lbl_fn_800F8C6C_0000077C
    addi r3, r1, 0x40
lbl_fn_800F8C6C_0000077C:
    lwz r0, 0x0(r3)
    add r20, r20, r0
    b lbl_fn_800F8C6C_0000078C
lbl_fn_800F8C6C_00000788:
    addi r20, r29, 0x5555
lbl_fn_800F8C6C_0000078C:
    addi r0, r29, 0x5555
    cmplw r20, r0
    ble lbl_fn_800F8C6C_000007B4
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r4, r3, 0x21d
    addi r3, r31, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800F8C6C_000007B4:
    mulli r3, r20, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_800F8C6C_000007E0
    lis r4, lbl_80779DD8@ha
    addi r3, r31, 0xa0
    addi r4, r4, lbl_80779DD8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800F8C6C_000007E0:
    lwz r7, 0x1d8(r1)
    lwz r6, 0x1e4(r1)
    mulli r3, r7, 0xc
    lwz r5, 0x144(r1)
    addi r4, r6, 0x1
    lwz r0, 0x148(r1)
    lfs f0, 0x14c(r1)
    add r3, r30, r3
    mulli r6, r6, 0xc
    stwux r5, r6, r3
    stw r30, 0x1e0(r1)
    stw r0, 0x4(r6)
    stfs f0, 0x8(r6)
    lwz r0, 0x1d8(r1)
    lwz r5, 0x1d4(r1)
    mulli r0, r0, 0xc
    stw r20, 0x1e8(r1)
    stw r7, 0x1f0(r1)
    add r6, r5, r0
    addi r0, r6, 0xb
    stw r4, 0x1e4(r1)
    subf r0, r5, r0
    divwu r0, r0, r23
    mtctr r0
    cmplw r6, r5
    ble lbl_fn_800F8C6C_00000888
lbl_fn_800F8C6C_00000848:
    subic. r3, r3, 0xc
    subi r6, r6, 0xc
    beq lbl_fn_800F8C6C_0000086C
    lwz r0, 0x0(r6)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r3)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r3)
lbl_fn_800F8C6C_0000086C:
    lwz r5, 0x1f0(r1)
    lwz r4, 0x1e4(r1)
    subi r0, r5, 0x1
    stw r0, 0x1f0(r1)
    addi r0, r4, 0x1
    stw r0, 0x1e4(r1)
    bdnz lbl_fn_800F8C6C_00000848
lbl_fn_800F8C6C_00000888:
    lwz r0, 0x1e4(r1)
    cmpwi r19, 0x0
    lwz r6, 0x1dc(r1)
    lwz r5, 0x1e8(r1)
    lwz r3, 0x1d4(r1)
    lwz r4, 0x1e0(r1)
    stw r5, 0x1dc(r1)
    stw r6, 0x1e8(r1)
    stw r4, 0x1d4(r1)
    stw r3, 0x1e0(r1)
    stw r0, 0x1d8(r1)
    stw r26, 0x1e4(r1)
    beq lbl_fn_800F8C6C_000008CC
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_000008CC
    stw r26, 0x1e4(r1)
    bl dtor_80084684
lbl_fn_800F8C6C_000008CC:
    lwz r21, 0x14ac(r21)
lbl_fn_800F8C6C_000008D0:
    cmpwi r21, 0x0
    bne lbl_fn_800F8C6C_00000528
    lwz r0, 0x1d8(r1)
    addi r3, r1, 0x30
    lwz r6, 0x1d4(r1)
    addi r4, r1, 0x34
    mulli r0, r0, 0xc
    stw r6, 0x30(r1)
    addi r5, r1, 0x20
    add r0, r6, r0
    stw r0, 0x34(r1)
    bl fn_800FA4FC
    addis r0, r15, 0x4
    lfs f25, lbl_80881494
    stw r0, 0x410(r1)
    li r21, 0x0
    lfs f29, lbl_80881478
    li r31, 0x0
    lfs f26, lbl_808814EC
    li r27, -0x1
    li r28, 0x1
    lis r29, lbl_807C7030@ha
    li r26, 0x0
    b lbl_fn_800F8C6C_000011C8
lbl_fn_800F8C6C_00000930:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    blt lbl_fn_800F8C6C_00000944
    cmpw r22, r0
    bge lbl_fn_800F8C6C_000011D4
lbl_fn_800F8C6C_00000944:
    lwz r0, 0x1d4(r1)
    mr r3, r15
    lwz r9, 0x18(r1)
    mr r4, r16
    add r6, r0, r31
    lwzx r5, r31, r0
    lwz r6, 0x4(r6)
    mr r7, r17
    mr r8, r18
    bl fn_800FC410
    lwz r3, 0x410(r1)
    lwz r4, -0x7540(r3)
    li r3, 0x0
    subi r0, r4, 0x1
    cmplwi r0, 0x4
    bgt lbl_fn_800F8C6C_00000994
    slw r0, r28, r0
    andi. r0, r0, 0x19
    beq lbl_fn_800F8C6C_00000994
    li r3, 0x1
lbl_fn_800F8C6C_00000994:
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00001194
    lwz r0, 0x1d4(r1)
    add r4, r0, r31
    lwzx r3, r31, r0
    lwz r4, 0x4(r4)
    bl fn_80148B0C
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00001194
    addis r5, r15, 0x4
    lwz r6, 0x1d4(r1)
    subi r5, r5, 0x7588
    addi r3, r1, 0x2d8
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x79
    lfs f2, 0x8(r5)
    addi r5, r1, 0x1a4
    stfs f2, 0x1ac(r1)
    psq_st f1, 0x0(r5), 0, 0
    lwzx r5, r6, r31
    stfs f29, 0x138(r1)
    stfs f29, 0x13c(r1)
    stfs f25, 0x140(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x138
    addi r3, r1, 0x2d8
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x1d4(r1)
    add r4, r0, r31
    lwzx r3, r31, r0
    lwz r4, 0x4(r4)
    bl fn_80148B0C
    lfs f3, 0xc(r3)
    li r4, 0x28
    lfs f0, 0x140(r1)
    lfs f5, 0x8(r3)
    fadds f6, f3, f0
    lfs f3, 0x4(r3)
    lfs f4, 0x13c(r1)
    addi r3, r16, 0x7d4
    lfs f0, 0x138(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x1a0(r1)
    stfs f4, 0x19c(r1)
    stfs f0, 0x198(r1)
    bl fn_80133EE8
    cmpwi r3, 0x0
    bne lbl_fn_800F8C6C_00000A74
    addi r3, r16, 0x7d4
    li r4, 0x28
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00000AD4
lbl_fn_800F8C6C_00000A74:
    lwz r4, lbl_8087F048
    lis r3, 0x2
    subi r0, r3, 0x7960
    lwz r19, 0x14c(r4)
    addi r3, r19, 0x1
    stw r3, 0x14c(r4)
    cmpw r3, r0
    ble lbl_fn_800F8C6C_00000A98
    stw r26, 0x14c(r4)
lbl_fn_800F8C6C_00000A98:
    li r3, 0x2329
    bl fn_80219E6C
    stw r27, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80881478
    mr r3, r15
    stw r27, 0xc(r1)
    mr r4, r16
    lfs f2, lbl_80881494
    mr r6, r19
    addi r7, r1, 0x1a4
    addi r8, r16, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_800F8C6C_00000AD4:
    addi r3, r16, 0x7d4
    li r4, 0x2f
    bl fn_80133EE8
    cmpwi r3, 0x0
    bne lbl_fn_800F8C6C_00000AFC
    addi r3, r16, 0x7d4
    li r4, 0x2f
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00000B5C
lbl_fn_800F8C6C_00000AFC:
    lwz r4, lbl_8087F048
    lis r3, 0x2
    subi r0, r3, 0x7960
    lwz r19, 0x14c(r4)
    addi r3, r19, 0x1
    stw r3, 0x14c(r4)
    cmpw r3, r0
    ble lbl_fn_800F8C6C_00000B20
    stw r26, 0x14c(r4)
lbl_fn_800F8C6C_00000B20:
    li r3, 0x232a
    bl fn_80219E6C
    stw r27, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80881478
    mr r3, r15
    stw r27, 0xc(r1)
    mr r4, r16
    lfs f2, lbl_80881494
    mr r6, r19
    addi r7, r1, 0x198
    addi r8, r16, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_800F8C6C_00000B5C:
    addi r3, r16, 0x7d4
    li r4, 0x32
    bl fn_80133EE8
    cmpwi r3, 0x0
    bne lbl_fn_800F8C6C_00000B84
    addi r3, r16, 0x7d4
    li r4, 0x32
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00000D78
lbl_fn_800F8C6C_00000B84:
    lwz r3, 0x1d4(r1)
    lwzx r19, r3, r31
    lwz r3, 0x50(r19)
    subis r0, r3, 0x4
    cmplwi r0, 0xa31f
    bne lbl_fn_800F8C6C_00000CBC
    mr r3, r19
    li r4, 0x2
    bl fn_80148B0C
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00000CBC
    lwz r4, lbl_8087F048
    lis r3, 0x2
    subi r0, r3, 0x7960
    lwz r20, 0x14c(r4)
    addi r3, r20, 0x1
    stw r3, 0x14c(r4)
    cmpw r3, r0
    ble lbl_fn_800F8C6C_00000BD4
    stw r26, 0x14c(r4)
lbl_fn_800F8C6C_00000BD4:
    stfs f29, 0x108(r1)
    addi r3, r1, 0x2a8
    li r4, 0x79
    stfs f29, 0x10c(r1)
    stfs f25, 0x110(r1)
    lfs f1, 0x538(r19)
    bl fn_805F8E70
    addi r4, r1, 0x108
    addi r3, r1, 0x2a8
    mr r5, r4
    bl fn_805F93C0
    mr r3, r19
    li r4, 0x2
    bl fn_80148B0C
    lfs f0, 0x10(r3)
    mr r3, r19
    stfs f29, 0x114(r1)
    li r4, 0x2
    stfs f0, 0x118(r1)
    stfs f29, 0x11c(r1)
    bl fn_80148B0C
    frsp f0, f29
    lfs f3, 0xc(r3)
    lfs f5, 0x8(r3)
    lfs f4, 0x118(r1)
    fsubs f6, f3, f0
    lfs f3, 0x4(r3)
    frsp f0, f29
    li r3, 0x232b
    fsubs f5, f5, f4
    lfs f4, 0x110(r1)
    fsubs f7, f3, f0
    lfs f3, 0x10c(r1)
    lfs f0, 0x108(r1)
    fadds f4, f6, f4
    fadds f3, f5, f3
    stfs f7, 0x120(r1)
    fadds f0, f7, f0
    stfs f5, 0x124(r1)
    stfs f6, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f4, 0x134(r1)
    bl fn_80219E6C
    stw r27, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80881478
    mr r3, r15
    stw r27, 0xc(r1)
    mr r4, r16
    lfs f2, lbl_80881494
    mr r6, r20
    addi r7, r1, 0x12c
    addi r8, r16, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_800F8C6C_00000D78
lbl_fn_800F8C6C_00000CBC:
    lwz r4, lbl_8087F048
    lis r3, 0x2
    subi r0, r3, 0x7960
    lwz r20, 0x14c(r4)
    addi r3, r20, 0x1
    stw r3, 0x14c(r4)
    cmpw r3, r0
    ble lbl_fn_800F8C6C_00000CE0
    stw r26, 0x14c(r4)
lbl_fn_800F8C6C_00000CE0:
    stfs f29, 0xf0(r1)
    addi r3, r1, 0x278
    li r4, 0x79
    stfs f29, 0xf4(r1)
    stfs f25, 0xf8(r1)
    lfs f1, 0x538(r19)
    bl fn_805F8E70
    addi r4, r1, 0xf0
    addi r3, r1, 0x278
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x530(r19)
    li r3, 0x232b
    lfs f0, 0xf8(r1)
    lfs f5, 0x52c(r19)
    fadds f6, f3, f0
    lfs f4, 0xf4(r1)
    lfs f3, 0x528(r19)
    lfs f0, 0xf0(r1)
    fadds f4, f5, f4
    stfs f6, 0x104(r1)
    fadds f0, f3, f0
    stfs f4, 0x100(r1)
    stfs f0, 0xfc(r1)
    bl fn_80219E6C
    stw r27, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80881478
    mr r3, r15
    stw r27, 0xc(r1)
    mr r4, r16
    lfs f2, lbl_80881494
    mr r6, r20
    addi r7, r1, 0xfc
    addi r8, r16, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_800F8C6C_00000D78:
    addi r3, r16, 0x7d4
    li r4, 0x34
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00000E28
    stfs f25, 0xe0(r1)
    addi r20, r16, 0x534
    li r3, 0x232d
    stfs f25, 0xe4(r1)
    stfs f25, 0xe8(r1)
    stfs f25, 0xec(r1)
    bl fn_800EFDA0
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_800F8C6C_00000DF0
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stw r27, 0x8(r1)
    mr r4, r19
    lfs f1, lbl_80881494
    mr r8, r20
    stw r28, 0xc(r1)
    addi r7, r1, 0x198
    addi r9, r1, 0xe0
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_800F8C6C_00000DF0:
    li r3, 0x232d
    bl fn_800EFE3C
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00000E28
    lfs f1, lbl_80881494
    mr r4, r3
    addi r3, r1, 0x2c
    addi r5, r1, 0x198
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_800F8C6C_00000E28:
    addi r3, r16, 0x7d4
    li r4, 0x7
    bl fn_80133EE8
    cmpwi r3, 0x0
    bne lbl_fn_800F8C6C_00000E64
    addi r3, r16, 0x7d4
    li r4, 0x8
    bl fn_80133EE8
    cmpwi r3, 0x0
    bne lbl_fn_800F8C6C_00000E64
    addi r3, r16, 0x7d4
    li r4, 0x9
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_0000110C
lbl_fn_800F8C6C_00000E64:
    lwz r4, 0x1d4(r1)
    addi r3, r1, 0xd0
    lfs f6, 0x530(r16)
    lwzx r4, r4, r31
    lfs f5, 0x52c(r16)
    lfs f0, 0x530(r4)
    lfs f4, 0x52c(r4)
    fsubs f6, f6, f0
    lfs f3, 0x528(r16)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xd4(r1)
    stfs f0, 0xd0(r1)
    stfs f6, 0xd8(r1)
    bl fn_805F9940
    fmr f28, f1
    stfs f25, 0xc0(r1)
    addi r20, r16, 0x534
    addi r23, r16, 0x528
    stfs f25, 0xc4(r1)
    li r3, 0x232f
    stfs f25, 0xc8(r1)
    stfs f25, 0xcc(r1)
    bl fn_800EFDA0
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_800F8C6C_00000F10
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    fdivs f1, f28, f26
    stw r27, 0x8(r1)
    mr r4, r19
    mr r7, r23
    stw r28, 0xc(r1)
    mr r8, r20
    lwz r3, lbl_8087F3C0
    addi r9, r1, 0xc0
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_800F8C6C_00000F10:
    li r3, 0x232f
    bl fn_800EFE3C
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00000F48
    lfs f1, lbl_80881494
    mr r4, r3
    addi r3, r1, 0x28
    addi r5, r1, 0x198
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_800F8C6C_00000F48:
    addic. r0, r1, 0x3c4
    stw r26, 0x3c0(r1)
    beq lbl_fn_800F8C6C_00000F58
    stw r16, 0x3c4(r1)
lbl_fn_800F8C6C_00000F58:
    lwz r5, 0x3c0(r1)
    addi r3, r16, 0x7d4
    li r4, 0x8
    addi r0, r5, 0x1
    stw r0, 0x3c0(r1)
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00001048
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_800F8C6C_00001040
lbl_fn_800F8C6C_00000F84:
    lwz r4, 0x38(r3)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800F8C6C_00000FB0
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_800F8C6C_00000FB0
    li r7, 0x1
lbl_fn_800F8C6C_00000FB0:
    cmpwi r7, 0x0
    beq lbl_fn_800F8C6C_00000FCC
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800F8C6C_00000FCC
    li r6, 0x1
lbl_fn_800F8C6C_00000FCC:
    cmpwi r6, 0x0
    beq lbl_fn_800F8C6C_00001000
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800F8C6C_00000FF4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_800F8C6C_00000FF4
    li r4, 0x1
lbl_fn_800F8C6C_00000FF4:
    cmpwi r4, 0x0
    bne lbl_fn_800F8C6C_00001000
    li r5, 0x1
lbl_fn_800F8C6C_00001000:
    cmpwi r5, 0x0
    beq lbl_fn_800F8C6C_0000103C
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800F8C6C_0000103C
    lwz r0, 0x3c0(r1)
    addi r4, r1, 0x3c4
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_800F8C6C_00001030
    stw r3, 0x0(r4)
lbl_fn_800F8C6C_00001030:
    lwz r4, 0x3c0(r1)
    addi r0, r4, 0x1
    stw r0, 0x3c0(r1)
lbl_fn_800F8C6C_0000103C:
    lwz r3, 0x14ac(r3)
lbl_fn_800F8C6C_00001040:
    cmpwi r3, 0x0
    bne lbl_fn_800F8C6C_00000F84
lbl_fn_800F8C6C_00001048:
    lwz r30, 0x3c0(r1)
    addi r23, r1, 0x3c0
    li r20, 0x0
    b lbl_fn_800F8C6C_00001104
lbl_fn_800F8C6C_00001058:
    lwz r19, 0x4(r23)
    li r3, 0x2330
    stfs f25, 0xb0(r1)
    addi r24, r19, 0xb0
    stfs f25, 0xb4(r1)
    stfs f25, 0xb8(r1)
    stfs f25, 0xbc(r1)
    bl fn_800EFDA0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_800F8C6C_000010C0
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stw r27, 0x8(r1)
    addi r7, r29, lbl_807C7030@l
    lfs f1, lbl_80881494
    mr r4, r25
    stw r28, 0xc(r1)
    mr r5, r24
    mr r8, r7
    addi r9, r1, 0xb0
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_800F8C6C_000010C0:
    addi r19, r19, 0x528
    li r3, 0x2330
    bl fn_800EFE3C
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_000010FC
    lfs f1, lbl_80881494
    mr r4, r3
    mr r5, r19
    addi r3, r1, 0x24
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_800F8C6C_000010FC:
    addi r23, r23, 0x4
    addi r20, r20, 0x1
lbl_fn_800F8C6C_00001104:
    cmplw r20, r30
    blt lbl_fn_800F8C6C_00001058
lbl_fn_800F8C6C_0000110C:
    addi r3, r16, 0x7d4
    li r4, 0x3e
    bl fn_80133EE8
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_800F8C6C_00001194
    lwz r3, 0x4(r3)
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_00001194
    lwz r4, lbl_8087F048
    lis r3, 0x2
    subi r0, r3, 0x7960
    lwz r20, 0x14c(r4)
    addi r3, r20, 0x1
    stw r3, 0x14c(r4)
    cmpw r3, r0
    ble lbl_fn_800F8C6C_00001158
    stw r26, 0x14c(r4)
lbl_fn_800F8C6C_00001158:
    lwz r3, 0x4(r19)
    bl fn_80219E6C
    stw r27, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80881478
    mr r3, r15
    stw r27, 0xc(r1)
    mr r4, r16
    lfs f2, lbl_80881494
    mr r6, r20
    addi r7, r1, 0x1a4
    addi r8, r16, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_800F8C6C_00001194:
    lwz r0, 0x14(r1)
    cmpw r22, r0
    bge lbl_fn_800F8C6C_000011B8
    lwz r0, 0x10(r1)
    addis r3, r15, 0x4
    stwx r16, r14, r0
    add r4, r0, r14
    lwz r0, -0x7510(r3)
    stw r0, 0x4(r4)
lbl_fn_800F8C6C_000011B8:
    addi r22, r22, 0x1
    addi r14, r14, 0x8
    addi r21, r21, 0x1
    addi r31, r31, 0xc
lbl_fn_800F8C6C_000011C8:
    lwz r0, 0x1d8(r1)
    cmplw r21, r0
    blt lbl_fn_800F8C6C_00000930
lbl_fn_800F8C6C_000011D4:
    cmpwi r16, 0x0
    lwz r14, 0x14(r17)
    beq lbl_fn_800F8C6C_000011FC
    lfs f3, 0x28(r17)
    lfs f0, 0x8bc(r16)
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x408(r1)
    lwz r0, 0x40c(r1)
    add r14, r14, r0
lbl_fn_800F8C6C_000011FC:
    lfs f3, 0x40(r17)
    cmpwi r14, 0x0
    lfs f0, 0x8e4(r16)
    lwz r3, 0x3c(r17)
    lwz r0, 0x8ec(r16)
    fadds f28, f3, f0
    add r18, r3, r0
    ble lbl_fn_800F8C6C_0000163C
    lwz r3, lbl_8087F4A0
    addi r21, r1, 0x180
    lfs f29, lbl_80881478
    addi r20, r1, 0x174
    lfs f30, lbl_80881494
    addi r23, r1, 0xa4
    lwz r19, 0x48(r3)
    addi r24, r1, 0x15c
    lfs f31, lbl_80881500
    addi r26, r1, 0x5c
    lfs f26, lbl_808814D4
    addi r25, r1, 0x50
    addi r27, r1, 0x3ac
    b lbl_fn_800F8C6C_00001634
lbl_fn_800F8C6C_00001254:
    lwz r12, 0x0(r19)
    mr r4, r19
    addi r3, r1, 0x18c
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lfs f3, 0x194(r1)
    addi r3, r1, 0x180
    lfs f0, 0x530(r16)
    lfs f5, 0x190(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r16)
    lfs f0, 0x528(r16)
    lfs f3, 0x18c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x188(r1)
    fsubs f0, f3, f0
    stfs f4, 0x184(r1)
    stfs f0, 0x180(r1)
    bl fn_805F9940
    lwz r12, 0x0(r19)
    fmr f25, f1
    mr r3, r19
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    fsubs f24, f25, f1
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    mr r3, r20
    lfs f2, 0x188(r1)
    stfs f2, 0x17c(r1)
    stfs f29, 0x178(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f29
    fmr f23, f1
    ble lbl_fn_800F8C6C_000012F4
    mr r3, r20
    mr r4, r20
    bl fn_805F98D0
lbl_fn_800F8C6C_000012F4:
    stfs f29, 0x168(r1)
    addi r3, r1, 0x308
    li r4, 0x79
    stfs f29, 0x16c(r1)
    stfs f30, 0x170(r1)
    lfs f0, 0x538(r16)
    fadds f1, f27, f0
    bl fn_805F8E70
    addi r4, r1, 0x168
    addi r3, r1, 0x308
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x174
    addi r4, r1, 0x168
    bl fn_805F9990
    fcmpo cr0, f24, f28
    fmr f25, f1
    cror eq, lt, eq
    bne lbl_fn_800F8C6C_00001630
    lfs f0, 0x50(r17)
    fmuls f1, f31, f0
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f25, f0
    cror eq, gt, eq
    bne lbl_fn_800F8C6C_00001630
    lfs f0, 0x54(r17)
    fcmpo cr0, f0, f29
    ble lbl_fn_800F8C6C_000013A8
    fnmsubs f1, f25, f25, f30
    bl fn_8068B100
    frsp f25, f1
    fmr f1, f23
    bl fn_8068B100
    lwz r12, 0x0(r19)
    frsp f24, f1
    mr r3, r19
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lfs f3, 0x54(r17)
    fmuls f0, f24, f25
    fadds f3, f3, f1
    fcmpo cr0, f0, f3
    bgt lbl_fn_800F8C6C_00001630
lbl_fn_800F8C6C_000013A8:
    lfs f0, 0x180(r1)
    fcmpu cr0, f29, f0
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800F8C6C_000013CC
    lfs f0, 0x184(r1)
    fcmpu cr0, f29, f0
    mfcr r0
    extrwi r0, r0, 1, 2
lbl_fn_800F8C6C_000013CC:
    cmpwi r0, 0x0
    beq lbl_fn_800F8C6C_000013E4
    lfs f0, 0x188(r1)
    fcmpu cr0, f29, f0
    mfcr r0
    extrwi r0, r0, 1, 2
lbl_fn_800F8C6C_000013E4:
    cmpwi r0, 0x0
    bne lbl_fn_800F8C6C_00001410
    psq_l f1, 0x0(r21), 0, 0
    mr r3, r23
    lfs f2, 0x188(r1)
    mr r4, r23
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    mr r3, r23
    b lbl_fn_800F8C6C_00001420
lbl_fn_800F8C6C_00001410:
    stfs f29, 0x98(r1)
    addi r3, r1, 0x98
    stfs f30, 0x9c(r1)
    stfs f29, 0xa0(r1)
lbl_fn_800F8C6C_00001420:
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x164(r1)
    frsp f0, f0
    fcmpo cr0, f0, f26
    bge lbl_fn_800F8C6C_00001460
    lfs f0, 0x15c(r1)
    fcmpo cr0, f0, f29
    ble lbl_fn_800F8C6C_00001454
    lfs f0, lbl_808814D8
    b lbl_fn_800F8C6C_00001458
lbl_fn_800F8C6C_00001454:
    lfs f0, lbl_808814DC
lbl_fn_800F8C6C_00001458:
    stfs f0, 0x54(r1)
    b lbl_fn_800F8C6C_00001474
lbl_fn_800F8C6C_00001460:
    frsp f2, f2
    lfs f1, 0x15c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_800F8C6C_00001474:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x248
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f0, 0x250(r1)
    mr r4, r26
    lfs f3, 0x24c(r1)
    mr r5, r26
    lfs f4, 0x248(r1)
    addi r3, r1, 0x208
    lfs f5, 0x260(r1)
    lfs f6, 0x25c(r1)
    lfs f7, 0x258(r1)
    lfs f8, 0x270(r1)
    lfs f9, 0x26c(r1)
    lfs f10, 0x268(r1)
    lfs f11, 0x274(r1)
    lfs f12, 0x264(r1)
    lfs f13, 0x254(r1)
    psq_l f1, 0x0(r24), 0, 0
    lfs f2, 0x164(r1)
    stfs f29, 0x238(r1)
    stfs f29, 0x23c(r1)
    stfs f29, 0x240(r1)
    stfs f30, 0x244(r1)
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f4, 0x208(r1)
    stfs f3, 0x20c(r1)
    stfs f0, 0x210(r1)
    stfs f7, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f5, 0x88(r1)
    stfs f7, 0x218(r1)
    stfs f6, 0x21c(r1)
    stfs f5, 0x220(r1)
    stfs f10, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f10, 0x228(r1)
    stfs f9, 0x22c(r1)
    stfs f8, 0x230(r1)
    stfs f13, 0x68(r1)
    stfs f12, 0x6c(r1)
    stfs f11, 0x70(r1)
    stfs f13, 0x214(r1)
    stfs f12, 0x224(r1)
    stfs f11, 0x234(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f26
    bge lbl_fn_800F8C6C_00001580
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f29
    ble lbl_fn_800F8C6C_00001570
    lfs f0, lbl_808814D8
    b lbl_fn_800F8C6C_00001574
lbl_fn_800F8C6C_00001570:
    lfs f0, lbl_808814DC
lbl_fn_800F8C6C_00001574:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_800F8C6C_00001594
lbl_fn_800F8C6C_00001580:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_800F8C6C_00001594:
    fmr f2, f29
    psq_l f1, 0x0(r25), 0, 0
    stfs f29, 0x58(r1)
    addi r3, r1, 0x390
    li r4, 0x0
    li r5, 0x30
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x164(r1)
    bl memset
    psq_l f1, 0x0(r21), 0, 0
    lfs f2, 0x188(r1)
    stw r14, 0x390(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x3b4(r1)
    stw r16, 0x3b8(r1)
    lwz r0, 0x50(r19)
    cmpwi r0, 0x1
    beq lbl_fn_800F8C6C_000015E8
    cmpwi r0, 0x10
    beq lbl_fn_800F8C6C_0000160C
    b lbl_fn_800F8C6C_00001630
lbl_fn_800F8C6C_000015E8:
    cmpwi r18, 0x2
    blt lbl_fn_800F8C6C_00001630
    lwz r12, 0x0(r19)
    mr r3, r19
    addi r4, r1, 0x390
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_fn_800F8C6C_00001630
lbl_fn_800F8C6C_0000160C:
    lwz r0, 0x48(r16)
    cmpwi r0, 0x0
    bne lbl_fn_800F8C6C_00001630
    lwz r12, 0x0(r19)
    mr r3, r19
    addi r4, r1, 0x390
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_800F8C6C_00001630:
    lwz r19, 0x5c(r19)
lbl_fn_800F8C6C_00001634:
    cmpwi r19, 0x0
    bne lbl_fn_800F8C6C_00001254
lbl_fn_800F8C6C_0000163C:
    cmpwi r22, 0x0
    ble lbl_fn_800F8C6C_000016D4
    cmpwi r16, 0x0
    beq lbl_fn_800F8C6C_000016D4
    lwz r0, 0x48(r16)
    cmpwi r0, 0x0
    bne lbl_fn_800F8C6C_000016D4
    lwz r0, 0x12a4(r16)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800F8C6C_00001670
    addis r3, r15, 0x4
    lfs f4, -0x75c8(r3)
    b lbl_fn_800F8C6C_00001674
lbl_fn_800F8C6C_00001670:
    lfs f4, lbl_80881494
lbl_fn_800F8C6C_00001674:
    addis r3, r15, 0x4
    lfs f0, -0x75ec(r3)
    lfs f3, -0x75fc(r3)
    fmuls f4, f0, f4
    lfs f0, -0x75f4(r3)
    fadds f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_800F8C6C_00001698
    b lbl_fn_800F8C6C_0000169C
lbl_fn_800F8C6C_00001698:
    fmr f3, f0
lbl_fn_800F8C6C_0000169C:
    lfs f5, lbl_80881478
    fcmpo cr0, f5, f3
    ble lbl_fn_800F8C6C_000016AC
    b lbl_fn_800F8C6C_000016CC
lbl_fn_800F8C6C_000016AC:
    addis r3, r15, 0x4
    lfs f3, -0x75fc(r3)
    lfs f0, -0x75f4(r3)
    fadds f5, f3, f4
    fcmpo cr0, f5, f0
    bge lbl_fn_800F8C6C_000016C8
    b lbl_fn_800F8C6C_000016CC
lbl_fn_800F8C6C_000016C8:
    fmr f5, f0
lbl_fn_800F8C6C_000016CC:
    addis r3, r15, 0x4
    stfs f5, -0x75fc(r3)
lbl_fn_800F8C6C_000016D4:
    addis r5, r15, 0x4
    lwz r0, -0x6e24(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800F8C6C_000017E4
    lfs f0, lbl_80881478
    li r0, 0x0
    stfs f0, 0x370(r1)
    addi r3, r1, 0x370
    psq_l f1, 0x528(r16), 0, 0
    addi r4, r1, 0x37c
    stfs f0, 0x374(r1)
    lwz r6, -0x732c(r5)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x534(r16), 0, 0
    cmplwi r6, 0x20
    stfs f0, 0x37c(r1)
    lfs f2, 0x530(r16)
    stfs f0, 0x380(r1)
    lfs f3, 0x40(r17)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x8e4(r16)
    stfs f2, 0x378(r1)
    fadds f0, f3, f0
    lfs f4, 0x380(r1)
    lfs f2, 0x53c(r16)
    fadds f3, f4, f27
    stw r0, 0x38c(r1)
    stw r0, 0x368(r1)
    stw r17, 0x36c(r1)
    stfs f2, 0x384(r1)
    stfs f3, 0x380(r1)
    stfs f0, 0x388(r1)
    blt lbl_fn_800F8C6C_00001774
    lwz r4, -0x6e28(r5)
    lwz r3, -0x732c(r5)
    addi r0, r4, 0x1
    clrlwi r4, r0, 27
    stw r4, -0x6e28(r5)
    subi r0, r3, 0x1
    stw r0, -0x732c(r5)
lbl_fn_800F8C6C_00001774:
    addis r6, r15, 0x4
    addi r5, r1, 0x370
    lwz r3, -0x6e28(r6)
    addi r7, r1, 0x37c
    lwzu r0, -0x732c(r6)
    psq_l f1, 0x0(r5), 0, 0
    add r0, r3, r0
    lwz r4, 0x368(r1)
    clrlwi r0, r0, 27
    lwz r3, 0x36c(r1)
    mulli r5, r0, 0x28
    lfs f2, 0x378(r1)
    lfs f0, 0x388(r1)
    lwz r0, 0x38c(r1)
    add r5, r6, r5
    stw r4, 0x4(r5)
    stw r3, 0x8(r5)
    psq_st f1, 0xc(r5), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x14(r5)
    lfs f2, 0x384(r1)
    psq_st f1, 0x18(r5), 0, 0
    stfs f2, 0x20(r5)
    stfs f0, 0x24(r5)
    stw r0, 0x28(r5)
    lwz r3, 0x0(r6)
    addi r0, r3, 0x1
    stw r0, 0x0(r6)
lbl_fn_800F8C6C_000017E4:
    cmpwi r16, 0x0
    beq lbl_fn_800F8C6C_000017F4
    li r0, 0x0
    stw r0, 0xad8(r16)
lbl_fn_800F8C6C_000017F4:
    addic. r0, r1, 0x1d4
    beq lbl_fn_800F8C6C_0000181C
    beq lbl_fn_800F8C6C_0000181C
    lwz r3, 0x1d4(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800F8C6C_0000181C
    lwz r0, 0x1d8(r1)
    subf r0, r0, r0
    stw r0, 0x1d8(r1)
    bl dtor_80084684
lbl_fn_800F8C6C_0000181C:
    mr r3, r22
lbl_fn_800F8C6C_00001820:
    addi r11, r1, 0x460
    psq_l f31, 0x4e8(r1), 0, 0
    lfd f31, 0x4e0(r1)
    psq_l f30, 0x4d8(r1), 0, 0
    lfd f30, 0x4d0(r1)
    psq_l f29, 0x4c8(r1), 0, 0
    lfd f29, 0x4c0(r1)
    psq_l f28, 0x4b8(r1), 0, 0
    lfd f28, 0x4b0(r1)
    psq_l f27, 0x4a8(r1), 0, 0
    lfd f27, 0x4a0(r1)
    psq_l f26, 0x498(r1), 0, 0
    lfd f26, 0x490(r1)
    psq_l f25, 0x488(r1), 0, 0
    lfd f25, 0x480(r1)
    psq_l f24, 0x478(r1), 0, 0
    lfd f24, 0x470(r1)
    psq_l f23, 0x468(r1), 0, 0
    lfd f23, 0x460(r1)
    bl _restgpr_14
    lwz r0, 0x4f4(r1)
    mtlr r0
    addi r1, r1, 0x4f0
    blr
}
